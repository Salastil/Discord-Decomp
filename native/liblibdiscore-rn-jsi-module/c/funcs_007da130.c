// ===== 007da130  FUN_007da130 =====

void FUN_007da130(long *param_1)

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
                    /* try { // try from 007da1f4 to 007da1fb has its CatchHandler @ 007da2c4 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 1);
  }
  if (*(char *)((long)param_1 + 0x131) != '\x02') {
                    /* try { // try from 007da208 to 007da20f has its CatchHandler @ 007da2b0 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x13);
                    /* try { // try from 007da210 to 007da217 has its CatchHandler @ 007da2a8 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x1c);
  }
  if (*(char *)((long)param_1 + 0x1e1) == '\x02') {
    return;
  }
                    /* try { // try from 007da23c to 007da243 has its CatchHandler @ 007da294 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x29);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x32);
  return;
}


// ===== 007da2e4  FUN_007da2e4 =====

void FUN_007da2e4(long param_1)

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


// ===== 007da3f0  FUN_007da3f0 =====

void FUN_007da3f0(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007da41c to 007da423 has its CatchHandler @ 007da464 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 007da440 to 007da447 has its CatchHandler @ 007da494 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x007da460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 007da4b8  FUN_007da4b8 =====

void FUN_007da4b8(ulong *param_1)

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


// ===== 007da508  FUN_007da508 =====

void FUN_007da508(long *param_1)

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


// ===== 007da558  FUN_007da558 =====

void FUN_007da558(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 8);
    do {
      if (puVar5[-1] != 0) {
        free((void *)*puVar5);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  plVar3 = *(long **)(param_1 + 0xd8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007da5e0 to 007da5e3 has its CatchHandler @ 007da73c */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0xf0);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007da604 to 007da607 has its CatchHandler @ 007da734 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x100);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007da624 to 007da62b has its CatchHandler @ 007da72c */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x100);
  }
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
                    /* try { // try from 007da648 to 007da64f has its CatchHandler @ 007da724 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x110);
  }
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
                    /* try { // try from 007da66c to 007da673 has its CatchHandler @ 007da71c */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow(param_1 + 0x120)
    ;
  }
  plVar3 = *(long **)(param_1 + 0x128);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007da690 to 007da697 has its CatchHandler @ 007da714 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x128);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    free(*(void **)(param_1 + 0x30));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
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
                    /* try { // try from 007da6e4 to 007da6eb has its CatchHandler @ 007da700 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow
              (param_1 + 0x138);
  }
  FUN_007d8730(param_1 + 0x58);
  return;
}


// ===== 007da860  FUN_007da860 =====

void FUN_007da860(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
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
                    /* try { // try from 007da894 to 007da897 has its CatchHandler @ 007da8f8 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow();
  }
  lVar5 = param_1[2] + 1;
  lVar3 = param_1[1];
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 007da8ac to 007da8af has its CatchHandler @ 007da90c */
    FUN_007868b4(lVar3);
    lVar3 = lVar3 + 0x98;
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007da954  FUN_007da954 =====

void FUN_007da954(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
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
                    /* try { // try from 007da984 to 007da987 has its CatchHandler @ 007daa00 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow();
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1[1] + 8);
    do {
      if ((puVar5[-1] != -1) && (puVar5[-1] != 0)) {
        free((void *)*puVar5);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007daa14  FUN_007daa14 =====

void FUN_007daa14(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007daa24 to 007daa27 has its CatchHandler @ 007daab0 */
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
                    /* try { // try from 007daa50 to 007daa77 has its CatchHandler @ 007daaa8 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x007daa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 007daae4  FUN_007daae4 =====

void FUN_007daae4(long *param_1)

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


// ===== 007dab30  FUN_007dab30 =====

void FUN_007dab30(char *param_1)

{
  long *__ptr;
  
  if (*param_1 != -2) {
    if (*param_1 == '\x02') {
      __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007dab64 to 007dab6b has its CatchHandler @ 007dabc0 */
      (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
      free(__ptr);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 007dab8c to 007dab93 has its CatchHandler @ 007dabf4 */
      (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
                (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
    if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007dabb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
                (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      return;
    }
  }
  return;
}


// ===== 007dac1c  FUN_007dac1c =====

void FUN_007dac1c(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  
  uVar9 = *(ulong *)(param_1 + 0x388);
  if (uVar9 == 0xffffffffffffffff) {
    puVar13 = *(undefined8 **)(param_1 + 0x398);
    pvVar4 = *(void **)(param_1 + 0x390);
    pcVar5 = (code *)*puVar13;
    if (pcVar5 != (code *)0x0) {
                    /* try { // try from 007dacac to 007dacb3 has its CatchHandler @ 007dafc0 */
      (*pcVar5)(pvVar4);
    }
    if (puVar13[1] != 0) {
      free(pvVar4);
    }
    goto LAB_007dae10;
  }
  lVar15 = uVar9 + 0x7fffffffffffffef;
  if (uVar9 < 0x8000000000000011) {
    lVar15 = 0xb;
  }
  if (lVar15 < 0xb) {
    if (lVar15 < 8) {
      if (lVar15 - 2U < 6) goto LAB_007dae10;
      if ((lVar15 == 0) || (lVar15 == 1)) {
        if (*(long *)(param_1 + 0x390) == 0) goto LAB_007dae10;
        pvVar4 = *(void **)(param_1 + 0x398);
LAB_007dad60:
        free(pvVar4);
        goto LAB_007dae10;
      }
    }
    else {
      if (lVar15 - 9U < 2) goto LAB_007dae10;
      if (lVar15 == 8) {
                    /* try { // try from 007dad10 to 007dad1b has its CatchHandler @ 007daf98 */
        if (((*(long *)(param_1 + 0x390) < -0x7fffffffffffffeb) ||
            (*(long *)(param_1 + 0x390) == -1)) ||
           (FUN_0078ad9c(param_1 + 0x390), *(long *)(param_1 + 0x390) == 0)) goto LAB_007dae10;
        pvVar4 = *(void **)(param_1 + 0x398);
LAB_007dad30:
        free(pvVar4);
        goto LAB_007dae10;
      }
    }
LAB_007dadec:
    plVar7 = *(long **)(param_1 + 0x390);
    lVar15 = param_1 + 0x390;
    do {
      bVar3 = *plVar7 + -1 == 0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if (0xd < lVar15) {
      if (lVar15 - 0xeU < 7) goto LAB_007dae10;
      goto LAB_007dadec;
    }
    if (lVar15 == 0xb) {
      uVar6 = uVar9 ^ 0x8000000000000000;
      if (-1 < (long)uVar9) {
        uVar6 = 0xd;
      }
      if ((uVar6 < 0xd) || (uVar6 - 0xe < 2)) goto LAB_007dae10;
      if (uVar6 == 0xd) {
        if ((((*(byte *)(param_1 + 0x3a0) & 1) == 0) && (*(long *)(param_1 + 0x3a8) != -1)) &&
           (*(long *)(param_1 + 0x3a8) != 0)) {
          free(*(void **)(param_1 + 0x3b0));
        }
                    /* try { // try from 007dada4 to 007dadab has its CatchHandler @ 007daf7c */
        FUN_0078aba0(param_1 + 0x388);
        if (*(long *)(param_1 + 0x388) == 0) goto LAB_007dae10;
        pvVar4 = *(void **)(param_1 + 0x390);
        goto LAB_007dad30;
      }
      plVar7 = *(long **)(param_1 + 0x390);
      lVar15 = param_1 + 0x390;
      do {
        bVar3 = *plVar7 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      if (lVar15 != 0xc) {
        if (lVar15 == 0xd) {
          if (*(long *)(param_1 + 0x390) == 0) goto LAB_007dae10;
          pvVar4 = *(void **)(param_1 + 0x398);
          goto LAB_007dad60;
        }
        goto LAB_007dadec;
      }
      if (*(long *)(param_1 + 0x390) != 4) goto LAB_007dae10;
      plVar7 = *(long **)(param_1 + 0x398);
      lVar15 = param_1 + 0x398;
      do {
        bVar3 = *plVar7 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  if (bVar3) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007dae0c to 007dae0f has its CatchHandler @ 007dafb8 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(lVar15);
  }
LAB_007dae10:
                    /* try { // try from 007dae10 to 007dae17 has its CatchHandler @ 007dafe8 */
  FUN_007d9dd4(param_1);
  if (*(long *)(param_1 + 0x368) != 0) {
    free(*(void **)(param_1 + 0x370));
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    free(*(void **)(param_1 + 0x408));
  }
  uVar9 = *(ulong *)(param_1 + 0x3f0);
  if (uVar9 != 0) {
    uVar10 = *(ulong *)(param_1 + 0x3d8);
    uVar8 = *(ulong *)(param_1 + 1000);
    lVar15 = *(long *)(param_1 + 0x3e0);
    uVar6 = 0;
    if (uVar10 <= uVar8) {
      uVar6 = uVar10;
    }
    lVar11 = uVar8 - uVar6;
    uVar14 = uVar10 - lVar11;
    lVar12 = 0;
    if (uVar14 <= uVar9) {
      lVar12 = uVar9 - uVar14;
    }
    if (uVar9 <= uVar14) {
      uVar10 = lVar11 + uVar9;
    }
    lVar11 = uVar10 - lVar11;
    if (lVar11 != 0) {
      puVar13 = (undefined8 *)(uVar8 * 0x18 + uVar6 * -0x18 + lVar15 + 8);
      do {
        if (puVar13[-1] != 0) {
          free((void *)*puVar13);
        }
        lVar11 = lVar11 + -1;
        puVar13 = puVar13 + 3;
      } while (lVar11 != 0);
    }
    if (uVar14 < uVar9) {
      puVar13 = (undefined8 *)(lVar15 + 8);
      do {
        if (puVar13[-1] != 0) {
          free((void *)*puVar13);
        }
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + 3;
      } while (lVar12 != 0);
    }
  }
  if (*(long *)(param_1 + 0x3d8) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x3e0));
  return;
}


// ===== 007db044  FUN_007db044 =====

void FUN_007db044(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007db054 to 007db057 has its CatchHandler @ 007db0e8 */
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
                    /* try { // try from 007db080 to 007db0a7 has its CatchHandler @ 007db0e0 */
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


// ===== 007db124  FUN_007db124 =====

void FUN_007db124(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 007db140  FUN_007db140 =====

void FUN_007db140(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007db158  FUN_007db158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007db158(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  char *pcVar22;
  char cVar23;
  undefined8 uVar24;
  undefined1 uVar25;
  long lVar26;
  size_t sVar27;
  void *pvVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 auStack_9060 [36847];
  undefined1 auStack_71 [17];
  
  puVar12 = &stack0xffffffffffffffa0;
  do {
    puVar8 = puVar12;
    *(undefined8 *)(puVar8 + -0x1000) = 0;
    puVar12 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != auStack_9060);
  *(undefined8 *)(puVar8 + -0x1a30) = 0;
  bVar17 = *(byte *)(param_2 + 0x594);
  if (bVar17 < 3) {
    if (bVar17 != 0) {
      if (bVar17 == 1) {
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00adfa80);
      }
      core::panicking::panic_const::panic_const_async_fn_resumed_panic();
LAB_007dc420:
                    /* try { // try from 007dc420 to 007dc43b has its CatchHandler @ 007dc710 */
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00adfb58);
LAB_007dcb18:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x7dcb1c);
      (*pcVar7)();
    }
    memcpy(puVar8 + -0x1a00,param_2 + 2,0x2c90);
    iVar9 = *(int *)(param_2 + 1);
    if (iVar9 == -1) {
      memcpy(param_2 + 0x595,param_2 + 2,0x2c90);
      goto LAB_007db240;
    }
    uVar24 = *param_2;
                    /* try { // try from 007db1e8 to 007db227 has its CatchHandler @ 007dc748 */
    auVar38 = <tokio::time::instant::tokio::time::instant::Instant>::now();
    *(undefined1 (*) [12])(puVar8 + 0x7320) = auVar38;
    auVar37 = <tokio::time::instant::tokio::time::instant::Instant>::checked_add
                        (puVar8 + 0x7320,uVar24,iVar9);
    if (auVar37._8_4_ == -1) {
                    /* try { // try from 007db500 to 007db50f has its CatchHandler @ 007dc748 */
      <tokio::time::sleep::tokio::time::sleep::Sleep>::far_future(puVar8 + 0x7320,0);
    }
    else {
      <tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout
                (puVar8 + 0x7320,auVar37._0_8_,auVar37._8_8_,0,
                 &PTR_s__root__cargo_registry_src_index__00adfa68);
    }
    memcpy(puVar8 + 0x1308,puVar8 + -0x1a00,0x2c90);
    *(undefined8 *)(puVar8 + 0x12d8) = *(undefined8 *)(puVar8 + 0x7368);
    *(undefined8 *)(puVar8 + 0x12d0) = *(undefined8 *)(puVar8 + 0x7360);
    *(undefined8 *)(puVar8 + 0x12e8) = *(undefined8 *)(puVar8 + 0x7378);
    *(undefined8 *)(puVar8 + 0x12e0) = *(undefined8 *)(puVar8 + 0x7370);
    *(undefined8 *)(puVar8 + 0x1298) = *(undefined8 *)(puVar8 + 0x7328);
    *(undefined8 *)(puVar8 + 0x1290) = *(undefined8 *)(puVar8 + 0x7320);
    *(undefined8 *)(puVar8 + 0x12a8) = *(undefined8 *)(puVar8 + 0x7338);
    *(undefined8 *)(puVar8 + 0x12a0) = *(undefined8 *)(puVar8 + 0x7330);
    *(undefined8 *)(puVar8 + 0x1300) = *(undefined8 *)(puVar8 + 0x7390);
    *(undefined8 *)(puVar8 + 0x12f8) = *(undefined8 *)(puVar8 + 0x7388);
    *(undefined8 *)(puVar8 + 0x12f0) = *(undefined8 *)(puVar8 + 0x7380);
    *(undefined8 *)(puVar8 + 0x12b8) = *(undefined8 *)(puVar8 + 0x7348);
    *(undefined8 *)(puVar8 + 0x12b0) = *(undefined8 *)(puVar8 + 0x7340);
    *(undefined8 *)(puVar8 + 0x12c8) = *(undefined8 *)(puVar8 + 0x7358);
    *(undefined8 *)(puVar8 + 0x12c0) = *(undefined8 *)(puVar8 + 0x7350);
    memcpy(param_2 + 0x595,puVar8 + 0x1290,0x2d08);
  }
  else if (bVar17 != 3) {
LAB_007db240:
    bVar17 = *(byte *)((long)param_2 + 0x2f5a);
    puVar10 = param_2 + 0xb23;
    *(undefined8 **)(puVar8 + -0x1a08) = param_2 + 0x595;
    if (bVar17 < 4) {
      if (1 < bVar17) {
        if (bVar17 != 3) {
          core::panicking::panic_const::panic_const_async_fn_resumed_panic
                    (&PTR_s__root__cargo_registry_src_index__00adfb58);
          goto LAB_007dcb18;
        }
        auVar37 = *(undefined1 (*) [16])(param_2 + 0x5ee);
LAB_007db4ac:
                    /* try { // try from 007db4b0 to 007db4bf has its CatchHandler @ 007dc65c */
        (**(code **)(auVar37._8_8_ + 0x18))(puVar8 + 0x7320,auVar37._0_8_,param_3);
        lVar26 = *(long *)(puVar8 + 0x7320);
        if (lVar26 == -2) {
          uVar25 = 3;
          goto LAB_007dcd5c;
        }
        uVar24 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + 0x7328);
        uVar15 = *(undefined8 *)(puVar8 + 0x7330);
        auVar37 = *(undefined1 (*) [16])(puVar8 + 0x7328);
        *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
        memcpy(puVar8 + 0x4480,puVar8 + 0x7338,0x430);
        puVar10 = (undefined8 *)param_2[0x5ef];
        pvVar28 = (void *)param_2[0x5ee];
        pcVar7 = (code *)*puVar10;
        if (pcVar7 != (code *)0x0) {
                    /* try { // try from 007db64c to 007db653 has its CatchHandler @ 007dc570 */
          (*pcVar7)(pvVar28);
        }
        if (puVar10[1] != 0) {
          free(pvVar28);
        }
        if (lVar26 != -1) {
          memcpy(puVar8 + 0x4050,puVar8 + 0x4480,0x430);
          *(long *)(puVar8 + 0x4038) = lVar26;
          *(undefined1 *)((long)param_2 + 0x2f63) = 1;
          *(undefined8 *)(puVar8 + 0x4040) = uVar24;
          *(undefined8 *)(puVar8 + 0x4048) = uVar15;
          puVar10 = *(undefined8 **)(puVar8 + -0x1a10);
          if (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
            *(undefined **)(puVar8 + 0x7320) = &DAT_002a1040;
            *(undefined8 *)(puVar8 + 0x7328) = 0x10;
            *(undefined **)(puVar8 + 0x7330) = &DAT_002a1040;
            *(undefined8 *)(puVar8 + 0x7338) = 0x10;
            *(undefined ***)(puVar8 + 0x7340) = &PTR_s__root__cargo_registry_src_index__00adfb70;
                    /* try { // try from 007db6d8 to 007db6f3 has its CatchHandler @ 007dc538 */
            FUN_0079a098(&DAT_002e5d2f,0x35,5,puVar8 + 0x7320);
          }
          sVar27 = param_2[0x5e2];
          if ((long)sVar27 < 0) {
            uVar24 = 0;
LAB_007db700:
                    /* try { // try from 007db700 to 007db70b has its CatchHandler @ 007dc818 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(uVar24,sVar27);
          }
          if (sVar27 == 0) {
            puVar12 = &DAT_00000001;
          }
          else {
            pvVar28 = (void *)param_2[0x5e1];
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            uVar24 = 1;
            puVar12 = (undefined1 *)FUN_004b25a4(sVar27,1);
            if (puVar12 == (undefined1 *)0x0) goto LAB_007db700;
            memcpy(puVar12,pvVar28,sVar27);
          }
          *(size_t *)(puVar8 + 0x59c0) = sVar27;
          *(undefined1 **)(puVar8 + 0x59c8) = puVar12;
          *(size_t *)(puVar8 + 0x59d0) = sVar27;
                    /* try { // try from 007dbcb4 to 007dbcc7 has its CatchHandler @ 007dc818 */
          <rustls_pki_types::server_name::ServerName_as_core::convert::TryFrom<alloc::string::String>>
          ::try_from(puVar8 + 0x7320,puVar8 + 0x59c0);
          if (puVar8[0x7320] == '\x02') {
            param_2[0xb24] = &DAT_002e5d0e;
            param_2[0xb25] = 0x13;
            *(undefined1 *)puVar10 = 2;
          }
          else {
            uVar24 = *(undefined8 *)(puVar8 + 0x7320);
            uVar31 = *(undefined8 *)(puVar8 + 0x7338);
            uVar15 = *(undefined8 *)(puVar8 + 0x7330);
            puVar10[1] = *(undefined8 *)(puVar8 + 0x7328);
            *puVar10 = uVar24;
            puVar10[3] = uVar31;
            puVar10[2] = uVar15;
          }
          *(undefined1 *)((long)param_2 + 0x2f5c) = 1;
          *(undefined1 *)((long)param_2 + 0x2f63) = 0;
          memcpy(puVar8 + 0x7320,puVar8 + 0x4038,0x448);
          cVar23 = *(char *)(param_2 + 0x5be);
          uVar24 = param_2[0x5e1];
          uVar15 = param_2[0x5e2];
          uVar3 = *(undefined2 *)(param_2 + 0x5eb);
          *(undefined1 *)((long)param_2 + 0x2f5e) = 0;
          *(undefined8 *)(puVar8 + -0x1a20) = param_2[0x5e0];
          *(undefined8 *)(puVar8 + -0x1a18) = uVar24;
          *(undefined8 *)(puVar8 + -0x1a28) = uVar15;
          if (cVar23 == '\x02') {
            uVar25 = 2;
          }
          else {
                    /* try { // try from 007dbd78 to 007dbd87 has its CatchHandler @ 007dc4c0 */
            (**(code **)param_2[0x5ba])
                      (puVar8 + 0x5150,param_2 + 0x5bd,param_2[0x5bb],param_2[0x5bc]);
            uVar25 = *(undefined1 *)(param_2 + 0x5be);
            *(undefined8 *)(puVar8 + 0x6238) = *(undefined8 *)(puVar8 + 0x5158);
            *(undefined8 *)(puVar8 + 0x6230) = *(undefined8 *)(puVar8 + 0x5150);
            *(undefined8 *)(puVar8 + 0x6248) = *(undefined8 *)(puVar8 + 0x5168);
            *(undefined8 *)(puVar8 + 0x6240) = *(undefined8 *)(puVar8 + 0x5160);
            *(undefined4 *)(puVar8 + 0x7b90) = *(undefined4 *)(puVar8 + 0x5171);
            *(undefined4 *)(puVar8 + 0x7b93) = *(undefined4 *)(puVar8 + 0x5174);
          }
          *(undefined1 *)((long)param_2 + 0x2f5f) = 0;
          memcpy(puVar8 + 0x59c0,puVar8 + 0x7320,0x448);
          *(undefined8 *)(puVar8 + 0x4d08) = *(undefined8 *)(puVar8 + 0x6238);
          *(undefined8 *)(puVar8 + 0x4d00) = *(undefined8 *)(puVar8 + 0x6230);
          *(undefined8 *)(puVar8 + 0x4d18) = *(undefined8 *)(puVar8 + 0x6248);
          *(undefined8 *)(puVar8 + 0x4d10) = *(undefined8 *)(puVar8 + 0x6240);
          *(undefined4 *)(puVar8 + 0x4cf8) = *(undefined4 *)(puVar8 + 0x7b90);
          *(undefined4 *)(puVar8 + 0x4cfb) = *(undefined4 *)(puVar8 + 0x7b93);
          memcpy(param_2 + 0x5ee,puVar8 + 0x59c0,0x448);
          uVar24 = *(undefined8 *)(puVar8 + -0x1a20);
          uVar15 = *(undefined8 *)(puVar8 + -0x1a18);
          uVar32 = *(undefined8 *)(puVar8 + 0x4d08);
          uVar31 = *(undefined8 *)(puVar8 + 0x4d00);
          uVar34 = *(undefined8 *)(puVar8 + 0x4d18);
          uVar33 = *(undefined8 *)(puVar8 + 0x4d10);
          uVar2 = *(undefined4 *)(puVar8 + 0x4cfb);
          *(undefined1 *)(param_2 + 0x67e) = uVar25;
          param_2[0x67b] = uVar32;
          param_2[0x67a] = uVar31;
          param_2[0x678] = uVar15;
          uVar15 = *(undefined8 *)(puVar8 + -0x1a28);
          param_2[0x677] = uVar24;
          param_2[0x679] = uVar15;
          uVar1 = *(undefined4 *)(puVar8 + 0x4cf8);
          param_2[0x67d] = uVar34;
          param_2[0x67c] = uVar33;
          *(undefined4 *)((long)param_2 + 0x33f1) = uVar1;
          *(undefined4 *)((long)param_2 + 0x33f4) = uVar2;
          param_2[0x680] = param_2[0x5dc];
          param_2[0x67f] = param_2[0x5db];
          param_2[0x682] = param_2[0x5de];
          param_2[0x681] = param_2[0x5dd];
          param_2[0x683] = param_2[0x5df];
          *(undefined2 *)(param_2 + 0x71e) = uVar3;
          *(long *)(puVar8 + -0x1a20) = (long)param_2 + 0x38f4;
          *(undefined1 *)((long)param_2 + 0x38f4) = 0;
          goto LAB_007dbe90;
        }
        cVar23 = '\x02';
        goto LAB_007dce2c;
      }
      if (bVar17 != 0) goto LAB_007dc420;
      puVar29 = *(undefined8 **)(puVar8 + -0x1a08);
      *(undefined2 *)((long)param_2 + 0x2f63) = 0;
      *(undefined8 *)((long)param_2 + 0x2f5b) = 0;
      *(undefined1 *)((long)param_2 + 0x2f61) = 1;
      param_2[0x5bf] = param_2[0x5a6];
      param_2[0x5be] = param_2[0x5a5];
      param_2[0x5c1] = param_2[0x5a8];
      param_2[0x5c0] = param_2[0x5a7];
      param_2[0x5c5] = param_2[0x5ac];
      param_2[0x5c4] = param_2[0x5ab];
      param_2[0x5b9] = param_2[0x5a0];
      param_2[0x5b8] = param_2[0x59f];
      param_2[0x5c3] = param_2[0x5aa];
      param_2[0x5c2] = param_2[0x5a9];
      param_2[0x5bb] = param_2[0x5a2];
      param_2[0x5ba] = param_2[0x5a1];
      param_2[0x5cb] = param_2[0x5b2];
      param_2[0x5ca] = param_2[0x5b1];
      param_2[0x5d0] = param_2[0x5b7];
      param_2[0x5c7] = param_2[0x5ae];
      param_2[0x5c6] = param_2[0x5ad];
      param_2[0x5c9] = param_2[0x5b0];
      param_2[0x5c8] = param_2[0x5af];
      param_2[0x5bd] = param_2[0x5a4];
      param_2[0x5bc] = param_2[0x5a3];
      *(undefined4 *)((long)param_2 + 0x2f65) = 0x1010101;
      param_2[0x5cd] = param_2[0x5b4];
      param_2[0x5cc] = param_2[0x5b3];
      param_2[0x5cf] = param_2[0x5b6];
      param_2[0x5ce] = param_2[0x5b5];
      uVar31 = puVar29[6];
      uVar15 = puVar29[9];
      uVar24 = puVar29[8];
      param_2[0x5d8] = puVar29[7];
      param_2[0x5d7] = uVar31;
      param_2[0x5da] = uVar15;
      param_2[0x5d9] = uVar24;
      uVar32 = puVar29[3];
      uVar31 = puVar29[2];
      uVar33 = puVar29[4];
      uVar15 = puVar29[1];
      uVar24 = *puVar29;
      param_2[0x5d6] = puVar29[5];
      param_2[0x5d5] = uVar33;
      puVar6 = PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
      param_2[0x5d2] = uVar15;
      param_2[0x5d1] = uVar24;
      param_2[0x5d4] = uVar32;
      param_2[0x5d3] = uVar31;
      if (3 < *(ulong *)puVar6) {
        *(undefined8 **)(puVar8 + 0x59c0) = param_2 + 0x5d1;
        *(undefined8 **)(puVar8 + 0x59d0) = param_2 + 0x5c6;
        *(undefined **)(puVar8 + 0x59c8) = PTR_fmt_00b00e30;
        *(undefined **)(puVar8 + 23000) = PTR_fmt_00b00e38;
        *(undefined **)(puVar8 + 0x7358) = &DAT_002a1040;
        *(undefined8 *)(puVar8 + 0x7360) = 0x10;
        *(undefined **)(puVar8 + 0x7370) = &DAT_002b8954;
        *(undefined1 **)(puVar8 + 0x7378) = puVar8 + 0x59c0;
        *(undefined8 *)(puVar8 + 0x7338) = _UNK_002a0818;
        *(undefined8 *)(puVar8 + 0x7330) = _DAT_002a0810;
        *(undefined8 *)(puVar8 + 0x7320) = 0;
        *(undefined **)(puVar8 + 0x7328) = &DAT_002a1040;
        *(undefined8 *)(puVar8 + 0x7350) = _UNK_0029fac8;
        *(undefined8 *)(puVar8 + 0x7348) = _DAT_0029fac0;
        *(char **)(puVar8 + 0x7340) =
             "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs"
        ;
        *(undefined8 *)(puVar8 + 0x7368) = DAT_002a1248;
                    /* try { // try from 007db42c to 007db43b has its CatchHandler @ 007dc60c */
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,puVar8 + 0x7320);
      }
      if ((*(uint *)(param_2 + 0x5d1) & 1) == 0) {
        uVar24 = param_2[0x5d2];
        uVar31 = param_2[0x5d5];
        uVar15 = param_2[0x5d4];
        *(undefined1 *)((long)param_2 + 0x2f66) = 0;
        *(undefined1 *)((long)param_2 + 0x2f65) = 0;
        *(undefined8 *)(puVar8 + 0x6238) = param_2[0x5d3];
        *(undefined8 *)(puVar8 + 0x6230) = uVar24;
        *(undefined8 *)(puVar8 + 0x6248) = uVar31;
        *(undefined8 *)(puVar8 + 0x6240) = uVar15;
        uVar15 = param_2[0x5d6];
        uVar32 = param_2[0x5d9];
        uVar31 = param_2[0x5d8];
        uVar24 = param_2[0x5da];
        *(undefined8 *)(puVar8 + 0x5158) = param_2[0x5d7];
        *(undefined8 *)(puVar8 + 0x5150) = uVar15;
        *(undefined8 *)(puVar8 + 0x5168) = uVar32;
        *(undefined8 *)(puVar8 + 0x5160) = uVar31;
        *(undefined8 *)(puVar8 + 0x5170) = uVar24;
                    /* try { // try from 007db738 to 007db753 has its CatchHandler @ 007dc5a4 */
        reqwest::connect::into_uri(puVar8 + 0x59c0,&DAT_002a02b0,puVar8 + 0x6230);
      }
      else {
        uVar24 = param_2[0x5d2];
        uVar31 = param_2[0x5d5];
        uVar15 = param_2[0x5d4];
        *(undefined1 *)(param_2 + 0x5ed) = 0;
        *(undefined1 *)((long)param_2 + 0x2f67) = 0;
        *(undefined8 *)(puVar8 + 0x6238) = param_2[0x5d3];
        *(undefined8 *)(puVar8 + 0x6230) = uVar24;
        *(undefined8 *)(puVar8 + 0x6248) = uVar31;
        *(undefined8 *)(puVar8 + 0x6240) = uVar15;
        uVar15 = param_2[0x5d6];
        uVar32 = param_2[0x5d9];
        uVar31 = param_2[0x5d8];
        uVar24 = param_2[0x5da];
        *(undefined8 *)(puVar8 + 0x5158) = param_2[0x5d7];
        *(undefined8 *)(puVar8 + 0x5150) = uVar15;
        *(undefined8 *)(puVar8 + 0x5168) = uVar32;
        *(undefined8 *)(puVar8 + 0x5160) = uVar31;
        *(undefined8 *)(puVar8 + 0x5170) = uVar24;
                    /* try { // try from 007db47c to 007db497 has its CatchHandler @ 007dc5d8 */
        reqwest::connect::into_uri(puVar8 + 0x59c0,&DAT_0029f4e0,puVar8 + 0x6230);
      }
      *(undefined8 *)(puVar8 + 0x7380) = *(undefined8 *)(puVar8 + 0x5158);
      *(undefined8 *)(puVar8 + 0x7378) = *(undefined8 *)(puVar8 + 0x5150);
      *(undefined8 *)(puVar8 + 0x7390) = *(undefined8 *)(puVar8 + 0x5168);
      *(undefined8 *)(puVar8 + 0x7388) = *(undefined8 *)(puVar8 + 0x5160);
      *(undefined8 *)(puVar8 + 0x7368) = *(undefined8 *)(puVar8 + 0x5a08);
      *(undefined8 *)(puVar8 + 0x7360) = *(undefined8 *)(puVar8 + 0x5a00);
      *(undefined8 *)(puVar8 + 0x7348) = *(undefined8 *)(puVar8 + 0x59e8);
      *(undefined8 *)(puVar8 + 0x7340) = *(undefined8 *)(puVar8 + 0x59e0);
      *(undefined8 *)(puVar8 + 0x7358) = *(undefined8 *)(puVar8 + 0x59f8);
      *(undefined8 *)(puVar8 + 0x7350) = *(undefined8 *)(puVar8 + 0x59f0);
      *(undefined8 *)(puVar8 + 0x7328) = *(undefined8 *)(puVar8 + 0x59c8);
      *(undefined8 *)(puVar8 + 0x7320) = *(undefined8 *)(puVar8 + 0x59c0);
      *(undefined8 *)(puVar8 + 0x3ff8) = *(undefined8 *)(puVar8 + 0x7368);
      *(undefined8 *)(puVar8 + 0x3ff0) = *(undefined8 *)(puVar8 + 0x7360);
      *(undefined8 *)(puVar8 + 0x3fd8) = *(undefined8 *)(puVar8 + 0x7348);
      *(undefined8 *)(puVar8 + 0x3fd0) = *(undefined8 *)(puVar8 + 0x7340);
      *(undefined8 *)(puVar8 + 0x7398) = *(undefined8 *)(puVar8 + 0x5170);
      *(undefined8 *)(puVar8 + 0x3fb8) = *(undefined8 *)(puVar8 + 0x7328);
      *(undefined8 *)(puVar8 + 0x3fb0) = *(undefined8 *)(puVar8 + 0x7320);
      uVar35 = *(undefined8 *)(puVar8 + 0x7380);
      uVar34 = *(undefined8 *)(puVar8 + 0x7378);
      uVar31 = *(undefined8 *)(puVar8 + 0x7390);
      uVar15 = *(undefined8 *)(puVar8 + 0x7388);
      *(undefined8 *)(puVar8 + 0x7338) = *(undefined8 *)(puVar8 + 23000);
      *(undefined8 *)(puVar8 + 0x7330) = *(undefined8 *)(puVar8 + 0x59d0);
      *(undefined8 *)(puVar8 + 0x7370) = *(undefined8 *)(puVar8 + 0x5a10);
      *(undefined8 *)(puVar8 + 0x3fe8) = *(undefined8 *)(puVar8 + 0x7358);
      *(undefined8 *)(puVar8 + 0x3fe0) = *(undefined8 *)(puVar8 + 0x7350);
      uVar33 = *(undefined8 *)(puVar8 + 0x7338);
      uVar32 = *(undefined8 *)(puVar8 + 0x7330);
      *(undefined8 *)(puVar8 + 0x4000) = *(undefined8 *)(puVar8 + 0x5a10);
      uVar24 = *(undefined8 *)(puVar8 + 0x7398);
      param_2[0x5dc] = uVar35;
      param_2[0x5db] = uVar34;
      param_2[0x5de] = uVar31;
      param_2[0x5dd] = uVar15;
      cVar23 = *(char *)(param_2 + 0x5c6);
      *(undefined1 *)(param_2 + 0x5ec) = 1;
      *(undefined8 *)(puVar8 + 0x3fc8) = uVar33;
      *(undefined8 *)(puVar8 + 0x3fc0) = uVar32;
      *(undefined8 *)(puVar8 + 0x4018) = uVar35;
      *(undefined8 *)(puVar8 + 0x4010) = uVar34;
      *(undefined8 *)(puVar8 + 0x4028) = uVar31;
      *(undefined8 *)(puVar8 + 0x4020) = uVar15;
      *(undefined8 *)(puVar8 + 0x4030) = uVar24;
      *(undefined1 *)((long)param_2 + 0x2f64) = 0;
      *(undefined1 *)((long)param_2 + 0x2f5f) = 1;
      param_2[0x5df] = uVar24;
                    /* try { // try from 007db800 to 007db80f has its CatchHandler @ 007dc62c */
      if ((cVar23 == '\0') ||
         (iVar9 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq
                            (param_2 + 0x5c6,&DAT_0029f4e0), iVar9 == 0)) {
        uVar15 = param_2[0x5bf];
        uVar24 = param_2[0x5be];
        uVar32 = param_2[0x5c1];
        uVar31 = param_2[0x5c0];
        uVar33 = param_2[0x5c2];
        *(undefined2 *)(param_2 + 0x5ec) = 0;
        *(undefined8 *)(puVar8 + 0x7378) = param_2[0x5c3];
        *(undefined8 *)(puVar8 + 0x7370) = uVar33;
        *(undefined8 *)(puVar8 + 0x7358) = uVar15;
        *(undefined8 *)(puVar8 + 0x7350) = uVar24;
        uVar15 = param_2[0x5b9];
        uVar24 = param_2[0x5b8];
        *(undefined8 *)(puVar8 + 0x7368) = uVar32;
        *(undefined8 *)(puVar8 + 0x7360) = uVar31;
        uVar32 = param_2[0x5bb];
        uVar31 = param_2[0x5ba];
        uVar34 = param_2[0x5bd];
        uVar33 = param_2[0x5bc];
        *(undefined8 *)(puVar8 + 0x7328) = uVar15;
        *(undefined8 *)(puVar8 + 0x7320) = uVar24;
        uVar15 = param_2[0x5c5];
        uVar24 = param_2[0x5c4];
        *(undefined8 *)(puVar8 + 0x73a8) = *(undefined8 *)(puVar8 + 0x3fc8);
        *(undefined8 *)(puVar8 + 0x73a0) = *(undefined8 *)(puVar8 + 0x3fc0);
        *(undefined8 *)(puVar8 + 0x7338) = uVar32;
        *(undefined8 *)(puVar8 + 0x7330) = uVar31;
        *(undefined8 *)(puVar8 + 0x7388) = uVar15;
        *(undefined8 *)(puVar8 + 0x7380) = uVar24;
        *(undefined8 *)(puVar8 + 0x7398) = *(undefined8 *)(puVar8 + 0x3fb8);
        *(undefined8 *)(puVar8 + 0x7390) = *(undefined8 *)(puVar8 + 0x3fb0);
        *(undefined8 *)(puVar8 + 0x73d8) = *(undefined8 *)(puVar8 + 0x3ff8);
        *(undefined8 *)(puVar8 + 0x73d0) = *(undefined8 *)(puVar8 + 0x3ff0);
        *(undefined8 *)(puVar8 + 0x7348) = uVar34;
        *(undefined8 *)(puVar8 + 0x7340) = uVar33;
        *(undefined8 *)(puVar8 + 0x73e0) = *(undefined8 *)(puVar8 + 0x4000);
        *(undefined8 *)(puVar8 + 0x73c8) = *(undefined8 *)(puVar8 + 0x3fe8);
        *(undefined8 *)(puVar8 + 0x73c0) = *(undefined8 *)(puVar8 + 0x3fe0);
        *(undefined8 *)(puVar8 + 0x73b8) = *(undefined8 *)(puVar8 + 0x3fd8);
        *(undefined8 *)(puVar8 + 0x73b0) = *(undefined8 *)(puVar8 + 0x3fd0);
        memcpy(puVar8 + 0x59c0,puVar8 + 0x7320,0x210);
        memcpy(param_2 + 0x5ee,puVar8 + 0x59c0,0x210);
        *(undefined2 *)(param_2 + 0x630) = 1;
        goto LAB_007dba2c;
      }
      if (param_2[0x5ca] != 0) {
                    /* try { // try from 007db820 to 007db823 has its CatchHandler @ 007dc564 */
        auVar37 = http::uri::authority::host(param_2[0x5c9]);
        sVar27 = auVar37._8_8_;
        if (auVar37._0_8_ != (void *)0x0) {
          FUN_0079c600(puVar8 + 0x7320,sVar27,0,1,1);
          uVar24 = *(undefined8 *)(puVar8 + 0x7328);
          if (*(long *)(puVar8 + 0x7320) == 1) {
                    /* try { // try from 007dc3fc to 007dc403 has its CatchHandler @ 007dc760 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(uVar24,*(undefined8 *)(puVar8 + 0x7330));
          }
          pvVar28 = *(void **)(puVar8 + 0x7330);
          if (sVar27 != 0) {
            memcpy(pvVar28,auVar37._0_8_,sVar27);
          }
          param_2[0x5e0] = uVar24;
          param_2[0x5e1] = pvVar28;
          param_2[0x5e2] = sVar27;
          *(undefined1 *)((long)param_2 + 0x2f5e) = 1;
                    /* try { // try from 007db884 to 007db893 has its CatchHandler @ 007dc4fc */
          <http::uri::http::uri::Uri>::port(puVar8 + 0x7320,param_2 + 0x5c6);
          uVar3 = 0x1bb;
          if (*(long *)(puVar8 + 0x7320) != 0) {
            uVar3 = *(undefined2 *)(puVar8 + 0x7330);
          }
          plVar20 = (long *)param_2[0x5bf];
          *(undefined2 *)(param_2 + 0x5eb) = uVar3;
          do {
            lVar26 = *plVar20;
            cVar23 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar26 + 1;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          if (lVar26 < 0) goto LAB_007dcb18;
          uVar24 = param_2[0x5c1];
          plVar30 = (long *)param_2[0x5c0];
          do {
            lVar26 = *plVar30;
            cVar23 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar5) {
              *plVar30 = lVar26 + 1;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          if (lVar26 < 0) goto LAB_007dcb18;
          plVar19 = (long *)param_2[0x5c3];
          do {
            lVar26 = *plVar19;
            cVar23 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *plVar19 = lVar26 + 1;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          if (lVar26 < 0) goto LAB_007dcb18;
          *(long **)(puVar8 + 0x7320) = plVar20;
          *(undefined8 *)(puVar8 + 0x7330) = uVar24;
          *(long **)(puVar8 + 0x7328) = plVar30;
          *(long **)(puVar8 + 0x7338) = plVar19;
                    /* try { // try from 007db908 to 007db917 has its CatchHandler @ 007dc4f8 */
          FUN_007baaac(param_2 + 0x5e3,puVar8 + 0x7320);
          plVar20 = (long *)param_2[0x5c2];
          do {
            lVar26 = *plVar20;
            cVar23 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar26 + 1;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          if (lVar26 < 0) goto LAB_007dcb18;
          uVar15 = *(undefined8 *)(puVar8 + 0x3fd8);
          uVar24 = *(undefined8 *)(puVar8 + 0x3fd0);
          uVar32 = *(undefined8 *)(puVar8 + 0x3fe8);
          uVar31 = *(undefined8 *)(puVar8 + 0x3fe0);
          param_2[0x5ea] = plVar20;
          uVar34 = *(undefined8 *)(puVar8 + 0x3ff8);
          uVar33 = *(undefined8 *)(puVar8 + 0x3ff0);
          *(undefined1 *)(param_2 + 0x5ec) = 0;
          *(undefined1 *)((long)param_2 + 0x2f5d) = 1;
          *(undefined8 *)(puVar8 + 0x7348) = uVar15;
          *(undefined8 *)(puVar8 + 0x7340) = uVar24;
          *(undefined8 *)(puVar8 + 0x7358) = uVar32;
          *(undefined8 *)(puVar8 + 0x7350) = uVar31;
          *(undefined8 *)(puVar8 + 0x7368) = uVar34;
          *(undefined8 *)(puVar8 + 0x7360) = uVar33;
          *(undefined8 *)(puVar8 + 0x7370) = *(undefined8 *)(puVar8 + 0x4000);
          *(undefined8 *)(puVar8 + 0x7328) = *(undefined8 *)(puVar8 + 0x3fb8);
          *(undefined8 *)(puVar8 + 0x7320) = *(undefined8 *)(puVar8 + 0x3fb0);
          *(undefined8 *)(puVar8 + 0x7338) = *(undefined8 *)(puVar8 + 0x3fc8);
          *(undefined8 *)(puVar8 + 0x7330) = *(undefined8 *)(puVar8 + 0x3fc0);
                    /* try { // try from 007db970 to 007db97f has its CatchHandler @ 007dc4f0 */
          auVar37 = FUN_007bb884(param_2 + 0x5e3,puVar8 + 0x7320);
          *(undefined1 (*) [16])(param_2 + 0x5ee) = auVar37;
          goto LAB_007db4ac;
        }
      }
                    /* try { // try from 007dbc4c to 007dbc5b has its CatchHandler @ 007dc560 */
      uVar24 = FUN_007e0390(&DAT_002e5d21,0xe);
      cVar23 = '\x02';
      auVar37._8_8_ = &PTR_FUN_00adfd58;
      auVar37._0_8_ = uVar24;
      goto LAB_007dc9f8;
    }
    if (bVar17 == 4) {
      bVar17 = *(byte *)((long)param_2 + 0x38f4);
      puVar12 = (undefined1 *)((long)param_2 + 0x38f4);
      puVar29 = param_2 + 0x5ee;
      if (bVar17 < 3) {
        *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
        if (bVar17 != 0) {
          if (bVar17 == 1) {
                    /* try { // try from 007dc448 to 007dc463 has its CatchHandler @ 007dc63c */
            core::panicking::panic_const::panic_const_async_fn_resumed
                      (&PTR_s__root__cargo_registry_src_index__00adfb28);
          }
          else {
            core::panicking::panic_const::panic_const_async_fn_resumed_panic
                      (&PTR_s__root__cargo_registry_src_index__00adfb28);
          }
          goto LAB_007dcb18;
        }
        uVar3 = *(undefined2 *)(param_2 + 0x71e);
        *(long *)(puVar8 + -0x1a20) = (long)param_2 + 0x38f4;
LAB_007dbe90:
        puVar29 = param_2 + 0x5ee;
        *(undefined1 *)((long)param_2 + 0x38f5) = 1;
        *(undefined8 **)(puVar8 + -0x1a28) = param_2 + 0x684;
        memcpy(param_2 + 0x684,puVar29,0x448);
        param_2[0x70f] = param_2[0x679];
        puVar10 = param_2 + 0x70d;
        param_2[0x711] = param_2[0x67b];
        param_2[0x710] = param_2[0x67a];
        param_2[0x714] = param_2[0x67e];
        param_2[0x70e] = param_2[0x678];
        *puVar10 = param_2[0x677];
        param_2[0x713] = param_2[0x67d];
        param_2[0x712] = param_2[0x67c];
        *(undefined2 *)((long)param_2 + 0x38f2) = uVar3;
        *(undefined2 *)((long)param_2 + 0x38f6) = 0x101;
        param_2[0x719] = param_2[0x683];
        param_2[0x716] = param_2[0x680];
        param_2[0x715] = param_2[0x67f];
        param_2[0x718] = param_2[0x682];
        param_2[0x717] = param_2[0x681];
        *(undefined8 **)(puVar8 + 0x6230) = puVar10;
        *(code **)(puVar8 + 0x6238) = FUN_007e0494;
        *(long *)(puVar8 + 0x6240) = (long)param_2 + 0x38f2;
        *(undefined **)(puVar8 + 0x6248) = PTR_fmt_00b00e10;
                    /* try { // try from 007dbf34 to 007dbf4f has its CatchHandler @ 007dc61c */
        alloc::fmt::format::format_inner(puVar8 + 0x7b90,&DAT_002e5c73,puVar8 + 0x6230);
        cVar23 = *(char *)(param_2 + 0x714);
        uVar15 = *(undefined8 *)(puVar8 + 0x7b90);
        uVar24 = *(undefined8 *)(puVar8 + 0x7ba0);
        *(undefined8 **)(puVar8 + -0x1a18) = puVar29;
        *(undefined8 *)(puVar8 + 0x7308) = *(undefined8 *)(puVar8 + 0x7b98);
        *(undefined8 *)(puVar8 + 0x7300) = uVar15;
        *(undefined8 *)(puVar8 + 0x7310) = uVar24;
        param_2[0x71b] = *(undefined8 *)(puVar8 + 0x7b98);
        param_2[0x71a] = uVar15;
        param_2[0x71c] = uVar24;
        if (cVar23 != '\x02') {
          lVar26 = param_2[0x71c];
          lVar16 = param_2[0x71a];
          *(undefined1 *)((long)param_2 + 0x38f7) = 0;
          uVar15 = param_2[0x711];
          uVar24 = param_2[0x710];
          uVar32 = param_2[0x713];
          uVar31 = param_2[0x712];
          *(undefined8 *)(puVar8 + 0x6250) = param_2[0x714];
          *(undefined8 *)(puVar8 + 0x6238) = uVar15;
          *(undefined8 *)(puVar8 + 0x6230) = uVar24;
          *(undefined8 *)(puVar8 + 0x6248) = uVar32;
          *(undefined8 *)(puVar8 + 0x6240) = uVar31;
          if ((ulong)(lVar16 - lVar26) < 0xc) {
                    /* try { // try from 007dc320 to 007dc337 has its CatchHandler @ 007dc47c */
            FUN_0079be54(param_2 + 0x71a,lVar26,0xc,1,1);
            lVar26 = param_2[0x71c];
          }
          lVar18 = param_2[0x71b];
          lVar16 = lVar26 + 0xc;
          *(undefined8 *)(lVar18 + lVar26) = DAT_002e5c9c;
          *(undefined4 *)((undefined8 *)(lVar18 + lVar26) + 1) = 0x203a746e;
          lVar26 = param_2[0x71a];
          uVar14 = *(ulong *)(puVar8 + 0x6240);
          pvVar28 = *(void **)(puVar8 + 0x6238);
          param_2[0x71c] = lVar16;
          if ((ulong)(lVar26 - lVar16) < uVar14) {
                    /* try { // try from 007dc340 to 007dc35b has its CatchHandler @ 007dc478 */
            FUN_0079be54(param_2 + 0x71a,lVar16,uVar14,1,1);
            lVar16 = param_2[0x71c];
LAB_007dbff4:
            memcpy((void *)(param_2[0x71b] + lVar16),pvVar28,uVar14);
            lVar26 = param_2[0x71a];
          }
          else if (uVar14 != 0) goto LAB_007dbff4;
          lVar16 = lVar16 + uVar14;
          param_2[0x71c] = lVar16;
          if ((ulong)(lVar26 - lVar16) < 2) {
                    /* try { // try from 007dc364 to 007dc37b has its CatchHandler @ 007dc474 */
            FUN_0079be54(param_2 + 0x71a,lVar16,2,1,1);
            lVar16 = param_2[0x71c];
            puVar29 = *(undefined8 **)(puVar8 + -0x1a18);
          }
          else {
            puVar29 = *(undefined8 **)(puVar8 + -0x1a18);
          }
          *(undefined2 *)(param_2[0x71b] + lVar16) = 0xa0d;
          lVar26 = *(long *)(puVar8 + 0x6230);
          param_2[0x71c] = lVar16 + 2;
                    /* try { // try from 007dc05c to 007dc063 has its CatchHandler @ 007dc56c */
          (**(code **)(lVar26 + 0x20))
                    (puVar8 + 0x6248,*(undefined8 *)(puVar8 + 0x6238),
                     *(undefined8 *)(puVar8 + 0x6240));
        }
        if (*(char *)(param_2 + 0x719) != '\x02') {
          uVar15 = param_2[0x715];
          uVar32 = param_2[0x718];
          uVar31 = param_2[0x717];
          *(undefined1 *)((long)param_2 + 0x38f6) = 0;
          uVar24 = param_2[0x719];
          *(undefined8 *)(puVar8 + 0x7b98) = param_2[0x716];
          *(undefined8 *)(puVar8 + 0x7b90) = uVar15;
          *(undefined8 *)(puVar8 + 0x7ba8) = uVar32;
          *(undefined8 *)(puVar8 + 0x7ba0) = uVar31;
          *(undefined8 *)(puVar8 + 0x7bb0) = uVar24;
          if (3 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
            *(long *)(puVar8 + 0x7310) = (long)param_2 + 0x38f2;
            *(undefined8 **)(puVar8 + 0x7300) = puVar10;
            *(code **)(puVar8 + 0x7308) = FUN_007e0494;
            *(undefined8 *)(puVar8 + 0x6238) = 0x10;
            *(undefined8 *)(puVar8 + 0x6248) = 0x10;
            *(undefined **)(puVar8 + 0x7318) = PTR_fmt_00b00e10;
            *(undefined **)(puVar8 + 0x6230) = &DAT_002a1040;
            *(undefined **)(puVar8 + 0x6240) = &DAT_002a1040;
            *(undefined ***)(puVar8 + 0x6250) = &PTR_s__root__cargo_registry_src_index__00adfb10;
                    /* try { // try from 007dc0e0 to 007dc0ff has its CatchHandler @ 007dc500 */
            FUN_0079a098(&DAT_002aaf3a,puVar8 + 0x7300,4,puVar8 + 0x6230);
          }
          lVar26 = param_2[0x71c];
          if ((ulong)(param_2[0x71a] - lVar26) < 0x15) {
                    /* try { // try from 007dc394 to 007dc3ab has its CatchHandler @ 007dc470 */
            FUN_0079be54(param_2 + 0x71a,lVar26,0x15,1,1);
            lVar26 = param_2[0x71c];
          }
          uVar15 = _DAT_002e5ca8;
          uVar24 = CONCAT35((undefined3)DAT_002e5cb5,_UNK_002e5cb0);
          lVar16 = lVar26 + 0x15;
          puVar10 = (undefined8 *)(param_2[0x71b] + lVar26);
          *(ulong *)((long)puVar10 + 0xd) = CONCAT53(DAT_002e5cb5._3_5_,(undefined3)DAT_002e5cb5);
          puVar10[1] = uVar24;
          *puVar10 = uVar15;
          lVar26 = param_2[0x71a];
          pvVar28 = *(void **)(puVar8 + 0x7b98);
          uVar14 = *(ulong *)(puVar8 + 0x7ba0);
          param_2[0x71c] = lVar16;
          if ((ulong)(lVar26 - lVar16) < uVar14) {
                    /* try { // try from 007dc3b4 to 007dc3cf has its CatchHandler @ 007dc46c */
            FUN_0079be54(param_2 + 0x71a,lVar16,uVar14,1,1);
            lVar16 = param_2[0x71c];
LAB_007dc15c:
            memcpy((void *)(param_2[0x71b] + lVar16),pvVar28,uVar14);
            lVar26 = param_2[0x71a];
          }
          else if (uVar14 != 0) goto LAB_007dc15c;
          lVar16 = lVar16 + uVar14;
          param_2[0x71c] = lVar16;
          if ((ulong)(lVar26 - lVar16) < 2) {
                    /* try { // try from 007dc3d8 to 007dc3ef has its CatchHandler @ 007dc468 */
            FUN_0079be54(param_2 + 0x71a,lVar16,2,1,1);
            lVar16 = param_2[0x71c];
          }
          puVar29 = *(undefined8 **)(puVar8 + -0x1a18);
          *(undefined2 *)(param_2[0x71b] + lVar16) = 0xa0d;
          lVar26 = *(long *)(puVar8 + 0x7b90);
          uVar24 = *(undefined8 *)(puVar8 + 0x7b98);
          param_2[0x71c] = lVar16 + 2;
                    /* try { // try from 007dc1bc to 007dc1c3 has its CatchHandler @ 007dc568 */
          (**(code **)(lVar26 + 0x20))(puVar8 + 0x7ba8,uVar24,*(undefined8 *)(puVar8 + 0x7ba0));
        }
        lVar26 = param_2[0x71c];
        if ((ulong)(param_2[0x71a] - lVar26) < 2) {
                    /* try { // try from 007dc2fc to 007dc313 has its CatchHandler @ 007dc4b0 */
          FUN_0079be54(param_2 + 0x71a,lVar26,2,1,1);
          lVar26 = param_2[0x71c];
          puVar29 = *(undefined8 **)(puVar8 + -0x1a18);
        }
        lVar16 = lVar26 + 2;
        *(undefined2 *)(param_2[0x71b] + lVar26) = 0xa0d;
        uVar24 = *(undefined8 *)(puVar8 + -0x1a28);
        puVar12 = *(undefined1 **)(puVar8 + -0x1a20);
        param_2[0x71c] = lVar16;
        param_2[0x721] = lVar16;
        param_2[0x71d] = uVar24;
        param_2[0x71f] = param_2 + 0x71d;
        param_2[0x720] = param_2[0x71b];
      }
      else {
        if (bVar17 != 3) {
          lVar26 = param_2[0x721];
          lVar16 = param_2[0x722];
          puVar11 = (undefined8 *)param_2[0x720];
          goto LAB_007dcb38;
        }
        lVar16 = param_2[0x721];
        *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
      }
      do {
        if (lVar16 == 0) {
          memset(param_2 + 0x723,0,0x2000);
          puVar10 = *(undefined8 **)(puVar8 + -0x1a10);
          uVar14 = 0;
          param_2[0x71f] = 0;
          goto LAB_007dcc08;
        }
                    /* try { // try from 007dc21c to 007dc223 has its CatchHandler @ 007dc75c */
        auVar37 = FUN_007dfd98(param_2[0x71f],param_3,param_2[0x720]);
        uVar14 = auVar37._8_8_;
        if (auVar37._0_8_ != 0) {
          if (auVar37._0_8_ != 2) goto LAB_007dc26c;
          uVar25 = 3;
          goto LAB_007dcc38;
        }
        uVar21 = param_2[0x721];
        lVar26 = param_2[0x720];
        param_2[0x720] = 1;
        param_2[0x721] = 0;
        lVar16 = uVar21 - uVar14;
        if (uVar21 < uVar14) {
                    /* try { // try from 007dc2c0 to 007dc2d7 has its CatchHandler @ 007dc814 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    ("mid > len",0x13,&PTR_s__root__cargo_registry_src_index__00ade798);
        }
        param_2[0x721] = lVar16;
        param_2[0x720] = lVar26 + uVar14;
      } while (uVar14 != 0);
      uVar14 = 0x1700000003;
LAB_007dc26c:
      *(ulong *)(puVar8 + 0x6230) = uVar14;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar13 = (ulong *)FUN_004b25a4(8,8);
      if (puVar13 == (ulong *)0x0) {
                    /* try { // try from 007dc2dc to 007dc2e7 has its CatchHandler @ 007dc7fc */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,8);
      }
      auVar37._8_8_ = &PTR_FUN_00adee50;
      auVar37._0_8_ = puVar13;
      *puVar13 = uVar14;
      goto LAB_007dcce8;
    }
    if (bVar17 == 5) {
      *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
      goto LAB_007db284;
    }
LAB_007dba2c:
                    /* try { // try from 007dba30 to 007dba43 has its CatchHandler @ 007dc68c */
    FUN_007dd3d4(puVar8 + 0x7320,param_2 + 0x5ee,param_3);
    cVar23 = puVar8[0x7331];
    if (cVar23 == -1) {
      uVar25 = 6;
      goto LAB_007dcd5c;
    }
    auVar37 = *(undefined1 (*) [16])(puVar8 + 0x7320);
    uVar25 = puVar8[0x7330];
    *(undefined4 *)(puVar8 + 0x72f8) = *(undefined4 *)(puVar8 + 0x7332);
    *(undefined2 *)(puVar8 + 0x72fc) = *(undefined2 *)(puVar8 + 0x7336);
                    /* try { // try from 007dba78 to 007dba7f has its CatchHandler @ 007dc654 */
    FUN_007d97c0(param_2 + 0x5ee);
    if (*(char *)(param_2 + 0x5df) != '\x02') {
                    /* try { // try from 007dbaa0 to 007dbaa7 has its CatchHandler @ 007dc59c */
      (**(code **)(param_2[0x5db] + 0x20))(param_2 + 0x5de,param_2[0x5dc],param_2[0x5dd]);
    }
    *(undefined1 *)((long)param_2 + 0x2f5f) = 0;
    *(undefined1 *)((long)param_2 + 0x2f64) = 0;
    *(undefined1 *)(param_2 + 0x5ec) = 0;
    *(undefined4 *)((long)param_2 + 0x2f65) = 0;
                    /* try { // try from 007dbac0 to 007dbac7 has its CatchHandler @ 007dcb04 */
    FUN_007da3f0(param_2 + 0x5c6);
    goto LAB_007dca70;
  }
                    /* try { // try from 007db584 to 007db597 has its CatchHandler @ 007dc738 */
  FUN_00773d24(puVar8 + 0x7320,param_2 + 0x595,param_3);
  cVar23 = puVar8[0x7331];
  if (cVar23 == -2) {
    param_1[1][1] = 0xff;
    bVar17 = 3;
    goto LAB_007dc9d0;
  }
  auVar37 = *(undefined1 (*) [16])(puVar8 + 0x7320);
  uVar25 = puVar8[0x7330];
  *(undefined4 *)(puVar8 + 0x3fa0) = *(undefined4 *)(puVar8 + 0x7332);
  *(undefined2 *)(puVar8 + 0x3fa4) = *(undefined2 *)(puVar8 + 0x7336);
                    /* try { // try from 007db5d8 to 007db5df has its CatchHandler @ 007dc724 */
  FUN_007d93c4(param_2 + 0x5a4);
                    /* try { // try from 007db5e0 to 007db5e7 has its CatchHandler @ 007dc718 */
  FUN_007daa14(param_2 + 0x595);
  if (cVar23 == -1) {
    cVar23 = '\x02';
    auVar37._8_8_ = &DAT_00adfab8;
    auVar37._0_8_ = &DAT_00000001;
  }
  else {
    *(undefined4 *)(puVar8 + 0x3fa8) = *(undefined4 *)(puVar8 + 0x3fa0);
    *(undefined2 *)(puVar8 + 0x3fac) = *(undefined2 *)(puVar8 + 0x3fa4);
  }
  goto LAB_007dca9c;
LAB_007dcc08:
  puVar11 = param_2 + 0x71d;
  lVar26 = (long)param_2 + uVar14 + 0x3918;
  lVar16 = 0x2000 - uVar14;
  param_2[0x720] = puVar11;
  param_2[0x721] = lVar26;
  param_2[0x722] = lVar16;
LAB_007dcb38:
  *(long *)(puVar8 + 0x6230) = lVar26;
  *(long *)(puVar8 + 0x6238) = lVar16;
  *(undefined8 *)(puVar8 + 0x6240) = 0;
  *(long *)(puVar8 + 0x6248) = lVar16;
                    /* try { // try from 007dcb48 to 007dcb57 has its CatchHandler @ 007dd044 */
  auVar37 = FUN_007df904(puVar11,param_3,puVar8 + 0x6230);
  if ((auVar37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    uVar25 = 4;
LAB_007dcc38:
    *puVar12 = uVar25;
    goto LAB_007dcd58;
  }
  if (auVar37._8_8_ == 0) {
    uVar14 = *(ulong *)(puVar8 + 0x6240);
    if (*(ulong *)(puVar8 + 0x6238) < uVar14) {
                    /* try { // try from 007dcfb4 to 007dcfc3 has its CatchHandler @ 007dd044 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar14,*(ulong *)(puVar8 + 0x6238),
                 &PTR_s__root__cargo_registry_src_index__00add9b0);
    }
    if (uVar14 == 0) {
                    /* try { // try from 007dcc58 to 007dcc5f has its CatchHandler @ 007dcfe8 */
      *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
      uVar24 = reqwest::connect::tunnel_eof();
    }
    else {
      uVar14 = param_2[0x71f] + uVar14;
      param_2[0x71f] = uVar14;
      if (0x2000 < uVar14) {
                    /* try { // try from 007dcfc8 to 007dcfdb has its CatchHandler @ 007dd040 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar14,0x2000,&PTR_s__root__cargo_registry_src_index__00adfb40);
      }
      if (uVar14 < 0xc) {
LAB_007dccc8:
                    /* try { // try from 007dccc8 to 007dccdb has its CatchHandler @ 007dcff0 */
        *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
        uVar24 = FUN_007e0390(&DAT_002e5cbd,0x13);
      }
      else {
        plVar20 = param_2 + 0x723;
        if ((*plVar20 == 0x312e312f50545448 && *(int *)(param_2 + 0x724) == 0x30303220) ||
           (*plVar20 == 0x302e312f50545448 && *(int *)(param_2 + 0x724) == 0x30303220)) {
          if (*(int *)((long)plVar20 + (uVar14 - 4)) != 0xa0d0a0d) goto code_r0x007dcc00;
          *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
          lVar26 = param_2[0x684];
          auVar37 = *(undefined1 (*) [16])(param_2 + 0x685);
          *(undefined1 *)((long)param_2 + 0x38f5) = 0;
          memcpy(puVar8 + 0x7320,param_2 + 0x687,0x430);
          goto LAB_007dccec;
        }
        if (*plVar20 != 0x312e312f50545448 || *(int *)(param_2 + 0x724) != 0x37303420)
        goto LAB_007dccc8;
                    /* try { // try from 007dcf9c to 007dcfaf has its CatchHandler @ 007dcfe0 */
        *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
        uVar24 = FUN_007e0390(&DAT_002e5cd0,0x1d);
      }
    }
    goto LAB_007dccdc;
  }
                    /* try { // try from 007dcc40 to 007dcc4b has its CatchHandler @ 007dcfec */
  *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
  auVar37 = FUN_007c7ea8(auVar37._8_8_);
  goto LAB_007dcce8;
code_r0x007dcc00:
  if (uVar14 == 0x2000) goto LAB_007dcc94;
  goto LAB_007dcc08;
LAB_007dcc94:
                    /* try { // try from 007dcc94 to 007dcca7 has its CatchHandler @ 007dcfe4 */
  *(undefined8 **)(puVar8 + -0x1a10) = puVar10;
  uVar24 = FUN_007e0390(&DAT_002e5ced,0x21);
LAB_007dccdc:
  auVar37._8_8_ = &PTR_FUN_00adfd58;
  auVar37._0_8_ = uVar24;
LAB_007dcce8:
  lVar26 = -1;
LAB_007dccec:
  if (param_2[0x71a] != 0) {
    free((void *)param_2[0x71b]);
  }
  *(undefined2 *)((long)param_2 + 0x38f6) = 0;
  if (param_2[0x70d] != 0) {
    free((void *)param_2[0x70e]);
  }
  if ((*(byte *)((long)param_2 + 0x38f5) & 1) != 0) {
                    /* try { // try from 007dcd24 to 007dcd2b has its CatchHandler @ 007dd020 */
    FUN_007d8900(param_2 + 0x684);
  }
  *(undefined1 *)((long)param_2 + 0x38f5) = 0;
  memcpy(puVar8 + 0x5150,puVar8 + 0x7320,0x430);
  *(undefined1 *)((long)param_2 + 0x38f4) = 1;
  if (lVar26 == -2) {
LAB_007dcd58:
    uVar25 = 4;
LAB_007dcd5c:
    *(undefined1 *)((long)param_2 + 0x2f5a) = uVar25;
    param_1[1][1] = 0xff;
    bVar17 = 4;
    goto LAB_007dc9d0;
  }
  memcpy(puVar8 + 0x4d20,puVar8 + 0x5150,0x430);
                    /* try { // try from 007dcd88 to 007dcd8f has its CatchHandler @ 007dd01c */
  FUN_007d9264(puVar29);
  if (lVar26 == -1) {
    pcVar22 = *(char **)(puVar8 + -0x1a10);
    cVar23 = '\x02';
    bVar17 = *(byte *)((long)param_2 + 0x2f5c);
    *(undefined1 *)((long)param_2 + 0x2f5b) = 0;
  }
  else {
    memcpy(puVar8 + 0x48c8,puVar8 + 0x4d20,0x430);
    *(long *)(puVar8 + 0x48b0) = lVar26;
    uVar24 = param_2[0xb24];
    *(undefined1 *)((long)param_2 + 0x2f5b) = 1;
    uVar15 = param_2[0xb25];
    cVar23 = **(char **)(puVar8 + -0x1a10);
    *(undefined1 (*) [16])(puVar8 + 0x48b8) = auVar37;
    *(undefined1 *)((long)param_2 + 0x2f5c) = 0;
    if (cVar23 == '\x02') {
                    /* try { // try from 007dcde4 to 007dcde7 has its CatchHandler @ 007dcff8 */
      uVar24 = FUN_007e0390();
      auVar37._8_8_ = &PTR_FUN_00adfd58;
      auVar37._0_8_ = uVar24;
      auVar36._8_8_ = &PTR_FUN_00adfd58;
      auVar36._0_8_ = uVar24;
      pcVar22 = *(char **)(puVar8 + -0x1a10);
      bVar17 = *(byte *)((long)param_2 + 0x2f5b);
      *(undefined1 *)((long)param_2 + 0x2f62) = 0;
joined_r0x007dce04:
      cVar23 = '\x02';
    }
    else {
      *(undefined8 *)(puVar8 + -0x1a20) = uVar15;
      *(undefined8 *)(puVar8 + -0x1a18) = uVar24;
      uVar1 = *(undefined4 *)((long)param_2 + 0x5919);
      uVar2 = *(undefined4 *)((long)param_2 + 0x591c);
      *(undefined8 *)(puVar8 + 0x7b98) = uVar24;
      *(undefined8 *)(puVar8 + 0x7ba0) = uVar15;
      *(undefined4 *)(puVar8 + 0x7300) = uVar1;
      uVar24 = param_2[0x5ea];
      *(undefined4 *)(puVar8 + 0x7303) = uVar2;
      uVar1 = *(undefined4 *)(puVar8 + 0x7300);
      param_2[0x5ee] = uVar24;
      uVar2 = *(undefined4 *)(puVar8 + 0x7303);
      *(undefined1 *)((long)param_2 + 0x2f5d) = 0;
      *(undefined4 *)(puVar8 + 0x7b91) = uVar1;
      uVar24 = param_2[0xb26];
      *(undefined1 *)((long)param_2 + 0x2f62) = 0;
      puVar8[0x7b90] = cVar23;
      *(undefined4 *)(puVar8 + 0x7b94) = uVar2;
      *(undefined8 *)(puVar8 + 0x7ba8) = uVar24;
      *(undefined1 *)((long)param_2 + 0x2f5b) = 0;
      memcpy(puVar8 + 0x6230,puVar8 + 0x48b0,0x448);
                    /* try { // try from 007dcf48 to 007dcf67 has its CatchHandler @ 007dcff4 */
      FUN_0076f85c(puVar8 + 0x7320,puVar29,puVar8 + 0x7b90,puVar8 + 0x6230);
      memcpy(puVar8 + 0x59c0,puVar8 + 0x7320,0x870);
      memcpy(param_2 + 0x5ef,puVar8 + 0x59c0,0x870);
LAB_007db284:
                    /* try { // try from 007db288 to 007db29b has its CatchHandler @ 007dc67c */
      FUN_007ab534(puVar8 + 0x7320,param_2 + 0x5ef,param_3);
      lVar26 = *(long *)(puVar8 + 0x7320);
      if (lVar26 == -1) {
        uVar25 = 5;
        goto LAB_007dcd5c;
      }
      if (lVar26 == 2) {
        memcpy(puVar8 + 0x7b90,puVar8 + 0x7328,0x450);
        uVar24 = *(undefined8 *)(puVar8 + 0x7b90);
                    /* try { // try from 007db2d8 to 007db2df has its CatchHandler @ 007dc67c */
        FUN_007d8900(puVar8 + 0x7b98);
      }
      else {
        uVar24 = *(undefined8 *)(puVar8 + 0x7328);
        memcpy(puVar8 + 0x6230,puVar8 + 0x7330,0x860);
      }
      memcpy(puVar8 + 0x6a98,puVar8 + 0x6230,0x860);
                    /* try { // try from 007dbb0c to 007dbb13 has its CatchHandler @ 007dc64c */
      FUN_007d83c4(param_2 + 0x5ef);
      if (lVar26 == 2) {
        *(undefined8 *)(puVar8 + 0x7320) = uVar24;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar10 = (undefined8 *)FUN_004b25a4(8,8);
        if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 007dc2ec to 007dc2f7 has its CatchHandler @ 007dc770 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,8);
        }
        plVar20 = (long *)param_2[0x5ee];
        auVar37._8_8_ = &PTR_FUN_00adee50;
        auVar37._0_8_ = puVar10;
        auVar36._8_8_ = &PTR_FUN_00adee50;
        auVar36._0_8_ = puVar10;
        *puVar10 = uVar24;
        do {
          lVar26 = *plVar20;
          cVar23 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar26 + -1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        if (lVar26 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 007dbb64 to 007dbb6b has its CatchHandler @ 007dc548 */
          <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                    (param_2 + 0x5ee);
        }
        pcVar22 = *(char **)(puVar8 + -0x1a10);
        bVar17 = *(byte *)((long)param_2 + 0x2f5b);
        *(undefined1 *)((long)param_2 + 0x2f62) = 0;
        goto joined_r0x007dce04;
      }
      memcpy(puVar8 + 0x5160,puVar8 + 0x6a98,0x860);
      plVar20 = (long *)param_2[0x5ee];
      *(long *)(puVar8 + 0x5150) = lVar26;
      *(undefined8 *)(puVar8 + 0x5158) = uVar24;
      do {
        lVar26 = *plVar20;
        cVar23 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = lVar26 + -1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
      if (lVar26 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007dbbc8 to 007dbbcf has its CatchHandler @ 007dc54c */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                  (param_2 + 0x5ee);
      }
      memcpy(puVar8 + 0x7320,puVar8 + 0x5150,0x870);
                    /* try { // try from 007dbbec to 007dbbfb has its CatchHandler @ 007dc594 */
      auVar36 = FUN_007a7c9c(param_2 + 0x5c5,puVar8 + 0x7320);
      cVar23 = '\0';
      pcVar22 = *(char **)(puVar8 + -0x1a10);
      bVar17 = *(byte *)((long)param_2 + 0x2f5b);
      *(undefined1 *)((long)param_2 + 0x2f62) = 0;
      auVar37 = auVar36;
    }
    if ((bVar17 & 1) != 0) {
                    /* try { // try from 007dce08 to 007dce13 has its CatchHandler @ 007dd030 */
      FUN_007d8900(puVar8 + 0x48b0);
      auVar37 = auVar36;
    }
    bVar17 = *(byte *)((long)param_2 + 0x2f5c);
    *(undefined1 *)((long)param_2 + 0x2f5b) = 0;
  }
  if (((((bVar17 & 1) != 0) && (*pcVar22 == '\0')) && (param_2[0xb24] != -1)) &&
     (param_2[0xb24] != 0)) {
    free((void *)param_2[0xb25]);
  }
  *(undefined1 *)((long)param_2 + 0x2f5c) = 0;
LAB_007dce2c:
  *(undefined1 *)((long)param_2 + 0x2f63) = 0;
  if ((*(byte *)((long)param_2 + 0x2f5d) & 1) != 0) {
    plVar20 = (long *)param_2[0x5ea];
    do {
      lVar26 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar26 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar26 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dce58 to 007dce5f has its CatchHandler @ 007dd00c */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x5ea);
    }
  }
  *(undefined1 *)((long)param_2 + 0x2f5d) = 0;
                    /* try { // try from 007dce68 to 007dce6f has its CatchHandler @ 007dcb34 */
  FUN_007d8980(param_2 + 0x5e3);
  if ((*(char *)((long)param_2 + 0x2f5e) == '\x01') && (param_2[0x5e0] != 0)) {
    free((void *)param_2[0x5e1]);
  }
LAB_007dc9f8:
  *(undefined1 *)((long)param_2 + 0x2f5e) = 0;
  if (((*(byte *)((long)param_2 + 0x2f5f) & 1) != 0) && (*(char *)(param_2 + 0x5df) != '\x02')) {
                    /* try { // try from 007dca24 to 007dca2b has its CatchHandler @ 007dcac0 */
    (**(code **)(param_2[0x5db] + 0x20))(param_2 + 0x5de,param_2[0x5dc],param_2[0x5dd]);
  }
  *(undefined1 *)((long)param_2 + 0x2f5f) = 0;
  *(undefined1 *)((long)param_2 + 0x2f64) = 0;
  if ((*(byte *)(param_2 + 0x5ec) & 1) != 0) {
                    /* try { // try from 007dca3c to 007dca47 has its CatchHandler @ 007dcadc */
    FUN_007da3f0(puVar8 + 0x3fb0);
  }
  *(undefined1 *)(param_2 + 0x5ec) = 0;
  *(undefined4 *)((long)param_2 + 0x2f65) = 0;
                    /* try { // try from 007dca58 to 007dca5f has its CatchHandler @ 007dcb04 */
  FUN_007da3f0(param_2 + 0x5c6);
                    /* try { // try from 007dca64 to 007dca6b has its CatchHandler @ 007dcaf0 */
  FUN_007d9bbc(param_2 + 0x5b8);
  uVar25 = 0;
LAB_007dca70:
  uVar1 = *(undefined4 *)(puVar8 + 0x72f8);
  uVar3 = *(undefined2 *)(puVar8 + 0x72fc);
  *(undefined1 *)((long)param_2 + 0x2f61) = 0;
  *(undefined4 *)(puVar8 + 0x3fa8) = uVar1;
  *(undefined2 *)(puVar8 + 0x3fac) = uVar3;
  *(undefined1 *)((long)param_2 + 0x2f5a) = 1;
                    /* try { // try from 007dca94 to 007dca9b has its CatchHandler @ 007dcaf8 */
  FUN_007d93c4(*(undefined8 *)(puVar8 + -0x1a08));
LAB_007dca9c:
  uVar1 = *(undefined4 *)(puVar8 + 0x3fa8);
  uVar3 = *(undefined2 *)(puVar8 + 0x3fac);
  *param_1 = auVar37;
  param_1[1][0] = uVar25;
  param_1[1][1] = cVar23;
  *(undefined4 *)(param_1[1] + 2) = uVar1;
  bVar17 = 1;
  *(undefined2 *)(param_1[1] + 6) = uVar3;
LAB_007dc9d0:
  *(byte *)(param_2 + 0x594) = bVar17;
  return;
}


// ===== 007dd124  FUN_007dd124 =====

void FUN_007dd124(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_588 [536];
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined1 auStack_2f8 [544];
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_c8 [12];
  undefined4 uStack_bc;
  undefined1 local_b8;
  char cStack_b7;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
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
  
  bVar2 = *(byte *)(param_2 + 0x45);
  if (bVar2 < 3) {
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00adfa80);
      }
      core::panicking::panic_const::panic_const_async_fn_resumed_panic();
                    /* catch() { ... } // from try @ 007dd220 with catch @ 007dd36c */
                    /* catch() { ... } // from try @ 007dd2e0 with catch @ 007dd370 */
      *(undefined1 *)(param_2 + 0x45) = 2;
                    /* WARNING: Subroutine does not return */
      FUN_00ab2530();
    }
    memcpy(auStack_588,param_2 + 2,0x218);
    iVar1 = *(int *)(param_2 + 1);
    if (iVar1 != -1) {
      uVar5 = *param_2;
                    /* try { // try from 007dd190 to 007dd1c7 has its CatchHandler @ 007dd3b4 */
      local_c8 = <tokio::time::instant::tokio::time::instant::Instant>::now();
      auVar6 = <tokio::time::instant::tokio::time::instant::Instant>::checked_add
                         (local_c8,uVar5,iVar1);
      if (auVar6._8_4_ == -1) {
                    /* try { // try from 007dd22c to 007dd237 has its CatchHandler @ 007dd3b4 */
        <tokio::time::sleep::tokio::time::sleep::Sleep>::far_future(local_c8,0);
      }
      else {
        <tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout
                  (local_c8,auVar6._0_8_,auVar6._8_8_,0,
                   &PTR_s__root__cargo_registry_src_index__00adfa68);
      }
      memcpy(auStack_2f8,auStack_588,0x218);
      uStack_328 = uStack_80;
      local_330 = local_88;
      uStack_318 = uStack_70;
      uStack_320 = local_78;
      uStack_368 = CONCAT44(uStack_bc,local_c8._8_4_);
      uStack_308 = uStack_60;
      local_310 = local_68;
      local_300 = local_58;
      local_370 = local_c8._0_8_;
      uStack_358 = uStack_b0;
      uStack_348 = uStack_a0;
      local_350 = local_a8;
      uStack_338 = uStack_90;
      uStack_340 = local_98;
      memcpy(param_2 + 0x46,&local_370,0x290);
      goto LAB_007dd294;
    }
    memcpy(param_2 + 0x46,param_2 + 2,0x218);
LAB_007dd1dc:
                    /* try { // try from 007dd1dc to 007dd1eb has its CatchHandler @ 007dd390 */
    FUN_007dd3d4(local_c8,param_2 + 0x46,param_3);
    if (cStack_b7 == -1) {
      *(undefined1 *)((long)param_1 + 0x11) = 0xff;
      uVar3 = 4;
      goto LAB_007dd334;
    }
    puVar4 = (undefined *)CONCAT44(uStack_bc,local_c8._8_4_);
    local_d0 = uStack_b6;
    local_cc = uStack_b2;
                    /* try { // try from 007dd220 to 007dd227 has its CatchHandler @ 007dd36c */
    FUN_007d97c0(param_2 + 0x46);
  }
  else {
    if (bVar2 != 3) goto LAB_007dd1dc;
LAB_007dd294:
                    /* try { // try from 007dd294 to 007dd2a3 has its CatchHandler @ 007dd3a0 */
    FUN_00775d54(local_c8,param_2 + 0x46,param_3);
    uVar5 = local_c8._0_8_;
    if (cStack_b7 == -2) {
      *(undefined1 *)((long)param_1 + 0x11) = 0xff;
      uVar3 = 3;
      goto LAB_007dd334;
    }
    puVar4 = (undefined *)CONCAT44(uStack_bc,local_c8._8_4_);
    local_d8 = uStack_b6;
    local_d4 = uStack_b2;
                    /* try { // try from 007dd2d8 to 007dd2df has its CatchHandler @ 007dd37c */
    FUN_007d97c0(param_2 + 0x55);
                    /* try { // try from 007dd2e0 to 007dd2e7 has its CatchHandler @ 007dd370 */
    FUN_007daa14(param_2 + 0x46);
    if (cStack_b7 == -1) {
      cStack_b7 = '\x02';
      puVar4 = &DAT_00adfab8;
      local_c8._0_8_ = 1;
    }
    else {
      local_d0 = local_d8;
      local_cc = local_d4;
      local_c8._0_8_ = uVar5;
    }
  }
  *param_1 = local_c8._0_8_;
  param_1[1] = puVar4;
  *(undefined1 *)(param_1 + 2) = local_b8;
  *(char *)((long)param_1 + 0x11) = cStack_b7;
  *(undefined4 *)((long)param_1 + 0x12) = local_d0;
  uVar3 = 1;
  *(undefined2 *)((long)param_1 + 0x16) = local_cc;
LAB_007dd334:
  *(undefined1 *)(param_2 + 0x45) = uVar3;
  return;
}


// ===== 007dd3d4  FUN_007dd3d4 =====

void FUN_007dd3d4(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined1 uVar14;
  void *__ptr;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  ulong local_1168;
  ulong *puStack_1160;
  undefined **local_1158;
  undefined1 auStack_1150 [256];
  undefined8 local_1050;
  undefined1 auStack_d20 [1072];
  ulong local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  ulong local_4a0;
  ulong *puStack_498;
  undefined **local_490;
  long *plStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  
  local_1050 = 0;
  bVar2 = *(byte *)((long)param_2 + 0x211);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00adfb88);
LAB_007dd948:
      uVar8 = core::panicking::panic_const::panic_const_async_fn_resumed_panic
                        (&PTR_s__root__cargo_registry_src_index__00adfb88);
                    /* catch() { ... } // from try @ 007dd6c4 with catch @ 007dd954 */
      if (local_1168 == 2) {
        FUN_007d8900(&local_1168);
      }
      FUN_007d8980(param_2 + 0x39);
      if ((*(byte *)((long)param_2 + 0x213) & 1) != 0) {
        FUN_007d90a8(param_2 + 0x36);
      }
      plVar10 = (long *)param_2[0x35];
      *(undefined1 *)((long)param_2 + 0x213) = 0;
      do {
        lVar12 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                  (param_2 + 0x35);
      }
      FUN_007d90a8(param_2 + 0x32);
      if ((*(byte *)((long)param_2 + 0x214) & 1) != 0) {
        FUN_007da3f0(param_2 + 0x27);
      }
      plVar10 = (long *)param_2[0x24];
      *(undefined1 *)((long)param_2 + 0x214) = 0;
      do {
        lVar12 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                  (param_2 + 0x24);
      }
      plVar10 = (long *)param_2[0x25];
      do {
        lVar12 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
                  (param_2 + 0x25);
      }
      if (*(char *)(param_2 + 0x1f) != '\x02') {
        (**(code **)(param_2[0x1b] + 0x20))(param_2 + 0x1e,param_2[0x1c],param_2[0x1d]);
      }
      *(undefined1 *)((long)param_2 + 0x211) = 2;
                    /* WARNING: Subroutine does not return */
      FUN_00ab2530(uVar8);
    }
    puVar7 = param_2 + 0x27;
    *(undefined2 *)((long)param_2 + 0x213) = 0x100;
    param_2[0x20] = param_2[7];
    param_2[0x1f] = param_2[6];
    param_2[0x31] = param_2[0x18];
    param_2[0x22] = param_2[9];
    param_2[0x21] = param_2[8];
    param_2[0x24] = param_2[0xb];
    param_2[0x23] = param_2[10];
    param_2[0x26] = param_2[0xd];
    param_2[0x25] = param_2[0xc];
    *(undefined1 *)((long)param_2 + 0x212) = *(undefined1 *)(param_2 + 0x42);
    param_2[0x1a] = param_2[1];
    param_2[0x19] = *param_2;
    param_2[0x1c] = param_2[3];
    param_2[0x1b] = param_2[2];
    param_2[0x34] = param_2[9];
    param_2[0x35] = param_2[0x23];
    param_2[0x1e] = param_2[5];
    param_2[0x1d] = param_2[4];
    param_2[0x28] = param_2[0xf];
    *puVar7 = param_2[0xe];
    param_2[0x2a] = param_2[0x11];
    param_2[0x29] = param_2[0x10];
    param_2[0x2e] = param_2[0x15];
    param_2[0x2d] = param_2[0x14];
    param_2[0x30] = param_2[0x17];
    param_2[0x2f] = param_2[0x16];
    param_2[0x33] = param_2[8];
    param_2[0x32] = param_2[7];
    plVar10 = (long *)param_2[0x32];
    param_2[0x2c] = param_2[0x13];
    param_2[0x2b] = param_2[0x12];
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 < 0) {
LAB_007dd938:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x7dd93c);
      (*pcVar11)();
    }
    plVar1 = (long *)param_2[0x33];
    uVar8 = param_2[0x34];
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 < 0) goto LAB_007dd938;
    param_2[0x36] = plVar10;
    param_2[0x37] = plVar1;
    param_2[0x38] = uVar8;
    *(undefined1 *)((long)param_2 + 0x213) = 1;
                    /* try { // try from 007dd4e4 to 007dd4f3 has its CatchHandler @ 007dda80 */
    if (((*(char *)((long)param_2 + 0x131) != '\x01') && ((char)*puVar7 != '\0')) &&
       (iVar5 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq
                          (param_2 + 0x27,&DAT_0029f4e0), iVar5 != 0)) {
                    /* try { // try from 007dd4f8 to 007dd4ff has its CatchHandler @ 007dd968 */
      lVar12 = FUN_007de0d4(param_2 + 0x36);
      *(undefined1 *)(lVar12 + 0xa7) = 1;
    }
    uStack_8e8 = param_2[0x37];
    local_8f0 = param_2[0x36];
    local_8e0 = param_2[0x38];
    plStack_488 = (long *)param_2[0x35];
    *(undefined1 *)((long)param_2 + 0x213) = 0;
    do {
      lVar12 = *plStack_488;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_488,0x10);
      if (bVar4) {
        *plStack_488 = lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 < 0) goto LAB_007dd938;
                    /* try { // try from 007dd548 to 007dd553 has its CatchHandler @ 007ddac8 */
    local_4a0 = local_8f0;
    puStack_498 = (ulong *)uStack_8e8;
    local_490 = (undefined **)local_8e0;
    FUN_007baaac(param_2 + 0x39,&local_4a0);
    uStack_478 = param_2[0x2c];
    local_480 = param_2[0x2b];
    uStack_468 = param_2[0x2e];
    local_470 = param_2[0x2d];
    uStack_458 = param_2[0x30];
    local_460 = param_2[0x2f];
    local_450 = param_2[0x31];
    *(undefined1 *)((long)param_2 + 0x214) = 0;
    puStack_498 = (ulong *)param_2[0x28];
    local_4a0 = *puVar7;
    plStack_488 = (long *)param_2[0x2a];
    local_490 = (undefined **)param_2[0x29];
                    /* try { // try from 007dd580 to 007dd58b has its CatchHandler @ 007ddac0 */
    auVar17 = FUN_007bb884(param_2 + 0x39,&local_4a0);
    *(undefined1 (*) [16])(param_2 + 0x40) = auVar17;
  }
  else {
    if (bVar2 != 3) goto LAB_007dd948;
    auVar17 = *(undefined1 (*) [16])(param_2 + 0x40);
  }
                    /* try { // try from 007dd5ac to 007dd5b7 has its CatchHandler @ 007ddad0 */
  (**(code **)(auVar17._8_8_ + 0x18))(&local_4a0,auVar17._0_8_,param_3);
  ppuVar13 = local_490;
  puVar7 = puStack_498;
  uVar15 = local_4a0;
  if (local_4a0 == 0xfffffffffffffffe) {
    param_1[1][1] = 0xff;
    uVar9 = 3;
    goto LAB_007dd908;
  }
  memcpy(auStack_d20,&plStack_488,0x430);
  puVar16 = (undefined8 *)param_2[0x41];
  __ptr = (void *)param_2[0x40];
  pcVar11 = (code *)*puVar16;
  if (pcVar11 != (code *)0x0) {
                    /* try { // try from 007dd600 to 007dd607 has its CatchHandler @ 007ddaa0 */
    (*pcVar11)(__ptr);
  }
  if (puVar16[1] != 0) {
    free(__ptr);
  }
  if (uVar15 == 0xffffffffffffffff) {
LAB_007dd6e8:
                    /* try { // try from 007dd6e8 to 007dd6ef has its CatchHandler @ 007ddabc */
    auVar17._8_8_ = ppuVar13;
    auVar17._0_8_ = puVar7;
    FUN_007d8980(param_2 + 0x39);
    plVar10 = (long *)param_2[0x35];
    *(undefined1 *)((long)param_2 + 0x213) = 0;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd710 to 007dd717 has its CatchHandler @ 007dda98 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x35);
    }
    plVar10 = (long *)param_2[0x32];
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd734 to 007dd73b has its CatchHandler @ 007dd9c8 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow(param_2 + 0x32);
    }
    plVar10 = (long *)param_2[0x33];
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd758 to 007dd75f has its CatchHandler @ 007dda90 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_2 + 0x33);
    }
    plVar10 = (long *)param_2[0x24];
    *(undefined1 *)((long)param_2 + 0x214) = 0;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd780 to 007dd787 has its CatchHandler @ 007dd97c */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x24);
    }
    plVar10 = (long *)param_2[0x25];
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd7a4 to 007dd7ab has its CatchHandler @ 007dd974 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
                (param_2 + 0x25);
    }
    if (*(char *)(param_2 + 0x1f) != '\x02') {
                    /* try { // try from 007dd7c4 to 007dd7cb has its CatchHandler @ 007dda84 */
      (**(code **)(param_2[0x1b] + 0x20))(param_2 + 0x1e,param_2[0x1c],param_2[0x1d]);
    }
    uVar14 = 2;
  }
  else {
    memcpy(auStack_1150,auStack_d20,0x430);
    local_1168 = uVar15;
    puStack_1160 = puVar7;
    local_1158 = ppuVar13;
    if (uVar15 == 2) {
      memcpy(&local_4a0,&local_1168,0x448);
                    /* try { // try from 007dd658 to 007dd663 has its CatchHandler @ 007dda7c */
      auVar17 = FUN_007a7e44(param_2 + 0x26,&local_4a0);
      uVar15 = (ulong)*(byte *)((long)param_2 + 0x212);
      uVar14 = 0;
    }
    else {
      memcpy(&local_8f0,&local_1168,0x448);
                    /* try { // try from 007dd690 to 007dd69b has its CatchHandler @ 007dd960 */
      if (((*(byte *)((long)param_2 + 0x131) & 1) == 0) &&
         (uVar6 = <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_nodelay
                            (&local_8f0,0), uVar6 != 0)) {
        local_4a0 = uVar6;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar7 = (ulong *)FUN_004b25a4(8,8);
        if (puVar7 == (ulong *)0x0) {
                    /* try { // try from 007dd92c to 007dd937 has its CatchHandler @ 007ddae8 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,8);
        }
        *puVar7 = uVar6;
                    /* try { // try from 007dd6c4 to 007dd6cb has its CatchHandler @ 007dd954 */
        FUN_007d8df4(&local_8f0);
        if (local_1168 == 2) {
                    /* try { // try from 007dd6d8 to 007dd6df has its CatchHandler @ 007dd95c */
          FUN_007d8900(&local_1168);
        }
        ppuVar13 = &PTR_FUN_00adee50;
        goto LAB_007dd6e8;
      }
      memcpy(&local_4a0,&local_8f0,0x448);
                    /* try { // try from 007dd7e4 to 007dd7ef has its CatchHandler @ 007dd96c */
      auVar17 = FUN_007a7af4(param_2 + 0x26,&local_4a0);
      uVar15 = (ulong)*(byte *)((long)param_2 + 0x212);
      uVar14 = *(undefined1 *)((long)param_2 + 0x132);
      if (local_1168 == 2) {
                    /* try { // try from 007dd80c to 007dd813 has its CatchHandler @ 007dd95c */
        FUN_007d8900(&local_1168);
      }
    }
                    /* try { // try from 007dd814 to 007dd81b has its CatchHandler @ 007ddabc */
    FUN_007d8980(param_2 + 0x39);
    plVar10 = (long *)param_2[0x35];
    *(undefined1 *)((long)param_2 + 0x213) = 0;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd83c to 007dd843 has its CatchHandler @ 007dda98 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x35);
    }
    plVar10 = (long *)param_2[0x32];
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd860 to 007dd867 has its CatchHandler @ 007dda4c */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow(param_2 + 0x32);
    }
    plVar10 = (long *)param_2[0x33];
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd884 to 007dd88b has its CatchHandler @ 007dda90 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_2 + 0x33);
    }
    plVar10 = (long *)param_2[0x24];
    *(undefined1 *)((long)param_2 + 0x214) = 0;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd8ac to 007dd8b3 has its CatchHandler @ 007dda00 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x24);
    }
    plVar10 = (long *)param_2[0x25];
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007dd8d0 to 007dd8d7 has its CatchHandler @ 007dd9f8 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
                (param_2 + 0x25);
    }
    if (*(char *)(param_2 + 0x1f) != '\x02') {
                    /* try { // try from 007dd8f0 to 007dd8f7 has its CatchHandler @ 007dda84 */
      (**(code **)(param_2[0x1b] + 0x20))(param_2 + 0x1e,param_2[0x1c],param_2[0x1d]);
    }
  }
  uVar9 = 1;
  *param_1 = auVar17;
  param_1[1][0] = (char)uVar15;
  param_1[1][1] = uVar14;
LAB_007dd908:
  *(undefined1 *)((long)param_2 + 0x211) = uVar9;
  return;
}


// ===== 007ddbec  FUN_007ddbec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ddbec(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  byte *pbVar1;
  short *psVar2;
  char *pcVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  uint *puVar15;
  long *plVar17;
  long lVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  char *pcVar22;
  char *pcVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long lVar29;
  long local_c0;
  char *local_b8;
  long local_b0;
  char *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined *puStack_78;
  char **local_70;
  code *pcStack_68;
  undefined4 local_44;
  uint *puVar16;
  
  puVar10 = PTR_ALL_KEY_EXCHANGE_ALGORITHMS_00b00fb0;
  lVar18 = *param_2;
  if ((*(long *)(lVar18 + 0x20) != 0) && (param_4 != 0)) {
    param_4 = param_4 << 3;
    puVar15 = *(uint **)(lVar18 + 0x18);
    do {
      puVar16 = puVar15 + 4;
      sVar4 = *(short *)PTR_TLS13_00b00fa0;
      if (*puVar15 == 0) {
        sVar4 = *(short *)PTR_TLS12_00b00fa8;
      }
      lVar24 = param_4;
      puVar12 = param_3;
      if (sVar4 == 9) {
        sVar4 = *(short *)(PTR_TLS13_00b00fa0 + 2);
        if ((*puVar15 & 1) == 0) {
          sVar4 = *(short *)(PTR_TLS12_00b00fa8 + 2);
        }
        do {
          if ((*(short *)*puVar12 == 9) && (((short *)*puVar12)[1] == sVar4)) goto LAB_007ddd80;
          lVar24 = lVar24 + -8;
          puVar12 = puVar12 + 1;
        } while (lVar24 != 0);
      }
      else {
        do {
          if (*(short *)*puVar12 == sVar4) goto LAB_007ddd80;
          lVar24 = lVar24 + -8;
          puVar12 = puVar12 + 1;
        } while (lVar24 != 0);
      }
      puVar15 = puVar16;
    } while (puVar16 != *(uint **)(lVar18 + 0x18) + *(long *)(lVar18 + 0x20) * 4);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar24 = 0x22;
  uVar25 = 1;
  puVar12 = (undefined8 *)FUN_004b25a4(0x22,1);
  uVar9 = _UNK_002e5d8c;
  uVar8 = _DAT_002e5d84;
  uVar7 = _UNK_002e5d7c;
  uVar28 = _DAT_002e5d74;
  if (puVar12 == (undefined8 *)0x0) goto LAB_007ddd9c;
  *(undefined2 *)(puVar12 + 4) = 0x6465;
  param_1[2] = 0x22;
  param_1[3] = puVar12;
  puVar12[1] = uVar7;
  *puVar12 = uVar28;
  puVar12[3] = uVar9;
  puVar12[2] = uVar8;
  uVar28 = _UNK_002a0308;
  uVar25 = _DAT_002a0300;
  param_1[4] = 0x22;
LAB_007ddd14:
  param_1[1] = uVar28;
  *param_1 = uVar25;
LAB_007ddd18:
  plVar17 = (long *)*param_2;
  do {
    lVar18 = *plVar17;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar18 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007ddd34 to 007ddd3b has its CatchHandler @ 007de030 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow(param_2);
  }
  plVar17 = (long *)param_2[1];
  do {
    lVar18 = *plVar17;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar18 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_2 + 1);
  }
  return;
LAB_007ddd80:
  if (*(long *)(lVar18 + 0x38) != 0) {
    lVar24 = *(long *)(PTR_ALL_KEY_EXCHANGE_ALGORITHMS_00b00fb0 + 8);
    if (lVar24 < 0) {
      uVar25 = 0;
      goto LAB_007ddd9c;
    }
    local_c0 = lVar24;
    if (lVar24 == 0) {
      puVar26 = *(undefined8 **)(lVar18 + 0x30);
      local_b0 = 0;
      local_b8 = &DAT_00000001;
      puVar12 = puVar26 + *(long *)(lVar18 + 0x38) * 2;
LAB_007dde48:
      do {
        puVar27 = puVar26 + 2;
                    /* try { // try from 007dde50 to 007dde9f has its CatchHandler @ 007de060 */
        (**(code **)(puVar26[1] + 0x38))(*puVar26);
        uVar11 = <rustls::msgs::enums::rustls::msgs::enums::NamedGroup>::key_exchange_algorithm();
        lVar24 = local_b0;
        lVar18 = 0;
        do {
          if (local_b0 == lVar18) {
            if (local_b0 == local_c0) {
              <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::handshake::KeyExchangeAlgorithm>>
              ::grow_one(&local_c0);
            }
            local_b8[lVar24] = (char)uVar11;
            local_b0 = lVar24 + 1;
            if (local_b0 != *(long *)(puVar10 + 8)) goto LAB_007ddebc;
            goto LAB_007ddec4;
          }
          pbVar1 = (byte *)(local_b8 + lVar18);
          lVar18 = lVar18 + 1;
        } while (*pbVar1 != uVar11);
        if (local_b0 == *(long *)(puVar10 + 8)) break;
LAB_007ddebc:
        puVar26 = puVar27;
      } while (puVar27 != puVar12);
LAB_007ddec4:
      lVar18 = *param_2;
      lVar24 = *(long *)(lVar18 + 0x20);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar25 = 1;
      local_b8 = (char *)FUN_004b25a4(lVar24,1);
      if (local_b8 == (char *)0x0) goto LAB_007ddd9c;
      lVar18 = *param_2;
      local_b0 = 0;
      if (*(long *)(lVar18 + 0x38) != 0) {
        puVar12 = *(undefined8 **)(lVar18 + 0x30) + *(long *)(lVar18 + 0x38) * 2;
        puVar26 = *(undefined8 **)(lVar18 + 0x30);
        goto LAB_007dde48;
      }
      lVar24 = *(long *)(lVar18 + 0x20);
    }
    if (lVar24 == 0) {
LAB_007ddf60:
      psVar20 = (short *)0x0;
      psVar19 = (short *)0x0;
      do {
        psVar21 = (short *)*param_3;
        psVar2 = psVar21;
        if (*psVar21 != 5) {
          psVar2 = psVar20;
        }
        if (*psVar21 != 4) {
          psVar21 = psVar19;
          psVar20 = psVar2;
        }
        param_4 = param_4 + -8;
        psVar19 = psVar21;
        param_3 = param_3 + 1;
      } while (param_4 != 0);
      lVar29 = param_2[2];
      lVar24 = param_2[1];
      *param_1 = 0xfffffffffffffffd;
      param_1[0x10] = psVar21;
      param_1[0x11] = psVar20;
      param_1[0x12] = lVar18;
      param_1[0x14] = lVar29;
      param_1[0x13] = lVar24;
      if (local_c0 != 0) {
        free(local_b8);
        return;
      }
      return;
    }
    pcVar3 = *(char **)puVar10;
    lVar29 = *(long *)(puVar10 + 8);
    puVar15 = *(uint **)(lVar18 + 0x18);
LAB_007ddef8:
    puVar16 = puVar15 + 4;
    if ((*puVar15 & 1) == 0) {
      pcVar22 = (char *)(*(long *)(puVar15 + 2) + 0x50);
      pcVar23 = (char *)(*(long *)(puVar15 + 2) + 0x51);
      lStack_a0 = 1;
      local_a8 = pcVar22;
LAB_007ddf34:
      do {
        lVar13 = local_b0;
        pcVar14 = local_b8;
        while (lVar13 != 0) {
          cVar5 = *pcVar14;
          lVar13 = lVar13 + -1;
          pcVar14 = pcVar14 + 1;
          if (cVar5 == *pcVar22) {
            puVar15 = puVar16;
            if (puVar16 == *(uint **)(lVar18 + 0x18) + lVar24 * 4) goto LAB_007ddf60;
            goto LAB_007ddef8;
          }
        }
        pcVar22 = pcVar22 + 1;
      } while (pcVar22 != pcVar23);
    }
    else {
      pcVar23 = pcVar3 + lVar29;
      pcVar22 = pcVar3;
      local_a8 = pcVar3;
      lStack_a0 = lVar29;
      if (lVar29 != 0) goto LAB_007ddf34;
    }
    local_80 = &local_44;
    local_44 = *(undefined4 *)(*(long *)(puVar15 + 2) + 0x48);
    local_70 = &local_a8;
    pcStack_68 = FUN_00782e84;
                    /* try { // try from 007ddfe8 to 007ddffb has its CatchHandler @ 007de02c */
    puStack_78 = PTR_fmt_00b00fb8;
    alloc::fmt::format::format_inner(&local_98,&DAT_002e5d96,&local_80);
    uVar28 = _UNK_002a0308;
    uVar25 = _DAT_002a0300;
    param_1[4] = local_88;
    param_1[1] = uVar28;
    *param_1 = uVar25;
    param_1[3] = uStack_90;
    param_1[2] = local_98;
    if (local_c0 != 0) {
      free(local_b8);
    }
    goto LAB_007ddd18;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar24 = 0x17;
  uVar25 = 1;
  puVar12 = (undefined8 *)FUN_004b25a4(0x17,1);
  uVar28 = _DAT_002e5e20;
  if (puVar12 == (undefined8 *)0x0) {
LAB_007ddd9c:
                    /* try { // try from 007ddd9c to 007ddda7 has its CatchHandler @ 007de07c */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar25,lVar24);
  }
  uVar25 = CONCAT17((undefined1)DAT_002e5e2f,_UNK_002e5e28);
  uVar7 = CONCAT71(DAT_002e5e2f._1_7_,(undefined1)DAT_002e5e2f);
  param_1[2] = 0x17;
  param_1[3] = puVar12;
  param_1[4] = 0x17;
  puVar12[1] = uVar25;
  *puVar12 = uVar28;
  *(undefined8 *)((long)puVar12 + 0xf) = uVar7;
  uVar25 = _DAT_002a0300;
  uVar28 = _UNK_002a0308;
  goto LAB_007ddd14;
}


// ===== 007de0d4  FUN_007de0d4 =====

undefined8 * FUN_007de0d4(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *__ptr;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  plVar5 = (long *)*param_1;
  do {
    if (*plVar5 != 1) {
      ClearExclusiveLocal();
      plVar5 = (long *)*param_1;
      lVar7 = FUN_0079d310(plVar5 + 2);
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
                    /* try { // try from 007de23c to 007de243 has its CatchHandler @ 007de260 */
        <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
        drop_slow(param_1);
      }
      *param_1 = lVar7;
      return (undefined8 *)(lVar7 + 0x10);
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  __ptr = (undefined8 *)*param_1;
  if (__ptr[1] == 1) {
    *__ptr = 1;
    puVar4 = __ptr;
  }
  else {
                    /* try { // try from 007de13c to 007de20b has its CatchHandler @ 007de268 */
    auVar15 = alloc::sync::arcinner_layout_for_value_layout(8,0xb0);
    lVar7 = auVar15._8_8_;
    puVar3 = auVar15._0_8_;
    puVar4 = puVar3;
    if (lVar7 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar4 = (undefined8 *)FUN_004b25a4(lVar7,puVar3);
    }
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(puVar3,lVar7);
    }
    puVar4[1] = 1;
    *puVar4 = 1;
    uVar11 = __ptr[5];
    uVar10 = __ptr[4];
    uVar9 = __ptr[7];
    uVar8 = __ptr[6];
    uVar12 = __ptr[2];
    puVar4[3] = __ptr[3];
    puVar4[2] = uVar12;
    puVar4[5] = uVar11;
    puVar4[4] = uVar10;
    puVar4[7] = uVar9;
    puVar4[6] = uVar8;
    uVar10 = __ptr[0xc];
    uVar9 = __ptr[0xf];
    uVar8 = __ptr[0xe];
    uVar12 = __ptr[9];
    uVar11 = __ptr[8];
    uVar14 = __ptr[0xb];
    uVar13 = __ptr[10];
    puVar4[0xd] = __ptr[0xd];
    puVar4[0xc] = uVar10;
    puVar4[0xf] = uVar9;
    puVar4[0xe] = uVar8;
    puVar4[9] = uVar12;
    puVar4[8] = uVar11;
    puVar4[0xb] = uVar14;
    puVar4[10] = uVar13;
    uVar10 = __ptr[0x14];
    uVar9 = __ptr[0x17];
    uVar8 = __ptr[0x16];
    uVar12 = __ptr[0x11];
    uVar11 = __ptr[0x10];
    uVar14 = __ptr[0x13];
    uVar13 = __ptr[0x12];
    puVar4[0x15] = __ptr[0x15];
    puVar4[0x14] = uVar10;
    puVar4[0x17] = uVar9;
    puVar4[0x16] = uVar8;
    puVar4[0x11] = uVar12;
    puVar4[0x10] = uVar11;
    puVar4[0x13] = uVar14;
    puVar4[0x12] = uVar13;
    *param_1 = (long)puVar4;
    if (__ptr != (undefined8 *)0xffffffffffffffff) {
      plVar5 = __ptr + 1;
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
        free(__ptr);
        return puVar4 + 2;
      }
    }
  }
  return puVar4 + 2;
}


// ===== 007de274  FUN_007de274 =====

void FUN_007de274(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  long *local_e8;
  long lStack_e0;
  long *local_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  
  uVar18 = param_2[5];
  uVar16 = param_2[0xc];
  uVar5 = *(undefined1 *)(param_2 + 0xd);
  uVar12 = param_2[6];
  lVar17 = param_3[2];
  uVar6 = *(undefined1 *)((long)param_2 + 0x69);
  uVar7 = *(undefined1 *)((long)param_2 + 0x6a);
  uStack_108 = (undefined4)param_2[3];
  uStack_104 = (undefined4)((ulong)param_2[3] >> 0x20);
  local_110 = (undefined4)param_2[2];
  uStack_10c = (undefined4)((ulong)param_2[2] >> 0x20);
  local_f8 = (undefined4)uVar18;
  uStack_f4 = (undefined4)((ulong)uVar18 >> 0x20);
  uStack_100 = (undefined4)param_2[4];
  uStack_fc = (undefined4)((ulong)param_2[4] >> 0x20);
  if (lVar17 == 0) {
    uVar13 = *param_2;
    uVar4 = *(undefined4 *)(param_2 + 1);
    *(undefined1 *)(param_1 + 0xd) = uVar5;
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_108,uStack_10c);
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_110,uStack_114);
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(local_f8,uStack_fc);
    *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_100,uStack_104);
    param_1[6] = uVar12;
    param_1[5] = uVar18;
    uVar19 = param_2[8];
    uVar18 = param_2[7];
    *param_1 = uVar13;
    uVar12 = param_2[0xb];
    param_1[8] = uVar19;
    param_1[7] = uVar18;
    uVar13 = param_2[10];
    uVar18 = param_2[9];
    param_1[0xb] = uVar12;
    param_1[0xc] = uVar16;
    lVar17 = *param_3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    param_1[10] = uVar13;
    param_1[9] = uVar18;
    *(undefined1 *)((long)param_1 + 0x69) = uVar6;
    *(undefined1 *)((long)param_1 + 0x6a) = uVar7;
    if (lVar17 != 0) {
      free((void *)param_3[1]);
      return;
    }
  }
  else {
    local_80 = param_2[0xb];
    uStack_d0._0_4_ = 0xffffffff;
    uStack_c4 = uStack_10c;
    uStack_c0._0_4_ = uStack_108;
    uStack_c8 = local_110;
    uStack_b4 = uStack_fc;
    uStack_c0._4_4_ = uStack_104;
    uStack_b8 = uStack_100;
    uStack_98 = param_2[8];
    uStack_a0 = param_2[7];
    uStack_88 = param_2[10];
    local_90 = param_2[9];
    uStack_b0 = local_f8;
    uStack_ac = uStack_f4;
    uStack_a8 = uVar12;
    uStack_78 = uVar16;
    local_70 = uVar5;
    local_6f = uVar6;
    local_6e = uVar7;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar10 = FUN_004b25a4(0x70,8);
    if (lVar10 == 0) {
                    /* try { // try from 007de50c to 007de517 has its CatchHandler @ 007de5c4 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    uVar13 = param_2[0xb];
    *(undefined1 *)(lVar10 + 0x68) = uVar5;
    *(undefined8 *)(lVar10 + 0x58) = uVar13;
    *(undefined8 *)(lVar10 + 0x60) = uVar16;
    lVar3 = *param_3;
    local_d8 = (long *)param_3[1];
    *(ulong *)(lVar10 + 0x14) = CONCAT44(uStack_108,uStack_10c);
    *(ulong *)(lVar10 + 0xc) = CONCAT44(local_110,uStack_114);
    auVar20._8_8_ = &PTR_thunk_FUN_007d9bbc_00adfca8;
    auVar20._0_8_ = lVar10;
    *(ulong *)(lVar10 + 0x24) = CONCAT44(local_f8,uStack_fc);
    *(ulong *)(lVar10 + 0x1c) = CONCAT44(uStack_100,uStack_104);
    uVar19 = param_2[8];
    uVar13 = param_2[7];
    *(undefined1 *)(lVar10 + 0x6a) = uVar7;
    plVar2 = local_d8 + lVar17 * 2;
    *(undefined8 *)(lVar10 + 0x30) = uVar12;
    *(undefined8 *)(lVar10 + 0x28) = uVar18;
    uVar16 = param_2[10];
    uVar12 = param_2[9];
    *(undefined8 *)(lVar10 + 0x40) = uVar19;
    *(undefined8 *)(lVar10 + 0x38) = uVar13;
    *(undefined4 *)(lVar10 + 8) = 0xffffffff;
    *(undefined8 *)(lVar10 + 0x50) = uVar16;
    *(undefined8 *)(lVar10 + 0x48) = uVar12;
    *(undefined1 *)(lVar10 + 0x69) = uVar6;
    uStack_c8 = (undefined4)lVar3;
    uStack_c4 = (undefined4)((ulong)lVar3 >> 0x20);
    plVar15 = local_d8;
    uStack_c0 = plVar2;
    do {
      plVar1 = plVar15 + 2;
      local_e8 = (long *)*plVar15;
      lStack_e0 = plVar15[1];
                    /* try { // try from 007de3ac to 007de3bb has its CatchHandler @ 007de550 */
      uStack_d0 = plVar1;
      auVar20 = (**(code **)(lStack_e0 + 0x18))
                          ((long)local_e8 +
                           (*(long *)(lStack_e0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           auVar20._0_8_,auVar20._8_8_);
      do {
        lVar17 = *local_e8;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(local_e8,0x10);
        if (bVar9) {
          *local_e8 = lVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar17 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007de3e0 to 007de3e7 has its CatchHandler @ 007de544 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(&local_e8);
      }
      plVar15 = plVar1;
    } while (plVar1 != plVar2);
                    /* try { // try from 007de3ec to 007de3f3 has its CatchHandler @ 007de53c */
    FUN_0077aa8c(&local_d8);
    uStack_d0._0_4_ = auVar20._8_4_;
    uStack_d0._4_4_ = auVar20._12_4_;
    local_d8 = auVar20._0_8_;
    if (*(int *)(param_2 + 1) == -1) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pauVar11 = (undefined1 (*) [16])FUN_004b25a4(0x10,8);
      if (pauVar11 == (undefined1 (*) [16])0x0) {
                    /* try { // try from 007de52c to 007de537 has its CatchHandler @ 007de59c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x10);
      }
      *pauVar11 = auVar20;
      ppuVar14 = &PTR_FUN_00adfcd8;
    }
    else {
      uStack_c8 = (undefined4)*param_2;
      uStack_c4 = (undefined4)((ulong)*param_2 >> 0x20);
      uStack_c0._0_4_ = *(int *)(param_2 + 1);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pauVar11 = (undefined1 (*) [16])FUN_004b25a4(0x20,8);
      if (pauVar11 == (undefined1 (*) [16])0x0) {
                    /* try { // try from 007de51c to 007de527 has its CatchHandler @ 007de5b0 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x20);
      }
      ppuVar14 = &PTR_FUN_00adfd08;
      *(ulong *)(*pauVar11 + 8) = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
      *(long **)*pauVar11 = local_d8;
      *(ulong *)(pauVar11[1] + 8) = CONCAT44(uStack_c0._4_4_,(int)uStack_c0);
      *(ulong *)pauVar11[1] = CONCAT44(uStack_c4,uStack_c8);
    }
    param_1[2] = pauVar11;
    param_1[3] = ppuVar14;
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
  }
  return;
}


// ===== 007de5e8  reqwest::connect::tunnel_eof =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* reqwest::connect::tunnel_eof */

void __rustcall reqwest::connect::tunnel_eof(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x1e,1);
  uVar3 = _UNK_002e5e4d;
  uVar2 = _DAT_002e5e37;
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x1e);
  }
  uVar1 = CONCAT62(_UNK_002e5e47,_DAT_002e5e45);
  puVar4[1] = CONCAT26(_DAT_002e5e45,_UNK_002e5e3f);
  *puVar4 = uVar2;
  *(undefined8 *)((long)puVar4 + 0x16) = uVar3;
  *(undefined8 *)((long)puVar4 + 0xe) = uVar1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar5 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0x1e;
    puVar5[1] = puVar4;
    puVar5[2] = 0x1e;
    return;
  }
                    /* try { // try from 007de658 to 007de663 has its CatchHandler @ 007de674 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 007de690  reqwest::connect::into_uri =====

/* WARNING: Unknown calling convention: __rustcall */
/* reqwest::connect::into_uri */

void __rustcall reqwest::connect::into_uri(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char local_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  long local_1cf;
  long lStack_1c7;
  long local_1bf;
  long lStack_1b7;
  long local_1af;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  char local_190;
  undefined2 uStack_18f;
  undefined5 uStack_18d;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 local_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 local_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 local_14f;
  undefined1 uStack_148;
  undefined6 uStack_147;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined6 uStack_13f;
  undefined1 uStack_139;
  long local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  char local_a8;
  char cStack_a7;
  undefined6 uStack_a6;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  local_98 = 0;
  uStack_97 = 0;
  local_a8 = -1;
  uStack_78 = 0;
  uStack_77 = 0;
                    /* try { // try from 007de6c8 to 007de6d7 has its CatchHandler @ 007dea14 */
  FUN_0076e668(&local_190,&local_a8,param_2);
  lStack_d8 = CONCAT17(uStack_160,uStack_167);
  local_e0 = CONCAT17(uStack_168,local_16f);
  lStack_c8 = CONCAT17(uStack_150,uStack_157);
  lStack_d0 = CONCAT17(uStack_158,local_15f);
  uStack_b8 = CONCAT16(uStack_141,uStack_147);
  local_c0 = CONCAT17(uStack_148,local_14f);
  lStack_f8 = CONCAT17(uStack_180,uStack_187);
  local_100 = CONCAT17(uStack_188,CONCAT52(uStack_18d,uStack_18f));
  lStack_e8 = CONCAT17(uStack_170,uStack_177);
  local_f0 = CONCAT17(uStack_178,uStack_17f);
  lVar7 = param_3[1];
  lVar5 = *param_3;
  lVar8 = param_3[2];
  uStack_b1 = uStack_140;
  uStack_b0 = (undefined7)(CONCAT17(uStack_139,CONCAT61(uStack_13f,uStack_140)) >> 8);
  uStack_1e8 = (undefined1)lVar7;
  uStack_1e7 = (undefined7)((ulong)lVar7 >> 8);
  local_1f0 = (char)lVar5;
  uStack_1ef = (undefined7)((ulong)lVar5 >> 8);
  uStack_1d8 = (undefined1)param_3[3];
  uStack_1d7 = (undefined7)((ulong)param_3[3] >> 8);
  local_1e0 = (undefined1)lVar8;
  uStack_1df = (undefined7)((ulong)lVar8 >> 8);
  if (local_190 == -2) {
    (**(code **)(lVar5 + 0x20))(&uStack_1d8,lVar7,lVar8);
    cVar4 = local_190;
  }
  else {
    puVar2 = (undefined8 *)((ulong)&local_190 | 1);
    local_a8 = local_190;
    uVar3 = *puVar2;
    uStack_8f = (undefined7)puVar2[3];
    uStack_88 = (undefined1)((ulong)puVar2[3] >> 0x38);
    uStack_97 = (undefined7)puVar2[2];
    uStack_90 = (undefined1)((ulong)puVar2[2] >> 0x38);
    uStack_9f = (undefined7)puVar2[1];
    local_98 = (undefined1)((ulong)puVar2[1] >> 0x38);
    cStack_a7 = (char)uVar3;
    uStack_a6 = (undefined6)((ulong)uVar3 >> 8);
    uStack_a0 = (undefined1)((ulong)uVar3 >> 0x38);
    uStack_7f = (undefined7)puVar2[5];
    uStack_78 = (undefined1)((ulong)puVar2[5] >> 0x38);
    uStack_87 = (undefined7)puVar2[4];
    uStack_80 = (undefined1)((ulong)puVar2[4] >> 0x38);
    uStack_6f = (undefined7)puVar2[7];
    uStack_68 = (undefined1)((ulong)puVar2[7] >> 0x38);
    uStack_77 = (undefined7)puVar2[6];
    uStack_70 = (undefined1)((ulong)puVar2[6] >> 0x38);
    uStack_5f = (undefined7)puVar2[9];
    local_67 = (undefined7)puVar2[8];
    uStack_60 = (undefined1)((ulong)puVar2[8] >> 0x38);
    uStack_58 = (undefined1)*(undefined8 *)((long)puVar2 + 0x4f);
    uStack_57 = (undefined7)((ulong)*(undefined8 *)((long)puVar2 + 0x4f) >> 8);
    if (CONCAT71(uStack_97,local_98) != 0) {
                    /* try { // try from 007de77c to 007de783 has its CatchHandler @ 007de9f8 */
      (**(code **)(CONCAT71(uStack_97,local_98) + 0x20))
                (&uStack_80,CONCAT71(uStack_8f,uStack_90),CONCAT71(uStack_87,uStack_88));
    }
    plVar1 = (long *)((ulong)&local_a8 | 1);
    uStack_90 = (undefined1)param_3[1];
    uStack_8f = (undefined7)((ulong)param_3[1] >> 8);
    local_98 = (undefined1)*param_3;
    uStack_97 = (undefined7)((ulong)*param_3 >> 8);
    uStack_80 = (undefined1)param_3[3];
    uStack_7f = (undefined7)((ulong)param_3[3] >> 8);
    uStack_88 = (undefined1)param_3[2];
    uStack_87 = (undefined7)((ulong)param_3[2] >> 8);
    lStack_d8 = plVar1[5];
    local_e0 = plVar1[4];
    lStack_c8 = plVar1[7];
    lStack_d0 = plVar1[6];
    local_c0 = plVar1[8];
    uStack_b8 = (undefined7)plVar1[9];
    lStack_f8 = plVar1[1];
    local_100 = *plVar1;
    lStack_e8 = plVar1[3];
    local_f0 = plVar1[2];
    uStack_b1 = (undefined1)*(undefined8 *)((long)plVar1 + 0x4f);
    uStack_b0 = (undefined7)((ulong)*(undefined8 *)((long)plVar1 + 0x4f) >> 8);
    cVar4 = local_a8;
  }
  lStack_1c7 = lStack_d8;
  local_1cf = local_e0;
  lStack_1b7 = lStack_c8;
  local_1bf = lStack_d0;
  uStack_1a7 = uStack_b8;
  local_1af = local_c0;
  uStack_1a0 = uStack_b1;
  uStack_19f = uStack_b0;
  uStack_180 = 1;
  uStack_17f = 0;
  uStack_178 = 0;
  uStack_177 = 0;
  uStack_1e7 = (undefined7)lStack_f8;
  local_1e0 = (undefined1)((ulong)lStack_f8 >> 0x38);
  uStack_1ef = (undefined7)local_100;
  uStack_1e8 = (undefined1)((ulong)local_100 >> 0x38);
  uStack_1d7 = (undefined7)lStack_e8;
  uStack_1d0 = (undefined1)((ulong)lStack_e8 >> 0x38);
  uStack_1df = (undefined7)local_f0;
  uStack_1d8 = (undefined1)((ulong)local_f0 >> 0x38);
  local_190 = -0x50;
  uStack_18f = 0xadfd;
  uStack_18d = 0;
  uStack_188 = 0x55;
  uStack_187 = 0x2e5e;
                    /* try { // try from 007de7fc to 007de807 has its CatchHandler @ 007dea30 */
  local_1f0 = cVar4;
  <http::uri::path::http::uri::path::PathAndQuery>::from_shared(&local_a8,&local_190);
  if (CONCAT62(uStack_a6,CONCAT11(cStack_a7,local_a8)) == 0) {
    local_100 = CONCAT71(local_100._1_7_,uStack_a0);
                    /* try { // try from 007de980 to 007de9a3 has its CatchHandler @ 007dea30 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002e5d49,0x2b,&local_100,&DAT_00adfc70,
               &PTR_s__root__cargo_registry_src_index__00adfdd8);
  }
  uStack_128 = CONCAT71(uStack_9f,uStack_a0);
  local_130 = CONCAT62(uStack_a6,CONCAT11(cStack_a7,local_a8));
  uStack_118 = CONCAT71(uStack_8f,uStack_90);
  uStack_120 = CONCAT71(uStack_97,local_98);
  puVar2 = (undefined8 *)((ulong)&local_1f0 | 1);
  local_110 = CONCAT71(uStack_87,uStack_88);
  uVar3 = *(undefined8 *)((long)puVar2 + 0x4f);
  uStack_168 = (undefined1)puVar2[5];
  uStack_167 = (undefined7)((ulong)puVar2[5] >> 8);
  uStack_170 = (undefined1)puVar2[4];
  local_16f = (undefined7)((ulong)puVar2[4] >> 8);
  uStack_158 = (undefined1)puVar2[7];
  uStack_157 = (undefined7)((ulong)puVar2[7] >> 8);
  uStack_160 = (undefined1)puVar2[6];
  local_15f = (undefined7)((ulong)puVar2[6] >> 8);
  uStack_148 = (undefined1)puVar2[9];
  uStack_147 = (undefined6)((ulong)puVar2[9] >> 8);
  uStack_150 = (undefined1)puVar2[8];
  local_14f = (undefined7)((ulong)puVar2[8] >> 8);
  uVar6 = *puVar2;
  uStack_141 = (undefined1)uVar3;
  uStack_140 = (undefined1)((ulong)uVar3 >> 8);
  uStack_13f = (undefined6)((ulong)uVar3 >> 0x10);
  uStack_188 = (undefined1)puVar2[1];
  uStack_187 = (undefined7)((ulong)puVar2[1] >> 8);
  local_190 = (char)uVar6;
  uStack_18f = (undefined2)((ulong)uVar6 >> 8);
  uStack_18d = (undefined5)((ulong)uVar6 >> 0x18);
  uStack_178 = (undefined1)puVar2[3];
  uStack_177 = (undefined7)((ulong)puVar2[3] >> 8);
  uStack_180 = (undefined1)puVar2[2];
  uStack_17f = (undefined7)((ulong)puVar2[2] >> 8);
  local_100 = local_130;
  lStack_f8 = uStack_128;
  local_f0 = uStack_120;
  lStack_e8 = uStack_118;
  local_e0 = local_110;
  if (cVar4 == -2) {
    (**(code **)(local_130 + 0x20))(&lStack_e8,uStack_128,uStack_120);
    local_a8 = cVar4;
  }
  else {
    uStack_6f = (undefined7)puVar2[7];
    uStack_68 = (undefined1)((ulong)puVar2[7] >> 0x38);
    uStack_77 = (undefined7)puVar2[6];
    uStack_70 = (undefined1)((ulong)puVar2[6] >> 0x38);
    uStack_7f = (undefined7)puVar2[5];
    uStack_78 = (undefined1)((ulong)puVar2[5] >> 0x38);
    uStack_87 = (undefined7)puVar2[4];
    uStack_80 = (undefined1)((ulong)puVar2[4] >> 0x38);
    uStack_5f = (undefined7)puVar2[9];
    local_67 = (undefined7)puVar2[8];
    uStack_60 = (undefined1)((ulong)puVar2[8] >> 0x38);
    uVar3 = *puVar2;
    uStack_58 = (undefined1)*(undefined8 *)((long)puVar2 + 0x4f);
    uStack_57 = (undefined7)((ulong)*(undefined8 *)((long)puVar2 + 0x4f) >> 8);
    uStack_9f = (undefined7)puVar2[1];
    local_98 = (undefined1)((ulong)puVar2[1] >> 0x38);
    cStack_a7 = (char)uVar3;
    uStack_a6 = (undefined6)((ulong)uVar3 >> 8);
    uStack_a0 = (undefined1)((ulong)uVar3 >> 0x38);
    uStack_8f = (undefined7)puVar2[3];
    uStack_88 = (undefined1)((ulong)puVar2[3] >> 0x38);
    uStack_97 = (undefined7)puVar2[2];
    uStack_90 = (undefined1)((ulong)puVar2[2] >> 0x38);
    local_a8 = cVar4;
    if (CONCAT71(uStack_77,uStack_78) != 0) {
                    /* try { // try from 007de8b8 to 007de8bf has its CatchHandler @ 007de9d4 */
      (**(code **)(CONCAT71(uStack_77,uStack_78) + 0x20))
                (&uStack_60,CONCAT71(uStack_6f,uStack_70),CONCAT71(local_67,uStack_68));
    }
    puVar2 = (undefined8 *)((ulong)&local_a8 | 1);
    uVar3 = *puVar2;
    uStack_188 = (undefined1)puVar2[1];
    uStack_187 = (undefined7)((ulong)puVar2[1] >> 8);
    local_190 = (char)uVar3;
    uStack_18f = (undefined2)((ulong)uVar3 >> 8);
    uStack_18d = (undefined5)((ulong)uVar3 >> 0x18);
    uStack_178 = (undefined1)puVar2[3];
    uStack_177 = (undefined7)((ulong)puVar2[3] >> 8);
    uStack_180 = (undefined1)puVar2[2];
    uStack_17f = (undefined7)((ulong)puVar2[2] >> 8);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x4f);
    uStack_168 = (undefined1)puVar2[5];
    uStack_167 = (undefined7)((ulong)puVar2[5] >> 8);
    uStack_170 = (undefined1)puVar2[4];
    local_16f = (undefined7)((ulong)puVar2[4] >> 8);
    uStack_158 = (undefined1)puVar2[7];
    uStack_157 = (undefined7)((ulong)puVar2[7] >> 8);
    uStack_160 = (undefined1)puVar2[6];
    local_15f = (undefined7)((ulong)puVar2[6] >> 8);
    uStack_148 = (undefined1)puVar2[9];
    uStack_147 = (undefined6)((ulong)puVar2[9] >> 8);
    uStack_150 = (undefined1)puVar2[8];
    local_14f = (undefined7)((ulong)puVar2[8] >> 8);
    uStack_141 = (undefined1)uVar3;
    uStack_140 = (undefined1)((ulong)uVar3 >> 8);
    uStack_13f = (undefined6)((ulong)uVar3 >> 0x10);
  }
  uStack_5f = CONCAT61(uStack_147,uStack_148);
  uStack_7f = (undefined7)CONCAT71(uStack_167,uStack_168);
  uStack_78 = (undefined1)((uint7)uStack_167 >> 0x30);
  uStack_87 = (undefined7)CONCAT71(local_16f,uStack_170);
  uStack_80 = (undefined1)((uint7)local_16f >> 0x30);
  uStack_6f = (undefined7)CONCAT71(uStack_157,uStack_158);
  uStack_68 = (undefined1)((uint7)uStack_157 >> 0x30);
  uStack_77 = (undefined7)CONCAT71(local_15f,uStack_160);
  uStack_70 = (undefined1)((uint7)local_15f >> 0x30);
  local_67 = (undefined7)CONCAT71(local_14f,uStack_150);
  uStack_60 = (undefined1)((uint7)local_14f >> 0x30);
  uStack_58 = uStack_141;
  uStack_57 = (undefined7)(CONCAT62(uStack_13f,CONCAT11(uStack_140,uStack_141)) >> 8);
  uStack_9f = (undefined7)CONCAT71(uStack_187,uStack_188);
  local_98 = (undefined1)((uint7)uStack_187 >> 0x30);
  cStack_a7 = local_190;
  uStack_a6 = (undefined6)(CONCAT53(uStack_18d,CONCAT21(uStack_18f,local_190)) >> 8);
  uStack_a0 = (undefined1)((uint5)uStack_18d >> 0x20);
  uStack_8f = (undefined7)CONCAT71(uStack_177,uStack_178);
  uStack_88 = (undefined1)((uint7)uStack_177 >> 0x30);
  uStack_97 = (undefined7)CONCAT71(uStack_17f,uStack_180);
  uStack_90 = (undefined1)((uint7)uStack_17f >> 0x30);
  <http::uri::builder::http::uri::builder::Builder>::build(&local_190,&local_a8);
  if (local_190 != -1) {
    param_1[9] = CONCAT17(uStack_141,CONCAT61(uStack_147,uStack_148));
    param_1[8] = CONCAT71(local_14f,uStack_150);
    param_1[5] = CONCAT71(uStack_167,uStack_168);
    param_1[4] = CONCAT71(local_16f,uStack_170);
    param_1[7] = CONCAT71(uStack_157,uStack_158);
    param_1[6] = CONCAT71(local_15f,uStack_160);
    param_1[10] = CONCAT17(uStack_139,CONCAT61(uStack_13f,uStack_140));
    param_1[1] = CONCAT71(uStack_187,uStack_188);
    *param_1 = CONCAT53(uStack_18d,CONCAT21(uStack_18f,local_190));
    param_1[3] = CONCAT71(uStack_177,uStack_178);
    param_1[2] = CONCAT71(uStack_17f,uStack_180);
    return;
  }
  local_a8 = (char)uStack_18f;
  cStack_a7 = (char)((ushort)uStack_18f >> 8);
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002e5e56,0x21,&local_a8,&DAT_00adfc50,
             &PTR_s__root__cargo_registry_src_index__00adfdf0);
}


// ===== 007dea48  FUN_007dea48 =====

void FUN_007dea48(void)

{
  return;
}


// ===== 007dea4c  FUN_007dea4c =====

void FUN_007dea4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00adfdb0;
  param_1[1] = param_3;
  return;
}


// ===== 007dea60  FUN_007dea60 =====

undefined8 FUN_007dea60(void)

{
  return 0;
}


// ===== 007dea68  <reqwest::connect::Connector_as_tower_service::Service<http::uri::Uri>>::poll_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::Connector as tower_service::Service<http::uri::Uri>>::poll_ready */

void __rustcall
<reqwest::connect::Connector_as_tower_service::Service<http::uri::Uri>>::poll_ready
          (undefined8 *param_1,long param_2)

{
  if (*(int *)(param_2 + 8) == -2) {
                    /* WARNING: Could not recover jumptable at 0x007dea7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x18) + 0x18))(*(undefined8 *)(param_2 + 0x10));
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007dea88  <reqwest::connect::Connector_as_tower_service::Service<http::uri::Uri>>::call =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::Connector as tower_service::Service<http::uri::Uri>>::call */

void __rustcall
<reqwest::connect::Connector_as_tower_service::Service<http::uri::Uri>>::call
          (long param_1,undefined8 *param_2)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (*(int *)(param_1 + 8) == -2) {
    uStack_48 = param_2[5];
    local_50 = param_2[4];
    uStack_38 = param_2[7];
    uStack_40 = param_2[6];
    local_20 = param_2[10];
    uStack_28 = param_2[9];
    local_30 = param_2[8];
    uStack_68 = param_2[1];
    local_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    (**(code **)(*(long *)(param_1 + 0x18) + 0x20))(*(undefined8 *)(param_1 + 0x10),&local_70);
    return;
  }
  <reqwest::connect::ConnectorService_as_tower_service::Service<http::uri::Uri>>::call();
  return;
}


// ===== 007deae0  FUN_007deae0 =====

void FUN_007deae0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 == 0) {
    lVar2 = param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar1 = (long *)FUN_004b25a4(8,8);
    if (plVar1 != (long *)0x0) {
      *plVar1 = lVar2;
      param_1[1] = plVar1;
      param_1[2] = &PTR_FUN_00adfbf8;
      *param_1 = 1;
      return;
    }
                    /* try { // try from 007deb90 to 007deb9b has its CatchHandler @ 007deba0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar1 = (long *)FUN_004b25a4(0x20,8);
  if (plVar1 != (long *)0x0) {
    lVar2 = *param_2;
    lVar4 = param_2[3];
    lVar3 = param_2[2];
    plVar1[1] = param_2[1];
    *plVar1 = lVar2;
    plVar1[3] = lVar4;
    plVar1[2] = lVar3;
    param_1[1] = plVar1;
    param_1[2] = &PTR_FUN_00adfba0;
    *param_1 = 0;
    return;
  }
                    /* try { // try from 007deb80 to 007deb8b has its CatchHandler @ 007debb4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x20);
}


// ===== 007debd8  FUN_007debd8 =====

void FUN_007debd8(long param_1,long *param_2)

{
  if (*param_2 == 2) {
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected(param_2 + 1);
    return;
  }
  if (((param_2[0x5f] != -1) && (param_2[0x61] == 2)) && (*(short *)param_2[0x60] == 0x3268)) {
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected();
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::connected
            ();
  return;
}


// ===== 007dec40  FUN_007dec40 =====

void FUN_007dec40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_007775c8(param_2,param_3,&PTR_s__root__cargo_registry_src_index__00adfe08);
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast()
  ;
  if (iVar1 != 0) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(uVar2);
    return;
  }
  return;
}


// ===== 007dec8c  <reqwest::dns::gai::GaiResolver_as_reqwest::dns::resolve::Resolve>::resolve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::dns::gai::GaiResolver as reqwest::dns::resolve::Resolve>::resolve */

void __rustcall <reqwest::dns::gai::GaiResolver_as_reqwest::dns::resolve::Resolve>::resolve(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 uStack_1;
  
  uVar1 = <hyper_util::client::legacy::connect::dns::GaiResolver_as_tower_service::Service<hyper_util::client::legacy::connect::dns::Name>>
          ::call(&uStack_1);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = uVar1;
    return;
  }
                    /* try { // try from 007decdc to 007dece7 has its CatchHandler @ 007decec */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 007ded04  FUN_007ded04 =====

void FUN_007ded04(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a19f8,8,&local_18,&DAT_00adfe40);
  return;
}


// ===== 007ded44  <reqwest::connect::ConnectorService_as_tower_service::Service<http::uri::Uri>>::call =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::ConnectorService as tower_service::Service<http::uri::Uri>>::call */

undefined1  [16] __rustcall
<reqwest::connect::ConnectorService_as_tower_service::Service<http::uri::Uri>>::call
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *__dest;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_5050 [20480];
  undefined1 uStack_31;
  
  puVar2 = &stack0xffffffffffffffb0;
  do {
    puVar3 = puVar2;
    *(undefined8 *)(puVar3 + -0x1000) = 0;
    puVar2 = puVar3 + -0x1000;
  } while (puVar3 + -0x1000 != auStack_5050);
  *(undefined8 *)(puVar3 + -0x1d10) = 0;
  if (3 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    *(undefined8 **)(puVar3 + 0x3d40) = param_2;
    *(undefined **)(puVar3 + 0x3d48) = PTR_fmt_00b00e38;
    *(undefined **)(puVar3 + -0x1c38) = &DAT_002a1040;
    *(undefined8 *)(puVar3 + -0x1c30) = 0x10;
    *(undefined **)(puVar3 + -0x1c20) = &DAT_002a7976;
    *(undefined1 **)(puVar3 + -0x1c18) = puVar3 + 0x3d40;
    *(undefined8 *)(puVar3 + -0x1c58) = _UNK_002a0818;
    *(undefined8 *)(puVar3 + -0x1c60) = _DAT_002a0810;
    *(undefined8 *)(puVar3 + -0x1c70) = 0;
    *(undefined **)(puVar3 + -0x1c68) = &DAT_002a1040;
    *(undefined8 *)(puVar3 + -0x1c40) = _UNK_0029fac8;
    *(undefined8 *)(puVar3 + -0x1c48) = _DAT_0029fac0;
    *(char **)(puVar3 + -0x1c50) =
         "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs"
    ;
    *(undefined8 *)(puVar3 + -0x1c28) = DAT_002a1860;
                    /* try { // try from 007dedfc to 007dee07 has its CatchHandler @ 007df04c */
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,puVar3 + -0x1c70);
  }
  uVar8 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  lVar6 = *(long *)(param_1[0xc] + 0x20);
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_1[0xc] + 0x18);
    lVar6 = lVar6 * 0x88;
    do {
                    /* try { // try from 007dee28 to 007dee37 has its CatchHandler @ 007df050 */
      FUN_0079505c(puVar3 + -0x1d10,lVar7,param_2);
      if (*(long *)(puVar3 + -0x1d10) != 2) {
        *(undefined8 *)(puVar3 + -0x1c78) = *(undefined8 *)(puVar3 + -0x1cc8);
        *(undefined8 *)(puVar3 + -0x1c80) = *(undefined8 *)(puVar3 + -0x1cd0);
        *(undefined8 *)(puVar3 + -0x1c98) = *(undefined8 *)(puVar3 + -0x1ce8);
        *(undefined8 *)(puVar3 + -0x1ca0) = *(undefined8 *)(puVar3 + -0x1cf0);
        *(undefined8 *)(puVar3 + -0x1c88) = *(undefined8 *)(puVar3 + -0x1cd8);
        *(undefined8 *)(puVar3 + -0x1c90) = *(undefined8 *)(puVar3 + -0x1ce0);
        *(undefined8 *)(puVar3 + -0x1cb8) = *(undefined8 *)(puVar3 + -0x1d08);
        *(undefined8 *)(puVar3 + -0x1cc0) = *(undefined8 *)(puVar3 + -0x1d10);
        *(undefined8 *)(puVar3 + -0x1ca8) = *(undefined8 *)(puVar3 + -0x1cf8);
        *(undefined8 *)(puVar3 + -0x1cb0) = *(undefined8 *)(puVar3 + -0x1d00);
                    /* try { // try from 007def20 to 007def2f has its CatchHandler @ 007df03c */
        FUN_007e01b4(puVar3 + -0x1c70,param_1);
        uVar9 = param_2[4];
        uVar11 = param_2[7];
        uVar10 = param_2[6];
        uVar14 = param_2[9];
        uVar13 = param_2[8];
        uVar5 = param_2[10];
        *(undefined8 *)(puVar3 + 0x3e28) = param_2[5];
        *(undefined8 *)(puVar3 + 0x3e20) = uVar9;
        *(undefined8 *)(puVar3 + 0x3e38) = uVar11;
        *(undefined8 *)(puVar3 + 0x3e30) = uVar10;
        uVar10 = param_2[1];
        uVar9 = *param_2;
        uVar12 = param_2[3];
        uVar11 = param_2[2];
        *(undefined8 *)(puVar3 + 0x3e48) = uVar14;
        *(undefined8 *)(puVar3 + 0x3e40) = uVar13;
        *(undefined8 *)(puVar3 + 0x3e50) = uVar5;
        *(undefined8 *)(puVar3 + 0x3e08) = uVar10;
        *(undefined8 *)(puVar3 + 0x3e00) = uVar9;
        *(undefined8 *)(puVar3 + 0x3e18) = uVar12;
        *(undefined8 *)(puVar3 + 0x3e10) = uVar11;
        *(undefined8 *)(puVar3 + 0x3d78) = *(undefined8 *)(puVar3 + -0x1cd8);
        *(undefined8 *)(puVar3 + 0x3d70) = *(undefined8 *)(puVar3 + -0x1ce0);
        *(undefined8 *)(puVar3 + 0x3d68) = *(undefined8 *)(puVar3 + -0x1ce8);
        *(undefined8 *)(puVar3 + 0x3d60) = *(undefined8 *)(puVar3 + -0x1cf0);
        *(undefined8 *)(puVar3 + 0x3d48) = *(undefined8 *)(puVar3 + -0x1d08);
        *(undefined8 *)(puVar3 + 0x3d40) = *(undefined8 *)(puVar3 + -0x1d10);
        *(undefined8 *)(puVar3 + 0x3d58) = *(undefined8 *)(puVar3 + -0x1cf8);
        *(undefined8 *)(puVar3 + 0x3d50) = *(undefined8 *)(puVar3 + -0x1d00);
        *(undefined8 *)(puVar3 + 0x3dd8) = *(undefined8 *)(puVar3 + -0x1c28);
        *(undefined8 *)(puVar3 + 0x3dd0) = *(undefined8 *)(puVar3 + -0x1c30);
        *(undefined8 *)(puVar3 + 0x3dc8) = *(undefined8 *)(puVar3 + -0x1c38);
        *(undefined8 *)(puVar3 + 0x3dc0) = *(undefined8 *)(puVar3 + -0x1c40);
        *(undefined8 *)(puVar3 + 0x3de8) = *(undefined8 *)(puVar3 + -0x1c18);
        *(undefined8 *)(puVar3 + 0x3de0) = *(undefined8 *)(puVar3 + -0x1c20);
        *(undefined8 *)(puVar3 + 0x3df8) = *(undefined8 *)(puVar3 + -0x1c08);
        *(undefined8 *)(puVar3 + 0x3df0) = *(undefined8 *)(puVar3 + -0x1c10);
        *(undefined8 *)(puVar3 + 0x3d88) = *(undefined8 *)(puVar3 + -0x1cc8);
        *(undefined8 *)(puVar3 + 0x3d80) = *(undefined8 *)(puVar3 + -0x1cd0);
        *(undefined8 *)(puVar3 + 0x3d98) = *(undefined8 *)(puVar3 + -0x1c68);
        *(undefined8 *)(puVar3 + 0x3d90) = *(undefined8 *)(puVar3 + -0x1c70);
        *(undefined8 *)(puVar3 + 0x3da8) = *(undefined8 *)(puVar3 + -0x1c58);
        *(undefined8 *)(puVar3 + 0x3da0) = *(undefined8 *)(puVar3 + -0x1c60);
        *(undefined8 *)(puVar3 + 0x3db8) = *(undefined8 *)(puVar3 + -0x1c48);
        *(undefined8 *)(puVar3 + 0x3db0) = *(undefined8 *)(puVar3 + -0x1c50);
        memcpy(puVar3 + -0x1c60,puVar3 + 0x3d40,0x2b2);
        puVar3[-0x19ae] = 0;
        *(undefined8 *)(puVar3 + -0x1c70) = uVar8;
        *(undefined4 *)(puVar3 + -0x1c68) = uVar1;
        puVar3[0x1030] = 0;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __dest = (void *)FUN_004b25a4(0x59b0,8);
        if (__dest == (void *)0x0) {
                    /* try { // try from 007df02c to 007df037 has its CatchHandler @ 007df064 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x59b0);
        }
        memcpy(__dest,puVar3 + -0x1c70,0x59b0);
        ppuVar4 = &PTR_FUN_00adfe60;
        goto LAB_007deff8;
      }
      lVar6 = lVar6 + -0x88;
      lVar7 = lVar7 + 0x88;
    } while (lVar6 != 0);
  }
                    /* try { // try from 007dee50 to 007dee5f has its CatchHandler @ 007df04c */
  FUN_007e01b4(puVar3 + -0x1c70,param_1);
  uVar9 = param_2[6];
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  uVar5 = param_2[10];
  *(undefined8 *)(puVar3 + 0x3de8) = param_2[7];
  *(undefined8 *)(puVar3 + 0x3de0) = uVar9;
  *(undefined8 *)(puVar3 + 0x3df8) = uVar11;
  *(undefined8 *)(puVar3 + 0x3df0) = uVar10;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  *(undefined8 *)(puVar3 + 0x3e00) = uVar5;
  *(undefined8 *)(puVar3 + 0x3dd8) = uVar10;
  *(undefined8 *)(puVar3 + 0x3dd0) = uVar9;
  *(undefined8 *)(puVar3 + 0x3dc8) = uVar12;
  *(undefined8 *)(puVar3 + 0x3dc0) = uVar11;
  uVar9 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(puVar3 + 0x3d98) = *(undefined8 *)(puVar3 + -0x1c18);
  *(undefined8 *)(puVar3 + 0x3d90) = *(undefined8 *)(puVar3 + -0x1c20);
  *(undefined8 *)(puVar3 + 0x3d88) = *(undefined8 *)(puVar3 + -0x1c28);
  *(undefined8 *)(puVar3 + 0x3d80) = *(undefined8 *)(puVar3 + -0x1c30);
  *(undefined8 *)(puVar3 + 0x3da8) = *(undefined8 *)(puVar3 + -0x1c08);
  *(undefined8 *)(puVar3 + 0x3da0) = *(undefined8 *)(puVar3 + -0x1c10);
  *(undefined8 *)(puVar3 + 0x3db8) = uVar9;
  *(undefined8 *)(puVar3 + 0x3db0) = uVar5;
  *(undefined8 *)(puVar3 + 0x3d58) = *(undefined8 *)(puVar3 + -0x1c58);
  *(undefined8 *)(puVar3 + 0x3d50) = *(undefined8 *)(puVar3 + -0x1c60);
  *(undefined8 *)(puVar3 + 0x3d48) = *(undefined8 *)(puVar3 + -0x1c68);
  *(undefined8 *)(puVar3 + 0x3d40) = *(undefined8 *)(puVar3 + -0x1c70);
  *(undefined8 *)(puVar3 + 0x3d78) = *(undefined8 *)(puVar3 + -0x1c38);
  *(undefined8 *)(puVar3 + 0x3d70) = *(undefined8 *)(puVar3 + -0x1c40);
  *(undefined8 *)(puVar3 + 0x3d68) = *(undefined8 *)(puVar3 + -0x1c48);
  *(undefined8 *)(puVar3 + 0x3d60) = *(undefined8 *)(puVar3 + -0x1c50);
  memcpy(puVar3 + -0x1c60,puVar3 + 0x3d40,0x210);
  *(undefined2 *)(puVar3 + -0x1a50) = 0;
  *(undefined8 *)(puVar3 + -0x1c70) = uVar8;
  *(undefined4 *)(puVar3 + -0x1c68) = uVar1;
  puVar3[-0x1a48] = 0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(0x4c0,8);
  if (__dest == (void *)0x0) {
                    /* try { // try from 007df01c to 007df027 has its CatchHandler @ 007df078 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x4c0);
  }
  memcpy(__dest,puVar3 + -0x1c70,0x4c0);
  ppuVar4 = &PTR_FUN_00adfe80;
LAB_007deff8:
  auVar15._8_8_ = ppuVar4;
  auVar15._0_8_ = __dest;
  return auVar15;
}


// ===== 007df090  FUN_007df090 =====

void FUN_007df090(undefined8 param_1,undefined8 param_2,long *param_3)

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
              (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00adfeb8);
  }
  local_30 = 0;
  uStack_28 = 0;
  local_40 = *param_3 + uVar2;
  auVar3 = FUN_00773180(param_1,param_2,&local_40);
  if (((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar3._8_8_ == 0)) {
    if (local_38 < local_30) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_30,local_38,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    uVar1 = local_30 + uVar2;
    if (CARRY8(local_30,uVar2)) {
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


// ===== 007df148  FUN_007df148 =====

void FUN_007df148(undefined8 param_1,undefined8 param_2,long *param_3)

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
              (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00adfeb8);
  }
  local_30 = 0;
  uStack_28 = 0;
  local_40 = *param_3 + uVar2;
  auVar3 = FUN_00773354(param_1,param_2,&local_40);
  if (((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar3._8_8_ == 0)) {
    if (local_38 < local_30) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_30,local_38,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    uVar1 = local_30 + uVar2;
    if (CARRY8(local_30,uVar2)) {
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


// ===== 007df200  FUN_007df200 =====

void FUN_007df200(undefined8 param_1,undefined8 param_2,long *param_3)

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
              (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00adfeb8);
  }
  local_30 = 0;
  uStack_28 = 0;
  local_40 = *param_3 + uVar2;
  auVar3 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_read::AsyncRead>::poll_read
                     (param_1,param_2,&local_40);
  if (((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar3._8_8_ == 0)) {
    if (local_38 < local_30) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_30,local_38,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    uVar1 = local_30 + uVar2;
    if (CARRY8(local_30,uVar2)) {
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


// ===== 007df2b8  FUN_007df2b8 =====

void FUN_007df2b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a19f8,8,&local_18,&DAT_00adfe40);
  return;
}


// ===== 007df2fc  FUN_007df2fc =====

void FUN_007df2fc(undefined8 *param_1)

{
  <untrusted::input::Input_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007df304  FUN_007df304 =====

void FUN_007df304(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
            (param_2,&DAT_002a0cb0,0x10,&DAT_002e5f98,0xd,local_18 + 0x10,&PTR_FUN_00adfee8,
             &DAT_002e5fa5,0xf,local_18 + 0x28,&DAT_00ae01c0,&DAT_002e5fb4,0xb,local_18 + 0x30,
             &DAT_00ae01e0,&DAT_002e5fbf,0xf,&local_18,&DAT_00ae0200);
  return;
}


// ===== 007df3b0  FUN_007df3b0 =====

void FUN_007df3b0(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,(&PTR_DAT_00ae0240)[*(byte *)*param_1],
             *(undefined8 *)(&DAT_002e60a0 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 007df3dc  FUN_007df3dc =====

void FUN_007df3dc(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002e5f11,5,&local_18,&DAT_00ae00c0);
    return;
  }
  local_18 = local_18 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a13c8,8,&local_18,&DAT_00ae00e0);
  return;
}


// ===== 007df458  FUN_007df458 =====

void FUN_007df458(long *param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  lVar1 = *param_1;
  local_18 = lVar1 + 0x90;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
            (param_2,&DAT_002e5f24,0x17,&DAT_002e5f3b,0xd,lVar1 + 0x78,
             &PTR_thunk_FUN_007b3770_00ae0100,&DAT_002e5f48,6,lVar1,&PTR_FUN_00adfee8,&DAT_002e5f4e,
             0x1a,lVar1 + 0x60,&PTR_FUN_00ae0120,&DAT_002e5f68,0xb,lVar1 + 0x18,&PTR_FUN_00ae0140,
             &DAT_002e5f73,0xb,&local_18,&DAT_00ae0160);
  return;
}


// ===== 007df524  FUN_007df524 =====

void FUN_007df524(long *param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  lVar1 = *param_1;
  local_18 = lVar1 + 0x60;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
            (param_2,&DAT_002e5f7e,0x1a,&DAT_002e5f68,0xb,lVar1,&DAT_00ae0180,&DAT_002e5f48,6,
             lVar1 + 0x30,&DAT_00adff28,&DAT_002e5f4e,0x1a,lVar1 + 0x50,&DAT_00ae01a0,&DAT_002e5f3b,
             0xd,lVar1 + 0x40,&DAT_00adff28,&DAT_002e5f73,0xb,&local_18,&DAT_00ae0160);
  return;
}


// ===== 007df5ec  FUN_007df5ec =====

void FUN_007df5ec(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x30;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_002e5e79,0xf,&DAT_002bd1f4,4,param_1,&PTR_FUN_00adfee8,&DAT_002e5e88,9,
             param_1 + 0x18,&PTR_FUN_00adfee8,&DAT_002e5e91,9,&local_18,&DAT_00adff08);
  return;
}


// ===== 007df670  FUN_007df670 =====

void FUN_007df670(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x20;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_002e5e9a,10,&DAT_002bd1f4,4,param_1,&DAT_00adff28,&DAT_002e5e88,9,
             param_1 + 0x10,&DAT_00adff28,&DAT_002e5e91,9,&local_18,&DAT_00adff48);
  return;
}


// ===== 007df6f4  FUN_007df6f4 =====

void FUN_007df6f4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_50;
  ulong local_48;
  ulong local_40;
  undefined8 uStack_38;
  
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  uVar1 = uVar2 - uVar4;
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar4,uVar2,&PTR_s__root__cargo_registry_src_index__00adfea0);
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = *param_3 + uVar4;
  local_48 = uVar1;
  auVar5 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_read::AsyncRead>::poll_read
                     (param_1,param_2,&local_50);
  lVar3 = auVar5._8_8_;
  uVar2 = 0;
  if (((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (lVar3 == 0)) {
    if (local_48 < local_40) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_40,local_48,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    lVar3 = 0;
    uVar2 = local_40;
  }
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0 && lVar3 == 0) {
    if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar2,uVar1,&PTR_s__root__cargo_registry_src_index__00adff68);
    }
    uVar2 = uVar2 + uVar4;
    if ((ulong)param_3[3] < uVar2) {
      param_3[3] = uVar2;
    }
    param_3[2] = uVar2;
  }
  return;
}


// ===== 007df7d8  FUN_007df7d8 =====

void FUN_007df7d8(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_50;
  ulong local_48;
  ulong local_40;
  undefined8 uStack_38;
  
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  uVar1 = uVar2 - uVar4;
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar4,uVar2,&PTR_s__root__cargo_registry_src_index__00adfea0);
  }
  local_50 = *param_3 + uVar4;
  local_48 = uVar1;
  if (*param_1 == 2) {
    local_40 = 0;
    uStack_38 = 0;
    auVar5 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_read::AsyncRead>::poll_read
                       (param_1 + 1,param_2,&local_50);
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    auVar5 = FUN_00773180(param_1,param_2,&local_50);
  }
  lVar3 = auVar5._8_8_;
  if (((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (lVar3 == 0)) {
    if (local_48 < local_40) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_40,local_48,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    lVar3 = 0;
    uVar2 = local_40;
    if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return;
    }
  }
  else {
    uVar2 = 0;
    if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return;
    }
  }
  if (lVar3 != 0) {
    return;
  }
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,uVar1,&PTR_s__root__cargo_registry_src_index__00adff68);
  }
  uVar2 = uVar2 + uVar4;
  if ((ulong)param_3[3] < uVar2) {
    param_3[3] = uVar2;
  }
  param_3[2] = uVar2;
  return;
}


// ===== 007df904  FUN_007df904 =====

void FUN_007df904(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_50;
  ulong local_48;
  ulong local_40;
  undefined8 uStack_38;
  
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  uVar1 = uVar2 - uVar4;
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar4,uVar2,&PTR_s__root__cargo_registry_src_index__00adfea0);
  }
  param_1 = (long *)*param_1;
  local_50 = *param_3 + uVar4;
  local_48 = uVar1;
  if (*param_1 == 2) {
    local_40 = 0;
    uStack_38 = 0;
    auVar5 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_read::AsyncRead>::poll_read
                       (param_1 + 1,param_2,&local_50);
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    auVar5 = FUN_00773180(param_1,param_2,&local_50);
  }
  lVar3 = auVar5._8_8_;
  if (((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (lVar3 == 0)) {
    if (local_48 < local_40) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_40,local_48,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    lVar3 = 0;
    uVar2 = local_40;
    if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return;
    }
  }
  else {
    uVar2 = 0;
    if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return;
    }
  }
  if (lVar3 != 0) {
    return;
  }
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,uVar1,&PTR_s__root__cargo_registry_src_index__00adff68);
  }
  uVar2 = uVar2 + uVar4;
  if ((ulong)param_3[3] < uVar2) {
    param_3[3] = uVar2;
  }
  param_3[2] = uVar2;
  return;
}


// ===== 007dfa34  FUN_007dfa34 =====

void FUN_007dfa34(long param_1,undefined8 param_2)

{
  long local_78;
  undefined **ppuStack_70;
  long local_68;
  undefined **ppuStack_60;
  long local_58;
  undefined *puStack_50;
  long local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  long *local_28;
  undefined *puStack_20;
  long local_18;
  
  local_18 = param_1 + 0x20;
  local_78 = param_1 + 0x18;
  ppuStack_70 = &PTR_FUN_00adff80;
  ppuStack_60 = &PTR_FUN_00adffa0;
  local_58 = param_1 + 0x40;
  local_28 = &local_18;
  puStack_50 = &DAT_00adffc0;
  local_48 = param_1 + 0x41;
  puStack_40 = &DAT_00adffe0;
  local_38 = param_1 + 0x42;
  puStack_30 = &DAT_00ae0000;
  puStack_20 = &DAT_00ae0020;
  local_68 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish
            (param_2,&DAT_002e5efd,0x14,&PTR_DAT_00ae0040,6,&local_78,6);
  return;
}


// ===== 007dfadc  FUN_007dfadc =====

ulong FUN_007dfadc(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_28;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (local_4 != -1) {
                    /* try { // try from 007dfb08 to 007dfb4b has its CatchHandler @ 007dfb64 */
    uVar2 = <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>
            ::handle();
    uVar3 = FUN_007c8a30(uVar2,param_1 + 0x10,&local_4);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    uVar1 = close(local_4);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}


// ===== 007dfb7c  FUN_007dfb7c =====

undefined8 FUN_007dfb7c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long *local_40;
  undefined **ppuStack_38;
  
  if (*param_1 != 2) {
    local_40 = param_1 + 4;
    ppuStack_38 = &PTR_FUN_00add8d8;
    lVar1 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_40);
    if (lVar1 == 0) {
      while( true ) {
        if (param_1[0x1a] == 0) {
          return 0;
        }
        auVar2 = FUN_007aa798(param_1,param_1 + 4,param_2);
        if (auVar2._0_8_ != 0) break;
        if (auVar2._8_8_ == 0) {
          return 0;
        }
      }
      if (auVar2._0_8_ == 2) {
        return 1;
      }
    }
  }
  return 0;
}


// ===== 007dfc60  FUN_007dfc60 =====

long FUN_007dfc60(long *param_1,undefined8 param_2,long param_3,ulong param_4)

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
          goto LAB_007dfd3c;
        }
        if (auVar3._8_8_ == 0) {
LAB_007dfd3c:
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


// ===== 007dfd98  FUN_007dfd98 =====

long FUN_007dfd98(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long *local_60;
  undefined **ppuStack_58;
  
  plVar3 = (long *)*param_1;
  if (*plVar3 == 2) {
    lVar1 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_write
                      (plVar3 + 1,param_2);
    return lVar1;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      ppuStack_58 = &PTR_FUN_00add8d8;
      local_60 = plVar3 + 4;
      if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,param_4,param_4,&PTR_s__root__cargo_registry_src_index__00add908);
      }
      auVar4 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write
                         (&local_60,param_3 + uVar2,param_4 - uVar2);
      if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return 1;
      }
      uVar2 = uVar2 + auVar4._8_8_;
      while (plVar3[0x1a] != 0) {
        auVar4 = FUN_007aa798(plVar3,plVar3 + 4,param_2);
        lVar1 = auVar4._0_8_;
        if (lVar1 != 0) {
          if (lVar1 != 2) {
            return lVar1;
          }
          goto LAB_007dfe74;
        }
        if (auVar4._8_8_ == 0) {
LAB_007dfe74:
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


// ===== 007dfed0  <hyper_rustls::stream::MaybeHttpsStream<hyper_util::rt::tokio::TokioIo<tokio::net::tcp::stream::TcpStream>>as_reqwest::connect::TlsInfoFactory>::tls_info =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_rustls::stream::MaybeHttpsStream<hyper_util::rt::tokio::TokioIo<tokio::net::tcp::stream::TcpStream>>
   as reqwest::connect::TlsInfoFactory>::tls_info */

void __rustcall
<hyper_rustls::stream::MaybeHttpsStream<hyper_util::rt::tokio::TokioIo<tokio::net::tcp::stream::TcpStream>>as_reqwest::connect::TlsInfoFactory>
::tls_info(size_t *param_1,long *param_2)

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
LAB_007dff34:
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
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007dff34;
      memcpy(unaff_x20,__src,__n);
    }
  }
  *param_1 = __n;
  param_1[1] = (size_t)unaff_x20;
  param_1[2] = __n;
  return;
}


// ===== 007dffa0  FUN_007dffa0 =====

void FUN_007dffa0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  undefined8 *local_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_68,param_2);
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
      uVar6 = uVar6 - 1 & uVar6;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      lVar3 = lVar3 + -1;
      local_58 = puVar4 + (long)-iVar2 * 6 + -6;
      local_38 = puVar4 + (long)-iVar2 * 6 + -3;
      <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
                (auStack_68,&local_58,&DAT_00ad8780,&local_38,&DAT_00ad88c0);
    } while (lVar3 != 0);
  }
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_68);
  return;
}


// ===== 007e0090  FUN_007e0090 =====

void FUN_007e0090(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"TimedOutDTLSv1_3",8);
  return;
}


// ===== 007e00a4  FUN_007e00a4 =====

void FUN_007e00a4(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adff08);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007e0100  FUN_007e0100 =====

void FUN_007e0100(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adff48);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007e0158  FUN_007e0158 =====

void FUN_007e0158(char *param_1,undefined8 param_2)

{
  char *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ae00a0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007e01b4  FUN_007e01b4 =====

void FUN_007e01b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 unaff_x23;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar5 = (long *)param_2[7];
  do {
    lVar7 = *plVar5;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) {
LAB_007e0320:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x7e0324);
    (*pcVar3)();
  }
  uVar15 = param_2[9];
  plVar14 = (long *)param_2[8];
  do {
    lVar7 = *plVar14;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) goto LAB_007e0320;
  plVar8 = (long *)param_2[10];
  do {
    lVar7 = *plVar8;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) goto LAB_007e0320;
  plVar9 = (long *)param_2[0xb];
  do {
    lVar7 = *plVar9;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) goto LAB_007e0320;
  plVar6 = (long *)param_2[0xc];
  do {
    lVar7 = *plVar6;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 < 0) goto LAB_007e0320;
  iVar1 = *(int *)(param_2 + 1);
  uVar10 = param_2[0xc];
  if (iVar1 == -1) {
    cVar4 = *(char *)(param_2 + 6);
    uVar13 = *(undefined1 *)(param_2 + 0xd);
    uVar12 = *(undefined1 *)((long)param_2 + 0x69);
    uVar11 = *(undefined1 *)((long)param_2 + 0x6a);
    if (cVar4 == '\x02') goto LAB_007e02d0;
  }
  else {
    unaff_x23 = *param_2;
    uVar13 = *(undefined1 *)(param_2 + 0xd);
    uVar12 = *(undefined1 *)((long)param_2 + 0x69);
    uVar11 = *(undefined1 *)((long)param_2 + 0x6a);
    if (*(char *)(param_2 + 6) == '\x02') {
      cVar4 = '\x02';
      goto LAB_007e02d0;
    }
  }
                    /* try { // try from 007e02b8 to 007e02c3 has its CatchHandler @ 007e0324 */
  (**(code **)param_2[2])(&local_70,param_2 + 5,param_2[3],param_2[4]);
  cVar4 = *(char *)(param_2 + 6);
  uStack_88 = uStack_68;
  local_90 = local_70;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
LAB_007e02d0:
  *(undefined1 *)(param_1 + 0xd) = uVar13;
  param_1[0xb] = plVar9;
  param_1[0xc] = uVar10;
  param_1[8] = plVar14;
  param_1[7] = plVar5;
  param_1[10] = plVar8;
  param_1[9] = uVar15;
  *param_1 = unaff_x23;
  *(int *)(param_1 + 1) = iVar1;
  *(undefined1 *)((long)param_1 + 0x69) = uVar12;
  *(undefined1 *)((long)param_1 + 0x6a) = uVar11;
  param_1[3] = uStack_88;
  param_1[2] = local_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  *(char *)(param_1 + 6) = cVar4;
  return;
}


// ===== 007e035c  FUN_007e035c =====

void FUN_007e035c(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 5;
  if (*param_1 == '\0') {
    uVar1 = 9;
  }
  puVar2 = &UNK_002e5f1f;
  if (*param_1 == '\0') {
    puVar2 = &UNK_002e5f16;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar2,uVar1);
  return;
}


// ===== 007e0390  FUN_007e0390 =====

void FUN_007e0390(void *param_1,size_t param_2)

{
  undefined1 *__dest;
  size_t *psVar1;
  undefined8 uVar2;
  
  if (-1 < (long)param_2) {
    if (param_2 == 0) {
      __dest = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_2,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007e03ac;
      memcpy(__dest,param_1,param_2);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    if (psVar1 != (size_t *)0x0) {
      *psVar1 = param_2;
      psVar1[1] = (size_t)__dest;
      psVar1[2] = param_2;
      return;
    }
                    /* try { // try from 007e0434 to 007e043f has its CatchHandler @ 007e0444 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  uVar2 = 0;
LAB_007e03ac:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_2);
}


// ===== 007e0464  FUN_007e0464 =====

void FUN_007e0464(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 4;
  if (*param_1 == '\0') {
    uVar1 = 5;
  }
  puVar2 = &UNK_002bd270;
  if (*param_1 == '\0') {
    puVar2 = &UNK_002e605c;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar2,uVar1);
  return;
}


// ===== 007e0494  FUN_007e0494 =====

void FUN_007e0494(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 007e04a8  FUN_007e04a8 =====

void FUN_007e04a8(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 6;
  if (*param_1 == '\0') {
    uVar1 = 7;
  }
  puVar2 = &UNK_002e6068;
  if (*param_1 == '\0') {
    puVar2 = &UNK_002e6061;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar2,uVar1);
  return;
}


// ===== 007e04d8  FUN_007e04d8 =====

void FUN_007e04d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002e606e,10,&local_18,&DAT_00ae0220);
  return;
}


// ===== 007e0518  FUN_007e0518 =====

undefined1  [16] FUN_007e0518(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &DAT_002e6078;
  return auVar1;
}


// ===== 007e0528  FUN_007e0528 =====

undefined8 FUN_007e0528(void)

{
  return 0;
}


// ===== 007e0530  FUN_007e0530 =====

void FUN_007e0530(void)

{
  return;
}


// ===== 007e0534  FUN_007e0534 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e0534(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0820;
  param_1[1] = _UNK_002a0828;
  *param_1 = uVar1;
  return;
}


// ===== 007e0548  FUN_007e0548 =====

undefined8 FUN_007e0548(void)

{
  return 0;
}


// ===== 007e0550  FUN_007e0550 =====

undefined8 FUN_007e0550(void)

{
  return 0;
}


// ===== 007e0558  FUN_007e0558 =====

undefined1  [16] FUN_007e0558(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &DAT_002e6078;
  return auVar1;
}


// ===== 007e0568  FUN_007e0568 =====

void FUN_007e0568(void)

{
  return;
}


// ===== 007e056c  FUN_007e056c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e056c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 007e0580  FUN_007e0580 =====

long FUN_007e0580(undefined8 param_1,long param_2)

{
  short local_40 [16];
  
  if (param_2 != 0) {
    do {
      <hyper_util::client::legacy::connect::dns::GaiAddrs_as_core::iter::traits::iterator::Iterator>
      ::next(local_40,param_1);
      if (local_40[0] == 2) {
        return param_2;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_2;
}


// ===== 007e05d0  FUN_007e05d0 =====

void FUN_007e05d0(undefined2 *param_1,undefined8 param_2,long param_3)

{
  short local_50 [16];
  
  if (param_3 != 0) {
    do {
      <hyper_util::client::legacy::connect::dns::GaiAddrs_as_core::iter::traits::iterator::Iterator>
      ::next(local_50,param_2);
      if (local_50[0] == 2) {
        *param_1 = 2;
        return;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  <hyper_util::client::legacy::connect::dns::GaiAddrs_as_core::iter::traits::iterator::Iterator>::
  next(param_1,param_2);
  return;
}


// ===== 007e0648  FUN_007e0648 =====

void FUN_007e0648(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007e0650  FUN_007e0650 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e0650(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 007e0664  <serde_urlencoded::de::PartIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_urlencoded::de::PartIterator as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<serde_urlencoded::de::PartIterator_as_core::iter::traits::iterator::Iterator>::next(long *param_1)

{
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  <form_urlencoded::Parse_as_core::iter::traits::iterator::Iterator>::next(&local_80);
  if (local_80 == -2) {
    *param_1 = -2;
    return;
  }
  param_1[1] = lStack_78;
  *param_1 = local_80;
  param_1[3] = local_68;
  param_1[2] = local_70;
  param_1[5] = local_58;
  param_1[4] = lStack_60;
  return;
}


// ===== 007e06d8  FUN_007e06d8 =====

void FUN_007e06d8(undefined8 *param_1)

{
  <core::str::error::Utf8Error_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 007e06e0  <serde_urlencoded::ser::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_urlencoded::ser::Error as core::fmt::Display>::fmt */

void __rustcall
<serde_urlencoded::ser::Error_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **local_20;
  code *pcStack_18;
  
  local_28 = param_1 + 1;
  if (*param_1 == -2) {
    local_20 = &local_28;
    pcStack_18 = FUN_007e06d8;
    core::fmt::write(*param_2,param_2[1],&DAT_002a7992,&local_20);
    return;
  }
  <str_as_core::fmt::Display>::fmt(param_1[1],param_1[2]);
  return;
}


// ===== 007e0740  <alloc::borrow::Cow<str>as_core::convert::From<serde_urlencoded::ser::key::Key>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::borrow::Cow<str> as core::convert::From<serde_urlencoded::ser::key::Key>>::from */

void __rustcall
<alloc::borrow::Cow<str>as_core::convert::From<serde_urlencoded::ser::key::Key>>::from
          (size_t *param_1,size_t *param_2)

{
  undefined1 *__src;
  undefined1 *__dest;
  size_t sVar1;
  size_t __n;
  undefined8 uVar2;
  
  sVar1 = *param_2;
  __src = (undefined1 *)param_2[1];
  __n = param_2[2];
  if (sVar1 == 0xffffffffffffffff) {
    if ((long)__n < 0) {
      uVar2 = 0;
LAB_007e07f8:
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
      if (__dest == (undefined1 *)0x0) goto LAB_007e07f8;
      memcpy(__dest,__src,__n);
      sVar1 = __n;
    }
  }
  else {
    __dest = __src;
    if (sVar1 == 0xfffffffffffffffe) {
      param_1[1] = (size_t)__src;
      param_1[2] = __n;
      *param_1 = 0xffffffffffffffff;
      return;
    }
  }
  *param_1 = sVar1;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 007e0804  FUN_007e0804 =====

void FUN_007e0804(ulong *param_1,ulong param_2,ulong param_3)

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
  FUN_007e0d5c(&local_38,*param_1,param_1[1],uVar1);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 007e087c  <base64::alphabet::base64::alphabet::Alphabet>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::alphabet::base64::alphabet::Alphabet>::new */

void __rustcall
<base64::alphabet::base64::alphabet::Alphabet>::new
          (undefined1 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 != 0x40) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  lVar2 = 0;
  while( true ) {
    bVar1 = *(byte *)((long)param_2 + lVar2);
    if (0x5e < bVar1 - 0x20) {
      param_1[2] = bVar1;
      param_1[1] = 2;
      *param_1 = 1;
      return;
    }
    if (bVar1 == 0x3d) break;
    lVar3 = 0;
    do {
      if ((lVar2 != lVar3) && (bVar1 == *(byte *)((long)param_2 + lVar3))) {
        param_1[2] = bVar1;
        param_1[1] = 1;
        *param_1 = 1;
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x40);
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x40) {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      *param_1 = 0;
      *(undefined8 *)(param_1 + 9) = uVar5;
      *(undefined8 *)(param_1 + 1) = uVar4;
      uVar5 = param_2[5];
      uVar4 = param_2[4];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      *(undefined8 *)(param_1 + 0x19) = uVar7;
      *(undefined8 *)(param_1 + 0x11) = uVar6;
      *(undefined8 *)(param_1 + 0x29) = uVar5;
      *(undefined8 *)(param_1 + 0x21) = uVar4;
      *(undefined8 *)(param_1 + 0x39) = uVar9;
      *(undefined8 *)(param_1 + 0x31) = uVar8;
      return;
    }
  }
  *(undefined2 *)(param_1 + 1) = 0x3d03;
  *param_1 = 1;
  return;
}


// ===== 007e0948  <base64::alphabet::base64::alphabet::Alphabet>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::alphabet::base64::alphabet::Alphabet>::as_str */

undefined1  [16] __rustcall
<base64::alphabet::base64::alphabet::Alphabet>::as_str(undefined8 param_1)

{
  undefined1 auVar1 [16];
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  core::str::converts::from_utf8(&local_38,param_1,0x40);
  if (local_38 != 1) {
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = local_30;
    return auVar1;
  }
  uStack_18 = uStack_28;
  local_20 = local_30;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002e60f8,0x2b,&local_20,&DAT_00ae0298,
             &PTR_s__root__cargo_registry_src_index__00ae02b8);
}


// ===== 007e09a8  <base64::engine::general_purpose::base64::engine::general_purpose::GeneralPurpose>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::engine::general_purpose::base64::engine::general_purpose::GeneralPurpose>::new */

void __rustcall
<base64::engine::general_purpose::base64::engine::general_purpose::GeneralPurpose>::new
          (undefined2 *param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  bVar1 = *param_2;
  bVar2 = param_2[1];
  *param_1 = (short)param_3;
  uStack_108 = 0xffffffffffffffff;
  local_110 = 0xffffffffffffffff;
  uStack_f8 = 0xffffffffffffffff;
  uStack_100 = 0xffffffffffffffff;
  uStack_e8 = 0xffffffffffffffff;
  local_f0 = 0xffffffffffffffff;
  uStack_d8 = 0xffffffffffffffff;
  uStack_e0 = 0xffffffffffffffff;
  uStack_c8 = 0xffffffffffffffff;
  local_d0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_c0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  local_b0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  uStack_88 = 0xffffffffffffffff;
  local_90 = 0xffffffffffffffff;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_68 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  uStack_58 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  uStack_48 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  uStack_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  uStack_28 = 0xffffffffffffffff;
  local_30 = 0xffffffffffffffff;
  uStack_18 = 0xffffffffffffffff;
  uStack_20 = 0xffffffffffffffff;
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0;
  bVar1 = param_2[2];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 1;
  bVar2 = param_2[3];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 2;
  bVar1 = param_2[4];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 3;
  bVar2 = param_2[5];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 4;
  bVar1 = param_2[6];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 5;
  bVar2 = param_2[7];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 6;
  bVar1 = param_2[8];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 7;
  bVar2 = param_2[9];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 8;
  bVar1 = param_2[10];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 9;
  bVar2 = param_2[0xb];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 10;
  bVar1 = param_2[0xc];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0xb;
  bVar2 = param_2[0xd];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0xc;
  bVar1 = param_2[0xe];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0xd;
  bVar2 = param_2[0xf];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0xe;
  bVar1 = param_2[0x10];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0xf;
  bVar2 = param_2[0x11];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x10;
  bVar1 = param_2[0x12];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x11;
  bVar2 = param_2[0x13];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x12;
  bVar1 = param_2[0x14];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x13;
  bVar2 = param_2[0x15];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x14;
  bVar1 = param_2[0x16];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x15;
  bVar2 = param_2[0x17];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x16;
  bVar1 = param_2[0x18];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x17;
  bVar2 = param_2[0x19];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x18;
  bVar1 = param_2[0x1a];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x19;
  bVar2 = param_2[0x1b];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x1a;
  bVar1 = param_2[0x1c];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x1b;
  bVar2 = param_2[0x1d];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x1c;
  bVar1 = param_2[0x1e];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x1d;
  bVar2 = param_2[0x1f];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x1e;
  bVar1 = param_2[0x20];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x1f;
  bVar2 = param_2[0x21];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x20;
  bVar1 = param_2[0x22];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x21;
  bVar2 = param_2[0x23];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x22;
  bVar1 = param_2[0x24];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x23;
  bVar2 = param_2[0x25];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x24;
  bVar1 = param_2[0x26];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x25;
  bVar2 = param_2[0x27];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x26;
  bVar1 = param_2[0x28];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x27;
  bVar2 = param_2[0x29];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x28;
  bVar1 = param_2[0x2a];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x29;
  bVar2 = param_2[0x2b];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x2a;
  bVar1 = param_2[0x2c];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x2b;
  bVar2 = param_2[0x2d];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x2c;
  bVar1 = param_2[0x2e];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x2d;
  bVar2 = param_2[0x2f];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x2e;
  bVar1 = param_2[0x30];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x2f;
  bVar2 = param_2[0x31];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x30;
  bVar1 = param_2[0x32];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x31;
  bVar2 = param_2[0x33];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x32;
  bVar1 = param_2[0x34];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x33;
  bVar2 = param_2[0x35];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x34;
  bVar1 = param_2[0x36];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x35;
  bVar2 = param_2[0x37];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x36;
  bVar1 = param_2[0x38];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x37;
  bVar2 = param_2[0x39];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x38;
  bVar1 = param_2[0x3a];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x39;
  bVar2 = param_2[0x3b];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x3a;
  bVar1 = param_2[0x3c];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x3b;
  bVar2 = param_2[0x3d];
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x3c;
  bVar1 = param_2[0x3e];
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x3d;
  bVar2 = param_2[0x3f];
  *(undefined8 *)((long)param_1 + 0x3b) = uVar4;
  *(undefined8 *)((long)param_1 + 0x33) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)param_2;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)((long)&local_110 + (ulong)bVar1) = 0x3e;
  *(undefined1 *)((long)&local_110 + (ulong)bVar2) = 0x3f;
  *(undefined8 *)((long)param_1 + 0x2b) = uVar6;
  *(undefined8 *)((long)param_1 + 0x23) = uVar5;
  *(undefined8 *)((long)param_1 + 0x1b) = uVar8;
  *(undefined8 *)((long)param_1 + 0x13) = uVar7;
  *(undefined8 *)((long)param_1 + 0xb) = uVar4;
  *(undefined8 *)((long)param_1 + 3) = uVar3;
  *(char *)(param_1 + 1) = (char)((uint)param_3 >> 0x10);
  *(undefined8 *)((long)param_1 + 0x7b) = uStack_d8;
  *(undefined8 *)((long)param_1 + 0x73) = uStack_e0;
  *(undefined8 *)((long)param_1 + 0x6b) = uStack_e8;
  *(undefined8 *)((long)param_1 + 99) = local_f0;
  *(undefined8 *)((long)param_1 + 0x5b) = uStack_f8;
  *(undefined8 *)((long)param_1 + 0x53) = uStack_100;
  *(undefined8 *)((long)param_1 + 0x4b) = uStack_108;
  *(undefined8 *)((long)param_1 + 0x43) = local_110;
  *(undefined8 *)((long)param_1 + 0xbb) = uStack_98;
  *(undefined8 *)((long)param_1 + 0xb3) = uStack_a0;
  *(undefined8 *)((long)param_1 + 0xab) = uStack_a8;
  *(undefined8 *)((long)param_1 + 0xa3) = local_b0;
  *(undefined8 *)((long)param_1 + 0x9b) = uStack_b8;
  *(undefined8 *)((long)param_1 + 0x93) = uStack_c0;
  *(undefined8 *)((long)param_1 + 0x8b) = uStack_c8;
  *(undefined8 *)((long)param_1 + 0x83) = local_d0;
  *(undefined8 *)((long)param_1 + 0xfb) = uStack_58;
  *(undefined8 *)((long)param_1 + 0xf3) = uStack_60;
  *(undefined8 *)((long)param_1 + 0xeb) = uStack_68;
  *(undefined8 *)((long)param_1 + 0xe3) = local_70;
  *(undefined8 *)((long)param_1 + 0xdb) = uStack_78;
  *(undefined8 *)((long)param_1 + 0xd3) = uStack_80;
  *(undefined8 *)((long)param_1 + 0xcb) = uStack_88;
  *(undefined8 *)((long)param_1 + 0xc3) = local_90;
  *(undefined8 *)((long)param_1 + 299) = uStack_28;
  *(undefined8 *)((long)param_1 + 0x123) = local_30;
  *(undefined8 *)((long)param_1 + 0x13b) = uStack_18;
  *(undefined8 *)((long)param_1 + 0x133) = uStack_20;
  *(undefined8 *)((long)param_1 + 0x10b) = uStack_48;
  *(undefined8 *)((long)param_1 + 0x103) = local_50;
  *(undefined8 *)((long)param_1 + 0x11b) = uStack_38;
  *(undefined8 *)((long)param_1 + 0x113) = uStack_40;
  return;
}


// ===== 007e0d5c  FUN_007e0d5c =====

void FUN_007e0d5c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

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


// ===== 007e0df8  <base64::decode::DecodeError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::decode::DecodeError as core::fmt::Display>::fmt */

void __rustcall
<base64::decode::DecodeError_as_core::fmt::Display>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 local_40;
  byte local_34 [4];
  byte *local_30;
  undefined *puStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_40;
  local_30 = (byte *)&local_40;
  bVar1 = *param_1;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      local_40 = *(undefined8 *)(param_1 + 8);
      puStack_28 = PTR_fmt_00b00c10;
      core::fmt::write(*param_2,param_2[1],&DAT_002b6179,&local_30);
      return;
    }
    local_40 = *(undefined8 *)(param_1 + 8);
    local_34[0] = param_1[1];
    puVar2 = &DAT_002b4414;
  }
  else {
    if (bVar1 != 2) {
                    /* WARNING: Could not recover jumptable at 0x007e0ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002e6123,0xf);
      return;
    }
    local_40 = *(undefined8 *)(param_1 + 8);
    local_34[0] = param_1[1];
    puVar2 = &DAT_002abc18;
  }
  local_30 = local_34;
  puStack_28 = PTR_fmt_00b00c18;
  puStack_18 = PTR_fmt_00b00c10;
  core::fmt::write(*param_2,param_2[1],puVar2,&local_30);
  return;
}


// ===== 007e0edc  <base64::encode::EncodeSliceError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::encode::EncodeSliceError as core::fmt::Display>::fmt */

void __rustcall
<base64::encode::EncodeSliceError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007e0ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002e6132,0x16);
  return;
}


// ===== 007e0ef8  <base64::chunked_encoder::StringSink_as_base64::chunked_encoder::Sink>::write_encoded_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::chunked_encoder::StringSink as base64::chunked_encoder::Sink>::write_encoded_bytes */

undefined8 __rustcall
<base64::chunked_encoder::StringSink_as_base64::chunked_encoder::Sink>::write_encoded_bytes
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long local_58;
  void *local_50;
  ulong uStack_48;
  void *local_40;
  ulong uStack_38;
  
  plVar1 = (long *)*param_1;
  core::str::converts::from_utf8(&local_58,param_2,param_3);
  if (local_58 == 1) {
    uStack_38 = uStack_48;
    local_40 = local_50;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002e60f8,0x2b,&local_40,&DAT_00ae0298,
               &PTR_s__root__cargo_registry_src_index__00ae0378);
  }
  lVar2 = plVar1[2];
  if ((ulong)(*plVar1 - lVar2) < uStack_48) {
    FUN_007e0804(plVar1,lVar2,uStack_48);
    lVar2 = plVar1[2];
  }
  else if (uStack_48 == 0) goto LAB_007e0f58;
  memcpy((void *)(plVar1[1] + lVar2),local_50,uStack_48);
LAB_007e0f58:
  plVar1[2] = lVar2 + uStack_48;
  return 0;
}


// ===== 007e0fc4  <base64::decode::DecodeSliceError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::decode::DecodeSliceError as core::fmt::Display>::fmt */

void __rustcall
<base64::decode::DecodeSliceError_as_core::fmt::Display>::fmt(char *param_1,undefined8 *param_2)

{
  char *local_28;
  char **local_20;
  code *pcStack_18;
  
  if (*param_1 != -1) {
    local_20 = &local_28;
    pcStack_18 = FUN_007e11f4;
    local_28 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002bae8b,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007e1024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002e6132,0x16);
  return;
}


// ===== 007e1028  <base64::display::FormatterSink_as_base64::chunked_encoder::Sink>::write_encoded_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::display::FormatterSink as base64::chunked_encoder::Sink>::write_encoded_bytes */

void __rustcall
<base64::display::FormatterSink_as_base64::chunked_encoder::Sink>::write_encoded_bytes
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  core::str::converts::from_utf8(&local_48,param_2,param_3);
  if (local_48 != 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar1,local_40,uStack_38);
    return;
  }
  uStack_28 = uStack_38;
  local_30 = local_40;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002e6148,0x18,&local_30,&DAT_00ae0298,
             &PTR_s__root__cargo_registry_src_index__00ae0390);
}


// ===== 007e109c  <base64::alphabet::ParseAlphabetError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::alphabet::ParseAlphabetError as core::fmt::Display>::fmt */

void __rustcall
<base64::alphabet::ParseAlphabetError_as_core::fmt::Display>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *local_28;
  byte **local_20;
  code *pcStack_18;
  
  local_28 = param_1 + 1;
  bVar1 = *param_1;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      local_20 = &local_28;
      pcStack_18 = FUN_007e11fc;
      core::fmt::write(*param_2,param_2[1],&DAT_002e619b,&local_20);
      return;
    }
    local_20 = &local_28;
    pcStack_18 = FUN_007e11fc;
    core::fmt::write(*param_2,param_2[1],&DAT_002e61b6,&local_20);
    return;
  }
  if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x007e10d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002e6160,0x21);
    return;
  }
  local_20 = &local_28;
  pcStack_18 = FUN_007e11fc;
  core::fmt::write(*param_2,param_2[1],&DAT_002e6181,&local_20);
  return;
}


// ===== 007e117c  FUN_007e117c =====

void FUN_007e117c(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1 + 1;
  if (*(char *)*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ae03e8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007e11d8  FUN_007e11d8 =====

void FUN_007e11d8(undefined8 *param_1,long param_2)

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


// ===== 007e11f4  FUN_007e11f4 =====

void FUN_007e11f4(undefined8 *param_1)

{
  <base64::decode::DecodeError_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 007e11fc  FUN_007e11fc =====

void FUN_007e11fc(undefined8 *param_1)

{
  <u8_as_core::fmt::LowerHex>::fmt(*param_1);
  return;
}


// ===== 007e1204  <alloc::string::String_as_base64::write::encoder_string_writer::StrConsumer>::consume =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as base64::write::encoder_string_writer::StrConsumer>::consume */

void __rustcall
<alloc::string::String_as_base64::write::encoder_string_writer::StrConsumer>::consume
          (long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_007e0804(param_1,lVar1,param_3);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_007e1244;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_007e1244:
  param_1[2] = lVar1 + param_3;
  return;
}


// ===== 007e127c  FUN_007e127c =====

void FUN_007e127c(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_002e61ce,9,&DAT_002e61d7,0xb,param_1,&DAT_00ae03a8,&DAT_002e61e2,9,
             &local_18,&DAT_00ae03c8);
  return;
}


// ===== 007e12ec  FUN_007e12ec =====

void FUN_007e12ec(undefined8 param_1,long param_2)

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


// ===== 007e1304  <base64::alphabet::Alphabet_as_core::convert::TryFrom<&str>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::alphabet::Alphabet as core::convert::TryFrom<&str>>::try_from */

void __rustcall
<base64::alphabet::Alphabet_as_core::convert::TryFrom<&str>>::try_from
          (undefined1 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 != 0x40) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  lVar2 = 0;
  while( true ) {
    bVar1 = *(byte *)((long)param_2 + lVar2);
    if (0x5e < bVar1 - 0x20) {
      param_1[2] = bVar1;
      param_1[1] = 2;
      *param_1 = 1;
      return;
    }
    if (bVar1 == 0x3d) break;
    lVar3 = 0;
    do {
      if ((lVar2 != lVar3) && (bVar1 == *(byte *)((long)param_2 + lVar3))) {
        param_1[2] = bVar1;
        param_1[1] = 1;
        *param_1 = 1;
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x40);
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x40) {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      *param_1 = 0;
      *(undefined8 *)(param_1 + 9) = uVar5;
      *(undefined8 *)(param_1 + 1) = uVar4;
      uVar5 = param_2[5];
      uVar4 = param_2[4];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      *(undefined8 *)(param_1 + 0x19) = uVar7;
      *(undefined8 *)(param_1 + 0x11) = uVar6;
      *(undefined8 *)(param_1 + 0x29) = uVar5;
      *(undefined8 *)(param_1 + 0x21) = uVar4;
      *(undefined8 *)(param_1 + 0x39) = uVar9;
      *(undefined8 *)(param_1 + 0x31) = uVar8;
      return;
    }
  }
  *(undefined2 *)(param_1 + 1) = 0x3d03;
  *param_1 = 1;
  return;
}


// ===== 007e13d0  <base64::engine::general_purpose::GeneralPurpose_as_base64::engine::Engine>::internal_decode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::engine::general_purpose::GeneralPurpose as base64::engine::Engine>::internal_decode */

void __rustcall
<base64::engine::general_purpose::GeneralPurpose_as_base64::engine::Engine>::internal_decode
          (ulong *param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
          ulong param_7)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  byte bVar20;
  long lVar21;
  uint *puVar22;
  byte bVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  
  bVar3 = *(byte *)(param_2 + 1);
  cVar4 = *(char *)(param_2 + 2);
  lVar17 = param_2 + 0x43;
  if (param_7 == 1) {
    param_2 = param_4 - 1;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (param_2,0,&PTR_s__root__cargo_registry_src_index__00ae0360);
    }
    uVar9 = (ulong)*(byte *)(param_3 + param_2);
    if ((uVar9 == 0x3d) || (*(char *)(lVar17 + uVar9) != -1)) goto LAB_007e1424;
    uVar11 = 0;
  }
  else {
LAB_007e1424:
    uVar9 = 0;
    if (param_7 <= param_4) {
      uVar9 = param_4 - param_7;
    }
    uVar10 = 0;
    if (3 < uVar9) {
      uVar10 = uVar9 - 4;
    }
    if (param_7 != 0) {
      uVar10 = uVar9;
    }
    uVar19 = uVar10 >> 2;
    uVar9 = uVar19 * 3;
    if (uVar9 <= param_6) {
      uVar13 = uVar10 & 0x7fffffffffffffe0;
      if (param_4 < uVar13) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar13,param_4,&PTR_s__root__cargo_registry_src_index__00ae0348);
      }
      if (uVar13 != 0) {
        lVar8 = 0;
        uVar15 = 0;
        lVar7 = 0x10;
        lVar16 = 8;
        lVar21 = param_6 / 0x18 + 1;
        puVar22 = (uint *)(param_5 + 0xc);
        do {
          lVar21 = lVar21 + -1;
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (-lVar8,(param_6 / 0x18) * 0x18 + 0x18,param_6,
                       &PTR_s__root__cargo_registry_src_index__00ae0330);
          }
          pbVar1 = (byte *)(param_3 + uVar15);
          bVar20 = *pbVar1;
          uVar24 = (ulong)bVar20;
          if ((ulong)*(byte *)(lVar17 + uVar24) == 0xff) {
LAB_007e1968:
            *(undefined1 *)(param_1 + 1) = 0;
            *(byte *)((long)param_1 + 9) = bVar20;
            param_1[2] = uVar15;
            goto LAB_007e1b04;
          }
          bVar20 = pbVar1[1];
          uVar25 = (ulong)bVar20;
          if ((ulong)*(byte *)(lVar17 + uVar25) == 0xff) {
            uVar15 = uVar15 + 1;
            goto LAB_007e1968;
          }
          bVar20 = pbVar1[2];
          uVar26 = (ulong)bVar20;
          if ((ulong)*(byte *)(lVar17 + uVar26) == 0xff) {
            uVar15 = uVar15 + 2;
            goto LAB_007e1968;
          }
          bVar20 = pbVar1[3];
          uVar27 = (ulong)bVar20;
          if ((ulong)*(byte *)(lVar17 + uVar27) == 0xff) {
            uVar15 = uVar15 + 3;
            goto LAB_007e1968;
          }
          bVar20 = pbVar1[4];
          uVar28 = (ulong)bVar20;
          if ((ulong)*(byte *)(lVar17 + uVar28) == 0xff) {
            uVar15 = uVar15 + 4;
            goto LAB_007e1968;
          }
          bVar20 = pbVar1[5];
          uVar29 = (ulong)bVar20;
          if ((ulong)*(byte *)(lVar17 + uVar29) == 0xff) {
            uVar15 = uVar15 + 5;
            goto LAB_007e1968;
          }
          bVar20 = pbVar1[6];
          uVar30 = (ulong)bVar20;
          if ((ulong)*(byte *)(lVar17 + uVar30) == 0xff) {
            uVar15 = uVar15 + 6;
            goto LAB_007e1968;
          }
          bVar20 = pbVar1[7];
          if ((ulong)*(byte *)(lVar17 + (ulong)bVar20) == 0xff) {
            uVar15 = uVar15 + 7;
            goto LAB_007e1968;
          }
          bVar23 = pbVar1[8];
          bVar5 = *(byte *)(lVar17 + (ulong)bVar23);
          uVar24 = (ulong)*(byte *)(lVar17 + uVar25) << 0x34 |
                   (ulong)*(byte *)(lVar17 + uVar24) << 0x3a |
                   (ulong)*(byte *)(lVar17 + uVar26) << 0x2e |
                   (ulong)*(byte *)(lVar17 + uVar27) << 0x28 |
                   (ulong)*(byte *)(lVar17 + uVar28) << 0x22 |
                   (ulong)*(byte *)(lVar17 + uVar29) << 0x1c |
                   (ulong)*(byte *)(lVar17 + uVar30) << 0x16;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 |
                   (uVar24 & 0xff00ff00ff00ff | (ulong)*(byte *)(lVar17 + (ulong)bVar20) << 0x10) <<
                   8;
          uVar25 = uVar24 & 0xffff0000ffff0000;
          puVar22[-3] = (uint)(ushort)(uVar25 >> 0x30) | (uint)(uVar24 >> 0x10) & 0xffff0000;
          *(short *)(puVar22 + -2) = (short)(uVar25 >> 0x10);
          if ((ulong)bVar5 == 0xff) {
LAB_007e19b0:
            *(undefined1 *)(param_1 + 1) = 0;
            uVar10 = lVar16 + uVar15;
LAB_007e1af8:
            *(byte *)((long)param_1 + 9) = bVar23;
            goto LAB_007e1afc;
          }
          bVar23 = pbVar1[9];
          uVar24 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar24) == 0xff) {
            lVar16 = 9;
            goto LAB_007e19b0;
          }
          bVar23 = pbVar1[10];
          uVar25 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar25) == 0xff) {
            lVar16 = 10;
            goto LAB_007e19b0;
          }
          bVar23 = pbVar1[0xb];
          uVar26 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar26) == 0xff) {
            lVar16 = 0xb;
            goto LAB_007e19b0;
          }
          bVar23 = pbVar1[0xc];
          uVar27 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar27) == 0xff) {
            lVar16 = 0xc;
            goto LAB_007e19b0;
          }
          bVar23 = pbVar1[0xd];
          uVar28 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar28) == 0xff) {
            lVar16 = 0xd;
            goto LAB_007e19b0;
          }
          bVar23 = pbVar1[0xe];
          uVar29 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar29) == 0xff) {
            lVar16 = 0xe;
            goto LAB_007e19b0;
          }
          bVar23 = pbVar1[0xf];
          uVar30 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar30) == 0xff) {
            lVar16 = 0xf;
            goto LAB_007e19b0;
          }
          bVar23 = pbVar1[0x10];
          bVar20 = *(byte *)(lVar17 + (ulong)bVar23);
          uVar24 = (ulong)*(byte *)(lVar17 + uVar24) << 0x34 | (ulong)bVar5 << 0x3a |
                   (ulong)*(byte *)(lVar17 + uVar25) << 0x2e |
                   (ulong)*(byte *)(lVar17 + uVar26) << 0x28 |
                   (ulong)*(byte *)(lVar17 + uVar27) << 0x22 |
                   (ulong)*(byte *)(lVar17 + uVar28) << 0x1c |
                   (ulong)*(byte *)(lVar17 + uVar29) << 0x16;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 |
                   (uVar24 & 0xff00ff00ff00ff | (ulong)*(byte *)(lVar17 + uVar30) << 0x10) << 8;
          uVar25 = uVar24 & 0xffff0000ffff0000;
          *(uint *)((long)puVar22 + -6) =
               (uint)(ushort)(uVar25 >> 0x30) | (uint)(uVar24 >> 0x10) & 0xffff0000;
          *(short *)((long)puVar22 + -2) = (short)(uVar25 >> 0x10);
          if ((ulong)bVar20 == 0xff) {
LAB_007e1a18:
            *(undefined1 *)(param_1 + 1) = 0;
            uVar10 = lVar7 + uVar15;
            goto LAB_007e1af8;
          }
          bVar23 = pbVar1[0x11];
          uVar24 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar24) == 0xff) {
            lVar7 = 0x11;
            goto LAB_007e1a18;
          }
          bVar23 = pbVar1[0x12];
          uVar25 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar25) == 0xff) {
            lVar7 = 0x12;
            goto LAB_007e1a18;
          }
          bVar23 = pbVar1[0x13];
          uVar26 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar26) == 0xff) {
            lVar7 = 0x13;
            goto LAB_007e1a18;
          }
          bVar23 = pbVar1[0x14];
          uVar27 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar27) == 0xff) {
            lVar7 = 0x14;
            goto LAB_007e1a18;
          }
          bVar23 = pbVar1[0x15];
          uVar28 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar28) == 0xff) {
            lVar7 = 0x15;
            goto LAB_007e1a18;
          }
          bVar23 = pbVar1[0x16];
          uVar29 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar29) == 0xff) {
            lVar7 = 0x16;
            goto LAB_007e1a18;
          }
          bVar23 = pbVar1[0x17];
          uVar30 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar30) == 0xff) {
            lVar7 = 0x17;
            goto LAB_007e1a18;
          }
          bVar23 = pbVar1[0x18];
          bVar5 = *(byte *)(lVar17 + (ulong)bVar23);
          uVar24 = (ulong)*(byte *)(lVar17 + uVar24) << 0x34 | (ulong)bVar20 << 0x3a |
                   (ulong)*(byte *)(lVar17 + uVar25) << 0x2e |
                   (ulong)*(byte *)(lVar17 + uVar26) << 0x28 |
                   (ulong)*(byte *)(lVar17 + uVar27) << 0x22 |
                   (ulong)*(byte *)(lVar17 + uVar28) << 0x1c |
                   (ulong)*(byte *)(lVar17 + uVar29) << 0x16;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 |
                   (uVar24 & 0xff00ff00ff00ff | (ulong)*(byte *)(lVar17 + uVar30) << 0x10) << 8;
          uVar25 = uVar24 & 0xffff0000ffff0000;
          *puVar22 = (uint)(ushort)(uVar25 >> 0x30) | (uint)(uVar24 >> 0x10) & 0xffff0000;
          *(short *)(puVar22 + 1) = (short)(uVar25 >> 0x10);
          if ((ulong)bVar5 == 0xff) {
            lVar17 = 0x18;
LAB_007e1af0:
            *(undefined1 *)(param_1 + 1) = 0;
            uVar10 = lVar17 + uVar15;
            goto LAB_007e1af8;
          }
          bVar23 = pbVar1[0x19];
          uVar24 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar24) == 0xff) {
            lVar17 = 0x19;
            goto LAB_007e1af0;
          }
          bVar23 = pbVar1[0x1a];
          uVar25 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar25) == 0xff) {
            lVar17 = 0x1a;
            goto LAB_007e1af0;
          }
          bVar23 = pbVar1[0x1b];
          uVar26 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar26) == 0xff) {
            lVar17 = 0x1b;
            goto LAB_007e1af0;
          }
          bVar23 = pbVar1[0x1c];
          uVar27 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar27) == 0xff) {
            lVar17 = 0x1c;
            goto LAB_007e1af0;
          }
          bVar23 = pbVar1[0x1d];
          uVar28 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar28) == 0xff) {
            lVar17 = 0x1d;
            goto LAB_007e1af0;
          }
          bVar23 = pbVar1[0x1e];
          uVar29 = (ulong)bVar23;
          if ((ulong)*(byte *)(lVar17 + uVar29) == 0xff) {
            lVar17 = 0x1e;
            goto LAB_007e1af0;
          }
          bVar23 = pbVar1[0x1f];
          if ((ulong)*(byte *)(lVar17 + (ulong)bVar23) == 0xff) {
            lVar17 = 0x1f;
            goto LAB_007e1af0;
          }
          uVar15 = uVar15 + 0x20;
          lVar8 = lVar8 + -0x18;
          uVar24 = (ulong)*(byte *)(lVar17 + uVar24) << 0x34 | (ulong)bVar5 << 0x3a |
                   (ulong)*(byte *)(lVar17 + uVar25) << 0x2e |
                   (ulong)*(byte *)(lVar17 + uVar26) << 0x28 |
                   (ulong)*(byte *)(lVar17 + uVar27) << 0x22 |
                   (ulong)*(byte *)(lVar17 + uVar28) << 0x1c |
                   (ulong)*(byte *)(lVar17 + uVar29) << 0x16;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 |
                   (uVar24 & 0xff00ff00ff00ff | (ulong)*(byte *)(lVar17 + (ulong)bVar23) << 0x10) <<
                   8;
          uVar25 = uVar24 & 0xffff0000ffff0000;
          *(uint *)((long)puVar22 + 6) =
               (uint)(ushort)(uVar25 >> 0x30) | (uint)(uVar24 >> 0x10) & 0xffff0000;
          *(short *)((long)puVar22 + 10) = (short)(uVar25 >> 0x10);
          puVar22 = puVar22 + 6;
        } while (uVar13 != uVar15);
      }
      lVar21 = (uVar13 >> 2) + (uVar13 >> 1);
      if (uVar19 < uVar13 >> 2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (lVar21,uVar9,param_6,&PTR_s__root__cargo_registry_src_index__00ae0318);
      }
      if (param_4 < uVar10) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar13,uVar10,param_4,&PTR_s__root__cargo_registry_src_index__00ae0300);
      }
      if ((uVar10 & 0x1c) != 0) {
        lVar7 = 0;
        uVar15 = 0;
        do {
          if (uVar9 - lVar21 < lVar7 + 3U) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (lVar7,lVar7 + 3U,uVar9 - lVar21,
                       &PTR_s__root__cargo_registry_src_index__00ae02e8);
          }
          pbVar1 = (byte *)(param_3 + uVar13 + uVar15);
          bVar20 = *pbVar1;
          uVar24 = (ulong)bVar20;
          if (*(byte *)(lVar17 + uVar24) == 0xff) {
            uVar10 = uVar13 + uVar15;
LAB_007e18e0:
            *(undefined1 *)(param_1 + 1) = 0;
            *(byte *)((long)param_1 + 9) = bVar20;
            goto LAB_007e1afc;
          }
          bVar20 = pbVar1[1];
          uVar25 = (ulong)bVar20;
          if (*(byte *)(lVar17 + uVar25) == 0xff) {
            uVar10 = uVar13 + uVar15 + 1;
            goto LAB_007e18e0;
          }
          bVar20 = pbVar1[2];
          uVar26 = (ulong)bVar20;
          if (*(byte *)(lVar17 + uVar26) == 0xff) {
            uVar10 = uVar13 + uVar15 + 2;
            goto LAB_007e18e0;
          }
          bVar20 = pbVar1[3];
          bVar23 = *(byte *)(lVar17 + (ulong)bVar20);
          if (bVar23 == 0xff) {
            uVar10 = uVar13 + uVar15 + 3;
            goto LAB_007e18e0;
          }
          uVar15 = uVar15 + 4;
          uVar12 = (uint)*(byte *)(lVar17 + uVar25) << 0x14 |
                   (uint)*(byte *)(lVar17 + uVar24) << 0x1a |
                   (uint)*(byte *)(lVar17 + uVar26) << 0xe;
          puVar2 = (ushort *)(param_5 + lVar21 + lVar7);
          lVar7 = lVar7 + 3;
          uVar14 = uVar12 & 0xff00ff00;
          *puVar2 = (ushort)(byte)(uVar14 >> 0x18) | (ushort)(uVar12 >> 8) & 0xff00;
          *(byte *)(puVar2 + 1) = (byte)(uVar14 >> 8) | bVar23;
        } while ((uVar10 & 0x1c) != uVar15);
      }
      lVar21 = param_4 - uVar10;
      if (param_4 == uVar10) {
        param_3 = 0;
        if (param_4 == 0) {
          uVar12 = 0;
          uVar14 = 0;
          uVar18 = 0;
          uVar6 = 0;
          lVar17 = 0;
          lVar21 = 0;
          bVar20 = 0;
          goto LAB_007e1908;
        }
LAB_007e1844:
        *(undefined1 *)(param_1 + 1) = 1;
        param_1[2] = param_3 + uVar10;
        goto LAB_007e1b04;
      }
      pbVar1 = (byte *)(param_3 + uVar10);
      bVar20 = *pbVar1;
      if (bVar20 == 0x3d) {
LAB_007e1874:
        lVar17 = 0;
LAB_007e1878:
        *(undefined2 *)(param_1 + 1) = 0x3d00;
        param_1[2] = lVar17 + uVar10;
        goto LAB_007e192c;
      }
      bVar23 = *(byte *)(lVar17 + (ulong)(uint)bVar20);
      uVar12 = (uint)bVar23;
      if (bVar23 == 0xff) {
        lVar17 = 0;
        goto LAB_007e19c0;
      }
      if (uVar10 + 1 == param_4) {
        param_3 = 1;
        goto LAB_007e1844;
      }
      bVar20 = pbVar1[1];
      if (bVar20 == 0x3d) {
        lVar17 = 1;
        goto LAB_007e1878;
      }
      uVar14 = (uint)*(byte *)(lVar17 + (ulong)(uint)bVar20);
      if (uVar14 == 0xff) {
        lVar17 = 1;
        goto LAB_007e19c0;
      }
      uVar13 = uVar10 + 2;
      if (uVar13 == param_4) {
        param_3 = 0;
        lVar17 = 0;
LAB_007e1b44:
        uVar18 = 0;
        uVar6 = 0;
        lVar21 = 2;
LAB_007e1908:
        if (cVar4 != '\0') {
          if (cVar4 == '\x01') {
            if (((int)lVar21 + (int)param_3 & 3U) != 0) {
LAB_007e1920:
              *(undefined1 *)(param_1 + 1) = 3;
LAB_007e192c:
              *param_1 = 2;
              return;
            }
          }
          else if (param_3 != 0) goto LAB_007e1920;
        }
        uVar12 = uVar14 << 0x14 | uVar12 << 0x1a;
        uVar14 = uVar18 << 0xe | uVar6 << 8;
        uVar18 = uVar14 | uVar12;
        if (((bVar3 & 1) != 0) || (uVar18 << (ulong)((int)lVar21 * 6 & 0x18) == 0)) {
          uVar15 = (ulong)(lVar21 * 3) >> 2;
          uVar13 = uVar9;
          if (uVar15 == 0) goto LAB_007e1ab0;
          lVar7 = param_6 + uVar19 * -3;
          lVar21 = 0;
          if (uVar9 <= param_6) {
            lVar21 = lVar7;
          }
          if (uVar9 <= param_6 && lVar7 != 0) {
            *(char *)(param_5 + uVar9) = (char)(uVar12 >> 0x18);
            uVar13 = uVar9 + 1;
            if (uVar15 == 1) goto LAB_007e1ab0;
            if (lVar21 != 1) {
              *(char *)(param_5 + uVar13) = (char)(uVar18 >> 0x10);
              uVar13 = uVar9 + 2;
              if (uVar15 == 2) {
LAB_007e1ab0:
                param_1[2] = uVar13;
                *param_1 = (ulong)(param_3 != 0);
                param_1[1] = lVar17 + uVar10;
                return;
              }
              if (lVar21 != 2) {
                *(char *)(param_5 + uVar13) = (char)(uVar14 >> 8);
                uVar13 = uVar9 + 3;
                goto LAB_007e1ab0;
              }
            }
          }
          *(undefined1 *)(param_1 + 1) = 0xff;
          goto LAB_007e1b04;
        }
        *(undefined1 *)(param_1 + 1) = 2;
        uVar10 = (uVar10 + lVar21) - 1;
      }
      else {
        bVar23 = pbVar1[2];
        param_3 = param_4 + param_3;
        if (bVar23 == 0x3d) {
          param_3 = param_3 - (long)(pbVar1 + 2);
          if (uVar10 + 3 == param_4) {
            uVar18 = 0;
            uVar6 = 0;
            lVar17 = 2;
            lVar21 = 2;
            goto LAB_007e1908;
          }
          lVar7 = 3;
          lVar17 = 2;
          do {
            if (pbVar1[lVar7] != 0x3d) goto LAB_007e1da4;
            if (lVar7 == 0) goto LAB_007e1874;
            lVar7 = lVar7 + 1;
          } while (lVar21 != lVar7);
          goto LAB_007e1b44;
        }
        uVar18 = (uint)*(byte *)(lVar17 + (ulong)(uint)bVar23);
        if (uVar18 == 0xff) {
          lVar17 = 2;
          bVar20 = bVar23;
          goto LAB_007e19c0;
        }
        uVar13 = uVar10 + 3;
        if (uVar13 == param_4) {
          param_3 = 0;
          lVar17 = 0;
LAB_007e1bfc:
          uVar6 = 0;
          lVar21 = 3;
          bVar20 = bVar23;
          goto LAB_007e1908;
        }
        bVar20 = pbVar1[3];
        if (bVar20 == 0x3d) {
          param_3 = param_3 - (long)(pbVar1 + 3);
          if (uVar10 + 4 == param_4) {
            lVar17 = 3;
          }
          else {
            lVar7 = 4;
            lVar17 = 3;
            do {
              if (pbVar1[lVar7] != 0x3d) goto LAB_007e1da4;
              if (lVar7 == 0) goto LAB_007e1874;
              lVar7 = lVar7 + 1;
            } while (lVar21 != lVar7);
          }
          goto LAB_007e1bfc;
        }
        uVar6 = (uint)*(byte *)(lVar17 + (ulong)(uint)bVar20);
        if (uVar6 != 0xff) {
          uVar13 = uVar10 + 4;
          if (uVar13 == param_4) {
            param_3 = 0;
            lVar17 = 0;
            lVar21 = 4;
          }
          else {
            bVar23 = pbVar1[4];
            if (bVar23 != 0x3d) {
              if (*(char *)(lVar17 + (ulong)(uint)bVar23) != -1) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (4,4,&PTR_s__root__cargo_registry_src_index__00ae02d0);
              }
              lVar17 = 4;
              bVar20 = bVar23;
              goto LAB_007e19c0;
            }
            param_3 = param_3 - (long)(pbVar1 + 4);
            if (uVar10 + 5 == param_4) {
              lVar17 = 4;
              lVar21 = 4;
            }
            else {
              lVar7 = 5;
              lVar17 = 4;
              do {
                if (pbVar1[lVar7] != 0x3d) goto LAB_007e1da4;
                if (lVar7 == 0) goto LAB_007e1874;
                lVar7 = lVar7 + 1;
              } while (lVar21 != lVar7);
              lVar21 = 4;
            }
          }
          goto LAB_007e1908;
        }
        lVar17 = 3;
LAB_007e19c0:
        *(undefined1 *)(param_1 + 1) = 0;
        uVar10 = lVar17 + uVar10;
      }
      *(byte *)((long)param_1 + 9) = bVar20;
LAB_007e1afc:
      param_1[2] = uVar10;
      goto LAB_007e1b04;
    }
    uVar11 = 0xff;
  }
  *(undefined1 *)(param_1 + 1) = uVar11;
  *(char *)((long)param_1 + 9) = (char)uVar9;
  param_1[2] = param_2;
LAB_007e1b04:
  *param_1 = 2;
  return;
LAB_007e1da4:
  param_1[2] = uVar13;
  *(undefined2 *)(param_1 + 1) = 0x3d00;
  goto LAB_007e192c;
}


// ===== 007e1ddc  <base64::engine::general_purpose::GeneralPurpose_as_base64::engine::Engine>::internal_encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <base64::engine::general_purpose::GeneralPurpose as base64::engine::Engine>::internal_encode */

ulong __rustcall
<base64::engine::general_purpose::GeneralPurpose_as_base64::engine::Engine>::internal_encode
          (long param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  
  uVar14 = 0;
  uVar15 = 0;
  if (0x19 < param_3) {
    uVar15 = param_3 - 0x1a;
  }
  uVar16 = 0;
  if (0x1a < param_3) {
    uVar14 = 0;
    lVar17 = param_1 + 3;
    uVar13 = 0;
    do {
      if (param_3 < uVar14 + 0x1a) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar14,((param_3 - 2) / 0x18) * 0x18 + 0x1a,param_3,
                   &PTR_s__root__cargo_registry_src_index__00ae04c8);
      }
      uVar16 = uVar13 + 0x20;
      if (param_5 < uVar16) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar13,uVar16,param_5,&PTR_s__root__cargo_registry_src_index__00ae04b0);
      }
      puVar1 = (ulong *)(param_2 + uVar14);
      puVar2 = (undefined1 *)(param_4 + 0x1f + uVar13);
      uVar14 = uVar14 + 0x18;
      uVar13 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | uVar9;
      uVar11 = uVar13 << 0x20;
      uVar6 = *(undefined1 *)(lVar17 + (uVar11 >> 0x34 & 0x3f));
      uVar7 = *(undefined1 *)(lVar17 + (uVar11 >> 0x2e & 0x3f));
      uVar8 = *(undefined1 *)(lVar17 + (uVar11 >> 0x28 & 0x3f));
      puVar2[-0x1f] = *(undefined1 *)(lVar17 + (uVar11 >> 0x3a));
      puVar2[-0x1e] = uVar6;
      uVar19 = *(ulong *)((long)puVar1 + 6);
      puVar2[-0x1d] = uVar7;
      uVar6 = *(undefined1 *)(lVar17 + (uVar11 >> 0x22 & 0x3f));
      puVar2[-0x1c] = uVar8;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar19 & 0xffff0000ffff) << 0x10;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | uVar10;
      uVar12 = uVar19 << 0x20;
      uVar7 = *(undefined1 *)(lVar17 + ((uVar13 >> 0x20 | uVar11) >> 0x1c & 0x3f));
      puVar2[-0x1b] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + ((uVar9 & 0xfc0000000000000) >> 0x36));
      puVar2[-0x1a] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + ((uVar9 & 0x3f000000000000) >> 0x30));
      puVar2[-0x19] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + (uVar12 >> 0x3a));
      puVar2[-0x18] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + (uVar12 >> 0x34 & 0x3f));
      puVar2[-0x17] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + (uVar12 >> 0x2e & 0x3f));
      uVar13 = *(ulong *)((long)puVar1 + 0xc);
      puVar2[-0x16] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + (uVar12 >> 0x28 & 0x3f));
      puVar2[-0x15] = uVar6;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | uVar9;
      uVar11 = uVar13 << 0x20;
      puVar2[-0x14] = uVar7;
      uVar6 = *(undefined1 *)(lVar17 + ((uVar19 >> 0x20 | uVar12) >> 0x1c & 0x3f));
      uVar19 = *(ulong *)((long)puVar1 + 0x12);
      puVar2[-0x13] = *(undefined1 *)(lVar17 + (uVar12 >> 0x22 & 0x3f));
      uVar7 = *(undefined1 *)(lVar17 + ((uVar10 & 0xfc0000000000000) >> 0x36));
      puVar2[-0x12] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + ((uVar10 & 0x3f000000000000) >> 0x30));
      puVar2[-0x11] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + (uVar11 >> 0x3a));
      puVar2[-0x10] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + (uVar11 >> 0x34 & 0x3f));
      puVar2[-0xf] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + (uVar11 >> 0x2e & 0x3f));
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar19 & 0xffff0000ffff) << 0x10;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | uVar10;
      uVar12 = uVar19 << 0x20;
      puVar2[-0xe] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + (uVar11 >> 0x28 & 0x3f));
      puVar2[-0xd] = uVar7;
      puVar2[-0xc] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + ((uVar13 >> 0x20 | uVar11) >> 0x1c & 0x3f));
      puVar2[-0xb] = *(undefined1 *)(lVar17 + (uVar11 >> 0x22 & 0x3f));
      uVar7 = *(undefined1 *)(lVar17 + ((uVar9 & 0xfc0000000000000) >> 0x36));
      puVar2[-10] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + ((uVar9 & 0x3f000000000000) >> 0x30));
      puVar2[-9] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + (uVar12 >> 0x3a));
      puVar2[-8] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + (uVar12 >> 0x34 & 0x3f));
      puVar2[-7] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + (uVar12 >> 0x2e & 0x3f));
      puVar2[-6] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + (uVar12 >> 0x28 & 0x3f));
      puVar2[-5] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + (uVar12 >> 0x22 & 0x3f));
      puVar2[-4] = uVar6;
      uVar6 = *(undefined1 *)(lVar17 + ((uVar19 >> 0x20 | uVar12) >> 0x1c & 0x3f));
      puVar2[-3] = uVar7;
      uVar7 = *(undefined1 *)(lVar17 + ((uVar10 & 0xfc0000000000000) >> 0x36));
      uVar8 = *(undefined1 *)(lVar17 + ((uVar10 & 0x3f000000000000) >> 0x30));
      puVar2[-2] = uVar6;
      puVar2[-1] = uVar7;
      *puVar2 = uVar8;
      uVar13 = uVar16;
    } while (uVar14 <= uVar15);
  }
  uVar15 = (param_3 / 3) * 3;
  if (uVar14 < uVar15) {
    lVar17 = param_1 + 3;
    uVar13 = uVar16;
    do {
      uVar19 = uVar14 + 3;
      if (param_3 < uVar19) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar14,uVar19,param_3,&PTR_s__root__cargo_registry_src_index__00ae0498);
      }
      uVar16 = uVar13 + 4;
      if (param_5 < uVar16) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar13,uVar16,param_5,&PTR_s__root__cargo_registry_src_index__00ae0480);
      }
      pbVar3 = (byte *)(param_2 + uVar14);
      puVar2 = (undefined1 *)(param_4 + uVar13);
      bVar4 = pbVar3[1];
      bVar5 = pbVar3[2];
      uVar6 = *(undefined1 *)
               (lVar17 + ((ulong)(uint)(((uint5)CONCAT11(*pbVar3,bVar4) << 0x18) >> 0x1c) & 0x3f));
      *puVar2 = *(undefined1 *)(lVar17 + (ulong)(*pbVar3 >> 2));
      uVar7 = *(undefined1 *)
               (lVar17 + ((ulong)(uint)(((uint5)CONCAT11(bVar4,bVar5) << 0x18) >> 0x1e) & 0x3f));
      uVar8 = *(undefined1 *)(lVar17 + ((ulong)bVar5 & 0x3f));
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      uVar14 = uVar19;
      uVar13 = uVar16;
    } while (uVar19 < uVar15);
  }
  if (param_3 % 3 == 1) {
    if (param_5 <= uVar16) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar16,param_5,&PTR_s__root__cargo_registry_src_index__00ae0450);
    }
    bVar4 = *(byte *)(param_2 + uVar15);
    uVar15 = uVar16 + 1;
    *(undefined1 *)(param_4 + uVar16) = *(undefined1 *)(param_1 + (ulong)(bVar4 >> 2) + 3);
    if (param_5 <= uVar15) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar15,param_5,&PTR_s__root__cargo_registry_src_index__00ae0468);
    }
    uVar18 = (bVar4 & 3) << 4;
    lVar17 = 2;
  }
  else {
    if (param_3 % 3 != 2) {
      return uVar16;
    }
    if (param_5 <= uVar16) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar16,param_5,&PTR_s__root__cargo_registry_src_index__00ae0408);
    }
    uVar14 = uVar16 + 1;
    bVar4 = *(byte *)(param_2 + uVar15);
    *(undefined1 *)(param_4 + uVar16) = *(undefined1 *)(param_1 + 3 + (ulong)(bVar4 >> 2));
    if (param_5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar14,param_5,&PTR_s__root__cargo_registry_src_index__00ae0420);
    }
    bVar5 = ((byte *)(param_2 + uVar15))[1];
    uVar15 = uVar16 + 2;
    *(undefined1 *)(param_4 + uVar14) =
         *(undefined1 *)
          (param_1 + 3 + ((ulong)(uint)(((uint5)CONCAT11(bVar4,bVar5) << 0x18) >> 0x1c) & 0x3f));
    if (param_5 <= uVar15) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar15,param_5,&PTR_s__root__cargo_registry_src_index__00ae0438);
    }
    uVar18 = (bVar5 & 0xf) << 2;
    lVar17 = 3;
  }
  *(undefined1 *)(param_4 + uVar15) = *(undefined1 *)(param_1 + (ulong)uVar18 + 3);
  return lVar17 + uVar16;
}


// ===== 007e2218  <alloc::io::error::core::io::error::Error>::new<alloc::string::String> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<alloc::string::String> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<alloc::string::String>
          (undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    alloc::io::error::custom_owner_from_box(param_1,puVar3,&PTR_FUN_00ae0580);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* try { // try from 007e2274 to 007e227f has its CatchHandler @ 007e2284 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 007e22a4  FUN_007e22a4 =====

void FUN_007e22a4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_18;
  
  lVar1 = *param_1;
  if (lVar1 < 2) {
    if ((lVar1 != 0) && (lVar1 != 1)) {
      return;
    }
  }
  else if (lVar1 != 2) {
    if (lVar1 != 3) {
      return;
    }
    uVar2 = param_1[1] & 3;
    if (uVar2 - 2 < 2) {
      return;
    }
    if (uVar2 == 0) {
      return;
    }
    local_18 = param_1[1] - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  free((void *)param_1[2]);
  return;
}


// ===== 007e2330  FUN_007e2330 =====

void FUN_007e2330(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007e2348  rustls_pemfile::private_key =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls_pemfile::private_key */

void __rustcall
rustls_pemfile::private_key(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong local_50;
  long local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  do {
    pemfile::read_one(&local_50,param_2,param_3);
    if (local_50 == 0xffffffffffffffff) {
      *param_1 = 0xffffffffffffffff;
      return;
    }
    if (local_50 == 0xfffffffffffffffe) {
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = local_48;
      return;
    }
    if ((long)local_50 < 3) {
      if (1 < local_50) {
        *param_1 = 0;
        goto LAB_007e242c;
      }
    }
    else if (1 < local_50 - 5) {
      if (local_50 == 3) {
        *param_1 = 2;
      }
      else {
        *param_1 = 1;
      }
LAB_007e242c:
      param_1[1] = local_48;
      param_1[2] = pvStack_40;
      param_1[3] = local_38;
      return;
    }
    if ((local_50 - 5 < 0xfffffffffffffffd) && (0 < local_48)) {
      free(pvStack_40);
    }
  } while( true );
}


// ===== 007e2448  rustls_pemfile::csr =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls_pemfile::csr */

void __rustcall rustls_pemfile::csr(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_50;
  long local_48;
  void *pvStack_40;
  long local_38;
  
  while( true ) {
    pemfile::read_one(&local_50,param_2,param_3);
    if (local_50 == -1) {
      *param_1 = -2;
      return;
    }
    if (local_50 == -2) break;
    if (local_50 == 6) {
      *param_1 = local_48;
      param_1[1] = (long)pvStack_40;
      param_1[2] = local_38;
      return;
    }
    if (0 < local_48) {
      free(pvStack_40);
    }
  }
  *param_1 = -3;
  param_1[1] = local_48;
  return;
}


// ===== 007e2508  rustls_pemfile::pemfile::read_one_from_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls_pemfile::pemfile::read_one_from_slice */

void __rustcall
rustls_pemfile::pemfile::read_one_from_slice
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  void *local_88;
  long local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void **local_40;
  code *pcStack_38;
  
  while( true ) {
    pvVar1 = (void *)rustls_pki_types::pem::from_slice(&local_88,param_2,param_3);
    if (local_80 == -2) {
      if ((void *)0x2 < local_78) {
        local_88 = local_78;
        local_80 = local_70;
        local_40 = &local_88;
        local_78 = (void *)local_68;
        local_70 = uStack_60;
        pcStack_38 = FUN_007e2b74;
                    /* try { // try from 007e25e0 to 007e25f3 has its CatchHandler @ 007e2674 */
        alloc::fmt::format::format_inner(&local_58,&DAT_002ab692,&local_40);
        FUN_007e22a4(&local_88);
        local_78 = (void *)0x2;
        local_70 = local_58;
        local_68 = uStack_50;
        uStack_60 = local_48;
      }
      param_1[2] = local_70;
      param_1[3] = local_68;
      param_1[4] = uStack_60;
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = local_78;
      return;
    }
    if (local_80 == -1) break;
    if ((byte)local_88 != 7) {
      pvVar1 = local_78;
      param_3 = uStack_60;
      param_2 = local_68;
      if ((byte)local_88 < 3) {
        if ((byte)local_88 == 0) {
          uVar2 = 0;
        }
        else if ((byte)local_88 == 1) {
          uVar2 = 1;
        }
        else {
          uVar2 = 2;
        }
      }
      else if ((byte)local_88 < 5) {
        if ((byte)local_88 == 3) {
          uVar2 = 3;
        }
        else {
          uVar2 = 4;
        }
      }
      else if ((byte)local_88 == 5) {
        uVar2 = 5;
      }
      else {
        uVar2 = 6;
      }
      goto LAB_007e2654;
    }
    param_3 = uStack_60;
    param_2 = local_68;
    if (local_80 != 0) {
      free(local_78);
    }
  }
  local_80 = 0;
  uVar2 = 0xffffffffffffffff;
  local_70 = extraout_x8;
LAB_007e2654:
  *param_1 = uVar2;
  param_1[1] = local_80;
  param_1[2] = pvVar1;
  param_1[3] = local_70;
  param_1[4] = param_2;
  param_1[5] = param_3;
  return;
}


// ===== 007e268c  rustls_pemfile::pemfile::read_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls_pemfile::pemfile::read_one */

void __rustcall
rustls_pemfile::pemfile::read_one(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  puVar1 = (undefined1 *)rustls_pki_types::pem::from_buf(&local_90);
  uVar2 = (ulong)local_88 & 0xff;
  puVar3 = (undefined1 *)((ulong)local_90 & 0xffffffff);
  if (((ulong)local_90 & 1) == 0) {
    do {
      if (local_80 == (undefined1 *)0xffffffffffffffff) {
        uVar2 = 0xffffffffffffffff;
        local_78 = puVar1;
        local_70 = puVar3;
LAB_007e2768:
        *param_1 = uVar2;
        param_1[1] = (ulong)local_80;
        param_1[2] = (ulong)local_78;
        param_1[3] = (ulong)local_70;
        return;
      }
      if ((int)uVar2 != 7) goto LAB_007e2768;
      if (local_80 != (undefined1 *)0x0) {
        free(local_78);
      }
      puVar1 = (undefined1 *)rustls_pki_types::pem::from_buf(&local_90,param_2,param_3);
      uVar2 = (ulong)local_88 & 0xff;
      puVar3 = local_90;
    } while (local_90 != &DAT_00000001);
  }
  puVar3 = local_80;
  puVar1 = (undefined1 *)
           (((ulong)local_88 >> 8 & 0xffffffff) << 8 | (ulong)local_88 & 0xffffff0000000000 | uVar2)
  ;
  if (puVar1 == (undefined1 *)0x3) goto LAB_007e27f4;
  if (puVar1 == (undefined1 *)0x0) {
    puStack_58 = local_78;
    local_50 = local_70;
    local_68 = (undefined1 *)0x0;
    local_60 = (code *)local_80;
  }
  else {
    if (puVar1 == &DAT_00000001) {
      local_68 = (undefined1 *)0x1;
    }
    else {
      if (puVar1 != (undefined1 *)0x2) {
        local_80 = local_78;
        local_78 = local_70;
        local_88 = puVar3;
        local_60 = FUN_007e2b74;
                    /* try { // try from 007e27b8 to 007e27cb has its CatchHandler @ 007e2810 */
        local_90 = puVar1;
        local_68 = (undefined1 *)&local_90;
        alloc::fmt::format::format_inner(&local_48,&DAT_002ab692,&local_68);
        local_68 = (undefined1 *)0x2;
        puStack_58 = puStack_40;
        local_60 = (code *)local_48;
        local_50 = local_38;
        FUN_007e22a4(&local_90);
        goto LAB_007e27ec;
      }
      local_68 = (undefined1 *)0x2;
    }
    local_50 = local_70;
    puStack_58 = local_78;
    local_60 = (code *)local_80;
  }
LAB_007e27ec:
  local_80 = (undefined1 *)
             <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<rustls_pemfile[48957be0a9f50a13]::pemfile::Error>>
             ::from(&local_68);
LAB_007e27f4:
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = (ulong)local_80;
  return;
}


// ===== 007e2828  <rustls_pemfile::pemfile::Error_as_core::convert::From<rustls_pki_types::pem::Error>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls_pemfile::pemfile::Error as core::convert::From<rustls_pki_types::pem::Error>>::from */

void __rustcall
<rustls_pemfile::pemfile::Error_as_core::convert::From<rustls_pki_types::pem::Error>>::from
          (undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *local_30;
  code *pcStack_28;
  
  local_30 = (undefined1 *)&local_70;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar4 = param_2[2];
    lVar3 = param_2[1];
    lVar1 = param_2[3];
    *param_1 = 0;
    param_1[2] = lVar4;
    param_1[1] = lVar3;
    param_1[3] = lVar1;
    return;
  }
  if (lVar1 == 1) {
    lVar4 = param_2[2];
    lVar3 = param_2[1];
    lVar1 = param_2[3];
    uVar2 = 1;
  }
  else {
    if (lVar1 != 2) {
      lStack_68 = param_2[1];
      local_70 = *param_2;
      lStack_58 = param_2[3];
      lStack_60 = param_2[2];
      pcStack_28 = FUN_007e2b74;
                    /* try { // try from 007e28c8 to 007e28db has its CatchHandler @ 007e290c */
      alloc::fmt::format::format_inner(&local_48,&DAT_002ab692,&local_30);
      *param_1 = 2;
      param_1[2] = uStack_40;
      param_1[1] = local_48;
      param_1[3] = local_38;
      FUN_007e22a4(&local_70);
      return;
    }
    lVar4 = param_2[2];
    lVar3 = param_2[1];
    lVar1 = param_2[3];
    uVar2 = 2;
  }
  param_1[2] = lVar4;
  param_1[1] = lVar3;
  param_1[3] = lVar1;
  *param_1 = uVar2;
  return;
}


// ===== 007e2924  FUN_007e2924 =====

void FUN_007e2924(long *param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00ae04e0);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 007e2994  FUN_007e2994 =====

void FUN_007e2994(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 007e29a8  FUN_007e29a8 =====

void FUN_007e29a8(undefined8 *param_1)

{
  <core::io::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007e29b0  FUN_007e29b0 =====

void FUN_007e29b0(undefined8 *param_1,long param_2)

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


// ===== 007e29cc  <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<rustls_pemfile[48957be0a9f50a13]::pemfile::Error>>::from =====

/* <core[bcece726f298455b]::io::error::Error as
   core[bcece726f298455b]::convert::From<rustls_pemfile[48957be0a9f50a13]::pemfile::Error>>::from */

undefined8
<core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<rustls_pemfile[48957be0a9f50a13]::pemfile::Error>>
::from(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *__ptr;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long local_58;
  void *local_50;
  long *local_40;
  code *pcStack_38;
  
  if (*param_1 == 0) {
    lVar2 = param_1[1];
    __ptr = (void *)param_1[2];
                    /* try { // try from 007e2a5c to 007e2a6b has its CatchHandler @ 007e2b3c */
    <alloc::string::alloc::string::String>::from_utf8_lossy(&local_58,__ptr,param_1[3]);
    pcStack_38 = FUN_007e2b60;
                    /* try { // try from 007e2a78 to 007e2a8b has its CatchHandler @ 007e2af8 */
    local_40 = &local_58;
    alloc::fmt::format::format_inner(auStack_88,&DAT_002a2f03,&local_40);
    if (0 < local_58) {
      free(local_50);
    }
                    /* try { // try from 007e2aa4 to 007e2aaf has its CatchHandler @ 007e2b3c */
    uVar1 = <alloc::io::error::core::io::error::Error>::new<alloc::string::String>(0x15,auStack_88);
  }
  else {
    if (*param_1 != 1) {
      uVar1 = <alloc::io::error::core::io::error::Error>::new<alloc::string::String>
                        (0x15,param_1 + 1);
      return uVar1;
    }
    lVar2 = param_1[1];
    __ptr = (void *)param_1[2];
                    /* try { // try from 007e29fc to 007e2a0b has its CatchHandler @ 007e2b40 */
    <alloc::string::alloc::string::String>::from_utf8_lossy(&local_58,__ptr,param_1[3]);
    pcStack_38 = FUN_007e2b60;
                    /* try { // try from 007e2a18 to 007e2a2b has its CatchHandler @ 007e2b18 */
    local_40 = &local_58;
    alloc::fmt::format::format_inner(auStack_70,&DAT_002bcaa0,&local_40);
    if (0 < local_58) {
      free(local_50);
    }
                    /* try { // try from 007e2a44 to 007e2a4f has its CatchHandler @ 007e2b40 */
    uVar1 = <alloc::io::error::core::io::error::Error>::new<alloc::string::String>(0x15,auStack_70);
  }
  if (lVar2 != 0) {
    free(__ptr);
  }
  return uVar1;
}


// ===== 007e2b60  FUN_007e2b60 =====

void FUN_007e2b60(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 007e2b74  FUN_007e2b74 =====

void FUN_007e2b74(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *local_18;
  
  lVar1 = *param_1;
  if (lVar1 < 2) {
    local_18 = param_1 + 1;
    if (lVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
                (param_2,&DAT_002e61eb,0x11,&DAT_002e61fc,10,&local_18,&DAT_00ae0500);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
              (param_2,&DAT_002e6206,0x13,&DAT_002bd1a0,4,&local_18,&DAT_00ae0500);
    return;
  }
  if (lVar1 != 2) {
    if (lVar1 == 3) {
      local_18 = param_1 + 1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_002e6225,2,&local_18,&DAT_00ae0540);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e6227,0xc);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002e6219,0xc,&local_18,&DAT_00ae0520);
  return;
}


// ===== 007e2c94  FUN_007e2c94 =====

undefined1  [16] FUN_007e2c94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &DAT_002e6233;
  return auVar1;
}


// ===== 007e2ca4  FUN_007e2ca4 =====

undefined8 FUN_007e2ca4(void)

{
  return 0;
}


// ===== 007e2cac  FUN_007e2cac =====

void FUN_007e2cac(void)

{
  return;
}


// ===== 007e2cb0  FUN_007e2cb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e2cb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 007e2cc4  <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::is_sibling =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::is_sibling */

undefined8 __rustcall
<ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::is_sibling(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte local_54;
  ulong local_53;
  ulong uStack_4b;
  byte local_43;
  byte local_42;
  undefined8 local_41;
  undefined8 uStack_39;
  byte local_31;
  ulong local_30;
  ulong uStack_28;
  undefined1 local_20;
  
  uStack_4b = *(ulong *)(param_1 + 9);
  local_53 = *(ulong *)(param_1 + 1);
  local_43 = param_1[0x11];
  local_54 = *param_1;
  local_42 = *param_2;
  uStack_39 = *(undefined8 *)(param_2 + 9);
  local_41 = *(undefined8 *)(param_2 + 1);
  local_31 = param_2[0x11];
  if ((local_54 & 1) == 0) {
    if ((local_42 & 1) == 0) {
      uVar5 = <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::is_sibling((ulong)&local_54 | 1,&local_41)
      ;
      return uVar5;
    }
  }
  else {
    if ((local_42 & 1) == 0) {
      return 0;
    }
    if ((local_43 != 0) && (local_43 == local_31)) {
      uVar3 = local_43 - 1;
      if ((uVar3 & 0xff) < 0x81) {
        uVar4 = -(uint)local_43 - 0x7f;
        if ((uVar4 >> 7 & 1) == 0) {
          uVar4 = (uint)(char)uVar4;
          uVar6 = -1L << ((long)(int)uVar4 & 0x3fU);
          uVar1 = uVar6;
          uVar2 = 0;
          if (((long)(int)uVar4 & 0x40U) == 0) {
            uVar1 = uVar6 | 0x7fffffffffffffffU >> ((ulong)~uVar4 & 0x3f);
            uVar2 = uVar6;
          }
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uStack_28 = uStack_4b & (uVar2 >> 0x20 | uVar2 << 0x20);
          local_30 = local_53 & (uVar1 >> 0x20 | uVar1 << 0x20);
        }
        else {
          local_30 = 0;
          uStack_28 = 0;
        }
        local_20 = (undefined1)uVar3;
        uVar5 = <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net>>
                ::contains(&local_30,&local_41);
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ae0670);
    }
  }
  return 0;
}


// ===== 007e2df8  <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::new_assert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::new_assert */

void __rustcall
<ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::new_assert(undefined1 *param_1,char *param_2,byte param_3)

{
  undefined8 uVar1;
  
  if (*param_2 != '\x01') {
    if (param_3 < 0x21) {
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      param_1[5] = param_3;
      *param_1 = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_002e6286,0x37,&PTR_s__root__cargo_registry_src_index__00ae0610);
  }
  if (param_3 < 0x81) {
    uVar1 = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
    *(undefined8 *)(param_1 + 1) = uVar1;
    param_1[0x11] = param_3;
    *param_1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_002e62bd,0x38,&PTR_s__root__cargo_registry_src_index__00ae0628);
}


// ===== 007e2e90  <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::with_netmask =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::with_netmask */

void __rustcall
<ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::with_netmask
          (undefined1 *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  char cVar8;
  ulong uVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined7 local_10;
  undefined4 uStack_9;
  
  if (*param_3 == '\x01') {
    uVar7 = *(ulong *)(param_3 + 9);
    uVar9 = *(ulong *)(param_3 + 1);
    uVar3 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar3 >> 0x20 | uVar3 << 0x20;
    uVar3 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar3 >> 0x20 | uVar3 << 0x20;
    uVar14 = ~uVar13;
    uVar3 = LZCOUNT(uVar14);
    if (uVar14 == 0) {
      uVar3 = LZCOUNT(~uVar11) + 0x40;
    }
    uVar5 = (uint)uVar3;
    uVar12 = uVar11 << (uVar3 & 0x3f);
    bVar4 = (uVar3 & 0x40) == 0;
    uVar14 = 0;
    if (bVar4) {
      uVar14 = uVar12;
    }
    if (bVar4) {
      uVar12 = uVar13 << (uVar3 & 0x3f) | (uVar11 >> 1) >> ((ulong)~uVar5 & 0x3f);
    }
    if (((uVar9 & uVar7) != 0xffffffffffffffff) && (uVar14 != 0 || uVar12 != 0)) {
LAB_007e2f24:
      *param_1 = 2;
      return;
    }
  }
  else {
    uVar1 = *(uint *)(param_3 + 1);
    uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar5 = (uint)LZCOUNT(~uVar2);
    if ((uVar1 != 0xffffffff) && (uVar2 << (ulong)(uVar5 & 0x1f) != 0)) goto LAB_007e2f24;
  }
  if (*param_2 == '\x01') {
    uStack_9 = *(undefined4 *)(param_2 + 0xd);
    uVar6 = *(undefined4 *)(param_2 + 1);
    local_10 = (undefined7)*(undefined8 *)(param_2 + 6);
    uVar10 = 1;
    cVar8 = param_2[5];
  }
  else {
    if (0x20 < uVar5) {
      *param_1 = 2;
      return;
    }
    uVar6 = *(undefined4 *)(param_2 + 1);
    uVar10 = 0;
    cVar8 = (char)uVar5;
  }
  *(undefined4 *)(param_1 + 1) = uVar6;
  param_1[5] = cVar8;
  *param_1 = uVar10;
  *(ulong *)(param_1 + 6) = CONCAT17((undefined1)uStack_9,local_10);
  *(undefined4 *)(param_1 + 0xd) = uStack_9;
  param_1[0x11] = (char)uVar5;
  return;
}


// ===== 007e2fac  <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::hosts =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::hosts */

void __rustcall <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::hosts(undefined1 *param_1,char *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (*param_2 != '\x01') {
    bVar3 = param_2[5];
    uVar2 = *(uint *)(param_2 + 1);
    *param_1 = 0;
    uVar11 = (uint)bVar3;
    uVar7 = 0x20 - uVar11;
    uVar5 = 0xffffffff >> (ulong)(uVar11 & 0x1f);
    uVar6 = -1 << (ulong)(uVar7 & 0x1f);
    if (0x20 < uVar11 || uVar7 == 0) {
      uVar5 = 0;
    }
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (0x1f < uVar7) {
      uVar6 = 0;
    }
    uVar6 = uVar6 & uVar2;
    uVar5 = uVar5 | uVar2;
    uVar2 = uVar6 + 1;
    uVar7 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    if (uVar6 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar6 = uVar5 - (uVar5 != 0);
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar11 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if (bVar3 < 0x1f) {
      uVar6 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar5 = uVar11 >> 0x10 | uVar11 << 0x10;
    }
    *(ulong *)(param_1 + 1) = CONCAT44(uVar5,uVar6);
    return;
  }
  cVar4 = param_2[0x11];
  uVar10 = (ulong)cVar4;
  uVar6 = -(int)cVar4 - 0x80;
  uVar16 = -1L << ((ulong)uVar6 & 0x3f);
  iVar8 = (int)(char)uVar6;
  uVar12 = 0xffffffffffffffff >> (uVar10 & 0x3f);
  bVar9 = (uVar6 & 0x40) == 0;
  uVar13 = uVar16;
  if (bVar9) {
    uVar13 = uVar16 | 0x7fffffffffffffffU >> ((ulong)((int)cVar4 - 1) & 0x3f);
  }
  uVar15 = 0;
  if (bVar9) {
    uVar15 = uVar16;
  }
  uVar16 = (*(ulong *)(param_2 + 9) & 0xff00ff00ff00ff00) >> 8 |
           (*(ulong *)(param_2 + 9) & 0xff00ff00ff00ff) << 8;
  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
  uVar14 = uVar16 >> 0x20 | uVar16 << 0x20;
  uVar16 = (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff00) >> 8 |
           (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff) << 8;
  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
  uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
  if (iVar8 == -1 || iVar8 + 1 < 0 != SCARRY4(iVar8,1)) {
    uVar13 = 0;
    uVar15 = 0;
  }
  bVar9 = (uVar10 & 0x40) == 0;
  uVar1 = 0;
  if (bVar9) {
    uVar1 = uVar12;
  }
  uVar15 = uVar15 & uVar14;
  if (bVar9) {
    uVar12 = -2L << ((ulong)(uint)~(int)cVar4 & 0x3f) | uVar12;
  }
  uVar13 = uVar13 & uVar16;
  uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar16 = uVar1 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU) | uVar16;
  *(ulong *)(param_1 + 9) = uVar15 >> 0x20 | uVar15 << 0x20;
  uVar14 = uVar12 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU) | uVar14;
  uVar12 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_1 + 1) = uVar13 >> 0x20 | uVar13 << 0x20;
  uVar13 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_1 + 0x11) = uVar12 >> 0x20 | uVar12 << 0x20;
  *(ulong *)(param_1 + 0x19) = uVar13 >> 0x20 | uVar13 << 0x20;
  *param_1 = 1;
  return;
}


// ===== 007e30e4  <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::trunc =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::trunc */

void __rustcall <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::trunc(undefined1 *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uStack_11;
  
  if (*param_2 != '\x01') {
    bVar2 = param_2[5];
    uVar3 = -1 << (ulong)(-(uint)bVar2 & 0x1f);
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (0x1f < 0x20 - bVar2) {
      uVar3 = 0;
    }
    if (bVar2 < 0x21) {
      param_1[5] = bVar2;
      *(uint *)(param_1 + 1) = uVar3 & uVar1;
      *param_1 = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002e625b,0x2b,&uStack_11,&DAT_00ae05f0,
               &PTR_s__root__cargo_registry_src_index__00ae0658);
  }
  bVar2 = param_2[0x11];
  uVar3 = -(uint)bVar2 - 0x80;
  if ((uVar3 >> 7 & 1) == 0) {
    uVar3 = (uint)(char)uVar3;
    uVar6 = -1L << ((long)(int)uVar3 & 0x3fU);
    uVar4 = uVar6;
    uVar5 = 0;
    if (((long)(int)uVar3 & 0x40U) == 0) {
      uVar4 = uVar6 | 0x7fffffffffffffffU >> ((ulong)~uVar3 & 0x3f);
      uVar5 = uVar6;
    }
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = *(ulong *)(param_2 + 9) & (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar5 = *(ulong *)(param_2 + 1) & (uVar6 >> 0x20 | uVar6 << 0x20);
    if (0x80 < bVar2) {
LAB_007e31e0:
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002e625b,0x2b,&uStack_11,&DAT_00ae05f0,
                 &PTR_s__root__cargo_registry_src_index__00ae0688);
    }
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    if (0x80 < bVar2) goto LAB_007e31e0;
  }
  *(ulong *)(param_1 + 1) = uVar5;
  *(ulong *)(param_1 + 9) = uVar4;
  param_1[0x11] = bVar2;
  *param_1 = 1;
  return;
}


// ===== 007e3228  <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::subnets =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::subnets */

void __rustcall
<ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::subnets(undefined1 *param_1,char *param_2,byte param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (*param_2 == '\x01') {
    if (param_3 < 0x81) {
      bVar3 = param_2[0x11];
      if (bVar3 <= param_3) {
        uVar11 = (uint)bVar3;
        uVar5 = -uVar11 - 0x80;
        uVar16 = -1L << ((ulong)uVar5 & 0x3f);
        uVar10 = 0xffffffffffffffff >> ((ulong)bVar3 & 0x3f);
        iVar7 = (int)(char)uVar5;
        iVar8 = (int)(char)bVar3;
        uVar15 = uVar16;
        uVar13 = 0;
        if ((uVar5 & 0x40) == 0) {
          uVar15 = uVar16 | 0x7fffffffffffffffU >> ((ulong)(uVar11 - 1) & 0x3f);
          uVar13 = uVar16;
        }
        bVar9 = iVar7 + 1 < 0;
        uVar16 = (*(ulong *)(param_2 + 9) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_2 + 9) & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
        if (iVar7 == -1 || bVar9 != SCARRY4(iVar7,1)) {
          uVar15 = 0;
        }
        if (iVar7 == -1 || bVar9 != SCARRY4(iVar7,1)) {
          uVar13 = 0;
        }
        bVar9 = (bVar3 & 0x40) == 0;
        uVar4 = (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar13 = uVar16 & uVar13;
        uVar4 = uVar10;
        if (bVar9) {
          uVar4 = -2L << ((ulong)~uVar11 & 0x3f) | uVar10;
        }
        uVar1 = 0;
        if (bVar9) {
          uVar1 = uVar10;
        }
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar14 & uVar15;
        if (iVar8 == -1 || iVar8 + 1 < 0 != SCARRY4(iVar8,1)) {
          uVar1 = 0;
          uVar4 = 0;
        }
        *(ulong *)(param_1 + 9) = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar14 = uVar14 | uVar1;
        uVar16 = uVar16 | uVar4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar13 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar10 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        *param_1 = 1;
        *(ulong *)(param_1 + 1) = uVar15 >> 0x20 | uVar15 << 0x20;
        *(ulong *)(param_1 + 0x11) = uVar13 >> 0x20 | uVar13 << 0x20;
        *(ulong *)(param_1 + 0x19) = uVar10 >> 0x20 | uVar10 << 0x20;
        param_1[0x21] = param_3;
        return;
      }
    }
  }
  else if ((param_3 < 0x21) && ((byte)param_2[5] <= param_3)) {
    uVar2 = *(uint *)(param_2 + 1);
    uVar12 = (uint)(byte)param_2[5];
    uVar6 = 0x20 - uVar12;
    uVar5 = 0xffffffff >> (ulong)(uVar12 & 0x1f);
    *param_1 = 0;
    uVar11 = -1 << (ulong)(uVar6 & 0x1f);
    param_1[9] = param_3;
    if (0x20 < uVar12 || uVar6 == 0) {
      uVar5 = 0;
    }
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (0x1f < uVar6) {
      uVar11 = 0;
    }
    uVar15 = CONCAT44(uVar2 & uVar11,uVar2 | uVar5);
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 1) = uVar15 >> 0x20 | uVar15 << 0x20;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 007e3378  <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::supernet =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::supernet */

void __rustcall
<ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::supernet(undefined1 *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*param_2 == '\x01') {
    uVar6 = (byte)param_2[0x11] - 1;
    if ((uVar6 & 0xff) < 0x81) {
      uVar7 = -(uint)(byte)param_2[0x11] - 0x7f;
      uVar5 = (undefined1)uVar6;
      if ((uVar7 >> 7 & 1) != 0) {
        *(undefined8 *)(param_1 + 1) = 0;
        *param_1 = 1;
        *(undefined8 *)(param_1 + 9) = 0;
        param_1[0x11] = uVar5;
        return;
      }
      uVar6 = (uint)(char)uVar7;
      uVar9 = -1L << ((long)(int)uVar6 & 0x3fU);
      uVar8 = *(ulong *)(param_2 + 9);
      uVar3 = uVar9;
      uVar4 = 0;
      if (((long)(int)uVar6 & 0x40U) == 0) {
        uVar3 = uVar9 | 0x7fffffffffffffffU >> ((ulong)~uVar6 & 0x3f);
        uVar4 = uVar9;
      }
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_1 + 1) = *(ulong *)(param_2 + 1) & (uVar3 >> 0x20 | uVar3 << 0x20);
      *param_1 = 1;
      *(ulong *)(param_1 + 9) = uVar8 & (uVar4 >> 0x20 | uVar4 << 0x20);
      param_1[0x11] = uVar5;
      return;
    }
  }
  else {
    bVar1 = param_2[5];
    uVar6 = bVar1 - 1;
    if (uVar6 < 0x21) {
      uVar7 = *(uint *)(param_2 + 1);
      *param_1 = 0;
      uVar2 = -1 << (ulong)(0x21 - bVar1 & 0x1f);
      param_1[5] = (char)uVar6;
      uVar6 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if (bVar1 < 2) {
        uVar6 = 0;
      }
      *(uint *)(param_1 + 1) = uVar7 & uVar6;
      return;
    }
  }
  *param_1 = 2;
  return;
}


// ===== 007e3468  <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::aggregate =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::aggregate */

void __rustcall <ipnet::ipnet::[0]::ipnet::ipnet::IpNet>::aggregate(long *param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_f0;
  undefined1 *local_e8;
  long local_e0;
  long local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long local_88;
  long lStack_80;
  long local_78;
  void *local_70;
  ulong uStack_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  long lStack_48;
  
  local_f0 = 0;
  local_e8 = &DAT_00000001;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = &DAT_00000001;
  local_c8 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar4 = *(long *)(param_2 + 0x10) * 0x12;
    plVar6 = (long *)(*(long *)(param_2 + 8) + 1);
    do {
      while (lVar7 = local_c8, lVar5 = local_e0, (*plVar6 & 0x100000000000000) != 0) {
        lStack_58 = plVar6[1];
        local_60 = *plVar6;
        local_50 = CONCAT71(local_50._1_7_,(char)plVar6[2]);
        if (local_c8 == local_d8) {
                    /* try { // try from 007e3508 to 007e3563 has its CatchHandler @ 007e37ac */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<ipnet::ipnet::Ipv6Net>>::grow_one(&local_d8);
        }
        plVar1 = (long *)(local_d0 + lVar7 * 0x11);
        local_c8 = lVar7 + 1;
        plVar1[1] = lStack_58;
        *plVar1 = local_60;
        *(undefined1 *)(plVar1 + 2) = (undefined1)local_50;
        lVar4 = lVar4 + -0x12;
        plVar6 = (long *)((long)plVar6 + 0x12);
        if (lVar4 == 0) goto LAB_007e3568;
      }
      uVar2 = *(undefined1 *)((long)plVar6 + 4);
      lVar7 = *plVar6;
      if (local_e0 == local_f0) {
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<ipnet::ipnet::Ipv4Net>>::grow_one(&local_f0);
      }
      *(int *)(local_e8 + lVar5 * 5) = (int)lVar7;
      local_e0 = lVar5 + 1;
      *(undefined1 *)((long)(local_e8 + lVar5 * 5) + 4) = uVar2;
      lVar4 = lVar4 + -0x12;
      plVar6 = (long *)((long)plVar6 + 0x12);
    } while (lVar4 != 0);
  }
LAB_007e3568:
  local_b0 = 0;
  local_c0 = 0;
  lStack_b8 = 1;
                    /* try { // try from 007e3574 to 007e357f has its CatchHandler @ 007e3788 */
  <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::aggregate(&local_a8,&local_f0);
                    /* try { // try from 007e3580 to 007e358b has its CatchHandler @ 007e3768 */
  <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::aggregate(&local_90,&local_d8);
  local_60 = local_a0;
  lStack_58 = local_a0;
  lStack_48 = local_a0 + lStack_98 * 5;
  local_50 = local_a8;
                    /* try { // try from 007e35a4 to 007e35af has its CatchHandler @ 007e3750 */
  FUN_007e774c(&local_78,&local_60);
  uVar3 = uStack_68;
  __src = local_70;
  lVar4 = local_78;
  if (uStack_68 == 0) {
    lVar7 = 1;
    lVar5 = 0;
  }
  else {
                    /* try { // try from 007e36b0 to 007e36c7 has its CatchHandler @ 007e372c */
    FUN_007e7478(&local_c0,0,uStack_68,1,0x12);
    lVar5 = local_b0;
    lVar7 = lStack_b8;
    memcpy((void *)(lStack_b8 + local_b0 * 0x12),__src,uVar3 * 0x12);
    lVar5 = lVar5 + uVar3;
  }
  local_b0 = lVar5;
  if (lVar4 != 0) {
    free(__src);
  }
  local_60 = local_88;
  lStack_58 = local_88;
  lStack_48 = local_88 + lStack_80 * 0x11;
  local_50 = local_90;
                    /* try { // try from 007e35f8 to 007e3603 has its CatchHandler @ 007e374c */
  FUN_007e788c(&local_78,&local_60);
  if ((ulong)(local_c0 - lVar5) < uStack_68) {
                    /* try { // try from 007e36f4 to 007e370b has its CatchHandler @ 007e3714 */
    FUN_007e7478(&local_c0,lVar5,uStack_68,1,0x12);
    lVar5 = local_b0;
    lVar7 = lStack_b8;
  }
  else if (uStack_68 == 0) goto LAB_007e3638;
  memcpy((void *)(lVar7 + lVar5 * 0x12),local_70,uStack_68 * 0x12);
LAB_007e3638:
  local_b0 = lVar5 + uStack_68;
  if (local_78 != 0) {
    free(local_70);
  }
  param_1[1] = lStack_b8;
  *param_1 = local_c0;
  param_1[2] = local_b0;
  if (local_d8 != 0) {
    free(local_d0);
  }
  if (local_f0 != 0) {
    free(local_e8);
  }
  return;
}


// ===== 007e37f8  <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::is_sibling =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::is_sibling */

bool __rustcall <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::is_sibling(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  bVar1 = (byte)param_1[1];
  bVar6 = false;
  if ((bVar1 != 0) && (bVar1 == (byte)param_2[1])) {
    uVar7 = (uint)bVar1;
    uVar5 = uVar7 - 1;
    if (0x20 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ae0640);
    }
    uVar8 = (uint)bVar1;
    uVar2 = -1 << (ulong)(0x21 - uVar7 & 0x1f);
    uVar3 = -1 << (ulong)(-uVar8 & 0x1f);
    bVar6 = false;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (uVar7 < 2) {
      uVar2 = 0;
    }
    uVar7 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar4 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (*param_1 & uVar2 & 0xff00ff00) >> 8 | (*param_1 & uVar2 & 0xff00ff) << 8;
    uVar2 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = 0;
    if ((uVar5 & 0xff) != 0) {
      uVar7 = -1 << (ulong)(-(uVar5 & 0xff) & 0x1f);
    }
    if (0x20 < uVar8) {
      uVar3 = 0;
    }
    if ((uVar2 & uVar7) <= (uVar4 & uVar3)) {
      uVar7 = 0xffffffff >> (ulong)(uVar8 & 0x1f);
      if (0x1f < uVar8) {
        uVar7 = 0;
      }
      uVar3 = 0;
      if ((uVar5 & 0xff) != 0x20) {
        uVar3 = 0xffffffff >> (ulong)(uVar5 & 0x1f);
      }
      bVar6 = (uVar4 | uVar7) <= (uVar2 | uVar3);
    }
  }
  return bVar6;
}


// ===== 007e38dc  <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::trunc =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::trunc */

ulong __rustcall <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::trunc(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 uStack_11;
  
  bVar1 = (byte)param_1[1];
  uVar2 = -1 << (ulong)(-(uint)bVar1 & 0x1f);
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (0x1f < 0x20 - bVar1) {
    uVar2 = 0;
  }
  if (bVar1 < 0x21) {
    return ((ulong)(uVar2 & *param_1) << 8 | (ulong)bVar1 << 0x28) >> 8;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002e625b,0x2b,&uStack_11,&DAT_00ae05f0,
             &PTR_s__root__cargo_registry_src_index__00ae0658);
}


// ===== 007e3954  <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::supernet =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::supernet */

ulong __rustcall <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::supernet(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = (byte)param_1[1];
  uVar3 = bVar1 - 1;
  if (0x20 < uVar3) {
    return (ulong)uVar3 << 8;
  }
  uVar2 = -1 << (ulong)(0x21 - bVar1 & 0x1f);
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (bVar1 < 2) {
    uVar2 = 0;
  }
  return CONCAT44(uVar3,*param_1 & uVar2) << 8 | 1;
}


// ===== 007e39a8  <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::aggregate =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::aggregate */

void __rustcall <ipnet::ipnet::[7]::ipnet::ipnet::Ipv4Net>::aggregate(ulong *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  uint5 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  byte *pbVar26;
  long lVar27;
  undefined1 *puVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  uint uVar35;
  uint *puVar36;
  uint *puVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar52 [12];
  undefined1 in_q4 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  byte bVar85;
  undefined1 auVar84 [16];
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  ulong local_a8;
  uint *local_a0;
  uint local_8c;
  uint local_88;
  byte local_84;
  ulong local_80;
  uint *puStack_78;
  ulong local_70;
  undefined1 uStack_61;
  
  uVar32 = *(ulong *)(param_2 + 0x10);
  uVar33 = uVar32 * 8;
  if (0x7ffffffffffffffc < uVar33) {
    uVar34 = 0;
LAB_007e39e0:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar34,uVar33);
  }
  puVar36 = *(uint **)(param_2 + 8);
  if (uVar33 == 0) {
    local_a0 = (uint *)&DAT_00000004;
    local_a8 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar34 = 4;
    local_a0 = (uint *)FUN_004b25a4(uVar33,4);
    local_a8 = uVar32;
    if (local_a0 == (uint *)0x0) goto LAB_007e39e0;
  }
  if (uVar32 == 0) {
    local_70 = 0;
    local_80 = 0;
    puStack_78 = (uint *)0x1;
    goto LAB_007e40b4;
  }
  if ((uVar32 < 5) ||
     ((local_a0 < (uint *)((long)puVar36 + uVar32 * 5) && (puVar36 < local_a0 + uVar32 * 2)))) {
    lVar23 = 0;
  }
  else {
    if (uVar32 < 0x11) {
      lVar23 = 0;
    }
    else {
      uVar33 = 0x10;
      if ((uVar32 & 0xf) != 0) {
        uVar33 = uVar32 & 0xf;
      }
      pbVar26 = (byte *)((long)puVar36 + 0x27);
      lVar23 = uVar32 - uVar33;
      puVar25 = local_a0;
      uVar29 = uVar32;
      do {
        bVar42 = pbVar26[-0x1e];
        bVar43 = pbVar26[-0x19];
        bVar44 = pbVar26[-0x14];
        bVar45 = pbVar26[-10];
        bVar46 = pbVar26[-5];
        bVar38 = *pbVar26;
        bVar85 = pbVar26[10];
        auVar68[1] = bVar42;
        auVar68[0] = pbVar26[-0x23];
        bVar6 = pbVar26[0xf];
        bVar7 = pbVar26[0x14];
        pbVar4 = pbVar26 + 0x19;
        bVar39 = pbVar26[0x1e];
        bVar40 = pbVar26[0x23];
        auVar53._0_4_ = *(undefined4 *)(pbVar26 + 0x15);
        auVar71._0_4_ = CONCAT31(0,pbVar26[-0x23]);
        auVar71[4] = bVar42;
        auVar71._5_3_ = 0;
        auVar68[2] = bVar43;
        auVar53._4_4_ = *(undefined4 *)(pbVar26 + 0x1a);
        bVar41 = pbVar26[0x28];
        auVar96._0_4_ = CONCAT31(0,pbVar26[-0xf]);
        auVar96[4] = bVar45;
        auVar96._5_3_ = 0;
        auVar78._0_4_ = *(undefined4 *)(pbVar26 + -0x27);
        auVar76._0_4_ = *(undefined4 *)(pbVar26 + -0x13);
        auVar71[8] = bVar43;
        auVar62._0_4_ = CONCAT31(0,pbVar26[5]);
        auVar62[4] = bVar85;
        auVar62._5_3_ = 0;
        auVar78._4_4_ = *(undefined4 *)(pbVar26 + -0x22);
        auVar68[3] = bVar44;
        auVar74._0_4_ = *(undefined4 *)(pbVar26 + 1);
        auVar96[8] = bVar46;
        auVar76._4_4_ = *(undefined4 *)(pbVar26 + -0xe);
        auVar58._0_4_ = CONCAT31(0,*pbVar4);
        auVar58[4] = bVar39;
        auVar58._5_3_ = 0;
        auVar78._8_4_ = *(undefined4 *)(pbVar26 + -0x1d);
        auVar74._4_4_ = *(undefined4 *)(pbVar26 + 6);
        auVar71._9_3_ = 0;
        auVar71[0xc] = bVar44;
        auVar71._13_3_ = 0;
        auVar62[8] = bVar6;
        auVar68[4] = pbVar26[-0xf];
        auVar96._9_3_ = 0;
        auVar96[0xc] = bVar38;
        auVar96._13_3_ = 0;
        auVar78._12_4_ = *(undefined4 *)(pbVar26 + -0x18);
        auVar74._8_4_ = *(undefined4 *)(pbVar26 + 0xb);
        auVar58[8] = bVar40;
        pbVar3 = pbVar26 + 0x24;
        uVar29 = uVar29 - 0x10;
        auVar57 = NEON_neg(auVar71,4);
        auVar72._0_4_ = 0x20 - auVar71._0_4_;
        auVar72._4_4_ = 0x20 - (uint)bVar42;
        auVar72._8_4_ = 0x20 - (uint)bVar43;
        auVar72._12_4_ = 0x20 - (uint)bVar44;
        auVar62._9_3_ = 0;
        auVar62[0xc] = bVar7;
        auVar62._13_3_ = 0;
        auVar68[5] = bVar45;
        auVar79 = NEON_rev32(auVar78,1);
        auVar61 = NEON_neg(auVar96,4);
        auVar65._0_4_ = 0x20 - auVar96._0_4_;
        auVar65._4_4_ = 0x20 - (uint)bVar45;
        auVar65._8_4_ = 0x20 - (uint)bVar46;
        auVar65._12_4_ = 0x20 - (uint)bVar38;
        auVar74._12_4_ = *(undefined4 *)(pbVar26 + 0x10);
        auVar70._8_4_ = 0xffffffff;
        auVar70._0_8_ = 0xffffffffffffffff;
        auVar70._12_4_ = 0xffffffff;
        auVar64 = NEON_ushl(auVar70,auVar57,4);
        auVar57[8] = 0x20;
        auVar57._0_8_ = 0x2000000020;
        auVar57._9_3_ = 0;
        auVar57[0xc] = 0x20;
        auVar57._13_3_ = 0;
        auVar95 = NEON_cmhi(auVar57,auVar72,4);
        auVar69._8_4_ = 0xffffffff;
        auVar69._0_8_ = 0xffffffffffffffff;
        auVar69._12_4_ = 0xffffffff;
        auVar73 = NEON_ushl(auVar69,auVar72,4);
        auVar58._9_3_ = 0;
        auVar58[0xc] = bVar41;
        auVar58._13_3_ = 0;
        auVar68[6] = bVar46;
        auVar75._8_4_ = 0xffffffff;
        auVar75._0_8_ = 0xffffffffffffffff;
        auVar75._12_4_ = 0xffffffff;
        auVar67 = NEON_ushl(auVar75,auVar61,4);
        auVar75 = NEON_rev32(auVar74,1);
        auVar61[8] = 0x20;
        auVar61._0_8_ = 0x2000000020;
        auVar61._9_3_ = 0;
        auVar61[0xc] = 0x20;
        auVar61._13_3_ = 0;
        auVar96 = NEON_cmhi(auVar61,auVar65,4);
        auVar77._8_4_ = 0xffffffff;
        auVar77._0_8_ = 0xffffffffffffffff;
        auVar77._12_4_ = 0xffffffff;
        auVar70 = NEON_ushl(auVar77,auVar65,4);
        auVar97 = NEON_neg(auVar58,4);
        auVar59._0_4_ = 0x20 - auVar58._0_4_;
        auVar59._4_4_ = 0x20 - (uint)bVar39;
        auVar59._8_4_ = 0x20 - (uint)bVar40;
        auVar59._12_4_ = 0x20 - (uint)bVar41;
        auVar68[7] = bVar38;
        auVar68[8] = pbVar26[5];
        auVar76._8_4_ = *(undefined4 *)(pbVar26 + -9);
        auVar68[9] = bVar85;
        auVar76._12_4_ = *(undefined4 *)(pbVar26 + -4);
        auVar53._8_4_ = *(undefined4 *)(pbVar26 + 0x1f);
        pbVar26 = pbVar26 + 0x50;
        auVar77 = NEON_rev32(auVar76,1);
        auVar68[10] = bVar6;
        auVar53._12_4_ = *(undefined4 *)pbVar3;
        auVar57 = NEON_rev32(auVar53,1);
        auVar68[0xb] = bVar7;
        auVar68[0xc] = *pbVar4;
        auVar68[0xd] = bVar39;
        auVar68[0xe] = bVar40;
        auVar68[0xf] = bVar41;
        auVar98[8] = 0x20;
        auVar98._0_8_ = 0x2020202020202020;
        auVar98[9] = 0x20;
        auVar98[10] = 0x20;
        auVar98[0xb] = 0x20;
        auVar98[0xc] = 0x20;
        auVar98[0xd] = 0x20;
        auVar98[0xe] = 0x20;
        auVar98[0xf] = 0x20;
        auVar69 = NEON_cmhi(auVar98,auVar68,1);
        bVar38 = auVar69[0];
        bVar40 = auVar69[1];
        bVar42 = auVar69[2];
        bVar44 = auVar69[3];
        bVar46 = auVar69[4];
        bVar48 = auVar69[5];
        bVar50 = auVar69[6];
        bVar39 = auVar69[8];
        bVar41 = auVar69[9];
        bVar43 = auVar69[10];
        bVar45 = auVar69[0xb];
        bVar47 = auVar69[0xc];
        bVar49 = auVar69[0xd];
        bVar51 = auVar69[0xe];
        iVar16 = 0x20 - (uint)bVar85;
        uVar86 = (undefined1)((uint)iVar16 >> 8);
        uVar87 = (undefined1)((uint)iVar16 >> 0x10);
        uVar88 = (undefined1)((uint)iVar16 >> 0x18);
        iVar2 = 0x20 - (uint)bVar6;
        uVar89 = (undefined1)((uint)iVar2 >> 8);
        uVar90 = (undefined1)((uint)iVar2 >> 0x10);
        uVar91 = (undefined1)((uint)iVar2 >> 0x18);
        iVar17 = 0x20 - (uint)bVar7;
        uVar92 = (undefined1)((uint)iVar17 >> 8);
        uVar93 = (undefined1)((uint)iVar17 >> 0x10);
        uVar94 = (undefined1)((uint)iVar17 >> 0x18);
        auVar61 = NEON_neg(auVar62,4);
        bVar85 = (char)auVar69[7] >> 7;
        auVar82[0] = bVar38 & auVar64[0] | auVar79[0];
        auVar82[1] = (char)bVar38 >> 7 & auVar64[1] | auVar79[1];
        auVar82[2] = (byte)((short)(char)bVar38 >> 0xf) & auVar64[2] | auVar79[2];
        auVar82[3] = (byte)((short)(char)bVar38 >> 0xf) & auVar64[3] | auVar79[3];
        auVar82[4] = bVar40 & auVar64[4] | auVar79[4];
        auVar82[5] = (char)bVar40 >> 7 & auVar64[5] | auVar79[5];
        auVar82[6] = (byte)((short)(char)bVar40 >> 0xf) & auVar64[6] | auVar79[6];
        auVar82[7] = (byte)((short)(char)bVar40 >> 0xf) & auVar64[7] | auVar79[7];
        auVar82[8] = bVar42 & auVar64[8] | auVar79[8];
        auVar82[9] = (char)bVar42 >> 7 & auVar64[9] | auVar79[9];
        auVar82[10] = (byte)((short)(char)bVar42 >> 0xf) & auVar64[10] | auVar79[10];
        auVar82[0xb] = (byte)((short)(char)bVar42 >> 0xf) & auVar64[0xb] | auVar79[0xb];
        auVar82[0xc] = bVar44 & auVar64[0xc] | auVar79[0xc];
        auVar82[0xd] = (char)bVar44 >> 7 & auVar64[0xd] | auVar79[0xd];
        auVar82[0xe] = (byte)((short)(char)bVar44 >> 0xf) & auVar64[0xe] | auVar79[0xe];
        auVar82[0xf] = (byte)((short)(char)bVar44 >> 0xf) & auVar64[0xf] | auVar79[0xf];
        auVar64[8] = 0x20;
        auVar64._0_8_ = 0x2000000020;
        auVar64._9_3_ = 0;
        auVar64[0xc] = 0x20;
        auVar64._13_3_ = 0;
        auVar14[4] = (char)iVar16;
        auVar14._0_4_ = 0x20 - auVar62._0_4_;
        auVar14[5] = uVar86;
        auVar14[6] = uVar87;
        auVar14[7] = uVar88;
        auVar14[8] = (char)iVar2;
        auVar14[9] = uVar89;
        auVar14[10] = uVar90;
        auVar14[0xb] = uVar91;
        auVar14[0xc] = (char)iVar17;
        auVar14[0xd] = uVar92;
        auVar14[0xe] = uVar93;
        auVar14[0xf] = uVar94;
        auVar98 = NEON_cmhi(auVar64,auVar14,4);
        auVar80._8_4_ = 0xffffffff;
        auVar80._0_8_ = 0xffffffffffffffff;
        auVar80._12_4_ = 0xffffffff;
        auVar64 = NEON_ushl(auVar80,auVar61,4);
        auVar81._8_4_ = 0xffffffff;
        auVar81._0_8_ = 0xffffffffffffffff;
        auVar81._12_4_ = 0xffffffff;
        auVar15[4] = (char)iVar16;
        auVar15._0_4_ = 0x20 - auVar62._0_4_;
        auVar15[5] = uVar86;
        auVar15[6] = uVar87;
        auVar15[7] = uVar88;
        auVar15[8] = (char)iVar2;
        auVar15[9] = uVar89;
        auVar15[10] = uVar90;
        auVar15[0xb] = uVar91;
        auVar15[0xc] = (char)iVar17;
        auVar15[0xd] = uVar92;
        auVar15[0xe] = uVar93;
        auVar15[0xf] = uVar94;
        auVar80 = NEON_ushl(auVar81,auVar15,4);
        auVar99._8_4_ = 1;
        auVar99._0_8_ = 0x100000001;
        auVar99._12_4_ = 1;
        auVar99 = NEON_uqadd(auVar82,auVar99,4);
        auVar83[0] = bVar46 & auVar67[0] | auVar77[0];
        auVar83[1] = (char)bVar46 >> 7 & auVar67[1] | auVar77[1];
        auVar83[2] = (byte)((short)(char)bVar46 >> 0xf) & auVar67[2] | auVar77[2];
        auVar83[3] = (byte)((short)(char)bVar46 >> 0xf) & auVar67[3] | auVar77[3];
        auVar83[4] = bVar48 & auVar67[4] | auVar77[4];
        auVar83[5] = (char)bVar48 >> 7 & auVar67[5] | auVar77[5];
        auVar83[6] = (byte)((short)(char)bVar48 >> 0xf) & auVar67[6] | auVar77[6];
        auVar83[7] = (byte)((short)(char)bVar48 >> 0xf) & auVar67[7] | auVar77[7];
        auVar83[8] = bVar50 & auVar67[8] | auVar77[8];
        auVar83[9] = (char)bVar50 >> 7 & auVar67[9] | auVar77[9];
        auVar83[10] = (byte)((short)(char)bVar50 >> 0xf) & auVar67[10] | auVar77[10];
        auVar83[0xb] = (byte)((short)(char)bVar50 >> 0xf) & auVar67[0xb] | auVar77[0xb];
        auVar83[0xc] = auVar69[7] & auVar67[0xc] | auVar77[0xc];
        auVar83[0xd] = bVar85 & auVar67[0xd] | auVar77[0xd];
        auVar83[0xe] = bVar85 & auVar67[0xe] | auVar77[0xe];
        auVar83[0xf] = bVar85 & auVar67[0xf] | auVar77[0xf];
        auVar84._8_4_ = 0xffffffff;
        auVar84._0_8_ = 0xffffffffffffffff;
        auVar84._12_4_ = 0xffffffff;
        auVar84 = NEON_ushl(auVar84,auVar97,4);
        auVar67[8] = 0x20;
        auVar67._0_8_ = 0x2000000020;
        auVar67._9_3_ = 0;
        auVar67[0xc] = 0x20;
        auVar67._13_3_ = 0;
        auVar67 = NEON_cmhi(auVar67,auVar59,4);
        auVar97._8_4_ = 0xffffffff;
        auVar97._0_8_ = 0xffffffffffffffff;
        auVar97._12_4_ = 0xffffffff;
        auVar61 = NEON_ushl(auVar97,auVar59,4);
        auVar13._8_4_ = 1;
        auVar13._0_8_ = 0x100000001;
        auVar13._12_4_ = 1;
        auVar81 = NEON_uqadd(auVar83,auVar13,4);
        auVar63[0] = bVar39 & auVar64[0] | auVar75[0];
        auVar63[1] = (char)bVar39 >> 7 & auVar64[1] | auVar75[1];
        auVar63[2] = (byte)((short)(char)bVar39 >> 0xf) & auVar64[2] | auVar75[2];
        auVar63[3] = (byte)((short)(char)bVar39 >> 0xf) & auVar64[3] | auVar75[3];
        auVar63[4] = bVar41 & auVar64[4] | auVar75[4];
        auVar63[5] = (char)bVar41 >> 7 & auVar64[5] | auVar75[5];
        auVar63[6] = (byte)((short)(char)bVar41 >> 0xf) & auVar64[6] | auVar75[6];
        auVar63[7] = (byte)((short)(char)bVar41 >> 0xf) & auVar64[7] | auVar75[7];
        auVar63[8] = bVar43 & auVar64[8] | auVar75[8];
        auVar63[9] = (char)bVar43 >> 7 & auVar64[9] | auVar75[9];
        auVar63[10] = (byte)((short)(char)bVar43 >> 0xf) & auVar64[10] | auVar75[10];
        auVar63[0xb] = (byte)((short)(char)bVar43 >> 0xf) & auVar64[0xb] | auVar75[0xb];
        auVar63[0xc] = bVar45 & auVar64[0xc] | auVar75[0xc];
        auVar63[0xd] = (char)bVar45 >> 7 & auVar64[0xd] | auVar75[0xd];
        auVar63[0xe] = (byte)((short)(char)bVar45 >> 0xf) & auVar64[0xe] | auVar75[0xe];
        auVar63[0xf] = (byte)((short)(char)bVar45 >> 0xf) & auVar64[0xf] | auVar75[0xf];
        bVar38 = (char)auVar69[0xf] >> 7;
        *puVar25 = CONCAT13(auVar95[3] & auVar73[3] & auVar79[3],
                            CONCAT12(auVar95[2] & auVar73[2] & auVar79[2],
                                     CONCAT11(auVar95[1] & auVar73[1] & auVar79[1],
                                              auVar95[0] & auVar73[0] & auVar79[0])));
        puVar25[1] = auVar99._0_4_;
        puVar25[2] = CONCAT13(auVar95[7] & auVar73[7] & auVar79[7],
                              CONCAT12(auVar95[6] & auVar73[6] & auVar79[6],
                                       CONCAT11(auVar95[5] & auVar73[5] & auVar79[5],
                                                auVar95[4] & auVar73[4] & auVar79[4])));
        puVar25[3] = auVar99._4_4_;
        puVar25[4] = CONCAT13(auVar95[0xb] & auVar73[0xb] & auVar79[0xb],
                              CONCAT12(auVar95[10] & auVar73[10] & auVar79[10],
                                       CONCAT11(auVar95[9] & auVar73[9] & auVar79[9],
                                                auVar95[8] & auVar73[8] & auVar79[8])));
        puVar25[5] = auVar99._8_4_;
        puVar25[6] = CONCAT13(auVar95[0xf] & auVar73[0xf] & auVar79[0xf],
                              CONCAT12(auVar95[0xe] & auVar73[0xe] & auVar79[0xe],
                                       CONCAT11(auVar95[0xd] & auVar73[0xd] & auVar79[0xd],
                                                auVar95[0xc] & auVar73[0xc] & auVar79[0xc])));
        puVar25[7] = auVar99._12_4_;
        auVar73._8_4_ = 1;
        auVar73._0_8_ = 0x100000001;
        auVar73._12_4_ = 1;
        auVar64 = NEON_uqadd(auVar63,auVar73,4);
        auVar95[0] = bVar47 & auVar84[0] | auVar57[0];
        auVar95[1] = (char)bVar47 >> 7 & auVar84[1] | auVar57[1];
        auVar95[2] = (byte)((short)(char)bVar47 >> 0xf) & auVar84[2] | auVar57[2];
        auVar95[3] = (byte)((short)(char)bVar47 >> 0xf) & auVar84[3] | auVar57[3];
        auVar95[4] = bVar49 & auVar84[4] | auVar57[4];
        auVar95[5] = (char)bVar49 >> 7 & auVar84[5] | auVar57[5];
        auVar95[6] = (byte)((short)(char)bVar49 >> 0xf) & auVar84[6] | auVar57[6];
        auVar95[7] = (byte)((short)(char)bVar49 >> 0xf) & auVar84[7] | auVar57[7];
        auVar95[8] = bVar51 & auVar84[8] | auVar57[8];
        auVar95[9] = (char)bVar51 >> 7 & auVar84[9] | auVar57[9];
        auVar95[10] = (byte)((short)(char)bVar51 >> 0xf) & auVar84[10] | auVar57[10];
        auVar95[0xb] = (byte)((short)(char)bVar51 >> 0xf) & auVar84[0xb] | auVar57[0xb];
        auVar95[0xc] = auVar69[0xf] & auVar84[0xc] | auVar57[0xc];
        auVar95[0xd] = bVar38 & auVar84[0xd] | auVar57[0xd];
        auVar95[0xe] = bVar38 & auVar84[0xe] | auVar57[0xe];
        auVar95[0xf] = bVar38 & auVar84[0xf] | auVar57[0xf];
        uVar22 = CONCAT13(auVar67[3] & auVar61[3] & auVar57[3],
                          CONCAT12(auVar67[2] & auVar61[2] & auVar57[2],
                                   CONCAT11(auVar67[1] & auVar61[1] & auVar57[1],
                                            auVar67[0] & auVar61[0] & auVar57[0])));
        auVar52._0_8_ =
             CONCAT17(auVar67[7] & auVar61[7] & auVar57[7],
                      CONCAT16(auVar67[6] & auVar61[6] & auVar57[6],
                               CONCAT15(auVar67[5] & auVar61[5] & auVar57[5],
                                        CONCAT14(auVar67[4] & auVar61[4] & auVar57[4],uVar22))));
        auVar52[8] = auVar67[8] & auVar61[8] & auVar57[8];
        auVar52[9] = auVar67[9] & auVar61[9] & auVar57[9];
        auVar52[10] = auVar67[10] & auVar61[10] & auVar57[10];
        auVar52[0xb] = auVar67[0xb] & auVar61[0xb] & auVar57[0xb];
        in_q4[0xc] = auVar67[0xc] & auVar61[0xc] & auVar57[0xc];
        in_q4._0_12_ = auVar52;
        in_q4[0xd] = auVar67[0xd] & auVar61[0xd] & auVar57[0xd];
        in_q4[0xe] = auVar67[0xe] & auVar61[0xe] & auVar57[0xe];
        in_q4[0xf] = auVar67[0xf] & auVar61[0xf] & auVar57[0xf];
        *(byte *)(puVar25 + 8) = auVar96[0] & auVar70[0] & auVar77[0];
        *(byte *)((long)puVar25 + 0x21) = auVar96[1] & auVar70[1] & auVar77[1];
        *(byte *)((long)puVar25 + 0x22) = auVar96[2] & auVar70[2] & auVar77[2];
        *(byte *)((long)puVar25 + 0x23) = auVar96[3] & auVar70[3] & auVar77[3];
        puVar25[9] = auVar81._0_4_;
        *(byte *)(puVar25 + 0xb) = auVar96[4] & auVar70[4] & auVar77[4];
        *(byte *)((long)puVar25 + 0x2d) = auVar96[5] & auVar70[5] & auVar77[5];
        *(byte *)((long)puVar25 + 0x2e) = auVar96[6] & auVar70[6] & auVar77[6];
        *(byte *)((long)puVar25 + 0x2f) = auVar96[7] & auVar70[7] & auVar77[7];
        puVar25[0xb] = auVar81._4_4_;
        *(byte *)(puVar25 + 0xe) = auVar96[8] & auVar70[8] & auVar77[8];
        *(byte *)((long)puVar25 + 0x39) = auVar96[9] & auVar70[9] & auVar77[9];
        *(byte *)((long)puVar25 + 0x3a) = auVar96[10] & auVar70[10] & auVar77[10];
        *(byte *)((long)puVar25 + 0x3b) = auVar96[0xb] & auVar70[0xb] & auVar77[0xb];
        puVar25[0xd] = auVar81._8_4_;
        *(byte *)(puVar25 + 0x11) = auVar96[0xc] & auVar70[0xc] & auVar77[0xc];
        *(byte *)((long)puVar25 + 0x45) = auVar96[0xd] & auVar70[0xd] & auVar77[0xd];
        *(byte *)((long)puVar25 + 0x46) = auVar96[0xe] & auVar70[0xe] & auVar77[0xe];
        *(byte *)((long)puVar25 + 0x47) = auVar96[0xf] & auVar70[0xf] & auVar77[0xf];
        puVar25[0xf] = auVar81._12_4_;
        auVar79._8_4_ = 1;
        auVar79._0_8_ = 0x100000001;
        auVar79._12_4_ = 1;
        auVar57 = NEON_uqadd(auVar95,auVar79,4);
        *(byte *)(puVar25 + 0x10) = auVar98[0] & auVar80[0] & auVar75[0];
        *(byte *)((long)puVar25 + 0x41) = auVar98[1] & auVar80[1] & auVar75[1];
        *(byte *)((long)puVar25 + 0x42) = auVar98[2] & auVar80[2] & auVar75[2];
        *(byte *)((long)puVar25 + 0x43) = auVar98[3] & auVar80[3] & auVar75[3];
        puVar25[0x11] = auVar64._0_4_;
        *(byte *)(puVar25 + 0x13) = auVar98[4] & auVar80[4] & auVar75[4];
        *(byte *)((long)puVar25 + 0x4d) = auVar98[5] & auVar80[5] & auVar75[5];
        *(byte *)((long)puVar25 + 0x4e) = auVar98[6] & auVar80[6] & auVar75[6];
        *(byte *)((long)puVar25 + 0x4f) = auVar98[7] & auVar80[7] & auVar75[7];
        puVar25[0x13] = auVar64._4_4_;
        *(byte *)(puVar25 + 0x16) = auVar98[8] & auVar80[8] & auVar75[8];
        *(byte *)((long)puVar25 + 0x59) = auVar98[9] & auVar80[9] & auVar75[9];
        *(byte *)((long)puVar25 + 0x5a) = auVar98[10] & auVar80[10] & auVar75[10];
        *(byte *)((long)puVar25 + 0x5b) = auVar98[0xb] & auVar80[0xb] & auVar75[0xb];
        puVar25[0x15] = auVar64._8_4_;
        *(byte *)(puVar25 + 0x19) = auVar98[0xc] & auVar80[0xc] & auVar75[0xc];
        *(byte *)((long)puVar25 + 0x65) = auVar98[0xd] & auVar80[0xd] & auVar75[0xd];
        *(byte *)((long)puVar25 + 0x66) = auVar98[0xe] & auVar80[0xe] & auVar75[0xe];
        *(byte *)((long)puVar25 + 0x67) = auVar98[0xf] & auVar80[0xf] & auVar75[0xf];
        puVar25[0x17] = auVar64._12_4_;
        puVar25[0x18] = uVar22;
        puVar25[0x19] = auVar57._0_4_;
        puVar25[0x1a] = (uint)((ulong)auVar52._0_8_ >> 0x20);
        puVar25[0x1b] = auVar57._4_4_;
        puVar25[0x1c] = auVar52._8_4_;
        puVar25[0x1d] = auVar57._8_4_;
        puVar25[0x1e] = in_q4._12_4_;
        puVar25[0x1f] = auVar57._12_4_;
        puVar25 = puVar25 + 0x20;
      } while (uVar33 != uVar29);
      if (uVar33 < 5) goto LAB_007e3da4;
    }
    lVar24 = lVar23 * 5;
    uVar33 = 4;
    if ((uVar32 & 3) != 0) {
      uVar33 = uVar32 & 3;
    }
    puVar25 = local_a0 + lVar23 * 2;
    lVar27 = uVar33 + lVar23;
    lVar23 = uVar32 - uVar33;
    lVar27 = lVar27 - uVar32;
    puVar28 = (undefined1 *)((long)puVar36 + lVar24 + 9);
    do {
      auVar60._0_4_ = *(undefined4 *)(puVar28 + -9);
      lVar27 = lVar27 + 4;
      auVar54._1_15_ = in_q4._1_15_;
      auVar54[0] = puVar28[-5];
      pbVar26 = puVar28 + 5;
      auVar55._3_13_ = in_q4._3_13_;
      auVar55._0_2_ = auVar54._0_2_;
      auVar55[2] = *puVar28;
      pbVar4 = puVar28 + 10;
      auVar60._4_4_ = *(undefined4 *)(puVar28 + -4);
      auVar60._8_4_ = *(undefined4 *)(puVar28 + 1);
      puVar5 = (undefined4 *)(puVar28 + 6);
      puVar28 = puVar28 + 0x14;
      uVar18 = CONCAT14(auVar55[2],auVar55._0_4_);
      auVar56._0_5_ = uVar18 & 0xff000000ff;
      auVar56._5_3_ = 0;
      auVar56[8] = *pbVar26;
      auVar56._9_3_ = 0;
      auVar56[0xc] = *pbVar4;
      auVar56._13_3_ = 0;
      auVar60._12_4_ = *puVar5;
      auVar64 = NEON_neg(auVar56,4);
      auVar66._0_4_ = 0x20 - (int)auVar56._0_5_;
      auVar66._4_4_ = 0x20 - (uint)(byte)(auVar56._0_5_ >> 0x20);
      auVar66._8_4_ = 0x20 - (uint)*pbVar26;
      auVar66._12_4_ = 0x20 - (uint)*pbVar4;
      auVar8._8_4_ = 0x20;
      auVar8._0_8_ = 0x2000000020;
      auVar8._12_4_ = 0x20;
      auVar57 = NEON_cmhi(auVar8,auVar56,4);
      auVar61 = NEON_rev32(auVar60,1);
      auVar10[8] = 0xff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10[9] = 0xff;
      auVar10[10] = 0xff;
      auVar10[0xb] = 0xff;
      auVar10[0xc] = 0xff;
      auVar10[0xd] = 0xff;
      auVar10[0xe] = 0xff;
      auVar10[0xf] = 0xff;
      auVar64 = NEON_ushl(auVar10,auVar64,4);
      auVar9._8_4_ = 0x20;
      auVar9._0_8_ = 0x2000000020;
      auVar9._12_4_ = 0x20;
      auVar70 = NEON_cmhi(auVar9,auVar66,4);
      auVar11[8] = 0xff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11[9] = 0xff;
      auVar11[10] = 0xff;
      auVar11[0xb] = 0xff;
      auVar11[0xc] = 0xff;
      auVar11[0xd] = 0xff;
      auVar11[0xe] = 0xff;
      auVar11[0xf] = 0xff;
      auVar67 = NEON_ushl(auVar11,auVar66,4);
      in_q4[0] = auVar57[0] & auVar64[0] | auVar61[0];
      in_q4[1] = auVar57[1] & auVar64[1] | auVar61[1];
      in_q4[2] = auVar57[2] & auVar64[2] | auVar61[2];
      in_q4[3] = auVar57[3] & auVar64[3] | auVar61[3];
      in_q4[4] = auVar57[4] & auVar64[4] | auVar61[4];
      in_q4[5] = auVar57[5] & auVar64[5] | auVar61[5];
      in_q4[6] = auVar57[6] & auVar64[6] | auVar61[6];
      in_q4[7] = auVar57[7] & auVar64[7] | auVar61[7];
      in_q4[8] = auVar57[8] & auVar64[8] | auVar61[8];
      in_q4[9] = auVar57[9] & auVar64[9] | auVar61[9];
      in_q4[10] = auVar57[10] & auVar64[10] | auVar61[10];
      in_q4[0xb] = auVar57[0xb] & auVar64[0xb] | auVar61[0xb];
      in_q4[0xc] = auVar57[0xc] & auVar64[0xc] | auVar61[0xc];
      in_q4[0xd] = auVar57[0xd] & auVar64[0xd] | auVar61[0xd];
      in_q4[0xe] = auVar57[0xe] & auVar64[0xe] | auVar61[0xe];
      in_q4[0xf] = auVar57[0xf] & auVar64[0xf] | auVar61[0xf];
      auVar12._8_4_ = 1;
      auVar12._0_8_ = 0x100000001;
      auVar12._12_4_ = 1;
      auVar57 = NEON_uqadd(in_q4,auVar12,4);
      *(byte *)puVar25 = auVar70[0] & auVar67[0] & auVar61[0];
      *(byte *)((long)puVar25 + 1) = auVar70[1] & auVar67[1] & auVar61[1];
      *(byte *)((long)puVar25 + 2) = auVar70[2] & auVar67[2] & auVar61[2];
      *(byte *)((long)puVar25 + 3) = auVar70[3] & auVar67[3] & auVar61[3];
      puVar25[1] = auVar57._0_4_;
      *(byte *)(puVar25 + 3) = auVar70[4] & auVar67[4] & auVar61[4];
      *(byte *)((long)puVar25 + 0xd) = auVar70[5] & auVar67[5] & auVar61[5];
      *(byte *)((long)puVar25 + 0xe) = auVar70[6] & auVar67[6] & auVar61[6];
      *(byte *)((long)puVar25 + 0xf) = auVar70[7] & auVar67[7] & auVar61[7];
      puVar25[3] = auVar57._4_4_;
      *(byte *)(puVar25 + 6) = auVar70[8] & auVar67[8] & auVar61[8];
      *(byte *)((long)puVar25 + 0x19) = auVar70[9] & auVar67[9] & auVar61[9];
      *(byte *)((long)puVar25 + 0x1a) = auVar70[10] & auVar67[10] & auVar61[10];
      *(byte *)((long)puVar25 + 0x1b) = auVar70[0xb] & auVar67[0xb] & auVar61[0xb];
      puVar25[5] = auVar57._8_4_;
      *(byte *)(puVar25 + 9) = auVar70[0xc] & auVar67[0xc] & auVar61[0xc];
      *(byte *)((long)puVar25 + 0x25) = auVar70[0xd] & auVar67[0xd] & auVar61[0xd];
      *(byte *)((long)puVar25 + 0x26) = auVar70[0xe] & auVar67[0xe] & auVar61[0xe];
      *(byte *)((long)puVar25 + 0x27) = auVar70[0xf] & auVar67[0xf] & auVar61[0xf];
      puVar25[7] = auVar57._12_4_;
      puVar25 = puVar25 + 8;
    } while (lVar27 != 0);
  }
LAB_007e3da4:
  lVar24 = uVar32 - lVar23;
  puVar25 = local_a0 + lVar23 * 2 + 1;
  pbVar26 = (byte *)((long)puVar36 + lVar23 * 5 + 4);
  do {
    bVar38 = *pbVar26;
    puVar36 = (uint *)(pbVar26 + -4);
    pbVar26 = pbVar26 + 5;
    uVar30 = (uint)bVar38;
    uVar21 = 0x20 - uVar30;
    uVar22 = 0xffffffff >> (ulong)(uVar30 & 0x1f);
    uVar35 = (*puVar36 & 0xff00ff00) >> 8 | (*puVar36 & 0xff00ff) << 8;
    uVar20 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar35 = -1 << (ulong)(uVar21 & 0x1f);
    if (0x20 < uVar30 || uVar21 == 0) {
      uVar22 = 0;
    }
    uVar22 = uVar22 | uVar20;
    if (0x1f < uVar21) {
      uVar35 = 0;
    }
    uVar21 = uVar22 + 1;
    if (uVar22 == 0xffffffff) {
      uVar21 = 0xffffffff;
    }
    lVar24 = lVar24 + -1;
    puVar25[-1] = uVar35 & uVar20;
    *puVar25 = uVar21;
    puVar25 = puVar25 + 2;
  } while (lVar24 != 0);
  lVar23 = uVar32 - 1;
  if (lVar23 == 0) {
    local_70 = 0;
    uVar33 = 0;
    local_80 = 0;
    puStack_78 = (uint *)&DAT_00000004;
    uVar20 = *local_a0;
    uVar21 = local_a0[1];
LAB_007e3e2c:
                    /* try { // try from 007e3e2c to 007e3e33 has its CatchHandler @ 007e4224 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u32,u32)>>::grow_one(&local_80);
  }
  else {
    if (uVar32 < 0x15) {
      FUN_007e9bbc(local_a0,uVar32,1,&uStack_61);
    }
    else {
                    /* try { // try from 007e41d8 to 007e41e7 has its CatchHandler @ 007e4204 */
      core[bcece726f298455b]::slice::sort::stable::driftsort_main::
      <(u32,u32),<(u32,u32)as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<(u32,u32)>>
                (local_a0,uVar32,&uStack_61);
    }
    local_70 = 0;
    uVar33 = 0;
    local_80 = 0;
    puStack_78 = (uint *)&DAT_00000004;
    puVar36 = local_a0 + 3;
    uVar22 = *local_a0;
    uVar35 = local_a0[1];
    do {
      while( true ) {
        if (lVar23 == 0) {
                    /* try { // try from 007e41ec to 007e41ff has its CatchHandler @ 007e4224 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar32,uVar32,&PTR_s__root__cargo_registry_src_index__00ae05d8);
        }
        uVar20 = puVar36[-1];
        uVar21 = *puVar36;
        if (uVar20 <= uVar35) break;
        if (uVar33 == local_80) {
                    /* try { // try from 007e4198 to 007e419f has its CatchHandler @ 007e4220 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u32,u32)>>::grow_one(&local_80);
        }
        lVar24 = uVar33 * 2;
        uVar33 = uVar33 + 1;
        puStack_78[lVar24] = uVar22;
        (puStack_78 + lVar24)[1] = uVar35;
        lVar23 = lVar23 + -1;
        puVar36 = puVar36 + 2;
        uVar22 = uVar20;
        uVar35 = uVar21;
        local_70 = uVar33;
        if (lVar23 == 0) goto LAB_007e41c8;
      }
      if (uVar22 <= uVar20) {
        uVar20 = uVar22;
      }
      if (uVar21 <= uVar35) {
        uVar21 = uVar35;
      }
      lVar23 = lVar23 + -1;
      puVar36 = puVar36 + 2;
      uVar22 = uVar20;
      uVar35 = uVar21;
    } while (lVar23 != 0);
LAB_007e41c8:
    if (uVar33 == local_80) goto LAB_007e3e2c;
  }
  puVar36 = puStack_78;
  puStack_78[uVar33 * 2] = uVar20;
  (puStack_78 + uVar33 * 2)[1] = uVar21;
  local_a8 = local_80;
  free(local_a0);
  local_a0 = puVar36;
  local_70 = 0;
  local_80 = 0;
  puStack_78 = (uint *)0x1;
  if (uVar33 + 1 != 0) {
    uVar32 = 0;
    puVar37 = (uint *)0x1;
    puVar25 = puVar36 + (uVar33 + 1) * 2;
    do {
      uVar22 = puVar36[1];
      local_84 = 0;
      uVar35 = (*puVar36 & 0xff00ff00) >> 8 | (*puVar36 & 0xff00ff) << 8;
      local_8c = uVar35 >> 0x10 | uVar35 << 0x10;
      uVar35 = uVar22 - (uVar22 != 0);
      uVar35 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
      local_88 = uVar35 >> 0x10 | uVar35 << 0x10;
      if (uVar22 == 0xffffffff) {
        local_88 = 0xffffffff;
      }
                    /* try { // try from 007e3ec8 to 007e3ecf has its CatchHandler @ 007e4258 */
      uVar33 = <ipnet::ipnet::Ipv4Subnets_as_core::iter::traits::iterator::Iterator>::next
                         (&local_8c);
      bVar38 = local_84;
      if ((uVar33 & 1) != 0) {
        uVar33 = uVar33 >> 8 & 0xffffffffff;
        uVar22 = (local_88 & 0xff00ff00) >> 8 | (local_88 & 0xff00ff) << 8;
        uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
        do {
          lVar23 = uVar32 * 5;
          do {
            uVar29 = uVar32;
            uVar35 = local_8c;
            if (uVar29 == local_80) {
                    /* try { // try from 007e3f4c to 007e3f63 has its CatchHandler @ 007e425c */
              FUN_007e7478(&local_80,uVar29,1,1,5);
              puVar37 = puStack_78;
            }
            *(undefined4 *)((long)puVar37 + lVar23) = (int)uVar33;
            *(char *)((undefined4 *)((long)puVar37 + lVar23) + 1) = (char)(uVar33 >> 0x20);
            uVar20 = (local_8c & 0xff00ff00) >> 8 | (local_8c & 0xff00ff) << 8;
            uVar21 = uVar20 >> 0x10 | uVar20 << 0x10;
            uVar20 = (local_88 & 0xff00ff00) >> 8 | (local_88 & 0xff00ff) << 8;
            uVar30 = uVar20 >> 0x10 | uVar20 << 0x10;
            local_70 = uVar29 + 1;
            uVar20 = (uint)(uVar30 < uVar21);
            if (uVar21 < uVar30) {
              uVar20 = 0xffffffff;
            }
            cVar1 = 0 < (int)uVar20;
            if ((int)uVar20 < 0) {
              cVar1 = -1;
            }
            uVar20 = (uint)bVar38;
            if (cVar1 != -1) {
              if (cVar1 != '\0') {
                uVar32 = uVar29 + 1;
                goto LAB_007e3e94;
              }
              uVar21 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
              uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
              iVar16 = 0;
              if (uVar21 <= uVar22) {
                iVar16 = uVar22 - uVar21;
              }
              iVar2 = iVar16 + 1;
              if (iVar16 == -1) {
                iVar2 = -1;
              }
              if ((uVar20 == 0) && (iVar2 == -1)) {
                uVar33 = (ulong)uVar35;
              }
              else {
                if (0x20 < uVar20) goto LAB_007e4100;
                uVar22 = (uVar21 & 0xaaaaaaaa) >> 1 | (uVar21 & 0x55555555) << 1;
                uVar22 = (uVar22 & 0xcccccccc) >> 2 | (uVar22 & 0x33333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
                uVar21 = (uint)LZCOUNT(iVar2) ^ 0x1f;
                uVar22 = (uint)LZCOUNT(uVar22 >> 0x10 | uVar22 << 0x10);
                if (uVar21 <= uVar22) {
                  uVar22 = uVar21;
                }
                uVar22 = 0x20 - uVar22 & 0xff;
                if (uVar20 <= uVar22) {
                  uVar20 = uVar22;
                }
                uVar33 = CONCAT44(uVar20,uVar35);
              }
              uVar20 = (uint)(uVar33 >> 0x20);
              uVar22 = 0xffffffff >> (ulong)(uVar20 & 0x1f);
              uVar35 = ((uint)uVar33 & 0xff00ff00) >> 8 | ((uint)uVar33 & 0xff00ff) << 8;
              if (0x1f < uVar20) {
                uVar22 = 0;
              }
              uVar22 = uVar22 | uVar35 >> 0x10 | uVar35 << 0x10;
              uVar35 = uVar22 + 1;
              if (uVar22 == 0xffffffff) {
                uVar35 = 0xffffffff;
              }
              uVar22 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
              local_8c = uVar22 >> 0x10 | uVar22 << 0x10;
              break;
            }
            uVar21 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
            uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
            iVar16 = 0;
            if (uVar21 <= uVar22) {
              iVar16 = uVar22 - uVar21;
            }
            iVar2 = iVar16 + 1;
            if (iVar16 == -1) {
              iVar2 = -1;
            }
            if ((uVar20 == 0) && (iVar2 == -1)) {
              uVar33 = (ulong)uVar35;
            }
            else {
              if (0x20 < bVar38) {
LAB_007e4100:
                    /* try { // try from 007e4100 to 007e4123 has its CatchHandler @ 007e4260 */
                    /* WARNING: Subroutine does not return */
                core::result::unwrap_failed
                          (&DAT_002e625b,0x2b,&uStack_61,&DAT_00ae05f0,
                           &PTR_s__root__cargo_registry_src_index__00ae06a0);
              }
              uVar21 = (uVar21 & 0xaaaaaaaa) >> 1 | (uVar21 & 0x55555555) << 1;
              uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
              uVar30 = (uint)LZCOUNT(iVar2) ^ 0x1f;
              uVar21 = (uint)LZCOUNT(uVar21 >> 0x10 | uVar21 << 0x10);
              if (uVar30 <= uVar21) {
                uVar21 = uVar30;
              }
              uVar21 = 0x20 - uVar21 & 0xff;
              if (bVar38 <= uVar21) {
                uVar20 = uVar21;
              }
              uVar33 = CONCAT44(uVar20,uVar35);
            }
            uVar31 = (uint)uVar33;
            uVar35 = (uVar31 & 0xff00ff00) >> 8 | (uVar31 & 0xff00ff) << 8;
            uVar21 = uVar35 >> 0x10 | uVar35 << 0x10;
            lVar23 = lVar23 + 5;
            uVar19 = (uint)(uVar33 >> 0x20);
            uVar20 = 0xffffffffU >> (ulong)(uVar19 & 0x1f) | uVar21;
            uVar35 = uVar20 + 1;
            uVar30 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
            if (uVar20 == 0xffffffff) {
              uVar35 = 0xffffffff;
            }
            uVar20 = uVar21 + 1;
            if (uVar21 == 0xffffffff) {
              uVar20 = 0xffffffff;
            }
            uVar35 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
            uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
            local_8c = uVar35 >> 0x10 | uVar35 << 0x10;
            uVar35 = uVar30 >> 0x10 | uVar30 << 0x10;
            if (0x1f < uVar19) {
              local_8c = uVar20 >> 0x10 | uVar20 << 0x10;
              uVar35 = uVar31;
            }
            uVar32 = uVar29 + 1;
          } while (local_8c != uVar35);
          uVar22 = 0;
          local_88 = 0;
          uVar32 = uVar29 + 1;
        } while( true );
      }
LAB_007e3e94:
      puVar36 = puVar36 + 2;
    } while (puVar36 != puVar25);
  }
LAB_007e40b4:
  if (local_a8 != 0) {
    free(local_a0);
  }
  param_1[1] = (ulong)puStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  return;
}


// ===== 007e42a8  <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::is_sibling =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::is_sibling */

undefined4 __rustcall
<ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::is_sibling(ulong *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong local_30;
  ulong uStack_28;
  undefined1 local_20;
  
  bVar1 = (byte)param_1[2];
  uVar6 = 0;
  if ((bVar1 != 0) && (bVar1 == *(byte *)(param_2 + 0x10))) {
    uVar4 = bVar1 - 1;
    if (0x80 < (uVar4 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ae0670);
    }
    uVar5 = -(uint)bVar1 - 0x7f;
    if ((uVar5 >> 7 & 1) == 0) {
      uVar5 = (uint)(char)uVar5;
      uVar7 = -1L << ((long)(int)uVar5 & 0x3fU);
      uVar2 = uVar7;
      uVar3 = 0;
      if (((long)(int)uVar5 & 0x40U) == 0) {
        uVar2 = uVar7 | 0x7fffffffffffffffU >> ((ulong)~uVar5 & 0x3f);
        uVar3 = uVar7;
      }
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uStack_28 = param_1[1] & (uVar3 >> 0x20 | uVar3 << 0x20);
      local_30 = *param_1 & (uVar2 >> 0x20 | uVar2 << 0x20);
    }
    else {
      local_30 = 0;
      uStack_28 = 0;
    }
    local_20 = (undefined1)uVar4;
    uVar6 = <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net>>
            ::contains(&local_30);
  }
  return uVar6;
}


// ===== 007e4364  <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::trunc =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::trunc */

void __rustcall <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::trunc(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uStack_11;
  
  bVar1 = (byte)param_2[2];
  uVar2 = -(uint)bVar1 - 0x80;
  if ((uVar2 >> 7 & 1) == 0) {
    uVar2 = (uint)(char)uVar2;
    uVar5 = -1L << ((long)(int)uVar2 & 0x3fU);
    uVar3 = uVar5;
    uVar4 = 0;
    if (((long)(int)uVar2 & 0x40U) == 0) {
      uVar3 = uVar5 | 0x7fffffffffffffffU >> ((ulong)~uVar2 & 0x3f);
      uVar4 = uVar5;
    }
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar3 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar3 = param_2[1] & (uVar3 >> 0x20 | uVar3 << 0x20);
    uVar4 = *param_2 & (uVar5 >> 0x20 | uVar5 << 0x20);
    if (0x80 < bVar1) {
LAB_007e43d8:
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002e625b,0x2b,&uStack_11,&DAT_00ae05f0,
                 &PTR_s__root__cargo_registry_src_index__00ae0688);
    }
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    if (0x80 < bVar1) goto LAB_007e43d8;
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  *(byte *)(param_1 + 2) = bVar1;
  return;
}


// ===== 007e4408  <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::supernet =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::supernet */

void __rustcall
<ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::supernet(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar5 = (byte)param_2[2] - 1;
  if (0x80 < (uVar5 & 0xff)) {
    *param_1 = 0;
    return;
  }
  uVar6 = -(uint)(byte)param_2[2] - 0x7f;
  uVar4 = (undefined1)uVar5;
  if ((uVar6 >> 7 & 1) != 0) {
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[0x11] = uVar4;
    *param_1 = 1;
    return;
  }
  uVar5 = (uint)(char)uVar6;
  uVar7 = -1L << ((long)(int)uVar5 & 0x3fU);
  uVar1 = *param_2;
  uVar2 = uVar7;
  uVar3 = 0;
  if (((long)(int)uVar5 & 0x40U) == 0) {
    uVar2 = uVar7 | 0x7fffffffffffffffU >> ((ulong)~uVar5 & 0x3f);
    uVar3 = uVar7;
  }
  uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_1 + 9) = param_2[1] & (uVar3 >> 0x20 | uVar3 << 0x20);
  *(ulong *)(param_1 + 1) = uVar1 & (uVar2 >> 0x20 | uVar2 << 0x20);
  param_1[0x11] = uVar4;
  *param_1 = 1;
  return;
}


// ===== 007e44a0  <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::aggregate =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::aggregate */

void __rustcall <ipnet::ipnet::[c]::ipnet::ipnet::Ipv6Net>::aggregate(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  ulong local_d0;
  ulong *local_c8;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_80;
  char local_74;
  ulong local_73;
  ulong *local_6b;
  char local_63;
  undefined1 uStack_61;
  
  uVar24 = *(ulong *)(param_2 + 0x10);
  uVar25 = uVar24 * 0x20;
  if (0x7ffffffffffffff0 < uVar25) {
    uVar26 = 0;
LAB_007e44d8:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar26,uVar25);
  }
  lVar23 = *(long *)(param_2 + 8);
  if (uVar25 == 0) {
    local_c8 = (ulong *)&DAT_00000010;
    local_d0 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar26 = 0x10;
    local_c8 = (ulong *)FUN_004b25a4(uVar25,0x10);
    local_d0 = uVar24;
    if (local_c8 == (ulong *)0x0) goto LAB_007e44d8;
  }
  if (uVar24 == 0) {
    local_a8 = 0;
    local_b8 = 0;
    lStack_b0 = 1;
    goto LAB_007e4a94;
  }
  pcVar16 = (char *)(lVar23 + 0x10);
  puVar12 = local_c8 + 2;
  uVar25 = uVar24;
  do {
    cVar14 = *pcVar16;
    uVar18 = (ulong)cVar14;
    uVar15 = -(int)cVar14 - 0x80;
    uVar9 = -1L << ((ulong)uVar15 & 0x3f);
    iVar5 = (int)(char)uVar15;
    uVar20 = 0xffffffffffffffff >> (uVar18 & 0x3f);
    uVar11 = uVar9;
    uVar19 = 0;
    if ((uVar15 & 0x40) == 0) {
      uVar11 = uVar9 | 0x7fffffffffffffffU >> ((ulong)((int)cVar14 - 1) & 0x3f);
      uVar19 = uVar9;
    }
    if (iVar5 == -1 || iVar5 + 1 < 0 != SCARRY4(iVar5,1)) {
      uVar19 = 0;
      uVar11 = 0;
    }
    bVar7 = (uVar18 & 0x40) == 0;
    puVar1 = (ulong *)(pcVar16 + -0x10);
    puVar4 = (ulong *)(pcVar16 + -8);
    uVar9 = uVar20;
    if (bVar7) {
      uVar9 = -2L << ((ulong)(uint)~(int)cVar14 & 0x3f) | uVar20;
    }
    uVar30 = 0;
    if (bVar7) {
      uVar30 = uVar20;
    }
    pcVar16 = pcVar16 + 0x11;
    uVar20 = (*puVar4 & 0xff00ff00ff00ff00) >> 8 | (*puVar4 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar20 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar21 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar22 = uVar9 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU) | uVar10;
    uVar20 = uVar30 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU) | uVar21;
    uVar9 = uVar22 + 1;
    uVar18 = uVar20 + (0xfffffffffffffffe < uVar22);
    puVar12[-2] = uVar19 & uVar10;
    puVar12[-1] = uVar11 & uVar21;
    if (CARRY8(uVar20,(ulong)(0xfffffffffffffffe < uVar22))) {
      uVar9 = 0xffffffffffffffff;
      uVar18 = 0xffffffffffffffff;
    }
    uVar25 = uVar25 - 1;
    *puVar12 = uVar9;
    puVar12[1] = uVar18;
    puVar12 = puVar12 + 4;
  } while (uVar25 != 0);
  lVar23 = uVar24 - 1;
  if (lVar23 == 0) {
    local_90 = 0;
    local_a0 = 0;
    local_98 = (ulong *)&DAT_00000010;
    uVar25 = 0;
    uVar20 = *local_c8;
    uVar19 = local_c8[1];
    uVar30 = local_c8[2];
    uVar11 = local_c8[3];
LAB_007e45fc:
                    /* try { // try from 007e45fc to 007e4603 has its CatchHandler @ 007e4c40 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u128,u128)>>::grow_one(&local_a0);
  }
  else {
    if (uVar24 < 0x15) {
      FUN_007e9c64(local_c8,uVar24,1,&uStack_61);
    }
    else {
                    /* try { // try from 007e4c00 to 007e4c17 has its CatchHandler @ 007e4c34 */
      core[bcece726f298455b]::slice::sort::stable::driftsort_main::
      <(u128,u128),<(u128,u128)as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<(u128,u128)>>
                (local_c8,uVar24,&uStack_61);
    }
    local_90 = 0;
    uVar25 = 0;
    local_a0 = 0;
    local_98 = (ulong *)&DAT_00000010;
    puVar12 = local_c8 + 6;
    uVar19 = local_c8[1];
    uVar9 = local_c8[2];
    uVar11 = local_c8[3];
    uVar18 = *local_c8;
    do {
      while( true ) {
        if (lVar23 == 0) {
                    /* try { // try from 007e4c1c to 007e4c2f has its CatchHandler @ 007e4c40 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar24,uVar24,&PTR_s__root__cargo_registry_src_index__00ae05d8);
        }
        uVar20 = puVar12[-2];
        uVar10 = puVar12[-1];
        uVar30 = *puVar12;
        uVar21 = puVar12[1];
        if (CARRY8(uVar11,~uVar10) || CARRY8(uVar11 + ~uVar10,(ulong)(uVar20 <= uVar9))) break;
        if (uVar25 == local_a0) {
                    /* try { // try from 007e4b88 to 007e4b8f has its CatchHandler @ 007e4c3c */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u128,u128)>>::grow_one(&local_a0);
        }
        puVar1 = local_98 + uVar25 * 4;
        uVar25 = uVar25 + 1;
        puVar1[2] = uVar9;
        puVar1[3] = uVar11;
        *puVar1 = uVar18;
        puVar1[1] = uVar19;
        lVar23 = lVar23 + -1;
        puVar12 = puVar12 + 4;
        uVar19 = uVar10;
        uVar9 = uVar30;
        uVar11 = uVar21;
        uVar18 = uVar20;
        local_90 = uVar25;
        if (lVar23 == 0) goto LAB_007e4bc4;
      }
      if (CARRY8(uVar10,~uVar19) || CARRY8(uVar10 + ~uVar19,(ulong)(uVar18 <= uVar20))) {
        uVar20 = uVar18;
        uVar10 = uVar19;
      }
      uVar19 = uVar10;
      if (CARRY8(uVar11,~uVar21) || CARRY8(uVar11 + ~uVar21,(ulong)(uVar30 <= uVar9))) {
        uVar30 = uVar9;
        uVar21 = uVar11;
      }
      uVar11 = uVar21;
      lVar23 = lVar23 + -1;
      puVar12 = puVar12 + 4;
      uVar9 = uVar30;
      uVar18 = uVar20;
    } while (lVar23 != 0);
LAB_007e4bc4:
    if (uVar25 == local_a0) goto LAB_007e45fc;
  }
  puVar12 = local_98;
  puVar1 = local_98 + uVar25 * 4;
  *puVar1 = uVar20;
  puVar1[1] = uVar19;
  puVar1[2] = uVar30;
  puVar1[3] = uVar11;
  local_d0 = local_a0;
  free(local_c8);
  local_c8 = puVar12;
  local_a8 = 0;
  local_b8 = 0;
  lStack_b0 = 1;
  if (uVar25 + 1 != 0) {
    lVar23 = 0;
    puVar31 = (undefined8 *)((ulong)&local_74 | 1);
    lVar28 = 1;
    puVar1 = puVar12 + (uVar25 + 1) * 4;
LAB_007e46bc:
    uVar24 = puVar12[2];
    uVar25 = puVar12[3];
    local_90 = 0xffffffffffffffff;
    local_88 = 0xffffffffffffffff;
    if ((uVar24 & uVar25) != 0xffffffffffffffff) {
      uVar11 = (ulong)(uVar24 != 0 || uVar25 != 0);
      uVar19 = uVar24 - uVar11;
      uVar25 = uVar25 - (uVar24 < uVar11);
      uVar24 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      local_88 = uVar24 >> 0x20 | uVar24 << 0x20;
      uVar24 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      local_90 = uVar24 >> 0x20 | uVar24 << 0x20;
    }
    local_80 = 0;
    uVar24 = (*puVar12 & 0xff00ff00ff00ff00) >> 8 | (*puVar12 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_98 = (ulong *)(uVar24 >> 0x20 | uVar24 << 0x20);
    uVar24 = (puVar12[1] & 0xff00ff00ff00ff00) >> 8 | (puVar12[1] & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_a0 = uVar24 >> 0x20 | uVar24 << 0x20;
                    /* try { // try from 007e4708 to 007e4713 has its CatchHandler @ 007e4c74 */
    <ipnet::ipnet::Ipv6Subnets_as_core::iter::traits::iterator::Iterator>::next(&local_74,&local_a0)
    ;
    bVar6 = local_80;
    if (local_74 == '\x01') {
      lVar27 = lVar23 * 0x11;
      do {
        if (lVar23 == local_b8) {
                    /* try { // try from 007e477c to 007e4793 has its CatchHandler @ 007e4c7c */
          FUN_007e7478(&local_b8,lVar23,1,1,0x11);
          lVar28 = lStack_b0;
        }
        puVar4 = local_98;
        uVar24 = local_a0;
        uVar32 = puVar31[1];
        uVar26 = *puVar31;
        puVar2 = (undefined8 *)(lVar28 + lVar27);
        local_a8 = lVar23 + 1;
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar31 + 2);
        puVar2[1] = uVar32;
        *puVar2 = uVar26;
        uVar29 = (uint)(ushort)local_a0;
        uVar13 = (uint)(ushort)local_90;
        uVar15 = (uint)bVar6;
        if ((ushort)local_a0 == (ushort)local_90) {
          if ((uint)local_a0._2_2_ == (uint)local_90._2_2_) {
            uVar29 = (uint)local_a0._4_2_;
            uVar13 = (uint)local_90._4_2_;
            if (local_a0._4_2_ == local_90._4_2_) {
              uVar29 = (uint)local_a0._6_2_;
              uVar13 = (uint)local_90._6_2_;
              if (local_a0._6_2_ == local_90._6_2_) {
                uVar29 = (uint)(ushort)local_98;
                uVar13 = (uint)(ushort)local_88;
                if ((ushort)local_98 == (ushort)local_88) {
                  uVar29 = (uint)local_98._2_2_;
                  uVar13 = (uint)local_88._2_2_;
                  if (local_98._2_2_ == local_88._2_2_) {
                    uVar29 = (uint)local_98._4_2_;
                    uVar13 = (uint)local_88._4_2_;
                    if (local_98._4_2_ == local_88._4_2_) {
                      uVar29 = (uint)local_98._6_2_;
                      uVar13 = (uint)local_88._6_2_;
                      if (local_98._6_2_ == local_88._6_2_) goto LAB_007e48cc;
                    }
                  }
                }
              }
            }
            goto LAB_007e4834;
          }
          uVar29 = (uint)(local_90._2_2_ >> 8) | (local_90._2_2_ & 0xff00ff) << 8;
          uVar13 = (uint)(local_a0._2_2_ >> 8) | (local_a0._2_2_ & 0xff00ff) << 8;
          cVar14 = uVar29 < uVar13;
          if (uVar13 < uVar29) {
            cVar14 = -1;
          }
          if (cVar14 == '\0') goto LAB_007e48cc;
LAB_007e4854:
          if (cVar14 != -1) goto LAB_007e46a8;
          uVar25 = (local_88 & 0xff00ff00ff00ff00) >> 8 | (local_88 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar25 = (local_90 & 0xff00ff00ff00ff00) >> 8 | (local_90 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar20 = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar25 = ((ulong)local_98 & 0xff00ff00ff00ff00) >> 8 |
                   ((ulong)local_98 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar18 = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar25 = (local_a0 & 0xff00ff00ff00ff00) >> 8 | (local_a0 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar19 = ~uVar9;
          bVar7 = CARRY8(uVar20 + uVar19,(ulong)(uVar18 <= uVar11));
          uVar25 = 0;
          if (CARRY8(uVar20,uVar19) || bVar7) {
            uVar25 = uVar11 - uVar18;
          }
          uVar30 = 0;
          if (CARRY8(uVar20,uVar19) || bVar7) {
            uVar30 = uVar20 - (uVar9 + (uVar18 > uVar11));
          }
          uVar19 = uVar25 + 1;
          uVar11 = uVar30 + (0xfffffffffffffffe < uVar25);
          if (CARRY8(uVar30,(ulong)(0xfffffffffffffffe < uVar25))) {
            uVar11 = 0xffffffffffffffff;
            uVar19 = 0xffffffffffffffff;
          }
          if ((uVar15 == 0) && ((uVar19 & uVar11) == 0xffffffffffffffff)) {
            uVar15 = 0;
LAB_007e4a00:
            local_63 = (char)uVar15;
            uVar11 = 0xffffffffffffffff >> ((long)(int)uVar15 & 0x3fU);
            uVar25 = uVar11;
            uVar19 = 0;
            if (((long)(int)uVar15 & 0x40U) == 0) {
              uVar25 = -2L << ((ulong)~uVar15 & 0x3f) | uVar11;
              uVar19 = uVar11;
            }
            uVar25 = uVar25 | uVar18;
            uVar19 = uVar19 | uVar9;
            uVar11 = uVar25 + 1;
            uVar9 = uVar19 + (0xfffffffffffffffe < uVar25);
            uVar18 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            if (CARRY8(uVar19,(ulong)(0xfffffffffffffffe < uVar25))) {
              uVar9 = 0xffffffffffffffff;
              uVar11 = 0xffffffffffffffff;
            }
            uVar19 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            local_a0 = uVar19 >> 0x20 | uVar19 << 0x20;
            uVar19 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            local_98 = (ulong *)(uVar19 >> 0x20 | uVar19 << 0x20);
            uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            cVar14 = local_63;
            if (local_98 == (ulong *)(uVar25 >> 0x20 | uVar25 << 0x20) &&
                local_a0 == (uVar18 >> 0x20 | uVar18 << 0x20)) goto LAB_007e4754;
          }
          else {
            if (0x80 < uVar15) {
LAB_007e4bd8:
                    /* try { // try from 007e4bd8 to 007e4bfb has its CatchHandler @ 007e4c78 */
                    /* WARNING: Subroutine does not return */
              core::result::unwrap_failed
                        (&DAT_002e625b,0x2b,&uStack_61,&DAT_00ae05f0,
                         &PTR_s__root__cargo_registry_src_index__00ae06b8);
            }
            uVar25 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
            uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            uVar20 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar29 = (uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
            if (uVar18 == 0) {
              uVar29 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + 0x40;
            }
            uVar13 = (uint)LZCOUNT(uVar11);
            if (uVar11 == 0) {
              uVar13 = (int)LZCOUNT(uVar19) + 0x40;
            }
            if ((uVar13 ^ 0x7f) <= uVar29) {
              uVar29 = uVar13 ^ 0x7f;
            }
            uVar29 = -uVar29 - 0x80 & 0xff;
            if (uVar15 <= uVar29) {
              uVar15 = uVar29;
            }
            if (uVar15 >> 7 == 0) {
              uVar15 = (uint)(char)uVar15;
              goto LAB_007e4a00;
            }
            uVar25 = uVar18 + 1;
            uVar19 = uVar9 + (0xfffffffffffffffe < uVar18);
            if (CARRY8(uVar9,(ulong)(0xfffffffffffffffe < uVar18))) {
              uVar19 = 0xffffffffffffffff;
              uVar25 = 0xffffffffffffffff;
            }
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
            uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            puVar17 = (ulong *)(uVar25 >> 0x20 | uVar25 << 0x20);
            local_63 = -0x80;
            bVar7 = puVar17 == local_98;
            bVar8 = uVar19 == local_a0;
            local_a0 = uVar19;
            local_98 = puVar17;
            cVar14 = -0x80;
            if (bVar7 && bVar8) goto LAB_007e4754;
          }
        }
        else {
LAB_007e4834:
          uVar29 = uVar29 >> 8 | (uVar29 & 0xff00ff) << 8;
          uVar13 = uVar13 >> 8 | (uVar13 & 0xff00ff) << 8;
          cVar14 = uVar13 < uVar29;
          if (uVar29 < uVar13) {
            cVar14 = -1;
          }
          if (cVar14 != '\0') goto LAB_007e4854;
LAB_007e48cc:
          uVar25 = (local_88 & 0xff00ff00ff00ff00) >> 8 | (local_88 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar25 = (local_90 & 0xff00ff00ff00ff00) >> 8 | (local_90 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar20 = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar25 = ((ulong)local_98 & 0xff00ff00ff00ff00) >> 8 |
                   ((ulong)local_98 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar25 = (local_a0 & 0xff00ff00ff00ff00) >> 8 | (local_a0 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar18 = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar19 = ~uVar18;
          bVar7 = CARRY8(uVar20 + uVar19,(ulong)(uVar9 <= uVar11));
          uVar25 = 0;
          if (CARRY8(uVar20,uVar19) || bVar7) {
            uVar25 = uVar11 - uVar9;
          }
          uVar30 = 0;
          if (CARRY8(uVar20,uVar19) || bVar7) {
            uVar30 = uVar20 - (uVar18 + (uVar9 > uVar11));
          }
          uVar19 = uVar25 + 1;
          uVar11 = uVar30 + (0xfffffffffffffffe < uVar25);
          if (CARRY8(uVar30,(ulong)(0xfffffffffffffffe < uVar25))) {
            uVar11 = 0xffffffffffffffff;
            uVar19 = 0xffffffffffffffff;
          }
          uVar29 = (uint)bVar6;
          if ((uVar29 == 0) && ((uVar19 & uVar11) == 0xffffffffffffffff)) {
            cVar14 = '\0';
            uVar9 = 0xffffffffffffffff;
            uVar18 = 0xffffffffffffffff;
          }
          else {
            if (0x80 < uVar29) goto LAB_007e4bd8;
            uVar25 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
            uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            uVar20 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar13 = (uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
            if (uVar9 == 0) {
              uVar13 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + 0x40;
            }
            uVar3 = (uint)LZCOUNT(uVar11);
            if (uVar11 == 0) {
              uVar3 = (int)LZCOUNT(uVar19) + 0x40;
            }
            if ((uVar3 ^ 0x7f) <= uVar13) {
              uVar13 = uVar3 ^ 0x7f;
            }
            uVar13 = -uVar13 - 0x80 & 0xff;
            if (uVar29 <= uVar13) {
              uVar15 = uVar13;
            }
            if (uVar15 >> 7 == 0) {
              cVar14 = (char)uVar15;
              uVar15 = (uint)cVar14;
              uVar19 = 0xffffffffffffffff >> ((long)(int)uVar15 & 0x3fU);
              bVar7 = ((long)(int)uVar15 & 0x40U) == 0;
              uVar25 = uVar19;
              if (bVar7) {
                uVar25 = -2L << ((ulong)~uVar15 & 0x3f) | uVar19;
              }
              uVar11 = 0;
              if (bVar7) {
                uVar11 = uVar19;
              }
              uVar18 = uVar11 | uVar18;
              uVar9 = uVar25 | uVar9;
            }
            else {
              cVar14 = -0x80;
            }
          }
          uVar25 = uVar9 + 1;
          uVar19 = uVar18 + (0xfffffffffffffffe < uVar9);
          if (CARRY8(uVar18,(ulong)(0xfffffffffffffffe < uVar9))) {
            uVar25 = 0xffffffffffffffff;
            uVar19 = 0xffffffffffffffff;
          }
          uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          local_98 = (ulong *)(uVar25 >> 0x20 | uVar25 << 0x20);
          uVar25 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          local_a0 = uVar25 >> 0x20 | uVar25 << 0x20;
LAB_007e4754:
          local_63 = cVar14;
          local_90 = 0;
          local_88 = 0;
        }
        local_73 = uVar24;
        lVar27 = lVar27 + 0x11;
        lVar23 = lVar23 + 1;
        local_6b = puVar4;
        local_74 = '\x01';
      } while( true );
    }
    goto LAB_007e46b0;
  }
LAB_007e4a94:
  if (local_d0 != 0) {
    free(local_c8);
  }
  param_1[1] = lStack_b0;
  *param_1 = local_b8;
  param_1[2] = local_a8;
  return;
LAB_007e46a8:
  lVar23 = lVar23 + 1;
LAB_007e46b0:
  puVar12 = puVar12 + 4;
  if (puVar12 == puVar1) goto LAB_007e4a94;
  goto LAB_007e46bc;
}


// ===== 007e4cc4  <ipnet::ipnet::PrefixLenError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::PrefixLenError as core::fmt::Display>::fmt */

void __rustcall
<ipnet::ipnet::PrefixLenError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e62f5,0x18);
  return;
}


// ===== 007e4cd8  <ipnet::ipnet::Ipv4Net_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv4Net as core::str::traits::FromStr>::from_str */

ulong __rustcall
<ipnet::ipnet::Ipv4Net_as_core::str::traits::FromStr>::from_str(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 local_28;
  long local_20;
  long lStack_18;
  
  lStack_18 = 0;
  local_28 = param_1;
  local_20 = param_2;
  uVar1 = FUN_007eab00(&local_28);
  if (((uVar1 & 1) != 0) && (lStack_18 == local_20)) {
    return uVar1 & 0xffffffffffffff00;
  }
  return uVar1 & 0xffffffffffffff00 | 1;
}


// ===== 007e4d38  <ipnet::ipnet::Ipv6Net_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv6Net as core::str::traits::FromStr>::from_str */

void __rustcall
<ipnet::ipnet::Ipv6Net_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_50;
  long local_48;
  long local_40;
  char local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  undefined1 local_23;
  
  local_40 = 0;
  local_50 = param_2;
  local_48 = param_3;
  FUN_007eacc8(&local_34,&local_50);
  if ((local_34 == '\x01') && (local_40 == local_48)) {
    *(undefined8 *)(param_1 + 9) = uStack_2b;
    *(undefined8 *)(param_1 + 1) = local_33;
    param_1[0x11] = local_23;
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}


// ===== 007e4db4  <ipnet::ipnet::IpNet_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::IpNet as core::fmt::Debug>::fmt */

void __rustcall <ipnet::ipnet::IpNet_as_core::fmt::Debug>::fmt(char *param_1,undefined8 *param_2)

{
  char *local_30;
  undefined *local_28;
  char *pcStack_20;
  undefined *local_18;
  
  local_30 = param_1 + 1;
  if (*param_1 == '\x01') {
    pcStack_20 = param_1 + 0x11;
    local_28 = PTR_fmt_00b00fc0;
  }
  else {
    pcStack_20 = param_1 + 5;
    local_28 = PTR_fmt_00b00fc8;
  }
  local_18 = PTR_fmt_00b00c18;
  core::fmt::write(*param_2,param_2[1],&DAT_002aafa7,&local_30);
  return;
}


// ===== 007e4e20  <ipnet::ipnet::IpNet_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::IpNet as core::fmt::Display>::fmt */

void __rustcall <ipnet::ipnet::IpNet_as_core::fmt::Display>::fmt(char *param_1,undefined8 *param_2)

{
  char *local_30;
  undefined *local_28;
  char *pcStack_20;
  undefined *local_18;
  
  local_30 = param_1 + 1;
  if (*param_1 == '\x01') {
    pcStack_20 = param_1 + 0x11;
    local_28 = PTR_fmt_00b00fc0;
  }
  else {
    pcStack_20 = param_1 + 5;
    local_28 = PTR_fmt_00b00fc8;
  }
  local_18 = PTR_fmt_00b00c18;
  core::fmt::write(*param_2,param_2[1],&DAT_002aafa7,&local_30);
  return;
}


// ===== 007e4e8c  <ipnet::ipnet::Ipv4Net_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv4Net as core::fmt::Debug>::fmt */

void __rustcall <ipnet::ipnet::Ipv4Net_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  long local_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  lStack_20 = param_1 + 4;
  local_28 = PTR_fmt_00b00fc8;
  local_18 = PTR_fmt_00b00c18;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002aafa7,&local_30);
  return;
}


// ===== 007e4ed8  FUN_007e4ed8 =====

void FUN_007e4ed8(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e630d,0xe);
  return;
}


// ===== 007e4eec  <ipnet::ipnet::IpNet_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::IpNet as core::str::traits::FromStr>::from_str */

void __rustcall
<ipnet::ipnet::IpNet_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *puStack_40;
  char local_34;
  uint5 local_33;
  undefined8 local_2e;
  undefined4 local_26;
  
  local_58 = 1;
  puStack_50 = &DAT_00ae0718;
  local_70 = 0;
  local_48 = 1;
  puStack_40 = &DAT_00ae0740;
  local_80 = param_2;
  local_78 = param_3;
                    /* try { // try from 007e4f24 to 007e4f57 has its CatchHandler @ 007e4fd8 */
  uVar1 = FUN_007eab00(&local_80);
  if ((uVar1 & 1) == 0) {
    local_70 = 0;
    FUN_007eacc8(&local_34,&local_80);
    if (local_34 == '\x01') {
      uVar1 = (ulong)local_33;
      uVar2 = 1;
      local_68 = local_2e;
      local_60 = local_26;
      if (local_70 == local_78) goto LAB_007e4f90;
    }
  }
  else {
    uVar1 = uVar1 >> 8 & 0xffffffffff;
    uVar2 = 0;
    if (local_70 == local_78) {
LAB_007e4f90:
      *param_1 = uVar2;
      *(int *)(param_1 + 1) = (int)uVar1;
      param_1[5] = (char)(uVar1 >> 0x20);
      *(undefined8 *)(param_1 + 6) = local_68;
      *(undefined4 *)(param_1 + 0xe) = local_60;
      return;
    }
  }
  *param_1 = 2;
  return;
}


// ===== 007e4ff0  <ipnet::ipnet::Ipv4Net_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv4Net as core::fmt::Display>::fmt */

void __rustcall <ipnet::ipnet::Ipv4Net_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
  long local_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  lStack_20 = param_1 + 4;
  local_28 = PTR_fmt_00b00fc8;
  local_18 = PTR_fmt_00b00c18;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002aafa7,&local_30);
  return;
}


// ===== 007e503c  <ipnet::ipnet::Ipv6Net_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv6Net as core::fmt::Debug>::fmt */

void __rustcall <ipnet::ipnet::Ipv6Net_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  long local_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  lStack_20 = param_1 + 0x10;
  local_28 = PTR_fmt_00b00fc0;
  local_18 = PTR_fmt_00b00c18;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002aafa7,&local_30);
  return;
}


// ===== 007e5088  <ipnet::ipnet::Ipv6Net_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv6Net as core::fmt::Display>::fmt */

void __rustcall <ipnet::ipnet::Ipv6Net_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
  long local_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  lStack_20 = param_1 + 0x10;
  local_28 = PTR_fmt_00b00fc0;
  local_18 = PTR_fmt_00b00c18;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002aafa7,&local_30);
  return;
}


// ===== 007e50d4  <ipnet[a2c1e98bd29d6aab]::ipnet::IpNet_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::IpNet>>::contains =====

/* <ipnet[a2c1e98bd29d6aab]::ipnet::IpNet as
   ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::IpNet>>::contains */

ulong <ipnet[a2c1e98bd29d6aab]::ipnet::IpNet_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::IpNet>>
      ::contains(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_44;
  undefined8 local_43;
  undefined8 uStack_3b;
  byte local_33;
  byte local_32;
  undefined8 local_31;
  undefined8 uStack_29;
  byte local_21;
  
  uStack_3b = *(undefined8 *)(param_1 + 9);
  uVar6 = *(undefined8 *)(param_1 + 1);
  local_33 = param_1[0x11];
  local_44 = *param_1;
  local_32 = *param_2;
  uStack_29 = *(undefined8 *)(param_2 + 9);
  uVar7 = *(undefined8 *)(param_2 + 1);
  local_21 = param_2[0x11];
  if ((local_44 & 1) == 0) {
    if ((local_32 & 1) == 0) {
      local_43._4_1_ = (byte)((ulong)uVar6 >> 0x20);
      local_31._4_1_ = (byte)((ulong)uVar7 >> 0x20);
      local_43._0_4_ = (uint)uVar6;
      local_31._0_4_ = (uint)uVar7;
      uVar1 = -1 << (ulong)(-(uint)local_43._4_1_ & 0x1f);
      uVar2 = -1 << (ulong)(-(uint)local_31._4_1_ & 0x1f);
      uVar3 = ((uint)local_43 & 0xff00ff00) >> 8 | ((uint)local_43 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (0x1f < 0x20 - local_43._4_1_) {
        uVar1 = 0;
      }
      uVar4 = ((uint)local_31 & 0xff00ff00) >> 8 | ((uint)local_31 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if (0x1f < 0x20 - local_31._4_1_) {
        uVar2 = 0;
      }
      if ((uVar1 & uVar3) <= (uVar2 & uVar4)) {
        uVar1 = 0xffffffff >> (ulong)(local_31._4_1_ & 0x1f);
        uVar2 = 0xffffffff >> (ulong)(local_43._4_1_ & 0x1f);
        if (0x1f < local_31._4_1_) {
          uVar1 = 0;
        }
        if (0x1f < local_43._4_1_) {
          uVar2 = 0;
        }
        return (ulong)((uVar1 | uVar4) <= (uVar2 | uVar3));
      }
    }
  }
  else if ((local_32 & 1) != 0) {
    local_43 = uVar6;
    local_31 = uVar7;
    uVar5 = <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net>>
            ::contains((ulong)&local_44 | 1,&local_31);
    return uVar5;
  }
  return 0;
}


// ===== 007e51d4  <ipnet::ipnet::IpNet_as_ipnet::ipnet::Contains<&core::net::ip_addr::IpAddr>>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::IpNet as ipnet::ipnet::Contains<&core::net::ip_addr::IpAddr>>::contains */

ulong __rustcall
<ipnet::ipnet::IpNet_as_ipnet::ipnet::Contains<&core::net::ip_addr::IpAddr>>::contains
          (byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte local_3c;
  undefined8 local_3b;
  undefined8 uStack_33;
  byte local_2b;
  byte local_2a;
  undefined8 local_29;
  undefined8 uStack_21;
  
  uStack_33 = *(undefined8 *)(param_1 + 9);
  uVar5 = *(undefined8 *)(param_1 + 1);
  local_3c = *param_1;
  local_2b = param_1[0x11];
  local_2a = *param_2;
  uStack_21 = *(undefined8 *)(param_2 + 9);
  local_29 = *(undefined8 *)(param_2 + 1);
  if ((local_3c & 1) == 0) {
    if ((local_2a & 1) == 0) {
      local_3b._4_1_ = (byte)((ulong)uVar5 >> 0x20);
      local_3b._0_4_ = (uint)uVar5;
      uVar1 = -1 << (ulong)(-(uint)local_3b._4_1_ & 0x1f);
      uVar2 = ((uint)local_3b & 0xff00ff00) >> 8 | ((uint)local_3b & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar3 = ((uint)local_29 & 0xff00ff00) >> 8 | ((uint)local_29 & 0xff00ff) << 8;
      if (0x1f < 0x20 - local_3b._4_1_) {
        uVar1 = 0;
      }
      if ((uVar1 & uVar2) <= (uVar3 >> 0x10 | uVar3 << 0x10)) {
        uVar1 = 0xffffffff >> (ulong)(local_3b._4_1_ & 0x1f);
        if (0x1f < local_3b._4_1_) {
          uVar1 = 0;
        }
        uVar3 = ((uint)local_29 & 0xff00ff00) >> 8 | ((uint)local_29 & 0xff00ff) << 8;
        return (ulong)((uVar3 >> 0x10 | uVar3 << 0x10) <= (uVar1 | uVar2));
      }
    }
  }
  else if ((local_2a & 1) != 0) {
    local_3b = uVar5;
    uVar4 = <ipnet::ipnet::Ipv6Net_as_ipnet::ipnet::Contains<&core::net::ip_addr::Ipv6Addr>>::
            contains((ulong)&local_3c | 1,&local_29);
    return uVar4;
  }
  return 0;
}


// ===== 007e52a8  <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv4Net_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv4Net>>::contains =====

/* <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv4Net as
   ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv4Net>>::contains */

bool <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv4Net_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv4Net>>
     ::contains(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar1 = (byte)param_2[1];
  bVar2 = (byte)param_1[1];
  bVar7 = false;
  uVar3 = -1 << (ulong)(-(uint)bVar2 & 0x1f);
  uVar4 = -1 << (ulong)(-(uint)bVar1 & 0x1f);
  uVar5 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if (0x1f < 0x20 - bVar2) {
    uVar3 = 0;
  }
  uVar6 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  if (0x1f < 0x20 - bVar1) {
    uVar4 = 0;
  }
  if ((uVar3 & uVar5) <= (uVar4 & uVar6)) {
    uVar3 = 0xffffffff >> (ulong)(bVar1 & 0x1f);
    uVar4 = 0xffffffff >> (ulong)(bVar2 & 0x1f);
    if (0x1f < bVar1) {
      uVar3 = 0;
    }
    if (0x1f < bVar2) {
      uVar4 = 0;
    }
    bVar7 = (uVar3 | uVar6) <= (uVar4 | uVar5);
  }
  return bVar7;
}


// ===== 007e533c  <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net>>::contains =====

/* <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net as
   ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net>>::contains */

bool <ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net_as_ipnet[a2c1e98bd29d6aab]::ipnet::Contains<&ipnet[a2c1e98bd29d6aab]::ipnet::Ipv6Net>>
     ::contains(ulong *param_1,ulong *param_2)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  cVar2 = (char)param_1[2];
  cVar3 = (char)param_2[2];
  uVar14 = -(int)cVar2 - 0x80;
  uVar21 = -1L << ((ulong)uVar14 & 0x3f);
  iVar7 = (int)(char)uVar14;
  uVar16 = -(int)cVar3 - 0x80;
  bVar11 = (uVar14 & 0x40) == 0;
  uVar20 = 0;
  if (bVar11) {
    uVar20 = uVar21;
  }
  if (bVar11) {
    uVar21 = uVar21 | 0x7fffffffffffffffU >> ((ulong)((int)cVar2 - 1) & 0x3f);
  }
  uVar22 = -1L << ((ulong)uVar16 & 0x3f);
  iVar8 = (int)(char)uVar16;
  uVar15 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
  if (iVar7 == -1 || iVar7 + 1 < 0 != SCARRY4(iVar7,1)) {
    uVar21 = 0;
    uVar20 = 0;
  }
  bVar11 = (uVar16 & 0x40) == 0;
  uVar21 = uVar21 & uVar15;
  uVar12 = (param_1[1] & 0xff00ff00ff00ff00) >> 8 | (param_1[1] & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar17 = uVar12 >> 0x20 | uVar12 << 0x20;
  uVar12 = uVar22;
  if (bVar11) {
    uVar12 = uVar22 | 0x7fffffffffffffffU >> ((ulong)((int)cVar3 - 1) & 0x3f);
  }
  uVar13 = 0;
  if (bVar11) {
    uVar13 = uVar22;
  }
  if (iVar8 == -1 || iVar8 + 1 < 0 != SCARRY4(iVar8,1)) {
    uVar12 = 0;
    uVar13 = 0;
  }
  uVar22 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
  uVar19 = uVar22 >> 0x20 | uVar22 << 0x20;
  uVar22 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
  uVar6 = uVar22 & 0xffff0000ffff;
  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | uVar6 << 0x10;
  uVar9 = (ushort)(uVar6 >> 0x20);
  uVar12 = uVar12 & uVar19;
  uVar16 = (uint)(uVar22 >> 0x20);
  uVar4 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar5 = uVar4 & 0xffff0000ffff0000;
  uVar4 = uVar4 & 0xffff0000ffff;
  uVar14 = (uint)(uVar5 >> 0x10);
  uVar1 = (ushort)(uVar4 >> 0x20);
  uVar18 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
  uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
  if ((uVar16 & 0xffff) == (uint)(ushort)(uVar5 >> 0x30)) {
    if (uVar16 >> 0x10 == (uint)uVar1) {
      uVar16 = (uint)uVar22;
      if ((uVar16 & 0xffff) == (uint)(ushort)(uVar5 >> 0x10)) {
        uVar20 = uVar20 & uVar17;
        uVar13 = uVar13 & uVar18;
        uVar21 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar22 = uVar21 & 0xffff0000ffff0000;
        uVar21 = uVar21 & 0xffff0000ffff;
        uVar14 = (uint)(ushort)(uVar22 >> 0x30);
        uVar9 = (ushort)uVar6;
        uVar20 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar12 = uVar20 & 0xffff0000ffff0000;
        uVar20 = uVar20 & 0xffff0000ffff;
        uVar10 = (ushort)(uVar12 >> 0x30);
        uVar1 = (ushort)uVar4;
        if ((uint)uVar9 == (uint)uVar1) {
          if (uVar14 == uVar10) {
            uVar14 = (uint)(ushort)(uVar21 >> 0x20);
            uVar1 = (ushort)(uVar20 >> 0x20);
            uVar16 = (uint)uVar1;
            if (uVar14 == uVar1) {
              uVar14 = (uint)(uVar22 >> 0x10);
              uVar16 = (uint)(uVar12 >> 0x10);
              if (uVar14 == (ushort)(uVar12 >> 0x10)) {
                uVar1 = (ushort)uVar21;
                uVar14 = (uint)uVar1;
                uVar10 = (ushort)uVar20;
                if (uVar1 == uVar10) goto LAB_007e550c;
                goto LAB_007e5478;
              }
            }
            if ((uVar16 >> 8 | (uVar16 & 0xff00ff) << 8) < (uVar14 >> 8 | (uVar14 & 0xff00ff) << 8))
            {
              return false;
            }
          }
          else {
LAB_007e5478:
            if (((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8) <
                (uVar14 >> 8 | (uVar14 & 0xff00ff) << 8)) {
              return false;
            }
          }
        }
        else if (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <
                 ((uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8)) {
          return false;
        }
      }
      else if ((uVar14 >> 8 | (uVar14 & 0xff00ff) << 8) <
               (((uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8) & 0xffff)) {
        return false;
      }
    }
    else if (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <
             ((uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8)) {
      return false;
    }
  }
  else if ((ushort)(uVar12 >> 0x30) < (ushort)(uVar21 >> 0x30)) {
    return false;
  }
LAB_007e550c:
  uVar16 = (uint)cVar3;
  uVar14 = (uint)cVar2;
  uVar22 = 0xffffffffffffffff >> ((long)(int)uVar16 & 0x3fU);
  uVar12 = 0xffffffffffffffff >> ((long)(int)uVar14 & 0x3fU);
  uVar21 = uVar22;
  uVar20 = 0;
  if (((long)(int)uVar16 & 0x40U) == 0) {
    uVar21 = -2L << ((ulong)~uVar16 & 0x3f) | uVar22;
    uVar20 = uVar22;
  }
  if (uVar16 == 0xffffffff || (int)(uVar16 + 1) < 0 != SCARRY4(uVar16,1)) {
    uVar21 = 0;
    uVar20 = 0;
  }
  uVar13 = uVar12;
  uVar22 = 0;
  if (((long)(int)uVar14 & 0x40U) == 0) {
    uVar13 = -2L << ((ulong)~uVar14 & 0x3f) | uVar12;
    uVar22 = uVar12;
  }
  bVar11 = (int)(uVar14 + 1) < 0;
  uVar20 = uVar20 | uVar19;
  if (uVar14 == 0xffffffff || bVar11 != SCARRY4(uVar14,1)) {
    uVar22 = 0;
  }
  uVar12 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
  uVar4 = uVar12 & 0xffff0000ffff;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | uVar4 << 0x10;
  uVar1 = (ushort)(uVar4 >> 0x20);
  uVar22 = uVar22 | uVar15;
  uVar16 = (uint)(uVar12 >> 0x20);
  if (uVar14 == 0xffffffff || bVar11 != SCARRY4(uVar14,1)) {
    uVar13 = 0;
  }
  uVar15 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
  uVar5 = uVar15 & 0xffff0000ffff0000;
  uVar15 = uVar15 & 0xffff0000ffff;
  uVar14 = (uint)(uVar5 >> 0x10);
  uVar9 = (ushort)(uVar15 >> 0x20);
  if ((uVar16 & 0xffff) != (uint)(ushort)(uVar5 >> 0x30)) {
    return (ushort)(uVar20 >> 0x30) <= (ushort)(uVar22 >> 0x30);
  }
  if (uVar16 >> 0x10 != (uint)uVar9) {
    return ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <=
           ((uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8);
  }
  uVar16 = (uint)uVar12;
  if ((uVar16 & 0xffff) != (uint)(ushort)(uVar5 >> 0x10)) {
    return (((uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8) & 0xffff) <=
           (uVar14 >> 8 | (uVar14 & 0xff00ff) << 8);
  }
  uVar21 = uVar21 | uVar18;
  uVar13 = uVar13 | uVar17;
  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
  uVar22 = uVar21 & 0xffff0000ffff0000;
  uVar21 = uVar21 & 0xffff0000ffff;
  uVar14 = (uint)(ushort)(uVar22 >> 0x30);
  uVar20 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar12 = uVar20 & 0xffff0000ffff0000;
  uVar20 = uVar20 & 0xffff0000ffff;
  uVar10 = (ushort)(uVar12 >> 0x30);
  uVar9 = (ushort)uVar4;
  uVar1 = (ushort)uVar15;
  if ((uint)uVar9 != (uint)uVar1) {
    return ((uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8) <=
           ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
  }
  if (uVar14 != uVar10) {
LAB_007e567c:
    return (uVar14 >> 8 | (uVar14 & 0xff00ff) << 8) <=
           ((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8);
  }
  uVar14 = (uint)(ushort)(uVar21 >> 0x20);
  uVar1 = (ushort)(uVar20 >> 0x20);
  uVar16 = (uint)uVar1;
  if (uVar14 == uVar1) {
    uVar14 = (uint)(uVar22 >> 0x10);
    uVar16 = (uint)(uVar12 >> 0x10);
    if (uVar14 == (ushort)(uVar12 >> 0x10)) {
      uVar1 = (ushort)uVar21;
      uVar14 = (uint)uVar1;
      uVar10 = (ushort)uVar20;
      if (uVar1 == uVar10) {
        return true;
      }
      goto LAB_007e567c;
    }
  }
  return (uVar14 >> 8 | (uVar14 & 0xff00ff) << 8) <= (uVar16 >> 8 | (uVar16 & 0xff00ff) << 8);
}


// ===== 007e56ac  <ipnet::ipnet::Ipv6Net_as_ipnet::ipnet::Contains<&core::net::ip_addr::Ipv6Addr>>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv6Net as ipnet::ipnet::Contains<&core::net::ip_addr::Ipv6Addr>>::contains */

bool __rustcall
<ipnet::ipnet::Ipv6Net_as_ipnet::ipnet::Contains<&core::net::ip_addr::Ipv6Addr>>::contains
          (ulong *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  ulong uVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  
  cVar9 = (char)param_1[2];
  uVar16 = -(int)cVar9 - 0x80;
  uVar20 = *param_2;
  uVar23 = -1L << ((ulong)uVar16 & 0x3f);
  iVar17 = (int)(char)uVar16;
  uVar27 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
  uVar24 = uVar27 >> 0x20 | uVar27 << 0x20;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar27 = uVar23;
  uVar26 = 0;
  if ((uVar16 & 0x40) == 0) {
    uVar27 = uVar23 | 0x7fffffffffffffffU >> ((ulong)((int)cVar9 - 1) & 0x3f);
    uVar26 = uVar23;
  }
  bVar18 = iVar17 + 1 < 0;
  if (iVar17 == -1 || bVar18 != SCARRY4(iVar17,1)) {
    uVar27 = 0;
  }
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar27 = uVar27 & uVar24;
  if (iVar17 == -1 || bVar18 != SCARRY4(iVar17,1)) {
    uVar26 = 0;
  }
  uVar7 = param_2[7];
  uVar23 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
  uVar10 = uVar23 & 0xffff0000ffff0000;
  uVar23 = uVar23 & 0xffff0000ffff;
  uVar21 = (uint)(uVar10 >> 0x10);
  uVar1 = (ushort)(uVar23 >> 0x20);
  uVar19 = (param_1[1] & 0xff00ff00ff00ff00) >> 8 | (param_1[1] & 0xff00ff00ff00ff) << 8;
  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
  uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
  uVar22 = (uint)(uVar20 >> 8) | (uVar20 & 0xff00ff) << 8;
  uVar16 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
  uVar11 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
  uVar12 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
  uVar13 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
  uVar14 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
  uVar15 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
  if ((uint)uVar20 == (uint)(ushort)(uVar10 >> 0x30)) {
    uVar8 = param_2[1];
    if ((uint)uVar8 == (uint)uVar1) {
      if ((uint)uVar2 == (uint)(ushort)(uVar10 >> 0x10)) {
        uVar26 = uVar26 & uVar19;
        uVar27 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
        uVar26 = uVar27 & 0xffff0000ffff0000;
        uVar27 = uVar27 & 0xffff0000ffff;
        uVar1 = (ushort)uVar23;
        if ((uint)uVar3 == (uint)uVar1) {
          uVar1 = (ushort)(uVar26 >> 0x30);
          if ((uint)uVar4 == (uint)uVar1) {
            uVar1 = (ushort)(uVar27 >> 0x20);
            if ((uint)uVar5 == (uint)uVar1) {
              if ((uint)uVar6 == (uint)(ushort)(uVar26 >> 0x10)) {
                uVar1 = (ushort)uVar27;
                if ((uint)uVar7 == (uint)uVar1) goto LAB_007e5828;
                uVar21 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
                uVar25 = uVar15;
              }
              else {
                uVar21 = (uint)(uVar26 >> 0x10);
                uVar21 = uVar21 >> 8 | (uVar21 & 0xff00ff) << 8;
                uVar25 = uVar14;
              }
            }
            else {
              uVar21 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
              uVar25 = uVar13;
            }
          }
          else {
            uVar21 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
            uVar25 = uVar12;
          }
        }
        else {
          uVar21 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
          uVar25 = uVar11;
        }
      }
      else {
        uVar21 = uVar21 >> 8 | (uVar21 & 0xff00ff) << 8;
        uVar25 = uVar16;
      }
    }
    else {
      uVar21 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
      uVar25 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8;
    }
  }
  else {
    uVar21 = (uint)(ushort)(uVar27 >> 0x30);
    uVar25 = uVar22;
  }
  if (uVar25 < uVar21) {
    return false;
  }
LAB_007e5828:
  uVar21 = (uint)cVar9;
  uVar23 = 0xffffffffffffffff >> ((long)(int)uVar21 & 0x3fU);
  uVar26 = uVar23;
  uVar27 = 0;
  if (((long)(int)uVar21 & 0x40U) == 0) {
    uVar26 = -2L << ((ulong)~uVar21 & 0x3f) | uVar23;
    uVar27 = uVar23;
  }
  bVar18 = (int)(uVar21 + 1) < 0;
  if (uVar21 == 0xffffffff || bVar18 != SCARRY4(uVar21,1)) {
    uVar27 = 0;
  }
  uVar27 = uVar27 | uVar24;
  if (uVar21 == 0xffffffff || bVar18 != SCARRY4(uVar21,1)) {
    uVar26 = 0;
  }
  uVar23 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
  uVar24 = uVar23 & 0xffff0000ffff0000;
  uVar23 = uVar23 & 0xffff0000ffff;
  uVar1 = (ushort)(uVar23 >> 0x20);
  if (uVar20 == (ushort)(uVar24 >> 0x30)) {
    uVar8 = param_2[1];
    if ((uint)uVar8 == (uint)uVar1) {
      if (uVar2 == (ushort)(uVar24 >> 0x10)) {
        uVar26 = uVar26 | uVar19;
        uVar27 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
        uVar26 = uVar27 & 0xffff0000ffff0000;
        uVar27 = uVar27 & 0xffff0000ffff;
        if (uVar3 == (ushort)uVar23) {
          uVar20 = (ushort)(uVar26 >> 0x30);
          if (uVar4 == uVar20) {
            uVar20 = (ushort)(uVar27 >> 0x20);
            if (uVar5 == uVar20) {
              if (uVar6 == (ushort)(uVar26 >> 0x10)) {
                uVar20 = (ushort)uVar27;
                if ((uint)uVar7 == (uint)uVar20) {
                  return true;
                }
                uVar20 = uVar20 >> 8 | (ushort)((uVar20 & 0xff00ff) << 8);
                uVar22 = uVar15;
              }
              else {
                uVar20 = (ushort)(uVar26 >> 0x18) |
                         (ushort)(((uint)(uVar26 >> 0x10) & 0xff00ff) << 8);
                uVar22 = uVar14;
              }
            }
            else {
              uVar20 = (ushort)(byte)(uVar27 >> 0x28) | (ushort)((uVar20 & 0xff00ff) << 8);
              uVar22 = uVar13;
            }
          }
          else {
            uVar20 = (ushort)(byte)(uVar26 >> 0x38) | (ushort)((uVar20 & 0xff00ff) << 8);
            uVar22 = uVar12;
          }
        }
        else {
          uVar20 = (ushort)(byte)(uVar23 >> 8) | (ushort)(((ushort)uVar23 & 0xff00ff) << 8);
          uVar22 = uVar11;
        }
      }
      else {
        uVar20 = (ushort)(uVar24 >> 0x18) | (ushort)(((uint)(uVar24 >> 0x10) & 0xff00ff) << 8);
        uVar22 = uVar16;
      }
    }
    else {
      uVar20 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
      uVar22 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8;
    }
  }
  else {
    uVar20 = (ushort)(uVar27 >> 0x30);
  }
  return uVar22 <= uVar20;
}


// ===== 007e594c  <ipnet::ipnet::IpSubnets_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::IpSubnets as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<ipnet::ipnet::IpSubnets_as_core::iter::traits::iterator::Iterator>::next
          (undefined1 *param_1,char *param_2)

{
  ulong uVar1;
  byte local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  undefined1 local_23;
  
  if (*param_2 == '\x01') {
    <ipnet::ipnet::Ipv6Subnets_as_core::iter::traits::iterator::Iterator>::next(&local_34);
    if ((local_34 & 1) != 0) {
      param_1[0x11] = local_23;
      *(undefined8 *)(param_1 + 9) = uStack_2b;
      *(undefined8 *)(param_1 + 1) = local_33;
      *param_1 = 1;
      return;
    }
  }
  else {
    uVar1 = <ipnet::ipnet::Ipv4Subnets_as_core::iter::traits::iterator::Iterator>::next(param_2 + 1)
    ;
    if ((uVar1 & 1) != 0) {
      *param_1 = 0;
      param_1[5] = (char)(uVar1 >> 0x28);
      *(int *)(param_1 + 1) = (int)(uVar1 >> 8);
      return;
    }
  }
  *param_1 = 2;
  return;
}


// ===== 007e59e8  <ipnet::ipnet::Ipv4Subnets_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv4Subnets as core::iter::traits::iterator::Iterator>::next */

ulong __rustcall
<ipnet::ipnet::Ipv4Subnets_as_core::iter::traits::iterator::Iterator>::next(uint *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uStack_11;
  
  uVar5 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar9 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (uint)(uVar9 < uVar6);
  if (uVar6 < uVar9) {
    uVar5 = 0xffffffff;
  }
  uVar6 = (uint)(0 < (int)uVar5);
  if ((int)uVar5 < 0) {
    uVar6 = 0xffffffff;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 == 0) {
    uVar5 = *param_1;
    uVar8 = (ulong)uVar5;
    uVar6 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar9 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    bVar3 = (byte)param_1[2];
    iVar2 = 0;
    if (uVar9 <= uVar6) {
      iVar2 = uVar6 - uVar9;
    }
    iVar1 = iVar2 + 1;
    if (iVar2 == -1) {
      iVar1 = -1;
    }
    if ((bVar3 != 0) || (iVar1 != -1)) {
      if (0x20 < bVar3) goto LAB_007e5b9c;
      uVar6 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar9 = (uint)LZCOUNT(iVar1) ^ 0x1f;
      uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      if (uVar9 <= uVar6) {
        uVar6 = uVar9;
      }
      uVar6 = 0x20 - uVar6 & 0xff;
      uVar9 = (uint)bVar3;
      if (bVar3 <= uVar6) {
        uVar9 = uVar6;
      }
      uVar8 = CONCAT44(uVar9,uVar5);
    }
    uVar9 = (uint)(uVar8 >> 0x20);
    uVar5 = 0xffffffff >> (ulong)(uVar9 & 0x1f);
    uVar6 = ((uint)uVar8 & 0xff00ff00) >> 8 | ((uint)uVar8 & 0xff00ff) << 8;
    if (0x1f < uVar9) {
      uVar5 = 0;
    }
    uVar5 = uVar5 | uVar6 >> 0x10 | uVar6 << 0x10;
    uVar6 = uVar5 + 1;
    if (uVar5 == 0xffffffff) {
      uVar6 = 0xffffffff;
    }
    uVar5 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    *param_1 = uVar5 >> 0x10 | uVar5 << 0x10;
  }
  else {
    if (uVar6 == 1) {
      return (ulong)uVar6 << 8;
    }
    uVar5 = *param_1;
    uVar8 = (ulong)uVar5;
    uVar6 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar9 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    bVar3 = (byte)param_1[2];
    iVar2 = 0;
    if (uVar9 <= uVar6) {
      iVar2 = uVar6 - uVar9;
    }
    iVar1 = iVar2 + 1;
    if (iVar2 == -1) {
      iVar1 = -1;
    }
    if ((bVar3 != 0) || (iVar1 != -1)) {
      if (0x20 < bVar3) {
LAB_007e5b9c:
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_002e625b,0x2b,&uStack_11,&DAT_00ae05f0,
                   &PTR_s__root__cargo_registry_src_index__00ae06a0);
      }
      uVar6 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar9 = (uint)LZCOUNT(iVar1) ^ 0x1f;
      uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      if (uVar9 <= uVar6) {
        uVar6 = uVar9;
      }
      uVar6 = 0x20 - uVar6 & 0xff;
      uVar9 = (uint)bVar3;
      if (bVar3 <= uVar6) {
        uVar9 = uVar6;
      }
      uVar8 = CONCAT44(uVar9,uVar5);
    }
    uVar7 = (uint)uVar8;
    uVar5 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar9 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar10 = (uint)(uVar8 >> 0x20);
    uVar6 = 0xffffffffU >> (ulong)(uVar10 & 0x1f) | uVar9;
    uVar5 = uVar6 + 1;
    uVar4 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    if (uVar6 == 0xffffffff) {
      uVar5 = 0xffffffff;
    }
    uVar6 = uVar9 + 1;
    if (uVar9 == 0xffffffff) {
      uVar6 = 0xffffffff;
    }
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar9 = uVar4 >> 0x10 | uVar4 << 0x10;
    if (0x1f < uVar10) {
      uVar5 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar9 = uVar7;
    }
    *param_1 = uVar5;
    if (uVar5 != uVar9) goto LAB_007e5b84;
  }
  param_1[1] = 0;
LAB_007e5b84:
  return uVar8 << 8 | 1;
}


// ===== 007e5bc0  <ipnet::ipnet::Ipv6Subnets_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipnet::Ipv6Subnets as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<ipnet::ipnet::Ipv6Subnets_as_core::iter::traits::iterator::Iterator>::next
          (undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 uStack_11;
  
  uVar9 = (uint)(ushort)*param_2;
  puVar8 = param_2 + 2;
  uVar11 = (uint)(ushort)*puVar8;
  if ((ushort)*param_2 != (ushort)*puVar8) goto LAB_007e5c50;
  uVar4 = *(ushort *)((long)param_2 + 0x12);
  uVar5 = *(ushort *)((long)param_2 + 2);
  if ((uint)uVar5 == (uint)uVar4) {
    uVar9 = (uint)*(ushort *)((long)param_2 + 4);
    uVar11 = (uint)*(ushort *)((long)param_2 + 0x14);
    if (*(ushort *)((long)param_2 + 4) != *(ushort *)((long)param_2 + 0x14)) {
LAB_007e5c50:
      uVar9 = uVar9 >> 8 | (uVar9 & 0xff00ff) << 8;
      uVar11 = uVar11 >> 8 | (uVar11 & 0xff00ff) << 8;
      cVar12 = uVar11 < uVar9;
      if (uVar9 < uVar11) {
        cVar12 = -1;
      }
      goto joined_r0x007e5c6c;
    }
    uVar9 = (uint)*(ushort *)((long)param_2 + 6);
    uVar11 = (uint)*(ushort *)((long)param_2 + 0x16);
    if (*(ushort *)((long)param_2 + 6) != *(ushort *)((long)param_2 + 0x16)) goto LAB_007e5c50;
    uVar9 = (uint)(ushort)param_2[1];
    uVar11 = (uint)(ushort)param_2[3];
    if ((ushort)param_2[1] != (ushort)param_2[3]) goto LAB_007e5c50;
    uVar9 = (uint)*(ushort *)((long)param_2 + 10);
    uVar11 = (uint)*(ushort *)((long)param_2 + 0x1a);
    if (*(ushort *)((long)param_2 + 10) != *(ushort *)((long)param_2 + 0x1a)) goto LAB_007e5c50;
    uVar9 = (uint)*(ushort *)((long)param_2 + 0xc);
    uVar11 = (uint)*(ushort *)((long)param_2 + 0x1c);
    if (*(ushort *)((long)param_2 + 0xc) != *(ushort *)((long)param_2 + 0x1c)) goto LAB_007e5c50;
    uVar9 = (uint)*(ushort *)((long)param_2 + 0xe);
    uVar11 = (uint)*(ushort *)((long)param_2 + 0x1e);
    if (*(ushort *)((long)param_2 + 0xe) != *(ushort *)((long)param_2 + 0x1e)) goto LAB_007e5c50;
  }
  else {
    uVar9 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
    uVar11 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
    cVar12 = uVar9 < uVar11;
    if (uVar11 < uVar9) {
      cVar12 = -1;
    }
joined_r0x007e5c6c:
    if (cVar12 != '\0') {
      if (cVar12 == '\x01') {
        *param_1 = 0;
        return;
      }
      uVar2 = *param_2;
      uVar10 = param_2[1];
      uVar18 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar18 >> 0x20 | uVar18 << 0x20;
      uVar18 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar18 >> 0x20 | uVar18 << 0x20;
      uVar18 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar18 >> 0x20 | uVar18 << 0x20;
      uVar18 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar18 >> 0x20 | uVar18 << 0x20;
      uVar17 = ~uVar14;
      bVar7 = CARRY8(uVar16 + uVar17,(ulong)(uVar15 <= uVar13));
      uVar18 = 0;
      if (CARRY8(uVar16,uVar17) || bVar7) {
        uVar18 = uVar13 - uVar15;
      }
      uVar1 = 0;
      if (CARRY8(uVar16,uVar17) || bVar7) {
        uVar1 = uVar16 - (uVar14 + (uVar15 > uVar13));
      }
      bVar3 = (byte)param_2[4];
      uVar17 = uVar18 + 1;
      uVar13 = uVar1 + (0xfffffffffffffffe < uVar18);
      if (CARRY8(uVar1,(ulong)(0xfffffffffffffffe < uVar18))) {
        uVar13 = 0xffffffffffffffff;
        uVar17 = 0xffffffffffffffff;
      }
      if ((bVar3 == 0) && ((uVar17 & uVar13) == 0xffffffffffffffff)) {
        uVar9 = 0;
LAB_007e5e48:
        cVar12 = (char)uVar9;
        uVar17 = 0xffffffffffffffff >> ((long)(int)uVar9 & 0x3fU);
        bVar7 = ((long)(int)uVar9 & 0x40U) == 0;
        uVar18 = uVar17;
        if (bVar7) {
          uVar18 = -2L << ((ulong)~uVar9 & 0x3f) | uVar17;
        }
        uVar13 = 0;
        if (bVar7) {
          uVar13 = uVar17;
        }
        uVar18 = uVar18 | uVar15;
        uVar13 = uVar13 | uVar14;
        uVar17 = uVar18 + 1;
        uVar14 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar13 + (0xfffffffffffffffe < uVar18);
        uVar16 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        if (CARRY8(uVar13,(ulong)(0xfffffffffffffffe < uVar18))) {
          uVar14 = 0xffffffffffffffff;
          uVar17 = 0xffffffffffffffff;
        }
        uVar18 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar18 >> 0x20 | uVar18 << 0x20;
        uVar18 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
        *param_2 = uVar13;
        param_2[1] = uVar18;
        cVar6 = cVar12;
        if (uVar18 == (uVar15 >> 0x20 | uVar15 << 0x20) &&
            uVar13 == (uVar16 >> 0x20 | uVar16 << 0x20)) {
LAB_007e5ea8:
          cVar12 = cVar6;
          *puVar8 = 0;
          param_2[3] = 0;
        }
      }
      else {
        if (0x80 < bVar3) goto LAB_007e5f2c;
        uVar18 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar16 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar9 = (uint)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        if (uVar15 == 0) {
          uVar9 = (int)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) + 0x40;
        }
        uVar11 = (uint)LZCOUNT(uVar13);
        if (uVar13 == 0) {
          uVar11 = (int)LZCOUNT(uVar17) + 0x40;
        }
        if ((uVar11 ^ 0x7f) <= uVar9) {
          uVar9 = uVar11 ^ 0x7f;
        }
        uVar9 = -uVar9 - 0x80 & 0xff;
        uVar11 = (uint)bVar3;
        if (bVar3 <= uVar9) {
          uVar11 = uVar9;
        }
        if (uVar11 >> 7 == 0) {
          uVar9 = (uint)(char)uVar11;
          goto LAB_007e5e48;
        }
        uVar18 = uVar15 + 1;
        uVar17 = uVar14 + (0xfffffffffffffffe < uVar15);
        if (CARRY8(uVar14,(ulong)(0xfffffffffffffffe < uVar15))) {
          uVar17 = 0xffffffffffffffff;
          uVar18 = 0xffffffffffffffff;
        }
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
        cVar12 = -0x80;
        *param_2 = uVar17;
        param_2[1] = uVar18;
        cVar6 = -0x80;
        if (uVar18 == uVar10 && uVar17 == uVar2) goto LAB_007e5ea8;
      }
      *(ulong *)(param_1 + 1) = uVar2;
      goto LAB_007e5ee0;
    }
  }
  uVar2 = *param_2;
  uVar10 = param_2[1];
  uVar18 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
  uVar14 = uVar18 >> 0x20 | uVar18 << 0x20;
  uVar18 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
  uVar16 = uVar18 >> 0x20 | uVar18 << 0x20;
  uVar18 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
  uVar13 = uVar18 >> 0x20 | uVar18 << 0x20;
  uVar18 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar18 >> 0x20 | uVar18 << 0x20;
  uVar17 = ~uVar15;
  bVar7 = CARRY8(uVar16 + uVar17,(ulong)(uVar13 <= uVar14));
  uVar18 = 0;
  if (CARRY8(uVar16,uVar17) || bVar7) {
    uVar18 = uVar14 - uVar13;
  }
  uVar1 = 0;
  if (CARRY8(uVar16,uVar17) || bVar7) {
    uVar1 = uVar16 - (uVar15 + (uVar13 > uVar14));
  }
  bVar3 = (byte)param_2[4];
  uVar17 = uVar18 + 1;
  uVar14 = uVar1 + (0xfffffffffffffffe < uVar18);
  if (CARRY8(uVar1,(ulong)(0xfffffffffffffffe < uVar18))) {
    uVar14 = 0xffffffffffffffff;
    uVar17 = 0xffffffffffffffff;
  }
  if ((bVar3 == 0) && ((uVar17 & uVar14) == 0xffffffffffffffff)) {
    cVar12 = '\0';
    uVar15 = 0xffffffffffffffff;
    uVar13 = 0xffffffffffffffff;
  }
  else {
    if (0x80 < bVar3) {
LAB_007e5f2c:
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002e625b,0x2b,&uStack_11,&DAT_00ae05f0,
                 &PTR_s__root__cargo_registry_src_index__00ae06b8);
    }
    uVar18 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar16 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar9 = (uint)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
    if (uVar13 == 0) {
      uVar9 = (int)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) + 0x40;
    }
    uVar11 = (uint)LZCOUNT(uVar14);
    if (uVar14 == 0) {
      uVar11 = (int)LZCOUNT(uVar17) + 0x40;
    }
    if ((uVar11 ^ 0x7f) <= uVar9) {
      uVar9 = uVar11 ^ 0x7f;
    }
    uVar9 = -uVar9 - 0x80 & 0xff;
    uVar11 = (uint)bVar3;
    if (bVar3 <= uVar9) {
      uVar11 = uVar9;
    }
    if (uVar11 >> 7 == 0) {
      cVar12 = (char)uVar11;
      uVar9 = (uint)cVar12;
      uVar17 = 0xffffffffffffffff >> ((long)(int)uVar9 & 0x3fU);
      bVar7 = ((long)(int)uVar9 & 0x40U) == 0;
      uVar18 = uVar17;
      if (bVar7) {
        uVar18 = -2L << ((ulong)~uVar9 & 0x3f) | uVar17;
      }
      uVar14 = 0;
      if (bVar7) {
        uVar14 = uVar17;
      }
      uVar15 = uVar14 | uVar15;
      uVar13 = uVar18 | uVar13;
    }
    else {
      cVar12 = -0x80;
    }
  }
  uVar18 = uVar13 + 1;
  *puVar8 = 0;
  param_2[3] = 0;
  uVar17 = uVar15 + (0xfffffffffffffffe < uVar13);
  *(ulong *)(param_1 + 1) = uVar2;
  if (CARRY8(uVar15,(ulong)(0xfffffffffffffffe < uVar13))) {
    uVar18 = 0xffffffffffffffff;
    uVar17 = 0xffffffffffffffff;
  }
  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
  uVar2 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  *param_2 = uVar2 >> 0x20 | uVar2 << 0x20;
  param_2[1] = uVar18 >> 0x20 | uVar18 << 0x20;
LAB_007e5ee0:
  *(ulong *)(param_1 + 9) = uVar10;
  param_1[0x11] = cVar12;
  *param_1 = 1;
  return;
}


// ===== 007e5f50  FUN_007e5f50 =====

void FUN_007e5f50(long param_1,ulong param_2,uint *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  uint *__src;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  uint *__dest;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong local_308;
  ulong local_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar4 = 0;
  if (param_2 != 0) {
    uVar4 = 0x4000000000000000 / param_2;
  }
  if (uVar4 * param_2 != 0x4000000000000000) {
    uVar4 = uVar4 + 1;
  }
  if (param_2 < 0x1001) {
    local_308 = param_2 - (param_2 >> 1);
    if (0x3f < local_308) {
      local_308 = 0x40;
    }
  }
  else {
    local_308 = core::slice::sort::stable::drift::sqrt_approx(param_2);
  }
  uVar17 = 0;
  uVar20 = 0;
  uVar18 = 1;
  uVar14 = param_2;
  if (param_2 == 0) goto LAB_007e605c;
LAB_007e6004:
  puVar7 = (uint *)(param_1 + uVar17 * 8);
  if (uVar14 < local_308) {
LAB_007e6018:
    if ((param_5 & 1) == 0) {
      if (local_308 <= uVar14) {
        uVar14 = local_308;
      }
      uVar14 = uVar14 << 1;
    }
    else {
      if (0x1f < uVar14) {
        uVar14 = 0x20;
      }
      core::slice::sort::stable::quicksort::
      quicksort<(u32,u32),<_backref_15_as_core::cmp::PartialOrd>::lt>
                (puVar7,uVar14,param_3,param_4,0,0,param_6);
      uVar14 = uVar14 << 1 | 1;
    }
    goto LAB_007e61b0;
  }
  if (1 < uVar14) {
    uVar13 = puVar7[2];
    uVar15 = puVar7[3];
    bVar5 = uVar15 < puVar7[1];
    if (uVar13 != *puVar7) {
      bVar5 = uVar13 < *puVar7;
    }
    if (bVar5) {
      if (uVar14 == 2) {
        uVar19 = 1;
        uVar10 = 2;
      }
      else {
        puVar16 = (uint *)(param_1 + 0x14 + uVar17 * 8);
        uVar19 = 2;
        do {
          uVar2 = puVar16[-1];
          uVar3 = *puVar16;
          bVar6 = uVar3 < uVar15;
          if (uVar2 != uVar13) {
            bVar6 = uVar2 < uVar13;
          }
          uVar10 = uVar19;
          if (!bVar6) break;
          uVar19 = uVar19 + 1;
          puVar16 = puVar16 + 2;
          uVar10 = uVar14;
          uVar13 = uVar2;
          uVar15 = uVar3;
        } while (uVar14 != uVar19);
LAB_007e6168:
        if (uVar10 < local_308) goto LAB_007e6018;
        uVar14 = uVar10;
        if ((!bVar5) || (uVar19 = uVar10 >> 1, uVar19 == 0)) goto LAB_007e61a8;
      }
      puVar11 = (undefined8 *)(param_1 + -8 + uVar10 * 8 + uVar17 * 8);
      do {
        uVar23 = *(undefined8 *)puVar7;
        uVar19 = uVar19 - 1;
        *(undefined8 *)puVar7 = *puVar11;
        *puVar11 = uVar23;
        puVar7 = puVar7 + 2;
        uVar14 = uVar10;
        puVar11 = puVar11 + -1;
      } while (uVar19 != 0);
    }
    else {
      if (uVar14 != 2) {
        puVar16 = (uint *)(param_1 + 0x14 + uVar17 * 8);
        uVar19 = 2;
        do {
          uVar2 = puVar16[-1];
          uVar3 = *puVar16;
          bVar6 = uVar3 < uVar15;
          if (uVar2 != uVar13) {
            bVar6 = uVar2 < uVar13;
          }
          uVar10 = uVar19;
          if (bVar6) break;
          uVar19 = uVar19 + 1;
          puVar16 = puVar16 + 2;
          uVar10 = uVar14;
          uVar13 = uVar2;
          uVar15 = uVar3;
        } while (uVar14 != uVar19);
        goto LAB_007e6168;
      }
      uVar14 = 2;
    }
  }
LAB_007e61a8:
  uVar14 = uVar14 << 1 | 1;
LAB_007e61b0:
  lVar12 = LZCOUNT((uVar17 * 2 + (uVar14 >> 1)) * uVar4 ^ (uVar17 * 2 - (uVar18 >> 1)) * uVar4);
  uVar19 = uVar18;
  do {
    uVar18 = uVar14;
    if (1 < uVar20) {
      do {
        while( true ) {
          uVar14 = uVar20 - 1;
          if ((uint)abStack_ab[uVar20] < (uint)lVar12) goto LAB_007e63f8;
          uVar22 = uVar19 >> 1;
          uVar9 = local_2c0[uVar14];
          uVar21 = uVar9 >> 1;
          uVar10 = uVar21 + uVar22;
          uVar20 = uVar14;
          if (uVar10 <= param_4 && (((uint)uVar9 | (uint)uVar19) & 1) == 0) break;
          puVar7 = (uint *)(param_1 + (uVar17 - uVar10) * 8);
          if ((uVar9 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<(u32,u32),<_backref_15_as_core::cmp::PartialOrd>::lt>
                      (puVar7,uVar21,param_3,param_4,(int)LZCOUNT(uVar21 | 1) << 1 ^ 0x7e,0,param_6)
            ;
          }
          if ((uVar19 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<(u32,u32),<_backref_15_as_core::cmp::PartialOrd>::lt>
                      (puVar7 + uVar21 * 2,uVar22,param_3,param_4,
                       (int)LZCOUNT(uVar22 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar22 != 0) && (uVar21 != 0)) {
            uVar19 = uVar22;
            if (uVar21 <= uVar22) {
              uVar19 = uVar21;
            }
            if (uVar19 <= param_4) {
              puVar16 = puVar7 + uVar21 * 2;
              puVar8 = puVar16;
              if (uVar21 <= uVar22) {
                puVar8 = puVar7;
              }
              memcpy(param_3,puVar8,uVar19 * 8);
              puVar8 = param_3 + uVar19 * 2;
              __src = param_3;
              puVar11 = (undefined8 *)(param_1 + -8 + uVar17 * 8);
              if (uVar22 < uVar21) {
                do {
                  uVar13 = puVar8[-2];
                  uVar15 = puVar16[-2];
                  bVar5 = puVar8[-1] < puVar16[-1];
                  if (uVar13 != uVar15) {
                    bVar5 = uVar13 < uVar15;
                  }
                  uVar13 = (uint)bVar5;
                  puVar1 = puVar16;
                  if (uVar13 == 0) {
                    puVar1 = puVar8;
                  }
                  __dest = puVar16 + -2 + (ulong)(uVar13 ^ 1) * 2;
                  puVar8 = puVar8 + -2 + (ulong)uVar13 * 2;
                  *puVar11 = *(undefined8 *)(puVar1 + -2);
                  puVar11 = puVar11 + -1;
                  puVar16 = __dest;
                } while (__dest != puVar7 && puVar8 != param_3);
              }
              else {
                do {
                  bVar5 = puVar16[1] < __src[1];
                  if (*puVar16 != *__src) {
                    bVar5 = *puVar16 < *__src;
                  }
                  uVar13 = (uint)bVar5;
                  puVar1 = puVar16;
                  if (uVar13 == 0) {
                    puVar1 = __src;
                  }
                  __src = __src + (ulong)(uVar13 ^ 1) * 2;
                  puVar16 = puVar16 + (ulong)uVar13 * 2;
                  __dest = puVar7 + 2;
                  *(undefined8 *)puVar7 = *(undefined8 *)puVar1;
                  puVar7 = __dest;
                } while (__src != puVar8 && puVar16 != (uint *)(param_1 + uVar17 * 8));
              }
              memcpy(__dest,__src,(long)puVar8 - (long)__src);
            }
          }
          uVar19 = uVar10 * 2 | 1;
          if (uVar14 < 2) goto LAB_007e63ec;
        }
        uVar19 = uVar10 * 2;
      } while (1 < uVar14);
LAB_007e63ec:
      uVar20 = 1;
    }
LAB_007e63f8:
    local_2c0[uVar20] = uVar19;
    abStack_ab[uVar20 + 1] = (byte)lVar12;
    if (param_2 <= uVar17) {
      if ((uVar19 & 1) != 0) {
        return;
      }
      core::slice::sort::stable::quicksort::
      quicksort<(u32,u32),<_backref_15_as_core::cmp::PartialOrd>::lt>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar17 = uVar17 + (uVar18 >> 1);
    uVar20 = uVar20 + 1;
    uVar14 = param_2 - uVar17;
    if (uVar17 <= param_2 && uVar14 != 0) goto LAB_007e6004;
LAB_007e605c:
    lVar12 = 0;
    uVar14 = 1;
    uVar19 = uVar18;
  } while( true );
}


// ===== 007e6470  FUN_007e6470 =====

void FUN_007e6470(long param_1,ulong param_2,ulong *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *__src;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong local_300;
  ulong local_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = 0x4000000000000000 / param_2;
  }
  if (uVar5 * param_2 != 0x4000000000000000) {
    uVar5 = uVar5 + 1;
  }
  if (param_2 < 0x1001) {
    local_300 = param_2 - (param_2 >> 1);
    if (0x3f < local_300) {
      local_300 = 0x40;
    }
  }
  else {
    local_300 = core::slice::sort::stable::drift::sqrt_approx(param_2);
  }
  uVar16 = 0;
  uVar20 = 0;
  uVar18 = 1;
  uVar13 = param_2;
  if (param_2 == 0) goto LAB_007e6574;
LAB_007e651c:
  puVar6 = (ulong *)(param_1 + uVar16 * 0x20);
  if (uVar13 < local_300) {
LAB_007e6530:
    if ((param_5 & 1) == 0) {
      if (local_300 <= uVar13) {
        uVar13 = local_300;
      }
      uVar13 = uVar13 << 1;
    }
    else {
      if (0x1f < uVar13) {
        uVar13 = 0x20;
      }
      core::slice::sort::stable::quicksort::
      quicksort<(u128,u128),<_backref_15_as_core::cmp::PartialOrd>::lt>
                (puVar6,uVar13,param_3,param_4,0,0,param_6);
      uVar13 = uVar13 << 1 | 1;
    }
    goto LAB_007e6720;
  }
  uVar19 = uVar13;
  if (1 < uVar13) {
    uVar14 = puVar6[4];
    uVar21 = puVar6[5];
    uVar8 = puVar6[6];
    uVar22 = puVar6[7];
    uVar19 = ~puVar6[1];
    bVar1 = !CARRY8(uVar22,~puVar6[3]) && !CARRY8(uVar22 + ~puVar6[3],(ulong)(puVar6[2] <= uVar8));
    if (uVar14 != *puVar6 || uVar21 != puVar6[1]) {
      bVar1 = !CARRY8(uVar21,uVar19) && !CARRY8(uVar21 + uVar19,(ulong)(*puVar6 <= uVar14));
    }
    if (bVar1) {
      if (uVar13 == 2) {
        uVar13 = 1;
        uVar10 = 2;
      }
      else {
        uVar19 = 2;
        do {
          puVar12 = puVar6 + uVar19 * 4;
          uVar23 = *puVar12;
          uVar24 = puVar12[1];
          uVar4 = puVar12[3];
          bVar2 = !CARRY8(uVar4,~uVar22) && !CARRY8(uVar4 + ~uVar22,(ulong)(uVar8 <= puVar12[2]));
          if (uVar23 != uVar14 || uVar24 != uVar21) {
            bVar2 = !CARRY8(uVar24,~uVar21) && !CARRY8(uVar24 + ~uVar21,(ulong)(uVar14 <= uVar23));
          }
          uVar10 = uVar19;
        } while ((bVar2) &&
                (uVar19 = uVar19 + 1, uVar10 = uVar13, uVar14 = uVar23, uVar22 = uVar4,
                uVar8 = puVar12[2], uVar21 = uVar24, uVar13 != uVar19));
LAB_007e66cc:
        if (uVar10 < local_300) goto LAB_007e6530;
        uVar19 = uVar10;
        if ((!bVar1) || (uVar13 = uVar10 >> 1, uVar13 == 0)) goto LAB_007e6718;
      }
      puVar12 = (ulong *)(param_1 + -0x20 + uVar10 * 0x20 + uVar16 * 0x20);
      do {
        uVar8 = *puVar12;
        uVar22 = puVar12[3];
        uVar21 = puVar12[2];
        uVar13 = uVar13 - 1;
        uVar19 = puVar6[2];
        uVar14 = puVar6[3];
        uVar24 = puVar6[1];
        uVar23 = *puVar6;
        puVar6[1] = puVar12[1];
        *puVar6 = uVar8;
        puVar6[3] = uVar22;
        puVar6[2] = uVar21;
        puVar12[1] = uVar24;
        *puVar12 = uVar23;
        puVar12[2] = uVar19;
        puVar12[3] = uVar14;
        puVar12 = puVar12 + -4;
        puVar6 = puVar6 + 4;
        uVar19 = uVar10;
      } while (uVar13 != 0);
    }
    else {
      uVar19 = 2;
      if (uVar13 != 2) {
        do {
          puVar12 = puVar6 + uVar19 * 4;
          uVar23 = *puVar12;
          uVar24 = puVar12[1];
          uVar4 = puVar12[3];
          bVar2 = !CARRY8(uVar4,~uVar22) && !CARRY8(uVar4 + ~uVar22,(ulong)(uVar8 <= puVar12[2]));
          if (uVar23 != uVar14 || uVar24 != uVar21) {
            bVar2 = !CARRY8(uVar24,~uVar21) && !CARRY8(uVar24 + ~uVar21,(ulong)(uVar14 <= uVar23));
          }
          uVar10 = uVar19;
        } while ((!bVar2) &&
                (uVar19 = uVar19 + 1, uVar10 = uVar13, uVar14 = uVar23, uVar22 = uVar4,
                uVar8 = puVar12[2], uVar21 = uVar24, uVar13 != uVar19));
        goto LAB_007e66cc;
      }
    }
  }
LAB_007e6718:
  uVar13 = uVar19 << 1 | 1;
LAB_007e6720:
  lVar15 = LZCOUNT((uVar16 * 2 + (uVar13 >> 1)) * uVar5 ^ (uVar16 * 2 - (uVar18 >> 1)) * uVar5);
  uVar19 = uVar18;
  do {
    uVar18 = uVar13;
    if (1 < uVar20) {
      do {
        while( true ) {
          uVar13 = uVar20 - 1;
          if ((uint)abStack_ab[uVar20] < (uint)lVar15) goto LAB_007e6998;
          uVar22 = uVar19 >> 1;
          uVar8 = local_2c0[uVar13];
          uVar21 = uVar8 >> 1;
          uVar14 = uVar21 + uVar22;
          uVar20 = uVar13;
          if (uVar14 <= param_4 && (((uint)uVar8 | (uint)uVar19) & 1) == 0) break;
          puVar6 = (ulong *)(param_1 + (uVar16 - uVar14) * 0x20);
          if ((uVar8 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<(u128,u128),<_backref_15_as_core::cmp::PartialOrd>::lt>
                      (puVar6,uVar21,param_3,param_4,(int)LZCOUNT(uVar21 | 1) << 1 ^ 0x7e,0,param_6)
            ;
          }
          if ((uVar19 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<(u128,u128),<_backref_15_as_core::cmp::PartialOrd>::lt>
                      (puVar6 + uVar21 * 4,uVar22,param_3,param_4,
                       (int)LZCOUNT(uVar22 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar22 != 0) && (uVar21 != 0)) {
            uVar19 = uVar22;
            if (uVar21 <= uVar22) {
              uVar19 = uVar21;
            }
            if (uVar19 <= param_4) {
              puVar12 = puVar6 + uVar21 * 4;
              puVar7 = puVar12;
              if (uVar21 <= uVar22) {
                puVar7 = puVar6;
              }
              memcpy(param_3,puVar7,uVar19 * 0x20);
              puVar7 = param_3 + uVar19 * 4;
              __src = param_3;
              puVar11 = (ulong *)(param_1 + -0x20 + uVar16 * 0x20);
              if (uVar22 < uVar21) {
                do {
                  puVar17 = puVar12 + -4;
                  puVar9 = puVar7 + -4;
                  uVar19 = puVar7[-3];
                  uVar8 = ~puVar12[-3];
                  bVar1 = !CARRY8(puVar7[-1],~puVar12[-1]) &&
                          !CARRY8(puVar7[-1] + ~puVar12[-1],(ulong)(puVar12[-2] <= puVar7[-2]));
                  if (*puVar9 != *puVar17 || uVar19 != puVar12[-3]) {
                    bVar1 = !CARRY8(uVar19,uVar8) &&
                            !CARRY8(uVar19 + uVar8,(ulong)(*puVar17 <= *puVar9));
                  }
                  uVar3 = (uint)bVar1;
                  puVar12 = puVar17;
                  if (uVar3 == 0) {
                    puVar12 = puVar9;
                  }
                  puVar17 = puVar17 + (ulong)(uVar3 ^ 1) * 4;
                  puVar7 = puVar9 + (ulong)uVar3 * 4;
                  uVar19 = *puVar12;
                  uVar21 = puVar12[3];
                  uVar8 = puVar12[2];
                  puVar11[1] = puVar12[1];
                  *puVar11 = uVar19;
                  puVar11[3] = uVar21;
                  puVar11[2] = uVar8;
                } while ((puVar17 != puVar6) &&
                        (puVar11 = puVar11 + -4, puVar12 = puVar17, puVar7 != param_3));
              }
              else {
                do {
                  uVar19 = puVar12[1];
                  uVar8 = ~__src[1];
                  bVar1 = !CARRY8(puVar12[3],~__src[3]) &&
                          !CARRY8(puVar12[3] + ~__src[3],(ulong)(__src[2] <= puVar12[2]));
                  if (*puVar12 != *__src || uVar19 != __src[1]) {
                    bVar1 = !CARRY8(uVar19,uVar8) &&
                            !CARRY8(uVar19 + uVar8,(ulong)(*__src <= *puVar12));
                  }
                  uVar3 = (uint)bVar1;
                  puVar11 = puVar12;
                  if (uVar3 == 0) {
                    puVar11 = __src;
                  }
                  __src = __src + (ulong)(uVar3 ^ 1) * 4;
                  uVar19 = *puVar11;
                  uVar21 = puVar11[3];
                  uVar8 = puVar11[2];
                  puVar17 = puVar6 + 4;
                  puVar6[1] = puVar11[1];
                  *puVar6 = uVar19;
                  puVar6[3] = uVar21;
                  puVar6[2] = uVar8;
                } while ((__src != puVar7) &&
                        (puVar12 = puVar12 + (ulong)uVar3 * 4, puVar6 = puVar17,
                        puVar12 != (ulong *)(param_1 + uVar16 * 0x20)));
              }
              memcpy(puVar17,__src,(long)puVar7 - (long)__src);
            }
          }
          uVar19 = uVar14 * 2 | 1;
          if (uVar13 < 2) goto LAB_007e698c;
        }
        uVar19 = uVar14 * 2;
      } while (1 < uVar13);
LAB_007e698c:
      uVar20 = 1;
    }
LAB_007e6998:
    local_2c0[uVar20] = uVar19;
    abStack_ab[uVar20 + 1] = (byte)lVar15;
    if (param_2 <= uVar16) {
      if ((uVar19 & 1) != 0) {
        return;
      }
      core::slice::sort::stable::quicksort::
      quicksort<(u128,u128),<_backref_15_as_core::cmp::PartialOrd>::lt>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar16 = uVar16 + (uVar18 >> 1);
    uVar20 = uVar20 + 1;
    uVar13 = param_2 - uVar16;
    if (uVar16 <= param_2 && uVar13 != 0) goto LAB_007e651c;
LAB_007e6574:
    lVar15 = 0;
    uVar13 = 1;
    uVar19 = uVar18;
  } while( true );
}


// ===== 007e6a14  core::slice::sort::stable::quicksort::quicksort<(u32,u32),<{backref_15}as_core::cmp::PartialOrd>::lt> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::stable::quicksort::quicksort<(u32, u32), <{backref 15} as
   core::cmp::PartialOrd>::lt> */

void __rustcall
core::slice::sort::stable::quicksort::
quicksort<(u32,u32),<_backref_15_as_core::cmp::PartialOrd>::lt>
          (uint *param_1,ulong param_2,void *param_3,ulong param_4,int param_5,uint *param_6,
          undefined8 param_7)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint *puVar13;
  void *pvVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  void *pvVar20;
  undefined1 (*pauVar21) [16];
  undefined8 *puVar22;
  ulong uVar23;
  void *pvVar24;
  ulong uVar25;
  ulong uVar26;
  void *pvVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint local_68;
  uint uStack_64;
  
  if (param_2 < 0x21) {
LAB_007e6fc8:
    FUN_007e9d48(param_1,param_2,param_3,param_4,param_7);
  }
  else {
    while (param_5 != 0) {
      puVar17 = param_1 + (param_2 >> 3) * 0xe;
      puVar16 = param_1 + (param_2 >> 3) * 8;
      if (param_2 < 0x40) {
        uVar4 = *puVar16;
        uVar5 = *param_1;
        uVar6 = *puVar17;
        bVar12 = param_1[1] < puVar16[1];
        if (uVar5 != uVar4) {
          bVar12 = uVar5 < uVar4;
        }
        bVar11 = param_1[1] < puVar17[1];
        if (uVar5 != uVar6) {
          bVar11 = uVar5 < uVar6;
        }
        puVar13 = param_1;
        if (bVar12 == bVar11) {
          bVar11 = puVar16[1] < puVar17[1];
          if (uVar4 != uVar6) {
            bVar11 = uVar4 < uVar6;
          }
          puVar13 = puVar17;
          if (bVar12 == bVar11) {
            puVar13 = puVar16;
          }
        }
      }
      else {
        puVar13 = (uint *)FUN_007e7c2c(param_1);
      }
      local_68 = *puVar13;
      uStack_64 = puVar13[1];
      pvVar27 = (void *)((long)param_3 + param_2 * 8);
      param_5 = param_5 + -1;
      uVar25 = (ulong)((long)puVar13 - (long)param_1) >> 3;
      if (param_6 == (uint *)0x0) {
LAB_007e6b30:
        if (param_2 <= param_4) {
          uVar26 = 0;
          lVar19 = 0;
          if (2 < uVar25) {
            lVar19 = uVar25 - 3;
          }
          puVar17 = param_1 + lVar19 * 2;
          puVar16 = param_1;
          pvVar20 = pvVar27;
          uVar18 = uVar25;
          if (puVar17 <= param_1) goto LAB_007e6c30;
LAB_007e6b5c:
          uVar4 = *puVar13;
          uVar5 = puVar13[1];
          do {
            uVar6 = puVar16[6];
            bVar12 = puVar16[1] < uVar5;
            if (*puVar16 != uVar4) {
              bVar12 = *puVar16 < uVar4;
            }
            lVar19 = uVar26 + (uint)bVar12;
            pvVar3 = param_3;
            if (bVar12 == 0) {
              pvVar3 = (void *)((long)pvVar20 + -8);
            }
            bVar12 = puVar16[3] < uVar5;
            if (puVar16[2] != uVar4) {
              bVar12 = puVar16[2] < uVar4;
            }
            uVar7 = puVar16[4];
            uVar8 = puVar16[5];
            pvVar24 = param_3;
            if (bVar12 == 0) {
              pvVar24 = (void *)((long)pvVar20 + -0x10);
            }
            *(undefined8 *)((long)pvVar3 + uVar26 * 8) = *(undefined8 *)puVar16;
            uVar9 = puVar16[7];
            bVar11 = uVar8 < uVar5;
            if (uVar7 != uVar4) {
              bVar11 = uVar7 < uVar4;
            }
            pvVar14 = (void *)((long)pvVar20 + -0x18);
            pvVar20 = (void *)((long)pvVar20 + -0x20);
            pvVar3 = param_3;
            if (bVar11 == 0) {
              pvVar3 = pvVar14;
            }
            *(undefined8 *)((long)pvVar24 + lVar19 * 8) = *(undefined8 *)(puVar16 + 2);
            lVar19 = lVar19 + (ulong)(uint)bVar12;
            *(undefined8 *)((long)pvVar3 + lVar19 * 8) = *(undefined8 *)(puVar16 + 4);
            bVar12 = uVar9 < uVar5;
            if (uVar6 != uVar4) {
              bVar12 = uVar6 < uVar4;
            }
            puVar1 = puVar16 + 6;
            puVar16 = puVar16 + 8;
            lVar19 = lVar19 + (ulong)(uint)bVar11;
            pvVar3 = param_3;
            if (bVar12 == 0) {
              pvVar3 = pvVar20;
            }
            uVar26 = lVar19 + (ulong)(uint)bVar12;
            *(undefined8 *)((long)pvVar3 + lVar19 * 8) = *(undefined8 *)puVar1;
          } while (puVar16 < puVar17);
LAB_007e6c30:
          puVar17 = puVar16;
          if (puVar16 < param_1 + uVar18 * 2) {
            uVar4 = *puVar13;
            uVar5 = puVar13[1];
            do {
              pvVar20 = (void *)((long)pvVar20 + -8);
              bVar12 = puVar16[1] < uVar5;
              if (*puVar16 != uVar4) {
                bVar12 = *puVar16 < uVar4;
              }
              puVar17 = puVar16 + 2;
              pvVar3 = param_3;
              if (bVar12 == 0) {
                pvVar3 = pvVar20;
              }
              *(undefined8 *)((long)pvVar3 + uVar26 * 8) = *(undefined8 *)puVar16;
              uVar26 = uVar26 + (uint)bVar12;
              puVar16 = puVar17;
            } while (puVar17 < param_1 + uVar18 * 2);
          }
          if (uVar18 != param_2) goto code_r0x007e6c80;
          memcpy(param_1,param_3,uVar26 << 3);
          uVar18 = param_2 - uVar26;
          if (uVar18 == 0) goto LAB_007e6d40;
          if (3 < uVar18) {
            uVar23 = uVar18 & 0xfffffffffffffffc;
            puVar16 = param_1 + uVar26 * 2 + 4;
            pauVar21 = (undefined1 (*) [16])((long)param_3 + param_2 * 8 + -0x10);
            uVar15 = uVar18 & 0xfffffffffffffffc;
            do {
              pauVar2 = pauVar21 + -1;
              auVar28 = *pauVar21;
              uVar23 = uVar23 - 4;
              pauVar21 = pauVar21 + -2;
              auVar28 = NEON_ext(auVar28,auVar28,8,1);
              auVar29 = NEON_ext(*pauVar2,*pauVar2,8,1);
              *(long *)(puVar16 + -2) = auVar28._8_8_;
              *(long *)(puVar16 + -4) = auVar28._0_8_;
              *(long *)(puVar16 + 2) = auVar29._8_8_;
              *(long *)puVar16 = auVar29._0_8_;
              puVar16 = puVar16 + 8;
            } while (uVar23 != 0);
            if (uVar18 != uVar15) {
LAB_007e6d10:
              lVar19 = (uVar15 - param_2) + uVar26;
              puVar16 = param_1 + uVar15 * 2 + uVar26 * 2;
              puVar22 = (undefined8 *)((long)param_3 + param_2 * 8 + uVar15 * -8 + -8);
              do {
                bVar12 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                *(undefined8 *)puVar16 = *puVar22;
                puVar16 = puVar16 + 2;
                puVar22 = puVar22 + -1;
              } while (bVar12);
            }
LAB_007e6d40:
            if (uVar26 == 0) goto LAB_007e6d78;
            if (param_2 < uVar26) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_fmt
                        (&DAT_002e631b,0x13,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae06d0);
            }
            quicksort<(u32,u32),<_backref_15_as_core::cmp::PartialOrd>::lt>
                      (param_1 + uVar26 * 2,uVar18,param_3,param_4,param_5,&local_68,param_7);
            param_2 = uVar26;
            goto joined_r0x007e6d70;
          }
          uVar15 = 0;
          goto LAB_007e6d10;
        }
        goto LAB_007e7004;
      }
      bVar12 = param_6[1] < uStack_64;
      if (*param_6 != local_68) {
        bVar12 = *param_6 < local_68;
      }
      if (bVar12) goto LAB_007e6b30;
LAB_007e6d78:
      if (param_4 < param_2) {
LAB_007e7004:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x7e7008);
        (*pcVar10)();
      }
      uVar26 = 0;
      lVar19 = 0;
      if (2 < uVar25) {
        lVar19 = uVar25 - 3;
      }
      puVar17 = param_1 + lVar19 * 2;
      puVar16 = param_1;
      if (puVar17 <= param_1) goto LAB_007e6e70;
LAB_007e6d9c:
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      do {
        uVar6 = puVar16[6];
        bVar12 = puVar16[1] <= uVar5;
        if (uVar4 != *puVar16) {
          bVar12 = *puVar16 <= uVar4;
        }
        lVar19 = uVar26 + (uint)bVar12;
        pvVar20 = param_3;
        if (bVar12 == 0) {
          pvVar20 = (void *)((long)pvVar27 + -8);
        }
        bVar12 = puVar16[3] <= uVar5;
        if (uVar4 != puVar16[2]) {
          bVar12 = puVar16[2] <= uVar4;
        }
        uVar7 = puVar16[4];
        uVar8 = puVar16[5];
        pvVar3 = param_3;
        if (bVar12 == 0) {
          pvVar3 = (void *)((long)pvVar27 + -0x10);
        }
        *(undefined8 *)((long)pvVar20 + uVar26 * 8) = *(undefined8 *)puVar16;
        uVar9 = puVar16[7];
        bVar11 = uVar8 <= uVar5;
        if (uVar4 != uVar7) {
          bVar11 = uVar7 <= uVar4;
        }
        pvVar24 = (void *)((long)pvVar27 + -0x18);
        pvVar27 = (void *)((long)pvVar27 + -0x20);
        pvVar20 = param_3;
        if (bVar11 == 0) {
          pvVar20 = pvVar24;
        }
        *(undefined8 *)((long)pvVar3 + lVar19 * 8) = *(undefined8 *)(puVar16 + 2);
        lVar19 = lVar19 + (ulong)(uint)bVar12;
        *(undefined8 *)((long)pvVar20 + lVar19 * 8) = *(undefined8 *)(puVar16 + 4);
        bVar12 = uVar9 <= uVar5;
        if (uVar4 != uVar6) {
          bVar12 = uVar6 <= uVar4;
        }
        puVar1 = puVar16 + 6;
        puVar16 = puVar16 + 8;
        lVar19 = lVar19 + (ulong)(uint)bVar11;
        pvVar20 = param_3;
        if (bVar12 == 0) {
          pvVar20 = pvVar27;
        }
        uVar26 = lVar19 + (ulong)(uint)bVar12;
        *(undefined8 *)((long)pvVar20 + lVar19 * 8) = *(undefined8 *)puVar1;
      } while (puVar16 < puVar17);
LAB_007e6e70:
      puVar17 = puVar16;
      if (puVar16 < param_1 + uVar25 * 2) {
        uVar4 = *puVar13;
        uVar5 = puVar13[1];
        do {
          pvVar27 = (void *)((long)pvVar27 + -8);
          bVar12 = puVar16[1] <= uVar5;
          if (uVar4 != *puVar16) {
            bVar12 = *puVar16 <= uVar4;
          }
          puVar17 = puVar16 + 2;
          pvVar20 = param_3;
          if (bVar12 == 0) {
            pvVar20 = pvVar27;
          }
          *(undefined8 *)((long)pvVar20 + uVar26 * 8) = *(undefined8 *)puVar16;
          uVar26 = uVar26 + (uint)bVar12;
          puVar16 = puVar17;
        } while (puVar17 < param_1 + uVar25 * 2);
      }
      if (uVar25 != param_2) goto code_r0x007e6ec0;
      memcpy(param_1,param_3,uVar26 << 3);
      uVar25 = param_2 - uVar26;
      if (uVar25 == 0) {
        param_1 = param_1 + param_2 * 2;
        param_2 = uVar25;
        goto LAB_007e6fc8;
      }
      if (uVar25 < 4) {
        uVar18 = 0;
        goto LAB_007e6f54;
      }
      puVar16 = param_1 + uVar26 * 2 + 4;
      uVar15 = uVar25 & 0xfffffffffffffffc;
      pauVar21 = (undefined1 (*) [16])((long)param_3 + param_2 * 8 + -0x10);
      uVar18 = uVar25 & 0xfffffffffffffffc;
      do {
        pauVar2 = pauVar21 + -1;
        auVar28 = *pauVar21;
        uVar15 = uVar15 - 4;
        pauVar21 = pauVar21 + -2;
        auVar28 = NEON_ext(auVar28,auVar28,8,1);
        auVar29 = NEON_ext(*pauVar2,*pauVar2,8,1);
        *(long *)(puVar16 + -2) = auVar28._8_8_;
        *(long *)(puVar16 + -4) = auVar28._0_8_;
        *(long *)(puVar16 + 2) = auVar29._8_8_;
        *(long *)puVar16 = auVar29._0_8_;
        puVar16 = puVar16 + 8;
      } while (uVar15 != 0);
      if (uVar25 != uVar18) {
LAB_007e6f54:
        lVar19 = (uVar18 - param_2) + uVar26;
        puVar16 = param_1 + uVar18 * 2 + uVar26 * 2;
        puVar22 = (undefined8 *)((long)param_3 + param_2 * 8 + uVar18 * -8 + -8);
        do {
          bVar12 = lVar19 != -1;
          lVar19 = lVar19 + 1;
          *(undefined8 *)puVar16 = *puVar22;
          puVar16 = puVar16 + 2;
          puVar22 = puVar22 + -1;
        } while (bVar12);
      }
      if (param_2 < uVar26) {
                    /* WARNING: Subroutine does not return */
        index::slice_index_fail
                  (uVar26,param_2,param_2,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae06e8);
      }
      param_6 = (uint *)0x0;
      param_1 = param_1 + uVar26 * 2;
      param_2 = uVar25;
joined_r0x007e6d70:
      if (param_2 < 0x21) goto LAB_007e6fc8;
    }
    FUN_007e5f50(param_1,param_2,param_3,param_4,1,param_7);
  }
  return;
code_r0x007e6c80:
  pvVar20 = (void *)((long)pvVar20 + -8);
  puVar16 = puVar17 + 2;
  *(undefined8 *)((long)pvVar20 + uVar26 * 8) = *(undefined8 *)puVar17;
  lVar19 = 0;
  if (2 < param_2) {
    lVar19 = param_2 - 3;
  }
  puVar17 = param_1 + lVar19 * 2;
  uVar18 = param_2;
  if (puVar16 < puVar17) goto LAB_007e6b5c;
  goto LAB_007e6c30;
code_r0x007e6ec0:
  puVar16 = puVar17 + 2;
  pvVar27 = (void *)((long)pvVar27 + -8);
  *(undefined8 *)((long)param_3 + uVar26 * 8) = *(undefined8 *)puVar17;
  uVar26 = uVar26 + 1;
  lVar19 = 0;
  if (2 < param_2) {
    lVar19 = param_2 - 3;
  }
  puVar17 = param_1 + lVar19 * 2;
  uVar25 = param_2;
  if (puVar16 < puVar17) goto LAB_007e6d9c;
  goto LAB_007e6e70;
}


// ===== 007e7038  core::slice::sort::stable::quicksort::quicksort<(u128,u128),<{backref_15}as_core::cmp::PartialOrd>::lt> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::stable::quicksort::quicksort<(u128, u128), <{backref 15} as
   core::cmp::PartialOrd>::lt> */

void __rustcall
core::slice::sort::stable::quicksort::
quicksort<(u128,u128),<_backref_15_as_core::cmp::PartialOrd>::lt>
          (ulong *param_1,ulong param_2,void *param_3,ulong param_4,int param_5,ulong *param_6,
          undefined8 param_7)

{
  bool bVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  void *pvVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  if (param_2 < 0x21) {
LAB_007e7074:
    FUN_007ea294(param_1,param_2,param_3,param_4,param_7);
  }
  else {
    while (param_5 != 0) {
      puVar11 = param_1 + (param_2 >> 3) * 0x1c;
      puVar13 = param_1 + (param_2 >> 3) * 0x10;
      if (param_2 < 0x40) {
        uVar16 = *puVar13;
        uVar19 = puVar13[1];
        uVar17 = *param_1;
        uVar21 = param_1[1];
        uVar22 = param_1[3];
        uVar4 = puVar13[3];
        uVar20 = *puVar11;
        uVar5 = puVar11[1];
        bVar9 = !CARRY8(uVar22,~uVar4) && !CARRY8(uVar22 + ~uVar4,(ulong)(puVar13[2] <= param_1[2]))
        ;
        if (uVar17 != uVar16 || uVar21 != uVar19) {
          bVar9 = !CARRY8(uVar21,~uVar19) && !CARRY8(uVar21 + ~uVar19,(ulong)(uVar16 <= uVar17));
        }
        uVar6 = ~puVar11[3];
        bVar1 = !CARRY8(uVar22,uVar6) && !CARRY8(uVar22 + uVar6,(ulong)(puVar11[2] <= param_1[2]));
        if (uVar17 != uVar20 || uVar21 != uVar5) {
          bVar1 = !CARRY8(uVar21,~uVar5) && !CARRY8(uVar21 + ~uVar5,(ulong)(uVar20 <= uVar17));
        }
        puVar10 = param_1;
        if (bVar9 == bVar1) {
          uVar17 = ~puVar11[3];
          bVar1 = !CARRY8(uVar4,uVar17) && !CARRY8(uVar4 + uVar17,(ulong)(puVar11[2] <= puVar13[2]))
          ;
          if (uVar16 != uVar20 || uVar19 != uVar5) {
            bVar1 = !CARRY8(uVar19,~uVar5) && !CARRY8(uVar19 + ~uVar5,(ulong)(uVar20 <= uVar16));
          }
          puVar10 = puVar11;
          if (bVar9 == bVar1) {
            puVar10 = puVar13;
          }
        }
      }
      else {
        puVar10 = (ulong *)FUN_007e7d2c(param_1);
      }
      local_80 = *puVar10;
      uStack_78 = puVar10[1];
      local_70 = puVar10[2];
      uStack_68 = puVar10[3];
      pvVar18 = (void *)((long)param_3 + param_2 * 0x20);
      uVar16 = (ulong)((long)puVar10 - (long)param_1) >> 5;
      param_5 = param_5 + -1;
      if (param_6 == (ulong *)0x0) {
LAB_007e71e0:
        if (param_2 <= param_4) {
          uVar17 = 0;
          puVar13 = param_1 + uVar16 * 4;
          puVar11 = param_1;
          puVar12 = param_1;
          pvVar14 = pvVar18;
          uVar20 = uVar16;
          if (puVar13 <= param_1) goto LAB_007e7264;
LAB_007e7204:
          do {
            uVar19 = puVar11[1];
            pvVar14 = (void *)((long)pvVar14 + -0x20);
            uVar21 = ~puVar10[1];
            bVar9 = !CARRY8(puVar11[3],~puVar10[3]) &&
                    !CARRY8(puVar11[3] + ~puVar10[3],(ulong)(puVar10[2] <= puVar11[2]));
            if (*puVar11 != *puVar10 || uVar19 != puVar10[1]) {
              bVar9 = !CARRY8(uVar19,uVar21) &&
                      !CARRY8(uVar19 + uVar21,(ulong)(*puVar10 <= *puVar11));
            }
            pvVar3 = param_3;
            if (bVar9 == 0) {
              pvVar3 = pvVar14;
            }
            puVar12 = puVar11 + 4;
            uVar22 = *puVar11;
            uVar21 = puVar11[3];
            uVar19 = puVar11[2];
            puVar2 = (ulong *)((long)pvVar3 + uVar17 * 0x20);
            uVar17 = uVar17 + (uint)bVar9;
            puVar2[1] = puVar11[1];
            *puVar2 = uVar22;
            puVar2[3] = uVar21;
            puVar2[2] = uVar19;
            puVar11 = puVar12;
          } while (puVar12 < puVar13);
LAB_007e7264:
          if (uVar20 != param_2) goto code_r0x007e726c;
          memcpy(param_1,param_3,uVar17 << 5);
          lVar7 = param_2 - uVar17;
          if (lVar7 != 0) {
            puVar13 = (ulong *)((long)param_3 + param_2 * 0x20 + -0x20);
            lVar15 = lVar7;
            puVar11 = param_1 + uVar17 * 4;
            do {
              uVar20 = *puVar13;
              uVar21 = puVar13[3];
              uVar19 = puVar13[2];
              lVar15 = lVar15 + -1;
              puVar11[1] = puVar13[1];
              *puVar11 = uVar20;
              puVar11[3] = uVar21;
              puVar11[2] = uVar19;
              puVar13 = puVar13 + -4;
              puVar11 = puVar11 + 4;
            } while (lVar15 != 0);
          }
          if (uVar17 == 0) goto LAB_007e7300;
          if (param_2 < uVar17) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_fmt
                      (&DAT_002e631b,0x13,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae06d0);
          }
          quicksort<(u128,u128),<_backref_15_as_core::cmp::PartialOrd>::lt>
                    (param_1 + uVar17 * 4,lVar7,param_3,param_4,param_5,&local_80,param_7);
          param_2 = uVar17;
          goto joined_r0x007e73f8;
        }
        goto LAB_007e7444;
      }
      uVar17 = param_6[1];
      bVar9 = !CARRY8(param_6[3],~uStack_68) &&
              !CARRY8(param_6[3] + ~uStack_68,(ulong)(local_70 <= param_6[2]));
      if (*param_6 != local_80 || uVar17 != uStack_78) {
        bVar9 = !CARRY8(uVar17,~uStack_78) &&
                !CARRY8(uVar17 + ~uStack_78,(ulong)(local_80 <= *param_6));
      }
      if (bVar9) goto LAB_007e71e0;
LAB_007e7300:
      if (param_4 < param_2) {
LAB_007e7444:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x7e7448);
        (*pcVar8)();
      }
      uVar17 = 0;
      puVar13 = param_1 + uVar16 * 4;
      puVar11 = param_1;
      puVar12 = param_1;
      if (puVar13 <= param_1) goto LAB_007e737c;
LAB_007e731c:
      do {
        pvVar18 = (void *)((long)pvVar18 + -0x20);
        uVar20 = puVar10[1];
        uVar19 = ~puVar11[1];
        bVar9 = CARRY8(puVar10[3],~puVar11[3]) ||
                CARRY8(puVar10[3] + ~puVar11[3],(ulong)(puVar11[2] <= puVar10[2]));
        if (*puVar10 != *puVar11 || uVar20 != puVar11[1]) {
          bVar9 = CARRY8(uVar20,uVar19) || CARRY8(uVar20 + uVar19,(ulong)(*puVar11 <= *puVar10));
        }
        pvVar14 = param_3;
        if (bVar9 == 0) {
          pvVar14 = pvVar18;
        }
        puVar12 = puVar11 + 4;
        uVar21 = *puVar11;
        uVar19 = puVar11[3];
        uVar20 = puVar11[2];
        puVar2 = (ulong *)((long)pvVar14 + uVar17 * 0x20);
        uVar17 = uVar17 + (uint)bVar9;
        puVar2[1] = puVar11[1];
        *puVar2 = uVar21;
        puVar2[3] = uVar19;
        puVar2[2] = uVar20;
        puVar11 = puVar12;
      } while (puVar12 < puVar13);
LAB_007e737c:
      if (uVar16 != param_2) goto code_r0x007e7384;
      memcpy(param_1,param_3,uVar17 << 5);
      uVar16 = param_2 - uVar17;
      if (uVar16 == 0) {
        param_1 = param_1 + param_2 * 4;
        param_2 = uVar16;
        goto LAB_007e7074;
      }
      param_1 = param_1 + uVar17 * 4;
      puVar13 = (ulong *)((long)param_3 + param_2 * 0x20 + -0x20);
      uVar20 = uVar16;
      puVar11 = param_1;
      do {
        uVar19 = *puVar13;
        uVar22 = puVar13[3];
        uVar21 = puVar13[2];
        uVar20 = uVar20 - 1;
        puVar11[1] = puVar13[1];
        *puVar11 = uVar19;
        puVar11[3] = uVar22;
        puVar11[2] = uVar21;
        puVar13 = puVar13 + -4;
        puVar11 = puVar11 + 4;
      } while (uVar20 != 0);
      if (param_2 < uVar17) {
                    /* WARNING: Subroutine does not return */
        index::slice_index_fail
                  (uVar17,param_2,param_2,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae06e8);
      }
      param_6 = (ulong *)0x0;
      param_2 = uVar16;
joined_r0x007e73f8:
      if (param_2 < 0x21) goto LAB_007e7074;
    }
    FUN_007e6470(param_1,param_2,param_3,param_4,1,param_7);
  }
  return;
code_r0x007e726c:
  pvVar14 = (void *)((long)pvVar14 + -0x20);
  puVar11 = puVar12 + 4;
  uVar20 = *puVar12;
  uVar21 = puVar12[3];
  uVar19 = puVar12[2];
  puVar13 = (ulong *)((long)pvVar14 + uVar17 * 0x20);
  puVar13[1] = puVar12[1];
  *puVar13 = uVar20;
  puVar13[3] = uVar21;
  puVar13[2] = uVar19;
  puVar13 = param_1 + param_2 * 4;
  puVar12 = puVar11;
  uVar20 = param_2;
  if (puVar11 < puVar13) goto LAB_007e7204;
  goto LAB_007e7264;
code_r0x007e7384:
  puVar11 = puVar12 + 4;
  uVar19 = *puVar12;
  uVar20 = puVar12[3];
  uVar16 = puVar12[2];
  puVar13 = (ulong *)((long)param_3 + uVar17 * 0x20);
  pvVar18 = (void *)((long)pvVar18 + -0x20);
  uVar17 = uVar17 + 1;
  puVar13[1] = puVar12[1];
  *puVar13 = uVar19;
  puVar13[3] = uVar20;
  puVar13[2] = uVar16;
  puVar13 = param_1 + param_2 * 4;
  puVar12 = puVar11;
  uVar16 = param_2;
  if (puVar11 < puVar13) goto LAB_007e731c;
  goto LAB_007e737c;
}


// ===== 007e7478  FUN_007e7478 =====

void FUN_007e7478(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

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
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_007e7698(&local_38,*param_1,param_1[1],uVar1,param_4,param_5);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 007e74f8  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<ipnet::ipnet::Ipv4Net>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<ipnet::ipnet::Ipv4Net>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<ipnet::ipnet::Ipv4Net>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_007e7698(&local_38,*param_1,param_1[1],uVar1,1,5);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 007e7560  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<ipnet::ipnet::Ipv6Net>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<ipnet::ipnet::Ipv6Net>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<ipnet::ipnet::Ipv6Net>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_007e7698(&local_38,*param_1,param_1[1],uVar1,1,0x11);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 007e75c8  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u32,u32)>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u32, u32)>>::grow_one */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u32,u32)>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_007e7698(&local_38,*param_1,param_1[1],uVar1,4,8);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 007e7630  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u128,u128)>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u128, u128)>>::grow_one */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(u128,u128)>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_007e7698(&local_38,*param_1,param_1[1],uVar1,0x10,0x20);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 007e7698  FUN_007e7698 =====

void FUN_007e7698(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
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
  goto LAB_007e7734;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_007e7714;
    }
LAB_007e7724:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_007e7724;
LAB_007e7714:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_007e7734:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 007e774c  FUN_007e774c =====

void FUN_007e774c(ulong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  void *__ptr;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar10 = (undefined4 *)param_2[1];
  puVar12 = (undefined4 *)param_2[3];
  uVar9 = ((long)puVar12 - (long)puVar10) * -0x3333333333333333;
  uVar8 = 0;
  lVar7 = ((long)puVar12 - (long)puVar10) * 0x666666666666666a;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9;
  if ((SUB168(auVar3 * ZEXT816(0x12),8) == 0) && (-1 < lVar7)) {
    if (lVar7 == 0) {
      uVar9 = 0;
      uVar4 = 1;
      __ptr = (void *)*param_2;
      lVar7 = param_2[2];
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar8 = 1;
      uVar4 = FUN_004b25a4(lVar7,1);
      if (uVar4 == 0) goto LAB_007e7830;
      __ptr = (void *)*param_2;
      lVar7 = param_2[2];
    }
    if (puVar10 == puVar12) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      puVar5 = (undefined4 *)(uVar4 + 1);
      do {
        uVar2 = *(undefined1 *)(puVar10 + 1);
        puVar11 = (undefined4 *)((long)puVar10 + 5);
        uVar1 = *puVar10;
        uVar6 = uVar6 + 1;
        *(undefined1 *)((long)puVar5 + -1) = 0;
        *(undefined1 *)(puVar5 + 1) = uVar2;
        *puVar5 = uVar1;
        puVar5 = (undefined4 *)((long)puVar5 + 0x12);
        puVar10 = puVar11;
      } while (puVar11 != puVar12);
    }
    if (lVar7 != 0) {
      free(__ptr);
    }
    *param_1 = uVar9;
    param_1[1] = uVar4;
    param_1[2] = uVar6;
    return;
  }
LAB_007e7830:
                    /* try { // try from 007e7830 to 007e783b has its CatchHandler @ 007e7864 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar8,lVar7);
}


// ===== 007e788c  FUN_007e788c =====

void FUN_007e788c(ulong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  void *__ptr;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar9 = (undefined8 *)param_2[1];
  puVar10 = (undefined8 *)param_2[3];
  uVar8 = ((long)puVar10 - (long)puVar9) * -0xf0f0f0f0f0f0f0f;
  uVar7 = 0;
  lVar6 = ((long)puVar10 - (long)puVar9) * -0xf0f0f0f0f0f0f0e;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  if ((SUB168(auVar2 * ZEXT816(0x12),8) == 0) && (-1 < lVar6)) {
    if (lVar6 == 0) {
      uVar8 = 0;
      uVar3 = 1;
      __ptr = (void *)*param_2;
      lVar6 = param_2[2];
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 1;
      uVar3 = FUN_004b25a4(lVar6,1);
      if (uVar3 == 0) goto LAB_007e7990;
      __ptr = (void *)*param_2;
      lVar6 = param_2[2];
    }
    if (puVar9 == puVar10) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar4 = (undefined8 *)(uVar3 + 1);
      do {
        uVar11 = puVar9[1];
        uVar7 = *puVar9;
        uVar1 = *(undefined1 *)(puVar9 + 2);
        puVar9 = (undefined8 *)((long)puVar9 + 0x11);
        uVar5 = uVar5 + 1;
        *(undefined1 *)((long)puVar4 + -1) = 1;
        *(undefined1 *)(puVar4 + 2) = uVar1;
        puVar4[1] = uVar11;
        *puVar4 = uVar7;
        puVar4 = (undefined8 *)((long)puVar4 + 0x12);
      } while (puVar9 != puVar10);
    }
    if (lVar6 != 0) {
      free(__ptr);
    }
    *param_1 = uVar8;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    return;
  }
LAB_007e7990:
                    /* try { // try from 007e7990 to 007e799b has its CatchHandler @ 007e79c4 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar7,lVar6);
}


// ===== 007e79ec  core[bcece726f298455b]::slice::sort::stable::driftsort_main::<(u32,u32),<(u32,u32)as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<(u32,u32)>> =====

/* core[bcece726f298455b]::slice::sort::stable::driftsort_main::<(u32, u32), <(u32, u32) as
   core[bcece726f298455b]::cmp::PartialOrd>::lt, alloc[c1f8e832b0d782c7]::vec::Vec<(u32, u32)>> */

void core[bcece726f298455b]::slice::sort::stable::driftsort_main::
     <(u32,u32),<(u32,u32)as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<(u32,u32)>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *__ptr;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_1050 [512];
  
  __ptr = local_1050;
  uVar2 = param_2 - (param_2 >> 1);
  local_1050[0] = 0;
  uVar1 = param_2;
  if (999999 < param_2) {
    uVar1 = 1000000;
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  if (0x200 < uVar1) {
    uVar3 = uVar1 * 8;
    uVar4 = 0;
    if ((uVar2 >> 0x3d == 0) && (uVar3 < 0x7ffffffffffffffd)) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 4;
      __ptr = (undefined8 *)FUN_004b25a4(uVar3,4);
      uVar2 = uVar1;
      if (__ptr != (undefined8 *)0x0) goto LAB_007e7a8c;
    }
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar4,uVar3);
  }
  uVar2 = 0x200;
LAB_007e7a8c:
                    /* try { // try from 007e7a94 to 007e7a9f has its CatchHandler @ 007e7ae0 */
  FUN_007e5f50(param_1,param_2,__ptr,uVar2,param_2 < 0x41,param_3);
  if (0x200 < uVar1) {
    free(__ptr);
  }
  return;
}


// ===== 007e7b0c  core[bcece726f298455b]::slice::sort::stable::driftsort_main::<(u128,u128),<(u128,u128)as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<(u128,u128)>> =====

/* core[bcece726f298455b]::slice::sort::stable::driftsort_main::<(u128, u128), <(u128, u128) as
   core[bcece726f298455b]::cmp::PartialOrd>::lt, alloc[c1f8e832b0d782c7]::vec::Vec<(u128, u128)>> */

void core[bcece726f298455b]::slice::sort::stable::driftsort_main::
     <(u128,u128),<(u128,u128)as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<(u128,u128)>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *__ptr;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_1050 [512];
  
  __ptr = local_1050;
  uVar2 = param_2 - (param_2 >> 1);
  local_1050[0] = 0;
  uVar1 = param_2;
  if (249999 < param_2) {
    uVar1 = 250000;
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  if (0x80 < uVar1) {
    uVar3 = uVar1 * 0x20;
    uVar4 = 0;
    if ((uVar2 >> 0x3b == 0) && (uVar3 < 0x7ffffffffffffff1)) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 0x10;
      __ptr = (undefined8 *)FUN_004b25a4(uVar3,0x10);
      uVar2 = uVar1;
      if (__ptr != (undefined8 *)0x0) goto LAB_007e7bac;
    }
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar4,uVar3);
  }
  uVar2 = 0x80;
LAB_007e7bac:
                    /* try { // try from 007e7bb4 to 007e7bbf has its CatchHandler @ 007e7c00 */
  FUN_007e6470(param_1,param_2,__ptr,uVar2,param_2 < 0x41,param_3);
  if (0x80 < uVar1) {
    free(__ptr);
  }
  return;
}


// ===== 007e7c2c  FUN_007e7c2c =====

uint * FUN_007e7c2c(uint *param_1,uint *param_2,uint *param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)FUN_007e7c2c(param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe,param_4);
    param_2 = (uint *)FUN_007e7c2c(param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4,
                                   param_5);
    param_3 = (uint *)FUN_007e7c2c(param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4,
                                   param_5);
  }
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = *param_3;
  bVar4 = param_1[1] < param_2[1];
  if (uVar2 != uVar1) {
    bVar4 = uVar2 < uVar1;
  }
  bVar5 = param_1[1] < param_3[1];
  if (uVar2 != uVar3) {
    bVar5 = uVar2 < uVar3;
  }
  if (bVar4 == bVar5) {
    bVar5 = param_2[1] < param_3[1];
    if (uVar1 != uVar3) {
      bVar5 = uVar1 < uVar3;
    }
    param_1 = param_3;
    if (bVar4 == bVar5) {
      param_1 = param_2;
    }
  }
  return param_1;
}


// ===== 007e7d2c  FUN_007e7d2c =====

ulong * FUN_007e7d2c(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_007e7d2c(param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c,
                                    param_4);
    param_2 = (ulong *)FUN_007e7d2c(param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,
                                    param_4,param_5);
    param_3 = (ulong *)FUN_007e7d2c(param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,
                                    param_4,param_5);
  }
  uVar3 = *param_2;
  uVar6 = param_2[1];
  uVar4 = *param_1;
  uVar7 = param_1[1];
  uVar8 = param_1[3];
  uVar9 = param_2[3];
  uVar5 = *param_3;
  uVar10 = param_3[1];
  bVar1 = !CARRY8(uVar8,~uVar9) && !CARRY8(uVar8 + ~uVar9,(ulong)(param_2[2] <= param_1[2]));
  if (uVar4 != uVar3 || uVar7 != uVar6) {
    bVar1 = !CARRY8(uVar7,~uVar6) && !CARRY8(uVar7 + ~uVar6,(ulong)(uVar3 <= uVar4));
  }
  uVar11 = ~param_3[3];
  bVar2 = !CARRY8(uVar8,uVar11) && !CARRY8(uVar8 + uVar11,(ulong)(param_3[2] <= param_1[2]));
  if (uVar4 != uVar5 || uVar7 != uVar10) {
    bVar2 = !CARRY8(uVar7,~uVar10) && !CARRY8(uVar7 + ~uVar10,(ulong)(uVar5 <= uVar4));
  }
  if (bVar1 == bVar2) {
    uVar4 = ~param_3[3];
    bVar2 = !CARRY8(uVar9,uVar4) && !CARRY8(uVar9 + uVar4,(ulong)(param_3[2] <= param_2[2]));
    if (uVar3 != uVar5 || uVar6 != uVar10) {
      bVar2 = !CARRY8(uVar6,~uVar10) && !CARRY8(uVar6 + ~uVar10,(ulong)(uVar5 <= uVar3));
    }
    param_1 = param_3;
    if (bVar1 == bVar2) {
      param_1 = param_2;
    }
  }
  return param_1;
}


// ===== 007e7e80  FUN_007e7e80 =====

undefined1  [16] FUN_007e7e80(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  uVar8 = (uint)(ushort)*param_1;
  uVar10 = (uint)(ushort)param_1[2];
  if ((ushort)*param_1 == (ushort)param_1[2]) {
    uVar5 = *(ushort *)((long)param_1 + 0x12);
    uVar6 = *(ushort *)((long)param_1 + 2);
    if ((uint)uVar6 == (uint)uVar5) {
      uVar8 = (uint)*(ushort *)((long)param_1 + 4);
      uVar10 = (uint)*(ushort *)((long)param_1 + 0x14);
      if (*(ushort *)((long)param_1 + 4) == *(ushort *)((long)param_1 + 0x14)) {
        uVar8 = (uint)*(ushort *)((long)param_1 + 6);
        uVar10 = (uint)*(ushort *)((long)param_1 + 0x16);
        if (*(ushort *)((long)param_1 + 6) == *(ushort *)((long)param_1 + 0x16)) {
          uVar8 = (uint)(ushort)param_1[1];
          uVar10 = (uint)(ushort)param_1[3];
          if ((ushort)param_1[1] == (ushort)param_1[3]) {
            uVar8 = (uint)*(ushort *)((long)param_1 + 10);
            uVar10 = (uint)*(ushort *)((long)param_1 + 0x1a);
            if (*(ushort *)((long)param_1 + 10) == *(ushort *)((long)param_1 + 0x1a)) {
              uVar8 = (uint)*(ushort *)((long)param_1 + 0xc);
              uVar10 = (uint)*(ushort *)((long)param_1 + 0x1c);
              if (*(ushort *)((long)param_1 + 0xc) == *(ushort *)((long)param_1 + 0x1c)) {
                uVar8 = (uint)*(ushort *)((long)param_1 + 0xe);
                uVar10 = (uint)*(ushort *)((long)param_1 + 0x1e);
                if (*(ushort *)((long)param_1 + 0xe) == *(ushort *)((long)param_1 + 0x1e))
                goto LAB_007e7f8c;
              }
            }
          }
        }
      }
      goto LAB_007e7f00;
    }
    uVar8 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
    uVar10 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
    cVar1 = uVar8 < uVar10;
    if (uVar10 < uVar8) {
      cVar1 = -1;
    }
  }
  else {
LAB_007e7f00:
    uVar8 = uVar8 >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 8 | (uVar10 & 0xff00ff) << 8;
    cVar1 = uVar10 < uVar8;
    if (uVar8 < uVar10) {
      cVar1 = -1;
    }
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return ZEXT816(0);
    }
    uVar7 = (param_1[3] & 0xff00ff00ff00ff00) >> 8 | (param_1[3] & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar7 = (param_1[1] & 0xff00ff00ff00ff00) >> 8 | (param_1[1] & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar7 = (param_1[2] & 0xff00ff00ff00ff00) >> 8 | (param_1[2] & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar7 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar7 = ~uVar13;
    bVar2 = CARRY8(uVar12 + uVar7,(ulong)(uVar9 <= uVar11));
    lVar4 = 0;
    if (CARRY8(uVar12,uVar7) || bVar2) {
      lVar4 = uVar11 - uVar9;
    }
    lVar3 = 0;
    if (CARRY8(uVar12,uVar7) || bVar2) {
      lVar3 = uVar12 - (uVar13 + (uVar9 > uVar11));
    }
    if (lVar4 == -1) {
      lVar3 = lVar3 + 1;
    }
    auVar14._8_8_ = lVar3;
    auVar14._0_8_ = lVar4 + 1;
    return auVar14;
  }
LAB_007e7f8c:
  return ZEXT816(1);
}


// ===== 007e7f98  <ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::max =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::IpAddrRange as core::iter::traits::iterator::Iterator>::max */

void __rustcall
<ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::max
          (undefined1 *param_1,char *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (*param_2 == '\x01') {
    uVar1 = *(ushort *)(param_2 + 0x11);
    uVar2 = *(ushort *)(param_2 + 1);
    uVar3 = *(ushort *)(param_2 + 0x13);
    uVar4 = *(ushort *)(param_2 + 0x15);
    uVar5 = *(ushort *)(param_2 + 0x17);
    uVar6 = *(ushort *)(param_2 + 0x19);
    uVar7 = *(ushort *)(param_2 + 0x1b);
    uVar8 = *(ushort *)(param_2 + 0x1d);
    uVar9 = *(ushort *)(param_2 + 0x1f);
    if ((uint)uVar2 == (uint)uVar1) {
      uVar2 = *(ushort *)(param_2 + 3);
      if ((uint)uVar2 == (uint)uVar3) {
        uVar2 = *(ushort *)(param_2 + 5);
        if ((uint)uVar2 == (uint)uVar4) {
          uVar2 = *(ushort *)(param_2 + 7);
          if ((uint)uVar2 == (uint)uVar5) {
            uVar2 = *(ushort *)(param_2 + 9);
            if ((uint)uVar2 == (uint)uVar6) {
              uVar2 = *(ushort *)(param_2 + 0xb);
              if ((uint)uVar2 == (uint)uVar7) {
                uVar2 = *(ushort *)(param_2 + 0xd);
                if ((uint)uVar2 == (uint)uVar8) {
                  uVar2 = *(ushort *)(param_2 + 0xf);
                  if ((uint)uVar2 == (uint)uVar9) goto LAB_007e80cc;
                  uVar11 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
                  uVar10 = (uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8;
                }
                else {
                  uVar11 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
                  uVar10 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8;
                }
              }
              else {
                uVar11 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
                uVar10 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
              }
            }
            else {
              uVar11 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
              uVar10 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
            }
          }
          else {
            uVar11 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
            uVar10 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
          }
        }
        else {
          uVar11 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
          uVar10 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
        }
      }
      else {
        uVar10 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
        uVar11 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
      }
    }
    else {
      uVar11 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
      uVar10 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
    }
    if (uVar11 <= uVar10) {
LAB_007e80cc:
      *(ushort *)(param_1 + 1) = uVar1;
      *param_1 = 1;
      *(ushort *)(param_1 + 3) = uVar3;
      *(ushort *)(param_1 + 5) = uVar4;
      *(ushort *)(param_1 + 7) = uVar5;
      *(ushort *)(param_1 + 9) = uVar6;
      *(ushort *)(param_1 + 0xb) = uVar7;
      *(ushort *)(param_1 + 0xd) = uVar8;
      *(ushort *)(param_1 + 0xf) = uVar9;
      return;
    }
  }
  else {
    uVar11 = (uint)*(undefined8 *)(param_2 + 1);
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar12 = (uint)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
    uVar10 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    if ((uVar11 >> 0x10 | uVar11 << 0x10) <= (uVar10 >> 0x10 | uVar10 << 0x10)) {
      *param_1 = 0;
      *(uint *)(param_1 + 1) = uVar12;
      return;
    }
  }
  *param_1 = 2;
  return;
}


// ===== 007e80f8  <ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::min =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::IpAddrRange as core::iter::traits::iterator::Iterator>::min */

void __rustcall
<ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::min
          (undefined1 *param_1,char *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (*param_2 == '\x01') {
    uVar1 = *(ushort *)(param_2 + 1);
    uVar2 = *(ushort *)(param_2 + 0x11);
    uVar3 = *(ushort *)(param_2 + 3);
    uVar4 = *(ushort *)(param_2 + 5);
    uVar5 = *(ushort *)(param_2 + 7);
    uVar6 = *(ushort *)(param_2 + 9);
    uVar7 = *(ushort *)(param_2 + 0xb);
    uVar8 = *(ushort *)(param_2 + 0xd);
    uVar9 = *(ushort *)(param_2 + 0xf);
    if ((uint)uVar1 == (uint)uVar2) {
      uVar2 = *(ushort *)(param_2 + 0x13);
      if ((uint)uVar3 == (uint)uVar2) {
        uVar2 = *(ushort *)(param_2 + 0x15);
        if ((uint)uVar4 == (uint)uVar2) {
          uVar2 = *(ushort *)(param_2 + 0x17);
          if ((uint)uVar5 == (uint)uVar2) {
            uVar2 = *(ushort *)(param_2 + 0x19);
            if ((uint)uVar6 == (uint)uVar2) {
              uVar2 = *(ushort *)(param_2 + 0x1b);
              if ((uint)uVar7 == (uint)uVar2) {
                uVar2 = *(ushort *)(param_2 + 0x1d);
                if ((uint)uVar8 == (uint)uVar2) {
                  uVar2 = *(ushort *)(param_2 + 0x1f);
                  if (((uint)uVar9 == (uint)uVar2) ||
                     (((uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8) <=
                      ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8))) {
LAB_007e8200:
                    *(ushort *)(param_1 + 1) = uVar1;
                    *param_1 = 1;
                    *(ushort *)(param_1 + 3) = uVar3;
                    *(ushort *)(param_1 + 5) = uVar4;
                    *(ushort *)(param_1 + 7) = uVar5;
                    *(ushort *)(param_1 + 9) = uVar6;
                    *(ushort *)(param_1 + 0xb) = uVar7;
                    *(ushort *)(param_1 + 0xd) = uVar8;
                    *(ushort *)(param_1 + 0xf) = uVar9;
                    return;
                  }
                }
                else if (((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8) <=
                         ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8200;
              }
              else if (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) <=
                       ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8200;
            }
            else if (((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) <=
                     ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8200;
          }
          else if (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) <=
                   ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8200;
        }
        else if (((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) <=
                 ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8200;
      }
      else if (((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) <=
               ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8200;
    }
    else if (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <=
             ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8200;
  }
  else {
    uVar11 = (uint)*(undefined8 *)(param_2 + 1);
    uVar10 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar12 = (uint)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    if ((uVar10 >> 0x10 | uVar10 << 0x10) <= (uVar12 >> 0x10 | uVar12 << 0x10)) {
      *param_1 = 0;
      *(uint *)(param_1 + 1) = uVar11;
      return;
    }
  }
  *param_1 = 2;
  return;
}


// ===== 007e82a4  <ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::nth =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::IpAddrRange as core::iter::traits::iterator::Iterator>::nth */

void __rustcall
<ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::nth
          (undefined1 *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong extraout_x0;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  
  uVar3 = DAT_002a16c0;
  puVar9 = (ulong *)(param_2 + 1);
  if (*param_2 == '\x01') {
    puVar12 = (ulong *)(param_2 + 0x11);
    uVar10 = *puVar12;
    uVar11 = *(ulong *)(param_2 + 0x19);
    uVar3 = *(ulong *)(param_2 + 1);
    uVar7 = *(ulong *)(param_2 + 9);
    if ((uVar3 == 0 && uVar7 == 0) && ((uVar10 & uVar11) == 0xffffffffffffffff)) {
      uVar10 = 0;
      uVar3 = (param_3 & 0xff00ff00ff00ff00) >> 8 | (param_3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar3 = (param_3 + 1 & 0xff00ff00ff00ff00) >> 8 | (param_3 + 1 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      *puVar9 = (ulong)(0xfffffffffffffffe < param_3) << 0x38;
      *(ulong *)(param_2 + 9) = uVar3 >> 0x20 | uVar3 << 0x20;
    }
    else {
      FUN_007e7e80(puVar9);
      if (CARRY8(~(CONCAT44(extraout_var,extraout_w1) + (ulong)(extraout_x0 > param_3)),
                 (ulong)(extraout_x0 <= param_3))) {
        param_2[7] = '\0';
        param_2[8] = '\0';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2[0x10] = '\x01';
        *puVar9 = 0;
        *puVar12 = 0;
        param_2[0x19] = '\0';
        param_2[0x1a] = '\0';
        param_2[0x1b] = '\0';
        param_2[0x1c] = '\0';
        param_2[0x1d] = '\0';
        param_2[0x1e] = '\0';
        param_2[0x1f] = '\0';
        param_2[0x20] = '\0';
        *param_1 = 2;
        return;
      }
      if (extraout_x0 - 1 == param_3 &&
          CONCAT44(extraout_var,extraout_w1) + -1 + (ulong)(extraout_x0 != 0) == 0) {
        param_2[7] = '\0';
        param_2[8] = '\0';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        *puVar9 = 0;
        param_2[0xf] = '\0';
        param_2[0x10] = '\x01';
        *puVar12 = 0;
        param_2[0x19] = '\0';
        param_2[0x1a] = '\0';
        param_2[0x1b] = '\0';
        param_2[0x1c] = '\0';
        param_2[0x1d] = '\0';
        param_2[0x1e] = '\0';
        param_2[0x1f] = '\0';
        param_2[0x20] = '\0';
      }
      else {
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar3 >> 0x20 | uVar3 << 0x20;
        uVar3 = uVar10 + param_3;
        uVar7 = uVar11 + CARRY8(uVar10,param_3);
        if (CARRY8(uVar11,(ulong)CARRY8(uVar10,param_3))) {
          uVar3 = 0xffffffffffffffff;
          uVar7 = 0xffffffffffffffff;
        }
        uVar2 = uVar3 + 1;
        uVar10 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar10 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar7 + (0xfffffffffffffffe < uVar3);
        if (CARRY8(uVar7,(ulong)(0xfffffffffffffffe < uVar3))) {
          uVar2 = 0xffffffffffffffff;
          uVar8 = 0xffffffffffffffff;
        }
        uVar3 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar7 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        *puVar9 = uVar7 >> 0x20 | uVar7 << 0x20;
        *(ulong *)(param_2 + 9) = uVar3 >> 0x20 | uVar3 << 0x20;
      }
    }
    *(ulong *)(param_1 + 1) = uVar10;
    *param_1 = 1;
    *(ulong *)(param_1 + 9) = uVar11;
    return;
  }
  uVar5 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
  uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
  uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (uint)(uVar6 < uVar4);
  if (uVar4 < uVar6) {
    uVar5 = 0xffffffff;
  }
  cVar1 = 0 < (int)uVar5;
  if ((int)uVar5 < 0) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') {
    uVar7 = 1;
    if (param_3 == 0) {
LAB_007e8400:
      if (param_3 == uVar7 - 1) {
        uVar6 = *(uint *)(param_2 + 5);
        uVar5 = 0x1000000;
        param_2[5] = '\0';
        param_2[6] = '\0';
        param_2[7] = '\0';
        param_2[8] = '\0';
      }
      else {
        uVar5 = ((uint)*puVar9 & 0xff00ff00) >> 8 | ((uint)*puVar9 & 0xff00ff) << 8;
        uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar5 = uVar4 + (uint)param_3;
        if (CARRY4(uVar4,(uint)param_3)) {
          uVar5 = 0xffffffff;
        }
        uVar4 = uVar5 + 1;
        uVar6 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        if (uVar5 == 0xffffffff) {
          uVar4 = 0xffffffff;
        }
        uVar5 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      }
      *(uint *)puVar9 = uVar5;
      *param_1 = 0;
      *(uint *)(param_1 + 1) = uVar6;
      return;
    }
  }
  else if (cVar1 != '\x01') {
    uVar5 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
    uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
    uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = 0;
    if (uVar6 <= uVar4) {
      uVar5 = uVar4 - uVar6;
    }
    uVar7 = (ulong)uVar5 + 1;
    if (param_3 < uVar7) goto LAB_007e8400;
  }
  *param_1 = 2;
  *puVar9 = uVar3;
  return;
}


// ===== 007e84c4  <ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::IpAddrRange as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::next
          (undefined1 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  
  if (*param_2 == '\x01') {
    <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::next(&local_34);
    if ((local_34 & 1) != 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 9) = uStack_2b;
      *(undefined8 *)(param_1 + 1) = local_33;
      return;
    }
LAB_007e8554:
    *param_1 = 2;
    return;
  }
  uVar3 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
  uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
  uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (uint)(uVar2 < uVar4);
  if (uVar4 < uVar2) {
    uVar3 = 0xffffffff;
  }
  cVar1 = 0 < (int)uVar3;
  if ((int)uVar3 < 0) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') {
    uVar3 = *(uint *)(param_2 + 1);
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    uVar4 = 0x1000000;
  }
  else {
    if (cVar1 == '\x01') goto LAB_007e8554;
    uVar3 = *(uint *)(param_2 + 1);
    uVar4 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = uVar2 + 1;
    if (uVar2 == 0xffffffff) {
      uVar4 = 0xffffffff;
    }
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  }
  *(uint *)(param_2 + 1) = uVar4;
  *param_1 = 0;
  *(uint *)(param_1 + 1) = uVar3;
  return;
}


// ===== 007e85ac  <ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::count =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::IpAddrRange as core::iter::traits::iterator::Iterator>::count */

long __rustcall
<ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::count(char *param_1)

{
  char cVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  
  if (*param_1 != '\x01') {
    uVar6 = (uint)*(undefined8 *)(param_1 + 1);
    uVar5 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar13 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar8 = (uint)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
    uVar5 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar12 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (uint)(uVar12 < uVar13);
    if (uVar13 < uVar12) {
      uVar5 = 0xffffffff;
    }
    cVar1 = 0 < (int)uVar5;
    if ((int)uVar5 < 0) {
      cVar1 = -1;
    }
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        return 0;
      }
      uVar5 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar13 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar5 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar12 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar5 = 0;
      if (uVar13 <= uVar12) {
        uVar5 = uVar12 - uVar13;
      }
      return (ulong)uVar5 + 1;
    }
    return 1;
  }
  uVar7 = *(ulong *)(param_1 + 1);
  uVar9 = *(ulong *)(param_1 + 0x11);
  uVar10 = *(ulong *)(param_1 + 9);
  uVar11 = *(ulong *)(param_1 + 0x19);
  uVar5 = (uint)uVar7;
  if ((uVar5 & 0xffff) == (uint)(ushort)uVar9) {
    uVar5 = (uint)(uVar7 >> 0x10);
    if ((uVar5 & 0xffff) == (uint)(ushort)(uVar9 >> 0x10)) {
      uVar5 = (uint)(uVar7 >> 0x20);
      uVar13 = (uint)(uVar9 >> 0x20);
      if ((uVar5 & 0xffff) == (uint)(ushort)(uVar9 >> 0x20)) {
        uVar5 = (uint)(ushort)(uVar7 >> 0x30);
        uVar3 = (ushort)(uVar9 >> 0x30);
        uVar13 = (uint)uVar3;
        if (uVar5 == uVar3) {
          uVar5 = (uint)uVar10;
          if ((uVar5 & 0xffff) != (uint)(ushort)uVar11) {
            uVar13 = ((uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8) & 0xffff;
            uVar5 = (((uint)uVar11 & 0xff00ff00) >> 8 | ((uint)uVar11 & 0xff00ff) << 8) & 0xffff;
            cVar1 = uVar5 < uVar13;
            if (uVar13 < uVar5) {
              cVar1 = -1;
            }
            goto joined_r0x007e8774;
          }
          uVar5 = (uint)(uVar10 >> 0x10);
          uVar13 = (uint)(uVar11 >> 0x10);
          if ((uVar5 & 0xffff) == (uint)(ushort)(uVar11 >> 0x10)) {
            uVar5 = (uint)(uVar10 >> 0x20);
            uVar13 = (uint)(uVar11 >> 0x20);
            if ((uVar5 & 0xffff) == (uint)(ushort)(uVar11 >> 0x20)) {
              uVar3 = (ushort)(uVar10 >> 0x30);
              uVar5 = (uint)uVar3;
              uVar4 = (ushort)(uVar11 >> 0x30);
              uVar13 = (uint)uVar4;
              if (uVar3 == uVar4) {
                return 1;
              }
            }
          }
        }
      }
      uVar12 = ((uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8) & 0xffff;
      uVar5 = ((uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8) & 0xffff;
      cVar1 = uVar5 < uVar12;
      if (uVar12 < uVar5) {
        cVar1 = -1;
      }
    }
    else {
      uVar12 = (uint)(uVar9 >> 0x10);
      uVar13 = ((uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8) & 0xffff;
      uVar5 = ((uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8) & 0xffff;
      cVar1 = uVar5 < uVar13;
      if (uVar13 < uVar5) {
        cVar1 = -1;
      }
    }
  }
  else {
    uVar13 = ((uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8) & 0xffff;
    uVar5 = (((uint)uVar9 & 0xff00ff00) >> 8 | ((uint)uVar9 & 0xff00ff) << 8) & 0xffff;
    cVar1 = uVar5 < uVar13;
    if (uVar13 < uVar5) {
      cVar1 = -1;
    }
  }
joined_r0x007e8774:
  if (cVar1 == '\0') {
    return 1;
  }
  if (cVar1 == '\x01') {
    return 0;
  }
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar7 = ~(uVar7 >> 0x20 | uVar7 << 0x20);
  lVar2 = 0;
  if (CARRY8(uVar9,uVar7) || CARRY8(uVar9 + uVar7,(ulong)(uVar10 <= uVar11))) {
    lVar2 = uVar11 - uVar10;
  }
  return lVar2 + 1;
}


// ===== 007e877c  <ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::IpAddrRange as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<ipnet::ipext::IpAddrRange_as_core::iter::traits::iterator::Iterator>::size_hint
          (long *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  
  if (*param_2 == '\x01') {
    if ((*(long *)(param_2 + 1) == 0 && *(long *)(param_2 + 9) == 0) &&
       ((*(ulong *)(param_2 + 0x11) & *(ulong *)(param_2 + 0x19)) == 0xffffffffffffffff)) {
      *param_1 = -1;
      param_1[1] = 0;
      return;
    }
    auVar5 = FUN_007e7e80(param_2 + 1);
    if (auVar5._8_8_ != 0) {
      *param_1 = -1;
      param_1[1] = 0;
      return;
    }
    *param_1 = auVar5._0_8_;
    param_1[1] = 1;
    param_1[2] = auVar5._0_8_;
    return;
  }
  uVar4 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
  uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (uint)(uVar3 < uVar2);
  if (uVar2 < uVar3) {
    uVar4 = 0xffffffff;
  }
  cVar1 = 0 < (int)uVar4;
  if ((int)uVar4 < 0) {
    cVar1 = -1;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      return;
    }
    uVar4 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
    uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = 0;
    if (uVar3 <= uVar2) {
      uVar4 = uVar2 - uVar3;
    }
    *param_1 = (ulong)uVar4 + 1;
    param_1[1] = 1;
    param_1[2] = (ulong)uVar4 + 1;
    return;
  }
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 1;
  return;
}


// ===== 007e88b8  <ipnet::ipext::Ipv4AddrRange_as_core::iter::traits::iterator::Iterator>::max =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv4AddrRange as core::iter::traits::iterator::Iterator>::max */

ulong __rustcall
<ipnet::ipext::Ipv4AddrRange_as_core::iter::traits::iterator::Iterator>::max(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = ((uint)param_1 & 0xff00ff00) >> 8 | ((uint)param_1 & 0xff00ff) << 8;
  uVar2 = (uint)(param_1 >> 0x20);
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = param_1 >> 0x18 & 0xffffffff00;
  if ((uVar1 >> 0x10 | uVar1 << 0x10) <= (uVar2 >> 0x10 | uVar2 << 0x10)) {
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}


// ===== 007e88e4  <ipnet::ipext::Ipv4AddrRange_as_core::iter::traits::iterator::Iterator>::nth =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv4AddrRange as core::iter::traits::iterator::Iterator>::nth */

ulong __rustcall
<ipnet::ipext::Ipv4AddrRange_as_core::iter::traits::iterator::Iterator>::nth
          (uint *param_1,ulong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (uint)(uVar3 < uVar2);
  if (uVar2 < uVar3) {
    uVar4 = 0xffffffff;
  }
  cVar1 = 0 < (int)uVar4;
  if ((int)uVar4 < 0) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') {
    uVar5 = 1;
    if (param_2 == 0) {
LAB_007e8960:
      if (param_2 == uVar5 - 1) {
        *(undefined8 *)param_1 = DAT_002a16c0;
        return (ulong)param_1[1] << 8 | 1;
      }
      uVar4 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = uVar2 + (uint)param_2;
      if (CARRY4(uVar2,(uint)param_2)) {
        uVar4 = 0xffffffff;
      }
      uVar2 = uVar4 + 1;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      if (uVar4 == 0xffffffff) {
        uVar2 = 0xffffffff;
      }
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      *param_1 = uVar4 >> 0x10 | uVar4 << 0x10;
      return (ulong)(uVar3 >> 0x10 | uVar3 << 0x10) << 8 | 1;
    }
  }
  else if (cVar1 != '\x01') {
    uVar4 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = 0;
    if (uVar3 <= uVar2) {
      uVar4 = uVar2 - uVar3;
    }
    uVar5 = (ulong)uVar4 + 1;
    if (param_2 < uVar5) goto LAB_007e8960;
  }
  *(undefined8 *)param_1 = DAT_002a16c0;
  return 0x2a100000;
}


// ===== 007e89c0  <ipnet::ipext::Ipv4AddrRange_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv4AddrRange as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<ipnet::ipext::Ipv4AddrRange_as_core::iter::traits::iterator::Iterator>::size_hint
          (long *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (uint)(uVar3 < uVar2);
  if (uVar2 < uVar3) {
    uVar4 = 0xffffffff;
  }
  cVar1 = 0 < (int)uVar4;
  if ((int)uVar4 < 0) {
    cVar1 = -1;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      param_1[2] = 0;
      *param_1 = 0;
      param_1[1] = 1;
      return;
    }
    uVar4 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = 0;
    if (uVar3 <= uVar2) {
      uVar4 = uVar2 - uVar3;
    }
    param_1[2] = (ulong)uVar4 + 1;
    *param_1 = (ulong)uVar4 + 1;
    param_1[1] = 1;
    return;
  }
  param_1[2] = 1;
  *param_1 = 1;
  param_1[1] = 1;
  return;
}


// ===== 007e8a44  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::max =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::iterator::Iterator>::max */

void __rustcall
<ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::max
          (undefined1 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = (uint)*param_2;
  uVar2 = param_2[8];
  uVar4 = (uint)uVar2;
  if (*param_2 == uVar2) {
    uVar2 = param_2[9];
    uVar1 = param_2[1];
    if ((uint)uVar1 != (uint)uVar2) {
      if (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <=
          ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8af8;
      goto LAB_007e8adc;
    }
    uVar3 = (uint)param_2[2];
    uVar4 = (uint)param_2[10];
    if (param_2[2] == param_2[10]) {
      uVar3 = (uint)param_2[3];
      uVar4 = (uint)param_2[0xb];
      if (param_2[3] == param_2[0xb]) {
        uVar3 = (uint)param_2[4];
        uVar4 = (uint)param_2[0xc];
        if (param_2[4] == param_2[0xc]) {
          uVar3 = (uint)param_2[5];
          uVar4 = (uint)param_2[0xd];
          if (param_2[5] == param_2[0xd]) {
            uVar3 = (uint)param_2[6];
            uVar4 = (uint)param_2[0xe];
            if (param_2[6] == param_2[0xe]) {
              uVar3 = (uint)param_2[7];
              uVar4 = (uint)param_2[0xf];
              if (param_2[7] == param_2[0xf]) goto LAB_007e8af8;
            }
          }
        }
      }
    }
  }
  if ((uVar3 >> 8 | (uVar3 & 0xff00ff) << 8) <= (uVar4 >> 8 | (uVar4 & 0xff00ff) << 8)) {
LAB_007e8af8:
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 9) = uVar6;
    *(undefined8 *)(param_1 + 1) = uVar5;
    return;
  }
LAB_007e8adc:
  *param_1 = 0;
  return;
}


// ===== 007e8b0c  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::min =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::iterator::Iterator>::min */

void __rustcall
<ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::min
          (undefined1 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = (uint)*param_2;
  uVar4 = (uint)param_2[8];
  if (*param_2 == param_2[8]) {
    uVar1 = param_2[9];
    uVar2 = param_2[1];
    if ((uint)uVar2 != (uint)uVar1) {
      if (((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) <=
          ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) goto LAB_007e8bbc;
      goto LAB_007e8ba0;
    }
    uVar3 = (uint)param_2[2];
    uVar4 = (uint)param_2[10];
    if (param_2[2] == param_2[10]) {
      uVar3 = (uint)param_2[3];
      uVar4 = (uint)param_2[0xb];
      if (param_2[3] == param_2[0xb]) {
        uVar3 = (uint)param_2[4];
        uVar4 = (uint)param_2[0xc];
        if (param_2[4] == param_2[0xc]) {
          uVar3 = (uint)param_2[5];
          uVar4 = (uint)param_2[0xd];
          if (param_2[5] == param_2[0xd]) {
            uVar3 = (uint)param_2[6];
            uVar4 = (uint)param_2[0xe];
            if (param_2[6] == param_2[0xe]) {
              uVar3 = (uint)param_2[7];
              uVar4 = (uint)param_2[0xf];
              if (param_2[7] == param_2[0xf]) goto LAB_007e8bbc;
            }
          }
        }
      }
    }
  }
  if ((uVar3 >> 8 | (uVar3 & 0xff00ff) << 8) <= (uVar4 >> 8 | (uVar4 & 0xff00ff) << 8)) {
LAB_007e8bbc:
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar5 = *(undefined8 *)param_2;
    *param_1 = 1;
    *(undefined8 *)(param_1 + 9) = uVar6;
    *(undefined8 *)(param_1 + 1) = uVar5;
    return;
  }
LAB_007e8ba0:
  *param_1 = 0;
  return;
}


// ===== 007e8bd0  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::nth =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::iterator::Iterator>::nth */

void __rustcall
<ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::nth
          (undefined1 *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *param_2;
  uVar4 = param_2[1];
  puVar5 = param_2 + 2;
  if ((uVar6 == 0 && uVar4 == 0) && ((*puVar5 & param_2[3]) == 0xffffffffffffffff)) {
    *(undefined8 *)(param_1 + 1) = 0;
    uVar6 = (param_3 + 1 & 0xff00ff00ff00ff00) >> 8 | (param_3 + 1 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    *param_2 = (ulong)(0xfffffffffffffffe < param_3) << 0x38;
    param_2[1] = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar6 = (param_3 & 0xff00ff00ff00ff00) >> 8 | (param_3 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 9) = uVar6 >> 0x20 | uVar6 << 0x20;
  }
  else {
    auVar7 = FUN_007e7e80(param_2);
    uVar2 = auVar7._0_8_;
    if (CARRY8(~(auVar7._8_8_ + (ulong)(uVar2 > param_3)),(ulong)(uVar2 <= param_3))) {
      *(undefined8 *)((long)param_2 + 6) = 0;
      *param_2 = 0;
      *puVar5 = 0;
      param_2[3] = 0;
      *(undefined2 *)((long)param_2 + 0xe) = 0x100;
      *param_1 = 0;
      return;
    }
    if (uVar2 - 1 == param_3 && auVar7._8_8_ + -1 + (ulong)(uVar2 != 0) == 0) {
      uVar6 = *puVar5;
      *(undefined8 *)((long)param_2 + 6) = 0;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 0xe) = 0x100;
      *(ulong *)(param_1 + 9) = param_2[3];
      *(ulong *)(param_1 + 1) = uVar6;
      *puVar5 = 0;
      param_2[3] = 0;
      *param_1 = 1;
      return;
    }
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar2 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar6 = uVar2 + param_3;
    uVar4 = uVar3 + CARRY8(uVar2,param_3);
    if (CARRY8(uVar3,(ulong)CARRY8(uVar2,param_3))) {
      uVar6 = 0xffffffffffffffff;
      uVar4 = 0xffffffffffffffff;
    }
    uVar2 = uVar6 + 1;
    uVar3 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar4 + (0xfffffffffffffffe < uVar6);
    *(ulong *)(param_1 + 9) = uVar1 >> 0x20 | uVar1 << 0x20;
    uVar1 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    if (CARRY8(uVar4,(ulong)(0xfffffffffffffffe < uVar6))) {
      uVar2 = 0xffffffffffffffff;
      uVar3 = 0xffffffffffffffff;
    }
    *(ulong *)(param_1 + 1) = uVar1 >> 0x20 | uVar1 << 0x20;
    uVar6 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar4 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    *param_2 = uVar4 >> 0x20 | uVar4 << 0x20;
    param_2[1] = uVar6 >> 0x20 | uVar6 << 0x20;
  }
  *param_1 = 1;
  return;
}


// ===== 007e8d28  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::last =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::iterator::Iterator>::last */

void __rustcall
<ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::last
          (undefined1 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = (uint)*param_2;
  uVar2 = param_2[8];
  uVar4 = (uint)uVar2;
  if (*param_2 == uVar2) {
    uVar2 = param_2[9];
    uVar1 = param_2[1];
    if ((uint)uVar1 != (uint)uVar2) {
      if (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <=
          ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) goto LAB_007e8ddc;
      goto LAB_007e8dc0;
    }
    uVar3 = (uint)param_2[2];
    uVar4 = (uint)param_2[10];
    if (param_2[2] == param_2[10]) {
      uVar3 = (uint)param_2[3];
      uVar4 = (uint)param_2[0xb];
      if (param_2[3] == param_2[0xb]) {
        uVar3 = (uint)param_2[4];
        uVar4 = (uint)param_2[0xc];
        if (param_2[4] == param_2[0xc]) {
          uVar3 = (uint)param_2[5];
          uVar4 = (uint)param_2[0xd];
          if (param_2[5] == param_2[0xd]) {
            uVar3 = (uint)param_2[6];
            uVar4 = (uint)param_2[0xe];
            if (param_2[6] == param_2[0xe]) {
              uVar3 = (uint)param_2[7];
              uVar4 = (uint)param_2[0xf];
              if (param_2[7] == param_2[0xf]) goto LAB_007e8ddc;
            }
          }
        }
      }
    }
  }
  if ((uVar3 >> 8 | (uVar3 & 0xff00ff) << 8) <= (uVar4 >> 8 | (uVar4 & 0xff00ff) << 8)) {
LAB_007e8ddc:
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 9) = uVar6;
    *(undefined8 *)(param_1 + 1) = uVar5;
    return;
  }
LAB_007e8dc0:
  *param_1 = 0;
  return;
}


// ===== 007e8df0  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::next
          (undefined1 *param_1,ulong *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar5 = (uint)(ushort)*param_2;
  uVar2 = (ushort)param_2[2];
  uVar8 = (uint)uVar2;
  if ((ushort)*param_2 == uVar2) {
    uVar2 = *(ushort *)((long)param_2 + 0x12);
    uVar3 = *(ushort *)((long)param_2 + 2);
    if ((uint)uVar3 == (uint)uVar2) {
      uVar5 = (uint)*(ushort *)((long)param_2 + 4);
      uVar8 = (uint)*(ushort *)((long)param_2 + 0x14);
      if (*(ushort *)((long)param_2 + 4) == *(ushort *)((long)param_2 + 0x14)) {
        uVar5 = (uint)*(ushort *)((long)param_2 + 6);
        uVar8 = (uint)*(ushort *)((long)param_2 + 0x16);
        if (*(ushort *)((long)param_2 + 6) == *(ushort *)((long)param_2 + 0x16)) {
          uVar5 = (uint)(ushort)param_2[1];
          uVar8 = (uint)(ushort)param_2[3];
          if ((ushort)param_2[1] == (ushort)param_2[3]) {
            uVar5 = (uint)*(ushort *)((long)param_2 + 10);
            uVar8 = (uint)*(ushort *)((long)param_2 + 0x1a);
            if (*(ushort *)((long)param_2 + 10) == *(ushort *)((long)param_2 + 0x1a)) {
              uVar5 = (uint)*(ushort *)((long)param_2 + 0xc);
              uVar8 = (uint)*(ushort *)((long)param_2 + 0x1c);
              if (*(ushort *)((long)param_2 + 0xc) == *(ushort *)((long)param_2 + 0x1c)) {
                uVar5 = (uint)*(ushort *)((long)param_2 + 0xe);
                uVar8 = (uint)*(ushort *)((long)param_2 + 0x1e);
                if (*(ushort *)((long)param_2 + 0xe) == *(ushort *)((long)param_2 + 0x1e))
                goto LAB_007e8f00;
              }
            }
          }
        }
      }
      goto LAB_007e8e74;
    }
    uVar5 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
    uVar8 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    cVar1 = uVar5 < uVar8;
    if (uVar8 < uVar5) {
      cVar1 = -1;
    }
  }
  else {
LAB_007e8e74:
    uVar5 = uVar5 >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 8 | (uVar8 & 0xff00ff) << 8;
    cVar1 = uVar8 < uVar5;
    if (uVar5 < uVar8) {
      cVar1 = -1;
    }
  }
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      uVar9 = *param_2;
      uVar7 = param_2[1];
      uVar4 = *param_2;
      *(ulong *)(param_1 + 9) = param_2[1];
      *(ulong *)(param_1 + 1) = uVar4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar9 = uVar4 + 1;
      uVar7 = uVar6 + (0xfffffffffffffffe < uVar4);
      if (CARRY8(uVar6,(ulong)(0xfffffffffffffffe < uVar4))) {
        uVar7 = 0xffffffffffffffff;
        uVar9 = 0xffffffffffffffff;
      }
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      *param_2 = uVar7 >> 0x20 | uVar7 << 0x20;
      param_2[1] = uVar9 >> 0x20 | uVar9 << 0x20;
      *param_1 = 1;
      return;
    }
    *param_1 = 0;
    return;
  }
LAB_007e8f00:
  uVar9 = *param_2;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)((long)param_2 + 6) = 0;
  *(ulong *)(param_1 + 9) = param_2[1];
  *(ulong *)(param_1 + 1) = uVar9;
  *param_2 = 0;
  *(undefined2 *)((long)param_2 + 0xe) = 0x100;
  *param_1 = 1;
  return;
}


// ===== 007e8f28  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::count =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::iterator::Iterator>::count */

void __rustcall <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::count(void)

{
  FUN_007e7e80();
  return;
}


// ===== 007e8f3c  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::iterator::Iterator>::size_hint
          (undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  if ((*param_2 == 0 && param_2[1] == 0) && ((param_2[2] & param_2[3]) == 0xffffffffffffffff)) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    return;
  }
  auVar1 = FUN_007e7e80();
  if (auVar1._8_8_ != 0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    return;
  }
  *param_1 = auVar1._0_8_;
  param_1[1] = 1;
  param_1[2] = auVar1._0_8_;
  return;
}


// ===== 007e8fc0  <ipnet::ipext::IpAddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::nth_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::IpAddrRange as core::iter::traits::double_ended::DoubleEndedIterator>::nth_back */

void __rustcall
<ipnet::ipext::IpAddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::nth_back
          (undefined1 *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong extraout_x0;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar5 = DAT_002a16c0;
  puVar9 = (uint *)(param_2 + 1);
  if (*param_2 == '\x01') {
    puVar10 = (ulong *)(param_2 + 0x11);
    uVar13 = *puVar10;
    uVar14 = *(ulong *)(param_2 + 0x19);
    uVar11 = *(ulong *)(param_2 + 1);
    uVar12 = *(ulong *)(param_2 + 9);
    if ((uVar11 == 0 && uVar12 == 0) && ((uVar13 & uVar14) == 0xffffffffffffffff)) {
      uVar11 = 0xffffffffffffffff;
      uVar12 = (~param_3 & 0xff00ff00ff00ff00) >> 8 | (~param_3 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar14 = -(ulong)(0xfffffffffffffffe < param_3) - 1;
      uVar13 = (-param_3 - 2 & 0xff00ff00ff00ff00) >> 8 | (-param_3 - 2 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      *puVar10 = uVar14 >> 0x20 | uVar14 << 0x20;
      *(ulong *)(param_2 + 0x19) = uVar13 >> 0x20 | uVar13 << 0x20;
    }
    else {
      FUN_007e7e80(puVar9);
      if (CARRY8(~(CONCAT44(extraout_var,extraout_w1) + (ulong)(extraout_x0 > param_3)),
                 (ulong)(extraout_x0 <= param_3))) {
        param_2[7] = '\0';
        param_2[8] = '\0';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2[0x10] = '\x01';
        puVar9[0] = 0;
        puVar9[1] = 0;
        *puVar10 = 0;
        param_2[0x19] = '\0';
        param_2[0x1a] = '\0';
        param_2[0x1b] = '\0';
        param_2[0x1c] = '\0';
        param_2[0x1d] = '\0';
        param_2[0x1e] = '\0';
        param_2[0x1f] = '\0';
        param_2[0x20] = '\0';
        *param_1 = 2;
        return;
      }
      if (extraout_x0 - 1 == param_3 &&
          CONCAT44(extraout_var,extraout_w1) + -1 + (ulong)(extraout_x0 != 0) == 0) {
        *puVar10 = 0;
        param_2[0x19] = '\0';
        param_2[0x1a] = '\0';
        param_2[0x1b] = '\0';
        param_2[0x1c] = '\0';
        param_2[0x1d] = '\0';
        param_2[0x1e] = '\0';
        param_2[0x1f] = '\0';
        param_2[0x20] = '\0';
        puVar9[0] = 0;
        puVar9[1] = 0;
        param_2[7] = '\0';
        param_2[8] = '\0';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2[0x10] = '\x01';
      }
      else {
        uVar11 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar11 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        bVar2 = CARRY8(uVar11 - 1,(ulong)(param_3 <= uVar12));
        uVar13 = 0;
        if (uVar11 != 0 || bVar2) {
          uVar13 = uVar11 - (param_3 > uVar12);
        }
        uVar14 = 0;
        if (uVar11 != 0 || bVar2) {
          uVar14 = uVar12 - param_3;
        }
        uVar11 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar11 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar8 = (ulong)(uVar14 != 0 || uVar13 != 0);
        uVar4 = uVar14 - uVar8;
        uVar13 = uVar13 - (uVar14 < uVar8);
        uVar14 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        *puVar10 = uVar13 >> 0x20 | uVar13 << 0x20;
        *(ulong *)(param_2 + 0x19) = uVar14 >> 0x20 | uVar14 << 0x20;
      }
    }
    *(ulong *)(param_1 + 1) = uVar11;
    *param_1 = 1;
    *(ulong *)(param_1 + 9) = uVar12;
    return;
  }
  uVar6 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
  uVar7 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar6 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
  uVar3 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar6 = (uint)(uVar3 < uVar7);
  if (uVar7 < uVar3) {
    uVar6 = 0xffffffff;
  }
  cVar1 = 0 < (int)uVar6;
  if ((int)uVar6 < 0) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') {
    uVar11 = 1;
    if (param_3 == 0) {
LAB_007e9124:
      if (param_3 == uVar11 - 1) {
        uVar6 = *puVar9;
        uVar7 = 0;
        *puVar9 = 0x1000000;
      }
      else {
        uVar6 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 |
                (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
        uVar7 = uVar6 >> 0x10 | uVar6 << 0x10;
        uVar6 = 0;
        if ((uint)param_3 <= uVar7) {
          uVar6 = uVar7 - (uint)param_3;
        }
        uVar7 = uVar6 - (uVar6 != 0);
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      }
      *(uint *)(param_2 + 5) = uVar7;
      *param_1 = 0;
      *(uint *)(param_1 + 1) = uVar6;
      return;
    }
  }
  else if (cVar1 != '\x01') {
    uVar6 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
    uVar7 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar6 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
    uVar3 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar6 = 0;
    if (uVar3 <= uVar7) {
      uVar6 = uVar7 - uVar3;
    }
    uVar11 = (ulong)uVar6 + 1;
    if (param_3 < uVar11) goto LAB_007e9124;
  }
  *param_1 = 2;
  *(undefined8 *)puVar9 = uVar5;
  return;
}


// ===== 007e91f4  <ipnet::ipext::IpAddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::IpAddrRange as core::iter::traits::double_ended::DoubleEndedIterator>::next_back
    */

void __rustcall
<ipnet::ipext::IpAddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (undefined1 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  
  pcVar6 = param_2 + 1;
  if (*param_2 == '\x01') {
    <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::
    next_back(&local_34,pcVar6);
    if ((local_34 & 1) != 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 9) = uStack_2b;
      *(undefined8 *)(param_1 + 1) = local_33;
      return;
    }
  }
  else {
    uVar5 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
    uVar3 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
    uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (uint)(uVar4 < uVar3);
    if (uVar3 < uVar4) {
      uVar5 = 0xffffffff;
    }
    cVar1 = 0 < (int)uVar5;
    if ((int)uVar5 < 0) {
      cVar1 = -1;
    }
    if (cVar1 == '\0') {
      uVar2 = *(undefined4 *)pcVar6;
      *(undefined8 *)pcVar6 = DAT_002a16c0;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = uVar2;
      return;
    }
    if (cVar1 != '\x01') {
      uVar5 = *(uint *)(param_2 + 5);
      uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = uVar3 - (uVar3 != 0);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      *(uint *)(param_2 + 5) = uVar3 >> 0x10 | uVar3 << 0x10;
      *param_1 = 0;
      *(uint *)(param_1 + 1) = uVar5;
      return;
    }
  }
  *param_1 = 2;
  return;
}


// ===== 007e92fc  <ipnet::ipext::Ipv4AddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::nth_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv4AddrRange as core::iter::traits::double_ended::DoubleEndedIterator>::nth_back
    */

ulong __rustcall
<ipnet::ipext::Ipv4AddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::nth_back
          (uint *param_1,ulong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (uint)(uVar3 < uVar2);
  if (uVar2 < uVar3) {
    uVar4 = 0xffffffff;
  }
  cVar1 = 0 < (int)uVar4;
  if ((int)uVar4 < 0) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') {
    uVar5 = 1;
    if (param_2 == 0) {
LAB_007e9378:
      if (param_2 == uVar5 - 1) {
        uVar4 = *param_1;
        *(undefined8 *)param_1 = DAT_002a16c0;
        return (ulong)uVar4 << 8 | 1;
      }
      uVar4 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
      uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = 0;
      if ((uint)param_2 <= uVar2) {
        uVar4 = uVar2 - (uint)param_2;
      }
      uVar2 = uVar4 - (uVar4 != 0);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      param_1[1] = uVar2 >> 0x10 | uVar2 << 0x10;
      return (ulong)(uVar4 >> 0x10 | uVar4 << 0x10) << 8 | 1;
    }
  }
  else if (cVar1 != '\x01') {
    uVar4 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = 0;
    if (uVar3 <= uVar2) {
      uVar4 = uVar2 - uVar3;
    }
    uVar5 = (ulong)uVar4 + 1;
    if (param_2 < uVar5) goto LAB_007e9378;
  }
  *(undefined8 *)param_1 = DAT_002a16c0;
  return 0x2a100000;
}


// ===== 007e93dc  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::nth_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::double_ended::DoubleEndedIterator>::nth_back
    */

void __rustcall
<ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::nth_back
          (undefined1 *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  puVar5 = (ulong *)(param_2 + 2);
  uVar6 = *puVar5;
  uVar7 = param_2[3];
  if ((*param_2 == 0 && param_2[1] == 0) && ((uVar6 & uVar7) == 0xffffffffffffffff)) {
    *(undefined8 *)(param_1 + 1) = 0xffffffffffffffff;
    uVar7 = -(ulong)(0xfffffffffffffffe < param_3) - 1;
    uVar6 = (-param_3 - 2 & 0xff00ff00ff00ff00) >> 8 | (-param_3 - 2 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    *puVar5 = uVar7 >> 0x20 | uVar7 << 0x20;
    param_2[3] = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar6 = (~param_3 & 0xff00ff00ff00ff00) >> 8 | (~param_3 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 9) = uVar6 >> 0x20 | uVar6 << 0x20;
LAB_007e944c:
    *param_1 = 1;
    return;
  }
  auVar9 = FUN_007e7e80(param_2);
  uVar4 = auVar9._0_8_;
  if (CARRY8(~(auVar9._8_8_ + (ulong)(uVar4 > param_3)),(ulong)(uVar4 <= param_3))) {
    uVar3 = 0;
    *(undefined8 *)((long)param_2 + 6) = 0;
    *param_2 = 0;
    *puVar5 = 0;
    param_2[3] = 0;
  }
  else {
    if (uVar4 - 1 != param_3 || auVar9._8_8_ + -1 + (ulong)(uVar4 != 0) != 0) {
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar6 >> 0x20 | uVar6 << 0x20;
      bVar1 = CARRY8(uVar4 - 1,(ulong)(param_3 <= uVar7));
      uVar6 = 0;
      if (uVar4 != 0 || bVar1) {
        uVar6 = uVar7 - param_3;
      }
      uVar2 = 0;
      if (uVar4 != 0 || bVar1) {
        uVar2 = uVar4 - (param_3 > uVar7);
      }
      uVar7 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_1 + 9) = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar4 = (ulong)(uVar6 != 0 || uVar2 != 0);
      uVar7 = uVar6 - uVar4;
      uVar4 = uVar2 - (uVar6 < uVar4);
      uVar6 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar7 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      *puVar5 = uVar7 >> 0x20 | uVar7 << 0x20;
      param_2[3] = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar6 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_1 + 1) = uVar6 >> 0x20 | uVar6 << 0x20;
      goto LAB_007e944c;
    }
    lVar8 = *param_2;
    *puVar5 = 0;
    param_2[3] = 0;
    *(undefined8 *)((long)param_2 + 6) = 0;
    uVar3 = 1;
    *(long *)(param_1 + 9) = param_2[1];
    *(long *)(param_1 + 1) = lVar8;
    *param_2 = 0;
  }
  *(undefined2 *)((long)param_2 + 0xe) = 0x100;
  *param_1 = uVar3;
  return;
}


// ===== 007e9530  <ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::ipext::Ipv6AddrRange as core::iter::traits::double_ended::DoubleEndedIterator>::next_back
    */

void __rustcall
<ipnet::ipext::Ipv6AddrRange_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (undefined1 *param_1,ushort *param_2)

{
  char cVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = (uint)*param_2;
  puVar5 = (ulong *)(param_2 + 8);
  uVar8 = (uint)(ushort)*puVar5;
  if (*param_2 == (ushort)*puVar5) {
    uVar3 = param_2[9];
    uVar4 = param_2[1];
    if ((uint)uVar4 == (uint)uVar3) {
      uVar6 = (uint)param_2[2];
      uVar8 = (uint)param_2[10];
      if (param_2[2] == param_2[10]) {
        uVar6 = (uint)param_2[3];
        uVar8 = (uint)param_2[0xb];
        if (param_2[3] == param_2[0xb]) {
          uVar6 = (uint)param_2[4];
          uVar8 = (uint)param_2[0xc];
          if (param_2[4] == param_2[0xc]) {
            uVar6 = (uint)param_2[5];
            uVar8 = (uint)param_2[0xd];
            if (param_2[5] == param_2[0xd]) {
              uVar6 = (uint)param_2[6];
              uVar8 = (uint)param_2[0xe];
              if (param_2[6] == param_2[0xe]) {
                uVar6 = (uint)param_2[7];
                uVar8 = (uint)param_2[0xf];
                if (param_2[7] == param_2[0xf]) goto LAB_007e9644;
              }
            }
          }
        }
      }
      goto LAB_007e95b4;
    }
    uVar6 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    uVar8 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
    cVar1 = uVar6 < uVar8;
    if (uVar8 < uVar6) {
      cVar1 = -1;
    }
  }
  else {
LAB_007e95b4:
    uVar6 = uVar6 >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 8 | (uVar8 & 0xff00ff) << 8;
    cVar1 = uVar8 < uVar6;
    if (uVar6 < uVar8) {
      cVar1 = -1;
    }
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *param_1 = 0;
      return;
    }
    uVar2 = *puVar5;
    uVar7 = *(ulong *)(param_2 + 0xc);
    uVar9 = *puVar5;
    *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 0xc);
    *(ulong *)(param_1 + 1) = uVar9;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar2 >> 0x20 | uVar2 << 0x20;
    uVar2 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar2 >> 0x20 | uVar2 << 0x20;
    uVar10 = (ulong)(uVar7 != 0 || uVar9 != 0);
    uVar2 = uVar7 - uVar10;
    uVar9 = uVar9 - (uVar7 < uVar10);
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar7 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    *puVar5 = uVar7 >> 0x20 | uVar7 << 0x20;
    *(ulong *)(param_2 + 0xc) = uVar2 >> 0x20 | uVar2 << 0x20;
    *param_1 = 1;
    return;
  }
LAB_007e9644:
  uVar12 = *(undefined8 *)(param_2 + 4);
  uVar11 = *(undefined8 *)param_2;
  *puVar5 = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)(param_1 + 9) = uVar12;
  *(undefined8 *)(param_1 + 1) = uVar11;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[7] = 0x100;
  *param_1 = 1;
  return;
}


// ===== 007e966c  FUN_007e966c =====

void FUN_007e966c(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  pvVar1 = (void *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007e968c to 007e96c3 has its CatchHandler @ 007e96f4 */
    (*pcVar3)(pvVar1);
  }
  if (puVar2[1] != 0) {
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[2];
  puVar2 = (undefined8 *)param_1[3];
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(pvVar1);
  }
  if (puVar2[1] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 007e9728  FUN_007e9728 =====

void FUN_007e9728(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007e9748 to 007e974f has its CatchHandler @ 007e9780 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007e97a0  FUN_007e97a0 =====

void FUN_007e97a0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  bool bVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined8 uVar21;
  uint *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  uint *puVar27;
  
  bVar15 = param_1[3] < param_1[1];
  if (param_1[2] != *param_1) {
    bVar15 = param_1[2] < *param_1;
  }
  uVar20 = (uint)bVar15;
  uVar23 = (ulong)(uVar20 ^ 1);
  puVar19 = param_1 + (ulong)uVar20 * 2;
  puVar17 = param_1 + uVar23 * 2;
  bVar15 = param_1[7] < param_1[5];
  if (param_1[6] != param_1[4]) {
    bVar15 = param_1[6] < param_1[4];
  }
  uVar1 = 2;
  if (bVar15) {
    uVar1 = 3;
  }
  uVar2 = 2;
  if (!bVar15) {
    uVar2 = 3;
  }
  puVar4 = param_1 + uVar1 * 2;
  puVar22 = param_1 + uVar2 * 2;
  bVar15 = puVar4[1] < puVar19[1];
  if (*puVar4 != *puVar19) {
    bVar15 = *puVar4 < *puVar19;
  }
  bVar16 = puVar22[1] < puVar17[1];
  if (*puVar22 != *puVar17) {
    bVar16 = *puVar22 < *puVar17;
  }
  puVar5 = puVar4;
  uVar11 = uVar1;
  if (!bVar16) {
    puVar5 = puVar17;
    uVar11 = uVar23;
  }
  uVar12 = uVar1;
  uVar13 = (ulong)uVar20;
  uVar14 = uVar23;
  if (!bVar15) {
    puVar17 = puVar4;
    puVar19 = puVar5;
    uVar12 = (ulong)uVar20;
    uVar13 = uVar11;
    uVar14 = uVar1;
  }
  uVar1 = uVar2;
  if (!bVar16) {
    uVar1 = uVar14;
    puVar22 = puVar17;
    uVar23 = uVar2;
  }
  uVar20 = *puVar22;
  uVar7 = puVar22[1];
  uVar6 = *puVar19;
  uVar8 = puVar19[1];
  uVar21 = *(undefined8 *)(param_1 + uVar12 * 2);
  *param_3 = uVar21;
  bVar15 = uVar7 < uVar8;
  if (uVar20 != uVar6) {
    bVar15 = uVar20 < uVar6;
  }
  uVar2 = uVar13;
  if (!bVar15) {
    uVar2 = uVar1;
    uVar1 = uVar13;
  }
  param_3[1] = *(undefined8 *)(param_1 + uVar1 * 2);
  param_3[2] = *(undefined8 *)(param_1 + uVar2 * 2);
  puVar19 = (uint *)(param_3 + 3);
  *(undefined8 *)puVar19 = *(undefined8 *)(param_1 + uVar23 * 2);
  puVar17 = param_1 + 8;
  bVar15 = param_1[0xb] < param_1[9];
  if (param_1[10] != *puVar17) {
    bVar15 = param_1[10] < *puVar17;
  }
  uVar20 = (uint)bVar15;
  uVar23 = (ulong)(uVar20 ^ 1);
  puVar4 = puVar17 + uVar23 * 2;
  bVar15 = param_1[0xf] < param_1[0xd];
  if (param_1[0xe] != param_1[0xc]) {
    bVar15 = param_1[0xe] < param_1[0xc];
  }
  puVar22 = puVar17 + (ulong)uVar20 * 2;
  uVar1 = 2;
  if (bVar15) {
    uVar1 = 3;
  }
  uVar2 = 2;
  if (!bVar15) {
    uVar2 = 3;
  }
  puVar5 = puVar17 + uVar1 * 2;
  puVar18 = puVar17 + uVar2 * 2;
  bVar15 = puVar5[1] < puVar22[1];
  if (*puVar5 != *puVar22) {
    bVar15 = *puVar5 < *puVar22;
  }
  bVar16 = puVar18[1] < puVar4[1];
  if (*puVar18 != *puVar4) {
    bVar16 = *puVar18 < *puVar4;
  }
  puVar27 = puVar5;
  uVar11 = uVar1;
  if (!bVar16) {
    puVar27 = puVar4;
    uVar11 = uVar23;
  }
  uVar12 = uVar1;
  uVar13 = (ulong)uVar20;
  uVar14 = uVar23;
  if (!bVar15) {
    puVar4 = puVar5;
    puVar22 = puVar27;
    uVar12 = (ulong)uVar20;
    uVar13 = uVar11;
    uVar14 = uVar1;
  }
  uVar1 = uVar2;
  if (!bVar16) {
    uVar1 = uVar14;
    puVar18 = puVar4;
    uVar23 = uVar2;
  }
  uVar25 = *(undefined8 *)(puVar17 + uVar12 * 2);
  bVar15 = puVar18[1] < puVar22[1];
  if (*puVar18 != *puVar22) {
    bVar15 = *puVar18 < *puVar22;
  }
  puVar24 = param_3 + 4;
  *puVar24 = uVar25;
  uVar2 = uVar13;
  if (!bVar15) {
    uVar2 = uVar1;
    uVar1 = uVar13;
  }
  param_3[5] = *(undefined8 *)(puVar17 + uVar1 * 2);
  uVar20 = (uint)uVar21;
  bVar15 = (uint)((ulong)uVar25 >> 0x20) < *(uint *)((long)param_3 + 4);
  if ((uint)uVar25 != uVar20) {
    bVar15 = (uint)uVar25 < uVar20;
  }
  uVar20 = (uint)bVar15;
  param_3[6] = *(undefined8 *)(puVar17 + uVar2 * 2);
  puVar4 = (uint *)(puVar24 + uVar20);
  uVar21 = *(undefined8 *)(puVar17 + uVar23 * 2);
  if (uVar20 == 0) {
    puVar24 = param_3;
  }
  puVar17 = (uint *)(param_3 + (uVar20 ^ 1));
  puVar26 = param_3 + 7;
  *puVar26 = uVar21;
  bVar15 = (uint)((ulong)uVar21 >> 0x20) < *(uint *)((long)param_3 + 0x1c);
  if (*puVar19 != (uint)uVar21) {
    bVar15 = (uint)uVar21 < *puVar19;
  }
  uVar20 = (uint)bVar15;
  lVar3 = 0x18;
  if (uVar20 == 0) {
    lVar3 = 0x38;
  }
  puVar19 = puVar19 + (ulong)uVar20 * -2;
  uVar21 = *(undefined8 *)((long)param_3 + lVar3);
  puVar22 = (uint *)(puVar26 + ((ulong)uVar20 - 1));
  uVar6 = *puVar22;
  uVar20 = *(uint *)((long)puVar26 + (ulong)uVar20 * 8 + -4);
  bVar15 = puVar4[1] < puVar17[1];
  if (*puVar4 != *puVar17) {
    bVar15 = *puVar4 < *puVar17;
  }
  uVar7 = (uint)bVar15;
  uVar8 = *puVar19;
  uVar9 = puVar19[1];
  puVar5 = puVar4 + (ulong)uVar7 * 2;
  if (uVar7 == 0) {
    puVar4 = puVar17;
  }
  puVar17 = puVar17 + (ulong)(uVar7 ^ 1) * 2;
  uVar25 = *(undefined8 *)puVar4;
  *param_2 = *puVar24;
  param_2[1] = uVar25;
  uVar7 = *puVar5;
  uVar10 = puVar5[1];
  bVar15 = uVar20 < uVar9;
  if (uVar6 != uVar8) {
    bVar15 = uVar6 < uVar8;
  }
  uVar20 = (uint)bVar15;
  uVar6 = *puVar17;
  uVar8 = puVar17[1];
  puVar4 = puVar19;
  if (uVar20 == 0) {
    puVar4 = puVar22;
  }
  puVar19 = puVar19 + (ulong)uVar20 * -2;
  puVar18 = puVar22 + (ulong)uVar20 * 2 + -2;
  uVar9 = *puVar18;
  uVar20 = puVar22[(ulong)uVar20 * 2 + -1];
  param_2[6] = *(undefined8 *)puVar4;
  param_2[7] = uVar21;
  bVar15 = uVar10 < uVar8;
  if (uVar7 != uVar6) {
    bVar15 = uVar7 < uVar6;
  }
  uVar6 = (uint)bVar15;
  puVar4 = puVar5 + (ulong)uVar6 * 2;
  if (uVar6 == 0) {
    puVar5 = puVar17;
  }
  puVar17 = puVar17 + (ulong)(uVar6 ^ 1) * 2;
  bVar15 = uVar20 < puVar19[1];
  if (uVar9 != *puVar19) {
    bVar15 = uVar9 < *puVar19;
  }
  uVar20 = (uint)bVar15;
  puVar22 = puVar19;
  if (uVar20 == 0) {
    puVar22 = puVar18;
  }
  puVar19 = puVar19 + (ulong)uVar20 * -2;
  uVar21 = *(undefined8 *)puVar22;
  bVar15 = puVar4[1] < puVar17[1];
  if (*puVar4 != *puVar17) {
    bVar15 = *puVar4 < *puVar17;
  }
  uVar6 = (uint)bVar15;
  puVar27 = puVar18 + (ulong)uVar20 * 2 + -2;
  puVar22 = puVar4;
  if (uVar6 == 0) {
    puVar22 = puVar17;
  }
  bVar15 = puVar18[(ulong)uVar20 * 2 + -1] < puVar19[1];
  if (*puVar27 != *puVar19) {
    bVar15 = *puVar27 < *puVar19;
  }
  uVar20 = (uint)bVar15;
  uVar25 = *(undefined8 *)puVar22;
  puVar22 = puVar19;
  if (uVar20 == 0) {
    puVar22 = puVar27;
  }
  param_2[2] = *(undefined8 *)puVar5;
  param_2[3] = uVar25;
  param_2[4] = *(undefined8 *)puVar22;
  param_2[5] = uVar21;
  if ((puVar17 + (ulong)(uVar6 ^ 1) * 2 == puVar19 + (ulong)uVar20 * -2 + 2) &&
     (puVar4 + (ulong)uVar6 * 2 == puVar27 + (ulong)uVar20 * 2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::sort::shared::smallsort::panic_on_ord_violation();
}


// ===== 007e9bbc  FUN_007e9bbc =====

void FUN_007e9bbc(undefined8 *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x7e9c64);
    (*pcVar3)();
  }
  if (param_3 != param_2) {
    lVar4 = param_3 * 8;
    puVar5 = param_1 + param_3;
    do {
      uVar7 = *puVar5;
      uVar8 = (uint)((ulong)uVar7 >> 0x20);
      uVar6 = (uint)uVar7;
      bVar1 = uVar8 < *(uint *)((long)puVar5 + -4);
      if (*(uint *)(puVar5 + -1) != uVar6) {
        bVar1 = uVar6 < *(uint *)(puVar5 + -1);
      }
      lVar10 = lVar4;
      if (bVar1) {
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar10);
          lVar10 = lVar10 + -8;
          *puVar2 = puVar2[-1];
          puVar9 = param_1;
          if (lVar10 == 0) goto LAB_007e9be8;
          bVar1 = uVar8 < *(uint *)((long)puVar2 + -0xc);
          if (*(uint *)(puVar2 + -2) != uVar6) {
            bVar1 = uVar6 < *(uint *)(puVar2 + -2);
          }
        } while (bVar1);
        puVar9 = (undefined8 *)((long)param_1 + lVar10);
LAB_007e9be8:
        *puVar9 = uVar7;
      }
      puVar5 = puVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (puVar5 != param_1 + param_2);
  }
  return;
}


// ===== 007e9c64  FUN_007e9c64 =====

void FUN_007e9c64(ulong *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x7e9d48);
    (*pcVar8)();
  }
  if (param_3 != param_2) {
    lVar9 = param_3 * 0x20;
    puVar10 = param_1 + param_3 * 4;
    do {
      uVar3 = *puVar10;
      uVar5 = puVar10[1];
      uVar4 = puVar10[2];
      uVar6 = puVar10[3];
      uVar7 = ~puVar10[-3];
      bVar1 = !CARRY8(uVar6,~puVar10[-1]) &&
              !CARRY8(uVar6 + ~puVar10[-1],(ulong)(puVar10[-2] <= uVar4));
      if (uVar3 != puVar10[-4] || uVar5 != puVar10[-3]) {
        bVar1 = !CARRY8(uVar5,uVar7) && !CARRY8(uVar5 + uVar7,(ulong)(puVar10[-4] <= uVar3));
      }
      lVar12 = lVar9;
      if (bVar1) {
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar12);
          lVar12 = lVar12 + -0x20;
          puVar2[1] = puVar2[-3];
          *puVar2 = puVar2[-4];
          puVar2[3] = puVar2[-1];
          puVar2[2] = puVar2[-2];
          puVar11 = param_1;
          if (lVar12 == 0) goto LAB_007e9c90;
          uVar7 = ~puVar2[-7];
          bVar1 = !CARRY8(uVar6,~puVar2[-5]) &&
                  !CARRY8(uVar6 + ~puVar2[-5],(ulong)((ulong)puVar2[-6] <= uVar4));
          if (uVar3 != puVar2[-8] || uVar5 != puVar2[-7]) {
            bVar1 = !CARRY8(uVar5,uVar7) &&
                    !CARRY8(uVar5 + uVar7,(ulong)((ulong)puVar2[-8] <= uVar3));
          }
        } while (bVar1);
        puVar11 = (ulong *)((long)param_1 + lVar12);
LAB_007e9c90:
        *puVar11 = uVar3;
        puVar11[1] = uVar5;
        puVar11[2] = uVar4;
        puVar11[3] = uVar6;
      }
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + 0x20;
    } while (puVar10 != param_1 + param_2 * 4);
  }
  return;
}


// ===== 007e9d48  FUN_007e9d48 =====

void FUN_007e9d48(uint *param_1,ulong param_2,uint *param_3,ulong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  bool bVar17;
  bool bVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint *puVar33;
  ulong uVar34;
  
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x7ea278);
    (*pcVar16)();
  }
  uVar34 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar32 = *(undefined8 *)(param_1 + uVar34 * 2);
      *(undefined8 *)param_3 = *(undefined8 *)param_1;
      *(undefined8 *)(param_3 + uVar34 * 2) = uVar32;
      uVar21 = 1;
      lVar23 = 8;
      uVar25 = param_2 - uVar34;
      lVar24 = lVar23;
      uVar27 = uVar21;
      if (uVar34 < 2) goto LAB_007ea0c8;
    }
    else {
      bVar18 = param_1[3] < param_1[1];
      if (param_1[2] != *param_1) {
        bVar18 = param_1[2] < *param_1;
      }
      uVar27 = (ulong)(uint)bVar18;
      puVar20 = param_1 + uVar27 * 2;
      uVar21 = (ulong)(bVar18 ^ 1);
      puVar22 = param_1 + uVar21 * 2;
      bVar18 = param_1[7] < param_1[5];
      if (param_1[6] != param_1[4]) {
        bVar18 = param_1[6] < param_1[4];
      }
      uVar25 = 2;
      if (bVar18) {
        uVar25 = 3;
      }
      uVar3 = 2;
      if (!bVar18) {
        uVar3 = 3;
      }
      puVar29 = param_1 + uVar25 * 2;
      puVar33 = param_1 + uVar3 * 2;
      bVar18 = puVar29[1] < puVar20[1];
      if (*puVar29 != *puVar20) {
        bVar18 = *puVar29 < *puVar20;
      }
      bVar17 = puVar33[1] < puVar22[1];
      if (*puVar33 != *puVar22) {
        bVar17 = *puVar33 < *puVar22;
      }
      puVar1 = param_1 + uVar34 * 2;
      puVar5 = puVar29;
      uVar4 = uVar25;
      if (!bVar17) {
        puVar5 = puVar22;
        uVar4 = uVar21;
      }
      uVar11 = uVar25;
      uVar12 = uVar21;
      if (!bVar18) {
        puVar22 = puVar29;
        puVar20 = puVar5;
        uVar11 = uVar27;
        uVar27 = uVar4;
        uVar12 = uVar25;
      }
      if (!bVar17) {
        puVar33 = puVar22;
        uVar21 = uVar3;
        uVar3 = uVar12;
      }
      uVar32 = *(undefined8 *)(param_1 + uVar21 * 2);
      bVar18 = puVar1[3] < puVar1[1];
      if (puVar1[2] != *puVar1) {
        bVar18 = puVar1[2] < *puVar1;
      }
      uVar28 = (uint)bVar18;
      uVar21 = (ulong)(uVar28 ^ 1);
      puVar22 = puVar1 + uVar21 * 2;
      bVar18 = puVar1[7] < puVar1[5];
      if (puVar1[6] != puVar1[4]) {
        bVar18 = puVar1[6] < puVar1[4];
      }
      puVar29 = puVar1 + (ulong)uVar28 * 2;
      uVar25 = 2;
      if (bVar18) {
        uVar25 = 3;
      }
      uVar4 = 2;
      if (!bVar18) {
        uVar4 = 3;
      }
      puVar5 = puVar1 + uVar25 * 2;
      puVar7 = puVar1 + uVar4 * 2;
      bVar18 = puVar5[1] < puVar29[1];
      if (*puVar5 != *puVar29) {
        bVar18 = *puVar5 < *puVar29;
      }
      bVar17 = puVar7[1] < puVar22[1];
      if (*puVar7 != *puVar22) {
        bVar17 = *puVar7 < *puVar22;
      }
      puVar6 = puVar5;
      uVar12 = uVar21;
      uVar13 = uVar25;
      if (!bVar17) {
        puVar6 = puVar22;
        uVar12 = uVar4;
        uVar13 = uVar21;
      }
      uVar14 = uVar25;
      uVar15 = (ulong)uVar28;
      if (!bVar18) {
        puVar22 = puVar5;
        puVar29 = puVar6;
        uVar14 = (ulong)uVar28;
        uVar15 = uVar13;
        uVar21 = uVar25;
      }
      if (!bVar17) {
        puVar7 = puVar22;
        uVar4 = uVar21;
      }
      uVar28 = *puVar7;
      uVar30 = puVar7[1];
      bVar18 = puVar33[1] < puVar20[1];
      if (*puVar33 != *puVar20) {
        bVar18 = *puVar33 < *puVar20;
      }
      uVar8 = *puVar29;
      uVar9 = puVar29[1];
      uVar21 = uVar27;
      if (!bVar18) {
        uVar21 = uVar3;
        uVar3 = uVar27;
      }
      uVar31 = *(undefined8 *)(param_1 + uVar3 * 2);
      puVar20 = param_3 + uVar34 * 2;
      *(undefined8 *)param_3 = *(undefined8 *)(param_1 + uVar11 * 2);
      *(undefined8 *)(param_3 + 2) = uVar31;
      bVar18 = uVar30 < uVar9;
      if (uVar28 != uVar8) {
        bVar18 = uVar28 < uVar8;
      }
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + uVar21 * 2);
      *(undefined8 *)(param_3 + 6) = uVar32;
      uVar27 = uVar15;
      if (!bVar18) {
        uVar27 = uVar4;
        uVar4 = uVar15;
      }
      uVar26 = *(undefined8 *)(puVar1 + uVar4 * 2);
      uVar31 = *(undefined8 *)(puVar1 + uVar27 * 2);
      uVar32 = *(undefined8 *)(puVar1 + uVar12 * 2);
      *(undefined8 *)puVar20 = *(undefined8 *)(puVar1 + uVar14 * 2);
      *(undefined8 *)(puVar20 + 2) = uVar26;
      *(undefined8 *)(puVar20 + 4) = uVar31;
      *(undefined8 *)(puVar20 + 6) = uVar32;
      uVar21 = 4;
      lVar23 = 0x20;
      uVar25 = param_2 - uVar34;
      lVar24 = lVar23;
      uVar27 = uVar21;
      if (uVar34 < 5) goto LAB_007ea0c8;
    }
  }
  else {
    FUN_007e97a0(param_1,param_3,param_3 + param_2 * 2);
    FUN_007e97a0(param_1 + uVar34 * 2,param_3 + uVar34 * 2,param_3 + param_2 * 2 + 0x10);
    uVar21 = 8;
    lVar23 = 0x40;
    uVar25 = param_2 - uVar34;
    lVar24 = lVar23;
    uVar27 = uVar21;
    if (uVar34 < 9) goto LAB_007ea0c8;
  }
  do {
    uVar32 = *(undefined8 *)(param_1 + uVar27 * 2);
    puVar20 = param_3 + uVar27 * 2;
    *(undefined8 *)puVar20 = uVar32;
    uVar30 = (uint)((ulong)uVar32 >> 0x20);
    uVar28 = (uint)uVar32;
    bVar18 = uVar30 < puVar20[-1];
    if (puVar20[-2] != uVar28) {
      bVar18 = uVar28 < puVar20[-2];
    }
    lVar19 = lVar23;
    if (bVar18) {
      do {
        puVar2 = (undefined8 *)((long)param_3 + lVar19);
        lVar19 = lVar19 + -8;
        *puVar2 = puVar2[-1];
        puVar20 = param_3;
        if (lVar19 == 0) goto LAB_007ea044;
        bVar18 = uVar30 < *(uint *)((long)puVar2 + -0xc);
        if (*(uint *)(puVar2 + -2) != uVar28) {
          bVar18 = uVar28 < *(uint *)(puVar2 + -2);
        }
      } while (bVar18);
      puVar20 = (uint *)((long)param_3 + lVar19);
LAB_007ea044:
      *(undefined8 *)puVar20 = uVar32;
    }
    uVar27 = uVar27 + 1;
    lVar23 = lVar23 + 8;
  } while (uVar27 != uVar34);
LAB_007ea0c8:
  puVar20 = param_3 + uVar34 * 2;
  if (uVar21 < uVar25) {
    lVar23 = 8;
    puVar22 = puVar20;
    do {
      uVar32 = *(undefined8 *)(param_1 + uVar34 * 2 + uVar21 * 2);
      puVar29 = puVar20 + uVar21 * 2;
      *(undefined8 *)puVar29 = uVar32;
      uVar30 = (uint)((ulong)uVar32 >> 0x20);
      uVar28 = (uint)uVar32;
      bVar18 = uVar30 < puVar29[-1];
      if (puVar29[-2] != uVar28) {
        bVar18 = uVar28 < puVar29[-2];
      }
      lVar19 = lVar23;
      puVar29 = puVar22;
      if (bVar18) {
        do {
          puVar2 = (undefined8 *)((long)puVar29 + lVar24);
          *puVar2 = puVar2[-1];
          puVar33 = puVar20;
          if (lVar24 == lVar19) goto LAB_007ea0e8;
          puVar29 = puVar29 + -2;
          bVar18 = uVar30 < *(uint *)((long)puVar2 + -0xc);
          if (*(uint *)(puVar2 + -2) != uVar28) {
            bVar18 = uVar28 < *(uint *)(puVar2 + -2);
          }
          lVar19 = lVar19 + 8;
        } while (bVar18);
        puVar33 = (uint *)((long)puVar29 + lVar24);
LAB_007ea0e8:
        *(undefined8 *)puVar33 = uVar32;
      }
      uVar21 = uVar21 + 1;
      puVar22 = puVar22 + 2;
      lVar23 = lVar23 + -8;
    } while (uVar21 != uVar25);
  }
  lVar23 = param_2 * 8;
  uVar27 = 0;
  puVar29 = puVar20 + -2;
  puVar22 = param_3 + param_2 * 2 + -2;
  do {
    lVar23 = lVar23 + -8;
    bVar18 = puVar20[1] < param_3[1];
    if (*puVar20 != *param_3) {
      bVar18 = *puVar20 < *param_3;
    }
    uVar28 = (uint)bVar18;
    uVar30 = *puVar29;
    uVar9 = puVar29[1];
    uVar8 = *puVar22;
    uVar10 = puVar22[1];
    puVar33 = puVar20;
    if (uVar28 == 0) {
      puVar33 = param_3;
    }
    puVar20 = puVar20 + (ulong)uVar28 * 2;
    *(undefined8 *)(param_1 + uVar27 * 2) = *(undefined8 *)puVar33;
    uVar27 = uVar27 + 1;
    bVar18 = uVar10 < uVar9;
    if (uVar8 != uVar30) {
      bVar18 = uVar8 < uVar30;
    }
    uVar30 = (uint)bVar18;
    param_3 = param_3 + (ulong)(uVar28 ^ 1) * 2;
    puVar33 = puVar29;
    if (uVar30 == 0) {
      puVar33 = puVar22;
    }
    puVar1 = puVar22 + (ulong)uVar30 * 2;
    puVar29 = puVar29 + (ulong)uVar30 * -2;
    *(undefined8 *)((long)param_1 + lVar23) = *(undefined8 *)puVar33;
    puVar22 = puVar1 + -2;
  } while (uVar34 != uVar27);
  if ((param_2 & 1) != 0) {
    bVar18 = puVar29 + 2 <= param_3;
    puVar22 = param_3;
    if (bVar18) {
      puVar22 = puVar20;
    }
    param_3 = param_3 + (ulong)!bVar18 * 2;
    puVar20 = puVar20 + (ulong)bVar18 * 2;
    *(undefined8 *)(param_1 + uVar27 * 2) = *(undefined8 *)puVar22;
  }
  if ((param_3 == puVar29 + 2) && (puVar20 == puVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007ea270 to 007ea273 has its CatchHandler @ 007ea278 */
  core::slice::sort::shared::smallsort::panic_on_ord_violation();
}


// ===== 007ea294  FUN_007ea294 =====

void FUN_007ea294(ulong *param_1,ulong param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  code *pcVar10;
  bool bVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x7ea96c);
    (*pcVar10)();
  }
  uVar16 = param_2 >> 1;
  if (param_2 < 8) {
    uVar26 = *param_1;
    uVar22 = param_1[3];
    uVar18 = param_1[2];
    puVar12 = param_1 + uVar16 * 4;
    puVar17 = param_3 + uVar16 * 4;
    param_3[1] = param_1[1];
    *param_3 = uVar26;
    param_3[3] = uVar22;
    param_3[2] = uVar18;
    uVar22 = *puVar12;
    uVar18 = puVar12[3];
    uVar26 = puVar12[2];
    puVar17[1] = puVar12[1];
    *puVar17 = uVar22;
    puVar17[3] = uVar18;
    puVar17[2] = uVar26;
    uVar18 = 1;
    lVar19 = 0x20;
    uVar22 = param_2 - uVar16;
    lVar20 = lVar19;
    uVar26 = uVar18;
    if (uVar16 < 2) goto LAB_007ea740;
  }
  else {
    uVar26 = param_1[5];
    uVar22 = ~param_1[1];
    uVar18 = param_1[0xd];
    bVar11 = !CARRY8(param_1[7],~param_1[3]) &&
             !CARRY8(param_1[7] + ~param_1[3],(ulong)(param_1[2] <= param_1[6]));
    if (param_1[4] != *param_1 || uVar26 != param_1[1]) {
      bVar11 = !CARRY8(uVar26,uVar22) && !CARRY8(uVar26 + uVar22,(ulong)(*param_1 <= param_1[4]));
    }
    uVar26 = ~param_1[9];
    puVar12 = param_1 + (ulong)(uint)bVar11 * 4;
    bVar1 = !CARRY8(param_1[0xf],~param_1[0xb]) &&
            !CARRY8(param_1[0xf] + ~param_1[0xb],(ulong)(param_1[10] <= param_1[0xe]));
    if (param_1[0xc] != param_1[8] || uVar18 != param_1[9]) {
      bVar1 = !CARRY8(uVar18,uVar26) && !CARRY8(uVar18 + uVar26,(ulong)(param_1[8] <= param_1[0xc]))
      ;
    }
    puVar17 = param_1 + ((ulong)~(uint)bVar11 & 1) * 4;
    lVar19 = 0x60;
    if (!bVar1) {
      lVar19 = 0x40;
    }
    lVar20 = 0x40;
    if (!bVar1) {
      lVar20 = 0x60;
    }
    puVar15 = (ulong *)((long)param_1 + lVar19);
    puVar14 = (ulong *)((long)param_1 + lVar20);
    uVar26 = puVar15[1];
    uVar22 = ~puVar12[1];
    uVar18 = puVar14[1];
    bVar11 = !CARRY8(puVar15[3],~puVar12[3]) &&
             !CARRY8(puVar15[3] + ~puVar12[3],(ulong)(puVar12[2] <= puVar15[2]));
    if (*puVar15 != *puVar12 || uVar26 != puVar12[1]) {
      bVar11 = !CARRY8(uVar26,uVar22) && !CARRY8(uVar26 + uVar22,(ulong)(*puVar12 <= *puVar15));
    }
    uVar26 = ~puVar17[1];
    bVar1 = !CARRY8(puVar14[3],~puVar17[3]) &&
            !CARRY8(puVar14[3] + ~puVar17[3],(ulong)(puVar17[2] <= puVar14[2]));
    if (*puVar14 != *puVar17 || uVar18 != puVar17[1]) {
      bVar1 = !CARRY8(uVar18,uVar26) && !CARRY8(uVar18 + uVar26,(ulong)(*puVar17 <= *puVar14));
    }
    puVar21 = param_1 + uVar16 * 4;
    uVar26 = puVar21[6];
    uVar18 = puVar21[7];
    puVar4 = puVar15;
    if (!bVar1) {
      puVar4 = puVar17;
    }
    puVar2 = puVar17;
    if (!bVar11) {
      puVar2 = puVar15;
      puVar15 = puVar12;
      puVar12 = puVar4;
    }
    uVar22 = *puVar21;
    uVar27 = puVar21[1];
    puVar4 = puVar14;
    if (!bVar1) {
      puVar4 = puVar2;
      puVar17 = puVar14;
    }
    uVar30 = puVar21[4];
    uVar8 = puVar21[5];
    uVar24 = puVar21[2];
    uVar28 = puVar21[3];
    uVar23 = *puVar15;
    uVar31 = puVar15[3];
    uVar29 = puVar15[2];
    uVar25 = ~uVar27;
    param_3[1] = puVar15[1];
    *param_3 = uVar23;
    param_3[3] = uVar31;
    param_3[2] = uVar29;
    bVar11 = !CARRY8(uVar18,~uVar28) && !CARRY8(uVar18 + ~uVar28,(ulong)(uVar24 <= uVar26));
    if (uVar30 != uVar22 || uVar8 != uVar27) {
      bVar11 = !CARRY8(uVar8,uVar25) && !CARRY8(uVar8 + uVar25,(ulong)(uVar22 <= uVar30));
    }
    uVar26 = puVar21[0xd];
    uVar18 = ~puVar21[9];
    bVar1 = !CARRY8(puVar21[0xf],~puVar21[0xb]) &&
            !CARRY8(puVar21[0xf] + ~puVar21[0xb],(ulong)(puVar21[10] <= puVar21[0xe]));
    if (puVar21[0xc] != puVar21[8] || uVar26 != puVar21[9]) {
      bVar1 = !CARRY8(uVar26,uVar18) && !CARRY8(uVar26 + uVar18,(ulong)(puVar21[8] <= puVar21[0xc]))
      ;
    }
    puVar15 = puVar21 + (ulong)(uint)bVar11 * 4;
    lVar19 = 0x60;
    if (!bVar1) {
      lVar19 = 0x40;
    }
    lVar20 = 0x40;
    if (!bVar1) {
      lVar20 = 0x60;
    }
    puVar14 = puVar21 + ((ulong)~(uint)bVar11 & 1) * 4;
    puVar2 = (ulong *)((long)puVar21 + lVar19);
    uVar26 = puVar2[1];
    uVar18 = ~puVar15[1];
    puVar21 = (ulong *)((long)puVar21 + lVar20);
    bVar11 = !CARRY8(puVar2[3],~puVar15[3]) &&
             !CARRY8(puVar2[3] + ~puVar15[3],(ulong)(puVar15[2] <= puVar2[2]));
    if (*puVar2 != *puVar15 || uVar26 != puVar15[1]) {
      bVar11 = !CARRY8(uVar26,uVar18) && !CARRY8(uVar26 + uVar18,(ulong)(*puVar15 <= *puVar2));
    }
    uVar26 = puVar21[1];
    uVar22 = ~puVar14[1];
    uVar18 = puVar4[1];
    bVar1 = !CARRY8(puVar21[3],~puVar14[3]) &&
            !CARRY8(puVar21[3] + ~puVar14[3],(ulong)(puVar14[2] <= puVar21[2]));
    if (*puVar21 != *puVar14 || uVar26 != puVar14[1]) {
      bVar1 = !CARRY8(uVar26,uVar22) && !CARRY8(uVar26 + uVar22,(ulong)(*puVar14 <= *puVar21));
    }
    puVar7 = puVar2;
    puVar9 = puVar14;
    if (!bVar1) {
      puVar7 = puVar14;
      puVar9 = puVar21;
    }
    if (!bVar11) {
      puVar14 = puVar2;
      puVar2 = puVar15;
      puVar15 = puVar7;
    }
    if (!bVar1) {
      puVar21 = puVar14;
    }
    uVar27 = ~puVar12[1];
    uVar26 = *puVar15;
    uVar22 = puVar15[1];
    bVar11 = !CARRY8(puVar4[3],~puVar12[3]) &&
             !CARRY8(puVar4[3] + ~puVar12[3],(ulong)(puVar12[2] <= puVar4[2]));
    if (*puVar4 != *puVar12 || uVar18 != puVar12[1]) {
      bVar11 = !CARRY8(uVar18,uVar27) && !CARRY8(uVar18 + uVar27,(ulong)(*puVar12 <= *puVar4));
    }
    uVar18 = puVar15[2];
    uVar27 = puVar15[3];
    puVar14 = puVar12;
    if (!bVar11) {
      puVar14 = puVar4;
      puVar4 = puVar12;
    }
    uVar25 = *puVar4;
    uVar28 = puVar4[3];
    uVar24 = puVar4[2];
    uVar30 = puVar21[2];
    uVar8 = puVar21[3];
    param_3[5] = puVar4[1];
    param_3[4] = uVar25;
    param_3[7] = uVar28;
    param_3[6] = uVar24;
    uVar25 = *puVar14;
    uVar29 = puVar14[3];
    uVar23 = puVar14[2];
    uVar24 = *puVar21;
    uVar28 = puVar21[1];
    param_3[9] = puVar14[1];
    param_3[8] = uVar25;
    param_3[0xb] = uVar29;
    param_3[10] = uVar23;
    uVar31 = *puVar17;
    uVar29 = puVar17[3];
    uVar23 = puVar17[2];
    uVar25 = ~uVar22;
    param_3[0xd] = puVar17[1];
    param_3[0xc] = uVar31;
    param_3[0xf] = uVar29;
    param_3[0xe] = uVar23;
    uVar23 = *puVar2;
    uVar31 = puVar2[3];
    uVar29 = puVar2[2];
    bVar11 = !CARRY8(uVar8,~uVar27) && !CARRY8(uVar8 + ~uVar27,(ulong)(uVar18 <= uVar30));
    if (uVar24 != uVar26 || uVar28 != uVar22) {
      bVar11 = !CARRY8(uVar28,uVar25) && !CARRY8(uVar28 + uVar25,(ulong)(uVar26 <= uVar24));
    }
    puVar12 = param_3 + uVar16 * 4;
    puVar17 = puVar21;
    if (!bVar11) {
      puVar17 = puVar15;
    }
    puVar12[1] = puVar2[1];
    *puVar12 = uVar23;
    puVar12[3] = uVar31;
    puVar12[2] = uVar29;
    if (!bVar11) {
      puVar15 = puVar21;
    }
    uVar26 = *puVar17;
    uVar27 = puVar17[3];
    uVar22 = puVar17[2];
    uVar18 = 4;
    puVar12[5] = puVar17[1];
    puVar12[4] = uVar26;
    puVar12[7] = uVar27;
    puVar12[6] = uVar22;
    uVar27 = *puVar15;
    uVar22 = puVar15[3];
    uVar26 = puVar15[2];
    puVar12[9] = puVar15[1];
    puVar12[8] = uVar27;
    puVar12[0xb] = uVar22;
    puVar12[10] = uVar26;
    uVar26 = *puVar9;
    uVar27 = puVar9[3];
    uVar22 = puVar9[2];
    puVar12[0xd] = puVar9[1];
    puVar12[0xc] = uVar26;
    puVar12[0xf] = uVar27;
    puVar12[0xe] = uVar22;
    lVar19 = 0x80;
    uVar22 = param_2 - uVar16;
    lVar20 = lVar19;
    uVar26 = uVar18;
    if (uVar16 < 5) goto LAB_007ea740;
  }
  do {
    puVar12 = param_1 + uVar26 * 4;
    puVar17 = param_3 + uVar26 * 4;
    uVar27 = *puVar12;
    uVar24 = puVar12[3];
    uVar30 = puVar12[2];
    puVar17[1] = puVar12[1];
    *puVar17 = uVar27;
    puVar17[3] = uVar24;
    puVar17[2] = uVar30;
    uVar27 = *puVar17;
    uVar24 = puVar17[1];
    uVar30 = puVar17[2];
    uVar8 = puVar17[3];
    uVar28 = ~puVar17[-3];
    bVar11 = !CARRY8(uVar8,~puVar17[-1]) &&
             !CARRY8(uVar8 + ~puVar17[-1],(ulong)(puVar17[-2] <= uVar30));
    if (uVar27 != puVar17[-4] || uVar24 != puVar17[-3]) {
      bVar11 = !CARRY8(uVar24,uVar28) && !CARRY8(uVar24 + uVar28,(ulong)(puVar17[-4] <= uVar27));
    }
    lVar13 = lVar19;
    if (bVar11) {
      do {
        puVar3 = (undefined8 *)((long)param_3 + lVar13);
        lVar13 = lVar13 + -0x20;
        puVar3[1] = puVar3[-3];
        *puVar3 = puVar3[-4];
        puVar3[3] = puVar3[-1];
        puVar3[2] = puVar3[-2];
        puVar12 = param_3;
        if (lVar13 == 0) goto LAB_007ea678;
        uVar28 = ~puVar3[-7];
        bVar11 = !CARRY8(uVar8,~puVar3[-5]) &&
                 !CARRY8(uVar8 + ~puVar3[-5],(ulong)((ulong)puVar3[-6] <= uVar30));
        if (uVar27 != puVar3[-8] || uVar24 != puVar3[-7]) {
          bVar11 = !CARRY8(uVar24,uVar28) &&
                   !CARRY8(uVar24 + uVar28,(ulong)((ulong)puVar3[-8] <= uVar27));
        }
      } while (bVar11);
      puVar12 = (ulong *)((long)param_3 + lVar13);
LAB_007ea678:
      *puVar12 = uVar27;
      puVar12[1] = uVar24;
      puVar12[2] = uVar30;
      puVar12[3] = uVar8;
    }
    uVar26 = uVar26 + 1;
    lVar19 = lVar19 + 0x20;
  } while (uVar26 != uVar16);
LAB_007ea740:
  puVar12 = param_3 + uVar16 * 4;
  if (uVar18 < uVar22) {
    lVar19 = 0x20;
    puVar17 = puVar12;
    do {
      puVar15 = param_1 + uVar16 * 4 + uVar18 * 4;
      puVar14 = puVar12 + uVar18 * 4;
      uVar26 = *puVar15;
      uVar30 = puVar15[3];
      uVar27 = puVar15[2];
      puVar14[1] = puVar15[1];
      *puVar14 = uVar26;
      puVar14[3] = uVar30;
      puVar14[2] = uVar27;
      uVar26 = *puVar14;
      uVar30 = puVar14[1];
      uVar27 = puVar14[2];
      uVar24 = puVar14[3];
      uVar8 = ~puVar14[-3];
      bVar11 = !CARRY8(uVar24,~puVar14[-1]) &&
               !CARRY8(uVar24 + ~puVar14[-1],(ulong)(puVar14[-2] <= uVar27));
      if (uVar26 != puVar14[-4] || uVar30 != puVar14[-3]) {
        bVar11 = !CARRY8(uVar30,uVar8) && !CARRY8(uVar30 + uVar8,(ulong)(puVar14[-4] <= uVar26));
      }
      puVar15 = puVar17;
      lVar13 = lVar19;
      if (bVar11) {
        do {
          puVar3 = (undefined8 *)((long)puVar15 + lVar20);
          puVar3[1] = puVar3[-3];
          *puVar3 = puVar3[-4];
          puVar3[3] = puVar3[-1];
          puVar3[2] = puVar3[-2];
          puVar14 = puVar12;
          if (lVar20 == lVar13) goto LAB_007ea760;
          puVar15 = puVar15 + -4;
          uVar8 = ~puVar3[-7];
          bVar11 = !CARRY8(uVar24,~puVar3[-5]) &&
                   !CARRY8(uVar24 + ~puVar3[-5],(ulong)((ulong)puVar3[-6] <= uVar27));
          if (uVar26 != puVar3[-8] || uVar30 != puVar3[-7]) {
            bVar11 = !CARRY8(uVar30,uVar8) &&
                     !CARRY8(uVar30 + uVar8,(ulong)((ulong)puVar3[-8] <= uVar26));
          }
          lVar13 = lVar13 + 0x20;
        } while (bVar11);
        puVar14 = (ulong *)((long)puVar15 + lVar20);
LAB_007ea760:
        *puVar14 = uVar26;
        puVar14[1] = uVar30;
        puVar14[2] = uVar27;
        puVar14[3] = uVar24;
      }
      uVar18 = uVar18 + 1;
      puVar17 = puVar17 + 4;
      lVar19 = lVar19 + -0x20;
    } while (uVar18 != uVar22);
  }
  lVar19 = param_2 * 0x20;
  puVar15 = puVar12 + -4;
  puVar17 = param_3 + param_2 * 4 + -4;
  puVar14 = param_1;
  do {
    puVar21 = puVar14;
    lVar19 = lVar19 + -0x20;
    uVar16 = uVar16 - 1;
    uVar26 = puVar12[1];
    uVar22 = ~param_3[1];
    uVar18 = puVar17[1];
    bVar11 = !CARRY8(puVar12[3],~param_3[3]) &&
             !CARRY8(puVar12[3] + ~param_3[3],(ulong)(param_3[2] <= puVar12[2]));
    if (*puVar12 != *param_3 || uVar26 != param_3[1]) {
      bVar11 = !CARRY8(uVar26,uVar22) && !CARRY8(uVar26 + uVar22,(ulong)(*param_3 <= *puVar12));
    }
    uVar5 = (uint)bVar11;
    puVar14 = puVar12;
    if (uVar5 == 0) {
      puVar14 = param_3;
    }
    uVar26 = ~puVar15[1];
    puVar12 = puVar12 + (ulong)uVar5 * 4;
    puVar4 = (ulong *)((long)param_1 + lVar19);
    uVar22 = *puVar14;
    uVar30 = puVar14[3];
    uVar27 = puVar14[2];
    bVar11 = !CARRY8(puVar17[3],~puVar15[3]) &&
             !CARRY8(puVar17[3] + ~puVar15[3],(ulong)(puVar15[2] <= puVar17[2]));
    if (*puVar17 != *puVar15 || uVar18 != puVar15[1]) {
      bVar11 = !CARRY8(uVar18,uVar26) && !CARRY8(uVar18 + uVar26,(ulong)(*puVar15 <= *puVar17));
    }
    uVar6 = (uint)bVar11;
    param_3 = param_3 + (ulong)(uVar5 ^ 1) * 4;
    puVar2 = puVar15;
    if (uVar6 == 0) {
      puVar2 = puVar17;
    }
    puVar21[1] = puVar14[1];
    *puVar21 = uVar22;
    puVar21[3] = uVar30;
    puVar21[2] = uVar27;
    puVar7 = puVar17 + (ulong)uVar6 * 4;
    uVar22 = *puVar2;
    uVar18 = puVar2[3];
    uVar26 = puVar2[2];
    puVar15 = puVar15 + (ulong)uVar6 * -4;
    puVar17 = puVar7 + -4;
    puVar4[1] = puVar2[1];
    *puVar4 = uVar22;
    puVar4[3] = uVar18;
    puVar4[2] = uVar26;
    puVar14 = puVar21 + 4;
  } while (uVar16 != 0);
  if ((param_2 & 1) != 0) {
    bVar11 = puVar15 + 4 <= param_3;
    puVar17 = param_3;
    if (bVar11) {
      puVar17 = puVar12;
    }
    uVar16 = *puVar17;
    uVar18 = puVar17[3];
    uVar26 = puVar17[2];
    param_3 = param_3 + (ulong)!bVar11 * 4;
    puVar12 = puVar12 + (ulong)bVar11 * 4;
    puVar21[5] = puVar17[1];
    puVar21[4] = uVar16;
    puVar21[7] = uVar18;
    puVar21[6] = uVar26;
  }
  if ((param_3 == puVar15 + 4) && (puVar12 == puVar7)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007ea964 to 007ea967 has its CatchHandler @ 007ea96c */
  core::slice::sort::shared::smallsort::panic_on_ord_violation();
}


// ===== 007ea988  FUN_007ea988 =====

void FUN_007ea988(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_007eab00(param_3);
  if ((uVar1 & 1) != 0) {
    param_1[5] = (char)(uVar1 >> 0x28);
    *(int *)(param_1 + 1) = (int)(uVar1 >> 8);
    *param_1 = 0;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 007ea9d8  FUN_007ea9d8 =====

void FUN_007ea9d8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  char local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  undefined1 local_23;
  
  FUN_007eacc8(&local_34,param_3);
  if (local_34 == '\x01') {
    param_1[0x11] = local_23;
    *(undefined8 *)(param_1 + 9) = uStack_2b;
    *(undefined8 *)(param_1 + 1) = local_33;
    *param_1 = 1;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 007eaa44  FUN_007eaa44 =====

void FUN_007eaa44(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_007eab00(param_3);
  if ((uVar1 & 1) != 0) {
    param_1[5] = (char)(uVar1 >> 0x28);
    *(int *)(param_1 + 1) = (int)(uVar1 >> 8);
    *param_1 = 0;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 007eaa94  FUN_007eaa94 =====

void FUN_007eaa94(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  char local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  undefined1 local_23;
  
  FUN_007eacc8(&local_34,param_3);
  if (local_34 == '\x01') {
    param_1[0x11] = local_23;
    *(undefined8 *)(param_1 + 9) = uStack_2b;
    *(undefined8 *)(param_1 + 1) = local_33;
    *param_1 = 1;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 007eab00  FUN_007eab00 =====

ulong FUN_007eab00(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong extraout_x9;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined1 uStack_21;
  
  lVar13 = param_1[2];
  uVar7 = FUN_007eb014();
  uVar10 = extraout_x9;
  if ((uVar7 & 1) == 0) goto LAB_007eabe8;
  uVar3 = param_1[1];
  uVar10 = param_1[2];
  if (uVar10 == uVar3) goto LAB_007eabe8;
  if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar10,uVar3,&PTR_s__root__cargo_registry_src_index__00ae0700);
  }
  lVar11 = *param_1;
  if (*(char *)(lVar11 + uVar10) != '/') goto LAB_007eabe8;
  uVar1 = uVar10 + 1;
  param_1[2] = uVar1;
  if (uVar1 == uVar3) {
LAB_007eabc0:
    param_1[2] = uVar1;
    bVar5 = false;
    uVar9 = 0;
LAB_007eab78:
    uVar10 = uVar9;
    if (!bVar5) goto LAB_007eabe0;
  }
  else {
    uVar8 = uVar1;
    if (uVar3 <= uVar1) goto LAB_007eacb8;
    bVar4 = *(byte *)(lVar11 + uVar1);
    uVar8 = uVar10 + 2;
    param_1[2] = uVar8;
    uVar12 = bVar4 - 0x30;
    if (9 < uVar12) goto LAB_007eabc0;
    bVar5 = true;
    uVar2 = uVar12 & 0xff;
    uVar9 = (ulong)uVar2;
    if (uVar2 < 0x21) {
      if (uVar8 == uVar3) {
LAB_007eac34:
        bVar6 = false;
        param_1[2] = uVar8;
      }
      else {
        if (uVar3 <= uVar8) goto LAB_007eacb8;
        bVar4 = *(byte *)(lVar11 + uVar8);
        param_1[2] = uVar10 + 3;
        uVar12 = bVar4 - 0x30;
        if (9 < uVar12) goto LAB_007eac34;
        bVar6 = true;
        uVar8 = uVar10 + 3;
      }
      if (bVar6) {
        uVar12 = uVar2 * 10 + (uVar12 & 0xff);
        uVar9 = (ulong)uVar12;
        if (0x20 < uVar12) goto LAB_007eabdc;
        if (uVar8 != uVar3) {
          if (uVar3 <= uVar8) {
LAB_007eacb8:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar8,uVar3,&PTR_s__root__cargo_registry_src_index__00ae0700);
          }
          bVar4 = *(byte *)(lVar11 + uVar8);
          param_1[2] = uVar8 + 1;
          if (bVar4 - 0x30 < 10) goto LAB_007eabdc;
        }
        param_1[2] = uVar8;
      }
      goto LAB_007eab78;
    }
LAB_007eabdc:
    bVar5 = false;
LAB_007eabe0:
    param_1[2] = uVar1;
    uVar10 = uVar9;
  }
  if (bVar5) {
    if (0x20 < ((uint)uVar10 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002e6324,0x2b,&uStack_21,&DAT_00ae07c8,
                 &PTR_s__root__cargo_registry_src_index__00ae0768);
    }
    return uVar7 & 0xffffffff00 | (uVar10 & 0xff) << 0x28 | 1;
  }
LAB_007eabe8:
  param_1[2] = lVar13;
  return uVar10 << 8;
}


// ===== 007eacc8  FUN_007eacc8 =====

void FUN_007eacc8(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 uStack_21;
  ulong uVar5;
  
  lVar13 = param_2[2];
  local_70 = 0;
  uStack_68 = 0;
  auVar14 = FUN_007eb5e4(param_2,&local_70,8);
  uVar5 = auVar14._0_8_;
  if (uVar5 == 8) {
    auVar2._8_8_ = uStack_68;
    auVar2._0_8_ = local_70;
    auVar14 = NEON_rev16(auVar2,1);
    uVar6 = param_2[1];
    uVar9 = param_2[2];
    bVar4 = uVar6 <= uVar9;
    if (uVar9 != uVar6) {
LAB_007ead18:
      if (bVar4) {
LAB_007eafc0:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar9,uVar6,&PTR_s__root__cargo_registry_src_index__00ae0700);
      }
      lVar11 = *param_2;
      if (*(char *)(lVar11 + uVar9) != '/') goto LAB_007eae8c;
      uVar5 = uVar9 + 1;
      param_2[2] = uVar5;
      if (uVar5 == uVar6) {
LAB_007eae48:
        param_2[2] = uVar5;
        bVar4 = false;
        uVar8 = 0;
LAB_007ead64:
        if (!bVar4) goto LAB_007eae68;
      }
      else {
        uVar7 = uVar5;
        if (uVar6 <= uVar5) goto LAB_007eb008;
        bVar1 = *(byte *)(lVar11 + uVar5);
        uVar7 = uVar9 + 2;
        param_2[2] = uVar7;
        uVar12 = bVar1 - 0x30;
        if (9 < uVar12) goto LAB_007eae48;
        bVar4 = true;
        uVar8 = uVar12 & 0xff;
        if (uVar8 < 0x81) {
          if (uVar7 == uVar6) {
LAB_007eaee0:
            bVar3 = false;
            param_2[2] = uVar7;
          }
          else {
            if (uVar6 <= uVar7) goto LAB_007eb008;
            bVar1 = *(byte *)(lVar11 + uVar7);
            param_2[2] = uVar9 + 3;
            uVar12 = bVar1 - 0x30;
            if (9 < uVar12) goto LAB_007eaee0;
            bVar3 = true;
            uVar7 = uVar9 + 3;
          }
          if (bVar3) {
            uVar8 = uVar8 * 10 + (uVar12 & 0xff);
            if (0x80 < uVar8) goto LAB_007eae64;
            if (uVar7 == uVar6) {
LAB_007eaf30:
              bVar3 = false;
              param_2[2] = uVar7;
            }
            else {
              if (uVar6 <= uVar7) goto LAB_007eb008;
              bVar1 = *(byte *)(lVar11 + uVar7);
              param_2[2] = uVar7 + 1;
              uVar12 = bVar1 - 0x30;
              if (9 < uVar12) goto LAB_007eaf30;
              bVar3 = true;
              uVar7 = uVar7 + 1;
            }
            if (bVar3) {
              uVar8 = uVar8 * 10 + (uVar12 & 0xff);
              if (0x80 < uVar8) goto LAB_007eae64;
              if (uVar7 != uVar6) {
                if (uVar6 <= uVar7) {
LAB_007eb008:
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (uVar7,uVar6,&PTR_s__root__cargo_registry_src_index__00ae0700);
                }
                bVar1 = *(byte *)(lVar11 + uVar7);
                param_2[2] = uVar7 + 1;
                if (bVar1 - 0x30 < 10) goto LAB_007eae64;
              }
              param_2[2] = uVar7;
            }
          }
          goto LAB_007ead64;
        }
LAB_007eae64:
        bVar4 = false;
LAB_007eae68:
        param_2[2] = uVar5;
      }
      if (bVar4) {
        if (0x80 < (uVar8 & 0xff)) {
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    (&DAT_002e6324,0x2b,&uStack_21,&DAT_00ae07c8,
                     &PTR_s__root__cargo_registry_src_index__00ae0780);
        }
        *(long *)(param_1 + 9) = auVar14._8_8_;
        *(long *)(param_1 + 1) = auVar14._0_8_;
        uVar10 = 1;
        param_1[0x11] = (char)uVar8;
        goto LAB_007eae94;
      }
    }
  }
  else if ((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar6 = param_2[1];
    uVar9 = param_2[2];
    if (uVar9 != uVar6) {
      if (uVar6 <= uVar9) goto LAB_007eafc0;
      if (*(char *)(*param_2 + uVar9) == ':') {
        uVar7 = uVar9 + 1;
        param_2[2] = uVar7;
        if (uVar7 != uVar6) {
          if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar7,uVar6,&PTR_s__root__cargo_registry_src_index__00ae0700);
          }
          if (*(char *)(*param_2 + uVar7) == ':') {
            local_60 = 0;
            uStack_58 = 0;
            param_2[2] = uVar9 + 2;
            uVar6 = FUN_007eb5e4(param_2,&local_60,8 - uVar5);
            if (8 < uVar5) {
                    /* WARNING: Subroutine does not return */
              core::slice::index::slice_index_fail
                        (0,uVar5,8,&PTR_s__root__cargo_registry_src_index__00ae07b0);
            }
            if (8 < uVar6) {
                    /* WARNING: Subroutine does not return */
              core::slice::index::slice_index_fail
                        (0,uVar6,8,&PTR_s__root__cargo_registry_src_index__00ae0798);
            }
            if (8 < uVar6 + uVar5) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic
                        (&DAT_002e634f,0x2e,&PTR_s__root__cargo_registry_src_index__00ae0830);
            }
            local_50 = 0;
            uStack_48 = 0;
            memcpy(&local_50,&local_70,uVar5 << 1);
            memcpy((void *)((long)&local_50 + (8 - uVar6) * 2),&local_60,uVar6 << 1);
            auVar14._8_8_ = uStack_48;
            auVar14._0_8_ = local_50;
            auVar14 = NEON_rev16(auVar14,1);
            uVar6 = param_2[1];
            uVar9 = param_2[2];
            bVar4 = uVar6 <= uVar9;
            if (uVar9 != uVar6) goto LAB_007ead18;
          }
        }
      }
    }
  }
LAB_007eae8c:
  uVar10 = 0;
  param_2[2] = lVar13;
LAB_007eae94:
  *param_1 = uVar10;
  return;
}


// ===== 007eb014  FUN_007eb014 =====

/* WARNING: Removing unreachable block (ram,0x007eb0f8) */
/* WARNING: Removing unreachable block (ram,0x007eb09c) */

ulong FUN_007eb014(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  uint in_w11;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  bool bVar11;
  ulong in_x15;
  byte in_w16;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong in_x17;
  ulong uVar15;
  
  bVar5 = (byte)param_3;
  uVar14 = (uint)in_x17;
  uVar4 = param_1[2];
  lVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar4 == uVar2) {
LAB_007eb058:
    param_1[2] = uVar4;
    bVar11 = false;
    uVar13 = uVar4;
    uVar15 = in_x15;
LAB_007eb140:
    bVar10 = (byte)uVar15;
    if (!bVar11) goto LAB_007eb148;
  }
  else {
    uVar15 = uVar4;
    if (uVar2 <= uVar4) goto LAB_007eb598;
    in_w11 = *(byte *)(lVar1 + uVar4) - 0x30;
    uVar13 = uVar4 + 1;
    param_1[2] = uVar13;
    if (9 < in_w11) goto LAB_007eb058;
    bVar11 = true;
    uVar15 = in_x15;
    if (uVar13 == uVar2) {
LAB_007eb0a0:
      param_1[2] = uVar13;
      in_w11 = in_w11 & 0xff;
      goto LAB_007eb140;
    }
    uVar15 = uVar13;
    if (uVar2 <= uVar13) goto LAB_007eb598;
    bVar10 = *(byte *)(lVar1 + uVar13);
    uVar9 = uVar4 + 2;
    param_1[2] = uVar9;
    uVar7 = bVar10 - 0x30;
    uVar15 = uVar9;
    if (9 < uVar7) goto LAB_007eb0a0;
    in_w11 = (in_w11 & 0xff) * 10 + (uVar7 & 0xff);
    if (0xff < in_w11) goto LAB_007eb0c0;
    if (uVar9 == uVar2) {
LAB_007eb0fc:
      param_1[2] = uVar9;
      uVar13 = uVar9;
      goto LAB_007eb140;
    }
    if (uVar2 <= uVar9) goto LAB_007eb598;
    bVar10 = *(byte *)(lVar1 + uVar9);
    uVar15 = uVar4 + 3;
    param_1[2] = uVar15;
    uVar7 = bVar10 - 0x30;
    if (9 < uVar7) goto LAB_007eb0fc;
    in_w11 = in_w11 * 10 + (uVar7 & 0xff);
    if (in_w11 < 0x100) {
      if (uVar15 != uVar2) {
        if (uVar2 <= uVar15) goto LAB_007eb598;
        bVar10 = *(byte *)(lVar1 + uVar15);
        param_1[2] = uVar4 + 4;
        if (bVar10 - 0x30 < 10) goto LAB_007eb0c0;
      }
      param_1[2] = uVar15;
      uVar13 = uVar15;
      goto LAB_007eb140;
    }
LAB_007eb0c0:
    bVar10 = (byte)uVar15;
    bVar11 = false;
LAB_007eb148:
    param_1[2] = uVar4;
    uVar13 = uVar4;
  }
  if ((!bVar11) || (uVar13 == uVar2)) goto LAB_007eb580;
  if (uVar2 <= uVar13) goto LAB_007eb5a4;
  uVar7 = (uint)*(byte *)(lVar1 + uVar13);
  if (*(byte *)(lVar1 + uVar13) != 0x2e) goto LAB_007eb580;
  uVar9 = uVar13 + 1;
  param_1[2] = uVar9;
  if (uVar9 == uVar2) {
LAB_007eb1a8:
    param_1[2] = uVar9;
    bVar11 = false;
    uVar15 = uVar9;
LAB_007eb2a0:
    uVar13 = uVar15;
    if (!bVar11) goto LAB_007eb2a8;
  }
  else {
    if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar9,uVar2,&PTR_s__root__cargo_registry_src_index__00ae0700);
    }
    bVar3 = *(byte *)(lVar1 + uVar9);
    uVar15 = uVar13 + 2;
    param_1[2] = uVar15;
    uVar7 = bVar3 - 0x30;
    if (9 < uVar7) goto LAB_007eb1a8;
    bVar11 = true;
    if (uVar15 == uVar2) {
LAB_007eb1e8:
      in_w16 = false;
      param_1[2] = uVar15;
    }
    else {
      if (uVar2 <= uVar15) goto LAB_007eb598;
      bVar10 = *(byte *)(lVar1 + uVar15);
      in_x17 = uVar13 + 3;
      param_1[2] = in_x17;
      uVar14 = bVar10 - 0x30;
      bVar10 = (byte)uVar14;
      if (9 < uVar14) goto LAB_007eb1e8;
      in_w16 = true;
      uVar15 = in_x17;
    }
    uVar14 = (uint)in_x17;
    uVar7 = uVar7 & 0xff;
    if (!(bool)in_w16) goto LAB_007eb2a0;
    in_w16 = 10;
    uVar7 = uVar7 * 10 + (uint)bVar10;
    if (uVar7 < 0x100) {
      if (uVar15 == uVar2) {
LAB_007eb244:
        in_w16 = false;
        param_1[2] = uVar15;
      }
      else {
        if (uVar2 <= uVar15) goto LAB_007eb598;
        bVar10 = *(byte *)(lVar1 + uVar15);
        in_x17 = uVar15 + 1;
        param_1[2] = in_x17;
        uVar14 = bVar10 - 0x30;
        bVar10 = (byte)uVar14;
        if (9 < uVar14) goto LAB_007eb244;
        in_w16 = true;
        uVar15 = in_x17;
      }
      uVar14 = (uint)in_x17;
      if (!(bool)in_w16) goto LAB_007eb2a0;
      uVar13 = 10;
      in_w16 = 10;
      uVar7 = uVar7 * 10 + (uint)bVar10;
      if (uVar7 < 0x100) {
        if (uVar15 == uVar2) {
LAB_007eb294:
          bVar6 = false;
          param_1[2] = uVar15;
        }
        else {
          if (uVar2 <= uVar15) goto LAB_007eb598;
          bVar10 = *(byte *)(lVar1 + uVar15);
          uVar13 = uVar15 + 1;
          param_1[2] = uVar13;
          if (9 < bVar10 - 0x30) goto LAB_007eb294;
          bVar6 = true;
          uVar15 = uVar13;
        }
        in_w16 = (byte)uVar13;
        if (!bVar6) goto LAB_007eb2a0;
      }
    }
    bVar11 = false;
LAB_007eb2a8:
    param_1[2] = uVar9;
    uVar13 = uVar9;
  }
  if ((!bVar11) || (uVar13 == uVar2)) goto LAB_007eb580;
  if (uVar2 <= uVar13) goto LAB_007eb5a4;
  uVar8 = (uint)*(byte *)(lVar1 + uVar13);
  if (*(byte *)(lVar1 + uVar13) != 0x2e) goto LAB_007eb580;
  uVar9 = uVar13 + 1;
  param_1[2] = uVar9;
  if (uVar9 == uVar2) {
LAB_007eb304:
    bVar11 = false;
    param_1[2] = uVar9;
    uVar13 = uVar9;
  }
  else {
    if (uVar2 <= uVar9) goto LAB_007eb5c4;
    bVar10 = *(byte *)(lVar1 + uVar9);
    param_1[2] = uVar13 + 2;
    uVar8 = bVar10 - 0x30;
    if (9 < uVar8) goto LAB_007eb304;
    bVar11 = true;
    uVar13 = uVar13 + 2;
  }
  if (bVar11) {
    if (uVar13 == uVar2) {
LAB_007eb348:
      uVar14 = 0;
      param_1[2] = uVar13;
    }
    else {
      uVar15 = uVar13;
      if (uVar2 <= uVar13) goto LAB_007eb598;
      bVar5 = *(byte *)(lVar1 + uVar13);
      param_3 = uVar13 + 1;
      param_1[2] = param_3;
      uVar14 = bVar5 - 0x30;
      in_w16 = (byte)uVar14;
      if (9 < uVar14) goto LAB_007eb348;
      uVar14 = 1;
      uVar13 = param_3;
    }
    bVar5 = (byte)param_3;
    uVar8 = uVar8 & 0xff;
    if (uVar14 == 0) goto LAB_007eb400;
    uVar14 = 10;
    uVar8 = uVar8 * 10 + (uint)in_w16;
    if (uVar8 < 0x100) {
      if (uVar13 == uVar2) {
LAB_007eb3a4:
        uVar14 = 0;
        param_1[2] = uVar13;
      }
      else {
        uVar15 = uVar13;
        if (uVar2 <= uVar13) goto LAB_007eb598;
        bVar5 = *(byte *)(lVar1 + uVar13);
        param_3 = uVar13 + 1;
        param_1[2] = param_3;
        uVar14 = bVar5 - 0x30;
        in_w16 = (byte)uVar14;
        if (9 < uVar14) goto LAB_007eb3a4;
        uVar14 = 1;
        uVar13 = param_3;
      }
      bVar5 = (byte)param_3;
      if (uVar14 == 0) goto LAB_007eb400;
      uVar15 = 10;
      uVar14 = 10;
      uVar8 = uVar8 * 10 + (uint)in_w16;
      if (uVar8 < 0x100) {
        if (uVar13 == uVar2) {
LAB_007eb3f4:
          bVar6 = false;
          param_1[2] = uVar13;
        }
        else {
          uVar15 = uVar13;
          if (uVar2 <= uVar13) {
LAB_007eb598:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar15,uVar2,&PTR_s__root__cargo_registry_src_index__00ae0700);
          }
          bVar10 = *(byte *)(lVar1 + uVar13);
          uVar15 = uVar13 + 1;
          param_1[2] = uVar15;
          if (9 < bVar10 - 0x30) goto LAB_007eb3f4;
          bVar6 = true;
          uVar13 = uVar15;
        }
        uVar14 = (uint)uVar15;
        if (!bVar6) goto LAB_007eb400;
      }
    }
    bVar11 = false;
LAB_007eb408:
    param_1[2] = uVar9;
    uVar13 = uVar9;
  }
  else {
LAB_007eb400:
    if (!bVar11) goto LAB_007eb408;
  }
  if ((!bVar11) || (uVar13 == uVar2)) goto LAB_007eb580;
  if (uVar2 <= uVar13) {
LAB_007eb5a4:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar13,uVar2,&PTR_s__root__cargo_registry_src_index__00ae0700);
  }
  if (*(char *)(lVar1 + uVar13) != '.') goto LAB_007eb580;
  uVar9 = uVar13 + 1;
  param_1[2] = uVar9;
  if (uVar9 == uVar2) {
LAB_007eb464:
    bVar11 = false;
    param_1[2] = uVar9;
    uVar15 = uVar9;
  }
  else {
    if (uVar2 <= uVar9) {
LAB_007eb5c4:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar9,uVar2,&PTR_s__root__cargo_registry_src_index__00ae0700);
    }
    uVar14 = *(byte *)(lVar1 + uVar9) - 0x30;
    param_1[2] = uVar13 + 2;
    if (9 < uVar14) goto LAB_007eb464;
    bVar11 = true;
    uVar15 = uVar13 + 2;
  }
  uVar12 = 1;
  if (bVar11) {
    if (uVar15 == uVar2) {
LAB_007eb4a4:
      bVar6 = false;
      param_1[2] = uVar15;
    }
    else {
      if (uVar2 <= uVar15) goto LAB_007eb5d4;
      uVar12 = *(byte *)(lVar1 + uVar15) - 0x30;
      bVar5 = (byte)uVar12;
      param_1[2] = uVar15 + 1;
      if (9 < uVar12) goto LAB_007eb4a4;
      bVar6 = true;
      uVar15 = uVar15 + 1;
    }
    uVar12 = uVar14 & 0xff;
    if (!bVar6) goto LAB_007eb548;
    uVar14 = 10;
    uVar12 = uVar12 * 10 + (uint)bVar5;
    if (uVar12 < 0x100) {
      if (uVar15 == uVar2) {
LAB_007eb500:
        bVar6 = false;
        param_1[2] = uVar15;
      }
      else {
        if (uVar2 <= uVar15) goto LAB_007eb5d4;
        bVar5 = *(byte *)(lVar1 + uVar15);
        param_1[2] = uVar15 + 1;
        uVar14 = bVar5 - 0x30;
        if (9 < uVar14) goto LAB_007eb500;
        bVar6 = true;
        uVar15 = uVar15 + 1;
      }
      if (bVar6) {
        uVar12 = uVar12 * 10 + (uVar14 & 0xff);
        if (0xff < uVar12) goto LAB_007eb4c8;
        if (uVar15 != uVar2) {
          if (uVar2 <= uVar15) {
LAB_007eb5d4:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar15,uVar2,&PTR_s__root__cargo_registry_src_index__00ae0700);
          }
          bVar5 = *(byte *)(lVar1 + uVar15);
          param_1[2] = uVar15 + 1;
          if (bVar5 - 0x30 < 10) goto LAB_007eb4c8;
        }
        param_1[2] = uVar15;
      }
      goto LAB_007eb548;
    }
LAB_007eb4c8:
    bVar11 = false;
LAB_007eb550:
    param_1[2] = uVar9;
  }
  else {
LAB_007eb548:
    if (!bVar11) goto LAB_007eb550;
  }
  if (bVar11) {
    return (ulong)((uVar8 & 0xff) << 0x10 | uVar12 << 0x18 | (uVar7 & 0xff) << 8 | in_w11 & 0xff) <<
           8 | 1;
  }
LAB_007eb580:
  param_1[2] = uVar4;
  return (long)param_1 << 8;
}


// ===== 007eb5e4  FUN_007eb5e4 =====

undefined1  [16] FUN_007eb5e4(long *param_1,ushort *param_2,ulong param_3)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong in_x11;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong in_x12;
  ulong extraout_x12;
  ulong extraout_x12_00;
  byte bVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined1 auVar18 [16];
  
  uVar15 = 0;
  uVar16 = param_1[2];
  puVar17 = param_2;
  do {
    if (uVar15 < param_3 - 1) {
      if (uVar15 == 0) {
        uVar8 = FUN_007eb014(param_1);
        in_x11 = extraout_x11_00;
        in_x12 = extraout_x12_00;
        if ((uVar8 & 1) == 0) {
LAB_007eb670:
          param_1[2] = uVar16;
          goto LAB_007eb674;
        }
        uVar2 = (ushort)(uVar8 >> 0x10);
        uVar1 = (ushort)(uVar8 >> 0x20);
        *param_2 = uVar2 & 0xff | (ushort)uVar8 & 0xff00;
LAB_007eb994:
        uVar9 = 1;
        puVar17[1] = uVar2 & 0xff00 | uVar1 & 0xff;
        uVar15 = uVar15 + 2;
      }
      else {
        uVar8 = param_1[1];
        if (uVar16 != uVar8) {
          if (uVar8 <= uVar16) goto LAB_007eb9d8;
          if (*(char *)(*param_1 + uVar16) == ':') {
            param_1[2] = uVar16 + 1;
            uVar8 = FUN_007eb014(param_1);
            in_x11 = extraout_x11;
            in_x12 = extraout_x12;
            if ((uVar8 & 1) == 0) goto LAB_007eb670;
            if (7 < uVar15) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar15,8,&PTR_s__root__cargo_registry_src_index__00ae07e8);
            }
            uVar2 = (ushort)(uVar8 >> 0x10);
            *puVar17 = uVar2 & 0xff | (ushort)uVar8 & 0xff00;
            if (uVar15 == 7) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (8,8,&PTR_s__root__cargo_registry_src_index__00ae0800);
            }
            uVar1 = (ushort)(uVar8 >> 0x20);
            goto LAB_007eb994;
          }
        }
        param_1[2] = uVar16;
LAB_007eb67c:
        if (uVar16 != uVar8) {
          if (uVar8 <= uVar16) {
LAB_007eb9d8:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar16,uVar8,&PTR_s__root__cargo_registry_src_index__00ae0700);
          }
          lVar10 = *param_1;
          if (*(char *)(lVar10 + uVar16) == ':') {
            uVar6 = uVar16 + 1;
            param_1[2] = uVar6;
            bVar3 = uVar8 <= uVar6;
            if (uVar6 == uVar8) goto LAB_007eb6a8;
            goto LAB_007eb6c8;
          }
        }
LAB_007eb930:
        uVar9 = 0;
        param_1[2] = uVar16;
      }
      goto LAB_007eb9a8;
    }
LAB_007eb674:
    uVar8 = param_1[1];
    if (uVar15 != 0) goto LAB_007eb67c;
    lVar10 = *param_1;
    bVar3 = uVar8 <= uVar16;
    uVar6 = uVar16;
    if (uVar16 == uVar8) {
LAB_007eb6a8:
      bVar3 = false;
LAB_007eb6ac:
      param_1[2] = uVar6;
      uVar7 = uVar6;
      uVar12 = uVar6;
    }
    else {
LAB_007eb6c8:
      if (bVar3) goto LAB_007eb9ec;
      bVar11 = *(byte *)(lVar10 + uVar6);
      uVar12 = uVar6 + 1;
      param_1[2] = uVar12;
      uVar13 = bVar11 - 0x30;
      uVar7 = uVar6;
      if (9 < uVar13) {
        uVar13 = (uint)bVar11;
        if (5 < bVar11 - 0x61) {
          bVar4 = 5 < (uVar13 - 0x41 & 0xff);
          in_x11 = (ulong)(uVar13 - 0x37);
          bVar3 = !bVar4;
          if (bVar4) goto LAB_007eb6ac;
          goto LAB_007eb6f8;
        }
        uVar13 = uVar13 - 0x57;
      }
      in_x11 = (ulong)uVar13;
      bVar3 = true;
    }
LAB_007eb6f8:
    uVar6 = uVar12;
    if (bVar3) {
      if (uVar6 == uVar8) {
        uVar13 = 0;
LAB_007eb708:
        param_1[2] = uVar6;
        uVar12 = uVar6;
      }
      else {
        if (uVar8 <= uVar6) goto LAB_007eb9ec;
        bVar11 = *(byte *)(lVar10 + uVar6);
        uVar12 = uVar6 + 1;
        param_1[2] = uVar12;
        uVar13 = bVar11 - 0x30;
        if (9 < uVar13) {
          uVar13 = (uint)bVar11;
          if (5 < bVar11 - 0x61) {
            bVar4 = 5 < (uVar13 - 0x41 & 0xff);
            in_x12 = (ulong)(uVar13 - 0x37);
            uVar13 = (uint)!bVar4;
            if (bVar4) goto LAB_007eb708;
            goto LAB_007eb748;
          }
          uVar13 = uVar13 - 0x57;
        }
        in_x12 = (ulong)uVar13;
        uVar13 = 1;
      }
LAB_007eb748:
      uVar14 = (uint)in_x11 & 0xff;
      in_x11 = (ulong)uVar14;
      uVar6 = uVar12;
      if (uVar13 == 0) goto LAB_007eb874;
      if (uVar12 == uVar8) {
        bVar4 = false;
LAB_007eb75c:
        param_1[2] = uVar12;
        uVar6 = uVar12;
      }
      else {
        if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar12,uVar8,&PTR_s__root__cargo_registry_src_index__00ae0700);
        }
        bVar11 = *(byte *)(lVar10 + uVar12);
        uVar6 = uVar12 + 1;
        param_1[2] = uVar6;
        uVar13 = bVar11 - 0x30;
        if (9 < uVar13) {
          uVar13 = (uint)bVar11;
          if (5 < bVar11 - 0x61) {
            bVar5 = 5 < (uVar13 - 0x41 & 0xff);
            uVar13 = uVar13 - 0x37;
            bVar4 = !bVar5;
            if (bVar5) goto LAB_007eb75c;
            goto LAB_007eb7a0;
          }
          uVar13 = uVar13 - 0x57;
        }
        bVar4 = true;
      }
LAB_007eb7a0:
      uVar14 = uVar14 * 0x10 + (uint)(byte)in_x12;
      in_x11 = (ulong)uVar14;
      if (!bVar4) goto LAB_007eb874;
      uVar13 = uVar14 * 0x10 + (uVar13 & 0xff);
      in_x11 = (ulong)uVar13;
      in_x12 = (ulong)(uVar13 >> 0x10);
      if (uVar13 >> 0x10 == 0) {
        if (uVar6 == uVar8) {
          bVar4 = false;
LAB_007eb7ec:
          bVar11 = (byte)uVar12;
          param_1[2] = uVar6;
          in_x12 = uVar6;
        }
        else {
          if (uVar8 <= uVar6) {
LAB_007eb9ec:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar6,uVar8,&PTR_s__root__cargo_registry_src_index__00ae0700);
          }
          bVar11 = *(byte *)(lVar10 + uVar6);
          in_x12 = uVar6 + 1;
          param_1[2] = in_x12;
          uVar14 = bVar11 - 0x30;
          if (9 < uVar14) {
            uVar14 = (uint)bVar11;
            if (5 < bVar11 - 0x61) {
              bVar5 = 5 < (uVar14 - 0x41 & 0xff);
              uVar12 = (ulong)(uVar14 - 0x37);
              bVar11 = (byte)(uVar14 - 0x37);
              bVar4 = !bVar5;
              if (bVar5) goto LAB_007eb7ec;
              goto LAB_007eb844;
            }
            uVar14 = uVar14 - 0x57;
          }
          bVar11 = (byte)uVar14;
          bVar4 = true;
        }
LAB_007eb844:
        uVar6 = in_x12;
        if (!bVar4) goto LAB_007eb874;
        uVar13 = uVar13 * 0x10 + (uint)bVar11;
        in_x11 = (ulong)uVar13;
        if ((uVar13 & 0xffff0000) == 0) {
          if (in_x12 == uVar8) {
            bVar4 = false;
LAB_007eb864:
            param_1[2] = in_x12;
            uVar6 = in_x12;
          }
          else {
            if (uVar8 <= in_x12) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (in_x12,uVar8,&PTR_s__root__cargo_registry_src_index__00ae0700);
            }
            bVar11 = *(byte *)(lVar10 + in_x12);
            uVar6 = in_x12 + 1;
            param_1[2] = uVar6;
            if ((bVar11 - 0x30 < 10) || (bVar11 - 0x61 < 6)) {
              bVar4 = true;
            }
            else {
              bVar5 = 5 < (byte)(bVar11 + 0xbf);
              bVar4 = !bVar5;
              if (bVar5) goto LAB_007eb864;
            }
          }
          if (!bVar4) goto LAB_007eb874;
        }
      }
      bVar3 = false;
LAB_007eb87c:
      param_1[2] = uVar7;
      uVar6 = uVar7;
    }
    else {
LAB_007eb874:
      if (!bVar3) goto LAB_007eb87c;
    }
    if (!bVar3) goto LAB_007eb930;
    if (uVar15 == 8) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(8,8,&PTR_s__root__cargo_registry_src_index__00ae0818);
    }
    uVar15 = uVar15 + 1;
    *puVar17 = (ushort)in_x11;
    uVar16 = uVar6;
    puVar17 = puVar17 + 1;
  } while (param_3 != uVar15);
  uVar9 = 0;
  uVar15 = param_3;
LAB_007eb9a8:
  auVar18._8_8_ = uVar9;
  auVar18._0_8_ = uVar15;
  return auVar18;
}


// ===== 007eba40  <ipnet::parser::AddrParseError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <ipnet::parser::AddrParseError as core::fmt::Display>::fmt */

void __rustcall
<ipnet::parser::AddrParseError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e637d,0x19);
  return;
}


// ===== 007eba54  FUN_007eba54 =====

void FUN_007eba54(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e6396,0xe);
  return;
}


// ===== 007eba68  FUN_007eba68 =====

void FUN_007eba68(long *param_1)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007eba88  FUN_007eba88 =====

void FUN_007eba88(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  if (lVar1 != -3) {
    if ((lVar1 == -2) || (lVar1 == -1)) {
      if (param_1[1] != 0) {
        free((void *)param_1[2]);
        return;
      }
    }
    else {
      if (lVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] != 0) {
        free((void *)param_1[4]);
      }
      if (0 < param_1[10]) {
        free((void *)param_1[0xb]);
      }
      __ptr = (void *)param_1[8];
      lVar1 = param_1[9];
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)((long)__ptr + 8);
        do {
          if (0 < (long)puVar2[-1]) {
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
  }
  return;
}


// ===== 007ebb84  FUN_007ebb84 =====

void FUN_007ebb84(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  FUN_007eba88();
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
                    /* try { // try from 007ebbb8 to 007ebbbb has its CatchHandler @ 007ebbf4 */
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


// ===== 007ebc28  FUN_007ebc28 =====

void FUN_007ebc28(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007ebc58 to 007ebc5b has its CatchHandler @ 007ebca4 */
    FUN_007ebff4(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x98);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007ebcec  FUN_007ebcec =====

void FUN_007ebcec(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ebd04  FUN_007ebd04 =====

void FUN_007ebd04(undefined8 *param_1)

{
  void *__ptr;
  char cVar1;
  long extraout_x1;
  
  cVar1 = *(char *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae33c0);
  }
  __ptr = (void *)param_1[2];
  alloc::sync::arcinner_layout_for_value_layout(*param_1,param_1[1]);
  if (extraout_x1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007ebd60  FUN_007ebd60 =====

void FUN_007ebd60(undefined8 *param_1)

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


// ===== 007ebd84  FUN_007ebd84 =====

void FUN_007ebd84(void *param_1,long param_2)

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


// ===== 007ebdd4  FUN_007ebdd4 =====

void FUN_007ebdd4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 007ebe00 to 007ebe03 has its CatchHandler @ 007ebe14 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow();
  }
  FUN_007ebc28(param_1 + 0x10);
  return;
}


// ===== 007ebe2c  FUN_007ebe2c =====

void FUN_007ebe2c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007ebe3c to 007ebe3f has its CatchHandler @ 007ebe7c */
  FUN_007ec180();
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x158);
      return;
    }
  }
  return;
}


// ===== 007ebeb4  FUN_007ebeb4 =====

void FUN_007ebeb4(long *param_1)

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
  FUN_007ed014(local_48,&local_90);
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
    FUN_007ed014(local_48,&local_90);
    lVar3 = local_48[0];
    lVar1 = local_38;
  }
  return;
}


// ===== 007ebf7c  FUN_007ebf7c =====

void FUN_007ebf7c(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ebf94  FUN_007ebf94 =====

void FUN_007ebf94(long *param_1)

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


// ===== 007ebff4  FUN_007ebff4 =====

void FUN_007ebff4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong local_a0 [3];
  long local_88;
  ulong local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long local_58 [2];
  long local_48;
  
  lVar4 = *param_1;
  if (lVar4 != -1) {
    lVar3 = param_1[0xf];
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      local_88 = param_1[0x10];
      local_60 = param_1[0x11];
      local_a0[1] = 0;
      local_78 = 0;
      local_a0[2] = lVar3;
      lStack_70 = lVar3;
      local_68 = local_88;
    }
    local_a0[0] = (ulong)(lVar3 != 0);
    local_80 = local_a0[0];
    while( true ) {
                    /* try { // try from 007ec058 to 007ec063 has its CatchHandler @ 007ec13c */
      FUN_007ed014(local_58,local_a0);
      lVar1 = local_48;
      lVar3 = local_58[0];
      if (local_58[0] == 0) break;
      lVar2 = local_58[0] + local_48 * 0x18;
      if (*(long *)(lVar2 + 8) != 0) {
        free(*(void **)(lVar2 + 0x10));
      }
      lVar3 = lVar3 + lVar1 * 0x38;
      if (*(long *)(lVar3 + 0x120) != 0) {
        free(*(void **)(lVar3 + 0x128));
      }
    }
    if (lVar4 != 0) {
      free((void *)param_1[1]);
    }
    if ((param_1[0xc] != -1) && (param_1[0xc] != 0)) {
      free((void *)param_1[0xd]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    if (param_1[6] != 0) {
      free((void *)param_1[7]);
    }
    if (param_1[9] != 0) {
      free((void *)param_1[10]);
      return;
    }
  }
  return;
}


// ===== 007ec180  FUN_007ec180 =====

void FUN_007ec180(long param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  __ptr = *(void **)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar5[-1] != 0) {
        free((void *)*puVar5);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(__ptr);
  }
  plVar3 = *(long **)(param_1 + 0xd8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007ec204 to 007ec207 has its CatchHandler @ 007ec360 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0xf0);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007ec228 to 007ec22b has its CatchHandler @ 007ec358 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x100);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007ec248 to 007ec24f has its CatchHandler @ 007ec350 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x100);
  }
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
                    /* try { // try from 007ec26c to 007ec273 has its CatchHandler @ 007ec348 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x110);
  }
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
                    /* try { // try from 007ec290 to 007ec297 has its CatchHandler @ 007ec340 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow(param_1 + 0x120)
    ;
  }
  plVar3 = *(long **)(param_1 + 0x128);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007ec2b4 to 007ec2bb has its CatchHandler @ 007ec338 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x128);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    free(*(void **)(param_1 + 0x30));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
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
                    /* try { // try from 007ec308 to 007ec30f has its CatchHandler @ 007ec324 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow
              (param_1 + 0x138);
  }
  FUN_007eba88(param_1 + 0x58);
  return;
}


// ===== 007ec484  FUN_007ec484 =====

void FUN_007ec484(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 007ec4b0 to 007ec4b3 has its CatchHandler @ 007ec4c4 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow();
  }
  FUN_007ebc28(param_1);
  return;
}


// ===== 007ec4dc  FUN_007ec4dc =====

void FUN_007ec4dc(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x20);
    do {
      if (0 < (long)puVar2[-4]) {
        free((void *)puVar2[-3]);
      }
      if (0 < (long)puVar2[-1]) {
        free((void *)*puVar2);
      }
      if (0 < (long)puVar2[2]) {
        free((void *)puVar2[3]);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007ec590  FUN_007ec590 =====

void FUN_007ec590(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007ec5a0 to 007ec5a3 has its CatchHandler @ 007ec5e0 */
  FUN_007ec180();
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x158);
      return;
    }
  }
  return;
}


// ===== 007ec618  FUN_007ec618 =====

void FUN_007ec618(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 0x96) {
    uVar1 = 0x95;
  }
  FUN_007ece20(&local_38,*param_1,param_1[1],uVar1);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 007ec678  <hyper_rustls::connector::builder::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsTlsConfig>>::with_tls_config =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_rustls::connector::builder::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsTlsConfig>>::with_tls_config
    */

void __rustcall
<hyper_rustls::connector::builder::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsTlsConfig>>
::with_tls_config(void *param_1,void *param_2)

{
  if (*(long *)((long)param_2 + 0x20) == 0) {
    memcpy(param_1,param_2,0x158);
    return;
  }
                    /* try { // try from 007ec6a8 to 007ec6bf has its CatchHandler @ 007ec6c4 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_002e63a4,0x51,&PTR_s__root__cargo_registry_src_index__00ae09a0);
}


// ===== 007ec6dc  <hyper_rustls::connector::builder::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsTlsConfig>>::with_webpki_roots =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_rustls::connector::builder::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsTlsConfig>>::with_webpki_roots
    */

void __rustcall
<hyper_rustls::connector::builder::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsTlsConfig>>
::with_webpki_roots(void *param_1)

{
  undefined1 auStack_230 [32];
  long local_210;
  undefined1 auStack_d8 [184];
  
  <rustls::client::client_conn::rustls::client::client_conn::ClientConfig>::builder(auStack_230);
  <rustls[8b72161fbd86565e]::builder::ConfigBuilder<rustls[8b72161fbd86565e]::client::client_conn::ClientConfig,rustls[8b72161fbd86565e]::builder::WantsVerifier>as_hyper_rustls[8b73b3c5adfefd00]::config::ConfigBuilderExt>
  ::with_webpki_roots(auStack_d8,auStack_230);
  <rustls::client::builder::[0]::rustls::builder::ConfigBuilder<rustls::client::client_conn::ClientConfig,rustls::client::builder::WantsClientCert>>
  ::with_no_client_auth(auStack_230,auStack_d8);
  if (local_210 == 0) {
    memcpy(param_1,auStack_230,0x158);
    return;
  }
                    /* try { // try from 007ec738 to 007ec74f has its CatchHandler @ 007ec754 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_002e63a4,0x51,&PTR_s__root__cargo_registry_src_index__00ae09a0);
}


// ===== 007ec76c  <hyper_rustls::connector::builder::[2]::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsProtocols1>>::with_server_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_rustls::connector::builder::[2]::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsProtocols1>>::with_server_name
    */

void __rustcall
<hyper_rustls::connector::builder::[2]::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsProtocols1>>
::with_server_name(void *param_1,void *param_2,size_t *param_3)

{
  char cVar1;
  bool bVar2;
  char *__dest;
  long *plVar3;
  size_t sVar4;
  long lVar5;
  char *__ptr;
  size_t __n;
  undefined8 uVar6;
  undefined1 auStack_1c0 [344];
  long *local_68;
  undefined **ppuStack_60;
  
  __ptr = (char *)param_3[1];
  __n = param_3[2];
  if ((((__n == 0) || (*__ptr != '[')) || (__n == 1)) || (__ptr[__n - 1] != ']')) {
    sVar4 = *param_3;
  }
  else {
    __n = __n - 2;
    if ((long)__n < 0) {
      uVar6 = 0;
LAB_007ec8f8:
                    /* try { // try from 007ec8f8 to 007ec903 has its CatchHandler @ 007ec908 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar6,__n);
    }
    if (__n == 0) {
      __dest = &DAT_00000001;
      sVar4 = *param_3;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 1;
      __dest = (char *)FUN_004b25a4(__n,1);
      if (__dest == (char *)0x0) goto LAB_007ec8f8;
      memcpy(__dest,__ptr + 1,__n);
      sVar4 = *param_3;
    }
    if (sVar4 != 0) {
      free(__ptr);
    }
    *param_3 = __n;
    param_3[1] = (size_t)__dest;
    param_3[2] = __n;
    __ptr = __dest;
    sVar4 = __n;
  }
  memcpy(auStack_1c0,param_2,0x170);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar3 = (long *)FUN_004b25a4(0x28,8);
  if (plVar3 != (long *)0x0) {
    plVar3[2] = sVar4;
    plVar3[3] = (long)__ptr;
    plVar3[4] = __n;
    plVar3[1] = 1;
    *plVar3 = 1;
    if (local_68 != (long *)0x0) {
      do {
        lVar5 = *local_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_68,0x10);
        if (bVar2) {
          *local_68 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007ec890 to 007ec897 has its CatchHandler @ 007ec930 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
        ::drop_slow(&local_68);
      }
    }
    ppuStack_60 = &PTR_FUN_00ae0868;
    local_68 = plVar3;
    memcpy(param_1,auStack_1c0,0x170);
    return;
  }
                    /* try { // try from 007ec8e0 to 007ec8eb has its CatchHandler @ 007ec944 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 007ec970  <hyper_rustls::connector::builder::[3]::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsProtocols2>>::build =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_rustls::connector::builder::[3]::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsProtocols2>>::build
    */

void __rustcall
<hyper_rustls::connector::builder::[3]::hyper_rustls::connector::builder::ConnectorBuilder<hyper_rustls::connector::builder::WantsProtocols2>>
::build(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long *__ptr;
  long *plVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_4e8 [368];
  long *local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  long *local_360;
  undefined1 local_358;
  undefined8 *local_218;
  undefined *local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long *local_1f0;
  long lStack_1e8;
  void *local_1e0;
  long lStack_1d8;
  long alStack_1d0 [46];
  
  memcpy(auStack_4e8,param_2,0x170);
                    /* try { // try from 007ec9a8 to 007ec9ab has its CatchHandler @ 007ecd48 */
  __ptr = (long *)<hyper_util::client::legacy::connect::http::hyper_util::client::legacy::connect::http::HttpConnector>
                  ::new();
  do {
    local_378 = __ptr;
    if (*__ptr != 1) {
      ClearExclusiveLocal();
                    /* try { // try from 007ecb90 to 007ecb9b has its CatchHandler @ 007ecd40 */
      auVar23 = alloc::sync::arcinner_layout_for_value_layout(8,0xb0);
      lVar12 = auVar23._8_8_;
      plVar11 = auVar23._0_8_;
      plVar9 = plVar11;
      if (lVar12 != 0) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar9 = (long *)FUN_004b25a4(lVar12,plVar11);
      }
      if (plVar9 == (long *)0x0) {
                    /* try { // try from 007ecd1c to 007ecd27 has its CatchHandler @ 007ecd40 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(plVar11,lVar12);
      }
      local_358 = 1;
      plVar9[1] = 1;
      *plVar9 = 1;
      uStack_368 = _UNK_0029f1d8;
      local_370 = _DAT_0029f1d0;
      bVar8 = *(char *)((long)__ptr + 0xa6) == '\x01';
      if (bVar8) {
        uStack_1f8 = *(undefined8 *)((long)__ptr + 0xaf);
        local_200 = *(undefined8 *)((long)__ptr + 0xa7);
      }
      lVar19 = __ptr[0xf];
      lVar21 = __ptr[0x11];
      lVar22 = __ptr[0x14];
      lVar14 = __ptr[0xe];
      lVar15 = __ptr[0x10];
      uVar3 = *(undefined1 *)((long)__ptr + 0xa1);
      uVar2 = *(undefined4 *)((long)__ptr + 0xa2);
      uVar4 = *(undefined1 *)((long)__ptr + 0xb7);
      lVar12 = __ptr[2];
      lVar17 = __ptr[3];
      lVar16 = __ptr[4];
      lVar18 = __ptr[5];
      lVar6 = __ptr[0x17];
      pvVar10 = (void *)__ptr[6];
      local_360 = plVar9;
      if ((void *)__ptr[6] != (void *)0xffffffffffffffff) {
                    /* try { // try from 007ecc60 to 007ecc67 has its CatchHandler @ 007ecd2c */
        <alloc::string::String_as_core::clone::Clone>::clone(&local_1e0);
        lStack_1e8 = alStack_1d0[0];
        local_1f0 = (long *)lStack_1d8;
        pvVar10 = local_1e0;
      }
      lVar7 = __ptr[0x13];
      lVar13 = __ptr[0x12];
      plVar9[2] = lVar12;
      plVar9[3] = lVar17;
      plVar9[4] = lVar16;
      plVar9[5] = lVar18;
      plVar9[6] = (long)pvVar10;
      plVar9[8] = lStack_1e8;
      plVar9[7] = (long)local_1f0;
      lVar12 = __ptr[0xd];
      lVar17 = __ptr[10];
      lVar16 = __ptr[9];
      lVar20 = __ptr[0xc];
      lVar18 = __ptr[0xb];
      *(int *)(plVar9 + 0x13) = (int)lVar7;
      plVar9[0xd] = lVar12;
      plVar9[0xe] = lVar14;
      plVar9[10] = lVar17;
      plVar9[9] = lVar16;
      *(int *)(plVar9 + 0xf) = (int)lVar19;
      plVar9[0xc] = lVar20;
      plVar9[0xb] = lVar18;
      *(int *)(plVar9 + 0x11) = (int)lVar21;
      plVar9[0x10] = lVar15;
      plVar9[0x12] = lVar13;
      *(undefined1 *)((long)plVar9 + 0xa1) = uVar3;
      *(char *)(plVar9 + 0x14) = (char)lVar22;
      *(undefined4 *)((long)plVar9 + 0xa2) = uVar2;
      *(undefined8 *)((long)plVar9 + 0xaf) = uStack_1f8;
      *(undefined8 *)((long)plVar9 + 0xa7) = local_200;
      *(bool *)((long)plVar9 + 0xa6) = bVar8;
      *(undefined1 *)((long)plVar9 + 0xb7) = uVar4;
      *(char *)(plVar9 + 0x17) = (char)lVar6;
      do {
        lVar12 = *__ptr;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(__ptr,0x10);
        if (bVar8) {
          *__ptr = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar11 = plVar9;
      if (lVar12 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
        drop_slow(&local_378);
      }
      goto LAB_007eca88;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(__ptr,0x10);
    if (bVar8) {
      *__ptr = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (__ptr[1] == 1) {
    *__ptr = 1;
    plVar9 = __ptr;
    plVar11 = __ptr;
  }
  else {
                    /* try { // try from 007ec9e4 to 007ec9ef has its CatchHandler @ 007ecd50 */
    auVar23 = alloc::sync::arcinner_layout_for_value_layout(8,0xb0);
    lVar12 = auVar23._8_8_;
    plVar11 = auVar23._0_8_;
    plVar9 = plVar11;
    if (lVar12 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar9 = (long *)FUN_004b25a4(lVar12,plVar11);
    }
    if (plVar9 == (long *)0x0) {
                    /* try { // try from 007ecb5c to 007ecb67 has its CatchHandler @ 007ecd50 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(plVar11,lVar12);
    }
    plVar9[1] = 1;
    *plVar9 = 1;
    lVar18 = __ptr[5];
    lVar17 = __ptr[4];
    lVar16 = __ptr[7];
    lVar12 = __ptr[6];
    lVar19 = __ptr[2];
    plVar9[3] = __ptr[3];
    plVar9[2] = lVar19;
    plVar9[5] = lVar18;
    plVar9[4] = lVar17;
    plVar9[7] = lVar16;
    plVar9[6] = lVar12;
    lVar17 = __ptr[0xc];
    lVar16 = __ptr[0xf];
    lVar12 = __ptr[0xe];
    lVar19 = __ptr[9];
    lVar18 = __ptr[8];
    lVar22 = __ptr[0xb];
    lVar21 = __ptr[10];
    plVar9[0xd] = __ptr[0xd];
    plVar9[0xc] = lVar17;
    plVar9[0xf] = lVar16;
    plVar9[0xe] = lVar12;
    plVar9[9] = lVar19;
    plVar9[8] = lVar18;
    plVar9[0xb] = lVar22;
    plVar9[10] = lVar21;
    lVar17 = __ptr[0x14];
    lVar16 = __ptr[0x17];
    lVar12 = __ptr[0x16];
    lVar19 = __ptr[0x11];
    lVar18 = __ptr[0x10];
    lVar22 = __ptr[0x13];
    lVar21 = __ptr[0x12];
    plVar9[0x15] = __ptr[0x15];
    plVar9[0x14] = lVar17;
    plVar9[0x17] = lVar16;
    plVar9[0x16] = lVar12;
    plVar9[0x11] = lVar19;
    plVar9[0x10] = lVar18;
    plVar9[0x13] = lVar22;
    plVar9[0x12] = lVar21;
    plVar11 = plVar9;
    if (__ptr != (long *)0xffffffffffffffff) {
      plVar1 = __ptr + 1;
      do {
        lVar12 = *plVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 + -1 == 0) {
        DataMemoryBarrier(2,1);
        local_378 = plVar9;
        free(__ptr);
        plVar11 = local_378;
      }
    }
  }
LAB_007eca88:
  local_378 = plVar11;
  *(undefined1 *)(plVar9 + 0x14) = 0;
  memcpy(&local_370,auStack_4e8,0x170);
  lStack_1d8 = 1;
  local_1e0 = (void *)0x1;
  local_1f0 = plVar9;
  memcpy(alStack_1d0,auStack_4e8,0x158);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pvVar10 = (void *)FUN_004b25a4(0x168,8);
  if (pvVar10 == (void *)0x0) {
                    /* try { // try from 007ecb6c to 007ecb77 has its CatchHandler @ 007ecdb4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x168);
  }
  memcpy(pvVar10,&local_1e0,0x168);
  if (local_218 == (undefined8 *)0x0) {
    local_1e0 = pvVar10;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_218 = (undefined8 *)FUN_004b25a4(0x10,8);
    if (local_218 == (undefined8 *)0x0) {
                    /* try { // try from 007ecb7c to 007ecb87 has its CatchHandler @ 007ecd8c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x10);
    }
    local_210 = &DAT_00ae0848;
    local_218[1] = 1;
    *local_218 = 1;
  }
  *(undefined1 *)(param_1 + 4) = local_208;
  *param_1 = plVar9;
  param_1[1] = pvVar10;
  param_1[2] = local_218;
  param_1[3] = local_210;
  return;
}


// ===== 007ece20  FUN_007ece20 =====

void FUN_007ece20(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  if (0x1c71c71c71c71c7 < param_4) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  lVar2 = param_4 * 0x48;
  if (param_2 == 0) {
    if (lVar2 == 0) {
      lVar1 = 8;
      goto LAB_007eced0;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar1 = FUN_004b25a4(lVar2,8);
  }
  else {
    lVar1 = FUN_004b2600(param_3,param_2 * 0x48,8,lVar2);
  }
  if (lVar1 == 0) {
    param_1[1] = 8;
    param_1[2] = lVar2;
    *param_1 = 1;
    return;
  }
LAB_007eced0:
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  *param_1 = 0;
  return;
}


// ===== 007eceec  <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<dyn
   hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName +
   core[bcece726f298455b]::marker::Sync + core[bcece726f298455b]::marker::Send>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
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
                    /* try { // try from 007ecf18 to 007ecf1f has its CatchHandler @ 007ecf8c */
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


// ===== 007ecfa4  <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (0 < *(long *)((long)__ptr + 0x30)) {
    free(*(void **)((long)__ptr + 0x38));
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


// ===== 007ed014  FUN_007ed014 =====

void FUN_007ed014(long *param_1,long *param_2)

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
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae0958);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_2[2];
    for (lVar3 = param_2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
      puVar2 = (undefined8 *)puVar2[0x70];
    }
    uVar6 = 0;
    lVar3 = 0;
    *param_2 = 1;
    puVar7 = puVar2;
    if (*(short *)((long)puVar2 + 0x37a) != 0) goto joined_r0x007ed06c;
  }
  else {
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    puVar7 = puVar2;
    if (uVar6 < *(ushort *)((long)puVar2 + 0x37a)) goto joined_r0x007ed06c;
  }
  do {
    puVar7 = (undefined8 *)*puVar2;
    if (puVar7 == (undefined8 *)0x0) {
      free(puVar2);
                    /* try { // try from 007ed204 to 007ed20f has its CatchHandler @ 007ed220 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae0970);
    }
    uVar1 = *(ushort *)(puVar2 + 0x6f);
    uVar6 = (ulong)uVar1;
    lVar3 = lVar3 + 1;
    free(puVar2);
    puVar2 = puVar7;
  } while (*(ushort *)((long)puVar7 + 0x37a) <= uVar1);
joined_r0x007ed06c:
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
  param_2[1] = (long)puVar2;
  param_2[2] = 0;
  param_2[3] = lVar5;
  *param_1 = (long)puVar7;
  param_1[1] = lVar3;
  param_1[2] = uVar6;
  return;
}


// ===== 007ed224  <rustls[8b72161fbd86565e]::builder::ConfigBuilder<rustls[8b72161fbd86565e]::client::client_conn::ClientConfig,rustls[8b72161fbd86565e]::builder::WantsVerifier>as_hyper_rustls[8b73b3c5adfefd00]::config::ConfigBuilderExt>::with_webpki_roots =====

/* <rustls[8b72161fbd86565e]::builder::ConfigBuilder<rustls[8b72161fbd86565e]::client::client_conn::ClientConfig,
   rustls[8b72161fbd86565e]::builder::WantsVerifier> as
   hyper_rustls[8b73b3c5adfefd00]::config::ConfigBuilderExt>::with_webpki_roots */

void <rustls[8b72161fbd86565e]::builder::ConfigBuilder<rustls[8b72161fbd86565e]::client::client_conn::ClientConfig,rustls[8b72161fbd86565e]::builder::WantsVerifier>as_hyper_rustls[8b73b3c5adfefd00]::config::ConfigBuilderExt>
     ::with_webpki_roots(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t __n;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t unaff_x21;
  undefined1 *unaff_x22;
  void *__src;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_1c8;
  long lStack_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
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
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  undefined1 uStack_7e;
  undefined5 uStack_7d;
  
  local_1c8 = 0;
  lStack_1c0 = 8;
  local_1b8 = 0;
                    /* try { // try from 007ed254 to 007ed25b has its CatchHandler @ 007ed4e0 */
  FUN_007ec618(&local_1c8);
  lVar2 = local_1b8;
  lVar7 = 0;
  lVar6 = -0x29e8;
  lVar8 = lStack_1c0 + local_1b8 * 0x48;
  do {
    __n = *(size_t *)(&UNK_00ae33d0 + lVar6);
    uVar10 = *(undefined8 *)(&UNK_00ae33a8 + lVar6);
    uVar9 = *(undefined8 *)(&UNK_00ae33b0 + lVar6);
    uVar5 = *(undefined8 *)((long)&PTR_s__nix_store_8006w282fgsx3273c878b_00ae33c0 + lVar6);
    uVar4 = *(undefined8 *)(&UNK_00ae33c8 + lVar6);
    if (__n != 0xfffffffffffffffe) {
      if (__n == 0xffffffffffffffff) {
        unaff_x22 = *(undefined1 **)((long)&PTR_FUN_00ae33d8 + lVar6);
        __n = 0xffffffffffffffff;
        unaff_x21 = *(size_t *)(&UNK_00ae33e0 + lVar6);
      }
      else if (lVar7 == -0x2c) {
        __src = *(void **)((long)&PTR_FUN_00ae33d8 + lVar6);
        __n = *(size_t *)(&UNK_00ae33e0 + lVar6);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        unaff_x22 = (undefined1 *)FUN_004b25a4(__n,1);
        if (unaff_x22 == (undefined1 *)0x0) {
                    /* try { // try from 007ed4d0 to 007ed4db has its CatchHandler @ 007ed4e8 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(lVar2,1,__n);
        }
        memcpy(unaff_x22,__src,__n);
        unaff_x21 = __n;
      }
      else {
        unaff_x21 = 0;
        __n = 0;
        unaff_x22 = &DAT_00000001;
      }
    }
    lVar1 = lVar8 + lVar6;
    lVar7 = lVar7 + -1;
    *(size_t *)(lVar1 + 0x2a18) = __n;
    lVar6 = lVar6 + 0x48;
    *(undefined8 *)(lVar1 + 0x29e8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x29f0) = uVar10;
    *(undefined8 *)(lVar1 + 0x29f8) = uVar9;
    *(undefined8 *)(lVar1 + 0x2a00) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x2a08) = uVar5;
    *(undefined8 *)(lVar1 + 0x2a10) = uVar4;
    *(undefined1 **)(lVar1 + 0x2a20) = unaff_x22;
    *(size_t *)(lVar1 + 0x2a28) = unaff_x21;
  } while (lVar6 != 0);
  local_d8 = 0;
  uStack_f0 = param_2[0x14];
  local_f8 = param_2[0x13];
  lVar6 = param_2[0x12];
  local_1b8 = lVar2 - lVar7;
  uStack_148 = param_2[9];
  uStack_150 = param_2[8];
  uStack_138 = param_2[0xb];
  local_140 = param_2[10];
  uStack_1a8 = *(undefined8 *)(lVar6 + 0x48);
  local_1b0 = *(undefined8 *)(lVar6 + 0x40);
  uStack_198 = *(undefined8 *)(lVar6 + 0x58);
  uStack_1a0 = *(undefined8 *)(lVar6 + 0x50);
  local_e8 = 0;
  uStack_e0 = 8;
  uStack_128 = param_2[0xd];
  uStack_130 = param_2[0xc];
  uStack_118 = param_2[0xf];
  local_120 = param_2[0xe];
  uStack_108 = param_2[0x11];
  local_110 = param_2[0x10];
  uStack_168 = param_2[5];
  uStack_170 = param_2[4];
  uStack_158 = param_2[7];
  local_160 = param_2[6];
  uStack_188 = param_2[1];
  local_190 = *param_2;
  uStack_178 = param_2[3];
  local_180 = param_2[2];
  uStack_c8 = 1;
  local_d0 = 1;
  lStack_b8 = lStack_1c0;
  uStack_c0 = local_1c8;
  local_100 = lVar6;
  local_b0 = local_1b8;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puStack_a8 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puStack_a8 != (undefined8 *)0x0) {
    local_80 = 1;
    puStack_a8[4] = local_b0;
    puStack_a8[1] = uStack_c8;
    *puStack_a8 = local_d0;
    puStack_a8[3] = lStack_b8;
    puStack_a8[2] = uStack_c0;
    local_b0 = local_d8;
    uStack_7e = 1;
    uStack_98 = uStack_1a8;
    local_a0 = local_1b0;
    uStack_88 = uStack_198;
    local_90 = uStack_1a0;
    uStack_c8 = 1;
    local_d0 = 1;
    lStack_b8 = uStack_e0;
    uStack_c0 = local_e8;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar3 = (undefined8 *)FUN_004b25a4(0x58,8);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[9] = uStack_88;
      puVar3[8] = local_90;
      puVar3[5] = puStack_a8;
      puVar3[4] = local_b0;
      puVar3[7] = uStack_98;
      puVar3[6] = local_a0;
      puVar3[10] = CONCAT53(uStack_7d,CONCAT12(uStack_7e,local_80));
      param_1[0x10] = puVar3;
      param_1[0x11] = &PTR_FUN_00ae0908;
      puVar3[1] = uStack_c8;
      *puVar3 = local_d0;
      puVar3[3] = lStack_b8;
      puVar3[2] = uStack_c0;
      uVar10 = param_2[9];
      uVar9 = param_2[8];
      uVar5 = param_2[0xb];
      uVar4 = param_2[10];
      param_1[0x14] = lVar6;
      param_1[9] = uVar10;
      param_1[8] = uVar9;
      param_1[0xb] = uVar5;
      param_1[10] = uVar4;
      uVar9 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar4 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar9;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar4;
      uVar9 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar9;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      uVar9 = param_2[4];
      uVar5 = param_2[7];
      uVar4 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar9;
      param_1[7] = uVar5;
      param_1[6] = uVar4;
      param_1[0x13] = uStack_108;
      param_1[0x12] = local_110;
      param_1[0x16] = uStack_f0;
      param_1[0x15] = local_f8;
      return;
    }
                    /* try { // try from 007ed4b8 to 007ed4c3 has its CatchHandler @ 007ed508 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x58);
  }
                    /* try { // try from 007ed4a4 to 007ed4b3 has its CatchHandler @ 007ed51c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 007ed548  FUN_007ed548 =====

void FUN_007ed548(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a19f8,8,&local_18,&DAT_00ae33a0);
  return;
}


// ===== 007ed588  FUN_007ed588 =====

void FUN_007ed588(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1 + 1;
  if (*(long *)*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ae35d0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007ed5e4  FUN_007ed5e4 =====

void FUN_007ed5e4(long *param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00ae08a8);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 007ed654  FUN_007ed654 =====

void FUN_007ed654(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a19f8,8,&local_18,&DAT_00ae33a0);
  return;
}


// ===== 007ed698  FUN_007ed698 =====

void FUN_007ed698(undefined8 *param_1)

{
  <untrusted::input::Input_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007ed6a0  FUN_007ed6a0 =====

void FUN_007ed6a0(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
            (param_2,&DAT_002a0cb0,0x10,"serial_number",0xd,local_18 + 0x10,&PTR_FUN_00ae33d8,
             "revocation_date",0xf,local_18 + 0x28,&DAT_00ae36f0,"reason_code",0xb,local_18 + 0x30,
             &DAT_00ae3710,"invalidity_date",0xf,&local_18,&DAT_00ae3730);
  return;
}


// ===== 007ed74c  FUN_007ed74c =====

void FUN_007ed74c(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,(&PTR_s_Unspecified_00ae3750)[*(byte *)*param_1],
             *(undefined8 *)(&DAT_002f6918 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 007ed778  FUN_007ed778 =====

void FUN_007ed778(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"OwnedEndEntityChain",5,&local_18,&DAT_00ae3610);
    return;
  }
  local_18 = local_18 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a13c8,8,&local_18,&DAT_00ae3630);
  return;
}


// ===== 007ed7f4  FUN_007ed7f4 =====

void FUN_007ed7f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  lVar1 = *param_1;
  local_18 = lVar1 + 0x90;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
            (param_2,"OwnedCertRevocationList",0x17,"revoked_certs",0xd,lVar1 + 0x78,
             &PTR_FUN_00ae3650,"issuer",6,lVar1,&PTR_FUN_00ae33d8,"issuing_distribution_point",0x1a,
             lVar1 + 0x60,&PTR_FUN_00ae3670,"signed_data",0xb,lVar1 + 0x18,&PTR_FUN_00ae3690,
             "next_update",0xb,&local_18,&DAT_00ae35d0);
  return;
}


// ===== 007ed8c0  FUN_007ed8c0 =====

void FUN_007ed8c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  lVar1 = *param_1;
  local_18 = lVar1 + 0x60;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
            (param_2,"BorrowedCertRevocationList",0x1a,"signed_data",0xb,lVar1,&DAT_00ae36b0,
             "issuer",6,lVar1 + 0x30,&DAT_00ae3470,"issuing_distribution_point",0x1a,lVar1 + 0x50,
             &DAT_00ae36d0,"revoked_certs",0xd,lVar1 + 0x40,&DAT_00ae3470,"next_update",0xb,
             &local_18,&DAT_00ae35d0);
  return;
}


// ===== 007ed988  FUN_007ed988 =====

void FUN_007ed988(undefined8 *param_1)

{
  <rustls::webpki::verify::WebPkiSupportedAlgorithms_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007ed990  FUN_007ed990 =====

void FUN_007ed990(undefined8 *param_1,long param_2)

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


// ===== 007ed9ac  FUN_007ed9ac =====

void FUN_007ed9ac(undefined8 *param_1,long param_2)

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


// ===== 007ed9c8  FUN_007ed9c8 =====

void FUN_007ed9c8(long *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_68 [16];
  long *local_58;
  long *local_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_68,param_2);
  plVar3 = (long *)*param_1;
  if ((plVar3 != (long *)0x0) && (lVar6 = param_1[2], lVar6 != 0)) {
    uVar2 = param_1[1];
    plVar4 = (long *)0x0;
    do {
      if (plVar4 == (long *)0x0) {
        for (; plVar4 = plVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          plVar3 = (long *)plVar4[0x70];
        }
        plVar3 = (long *)0x0;
        uVar2 = 0;
        plVar7 = plVar4;
        if (*(short *)((long)plVar4 + 0x37a) == 0) goto LAB_007edaac;
      }
      else {
        plVar7 = plVar4;
        if (*(ushort *)((long)plVar4 + 0x37a) <= uVar2) {
LAB_007edaac:
          do {
            plVar4 = (long *)*plVar7;
            if (plVar4 == (long *)0x0) {
                    /* try { // try from 007edb14 to 007edb1f has its CatchHandler @ 007edb24 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae0988);
            }
            puVar1 = (ushort *)(plVar7 + 0x6f);
            uVar2 = (ulong)*puVar1;
            plVar3 = (long *)((long)plVar3 + 1);
            plVar7 = plVar4;
          } while (*(ushort *)((long)plVar4 + 0x37a) <= *puVar1);
        }
      }
      if (plVar3 == (long *)0x0) {
        uVar8 = uVar2 + 1;
        plVar7 = plVar4;
      }
      else {
        plVar5 = plVar4 + uVar2 + 0x71;
        do {
          plVar7 = (long *)*plVar5;
          plVar3 = (long *)((long)plVar3 + -1);
          plVar5 = plVar7 + 0x70;
        } while (plVar3 != (long *)0x0);
        uVar8 = 0;
      }
      lVar6 = lVar6 + -1;
      local_58 = plVar4 + uVar2 * 3 + 1;
      local_38 = plVar4 + uVar2 * 7 + 0x22;
      <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
                (auStack_68,&local_58,&DAT_00ae08c8,&local_38,&DAT_00ae08e8);
      plVar3 = (long *)0x0;
      uVar2 = uVar8;
      plVar4 = plVar7;
    } while (lVar6 != 0);
  }
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_68);
  return;
}


// ===== 007edb28  FUN_007edb28 =====

void FUN_007edb28(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x30;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,"OwnedSignedData",0xf,&DAT_002bd1f4,4,param_1,&PTR_FUN_00ae33d8,"algorithm",9,
             param_1 + 0x18,&PTR_FUN_00ae33d8,"signature",9,&local_18,&DAT_00ae08c8);
  return;
}


// ===== 007edbac  <hyper_rustls::connector::DefaultServerNameResolver_as_hyper_rustls::connector::ResolveServerName>::resolve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_rustls::connector::DefaultServerNameResolver as
   hyper_rustls::connector::ResolveServerName>::resolve */

void __rustcall
<hyper_rustls::connector::DefaultServerNameResolver_as_hyper_rustls::connector::ResolveServerName>::
resolve(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined1 *__dest;
  long lVar3;
  long lVar4;
  char *pcVar5;
  size_t __n;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  char local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  size_t local_58;
  undefined1 *puStack_50;
  size_t local_48;
  
  if (*(long *)(param_3 + 0x20) == 0) {
LAB_007edc08:
    __n = 0;
  }
  else {
    auVar7 = http::uri::authority::host(*(undefined8 *)(param_3 + 0x18));
    lVar3 = auVar7._8_8_;
    pcVar2 = auVar7._0_8_;
    if (lVar3 == 0) goto LAB_007edc08;
    if (*pcVar2 == '[') {
      if (lVar3 == 1) {
        pcVar5 = (char *)0x0;
        lVar4 = -1;
      }
      else {
        lVar4 = lVar3 + -2;
        pcVar5 = (char *)0x0;
        if (pcVar2[lVar3 + -1] == ']') {
          pcVar5 = pcVar2 + 1;
        }
      }
      auVar1._8_8_ = lVar4;
      auVar1._0_8_ = pcVar5;
      if (pcVar5 != (char *)0x0) {
        auVar7 = auVar1;
      }
    }
    __n = auVar7._8_8_;
    if ((long)__n < 0) {
      uVar6 = 0;
LAB_007edce0:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar6,__n);
    }
    if (__n != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 1;
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007edce0;
      memcpy(__dest,auVar7._0_8_,__n);
      goto LAB_007edc68;
    }
  }
  __dest = &DAT_00000001;
LAB_007edc68:
  local_58 = __n;
  puStack_50 = __dest;
  local_48 = __n;
  <rustls_pki_types::server_name::ServerName_as_core::convert::TryFrom<alloc::string::String>>::
  try_from(&local_78,&local_58);
  if (local_78 == '\x02') {
    param_1[1] = 1;
    param_1[2] = &DAT_00ae3418;
    *(undefined1 *)param_1 = 2;
    return;
  }
  param_1[1] = uStack_70;
  *param_1 = CONCAT71(uStack_77,local_78);
  param_1[3] = uStack_60;
  param_1[2] = local_68;
  return;
}


// ===== 007edcec  FUN_007edcec =====

void FUN_007edcec(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x20;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,"SignedData",10,&DAT_002bd1f4,4,param_1,&DAT_00ae3470,"algorithm",9,
             param_1 + 0x10,&DAT_00ae3470,"signature",9,&local_18,&DAT_00ae3490);
  return;
}


// ===== 007edd70  FUN_007edd70 =====

void FUN_007edd70(long param_1,undefined8 param_2)

{
  long local_78;
  undefined **ppuStack_70;
  long local_68;
  undefined **ppuStack_60;
  long local_58;
  undefined *puStack_50;
  long local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  long *local_28;
  undefined *puStack_20;
  long local_18;
  
  local_18 = param_1 + 0x20;
  local_78 = param_1 + 0x18;
  ppuStack_70 = &PTR_FUN_00ae34b0;
  ppuStack_60 = &PTR_FUN_00ae34d0;
  local_58 = param_1 + 0x40;
  local_28 = &local_18;
  puStack_50 = &DAT_00ae34f0;
  local_48 = param_1 + 0x41;
  puStack_40 = &DAT_00ae3510;
  local_38 = param_1 + 0x42;
  puStack_30 = &DAT_00ae3530;
  puStack_20 = &DAT_00ae3550;
  local_68 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish
            (param_2,"WebPkiServerVerifier",0x14,&PTR_s_rootsrevocation_check_depthunkno_00ae3570,6,
             &local_78,6);
  return;
}


// ===== 007ede18  <hyper_rustls::connector::FixedServerNameResolver_as_hyper_rustls::connector::ResolveServerName>::resolve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_rustls::connector::FixedServerNameResolver as
   hyper_rustls::connector::ResolveServerName>::resolve */

void __rustcall
<hyper_rustls::connector::FixedServerNameResolver_as_hyper_rustls::connector::ResolveServerName>::
resolve(undefined1 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 local_38;
  uint uStack_34;
  ulong uStack_30;
  ulong local_28;
  
  if (*param_2 == '\x01') {
    local_28 = (ulong)*(uint *)(param_2 + 1);
    uVar1 = *(undefined8 *)(param_2 + 8);
    uStack_30 = (ulong)*(ushort *)(param_2 + 0x10);
    local_38._0_3_ = (undefined3)*(uint *)(param_2 + 1);
    local_38._3_1_ = (undefined1)*(uint *)(param_2 + 4);
    uStack_34 = *(uint *)(param_2 + 4) >> 8;
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_2 + 8) == -1) {
      uStack_30 = *(ulong *)(param_2 + 0x10);
      local_28 = *(ulong *)(param_2 + 0x18);
      uVar1 = 0xffffffffffffffff;
    }
    else {
      <alloc::string::String_as_core::clone::Clone>::clone(&local_38,param_2 + 8);
      uVar1 = CONCAT44(uStack_34,local_38);
    }
    uVar2 = 0;
  }
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(ulong *)(param_1 + 0x10) = uStack_30;
  *(undefined4 *)(param_1 + 1) = local_38;
  *(uint *)(param_1 + 4) = CONCAT31((undefined3)uStack_34,local_38._3_1_);
  *(ulong *)(param_1 + 0x18) = local_28;
  return;
}


// ===== 007edeb8  FUN_007edeb8 =====

void FUN_007edeb8(undefined8 *param_1)

{
  char local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  <alloc::string::String_as_core::clone::Clone>::clone(auStack_38);
  <rustls_pki_types::server_name::ServerName_as_core::convert::TryFrom<alloc::string::String>>::
  try_from(&local_58,auStack_38);
  if (local_58 == '\x02') {
    param_1[1] = 1;
    param_1[2] = &DAT_00ae3418;
    *(undefined1 *)param_1 = 2;
    return;
  }
  param_1[1] = uStack_50;
  *param_1 = CONCAT71(uStack_57,local_58);
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  return;
}


// ===== 007edf30  FUN_007edf30 =====

void FUN_007edf30(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"InvalidDnsNameError",0x13);
  return;
}


// ===== 007edf44  FUN_007edf44 =====

void FUN_007edf44(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ae08c8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007edfa0  FUN_007edfa0 =====

void FUN_007edfa0(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ae3490);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007edff8  FUN_007edff8 =====

void FUN_007edff8(char *param_1,undefined8 param_2)

{
  char *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ae35f0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007ee054  FUN_007ee054 =====

void FUN_007ee054(long *param_1)

{
  <rustls::webpki::anchors::RootCertStore_as_core::fmt::Debug>::fmt(*param_1 + 0x10);
  return;
}


// ===== 007ee060  FUN_007ee060 =====

void FUN_007ee060(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = 5;
  if (*param_1 == '\0') {
    uVar1 = 9;
  }
  pcVar2 = "Chain";
  if (*param_1 == '\0') {
    pcVar2 = "EndEntityChain";
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar2,uVar1);
  return;
}


// ===== 007ee094  FUN_007ee094 =====

void FUN_007ee094(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = 4;
  if (*param_1 == '\0') {
    uVar1 = 5;
  }
  pcVar2 = 
  "DenyWARNpeerVarsenv xmm4xmm8tmm3vr24afrcinternally tagged enum ActionLOGOUTRESET_SOCKETCONNECTION_OPENUSER_NOTE_LOAD_STARTLIBDISCORE_SIMULATE_CRASHLIBDISCORE_SIMULATE_STORE_ERRORGUILD_CREATEGUILD_UPDATEGUILD_DELETEBACKGROUND_SYNCCACHE_LOADEDCACHE_LOADED_LAZYGUILD_ROLE_CREATEGUILD_ROLE_UPDATEGUILD_ROLE_DELETEGUILD_EMOJIS_UPDATECACHED_EMOJIS_LOADEDGUILD_STICKERS_UPDATECACHED_STICKERS_LOADEDGUILD_STICKERS_CREATE_SUCCESSGUILD_STICKER_FETCH_SUCCESSGUILD_STICKERS_FETCH_SUCCESSFailed to parse RequestOptions: invalid formatassertion failed: self.inner.semaphore.is_idle()storeNamestoreName must be a stringstate mutex poisoned\ndiscorefailed to spawn threadlibdiscorecalled `Result::unwrap()` on an `Err` valueconnectStoregetRegisteredActionTypesdispatchActionfindStoresThatCanHandleActionTypeflushReplicationStateslibdiscore::flux_apiIoJSErrorNoteStoreExceptionokvalueerrorRawGuildEmojiStoreGuildStickersStoreGuildStoreFromUtf8ErrorbytesGuildRoleStoreStoreTokenCacheVersionMismatchSerializeErrorUtf8Errorvalid_up_toerror_lenRequestJsonParseErrorTextParseErrorFileErrorstartendfile_sizeEmptyInvalidDigitPosOverflowNegOverflowZeroNotAPowerOfTwoSystemTimeErrordescription() is deprecated; use Displayinit_libdiscore called more than once.[libdiscore] invalidate_libdiscore_jsi: completed\n[libdiscore] invalidate_libdiscore_jsi: null runtime pointer, ignoring\nRegistering libdiscore JSILIBDISCORE_JSIrustMultiplyconsumeLogsmonotonicNowMsisBlockedDomainruntimeExecutorDemofluxApihttpRequestgetHttpRequestStatuscancelHttpRequestgetTrackedRequestCountstartFetchingBlockedDomainscrashregisterDevLogListenergenerateLaunchSignatureLIBDISCORE_JSI already defined on this runtime, skipping registration.register_libdiscore_jsi: null runtime pointer, ignoring\x05"
  ;
  if (*param_1 == '\0') {
    pcVar2 = "AllowEnforceIgnore";
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar2,uVar1);
  return;
}


// ===== 007ee0c4  FUN_007ee0c4 =====

void FUN_007ee0c4(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = 6;
  if (*param_1 == '\0') {
    uVar1 = 7;
  }
  pcVar2 = "Ignore";
  if (*param_1 == '\0') {
    pcVar2 = "EnforceIgnore";
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar2,uVar1);
  return;
}


// ===== 007ee0f4  FUN_007ee0f4 =====

void FUN_007ee0f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x98;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ae0888);
      lVar2 = lVar2 + -0x98;
      lVar1 = lVar1 + 0x98;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 007ee168  FUN_007ee168 =====

void FUN_007ee168(long param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00ae08a8);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 007ee1d4  FUN_007ee1d4 =====

undefined1  [16] FUN_007ee1d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 007ee1e4  FUN_007ee1e4 =====

undefined8 FUN_007ee1e4(void)

{
  return 0;
}


// ===== 007ee1ec  FUN_007ee1ec =====

void FUN_007ee1ec(void)

{
  return;
}


// ===== 007ee1f0  FUN_007ee1f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ee1f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fe00;
  param_1[1] = _UNK_0029fe08;
  *param_1 = uVar1;
  return;
}


// ===== 007ee204  FUN_007ee204 =====

undefined8 FUN_007ee204(void)

{
  return 0;
}


// ===== 007ee20c  FUN_007ee20c =====

undefined8 FUN_007ee20c(void)

{
  return 0;
}


// ===== 007ee214  FUN_007ee214 =====

void FUN_007ee214(long param_1,void *param_2,size_t param_3)

{
  long lVar1;
  undefined1 *__dest;
  long lVar2;
  size_t *psVar3;
  
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar1 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x40) * 0x40,
     *(long *)(lVar1 + -0x40) == -0x7ffffffffffffff7)) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *(long *)(lVar1 + -0x10);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,param_3);
      }
      memcpy(__dest,param_2,param_3);
      lVar2 = *(long *)(lVar1 + -0x10);
    }
    if (lVar2 == 0) {
                    /* try { // try from 007ee2bc to 007ee2cf has its CatchHandler @ 007ee2e0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00ae37a8);
    }
    psVar3 = *(size_t **)(lVar1 + -0x18);
    if (*psVar3 != 0) {
      free((void *)psVar3[1]);
    }
    *psVar3 = param_3;
    psVar3[1] = (size_t)__dest;
    psVar3[2] = param_3;
  }
  return;
}


// ===== 007ee300  FUN_007ee300 =====

void FUN_007ee300(long *param_1)

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


// ===== 007ee380  FUN_007ee380 =====

void FUN_007ee380(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007ee3b0 to 007ee3b3 has its CatchHandler @ 007ee3f8 */
    FUN_007feea4(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x40);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007ee43c  FUN_007ee43c =====

void FUN_007ee43c(long *param_1)

{
  long *__ptr;
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  __ptr = (long *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar4 = 0;
    plVar5 = __ptr;
    do {
      lVar2 = *plVar5;
      if (lVar2 == -2) {
        lVar2 = plVar5[1];
        if (lVar2 != -1) {
          plVar1 = __ptr + lVar4 * 4 + 1;
          goto joined_r0x007ee4ac;
        }
      }
      else {
        plVar1 = plVar5;
        if (lVar2 != -1) {
joined_r0x007ee4ac:
          if (lVar2 != 0) {
            free((void *)plVar1[1]);
          }
        }
      }
      lVar3 = lVar3 + -1;
      plVar5 = plVar5 + 4;
      lVar4 = lVar4 + 1;
    } while (lVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 007ee4fc  FUN_007ee4fc =====

void FUN_007ee4fc(long *param_1)

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


// ===== 007ee578  FUN_007ee578 =====

void FUN_007ee578(long *param_1)

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


// ===== 007ee5fc  FUN_007ee5fc =====

void FUN_007ee5fc(long *param_1)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ee61c  FUN_007ee61c =====

void FUN_007ee61c(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ee634  FUN_007ee634 =====

void FUN_007ee634(long *param_1)

{
  if ((((*param_1 != 0) && (*param_1 == 1)) || (param_1[1] != -1)) && (param_1[1] != 0)) {
    free((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 007ee660  FUN_007ee660 =====

void FUN_007ee660(long *param_1)

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


// ===== 007ee6b0  FUN_007ee6b0 =====

void FUN_007ee6b0(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_1;
  uVar3 = uVar1 ^ 0x8000000000000000;
  if (0x16 < uVar3) {
    uVar3 = 0x13;
  }
  switch(uVar3) {
  case 0:
  case 8:
  case 0xd:
  case 0xe:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
    break;
  case 1:
  case 2:
  case 6:
  case 0x12:
  case 0x14:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
    break;
  case 3:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        if ((((puVar5[-2] != 0) && (puVar5[-2] == 1)) || (puVar5[-1] != -1)) && (puVar5[-1] != 0)) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 5;
      } while (uVar3 != 0);
    }
    uVar3 = param_1[1];
    goto joined_r0x007ee888;
  case 4:
    uVar3 = param_1[1];
    if (0xfffffffffffffffd < uVar3) {
      return;
    }
    goto LAB_007ee96c;
  case 5:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 3;
      } while (uVar3 != 0);
    }
    goto LAB_007ee934;
  case 7:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 4;
      } while (uVar3 != 0);
    }
    uVar3 = param_1[1];
    goto joined_r0x007ee888;
  case 9:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 4;
      } while (uVar3 != 0);
    }
    if (param_1[1] != 0) {
      free(pvVar4);
    }
    pvVar4 = (void *)param_1[5];
    uVar3 = param_1[6];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 3;
      } while (uVar3 != 0);
    }
    uVar3 = param_1[4];
joined_r0x007ee888:
    if (uVar3 != 0) {
LAB_007ee944:
      free(pvVar4);
      return;
    }
    break;
  case 10:
  case 0xf:
  case 0x10:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_007ee970;
  case 0xb:
  case 0x11:
    break;
  case 0xc:
    uVar3 = param_1[1];
    if (uVar3 == 0xffffffffffffffff) {
      uVar3 = param_1[3];
      if (uVar3 == 0xffffffffffffffff) {
        return;
      }
      lVar2 = 0x18;
    }
    else {
      pvVar4 = (void *)param_1[2];
      uVar1 = param_1[3];
      if (uVar1 != 0) {
        puVar5 = (undefined8 *)((long)pvVar4 + 8);
        do {
          if (puVar5[-1] != 0) {
            free((void *)*puVar5);
          }
          uVar1 = uVar1 - 1;
          puVar5 = puVar5 + 3;
        } while (uVar1 != 0);
      }
      if (uVar3 != 0) {
        free(pvVar4);
      }
      uVar3 = param_1[4];
      lVar2 = 0x20;
    }
    if (uVar3 != 0) {
      free(*(void **)((long)param_1 + lVar2 + 8));
      return;
    }
    break;
  case 0x13:
    if (uVar1 != 0xffffffffffffffff) {
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] != 0) {
        free((void *)param_1[4]);
        return;
      }
    }
    break;
  case 0x15:
    pvVar4 = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((long)pvVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 3;
      } while (uVar3 != 0);
    }
LAB_007ee934:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_007ee944;
  default:
    uVar3 = param_1[1];
    if (uVar3 == 0xffffffffffffffff) {
      return;
    }
LAB_007ee96c:
    if (uVar3 != 0) {
LAB_007ee970:
      free((void *)param_1[2]);
      return;
    }
  }
  return;
}


// ===== 007eea3c  FUN_007eea3c =====

void FUN_007eea3c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  
  uVar8 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar8 = 1;
  }
  switch(uVar8) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    break;
  case 1:
    FUN_007eefac(param_1);
    return;
  case 2:
    lVar9 = param_1[3] + 1;
    uVar8 = param_1[2];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 007eeca0 to 007eeca3 has its CatchHandler @ 007eeef4 */
      FUN_007ff230(uVar8);
      uVar8 = uVar8 + 0x28;
    }
    goto LAB_007eecac;
  case 3:
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar11 = (ulong *)param_1[2];
      lVar9 = 0;
      puVar12 = puVar11;
      do {
        uVar5 = *puVar12;
        uVar7 = uVar5 ^ 0x8000000000000000;
        if (3 < uVar7) {
          uVar7 = 4;
        }
        if ((long)uVar7 < 2) {
          if (uVar7 != 0) {
            if (uVar7 == 1) goto LAB_007eed70;
LAB_007eed4c:
            puVar3 = puVar12;
            if (uVar5 != 0xffffffffffffffff) goto joined_r0x007eed7c;
          }
        }
        else if (uVar7 != 2) {
          if (uVar7 != 3) goto LAB_007eed4c;
LAB_007eed70:
          uVar5 = puVar12[1];
          puVar3 = puVar11 + lVar9 * 4 + 1;
joined_r0x007eed7c:
          if (uVar5 != 0) {
            free((void *)puVar3[1]);
          }
        }
        uVar8 = uVar8 - 1;
        puVar12 = puVar12 + 4;
        lVar9 = lVar9 + 1;
      } while (uVar8 != 0);
    }
    if (param_1[1] == 0) {
      return;
    }
    pvVar4 = (void *)param_1[2];
    goto LAB_007eed9c;
  case 4:
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[2] + 8);
      do {
        if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 3;
      } while (uVar8 != 0);
    }
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_007eecb8;
  case 5:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
                    /* try { // try from 007eee14 to 007eee1b has its CatchHandler @ 007eeecc */
    FUN_00808fd4(param_1 + 4);
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
      return;
    }
    break;
  default:
    uVar8 = param_1[1];
    if (uVar8 == 0xffffffffffffffff) {
      return;
    }
    goto joined_r0x007eecdc;
  case 7:
    if (param_1[1] == 0xffffffffffffffff) {
      uVar8 = param_1[2];
      if (uVar8 == 0xffffffffffffffff) {
        return;
      }
      lVar9 = 0x10;
    }
    else {
      uVar8 = param_1[5];
      if (uVar8 == 0xffffffffffffffff) {
        lVar9 = 8;
      }
      else {
        if (uVar8 != 0) {
          free((void *)param_1[6]);
        }
        if (param_1[8] != 0) {
          free((void *)param_1[9]);
        }
        lVar9 = 0x30;
      }
      plVar6 = (long *)((long)(param_1 + 5) + lVar9);
      if (*plVar6 != 0) {
        free((void *)plVar6[1]);
      }
      uVar8 = param_1[1];
      lVar9 = 8;
    }
    if (uVar8 != 0) {
      free(*(void **)((long)param_1 + lVar9 + 8));
      return;
    }
    break;
  case 8:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    uVar8 = param_1[9];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[8] + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 3;
      } while (uVar8 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    pvVar4 = (void *)param_1[8];
    goto LAB_007eecbc;
  case 9:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    lVar9 = param_1[6] + 1;
    uVar8 = param_1[5];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 007eebcc to 007eebcf has its CatchHandler @ 007eef60 */
      FUN_007ff374(uVar8);
      uVar8 = uVar8 + 0x20;
    }
    goto LAB_007eebd8;
  case 10:
    uVar8 = param_1[1];
joined_r0x007eecdc:
    if (uVar8 != 0) {
      free((void *)param_1[2]);
      return;
    }
    break;
  case 0xe:
    plVar6 = (long *)param_1[1];
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow(param_1 + 1);
      return;
    }
    break;
  case 0xf:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    plVar6 = (long *)param_1[7];
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007eeacc to 007eeacf has its CatchHandler @ 007eeeb8 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow();
    }
    uVar8 = param_1[6];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[5] + 8);
      do {
        if (((ulong)puVar10[-1] < 0xfffffffffffffffe) && (puVar10[-1] != 0)) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 4;
      } while (uVar8 != 0);
    }
LAB_007eebd8:
    if (param_1[4] != 0) {
      pvVar4 = (void *)param_1[5];
LAB_007eed9c:
      free(pvVar4);
      return;
    }
    break;
  case 0x10:
    lVar9 = param_1[3] + 1;
    uVar8 = param_1[2];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 007eec80 to 007eec83 has its CatchHandler @ 007eef18 */
      FUN_007ff230(uVar8);
      uVar8 = uVar8 + 0x28;
    }
LAB_007eecac:
    if (param_1[1] != 0) {
LAB_007eecb8:
      pvVar4 = (void *)param_1[2];
LAB_007eecbc:
      free(pvVar4);
      return;
    }
  }
  return;
}


// ===== 007eefac  FUN_007eefac =====

void FUN_007eefac(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
  }
  __ptr = (void *)param_1[7];
  lVar2 = param_1[8] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007ef00c to 007ef00f has its CatchHandler @ 007ef054 */
    FUN_007feea4(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x40);
  }
  if (param_1[6] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007ef098  FUN_007ef098 =====

void FUN_007ef098(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (3 < uVar2) {
    uVar2 = 4;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      return;
    }
    if (uVar2 == 1) {
LAB_007ef0e0:
      param_1 = param_1 + 1;
      uVar1 = *param_1;
      goto joined_r0x007ef0e4;
    }
  }
  else {
    if (uVar2 == 2) {
      return;
    }
    if (uVar2 == 3) goto LAB_007ef0e0;
  }
  if (uVar1 == 0xffffffffffffffff) {
    return;
  }
joined_r0x007ef0e4:
  if (uVar1 == 0) {
    return;
  }
  free((void *)param_1[1]);
  return;
}


// ===== 007ef0f8  FUN_007ef0f8 =====

void FUN_007ef0f8(long *param_1)

{
  long lVar1;
  
  if (*param_1 == -1) {
    param_1 = param_1 + 1;
    lVar1 = *param_1;
  }
  else {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    param_1 = param_1 + 6;
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ef178  FUN_007ef178 =====

void FUN_007ef178(long param_1,void *param_2)

{
  if ((-0x7fffffffffffffff < param_1) && (param_1 != 0)) {
    free(param_2);
    return;
  }
  return;
}


// ===== 007ef1a4  FUN_007ef1a4 =====

ulong FUN_007ef1a4(byte *param_1,byte *param_2)

{
  ulong uVar1;
  undefined8 local_58 [2];
  undefined8 local_48;
  
  local_58[0] = 0;
  local_48 = 0;
  if (param_1 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x007ef200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_007ef204 + (ulong)(byte)(&DAT_002f69b0)[*param_1] * 4))(param_1,0);
    return uVar1;
  }
  FUN_0084f3f4(local_58);
  return (ulong)(param_1 != param_2);
}


// ===== 007ef350  FUN_007ef350 =====

void FUN_007ef350(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  long lStack_38;
  undefined8 local_30;
  long lStack_28;
  
                    /* try { // try from 007ef368 to 007ef373 has its CatchHandler @ 007ef3ec */
  <rustls_pki_types::[H]::rustls_pki_types::SubjectPublicKeyInfoDer>::into_owned
            (&local_70,param_2 + 3);
  local_40 = param_2[1];
  local_30 = *param_2;
  lStack_28 = local_40 + param_2[2] * 0x20;
                    /* try { // try from 007ef388 to 007ef393 has its CatchHandler @ 007ef3c4 */
  lStack_38 = local_40;
  FUN_0080b3f8(&local_58,&local_40);
  param_1[4] = uStack_68;
  param_1[3] = local_70;
  param_1[5] = local_60;
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[2] = local_48;
  return;
}


// ===== 007ef400  FUN_007ef400 =====

void FUN_007ef400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  long lStack_38;
  
  local_50 = param_2[4];
  lStack_38 = local_50 + param_2[5] * 0x30;
  local_40 = param_2[3];
                    /* try { // try from 007ef438 to 007ef443 has its CatchHandler @ 007ef478 */
  lStack_48 = local_50;
  FUN_0080b2f8(&local_68,&local_50);
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  param_1[4] = uStack_60;
  param_1[3] = local_68;
  param_1[5] = local_58;
  return;
}


// ===== 007ef498  FUN_007ef498 =====

byte * FUN_007ef498(byte *param_1)

{
  ushort *puVar1;
  ulong __n;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *__n_00;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  long *plVar12;
  void *local_68 [2];
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar8 = *(long **)(param_1 + 0x20);
    lVar9 = 5;
    __n_00 = plVar8 + *(long *)(param_1 + 0x28) * 6;
    do {
      plVar12 = (long *)plVar8[1];
      local_68[0] = (void *)0x0;
      local_58 = 0;
      lVar10 = plVar8[2] << 5;
      puVar11 = (ushort *)((long)plVar12 + 0x1a);
      while (lVar10 != 0) {
        lVar4 = *plVar12;
        puVar1 = (ushort *)(plVar12 + 3);
        plVar12 = plVar12 + 4;
        uVar6 = 5;
        if (lVar4 != -2) {
          uVar6 = (uint)*puVar1;
        }
        plVar3 = (long *)(ulong)uVar6;
        pbVar2 = &switchD_007ef510::switchdataD_002f69ec;
        switch((ulong)plVar3 & 0x3f) {
        case 0x11:
        case 0x31:
          plVar3 = (long *)&DAT_00000012;
          break;
        case 0x12:
          plVar3 = (long *)0x13;
          break;
        case 0x13:
        case 0x2f:
          plVar3 = (long *)&DAT_00000014;
          break;
        case 0x14:
          plVar3 = (long *)0x15;
          break;
        case 0x15:
          plVar3 = (long *)0x17;
          break;
        case 0x16:
          plVar3 = (long *)0x1b;
          break;
        case 0x17:
          plVar3 = (long *)0x23;
          break;
        case 0x18:
          plVar3 = (long *)0x29;
          break;
        case 0x19:
          plVar3 = (long *)0x2a;
        case 0x37:
          break;
        case 0x1a:
          plVar3 = (long *)0x2b;
          break;
        case 0x1b:
        case 0x36:
          plVar3 = (long *)0x2c;
          break;
        case 0x1c:
          plVar3 = (long *)0x2d;
          break;
        case 0x1d:
          plVar3 = (long *)0x2e;
          break;
        case 0x1e:
          plVar3 = (long *)0x2f;
          break;
        case 0x1f:
          plVar3 = (long *)&DAT_00000030;
          break;
        case 0x20:
          plVar3 = (long *)0x31;
          break;
        case 0x21:
          plVar3 = (long *)&DAT_00000032;
          break;
        case 0x22:
          plVar3 = (long *)0x33;
          break;
        case 0x23:
          plVar3 = (long *)0x39;
          break;
        case 0x24:
          plVar3 = (long *)0x3374;
          break;
        case 0x25:
          plVar3 = (long *)0x754f;
        case 0x38:
          break;
        case 0x26:
          plVar3 = (long *)0xff01;
          break;
        case 0x27:
          plVar3 = (long *)0xffa5;
          break;
        case 0x28:
          plVar3 = (long *)0xfe0d;
          break;
        case 0x29:
          plVar3 = (long *)0xfd00;
        case 0x2b:
          break;
        case 0x2a:
          plVar3 = (long *)(ulong)*puVar11;
          break;
        case 0x30:
          if (*(long *)param_1 == 1) {
            lVar9 = plVar3[2];
            lVar10 = *plVar3;
            pvVar5 = *(void **)(param_1 + 0x10);
            __n = *(ulong *)(param_1 + 0x18);
            if ((ulong)(lVar10 - lVar9) < 2) {
              param_1 = (byte *)FUN_00874c84(plVar3,lVar9,2,1,1);
              lVar9 = plVar3[2];
              lVar10 = *plVar3;
            }
            lVar4 = lVar9 + 2;
            lVar7 = plVar3[1];
            plVar3[2] = lVar4;
            *(ushort *)(lVar7 + lVar9) =
                 (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
            if ((ulong)(lVar10 - lVar4) < __n) {
              local_68[0] = pvVar5;
              FUN_00874c84(plVar3,lVar4,__n,1,1);
              lVar7 = plVar3[1];
              lVar4 = plVar3[2];
              pvVar5 = local_68[0];
LAB_007ef6bc:
              param_1 = (byte *)memcpy((void *)(lVar7 + lVar4),pvVar5,__n);
            }
            else if (__n != 0) goto LAB_007ef6bc;
            plVar3[2] = lVar4 + __n;
switchD_007ef510_caseD_3d:
            return param_1;
          }
          lVar9 = plVar3[2];
          __n_00 = *(long **)(param_1 + 0x18);
          plVar8 = plVar3;
          pbVar2 = param_1;
          if (lVar9 == *plVar3) goto switchD_007ef510_caseD_3e;
          goto LAB_007ef708;
        case 0x3d:
          goto switchD_007ef510_caseD_3d;
        case 0x3e:
switchD_007ef510_caseD_3e:
          param_1 = pbVar2;
          plVar3 = plVar8;
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(plVar3);
LAB_007ef708:
          lVar10 = lVar9 + 1;
          *(char *)(plVar3[1] + lVar9) = (char)__n_00;
          plVar3[2] = lVar10;
          pvVar5 = *(void **)(param_1 + 0x10);
          if ((long *)(*plVar3 - lVar10) < __n_00) {
            FUN_00874c84(plVar3,lVar10,__n_00,1,1);
            lVar10 = plVar3[2];
          }
          else if (__n_00 == (long *)0x0) goto LAB_007ef748;
          param_1 = (byte *)memcpy((void *)(plVar3[1] + lVar10),pvVar5,(size_t)__n_00);
          lVar10 = plVar3[2];
LAB_007ef748:
          plVar3[2] = (long)(lVar10 + (long)__n_00);
          return param_1;
        case 0x3f:
          goto switchD_007ef510_caseD_3f;
        }
                    /* try { // try from 007ef514 to 007ef51b has its CatchHandler @ 007ef640 */
        param_1 = (byte *)FUN_0084e3e8(local_68,plVar3);
        puVar11 = puVar11 + 0x10;
        lVar10 = lVar10 + -0x20;
        if ((int)param_1 != 0) {
          FUN_0084f3f4(local_68);
          return &DAT_00000001;
        }
      }
      param_1 = (byte *)FUN_0084f3f4(local_68);
      plVar8 = plVar8 + 6;
    } while (plVar8 != __n_00);
  }
  param_1 = (byte *)0x0;
switchD_007ef510_caseD_3f:
  return param_1;
}


// ===== 007ef658  FUN_007ef658 =====

void FUN_007ef658(long *param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (*param_1 != 1) {
    lVar1 = param_2[2];
    uVar5 = param_1[3];
    if (lVar1 == *param_2) {
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
    }
    lVar4 = lVar1 + 1;
    *(char *)(param_2[1] + lVar1) = (char)uVar5;
    param_2[2] = lVar4;
    pvVar2 = (void *)param_1[2];
    if ((ulong)(*param_2 - lVar4) < uVar5) {
      FUN_00874c84(param_2,lVar4,uVar5,1,1);
      lVar4 = param_2[2];
    }
    else if (uVar5 == 0) goto LAB_007ef748;
    memcpy((void *)(param_2[1] + lVar4),pvVar2,uVar5);
    lVar4 = param_2[2];
LAB_007ef748:
    param_2[2] = lVar4 + uVar5;
    return;
  }
  lVar1 = param_2[2];
  lVar4 = *param_2;
  pvVar2 = (void *)param_1[2];
  uVar5 = param_1[3];
  if ((ulong)(lVar4 - lVar1) < 2) {
    FUN_00874c84(param_2,lVar1,2,1,1);
    lVar1 = param_2[2];
    lVar4 = *param_2;
  }
  lVar6 = lVar1 + 2;
  lVar3 = param_2[1];
  param_2[2] = lVar6;
  *(ushort *)(lVar3 + lVar1) = (ushort)(uVar5 >> 8) & 0xff | (ushort)(((uint)uVar5 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar4 - lVar6) < uVar5) {
    FUN_00874c84(param_2,lVar6,uVar5,1,1);
    lVar3 = param_2[1];
    lVar6 = param_2[2];
  }
  else if (uVar5 == 0) goto LAB_007ef6c8;
  memcpy((void *)(lVar3 + lVar6),pvVar2,uVar5);
LAB_007ef6c8:
  param_2[2] = lVar6 + uVar5;
  return;
}


// ===== 007ef7dc  FUN_007ef7dc =====

void FUN_007ef7dc(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x007ef82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007ef830 + (ulong)(&BYTE_002f6a17)[uVar1] * 4))();
  return;
}


// ===== 007efca4  FUN_007efca4 =====

void FUN_007efca4(long *param_1,long *param_2,short param_3)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  undefined5 uVar4;
  ushort uVar5;
  short extraout_w1;
  short extraout_w1_00;
  short extraout_w1_01;
  short extraout_w1_02;
  short extraout_w1_03;
  short extraout_w1_04;
  short extraout_w1_05;
  short extraout_w1_06;
  short extraout_w1_07;
  short extraout_w1_08;
  uint uVar6;
  long lVar7;
  ulong extraout_x9;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  uint extraout_w13_02;
  uint extraout_w13_03;
  uint extraout_w13_04;
  uint extraout_w13_05;
  uint extraout_w13_06;
  uint extraout_w13_07;
  uint extraout_w13_08;
  uint uVar13;
  uint extraout_w13_09;
  ulong uVar14;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong extraout_x14_01;
  ulong extraout_x14_02;
  ulong extraout_x14_03;
  ulong extraout_x14_04;
  ulong extraout_x14_05;
  ulong extraout_x14_06;
  ulong extraout_x14_07;
  ulong extraout_x14_08;
  ulong extraout_x14_09;
  ulong extraout_x14_10;
  ulong extraout_x14_11;
  ushort *puVar15;
  ushort *extraout_x15;
  undefined8 *puVar16;
  uint in_w16;
  uint extraout_w16;
  uint extraout_w16_00;
  uint extraout_w16_01;
  uint extraout_w16_02;
  uint extraout_w16_03;
  uint extraout_w16_04;
  uint extraout_w16_05;
  uint extraout_w16_06;
  uint extraout_w16_07;
  uint extraout_w16_08;
  ushort in_w17;
  ushort extraout_w17;
  ushort extraout_w17_00;
  ushort extraout_w17_01;
  ushort extraout_w17_02;
  ushort extraout_w17_03;
  ushort extraout_w17_04;
  ushort extraout_w17_05;
  ushort extraout_w17_06;
  ushort extraout_w17_07;
  ushort extraout_w17_08;
  ushort unaff_w22;
  short unaff_w23;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte local_2ec;
  char local_2eb;
  ulong local_2e8;
  ulong local_2e0;
  ulong local_2d8;
  long local_2d0;
  long lStack_2c8;
  long local_2c0;
  long lStack_2b8;
  long local_2b0;
  long lStack_2a8;
  long local_2a0;
  long lStack_258;
  long local_250;
  long lStack_248;
  undefined8 local_240 [2];
  long lStack_230;
  long lStack_228;
  undefined8 local_220 [4];
  undefined4 local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined1 uStack_1f4;
  undefined2 uStack_1f3;
  undefined1 uStack_1f1;
  uint uStack_1f0;
  undefined1 uStack_1ec;
  undefined2 uStack_1eb;
  undefined1 local_1e9;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  uint local_1d0;
  undefined4 local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  byte local_100;
  byte bStack_ff;
  byte bStack_fe;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined2 uStack_fa;
  undefined1 uStack_f8;
  ushort uStack_f7;
  undefined1 uStack_f5;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined1 local_f0;
  undefined2 uStack_ef;
  undefined1 uStack_ed;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_cc;
  uint uStack_c8;
  uint uStack_c4;
  short sStack_c0;
  ushort uStack_be;
  uint uStack_bc;
  short local_b8;
  ushort uStack_b6;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 local_a0;
  short sStack_98;
  ushort uStack_96;
  uint uStack_94;
  ulong local_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  byte *local_68;
  
  uVar8 = param_2[1];
  local_2e8 = param_2[2];
  if (uVar8 == local_2e8) {
    pcVar9 = &DAT_002fdaa5;
    *(undefined1 *)(param_1 + 1) = 0xc;
    lVar7 = 0xd;
    goto LAB_007efce4;
  }
  uVar12 = local_2e8 + 1;
  param_2[2] = uVar12;
  if (uVar8 <= local_2e8) {
LAB_007f0868:
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (local_2e8,uVar12,uVar8,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  lVar7 = *param_2;
  cVar2 = *(char *)(lVar7 + local_2e8);
  if ((byte)(cVar2 + 2U) < 0x1c) {
    local_2ec = (&DAT_002f6f80)[(byte)(cVar2 + 2U)];
    uVar10 = (uint)local_2ec;
  }
  else {
    uVar10 = 0x14;
    local_2ec = 0x14;
  }
  if (uVar8 - uVar12 < 3) {
    param_1[2] = (long)&DAT_002ff0bc;
    param_1[3] = 3;
    *(undefined1 *)(param_1 + 1) = 0xc;
    goto LAB_007efdbc;
  }
  local_2e8 = local_2e8 + 4;
  param_2[2] = local_2e8;
  local_2eb = cVar2;
  if ((0xfffffffffffffffc < uVar12) || (uVar8 < local_2e8)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar12,local_2e8,uVar8,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  pbVar1 = (byte *)(lVar7 + uVar12);
  uVar6 = (uint)*pbVar1 << 8 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 0x18;
  uVar14 = (ulong)uVar6;
  uVar13 = ((uint)*pbVar1 << 8 | (uint)pbVar1[2] << 0x18) >> 8;
  uVar13 = (uVar13 | (uint)pbVar1[1] << 0x18) >> 0x10 | uVar13 << 0x10;
  local_2e0 = (ulong)uVar13;
  if (uVar8 - local_2e8 < local_2e0) {
    param_1[2] = local_2e0;
    param_1[3] = 0;
    *param_1 = -1;
    param_1[1] = 0xb;
    return;
  }
  uVar12 = local_2e8 + local_2e0;
  param_2[2] = uVar12;
  if ((CARRY8(local_2e8,local_2e0)) || (uVar8 < uVar12)) goto LAB_007f0868;
  local_2e8 = lVar7 + local_2e8;
  local_2d8 = 0;
  uVar11 = (undefined4)(local_2e8 >> 0x20);
  uVar8 = local_2e8;
  if (0x13 < uVar10) goto switchD_007efe38_caseD_3;
  uVar12 = (ulong)uVar10;
  puVar15 = &switchD_007efe38::switchdataD_002f6a2e;
  in_w17 = (&switchD_007efe38::switchdataD_002f6a2e)[uVar12];
  in_w16 = (uint)in_w17 * 4 + 0x7efe3c;
  puVar17 = &uStack_1ac;
  switch(uVar12) {
  case 0:
    if (uVar6 == 0) {
      uVar10 = 0;
      lVar7 = -0x8000000000000000;
      local_90 = uVar14;
      uStack_96 = unaff_w22;
      local_b8 = param_3;
      sStack_98 = unaff_w23;
      uStack_b4 = in_w16;
      break;
    }
  default:
switchD_007efe38_caseD_3:
    uStack_1b8 = 0;
    param_2 = (long *)0xff;
    lVar7 = -0x7fffffffffffffeb;
    uVar12 = 0xff;
    local_90 = uVar14;
    puVar15 = (ushort *)0xffffffffffff;
    local_2d8 = local_2e0;
    local_1c0 = uVar11;
    uStack_1bc = uVar13;
    uStack_96 = unaff_w22;
    local_b8 = param_3;
    sStack_98 = unaff_w23;
    uStack_b4 = in_w16;
    break;
  case 1:
    <rustls::msgs::handshake::ClientHelloPayload_as_rustls::msgs::codec::Codec>::read
              (&local_100,&local_2e8);
    lVar7 = CONCAT26(uStack_fa,
                     CONCAT15(uStack_fb,
                              CONCAT14(uStack_fc,
                                       CONCAT13(uStack_fd,
                                                CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100)))))
                    );
    uVar12 = CONCAT26(uStack_f2,
                      CONCAT24(uStack_f4,CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8))));
    local_200 = CONCAT22(uStack_ea,uStack_ec);
    uVar10 = CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0));
    uVar8 = (ulong)uVar10;
    uStack_1fc = uStack_e8;
    uStack_1f8 = uStack_e4;
    if (lVar7 == -1) {
LAB_007f01c8:
      *(uint *)(param_1 + 2) = uVar10;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_1fc,local_200);
      *(uint *)((long)param_1 + 0x1c) = uStack_1f8;
      *param_1 = -1;
      param_1[1] = uVar12;
      return;
    }
    param_2 = (long *)(uVar12 >> 8);
    uStack_194 = CONCAT22(uStack_be,sStack_c0);
    puVar15 = (ushort *)(uVar12 >> 0x10);
    lStack_2b8 = lStack_70;
    local_2c0 = local_78;
    lStack_2a8 = lStack_a8;
    local_2b0 = lStack_b0;
    lStack_2c8 = lStack_80;
    local_2d0 = lStack_88;
    uStack_1b8 = uStack_e4;
    uStack_190 = uStack_bc;
    local_2a0 = local_a0;
    uVar10 = 1;
    uStack_1bc = uStack_e8;
    uStack_1ac = uStack_d8;
    uStack_1a8 = uStack_d4;
    uStack_1b4 = uStack_e0;
    local_1b0 = uStack_dc;
    uStack_19c = uStack_c8;
    uStack_198 = uStack_c4;
    uStack_1a4 = uStack_d0;
    local_1a0 = local_cc;
    uVar13 = uStack_94;
    in_w17 = uStack_b6;
    local_1c0 = local_200;
    break;
  case 2:
    <rustls::enums::ProtocolVersion_as_rustls::msgs::codec::Codec>::read(&local_100,&local_2e8);
    if (local_100 == 0xff) {
      sVar3 = CONCAT11(uStack_fd,bStack_fe);
      uVar5 = CONCAT11(uStack_fb,uStack_fc);
      <rustls::msgs::handshake::Random_as_rustls::msgs::codec::Codec>::read(&local_100,&local_2e8);
      if (local_100 != 1) {
        lStack_258 = CONCAT17(local_f0,CONCAT25(uStack_f2,
                                                CONCAT23(uStack_f4,CONCAT12(uStack_f5,uStack_f7))));
        lStack_248 = CONCAT17((undefined1)uStack_e0,CONCAT43(uStack_e4,uStack_e8._1_3_));
        local_250 = CONCAT17((undefined1)uStack_e8,
                             CONCAT25(uStack_ea,CONCAT23(uStack_ec,CONCAT12(uStack_ed,uStack_ef))));
        lStack_230 = local_250;
        lStack_228 = lStack_248;
        if (((CONCAT17(uStack_f8,
                       CONCAT25(uStack_fa,
                                CONCAT14(uStack_fb,
                                         CONCAT13(uStack_fc,
                                                  CONCAT12(uStack_fd,CONCAT11(bStack_fe,bStack_ff)))
                                        ))) == 0x11619ae574ad21cf &&
             lStack_258 == -0x6e479ae1fd73e242) && local_250 == 0x5e8cbb7a1611a2c2) &&
            lStack_248 == -0x63cc57371df661f9) {
          <rustls::msgs::handshake::HelloRetryRequest_as_rustls::msgs::codec::Codec>::read
                    (&local_100,&local_2e8);
          uVar12 = CONCAT26(uStack_fa,
                            CONCAT15(uStack_fb,
                                     CONCAT14(uStack_fc,
                                              CONCAT13(uStack_fd,
                                                       CONCAT12(bStack_fe,
                                                                CONCAT11(bStack_ff,local_100))))));
          uStack_1f8 = CONCAT22(uStack_ea,uStack_ec);
          local_1c0 = CONCAT22(uStack_f2,uStack_f4);
          uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
          uStack_1f4 = (undefined1)uStack_e8;
          uStack_1f3 = (undefined2)(uStack_e8 >> 8);
          uStack_1f1 = (undefined1)(uStack_e8 >> 0x18);
          uStack_1fc = (uint)(CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_1c0)))
                             >> 0x20);
          uStack_1f0 = uStack_e4;
          if (uVar12 == 0xffffffffffffffff) {
            uVar19 = CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
            uVar18 = CONCAT44(uStack_1fc,local_1c0);
            goto LAB_007f0918;
          }
          uVar10 = 6;
          lVar7 = -0x7ffffffffffffffd;
          puVar16 = local_220;
          uStack_1b4 = (uint)(CONCAT17(uStack_1f1,
                                       CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8))) >> 0x20
                             );
          uStack_1bc = uStack_1fc;
          local_1b0 = uStack_e4;
          local_2ec = 6;
          local_90 = extraout_x14_11;
          uVar13 = extraout_w13_09;
          in_w17 = uVar5;
          uStack_1b8 = uStack_1f8;
          local_b8 = sVar3;
        }
        else {
          <rustls::msgs::handshake::ServerHelloPayload_as_rustls::msgs::codec::Codec>::read();
          uVar12 = CONCAT26(uStack_fa,
                            CONCAT15(uStack_fb,
                                     CONCAT14(uStack_fc,
                                              CONCAT13(uStack_fd,
                                                       CONCAT12(bStack_fe,
                                                                CONCAT11(bStack_ff,local_100))))));
          uStack_1b8 = CONCAT22(uStack_ea,uStack_ec);
          uVar19 = CONCAT44(uStack_e8,uStack_1b8);
          local_1c0 = CONCAT22(uStack_f2,uStack_f4);
          uVar18 = CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_1c0)));
          uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
          local_1d0 = uStack_e4;
          if (uVar12 == 0xffffffffffffffff) {
LAB_007f0918:
            *(uint *)(param_1 + 1) = uVar6;
            *(undefined8 *)((long)param_1 + 0x14) = uVar19;
            *(undefined8 *)((long)param_1 + 0xc) = uVar18;
            *(uint *)((long)param_1 + 0x1c) = uStack_e4;
            *param_1 = -1;
            return;
          }
          lVar7 = -0x7ffffffffffffffe;
          puVar16 = local_240;
          uStack_1f8 = uStack_d8;
          uStack_1f4 = (undefined1)uStack_d4;
          uStack_1f3 = (undefined2)(uStack_d4 >> 8);
          uStack_1f1 = (undefined1)(uStack_d4 >> 0x18);
          uStack_1fc = uStack_dc;
          uStack_1e8 = (undefined7)CONCAT44(uStack_c4,uStack_c8);
          uStack_1e1 = (undefined1)(uStack_c4 >> 0x18);
          uStack_1f0 = uStack_d0;
          uStack_1ec = (undefined1)local_cc;
          uStack_1eb = (undefined2)(local_cc >> 8);
          local_1e9 = (undefined1)(local_cc >> 0x18);
          local_2a0 = lStack_a8;
          local_90 = CONCAT44(uStack_94,CONCAT22(uStack_96,sStack_98));
          uVar10 = 2;
          uStack_1a4 = uStack_d8;
          local_1a0 = (uint)(CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_d8))
                                     ) >> 0x20);
          uStack_1ac = uStack_e0;
          uStack_1a8 = uStack_dc;
          uStack_194 = uStack_c8;
          uStack_190 = (uint)(CONCAT17(uStack_1e1,uStack_1e8) >> 0x20);
          uStack_19c = uStack_d0;
          uStack_198 = (uint)(CONCAT17(local_1e9,CONCAT25(uStack_1eb,CONCAT14(uStack_1ec,uStack_d0))
                                      ) >> 0x20);
          local_2b0 = CONCAT44(uStack_b4,CONCAT22(uStack_b6,local_b8));
          uStack_1bc = (uint)((ulong)uVar18 >> 0x20);
          lStack_2a8 = lStack_b0;
          puVar17 = &uStack_1b4;
          uVar13 = local_a0._4_4_;
          in_w17 = uStack_be;
          local_b8 = sStack_c0;
        }
        uVar18 = *puVar16;
        uVar20 = puVar16[3];
        uVar19 = puVar16[2];
        param_2 = (long *)(uVar12 >> 8);
        puVar15 = (ushort *)(uVar12 >> 0x10);
        *(undefined8 *)(puVar17 + 2) = puVar16[1];
        *(undefined8 *)puVar17 = uVar18;
        *(undefined8 *)(puVar17 + 6) = uVar20;
        *(undefined8 *)(puVar17 + 4) = uVar19;
        uVar8 = (ulong)uVar6;
        uStack_96 = uVar5;
        sStack_98 = sVar3;
        uStack_b4 = uStack_bc;
        break;
      }
      param_1[2] = CONCAT26(uStack_ea,
                            CONCAT24(uStack_ec,CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0))));
      param_1[1] = CONCAT26(uStack_f2,
                            CONCAT24(uStack_f4,CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8))));
      param_1[3] = CONCAT44(uStack_e4,uStack_e8);
    }
    else {
      *(byte *)(param_1 + 1) = local_100;
      *(undefined2 *)((long)param_1 + 0x1e) = uStack_ea;
      *(ulong *)((long)param_1 + 0x16) =
           CONCAT26(uStack_ec,CONCAT15(uStack_ed,CONCAT23(uStack_ef,CONCAT12(local_f0,uStack_f2))));
      *(ulong *)((long)param_1 + 0xe) =
           CONCAT26(uStack_f4,CONCAT15(uStack_f5,CONCAT23(uStack_f7,CONCAT12(uStack_f8,uStack_fa))))
      ;
      *(byte *)((long)param_1 + 9) = bStack_ff;
      *(uint *)((long)param_1 + 10) =
           CONCAT13(uStack_fb,CONCAT12(uStack_fc,CONCAT11(uStack_fd,bStack_fe)));
    }
    *param_1 = -1;
    return;
  case 4:
    if (param_3 == 5) {
      <rustls::msgs::handshake::NewSessionTicketPayloadTls13_as_rustls::msgs::codec::Codec>::read
                (&local_100,&local_2e8);
      uVar12 = CONCAT26(uStack_fa,
                        CONCAT15(uStack_fb,
                                 CONCAT14(uStack_fc,
                                          CONCAT13(uStack_fd,
                                                   CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))
                                                  ))));
      uStack_1f8 = CONCAT22(uStack_ea,uStack_ec);
      local_200 = CONCAT22(uStack_f2,uStack_f4);
      uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
      uStack_1f4 = (undefined1)uStack_e8;
      uStack_1f3 = (undefined2)(uStack_e8 >> 8);
      uStack_1f1 = (undefined1)(uStack_e8 >> 0x18);
      uStack_1fc = (uint)(CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_200))) >>
                         0x20);
      uStack_1f0 = uStack_e4;
      if (uVar12 == 0xffffffffffffffff) goto LAB_007f04f8;
      param_2 = (long *)(uVar12 >> 8);
      puVar15 = (ushort *)(uVar12 >> 0x10);
      lVar7 = -0x7ffffffffffffff1;
      uVar10 = 4;
      local_1b0 = uStack_e4;
      uStack_1a4 = uStack_d8;
      local_1a0 = uStack_d4;
      uStack_1ac = uStack_e0;
      uStack_1a8 = uStack_dc;
      uStack_194 = uStack_c8;
      uStack_190 = uStack_c4;
      uStack_19c = uStack_d0;
      uStack_198 = local_cc;
      uStack_1b4 = (uint)(CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)))
                         >> 0x20);
      uStack_1bc = uStack_1fc;
      uVar8 = (ulong)uVar6;
      local_90 = extraout_x14_00;
      uVar13 = extraout_w13_00;
      in_w17 = extraout_w17_00;
      local_1c0 = local_200;
      uStack_1b8 = uStack_1f8;
      uStack_96 = unaff_w22;
      local_b8 = extraout_w1_00;
      sStack_98 = unaff_w23;
      uStack_b4 = extraout_w16_00;
    }
    else {
      <rustls::msgs::handshake::NewSessionTicketPayload_as_rustls::msgs::codec::Codec>::read
                (&local_100,&local_2e8);
      if (local_100 != 0xff) {
        *(byte *)(param_1 + 1) = local_100;
        param_1[2] = CONCAT26(uStack_f2,
                              CONCAT24(uStack_f4,CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8))))
        ;
        *(uint *)((long)param_1 + 9) =
             CONCAT13(uStack_fc,CONCAT12(uStack_fd,CONCAT11(bStack_fe,bStack_ff)));
        *(uint *)((long)param_1 + 0xc) =
             CONCAT31((int3)(CONCAT22(uStack_fa,CONCAT11(uStack_fb,uStack_fc)) >> 8),uStack_fc);
        param_1[3] = CONCAT26(uStack_ea,
                              CONCAT24(uStack_ec,CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0))));
        *param_1 = -1;
        return;
      }
      uVar12 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8))));
      uVar10 = 4;
      param_2 = (long *)(uVar12 >> 8);
      puVar15 = (ushort *)(uVar12 >> 0x10);
      lVar7 = -0x7ffffffffffffff2;
      uVar8 = (ulong)CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0));
      local_90 = extraout_x14_08;
      uVar13 = extraout_w13_06;
      in_w17 = extraout_w17_07;
      uStack_96 = unaff_w22;
      local_b8 = extraout_w1_07;
      sStack_98 = unaff_w23;
      uStack_b4 = extraout_w16_07;
    }
    break;
  case 5:
    if (uVar6 == 0) {
      uVar10 = 5;
      lVar7 = -0x7ffffffffffffff4;
      uVar8 = 0x8000000000000002;
      local_90 = uVar14;
      puVar15 = &switchD_007efe38::switchdataD_002f6a2e;
      uStack_96 = unaff_w22;
      local_b8 = param_3;
      sStack_98 = unaff_w23;
      uStack_b4 = in_w16;
      break;
    }
    pcVar9 = "EndOfEarlyData";
    *(undefined1 *)(param_1 + 1) = 0xf;
    lVar7 = 0xe;
    goto LAB_007efce4;
  case 6:
    pcVar9 = "HelloRetryRequest";
    *(undefined1 *)(param_1 + 1) = 0x10;
    lVar7 = 0x11;
    goto LAB_007efce4;
  case 7:
    FUN_00803c08(&local_100,&local_2e8);
    local_200 = CONCAT22(uStack_ea,uStack_ec);
    uVar12 = CONCAT26(uStack_f2,
                      CONCAT24(uStack_f4,CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8))));
    uVar10 = CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0));
    uVar8 = (ulong)uVar10;
    uStack_1fc = uStack_e8;
    uStack_1f8 = uStack_e4;
    if ((local_100 & 1) != 0) goto LAB_007f01c8;
    param_2 = (long *)(uVar12 >> 8);
    puVar15 = (ushort *)(uVar12 >> 0x10);
    uStack_1bc = uStack_e8;
    lVar7 = -0x7ffffffffffffff0;
    uStack_1b8 = uStack_e4;
    uVar10 = 7;
    local_90 = extraout_x14_01;
    uVar13 = extraout_w13_01;
    in_w17 = extraout_w17_01;
    local_1c0 = local_200;
    uStack_96 = unaff_w22;
    local_b8 = extraout_w1_01;
    sStack_98 = unaff_w23;
    uStack_b4 = extraout_w16_01;
    break;
  case 8:
    if (param_3 == 5) {
      <rustls::msgs::handshake::CertificatePayloadTls13_as_rustls::msgs::codec::Codec>::read
                (&local_100,&local_2e8);
      uVar12 = CONCAT26(uStack_fa,
                        CONCAT15(uStack_fb,
                                 CONCAT14(uStack_fc,
                                          CONCAT13(uStack_fd,
                                                   CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))
                                                  ))));
      uStack_1f8 = CONCAT22(uStack_ea,uStack_ec);
      local_200 = CONCAT22(uStack_f2,uStack_f4);
      uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
      uStack_1f4 = (undefined1)uStack_e8;
      uStack_1f3 = (undefined2)(uStack_e8 >> 8);
      uStack_1f1 = (undefined1)(uStack_e8 >> 0x18);
      uStack_1fc = (uint)(CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_200))) >>
                         0x20);
      uStack_1f0 = uStack_e4;
      if (uVar12 == 0xffffffffffffffff) goto LAB_007f04f8;
      lVar7 = -0x7ffffffffffffffb;
      uStack_1b4 = (uint)(CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)))
                         >> 0x20);
      uStack_1bc = uStack_1fc;
      local_1b0 = uStack_e4;
      uStack_1a4 = uStack_d8;
      local_1a0 = uStack_d4;
      uStack_1ac = uStack_e0;
      uStack_1a8 = uStack_dc;
      local_90 = extraout_x14_02;
      uVar13 = extraout_w13_02;
      in_w17 = extraout_w17_02;
      local_1c0 = local_200;
      uStack_1b8 = uStack_1f8;
      local_b8 = extraout_w1_02;
      uStack_b4 = extraout_w16_02;
    }
    else {
      FUN_00801110(&local_100,&local_2e8);
      local_1c0 = CONCAT22(uStack_ea,uStack_ec);
      uVar12 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8))));
      uVar6 = CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0));
      lStack_258 = CONCAT44(lStack_258._4_4_,uStack_e4);
      if ((local_100 & 1) != 0) {
        *(uint *)(param_1 + 2) = uVar6;
        *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_e8,local_1c0);
        *(uint *)((long)param_1 + 0x1c) = uStack_e4;
        *param_1 = -1;
        param_1[1] = uVar12;
        return;
      }
      lVar7 = -0x7ffffffffffffffc;
      uStack_1bc = uStack_e8;
      uStack_1b8 = uStack_e4;
      local_90 = extraout_x14_09;
      uVar13 = extraout_w13_07;
      in_w17 = extraout_w17_08;
      local_b8 = extraout_w1_08;
      uStack_b4 = extraout_w16_08;
    }
    param_2 = (long *)(uVar12 >> 8);
    uVar10 = 8;
    uVar8 = (ulong)uVar6;
    puVar15 = (ushort *)(uVar12 >> 0x10);
    uStack_1f8 = uStack_1b8;
    uStack_96 = unaff_w22;
    sStack_98 = unaff_w23;
    break;
  case 9:
    <rustls::msgs::handshake::ServerKeyExchangePayload_as_rustls::msgs::codec::Codec>::read
              (&local_100,&local_2e8);
    uVar12 = CONCAT26(uStack_fa,
                      CONCAT15(uStack_fb,
                               CONCAT14(uStack_fc,
                                        CONCAT13(uStack_fd,
                                                 CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))))
                              ));
    uStack_1f8 = CONCAT22(uStack_ea,uStack_ec);
    local_200 = CONCAT22(uStack_f2,uStack_f4);
    uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
    uStack_1f4 = (undefined1)uStack_e8;
    uStack_1f3 = (undefined2)(uStack_e8 >> 8);
    uStack_1f1 = (undefined1)(uStack_e8 >> 0x18);
    uStack_1fc = (uint)(CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_200))) >> 0x20
                       );
    uStack_1f0 = uStack_e4;
    if (uVar12 == 0xfffffffffffffffe) goto LAB_007f04f8;
    param_2 = (long *)(uVar12 >> 8);
    local_2b0 = CONCAT44(uStack_b4,CONCAT22(uStack_b6,local_b8));
    lVar7 = -0x7ffffffffffffff9;
    uVar10 = 9;
    local_2a0 = lStack_a8;
    lStack_2a8 = lStack_b0;
    uStack_1a4 = uStack_d8;
    local_1a0 = uStack_d4;
    uStack_1ac = uStack_e0;
    uStack_1a8 = uStack_dc;
    uStack_194 = uStack_c8;
    uStack_190 = uStack_c4;
    uStack_19c = uStack_d0;
    uStack_198 = local_cc;
    local_1b0 = uStack_e4;
    uStack_1b4 = (uint)(CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8))) >>
                       0x20);
    uStack_1bc = uStack_1fc;
    uVar8 = (ulong)uVar6;
    local_90 = extraout_x14_06;
    puVar15 = (ushort *)(uVar12 >> 0x10);
    uVar13 = local_a0._4_4_;
    in_w17 = uStack_be;
    local_1c0 = local_200;
    uStack_1b8 = uStack_1f8;
    uStack_96 = local_a0._2_2_;
    local_b8 = sStack_c0;
    sStack_98 = (short)local_a0;
    uStack_b4 = uStack_bc;
    break;
  case 10:
    if (param_3 == 5) {
      <rustls::msgs::handshake::CertificateRequestPayloadTls13_as_rustls::msgs::codec::Codec>::read
                (&local_100,&local_2e8);
      uVar12 = CONCAT26(uStack_fa,
                        CONCAT15(uStack_fb,
                                 CONCAT14(uStack_fc,
                                          CONCAT13(uStack_fd,
                                                   CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))
                                                  ))));
      uStack_1f8 = CONCAT22(uStack_ea,uStack_ec);
      local_200 = CONCAT22(uStack_f2,uStack_f4);
      uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
      uStack_1f4 = (undefined1)uStack_e8;
      uStack_1f3 = (undefined2)(uStack_e8 >> 8);
      uStack_1f1 = (undefined1)(uStack_e8 >> 0x18);
      uStack_1fc = (uint)(CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_200))) >>
                         0x20);
      uStack_1f0 = uStack_e4;
      if (uVar12 == 0xffffffffffffffff) {
LAB_007f04f8:
        *(uint *)(param_1 + 1) = uVar6;
        *(ulong *)((long)param_1 + 0x14) =
             CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
        *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_1fc,local_200);
        *(uint *)((long)param_1 + 0x1c) = uStack_1f0;
        *param_1 = -1;
        return;
      }
      param_2 = (long *)(uVar12 >> 8);
      lVar7 = -0x7ffffffffffffff7;
      uStack_1b4 = (uint)(CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)))
                         >> 0x20);
      uStack_1bc = uStack_1fc;
      uVar10 = 10;
      local_1b0 = uStack_e4;
      uStack_1a4 = uStack_d8;
      local_1a0 = uStack_d4;
      uStack_1ac = uStack_e0;
      uStack_1a8 = uStack_dc;
      uVar8 = (ulong)uVar6;
      local_90 = extraout_x14_05;
      puVar15 = (ushort *)(uVar12 >> 0x10);
      uVar13 = extraout_w13_04;
      in_w17 = extraout_w17_05;
      local_1c0 = local_200;
      uStack_1b8 = uStack_1f8;
      uStack_96 = unaff_w22;
      local_b8 = extraout_w1_05;
      sStack_98 = unaff_w23;
      uStack_b4 = extraout_w16_05;
    }
    else {
      <rustls::msgs::handshake::CertificateRequestPayload_as_rustls::msgs::codec::Codec>::read
                (&local_100,&local_2e8);
      uVar12 = CONCAT26(uStack_fa,
                        CONCAT15(uStack_fb,
                                 CONCAT14(uStack_fc,
                                          CONCAT13(uStack_fd,
                                                   CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))
                                                  ))));
      uStack_1f8 = CONCAT22(uStack_ea,uStack_ec);
      local_200 = CONCAT22(uStack_f2,uStack_f4);
      uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
      uStack_1f4 = (undefined1)uStack_e8;
      uStack_1f3 = (undefined2)(uStack_e8 >> 8);
      uStack_1f1 = (undefined1)(uStack_e8 >> 0x18);
      uStack_1fc = (uint)(CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_200))) >>
                         0x20);
      uStack_1f0 = uStack_e4;
      if (uVar12 == 0xffffffffffffffff) goto LAB_007f04f8;
      param_2 = (long *)(uVar12 >> 8);
      uStack_1b4 = (uint)(CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)))
                         >> 0x20);
      uStack_1bc = uStack_1fc;
      lVar7 = -0x7ffffffffffffff8;
      uVar10 = 10;
      local_1b0 = uStack_e4;
      uStack_1a4 = uStack_d8;
      local_1a0 = uStack_d4;
      uStack_1ac = uStack_e0;
      uStack_1a8 = uStack_dc;
      uStack_194 = uStack_c8;
      uStack_190 = uStack_c4;
      uStack_19c = uStack_d0;
      uStack_198 = local_cc;
      uVar8 = (ulong)uVar6;
      local_90 = extraout_x14_10;
      puVar15 = (ushort *)(uVar12 >> 0x10);
      uVar13 = extraout_w13_08;
      in_w17 = uStack_be;
      local_1c0 = local_200;
      uStack_1b8 = uStack_1f8;
      uStack_96 = unaff_w22;
      local_b8 = sStack_c0;
      sStack_98 = unaff_w23;
      uStack_b4 = uStack_bc;
    }
    break;
  case 0xb:
    if (uVar6 == 0) {
      uVar10 = 0xb;
      lVar7 = -0x7ffffffffffffff5;
      uVar8 = 9;
      local_90 = uVar14;
      puVar15 = &switchD_007efe38::switchdataD_002f6a2e;
      uStack_96 = unaff_w22;
      local_b8 = param_3;
      sStack_98 = unaff_w23;
      uStack_b4 = in_w16;
      break;
    }
    lVar7 = 0xf;
    pcVar9 = "ServerHelloDone";
    *(undefined1 *)(param_1 + 1) = 0xf;
    goto LAB_007efce4;
  case 0xc:
    <rustls::verify::DigitallySignedStruct_as_rustls::msgs::codec::Codec>::read
              (&local_100,&local_2e8);
    uVar12 = CONCAT26(uStack_fa,
                      CONCAT15(uStack_fb,
                               CONCAT14(uStack_fc,
                                        CONCAT13(uStack_fd,
                                                 CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))))
                              ));
    uStack_1f8 = CONCAT22(uStack_ea,uStack_ec);
    local_200 = CONCAT22(uStack_f2,uStack_f4);
    uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
    uStack_1f4 = (undefined1)uStack_e8;
    uStack_1f3 = (undefined2)(uStack_e8 >> 8);
    uStack_1f1 = (undefined1)(uStack_e8 >> 0x18);
    uStack_1fc = (uint)(CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_200))) >> 0x20
                       );
    uStack_1f0 = uStack_e4;
    if (uVar12 == 0xffffffffffffffff) {
LAB_007f0390:
      *(uint *)(param_1 + 1) = uVar6;
      *(ulong *)((long)param_1 + 0x14) =
           CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_1fc,local_200);
      *(uint *)((long)param_1 + 0x1c) = uStack_1f0;
      *param_1 = -1;
      return;
    }
    uStack_1b4 = (uint)(CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8))) >>
                       0x20);
    lVar7 = -0x7ffffffffffffff6;
    uVar10 = 0xc;
    local_90 = extraout_x14;
    in_w17 = extraout_w17;
    uVar13 = extraout_w13;
    local_b8 = extraout_w1;
    uStack_b4 = extraout_w16;
    goto LAB_007f053c;
  case 0xd:
    param_2 = (long *)0xff;
    uStack_1b8 = 0;
    lVar7 = -0x7ffffffffffffff3;
    uVar12 = 0xff;
    uVar10 = 0xd;
    local_90 = uVar14;
    puVar15 = (ushort *)0xffffffffffff;
    local_2d8 = local_2e0;
    local_1c0 = uVar11;
    uStack_1bc = uVar13;
    uStack_96 = unaff_w22;
    local_b8 = param_3;
    sStack_98 = unaff_w23;
    uStack_b4 = in_w16;
    break;
  case 0xe:
    param_2 = (long *)0xff;
    uStack_1b8 = 0;
    lVar7 = -0x7fffffffffffffee;
    uVar12 = 0xff;
    uVar10 = 0xe;
    local_90 = uVar14;
    puVar15 = (ushort *)0xffffffffffff;
    local_2d8 = local_2e0;
    local_1c0 = uVar11;
    uStack_1bc = uVar13;
    uStack_96 = unaff_w22;
    local_b8 = param_3;
    sStack_98 = unaff_w23;
    uStack_b4 = in_w16;
    break;
  case 0x10:
    <rustls::msgs::handshake::CertificateStatus_as_rustls::msgs::codec::Codec>::read
              (&local_100,&local_2e8);
    local_200 = CONCAT22(uStack_ea,uStack_ec);
    uVar12 = CONCAT26(uStack_f2,
                      CONCAT24(uStack_f4,CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8))));
    uVar10 = CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0));
    uVar8 = (ulong)uVar10;
    uStack_1fc = uStack_e8;
    uStack_1f8 = uStack_e4;
    if ((local_100 & 1) != 0) goto LAB_007f01c8;
    param_2 = (long *)(uVar12 >> 8);
    uVar13 = 2;
    uStack_1bc = uStack_e8;
    puVar15 = (ushort *)(uVar12 >> 0x10);
    lVar7 = -0x7fffffffffffffed;
    uStack_1b8 = uStack_e4;
    uVar10 = 0x10;
    local_90 = extraout_x14_03;
    in_w17 = extraout_w17_03;
    local_1c0 = local_200;
    uStack_96 = unaff_w22;
    local_b8 = extraout_w1_03;
    sStack_98 = unaff_w23;
    uStack_b4 = extraout_w16_03;
    break;
  case 0x11:
    <rustls::msgs::enums::KeyUpdateRequest_as_rustls::msgs::codec::Codec>::read
              (&local_100,&local_2e8);
    uVar12 = (ulong)bStack_ff;
    param_2 = (long *)(ulong)bStack_fe;
    if (local_100 != 0xff) {
      uVar4 = CONCAT23(uStack_fa,CONCAT12(uStack_fb,CONCAT11(uStack_fc,uStack_fd)));
      *(byte *)(param_1 + 1) = local_100;
      *(byte *)((long)param_1 + 9) = bStack_ff;
      local_200 = (undefined4)uVar4;
      uStack_1fc = (uint)(CONCAT26(uStack_f7,CONCAT15(uStack_f8,uVar4)) >> 0x20);
      uStack_1f3 = (undefined2)CONCAT21(uStack_ef,local_f0);
      uStack_1f1 = (undefined1)((ushort)uStack_ef >> 8);
      *(byte *)((long)param_1 + 10) = bStack_fe;
      *(ulong *)((long)param_1 + 0x13) =
           CONCAT17(uStack_1f1,
                    CONCAT25(uStack_1f3,CONCAT23(uStack_f2,CONCAT21(uStack_f4,uStack_f5))));
      *(ulong *)((long)param_1 + 0xb) = CONCAT44(uStack_1fc,local_200);
      param_1[3] = CONCAT26(uStack_ea,
                            CONCAT24(uStack_ec,CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0))));
      *param_1 = -1;
      return;
    }
    uVar10 = 0x11;
    lVar7 = -0x7fffffffffffffef;
    uVar8 = extraout_x9;
    local_90 = extraout_x14_04;
    puVar15 = extraout_x15;
    uVar13 = extraout_w13_03;
    in_w17 = extraout_w17_04;
    uStack_96 = unaff_w22;
    local_b8 = extraout_w1_04;
    sStack_98 = unaff_w23;
    uStack_b4 = extraout_w16_04;
    break;
  case 0x12:
    <rustls::msgs::handshake::CompressedCertificatePayload_as_rustls::msgs::codec::Codec>::read
              (&local_100,&local_2e8);
    uVar12 = CONCAT26(uStack_fa,
                      CONCAT15(uStack_fb,
                               CONCAT14(uStack_fc,
                                        CONCAT13(uStack_fd,
                                                 CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))))
                              ));
    uStack_1f8 = CONCAT22(uStack_ea,uStack_ec);
    local_200 = CONCAT22(uStack_f2,uStack_f4);
    uVar6 = CONCAT13(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
    uStack_1f4 = (undefined1)uStack_e8;
    uStack_1f3 = (undefined2)(uStack_e8 >> 8);
    uStack_1f1 = (undefined1)(uStack_e8 >> 0x18);
    uStack_1fc = (uint)(CONCAT17(uStack_ed,CONCAT25(uStack_ef,CONCAT14(local_f0,local_200))) >> 0x20
                       );
    uStack_1f0 = uStack_e4;
    if (uVar12 == 0xfffffffffffffffe) goto LAB_007f0390;
    uStack_1b4 = (uint)(CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8))) >>
                       0x20);
    lVar7 = -0x7ffffffffffffffa;
    uVar10 = 0x12;
    local_90 = extraout_x14_07;
    in_w17 = extraout_w17_06;
    uVar13 = extraout_w13_05;
    local_b8 = extraout_w1_06;
    uStack_b4 = extraout_w16_06;
LAB_007f053c:
    uVar8 = (ulong)uVar6;
    puVar15 = (ushort *)(uVar12 >> 0x10);
    param_2 = (long *)(uVar12 >> 8);
    uStack_1f0 = uStack_e4;
    local_1c0 = local_200;
    uStack_1bc = uStack_1fc;
    uStack_1b8 = uStack_1f8;
    local_1b0 = uStack_e4;
    uStack_96 = unaff_w22;
    sStack_98 = unaff_w23;
    break;
  case 0x13:
    pcVar9 = "MessageHash";
    *(undefined1 *)(param_1 + 1) = 0x10;
    lVar7 = 0xb;
LAB_007efce4:
    param_1[2] = (long)pcVar9;
    param_1[3] = lVar7;
LAB_007efdbc:
    *param_1 = -1;
    return;
  }
  local_100 = (byte)lVar7;
  bStack_ff = (byte)((ulong)lVar7 >> 8);
  bStack_fe = (byte)((ulong)lVar7 >> 0x10);
  uStack_fd = (undefined1)((ulong)lVar7 >> 0x18);
  uStack_fc = (undefined1)((ulong)lVar7 >> 0x20);
  uStack_fb = (undefined1)((ulong)lVar7 >> 0x28);
  uStack_fa = (undefined2)((ulong)lVar7 >> 0x30);
  local_f0 = (undefined1)uVar8;
  uStack_ed = (undefined1)(uVar8 >> 0x18);
  uStack_ef = (undefined2)(uVar8 >> 8);
  uStack_ec = (undefined2)local_1c0;
  uStack_ea = (undefined2)((uint)local_1c0 >> 0x10);
  sStack_c0 = (short)uStack_194;
  uStack_be = (ushort)(uStack_194 >> 0x10);
  if (local_2d8 < local_2e0) {
    local_68 = &local_2ec;
    uStack_f7 = (ushort)((ulong)((long)puVar15 << 0x10) >> 8) | (ushort)param_2 & 0xff;
    uStack_e4 = uStack_1b8;
    uStack_e0 = uStack_1b4;
    uStack_e8 = uStack_1bc;
    uStack_dc = local_1b0;
    local_a0 = local_2a0;
    uStack_f8 = (undefined1)uVar12;
    uStack_f5 = (undefined1)((ulong)puVar15 >> 8);
    uStack_f4 = (undefined2)((ulong)puVar15 >> 0x10);
    uStack_f2 = (undefined2)((ulong)puVar15 >> 0x20);
    uStack_c4 = uStack_198;
    local_cc = local_1a0;
    uStack_bc = uStack_190;
    *(undefined1 *)(param_1 + 1) = 0xf;
    param_1[2] = (long)"HandshakeMessagePayload";
    param_1[3] = 0x17;
    lStack_a8 = lStack_2a8;
    lStack_b0 = local_2b0;
    lStack_80 = lStack_2c8;
    lStack_88 = local_2d0;
    lStack_70 = lStack_2b8;
    local_78 = local_2c0;
    *param_1 = -1;
    uStack_b6 = in_w17;
    uStack_94 = uVar13;
    FUN_007eea3c(&local_100);
  }
  else {
    param_1[1] = (long)puVar15 << 0x10 | ((ulong)param_2 & 0xff) << 8 | uVar12 & 0xff;
    *param_1 = lVar7;
    param_1[3] = CONCAT44(uStack_1b8,uStack_1bc);
    param_1[2] = CONCAT26(uStack_ea,CONCAT24(uStack_ec,(int)uVar8));
    param_1[9] = CONCAT44(uStack_b4,CONCAT22(in_w17,local_b8));
    param_1[8] = CONCAT44(uStack_190,uStack_194);
    param_1[0xb] = lStack_2a8;
    param_1[10] = local_2b0;
    param_1[5] = CONCAT44(uStack_1a8,uStack_1ac);
    param_1[4] = CONCAT44(local_1b0,uStack_1b4);
    param_1[7] = CONCAT44(uStack_198,uStack_19c);
    param_1[6] = CONCAT44(local_1a0,uStack_1a4);
    param_1[0x12] = lStack_2b8;
    *(char *)(param_1 + 0x13) = (char)uVar10;
    param_1[0xf] = local_2d0;
    param_1[0xe] = local_90;
    param_1[0x11] = local_2c0;
    param_1[0x10] = lStack_2c8;
    param_1[0xd] = CONCAT44(uVar13,CONCAT22(uStack_96,sStack_98));
    param_1[0xc] = local_2a0;
    *(char *)((long)param_1 + 0x99) = cVar2;
  }
  return;
}


// ===== 007f0930  FUN_007f0930 =====

void FUN_007f0930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007f096c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007f0970 + (ulong)(byte)(&DAT_002f6a56)[*(byte *)(param_1 + 0x98)] * 4))();
  return;
}


// ===== 007f0f6c  FUN_007f0f6c =====

void FUN_007f0f6c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  long local_58;
  undefined1 *local_50;
  long local_48;
  
  local_70 = 0;
  uStack_68 = 1;
  local_60 = 0;
  local_58 = -0x8000000000000000;
                    /* try { // try from 007f0f9c to 007f0fa7 has its CatchHandler @ 007f1068 */
  FUN_007f0930(param_2,&local_70,&local_58);
  uVar4 = local_60;
  uVar3 = uStack_68;
  uVar2 = local_70;
  if (((*param_2 < 0) || (param_2[8] == 0)) ||
     (lVar5 = param_2[7] + param_2[8] * 0x40, *(long *)(lVar5 + -0x40) != -0x7ffffffffffffff7)) {
    lVar5 = 0;
  }
  else {
    local_48 = 0;
    local_58 = 0;
    local_50 = &DAT_00000001;
                    /* try { // try from 007f0fec to 007f0ff3 has its CatchHandler @ 007f1040 */
    FUN_008033e8(lVar5 + -0x20,&local_58);
    lVar5 = local_48;
    if (local_58 != 0) {
      free(local_50);
    }
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar1 = uVar4 - lVar5;
  if (uVar4 <= uVar4 - lVar5) {
    uVar1 = uVar4;
  }
  param_1[2] = uVar1;
  return;
}


// ===== 007f1088  FUN_007f1088 =====

undefined8 FUN_007f1088(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48 [2];
  undefined8 local_38;
  
  local_48[0] = 0;
  local_38 = 0;
  if ((*(ulong *)(param_1 + 0x48) & 0x7ffffffffffffff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007f10d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&LAB_007f10d8 +
                      (ulong)(byte)(&DAT_002f6a98)[*(ushort *)(*(long *)(param_1 + 0x40) + 0x18)] *
                      4))();
    return uVar1;
  }
  FUN_0084f3f4(local_48);
  return 0;
}


// ===== 007f1200  FUN_007f1200 =====

void FUN_007f1200(size_t *param_1,undefined8 param_2,long param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *__dest;
  undefined1 *__dest_00;
  undefined2 extraout_w1;
  undefined2 extraout_w1_00;
  uint extraout_w1_01;
  size_t sVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined2 *local_80;
  undefined *local_78;
  void *local_70;
  size_t sStack_68;
  undefined2 local_44;
  undefined2 local_42;
  
  pcVar5 = *(code **)(param_3 + 0x48);
  uVar2 = (*pcVar5)();
  uVar2 = 1 << (ulong)(uVar2 & 0x1f);
  if (((uVar2 & 0x7c1f) == 0) && (((uVar2 & 0x3e0) != 0 || ((extraout_w1_01 & 0xff00) == 0x100)))) {
    (**(code **)(param_3 + 0x40))(&local_80,param_2);
    if (local_80 == (undefined2 *)0x0) {
      local_44 = (*pcVar5)(param_2);
      local_80 = &local_44;
      local_78 = PTR_fmt_00b00fd0;
      local_42 = extraout_w1_00;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002a205e,&local_80,&PTR_s__root__cargo_registry_src_index__00ae37e0);
    }
    if ((long)local_78 < 0) {
      uVar7 = 0;
LAB_007f12ac:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar7,local_78);
    }
    if (local_78 == (undefined *)0x0) {
      puVar3 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 1;
      puVar3 = (undefined1 *)FUN_004b25a4(local_78,1);
      if (puVar3 == (undefined1 *)0x0) goto LAB_007f12ac;
      memcpy(puVar3,local_80,(size_t)local_78);
    }
    if ((long)sStack_68 < 0) {
      uVar7 = 0;
LAB_007f1324:
                    /* try { // try from 007f1324 to 007f132f has its CatchHandler @ 007f1490 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar7,sStack_68);
    }
    if (sStack_68 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 1;
      __dest = (undefined1 *)FUN_004b25a4(sStack_68,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007f1324;
      memcpy(__dest,local_70,sStack_68);
    }
                    /* try { // try from 007f13c4 to 007f13e3 has its CatchHandler @ 007f1470 */
    auVar8 = (**(code **)(param_3 + 0x38))(param_2);
    sVar4 = auVar8._8_8_;
    if ((long)sVar4 < 0) {
      uVar7 = 0;
LAB_007f13d8:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar7,sVar4);
    }
    if (sVar4 == 0) {
      __dest_00 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 1;
      __dest_00 = (undefined1 *)FUN_004b25a4(sVar4,1);
      if (__dest_00 == (undefined1 *)0x0) goto LAB_007f13d8;
      memcpy(__dest_00,auVar8._0_8_,sVar4);
    }
    *param_1 = (size_t)local_78;
    param_1[1] = (size_t)puVar3;
    param_1[2] = (size_t)local_78;
    param_1[3] = sStack_68;
    param_1[4] = (size_t)__dest;
    param_1[5] = sStack_68;
    param_1[6] = sVar4;
    param_1[7] = (size_t)__dest_00;
    param_1[8] = sVar4;
  }
  else {
    pcVar6 = *(code **)(param_3 + 0x38);
    uVar1 = (*pcVar5)(param_2);
    auVar8 = (*pcVar6)(param_2);
    sVar4 = auVar8._8_8_;
    if ((long)sVar4 < 0) {
      uVar7 = 0;
LAB_007f1274:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar7,sVar4);
    }
    if (sVar4 == 0) {
      puVar3 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 1;
      puVar3 = (undefined1 *)FUN_004b25a4(sVar4,1);
      if (puVar3 == (undefined1 *)0x0) goto LAB_007f1274;
      memcpy(puVar3,auVar8._0_8_,sVar4);
    }
    param_1[2] = (size_t)puVar3;
    param_1[3] = sVar4;
    *(undefined1 *)((long)param_1 + 0x24) = 2;
    *(undefined2 *)(param_1 + 4) = uVar1;
    *(undefined2 *)((long)param_1 + 0x22) = extraout_w1;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = sVar4;
  }
  return;
}


// ===== 007f14b0  FUN_007f14b0 =====

void FUN_007f14b0(long *param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  
  if (*param_1 == -1) {
    bVar3 = *(byte *)((long)param_1 + 0x24);
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        uVar7 = 1;
        lVar5 = param_2[2];
        if (lVar5 != *param_2) goto LAB_007f1654;
      }
      else {
        uVar7 = 2;
        lVar5 = param_2[2];
        if (lVar5 != *param_2) goto LAB_007f1654;
      }
    }
    else if (bVar3 == 2) {
      uVar7 = 3;
      lVar5 = param_2[2];
      if (lVar5 != *param_2) goto LAB_007f1654;
    }
    else {
      uVar7 = *(undefined1 *)((long)param_1 + 0x25);
      lVar5 = param_2[2];
      if (lVar5 != *param_2) goto LAB_007f1654;
    }
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
LAB_007f1654:
    uVar4 = *(ushort *)(param_1 + 4);
    *(undefined1 *)(param_2[1] + lVar5) = uVar7;
    param_2[2] = lVar5 + 1;
                    /* WARNING: Could not recover jumptable at 0x007f1680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_007f1684 + (ulong)(byte)(&DAT_002f6ac3)[uVar4] * 4))();
    return;
  }
  lVar5 = param_2[2];
  lVar9 = *param_2;
  pvVar1 = (void *)param_1[1];
  uVar2 = param_1[2];
  if ((ulong)(lVar9 - lVar5) < 2) {
    FUN_00874c84(param_2,lVar5,2,1,1);
    lVar5 = param_2[2];
    lVar9 = *param_2;
  }
  lVar6 = lVar5 + 2;
  lVar8 = param_2[1];
  param_2[2] = lVar6;
  *(ushort *)(lVar8 + lVar5) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar9 - lVar6) < uVar2) {
    FUN_00874c84(param_2,lVar6,uVar2,1,1);
    lVar8 = param_2[1];
    lVar6 = param_2[2];
    lVar9 = *param_2;
LAB_007f1518:
    memcpy((void *)(lVar8 + lVar6),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f1518;
  lVar6 = lVar6 + uVar2;
  pvVar1 = (void *)param_1[4];
  uVar2 = param_1[5];
  param_2[2] = lVar6;
  if ((ulong)(lVar9 - lVar6) < 2) {
    FUN_00874c84(param_2,lVar6,2,1,1);
    lVar8 = param_2[1];
    lVar6 = param_2[2];
    lVar9 = *param_2;
  }
  lVar5 = lVar6 + 2;
  param_2[2] = lVar5;
  *(ushort *)(lVar8 + lVar6) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar9 - lVar5) < uVar2) {
    FUN_00874c84(param_2,lVar5,uVar2,1,1);
    lVar8 = param_2[1];
    lVar5 = param_2[2];
LAB_007f1560:
    memcpy((void *)(lVar8 + lVar5),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f1560;
  lVar9 = *param_2;
  lVar5 = lVar5 + uVar2;
  pvVar1 = (void *)param_1[7];
  uVar2 = param_1[8];
  param_2[2] = lVar5;
  if ((ulong)(lVar9 - lVar5) < 2) {
    FUN_00874c84(param_2,lVar5,2,1,1);
    lVar5 = param_2[2];
    lVar9 = *param_2;
  }
  lVar6 = lVar5 + 2;
  lVar8 = param_2[1];
  param_2[2] = lVar6;
  *(ushort *)(lVar8 + lVar5) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar9 - lVar6) < uVar2) {
    FUN_00874c84(param_2,lVar6,uVar2,1,1);
    lVar8 = param_2[1];
    lVar6 = param_2[2];
  }
  else if (uVar2 == 0) goto LAB_007f15bc;
  memcpy((void *)(lVar8 + lVar6),pvVar1,uVar2);
LAB_007f15bc:
  param_2[2] = lVar6 + uVar2;
  return;
}


// ===== 007f18d4  <rustls::msgs::handshake::[1f]::rustls::msgs::handshake::ServerKeyExchange>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::[1f]::rustls::msgs::handshake::ServerKeyExchange>::encode */

void __rustcall
<rustls::msgs::handshake::[1f]::rustls::msgs::handshake::ServerKeyExchange>::encode
          (long param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  
  if (*(long *)(param_1 + 0x20) == -1) {
    bVar3 = *(byte *)(param_1 + 0x44);
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        uVar9 = 1;
        lVar5 = param_2[2];
        if (lVar5 != *param_2) goto LAB_007f1a6c;
      }
      else {
        uVar9 = 2;
        lVar5 = param_2[2];
        if (lVar5 != *param_2) goto LAB_007f1a6c;
      }
    }
    else if (bVar3 == 2) {
      uVar9 = 3;
      lVar5 = param_2[2];
      if (lVar5 != *param_2) goto LAB_007f1a6c;
    }
    else {
      uVar9 = *(undefined1 *)(param_1 + 0x45);
      lVar5 = param_2[2];
      if (lVar5 != *param_2) goto LAB_007f1a6c;
    }
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
LAB_007f1a6c:
    *(undefined1 *)(param_2[1] + lVar5) = uVar9;
    uVar4 = *(ushort *)(param_1 + 0x40);
    param_2[2] = lVar5 + 1;
                    /* WARNING: Could not recover jumptable at 0x007f1a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_007f1a9c + (ulong)(byte)(&DAT_002f6ad3)[uVar4] * 4))();
    return;
  }
  lVar5 = param_2[2];
  lVar8 = *param_2;
  pvVar1 = *(void **)(param_1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x30);
  if ((ulong)(lVar8 - lVar5) < 2) {
    FUN_00874c84(param_2,lVar5,2,1,1);
    lVar5 = param_2[2];
    lVar8 = *param_2;
  }
  lVar6 = lVar5 + 2;
  lVar7 = param_2[1];
  param_2[2] = lVar6;
  *(ushort *)(lVar7 + lVar5) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar8 - lVar6) < uVar2) {
    FUN_00874c84(param_2,lVar6,uVar2,1,1);
    lVar7 = param_2[1];
    lVar6 = param_2[2];
LAB_007f193c:
    memcpy((void *)(lVar7 + lVar6),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f193c;
  lVar5 = *param_2;
  lVar6 = lVar6 + uVar2;
  pvVar1 = *(void **)(param_1 + 0x40);
  uVar2 = *(ulong *)(param_1 + 0x48);
  param_2[2] = lVar6;
  if ((ulong)(lVar5 - lVar6) < 2) {
    FUN_00874c84(param_2,lVar6,2,1,1);
    lVar6 = param_2[2];
    lVar5 = *param_2;
  }
  lVar8 = lVar6 + 2;
  lVar7 = param_2[1];
  param_2[2] = lVar8;
  *(ushort *)(lVar7 + lVar6) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar5 - lVar8) < uVar2) {
    FUN_00874c84(param_2,lVar8,uVar2,1,1);
    lVar7 = param_2[1];
    lVar8 = param_2[2];
LAB_007f198c:
    memcpy((void *)(lVar7 + lVar8),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f198c;
  lVar5 = *param_2;
  lVar8 = lVar8 + uVar2;
  pvVar1 = *(void **)(param_1 + 0x58);
  uVar2 = *(ulong *)(param_1 + 0x60);
  param_2[2] = lVar8;
  if ((ulong)(lVar5 - lVar8) < 2) {
    FUN_00874c84(param_2,lVar8,2,1,1);
    lVar8 = param_2[2];
    lVar5 = *param_2;
  }
  lVar6 = lVar8 + 2;
  lVar7 = param_2[1];
  param_2[2] = lVar6;
  *(ushort *)(lVar7 + lVar8) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar5 - lVar6) < uVar2) {
    FUN_00874c84(param_2,lVar6,uVar2,1,1);
    lVar7 = param_2[1];
    lVar6 = param_2[2];
  }
  else if (uVar2 == 0) goto LAB_007f19e8;
  memcpy((void *)(lVar7 + lVar6),pvVar1,uVar2);
LAB_007f19e8:
  param_2[2] = lVar6 + uVar2;
  <rustls::verify::DigitallySignedStruct_as_rustls::msgs::codec::Codec>::encode(param_1,param_2);
  return;
}


// ===== 007f1cf0  FUN_007f1cf0 =====

void FUN_007f1cf0(undefined8 *param_1,long *param_2,int param_3)

{
  void **ppvVar1;
  long lVar2;
  void *__ptr;
  void *__ptr_00;
  void *pvVar3;
  long lVar4;
  long local_198;
  ulong local_190;
  ulong local_188;
  void *local_180;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined6 uStack_176;
  undefined2 local_16e;
  undefined4 local_16c;
  undefined2 local_168;
  undefined2 local_166;
  undefined4 uStack_164;
  long local_160;
  void *apvStack_158 [2];
  long lStack_148;
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long local_118;
  void *pvStack_110;
  void *local_108;
  long lStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  void *pvStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  void *local_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  void *local_88;
  undefined8 local_80;
  void *pvStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*param_2 == -1) {
    local_198 = param_2[2];
    local_190 = param_2[3];
    local_188 = 0;
    if (param_3 == 0) {
      <rustls::msgs::handshake::ServerDhParams_as_rustls::msgs::codec::Codec>::read
                (&local_a8,&local_198);
      lVar2 = CONCAT26(uStack_a2,
                       CONCAT24(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      if (lVar2 == -1) goto LAB_007f1d20;
      lVar4 = CONCAT44(uStack_8c,CONCAT22(uStack_8e,uStack_90));
      pvVar3 = (void *)CONCAT62(uStack_96,CONCAT11(uStack_97,uStack_98));
      pvStack_c8 = pvStack_78;
      local_d0 = local_80;
      uStack_b8 = uStack_68;
      local_c0 = local_70;
      __ptr = local_88;
      __ptr_00 = local_a0;
    }
    else {
      <rustls::msgs::handshake::ServerEcdhParams_as_rustls::msgs::codec::Codec>::read();
      __ptr_00 = (void *)CONCAT26(uStack_a2,
                                  CONCAT24(uStack_a4,
                                           CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      if (__ptr_00 == (void *)0xffffffffffffffff) goto LAB_007f1d20;
      lVar4 = CONCAT62(uStack_96,CONCAT11(uStack_97,uStack_98));
      lVar2 = -1;
      __ptr = (void *)CONCAT44(uStack_8c,CONCAT22(uStack_8e,uStack_90));
      pvVar3 = local_a0;
    }
    pvStack_e8 = pvStack_c8;
    uStack_f0 = local_d0;
    uStack_d8 = uStack_b8;
    uStack_e0 = local_c0;
                    /* try { // try from 007f1dd0 to 007f1e4b has its CatchHandler @ 007f1f7c */
    local_118 = lVar2;
    pvStack_110 = __ptr_00;
    local_108 = pvVar3;
    lStack_100 = lVar4;
    local_f8 = __ptr;
    <rustls::enums::SignatureScheme_as_rustls::msgs::codec::Codec>::read(&local_a8,&local_198);
    if (((local_a8 != 0xff) ||
        (<rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read
                   (&local_a8,pvVar3,&local_198), (local_a8 & 1) != 0)) ||
       (local_a0 == (void *)0xffffffffffffffff)) {
      *param_1 = 0xffffffffffffffff;
      if (lVar2 == -1) {
        ppvVar1 = &pvStack_110;
      }
      else {
        ppvVar1 = &pvStack_e8;
        if (lVar2 != 0) {
          free(__ptr_00);
        }
        pvStack_110 = pvStack_e8;
        if (lVar4 != 0) {
          free(__ptr);
          pvStack_110 = pvStack_e8;
        }
      }
      if (pvStack_110 == (void *)0x0) {
        return;
      }
      free(ppvVar1[1]);
      return;
    }
    uStack_178 = uStack_98;
    uStack_177 = uStack_97;
    local_16e = uStack_8e;
    uStack_176 = uStack_96;
    lStack_148 = lStack_100;
    apvStack_158[1] = local_108;
    uStack_138 = uStack_f0;
    local_140 = local_f8;
    local_16c = uStack_8c;
    uStack_128 = uStack_e0;
    local_130 = pvStack_e8;
    local_168 = uStack_a6;
    local_166 = uStack_a4;
    local_120 = uStack_d8;
    apvStack_158[0] = pvStack_110;
    local_160 = local_118;
    local_180 = local_a0;
    if (local_190 <= local_188) {
      param_1[0xc] = uStack_d8;
      param_1[9] = uStack_f0;
      param_1[8] = local_f8;
      param_1[0xb] = uStack_e0;
      param_1[10] = pvStack_e8;
      param_1[1] = CONCAT62(uStack_96,CONCAT11(uStack_97,uStack_98));
      *param_1 = local_a0;
      param_1[3] = CONCAT44(uStack_164,CONCAT22(uStack_a4,uStack_a6));
      param_1[2] = CONCAT44(uStack_8c,CONCAT22(uStack_8e,uStack_90));
      param_1[5] = pvStack_110;
      param_1[4] = local_118;
      param_1[7] = lStack_100;
      param_1[6] = local_108;
      return;
    }
    if (local_118 == -1) {
      lVar2 = 8;
    }
    else {
      if (local_118 != 0) {
        free(pvStack_110);
      }
      if (lStack_148 != 0) {
        free(local_140);
      }
      lVar2 = 0x30;
    }
    if (*(long *)((long)&local_160 + lVar2) != 0) {
      free(*(void **)((long)apvStack_158 + lVar2));
    }
    if (local_a0 != (void *)0x0) {
      free((void *)CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178)));
    }
  }
LAB_007f1d20:
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 007f1f90  <rustls::msgs::handshake::[1m]::rustls::msgs::handshake::DistinguishedName>::in_sequence =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::[1m]::rustls::msgs::handshake::DistinguishedName>::in_sequence */

void __rustcall
<rustls::msgs::handshake::[1m]::rustls::msgs::handshake::DistinguishedName>::in_sequence
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0085dd78(param_1,0x30,param_2,param_3,1,0);
  return;
}


// ===== 007f1fac  FUN_007f1fac =====

undefined8 *
FUN_007f1fac(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,long *param_6)

{
  ushort *puVar1;
  bool bVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  ushort *puVar6;
  uint uVar7;
  long lVar8;
  ushort *__n;
  ushort *puVar9;
  undefined1 *__dest;
  undefined8 uVar10;
  long *plVar11;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar13 = param_2._8_8_;
  uVar12 = param_2._0_8_;
  uVar10 = param_1._8_8_;
  uStack_60 = param_1._0_8_;
  plVar11 = (long *)param_3[4];
  puVar9 = (ushort *)&DAT_00000019;
  local_58 = 0;
  local_48 = 0;
  __n = (ushort *)((long)plVar11 + 0x1a);
  puVar6 = (ushort *)(param_3[5] << 5);
  do {
    puVar4 = puVar6;
    if (puVar4 == (ushort *)0x0) break;
    lVar5 = *plVar11;
    puVar6 = (ushort *)(plVar11 + 3);
    plVar11 = plVar11 + 4;
    bVar2 = lVar5 == -2;
    uVar7 = 0x19;
    if (!bVar2) {
      uVar7 = (uint)*puVar6;
    }
    uVar3 = (ulong)uVar7;
    puVar6 = (ushort *)(uVar3 & 0x3f);
    lVar8 = (ulong)*(byte *)((long)puVar6 + 0x2f6ae3) * 4 + 0x7f2014;
    uStack_50 = uVar12;
    puVar1 = (ushort *)(lVar5 + 2);
    switch(puVar6) {
    case (ushort *)0x11:
    case (ushort *)0x2b:
      uVar3 = 0x12;
      break;
    case (ushort *)0x12:
      uVar3 = 0x13;
      break;
    case (ushort *)0x13:
    case (ushort *)0x3e:
      uVar3 = 0x14;
      break;
    case (ushort *)0x14:
      uVar3 = 0x15;
      break;
    case (ushort *)0x15:
      uVar3 = 0x17;
      break;
    case (ushort *)0x16:
      uVar3 = 0x1b;
      break;
    case (ushort *)0x17:
      uVar3 = 0x23;
      break;
    case (ushort *)0x18:
      uVar3 = 0x29;
    case (ushort *)0x31:
      break;
    case (ushort *)0x19:
      uVar3 = 0x2a;
    case (ushort *)0x30:
      break;
    case (ushort *)0x1a:
      uVar3 = 0x2b;
      break;
    case (ushort *)0x1b:
      uVar3 = 0x2c;
      break;
    case (ushort *)0x1c:
      uVar3 = 0x2d;
      break;
    case (ushort *)0x1d:
    case (ushort *)0x37:
      uVar3 = 0x2e;
      break;
    case (ushort *)0x1e:
      uVar3 = 0x2f;
      break;
    case (ushort *)0x1f:
    case (ushort *)0x39:
      uVar3 = 0x30;
      break;
    case (ushort *)0x20:
      uVar3 = 0x31;
      break;
    case (ushort *)0x21:
      uVar3 = 0x32;
    case (ushort *)0x32:
      break;
    case (ushort *)0x22:
      uVar3 = 0x33;
    case (ushort *)0x2e:
      break;
    case (ushort *)0x23:
    case (ushort *)0x38:
      uVar3 = 0x39;
      break;
    case (ushort *)0x24:
      uVar3 = 0x3374;
    case (ushort *)0x2d:
      break;
    case (ushort *)0x25:
      uVar3 = 0x754f;
      break;
    case (ushort *)0x26:
      uVar3 = 0xff01;
      break;
    case (ushort *)0x27:
      uVar3 = 0xffa5;
      break;
    case (ushort *)0x28:
      uVar3 = 0xfe0d;
    case (ushort *)0x33:
      break;
    case (ushort *)0x29:
      uVar3 = 0xfd00;
      break;
    case (ushort *)0x2a:
      uVar3 = (ulong)*__n;
      break;
    case (ushort *)0x2f:
      goto switchD_007f2010_caseD_2f;
    case (ushort *)0x34:
      goto switchD_007f2010_caseD_34;
    case (ushort *)0x35:
      goto switchD_007f2010_caseD_35;
    case (ushort *)0x3a:
      local_58 = 0;
      uStack_60 = 0;
      local_48 = 0;
      uStack_50 = 0;
      param_3 = (undefined8 *)(**(code **)(uVar3 + 0x20))(param_3,&uStack_60,0x20);
      if (((ulong)param_3 & 1) != 0) {
        puVar6[0] = 1;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        return param_3;
      }
      lVar8 = 0x20;
      __n = puVar6;
      uVar10 = local_58;
      uVar13 = local_48;
    case (ushort *)0x3b:
      *(long *)(__n + 0x14) = lVar8;
      *(undefined8 *)(__n + 8) = uVar10;
      *(undefined8 *)(__n + 4) = uStack_60;
      *(undefined8 *)(__n + 0x10) = uVar13;
      *(undefined8 *)(__n + 0xc) = uStack_50;
      __n[0] = 0;
      __n[1] = 0;
      __n[2] = 0;
      __n[3] = 0;
      return param_3;
    case (ushort *)0x3c:
      goto switchD_007f2010_caseD_3c;
    case (ushort *)0x3d:
      goto switchD_007f2010_caseD_3d;
    case (ushort *)0x3f:
      puVar6 = (ushort *)param_6[1];
      puVar9 = (ushort *)param_6[2];
      __n = (ushort *)((long)puVar6 - (long)puVar9);
      if (puVar6 < puVar9) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (puVar9,puVar6,puVar6,&PTR_s__root__cargo_registry_src_index__00ae7c28);
      }
      plVar11 = (long *)*param_6;
      puVar1 = __n;
switchD_007f2010_caseD_3d:
      param_6[2] = (long)puVar6;
      if (-1 < (long)puVar1) {
        if (puVar6 == puVar9) {
          __dest = &DAT_00000001;
        }
        else {
switchD_007f2010_caseD_35:
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar10 = 1;
          __dest = (undefined1 *)FUN_004b25a4(__n,1);
          if (__dest == (undefined1 *)0x0) goto LAB_007f21e4;
          memcpy(__dest,(void *)((long)plVar11 + (long)puVar9),(size_t)__n);
        }
        *param_3 = __n;
        param_3[1] = __dest;
        param_3[2] = __n;
        *(short *)(param_3 + 3) = (short)uVar7;
        *(short *)((long)param_3 + 0x1a) = (short)param_5;
        return param_3;
      }
      uVar10 = 0;
LAB_007f21e4:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar10,__n);
    }
                    /* try { // try from 007f2014 to 007f201b has its CatchHandler @ 007f2128 */
    param_3 = (undefined8 *)FUN_0084e3e8(&local_58,uVar3);
    uStack_60 = extraout_d0;
    uVar10 = extraout_var;
switchD_007f2010_caseD_2f:
    __n = __n + 0x10;
    puVar6 = puVar4 + -0x10;
switchD_007f2010_caseD_34:
  } while (((ulong)param_3 & 1) == 0);
  bVar2 = puVar4 == (ushort *)0x0;
switchD_007f2010_caseD_3c:
  FUN_0084f3f4(&local_58);
  return (undefined8 *)(ulong)!bVar2;
}


// ===== 007f2140  <rustls::msgs::handshake::[5]::rustls::msgs::handshake::SessionId>::random =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::[5]::rustls::msgs::handshake::SessionId>::random */

void __rustcall
<rustls::msgs::handshake::[5]::rustls::msgs::handshake::SessionId>::random
          (undefined8 *param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar1 = (**(code **)(param_3 + 0x20))(param_2,&local_40,0x20);
  if ((uVar1 & 1) != 0) {
    *param_1 = 1;
    return;
  }
  param_1[5] = 0x20;
  param_1[2] = uStack_38;
  param_1[1] = local_40;
  param_1[4] = uStack_28;
  param_1[3] = uStack_30;
  *param_1 = 0;
  return;
}


// ===== 007f21b0  FUN_007f21b0 =====

void FUN_007f21b0(size_t *param_1,undefined2 param_2,undefined2 param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  undefined1 *__dest;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  __n = uVar1 - uVar2;
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae7c28);
  }
  lVar4 = *param_4;
  param_4[2] = uVar1;
  if ((long)__n < 0) {
    uVar3 = 0;
LAB_007f21e4:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,__n);
  }
  if (uVar1 == uVar2) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 1;
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) goto LAB_007f21e4;
    memcpy(__dest,(void *)(lVar4 + uVar2),__n);
  }
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  *(undefined2 *)(param_1 + 3) = param_2;
  *(undefined2 *)((long)param_1 + 0x1a) = param_3;
  return;
}


// ===== 007f2280  FUN_007f2280 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f2280(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long local_80;
  void *pvStack_78;
  long local_70;
  long local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  void *pvStack_38;
  undefined8 local_30;
  undefined1 uStack_1;
  
  lVar4 = *(long *)(param_2 + 0x10);
  if ((lVar4 == 0) || (*(char *)(*(long *)(param_2 + 8) + lVar4 + -1) != '.')) {
    <rustls_pki_types::server_name::[9]::rustls_pki_types::server_name::DnsName>::to_owned
              (&local_58);
  }
  else {
    <rustls_pki_types::server_name::DnsName_as_core::convert::TryFrom<&str>>::try_from
              (&local_80,*(long *)(param_2 + 8),lVar4 + -1);
    if (local_80 == -2) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_1,&DAT_00ae37c0,
                 &PTR_s__root__cargo_registry_src_index__00ae3810);
    }
    pvStack_38 = pvStack_78;
    local_40 = local_80;
    local_30 = local_70;
                    /* try { // try from 007f22dc to 007f22e7 has its CatchHandler @ 007f23a4 */
    <rustls_pki_types::server_name::[9]::rustls_pki_types::server_name::DnsName>::to_owned
              (&local_58,&local_40);
    if ((local_40 != -1) && (local_40 != 0)) {
      free(pvStack_38);
    }
  }
  local_60 = 0;
  local_80 = 0;
  local_70 = lStack_50;
  pvStack_78 = (void *)local_58;
  local_68 = local_48;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar3 = (long *)FUN_004b25a4(0x28,8);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = (long)pvStack_78;
    *plVar3 = local_80;
    plVar3[3] = local_68;
    plVar3[2] = local_70;
    uVar2 = _UNK_0029fe18;
    uVar1 = _DAT_0029fe10;
    plVar3[4] = CONCAT71(uStack_5f,local_60);
    param_1[2] = plVar3;
    param_1[3] = 1;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    return;
  }
                    /* try { // try from 007f2370 to 007f237b has its CatchHandler @ 007f23cc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 007f23e0  FUN_007f23e0 =====

void FUN_007f23e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007f2428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007f242c + (ulong)(&BYTE_002f6b0e)[*(ushort *)(param_1 + 0x90)] * 4))();
  return;
}


// ===== 007f2ad0  FUN_007f2ad0 =====

bool FUN_007f2ad0(long param_1,char param_2,char param_3)

{
  bool bVar1;
  short *psVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(param_1 + 0x40) << 6;
    psVar2 = (short *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      uVar5 = *(ulong *)(psVar2 + -0x10) ^ 0x8000000000000000;
      if (0x16 < uVar5) {
        uVar5 = 0x13;
      }
      if (((1L << (uVar5 & 0x3f) & 0x3ffeffU) == 0) && ((uVar5 != 0x16 || (*psVar2 == 0x1c)))) {
        if (*(ulong *)(psVar2 + -0x10) != 0x8000000000000008) {
          return false;
        }
        if (*(long *)(psVar2 + -4) == 0) {
          return false;
        }
        pcVar4 = *(char **)(psVar2 + -8);
        lVar3 = *(long *)(psVar2 + -4) * 2;
        if (param_2 == '\x02') {
          pcVar4 = pcVar4 + 1;
          while ((pcVar4[-1] != '\x02' || (*pcVar4 != param_3))) {
            lVar3 = lVar3 + -2;
            pcVar4 = pcVar4 + 2;
            if (lVar3 == 0) {
              return false;
            }
          }
          return true;
        }
        do {
          lVar3 = lVar3 + -2;
          bVar1 = *pcVar4 == param_2;
          if (bVar1) {
            return bVar1;
          }
          pcVar4 = pcVar4 + 2;
        } while (lVar3 != 0);
        return bVar1;
      }
      lVar3 = lVar3 + -0x40;
      psVar2 = psVar2 + 0x20;
    } while (lVar3 != 0);
  }
  return false;
}


// ===== 007f2bc8  <rustls::msgs::handshake::[J]::rustls::msgs::handshake::ClientHelloPayload>::sigalgs_extension =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::[J]::rustls::msgs::handshake::ClientHelloPayload>::sigalgs_extension */

undefined1  [16] __rustcall
<rustls::msgs::handshake::[J]::rustls::msgs::handshake::ClientHelloPayload>::sigalgs_extension
          (long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  short *psVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(param_1 + 0x40) << 6;
    psVar2 = (short *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      uVar4 = *(ulong *)(psVar2 + -0x10) ^ 0x8000000000000000;
      if (0x16 < uVar4) {
        uVar4 = 0x13;
      }
      if ((0x12 < uVar4 - 3 && 1 < uVar4) && ((uVar4 != 0x16 || (*psVar2 == 0xd)))) {
        if (*(ulong *)(psVar2 + -0x10) == 0x8000000000000002) {
          return *(undefined1 (*) [16])(psVar2 + -8);
        }
        break;
      }
      lVar3 = lVar3 + -0x40;
      psVar2 = psVar2 + 0x20;
    } while (lVar3 != 0);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 007f2c44  <rustls::msgs::handshake::[J]::rustls::msgs::handshake::ClientHelloPayload>::keyshare_extension =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::[J]::rustls::msgs::handshake::ClientHelloPayload>::keyshare_extension
    */

undefined1  [16] __rustcall
<rustls::msgs::handshake::[J]::rustls::msgs::handshake::ClientHelloPayload>::keyshare_extension
          (long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  short *psVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(param_1 + 0x40) << 6;
    psVar2 = (short *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      uVar4 = *(ulong *)(psVar2 + -0x10) ^ 0x8000000000000000;
      if (0x16 < uVar4) {
        uVar4 = 0x13;
      }
      if (((1L << (uVar4 & 0x3f) & 0x3fff7fU) == 0) && ((uVar4 != 0x16 || (*psVar2 == 0x22)))) {
        if (*(ulong *)(psVar2 + -0x10) == 0x8000000000000007) {
          return *(undefined1 (*) [16])(psVar2 + -8);
        }
        break;
      }
      lVar3 = lVar3 + -0x40;
      psVar2 = psVar2 + 0x20;
    } while (lVar3 != 0);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 007f2cc4  FUN_007f2cc4 =====

void FUN_007f2cc4(size_t *param_1,long param_2)

{
  undefined1 *__dest;
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  size_t __n;
  void *__src;
  undefined8 uVar7;
  
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar2 = *(long *)(param_2 + 0x40) << 6;
    lVar4 = lVar2;
    puVar5 = *(ulong **)(param_2 + 0x38);
    do {
      puVar1 = puVar5;
      puVar5 = puVar1 + 8;
      uVar3 = *puVar1;
      uVar6 = uVar3 ^ 0x8000000000000000;
      if (0x16 < uVar6) {
        uVar6 = 0x13;
      }
      if (((0xe < uVar6) && (5 < uVar6 - 0x10)) && ((uVar6 != 0x16 || ((short)puVar1[4] == 0x23))))
      goto LAB_007f2da0;
      lVar4 = lVar4 + -0x40;
      puVar1 = *(ulong **)(param_2 + 0x38);
    } while (lVar4 != 0);
    do {
      uVar3 = *puVar1;
      uVar6 = uVar3 ^ 0x8000000000000000;
      if (0x16 < uVar6) {
        uVar6 = 0x13;
      }
      if (((0xf < uVar6) && (4 < uVar6 - 0x11)) && ((uVar6 != 0x16 || ((short)puVar1[4] == 0x27))))
      goto LAB_007f2da0;
      lVar2 = lVar2 + -0x40;
      puVar1 = puVar1 + 8;
    } while (lVar2 != 0);
  }
LAB_007f2dc8:
  *param_1 = 0xffffffffffffffff;
  return;
LAB_007f2da0:
  if (uVar3 + 0x7ffffffffffffff1 < 2) {
    __n = puVar1[3];
    if (-1 < (long)__n) {
      if (__n == 0) {
        __dest = &DAT_00000001;
      }
      else {
        __src = (void *)puVar1[2];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar7 = 1;
        __dest = (undefined1 *)FUN_004b25a4(__n,1);
        if (__dest == (undefined1 *)0x0) goto LAB_007f2dbc;
        memcpy(__dest,__src,__n);
      }
      *param_1 = __n;
      param_1[1] = (size_t)__dest;
      param_1[2] = __n;
      return;
    }
    uVar7 = 0;
LAB_007f2dbc:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar7,__n);
  }
  goto LAB_007f2dc8;
}


// ===== 007f2e40  FUN_007f2e40 =====

ulong FUN_007f2e40(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_58 [2];
  undefined8 local_48;
  
  local_58[0] = 0;
  local_48 = 0;
  lVar4 = *(long *)(param_1 + 0x38) + 0x22;
  lVar1 = *(long *)(param_1 + 0x40) << 6;
  do {
    lVar5 = lVar1;
    if (lVar5 == 0) break;
    uVar3 = 0;
    switch(*(ulong *)(lVar4 + -0x22) ^ 0x8000000000000000) {
    case 0:
      uVar3 = 0xb;
      break;
    case 1:
      uVar3 = 10;
      break;
    case 2:
      uVar3 = 0xd;
      break;
    case 3:
      break;
    case 4:
      uVar3 = 0x23;
      break;
    case 5:
      uVar3 = 0x10;
      break;
    case 6:
      uVar3 = 0x2b;
      break;
    case 7:
      uVar3 = 0x33;
      break;
    case 8:
      uVar3 = 0x2d;
      break;
    case 9:
      uVar3 = 0x29;
      break;
    case 10:
      uVar3 = 0x2c;
      break;
    case 0xb:
      uVar3 = 0x17;
      break;
    case 0xc:
      uVar3 = 5;
      break;
    case 0xd:
      uVar3 = 0x14;
      break;
    case 0xe:
      uVar3 = 0x13;
      break;
    case 0xf:
      uVar3 = 0x39;
      break;
    case 0x10:
      uVar3 = 0xffa5;
      break;
    case 0x11:
      uVar3 = 0x2a;
      break;
    case 0x12:
      uVar3 = 0x1b;
      break;
    default:
      uVar3 = 0xfe0d;
      break;
    case 0x14:
      uVar3 = 0xfd00;
      break;
    case 0x15:
      uVar3 = 0x2f;
      break;
    case 0x16:
                    /* WARNING: Could not recover jumptable at 0x007f2ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((ulong)(byte)(&DAT_002f6b46)[*(ushort *)(lVar4 + -2)] * 4 + 0x7f2eb0))();
      return uVar2;
    }
                    /* try { // try from 007f2f68 to 007f2f6f has its CatchHandler @ 007f2ffc */
    uVar2 = FUN_0084e3e8(local_58,uVar3);
    lVar4 = lVar4 + 0x40;
    lVar1 = lVar5 + -0x40;
  } while ((uVar2 & 1) == 0);
  FUN_0084f3f4(local_58);
  return (ulong)(lVar5 != 0);
}


// ===== 007f3014  FUN_007f3014 =====

ulong FUN_007f3014(long param_1)

{
  short *psVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 local_58 [2];
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)(param_1 + 0x40) << 6;
    psVar1 = (short *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      uVar3 = *(ulong *)(psVar1 + -0x10) ^ 0x8000000000000000;
      if (0x16 < uVar3) {
        uVar3 = 0x13;
      }
      if (((1L << (uVar3 & 0x3f) & 0x3fff7fU) == 0) && ((uVar3 != 0x16 || (*psVar1 == 0x22)))) {
        if (*(ulong *)(psVar1 + -0x10) == 0x8000000000000007) {
          local_58[0] = 0;
          local_48 = 0;
          uVar4 = (uint)(*(long *)(psVar1 + -4) * 0x20 != 0);
          if (*(long *)(psVar1 + -4) * 0x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007f30dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*(code *)(&UNK_007f30e0 +
                              (ulong)(byte)(&DAT_002f6b71)
                                           [*(ushort *)(*(long *)(psVar1 + -8) + 0x18)] * 4))
                              (param_1,0x17);
            return uVar3;
          }
          FUN_0084f3f4(local_58);
          goto LAB_007f3178;
        }
        break;
      }
      lVar2 = lVar2 + -0x40;
      psVar1 = psVar1 + 0x20;
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_007f3178:
  return (ulong)uVar4;
}


// ===== 007f31ac  FUN_007f31ac =====

short * FUN_007f31ac(long param_1)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x40) << 6;
    psVar3 = (short *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      uVar4 = *(ulong *)(psVar3 + -0x10) ^ 0x8000000000000000;
      if (0x16 < uVar4) {
        uVar4 = 0x13;
      }
      if (((1L << (uVar4 & 0x3f) & 0x3ffdffU) == 0) && ((uVar4 != 0x16 || (*psVar3 == 0x18)))) {
        psVar2 = psVar3 + -0xc;
        if (*(ulong *)(psVar3 + -0x10) != 0x8000000000000009) {
          psVar2 = (short *)0x0;
        }
        return psVar2;
      }
      lVar1 = lVar1 + -0x40;
      psVar3 = psVar3 + 0x20;
    } while (lVar1 != 0);
  }
  return (short *)0x0;
}


// ===== 007f3230  FUN_007f3230 =====

bool FUN_007f3230(long param_1)

{
  ushort uVar1;
  bool bVar2;
  undefined2 uVar3;
  short *psVar4;
  long lVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined8 local_48 [2];
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar5 = *(long *)(param_1 + 0x40) << 6;
    psVar4 = (short *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      uVar6 = *(ulong *)(psVar4 + -0x10) ^ 0x8000000000000000;
      if (0x16 < uVar6) {
        uVar6 = 0x13;
      }
      if (((0x11 < uVar6) && (2 < uVar6 - 0x13)) && ((uVar6 != 0x16 || (*psVar4 == 0x16)))) {
        if (*(ulong *)(psVar4 + -0x10) != 0x8000000000000012) {
          return false;
        }
        local_48[0] = 0;
        local_38 = 0;
        lVar5 = *(long *)(psVar4 + -4) << 2;
        puVar7 = (undefined2 *)(*(long *)(psVar4 + -8) + 2);
        goto LAB_007f32c8;
      }
      lVar5 = lVar5 + -0x40;
      psVar4 = psVar4 + 0x20;
    } while (lVar5 != 0);
  }
  return false;
  while( true ) {
    uVar1 = puVar7[-1];
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
    }
    else if (uVar1 == 2) {
      uVar3 = 3;
    }
    else {
      uVar3 = *puVar7;
    }
                    /* try { // try from 007f3308 to 007f330f has its CatchHandler @ 007f3358 */
    uVar6 = FUN_0084e3e8(local_48,uVar3);
    puVar7 = puVar7 + 2;
    lVar5 = lVar5 + -4;
    if ((uVar6 & 1) != 0) break;
LAB_007f32c8:
    bVar2 = lVar5 != 0;
    if (lVar5 == 0) break;
  }
  FUN_0084f3f4(local_48);
  return bVar2;
}


// ===== 007f3370  FUN_007f3370 =====

undefined1  [16] FUN_007f3370(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  short *psVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(param_1 + 0x40) << 6;
    psVar2 = (short *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      uVar4 = *(ulong *)(psVar2 + -0x10) ^ 0x8000000000000000;
      if (0x16 < uVar4) {
        uVar4 = 0x13;
      }
      if (((1L << (uVar4 & 0x3f) & 0x3ffeffU) == 0) && ((uVar4 != 0x16 || (*psVar2 == 0x1c)))) {
        if (*(ulong *)(psVar2 + -0x10) == 0x8000000000000008) {
          return *(undefined1 (*) [16])(psVar2 + -8);
        }
        break;
      }
      lVar3 = lVar3 + -0x40;
      psVar2 = psVar2 + 0x20;
    } while (lVar3 != 0);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 007f33f4  FUN_007f33f4 =====

void FUN_007f33f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007f343c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007f3440 + (ulong)(byte)(&DAT_002f6b81)[*(ushort *)(param_1 + 0x40)] * 4))();
  return;
}


// ===== 007f37fc  FUN_007f37fc =====

undefined1  [16] FUN_007f37fc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x10) << 5;
    puVar2 = *(ulong **)(param_1 + 8);
    do {
      uVar3 = *puVar2 ^ 0x8000000000000000;
      if ((1 < uVar3 && uVar3 != 3) && ((uVar3 == 2 || ((short)puVar2[3] == 0x1a)))) {
        if (*puVar2 == 0x8000000000000002) {
          auVar4._2_6_ = 0;
          auVar4._0_2_ = (ushort)puVar2[1];
          auVar4._8_2_ = *(undefined2 *)((long)puVar2 + 10);
          auVar4._10_6_ = 0;
          return auVar4;
        }
        break;
      }
      lVar1 = lVar1 + -0x20;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = 0xffff;
  return auVar5;
}


// ===== 007f386c  FUN_007f386c =====

ulong FUN_007f386c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_48 [2];
  undefined8 local_38;
  
  local_48[0] = 0;
  lVar4 = *(long *)(param_1 + 8) + 0x1a;
  local_38 = 0;
  lVar1 = *(long *)(param_1 + 0x10) << 5;
  do {
    lVar3 = lVar1;
    if (lVar3 == 0) break;
    if (3 < (*(ulong *)(lVar4 + -0x1a) ^ 0x8000000000000000)) {
                    /* WARNING: Could not recover jumptable at 0x007f38e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((ulong)(byte)(&DAT_002f6b8b)[*(ushort *)(lVar4 + -2)] * 4 + 0x7f38e4))();
      return uVar2;
    }
                    /* try { // try from 007f38e4 to 007f38eb has its CatchHandler @ 007f39f4 */
    uVar2 = FUN_0084e3e8(local_48,0xfe0d002b002c0033 >> ((*(ulong *)(lVar4 + -0x1a) & 3) << 4));
    lVar4 = lVar4 + 0x20;
    lVar1 = lVar3 + -0x20;
  } while ((uVar2 & 1) == 0);
  FUN_0084f3f4(local_48);
  return (ulong)(lVar3 != 0);
}


// ===== 007f3a0c  <rustls::msgs::handshake::[O]::rustls::msgs::handshake::HelloRetryRequest>::requested_key_share_group =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::[O]::rustls::msgs::handshake::HelloRetryRequest>::requested_key_share_group
    */

undefined1  [16] __rustcall
<rustls::msgs::handshake::[O]::rustls::msgs::handshake::HelloRetryRequest>::
requested_key_share_group(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x10) << 5;
    plVar2 = *(long **)(param_1 + 8);
    do {
      lVar3 = *plVar2;
      if ((2 < lVar3 + 0x7fffffffffffffffU) &&
         ((lVar3 == -0x8000000000000000 || ((short)plVar2[3] == 0x22)))) {
        if (lVar3 == -0x8000000000000000) {
          auVar4._2_6_ = 0;
          auVar4._0_2_ = *(ushort *)(plVar2 + 1);
          auVar4._8_2_ = *(undefined2 *)((long)plVar2 + 10);
          auVar4._10_6_ = 0;
          return auVar4;
        }
        break;
      }
      lVar1 = lVar1 + -0x20;
      plVar2 = plVar2 + 4;
    } while (lVar1 != 0);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = 0xffff;
  return auVar5;
}


// ===== 007f3a78  FUN_007f3a78 =====

ulong * FUN_007f3a78(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(param_1 + 0x10) << 5;
    puVar3 = *(ulong **)(param_1 + 8);
    do {
      uVar4 = *puVar3 ^ 0x8000000000000000;
      if ((2 < uVar4) && ((uVar4 == 3 || ((short)puVar3[3] == 0x28)))) {
        puVar1 = puVar3 + 1;
        if (*puVar3 != 0x8000000000000003) {
          puVar1 = (ulong *)0x0;
        }
        return puVar1;
      }
      lVar2 = lVar2 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar2 != 0);
  }
  return (ulong *)0x0;
}


// ===== 007f3ad8  FUN_007f3ad8 =====

ulong * FUN_007f3ad8(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x10) << 5;
    puVar2 = *(ulong **)(param_1 + 8);
    do {
      uVar3 = *puVar2;
      if ((1 < uVar3 + 0x7ffffffffffffffe && (uVar3 ^ 0x8000000000000000) != 0) &&
         (((uVar3 ^ 0x8000000000000000) == 1 || ((short)puVar2[3] == 0x1b)))) {
        puVar2 = puVar2 + 1;
        if (uVar3 != 0x8000000000000001) {
          puVar2 = (ulong *)0x0;
        }
        return puVar2;
      }
      lVar1 = lVar1 + -0x20;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  return (ulong *)0x0;
}


// ===== 007f3b48  FUN_007f3b48 =====

void FUN_007f3b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007f3b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007f3b94 + (ulong)(byte)(&DAT_002f6bb6)[*(ushort *)(param_1 + 0x60)] * 4))();
  return;
}


// ===== 007f3f6c  FUN_007f3f6c =====

undefined1  [16] FUN_007f3f6c(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  short *psVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_007f3fcc:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  }
  lVar3 = *(long *)(param_1 + 0x10) * 0x28;
  psVar2 = (short *)(*(long *)(param_1 + 8) + 0x20);
  do {
    lVar3 = lVar3 + -0x28;
    if (0xe < *(byte *)(psVar2 + -0x10) - 1) {
      if (*(byte *)(psVar2 + -0x10) != 0x10) {
        return *(undefined1 (*) [16])(psVar2 + -8);
      }
      if (*psVar2 == 0xb) goto LAB_007f3fcc;
    }
    if (lVar3 == 0) goto LAB_007f3fcc;
    psVar2 = psVar2 + 0x14;
  } while( true );
}


// ===== 007f3fd8  FUN_007f3fd8 =====

void FUN_007f3fd8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x20,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 007f4074 to 007f407f has its CatchHandler @ 007f40a4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x20);
  }
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    puVar2[2] = param_3[2];
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    param_1[1] = puVar1;
    *param_1 = 1;
    param_1[2] = 1;
    param_1[3] = 1;
    param_1[4] = puVar2;
    param_1[5] = 1;
    return;
  }
                    /* try { // try from 007f4084 to 007f408f has its CatchHandler @ 007f4094 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 007f40e4  <rustls::msgs::handshake::Random_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::Random as core::fmt::Debug>::fmt */

void __rustcall
<rustls::msgs::handshake::Random_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  lVar4 = 0x20;
  do {
    pcStack_58 = FUN_0082d3c0;
    local_60 = &local_38;
    local_38 = param_1;
    iVar3 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
    if (iVar3 != 0) {
      return;
    }
    lVar4 = lVar4 + -1;
    param_1 = param_1 + 1;
  } while (lVar4 != 0);
  return;
}


// ===== 007f4168  <rustls::msgs::handshake::CertificatePayloadTls13_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertificatePayloadTls13 as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::CertificatePayloadTls13_as_rustls::msgs::codec::Codec>::read
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  long local_60;
  long local_58;
  void *pvStack_50;
  long local_48;
  
  <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read(&local_60);
  lVar2 = local_48;
  __ptr = pvStack_50;
  lVar1 = local_58;
  if (local_60 == 1) {
    param_1[2] = (long)pvStack_50;
    param_1[3] = local_48;
    *param_1 = -1;
    param_1[1] = local_58;
  }
  else {
                    /* try { // try from 007f41c4 to 007f41cf has its CatchHandler @ 007f4260 */
    FUN_00804284(&local_60,param_2);
    if (local_60 != 1) {
      *param_1 = lVar1;
      param_1[1] = (long)__ptr;
      param_1[2] = lVar2;
      param_1[4] = (long)pvStack_50;
      param_1[3] = local_58;
      param_1[5] = local_48;
      return;
    }
    *param_1 = -1;
    param_1[2] = (long)pvStack_50;
    param_1[1] = local_58;
    param_1[3] = local_48;
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007f4280  <rustls::msgs::handshake::CertificatePayloadTls13_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertificatePayloadTls13 as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::CertificatePayloadTls13_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  long lVar1;
  void *__src;
  ulong __n;
  long lVar2;
  
  lVar2 = param_2[2];
  __n = *(ulong *)(param_1 + 0x10);
  if (lVar2 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  lVar1 = lVar2 + 1;
  *(char *)(param_2[1] + lVar2) = (char)__n;
  param_2[2] = lVar1;
  __src = *(void **)(param_1 + 8);
  if ((ulong)(*param_2 - lVar1) < __n) {
    FUN_00874c84(param_2,lVar1,__n,1,1);
    lVar1 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f42f4;
  memcpy((void *)(param_2[1] + lVar1),__src,__n);
  lVar1 = param_2[2];
LAB_007f42f4:
  param_2[2] = lVar1 + __n;
  FUN_008045b0(param_1 + 0x18,param_2);
  return;
}


// ===== 007f4338  <rustls::msgs::handshake::EcParameters_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EcParameters as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::EcParameters_as_rustls::msgs::codec::Codec>::read
          (char *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char local_38;
  char local_37;
  undefined4 local_36;
  undefined8 local_32;
  undefined8 uStack_2a;
  undefined2 local_22;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (uVar1 == uVar2) {
    *param_1 = '\f';
    *(undefined **)(param_1 + 8) = &DAT_002f7d4e;
    param_1[0x10] = '\v';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    return;
  }
  param_2[2] = uVar2 + 1;
  if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar2 + 1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  if (*(char *)(*param_2 + uVar2) != '\x03') {
    *param_1 = '\x13';
    return;
  }
  <rustls::msgs::enums::NamedGroup_as_rustls::msgs::codec::Codec>::read(&local_38);
  if (local_38 != -1) {
    *param_1 = local_38;
    *(undefined2 *)(param_1 + 0x16) = local_22;
    *(undefined8 *)(param_1 + 0xe) = uStack_2a;
    *(undefined8 *)(param_1 + 6) = local_32;
    param_1[1] = local_37;
    *(undefined4 *)(param_1 + 2) = local_36;
    return;
  }
  param_1[6] = '\x02';
  param_1[7] = '\x03';
  *(undefined4 *)(param_1 + 2) = local_36;
  *param_1 = -1;
  return;
}


// ===== 007f4438  <rustls::msgs::handshake::EcParameters_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EcParameters as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::EcParameters_as_rustls::msgs::codec::Codec>::encode
          (ushort *param_1,long *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  long lVar4;
  
  bVar1 = (byte)param_1[2];
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar3 = 1;
      lVar4 = param_2[2];
      if (lVar4 != *param_2) goto LAB_007f44cc;
    }
    else {
      uVar3 = 2;
      lVar4 = param_2[2];
      if (lVar4 != *param_2) goto LAB_007f44cc;
    }
  }
  else if (bVar1 == 2) {
    uVar3 = 3;
    lVar4 = param_2[2];
    if (lVar4 != *param_2) goto LAB_007f44cc;
  }
  else {
    uVar3 = *(undefined1 *)((long)param_1 + 5);
    lVar4 = param_2[2];
    if (lVar4 != *param_2) goto LAB_007f44cc;
  }
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
LAB_007f44cc:
  uVar2 = *param_1;
  *(undefined1 *)(param_2[1] + lVar4) = uVar3;
  param_2[2] = lVar4 + 1;
                    /* WARNING: Could not recover jumptable at 0x007f44f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007f44fc + (ulong)(byte)(&DAT_002f6bc0)[uVar2] * 4))();
  return;
}


// ===== 007f45c0  <rustls::msgs::handshake::ClientKeyExchangeParams_as_rustls::msgs::handshake::KxDecode>::decode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ClientKeyExchangeParams as rustls::msgs::handshake::KxDecode>::decode
    */

void __rustcall
<rustls::msgs::handshake::ClientKeyExchangeParams_as_rustls::msgs::handshake::KxDecode>::decode
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_3 == 0) {
    <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_40);
    uVar2 = uStack_30;
    uVar1 = uStack_38;
    uStack_78 = uStack_30;
    local_80 = uStack_38;
    local_70 = local_28;
    if (local_40 == 1) goto LAB_007f4638;
    uStack_30 = local_28;
    uVar3 = 1;
    uStack_38 = uVar2;
    local_40 = uVar1;
  }
  else {
    <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read();
    uVar1 = uStack_38;
    uStack_78 = uStack_30;
    local_80 = uStack_38;
    local_70 = local_28;
    if ((local_40 & 1) != 0) {
LAB_007f4638:
      *param_1 = 2;
      param_1[2] = uStack_78;
      param_1[1] = local_80;
      param_1[3] = local_70;
      return;
    }
    uVar3 = 0;
    uStack_38 = uStack_30;
    local_40 = uVar1;
    uStack_30 = local_28;
  }
  *param_1 = uVar3;
  param_1[2] = uStack_38;
  param_1[1] = local_40;
  param_1[3] = uStack_30;
  return;
}


// ===== 007f4698  <rustls::msgs::handshake::ProtocolName_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ProtocolName as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::ProtocolName_as_rustls::msgs::codec::Codec>::read(undefined8 *param_1)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read(&local_40);
  param_1[2] = uStack_30;
  param_1[1] = local_38;
  param_1[3] = local_28;
  *param_1 = local_40;
  return;
}


// ===== 007f46e4  <rustls::msgs::handshake::PresharedKeyBinder_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::PresharedKeyBinder as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::PresharedKeyBinder_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  long lVar1;
  void *__src;
  ulong __n;
  long lVar2;
  
  lVar2 = param_2[2];
  __n = *(ulong *)(param_1 + 0x10);
  if (lVar2 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  lVar1 = lVar2 + 1;
  *(char *)(param_2[1] + lVar2) = (char)__n;
  param_2[2] = lVar1;
  __src = *(void **)(param_1 + 8);
  if ((ulong)(*param_2 - lVar1) < __n) {
    FUN_00874c84(param_2,lVar1,__n,1,1);
    lVar1 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f4758;
  memcpy((void *)(param_2[1] + lVar1),__src,__n);
  lVar1 = param_2[2];
LAB_007f4758:
  param_2[2] = lVar1 + __n;
  return;
}


// ===== 007f4794  <rustls::msgs::handshake::ResponderId_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ResponderId as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::ResponderId_as_rustls::msgs::codec::Codec>::read(undefined8 *param_1)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_40);
  param_1[2] = uStack_30;
  param_1[1] = local_38;
  param_1[3] = local_28;
  *param_1 = local_40;
  return;
}


// ===== 007f47e0  <rustls::msgs::handshake::DistinguishedName_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::DistinguishedName as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::DistinguishedName_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  void *__src;
  ulong __n;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2[2];
  lVar3 = *param_2;
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if ((ulong)(lVar3 - lVar1) < 2) {
    FUN_00874c84(param_2,lVar1,2,1,1);
    lVar1 = param_2[2];
    lVar3 = *param_2;
  }
  lVar4 = lVar1 + 2;
  lVar2 = param_2[1];
  param_2[2] = lVar4;
  *(ushort *)(lVar2 + lVar1) = (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
  if ((ulong)(lVar3 - lVar4) < __n) {
    FUN_00874c84(param_2,lVar4,__n,1,1);
    lVar2 = param_2[1];
    lVar4 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f4840;
  memcpy((void *)(lVar2 + lVar4),__src,__n);
LAB_007f4840:
  param_2[2] = lVar4 + __n;
  return;
}


// ===== 007f48ac  <rustls::msgs::handshake::NewSessionTicketPayloadTls13_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::NewSessionTicketPayloadTls13 as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::NewSessionTicketPayloadTls13_as_rustls::msgs::codec::Codec>::read
          (long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  void *__ptr;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *local_a8;
  long local_a0;
  void *pvStack_98;
  long local_90;
  long local_80;
  long local_78;
  void *pvStack_70;
  long local_68;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (3 < uVar3 - uVar4) {
    uVar1 = uVar4 + 4;
    param_2[2] = uVar1;
    if ((0xfffffffffffffffb < uVar4) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar4,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    if (3 < uVar3 - uVar1) {
      uVar2 = uVar4 + 8;
      uVar5 = *(uint *)(*param_2 + uVar4);
      param_2[2] = uVar2;
      if ((0xfffffffffffffffb < uVar1) || (uVar3 < uVar2)) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar1,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      uVar6 = *(uint *)(*param_2 + uVar1);
      <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read(&local_80);
      lVar14 = local_68;
      __ptr = pvStack_70;
      lVar9 = local_78;
      if (local_80 == 1) {
        param_1[2] = (long)pvStack_70;
        param_1[3] = local_68;
        *param_1 = -1;
        param_1[1] = local_78;
        return;
      }
                    /* try { // try from 007f4990 to 007f499b has its CatchHandler @ 007f4af8 */
      <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_80,param_2);
      lVar12 = local_68;
      pvVar11 = pvStack_70;
      lVar10 = local_78;
      if (local_80 == 1) {
        param_1[2] = (long)pvStack_70;
        param_1[3] = local_68;
        *param_1 = -1;
        param_1[1] = local_78;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar13 = (long *)FUN_004b25a4(0x28,8);
        if (plVar13 == (long *)0x0) {
                    /* try { // try from 007f4abc to 007f4ac7 has its CatchHandler @ 007f4b04 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x28);
        }
        plVar13[2] = lVar10;
        plVar13[3] = (long)pvVar11;
        plVar13[4] = lVar12;
        plVar13[1] = 1;
        *plVar13 = 1;
                    /* try { // try from 007f4a04 to 007f4a0f has its CatchHandler @ 007f4acc */
        local_a8 = plVar13;
        FUN_00805fe0(&local_80,param_2);
        pvStack_98 = pvStack_70;
        local_a0 = local_78;
        local_90 = local_68;
        if (local_80 != 1) {
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          param_1[2] = lVar14;
          param_1[5] = local_68;
          param_1[6] = (long)plVar13;
          param_1[4] = (long)pvStack_70;
          param_1[3] = local_78;
          *param_1 = lVar9;
          param_1[1] = (long)__ptr;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          *(uint *)(param_1 + 7) = uVar5 >> 0x10 | uVar5 << 0x10;
          *(uint *)((long)param_1 + 0x3c) = uVar6 >> 0x10 | uVar6 << 0x10;
          return;
        }
        *param_1 = -1;
        param_1[2] = (long)pvStack_70;
        param_1[1] = local_78;
        param_1[3] = local_68;
        do {
          lVar14 = *plVar13;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar8) {
            *plVar13 = lVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar14 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 007f4a60 to 007f4a67 has its CatchHandler @ 007f4af8 */
          <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow(&local_a8)
          ;
        }
      }
      if (lVar9 == 0) {
        return;
      }
      free(__ptr);
      return;
    }
  }
  param_1[2] = (long)&DAT_002ff0df;
  param_1[3] = 3;
  *(undefined1 *)(param_1 + 1) = 0xc;
  *param_1 = -1;
  return;
}


// ===== 007f4b38  <rustls::msgs::handshake::NewSessionTicketPayloadTls13_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::NewSessionTicketPayloadTls13 as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::NewSessionTicketPayloadTls13_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  
  lVar3 = param_2[2];
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar5 = *param_2;
  if ((ulong)(lVar5 - lVar3) < 4) {
    FUN_00874c84(param_2,lVar3,4,1,1);
    lVar3 = param_2[2];
    lVar5 = *param_2;
  }
  lVar4 = lVar3 + 4;
  lVar6 = param_2[1];
  uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = *(uint *)(param_1 + 0x3c);
  param_2[2] = lVar4;
  *(uint *)(lVar6 + lVar3) = uVar2 >> 0x10 | uVar2 << 0x10;
  if ((ulong)(lVar5 - lVar4) < 4) {
    FUN_00874c84(param_2,lVar4,4,1,1);
    lVar6 = param_2[1];
    lVar4 = param_2[2];
    lVar5 = *param_2;
  }
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar3 = lVar4 + 4;
  uVar7 = *(ulong *)(param_1 + 0x10);
  *(uint *)(lVar6 + lVar4) = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = lVar3;
  if (lVar3 == lVar5) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
    lVar6 = param_2[1];
  }
  *(char *)(lVar6 + lVar3) = (char)uVar7;
  lVar4 = lVar4 + 5;
  pvVar8 = *(void **)(param_1 + 8);
  lVar3 = *param_2;
  param_2[2] = lVar4;
  if ((ulong)(lVar3 - lVar4) < uVar7) {
    FUN_00874c84(param_2,lVar4,uVar7,1,1);
    lVar4 = param_2[2];
LAB_007f4bdc:
    memcpy((void *)(param_2[1] + lVar4),pvVar8,uVar7);
    lVar4 = param_2[2];
    lVar3 = *param_2;
  }
  else if (uVar7 != 0) goto LAB_007f4bdc;
  lVar4 = lVar4 + uVar7;
  lVar5 = *(long *)(param_1 + 0x30);
  param_2[2] = lVar4;
  pvVar8 = *(void **)(lVar5 + 0x18);
  uVar7 = *(ulong *)(lVar5 + 0x20);
  if ((ulong)(lVar3 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
    lVar3 = *param_2;
  }
  lVar5 = lVar4 + 2;
  lVar6 = param_2[1];
  param_2[2] = lVar5;
  *(ushort *)(lVar6 + lVar4) = (ushort)(uVar7 >> 8) & 0xff | (ushort)(((uint)uVar7 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar3 - lVar5) < uVar7) {
    FUN_00874c84(param_2,lVar5,uVar7,1,1);
    lVar6 = param_2[1];
    lVar5 = param_2[2];
  }
  else if (uVar7 == 0) goto LAB_007f4c48;
  memcpy((void *)(lVar6 + lVar5),pvVar8,uVar7);
LAB_007f4c48:
  param_2[2] = lVar5 + uVar7;
  FUN_00806244(param_1 + 0x18,param_2);
  return;
}


// ===== 007f4d20  <rustls::msgs::handshake::CertificateStatus_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertificateStatus as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::CertificateStatus_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 == uVar4) {
    param_1[2] = &DAT_002f7ef0;
    param_1[3] = 0x15;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 1;
    return;
  }
  uVar6 = uVar4 + 1;
  param_2[2] = uVar6;
  if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar4,uVar6,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  lVar7 = *param_2;
  if (*(char *)(lVar7 + uVar4) != '\x01') {
    *(undefined1 *)(param_1 + 1) = 4;
    *param_1 = 1;
    return;
  }
  if (uVar3 - uVar6 < 3) {
    param_1[1] = 0xc;
    param_1[2] = &DAT_002ff0bc;
    param_1[3] = 3;
    *param_1 = 1;
    return;
  }
  uVar4 = uVar4 + 4;
  param_2[2] = uVar4;
  if ((0xfffffffffffffffc < uVar6) || (uVar3 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar6,uVar4,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  pbVar1 = (byte *)(lVar7 + uVar6);
  uVar5 = ((uint)*pbVar1 << 8 | (uint)pbVar1[2] << 0x18) >> 8;
  uVar6 = (ulong)((uVar5 | (uint)pbVar1[1] << 0x18) >> 0x10 | uVar5 << 0x10);
  if (uVar3 - uVar4 < uVar6) {
    param_1[1] = 0xb;
    param_1[2] = uVar6;
    param_1[3] = 0;
    *param_1 = 1;
    return;
  }
  uVar2 = uVar4 + uVar6;
  param_2[2] = uVar2;
  if ((!CARRY8(uVar4,uVar6)) && (uVar2 <= uVar3)) {
    param_1[1] = 0xffffffffffffffff;
    param_1[2] = lVar7 + uVar4;
    param_1[3] = uVar6;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar4,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 007f4e8c  <rustls::msgs::handshake::CertificateStatus_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertificateStatus as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::CertificateStatus_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  void *__src;
  ulong __n;
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_2[2];
  if (lVar4 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  *(undefined1 *)(param_2[1] + lVar4) = 1;
  lVar4 = lVar4 + 1;
  lVar3 = *param_2;
  param_2[2] = lVar4;
  if ((ulong)(lVar3 - lVar4) < 3) {
    FUN_00874c84(param_2,lVar4,3,1,1);
    lVar4 = param_2[2];
    lVar3 = *param_2;
  }
  uVar1 = (uint)__n & 0xff00ff;
  lVar2 = param_2[1];
  lVar5 = lVar4 + 3;
  param_2[2] = lVar5;
  *(char *)((ushort *)(lVar2 + lVar4) + 1) = (char)uVar1;
  *(ushort *)(lVar2 + lVar4) =
       (ushort)(byte)(uVar1 >> 0x10) | (ushort)(((((uint)__n & 0xff00ff00) >> 8) << 0x10) >> 8);
  if ((ulong)(lVar3 - lVar5) < __n) {
    FUN_00874c84(param_2,lVar5,__n,1,1);
    lVar2 = param_2[1];
    lVar5 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f4f24;
  memcpy((void *)(lVar2 + lVar5),__src,__n);
LAB_007f4f24:
  param_2[2] = lVar5 + __n;
  return;
}


// ===== 007f4f90  <rustls::msgs::handshake::CompressedCertificatePayload_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CompressedCertificatePayload as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::CompressedCertificatePayload_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined2 uVar14;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 - uVar4 < 2) {
    puVar10 = &DAT_002fd6a3;
    uVar11 = 0x1f;
  }
  else {
    uVar12 = uVar4 + 2;
    param_2[2] = uVar12;
    if ((0xfffffffffffffffd < uVar4) || (uVar3 < uVar12)) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar4,uVar12,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    lVar13 = *param_2;
    uVar8 = *(ushort *)(lVar13 + uVar4);
    uVar9 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8;
    uVar14 = 3;
    if (uVar9 < 4) {
      uVar14 = (undefined2)(0x2000100000003 >> (((ulong)uVar9 & 3) << 4));
    }
    if (2 < uVar3 - uVar12) {
      uVar1 = uVar4 + 5;
      param_2[2] = uVar1;
      if ((0xfffffffffffffffc < uVar12) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar12,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      if (uVar3 - uVar1 < 3) {
        param_1[2] = &DAT_002ff0bc;
        param_1[3] = 3;
        *param_1 = 0xfffffffffffffffe;
        param_1[1] = 0xc;
        return;
      }
      pbVar2 = (byte *)(lVar13 + uVar12);
      uVar4 = uVar4 + 8;
      bVar5 = *pbVar2;
      bVar6 = pbVar2[1];
      bVar7 = pbVar2[2];
      param_2[2] = uVar4;
      if ((uVar1 < 0xfffffffffffffffd) && (uVar4 <= uVar3)) {
        pbVar2 = (byte *)(lVar13 + uVar1);
        uVar9 = ((uint)*pbVar2 << 8 | (uint)pbVar2[2] << 0x18) >> 8;
        uVar12 = (ulong)((uVar9 | (uint)pbVar2[1] << 0x18) >> 0x10 | uVar9 << 0x10);
        if (uVar3 - uVar4 < uVar12) {
          param_1[2] = uVar12;
          param_1[3] = 0;
          *param_1 = 0xfffffffffffffffe;
          param_1[1] = 0xb;
          return;
        }
        uVar1 = uVar4 + uVar12;
        param_2[2] = uVar1;
        if ((!CARRY8(uVar4,uVar12)) && (uVar1 <= uVar3)) {
          param_1[2] = uVar12;
          *param_1 = 0xffffffffffffffff;
          param_1[1] = lVar13 + uVar4;
          *(undefined2 *)(param_1 + 3) = uVar14;
          *(ushort *)((long)param_1 + 0x1a) = uVar8 >> 8 | (ushort)((uVar8 & 0xff00ff) << 8);
          uVar9 = ((uint)bVar5 << 8 | (uint)bVar7 << 0x18) >> 8;
          *(uint *)((long)param_1 + 0x1c) = (uVar9 | (uint)bVar6 << 0x18) >> 0x10 | uVar9 << 0x10;
          return;
        }
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar4,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar1,uVar4,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    puVar10 = &DAT_002ff0bc;
    uVar11 = 3;
  }
  param_1[2] = puVar10;
  param_1[3] = uVar11;
  *(undefined1 *)(param_1 + 1) = 0xc;
  *param_1 = 0xfffffffffffffffe;
  return;
}


// ===== 007f5170  <rustls::msgs::handshake::CompressedCertificatePayload_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CompressedCertificatePayload as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::CompressedCertificatePayload_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  void *__src;
  ulong __n;
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  
  uVar7 = *(ushort *)(param_1 + 0x18);
  if (uVar7 < 2) {
    if (uVar7 == 0) {
      uVar7 = 0x100;
    }
    else {
      uVar7 = 0x200;
    }
  }
  else if (uVar7 == 2) {
    uVar7 = 0x300;
  }
  else {
    uVar7 = *(ushort *)(param_1 + 0x1a) >> 8 |
            (ushort)((*(ushort *)(param_1 + 0x1a) & 0xff00ff) << 8);
  }
  lVar4 = param_2[2];
  lVar6 = *param_2;
  if ((ulong)(lVar6 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
    lVar6 = *param_2;
  }
  lVar5 = param_2[1];
  lVar3 = lVar4 + 2;
  param_2[2] = lVar3;
  *(ushort *)(lVar5 + lVar4) = uVar7;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((ulong)(lVar6 - lVar3) < 3) {
    FUN_00874c84(param_2,lVar3,3,1,1);
    lVar5 = param_2[1];
    lVar3 = param_2[2];
    lVar6 = *param_2;
  }
  uVar2 = uVar1 & 0xff00ff;
  lVar4 = lVar3 + 3;
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  param_2[2] = lVar4;
  *(char *)((ushort *)(lVar5 + lVar3) + 1) = (char)uVar2;
  *(ushort *)(lVar5 + lVar3) =
       (ushort)(byte)(uVar2 >> 0x10) | (ushort)((((uVar1 & 0xff00ff00) >> 8) << 0x10) >> 8);
  if ((ulong)(lVar6 - lVar4) < 3) {
    FUN_00874c84(param_2,lVar4,3,1,1);
    lVar5 = param_2[1];
    lVar4 = param_2[2];
    lVar6 = *param_2;
  }
  uVar1 = (uint)__n & 0xff00ff;
  lVar3 = lVar4 + 3;
  param_2[2] = lVar3;
  *(char *)((ushort *)(lVar5 + lVar4) + 1) = (char)uVar1;
  *(ushort *)(lVar5 + lVar4) =
       (ushort)(byte)(uVar1 >> 0x10) | (ushort)(((((uint)__n & 0xff00ff00) >> 8) << 0x10) >> 8);
  if ((ulong)(lVar6 - lVar3) < __n) {
    FUN_00874c84(param_2,lVar3,__n,1,1);
    lVar5 = param_2[1];
    lVar3 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f525c;
  memcpy((void *)(lVar5 + lVar3),__src,__n);
LAB_007f525c:
  param_2[2] = lVar3 + __n;
  return;
}


// ===== 007f531c  <rustls::msgs::handshake::HandshakeMessagePayload_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::HandshakeMessagePayload as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::HandshakeMessagePayload_as_rustls::msgs::codec::Codec>::read
          (undefined8 param_1)

{
  FUN_007efca4(param_1,4);
  return;
}


// ===== 007f5324  <rustls::msgs::handshake::HandshakeMessagePayload_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::HandshakeMessagePayload as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::HandshakeMessagePayload_as_rustls::msgs::codec::Codec>::encode
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x8000000000000000;
  FUN_007f0930(param_1,param_2,local_28);
  return;
}


// ===== 007f534c  <rustls::msgs::handshake::HpkeSymmetricCipherSuite_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::HpkeSymmetricCipherSuite as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::HpkeSymmetricCipherSuite_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if (uVar2 - uVar3 < 2) {
    *(undefined **)(param_1 + 8) = &DAT_002f7f05;
    *(undefined8 *)(param_1 + 0x10) = 7;
    *param_1 = 0xc;
    return;
  }
  uVar1 = uVar3 + 2;
  param_2[2] = uVar1;
  if ((uVar3 < 0xfffffffffffffffe) && (uVar1 <= uVar2)) {
    uVar4 = *(ushort *)(*param_2 + uVar3);
    uVar6 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
    uVar7 = 3;
    if (uVar6 < 4) {
      uVar7 = (undefined2)(0x2000100000003 >> (((ulong)uVar6 & 3) << 4));
    }
    if (uVar2 - uVar1 < 2) {
      *(undefined **)(param_1 + 8) = &DAT_002a1148;
      *(undefined8 *)(param_1 + 0x10) = 8;
      *param_1 = 0xc;
      return;
    }
    uVar3 = uVar3 + 4;
    param_2[2] = uVar3;
    if ((uVar1 < 0xfffffffffffffffe) && (uVar3 <= uVar2)) {
      uVar5 = *(ushort *)(*param_2 + uVar1);
      uVar6 = ((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) + 1;
      if ((uVar6 & 0xffff) < 5) {
        uVar8 = *(undefined2 *)(&DAT_002f6f9c + ((ulong)uVar6 & 0xffff) * 2);
      }
      else {
        uVar8 = 4;
      }
      *(undefined2 *)(param_1 + 2) = uVar7;
      *(ushort *)(param_1 + 4) = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
      *(undefined2 *)(param_1 + 6) = uVar8;
      *(ushort *)(param_1 + 8) = uVar5 >> 8 | (ushort)((uVar5 & 0xff00ff) << 8);
      *param_1 = 0xff;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar1,uVar3,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar3,uVar1,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 007f548c  <rustls::msgs::handshake::HpkeSymmetricCipherSuite_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::HpkeSymmetricCipherSuite as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::HpkeSymmetricCipherSuite_as_rustls::msgs::codec::Codec>::encode
          (ushort *param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  
  uVar4 = *param_1;
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0x200;
    }
  }
  else if (uVar4 == 2) {
    uVar4 = 0x300;
  }
  else {
    uVar4 = param_1[1] >> 8 | (ushort)((param_1[1] & 0xff00ff) << 8);
  }
  lVar2 = param_2[2];
  if ((ulong)(*param_2 - lVar2) < 2) {
    FUN_00874c84(param_2,lVar2,2,1,1);
    lVar2 = param_2[2];
  }
  lVar3 = param_2[1];
  uVar1 = param_1[2];
  *(ushort *)(lVar3 + lVar2) = uVar4;
  lVar2 = lVar2 + 2;
  param_2[2] = lVar2;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0x200;
    }
  }
  else if (uVar1 == 2) {
    uVar4 = 0x300;
  }
  else if (uVar1 == 3) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = param_1[3] >> 8 | (ushort)((param_1[3] & 0xff00ff) << 8);
  }
  if ((ulong)(*param_2 - lVar2) < 2) {
    FUN_00874c84(param_2,lVar2,2,1,1);
    lVar3 = param_2[1];
    lVar2 = param_2[2];
  }
  *(ushort *)(lVar3 + lVar2) = uVar4;
  param_2[2] = lVar2 + 2;
  return;
}


// ===== 007f55c4  <rustls::msgs::handshake::HpkeKeyConfig_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::HpkeKeyConfig as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::HpkeKeyConfig_as_rustls::msgs::codec::Codec>::read
          (long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  void *__ptr;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined2 uVar11;
  long local_70;
  long local_68;
  void *pvStack_60;
  long local_58;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 == uVar4) {
    puVar9 = &DAT_002ff13f;
    lVar10 = 2;
  }
  else {
    uVar1 = uVar4 + 1;
    param_2[2] = uVar1;
    if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar4,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    if (1 < uVar3 - uVar1) {
      uVar2 = uVar4 + 3;
      uVar5 = *(undefined1 *)(*param_2 + uVar4);
      param_2[2] = uVar2;
      if ((0xfffffffffffffffd < uVar1) || (uVar3 < uVar2)) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar1,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      uVar6 = *(ushort *)(*param_2 + uVar1);
      uVar11 = 5;
      uVar7 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
      if (uVar7 < 0x12) {
        if (uVar7 == 0x10) {
          uVar11 = 0;
        }
        else if (uVar7 == 0x11) {
          uVar11 = 1;
        }
      }
      else if (uVar7 == 0x12) {
        uVar11 = 2;
      }
      else if (uVar7 == 0x20) {
        uVar11 = 3;
      }
      else if (uVar7 == 0x21) {
        uVar11 = 4;
      }
      <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_70);
      lVar8 = local_58;
      __ptr = pvStack_60;
      lVar10 = local_68;
      if (local_70 == 1) {
        param_1[2] = (long)pvStack_60;
        param_1[3] = local_58;
        *param_1 = -1;
        param_1[1] = local_68;
        return;
      }
                    /* try { // try from 007f5708 to 007f5713 has its CatchHandler @ 007f57b0 */
      FUN_00805d10(&local_70,param_2);
      if (local_70 != 1) {
        *param_1 = lVar10;
        param_1[1] = (long)__ptr;
        param_1[2] = lVar8;
        param_1[5] = local_58;
        param_1[4] = (long)pvStack_60;
        param_1[3] = local_68;
        *(undefined2 *)(param_1 + 6) = uVar11;
        *(ushort *)((long)param_1 + 0x32) = uVar6 >> 8 | (ushort)((uVar6 & 0xff00ff) << 8);
        *(undefined1 *)((long)param_1 + 0x34) = uVar5;
        return;
      }
      *param_1 = -1;
      param_1[2] = (long)pvStack_60;
      param_1[1] = local_68;
      param_1[3] = local_58;
      if (lVar10 == 0) {
        return;
      }
      free(__ptr);
      return;
    }
    puVar9 = &DAT_002f7dd2;
    lVar10 = 7;
  }
  param_1[2] = (long)puVar9;
  param_1[3] = lVar10;
  *(undefined1 *)(param_1 + 1) = 0xc;
  *param_1 = -1;
  return;
}


// ===== 007f57d0  <rustls::msgs::handshake::HpkeKeyConfig_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::HpkeKeyConfig as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::HpkeKeyConfig_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  void *__src;
  ulong __n;
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_2[2];
  uVar1 = *(undefined1 *)(param_1 + 0x34);
  if (lVar5 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  uVar4 = *(ushort *)(param_1 + 0x30);
  lVar2 = lVar5 + 1;
  *(undefined1 *)(param_2[1] + lVar5) = uVar1;
  param_2[2] = lVar2;
  if (uVar4 < 3) {
    if (uVar4 == 0) {
      uVar4 = 0x1000;
    }
    else if (uVar4 == 1) {
      uVar4 = 0x1100;
    }
    else {
      uVar4 = 0x1200;
    }
  }
  else if (uVar4 == 3) {
    uVar4 = 0x2000;
  }
  else if (uVar4 == 4) {
    uVar4 = 0x2100;
  }
  else {
    uVar4 = *(ushort *)(param_1 + 0x32) >> 8 |
            (ushort)((*(ushort *)(param_1 + 0x32) & 0xff00ff) << 8);
  }
  if ((ulong)(*param_2 - lVar2) < 2) {
    FUN_00874c84(param_2,lVar2,2,1,1);
    lVar2 = param_2[2];
  }
  *(ushort *)(param_2[1] + lVar2) = uVar4;
  lVar2 = lVar2 + 2;
  lVar5 = *param_2;
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  param_2[2] = lVar2;
  if ((ulong)(lVar5 - lVar2) < 2) {
    FUN_00874c84(param_2,lVar2,2,1,1);
    lVar2 = param_2[2];
    lVar5 = *param_2;
  }
  lVar6 = lVar2 + 2;
  lVar3 = param_2[1];
  param_2[2] = lVar6;
  *(ushort *)(lVar3 + lVar2) = (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
  if ((ulong)(lVar5 - lVar6) < __n) {
    FUN_00874c84(param_2,lVar6,__n,1,1);
    lVar3 = param_2[1];
    lVar6 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f58d8;
  memcpy((void *)(lVar3 + lVar6),__src,__n);
LAB_007f58d8:
  param_2[2] = lVar6 + __n;
  FUN_00805f0c(param_1 + 0x18,param_2);
  return;
}


// ===== 007f596c  <rustls::msgs::handshake::EchConfigContents_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EchConfigContents as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::EchConfigContents_as_rustls::msgs::codec::Codec>::read
          (long *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 uVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  void *__ptr_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  long local_c8;
  void *local_c0;
  long lStack_b8;
  long local_b0;
  long local_a0;
  void *pvStack_98;
  long local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  
  <rustls::msgs::handshake::HpkeKeyConfig_as_rustls::msgs::codec::Codec>::read(&local_e0);
  lVar7 = local_c8;
  lVar8 = local_e0;
  lVar5 = CONCAT17(uStack_c9,uStack_d0);
  __ptr = (void *)CONCAT17(uStack_d1,uStack_d8);
  if (local_e0 == -1) {
    *param_1 = -1;
    param_1[2] = lVar5;
    param_1[1] = (long)__ptr;
    param_1[3] = local_c8;
    return;
  }
  uVar2 = param_2[2];
  if (param_2[1] == uVar2) {
    param_1[2] = (long)&DAT_002ff13f;
    param_1[3] = 2;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = -1;
  }
  else {
    param_2[2] = uVar2 + 1;
    if ((ulong)param_2[1] <= uVar2) {
                    /* try { // try from 007f5c50 to 007f5c5b has its CatchHandler @ 007f5cd8 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail();
    }
    uVar3 = *(undefined1 *)(*param_2 + uVar2);
                    /* try { // try from 007f5a68 to 007f5a73 has its CatchHandler @ 007f5cd8 */
    <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read(&local_e0,param_2);
    lVar4 = CONCAT17(uStack_d1,uStack_d8);
    __ptr_00 = (void *)CONCAT17(uStack_c9,uStack_d0);
    if (local_e0 != 1) {
                    /* try { // try from 007f5a98 to 007f5aa3 has its CatchHandler @ 007f5cb0 */
      <rustls_pki_types::server_name::DnsName_as_core::convert::TryFrom<&[u8]>>::try_from
                (&local_70,__ptr_00);
      if (CONCAT71(uStack_6f,local_70) == -2) {
        *(undefined1 *)(param_1 + 1) = 9;
        *param_1 = -1;
        if (lVar8 != 0) {
          free(__ptr);
        }
        bVar1 = lVar7 == 0;
        lVar7 = lVar4;
        if (bVar1) goto joined_r0x007f5c20;
      }
      else {
        local_e0 = CONCAT17(uStack_68,uStack_6f);
        local_88 = local_70;
        uStack_d8 = uStack_67;
        uStack_d1 = uStack_60;
        uStack_d0 = uStack_5f;
        uStack_7f = uStack_67;
        uStack_87 = uStack_6f;
        uStack_80 = uStack_68;
                    /* try { // try from 007f5b0c to 007f5b17 has its CatchHandler @ 007f5c84 */
        <rustls_pki_types::server_name::[9]::rustls_pki_types::server_name::DnsName>::to_owned
                  (&local_a0,&local_88);
                    /* try { // try from 007f5b18 to 007f5b23 has its CatchHandler @ 007f5c60 */
        FUN_00804d08(&local_e0,param_2);
        uStack_68 = (undefined1)uStack_d0;
        uStack_67 = (undefined7)(CONCAT17(uStack_c9,uStack_d0) >> 8);
        local_70 = (undefined1)uStack_d8;
        uStack_6f = (undefined7)(CONCAT17(uStack_d1,uStack_d8) >> 8);
        uStack_60 = (undefined1)local_c8;
        uStack_5f = (undefined7)((ulong)local_c8 >> 8);
        if (local_e0 == 1) {
          param_1[3] = local_c8;
          param_1[2] = CONCAT71(uStack_67,uStack_68);
          param_1[1] = CONCAT71(uStack_6f,local_70);
          *param_1 = -1;
          if ((local_a0 != -1) && (local_a0 != 0)) {
            free(pvStack_98);
          }
          if (lVar8 != 0) {
            free(__ptr);
          }
          if (lVar7 != 0) {
            free(local_c0);
          }
          lVar6 = CONCAT71(uStack_87,local_88);
        }
        else {
          *(undefined1 *)(param_1 + 0xd) = uVar3;
          lVar6 = CONCAT71(uStack_87,local_88);
          param_1[1] = (long)__ptr;
          *param_1 = lVar8;
          param_1[3] = lVar7;
          param_1[2] = lVar5;
          param_1[9] = local_c8;
          param_1[8] = CONCAT71(uStack_67,uStack_68);
          param_1[0xb] = (long)pvStack_98;
          param_1[10] = local_a0;
          param_1[0xc] = local_90;
          param_1[5] = lStack_b8;
          param_1[4] = (long)local_c0;
          param_1[7] = CONCAT71(uStack_6f,local_70);
          param_1[6] = local_b0;
        }
        lVar7 = lVar4;
        if ((lVar6 == -1) || (lVar6 == 0)) goto joined_r0x007f5c20;
        local_c0 = (void *)CONCAT71(uStack_7f,uStack_80);
      }
      free(local_c0);
      lVar7 = lVar4;
      goto joined_r0x007f5c20;
    }
    param_1[2] = (long)__ptr_00;
    param_1[3] = local_c8;
    *param_1 = -1;
    param_1[1] = lVar4;
  }
  __ptr_00 = local_c0;
  if (lVar8 != 0) {
    free(__ptr);
  }
joined_r0x007f5c20:
  if (lVar7 != 0) {
    free(__ptr_00);
  }
  return;
}


// ===== 007f5cec  <rustls::msgs::handshake::EchConfigContents_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EchConfigContents as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::EchConfigContents_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_2[2];
  uVar3 = *(undefined1 *)(param_1 + 0x34);
  if (lVar7 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  uVar6 = *(ushort *)(param_1 + 0x30);
  lVar4 = lVar7 + 1;
  *(undefined1 *)(param_2[1] + lVar7) = uVar3;
  param_2[2] = lVar4;
  if (uVar6 < 3) {
    if (uVar6 == 0) {
      uVar6 = 0x1000;
    }
    else if (uVar6 == 1) {
      uVar6 = 0x1100;
    }
    else {
      uVar6 = 0x1200;
    }
  }
  else if (uVar6 == 3) {
    uVar6 = 0x2000;
  }
  else if (uVar6 == 4) {
    uVar6 = 0x2100;
  }
  else {
    uVar6 = *(ushort *)(param_1 + 0x32) >> 8 |
            (ushort)((*(ushort *)(param_1 + 0x32) & 0xff00ff) << 8);
  }
  if ((ulong)(*param_2 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
  }
  *(ushort *)(param_2[1] + lVar4) = uVar6;
  lVar4 = lVar4 + 2;
  lVar7 = *param_2;
  pvVar1 = *(void **)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  param_2[2] = lVar4;
  if ((ulong)(lVar7 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
    lVar7 = *param_2;
  }
  lVar8 = lVar4 + 2;
  lVar5 = param_2[1];
  param_2[2] = lVar8;
  *(ushort *)(lVar5 + lVar4) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar7 - lVar8) < uVar2) {
    FUN_00874c84(param_2,lVar8,uVar2,1,1);
    lVar5 = param_2[1];
    lVar8 = param_2[2];
LAB_007f5de8:
    memcpy((void *)(lVar5 + lVar8),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f5de8;
  param_2[2] = lVar8 + uVar2;
  FUN_00805f0c(param_1 + 0x18,param_2);
  lVar7 = param_2[2];
  uVar3 = *(undefined1 *)(param_1 + 0x68);
  if (lVar7 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  lVar4 = lVar7 + 1;
  *(undefined1 *)(param_2[1] + lVar7) = uVar3;
  pvVar1 = *(void **)(param_1 + 0x58);
  uVar2 = *(ulong *)(param_1 + 0x60);
  param_2[2] = lVar4;
  if (lVar4 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  lVar7 = lVar7 + 2;
  *(char *)(param_2[1] + lVar4) = (char)uVar2;
  param_2[2] = lVar7;
  if ((ulong)(*param_2 - lVar7) < uVar2) {
    FUN_00874c84(param_2,lVar7,uVar2,1,1);
    lVar7 = param_2[2];
  }
  else if (uVar2 == 0) goto LAB_007f5e88;
  memcpy((void *)(param_2[1] + lVar7),pvVar1,uVar2);
  lVar7 = param_2[2];
LAB_007f5e88:
  param_2[2] = lVar7 + uVar2;
  FUN_00804f6c(param_1 + 0x38,param_2);
  return;
}


// ===== 007f5f38  <rustls::msgs::handshake::EchConfigPayload_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EchConfigPayload as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::EchConfigPayload_as_rustls::msgs::codec::Codec>::read
          (long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  ushort uVar4;
  undefined1 *__dest;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ushort uVar8;
  void *local_118;
  ulong uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  long lStack_bc;
  long local_b0;
  ulong uStack_a8;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined2 local_90;
  ushort local_8e;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  uVar3 = param_2[1];
  uVar7 = param_2[2];
  if (uVar3 - uVar7 < 2) {
    puVar5 = &DAT_002f7f87;
    lVar6 = 10;
  }
  else {
    uVar1 = uVar7 + 2;
    param_2[2] = uVar1;
    if ((0xfffffffffffffffd < uVar7) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar7,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    if (1 < uVar3 - uVar1) {
      lVar6 = *param_2;
      uVar2 = uVar7 + 4;
      param_2[2] = uVar2;
      uVar8 = *(ushort *)(lVar6 + uVar7);
      if ((0xfffffffffffffffd < uVar1) || (uVar3 < uVar2)) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar1,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      uVar4 = *(ushort *)(lVar6 + uVar1);
      uVar7 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
      if (uVar3 - uVar2 < uVar7) {
        param_1[2] = uVar7;
        param_1[3] = 0;
        *param_1 = -2;
        param_1[1] = 0xb;
        return;
      }
      uVar1 = uVar2 + uVar7;
      param_2[2] = uVar1;
      if ((!CARRY8(uVar2,uVar7)) && (uVar1 <= uVar3)) {
        __src = (void *)(lVar6 + uVar2);
        local_108 = 0;
        local_118 = __src;
        uStack_110 = uVar7;
        if (uVar8 == 0xdfe) {
          <rustls::msgs::handshake::EchConfigContents_as_rustls::msgs::codec::Codec>::read
                    (&local_b0,&local_118);
          if (local_b0 == -1) {
            param_1[2] = (long)local_a0;
            param_1[3] = uStack_98;
            *param_1 = -2;
            param_1[1] = uStack_a8;
            return;
          }
          uStack_d8 = uStack_64;
          local_e0 = local_6c;
          uStack_c8 = uStack_54;
          uStack_d0 = local_5c;
          lStack_bc = lStack_48;
          local_c4 = uStack_50;
          uStack_c0 = uStack_4c;
          uStack_f8 = uStack_84;
          local_100 = local_8c;
          uStack_e8 = uStack_74;
          local_f0 = local_7c;
          uVar7 = uStack_98;
          __dest = local_a0;
          uVar8 = local_8e;
        }
        else {
          uVar8 = uVar8 >> 8 | (ushort)((uVar8 & 0xff00ff) << 8);
          if (uVar4 == 0) {
            uStack_a8 = 0;
            uVar7 = 0;
            __dest = &DAT_00000001;
            local_b0 = -1;
            local_90 = 1;
          }
          else {
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            __dest = (undefined1 *)FUN_004b25a4(uVar7,1);
            if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(1,uVar7);
            }
            memcpy(__dest,__src,uVar7);
            local_90 = 1;
            local_b0 = -1;
            uStack_a8 = uVar7;
          }
        }
        *param_1 = local_b0;
        param_1[1] = uStack_a8;
        param_1[2] = (long)__dest;
        param_1[3] = uVar7;
        *(undefined8 *)((long)param_1 + 0x3c) = uStack_e8;
        *(undefined8 *)((long)param_1 + 0x34) = local_f0;
        *(undefined8 *)((long)param_1 + 0x4c) = uStack_d8;
        *(undefined8 *)((long)param_1 + 0x44) = local_e0;
        *(ulong *)((long)param_1 + 0x5c) = CONCAT44(local_c4,uStack_c8);
        *(undefined8 *)((long)param_1 + 0x54) = uStack_d0;
        param_1[0xd] = lStack_bc;
        param_1[0xc] = CONCAT44(uStack_c0,local_c4);
        *(undefined2 *)(param_1 + 4) = local_90;
        *(ushort *)((long)param_1 + 0x22) = uVar8;
        *(undefined8 *)((long)param_1 + 0x2c) = uStack_f8;
        *(undefined8 *)((long)param_1 + 0x24) = local_100;
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar2,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    puVar5 = &DAT_002ff0a3;
    lVar6 = 3;
  }
  param_1[2] = (long)puVar5;
  param_1[3] = lVar6;
  *(undefined1 *)(param_1 + 1) = 0xc;
  *param_1 = -2;
  return;
}


// ===== 007f61b4  <rustls::msgs::handshake::EchConfigPayload_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EchConfigPayload as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::EchConfigPayload_as_rustls::msgs::codec::Codec>::encode
          (long *param_1,long *param_2)

{
  void *__src;
  ulong __n;
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 local_60 [32];
  long *local_40;
  long lStack_38;
  
  if (*param_1 != -1) {
    lVar2 = param_2[2];
    lVar4 = *param_2;
    if ((ulong)(lVar4 - lVar2) < 2) {
      FUN_00874c84(param_2,lVar2,2,1,1);
      lVar2 = param_2[2];
      lVar4 = *param_2;
    }
    lVar3 = param_2[1];
    lVar5 = lVar2 + 2;
    param_2[2] = lVar5;
    *(undefined2 *)(lVar3 + lVar2) = 0xdfe;
    lVar2 = lVar5;
    if ((ulong)(lVar4 - lVar5) < 2) {
      FUN_00874c84(param_2,lVar5,2,1,1);
      lVar3 = param_2[1];
      lVar2 = param_2[2];
    }
    *(undefined2 *)(lVar3 + lVar2) = 0xffff;
    param_2[2] = lVar2 + 2;
    local_60[0] = 0x16;
    local_40 = param_2;
    lStack_38 = lVar5;
                    /* try { // try from 007f6228 to 007f622b has its CatchHandler @ 007f63d8 */
    <rustls::msgs::handshake::EchConfigContents_as_rustls::msgs::codec::Codec>::encode(param_1);
    <rustls::msgs::codec::LengthPrefixedBuffer_as_core::ops::drop::Drop>::drop(local_60);
    return;
  }
  lVar4 = param_2[2];
  lVar5 = *param_2;
  lVar2 = param_1[4];
  uVar1 = *(ushort *)((long)param_1 + 0x22);
  if ((ulong)(lVar5 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
    lVar5 = *param_2;
  }
  uVar1 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
  lVar3 = lVar4 + 2;
  __src = (void *)param_1[2];
  __n = param_1[3];
  lVar6 = param_2[1];
  if ((short)lVar2 == 0) {
    uVar1 = 0xdfe;
  }
  param_2[2] = lVar3;
  *(ushort *)(lVar6 + lVar4) = uVar1;
  if ((ulong)(lVar5 - lVar3) < 2) {
    FUN_00874c84(param_2,lVar3,2,1,1);
    lVar6 = param_2[1];
    lVar3 = param_2[2];
    lVar5 = *param_2;
  }
  lVar2 = lVar3 + 2;
  param_2[2] = lVar2;
  *(ushort *)(lVar6 + lVar3) = (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
  if ((ulong)(lVar5 - lVar2) < __n) {
    FUN_00874c84(param_2,lVar2,__n,1,1);
    lVar6 = param_2[1];
    lVar2 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f62d0;
  memcpy((void *)(lVar6 + lVar2),__src,__n);
LAB_007f62d0:
  param_2[2] = lVar2 + __n;
  return;
}


// ===== 007f63f0  <rustls::msgs::handshake::EchConfigExtension_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EchConfigExtension as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::EchConfigExtension_as_rustls::msgs::codec::Codec>::read
          (ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  undefined1 *__dest;
  ulong uVar5;
  long lVar6;
  char local_68;
  undefined1 local_67;
  undefined4 local_66;
  undefined8 local_62;
  undefined8 uStack_5a;
  undefined2 local_52;
  
  <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::read(&local_68);
  if (local_68 == -1) {
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    if (1 < uVar3 - uVar5) {
      uVar1 = uVar5 + 2;
      param_2[2] = uVar1;
      if ((0xfffffffffffffffd < uVar5) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar5,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      lVar6 = *param_2;
      uVar4 = *(ushort *)(lVar6 + uVar5);
      uVar5 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
      if (uVar3 - uVar1 < uVar5) {
        param_1[2] = uVar5;
        param_1[3] = 0;
        *param_1 = 0xfffffffffffffffe;
        param_1[1] = 0xb;
        return;
      }
      uVar2 = uVar1 + uVar5;
      param_2[2] = uVar2;
      if ((!CARRY8(uVar1,uVar5)) && (uVar2 <= uVar3)) {
        if (uVar4 == 0) {
          __dest = &DAT_00000001;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (undefined1 *)FUN_004b25a4(uVar5,1);
          if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(1,uVar5);
          }
          memcpy(__dest,(void *)(lVar6 + uVar1),uVar5);
        }
        *param_1 = uVar5;
        param_1[1] = (ulong)__dest;
        param_1[2] = uVar5;
        *(undefined2 *)(param_1 + 3) = (undefined2)local_66;
        *(undefined2 *)((long)param_1 + 0x1a) = local_66._2_2_;
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar1,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    param_1[2] = (ulong)&DAT_002ff0a3;
    param_1[3] = 3;
    *(undefined1 *)(param_1 + 1) = 0xc;
  }
  else {
    *(char *)(param_1 + 1) = local_68;
    *(undefined2 *)((long)param_1 + 0x1e) = local_52;
    *(undefined8 *)((long)param_1 + 0x16) = uStack_5a;
    *(undefined8 *)((long)param_1 + 0xe) = local_62;
    *(undefined1 *)((long)param_1 + 9) = local_67;
    *(undefined4 *)((long)param_1 + 10) = local_66;
  }
  *param_1 = 0xfffffffffffffffe;
  return;
}


// ===== 007f6570  <rustls::msgs::handshake::EchConfigExtension_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EchConfigExtension as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::EchConfigExtension_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  void *__src;
  ulong __n;
  long lVar1;
  long lVar2;
  undefined4 local_70 [8];
  long *local_50;
  long lStack_48;
  
  local_70[0] = *(undefined4 *)(param_1 + 0x18);
  <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::encode(local_70);
  lStack_48 = param_2[2];
  lVar1 = lStack_48;
  if ((ulong)(*param_2 - lStack_48) < 2) {
    FUN_00874c84(param_2,lStack_48,2,1,1);
    lVar1 = param_2[2];
  }
  lVar2 = lVar1 + 2;
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  *(undefined2 *)(param_2[1] + lVar1) = 0xffff;
  param_2[2] = lVar2;
  local_70[0] = CONCAT31(local_70[0]._1_3_,0x16);
  local_50 = param_2;
  if ((ulong)(*param_2 - lVar2) < __n) {
                    /* try { // try from 007f664c to 007f6663 has its CatchHandler @ 007f666c */
    FUN_00874c84(param_2,lVar2,__n,1,1);
    lVar2 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f6604;
  memcpy((void *)(param_2[1] + lVar2),__src,__n);
LAB_007f6604:
  param_2[2] = lVar2 + __n;
  <rustls::msgs::codec::LengthPrefixedBuffer_as_core::ops::drop::Drop>::drop(local_70);
  return;
}


// ===== 007f6684  <rustls::msgs::handshake::EncryptedClientHello_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EncryptedClientHello as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::EncryptedClientHello_as_rustls::msgs::codec::Codec>::read
          (long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if (uVar2 == uVar3) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    param_1[2] = (long)&DAT_002fd6f3;
    param_1[3] = 0x12;
    *param_1 = -2;
    return;
  }
  param_2[2] = uVar3 + 1;
  if (uVar3 < uVar2) {
    iVar4 = 1;
    if (*(char *)(*param_2 + uVar3) != '\x01') {
      iVar4 = 2;
    }
    iVar1 = 0;
    if (*(char *)(*param_2 + uVar3) != '\0') {
      iVar1 = iVar4;
    }
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        *param_1 = -1;
        return;
      }
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = -2;
      return;
    }
    <rustls::msgs::handshake::EncryptedClientHelloOuter_as_rustls::msgs::codec::Codec>::read
              (&local_60);
    if (local_60 != -1) {
      *param_1 = local_60;
      param_1[2] = lStack_50;
      param_1[1] = local_58;
      param_1[5] = lStack_38;
      param_1[4] = local_40;
      param_1[7] = lStack_28;
      param_1[6] = lStack_30;
      param_1[3] = local_48;
      return;
    }
    *param_1 = -2;
    param_1[2] = lStack_50;
    param_1[1] = local_58;
    param_1[3] = local_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar3,uVar3 + 1,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 007f67cc  <rustls::msgs::handshake::EncryptedClientHello_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EncryptedClientHello as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::EncryptedClientHello_as_rustls::msgs::codec::Codec>::encode
          (long *param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  
  lVar8 = param_2[2];
  if (*param_1 == -1) {
    if (lVar8 == *param_2) {
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
    }
    *(undefined1 *)(param_2[1] + lVar8) = 1;
    param_2[2] = lVar8 + 1;
    return;
  }
  if (lVar8 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  uVar7 = *(ushort *)(param_1 + 6);
  lVar4 = lVar8 + 1;
  *(undefined1 *)(param_2[1] + lVar8) = 0;
  param_2[2] = lVar4;
  if (uVar7 < 2) {
    if (uVar7 == 0) {
      uVar7 = 0x100;
    }
    else {
      uVar7 = 0x200;
    }
  }
  else if (uVar7 == 2) {
    uVar7 = 0x300;
  }
  else {
    uVar7 = *(ushort *)((long)param_1 + 0x32) >> 8 |
            (ushort)((*(ushort *)((long)param_1 + 0x32) & 0xff00ff) << 8);
  }
  if ((ulong)(*param_2 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
  }
  uVar3 = *(ushort *)((long)param_1 + 0x34);
  *(ushort *)(param_2[1] + lVar4) = uVar7;
  lVar4 = lVar4 + 2;
  param_2[2] = lVar4;
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      uVar7 = 0x100;
    }
    else {
      uVar7 = 0x200;
    }
  }
  else if (uVar3 == 2) {
    uVar7 = 0x300;
  }
  else if (uVar3 == 3) {
    uVar7 = 0xffff;
  }
  else {
    uVar7 = *(ushort *)((long)param_1 + 0x36) >> 8 |
            (ushort)((*(ushort *)((long)param_1 + 0x36) & 0xff00ff) << 8);
  }
  if ((ulong)(*param_2 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
  }
  lVar5 = param_1[7];
  *(ushort *)(param_2[1] + lVar4) = uVar7;
  lVar8 = lVar4 + 2;
  param_2[2] = lVar8;
  if (lVar8 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  *(char *)(param_2[1] + lVar8) = (char)lVar5;
  lVar4 = lVar4 + 3;
  lVar8 = *param_2;
  pvVar1 = (void *)param_1[1];
  uVar2 = param_1[2];
  param_2[2] = lVar4;
  if ((ulong)(lVar8 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
    lVar8 = *param_2;
  }
  lVar5 = lVar4 + 2;
  lVar6 = param_2[1];
  param_2[2] = lVar5;
  *(ushort *)(lVar6 + lVar4) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar8 - lVar5) < uVar2) {
    FUN_00874c84(param_2,lVar5,uVar2,1,1);
    lVar6 = param_2[1];
    lVar5 = param_2[2];
LAB_007f6978:
    memcpy((void *)(lVar6 + lVar5),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f6978;
  lVar8 = *param_2;
  lVar5 = lVar5 + uVar2;
  pvVar1 = (void *)param_1[4];
  uVar2 = param_1[5];
  param_2[2] = lVar5;
  if ((ulong)(lVar8 - lVar5) < 2) {
    FUN_00874c84(param_2,lVar5,2,1,1);
    lVar5 = param_2[2];
    lVar8 = *param_2;
  }
  lVar4 = lVar5 + 2;
  lVar6 = param_2[1];
  param_2[2] = lVar4;
  *(ushort *)(lVar6 + lVar5) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar8 - lVar4) < uVar2) {
    FUN_00874c84(param_2,lVar4,uVar2,1,1);
    lVar6 = param_2[1];
    lVar4 = param_2[2];
  }
  else if (uVar2 == 0) goto LAB_007f69d4;
  memcpy((void *)(lVar6 + lVar4),pvVar1,uVar2);
LAB_007f69d4:
  param_2[2] = lVar4 + uVar2;
  return;
}


// ===== 007f6ad4  <rustls::msgs::handshake::EncryptedClientHelloOuter_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EncryptedClientHelloOuter as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::EncryptedClientHelloOuter_as_rustls::msgs::codec::Codec>::read
          (long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  void *__ptr;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long local_80;
  long local_78;
  void *pvStack_70;
  long local_68;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  if (uVar4 - uVar5 < 2) {
    puVar10 = &DAT_002f7f05;
    lVar11 = 7;
  }
  else {
    uVar12 = uVar5 + 2;
    param_2[2] = uVar12;
    if ((0xfffffffffffffffd < uVar5) || (uVar4 < uVar12)) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar5,uVar12,uVar4,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    lVar11 = *param_2;
    uVar7 = *(ushort *)(lVar11 + uVar5);
    uVar3 = ((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) - 1 & 0xffff;
    if (2 < uVar3) {
      uVar3 = 3;
    }
    if (1 < uVar4 - uVar12) {
      uVar2 = uVar5 + 4;
      param_2[2] = uVar2;
      if ((0xfffffffffffffffd < uVar12) || (uVar4 < uVar2)) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar12,uVar2,uVar4,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      uVar8 = *(ushort *)(lVar11 + uVar12);
      uVar1 = ((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8) + 1;
      if ((uVar1 & 0xffff) < 5) {
        uVar12 = *(ulong *)(&DAT_002f6fa8 + ((ulong)uVar1 & 0xffff) * 8);
      }
      else {
        uVar12 = 0x400000000;
      }
      if (uVar4 != uVar2) {
        param_2[2] = uVar5 + 5;
        if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar2,uVar5 + 5,uVar4,&PTR_s__root__cargo_registry_src_index__00ae7c40);
        }
        uVar6 = *(undefined1 *)(lVar11 + uVar2);
        <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_80);
        lVar9 = local_68;
        __ptr = pvStack_70;
        lVar11 = local_78;
        if (local_80 == 1) {
          param_1[2] = (long)pvStack_70;
          param_1[3] = local_68;
          *param_1 = -1;
          param_1[1] = local_78;
          return;
        }
                    /* try { // try from 007f6c6c to 007f6c77 has its CatchHandler @ 007f6d34 */
        <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_80,param_2);
        if (local_80 != 1) {
          *param_1 = lVar11;
          param_1[1] = (long)__ptr;
          param_1[2] = lVar9;
          param_1[4] = (long)pvStack_70;
          param_1[3] = local_78;
          param_1[5] = local_68;
          param_1[6] = uVar12 | (ulong)((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8) << 0x30 |
                       (ulong)(((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) << 0x10) |
                       (ulong)uVar3;
          *(undefined1 *)(param_1 + 7) = uVar6;
          return;
        }
        *param_1 = -1;
        param_1[2] = (long)pvStack_70;
        param_1[1] = local_78;
        param_1[3] = local_68;
        if (lVar11 != 0) {
          free(__ptr);
          return;
        }
        return;
      }
      param_1[2] = (long)&DAT_002ff13f;
      param_1[3] = 2;
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_007f6b90;
    }
    puVar10 = &DAT_002a1148;
    lVar11 = 8;
  }
  param_1[3] = lVar11;
  *(undefined1 *)(param_1 + 1) = 0xc;
  *(long *)((long)param_1 + 10) = (long)puVar10 << 0x30;
  *(undefined2 *)((long)param_1 + 0x16) = 0;
  *(int *)((long)param_1 + 0x12) = (int)((ulong)puVar10 >> 0x10);
LAB_007f6b90:
  *param_1 = -1;
  return;
}


// ===== 007f6d54  <rustls::msgs::handshake::EncryptedClientHelloOuter_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::EncryptedClientHelloOuter as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::EncryptedClientHelloOuter_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  undefined1 uVar9;
  
  uVar8 = *(ushort *)(param_1 + 0x30);
  if (uVar8 < 2) {
    if (uVar8 == 0) {
      uVar8 = 0x100;
    }
    else {
      uVar8 = 0x200;
    }
  }
  else if (uVar8 == 2) {
    uVar8 = 0x300;
  }
  else {
    uVar8 = *(ushort *)(param_1 + 0x32) >> 8 |
            (ushort)((*(ushort *)(param_1 + 0x32) & 0xff00ff) << 8);
  }
  lVar4 = param_2[2];
  if ((ulong)(*param_2 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
  }
  lVar5 = param_2[1];
  uVar3 = *(ushort *)(param_1 + 0x34);
  *(ushort *)(lVar5 + lVar4) = uVar8;
  lVar6 = lVar4 + 2;
  param_2[2] = lVar6;
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      uVar8 = 0x100;
    }
    else {
      uVar8 = 0x200;
    }
  }
  else if (uVar3 == 2) {
    uVar8 = 0x300;
  }
  else if (uVar3 == 3) {
    uVar8 = 0xffff;
  }
  else {
    uVar8 = *(ushort *)(param_1 + 0x36) >> 8 |
            (ushort)((*(ushort *)(param_1 + 0x36) & 0xff00ff) << 8);
  }
  lVar7 = *param_2;
  if ((ulong)(lVar7 - lVar6) < 2) {
    FUN_00874c84(param_2,lVar6,2,1,1);
    lVar5 = param_2[1];
    lVar6 = param_2[2];
    lVar7 = *param_2;
    lVar4 = lVar6 + 2;
    *(ushort *)(lVar5 + lVar6) = uVar8;
    uVar9 = *(undefined1 *)(param_1 + 0x38);
    param_2[2] = lVar4;
    if (lVar4 == lVar7) goto LAB_007f6e3c;
  }
  else {
    lVar4 = lVar4 + 4;
    *(ushort *)(lVar5 + lVar6) = uVar8;
    uVar9 = *(undefined1 *)(param_1 + 0x38);
    param_2[2] = lVar4;
    if (lVar4 == lVar7) {
LAB_007f6e3c:
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
      lVar5 = param_2[1];
    }
  }
  *(undefined1 *)(lVar5 + lVar4) = uVar9;
  lVar6 = lVar6 + 3;
  lVar4 = *param_2;
  pvVar1 = *(void **)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  param_2[2] = lVar6;
  if ((ulong)(lVar4 - lVar6) < 2) {
    FUN_00874c84(param_2,lVar6,2,1,1);
    lVar6 = param_2[2];
    lVar4 = *param_2;
  }
  lVar5 = lVar6 + 2;
  lVar7 = param_2[1];
  param_2[2] = lVar5;
  *(ushort *)(lVar7 + lVar6) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar4 - lVar5) < uVar2) {
    FUN_00874c84(param_2,lVar5,uVar2,1,1);
    lVar7 = param_2[1];
    lVar5 = param_2[2];
LAB_007f6e90:
    memcpy((void *)(lVar7 + lVar5),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f6e90;
  lVar4 = *param_2;
  lVar5 = lVar5 + uVar2;
  pvVar1 = *(void **)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  param_2[2] = lVar5;
  if ((ulong)(lVar4 - lVar5) < 2) {
    FUN_00874c84(param_2,lVar5,2,1,1);
    lVar5 = param_2[2];
    lVar4 = *param_2;
  }
  lVar6 = lVar5 + 2;
  lVar7 = param_2[1];
  param_2[2] = lVar6;
  *(ushort *)(lVar7 + lVar5) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar4 - lVar6) < uVar2) {
    FUN_00874c84(param_2,lVar6,uVar2,1,1);
    lVar7 = param_2[1];
    lVar6 = param_2[2];
  }
  else if (uVar2 == 0) goto LAB_007f6eec;
  memcpy((void *)(lVar7 + lVar6),pvVar1,uVar2);
LAB_007f6eec:
  param_2[2] = lVar6 + uVar2;
  return;
}


// ===== 007f7008  <rustls::msgs::handshake::ServerEncryptedClientHello_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerEncryptedClientHello as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::ServerEncryptedClientHello_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_0080474c(&local_40);
  param_1[2] = uStack_30;
  param_1[1] = local_38;
  param_1[3] = local_28;
  *param_1 = local_40;
  return;
}


// ===== 007f7054  <rustls::msgs::handshake::ServerEncryptedClientHello_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerEncryptedClientHello as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::ServerEncryptedClientHello_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long lStack_38;
  
  lVar2 = param_2[2];
  lVar3 = lVar2;
  if ((ulong)(*param_2 - lVar2) < 2) {
    FUN_00874c84(param_2,lVar2,2,1,1);
    lVar3 = param_2[2];
  }
  param_2[2] = lVar3 + 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined2 *)(param_2[1] + lVar3) = 0xffff;
  uStack_58 = 0x1616161616161616;
  uStack_60 = 0x1616161616161616;
  uStack_48 = 0x1616161616161616;
  uStack_50 = 0x1616161616161616;
  plStack_40 = param_2;
  lStack_38 = lVar2;
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar1 = lVar1 * 0x70;
    do {
      <rustls::msgs::handshake::EchConfigPayload_as_rustls::msgs::codec::Codec>::encode
                (lVar3,param_2);
      lVar1 = lVar1 + -0x70;
      lVar3 = lVar3 + 0x70;
    } while (lVar1 != 0);
  }
  <rustls::msgs::codec::LengthPrefixedBuffer_as_core::ops::drop::Drop>::drop(&uStack_60);
  return;
}


// ===== 007f7058  <rustls::msgs::handshake::ServerEcdhParams_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerEcdhParams as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::ServerEcdhParams_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined8 in_x11;
  undefined1 in_w12;
  ushort in_w13;
  undefined1 in_w14;
  undefined1 in_w15;
  uint in_w16;
  undefined2 in_w17;
  char local_50;
  undefined1 uStack_4f;
  ushort uStack_4e;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (uVar1 == uVar2) {
    local_50 = '\f';
    uStack_40 = 0xb;
    puVar5 = &DAT_002f7d4e;
  }
  else {
    param_2[2] = uVar2 + 1;
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar2,uVar2 + 1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    puVar5 = (undefined *)*param_2;
    if (puVar5[uVar2] == '\x03') {
      <rustls::msgs::enums::NamedGroup_as_rustls::msgs::codec::Codec>::read(&local_50);
      uVar4 = uStack_4c;
      uVar3 = uStack_4e;
      if (local_50 == -1) {
        <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read(&local_50,param_2);
        if (CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT24(uStack_4c,CONCAT22(uStack_4e,CONCAT11(uStack_4f,local_50)))))
            == 1) {
          *param_1 = 0xffffffffffffffff;
          param_1[2] = uStack_40;
          param_1[1] = local_48;
          param_1[3] = local_38;
          return;
        }
        *(ushort *)(param_1 + 3) = uVar3;
        *(undefined2 *)((long)param_1 + 0x1a) = uVar4;
        param_1[2] = local_38;
        param_1[1] = uStack_40;
        *param_1 = local_48;
        *(undefined2 *)((long)param_1 + 0x1c) = 0x302;
        return;
      }
      in_w16 = (uint)(uStack_4e >> 8);
      puVar5 = local_48;
      in_w12 = uStack_4f;
      in_w17 = uStack_4c;
      in_w15 = uStack_4a;
      in_w14 = uStack_49;
      in_w13 = uStack_4e;
    }
    else {
      local_50 = '\x13';
      uStack_40 = in_x11;
    }
  }
  *(char *)(param_1 + 1) = local_50;
  *(undefined1 *)((long)param_1 + 9) = in_w12;
  *(ushort *)((long)param_1 + 10) = in_w13 & 0xff | (ushort)(in_w16 << 8);
  *(undefined2 *)((long)param_1 + 0xc) = in_w17;
  *(undefined1 *)((long)param_1 + 0xe) = in_w15;
  *(undefined1 *)((long)param_1 + 0xf) = in_w14;
  param_1[2] = puVar5;
  param_1[3] = uStack_40;
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 007f71cc  <rustls::msgs::handshake::ServerEcdhParams_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerEcdhParams as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::ServerEcdhParams_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar3 = 1;
      lVar4 = param_2[2];
      if (lVar4 != *param_2) goto LAB_007f7264;
    }
    else {
      uVar3 = 2;
      lVar4 = param_2[2];
      if (lVar4 != *param_2) goto LAB_007f7264;
    }
  }
  else if (bVar1 == 2) {
    uVar3 = 3;
    lVar4 = param_2[2];
    if (lVar4 != *param_2) goto LAB_007f7264;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x1d);
    lVar4 = param_2[2];
    if (lVar4 != *param_2) goto LAB_007f7264;
  }
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
LAB_007f7264:
  uVar2 = *(ushort *)(param_1 + 0x18);
  *(undefined1 *)(param_2[1] + lVar4) = uVar3;
  param_2[2] = lVar4 + 1;
                    /* WARNING: Could not recover jumptable at 0x007f7290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007f7294 + (ulong)(byte)(&DAT_002f6bd0)[uVar2] * 4))();
  return;
}


// ===== 007f73e4  <rustls::msgs::handshake::ServerDhParams_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerDhParams as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::ServerDhParams_as_rustls::msgs::codec::Codec>::read
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *__ptr;
  void *__ptr_00;
  long lVar3;
  long lVar4;
  long local_70;
  long local_68;
  void *pvStack_60;
  long local_58;
  
  <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_70);
  lVar3 = local_58;
  __ptr = pvStack_60;
  lVar1 = local_68;
  if (local_70 == 1) {
    param_1[2] = (long)pvStack_60;
    param_1[3] = local_58;
    *param_1 = -1;
    param_1[1] = local_68;
  }
  else {
                    /* try { // try from 007f7448 to 007f7453 has its CatchHandler @ 007f7548 */
    <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_70,param_2);
    lVar4 = local_58;
    __ptr_00 = pvStack_60;
    lVar2 = local_68;
    if (local_70 == 1) {
      param_1[2] = (long)pvStack_60;
      param_1[3] = local_58;
      *param_1 = -1;
      param_1[1] = local_68;
      if (lVar1 != 0) {
        free(__ptr);
        return;
      }
    }
    else {
                    /* try { // try from 007f749c to 007f74a7 has its CatchHandler @ 007f7528 */
      <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_70,param_2);
      if (local_70 == 1) {
        *param_1 = -1;
        param_1[2] = (long)pvStack_60;
        param_1[1] = local_68;
        param_1[3] = local_58;
        if (lVar2 != 0) {
          free(__ptr_00);
        }
        if (lVar1 != 0) {
          free(__ptr);
        }
      }
      else {
        *param_1 = lVar1;
        param_1[1] = (long)__ptr;
        param_1[2] = lVar3;
        param_1[3] = lVar2;
        param_1[7] = (long)pvStack_60;
        param_1[6] = local_68;
        param_1[8] = local_58;
        param_1[4] = (long)__ptr_00;
        param_1[5] = lVar4;
      }
    }
  }
  return;
}


// ===== 007f7568  <rustls::msgs::handshake::ServerDhParams_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerDhParams as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::ServerDhParams_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = param_2[2];
  lVar6 = *param_2;
  pvVar1 = *(void **)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((ulong)(lVar6 - lVar3) < 2) {
    FUN_00874c84(param_2,lVar3,2,1,1);
    lVar3 = param_2[2];
    lVar6 = *param_2;
  }
  lVar4 = lVar3 + 2;
  lVar5 = param_2[1];
  param_2[2] = lVar4;
  *(ushort *)(lVar5 + lVar3) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar6 - lVar4) < uVar2) {
    FUN_00874c84(param_2,lVar4,uVar2,1,1);
    lVar5 = param_2[1];
    lVar4 = param_2[2];
    lVar6 = *param_2;
LAB_007f75c4:
    memcpy((void *)(lVar5 + lVar4),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f75c4;
  lVar4 = lVar4 + uVar2;
  pvVar1 = *(void **)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  param_2[2] = lVar4;
  if ((ulong)(lVar6 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar5 = param_2[1];
    lVar4 = param_2[2];
    lVar6 = *param_2;
  }
  lVar3 = lVar4 + 2;
  param_2[2] = lVar3;
  *(ushort *)(lVar5 + lVar4) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar6 - lVar3) < uVar2) {
    FUN_00874c84(param_2,lVar3,uVar2,1,1);
    lVar5 = param_2[1];
    lVar3 = param_2[2];
LAB_007f760c:
    memcpy((void *)(lVar5 + lVar3),pvVar1,uVar2);
  }
  else if (uVar2 != 0) goto LAB_007f760c;
  lVar6 = *param_2;
  lVar3 = lVar3 + uVar2;
  pvVar1 = *(void **)(param_1 + 0x38);
  uVar2 = *(ulong *)(param_1 + 0x40);
  param_2[2] = lVar3;
  if ((ulong)(lVar6 - lVar3) < 2) {
    FUN_00874c84(param_2,lVar3,2,1,1);
    lVar3 = param_2[2];
    lVar6 = *param_2;
  }
  lVar4 = lVar3 + 2;
  lVar5 = param_2[1];
  param_2[2] = lVar4;
  *(ushort *)(lVar5 + lVar3) = (ushort)(uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8)
  ;
  if ((ulong)(lVar6 - lVar4) < uVar2) {
    FUN_00874c84(param_2,lVar4,uVar2,1,1);
    lVar5 = param_2[1];
    lVar4 = param_2[2];
  }
  else if (uVar2 == 0) goto LAB_007f7668;
  memcpy((void *)(lVar5 + lVar4),pvVar1,uVar2);
LAB_007f7668:
  param_2[2] = lVar4 + uVar2;
  return;
}


// ===== 007f7784  <rustls::msgs::handshake::ServerKeyExchangeParams_as_rustls::msgs::handshake::KxDecode>::decode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerKeyExchangeParams as rustls::msgs::handshake::KxDecode>::decode
    */

void __rustcall
<rustls::msgs::handshake::ServerKeyExchangeParams_as_rustls::msgs::handshake::KxDecode>::decode
          (long *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  
  if (param_3 == 0) {
    <rustls::msgs::handshake::ServerDhParams_as_rustls::msgs::codec::Codec>::read(&local_b0);
    lVar1 = lStack_a8;
    lVar2 = local_b0;
    if (local_b0 == -1) {
      *param_1 = -2;
      param_1[1] = lStack_a8;
      param_1[3] = lStack_98;
      param_1[2] = lStack_a0;
      return;
    }
    lStack_e8 = lStack_98;
    local_f0 = lStack_a0;
    local_e0 = local_90;
    lStack_a8 = lStack_80;
    local_b0 = lStack_88;
    lStack_98 = local_70;
    lStack_a0 = lStack_78;
  }
  else {
    <rustls::msgs::handshake::ServerEcdhParams_as_rustls::msgs::codec::Codec>::read();
    if (local_b0 == -1) {
      *param_1 = -2;
      param_1[2] = lStack_a0;
      param_1[1] = lStack_a8;
      param_1[3] = lStack_98;
      return;
    }
    lStack_e8 = lStack_a0;
    local_f0 = lStack_a8;
    local_e0 = lStack_98;
    lVar2 = -1;
    lVar1 = local_b0;
  }
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[3] = lStack_e8;
  param_1[2] = local_f0;
  param_1[4] = local_e0;
  param_1[6] = lStack_a8;
  param_1[5] = local_b0;
  param_1[8] = lStack_98;
  param_1[7] = lStack_a0;
  return;
}


// ===== 007f789c  FUN_007f789c =====

void FUN_007f789c(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  param_1 = (long *)*param_1;
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"V18",3,&local_18,&DAT_00ae3900);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Unknown",7,"version",7,param_1 + 4,&DAT_00ae3920,"contentsgot_type",8,
             &local_18,&DAT_00ae3940);
  return;
}


// ===== 007f7944  FUN_007f7944 =====

void FUN_007f7944(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_0029f500,0x10,"typ",3,local_18 + 0x18,&DAT_00ae3828,"payloadDHEECDHE",7,
             &local_18,&DAT_00ae3848);
  return;
}


// ===== 007f79b4  FUN_007f79b4 =====

void FUN_007f79b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"DistinguishedName",0x11,&local_18,&DAT_00ae3940);
  return;
}


// ===== 007f79f8  FUN_007f79f8 =====

void FUN_007f79f8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  lVar1 = *param_1;
  local_18 = lVar1 + 0x38;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
            (param_2,"EchConfigContents",0x11,"key_config",10,lVar1,&PTR_FUN_00ae3880,
             "maximum_name_length",0x13,lVar1 + 0x68,&DAT_00ae38a0,"public_name",0xb,lVar1 + 0x50,
             &PTR_FUN_00ae38c0,"extensions",10,&local_18,&DAT_00ae38e0);
  return;
}


// ===== 007f7aa8  FUN_007f7aa8 =====

void FUN_007f7aa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Unknown",7,&local_18,&DAT_00ae3960);
  return;
}


// ===== 007f7aec  FUN_007f7aec =====

void FUN_007f7aec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = 5;
  if (*(char *)*param_1 == '\0') {
    uVar1 = 3;
  }
  pcVar2 = "ECDHE";
  if (*(char *)*param_1 == '\0') {
    pcVar2 = "DHEECDHE";
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar2,uVar1);
  return;
}


// ===== 007f7b24  FUN_007f7b24 =====

void FUN_007f7b24(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 4;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"HpkeSymmetricCipherSuite",0x18,"kdf_id",6,*param_1,&DAT_00ae3980,"aead_id",7,
             &local_18,&DAT_00ae39a0);
  return;
}


// ===== 007f7b94  FUN_007f7b94 =====

void FUN_007f7b94(long *param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00ae6670);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 007f7c00  <rustls::msgs::handshake::ServerKeyExchangePayload_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerKeyExchangePayload as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::ServerKeyExchangePayload_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  undefined1 *__dest;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  __n = uVar1 - uVar2;
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae7c28);
  }
  lVar4 = *param_2;
  param_2[2] = uVar1;
  if ((long)__n < 0) {
    uVar3 = 0;
LAB_007f7c30:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,__n);
  }
  if (uVar1 == uVar2) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 1;
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) goto LAB_007f7c30;
    memcpy(__dest,(void *)(lVar4 + uVar2),__n);
  }
  param_1[2] = __dest;
  param_1[3] = __n;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = __n;
  return;
}


// ===== 007f7cb0  <rustls::msgs::handshake::ServerKeyExchangePayload_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerKeyExchangePayload as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::ServerKeyExchangePayload_as_rustls::msgs::codec::Codec>::encode
          (long *param_1,long *param_2)

{
  void *__src;
  ulong __n;
  long lVar1;
  
  if (*param_1 != -1) {
    <rustls::msgs::handshake::[1f]::rustls::msgs::handshake::ServerKeyExchange>::encode();
    return;
  }
  lVar1 = param_2[2];
  __src = (void *)param_1[2];
  __n = param_1[3];
  if ((ulong)(*param_2 - lVar1) < __n) {
    FUN_00874c84(param_2,lVar1,__n,1,1);
    lVar1 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f7d0c;
  memcpy((void *)(param_2[1] + lVar1),__src,__n);
LAB_007f7d0c:
  param_2[2] = lVar1 + __n;
  return;
}


// ===== 007f7d50  <rustls::msgs::handshake::CertificateRequestPayload_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertificateRequestPayload as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::CertificateRequestPayload_as_rustls::msgs::codec::Codec>::read
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *__ptr;
  void *__ptr_00;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_80;
  long lStack_78;
  void *local_70;
  long lStack_68;
  
  FUN_00802690(&local_80);
  lVar5 = lStack_68;
  __ptr = local_70;
  lVar1 = lStack_78;
  if (local_80 == 1) {
    param_1[2] = (long)local_70;
    param_1[3] = lStack_68;
    *param_1 = -1;
    param_1[1] = lStack_78;
  }
  else {
                    /* try { // try from 007f7dbc to 007f7dc7 has its CatchHandler @ 007f7f00 */
    FUN_00806b40(&local_80,param_2);
    lVar3 = lStack_68;
    __ptr_00 = local_70;
    lVar2 = lStack_78;
    if (local_80 == 1) {
      param_1[2] = (long)local_70;
      param_1[3] = lStack_68;
      *param_1 = -1;
      param_1[1] = lStack_78;
    }
    else {
                    /* try { // try from 007f7dec to 007f7df7 has its CatchHandler @ 007f7ed4 */
      FUN_00804ab8(&local_80,param_2);
      if (local_80 == 1) {
        param_1[2] = (long)local_70;
        param_1[3] = lStack_68;
        *param_1 = -1;
        param_1[1] = lStack_78;
      }
      else {
        if (lVar3 != 0) {
          *param_1 = lVar1;
          param_1[1] = (long)__ptr;
          param_1[2] = lVar5;
          param_1[3] = lVar2;
          param_1[4] = (long)__ptr_00;
          param_1[5] = lVar3;
          param_1[6] = lStack_78;
          param_1[7] = (long)local_70;
          param_1[8] = lStack_68;
          return;
        }
        *(undefined1 *)(param_1 + 1) = 0xe;
        *param_1 = -1;
        if (lStack_68 != 0) {
          puVar4 = (undefined8 *)((long)local_70 + 8);
          lVar5 = lStack_68;
          do {
            if (puVar4[-1] != 0) {
              free((void *)*puVar4);
            }
            lVar5 = lVar5 + -1;
            puVar4 = puVar4 + 3;
          } while (lVar5 != 0);
        }
        if (lStack_78 != 0) {
          free(local_70);
        }
      }
      if (lVar2 != 0) {
        free(__ptr_00);
      }
    }
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007f7f20  <rustls::msgs::handshake::CertificateRequestPayload_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertificateRequestPayload as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::CertificateRequestPayload_as_rustls::msgs::codec::Codec>::encode
          (long param_1,undefined8 param_2)

{
  FUN_00802888();
  FUN_00806d48(param_1 + 0x18,param_2);
  FUN_00803024(param_1 + 0x30,param_2);
  return;
}


// ===== 007f7f58  <rustls::msgs::handshake::CertReqExtension_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertReqExtension as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::CertReqExtension_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  void *__ptr;
  void *__ptr_00;
  long local_68;
  ulong local_60;
  ulong local_58;
  byte local_50;
  undefined1 uStack_4f;
  short sStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined2 uStack_3a;
  long local_38;
  
  <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::read(&local_50);
  if (local_50 != 0xff) {
    *(byte *)(param_1 + 1) = local_50;
    *(undefined2 *)((long)param_1 + 0x1e) = uStack_3a;
    *(ulong *)((long)param_1 + 0x16) = CONCAT62(uStack_40,uStack_42);
    *(ulong *)((long)param_1 + 0xe) = CONCAT62(uStack_48,uStack_4a);
    *(undefined1 *)((long)param_1 + 9) = uStack_4f;
    *(uint *)((long)param_1 + 10) = CONCAT22(uStack_4c,sStack_4e);
LAB_007f7fd8:
    *param_1 = 0xfffffffffffffffe;
    return;
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 - uVar4 < 2) {
    param_1[2] = &DAT_002ff0a3;
    param_1[3] = 3;
    *(undefined1 *)(param_1 + 1) = 0xc;
    goto LAB_007f7fd8;
  }
  uVar1 = uVar4 + 2;
  param_2[2] = uVar1;
  if ((0xfffffffffffffffd < uVar4) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar4,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  uVar2 = *(ushort *)(*param_2 + uVar4);
  local_60 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
  if (uVar3 - uVar1 < local_60) {
    param_1[2] = local_60;
    param_1[3] = 0;
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = 0xb;
    return;
  }
  uVar4 = uVar1 + local_60;
  param_2[2] = uVar4;
  if ((CARRY8(uVar1,local_60)) || (uVar3 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar1,uVar4,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  local_68 = *param_2 + uVar1;
  local_58 = 0;
  if (sStack_4e == 0xd) {
    FUN_00806b40(&local_50,&local_68,0xd,uStack_4c);
    __ptr = (void *)CONCAT26(uStack_42,uStack_48);
    __ptr_00 = (void *)CONCAT26(uStack_3a,uStack_40);
    if ((local_50 & 1) != 0) {
LAB_007f8130:
      param_1[2] = __ptr_00;
      param_1[3] = local_38;
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = __ptr;
      return;
    }
    if (local_38 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      *param_1 = 0xfffffffffffffffe;
      goto joined_r0x007f824c;
    }
    uVar3 = 0x8000000000000000;
    local_50 = 0;
    uStack_4f = 0;
    sStack_4e = 0;
    uStack_4c = 0;
    uStack_4a = 0x8000;
    if (local_60 <= local_58) goto LAB_007f80f8;
  }
  else if (sStack_4e == 0x16) {
    FUN_00806ef4(&local_50,&local_68);
    __ptr = (void *)CONCAT26(uStack_42,uStack_48);
    __ptr_00 = (void *)CONCAT26(uStack_3a,uStack_40);
    if ((local_50 & 1) != 0) goto LAB_007f8130;
    uVar3 = 0x8000000000000002;
    local_50 = 2;
    uStack_4f = 0;
    sStack_4e = 0;
    uStack_4c = 0;
    uStack_4a = 0x8000;
    if (local_60 <= local_58) goto LAB_007f80f8;
  }
  else if (sStack_4e == 0x1e) {
    FUN_00804ab8(&local_50,&local_68);
    __ptr = (void *)CONCAT26(uStack_42,uStack_48);
    __ptr_00 = (void *)CONCAT26(uStack_3a,uStack_40);
    if ((local_50 & 1) != 0) goto LAB_007f8130;
    uVar3 = 0x8000000000000001;
    local_50 = 1;
    uStack_4f = 0;
    sStack_4e = 0;
    uStack_4c = 0;
    uStack_4a = 0x8000;
    if (local_60 <= local_58) goto LAB_007f80f8;
  }
  else {
    FUN_007f21b0(&local_50,sStack_4e,uStack_4c,&local_68);
    uVar3 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,CONCAT22(sStack_4e,CONCAT11(uStack_4f,local_50))))
    ;
    __ptr = (void *)CONCAT26(uStack_42,uStack_48);
    __ptr_00 = (void *)CONCAT26(uStack_3a,uStack_40);
    if (local_60 <= local_58) {
LAB_007f80f8:
      param_1[1] = CONCAT26(uStack_42,uStack_48);
      *param_1 = CONCAT26(uStack_4a,
                          CONCAT24(uStack_4c,CONCAT22(sStack_4e,CONCAT11(uStack_4f,local_50))));
      param_1[3] = local_38;
      param_1[2] = CONCAT26(uStack_3a,uStack_40);
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0xf;
  param_1[2] = &DAT_002a1060;
  param_1[3] = 0x10;
  uVar4 = uVar3 ^ 0x8000000000000000;
  *param_1 = 0xfffffffffffffffe;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
                    /* try { // try from 007f81d8 to 007f81e3 has its CatchHandler @ 007f82a0 */
      FUN_00808f4c(&uStack_48);
      if (__ptr == (void *)0x0) {
        return;
      }
      free(__ptr_00);
      return;
    }
    if (uVar4 != 2) {
      if (0xfffffffffffffffd < uVar3 - 1) {
        return;
      }
      free(__ptr);
      return;
    }
  }
joined_r0x007f824c:
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr_00);
  return;
}


// ===== 007f82c4  <rustls::msgs::handshake::CertReqExtension_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertReqExtension as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::CertReqExtension_as_rustls::msgs::codec::Codec>::encode
          (ulong *param_1,long *param_2)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_60 [8];
  long *local_40;
  long lStack_38;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  local_40 = param_2;
  if (uVar1 == 2) {
    local_60[0] = CONCAT22(local_60[0]._2_2_,0x16);
    <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::encode(local_60,param_2);
    lStack_38 = param_2[2];
    lVar2 = lStack_38;
    if ((ulong)(*param_2 - lStack_38) < 2) {
      FUN_00874c84(param_2,lStack_38,2,1,1);
      lVar2 = param_2[2];
    }
    *(undefined2 *)(param_2[1] + lVar2) = 0xffff;
    param_2[2] = lVar2 + 2;
    local_60[0] = CONCAT31(local_60[0]._1_3_,0x16);
                    /* try { // try from 007f83fc to 007f8407 has its CatchHandler @ 007f8550 */
    FUN_00807130(param_1 + 1,param_2);
    goto LAB_007f848c;
  }
  if (uVar1 == 1) {
    local_60[0] = CONCAT22(local_60[0]._2_2_,0x1e);
    <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::encode(local_60,param_2);
    lStack_38 = param_2[2];
    lVar2 = lStack_38;
    if ((ulong)(*param_2 - lStack_38) < 2) {
      FUN_00874c84(param_2,lStack_38,2,1,1);
      lVar2 = param_2[2];
    }
    *(undefined2 *)(param_2[1] + lVar2) = 0xffff;
    param_2[2] = lVar2 + 2;
    local_60[0] = CONCAT31(local_60[0]._1_3_,0x16);
                    /* try { // try from 007f83a4 to 007f83af has its CatchHandler @ 007f8550 */
    FUN_00803024(param_1 + 1,param_2);
    goto LAB_007f848c;
  }
  if (uVar1 == 0) {
    local_60[0] = CONCAT22(local_60[0]._2_2_,0xd);
    <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::encode(local_60,param_2);
    lStack_38 = param_2[2];
    lVar2 = lStack_38;
    if ((ulong)(*param_2 - lStack_38) < 2) {
      FUN_00874c84(param_2,lStack_38,2,1,1);
      lVar2 = param_2[2];
    }
    *(undefined2 *)(param_2[1] + lVar2) = 0xffff;
    param_2[2] = lVar2 + 2;
    local_60[0] = CONCAT31(local_60[0]._1_3_,0x16);
                    /* try { // try from 007f8348 to 007f8353 has its CatchHandler @ 007f8550 */
    FUN_00806d48(param_1 + 1,param_2);
    goto LAB_007f848c;
  }
  local_60[0] = (undefined4)param_1[3];
  <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::encode(local_60,param_2);
  lStack_38 = param_2[2];
  lVar2 = lStack_38;
  if ((ulong)(*param_2 - lStack_38) < 2) {
    FUN_00874c84(param_2,lStack_38,2,1,1);
    lVar2 = param_2[2];
  }
  lVar3 = lVar2 + 2;
  __src = (void *)param_1[1];
  uVar1 = param_1[2];
  *(undefined2 *)(param_2[1] + lVar2) = 0xffff;
  param_2[2] = lVar3;
  local_60[0] = CONCAT31(local_60[0]._1_3_,0x16);
  if ((ulong)(*param_2 - lVar3) < uVar1) {
                    /* try { // try from 007f8530 to 007f8547 has its CatchHandler @ 007f8550 */
    FUN_00874c84(param_2,lVar3,uVar1,1,1);
    lVar3 = param_2[2];
LAB_007f8470:
    memcpy((void *)(param_2[1] + lVar3),__src,uVar1);
  }
  else if (uVar1 != 0) goto LAB_007f8470;
  param_2[2] = lVar3 + uVar1;
LAB_007f848c:
  <rustls::msgs::codec::LengthPrefixedBuffer_as_core::ops::drop::Drop>::drop(local_60);
  return;
}


// ===== 007f8568  <rustls::msgs::handshake::CertificateRequestPayloadTls13_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertificateRequestPayloadTls13 as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::CertificateRequestPayloadTls13_as_rustls::msgs::codec::Codec>::read
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  long local_60;
  long local_58;
  void *pvStack_50;
  long local_48;
  
  <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read(&local_60);
  lVar2 = local_48;
  __ptr = pvStack_50;
  lVar1 = local_58;
  if (local_60 == 1) {
    param_1[2] = (long)pvStack_50;
    param_1[3] = local_48;
    *param_1 = -1;
    param_1[1] = local_58;
  }
  else {
                    /* try { // try from 007f85c4 to 007f85cf has its CatchHandler @ 007f865c */
    FUN_00803f68(&local_60,param_2);
    if (local_60 != 1) {
      *param_1 = lVar1;
      param_1[1] = (long)__ptr;
      param_1[2] = lVar2;
      param_1[4] = (long)pvStack_50;
      param_1[3] = local_58;
      param_1[5] = local_48;
      return;
    }
    *param_1 = -1;
    param_1[2] = (long)pvStack_50;
    param_1[1] = local_58;
    param_1[3] = local_48;
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007f867c  <rustls::msgs::handshake::CertificateRequestPayloadTls13_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::CertificateRequestPayloadTls13 as rustls::msgs::codec::Codec>::encode
    */

void __rustcall
<rustls::msgs::handshake::CertificateRequestPayloadTls13_as_rustls::msgs::codec::Codec>::encode
          (long param_1,long *param_2)

{
  long lVar1;
  void *__src;
  ulong __n;
  long lVar2;
  
  lVar2 = param_2[2];
  __n = *(ulong *)(param_1 + 0x10);
  if (lVar2 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  lVar1 = lVar2 + 1;
  *(char *)(param_2[1] + lVar2) = (char)__n;
  param_2[2] = lVar1;
  __src = *(void **)(param_1 + 8);
  if ((ulong)(*param_2 - lVar1) < __n) {
    FUN_00874c84(param_2,lVar1,__n,1,1);
    lVar1 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f86f0;
  memcpy((void *)(param_2[1] + lVar1),__src,__n);
  lVar1 = param_2[2];
LAB_007f86f0:
  param_2[2] = lVar1 + __n;
  FUN_008041b0(param_1 + 0x18,param_2);
  return;
}


// ===== 007f8734  <rustls::msgs::handshake::NewSessionTicketPayload_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::NewSessionTicketPayload as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::NewSessionTicketPayload_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if (uVar2 - uVar3 < 4) {
    param_1[1] = &DAT_002ff0df;
    param_1[2] = 3;
    uVar6 = 0xc;
  }
  else {
    uVar1 = uVar3 + 4;
    param_2[2] = uVar1;
    if ((0xfffffffffffffffb < uVar3) || (uVar2 < uVar1)) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar3,uVar1,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    uVar4 = *(uint *)(*param_2 + uVar3);
    <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_60);
    if (local_60 == 1) {
      *param_1 = uStack_58;
      param_1[1] = local_50;
      param_1[2] = uStack_48;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar5 = (undefined8 *)FUN_004b25a4(0x28,8);
    if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 007f8834 to 007f883f has its CatchHandler @ 007f8844 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x28);
    }
    puVar5[2] = uStack_58;
    puVar5[3] = local_50;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    puVar5[4] = uStack_48;
    *(uint *)(param_1 + 2) = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar6 = 0xff;
    param_1[1] = puVar5;
    puVar5[1] = 1;
    *puVar5 = 1;
  }
  *(undefined1 *)param_1 = uVar6;
  return;
}


// ===== 007f8864  <rustls::msgs::handshake::NewSessionTicketPayload_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::NewSessionTicketPayload as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::NewSessionTicketPayload_as_rustls::msgs::codec::Codec>::encode
          (long *param_1,long *param_2)

{
  void *__src;
  ulong __n;
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_2[2];
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = *param_2;
  if ((ulong)(lVar5 - lVar2) < 4) {
    FUN_00874c84(param_2,lVar2,4,1,1);
    lVar2 = param_2[2];
    lVar5 = *param_2;
  }
  lVar4 = param_2[1];
  lVar6 = *param_1;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar3 = lVar2 + 4;
  *(uint *)(lVar4 + lVar2) = uVar1 >> 0x10 | uVar1 << 0x10;
  __src = *(void **)(lVar6 + 0x18);
  __n = *(ulong *)(lVar6 + 0x20);
  param_2[2] = lVar3;
  if ((ulong)(lVar5 - lVar3) < 2) {
    FUN_00874c84(param_2,lVar3,2,1,1);
    lVar4 = param_2[1];
    lVar3 = param_2[2];
    lVar5 = *param_2;
  }
  lVar2 = lVar3 + 2;
  param_2[2] = lVar2;
  *(ushort *)(lVar4 + lVar3) = (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
  if ((ulong)(lVar5 - lVar2) < __n) {
    FUN_00874c84(param_2,lVar2,__n,1,1);
    lVar4 = param_2[1];
    lVar2 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f88e8;
  memcpy((void *)(lVar4 + lVar2),__src,__n);
LAB_007f88e8:
  param_2[2] = lVar2 + __n;
  return;
}


// ===== 007f897c  <rustls::msgs::handshake::NewSessionTicketExtension_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::NewSessionTicketExtension as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::NewSessionTicketExtension_as_rustls::msgs::codec::Codec>::read
          (ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *__dest;
  long lVar8;
  char local_68;
  undefined1 local_67;
  undefined4 local_66;
  undefined8 local_62;
  undefined8 uStack_5a;
  undefined2 local_52;
  
  <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::read(&local_68);
  if (local_68 == -1) {
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    if (uVar6 - uVar7 < 2) {
      puVar5 = &DAT_002ff0a3;
    }
    else {
      uVar1 = uVar7 + 2;
      param_2[2] = uVar1;
      if ((0xfffffffffffffffd < uVar7) || (uVar6 < uVar1)) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar7,uVar1,uVar6,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      lVar8 = *param_2;
      uVar3 = *(ushort *)(lVar8 + uVar7);
      uVar4 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      uVar7 = (ulong)uVar4;
      if (uVar6 - uVar1 < uVar7) {
        param_1[2] = uVar7;
        param_1[3] = 0;
        *param_1 = 0xfffffffffffffffd;
        param_1[1] = 0xb;
        return;
      }
      uVar2 = uVar1 + uVar7;
      param_2[2] = uVar2;
      if ((CARRY8(uVar1,uVar7)) || (uVar6 < uVar2)) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar1,uVar2,uVar6,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      if ((short)local_66 != 0x19) {
        uVar6 = uVar7;
        if (uVar3 == 0) {
          __dest = &DAT_00000001;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (undefined1 *)FUN_004b25a4(uVar7,1);
          if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(1,uVar7);
          }
          memcpy(__dest,(void *)(lVar8 + uVar1),uVar7);
        }
LAB_007f8af8:
        *param_1 = uVar6;
        param_1[1] = (ulong)__dest;
        param_1[2] = uVar7;
        *(short *)(param_1 + 3) = (short)local_66;
        *(undefined2 *)((long)param_1 + 0x1a) = local_66._2_2_;
        return;
      }
      if (3 < uVar4) {
        if (uVar3 != 0x400) {
          *(undefined1 *)(param_1 + 1) = 0xf;
          param_1[2] = (ulong)"NewSessionTicketExtension";
          param_1[3] = 0x19;
          goto LAB_007f8a04;
        }
        uVar4 = (*(uint *)(lVar8 + uVar1) & 0xff00ff00) >> 8 |
                (*(uint *)(lVar8 + uVar1) & 0xff00ff) << 8;
        __dest = (undefined1 *)(ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
        uVar6 = 0xfffffffffffffffe;
        goto LAB_007f8af8;
      }
      puVar5 = &DAT_002ff0df;
    }
    param_1[2] = (ulong)puVar5;
    param_1[3] = 3;
    *(undefined1 *)(param_1 + 1) = 0xc;
  }
  else {
    *(char *)(param_1 + 1) = local_68;
    *(undefined2 *)((long)param_1 + 0x1e) = local_52;
    *(undefined8 *)((long)param_1 + 0x16) = uStack_5a;
    *(undefined8 *)((long)param_1 + 0xe) = local_62;
    *(undefined1 *)((long)param_1 + 9) = local_67;
    *(undefined4 *)((long)param_1 + 10) = local_66;
  }
LAB_007f8a04:
  *param_1 = 0xfffffffffffffffd;
  return;
}


// ===== 007f8b54  <rustls::msgs::handshake::NewSessionTicketExtension_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::NewSessionTicketExtension as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::NewSessionTicketExtension_as_rustls::msgs::codec::Codec>::encode
          (long *param_1,long *param_2)

{
  void *__src;
  ulong __n;
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_70 [8];
  long *local_50;
  long lStack_48;
  
  local_50 = param_2;
  if (*param_1 == -2) {
    local_70[0] = CONCAT22(local_70[0]._2_2_,0x19);
    <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::encode(local_70,param_2);
    lStack_48 = param_2[2];
    lVar3 = lStack_48;
    if ((ulong)(*param_2 - lStack_48) < 2) {
      FUN_00874c84(param_2,lStack_48,2,1,1);
      lVar3 = param_2[2];
    }
    lVar2 = lVar3 + 2;
    uVar1 = *(uint *)(param_1 + 1);
    *(undefined2 *)(param_2[1] + lVar3) = 0xffff;
    param_2[2] = lVar2;
    local_70[0] = CONCAT31(local_70[0]._1_3_,0x16);
    if ((ulong)(*param_2 - lVar2) < 4) {
                    /* try { // try from 007f8cb8 to 007f8ccb has its CatchHandler @ 007f8d14 */
      FUN_00874c84(param_2,lVar2,4,1,1);
      lVar2 = param_2[2];
    }
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    *(uint *)(param_2[1] + lVar2) = uVar1 >> 0x10 | uVar1 << 0x10;
    param_2[2] = lVar2 + 4;
    goto LAB_007f8c78;
  }
  local_70[0] = (undefined4)param_1[3];
  <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::encode(local_70,param_2);
  lStack_48 = param_2[2];
  lVar3 = lStack_48;
  if ((ulong)(*param_2 - lStack_48) < 2) {
    FUN_00874c84(param_2,lStack_48,2,1,1);
    lVar3 = param_2[2];
  }
  lVar2 = lVar3 + 2;
  __src = (void *)param_1[1];
  __n = param_1[2];
  *(undefined2 *)(param_2[1] + lVar3) = 0xffff;
  param_2[2] = lVar2;
  local_70[0] = CONCAT31(local_70[0]._1_3_,0x16);
  if ((ulong)(*param_2 - lVar2) < __n) {
                    /* try { // try from 007f8cf4 to 007f8d0b has its CatchHandler @ 007f8d14 */
    FUN_00874c84(param_2,lVar2,__n,1,1);
    lVar2 = param_2[2];
LAB_007f8c5c:
    memcpy((void *)(param_2[1] + lVar2),__src,__n);
  }
  else if (__n != 0) goto LAB_007f8c5c;
  param_2[2] = lVar2 + __n;
LAB_007f8c78:
  <rustls::msgs::codec::LengthPrefixedBuffer_as_core::ops::drop::Drop>::drop(local_70);
  return;
}


// ===== 007f8d2c  <rustls::msgs::handshake::SessionId_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::SessionId as core::fmt::Debug>::fmt */

undefined8 __rustcall
<rustls::msgs::handshake::SessionId_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (0x20 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar4,0x20,&PTR_s__root__cargo_registry_src_index__00ae3868);
  }
  if (uVar4 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    do {
      pcStack_58 = FUN_0082d3c0;
      local_60 = &local_38;
      local_38 = param_1;
      iVar3 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar3 != 0) {
        return 1;
      }
      uVar4 = uVar4 - 1;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
  }
  return 0;
}


// ===== 007f8de0  FUN_007f8de0 =====

void FUN_007f8de0(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
            (param_2,"HpkeKeyConfig",0xd,"config_id",9,param_1 + 0x34,&DAT_00ae38a0,"kem_id",6,
             param_1 + 0x30,&DAT_00ae39c0,"public_key",10,param_1,&PTR_FUN_00ae39e0,
             "symmetric_cipher_suites",0x17,&local_18,&DAT_00ae3a00);
  return;
}


// ===== 007f8e8c  <rustls::msgs::handshake::SessionId_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::SessionId as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::SessionId_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  if (uVar3 == uVar5) {
    param_1[2] = &DAT_002ff13f;
    param_1[3] = 2;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 1;
    return;
  }
  uVar1 = uVar5 + 1;
  param_2[2] = uVar1;
  if (uVar5 < uVar3) {
    uVar5 = (ulong)*(byte *)(*param_2 + uVar5);
    if (uVar5 < 0x21) {
      if (uVar5 <= uVar3 - uVar1) {
        uVar2 = uVar1 + uVar5;
        param_2[2] = uVar2;
        if ((!CARRY8(uVar1,uVar5)) && (uVar2 <= uVar3)) {
          uStack_38 = 0;
          local_40 = 0;
          uStack_28 = 0;
          uStack_30 = 0;
          memcpy(&local_40,(void *)(*param_2 + uVar1),uVar5);
          param_1[5] = uVar5;
          *param_1 = 0;
          param_1[2] = uStack_38;
          param_1[1] = local_40;
          param_1[4] = uStack_28;
          param_1[3] = uStack_30;
          return;
        }
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar1,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      uVar4 = 0xc;
    }
    else {
      uVar4 = 0xf;
    }
    *(undefined1 *)(param_1 + 1) = uVar4;
    param_1[2] = "SessionID";
    param_1[3] = 9;
    *param_1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar5,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 007f8fb4  <rustls::msgs::handshake::SessionId_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::SessionId as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::SessionId_as_rustls::msgs::codec::Codec>::encode
          (void *param_1,long *param_2)

{
  long lVar1;
  ulong __n;
  long lVar2;
  
  lVar2 = param_2[2];
  __n = *(ulong *)((long)param_1 + 0x20);
  if (lVar2 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  lVar1 = lVar2 + 1;
  *(char *)(param_2[1] + lVar2) = (char)__n;
  param_2[2] = lVar1;
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__root__cargo_registry_src_index__00ae3a20);
  }
  if ((ulong)(*param_2 - lVar1) < __n) {
    FUN_00874c84(param_2,lVar1,__n,1,1);
    lVar1 = param_2[2];
  }
  else if (__n == 0) goto LAB_007f902c;
  memcpy((void *)(param_2[1] + lVar1),param_1,__n);
  lVar1 = param_2[2];
LAB_007f902c:
  param_2[2] = lVar1 + __n;
  return;
}


// ===== 007f9078  <rustls::msgs::handshake::SessionId_as_core::convert::AsRef<[u8]>>::as_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::SessionId as core::convert::AsRef<[u8]>>::as_ref */

void __rustcall
<rustls::msgs::handshake::SessionId_as_core::convert::AsRef<[u8]>>::as_ref(long param_1)

{
  if (*(ulong *)(param_1 + 0x20) < 0x21) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(ulong *)(param_1 + 0x20),0x20,&PTR_s__root__cargo_registry_src_index__00ae3a20);
}


// ===== 007f90a4  <rustls::msgs::handshake::ServerExtension_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerExtension as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::ServerExtension_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  void *__src;
  ulong uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  ushort extraout_w9;
  ushort extraout_w9_00;
  ushort extraout_w9_01;
  ushort extraout_w9_02;
  ushort extraout_w9_03;
  ushort extraout_w9_04;
  ushort extraout_w9_05;
  ushort extraout_w9_06;
  ushort extraout_w9_07;
  ushort extraout_w9_08;
  ulong extraout_x10;
  ulong uVar7;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong extraout_x10_06;
  ulong extraout_x10_07;
  ulong extraout_x10_08;
  ulong extraout_x10_09;
  ulong extraout_x10_10;
  ulong uVar8;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  ulong extraout_x11_05;
  ulong extraout_x11_06;
  ulong extraout_x11_07;
  ulong extraout_x11_08;
  ulong extraout_x11_09;
  ulong extraout_x11_10;
  undefined1 extraout_w12;
  undefined1 extraout_w12_00;
  undefined1 extraout_w12_01;
  undefined1 extraout_w12_02;
  undefined1 extraout_w12_03;
  undefined1 extraout_w12_04;
  undefined1 extraout_w12_05;
  undefined1 extraout_w12_06;
  undefined1 extraout_w12_07;
  undefined1 extraout_w12_08;
  undefined1 extraout_w12_09;
  undefined1 extraout_w12_10;
  undefined1 uVar9;
  undefined2 extraout_w13;
  undefined2 extraout_w13_00;
  undefined2 extraout_w13_01;
  undefined2 extraout_w13_02;
  undefined2 extraout_w13_03;
  undefined2 extraout_w13_04;
  undefined2 extraout_w13_05;
  undefined2 extraout_w13_06;
  undefined2 extraout_w13_07;
  undefined2 extraout_w13_08;
  undefined2 extraout_w13_09;
  undefined2 extraout_w13_10;
  undefined2 extraout_w13_11;
  undefined2 extraout_w13_12;
  undefined2 uVar10;
  long unaff_x21;
  ulong uVar11;
  void *local_98;
  ulong local_90;
  ulong local_88;
  undefined3 uStack_73;
  byte local_60;
  undefined1 uStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  ulong local_48;
  
  <rustls::msgs::enums::ExtensionType_as_rustls::msgs::codec::Codec>::read(&local_60);
  if (local_60 != 0xff) {
LAB_007f90d8:
    param_1[8] = local_60;
    *(undefined2 *)(param_1 + 0x1e) = uStack_4a;
    *(ulong *)(param_1 + 0x16) = CONCAT26(uStack_4c,CONCAT42(uStack_50,uStack_52));
    *(ulong *)(param_1 + 0xe) = CONCAT26(uStack_54,CONCAT42(uStack_58,uStack_5a));
    param_1[9] = uStack_5f;
    *(uint *)(param_1 + 10) = CONCAT22(uStack_5c,CONCAT11(bStack_5d,bStack_5e));
    goto LAB_007f9170;
  }
  uVar2 = param_2[1];
  uVar11 = param_2[2];
  if (uVar2 - uVar11 < 2) {
    *(undefined **)(param_1 + 0x10) = &DAT_002ff0a3;
    *(undefined8 *)(param_1 + 0x18) = 3;
    param_1[8] = 0xc;
    goto LAB_007f9170;
  }
  uVar4 = (ulong)CONCAT11(bStack_5d,bStack_5e);
  uVar1 = uVar11 + 2;
  param_2[2] = uVar1;
  if ((0xfffffffffffffffd < uVar11) || (uVar2 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar11,uVar1,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  uVar8 = *param_2;
  uVar3 = *(ushort *)(uVar8 + uVar11);
  uVar9 = 0;
  uVar11 = (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
  if (uVar2 - uVar1 < uVar11) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0xb;
    *(ulong *)(param_1 + 0x10) = uVar11;
    goto LAB_007f9170;
  }
  uVar7 = uVar1 + uVar11;
  param_2[2] = uVar7;
  if ((CARRY8(uVar1,uVar11)) || (uVar2 < uVar7)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar1,uVar7,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  __src = (void *)(uVar8 + uVar1);
  local_88 = 0;
  local_98 = __src;
  local_90 = uVar11;
  if (0x28 < CONCAT11(bStack_5d,bStack_5e)) {
switchD_007f91d0_caseD_1:
    FUN_007f21b0(&local_60,uVar4,uStack_5c,&local_98);
    unaff_x21 = CONCAT26(uStack_5a,
                         CONCAT24(uStack_5c,
                                  CONCAT13(bStack_5d,
                                           CONCAT12(bStack_5e,CONCAT11(uStack_5f,local_60)))));
    param_2 = (ulong *)CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58));
    lVar5 = 0x10;
    uVar7 = extraout_x10_10;
    uVar8 = local_48;
    uVar11 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    uVar10 = extraout_w13_12;
    uVar9 = extraout_w12_10;
    uVar6 = extraout_w9_08;
    goto switchD_007f91d0_caseD_0;
  }
  uVar6 = (ushort)(&switchD_007f91d0::switchdataD_002f6be0)[uVar4];
  lVar5 = 1;
  uVar10 = extraout_w13;
  switch(uVar4) {
  case 0:
    break;
  default:
    goto switchD_007f91d0_caseD_1;
  case 5:
    lVar5 = 8;
    break;
  case 0xb:
    FUN_00801bfc(&local_60,&local_98);
    unaff_x21 = CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58));
    param_2 = (ulong *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if ((local_60 & 1) == 0) {
      lVar5 = 0;
      uVar7 = extraout_x10_02;
      uVar8 = extraout_x11_03;
      uVar11 = local_48;
      uVar10 = extraout_w13_03;
      uVar9 = extraout_w12_03;
      uVar6 = extraout_w9_02;
      break;
    }
    goto LAB_007f9380;
  case 0x10:
    FUN_00803198(&local_60,&local_98);
    unaff_x21 = CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58));
    param_2 = (ulong *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if ((local_60 & 1) == 0) {
      lVar5 = 4;
      uVar7 = extraout_x10_08;
      uVar8 = extraout_x11_08;
      uVar11 = local_48;
      uVar10 = extraout_w13_09;
      uVar9 = extraout_w12_08;
      uVar6 = extraout_w9_07;
      break;
    }
    goto LAB_007f9380;
  case 0x12:
    <rustls::msgs::enums::CertificateType_as_rustls::msgs::codec::Codec>::read(&local_60,&local_98);
    if (local_60 != 0xff) {
LAB_007f93ac:
      param_1[8] = local_60;
      param_1[9] = uStack_5f;
      uStack_73 = (undefined3)uStack_50;
      param_1[10] = bStack_5e;
      *(ulong *)(param_1 + 0x13) =
           CONCAT35(uStack_73,CONCAT23(uStack_52,CONCAT21(uStack_54,uStack_58._3_1_)));
      *(ulong *)(param_1 + 0xb) =
           CONCAT35((undefined3)uStack_58,CONCAT23(uStack_5a,CONCAT21(uStack_5c,bStack_5d)));
      *(ulong *)(param_1 + 0x18) = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      goto LAB_007f9170;
    }
    lVar5 = 10;
    uVar7 = extraout_x10_09;
    uVar8 = extraout_x11_09;
    uVar10 = extraout_w13_10;
    goto LAB_007f9454;
  case 0x13:
    <rustls::msgs::enums::CertificateType_as_rustls::msgs::codec::Codec>::read(&local_60,&local_98);
    if (local_60 != 0xff) goto LAB_007f93ac;
    lVar5 = 9;
    uVar7 = extraout_x10_03;
    uVar8 = extraout_x11_04;
    uVar10 = extraout_w13_04;
LAB_007f9454:
    uVar6 = (ushort)bStack_5e;
    uVar9 = uStack_5f;
    break;
  case 0x15:
    lVar5 = 7;
    break;
  case 0x17:
    lVar5 = 2;
    break;
  case 0x18:
    <u16_as_rustls::msgs::codec::Codec>::read(&local_60,&local_98);
    if (local_60 != 0xff) {
      param_1[8] = local_60;
      *(uint *)(param_1 + 0x1c) = CONCAT22(uStack_4a,uStack_4c);
      *(ulong *)(param_1 + 0x14) = CONCAT44(uStack_50,CONCAT22(uStack_52,uStack_54));
      *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_58,CONCAT22(uStack_5a,uStack_5c));
      param_1[9] = uStack_5f;
      *(ushort *)(param_1 + 10) = CONCAT11(bStack_5d,bStack_5e);
      goto LAB_007f9170;
    }
    uVar6 = CONCAT11(bStack_5d,bStack_5e);
    lVar5 = 6;
    uVar7 = (ulong)bStack_5d;
    uVar8 = extraout_x11_10;
    uVar10 = extraout_w13_11;
    uVar9 = extraout_w12_09;
    break;
  case 0x19:
    lVar5 = 0xe;
    break;
  case 0x1a:
    <rustls::enums::ProtocolVersion_as_rustls::msgs::codec::Codec>::read(&local_60,&local_98);
    if (local_60 == 0xff) {
      uVar6 = (ushort)bStack_5e;
      uVar7 = 0;
      lVar5 = 0xb;
      uVar8 = extraout_x11_00;
      uVar10 = uStack_5c;
      uVar9 = extraout_w12_00;
      break;
    }
    goto LAB_007f90d8;
  case 0x22:
    <rustls::msgs::handshake::KeyShareEntry_as_rustls::msgs::codec::Codec>::read
              (&local_60,&local_98);
    unaff_x21 = CONCAT26(uStack_5a,
                         CONCAT24(uStack_5c,
                                  CONCAT13(bStack_5d,
                                           CONCAT12(bStack_5e,CONCAT11(uStack_5f,local_60)))));
    param_2 = (ulong *)CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58));
    uVar11 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (unaff_x21 == -1) {
      *(ulong **)(param_1 + 8) = param_2;
      *(ulong *)(param_1 + 0x10) = uVar11;
      *(ulong *)(param_1 + 0x18) = local_48;
      goto LAB_007f9170;
    }
    lVar5 = 5;
    uVar7 = extraout_x10_04;
    uVar8 = local_48;
    uVar10 = extraout_w13_05;
    uVar9 = extraout_w12_04;
    uVar6 = extraout_w9_03;
    break;
  case 0x23:
    local_88 = uVar11;
    FUN_008796c0(&local_60,uVar11,0,1,1);
    unaff_x21 = CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58));
    if ((local_60 & 1) != 0) {
LAB_007f95ec:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(unaff_x21,CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50)));
    }
    param_2 = (ulong *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (uVar3 == 0) {
      lVar5 = 0xc;
      uVar7 = extraout_x10_00;
      uVar8 = extraout_x11_01;
      uVar11 = 0;
      uVar10 = extraout_w13_01;
      uVar9 = extraout_w12_01;
      uVar6 = extraout_w9_00;
    }
    else {
      memcpy(param_2,__src,uVar11);
      lVar5 = 0xc;
      uVar7 = extraout_x10_01;
      uVar8 = extraout_x11_02;
      uVar10 = extraout_w13_02;
      uVar9 = extraout_w12_02;
      uVar6 = extraout_w9_01;
    }
    break;
  case 0x26:
    <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read(&local_60,&local_98);
    unaff_x21 = CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58));
    param_2 = (ulong *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if ((local_60 & 1) == 0) {
      lVar5 = 3;
      uVar7 = extraout_x10;
      uVar8 = extraout_x11;
      uVar11 = local_48;
      uVar10 = extraout_w13_00;
      uVar9 = extraout_w12;
      uVar6 = extraout_w9;
      break;
    }
    goto LAB_007f9380;
  case 0x27:
    local_88 = uVar11;
    FUN_008796c0(&local_60,uVar11,0,1,1);
    unaff_x21 = CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58));
    if ((local_60 & 1) != 0) goto LAB_007f95ec;
    param_2 = (ulong *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (uVar3 == 0) {
      uVar11 = 0;
      uVar7 = extraout_x10_05;
      uVar8 = extraout_x11_05;
      uVar10 = extraout_w13_06;
      uVar9 = extraout_w12_05;
      uVar6 = extraout_w9_04;
    }
    else {
      memcpy(param_2,__src,uVar11);
      uVar7 = extraout_x10_06;
      uVar8 = extraout_x11_06;
      uVar10 = extraout_w13_07;
      uVar9 = extraout_w12_06;
      uVar6 = extraout_w9_05;
    }
    lVar5 = 0xd;
    break;
  case 0x28:
    FUN_0080474c(&local_60,&local_98,uVar4,uStack_5c);
    unaff_x21 = CONCAT26(uStack_52,CONCAT24(uStack_54,uStack_58));
    param_2 = (ulong *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if ((local_60 & 1) == 0) {
      lVar5 = 0xf;
      uVar7 = extraout_x10_07;
      uVar8 = extraout_x11_07;
      uVar11 = local_48;
      uVar10 = extraout_w13_08;
      uVar9 = extraout_w12_07;
      uVar6 = extraout_w9_06;
      break;
    }
LAB_007f9380:
    *(long *)(param_1 + 8) = unaff_x21;
    *(ulong **)(param_1 + 0x10) = param_2;
    *(ulong *)(param_1 + 0x18) = local_48;
LAB_007f9170:
    *param_1 = 0xff;
    return;
  }
switchD_007f91d0_caseD_0:
  if (local_90 <= local_88) {
    *param_1 = (char)lVar5;
    param_1[1] = uVar9;
    *(ushort *)(param_1 + 2) = uVar6 & 0xff | (ushort)((int)uVar7 << 8);
    *(undefined2 *)(param_1 + 4) = uVar10;
    *(long *)(param_1 + 8) = unaff_x21;
    *(ulong **)(param_1 + 0x10) = param_2;
    *(ulong *)(param_1 + 0x18) = uVar11;
    *(ulong *)(param_1 + 0x20) = uVar8;
    return;
  }
  param_1[8] = 0xf;
  *(char **)(param_1 + 0x10) = "ServerExtension";
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0xff;
  if (0xf < (uint)lVar5) {
    if (0xfffffffffffffffd < unaff_x21 - 1U) {
      return;
    }
    free(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007f94c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(&switchD_007f94c4::switchdataD_002f6c09)[lVar5] * 4 + 0x7f9178))();
  return;
}


// ===== 007f963c  <rustls::msgs::handshake::ServerExtension_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ServerExtension as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::ServerExtension_as_rustls::msgs::codec::Codec>::encode(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007f9680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007f9684 + (ulong)*(ushort *)(&DAT_002f6c1a + (ulong)*param_1 * 2) * 4))(0);
  return;
}


// ===== 007f9f58  <rustls::msgs::handshake::ClientHelloPayload_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ClientHelloPayload as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::handshake::ClientHelloPayload_as_rustls::msgs::codec::Codec>::read
          (long *param_1,long *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *__ptr;
  long lVar11;
  ulong uVar12;
  undefined1 uVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  undefined8 uVar17;
  byte unaff_w22;
  ulong uVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  undefined8 local_160;
  void *pvStack_158;
  void *local_150;
  long local_148;
  void *pvStack_140;
  long local_138;
  void *local_130;
  long lStack_128;
  long local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined7 uStack_108;
  undefined1 local_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined4 uStack_f6;
  undefined2 uStack_f2;
  long local_f0;
  void *pvStack_e8;
  long local_e0;
  ulong uStack_d8;
  undefined2 local_d0;
  ushort uStack_ce;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined3 uStack_c4;
  undefined4 local_c0;
  undefined3 uStack_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  void *local_b0;
  long lStack_a8;
  long local_a0;
  long local_90;
  void *pvStack_88;
  long local_80;
  long local_78;
  
  uVar2 = param_2[1];
  uVar18 = param_2[2];
  if (uVar2 - uVar18 < 2) {
    param_1[2] = (long)&DAT_002fd811;
    param_1[3] = 0xf;
    *(undefined1 *)(param_1 + 1) = 0xc;
  }
  else {
    uVar12 = uVar18 + 2;
    param_2[2] = uVar12;
    if ((0xfffffffffffffffd < uVar18) || (uVar2 < uVar12)) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail();
    }
    lVar15 = *param_2;
    uVar19 = 9;
    uVar4 = *(ushort *)(lVar15 + uVar18);
    uVar5 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
    if (uVar5 < 0x303) {
      if (uVar5 < 0x301) {
        if (uVar5 == 2) {
          uVar19 = 0;
        }
        else if (uVar5 == 0x300) {
          uVar19 = 1;
        }
      }
      else if (uVar5 == 0x301) {
        uVar19 = 2;
      }
      else if (uVar5 == 0x302) {
        uVar19 = 3;
      }
    }
    else if (uVar5 < 0xfefc) {
      if (uVar5 == 0x303) {
        uVar19 = 4;
      }
      else if (uVar5 == 0x304) {
        uVar19 = 5;
      }
    }
    else if (uVar5 == 0xfefc) {
      uVar19 = 8;
    }
    else if (uVar5 == 0xfefd) {
      uVar19 = 7;
    }
    else if (uVar5 == 0xfeff) {
      uVar19 = 6;
    }
    if (uVar2 - uVar12 < 0x20) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      param_1[2] = (long)"Random";
      param_1[3] = 6;
      goto LAB_007fa1a4;
    }
    uVar14 = uVar18 + 0x22;
    param_2[2] = uVar14;
    if ((0xffffffffffffffdf < uVar12) || (uVar2 < uVar14)) {
LAB_007fa474:
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar12,uVar14,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    puVar1 = (undefined4 *)(lVar15 + uVar12);
    uVar13 = *(undefined1 *)((long)puVar1 + 7);
    local_c0._0_3_ = (undefined3)*puVar1;
    local_c0._3_1_ = (undefined1)*(undefined4 *)((long)puVar1 + 3);
    uStack_bc = (undefined3)((uint)*(undefined4 *)((long)puVar1 + 3) >> 8);
    local_c8._0_3_ = (undefined3)puVar1[2];
    local_c8._3_1_ = (undefined1)*(undefined4 *)((long)puVar1 + 0xb);
    uStack_c4 = (undefined3)((uint)*(undefined4 *)((long)puVar1 + 0xb) >> 8);
    if (uVar2 == uVar14) {
      uVar13 = 0xc;
      pcVar16 = 
      "u8\x06\x03+epEd25519SigningKeyEd25519Signer\x01\x03\x01\x03\x01\x03\x01\x03\x01\x01\x01\x04\x05\x06\x1e\x01B"
      ;
      lVar15 = 2;
    }
    else {
      uVar20 = *(undefined8 *)((long)puVar1 + 0xf);
      uVar17 = *(undefined8 *)((long)puVar1 + 0x17);
      uVar12 = uVar18 + 0x23;
      uVar3 = *(undefined1 *)((long)puVar1 + 0x1f);
      param_2[2] = uVar12;
      if (uVar2 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar14,uVar12,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
      }
      unaff_w22 = *(byte *)(lVar15 + uVar14);
      uVar18 = (ulong)unaff_w22;
      if (uVar18 < 0x21) {
        if (uVar18 <= uVar2 - uVar12) {
          uVar14 = uVar12 + uVar18;
          param_2[2] = uVar14;
          if ((CARRY8(uVar12,uVar18)) || (uVar2 < uVar14)) goto LAB_007fa474;
          pvStack_158 = (void *)0x0;
          local_160 = 0;
          local_148 = 0;
          local_150 = (void *)0x0;
          memcpy(&local_160,(void *)(lVar15 + uVar12),uVar18);
          lVar15 = local_148;
          pvVar10 = local_150;
          pvVar8 = pvStack_158;
          uVar6 = (undefined1)local_160;
          local_b8 = local_160._2_4_;
          uVar7 = local_160._1_1_;
          local_b4 = local_160._6_2_;
          FUN_00806318(&local_160,param_2);
          lVar11 = local_148;
          __ptr = local_150;
          pvVar9 = pvStack_158;
          if (local_160 == 1) {
            param_1[2] = (long)local_150;
            param_1[3] = local_148;
            *param_1 = -1;
            param_1[1] = (long)pvStack_158;
            return;
          }
                    /* try { // try from 007fa254 to 007fa267 has its CatchHandler @ 007fa4c4 */
          FUN_00801934(&local_160,param_2);
          local_138 = local_148;
          pvStack_88 = local_150;
          local_90 = (long)pvStack_158;
          local_80 = local_148;
          if (local_160 == 1) {
            *param_1 = -1;
            param_1[3] = local_148;
            param_1[2] = (long)local_150;
            param_1[1] = (long)pvStack_158;
            if (pvVar9 == (void *)0x0) {
              return;
            }
            free(__ptr);
            return;
          }
          uStack_ce = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
          uStack_118 = local_c0;
          local_101 = (undefined1)uVar17;
          uStack_100 = (undefined7)((ulong)uVar17 >> 8);
          local_110 = local_c8;
          uStack_f8 = uVar6;
          uStack_f7 = uVar7;
          uStack_f2 = local_b4;
          uStack_f6 = local_b8;
          pvStack_140 = local_150;
          local_148 = (long)pvStack_158;
          local_f0 = (long)pvVar8;
          pvStack_e8 = pvVar10;
          uStack_114 = CONCAT13(uVar13,uStack_bc);
          local_150 = (void *)lVar11;
          local_e0 = lVar15;
          uStack_10c = CONCAT13((char)uVar20,uStack_c4);
          uStack_108 = (undefined7)((ulong)uVar20 >> 8);
          local_130 = (void *)0x0;
          local_160 = (long)pvVar9;
          pvStack_158 = __ptr;
          lStack_128 = 8;
          local_120 = 0;
          uStack_f9 = uVar3;
          uStack_d8 = uVar18;
          local_d0 = uVar19;
          if ((ulong)param_2[2] < (ulong)param_2[1]) {
                    /* try { // try from 007fa35c to 007fa367 has its CatchHandler @ 007fa4b0 */
            FUN_008038dc(&local_90,param_2);
            lStack_a8 = local_80;
            local_b0 = pvStack_88;
            local_a0 = local_78;
            if (local_90 == 1) {
              *param_1 = -1;
              param_1[2] = local_80;
              param_1[1] = (long)pvStack_88;
              param_1[3] = local_78;
              FUN_007eefac(&local_160);
              return;
            }
                    /* try { // try from 007fa3a8 to 007fa3af has its CatchHandler @ 007fa498 */
            FUN_007ee380(&local_130);
            local_120 = local_a0;
            lStack_128 = lStack_a8;
            local_130 = local_b0;
            if ((ulong)param_2[2] < (ulong)param_2[1]) {
              uVar13 = 0xf;
              goto LAB_007fa414;
            }
            if (local_a0 != 0) {
              param_1[0x11] = uStack_d8;
              param_1[0x10] = local_e0;
              param_1[0xd] = CONCAT26(uStack_f2,CONCAT42(uStack_f6,CONCAT11(uStack_f7,uStack_f8)));
              param_1[0xc] = CONCAT17(uStack_f9,uStack_100);
              param_1[0xf] = (long)pvStack_e8;
              param_1[0xe] = local_f0;
              param_1[0x12] = CONCAT44(uStack_cc,CONCAT22(uStack_ce,local_d0));
              param_1[5] = local_138;
              param_1[4] = (long)pvStack_140;
              param_1[7] = lStack_a8;
              param_1[6] = (long)local_b0;
              param_1[9] = CONCAT44(uStack_114,uStack_118);
              param_1[8] = local_a0;
              param_1[0xb] = CONCAT17(local_101,uStack_108);
              param_1[10] = CONCAT44(uStack_10c,local_110);
              param_1[1] = (long)pvStack_158;
              *param_1 = local_160;
              param_1[3] = local_148;
              param_1[2] = (long)local_150;
              return;
            }
          }
          uVar13 = 0xc;
LAB_007fa414:
          *(undefined1 *)(param_1 + 1) = uVar13;
          param_1[2] = (long)"ClientHelloPayload";
          param_1[3] = 0x12;
          *param_1 = -1;
          if (pvVar9 != (void *)0x0) {
            free(__ptr);
          }
          if (local_148 != 0) {
            free(pvStack_140);
          }
          FUN_007ee380(&local_130);
          return;
        }
        uVar13 = 0xc;
      }
      else {
        uVar13 = 0xf;
      }
      pcVar16 = "SessionID";
      lVar15 = 9;
    }
    *(undefined1 *)(param_1 + 1) = uVar13;
    *(byte *)((long)param_1 + 9) = unaff_w22;
    param_1[2] = (long)pcVar16;
    param_1[3] = lVar15;
  }
LAB_007fa1a4:
  *param_1 = -1;
  return;
}


// ===== 007fa4e8  <rustls::msgs::handshake::ClientHelloPayload_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::handshake::ClientHelloPayload as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::handshake::ClientHelloPayload_as_rustls::msgs::codec::Codec>::encode
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x8000000000000000;
  FUN_007f23e0(param_1,param_2,local_28);
  return;
}


