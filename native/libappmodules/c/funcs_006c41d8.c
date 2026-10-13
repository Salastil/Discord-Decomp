// ===== 006c41d8  FUN_006c41d8 =====

void FUN_006c41d8(undefined8 param_1)

{
  long lVar1;
  long local_48 [2];
  long local_38;
  
  FUN_006eda68(local_48,param_1);
  while (local_48[0] != 0) {
    lVar1 = local_48[0] + local_38 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x10),*(long *)(lVar1 + 8),1);
    }
    if (*(long *)(lVar1 + 0x110) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x118),*(long *)(lVar1 + 0x110),1);
    }
    FUN_006eda68(local_48,param_1);
  }
  return;
}


// ===== 006c4268  FUN_006c4268 =====

void FUN_006c4268(long param_1)

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


// ===== 006c42b8  FUN_006c42b8 =====

void FUN_006c42b8(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long local_38 [2];
  long local_28;
  
  while( true ) {
    FUN_006edc78(local_38,param_1);
    if (local_38[0] == 0) break;
    pcVar1 = (char *)(local_38[0] + local_28 * 0x10);
    if (*pcVar1 == -1) {
      plVar4 = *(long **)(pcVar1 + 8);
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
        <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow();
      }
    }
  }
  return;
}


// ===== 006c4328  FUN_006c4328 =====

void FUN_006c4328(long *param_1)

{
  if (0 < *param_1) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006c4344  FUN_006c4344 =====

void FUN_006c4344(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_18;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  if (lVar1 == -1) {
    if ((1 < (uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      local_18 = uVar2 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else if (lVar1 != 0) {
    __rustc::__rust_dealloc(uVar2,lVar1,1);
    return;
  }
  return;
}


// ===== 006c43a4  FUN_006c43a4 =====

void FUN_006c43a4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 0x20);
    uVar1 = uVar1 / 0x30;
    do {
      if (puVar2[-4] != 0) {
        __rustc::__rust_dealloc(puVar2[-3],puVar2[-4],1);
      }
      if (puVar2[-1] != 0) {
        __rustc::__rust_dealloc(*puVar2,puVar2[-1],1);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 6;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    __rustc::__rust_dealloc(*param_1,param_1[2] * 0x30,8);
    return;
  }
  return;
}


// ===== 006c4450  FUN_006c4450 =====

void FUN_006c4450(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006c4468  FUN_006c4468 =====

int FUN_006c4468(int *param_1)

{
  int iVar1;
  
  if (*param_1 != -1) {
    close(*param_1);
  }
  if (param_1[1] != -1) {
    close(param_1[1]);
  }
  iVar1 = param_1[2];
  if (iVar1 != -1) {
    iVar1 = close(iVar1);
    return iVar1;
  }
  return iVar1;
}


// ===== 006c44bc  FUN_006c44bc =====

int FUN_006c44bc(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != -1) {
    close(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    close(*(int *)(param_1 + 0x10));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != -1) {
    iVar1 = close(iVar1);
    return iVar1;
  }
  return iVar1;
}


// ===== 006c4510  FUN_006c4510 =====

void FUN_006c4510(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar1 + 0x20);
    do {
      if (0 < *plVar6) {
        __rustc::__rust_dealloc(plVar6[1],*plVar6,1);
      }
      if (plVar6[-4] != 2) {
        if (plVar6[-4] == 0) {
          lVar3 = plVar6[-3];
          if (lVar3 != 0) {
            lVar2 = plVar6[-2];
            uVar4 = 1;
            goto LAB_006c4534;
          }
        }
        else if (plVar6[-3] != 0) {
          lVar2 = plVar6[-2];
          lVar3 = plVar6[-3] << 1;
          uVar4 = 2;
LAB_006c4534:
          __rustc::__rust_dealloc(lVar2,lVar3,uVar4);
        }
      }
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 9;
    } while (lVar5 != 0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __rustc::__rust_dealloc(lVar1,*(long *)(param_1 + 0x20) * 0x48,8);
    return;
  }
  return;
}


// ===== 006c45d0  FUN_006c45d0 =====

void FUN_006c45d0(long *param_1)

{
  if (0 < param_1[4]) {
    __rustc::__rust_dealloc(param_1[5],param_1[4],1);
  }
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      if (param_1[1] != 0) {
        __rustc::__rust_dealloc(param_1[2],param_1[1],1);
        return;
      }
    }
    else if (param_1[1] != 0) {
      __rustc::__rust_dealloc(param_1[2],param_1[1] << 1,2);
      return;
    }
  }
  return;
}


// ===== 006c4650  FUN_006c4650 =====

void FUN_006c4650(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar1 = lVar2;
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
    FUN_006c4510(lVar1);
    lVar1 = lVar1 + 0x38;
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar2,*param_1 * 0x38,8);
    return;
  }
  return;
}


// ===== 006c46bc  FUN_006c46bc =====

void FUN_006c46bc(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006c46d4  FUN_006c46d4 =====

void FUN_006c46d4(ulong *param_1)

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


// ===== 006c4724  FUN_006c4724 =====

void FUN_006c4724(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006c473c  FUN_006c473c =====

void FUN_006c473c(undefined8 *param_1)

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
    <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
    ::drop_slow();
    return;
  }
  return;
}


// ===== 006c4760  FUN_006c4760 =====

void FUN_006c4760(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 006c4770 to 006c4773 has its CatchHandler @ 006c47b0 */
  <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop();
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
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 006c47e8  FUN_006c47e8 =====

void FUN_006c47e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 006c4808 to 006c480f has its CatchHandler @ 006c4868 */
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    __rustc::__rust_dealloc(uVar1,puVar2[1],puVar2[2]);
  }
  plVar5 = (long *)param_1[2];
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
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow
                (param_1 + 2);
      return;
    }
  }
  return;
}


// ===== 006c48a0  FUN_006c48a0 =====

void FUN_006c48a0(undefined8 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  puVar1 = (undefined1 *)*param_1;
  lVar2 = param_1[1];
  *puVar1 = 0;
  if (lVar2 != 0) {
    __rustc::__rust_dealloc(puVar1,lVar2,1);
    return;
  }
  return;
}


// ===== 006c48c0  FUN_006c48c0 =====

void FUN_006c48c0(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006c48d8  FUN_006c48d8 =====

void FUN_006c48d8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
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
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x10);
    do {
      if ((puVar4[-2] != 0) && (puVar4[-1] != 0)) {
        __rustc::__rust_dealloc(*puVar4,puVar4[-1] << 4,8);
      }
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 0xe;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar2,*param_1 * 0x70,8);
  }
  lVar2 = param_1[3];
  if (lVar2 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = param_1[4];
    local_50 = param_1[5];
    local_88 = 0;
    local_68 = 0;
    lStack_80 = lVar2;
    lStack_60 = lVar2;
    local_58 = local_78;
  }
  local_90 = (ulong)(lVar2 != 0);
  local_70 = local_90;
  FUN_006ede88(local_48,&local_90);
  while (local_48[0] != 0) {
    plVar1 = (long *)(local_48[0] + local_38 * 0x70);
    if ((*plVar1 != 0) && (plVar1[1] != 0)) {
      __rustc::__rust_dealloc(plVar1[2],plVar1[1] << 4,8);
    }
    FUN_006ede88(local_48,&local_90);
  }
  return;
}


// ===== 006c49f0  FUN_006c49f0 =====

void FUN_006c49f0(long *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong local_80 [3];
  long local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long local_38 [2];
  long local_28;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = param_1[1];
    local_40 = param_1[2];
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar5;
    lStack_50 = lVar5;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar5 != 0);
  local_60 = local_80[0];
  while( true ) {
    FUN_006edc78(local_38,local_80);
    if (local_38[0] == 0) break;
    pcVar1 = (char *)(local_38[0] + local_28 * 0x10);
    if (*pcVar1 == -1) {
      plVar4 = *(long **)(pcVar1 + 8);
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
                    /* try { // try from 006c4a78 to 006c4a7b has its CatchHandler @ 006c4a90 */
        <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow();
      }
    }
  }
  return;
}


// ===== 006c4aa8  FUN_006c4aa8 =====

void FUN_006c4aa8(ulong param_1)

{
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045c2b2,0x55,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978548);
}


// ===== 006c4ad0  FUN_006c4ad0 =====

void FUN_006c4ad0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10),1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x28) << 4,8);
    return;
  }
  return;
}


// ===== 006c4b20  FUN_006c4b20 =====

int FUN_006c4b20(int *param_1)

{
  int iVar1;
  
  iVar1 = close(*param_1);
  return iVar1;
}


// ===== 006c4b28  FUN_006c4b28 =====

void FUN_006c4b28(undefined8 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
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
                    /* try { // try from 006c4b54 to 006c4b5b has its CatchHandler @ 006c4b84 */
    <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(param_1);
  }
  puVar1 = (undefined1 *)param_1[1];
  lVar5 = param_1[2];
  *puVar1 = 0;
  if (lVar5 != 0) {
    __rustc::__rust_dealloc(puVar1,lVar5,1);
    return;
  }
  return;
}


// ===== 006c4ba4  FUN_006c4ba4 =====

void FUN_006c4ba4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 0x20);
    uVar1 = uVar1 / 0x30;
    do {
      if (puVar2[-4] != 0) {
        __rustc::__rust_dealloc(puVar2[-3],puVar2[-4],1);
      }
      if (puVar2[-1] != 0) {
        __rustc::__rust_dealloc(*puVar2,puVar2[-1],1);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 6;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    __rustc::__rust_dealloc(*param_1,param_1[2] * 0x30,8);
    return;
  }
  return;
}


// ===== 006c4c50  FUN_006c4c50 =====

void FUN_006c4c50(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 8);
    uVar1 = uVar1 / 0x18;
    do {
      if (puVar2[-1] != 0) {
        __rustc::__rust_dealloc(*puVar2,puVar2[-1],1);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    __rustc::__rust_dealloc(*param_1,param_1[2] * 0x18,8);
    return;
  }
  return;
}


// ===== 006c4ce8  FUN_006c4ce8 =====

void FUN_006c4ce8(long *param_1)

{
  long lVar1;
  ulong local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long local_38 [2];
  long local_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = param_1[1];
    local_40 = param_1[2];
    local_78 = 0;
    local_58 = 0;
    lStack_70 = lVar1;
    lStack_50 = lVar1;
    local_48 = local_68;
  }
  local_80 = (ulong)(lVar1 != 0);
  local_60 = local_80;
  FUN_006eda68(local_38,&local_80);
  while (local_38[0] != 0) {
    lVar1 = local_38[0] + local_28 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x10),*(long *)(lVar1 + 8),1);
    }
    if (0 < *(long *)(lVar1 + 0x110)) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x118),*(long *)(lVar1 + 0x110),1);
    }
    FUN_006eda68(local_38,&local_80);
  }
  return;
}


// ===== 006c4da4  FUN_006c4da4 =====

void FUN_006c4da4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    __rustc::__rust_dealloc(param_2,param_1 * 0x18,8);
    return;
  }
  return;
}


// ===== 006c4dc4  FUN_006c4dc4 =====

long * FUN_006c4dc4(long *param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t *psVar6;
  
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  plVar3 = param_1;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar5[-1] != 0) {
        plVar3 = (long *)__rustc::__rust_dealloc(*puVar5,puVar5[-1],1);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    plVar3 = (long *)__rustc::__rust_dealloc(lVar1,*param_1 * 0x18,8);
  }
  lVar1 = param_1[4];
  lVar4 = param_1[5];
  if (lVar4 != 0) {
    psVar6 = (size_t *)(lVar1 + 8);
    do {
      uVar2 = munmap((void *)psVar6[-1],*psVar6);
      plVar3 = (long *)(ulong)uVar2;
      lVar4 = lVar4 + -1;
      psVar6 = psVar6 + 2;
    } while (lVar4 != 0);
  }
  if (param_1[3] != 0) {
    plVar3 = (long *)__rustc::__rust_dealloc(lVar1,param_1[3] << 4,8);
    return plVar3;
  }
  return plVar3;
}


// ===== 006c4e7c  FUN_006c4e7c =====

uint * FUN_006c4e7c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if (*param_1 < 2) {
    uVar2 = param_1[2];
    puVar3 = param_1;
  }
  else {
    uVar1 = close(param_1[1]);
    uVar2 = param_1[2];
    puVar3 = (uint *)(ulong)uVar1;
  }
  if (uVar2 < 2) {
    uVar2 = param_1[4];
  }
  else {
    uVar2 = close(param_1[3]);
    puVar3 = (uint *)(ulong)uVar2;
    uVar2 = param_1[4];
  }
  if (uVar2 < 2) {
    return puVar3;
  }
  uVar2 = close(param_1[5]);
  return (uint *)(ulong)uVar2;
}


// ===== 006c4ef4  FUN_006c4ef4 =====

void FUN_006c4ef4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_1[2] + -1;
  if (param_1[2] == 0) {
                    /* try { // try from 006c4f84 to 006c4f97 has its CatchHandler @ 006c4fa0 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,lVar1,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009785d8)
    ;
  }
  puVar2 = (undefined8 *)param_1[1];
  if (lVar1 != 0) {
    lVar1 = lVar1 * 8;
    puVar3 = puVar2;
    do {
                    /* try { // try from 006c4f38 to 006c4f3b has its CatchHandler @ 006c4f9c */
      auVar4 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_raw(*puVar3);
      *auVar4._0_8_ = 0;
      if (auVar4._8_8_ != 0) {
        __rustc::__rust_dealloc(auVar4._0_8_,auVar4._8_8_,1);
      }
      lVar1 = lVar1 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(puVar2,*param_1 << 3,8);
    return;
  }
  return;
}


// ===== 006c4fc8  FUN_006c4fc8 =====

void FUN_006c4fc8(long param_1,ulong param_2)

{
  size_t __n;
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    __n = uVar1 - param_2;
    if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (param_2,uVar1,uVar1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977d90);
    }
    memmove(*(void **)(param_1 + 8),(void *)((long)*(void **)(param_1 + 8) + param_2),__n);
    if (__n <= *(ulong *)(param_1 + 0x10)) {
      *(size_t *)(param_1 + 0x10) = __n;
    }
  }
  return;
}


// ===== 006c5028  FUN_006c5028 =====

void FUN_006c5028(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 006c504c to 006c5053 has its CatchHandler @ 006c5084 */
    (*(code *)*puVar1)(*param_1);
  }
  if (puVar1[1] != 0) {
    __rustc::__rust_dealloc(*param_1,puVar1[1],puVar1[2]);
    return;
  }
  return;
}


// ===== 006c50a4  FUN_006c50a4 =====

void FUN_006c50a4(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006c50bc  FUN_006c50bc =====

void FUN_006c50bc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      uVar1 = *(undefined8 *)(param_1 + -0x18);
      puVar2 = *(undefined8 **)(param_1 + -0x10);
      if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 006c50f4 to 006c50fb has its CatchHandler @ 006c5124 */
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        __rustc::__rust_dealloc(uVar1,puVar2[1],puVar2[2]);
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 0x10;
    } while (param_2 != 0);
  }
  return;
}


// ===== 006c5164  FUN_006c5164 =====

void FUN_006c5164(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    __rustc::__rust_dealloc(param_1[4],param_1[3],1);
    return;
  }
  return;
}


// ===== 006c51b0  FUN_006c51b0 =====

void FUN_006c51b0(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
  }
  if (0 < param_1[3]) {
    __rustc::__rust_dealloc(param_1[4],param_1[3],1);
    return;
  }
  return;
}


// ===== 006c5200  FUN_006c5200 =====

void FUN_006c5200(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x1d0);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 006c522c to 006c5233 has its CatchHandler @ 006c527c */
    <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
    ::drop_slow(param_1 + 0x1d0);
  }
                    /* try { // try from 006c5234 to 006c523b has its CatchHandler @ 006c5294 */
  FUN_006c304c(param_1 + 0x1d8);
                    /* try { // try from 006c5240 to 006c5243 has its CatchHandler @ 006c528c */
  FUN_006c311c(*(undefined8 *)(param_1 + 0x1f8),*(undefined8 *)(param_1 + 0x200));
  if (*(long *)(param_1 + 8) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8) * 0x18,8);
  }
  munmap(*(void **)(param_1 + 0x208),*(size_t *)(param_1 + 0x210));
  FUN_006c4dc4(param_1 + 0x218);
  return;
}


// ===== 006c52dc  core::panicking::assert_failed<[u8;4usize],&[u8]> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<[u8; 4usize], &[u8]> */

void __rustcall
core::panicking::assert_failed<[u8_4usize],&[u8]>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
                    /* WARNING: Subroutine does not return */
  assert_failed_inner(param_1,&local_20,&DAT_00976dc8,&uStack_18,&DAT_00976de8,param_4,param_5,
                      param_6);
}


// ===== 006c5314  core::panicking::assert_failed<i32,i32> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<i32, i32> */

void __rustcall core::panicking::assert_failed<i32,i32>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0070f2bc(param_1,param_2,&DAT_00976e08);
}


// ===== 006c5330  core::panicking::assert_failed<i16,i16> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<i16, i16> */

void __rustcall core::panicking::assert_failed<i16,i16>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0070f2bc(param_1,param_2,&DAT_00976e28);
}


// ===== 006c534c  FUN_006c534c =====

/* WARNING: Removing unreachable block (ram,0x006c5538) */
/* WARNING: Removing unreachable block (ram,0x006c5564) */

undefined1  [16] FUN_006c534c(undefined8 *param_1,uint param_2,long *param_3)

{
  void *__src;
  void *__buf;
  size_t sVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong __n;
  ulong uVar13;
  undefined1 auVar14 [16];
  long local_68;
  
  __buf = (void *)*param_1;
  sVar1 = param_1[1];
  puVar11 = param_1 + 2;
  uVar9 = *puVar11;
  uVar2 = *(undefined1 *)(param_1 + 4);
  uVar12 = param_1[3];
  uVar13 = 0;
  if (0x7ffffffffffffffe < sVar1) {
    sVar1 = 0x7fffffffffffffff;
  }
  do {
    __n = uVar12 - uVar9;
    uVar8 = uVar12;
    uVar10 = uVar9;
    if (uVar9 <= uVar12 && __n != 0) goto LAB_006c53c8;
LAB_006c540c:
    uVar9 = read(0,__buf,sVar1);
    if (uVar9 == 0xffffffffffffffff) {
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      if (iVar3 == 9) {
        uVar9 = 0;
        goto LAB_006c54dc;
      }
      uVar12 = 0;
      uVar9 = 0;
      __n = (long)iVar3 << 0x20 | 2;
      uVar10 = 0;
      *puVar11 = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = uVar2;
      uVar8 = 2;
LAB_006c547c:
      if (uVar8 != 2) {
        uVar7 = (uint)(__n >> 0x20);
        if (0x2a < __n >> 0x20) {
          uVar7 = 0xffffffff;
        }
        if ((uVar7 & 0xff) == 0x23) goto LAB_006c53c0;
LAB_006c55ec:
        uVar6 = 1;
        uVar13 = __n;
        goto LAB_006c55f4;
      }
                    /* try { // try from 006c5484 to 006c5497 has its CatchHandler @ 006c56b4 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      iVar3 = (**(code **)(lVar5 + 0x10))(__n >> 0x20);
      if (iVar3 == 0) goto LAB_006c55ec;
LAB_006c53c0:
      while (__n = uVar9 - uVar10, uVar8 = uVar9, uVar10 <= uVar9 && __n != 0) {
LAB_006c53c8:
        while( true ) {
          uVar9 = uVar8;
          if (__buf != (void *)0x0) goto LAB_006c54f4;
          uVar8 = __n & 3;
          if (1 < uVar8) goto LAB_006c547c;
          if (uVar8 == 0) break;
          if (*(char *)(__n + 0x1f) != '#') goto LAB_006c55ec;
          local_68 = __n - 1;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          __n = uVar9 - uVar10;
          uVar8 = uVar9;
          if (uVar9 < uVar10 || __n == 0) goto LAB_006c540c;
        }
        if (*(char *)(__n + 0x10) != '#') goto LAB_006c55ec;
      }
      goto LAB_006c540c;
    }
LAB_006c54dc:
    uVar10 = 0;
    param_1[2] = 0;
    param_1[3] = uVar9;
    *(undefined1 *)(param_1 + 4) = uVar2;
    uVar12 = uVar9;
    __n = uVar9;
LAB_006c54f4:
    __src = (void *)((long)__buf + uVar10);
    if (__n < 0x10) {
      uVar8 = 0;
      if (__n != 0) {
        do {
          if ((uint)*(byte *)((long)__src + uVar8) == (param_2 & 0xff)) goto LAB_006c5618;
          uVar8 = uVar8 + 1;
        } while (__n != uVar8);
      }
    }
    else {
      auVar14 = core::slice::memchr::memchr_aligned(param_2,(long)__buf + uVar10,__n);
      uVar8 = auVar14._8_8_;
      if (auVar14._0_8_ == 1) {
LAB_006c5618:
        if (__n <= uVar8) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar8,__n,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976e48);
        }
        sVar1 = uVar8 + 1;
        lVar5 = param_3[2];
        if ((ulong)(*param_3 - lVar5) <= uVar8) {
          FUN_006cecec(param_3,lVar5,sVar1,1,1);
          lVar5 = param_3[2];
        }
        memcpy((void *)(param_3[1] + lVar5),__src,sVar1);
        param_3[2] = lVar5 + sVar1;
        if (uVar10 + sVar1 <= uVar9) {
          uVar9 = uVar10 + sVar1;
        }
        uVar13 = sVar1 + uVar13;
        *puVar11 = uVar9;
        break;
      }
    }
    lVar5 = param_3[2];
    if ((ulong)(*param_3 - lVar5) < __n) {
      FUN_006cecec(param_3,lVar5,__n,1,1);
      lVar5 = param_3[2];
LAB_006c5598:
      memcpy((void *)(param_3[1] + lVar5),__src,__n);
    }
    else if (uVar9 != uVar10) goto LAB_006c5598;
    *puVar11 = uVar9;
    param_3[2] = lVar5 + __n;
    uVar13 = __n + uVar13;
  } while (__n != 0);
  uVar6 = 0;
LAB_006c55f4:
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = uVar6;
  return auVar14;
}


// ===== 006c56d0  FUN_006c56d0 =====

undefined1  [16] FUN_006c56d0(int param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  size_t __nbytes;
  undefined1 auVar1 [16];
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  ulong local_78;
  ulong local_70;
  
  uVar6 = param_2[2];
  uVar12 = *param_2;
  if (param_3 == 1) {
    if (param_4 < 0xfffffffffffffc00) {
      uVar11 = param_4 + 0x400;
      uVar7 = (param_4 - (uVar11 & 0x1fff)) + 0x2400;
      uVar8 = 0x2000;
      if (uVar11 <= uVar7) {
        uVar8 = uVar7;
      }
      if ((uVar11 & 0x1fff) != 0) {
        uVar11 = uVar8;
      }
      if (param_4 == 0) goto joined_r0x006c575c;
    }
    else {
      uVar11 = 0x2000;
    }
  }
  else {
    uVar11 = 0x2000;
joined_r0x006c575c:
    if (uVar12 - uVar6 < 0x20) {
      auVar13 = FUN_006ced78(param_1,param_2);
      if (auVar13._0_8_ == 1) {
        return auVar13;
      }
      if (auVar13._8_8_ == 0) {
        return ZEXT816(0) << 0x40;
      }
      uVar7 = param_2[2];
      uVar8 = *param_2;
      uVar10 = uVar8;
      if (uVar7 != uVar8) goto LAB_006c57e4;
      goto LAB_006c57b8;
    }
  }
  uVar7 = uVar6;
  uVar10 = uVar12;
  uVar8 = uVar12;
  if (uVar6 != uVar12) goto LAB_006c57e4;
LAB_006c57b8:
  do {
    uVar10 = uVar8;
    if (uVar8 == uVar12) {
      auVar13 = FUN_006ced78(param_1,param_2);
      if (auVar13._0_8_ == 1) {
        return auVar13;
      }
      uVar7 = param_2[2];
      if (auVar13._8_8_ == 0) {
        sVar3 = 0;
LAB_006c5948:
        auVar1._8_8_ = uVar7 - uVar6;
        auVar1._0_8_ = sVar3;
        return auVar1;
      }
      uVar10 = *param_2;
    }
LAB_006c57e4:
    do {
      if (uVar7 == uVar10) {
        uVar8 = uVar10 + 0x20;
        if (uVar10 + 0x20 <= uVar10 * 2) {
          uVar8 = uVar10 * 2;
        }
        FUN_006df348(&local_78,uVar10,param_2[1],uVar8,1,1);
        if (local_78 == 1) {
          uVar10 = 0x2600000003;
LAB_006c591c:
          auVar13._8_8_ = uVar10;
          auVar13._0_8_ = 1;
          return auVar13;
        }
        *param_2 = uVar8;
        param_2[1] = local_70;
        uVar9 = local_70;
      }
      else {
        uVar8 = *param_2;
        uVar9 = param_2[1];
      }
      __nbytes = uVar11;
      if (uVar8 - uVar7 <= uVar11) {
        __nbytes = uVar8 - uVar7;
      }
      if (0x7ffffffffffffffe < __nbytes) {
        __nbytes = 0x7fffffffffffffff;
      }
      sVar3 = read(param_1,(void *)(uVar9 + uVar7),__nbytes);
      if (sVar3 == -1) {
        piVar4 = (int *)__errno();
        do {
          iVar2 = *piVar4;
          if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
          }
          uVar10 = (long)iVar2 << 0x20 | 2;
          local_78 = uVar10;
                    /* try { // try from 006c587c to 006c588b has its CatchHandler @ 006c5960 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
          if (iVar2 == 0) {
            param_2[2] = uVar7;
            goto LAB_006c591c;
          }
          sVar3 = read(param_1,(void *)(uVar9 + uVar7),__nbytes);
        } while (sVar3 == -1);
        uVar7 = sVar3 + uVar7;
        param_2[2] = uVar7;
        if (sVar3 == 0) {
          sVar3 = 0;
          goto LAB_006c5948;
        }
      }
      else {
        uVar7 = sVar3 + uVar7;
        param_2[2] = uVar7;
        if (sVar3 == 0) goto LAB_006c5948;
      }
      if ((param_3 & 1) == 0) {
        uVar11 = 0xffffffffffffffff;
      }
      uVar10 = uVar8;
    } while (uVar7 != uVar8);
  } while( true );
}


// ===== 006c5978  FUN_006c5978 =====

undefined1  [16] FUN_006c5978(ulong *param_1,ulong param_2,ulong param_3)

{
  size_t __nbytes;
  undefined1 auVar1 [16];
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  ulong local_78;
  ulong local_70;
  
  uVar11 = param_1[2];
  uVar10 = *param_1;
  if (param_2 == 1) {
    if (param_3 < 0xfffffffffffffc00) {
      uVar9 = param_3 + 0x400;
      uVar12 = (param_3 - (uVar9 & 0x1fff)) + 0x2400;
      uVar6 = 0x2000;
      if (uVar9 <= uVar12) {
        uVar6 = uVar12;
      }
      if ((uVar9 & 0x1fff) != 0) {
        uVar9 = uVar6;
      }
      if (param_3 == 0) goto joined_r0x006c5a00;
    }
    else {
      uVar9 = 0x2000;
    }
  }
  else {
    uVar9 = 0x2000;
joined_r0x006c5a00:
    if (uVar10 - uVar11 < 0x20) {
      auVar13 = FUN_006ceef0(param_1);
      if (auVar13._0_8_ == 1) {
        return auVar13;
      }
      if (auVar13._8_8_ == 0) {
        return ZEXT816(0) << 0x40;
      }
      uVar12 = param_1[2];
      uVar6 = *param_1;
      uVar8 = uVar6;
      if (uVar12 != uVar6) goto LAB_006c5a90;
      goto LAB_006c5a68;
    }
  }
  uVar8 = uVar10;
  uVar6 = uVar10;
  uVar12 = uVar11;
  if (uVar11 != uVar10) goto LAB_006c5a90;
LAB_006c5a68:
  do {
    uVar8 = uVar6;
    if (uVar6 == uVar10) {
      auVar13 = FUN_006ceef0(param_1);
      if (auVar13._0_8_ == 1) {
        return auVar13;
      }
      uVar12 = param_1[2];
      if (auVar13._8_8_ == 0) {
        sVar3 = 0;
LAB_006c5be8:
        auVar1._8_8_ = uVar12 - uVar11;
        auVar1._0_8_ = sVar3;
        return auVar1;
      }
      uVar8 = *param_1;
    }
LAB_006c5a90:
    do {
      if (uVar12 == uVar8) {
        uVar6 = uVar8 + 0x20;
        if (uVar8 + 0x20 <= uVar8 * 2) {
          uVar6 = uVar8 * 2;
        }
        FUN_006df348(&local_78,uVar8,param_1[1],uVar6,1,1);
        if (local_78 == 1) {
          uVar8 = 0x2600000003;
LAB_006c5bbc:
          auVar13._8_8_ = uVar8;
          auVar13._0_8_ = 1;
          return auVar13;
        }
        *param_1 = uVar6;
        param_1[1] = local_70;
        uVar7 = local_70;
      }
      else {
        uVar6 = *param_1;
        uVar7 = param_1[1];
      }
      __nbytes = uVar9;
      if (uVar6 - uVar12 <= uVar9) {
        __nbytes = uVar6 - uVar12;
      }
      if (0x7ffffffffffffffe < __nbytes) {
        __nbytes = 0x7fffffffffffffff;
      }
      sVar3 = read(0,(void *)(uVar7 + uVar12),__nbytes);
      if (sVar3 == -1) {
        piVar4 = (int *)__errno();
        do {
          iVar2 = *piVar4;
          if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
          }
          uVar8 = (long)iVar2 << 0x20 | 2;
          local_78 = uVar8;
                    /* try { // try from 006c5b20 to 006c5b2f has its CatchHandler @ 006c5c00 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
          if (iVar2 == 0) {
            param_1[2] = uVar12;
            goto LAB_006c5bbc;
          }
          sVar3 = read(0,(void *)(uVar7 + uVar12),__nbytes);
        } while (sVar3 == -1);
        uVar12 = sVar3 + uVar12;
        param_1[2] = uVar12;
        if (sVar3 == 0) {
          sVar3 = 0;
          goto LAB_006c5be8;
        }
      }
      else {
        uVar12 = sVar3 + uVar12;
        param_1[2] = uVar12;
        if (sVar3 == 0) goto LAB_006c5be8;
      }
      if ((param_2 & 1) == 0) {
        uVar9 = 0xffffffffffffffff;
      }
      uVar8 = uVar6;
    } while (uVar12 != uVar6);
  } while( true );
}


// ===== 006c5c18  FUN_006c5c18 =====

undefined1  [16] FUN_006c5c18(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  size_t __nbytes;
  undefined1 auVar1 [16];
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  ulong local_78;
  ulong local_70;
  
  uVar7 = param_2[2];
  uVar13 = *param_2;
  if (param_3 == 1) {
    if (param_4 < 0xfffffffffffffc00) {
      uVar12 = param_4 + 0x400;
      uVar8 = (param_4 - (uVar12 & 0x1fff)) + 0x2400;
      uVar9 = 0x2000;
      if (uVar12 <= uVar8) {
        uVar9 = uVar8;
      }
      if ((uVar12 & 0x1fff) != 0) {
        uVar12 = uVar9;
      }
      if (param_4 == 0) goto joined_r0x006c5ca4;
    }
    else {
      uVar12 = 0x2000;
    }
  }
  else {
    uVar12 = 0x2000;
joined_r0x006c5ca4:
    if (uVar13 - uVar7 < 0x20) {
      auVar14 = FUN_006cf068(param_1,param_2);
      if (auVar14._0_8_ == 1) {
        return auVar14;
      }
      if (auVar14._8_8_ == 0) {
        return ZEXT816(0) << 0x40;
      }
      uVar8 = param_2[2];
      uVar9 = *param_2;
      piVar6 = (int *)*param_1;
      uVar11 = uVar9;
      if (uVar8 != uVar9) goto LAB_006c5d3c;
      goto LAB_006c5d10;
    }
  }
  piVar6 = (int *)*param_1;
  uVar8 = uVar7;
  uVar11 = uVar13;
  uVar9 = uVar13;
  if (uVar7 != uVar13) goto LAB_006c5d3c;
LAB_006c5d10:
  do {
    uVar11 = uVar9;
    if (uVar9 == uVar13) {
      auVar14 = FUN_006cf068(param_1,param_2);
      if (auVar14._0_8_ == 1) {
        return auVar14;
      }
      uVar8 = param_2[2];
      if (auVar14._8_8_ == 0) {
        sVar3 = 0;
LAB_006c5ea0:
        auVar1._8_8_ = uVar8 - uVar7;
        auVar1._0_8_ = sVar3;
        return auVar1;
      }
      uVar11 = *param_2;
    }
LAB_006c5d3c:
    do {
      if (uVar8 == uVar11) {
        uVar9 = uVar11 + 0x20;
        if (uVar11 + 0x20 <= uVar11 * 2) {
          uVar9 = uVar11 * 2;
        }
        FUN_006df348(&local_78,uVar11,param_2[1],uVar9,1,1);
        if (local_78 == 1) {
          uVar11 = 0x2600000003;
LAB_006c5e74:
          auVar14._8_8_ = uVar11;
          auVar14._0_8_ = 1;
          return auVar14;
        }
        *param_2 = uVar9;
        param_2[1] = local_70;
        uVar10 = local_70;
      }
      else {
        uVar9 = *param_2;
        uVar10 = param_2[1];
      }
      __nbytes = uVar12;
      if (uVar9 - uVar8 <= uVar12) {
        __nbytes = uVar9 - uVar8;
      }
      if (0x7ffffffffffffffe < __nbytes) {
        __nbytes = 0x7fffffffffffffff;
      }
      sVar3 = read(*piVar6,(void *)(uVar10 + uVar8),__nbytes);
      if (sVar3 == -1) {
        piVar4 = (int *)__errno();
        do {
          iVar2 = *piVar4;
          if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
          }
          uVar11 = (long)iVar2 << 0x20 | 2;
          local_78 = uVar11;
                    /* try { // try from 006c5dd4 to 006c5de3 has its CatchHandler @ 006c5eb8 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
          if (iVar2 == 0) {
            param_2[2] = uVar8;
            goto LAB_006c5e74;
          }
          sVar3 = read(*piVar6,(void *)(uVar10 + uVar8),__nbytes);
        } while (sVar3 == -1);
        uVar8 = sVar3 + uVar8;
        param_2[2] = uVar8;
        if (sVar3 == 0) {
          sVar3 = 0;
          goto LAB_006c5ea0;
        }
      }
      else {
        uVar8 = sVar3 + uVar8;
        param_2[2] = uVar8;
        if (sVar3 == 0) goto LAB_006c5ea0;
      }
      if ((param_3 & 1) == 0) {
        uVar12 = 0xffffffffffffffff;
      }
      uVar11 = uVar9;
    } while (uVar8 != uVar9);
  } while( true );
}


// ===== 006c5ed0  FUN_006c5ed0 =====

void FUN_006c5ed0(void)

{
  undefined1 uStack_11;
  
  FUN_0070e928(&uStack_11,&DAT_0045ad44,0x7b);
  FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006c5ef8  std::panicking::begin_panic<&str> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::begin_panic<&str> */

void __rustcall
std::panicking::begin_panic<&str>
          (undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  long lStack_98;
  void *pvStack_90;
  size_t sStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  puVar1 = (undefined8 *)
           sys::backtrace::
           __rust_end_short_backtrace<std::panicking::begin_panic<&str>::_closure_0_,_>(&local_28);
  pcStack_78 = FUN_006c5f14;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(long *)(param_3 + 0x188) == 0) {
    uVar2 = param_4[6];
  }
  else {
    <alloc::string::alloc::string::String>::from_utf8_lossy
              (&lStack_98,*(long *)(param_3 + 0x188),*(undefined8 *)(param_3 + 400));
    if (lStack_98 == -1) {
      if (sStack_88 == 0) {
        uVar2 = param_4[6];
        goto joined_r0x006c608c;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)__rustc::__rust_alloc(sStack_88,1);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        ::alloc::raw_vec::handle_error(1,sStack_88);
      }
      memcpy(__dest,pvStack_90,sStack_88);
    }
    else if (lStack_98 == -2) {
      puVar1[1] = pvStack_90;
      puVar1[2] = sStack_88;
      *puVar1 = 0xffffffffffffffff;
      return;
    }
    uVar2 = param_4[6];
  }
joined_r0x006c608c:
  if (uVar2 != 0) {
    if (*(ushort *)(param_5 + 0x102) < 5) {
      if (uVar2 - 1 < *(ulong *)(param_5 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x006c601c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_006c6020 +
                  (ulong)(byte)(&DAT_0045a6c6)
                               [*(long *)(*(long *)(param_5 + 0x78) + (uVar2 - 1) * 0x18)] * 4))();
        return;
      }
    }
    else if (uVar2 < *(ulong *)(param_5 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x006c6064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_006c6068 +
                (ulong)(byte)(&DAT_0045a698)[*(long *)(*(long *)(param_5 + 0x78) + uVar2 * 0x18)] *
                4))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x006c6174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_006c6178 + (ulong)(byte)(&DAT_0045a6f4)[*param_4] * 4))();
  return;
}


// ===== 006c5f14  FUN_006c5f14 =====

void FUN_006c5f14(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  void *__dest;
  ulong uVar1;
  long local_68;
  void *pvStack_60;
  size_t local_58;
  
  if (*(long *)(param_3 + 0x188) == 0) {
    uVar1 = param_4[6];
  }
  else {
    <alloc::string::alloc::string::String>::from_utf8_lossy
              (&local_68,*(long *)(param_3 + 0x188),*(undefined8 *)(param_3 + 400));
    if (local_68 == -1) {
      if (local_58 == 0) {
        uVar1 = param_4[6];
        goto joined_r0x006c608c;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)__rustc::__rust_alloc(local_58,1);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,local_58);
      }
      memcpy(__dest,pvStack_60,local_58);
    }
    else if (local_68 == -2) {
      param_1[1] = pvStack_60;
      param_1[2] = local_58;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    uVar1 = param_4[6];
  }
joined_r0x006c608c:
  if (uVar1 != 0) {
    if (*(ushort *)(param_5 + 0x102) < 5) {
      if (uVar1 - 1 < *(ulong *)(param_5 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x006c601c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_006c6020 +
                  (ulong)(byte)(&DAT_0045a6c6)
                               [*(long *)(*(long *)(param_5 + 0x78) + (uVar1 - 1) * 0x18)] * 4))();
        return;
      }
    }
    else if (uVar1 < *(ulong *)(param_5 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x006c6064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_006c6068 +
                (ulong)(byte)(&DAT_0045a698)[*(long *)(*(long *)(param_5 + 0x78) + uVar1 * 0x18)] *
                4))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x006c6174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_006c6178 + (ulong)(byte)(&DAT_0045a6f4)[*param_4] * 4))();
  return;
}


// ===== 006c6384  FUN_006c6384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c6384(undefined8 *param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 ulong param_5,undefined8 param_6,long param_7)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 unaff_x22;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 unaff_x28;
  undefined1 auVar17 [16];
  long local_d8;
  ulong uStack_d0;
  long local_c8;
  long lStack_c0;
  ulong local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ushort local_98;
  uint local_90 [2];
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  
  cVar2 = *(char *)(param_4 + 0x49);
  uVar11 = *(ulong *)(param_4 + 0x30);
  lVar7 = 0xc;
  if (cVar2 != '\b') {
    lVar7 = 4;
  }
  uVar12 = (*(long *)(param_4 + 0x38) - uVar11) + lVar7;
  if (param_5 < uVar12 || uVar11 <= param_5 - uVar12) {
    param_1[2] = param_4;
    uVar16 = _DAT_00371d30;
    param_1[1] = _UNK_00371d38;
    *param_1 = uVar16;
    return;
  }
  lVar6 = *(long *)(param_4 + 0x170);
  uVar8 = 0;
  uVar10 = 0;
  lStack_c0 = lVar6 + 0x10;
  uVar9 = *(long *)(param_4 + 0x28) + uVar11;
  uVar12 = (param_5 - lVar7) - *(long *)(param_4 + 0x38);
  do {
    bVar3 = *(byte *)(uVar9 + uVar12);
    if (((int)uVar10 == 0x3f) && (1 < bVar3)) {
      uVar5 = 6;
      goto LAB_006c6450;
    }
    uVar8 = ((ulong)bVar3 & 0x7f) << (uVar10 & 0x3f) | uVar8;
    if (-1 < (char)bVar3) {
      uStack_d0 = ~uVar12;
      local_d8 = *(long *)(param_4 + 0x28) + uVar11 + uVar12 + 1;
      if (uVar8 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x3a;
        *param_1 = 1;
        return;
      }
      if (uVar8 - 1 < *(ulong *)(lVar6 + 0x20)) {
        lVar7 = *(long *)(lVar6 + 0x18) + (uVar8 - 1) * 0x70;
        goto LAB_006c64c0;
      }
      lVar14 = *(long *)(lVar6 + 0x28);
      if (lVar14 == 0) goto LAB_006c6690;
      lVar6 = *(long *)(lVar6 + 0x30);
      goto LAB_006c6608;
    }
    bVar4 = uVar12 != 0xffffffffffffffff;
    uVar12 = uVar12 + 1;
    uVar10 = (ulong)((int)uVar10 + 7);
  } while (bVar4);
  uVar5 = 0x13;
LAB_006c6450:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  param_1[2] = uVar9;
  *param_1 = 1;
  return;
LAB_006c6608:
  lVar7 = lVar14 + -0x70;
  lVar15 = (ulong)*(ushort *)(lVar14 + 0x532) << 3;
  uVar11 = 0xffffffffffffffff;
  puVar13 = (ulong *)(lVar14 + 0x4d8);
  do {
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x532);
    if (lVar15 == 0) goto LAB_006c6654;
    lVar7 = lVar7 + 0x70;
    uVar12 = uVar11 + 1;
    lVar15 = lVar15 + -8;
    cVar1 = *puVar13 < uVar8;
    if (uVar8 < *puVar13) {
      cVar1 = -1;
    }
    uVar11 = uVar12;
    puVar13 = puVar13 + 1;
  } while (cVar1 == '\x01');
  if (cVar1 == '\0') goto LAB_006c64c0;
LAB_006c6654:
  if (lVar6 == 0) goto LAB_006c6690;
  lVar6 = lVar6 + -1;
  lVar14 = *(long *)(lVar14 + uVar12 * 8 + 0x538);
  goto LAB_006c6608;
LAB_006c6690:
  uVar5 = 0x12;
  uVar9 = uVar8;
  goto LAB_006c6450;
LAB_006c64c0:
  local_b8 = (ulong)(*(char *)(lVar7 + 0x6a) == '\x01');
  local_c8 = param_4;
  auVar17 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(lVar7);
  lVar7 = auVar17._0_8_;
  if (auVar17._8_8_ != 0) {
    lVar6 = auVar17._8_8_ << 4;
    uVar16 = *(undefined8 *)(param_4 + 0x1a0);
    lVar14 = 0;
    lVar15 = -1;
    do {
      FUN_006c753c(&local_b0,&local_d8,*(undefined4 *)(local_c8 + 0x48),lVar7);
      if (local_b0 == -1) {
        param_1[2] = uStack_a0;
        param_1[1] = local_a8;
        *param_1 = 1;
        return;
      }
      if (local_98 < 0x47) {
        if (local_98 == 3) {
          FUN_006e8254(&local_78,&local_b0);
          FUN_006d8310(local_90,param_3,cVar2,uVar16,&local_78);
          if (local_90[0] == 0) {
            unaff_x22 = uStack_80;
            lVar14 = local_88;
          }
        }
        else if (local_98 == 0x31) goto LAB_006c6514;
      }
      else if (local_98 == 0x47) {
LAB_006c6514:
        FUN_006e8254(&local_78,&local_b0);
        lVar15 = local_78;
        unaff_x28 = uStack_70;
      }
      else if ((local_98 == 0x2007) || (local_98 == 0x6e)) {
        FUN_006e8254(&local_78,&local_b0);
        FUN_006d8310(local_90,param_3,cVar2,uVar16,&local_78);
        if ((local_90[0] & 1) == 0) {
          *param_1 = 0;
          param_1[1] = local_88;
          param_1[2] = uStack_80;
          return;
        }
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 != 0);
    if (lVar14 != 0) {
      param_1[1] = lVar14;
      param_1[2] = unaff_x22;
      goto LAB_006c66d4;
    }
    if (lVar15 != -1) {
      FUN_006c66f0(param_1,lVar15,unaff_x28,param_2,param_3,param_4,param_6,param_7 + -1);
      return;
    }
  }
  param_1[1] = 0;
LAB_006c66d4:
  *param_1 = 0;
  return;
}


// ===== 006c66f0  FUN_006c66f0 =====

void FUN_006c66f0(undefined8 *param_1,long param_2,ulong param_3,undefined4 param_4,long param_5,
                 uint *param_6,long param_7,long param_8)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_8 != 0) {
    if (param_2 == 0xd) {
LAB_006c6864:
      FUN_006c6384(param_1,param_4,param_5,param_6,param_3,param_7,param_8);
      return;
    }
    if (param_2 == 0xe) {
      FUN_006d7fb8(local_58,param_7,param_3);
      if ((local_58[0] & 1) != 0) {
        param_1[1] = local_50;
        param_1[2] = uStack_48;
        *param_1 = 1;
        return;
      }
      FUN_006c6384(param_1,param_4,param_5,local_50,uStack_48,param_7,param_8);
      return;
    }
    if ((param_2 == 0xf) && (*(long *)(param_5 + 0xf0) != 0)) {
      uVar5 = *(ulong *)(param_7 + 0x30);
      if (uVar5 != 0) {
        lVar3 = *(long *)(param_7 + 0x28);
        if (uVar5 == 1) {
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          do {
            lVar1 = (uVar5 >> 1) + lVar4;
            if (*(ulong *)(lVar3 + lVar1 * 0x1c8 + 0x1c0) <= param_3) {
              lVar4 = lVar1;
            }
            uVar5 = uVar5 - (uVar5 >> 1);
          } while (1 < uVar5);
        }
        uVar5 = *(ulong *)(lVar3 + lVar4 * 0x1c8 + 0x1c0);
        if (uVar5 != param_3) {
          if (uVar5 < param_3) {
            lVar4 = lVar4 + 1;
          }
          if (lVar4 != 0) {
            lVar3 = lVar3 + lVar4 * 0x1c8;
            param_6 = (uint *)(lVar3 + -0x1c8);
            if (((*param_6 & 1) == 0) &&
               (bVar2 = *(ulong *)(lVar3 + -0x1c0) <= param_3,
               param_3 = param_3 - *(ulong *)(lVar3 + -0x1c0), bVar2)) {
              lVar4 = 0xc;
              if (*(char *)(lVar3 + -0x17f) != '\b') {
                lVar4 = 4;
              }
              uVar5 = (*(long *)(lVar3 + -400) - *(ulong *)(lVar3 + -0x198)) + lVar4;
              if (uVar5 <= param_3 && param_3 - uVar5 < *(ulong *)(lVar3 + -0x198)) {
                param_5 = *(long *)(param_5 + 0xf0) + 0x10;
                param_4 = 1;
                goto LAB_006c6864;
              }
            }
          }
        }
      }
      *param_1 = 1;
      param_1[1] = 0x3a;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 006c68f4  std::sys::backtrace::__rust_end_short_backtrace<std::panicking::begin_panic<&str>::{closure#0},!> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::backtrace::__rust_end_short_backtrace<std::panicking::begin_panic<&str>::{closure#0},
   !> */

void __rustcall
std::sys::backtrace::__rust_end_short_backtrace<std::panicking::begin_panic<&str>::_closure_0_,_>
          (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  long lStack_c8;
  undefined4 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined3 uStack_94;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_006cfa44();
  pcStack_18 = __rust_end_short_backtrace<std::alloc::rust_oom::_closure_0_,_>;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_006d0f08();
  pcStack_28 = __rust_end_short_backtrace<std::panicking::panic_handler::_closure_0_,_>;
  puStack_30 = (undefined1 *)&puStack_20;
  auVar10 = FUN_006d1090();
  plVar3 = auVar10._0_8_;
  pcStack_88 = FUN_006c6918;
  uStack_94 = 0;
  uStack_98 = 0;
  puStack_90 = (undefined1 *)&puStack_30;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar9 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar8 = (undefined2 *)(param_4 + 2);
    lVar4 = -1;
    lVar5 = -1;
    uStack_d8 = 0;
    uVar1 = 0;
    puStack_90 = (undefined1 *)&puStack_30;
    do {
      FUN_006c6bcc(&lStack_b0,auVar10._8_8_,param_3 & 0xffffffff,*puVar8);
      if (lStack_b0 == -1) {
        plVar3[1] = (long)puStack_a8;
        plVar3[2] = lStack_a0;
        *plVar3 = -1;
        return;
      }
      uVar2 = puVar8[-1];
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          puStack_d0 = puStack_a8;
          lStack_c8 = lStack_a0;
          lVar4 = lStack_b0;
        }
        else if (uVar2 == 2) {
          if (lStack_b0 < 5) {
            if (lStack_b0 == 2) {
              puVar6 = (undefined4 *)((ulong)puStack_a8 & 0xff);
            }
            else if (lStack_b0 == 3) {
              puVar6 = (undefined4 *)((ulong)puStack_a8 & 0xffff);
            }
            else if (lStack_b0 == 4) {
              puVar6 = (undefined4 *)((ulong)puStack_a8 & 0xffffffff);
            }
          }
          else if (lStack_b0 == 5) {
LAB_006c6b48:
            puVar6 = puStack_a8;
          }
          else if (lStack_b0 == 6) {
            if (-1 < (long)puStack_a8) goto LAB_006c6b48;
          }
          else if (lStack_b0 == 7) goto LAB_006c6b48;
        }
        else if (uVar2 == 3) {
          if (lStack_b0 < 5) {
            if (lStack_b0 == 2) {
              puVar7 = (undefined4 *)((ulong)puStack_a8 & 0xff);
            }
            else if (lStack_b0 == 3) {
              puVar7 = (undefined4 *)((ulong)puStack_a8 & 0xffff);
            }
            else if (lStack_b0 == 4) {
              puVar7 = (undefined4 *)((ulong)puStack_a8 & 0xffffffff);
            }
          }
          else if (lStack_b0 == 5) {
LAB_006c6b34:
            puVar7 = puStack_a8;
          }
          else if (lStack_b0 == 6) {
            if (-1 < (long)puStack_a8) goto LAB_006c6b34;
          }
          else if (lStack_b0 == 7) goto LAB_006c6b34;
        }
      }
      else if (uVar2 == 4) {
        if (lStack_b0 < 5) {
          if (lStack_b0 == 2) {
            puVar9 = (undefined4 *)((ulong)puStack_a8 & 0xff);
          }
          else if (lStack_b0 == 3) {
            puVar9 = (undefined4 *)((ulong)puStack_a8 & 0xffff);
          }
          else if (lStack_b0 == 4) {
            puVar9 = (undefined4 *)((ulong)puStack_a8 & 0xffffffff);
          }
        }
        else if (lStack_b0 == 5) {
LAB_006c6b20:
          puVar9 = puStack_a8;
        }
        else if (lStack_b0 == 6) {
          if (-1 < (long)puStack_a8) goto LAB_006c6b20;
        }
        else if (lStack_b0 == 7) goto LAB_006c6b20;
      }
      else if (uVar2 == 5) {
        if ((lStack_b0 == 1) && (lStack_a0 == 0x10)) {
          uStack_d8 = *(undefined8 *)((long)puStack_a8 + 7);
          uVar1 = *(undefined1 *)((long)puStack_a8 + 0xf);
          uStack_98._0_3_ = (undefined3)*puStack_a8;
          uStack_98._3_1_ = (undefined1)*(undefined4 *)((long)puStack_a8 + 3);
          uStack_94 = (undefined3)((uint)*(undefined4 *)((long)puStack_a8 + 3) >> 8);
        }
      }
      else if (uVar2 == 0x2001) {
        lVar5 = lStack_b0;
        puStack_c0 = puStack_a8;
        lStack_b8 = lStack_a0;
      }
      param_5 = param_5 + -4;
      puVar8 = puVar8 + 2;
    } while (param_5 != 0);
    if (lVar4 != -1) {
      plVar3[6] = (long)puVar6;
      plVar3[7] = (long)puVar7;
      plVar3[8] = (long)puVar9;
      *(undefined4 *)(plVar3 + 9) = uStack_98;
      *(uint *)((long)plVar3 + 0x4b) = CONCAT31(uStack_94,uStack_98._3_1_);
      *plVar3 = lVar4;
      plVar3[1] = (long)puStack_d0;
      plVar3[2] = lStack_c8;
      plVar3[3] = lVar5;
      plVar3[4] = (long)puStack_c0;
      plVar3[5] = lStack_b8;
      *(undefined8 *)((long)plVar3 + 0x4f) = uStack_d8;
      *(undefined1 *)((long)plVar3 + 0x57) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_32_3_src_read_00977048);
}


// ===== 006c6900  std::sys::backtrace::__rust_end_short_backtrace<std::alloc::rust_oom::{closure#0},!> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::backtrace::__rust_end_short_backtrace<std::alloc::rust_oom::{closure#0}, !> */

void __rustcall
std::sys::backtrace::__rust_end_short_backtrace<std::alloc::rust_oom::_closure_0_,_>
          (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  long lStack_b8;
  undefined4 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 *puStack_98;
  long lStack_90;
  undefined4 uStack_88;
  undefined3 uStack_84;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_006d0f08();
  pcStack_18 = __rust_end_short_backtrace<std::panicking::panic_handler::_closure_0_,_>;
  puStack_20 = &stack0xfffffffffffffff0;
  auVar10 = FUN_006d1090();
  plVar3 = auVar10._0_8_;
  pcStack_78 = FUN_006c6918;
  uStack_84 = 0;
  uStack_88 = 0;
  puStack_80 = (undefined1 *)&puStack_20;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar9 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar8 = (undefined2 *)(param_4 + 2);
    lVar4 = -1;
    lVar5 = -1;
    uStack_c8 = 0;
    uVar1 = 0;
    puStack_80 = (undefined1 *)&puStack_20;
    do {
      FUN_006c6bcc(&lStack_a0,auVar10._8_8_,param_3 & 0xffffffff,*puVar8);
      if (lStack_a0 == -1) {
        plVar3[1] = (long)puStack_98;
        plVar3[2] = lStack_90;
        *plVar3 = -1;
        return;
      }
      uVar2 = puVar8[-1];
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          puStack_c0 = puStack_98;
          lStack_b8 = lStack_90;
          lVar4 = lStack_a0;
        }
        else if (uVar2 == 2) {
          if (lStack_a0 < 5) {
            if (lStack_a0 == 2) {
              puVar6 = (undefined4 *)((ulong)puStack_98 & 0xff);
            }
            else if (lStack_a0 == 3) {
              puVar6 = (undefined4 *)((ulong)puStack_98 & 0xffff);
            }
            else if (lStack_a0 == 4) {
              puVar6 = (undefined4 *)((ulong)puStack_98 & 0xffffffff);
            }
          }
          else if (lStack_a0 == 5) {
LAB_006c6b48:
            puVar6 = puStack_98;
          }
          else if (lStack_a0 == 6) {
            if (-1 < (long)puStack_98) goto LAB_006c6b48;
          }
          else if (lStack_a0 == 7) goto LAB_006c6b48;
        }
        else if (uVar2 == 3) {
          if (lStack_a0 < 5) {
            if (lStack_a0 == 2) {
              puVar7 = (undefined4 *)((ulong)puStack_98 & 0xff);
            }
            else if (lStack_a0 == 3) {
              puVar7 = (undefined4 *)((ulong)puStack_98 & 0xffff);
            }
            else if (lStack_a0 == 4) {
              puVar7 = (undefined4 *)((ulong)puStack_98 & 0xffffffff);
            }
          }
          else if (lStack_a0 == 5) {
LAB_006c6b34:
            puVar7 = puStack_98;
          }
          else if (lStack_a0 == 6) {
            if (-1 < (long)puStack_98) goto LAB_006c6b34;
          }
          else if (lStack_a0 == 7) goto LAB_006c6b34;
        }
      }
      else if (uVar2 == 4) {
        if (lStack_a0 < 5) {
          if (lStack_a0 == 2) {
            puVar9 = (undefined4 *)((ulong)puStack_98 & 0xff);
          }
          else if (lStack_a0 == 3) {
            puVar9 = (undefined4 *)((ulong)puStack_98 & 0xffff);
          }
          else if (lStack_a0 == 4) {
            puVar9 = (undefined4 *)((ulong)puStack_98 & 0xffffffff);
          }
        }
        else if (lStack_a0 == 5) {
LAB_006c6b20:
          puVar9 = puStack_98;
        }
        else if (lStack_a0 == 6) {
          if (-1 < (long)puStack_98) goto LAB_006c6b20;
        }
        else if (lStack_a0 == 7) goto LAB_006c6b20;
      }
      else if (uVar2 == 5) {
        if ((lStack_a0 == 1) && (lStack_90 == 0x10)) {
          uStack_c8 = *(undefined8 *)((long)puStack_98 + 7);
          uVar1 = *(undefined1 *)((long)puStack_98 + 0xf);
          uStack_88._0_3_ = (undefined3)*puStack_98;
          uStack_88._3_1_ = (undefined1)*(undefined4 *)((long)puStack_98 + 3);
          uStack_84 = (undefined3)((uint)*(undefined4 *)((long)puStack_98 + 3) >> 8);
        }
      }
      else if (uVar2 == 0x2001) {
        lVar5 = lStack_a0;
        puStack_b0 = puStack_98;
        lStack_a8 = lStack_90;
      }
      param_5 = param_5 + -4;
      puVar8 = puVar8 + 2;
    } while (param_5 != 0);
    if (lVar4 != -1) {
      plVar3[6] = (long)puVar6;
      plVar3[7] = (long)puVar7;
      plVar3[8] = (long)puVar9;
      *(undefined4 *)(plVar3 + 9) = uStack_88;
      *(uint *)((long)plVar3 + 0x4b) = CONCAT31(uStack_84,uStack_88._3_1_);
      *plVar3 = lVar4;
      plVar3[1] = (long)puStack_c0;
      plVar3[2] = lStack_b8;
      plVar3[3] = lVar5;
      plVar3[4] = (long)puStack_b0;
      plVar3[5] = lStack_a8;
      *(undefined8 *)((long)plVar3 + 0x4f) = uStack_c8;
      *(undefined1 *)((long)plVar3 + 0x57) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_32_3_src_read_00977048);
}


// ===== 006c690c  std::sys::backtrace::__rust_end_short_backtrace<std::panicking::panic_handler::{closure#0},!> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::backtrace::__rust_end_short_backtrace<std::panicking::panic_handler::{closure#0}, !> */

void __rustcall
std::sys::backtrace::__rust_end_short_backtrace<std::panicking::panic_handler::_closure_0_,_>
          (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  long lStack_a8;
  undefined4 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 *puStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  auVar10 = FUN_006d1090();
  plVar3 = auVar10._0_8_;
  pcStack_68 = FUN_006c6918;
  uStack_74 = 0;
  uStack_78 = 0;
  puStack_70 = &stack0xfffffffffffffff0;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar9 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar8 = (undefined2 *)(param_4 + 2);
    lVar4 = -1;
    lVar5 = -1;
    uStack_b8 = 0;
    uVar1 = 0;
    puStack_70 = &stack0xfffffffffffffff0;
    do {
      FUN_006c6bcc(&lStack_90,auVar10._8_8_,param_3 & 0xffffffff,*puVar8);
      if (lStack_90 == -1) {
        plVar3[1] = (long)puStack_88;
        plVar3[2] = lStack_80;
        *plVar3 = -1;
        return;
      }
      uVar2 = puVar8[-1];
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          puStack_b0 = puStack_88;
          lStack_a8 = lStack_80;
          lVar4 = lStack_90;
        }
        else if (uVar2 == 2) {
          if (lStack_90 < 5) {
            if (lStack_90 == 2) {
              puVar6 = (undefined4 *)((ulong)puStack_88 & 0xff);
            }
            else if (lStack_90 == 3) {
              puVar6 = (undefined4 *)((ulong)puStack_88 & 0xffff);
            }
            else if (lStack_90 == 4) {
              puVar6 = (undefined4 *)((ulong)puStack_88 & 0xffffffff);
            }
          }
          else if (lStack_90 == 5) {
LAB_006c6b48:
            puVar6 = puStack_88;
          }
          else if (lStack_90 == 6) {
            if (-1 < (long)puStack_88) goto LAB_006c6b48;
          }
          else if (lStack_90 == 7) goto LAB_006c6b48;
        }
        else if (uVar2 == 3) {
          if (lStack_90 < 5) {
            if (lStack_90 == 2) {
              puVar7 = (undefined4 *)((ulong)puStack_88 & 0xff);
            }
            else if (lStack_90 == 3) {
              puVar7 = (undefined4 *)((ulong)puStack_88 & 0xffff);
            }
            else if (lStack_90 == 4) {
              puVar7 = (undefined4 *)((ulong)puStack_88 & 0xffffffff);
            }
          }
          else if (lStack_90 == 5) {
LAB_006c6b34:
            puVar7 = puStack_88;
          }
          else if (lStack_90 == 6) {
            if (-1 < (long)puStack_88) goto LAB_006c6b34;
          }
          else if (lStack_90 == 7) goto LAB_006c6b34;
        }
      }
      else if (uVar2 == 4) {
        if (lStack_90 < 5) {
          if (lStack_90 == 2) {
            puVar9 = (undefined4 *)((ulong)puStack_88 & 0xff);
          }
          else if (lStack_90 == 3) {
            puVar9 = (undefined4 *)((ulong)puStack_88 & 0xffff);
          }
          else if (lStack_90 == 4) {
            puVar9 = (undefined4 *)((ulong)puStack_88 & 0xffffffff);
          }
        }
        else if (lStack_90 == 5) {
LAB_006c6b20:
          puVar9 = puStack_88;
        }
        else if (lStack_90 == 6) {
          if (-1 < (long)puStack_88) goto LAB_006c6b20;
        }
        else if (lStack_90 == 7) goto LAB_006c6b20;
      }
      else if (uVar2 == 5) {
        if ((lStack_90 == 1) && (lStack_80 == 0x10)) {
          uStack_b8 = *(undefined8 *)((long)puStack_88 + 7);
          uVar1 = *(undefined1 *)((long)puStack_88 + 0xf);
          uStack_78._0_3_ = (undefined3)*puStack_88;
          uStack_78._3_1_ = (undefined1)*(undefined4 *)((long)puStack_88 + 3);
          uStack_74 = (undefined3)((uint)*(undefined4 *)((long)puStack_88 + 3) >> 8);
        }
      }
      else if (uVar2 == 0x2001) {
        lVar5 = lStack_90;
        puStack_a0 = puStack_88;
        lStack_98 = lStack_80;
      }
      param_5 = param_5 + -4;
      puVar8 = puVar8 + 2;
    } while (param_5 != 0);
    if (lVar4 != -1) {
      plVar3[6] = (long)puVar6;
      plVar3[7] = (long)puVar7;
      plVar3[8] = (long)puVar9;
      *(undefined4 *)(plVar3 + 9) = uStack_78;
      *(uint *)((long)plVar3 + 0x4b) = CONCAT31(uStack_74,uStack_78._3_1_);
      *plVar3 = lVar4;
      plVar3[1] = (long)puStack_b0;
      plVar3[2] = lStack_a8;
      plVar3[3] = lVar5;
      plVar3[4] = (long)puStack_a0;
      plVar3[5] = lStack_98;
      *(undefined8 *)((long)plVar3 + 0x4f) = uStack_b8;
      *(undefined1 *)((long)plVar3 + 0x57) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_32_3_src_read_00977048);
}


// ===== 006c6918  FUN_006c6918 =====

void FUN_006c6918(long *param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined8 local_a8;
  undefined4 *local_a0;
  long lStack_98;
  undefined4 *local_90;
  long lStack_88;
  long local_80;
  undefined4 *puStack_78;
  long local_70;
  undefined4 uStack_68;
  undefined3 uStack_64;
  
  uStack_64 = 0;
  uStack_68 = 0;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar8 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
    puVar7 = (undefined2 *)(param_4 + 2);
    lVar3 = -1;
    lVar4 = -1;
    local_a8 = 0;
    uVar1 = 0;
    do {
      FUN_006c6bcc(&local_80,param_2,param_3,*puVar7);
      if (local_80 == -1) {
        param_1[1] = (long)puStack_78;
        param_1[2] = local_70;
        *param_1 = -1;
        return;
      }
      uVar2 = puVar7[-1];
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          local_a0 = puStack_78;
          lStack_98 = local_70;
          lVar3 = local_80;
        }
        else if (uVar2 == 2) {
          if (local_80 < 5) {
            if (local_80 == 2) {
              puVar5 = (undefined4 *)((ulong)puStack_78 & 0xff);
            }
            else if (local_80 == 3) {
              puVar5 = (undefined4 *)((ulong)puStack_78 & 0xffff);
            }
            else if (local_80 == 4) {
              puVar5 = (undefined4 *)((ulong)puStack_78 & 0xffffffff);
            }
          }
          else if (local_80 == 5) {
LAB_006c6b48:
            puVar5 = puStack_78;
          }
          else if (local_80 == 6) {
            if (-1 < (long)puStack_78) goto LAB_006c6b48;
          }
          else if (local_80 == 7) goto LAB_006c6b48;
        }
        else if (uVar2 == 3) {
          if (local_80 < 5) {
            if (local_80 == 2) {
              puVar6 = (undefined4 *)((ulong)puStack_78 & 0xff);
            }
            else if (local_80 == 3) {
              puVar6 = (undefined4 *)((ulong)puStack_78 & 0xffff);
            }
            else if (local_80 == 4) {
              puVar6 = (undefined4 *)((ulong)puStack_78 & 0xffffffff);
            }
          }
          else if (local_80 == 5) {
LAB_006c6b34:
            puVar6 = puStack_78;
          }
          else if (local_80 == 6) {
            if (-1 < (long)puStack_78) goto LAB_006c6b34;
          }
          else if (local_80 == 7) goto LAB_006c6b34;
        }
      }
      else if (uVar2 == 4) {
        if (local_80 < 5) {
          if (local_80 == 2) {
            puVar8 = (undefined4 *)((ulong)puStack_78 & 0xff);
          }
          else if (local_80 == 3) {
            puVar8 = (undefined4 *)((ulong)puStack_78 & 0xffff);
          }
          else if (local_80 == 4) {
            puVar8 = (undefined4 *)((ulong)puStack_78 & 0xffffffff);
          }
        }
        else if (local_80 == 5) {
LAB_006c6b20:
          puVar8 = puStack_78;
        }
        else if (local_80 == 6) {
          if (-1 < (long)puStack_78) goto LAB_006c6b20;
        }
        else if (local_80 == 7) goto LAB_006c6b20;
      }
      else if (uVar2 == 5) {
        if ((local_80 == 1) && (local_70 == 0x10)) {
          local_a8 = *(undefined8 *)((long)puStack_78 + 7);
          uVar1 = *(undefined1 *)((long)puStack_78 + 0xf);
          uStack_68._0_3_ = (undefined3)*puStack_78;
          uStack_68._3_1_ = (undefined1)*(undefined4 *)((long)puStack_78 + 3);
          uStack_64 = (undefined3)((uint)*(undefined4 *)((long)puStack_78 + 3) >> 8);
        }
      }
      else if (uVar2 == 0x2001) {
        lVar4 = local_80;
        local_90 = puStack_78;
        lStack_88 = local_70;
      }
      param_5 = param_5 + -4;
      puVar7 = puVar7 + 2;
    } while (param_5 != 0);
    if (lVar3 != -1) {
      param_1[6] = (long)puVar5;
      param_1[7] = (long)puVar6;
      param_1[8] = (long)puVar8;
      *(undefined4 *)(param_1 + 9) = uStack_68;
      *(uint *)((long)param_1 + 0x4b) = CONCAT31(uStack_64,uStack_68._3_1_);
      *param_1 = lVar3;
      param_1[1] = (long)local_a0;
      param_1[2] = lStack_98;
      param_1[3] = lVar4;
      param_1[4] = (long)local_90;
      param_1[5] = lStack_88;
      *(undefined8 *)((long)param_1 + 0x4f) = local_a8;
      *(undefined1 *)((long)param_1 + 0x57) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_32_3_src_read_00977048);
}


// ===== 006c6bcc  FUN_006c6bcc =====

void FUN_006c6bcc(undefined8 *param_1,ulong *param_2,uint param_3,short param_4)

{
  ulong uVar1;
  ushort *puVar2;
  ulong uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 uVar10;
  uint *puVar11;
  uint *extraout_x9;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  char local_30;
  undefined4 uStack_2f;
  undefined3 uStack_2b;
  uint *local_28;
  undefined1 local_5;
  
  uVar17 = param_3 >> 8 & 0xff;
  switch(param_4) {
  case 3:
    puVar8 = (uint *)*param_2;
    if (param_2[1] < 2) {
LAB_006c6fd4:
      *(undefined1 *)((long)param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined2 *)((long)param_1 + 0xd) = 0;
      *(undefined4 *)((long)param_1 + 9) = 0;
      param_1[2] = puVar8;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    local_28 = (uint *)((long)puVar8 + 2);
    puVar11 = (uint *)(ulong)(ushort)*puVar8;
    puVar8 = (uint *)(param_2[1] - 2);
    uVar14 = (long)puVar8 - (long)puVar11;
    *param_2 = (ulong)local_28;
    param_2[1] = (ulong)puVar8;
    if (puVar8 < puVar11) goto LAB_006c6fb4;
    goto LAB_006c6f7c;
  case 4:
    puVar8 = (uint *)*param_2;
    if (param_2[1] < 4) goto LAB_006c6fd4;
    local_28 = puVar8 + 1;
    puVar11 = (uint *)(ulong)*puVar8;
    puVar8 = (uint *)(param_2[1] - 4);
    uVar14 = (long)puVar8 - (long)puVar11;
    *param_2 = (ulong)local_28;
    param_2[1] = (ulong)puVar8;
    if (puVar8 < puVar11) goto LAB_006c6fb4;
    goto LAB_006c6f7c;
  case 5:
    puVar2 = (ushort *)*param_2;
    if (param_2[1] < 2) {
      param_1[2] = puVar2;
      *param_1 = 0xffffffffffffffff;
      param_1[1] = 0x13;
      return;
    }
    puVar11 = (uint *)(puVar2 + 1);
    uVar5 = *puVar2;
    local_28 = (uint *)(ulong)uVar5;
    uVar17 = 0;
    uVar7 = 0;
    *param_2 = (ulong)puVar11;
    param_2[1] = param_2[1] - 2;
    uVar12 = (uint)(uVar5 >> 8);
    uVar16 = 3;
    goto LAB_006c7360;
  case 6:
    puVar8 = (uint *)*param_2;
    if (3 < param_2[1]) {
      puVar11 = puVar8 + 1;
      uVar17 = *puVar8;
      local_28 = (uint *)(ulong)uVar17;
      uVar7 = 0;
      *param_2 = (ulong)puVar11;
      param_2[1] = param_2[1] - 4;
      uVar16 = 4;
      uVar12 = uVar17 >> 8;
      uVar17 = uVar17 >> 0x10;
      goto LAB_006c7360;
    }
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined2 *)((long)param_1 + 9) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    goto LAB_006c725c;
  case 7:
    puVar8 = (uint *)*param_2;
    if (param_2[1] < 8) break;
    uVar12 = puVar8[1];
    puVar11 = (uint *)(param_2[1] - 8);
    uVar17 = *puVar8;
    bVar4 = *(byte *)((long)puVar8 + 7);
    *param_2 = (ulong)(puVar8 + 2);
    param_2[1] = (ulong)puVar11;
    local_28 = (uint *)(((ulong)uVar17 << 8 | (ulong)(uint3)uVar12 << 0x28) >> 8 |
                       (ulong)bVar4 << 0x38);
    uVar16 = 5;
    goto LAB_006c7328;
  case 8:
    local_28 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar11 = (uint *)0x0;
      uVar14 = param_2[1] - 1;
      puVar8 = local_28;
      do {
        if ((char)*puVar8 == '\0') {
          *param_2 = (long)puVar8 + 1U;
          param_2[1] = uVar14;
          uVar16 = 0x1f;
          goto LAB_006c7358;
        }
        uVar14 = uVar14 - 1;
        puVar11 = (uint *)((long)puVar11 + 1);
        puVar8 = (uint *)((long)puVar8 + 1U);
      } while (uVar14 != 0xffffffffffffffff);
    }
LAB_006c6fb4:
    param_1[2] = local_28;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0x13;
    return;
  case 9:
    uVar14 = *param_2;
    uVar3 = param_2[1];
    if (uVar3 == 0) {
      uVar10 = 0x13;
    }
    else {
      uVar15 = 0;
      puVar11 = (uint *)0x0;
      uVar7 = 0;
      do {
        bVar4 = *(byte *)(uVar14 + uVar15);
        if (((int)uVar7 == 0x3f) && (1 < bVar4)) {
          lVar13 = uVar14 + uVar15;
          uVar14 = ~uVar15;
          *param_2 = lVar13 + 1;
          param_2[1] = uVar14 + uVar3;
          uVar10 = 6;
          goto LAB_006c73a0;
        }
        puVar11 = (uint *)(((ulong)bVar4 & 0x7f) << (uVar7 & 0x3f) | (ulong)puVar11);
        if (-1 < (char)bVar4) {
          puVar8 = (uint *)(~uVar15 + uVar3);
          uVar1 = uVar14 + uVar15 + 1;
          *param_2 = uVar1;
          param_2[1] = (ulong)puVar8;
          if (puVar8 < puVar11) {
            param_1[2] = uVar1;
            *param_1 = 0xffffffffffffffff;
            param_1[1] = 0x13;
            return;
          }
          uVar7 = uVar1 & 0xffffffff00000000;
          uVar16 = 1;
          *param_2 = (ulong)((long)puVar11 + uVar14 + uVar15 + 1);
          param_2[1] = ~uVar15 + (uVar3 - (long)puVar11);
          uVar12 = (uint)(uVar1 >> 8);
          local_28 = (uint *)(uVar1 & 0xffffffff);
          uVar17 = (uint)(uVar1 >> 0x10);
          goto LAB_006c7360;
        }
        uVar15 = uVar15 + 1;
        uVar7 = (ulong)((int)uVar7 + 7);
      } while (uVar3 != uVar15);
      *param_2 = uVar14 + uVar3;
      param_2[1] = 0;
      uVar10 = 0x13;
      uVar14 = uVar14 + uVar3;
    }
LAB_006c73a0:
    *(undefined1 *)(param_1 + 1) = uVar10;
    *(undefined1 *)((long)param_1 + 9) = 0;
    *(undefined2 *)((long)param_1 + 0xe) = 0;
    *(undefined4 *)((long)param_1 + 10) = 0;
    param_1[2] = uVar14;
    *param_1 = 0xffffffffffffffff;
    return;
  case 10:
    puVar8 = (uint *)*param_2;
    if (param_2[1] == 0) goto LAB_006c6fd4;
    local_28 = (uint *)((long)puVar8 + 1);
    puVar11 = (uint *)(ulong)(byte)*puVar8;
    puVar8 = (uint *)(param_2[1] - 1);
    uVar14 = (long)puVar8 - (long)puVar11;
    *param_2 = (ulong)local_28;
    param_2[1] = (ulong)puVar8;
    if (puVar8 < puVar11) goto LAB_006c6fb4;
LAB_006c6f7c:
    *param_2 = (ulong)((long)local_28 + (long)puVar11);
    param_2[1] = uVar14;
    uVar16 = 1;
LAB_006c7358:
    uVar7 = (ulong)local_28 & 0xffffffff00000000;
    uVar12 = (uint)((ulong)local_28 >> 8);
    uVar17 = (uint)((ulong)local_28 >> 0x10);
LAB_006c7360:
    param_1[2] = puVar11;
    *param_1 = uVar16;
    param_1[1] = uVar7 | ((uint)local_28 & 0xff | (uVar12 & 0xff) << 8 | uVar17 << 0x10);
    return;
  case 0xb:
    puVar8 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar11 = (uint *)((long)puVar8 + 1);
      local_28 = (uint *)(ulong)(byte)*puVar8;
      uVar12 = 0;
      uVar17 = 0;
      uVar7 = 0;
      *param_2 = (ulong)puVar11;
      param_2[1] = param_2[1] - 1;
      uVar16 = 2;
      goto LAB_006c7360;
    }
    goto LAB_006c71c8;
  case 0xc:
    puVar8 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar11 = (uint *)((long)puVar8 + 1);
      uVar6 = *puVar8;
      uVar12 = 0;
      uVar17 = 0;
      uVar7 = 0;
      *param_2 = (ulong)puVar11;
      param_2[1] = param_2[1] - 1;
      uVar16 = 9;
      local_28 = (uint *)(ulong)((char)uVar6 != '\0');
      goto LAB_006c7360;
    }
LAB_006c71c8:
    *(undefined2 *)((long)param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 1) = 0x13;
    *(undefined4 *)((long)param_1 + 10) = 0;
    goto LAB_006c725c;
  case 0xd:
    FUN_0070d8c0(&local_30);
    if (local_30 != -1) {
      *(char *)(param_1 + 1) = local_30;
      param_1[2] = local_28;
      local_5 = (undefined1)((uint)uStack_2f >> 0x18);
      *(undefined4 *)((long)param_1 + 9) = uStack_2f;
      *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_2b,local_5);
      *param_1 = 0xffffffffffffffff;
      return;
    }
    uVar16 = 6;
    puVar11 = extraout_x9;
LAB_006c7328:
    uVar12 = (uint)((ulong)local_28 >> 8);
    uVar17 = (uint)((ulong)local_28 >> 0x10);
    uVar7 = (ulong)local_28 & 0xffffffff00000000;
    goto LAB_006c7360;
  case 0xe:
    if (uVar17 == 8) {
      puVar8 = (uint *)*param_2;
      if (7 < param_2[1]) {
        puVar11 = (uint *)(param_2[1] - 8);
        puVar9 = puVar8 + 2;
        local_28 = (uint *)(((ulong)*puVar8 << 8 | (ulong)(uint3)puVar8[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar8 + 7) << 0x38);
LAB_006c7210:
        uVar12 = (uint)((ulong)local_28 >> 8);
        uVar17 = (uint)((ulong)local_28 >> 0x10);
        *param_2 = (ulong)puVar9;
        param_2[1] = (ulong)puVar11;
        uVar7 = (ulong)local_28 & 0xffffffff00000000;
        uVar16 = 0x1a;
        goto LAB_006c7360;
      }
    }
    else {
      puVar8 = (uint *)*param_2;
      if (3 < param_2[1]) {
        puVar9 = puVar8 + 1;
        local_28 = (uint *)(ulong)*puVar8;
        puVar11 = (uint *)(param_2[1] - 4);
        goto LAB_006c7210;
      }
    }
    break;
  case 0xf:
    puVar8 = (uint *)*param_2;
    uVar14 = param_2[1];
    if (uVar14 != 0) {
      local_28 = (uint *)0x0;
      uVar7 = 0;
      puVar9 = (uint *)((long)puVar8 + uVar14);
      lVar13 = 1 - uVar14;
      do {
        puVar11 = (uint *)((long)puVar8 + 1);
        bVar4 = (byte)*puVar8;
        if (((int)uVar7 == 0x3f) && (1 < bVar4)) goto LAB_006c71dc;
        local_28 = (uint *)(((ulong)bVar4 & 0x7f) << (uVar7 & 0x3f) | (ulong)local_28);
        if (-1 < (char)bVar4) {
          uVar12 = (uint)((ulong)local_28 >> 8);
          uVar17 = (uint)((ulong)local_28 >> 0x10);
          *param_2 = (ulong)puVar11;
          param_2[1] = -lVar13;
          uVar7 = (ulong)local_28 & 0xffffffff00000000;
          uVar16 = 7;
          goto LAB_006c7360;
        }
        lVar13 = lVar13 + 1;
        uVar7 = (ulong)((int)uVar7 + 7);
        puVar8 = puVar11;
      } while (lVar13 != 1);
      goto LAB_006c6e68;
    }
    goto LAB_006c6e74;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
switchD_006c6c04_caseD_10:
    *(short *)((long)param_1 + 10) = param_4;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 0xffffffffffffffff;
    return;
  case 0x17:
    if (uVar17 == 8) {
      puVar8 = (uint *)*param_2;
      if (7 < param_2[1]) {
        puVar11 = (uint *)(param_2[1] - 8);
        puVar9 = puVar8 + 2;
        local_28 = (uint *)(((ulong)*puVar8 << 8 | (ulong)(uint3)puVar8[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar8 + 7) << 0x38);
LAB_006c72b8:
        *param_2 = (ulong)puVar9;
        param_2[1] = (ulong)puVar11;
        uVar12 = (uint)((ulong)local_28 >> 8);
        uVar17 = (uint)((ulong)local_28 >> 0x10);
        uVar7 = (ulong)local_28 & 0xffffffff00000000;
        uVar16 = 10;
        goto LAB_006c7360;
      }
    }
    else {
      puVar8 = (uint *)*param_2;
      if (3 < param_2[1]) {
        puVar9 = puVar8 + 1;
        local_28 = (uint *)(ulong)*puVar8;
        puVar11 = (uint *)(param_2[1] - 4);
        goto LAB_006c72b8;
      }
    }
    break;
  case 0x1a:
    goto switchD_006c6c04_caseD_1a;
  case 0x1d:
switchD_006c6c04_caseD_1d:
    if (uVar17 == 8) {
      puVar8 = (uint *)*param_2;
      if (7 < param_2[1]) {
        puVar11 = (uint *)(param_2[1] - 8);
        puVar9 = puVar8 + 2;
        local_28 = (uint *)(((ulong)*puVar8 << 8 | (ulong)(uint3)puVar8[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar8 + 7) << 0x38);
LAB_006c71b0:
        uVar12 = (uint)((ulong)local_28 >> 8);
        uVar17 = (uint)((ulong)local_28 >> 0x10);
        *param_2 = (ulong)puVar9;
        param_2[1] = (ulong)puVar11;
        uVar7 = (ulong)local_28 & 0xffffffff00000000;
        uVar16 = 0x1b;
        goto LAB_006c7360;
      }
    }
    else {
      puVar8 = (uint *)*param_2;
      if (3 < param_2[1]) {
        puVar9 = puVar8 + 1;
        local_28 = (uint *)(ulong)*puVar8;
        puVar11 = (uint *)(param_2[1] - 4);
        goto LAB_006c71b0;
      }
    }
    break;
  case 0x1e:
    local_28 = (uint *)*param_2;
    if (param_2[1] < 0x10) goto LAB_006c6fb4;
    uVar12 = (uint)((ulong)local_28 >> 8);
    uVar17 = (uint)((ulong)local_28 >> 0x10);
    *param_2 = (ulong)(local_28 + 4);
    param_2[1] = param_2[1] - 0x10;
    uVar7 = (ulong)local_28 & 0xffffffff00000000;
    uVar16 = 1;
    puVar11 = (uint *)&DAT_00000010;
    goto LAB_006c7360;
  case 0x1f:
    if (uVar17 == 8) {
      puVar8 = (uint *)*param_2;
      if (7 < param_2[1]) {
        puVar11 = (uint *)(param_2[1] - 8);
        puVar9 = puVar8 + 2;
        local_28 = (uint *)(((ulong)*puVar8 << 8 | (ulong)(uint3)puVar8[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar8 + 7) << 0x38);
LAB_006c728c:
        uVar12 = (uint)((ulong)local_28 >> 8);
        uVar17 = (uint)((ulong)local_28 >> 0x10);
        *param_2 = (ulong)puVar9;
        param_2[1] = (ulong)puVar11;
        uVar7 = (ulong)local_28 & 0xffffffff00000000;
        uVar16 = 0x1e;
        goto LAB_006c7360;
      }
    }
    else {
      puVar8 = (uint *)*param_2;
      if (3 < param_2[1]) {
        puVar9 = puVar8 + 1;
        local_28 = (uint *)(ulong)*puVar8;
        puVar11 = (uint *)(param_2[1] - 4);
        goto LAB_006c728c;
      }
    }
    break;
  case 0x25:
    puVar8 = (uint *)*param_2;
    if (param_2[1] != 0) {
      uVar14 = param_2[1] - 1;
      puVar11 = (uint *)((long)puVar8 + 1);
      local_28 = (uint *)(ulong)(byte)*puVar8;
      uVar12 = 0;
      uVar17 = 0;
LAB_006c70f4:
      *param_2 = (ulong)puVar11;
LAB_006c70f8:
      uVar7 = 0;
      param_2[1] = uVar14;
      uVar16 = 0x1d;
      goto LAB_006c7360;
    }
    goto LAB_006c7104;
  case 0x26:
    puVar8 = (uint *)*param_2;
    if (1 < param_2[1]) {
      puVar11 = (uint *)((long)puVar8 + 2);
      uVar12 = *puVar8;
      local_28 = (uint *)(ulong)(ushort)uVar12;
      uVar17 = 0;
      uVar14 = param_2[1] - 2;
      *param_2 = (ulong)puVar11;
      uVar12 = (uint)(ushort)((ushort)uVar12 >> 8);
      goto LAB_006c70f8;
    }
    goto LAB_006c7104;
  case 0x27:
    puVar8 = (uint *)*param_2;
    if (2 < param_2[1]) {
      uVar17 = (uint)*(byte *)((long)puVar8 + 2);
      puVar11 = (uint *)((long)puVar8 + 3);
      uVar12 = *puVar8;
      uVar7 = 0;
      uVar16 = 0x1d;
      local_28 = (uint *)(ulong)(uint3)uVar12;
      *param_2 = (ulong)puVar11;
      param_2[1] = param_2[1] - 3;
      uVar12 = (uint)(uint3)((uint3)uVar12 >> 8);
      goto LAB_006c7360;
    }
    goto LAB_006c7104;
  case 0x28:
    puVar8 = (uint *)*param_2;
    if (3 < param_2[1]) {
      puVar11 = puVar8 + 1;
      uVar17 = *puVar8;
      local_28 = (uint *)(ulong)uVar17;
      uVar14 = param_2[1] - 4;
      uVar12 = uVar17 >> 8;
      uVar17 = uVar17 >> 0x10;
      goto LAB_006c70f4;
    }
LAB_006c7104:
    *(undefined1 *)((long)param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined2 *)((long)param_1 + 0xd) = 0;
    *(undefined4 *)((long)param_1 + 9) = 0;
LAB_006c725c:
    param_1[2] = puVar8;
    *param_1 = 0xffffffffffffffff;
    return;
  default:
    if (param_4 != 0x1f02) {
      if (param_4 != 0x1f21) goto switchD_006c6c04_caseD_10;
      goto switchD_006c6c04_caseD_1d;
    }
    goto switchD_006c6c04_caseD_1a;
  }
  *(undefined1 *)((long)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 1) = 0x13;
  *(undefined2 *)((long)param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 9) = 0;
LAB_006c72e4:
  param_1[2] = puVar8;
  *param_1 = 0xffffffffffffffff;
  return;
switchD_006c6c04_caseD_1a:
  puVar8 = (uint *)*param_2;
  uVar14 = param_2[1];
  if (uVar14 != 0) {
    local_28 = (uint *)0x0;
    uVar7 = 0;
    puVar9 = (uint *)((long)puVar8 + uVar14);
    lVar13 = 1 - uVar14;
    do {
      puVar11 = (uint *)((long)puVar8 + 1);
      bVar4 = (byte)*puVar8;
      if (((int)uVar7 == 0x3f) && (1 < bVar4)) goto LAB_006c71dc;
      local_28 = (uint *)(((ulong)bVar4 & 0x7f) << (uVar7 & 0x3f) | (ulong)local_28);
      if (-1 < (char)bVar4) {
        uVar12 = (uint)((ulong)local_28 >> 8);
        uVar17 = (uint)((ulong)local_28 >> 0x10);
        *param_2 = (ulong)puVar11;
        param_2[1] = -lVar13;
        uVar7 = (ulong)local_28 & 0xffffffff00000000;
        uVar16 = 0x1d;
        goto LAB_006c7360;
      }
      lVar13 = lVar13 + 1;
      uVar7 = (ulong)((int)uVar7 + 7);
      puVar8 = puVar11;
    } while (lVar13 != 1);
LAB_006c6e68:
    *param_2 = (ulong)puVar9;
    param_2[1] = 0;
    puVar8 = puVar9;
  }
LAB_006c6e74:
  uVar10 = 0x13;
LAB_006c71e8:
  *(undefined1 *)(param_1 + 1) = uVar10;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  goto LAB_006c72e4;
LAB_006c71dc:
  puVar8 = (uint *)-lVar13;
  *param_2 = (ulong)puVar11;
  param_2[1] = (ulong)puVar8;
  uVar10 = 6;
  goto LAB_006c71e8;
}


// ===== 006c745c  FUN_006c745c =====

void FUN_006c745c(long *param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined2 *puVar2;
  long local_a0;
  long lStack_98;
  long local_68;
  long local_60;
  long lStack_58;
  
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar2 = (undefined2 *)(param_4 + 2);
    lVar1 = -1;
    do {
      FUN_006c6bcc(&local_68,param_2,param_3,*puVar2);
      if (local_68 == -1) {
        *param_1 = -1;
        local_a0 = local_60;
        lStack_98 = lStack_58;
        goto LAB_006c7510;
      }
      if (puVar2[-1] == 1) {
        lStack_98 = lStack_58;
        local_a0 = local_60;
        lVar1 = local_68;
      }
      param_5 = param_5 + -4;
      puVar2 = puVar2 + 2;
    } while (param_5 != 0);
    if (lVar1 != -1) {
      *param_1 = lVar1;
LAB_006c7510:
      param_1[2] = lStack_98;
      param_1[1] = local_a0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_32_3_src_read_00977060);
}


// ===== 006c753c  FUN_006c753c =====

void FUN_006c753c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong in_x9;
  ulong uVar9;
  uint *puVar10;
  undefined4 uVar11;
  long lVar12;
  ushort *puVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ushort *puVar20;
  ushort *extraout_x14;
  ushort *extraout_x14_00;
  ushort *extraout_x14_01;
  undefined2 uVar21;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  uint *local_30;
  undefined1 local_25;
  
  uVar15 = (uint)*(ushort *)((long)param_4 + 10);
  puVar10 = (uint *)*param_2;
  uVar9 = param_2[1];
  uVar3 = (uint)((ulong)param_3 >> 0x10);
  puVar13 = &switchD_006c7588::switchdataD_0045a76e;
  puVar20 = &switchD_006c7588::switchdataD_0045a76e;
  uVar4 = (uint)param_3;
  uVar8 = uVar15;
  if (*(ushort *)((long)param_4 + 10) < 0x1f01) {
LAB_006c7570:
    uVar21 = (undefined2)uVar8;
    uVar16 = (uint)((ulong)puVar10 >> 8);
    uVar19 = (uint)((ulong)puVar10 >> 0x10);
    switch(uVar8) {
    case 1:
      if ((uVar4 - 1 & 0xff) < ((uVar4 ^ uVar4 - 1) & 0xff)) {
        uVar8 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
        if (uVar8 < 2) {
          if (uVar8 == 0) {
            if (uVar9 != 0) {
              puVar7 = (uint *)((long)puVar10 + 1);
              local_30 = (uint *)(ulong)(byte)*puVar10;
              lVar12 = uVar9 - 1;
LAB_006c83c8:
              *param_2 = (long)puVar7;
              param_2[1] = lVar12;
LAB_006c83cc:
              uVar14 = 0;
              uVar16 = (uint)((ulong)local_30 >> 8);
              uVar19 = (uint)((ulong)local_30 >> 0x10);
              uVar17 = (ulong)local_30 & 0xffffffff00000000;
              goto LAB_006c842c;
            }
          }
          else {
            if (uVar8 != 1) goto LAB_006c8288;
            if (1 < uVar9) {
              puVar7 = (uint *)((long)puVar10 + 2);
              local_30 = (uint *)(ulong)(ushort)*puVar10;
              lVar12 = uVar9 - 2;
              goto LAB_006c83c8;
            }
          }
        }
        else if (uVar8 == 2) {
          if (3 < uVar9) {
            puVar7 = puVar10 + 1;
            local_30 = (uint *)(ulong)*puVar10;
            lVar12 = uVar9 - 4;
            goto LAB_006c83c8;
          }
        }
        else {
          if (uVar8 != 3) goto LAB_006c8288;
          if (7 < uVar9) {
            *param_2 = (long)(puVar10 + 2);
            param_2[1] = uVar9 - 8;
            local_30 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                               (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
            goto LAB_006c83cc;
          }
        }
        uVar4 = 0;
        uVar5 = 0x13;
      }
      else {
LAB_006c8288:
        uVar4 = uVar4 & 0xff;
        uVar5 = 0x19;
      }
      *(undefined1 *)(param_1 + 1) = uVar5;
      *(undefined1 *)((long)param_1 + 0xf) = 0;
      *(undefined2 *)((long)param_1 + 0xd) = 0;
      *(uint *)((long)param_1 + 9) = uVar4;
      goto LAB_006c8154;
    default:
      goto switchD_006c7588_caseD_2;
    case 3:
      puVar13 = (ushort *)(uVar9 - 2);
      if (uVar9 < 2) goto LAB_006c7e28;
      local_30 = (uint *)((long)puVar10 + 2);
      puVar20 = (ushort *)(ulong)(ushort)*puVar10;
      break;
    case 4:
      puVar13 = (ushort *)(uVar9 - 4);
      if (uVar9 < 4) goto LAB_006c7e28;
      local_30 = puVar10 + 1;
      puVar20 = (ushort *)(ulong)*puVar10;
      break;
    case 5:
      if (uVar9 < 2) goto LAB_006c7e28;
      uVar8 = *puVar10;
      local_30 = (uint *)(ulong)(ushort)uVar8;
      uVar19 = 0;
      uVar17 = 0;
      *param_2 = (long)puVar10 + 2;
      param_2[1] = uVar9 - 2;
      uVar16 = (uint)(ushort)((ushort)uVar8 >> 8);
      uVar14 = 3;
      goto LAB_006c842c;
    case 6:
      if ((uVar4 & 0xff00) == 0x400) {
        uVar8 = *(ushort *)(param_4 + 1) - 2;
        if (uVar8 < 0x78) {
          puVar13 = (ushort *)(ulong)(&switchD_006c7a38::switchdataD_0045a83e)[uVar8];
          switch((uint)*(ushort *)(param_4 + 1)) {
          case 2:
          case 0x10:
          case 0x19:
          case 0x2a:
          case 0x2c:
          case 0x40:
          case 0x43:
          case 0x46:
          case 0x48:
          case 0x4a:
          case 0x4d:
          case 0x55:
          case 0x79:
switchD_006c7a38_caseD_2:
            if (3 < uVar9) {
              local_30 = (uint *)(ulong)*puVar10;
              *param_2 = (long)(puVar10 + 1);
              param_2[1] = uVar9 - 4;
              uVar14 = 10;
              puVar20 = puVar13;
              goto LAB_006c8424;
            }
            goto LAB_006c8140;
          case 0x38:
            if ((uVar3 & 0xfffe) == 2) goto switchD_006c7a38_caseD_2;
          }
        }
      }
      if (3 < uVar9) {
        local_30 = (uint *)(ulong)*puVar10;
        *param_2 = (long)(puVar10 + 1);
        param_2[1] = uVar9 - 4;
        uVar14 = 4;
        puVar20 = puVar13;
        goto LAB_006c8424;
      }
      *(undefined1 *)((long)param_1 + 0xb) = 0;
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined2 *)((long)param_1 + 9) = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      goto LAB_006c8154;
    case 7:
      if ((uVar4 & 0xff00) == 0x800) {
        uVar8 = *(ushort *)(param_4 + 1) - 2;
        if (uVar8 < 0x78) {
          puVar13 = (ushort *)(ulong)(&switchD_006c78d0::switchdataD_0045a7c6)[uVar8];
          switch((uint)*(ushort *)(param_4 + 1)) {
          case 2:
          case 0x10:
          case 0x19:
          case 0x2a:
          case 0x2c:
          case 0x40:
          case 0x43:
          case 0x46:
          case 0x48:
          case 0x4a:
          case 0x4d:
          case 0x55:
          case 0x79:
switchD_006c78d0_caseD_2:
            if (7 < uVar9) {
              *param_2 = (long)(puVar10 + 2);
              param_2[1] = uVar9 - 8;
              local_30 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                                 (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
              puVar20 = puVar13;
              goto LAB_006c8040;
            }
            goto LAB_006c8140;
          case 0x38:
            if ((uVar3 & 0xfffe) == 2) goto switchD_006c78d0_caseD_2;
          }
        }
      }
      if (7 < uVar9) {
        *param_2 = (long)(puVar10 + 2);
        param_2[1] = uVar9 - 8;
        bVar1 = *(byte *)((long)puVar10 + 7);
        uVar9 = (ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28;
        uVar14 = 5;
        goto LAB_006c7914;
      }
      goto LAB_006c8140;
    case 8:
      if (uVar9 == 0) goto LAB_006c7e28;
      puVar20 = (ushort *)0x0;
      lVar12 = uVar9 - 1;
      puVar7 = puVar10;
      goto LAB_006c7880;
    case 9:
      local_30 = puVar10;
      if (uVar9 == 0) goto LAB_006c7ffc;
      uVar17 = 0;
      puVar20 = (ushort *)0x0;
      uVar18 = 0;
      goto LAB_006c7b18;
    case 10:
      if (uVar9 == 0) goto LAB_006c7e28;
      local_30 = (uint *)((long)puVar10 + 1);
      puVar20 = (ushort *)(ulong)(byte)*puVar10;
      puVar13 = (ushort *)(uVar9 - 1);
      break;
    case 0xb:
      if (uVar9 == 0) goto LAB_006c7fe4;
      uVar16 = 0;
      uVar19 = 0;
      uVar17 = 0;
      local_30 = (uint *)(ulong)(byte)*puVar10;
      *param_2 = (long)puVar10 + 1;
      param_2[1] = uVar9 - 1;
      uVar14 = 2;
      goto LAB_006c842c;
    case 0xc:
      if (uVar9 != 0) {
        uVar8 = *puVar10;
        *param_2 = (long)puVar10 + 1;
        param_2[1] = uVar9 - 1;
        local_30 = (uint *)(ulong)((char)uVar8 != '\0');
        goto LAB_006c7e18;
      }
LAB_006c7fe4:
      *(undefined2 *)((long)param_1 + 0xe) = 0;
      *(undefined2 *)(param_1 + 1) = 0x13;
      *(undefined4 *)((long)param_1 + 10) = 0;
      goto LAB_006c8154;
    case 0xd:
      FUN_0070d8c0(&local_38);
      if (local_38 != -1) {
        *(char *)(param_1 + 1) = local_38;
        param_1[2] = local_30;
        local_25 = (undefined1)((uint)uStack_37 >> 0x18);
        *(undefined4 *)((long)param_1 + 9) = uStack_37;
        *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_33,local_25);
        *param_1 = 0xffffffffffffffff;
        return;
      }
      uVar14 = 6;
      puVar20 = extraout_x14;
      goto LAB_006c8214;
    case 0xe:
      if ((uVar4 >> 8 & 0xff) == 8) {
        if (uVar9 < 8) goto LAB_006c8140;
        *param_2 = (long)(puVar10 + 2);
        param_2[1] = uVar9 - 8;
        local_30 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
      }
      else {
        if (uVar9 < 4) goto LAB_006c8140;
        local_30 = (uint *)(ulong)*puVar10;
        *param_2 = (long)(puVar10 + 1);
        param_2[1] = uVar9 - 4;
      }
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 0x1a;
      goto LAB_006c842c;
    case 0xf:
      if (uVar9 == 0) goto LAB_006c7ef8;
      local_30 = (uint *)0x0;
      uVar17 = 0;
      puVar7 = (uint *)((long)puVar10 + uVar9);
      lVar12 = 1 - uVar9;
      goto LAB_006c7b6c;
    case 0x10:
      if ((uVar3 & 0xffff) == 2) {
        FUN_0070dbb8(&local_38);
        puVar20 = extraout_x14_00;
      }
      else {
        FUN_0070d838(&local_38,param_2,uVar4 >> 8);
        puVar20 = extraout_x14_01;
      }
      if (local_38 != -1) {
        *(char *)(param_1 + 1) = local_38;
        param_1[2] = local_30;
        local_25 = (undefined1)((uint)uStack_37 >> 0x18);
        *(undefined4 *)((long)param_1 + 9) = uStack_37;
        *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_33,local_25);
        *param_1 = 0xffffffffffffffff;
        return;
      }
      uVar14 = 0xe;
LAB_006c8214:
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      goto LAB_006c842c;
    case 0x11:
      if (uVar9 != 0) {
        puVar7 = (uint *)((long)puVar10 + 1);
        local_30 = (uint *)(ulong)(byte)*puVar10;
        uVar16 = 0;
        uVar19 = 0;
        lVar12 = -1;
        goto LAB_006c7db4;
      }
      goto LAB_006c8140;
    case 0x12:
      if (1 < uVar9) {
        uVar8 = *puVar10;
        local_30 = (uint *)(ulong)(ushort)uVar8;
        uVar19 = 0;
        lVar12 = -2;
        *param_2 = (long)puVar10 + 2;
        uVar16 = (uint)(ushort)((ushort)uVar8 >> 8);
        goto LAB_006c7db8;
      }
      goto LAB_006c8140;
    case 0x13:
      if (uVar9 < 4) goto LAB_006c8140;
      puVar7 = puVar10 + 1;
      uVar19 = *puVar10;
      local_30 = (uint *)(ulong)uVar19;
      lVar12 = -4;
      uVar16 = uVar19 >> 8;
      uVar19 = uVar19 >> 0x10;
LAB_006c7db4:
      *param_2 = (long)puVar7;
LAB_006c7db8:
      uVar17 = 0;
      param_2[1] = uVar9 + lVar12;
      uVar14 = 0xd;
      goto LAB_006c842c;
    case 0x14:
      if (uVar9 < 8) goto LAB_006c8140;
      *param_2 = (long)(puVar10 + 2);
      param_2[1] = uVar9 - 8;
      local_30 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                         (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
      puVar20 = puVar13;
      goto LAB_006c82a4;
    case 0x15:
      if (uVar9 == 0) goto LAB_006c7ef8;
      local_30 = (uint *)0x0;
      uVar17 = 0;
      puVar7 = (uint *)((long)puVar10 + uVar9);
      lVar12 = 1 - uVar9;
      goto LAB_006c7810;
    case 0x16:
      if (uVar9 == 0) {
        in_x9 = 0;
        uVar5 = 0x13;
        uVar11 = 0;
LAB_006c8394:
        *(undefined1 *)(param_1 + 1) = uVar5;
        *(undefined1 *)((long)param_1 + 9) = 0;
        *(short *)((long)param_1 + 10) = (short)in_x9;
        *(undefined4 *)((long)param_1 + 0xc) = uVar11;
        goto LAB_006c8154;
      }
      uVar17 = uVar9 - 1;
      puVar7 = (uint *)((long)puVar10 + 1);
      cVar2 = (char)*puVar10;
      *param_2 = (long)puVar7;
      param_2[1] = uVar17;
      if (cVar2 < 0) {
        if (uVar17 == 0) {
LAB_006c8170:
          puVar10 = puVar7;
          in_x9 = 0;
          uVar11 = 0;
          uVar5 = 0x13;
          goto LAB_006c8394;
        }
        puVar7 = (uint *)((long)puVar10 + 2);
        uVar17 = uVar9 - 2;
        *param_2 = (long)puVar7;
        param_2[1] = uVar17;
        uVar8 = (int)cVar2 & 0x7fU | (*(byte *)((long)puVar10 + 1) & 0x7f) << 7;
        uVar18 = (ulong)uVar8;
        if ((char)*(byte *)((long)puVar10 + 1) < '\0') {
          if (uVar17 == 0) goto LAB_006c8170;
          puVar7 = (uint *)((long)puVar10 + 3);
          *param_2 = (long)puVar7;
          param_2[1] = uVar9 - 3;
          bVar1 = *(byte *)((long)puVar10 + 2);
          puVar10 = (uint *)(ulong)bVar1;
          if (3 < bVar1) {
            uVar11 = (undefined4)(in_x9 >> 0x10);
            uVar5 = 6;
            goto LAB_006c8394;
          }
          uVar18 = (ulong)(uVar8 | (uint)bVar1 << 0xe) & 0xffff;
          uVar17 = uVar9 - 3;
        }
      }
      else {
        uVar18 = (ulong)(int)cVar2;
      }
      uVar9 = uVar17;
      puVar10 = puVar7;
      in_x9 = in_x9 & 0xffffffffffff0000 | uVar18;
      uVar8 = (uint)uVar18 & 0xffff;
      if (0x1f00 < uVar8) goto LAB_006c760c;
      goto LAB_006c7570;
    case 0x17:
      if ((uVar4 >> 8 & 0xff) == 8) goto switchD_006c78d0_caseD_2;
      if (uVar9 < 4) goto LAB_006c8140;
      local_30 = (uint *)(ulong)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      param_2[1] = uVar9 - 4;
      puVar20 = puVar13;
LAB_006c8040:
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 10;
      goto LAB_006c842c;
    case 0x18:
      local_30 = puVar10;
      if (uVar9 == 0) goto LAB_006c7ffc;
      uVar17 = 0;
      puVar20 = (ushort *)0x0;
      uVar18 = 0;
      goto LAB_006c7d5c;
    case 0x19:
      local_30 = (uint *)0x1;
LAB_006c7e18:
      uVar19 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar14 = 9;
      goto LAB_006c842c;
    case 0x1a:
      goto switchD_006c7588_caseD_1a;
    case 0x1b:
      goto switchD_006c7588_caseD_1b;
    case 0x1c:
      if (uVar9 < 4) goto LAB_006c8140;
      local_30 = (uint *)(ulong)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      param_2[1] = uVar9 - 4;
      uVar14 = 0xf;
      puVar20 = puVar13;
LAB_006c8424:
      uVar17 = 0;
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      goto LAB_006c842c;
    case 0x1d:
      goto switchD_006c7588_caseD_1d;
    case 0x1e:
      if (uVar9 < 0x10) goto LAB_006c7e28;
      *param_2 = (long)(puVar10 + 4);
      param_2[1] = uVar9 - 0x10;
      uVar17 = (ulong)puVar10 & 0xffffffff00000000;
      uVar14 = 1;
      puVar20 = (ushort *)0x10;
      local_30 = (uint *)((ulong)puVar10 & 0xffffffff);
      goto LAB_006c842c;
    case 0x1f:
      if ((uVar4 >> 8 & 0xff) == 8) {
        if (uVar9 < 8) goto LAB_006c8140;
        *param_2 = (long)(puVar10 + 2);
        param_2[1] = uVar9 - 8;
        local_30 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
      }
      else {
        if (uVar9 < 4) goto LAB_006c8140;
        local_30 = (uint *)(ulong)*puVar10;
        *param_2 = (long)(puVar10 + 1);
        param_2[1] = uVar9 - 4;
      }
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 0x1e;
      goto LAB_006c842c;
    case 0x20:
      if (uVar9 < 8) goto LAB_006c8140;
      *param_2 = (long)(puVar10 + 2);
      param_2[1] = uVar9 - 8;
      bVar1 = *(byte *)((long)puVar10 + 7);
      uVar9 = (ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28;
      uVar14 = 0x19;
LAB_006c7914:
      local_30 = (uint *)(uVar9 >> 8 | (ulong)bVar1 << 0x38);
      puVar20 = puVar13;
LAB_006c7e58:
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      goto LAB_006c842c;
    case 0x21:
      if (uVar15 == 0x21) {
        local_30 = (uint *)*param_4;
        uVar14 = 6;
        puVar20 = puVar13;
        goto LAB_006c7e58;
      }
      uVar5 = 0x49;
      goto LAB_006c80fc;
    case 0x22:
      if (uVar9 == 0) goto LAB_006c7ef8;
      local_30 = (uint *)0x0;
      uVar17 = 0;
      puVar7 = (uint *)((long)puVar10 + uVar9);
      lVar12 = 1 - uVar9;
      goto LAB_006c7eb4;
    case 0x23:
      if (uVar9 == 0) goto LAB_006c7ef8;
      local_30 = (uint *)0x0;
      uVar17 = 0;
      puVar7 = (uint *)((long)puVar10 + uVar9);
      lVar12 = 1 - uVar9;
      goto LAB_006c79a4;
    case 0x24:
      goto switchD_006c7588_caseD_24;
    case 0x25:
      if (uVar9 != 0) {
        puVar7 = (uint *)((long)puVar10 + 1);
        local_30 = (uint *)(ulong)(byte)*puVar10;
        uVar16 = 0;
        uVar19 = 0;
        lVar12 = -1;
        goto LAB_006c7868;
      }
      goto LAB_006c8140;
    case 0x26:
      if (1 < uVar9) {
        uVar8 = *puVar10;
        local_30 = (uint *)(ulong)(ushort)uVar8;
        uVar19 = 0;
        lVar12 = -2;
        *param_2 = (long)puVar10 + 2;
        uVar16 = (uint)(ushort)((ushort)uVar8 >> 8);
        goto LAB_006c7af8;
      }
      goto LAB_006c8140;
    case 0x27:
      if (2 < uVar9) {
        *param_2 = (long)puVar10 + 3;
        param_2[1] = uVar9 - 3;
        uVar14 = 0x1d;
        goto LAB_006c7e84;
      }
      goto LAB_006c8140;
    case 0x28:
      if (uVar9 < 4) goto LAB_006c8140;
      puVar7 = puVar10 + 1;
      uVar19 = *puVar10;
      local_30 = (uint *)(ulong)uVar19;
      lVar12 = -4;
      uVar16 = uVar19 >> 8;
      uVar19 = uVar19 >> 0x10;
LAB_006c7868:
      *param_2 = (long)puVar7;
LAB_006c7af8:
      uVar17 = 0;
      param_2[1] = uVar9 + lVar12;
      uVar14 = 0x1d;
      goto LAB_006c842c;
    case 0x29:
      if (uVar9 != 0) {
        puVar7 = (uint *)((long)puVar10 + 1);
        local_30 = (uint *)(ulong)(byte)*puVar10;
        uVar16 = 0;
        uVar19 = 0;
        lVar12 = -1;
        goto LAB_006c7f50;
      }
      goto LAB_006c8140;
    case 0x2a:
      if (1 < uVar9) {
        uVar8 = *puVar10;
        local_30 = (uint *)(ulong)(ushort)uVar8;
        uVar19 = 0;
        lVar12 = -2;
        *param_2 = (long)puVar10 + 2;
        uVar16 = (uint)(ushort)((ushort)uVar8 >> 8);
        goto LAB_006c7f54;
      }
      goto LAB_006c8140;
    case 0x2b:
      if (uVar9 < 3) goto LAB_006c8140;
      *param_2 = (long)puVar10 + 3;
      param_2[1] = uVar9 - 3;
      uVar14 = 0xc;
LAB_006c7e84:
      uVar17 = 0;
      uVar19 = (uint)*(byte *)((long)puVar10 + 2);
      local_30 = (uint *)(ulong)(uint3)*puVar10;
      uVar16 = (uint)(uint3)((uint3)*puVar10 >> 8);
      goto LAB_006c842c;
    case 0x2c:
      if (uVar9 < 4) goto LAB_006c8140;
      puVar7 = puVar10 + 1;
      uVar19 = *puVar10;
      local_30 = (uint *)(ulong)uVar19;
      lVar12 = -4;
      uVar16 = uVar19 >> 8;
      uVar19 = uVar19 >> 0x10;
LAB_006c7f50:
      *param_2 = (long)puVar7;
LAB_006c7f54:
      uVar17 = 0;
      param_2[1] = uVar9 + lVar12;
      uVar14 = 0xc;
      goto LAB_006c842c;
    }
    *param_2 = (long)local_30;
    param_2[1] = (long)puVar13;
    puVar10 = local_30;
    if (puVar13 < puVar20) goto LAB_006c7e28;
    uVar16 = (uint)((ulong)local_30 >> 8);
    uVar19 = (uint)((ulong)local_30 >> 0x10);
    *param_2 = (long)local_30 + (long)puVar20;
    param_2[1] = (long)puVar13 - (long)puVar20;
    uVar17 = (ulong)local_30 & 0xffffffff00000000;
    uVar14 = 1;
    local_30 = (uint *)((ulong)local_30 & 0xffffffff);
    goto LAB_006c842c;
  }
LAB_006c760c:
  uVar21 = (undefined2)uVar8;
  if (0x1f1f < uVar8) {
    if (uVar8 == 0x1f20) {
      if ((uVar4 >> 8 & 0xff) == 8) {
switchD_006c7588_caseD_24:
        if (uVar9 < 8) {
LAB_006c8140:
          *(undefined1 *)((long)param_1 + 0xf) = 0;
          *(undefined1 *)(param_1 + 1) = 0x13;
          *(undefined2 *)((long)param_1 + 0xd) = 0;
          *(undefined4 *)((long)param_1 + 9) = 0;
LAB_006c8154:
          param_1[2] = puVar10;
          *param_1 = 0xffffffffffffffff;
          return;
        }
        *param_2 = (long)(puVar10 + 2);
        param_2[1] = uVar9 - 8;
        local_30 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
      }
      else {
        if (uVar9 < 4) goto LAB_006c8140;
        local_30 = (uint *)(ulong)*puVar10;
        *param_2 = (long)(puVar10 + 1);
        param_2[1] = uVar9 - 4;
      }
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 0xf;
      puVar20 = puVar13;
    }
    else {
      if (uVar8 != 0x1f21) goto switchD_006c7588_caseD_2;
switchD_006c7588_caseD_1d:
      if ((uVar4 >> 8 & 0xff) == 8) {
        if (uVar9 < 8) goto LAB_006c8140;
        *param_2 = (long)(puVar10 + 2);
        param_2[1] = uVar9 - 8;
        local_30 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
      }
      else {
        if (uVar9 < 4) goto LAB_006c8140;
        local_30 = (uint *)(ulong)*puVar10;
        *param_2 = (long)(puVar10 + 1);
        param_2[1] = uVar9 - 4;
      }
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 0x1b;
      puVar20 = puVar13;
    }
LAB_006c842c:
    uVar21 = *(undefined2 *)(param_4 + 1);
    *param_1 = uVar14;
    *(undefined2 *)(param_1 + 3) = uVar21;
    param_1[1] = uVar17 | ((uint)local_30 & 0xff | (uVar16 & 0xff) << 8 | uVar19 << 0x10);
    param_1[2] = puVar20;
    return;
  }
  if (uVar8 == 0x1f01) {
switchD_006c7588_caseD_1b:
    if (uVar9 != 0) {
      local_30 = (uint *)0x0;
      uVar17 = 0;
      puVar7 = (uint *)((long)puVar10 + uVar9);
      lVar12 = 1 - uVar9;
      do {
        puVar6 = (uint *)((long)puVar10 + 1);
        bVar1 = (byte)*puVar10;
        if (((int)uVar17 == 0x3f) && (1 < bVar1)) goto LAB_006c7f00;
        puVar20 = (ushort *)(((ulong)bVar1 & 0x7f) << (uVar17 & 0x3f));
        local_30 = (uint *)((ulong)puVar20 | (ulong)local_30);
        if (-1 < (char)bVar1) {
          uVar16 = (uint)((ulong)local_30 >> 8);
          uVar19 = (uint)((ulong)local_30 >> 0x10);
          *param_2 = (long)puVar6;
          param_2[1] = -lVar12;
          uVar17 = (ulong)local_30 & 0xffffffff00000000;
          uVar14 = 0xc;
          goto LAB_006c842c;
        }
        lVar12 = lVar12 + 1;
        uVar17 = (ulong)((int)uVar17 + 7);
        puVar10 = puVar6;
      } while (lVar12 != 1);
      goto LAB_006c7eec;
    }
  }
  else {
    if (uVar8 != 0x1f02) {
switchD_006c7588_caseD_2:
      uVar5 = 0xc;
      *(undefined2 *)((long)param_1 + 10) = uVar21;
LAB_006c80fc:
      *(undefined1 *)(param_1 + 1) = uVar5;
      *param_1 = 0xffffffffffffffff;
      return;
    }
switchD_006c7588_caseD_1a:
    if (uVar9 != 0) {
      local_30 = (uint *)0x0;
      uVar17 = 0;
      puVar7 = (uint *)((long)puVar10 + uVar9);
      lVar12 = 1 - uVar9;
      do {
        puVar6 = (uint *)((long)puVar10 + 1);
        bVar1 = (byte)*puVar10;
        if (((int)uVar17 == 0x3f) && (1 < bVar1)) goto LAB_006c7f00;
        puVar20 = (ushort *)(((ulong)bVar1 & 0x7f) << (uVar17 & 0x3f));
        local_30 = (uint *)((ulong)puVar20 | (ulong)local_30);
        if (-1 < (char)bVar1) {
          uVar16 = (uint)((ulong)local_30 >> 8);
          uVar19 = (uint)((ulong)local_30 >> 0x10);
          *param_2 = (long)puVar6;
          param_2[1] = -lVar12;
          uVar17 = (ulong)local_30 & 0xffffffff00000000;
          uVar14 = 0x1d;
          goto LAB_006c842c;
        }
        lVar12 = lVar12 + 1;
        uVar17 = (ulong)((int)uVar17 + 7);
        puVar10 = puVar6;
      } while (lVar12 != 1);
      goto LAB_006c7eec;
    }
  }
  goto LAB_006c7ef8;
  while( true ) {
    lVar12 = lVar12 + 1;
    uVar17 = (ulong)((int)uVar17 + 7);
    puVar10 = puVar6;
    if (lVar12 == 1) break;
LAB_006c79a4:
    puVar6 = (uint *)((long)puVar10 + 1);
    bVar1 = (byte)*puVar10;
    if (((int)uVar17 == 0x3f) && (1 < bVar1)) goto LAB_006c7f00;
    puVar20 = (ushort *)(((ulong)bVar1 & 0x7f) << (uVar17 & 0x3f));
    local_30 = (uint *)((ulong)puVar20 | (ulong)local_30);
    if (-1 < (char)bVar1) {
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      *param_2 = (long)puVar6;
      param_2[1] = -lVar12;
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 0x18;
      goto LAB_006c842c;
    }
  }
  goto LAB_006c7eec;
  while( true ) {
    lVar12 = lVar12 + 1;
    uVar17 = (ulong)((int)uVar17 + 7);
    puVar10 = puVar6;
    if (lVar12 == 1) break;
LAB_006c7eb4:
    puVar6 = (uint *)((long)puVar10 + 1);
    bVar1 = (byte)*puVar10;
    if (((int)uVar17 == 0x3f) && (1 < bVar1)) goto LAB_006c7f00;
    puVar20 = (ushort *)(((ulong)bVar1 & 0x7f) << (uVar17 & 0x3f));
    local_30 = (uint *)((ulong)puVar20 | (ulong)local_30);
    if (-1 < (char)bVar1) {
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      *param_2 = (long)puVar6;
      param_2[1] = -lVar12;
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 0x13;
      goto LAB_006c842c;
    }
  }
  goto LAB_006c7eec;
  while( true ) {
    uVar17 = uVar17 + 1;
    uVar18 = (ulong)((int)uVar18 + 7);
    if (uVar9 == uVar17) break;
LAB_006c7d5c:
    bVar1 = *(byte *)((long)puVar10 + uVar17);
    if (((int)uVar18 == 0x3f) && (1 < bVar1)) goto LAB_006c8184;
    puVar20 = (ushort *)(((ulong)bVar1 & 0x7f) << (uVar18 & 0x3f) | (ulong)puVar20);
    if (-1 < (char)bVar1) {
      uVar18 = ~uVar17;
      local_30 = (uint *)((long)puVar10 + uVar17 + 1);
      *param_2 = (long)local_30;
      param_2[1] = (long)(uVar18 + uVar9);
      if ((ushort *)(uVar18 + uVar9) < puVar20) goto LAB_006c7ffc;
      lVar12 = uVar17 + (long)puVar20;
      uVar14 = 8;
      goto LAB_006c8354;
    }
  }
  goto LAB_006c7d90;
LAB_006c7810:
  do {
    puVar6 = (uint *)((long)puVar10 + 1);
    bVar1 = (byte)*puVar10;
    if (((int)uVar17 == 0x3f) && (1 < bVar1)) goto LAB_006c7f00;
    puVar20 = (ushort *)(((ulong)bVar1 & 0x7f) << (uVar17 & 0x3f));
    local_30 = (uint *)((ulong)puVar20 | (ulong)local_30);
    if (-1 < (char)bVar1) {
      *param_2 = (long)puVar6;
      param_2[1] = -lVar12;
LAB_006c82a4:
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 0xd;
      goto LAB_006c842c;
    }
    lVar12 = lVar12 + 1;
    uVar17 = (ulong)((int)uVar17 + 7);
    puVar10 = puVar6;
  } while (lVar12 != 1);
  goto LAB_006c7eec;
LAB_006c8184:
  local_30 = (uint *)((long)puVar10 + uVar9);
  *param_2 = (long)puVar10 + uVar17 + 1;
  param_2[1] = ~uVar17 + uVar9;
  uVar14 = 6;
  goto LAB_006c819c;
LAB_006c7880:
  if ((char)*puVar7 == '\0') {
    *param_2 = (long)puVar7 + 1;
    param_2[1] = lVar12;
    uVar17 = (ulong)puVar10 & 0xffffffff00000000;
    uVar14 = 0x1f;
    local_30 = (uint *)((ulong)puVar10 & 0xffffffff);
    goto LAB_006c842c;
  }
  lVar12 = lVar12 + -1;
  puVar20 = (ushort *)((long)puVar20 + 1);
  puVar7 = (uint *)((long)puVar7 + 1);
  if (lVar12 == -1) {
LAB_006c7e28:
    param_1[1] = 0x13;
    param_1[2] = puVar10;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  goto LAB_006c7880;
LAB_006c7f00:
  puVar10 = (uint *)-lVar12;
  *param_2 = (long)puVar6;
  param_2[1] = (long)puVar10;
  uVar5 = 6;
  goto LAB_006c7f0c;
  while( true ) {
    uVar17 = uVar17 + 1;
    uVar18 = (ulong)((int)uVar18 + 7);
    if (uVar9 == uVar17) break;
LAB_006c7b18:
    bVar1 = *(byte *)((long)puVar10 + uVar17);
    if (((int)uVar18 == 0x3f) && (1 < bVar1)) goto LAB_006c8184;
    puVar20 = (ushort *)(((ulong)bVar1 & 0x7f) << (uVar18 & 0x3f) | (ulong)puVar20);
    if (-1 < (char)bVar1) {
      uVar18 = ~uVar17;
      local_30 = (uint *)((long)puVar10 + uVar17 + 1);
      *param_2 = (long)local_30;
      param_2[1] = (long)(uVar18 + uVar9);
      if (puVar20 <= (ushort *)(uVar18 + uVar9)) {
        lVar12 = uVar17 + (long)puVar20;
        uVar14 = 1;
LAB_006c8354:
        uVar17 = (ulong)local_30 & 0xffffffff00000000;
        *param_2 = (long)puVar10 + lVar12 + 1;
        param_2[1] = uVar18 + (uVar9 - (long)puVar20);
        uVar16 = (uint)((ulong)local_30 >> 8);
        uVar19 = (uint)((ulong)local_30 >> 0x10);
        goto LAB_006c842c;
      }
      goto LAB_006c7ffc;
    }
  }
LAB_006c7d90:
  *param_2 = (long)((long)puVar10 + uVar9);
  param_2[1] = 0;
  local_30 = (uint *)((long)puVar10 + uVar9);
LAB_006c7ffc:
  uVar14 = 0x13;
LAB_006c819c:
  param_1[1] = uVar14;
  param_1[2] = local_30;
  *param_1 = 0xffffffffffffffff;
  return;
  while( true ) {
    lVar12 = lVar12 + 1;
    uVar17 = (ulong)((int)uVar17 + 7);
    puVar10 = puVar6;
    if (lVar12 == 1) break;
LAB_006c7b6c:
    puVar6 = (uint *)((long)puVar10 + 1);
    bVar1 = (byte)*puVar10;
    if (((int)uVar17 == 0x3f) && (1 < bVar1)) goto LAB_006c7f00;
    puVar20 = (ushort *)(((ulong)bVar1 & 0x7f) << (uVar17 & 0x3f));
    local_30 = (uint *)((ulong)puVar20 | (ulong)local_30);
    if (-1 < (char)bVar1) {
      uVar16 = (uint)((ulong)local_30 >> 8);
      uVar19 = (uint)((ulong)local_30 >> 0x10);
      *param_2 = (long)puVar6;
      param_2[1] = -lVar12;
      uVar17 = (ulong)local_30 & 0xffffffff00000000;
      uVar14 = 7;
      goto LAB_006c842c;
    }
  }
LAB_006c7eec:
  *param_2 = (long)puVar7;
  param_2[1] = 0;
  puVar10 = puVar7;
LAB_006c7ef8:
  uVar5 = 0x13;
LAB_006c7f0c:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  param_1[2] = puVar10;
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 006c8474  FUN_006c8474 =====

void FUN_006c8474(ulong *param_1,ulong *param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,uint *param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  uint *in_x12;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  
  if (param_5 == 0) goto LAB_006c8858;
  lVar1 = param_4 + param_5 * 0x10;
  puVar8 = (uint *)*param_2;
  puVar9 = (uint *)param_2[1];
  puVar12 = (uint *)0x0;
  uVar2 = param_3;
  if ((param_3 & 0xffff0000) != 0x20000) {
    uVar2 = param_3 >> 8;
  }
LAB_006c84c4:
  uVar4 = *(ushort *)(param_4 + 10);
  uVar14 = (ulong)uVar4;
  uVar17 = 1;
  switch((uint)uVar4) {
  case 1:
switchD_006c84e4_caseD_1:
    uVar17 = param_3;
    break;
  case 2:
  case 3:
  case 4:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x22:
  case 0x23:
switchD_006c84e4_caseD_2:
    if (puVar12 != (uint *)0x0) {
      bVar7 = puVar9 < puVar12;
      puVar9 = (uint *)((long)puVar9 - (long)puVar12);
      if (bVar7) {
        *(undefined1 *)param_1 = 0x13;
        param_1[1] = (ulong)puVar8;
        return;
      }
      puVar8 = (uint *)((long)puVar8 + (long)puVar12);
      *param_2 = (ulong)puVar8;
      param_2[1] = (ulong)puVar9;
    }
    switch((uint)uVar4) {
    case 3:
switchD_006c8530_caseD_3:
      if (puVar9 < &DAT_00000002) {
LAB_006c88ec:
        *(undefined1 *)((long)param_1 + 7) = 0;
        *(undefined1 *)param_1 = 0x13;
        *(undefined2 *)((long)param_1 + 5) = 0;
        *(undefined4 *)((long)param_1 + 1) = 0;
        param_1[1] = (ulong)puVar8;
        return;
      }
      puVar16 = (uint *)((long)puVar8 + 2);
      puVar12 = (uint *)(ulong)(ushort)*puVar8;
      puVar9 = (uint *)((long)puVar9 + -2);
      goto LAB_006c86e4;
    case 4:
switchD_006c8530_caseD_4:
      if (puVar9 < &DAT_00000004) goto LAB_006c88ec;
      puVar16 = puVar8 + 1;
      puVar12 = (uint *)(ulong)*puVar8;
      puVar9 = puVar9 + -1;
      goto LAB_006c86e4;
    case 5:
    case 6:
    case 7:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x17:
    case 0x19:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
switchD_006c8530_caseD_5:
      *(short *)((long)param_1 + 2) = (short)uVar14;
      *(undefined1 *)param_1 = 0xc;
      return;
    case 8:
switchD_006c8530_caseD_8:
      if (puVar9 == (uint *)0x0) {
LAB_006c88b4:
        *param_1 = (ulong)param_7 & 0xffffffffffffff00 | 0x13;
        param_1[1] = (ulong)puVar8;
        return;
      }
      puVar16 = (uint *)0x0;
      while (*(char *)((long)puVar8 + (long)puVar16) != '\0') {
        puVar16 = (uint *)((long)puVar16 + 1);
        if (puVar9 == puVar16) goto LAB_006c88b4;
      }
      puVar12 = (uint *)0x0;
      puVar9 = (uint *)(~(ulong)puVar16 + (long)puVar9);
      *param_2 = (ulong)((undefined1 *)((long)puVar8 + (long)puVar16) + 1);
      param_2[1] = (ulong)puVar9;
      param_7 = puVar8;
      puVar8 = (uint *)((undefined1 *)((long)puVar8 + (long)puVar16) + 1);
      break;
    case 9:
    case 0x18:
switchD_006c8530_caseD_9:
      if (puVar9 == (uint *)0x0) {
LAB_006c8888:
        uVar10 = 0x13;
        in_x12 = puVar8;
LAB_006c8890:
        *(undefined1 *)param_1 = uVar10;
        *(undefined1 *)((long)param_1 + 1) = 0;
        *(undefined2 *)((long)param_1 + 6) = 0;
        *(undefined4 *)((long)param_1 + 2) = 0;
        param_1[1] = (ulong)in_x12;
        return;
      }
      puVar12 = (uint *)0x0;
      uVar14 = 0;
      lVar18 = 1 - (long)puVar9;
      puVar16 = puVar8;
      while( true ) {
        puVar15 = (uint *)((long)puVar16 + 1);
        bVar3 = (byte)*puVar16;
        if (((int)uVar14 == 0x3f) && (1 < bVar3)) {
          *param_2 = (ulong)puVar15;
          param_2[1] = -lVar18;
          uVar10 = 6;
          goto LAB_006c8890;
        }
        puVar12 = (uint *)(((ulong)bVar3 & 0x7f) << (uVar14 & 0x3f) | (ulong)puVar12);
        if (-1 < (char)bVar3) break;
        lVar18 = lVar18 + 1;
        uVar14 = (ulong)((int)uVar14 + 7);
        puVar16 = puVar15;
        if (lVar18 == 1) {
          puVar8 = (uint *)((long)puVar8 + (long)puVar9);
          *param_2 = (ulong)puVar8;
          param_2[1] = 0;
          goto LAB_006c8888;
        }
      }
      puVar9 = (uint *)-lVar18;
      *param_2 = (ulong)puVar15;
      param_2[1] = (ulong)puVar9;
      in_x12 = puVar12;
      puVar8 = puVar15;
      break;
    case 10:
switchD_006c8530_caseD_a:
      if (puVar9 == (uint *)0x0) goto LAB_006c88ec;
      puVar16 = (uint *)((long)puVar8 + 1);
      puVar12 = (uint *)(ulong)(byte)*puVar8;
      puVar9 = (uint *)((long)puVar9 + -1);
LAB_006c86e4:
      *param_2 = (ulong)puVar16;
      param_2[1] = (ulong)puVar9;
      puVar8 = puVar16;
      break;
    case 0xd:
    case 0xf:
    case 0x15:
    case 0x1a:
    case 0x1b:
    case 0x22:
    case 0x23:
      goto switchD_006c8530_caseD_d;
    case 0x16:
      if (puVar9 == (uint *)0x0) {
LAB_006c8930:
        uVar14 = 0;
        uVar11 = 0;
        uVar10 = 0x13;
      }
      else {
        puVar16 = (uint *)((long)puVar9 + -1);
        puVar12 = (uint *)((long)puVar8 + 1);
        cVar5 = (char)*puVar8;
        *param_2 = (ulong)puVar12;
        param_2[1] = (ulong)puVar16;
        if (-1 < cVar5) {
          uVar6 = (long)(int)cVar5;
          goto LAB_006c8640;
        }
        if (puVar16 != (uint *)0x0) {
          bVar3 = *(byte *)((long)puVar8 + 1);
          puVar12 = (uint *)((long)puVar8 + 2);
          puVar16 = (uint *)((long)puVar9 + -2);
          uVar17 = (int)cVar5 & 0x7fU | (bVar3 & 0x7f) << 7;
          *param_2 = (ulong)puVar12;
          param_2[1] = (ulong)puVar16;
          uVar6 = (ulong)uVar17;
          if (-1 < (char)bVar3) goto LAB_006c8640;
          if (puVar16 != (uint *)0x0) {
            bVar3 = *(byte *)((long)puVar8 + 2);
            puVar8 = (uint *)((long)puVar8 + 3);
            puVar16 = (uint *)((long)puVar9 + -3);
            *param_2 = (ulong)puVar8;
            param_2[1] = (ulong)puVar16;
            if (bVar3 < 4) {
              uVar17 = uVar17 | (uint)bVar3 << 0xe;
LAB_006c8630:
              puVar12 = puVar8;
              uVar6 = (ulong)uVar17 & 0xffff;
LAB_006c8640:
              do {
                uVar14 = uVar6;
                uVar13 = param_8;
                puVar9 = puVar16;
                puVar8 = puVar12;
                uVar17 = (uint)uVar14 & 0xffff;
                param_8 = uVar13 & 0xffffffffffff0000 | uVar14;
                switch(uVar17) {
                case 1:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_1;
                case 2:
                  goto switchD_006c8530_caseD_5;
                case 3:
                  goto switchD_006c8530_caseD_3;
                case 4:
                  goto switchD_006c8530_caseD_4;
                case 5:
                case 0x12:
                case 0x26:
                case 0x2a:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_5;
                case 6:
                case 0x13:
                case 0x1c:
                case 0x28:
                case 0x2c:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_6;
                case 7:
                case 0x14:
                case 0x20:
                case 0x24:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_7;
                case 8:
                  goto switchD_006c8530_caseD_8;
                case 9:
                case 0x18:
                  goto switchD_006c8530_caseD_9;
                case 10:
                  goto switchD_006c8530_caseD_a;
                case 0xb:
                case 0xc:
                case 0x11:
                case 0x25:
                case 0x29:
                  puVar12 = (uint *)0x0;
                  uVar17 = 1;
                  goto switchD_006c84e4_caseD_b;
                case 0xd:
                case 0xf:
                case 0x15:
                case 0x1a:
                case 0x1b:
                case 0x22:
                case 0x23:
                  goto switchD_006c8530_caseD_d;
                case 0x10:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_10;
                case 0x16:
                  if (puVar9 == (uint *)0x0) goto LAB_006c8930;
                  puVar16 = (uint *)((long)puVar9 + -1);
                  puVar12 = (uint *)((long)puVar8 + 1);
                  cVar5 = (char)*puVar8;
                  *param_2 = (ulong)puVar12;
                  param_2[1] = (ulong)puVar16;
                  if (cVar5 < 0) {
                    if (puVar16 != (uint *)0x0) goto code_r0x006c8710;
                    goto LAB_006c8940;
                  }
                  uVar6 = (long)(int)cVar5;
                  break;
                case 0x19:
                case 0x21:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_19;
                case 0x1e:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_1e;
                case 0x27:
                case 0x2b:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_27;
                default:
                  if (uVar17 - 0x1f01 < 2) goto switchD_006c8530_caseD_d;
                  if (1 < uVar17 - 0x1f20) goto switchD_006c8530_caseD_5;
                case 0xe:
                case 0x17:
                case 0x1d:
                case 0x1f:
                  puVar12 = (uint *)0x0;
                  goto switchD_006c84e4_caseD_e;
                }
              } while( true );
            }
            uVar11 = (undefined4)(param_8 >> 0x10);
            uVar10 = 6;
            uVar14 = param_8 & 0xffffffff;
            goto LAB_006c896c;
          }
        }
LAB_006c8940:
        puVar8 = puVar12;
        uVar14 = 0;
        uVar11 = 0;
        uVar10 = 0x13;
      }
LAB_006c896c:
      *(undefined1 *)param_1 = uVar10;
      *(undefined1 *)((long)param_1 + 1) = 0;
      *(short *)((long)param_1 + 2) = (short)uVar14;
      *(undefined4 *)((long)param_1 + 4) = uVar11;
      param_1[1] = (ulong)puVar8;
      return;
    default:
      if (1 < uVar4 - 0x1f01) goto switchD_006c8530_caseD_5;
      goto switchD_006c8530_caseD_d;
    }
    goto LAB_006c87f0;
  case 5:
  case 0x12:
  case 0x26:
  case 0x2a:
switchD_006c84e4_caseD_5:
    uVar17 = 2;
    break;
  case 6:
  case 0x13:
  case 0x1c:
  case 0x28:
  case 0x2c:
switchD_006c84e4_caseD_6:
    uVar17 = 4;
    break;
  case 7:
  case 0x14:
  case 0x20:
  case 0x24:
switchD_006c84e4_caseD_7:
    uVar17 = 8;
    break;
  case 0xb:
  case 0xc:
  case 0x11:
  case 0x25:
  case 0x29:
    break;
  case 0xe:
  case 0x17:
  case 0x1d:
  case 0x1f:
    goto switchD_006c84e4_caseD_e;
  case 0x10:
switchD_006c84e4_caseD_10:
    uVar17 = uVar2;
    break;
  case 0x19:
  case 0x21:
switchD_006c84e4_caseD_19:
    uVar17 = 0;
    break;
  case 0x1e:
switchD_006c84e4_caseD_1e:
    uVar17 = 0x10;
    break;
  case 0x27:
  case 0x2b:
switchD_006c84e4_caseD_27:
    uVar17 = 3;
    break;
  default:
    if (1 < uVar4 - 0x1f20) goto switchD_006c84e4_caseD_2;
    goto switchD_006c84e4_caseD_e;
  }
  goto switchD_006c84e4_caseD_b;
code_r0x006c8710:
  bVar3 = *(byte *)((long)puVar8 + 1);
  puVar12 = (uint *)((long)puVar8 + 2);
  puVar16 = (uint *)((long)puVar9 + -2);
  uVar17 = (int)cVar5 & 0x7fU | (bVar3 & 0x7f) << 7;
  *param_2 = (ulong)puVar12;
  param_2[1] = (ulong)puVar16;
  uVar6 = (ulong)uVar17;
  if ((char)bVar3 < '\0') goto LAB_006c8770;
  goto LAB_006c8640;
LAB_006c8770:
  if (puVar16 == (uint *)0x0) goto LAB_006c8940;
  bVar3 = *(byte *)((long)puVar8 + 2);
  puVar8 = (uint *)((long)puVar8 + 3);
  puVar16 = (uint *)((long)puVar9 + -3);
  *param_2 = (ulong)puVar8;
  param_2[1] = (ulong)puVar16;
  if (3 < bVar3) {
    uVar11 = (undefined4)(uVar13 >> 0x10);
    uVar10 = 6;
    goto LAB_006c896c;
  }
  uVar17 = uVar17 | (uint)bVar3 << 0xe;
  goto LAB_006c8630;
switchD_006c84e4_caseD_e:
  uVar17 = param_3 >> 8;
switchD_006c84e4_caseD_b:
  puVar12 = (uint *)((long)puVar12 + (ulong)(uVar17 & 0xff));
LAB_006c87f0:
  param_4 = param_4 + 0x10;
  if (param_4 == lVar1) goto code_r0x006c8800;
  goto LAB_006c84c4;
switchD_006c8530_caseD_d:
  puVar12 = puVar8;
  do {
    if (puVar9 == (uint *)0x0) {
      *(undefined2 *)((long)param_1 + 6) = 0;
      *(undefined2 *)param_1 = 0x13;
      *(undefined4 *)((long)param_1 + 2) = 0;
      param_1[1] = (ulong)puVar8;
      return;
    }
    puVar16 = (uint *)((long)puVar12 + 1);
    uVar17 = *puVar12;
    puVar9 = (uint *)((long)puVar9 + -1);
    puVar8 = (uint *)((long)puVar8 + 1);
    *param_2 = (ulong)puVar16;
    param_2[1] = (ulong)puVar9;
    puVar12 = puVar16;
  } while ((char)uVar17 < '\0');
  puVar12 = (uint *)0x0;
  puVar8 = puVar16;
  goto LAB_006c87f0;
code_r0x006c8800:
  if (puVar12 != (uint *)0x0) {
    if ((uint *)param_2[1] < puVar12) {
      param_1[1] = *param_2;
      *(undefined1 *)param_1 = 0x13;
      return;
    }
    *param_2 = (ulong)(*param_2 + (long)puVar12);
    param_2[1] = (long)param_2[1] - (long)puVar12;
  }
LAB_006c8858:
  *(undefined1 *)param_1 = 0xff;
  return;
}


// ===== 006c8990  core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::{closure#1}>::{closure#0},alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::line::LineSequence>> =====

/* core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<addr2line[5beaa54f6b4a1439]::line::LineSequence,
   <[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,
   <addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::{closure#1}>::{closure#0},
   alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::line::LineSequence>> */

void core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
     <addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::_closure_1_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::line::LineSequence>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_1068 [24];
  undefined8 uStack_1050;
  ulong local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  
  uStack_1050 = 0;
  uVar4 = param_2 - (param_2 >> 1);
  uVar1 = param_2;
  if (249999 < param_2) {
    uVar1 = 250000;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x31) {
    uVar2 = 0x30;
  }
  if (0x80 < uVar1) {
    uVar5 = uVar2 * 0x20;
    uVar6 = 0;
    if ((uVar4 >> 0x3b == 0) && (uVar5 < 0x7ffffffffffffff9)) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 8;
      puVar3 = (undefined1 *)__rustc::__rust_alloc(uVar5,8);
      if (puVar3 != (undefined1 *)0x0) {
        local_58 = 0;
        uVar4 = uVar2;
        local_68 = uVar2;
        puStack_60 = puVar3;
        goto LAB_006c8a44;
      }
    }
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,uVar5);
  }
  puVar3 = auStack_1068;
  uVar4 = 0x80;
LAB_006c8a44:
                    /* try { // try from 006c8a4c to 006c8a57 has its CatchHandler @ 006c8a9c */
  FUN_006ca948(param_1,param_2,puVar3,uVar4,param_2 < 0x41,param_3);
  if (0x80 < uVar1) {
    __rustc::__rust_dealloc(puVar3,uVar2 << 5,8);
  }
  return;
}


// ===== 006c8ab8  core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<addr2line[5beaa54f6b4a1439]::unit::UnitRange,<[addr2line[5beaa54f6b4a1439]::unit::UnitRange]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0},alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::unit::UnitRange>> =====

/* core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<addr2line[5beaa54f6b4a1439]::unit::UnitRange,
   <[addr2line[5beaa54f6b4a1439]::unit::UnitRange]>::sort_by_key<u64,
   <addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0},
   alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::unit::UnitRange>> */

void core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
     <addr2line[5beaa54f6b4a1439]::unit::UnitRange,<[addr2line[5beaa54f6b4a1439]::unit::UnitRange]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::unit::UnitRange>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_1050 [512];
  
  puVar3 = local_1050;
  uVar4 = param_2 - (param_2 >> 1);
  local_1050[0] = 0;
  uVar1 = param_2;
  if (249999 < param_2) {
    uVar1 = 250000;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x31) {
    uVar2 = 0x30;
  }
  if (uVar1 < 0x81) {
    uVar4 = 0x80;
LAB_006c8b64:
                    /* try { // try from 006c8b6c to 006c8b77 has its CatchHandler @ 006c8bb8 */
    FUN_006cae38(param_1,param_2,puVar3,uVar4,param_2 < 0x41,param_3);
    if (0x80 < uVar1) {
      __rustc::__rust_dealloc(puVar3,uVar2 << 5,8);
    }
    return;
  }
  uVar5 = uVar2 * 0x20;
  uVar6 = 0;
  if ((uVar4 >> 0x3b == 0) && (uVar5 < 0x7ffffffffffffff9)) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 8;
    puVar3 = (undefined8 *)__rustc::__rust_alloc(uVar5,8);
    uVar4 = uVar2;
    if (puVar3 != (undefined8 *)0x0) goto LAB_006c8b64;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar6,uVar5);
}


// ===== 006c8bdc  core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0},alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::function::FunctionAddress>> =====

/* core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<addr2line[5beaa54f6b4a1439]::function::FunctionAddress,
   <[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,
   <addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0},
   alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::function::FunctionAddress>> */

void core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
     <addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::function::FunctionAddress>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_1060 [512];
  
  puVar2 = local_1060;
  uVar4 = param_2 - (param_2 >> 1);
  local_1060[0] = 0;
  uVar1 = param_2;
  if (0x51614 < param_2) {
    uVar1 = 0x51615;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  uVar3 = uVar1;
  if (uVar1 < 0x31) {
    uVar3 = 0x30;
  }
  if (uVar1 < 0xab) {
    lVar5 = 0;
    uVar3 = 0xaa;
  }
  else {
    lVar5 = uVar3 * 0x18;
    if (0x555555555555555 < uVar4) {
      uVar6 = 0;
LAB_006c8c60:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar6,lVar5);
    }
    if (lVar5 == 0) {
      uVar3 = 0;
      puVar2 = (undefined8 *)&DAT_00000008;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 8;
      puVar2 = (undefined8 *)__rustc::__rust_alloc(lVar5,8);
      if (puVar2 == (undefined8 *)0x0) goto LAB_006c8c60;
    }
    lVar5 = uVar3 * 0x18;
  }
                    /* try { // try from 006c8cbc to 006c8cc7 has its CatchHandler @ 006c8d00 */
  FUN_006cb328(param_1,param_2,puVar2,uVar3,param_2 < 0x41,param_3);
  if (0xaa < uVar1) {
    __rustc::__rust_dealloc(puVar2,lVar5,8);
  }
  return;
}


// ===== 006c8d24  core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0},alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress>> =====

/* core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,
   <[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0},
   alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress>>
    */

void core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
     <addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_1050 [512];
  
  puVar3 = local_1050;
  uVar4 = param_2 - (param_2 >> 1);
  local_1050[0] = 0;
  uVar1 = param_2;
  if (249999 < param_2) {
    uVar1 = 250000;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x31) {
    uVar2 = 0x30;
  }
  if (uVar1 < 0x81) {
    uVar4 = 0x80;
LAB_006c8dd0:
                    /* try { // try from 006c8dd8 to 006c8de3 has its CatchHandler @ 006c8e24 */
    FUN_006cb854(param_1,param_2,puVar3,uVar4,param_2 < 0x41,param_3);
    if (0x80 < uVar1) {
      __rustc::__rust_dealloc(puVar3,uVar2 << 5,8);
    }
    return;
  }
  uVar5 = uVar2 * 0x20;
  uVar6 = 0;
  if ((uVar4 >> 0x3b == 0) && (uVar5 < 0x7ffffffffffffff9)) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 8;
    puVar3 = (undefined8 *)__rustc::__rust_alloc(uVar5,8);
    uVar4 = uVar2;
    if (puVar3 != (undefined8 *)0x0) goto LAB_006c8dd0;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar6,uVar5);
}


// ===== 006c8e48  core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0},alloc[cc0d62b833a55794]::vec::Vec<(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)>> =====

/* core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::<(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,
   gimli[d400ddce60e1bc02]::common::DebugArangesOffset),
   <[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,
   gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,
   <addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0},
   alloc[cc0d62b833a55794]::vec::Vec<(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,
   gimli[d400ddce60e1bc02]::common::DebugArangesOffset)>> */

void core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
     <(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_1050 [512];
  
  puVar3 = local_1050;
  uVar4 = param_2 - (param_2 >> 1);
  local_1050[0] = 0;
  uVar1 = param_2;
  if (499999 < param_2) {
    uVar1 = 500000;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x31) {
    uVar2 = 0x30;
  }
  if (uVar1 < 0x101) {
    uVar4 = 0x100;
LAB_006c8ef4:
                    /* try { // try from 006c8efc to 006c8f07 has its CatchHandler @ 006c8f48 */
    FUN_006cbe28(param_1,param_2,puVar3,uVar4,param_2 < 0x41,param_3);
    if (0x100 < uVar1) {
      __rustc::__rust_dealloc(puVar3,uVar2 << 4,8);
    }
    return;
  }
  uVar5 = uVar2 * 0x10;
  uVar6 = 0;
  if ((uVar4 >> 0x3c == 0) && (uVar5 < 0x7ffffffffffffff9)) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 8;
    puVar3 = (undefined8 *)__rustc::__rust_alloc(uVar5,8);
    uVar4 = uVar2;
    if (puVar3 != (undefined8 *)0x0) goto LAB_006c8ef4;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar6,uVar5);
}


// ===== 006c8f6c  core[188d2c0002da36d0]::slice::sort::unstable::ipnsort::<std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}> =====

/* core[188d2c0002da36d0]::slice::sort::unstable::ipnsort::<std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::ParsedSym,
   <[std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,
   <std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>
    */

void core[188d2c0002da36d0]::slice::sort::unstable::ipnsort::
     <std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
               (ulong *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 < 2) {
    return;
  }
  uVar1 = param_1[3];
  if (uVar1 < *param_1) {
    if (param_2 != 2) {
      uVar3 = 2;
      puVar2 = param_1 + 6;
      uVar5 = uVar1;
      do {
        uVar6 = *puVar2;
        if (uVar5 <= uVar6) goto LAB_006c8fc8;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 3;
        uVar5 = uVar6;
      } while (param_2 != uVar3);
      goto LAB_006c9010;
    }
  }
  else if (param_2 != 2) {
    uVar3 = 2;
    puVar2 = param_1 + 6;
    uVar5 = uVar1;
    do {
      uVar6 = *puVar2;
      if (uVar6 < uVar5) goto LAB_006c8fc8;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 3;
      uVar5 = uVar6;
    } while (param_2 != uVar3);
    goto LAB_006c9010;
  }
  uVar3 = 2;
LAB_006c8fc8:
  if (uVar3 != param_2) {
    FUN_006ce8ec(param_1,param_2,0,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,param_3);
    return;
  }
LAB_006c9010:
  if (uVar1 < *param_1) {
    uVar1 = param_2 >> 1;
    puVar2 = param_1 + 2;
    puVar4 = param_1 + param_2 * 3 + -1;
    do {
      uVar6 = puVar4[-2];
      uVar8 = puVar2[-1];
      uVar7 = puVar2[-2];
      uVar1 = uVar1 - 1;
      uVar3 = *puVar4;
      uVar5 = *puVar2;
      puVar2[-1] = puVar4[-1];
      puVar2[-2] = uVar6;
      puVar4[-1] = uVar8;
      puVar4[-2] = uVar7;
      *puVar2 = uVar3;
      *puVar4 = uVar5;
      puVar2 = puVar2 + 3;
      puVar4 = puVar4 + -3;
    } while (uVar1 != 0);
  }
  return;
}


// ===== 006c9058  FUN_006c9058 =====

int FUN_006c9058(undefined8 *param_1)

{
  pthread_key_t __key;
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  __key = *(pthread_key_t *)(param_1 + 1);
  pthread_setspecific(__key,(void *)0x1);
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
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>::
      drop_slow(param_1);
    }
  }
  free(param_1);
  pthread_setspecific(__key,(void *)0x0);
  lVar5 = DAT_009a6dd8;
  if (DAT_009a6dd8 == 0) {
                    /* try { // try from 006c90d4 to 006c90df has its CatchHandler @ 006c90e4 */
    lVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6dd8);
  }
  iVar3 = pthread_setspecific((pthread_key_t)lVar5,(void *)0x1);
  return iVar3;
}


// ===== 006c90f0  FUN_006c90f0 =====

int FUN_006c90f0(undefined8 *param_1)

{
  pthread_key_t __key;
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  __key = *(pthread_key_t *)(param_1 + 1);
  pthread_setspecific(__key,(void *)0x1);
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
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::mpmc::context::Inner>>::drop_slow(param_1);
    }
  }
  free(param_1);
  pthread_setspecific(__key,(void *)0x0);
  lVar5 = DAT_009a6dd8;
  if (DAT_009a6dd8 == 0) {
                    /* try { // try from 006c916c to 006c9177 has its CatchHandler @ 006c917c */
    lVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6dd8);
  }
  iVar3 = pthread_setspecific((pthread_key_t)lVar5,(void *)0x1);
  return iVar3;
}


// ===== 006c9188  FUN_006c9188 =====

int FUN_006c9188(long param_1)

{
  pthread_key_t __key;
  int iVar1;
  long lVar2;
  
  __key = *(pthread_key_t *)(param_1 + 8);
  pthread_setspecific(__key,(void *)0x1);
                    /* try { // try from 006c91a8 to 006c91e7 has its CatchHandler @ 006c91ec */
  FUN_006c3e6c(param_1);
  pthread_setspecific(__key,(void *)0x0);
  lVar2 = DAT_009a6dd8;
  if (DAT_009a6dd8 == 0) {
    lVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6dd8);
  }
  iVar1 = pthread_setspecific((pthread_key_t)lVar2,(void *)0x1);
  return iVar1;
}


// ===== 006c91f8  FUN_006c91f8 =====

int FUN_006c91f8(void *param_1)

{
  pthread_key_t __key;
  int iVar1;
  long lVar2;
  
  __key = *(pthread_key_t *)((long)param_1 + 0x10);
  pthread_setspecific(__key,(void *)0x1);
  free(param_1);
  pthread_setspecific(__key,(void *)0x0);
  lVar2 = DAT_009a6dd8;
  if (DAT_009a6dd8 == 0) {
                    /* try { // try from 006c924c to 006c9257 has its CatchHandler @ 006c925c */
    lVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6dd8);
  }
  iVar1 = pthread_setspecific((pthread_key_t)lVar2,(void *)0x1);
  return iVar1;
}


// ===== 006c9268  FUN_006c9268 =====

int FUN_006c9268(void *param_1)

{
  pthread_key_t __key;
  int iVar1;
  long lVar2;
  
  __key = *(pthread_key_t *)((long)param_1 + 4);
  pthread_setspecific(__key,(void *)0x1);
  free(param_1);
  pthread_setspecific(__key,(void *)0x0);
  lVar2 = DAT_009a6dd8;
  if (DAT_009a6dd8 == 0) {
                    /* try { // try from 006c92bc to 006c92c7 has its CatchHandler @ 006c92cc */
    lVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6dd8);
  }
  iVar1 = pthread_setspecific((pthread_key_t)lVar2,(void *)0x1);
  return iVar1;
}


// ===== 006c92d8  FUN_006c92d8 =====

void FUN_006c92d8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != -1) {
    *param_1 = 0;
    param_1[1] = param_2;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006c9354  FUN_006c9354 =====

void FUN_006c9354(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  uVar1 = <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
                    (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 006c93a8 to 006c93b3 has its CatchHandler @ 006c93e0 */
    FUN_006d1be8(param_1,uVar1,local_48);
    *local_48 = 0;
  }
  else {
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = &PTR_DAT_00977090;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    __rustc::__rust_dealloc(local_48,lStack_40,1);
  }
  return;
}


// ===== 006c9404  FUN_006c9404 =====

void FUN_006c9404(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 006c945c to 006c946f has its CatchHandler @ 006c949c */
    (*param_4)(param_1,1,local_48,lStack_40);
    *local_48 = 0;
  }
  else {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = &PTR_DAT_00977090;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    __rustc::__rust_dealloc(local_48,lStack_40,1);
  }
  return;
}


// ===== 006c94c0  FUN_006c94c0 =====

void FUN_006c94c0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  long local_60;
  undefined1 *local_58;
  long lStack_50;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_60,param_2,param_3);
  if (local_60 == -1) {
                    /* try { // try from 006c9524 to 006c9537 has its CatchHandler @ 006c9568 */
    (*param_5)(param_1,param_4,local_58,lStack_50);
    *local_58 = 0;
  }
  else {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00977090;
    *param_1 = 1;
    lStack_50 = local_60;
  }
  if (lStack_50 != 0) {
    __rustc::__rust_dealloc(local_58,lStack_50,1);
  }
  return;
}


// ===== 006c958c  FUN_006c958c =====

void FUN_006c958c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 006c95e4 to 006c95f7 has its CatchHandler @ 006c9624 */
    (*param_4)(param_1,1,local_48,lStack_40);
    *local_48 = 0;
  }
  else {
    *param_1 = 1;
    param_1[1] = &PTR_DAT_00977090;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    __rustc::__rust_dealloc(local_48,lStack_40,1);
  }
  return;
}


// ===== 006c9648  FUN_006c9648 =====

void FUN_006c9648(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 006c96a4 to 006c96b3 has its CatchHandler @ 006c96e0 */
    FUN_006d08dc(param_1,param_4,local_48);
    *local_48 = 0;
  }
  else {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00977090;
    *param_1 = 1;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    __rustc::__rust_dealloc(local_48,lStack_40,1);
  }
  return;
}


// ===== 006c9704  FUN_006c9704 =====

void FUN_006c9704(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 006c975c to 006c976b has its CatchHandler @ 006c9798 */
    FUN_006d20c0(param_1,param_4,local_48);
    *local_48 = 0;
  }
  else {
    *param_1 = 1;
    param_1[1] = &PTR_DAT_00977090;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    __rustc::__rust_dealloc(local_48,lStack_40,1);
  }
  return;
}


// ===== 006c97bc  FUN_006c97bc =====

undefined1  [16] FUN_006c97bc(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  DIR *pDVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long local_40;
  char *local_38;
  long lStack_30;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_40);
  if (local_40 == -1) {
    pDVar3 = opendir(local_38);
    *local_38 = '\0';
    if (lStack_30 != 0) {
      __rustc::__rust_dealloc(local_38,lStack_30,1);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = pDVar3;
      return auVar1 << 0x40;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = pDVar3;
    return auVar2 << 0x40;
  }
  if (local_40 != 0) {
    __rustc::__rust_dealloc(local_38,local_40,1);
    auVar4._8_8_ = &PTR_DAT_00977090;
    auVar4._0_8_ = 1;
    return auVar4;
  }
  auVar5._8_8_ = &PTR_DAT_00977090;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006c9890  FUN_006c9890 =====

void FUN_006c9890(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_50;
  char *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
    iVar1 = chdir(local_48);
    *param_1 = 0;
    param_1[1] = iVar1;
    *local_48 = '\0';
  }
  else {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00977090;
    *param_1 = 1;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    __rustc::__rust_dealloc(local_48,lStack_40,1);
  }
  return;
}


// ===== 006c9920  FUN_006c9920 =====

undefined ** FUN_006c9920(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined **ppuVar1;
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50);
  if (local_50 == -1) {
                    /* try { // try from 006c9980 to 006c998f has its CatchHandler @ 006c99c4 */
    ppuVar1 = (undefined **)(*param_4)(param_3,local_48,lStack_40);
    *local_48 = 0;
    if (lStack_40 != 0) {
      __rustc::__rust_dealloc(local_48,lStack_40,1);
      return ppuVar1;
    }
  }
  else {
    if (local_50 != 0) {
      __rustc::__rust_dealloc(local_48,local_50,1);
    }
    ppuVar1 = &PTR_DAT_00977090;
  }
  return ppuVar1;
}


// ===== 006c99e8  FUN_006c99e8 =====

long FUN_006c99e8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar4 = param_4 * 0x80;
    lVar1 = param_4 * 0xe0;
    param_1 = FUN_006c99e8(param_1,param_1 + lVar4,param_1 + lVar1,param_4);
    param_2 = FUN_006c99e8(param_2,param_2 + lVar4,param_2 + lVar1,param_4);
    param_3 = FUN_006c99e8(param_3,param_3 + lVar4,param_3 + lVar1,param_4);
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x10);
  lVar1 = param_3;
  if (uVar2 < uVar3 == uVar3 < *(ulong *)(param_3 + 0x10)) {
    lVar1 = param_2;
  }
  if (uVar2 < uVar3 == uVar2 < *(ulong *)(param_3 + 0x10)) {
    param_1 = lVar1;
  }
  return param_1;
}


// ===== 006c9ab4  FUN_006c9ab4 =====

long FUN_006c9ab4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar4 = param_4 * 0x80;
    lVar1 = param_4 * 0xe0;
    param_1 = FUN_006c9ab4(param_1,param_1 + lVar4,param_1 + lVar1,param_4);
    param_2 = FUN_006c9ab4(param_2,param_2 + lVar4,param_2 + lVar1,param_4);
    param_3 = FUN_006c9ab4(param_3,param_3 + lVar4,param_3 + lVar1,param_4);
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_2 + 8);
  lVar1 = param_3;
  if (uVar2 < uVar3 == uVar3 < *(ulong *)(param_3 + 8)) {
    lVar1 = param_2;
  }
  if (uVar2 < uVar3 == uVar2 < *(ulong *)(param_3 + 8)) {
    param_1 = lVar1;
  }
  return param_1;
}


// ===== 006c9b80  FUN_006c9b80 =====

ulong * FUN_006c9b80(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_006c9b80(param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15,param_4
                                   );
    param_2 = (ulong *)FUN_006c9b80(param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4
                                   );
    param_3 = (ulong *)FUN_006c9b80(param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4
                                   );
  }
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = param_3;
  if (uVar2 < uVar3 == uVar3 < *param_3) {
    puVar1 = param_2;
  }
  if (uVar2 < uVar3 == uVar2 < *param_3) {
    param_1 = puVar1;
  }
  return param_1;
}


// ===== 006c9c50  FUN_006c9c50 =====

ulong * FUN_006c9c50(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_006c9c50(param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c,
                                    param_4);
    param_2 = (ulong *)FUN_006c9c50(param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,
                                    param_4);
    param_3 = (ulong *)FUN_006c9c50(param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,
                                    param_4);
  }
  uVar8 = param_1[2];
  uVar2 = param_2[2];
  uVar7 = *param_1;
  uVar3 = *param_2;
  if (uVar2 <= uVar8) {
    uVar4 = param_3[2];
    uVar5 = *param_3;
    bVar1 = uVar2 > uVar8;
    bVar6 = (bVar1 || uVar8 == uVar2) && uVar7 < uVar3;
    if (uVar4 <= uVar8) {
      if (bVar6 != ((uVar4 > uVar8 || uVar8 == uVar4) && uVar7 < uVar5)) {
        return param_1;
      }
      goto LAB_006c9d34;
    }
    if (!bVar1 && uVar8 != uVar2 || uVar7 >= uVar3) {
      return param_1;
    }
  }
  else {
    uVar4 = param_3[2];
    uVar5 = *param_3;
    if (uVar4 <= uVar8) {
      if (uVar4 < uVar8) {
        return param_1;
      }
      if (uVar5 <= uVar7) {
        return param_1;
      }
    }
  }
  bVar6 = true;
LAB_006c9d34:
  if (bVar6 == (uVar2 < uVar4 || uVar2 <= uVar4 && uVar3 < uVar5)) {
    param_3 = param_2;
  }
  return param_3;
}


// ===== 006c9d7c  FUN_006c9d7c =====

ulong * FUN_006c9d7c(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_006c9d7c(param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15,param_4
                                   );
    param_2 = (ulong *)FUN_006c9d7c(param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4
                                   );
    param_3 = (ulong *)FUN_006c9d7c(param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4
                                   );
  }
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = param_3;
  if (uVar2 < uVar3 == uVar3 < *param_3) {
    puVar1 = param_2;
  }
  if (uVar2 < uVar3 == uVar2 < *param_3) {
    param_1 = puVar1;
  }
  return param_1;
}


// ===== 006c9e4c  FUN_006c9e4c =====

ulong * FUN_006c9e4c(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_006c9e4c(param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe,param_4);
    param_2 = (ulong *)FUN_006c9e4c(param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (ulong *)FUN_006c9e4c(param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = param_3;
  if (uVar2 < uVar3 == uVar3 < *param_3) {
    puVar1 = param_2;
  }
  if (uVar2 < uVar3 == uVar2 < *param_3) {
    param_1 = puVar1;
  }
  return param_1;
}


// ===== 006c9f18  FUN_006c9f18 =====

void FUN_006c9f18(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  if (param_1[6] < param_1[2]) {
    uVar6 = 1;
    uVar8 = param_1[0xe];
    uVar11 = param_1[10];
    if (uVar11 <= uVar8) goto LAB_006c9f3c;
LAB_006c9f90:
    puVar12 = param_1 + 0xc;
    lVar9 = 2;
  }
  else {
    uVar6 = (ulong)(param_1[6] <= param_1[2] && param_1[4] < *param_1);
    uVar8 = param_1[0xe];
    uVar11 = param_1[10];
    if (uVar8 < uVar11) goto LAB_006c9f90;
LAB_006c9f3c:
    bVar5 = param_1[8] <= param_1[0xc];
    puVar12 = param_1 + 0xc;
    if (uVar11 < uVar8 || bVar5) {
      puVar12 = param_1 + 8;
    }
    lVar9 = 2;
    if (uVar11 < uVar8 || bVar5) {
      lVar9 = 3;
    }
  }
  puVar1 = param_1 + uVar6 * 4;
  puVar7 = param_1 + (ulong)((uint)uVar6 ^ 1) * 4;
  param_1 = param_1 + lVar9 * 4;
  puVar13 = puVar1;
  puVar14 = puVar12;
  if (puVar12[2] < puVar1[2]) {
    bVar5 = true;
    uVar6 = param_1[2];
    uVar8 = puVar7[2];
    bVar4 = true;
    if (uVar8 <= uVar6) goto LAB_006c9fd0;
LAB_006ca03c:
    if (!bVar5) {
      puVar13 = puVar12;
      puVar14 = puVar1;
    }
    uVar8 = puVar13[2];
    puVar10 = param_1;
    if (uVar6 < uVar8) goto LAB_006ca070;
  }
  else {
    bVar5 = puVar12[2] <= puVar1[2] && *puVar12 < *puVar1;
    uVar6 = param_1[2];
    uVar8 = puVar7[2];
    bVar4 = bVar5;
    if (uVar6 < uVar8) goto LAB_006ca03c;
LAB_006c9fd0:
    uVar3 = nzcv;
    puVar2 = puVar12;
    if (uVar8 < uVar6 || *puVar7 <= *param_1) {
      puVar2 = puVar7;
    }
    puVar10 = puVar7;
    if (!bVar4) {
      puVar13 = puVar2;
      puVar14 = puVar1;
      puVar10 = puVar12;
    }
    nzcv = uVar3;
    uVar6 = puVar10[2];
    uVar8 = puVar13[2];
    puVar7 = param_1;
    param_1 = puVar10;
    if (uVar6 < uVar8) goto LAB_006ca070;
  }
  puVar10 = param_1;
  if (uVar8 < uVar6 || *puVar13 <= *param_1) {
    puVar10 = puVar13;
    puVar13 = param_1;
  }
LAB_006ca070:
  uVar11 = *puVar14;
  uVar8 = puVar14[3];
  uVar6 = puVar14[2];
  param_2[1] = puVar14[1];
  *param_2 = uVar11;
  param_2[3] = uVar8;
  param_2[2] = uVar6;
  uVar11 = *puVar10;
  uVar8 = puVar10[3];
  uVar6 = puVar10[2];
  param_2[5] = puVar10[1];
  param_2[4] = uVar11;
  param_2[7] = uVar8;
  param_2[6] = uVar6;
  uVar11 = *puVar13;
  uVar8 = puVar13[3];
  uVar6 = puVar13[2];
  param_2[9] = puVar13[1];
  param_2[8] = uVar11;
  param_2[0xb] = uVar8;
  param_2[10] = uVar6;
  uVar11 = *puVar7;
  uVar8 = puVar7[3];
  uVar6 = puVar7[2];
  param_2[0xd] = puVar7[1];
  param_2[0xc] = uVar11;
  param_2[0xf] = uVar8;
  param_2[0xe] = uVar6;
  return;
}


// ===== 006ca094  FUN_006ca094 =====

void FUN_006ca094(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  bool bVar8;
  bool bVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar7 = param_1 + (ulong)(*param_1 <= param_1[2]) * 2;
  lVar3 = 0x20;
  if (param_1[4] <= param_1[6]) {
    lVar3 = 0x30;
  }
  puVar10 = param_1 + (ulong)(*param_1 > param_1[2]) * 2;
  lVar4 = 0x30;
  if (param_1[4] <= param_1[6]) {
    lVar4 = 0x20;
  }
  puVar1 = (ulong *)((long)param_1 + lVar3);
  puVar2 = (ulong *)((long)param_1 + lVar4);
  puVar5 = puVar2;
  if (*puVar7 <= *puVar1) {
    puVar5 = puVar7;
  }
  puVar6 = puVar7;
  if (*puVar10 <= *puVar2) {
    puVar6 = puVar2;
    puVar2 = puVar10;
    puVar10 = puVar5;
  }
  uVar11 = *puVar10;
  uVar13 = *puVar2;
  if (*puVar7 <= *puVar1) {
    puVar7 = puVar1;
    puVar1 = puVar6;
  }
  uVar12 = *puVar1;
  param_3[1] = puVar2[1];
  *param_3 = uVar13;
  puVar2 = puVar10;
  if (uVar11 <= uVar12) {
    puVar2 = puVar1;
    puVar1 = puVar10;
  }
  uVar11 = *puVar1;
  param_3[3] = puVar1[1];
  param_3[2] = uVar11;
  uVar11 = *puVar2;
  param_3[5] = puVar2[1];
  param_3[4] = uVar11;
  uVar11 = *puVar7;
  param_3[7] = puVar7[1];
  param_3[6] = uVar11;
  puVar10 = param_1 + 8;
  puVar7 = puVar10 + (ulong)(*puVar10 <= param_1[10]) * 2;
  lVar3 = 0x20;
  if (param_1[0xc] <= param_1[0xe]) {
    lVar3 = 0x30;
  }
  puVar1 = puVar10 + (ulong)(*puVar10 > param_1[10]) * 2;
  lVar4 = 0x30;
  if (param_1[0xc] <= param_1[0xe]) {
    lVar4 = 0x20;
  }
  puVar2 = (ulong *)((long)puVar10 + lVar3);
  puVar10 = (ulong *)((long)puVar10 + lVar4);
  puVar5 = puVar10;
  if (*puVar7 <= *puVar2) {
    puVar5 = puVar7;
  }
  puVar6 = puVar7;
  if (*puVar1 <= *puVar10) {
    puVar6 = puVar10;
    puVar10 = puVar1;
    puVar1 = puVar5;
  }
  uVar11 = *puVar1;
  uVar13 = *puVar10;
  if (*puVar7 <= *puVar2) {
    puVar7 = puVar2;
    puVar2 = puVar6;
  }
  uVar12 = *puVar2;
  param_3[9] = puVar10[1];
  param_3[8] = uVar13;
  puVar10 = puVar1;
  if (uVar11 <= uVar12) {
    puVar10 = puVar2;
    puVar2 = puVar1;
  }
  uVar11 = *puVar2;
  param_3[0xb] = puVar2[1];
  param_3[10] = uVar11;
  bVar8 = *param_3 <= param_3[8];
  uVar11 = *puVar10;
  puVar1 = param_3 + 8;
  if (bVar8) {
    puVar1 = param_3;
  }
  param_3[0xd] = puVar10[1];
  param_3[0xc] = uVar11;
  uVar12 = puVar1[1];
  uVar13 = *puVar1;
  puVar10 = param_3 + 8 + (ulong)!bVar8 * 2;
  uVar11 = *puVar7;
  param_3[0xf] = puVar7[1];
  param_3[0xe] = uVar11;
  param_2[1] = uVar12;
  *param_2 = uVar13;
  bVar9 = param_3[6] <= param_3[0xe];
  puVar7 = param_3 + 6;
  if (bVar9) {
    puVar7 = param_3 + 0xe;
  }
  uVar11 = *puVar7;
  puVar1 = param_3 + (ulong)bVar8 * 2;
  puVar2 = param_3 + 6 + (ulong)!bVar9 * -2;
  param_2[0xf] = puVar7[1];
  param_2[0xe] = uVar11;
  bVar8 = *puVar1 <= *puVar10;
  puVar7 = puVar10;
  if (bVar8) {
    puVar7 = puVar1;
  }
  uVar11 = *puVar7;
  puVar5 = param_3 + 0xe + (ulong)bVar9 * -2;
  puVar10 = puVar10 + (ulong)!bVar8 * 2;
  puVar1 = puVar1 + (ulong)bVar8 * 2;
  param_2[3] = puVar7[1];
  param_2[2] = uVar11;
  bVar8 = *puVar2 <= *puVar5;
  puVar7 = puVar2;
  if (bVar8) {
    puVar7 = puVar5;
  }
  uVar11 = *puVar7;
  puVar5 = puVar5 + (ulong)bVar8 * -2;
  puVar2 = puVar2 + (ulong)!bVar8 * -2;
  param_2[0xd] = puVar7[1];
  param_2[0xc] = uVar11;
  bVar8 = *puVar1 <= *puVar10;
  puVar7 = puVar10;
  if (bVar8) {
    puVar7 = puVar1;
  }
  uVar11 = *puVar7;
  puVar10 = puVar10 + (ulong)!bVar8 * 2;
  param_2[5] = puVar7[1];
  param_2[4] = uVar11;
  bVar9 = *puVar2 <= *puVar5;
  puVar7 = puVar2;
  if (bVar9) {
    puVar7 = puVar5;
  }
  uVar11 = *puVar7;
  puVar1 = puVar1 + (ulong)bVar8 * 2;
  puVar2 = puVar2 + (ulong)!bVar9 * -2;
  param_2[0xb] = puVar7[1];
  param_2[10] = uVar11;
  bVar8 = *puVar1 <= *puVar10;
  puVar7 = puVar10;
  if (bVar8) {
    puVar7 = puVar1;
  }
  uVar11 = *puVar7;
  puVar5 = puVar5 + (ulong)bVar9 * -2;
  param_2[7] = puVar7[1];
  param_2[6] = uVar11;
  bVar9 = *puVar2 <= *puVar5;
  puVar7 = puVar2;
  if (bVar9) {
    puVar7 = puVar5;
  }
  uVar11 = *puVar7;
  param_2[9] = puVar7[1];
  param_2[8] = uVar11;
  if ((puVar1 + (ulong)bVar8 * 2 == puVar2 + (ulong)!bVar9 * -2 + 2) &&
     (puVar10 + (ulong)!bVar8 * 2 == puVar5 + (ulong)bVar9 * -2 + 2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::sort::shared::smallsort::panic_on_ord_violation();
}


// ===== 006ca350  FUN_006ca350  [FAILED] =====
/* decompilation failed: Exception while decompiling 006ca350: process: timeout
 */

// ===== 006ca7f4  FUN_006ca7f4 =====

void FUN_006ca7f4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = 0;
  puVar1 = param_1 + 4;
  puVar7 = param_1;
  do {
    puVar5 = puVar1;
    uVar4 = puVar7[6];
    if (uVar4 < (ulong)puVar7[2]) {
      uVar10 = puVar5[1];
      uVar9 = *puVar5;
      uVar6 = puVar7[7];
      lVar2 = lVar3;
      do {
        lVar8 = lVar2;
        puVar1 = (undefined8 *)((long)param_1 + lVar8);
        puVar1[5] = puVar1[1];
        puVar1[4] = *puVar1;
        puVar1[7] = puVar1[3];
        puVar1[6] = puVar1[2];
        puVar7 = param_1;
        if (lVar8 == 0) goto LAB_006ca810;
        lVar2 = lVar8 + -0x20;
      } while (uVar4 < (ulong)puVar1[-2]);
      puVar7 = (undefined8 *)((long)param_1 + lVar8);
LAB_006ca810:
      puVar7[1] = uVar10;
      *puVar7 = uVar9;
      puVar1[2] = uVar4;
      puVar1[3] = uVar6;
    }
    lVar3 = lVar3 + 0x20;
    puVar1 = puVar5 + 4;
    puVar7 = puVar5;
    if (puVar5 + 4 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}


// ===== 006ca888  FUN_006ca888 =====

void FUN_006ca888(ulong *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar1 = 0;
  puVar2 = param_1;
  puVar5 = param_1 + 4;
  do {
    uVar3 = puVar2[6];
    uVar4 = puVar2[4];
    if ((uVar3 < puVar2[2]) || ((uVar3 <= puVar2[2] && (uVar4 < *puVar2)))) {
      uVar10 = *puVar2;
      uVar12 = puVar2[3];
      uVar11 = puVar2[2];
      uVar6 = puVar2[5];
      uVar7 = puVar2[7];
      puVar5[1] = puVar2[1];
      *puVar5 = uVar10;
      puVar5[3] = uVar12;
      puVar5[2] = uVar11;
      puVar8 = param_1;
      lVar9 = lVar1;
      if (puVar2 != param_1) {
        do {
          puVar2 = (ulong *)((long)param_1 + lVar9);
          if ((puVar2[-2] <= uVar3) && ((puVar2[-2] < uVar3 || (puVar2[-4] <= uVar4)))) {
            puVar8 = (ulong *)((long)param_1 + lVar9);
            break;
          }
          lVar9 = lVar9 + -0x20;
          puVar2[1] = puVar2[-3];
          *puVar2 = puVar2[-4];
          puVar2[3] = puVar2[-1];
          puVar2[2] = puVar2[-2];
        } while (lVar9 != 0);
      }
      *puVar8 = uVar4;
      puVar8[1] = uVar6;
      puVar8[2] = uVar3;
      puVar8[3] = uVar7;
    }
    puVar8 = puVar5 + 4;
    lVar1 = lVar1 + 0x20;
    puVar2 = puVar5;
    puVar5 = puVar8;
    if (puVar8 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}


// ===== 006ca948  FUN_006ca948 =====

void FUN_006ca948(long param_1,ulong param_2,undefined8 *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *__src;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 *__dest;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong local_308;
  ulong local_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x4000000000000000 / param_2;
  }
  if (uVar2 * param_2 != 0x4000000000000000) {
    uVar2 = uVar2 + 1;
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
  uVar13 = 0;
  uVar16 = 0;
  uVar14 = 1;
  uVar10 = param_2;
  if (param_2 == 0) goto LAB_006caa64;
LAB_006caa0c:
  lVar8 = param_1 + uVar13 * 0x20;
  if (uVar10 < local_308) {
LAB_006caa20:
    if ((param_5 & 1) == 0) {
      if (local_308 <= uVar10) {
        uVar10 = local_308;
      }
      uVar10 = uVar10 << 1;
    }
    else {
      if (0x1f < uVar10) {
        uVar10 = 0x20;
      }
      core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
      <addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                (lVar8,uVar10,param_3,param_4,0,0,param_6);
      uVar10 = uVar10 << 1 | 1;
    }
    goto LAB_006caaa0;
  }
  if (1 < uVar10) {
    uVar15 = *(ulong *)(lVar8 + 0x30);
    if (uVar15 < *(ulong *)(lVar8 + 0x10)) {
      if (uVar10 == 2) {
        if (2 < local_308) goto LAB_006caa20;
        uVar17 = 1;
        uVar10 = 2;
      }
      else {
        uVar6 = 2;
        puVar12 = (ulong *)(param_1 + 0x50 + uVar13 * 0x20);
        uVar5 = uVar15;
        do {
          uVar18 = *puVar12;
          uVar17 = uVar6;
          if (uVar5 <= uVar18) break;
          uVar6 = uVar6 + 1;
          uVar17 = uVar10;
          puVar12 = puVar12 + 4;
          uVar5 = uVar18;
        } while (uVar10 != uVar6);
LAB_006cad9c:
        if (uVar17 < local_308) goto LAB_006caa20;
        uVar10 = uVar17;
        if ((*(ulong *)(lVar8 + 0x10) <= uVar15) || (uVar17 = uVar17 >> 1, uVar17 == 0))
        goto LAB_006caa84;
      }
      puVar9 = (undefined8 *)(param_1 + 0x10 + uVar13 * 0x20);
      puVar11 = (undefined8 *)(param_1 + -0x10 + uVar13 * 0x20 + uVar10 * 0x20);
      do {
        uVar19 = puVar11[-2];
        uVar25 = puVar11[1];
        uVar24 = *puVar11;
        uVar17 = uVar17 - 1;
        uVar21 = puVar9[-1];
        uVar20 = puVar9[-2];
        uVar23 = puVar9[1];
        uVar22 = *puVar9;
        puVar9[-1] = puVar11[-1];
        puVar9[-2] = uVar19;
        puVar11[-1] = uVar21;
        puVar11[-2] = uVar20;
        puVar9[1] = uVar25;
        *puVar9 = uVar24;
        puVar11[1] = uVar23;
        *puVar11 = uVar22;
        puVar9 = puVar9 + 4;
        puVar11 = puVar11 + -4;
      } while (uVar17 != 0);
    }
    else {
      if (uVar10 != 2) {
        uVar6 = 2;
        puVar12 = (ulong *)(param_1 + 0x50 + uVar13 * 0x20);
        uVar5 = uVar15;
        do {
          uVar18 = *puVar12;
          uVar17 = uVar6;
          if (uVar18 < uVar5) break;
          uVar6 = uVar6 + 1;
          uVar17 = uVar10;
          puVar12 = puVar12 + 4;
          uVar5 = uVar18;
        } while (uVar10 != uVar6);
        goto LAB_006cad9c;
      }
      if (2 < local_308) goto LAB_006caa20;
      uVar10 = 2;
    }
  }
LAB_006caa84:
  uVar10 = uVar10 << 1 | 1;
LAB_006caaa0:
  lVar8 = LZCOUNT((uVar13 * 2 + (uVar10 >> 1)) * uVar2 ^ (uVar13 * 2 - (uVar14 >> 1)) * uVar2);
  uVar15 = uVar14;
  do {
    uVar14 = uVar10;
    if (1 < uVar16) {
      do {
        while( true ) {
          uVar10 = uVar16 - 1;
          if ((uint)abStack_ab[uVar16] < (uint)lVar8) goto LAB_006cacc0;
          uVar18 = uVar15 >> 1;
          uVar5 = local_2c0[uVar10];
          uVar17 = uVar5 >> 1;
          uVar6 = uVar17 + uVar18;
          uVar16 = uVar10;
          if (uVar6 <= param_4 && (((uint)uVar5 | (uint)uVar15) & 1) == 0) break;
          puVar9 = (undefined8 *)(param_1 + (uVar13 - uVar6) * 0x20);
          if ((uVar5 & 1) == 0) {
            core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
            <addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                      (puVar9,uVar17,param_3,param_4,(int)LZCOUNT(uVar17 | 1) << 1 ^ 0x7e,0,param_6)
            ;
          }
          if ((uVar15 & 1) == 0) {
            core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
            <addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                      (puVar9 + uVar17 * 4,uVar18,param_3,param_4,
                       (int)LZCOUNT(uVar18 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar18 != 0) && (uVar17 != 0)) {
            uVar15 = uVar18;
            if (uVar17 <= uVar18) {
              uVar15 = uVar17;
            }
            if (uVar15 <= param_4) {
              puVar11 = puVar9 + uVar17 * 4;
              puVar4 = puVar11;
              if (uVar17 <= uVar18) {
                puVar4 = puVar9;
              }
              memcpy(param_3,puVar4,uVar15 * 0x20);
              puVar4 = param_3 + uVar15 * 4;
              __src = param_3;
              puVar7 = (undefined8 *)(param_1 + -0x20 + uVar13 * 0x20);
              if (uVar18 < uVar17) {
                do {
                  bVar3 = (ulong)puVar11[-2] <= (ulong)puVar4[-2];
                  puVar1 = puVar11 + -4;
                  if (bVar3) {
                    puVar1 = puVar4 + -4;
                  }
                  __dest = puVar11 + -4 + (ulong)bVar3 * 4;
                  puVar4 = puVar4 + -4 + (ulong)!bVar3 * 4;
                  uVar19 = *puVar1;
                  uVar21 = puVar1[3];
                  uVar20 = puVar1[2];
                  puVar7[1] = puVar1[1];
                  *puVar7 = uVar19;
                  puVar7[3] = uVar21;
                  puVar7[2] = uVar20;
                  puVar7 = puVar7 + -4;
                  puVar11 = __dest;
                } while (__dest != puVar9 && puVar4 != param_3);
              }
              else {
                do {
                  bVar3 = (ulong)__src[2] <= (ulong)puVar11[2];
                  puVar7 = puVar11;
                  if (bVar3) {
                    puVar7 = __src;
                  }
                  __src = __src + (ulong)bVar3 * 4;
                  puVar11 = puVar11 + (ulong)!bVar3 * 4;
                  uVar19 = *puVar7;
                  uVar21 = puVar7[3];
                  uVar20 = puVar7[2];
                  __dest = puVar9 + 4;
                  puVar9[1] = puVar7[1];
                  *puVar9 = uVar19;
                  puVar9[3] = uVar21;
                  puVar9[2] = uVar20;
                  puVar9 = __dest;
                } while (__src != puVar4 && puVar11 != (undefined8 *)(param_1 + uVar13 * 0x20));
              }
              memcpy(__dest,__src,(long)puVar4 - (long)__src);
            }
          }
          uVar15 = uVar6 * 2 | 1;
          if (uVar10 < 2) goto LAB_006cacb4;
        }
        uVar15 = uVar6 * 2;
      } while (1 < uVar10);
LAB_006cacb4:
      uVar16 = 1;
    }
LAB_006cacc0:
    local_2c0[uVar16] = uVar15;
    abStack_ab[uVar16 + 1] = (byte)lVar8;
    if (param_2 <= uVar13) {
      if ((uVar15 & 1) != 0) {
        return;
      }
      core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
      <addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar13 = uVar13 + (uVar14 >> 1);
    uVar16 = uVar16 + 1;
    uVar10 = param_2 - uVar13;
    if (uVar13 <= param_2 && uVar10 != 0) goto LAB_006caa0c;
LAB_006caa64:
    lVar8 = 0;
    uVar10 = 1;
    uVar15 = uVar14;
  } while( true );
}


// ===== 006cae38  FUN_006cae38 =====

void FUN_006cae38(long param_1,ulong param_2,undefined8 *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *__src;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 *__dest;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong local_308;
  ulong local_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x4000000000000000 / param_2;
  }
  if (uVar2 * param_2 != 0x4000000000000000) {
    uVar2 = uVar2 + 1;
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
  uVar13 = 0;
  uVar16 = 0;
  uVar14 = 1;
  uVar10 = param_2;
  if (param_2 == 0) goto LAB_006caf54;
LAB_006caefc:
  lVar8 = param_1 + uVar13 * 0x20;
  if (uVar10 < local_308) {
LAB_006caf10:
    if ((param_5 & 1) == 0) {
      if (local_308 <= uVar10) {
        uVar10 = local_308;
      }
      uVar10 = uVar10 << 1;
    }
    else {
      if (0x1f < uVar10) {
        uVar10 = 0x20;
      }
      core::slice::sort::stable::quicksort::
      quicksort<addr2line::unit::UnitRange,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::ResUnits<gimli::read::endian_slice::EndianSlice<_backref_59_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                (lVar8,uVar10,param_3,param_4,0,0,param_6);
      uVar10 = uVar10 << 1 | 1;
    }
    goto LAB_006caf90;
  }
  if (1 < uVar10) {
    uVar15 = *(ulong *)(lVar8 + 0x28);
    if (uVar15 < *(ulong *)(lVar8 + 8)) {
      if (uVar10 == 2) {
        if (2 < local_308) goto LAB_006caf10;
        uVar17 = 1;
        uVar10 = 2;
      }
      else {
        uVar6 = 2;
        puVar12 = (ulong *)(param_1 + 0x48 + uVar13 * 0x20);
        uVar5 = uVar15;
        do {
          uVar18 = *puVar12;
          uVar17 = uVar6;
          if (uVar5 <= uVar18) break;
          uVar6 = uVar6 + 1;
          uVar17 = uVar10;
          puVar12 = puVar12 + 4;
          uVar5 = uVar18;
        } while (uVar10 != uVar6);
LAB_006cb28c:
        if (uVar17 < local_308) goto LAB_006caf10;
        uVar10 = uVar17;
        if ((*(ulong *)(lVar8 + 8) <= uVar15) || (uVar17 = uVar17 >> 1, uVar17 == 0))
        goto LAB_006caf74;
      }
      puVar9 = (undefined8 *)(param_1 + 0x10 + uVar13 * 0x20);
      puVar11 = (undefined8 *)(param_1 + -0x10 + uVar13 * 0x20 + uVar10 * 0x20);
      do {
        uVar19 = puVar11[-2];
        uVar25 = puVar11[1];
        uVar24 = *puVar11;
        uVar17 = uVar17 - 1;
        uVar21 = puVar9[-1];
        uVar20 = puVar9[-2];
        uVar23 = puVar9[1];
        uVar22 = *puVar9;
        puVar9[-1] = puVar11[-1];
        puVar9[-2] = uVar19;
        puVar11[-1] = uVar21;
        puVar11[-2] = uVar20;
        puVar9[1] = uVar25;
        *puVar9 = uVar24;
        puVar11[1] = uVar23;
        *puVar11 = uVar22;
        puVar9 = puVar9 + 4;
        puVar11 = puVar11 + -4;
      } while (uVar17 != 0);
    }
    else {
      if (uVar10 != 2) {
        uVar6 = 2;
        puVar12 = (ulong *)(param_1 + 0x48 + uVar13 * 0x20);
        uVar5 = uVar15;
        do {
          uVar18 = *puVar12;
          uVar17 = uVar6;
          if (uVar18 < uVar5) break;
          uVar6 = uVar6 + 1;
          uVar17 = uVar10;
          puVar12 = puVar12 + 4;
          uVar5 = uVar18;
        } while (uVar10 != uVar6);
        goto LAB_006cb28c;
      }
      if (2 < local_308) goto LAB_006caf10;
      uVar10 = 2;
    }
  }
LAB_006caf74:
  uVar10 = uVar10 << 1 | 1;
LAB_006caf90:
  lVar8 = LZCOUNT((uVar13 * 2 + (uVar10 >> 1)) * uVar2 ^ (uVar13 * 2 - (uVar14 >> 1)) * uVar2);
  uVar15 = uVar14;
  do {
    uVar14 = uVar10;
    if (1 < uVar16) {
      do {
        while( true ) {
          uVar10 = uVar16 - 1;
          if ((uint)abStack_ab[uVar16] < (uint)lVar8) goto LAB_006cb1b0;
          uVar18 = uVar15 >> 1;
          uVar5 = local_2c0[uVar10];
          uVar17 = uVar5 >> 1;
          uVar6 = uVar17 + uVar18;
          uVar16 = uVar10;
          if (uVar6 <= param_4 && (((uint)uVar5 | (uint)uVar15) & 1) == 0) break;
          puVar9 = (undefined8 *)(param_1 + (uVar13 - uVar6) * 0x20);
          if ((uVar5 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<addr2line::unit::UnitRange,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::ResUnits<gimli::read::endian_slice::EndianSlice<_backref_59_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                      (puVar9,uVar17,param_3,param_4,(int)LZCOUNT(uVar17 | 1) << 1 ^ 0x7e,0,param_6)
            ;
          }
          if ((uVar15 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<addr2line::unit::UnitRange,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::ResUnits<gimli::read::endian_slice::EndianSlice<_backref_59_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                      (puVar9 + uVar17 * 4,uVar18,param_3,param_4,
                       (int)LZCOUNT(uVar18 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar18 != 0) && (uVar17 != 0)) {
            uVar15 = uVar18;
            if (uVar17 <= uVar18) {
              uVar15 = uVar17;
            }
            if (uVar15 <= param_4) {
              puVar11 = puVar9 + uVar17 * 4;
              puVar4 = puVar11;
              if (uVar17 <= uVar18) {
                puVar4 = puVar9;
              }
              memcpy(param_3,puVar4,uVar15 * 0x20);
              puVar4 = param_3 + uVar15 * 4;
              __src = param_3;
              puVar7 = (undefined8 *)(param_1 + -0x20 + uVar13 * 0x20);
              if (uVar18 < uVar17) {
                do {
                  bVar3 = (ulong)puVar11[-3] <= (ulong)puVar4[-3];
                  puVar1 = puVar11 + -4;
                  if (bVar3) {
                    puVar1 = puVar4 + -4;
                  }
                  __dest = puVar11 + -4 + (ulong)bVar3 * 4;
                  puVar4 = puVar4 + -4 + (ulong)!bVar3 * 4;
                  uVar19 = *puVar1;
                  uVar21 = puVar1[3];
                  uVar20 = puVar1[2];
                  puVar7[1] = puVar1[1];
                  *puVar7 = uVar19;
                  puVar7[3] = uVar21;
                  puVar7[2] = uVar20;
                  puVar7 = puVar7 + -4;
                  puVar11 = __dest;
                } while (__dest != puVar9 && puVar4 != param_3);
              }
              else {
                do {
                  bVar3 = (ulong)__src[1] <= (ulong)puVar11[1];
                  puVar7 = puVar11;
                  if (bVar3) {
                    puVar7 = __src;
                  }
                  __src = __src + (ulong)bVar3 * 4;
                  puVar11 = puVar11 + (ulong)!bVar3 * 4;
                  uVar19 = *puVar7;
                  uVar21 = puVar7[3];
                  uVar20 = puVar7[2];
                  __dest = puVar9 + 4;
                  puVar9[1] = puVar7[1];
                  *puVar9 = uVar19;
                  puVar9[3] = uVar21;
                  puVar9[2] = uVar20;
                  puVar9 = __dest;
                } while (__src != puVar4 && puVar11 != (undefined8 *)(param_1 + uVar13 * 0x20));
              }
              memcpy(__dest,__src,(long)puVar4 - (long)__src);
            }
          }
          uVar15 = uVar6 * 2 | 1;
          if (uVar10 < 2) goto LAB_006cb1a4;
        }
        uVar15 = uVar6 * 2;
      } while (1 < uVar10);
LAB_006cb1a4:
      uVar16 = 1;
    }
LAB_006cb1b0:
    local_2c0[uVar16] = uVar15;
    abStack_ab[uVar16 + 1] = (byte)lVar8;
    if (param_2 <= uVar13) {
      if ((uVar15 & 1) != 0) {
        return;
      }
      core::slice::sort::stable::quicksort::
      quicksort<addr2line::unit::UnitRange,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::ResUnits<gimli::read::endian_slice::EndianSlice<_backref_59_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar13 = uVar13 + (uVar14 >> 1);
    uVar16 = uVar16 + 1;
    uVar10 = param_2 - uVar13;
    if (uVar13 <= param_2 && uVar10 != 0) goto LAB_006caefc;
LAB_006caf54:
    lVar8 = 0;
    uVar10 = 1;
    uVar15 = uVar14;
  } while( true );
}


// ===== 006cb328  FUN_006cb328 =====

void FUN_006cb328(long param_1,ulong param_2,ulong *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *__src;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *__dest;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong local_310;
  ulong local_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x4000000000000000 / param_2;
  }
  if (uVar2 * param_2 != 0x4000000000000000) {
    uVar2 = uVar2 + 1;
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
  uVar16 = 0;
  uVar15 = 0;
  uVar17 = 1;
  uVar11 = param_2;
  if (param_2 == 0) goto LAB_006cb44c;
LAB_006cb3f0:
  puVar4 = (ulong *)(param_1 + uVar16 * 0x18);
  if (uVar11 < local_310) {
LAB_006cb400:
    if ((param_5 & 1) == 0) {
      if (local_310 <= uVar11) {
        uVar11 = local_310;
      }
      uVar11 = uVar11 << 1;
    }
    else {
      if (0x1f < uVar11) {
        uVar11 = 0x20;
      }
      core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
      <addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                (puVar4,uVar11,param_3,param_4,0,0,param_6);
      uVar11 = uVar11 << 1 | 1;
    }
    goto LAB_006cb488;
  }
  if (1 < uVar11) {
    uVar18 = puVar4[3];
    if (uVar18 < *puVar4) {
      if (uVar11 == 2) {
        if (2 < local_310) goto LAB_006cb400;
        uVar20 = 1;
        uVar11 = 2;
      }
      else {
        uVar7 = 2;
        puVar5 = (ulong *)(param_1 + 0x30 + uVar16 * 0x18);
        uVar6 = uVar18;
        do {
          uVar21 = *puVar5;
          uVar20 = uVar7;
          if (uVar6 <= uVar21) break;
          uVar7 = uVar7 + 1;
          uVar20 = uVar11;
          puVar5 = puVar5 + 3;
          uVar6 = uVar21;
        } while (uVar11 != uVar7);
LAB_006cb7a8:
        if (uVar20 < local_310) goto LAB_006cb400;
        uVar11 = uVar20;
        if ((*puVar4 <= uVar18) || (uVar20 = uVar20 >> 1, uVar20 == 0)) goto LAB_006cb46c;
      }
      puVar10 = (undefined8 *)(param_1 + 0x10 + uVar16 * 0x18);
      puVar12 = (undefined8 *)(param_1 + -8 + uVar16 * 0x18 + uVar11 * 0x18);
      do {
        uVar22 = puVar12[-2];
        uVar24 = puVar10[-1];
        uVar23 = puVar10[-2];
        uVar20 = uVar20 - 1;
        uVar13 = *puVar12;
        uVar14 = *puVar10;
        puVar10[-1] = puVar12[-1];
        puVar10[-2] = uVar22;
        puVar12[-1] = uVar24;
        puVar12[-2] = uVar23;
        *puVar10 = uVar13;
        *puVar12 = uVar14;
        puVar10 = puVar10 + 3;
        puVar12 = puVar12 + -3;
      } while (uVar20 != 0);
    }
    else {
      if (uVar11 != 2) {
        uVar7 = 2;
        puVar5 = (ulong *)(param_1 + 0x30 + uVar16 * 0x18);
        uVar6 = uVar18;
        do {
          uVar21 = *puVar5;
          uVar20 = uVar7;
          if (uVar21 < uVar6) break;
          uVar7 = uVar7 + 1;
          uVar20 = uVar11;
          puVar5 = puVar5 + 3;
          uVar6 = uVar21;
        } while (uVar11 != uVar7);
        goto LAB_006cb7a8;
      }
      if (2 < local_310) goto LAB_006cb400;
      uVar11 = 2;
    }
  }
LAB_006cb46c:
  uVar11 = uVar11 << 1 | 1;
LAB_006cb488:
  lVar9 = LZCOUNT((uVar16 * 2 + (uVar11 >> 1)) * uVar2 ^ (uVar16 * 2 - (uVar17 >> 1)) * uVar2);
  uVar18 = uVar17;
  do {
    uVar17 = uVar11;
    if (1 < uVar15) {
      do {
        while( true ) {
          uVar11 = uVar15 - 1;
          if ((uint)abStack_ab[uVar15] < (uint)lVar9) goto LAB_006cb6d0;
          uVar21 = uVar18 >> 1;
          uVar6 = local_2c0[uVar11];
          uVar20 = uVar6 >> 1;
          uVar7 = uVar20 + uVar21;
          uVar15 = uVar11;
          if (uVar7 <= param_4 && (((uint)uVar6 | (uint)uVar18) & 1) == 0) break;
          puVar4 = (ulong *)(param_1 + (uVar16 - uVar7) * 0x18);
          if ((uVar6 & 1) == 0) {
            core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
            <addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                      (puVar4,uVar20,param_3,param_4,(int)LZCOUNT(uVar20 | 1) << 1 ^ 0x7e,0,param_6)
            ;
          }
          if ((uVar18 & 1) == 0) {
            core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
            <addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                      (puVar4 + uVar20 * 3,uVar21,param_3,param_4,
                       (int)LZCOUNT(uVar21 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar21 != 0) && (uVar20 != 0)) {
            uVar18 = uVar21;
            if (uVar20 <= uVar21) {
              uVar18 = uVar20;
            }
            if (uVar18 <= param_4) {
              puVar19 = puVar4 + uVar20 * 3;
              puVar5 = puVar19;
              if (uVar20 <= uVar21) {
                puVar5 = puVar4;
              }
              memcpy(param_3,puVar5,uVar18 * 0x18);
              puVar5 = param_3 + uVar18 * 3;
              __src = param_3;
              puVar8 = (ulong *)(param_1 + -0x18 + uVar16 * 0x18);
              if (uVar21 < uVar20) {
                do {
                  puVar5 = puVar5 + -3;
                  puVar19 = puVar19 + -3;
                  bVar3 = *puVar19 <= *puVar5;
                  puVar1 = puVar19;
                  if (bVar3) {
                    puVar1 = puVar5;
                  }
                  __dest = puVar19 + (ulong)bVar3 * 3;
                  uVar6 = *puVar1;
                  uVar18 = puVar1[2];
                  puVar5 = puVar5 + (ulong)!bVar3 * 3;
                  puVar8[1] = puVar1[1];
                  *puVar8 = uVar6;
                  puVar8[2] = uVar18;
                  puVar8 = puVar8 + -3;
                  puVar19 = __dest;
                } while (__dest != puVar4 && puVar5 != param_3);
              }
              else {
                do {
                  bVar3 = *__src <= *puVar19;
                  puVar8 = puVar19;
                  if (bVar3) {
                    puVar8 = __src;
                  }
                  __src = __src + (ulong)bVar3 * 3;
                  uVar6 = *puVar8;
                  uVar18 = puVar8[2];
                  puVar19 = puVar19 + (ulong)!bVar3 * 3;
                  puVar4[1] = puVar8[1];
                  *puVar4 = uVar6;
                  puVar4[2] = uVar18;
                  __dest = puVar4 + 3;
                  puVar4 = __dest;
                } while (__src != puVar5 && puVar19 != (ulong *)(param_1 + uVar16 * 0x18));
              }
              memcpy(__dest,__src,(long)puVar5 - (long)__src);
            }
          }
          uVar18 = uVar7 * 2 | 1;
          if (uVar11 < 2) goto LAB_006cb6c4;
        }
        uVar18 = uVar7 * 2;
      } while (1 < uVar11);
LAB_006cb6c4:
      uVar15 = 1;
    }
LAB_006cb6d0:
    abStack_ab[uVar15 + 1] = (byte)lVar9;
    local_2c0[uVar15] = uVar18;
    if (param_2 <= uVar16) {
      if ((uVar18 & 1) != 0) {
        return;
      }
      core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
      <addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar16 = uVar16 + (uVar17 >> 1);
    uVar15 = uVar15 + 1;
    uVar11 = param_2 - uVar16;
    if (uVar16 <= param_2 && uVar11 != 0) goto LAB_006cb3f0;
LAB_006cb44c:
    lVar9 = 0;
    uVar11 = 1;
    uVar18 = uVar17;
  } while( true );
}


// ===== 006cb854  FUN_006cb854 =====

void FUN_006cb854(long param_1,ulong param_2,ulong *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong *__src;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *__dest;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong local_300;
  ulong local_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x4000000000000000 / param_2;
  }
  if (uVar2 * param_2 != 0x4000000000000000) {
    uVar2 = uVar2 + 1;
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
  uVar14 = 0;
  uVar18 = 0;
  uVar16 = 1;
  uVar9 = param_2;
  if (param_2 != 0) goto LAB_006cb930;
LAB_006cb91c:
  lVar12 = 0;
  uVar9 = 1;
  uVar17 = uVar16;
  do {
    uVar16 = uVar9;
    if (1 < uVar18) {
      do {
        while( true ) {
          uVar9 = uVar18 - 1;
          if ((uint)abStack_ab[uVar18] < (uint)lVar12) goto LAB_006cbd44;
          uVar20 = uVar17 >> 1;
          uVar4 = local_2c0[uVar9];
          uVar19 = uVar4 >> 1;
          uVar5 = uVar19 + uVar20;
          uVar18 = uVar9;
          if (uVar5 <= param_4 && (((uint)uVar4 | (uint)uVar17) & 1) == 0) break;
          puVar15 = (ulong *)(param_1 + (uVar14 - uVar5) * 0x20);
          if ((uVar4 & 1) == 0) {
            core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
            <addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                      (puVar15,uVar19,param_3,param_4,(int)LZCOUNT(uVar19 | 1) << 1 ^ 0x7e,0,param_6
                      );
          }
          if ((uVar17 & 1) == 0) {
            core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
            <addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                      (puVar15 + uVar19 * 4,uVar20,param_3,param_4,
                       (int)LZCOUNT(uVar20 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar20 != 0) && (uVar19 != 0)) {
            uVar17 = uVar20;
            if (uVar19 <= uVar20) {
              uVar17 = uVar19;
            }
            if (uVar17 <= param_4) {
              puVar10 = puVar15 + uVar19 * 4;
              puVar3 = puVar10;
              if (uVar19 <= uVar20) {
                puVar3 = puVar15;
              }
              memcpy(param_3,puVar3,uVar17 * 0x20);
              puVar3 = param_3 + uVar17 * 4;
              __src = param_3;
              puVar6 = (ulong *)(param_1 + -0x20 + uVar14 * 0x20);
              if (uVar20 < uVar19) {
                do {
                  uVar17 = puVar3[-2];
                  uVar4 = puVar10[-2];
                  puVar10 = puVar10 + -4;
                  puVar3 = puVar3 + -4;
                  puVar13 = puVar10;
                  if (uVar17 < uVar4) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = uVar17 <= uVar4 && *puVar3 < *puVar10;
                    if (uVar17 > uVar4 || *puVar3 >= *puVar10) {
                      puVar13 = puVar3;
                    }
                  }
                  uVar19 = *puVar13;
                  uVar4 = puVar13[3];
                  uVar17 = puVar13[2];
                  __dest = puVar10 + (ulong)(byte)~bVar8 * 4;
                  puVar3 = puVar3 + (ulong)bVar8 * 4;
                  puVar6[1] = puVar13[1];
                  *puVar6 = uVar19;
                  puVar6[3] = uVar4;
                  puVar6[2] = uVar17;
                } while ((__dest != puVar15) &&
                        (puVar6 = puVar6 + -4, puVar10 = __dest, puVar3 != param_3));
              }
              else {
                do {
                  if (puVar10[2] < __src[2]) {
                    uVar17 = 1;
                    uVar20 = *puVar10;
                    uVar19 = puVar10[3];
                    uVar4 = puVar10[2];
                    puVar15[1] = puVar10[1];
                    *puVar15 = uVar20;
                    puVar15[3] = uVar19;
                    puVar15[2] = uVar4;
                  }
                  else {
                    uVar1 = (uint)(puVar10[2] <= __src[2] && *puVar10 < *__src);
                    uVar17 = (ulong)uVar1;
                    puVar6 = puVar10;
                    if (uVar1 == 0) {
                      puVar6 = __src;
                    }
                    __src = __src + (ulong)(uVar1 ^ 1) * 4;
                    uVar20 = *puVar6;
                    uVar19 = puVar6[3];
                    uVar4 = puVar6[2];
                    puVar15[1] = puVar6[1];
                    *puVar15 = uVar20;
                    puVar15[3] = uVar19;
                    puVar15[2] = uVar4;
                  }
                  __dest = puVar15 + 4;
                  if (__src == puVar3) break;
                  __dest = puVar15 + 4;
                  puVar10 = puVar10 + uVar17 * 4;
                  puVar15 = __dest;
                } while (puVar10 != (ulong *)(param_1 + uVar14 * 0x20));
              }
              memcpy(__dest,__src,(long)puVar3 - (long)__src);
            }
          }
          uVar17 = uVar5 * 2 | 1;
          if (uVar9 < 2) goto LAB_006cbd38;
        }
        uVar17 = uVar5 * 2;
      } while (1 < uVar9);
LAB_006cbd38:
      uVar18 = 1;
    }
LAB_006cbd44:
    local_2c0[uVar18] = uVar17;
    abStack_ab[uVar18 + 1] = (byte)lVar12;
    if (param_2 <= uVar14) {
      if ((uVar17 & 1) != 0) {
        return;
      }
      core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
      <addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar14 = uVar14 + (uVar16 >> 1);
    uVar18 = uVar18 + 1;
    uVar9 = param_2 - uVar14;
    if (param_2 < uVar14 || uVar9 == 0) goto LAB_006cb91c;
LAB_006cb930:
    puVar15 = (ulong *)(param_1 + uVar14 * 0x20);
    if (uVar9 < local_300) {
LAB_006cb944:
      if ((param_5 & 1) == 0) {
        if (local_300 <= uVar9) {
          uVar9 = local_300;
        }
        uVar9 = uVar9 << 1;
      }
      else {
        if (0x1f < uVar9) {
          uVar9 = 0x20;
        }
        core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
        <addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                  (puVar15,uVar9,param_3,param_4,0,0,param_6);
        uVar9 = uVar9 << 1 | 1;
      }
    }
    else {
      if (1 < uVar9) {
        uVar17 = puVar15[6];
        if ((uVar17 < puVar15[2]) || ((uVar17 <= puVar15[2] && (puVar15[4] < *puVar15)))) {
          if (uVar9 == 2) {
            bVar8 = true;
            uVar5 = 2;
            if (local_300 < 3) goto LAB_006cba70;
            goto LAB_006cb944;
          }
          puVar10 = (ulong *)(param_1 + 0x40 + uVar14 * 0x20);
          uVar5 = 2;
          do {
            uVar4 = puVar10[2];
            if ((uVar17 <= uVar4) && ((bVar8 = true, uVar17 < uVar4 || (puVar10[-4] <= *puVar10))))
            goto joined_r0x006cbdcc;
            uVar5 = uVar5 + 1;
            puVar10 = puVar10 + 4;
            uVar17 = uVar4;
          } while (uVar9 != uVar5);
          bVar8 = true;
          uVar5 = uVar9;
joined_r0x006cbdcc:
          if (uVar5 < local_300) goto LAB_006cb944;
        }
        else {
          if (uVar9 != 2) {
            uVar5 = 2;
            uVar4 = puVar15[4];
            puVar10 = (ulong *)(param_1 + 0x50 + uVar14 * 0x20);
            do {
              uVar19 = *puVar10;
              if ((uVar19 < uVar17) || ((uVar19 <= uVar17 && (puVar10[-2] < uVar4)))) {
                bVar8 = false;
                goto joined_r0x006cbdcc;
              }
              uVar5 = uVar5 + 1;
              uVar17 = uVar19;
              uVar4 = puVar10[-2];
              puVar10 = puVar10 + 4;
            } while (uVar9 != uVar5);
            bVar8 = false;
            uVar5 = uVar9;
            goto joined_r0x006cbdcc;
          }
          bVar8 = false;
          uVar5 = 2;
          if (2 < local_300) goto LAB_006cb944;
        }
LAB_006cba70:
        uVar9 = uVar5;
        if ((bVar8) && (uVar17 = uVar9 >> 1, uVar17 != 0)) {
          puVar7 = (undefined8 *)(param_1 + 0x10 + uVar14 * 0x20);
          puVar11 = (undefined8 *)(param_1 + -0x10 + uVar14 * 0x20 + uVar9 * 0x20);
          do {
            uVar21 = puVar11[-2];
            uVar27 = puVar11[1];
            uVar26 = *puVar11;
            uVar17 = uVar17 - 1;
            uVar23 = puVar7[-1];
            uVar22 = puVar7[-2];
            uVar25 = puVar7[1];
            uVar24 = *puVar7;
            puVar7[-1] = puVar11[-1];
            puVar7[-2] = uVar21;
            puVar11[-1] = uVar23;
            puVar11[-2] = uVar22;
            puVar7[1] = uVar27;
            *puVar7 = uVar26;
            puVar11[1] = uVar25;
            *puVar11 = uVar24;
            puVar7 = puVar7 + 4;
            puVar11 = puVar11 + -4;
          } while (uVar17 != 0);
        }
      }
      uVar9 = uVar9 << 1 | 1;
    }
    lVar12 = LZCOUNT((uVar14 * 2 + (uVar9 >> 1)) * uVar2 ^ (uVar14 * 2 - (uVar16 >> 1)) * uVar2);
    uVar17 = uVar16;
  } while( true );
}


// ===== 006cbe28  FUN_006cbe28 =====

void FUN_006cbe28(long param_1,ulong param_2,ulong *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  ulong *__src;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *__dest;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_308;
  ulong local_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x4000000000000000 / param_2;
  }
  if (uVar2 * param_2 != 0x4000000000000000) {
    uVar2 = uVar2 + 1;
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
  uVar12 = 0;
  uVar15 = 0;
  uVar13 = 1;
  uVar10 = param_2;
  if (param_2 == 0) goto LAB_006cbf34;
LAB_006cbedc:
  puVar11 = (ulong *)(param_1 + uVar12 * 0x10);
  if (uVar10 < local_308) {
LAB_006cbef0:
    if ((param_5 & 1) == 0) {
      if (local_308 <= uVar10) {
        uVar10 = local_308;
      }
      uVar10 = uVar10 << 1;
    }
    else {
      if (0x1f < uVar10) {
        uVar10 = 0x20;
      }
      core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
      <(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                (puVar11,uVar10,param_3,param_4,0,0,param_6);
      uVar10 = uVar10 << 1 | 1;
    }
    goto LAB_006cbf70;
  }
  if (1 < uVar10) {
    uVar14 = puVar11[2];
    if (uVar14 < *puVar11) {
      if (uVar10 == 2) {
        if (2 < local_308) goto LAB_006cbef0;
        uVar16 = 1;
        uVar10 = 2;
      }
      else {
        uVar6 = 2;
        puVar9 = (ulong *)(param_1 + 0x20 + uVar12 * 0x10);
        uVar5 = uVar14;
        do {
          uVar17 = *puVar9;
          uVar16 = uVar6;
          if (uVar5 <= uVar17) break;
          uVar6 = uVar6 + 1;
          uVar16 = uVar10;
          puVar9 = puVar9 + 2;
          uVar5 = uVar17;
        } while (uVar10 != uVar6);
LAB_006cc264:
        if (uVar16 < local_308) goto LAB_006cbef0;
        uVar10 = uVar16;
        if ((*puVar11 <= uVar14) || (uVar16 = uVar16 >> 1, uVar16 == 0)) goto LAB_006cbf54;
      }
      puVar9 = (ulong *)(param_1 + -0x10 + uVar10 * 0x10 + uVar12 * 0x10);
      do {
        uVar14 = *puVar9;
        uVar5 = puVar11[1];
        uVar6 = *puVar11;
        uVar16 = uVar16 - 1;
        puVar11[1] = puVar9[1];
        *puVar11 = uVar14;
        puVar9[1] = uVar5;
        *puVar9 = uVar6;
        puVar9 = puVar9 + -2;
        puVar11 = puVar11 + 2;
      } while (uVar16 != 0);
    }
    else {
      if (uVar10 != 2) {
        uVar6 = 2;
        puVar9 = (ulong *)(param_1 + 0x20 + uVar12 * 0x10);
        uVar5 = uVar14;
        do {
          uVar17 = *puVar9;
          uVar16 = uVar6;
          if (uVar17 < uVar5) break;
          uVar6 = uVar6 + 1;
          uVar16 = uVar10;
          puVar9 = puVar9 + 2;
          uVar5 = uVar17;
        } while (uVar10 != uVar6);
        goto LAB_006cc264;
      }
      if (2 < local_308) goto LAB_006cbef0;
      uVar10 = 2;
    }
  }
LAB_006cbf54:
  uVar10 = uVar10 << 1 | 1;
LAB_006cbf70:
  lVar8 = LZCOUNT((uVar12 * 2 + (uVar10 >> 1)) * uVar2 ^ (uVar12 * 2 - (uVar13 >> 1)) * uVar2);
  uVar14 = uVar13;
  do {
    uVar13 = uVar10;
    if (1 < uVar15) {
      do {
        while( true ) {
          uVar10 = uVar15 - 1;
          if ((uint)abStack_ab[uVar15] < (uint)lVar8) goto LAB_006cc188;
          uVar17 = uVar14 >> 1;
          uVar5 = local_2c0[uVar10];
          uVar16 = uVar5 >> 1;
          uVar6 = uVar16 + uVar17;
          uVar15 = uVar10;
          if (uVar6 <= param_4 && (((uint)uVar5 | (uint)uVar14) & 1) == 0) break;
          puVar11 = (ulong *)(param_1 + (uVar12 - uVar6) * 0x10);
          if ((uVar5 & 1) == 0) {
            core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
            <(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                      (puVar11,uVar16,param_3,param_4,(int)LZCOUNT(uVar16 | 1) << 1 ^ 0x7e,0,param_6
                      );
          }
          if ((uVar14 & 1) == 0) {
            core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
            <(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                      (puVar11 + uVar16 * 2,uVar17,param_3,param_4,
                       (int)LZCOUNT(uVar17 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar17 != 0) && (uVar16 != 0)) {
            uVar14 = uVar17;
            if (uVar16 <= uVar17) {
              uVar14 = uVar16;
            }
            if (uVar14 <= param_4) {
              puVar9 = puVar11 + uVar16 * 2;
              puVar4 = puVar9;
              if (uVar16 <= uVar17) {
                puVar4 = puVar11;
              }
              memcpy(param_3,puVar4,uVar14 * 0x10);
              puVar4 = param_3 + uVar14 * 2;
              __src = param_3;
              puVar7 = (ulong *)(param_1 + -0x10 + uVar12 * 0x10);
              if (uVar17 < uVar16) {
                do {
                  puVar4 = puVar4 + -2;
                  puVar9 = puVar9 + -2;
                  bVar3 = *puVar9 <= *puVar4;
                  puVar1 = puVar9;
                  if (bVar3) {
                    puVar1 = puVar4;
                  }
                  __dest = puVar9 + (ulong)bVar3 * 2;
                  puVar4 = puVar4 + (ulong)!bVar3 * 2;
                  uVar14 = *puVar1;
                  puVar7[1] = puVar1[1];
                  *puVar7 = uVar14;
                  puVar7 = puVar7 + -2;
                  puVar9 = __dest;
                } while (__dest != puVar11 && puVar4 != param_3);
              }
              else {
                do {
                  bVar3 = *__src <= *puVar9;
                  puVar7 = puVar9;
                  if (bVar3) {
                    puVar7 = __src;
                  }
                  __src = __src + (ulong)bVar3 * 2;
                  puVar9 = puVar9 + (ulong)!bVar3 * 2;
                  uVar14 = *puVar7;
                  __dest = puVar11 + 2;
                  puVar11[1] = puVar7[1];
                  *puVar11 = uVar14;
                  puVar11 = __dest;
                } while (__src != puVar4 && puVar9 != (ulong *)(param_1 + uVar12 * 0x10));
              }
              memcpy(__dest,__src,(long)puVar4 - (long)__src);
            }
          }
          uVar14 = uVar6 * 2 | 1;
          if (uVar10 < 2) goto LAB_006cc17c;
        }
        uVar14 = uVar6 * 2;
      } while (1 < uVar10);
LAB_006cc17c:
      uVar15 = 1;
    }
LAB_006cc188:
    local_2c0[uVar15] = uVar14;
    abStack_ab[uVar15 + 1] = (byte)lVar8;
    if (param_2 <= uVar12) {
      if ((uVar14 & 1) != 0) {
        return;
      }
      core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
      <(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar12 = uVar12 + (uVar13 >> 1);
    uVar15 = uVar15 + 1;
    uVar10 = param_2 - uVar12;
    if (uVar12 <= param_2 && uVar10 != 0) goto LAB_006cbedc;
LAB_006cbf34:
    lVar8 = 0;
    uVar10 = 1;
    uVar14 = uVar13;
  } while( true );
}


// ===== 006cc2fc  core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::<addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::{closure#1}>::{closure#0}> =====

/* core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::<addr2line[5beaa54f6b4a1439]::line::LineSequence,
   <[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,
   <addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>
    */

void core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
     <addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
               (undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,int param_5,
               long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (0x20 < param_2) {
    do {
      if (param_5 == 0) {
        FUN_006ca948(param_1,param_2,param_3,param_4,1,param_7);
        return;
      }
      if (param_2 < 0x40) {
        uVar13 = param_1[2];
        uVar5 = (param_1 + (param_2 >> 3) * 0x10)[2];
        uVar10 = (param_1 + (param_2 >> 3) * 0x1c)[2];
        puVar15 = param_1 + (param_2 >> 3) * 0x1c;
        if (uVar13 < uVar5 == uVar5 < uVar10) {
          puVar15 = param_1 + (param_2 >> 3) * 0x10;
        }
        puVar6 = param_1;
        if (uVar13 < uVar5 == uVar13 < uVar10) {
          puVar6 = puVar15;
        }
      }
      else {
        puVar6 = (undefined8 *)FUN_006c99e8(param_1);
      }
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      uStack_68 = puVar6[3];
      uStack_70 = puVar6[2];
      puVar15 = param_3 + param_2 * 4;
      uVar13 = (ulong)((long)puVar6 - (long)param_1) >> 5;
      param_5 = param_5 + -1;
      if ((param_6 == 0) || (*(ulong *)(param_6 + 0x10) < (ulong)puVar6[2])) {
        if (param_2 <= param_4) {
          uVar5 = 0;
          puVar7 = param_1 + uVar13 * 4;
          puVar12 = param_1;
          puVar14 = param_1;
          puVar11 = puVar15;
          uVar10 = uVar13;
          if (puVar7 <= param_1) goto LAB_006cc5c4;
LAB_006cc598:
          do {
            puVar11 = puVar11 + -4;
            puVar14 = puVar12 + 4;
            uVar20 = *puVar12;
            uVar19 = puVar12[3];
            uVar9 = puVar12[2];
            puVar1 = param_3;
            if ((ulong)puVar6[2] <= (ulong)puVar12[2]) {
              puVar1 = puVar11;
            }
            puVar1 = puVar1 + uVar5 * 4;
            if ((ulong)puVar6[2] > (ulong)puVar12[2]) {
              uVar5 = uVar5 + 1;
            }
            puVar1[1] = puVar12[1];
            *puVar1 = uVar20;
            puVar1[3] = uVar19;
            puVar1[2] = uVar9;
            puVar12 = puVar14;
          } while (puVar14 < puVar7);
LAB_006cc5c4:
          if (uVar10 != param_2) goto code_r0x006cc5cc;
          memcpy(param_1,param_3,uVar5 << 5);
          lVar16 = param_2 - uVar5;
          if (lVar16 != 0) {
            puVar7 = param_3 + param_2 * 4 + -4;
            lVar8 = lVar16;
            puVar12 = param_1 + uVar5 * 4;
            do {
              uVar9 = *puVar7;
              uVar20 = puVar7[3];
              uVar19 = puVar7[2];
              lVar8 = lVar8 + -1;
              puVar12[1] = puVar7[1];
              *puVar12 = uVar9;
              puVar12[3] = uVar20;
              puVar12[2] = uVar19;
              puVar7 = puVar7 + -4;
              puVar12 = puVar12 + 4;
            } while (lVar8 != 0);
          }
          if (uVar5 == 0) goto LAB_006cc660;
          if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770c0);
          }
          <addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                    (param_1 + uVar5 * 4,lVar16,param_3,param_4,param_5,&local_80,param_7);
          param_2 = uVar5;
          goto joined_r0x006cc724;
        }
        goto LAB_006cc98c;
      }
LAB_006cc660:
      if (param_4 < param_2) goto LAB_006cc98c;
      uVar5 = 0;
      puVar7 = param_1 + uVar13 * 4;
      puVar12 = param_1;
      puVar14 = param_1;
      if (puVar7 <= param_1) goto LAB_006cc6a8;
LAB_006cc67c:
      do {
        puVar15 = puVar15 + -4;
        puVar14 = puVar12 + 4;
        uVar20 = *puVar12;
        uVar19 = puVar12[3];
        uVar9 = puVar12[2];
        puVar11 = param_3;
        if ((ulong)puVar6[2] < (ulong)puVar12[2]) {
          puVar11 = puVar15;
        }
        puVar11 = puVar11 + uVar5 * 4;
        if ((ulong)puVar6[2] >= (ulong)puVar12[2]) {
          uVar5 = uVar5 + 1;
        }
        puVar11[1] = puVar12[1];
        *puVar11 = uVar20;
        puVar11[3] = uVar19;
        puVar11[2] = uVar9;
        puVar12 = puVar14;
      } while (puVar14 < puVar7);
LAB_006cc6a8:
      if (uVar13 != param_2) goto code_r0x006cc6b0;
      memcpy(param_1,param_3,uVar5 << 5);
      uVar13 = param_2 - uVar5;
      if (uVar13 == 0) {
        return;
      }
      param_1 = param_1 + uVar5 * 4;
      puVar6 = param_3 + param_2 * 4 + -4;
      uVar10 = uVar13;
      puVar15 = param_1;
      do {
        uVar9 = *puVar6;
        uVar20 = puVar6[3];
        uVar19 = puVar6[2];
        uVar10 = uVar10 - 1;
        puVar15[1] = puVar6[1];
        *puVar15 = uVar9;
        puVar15[3] = uVar20;
        puVar15[2] = uVar19;
        puVar6 = puVar6 + -4;
        puVar15 = puVar15 + 4;
      } while (uVar10 != 0);
      if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar5,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770d8);
      }
      param_6 = 0;
      param_2 = uVar13;
joined_r0x006cc724:
      if (param_2 < 0x21) break;
    } while( true );
  }
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
LAB_006cc98c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x6cc990);
    (*pcVar2)();
  }
  uVar13 = param_2 >> 1;
  if (param_2 < 8) {
    uVar22 = param_1[1];
    uVar20 = *param_1;
    uVar9 = param_1[2];
    puVar6 = param_1 + uVar13 * 4;
    uVar5 = 1;
    param_3[3] = param_1[3];
    param_3[2] = uVar9;
    uVar24 = puVar6[1];
    uVar23 = *puVar6;
    uVar19 = puVar6[3];
    uVar9 = puVar6[2];
    puVar6 = param_3 + uVar13 * 4;
    param_3[1] = uVar22;
    *param_3 = uVar20;
    puVar6[1] = uVar24;
    *puVar6 = uVar23;
    puVar6[3] = uVar19;
    puVar6[2] = uVar9;
    uVar10 = param_2 - uVar13;
    if (uVar13 < 2) goto LAB_006cc7f8;
  }
  else {
    puVar6 = param_1 + (ulong)((ulong)param_1[2] <= (ulong)param_1[6]) * 4;
    lVar16 = 0x40;
    if ((ulong)param_1[10] <= (ulong)param_1[0xe]) {
      lVar16 = 0x60;
    }
    puVar15 = param_1 + (ulong)((ulong)param_1[2] > (ulong)param_1[6]) * 4;
    lVar8 = 0x60;
    if ((ulong)param_1[10] <= (ulong)param_1[0xe]) {
      lVar8 = 0x40;
    }
    puVar7 = (undefined8 *)((long)param_1 + lVar16);
    puVar12 = (undefined8 *)((long)param_1 + lVar8);
    puVar14 = puVar12;
    if ((ulong)puVar6[2] <= (ulong)puVar7[2]) {
      puVar14 = puVar6;
    }
    puVar11 = puVar6;
    puVar1 = puVar15;
    if ((ulong)puVar15[2] <= (ulong)puVar12[2]) {
      puVar11 = puVar12;
      puVar1 = puVar14;
      puVar12 = puVar15;
    }
    puVar15 = puVar7;
    if ((ulong)puVar6[2] <= (ulong)puVar7[2]) {
      puVar15 = puVar11;
      puVar6 = puVar7;
    }
    uVar9 = *puVar12;
    uVar20 = puVar12[3];
    uVar19 = puVar12[2];
    uVar23 = puVar6[1];
    uVar22 = *puVar6;
    uVar25 = puVar6[3];
    uVar24 = puVar6[2];
    puVar6 = puVar1;
    if ((ulong)puVar1[2] <= (ulong)puVar15[2]) {
      puVar6 = puVar15;
      puVar15 = puVar1;
    }
    puVar7 = param_1 + uVar13 * 4 +
                       (ulong)((ulong)param_1[uVar13 * 4 + 2] <= (ulong)param_1[uVar13 * 4 + 6]) * 4
    ;
    lVar16 = 0x60;
    if ((ulong)param_1[uVar13 * 4 + 10] <= (ulong)param_1[uVar13 * 4 + 0xe]) {
      lVar16 = 0x40;
    }
    lVar8 = 0x40;
    if ((ulong)param_1[uVar13 * 4 + 10] <= (ulong)param_1[uVar13 * 4 + 0xe]) {
      lVar8 = 0x60;
    }
    puVar14 = param_1 + uVar13 * 4 +
                        (ulong)((ulong)param_1[uVar13 * 4 + 2] > (ulong)param_1[uVar13 * 4 + 6]) * 4
    ;
    puVar11 = (undefined8 *)((long)param_1 + lVar8 + uVar13 * 0x20);
    puVar1 = (undefined8 *)((long)param_1 + lVar16 + uVar13 * 0x20);
    uVar17 = puVar11[2];
    uVar18 = puVar7[2];
    uVar5 = puVar1[2];
    uVar10 = puVar14[2];
    param_3[1] = puVar12[1];
    *param_3 = uVar9;
    param_3[3] = uVar20;
    param_3[2] = uVar19;
    uVar19 = puVar15[1];
    uVar9 = *puVar15;
    uVar21 = puVar15[3];
    uVar20 = puVar15[2];
    puVar15 = puVar1;
    if (uVar18 <= uVar17) {
      puVar15 = puVar7;
    }
    param_3[0xd] = uVar23;
    param_3[0xc] = uVar22;
    param_3[0xf] = uVar25;
    param_3[0xe] = uVar24;
    puVar12 = puVar7;
    if (uVar10 <= uVar5) {
      puVar12 = puVar1;
      puVar1 = puVar14;
      puVar14 = puVar15;
    }
    uVar23 = puVar6[3];
    uVar22 = puVar6[2];
    uVar5 = puVar14[2];
    puVar15 = puVar11;
    if (uVar18 <= uVar17) {
      puVar15 = puVar12;
    }
    param_3[5] = uVar19;
    param_3[4] = uVar9;
    param_3[7] = uVar21;
    param_3[6] = uVar20;
    uVar19 = puVar6[1];
    uVar9 = *puVar6;
    uVar10 = puVar15[2];
    param_3[0xb] = uVar23;
    param_3[10] = uVar22;
    if (uVar18 <= uVar17) {
      puVar7 = puVar11;
    }
    uVar22 = puVar1[1];
    uVar20 = *puVar1;
    uVar24 = puVar1[3];
    uVar23 = puVar1[2];
    puVar6 = param_3 + uVar13 * 4;
    param_3[9] = uVar19;
    param_3[8] = uVar9;
    puVar12 = puVar14;
    if (uVar5 <= uVar10) {
      puVar12 = puVar15;
      puVar15 = puVar14;
    }
    puVar6[3] = uVar24;
    puVar6[2] = uVar23;
    uVar24 = puVar15[1];
    uVar23 = *puVar15;
    uVar19 = puVar15[3];
    uVar9 = puVar15[2];
    puVar6[1] = uVar22;
    *puVar6 = uVar20;
    puVar6[7] = uVar19;
    puVar6[6] = uVar9;
    uVar22 = puVar12[1];
    uVar20 = *puVar12;
    uVar19 = puVar12[3];
    uVar9 = puVar12[2];
    puVar6[5] = uVar24;
    puVar6[4] = uVar23;
    uVar5 = 4;
    puVar6[0xb] = uVar19;
    puVar6[10] = uVar9;
    uVar24 = puVar7[1];
    uVar23 = *puVar7;
    uVar19 = puVar7[3];
    uVar9 = puVar7[2];
    puVar6[9] = uVar22;
    puVar6[8] = uVar20;
    puVar6[0xd] = uVar24;
    puVar6[0xc] = uVar23;
    puVar6[0xf] = uVar19;
    puVar6[0xe] = uVar9;
    uVar10 = param_2 - uVar13;
    if (uVar13 < 5) goto LAB_006cc7f8;
  }
  lVar16 = uVar5 << 5;
  uVar17 = uVar5;
  do {
    puVar6 = param_1 + uVar17 * 4;
    puVar15 = param_3 + uVar17 * 4;
    uVar20 = *puVar6;
    uVar19 = puVar6[3];
    uVar9 = puVar6[2];
    puVar15[1] = puVar6[1];
    *puVar15 = uVar20;
    puVar15[3] = uVar19;
    puVar15[2] = uVar9;
    uVar18 = puVar15[2];
    if (uVar18 < (ulong)puVar15[-2]) {
      uVar9 = puVar15[3];
      lVar8 = lVar16;
      do {
        puVar15 = (undefined8 *)((long)param_3 + lVar8);
        lVar8 = lVar8 + -0x20;
        puVar15[1] = puVar15[-3];
        *puVar15 = puVar15[-4];
        puVar15[3] = puVar15[-1];
        puVar15[2] = puVar15[-2];
        puVar7 = param_3;
        if (lVar8 == 0) goto LAB_006cc788;
      } while (uVar18 < (ulong)puVar15[-6]);
      puVar7 = (undefined8 *)((long)param_3 + lVar8);
LAB_006cc788:
      uVar19 = *puVar6;
      puVar7[1] = puVar6[1];
      *puVar7 = uVar19;
      puVar15[-2] = uVar18;
      puVar15[-1] = uVar9;
    }
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 0x20;
  } while (uVar17 != uVar13);
LAB_006cc7f8:
  puVar6 = param_3 + uVar13 * 4;
  if (uVar5 < uVar10) {
    lVar16 = 0x20;
    uVar17 = uVar5;
    puVar15 = puVar6;
    do {
      puVar7 = param_1 + uVar13 * 4 + uVar17 * 4;
      puVar12 = puVar6 + uVar17 * 4;
      uVar20 = *puVar7;
      uVar19 = puVar7[3];
      uVar9 = puVar7[2];
      puVar12[1] = puVar7[1];
      *puVar12 = uVar20;
      puVar12[3] = uVar19;
      puVar12[2] = uVar9;
      uVar18 = puVar12[2];
      if (uVar18 < (ulong)puVar12[-2]) {
        uVar9 = puVar12[3];
        puVar12 = puVar15;
        lVar8 = lVar16;
        do {
          puVar14 = puVar12 + uVar5 * 4;
          puVar14[1] = puVar14[-3];
          *puVar14 = puVar14[-4];
          puVar14[3] = puVar14[-1];
          puVar14[2] = puVar14[-2];
          puVar11 = puVar6;
          if (uVar5 * 0x20 - lVar8 == 0) goto LAB_006cc81c;
          lVar8 = lVar8 + 0x20;
          puVar12 = puVar12 + -4;
        } while (uVar18 < (ulong)puVar14[-6]);
        puVar11 = puVar12 + uVar5 * 4;
LAB_006cc81c:
        uVar19 = *puVar7;
        puVar11[1] = puVar7[1];
        *puVar11 = uVar19;
        puVar14[-2] = uVar18;
        puVar14[-1] = uVar9;
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + -0x20;
      puVar15 = puVar15 + 4;
    } while (uVar17 != uVar10);
  }
  lVar16 = param_2 * 0x20;
  puVar7 = puVar6 + -4;
  puVar15 = param_3 + param_2 * 4 + -4;
  puVar12 = param_1;
  do {
    puVar14 = puVar12;
    lVar16 = lVar16 + -0x20;
    uVar13 = uVar13 - 1;
    bVar3 = (ulong)param_3[2] <= (ulong)puVar6[2];
    puVar12 = puVar6;
    if (bVar3) {
      puVar12 = param_3;
    }
    uVar9 = *puVar12;
    uVar20 = puVar12[3];
    uVar19 = puVar12[2];
    bVar4 = (ulong)puVar7[2] <= (ulong)puVar15[2];
    puVar6 = puVar6 + (ulong)!bVar3 * 4;
    param_3 = param_3 + (ulong)bVar3 * 4;
    puVar11 = puVar7;
    if (bVar4) {
      puVar11 = puVar15;
    }
    puVar14[1] = puVar12[1];
    *puVar14 = uVar9;
    puVar14[3] = uVar20;
    puVar14[2] = uVar19;
    puVar15 = puVar15 + (ulong)bVar4 * -4;
    uVar9 = *puVar11;
    uVar20 = puVar11[3];
    uVar19 = puVar11[2];
    puVar7 = puVar7 + (ulong)!bVar4 * -4;
    puVar12 = (undefined8 *)((long)param_1 + lVar16);
    puVar12[1] = puVar11[1];
    *puVar12 = uVar9;
    puVar12[3] = uVar20;
    puVar12[2] = uVar19;
    puVar12 = puVar14 + 4;
  } while (uVar13 != 0);
  if ((param_2 & 1) != 0) {
    bVar3 = puVar7 + 4 <= param_3;
    puVar12 = param_3;
    if (bVar3) {
      puVar12 = puVar6;
    }
    uVar20 = *puVar12;
    uVar19 = puVar12[3];
    uVar9 = puVar12[2];
    param_3 = param_3 + (ulong)!bVar3 * 4;
    puVar6 = puVar6 + (ulong)bVar3 * 4;
    puVar14[5] = puVar12[1];
    puVar14[4] = uVar20;
    puVar14[7] = uVar19;
    puVar14[6] = uVar9;
  }
  if ((param_3 == puVar7 + 4) && (puVar6 == puVar15 + 4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006cc988 to 006cc98b has its CatchHandler @ 006cc9a8 */
  core::slice::sort::shared::smallsort::panic_on_ord_violation();
code_r0x006cc5cc:
  puVar11 = puVar11 + -4;
  puVar12 = puVar14 + 4;
  uVar9 = *puVar14;
  uVar20 = puVar14[3];
  uVar19 = puVar14[2];
  puVar7 = puVar11 + uVar5 * 4;
  puVar7[1] = puVar14[1];
  *puVar7 = uVar9;
  puVar7[3] = uVar20;
  puVar7[2] = uVar19;
  puVar7 = param_1 + param_2 * 4;
  puVar14 = puVar12;
  uVar10 = param_2;
  if (puVar12 < puVar7) goto LAB_006cc598;
  goto LAB_006cc5c4;
code_r0x006cc6b0:
  puVar12 = puVar14 + 4;
  uVar20 = *puVar14;
  uVar19 = puVar14[3];
  uVar9 = puVar14[2];
  puVar7 = param_3 + uVar5 * 4;
  puVar15 = puVar15 + -4;
  uVar5 = uVar5 + 1;
  puVar7[1] = puVar14[1];
  *puVar7 = uVar20;
  puVar7[3] = uVar19;
  puVar7[2] = uVar9;
  puVar7 = param_1 + param_2 * 4;
  puVar14 = puVar12;
  uVar13 = param_2;
  if (puVar12 < puVar7) goto LAB_006cc67c;
  goto LAB_006cc6a8;
}


// ===== 006cc9c4  core::slice::sort::stable::quicksort::quicksort<addr2line::unit::UnitRange,<alloc::slice::[{backref_15}]>::sort_by_key<u64,<{backref_23}::{backref_23}::ResUnits<gimli::read::endian_slice::EndianSlice<{backref_59}::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::stable::quicksort::quicksort<addr2line::unit::UnitRange,
   <alloc::slice::[{backref 15}]>::sort_by_key<u64, <{backref 23}::{backref
   23}::ResUnits<gimli::read::endian_slice::EndianSlice<{backref
   59}::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> */

void __rustcall
core::slice::sort::stable::quicksort::
quicksort<addr2line::unit::UnitRange,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::ResUnits<gimli::read::endian_slice::EndianSlice<_backref_59_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,int param_5,
          long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (0x20 < param_2) {
    do {
      if (param_5 == 0) {
        FUN_006cae38(param_1,param_2,param_3,param_4,1,param_7);
        return;
      }
      if (param_2 < 0x40) {
        uVar13 = param_1[1];
        uVar5 = (param_1 + (param_2 >> 3) * 0x10)[1];
        uVar10 = (param_1 + (param_2 >> 3) * 0x1c)[1];
        puVar15 = param_1 + (param_2 >> 3) * 0x1c;
        if (uVar13 < uVar5 == uVar5 < uVar10) {
          puVar15 = param_1 + (param_2 >> 3) * 0x10;
        }
        puVar6 = param_1;
        if (uVar13 < uVar5 == uVar13 < uVar10) {
          puVar6 = puVar15;
        }
      }
      else {
        puVar6 = (undefined8 *)FUN_006c9ab4(param_1);
      }
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      uStack_68 = puVar6[3];
      uStack_70 = puVar6[2];
      puVar15 = param_3 + param_2 * 4;
      uVar13 = (ulong)((long)puVar6 - (long)param_1) >> 5;
      param_5 = param_5 + -1;
      if ((param_6 == 0) || (*(ulong *)(param_6 + 8) < (ulong)puVar6[1])) {
        if (param_2 <= param_4) {
          uVar5 = 0;
          puVar7 = param_1 + uVar13 * 4;
          puVar12 = param_1;
          puVar14 = param_1;
          puVar11 = puVar15;
          uVar10 = uVar13;
          if (puVar7 <= param_1) goto LAB_006ccc8c;
LAB_006ccc60:
          do {
            puVar11 = puVar11 + -4;
            puVar14 = puVar12 + 4;
            uVar20 = *puVar12;
            uVar19 = puVar12[3];
            uVar9 = puVar12[2];
            puVar1 = param_3;
            if ((ulong)puVar6[1] <= (ulong)puVar12[1]) {
              puVar1 = puVar11;
            }
            puVar1 = puVar1 + uVar5 * 4;
            if ((ulong)puVar6[1] > (ulong)puVar12[1]) {
              uVar5 = uVar5 + 1;
            }
            puVar1[1] = puVar12[1];
            *puVar1 = uVar20;
            puVar1[3] = uVar19;
            puVar1[2] = uVar9;
            puVar12 = puVar14;
          } while (puVar14 < puVar7);
LAB_006ccc8c:
          if (uVar10 != param_2) goto code_r0x006ccc94;
          memcpy(param_1,param_3,uVar5 << 5);
          lVar16 = param_2 - uVar5;
          if (lVar16 != 0) {
            puVar7 = param_3 + param_2 * 4 + -4;
            lVar8 = lVar16;
            puVar12 = param_1 + uVar5 * 4;
            do {
              uVar9 = *puVar7;
              uVar20 = puVar7[3];
              uVar19 = puVar7[2];
              lVar8 = lVar8 + -1;
              puVar12[1] = puVar7[1];
              *puVar12 = uVar9;
              puVar12[3] = uVar20;
              puVar12[2] = uVar19;
              puVar7 = puVar7 + -4;
              puVar12 = puVar12 + 4;
            } while (lVar8 != 0);
          }
          if (uVar5 == 0) goto LAB_006ccd28;
          if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_fmt
                      (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770c0);
          }
          quicksort<addr2line::unit::UnitRange,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::ResUnits<gimli::read::endian_slice::EndianSlice<_backref_59_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                    (param_1 + uVar5 * 4,lVar16,param_3,param_4,param_5,&local_80,param_7);
          param_2 = uVar5;
          goto joined_r0x006ccdec;
        }
        goto LAB_006cd05c;
      }
LAB_006ccd28:
      if (param_4 < param_2) goto LAB_006cd05c;
      uVar5 = 0;
      puVar7 = param_1 + uVar13 * 4;
      puVar12 = param_1;
      puVar14 = param_1;
      if (puVar7 <= param_1) goto LAB_006ccd70;
LAB_006ccd44:
      do {
        puVar15 = puVar15 + -4;
        puVar14 = puVar12 + 4;
        uVar20 = *puVar12;
        uVar19 = puVar12[3];
        uVar9 = puVar12[2];
        puVar11 = param_3;
        if ((ulong)puVar6[1] < (ulong)puVar12[1]) {
          puVar11 = puVar15;
        }
        puVar11 = puVar11 + uVar5 * 4;
        if ((ulong)puVar6[1] >= (ulong)puVar12[1]) {
          uVar5 = uVar5 + 1;
        }
        puVar11[1] = puVar12[1];
        *puVar11 = uVar20;
        puVar11[3] = uVar19;
        puVar11[2] = uVar9;
        puVar12 = puVar14;
      } while (puVar14 < puVar7);
LAB_006ccd70:
      if (uVar13 != param_2) goto code_r0x006ccd78;
      memcpy(param_1,param_3,uVar5 << 5);
      uVar13 = param_2 - uVar5;
      if (uVar13 == 0) {
        return;
      }
      param_1 = param_1 + uVar5 * 4;
      puVar6 = param_3 + param_2 * 4 + -4;
      uVar10 = uVar13;
      puVar15 = param_1;
      do {
        uVar9 = *puVar6;
        uVar20 = puVar6[3];
        uVar19 = puVar6[2];
        uVar10 = uVar10 - 1;
        puVar15[1] = puVar6[1];
        *puVar15 = uVar9;
        puVar15[3] = uVar20;
        puVar15[2] = uVar19;
        puVar6 = puVar6 + -4;
        puVar15 = puVar15 + 4;
      } while (uVar10 != 0);
      if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
        index::slice_index_fail
                  (uVar5,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770d8);
      }
      param_6 = 0;
      param_2 = uVar13;
joined_r0x006ccdec:
      if (param_2 < 0x21) break;
    } while( true );
  }
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
LAB_006cd05c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x6cd060);
    (*pcVar2)();
  }
  uVar13 = param_2 >> 1;
  if (param_2 < 8) {
    uVar22 = param_1[1];
    uVar20 = *param_1;
    uVar9 = param_1[2];
    puVar6 = param_1 + uVar13 * 4;
    uVar5 = 1;
    param_3[3] = param_1[3];
    param_3[2] = uVar9;
    uVar24 = puVar6[1];
    uVar23 = *puVar6;
    uVar19 = puVar6[3];
    uVar9 = puVar6[2];
    puVar6 = param_3 + uVar13 * 4;
    param_3[1] = uVar22;
    *param_3 = uVar20;
    puVar6[1] = uVar24;
    *puVar6 = uVar23;
    puVar6[3] = uVar19;
    puVar6[2] = uVar9;
    uVar10 = param_2 - uVar13;
    if (uVar13 < 2) goto LAB_006ccec4;
  }
  else {
    puVar6 = param_1 + (ulong)((ulong)param_1[1] <= (ulong)param_1[5]) * 4;
    lVar16 = 0x40;
    if ((ulong)param_1[9] <= (ulong)param_1[0xd]) {
      lVar16 = 0x60;
    }
    puVar15 = param_1 + (ulong)((ulong)param_1[1] > (ulong)param_1[5]) * 4;
    lVar8 = 0x60;
    if ((ulong)param_1[9] <= (ulong)param_1[0xd]) {
      lVar8 = 0x40;
    }
    puVar7 = (undefined8 *)((long)param_1 + lVar16);
    puVar12 = (undefined8 *)((long)param_1 + lVar8);
    puVar14 = puVar12;
    if ((ulong)puVar6[1] <= (ulong)puVar7[1]) {
      puVar14 = puVar6;
    }
    puVar11 = puVar6;
    puVar1 = puVar15;
    if ((ulong)puVar15[1] <= (ulong)puVar12[1]) {
      puVar11 = puVar12;
      puVar1 = puVar14;
      puVar12 = puVar15;
    }
    puVar15 = puVar7;
    if ((ulong)puVar6[1] <= (ulong)puVar7[1]) {
      puVar15 = puVar11;
      puVar6 = puVar7;
    }
    uVar9 = *puVar12;
    uVar20 = puVar12[3];
    uVar19 = puVar12[2];
    uVar23 = puVar6[1];
    uVar22 = *puVar6;
    uVar25 = puVar6[3];
    uVar24 = puVar6[2];
    puVar6 = puVar1;
    if ((ulong)puVar1[1] <= (ulong)puVar15[1]) {
      puVar6 = puVar15;
      puVar15 = puVar1;
    }
    puVar7 = param_1 + uVar13 * 4 +
                       (ulong)((ulong)param_1[uVar13 * 4 + 1] <= (ulong)param_1[uVar13 * 4 + 5]) * 4
    ;
    lVar16 = 0x60;
    if ((ulong)param_1[uVar13 * 4 + 9] <= (ulong)param_1[uVar13 * 4 + 0xd]) {
      lVar16 = 0x40;
    }
    lVar8 = 0x40;
    if ((ulong)param_1[uVar13 * 4 + 9] <= (ulong)param_1[uVar13 * 4 + 0xd]) {
      lVar8 = 0x60;
    }
    puVar14 = param_1 + uVar13 * 4 +
                        (ulong)((ulong)param_1[uVar13 * 4 + 1] > (ulong)param_1[uVar13 * 4 + 5]) * 4
    ;
    puVar11 = (undefined8 *)((long)param_1 + lVar8 + uVar13 * 0x20);
    puVar1 = (undefined8 *)((long)param_1 + lVar16 + uVar13 * 0x20);
    uVar17 = puVar11[1];
    uVar18 = puVar7[1];
    uVar5 = puVar1[1];
    uVar10 = puVar14[1];
    param_3[1] = puVar12[1];
    *param_3 = uVar9;
    param_3[3] = uVar20;
    param_3[2] = uVar19;
    uVar19 = puVar15[1];
    uVar9 = *puVar15;
    uVar21 = puVar15[3];
    uVar20 = puVar15[2];
    puVar15 = puVar1;
    if (uVar18 <= uVar17) {
      puVar15 = puVar7;
    }
    param_3[0xd] = uVar23;
    param_3[0xc] = uVar22;
    param_3[0xf] = uVar25;
    param_3[0xe] = uVar24;
    puVar12 = puVar7;
    if (uVar10 <= uVar5) {
      puVar12 = puVar1;
      puVar1 = puVar14;
      puVar14 = puVar15;
    }
    uVar23 = puVar6[3];
    uVar22 = puVar6[2];
    uVar5 = puVar14[1];
    puVar15 = puVar11;
    if (uVar18 <= uVar17) {
      puVar15 = puVar12;
    }
    param_3[5] = uVar19;
    param_3[4] = uVar9;
    param_3[7] = uVar21;
    param_3[6] = uVar20;
    uVar19 = puVar6[1];
    uVar9 = *puVar6;
    uVar10 = puVar15[1];
    param_3[0xb] = uVar23;
    param_3[10] = uVar22;
    if (uVar18 <= uVar17) {
      puVar7 = puVar11;
    }
    uVar22 = puVar1[1];
    uVar20 = *puVar1;
    uVar24 = puVar1[3];
    uVar23 = puVar1[2];
    puVar6 = param_3 + uVar13 * 4;
    param_3[9] = uVar19;
    param_3[8] = uVar9;
    puVar12 = puVar14;
    if (uVar5 <= uVar10) {
      puVar12 = puVar15;
      puVar15 = puVar14;
    }
    puVar6[3] = uVar24;
    puVar6[2] = uVar23;
    uVar24 = puVar15[1];
    uVar23 = *puVar15;
    uVar19 = puVar15[3];
    uVar9 = puVar15[2];
    puVar6[1] = uVar22;
    *puVar6 = uVar20;
    puVar6[7] = uVar19;
    puVar6[6] = uVar9;
    uVar22 = puVar12[1];
    uVar20 = *puVar12;
    uVar19 = puVar12[3];
    uVar9 = puVar12[2];
    puVar6[5] = uVar24;
    puVar6[4] = uVar23;
    uVar5 = 4;
    puVar6[0xb] = uVar19;
    puVar6[10] = uVar9;
    uVar24 = puVar7[1];
    uVar23 = *puVar7;
    uVar19 = puVar7[3];
    uVar9 = puVar7[2];
    puVar6[9] = uVar22;
    puVar6[8] = uVar20;
    puVar6[0xd] = uVar24;
    puVar6[0xc] = uVar23;
    puVar6[0xf] = uVar19;
    puVar6[0xe] = uVar9;
    uVar10 = param_2 - uVar13;
    if (uVar13 < 5) goto LAB_006ccec4;
  }
  lVar16 = uVar5 << 5;
  uVar17 = uVar5;
  do {
    puVar6 = param_1 + uVar17 * 4;
    puVar15 = param_3 + uVar17 * 4;
    uVar9 = *puVar6;
    uVar20 = puVar6[3];
    uVar19 = puVar6[2];
    puVar15[1] = puVar6[1];
    *puVar15 = uVar9;
    puVar15[3] = uVar20;
    puVar15[2] = uVar19;
    uVar18 = puVar15[1];
    if (uVar18 < (ulong)puVar15[-3]) {
      uVar9 = *puVar15;
      lVar8 = lVar16;
      do {
        puVar15 = (undefined8 *)((long)param_3 + lVar8);
        lVar8 = lVar8 + -0x20;
        puVar15[1] = puVar15[-3];
        *puVar15 = puVar15[-4];
        puVar15[3] = puVar15[-1];
        puVar15[2] = puVar15[-2];
        puVar7 = param_3;
        if (lVar8 == 0) goto LAB_006cce50;
      } while (uVar18 < (ulong)puVar15[-7]);
      puVar7 = (undefined8 *)((long)param_3 + lVar8);
LAB_006cce50:
      uVar20 = puVar6[3];
      uVar19 = puVar6[2];
      *puVar7 = uVar9;
      puVar15[-3] = uVar18;
      puVar15[-1] = uVar20;
      puVar15[-2] = uVar19;
    }
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 0x20;
  } while (uVar17 != uVar13);
LAB_006ccec4:
  puVar6 = param_3 + uVar13 * 4;
  if (uVar5 < uVar10) {
    lVar16 = 0x20;
    uVar17 = uVar5;
    puVar15 = puVar6;
    do {
      puVar7 = param_1 + uVar13 * 4 + uVar17 * 4;
      puVar12 = puVar6 + uVar17 * 4;
      uVar9 = *puVar7;
      uVar20 = puVar7[3];
      uVar19 = puVar7[2];
      puVar12[1] = puVar7[1];
      *puVar12 = uVar9;
      puVar12[3] = uVar20;
      puVar12[2] = uVar19;
      uVar18 = puVar12[1];
      if (uVar18 < (ulong)puVar12[-3]) {
        uVar9 = *puVar12;
        puVar12 = puVar15;
        lVar8 = lVar16;
        do {
          puVar14 = puVar12 + uVar5 * 4;
          puVar14[1] = puVar14[-3];
          *puVar14 = puVar14[-4];
          puVar14[3] = puVar14[-1];
          puVar14[2] = puVar14[-2];
          puVar11 = puVar6;
          if (uVar5 * 0x20 - lVar8 == 0) goto LAB_006ccee8;
          lVar8 = lVar8 + 0x20;
          puVar12 = puVar12 + -4;
        } while (uVar18 < (ulong)puVar14[-7]);
        puVar11 = puVar12 + uVar5 * 4;
LAB_006ccee8:
        uVar20 = puVar7[3];
        uVar19 = puVar7[2];
        *puVar11 = uVar9;
        puVar14[-3] = uVar18;
        puVar14[-1] = uVar20;
        puVar14[-2] = uVar19;
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + -0x20;
      puVar15 = puVar15 + 4;
    } while (uVar17 != uVar10);
  }
  lVar16 = param_2 * 0x20;
  puVar7 = puVar6 + -4;
  puVar15 = param_3 + param_2 * 4 + -4;
  puVar12 = param_1;
  do {
    puVar14 = puVar12;
    lVar16 = lVar16 + -0x20;
    uVar13 = uVar13 - 1;
    bVar3 = (ulong)param_3[1] <= (ulong)puVar6[1];
    puVar12 = puVar6;
    if (bVar3) {
      puVar12 = param_3;
    }
    uVar9 = *puVar12;
    uVar20 = puVar12[3];
    uVar19 = puVar12[2];
    bVar4 = (ulong)puVar7[1] <= (ulong)puVar15[1];
    puVar6 = puVar6 + (ulong)!bVar3 * 4;
    param_3 = param_3 + (ulong)bVar3 * 4;
    puVar11 = puVar7;
    if (bVar4) {
      puVar11 = puVar15;
    }
    puVar14[1] = puVar12[1];
    *puVar14 = uVar9;
    puVar14[3] = uVar20;
    puVar14[2] = uVar19;
    puVar15 = puVar15 + (ulong)bVar4 * -4;
    uVar9 = *puVar11;
    uVar20 = puVar11[3];
    uVar19 = puVar11[2];
    puVar7 = puVar7 + (ulong)!bVar4 * -4;
    puVar12 = (undefined8 *)((long)param_1 + lVar16);
    puVar12[1] = puVar11[1];
    *puVar12 = uVar9;
    puVar12[3] = uVar20;
    puVar12[2] = uVar19;
    puVar12 = puVar14 + 4;
  } while (uVar13 != 0);
  if ((param_2 & 1) != 0) {
    bVar3 = puVar7 + 4 <= param_3;
    puVar12 = param_3;
    if (bVar3) {
      puVar12 = puVar6;
    }
    uVar20 = *puVar12;
    uVar19 = puVar12[3];
    uVar9 = puVar12[2];
    param_3 = param_3 + (ulong)!bVar3 * 4;
    puVar6 = puVar6 + (ulong)bVar3 * 4;
    puVar14[5] = puVar12[1];
    puVar14[4] = uVar20;
    puVar14[7] = uVar19;
    puVar14[6] = uVar9;
  }
  if ((param_3 == puVar7 + 4) && (puVar6 == puVar15 + 4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006cd058 to 006cd05b has its CatchHandler @ 006cd078 */
  shared::smallsort::panic_on_ord_violation();
code_r0x006ccc94:
  puVar11 = puVar11 + -4;
  puVar12 = puVar14 + 4;
  uVar9 = *puVar14;
  uVar20 = puVar14[3];
  uVar19 = puVar14[2];
  puVar7 = puVar11 + uVar5 * 4;
  puVar7[1] = puVar14[1];
  *puVar7 = uVar9;
  puVar7[3] = uVar20;
  puVar7[2] = uVar19;
  puVar7 = param_1 + param_2 * 4;
  puVar14 = puVar12;
  uVar10 = param_2;
  if (puVar12 < puVar7) goto LAB_006ccc60;
  goto LAB_006ccc8c;
code_r0x006ccd78:
  puVar12 = puVar14 + 4;
  uVar20 = *puVar14;
  uVar19 = puVar14[3];
  uVar9 = puVar14[2];
  puVar7 = param_3 + uVar5 * 4;
  puVar15 = puVar15 + -4;
  uVar5 = uVar5 + 1;
  puVar7[1] = puVar14[1];
  *puVar7 = uVar20;
  puVar7[3] = uVar19;
  puVar7[2] = uVar9;
  puVar7 = param_1 + param_2 * 4;
  puVar14 = puVar12;
  uVar13 = param_2;
  if (puVar12 < puVar7) goto LAB_006ccd44;
  goto LAB_006ccd70;
}


// ===== 006cd094  core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::<addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}> =====

/* core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::<addr2line[5beaa54f6b4a1439]::function::FunctionAddress,
   <[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,
   <addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}>
    */

void core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
     <addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
               (ulong *param_1,ulong param_2,ulong *param_3,ulong param_4,int param_5,ulong *param_6
               ,undefined8 param_7)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  if (0x20 < param_2) {
    do {
      if (param_5 == 0) {
        FUN_006cb328(param_1,param_2,param_3,param_4,1,param_7);
        return;
      }
      if (param_2 < 0x40) {
        uVar12 = *param_1;
        uVar7 = param_1[(param_2 >> 3) * 0xc];
        uVar11 = param_1[(param_2 >> 3) * 0x15];
        puVar14 = param_1 + (param_2 >> 3) * 0x15;
        if (uVar12 < uVar7 == uVar7 < uVar11) {
          puVar14 = param_1 + (param_2 >> 3) * 0xc;
        }
        puVar9 = param_1;
        if (uVar12 < uVar7 == uVar12 < uVar11) {
          puVar9 = puVar14;
        }
      }
      else {
        puVar9 = (ulong *)FUN_006c9b80(param_1);
      }
      uStack_78 = puVar9[1];
      local_80 = *puVar9;
      uVar7 = (ulong)((long)puVar9 - (long)param_1) >> 3;
      param_5 = param_5 + -1;
      uVar12 = uVar7 * -0x5555555555555555;
      local_70 = puVar9[2];
      if ((param_6 == (ulong *)0x0) || (*param_6 < *puVar9)) {
        if (param_2 <= param_4) {
          puVar13 = param_3 + param_2 * 3;
          uVar11 = 0;
          puVar15 = param_1 + uVar7;
          puVar14 = param_1;
          uVar8 = uVar12;
          if (puVar15 <= param_1) goto LAB_006cd3b0;
LAB_006cd37c:
          do {
            puVar13 = puVar13 + -3;
            puVar18 = param_3;
            if (*puVar9 <= *puVar14) {
              puVar18 = puVar13;
            }
            puVar16 = puVar14 + 3;
            uVar21 = puVar14[1];
            uVar19 = *puVar14;
            puVar18 = puVar18 + uVar11 * 3;
            if (*puVar9 > *puVar14) {
              uVar11 = uVar11 + 1;
            }
            puVar18[2] = puVar14[2];
            puVar18[1] = uVar21;
            *puVar18 = uVar19;
            puVar14 = puVar16;
          } while (puVar16 < puVar15);
LAB_006cd3b0:
          if (uVar8 != param_2) goto code_r0x006cd3b8;
          memcpy(param_1,param_3,uVar11 * 0x18);
          lVar20 = param_2 - uVar11;
          if (lVar20 != 0) {
            puVar14 = param_1 + uVar11 * 3;
            puVar13 = param_3 + param_2 * 3 + -3;
            lVar10 = lVar20;
            do {
              puVar15 = puVar13 + 1;
              uVar19 = *puVar13;
              uVar8 = puVar13[2];
              lVar10 = lVar10 + -1;
              puVar13 = puVar13 + -3;
              puVar14[1] = *puVar15;
              *puVar14 = uVar19;
              puVar14[2] = uVar8;
              puVar14 = puVar14 + 3;
            } while (lVar10 != 0);
          }
          if (uVar11 == 0) goto LAB_006cd46c;
          if (param_2 < uVar11) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770c0);
          }
          <addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                    (param_1 + uVar11 * 3,lVar20,param_3,param_4,param_5,&local_80,param_7);
          param_2 = uVar11;
          goto joined_r0x006cd558;
        }
        goto LAB_006cd82c;
      }
LAB_006cd46c:
      if (param_4 < param_2) goto LAB_006cd82c;
      puVar15 = param_3 + param_2 * 3;
      uVar11 = 0;
      puVar18 = param_1 + uVar7;
      puVar14 = param_1;
      puVar13 = param_1;
      if (puVar18 <= param_1) goto LAB_006cd4c0;
LAB_006cd48c:
      do {
        puVar15 = puVar15 + -3;
        puVar16 = param_3;
        if (*puVar9 < *puVar14) {
          puVar16 = puVar15;
        }
        puVar13 = puVar14 + 3;
        uVar8 = puVar14[1];
        uVar7 = *puVar14;
        puVar16 = puVar16 + uVar11 * 3;
        if (*puVar9 >= *puVar14) {
          uVar11 = uVar11 + 1;
        }
        puVar16[2] = puVar14[2];
        puVar16[1] = uVar8;
        *puVar16 = uVar7;
        puVar14 = puVar13;
      } while (puVar13 < puVar18);
LAB_006cd4c0:
      if (uVar12 != param_2) goto code_r0x006cd4c8;
      memcpy(param_1,param_3,uVar11 * 0x18);
      uVar12 = param_2 - uVar11;
      if (uVar12 == 0) {
        return;
      }
      puVar9 = param_1 + uVar11 * 3;
      puVar14 = param_3 + param_2 * 3 + -3;
      uVar7 = uVar12;
      do {
        puVar13 = puVar14 + 1;
        uVar19 = *puVar14;
        uVar8 = puVar14[2];
        uVar7 = uVar7 - 1;
        puVar14 = puVar14 + -3;
        puVar9[1] = *puVar13;
        *puVar9 = uVar19;
        puVar9[2] = uVar8;
        puVar9 = puVar9 + 3;
      } while (uVar7 != 0);
      if (param_2 < uVar11) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar11,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770d8);
      }
      param_1 = param_1 + uVar11 * 3;
      param_6 = (ulong *)0x0;
      param_2 = uVar12;
joined_r0x006cd558:
      if (param_2 < 0x21) break;
    } while( true );
  }
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
LAB_006cd82c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x6cd830);
    (*pcVar4)();
  }
  uVar12 = param_2 >> 1;
  if (param_2 < 8) {
    uVar8 = param_1[1];
    uVar11 = *param_1;
    puVar9 = param_1 + uVar12 * 3;
    param_3[2] = param_1[2];
    puVar14 = param_3 + uVar12 * 3;
    uVar7 = puVar9[2];
    param_3[1] = uVar8;
    *param_3 = uVar11;
    uVar8 = puVar9[1];
    uVar11 = *puVar9;
    puVar14[2] = uVar7;
    puVar14[1] = uVar8;
    *puVar14 = uVar11;
    uVar7 = 1;
    uVar11 = param_2 - uVar12;
    if (uVar12 < 2) goto LAB_006cd658;
  }
  else {
    puVar9 = param_1 + (ulong)(*param_1 <= param_1[3]) * 3;
    lVar20 = 0x30;
    if (param_1[6] <= param_1[9]) {
      lVar20 = 0x48;
    }
    puVar14 = param_1 + (ulong)(*param_1 > param_1[3]) * 3;
    lVar10 = 0x48;
    if (param_1[6] <= param_1[9]) {
      lVar10 = 0x30;
    }
    puVar13 = (ulong *)((long)param_1 + lVar20);
    puVar15 = (ulong *)((long)param_1 + lVar10);
    uVar7 = *puVar13;
    uVar11 = *puVar9;
    puVar18 = puVar15;
    if (uVar11 <= uVar7) {
      puVar18 = puVar9;
    }
    puVar16 = puVar9;
    if (*puVar14 <= *puVar15) {
      puVar16 = puVar15;
      puVar15 = puVar14;
      puVar14 = puVar18;
    }
    puVar18 = param_1 + uVar12 * 3;
    puVar3 = puVar13;
    if (uVar11 <= uVar7) {
      puVar3 = puVar16;
    }
    if (uVar11 <= uVar7) {
      puVar9 = puVar13;
    }
    uVar7 = *puVar15;
    puVar13 = param_3 + uVar12 * 3;
    puVar16 = puVar14;
    if (*puVar14 <= *puVar3) {
      puVar16 = puVar3;
      puVar3 = puVar14;
    }
    puVar14 = puVar18 + (ulong)(*puVar18 <= puVar18[3]) * 3;
    lVar20 = 0x30;
    if (puVar18[6] <= puVar18[9]) {
      lVar20 = 0x48;
    }
    uVar11 = puVar15[2];
    puVar17 = puVar18 + (ulong)(*puVar18 > puVar18[3]) * 3;
    lVar10 = 0x48;
    if (puVar18[6] <= puVar18[9]) {
      lVar10 = 0x30;
    }
    puVar1 = (ulong *)((long)puVar18 + lVar20);
    puVar18 = (ulong *)((long)puVar18 + lVar10);
    uVar8 = *puVar1;
    param_3[1] = puVar15[1];
    *param_3 = uVar7;
    uVar7 = *puVar14;
    uVar23 = puVar9[1];
    uVar22 = *puVar9;
    uVar19 = puVar9[2];
    param_3[2] = uVar11;
    uVar21 = *puVar18;
    uVar11 = *puVar17;
    param_3[0xb] = uVar19;
    puVar9 = puVar18;
    if (uVar7 <= uVar8) {
      puVar9 = puVar14;
    }
    param_3[10] = uVar23;
    param_3[9] = uVar22;
    uVar22 = *puVar3;
    uVar19 = puVar3[2];
    puVar15 = puVar14;
    if (uVar11 <= uVar21) {
      puVar15 = puVar18;
      puVar18 = puVar17;
      puVar17 = puVar9;
    }
    puVar9 = puVar1;
    if (uVar7 <= uVar8) {
      puVar9 = puVar15;
    }
    param_3[4] = puVar3[1];
    param_3[3] = uVar22;
    uVar23 = puVar16[1];
    uVar22 = *puVar16;
    param_3[5] = uVar19;
    uVar11 = *puVar17;
    uVar21 = *puVar9;
    uVar19 = puVar16[2];
    param_3[7] = uVar23;
    param_3[6] = uVar22;
    if (uVar7 <= uVar8) {
      puVar14 = puVar1;
    }
    uVar22 = puVar18[1];
    uVar8 = *puVar18;
    uVar7 = puVar18[2];
    param_3[8] = uVar19;
    puVar15 = puVar17;
    if (uVar11 <= uVar21) {
      puVar15 = puVar9;
      puVar9 = puVar17;
    }
    puVar13[1] = uVar22;
    *puVar13 = uVar8;
    uVar21 = puVar9[1];
    uVar19 = *puVar9;
    uVar8 = puVar14[2];
    uVar11 = puVar9[2];
    puVar13[2] = uVar7;
    puVar13[4] = uVar21;
    puVar13[3] = uVar19;
    uVar21 = puVar15[1];
    uVar19 = *puVar15;
    uVar7 = puVar15[2];
    puVar13[0xb] = uVar8;
    puVar13[7] = uVar21;
    puVar13[6] = uVar19;
    uVar19 = puVar14[1];
    uVar8 = *puVar14;
    puVar13[5] = uVar11;
    puVar13[8] = uVar7;
    uVar7 = 4;
    puVar13[10] = uVar19;
    puVar13[9] = uVar8;
    uVar11 = param_2 - uVar12;
    if (uVar12 < 5) goto LAB_006cd658;
  }
  lVar20 = uVar7 * 0x18;
  uVar8 = uVar7;
  do {
    puVar9 = param_1 + uVar8 * 3;
    puVar14 = param_3 + uVar8 * 3;
    uVar21 = *puVar9;
    uVar19 = puVar9[2];
    puVar14[1] = puVar9[1];
    *puVar14 = uVar21;
    uVar21 = *puVar14;
    puVar14[2] = uVar19;
    if (uVar21 < puVar14[-3]) {
      uStack_78 = puVar9[2];
      local_80 = puVar9[1];
      lVar10 = lVar20;
      do {
        puVar2 = (undefined8 *)((long)param_3 + lVar10);
        lVar10 = lVar10 + -0x18;
        puVar2[1] = puVar2[-2];
        *puVar2 = puVar2[-3];
        puVar2[2] = puVar2[-1];
        puVar9 = param_3;
        if (lVar10 == 0) goto LAB_006cd5d0;
      } while (uVar21 < (ulong)puVar2[-6]);
      puVar9 = (ulong *)((long)param_3 + lVar10);
LAB_006cd5d0:
      *puVar9 = uVar21;
      puVar9[2] = uStack_78;
      puVar9[1] = local_80;
    }
    uVar8 = uVar8 + 1;
    lVar20 = lVar20 + 0x18;
  } while (uVar8 != uVar12);
LAB_006cd658:
  puVar9 = param_3 + uVar12 * 3;
  if (uVar7 < uVar11) {
    lVar20 = 0x18;
    uVar8 = uVar7;
    puVar14 = puVar9;
    do {
      puVar13 = param_1 + uVar12 * 3 + uVar8 * 3;
      puVar15 = puVar9 + uVar8 * 3;
      uVar21 = *puVar13;
      uVar19 = puVar13[2];
      puVar15[1] = puVar13[1];
      *puVar15 = uVar21;
      uVar21 = *puVar15;
      puVar15[2] = uVar19;
      if (uVar21 < puVar15[-3]) {
        uStack_78 = puVar13[2];
        local_80 = puVar13[1];
        lVar10 = lVar20;
        puVar13 = puVar14;
        do {
          puVar15 = puVar13 + uVar7 * 3;
          puVar15[1] = puVar15[-2];
          *puVar15 = puVar15[-3];
          puVar15[2] = puVar15[-1];
          puVar18 = puVar9;
          if (uVar7 * 0x18 - lVar10 == 0) goto LAB_006cd684;
          puVar13 = puVar13 + -3;
          lVar10 = lVar10 + 0x18;
        } while (uVar21 < puVar15[-6]);
        puVar18 = puVar13 + uVar7 * 3;
LAB_006cd684:
        *puVar18 = uVar21;
        puVar18[2] = uStack_78;
        puVar18[1] = local_80;
      }
      uVar8 = uVar8 + 1;
      puVar14 = puVar14 + 3;
      lVar20 = lVar20 + -0x18;
    } while (uVar8 != uVar11);
  }
  puVar15 = puVar9 + -3;
  lVar20 = param_2 * 0x18;
  puVar14 = param_3 + param_2 * 3 + -3;
  puVar13 = param_1;
  do {
    puVar18 = puVar13;
    lVar20 = lVar20 + -0x18;
    uVar12 = uVar12 - 1;
    bVar5 = *param_3 <= *puVar9;
    puVar13 = puVar9;
    if (bVar5) {
      puVar13 = param_3;
    }
    bVar6 = *puVar15 <= *puVar14;
    uVar11 = puVar13[1];
    uVar7 = *puVar13;
    puVar9 = puVar9 + (ulong)!bVar5 * 3;
    puVar16 = puVar15;
    if (bVar6) {
      puVar16 = puVar14;
    }
    puVar14 = puVar14 + (ulong)bVar6 * -3;
    uVar8 = puVar16[2];
    puVar15 = puVar15 + (ulong)!bVar6 * -3;
    puVar18[2] = puVar13[2];
    puVar13 = (ulong *)((long)param_1 + lVar20);
    puVar18[1] = uVar11;
    *puVar18 = uVar7;
    uVar11 = puVar16[1];
    uVar7 = *puVar16;
    param_3 = param_3 + (ulong)bVar5 * 3;
    puVar13[2] = uVar8;
    puVar13[1] = uVar11;
    *puVar13 = uVar7;
    puVar13 = puVar18 + 3;
  } while (uVar12 != 0);
  if ((param_2 & 1) != 0) {
    bVar5 = puVar15 + 3 <= param_3;
    puVar13 = param_3;
    if (bVar5) {
      puVar13 = puVar9;
    }
    param_3 = param_3 + (ulong)!bVar5 * 3;
    uVar7 = puVar13[1];
    uVar12 = *puVar13;
    puVar9 = puVar9 + (ulong)bVar5 * 3;
    puVar18[5] = puVar13[2];
    puVar18[4] = uVar7;
    puVar18[3] = uVar12;
  }
  if ((param_3 == puVar15 + 3) && (puVar9 == puVar14 + 3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006cd828 to 006cd82b has its CatchHandler @ 006cd848 */
  core::slice::sort::shared::smallsort::panic_on_ord_violation();
code_r0x006cd3b8:
  puVar13 = puVar13 + -3;
  puVar18 = puVar13 + uVar11 * 3;
  puVar15 = puVar14 + 1;
  uVar19 = *puVar14;
  uVar8 = puVar14[2];
  puVar14 = puVar14 + 3;
  puVar18[1] = *puVar15;
  *puVar18 = uVar19;
  puVar18[2] = uVar8;
  puVar15 = param_1 + param_2 * 3;
  uVar8 = param_2;
  if (puVar14 < puVar15) goto LAB_006cd37c;
  goto LAB_006cd3b0;
code_r0x006cd4c8:
  puVar18 = param_3 + uVar11 * 3;
  puVar15 = puVar15 + -3;
  puVar14 = puVar13 + 3;
  uVar7 = puVar13[1];
  uVar12 = *puVar13;
  uVar11 = uVar11 + 1;
  puVar18[2] = puVar13[2];
  puVar18[1] = uVar7;
  *puVar18 = uVar12;
  puVar18 = param_1 + param_2 * 3;
  puVar13 = puVar14;
  uVar12 = param_2;
  if (puVar14 < puVar18) goto LAB_006cd48c;
  goto LAB_006cd4c0;
}


// ===== 006cd868  core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::<addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> =====

/* core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::<addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,
   <[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
     <addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
               (ulong *param_1,ulong param_2,ulong *param_3,ulong param_4,int param_5,ulong *param_6
               ,undefined8 param_7)

{
  uint uVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar22 = param_2;
  if (0x20 < param_2) {
LAB_006cd908:
    do {
      if (param_5 == 0) {
        FUN_006cb854(param_1,uVar22,param_3,param_4,1,param_7);
        return;
      }
      puVar9 = param_1 + (uVar22 >> 3) * 0x1c;
      puVar12 = param_1 + (uVar22 >> 3) * 0x10;
      if (uVar22 < 0x40) {
        uVar21 = param_1[2];
        uVar8 = puVar12[2];
        uVar13 = *param_1;
        puVar6 = param_1;
        if (uVar8 <= uVar21) {
          uVar16 = puVar9[2];
          uVar17 = *puVar9;
          bVar4 = (uVar8 > uVar21 || uVar21 == uVar8) && uVar13 < *puVar12;
          if (uVar16 <= uVar21) {
            if (bVar4 == ((uVar16 > uVar21 || uVar21 == uVar16) && uVar13 < uVar17))
            goto LAB_006cd998;
          }
          else if (bVar4) goto LAB_006cd994;
        }
        else {
          uVar16 = puVar9[2];
          uVar17 = *puVar9;
          if ((uVar21 < uVar16) || ((uVar21 <= uVar16 && (uVar13 < uVar17)))) {
LAB_006cd994:
            bVar4 = true;
LAB_006cd998:
            puVar6 = puVar9;
            if (bVar4 == (uVar8 < uVar16 || uVar8 <= uVar16 && *puVar12 < uVar17)) {
              puVar6 = puVar12;
            }
          }
        }
      }
      else {
        puVar6 = (ulong *)FUN_006c9c50(param_1);
      }
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      uStack_68 = puVar6[3];
      uStack_70 = puVar6[2];
      puVar12 = param_3 + uVar22 * 4;
      uVar8 = (ulong)((long)puVar6 - (long)param_1) >> 5;
      param_5 = param_5 + -1;
      if (param_6 == (ulong *)0x0) {
LAB_006cda00:
        if (param_4 < uVar22) goto LAB_006cdfa8;
        param_2 = 0;
        puVar9 = param_1 + uVar8 * 4;
        puVar11 = param_1;
        puVar10 = param_1;
        puVar14 = puVar12;
        uVar13 = uVar8;
        if (param_1 < puVar9) goto LAB_006cda88;
LAB_006cdab8:
        if (uVar13 != uVar22) {
          puVar14 = puVar14 + -4;
          puVar10 = puVar11 + 4;
          uVar16 = *puVar11;
          uVar21 = puVar11[3];
          uVar13 = puVar11[2];
          puVar9 = puVar14 + param_2 * 4;
          puVar9[1] = puVar11[1];
          *puVar9 = uVar16;
          puVar9[3] = uVar21;
          puVar9[2] = uVar13;
          puVar9 = param_1 + uVar22 * 4;
          puVar11 = puVar10;
          uVar13 = uVar22;
          if (puVar10 < puVar9) {
LAB_006cda88:
            do {
              while( true ) {
                if (puVar6[2] <= puVar10[2]) break;
                puVar14 = puVar14 + -4;
                puVar11 = puVar10 + 4;
                uVar17 = *puVar10;
                uVar16 = puVar10[3];
                uVar21 = puVar10[2];
                puVar2 = param_3 + param_2 * 4;
                param_2 = param_2 + 1;
                puVar2[1] = puVar10[1];
                *puVar2 = uVar17;
                puVar2[3] = uVar16;
                puVar2[2] = uVar21;
                puVar10 = puVar11;
                if (puVar9 <= puVar11) goto LAB_006cdab8;
              }
              puVar14 = puVar14 + -4;
              uVar1 = (uint)(puVar10[2] <= puVar6[2] && *puVar10 < *puVar6);
              puVar2 = param_3;
              if (uVar1 == 0) {
                puVar2 = puVar14;
              }
              puVar11 = puVar10 + 4;
              uVar17 = *puVar10;
              uVar16 = puVar10[3];
              uVar21 = puVar10[2];
              puVar2 = puVar2 + param_2 * 4;
              param_2 = uVar1 + param_2;
              puVar2[1] = puVar10[1];
              *puVar2 = uVar17;
              puVar2[3] = uVar16;
              puVar2[2] = uVar21;
              puVar10 = puVar11;
            } while (puVar11 < puVar9);
          }
          goto LAB_006cdab8;
        }
        memcpy(param_1,param_3,param_2 << 5);
        lVar15 = uVar22 - param_2;
        if (lVar15 != 0) {
          puVar9 = param_3 + uVar22 * 4 + -4;
          lVar7 = lVar15;
          puVar11 = param_1 + param_2 * 4;
          do {
            uVar13 = *puVar9;
            uVar16 = puVar9[3];
            uVar21 = puVar9[2];
            lVar7 = lVar7 + -1;
            puVar11[1] = puVar9[1];
            *puVar11 = uVar13;
            puVar11[3] = uVar16;
            puVar11[2] = uVar21;
            puVar9 = puVar9 + -4;
            puVar11 = puVar11 + 4;
          } while (lVar7 != 0);
        }
        if (param_2 != 0) {
          if (uVar22 < param_2) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770c0);
          }
          <addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                    (param_1 + param_2 * 4,lVar15,param_3,param_4,param_5,&local_80,param_7);
          uVar22 = param_2;
          if (param_2 < 0x21) break;
          goto LAB_006cd908;
        }
      }
      else if ((param_6[2] < puVar6[2]) || ((param_6[2] <= puVar6[2] && (*param_6 < *puVar6))))
      goto LAB_006cda00;
      if (param_4 < uVar22) goto LAB_006cdfa8;
      uVar13 = 0;
      puVar9 = param_1 + uVar8 * 4;
      puVar11 = param_1;
      puVar10 = param_1;
      if (param_1 < puVar9) goto LAB_006cdbc8;
LAB_006cdbf4:
      if (uVar8 != uVar22) {
        puVar10 = puVar11 + 4;
        uVar16 = *puVar11;
        uVar21 = puVar11[3];
        uVar8 = puVar11[2];
        puVar9 = param_3 + uVar13 * 4;
        puVar12 = puVar12 + -4;
        uVar13 = uVar13 + 1;
        puVar9[1] = puVar11[1];
        *puVar9 = uVar16;
        puVar9[3] = uVar21;
        puVar9[2] = uVar8;
        puVar9 = param_1 + uVar22 * 4;
        puVar11 = puVar10;
        uVar8 = uVar22;
        if (puVar10 < puVar9) {
LAB_006cdbc8:
          do {
            while( true ) {
              uVar21 = puVar10[2];
              uVar16 = puVar6[2];
              if (uVar21 <= uVar16) break;
              puVar12 = puVar12 + -4;
              puVar11 = puVar10 + 4;
              uVar17 = *puVar10;
              uVar16 = puVar10[3];
              uVar21 = puVar10[2];
              puVar14 = puVar12 + uVar13 * 4;
              puVar14[1] = puVar10[1];
              *puVar14 = uVar17;
              puVar14[3] = uVar16;
              puVar14[2] = uVar21;
              puVar10 = puVar11;
              if (puVar9 <= puVar11) goto LAB_006cdbf4;
            }
            puVar12 = puVar12 + -4;
            puVar14 = param_3;
            if (uVar21 >= uVar16 && *puVar10 > *puVar6) {
              puVar14 = puVar12;
            }
            puVar11 = puVar10 + 4;
            uVar20 = *puVar10;
            uVar18 = puVar10[3];
            uVar17 = puVar10[2];
            puVar14 = puVar14 + uVar13 * 4;
            uVar13 = (uVar21 < uVar16 || *puVar10 <= *puVar6) + uVar13;
            puVar14[1] = puVar10[1];
            *puVar14 = uVar20;
            puVar14[3] = uVar18;
            puVar14[2] = uVar17;
            puVar10 = puVar11;
          } while (puVar11 < puVar9);
        }
        goto LAB_006cdbf4;
      }
      memcpy(param_1,param_3,uVar13 << 5);
      param_2 = uVar22 - uVar13;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar13 * 4;
      puVar12 = param_3 + uVar22 * 4 + -4;
      uVar8 = param_2;
      puVar9 = param_1;
      do {
        uVar21 = *puVar12;
        uVar17 = puVar12[3];
        uVar16 = puVar12[2];
        uVar8 = uVar8 - 1;
        puVar9[1] = puVar12[1];
        *puVar9 = uVar21;
        puVar9[3] = uVar17;
        puVar9[2] = uVar16;
        puVar12 = puVar12 + -4;
        puVar9 = puVar9 + 4;
      } while (uVar8 != 0);
      if (uVar22 < uVar13) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar13,uVar22,uVar22,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770d8);
      }
      param_6 = (ulong *)0x0;
      uVar22 = param_2;
    } while (0x20 < param_2);
  }
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
LAB_006cdfa8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x6cdfac);
    (*pcVar3)();
  }
  uVar22 = param_2 >> 1;
  puVar12 = param_1 + uVar22 * 4;
  puVar9 = param_3 + uVar22 * 4;
  if (param_2 < 8) {
    uVar17 = param_1[1];
    uVar16 = *param_1;
    uVar13 = param_1[2];
    uVar8 = 1;
    param_3[3] = param_1[3];
    param_3[2] = uVar13;
    uVar20 = puVar12[1];
    uVar18 = *puVar12;
    uVar21 = puVar12[3];
    uVar13 = puVar12[2];
    param_3[1] = uVar17;
    *param_3 = uVar16;
    puVar9[1] = uVar20;
    *puVar9 = uVar18;
    puVar9[3] = uVar21;
    puVar9[2] = uVar13;
    uVar13 = param_2 - uVar22;
    if (uVar22 < 2) goto LAB_006cdd5c;
  }
  else {
    FUN_006c9f18(param_1,param_3);
    FUN_006c9f18(puVar12,puVar9);
    uVar8 = 4;
    uVar13 = param_2 - uVar22;
    if (uVar22 < 5) goto LAB_006cdd5c;
  }
  lVar15 = uVar8 << 5;
  uVar21 = uVar8;
  do {
    puVar6 = param_1 + uVar21 * 4;
    puVar11 = param_3 + uVar21 * 4;
    uVar18 = *puVar6;
    uVar17 = puVar6[3];
    uVar16 = puVar6[2];
    puVar10 = puVar11 + -4;
    puVar11[1] = puVar6[1];
    *puVar11 = uVar18;
    puVar11[3] = uVar17;
    puVar11[2] = uVar16;
    uVar16 = puVar11[2];
    uVar17 = *puVar11;
    if ((uVar16 < puVar11[-2]) || ((uVar16 <= puVar11[-2] && (uVar17 < *puVar10)))) {
      uVar18 = puVar11[1];
      uVar20 = puVar11[3];
      puVar11[1] = puVar11[-3];
      *puVar11 = *puVar10;
      puVar11[3] = puVar11[-1];
      puVar11[2] = puVar11[-2];
      lVar7 = lVar15;
      if (uVar21 != 1) {
        do {
          uVar5 = *(ulong *)((long)param_3 + lVar7 + -0x30);
          puVar6 = (ulong *)((long)param_3 + lVar7 + -0x40);
          if ((uVar5 <= uVar16) && ((uVar5 < uVar16 || (*puVar6 <= uVar17)))) {
            puVar10 = (ulong *)((long)param_3 + lVar7 + -0x20);
            break;
          }
          lVar19 = lVar7 + -0x20;
          *(undefined8 *)((long)param_3 + lVar7 + -0x18) =
               *(undefined8 *)((long)param_3 + lVar7 + -0x38);
          *(ulong *)((long)param_3 + lVar7 + -0x20) = *puVar6;
          *(undefined8 *)((long)param_3 + lVar7 + -8) =
               *(undefined8 *)((long)param_3 + lVar7 + -0x28);
          *(undefined8 *)((long)param_3 + lVar7 + -0x10) =
               *(undefined8 *)((long)param_3 + lVar7 + -0x30);
          puVar10 = param_3;
          lVar7 = lVar19;
        } while (lVar19 != 0x20);
      }
      *puVar10 = uVar17;
      puVar10[1] = uVar18;
      puVar10[2] = uVar16;
      puVar10[3] = uVar20;
    }
    uVar21 = uVar21 + 1;
    lVar15 = lVar15 + 0x20;
  } while (uVar21 != uVar22);
LAB_006cdd5c:
  if (uVar8 < uVar13) {
    lVar15 = 0x20;
    uVar21 = uVar8;
    puVar6 = puVar9;
    do {
      puVar11 = puVar12 + uVar21 * 4;
      puVar10 = puVar9 + uVar21 * 4;
      uVar18 = *puVar11;
      uVar17 = puVar11[3];
      uVar16 = puVar11[2];
      puVar14 = puVar10 + -4;
      puVar10[1] = puVar11[1];
      *puVar10 = uVar18;
      puVar10[3] = uVar17;
      puVar10[2] = uVar16;
      uVar16 = puVar10[2];
      uVar17 = *puVar10;
      if ((uVar16 < puVar10[-2]) || ((uVar16 <= puVar10[-2] && (uVar17 < *puVar14)))) {
        uVar18 = puVar10[1];
        uVar20 = puVar10[3];
        puVar10[1] = puVar10[-3];
        *puVar10 = *puVar14;
        puVar10[3] = puVar10[-1];
        puVar10[2] = puVar10[-2];
        lVar7 = lVar15;
        puVar11 = puVar6;
        if (uVar21 != 1) {
          do {
            if ((puVar11[uVar8 * 4 + -6] <= uVar16) &&
               ((puVar11[uVar8 * 4 + -6] < uVar16 || (puVar11[uVar8 * 4 + -8] <= uVar17)))) {
              puVar14 = puVar11 + uVar8 * 4 + -4;
              break;
            }
            lVar7 = lVar7 + 0x20;
            puVar11[uVar8 * 4 + -3] = puVar11[uVar8 * 4 + -7];
            puVar11[uVar8 * 4 + -4] = puVar11[uVar8 * 4 + -8];
            puVar11[uVar8 * 4 + -1] = puVar11[uVar8 * 4 + -5];
            puVar11[uVar8 * 4 + -2] = puVar11[uVar8 * 4 + -6];
            puVar14 = puVar9;
            puVar11 = puVar11 + -4;
          } while (uVar8 * 0x20 - lVar7 != 0);
        }
        *puVar14 = uVar17;
        puVar14[1] = uVar18;
        puVar14[2] = uVar16;
        puVar14[3] = uVar20;
      }
      uVar21 = uVar21 + 1;
      puVar6 = puVar6 + 4;
      lVar15 = lVar15 + -0x20;
    } while (uVar21 != uVar13);
  }
  lVar15 = param_2 * 0x20;
  puVar6 = puVar9 + -4;
  puVar12 = param_3 + param_2 * 4 + -4;
  puVar11 = param_1;
  do {
    puVar10 = puVar11;
    lVar15 = lVar15 + -0x20;
    puVar11 = puVar6;
    if (puVar9[2] < param_3[2]) {
      uVar8 = 1;
      uVar13 = puVar12[2];
      uVar21 = puVar6[2];
      uVar18 = *puVar9;
      uVar17 = puVar9[3];
      uVar16 = puVar9[2];
      puVar10[1] = puVar9[1];
      *puVar10 = uVar18;
      puVar10[3] = uVar17;
      puVar10[2] = uVar16;
      if (uVar21 <= uVar13) goto LAB_006cde58;
LAB_006cdf24:
      bVar4 = true;
    }
    else {
      uVar1 = (uint)(puVar9[2] <= param_3[2] && *puVar9 < *param_3);
      uVar8 = (ulong)uVar1;
      puVar14 = puVar9;
      if (uVar1 == 0) {
        puVar14 = param_3;
      }
      uVar13 = puVar12[2];
      uVar21 = puVar6[2];
      uVar18 = *puVar14;
      uVar17 = puVar14[3];
      uVar16 = puVar14[2];
      puVar10[1] = puVar14[1];
      *puVar10 = uVar18;
      puVar10[3] = uVar17;
      puVar10[2] = uVar16;
      if (uVar13 < uVar21) goto LAB_006cdf24;
LAB_006cde58:
      bVar4 = uVar13 <= uVar21 && *puVar12 < *puVar6;
      if (uVar13 > uVar21 || *puVar12 >= *puVar6) {
        puVar11 = puVar12;
      }
    }
    puVar14 = (ulong *)((long)param_1 + lVar15);
    uVar13 = *puVar11;
    uVar16 = puVar11[3];
    uVar21 = puVar11[2];
    puVar9 = puVar9 + uVar8 * 4;
    puVar2 = puVar12 + (ulong)bVar4 * 4;
    param_3 = param_3 + ((ulong)~(uint)uVar8 & 1) * 4;
    puVar6 = puVar6 + (ulong)bVar4 * -4;
    uVar22 = uVar22 - 1;
    puVar12 = puVar2 + -4;
    puVar14[1] = puVar11[1];
    *puVar14 = uVar13;
    puVar14[3] = uVar16;
    puVar14[2] = uVar21;
    puVar11 = puVar10 + 4;
    if (uVar22 == 0) {
      if ((param_2 & 1) != 0) {
        bVar4 = puVar6 + 4 <= param_3;
        puVar12 = param_3;
        if (bVar4) {
          puVar12 = puVar9;
        }
        uVar13 = *puVar12;
        uVar8 = puVar12[3];
        uVar22 = puVar12[2];
        param_3 = param_3 + (ulong)!bVar4 * 4;
        puVar9 = puVar9 + (ulong)bVar4 * 4;
        puVar10[5] = puVar12[1];
        puVar10[4] = uVar13;
        puVar10[7] = uVar8;
        puVar10[6] = uVar22;
      }
      if ((param_3 == puVar6 + 4) && (puVar9 == puVar2)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006cdfa4 to 006cdfa7 has its CatchHandler @ 006cdfc4 */
      core::slice::sort::shared::smallsort::panic_on_ord_violation();
    }
  } while( true );
}


// ===== 006cdfe0  core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::<(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> =====

/* core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::<(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,
   gimli[d400ddce60e1bc02]::common::DebugArangesOffset),
   <[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,
   gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,
   <addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void core[188d2c0002da36d0]::slice::sort::stable::quicksort::quicksort::
     <(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
               (ulong *param_1,ulong param_2,ulong *param_3,ulong param_4,int param_5,ulong *param_6
               ,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong local_70;
  ulong uStack_68;
  
  if (0x20 < param_2) {
    do {
      if (param_5 == 0) {
        FUN_006cbe28(param_1,param_2,param_3,param_4,1,param_7);
        return;
      }
      if (param_2 < 0x40) {
        uVar23 = *param_1;
        uVar9 = param_1[(param_2 >> 3) * 8];
        uVar12 = param_1[(param_2 >> 3) * 0xe];
        puVar11 = param_1 + (param_2 >> 3) * 0xe;
        if (uVar23 < uVar9 == uVar9 < uVar12) {
          puVar11 = param_1 + (param_2 >> 3) * 8;
        }
        puVar6 = param_1;
        if (uVar23 < uVar9 == uVar23 < uVar12) {
          puVar6 = puVar11;
        }
      }
      else {
        puVar6 = (ulong *)FUN_006c9e4c(param_1);
      }
      uVar9 = (long)puVar6 - (long)param_1;
      uStack_68 = puVar6[1];
      local_70 = *puVar6;
      uVar23 = uVar9 >> 4;
      puVar11 = param_3 + param_2 * 2;
      param_5 = param_5 + -1;
      if ((param_6 == (ulong *)0x0) || (*param_6 < *puVar6)) {
        if (param_2 <= param_4) {
          uVar12 = 0;
          lVar15 = 0;
          if (2 < uVar23) {
            lVar15 = uVar23 - 3;
          }
          puVar10 = param_1 + lVar15 * 2;
          puVar8 = puVar11;
          puVar6 = param_1;
          uVar14 = uVar23;
          if (puVar10 <= param_1) goto LAB_006ce1cc;
LAB_006ce140:
          do {
            puVar22 = puVar8 + -2;
            uVar21 = puVar6[2];
            uVar16 = *(ulong *)((long)param_1 + uVar9);
            uVar18 = *puVar6;
            puVar13 = puVar8 + -4;
            uVar19 = uVar12;
            if (*puVar6 < *(ulong *)((long)param_1 + uVar9)) {
              uVar19 = uVar12 + 1;
              puVar22 = param_3;
            }
            uVar17 = puVar6[4];
            uVar20 = *(ulong *)((long)param_1 + uVar9);
            (puVar22 + uVar12 * 2)[1] = puVar6[1];
            puVar22[uVar12 * 2] = uVar18;
            uVar18 = uVar19;
            if (uVar21 < uVar16) {
              uVar18 = uVar19 + 1;
              puVar13 = param_3;
            }
            uVar12 = puVar6[2];
            bVar4 = uVar20 <= uVar17;
            (puVar13 + uVar19 * 2)[1] = puVar6[3];
            puVar13[uVar19 * 2] = uVar12;
            puVar22 = param_3;
            if (bVar4) {
              puVar22 = puVar8 + -6;
            }
            uVar19 = puVar6[6];
            uVar21 = *(ulong *)((long)param_1 + uVar9);
            uVar12 = puVar6[4];
            puVar8 = puVar8 + -8;
            (puVar22 + uVar18 * 2)[1] = puVar6[5];
            puVar22[uVar18 * 2] = uVar12;
            if (!bVar4) {
              uVar18 = uVar18 + 1;
            }
            puVar22 = puVar6 + 7;
            uVar16 = puVar6[6];
            puVar6 = puVar6 + 8;
            uVar12 = uVar18;
            puVar13 = puVar8;
            if (uVar19 < uVar21) {
              uVar12 = uVar18 + 1;
              puVar13 = param_3;
            }
            (puVar13 + uVar18 * 2)[1] = *puVar22;
            puVar13[uVar18 * 2] = uVar16;
          } while (puVar6 < puVar10);
LAB_006ce1cc:
          puVar10 = puVar6;
          while (puVar10 < param_1 + uVar14 * 2) {
            puVar8 = puVar8 + -2;
            puVar22 = puVar10 + 2;
            uVar19 = *puVar10;
            bVar4 = *(ulong *)((long)param_1 + uVar9) <= *puVar10;
            puVar6 = param_3;
            if (bVar4) {
              puVar6 = puVar8;
            }
            (puVar6 + uVar12 * 2)[1] = puVar10[1];
            puVar6[uVar12 * 2] = uVar19;
            puVar10 = puVar22;
            if (!bVar4) {
              uVar12 = uVar12 + 1;
            }
          }
          if (uVar14 != param_2) goto code_r0x006ce210;
          memcpy(param_1,param_3,uVar12 << 4);
          lVar15 = param_2 - uVar12;
          if (lVar15 != 0) {
            puVar6 = param_3 + param_2 * 2 + -2;
            lVar7 = lVar15;
            puVar10 = param_1 + uVar12 * 2;
            do {
              uVar14 = *puVar6;
              lVar7 = lVar7 + -1;
              puVar10[1] = puVar6[1];
              *puVar10 = uVar14;
              puVar6 = puVar6 + -2;
              puVar10 = puVar10 + 2;
            } while (lVar7 != 0);
          }
          if (uVar12 == 0) goto LAB_006ce2a8;
          if (param_2 < uVar12) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770c0);
          }
          <(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                    (param_1 + uVar12 * 2,lVar15,param_3,param_4,param_5,&local_70,param_7);
          param_2 = uVar12;
          goto joined_r0x006ce414;
        }
        goto LAB_006ce7b0;
      }
LAB_006ce2a8:
      if (param_4 < param_2) goto LAB_006ce7b0;
      uVar12 = 0;
      lVar15 = 0;
      if (2 < uVar23) {
        lVar15 = uVar23 - 3;
      }
      puVar10 = param_1 + lVar15 * 2;
      puVar6 = param_1;
      if (puVar10 <= param_1) goto LAB_006ce358;
LAB_006ce2cc:
      do {
        puVar8 = puVar11 + -2;
        uVar19 = puVar6[2];
        uVar21 = *(ulong *)((long)param_1 + uVar9);
        uVar16 = *puVar6;
        puVar22 = puVar11 + -4;
        uVar14 = uVar12;
        if (*puVar6 <= *(ulong *)((long)param_1 + uVar9)) {
          uVar14 = uVar12 + 1;
          puVar8 = param_3;
        }
        uVar18 = puVar6[4];
        uVar17 = *(ulong *)((long)param_1 + uVar9);
        (puVar8 + uVar12 * 2)[1] = puVar6[1];
        puVar8[uVar12 * 2] = uVar16;
        uVar16 = uVar14;
        if (uVar19 <= uVar21) {
          uVar16 = uVar14 + 1;
          puVar22 = param_3;
        }
        uVar12 = puVar6[2];
        bVar4 = uVar17 < uVar18;
        (puVar22 + uVar14 * 2)[1] = puVar6[3];
        puVar22[uVar14 * 2] = uVar12;
        puVar8 = param_3;
        if (bVar4) {
          puVar8 = puVar11 + -6;
        }
        uVar14 = puVar6[6];
        uVar19 = *(ulong *)((long)param_1 + uVar9);
        uVar12 = puVar6[4];
        puVar11 = puVar11 + -8;
        (puVar8 + uVar16 * 2)[1] = puVar6[5];
        puVar8[uVar16 * 2] = uVar12;
        if (!bVar4) {
          uVar16 = uVar16 + 1;
        }
        puVar8 = puVar6 + 7;
        uVar21 = puVar6[6];
        puVar6 = puVar6 + 8;
        uVar12 = uVar16;
        puVar22 = puVar11;
        if (uVar14 <= uVar19) {
          uVar12 = uVar16 + 1;
          puVar22 = param_3;
        }
        (puVar22 + uVar16 * 2)[1] = *puVar8;
        puVar22[uVar16 * 2] = uVar21;
      } while (puVar6 < puVar10);
LAB_006ce358:
      puVar10 = puVar6;
      while (puVar10 < param_1 + uVar23 * 2) {
        puVar11 = puVar11 + -2;
        puVar8 = puVar10 + 2;
        uVar14 = *puVar10;
        bVar4 = *(ulong *)((long)param_1 + uVar9) < *puVar10;
        puVar6 = param_3;
        if (bVar4) {
          puVar6 = puVar11;
        }
        (puVar6 + uVar12 * 2)[1] = puVar10[1];
        puVar6[uVar12 * 2] = uVar14;
        puVar10 = puVar8;
        if (!bVar4) {
          uVar12 = uVar12 + 1;
        }
      }
      if (uVar23 != param_2) goto code_r0x006ce39c;
      memcpy(param_1,param_3,uVar12 << 4);
      uVar23 = param_2 - uVar12;
      if (uVar23 == 0) {
        return;
      }
      param_1 = param_1 + uVar12 * 2;
      puVar6 = param_3 + param_2 * 2 + -2;
      uVar9 = uVar23;
      puVar11 = param_1;
      do {
        uVar14 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar11[1] = puVar6[1];
        *puVar11 = uVar14;
        puVar6 = puVar6 + -2;
        puVar11 = puVar11 + 2;
      } while (uVar9 != 0);
      if (param_2 < uVar12) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar12,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770d8);
      }
      param_6 = (ulong *)0x0;
      param_2 = uVar23;
joined_r0x006ce414:
      if (param_2 < 0x21) break;
    } while( true );
  }
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
LAB_006ce7b0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x6ce7b4);
    (*pcVar3)();
  }
  uVar23 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar12 = *param_1;
      uVar19 = (param_1 + uVar23 * 2)[1];
      uVar14 = param_1[uVar23 * 2];
      uVar9 = 1;
      param_3[1] = param_1[1];
      *param_3 = uVar12;
      (param_3 + uVar23 * 2)[1] = uVar19;
      param_3[uVar23 * 2] = uVar14;
      uVar12 = param_2 - uVar23;
      if (uVar23 < 2) goto LAB_006ce62c;
    }
    else {
      puVar6 = param_1 + (ulong)(*param_1 <= param_1[2]) * 2;
      lVar15 = 0x20;
      if (param_1[4] <= param_1[6]) {
        lVar15 = 0x30;
      }
      puVar11 = param_1 + (ulong)(*param_1 > param_1[2]) * 2;
      lVar7 = 0x30;
      if (param_1[4] <= param_1[6]) {
        lVar7 = 0x20;
      }
      puVar10 = (ulong *)((long)param_1 + lVar15);
      puVar8 = (ulong *)((long)param_1 + lVar7);
      uVar9 = *puVar10;
      uVar12 = *puVar6;
      puVar22 = puVar8;
      if (uVar12 <= uVar9) {
        puVar22 = puVar6;
      }
      puVar13 = puVar6;
      if (*puVar11 <= *puVar8) {
        puVar13 = puVar8;
        puVar8 = puVar11;
        puVar11 = puVar22;
      }
      puVar22 = param_1 + uVar23 * 2;
      puVar2 = puVar10;
      if (uVar12 <= uVar9) {
        puVar2 = puVar13;
      }
      if (uVar12 <= uVar9) {
        puVar6 = puVar10;
      }
      uVar9 = *puVar8;
      uVar14 = puVar6[1];
      uVar12 = *puVar6;
      puVar6 = puVar11;
      if (*puVar11 <= *puVar2) {
        puVar6 = puVar2;
        puVar2 = puVar11;
      }
      puVar11 = puVar22 + (ulong)(*puVar22 <= puVar22[2]) * 2;
      lVar15 = 0x20;
      if (puVar22[4] <= puVar22[6]) {
        lVar15 = 0x30;
      }
      puVar10 = puVar22 + (ulong)(*puVar22 > puVar22[2]) * 2;
      lVar7 = 0x30;
      if (puVar22[4] <= puVar22[6]) {
        lVar7 = 0x20;
      }
      puVar13 = (ulong *)((long)puVar22 + lVar15);
      uVar20 = puVar2[1];
      uVar17 = *puVar2;
      puVar22 = (ulong *)((long)puVar22 + lVar7);
      uVar16 = *puVar13;
      uVar18 = *puVar11;
      uVar19 = *puVar22;
      uVar21 = *puVar10;
      uVar25 = puVar6[1];
      uVar24 = *puVar6;
      param_3[1] = puVar8[1];
      *param_3 = uVar9;
      param_3[3] = uVar20;
      param_3[2] = uVar17;
      puVar6 = puVar22;
      if (uVar18 <= uVar16) {
        puVar6 = puVar11;
      }
      param_3[5] = uVar25;
      param_3[4] = uVar24;
      param_3[7] = uVar14;
      param_3[6] = uVar12;
      puVar8 = puVar11;
      puVar2 = puVar10;
      if (uVar21 <= uVar19) {
        puVar8 = puVar22;
        puVar2 = puVar6;
        puVar22 = puVar10;
      }
      uVar9 = *puVar22;
      if (uVar18 <= uVar16) {
        puVar11 = puVar13;
        puVar13 = puVar8;
      }
      puVar6 = param_3 + uVar23 * 2;
      puVar10 = puVar2;
      if (*puVar2 <= *puVar13) {
        puVar10 = puVar13;
        puVar13 = puVar2;
      }
      uVar14 = puVar13[1];
      uVar12 = *puVar13;
      uVar21 = puVar10[1];
      uVar19 = *puVar10;
      puVar6[1] = puVar22[1];
      *puVar6 = uVar9;
      puVar6[3] = uVar14;
      puVar6[2] = uVar12;
      uVar14 = puVar11[1];
      uVar12 = *puVar11;
      uVar9 = 4;
      puVar6[5] = uVar21;
      puVar6[4] = uVar19;
      puVar6[7] = uVar14;
      puVar6[6] = uVar12;
      uVar12 = param_2 - uVar23;
      if (uVar23 < 5) goto LAB_006ce62c;
    }
  }
  else {
    FUN_006ca094(param_1,param_3,param_3 + param_2 * 2);
    FUN_006ca094(param_1 + uVar23 * 2,param_3 + uVar23 * 2,param_3 + param_2 * 2 + 0x10);
    uVar9 = 8;
    uVar12 = param_2 - uVar23;
    if (uVar23 < 9) goto LAB_006ce62c;
  }
  lVar15 = uVar9 << 4;
  uVar14 = uVar9;
  do {
    uVar19 = param_1[uVar14 * 2];
    puVar6 = param_3 + uVar14 * 2;
    puVar6[1] = (param_1 + uVar14 * 2)[1];
    *puVar6 = uVar19;
    uVar19 = *puVar6;
    if (uVar19 < puVar6[-2]) {
      uVar21 = puVar6[1];
      lVar7 = lVar15;
      do {
        puVar1 = (undefined8 *)((long)param_3 + lVar7);
        lVar7 = lVar7 + -0x10;
        puVar1[1] = puVar1[-1];
        *puVar1 = puVar1[-2];
        puVar6 = param_3;
        if (lVar7 == 0) goto LAB_006ce5c8;
      } while (uVar19 < (ulong)puVar1[-4]);
      puVar6 = (ulong *)((long)param_3 + lVar7);
LAB_006ce5c8:
      *puVar6 = uVar19;
      puVar6[1] = uVar21;
    }
    uVar14 = uVar14 + 1;
    lVar15 = lVar15 + 0x10;
  } while (uVar14 != uVar23);
LAB_006ce62c:
  puVar6 = param_3 + uVar23 * 2;
  if (uVar9 < uVar12) {
    lVar15 = 0x10;
    uVar14 = uVar9;
    puVar11 = puVar6;
    do {
      uVar19 = param_1[uVar23 * 2 + uVar14 * 2];
      puVar10 = puVar6 + uVar14 * 2;
      puVar10[1] = (param_1 + uVar23 * 2 + uVar14 * 2)[1];
      *puVar10 = uVar19;
      uVar19 = *puVar10;
      if (uVar19 < puVar10[-2]) {
        uVar21 = puVar10[1];
        lVar7 = lVar15;
        puVar10 = puVar11;
        do {
          puVar8 = puVar10 + uVar9 * 2;
          puVar8[1] = puVar8[-1];
          *puVar8 = puVar8[-2];
          puVar22 = puVar6;
          if (uVar9 * 0x10 - lVar7 == 0) goto LAB_006ce650;
          puVar10 = puVar10 + -2;
          lVar7 = lVar7 + 0x10;
        } while (uVar19 < puVar8[-4]);
        puVar22 = puVar10 + uVar9 * 2;
LAB_006ce650:
        *puVar22 = uVar19;
        puVar22[1] = uVar21;
      }
      uVar14 = uVar14 + 1;
      puVar11 = puVar11 + 2;
      lVar15 = lVar15 + -0x10;
    } while (uVar14 != uVar12);
  }
  lVar15 = param_2 * 0x10;
  puVar10 = puVar6 + -2;
  puVar11 = param_3 + param_2 * 2 + -2;
  puVar8 = param_1;
  do {
    puVar22 = puVar8;
    lVar15 = lVar15 + -0x10;
    uVar23 = uVar23 - 1;
    bVar4 = *param_3 <= *puVar6;
    puVar8 = puVar6;
    if (bVar4) {
      puVar8 = param_3;
    }
    bVar5 = *puVar10 <= *puVar11;
    uVar9 = *puVar8;
    puVar6 = puVar6 + (ulong)!bVar4 * 2;
    param_3 = param_3 + (ulong)bVar4 * 2;
    puVar13 = puVar10;
    if (bVar5) {
      puVar13 = puVar11;
    }
    puVar22[1] = puVar8[1];
    *puVar22 = uVar9;
    uVar9 = *puVar13;
    puVar11 = puVar11 + (ulong)bVar5 * -2;
    puVar10 = puVar10 + (ulong)!bVar5 * -2;
    ((ulong *)((long)param_1 + lVar15))[1] = puVar13[1];
    *(ulong *)((long)param_1 + lVar15) = uVar9;
    puVar8 = puVar22 + 2;
  } while (uVar23 != 0);
  if ((param_2 & 1) != 0) {
    bVar4 = puVar10 + 2 <= param_3;
    puVar8 = param_3;
    if (bVar4) {
      puVar8 = puVar6;
    }
    uVar23 = *puVar8;
    param_3 = param_3 + (ulong)!bVar4 * 2;
    puVar6 = puVar6 + (ulong)bVar4 * 2;
    puVar22[3] = puVar8[1];
    puVar22[2] = uVar23;
  }
  if ((param_3 == puVar10 + 2) && (puVar6 == puVar11 + 2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006ce7ac to 006ce7af has its CatchHandler @ 006ce7cc */
  core::slice::sort::shared::smallsort::panic_on_ord_violation();
code_r0x006ce210:
  puVar8 = puVar8 + -2;
  puVar6 = puVar10 + 2;
  uVar14 = *puVar10;
  (puVar8 + uVar12 * 2)[1] = puVar10[1];
  puVar8[uVar12 * 2] = uVar14;
  lVar15 = 0;
  if (2 < param_2) {
    lVar15 = param_2 - 3;
  }
  puVar10 = param_1 + lVar15 * 2;
  uVar14 = param_2;
  if (puVar6 < puVar10) goto LAB_006ce140;
  goto LAB_006ce1cc;
code_r0x006ce39c:
  puVar6 = puVar10 + 2;
  uVar23 = *puVar10;
  puVar11 = puVar11 + -2;
  (param_3 + uVar12 * 2)[1] = puVar10[1];
  param_3[uVar12 * 2] = uVar23;
  uVar12 = uVar12 + 1;
  lVar15 = 0;
  if (2 < param_2) {
    lVar15 = param_2 - 3;
  }
  puVar10 = param_1 + lVar15 * 2;
  uVar23 = param_2;
  if (puVar6 < puVar10) goto LAB_006ce2cc;
  goto LAB_006ce358;
}


// ===== 006ce7e8  core::slice::sort::unstable::heapsort::heapsort<std::backtrace_rs::symbolize::gimli::elf::ParsedSym,<core::slice::[{backref_15}]>::sort_unstable_by_key<u64,<{backref_23}::{backref_23}::Object>::parse::{closure#0}>::{closure#0}> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::unstable::heapsort::heapsort<std::backtrace_rs::symbolize::gimli::elf::ParsedSym,
   <core::slice::[{backref 15}]>::sort_unstable_by_key<u64, <{backref 23}::{backref
   23}::Object>::parse::{closure#0}>::{closure#0}> */

void __rustcall
core::slice::sort::unstable::heapsort::
heapsort<std::backtrace_rs::symbolize::gimli::elf::ParsedSym,<core::slice::[_backref_15_]>::sort_unstable_by_key<u64,<_backref_23_::_backref_23_::Object>::parse::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  uVar2 = param_2 + (param_2 >> 1);
  do {
    if (uVar2 == 0) {
      return;
    }
    uVar2 = uVar2 - 1;
    uVar4 = uVar2 - param_2;
    if (uVar2 < param_2) {
      puVar3 = param_1 + uVar2 * 3;
      uVar16 = param_1[1];
      uVar14 = *param_1;
      uVar7 = param_1[2];
      uVar4 = 0;
      uVar11 = *puVar3;
      uVar6 = puVar3[2];
      param_1[1] = puVar3[1];
      *param_1 = uVar11;
      param_1[2] = uVar6;
      puVar3[1] = uVar16;
      *puVar3 = uVar14;
      puVar3[2] = uVar7;
    }
    uVar1 = param_2;
    if (uVar2 <= param_2) {
      uVar1 = uVar2;
    }
    while (uVar8 = (uVar4 & 0x3fffffffffffffff) << 1 | 1, uVar8 < uVar1) {
      uVar10 = uVar4 * 2 + 2;
      if ((uVar10 < uVar1) && ((ulong)param_1[uVar8 * 3] < (ulong)param_1[uVar10 * 3])) {
        uVar8 = uVar8 + 1;
        puVar9 = param_1 + uVar4 * 3;
        puVar5 = param_1 + uVar8 * 3;
        uVar4 = *puVar9;
        uVar10 = *puVar5;
        if (uVar10 <= uVar4) break;
      }
      else {
        puVar9 = param_1 + uVar4 * 3;
        puVar5 = param_1 + uVar8 * 3;
        uVar4 = *puVar9;
        uVar10 = *puVar5;
        if (uVar10 <= uVar4) break;
      }
      uVar13 = puVar5[2];
      uVar12 = puVar5[1];
      uVar17 = puVar9[2];
      uVar15 = puVar9[1];
      *puVar9 = uVar10;
      puVar9[2] = uVar13;
      puVar9[1] = uVar12;
      *puVar5 = uVar4;
      puVar5[2] = uVar17;
      puVar5[1] = uVar15;
      uVar4 = uVar8;
    }
  } while( true );
}


// ===== 006ce8ec  FUN_006ce8ec =====

void FUN_006ce8ec(ulong *param_1,ulong param_2,ulong *param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  puVar12 = param_1;
  if (0x20 < param_2) {
    do {
      while( true ) {
        if (param_4 == 0) {
          core::slice::sort::unstable::heapsort::
          heapsort<std::backtrace_rs::symbolize::gimli::elf::ParsedSym,<core::slice::[_backref_15_]>::sort_unstable_by_key<u64,<_backref_23_::_backref_23_::Object>::parse::_closure_0_>::_closure_0_>
                    (puVar12,param_2);
          return;
        }
        if (0x3f < param_2) break;
        uVar3 = *puVar12;
        uVar5 = puVar12[(param_2 >> 3) * 0xc];
        uVar6 = puVar12[(param_2 >> 3) * 0x15];
        puVar7 = puVar12 + (param_2 >> 3) * 0x15;
        if (uVar3 < uVar5 == uVar5 < uVar6) {
          puVar7 = puVar12 + (param_2 >> 3) * 0xc;
        }
        puVar11 = puVar12;
        if (uVar3 < uVar5 == uVar3 < uVar6) {
          puVar11 = puVar7;
        }
        lVar4 = (long)puVar11 - (long)puVar12;
        if (param_3 != (ulong *)0x0) goto LAB_006cea34;
LAB_006cea48:
        uVar15 = puVar12[1];
        uVar13 = *puVar12;
        puVar7 = (ulong *)((long)puVar12 + lVar4);
        uVar5 = puVar12[2];
        uVar6 = puVar7[2];
        uVar3 = 0;
        uVar14 = *puVar7;
        puVar12[1] = puVar7[1];
        *puVar12 = uVar14;
        puVar12[2] = uVar6;
        puVar7[2] = uVar5;
        puVar7[1] = uVar15;
        *puVar7 = uVar13;
        uVar5 = *puVar12;
        local_70 = puVar12[5];
        uStack_78 = puVar12[4];
        local_80 = puVar12[3];
        puVar7 = puVar12 + 6;
        lVar4 = param_2 * 0x18 + -0x30;
        lVar1 = param_2 * 0x18 + -0x48;
        do {
          lVar9 = lVar1;
          lVar10 = lVar4;
          puVar11 = puVar12 + uVar3 * 3 + 3;
          if (*puVar7 < uVar5) {
            uVar3 = uVar3 + 1;
          }
          uVar13 = *puVar11;
          uVar6 = puVar11[2];
          puVar7[-2] = puVar11[1];
          puVar7[-3] = uVar13;
          puVar7[-1] = uVar6;
          puVar8 = puVar7 + 3;
          uVar13 = puVar7[1];
          uVar6 = *puVar7;
          puVar11[2] = puVar7[2];
          puVar11[1] = uVar13;
          *puVar11 = uVar6;
          puVar7 = puVar8;
          lVar4 = lVar10 + -0x18;
          lVar1 = lVar9 + -0x18;
        } while (puVar8 < puVar12 + param_2 * 3);
        do {
          puVar7 = &local_80;
          if (lVar9 != 0) {
            puVar7 = puVar8;
          }
          puVar11 = puVar12 + uVar3 * 3 + 3;
          uVar6 = *puVar7;
          uVar14 = puVar11[1];
          uVar13 = *puVar11;
          puVar8[-1] = puVar11[2];
          puVar8[-2] = uVar14;
          puVar8[-3] = uVar13;
          uVar14 = puVar7[1];
          uVar13 = *puVar7;
          puVar11[2] = puVar7[2];
          puVar11[1] = uVar14;
          *puVar11 = uVar13;
          if (uVar6 < uVar5) {
            uVar3 = uVar3 + 1;
          }
          lVar10 = lVar10 + -0x18;
          puVar8 = puVar8 + 3;
          lVar9 = lVar9 + -0x18;
        } while (lVar10 != 0);
        if (param_2 <= uVar3) {
LAB_006cece8:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x6cecec);
          (*pcVar2)();
        }
        puVar7 = puVar12 + uVar3 * 3;
        uStack_78 = puVar12[1];
        local_80 = *puVar12;
        local_70 = puVar12[2];
        uVar6 = *puVar7;
        uVar5 = puVar7[2];
        param_1 = puVar7 + 3;
        puVar12[1] = puVar7[1];
        *puVar12 = uVar6;
        puVar12[2] = uVar5;
        puVar7[2] = local_70;
        param_2 = param_2 + ~uVar3;
        puVar7[1] = uStack_78;
        *puVar7 = local_80;
        FUN_006ce8ec(puVar12,uVar3,param_3,param_4 + -1,param_5);
        puVar12 = param_1;
        param_3 = puVar7;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto LAB_006ce91c;
      }
      lVar4 = FUN_006c9d7c(puVar12);
      lVar4 = lVar4 - (long)puVar12;
      if (param_3 == (ulong *)0x0) goto LAB_006cea48;
LAB_006cea34:
      puVar7 = (ulong *)((long)puVar12 + lVar4);
      if (*param_3 < *puVar7) goto LAB_006cea48;
      uVar15 = puVar12[1];
      uVar13 = *puVar12;
      uVar5 = puVar12[2];
      uVar3 = 0;
      uVar6 = puVar7[2];
      uVar14 = *puVar7;
      puVar12[1] = puVar7[1];
      *puVar12 = uVar14;
      puVar12[2] = uVar6;
      puVar7[2] = uVar5;
      puVar7[1] = uVar15;
      *puVar7 = uVar13;
      uVar5 = *puVar12;
      local_70 = puVar12[5];
      uStack_78 = puVar12[4];
      local_80 = puVar12[3];
      puVar7 = puVar12 + 6;
      lVar4 = param_2 * 0x18 + -0x30;
      lVar1 = param_2 * 0x18 + -0x48;
      do {
        lVar9 = lVar1;
        lVar10 = lVar4;
        puVar11 = puVar12 + uVar3 * 3 + 3;
        if (*puVar7 <= uVar5) {
          uVar3 = uVar3 + 1;
        }
        uVar13 = *puVar11;
        uVar6 = puVar11[2];
        puVar7[-2] = puVar11[1];
        puVar7[-3] = uVar13;
        puVar7[-1] = uVar6;
        puVar8 = puVar7 + 3;
        uVar13 = puVar7[1];
        uVar6 = *puVar7;
        puVar11[2] = puVar7[2];
        puVar11[1] = uVar13;
        *puVar11 = uVar6;
        puVar7 = puVar8;
        lVar4 = lVar10 + -0x18;
        lVar1 = lVar9 + -0x18;
      } while (puVar8 < puVar12 + param_2 * 3);
      do {
        puVar7 = &local_80;
        if (lVar9 != 0) {
          puVar7 = puVar8;
        }
        puVar11 = puVar12 + uVar3 * 3 + 3;
        uVar6 = *puVar7;
        uVar14 = puVar11[1];
        uVar13 = *puVar11;
        puVar8[-1] = puVar11[2];
        puVar8[-2] = uVar14;
        puVar8[-3] = uVar13;
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar11[2] = puVar7[2];
        puVar11[1] = uVar14;
        *puVar11 = uVar13;
        if (uVar6 <= uVar5) {
          uVar3 = uVar3 + 1;
        }
        lVar10 = lVar10 + -0x18;
        puVar8 = puVar8 + 3;
        lVar9 = lVar9 + -0x18;
      } while (lVar10 != 0);
      if (param_2 <= uVar3) goto LAB_006cece8;
      puVar7 = puVar12 + uVar3 * 3;
      local_70 = puVar12[2];
      uStack_78 = puVar12[1];
      local_80 = *puVar12;
      param_3 = (ulong *)0x0;
      param_2 = ~uVar3 + param_2;
      uVar5 = puVar7[1];
      uVar3 = *puVar7;
      puVar12[2] = puVar7[2];
      puVar12[1] = uVar5;
      *puVar12 = uVar3;
      param_1 = puVar7 + 3;
      puVar7[2] = local_70;
      puVar7[1] = uStack_78;
      *puVar7 = local_80;
      puVar12 = param_1;
      param_4 = param_4 + -1;
    } while (0x20 < param_2);
  }
LAB_006ce91c:
  FUN_006ca350(param_1,param_2);
  return;
}


// ===== 006cecec  FUN_006cecec =====

void FUN_006cecec(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

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
  uVar2 = 8;
  if (param_5 != 1) {
    uVar2 = 4;
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,param_4);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006ced78  FUN_006ced78 =====

undefined1  [16] FUN_006ced78(int param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong __n;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  __n = read(param_1,&local_90,0x20);
  if (__n == 0xffffffffffffffff) {
    piVar3 = (int *)__errno();
    puVar1 = PTR_PTR_0099f738;
    uVar5 = 1;
    do {
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      __n = (long)iVar2 << 0x20 | 2;
      local_70 = 1;
      uStack_68 = __n;
                    /* try { // try from 006cee64 to 006cee73 has its CatchHandler @ 006ceed8 */
      lVar4 = core::io::error::os_functions::get_os_functions();
      iVar2 = (**(code **)(lVar4 + 0x10))(iVar2);
      if (iVar2 == 0) goto LAB_006cee00;
      __n = read(param_1,&local_90,0x20);
    } while (__n == 0xffffffffffffffff);
  }
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770f0);
  }
  lVar4 = param_2[2];
  if ((ulong)(*param_2 - lVar4) < __n) {
    FUN_006cecec(param_2,lVar4,__n,1,1);
    lVar4 = param_2[2];
  }
  else if (__n == 0) goto LAB_006cedf4;
  memcpy((void *)(param_2[1] + lVar4),&local_90,__n);
LAB_006cedf4:
  uVar5 = 0;
  param_2[2] = lVar4 + __n;
LAB_006cee00:
  auVar6._8_8_ = __n;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


// ===== 006ceef0  FUN_006ceef0 =====

undefined1  [16] FUN_006ceef0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong __n;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  __n = read(0,&local_90,0x20);
  if (__n == 0xffffffffffffffff) {
    piVar3 = (int *)__errno();
    puVar1 = PTR_PTR_0099f738;
    uVar4 = 1;
    do {
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      __n = (long)iVar2 << 0x20 | 2;
      local_70 = 1;
      uStack_68 = __n;
                    /* try { // try from 006cefdc to 006cefeb has its CatchHandler @ 006cf050 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
      if (iVar2 == 0) goto LAB_006cef78;
      __n = read(0,&local_90,0x20);
    } while (__n == 0xffffffffffffffff);
  }
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770f0);
  }
  lVar5 = param_1[2];
  if ((ulong)(*param_1 - lVar5) < __n) {
    FUN_006cecec(param_1,lVar5,__n,1,1);
    lVar5 = param_1[2];
  }
  else if (__n == 0) goto LAB_006cef6c;
  memcpy((void *)(param_1[1] + lVar5),&local_90,__n);
LAB_006cef6c:
  uVar4 = 0;
  param_1[2] = lVar5 + __n;
LAB_006cef78:
  auVar6._8_8_ = __n;
  auVar6._0_8_ = uVar4;
  return auVar6;
}


// ===== 006cf068  FUN_006cf068 =====

undefined1  [16] FUN_006cf068(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong __n;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  piVar6 = (int *)*param_1;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  __n = read(*piVar6,&local_90,0x20);
  if (__n == 0xffffffffffffffff) {
    piVar3 = (int *)__errno();
    puVar1 = PTR_PTR_0099f738;
    uVar4 = 1;
    do {
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      __n = (long)iVar2 << 0x20 | 2;
      local_70 = 1;
      uStack_68 = __n;
                    /* try { // try from 006cf158 to 006cf167 has its CatchHandler @ 006cf1cc */
      lVar5 = core::io::error::os_functions::get_os_functions();
      iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
      if (iVar2 == 0) goto LAB_006cf0f4;
      __n = read(*piVar6,&local_90,0x20);
    } while (__n == 0xffffffffffffffff);
  }
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770f0);
  }
  lVar5 = param_2[2];
  if ((ulong)(*param_2 - lVar5) < __n) {
    FUN_006cecec(param_2,lVar5,__n,1,1);
    lVar5 = param_2[2];
  }
  else if (__n == 0) goto LAB_006cf0e8;
  memcpy((void *)(param_2[1] + lVar5),&local_90,__n);
LAB_006cf0e8:
  uVar4 = 0;
  param_2[2] = lVar5 + __n;
LAB_006cf0f4:
  auVar7._8_8_ = __n;
  auVar7._0_8_ = uVar4;
  return auVar7;
}


// ===== 006cf1e4  FUN_006cf1e4 =====

undefined1  [16] FUN_006cf1e4(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong __n;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  piVar6 = (int *)*param_1;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  __n = read(*piVar6,&local_90,0x20);
  if (__n == 0xffffffffffffffff) {
    piVar3 = (int *)__errno();
    puVar1 = PTR_PTR_0099f738;
    uVar4 = 1;
    do {
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      __n = (long)iVar2 << 0x20 | 2;
      local_70 = 1;
      uStack_68 = __n;
                    /* try { // try from 006cf2d4 to 006cf2e3 has its CatchHandler @ 006cf348 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
      if (iVar2 == 0) goto LAB_006cf270;
      __n = read(*piVar6,&local_90,0x20);
    } while (__n == 0xffffffffffffffff);
  }
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__rustc_48a229ceaefd4985c50990b14_009770f0);
  }
  lVar5 = param_2[2];
  if ((ulong)(*param_2 - lVar5) < __n) {
    FUN_006cecec(param_2,lVar5,__n,1,1);
    lVar5 = param_2[2];
  }
  else if (__n == 0) goto LAB_006cf264;
  memcpy((void *)(param_2[1] + lVar5),&local_90,__n);
LAB_006cf264:
  uVar4 = 0;
  param_2[2] = lVar5 + __n;
LAB_006cf270:
  auVar7._8_8_ = __n;
  auVar7._0_8_ = uVar4;
  return auVar7;
}


// ===== 006cf360  FUN_006cf360 =====

void FUN_006cf360(size_t *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 1;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(param_3,1);
  if (__dest != (void *)0x0) {
    *param_1 = param_3;
    param_1[1] = (size_t)__dest;
    memcpy(__dest,param_2,param_3);
    param_1[2] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,param_3);
}


// ===== 006cf3e0  FUN_006cf3e0 =====

void FUN_006cf3e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = __rustc::__rust_alloc(0x400,1);
  if (lVar1 != 0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x400;
    puVar2[4] = lVar1;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x400);
}


// ===== 006cf448  FUN_006cf448 =====

void FUN_006cf448(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined1 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  *param_1 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 1;
    puVar2[4] = 1;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
}


// ===== 006cf488  FUN_006cf488 =====

void FUN_006cf488(undefined8 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = __rustc::__rust_alloc(0x2000,1);
  if (lVar1 != 0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    *(long *)(puVar2 + 2) = lVar1;
    *(undefined8 *)(puVar2 + 4) = 0x2000;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x2000);
}


// ===== 006cf4f4  FUN_006cf4f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cf4f4(undefined8 *param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined2 local_1dc;
  int local_1d8;
  undefined4 local_1d4;
  undefined **local_1d0;
  undefined8 local_1c8;
  long local_1c0 [47];
  long local_48;
  undefined8 local_40;
  
  plVar4 = (long *)*param_1;
  puVar2 = (undefined4 *)*plVar4;
  puVar3 = (ulong *)plVar4[1];
  *plVar4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
  }
  local_1c8 = DAT_0045af82;
  local_1dc = 0;
  local_1e0 = 1;
  local_1e8 = _s__00373250;
  local_1c0[0] = CONCAT35(local_1c0[0]._5_3_,0x6d6f646e);
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(&local_48,&local_1c8,0xd);
  if (local_48 == 1) {
    ppuVar1 = &PTR_DAT_00977090;
    uVar5 = *puVar3;
  }
  else {
    FUN_006ea8b8(&local_1d8,local_40,&local_1e8);
    if (local_1d8 != 1) {
      *puVar2 = local_1d4;
      return;
    }
    uVar5 = *puVar3;
    ppuVar1 = local_1d0;
  }
  if (((uVar5 != 0) && (1 < (uVar5 & 3) - 2)) && ((uVar5 & 3) != 0)) {
    local_1c0[0] = uVar5 - 1;
    uVar5 = (ulong)local_1c8 >> 8;
    local_1c8 = CONCAT71((int7)uVar5,3);
                    /* try { // try from 006cf5d8 to 006cf5df has its CatchHandler @ 006cf628 */
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_1c0);
  }
  *puVar3 = (ulong)ppuVar1;
  *param_2 = 2;
  return;
}


// ===== 006cf630  FUN_006cf630 =====

void FUN_006cf630(undefined8 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  undefined8 uVar14;
  uint *local_70;
  uint *puStack_68;
  long local_60;
  undefined8 uStack_58;
  
  puVar10 = *(undefined8 **)*param_1;
  *(long *)*param_1 = 0;
  if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    std::sync::lazy_lock::panic_poisoned();
  }
  puVar12 = (uint *)puVar10[1];
  puVar11 = (uint *)*puVar10;
  uVar14 = puVar10[3];
  lVar13 = puVar10[2];
  do {
    if (DAT_009a6f28 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_009a6f28);
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006cf7b8;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x9a6f28,0x10);
    if (bVar3) {
      DAT_009a6f28 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006cf7b8:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    uVar6 = 0;
  }
  else {
                    /* try { // try from 006cf7bc to 006cf7bf has its CatchHandler @ 006cf7d8 */
    uVar6 = std::panicking::panic_count::is_zero_slow_path();
    uVar6 = uVar6 ^ 1;
  }
  if (lVar13 != 0) {
    puVar9 = puVar12;
    do {
      lVar7 = *(long *)(puVar9 + 2);
      local_70 = puVar9 + 8;
      if ((*puVar9 & 1) == 0) {
        lVar7 = FUN_00751e80();
      }
      lVar1 = 0;
      if (lVar7 != 0) {
        lVar1 = lVar7 + -1;
      }
                    /* try { // try from 006cf6e8 to 006cf6f3 has its CatchHandler @ 006cf7ec */
      FUN_006bde28(lVar1,&local_70,&DAT_00977008);
      puVar9 = puVar9 + 0xe;
    } while (puVar9 != puVar12 + lVar13 * 0xe);
  }
  local_70 = puVar11;
  puStack_68 = puVar12;
  local_60 = lVar13;
  uStack_58 = uVar14;
  if ((((uVar6 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
    DAT_009a6f2c = 1;
  }
  do {
    iVar5 = DAT_009a6f28;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x9a6f28,0x10);
    if (bVar3) {
      DAT_009a6f28 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 2) {
    syscall(0x62,&DAT_009a6f28,0x81,1);
  }
  puVar10[1] = puStack_68;
  *puVar10 = local_70;
  puVar10[3] = uStack_58;
  puVar10[2] = local_60;
  return;
}


// ===== 006cf814  FUN_006cf814 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cf814(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  pthread_key_t __key;
  void *pvVar5;
  uint7 uStack_37;
  byte local_14 [4];
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977120);
  }
  local_14[0] = 0;
  if (((int)DAT_009a6450 != 0) && (FUN_006bdbc4(local_14), (local_14[0] & 1) != 0)) {
    return;
  }
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 != (void *)0x0) goto LAB_006cf870;
LAB_006cf8cc:
    pvVar5 = (void *)FUN_006d2020();
    if (pvVar5 != DAT_009a6418) {
LAB_006cf8ec:
      do {
        if (DAT_009a6420 != 0) {
          ClearExclusiveLocal();
          return;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x9a6420,0x10);
        if (bVar2) {
          DAT_009a6420 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DAT_009a6424 = 1;
      DAT_009a6418 = pvVar5;
      goto LAB_006cf904;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar5 == (void *)0x0) goto LAB_006cf8cc;
LAB_006cf870:
    if (pvVar5 != DAT_009a6418) goto LAB_006cf8ec;
  }
  if (DAT_009a6424 == -1) {
    return;
  }
  DAT_009a6424 = DAT_009a6424 + 1;
LAB_006cf904:
  if (DAT_009a6428 != 0) {
                    /* try { // try from 006cf9c8 to 006cf9d3 has its CatchHandler @ 006cfa20 */
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977dd8);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x6cf9d8);
    (*pcVar4)();
  }
  DAT_009a6428 = -1;
                    /* try { // try from 006cf93c to 006cf93f has its CatchHandler @ 006cf9f0 */
  FUN_006c3d9c(&DAT_009a6430);
  lRam00000000009a6448 = (ulong)uStack_37 << 8;
  DAT_009a6428 = DAT_009a6428 + 1;
  DAT_009a6424 = DAT_009a6424 + -1;
  uRam00000000009a6438 = 1;
  _DAT_009a6430 = 0;
  _DAT_009a6440 = 0;
  if (DAT_009a6424 == 0) {
    DAT_009a6418 = (void *)0x0;
    do {
      iVar3 = DAT_009a6420;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x9a6420,0x10);
      if (bVar2) {
        DAT_009a6420 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 2) {
      syscall(0x62,&DAT_009a6420,0x81,1);
      return;
    }
  }
  return;
}


// ===== 006cfa44  FUN_006cfa44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cfa44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long extraout_x9;
  long lVar12;
  undefined1 auVar13 [16];
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *param_1;
  uStack_18 = param_1[1];
  auVar13 = std::panicking::panic_with_hook(&local_20,&DAT_00977150,param_1[2],1,0);
  puVar6 = DAT_009a6f40;
  puVar8 = auVar13._0_8_;
  pcStack_68 = FUN_006cfa74;
  puStack_70 = &stack0xfffffffffffffff0;
  if (auVar13._8_8_ == (long *)0x0) {
    if (DAT_009a6f40 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      lVar12 = extraout_x9;
    }
    else {
      lVar12 = DAT_009a6f60;
      if (DAT_009a6f60 == 0) {
        lVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(&DAT_009a6f60);
      }
      puVar9 = (undefined *)pthread_getspecific((pthread_key_t)lVar12);
      puVar11 = &UNK_00378000;
      if (puVar6 != puVar9) {
        puVar11 = (undefined *)0x0;
      }
      lVar12 = 4;
    }
  }
  else {
    lVar12 = *auVar13._8_8_;
    puVar1 = (undefined8 *)(lVar12 + 0x18);
    if ((undefined *)*puVar1 == (undefined *)0x0) {
      puVar11 = DAT_009a6f40;
      if (DAT_009a6f40 != (undefined *)0x0) {
        puVar1 = (undefined8 *)(lVar12 + 0x10);
        puVar11 = &UNK_00378000;
        lVar12 = 4;
        if (DAT_009a6f40 != (undefined *)*puVar1) {
          puVar11 = (undefined *)0x0;
        }
      }
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x20) + -1;
      puVar11 = (undefined *)*puVar1;
    }
  }
  uVar2 = *puVar8;
  uVar4 = puVar8[1];
  uVar3 = puVar8[2];
  lVar5 = puVar8[3];
  puStack_2e8 = &DAT_0045ae3d;
  if (puVar11 != (undefined *)0x0) {
    puStack_2e8 = puVar11;
  }
  lStack_2e0 = 9;
  if (puVar11 != (undefined *)0x0) {
    lStack_2e0 = lVar12;
  }
  if (PTR_gettid_0099f740 == (undefined *)0x0) {
    lVar12 = syscall(0xb2);
    iVar7 = (int)lVar12;
  }
  else {
    iVar7 = gettid();
  }
  puVar6 = PTR_fmt_0099f540;
  lStack_2d8 = (long)iVar7;
  puStack_c8 = &uStack_2d0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  ppuStack_b0 = &puStack_2e8;
  pcStack_a8 = FUN_006ff764;
  plStack_a0 = &lStack_2d8;
  uStack_b8 = _UNK_00372098;
  uStack_c0 = _s__00372090;
  pcStack_88 = FUN_006ff700;
  pcStack_78 = FUN_006ff764;
  puStack_98 = PTR_fmt_0099f540;
  uStack_90 = uVar2;
  uStack_80 = uVar4;
  uVar10 = FUN_0070d770(&puStack_c8,&DAT_003665df,&ppuStack_b0);
  if (uVar10 == 0) {
    if (0x200 < uStack_b8) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_b8,0x200,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977188);
    }
    uVar10 = (**(code **)(lVar5 + 0x38))(uVar3,&uStack_2d0);
  }
  else {
    if ((1 < (uVar10 & 3) - 2) && ((uVar10 & 3) != 0)) {
      pcStack_a8 = (code *)(uVar10 - 1);
      ppuStack_b0 = (undefined **)CONCAT71(ppuStack_b0._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pcStack_a8);
    }
    ppuStack_b0 = &puStack_2e8;
    pcStack_a8 = FUN_006ff764;
    plStack_a0 = &lStack_2d8;
    puStack_98 = puVar6;
    pcStack_88 = FUN_006ff700;
    pcStack_78 = FUN_006ff764;
    uStack_90 = uVar2;
    uStack_80 = uVar4;
    uVar10 = (**(code **)(lVar5 + 0x48))(uVar3,&DAT_003665df,&ppuStack_b0);
  }
  if (((uVar10 != 0) && (1 < (uVar10 & 3) - 2)) && ((uVar10 & 3) != 0)) {
    pcStack_a8 = (code *)(uVar10 - 1);
    ppuStack_b0._1_7_ = (undefined7)((ulong)ppuStack_b0 >> 8);
    ppuStack_b0 = (undefined **)CONCAT71(ppuStack_b0._1_7_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pcStack_a8);
  }
  return;
}


// ===== 006cfa74  FUN_006cfa74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cfa74(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long in_x9;
  undefined *local_2c8;
  long lStack_2c0;
  long local_2b8;
  undefined8 local_2b0;
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
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined **local_90;
  code *local_88;
  long *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  code *pcStack_68;
  undefined8 local_60;
  code *pcStack_58;
  
  puVar5 = DAT_009a6f40;
  if (param_2 == (long *)0x0) {
    if (DAT_009a6f40 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      lVar10 = DAT_009a6f60;
      if (DAT_009a6f60 == 0) {
        lVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(&DAT_009a6f60);
      }
      puVar7 = (undefined *)pthread_getspecific((pthread_key_t)lVar10);
      puVar11 = &UNK_00378000;
      if (puVar5 != puVar7) {
        puVar11 = (undefined *)0x0;
      }
      in_x9 = 4;
    }
  }
  else {
    in_x9 = *param_2;
    puVar1 = (undefined8 *)(in_x9 + 0x18);
    if ((undefined *)*puVar1 == (undefined *)0x0) {
      puVar11 = DAT_009a6f40;
      if (DAT_009a6f40 != (undefined *)0x0) {
        puVar1 = (undefined8 *)(in_x9 + 0x10);
        puVar11 = &UNK_00378000;
        in_x9 = 4;
        if (DAT_009a6f40 != (undefined *)*puVar1) {
          puVar11 = (undefined *)0x0;
        }
      }
    }
    else {
      in_x9 = *(long *)(in_x9 + 0x20) + -1;
      puVar11 = (undefined *)*puVar1;
    }
  }
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar3 = param_1[2];
  lVar10 = param_1[3];
  local_2c8 = &DAT_0045ae3d;
  if (puVar11 != (undefined *)0x0) {
    local_2c8 = puVar11;
  }
  lStack_2c0 = 9;
  if (puVar11 != (undefined *)0x0) {
    lStack_2c0 = in_x9;
  }
  if (PTR_gettid_0099f740 == (undefined *)0x0) {
    lVar8 = syscall(0xb2);
    iVar6 = (int)lVar8;
  }
  else {
    iVar6 = gettid();
  }
  puVar5 = PTR_fmt_0099f540;
  local_2b8 = (long)iVar6;
  local_a8 = &local_2b0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  local_90 = &local_2c8;
  local_88 = FUN_006ff764;
  local_80 = &local_2b8;
  uStack_98 = _UNK_00372098;
  local_a0 = _s__00372090;
  pcStack_68 = FUN_006ff700;
  pcStack_58 = FUN_006ff764;
  puStack_78 = PTR_fmt_0099f540;
  local_70 = uVar2;
  local_60 = uVar4;
  uVar9 = FUN_0070d770(&local_a8,&DAT_003665df,&local_90);
  if (uVar9 == 0) {
    if (0x200 < uStack_98) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_98,0x200,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977188);
    }
    uVar9 = (**(code **)(lVar10 + 0x38))(uVar3,&local_2b0);
  }
  else {
    if ((1 < (uVar9 & 3) - 2) && ((uVar9 & 3) != 0)) {
      local_88 = (code *)(uVar9 - 1);
      local_90 = (undefined **)CONCAT71(local_90._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_88);
    }
    local_90 = &local_2c8;
    local_88 = FUN_006ff764;
    local_80 = &local_2b8;
    puStack_78 = puVar5;
    pcStack_68 = FUN_006ff700;
    pcStack_58 = FUN_006ff764;
    local_70 = uVar2;
    local_60 = uVar4;
    uVar9 = (**(code **)(lVar10 + 0x48))(uVar3,&DAT_003665df,&local_90);
  }
  if (((uVar9 != 0) && (1 < (uVar9 & 3) - 2)) && ((uVar9 & 3) != 0)) {
    local_88 = (code *)(uVar9 - 1);
    local_90._1_7_ = (undefined7)((ulong)local_90 >> 8);
    local_90 = (undefined **)CONCAT71(local_90._1_7_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_88);
  }
  return;
}


// ===== 006cfd04  FUN_006cfd04 =====

void FUN_006cfd04(void)

{
  undefined1 uStack_11;
  
  FUN_0070e928(&uStack_11,&DAT_0045adfb,0x85);
  FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006cfd2c  FUN_006cfd2c =====

ulong FUN_006cfd2c(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = rename((char *)*param_1,param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006cfdb0  FUN_006cfdb0 =====

ulong FUN_006cfdb0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = symlink((char *)*param_1,param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006cfe34  FUN_006cfe34 =====

ulong FUN_006cfe34(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = link((char *)*param_1,param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006cfeb8  FUN_006cfeb8 =====

void FUN_006cfeb8(undefined8 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long local_b8 [2];
  long *local_a8;
  undefined *puStack_a0;
  undefined **local_98;
  code *pcStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  ulong local_50;
  undefined8 local_48;
  
  pbVar7 = (byte *)param_1[1];
  *(undefined1 *)*param_1 = 1;
  if (((*pbVar7 & 1) == 0) &&
     (<std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name(&local_a8,param_2),
     local_a8 != (long *)0xffffffffffffffff)) {
    if (local_a8 == (long *)&DAT_00000002) {
      core::str::converts::from_utf8(&local_58,local_68,uStack_60);
      local_88 = local_50;
      local_80 = local_48;
      if (((ulong)local_58 & 1) == 0) {
LAB_006d008c:
        uVar3 = FUN_0070c920(&DAT_0045ae46,0x1a,local_88,local_80);
        pbVar7 = (byte *)param_1[2];
        if ((uVar3 & 1) != 0) {
          *pbVar7 = 1;
          return;
        }
        if ((*pbVar7 & 1) != 0) {
          iVar2 = FUN_0070c920(&DAT_0045ae60,0x1c,local_88,local_80);
          if (iVar2 != 0) {
            *pbVar7 = 0;
            return;
          }
          if ((*pbVar7 & 1) != 0) goto LAB_006cfeec;
        }
        *(long *)param_1[3] = *(long *)param_1[3] + 1;
      }
    }
    else if (local_88 != 0) goto LAB_006d008c;
  }
LAB_006cfeec:
  if ((*(byte *)param_1[2] & 1) == 0) {
    return;
  }
  plVar5 = (long *)param_1[3];
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    pbVar7 = (byte *)param_1[4];
    if ((*pbVar7 & 1) == 0) {
      local_58 = &UNK_0045ae7c;
      local_50 = (ulong)(lVar4 != 1);
      if (lVar4 == 1) {
        local_58 = (undefined *)0x1;
      }
      puStack_a0 = PTR_fmt_0099f458;
      local_98 = &local_58;
      pcStack_90 = FUN_006ff764;
      local_a8 = plVar5;
      core::fmt::write(**(undefined8 **)param_1[5],(*(undefined8 **)param_1[5])[1],&DAT_0036c731,
                       &local_a8);
    }
    *pbVar7 = 0;
    *plVar5 = 0;
  }
  local_b8[0] = param_1[5];
  uVar6 = *(undefined8 *)((uint *)param_1[7] + 2);
  local_b8[1] = 0;
  if ((*(uint *)param_1[7] & 1) == 0) {
    uVar6 = FUN_00751e80(uVar6);
  }
                    /* try { // try from 006cff8c to 006cff97 has its CatchHandler @ 006d0128 */
  <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name(&local_a8,param_2);
  iVar2 = *param_2;
  if (iVar2 == 2) {
LAB_006d0024:
    local_58 = (undefined *)0x2;
  }
  else {
    if (iVar2 == -1) {
      iVar2 = 0;
      local_58 = (undefined *)0x2;
      goto LAB_006d003c;
    }
    if (*(ulong *)(param_2 + 4) == 0) goto LAB_006d0024;
    local_48 = *(undefined8 *)(param_2 + 6);
    local_58 = (undefined *)0x0;
    local_50 = *(ulong *)(param_2 + 4);
  }
  if (iVar2 == 2) {
    iVar2 = 0;
  }
LAB_006d003c:
                    /* try { // try from 006d003c to 006d004f has its CatchHandler @ 006d0128 */
  uVar1 = FUN_006e18a0(local_b8,uVar6,&local_a8,&local_58,iVar2);
  *(undefined1 *)param_1[6] = uVar1;
  *(long *)(local_b8[0] + 0x18) = *(long *)(local_b8[0] + 0x18) + 1;
  return;
}


// ===== 006d013c  FUN_006d013c =====

void FUN_006d013c(undefined8 *param_1,int *param_2)

{
  int iVar1;
  size_t sVar2;
  void *__dest;
  long *plVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar4;
  long lVar5;
  void *unaff_x22;
  void *unaff_x23;
  void *__n;
  void *unaff_x24;
  void *__src;
  long local_a0;
  void *pvStack_98;
  void *local_90;
  void *pvStack_88;
  size_t local_80;
  void *pvStack_78;
  size_t local_70;
  int iStack_68;
  int iStack_64;
  void *local_60;
  size_t local_58;
  
  plVar4 = (long *)*param_1;
  <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name(&local_a0,param_2);
  iStack_64 = extraout_w10;
  if (local_a0 == -1) {
    iVar1 = *param_2;
    local_60 = unaff_x23;
    sVar2 = 0xffffffffffffffff;
  }
  else {
    sVar2 = local_58;
    if (local_58 == 0) {
      unaff_x22 = (void *)0x1;
      iVar1 = *param_2;
      local_60 = unaff_x23;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      unaff_x22 = (void *)__rustc::__rust_alloc(local_58,1);
      if (unaff_x22 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,local_58);
      }
      memcpy(unaff_x22,local_60,local_58);
      iVar1 = *param_2;
      iStack_64 = extraout_w10_00;
    }
  }
  if (((iVar1 == -1) || (iVar1 == 2)) || (__src = *(void **)(param_2 + 4), __src == (void *)0x0)) {
    local_a0 = 2;
    pvStack_98 = local_60;
    local_90 = unaff_x24;
  }
  else {
    __n = *(void **)(param_2 + 6);
    pvStack_98 = __n;
    if (__n == (void *)0x0) {
      local_a0 = 0;
      local_90 = (void *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)__rustc::__rust_alloc(__n,1);
      if (__dest == (void *)0x0) {
                    /* try { // try from 006d0320 to 006d032b has its CatchHandler @ 006d0330 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,__n);
      }
      memcpy(__dest,__src,(size_t)__n);
      local_a0 = 0;
      local_90 = __dest;
      iStack_64 = extraout_w10_01;
    }
  }
  if (iVar1 == -1) {
    iStack_68 = 0;
  }
  else {
    iStack_68 = 0;
    if (iVar1 != 2) {
      iStack_64 = param_2[1];
      iStack_68 = iVar1;
    }
  }
  local_60 = (void *)0x0;
  if ((iVar1 != -1) && (local_60 = (void *)0x0, iVar1 != 2)) {
    local_60 = *(void **)(param_2 + 2);
  }
  lVar5 = plVar4[2];
  pvStack_88 = pvStack_98;
  local_80 = sVar2;
  pvStack_78 = unaff_x22;
  local_70 = sVar2;
  if (lVar5 == *plVar4) {
                    /* try { // try from 006d02bc to 006d02c3 has its CatchHandler @ 006d0358 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::Library>>::
    grow_one(plVar4);
  }
  plVar3 = (long *)(plVar4[1] + lVar5 * 0x48);
  plVar3[3] = (long)pvStack_88;
  plVar3[2] = (long)local_90;
  plVar3[5] = (long)pvStack_78;
  plVar3[4] = local_80;
  plVar3[8] = (long)local_60;
  plVar3[7] = CONCAT44(iStack_64,iStack_68);
  plVar3[6] = local_70;
  plVar3[1] = (long)pvStack_98;
  *plVar3 = local_a0;
  plVar4[2] = lVar5 + 1;
  return;
}


// ===== 006d036c  FUN_006d036c =====

ulong FUN_006d036c(undefined8 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (DAT_009a6f00 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
    if (bVar2) {
      DAT_009a6f00 = 0x3fffffff;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006d0544;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
            (&DAT_009a6f00);
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006d0544:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar3;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path();
    uVar5 = uVar5 ^ 1;
  }
  cVar1 = DAT_009a6f08;
  iVar4 = setenv((char *)*param_1,param_2,1);
  if (iVar4 == -1) {
    piVar6 = (int *)__errno();
    iVar4 = *piVar6;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006d04b8 to 006d04c3 has its CatchHandler @ 006d0568 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    uVar8 = (long)iVar4 << 0x20 | 2;
  }
  else {
    uVar8 = 0;
  }
  if (cVar1 == '\0') {
    if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      DAT_009a6f08 = '\x01';
    }
    do {
      iVar4 = DAT_009a6f00;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_009a6f00 = DAT_009a6f00 + -0x3fffffff;
      }
    } while (cVar1 != '\0');
  }
  else {
    if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      DAT_009a6f08 = '\x01';
    }
    do {
      iVar4 = DAT_009a6f00;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_009a6f00 = DAT_009a6f00 + -0x3fffffff;
      }
    } while (cVar1 != '\0');
  }
  if (iVar4 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (&DAT_009a6f00);
    return uVar8;
  }
  return uVar8;
}


// ===== 006d0580  FUN_006d0580 =====

void FUN_006d0580(long *param_1,long *param_2,char *param_3)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  long **pplVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *extraout_x9;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined3 local_98;
  undefined1 uStack_95;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long *local_78;
  char local_6c [4];
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *local_48;
  
  cVar6 = *param_3;
  lVar9 = *(long *)(param_3 + 8);
  lVar3 = *(long *)(param_3 + 0x10);
  if (cVar6 == -1) {
    param_1[2] = lVar9;
    param_1[3] = lVar3;
    goto LAB_006d0898;
  }
  lVar16 = *param_2;
  if (*(long *)(lVar16 + 0x1f0) == 1) {
    plVar13 = (long *)(lVar16 + 0x1f8);
    if (*plVar13 == 0) goto LAB_006d076c;
LAB_006d05c4:
    plVar10 = (long *)plVar13[3];
    uVar17 = param_2[2];
    plVar12 = plVar13;
  }
  else {
    plVar13 = (long *)FUN_006bb648(lVar16 + 0x1f0,lVar9,lVar3);
    if (*plVar13 != 0) goto LAB_006d05c4;
LAB_006d076c:
    plVar12 = (long *)plVar13[2];
    if ((char)plVar13[1] != -1) {
      uVar5 = *(undefined4 *)((long)plVar13 + 9);
      uVar4 = *(undefined4 *)((long)plVar13 + 0xc);
      *(char *)(param_1 + 2) = (char)plVar13[1];
      param_1[3] = (long)plVar12;
      *(undefined4 *)((long)param_1 + 0x11) = uVar5;
      *(undefined4 *)((long)param_1 + 0x14) = uVar4;
      goto LAB_006d0898;
    }
    plVar10 = (long *)plVar12[3];
    uVar17 = param_2[2];
  }
  if (plVar10 == (long *)0x0) {
LAB_006d05f8:
    pplVar7 = (long **)CONCAT44(local_60._4_4_,(int)local_60);
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = (long *)0x0;
    if (plVar10 != (long *)0x1) {
      plVar13 = (long *)0x0;
      plVar15 = plVar10;
      do {
        plVar2 = (long *)(((ulong)plVar15 >> 1) + (long)plVar13);
        if (*(ulong *)(plVar12[2] + (long)plVar2 * 0x18) <= uVar17) {
          plVar13 = plVar2;
        }
        plVar15 = (long *)((long)plVar15 - ((ulong)plVar15 >> 1));
      } while ((long *)0x1 < plVar15);
    }
    puVar14 = (ulong *)(plVar12[2] + (long)plVar13 * 0x18);
    if (uVar17 < *puVar14 || puVar14[1] <= uVar17) goto LAB_006d05f8;
    if (plVar10 <= plVar13) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (plVar13,plVar10,&PTR_s__rust_deps_addr2line_0_25_1_src__009771a0);
    }
    uVar11 = puVar14[2];
    if ((ulong)plVar12[1] <= uVar11) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar11,plVar12[1],&PTR_s__rust_deps_addr2line_0_25_1_src__009771b8);
    }
    local_90 = (undefined4)lVar9;
    uStack_8c = (undefined4)((ulong)lVar9 >> 0x20);
    uStack_88 = (undefined4)lVar3;
    uStack_84 = (undefined4)((ulong)lVar3 >> 0x20);
    local_78 = (long *)(*plVar12 + uVar11 * 0x48);
    local_68 = param_2[1];
    uStack_58 = local_6c;
    local_60 = &local_78;
    uStack_50 = (long *)&local_90;
    local_48 = &local_68;
    local_6c[0] = cVar6;
    if (*local_78 == 1) {
      plVar13 = local_78 + 1;
      lVar9 = *plVar13;
      plVar10 = uStack_50;
      pplVar7 = local_60;
    }
    else {
      plVar13 = (long *)FUN_006bb028(local_78,&local_60);
      lVar9 = *plVar13;
      plVar10 = extraout_x9;
      pplVar7 = local_60;
    }
    if (lVar9 == 0) {
      plVar12 = plVar13 + 1;
      puVar1 = (uint *)((long)plVar13 + 9);
      plVar10 = (long *)(ulong)*puVar1;
      uVar4 = *(undefined4 *)((long)plVar13 + 0xc);
      plVar13 = (long *)plVar13[2];
      local_98 = (undefined3)*puVar1;
      uStack_95 = (undefined1)uVar4;
      if ((char)*plVar12 != -1) {
        *(char *)(param_1 + 2) = (char)*plVar12;
        param_1[3] = (long)plVar13;
        local_60._0_4_ = CONCAT13(uStack_95,local_98);
        *(int *)((long)param_1 + 0x11) = (int)local_60;
        *(undefined4 *)((long)param_1 + 0x14) = uVar4;
        goto LAB_006d0898;
      }
    }
  }
  local_60._4_4_ = (undefined4)((ulong)pplVar7 >> 0x20);
  if (*(long *)(lVar16 + 0x60) == -2) {
    local_48 = plVar10;
    pplVar7 = (long **)CONCAT44(local_60._4_4_,2);
    pcVar8 = uStack_58;
    plVar10 = uStack_50;
    goto LAB_006d06c8;
  }
  local_60 = pplVar7;
  if (*(long *)(lVar16 + 0x1c8) == 1) {
    plVar10 = (long *)(lVar16 + 0x1d0);
    plVar12 = plVar10;
    if (*plVar10 != 0) goto LAB_006d06a4;
LAB_006d07e0:
    plVar10 = (long *)plVar12[2];
    if ((char)plVar12[1] == -1) goto LAB_006d06a4;
    uStack_58._0_4_ = CONCAT31((int3)*(undefined4 *)((long)plVar12 + 9),(char)plVar12[1]);
    uStack_58 = (char *)CONCAT44(*(undefined4 *)((long)plVar12 + 0xc),(undefined4)uStack_58);
  }
  else {
    plVar10 = (long *)FUN_006bc2d8(lVar16 + 0x1c8,*(long *)param_2[1] + 0x10,lVar16,lVar16 + 0x60);
    plVar12 = plVar10;
    if (*plVar10 == 0) goto LAB_006d07e0;
LAB_006d06a4:
    <addr2line::line::addr2line::line::Lines>::find_location(&local_60,plVar10,uVar17);
    pplVar7 = local_60;
    plVar10 = uStack_50;
    pcVar8 = uStack_58;
    if ((int)local_60 != -1) {
LAB_006d06c8:
      uStack_50._4_4_ = (undefined4)((ulong)plVar10 >> 0x20);
      uStack_50._0_4_ = SUB84(plVar10,0);
      uStack_58._4_4_ = (undefined4)((ulong)pcVar8 >> 0x20);
      uStack_58._0_4_ = SUB84(pcVar8,0);
      local_60._4_4_ = (undefined4)((ulong)pplVar7 >> 0x20);
      *param_1 = (long)plVar13;
      *(int *)(param_1 + 1) = (int)pplVar7;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44((undefined4)uStack_50,uStack_58._4_4_);
      *(ulong *)((long)param_1 + 0xc) = CONCAT44((undefined4)uStack_58,local_60._4_4_);
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_50._4_4_;
      param_1[4] = (long)local_48;
      return;
    }
  }
  param_1[3] = (long)plVar10;
  param_1[2] = (long)uStack_58;
LAB_006d0898:
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 006d08dc  FUN_006d08dc =====

void FUN_006d08dc(undefined4 *param_1,undefined8 *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  
  puVar8 = PTR_PTR_0099f738;
  puVar11 = (uint *)*param_2;
  bVar12 = *(byte *)((long)puVar11 + 10);
  if ((puVar11[2] & 1) == 0) {
    if ((*(byte *)((long)puVar11 + 9) & 1) != 0) {
      if ((bVar12 & 1) == 0) {
        uVar10 = 1;
        goto LAB_006d092c;
      }
LAB_006d0958:
      uVar10 = 0x401;
      bVar13 = *(byte *)((long)puVar11 + 0xb);
      bVar12 = *(byte *)((long)puVar11 + 0xd);
      uVar14 = 0x401;
      if (bVar13 == 1) goto LAB_006d096c;
      goto LAB_006d0990;
    }
    if ((bVar12 & 1) != 0) goto LAB_006d0958;
    if ((((puVar11[3] & 1) == 0) && ((*(byte *)((long)puVar11 + 0xd) & 1) == 0)) &&
       ((*(byte *)((long)puVar11 + 0xb) & 1) == 0)) {
      puVar8 = &DAT_0045b646;
      uVar4 = 0x3a;
    }
    else {
      puVar8 = &DAT_0045b680;
      uVar4 = 0x3d;
    }
    uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,puVar8,uVar4);
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    if ((*(byte *)((long)puVar11 + 9) & 1) == 0) {
      if ((bVar12 & 1) != 0) goto LAB_006d093c;
      if ((((*(byte *)((long)puVar11 + 0xb) & 1) != 0) || ((puVar11[3] & 1) != 0)) ||
         ((*(byte *)((long)puVar11 + 0xd) & 1) != 0)) goto LAB_006d0970;
      uVar10 = 0;
      uVar14 = 0;
    }
    else {
      if ((bVar12 & 1) == 0) {
        uVar10 = 2;
LAB_006d092c:
        bVar12 = *(byte *)((long)puVar11 + 0xd);
        bVar13 = *(byte *)((long)puVar11 + 0xb);
      }
      else {
LAB_006d093c:
        uVar10 = 0x402;
        bVar13 = *(byte *)((long)puVar11 + 0xb);
        bVar12 = *(byte *)((long)puVar11 + 0xd);
        uVar14 = 0x402;
        if (bVar13 != 1) goto LAB_006d0990;
LAB_006d096c:
        uVar10 = uVar14;
        if ((bVar12 & 1) == 0) {
LAB_006d0970:
          uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0045b680,0x3d);
          uVar9 = 1;
          *(undefined8 *)(param_1 + 2) = uVar4;
          goto LAB_006d0ac0;
        }
      }
LAB_006d0990:
      if ((puVar11[3] & 1) == 0) {
        uVar14 = 0x200;
        if ((bVar13 & 1) == 0) {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 0x240;
        if ((bVar13 & 1) == 0) {
          uVar14 = 0x40;
        }
      }
      if ((bVar12 & 1) != 0) {
        uVar14 = 0xc0;
      }
    }
    uVar1 = *puVar11;
    uVar2 = puVar11[1];
    do {
      iVar3 = open64(param_3,uVar10 | uVar14 | 0x84000 | uVar1 & 0xfffffffc,(ulong)uVar2);
      if (iVar3 != -1) {
        uVar9 = 0;
        param_1[1] = iVar3;
        goto LAB_006d0ac0;
      }
      piVar5 = (int *)__errno();
      iVar3 = *piVar5;
      if (*(undefined ***)puVar8 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
                    /* try { // try from 006d0a14 to 006d0a23 has its CatchHandler @ 006d0adc */
      lVar6 = core::io::error::os_functions::get_os_functions();
      uVar7 = (**(code **)(lVar6 + 0x10))(iVar3);
    } while ((uVar7 & 1) != 0);
    *(ulong *)(param_1 + 2) = (long)iVar3 << 0x20 | 2;
  }
  uVar9 = 1;
LAB_006d0ac0:
  *param_1 = uVar9;
  return;
}


// ===== 006d0afc  FUN_006d0afc =====

void FUN_006d0afc(undefined4 *param_1,undefined8 *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  int __fd;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  
  puVar8 = PTR_PTR_0099f738;
  puVar11 = *(uint **)param_2[1];
  bVar12 = *(byte *)((long)puVar11 + 10);
  if ((puVar11[2] & 1) == 0) {
    if ((*(byte *)((long)puVar11 + 9) & 1) != 0) {
      if ((bVar12 & 1) == 0) {
        uVar10 = 1;
        goto LAB_006d0b50;
      }
LAB_006d0b7c:
      uVar10 = 0x401;
      bVar13 = *(byte *)((long)puVar11 + 0xb);
      bVar12 = *(byte *)((long)puVar11 + 0xd);
      uVar14 = 0x401;
      if (bVar13 == 1) goto LAB_006d0b90;
      goto LAB_006d0bb4;
    }
    if ((bVar12 & 1) != 0) goto LAB_006d0b7c;
    if ((((puVar11[3] & 1) == 0) && ((*(byte *)((long)puVar11 + 0xd) & 1) == 0)) &&
       ((*(byte *)((long)puVar11 + 0xb) & 1) == 0)) {
      puVar8 = &DAT_0045b646;
      uVar4 = 0x3a;
    }
    else {
      puVar8 = &DAT_0045b680;
      uVar4 = 0x3d;
    }
    uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,puVar8,uVar4);
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    if ((*(byte *)((long)puVar11 + 9) & 1) == 0) {
      if ((bVar12 & 1) != 0) goto LAB_006d0b60;
      if ((((*(byte *)((long)puVar11 + 0xb) & 1) != 0) || ((puVar11[3] & 1) != 0)) ||
         ((*(byte *)((long)puVar11 + 0xd) & 1) != 0)) goto LAB_006d0b94;
      uVar10 = 0;
      uVar14 = 0;
    }
    else {
      if ((bVar12 & 1) == 0) {
        uVar10 = 2;
LAB_006d0b50:
        bVar12 = *(byte *)((long)puVar11 + 0xd);
        bVar13 = *(byte *)((long)puVar11 + 0xb);
      }
      else {
LAB_006d0b60:
        uVar10 = 0x402;
        bVar13 = *(byte *)((long)puVar11 + 0xb);
        bVar12 = *(byte *)((long)puVar11 + 0xd);
        uVar14 = 0x402;
        if (bVar13 != 1) goto LAB_006d0bb4;
LAB_006d0b90:
        uVar10 = uVar14;
        if ((bVar12 & 1) == 0) {
LAB_006d0b94:
          uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0045b680,0x3d);
          uVar9 = 1;
          *(undefined8 *)(param_1 + 2) = uVar4;
          goto LAB_006d0ce8;
        }
      }
LAB_006d0bb4:
      if ((puVar11[3] & 1) == 0) {
        uVar14 = 0x200;
        if ((bVar13 & 1) == 0) {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 0x240;
        if ((bVar13 & 1) == 0) {
          uVar14 = 0x40;
        }
      }
      if ((bVar12 & 1) != 0) {
        uVar14 = 0xc0;
      }
    }
    uVar1 = *puVar11;
    uVar2 = puVar11[1];
    __fd = *(int *)*param_2;
    do {
      iVar3 = openat64(__fd,param_3,uVar10 | uVar14 | uVar1 & 0xfffffffc | 0x80000,(ulong)uVar2);
      if (iVar3 != -1) {
        uVar9 = 0;
        param_1[1] = iVar3;
        goto LAB_006d0ce8;
      }
      piVar5 = (int *)__errno();
      iVar3 = *piVar5;
      if (*(undefined ***)puVar8 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
                    /* try { // try from 006d0c3c to 006d0c4b has its CatchHandler @ 006d0d04 */
      lVar6 = core::io::error::os_functions::get_os_functions();
      uVar7 = (**(code **)(lVar6 + 0x10))(iVar3);
    } while ((uVar7 & 1) != 0);
    *(ulong *)(param_1 + 2) = (long)iVar3 << 0x20 | 2;
  }
  uVar9 = 1;
LAB_006d0ce8:
  *param_1 = uVar9;
  return;
}


// ===== 006d0d24  FUN_006d0d24 =====

undefined8 FUN_006d0d24(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = *param_2;
  lVar1 = param_2[1];
  plVar8 = (long *)*param_1;
  if (lVar7 == 1) {
    lVar3 = param_2[2];
    lVar4 = param_2[3];
    lVar2 = lVar1;
  }
  else {
    lVar2 = FUN_00751e80(lVar1);
    lVar3 = FUN_00755b7c(lVar1);
    FUN_00751e80(lVar1);
    lVar4 = FUN_00755a8c();
  }
  lVar9 = plVar8[2];
  if (lVar9 == *plVar8) {
                    /* try { // try from 006d0db0 to 006d0db7 has its CatchHandler @ 006d0e58 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace::BacktraceFrame>>::grow_one(plVar8);
  }
  puVar5 = (undefined8 *)(plVar8[1] + lVar9 * 0x38);
  plVar8[2] = lVar9 + 1;
  puVar5[1] = lVar2;
  *puVar5 = 1;
  puVar5[3] = lVar4;
  puVar5[2] = lVar3;
  puVar5[5] = 8;
  puVar5[4] = 0;
  puVar5[6] = 0;
  if ((int)lVar7 == 0) {
    FUN_00751e80(lVar1);
    lVar7 = FUN_00755a8c();
    if (*(long *)param_1[1] != lVar7) {
      return 1;
    }
  }
  else if (*(long *)param_1[1] != param_2[3]) {
    return 1;
  }
  plVar6 = (long *)param_1[2];
  if (*plVar6 == 0) {
    lVar7 = plVar8[2];
    *plVar6 = 1;
    plVar6[1] = lVar7;
  }
  return 1;
}


// ===== 006d0e6c  FUN_006d0e6c =====

void FUN_006d0e6c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_006ea8b8(param_1,param_3,*param_2);
  return;
}


// ===== 006d0e78  FUN_006d0e78 =====

ulong FUN_006d0e78(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mkdir(param_2,*(__mode_t *)*param_1);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d0f08  FUN_006d0f08 =====

void FUN_006d0f08(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_default_alloc_error_hook_0099f750;
  if (*(code **)PTR_HOOK_0099f748 != (code *)0x0) {
    pcVar1 = *(code **)PTR_HOOK_0099f748;
  }
  (*pcVar1)(*param_1,param_1[1]);
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006d0f3c  FUN_006d0f3c =====

void FUN_006d0f3c(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  code *extraout_x8;
  code *extraout_x10;
  long *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long lStack_48;
  long local_28;
  
  std::sys::backtrace::lock();
  puStack_58 = (undefined *)param_1[1];
  local_60 = (long *)*param_1;
  lVar4 = *(long *)PTR_CURRENT_0099f758;
  local_50 = param_2;
  lStack_48 = param_3;
  if (lVar4 == 0) {
                    /* try { // try from 006d106c to 006d1077 has its CatchHandler @ 006d107c */
    lVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_0099f758);
  }
  pvVar5 = pthread_getspecific((pthread_key_t)lVar4);
  if (pvVar5 < (void *)0x3) {
    FUN_006cfa74(&local_60,0);
  }
  else {
    local_28 = (long)pvVar5 + -0x10;
                    /* try { // try from 006d0f9c to 006d104f has its CatchHandler @ 006d107c */
    FUN_006cfa74(&local_60,&local_28);
  }
  cVar1 = *(char *)param_1[2];
  if (cVar1 == '\0') {
    local_28 = (ulong)local_28._1_7_ << 8;
    local_60 = &local_28;
    puStack_58 = PTR_fmt_0099f760;
    FUN_0070f504();
    (*extraout_x10)();
  }
  else if (cVar1 == '\x01') {
    local_60 = &local_28;
    local_28 = CONCAT71(local_28._1_7_,1);
    puStack_58 = PTR_fmt_0099f760;
    FUN_0070f504(*(undefined8 *)(param_3 + 0x48));
    (*extraout_x8)();
  }
  else {
    if (cVar1 == -1) goto LAB_006d1050;
    do {
      cVar3 = DAT_009a63b0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x9a63b0,0x10);
      if (bVar2) {
        DAT_009a63b0 = '\0';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (cVar3 == '\0') goto LAB_006d1050;
    (**(code **)(param_3 + 0x48))(param_2,&DAT_0045af34,0x9d);
  }
  FUN_006c2ec0();
LAB_006d1050:
  FUN_0070f260();
  return;
}


// ===== 006d1090  FUN_006d1090 =====

void FUN_006d1090(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long local_40;
  ulong local_38;
  long *local_28;
  
  local_38 = ((long *)*param_1)[1];
  if ((local_38 & 1) == 0) {
    local_40 = -1;
    local_28 = param_1;
                    /* try { // try from 006d10c4 to 006d10d3 has its CatchHandler @ 006d1100 */
    std::panicking::panic_with_hook
              (&local_40,&PTR_FUN_00977298,param_1[1],*(undefined1 *)(param_1[2] + 0x10),
               *(undefined1 *)(param_1[2] + 0x11));
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x6d10d8);
    (*pcVar1)();
  }
  local_38 = local_38 >> 1;
  local_40 = *(long *)*param_1;
  uVar2 = std::panicking::panic_with_hook
                    (&local_40,&DAT_00977260,param_1[1],*(undefined1 *)(param_1[2] + 0x10),
                     *(undefined1 *)(param_1[2] + 0x11));
                    /* catch() { ... } // from try @ 006d10c4 with catch @ 006d1100 */
  if (0 < local_40) {
    __rustc::__rust_dealloc(local_38,local_40,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00751c7c(uVar2);
}


// ===== 006d1128  FUN_006d1128 =====

undefined8 FUN_006d1128(long *param_1,long param_2,uint param_3,uint param_4)

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


// ===== 006d122c  FUN_006d122c =====

ulong FUN_006d122c(undefined8 *param_1,char *param_2)

{
  __mode_t __mode;
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_0099f738;
  __mode = *(__mode_t *)*param_1;
  do {
    iVar2 = chmod(param_2,__mode);
    if (iVar2 != -1) {
      return 0;
    }
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
                    /* try { // try from 006d1284 to 006d1293 has its CatchHandler @ 006d12dc */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar5 & 1) != 0);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006d12fc  FUN_006d12fc =====

undefined ** FUN_006d12fc(long *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  __time_t *p_Var4;
  timespec local_30;
  __time_t _Stack_20;
  ulong local_18;
  
  p_Var4 = (__time_t *)*param_1;
  uVar1 = 0x3ffffffe;
  local_30.tv_sec = 0;
  if (*(uint *)(p_Var4 + 1) != 0xffffffff) {
    uVar1 = *(uint *)(p_Var4 + 1);
    local_30.tv_sec = *p_Var4;
  }
  local_30.tv_nsec = (long)uVar1;
  uVar1 = 0x3ffffffe;
  _Stack_20 = 0;
  if (*(uint *)(p_Var4 + 3) != 0xffffffff) {
    uVar1 = *(uint *)(p_Var4 + 3);
    _Stack_20 = p_Var4[2];
  }
  local_18 = (ulong)uVar1;
  if (PTR_utimensat_0099f768 == (undefined *)0x0) {
    return &PTR_DAT_00977b38;
  }
  iVar2 = utimensat(-100,param_2,&local_30,0x100);
  if (iVar2 != -1) {
    return (undefined **)0x0;
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (undefined **)((long)iVar2 << 0x20 | 2);
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (undefined **)((long)iVar2 << 0x20 | 2);
}


// ===== 006d13ec  FUN_006d13ec =====

undefined ** FUN_006d13ec(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  ulong __n;
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  
  __n = param_1[1];
  local_1d8 = param_2;
  uStack_1d0 = param_3;
  if (0x17f < __n) {
    ppuVar3 = (undefined **)FUN_006c9920((void *)*param_1,__n,&local_1d8,FUN_006cfd2c);
    return ppuVar3;
  }
  memcpy(auStack_1c8,(void *)*param_1,__n);
  auStack_1c8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_48,auStack_1c8,__n + 1)
  ;
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = rename(param_2,local_40);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 006d1504  FUN_006d1504 =====

undefined ** FUN_006d1504(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  ulong __n;
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  
  __n = param_1[1];
  local_1d8 = param_2;
  uStack_1d0 = param_3;
  if (0x17f < __n) {
    ppuVar3 = (undefined **)FUN_006c9920((void *)*param_1,__n,&local_1d8,FUN_006cfdb0);
    return ppuVar3;
  }
  memcpy(auStack_1c8,(void *)*param_1,__n);
  auStack_1c8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_48,auStack_1c8,__n + 1)
  ;
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = symlink(param_2,local_40);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 006d161c  FUN_006d161c =====

undefined ** FUN_006d161c(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  ulong __n;
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  
  __n = param_1[1];
  local_1d8 = param_2;
  uStack_1d0 = param_3;
  if (0x17f < __n) {
    ppuVar3 = (undefined **)FUN_006c9920((void *)*param_1,__n,&local_1d8,FUN_006cfe34);
    return ppuVar3;
  }
  memcpy(auStack_1c8,(void *)*param_1,__n);
  auStack_1c8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_48,auStack_1c8,__n + 1)
  ;
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = link(param_2,local_40);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 006d1734  FUN_006d1734 =====

undefined ** FUN_006d1734(long *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  __time_t *p_Var4;
  timespec local_30;
  __time_t _Stack_20;
  ulong local_18;
  
  p_Var4 = (__time_t *)*param_1;
  uVar1 = 0x3ffffffe;
  local_30.tv_sec = 0;
  if (*(uint *)(p_Var4 + 1) != 0xffffffff) {
    uVar1 = *(uint *)(p_Var4 + 1);
    local_30.tv_sec = *p_Var4;
  }
  local_30.tv_nsec = (long)uVar1;
  uVar1 = 0x3ffffffe;
  _Stack_20 = 0;
  if (*(uint *)(p_Var4 + 3) != 0xffffffff) {
    uVar1 = *(uint *)(p_Var4 + 3);
    _Stack_20 = p_Var4[2];
  }
  local_18 = (ulong)uVar1;
  if (PTR_utimensat_0099f768 == (undefined *)0x0) {
    return &PTR_DAT_00977b38;
  }
  iVar2 = utimensat(-100,param_2,&local_30,0);
  if (iVar2 != -1) {
    return (undefined **)0x0;
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (undefined **)((long)iVar2 << 0x20 | 2);
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (undefined **)((long)iVar2 << 0x20 | 2);
}


// ===== 006d1824  FUN_006d1824 =====

void FUN_006d1824(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if (*param_1 != -1) {
    plVar1 = param_1;
  }
  FUN_006f21c4(param_2,param_3,(char)param_1[3],plVar1);
  return;
}


// ===== 006d1844  FUN_006d1844 =====

byte FUN_006d1844(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  undefined8 in_x5;
  undefined8 in_x7;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long local_b8 [2];
  byte *local_a8;
  char *pcStack_a0;
  byte *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  byte *local_78;
  uint *puStack_70;
  undefined8 local_58 [3];
  byte local_24 [4];
  
  pcStack_a0 = (char *)*param_1;
  if ((*pcStack_a0 == '\0') && (100 < *(ulong *)param_1[1])) {
    bVar5 = 0;
  }
  else {
    local_a8 = local_24;
    pbVar2 = (byte *)param_1[2];
    lVar3 = param_1[3];
    lVar7 = *(long *)(param_2 + 2);
    uVar9 = param_1[5];
    pbVar8 = (byte *)param_1[4];
    local_88 = param_1[6];
    uVar4 = *param_2;
    local_24[0] = 0;
    lVar6 = lVar7;
    local_98 = pbVar8;
    uStack_90 = uVar9;
    lStack_80 = lVar3;
    local_78 = pbVar2;
    puStack_70 = param_2;
    if ((uVar4 & 1) == 0) {
      lVar6 = FUN_00751e80(lVar7);
    }
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = lVar6 + -1;
    }
    FUN_006bde28(lVar1,&local_a8,&DAT_00976fe0);
    if ((local_24[0] & 1) == 0) {
      if ((*pbVar8 & 1) != 0) {
        local_b8[1] = 0;
        local_b8[0] = lVar3;
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_00751e80(lVar7);
        }
        local_a8 = (byte *)0xffffffffffffffff;
        local_58[0] = 2;
                    /* try { // try from 006d191c to 006d1937 has its CatchHandler @ 006d1980 */
        bVar5 = FUN_006e18a0(local_b8,lVar7,&local_a8,local_58,0,in_x5,0,in_x7,pbVar8,uVar9);
        *pbVar2 = bVar5;
        *(long *)(local_b8[0] + 0x18) = *(long *)(local_b8[0] + 0x18) + 1;
      }
    }
    *(long *)param_1[1] = *(long *)param_1[1] + 1;
    bVar5 = *pbVar2 ^ 1;
  }
  return bVar5 & 1;
}


// ===== 006d1994  FUN_006d1994 =====

void FUN_006d1994(undefined8 *param_1)

{
  FUN_00755a48(*(undefined8 *)*param_1);
  return;
}


// ===== 006d19a0  FUN_006d19a0 =====

void FUN_006d19a0(undefined8 *param_1)

{
  FUN_00755a04(*(undefined8 *)*param_1);
  return;
}


// ===== 006d19ac  FUN_006d19ac =====

ulong FUN_006d19ac(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = chown(param_2,*(__uid_t *)*param_1,*(__gid_t *)param_1[1]);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d1a40  FUN_006d1a40 =====

ulong FUN_006d1a40(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = chroot(param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d1ac4  FUN_006d1ac4 =====

ulong FUN_006d1ac4(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = lchown(param_2,*(__uid_t *)*param_1,*(__gid_t *)param_1[1]);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d1b58  FUN_006d1b58 =====

ulong FUN_006d1b58(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mkfifo(param_2,*(__mode_t *)*param_1);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d1be8  FUN_006d1be8 =====

/* WARNING: Removing unreachable block (ram,0x006d1c90) */

void FUN_006d1be8(size_t *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *__s;
  size_t __n;
  void *__dest;
  
  if (DAT_009a6f00 < 0x3ffffffe) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_009a6f00 = DAT_009a6f00 + 1;
    }
    if (cVar1 == '\0') {
      __s = getenv(param_3);
      goto joined_r0x006d1cb8;
    }
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
            (&DAT_009a6f00);
  __s = getenv(param_3);
joined_r0x006d1cb8:
  if (__s == (char *)0x0) {
    *param_1 = 0xffffffffffffffff;
  }
  else {
    __n = strlen(__s);
    if (__n == 0) {
      __dest = (void *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)__rustc::__rust_alloc(__n,1);
      if (__dest == (void *)0x0) {
                    /* try { // try from 006d1d14 to 006d1d1f has its CatchHandler @ 006d1d24 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,__n);
      }
      memcpy(__dest,__s,__n);
    }
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
  }
  do {
    uVar3 = DAT_009a6f00 - 1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_009a6f00 = uVar3;
    }
  } while (cVar1 != '\0');
  if ((uVar3 & 0xbfffffff) == 0x80000000) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (&DAT_009a6f00);
    return;
  }
  return;
}


// ===== 006d1d64  FUN_006d1d64 =====

undefined ** FUN_006d1d64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong __n;
  undefined **ppuVar1;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  undefined8 local_40;
  
  __n = param_1[1];
  local_1d8 = param_2;
  uStack_1d0 = param_3;
  if (0x17f < __n) {
    ppuVar1 = (undefined **)FUN_006c9920((void *)*param_1,__n,&local_1d8,FUN_006d036c);
    return ppuVar1;
  }
  memcpy(auStack_1c8,(void *)*param_1,__n);
  auStack_1c8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_48,auStack_1c8,__n + 1)
  ;
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  ppuVar1 = (undefined **)FUN_006d036c(&local_1d8,local_40);
  return ppuVar1;
}


// ===== 006d1e20  FUN_006d1e20 =====

ulong FUN_006d1e20(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (DAT_009a6f00 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
    if (bVar2) {
      DAT_009a6f00 = 0x3fffffff;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006d1fec;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
            (&DAT_009a6f00);
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006d1fec:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar3;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path();
    uVar5 = uVar5 ^ 1;
  }
  cVar1 = DAT_009a6f08;
  iVar4 = unsetenv(param_2);
  if (iVar4 == -1) {
    piVar6 = (int *)__errno();
    iVar4 = *piVar6;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006d1f68 to 006d1f73 has its CatchHandler @ 006d2008 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    uVar8 = (long)iVar4 << 0x20 | 2;
  }
  else {
    uVar8 = 0;
  }
  if (cVar1 == '\0') {
    if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      DAT_009a6f08 = '\x01';
    }
    do {
      iVar4 = DAT_009a6f00;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_009a6f00 = DAT_009a6f00 + -0x3fffffff;
      }
    } while (cVar1 != '\0');
  }
  else {
    if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      DAT_009a6f08 = '\x01';
    }
    do {
      iVar4 = DAT_009a6f00;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_009a6f00 = DAT_009a6f00 + -0x3fffffff;
      }
    } while (cVar1 != '\0');
  }
  if (iVar4 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (&DAT_009a6f00);
    return uVar8;
  }
  return uVar8;
}


// ===== 006d2020  FUN_006d2020 =====

void * FUN_006d2020(void)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  pthread_key_t __key;
  void *pvVar4;
  void *unaff_x19;
  
  pvVar4 = DAT_009a6f58;
  do {
    while( true ) {
      pvVar3 = DAT_009a6f58;
      if (pvVar4 == (void *)0xffffffffffffffff) {
        FUN_006f8758();
        goto LAB_006d209c;
      }
      if (DAT_009a6f58 == pvVar4) break;
      ClearExclusiveLocal();
      pvVar4 = pvVar3;
    }
    unaff_x19 = (void *)((long)pvVar4 + 1);
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f58,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_009a6f58 = unaff_x19;
    }
    pvVar4 = pvVar3;
  } while (cVar1 != '\0');
  if (DAT_009a6f60 != 0) {
    pthread_setspecific((pthread_key_t)DAT_009a6f60,unaff_x19);
    return unaff_x19;
  }
LAB_006d209c:
  __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init
                    (&DAT_009a6f60);
  pthread_setspecific(__key,unaff_x19);
  return unaff_x19;
}


// ===== 006d20c0  FUN_006d20c0 =====

void FUN_006d20c0(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  char *__s;
  size_t sVar4;
  ulong uVar5;
  addrinfo local_b0;
  addrinfo *local_78;
  long local_70;
  undefined8 local_68;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  code *pcStack_38;
  
  local_78 = (addrinfo *)0x0;
  local_b0.ai_flags = 0;
  local_b0.ai_family = 0;
  local_b0.ai_addr = (sockaddr *)0x0;
  local_b0.ai_addrlen = 0;
  local_b0._20_4_ = 0;
  local_b0.ai_next = (addrinfo *)0x0;
  local_b0.ai_canonname = (char *)0x0;
  local_b0.ai_socktype = 1;
  local_b0.ai_protocol = 0;
  iVar2 = getaddrinfo(param_3,(char *)0x0,&local_b0,&local_78);
  if (iVar2 != 0) {
    if (iVar2 == 0xb) {
      piVar3 = (int *)__errno();
      iVar2 = *piVar3;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      uVar5 = (long)iVar2 << 0x20 | 2;
    }
    else {
      __s = gai_strerror(iVar2);
      sVar4 = strlen(__s);
      <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(&local_70,__s,sVar4 + 1);
      pcStack_38 = FUN_00708a54;
                    /* try { // try from 006d219c to 006d21af has its CatchHandler @ 006d223c */
      local_40 = &local_70;
      alloc::fmt::format::format_inner(&local_58,&DAT_0036c846,&local_40);
                    /* try { // try from 006d21b8 to 006d21c3 has its CatchHandler @ 006d2220 */
      uVar5 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,uStack_50,local_48);
      if (local_58 != 0) {
        __rustc::__rust_dealloc(uStack_50,local_58,1);
      }
      if (0 < local_70) {
        __rustc::__rust_dealloc(local_68,local_70,1);
      }
    }
    *param_1 = 1;
    param_1[1] = uVar5;
    return;
  }
  uVar1 = *(undefined2 *)*param_2;
  param_1[1] = local_78;
  param_1[2] = local_78;
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = 0;
  return;
}


// ===== 006d2260  FUN_006d2260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006d2260(ulong *param_1,long param_2,char *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined **__n;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 local_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  int local_1f0;
  uint local_1ec;
  undefined **local_1e8;
  undefined1 *local_1e0;
  int *local_1d8;
  long local_1d0 [47];
  int local_58;
  undefined4 uStack_54;
  undefined **local_50;
  
  uVar9 = param_1[2];
  if (uVar9 == 0) {
    if (*param_3 == '/') goto LAB_006d22f8;
    uVar4 = *param_1;
    uVar9 = 0;
  }
  else if (*param_3 == '/') {
LAB_006d22f8:
    uVar4 = *param_1;
    uVar9 = 0;
    param_1[2] = 0;
  }
  else {
    uVar4 = *param_1;
    uVar6 = param_1[1];
    if (*(char *)(uVar6 + uVar9 + -1) != '/') {
      if (uVar4 == uVar9) {
        FUN_006cecec(param_1,uVar9,1,1,1);
        uVar6 = param_1[1];
        uVar9 = param_1[2];
        uVar4 = *param_1;
      }
      *(undefined1 *)(uVar6 + uVar9) = 0x2f;
      uVar9 = uVar9 + 1;
      param_1[2] = uVar9;
    }
    uVar4 = uVar4 - uVar9;
  }
  if (uVar4 < param_4) {
    FUN_006cecec(param_1,uVar9,param_4,1,1);
    uVar9 = param_1[2];
  }
  memcpy((void *)(param_1[1] + uVar9),param_3,param_4);
  param_1[2] = uVar9 + param_4;
  local_200 = _s__00373250;
  *(undefined8 *)(param_2 + 0x10) = 0;
  __n = (undefined **)param_1[2];
  local_1f8 = 1;
  local_1f4 = 0;
  if (__n < (undefined **)0x180) {
    local_1e0 = (undefined1 *)&local_200;
    memcpy(&local_1d8,(void *)param_1[1],(size_t)__n);
    *(undefined1 *)((long)local_1d0 + (long)(__n + -1)) = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_58,&local_1d8,(long)__n + 1);
    if (CONCAT44(uStack_54,local_58) != 1) {
      FUN_006ea8b8(&local_1f0,local_50,&local_200);
      goto joined_r0x006d261c;
    }
    local_1e8 = &PTR_DAT_00977090;
    local_1f0 = 1;
  }
  else {
    local_1e0 = (undefined1 *)&local_200;
    FUN_006c94c0(&local_1f0,(void *)param_1[1],__n,&local_1e0,FUN_006d0e6c);
joined_r0x006d261c:
    if (local_1f0 != 1) {
      uVar9 = (ulong)local_1ec;
      iVar7 = 0;
      goto LAB_006d23e4;
    }
  }
  iVar7 = 1;
  local_50 = local_1e8;
  __n = local_1e8;
LAB_006d23e4:
  local_58 = iVar7;
                    /* try { // try from 006d23e8 to 006d23ef has its CatchHandler @ 006d2660 */
  <std::path::[r]::std::path::PathBuf>::pop(param_1);
  iVar8 = (int)uVar9;
  if (iVar7 != 0) {
    iVar8 = -1;
    if ((1 < ((ulong)__n & 3) - 2) && (((ulong)__n & 3) != 0)) {
      local_1d0[0] = (long)__n - 1;
      local_1d8 = (int *)CONCAT71(local_1d8._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_1d0);
    }
  }
  if (iVar8 != -1) {
    local_1d8 = &local_1f0;
                    /* try { // try from 006d2440 to 006d2483 has its CatchHandler @ 006d2648 */
    local_1f0 = iVar8;
    auVar10 = <&std::fs::File_as_std::io::Read>::read_to_string(&local_1d8,param_2);
    if (auVar10._0_8_ == 1) {
      if ((1 < (auVar10._8_8_ & 3) - 2) &&
         ((auVar10 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_1d0[0] = auVar10._8_8_ - 1;
        local_1d8 = (int *)CONCAT71(local_1d8._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_1d0);
      }
      close(local_1f0);
    }
    else {
      close(local_1f0);
      auVar10 = FUN_006bad34(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      lVar3 = auVar10._8_8_;
      pbVar5 = auVar10._0_8_;
      if (lVar3 == 0) {
        return 0;
      }
      if (lVar3 == 1) {
        bVar1 = *pbVar5;
        if (bVar1 == 0x2b) {
          return 0;
        }
        if (bVar1 == 0x2d) {
          return 0;
        }
        uVar9 = (ulong)(bVar1 != 0x2b);
        if (bVar1 == 0x2b) {
          pbVar5 = pbVar5 + 1;
        }
      }
      else {
        bVar1 = *pbVar5;
        if (bVar1 == 0x2b) {
          pbVar5 = pbVar5 + 1;
        }
        uVar9 = lVar3 - (ulong)(bVar1 == 0x2b);
      }
      if (uVar9 < 0x11) {
        if (uVar9 == 0) {
          return 1;
        }
        while (*pbVar5 - 0x30 < 10) {
          uVar9 = uVar9 - 1;
          pbVar5 = pbVar5 + 1;
          if (uVar9 == 0) {
            return 1;
          }
        }
      }
      else {
        uVar4 = 0;
        while( true ) {
          if (uVar9 == 0) {
            return 1;
          }
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar4;
          if (SUB168(auVar10 * ZEXT816(10),8) != 0) break;
          uVar6 = uVar4 * 10;
          uVar2 = *pbVar5 - 0x30;
          uVar4 = uVar6 + uVar2;
          if (9 < uVar2) {
            return 0;
          }
          uVar9 = uVar9 - 1;
          pbVar5 = pbVar5 + 1;
          if (CARRY8(uVar6,(ulong)uVar2)) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 006d2678  FUN_006d2678 =====

void FUN_006d2678(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)
           std::panicking::begin_panic<&str>
                     (param_1,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977378);
  puVar3 = *(undefined8 **)*puVar1;
  *(undefined8 *)*puVar1 = 0;
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar2 = __rustc::__rust_alloc(0x400,1);
  if (lVar2 != 0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0x400;
    puVar3[4] = lVar2;
    puVar3[5] = 0;
    *(undefined1 *)(puVar3 + 6) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x400);
}


// ===== 006d268c  FUN_006d268c =====

void FUN_006d268c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = __rustc::__rust_alloc(0x400,1);
  if (lVar1 != 0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x400;
    puVar2[4] = lVar1;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x400);
}


// ===== 006d26f4  FUN_006d26f4 =====

void FUN_006d26f4(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined1 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  *param_1 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 1;
    puVar2[4] = 1;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
}


// ===== 006d2734  FUN_006d2734 =====

void FUN_006d2734(undefined8 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977108);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = __rustc::__rust_alloc(0x2000,1);
  if (lVar1 != 0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    *(long *)(puVar2 + 2) = lVar1;
    *(undefined8 *)(puVar2 + 4) = 0x2000;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x2000);
}


// ===== 006d27a0  FUN_006d27a0 =====

void FUN_006d27a0(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_006cf4f4(&local_18);
  return;
}


// ===== 006d27c8  FUN_006d27c8 =====

void FUN_006d27c8(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_006cf630(&local_18);
  return;
}


// ===== 006d27f0  FUN_006d27f0 =====

void FUN_006d27f0(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_006cf814(&local_18);
  return;
}


// ===== 006d2818  thunk_FUN_006cfeb8 =====

void thunk_FUN_006cfeb8(undefined8 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long alStack_b8 [2];
  long *plStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  pbVar7 = (byte *)param_1[1];
  *(undefined1 *)*param_1 = 1;
  if (((*pbVar7 & 1) == 0) &&
     (<std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name
                (&plStack_a8,param_2), plStack_a8 != (long *)0xffffffffffffffff)) {
    if (plStack_a8 == (long *)&DAT_00000002) {
      core::str::converts::from_utf8(&puStack_58,uStack_68,uStack_60);
      uStack_88 = uStack_50;
      uStack_80 = uStack_48;
      if (((ulong)puStack_58 & 1) == 0) {
LAB_006d008c:
        uVar3 = FUN_0070c920(&DAT_0045ae46,0x1a,uStack_88,uStack_80);
        pbVar7 = (byte *)param_1[2];
        if ((uVar3 & 1) != 0) {
          *pbVar7 = 1;
          return;
        }
        if ((*pbVar7 & 1) != 0) {
          iVar2 = FUN_0070c920(&DAT_0045ae60,0x1c,uStack_88,uStack_80);
          if (iVar2 != 0) {
            *pbVar7 = 0;
            return;
          }
          if ((*pbVar7 & 1) != 0) goto LAB_006cfeec;
        }
        *(long *)param_1[3] = *(long *)param_1[3] + 1;
      }
    }
    else if (uStack_88 != 0) goto LAB_006d008c;
  }
LAB_006cfeec:
  if ((*(byte *)param_1[2] & 1) == 0) {
    return;
  }
  plVar5 = (long *)param_1[3];
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    pbVar7 = (byte *)param_1[4];
    if ((*pbVar7 & 1) == 0) {
      puStack_58 = &UNK_0045ae7c;
      uStack_50 = (ulong)(lVar4 != 1);
      if (lVar4 == 1) {
        puStack_58 = (undefined *)0x1;
      }
      puStack_a0 = PTR_fmt_0099f458;
      ppuStack_98 = &puStack_58;
      pcStack_90 = FUN_006ff764;
      plStack_a8 = plVar5;
      core::fmt::write(**(undefined8 **)param_1[5],(*(undefined8 **)param_1[5])[1],&DAT_0036c731,
                       &plStack_a8);
    }
    *pbVar7 = 0;
    *plVar5 = 0;
  }
  alStack_b8[0] = param_1[5];
  uVar6 = *(undefined8 *)((uint *)param_1[7] + 2);
  alStack_b8[1] = 0;
  if ((*(uint *)param_1[7] & 1) == 0) {
    uVar6 = FUN_00751e80(uVar6);
  }
  <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name(&plStack_a8,param_2);
  iVar2 = *param_2;
  if (iVar2 == 2) {
LAB_006d0024:
    puStack_58 = (undefined *)0x2;
  }
  else {
    if (iVar2 == -1) {
      iVar2 = 0;
      puStack_58 = (undefined *)0x2;
      goto LAB_006d003c;
    }
    if (*(ulong *)(param_2 + 4) == 0) goto LAB_006d0024;
    uStack_48 = *(undefined8 *)(param_2 + 6);
    puStack_58 = (undefined *)0x0;
    uStack_50 = *(ulong *)(param_2 + 4);
  }
  if (iVar2 == 2) {
    iVar2 = 0;
  }
LAB_006d003c:
  uVar1 = FUN_006e18a0(alStack_b8,uVar6,&plStack_a8,&puStack_58,iVar2);
  *(undefined1 *)param_1[6] = uVar1;
  *(long *)(alStack_b8[0] + 0x18) = *(long *)(alStack_b8[0] + 0x18) + 1;
  return;
}


// ===== 006d281c  FUN_006d281c =====

void FUN_006d281c(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_006d013c(&local_18);
  return;
}


// ===== 006d2844  FUN_006d2844 =====

undefined8 FUN_006d2844(void)

{
  FUN_006d0d24();
  return 1;
}


// ===== 006d285c  FUN_006d285c =====

ulong FUN_006d285c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar3 = *param_1;
  uStack_40 = param_3[1];
  local_48 = *param_3;
  local_38 = param_3[2];
  plVar1 = (long *)0x0;
  if (lVar3 != -1) {
    plVar1 = param_1;
  }
                    /* try { // try from 006d28a0 to 006d28ab has its CatchHandler @ 006d28e4 */
  uVar2 = FUN_006f21c4(param_2,&local_48,(char)param_1[3],plVar1);
  if (0 < lVar3) {
    uVar2 = uVar2 & 0xffffffff;
    __rustc::__rust_dealloc(param_1[1],lVar3,1);
  }
  return uVar2;
}


// ===== 006d2908  thunk_FUN_006d1844 =====

byte thunk_FUN_006d1844(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  undefined8 in_x5;
  undefined8 in_x7;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long alStack_b8 [2];
  byte *pbStack_a8;
  char *pcStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  byte *pbStack_78;
  uint *puStack_70;
  undefined8 auStack_58 [3];
  byte abStack_24 [4];
  
  pcStack_a0 = (char *)*param_1;
  if ((*pcStack_a0 == '\0') && (100 < *(ulong *)param_1[1])) {
    bVar5 = 0;
  }
  else {
    pbStack_a8 = abStack_24;
    pbVar2 = (byte *)param_1[2];
    lVar3 = param_1[3];
    lVar7 = *(long *)(param_2 + 2);
    uVar9 = param_1[5];
    pbVar8 = (byte *)param_1[4];
    uStack_88 = param_1[6];
    uVar4 = *param_2;
    abStack_24[0] = 0;
    lVar6 = lVar7;
    pbStack_98 = pbVar8;
    uStack_90 = uVar9;
    lStack_80 = lVar3;
    pbStack_78 = pbVar2;
    puStack_70 = param_2;
    if ((uVar4 & 1) == 0) {
      lVar6 = FUN_00751e80(lVar7);
    }
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = lVar6 + -1;
    }
    FUN_006bde28(lVar1,&pbStack_a8,&DAT_00976fe0);
    if ((abStack_24[0] & 1) == 0) {
      if ((*pbVar8 & 1) != 0) {
        alStack_b8[1] = 0;
        alStack_b8[0] = lVar3;
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_00751e80(lVar7);
        }
        pbStack_a8 = (byte *)0xffffffffffffffff;
        auStack_58[0] = 2;
        bVar5 = FUN_006e18a0(alStack_b8,lVar7,&pbStack_a8,auStack_58,0,in_x5,0,in_x7,pbVar8,uVar9);
        *pbVar2 = bVar5;
        *(long *)(alStack_b8[0] + 0x18) = *(long *)(alStack_b8[0] + 0x18) + 1;
      }
    }
    *(long *)param_1[1] = *(long *)param_1[1] + 1;
    bVar5 = *pbVar2 ^ 1;
  }
  return bVar5 & 1;
}


// ===== 006d290c  FUN_006d290c =====

void FUN_006d290c(undefined8 *param_1)

{
  FUN_00755a48(*(undefined8 *)*param_1);
  return;
}


// ===== 006d2918  FUN_006d2918 =====

void FUN_006d2918(undefined8 *param_1)

{
  FUN_00755a04(*(undefined8 *)*param_1);
  return;
}


// ===== 006d2924  FUN_006d2924 =====

ulong FUN_006d2924(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  long local_28;
  
  lVar4 = *param_1;
  uStack_40 = param_3[1];
  local_48 = *param_3;
  local_38 = param_3[2];
  plVar1 = (long *)0x0;
  if (lVar4 != -1) {
    plVar1 = param_1;
  }
                    /* try { // try from 006d2964 to 006d296f has its CatchHandler @ 006d29f0 */
  uVar2 = FUN_006f21c4(param_2,&local_48,(char)param_1[3],plVar1);
  uVar3 = param_1[1];
  if (lVar4 == -1) {
    if ((1 < (uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      local_30 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      return uVar2 & 0xffffffff;
    }
  }
  else if (lVar4 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    __rustc::__rust_dealloc(uVar3,lVar4,1);
  }
  return uVar2;
}


// ===== 006d2a08  FUN_006d2a08 =====

void FUN_006d2a08(undefined8 param_1,undefined8 param_2)

{
  std::panicking::default_hook(param_2);
  return;
}


// ===== 006d2a10  __rustc::rust_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::rust_panic */

void __rustcall __rustc::rust_panic(void)

{
  undefined4 local_2c;
  undefined4 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_2c = __rust_start_panic();
  local_28 = &local_2c;
  puStack_20 = PTR_fmt_0099f518;
  FUN_0070e928(&uStack_11,&DAT_0036bcad,&local_28);
  FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006d2a50  FUN_006d2a50 =====

void * FUN_006d2a50(size_t param_1,size_t param_2)

{
  int iVar1;
  void *pvVar2;
  void *local_18;
  
  if ((param_2 < 0x11) && (param_2 <= param_1)) {
    pvVar2 = malloc(param_1);
    return pvVar2;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  local_18 = (void *)0x0;
  iVar1 = posix_memalign(&local_18,param_2,param_1);
  if (iVar1 != 0) {
    local_18 = (void *)0x0;
  }
  return local_18;
}


// ===== 006d2aa8  __rustc::__rust_abort =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_abort */

void __rustcall __rustc::__rust_abort(void)

{
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006d2ab4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_009a1188)();
  return;
}


// ===== 006d2ab8  FUN_006d2ab8 =====

void * FUN_006d2ab8(void *param_1,ulong param_2,size_t param_3,size_t param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_38;
  
  if ((param_3 < 0x11) && (param_3 <= param_4)) {
    pvVar2 = realloc(param_1,param_4);
    return pvVar2;
  }
  if (param_3 < 9) {
    param_3 = 8;
  }
  local_38 = (void *)0x0;
  iVar1 = posix_memalign(&local_38,param_3,param_4);
  pvVar2 = local_38;
  pvVar3 = (void *)0x0;
  if ((iVar1 == 0) && (local_38 != (void *)0x0)) {
    if (param_2 <= param_4) {
      param_4 = param_2;
    }
    memcpy(local_38,param_1,param_4);
    free(param_1);
    pvVar3 = pvVar2;
  }
  return pvVar3;
}


// ===== 006d2b64  __rustc::__rust_drop_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_drop_panic */

void __rustcall __rustc::__rust_drop_panic(undefined8 param_1)

{
  ulong uVar1;
  long local_18;
  
                    /* try { // try from 006d2b70 to 006d2bb3 has its CatchHandler @ 006d2bb8 */
  uVar1 = FUN_0070e804(param_1,&DAT_0045afba,0x3c);
  if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    local_18 = uVar1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006d2bbc  __rustc::rust_begin_unwind =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::rust_begin_unwind */

void * __rustcall __rustc::rust_begin_unwind(undefined8 *param_1)

{
  int iVar1;
  size_t __size;
  void *pvVar2;
  void *pvVar3;
  size_t __alignment;
  undefined1 auVar4 [16];
  void *pvStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 *local_18;
  
  local_28 = *param_1;
  uStack_20 = param_1[1];
  local_18 = param_1;
  auVar4 = std::sys::backtrace::
           __rust_end_short_backtrace<std::panicking::panic_handler::_closure_0_,_>(&local_28);
  __alignment = auVar4._8_8_;
  __size = auVar4._0_8_;
  pcStack_48 = FUN_006d2bdc;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((__alignment < 0x11) && (__alignment <= __size)) {
    pvVar2 = calloc(__size,1);
    return pvVar2;
  }
  if (__alignment < 9) {
    __alignment = 8;
  }
  pvStack_58 = (void *)0x0;
  iVar1 = posix_memalign(&pvStack_58,__alignment,__size);
  pvVar2 = pvStack_58;
  pvVar3 = (void *)0x0;
  if ((iVar1 == 0) && (pvStack_58 != (void *)0x0)) {
    memset(pvStack_58,0,__size);
    pvVar3 = pvVar2;
  }
  return pvVar3;
}


// ===== 006d2bdc  FUN_006d2bdc =====

void * FUN_006d2bdc(size_t param_1,size_t param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_28;
  
  if ((param_2 < 0x11) && (param_2 <= param_1)) {
    pvVar2 = calloc(param_1,1);
    return pvVar2;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  local_28 = (void *)0x0;
  iVar1 = posix_memalign(&local_28,param_2,param_1);
  pvVar2 = local_28;
  pvVar3 = (void *)0x0;
  if ((iVar1 == 0) && (local_28 != (void *)0x0)) {
    memset(local_28,0,param_1);
    pvVar3 = pvVar2;
  }
  return pvVar3;
}


// ===== 006d2c6c  __rustc::__rust_foreign_exception =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_foreign_exception */

void __rustcall __rustc::__rust_foreign_exception(undefined8 param_1)

{
  ulong uVar1;
  long local_18;
  
                    /* try { // try from 006d2c78 to 006d2cbb has its CatchHandler @ 006d2cc0 */
  uVar1 = FUN_0070e804(param_1,&DAT_0045aff6,0x44);
  if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    local_18 = uVar1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006d2cc4  __rustc::__rust_alloc_error_handler =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_alloc_error_handler */

undefined1  [16] __rustcall
__rustc::__rust_alloc_error_handler(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar4;
  
  auVar6 = std::alloc::rust_oom(param_2,param_1);
  lVar4 = auVar6._8_8_;
  lVar5 = *auVar6._0_8_;
  lVar3 = lVar5 + lVar4;
  if (lVar4 < 0 == SCARRY8(lVar5,lVar4)) {
    uVar1 = (int)auVar6._0_8_[1] + param_3;
    if (999999999 < uVar1) {
      bVar2 = SCARRY8(lVar3,1);
      lVar3 = lVar3 + 1;
      if (bVar2) goto LAB_006d2d2c;
      uVar1 = uVar1 + 0xc4653600;
    }
    auVar7._8_4_ = uVar1;
    auVar7._0_8_ = lVar3;
    auVar7._12_4_ = 0;
    return auVar7;
  }
LAB_006d2d2c:
  auVar6._8_8_ = 0xffffffff;
  auVar6._0_8_ = lVar3;
  return auVar6;
}


// ===== 006d2cdc  <std::time::std::time::Instant>::checked_add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::std::time::Instant>::checked_add */

undefined1  [16] __rustcall
<std::time::std::time::Instant>::checked_add(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar3 = *param_1 + param_2;
  if (param_2 < 0 == SCARRY8(*param_1,param_2)) {
    uVar1 = (int)param_1[1] + param_3;
    if (999999999 < uVar1) {
      bVar2 = SCARRY8(lVar3,1);
      lVar3 = lVar3 + 1;
      if (bVar2) goto LAB_006d2d2c;
      uVar1 = uVar1 + 0xc4653600;
    }
    auVar4._8_4_ = uVar1;
    auVar4._0_8_ = lVar3;
    auVar4._12_4_ = 0;
    return auVar4;
  }
LAB_006d2d2c:
  auVar5._8_8_ = 0xffffffff;
  auVar5._0_8_ = lVar3;
  return auVar5;
}


// ===== 006d2d34  <std::time::std::time::Instant>::checked_sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::std::time::Instant>::checked_sub */

undefined1  [16] __rustcall
<std::time::std::time::Instant>::checked_sub(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar2 = *param_1 - param_2;
  if (param_2 < 0 == SBORROW8(*param_1,param_2)) {
    param_3 = (int)param_1[1] - param_3;
    if (-1 < param_3) {
      auVar3._8_4_ = param_3;
      auVar3._0_8_ = lVar2;
      auVar3._12_4_ = 0;
      return auVar3;
    }
    bVar1 = SBORROW8(lVar2,1);
    lVar2 = lVar2 + -1;
    if (!bVar1) {
      auVar4._8_4_ = param_3 + 1000000000;
      auVar4._0_8_ = lVar2;
      auVar4._12_4_ = 0;
      return auVar4;
    }
  }
  auVar5._8_8_ = 0xffffffff;
  auVar5._0_8_ = lVar2;
  return auVar5;
}


// ===== 006d2d84  <std::time::std::time::Instant>::duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::std::time::Instant>::duration_since */

undefined1  [16] __rustcall
<std::time::std::time::Instant>::duration_since
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_38;
  undefined4 local_30;
  int local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = param_2;
  local_30 = param_3;
  FUN_006d62cc(local_28,param_1,&local_38);
  uVar1 = 0;
  if (local_28[0] == 0) {
    uVar1 = local_18;
  }
  uVar2 = 0;
  if (local_28[0] == 0) {
    uVar2 = local_20;
  }
  auVar3._8_4_ = uVar1;
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0;
  return auVar3;
}


// ===== 006d2dd0  <std::time::std::time::Instant>::checked_duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::std::time::Instant>::checked_duration_since */

undefined1  [16] __rustcall
<std::time::std::time::Instant>::checked_duration_since
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined8 local_38;
  undefined4 local_30;
  int local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = param_2;
  local_30 = param_3;
  FUN_006d62cc(local_28,param_1,&local_38);
  if (local_28[0] != 0) {
    local_18 = 0xffffffff;
  }
  auVar1._8_4_ = local_18;
  auVar1._0_8_ = local_20;
  auVar1._12_4_ = 0;
  return auVar1;
}


// ===== 006d2e18  <std::time::std::time::Instant>::now =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::std::time::Instant>::now */

void __rustcall <std::time::std::time::Instant>::now(void)

{
  FUN_006d63bc(1);
  return;
}


// ===== 006d2e20  <std::time::std::time::Instant>::elapsed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::std::time::Instant>::elapsed */

undefined1  [16] __rustcall <std::time::std::time::Instant>::elapsed(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 local_58 [12];
  undefined8 local_48;
  undefined4 local_40;
  int local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  
  local_58 = FUN_006d63bc(1);
  local_48 = *param_1;
  local_40 = *(undefined4 *)(param_1 + 1);
  FUN_006d62cc(local_38,local_58,&local_48);
  uVar1 = 0;
  if (local_38[0] == 0) {
    uVar1 = local_28;
  }
  uVar2 = 0;
  if (local_38[0] == 0) {
    uVar2 = local_30;
  }
  auVar3._8_4_ = uVar1;
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0;
  return auVar3;
}


// ===== 006d2e8c  FUN_006d2e8c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006d2e8c(undefined8 *param_1,long ****param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  long ****extraout_x8;
  long ****pppplVar6;
  short sVar7;
  ulong uVar8;
  long ***ppplVar9;
  ulong ***pppuVar10;
  undefined1 uVar11;
  ulong extraout_x10;
  ulong uVar12;
  ulong *puVar13;
  ulong extraout_x11;
  ulong uVar14;
  long lVar15;
  ulong **ppuVar16;
  long ***ppplVar17;
  long lVar18;
  long ****unaff_x26;
  long ***ppplVar19;
  undefined1 auVar20 [16];
  long ***local_158;
  ulong ***pppuStack_150;
  long ****local_148;
  long ****pppplStack_140;
  ulong ***local_138;
  long ****pppplStack_130;
  long ****local_128;
  long *plStack_120;
  long ****local_118;
  long ****pppplStack_110;
  undefined8 local_100;
  long ****local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  long ****local_d8;
  ulong ***local_d0;
  byte local_c8;
  byte local_c7;
  undefined4 local_c6;
  undefined2 local_c2;
  long ****local_c0;
  short sStack_b8;
  undefined6 uStack_b6;
  
  cVar1 = *(char *)(param_2 + 0x43);
  if (cVar1 == -2) {
    if (param_2[10] != (long ***)0x1) {
      FUN_006baf78(param_2 + 0x43);
      cVar1 = *(char *)(param_2 + 0x43);
      goto joined_r0x006d319c;
    }
    ppplVar17 = param_2[0x31];
    if (ppplVar17 != (long ***)0x0) {
      unaff_x26 = (long ****)param_2[0x32];
    }
    local_158 = param_2[5];
    pppuStack_150 = (ulong ***)param_2[6];
    ppplVar19 = param_2[0xb];
    local_138 = (ulong ***)0x0;
    pppplStack_140 = (long ****)(param_2[0x2e] + 2);
    local_100 = 0;
    local_148 = param_2;
    FUN_006e9da8(&local_f8,&local_158);
    pppplVar6 = pppplStack_130;
    pppuVar10 = local_138;
    auVar4._8_8_ = local_e8._8_8_;
    auVar4._0_8_ = local_e8._0_8_;
    uVar8 = (ulong)local_f8 & 0xff;
    if ((char)local_f8 == -1) {
      if (local_138 == (ulong ***)0x0) {
        uVar8 = 0x45;
        uStack_f0 = extraout_x8;
        uVar12 = extraout_x10;
        uVar14 = extraout_x11;
        goto LAB_006d2f34;
      }
      sVar7 = 0x2130;
      if (4 < *(ushort *)((long)param_2 + 0x4a)) {
        sVar7 = 0x76;
      }
      auVar20 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(local_128);
      local_f8 = (long ****)pppuVar10;
      uStack_f0 = pppplVar6;
      local_d8 = (long ****)&local_138;
      do {
        pppplVar6 = local_d8;
        lVar15 = auVar20._0_8_;
        lVar18 = auVar20._8_8_ + -1;
        local_e8 = auVar20;
        if (lVar18 == -1) {
          if (((ulong)local_d8[5] & 1) == 0) {
            ppplVar9 = (long ***)((long)local_f8 - (long)*local_d8);
            local_d8[5] = (long ***)0x1;
            pppplVar6[6] = ppplVar9;
          }
          ppuVar16 = (ulong **)*param_4;
          local_c0 = pppplVar6;
          auVar3 = local_e8;
          goto LAB_006d3104;
        }
        FUN_006c753c(&local_d0,&local_f8,*(undefined4 *)(local_d8[3] + 9),lVar15);
        if (local_d0 == (ulong ***)0xffffffffffffffff) {
          uVar8 = (ulong)local_c8;
          uVar12 = (ulong)local_c7;
          uVar14 = (ulong)CONCAT24(local_c2,local_c6);
          uStack_f0 = local_c0;
          goto LAB_006d2f34;
        }
        auVar20._8_8_ = lVar18;
        auVar20._0_8_ = lVar15 + 0x10;
        local_e8._8_8_ = CONCAT62(uStack_b6,sStack_b8);
      } while (sVar7 != sStack_b8);
      local_f8 = (long ****)local_d0;
      local_e8._0_8_ = local_c0;
      FUN_006e8254(&local_d0,&local_f8);
      uVar8 = (ulong)local_c8;
      uVar12 = (ulong)local_c7;
      uVar14 = (ulong)CONCAT24(local_c2,local_c6);
      uStack_f0 = local_c0;
      if (local_d0 == (ulong ***)0xfffffffffffffffe) goto LAB_006d2f34;
      ppuVar16 = (ulong **)*param_4;
      local_f8 = (long ****)local_d0;
      uStack_f0 = (long ****)CONCAT26(local_c2,CONCAT42(local_c6,CONCAT11(local_c7,local_c8)));
      local_e8._0_8_ = local_c0;
      auVar3._8_8_ = local_e8._8_8_;
      auVar3._0_8_ = local_c0;
      if (local_d0 == (ulong ***)0xffffffffffffffff) {
LAB_006d3104:
        pppuVar10 = (ulong ***)0x0;
LAB_006d310c:
        do {
          local_e8._8_8_ = auVar3._8_8_;
          puVar13 = *ppuVar16;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar2) {
            *ppuVar16 = (ulong *)((long)puVar13 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x6d3220);
          local_e8 = auVar3;
          (*pcVar5)();
        }
        local_158 = (long ***)ppuVar16;
        pppuStack_150 = (ulong ***)ppplVar19;
        local_148 = (long ****)ppplVar17;
        pppplStack_140 = unaff_x26;
        local_138 = pppuVar10;
        pppplStack_130 = local_c0;
        local_128 = param_2;
        plStack_120 = param_4;
        local_118 = param_2;
        pppplStack_110 = param_2;
        if (ppuVar16 != (ulong **)0x0) {
          param_1[1] = ppplVar19;
          *param_1 = ppuVar16;
          param_1[3] = unaff_x26;
          param_1[2] = ppplVar17;
          param_1[0xc] = param_3;
          param_1[9] = param_2;
          param_1[8] = param_2;
          param_1[0xb] = param_4;
          param_1[10] = param_2;
          param_1[5] = local_c0;
          param_1[4] = pppuVar10;
          param_1[7] = param_4;
          param_1[6] = param_2;
          return;
        }
        goto LAB_006d31c0;
      }
      FUN_006d8310(&local_158,ppuVar16 + 2,*(undefined1 *)((long)param_2 + 0x49),param_2[0x34],
                   &local_f8);
      auVar3._8_8_ = local_e8._8_8_;
      auVar3._0_8_ = local_e8._0_8_;
      local_c0 = local_148;
      pppplVar6 = local_148;
      pppuVar10 = pppuStack_150;
      if (local_158 != (long ***)0x1) goto LAB_006d310c;
    }
    else {
      uVar14 = (ulong)local_f8 >> 0x10;
      uVar12 = (ulong)local_f8 >> 8 & 0xff;
      local_e8 = auVar4;
LAB_006d2f34:
      pppplVar6 = uStack_f0;
      pppuVar10 = (ulong ***)(uVar8 | (uVar12 & 0xff) << 8 | uVar14 << 0x10);
      auVar3 = local_e8;
    }
    local_e8._8_8_ = auVar3._8_8_;
    cVar1 = *(char *)(param_2 + 0x43);
    if (cVar1 != -2) goto joined_r0x006d319c;
    local_f8 = (long ****)pppuVar10;
    uStack_f0 = pppplVar6;
    local_e8 = auVar3;
    FUN_006bafc0(param_2 + 0x43,&local_f8);
    if (*(char *)(param_2 + 0x43) != -1) goto LAB_006d31a0;
LAB_006d2f58:
    pppplStack_140 = (long ****)param_2[0x44];
    if (pppplStack_140 == (long ****)0x0) {
      uVar11 = 0;
      local_148 = (long ****)(*param_4 + 0x10);
      pppplStack_140 = param_2;
    }
    else {
      uVar11 = 2;
      local_148 = (long ****)(pppplStack_140[0x38] + 2);
    }
  }
  else {
joined_r0x006d319c:
    if (cVar1 == -1) goto LAB_006d2f58;
LAB_006d31a0:
    local_148 = (long ****)param_2[0x43];
    pppplStack_140 = (long ****)param_2[0x44];
    uVar11 = 0xff;
  }
  pppuStack_150 = (ulong ***)CONCAT71(pppuStack_150._1_7_,uVar11);
  local_158 = (long ***)0x0;
LAB_006d31c0:
  local_f8 = param_2;
  uStack_f0 = (long ****)param_4;
  local_e8._0_8_ = param_3;
  FUN_006d0580(param_1 + 1,&local_f8,&pppuStack_150);
  *param_1 = 0;
  return;
}


// ===== 006d3220  <std::ffi::os_str::std::ffi::os_str::OsString>::into_boxed_os_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::std::ffi::os_str::OsString>::into_boxed_os_str */

undefined1  [16] __rustcall
<std::ffi::os_str::std::ffi::os_str::OsString>::into_boxed_os_str(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 1);
  uVar2 = param_1[2];
  uVar3 = *param_1;
  if (uVar3 <= uVar2) {
    return *(undefined1 (*) [16])(param_1 + 1);
  }
  if (uVar2 != 0) {
    auVar4._0_8_ = __rustc::__rust_realloc(uVar1,uVar3,1,uVar2);
    if (auVar4._0_8_ != 0) {
      auVar4._8_8_ = uVar2;
      return auVar4;
    }
                    /* try { // try from 006d32b0 to 006d32bb has its CatchHandler @ 006d32c0 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,uVar2);
  }
  __rustc::__rust_dealloc(uVar1,uVar3,1);
  return ZEXT816(1);
}


// ===== 006d32dc  <std::net::tcp::std::net::tcp::TcpStream>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::local_addr */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::local_addr(undefined8 param_1,undefined4 *param_2)

{
  FUN_006dcc64(param_1,*param_2);
  return;
}


// ===== 006d32e8  <std::net::tcp::std::net::tcp::TcpStream>::set_linger =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::set_linger */

ulong __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::set_linger(int *param_1,ulong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint local_8;
  undefined4 uStack_4;
  
  if (0x7ffffffe < param_2) {
    param_2 = 0x7fffffff;
  }
  uStack_4 = (undefined4)param_2;
  if (param_3 == -1) {
    uStack_4 = 0;
  }
  local_8 = (uint)(param_3 != -1);
  iVar1 = setsockopt(*param_1,1,0xd,&local_8,8);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d3398  <std::net::udp::std::net::udp::UdpSocket>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::take_error */

undefined1  [16] __rustcall <std::net::udp::std::net::udp::UdpSocket>::take_error(int *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 4;
  iVar2 = getsockopt(*param_1,1,4,local_8,(socklen_t *)(local_8 + 1));
  if (iVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
      auVar5._8_8_ = (long)iVar2 << 0x20 | 2;
      auVar5._0_8_ = 1;
      return auVar5;
    }
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    auVar6._8_8_ = (long)iVar2 << 0x20 | 2;
    auVar6._0_8_ = 1;
    return auVar6;
  }
  lVar4 = (long)local_8[0];
  if (local_8[0] != 0) {
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = lVar4 << 0x20 | 2;
    return auVar1 << 0x40;
  }
  return ZEXT816(0);
}


// ===== 006d348c  <std::net::tcp::std::net::tcp::TcpStream>::set_nodelay =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::set_nodelay */

ulong __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::set_nodelay(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,6,1,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d3524  <std::net::udp::std::net::udp::UdpSocket>::read_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::read_timeout */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::read_timeout(undefined8 param_1,undefined4 *param_2)

{
  FUN_006d7d5c(param_1,*param_2,0x14);
  return;
}


// ===== 006d3534  <std::net::tcp::std::net::tcp::TcpStream>::set_keepalive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::set_keepalive */

ulong __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::set_keepalive(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,9,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d35cc  <std::net::tcp::std::net::tcp::TcpStream>::write_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::write_timeout */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::write_timeout(undefined8 param_1,undefined4 *param_2)

{
  FUN_006d7d5c(param_1,*param_2,0x15);
  return;
}


// ===== 006d35dc  <std::net::tcp::std::net::tcp::TcpStream>::connect_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::connect_timeout */

uint * __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::connect_timeout
          (undefined4 *param_1,short *param_2,undefined *param_3,uint param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  int __fd;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  long lVar17;
  socklen_t __len;
  undefined4 uVar19;
  ulong uVar20;
  undefined4 extraout_w9;
  short *psVar21;
  undefined **ppuVar22;
  undefined **unaff_x25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 local_a8 [8];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  pollfd local_88;
  undefined1 local_80 [12];
  undefined1 local_70 [12];
  undefined **ppuVar18;
  
  if (*param_2 == 1) {
    __fd = socket(10,0x80001,0);
    if (__fd != -1) {
      local_a8._0_4_ = 1;
      iVar13 = ioctl(__fd,0x5421,local_a8);
      if (iVar13 != -1) {
        uVar3 = param_2[0xe];
        local_90 = *(undefined4 *)(param_2 + 0xc);
        psVar21 = param_2 + 10;
        uStack_98 = *(undefined8 *)(param_2 + 6);
        local_a0 = *(undefined **)(param_2 + 2);
        __len = 0x1c;
        local_a8._0_2_ = 10;
        goto LAB_006d36c0;
      }
LAB_006d3728:
      piVar16 = (int *)__errno();
      iVar13 = *piVar16;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006d3a5c to 006d3a77 has its CatchHandler @ 006d3ac4 */
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      ppuVar22 = (undefined **)((long)iVar13 << 0x20 | 2);
      goto LAB_006d3848;
    }
LAB_006d36f8:
    puVar15 = (uint *)__errno();
    uVar14 = *puVar15;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      puVar15 = (uint *)core::io::error::os_functions::set_functions::set_functions_inner
                                  (&PTR_FUN_00977078);
    }
    ppuVar22 = (undefined **)((ulong)uVar14 << 0x20 | 2);
  }
  else {
    __fd = socket(2,0x80001,0);
    if (__fd == -1) goto LAB_006d36f8;
    local_a8._0_4_ = 1;
    iVar13 = ioctl(__fd,0x5421,local_a8);
    if (iVar13 == -1) goto LAB_006d3728;
    local_a0 = (undefined *)0x0;
    uStack_98 = 0;
    uVar3 = param_2[3];
    psVar21 = param_2 + 1;
    __len = 0x10;
    local_a8._0_2_ = 2;
    local_90 = extraout_w9;
LAB_006d36c0:
    local_a8._2_2_ = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
    local_a8._4_4_ = *(undefined4 *)psVar21;
    iVar13 = connect(__fd,(sockaddr *)local_a8,__len);
    if (iVar13 == -1) {
      piVar16 = (int *)__errno();
      iVar13 = *piVar16;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      bVar4 = true;
      unaff_x25 = (undefined **)((long)iVar13 << 0x20 | 2);
    }
    else {
      bVar4 = false;
    }
    local_a8 = (undefined1  [8])((ulong)local_a8 & 0xffffffff00000000);
    uVar14 = ioctl(__fd,0x5421,local_a8);
    auVar10._8_4_ = local_70._8_4_;
    auVar10._0_8_ = local_70._0_8_;
    auVar9._8_4_ = local_70._8_4_;
    auVar9._0_8_ = local_70._0_8_;
    auVar8._8_4_ = local_70._8_4_;
    auVar8._0_8_ = local_70._0_8_;
    auVar5._8_4_ = local_80._8_4_;
    auVar5._0_8_ = local_80._0_8_;
    auVar25._8_4_ = local_80._8_4_;
    auVar25._0_8_ = local_80._0_8_;
    auVar24._8_4_ = local_80._8_4_;
    auVar24._0_8_ = local_80._0_8_;
    if (uVar14 == 0xffffffff) {
      piVar16 = (int *)__errno();
      iVar13 = *piVar16;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006d3a7c to 006d3abf has its CatchHandler @ 006d3aec */
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      auVar12._8_4_ = local_70._8_4_;
      auVar12._0_8_ = local_70._0_8_;
      auVar11._8_4_ = local_70._8_4_;
      auVar11._0_8_ = local_70._0_8_;
      auVar7._8_4_ = local_80._8_4_;
      auVar7._0_8_ = local_80._0_8_;
      auVar6._8_4_ = local_80._8_4_;
      auVar6._0_8_ = local_80._0_8_;
      ppuVar22 = (undefined **)((long)iVar13 << 0x20 | 2);
      if (((bVar4) && (local_80 = auVar6, local_70 = auVar11, 1 < ((ulong)unaff_x25 & 3) - 2)) &&
         (local_80 = auVar7, local_70 = auVar12, ((ulong)unaff_x25 & 3) == 1)) {
        local_a0 = (undefined *)((long)unaff_x25 + -1);
        local_a8[0] = 3;
                    /* try { // try from 006d383c to 006d3843 has its CatchHandler @ 006d3ac4 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_a0);
      }
    }
    else {
      if (!bVar4) {
LAB_006d3a38:
        puVar15 = (uint *)(ulong)uVar14;
        uVar19 = 0;
        param_1[1] = __fd;
        goto LAB_006d3858;
      }
      ppuVar22 = unaff_x25;
      if (((1 < ((ulong)unaff_x25 & 3)) &&
          (local_80 = auVar24, local_70 = auVar8, ((ulong)unaff_x25 & 3) == 2)) &&
         (local_80 = auVar25, local_70 = auVar9, (ulong)unaff_x25 >> 0x20 == 0x73)) {
        local_88.events = 4;
        local_88.revents = 0;
        local_88.fd = __fd;
        if ((param_3 == (undefined *)0x0) && (param_4 == 0)) {
          ppuVar22 = &PTR_DAT_00977660;
          local_80 = auVar5;
          local_70 = auVar10;
        }
        else {
                    /* try { // try from 006d387c to 006d3887 has its CatchHandler @ 006d3aec */
          auVar24 = FUN_006d63bc(1);
LAB_006d3898:
          do {
                    /* try { // try from 006d3898 to 006d38c3 has its CatchHandler @ 006d3ae8 */
            auVar25 = FUN_006d63bc(1);
            local_70 = auVar24;
            local_80 = auVar25;
            FUN_006d62cc(local_a8,local_80,local_70);
            uVar14 = 0;
            if (local_a8._0_4_ == 0) {
              uVar14 = (uint)uStack_98;
            }
            puVar1 = (undefined *)0x0;
            if (local_a8._0_4_ == 0) {
              puVar1 = local_a0;
            }
            bVar4 = param_4 <= uVar14;
            if (param_3 != puVar1) {
              bVar4 = param_3 <= puVar1;
            }
            if (bVar4) {
              ppuVar22 = (undefined **)&UNK_009776a8;
              goto LAB_006d3848;
            }
            uVar20 = (long)param_3 - (long)puVar1;
            if (param_3 < puVar1) {
LAB_006d3aa8:
                    /* WARNING: Subroutine does not return */
              core::option::expect_failed
                        (&DAT_0045b2cd,0x23,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977678);
            }
            if (param_4 < uVar14) {
              if (uVar20 == 0) goto LAB_006d3aa8;
              uVar20 = uVar20 - 1;
              uVar14 = (param_4 + 1000000000) - uVar14;
            }
            else {
              uVar14 = param_4 - uVar14;
            }
            if (999999999 < uVar14) {
              if (uVar20 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                core::option::expect_failed
                          (&DAT_0045b03a,0x19,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977390);
              }
              uVar20 = uVar20 + 1;
              uVar14 = uVar14 + 0xc4653600;
            }
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar20;
            uVar2 = 0xffffffffffffffff;
            if (SUB168(auVar23 * ZEXT816(1000),8) == 0) {
              uVar2 = uVar20 * 1000;
            }
            uVar20 = uVar2 + (ulong)uVar14 / 1000000;
            if (CARRY8(uVar2,(ulong)uVar14 / 1000000)) {
              uVar20 = 0xffffffffffffffff;
            }
            if (uVar20 < 2) {
              uVar20 = 1;
            }
            if (0x7ffffffe < uVar20) {
              uVar20 = 0x7fffffff;
            }
            uVar14 = poll(&local_88,1,(int)uVar20);
            if (uVar14 == 0xffffffff) {
              piVar16 = (int *)__errno();
              iVar13 = *piVar16;
              if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006d39ec to 006d39f7 has its CatchHandler @ 006d3ae8 */
                core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078)
                ;
              }
              ppuVar22 = (undefined **)((long)iVar13 << 0x20 | 2);
              local_a8 = (undefined1  [8])ppuVar22;
                    /* try { // try from 006d39d4 to 006d39e3 has its CatchHandler @ 006d3ad8 */
              lVar17 = core::io::error::os_functions::get_os_functions();
              uVar20 = (**(code **)(lVar17 + 0x10))(iVar13);
              if ((uVar20 & 1) == 0) goto LAB_006d3848;
              goto LAB_006d3898;
            }
          } while (uVar14 == 0);
          if ((local_88._4_4_ & 0x180000) == 0) goto LAB_006d3a38;
                    /* try { // try from 006d3a14 to 006d3a1b has its CatchHandler @ 006d3aec */
          auVar23 = FUN_006d7994(__fd);
          ppuVar18 = auVar23._8_8_;
          ppuVar22 = ppuVar18;
          if (((auVar23 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (ppuVar22 = (undefined **)&UNK_00977690, ppuVar18 != (undefined **)0x0)) {
            ppuVar22 = ppuVar18;
          }
        }
      }
    }
LAB_006d3848:
    uVar14 = close(__fd);
    puVar15 = (uint *)(ulong)uVar14;
  }
  *(undefined ***)(param_1 + 2) = ppuVar22;
  uVar19 = 1;
LAB_006d3858:
  *param_1 = uVar19;
  return puVar15;
}


// ===== 006d3b10  <std::net::tcp::[7]::std::net::tcp::TcpListener>::set_nonblocking =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::[7]::std::net::tcp::TcpListener>::set_nonblocking */

ulong __rustcall
<std::net::tcp::[7]::std::net::tcp::TcpListener>::set_nonblocking(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = ioctl(*param_1,0x5421,&local_4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d3ba0  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::set_read_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::set_read_timeout */

undefined ** __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::set_read_timeout
          (int *param_1,long param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  long local_30;
  ulong uStack_28;
  
  if (param_3 == 0xffffffff) {
    uStack_28 = 0;
    param_2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (param_3 == 0) {
        return &PTR_DAT_00977660;
      }
    }
    else if (param_2 < 0) {
      param_2 = 0x7fffffffffffffff;
      uStack_28 = (ulong)param_3 / 1000;
      goto LAB_006d3bf8;
    }
    uVar3 = param_3 / 1000;
    if (param_3 < 1000 && param_2 == 0) {
      uVar3 = 1;
    }
    uStack_28 = (ulong)uVar3;
  }
LAB_006d3bf8:
  local_30 = param_2;
  iVar1 = setsockopt(*param_1,1,0x14,&local_30,0x10);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (undefined **)((long)iVar1 << 0x20 | 2);
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 006d3cac  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::set_write_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::set_write_timeout */

undefined ** __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::set_write_timeout
          (int *param_1,long param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  long local_30;
  ulong uStack_28;
  
  if (param_3 == 0xffffffff) {
    uStack_28 = 0;
    param_2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (param_3 == 0) {
        return &PTR_DAT_00977660;
      }
    }
    else if (param_2 < 0) {
      param_2 = 0x7fffffffffffffff;
      uStack_28 = (ulong)param_3 / 1000;
      goto LAB_006d3d04;
    }
    uVar3 = param_3 / 1000;
    if (param_3 < 1000 && param_2 == 0) {
      uVar3 = 1;
    }
    uStack_28 = (ulong)uVar3;
  }
LAB_006d3d04:
  local_30 = param_2;
  iVar1 = setsockopt(*param_1,1,0x15,&local_30,0x10);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (undefined **)((long)iVar1 << 0x20 | 2);
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 006d3db8  <std::net::tcp::std::net::tcp::TcpStream>::ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::ttl */

void __rustcall <std::net::tcp::std::net::tcp::TcpStream>::ttl(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_28 = 0;
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0,2,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d3e68  <std::net::udp::std::net::udp::UdpSocket>::peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::peek */

undefined1  [16] __rustcall
<std::net::udp::std::net::udp::UdpSocket>::peek(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::recv(*param_1,param_2,param_3,2);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 006d3efc  <std::net::tcp::std::net::tcp::TcpStream>::linger =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::linger */

void __rustcall <std::net::tcp::std::net::tcp::TcpStream>::linger(ulong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 local_30;
  socklen_t local_24;
  
  local_30 = 0;
  local_24 = 8;
  iVar1 = getsockopt(*param_2,1,0xd,&local_30,&local_24);
  if (iVar1 != -1) {
    *param_1 = (long)local_30._4_4_;
    *(uint *)(param_1 + 1) = -(uint)((int)local_30 == 0);
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *param_1 = (long)iVar1 << 0x20 | 2;
  *(undefined4 *)(param_1 + 1) = 0xfffffffe;
  return;
}


// ===== 006d3fbc  <std::net::tcp::std::net::tcp::TcpStream>::nodelay =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::nodelay */

void __rustcall <std::net::tcp::std::net::tcp::TcpStream>::nodelay(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,6,1,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d4078  <std::net::tcp::std::net::tcp::TcpStream>::set_ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::set_ttl */

ulong __rustcall <std::net::tcp::std::net::tcp::TcpStream>::set_ttl(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0,2,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d4110  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::shutdown */

ulong __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::shutdown
          (int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = ::shutdown(*param_1,param_2 & 0xff);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d4198  <std::net::tcp::std::net::tcp::TcpStream>::keepalive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::keepalive */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::keepalive(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,9,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d4254  <std::net::tcp::std::net::tcp::TcpStream>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::peer_addr */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::peer_addr(undefined8 param_1,undefined4 *param_2)

{
  FUN_006dcdfc(param_1,*param_2);
  return;
}


// ===== 006d4260  <std::net::tcp::std::net::tcp::TcpStream>::try_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::try_clone */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::try_clone(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fcntl(*param_2,0x406,3);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d42ec  <std::net::udp::std::net::udp::UdpSocket>::set_broadcast =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::set_broadcast */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::set_broadcast(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,6,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d4384  <std::net::udp::std::net::udp::UdpSocket>::multicast_ttl_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::multicast_ttl_v4 */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::multicast_ttl_v4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_28 = 0;
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0,0x21,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d4434  <std::net::udp::std::net::udp::UdpSocket>::join_multicast_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::join_multicast_v4 */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::join_multicast_v4
          (int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_8;
  
  local_8 = CONCAT44(*param_3,*param_2);
  iVar1 = setsockopt(*param_1,0,0x23,&local_8,8);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d44d8  <std::net::udp::std::net::udp::UdpSocket>::join_multicast_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::join_multicast_v6 */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::join_multicast_v6
          (int *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  local_30 = param_3;
  iVar1 = setsockopt(*param_1,0x29,0x14,&local_40,0x14);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d4588  <std::net::udp::std::net::udp::UdpSocket>::multicast_loop_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::multicast_loop_v4 */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::multicast_loop_v4(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0,0x22,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d4644  <std::net::udp::std::net::udp::UdpSocket>::multicast_loop_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::multicast_loop_v6 */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::multicast_loop_v6(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0x29,0x13,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d4700  <std::net::udp::std::net::udp::UdpSocket>::leave_multicast_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::leave_multicast_v4 */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::leave_multicast_v4
          (int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_8;
  
  local_8 = CONCAT44(*param_3,*param_2);
  iVar1 = setsockopt(*param_1,0,0x24,&local_8,8);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d47a4  <std::net::udp::std::net::udp::UdpSocket>::leave_multicast_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::leave_multicast_v6 */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::leave_multicast_v6
          (int *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  local_30 = param_3;
  iVar1 = setsockopt(*param_1,0x29,0x15,&local_40,0x14);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d4854  <std::net::udp::std::net::udp::UdpSocket>::set_multicast_ttl_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::set_multicast_ttl_v4 */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::set_multicast_ttl_v4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0,0x21,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d48ec  <std::net::udp::std::net::udp::UdpSocket>::set_multicast_loop_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::set_multicast_loop_v4 */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::set_multicast_loop_v4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0,0x22,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d4984  <std::net::udp::std::net::udp::UdpSocket>::set_multicast_loop_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::set_multicast_loop_v6 */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::set_multicast_loop_v6(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,0x13,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d4a1c  <std::net::udp::std::net::udp::UdpSocket>::recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::recv */

undefined1  [16] __rustcall
<std::net::udp::std::net::udp::UdpSocket>::recv(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::recv(*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 006d4ab0  <std::net::udp::std::net::udp::UdpSocket>::send =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::send */

undefined1  [16] __rustcall
<std::net::udp::std::net::udp::UdpSocket>::send(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::send(*param_1,param_2,param_3,0x4000);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d4b3c  <std::net::udp::std::net::udp::UdpSocket>::broadcast =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::broadcast */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::broadcast(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,6,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d4bf8  <std::net::udp::std::net::udp::UdpSocket>::peek_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::peek_from */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::peek_from
          (undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_006d7a84(param_1,*param_2,param_3,param_4,2);
  return;
}


// ===== 006d4c14  <std::net::udp::std::net::udp::UdpSocket>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::peer_addr */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::peer_addr(undefined2 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  sockaddr local_c0;
  undefined8 uStack_b0;
  undefined8 local_a8;
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
  socklen_t local_38;
  undefined2 uStack_32;
  undefined6 local_30;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  undefined2 uStack_22;
  
  local_38 = 0x80;
  local_c0.sa_data[6] = '\0';
  local_c0.sa_data[7] = '\0';
  local_c0.sa_data[8] = '\0';
  local_c0.sa_data[9] = '\0';
  local_c0.sa_data[10] = '\0';
  local_c0.sa_data[0xb] = '\0';
  local_c0.sa_data[0xc] = '\0';
  local_c0.sa_data[0xd] = '\0';
  local_c0.sa_family = 0;
  local_c0.sa_data[0] = '\0';
  local_c0.sa_data[1] = '\0';
  local_c0.sa_data[2] = '\0';
  local_c0.sa_data[3] = '\0';
  local_c0.sa_data[4] = '\0';
  local_c0.sa_data[5] = '\0';
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  iVar1 = getpeername(*param_2,&local_c0,&local_38);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *param_1 = 2;
    *(ulong *)(param_1 + 4) = (long)iVar1 << 0x20 | 2;
    return;
  }
  if (local_c0.sa_family == 10) {
    if (0x1b < local_38) {
      *param_1 = 1;
      uStack_28 = (undefined6)uStack_b0;
      uStack_22 = (undefined2)((ulong)uStack_b0 >> 0x30);
      local_30 = (undefined6)local_c0.sa_data._6_8_;
      uStack_2a = SUB82(local_c0.sa_data._6_8_,6);
      *(undefined4 *)(param_1 + 10) = local_c0.sa_data._2_4_;
      *(undefined4 *)(param_1 + 0xc) = (undefined4)local_a8;
      *(ulong *)(param_1 + 5) = CONCAT62(uStack_28,uStack_2a);
      *(ulong *)(param_1 + 1) = CONCAT62(local_30,uStack_32);
      param_1[9] = uStack_22;
      param_1[0xe] = (ushort)local_c0.sa_data._0_2_ >> 8 |
                     (ushort)(((ushort)local_c0.sa_data._0_2_ & 0xff00ff) << 8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045bd10,0x35,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978168);
  }
  if (local_c0.sa_family != 2) {
    *(undefined ***)(param_1 + 4) = &PTR_s_invalid_argument_00978180;
    *param_1 = 2;
    return;
  }
  if (0xf < local_38) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = local_c0.sa_data._2_4_;
    param_1[3] = (ushort)local_c0.sa_data._0_2_ >> 8 |
                 (ushort)(((ushort)local_c0.sa_data._0_2_ & 0xff00ff) << 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0045bcdc,0x34,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978150);
}


// ===== 006d4da8  <std::net::udp::std::net::udp::UdpSocket>::recv_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::recv_from */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::recv_from
          (undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_006d7a84(param_1,*param_2,param_3,param_4,0);
  return;
}


// ===== 006d4dc4  <std::thread::id::std::thread::id::ThreadId>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::id::std::thread::id::ThreadId>::new */

void __rustcall <std::thread::id::std::thread::id::ThreadId>::new(void)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar8 = DAT_009a6f58;
  while (lVar6 = DAT_009a6f58, lVar8 != -1) {
    if (DAT_009a6f58 == lVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x9a6f58,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        DAT_009a6f58 = lVar8 + 1;
      }
      lVar8 = lVar6;
      if (cVar4 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
      lVar8 = lVar6;
    }
  }
  auVar9 = FUN_006f8758();
  plVar7 = auVar9._0_8_;
  if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    *(undefined1 *)(plVar7 + 2) = 1;
  }
  plVar1 = plVar7 + 1;
  do {
    lVar8 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar8 + -1 == 0) {
    piVar2 = (int *)(*plVar7 + 0x28);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
      syscall(0x62,piVar2,0x81,1);
      return;
    }
  }
  return;
}


// ===== 006d4e1c  <std::thread::scoped::std::thread::scoped::ScopeData>::decrement_num_running_threads =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::scoped::std::thread::scoped::ScopeData>::decrement_num_running_threads */

void __rustcall
<std::thread::scoped::std::thread::scoped::ScopeData>::decrement_num_running_threads
          (long *param_1,ulong param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  plVar1 = param_1 + 1;
  do {
    lVar6 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar6 + -1 == 0) {
    piVar2 = (int *)(*param_1 + 0x28);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
      syscall(0x62,piVar2,0x81,1);
      return;
    }
  }
  return;
}


// ===== 006d4e74  <std::thread::scoped::std::thread::scoped::ScopeData>::increment_num_running_threads =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::scoped::std::thread::scoped::ScopeData>::increment_num_running_threads */

void __rustcall
<std::thread::scoped::std::thread::scoped::ScopeData>::increment_num_running_threads(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar5) {
    return;
  }
  uVar4 = FUN_006d4ea0();
  decrement_num_running_threads(uVar4,0);
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045b087,0x51,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977480);
}


// ===== 006d4ea0  FUN_006d4ea0 =====

void FUN_006d4ea0(undefined8 param_1)

{
  <std::thread::scoped::std::thread::scoped::ScopeData>::decrement_num_running_threads(param_1,0);
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045b087,0x51,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977480);
}


// ===== 006d4ec8  <std::thread::builder::std::thread::builder::Builder>::name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::builder::std::thread::builder::Builder>::name */

void __rustcall
<std::thread::builder::std::thread::builder::Builder>::name
          (undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_2[2];
  if (0 < lVar1) {
    __rustc::__rust_dealloc(param_2[3],lVar1,1);
  }
  lVar2 = *param_3;
  lVar1 = param_3[2];
  param_2[3] = param_3[1];
  param_2[2] = lVar2;
  param_2[4] = lVar1;
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  return;
}


// ===== 006d4f30  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_buf_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_buf_at */

ulong __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_buf_at
          (int *param_1,long *param_2,__off64_t param_3)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  size_t __nbytes;
  
  lVar1 = param_2[2];
  __nbytes = param_2[1] - lVar1;
  if (0x7ffffffffffffffe < __nbytes) {
    __nbytes = 0x7fffffffffffffff;
  }
  sVar3 = pread64(*param_1,(void *)(*param_2 + lVar1),__nbytes,param_3);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006d4fe4  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(int *param_1,ulong *param_2)

{
  int __fd;
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t __nbytes;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  int *local_80;
  ulong local_78;
  ulong local_70;
  
  uVar9 = param_2[2];
  uVar8 = *param_2;
  uVar5 = uVar8;
  uVar10 = uVar9;
  local_80 = param_1;
  if (uVar8 - uVar9 < 0x20) {
    auVar11 = FUN_006cf1e4(&local_80,param_2);
    if (auVar11._0_8_ == 1) {
      return auVar11;
    }
    if (auVar11._8_8_ == 0) {
      return ZEXT816(0) << 0x40;
    }
    uVar5 = *param_2;
    uVar10 = param_2[2];
  }
  __fd = *param_1;
  __nbytes = 0x2000;
  do {
    if ((uVar5 == uVar8) && (uVar10 == uVar5)) {
      auVar11 = FUN_006cf1e4(&local_80,param_2);
      if (auVar11._0_8_ == 1) {
        return auVar11;
      }
      uVar10 = param_2[2];
      if (auVar11._8_8_ == 0) {
        lVar3 = 0;
        break;
      }
      uVar5 = *param_2;
    }
    uVar6 = uVar5;
    uVar7 = param_2[1];
    if (uVar10 == uVar5) {
      uVar6 = uVar5 + 0x20;
      if (uVar5 + 0x20 <= uVar5 * 2) {
        uVar6 = uVar5 * 2;
      }
      FUN_006df348(&local_78,uVar5,param_2[1],uVar6,1,1);
      if (local_78 == 1) {
        uVar5 = 0x2600000003;
LAB_006d51b0:
        auVar11._8_8_ = uVar5;
        auVar11._0_8_ = 1;
        return auVar11;
      }
      *param_2 = uVar6;
      param_2[1] = local_70;
      uVar7 = local_70;
    }
    if (uVar6 - uVar10 <= __nbytes) {
      __nbytes = uVar6 - uVar10;
    }
    if (0x7ffffffffffffffe < __nbytes) {
      __nbytes = 0x7fffffffffffffff;
    }
    lVar3 = ::read(__fd,(void *)(uVar7 + uVar10),__nbytes);
    if (lVar3 == -1) {
      piVar4 = (int *)__errno();
      do {
        iVar2 = *piVar4;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        uVar5 = (long)iVar2 << 0x20 | 2;
        local_78 = uVar5;
                    /* try { // try from 006d5128 to 006d5137 has its CatchHandler @ 006d51fc */
        lVar3 = core::io::error::os_functions::get_os_functions();
        iVar2 = (**(code **)(lVar3 + 0x10))(iVar2);
        if (iVar2 == 0) {
          param_2[2] = uVar10;
          goto LAB_006d51b0;
        }
        lVar3 = ::read(__fd,(void *)(uVar7 + uVar10),__nbytes);
      } while (lVar3 == -1);
    }
    uVar10 = lVar3 + uVar10;
    __nbytes = 0xffffffffffffffff;
    param_2[2] = uVar10;
    uVar5 = uVar6;
  } while (lVar3 != 0);
  auVar1._8_8_ = uVar10 - uVar9;
  auVar1._0_8_ = lVar3;
  return auVar1;
}


// ===== 006d5214  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_cloexec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_cloexec */

ulong __rustcall <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_cloexec(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = ioctl(*param_1,0x5451);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006d529c  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_vectored */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_vectored
          (int *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d5330  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_vectored */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_vectored
          (int *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d53c4  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_nonblocking =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_nonblocking */

ulong __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_nonblocking(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  uVar1 = fcntl(iVar2,3);
  if (uVar1 != 0xffffffff) {
    uVar4 = 0x800;
    if (param_2 == 0) {
      uVar4 = 0;
    }
    if ((uVar1 & 0xfffff7ff | uVar4) == uVar1) {
      return 0;
    }
    iVar2 = fcntl(iVar2,4);
    if (iVar2 != -1) {
      return 0;
    }
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006d5494  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_vectored_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_vectored_at */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_vectored_at
          (uint *param_1,iovec *param_2,ulong param_3,__off_t param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  if (PTR_preadv_0099f770 == (undefined *)0x0) {
    lVar2 = syscall(0x45,(ulong)*param_1,param_2);
  }
  else {
    lVar2 = preadv(*param_1,param_2,(int)param_3,param_4);
  }
  if (lVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = lVar2 == -1;
    auVar4._8_8_ = lVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d5568  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_vectored_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_vectored_at */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_vectored_at
          (uint *param_1,iovec *param_2,ulong param_3,__off_t param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  if (PTR_pwritev_0099f778 == (undefined *)0x0) {
    lVar2 = syscall(0x46,(ulong)*param_1,param_2);
  }
  else {
    lVar2 = pwritev(*param_1,param_2,(int)param_3,param_4);
  }
  if (lVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = lVar2 == -1;
    auVar4._8_8_ = lVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d563c  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::read(*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d56c4  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d574c  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_at */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_at
          (int *param_1,void *param_2,size_t param_3,__off64_t param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = pread64(*param_1,param_2,param_3,param_4);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d57d4  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_buf */

ulong __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_buf(int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  size_t __nbytes;
  
  lVar1 = param_2[2];
  __nbytes = param_2[1] - lVar1;
  if (0x7ffffffffffffffe < __nbytes) {
    __nbytes = 0x7fffffffffffffff;
  }
  sVar3 = ::read(*param_1,(void *)(*param_2 + lVar1),__nbytes);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006d5884  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_at */

undefined1  [16] __rustcall
<std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_at
          (int *param_1,void *param_2,size_t param_3,__off64_t param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = pwrite64(*param_1,param_2,param_3,param_4);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006d590c  <std::sync::mpmc::context::std::sync::mpmc::context::Context>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpmc::context::std::sync::mpmc::context::Context>::new */

void __rustcall <std::sync::mpmc::context::std::sync::mpmc::context::Context>::new(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 *puStack_28;
  
  uVar1 = std::thread::current::current_or_unnamed();
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f780;
  local_50 = uVar1;
  if (uVar4 == 0) {
                    /* try { // try from 006d59b0 to 006d59ef has its CatchHandler @ 006d59f4 */
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f780);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
  }
  if (puVar2 < &DAT_00000002) {
    puVar2 = (undefined1 *)FUN_006c1628(uVar4 & 0xffffffff,puVar2,0);
  }
  if (puVar2 != (undefined1 *)0x0) {
    uStack_38 = 0;
    local_30 = 0;
    uStack_48 = 1;
    local_50 = 1;
    local_40 = uVar1;
    puStack_28 = puVar2;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar3 = (undefined8 *)__rustc::__rust_alloc(0x30,8);
    if (puVar3 == (undefined8 *)0x0) {
                    /* try { // try from 006d5998 to 006d59ab has its CatchHandler @ 006d5a14 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(&local_50,8,0x30);
    }
    puVar3[1] = uStack_48;
    *puVar3 = local_50;
    puVar3[3] = uStack_38;
    puVar3[2] = local_40;
    puVar3[5] = puStack_28;
    puVar3[4] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::thread::local::panic_access_error(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976bb0);
}


// ===== 006d5a40  <std::sync::poison::condvar::std::sync::poison::condvar::Condvar>::notify_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::poison::condvar::std::sync::poison::condvar::Condvar>::notify_all */

void __rustcall
<std::sync::poison::condvar::std::sync::poison::condvar::Condvar>::notify_all(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  syscall(0x62,param_1,0x81,0x7fffffff);
  return;
}


// ===== 006d5a64  <std::sync::nonpoison::condvar::std::sync::nonpoison::condvar::Condvar>::notify_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::nonpoison::condvar::std::sync::nonpoison::condvar::Condvar>::notify_one */

void __rustcall
<std::sync::nonpoison::condvar::std::sync::nonpoison::condvar::Condvar>::notify_one(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  syscall(0x62,param_1,0x81,1);
  return;
}


// ===== 006d5a88  FUN_006d5a88 =====

void FUN_006d5a88(long *param_1,char *param_2,undefined2 *param_3,long param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *local_d0;
  void *local_c8;
  undefined2 *local_c0;
  char local_b8 [8];
  short *local_b0;
  long lStack_a8;
  char *local_80;
  undefined2 *local_78;
  char *local_70;
  undefined2 local_48;
  undefined1 local_46;
  
  if (param_3 == (undefined2 *)0x0) {
    local_46 = false;
    local_c0 = (undefined2 *)0x0;
    local_c8 = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pvVar2 = (void *)__rustc::__rust_alloc(param_3,1);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(pvVar2,param_2,(size_t)param_3);
    local_46 = *param_2 == '/';
    local_c8 = pvVar2;
    local_c0 = param_3;
  }
  local_70 = (char *)CONCAT71(local_70._1_7_,0xff);
  local_48 = 0x201;
                    /* try { // try from 006d5b18 to 006d5b23 has its CatchHandler @ 006d5d9c */
  local_d0 = local_c0;
  local_80 = param_2;
  local_78 = param_3;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_b8,&local_80);
  if (((local_b8[0] == -1) || (local_b8[0] != '\t')) ||
     ((lVar7 = lStack_a8, lStack_a8 == 2 && (*local_b0 == 0x2e2e)))) {
LAB_006d5b8c:
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pcVar3 = (char *)0x3;
    puVar5 = (undefined2 *)__rustc::__rust_alloc(3,1);
    if (puVar5 == (undefined2 *)0x0) {
LAB_006d5d2c:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,pcVar3);
    }
    pcVar3 = (char *)0x3;
    pcVar4 = (char *)0x3;
    *(undefined1 *)(puVar5 + 1) = 0x70;
    *puVar5 = 0x7764;
  }
  else {
    do {
      lVar6 = lVar7;
      if (lVar6 == 0) goto LAB_006d5b8c;
      lVar7 = lVar6 + -1;
    } while (*(char *)((long)local_b0 + lVar6 + -1) != '.');
    if (lVar7 == 0) goto LAB_006d5b8c;
    pcVar3 = (char *)((lStack_a8 + -1) - lVar7);
    if (lStack_a8 + -1 == lVar7) {
      puVar5 = (undefined2 *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar5 = (undefined2 *)__rustc::__rust_alloc(pcVar3,1);
      if (puVar5 == (undefined2 *)0x0) goto LAB_006d5d2c;
      memcpy(puVar5,(void *)((long)local_b0 + lVar6),(size_t)pcVar3);
    }
                    /* try { // try from 006d5ce8 to 006d5cff has its CatchHandler @ 006d5d48 */
    local_80 = pcVar3;
    local_78 = puVar5;
    local_70 = pcVar3;
    FUN_006cecec(&local_80,pcVar3,4,1,1);
    builtin_strncpy((char *)((long)local_78 + (long)local_70),".dwp",4);
    pcVar3 = local_70 + 4;
    pcVar4 = local_80;
    puVar5 = local_78;
  }
                    /* try { // try from 006d5bc0 to 006d5bcb has its CatchHandler @ 006d5d74 */
  <std::path::[r]::std::path::PathBuf>::_set_extension(&local_d0,puVar5,pcVar3);
  if (pcVar4 != (char *)0x0) {
    __rustc::__rust_dealloc(puVar5,pcVar4,1);
  }
  pvVar2 = local_c8;
                    /* try { // try from 006d5be4 to 006d5bef has its CatchHandler @ 006d5d9c */
  FUN_006f445c(&local_80,local_c8,local_c0);
  pcVar3 = local_70;
  puVar5 = local_78;
  if (local_80 == (char *)0x1) {
    uVar8 = *(ulong *)(param_4 + 0x28);
    if (uVar8 == *(ulong *)(param_4 + 0x18)) {
                    /* try { // try from 006d5c14 to 006d5c17 has its CatchHandler @ 006d5d5c */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap>>
      ::grow_one();
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x20) + uVar8 * 0x10);
      *puVar1 = puVar5;
      puVar1[1] = pcVar3;
      *(ulong *)(param_4 + 0x28) = uVar8 + 1;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x20) + uVar8 * 0x10);
      *puVar1 = local_78;
      puVar1[1] = local_70;
      *(ulong *)(param_4 + 0x28) = uVar8 + 1;
      if (0xfffffffffffffffe < uVar8) {
                    /* try { // try from 006d5d1c to 006d5d37 has its CatchHandler @ 006d5d9c */
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_009774c8);
      }
    }
    lVar7 = *(long *)(param_4 + 0x20) + (uVar8 + 1) * 0x10;
                    /* try { // try from 006d5c54 to 006d5c5b has its CatchHandler @ 006d5d9c */
    FUN_006e52f0(param_1,*(undefined8 *)(lVar7 + -0x10),*(undefined8 *)(lVar7 + -8));
    if (*param_1 != -1) goto joined_r0x006d5c94;
  }
  *param_1 = -1;
joined_r0x006d5c94:
  if (local_d0 != (undefined2 *)0x0) {
    __rustc::__rust_dealloc(pvVar2,local_d0,1);
    return;
  }
  return;
}


// ===== 006d5dc0  FUN_006d5dc0 =====

undefined1  [16] FUN_006d5dc0(ulong *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (param_2 < 0) {
    uVar5 = 0;
LAB_006d5de0:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar5,param_2);
  }
  uVar4 = param_1[2];
  if (param_2 == 0) {
    lVar2 = 1;
    uVar6 = uVar4;
    if (uVar4 != *param_1) goto LAB_006d5e44;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar5 = 1;
    lVar2 = __rustc::__rust_alloc_zeroed(param_2,1);
    if (lVar2 == 0) goto LAB_006d5de0;
    uVar6 = param_1[2];
    if (uVar6 != *param_1) goto LAB_006d5e44;
  }
                    /* try { // try from 006d5e3c to 006d5e43 has its CatchHandler @ 006d5e9c */
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one
            (param_1);
LAB_006d5e44:
  uVar1 = uVar6 + 1;
  plVar3 = (long *)(param_1[1] + uVar6 * 0x18);
  param_1[2] = uVar1;
  *plVar3 = param_2;
  plVar3[1] = lVar2;
  plVar3[2] = param_2;
  if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar4,uVar1,&PTR_s__rustc_48a229ceaefd4985c50990b14_009774e0);
  }
  return *(undefined1 (*) [16])(param_1[1] + uVar4 * 0x18 + 8);
}


// ===== 006d5ebc  <std::io::buffered::bufreader::buffer::std::io::buffered::bufreader::buffer::Buffer>::backshift =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::buffered::bufreader::buffer::std::io::buffered::bufreader::buffer::Buffer>::backshift
    */

void __rustcall
<std::io::buffered::bufreader::buffer::std::io::buffered::bufreader::buffer::Buffer>::backshift
          (undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1[3];
  if ((ulong)param_1[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,param_1[1],&PTR_s__rustc_48a229ceaefd4985c50990b14_00977d78);
  }
  uVar1 = param_1[2];
  if (uVar1 <= uVar2) {
    memmove((void *)*param_1,(void *)((long)*param_1 + uVar1),uVar2 - uVar1);
    param_1[2] = 0;
    param_1[3] = uVar2 - uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 006d5f28  <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::from_parts =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::from_parts */

void __rustcall
<std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::from_parts
          (undefined4 *param_1,short *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 == 0) {
    param_3 = 2;
  }
  else if (*param_2 != 1) {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_009774f8;
    *param_1 = 1;
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = 0;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x2c);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x33);
  uVar3 = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)((long)param_1 + 0x6e) = uVar4;
  *(undefined8 *)((long)param_1 + 0x66) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x14);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 6) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  *(undefined8 *)(param_1 + 10) = uVar5;
  return;
}


// ===== 006d5f8c  <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::is_unnamed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::is_unnamed */

bool __rustcall
<std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::is_unnamed(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 - 2;
  if (uVar1 != 0) {
    if (*(char *)((long)param_1 + 6) == '\0') {
      if (0x6c < uVar1) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (1,uVar1,0x6c,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977510);
      }
    }
    else {
      uVar2 = (ulong)*param_1 - 3;
      if (0x6c < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar2,0x6c,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977528);
      }
    }
  }
  return uVar1 == 0;
}


// ===== 006d5ff8  <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::as_pathname =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::as_pathname */

char * __rustcall
<std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::as_pathname(uint *param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1 - 2;
  if (uVar1 != 0) {
    if (*(char *)((long)param_1 + 6) != '\0') {
      uVar1 = (ulong)*param_1 - 3;
      if (uVar1 < 0x6d) {
        return (char *)((long)param_1 + 6);
      }
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar1,0x6c,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977528);
    }
    if (0x6c < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (1,uVar1,0x6c,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977510);
    }
  }
  return (char *)0x0;
}


// ===== 006d6064  <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init */

long __rustcall
<std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init
          (long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  pthread_key_t __key;
  long lVar4;
  pthread_key_t local_2c;
  pthread_key_t local_28;
  undefined1 uStack_21;
  
  local_2c = 0;
  iVar3 = pthread_key_create(&local_2c,(__destr_function *)param_1[1]);
  if (iVar3 != 0) {
LAB_006d60e8:
    FUN_0070e928(&uStack_21,&DAT_0045bc9b,0x5f);
    FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
    std::process::abort();
  }
  __key = local_2c;
  if (local_2c == 0) {
    local_28 = 0;
    iVar3 = pthread_key_create(&local_28,(__destr_function *)param_1[1]);
    __key = local_28;
    if (iVar3 != 0) goto LAB_006d60e8;
    pthread_key_delete(0);
    if (__key == 0) {
      FUN_0070e928(&uStack_21,&DAT_0045b155,0x9b);
      FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
      std::process::abort();
    }
  }
  do {
    lVar4 = *param_1;
    if (lVar4 != 0) {
      ClearExclusiveLocal();
      pthread_key_delete(__key);
      return lVar4;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = (long)(int)__key;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return (long)(int)__key;
}


// ===== 006d6128  <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::open =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::open */

void __rustcall
<std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::open
          (undefined4 *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 local_1d0;
  undefined1 auStack_1c8 [384];
  long local_48;
  undefined8 local_40;
  
  local_1d0 = param_4;
  if (0x17f < param_3) {
    FUN_006c9648(param_1,param_2,param_3,&local_1d0);
    return;
  }
  memcpy(auStack_1c8,param_2,param_3);
  auStack_1c8[param_3] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (&local_48,auStack_1c8,param_3 + 1);
  if (local_48 == 1) {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00977090;
    *param_1 = 1;
    return;
  }
  FUN_006d08dc(param_1,&local_1d0,local_40);
  return;
}


// ===== 006d61f4  <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::open_file =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::open_file */

void __rustcall
<std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::open_file
          (undefined4 *param_1,undefined8 param_2,void *param_3,ulong param_4,undefined8 param_5)

{
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 *local_1d0;
  undefined1 auStack_1c8 [384];
  long local_48;
  undefined8 local_40;
  
  local_1d0 = (undefined1 *)&local_1e0;
  local_1e0 = param_5;
  uStack_1d8 = param_2;
  if (0x17f < param_4) {
    FUN_006c94c0(param_1,param_3,param_4,&uStack_1d8,FUN_006d0afc);
    return;
  }
  local_1d0 = (undefined1 *)&local_1e0;
  memcpy(auStack_1c8,param_3,param_4);
  auStack_1c8[param_4] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (&local_48,auStack_1c8,param_4 + 1);
  if (local_48 == 1) {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00977090;
    *param_1 = 1;
    return;
  }
  FUN_006d0afc(param_1,&uStack_1d8,local_40);
  return;
}


// ===== 006d62cc  FUN_006d62cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d62cc(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  undefined1 local_40 [16];
  undefined4 local_30;
  
  uVar1 = (uint)param_2[1];
  uVar2 = (uint)param_3[1];
  uVar16 = *param_2;
  uVar18 = *param_3;
  bVar3 = uVar2 <= uVar1;
  if (uVar16 != uVar18) {
    bVar3 = (long)uVar18 <= (long)uVar16;
  }
  if (bVar3) {
    uVar15 = uVar1 + 1000000000;
    if (uVar2 <= uVar1) {
      uVar15 = uVar1;
    }
    uVar19 = -uVar18;
    uVar15 = uVar15 - uVar2;
    if (uVar2 > uVar1) {
      uVar19 = ~uVar18;
    }
    lVar17 = uVar19 + uVar16;
    if (999999999 < uVar15) {
      if (lVar17 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_0045b03a,0x19,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977390);
      }
      lVar17 = lVar17 + 1;
      uVar15 = uVar15 + 0xc4653600;
    }
    *(uint *)(param_1 + 2) = uVar15;
    *param_1 = 0;
    param_1[1] = lVar17;
    return;
  }
  FUN_006d62cc(local_40,param_3,param_2);
  bVar20 = (byte)_DAT_003720f0;
  uVar16 = (ulong)_DAT_003720f0 >> 8;
  uVar18 = (ulong)_DAT_003720f0 >> 0x10;
  uVar19 = (ulong)_DAT_003720f0 >> 0x18;
  uVar4 = (ulong)_DAT_003720f0 >> 0x20;
  uVar5 = (ulong)_DAT_003720f0 >> 0x28;
  uVar6 = (ulong)_DAT_003720f0 >> 0x30;
  uVar7 = (ulong)_DAT_003720f0 >> 0x38;
  bVar21 = (byte)_UNK_003720f8;
  uVar8 = (ulong)_UNK_003720f8 >> 8;
  uVar9 = (ulong)_UNK_003720f8 >> 0x10;
  uVar10 = (ulong)_UNK_003720f8 >> 0x18;
  uVar11 = (ulong)_UNK_003720f8 >> 0x20;
  uVar12 = (ulong)_UNK_003720f8 >> 0x28;
  uVar13 = (ulong)_UNK_003720f8 >> 0x30;
  uVar14 = (ulong)_UNK_003720f8 >> 0x38;
  *(undefined4 *)(param_1 + 2) = local_30;
  param_1[1] = CONCAT17(SUB81(local_40._8_8_,7) ^ (byte)uVar14,
                        CONCAT16(SUB81(local_40._8_8_,6) ^ (byte)uVar13,
                                 CONCAT15(SUB81(local_40._8_8_,5) ^ (byte)uVar12,
                                          CONCAT14(SUB81(local_40._8_8_,4) ^ (byte)uVar11,
                                                   CONCAT13(SUB81(local_40._8_8_,3) ^ (byte)uVar10,
                                                            CONCAT12(SUB81(local_40._8_8_,2) ^
                                                                     (byte)uVar9,
                                                                     CONCAT11(SUB81(local_40._8_8_,1
                                                                                   ) ^ (byte)uVar8,
                                                                              (byte)local_40._8_8_ ^
                                                                              bVar21)))))));
  *param_1 = CONCAT17(SUB81(local_40._0_8_,7) ^ (byte)uVar7,
                      CONCAT16(SUB81(local_40._0_8_,6) ^ (byte)uVar6,
                               CONCAT15(SUB81(local_40._0_8_,5) ^ (byte)uVar5,
                                        CONCAT14(SUB81(local_40._0_8_,4) ^ (byte)uVar4,
                                                 CONCAT13(SUB81(local_40._0_8_,3) ^ (byte)uVar19,
                                                          CONCAT12(SUB81(local_40._0_8_,2) ^
                                                                   (byte)uVar18,
                                                                   CONCAT11(SUB81(local_40._0_8_,1)
                                                                            ^ (byte)uVar16,
                                                                            (byte)local_40._0_8_ ^
                                                                            bVar20)))))));
  return;
}


// ===== 006d63bc  FUN_006d63bc =====

__time_t FUN_006d63bc(clockid_t param_1)

{
  int iVar1;
  int *piVar2;
  timespec local_30;
  undefined **local_8;
  
  iVar1 = clock_gettime(param_1,&local_30);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    local_8 = (undefined **)((long)iVar1 << 0x20 | 2);
                    /* try { // try from 006d6468 to 006d648b has its CatchHandler @ 006d64a0 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0045b05c,0x2b,&local_8,&PTR_FUN_009773e8,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_00977558);
  }
  if ((ulong)local_30.tv_nsec < 1000000000) {
    return local_30.tv_sec;
  }
  local_8 = &PTR_DAT_00977540;
                    /* try { // try from 006d6410 to 006d6433 has its CatchHandler @ 006d64b4 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0045b05c,0x2b,&local_8,&PTR_FUN_009773e8,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00977570);
}


// ===== 006d64cc  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended */

void __rustcall
<std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(int *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *param_1;
  if (iVar5 == 1) {
    iVar6 = -99;
    do {
      InstructionSynchronizationBarrier();
      iVar5 = *param_1;
      if (iVar5 != 1) break;
      bVar1 = iVar6 != 0;
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (iVar5 == 0) {
    while (iVar5 = *param_1, iVar5 == 0) {
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar1) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  do {
    do {
      if (iVar5 != 2) {
        do {
          iVar5 = *param_1;
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar1) {
            *param_1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          return;
        }
      }
      do {
        if ((*param_1 != 2) || (lVar3 = syscall(0x62,param_1,0x89,2,0,0,0xffffffff), -1 < lVar3))
        break;
        piVar4 = (int *)__errno();
      } while (*piVar4 == 4);
      iVar5 = *param_1;
    } while (iVar5 != 1);
    iVar6 = -99;
    do {
      InstructionSynchronizationBarrier();
      iVar5 = *param_1;
      if (iVar5 != 1) break;
      bVar1 = iVar6 != 0;
      iVar6 = iVar6 + 1;
    } while (bVar1);
  } while( true );
}


// ===== 006d65e4  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake */

void __rustcall
<std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(undefined8 param_1)

{
  syscall(0x62,param_1,0x81,1);
  return;
}


// ===== 006d65f8  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended */

void __rustcall
<std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
          (uint *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = *param_1;
  if (uVar6 == 0x3fffffff) {
    iVar7 = -99;
    do {
      InstructionSynchronizationBarrier();
      uVar6 = *param_1;
      if (uVar6 != 0x3fffffff) break;
      bVar1 = iVar7 != 0;
      iVar7 = iVar7 + 1;
    } while (bVar1);
  }
  bVar1 = false;
LAB_006d6658:
  do {
    do {
      while ((((uVar8 = uVar6 & 0x3fffffff, bVar1 && ((uVar6 >> 0x1e & 1) == 0)) &&
              (uVar8 - 1 < 0x3ffffffd)) ||
             (((uVar8 < 0x3ffffffe && ((uVar6 >> 0x1e & 1) == 0)) && (-1 < (int)uVar6))))) {
        uVar8 = *param_1;
        if (uVar8 == uVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          uVar6 = uVar8;
          if (cVar2 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
          uVar6 = uVar8;
        }
      }
      if (uVar8 == 0x3ffffffe) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0045b1b3,0x49,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977588);
      }
      uVar8 = uVar6;
      if ((uVar6 >> 0x1e & 1) == 0) {
        uVar8 = uVar6 | 0x40000000;
        do {
          if (*param_1 != uVar6) {
            ClearExclusiveLocal();
            uVar6 = *param_1;
            goto LAB_006d6658;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      do {
        if ((*param_1 != uVar8) ||
           (lVar4 = syscall(0x62,param_1,0x89,(ulong)uVar8,0,0,0xffffffff), -1 < lVar4)) break;
        piVar5 = (int *)__errno();
      } while (*piVar5 == 4);
      bVar1 = true;
      uVar6 = *param_1;
    } while (*param_1 != 0x3fffffff);
    iVar7 = -99;
    do {
      InstructionSynchronizationBarrier();
      uVar6 = *param_1;
      bVar1 = true;
      if (uVar6 != 0x3fffffff) break;
      bVar3 = iVar7 != 0;
      iVar7 = iVar7 + 1;
    } while (bVar3);
  } while( true );
}


// ===== 006d6798  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended */

void __rustcall
<std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
          (uint *param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  uVar6 = *param_1;
  if ((-1 < (int)uVar6) && ((uVar6 & 0x3fffffff) != 0)) {
    iVar8 = -99;
    do {
      InstructionSynchronizationBarrier();
      uVar6 = *param_1;
      if (((int)uVar6 < 0) || ((uVar6 & 0x3fffffff) == 0)) break;
      bVar1 = iVar8 != 0;
      iVar8 = iVar8 + 1;
    } while (bVar1);
  }
  uVar7 = 0x3fffffff;
LAB_006d67f0:
  do {
    do {
      do {
        while ((uVar6 & 0x3fffffff) == 0) {
          uVar2 = *param_1;
          if (uVar2 == uVar6) {
            cVar3 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar1) {
              *param_1 = uVar6 | uVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            uVar6 = uVar2;
            if (cVar3 == '\0') {
              return;
            }
          }
          else {
            ClearExclusiveLocal();
            uVar6 = uVar2;
          }
        }
        if (-1 < (int)uVar6) {
          do {
            if (*param_1 != uVar6) {
              ClearExclusiveLocal();
              uVar6 = *param_1;
              goto LAB_006d67f0;
            }
            cVar3 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar1) {
              *param_1 = uVar6 | 0x80000000;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar7 = 0xbfffffff;
        uVar9 = *(ulong *)(param_1 + 1);
        uVar6 = *param_1;
      } while ((-1 < (int)uVar6) || ((uVar6 & 0x3fffffff) == 0));
      while (param_1[1] == (uint)uVar9) {
        lVar4 = syscall(0x62,param_1 + 1,0x89,uVar9 & 0xffffffff,0,0,0xffffffff);
        if ((-1 < lVar4) || (piVar5 = (int *)__errno(), *piVar5 != 4)) break;
      }
      uVar6 = *param_1;
      uVar7 = 0xbfffffff;
    } while (((int)uVar6 < 0) || ((uVar6 & 0x3fffffff) == 0));
    iVar8 = -99;
    do {
      InstructionSynchronizationBarrier();
      uVar6 = *param_1;
      uVar7 = 0xbfffffff;
      if (((int)uVar6 < 0) || ((uVar6 & 0x3fffffff) == 0)) break;
      bVar1 = iVar8 != 0;
      iVar8 = iVar8 + 1;
    } while (bVar1);
  } while( true );
}


// ===== 006d690c  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers */

void __rustcall
<std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
          (uint *param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((param_2 & 0x3fffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045b1d7,0x24,&PTR_s__rustc_48a229ceaefd4985c50990b14_009775a0);
  }
  if (param_2 == 0x80000000) {
    while (param_2 = *param_1, param_2 == 0x80000000) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        param_1 = param_1 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = *param_1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        syscall(0x62,param_1,0x81,1);
        return;
      }
    }
    ClearExclusiveLocal();
  }
  if (param_2 == 0x40000000) {
LAB_006d69f8:
    while (*param_1 == 0x40000000) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        syscall(0x62,param_1,0x81,0x7fffffff);
        return;
      }
    }
LAB_006d6a28:
    ClearExclusiveLocal();
    return;
  }
  if (param_2 == 0xc0000000) {
    do {
      if (*param_1 != 0xc0000000) goto LAB_006d6a28;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 0x40000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar1 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = syscall(0x62,param_1 + 1,0x81,1);
    if (lVar4 < 1) goto LAB_006d69f8;
  }
  return;
}


// ===== 006d6a38  <std::sys::sync::condvar::futex::std::sys::sync::condvar::futex::Condvar>::wait_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::condvar::futex::std::sys::sync::condvar::futex::Condvar>::wait_timeout */

undefined8 __rustcall
<std::sys::sync::condvar::futex::std::sys::sync::condvar::futex::Condvar>::wait_timeout
          (uint *param_1,int *param_2,long param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  long lStack_50;
  ulong uStack_48;
  
  uVar2 = *param_1;
  do {
    iVar3 = *param_2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 2) {
    syscall(0x62,param_2,0x81,1);
  }
  if (param_4 != -1) {
    auVar10 = FUN_006d63bc(1);
    lVar6 = auVar10._0_8_ + param_3;
    if (param_3 < 0 == SCARRY8(auVar10._0_8_,param_3)) {
      uVar9 = auVar10._8_4_ + param_4;
      if (999999999 < uVar9) {
        bVar5 = SCARRY8(lVar6,1);
        lVar6 = lVar6 + 1;
        if (bVar5) goto LAB_006d6af8;
        uVar9 = uVar9 + 0xc4653600;
      }
      uStack_48 = (ulong)uVar9;
      bVar5 = true;
      lStack_50 = lVar6;
      goto LAB_006d6afc;
    }
  }
LAB_006d6af8:
  bVar5 = false;
LAB_006d6afc:
  do {
    if (*param_1 != uVar2) goto LAB_006d6b60;
    plVar1 = &lStack_50;
    if (!bVar5) {
      plVar1 = (long *)0x0;
    }
    lVar6 = syscall(0x62,param_1,0x89,(ulong)uVar2,plVar1,0,0xffffffff);
    if (-1 < lVar6) goto LAB_006d6b60;
    piVar7 = (int *)__errno();
  } while (*piVar7 == 4);
  if (*piVar7 == 0x6e) {
    uVar8 = 0;
  }
  else {
LAB_006d6b60:
    uVar8 = 1;
  }
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(param_2);
      return uVar8;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return uVar8;
}


// ===== 006d6a3c  FUN_006d6a3c =====

undefined8 FUN_006d6a3c(uint *param_1,int *param_2,long param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  long local_50;
  ulong uStack_48;
  
  uVar2 = *param_1;
  do {
    iVar3 = *param_2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 2) {
    syscall(0x62,param_2,0x81,1);
  }
  if (param_4 != -1) {
    auVar10 = FUN_006d63bc(1);
    lVar6 = auVar10._0_8_ + param_3;
    if (param_3 < 0 == SCARRY8(auVar10._0_8_,param_3)) {
      uVar9 = auVar10._8_4_ + param_4;
      if (999999999 < uVar9) {
        bVar5 = SCARRY8(lVar6,1);
        lVar6 = lVar6 + 1;
        if (bVar5) goto LAB_006d6af8;
        uVar9 = uVar9 + 0xc4653600;
      }
      uStack_48 = (ulong)uVar9;
      bVar5 = true;
      local_50 = lVar6;
      goto LAB_006d6afc;
    }
  }
LAB_006d6af8:
  bVar5 = false;
LAB_006d6afc:
  do {
    if (*param_1 != uVar2) goto LAB_006d6b60;
    plVar1 = &local_50;
    if (!bVar5) {
      plVar1 = (long *)0x0;
    }
    lVar6 = syscall(0x62,param_1,0x89,(ulong)uVar2,plVar1,0,0xffffffff);
    if (-1 < lVar6) goto LAB_006d6b60;
    piVar7 = (int *)__errno();
  } while (*piVar7 == 4);
  if (*piVar7 == 0x6e) {
    uVar8 = 0;
  }
  else {
LAB_006d6b60:
    uVar8 = 1;
  }
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(param_2);
      return uVar8;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return uVar8;
}


// ===== 006d6bbc  <std::sys::sync::condvar::futex::std::sys::sync::condvar::futex::Condvar>::wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::condvar::futex::std::sys::sync::condvar::futex::Condvar>::wait */

void __rustcall
<std::sys::sync::condvar::futex::std::sys::sync::condvar::futex::Condvar>::wait
          (uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  
  uVar1 = *param_1;
  do {
    iVar2 = *param_2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 2) {
    syscall(0x62,param_2,0x81,1);
  }
  do {
    if ((*param_1 != uVar1) ||
       (lVar5 = syscall(0x62,param_1,0x89,(ulong)uVar1,0,0,0xffffffff), -1 < lVar5)) break;
    piVar6 = (int *)__errno();
  } while (*piVar6 == 4);
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(param_2);
      return;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


// ===== 006d6ca4  FUN_006d6ca4 =====

/* WARNING: Removing unreachable block (ram,0x006d7204) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_006d6ca4(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  __pid_t __fd;
  code *pcVar7;
  uint uVar8;
  __pid_t _Var9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  long local_108 [3];
  uint local_ec;
  __pid_t _Stack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  __pid_t _Stack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  __pid_t local_94;
  undefined8 local_90;
  undefined8 local_88;
  ulong uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  
  uVar10 = FUN_006e70d4(local_108);
  if ((*(byte *)(param_2 + 0xc0) & 1) != 0) {
    param_1[1] = &PTR_DAT_009775b8;
    *(undefined4 *)param_1 = 2;
    goto joined_r0x006d6d64;
  }
                    /* try { // try from 006d6d2c to 006d6d3f has its CatchHandler @ 006d73a8 */
  uVar10 = FUN_006e7ca4(&local_c8,param_2,param_3);
  if ((int)local_c8 == 1) {
    param_1[1] = CONCAT44(uStack_bc,_Stack_c0);
    *(undefined4 *)param_1 = 2;
    goto joined_r0x006d6d64;
  }
  local_e0 = local_b8;
  uStack_dc = uStack_b4;
  uVar8 = local_c8._4_4_;
  uStack_d8 = uStack_b0;
  local_d0 = local_a8;
  local_ec = local_c8._4_4_;
  _Stack_e8 = _Stack_c0;
  uStack_e4 = uStack_bc;
                    /* try { // try from 006d6d8c to 006d6d93 has its CatchHandler @ 006d73a0 */
  std::sys::pipe::unix::pipe(&local_c8);
  __fd = _Stack_c0;
  if ((int)local_c8 == 1) {
    param_1[1] = CONCAT44(uStack_bc,_Stack_c0);
    *(undefined4 *)param_1 = 2;
    if (local_e0 < 2) {
      if ((uint)uStack_d8 < 2) goto LAB_006d6dc8;
LAB_006d6f58:
      close(uStack_d8._4_4_);
      uVar15 = local_d0;
    }
    else {
      close(uStack_dc);
      if (1 < (uint)uStack_d8) goto LAB_006d6f58;
LAB_006d6dc8:
      uVar15 = local_d0;
    }
    bVar5 = 1 < (uint)local_d0;
    local_d0 = uVar15;
    if (bVar5) {
      local_d0._4_4_ = (int)((ulong)uVar15 >> 0x20);
      iVar6 = local_d0._4_4_;
      close(iVar6);
    }
  }
  else {
    iVar6 = local_c8._4_4_;
    local_a0 = _Stack_c0;
    if (DAT_009a6f00 < 0x3ffffffe) {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
      if (bVar5) {
        cVar3 = ExclusiveMonitorsStatus();
        DAT_009a6f00 = DAT_009a6f00 + 1;
      }
      if (cVar3 != '\0') goto LAB_006d7208;
    }
    else {
LAB_006d7208:
                    /* try { // try from 006d7208 to 006d7213 has its CatchHandler @ 006d736c */
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
                (&DAT_009a6f00);
    }
    _Var9 = fork();
    puVar13 = PTR_GLOBAL_PANIC_COUNT_0099f6c0;
    if (_Var9 != -1) {
      if (_Var9 == 0) {
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar5) {
            *(ulong *)puVar13 = *(ulong *)puVar13 | 0x8000000000000000;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        close(iVar6);
        plVar1 = (long *)0x0;
        if (local_108[0] != -1) {
          plVar1 = local_108;
        }
                    /* try { // try from 006d7248 to 006d7253 has its CatchHandler @ 006d7390 */
        local_78 = FUN_006d740c(param_2,&local_e0,plVar1);
        uVar8 = 0x16000000;
        if ((1 < (local_78 & 3)) && ((local_78 & 3) == 2)) {
          uVar8 = (uint)(local_78 >> 0x20);
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
        }
        local_c8 = (ulong *)CONCAT44((int)_s_NOEX_00373c60,uVar8);
                    /* try { // try from 006d7284 to 006d729b has its CatchHandler @ 006d7380 */
        lVar12 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write(&local_a0,&local_c8,8);
        if (lVar12 != 0) {
                    /* try { // try from 006d72f4 to 006d730b has its CatchHandler @ 006d7380 */
          uVar15 = FUN_006c2e74();
          FUN_0070e804(uVar15,&DAT_0045b21a,0x4e);
          FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
          std::process::abort();
        }
        FUN_006c2e74();
        _exit(1);
LAB_006d72a4:
                    /* try { // try from 006d72a4 to 006d72e7 has its CatchHandler @ 006d73d0 */
        FUN_006e6fc4(&local_c8,&local_9c);
        if ((int)local_c8 == 0) {
          FUN_006c2d40(0,CONCAT44(uStack_bc,_Stack_c0));
          ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00977600;
          puVar13 = &DAT_0045b28f;
          uVar15 = 0x3d;
          goto LAB_006d732c;
        }
                    /* try { // try from 006d7310 to 006d732f has its CatchHandler @ 006d73d0 */
        FUN_006c2d40(1,CONCAT44(uStack_bc,_Stack_c0));
        ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00977618;
      }
      else {
        do {
          uVar8 = DAT_009a6f00 - 1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
          if (bVar5) {
            cVar3 = ExclusiveMonitorsStatus();
            DAT_009a6f00 = uVar8;
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 006d712c to 006d7137 has its CatchHandler @ 006d7334 */
          <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
          wake_writer_or_readers(&DAT_009a6f00);
        }
        close(__fd);
        local_9c = 0;
        local_90 = 0;
        local_94 = _Var9;
        uVar10 = read(iVar6,&local_90,8);
        if (uVar10 == 0xffffffffffffffff) {
          piVar11 = (int *)__errno();
          puVar13 = PTR_PTR_0099f738;
          do {
            iVar2 = *piVar11;
            if (*(undefined ***)puVar13 != &PTR_FUN_00977078) {
                    /* try { // try from 006d7110 to 006d7117 has its CatchHandler @ 006d737c */
              core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
            }
            uVar17 = (long)iVar2 << 0x20 | 2;
            local_88 = 1;
            uStack_80 = uVar17;
                    /* try { // try from 006d70e0 to 006d70ef has its CatchHandler @ 006d73c0 */
            lVar12 = core::io::error::os_functions::get_os_functions();
            uVar10 = (**(code **)(lVar12 + 0x10))(iVar2);
            if ((uVar10 & 1) == 0) {
                    /* try { // try from 006d7198 to 006d71ff has its CatchHandler @ 006d73b0 */
              local_78 = uVar17;
              FUN_006e6fc4(&local_c8,&local_9c);
              if ((int)local_c8 == 0) {
                FUN_006c2d40(0,CONCAT44(uStack_bc,_Stack_c0));
                local_c8 = &local_78;
                ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00977630;
                puVar14 = &local_c8;
                puVar13 = &DAT_0036aa98;
                _Stack_c0 = (__pid_t)PTR_fmt_0099f788;
                uStack_bc = (uint)((ulong)PTR_fmt_0099f788 >> 0x20);
              }
              else {
                FUN_006c2d40(1,CONCAT44(uStack_bc,_Stack_c0));
                ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00977648;
                puVar13 = &DAT_0045b268;
                puVar14 = (undefined8 *)0x4f;
              }
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt(puVar13,puVar14,ppuVar16);
            }
            uVar10 = read(iVar6,&local_90,8);
          } while (uVar10 == 0xffffffffffffffff);
        }
        local_88 = 0;
        uStack_80 = uVar10;
        if (uVar10 == 0) {
          local_c8 = (ulong *)CONCAT44(uStack_98,local_9c);
          bVar5 = false;
          _Stack_c0 = local_94;
          uStack_bc = local_ec;
          uStack_b4 = uStack_e4;
          param_1[1] = CONCAT44(local_ec,local_94);
          *param_1 = local_c8;
          param_1[2] = CONCAT44(uStack_e4,_Stack_e8);
          uVar8 = close(iVar6);
          goto joined_r0x006d709c;
        }
        if (uVar10 != 8) goto LAB_006d72a4;
        local_78 = (ulong)&local_90 | 4;
        uStack_70 = 4;
        if (local_90._4_4_ != 0x58454f4e) {
          _Stack_c0 = 0x708444;
          uStack_bc = 0;
                    /* try { // try from 006d7158 to 006d718f has its CatchHandler @ 006d73d0 */
          local_c8 = &local_90;
          core::panicking::assert_failed<[u8_4usize],&[u8]>
                    (0,&DAT_003793f4,&local_78,&DAT_0036bcf1,&local_c8,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_009775e8);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x6d7334);
          (*pcVar7)();
        }
        uVar8 = (uint)local_90;
                    /* try { // try from 006d6ee4 to 006d6eef has its CatchHandler @ 006d73d0 */
        FUN_006e6fc4(&local_c8,&local_9c);
        if ((int)local_c8 == 0) {
          if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
          }
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          bVar5 = true;
          *(undefined4 *)param_1 = 2;
          param_1[1] = (ulong)(uVar8 >> 0x10 | uVar8 << 0x10) << 0x20 | 2;
          uVar8 = close(iVar6);
          goto joined_r0x006d709c;
        }
        FUN_006c2d40(1,CONCAT44(uStack_bc,_Stack_c0));
        ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_009775d0;
      }
      puVar13 = &DAT_0045b268;
      uVar15 = 0x4f;
LAB_006d732c:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(puVar13,uVar15,ppuVar16);
    }
    piVar11 = (int *)__errno();
    iVar2 = *piVar11;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006d711c to 006d7127 has its CatchHandler @ 006d7338 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *(undefined4 *)param_1 = 2;
    param_1[1] = (long)iVar2 << 0x20 | 2;
    do {
      uVar8 = DAT_009a6f00 - 1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
      if (bVar5) {
        cVar3 = ExclusiveMonitorsStatus();
        DAT_009a6f00 = uVar8;
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 006d713c to 006d7147 has its CatchHandler @ 006d736c */
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
                (&DAT_009a6f00);
    }
    close(__fd);
    bVar5 = true;
    uVar8 = close(iVar6);
joined_r0x006d709c:
    if (1 < local_e0) {
      uVar8 = close(uStack_dc);
    }
    if ((uint)uStack_d8 < 2) {
      uVar15 = local_d0;
    }
    else {
      uVar8 = close(uStack_d8._4_4_);
      uVar15 = local_d0;
    }
    bVar4 = 1 < (uint)local_d0;
    local_d0 = uVar15;
    if (bVar4) {
      local_d0._4_4_ = (int)((ulong)uVar15 >> 0x20);
      iVar6 = local_d0._4_4_;
      uVar8 = close(iVar6);
    }
    uVar10 = (ulong)uVar8;
    uVar8 = local_ec;
    if (!bVar5) goto joined_r0x006d6d64;
  }
  if (uVar8 != 0xffffffff) {
    close(uVar8);
  }
  if (_Stack_e8 != -1) {
    close(_Stack_e8);
  }
  uVar10 = (ulong)uStack_e4;
  if (uStack_e4 != 0xffffffff) {
    uVar8 = close(uStack_e4);
    uVar10 = (ulong)uVar8;
  }
joined_r0x006d6d64:
  if (local_108[0] != -1) {
    uVar10 = FUN_006c4ef4(local_108);
  }
  return uVar10;
}


// ===== 006d740c  FUN_006d740c =====

_union_1457 FUN_006d740c(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  __uid_t __uid;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  __pid_t _Var6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  _union_1457 _Var10;
  __gid_t *__groups;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  _union_1457 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70 [2];
  _union_1457 local_68;
  
  puVar3 = PTR_PTR_0099f738;
  uVar1 = *param_2;
  uVar13 = (ulong)uVar1;
  if (uVar1 == 0) {
LAB_006d74a0:
    if (param_2[2] == 0) {
LAB_006d74f8:
      if (param_2[4] == 0) {
LAB_006d755c:
        __groups = *(__gid_t **)(param_1 + 0xb0);
        if ((__groups == (__gid_t *)0x0) ||
           (iVar5 = setgroups(*(size_t *)(param_1 + 0xb8),__groups), iVar5 != -1)) {
          if (((*(uint *)(param_1 + 0x38) & 1) == 0) ||
             (iVar5 = setgid(*(__gid_t *)(param_1 + 0x3c)), iVar5 != -1)) {
            if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
              __uid = *(__uid_t *)(param_1 + 0x34);
              if ((__groups == (__gid_t *)0x0) && (iVar5 = setgroups(0,(__gid_t *)0x0), iVar5 == -1)
                 ) {
                piVar7 = (int *)__errno();
                iVar5 = *piVar7;
                if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                  core::io::error::os_functions::set_functions::set_functions_inner
                            (&PTR_FUN_00977078);
                }
                local_90.sa_handler = (__sighandler_t)((long)iVar5 << 0x20 | 2);
                _Var10.sa_handler = local_90.sa_handler;
                if (iVar5 != 1) goto LAB_006d77d0;
                    /* try { // try from 006d75dc to 006d76b7 has its CatchHandler @ 006d790c */
                FUN_006c46d4(&local_90);
              }
              iVar5 = setuid(__uid);
              if (iVar5 == -1) {
                piVar7 = (int *)__errno();
                lVar11 = (long)*piVar7;
                if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                  core::io::error::os_functions::set_functions::set_functions_inner
                            (&PTR_FUN_00977078);
                }
                goto LAB_006d77c8;
              }
            }
            if ((*(char **)(param_1 + 0xa0) == (char *)0x0) ||
               (iVar5 = chroot(*(char **)(param_1 + 0xa0)), iVar5 != -1)) {
              if ((*(char **)(param_1 + 0x90) == (char *)0x0) ||
                 (iVar5 = chdir(*(char **)(param_1 + 0x90)), iVar5 != -1)) {
                if (((*(uint *)(param_1 + 0x40) & 1) == 0) ||
                   (iVar5 = setpgid(0,*(__pid_t *)(param_1 + 0x44)), iVar5 != -1)) {
                  if ((*(char *)(param_1 + 0xc1) != '\x01') || (_Var6 = setsid(), _Var6 != -1)) {
                    if (DAT_009a6f38 == '\0') {
                      local_90.sa_handler = (__sighandler_t)0x0;
                      uStack_78 = 0;
                      uStack_80 = 0;
                      uStack_88 = 0;
                      iVar5 = sigaction(0xd,(sigaction *)&local_90,(sigaction *)0x0);
                      FUN_006c92d8(local_70,iVar5);
                      _Var10 = local_68;
                      if (local_70[0] == 1) goto LAB_006d77d0;
                    }
                    lVar11 = *(long *)(param_1 + 0x28) << 4;
                    puVar12 = *(undefined8 **)(param_1 + 0x20);
                    do {
                      puVar4 = PTR_environ_0099f790;
                      if (lVar11 == 0) {
                        if (param_3 != 0) {
                          uVar13 = *(ulong *)PTR_environ_0099f790;
                          *(undefined8 *)PTR_environ_0099f790 = *(undefined8 *)(param_3 + 8);
                        }
                        iVar5 = execvp(*(char **)(param_1 + 0x80),*(char ***)(param_1 + 8));
                        piVar7 = (int *)__errno(iVar5);
                        iVar5 = *piVar7;
                        if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                    /* try { // try from 006d7884 to 006d788f has its CatchHandler @ 006d78b4 */
                          core::io::error::os_functions::set_functions::set_functions_inner
                                    (&PTR_FUN_00977078);
                        }
                        if (param_3 != 0) {
                          *(ulong *)puVar4 = uVar13;
                        }
                        FUN_006c4e7c(param_2);
                        return (_union_1457)((long)iVar5 << 0x20 | 2);
                      }
                    /* try { // try from 006d76d0 to 006d76d3 has its CatchHandler @ 006d7920 */
                      _Var10.sa_handler = (__sighandler_t)(**(code **)(puVar12[1] + 0x20))(*puVar12)
                      ;
                      lVar11 = lVar11 + -0x10;
                      puVar12 = puVar12 + 2;
                    } while (_Var10.sa_handler == (__sighandler_t)0x0);
                    goto LAB_006d77d0;
                  }
                  piVar7 = (int *)__errno();
                  lVar11 = (long)*piVar7;
                  if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                    /* try { // try from 006d7894 to 006d78af has its CatchHandler @ 006d790c */
                    core::io::error::os_functions::set_functions::set_functions_inner
                              (&PTR_FUN_00977078);
                  }
                }
                else {
                  piVar7 = (int *)__errno();
                  lVar11 = (long)*piVar7;
                  if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                    core::io::error::os_functions::set_functions::set_functions_inner
                              (&PTR_FUN_00977078);
                  }
                }
              }
              else {
                piVar7 = (int *)__errno();
                lVar11 = (long)*piVar7;
                if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                  core::io::error::os_functions::set_functions::set_functions_inner
                            (&PTR_FUN_00977078);
                }
              }
            }
            else {
              piVar7 = (int *)__errno();
              lVar11 = (long)*piVar7;
              if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078)
                ;
              }
            }
          }
          else {
            piVar7 = (int *)__errno();
            lVar11 = (long)*piVar7;
            if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                    /* try { // try from 006d76f8 to 006d77af has its CatchHandler @ 006d790c */
              core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
            }
          }
        }
        else {
          piVar7 = (int *)__errno();
          lVar11 = (long)*piVar7;
          if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
          }
        }
LAB_006d77c8:
        _Var10.sa_handler = (__sighandler_t)(lVar11 << 0x20 | 2);
        goto LAB_006d77d0;
      }
      uVar2 = param_2[5];
      do {
        iVar5 = dup2(uVar2,2);
        if (iVar5 != -1) goto LAB_006d755c;
        piVar7 = (int *)__errno();
        iVar5 = *piVar7;
        lVar11 = (long)iVar5;
        if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                    /* try { // try from 006d7544 to 006d754b has its CatchHandler @ 006d78d0 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
                    /* try { // try from 006d752c to 006d753b has its CatchHandler @ 006d7934 */
        lVar8 = core::io::error::os_functions::get_os_functions();
        uVar9 = (**(code **)(lVar8 + 0x10))(iVar5);
      } while ((uVar9 & 1) != 0);
    }
    else {
      uVar2 = param_2[3];
      do {
        iVar5 = dup2(uVar2,1);
        if (iVar5 != -1) goto LAB_006d74f8;
        piVar7 = (int *)__errno();
        iVar5 = *piVar7;
        lVar11 = (long)iVar5;
        if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                    /* try { // try from 006d74ec to 006d74f3 has its CatchHandler @ 006d78e4 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
                    /* try { // try from 006d74d4 to 006d74e3 has its CatchHandler @ 006d7950 */
        lVar8 = core::io::error::os_functions::get_os_functions();
        uVar9 = (**(code **)(lVar8 + 0x10))(iVar5);
      } while ((uVar9 & 1) != 0);
    }
  }
  else {
    uVar2 = param_2[1];
    do {
      iVar5 = dup2(uVar2,0);
      if (iVar5 != -1) goto LAB_006d74a0;
      piVar7 = (int *)__errno();
      iVar5 = *piVar7;
      lVar11 = (long)iVar5;
      if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
                    /* try { // try from 006d7494 to 006d749b has its CatchHandler @ 006d78f8 */
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
                    /* try { // try from 006d747c to 006d748b has its CatchHandler @ 006d796c */
      lVar8 = core::io::error::os_functions::get_os_functions();
      uVar9 = (**(code **)(lVar8 + 0x10))(iVar5);
    } while ((uVar9 & 1) != 0);
  }
  _Var10.sa_handler = (__sighandler_t)(lVar11 << 0x20 | 2);
LAB_006d77d0:
  if (uVar1 < 2) {
    uVar1 = param_2[2];
  }
  else {
    close(param_2[1]);
    uVar1 = param_2[2];
  }
  if (uVar1 < 2) {
    uVar1 = param_2[4];
  }
  else {
    close(param_2[3]);
    uVar1 = param_2[4];
  }
  if (1 < uVar1) {
    close(param_2[5]);
  }
  return (_union_1457)_Var10.sa_handler;
}


// ===== 006d7994  FUN_006d7994 =====

undefined1  [16] FUN_006d7994(int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 4;
  iVar2 = getsockopt(param_1,1,4,local_8,(socklen_t *)(local_8 + 1));
  if (iVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
      auVar5._8_8_ = (long)iVar2 << 0x20 | 2;
      auVar5._0_8_ = 1;
      return auVar5;
    }
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    auVar6._8_8_ = (long)iVar2 << 0x20 | 2;
    auVar6._0_8_ = 1;
    return auVar6;
  }
  lVar4 = (long)local_8[0];
  if (local_8[0] != 0) {
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = lVar4 << 0x20 | 2;
    return auVar1 << 0x40;
  }
  return ZEXT816(0);
}


// ===== 006d7a84  FUN_006d7a84 =====

void FUN_006d7a84(ssize_t *param_1,int param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined4 extraout_w11;
  undefined2 uVar6;
  ushort extraout_w13;
  ushort uVar7;
  ssize_t extraout_x14;
  undefined4 extraout_w15;
  undefined1 local_a8 [20];
  undefined4 local_94;
  undefined4 uStack_90;
  socklen_t local_24;
  
  local_24 = 0x80;
  sVar2 = recvfrom(param_2,param_3,param_4,param_5,(sockaddr *)local_a8,&local_24);
  if (sVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    ppuVar4 = (undefined **)((long)iVar1 << 0x20 | 2);
LAB_006d7b90:
    *param_1 = (ssize_t)ppuVar4;
    *(undefined2 *)(param_1 + 1) = 2;
    return;
  }
  if (local_a8._0_2_ == 10) {
    if (local_24 < 0x1c) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0045bd10,0x35,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978168);
    }
    uVar5 = (uint)(ushort)local_a8._8_2_ << 0x10;
    uVar7 = (ushort)local_a8._2_2_ >> 8 | (ushort)(((ushort)local_a8._2_2_ & 0xff00ff) << 8);
    uVar6 = 1;
  }
  else {
    if (local_a8._0_2_ != 2) {
      ppuVar4 = &PTR_s_invalid_argument_00978180;
      goto LAB_006d7b90;
    }
    if (local_24 < 0x10) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0045bcdc,0x34,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978150);
    }
    uVar6 = 0;
    local_a8._10_2_ =
         (ushort)local_a8._2_2_ >> 8 | (ushort)(((ushort)local_a8._2_2_ & 0xff00ff) << 8);
    local_a8._12_8_ = extraout_x14;
    uVar5 = local_a8._4_4_;
    local_a8._4_4_ = (uint)(ushort)local_a8._2_2_;
    local_94 = extraout_w15;
    uStack_90 = extraout_w11;
    uVar7 = extraout_w13;
  }
  *param_1 = sVar2;
  *(undefined2 *)(param_1 + 1) = uVar6;
  *(uint *)((long)param_1 + 10) = uVar5;
  *(undefined2 *)((long)param_1 + 0xe) = local_a8._10_2_;
  param_1[2] = local_a8._12_8_;
  *(undefined4 *)(param_1 + 3) = local_94;
  *(undefined4 *)((long)param_1 + 0x1c) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 4) = uStack_90;
  *(ushort *)((long)param_1 + 0x24) = uVar7;
  return;
}


// ===== 006d7bec  <std::sys::net::connection::socket::unix::std::sys::net::connection::socket::unix::Socket>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::unix::std::sys::net::connection::socket::unix::Socket>::new
    */

void __rustcall
<std::sys::net::connection::socket::unix::std::sys::net::connection::socket::unix::Socket>::new
          (undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = socket(param_2,param_3 | 0x80000,0);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d7c74  FUN_006d7c74 =====

void FUN_006d7c74(undefined4 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  puVar3 = PTR_PTR_0099f738;
  uVar1 = *param_2;
  do {
    lVar4 = syscall(0xf2,(ulong)uVar1,param_3,param_4,0x80000);
    if ((int)lVar4 != -1) {
      uVar7 = 0;
      param_1[1] = (int)lVar4;
      goto LAB_006d7d20;
    }
    piVar5 = (int *)__errno();
    iVar2 = *piVar5;
    if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
                    /* try { // try from 006d7ce0 to 006d7cef has its CatchHandler @ 006d7d3c */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar6 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar6 & 1) != 0);
  *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
  uVar7 = 1;
LAB_006d7d20:
  *param_1 = uVar7;
  return;
}


// ===== 006d7d5c  FUN_006d7d5c =====

void FUN_006d7d5c(ulong *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  long lStack_30;
  socklen_t local_24;
  
  local_38 = 0;
  lStack_30 = 0;
  local_24 = 0x10;
  iVar1 = getsockopt(param_2,1,param_3,&local_38,&local_24);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *param_1 = (long)iVar1 << 0x20 | 2;
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
    return;
  }
  if (lStack_30 != 0 || local_38 != 0) {
    uVar3 = (int)lStack_30 * 1000;
    uVar4 = local_38;
    if (999999999 < uVar3) {
      uVar5 = (ulong)(uVar3 >> 9) * 0x44b83;
      uVar6 = uVar5 >> 0x27;
      uVar4 = local_38 + uVar6;
      if (CARRY8(local_38,uVar6)) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_0045b03a,0x19,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977390);
      }
      uVar3 = uVar3 + (uint)(uVar5 >> 0x27) * -1000000000;
    }
    *param_1 = uVar4;
    *(uint *)(param_1 + 1) = uVar3;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 006d7e7c  FUN_006d7e7c =====

void FUN_006d7e7c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 0;
  iVar1 = socketpair(1,param_2 | 0x80000,0,local_28);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
    *param_1 = 1;
    return;
  }
  if (local_28[0] != -1) {
    if (local_28[1] != -1) {
      param_1[1] = local_28[0];
      param_1[2] = local_28[1];
      *param_1 = 0;
      return;
    }
                    /* try { // try from 006d7f50 to 006d7f67 has its CatchHandler @ 006d7f6c */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00373580,8,&PTR_s__rustc_48a229ceaefd4985c50990b14_009786b0);
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00373580,8,&PTR_s__rustc_48a229ceaefd4985c50990b14_009786b0);
}


// ===== 006d7f80  <<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>::remaining =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>::remaining
    */

undefined1  [16] __rustcall
<<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>
::remaining(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1[1];
  uVar2 = *(ulong *)(*param_1 + 0x10);
  if (uVar1 <= uVar2) {
    auVar3._8_8_ = uVar2 - uVar1;
    auVar3._0_8_ = *(long *)(*param_1 + 8) + uVar1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar1,uVar2,uVar2,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977720);
}


// ===== 006d7fb8  FUN_006d7fb8 =====

void FUN_006d7fb8(undefined8 *param_1,long param_2,ulong param_3,char param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_4 == '\0') {
    uVar7 = *(ulong *)(param_2 + 0x20);
    if (uVar7 == 0) goto LAB_006d8094;
    lVar4 = *(long *)(param_2 + 0x18);
    if (uVar7 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar2 = (uVar7 >> 1) + lVar6;
        if (*(ulong *)(lVar4 + lVar2 * 0x230 + 0x1c0) <= param_3) {
          lVar6 = lVar2;
        }
        uVar7 = uVar7 - (uVar7 >> 1);
      } while (1 < uVar7);
    }
    uVar7 = *(ulong *)(lVar4 + lVar6 * 0x230 + 0x1c0);
    if (uVar7 == param_3) goto LAB_006d8094;
    if (uVar7 < param_3) {
      lVar6 = lVar6 + 1;
    }
    if (lVar6 == 0) goto LAB_006d8094;
    puVar5 = (uint *)(lVar4 + lVar6 * 0x230 + -0x230);
    uVar3 = *puVar5;
  }
  else {
    if ((param_4 != '\x01') || (uVar7 = *(ulong *)(param_2 + 0x30), uVar7 == 0)) goto LAB_006d8094;
    lVar4 = *(long *)(param_2 + 0x28);
    if (uVar7 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar2 = (uVar7 >> 1) + lVar6;
        if (*(ulong *)(lVar4 + lVar2 * 0x1c8 + 0x1c0) <= param_3) {
          lVar6 = lVar2;
        }
        uVar7 = uVar7 - (uVar7 >> 1);
      } while (1 < uVar7);
    }
    uVar7 = *(ulong *)(lVar4 + lVar6 * 0x1c8 + 0x1c0);
    if (uVar7 == param_3) goto LAB_006d8094;
    if (uVar7 < param_3) {
      lVar6 = lVar6 + 1;
    }
    if (lVar6 == 0) goto LAB_006d8094;
    puVar5 = (uint *)(lVar4 + lVar6 * 0x1c8 + -0x1c8);
    uVar3 = *puVar5;
  }
  if (((uVar3 & 1) == 0) &&
     (uVar7 = param_3 - *(ulong *)(puVar5 + 2), *(ulong *)(puVar5 + 2) <= param_3)) {
    lVar4 = 0xc;
    if (*(char *)((long)puVar5 + 0x49) != '\b') {
      lVar4 = 4;
    }
    uVar1 = (*(long *)(puVar5 + 0xe) - *(ulong *)(puVar5 + 0xc)) + lVar4;
    if (uVar1 <= uVar7 && uVar7 - uVar1 < *(ulong *)(puVar5 + 0xc)) {
      param_1[1] = puVar5;
      param_1[2] = uVar7;
      *param_1 = 0;
      return;
    }
  }
LAB_006d8094:
  *(undefined1 *)(param_1 + 1) = 0x3a;
  *param_1 = 1;
  return;
}


// ===== 006d8124  <std::sync::once::[0]::std::sync::once::Once>::wait_force =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::once::[0]::std::sync::once::Once>::wait_force */

void __rustcall <std::sync::once::[0]::std::sync::once::Once>::wait_force(undefined8 *param_1)

{
  if ((int)*param_1 == 0) {
    return;
  }
  FUN_006d8b50(param_1,1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977738);
  return;
}


// ===== 006d8140  <std::sync::once::[0]::std::sync::once::Once>::wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::once::[0]::std::sync::once::Once>::wait */

void __rustcall <std::sync::once::[0]::std::sync::once::Once>::wait(undefined8 *param_1)

{
  if ((int)*param_1 == 0) {
    return;
  }
  FUN_006d8b50(param_1,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977750);
  return;
}


// ===== 006d815c  <std::sync::barrier::[0]::std::sync::barrier::Barrier>::wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::barrier::[0]::std::sync::barrier::Barrier>::wait */

bool __rustcall <std::sync::barrier::[0]::std::sync::barrier::Barrier>::wait(int *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(param_1);
      lVar9 = *(long *)(param_1 + 4);
      uVar7 = *(ulong *)(param_1 + 6);
      uVar8 = *(long *)(param_1 + 2) + 1;
      *(ulong *)(param_1 + 2) = uVar8;
      if (uVar8 < uVar7) goto LAB_006d8258;
      goto LAB_006d81a8;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar9 = *(long *)(param_1 + 4);
  uVar7 = *(ulong *)(param_1 + 6);
  uVar8 = *(long *)(param_1 + 2) + 1;
  *(ulong *)(param_1 + 2) = uVar8;
  if (uVar8 < uVar7) {
LAB_006d8258:
    do {
      uVar1 = param_1[8];
      do {
        iVar2 = *param_1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 2) {
        syscall(0x62,param_1,0x81,1);
      }
      do {
        if ((param_1[8] != uVar1) ||
           (lVar5 = syscall(0x62,param_1 + 8,0x89,(ulong)uVar1,0,0,0xffffffff), -1 < lVar5)) break;
        piVar6 = (int *)__errno();
      } while (*piVar6 == 4);
      do {
        if (*param_1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (param_1);
          if (lVar9 != *(long *)(param_1 + 4)) goto LAB_006d81d8;
          goto LAB_006d8258;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    } while (lVar9 == *(long *)(param_1 + 4));
  }
  else {
LAB_006d81a8:
    param_1[2] = 0;
    param_1[3] = 0;
    *(long *)(param_1 + 4) = lVar9 + 1;
    piVar6 = param_1 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = *piVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    syscall(0x62,param_1 + 8,0x81,0x7fffffff);
  }
LAB_006d81d8:
  do {
    iVar2 = *param_1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 2) {
    syscall(0x62,param_1,0x81,1);
  }
  return uVar7 <= uVar8;
}


// ===== 006d8310  FUN_006d8310 =====

void FUN_006d8310(undefined8 *param_1,long param_2,byte param_3,ulong param_4,long *param_5)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar1 = *param_5;
  if (lVar1 < 0x1d) {
    if (lVar1 == 0x1a) {
      lVar1 = *(long *)(param_2 + 0x80);
      uVar6 = *(ulong *)(param_2 + 0x88);
      uVar4 = param_5[1];
      if ((uVar4 <= uVar6) && (lVar1 = lVar1 + uVar4, uVar6 != uVar4)) {
        lVar5 = 0;
        do {
          if (*(char *)(lVar1 + lVar5) == '\0') goto LAB_006d8468;
          lVar5 = lVar5 + 1;
        } while (uVar6 - uVar4 != lVar5);
      }
    }
    else {
      if ((lVar1 != 0x1b) || (lVar5 = *(long *)(param_2 + 0xf0), lVar5 == 0)) goto LAB_006d8390;
      lVar1 = *(long *)(lVar5 + 0x90);
      uVar6 = *(ulong *)(lVar5 + 0x98);
      uVar4 = param_5[1];
      if ((uVar4 <= uVar6) && (lVar1 = lVar1 + uVar4, uVar6 != uVar4)) {
        lVar5 = 0;
        do {
          if (*(char *)(lVar1 + lVar5) == '\0') goto LAB_006d8468;
          lVar5 = lVar5 + 1;
        } while (uVar6 - uVar4 != lVar5);
      }
    }
  }
  else {
    if (lVar1 == 0x1d) {
      puVar2 = *(uint **)(param_2 + 0x90);
      uVar6 = *(ulong *)(param_2 + 0x98) - param_4;
      if (param_4 <= *(ulong *)(param_2 + 0x98)) {
        puVar2 = (uint *)((long)puVar2 + param_4);
        uVar3 = param_5[1] * (ulong)param_3;
        uVar4 = uVar6 - uVar3;
        if (uVar3 <= uVar6) {
          puVar2 = (uint *)((long)puVar2 + uVar3);
          if (param_3 == 8) {
            if (7 < uVar4) {
              uVar6 = ((ulong)*puVar2 << 8 | (ulong)(uint3)puVar2[1] << 0x28) >> 8 |
                      (ulong)*(byte *)((long)puVar2 + 7) << 0x38;
LAB_006d84bc:
              lVar1 = *(long *)(param_2 + 0x80);
              uVar4 = *(ulong *)(param_2 + 0x88);
              if (uVar4 < uVar6) {
                *(undefined1 *)(param_1 + 1) = 0x13;
                param_1[2] = lVar1;
                *param_1 = 1;
                return;
              }
              lVar1 = lVar1 + uVar6;
              if (uVar4 != uVar6) {
                lVar5 = 0;
                do {
                  if (*(char *)(lVar1 + lVar5) == '\0') {
                    param_1[1] = lVar1;
                    param_1[2] = lVar5;
                    *param_1 = 0;
                    return;
                  }
                  lVar5 = lVar5 + 1;
                } while (uVar4 - uVar6 != lVar5);
              }
              *(undefined1 *)(param_1 + 1) = 0x13;
              param_1[2] = lVar1;
              *param_1 = 1;
              return;
            }
          }
          else if (3 < uVar4) {
            uVar6 = (ulong)*puVar2;
            goto LAB_006d84bc;
          }
        }
      }
      *(undefined1 *)((long)param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined2 *)((long)param_1 + 0xd) = 0;
      *(undefined4 *)((long)param_1 + 9) = 0;
      param_1[2] = puVar2;
      *param_1 = 1;
      return;
    }
    if (lVar1 != 0x1e) {
      if (lVar1 == 0x1f) {
        lVar1 = param_5[2];
        param_1[1] = param_5[1];
        param_1[2] = lVar1;
        *param_1 = 0;
        return;
      }
LAB_006d8390:
      *(undefined1 *)(param_1 + 1) = 0x48;
      *param_1 = 1;
      return;
    }
    lVar1 = *(long *)(param_2 + 0x50);
    uVar6 = *(ulong *)(param_2 + 0x58);
    uVar4 = param_5[1];
    if ((uVar4 <= uVar6) && (lVar1 = lVar1 + uVar4, uVar6 != uVar4)) {
      lVar5 = 0;
      do {
        if (*(char *)(lVar1 + lVar5) == '\0') {
LAB_006d8468:
          param_1[1] = lVar1;
          param_1[2] = lVar5;
          *param_1 = 0;
          return;
        }
        lVar5 = lVar5 + 1;
      } while (uVar6 - uVar4 != lVar5);
    }
  }
  *(undefined1 *)(param_1 + 1) = 0x13;
  param_1[2] = lVar1;
  *param_1 = 1;
  return;
}


// ===== 006d8524  <std::os::fd::owned::[0]::std::os::fd::owned::BorrowedFd>::try_clone_to_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::fd::owned::[0]::std::os::fd::owned::BorrowedFd>::try_clone_to_owned */

void __rustcall
<std::os::fd::owned::[0]::std::os::fd::owned::BorrowedFd>::try_clone_to_owned
          (undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fcntl(*param_2,0x406,3);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006d85b0  <std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::new */

undefined1  [16] __rustcall
<std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::new
          (size_t param_1,void *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  pthread_attr_t pStack_68;
  undefined *local_18;
  
  local_18._0_4_ = pthread_attr_init(&pStack_68);
  if ((int)local_18 != 0) {
                    /* try { // try from 006d870c to 006d872b has its CatchHandler @ 006d87a4 */
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<i32,i32>
              (0,&local_18,&DAT_00376724,0,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_009777b0)
    ;
  }
  if (param_1 < 0x4001) {
    param_1 = 0x4000;
  }
  local_18._0_4_ = pthread_attr_setstacksize(&pStack_68,param_1);
  if ((int)local_18 != 0) {
    if ((int)local_18 != 0x16) {
                    /* try { // try from 006d8734 to 006d8753 has its CatchHandler @ 006d8790 */
                    /* WARNING: Subroutine does not return */
      core::panicking::assert_failed<i32,i32>
                (0,&local_18,&DAT_00376408,0,param_5,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977798);
    }
    lVar3 = sysconf(0x27);
    iVar1 = pthread_attr_setstacksize(&pStack_68,(param_1 + lVar3) - 1 & -lVar3);
    if (iVar1 != 0) {
      iVar1 = pthread_attr_destroy(&pStack_68);
      local_18 = (undefined *)CONCAT44(local_18._4_4_,iVar1);
      if (iVar1 != 0) {
                    /* try { // try from 006d8758 to 006d8777 has its CatchHandler @ 006d87a4 */
                    /* WARNING: Subroutine does not return */
        core::panicking::assert_failed<i32,i32>
                  (0,&local_18,&DAT_00376724,0,param_5,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00977200);
      }
      FUN_006c39a8(param_2);
      puVar4 = &UNK_00977780;
      uVar5 = 1;
      goto LAB_006d86b8;
    }
  }
  local_18 = (undefined *)0x0;
  uVar2 = pthread_create((pthread_t *)&local_18,&pStack_68,FUN_006f8778,param_2);
  puVar4 = local_18;
  if (uVar2 == 0) {
    uVar5 = 0;
    iVar1 = pthread_attr_destroy(&pStack_68);
    local_18 = (undefined *)CONCAT44(local_18._4_4_,iVar1);
  }
  else {
                    /* try { // try from 006d8670 to 006d867f has its CatchHandler @ 006d8790 */
    FUN_006c39a8(param_2);
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006d877c to 006d878b has its CatchHandler @ 006d8790 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    puVar4 = (undefined *)((ulong)uVar2 << 0x20 | 2);
    uVar5 = 1;
    iVar1 = pthread_attr_destroy(&pStack_68);
    local_18 = (undefined *)CONCAT44(local_18._4_4_,iVar1);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<i32,i32>
              (0,&local_18,&DAT_00376724,0,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977200)
    ;
  }
LAB_006d86b8:
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


// ===== 006d87bc  <std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::join =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::join */

void __rustcall
<std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::join(pthread_t param_1)

{
  uint uVar1;
  ulong *local_30;
  undefined *puStack_28;
  ulong local_8;
  
  uVar1 = pthread_join(param_1,(void **)0x0);
  if (uVar1 == 0) {
    return;
  }
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  local_30 = &local_8;
  local_8 = (ulong)uVar1 << 0x20 | 2;
  puStack_28 = PTR_fmt_0099f710;
                    /* try { // try from 006d8820 to 006d8837 has its CatchHandler @ 006d8858 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_00369509,&local_30,&PTR_s__rustc_48a229ceaefd4985c50990b14_009777c8);
}


// ===== 006d8870  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call */

void __rustcall
<std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
          (ulong *param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  
  uVar10 = *param_1;
  if ((param_2 & 1) == 0) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = uVar9 & 3;
      uVar8 = uVar9 & 4;
      bVar4 = uVar7 == 1;
      if (!bVar4 && (uVar10 & 3) != 0) goto LAB_006d8a44;
      while( true ) {
        uVar7 = (uint)uVar10;
        if (!bVar4) {
          return;
        }
        if (uVar8 != 0) break;
        uVar2 = (uint)*param_1;
        uVar7 = uVar7 | 4;
        if (uVar2 == 1) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar4) {
            *(uint *)param_1 = uVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        if (bVar4) break;
        while( true ) {
          uVar7 = uVar2 & 3;
          bVar4 = uVar7 == 1;
          uVar8 = uVar2 & 4;
          uVar10 = (ulong)uVar2;
          uVar9 = uVar2;
          if (uVar7 < 2) break;
LAB_006d8a44:
          if (uVar7 != 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt(&DAT_0045b330,0x55,param_5);
          }
          uVar2 = (uint)*param_1;
          if (uVar2 == uVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar4) {
              *(uint *)param_1 = uVar8 | 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              bVar4 = false;
              goto LAB_006d8988;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        }
      }
      local_58 = 0;
      while ((uint)*param_1 == uVar7) {
        puVar1 = auStack_50;
        if ((uint)local_58 == 0) {
          puVar1 = (undefined1 *)0x0;
        }
        lVar5 = syscall(0x62,param_1,0x89,(ulong)uVar7,puVar1,0,0xffffffff);
        if ((-1 < lVar5) || (piVar6 = (int *)__errno(), *piVar6 != 4)) break;
      }
      uVar10 = *param_1;
    } while( true );
  }
  do {
    while( true ) {
      uVar8 = (uint)uVar10;
      uVar7 = uVar8 & 3;
      if (uVar7 - 2 < 2) break;
      if (uVar7 != 1) {
        return;
      }
      if ((uVar10 & 4) == 0) {
        uVar9 = (uint)*param_1;
        uVar8 = uVar8 | 4;
        if (uVar9 == 1) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar4) {
            *(uint *)param_1 = uVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        if (!bVar4) goto LAB_006d8964;
      }
      local_58 = 0;
      while ((uint)*param_1 == uVar8) {
        puVar1 = auStack_50;
        if ((uint)local_58 == 0) {
          puVar1 = (undefined1 *)0x0;
        }
        lVar5 = syscall(0x62,param_1,0x89,(ulong)uVar8,puVar1,0,0xffffffff);
        if ((-1 < lVar5) || (piVar6 = (int *)__errno(), *piVar6 != 4)) break;
      }
      uVar10 = *param_1;
    }
    uVar9 = (uint)*param_1;
    if (uVar9 == uVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *(uint *)param_1 = uVar8 & 4 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        bVar4 = uVar7 == 2;
LAB_006d8988:
        local_58 = (ulong)CONCAT31(local_58._5_3_,bVar4) << 0x20;
                    /* try { // try from 006d8994 to 006d899f has its CatchHandler @ 006d8b1c */
        (**(code **)(param_4 + 0x20))(param_3,&local_58);
        do {
          uVar10 = *param_1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar4) {
            *(uint *)param_1 = (uint)local_58;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)uVar10 >> 2 & 1) != 0) {
          syscall(0x62,param_1,0x81,0x7fffffff);
        }
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
LAB_006d8964:
    uVar10 = (ulong)uVar9;
  } while( true );
}


// ===== 006d8b50  FUN_006d8b50 =====

void FUN_006d8b50(ulong *param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  if ((param_2 & 1) == 0) {
LAB_006d8c3c:
    uVar7 = (uint)uVar8;
    uVar5 = uVar7 & 3;
    if ((uVar8 & 3) == 0) {
      return;
    }
    if (uVar5 == 2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&DAT_0045b330,0x55,param_3);
    }
    if ((uVar7 >> 2 & 1) == 0) goto code_r0x006d8c50;
    goto LAB_006d8c80;
  }
  uVar5 = (uint)uVar8;
  uVar6 = uVar8;
  do {
    if ((uVar6 & 3) == 0) {
      return;
    }
    uVar7 = (uint)uVar8;
    if ((uVar7 >> 2 & 1) == 0) {
      uVar6 = (ulong)(uint)*param_1;
      uVar7 = uVar7 | 4;
      if ((uint)*param_1 == (uVar5 & 3)) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *(uint *)param_1 = uVar7;
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
      if (bVar2) goto LAB_006d8bd4;
    }
    else {
LAB_006d8bd4:
      do {
        if (((uint)*param_1 != uVar7) ||
           (lVar3 = syscall(0x62,param_1,0x89,(ulong)uVar7,0,0,0xffffffff), -1 < lVar3)) break;
        piVar4 = (int *)__errno();
      } while (*piVar4 == 4);
      uVar6 = *param_1;
    }
    uVar5 = (uint)uVar6;
    uVar8 = uVar6 & 0xffffffff;
  } while( true );
code_r0x006d8c50:
  uVar7 = uVar7 | 4;
  uVar8 = (ulong)(uint)*param_1;
  if ((uint)*param_1 == uVar5) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *(uint *)param_1 = uVar7;
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
  if (bVar2) {
LAB_006d8c80:
    do {
      if (((uint)*param_1 != uVar7) ||
         (lVar3 = syscall(0x62,param_1,0x89,(ulong)uVar7,0,0,0xffffffff), -1 < lVar3)) break;
      piVar4 = (int *)__errno();
    } while (*piVar4 == 4);
    uVar8 = *param_1;
  }
  goto LAB_006d8c3c;
}


// ===== 006d8cf0  FUN_006d8cf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d8cf0(undefined8 *param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 local_40;
  uint local_38;
  undefined2 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar2 = _s__00374fd8;
  if (param_2 < 2) {
    if (param_2 == 0) {
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
      return;
    }
    local_34 = 0;
    local_40 = _s__00373250;
    local_38 = CONCAT11((char)param_4,(char)param_4) ^ 0x100;
    FUN_006ea8b8(&local_30,"/dev/null",&local_40);
    uVar2 = _s__00374e70;
    if ((local_30 & 1) == 0) {
      *(undefined4 *)(param_1 + 1) = local_2c;
      *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_2 != 2) {
      if ((param_2 == 3) && (2 < param_3)) {
        *(uint *)(param_1 + 1) = param_3;
        *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
        *param_1 = uVar2;
        return;
      }
      iVar3 = fcntl(param_3,0x406,3);
      uVar2 = _s__00374e70;
      if (iVar3 != -1) {
        *(int *)(param_1 + 1) = iVar3;
        *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
        *param_1 = uVar2;
        return;
      }
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      uVar5 = (long)iVar3 << 0x20 | 2;
      goto LAB_006d8e34;
    }
    std::sys::pipe::unix::pipe(&local_30);
    uVar2 = _s__00374e70;
    if ((local_30 & 1) == 0) {
      uVar1 = local_28;
      if (param_4 == 0) {
        uVar1 = local_2c;
        local_2c = local_28;
      }
      *(undefined4 *)(param_1 + 1) = local_2c;
      *(undefined4 *)((long)param_1 + 0xc) = uVar1;
      *param_1 = uVar2;
      return;
    }
  }
  uVar5 = CONCAT44(uStack_24,local_28);
LAB_006d8e34:
  param_1[1] = uVar5;
  *(undefined4 *)param_1 = 1;
  return;
}


// ===== 006d8eb4  FUN_006d8eb4 =====

void FUN_006d8eb4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  size_t __n;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar11 = param_1[5];
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x21a);
  if (0xb < param_2 + uVar12) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045b35a,0x33,&PTR_s__rustc_48a229ceaefd4985c50990b14_009777e0);
  }
  lVar13 = param_1[3];
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x21a);
  lVar5 = uVar14 - param_2;
  if (uVar14 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045b38d,0x27,&PTR_s__rustc_48a229ceaefd4985c50990b14_009777f8);
  }
  *(short *)(lVar13 + 0x21a) = (short)lVar5;
  *(short *)(lVar11 + 0x21a) = (short)(param_2 + uVar12);
  memmove((void *)(lVar11 + 8 + param_2 * 0x18),(void *)(lVar11 + 8),uVar12 * 0x18);
  memmove((void *)(lVar11 + 0x110 + param_2 * 0x18),(void *)(lVar11 + 0x110),uVar12 * 0x18);
  lVar1 = lVar5 + 1;
  if (uVar14 - lVar1 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045add3,0x28,&DAT_009770a8);
  }
  __n = (uVar14 - lVar1) * 0x18;
  memcpy((void *)(lVar11 + 8),(void *)(lVar13 + 8 + lVar1 * 0x18),__n);
  memcpy((void *)(lVar11 + 0x110),(void *)(lVar13 + 0x110 + lVar1 * 0x18),__n);
  lVar6 = *param_1 + param_1[2] * 0x18;
  puVar2 = (undefined8 *)(lVar13 + 0x110 + lVar5 * 0x18);
  puVar3 = (undefined8 *)(lVar13 + 8 + lVar5 * 0x18);
  uVar17 = puVar2[1];
  uVar15 = *puVar2;
  uVar7 = puVar2[2];
  uVar10 = puVar3[2];
  uVar16 = *puVar3;
  uVar20 = *(undefined8 *)(lVar6 + 0x10);
  uVar19 = *(undefined8 *)(lVar6 + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  uVar8 = *(undefined8 *)(lVar6 + 0x120);
  *(undefined8 *)(lVar6 + 0x10) = puVar3[1];
  *(undefined8 *)(lVar6 + 8) = uVar16;
  uVar18 = *(undefined8 *)(lVar6 + 0x118);
  uVar16 = *(undefined8 *)(lVar6 + 0x110);
  *(undefined8 *)(lVar6 + 0x18) = uVar10;
  puVar2 = (undefined8 *)(lVar11 + 0x110 + __n);
  *(undefined8 *)(lVar6 + 0x120) = uVar7;
  *(undefined8 *)(lVar6 + 0x118) = uVar17;
  *(undefined8 *)(lVar6 + 0x110) = uVar15;
  puVar3 = (undefined8 *)(lVar11 + 8 + __n);
  puVar3[1] = uVar20;
  *puVar3 = uVar19;
  puVar3[2] = uVar4;
  lVar6 = param_1[4];
  lVar5 = param_1[6];
  puVar2[1] = uVar18;
  *puVar2 = uVar16;
  puVar2[2] = uVar8;
  if (lVar6 == 0) {
    if (lVar5 != 0) goto LAB_006d9120;
  }
  else {
    if (lVar5 == 0) {
LAB_006d9120:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0045ad81,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977810);
    }
    memmove((void *)(lVar11 + 0x220 + param_2 * 8),(void *)(lVar11 + 0x220),uVar12 * 8 + 8);
    memcpy((void *)(lVar11 + 0x220),(void *)(lVar13 + lVar1 * 8 + 0x220),param_2 * 8);
    lVar5 = 0;
    do {
      lVar13 = lVar5 + 1;
      plVar9 = *(long **)(lVar11 + lVar5 * 8 + 0x220);
      *(short *)(plVar9 + 0x43) = (short)lVar5;
      *plVar9 = lVar11;
      lVar5 = lVar13;
    } while (param_2 + uVar12 + 1 != lVar13);
  }
  return;
}


// ===== 006d9138  FUN_006d9138 =====

void FUN_006d9138(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar12 = param_1[3];
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x21a);
  if (0xb < param_2 + uVar13) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045b3b4,0x32,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977828);
  }
  lVar11 = param_1[5];
  lVar3 = *(ushort *)(lVar11 + 0x21a) - param_2;
  if (*(ushort *)(lVar11 + 0x21a) < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045b3e6,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977840);
  }
  *(short *)(lVar12 + 0x21a) = (short)(param_2 + uVar13);
  lVar4 = param_1[2];
  lVar9 = *param_1;
  lVar14 = param_2 * 0x18;
  *(short *)(lVar11 + 0x21a) = (short)lVar3;
  lVar9 = lVar9 + lVar4 * 0x18;
  puVar1 = (undefined8 *)(lVar11 + 0x110 + lVar14 + -0x18);
  puVar2 = (undefined8 *)(lVar11 + 8 + lVar14 + -0x18);
  uVar17 = puVar1[1];
  uVar15 = *puVar1;
  uVar6 = puVar1[2];
  uVar10 = puVar2[2];
  uVar7 = *(undefined8 *)(lVar9 + 0x18);
  uVar20 = *(undefined8 *)(lVar9 + 0x10);
  uVar19 = *(undefined8 *)(lVar9 + 8);
  uVar16 = *puVar2;
  uVar8 = *(undefined8 *)(lVar9 + 0x120);
  *(undefined8 *)(lVar9 + 0x10) = puVar2[1];
  *(undefined8 *)(lVar9 + 8) = uVar16;
  uVar18 = *(undefined8 *)(lVar9 + 0x118);
  uVar16 = *(undefined8 *)(lVar9 + 0x110);
  *(undefined8 *)(lVar9 + 0x120) = uVar6;
  lVar4 = uVar13 * 0x18;
  *(undefined8 *)(lVar9 + 0x18) = uVar10;
  *(undefined8 *)(lVar9 + 0x118) = uVar17;
  *(undefined8 *)(lVar9 + 0x110) = uVar15;
  puVar1 = (undefined8 *)(lVar12 + 8 + lVar4);
  puVar1[2] = uVar7;
  puVar2 = (undefined8 *)(lVar12 + 0x110 + lVar4);
  puVar1[1] = uVar20;
  *puVar1 = uVar19;
  puVar2[1] = uVar18;
  *puVar2 = uVar16;
  puVar2[2] = uVar8;
  memcpy((void *)(lVar12 + 8 + lVar4 + 0x18),(void *)(lVar11 + 8),lVar14 - 0x18);
  memcpy((void *)(lVar12 + 0x110 + lVar4 + 0x18),(void *)(lVar11 + 0x110),lVar14 - 0x18);
  memmove((void *)(lVar11 + 8),(void *)(lVar11 + 8 + lVar14),lVar3 * 0x18);
  memmove((void *)(lVar11 + 0x110),(void *)(lVar11 + 0x110 + lVar14),lVar3 * 0x18);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_006d93d0;
  }
  else {
    if (param_1[6] == 0) {
LAB_006d93d0:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0045ad81,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977858);
    }
    lVar4 = lVar12 + 0x220;
    plVar5 = (long *)(lVar4 + (uVar13 + 1) * 8);
    memcpy(plVar5,(void *)(lVar11 + 0x220),param_2 * 8);
    memmove((void *)(lVar11 + 0x220),(void *)(lVar11 + 0x220 + param_2 * 8),lVar3 * 8 + 8);
    plVar5 = (long *)*plVar5;
    *plVar5 = lVar12;
    *(short *)(plVar5 + 0x43) = (short)(uVar13 + 1);
    if (param_2 != 1) {
      plVar5 = *(long **)(lVar4 + (uVar13 + 2) * 8);
      *plVar5 = lVar12;
      *(short *)(plVar5 + 0x43) = (short)(uVar13 + 2);
      if (param_2 != 2) {
        plVar5 = *(long **)(lVar4 + (uVar13 + 3) * 8);
        *plVar5 = lVar12;
        *(short *)(plVar5 + 0x43) = (short)(uVar13 + 3);
        if (param_2 != 3) {
          plVar5 = *(long **)(lVar4 + (uVar13 + 4) * 8);
          *plVar5 = lVar12;
          *(short *)(plVar5 + 0x43) = (short)(uVar13 + 4);
          if (param_2 != 4) {
            plVar5 = *(long **)(lVar4 + (uVar13 + 5) * 8);
            *plVar5 = lVar12;
            *(short *)(plVar5 + 0x43) = (short)(uVar13 + 5);
          }
        }
      }
    }
    lVar12 = 0;
    do {
      lVar4 = lVar12 + 1;
      plVar5 = *(long **)(lVar11 + lVar12 * 8 + 0x220);
      *(short *)(plVar5 + 0x43) = (short)lVar12;
      *plVar5 = lVar11;
      lVar12 = lVar4;
    } while (lVar3 + 1 != lVar4);
  }
  return;
}


// ===== 006d93e8  <std::path::[16]::std::path::Path>::_ends_with =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::_ends_with */

bool __rustcall
<std::path::[16]::std::path::Path>::_ends_with
          (char *param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  char *local_1a0;
  long lStack_198;
  undefined1 local_190;
  undefined2 local_168;
  undefined1 local_166;
  char *local_160;
  long lStack_158;
  char local_150;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 local_128;
  undefined1 local_127;
  char local_126;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 local_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (param_2 == 0) {
    cVar1 = false;
  }
  else {
    cVar1 = *param_1 == '/';
  }
  if (param_4 == 0) {
    local_166 = false;
  }
  else {
    local_166 = *param_3 == '/';
  }
  local_150 = -1;
  local_168 = 0x201;
  local_128 = 1;
  local_127 = 2;
  local_190 = 0xff;
  local_1a0 = param_3;
  lStack_198 = param_4;
  do {
    uStack_137 = uStack_108;
    local_13f = uStack_110;
    uStack_130 = local_101;
    uStack_12f = uStack_100;
    uStack_147 = uStack_118;
    local_14f = local_120;
    local_160 = param_1;
    lStack_158 = param_2;
    local_126 = cVar1;
    <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
              (&local_b0,&local_160);
    <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
              (local_78,&local_1a0);
    local_120 = CONCAT71(uStack_af,local_b0);
    local_f0 = local_80;
    uStack_118 = uStack_a8;
    uStack_108 = (undefined7)uStack_98;
    local_101 = (undefined1)((ulong)uStack_98 >> 0x38);
    uStack_110 = uStack_a0;
    uStack_f8 = uStack_88;
    uStack_100 = (undefined7)local_90;
    uStack_f9 = (undefined1)((ulong)local_90 >> 0x38);
    uStack_e0 = uStack_70;
    uStack_d0 = uStack_60;
    local_d8 = local_68;
    uStack_c0 = uStack_50;
    local_c8 = local_58;
    local_b8 = local_48;
    if (local_b0 == -1) {
      if (local_78[0] != -1) {
        cVar1 = '\x02';
      }
LAB_006d955c:
      return cVar1 != '\x02';
    }
    if (local_78[0] == -1) goto LAB_006d955c;
    iVar2 = FUN_006fdcac(&local_120,local_e8);
    if (iVar2 == 0) {
      cVar1 = '\x02';
      goto LAB_006d955c;
    }
    param_1 = local_160;
    param_2 = lStack_158;
    cVar1 = local_126;
    if (local_150 != -1) {
      uStack_108 = uStack_137;
      local_101 = uStack_130;
      uStack_100 = uStack_12f;
      local_120 = local_14f;
      uStack_118 = uStack_147;
      uStack_110 = local_13f;
    }
  } while( true );
}


// ===== 006d9580  <std::path::[16]::std::path::Path>::components =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::components */

void __rustcall
<std::path::[16]::std::path::Path>::components(undefined8 *param_1,char *param_2,long param_3)

{
  bool bVar1;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == '/';
  }
  *(bool *)((long)param_1 + 0x3a) = bVar1;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined2 *)(param_1 + 7) = 0x201;
  return;
}


// ===== 006d95b4  <std::path::[16]::std::path::Path>::is_symlink =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::is_symlink */

bool __rustcall <std::path::[16]::std::path::Path>::is_symlink(void)

{
  uint local_98 [2];
  ulong local_90 [2];
  uint local_80;
  
  std::sys::fs::symlink_metadata(local_98);
  if ((local_98[0] & 1) != 0) {
    if ((1 < (local_90[0] & 3) - 2) && ((local_90[0] & 3) != 0)) {
      local_90[0] = local_90[0] - 1;
      local_98[0] = CONCAT31(local_98[0]._1_3_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_90);
    }
    return false;
  }
  return (local_80 & 0xf000) == 0xa000;
}


// ===== 006d9630  <std::path::[16]::std::path::Path>::file_prefix =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::file_prefix */

undefined1  [16] __rustcall
<std::path::[16]::std::path::Path>::file_prefix(char *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong extraout_x1;
  long lVar3;
  short *psVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char local_88 [8];
  short *local_80;
  ulong uStack_78;
  char *local_50;
  long lStack_48;
  undefined1 local_40;
  undefined2 local_18;
  undefined1 local_16;
  
  if (param_2 == 0) {
    local_16 = false;
  }
  else {
    local_16 = *param_1 == '/';
  }
  local_18 = 0x201;
  local_40 = 0xff;
  local_50 = param_1;
  lStack_48 = param_2;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_88,&local_50);
  if ((local_88[0] == -1) || (local_88[0] != '\t')) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = extraout_x1;
    return auVar1 << 0x40;
  }
  auVar2._8_8_ = uStack_78;
  auVar2._0_8_ = local_80;
  if (uStack_78 == 2) {
    if (*local_80 == 0x2e2e) {
      lVar3 = 2;
      goto LAB_006d96ac;
    }
    psVar4 = local_80 + 1;
  }
  else {
    if (uStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail(1,0,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977bc8);
    }
    if (uStack_78 == 1) {
      auVar6._8_8_ = 1;
      auVar6._0_8_ = local_80;
      return auVar6;
    }
    psVar4 = (short *)((long)local_80 + uStack_78);
  }
  lVar3 = 1;
  while (*(char *)((long)local_80 + lVar3) != '.') {
    lVar3 = lVar3 + 1;
    if ((short *)((long)local_80 + lVar3) == psVar4) {
      return auVar2;
    }
  }
  if (uStack_78 <= lVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,lVar3,uStack_78,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977bb0);
  }
  if (uStack_78 < lVar3 + 1U) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (lVar3 + 1U,uStack_78,uStack_78,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977b98);
  }
LAB_006d96ac:
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = local_80;
  return auVar5;
}


// ===== 006d9770  <std::path::[16]::std::path::Path>::is_absolute =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::is_absolute */

bool __rustcall <std::path::[16]::std::path::Path>::is_absolute(char *param_1,long param_2)

{
  if (param_2 != 0) {
    return *param_1 == '/';
  }
  return false;
}


// ===== 006d978c  <std::path::[16]::std::path::Path>::to_path_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::to_path_buf */

void __rustcall
<std::path::[16]::std::path::Path>::to_path_buf(size_t *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(param_3,1);
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


// ===== 006d9810  <std::path::[16]::std::path::Path>::_starts_with =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::_starts_with */

bool __rustcall
<std::path::[16]::std::path::Path>::_starts_with
          (char *param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  char *local_1a0;
  long lStack_198;
  undefined1 local_190;
  undefined2 local_168;
  undefined1 local_166;
  char *local_160;
  long lStack_158;
  char local_150;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 local_128;
  undefined1 local_127;
  char local_126;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 local_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (param_2 == 0) {
    cVar1 = false;
  }
  else {
    cVar1 = *param_1 == '/';
  }
  if (param_4 == 0) {
    local_166 = false;
  }
  else {
    local_166 = *param_3 == '/';
  }
  local_150 = -1;
  local_128 = 1;
  local_127 = 2;
  local_190 = 0xff;
  local_168 = 0x201;
  local_1a0 = param_3;
  lStack_198 = param_4;
  do {
    uStack_137 = uStack_108;
    local_13f = uStack_110;
    uStack_130 = local_101;
    uStack_12f = uStack_100;
    uStack_147 = uStack_118;
    local_14f = local_120;
    local_160 = param_1;
    lStack_158 = param_2;
    local_126 = cVar1;
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_b0,&local_160);
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(local_78,&local_1a0);
    local_120 = CONCAT71(uStack_af,local_b0);
    local_f0 = local_80;
    uStack_118 = uStack_a8;
    uStack_108 = (undefined7)uStack_98;
    local_101 = (undefined1)((ulong)uStack_98 >> 0x38);
    uStack_110 = uStack_a0;
    uStack_f8 = uStack_88;
    uStack_100 = (undefined7)local_90;
    uStack_f9 = (undefined1)((ulong)local_90 >> 0x38);
    uStack_e0 = uStack_70;
    uStack_d0 = uStack_60;
    local_d8 = local_68;
    uStack_c0 = uStack_50;
    local_c8 = local_58;
    local_b8 = local_48;
    if (local_b0 == -1) {
      if (local_78[0] != -1) {
        cVar1 = '\x02';
      }
LAB_006d9984:
      return cVar1 != '\x02';
    }
    if (local_78[0] == -1) goto LAB_006d9984;
    iVar2 = FUN_006fdcac(&local_120,local_e8);
    if (iVar2 == 0) {
      cVar1 = '\x02';
      goto LAB_006d9984;
    }
    param_1 = local_160;
    param_2 = lStack_158;
    cVar1 = local_126;
    if (local_150 != -1) {
      uStack_108 = uStack_137;
      local_101 = uStack_130;
      uStack_100 = uStack_12f;
      local_120 = local_14f;
      uStack_118 = uStack_147;
      uStack_110 = local_13f;
    }
  } while( true );
}


// ===== 006d99a8  <std::path::[16]::std::path::Path>::_strip_prefix =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::_strip_prefix */

undefined8 __rustcall
<std::path::[16]::std::path::Path>::_strip_prefix
          (char *param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 local_1f8;
  undefined1 local_1f4;
  char *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined7 uStack_1d8;
  undefined1 local_1d1;
  undefined7 uStack_1d0;
  char *local_1c0;
  long lStack_1b8;
  undefined1 local_1b0;
  undefined2 local_188;
  undefined1 local_186;
  char *local_180;
  long lStack_178;
  char local_170;
  char *local_16f;
  undefined8 uStack_167;
  undefined8 local_15f;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 local_148;
  undefined1 local_147;
  char local_146;
  undefined4 local_145;
  undefined1 local_141;
  char *local_140;
  long lStack_138;
  char local_130;
  undefined7 local_12f;
  undefined1 uStack_128;
  undefined6 uStack_127;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined6 uStack_11f;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 local_108;
  undefined1 uStack_107;
  char cStack_106;
  undefined4 uStack_105;
  undefined1 uStack_101;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (param_2 == 0) {
    cVar1 = false;
  }
  else {
    cVar1 = *param_1 == '/';
  }
  if (param_4 == 0) {
    local_186 = false;
  }
  else {
    local_186 = *param_3 == '/';
  }
  local_1b0 = 0xff;
  local_188 = 0x201;
  uVar5 = 1;
  uVar6 = 2;
  local_1c0 = param_3;
  lStack_1b8 = param_4;
  cVar4 = -1;
  while( true ) {
    uStack_157 = CONCAT61(uStack_127,uStack_128);
    local_15f = CONCAT71(local_12f,local_130);
    uStack_150 = uStack_121;
    uStack_14f = (undefined7)(CONCAT62(uStack_11f,CONCAT11(uStack_120,uStack_121)) >> 8);
    uStack_167 = lStack_138;
    local_16f = local_140;
    local_180 = param_1;
    lStack_178 = param_2;
    local_170 = cVar4;
    local_148 = uVar5;
    local_147 = uVar6;
    local_146 = cVar1;
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_d0,&local_180);
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(local_98,&local_1c0);
    local_140 = (char *)CONCAT71(uStack_cf,local_d0);
    uStack_110 = (undefined1)local_a0;
    uStack_10f = (undefined7)((ulong)local_a0 >> 8);
    lStack_138 = uStack_c8;
    uStack_128 = (undefined1)uStack_b8;
    uStack_127 = (undefined6)((ulong)uStack_b8 >> 8);
    uStack_121 = (undefined1)((ulong)uStack_b8 >> 0x38);
    local_130 = (char)uStack_c0;
    local_12f = (undefined7)((ulong)uStack_c0 >> 8);
    uStack_118 = (undefined1)uStack_a8;
    uStack_117 = (undefined7)((ulong)uStack_a8 >> 8);
    uStack_120 = (undefined1)local_b0;
    uStack_11f = (undefined6)((ulong)local_b0 >> 8);
    uStack_119 = (undefined1)((ulong)local_b0 >> 0x38);
    uStack_100 = uStack_90;
    uStack_f0 = uStack_80;
    local_f8 = local_88;
    uStack_e0 = uStack_70;
    local_e8 = local_78;
    local_d8 = local_68;
    if (local_d0 == -1) break;
    if (local_98[0] == -1) goto LAB_006d9b30;
    iVar2 = FUN_006fdcac(&local_140,&local_108);
    if (iVar2 == 0) {
      return 0;
    }
    uStack_1e8 = uStack_167;
    local_1f0 = local_16f;
    uStack_1e0 = local_15f;
    local_1f8 = local_145;
    uStack_1d8 = uStack_157;
    local_1d1 = uStack_150;
    uStack_1d0 = uStack_14f;
    local_1f4 = local_141;
    param_2 = lStack_178;
    param_1 = local_180;
    cVar1 = local_146;
    uVar5 = local_148;
    uVar6 = local_147;
    cVar4 = local_170;
    if (local_170 != -1) {
      uStack_128 = (undefined1)uStack_157;
      uStack_127 = (undefined6)((uint7)uStack_157 >> 8);
      local_130 = (char)local_15f;
      local_12f = (undefined7)((ulong)local_15f >> 8);
      uStack_121 = uStack_150;
      uStack_120 = (undefined1)uStack_14f;
      uStack_11f = (undefined6)((uint7)uStack_14f >> 8);
      local_140 = local_1f0;
      lStack_138 = uStack_1e8;
    }
  }
  if (local_98[0] == -1) {
LAB_006d9b30:
    if (cVar1 != '\x02') {
      uStack_117 = uStack_1d8;
      uStack_11f = (undefined6)uStack_1e0;
      uStack_119 = (undefined1)((ulong)uStack_1e0 >> 0x30);
      uStack_118 = (undefined1)((ulong)uStack_1e0 >> 0x38);
      uStack_110 = local_1d1;
      uStack_10f = uStack_1d0;
      uStack_127 = (undefined6)uStack_1e8;
      uStack_121 = (undefined1)((ulong)uStack_1e8 >> 0x30);
      uStack_120 = (undefined1)((ulong)uStack_1e8 >> 0x38);
      local_12f = SUB87(local_1f0,0);
      uStack_128 = (undefined1)((ulong)local_1f0 >> 0x38);
      _local_108 = CONCAT17(local_1f4,CONCAT43(local_1f8,CONCAT12(cVar1,CONCAT11(uVar6,uVar5))));
      local_140 = param_1;
      lStack_138 = param_2;
      local_130 = cVar4;
      uVar3 = <std::path::[8]::std::path::Components>::as_path(&local_140);
      return uVar3;
    }
  }
  return 0;
}


// ===== 006d9bc4  <std::path::[16]::std::path::Path>::into_path_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::into_path_buf */

void __rustcall
<std::path::[16]::std::path::Path>::into_path_buf
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}


// ===== 006d9bd0  <std::path::[16]::std::path::Path>::_with_extension =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::_with_extension */

void __rustcall
<std::path::[16]::std::path::Path>::_with_extension
          (ulong *param_1,char *param_2,char *param_3,undefined8 param_4,long param_5)

{
  char *__n;
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char local_c8 [8];
  short *local_c0;
  ulong uStack_b8;
  char *local_90;
  char *pcStack_88;
  char *local_80;
  undefined2 local_58;
  undefined1 local_56;
  
  if (param_3 == (char *)0x0) {
    local_56 = false;
  }
  else {
    local_56 = *param_2 == '/';
  }
  local_58 = 0x201;
  local_80 = (char *)CONCAT71(local_80._1_7_,0xff);
  local_90 = param_2;
  pcStack_88 = param_3;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_c8,&local_90);
  if (((local_c8[0] == -1) || (local_c8[0] != '\t')) || ((uStack_b8 == 2 && (*local_c0 == 0x2e2e))))
  {
LAB_006d9d64:
    pcVar1 = param_3 + param_5;
    __n = param_3;
  }
  else {
    lVar5 = 0;
    do {
      lVar4 = lVar5;
      if (uStack_b8 + lVar4 == 0) goto LAB_006d9d64;
      lVar5 = lVar4 + -1;
    } while (*(char *)((long)local_c0 + lVar4 + (uStack_b8 - 1)) != '.');
    if (uStack_b8 + lVar5 == 0) goto LAB_006d9d64;
    __n = param_3 + lVar4;
    if (param_3 < (char *)((~uStack_b8 + uStack_b8) - lVar5)) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,__n,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977870);
    }
    pcVar1 = param_3 + lVar5 + param_5;
  }
  pcVar1 = pcVar1 + 1;
  if ((long)pcVar1 < 0) {
    uVar6 = 0;
LAB_006d9d74:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,pcVar1);
  }
  if (pcVar1 == (char *)0x0) {
    pcStack_88 = (char *)0x1;
    if (__n == (char *)0x0) goto LAB_006d9d00;
LAB_006d9d94:
                    /* try { // try from 006d9d94 to 006d9dab has its CatchHandler @ 006d9dc8 */
    local_80 = (char *)0x0;
    local_90 = pcVar1;
    FUN_006cecec(&local_90,0,__n,1,1);
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    uVar2 = __rustc::__rust_alloc(pcVar1,1);
    if (uVar2 == 0) goto LAB_006d9d74;
    pcStack_88 = (char *)uVar2;
    if (pcVar1 < __n) goto LAB_006d9d94;
LAB_006d9d00:
    local_80 = (char *)0x0;
    pcVar3 = (char *)0x0;
    local_90 = pcVar1;
    if (__n == (char *)0x0) goto LAB_006d9d20;
  }
  pcVar3 = local_80;
  memcpy((void *)((long)pcStack_88 + (long)local_80),param_2,(size_t)__n);
LAB_006d9d20:
  local_80 = __n + (long)pcVar3;
                    /* try { // try from 006d9d28 to 006d9d37 has its CatchHandler @ 006d9dc8 */
  <std::path::[r]::std::path::PathBuf>::_set_extension(&local_90,param_4,param_5);
  param_1[1] = (ulong)pcStack_88;
  *param_1 = (ulong)local_90;
  param_1[2] = (ulong)local_80;
  return;
}


// ===== 006d9de8  <std::path::[16]::std::path::Path>::_with_file_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::_with_file_name */

void __rustcall
<std::path::[16]::std::path::Path>::_with_file_name
          (size_t *param_1,void *param_2,size_t param_3,undefined8 param_4,undefined8 param_5)

{
  void *__dest;
  size_t local_58;
  void *pvStack_50;
  size_t local_48;
  
  if (param_3 == 0) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(param_3,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
  }
                    /* try { // try from 006d9e4c to 006d9e5b has its CatchHandler @ 006d9e90 */
  local_58 = param_3;
  pvStack_50 = __dest;
  local_48 = param_3;
  <std::path::[r]::std::path::PathBuf>::_set_file_name(&local_58,param_4,param_5);
  param_1[1] = (size_t)pvStack_50;
  *param_1 = local_58;
  param_1[2] = local_48;
  return;
}


// ===== 006d9eb0  <std::path::[16]::std::path::Path>::normalize_lexically =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::normalize_lexically */

void __rustcall
<std::path::[16]::std::path::Path>::normalize_lexically(ulong *param_1,char *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  ulong __n;
  ulong uVar4;
  byte bVar5;
  size_t __n_00;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *pcStack_178;
  size_t local_170;
  char *local_168;
  long local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined5 uStack_12d;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  char *pcStack_f8;
  size_t local_f0;
  char *pcStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  byte local_a8 [8];
  char *local_a0;
  ulong uStack_98;
  
  local_1a8 = 0;
  local_1b8 = 0;
  uStack_1b0 = 1;
  if (param_3 == 0) {
    uStack_12e = false;
  }
  else {
    uStack_12e = *param_2 == '/';
  }
  uStack_158 = 0xff;
  local_130 = 0x201;
  local_1a0 = CONCAT71(local_1a0._1_7_,0xfe);
                    /* try { // try from 006d9f1c to 006d9fdf has its CatchHandler @ 006da28c */
  local_168 = param_2;
  local_160 = param_3;
  <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_120,&local_168);
  __n_00 = local_f0;
  pcVar3 = pcStack_f8;
  local_170 = local_f0;
  uStack_198 = uStack_118;
  local_1a0 = local_120;
  uVar7 = local_1a0;
  uStack_188 = uStack_108;
  uStack_190 = uStack_110;
  local_1a0._0_1_ = (byte)local_120;
  pcStack_178 = pcStack_f8;
  local_180 = local_100;
  if ((byte)local_1a0 == 0xff) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 1;
    return;
  }
  iVar1 = 0;
  if (4 < (byte)local_1a0) {
    iVar1 = (byte)local_1a0 - 5;
  }
  local_1a0 = uVar7;
  if (iVar1 < 3) {
    if (1 < iVar1 - 1U) {
      if (local_f0 == 0) {
        uVar8 = 0;
        local_1a0 = uVar7;
      }
      else {
        if (*pcStack_f8 == '/') {
          local_1a8 = 0;
        }
        FUN_006cecec(&local_1b8,0,local_f0,1,1);
        uVar8 = local_1a8;
        memcpy((void *)(uStack_1b0 + local_1a8),pcVar3,__n_00);
      }
      uVar8 = uVar8 + __n_00;
      local_1a0 = CONCAT71(local_1a0._1_7_,0xfe);
                    /* try { // try from 006da014 to 006da01f has its CatchHandler @ 006da28c */
      local_1a8 = uVar8;
      <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_120,&local_168)
      ;
      uStack_198 = uStack_118;
      uStack_188 = uStack_108;
      uStack_190 = uStack_110;
      local_170 = local_f0;
      local_1a0 = local_120;
      uVar7 = local_1a0;
      pcStack_178 = pcStack_f8;
      local_180 = local_100;
      local_1a0._0_1_ = (byte)local_120;
      bVar6 = (byte)local_1a0 != '\x06';
      local_1a0 = uVar7;
      if (bVar6) goto LAB_006da044;
    }
    FUN_006c2498(&local_1b8,&local_1a0);
    local_1a0 = CONCAT71(local_1a0._1_7_,0xfe);
    uVar8 = local_1a8;
  }
  else {
    if (iVar1 == 3) {
      *param_1 = 0xffffffffffffffff;
      return;
    }
    uVar8 = 0;
  }
LAB_006da044:
  uStack_d8 = CONCAT71(uStack_157,uStack_158);
  local_b0 = CONCAT53(uStack_12d,CONCAT12(uStack_12e,local_130));
  puVar9 = (undefined8 *)((ulong)&local_120 | 1);
  puVar10 = (undefined8 *)((ulong)local_a8 | 1);
  local_e0 = local_160;
  uStack_c8 = uStack_148;
  uStack_d0 = uStack_150;
  uStack_b8 = uStack_138;
  local_c0 = local_140;
  uStack_118 = uStack_198;
  local_120 = local_1a0;
  uStack_108 = uStack_188;
  uStack_110 = uStack_190;
  pcStack_f8 = pcStack_178;
  local_100 = local_180;
  pcStack_e8 = local_168;
  local_f0 = local_170;
LAB_006da084:
  do {
    while( true ) {
      bVar5 = (byte)local_120;
      local_120 = CONCAT71(local_120._1_7_,0xfe);
      if (bVar5 == 0xfe) {
                    /* try { // try from 006da094 to 006da117 has its CatchHandler @ 006da288 */
        <std::path::Components_as_core::iter::traits::iterator::Iterator>::next
                  (local_a8,&pcStack_e8);
        pcVar3 = local_a0;
        __n = uStack_98;
      }
      else {
        uVar12 = puVar9[1];
        uVar11 = *puVar9;
        uVar14 = puVar9[3];
        uVar13 = puVar9[2];
        uVar15 = puVar9[4];
        uVar7 = *(undefined8 *)((long)puVar9 + 0x2f);
        puVar10[5] = puVar9[5];
        puVar10[4] = uVar15;
        puVar10[1] = uVar12;
        *puVar10 = uVar11;
        puVar10[3] = uVar14;
        puVar10[2] = uVar13;
        *(undefined8 *)((long)puVar10 + 0x2f) = uVar7;
        pcVar3 = local_a0;
        __n = uStack_98;
        local_a8[0] = bVar5;
      }
      if (local_a8[0] == 0xff) {
        param_1[1] = uStack_1b0;
        *param_1 = local_1b8;
        param_1[2] = local_1a8;
        return;
      }
      uVar2 = 0;
      if (5 < local_a8[0]) {
        uVar2 = (byte)(local_a8[0] - 6) + 1;
      }
      local_a0 = pcVar3;
      uStack_98 = __n;
      if (2 < uVar2) break;
      if (uVar2 == 0) {
LAB_006da204:
        *param_1 = 0xffffffffffffffff;
        if (local_1b8 == 0) {
          return;
        }
        __rustc::__rust_dealloc(uStack_1b0,local_1b8,1);
        return;
      }
      if (uVar2 != 2) {
                    /* try { // try from 006da26c to 006da283 has its CatchHandler @ 006da28c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_0045ad81,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977888);
      }
    }
    if (uVar2 != 3) {
      if (local_1a8 == 0) {
        bVar6 = false;
        if (__n != 0) goto LAB_006da140;
LAB_006da174:
        if (bVar6) {
          if (local_1b8 == local_1a8) {
            FUN_006cecec(&local_1b8,local_1a8,1,1,1);
          }
          *(undefined1 *)(uStack_1b0 + local_1a8) = 0x2f;
          local_1a8 = local_1a8 + 1;
        }
        if (local_1b8 - local_1a8 < __n) goto LAB_006da1c0;
        if (__n != 0) goto LAB_006da1a0;
      }
      else {
        bVar6 = *(char *)(uStack_1b0 + local_1a8 + -1) != '/';
        if (__n == 0) goto LAB_006da174;
LAB_006da140:
        if (*pcVar3 != '/') goto LAB_006da174;
        local_1a8 = 0;
        if (__n <= local_1b8) goto LAB_006da1a0;
LAB_006da1c0:
                    /* try { // try from 006da1c0 to 006da1f7 has its CatchHandler @ 006da288 */
        FUN_006cecec(&local_1b8,local_1a8,__n,1,1);
LAB_006da1a0:
        uVar4 = local_1a8;
        memcpy((void *)(uStack_1b0 + local_1a8),pcVar3,__n);
        local_1a8 = uVar4;
      }
      local_1a8 = local_1a8 + __n;
      goto LAB_006da084;
    }
    if (local_1a8 == uVar8) goto LAB_006da204;
    <std::path::[r]::std::path::PathBuf>::pop(&local_1b8);
  } while( true );
}


// ===== 006da2b0  <std::path::[16]::std::path::Path>::_join =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::_join */

void __rustcall
<std::path::[16]::std::path::Path>::_join
          (size_t *param_1,void *param_2,size_t param_3,char *param_4,ulong param_5)

{
  bool bVar1;
  void *__dest;
  size_t sVar2;
  size_t sVar3;
  size_t local_58;
  void *pvStack_50;
  size_t local_48;
  
  if (param_3 == 0) {
    bVar1 = false;
    local_48 = 0;
    pvStack_50 = (void *)0x1;
    if (param_5 != 0) goto LAB_006da338;
LAB_006da358:
    sVar2 = param_3;
    local_58 = local_48;
    if (bVar1) {
                    /* try { // try from 006da35c to 006da373 has its CatchHandler @ 006da408 */
      FUN_006cecec(&local_58,param_3,1,1,1);
      param_3 = local_48 + 1;
      *(undefined1 *)((long)pvStack_50 + local_48) = 0x2f;
      sVar2 = local_58;
      local_48 = param_3;
    }
    sVar3 = param_3;
    if (sVar2 - param_3 < param_5) {
LAB_006da3dc:
                    /* try { // try from 006da3dc to 006da3f3 has its CatchHandler @ 006da408 */
      FUN_006cecec(&local_58,sVar3,param_5,1,1);
      sVar3 = local_48;
    }
    else if (param_5 == 0) goto LAB_006da3b4;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(param_3,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
    bVar1 = *(char *)((long)__dest + (param_3 - 1)) != '/';
    pvStack_50 = __dest;
    local_48 = param_3;
    if (param_5 == 0) goto LAB_006da358;
LAB_006da338:
    local_58 = local_48;
    if (*param_4 != '/') goto LAB_006da358;
    sVar3 = 0;
    local_48 = 0;
    if (param_3 < param_5) goto LAB_006da3dc;
  }
  memcpy((void *)((long)pvStack_50 + sVar3),param_4,param_5);
LAB_006da3b4:
  param_1[1] = (size_t)pvStack_50;
  *param_1 = local_58;
  param_1[2] = sVar3 + param_5;
  return;
}


// ===== 006da428  <std::path::[16]::std::path::Path>::is_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::is_dir */

bool __rustcall <std::path::[16]::std::path::Path>::is_dir(void)

{
  uint local_98 [2];
  ulong local_90 [2];
  uint local_80;
  
  std::sys::fs::metadata(local_98);
  if ((local_98[0] & 1) != 0) {
    if ((1 < (local_90[0] & 3) - 2) && ((local_90[0] & 3) != 0)) {
      local_90[0] = local_90[0] - 1;
      local_98[0] = CONCAT31(local_98[0]._1_3_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_90);
    }
    return false;
  }
  return (local_80 & 0xf000) == 0x4000;
}


// ===== 006da4a4  <std::path::[16]::std::path::Path>::parent =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::parent */

undefined8 __rustcall <std::path::[16]::std::path::Path>::parent(char *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *local_88;
  long lStack_80;
  undefined1 local_78;
  undefined2 local_50;
  undefined1 local_4e;
  byte local_48 [56];
  
  if (param_2 == 0) {
    local_4e = false;
  }
  else {
    local_4e = *param_1 == '/';
  }
  local_50 = 0x201;
  local_78 = 0xff;
  local_88 = param_1;
  lStack_80 = param_2;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_48,&local_88);
  if (local_48[0] != 0xff) {
    cVar1 = '\0';
    if (4 < local_48[0]) {
      cVar1 = local_48[0] - 5;
    }
    if ((byte)(cVar1 - 2U) < 3) {
      uVar2 = <std::path::[8]::std::path::Components>::as_path(&local_88);
      return uVar2;
    }
  }
  return 0;
}


// ===== 006da534  <std::path::[16]::std::path::Path>::is_file =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::is_file */

bool __rustcall <std::path::[16]::std::path::Path>::is_file(void)

{
  uint local_98 [2];
  ulong local_90 [2];
  uint local_80;
  
  std::sys::fs::metadata(local_98);
  if ((local_98[0] & 1) != 0) {
    if ((1 < (local_90[0] & 3) - 2) && ((local_90[0] & 3) != 0)) {
      local_90[0] = local_90[0] - 1;
      local_98[0] = CONCAT31(local_98[0]._1_3_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_90);
    }
    return false;
  }
  return (local_80 & 0xf000) == 0x8000;
}


// ===== 006da5b0  <std::path::[16]::std::path::Path>::extension =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::extension */

long __rustcall <std::path::[16]::std::path::Path>::extension(char *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char local_88 [8];
  short *local_80;
  long lStack_78;
  char *local_50;
  long lStack_48;
  undefined1 local_40;
  undefined2 local_18;
  undefined1 local_16;
  
  if (param_2 == 0) {
    local_16 = false;
  }
  else {
    local_16 = *param_1 == '/';
  }
  local_18 = 0x201;
  local_40 = 0xff;
  local_50 = param_1;
  lStack_48 = param_2;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_88,&local_50);
  if ((local_88[0] != -1) && (local_88[0] == '\t')) {
    if ((lStack_78 != 2) || (*local_80 != 0x2e2e)) {
      lVar3 = (long)local_80 + lStack_78 + 1;
      while (lStack_78 != 0) {
        pcVar1 = (char *)(lVar3 + -2);
        lStack_78 = lStack_78 + -1;
        lVar3 = lVar3 + -1;
        if (*pcVar1 == '.') {
          lVar2 = 0;
          if (lStack_78 != 0) {
            lVar2 = lVar3;
          }
          return lVar2;
        }
      }
    }
  }
  return 0;
}


// ===== 006da678  <std::path::[16]::std::path::Path>::file_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::file_name */

undefined8 __rustcall <std::path::[16]::std::path::Path>::file_name(char *param_1,long param_2)

{
  char local_88 [8];
  undefined8 local_80;
  char *local_50;
  long lStack_48;
  undefined1 local_40;
  undefined2 local_18;
  undefined1 local_16;
  
  if (param_2 == 0) {
    local_16 = false;
  }
  else {
    local_16 = *param_1 == '/';
  }
  local_18 = 0x201;
  local_40 = 0xff;
  local_50 = param_1;
  lStack_48 = param_2;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_88,&local_50);
  if (local_88[0] == -1) {
    return 0;
  }
  if (local_88[0] != '\t') {
    local_80 = 0;
  }
  return local_80;
}


// ===== 006da6f4  <std::path::[16]::std::path::Path>::file_stem =====

/* WARNING: Removing unreachable block (ram,0x006da7ec) */
/* WARNING: Removing unreachable block (ram,0x006da7f0) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::file_stem */

undefined1  [16] __rustcall
<std::path::[16]::std::path::Path>::file_stem(char *param_1,long param_2)

{
  short *psVar1;
  undefined1 auVar2 [16];
  ulong extraout_x1;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char local_88 [8];
  short *local_80;
  ulong uStack_78;
  char *local_50;
  long lStack_48;
  undefined1 local_40;
  undefined2 local_18;
  undefined1 local_16;
  
  if (param_2 == 0) {
    local_16 = false;
  }
  else {
    local_16 = *param_1 == '/';
  }
  local_18 = 0x201;
  local_40 = 0xff;
  local_50 = param_1;
  lStack_48 = param_2;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_88,&local_50);
  if ((local_88[0] == -1) || (local_88[0] != '\t')) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = extraout_x1;
    return auVar2 << 0x40;
  }
  uVar4 = uStack_78;
  if ((uStack_78 == 2) && (*local_80 == 0x2e2e)) {
    psVar1 = (short *)0x0;
    if (local_80 != (short *)0x0) {
      psVar1 = local_80;
    }
    auVar5._8_8_ = 2;
    auVar5._0_8_ = psVar1;
    return auVar5;
  }
  do {
    uVar3 = uVar4;
    if (uVar3 == 0) {
      auVar7._8_8_ = uStack_78;
      auVar7._0_8_ = local_80;
      return auVar7;
    }
    uVar4 = uVar3 - 1;
  } while (*(char *)((long)local_80 + (uVar3 - 1)) != '.');
  if (uVar4 == 0) {
    psVar1 = (short *)0x0;
    if (local_80 != (short *)0x0) {
      psVar1 = local_80;
    }
    auVar8._8_8_ = uStack_78;
    auVar8._0_8_ = psVar1;
    return auVar8;
  }
  psVar1 = (short *)((long)local_80 + uVar3);
  uVar3 = ~uVar4 + uStack_78;
  if (local_80 != (short *)0x0) {
    psVar1 = local_80;
    uVar3 = uVar4;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = psVar1;
  return auVar6;
}


// ===== 006da818  FUN_006da818 =====

void FUN_006da818(ulong *param_1,long *param_2,long param_3,long param_4)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  char cVar11;
  long lVar12;
  byte *pbVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  long *plVar24;
  byte *pbVar25;
  undefined1 auVar26 [16];
  uint *local_190;
  uint *local_188;
  uint *local_180;
  uint *local_178;
  uint *local_170;
  uint local_164;
  uint *local_160;
  uint *local_158;
  undefined8 local_150;
  undefined8 local_148;
  uint *local_140;
  uint *local_130;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  byte *local_100;
  uint *local_f8;
  undefined8 local_e0;
  uint *puStack_d8;
  int local_d0;
  undefined4 uStack_cc;
  byte *local_c8;
  uint *local_c0;
  undefined8 local_b8;
  byte *pbStack_b0;
  uint *local_a8;
  undefined8 local_a0;
  long local_98;
  long lStack_90;
  uint local_88;
  undefined1 local_84;
  long local_80;
  uint *puStack_78;
  uint *puStack_70;
  
  lVar21 = param_2[10];
  if (param_3 < lVar21) {
    lVar22 = param_2[8];
    pbVar4 = (byte *)param_2[6];
    lVar12 = 0xc;
    if (*(char *)(lVar22 + 0x49) != '\b') {
      lVar12 = 4;
    }
    pbVar25 = pbVar4 + ((lVar12 + *(long *)(lVar22 + 0x38)) -
                       (*(long *)(lVar22 + 0x30) + *(long *)(lVar22 + 0x28)));
    do {
      lVar12 = param_2[7];
      if (lVar12 == 0) {
        cVar11 = '\x13';
LAB_006db5e4:
        *(char *)param_1 = cVar11;
        *(char *)((long)param_1 + 1) = '\0';
        ((char *)((long)param_1 + 6))[0] = '\0';
        ((char *)((long)param_1 + 6))[1] = '\0';
        pcVar1 = (char *)((long)param_1 + 2);
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        param_1[1] = (ulong)pbVar4;
        return;
      }
      pbVar9 = (byte *)0x0;
      uVar19 = 0;
      lVar16 = 1 - lVar12;
      pbVar10 = pbVar4;
      while( true ) {
        pbVar13 = pbVar10 + 1;
        bVar2 = *pbVar10;
        if (((int)uVar19 == 0x3f) && (1 < bVar2)) {
          pbVar4 = (byte *)-lVar16;
          cVar11 = '\x06';
          param_2[6] = (long)pbVar13;
          param_2[7] = (long)pbVar4;
          goto LAB_006db5e4;
        }
        pbVar9 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar19 & 0x3f) | (ulong)pbVar9);
        if (-1 < (char)bVar2) break;
        lVar16 = lVar16 + 1;
        uVar19 = (ulong)((int)uVar19 + 7);
        pbVar10 = pbVar13;
        if (lVar16 == 1) {
          cVar11 = '\x13';
          param_2[6] = (long)(pbVar4 + lVar12);
          param_2[7] = 0;
          pbVar4 = pbVar4 + lVar12;
          goto LAB_006db5e4;
        }
      }
      param_2[6] = (long)pbVar13;
      param_2[7] = -lVar16;
      if (pbVar9 == (byte *)0x0) {
        param_2[10] = lVar21 + -1;
      }
      else {
        lVar12 = param_2[9];
        if (pbVar9 + -1 < *(byte **)(lVar12 + 0x10)) {
          lVar5 = *(long *)(lVar12 + 8) + (long)(pbVar9 + -1) * 0x70;
        }
        else {
          lVar16 = *(long *)(lVar12 + 0x18);
          if (lVar16 == 0) {
LAB_006db668:
            cVar11 = '\x12';
            pbVar4 = pbVar9;
            goto LAB_006db5e4;
          }
          lVar12 = *(long *)(lVar12 + 0x20);
          while( true ) {
            lVar5 = lVar16 + -0x70;
            lVar20 = (ulong)*(ushort *)(lVar16 + 0x532) << 3;
            uVar19 = 0xffffffffffffffff;
            puVar6 = (undefined8 *)(lVar16 + 0x4d8);
            do {
              uVar7 = (ulong)*(ushort *)(lVar16 + 0x532);
              if (lVar20 == 0) goto LAB_006dab2c;
              lVar5 = lVar5 + 0x70;
              uVar7 = uVar19 + 1;
              lVar20 = lVar20 + -8;
              cVar11 = (byte *)*puVar6 < pbVar9;
              if (pbVar9 < (byte *)*puVar6) {
                cVar11 = -1;
              }
              uVar19 = uVar7;
              puVar6 = puVar6 + 1;
            } while (cVar11 == '\x01');
            if (cVar11 == '\0') break;
LAB_006dab2c:
            if (lVar12 == 0) goto LAB_006db668;
            lVar12 = lVar12 + -1;
            lVar16 = *(long *)(lVar16 + uVar7 * 8 + 0x538);
          }
        }
        if (*(char *)(lVar5 + 0x6a) == '\x01') {
          param_2[10] = lVar21 + 1;
        }
        if (*(short *)(lVar5 + 0x68) == 0x1d) {
          lVar12 = param_2[0xb];
          lVar22 = param_2[0xc];
          auVar26 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(lVar5);
          plVar24 = auVar26._0_8_;
          if (auVar26._8_8_ == 0) {
            pbVar4 = (byte *)0x0;
            local_150 = 0;
            local_148 = 0;
            local_164 = 0;
            bVar3 = false;
            local_118._0_4_ = 0;
            local_110._0_4_ = 0;
          }
          else {
            lVar16 = auVar26._8_8_ << 4;
            pbVar4 = (byte *)0x0;
            local_118 = (byte *)0x0;
            local_110 = (byte *)0x0;
            local_150 = 0;
            local_148 = 0;
            bVar3 = false;
            local_164 = 0;
            do {
              puStack_78 = (uint *)plVar24[1];
              local_80 = *plVar24;
              FUN_006c753c(&local_b8,param_2 + 6,*(undefined4 *)(param_2[8] + 0x48),&local_80);
              if (local_b8 == 0xffffffffffffffff) {
                puStack_d8 = local_a8;
                local_e0 = pbStack_b0;
                pbVar10 = local_e0;
                puVar23 = puStack_d8;
                goto LAB_006db47c;
              }
              if ((ushort)local_a0 < 0x55) {
                if ((ushort)local_a0 < 0x12) {
                  if ((ushort)local_a0 == 3) {
                    if (pbVar4 == (byte *)0x0) {
                      FUN_006e8254(&local_80,&local_b8);
                      FUN_006d8310(&local_d0,lVar12,*(undefined1 *)(lVar22 + 0x49),
                                   *(undefined8 *)(lVar22 + 0x1a0),&local_80);
                      pbVar4 = (byte *)0x0;
                      local_f8 = local_188;
                      if (local_d0 == 0) {
                        pbVar4 = local_c8;
                        local_188 = local_c0;
                        local_f8 = local_c0;
                      }
                    }
                  }
                  else if ((ushort)local_a0 == 0x11) {
                    FUN_006e8254(&local_80,&local_b8);
                    if (local_80 == 0) {
                      local_170 = puStack_78;
                      local_150 = CONCAT44(1,(uint)local_150);
                    }
                    else if (local_80 == 0xc) {
                      puVar23 = *(uint **)(lVar12 + 0x10);
                      uVar7 = *(ulong *)(lVar22 + 0x1a8);
                      uVar19 = *(ulong *)(lVar12 + 0x18) - uVar7;
                      if (*(ulong *)(lVar12 + 0x18) < uVar7) {
LAB_006dae70:
                        local_100 = (byte *)((ulong)local_100 & 0xffffffffffffff00 | 0x13);
                        local_130 = puVar23;
                      }
                      else {
                        bVar2 = *(byte *)(lVar22 + 0x48);
                        puVar23 = (uint *)((long)puVar23 + uVar7);
                        uVar17 = (long)puStack_78 * (ulong)bVar2;
                        uVar7 = uVar19 - uVar17;
                        if (uVar19 < uVar17) goto LAB_006dae70;
                        if ((byte)(bVar2 - 1) < (byte)(bVar2 ^ bVar2 - 1)) {
                          uVar18 = (bVar2 & 0xaaaaaaaa) >> 1 | (bVar2 & 0x55555555) << 1;
                          uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
                          puVar23 = (uint *)((long)puVar23 + uVar17);
                          uVar18 = (uint)LZCOUNT((uVar18 >> 4 | (uVar18 & 0xf0f0f0f) << 4) << 0x18);
                          if (uVar18 < 2) {
                            if (uVar18 == 0) {
                              if (uVar19 != uVar17) {
                                local_130 = (uint *)(ulong)(byte)*puVar23;
LAB_006db2f4:
                                local_100 = (byte *)((ulong)local_100 | 0xff);
                                goto LAB_006dae80;
                              }
                            }
                            else {
                              if (uVar18 != 1) goto LAB_006db264;
                              if (1 < uVar7) {
                                local_130 = (uint *)(ulong)(ushort)*puVar23;
                                goto LAB_006db2f4;
                              }
                            }
                          }
                          else if (uVar18 == 2) {
                            if (3 < uVar7) {
                              local_130 = (uint *)(ulong)*puVar23;
                              goto LAB_006db2f4;
                            }
                          }
                          else {
                            if (uVar18 != 3) goto LAB_006db264;
                            if (7 < uVar7) {
                              local_130 = (uint *)(((ulong)*puVar23 << 8 |
                                                   (ulong)(uint3)puVar23[1] << 0x28) >> 8 |
                                                  (ulong)*(byte *)((long)puVar23 + 7) << 0x38);
                              goto LAB_006db2f4;
                            }
                          }
                          local_100 = (byte *)0x13;
                          local_130 = puVar23;
                          pbVar10 = local_100;
                          goto LAB_006db47c;
                        }
LAB_006db264:
                        local_100 = (byte *)((ulong)local_100 & 0xffffffffffff0000 |
                                             (ulong)bVar2 << 8 | 0x19);
                      }
LAB_006dae80:
                      pbVar10 = local_100;
                      puVar23 = local_130;
                      if ((((uint)local_100 ^ 0xffffffff) & 0xff) != 0) goto LAB_006db47c;
                      local_150 = CONCAT44(1,(uint)local_150);
                      local_170 = local_130;
                    }
                  }
                }
                else if ((ushort)local_a0 == 0x12) {
                  FUN_006e8254(&local_80,&local_b8);
                  if (local_80 == 0) {
                    local_178 = puStack_78;
                    local_150 = CONCAT44(local_150._4_4_,1);
                  }
                  else if (local_80 == 7) {
                    local_190 = puStack_78;
                    local_164 = 1;
                  }
                  else if (local_80 == 0xc) {
                    puVar23 = *(uint **)(lVar12 + 0x10);
                    uVar7 = *(ulong *)(lVar22 + 0x1a8);
                    uVar19 = *(ulong *)(lVar12 + 0x18) - uVar7;
                    if (*(ulong *)(lVar12 + 0x18) < uVar7) {
LAB_006daf68:
                      local_108 = (byte *)((ulong)local_108 & 0xffffffffffffff00 | 0x13);
                      local_140 = puVar23;
                    }
                    else {
                      bVar2 = *(byte *)(lVar22 + 0x48);
                      puVar23 = (uint *)((long)puVar23 + uVar7);
                      uVar17 = (long)puStack_78 * (ulong)bVar2;
                      uVar7 = uVar19 - uVar17;
                      if (uVar19 < uVar17) goto LAB_006daf68;
                      if ((byte)(bVar2 - 1) < (byte)(bVar2 ^ bVar2 - 1)) {
                        uVar18 = (bVar2 & 0xaaaaaaaa) >> 1 | (bVar2 & 0x55555555) << 1;
                        uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
                        puVar23 = (uint *)((long)puVar23 + uVar17);
                        uVar18 = (uint)LZCOUNT((uVar18 >> 4 | (uVar18 & 0xf0f0f0f) << 4) << 0x18);
                        if (uVar18 < 2) {
                          if (uVar18 == 0) {
                            if (uVar19 != uVar17) {
                              local_140 = (uint *)(ulong)(byte)*puVar23;
LAB_006db30c:
                              local_108 = (byte *)((ulong)local_108 | 0xff);
                              goto LAB_006daf78;
                            }
                          }
                          else {
                            if (uVar18 != 1) goto LAB_006db2bc;
                            if (1 < uVar7) {
                              local_140 = (uint *)(ulong)(ushort)*puVar23;
                              goto LAB_006db30c;
                            }
                          }
                        }
                        else if (uVar18 == 2) {
                          if (3 < uVar7) {
                            local_140 = (uint *)(ulong)*puVar23;
                            local_108 = (byte *)((ulong)local_108 | 0xff);
                            goto LAB_006daf78;
                          }
                        }
                        else {
                          if (uVar18 != 3) goto LAB_006db2bc;
                          if (7 < uVar7) {
                            local_140 = (uint *)(((ulong)*puVar23 << 8 |
                                                 (ulong)(uint3)puVar23[1] << 0x28) >> 8 |
                                                (ulong)*(byte *)((long)puVar23 + 7) << 0x38);
                            goto LAB_006db30c;
                          }
                        }
                        local_108 = (byte *)0x13;
                        local_140 = puVar23;
                        pbVar10 = local_108;
                        goto LAB_006db47c;
                      }
LAB_006db2bc:
                      local_108 = (byte *)((ulong)local_108 & 0xffffffffffff0000 | (ulong)bVar2 << 8
                                          | 0x19);
                    }
LAB_006daf78:
                    pbVar10 = local_108;
                    puVar23 = local_140;
                    if ((((uint)local_108 ^ 0xffffffff) & 0xff) != 0) goto LAB_006db47c;
                    local_150 = CONCAT44(local_150._4_4_,1);
                    local_178 = local_140;
                  }
                }
                else if ((((ushort)local_a0 == 0x31) || ((ushort)local_a0 == 0x47)) &&
                        (pbVar4 == (byte *)0x0)) {
                  FUN_006e8254(&local_80,&local_b8);
                  FUN_006c66f0(&local_d0,local_80,puStack_78,(char)param_2[0xe],lVar12,lVar22,
                               param_2[0xd],0x10);
                  pbVar10 = local_c8;
                  puVar23 = local_c0;
                  if (CONCAT44(uStack_cc,local_d0) == 1) goto LAB_006db47c;
                  local_f8 = local_c0;
                  pbVar4 = local_c8;
                }
              }
              else if ((ushort)local_a0 < 0x59) {
                if ((ushort)local_a0 == 0x55) {
                  FUN_006e8254(&local_80,&local_b8);
                  if (local_80 != 0x18) {
                    if (local_80 == 0x16) {
                      lVar5 = *(long *)(lVar22 + 0x1b8);
                      if ((*(byte *)(lVar12 + 0x110) & *(ushort *)(lVar22 + 0x4a) < 5) == 0) {
                        lVar5 = 0;
                      }
                      local_160 = (uint *)(lVar5 + (long)puStack_78);
LAB_006db138:
                      bVar3 = true;
                      local_158 = local_160;
                    }
                    else {
                      bVar3 = false;
                      local_160 = local_158;
                    }
                    goto LAB_006dacb0;
                  }
                  local_158 = *(uint **)(lVar12 + 0xe0);
                  uVar7 = *(ulong *)(lVar22 + 0x1b8);
                  uVar19 = *(ulong *)(lVar12 + 0xe8) - uVar7;
                  if (uVar7 <= *(ulong *)(lVar12 + 0xe8)) {
                    local_158 = (uint *)((long)local_158 + uVar7);
                    uVar15 = (long)puStack_78 * ((ulong)(*(uint *)(lVar22 + 0x48) >> 8) & 0xff);
                    uVar17 = uVar19 - uVar15;
                    if (uVar15 <= uVar19) {
                      local_158 = (uint *)((long)local_158 + uVar15);
                      if ((*(uint *)(lVar22 + 0x48) & 0xff00) == 0x800) {
                        if (7 < uVar17) {
                          uVar19 = ((ulong)*local_158 << 8 | (ulong)(uint3)local_158[1] << 0x28) >>
                                   8 | (ulong)*(byte *)((long)local_158 + 7) << 0x38;
LAB_006db134:
                          local_160 = (uint *)(uVar19 + uVar7);
                          goto LAB_006db138;
                        }
                      }
                      else if (3 < uVar17) {
                        uVar19 = (ulong)*local_158;
                        goto LAB_006db134;
                      }
                    }
                  }
                  local_e0 = (byte *)0x13;
                  pbVar10 = local_e0;
                  puVar23 = local_158;
                  goto LAB_006db47c;
                }
                if ((ushort)local_a0 == 0x57) {
                  if ((long)local_b8 < 5) {
                    if (local_b8 == 2) {
                      local_110 = (byte *)((ulong)pbStack_b0 & 0xff);
                    }
                    else if (local_b8 == 3) {
                      local_110 = (byte *)((ulong)pbStack_b0 & 0xffff);
                    }
                    else if (local_b8 == 4) {
                      local_110 = (byte *)((ulong)pbStack_b0 & 0xffffffff);
                    }
                    else {
LAB_006db034:
                      local_110 = (byte *)0x0;
                    }
                  }
                  else {
                    local_110 = pbStack_b0;
                    if (local_b8 != 5) {
                      if (local_b8 == 6) {
                        if ((long)pbStack_b0 < 0) {
                          local_110 = (byte *)0x0;
                        }
                      }
                      else if (local_b8 != 7) goto LAB_006db034;
                    }
                  }
                }
                else if ((((ushort)local_a0 == 0x58) &&
                         (FUN_006e8254(&local_80,&local_b8), local_80 == 0x2c)) &&
                        ((puStack_78 != (uint *)0x0 || (4 < *(ushort *)(lVar22 + 0x4a))))) {
                  local_148 = 1;
                  local_180 = puStack_78;
                }
              }
              else if ((ushort)local_a0 == 0x59) {
                if ((long)local_b8 < 5) {
                  if (local_b8 == 2) {
                    local_118 = (byte *)((ulong)pbStack_b0 & 0xff);
                  }
                  else if (local_b8 == 3) {
                    local_118 = (byte *)((ulong)pbStack_b0 & 0xffff);
                  }
                  else if (local_b8 == 4) {
                    local_118 = (byte *)((ulong)pbStack_b0 & 0xffffffff);
                  }
                  else {
LAB_006db174:
                    local_118 = (byte *)0x0;
                  }
                }
                else {
                  if (local_b8 != 5) {
                    if (local_b8 == 6) {
                      if ((long)pbStack_b0 < 0) {
                        local_118 = (byte *)0x0;
                        goto LAB_006dacb0;
                      }
                    }
                    else if (local_b8 != 7) goto LAB_006db174;
                  }
                  local_118 = pbStack_b0;
                }
              }
              else if (((ushort)local_a0 == 0x6e) || ((ushort)local_a0 == 0x2007)) {
                FUN_006e8254(&local_80,&local_b8);
                FUN_006d8310(&local_d0,lVar12,*(undefined1 *)(lVar22 + 0x49),
                             *(undefined8 *)(lVar22 + 0x1a0),&local_80);
                if (local_d0 == 0) {
                  pbVar4 = local_c8;
                  local_f8 = local_c0;
                }
              }
LAB_006dacb0:
              lVar16 = lVar16 + -0x10;
              plVar24 = plVar24 + 2;
            } while (lVar16 != 0);
          }
          lVar16 = param_2[2];
          if (lVar16 == *param_2) {
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry>>
            ::grow_one(param_2);
          }
          puVar6 = (undefined8 *)(param_2[1] + lVar16 * 0x30);
          *puVar6 = local_148;
          puVar6[1] = local_180;
          puVar6[2] = pbVar25;
          puVar6[3] = pbVar4;
          puVar6[4] = local_f8;
          *(undefined4 *)(puVar6 + 5) = local_118._0_4_;
          *(undefined4 *)((long)puVar6 + 0x2c) = local_110._0_4_;
          param_2[2] = lVar16 + 1;
          if (bVar3) {
            uVar18 = *(uint *)(lVar22 + 0x48) >> 0x10;
            lVar5 = 0x18;
            if (uVar18 < 5) {
              lVar5 = 8;
            }
            puVar14 = *(uint **)(lVar12 + 0xd0 + lVar5);
            lVar5 = 0x10;
            if (uVar18 < 5) {
              lVar5 = 0;
            }
            puVar23 = *(uint **)(lVar12 + 0xd0 + lVar5);
            if (local_160 <= puVar14) {
              local_b8 = *(ulong *)(lVar12 + 0x10);
              pbStack_b0 = *(byte **)(lVar12 + 0x18);
              local_a8 = *(uint **)(lVar22 + 0x198);
              local_84 = 4 < uVar18;
              local_a0 = *(undefined8 *)(lVar22 + 0x1a8);
              local_98 = (long)puVar23 + (long)local_160;
              lStack_90 = (long)puVar14 - (long)local_160;
              local_88 = *(uint *)(lVar22 + 0x48);
              while (FUN_006e8d70(&local_80,&local_b8), puVar14 = puStack_70, puVar23 = puStack_78,
                    local_80 != 0) {
                if (local_80 == 2) {
                  if ((((uint)puStack_78 ^ 0xffffffff) & 0xff) != 0) {
                    uVar8 = (undefined1)((ulong)puStack_78 >> 8);
                    uVar19 = (ulong)puStack_78 >> 0x10;
                    puVar23 = puStack_70;
                    puVar14 = puStack_78;
                    goto LAB_006db450;
                  }
                  break;
                }
                if (puStack_78 < puStack_70) {
                  lVar12 = param_2[5];
                  if (lVar12 == param_2[3]) {
                    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>
                    ::grow_one(param_2 + 3);
                  }
                  puVar6 = (undefined8 *)(param_2[4] + lVar12 * 0x20);
                  *puVar6 = puVar23;
                  puVar6[1] = puVar14;
                  puVar6[2] = param_4;
                  puVar6[3] = lVar16;
                  param_2[5] = lVar12 + 1;
                }
              }
              goto LAB_006db418;
            }
            uVar19 = 0;
            uVar8 = 0;
            puVar14 = (uint *)0x13;
LAB_006db450:
            local_e0 = (byte *)CONCAT26((short)(uVar19 >> 0x20),
                                        CONCAT42((int)uVar19,CONCAT11(uVar8,(char)puVar14)));
            pbVar10 = local_e0;
          }
          else {
            if ((local_150._4_4_ & (uint)local_150) == 0) {
              if (((local_150._4_4_ & local_164) != 0) &&
                 (local_170 < (uint *)((long)local_190 + (long)local_170))) {
                lVar12 = param_2[5];
                if (lVar12 == param_2[3]) {
                  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>
                  ::grow_one(param_2 + 3);
                }
                puVar6 = (undefined8 *)(param_2[4] + lVar12 * 0x20);
                *puVar6 = local_170;
                puVar6[1] = (uint *)((long)local_190 + (long)local_170);
                goto LAB_006db410;
              }
            }
            else if (local_170 < local_178) {
              lVar12 = param_2[5];
              if (lVar12 == param_2[3]) {
                <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>
                ::grow_one(param_2 + 3);
              }
              puVar6 = (undefined8 *)(param_2[4] + lVar12 * 0x20);
              *puVar6 = local_170;
              puVar6[1] = local_178;
LAB_006db410:
              puVar6[2] = param_4;
              puVar6[3] = lVar16;
              param_2[5] = lVar12 + 1;
            }
LAB_006db418:
            FUN_006da818(&local_e0,param_2,lVar21,param_4 + 1);
            pbVar10 = local_e0;
            puVar23 = puStack_d8;
          }
LAB_006db47c:
          puStack_d8 = puVar23;
          local_e0 = pbVar10;
          if ((char)local_e0 != -1) {
            param_1[1] = (ulong)puStack_d8;
            *param_1 = (ulong)local_e0;
            return;
          }
        }
        else if (*(short *)(lVar5 + 0x68) == 0x2e) {
          auVar26 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(lVar5);
          FUN_006c8474(&local_b8,param_2 + 6,*(undefined4 *)(lVar22 + 0x48),auVar26._0_8_,
                       auVar26._8_8_);
          if ((char)local_b8 != -1) {
LAB_006db674:
            uVar19 = local_b8 >> 0x10;
            pbVar4 = pbStack_b0;
LAB_006db64c:
            *(char *)param_1 = (char)local_b8;
            *(char *)((long)param_1 + 1) = local_b8._1_1_;
            *(int *)((long)param_1 + 2) = (int)uVar19;
            *(short *)((long)param_1 + 6) = (short)(uVar19 >> 0x20);
            param_1[1] = (ulong)pbVar4;
            return;
          }
          lVar12 = param_2[10];
          while (lVar21 < lVar12) {
            pbVar4 = (byte *)param_2[6];
            lVar22 = param_2[7];
            if (lVar22 == 0) {
              uVar19 = 0;
              local_b8._1_1_ = '\0';
              local_b8._0_1_ = '\x13';
              goto LAB_006db64c;
            }
            pbVar10 = (byte *)0x0;
            uVar19 = 0;
            lVar16 = 1 - lVar22;
            pbVar25 = pbVar4;
            while( true ) {
              pbVar9 = pbVar25 + 1;
              bVar2 = *pbVar25;
              if (((int)uVar19 == 0x3f) && (1 < bVar2)) {
                uVar19 = 0;
                local_b8._1_1_ = '\0';
                param_2[6] = (long)pbVar9;
                param_2[7] = -lVar16;
                local_b8._0_1_ = '\x06';
                pbVar4 = pbVar10;
                goto LAB_006db64c;
              }
              pbVar10 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar19 & 0x3f) | (ulong)pbVar10);
              if (-1 < (char)bVar2) break;
              lVar16 = lVar16 + 1;
              uVar19 = (ulong)((int)uVar19 + 7);
              pbVar25 = pbVar9;
              if (lVar16 == 1) {
                uVar19 = 0;
                local_b8._1_1_ = '\0';
                param_2[6] = (long)(pbVar4 + lVar22);
                param_2[7] = 0;
                local_b8._0_1_ = '\x13';
                pbVar4 = pbVar4 + lVar22;
                goto LAB_006db64c;
              }
            }
            param_2[6] = (long)pbVar9;
            param_2[7] = -lVar16;
            if (pbVar10 == (byte *)0x0) {
              lVar12 = lVar12 + -1;
              param_2[10] = lVar12;
            }
            else {
              lVar22 = param_2[9];
              if (pbVar10 + -1 < *(byte **)(lVar22 + 0x10)) {
                lVar5 = *(long *)(lVar22 + 8) + (long)(pbVar10 + -1) * 0x70;
              }
              else {
                lVar16 = *(long *)(lVar22 + 0x18);
                if (lVar16 == 0) {
LAB_006db6bc:
                  uVar19 = 0;
                  local_b8._1_1_ = '\0';
                  local_b8._0_1_ = '\x12';
                  pbVar4 = pbVar10;
                  goto LAB_006db64c;
                }
                lVar22 = *(long *)(lVar22 + 0x20);
                while( true ) {
                  lVar5 = lVar16 + -0x70;
                  lVar20 = (ulong)*(ushort *)(lVar16 + 0x532) << 3;
                  uVar19 = 0xffffffffffffffff;
                  puVar6 = (undefined8 *)(lVar16 + 0x4d8);
                  do {
                    uVar7 = (ulong)*(ushort *)(lVar16 + 0x532);
                    if (lVar20 == 0) goto LAB_006daab4;
                    lVar5 = lVar5 + 0x70;
                    uVar7 = uVar19 + 1;
                    lVar20 = lVar20 + -8;
                    cVar11 = (byte *)*puVar6 < pbVar10;
                    if (pbVar10 < (byte *)*puVar6) {
                      cVar11 = -1;
                    }
                    uVar19 = uVar7;
                    puVar6 = puVar6 + 1;
                  } while (cVar11 == '\x01');
                  if (cVar11 == '\0') break;
LAB_006daab4:
                  if (lVar22 == 0) goto LAB_006db6bc;
                  lVar22 = lVar22 + -1;
                  lVar16 = *(long *)(lVar16 + uVar7 * 8 + 0x538);
                }
              }
              if (*(char *)(lVar5 + 0x6a) == '\x01') {
                param_2[10] = lVar12 + 1;
              }
              auVar26 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(lVar5);
              FUN_006c8474(&local_b8,param_2 + 6,*(undefined4 *)(param_2[8] + 0x48),auVar26._0_8_,
                           auVar26._8_8_);
              if ((char)local_b8 != -1) goto LAB_006db674;
              lVar12 = param_2[10];
            }
          }
        }
        else {
          auVar26 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(lVar5);
          FUN_006c8474(&local_b8,param_2 + 6,*(undefined4 *)(param_2[8] + 0x48),auVar26._0_8_,
                       auVar26._8_8_);
          if ((char)local_b8 != -1) {
            param_1[1] = (ulong)pbStack_b0;
            *param_1 = local_b8;
            return;
          }
        }
      }
      lVar22 = param_2[8];
      pbVar4 = (byte *)param_2[6];
      lVar21 = param_2[10];
      lVar12 = 0xc;
      if (*(char *)(lVar22 + 0x49) != '\b') {
        lVar12 = 4;
      }
      pbVar25 = pbVar4 + ((lVar12 + *(long *)(lVar22 + 0x38)) -
                         (*(long *)(lVar22 + 0x30) + *(long *)(lVar22 + 0x28)));
    } while (param_3 < lVar21);
  }
  *(char *)param_1 = -1;
  return;
}


// ===== 006db6cc  <std::io::stdio::[1]::std::io::stdio::Stdin>::lock =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::[1]::std::io::stdio::Stdin>::lock */

undefined1  [16] __rustcall <std::io::stdio::[1]::std::io::stdio::Stdin>::lock(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5._0_8_ = (int *)*param_1;
  do {
    if (*auVar5._0_8_ != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended();
      uVar4 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006db738;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(auVar5._0_8_,0x10);
    if (bVar2) {
      *auVar5._0_8_ = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar4 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006db738:
  if ((uVar4 & 0x7fffffffffffffff) == 0) {
    auVar5._8_8_ = 0;
    return auVar5;
  }
  uVar3 = std::panicking::panic_count::is_zero_slow_path();
  auVar6._8_4_ = uVar3 ^ 1;
  auVar6._0_8_ = auVar5._0_8_;
  auVar6._12_4_ = 0;
  return auVar6;
}


// ===== 006db760  <std::io::stdio::[1]::std::io::stdio::Stdin>::lines =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::[1]::std::io::stdio::Stdin>::lines */

undefined1  [16] __rustcall <std::io::stdio::[1]::std::io::stdio::Stdin>::lines(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended();
      uVar4 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006db7c8;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar4 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006db7c8:
  if ((uVar4 & 0x7fffffffffffffff) == 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  uVar3 = std::panicking::panic_count::is_zero_slow_path();
  auVar6._8_4_ = uVar3 ^ 1;
  auVar6._0_8_ = param_1;
  auVar6._12_4_ = 0;
  return auVar6;
}


// ===== 006db7f0  <std::io::stdio::[1]::std::io::stdio::Stdin>::read_line =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::[1]::std::io::stdio::Stdin>::read_line */

undefined1  [16] __rustcall
<std::io::stdio::[1]::std::io::stdio::Stdin>::read_line(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long local_68 [3];
  
  piVar9 = (int *)*param_1;
  do {
    if (*piVar9 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(piVar9);
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar6 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006db930;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar5) {
      *piVar9 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar6 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006db930:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar6;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = std::panicking::panic_count::is_zero_slow_path();
    uVar7 = uVar7 ^ 1;
  }
  lVar10 = *(long *)(param_2 + 0x10);
                    /* try { // try from 006db848 to 006db857 has its CatchHandler @ 006db958 */
  auVar11 = FUN_006c534c(piVar9 + 2,10,param_2);
  lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 006db864 to 006db873 has its CatchHandler @ 006db940 */
  core::str::converts::from_utf8(local_68,*(long *)(param_2 + 8) + lVar10,lVar2 - lVar10);
  if (local_68[0] == 0) {
    *(long *)(param_2 + 0x10) = lVar2;
  }
  else {
    puVar1 = auVar11._8_8_;
    if ((auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      puVar1 = &UNK_00976e60;
    }
    auVar11._8_8_ = puVar1;
    auVar11._0_8_ = 1;
    *(long *)(param_2 + 0x10) = lVar10;
  }
  if ((((uVar7 & 1) == 0) && ((*puVar6 & 0x7fffffffffffffff) != 0)) &&
     (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
    *(undefined1 *)(piVar9 + 1) = 1;
  }
  do {
    iVar3 = *piVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar5) {
      *piVar9 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 2) {
    syscall(0x62,piVar9,0x81,1);
  }
  return auVar11;
}


// ===== 006db978  <std::fs::[2]::std::fs::File>::lock_shared =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::lock_shared */

ulong __rustcall <std::fs::[2]::std::fs::File>::lock_shared(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = flock(*param_1,1);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006dba00  <std::fs::[2]::std::fs::File>::set_permissions =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::set_permissions */

ulong __rustcall <std::fs::[2]::std::fs::File>::set_permissions(int *param_1,__mode_t param_2)

{
  int __fd;
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_0099f738;
  __fd = *param_1;
  do {
    iVar2 = fchmod(__fd,param_2);
    if (iVar2 != -1) {
      return 0;
    }
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
                    /* try { // try from 006dba54 to 006dba63 has its CatchHandler @ 006dbaac */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar5 & 1) != 0);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006dbacc  <std::fs::[2]::std::fs::File>::try_lock_shared =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::try_lock_shared */

undefined8 __rustcall <std::fs::[2]::std::fs::File>::try_lock_shared(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  iVar2 = flock(*param_1,5);
  if (iVar2 != -1) {
    return 0;
  }
  puVar3 = (undefined4 *)__errno();
  uVar1 = *puVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
                    /* try { // try from 006dbb34 to 006dbb43 has its CatchHandler @ 006dbb74 */
  lVar4 = core::io::error::os_functions::get_os_functions();
  (**(code **)(lVar4 + 8))(uVar1);
  return 1;
}


// ===== 006dbb8c  <std::fs::[2]::std::fs::File>::lock =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::lock */

ulong __rustcall <std::fs::[2]::std::fs::File>::lock(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = flock(*param_1,2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006dbc14  <std::fs::[2]::std::fs::File>::unlock =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::unlock */

ulong __rustcall <std::fs::[2]::std::fs::File>::unlock(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = flock(*param_1,8);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006dbc9c  <std::fs::[2]::std::fs::File>::set_len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::set_len */

ulong __rustcall <std::fs::[2]::std::fs::File>::set_len(int *param_1,__off64_t param_2)

{
  int __fd;
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_0099f738;
  if (param_2 < 0) {
    uVar5 = <core[188d2c0002da36d0]::io::error::Error>::new::
            <core[188d2c0002da36d0]::num::error::TryFromIntError>(0x14,2);
    return uVar5;
  }
  __fd = *param_1;
  do {
    iVar2 = ftruncate64(__fd,param_2);
    if (iVar2 != -1) {
      return 0;
    }
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
                    /* try { // try from 006dbcf4 to 006dbd03 has its CatchHandler @ 006dbd68 */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar5 & 1) != 0);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006dbd88  <std::fs::[2]::std::fs::File>::metadata =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::metadata */

void __rustcall <std::fs::[2]::std::fs::File>::metadata(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  __dev_t local_a0;
  __ino_t _Stack_98;
  __nlink_t _Stack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __dev_t _Stack_78;
  __off_t _Stack_70;
  __blksize_t _Stack_68;
  __blkcnt_t local_60;
  __time_t _Stack_58;
  long lStack_50;
  __time_t _Stack_48;
  long local_40;
  __time_t _Stack_38;
  long lStack_30;
  long local_28;
  
  _Stack_98 = 0;
  local_a0 = 0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  _Stack_90 = 0;
  _Stack_78 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  _Stack_68 = 0;
  _Stack_70 = 0;
  _Stack_58 = 0;
  local_60 = 0;
  _Stack_48 = 0;
  lStack_50 = 0;
  _Stack_38 = 0;
  local_40 = 0;
  local_28 = 0;
  lStack_30 = 0;
  iVar1 = fstat(*param_2,(stat *)&local_a0);
  if (iVar1 != -1) {
    param_1[0xb] = lStack_50;
    param_1[10] = _Stack_58;
    param_1[0xd] = local_40;
    param_1[0xc] = _Stack_48;
    param_1[0xf] = lStack_30;
    param_1[0xe] = _Stack_38;
    param_1[0x10] = local_28;
    param_1[3] = _Stack_90;
    param_1[2] = _Stack_98;
    param_1[5] = local_80;
    param_1[4] = uStack_88;
    param_1[7] = _Stack_70;
    param_1[6] = _Stack_78;
    param_1[9] = local_60;
    param_1[8] = _Stack_68;
    *param_1 = 0;
    param_1[1] = local_a0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 006dbe64  <std::fs::[2]::std::fs::File>::sync_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::sync_all */

ulong __rustcall <std::fs::[2]::std::fs::File>::sync_all(int *param_1)

{
  int __fd;
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_0099f738;
  __fd = *param_1;
  do {
    iVar2 = fsync(__fd);
    if (iVar2 != -1) {
      return 0;
    }
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
                    /* try { // try from 006dbeac to 006dbebb has its CatchHandler @ 006dbefc */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar5 & 1) != 0);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006dbf1c  <std::fs::[2]::std::fs::File>::try_lock =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::try_lock */

undefined8 __rustcall <std::fs::[2]::std::fs::File>::try_lock(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  iVar2 = flock(*param_1,6);
  if (iVar2 != -1) {
    return 0;
  }
  puVar3 = (undefined4 *)__errno();
  uVar1 = *puVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
                    /* try { // try from 006dbf84 to 006dbf93 has its CatchHandler @ 006dbfc4 */
  lVar4 = core::io::error::os_functions::get_os_functions();
  (**(code **)(lVar4 + 8))(uVar1);
  return 1;
}


// ===== 006dbfdc  <std::fs::[2]::std::fs::File>::set_times =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::set_times */

undefined ** __rustcall <std::fs::[2]::std::fs::File>::set_times(int *param_1,__time_t *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  timespec local_30;
  __time_t _Stack_20;
  ulong local_18;
  
  uVar2 = *(uint *)(param_2 + 3);
  uVar1 = 0x3ffffffe;
  local_30.tv_sec = 0;
  if (*(uint *)(param_2 + 1) != 0xffffffff) {
    uVar1 = *(uint *)(param_2 + 1);
    local_30.tv_sec = *param_2;
  }
  local_30.tv_nsec = (long)uVar1;
  _Stack_20 = 0;
  if (uVar2 != 0xffffffff) {
    _Stack_20 = param_2[2];
  }
  uVar1 = 0x3ffffffe;
  if (uVar2 != 0xffffffff) {
    uVar1 = uVar2;
  }
  local_18 = (ulong)uVar1;
  if (PTR_futimens_0099f798 == (undefined *)0x0) {
    return &PTR_DAT_00977b38;
  }
  iVar3 = futimens(*param_1,&local_30);
  if (iVar3 != -1) {
    return (undefined **)0x0;
  }
  piVar4 = (int *)__errno();
  iVar3 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    return (undefined **)((long)iVar3 << 0x20 | 2);
  }
  return (undefined **)((long)iVar3 << 0x20 | 2);
}


// ===== 006dc0c4  <std::fs::[2]::std::fs::File>::sync_data =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::sync_data */

ulong __rustcall <std::fs::[2]::std::fs::File>::sync_data(int *param_1)

{
  int __fildes;
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_0099f738;
  __fildes = *param_1;
  do {
    iVar2 = fdatasync(__fildes);
    if (iVar2 != -1) {
      return 0;
    }
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
                    /* try { // try from 006dc10c to 006dc11b has its CatchHandler @ 006dc15c */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar5 & 1) != 0);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006dc17c  <std::fs::[2]::std::fs::File>::try_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[2]::std::fs::File>::try_clone */

void __rustcall <std::fs::[2]::std::fs::File>::try_clone(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fcntl(*param_2,0x406,3);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006dc208  <std::backtrace::[2]::std::backtrace::Backtrace>::force_capture =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::[2]::std::backtrace::Backtrace>::force_capture */

void __rustcall <std::backtrace::[2]::std::backtrace::Backtrace>::force_capture(undefined8 param_1)

{
  FUN_006dc218(param_1,PTR_force_capture_0099f7a0);
  return;
}


// ===== 006dc218  FUN_006dc218 =====

void FUN_006dc218(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 *puStack_80;
  undefined8 *local_78;
  long local_70;
  undefined8 uStack_68;
  long local_60;
  undefined1 **local_50;
  undefined *puStack_48;
  undefined8 local_28;
  
  do {
    local_28 = param_2;
    if (DAT_009a6f28 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_009a6f28);
      uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006dc3c8;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f28,0x10);
    if (bVar2) {
      DAT_009a6f28 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006dc3c8:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar3;
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path();
    uVar5 = uVar5 ^ 1;
  }
  puStack_80 = &local_28;
  local_b0 = 0;
  uStack_a8 = 8;
  local_78 = &local_98;
  local_50 = &local_88;
  local_a0 = 0;
  local_98 = 0;
  puStack_48 = &DAT_009778e8;
  local_88 = (undefined1 *)&local_b0;
  FUN_00755af4(FUN_006f99dc,&local_50);
  if (local_a0 == 0) {
    *param_1 = 0;
    param_1[2] = uStack_68;
    param_1[1] = local_70;
    param_1[3] = local_60;
    if (local_b0 != 0) {
      __rustc::__rust_dealloc(uStack_a8,local_b0 * 0x38,8);
    }
  }
  else {
    *param_1 = 2;
    local_60 = local_a0;
    uStack_68 = uStack_a8;
    local_70 = local_b0;
    if ((int)local_98 == 0) {
      local_90 = 0;
    }
    param_1[2] = uStack_a8;
    param_1[1] = local_b0;
    param_1[3] = local_a0;
    param_1[4] = local_90;
    *(undefined4 *)(param_1 + 5) = 3;
  }
  if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    DAT_009a6f2c = 1;
  }
  do {
    iVar4 = DAT_009a6f28;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f28,0x10);
    if (bVar2) {
      DAT_009a6f28 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar4 == 2) {
    syscall(0x62,&DAT_009a6f28,0x81,1);
    return;
  }
  return;
}


// ===== 006dc3d8  <std::backtrace::[2]::std::backtrace::Backtrace>::capture =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::[2]::std::backtrace::Backtrace>::capture */

void __rustcall <std::backtrace::[2]::std::backtrace::Backtrace>::capture(undefined8 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long local_208;
  undefined **ppuStack_200;
  long local_1f8;
  uint local_1f0;
  undefined2 uStack_1ec;
  undefined2 uStack_1ea;
  undefined6 uStack_1e8;
  undefined1 uStack_1e2;
  undefined1 uStack_1e1;
  undefined2 local_1e0;
  undefined1 local_1de;
  long local_68;
  undefined8 local_60;
  
  if (DAT_009a6f0c == '\x01') {
LAB_006dc628:
    *param_1 = 1;
  }
  else {
    if (DAT_009a6f0c == '\0') {
      local_1e0 = 0x4543;
      uStack_1e8 = (undefined6)_UNK_0045b416;
      uStack_1e2 = (undefined1)((ulong)_UNK_0045b416 >> 0x30);
      uStack_1e1 = (undefined1)((ulong)_UNK_0045b416 >> 0x38);
      local_1f0 = (uint)_DAT_0045b40e;
      uStack_1ec = (undefined2)((ulong)_DAT_0045b40e >> 0x20);
      uStack_1ea = (undefined2)((ulong)_DAT_0045b40e >> 0x30);
      local_1de = 0;
      uVar2 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                        (&local_68,&local_1f0,0x13);
      if (local_68 == 1) {
        ppuVar5 = &PTR_DAT_00977090;
LAB_006dc468:
        if ((1 < ((ulong)ppuVar5 & 3) - 2) && (((ulong)ppuVar5 & 3) != 0)) {
          lVar3 = (long)ppuVar5 + -1;
          uStack_1e8 = (undefined6)lVar3;
          uStack_1e2 = (undefined1)((ulong)lVar3 >> 0x30);
          uStack_1e1 = (undefined1)((ulong)lVar3 >> 0x38);
          local_1f0 = CONCAT31(local_1f0._1_3_,3);
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_1e8);
        }
        lVar3 = -1;
LAB_006dc49c:
        uStack_1e2 = 0;
        local_1f0 = (uint)(undefined6)DAT_0045b420;
        uStack_1ec = (undefined2)((uint6)(undefined6)DAT_0045b420 >> 0x20);
        uStack_1ea = DAT_0045b420._6_2_;
        uStack_1e8 = _UNK_0045b428;
                    /* try { // try from 006dc4b8 to 006dc527 has its CatchHandler @ 006dc690 */
        uVar2 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                          (&local_68,&local_1f0,0xf);
        if (local_68 == 1) {
          ppuStack_200 = &PTR_DAT_00977090;
LAB_006dc4f8:
          if ((1 < ((ulong)ppuStack_200 & 3) - 2) && (((ulong)ppuStack_200 & 3) != 0)) {
            lVar4 = (long)ppuStack_200 + -1;
            uStack_1e8 = (undefined6)lVar4;
            uStack_1e2 = (undefined1)((ulong)lVar4 >> 0x30);
            uStack_1e1 = (undefined1)((ulong)lVar4 >> 0x38);
            local_1f0 = CONCAT31(local_1f0._1_3_,3);
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_1e8);
          }
LAB_006dc5a8:
          bVar1 = false;
        }
        else {
          FUN_006d1be8(&local_208,uVar2,local_60);
          if (local_208 == -2) goto LAB_006dc4f8;
          if (local_208 == -1) goto LAB_006dc5a8;
                    /* try { // try from 006dc574 to 006dc587 has its CatchHandler @ 006dc668 */
          core::str::converts::from_utf8(&local_1f0,ppuStack_200,local_1f8);
          if ((local_1f0 & 1) != 0) {
            if (0 < local_208) {
              __rustc::__rust_dealloc(ppuStack_200,local_208,1);
            }
            goto LAB_006dc5a8;
          }
          if (local_1f8 == 1) {
            bVar1 = *(char *)ppuStack_200 != '0';
          }
          else {
            bVar1 = true;
          }
          if (local_208 != 0) {
            __rustc::__rust_dealloc(ppuStack_200,local_208,1);
          }
        }
        if (lVar3 < 1) goto LAB_006dc610;
LAB_006dc5b4:
        __rustc::__rust_dealloc(ppuVar5,lVar3,1);
        DAT_009a6f0c = '\x01';
        if (bVar1) {
          DAT_009a6f0c = '\x02';
        }
      }
      else {
        FUN_006d1be8(&local_208,uVar2,local_60);
        lVar4 = local_1f8;
        ppuVar5 = ppuStack_200;
        lVar3 = local_208;
        if (local_208 == -2) goto LAB_006dc468;
                    /* try { // try from 006dc534 to 006dc547 has its CatchHandler @ 006dc684 */
        if ((local_208 == -1) ||
           (core::str::converts::from_utf8(&local_1f0,ppuStack_200,local_1f8),
           CONCAT26(uStack_1ea,CONCAT24(uStack_1ec,local_1f0)) == 1)) goto LAB_006dc49c;
        if (lVar4 == 1) {
          bVar1 = *(char *)ppuVar5 != '0';
        }
        else {
          bVar1 = true;
        }
        if (lVar3 != 0) goto LAB_006dc5b4;
LAB_006dc610:
        DAT_009a6f0c = '\x01';
        if (bVar1) {
          DAT_009a6f0c = '\x02';
        }
      }
      if (!bVar1) goto LAB_006dc628;
    }
    FUN_006dc218(param_1,PTR_capture_0099f550);
  }
  return;
}


// ===== 006dc6b4  FUN_006dc6b4 =====

void FUN_006dc6b4(long *param_1,long *param_2,ulong *param_3)

{
  byte bVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  long *plVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  long in_x11;
  long extraout_x11;
  long in_x12;
  long extraout_x12;
  ulong in_x13;
  ulong extraout_x13;
  ulong uVar21;
  long in_x14;
  long extraout_x14;
  ulong *puVar22;
  undefined4 uVar23;
  undefined8 in_x16;
  undefined8 extraout_x16;
  ulong *in_x17;
  ulong *extraout_x17;
  ulong *puVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined **local_168;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  ulong local_88;
  long local_80;
  ulong local_78;
  
  if (*param_2 == 0) {
    uVar11 = *param_3;
    puVar2 = (ulong *)param_3[4];
    puVar4 = (ulong *)param_3[5];
    puVar24 = (ulong *)param_3[6];
    puVar5 = (ulong *)param_3[7];
    uVar25 = param_3[9];
    bVar1 = (byte)param_3[10];
    plVar3 = (long *)param_3[2];
    uVar15 = param_3[3];
    plVar8 = param_1;
    do {
      puVar20 = &local_120;
      uVar23 = (undefined4)in_x16;
      iVar7 = (int)param_2[2];
      puVar17 = (ulong *)param_2[3];
      puVar6 = (ulong *)param_2[4];
      iVar9 = (int)puVar17;
      uVar14 = (undefined4)((ulong)puVar17 >> 0x20);
      puVar22 = puVar6;
      iVar26 = iVar7;
      if (iVar7 == -1) goto LAB_006dc8ac;
      plVar16 = (long *)param_2[1];
      uVar23 = *(undefined4 *)((long)param_2 + 0x14);
      puVar12 = (ulong *)param_2[5];
      if (plVar16 != (long *)0x0) {
        lVar10 = plVar16[2];
        uVar15 = plVar16[3];
        lVar27 = *plVar16;
        uVar25 = plVar16[1];
        lVar13 = 8;
        local_88 = 0;
        local_80 = 8;
        local_78 = 0;
        local_168 = &PTR_s__rust_deps_addr2line_0_25_1_src__009778a0;
        goto LAB_006dc988;
      }
      puVar22 = puVar17;
      if (iVar7 != 2) {
        puVar20 = puVar12;
        in_x17 = puVar6;
        iVar26 = 4;
        iVar9 = iVar7;
        uVar14 = uVar23;
        goto LAB_006dc8ac;
      }
      puVar17 = (ulong *)0x0;
      if ((bVar1 & 1) != 0) {
LAB_006dc8a8:
        iVar26 = 3;
        iVar9 = (int)puVar12;
        uVar14 = (int)puVar17;
        goto LAB_006dc8ac;
      }
      do {
        puVar6 = puVar24;
        if (puVar6 == puVar5) goto LAB_006dc8a8;
        puVar12 = puVar6 + 4;
        bVar1 = uVar25 <= puVar6[3];
        if (uVar25 <= puVar6[3]) {
          in_x11 = 1;
          puVar17 = (ulong *)0x0;
          param_3[6] = (ulong)puVar12;
          lVar10 = -0x28;
          *(undefined1 *)(param_3 + 10) = 1;
          goto LAB_006dc844;
        }
        puVar17 = (ulong *)puVar6[1];
        puVar24 = puVar12;
      } while ((puVar17 <= puVar2) || (puVar17 = (ulong *)*puVar6, puVar4 <= puVar17));
      param_3[6] = (ulong)(puVar6 + 4);
      plVar8 = (long *)puVar6[2];
      plVar16 = *(long **)(uVar15 + 0x18);
      if (plVar16 <= plVar8) {
                    /* try { // try from 006dcab8 to 006dcac3 has its CatchHandler @ 006dcacc */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (plVar8,plVar16,&PTR_s__rust_deps_addr2line_0_25_1_src__00977230);
      }
      local_88 = *(long *)(uVar15 + 0x10) + (long)plVar8 * 0x230;
      lVar10 = -0x10;
      puVar17 = puVar6;
LAB_006dc844:
      puVar12 = (ulong *)(&stack0xffffffffffffffa0 + lVar10);
      *puVar12 = (ulong)puVar17;
      if (local_88 == 0) goto LAB_006dc8a8;
                    /* try { // try from 006dc850 to 006dc863 has its CatchHandler @ 006dcad0 */
      plVar8 = (long *)FUN_006d2e8c(&uStack_118,local_88,uVar11,plVar3);
      puVar24 = puVar6 + 4;
      param_2[7] = lStack_e0;
      param_2[6] = lStack_e8;
      param_2[9] = lStack_d0;
      param_2[8] = local_d8;
      param_2[0xb] = lStack_c0;
      param_2[10] = local_c8;
      param_2[1] = local_110;
      *param_2 = uStack_118;
      param_2[3] = lStack_100;
      param_2[2] = local_108;
      param_2[0xc] = local_b8;
      param_2[5] = lStack_f0;
      param_2[4] = lStack_f8;
      in_x11 = extraout_x11;
      in_x12 = extraout_x12;
      in_x13 = extraout_x13;
      in_x14 = extraout_x14;
      in_x16 = extraout_x16;
      in_x17 = extraout_x17;
    } while (*param_2 == 0);
  }
  lVar27 = *param_2;
  lVar31 = param_2[3];
  lVar13 = param_2[2];
  lVar10 = param_2[0xc];
  uVar15 = param_3[10];
  param_1[1] = param_2[1];
  *param_1 = lVar27;
  param_1[3] = lVar31;
  param_1[2] = lVar13;
  lVar37 = param_2[7];
  lVar35 = param_2[6];
  lVar13 = param_2[9];
  lVar27 = param_2[8];
  lVar32 = param_2[0xb];
  lVar31 = param_2[10];
  lVar36 = param_2[4];
  uVar33 = param_3[5];
  uVar30 = param_3[4];
  uVar18 = param_3[7];
  uVar11 = param_3[6];
  uVar19 = param_3[9];
  uVar25 = param_3[8];
  uVar34 = param_3[1];
  uVar21 = *param_3;
  uVar29 = param_3[3];
  uVar28 = param_3[2];
  param_1[5] = param_2[5];
  param_1[4] = lVar36;
  param_1[7] = lVar37;
  param_1[6] = lVar35;
  param_1[9] = lVar13;
  param_1[8] = lVar27;
  param_1[0xb] = lVar32;
  param_1[10] = lVar31;
  param_1[0xd] = uVar21;
  param_1[0xc] = lVar10;
  param_1[0xf] = uVar28;
  param_1[0xe] = uVar34;
  param_1[0x11] = uVar30;
  param_1[0x10] = uVar29;
  param_1[0x13] = uVar11;
  param_1[0x12] = uVar33;
  param_1[0x15] = uVar25;
  param_1[0x14] = uVar18;
  param_1[0x17] = uVar15;
  param_1[0x16] = uVar19;
  return;
LAB_006dc988:
  uVar28 = local_78;
  if (uVar15 == 1) {
    uVar19 = 0;
  }
  else {
    if (uVar15 == 0) goto LAB_006dca44;
    uVar19 = 0;
    uVar18 = uVar15;
    do {
      uVar29 = (uVar18 >> 1) + uVar19;
      puVar24 = (ulong *)(lVar10 + uVar29 * 0x20);
      uVar21 = puVar24[2];
      uVar30 = uVar19;
      if (((uVar21 <= local_78) && (uVar30 = uVar29, local_78 <= uVar21)) &&
         (uVar30 = uVar19, *puVar24 <= uVar11)) {
        uVar30 = uVar29;
      }
      uVar19 = uVar30;
      uVar18 = uVar18 - (uVar18 >> 1);
    } while (1 < uVar18);
  }
  puVar24 = (ulong *)(lVar10 + uVar19 * 0x20);
  if (((puVar24[2] != local_78) || (uVar11 < *puVar24)) || (puVar24[1] <= uVar11)) {
LAB_006dca44:
    puVar20 = (ulong *)param_3[1];
    in_x14 = local_80 + local_78 * 8;
    in_x12 = *plVar3 + 0x10;
    plVar8 = plVar16;
    in_x11 = local_80;
    in_x13 = local_88;
    in_x17 = puVar12;
LAB_006dc8ac:
    uStack_118 = CONCAT44(uVar23,iVar26);
    local_110 = CONCAT44(uVar14,iVar9);
    param_1[5] = in_x12;
    param_1[4] = (long)puVar20;
    param_1[7] = in_x11;
    param_1[6] = (long)plVar8;
    param_1[9] = in_x13;
    param_1[8] = in_x11;
    param_1[10] = in_x14;
    param_1[1] = local_110;
    *param_1 = uStack_118;
    param_1[3] = (long)in_x17;
    param_1[2] = (long)puVar22;
    *(undefined1 *)(param_1 + 0x17) = 2;
    return;
  }
  uVar18 = uVar19;
  if (uVar15 <= uVar19) goto LAB_006dcaa4;
  uVar18 = puVar24[3];
  if (uVar25 <= uVar18) {
    local_168 = &PTR_s__rust_deps_addr2line_0_25_1_src__009778b8;
    uVar15 = uVar25;
LAB_006dcaa4:
                    /* try { // try from 006dcaa4 to 006dcab3 has its CatchHandler @ 006dcad8 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar18,uVar15,local_168);
  }
  if (local_78 == local_88) {
                    /* try { // try from 006dca38 to 006dca3f has its CatchHandler @ 006dcac8 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<*const_u8>>::grow_one(&local_88);
    lVar13 = local_80;
  }
  lVar10 = lVar10 + (uVar19 + 1) * 0x20;
  uVar15 = uVar15 - (uVar19 + 1);
  *(ulong *)(lVar13 + uVar28 * 8) = lVar27 + uVar18 * 0x30;
  local_78 = uVar28 + 1;
  goto LAB_006dc988;
}


// ===== 006dcb28  <std::io::pipe::[3]::std::io::pipe::PipeWriter>::try_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::[3]::std::io::pipe::PipeWriter>::try_clone */

void __rustcall
<std::io::pipe::[3]::std::io::pipe::PipeWriter>::try_clone(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fcntl(*param_2,0x406,3);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006dcbb4  <std::backtrace::[3]::std::backtrace::Backtrace>::frames =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::[3]::std::backtrace::Backtrace>::frames */

undefined1  [16] __rustcall <std::backtrace::[3]::std::backtrace::Backtrace>::frames(long *param_1)

{
  long *plStack_20;
  long **local_18;
  
  if (*param_1 != 2) {
    return ZEXT816(8);
  }
  if ((int)param_1[5] == 0) {
    return *(undefined1 (*) [16])(param_1 + 2);
  }
  plStack_20 = param_1 + 1;
  local_18 = &plStack_20;
  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
            (param_1 + 5,1,&local_18,&DAT_00976b18,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976a88)
  ;
  return *(undefined1 (*) [16])(param_1 + 2);
}


// ===== 006dcc3c  <std::sys::thread_local::os::[3]::std::sys::thread_local::os::LocalPointer>::get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::thread_local::os::[3]::std::sys::thread_local::os::LocalPointer>::get */

void __rustcall
<std::sys::thread_local::os::[3]::std::sys::thread_local::os::LocalPointer>::get(long *param_1)

{
  pthread_key_t __key;
  
  if (*param_1 != 0) {
    pthread_getspecific((pthread_key_t)*param_1);
    return;
  }
  __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init
                    (param_1);
  pthread_getspecific(__key);
  return;
}


// ===== 006dcc64  FUN_006dcc64 =====

void FUN_006dcc64(undefined2 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  sockaddr local_c0;
  undefined8 uStack_b0;
  undefined8 local_a8;
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
  socklen_t local_38;
  undefined2 uStack_32;
  undefined6 local_30;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  undefined2 uStack_22;
  
  local_38 = 0x80;
  local_c0.sa_data[6] = '\0';
  local_c0.sa_data[7] = '\0';
  local_c0.sa_data[8] = '\0';
  local_c0.sa_data[9] = '\0';
  local_c0.sa_data[10] = '\0';
  local_c0.sa_data[0xb] = '\0';
  local_c0.sa_data[0xc] = '\0';
  local_c0.sa_data[0xd] = '\0';
  local_c0.sa_family = 0;
  local_c0.sa_data[0] = '\0';
  local_c0.sa_data[1] = '\0';
  local_c0.sa_data[2] = '\0';
  local_c0.sa_data[3] = '\0';
  local_c0.sa_data[4] = '\0';
  local_c0.sa_data[5] = '\0';
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  iVar1 = getsockname(param_2,&local_c0,&local_38);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *param_1 = 2;
    *(ulong *)(param_1 + 4) = (long)iVar1 << 0x20 | 2;
    return;
  }
  if (local_c0.sa_family == 10) {
    if (0x1b < local_38) {
      *param_1 = 1;
      uStack_28 = (undefined6)uStack_b0;
      uStack_22 = (undefined2)((ulong)uStack_b0 >> 0x30);
      local_30 = (undefined6)local_c0.sa_data._6_8_;
      uStack_2a = SUB82(local_c0.sa_data._6_8_,6);
      *(undefined4 *)(param_1 + 10) = local_c0.sa_data._2_4_;
      *(undefined4 *)(param_1 + 0xc) = (undefined4)local_a8;
      *(ulong *)(param_1 + 5) = CONCAT62(uStack_28,uStack_2a);
      *(ulong *)(param_1 + 1) = CONCAT62(local_30,uStack_32);
      param_1[9] = uStack_22;
      param_1[0xe] = (ushort)local_c0.sa_data._0_2_ >> 8 |
                     (ushort)(((ushort)local_c0.sa_data._0_2_ & 0xff00ff) << 8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045bd10,0x35,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978168);
  }
  if (local_c0.sa_family != 2) {
    *(undefined ***)(param_1 + 4) = &PTR_s_invalid_argument_00978180;
    *param_1 = 2;
    return;
  }
  if (0xf < local_38) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = local_c0.sa_data._2_4_;
    param_1[3] = (ushort)local_c0.sa_data._0_2_ >> 8 |
                 (ushort)(((ushort)local_c0.sa_data._0_2_ & 0xff00ff) << 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0045bcdc,0x34,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978150);
}


// ===== 006dcdfc  FUN_006dcdfc =====

void FUN_006dcdfc(undefined2 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  sockaddr local_c0;
  undefined8 uStack_b0;
  undefined8 local_a8;
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
  socklen_t local_38;
  undefined2 uStack_32;
  undefined6 local_30;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  undefined2 uStack_22;
  
  local_38 = 0x80;
  local_c0.sa_data[6] = '\0';
  local_c0.sa_data[7] = '\0';
  local_c0.sa_data[8] = '\0';
  local_c0.sa_data[9] = '\0';
  local_c0.sa_data[10] = '\0';
  local_c0.sa_data[0xb] = '\0';
  local_c0.sa_data[0xc] = '\0';
  local_c0.sa_data[0xd] = '\0';
  local_c0.sa_family = 0;
  local_c0.sa_data[0] = '\0';
  local_c0.sa_data[1] = '\0';
  local_c0.sa_data[2] = '\0';
  local_c0.sa_data[3] = '\0';
  local_c0.sa_data[4] = '\0';
  local_c0.sa_data[5] = '\0';
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  iVar1 = getpeername(param_2,&local_c0,&local_38);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *param_1 = 2;
    *(ulong *)(param_1 + 4) = (long)iVar1 << 0x20 | 2;
    return;
  }
  if (local_c0.sa_family == 10) {
    if (0x1b < local_38) {
      *param_1 = 1;
      uStack_28 = (undefined6)uStack_b0;
      uStack_22 = (undefined2)((ulong)uStack_b0 >> 0x30);
      local_30 = (undefined6)local_c0.sa_data._6_8_;
      uStack_2a = SUB82(local_c0.sa_data._6_8_,6);
      *(undefined4 *)(param_1 + 10) = local_c0.sa_data._2_4_;
      *(undefined4 *)(param_1 + 0xc) = (undefined4)local_a8;
      *(ulong *)(param_1 + 5) = CONCAT62(uStack_28,uStack_2a);
      *(ulong *)(param_1 + 1) = CONCAT62(local_30,uStack_32);
      param_1[9] = uStack_22;
      param_1[0xe] = (ushort)local_c0.sa_data._0_2_ >> 8 |
                     (ushort)(((ushort)local_c0.sa_data._0_2_ & 0xff00ff) << 8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045bd10,0x35,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978168);
  }
  if (local_c0.sa_family != 2) {
    *(undefined ***)(param_1 + 4) = &PTR_s_invalid_argument_00978180;
    *param_1 = 2;
    return;
  }
  if (0xf < local_38) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = local_c0.sa_data._2_4_;
    param_1[3] = (ushort)local_c0.sa_data._0_2_ >> 8 |
                 (ushort)(((ushort)local_c0.sa_data._0_2_ & 0xff00ff) << 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0045bcdc,0x34,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978150);
}


// ===== 006dcf94  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x18);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dcffc  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap>>::
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x10);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd064  <alloc[cc0d62b833a55794]::raw_vec::RawVec<addr2line[5beaa54f6b4a1439]::unit::ResUnit<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>::grow_one =====

/* <alloc[cc0d62b833a55794]::raw_vec::RawVec<addr2line[5beaa54f6b4a1439]::unit::ResUnit<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>::grow_one
    */

void <alloc[cc0d62b833a55794]::raw_vec::RawVec<addr2line[5beaa54f6b4a1439]::unit::ResUnit<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x230);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd0cc  <alloc[cc0d62b833a55794]::raw_vec::RawVec<addr2line[5beaa54f6b4a1439]::unit::SupUnit<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>::grow_one =====

/* <alloc[cc0d62b833a55794]::raw_vec::RawVec<addr2line[5beaa54f6b4a1439]::unit::SupUnit<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>::grow_one
    */

void <alloc[cc0d62b833a55794]::raw_vec::RawVec<addr2line[5beaa54f6b4a1439]::unit::SupUnit<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x1c8);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd134  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::Library>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::Library>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::Library>>::
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x48);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd19c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry>>
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x30);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd204  <alloc[cc0d62b833a55794]::raw_vec::RawVec<gimli[d400ddce60e1bc02]::read::line::FileEntry<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>,usize>>>::grow_one =====

/* <alloc[cc0d62b833a55794]::raw_vec::RawVec<gimli[d400ddce60e1bc02]::read::line::FileEntry<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>,
   usize>>>::grow_one */

void <alloc[cc0d62b833a55794]::raw_vec::RawVec<gimli[d400ddce60e1bc02]::read::line::FileEntry<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>,usize>>>
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x58);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd26c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace::BacktraceFrame>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace::BacktraceFrame>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace::BacktraceFrame>>::grow_one
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x38);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd2d4  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>::grow_one
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,0x20);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd33c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::line::FileEntryFormat>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::line::FileEntryFormat>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::line::FileEntryFormat>>::grow_one
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
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,2,4);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd3a4  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<*const_u8>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<*const u8>>::grow_one */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<*const_u8>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_006df348(&local_38,*param_1,param_1[1],uVar1,8,8);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006dd40c  FUN_006dd40c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006dd40c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint6 uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 uVar6;
  uint *****pppppuVar7;
  uint *****pppppuVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  uint *****pppppuVar13;
  uint *******pppppppuVar14;
  code *pcVar15;
  bool bVar16;
  ulong uVar17;
  long *plVar18;
  uint *******pppppppuVar19;
  uint *puVar20;
  uint *******extraout_x9;
  uint *******extraout_x9_00;
  uint *******extraout_x9_01;
  uint *******extraout_x9_02;
  uint *******extraout_x9_03;
  uint *******extraout_x9_04;
  uint *******extraout_x9_05;
  uint *******extraout_x9_06;
  uint *******extraout_x9_07;
  uint *******pppppppuVar21;
  uint *******pppppppuVar22;
  uint ******ppppppuVar23;
  undefined1 *puVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint *******extraout_x13;
  uint *******extraout_x13_00;
  uint *******extraout_x13_01;
  uint *******extraout_x13_02;
  uint *******extraout_x13_03;
  uint *******extraout_x13_04;
  uint *******extraout_x13_05;
  uint *******extraout_x13_06;
  uint *******extraout_x13_07;
  uint *******extraout_x13_08;
  uint *******extraout_x13_09;
  uint *******extraout_x13_10;
  ulong uVar31;
  long lVar32;
  ulong *puVar33;
  uint *****pppppuVar34;
  uint *******pppppppuVar35;
  uint *******pppppppuVar36;
  char cVar37;
  uint uVar38;
  uint *******pppppppuVar39;
  uint uVar40;
  uint *******pppppppuVar41;
  uint *******pppppppuVar42;
  uint *******pppppppuVar43;
  undefined8 *puVar44;
  uint *******pppppppuVar45;
  undefined1 auVar46 [16];
  uint ******local_560;
  uint ******local_558;
  uint *******local_550;
  uint *******local_548;
  uint *******local_540;
  uint *******local_538;
  uint *******local_530;
  ulong local_528;
  uint *******local_520;
  uint *******local_518;
  char local_510;
  undefined1 local_50c;
  char local_508;
  undefined1 local_504;
  char local_500;
  char local_4fc;
  long local_4f8;
  ulong uStack_4f0;
  uint *******local_4e8;
  uint *******local_4e0;
  int local_4d8;
  byte bStack_4d4;
  ulong local_4d0;
  uint *******local_4c8;
  ushort local_4c0;
  undefined8 local_4b8;
  uint *******local_4b0;
  uint *******pppppppuStack_4a8;
  uint *******local_4a0;
  uint *******local_498;
  uint ******ppppppuStack_490;
  uint *******local_488;
  uint *******local_480;
  uint *******pppppppuStack_478;
  uint *******pppppppuStack_470;
  uint *****local_468;
  uint *****local_460;
  uint *****pppppuStack_458;
  uint *****pppppuStack_450;
  uint *****pppppuStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  uint *******local_430;
  uint *******local_420;
  uint *******pppppppuStack_418;
  uint *****local_410;
  uint *****pppppuStack_408;
  uint *****local_400;
  uint *****pppppuStack_3f8;
  undefined8 local_3f0;
  uint *****pppppuStack_3e8;
  ulong local_3e0;
  uint *******local_3d0;
  uint *******pppppppuStack_3c8;
  undefined1 auStack_3c0 [16];
  uint *******local_3b0;
  uint *****pppppuStack_3a8;
  uint *****pppppuStack_3a0;
  uint *****local_398;
  uint *****pppppuStack_390;
  undefined8 local_388;
  uint *****pppppuStack_380;
  ulong local_378;
  uint ******local_370;
  uint *******pppppppuStack_368;
  uint *******local_360;
  uint *******local_358;
  uint *******pppppppuStack_350;
  uint *******pppppppuStack_348;
  uint *******pppppppuStack_340;
  uint *******local_338;
  uint *****pppppuStack_330;
  undefined8 local_328;
  uint *****pppppuStack_320;
  uint *******local_318;
  long lStack_310;
  uint *******local_308;
  uint *******local_300;
  undefined8 local_2f8;
  uint *******local_2f0;
  uint *******pppppppuStack_2e8;
  uint *******pppppppuStack_2e0;
  uint *******pppppppuStack_2d8;
  uint ******local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  uint *******local_2b8;
  uint *******local_2b0;
  uint *******local_2a8;
  uint *******local_2a0;
  uint *******pppppppuStack_298;
  uint *******local_290;
  uint *******local_288;
  uint *******local_280;
  uint *******local_278;
  uint *******local_270;
  uint ******ppppppuStack_268;
  uint *******local_260;
  uint *******local_258;
  ulong local_250;
  uint *******local_248;
  long local_240;
  uint *******local_238;
  ulong local_230;
  ulong local_228;
  uint *******local_220;
  uint *******local_218;
  byte local_210;
  undefined1 local_20f;
  ushort local_20e;
  undefined1 local_20c;
  char local_20b;
  char local_20a;
  undefined1 local_209;
  char local_208;
  char local_207;
  uint *******local_200;
  uint *******local_1f8;
  uint *******local_1f0;
  uint *******local_1e8;
  uint *******local_1e0;
  uint *******local_1d8;
  uint *******local_1d0;
  uint *******local_1c8;
  uint *******local_1c0;
  uint *******local_1b8;
  uint *******local_1b0;
  uint *****pppppuStack_1a8;
  uint *******local_1a0;
  uint *****pppppuStack_198;
  uint *******local_190;
  uint *******local_188;
  uint *******local_180;
  uint *******local_178;
  uint *******pppppppuStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  uint *****pppppuStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  uint *****pppppuStack_150;
  uint local_148;
  undefined4 uStack_144;
  uint *****pppppuStack_140;
  ulong local_138;
  uint *******local_130;
  uint *******pppppppuStack_128;
  uint *******local_120;
  uint ******ppppppuStack_118;
  uint *******local_110;
  uint *******local_100;
  uint *******pppppppuStack_f8;
  uint *******local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  uint *******pppppppuStack_b0;
  uint *******local_a8;
  uint *******local_a0;
  uint ******ppppppuStack_98;
  uint *******local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  
  pppppppuVar22 = (uint *******)*param_2;
  lVar26 = param_2[0x1f];
  uVar17 = param_3[8];
  if (lVar26 != 0) {
    lVar28 = param_2[0x20];
LAB_006dd458:
    uVar31 = (ulong)*(ushort *)(lVar26 + 0x112);
    uVar30 = 0xffffffffffffffff;
    lVar32 = uVar31 << 3;
    puVar1 = (undefined8 *)(lVar26 + -8);
    puVar33 = (ulong *)(lVar26 + 0xb8);
    do {
      puVar44 = puVar1;
      if (lVar32 == 0) goto LAB_006dd4a4;
      puVar1 = puVar44 + 2;
      uVar30 = uVar30 + 1;
      lVar32 = lVar32 + -8;
      cVar37 = *puVar33 < uVar17;
      if (uVar17 < *puVar33) {
        cVar37 = -1;
      }
      puVar33 = puVar33 + 1;
    } while (cVar37 == '\x01');
    uVar31 = uVar30;
    if (cVar37 == '\0') {
      cVar37 = *(char *)(puVar44 + 1);
      if (cVar37 == -1) {
        plVar18 = (long *)*puVar1;
        do {
          lVar26 = *plVar18;
          cVar37 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar16) {
            *plVar18 = lVar26 + 1;
            cVar37 = ExclusiveMonitorsStatus();
          }
        } while (cVar37 != '\0');
        if (lVar26 < 0) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x6de63c);
          (*pcVar15)();
        }
        local_200 = (uint *******)*puVar1;
        goto LAB_006ddabc;
      }
      local_c8 = (uint *******)
                 CONCAT44(*(uint *)((long)puVar44 + 0xc) >> 8,*(undefined4 *)((long)puVar44 + 9));
      local_200 = (uint *******)*puVar1;
      goto LAB_006ddbc0;
    }
LAB_006dd4a4:
    if (lVar28 != 0) goto code_r0x006dd4a8;
  }
  pppppppuVar19 = (uint *******)(param_2[1] - uVar17);
  if (uVar17 <= (ulong)param_2[1]) {
    local_100 = (uint *******)((long)pppppppuVar22 + uVar17);
    local_488 = (uint *******)0x0;
    local_4b0 = (uint *******)0x0;
    pppppppuStack_4a8 = (uint *******)&DAT_00000008;
    local_4a0 = (uint *******)0x0;
    local_498 = (uint *******)0x0;
    pppppppuStack_f8 = pppppppuVar19;
    pppppppuVar36 = local_100;
    pppppppuVar35 = local_360;
joined_r0x006dd528:
    local_360 = pppppppuVar22;
    if (pppppppuVar19 != (uint *******)0x0) {
      pppppppuVar39 = (uint *******)&local_3d0;
      pppppppuVar22 = (uint *******)0x0;
      uVar30 = 0;
      uVar17 = 0;
      while( true ) {
        bVar2 = *(byte *)((long)pppppppuVar36 + (long)pppppppuVar22);
        if (((int)uVar17 == 0x3f) && (1 < bVar2)) {
          uVar38 = 6;
          goto LAB_006dd9c4;
        }
        uVar30 = ((ulong)bVar2 & 0x7f) << (uVar17 & 0x3f) | uVar30;
        if (-1 < (char)bVar2) break;
        pppppppuVar22 = (uint *******)((long)pppppppuVar22 + 1);
        uVar17 = (ulong)((int)uVar17 + 7);
        if (pppppppuVar19 == pppppppuVar22) {
          local_360 = (uint *******)((long)pppppppuVar36 + (long)pppppppuVar19);
          goto LAB_006dd9c0;
        }
      }
      if (uVar30 == 0) goto LAB_006dd91c;
      if ((uint *******)((long)pppppppuVar19 + -1) == pppppppuVar22) {
        uVar38 = 0x13;
        local_360 = (uint *******)((long)pppppppuVar36 + (long)pppppppuVar22 + 1);
LAB_006de3ec:
        uVar4 = (ushort)pppppppuStack_368;
        pppppppuStack_368 = (uint *******)(ulong)(uVar4 & 0xff);
      }
      else {
        uVar17 = (long)pppppppuVar19 - (long)pppppppuVar22;
        local_360 = (uint *******)((long)pppppppuVar36 + (long)pppppppuVar22 + 2);
        uVar25 = (uint)*(char *)((long)pppppppuVar36 + (long)pppppppuVar22 + 1);
        uVar38 = uVar25 & 0x7f;
        if ((int)uVar25 < 0) {
          if ((uint *******)((long)pppppppuVar19 + -2) == pppppppuVar22) {
            uVar38 = 0x13;
            local_360 = (uint *******)((long)pppppppuVar36 + (long)pppppppuVar22 + 2);
          }
          else {
            cVar37 = *(char *)local_360;
            local_360 = (uint *******)((long)pppppppuVar36 + (long)pppppppuVar22 + 3);
            uVar38 = uVar38 | ((int)cVar37 & 0x7fU) << 7;
            if (-1 < cVar37) {
              pppppppuVar19 = (uint *******)(uVar17 - 3);
              goto LAB_006dd5f8;
            }
            if ((uint *******)((long)pppppppuVar19 + -3) == pppppppuVar22) {
              uVar38 = 0x13;
              local_360 = (uint *******)((long)pppppppuVar36 + (long)pppppppuVar22 + 3);
            }
            else {
              if (*(byte *)local_360 < 4) {
                uVar38 = uVar38 | (uint)*(byte *)local_360 << 0xe;
                local_360 = (uint *******)((long)pppppppuVar36 + (long)pppppppuVar22 + 4);
                pppppppuVar19 = (uint *******)(uVar17 - 4);
                goto LAB_006dd5f8;
              }
              uVar38 = 6;
            }
          }
          goto LAB_006de3ec;
        }
        pppppppuVar19 = (uint *******)(uVar17 - 2);
LAB_006dd5f8:
        if ((uVar38 & 0xffff) == 0) {
          uVar38 = 8;
          goto LAB_006de3ec;
        }
        if (pppppppuVar19 == (uint *******)0x0) {
LAB_006dd9c0:
          uVar38 = 0x13;
        }
        else {
          bVar2 = *(byte *)local_360;
          if (bVar2 < 2) {
            uVar31 = (ulong)local_4b8 >> 0x20;
            local_4b8 = (uint *******)CONCAT44((int)uVar31,uVar38);
            pppppppuStack_170 = (uint *******)0x0;
            local_168 = 0;
            pppppuStack_160 = (uint *****)0x0;
            local_158 = 0;
            pppppuStack_150 = (uint *****)0x0;
            local_148 = 0;
            pppppuStack_140 = (uint *****)0x0;
            local_138 = local_138 & 0xffffffff00000000;
            local_190 = (uint *******)0x0;
            local_180 = (uint *******)0x0;
            local_188 = (uint *******)0x0;
            local_178 = (uint *******)((ulong)local_178 & 0xffffffff00000000);
            pppppppuVar42 = (uint *******)((long)pppppppuVar19 + -1);
            pppppppuVar36 = (uint *******)((long)local_360 + 1);
            pppppppuVar21 = local_360;
            pppppppuVar10 = pppppppuStack_170;
            pppppuVar11 = pppppuStack_160;
            pppppuVar12 = pppppuStack_150;
            pppppuVar13 = pppppuStack_140;
            pppppppuVar14 = local_190;
            pppppppuVar22 = local_180;
            pppppppuVar41 = local_188;
            pppppppuVar45 = local_420;
            pppppppuVar43 = pppppppuStack_418;
            pppppuVar34 = pppppuStack_408;
            pppppuVar7 = pppppuStack_3f8;
            pppppuVar8 = pppppuStack_3e8;
            uVar31 = local_3e0;
            pppppppuVar9 = local_3d0;
            local_420 = local_178;
            local_3e0 = local_138;
            do {
              local_3d0 = pppppppuVar14;
              pppppuStack_3e8 = pppppuVar13;
              pppppuStack_3f8 = pppppuVar12;
              pppppuStack_408 = pppppuVar11;
              pppppppuStack_418 = pppppppuVar10;
              local_178 = local_420;
              pppppppuStack_170 = pppppppuStack_418;
              pppppuStack_160 = pppppuStack_408;
              pppppuStack_150 = pppppuStack_3f8;
              pppppuStack_140 = pppppuStack_3e8;
              local_138 = local_3e0;
              local_190 = local_3d0;
              local_188 = pppppppuVar41;
              local_180 = pppppppuVar22;
              if (pppppppuVar42 == (uint *******)0x0) {
                pppppppuVar19 = (uint *******)0x0;
LAB_006dd9f0:
                uVar40 = 0;
                uVar17 = 0;
                uVar29 = 0x13;
                pppppppuVar21 = pppppppuVar36;
                goto LAB_006dda34;
              }
              uVar40 = (uint)pppppppuVar39;
              lVar26 = (long)pppppppuVar42 + -1;
              pppppppuVar39 = (uint *******)((long)pppppppuVar36 + 1);
              uVar25 = (int)*(char *)pppppppuVar36 & 0x7f;
              uVar27 = (ulong)uVar25;
              if (*(char *)pppppppuVar36 < 0) {
                if (lVar26 == 0) goto LAB_006dd9d4;
                lVar26 = (long)pppppppuVar42 + -2;
                pppppppuVar39 = (uint *******)((long)pppppppuVar36 + 2);
                uVar25 = uVar25 | ((int)*(char *)((long)pppppppuVar36 + 1) & 0x7fU) << 7;
                uVar27 = (ulong)uVar25;
                if (*(char *)((long)pppppppuVar36 + 1) < 0) {
                  if (lVar26 == 0) goto LAB_006dd9d4;
                  if (3 < *(byte *)pppppppuVar39) goto LAB_006dda24;
                  uVar27 = (ulong)(uVar25 | (uint)*(byte *)pppppppuVar39 << 0xe);
                  pppppppuVar39 = (uint *******)((long)pppppppuVar36 + 3);
                  lVar26 = (long)pppppppuVar42 + -3;
                }
              }
              local_360 = pppppppuVar35;
              if ((uVar27 & 0xffff) == 0) goto LAB_006dd764;
              if (lVar26 == 0) goto LAB_006dd9d4;
              pppppppuVar19 = (uint *******)(lVar26 + -1);
              pppppppuVar36 = (uint *******)((long)pppppppuVar39 + 1);
              uVar40 = *(byte *)pppppppuVar39 & 0x7f;
              local_100 = pppppppuVar36;
              pppppppuStack_f8 = pppppppuVar19;
              if ((char)*(byte *)pppppppuVar39 < '\0') {
                if (pppppppuVar19 == (uint *******)0x0) goto LAB_006dd9f0;
                pppppppuVar36 = (uint *******)((long)pppppppuVar39 + 2);
                pppppppuVar19 = (uint *******)(lVar26 + -2);
                uVar40 = uVar40 | (*(byte *)((long)pppppppuVar39 + 1) & 0x7f) << 7;
                local_100 = pppppppuVar36;
                pppppppuStack_f8 = pppppppuVar19;
                if ((char)*(byte *)((long)pppppppuVar39 + 1) < '\0') {
                  if (pppppppuVar19 == (uint *******)0x0) goto LAB_006dd9f0;
                  local_100 = (uint *******)((long)pppppppuVar39 + 3);
                  pppppppuStack_f8 = (uint *******)(lVar26 + -3);
                  if (3 < *(byte *)((long)pppppppuVar39 + 2)) goto LAB_006dda24;
                  uVar40 = uVar40 | (uint)*(byte *)((long)pppppppuVar39 + 2) << 0xe;
                }
              }
              uVar25 = uVar40 & 0xffff;
              pppppppuVar19 = (uint *******)(ulong)uVar25;
              if (uVar25 == 0x21) {
                local_420 = pppppppuVar45;
                pppppppuStack_418 = pppppppuVar43;
                pppppuStack_408 = pppppuVar34;
                pppppuStack_3f8 = pppppuVar7;
                pppppuStack_3e8 = pppppuVar8;
                local_3e0 = uVar31;
                local_3d0 = pppppppuVar9;
                FUN_0070d8c0(&local_b8,&local_100);
                uVar29 = (ulong)local_b8 & 0xff;
                pppppppuVar19 = pppppppuStack_b0;
                pppppppuVar45 = local_420;
                pppppppuVar43 = pppppppuStack_418;
                pppppuVar34 = pppppuStack_408;
                pppppuVar7 = pppppuStack_3f8;
                pppppuVar8 = pppppuStack_3e8;
                uVar31 = local_3e0;
                pppppppuVar9 = local_3d0;
                if (uVar29 != 0xff) {
                  uVar17 = (ulong)local_b8 >> 8 & 0xff;
                  uVar40 = (uint)local_b8._2_2_;
                  pppppppuVar19 = (uint *******)((ulong)local_b8 >> 0x20);
                  pppppppuVar21 = pppppppuStack_b0;
                  goto LAB_006dda34;
                }
              }
              else {
                if (uVar25 == 0) {
                  uVar17 = 0;
                  uVar29 = 9;
                  goto LAB_006dda34;
                }
                pppppppuVar19 = (uint *******)0x0;
              }
              local_3d0 = pppppppuVar9;
              local_3e0 = uVar31;
              pppppuStack_3e8 = pppppuVar8;
              pppppuStack_3f8 = pppppuVar7;
              pppppuStack_408 = pppppuVar34;
              pppppppuStack_418 = pppppppuVar43;
              local_420 = pppppppuVar45;
              pppppppuVar21 =
                   (uint *******)
                   ((ulong)(uVar40 << 0x10) |
                   (ulong)pppppppuVar21 & 0xffffffff00000000 | uVar27 & 0xffff);
                    /* try { // try from 006dd740 to 006dd74b has its CatchHandler @ 006dede4 */
              local_b8 = pppppppuVar19;
              pppppppuStack_b0 = pppppppuVar21;
              <gimli::read::abbrev::[6]::gimli::read::abbrev::Attributes>::push
                        (&local_190,&local_b8);
              uVar17 = (ulong)pppppppuVar19 >> 8;
              pppppppuVar39 = (uint *******)((ulong)pppppppuVar19 >> 0x10);
              pppppppuVar19 = (uint *******)((ulong)pppppppuVar19 >> 0x20);
              pppppppuVar42 = pppppppuStack_f8;
              pppppppuVar36 = local_100;
              pppppppuVar10 = pppppppuStack_170;
              pppppuVar11 = pppppuStack_160;
              pppppuVar12 = pppppuStack_150;
              pppppuVar13 = pppppuStack_140;
              pppppppuVar14 = local_190;
              pppppppuVar22 = local_180;
              pppppppuVar41 = local_188;
              pppppppuVar45 = local_420;
              pppppppuVar43 = pppppppuStack_418;
              pppppuVar34 = pppppuStack_408;
              pppppuVar7 = pppppuStack_3f8;
              pppppuVar8 = pppppuStack_3e8;
              uVar31 = local_3e0;
              pppppppuVar9 = local_3d0;
              pppppppuVar35 = local_360;
              local_420 = local_178;
              local_3e0 = local_138;
            } while( true );
          }
          uVar38 = 10;
        }
LAB_006dd9c4:
        uVar3 = (uint6)pppppppuStack_368;
        pppppppuStack_368 = (uint *******)(ulong)(uVar3 & 0xff);
      }
      goto LAB_006dda7c;
    }
    goto LAB_006dd91c;
  }
  uVar38 = 0x13;
  local_200 = pppppppuVar22;
LAB_006ddaa4:
  cVar37 = (char)uVar38;
  local_c8._0_7_ = (undefined7)local_80;
  if (uVar38 != 0xff) {
LAB_006ddbc0:
    *(char *)(param_1 + 1) = cVar37;
    param_1[2] = local_200;
    *(int *)((long)param_1 + 9) = (int)local_c8;
    *(undefined4 *)((long)param_1 + 0xc) = local_c8._3_4_;
    *param_1 = 2;
    return;
  }
LAB_006ddabc:
  local_360 = (uint *******)param_3[2];
  local_358 = (uint *******)param_3[3];
  pppppuStack_330 = (uint *****)param_3[8];
  local_180 = &local_370;
  pppppppuStack_348 = (uint *******)param_3[5];
  pppppppuStack_350 = (uint *******)param_3[4];
  local_338 = (uint *******)param_3[7];
  pppppppuStack_340 = (uint *******)param_3[6];
  local_1f8 = (uint *******)0x0;
  pppppuStack_320 = (uint *****)(ulong)((long)local_360 - 3U < 2);
  bVar16 = (*(uint *)(param_3 + 9) & 0xff00) != 0x800;
  local_1d0 = (uint *******)&DAT_00000010;
  if (bVar16) {
    local_1d0 = (uint *******)&DAT_00000008;
  }
  local_1c0 = (uint *******)&DAT_00000014;
  if (bVar16) {
    local_1c0 = (uint *******)0xc;
  }
  pppppppuStack_368 = (uint *******)param_3[1];
  local_370 = (uint ******)*param_3;
  bVar16 = (4 < *(uint *)(param_3 + 9) >> 0x10 & *(byte *)(param_2 + 0x22)) == 0;
  if (bVar16) {
    local_1d0 = (uint *******)0x0;
  }
  local_328 = (uint *****)param_3[9];
  if (bVar16) {
    local_1c0 = (uint *******)0x0;
  }
  lStack_310 = -2;
  local_178 = local_200 + 2;
  local_1e8 = (uint *******)0x0;
  local_1d8 = (uint *******)0x0;
  local_1c8 = (uint *******)0x0;
  pppppppuStack_170 = (uint *******)0x0;
  local_138 = 0;
  local_318 = local_358;
  local_1b8 = local_1c0;
  local_190 = pppppppuStack_348;
  local_188 = pppppppuStack_340;
  do {
                    /* try { // try from 006ddb94 to 006ddb9f has its CatchHandler @ 006dee34 */
    FUN_006e9da8(&local_3d0,&local_190);
    pppppppuVar22 = pppppppuStack_170;
    if ((char)local_3d0 != -1) {
      param_1[1] = (ulong)local_3d0 & 0xffff |
                   ((ulong)local_3d0 >> 0x10 & 0xffffffff) << 0x10 |
                   (ulong)local_3d0 & 0xffff000000000000;
      param_1[2] = pppppppuStack_3c8;
LAB_006de198:
      *param_1 = 2;
      goto LAB_006de4c4;
    }
    if (((ulong)local_3d0 & 0x100) == 0) {
      if (pppppppuStack_170 == (uint *******)0x0) {
        *(undefined1 *)(param_1 + 1) = 0x45;
        goto LAB_006de198;
      }
      break;
    }
  } while (pppppppuStack_170 == (uint *******)0x0);
  pppppppuVar19 = (uint *******)CONCAT44(uStack_164,local_168);
                    /* try { // try from 006ddc24 to 006ddc27 has its CatchHandler @ 006dee30 */
  auVar46 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(pppppuStack_160);
  auStack_3c0._0_8_ = auVar46._0_8_;
  local_3d0 = pppppppuVar22;
  if (auVar46._8_8_ == 0) {
    pppppppuVar36 = (uint *******)0x0;
    pppppppuVar39 = (uint *******)0xffffffffffffffff;
    pppppppuVar42 = (uint *******)0xffffffffffffffff;
    pppppppuVar35 = (uint *******)&pppppppuStack_170;
    pppppppuVar45 = (uint *******)0xffffffffffffffff;
    pppppppuVar21 = extraout_x9;
    pppppppuVar41 = extraout_x13;
    uVar17 = (ulong)local_328;
    pppppppuVar43 = local_1b0;
    auStack_3c0._0_8_ = pppppuStack_1a8;
    auVar5 = auVar46;
    uVar38 = local_148;
  }
  else {
    pppppppuVar36 = (uint *******)0x0;
    lVar26 = auVar46._8_8_ + -1;
    pppppppuVar45 = (uint *******)0xffffffffffffffff;
    pppppppuVar42 = (uint *******)0xffffffffffffffff;
    pppppppuVar39 = (uint *******)0xffffffffffffffff;
    pppppuVar34 = pppppuStack_320;
    pppppppuStack_3c8 = pppppppuVar19;
    local_3b0 = (uint *******)&pppppppuStack_170;
    do {
      auStack_3c0._8_8_ = auVar46._8_8_;
      puVar1 = auVar46._0_8_;
      puVar44 = puVar1 + 2;
      pppppppuStack_418 = (uint *******)puVar1[1];
      local_420 = (uint *******)*puVar1;
      FUN_006c753c(&local_480,&local_3d0,*(undefined4 *)(local_3b0[3] + 9),&local_420);
      if (local_480 == (uint *******)0xffffffffffffffff) {
        pppppppuStack_128 = pppppppuStack_470;
        local_130 = pppppppuStack_478;
        param_1[2] = pppppppuStack_470;
        param_1[1] = pppppppuStack_478;
        *param_1 = 2;
        goto LAB_006de4c4;
      }
      uVar38 = (uint)local_468 & 0xffff;
      pppppppuStack_128 = pppppppuStack_470;
      local_130 = pppppppuStack_478;
      pppppppuVar21 = local_480;
      pppppppuVar41 = extraout_x13_01;
      auStack_3c0._0_8_ = puVar44;
      auStack_3c0._8_8_ = lVar26;
      if (uVar38 < 0x73) {
        if (uVar38 < 0x11) {
          if (uVar38 == 3) {
            FUN_006e8254(&local_420,&local_480);
            pppppuStack_1a8 = local_410;
            local_1b0 = pppppppuStack_418;
            pppppppuVar21 = extraout_x9_00;
            pppppppuVar41 = extraout_x13_00;
            pppppppuVar45 = local_420;
          }
          else if ((uVar38 == 0x10) &&
                  (FUN_006e8254(&local_420,&local_480), pppppppuVar21 = pppppppuStack_418,
                  pppppppuVar41 = extraout_x13_05, local_420 == (uint *******)&DAT_00000010)) {
            pppppppuVar36 = (uint *******)0x1;
            local_4b8 = pppppppuStack_418;
          }
        }
        else if (uVar38 == 0x11) {
          FUN_006e8254(&local_420,&local_480);
          local_4c8 = pppppppuStack_418;
          pppppppuVar21 = extraout_x9_06;
          pppppppuVar41 = extraout_x13_08;
          pppppppuVar39 = local_420;
        }
        else if (uVar38 == 0x1b) {
          FUN_006e8254(&local_420,&local_480);
          pppppuStack_198 = local_410;
          local_1a0 = pppppppuStack_418;
          pppppppuVar21 = extraout_x9_05;
          pppppppuVar41 = extraout_x13_07;
          pppppppuVar42 = local_420;
        }
        else if ((uVar38 == 0x72) &&
                (FUN_006e8254(&local_420,&local_480), pppppppuVar21 = extraout_x9_02,
                pppppppuVar41 = extraout_x13_03, local_420 == (uint *******)0x1c)) {
          local_1d0 = pppppppuStack_418;
          pppppppuVar21 = extraout_x9_02;
        }
      }
      else if (uVar38 < 0x2131) {
        if (uVar38 == 0x73) {
LAB_006ddd94:
          FUN_006e8254(&local_420,&local_480);
          pppppppuVar21 = extraout_x9_03;
          pppppppuVar41 = extraout_x13_04;
          if (local_420 == (uint *******)0xb) {
            local_1c8 = pppppppuStack_418;
            pppppppuVar21 = extraout_x9_03;
          }
        }
        else if (uVar38 == 0x74) {
LAB_006dddf0:
          FUN_006e8254(&local_420,&local_480);
          pppppppuVar21 = extraout_x9_04;
          pppppppuVar41 = extraout_x13_06;
          if (local_420 == (uint *******)0x17) {
            local_1b8 = pppppppuStack_418;
            pppppppuVar21 = extraout_x9_04;
          }
        }
        else if ((uVar38 == 0x8c) &&
                (FUN_006e8254(&local_420,&local_480), pppppppuVar21 = extraout_x9_01,
                pppppppuVar41 = extraout_x13_02, local_420 == (uint *******)0x12)) {
          local_1c0 = pppppppuStack_418;
          pppppppuVar21 = extraout_x9_01;
        }
      }
      else if (uVar38 == 0x2131) {
        pppppppuVar21 = (uint *******)0x2131;
        if (pppppuVar34 == (uint *****)0x0) {
          FUN_006e8254(&local_420,&local_480);
          pppppppuVar41 = extraout_x13_09;
          if (local_420 == (uint *******)0x2d) {
            local_318 = pppppppuStack_418;
            pppppuVar34 = (uint *****)0x1;
            pppppuStack_320 = (uint *****)0x1;
            pppppppuVar21 = (uint *******)0x1;
          }
          else {
            pppppuVar34 = (uint *****)0x0;
            pppppppuVar21 = extraout_x9_07;
          }
        }
      }
      else {
        if (uVar38 == 0x2132) goto LAB_006dddf0;
        pppppppuVar21 = (uint *******)0x2133;
        if (uVar38 == 0x2133) goto LAB_006ddd94;
      }
      auVar5._8_8_ = auStack_3c0._8_8_;
      auVar5._0_8_ = auStack_3c0._0_8_;
      auVar46._8_8_ = auStack_3c0._8_8_;
      auVar46._0_8_ = puVar44;
      lVar26 = lVar26 + -1;
    } while (lVar26 != -1);
    uVar38 = *(uint *)(local_3b0 + 5);
    pppppppuVar35 = local_3b0;
    pppppppuVar22 = local_3d0;
    uVar17 = (ulong)local_328;
    pppppppuVar43 = local_1b0;
    auStack_3c0._0_8_ = pppppuStack_1a8;
    pppppppuVar19 = pppppppuStack_3c8;
  }
  pppppppuStack_3c8 = pppppppuVar43;
  local_3d0 = pppppppuVar45;
  if ((uVar38 & 1) == 0) {
    pppppppuVar21 = (uint *******)*pppppppuVar35;
    pppppppuVar35[5] = (uint ******)0x1;
    pppppppuVar35[6] = (uint ******)((long)pppppppuVar22 - (long)pppppppuVar21);
  }
  auStack_3c0._8_8_ = auVar5._8_8_;
  local_3b0 = pppppppuVar35;
  local_328 = (uint *****)uVar17;
  local_1b0 = pppppppuStack_3c8;
  pppppuStack_1a8 = (uint *****)auStack_3c0._0_8_;
  local_130 = local_4b0;
  pppppppuStack_128 = pppppppuStack_4a8;
  if (local_3d0 != (uint *******)0xffffffffffffffff) {
    local_328._1_1_ = (undefined1)(uVar17 >> 8);
    uVar6 = local_328._1_1_;
    FUN_006d8310(&local_190,param_2,uVar6,local_1d0,&local_3d0);
    auVar5._8_8_ = auStack_3c0._8_8_;
    auVar5._0_8_ = auStack_3c0._0_8_;
    local_1f8 = (uint *******)0x0;
    if ((int)local_190 == 0) {
      local_1f8 = local_188;
    }
    pppppppuVar21 = local_188;
    pppppppuVar41 = extraout_x13_10;
    pppppppuVar35 = local_180;
    pppppppuVar19 = pppppppuStack_3c8;
    if (pppppppuVar42 != (uint *******)0xffffffffffffffff) goto LAB_006ddf10;
LAB_006ddfbc:
    pppppppuStack_3c8 = pppppppuVar19;
    local_1e8 = (uint *******)0x0;
    pppppppuVar22 = local_1f8;
    local_1f0 = pppppppuVar35;
    if (pppppppuVar36 == (uint *******)0x0) goto LAB_006ddfc8;
LAB_006ddf58:
    pppppppuVar42 = local_1e8;
    local_520 = (uint *******)param_2[8];
    uVar17 = (long)param_2[9] - (long)local_4b8;
    if ((uint *******)param_2[9] < local_4b8) {
      uVar17 = 0x13;
    }
    else {
      local_520 = (uint *******)((long)local_520 + (long)local_4b8);
      if (uVar17 < 4) goto LAB_006de4a8;
      pppppppuVar19 = (uint *******)((long)local_520 + 4);
      uVar38 = *(uint *)local_520;
      uStack_4f0 = (ulong)uVar38;
      if (uVar38 < 0xfffffff0) {
        local_4d8 = 4;
        if (uVar17 - 4 < uStack_4f0) goto LAB_006de2b8;
LAB_006de208:
        local_c0 = uStack_4f0;
        if (uStack_4f0 < 2) goto LAB_006de2b8;
        local_520 = (uint *******)((long)pppppppuVar19 + 2);
        local_4c0 = *(ushort *)pppppppuVar19;
        if (local_4c0 - 6 < 0xfffffffc) {
          uVar17 = 0x11;
          local_520 = (uint *******)(ulong)local_4c0;
        }
        else {
          uVar17 = uStack_4f0 - 2;
          bStack_4d4 = (byte)local_328;
          if (local_4c0 < 5) {
LAB_006de438:
            if (uVar38 < 0xfffffff0) {
              if (uVar17 < 4) goto LAB_006de4a8;
              pppppppuVar19 = (uint *******)((long)local_520 + 4);
              local_4d0 = (ulong)*(uint *)local_520;
              lVar26 = -4;
              local_520 = pppppppuVar19;
            }
            else {
              if (uVar17 < 8) {
LAB_006de4a8:
                param_2 = (undefined8 *)0x0;
                uVar17 = 0x13;
                goto LAB_006de4ac;
              }
              pppppppuVar19 = local_520 + 1;
              local_4d0 = ((ulong)*(uint *)local_520 << 8 |
                          (ulong)*(uint3 *)((long)local_520 + 4) << 0x28) >> 8 |
                          (ulong)*(byte *)((long)local_520 + 7) << 0x38;
              lVar26 = -8;
            }
            local_4f8 = (uVar17 + lVar26) - local_4d0;
            local_c8 = pppppppuVar19;
            if (uVar17 + lVar26 < local_4d0) {
              uVar17 = 0x13;
              local_520 = pppppppuVar19;
            }
            else if (local_4d0 == 0) {
              param_2 = (undefined8 *)0x0;
              uVar17 = 0x13;
              local_520 = pppppppuVar19;
            }
            else {
              uVar30 = local_4d0 - 1;
              pppppppuVar36 = (uint *******)((long)pppppppuVar19 + 1);
              local_4fc = *(char *)pppppppuVar19;
              local_c0 = uVar30;
              if (local_4fc == '\0') {
                uVar17 = 0x1c;
              }
              else {
                if (local_4c0 < 4) {
                  local_500 = '\x01';
LAB_006de5f4:
                  local_c0 = uVar30;
                  if (uVar30 != 0) {
                    local_c8 = (uint *******)((long)pppppppuVar36 + 1);
                    pppppppuVar21 = local_c8;
                    if (uVar30 != 1) {
                      uVar31 = uVar30 - 2;
                      local_c0 = uVar31;
                      if (uVar31 != 0) {
                        pppppppuVar21 = (uint *******)((long)pppppppuVar36 + 3);
                        local_504 = *(undefined1 *)((long)pppppppuVar36 + 1);
                        local_508 = *(char *)((long)pppppppuVar36 + 2);
                        local_520 = pppppppuVar21;
                        local_c8 = pppppppuVar21;
                        if (local_508 == '\0') {
                          uVar17 = 0x1e;
                          goto LAB_006de4ac;
                        }
                        local_50c = *(char *)pppppppuVar36 != '\0';
                        if (uVar30 == 3) goto LAB_006de6d0;
                        local_510 = *(char *)((long)pppppppuVar36 + 3);
                        if (local_510 == '\0') {
                          uVar17 = 0x1f;
                        }
                        else {
                          local_528 = (ulong)(byte)(local_510 - 1);
                          local_c0 = (uVar30 - 4) - local_528;
                          local_520 = (uint *******)((long)pppppppuVar36 + 4);
                          if (uVar30 - 4 < local_528) {
                            param_2 = (undefined8 *)0x0;
                            uVar17 = 0x13;
                            local_c0 = uVar31;
                          }
                          else {
                            local_a8 = (uint *******)0x0;
                            local_c8 = (uint *******)((long)pppppppuVar36 + local_528 + 4);
                            local_b8 = (uint *******)0x0;
                            pppppppuStack_b0 = (uint *******)&DAT_00000008;
                            auStack_3c0 = auVar5;
                            if (local_4c0 < 5) {
                              pppppppuVar21 = (uint *******)(ulong)local_4c0;
                              if (local_c0 != 0) {
                                puVar24 = (undefined1 *)((long)pppppppuVar36 + uVar30);
                                pppppppuVar36 = (uint *******)&DAT_00000008;
                                local_518 = (uint *******)&DAT_00000002;
                                pppppppuVar21 = &local_370;
                                do {
                                  pppppppuVar43 = local_a8;
                                  pppppppuVar45 = local_c8;
                                  ppppppuVar23 = (uint ******)0x0;
                                  while (*(char *)((long)local_c8 + (long)ppppppuVar23) != '\0') {
                                    ppppppuVar23 = (uint ******)((long)ppppppuVar23 + 1);
                                    if ((undefined1 *)((long)local_c8 + (long)ppppppuVar23) ==
                                        puVar24) goto LAB_006de8ac;
                                  }
                                  local_c8 = (uint *******)((long)local_c8 + (long)ppppppuVar23 + 1)
                                  ;
                                  local_c0 = ~(ulong)ppppppuVar23 + local_c0;
                                  if (ppppppuVar23 == (uint ******)0x0) {
                                    local_538 = (uint *******)0x0;
                                    local_530 = (uint *******)0x0;
                                    goto joined_r0x006de970;
                                  }
                                  if (local_a8 == local_b8) {
                    /* try { // try from 006de780 to 006de787 has its CatchHandler @ 006ded24 */
                                    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>
                                    ::grow_one(&local_b8);
                                    pppppppuVar36 = pppppppuStack_b0;
                                  }
                                  pppppppuVar21 = pppppppuVar36 + (long)pppppppuVar43 * 3;
                                  local_a8 = (uint *******)((long)pppppppuVar43 + 1);
                                  *pppppppuVar21 = (uint ******)0x1f;
                                  pppppppuVar21[1] = (uint ******)pppppppuVar45;
                                  pppppppuVar21[2] = ppppppuVar23;
                                  puVar24 = (undefined1 *)((long)local_c8 + local_c0);
                                  pppppppuVar21 = pppppppuVar45;
                                } while (local_c0 != 0);
                              }
LAB_006de8ac:
                              local_530 = (uint *******)0x0;
                              param_2 = (undefined8 *)((ulong)pppppppuVar21 >> 8);
                              uVar17 = 0x13;
                              local_518 = (uint *******)&DAT_00000002;
                              local_520 = local_c8;
LAB_006de8c0:
                              if (local_b8 != (uint *******)0x0) {
                                __rustc::__rust_dealloc(pppppppuStack_b0,(long)local_b8 * 0x18,8);
                              }
                            }
                            else {
                    /* try { // try from 006de7bc to 006de7c7 has its CatchHandler @ 006ded84 */
                              FUN_006c2130(&local_190,&local_c8);
                              local_538 = local_180;
                              local_518 = local_188;
                              local_530 = local_190;
                              if (local_190 == (uint *******)0xffffffffffffffff) {
                                param_2 = (undefined8 *)((ulong)local_188 >> 8);
                                uVar17 = (ulong)((uint)local_188 & 0xff);
                                local_520 = local_180;
                                auVar5 = auStack_3c0;
                                goto LAB_006de4ac;
                              }
                              FUN_0070db00(&local_190,&local_c8);
                              local_548 = local_188;
                              uVar17 = (ulong)local_190 & 0xff;
                              if ((char)local_190 == -1) {
                                if (local_188 == (uint *******)0x0) {
                                  pppppppuVar42 = (uint *******)0x0;
LAB_006deadc:
                    /* try { // try from 006deadc to 006deae7 has its CatchHandler @ 006ded18 */
                                  local_90 = (uint *******)0x0;
                                  ppppppuStack_98 = (uint ******)0x8;
                                  local_a0 = (uint *******)0x0;
                                  FUN_006c2130(&local_190,&local_c8);
                                  pppppppuVar36 = local_180;
                                  pppppppuVar21 = local_188;
                                  local_548 = local_190;
                                  local_540 = local_188;
                                  if (local_190 == (uint *******)0xffffffffffffffff) {
                                    bVar16 = false;
                                    uVar17 = (ulong)((uint)local_188 & 0xff);
                                    local_550 = local_188;
                                    local_520 = local_180;
                                    goto LAB_006deca0;
                                  }
                                  FUN_0070db00(&local_190,&local_c8);
                                  pppppppuVar45 = local_188;
                                  uVar17 = (ulong)local_190 & 0xff;
                                  if ((char)local_190 == -1) {
                                    if (local_188 != (uint *******)0x0) {
                                      lVar26 = 0;
                                      pppppppuVar43 = (uint *******)0x0;
                                      local_560 = (uint ******)0x8;
                                      do {
                    /* try { // try from 006deb88 to 006debef has its CatchHandler @ 006ded3c */
                                        FUN_006c6918(&local_190,&local_c8,
                                                     (uint)bStack_4d4 | local_4d8 << 8 | 0x50000,
                                                     pppppppuVar21,pppppppuVar36);
                                        pppppppuVar14 = local_180;
                                        pppppppuVar10 = local_188;
                                        pppppppuVar9 = local_190;
                                        local_550 = local_188;
                                        if (local_190 == (uint *******)0xffffffffffffffff) {
                                          bVar16 = true;
                                          uVar17 = (ulong)((uint)local_188 & 0xff);
                                          local_520 = local_180;
                                          goto LAB_006deca0;
                                        }
                                        pppppppuStack_3c8 = pppppppuStack_170;
                                        local_3d0 = local_178;
                                        auStack_3c0._8_8_ = pppppuStack_160;
                                        auStack_3c0._0_8_ = CONCAT44(uStack_164,local_168);
                                        pppppuStack_3a8 = pppppuStack_150;
                                        local_3b0 = (uint *******)CONCAT44(uStack_154,local_158);
                                        local_398 = pppppuStack_140;
                                        pppppuStack_3a0 = (uint *****)CONCAT44(uStack_144,local_148)
                                        ;
                                        if (pppppppuVar43 == local_a0) {
                                          <alloc[cc0d62b833a55794]::raw_vec::RawVec<gimli[d400ddce60e1bc02]::read::line::FileEntry<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>,usize>>>
                                          ::grow_one(&local_a0);
                                          local_560 = ppppppuStack_98;
                                        }
                                        pppppppuVar43 = (uint *******)((long)pppppppuVar43 + 1);
                                        puVar1 = (undefined8 *)((long)local_560 + lVar26);
                                        lVar26 = lVar26 + 0x58;
                                        *puVar1 = pppppppuVar9;
                                        puVar1[1] = pppppppuVar10;
                                        puVar1[2] = pppppppuVar14;
                                        puVar1[10] = local_398;
                                        puVar1[9] = pppppuStack_3a0;
                                        puVar1[8] = pppppuStack_3a8;
                                        puVar1[7] = local_3b0;
                                        puVar1[6] = auStack_3c0._8_8_;
                                        puVar1[5] = auStack_3c0._0_8_;
                                        puVar1[4] = pppppppuStack_3c8;
                                        puVar1[3] = local_3d0;
                                        local_90 = pppppppuVar43;
                                      } while (pppppppuVar45 != pppppppuVar43);
                                    }
                                    lVar26 = -1;
LAB_006dec34:
                                    pppppuStack_408 = (uint *****)0x0;
                                    local_400 = (uint *****)0x0;
                                    local_410 = (uint *****)0x0;
                                    local_498 = (uint *******)0x0;
                                    local_4a0 = (uint *******)0x0;
                                    ppppppuStack_490 = (uint ******)0x0;
                                    pppppppuVar19 = (uint *******)((long)pppppppuVar19 + local_4d0);
                                    local_4b0 = local_420;
                                    pppppppuStack_4a8 = pppppppuStack_418;
                                    local_120 = local_a0;
                                    ppppppuStack_118 = ppppppuStack_98;
                                    local_110 = local_90;
                                    local_100 = local_b8;
                                    pppppppuStack_f8 = pppppppuStack_b0;
                                    local_f0 = local_a8;
                                    local_e0 = local_80;
                                    uStack_d8 = uStack_78;
                                    goto joined_r0x006ddfd8;
                                  }
                                  param_2 = (undefined8 *)((ulong)local_190 >> 8);
                                  local_520 = local_188;
                                }
                                else {
                                  lVar26 = 0;
                                  pppppppuVar36 = (uint *******)0x0;
                                  uVar38 = (uint)bStack_4d4 | local_4d8 << 8;
                                  local_550 = (uint *******)CONCAT44(local_550._4_4_,uVar38);
                                  local_540 = (uint *******)&DAT_00000008;
                                  do {
                    /* try { // try from 006de858 to 006de89f has its CatchHandler @ 006ded90 */
                                    FUN_006c745c(&local_190,&local_c8,uVar38 | 0x50000,local_518,
                                                 local_538);
                                    pppppppuVar45 = local_180;
                                    pppppppuVar21 = local_188;
                                    pppppppuVar42 = local_190;
                                    if (local_190 == (uint *******)0xffffffffffffffff) {
                                      param_2 = (undefined8 *)((ulong)local_188 >> 8);
                                      uVar17 = (ulong)((uint)local_188 & 0xff);
                                      local_520 = local_180;
                                      goto LAB_006de8c0;
                                    }
                                    if (pppppppuVar36 == local_b8) {
                                      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>
                                      ::grow_one(&local_b8);
                                      local_540 = pppppppuStack_b0;
                                    }
                                    pppppppuVar36 = (uint *******)((long)pppppppuVar36 + 1);
                                    puVar1 = (undefined8 *)((long)local_540 + lVar26);
                                    lVar26 = lVar26 + 0x18;
                                    *puVar1 = pppppppuVar42;
                                    puVar1[1] = pppppppuVar21;
                                    puVar1[2] = pppppppuVar45;
                                    local_a8 = pppppppuVar36;
                                  } while (local_548 != pppppppuVar36);
                                  pppppppuVar42 = (uint *******)0x0;
joined_r0x006de970:
                                  if (4 < local_4c0) goto LAB_006deadc;
                                  local_90 = (uint *******)0x0;
                                  ppppppuStack_98 = (uint ******)0x8;
                                  local_a0 = (uint *******)0x0;
                                  if (pppppppuVar22 == (uint *******)0x0) {
                                    lVar26 = -1;
                                  }
                                  else {
                                    lVar26 = 0x1f;
                                    local_80 = 0;
                                    uStack_78 = 0;
                                  }
                                  if (local_c0 != 0) {
                                    puVar24 = (undefined1 *)((long)local_c8 + local_c0);
                                    local_558 = (uint ******)0x8;
                                    local_540 = (uint *******)&DAT_00000002;
                                    do {
                                      pppppppuVar21 = local_90;
                                      pppppppuVar36 = local_c8;
                                      uVar17 = 0;
                                      local_550 = local_548;
                                      local_548 = local_c8;
                                      while (*(char *)((long)local_c8 + uVar17) != '\0') {
                                        uVar17 = uVar17 + 1;
                                        if ((undefined1 *)((long)local_c8 + uVar17) == puVar24)
                                        goto LAB_006deaa8;
                                      }
                                      local_c0 = ~uVar17 + local_c0;
                                      local_c8 = (uint *******)((long)local_c8 + uVar17 + 1);
                                      if (uVar17 == 0) {
                                        local_548 = (uint *******)0x0;
                                        pppppppuVar36 = (uint *******)0x0;
                                        goto LAB_006dec34;
                                      }
                                      FUN_006e99dc(&local_190,&local_c8,pppppppuVar36);
                                      pppppppuVar9 = local_180;
                                      pppppppuVar43 = local_188;
                                      pppppppuVar45 = local_190;
                                      local_550 = local_188;
                                      if (local_190 == (uint *******)0xffffffffffffffff) {
                                        uVar17 = (ulong)((uint)local_188 & 0xff);
                                        local_520 = local_180;
                                        goto LAB_006deab4;
                                      }
                                      pppppppuStack_470 =
                                           (uint *******)CONCAT44(uStack_164,local_168);
                                      local_460 = (uint *****)CONCAT44(uStack_154,local_158);
                                      pppppppuStack_478 = pppppppuStack_170;
                                      local_480 = local_178;
                                      local_468 = pppppuStack_160;
                                      pppppuStack_450 = (uint *****)CONCAT44(uStack_144,local_148);
                                      pppppuStack_458 = pppppuStack_150;
                                      pppppuStack_448 = pppppuStack_140;
                                      if (pppppppuVar21 == local_a0) {
                    /* try { // try from 006dea44 to 006dea4b has its CatchHandler @ 006ded04 */
                                        <alloc[cc0d62b833a55794]::raw_vec::RawVec<gimli[d400ddce60e1bc02]::read::line::FileEntry<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>,usize>>>
                                        ::grow_one(&local_a0);
                                        local_558 = ppppppuStack_98;
                                      }
                                      ppppppuVar23 = local_558 + (long)pppppppuVar21 * 0xb;
                                      local_90 = (uint *******)((long)pppppppuVar21 + 1);
                                      local_550 = pppppppuVar36;
                                      *ppppppuVar23 = (uint *****)pppppppuVar45;
                                      ppppppuVar23[1] = (uint *****)pppppppuVar43;
                                      ppppppuVar23[2] = (uint *****)pppppppuVar9;
                                      ppppppuVar23[4] = (uint *****)pppppppuStack_478;
                                      ppppppuVar23[3] = (uint *****)local_480;
                                      ppppppuVar23[10] = pppppuStack_448;
                                      ppppppuVar23[9] = pppppuStack_450;
                                      ppppppuVar23[8] = pppppuStack_458;
                                      ppppppuVar23[7] = local_460;
                                      ppppppuVar23[6] = local_468;
                                      ppppppuVar23[5] = (uint *****)pppppppuStack_470;
                                      puVar24 = (undefined1 *)((long)local_c8 + local_c0);
                                    } while (local_c0 != 0);
                                  }
LAB_006deaa8:
                                  uVar17 = 0x13;
                                  local_520 = local_c8;
LAB_006deab4:
                                  local_548 = (uint *******)0x0;
                                  bVar16 = true;
                                  local_540 = (uint *******)&DAT_00000002;
LAB_006deca0:
                                  if (local_a0 != (uint *******)0x0) {
                                    __rustc::__rust_dealloc(ppppppuStack_98,(long)local_a0 * 0x58,8)
                                    ;
                                  }
                                  param_2 = (undefined8 *)((ulong)local_550 >> 8);
                                  if (!bVar16) goto LAB_006de8c0;
                                }
                                if (local_548 != (uint *******)0x0) {
                                  __rustc::__rust_dealloc(local_540,(long)local_548 << 2,2);
                                }
                                goto LAB_006de8c0;
                              }
                              param_2 = (undefined8 *)((ulong)local_190 >> 8);
                              local_520 = local_188;
                            }
                            auVar5 = auStack_3c0;
                            if (local_530 != (uint *******)0x0) {
                              __rustc::__rust_dealloc(local_518,(long)local_530 << 2,2);
                              auVar5 = auStack_3c0;
                            }
                          }
                        }
                        goto LAB_006de4ac;
                      }
                      pppppppuVar21 = (uint *******)((long)pppppppuVar36 + 2);
                    }
LAB_006de6d0:
                    param_2 = (undefined8 *)0x0;
                    uVar17 = 0x13;
                    local_520 = pppppppuVar21;
                    goto LAB_006de4ac;
                  }
                }
                else if (uVar30 != 0) {
                  uVar30 = local_4d0 - 2;
                  local_500 = *(char *)((long)pppppppuVar19 + 1);
                  if (local_500 == '\0') {
                    uVar17 = 0x1d;
                    local_c0 = uVar30;
                    goto LAB_006de4ac;
                  }
                  pppppppuVar36 = (uint *******)((long)pppppppuVar19 + 2);
                  goto LAB_006de5f4;
                }
                param_2 = (undefined8 *)0x0;
                uVar17 = 0x13;
                local_520 = pppppppuVar36;
              }
            }
          }
          else if (uVar17 == 0) {
            uVar17 = 0x13;
            param_2 = (undefined8 *)0x0;
          }
          else {
            bStack_4d4 = *(byte *)((long)pppppppuVar19 + 2);
            uVar17 = 0x19;
            if (((byte)(bStack_4d4 - 1) < (byte)(bStack_4d4 ^ bStack_4d4 - 1)) &&
               ((bStack_4d4 & 0xf) != 0)) {
              if (uStack_4f0 == 3) {
                local_520 = (uint *******)((long)pppppppuVar19 + 3);
                goto LAB_006de4a8;
              }
              uVar17 = uStack_4f0 - 4;
              local_c0 = uVar17;
              if (*(char *)((long)pppppppuVar19 + 3) == '\0') {
                local_520 = (uint *******)((long)pppppppuVar19 + 4);
                goto LAB_006de438;
              }
              uVar17 = 0x44;
            }
            else {
              param_2 = (undefined8 *)(ulong)bStack_4d4;
            }
          }
        }
      }
      else {
        if (uVar38 != 0xffffffff) {
          param_2 = (undefined8 *)0x0;
          uVar17 = 0x10;
          goto LAB_006de4ac;
        }
        if (7 < uVar17 - 4) {
          local_4d8 = 8;
          uStack_4f0 = ((ulong)*(uint *)((long)local_520 + 4) << 8 |
                       (ulong)*(uint3 *)(local_520 + 1) << 0x28) >> 8 |
                       (ulong)*(byte *)((long)local_520 + 0xb) << 0x38;
          pppppppuVar19 = (uint *******)((long)local_520 + 0xc);
          if (uStack_4f0 <= uVar17 - 0xc) goto LAB_006de208;
        }
LAB_006de2b8:
        param_2 = (undefined8 *)0x0;
        uVar17 = 0x13;
        local_520 = pppppppuVar19;
      }
LAB_006de4ac:
      uVar17 = uVar17 | (long)param_2 << 8;
    }
    param_1[1] = uVar17;
    param_1[2] = local_520;
    *param_1 = 2;
    auStack_3c0 = auVar5;
    goto LAB_006de4c4;
  }
  local_1f8 = (uint *******)0x0;
  local_3d0 = pppppppuVar22;
  if (pppppppuVar42 == (uint *******)0xffffffffffffffff) goto LAB_006ddfbc;
LAB_006ddf10:
  pppppppuVar22 = local_1f8;
  auStack_3c0._0_8_ = pppppuStack_198;
  pppppppuStack_3c8 = local_1a0;
  local_3d0 = pppppppuVar42;
  local_1f0 = pppppppuVar35;
  FUN_006d8310(&local_190,param_2,local_328._1_1_,local_1d0,&local_3d0);
  auVar5._8_8_ = auStack_3c0._8_8_;
  auVar5._0_8_ = auStack_3c0._0_8_;
  local_1e0 = local_180;
  local_1e8 = (uint *******)0x0;
  if ((int)local_190 == 0) {
    local_1e8 = local_188;
  }
  pppppppuVar21 = local_188;
  pppppppuVar41 = local_180;
  if (pppppppuVar36 != (uint *******)0x0) goto LAB_006ddf58;
LAB_006ddfc8:
  lVar26 = -2;
  local_4c0 = 0;
  local_4b8 = pppppppuVar21;
  pppppppuVar19 = pppppppuVar35;
  pppppppuVar42 = local_1e8;
  pppppppuVar35 = local_4e8;
  pppppppuVar41 = local_4e0;
  auStack_3c0 = auVar5;
joined_r0x006ddfd8:
  if (lStack_310 != -2) {
    if (local_2b8 != (uint *******)0x0) {
      __rustc::__rust_dealloc(local_2b0,(long)local_2b8 << 2,2);
    }
    if (local_2a0 != (uint *******)0x0) {
      __rustc::__rust_dealloc(pppppppuStack_298,(long)local_2a0 * 0x18,8);
    }
    if (local_288 != (uint *******)0x0) {
      __rustc::__rust_dealloc(local_280,(long)local_288 << 2,2);
    }
    if (local_270 != (uint *******)0x0) {
      __rustc::__rust_dealloc(ppppppuStack_268,(long)local_270 * 0x58,8);
    }
  }
  local_2f8 = 0xffffffffffffffff;
  pppppppuStack_2e8 = pppppppuStack_4a8;
  local_2f0 = local_4b0;
  pppppppuStack_2d8 = local_498;
  pppppppuStack_2e0 = local_4a0;
  local_2d0 = ppppppuStack_490;
  uStack_2c0 = uStack_d8;
  local_2c8 = local_e0;
  pppppppuStack_298 = pppppppuStack_f8;
  local_2a0 = local_100;
  local_290 = local_f0;
  ppppppuStack_268 = ppppppuStack_118;
  local_270 = local_120;
  local_260 = local_110;
  local_20f = (undefined1)local_4d8;
  pppppppuVar21 = local_1d8;
  lStack_310 = lVar26;
  local_308 = pppppppuVar22;
  local_300 = pppppppuVar35;
  local_2b8 = local_530;
  local_2b0 = local_518;
  local_2a8 = local_538;
  local_288 = local_548;
  local_280 = local_540;
  local_278 = pppppppuVar36;
  local_258 = local_520;
  local_250 = local_528;
  local_248 = pppppppuVar19;
  local_240 = local_4f8;
  local_238 = local_4b8;
  local_230 = uStack_4f0;
  local_228 = local_4d0;
  local_220 = pppppppuVar42;
  local_218 = pppppppuVar41;
  local_210 = bStack_4d4;
  local_20e = local_4c0;
  local_20c = local_50c;
  local_20b = local_4fc;
  local_20a = local_500;
  local_209 = local_504;
  local_208 = local_508;
  local_207 = local_510;
  if (((pppppppuVar39 == (uint *******)0xffffffffffffffff) ||
      (pppppppuVar21 = local_4c8, pppppppuVar39 == (uint *******)0x0)) ||
     (pppppppuVar21 = local_1d8, pppppppuVar39 != (uint *******)0xc)) goto LAB_006de1e4;
  puVar20 = (uint *)param_2[2];
  pppppppuVar22 = (uint *******)param_2[3];
  uVar17 = (long)pppppppuVar22 - (long)local_1c8;
  if (pppppppuVar22 < local_1c8) {
LAB_006de178:
    uVar27 = 0x13;
  }
  else {
    pppppppuVar22 = (uint *******)((ulong)local_328 & 0xff);
    puVar20 = (uint *)((long)puVar20 + (long)local_1c8);
    uVar31 = (long)local_4c8 * (long)pppppppuVar22;
    uVar30 = uVar17 - uVar31;
    if (uVar17 < uVar31) goto LAB_006de178;
    if ((byte)((byte)local_328 - 1) < (byte)((byte)local_328 ^ (byte)local_328 - 1)) {
      uVar38 = ((byte)local_328 & 0xaaaaaaaa) >> 1 | ((byte)local_328 & 0x55555555) << 1;
      uVar38 = (uVar38 & 0xcccccccc) >> 2 | (uVar38 & 0x33333333) << 2;
      puVar20 = (uint *)((long)puVar20 + uVar31);
      uVar27 = 0x19;
      uVar38 = (uint)LZCOUNT((uVar38 >> 4 | (uVar38 & 0xf0f0f0f) << 4) << 0x18);
      if (uVar38 < 2) {
        if (uVar38 == 0) {
          if (uVar17 != uVar31) {
            pppppppuVar21 = (uint *******)(ulong)(byte)*puVar20;
LAB_006de1e4:
            local_1d8 = pppppppuVar21;
            memcpy(param_1,&local_370,0x1c0);
            return;
          }
        }
        else {
          if (uVar38 != 1) goto LAB_006de17c;
          if (1 < uVar30) {
            pppppppuVar21 = (uint *******)(ulong)(ushort)*puVar20;
            goto LAB_006de1e4;
          }
        }
      }
      else if (uVar38 == 2) {
        if (3 < uVar30) {
          pppppppuVar21 = (uint *******)(ulong)*puVar20;
          goto LAB_006de1e4;
        }
      }
      else {
        if (uVar38 != 3) goto LAB_006de17c;
        if (7 < uVar30) {
          pppppppuVar21 =
               (uint *******)
               (((ulong)*puVar20 << 8 | (ulong)(uint3)puVar20[1] << 0x28) >> 8 |
               (ulong)*(byte *)((long)puVar20 + 7) << 0x38);
          goto LAB_006de1e4;
        }
      }
      pppppppuVar22 = (uint *******)0x0;
      uVar27 = 0x13;
    }
    else {
      uVar27 = 0x19;
    }
  }
LAB_006de17c:
  param_1[1] = uVar27 | ((ulong)pppppppuVar22 & 0xff) << 8;
  param_1[2] = puVar20;
  *param_1 = 2;
LAB_006de4c4:
  do {
    ppppppuVar23 = *local_200;
    cVar37 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(local_200,0x10);
    if (bVar16) {
      *local_200 = (uint ******)((long)ppppppuVar23 + -1);
      cVar37 = ExclusiveMonitorsStatus();
    }
  } while (cVar37 != '\0');
  if ((uint ******)((long)ppppppuVar23 + -1) == (uint ******)0x0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 006de4dc to 006de4e3 has its CatchHandler @ 006dee18 */
    <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow(&local_200);
  }
  if (lStack_310 != -2) {
    if (local_2b8 != (uint *******)0x0) {
      __rustc::__rust_dealloc(local_2b0,(long)local_2b8 << 2,2);
    }
    if (local_2a0 != (uint *******)0x0) {
      __rustc::__rust_dealloc(pppppppuStack_298,(long)local_2a0 * 0x18,8);
    }
    if (local_288 != (uint *******)0x0) {
      __rustc::__rust_dealloc(local_280,(long)local_288 << 2,2);
    }
    if (local_270 != (uint *******)0x0) {
      __rustc::__rust_dealloc(ppppppuStack_268,(long)local_270 * 0x58,8);
    }
  }
  return;
code_r0x006dd4a8:
  lVar28 = lVar28 + -1;
  lVar26 = *(long *)(lVar26 + uVar31 * 8 + 0x118);
  goto LAB_006dd458;
LAB_006dd764:
  if (lVar26 == 0) {
LAB_006dd9d4:
    pppppppuVar19 = (uint *******)0x0;
    uVar40 = 0;
    uVar17 = 0;
    uVar29 = 0x13;
    pppppppuVar21 = pppppppuVar39;
LAB_006dda34:
    local_3d0 = pppppppuVar9;
    local_3e0 = uVar31;
    pppppuStack_3e8 = pppppuVar8;
    pppppuStack_3f8 = pppppuVar7;
    pppppuStack_408 = pppppuVar34;
    pppppppuStack_418 = pppppppuVar43;
    local_420 = pppppppuVar45;
    pppppppuVar41 =
         (uint *******)
         ((ulong)(uVar40 << 0x10) | (long)pppppppuVar19 << 0x20 | (uVar17 & 0xff) << 8 | uVar29);
    local_360 = pppppppuVar21;
    pppppppuVar9 = local_3d0;
    if ((local_190 != (uint *******)0x0) && (local_188 != (uint *******)0x0)) {
      __rustc::__rust_dealloc(local_180,(long)local_188 << 4,8);
      pppppppuVar9 = local_3d0;
    }
  }
  else {
    pppppppuStack_f8 = (uint *******)(lVar26 + -1);
    local_100 = (uint *******)((long)pppppppuVar39 + 1);
    uVar25 = *(byte *)pppppppuVar39 & 0x7f;
    if ((char)*(byte *)pppppppuVar39 < '\0') {
      if (pppppppuStack_f8 != (uint *******)0x0) {
        local_100 = (uint *******)((long)pppppppuVar39 + 2);
        pppppppuStack_f8 = (uint *******)(lVar26 + -2);
        uVar25 = uVar25 | (*(byte *)((long)pppppppuVar39 + 1) & 0x7f) << 7;
        if (-1 < (char)*(byte *)((long)pppppppuVar39 + 1)) goto LAB_006dd79c;
        if (pppppppuStack_f8 == (uint *******)0x0) goto LAB_006de41c;
        local_100 = (uint *******)((long)pppppppuVar39 + 3);
        pppppppuStack_f8 = (uint *******)(lVar26 + -3);
        if (3 < *(byte *)((long)pppppppuVar39 + 2)) {
LAB_006dda24:
          pppppppuVar19 = (uint *******)0x0;
          uVar40 = 0;
          uVar17 = 0;
          uVar29 = 6;
          goto LAB_006dda34;
        }
        if (uVar25 != 0 || (*(byte *)((long)pppppppuVar39 + 2) & 3) != 0) goto LAB_006dd914;
        goto LAB_006dd7ac;
      }
LAB_006de41c:
      pppppppuVar21 = local_100;
      pppppppuVar19 = (uint *******)0x0;
      uVar40 = 0;
      uVar17 = 0;
      uVar29 = 0x13;
      local_100 = pppppppuVar21;
      goto LAB_006dda34;
    }
LAB_006dd79c:
    if (uVar25 != 0) {
LAB_006dd914:
      uVar29 = 0xd;
      goto LAB_006dda34;
    }
LAB_006dd7ac:
    pppppppuVar19 = pppppppuStack_f8;
    pppppppuVar36 = local_100;
    local_400 = (uint *****)CONCAT44(uStack_154,local_158);
    local_3f0 = CONCAT44(uStack_144,local_148);
    local_410 = (uint *****)CONCAT44(uStack_164,local_168);
    local_360 = pppppppuVar22;
    if (local_3d0 != (uint *******)&DAT_00000002) {
                    /* try { // try from 006dd80c to 006dd8d3 has its CatchHandler @ 006deddc */
      pppppppuStack_3c8 = pppppppuVar41;
      auStack_3c0._0_8_ = pppppppuVar22;
      auStack_3c0._8_8_ = local_420;
      local_3b0 = pppppppuStack_418;
      pppppuStack_3a8 = local_410;
      pppppuStack_3a0 = pppppuStack_408;
      local_398 = local_400;
      pppppuStack_390 = pppppuStack_3f8;
      local_388 = local_3f0;
      pppppuStack_380 = pppppuStack_3e8;
      local_378 = local_3e0;
      local_360 = pppppppuVar35;
      <gimli::read::abbrev::[5]::gimli::read::abbrev::Abbreviation>::new
                (&local_370,uVar30,uVar38,bVar2,&local_3d0);
      uVar38 = (uint)(byte)pppppppuStack_368;
      if (local_370 != (uint ******)0xffffffffffffffff) {
        pppppuStack_458 = pppppuStack_330;
        local_460 = (uint *****)local_338;
        pppppuStack_448 = pppppuStack_320;
        pppppuStack_450 = local_328;
        local_430 = local_308;
        local_120._0_7_ = (undefined7)((ulong)pppppppuStack_368 >> 8);
        uStack_438 = lStack_310;
        local_440 = local_318;
        pppppppuStack_478 = pppppppuStack_350;
        local_480 = local_358;
        local_468 = (uint *****)pppppppuStack_340;
        pppppppuStack_470 = pppppppuStack_348;
        if (local_370 == (uint ******)0x2) {
LAB_006dd91c:
          uVar38 = (uint)(byte)pppppppuStack_4a8;
          local_80._0_7_ = (undefined7)((ulong)pppppppuStack_4a8 >> 8);
          ppppppuStack_98 = ppppppuStack_490;
          local_a0 = local_498;
          local_90 = local_488;
          local_200 = local_4a0;
          if (local_4b0 == (uint *******)0xffffffffffffffff) goto LAB_006ddaa4;
          local_360 = local_4b0;
          pppppppuStack_340 = (uint *******)ppppppuStack_490;
          pppppppuStack_348 = local_498;
          pppppppuStack_368 = (uint *******)0x1;
          local_370 = (uint ******)0x1;
          local_358 = pppppppuStack_4a8;
          local_338 = local_488;
          pppppppuStack_350 = local_4a0;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          local_200 = (uint *******)__rustc::__rust_alloc(0x40,8);
          if (local_200 == (uint *******)0x0) {
                    /* try { // try from 006de628 to 006de637 has its CatchHandler @ 006dee78 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x40);
          }
          local_200[1] = (uint ******)pppppppuStack_368;
          *local_200 = local_370;
          local_200[3] = (uint ******)local_358;
          local_200[2] = (uint ******)local_360;
          local_200[5] = (uint ******)pppppppuStack_348;
          local_200[4] = (uint ******)pppppppuStack_350;
          local_200[7] = (uint ******)local_338;
          local_200[6] = (uint ******)pppppppuStack_340;
          goto LAB_006ddabc;
        }
        uVar17 = <gimli::read::abbrev::[4]::gimli::read::abbrev::Abbreviations>::insert
                           (&local_4b0,&local_370);
        pppppppuVar35 = local_360;
        if ((uVar17 & 1) != 0) goto LAB_006de3d8;
        goto joined_r0x006dd528;
      }
      goto LAB_006dda7c;
    }
  }
  local_3d0 = pppppppuVar9;
  uVar38 = (uint)pppppppuVar41 & 0xff;
  pppppppuStack_368 = pppppppuVar41;
LAB_006dda7c:
  local_120._0_7_ = (undefined7)((ulong)pppppppuStack_368 >> 8);
  local_80 = CONCAT17(local_80._7_1_,local_120._0_7_);
  pppppppuVar22 = local_360;
  goto LAB_006dda9c;
LAB_006de3d8:
  uVar38 = 0xe;
LAB_006dda9c:
  FUN_006c48d8(&local_4b0);
  local_200 = pppppppuVar22;
  goto LAB_006ddaa4;
}


// ===== 006dee90  FUN_006dee90 =====

void FUN_006dee90(long *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  long lVar14;
  undefined1 uVar15;
  
  puVar1 = (uint *)*param_2;
  uVar9 = param_2[1];
  if (uVar9 < 4) {
    *param_1 = 0x13;
    param_1[1] = (long)puVar1;
    *(undefined1 *)((long)param_1 + 0x29) = 3;
    return;
  }
  uVar8 = uVar9 - 4;
  puVar10 = puVar1 + 1;
  uVar2 = *puVar1;
  uVar6 = (ulong)uVar2;
  *param_2 = (long)puVar10;
  param_2[1] = uVar8;
  if (uVar2 < 0xfffffff0) {
    iVar7 = 4;
    lVar14 = uVar8 - uVar6;
    if (uVar8 < uVar6) goto LAB_006def98;
  }
  else {
    if (uVar2 != 0xffffffff) {
      *param_1 = 0x10;
      param_1[1] = (long)puVar1;
      *(undefined1 *)((long)param_1 + 0x29) = 3;
      return;
    }
    if (uVar8 < 8) {
      *param_1 = 0x13;
      param_1[1] = (long)puVar10;
      *(undefined1 *)((long)param_1 + 0x29) = 3;
      return;
    }
    uVar4 = puVar1[2];
    uVar13 = puVar1[1];
    bVar12 = *(byte *)((long)puVar1 + 0xb);
    puVar10 = puVar1 + 3;
    uVar9 = uVar9 - 0xc;
    *param_2 = (long)puVar10;
    param_2[1] = uVar9;
    iVar7 = 8;
    uVar6 = ((ulong)uVar13 << 8 | (ulong)(uint3)uVar4 << 0x28) >> 8 | (ulong)bVar12 << 0x38;
    lVar14 = uVar9 - uVar6;
    if (uVar9 < uVar6) goto LAB_006def98;
  }
  *param_2 = (long)puVar10 + uVar6;
  param_2[1] = lVar14;
  if (uVar6 < 2) {
LAB_006def98:
    *param_1 = 0x13;
    param_1[1] = (long)puVar10;
    *(undefined1 *)((long)param_1 + 0x29) = 3;
    return;
  }
  uVar3 = (ushort)*puVar10;
  if ((uVar3 & 0xfffe) != 2) {
    param_1[1] = (ulong)uVar3;
    *(undefined1 *)param_1 = 0x11;
    *(undefined1 *)((long)param_1 + 0x29) = 3;
    return;
  }
  if (uVar2 < 0xfffffff0) {
    if (uVar6 - 2 < 4) goto LAB_006df040;
    uVar9 = (ulong)*(uint *)((long)puVar10 + 2);
    lVar14 = -6;
    pbVar11 = (byte *)((long)puVar10 + 6);
  }
  else {
    if (uVar6 - 2 < 8) {
LAB_006df040:
      *(undefined1 *)((long)param_1 + 7) = 0;
      *(undefined1 *)param_1 = 0x13;
      *(undefined2 *)((long)param_1 + 5) = 0;
      *(undefined4 *)((long)param_1 + 1) = 0;
      param_1[1] = (long)puVar10 + 2;
      *(undefined1 *)((long)param_1 + 0x29) = 3;
      return;
    }
    pbVar11 = (byte *)((long)puVar10 + 10);
    uVar9 = ((ulong)*(uint *)((long)puVar10 + 2) << 8 | (ulong)*(uint3 *)((long)puVar10 + 6) << 0x28
            ) >> 8 | (ulong)*(byte *)((long)puVar10 + 9) << 0x38;
    lVar14 = -10;
  }
  lVar14 = uVar6 + lVar14;
  if (lVar14 == 0) {
    bVar12 = 0;
    uVar15 = 0x13;
  }
  else {
    bVar12 = *pbVar11;
    uVar15 = 0x19;
    if (((byte)(bVar12 - 1) < (byte)(bVar12 ^ bVar12 - 1)) &&
       (uVar13 = (uint)(char)bVar12, (uVar13 & 0xf) != 0)) {
      if (lVar14 == 1) {
        *(undefined2 *)((long)param_1 + 6) = 0;
        *(undefined2 *)param_1 = 0x13;
        *(undefined4 *)((long)param_1 + 2) = 0;
        param_1[1] = (long)(pbVar11 + 1);
        *(undefined1 *)((long)param_1 + 0x29) = 3;
        return;
      }
      if (pbVar11[1] != 0) {
        *(undefined1 *)param_1 = 0x44;
        *(undefined1 *)((long)param_1 + 0x29) = 3;
        return;
      }
      iVar5 = 0x10;
      if (uVar2 < 0xfffffff0) {
        iVar5 = 8;
      }
      if (((int)uVar13 < 0) || (uVar13 = uVar13 * 2, (uVar13 & 0xff) == 0)) {
        *(byte *)((long)param_1 + 1) = bVar12;
        *(undefined1 *)param_1 = 0x19;
        *(undefined1 *)((long)param_1 + 0x29) = 3;
        return;
      }
      uVar2 = uVar13 & 0xff;
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = (uint)(iVar5 + iVar7) / uVar2;
      }
      iVar5 = (iVar5 + iVar7) - uVar4 * uVar2;
      uVar2 = 0;
      if (iVar5 != 0) {
        uVar2 = uVar13 - iVar5;
      }
      uVar8 = (ulong)uVar2 & 0xff;
      if (lVar14 - 2U < uVar8) {
        param_1[1] = (long)(pbVar11 + 2);
        *(undefined1 *)param_1 = 0x13;
        *(undefined1 *)((long)param_1 + 0x29) = 3;
        return;
      }
      param_1[2] = param_3;
      param_1[3] = uVar6;
      *param_1 = (long)(pbVar11 + 2 + uVar8);
      param_1[1] = (lVar14 - 2U) - uVar8;
      param_1[4] = uVar9;
      *(byte *)(param_1 + 5) = bVar12;
      *(char *)((long)param_1 + 0x29) = (char)iVar7;
      *(ushort *)((long)param_1 + 0x2a) = uVar3;
      return;
    }
  }
  *(undefined1 *)param_1 = uVar15;
  *(byte *)((long)param_1 + 1) = bVar12;
  *(undefined2 *)((long)param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 2) = 0;
  param_1[1] = (long)pbVar11;
  *(undefined1 *)((long)param_1 + 0x29) = 3;
  return;
}


// ===== 006df14c  <std::time::[5]::std::time::SystemTime>::duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::[5]::std::time::SystemTime>::duration_since */

void __rustcall
<std::time::[5]::std::time::SystemTime>::duration_since
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  local_50 = param_3;
  local_48 = param_4;
  FUN_006d62cc(&local_40,param_2,&local_50);
  *(undefined4 *)(param_1 + 2) = local_30;
  param_1[1] = uStack_38;
  *param_1 = local_40;
  return;
}


// ===== 006df19c  <std::time::[5]::std::time::SystemTime>::saturating_add =====

/* WARNING: Removing unreachable block (ram,0x006df204) */
/* WARNING: Removing unreachable block (ram,0x006df208) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::[5]::std::time::SystemTime>::saturating_add */

undefined1  [16] __rustcall
<std::time::[5]::std::time::SystemTime>::saturating_add(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar4 = *param_1 + param_2;
  if (param_2 < 0 != SCARRY8(*param_1,param_2)) {
LAB_006df1f8:
    auVar7._8_4_ = 999999999;
    auVar7._0_8_ = 0x7fffffffffffffff;
    auVar7._12_4_ = 0;
    return auVar7;
  }
  uVar5 = (int)param_1[1] + param_3;
  if (999999999 < uVar5) {
    bVar3 = SCARRY8(lVar4,1);
    lVar4 = lVar4 + 1;
    if (bVar3) goto LAB_006df1f8;
    uVar5 = uVar5 + 0xc4653600;
  }
  uVar1 = 999999999;
  if (uVar5 != 0xffffffff) {
    uVar1 = uVar5;
  }
  lVar2 = 0x7fffffffffffffff;
  if (uVar5 != 0xffffffff) {
    lVar2 = lVar4;
  }
  auVar6._8_4_ = uVar1;
  auVar6._0_8_ = lVar2;
  auVar6._12_4_ = 0;
  return auVar6;
}


// ===== 006df210  <std::time::[5]::std::time::SystemTime>::saturating_sub =====

/* WARNING: Removing unreachable block (ram,0x006df280) */
/* WARNING: Removing unreachable block (ram,0x006df284) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::[5]::std::time::SystemTime>::saturating_sub */

undefined1  [16] __rustcall
<std::time::[5]::std::time::SystemTime>::saturating_sub(long *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar3 = *param_1 - param_2;
  if (param_2 < 0 == SBORROW8(*param_1,param_2)) {
    param_3 = (int)param_1[1] - param_3;
    if (-1 < param_3) {
      iVar1 = 0;
      if (param_3 != -1) {
        iVar1 = param_3;
      }
      lVar2 = -0x8000000000000000;
      if (param_3 != -1) {
        lVar2 = lVar3;
      }
      auVar4._8_4_ = iVar1;
      auVar4._0_8_ = lVar2;
      auVar4._12_4_ = 0;
      return auVar4;
    }
    if (!SBORROW8(lVar3,1)) {
      param_3 = param_3 + 1000000000;
      iVar1 = 0;
      if (param_3 != -1) {
        iVar1 = param_3;
      }
      lVar2 = -0x8000000000000000;
      if (param_3 != -1) {
        lVar2 = lVar3 + -1;
      }
      auVar5._8_4_ = iVar1;
      auVar5._0_8_ = lVar2;
      auVar5._12_4_ = 0;
      return auVar5;
    }
  }
  auVar6._12_4_ = 0;
  auVar6._0_12_ = ZEXT812(0x8000000000000000);
  return auVar6;
}


// ===== 006df28c  <std::time::[5]::std::time::SystemTime>::saturating_duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::[5]::std::time::SystemTime>::saturating_duration_since */

undefined1  [16] __rustcall
<std::time::[5]::std::time::SystemTime>::saturating_duration_since
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_38;
  undefined4 local_30;
  int local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = param_2;
  local_30 = param_3;
  FUN_006d62cc(local_28,param_1,&local_38);
  uVar1 = 0;
  if (local_28[0] == 0) {
    uVar1 = local_18;
  }
  uVar2 = 0;
  if (local_28[0] == 0) {
    uVar2 = local_20;
  }
  auVar3._8_4_ = uVar1;
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0;
  return auVar3;
}


// ===== 006df2d8  <std::time::[5]::std::time::SystemTime>::now =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::[5]::std::time::SystemTime>::now */

void __rustcall <std::time::[5]::std::time::SystemTime>::now(void)

{
  FUN_006d63bc(0);
  return;
}


// ===== 006df2e0  <std::time::[5]::std::time::SystemTime>::elapsed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::[5]::std::time::SystemTime>::elapsed */

void __rustcall
<std::time::[5]::std::time::SystemTime>::elapsed(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 local_60 [12];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  local_60 = FUN_006d63bc(0);
  local_50 = *param_2;
  local_48 = *(undefined4 *)(param_2 + 1);
  FUN_006d62cc(&local_40,local_60,&local_50);
  *(undefined4 *)(param_1 + 2) = local_30;
  param_1[1] = uStack_38;
  *param_1 = local_40;
  return;
}


// ===== 006df348  FUN_006df348 =====

void FUN_006df348(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
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
  goto LAB_006df3e4;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = __rustc::__rust_alloc(param_4,param_5);
      if (lVar5 == 0) goto LAB_006df3c4;
    }
LAB_006df3d4:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = __rustc::__rust_realloc(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_006df3d4;
LAB_006df3c4:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_006df3e4:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 006df3fc  FUN_006df3fc =====

void FUN_006df3fc(ulong *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(param_2);
      uVar5 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006df488;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar5 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006df488:
  if ((uVar5 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = std::panicking::panic_count::is_zero_slow_path();
    bVar4 = bVar4 ^ 1;
  }
  iVar3 = param_2[1];
  *(byte *)(param_1 + 2) = bVar4;
  *param_1 = (ulong)((char)iVar3 != '\0');
  param_1[1] = (ulong)param_2;
  return;
}


// ===== 006df4ac  <std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::add_fds =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::add_fds */

undefined8 __rustcall
<std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::add_fds
          (undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong __n;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_3 >> 0x1e != 0) {
    return 0;
  }
  uVar4 = (int)param_3 * 4;
  uVar5 = param_1[2];
  __n = (ulong)((uVar4 + 7 & 0xfffffff8) + 0x10);
  uVar1 = uVar5 + __n;
  if ((!CARRY8(uVar5,__n)) && (uVar1 <= (ulong)param_1[1])) {
    puVar6 = (ulong *)*param_1;
    memset((void *)((long)puVar6 + uVar5),0,__n);
    param_1[2] = uVar1;
    if (0xf < uVar1) {
      puVar2 = puVar6;
      do {
        puVar7 = puVar2;
        puVar2 = (ulong *)((*puVar7 + 7 & 0xfffffffffffffff8) + (long)puVar7);
        puVar3 = (ulong *)0x0;
        if (puVar2 + 2 <= (ulong *)(uVar1 + (long)puVar6)) {
          puVar3 = puVar2;
        }
      } while (puVar3 != puVar7 && puVar3 != (ulong *)0x0);
      *puVar7 = (ulong)(uVar4 + 0x10);
      puVar7[1] = 0x100000001;
      memcpy(puVar7 + 2,param_2,(ulong)uVar4);
      return 1;
    }
  }
  return 0;
}


// ===== 006df5ac  <std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::messages =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::messages */

void __rustcall
<std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::messages
          (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[2];
  if (uVar1 <= (ulong)param_2[1]) {
    uVar2 = *param_2;
    param_1[2] = 0;
    *param_1 = uVar2;
    param_1[1] = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar1,param_2[1],&PTR_s__rustc_48a229ceaefd4985c50990b14_00977940);
}


// ===== 006df5e0  <std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::add_creds =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::add_creds
    */

undefined8 __rustcall
<std::os::unix::net::ancillary::[5]::std::os::unix::net::ancillary::SocketAncillary>::add_creds
          (undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  *(undefined1 *)(param_1 + 3) = 0;
  if (0x15555555 < param_3) {
    return 0;
  }
  uVar6 = param_1[2];
  uVar4 = (int)param_3 * 0xc;
  uVar5 = (ulong)((uVar4 + 7 & 0xfffffff8) + 0x10);
  uVar1 = uVar6 + uVar5;
  if ((!CARRY8(uVar6,uVar5)) && (uVar1 <= (ulong)param_1[1])) {
    puVar7 = (ulong *)*param_1;
    memset((void *)((long)puVar7 + uVar6),0,uVar5);
    param_1[2] = uVar1;
    uVar5 = DAT_00374d58;
    if (0xf < uVar1) {
      puVar2 = puVar7;
      do {
        puVar8 = puVar2;
        puVar2 = (ulong *)((*puVar8 + 7 & 0xfffffffffffffff8) + (long)puVar8);
        puVar3 = (ulong *)0x0;
        if (puVar2 + 2 <= (ulong *)(uVar1 + (long)puVar7)) {
          puVar3 = puVar2;
        }
      } while (puVar3 != puVar8 && puVar3 != (ulong *)0x0);
      *puVar8 = (ulong)(uVar4 + 0x10);
      puVar8[1] = uVar5;
      memcpy(puVar8 + 2,param_2,(ulong)uVar4);
      return 1;
    }
  }
  return 0;
}


// ===== 006df6f0  FUN_006df6f0 =====

void FUN_006df6f0(undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar12 = param_2[1];
  if (uVar12 == 0) {
    *param_1 = 2;
    return;
  }
  puVar11 = (uint *)*param_2;
  if (uVar12 < 4) goto LAB_006dfac8;
  lVar13 = param_2[2];
  uVar15 = uVar12 - 4;
  puVar9 = puVar11 + 1;
  uVar2 = *puVar11;
  uVar7 = (ulong)uVar2;
  if (uVar2 < 0xfffffff0) {
    uVar14 = 4;
    lVar17 = uVar15 - uVar7;
    if (uVar7 <= uVar15) {
LAB_006df74c:
      *param_2 = (long)puVar9 + uVar7;
      param_2[1] = lVar17;
      if (1 < uVar7) {
        puVar11 = (uint *)((long)puVar9 + 2);
        uVar4 = (ushort)*puVar9;
        puVar16 = (uint *)(ulong)uVar4;
        if (uVar4 - 2 < 3) {
          if (uVar2 < 0xfffffff0) {
            if (3 < uVar7 - 2) {
              uVar19 = (ulong)*(uint *)((long)puVar9 + 2);
              lVar6 = -6;
              puVar16 = (uint *)((long)puVar9 + 6);
              goto LAB_006df830;
            }
          }
          else if (7 < uVar7 - 2) {
            lVar6 = -10;
            uVar19 = ((ulong)*(uint *)((long)puVar9 + 2) << 8 |
                     (ulong)*(uint3 *)((long)puVar9 + 6) << 0x28) >> 8 |
                     (ulong)*(byte *)((long)puVar9 + 9) << 0x38;
            puVar16 = (uint *)((long)puVar9 + 10);
LAB_006df830:
            puVar11 = puVar16;
            if (uVar7 + lVar6 != 0) {
              puVar11 = (uint *)((long)puVar16 + 1);
              bVar18 = (byte)*puVar16;
              uVar5 = bVar18 - 1;
              uVar2 = (bVar18 ^ uVar5) & 0xff;
              uVar15 = (ulong)uVar2;
              uVar10 = (ulong)bVar18;
              if (((uVar5 & 0xff) < uVar2) && ((bVar18 & 0xf) != 0)) {
                uVar8 = 0;
                uVar20 = (uVar7 + lVar6) - 1;
LAB_006df860:
                *param_1 = 0;
                param_1[1] = lVar13;
                param_1[2] = uVar8;
                param_1[3] = uVar15;
                param_2[2] = (lVar13 + uVar12) - lVar17;
                param_1[4] = puVar9;
                param_1[5] = puVar11;
                param_1[6] = uVar20;
                param_1[7] = uVar7;
                param_1[8] = uVar19;
                *(byte *)(param_1 + 9) = bVar18;
                *(undefined1 *)((long)param_1 + 0x49) = uVar14;
                *(ushort *)((long)param_1 + 0x4a) = uVar4;
                return;
              }
LAB_006df908:
              uVar15 = uVar10;
              uVar10 = 0x19;
              puVar16 = puVar11;
              goto LAB_006dfacc;
            }
          }
        }
        else {
          if (uVar4 != 5) {
            uVar15 = 0;
            uVar10 = 0x11;
            goto LAB_006dfacc;
          }
          if (uVar7 != 2) {
            if (uVar7 == 3) {
              puVar11 = (uint *)((long)puVar9 + 3);
            }
            else {
              bVar18 = *(byte *)((long)puVar9 + 3);
              uVar5 = bVar18 - 1;
              puVar11 = (uint *)(ulong)uVar5;
              uVar10 = (ulong)bVar18;
              if ((((bVar18 ^ uVar5) & 0xff) <= (uVar5 & 0xff)) ||
                 (puVar11 = (uint *)(ulong)(bVar18 & 0xf), (bVar18 & 0xf) == 0)) goto LAB_006df908;
              bVar3 = *(byte *)((long)puVar9 + 2);
              if (uVar2 < 0xfffffff0) {
                if (uVar7 - 4 < 4) goto LAB_006df954;
                uVar19 = (ulong)puVar9[1];
                lVar6 = -8;
                puVar11 = puVar9 + 2;
              }
              else {
                if (uVar7 - 4 < 8) {
LAB_006df954:
                  puVar11 = puVar9 + 1;
                  goto LAB_006dfac8;
                }
                uVar19 = ((ulong)puVar9[1] << 8 | (ulong)(uint3)puVar9[2] << 0x28) >> 8 |
                         (ulong)*(byte *)((long)puVar9 + 0xb) << 0x38;
                lVar6 = -0xc;
                puVar11 = puVar9 + 3;
              }
              uVar20 = uVar7 + lVar6;
              uVar15 = 0;
              uVar10 = 0x42;
              puVar16 = puVar11;
              if (bVar3 < 4) {
                if (bVar3 == 1) {
                  uVar8 = 0;
                  goto LAB_006df860;
                }
                if (bVar3 != 2) {
                  if (bVar3 == 3) {
                    uVar8 = 2;
                    goto LAB_006df860;
                  }
                  goto LAB_006dfacc;
                }
                if (7 < uVar20) {
                  uVar15 = ((ulong)*puVar11 << 8 | (ulong)(uint3)puVar11[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar11 + 7) << 0x38;
                  if (uVar2 < 0xfffffff0) {
                    if (3 < uVar20 - 8) {
                      puVar9 = (uint *)(ulong)puVar11[2];
                      puVar11 = puVar11 + 3;
                      uVar20 = uVar20 - 0xc;
                      uVar8 = 1;
                      goto LAB_006df860;
                    }
                  }
                  else if (7 < uVar20 - 8) {
                    puVar9 = puVar11 + 3;
                    uVar20 = uVar20 - 0x10;
                    puVar16 = puVar11 + 2;
                    pbVar1 = (byte *)((long)puVar11 + 0xf);
                    puVar11 = puVar11 + 4;
                    puVar9 = (uint *)(((ulong)*puVar16 << 8 | (ulong)(uint3)*puVar9 << 0x28) >> 8 |
                                     (ulong)*pbVar1 << 0x38);
                    uVar8 = 1;
                    goto LAB_006df860;
                  }
                  goto LAB_006dfb24;
                }
              }
              else if (bVar3 == 4) {
                if (7 < uVar20) {
                  puVar16 = puVar11 + 1;
                  uVar20 = uVar20 - 8;
                  uVar2 = *puVar11;
                  puVar9 = (uint *)(ulong)*(byte *)((long)puVar11 + 7);
                  puVar11 = puVar11 + 2;
                  uVar15 = ((ulong)uVar2 << 8 | (ulong)(uint3)*puVar16 << 0x28) >> 8 |
                           (long)puVar9 << 0x38;
                  uVar8 = 3;
                  goto LAB_006df860;
                }
              }
              else if (bVar3 == 5) {
                if (7 < uVar20) {
                  puVar16 = puVar11 + 1;
                  uVar20 = uVar20 - 8;
                  uVar2 = *puVar11;
                  puVar9 = (uint *)(ulong)*(byte *)((long)puVar11 + 7);
                  puVar11 = puVar11 + 2;
                  uVar15 = ((ulong)uVar2 << 8 | (ulong)(uint3)*puVar16 << 0x28) >> 8 |
                           (long)puVar9 << 0x38;
                  uVar8 = 4;
                  goto LAB_006df860;
                }
              }
              else {
                if (bVar3 != 6) goto LAB_006dfacc;
                if (7 < uVar20) {
                  uVar15 = ((ulong)*puVar11 << 8 | (ulong)(uint3)puVar11[1] << 0x28) >> 8 |
                           (ulong)*(byte *)((long)puVar11 + 7) << 0x38;
                  if (uVar2 < 0xfffffff0) {
                    if (3 < uVar20 - 8) {
                      puVar9 = (uint *)(ulong)puVar11[2];
                      puVar11 = puVar11 + 3;
                      lVar6 = -0xc;
                      goto LAB_006dfb00;
                    }
                  }
                  else if (7 < uVar20 - 8) {
                    puVar9 = puVar11 + 3;
                    lVar6 = -0x10;
                    puVar16 = puVar11 + 2;
                    pbVar1 = (byte *)((long)puVar11 + 0xf);
                    puVar11 = puVar11 + 4;
                    puVar9 = (uint *)(((ulong)*puVar16 << 8 | (ulong)(uint3)*puVar9 << 0x28) >> 8 |
                                     (ulong)*pbVar1 << 0x38);
LAB_006dfb00:
                    uVar20 = uVar20 + lVar6;
                    uVar8 = 5;
                    goto LAB_006df860;
                  }
LAB_006dfb24:
                  puVar11 = puVar11 + 2;
                }
              }
            }
          }
        }
LAB_006dfac8:
        uVar15 = 0;
        uVar10 = 0x13;
        puVar16 = puVar11;
        goto LAB_006dfacc;
      }
    }
  }
  else {
    if (uVar2 != 0xffffffff) {
      uVar15 = 0;
      uVar10 = 0x10;
      puVar16 = puVar11;
      goto LAB_006dfacc;
    }
    if (7 < uVar15) {
      puVar9 = puVar11 + 3;
      uVar7 = ((ulong)puVar11[1] << 8 | (ulong)(uint3)puVar11[2] << 0x28) >> 8 |
              (ulong)*(byte *)((long)puVar11 + 0xb) << 0x38;
      uVar14 = 8;
      lVar17 = (uVar12 - 0xc) - uVar7;
      if (uVar7 <= uVar12 - 0xc) goto LAB_006df74c;
    }
  }
  uVar15 = 0;
  uVar10 = 0x13;
  puVar16 = puVar9;
LAB_006dfacc:
  param_1[2] = puVar16;
  *param_2 = 1;
  param_2[1] = 0;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar10 | uVar15 << 8;
  return;
}


// ===== 006dfb30  <std::net::tcp::[7]::std::net::tcp::TcpListener>::set_only_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::[7]::std::net::tcp::TcpListener>::set_only_v6 */

ulong __rustcall
<std::net::tcp::[7]::std::net::tcp::TcpListener>::set_only_v6(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,0x1a,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006dfbc8  <std::net::tcp::[7]::std::net::tcp::TcpListener>::accept =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::[7]::std::net::tcp::TcpListener>::accept */

ulong __rustcall
<std::net::tcp::[7]::std::net::tcp::TcpListener>::accept(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ushort extraout_w10;
  ushort uVar7;
  undefined4 extraout_w11;
  undefined8 extraout_x12;
  ulong uVar8;
  undefined4 extraout_w15;
  ushort local_b8;
  ushort local_b6;
  uint local_b4;
  ushort local_b0;
  ushort local_ae;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  uint local_34;
  int local_30;
  int local_2c;
  undefined **local_28;
  
  local_34 = 0x80;
  uVar2 = FUN_006d7c74(&local_30,param_2,&local_b8,&local_34);
  if (local_30 == 1) {
LAB_006dfcb0:
    *(undefined ***)(param_1 + 2) = local_28;
    *param_1 = 1;
    return uVar2;
  }
  if (local_b8 == 10) {
    if (local_34 < 0x1c) {
      ppuVar5 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978168;
      puVar3 = &DAT_0045bd10;
      uVar4 = 0x35;
LAB_006dfcf8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006dfcf8 to 006dfcfb has its CatchHandler @ 006dfd00 */
      core::panicking::panic(puVar3,uVar4,ppuVar5);
    }
    uVar6 = (ulong)local_ae;
    uVar1 = (uint)local_b0 << 0x10;
    uVar7 = local_b6 >> 8 | (ushort)((local_b6 & 0xff00ff) << 8);
    uVar8 = 1;
  }
  else {
    if (local_b8 != 2) {
      uVar1 = close(local_2c);
      uVar2 = (ulong)uVar1;
      local_28 = &PTR_s_invalid_argument_00978180;
      goto LAB_006dfcb0;
    }
    if (local_34 < 0x10) {
      ppuVar5 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978150;
      puVar3 = &DAT_0045bcdc;
      uVar4 = 0x34;
      goto LAB_006dfcf8;
    }
    uVar8 = 0;
    uVar6 = (ulong)((uint)(local_b6 >> 8) | (local_b6 & 0xff00ff) << 8);
    local_ac = extraout_x12;
    uVar1 = local_b4;
    local_b4 = (uint)local_b8;
    local_a4 = extraout_w15;
    uStack_a0 = extraout_w11;
    uVar7 = extraout_w10;
  }
  *param_1 = 0;
  param_1[1] = local_2c;
  param_1[6] = local_a4;
  param_1[7] = local_b4;
  param_1[8] = uStack_a0;
  *(ushort *)(param_1 + 9) = uVar7;
  *(ulong *)(param_1 + 2) = uVar8 | (ulong)uVar1 << 0x10 | uVar6 << 0x30;
  *(undefined8 *)(param_1 + 4) = local_ac;
  return uVar2;
}


// ===== 006dfd14  <std::net::tcp::[7]::std::net::tcp::TcpListener>::only_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::[7]::std::net::tcp::TcpListener>::only_v6 */

void __rustcall
<std::net::tcp::[7]::std::net::tcp::TcpListener>::only_v6(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0x29,0x1a,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006dfdd0  FUN_006dfdd0 =====

void FUN_006dfdd0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  
  if ((1 < *(byte *)(param_2 + 7)) || ((*(byte *)((long)param_2 + 0x3a) & 1) != 0))
  goto LAB_006dfdfc;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    pcVar6 = (char *)*param_2;
    if (lVar3 == 1) {
      if (*pcVar6 == '.') {
LAB_006dff38:
        lVar3 = 1;
        goto LAB_006dfe00;
      }
    }
    else if ((*pcVar6 == '.') && (pcVar6[1] == '/')) goto LAB_006dff38;
LAB_006dfdfc:
    lVar3 = 0;
  }
LAB_006dfe00:
  uVar1 = param_2[1];
  uVar2 = lVar3 + (ulong)(*(byte *)(param_2 + 7) < 2 & *(byte *)((long)param_2 + 0x3a));
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar1,uVar1,&PTR_s__rustc_48a229ceaefd4985c50990b14_009779e8);
  }
  lVar4 = *param_2;
  lVar3 = -1;
  pcVar6 = (char *)(lVar4 + uVar2);
  uVar7 = uVar2;
  do {
    if (uVar1 == uVar7) {
      lVar5 = 0;
      lVar3 = uVar1 - uVar2;
      lVar4 = lVar3;
      if (lVar3 == 0) goto LAB_006dfee8;
      goto LAB_006dfe74;
    }
    lVar5 = lVar4 + uVar1;
    lVar4 = lVar4 + -1;
    uVar7 = uVar7 + 1;
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar5 + -1) != '/');
  uVar2 = uVar1 - lVar3;
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar1,uVar1,&PTR_s__rustc_48a229ceaefd4985c50990b14_009779d0);
  }
  lVar5 = 1;
  pcVar6 = (char *)(lVar4 + uVar1 + 1);
  lVar3 = uVar1 - uVar2;
  if (lVar3 != 0) {
LAB_006dfe74:
    if (lVar3 == 1) {
      lVar4 = 1;
      if (*pcVar6 == '.') goto LAB_006dfee8;
    }
    else if (((lVar3 == 2) && (*pcVar6 == '.')) && (pcVar6[1] == '.')) {
      *(undefined1 *)(param_1 + 1) = 8;
      *param_1 = lVar5 + 2;
      param_1[2] = (long)pcVar6;
      param_1[3] = 2;
      return;
    }
    *(undefined1 *)(param_1 + 1) = 9;
    *param_1 = lVar5 + lVar3;
    param_1[2] = (long)pcVar6;
    param_1[3] = lVar3;
    return;
  }
  lVar4 = 0;
LAB_006dfee8:
  *(undefined1 *)(param_1 + 1) = 0xff;
  *param_1 = lVar5 + lVar4;
  param_1[2] = (long)pcVar6;
  param_1[3] = lVar4;
  return;
}


// ===== 006dff68  <std::path::[8]::std::path::Components>::as_path =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[8]::std::path::Components>::as_path */

undefined1  [16] __rustcall <std::path::[8]::std::path::Components>::as_path(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  char *local_b0;
  ulong local_a8;
  char local_a0;
  ulong local_9f;
  undefined8 uStack_97;
  undefined8 local_8f;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte local_78;
  char local_77;
  byte local_76;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  
  local_a0 = *(char *)(param_1 + 2);
  local_b0 = (char *)*param_1;
  uVar5 = param_1[1];
  if (local_a0 != -1) {
    uStack_68 = *(undefined8 *)((long)param_1 + 0x19);
    local_70 = *(ulong *)((long)param_1 + 0x11);
    uStack_60 = *(undefined8 *)((long)param_1 + 0x21);
    uStack_58 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
    local_51 = (undefined1)param_1[6];
    uStack_50 = (undefined7)((ulong)param_1[6] >> 8);
  }
  local_78 = *(byte *)(param_1 + 7);
  local_76 = *(byte *)((long)param_1 + 0x3a);
  uStack_87 = uStack_58;
  local_8f = uStack_60;
  uStack_80 = local_51;
  uStack_7f = uStack_50;
  local_77 = *(char *)((long)param_1 + 0x39);
  uStack_97 = uStack_68;
  local_9f = local_70;
  uVar2 = uVar5;
  pcVar6 = local_b0;
  if (local_78 == 2) {
    if (uVar5 == 0) goto LAB_006e0174;
    do {
      uVar3 = 0;
      do {
        if (pcVar6[uVar3] == '/') {
          lVar4 = 1;
          if (uVar3 == 0) goto LAB_006e0028;
          goto LAB_006e0014;
        }
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
      lVar4 = 0;
      uVar3 = uVar2;
      if (uVar2 == 0) {
        uVar3 = 0;
      }
      else {
LAB_006e0014:
        if ((uVar3 != 1) || (uVar3 = 1, *pcVar6 != '.')) goto LAB_006e0048;
      }
LAB_006e0028:
      uVar3 = lVar4 + uVar3;
      uVar1 = uVar2 - uVar3;
      if (uVar2 < uVar3) {
        local_a8 = uVar5;
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,uVar2,uVar2,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977a00);
      }
      pcVar6 = pcVar6 + uVar3;
      uVar2 = uVar1;
    } while (uVar1 != 0);
    uVar2 = 0;
  }
LAB_006e0048:
  uVar5 = uVar2;
  if (local_77 == '\x02') {
    uVar3 = (ulong)(local_78 < 2 & local_76);
    local_b0 = pcVar6;
    uVar2 = uVar5;
    if (local_78 < 2) {
      local_77 = 2;
      if ((local_76 & 1) == 0) {
        do {
          local_a8 = uVar2;
          uVar5 = local_a8;
          uVar2 = local_a8;
          if (local_a8 == 0) {
LAB_006e00fc:
            if (local_a8 <= uVar2) goto LAB_006e0174;
          }
          else {
            if (local_a8 == 1) {
              if (*pcVar6 != '.') {
LAB_006e00ec:
                if (local_a8 != 0) goto LAB_006e0104;
                goto LAB_006e0174;
              }
            }
            else {
              if (*pcVar6 != '.') {
                uVar2 = 0;
                goto LAB_006e00fc;
              }
              if (pcVar6[1] != '/') goto LAB_006e00ec;
            }
            if (local_a8 < 2) goto LAB_006e0174;
          }
LAB_006e0104:
          FUN_006dfdd0(&local_70,&local_b0);
          if ((char)uStack_68 != -1) goto LAB_006e0174;
          uVar2 = uVar5 - local_70;
        } while (local_70 <= uVar5);
      }
      else {
        local_77 = 2;
        do {
          uVar5 = uVar2;
          if (uVar5 <= uVar3) goto LAB_006e0174;
          local_a8 = uVar5;
          FUN_006dfdd0(&local_70,&local_b0);
          if ((char)uStack_68 != -1) goto LAB_006e0174;
          uVar2 = uVar5 - local_70;
        } while (local_70 <= uVar5);
      }
    }
    else {
      local_77 = 2;
      do {
        uVar5 = uVar2;
        if (uVar5 <= uVar3) goto LAB_006e0174;
        local_a8 = uVar5;
        FUN_006dfdd0(&local_70,&local_b0);
        if ((char)uStack_68 != -1) goto LAB_006e0174;
        uVar2 = uVar5 - local_70;
      } while (local_70 <= uVar5);
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,uVar5,&PTR_s__rustc_48a229ceaefd4985c50990b14_009779b8);
  }
LAB_006e0174:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = pcVar6;
  return auVar7;
}


// ===== 006e01b8  FUN_006e01b8 =====

void FUN_006e01b8(ulong *param_1,uint *param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 uVar20;
  long lVar21;
  ulong uVar22;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = (ulong)param_2;
    param_1[2] = 0;
    param_1[3] = (ulong)param_2;
    param_1[4] = 0;
    param_1[5] = (ulong)param_2;
    param_1[6] = 0;
    param_1[7] = (ulong)param_2;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined8 *)((long)param_1 + 0x4e) = 0;
    return;
  }
  if (param_3 < 4) {
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined2 *)((long)param_1 + 9) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    param_1[2] = (ulong)param_2;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  uVar18 = *param_2;
  if (uVar18 == 2) {
    uVar14 = 2;
  }
  else {
    uVar14 = (undefined2)uVar18;
    if ((uVar18 & 0xffff) != 5) {
      *(undefined1 *)(param_1 + 1) = 0x11;
      param_1[2] = (ulong)uVar18 & 0xffff;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  }
  uVar15 = param_3 & 0xfffffffffffffffc;
  if (uVar15 == 4) {
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined2 *)((long)param_1 + 9) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    param_1[2] = (ulong)(param_2 + 1);
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  if (uVar15 == 8) {
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined2 *)((long)param_1 + 9) = 0;
    param_1[2] = (ulong)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  if (uVar15 == 0xc) {
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined2 *)((long)param_1 + 9) = 0;
    param_1[2] = (ulong)(param_2 + 3);
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar15 = (ulong)uVar3;
  uVar4 = param_2[1];
  if ((uVar3 != 0) && ((uVar3 <= uVar2 || ((uVar3 & uVar3 - 1) != 0)))) {
    *(undefined1 *)(param_1 + 1) = 0x4b;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  uVar8 = (param_3 - 0x10) + uVar15 * -8;
  param_2 = param_2 + 4;
  if (param_3 - 0x10 < uVar15 * 8) {
    param_1[1] = 0x13;
    param_1[2] = (ulong)param_2;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  uVar9 = uVar8 + uVar15 * -4;
  puVar1 = param_2 + uVar15 * 2;
  if (uVar8 < uVar15 * 4) {
    param_1[1] = 0x13;
    param_1[2] = (ulong)puVar1;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  if (8 < uVar4) {
    *(undefined1 *)(param_1 + 1) = 0x4a;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  puVar6 = puVar1 + uVar15;
  if (uVar4 == 0) {
    uVar19 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar17 = 0;
    uVar16 = 0;
    goto LAB_006e040c;
  }
  puVar7 = puVar6;
  if (uVar18 != 2) {
    if (uVar9 < 4) {
LAB_006e09a4:
      *(undefined1 *)((long)param_1 + 0xb) = 0;
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined2 *)((long)param_1 + 9) = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      param_1[2] = (ulong)puVar7;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
    uVar18 = *puVar6;
    uVar20 = 0x4d;
    uVar5 = uVar18 - 1;
    if ((7 < uVar5) || ((0xfdU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_006e0930;
    puVar7 = puVar6 + 1;
    uVar16 = 0x706080402000001 >> ((ulong)(uVar5 * 8) & 0x3f);
    if (uVar4 == 1) {
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar17 = 0;
      uVar19 = uVar9 - 4;
    }
    else {
      if (uVar9 - 4 < 4) goto LAB_006e09a4;
      uVar18 = *puVar7;
      uVar20 = 0x4d;
      uVar5 = uVar18 - 1;
      if ((7 < uVar5) || ((0xfdU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_006e0930;
      puVar7 = puVar6 + 2;
      uVar17 = 0x706080402000001 >> ((ulong)(uVar5 * 8) & 0x3f);
      if (uVar4 == 2) {
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar8 = 0;
        uVar19 = uVar9 - 8;
      }
      else {
        if (uVar9 - 8 < 4) goto LAB_006e09a4;
        uVar18 = *puVar7;
        uVar20 = 0x4d;
        uVar5 = uVar18 - 1;
        if ((7 < uVar5) || ((0xfdU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_006e0930;
        puVar7 = puVar6 + 3;
        uVar8 = 0x706080402000001 >> ((ulong)(uVar5 * 8) & 0x3f);
        if (uVar4 == 3) {
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar19 = uVar9 - 0xc;
        }
        else {
          if (uVar9 - 0xc < 4) goto LAB_006e09a4;
          uVar18 = *puVar7;
          uVar20 = 0x4d;
          uVar5 = uVar18 - 1;
          if ((7 < uVar5) || ((0xfdU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_006e0930;
          puVar7 = puVar6 + 4;
          uVar10 = 0x706080402000001 >> ((ulong)(uVar5 * 8) & 0x3f);
          if (uVar4 == 4) {
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar19 = uVar9 - 0x10;
          }
          else {
            if (uVar9 - 0x10 < 4) goto LAB_006e09a4;
            uVar18 = *puVar7;
            uVar20 = 0x4d;
            uVar5 = uVar18 - 1;
            if ((7 < uVar5) || ((0xfdU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_006e0930;
            puVar7 = puVar6 + 5;
            uVar11 = 0x706080402000001 >> ((ulong)(uVar5 * 8) & 0x3f);
            if (uVar4 == 5) {
              uVar13 = 0;
              uVar12 = 0;
              uVar19 = uVar9 - 0x14;
            }
            else {
              if (uVar9 - 0x14 < 4) goto LAB_006e09a4;
              uVar18 = *puVar7;
              uVar20 = 0x4d;
              uVar5 = uVar18 - 1;
              if ((7 < uVar5) || ((0xfdU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_006e0930;
              puVar7 = puVar6 + 6;
              uVar12 = 0x706080402000001 >> ((ulong)(uVar5 * 8) & 0x3f);
              if (uVar4 == 6) {
                uVar13 = 0;
                uVar19 = uVar9 - 0x18;
              }
              else {
                if (uVar9 - 0x18 < 4) goto LAB_006e09a4;
                uVar18 = *puVar7;
                uVar20 = 0x4d;
                uVar5 = uVar18 - 1;
                if ((7 < uVar5) || ((0xfdU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_006e0930;
                puVar7 = puVar6 + 7;
                uVar13 = 0x706080402000001 >> ((ulong)(uVar5 * 8) & 0x3f);
                uVar19 = uVar9 - 0x1c;
                if (uVar4 != 7) {
                  if (uVar9 - 0x1c < 4) goto LAB_006e09a4;
                  uVar18 = *puVar7;
                  uVar20 = 0x4d;
                  uVar5 = uVar18 - 1;
                  if ((7 < uVar5) || ((0xfdU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_006e0930;
                  uVar19 = 0x706080402000001 >> ((ulong)(uVar5 * 8) & 0x3f);
LAB_006e0994:
                  puVar6 = puVar6 + 8;
                  uVar9 = uVar9 - 0x20;
                  goto LAB_006e040c;
                }
              }
            }
          }
        }
      }
    }
    uVar9 = uVar19;
    puVar6 = puVar7;
    uVar19 = 0;
    goto LAB_006e040c;
  }
  if (uVar9 < 4) goto LAB_006e09a4;
  uVar18 = *puVar6;
  if (uVar18 - 1 < 8) {
    puVar7 = puVar6 + 1;
    uVar16 = 0x605080302000901 >> ((ulong)((uVar18 - 1) * 8) & 0x3f);
    if (uVar4 == 1) {
      uVar19 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar17 = 0;
      puVar6 = puVar7;
      uVar9 = uVar9 - 4;
      goto LAB_006e040c;
    }
    if (uVar9 - 4 < 4) goto LAB_006e09a4;
    uVar18 = *puVar7;
    if (uVar18 - 1 < 8) {
      puVar7 = puVar6 + 2;
      uVar17 = 0x605080302000901 >> ((ulong)((uVar18 - 1) * 8) & 0x3f);
      if (uVar4 == 2) {
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar8 = 0;
        uVar19 = uVar9 - 8;
LAB_006e0570:
        uVar9 = uVar19;
        puVar6 = puVar7;
        uVar19 = 0;
LAB_006e040c:
        lVar21 = (ulong)uVar4 * (ulong)uVar2;
        uVar22 = lVar21 * 4;
        if (uVar9 < uVar22) {
          param_1[1] = 0x13;
          param_1[2] = (ulong)puVar6;
          *(undefined1 *)param_1 = 0xff;
          return;
        }
        if (uVar22 <= uVar9 + lVar21 * -4) {
          *(uint *)(param_1 + 9) = uVar4;
          *(uint *)((long)param_1 + 0x4c) = uVar2;
          *(uint *)(param_1 + 10) = uVar3;
          param_1[2] = uVar15 * 8;
          param_1[3] = (ulong)puVar1;
          param_1[4] = uVar15 * 4;
          param_1[5] = (ulong)puVar6;
          param_1[6] = uVar22;
          param_1[7] = (ulong)(puVar6 + lVar21);
          param_1[8] = uVar22;
          *(undefined2 *)((long)param_1 + 0x54) = uVar14;
          *param_1 = (uVar13 & 0xff) << 0x30 | uVar19 << 0x38 | (uVar12 & 0xff) << 0x28 |
                     (uVar11 & 0xff) << 0x20 | (uVar10 & 0xff) << 0x18 | (uVar8 & 0xff) << 0x10 |
                     (uVar17 & 0xff) << 8 | uVar16 & 0xff;
          param_1[1] = (ulong)param_2;
          return;
        }
        param_1[1] = 0x13;
        param_1[2] = (ulong)(puVar6 + lVar21);
        *(undefined1 *)param_1 = 0xff;
        return;
      }
      if (uVar9 - 8 < 4) goto LAB_006e09a4;
      uVar18 = *puVar7;
      if (uVar18 - 1 < 8) {
        puVar7 = puVar6 + 3;
        uVar8 = 0x605080302000901 >> ((ulong)((uVar18 - 1) * 8) & 0x3f);
        if (uVar4 == 3) {
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar19 = uVar9 - 0xc;
          goto LAB_006e0570;
        }
        if (uVar9 - 0xc < 4) goto LAB_006e09a4;
        uVar18 = *puVar7;
        if (uVar18 - 1 < 8) {
          puVar7 = puVar6 + 4;
          uVar10 = 0x605080302000901 >> ((ulong)((uVar18 - 1) * 8) & 0x3f);
          if (uVar4 == 4) {
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar19 = uVar9 - 0x10;
            goto LAB_006e0570;
          }
          if (uVar9 - 0x10 < 4) goto LAB_006e09a4;
          uVar18 = *puVar7;
          if (uVar18 - 1 < 8) {
            puVar7 = puVar6 + 5;
            uVar11 = 0x605080302000901 >> ((ulong)((uVar18 - 1) * 8) & 0x3f);
            if (uVar4 == 5) {
              uVar13 = 0;
              uVar12 = 0;
              uVar19 = uVar9 - 0x14;
              goto LAB_006e0570;
            }
            if (uVar9 - 0x14 < 4) goto LAB_006e09a4;
            uVar18 = *puVar7;
            if (uVar18 - 1 < 8) {
              puVar7 = puVar6 + 6;
              uVar12 = 0x605080302000901 >> ((ulong)((uVar18 - 1) * 8) & 0x3f);
              if (uVar4 == 6) {
                uVar13 = 0;
                uVar19 = uVar9 - 0x18;
                goto LAB_006e0570;
              }
              if (uVar9 - 0x18 < 4) goto LAB_006e09a4;
              uVar18 = *puVar7;
              if (uVar18 - 1 < 8) {
                puVar7 = puVar6 + 7;
                uVar13 = 0x605080302000901 >> ((ulong)((uVar18 - 1) * 8) & 0x3f);
                uVar19 = uVar9 - 0x1c;
                if (uVar4 == 7) goto LAB_006e0570;
                if (uVar9 - 0x1c < 4) goto LAB_006e09a4;
                uVar18 = *puVar7;
                if (uVar18 - 1 < 8) {
                  uVar19 = 0x605080302000901 >> ((ulong)((uVar18 - 1) * 8) & 0x3f);
                  goto LAB_006e0994;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar20 = 0x4e;
LAB_006e0930:
  *(undefined1 *)(param_1 + 1) = uVar20;
  *(uint *)((long)param_1 + 0xc) = uVar18;
  *(undefined1 *)param_1 = 0xff;
  return;
}


// ===== 006e09d0  <std::fs::[A]::std::fs::DirEntry>::path =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[A]::std::fs::DirEntry>::path */

void __rustcall <std::fs::[A]::std::fs::DirEntry>::path(long *param_1)

{
  <std::path::[16]::std::path::Path>::_join
            (*(undefined8 *)(*param_1 + 0x18),*(undefined8 *)(*param_1 + 0x20),param_1[1],
             param_1[2] + -1);
  return;
}


// ===== 006e09e4  <std::fs::[A]::std::fs::DirEntry>::metadata =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[A]::std::fs::DirEntry>::metadata */

void __rustcall <std::fs::[A]::std::fs::DirEntry>::metadata(undefined8 *param_1,undefined8 *param_2)

{
  long local_a8;
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
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_006ea0a4(&local_a8,*param_2,param_2[1]);
  if (local_a8 == 1) {
    *param_1 = 1;
    param_1[1] = local_a0;
    return;
  }
  param_1[10] = uStack_58;
  param_1[9] = local_60;
  param_1[0xc] = uStack_48;
  param_1[0xb] = local_50;
  param_1[0xe] = uStack_38;
  param_1[0xd] = local_40;
  param_1[0x10] = uStack_28;
  param_1[0xf] = local_30;
  param_1[2] = uStack_98;
  param_1[1] = local_a0;
  param_1[4] = uStack_88;
  param_1[3] = local_90;
  param_1[6] = uStack_78;
  param_1[5] = local_80;
  param_1[8] = uStack_68;
  param_1[7] = local_70;
  *param_1 = 0;
  return;
}


// ===== 006e0a84  <std::fs::[A]::std::fs::DirEntry>::file_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[A]::std::fs::DirEntry>::file_name */

void __rustcall <std::fs::[A]::std::fs::DirEntry>::file_name(size_t *param_1,long param_2)

{
  size_t __n;
  void *__dest;
  void *__src;
  
  __n = *(long *)(param_2 + 0x10) - 1;
  if (__n == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  __src = *(void **)(param_2 + 8);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(__n,1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,__src,__n);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,__n);
}


// ===== 006e0b0c  <std::fs::[A]::std::fs::DirEntry>::file_type =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[A]::std::fs::DirEntry>::file_type */

void __rustcall
<std::fs::[A]::std::fs::DirEntry>::file_type(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint local_a8 [2];
  undefined8 local_a0;
  undefined4 local_90;
  
  uVar1 = *(byte *)(param_2 + 4) - 1;
  if ((uVar1 < 0xc) && ((0xaabU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    local_90 = *(undefined4 *)(&DAT_0045c788 + ((ulong)uVar1 & 0xff) * 4);
  }
  else {
    FUN_006ea0a4(local_a8,*param_2,param_2[1]);
    if ((local_a8[0] & 1) != 0) {
      *(undefined8 *)(param_1 + 2) = local_a0;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = local_90;
  return;
}


// ===== 006e0b9c  FUN_006e0b9c =====

void FUN_006e0b9c(undefined1 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  bVar1 = *param_2;
  if ((param_3 == 1) && ((bVar1 == 0x2d || (bVar1 == 0x2b)))) {
LAB_006e0bb8:
    param_1[1] = 1;
    *param_1 = 1;
    return;
  }
  if (bVar1 == 0x2b) {
    param_2 = param_2 + 1;
  }
  uVar4 = param_3 - (ulong)(bVar1 == 0x2b);
  if (uVar4 < 0x11) {
    uVar5 = 0;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      bVar1 = *param_2;
      uVar2 = (bVar1 - 0x41 & 0xffffffdf) + 10;
      if (bVar1 < 0x3a) {
        uVar2 = bVar1 - 0x30;
      }
      if (0xf < uVar2) goto LAB_006e0bb8;
      uVar5 = (ulong)uVar2 | uVar5 << 4;
      param_2 = param_2 + 1;
    }
  }
  else {
    uVar5 = 0;
    do {
      bVar1 = *param_2;
      uVar2 = bVar1 - 0x41;
      uVar3 = bVar1 - 0x30;
      if (uVar5 >> 0x3c != 0) {
        uVar2 = (uVar2 & 0xffffffde) + 10;
        if (bVar1 < 0x3a) {
          uVar2 = uVar3;
        }
        if (uVar2 < 0x10) {
          param_1[1] = 2;
          *param_1 = 1;
          return;
        }
        goto LAB_006e0bb8;
      }
      uVar2 = (uVar2 & 0xffffffdf) + 10;
      if (bVar1 < 0x3a) {
        uVar2 = uVar3;
      }
      if (0xf < uVar2) goto LAB_006e0bb8;
      uVar5 = (ulong)uVar2 | uVar5 << 4;
      uVar4 = uVar4 - 1;
      param_2 = param_2 + 1;
    } while (uVar4 != 0);
  }
  *(ulong *)(param_1 + 8) = uVar5;
  *param_1 = 0;
  return;
}


// ===== 006e0c94  <std::fs::[D]::std::fs::DirBuilder>::_create =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[D]::std::fs::DirBuilder>::_create */

char * __rustcall
<std::fs::[D]::std::fs::DirBuilder>::_create(long param_1,char *param_2,char *param_3)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong local_148;
  long local_140;
  ulong local_138;
  undefined1 local_130 [16];
  undefined1 local_120;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f0 [8];
  char *local_e8;
  undefined1 local_e0;
  uint local_d8;
  undefined2 local_b8;
  undefined1 local_b6;
  
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    pcVar15 = (char *)FUN_006ec744(param_1,param_2,param_3);
    return pcVar15;
  }
  if (param_3 == (char *)0x0) {
    local_f6 = false;
  }
  else {
    local_f6 = *param_2 == '/';
  }
  local_120 = 0xff;
  local_f8 = 0x201;
  local_f0 = (undefined1  [8])0x1;
  local_e8 = (char *)0x0;
  local_e0 = 0xff;
  local_b6 = 0;
  local_b8 = 0x201;
  local_130._0_8_ = param_2;
  local_130._8_8_ = param_3;
  uVar11 = FUN_0070b03c(local_130,local_f0);
  if ((uVar11 & 1) == 0) {
    if (param_3 == (char *)0x0) {
      local_b6 = false;
    }
    else {
      local_b6 = *param_2 == '/';
    }
    local_b8 = 0x201;
    local_e0 = 0xff;
    local_f0 = (undefined1  [8])param_2;
    local_e8 = param_3;
    <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
              (local_130,local_f0);
    if ((local_130[0] - 7 < 0xf8) &&
       (lVar12 = <std::path::[8]::std::path::Components>::as_path(local_f0), lVar12 != 0)) {
      uVar11 = 0;
      auVar22 = auVar3;
      do {
        uVar17 = auVar22._8_8_;
        pcVar15 = auVar22._0_8_;
        if (uVar17 == 0) {
          local_b6 = false;
        }
        else {
          local_b6 = *pcVar15 == '/';
        }
        local_e0 = 0xff;
        local_b8 = 0x201;
        _local_f0 = auVar22;
        <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
                  (local_130,local_f0);
        if (local_130[0] - 7 < 0xf8) {
          auVar21 = <std::path::[8]::std::path::Components>::as_path(local_f0);
          auVar7 = auVar21;
          if (uVar17 == 0) goto LAB_006e0e40;
LAB_006e0e28:
          local_f6 = *pcVar15 == '/';
        }
        else {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar17;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar17;
          auVar21 = auVar21 << 0x40;
          auVar7 = auVar7 << 0x40;
          if (uVar17 != 0) goto LAB_006e0e28;
LAB_006e0e40:
          auVar21 = auVar7;
          local_f6 = false;
        }
        uVar19 = auVar21._8_8_;
        local_120 = 0xff;
        local_f8 = 0x201;
        local_f0 = (undefined1  [8])0x1;
        local_e8 = (char *)0x0;
        local_e0 = 0xff;
        local_b6 = 0;
        local_b8 = 0x201;
        local_130 = auVar22;
        iVar9 = FUN_0070b03c(local_130,local_f0);
        if (iVar9 != 0) break;
        if (uVar17 == 0) {
          local_b6 = false;
        }
        else {
          local_b6 = *pcVar15 == '/';
        }
        local_e0 = 0xff;
        local_b8 = 0x201;
        _local_f0 = auVar22;
        <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
                  (local_130,local_f0);
        if (0xf7 < local_130[0] - 7) break;
        lVar12 = <std::path::[8]::std::path::Components>::as_path(local_f0);
        if (lVar12 == 0) break;
        pcVar13 = (char *)FUN_006ec744(param_1,pcVar15,uVar17);
        local_130._0_8_ = pcVar13;
        if (pcVar13 == (char *)0x0) break;
        uVar20 = (ulong)pcVar13 & 3;
        auVar22 = _local_f0;
        if (uVar20 < 2) {
          if (uVar20 == 0) {
            uVar14 = (ulong)(byte)pcVar13[0x10];
          }
          else {
            uVar14 = (ulong)(byte)pcVar13[0x1f];
          }
        }
        else if (uVar20 == 2) {
                    /* try { // try from 006e0f04 to 006e0f17 has its CatchHandler @ 006e12d8 */
          lVar12 = core::io::error::os_functions::get_os_functions();
          uVar14 = (**(code **)(lVar12 + 8))((ulong)pcVar13 >> 0x20);
          auVar22 = _local_f0;
        }
        else {
          uVar14 = (ulong)pcVar13 >> 0x20;
        }
        _local_f0 = auVar22;
        if ((uVar14 & 0xff) != 0) {
          if (uVar20 < 2) {
            if (uVar20 == 0) {
              uVar10 = (uint)(byte)pcVar13[0x10];
            }
            else {
              uVar10 = (uint)(byte)pcVar13[0x1f];
            }
          }
          else if (uVar20 == 3) {
            uVar10 = (uint)((ulong)pcVar13 >> 0x20);
          }
          else {
                    /* try { // try from 006e0f8c to 006e0ffb has its CatchHandler @ 006e12c4 */
            lVar12 = core::io::error::os_functions::get_os_functions();
            uVar10 = (**(code **)(lVar12 + 8))((ulong)pcVar13 >> 0x20);
          }
          if ((uVar10 & 0xff) != 0xc) {
            return pcVar13;
          }
          std::sys::fs::metadata(local_f0,pcVar15,uVar17);
          if (local_f0 == (undefined1  [8])0x1) {
            if (((ulong)local_e8 & 3) - 2 < 2) {
              return pcVar13;
            }
            if ((_local_f0 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
              return pcVar13;
            }
            local_e8 = local_e8 + -1;
            local_f0 = (undefined1  [8])0x3;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_e8);
            return pcVar13;
          }
          if ((local_d8 & 0xf000) != 0x4000) {
            return pcVar13;
          }
          local_f0 = (undefined1  [8])pcVar13;
          FUN_006c46d4(local_f0);
          break;
        }
        if ((1 < uVar20 - 2) && (uVar20 != 0)) {
          local_e8 = pcVar13 + -1;
          local_f0._1_7_ = auVar22._1_7_;
          local_f0[0] = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_e8);
        }
        uVar11 = uVar11 + 1;
        auVar22 = auVar21;
      } while (auVar21._0_8_ != 0);
      uVar17 = uVar11 * 0x10;
      uVar18 = 0;
      if ((uVar11 >> 0x3c != 0) || (0x7ffffffffffffff8 < uVar17)) {
LAB_006e105c:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar18,uVar17);
      }
      if (uVar17 == 0) {
        local_148 = 0;
        lVar12 = 8;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar18 = 8;
        lVar12 = __rustc::__rust_alloc(uVar17,8);
        local_148 = uVar11;
        if (lVar12 == 0) goto LAB_006e105c;
      }
      local_138 = 0;
      local_140 = lVar12;
      if (uVar11 != 0) {
        uVar20 = 0;
        do {
          uVar14 = local_138;
          if (auVar3._0_8_ == (char *)0x0) {
            lVar12 = local_140;
            uVar17 = uVar20;
            lVar2 = local_140;
            if (uVar20 == 0) goto LAB_006e1158;
            break;
          }
          if (auVar3._8_8_ == 0) {
            local_b6 = false;
          }
          else {
            local_b6 = *auVar3._0_8_ == '/';
          }
          local_e0 = 0xff;
          local_b8 = 0x201;
                    /* try { // try from 006e10e8 to 006e114b has its CatchHandler @ 006e12f0 */
          _local_f0 = auVar3;
          <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::
          next_back(local_130,local_f0);
          if (local_130[0] - 7 < 0xf8) {
            auVar22 = <std::path::[8]::std::path::Components>::as_path(local_f0);
            auVar21 = auVar22;
          }
          else {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar19;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar19;
            auVar22 = auVar22 << 0x40;
            auVar21 = auVar4 << 0x40;
          }
          if (uVar14 == local_148) {
            FUN_006cecec(&local_148,uVar14,1,8,0x10);
            lVar12 = local_140;
            auVar22 = auVar21;
          }
          uVar19 = auVar22._8_8_;
          pauVar1 = (undefined1 (*) [16])(lVar12 + uVar20);
          local_138 = uVar14 + 1;
          uVar20 = uVar20 + 0x10;
          *pauVar1 = auVar3;
          lVar2 = local_140;
          auVar3 = auVar22;
        } while (uVar11 != local_138);
        do {
          lVar12 = lVar2 + uVar17;
                    /* try { // try from 006e11bc to 006e11c3 has its CatchHandler @ 006e12ec */
          pcVar15 = (char *)FUN_006ec744(param_1,*(undefined8 *)(lVar12 + -0x10),
                                         *(undefined8 *)(lVar12 + -8));
          auVar5 = local_130;
          if (pcVar15 != (char *)0x0) {
            uVar11 = (ulong)pcVar15 & 3;
            local_130._0_8_ = pcVar15;
            if (uVar11 < 2) {
              if (uVar11 == 0) {
                uVar10 = (uint)(byte)pcVar15[0x10];
              }
              else {
                uVar10 = (uint)(byte)pcVar15[0x1f];
              }
            }
            else if (uVar11 == 3) {
              uVar10 = (uint)((ulong)pcVar15 >> 0x20);
            }
            else {
                    /* try { // try from 006e1200 to 006e122b has its CatchHandler @ 006e12c8 */
              lVar16 = core::io::error::os_functions::get_os_functions();
              uVar10 = (**(code **)(lVar16 + 8))((ulong)pcVar15 >> 0x20);
            }
            if ((uVar10 & 0xff) != 0xc) {
LAB_006e12a4:
              if (local_148 == 0) {
                return pcVar15;
              }
              __rustc::__rust_dealloc(lVar2,local_148 << 4,8);
              return pcVar15;
            }
            std::sys::fs::metadata
                      (local_f0,*(undefined8 *)(lVar12 + -0x10),*(undefined8 *)(lVar12 + -8));
            auVar6._8_8_ = local_130._8_8_;
            auVar6._0_8_ = local_130._0_8_;
            auVar5._8_8_ = local_130._8_8_;
            auVar5._0_8_ = local_130._0_8_;
            bVar8 = local_f0 == (undefined1  [8])0x1;
            if (bVar8) {
              if ((1 < ((ulong)local_e8 & 3) - 2) &&
                 ((_local_f0 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
                local_e8 = local_e8 + -1;
                local_f0[0] = 3;
                    /* try { // try from 006e129c to 006e12a3 has its CatchHandler @ 006e12c0 */
                <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_e8);
              }
              goto LAB_006e12a4;
            }
            if ((local_d8 & 0xf000) != 0x4000) goto LAB_006e12a4;
            if ((1 < uVar11 - 2) && (auVar5 = auVar6, uVar11 != 0)) {
              local_e8 = pcVar15 + -1;
              local_f0[0] = 3;
                    /* try { // try from 006e1264 to 006e126b has its CatchHandler @ 006e12ec */
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_e8);
              auVar5._8_8_ = local_130._8_8_;
              auVar5._0_8_ = local_130._0_8_;
            }
          }
          local_130 = auVar5;
          uVar17 = uVar17 - 0x10;
          lVar12 = lVar2;
        } while (uVar17 != 0);
      }
LAB_006e1158:
      if (local_148 != 0) {
        __rustc::__rust_dealloc(lVar12,local_148 << 4,8);
      }
    }
  }
  return (char *)0x0;
}


// ===== 006e131c  <std::process::[J]::std::process::ExitStatusError>::code_nonzero =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[J]::std::process::ExitStatusError>::code_nonzero */

uint __rustcall <std::process::[J]::std::process::ExitStatusError>::code_nonzero(uint *param_1)

{
  uint uVar1;
  undefined1 local_14 [4];
  
  if ((*param_1 & 0x7f) != 0) {
    return 0;
  }
  uVar1 = *param_1 >> 8 & 0xff;
  if (uVar1 != 0) {
    return uVar1;
  }
  local_14[0] = 4;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0045b05c,0x2b,local_14,&DAT_009773c8,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00977958);
}


// ===== 006e1374  <std::process::[J]::std::process::ExitStatusError>::code =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[J]::std::process::ExitStatusError>::code */

undefined1  [16] __rustcall <std::process::[J]::std::process::ExitStatusError>::code(uint *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 local_14 [4];
  
  if ((*param_1 & 0x7f) != 0) {
    return ZEXT816(0);
  }
  uVar1 = *param_1 >> 8 & 0xff;
  auVar2._12_4_ = 0;
  auVar2._8_4_ = uVar1;
  if (uVar1 != 0) {
    auVar2._0_8_ = 1;
    return auVar2;
  }
  local_14[0] = 4;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0045b05c,0x2b,local_14,&DAT_009773c8,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00977958);
}


// ===== 006e13d4  <std::process::[N]::std::process::ExitCode>::exit_process =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[N]::std::process::ExitCode>::exit_process */

int __rustcall <std::process::[N]::std::process::ExitCode>::exit_process(undefined1 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *extraout_x8;
  int __fd;
  undefined1 auVar4 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  int iStack_24;
  
  lVar2 = std::process::exit(param_1);
  pcStack_38 = <std::process::[T]::std::process::Child>::wait_with_output;
  iVar1 = *(int *)(lVar2 + 0xc);
  *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
  puStack_40 = &stack0xfffffffffffffff0;
  if (iVar1 != -1) {
    puStack_40 = &stack0xfffffffffffffff0;
    close(iVar1);
  }
  lStack_90 = 0;
  lStack_88 = 0;
  iVar1 = *(int *)(lVar2 + 0x10);
  __fd = *(int *)(lVar2 + 0x14);
  lStack_a0 = 0;
  lStack_98 = 1;
  lStack_80 = 1;
  lStack_78 = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  if (iVar1 == -1) {
    if (__fd == -1) goto LAB_006e14f4;
    iStack_24 = __fd;
    auVar4 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&iStack_24,&lStack_88);
    if (auVar4._0_8_ == 1) {
      uStack_70 = auVar4._8_8_;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045b05c,0x2b,&uStack_70,&PTR_FUN_009773e8,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977a30);
    }
  }
  else {
    if (__fd != -1) {
      lVar3 = FUN_006f853c(iVar1,&lStack_a0,__fd,&lStack_88);
      if (lVar3 != 0) {
        uStack_70 = lVar3;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_0045b05c,0x2b,&uStack_70,&PTR_FUN_009773e8,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00977a60);
      }
      goto LAB_006e14f4;
    }
    iStack_24 = iVar1;
    auVar4 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&iStack_24,&lStack_a0);
    __fd = iVar1;
    if (auVar4._0_8_ == 1) {
      uStack_70 = auVar4._8_8_;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045b05c,0x2b,&uStack_70,&PTR_FUN_009773e8,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977a48);
    }
  }
  close(__fd);
LAB_006e14f4:
  *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
  FUN_006e6fc4(&uStack_70,lVar2);
  if ((uStack_70 & 1) == 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
    *(undefined4 *)(extraout_x8 + 6) = uStack_70._4_4_;
    extraout_x8[1] = lStack_98;
    *extraout_x8 = lStack_a0;
    extraout_x8[3] = lStack_88;
    extraout_x8[2] = lStack_90;
    extraout_x8[5] = lStack_78;
    extraout_x8[4] = lStack_80;
    lStack_60 = lStack_90;
    lStack_50 = lStack_80;
    lStack_58 = lStack_88;
    lStack_48 = lStack_78;
  }
  else {
    *extraout_x8 = -1;
    extraout_x8[1] = lStack_68;
    if (lStack_88 != 0) {
      __rustc::__rust_dealloc(lStack_80,lStack_88,1);
    }
    if (lStack_a0 != 0) {
      __rustc::__rust_dealloc(lStack_98,lStack_a0,1);
    }
    iVar1 = *(int *)(lVar2 + 0xc);
  }
  if (iVar1 != -1) {
    close(iVar1);
  }
  if (*(int *)(lVar2 + 0x10) != -1) {
    close(*(int *)(lVar2 + 0x10));
  }
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 != -1) {
    iVar1 = close(iVar1);
  }
  return iVar1;
}


// ===== 006e13e4  <std::process::[T]::std::process::Child>::wait_with_output =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[T]::std::process::Child>::wait_with_output */

int __rustcall
<std::process::[T]::std::process::Child>::wait_with_output(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int __fd;
  undefined1 auVar3 [16];
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long local_38;
  int local_14;
  
  iVar1 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  if (iVar1 != -1) {
    close(iVar1);
  }
  local_80 = 0;
  local_78 = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  __fd = *(int *)(param_2 + 0x14);
  local_90 = 0;
  lStack_88 = 1;
  lStack_70 = 1;
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
  if (iVar1 == -1) {
    if (__fd == -1) goto LAB_006e14f4;
                    /* try { // try from 006e1490 to 006e149b has its CatchHandler @ 006e15f8 */
    local_14 = __fd;
    auVar3 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&local_14,&local_78);
    if (auVar3._0_8_ == 1) {
                    /* try { // try from 006e14a8 to 006e14cb has its CatchHandler @ 006e161c */
      local_60 = auVar3._8_8_;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045b05c,0x2b,&local_60,&PTR_FUN_009773e8,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977a30);
    }
  }
  else {
    if (__fd != -1) {
                    /* try { // try from 006e1444 to 006e1453 has its CatchHandler @ 006e1600 */
      lVar2 = FUN_006f853c(iVar1,&local_90,__fd,&local_78);
      if (lVar2 != 0) {
                    /* try { // try from 006e145c to 006e147f has its CatchHandler @ 006e1638 */
        local_60 = lVar2;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_0045b05c,0x2b,&local_60,&PTR_FUN_009773e8,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00977a60);
      }
      goto LAB_006e14f4;
    }
                    /* try { // try from 006e14d8 to 006e14e3 has its CatchHandler @ 006e15f4 */
    local_14 = iVar1;
    auVar3 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&local_14,&local_90);
    __fd = iVar1;
    if (auVar3._0_8_ == 1) {
                    /* try { // try from 006e15cc to 006e15ef has its CatchHandler @ 006e1608 */
      local_60 = auVar3._8_8_;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045b05c,0x2b,&local_60,&PTR_FUN_009773e8,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977a48);
    }
  }
  close(__fd);
LAB_006e14f4:
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
                    /* try { // try from 006e14fc to 006e1507 has its CatchHandler @ 006e1600 */
  FUN_006e6fc4(&local_60,param_2);
  if ((local_60 & 1) == 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 6) = local_60._4_4_;
    param_1[1] = lStack_88;
    *param_1 = local_90;
    param_1[3] = local_78;
    param_1[2] = local_80;
    param_1[5] = local_68;
    param_1[4] = lStack_70;
    local_50 = local_80;
    lStack_40 = lStack_70;
    lStack_48 = local_78;
    local_38 = local_68;
  }
  else {
    *param_1 = -1;
    param_1[1] = local_58;
    if (local_78 != 0) {
      __rustc::__rust_dealloc(lStack_70,local_78,1);
    }
    if (local_90 != 0) {
      __rustc::__rust_dealloc(lStack_88,local_90,1);
    }
    iVar1 = *(int *)(param_2 + 0xc);
  }
  if (iVar1 != -1) {
    close(iVar1);
  }
  if (*(int *)(param_2 + 0x10) != -1) {
    close(*(int *)(param_2 + 0x10));
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != -1) {
    iVar1 = close(iVar1);
  }
  return iVar1;
}


// ===== 006e1698  <std::process::[T]::std::process::Child>::kill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[T]::std::process::Child>::kill */

ulong __rustcall <std::process::[T]::std::process::Child>::kill(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = ::kill(param_1[2],9);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006e1738  <std::process::[T]::std::process::Child>::wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[T]::std::process::Child>::wait */

void __rustcall <std::process::[T]::std::process::Child>::wait(undefined4 *param_1,long param_2)

{
  int __fd;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  __fd = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  if (__fd != -1) {
    close(__fd);
  }
  FUN_006e6fc4(&local_30,param_2);
  if (local_30 == 1) {
    *(undefined8 *)(param_1 + 2) = local_28;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_2c;
  return;
}


// ===== 006e17b8  <std::process::[T]::std::process::Child>::try_wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[T]::std::process::Child>::try_wait */

void __rustcall
<std::process::[T]::std::process::Child>::try_wait(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  __pid_t _Var3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_30 [2];
  uint local_28;
  uint local_24;
  
  puVar5 = local_30;
  puVar6 = local_30;
  if ((*param_2 & 1) == 0) {
    local_24 = 0;
    _Var3 = waitpid(param_2[2],(int *)&local_24,1);
    if (_Var3 == 0) {
      puVar5 = &local_28;
      local_24 = 0;
    }
    else {
      if (_Var3 == -1) {
        piVar4 = (int *)__errno();
        iVar2 = *piVar4;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
        *param_1 = 1;
        return;
      }
      local_28 = 1;
      *param_2 = 1;
      param_2[1] = local_24;
    }
    *puVar5 = local_24;
  }
  else {
    local_28 = 1;
    puVar6 = param_2 + 1;
  }
  uVar1 = *puVar6;
  param_1[1] = local_28;
  param_1[2] = uVar1;
  *param_1 = 0;
  return;
}


// ===== 006e18a0  FUN_006e18a0 =====

undefined4
FUN_006e18a0(long *param_1,undefined8 ****param_2,long *param_3,long *param_4,uint param_5,
            undefined4 param_6,int param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 ***local_c8;
  undefined8 *****local_c0;
  code *pcStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined8 *****local_70;
  undefined *puStack_68;
  undefined4 local_44;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  if ((param_2 == (undefined8 ****)0x0) && ((*(byte *)(puVar1 + 4) & 1) == 0)) {
LAB_006e18d4:
    uVar6 = 0;
    param_1[1] = lVar2 + 1;
  }
  else {
    puVar5 = (undefined8 *)*puVar1;
    local_c8 = param_2;
    if (lVar2 == 0) {
      local_c0 = (undefined8 *****)(puVar1 + 3);
      pcStack_b8 = (code *)PTR_fmt_0099f458;
      uVar3 = core::fmt::write(*puVar5,puVar5[1],&DAT_0045b5da,&local_c0);
      if ((uVar3 & 1) == 0) {
        if (*(char *)(puVar1 + 4) == '\x01') {
          local_c0 = (undefined8 *****)&local_c8;
          pcStack_b8 = FUN_0070c30c;
          local_b0 = 0;
          local_a8 = CONCAT62(local_a8._2_6_,0x12);
          uVar3 = core::fmt::write(*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],&DAT_0045b5e5,
                                   &local_c0);
          goto joined_r0x006e19d8;
        }
        goto LAB_006e19dc;
      }
    }
    else {
      uVar3 = (**(code **)(puVar5[1] + 0x18))(*puVar5,&DAT_0045b5f1,6);
      if ((uVar3 & 1) == 0) {
        if (*(char *)(puVar1 + 4) == '\x01') {
          local_b0 = 0;
          local_c0 = (undefined8 *****)&DAT_003720f0;
          pcStack_b8 = FUN_006ff764;
          local_a8 = CONCAT62(local_a8._2_6_,0x15);
          uVar3 = core::fmt::write(*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],&DAT_003755d0,
                                   &local_c0);
joined_r0x006e19d8:
          if ((uVar3 & 1) != 0) goto LAB_006e1a8c;
        }
LAB_006e19dc:
        if (*param_3 == -1) {
          uVar3 = (**(code **)(((undefined8 *)*puVar1)[1] + 0x18))
                            (*(undefined8 *)*puVar1,&DAT_0045b5f7,9);
        }
        else {
          if ((*(byte *)(puVar1 + 4) & 1) == 0) {
            lStack_98 = param_3[5];
            local_a0 = param_3[4];
            lStack_88 = param_3[7];
            lStack_90 = param_3[6];
            lStack_78 = param_3[9];
            local_80 = param_3[8];
            puVar4 = &DAT_0045b600;
          }
          else {
            lStack_98 = param_3[5];
            local_a0 = param_3[4];
            lStack_88 = param_3[7];
            lStack_90 = param_3[6];
            lStack_78 = param_3[9];
            local_80 = param_3[8];
            puVar4 = &DAT_00368e80;
          }
          pcStack_b8 = (code *)param_3[1];
          local_c0 = (undefined8 *****)*param_3;
          local_a8 = param_3[3];
          local_b0 = param_3[2];
          local_70 = &local_c0;
          puStack_68 = PTR_fmt_0099f7a8;
          uVar3 = core::fmt::write(*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],puVar4,
                                   &local_70);
        }
        if (((uVar3 & 1) == 0) &&
           (uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(*puVar1,&DAT_0045b5d9,1),
           (uVar3 & 1) == 0)) {
          if ((*param_4 == 2) || ((param_5 & 1) == 0)) goto LAB_006e18d4;
          local_44 = param_6;
          if (*(char *)(puVar1 + 4) == '\x01') {
            local_b0 = 0;
            local_c0 = (undefined8 *****)&DAT_003720f0;
            pcStack_b8 = FUN_006ff764;
            local_a8 = CONCAT62(local_a8._2_6_,0x12);
            uVar3 = core::fmt::write(*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],&DAT_003755d0
                                     ,&local_c0);
            if ((uVar3 & 1) != 0) goto LAB_006e1a8c;
          }
          uVar3 = (**(code **)(((undefined8 *)*puVar1)[1] + 0x18))
                            (*(undefined8 *)*puVar1,"             at ",0x10);
          if ((uVar3 & 1) == 0) {
            local_c0 = (undefined8 *****)*puVar1;
            local_b0 = param_4[1];
            pcStack_b8 = (code *)*param_4;
            local_a8 = param_4[2];
            uVar3 = (**(code **)(puVar1[2] + 0x20))(puVar1[1],local_c0,&pcStack_b8);
            puVar4 = PTR_fmt_0099f518;
            if ((uVar3 & 1) == 0) {
              local_c0 = (undefined8 *****)&local_44;
              pcStack_b8 = (code *)PTR_fmt_0099f518;
              uVar3 = core::fmt::write(*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],
                                       &DAT_00366fcc,&local_c0);
              if ((uVar3 & 1) == 0) {
                if (param_7 == 1) {
                  local_70 = (undefined8 *****)CONCAT44(local_70._4_4_,param_8);
                  local_c0 = &local_70;
                  pcStack_b8 = (code *)puVar4;
                  uVar3 = core::fmt::write(*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],
                                           &DAT_00366fcc,&local_c0);
                  if ((uVar3 & 1) != 0) goto LAB_006e1a8c;
                }
                uVar3 = (**(code **)(((undefined8 *)*puVar1)[1] + 0x18))
                                  (*(undefined8 *)*puVar1,&DAT_0045b5d9,1);
                if ((uVar3 & 1) != 0) {
                  return 1;
                }
                goto LAB_006e18d4;
              }
            }
          }
        }
      }
    }
LAB_006e1a8c:
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 006e1bf0  <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::filename_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::filename_raw */

void __rustcall
<std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::filename_raw
          (undefined8 *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((*param_2 != 2) && (*param_2 != -1)) && (lVar1 = *(long *)(param_2 + 4), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_2 + 6);
    *param_1 = 0;
    param_1[1] = lVar1;
    param_1[2] = uVar2;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 006e1c28  <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name */

void __rustcall
<std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name
          (long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  if (*param_2 == -1) {
    lVar1 = *(long *)(param_2 + 2);
    lVar2 = *(long *)(param_2 + 4);
  }
  else {
    lVar1 = *(long *)(param_2 + 10);
    if (lVar1 == 0) {
      *param_1 = -1;
      return;
    }
    lVar2 = *(long *)(param_2 + 0xc);
  }
  core::str::converts::from_utf8(&local_70,lVar1,lVar2);
  if (local_70 == 1) {
    local_70 = 2;
  }
  else {
    rustc_demangle::try_demangle(&local_70,local_68,lStack_60);
    if (local_70 != 2) {
      lStack_a8 = lStack_60;
      local_b0 = local_68;
      lStack_98 = lStack_50;
      lStack_a0 = local_58;
      lStack_88 = lStack_40;
      local_90 = local_48;
      local_80 = local_38;
    }
  }
  *param_1 = local_70;
  param_1[9] = lVar2;
  param_1[2] = lStack_a8;
  param_1[1] = local_b0;
  param_1[4] = lStack_98;
  param_1[3] = lStack_a0;
  param_1[6] = lStack_88;
  param_1[5] = local_90;
  param_1[7] = local_80;
  param_1[8] = lVar1;
  return;
}


// ===== 006e1d0c  <std::thread::thread::std::thread::thread::Thread>::park_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::thread::std::thread::thread::Thread>::park_timeout */

void __rustcall
<std::thread::thread::std::thread::thread::Thread>::park_timeout
          (long *param_1,long param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auVar9 [12];
  long local_40;
  ulong uStack_38;
  
  piVar1 = (int *)(*param_1 + 0x28);
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + -1 == 0) {
    return;
  }
  auVar9 = FUN_006d63bc(1);
  lVar6 = auVar9._0_8_ + param_2;
  if (param_2 < 0 == SCARRY8(auVar9._0_8_,param_2)) {
    uVar8 = auVar9._8_4_ + param_3;
    if (999999999 < uVar8) {
      bVar5 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar5) goto LAB_006e1e0c;
      uVar8 = uVar8 + 0xc4653600;
    }
    uStack_38 = (ulong)uVar8;
    bVar5 = true;
    local_40 = lVar6;
  }
  else {
LAB_006e1e0c:
    bVar5 = false;
  }
  while (*piVar1 == -1) {
    plVar2 = &local_40;
    if (!bVar5) {
      plVar2 = (long *)0x0;
    }
    lVar6 = syscall(0x62,piVar1,0x89,0xffffffff,plVar2,0,0xffffffff);
    if ((-1 < lVar6) || (piVar7 = (int *)__errno(), *piVar7 != 4)) break;
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}


// ===== 006e1e14  <std::thread::thread::std::thread::thread::Thread>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::thread::std::thread::thread::Thread>::new */

void __rustcall
<std::thread::thread::std::thread::thread::Thread>::new(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *__size;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined1 auVar5 [16];
  undefined8 *local_28;
  
  if (*param_2 == -1) {
    uVar4 = 0;
  }
  else {
    auVar5 = <std::thread::thread::thread_name_string::ThreadNameString_as_core::convert::From<alloc::string::String>>
             ::from(param_2);
    unaff_x20 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
  }
                    /* try { // try from 006e1e50 to 006e1ef3 has its CatchHandler @ 006e1ef8 */
  auVar5 = alloc::sync::arcinner_layout_for_value_layout(8,0x20);
  __size = auVar5._8_8_;
  puVar2 = auVar5._0_8_;
  puVar3 = puVar2;
  if (__size != (undefined8 *)0x0) {
    if ((&DAT_00000010 < puVar2) || (__size < puVar2)) {
      if (puVar2 < &DAT_00000009) {
        puVar3 = (undefined8 *)&DAT_00000008;
      }
      local_28 = (undefined8 *)0x0;
      iVar1 = posix_memalign(&local_28,(size_t)puVar3,(size_t)__size);
      puVar3 = local_28;
      if (iVar1 != 0) goto LAB_006e1ee8;
    }
    else {
      puVar3 = (undefined8 *)malloc((size_t)__size);
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[3] = uVar4;
    puVar3[4] = unaff_x20;
    puVar3[2] = param_1;
    puVar3[1] = 1;
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 5) = 0;
    return;
  }
LAB_006e1ee8:
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(puVar2,__size);
}


// ===== 006e1f20  <std::thread::thread::std::thread::thread::Thread>::name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::thread::std::thread::thread::Thread>::name */

undefined1  [16] __rustcall
<std::thread::thread::std::thread::thread::Thread>::name(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar3 = *param_1;
  auVar4._0_8_ = *(long *)(lVar3 + 0x18);
  if (auVar4._0_8_ != 0) {
    auVar4._8_8_ = *(long *)(lVar3 + 0x20) + -1;
    return auVar4;
  }
  if (DAT_009a6f40 != 0) {
    puVar1 = &UNK_00378000;
    if (DAT_009a6f40 != *(long *)(lVar3 + 0x10)) {
      puVar1 = (undefined *)0x0;
    }
    auVar5._8_8_ = 4;
    auVar5._0_8_ = puVar1;
    return auVar5;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 006e1f68  <std::thread::thread::std::thread::thread::Thread>::park =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::thread::std::thread::thread::Thread>::park */

void __rustcall <std::thread::thread::std::thread::thread::Thread>::park(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  
  piVar1 = (int *)(*param_1 + 0x28);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    return;
  }
LAB_006e1fb0:
  if ((*piVar1 == -1) && (lVar5 = syscall(0x62,piVar1,0x89,0xffffffff,0,0,0xffffffff), lVar5 < 0))
  goto code_r0x006e1fe8;
  goto LAB_006e1ff8;
code_r0x006e1fe8:
  piVar6 = (int *)__errno();
  if (*piVar6 != 4) {
LAB_006e1ff8:
    while (*piVar1 == 1) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  goto LAB_006e1fb0;
}


// ===== 006e2018  <std::thread::thread::std::thread::thread::Thread>::from_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::thread::std::thread::thread::Thread>::from_raw */

long __rustcall <std::thread::thread::std::thread::thread::Thread>::from_raw(long param_1)

{
  return param_1 + -0x10;
}


// ===== 006e2020  <std::thread::spawnhook::std::thread::spawnhook::ChildSpawnHooks>::inherit_and_run =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::spawnhook::std::thread::spawnhook::ChildSpawnHooks>::inherit_and_run */

void __rustcall
<std::thread::spawnhook::std::thread::spawnhook::ChildSpawnHooks>::inherit_and_run(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *local_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  long *local_38;
  
  local_68 = param_1[3];
  local_70 = (undefined8 *)0x1;
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f7b0;
  if (uVar11 == 0) {
                    /* try { // try from 006e2160 to 006e219f has its CatchHandler @ 006e222c */
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f7b0);
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar11);
  }
  else {
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar11);
  }
  if (plVar8 < &DAT_00000002) {
    plVar8 = (long *)FUN_006c149c(uVar11 & 0xffffffff,plVar8,&local_70);
  }
  if (plVar8 != (long *)0x0) {
    if (local_70 == (undefined8 *)0x1) {
      local_38 = (long *)*plVar8;
      *plVar8 = local_68;
                    /* try { // try from 006e2090 to 006e2097 has its CatchHandler @ 006e21ac */
      <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop(&local_38);
      if (local_38 != (long *)0x0) {
        do {
          lVar10 = *local_38;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(local_38,0x10);
          if (bVar6) {
            *local_38 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 006e20b8 to 006e20bf has its CatchHandler @ 006e21a4 */
          <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow
                    (&local_38);
        }
      }
    }
    puVar2 = (undefined8 *)param_1[1];
    lVar10 = *param_1;
    puVar1 = puVar2 + param_1[2] * 2;
    puVar9 = puVar2;
    puVar7 = puVar2;
    local_70 = puVar2;
    local_60 = lVar10;
    puStack_58 = puVar1;
    if (param_1[2] != 0) {
      do {
        puVar12 = puVar7 + 2;
        uVar3 = *puVar7;
        lVar4 = puVar7[1];
                    /* try { // try from 006e2100 to 006e2107 has its CatchHandler @ 006e2204 */
        (**(code **)(lVar4 + 0x18))(uVar3);
        if (*(long *)(lVar4 + 8) != 0) {
          __rustc::__rust_dealloc(uVar3,*(long *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
        }
        puVar9 = puVar1;
        puVar7 = puVar12;
      } while (puVar12 != puVar1);
    }
                    /* try { // try from 006e212c to 006e212f has its CatchHandler @ 006e21e0 */
    FUN_006c50bc(puVar9,(ulong)((long)puVar1 - (long)puVar9) >> 4);
    if (lVar10 != 0) {
      __rustc::__rust_dealloc(puVar2,lVar10 << 4,8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::thread::local::panic_access_error(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976b98);
}


// ===== 006e2250  FUN_006e2250 =====

/* WARNING: Removing unreachable block (ram,0x006e33f4) */
/* WARNING: Removing unreachable block (ram,0x006e3418) */
/* WARNING: Removing unreachable block (ram,0x006e3424) */
/* WARNING: Removing unreachable block (ram,0x006e3434) */
/* WARNING: Removing unreachable block (ram,0x006e3470) */
/* WARNING: Removing unreachable block (ram,0x006e3484) */
/* WARNING: Removing unreachable block (ram,0x006e354c) */
/* WARNING: Removing unreachable block (ram,0x006e4008) */
/* WARNING: Removing unreachable block (ram,0x006e355c) */
/* WARNING: Removing unreachable block (ram,0x006e3618) */
/* WARNING: Removing unreachable block (ram,0x006e3564) */
/* WARNING: Removing unreachable block (ram,0x006e3494) */
/* WARNING: Removing unreachable block (ram,0x006e349c) */
/* WARNING: Removing unreachable block (ram,0x006e34ac) */
/* WARNING: Removing unreachable block (ram,0x006e34b0) */

void FUN_006e2250(undefined8 param_1,undefined8 param_2,undefined8 **param_3,long *param_4,
                 long *param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 uVar19;
  long lVar20;
  undefined8 **ppuVar21;
  long lVar22;
  long lVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  undefined8 **ppuVar29;
  undefined8 **ppuVar30;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  undefined8 **ppuVar37;
  undefined8 **extraout_x10;
  undefined8 **extraout_x10_00;
  int iVar38;
  ulong uVar39;
  undefined8 **ppuVar40;
  undefined8 **extraout_x12;
  long lVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  ulong extraout_x13;
  ulong *puVar44;
  undefined8 *puVar45;
  long extraout_x14;
  uint uVar46;
  ulong uVar47;
  ulong uVar48;
  byte bVar49;
  ulong uVar50;
  uint *puVar51;
  uint *puVar52;
  ulong *puVar53;
  long lVar54;
  undefined8 **ppuVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  undefined8 **ppuVar59;
  undefined8 **ppuVar60;
  ulong *puVar61;
  undefined8 *puVar62;
  undefined8 uVar63;
  undefined8 uVar64;
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
  undefined8 **local_920;
  undefined8 **local_8f8;
  undefined8 **local_8f0;
  undefined8 **local_8e8;
  undefined8 **local_890;
  undefined8 **local_880;
  ulong local_850;
  undefined8 local_848;
  undefined8 **local_840;
  undefined8 **local_828;
  undefined8 **local_820;
  undefined8 **local_818;
  undefined8 **local_810;
  undefined8 **local_808;
  long *local_7d8;
  long local_7d0;
  undefined8 uStack_7c8;
  long local_7c0;
  undefined8 **ppuStack_7b8;
  undefined8 **local_7b0;
  undefined8 **ppuStack_7a8;
  undefined8 **local_7a0;
  undefined8 **ppuStack_798;
  undefined8 **local_790;
  undefined8 **ppuStack_788;
  ulong local_780;
  undefined8 uStack_778;
  long local_770;
  undefined8 uStack_768;
  long local_760;
  undefined8 uStack_758;
  undefined8 **local_750;
  undefined8 uStack_748;
  undefined8 **local_740;
  undefined8 uStack_738;
  undefined8 **local_730;
  undefined8 uStack_728;
  long local_720;
  undefined8 local_718;
  long local_710;
  undefined8 local_708;
  long local_700;
  undefined8 local_6f8;
  long local_6f0;
  undefined8 local_6e8;
  long *local_6e0;
  undefined8 local_6d8;
  undefined8 local_6c8;
  undefined1 local_6c0;
  long *local_6b8;
  undefined8 *puStack_6b0;
  ulong local_6a8;
  undefined8 local_6a0;
  ulong uStack_698;
  long local_690;
  ulong local_688;
  undefined8 **local_680;
  undefined8 **ppuStack_678;
  undefined8 **ppuStack_670;
  undefined8 **ppuStack_668;
  undefined8 **local_660;
  undefined8 **ppuStack_658;
  undefined8 **ppuStack_650;
  undefined8 **ppuStack_648;
  undefined8 local_640;
  undefined7 uStack_638;
  undefined1 uStack_631;
  undefined7 uStack_630;
  undefined1 auStack_620 [88];
  long *local_5c8;
  undefined8 *local_5c0;
  undefined7 uStack_5b8;
  undefined1 uStack_5b1;
  undefined7 uStack_5b0;
  undefined1 uStack_5a9;
  ulong uStack_5a8;
  ulong local_5a0;
  ulong *local_598;
  ulong local_590;
  undefined8 **local_588;
  ulong local_580;
  long local_578;
  undefined8 **local_570;
  undefined8 *local_568;
  undefined8 **local_560;
  ulong local_558;
  undefined8 **local_550;
  ulong local_548;
  undefined8 *local_540;
  undefined7 uStack_538;
  undefined1 uStack_531;
  undefined7 uStack_530;
  undefined1 uStack_529;
  uint7 local_520;
  undefined1 uStack_519;
  undefined7 uStack_518;
  undefined1 uStack_511;
  undefined7 uStack_510;
  undefined1 uStack_509;
  undefined8 **ppuStack_508;
  undefined8 **local_500;
  undefined8 **ppuStack_4f8;
  undefined8 **local_4f0;
  undefined8 **local_4e0;
  undefined8 **ppuStack_4d8;
  undefined8 **local_4d0;
  undefined8 **ppuStack_4c8;
  undefined8 **ppuStack_4c0;
  undefined8 **ppuStack_4b8;
  undefined8 **ppuStack_4b0;
  undefined8 **local_4a8;
  undefined8 **ppuStack_4a0;
  undefined8 **local_498;
  uint7 local_490;
  undefined1 uStack_489;
  undefined7 uStack_488;
  undefined1 uStack_481;
  undefined7 uStack_480;
  undefined1 uStack_479;
  undefined8 **local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  byte local_460;
  uint7 uStack_45f;
  undefined1 uStack_458;
  undefined1 uStack_457;
  undefined6 uStack_456;
  undefined1 local_450;
  undefined7 uStack_44f;
  undefined8 **local_448;
  undefined8 **ppuStack_440;
  undefined8 local_438;
  undefined8 **ppuStack_430;
  undefined8 **local_428;
  undefined8 **ppuStack_420;
  undefined8 **local_418;
  undefined8 **ppuStack_410;
  ulong local_408;
  long local_400;
  undefined8 local_3f8;
  long local_3f0;
  undefined8 local_3e8;
  long local_3e0;
  undefined8 **local_3d8;
  long local_3d0;
  undefined8 **local_3c8;
  long local_3c0;
  undefined8 local_3b8;
  long local_3b0;
  undefined8 **local_3a8;
  long local_3a0;
  undefined8 local_398;
  long local_390;
  undefined8 local_388;
  undefined1 local_380 [16];
  long local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_348;
  undefined1 local_340;
  undefined8 **local_2a0;
  undefined8 **local_298;
  undefined8 **ppuStack_290;
  undefined8 **ppuStack_288;
  undefined8 **ppuStack_280;
  undefined8 **local_278;
  undefined8 local_270;
  undefined1 local_248;
  undefined2 local_238;
  undefined2 local_236;
  undefined8 *local_230;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  undefined8 **local_219;
  undefined8 **ppuStack_211;
  undefined1 local_209;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined8 **ppuStack_1f1;
  undefined8 local_1e9;
  undefined8 **ppuStack_1e1;
  long local_1d0 [11];
  long local_178;
  undefined8 local_170;
  long local_160;
  undefined8 local_158;
  long local_148;
  undefined8 local_140;
  long local_130;
  undefined8 local_128;
  long *local_c0 [7];
  undefined8 **local_88;
  undefined8 **local_78;
  undefined8 *__dest;
  long lVar23;
  undefined8 uVar31;
  
  auVar65 = FUN_0070f3b4();
  uVar31 = auVar65._8_8_;
  auVar75._8_8_ = param_5;
  auVar75._0_8_ = uVar31;
  __dest = auVar65._0_8_;
  local_920 = (undefined8 **)0x0;
                    /* try { // try from 006e2274 to 006e23ff has its CatchHandler @ 006e41d8 */
  auVar65 = FUN_0070f344(param_3,uVar31,&DAT_0045b46a);
  lVar54 = auVar65._0_8_;
  lVar36 = lVar54;
  if (lVar54 == 0) {
    lVar36 = 1;
  }
  uVar43 = 0;
  if (lVar54 != 0) {
    uVar43 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1a0(lVar54,auVar65._8_8_,&DAT_0045b477);
  lVar27 = auVar65._0_8_;
  lVar54 = lVar27;
  if (lVar27 == 0) {
    lVar54 = 1;
  }
  local_808 = (undefined8 **)0x0;
  if (lVar27 != 0) {
    local_808 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1ec(lVar27,auVar65._8_8_,&DAT_0045b482);
  ppuVar55 = auVar65._0_8_;
  local_810 = ppuVar55;
  if (ppuVar55 == (undefined8 **)0x0) {
    local_810 = (undefined8 **)0x1;
  }
  local_818 = (undefined8 **)0x0;
  if (ppuVar55 != (undefined8 **)0x0) {
    local_818 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1a0(ppuVar55,auVar65._8_8_,&DAT_0045b490);
  ppuVar55 = auVar65._0_8_;
  local_820 = ppuVar55;
  if (ppuVar55 == (undefined8 **)0x0) {
    local_820 = (undefined8 **)0x1;
  }
  local_828 = (undefined8 **)0x0;
  if (ppuVar55 != (undefined8 **)0x0) {
    local_828 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1a0(ppuVar55,auVar65._8_8_,&DAT_0045b49b);
  ppuVar55 = auVar65._0_8_;
  local_840 = ppuVar55;
  if (ppuVar55 == (undefined8 **)0x0) {
    local_840 = (undefined8 **)0x1;
  }
  local_848 = (undefined8 **)0x0;
  if (ppuVar55 != (undefined8 **)0x0) {
    local_848 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1b0(ppuVar55,auVar65._8_8_,&DAT_0045b4a6);
  uVar57 = auVar65._0_8_;
  local_850 = uVar57;
  if (uVar57 == 0) {
    local_850 = 1;
  }
  uVar63 = 0;
  if (uVar57 != 0) {
    uVar63 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1ec(uVar57,auVar65._8_8_,&DAT_0045b4ce);
  lVar41 = auVar65._0_8_;
  lVar27 = lVar41;
  if (lVar41 == 0) {
    lVar27 = 1;
  }
  uVar64 = 0;
  if (lVar41 != 0) {
    uVar64 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1dc(lVar41,auVar65._8_8_,&DAT_0045b4dc);
  lVar20 = auVar65._0_8_;
  lVar41 = lVar20;
  if (lVar20 == 0) {
    lVar41 = 1;
  }
  uVar9 = 0;
  if (lVar20 != 0) {
    uVar9 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1cc(lVar20,auVar65._8_8_,&DAT_0045b504);
  ppuVar55 = auVar65._0_8_;
  local_880 = ppuVar55;
  if (ppuVar55 == (undefined8 **)0x0) {
    local_880 = (undefined8 **)0x1;
  }
  uVar10 = 0;
  if (ppuVar55 != (undefined8 **)0x0) {
    uVar10 = auVar65._8_8_;
  }
  FUN_0070f210(ppuVar55,auVar65._8_8_,&DAT_0045b50e);
  auVar65 = FUN_0070f470();
  ppuVar55 = auVar65._0_8_;
  local_890 = ppuVar55;
  if (ppuVar55 == (undefined8 **)0x0) {
    local_890 = (undefined8 **)0x1;
  }
  uVar5 = 0;
  if (ppuVar55 != (undefined8 **)0x0) {
    uVar5 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1dc(ppuVar55,auVar65._8_8_,&DAT_0045b520);
  ppuVar21 = auVar65._0_8_;
  ppuVar55 = ppuVar21;
  if (ppuVar21 == (undefined8 **)0x0) {
    ppuVar55 = (undefined8 **)0x1;
  }
  uVar6 = 0;
  if (ppuVar21 != (undefined8 **)0x0) {
    uVar6 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1cc(ppuVar21,auVar65._8_8_,&DAT_0045b4b5);
  lVar22 = auVar65._0_8_;
  lVar20 = lVar22;
  if (lVar22 == 0) {
    lVar20 = 1;
  }
  uVar7 = 0;
  if (lVar22 != 0) {
    uVar7 = auVar65._8_8_;
  }
  auVar65 = FUN_0070f1b0(lVar22,auVar65._8_8_,&DAT_0045b4bf);
  lVar22 = auVar65._0_8_;
  local_710 = lVar22;
  if (lVar22 == 0) {
    local_710 = 1;
  }
  uVar8 = 0;
  if (lVar22 != 0) {
    uVar8 = auVar65._8_8_;
  }
  FUN_0070f210(lVar22,auVar65._8_8_,&DAT_0045b4e8);
  auVar65 = FUN_0070f344();
  lVar22 = auVar65._0_8_;
  auVar66 = FUN_0070f1b0(lVar22,auVar65._8_8_,&DAT_0045b4f5);
  lVar23 = auVar66._0_8_;
  bVar18 = lVar22 == 0;
  local_6d8 = 0;
  lVar35 = *param_4;
  local_6e0 = (long *)0x0;
  local_6c8 = 0;
  local_6c0 = 0;
  if (bVar18) {
    lVar22 = 1;
  }
  local_6f8 = 0;
  if (!bVar18) {
    local_6f8 = auVar65._8_8_;
  }
  local_6f0 = lVar23;
  if (lVar23 == 0) {
    local_6f0 = 1;
  }
  local_6e8 = 0;
  if (lVar23 != 0) {
    local_6e8 = auVar66._8_8_;
  }
  local_7d0 = lVar36;
  uStack_7c8 = uVar43;
  local_7c0 = lVar54;
  ppuStack_7b8 = local_808;
  local_7b0 = local_810;
  ppuStack_7a8 = local_818;
  local_7a0 = local_820;
  ppuStack_798 = local_828;
  local_790 = local_840;
  ppuStack_788 = local_848;
  local_780 = local_850;
  uStack_778 = uVar63;
  local_770 = lVar27;
  uStack_768 = uVar64;
  local_760 = lVar41;
  uStack_758 = uVar9;
  local_750 = local_880;
  uStack_748 = uVar10;
  local_740 = local_890;
  uStack_738 = uVar5;
  local_730 = ppuVar55;
  uStack_728 = uVar6;
  local_720 = lVar20;
  local_718 = uVar7;
  local_708 = uVar8;
  local_700 = lVar22;
  if (lVar35 != -1) {
                    /* try { // try from 006e24bc to 006e264f has its CatchHandler @ 006e41cc */
    FUN_0070f210(lVar23,auVar66._8_8_,&DAT_0045b46a);
    auVar65 = FUN_0070f344();
    lVar54 = auVar65._0_8_;
    lVar36 = lVar54;
    if (lVar54 == 0) {
      lVar36 = 1;
    }
    ppuVar21 = (undefined8 **)0x0;
    if (lVar54 != 0) {
      ppuVar21 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1a0(lVar54,auVar65._8_8_,&DAT_0045b477);
    ppuVar55 = auVar65._0_8_;
    local_808 = ppuVar55;
    if (ppuVar55 == (undefined8 **)0x0) {
      local_808 = (undefined8 **)0x1;
    }
    local_810 = (undefined8 **)0x0;
    if (ppuVar55 != (undefined8 **)0x0) {
      local_810 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1ec(ppuVar55,auVar65._8_8_,&DAT_0045b482);
    ppuVar55 = auVar65._0_8_;
    local_818 = ppuVar55;
    if (ppuVar55 == (undefined8 **)0x0) {
      local_818 = (undefined8 **)0x1;
    }
    local_820 = (undefined8 **)0x0;
    if (ppuVar55 != (undefined8 **)0x0) {
      local_820 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1a0(ppuVar55,auVar65._8_8_,&DAT_0045b490);
    ppuVar55 = auVar65._0_8_;
    local_828 = ppuVar55;
    if (ppuVar55 == (undefined8 **)0x0) {
      local_828 = (undefined8 **)0x1;
    }
    local_840 = (undefined8 **)0x0;
    if (ppuVar55 != (undefined8 **)0x0) {
      local_840 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1a0(ppuVar55,auVar65._8_8_,&DAT_0045b49b);
    ppuVar55 = auVar65._0_8_;
    local_848 = ppuVar55;
    if (ppuVar55 == (undefined8 **)0x0) {
      local_848 = (undefined8 **)0x1;
    }
    local_850 = 0;
    if (ppuVar55 != (undefined8 **)0x0) {
      local_850 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1b0(ppuVar55,auVar65._8_8_,&DAT_0045b4a6);
    lVar27 = auVar65._0_8_;
    lVar54 = lVar27;
    if (lVar27 == 0) {
      lVar54 = 1;
    }
    uVar43 = 0;
    if (lVar27 != 0) {
      uVar43 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1ec(lVar27,auVar65._8_8_,&DAT_0045b4ce);
    lVar41 = auVar65._0_8_;
    lVar27 = lVar41;
    if (lVar41 == 0) {
      lVar27 = 1;
    }
    uVar63 = 0;
    if (lVar41 != 0) {
      uVar63 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1dc(lVar41,auVar65._8_8_,&DAT_0045b4dc);
    lVar20 = auVar65._0_8_;
    lVar41 = lVar20;
    if (lVar20 == 0) {
      lVar41 = 1;
    }
    local_880 = (undefined8 **)0x0;
    if (lVar20 != 0) {
      local_880 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1cc(lVar20,auVar65._8_8_,&DAT_0045b504);
    lVar22 = auVar65._0_8_;
    lVar20 = lVar22;
    if (lVar22 == 0) {
      lVar20 = 1;
    }
    local_890 = (undefined8 **)0x0;
    if (lVar22 != 0) {
      local_890 = auVar65._8_8_;
    }
    FUN_0070f210(lVar22,auVar65._8_8_,&DAT_0045b50e);
    auVar65 = FUN_0070f470();
    lVar23 = auVar65._0_8_;
    lVar22 = lVar23;
    if (lVar23 == 0) {
      lVar22 = 1;
    }
    uVar64 = 0;
    if (lVar23 != 0) {
      uVar64 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1dc(lVar23,auVar65._8_8_,&DAT_0045b520);
    lVar24 = auVar65._0_8_;
    lVar23 = lVar24;
    if (lVar24 == 0) {
      lVar23 = 1;
    }
    ppuVar55 = (undefined8 **)0x0;
    if (lVar24 != 0) {
      ppuVar55 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1cc(lVar24,auVar65._8_8_,&DAT_0045b4b5);
    lVar25 = auVar65._0_8_;
    lVar24 = lVar25;
    if (lVar25 == 0) {
      lVar24 = 1;
    }
    uVar9 = 0;
    if (lVar25 != 0) {
      uVar9 = auVar65._8_8_;
    }
    auVar65 = FUN_0070f1b0(lVar25,auVar65._8_8_,&DAT_0045b4bf);
    lVar25 = auVar65._0_8_;
    local_390 = lVar25;
    if (lVar25 == 0) {
      local_390 = 1;
    }
    uVar10 = 0;
    if (lVar25 != 0) {
      uVar10 = auVar65._8_8_;
    }
    FUN_0070f210(lVar25,auVar65._8_8_,&DAT_0045b4e8);
    auVar65 = FUN_0070f344();
    auVar66 = FUN_0070f1b0(auVar65._0_8_,auVar65._8_8_,&DAT_0045b4f5);
    local_370 = auVar66._0_8_;
    local_358 = 0;
    local_360 = 0;
    local_450 = (undefined1)lVar36;
    uStack_44f = (undefined7)((ulong)lVar36 >> 8);
    uStack_458 = 1;
    uStack_457 = 0;
    uStack_456 = 0;
    local_460 = 1;
    uStack_45f = 0;
    local_348 = 0;
    local_340 = 0;
    if (auVar65._0_8_ == 0) {
      auVar65 = ZEXT816(1);
    }
    bVar18 = local_370 == 0;
    if (bVar18) {
      local_370 = 1;
    }
    local_368 = 0;
    if (!bVar18) {
      local_368 = auVar66._8_8_;
    }
    local_448 = ppuVar21;
    ppuStack_440 = local_808;
    local_438 = local_810;
    ppuStack_430 = local_818;
    local_428 = local_820;
    ppuStack_420 = local_828;
    local_418 = local_840;
    ppuStack_410 = local_848;
    local_408 = local_850;
    local_400 = lVar54;
    local_3f8 = uVar43;
    local_3f0 = lVar27;
    local_3e8 = uVar63;
    local_3e0 = lVar41;
    local_3d8 = local_880;
    local_3d0 = lVar20;
    local_3c8 = local_890;
    local_3c0 = lVar22;
    local_3b8 = uVar64;
    local_3b0 = lVar23;
    local_3a8 = ppuVar55;
    local_3a0 = lVar24;
    local_398 = uVar9;
    local_388 = uVar10;
    local_380 = auVar65;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar26 = (long *)FUN_0070f2e4();
    if (plVar26 == (long *)0x0) {
                    /* try { // try from 006e3e74 to 006e3e7b has its CatchHandler @ 006e4288 */
      FUN_0070f2f0();
      goto LAB_006e4058;
    }
    memcpy(plVar26,&local_460,0x128);
    if (local_6e0 != (long *)0x0) {
      do {
        lVar36 = *local_6e0;
        cVar12 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(local_6e0,0x10);
        if (bVar18) {
          *local_6e0 = lVar36 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar36 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 006e276c to 006e2773 has its CatchHandler @ 006e4140 */
        <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
        ::drop_slow(&local_6e0);
      }
    }
    local_6e0 = plVar26;
    FUN_006c4da4(*param_4,param_4[1]);
  }
  memcpy(&local_450,&local_7d0,0x118);
  uStack_458 = 1;
  uStack_457 = 0;
  uStack_456 = 0;
  local_460 = 1;
  uStack_45f = 0;
                    /* try { // try from 006e27a0 to 006e27ab has its CatchHandler @ 006e415c */
  plVar26 = (long *)FUN_006efe8c(8,0x128);
  memcpy(plVar26,&local_460,0x128);
  local_598 = (ulong *)&DAT_00000008;
  ppuVar21 = (undefined8 **)plVar26[6];
  uVar57 = plVar26[7];
  local_5a0 = 0;
  local_590 = 0;
  local_578 = 0;
  local_5c8 = plVar26;
  local_588 = ppuVar21;
  local_580 = uVar57;
  if (uVar57 != 0) {
    uVar50 = 0;
    lVar36 = 0;
    puVar53 = (ulong *)&DAT_00000008;
    do {
      uVar32 = local_580;
      uVar39 = local_590;
      FUN_006dee90(&local_460,&local_588,lVar36);
      ppuVar55 = ppuStack_440;
      if (local_438._1_1_ == '\x03') {
        ppuVar29 = (undefined8 **)CONCAT71(uStack_45f,local_460);
        ppuVar30 = (undefined8 **)CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
        uVar57 = (ulong)uStack_45f;
        goto LAB_006e374c;
      }
      uVar43 = CONCAT71(uStack_44f,local_450);
      lVar36 = (uVar32 - local_580) + local_578;
      local_578 = lVar36;
      if (uVar39 == local_5a0) {
                    /* try { // try from 006e2848 to 006e284f has its CatchHandler @ 006e41c4 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap>>
        ::grow_one(&local_5a0);
        puVar53 = local_598;
      }
      puVar62 = (undefined8 *)((long)puVar53 + uVar50);
      local_590 = uVar39 + 1;
      uVar50 = uVar50 + 0x10;
      *puVar62 = ppuVar55;
      puVar62[1] = uVar43;
    } while (local_580 != 0);
    ppuVar55 = (undefined8 **)0x0;
    if (1 < local_590) {
      if (local_590 < 0x15) {
        lVar36 = 0;
        puVar53 = local_598 + 2;
        puVar44 = local_598;
        do {
          puVar61 = puVar53;
          uVar39 = puVar44[2];
          if (uVar39 < *puVar44) {
            uVar32 = puVar44[3];
            lVar54 = lVar36;
            do {
              lVar27 = lVar54;
              puVar62 = (undefined8 *)((long)local_598 + lVar27);
              puVar62[3] = puVar62[1];
              puVar62[2] = *puVar62;
              puVar53 = local_598;
              if (lVar27 == 0) goto LAB_006e3ee8;
              lVar54 = lVar27 + -0x10;
            } while (uVar39 < (ulong)puVar62[-2]);
            puVar53 = (ulong *)((long)local_598 + lVar27);
LAB_006e3ee8:
            *puVar53 = uVar39;
            puVar53[1] = uVar32;
          }
          puVar53 = puVar61 + 2;
          lVar36 = lVar36 + 0x10;
          puVar44 = puVar61;
        } while ((ulong *)((long)local_598 + uVar50) != puVar53);
      }
      else {
                    /* try { // try from 006e4018 to 006e4023 has its CatchHandler @ 006e4060 */
        core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
        <(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset),<[(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)]>::sort_by_key<gimli[d400ddce60e1bc02]::common::DebugInfoOffset,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<(gimli[d400ddce60e1bc02]::common::DebugInfoOffset,gimli[d400ddce60e1bc02]::common::DebugArangesOffset)>>
                  (local_598,local_590,&local_460);
      }
    }
  }
  local_540 = (undefined8 *)plVar26[8];
  local_568 = (undefined8 *)&DAT_00000008;
  local_820 = (undefined8 **)plVar26[0x1e];
  local_550 = (undefined8 **)&DAT_00000008;
  local_828 = (undefined8 **)CONCAT44(local_828._4_4_,(uint)*(byte *)(plVar26 + 0x24));
  local_810 = (undefined8 **)plVar26[4];
  local_808 = (undefined8 **)plVar26[5];
  local_818 = (undefined8 **)plVar26[0x1f];
  local_570 = (undefined8 **)0x0;
  local_560 = (undefined8 **)0x0;
  local_558 = 0;
  local_548 = 0;
  uStack_538 = (undefined7)plVar26[9];
  uStack_531 = (undefined1)((ulong)plVar26[9] >> 0x38);
  uStack_530 = 0;
  uStack_529 = 0;
LAB_006e28cc:
  FUN_006df6f0(&local_460,&local_540);
  uVar50 = local_548;
  ppuVar29 = local_560;
  puVar62 = local_568;
  ppuVar59 = (undefined8 **)CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
  ppuVar30 = (undefined8 **)CONCAT71(uStack_44f,local_450);
  if (CONCAT71(uStack_45f,local_460) == -1) goto LAB_006e36f8;
  ppuStack_508 = ppuStack_430;
  ppuStack_4f8 = ppuStack_420;
  local_500 = local_428;
  local_4f0 = local_418;
  uStack_518 = SUB87(ppuStack_440,0);
  uStack_511 = (undefined1)((ulong)ppuStack_440 >> 0x38);
  local_520 = (uint7)local_448;
  uStack_519 = (undefined1)((ulong)local_448 >> 0x38);
  uStack_510 = SUB87(local_438,0);
  uStack_509 = (undefined1)((ulong)local_438 >> 0x38);
  if (CONCAT71(uStack_45f,local_460) != 2) {
    if (((local_460 & 1) == 0) &&
       (ppuVar30 != (undefined8 **)0x1 && ppuVar30 != (undefined8 **)&DAT_00000005)) {
      ppuStack_4c0 = ppuStack_440;
      ppuStack_4c8 = local_448;
      ppuStack_4b8 = local_438;
      local_4e0 = (undefined8 **)0x0;
      ppuStack_4b0 = ppuStack_430;
      ppuStack_4a0 = ppuStack_420;
      local_4a8 = local_428;
      local_498 = local_418;
                    /* try { // try from 006e2968 to 006e2977 has its CatchHandler @ 006e4170 */
      ppuStack_4d8 = ppuVar59;
      local_4d0 = ppuVar30;
      FUN_006dd40c(&local_460,plVar26 + 2,&local_4e0);
      if (CONCAT71(uStack_45f,local_460) != 2) {
        memcpy(&local_230,&local_460,0x1c0);
        if (ppuVar30 == (undefined8 **)&DAT_00000002) {
          local_848 = (undefined8 **)((ulong)local_848 & 0xffffffff00000000);
LAB_006e2a98:
          local_4e0 = (undefined8 **)0x0;
LAB_006e2a9c:
          FUN_0070f3a4();
          local_278 = ppuStack_4c0;
          ppuStack_290 = ppuStack_4d8;
          local_298 = local_4e0;
          ppuStack_280 = ppuStack_4c8;
          ppuStack_288 = local_4d0;
          local_238 = SUB82(local_848,0);
          local_270 = 0;
          local_236 = (undefined2)local_850;
          local_248 = 0xfe;
          local_2a0 = ppuVar59;
          if (uVar50 == local_558) {
                    /* try { // try from 006e2ae4 to 006e2aeb has its CatchHandler @ 006e40a0 */
            <alloc[cc0d62b833a55794]::raw_vec::RawVec<addr2line[5beaa54f6b4a1439]::unit::ResUnit<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
            ::grow_one(&local_558);
          }
          memcpy(local_550 + uVar50 * 0x46,&local_460,0x230);
          local_548 = uVar50 + 1;
        }
        else {
          ppuVar30 = (undefined8 **)CONCAT17(uStack_201,uStack_208);
          ppuStack_4d8 = (undefined8 **)CONCAT17(uStack_1f9,uStack_200);
          ppuStack_4c8 = (undefined8 **)(local_c0[0] + 2);
          ppuStack_4c0 = (undefined8 **)0x0;
          local_4d0 = &local_230;
          if (ppuStack_4d8 == (undefined8 **)0x0) {
            ppuVar59 = (undefined8 **)0x13;
            local_4e0 = ppuVar30;
LAB_006e3678:
            uVar57 = 0;
LAB_006e3680:
            do {
              lVar36 = *local_c0[0];
              cVar12 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(local_c0[0],0x10);
              if (bVar18) {
                *local_c0[0] = lVar36 + -1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
            if (lVar36 + -1 == 0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 006e3698 to 006e369f has its CatchHandler @ 006e4130 */
              <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
                        (local_c0);
            }
            if (local_1d0[0] != -2) {
              if (local_178 != 0) {
                FUN_0070f27c(local_170);
              }
              if (local_160 != 0) {
                FUN_0070f1c0(local_160 * 3,local_158);
              }
              if (local_148 != 0) {
                FUN_0070f27c(local_140);
              }
              if (local_130 != 0) {
                FUN_0070f244(local_128);
              }
            }
            goto LAB_006e36fc;
          }
          ppuVar60 = (undefined8 **)0x0;
          uVar39 = 0;
          lVar36 = 1 - (long)ppuStack_4d8;
          ppuVar29 = ppuVar30;
          while( true ) {
            local_4e0 = (undefined8 **)((long)ppuVar29 + 1);
            bVar49 = *(byte *)ppuVar29;
            iVar38 = (int)uVar39;
            if ((iVar38 == 0x3f && bVar49 != 0) && (iVar38 != 0x3f || bVar49 != 1)) {
              ppuVar59 = (undefined8 **)0x6;
              ppuVar30 = ppuVar60;
              goto LAB_006e3678;
            }
            ppuVar60 = (undefined8 **)(((ulong)bVar49 & 0x7f) << (uVar39 & 0x3f) | (ulong)ppuVar60);
            if (-1 < (char)bVar49) break;
            lVar36 = lVar36 + 1;
            uVar39 = (ulong)(iVar38 + 7);
            ppuVar29 = local_4e0;
            if (lVar36 == 1) {
              ppuVar30 = (undefined8 **)((long)ppuVar30 + (long)ppuStack_4d8);
              ppuVar59 = (undefined8 **)0x13;
              local_4e0 = ppuVar30;
              goto LAB_006e3678;
            }
          }
          ppuStack_4d8 = (undefined8 **)-lVar36;
          if (ppuVar60 != (undefined8 **)0x0) {
            if ((undefined1 *)((long)ppuVar60 + -1) < (undefined1 *)local_c0[0][4]) {
              lVar27 = local_c0[0][3] + ((long)ppuVar60 + -1) * 0x70;
            }
            else {
              lVar36 = local_c0[0][5];
              if (lVar36 == 0) {
LAB_006e3f04:
                ppuVar59 = (undefined8 **)0x12;
                ppuVar30 = ppuVar60;
                goto LAB_006e3678;
              }
              lVar54 = local_c0[0][6];
              while( true ) {
                lVar27 = lVar36 + -0x70;
                lVar41 = (ulong)*(ushort *)(lVar36 + 0x532) << 3;
                uVar39 = 0xffffffffffffffff;
                puVar62 = (undefined8 *)(lVar36 + 0x4d8);
                do {
                  uVar32 = (ulong)*(ushort *)(lVar36 + 0x532);
                  if (lVar41 == 0) goto LAB_006e3070;
                  lVar27 = lVar27 + 0x70;
                  uVar32 = uVar39 + 1;
                  lVar41 = lVar41 + -8;
                  cVar12 = (undefined8 **)*puVar62 < ppuVar60;
                  if (ppuVar60 < (undefined8 **)*puVar62) {
                    cVar12 = -1;
                  }
                  uVar39 = uVar32;
                  puVar62 = puVar62 + 1;
                } while (cVar12 == '\x01');
                if (cVar12 == '\0') break;
LAB_006e3070:
                if (lVar54 == 0) goto LAB_006e3f04;
                lVar54 = lVar54 + -1;
                lVar36 = *(long *)(lVar36 + uVar32 * 8 + 0x538);
              }
            }
            ppuStack_4c0 = (undefined8 **)(ulong)(*(char *)(lVar27 + 0x6a) == '\x01');
                    /* try { // try from 006e2b40 to 006e2b43 has its CatchHandler @ 006e4074 */
            auVar65 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
            ppuVar60 = local_78;
            ppuVar29 = local_88;
            puVar62 = auVar65._0_8_;
            if (auVar65._8_8_ == 0) {
              local_848 = (undefined8 **)((ulong)local_848._4_4_ << 0x20);
              bVar18 = false;
              bVar16 = false;
              bVar49 = 0;
            }
            else {
              uVar32 = (long)local_818 - (long)local_78;
              uVar39 = ((ulong)local_1e9._1_4_ & 0xff) << 8 | 0x19;
              local_848 = (undefined8 **)((ulong)local_848._4_4_ << 0x20);
              ppuVar3 = (undefined8 **)((long)local_820 + (long)local_78);
              bVar18 = false;
              uVar46 = local_1e9._1_4_ >> 8;
              bVar16 = false;
              uVar13 = local_1e9._1_4_ & 0xff00;
              uVar34 = (local_1e9._1_4_ & 0xaaaaaaaa) >> 1 | (local_1e9._1_4_ & 0x55555555) << 1;
              uVar34 = (uVar34 & 0xcccccccc) >> 2 | (uVar34 & 0x33333333) << 2;
              uVar34 = (uVar34 & 0xf0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f) << 4;
              uVar34 = (uVar34 & 0xff00ff00) >> 8 | (uVar34 & 0xff00ff) << 8;
              bVar49 = 0;
              lVar36 = LZCOUNT(uVar34 >> 0x10 | uVar34 << 0x10);
              ppuVar30 = (undefined8 **)(auVar65._8_8_ << 4);
              do {
                local_840 = ppuVar30;
                uStack_468 = puVar62[1];
                local_470 = *puVar62;
                FUN_006c753c(&local_460,&local_4e0,*(uint *)(local_4d0 + 9),&local_470);
                ppuVar40 = (undefined8 **)CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
                ppuVar30 = (undefined8 **)CONCAT71(uStack_44f,local_450);
                if (CONCAT71(uStack_45f,local_460) == -1) {
                  uVar57 = (ulong)ppuVar40 >> 8;
                  ppuVar59 = ppuVar40;
                  goto LAB_006e3680;
                }
                uStack_488 = SUB87(ppuVar40,0);
                uStack_481 = (undefined1)((uint6)uStack_456 >> 0x28);
                local_490 = (uint7)CONCAT71(uStack_45f,local_460);
                uStack_489 = (undefined1)(uStack_45f >> 0x30);
                uVar34 = (uint)local_448 & 0xffff;
                uStack_480 = SUB87(ppuVar30,0);
                uStack_479 = (undefined1)((uint7)uStack_44f >> 0x30);
                local_478 = local_448;
                ppuVar40 = local_840;
                if (uVar34 == 0x55) {
                  FUN_0070f288();
                  if (CONCAT71(uStack_45f,local_460) == 0x16) {
                    FUN_0070f58c();
                  }
                  else if (CONCAT71(uStack_45f,local_460) == 0x18) {
                    ppuVar30 = local_820;
                    if (ppuVar60 <= local_818) {
                      uVar48 = CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458)) *
                               ((ulong)uVar46 & 0xff);
                      uVar47 = uVar32 - uVar48;
                      ppuVar30 = ppuVar3;
                      if (uVar48 <= uVar32) {
                        ppuVar30 = (undefined8 **)((long)ppuVar3 + uVar48);
                        if (uVar13 == 0x800) {
                          if (7 < uVar47) {
                            uVar47 = ((ulong)*(uint *)ppuVar30 << 8 |
                                     (ulong)*(uint3 *)((long)ppuVar30 + 4) << 0x28) >> 8 |
                                     (ulong)*(byte *)((long)ppuVar30 + 7) << 0x38;
LAB_006e2e34:
                            puVar62 = (undefined8 *)FUN_0070f58c(uVar47);
                            ppuVar40 = extraout_x12;
                            goto LAB_006e2e18;
                          }
                        }
                        else if (3 < uVar47) {
                          uVar47 = (ulong)*(uint *)ppuVar30;
                          goto LAB_006e2e34;
                        }
                      }
                    }
                    uVar57 = 0;
                    ppuVar59 = (undefined8 **)0x13;
                    goto LAB_006e3680;
                  }
                }
                else if (uVar34 == 0x12) {
                  FUN_0070f288();
                  lVar54 = CONCAT71(uStack_45f,local_460);
                  if (lVar54 == 0) {
                    local_8f0 = (undefined8 **)CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
                    bVar16 = true;
                  }
                  else if (lVar54 == 7) {
                    ppuVar55 = (undefined8 **)CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
                    bVar49 = 1;
                  }
                  else if (lVar54 == 0xc) {
                    bVar16 = ppuVar29 <= local_808;
                    uVar19 = local_808 == ppuVar29;
                    ppuVar37 = (undefined8 **)((ulong)local_8f8 & 0xffffffffffffff00 | 0x13);
                    local_8f0 = local_810;
                    if (bVar16) {
                      puVar62 = (undefined8 *)FUN_0070f424();
                      if (bVar16) {
                        puVar62 = (undefined8 *)FUN_0070f578();
                        bVar15 = false;
                        bVar17 = true;
                        if (bVar16 && !(bool)uVar19) {
                          uVar34 = (uint)lVar36;
                          bVar17 = 2 < uVar34;
                          bVar15 = uVar34 == 3;
                        }
                        if (!bVar17 || bVar15) {
                    /* WARNING: Could not recover jumptable at 0x006e2ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)(&UNK_006e2efc + (ulong)(byte)(&DAT_0045a9a7)[lVar36] * 4))();
                          return;
                        }
                        ppuVar37 = (undefined8 **)((ulong)local_8f8 & 0xffffffffffff0000 | uVar39);
                        local_8f0 = local_880;
                      }
                      else {
                        ppuVar37 = extraout_x10_00;
                        local_8f0 = (undefined8 **)((long)local_810 + (long)ppuVar29);
                      }
                    }
                    if ((~(uint)ppuVar37 & 0xff) != 0) goto LAB_006e4000;
                    bVar16 = true;
                    local_8f8 = ppuVar37;
                    local_880 = local_8f0;
                  }
                }
                else if (uVar34 == 0x13) {
                  FUN_0070f288();
                  bVar15 = CONCAT71(uStack_45f,local_460) == 0x26;
                  uVar11 = (undefined4)local_848;
                  if (bVar15) {
                    uVar11 = 1;
                  }
                  local_848 = (undefined8 **)CONCAT44(local_848._4_4_,uVar11);
                  uVar34 = (uint)CONCAT11(uStack_457,uStack_458);
                  if (!bVar15) {
                    uVar34 = (uint)local_850;
                  }
                  local_850 = (ulong)uVar34;
                }
                else if (uVar34 == 0x11) {
                  FUN_0070f288();
                  if (CONCAT71(uStack_45f,local_460) == 0) {
                    local_890 = (undefined8 **)CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
                    bVar18 = true;
                  }
                  else if (CONCAT71(uStack_45f,local_460) == 0xc) {
                    bVar18 = ppuVar29 <= local_808;
                    uVar19 = local_808 == ppuVar29;
                    local_8e8 = (undefined8 **)((ulong)local_8e8 & 0xffffffffffffff00 | 0x13);
                    local_890 = local_810;
                    if (bVar18) {
                      FUN_0070f424();
                      if (bVar18) {
                        FUN_0070f578();
                        bVar15 = false;
                        bVar17 = true;
                        if (bVar18 && !(bool)uVar19) {
                          bVar17 = 2 < (uint)extraout_x14;
                          bVar15 = (uint)extraout_x14 == 3;
                        }
                        if (!bVar17 || bVar15) {
                    /* WARNING: Could not recover jumptable at 0x006e2ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)(&UNK_006e2ec4 + (ulong)(byte)(&DAT_0045a9ab)[extraout_x14] * 4)
                          )();
                          return;
                        }
                        local_8e8 = (undefined8 **)(extraout_x13 & 0xffffffffffff0000 | uVar39);
                        local_890 = local_920;
                      }
                      else {
                        local_8e8 = extraout_x10;
                        local_890 = (undefined8 **)((long)local_810 + (long)ppuVar29);
                      }
                    }
                    if ((~(uint)local_8e8 & 0xff) != 0) {
                      uVar57 = (ulong)local_8e8 >> 8;
                      ppuVar30 = local_890;
                      ppuVar59 = local_8e8;
                      goto LAB_006e3680;
                    }
                    bVar18 = true;
                    local_920 = local_890;
                  }
                }
LAB_006e2e18:
                puVar62 = puVar62 + 2;
                ppuVar30 = ppuVar40 + -2;
              } while (ppuVar40 + -2 != (undefined8 **)0x0);
            }
            if (local_590 != 0) {
              if (local_590 == 1) {
                uVar39 = 0;
              }
              else {
                uVar39 = 0;
                uVar32 = local_590;
                do {
                  uVar47 = uVar39 + (uVar32 >> 1);
                  uVar32 = uVar32 - (uVar32 >> 1);
                  if ((undefined8 **)local_598[uVar47 * 2] <= ppuVar59) {
                    uVar39 = uVar47;
                  }
                } while (1 < uVar32);
              }
              if ((undefined8 **)local_598[uVar39 * 2] == ppuVar59) {
                if (uVar39 - 1 < local_590) {
                  puVar53 = local_598 + uVar39 * 2;
                  uVar39 = uVar39 + 1;
                  do {
                    puVar53 = puVar53 + -2;
                    uVar39 = uVar39 - 1;
                    if (uVar39 == 0) break;
                  } while ((undefined8 **)*puVar53 == ppuVar59);
                }
                else if (uVar39 != 0) {
                    /* try { // try from 006e404c to 006e4057 has its CatchHandler @ 006e4068 */
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (uVar39 - 1,local_590,&PTR_s__rust_deps_addr2line_0_25_1_src__00977ac0);
                }
                if (uVar39 != local_590) {
                  puVar53 = local_598 + local_590 * 2;
                  bVar15 = true;
                  puVar44 = local_598 + uVar39 * 2;
                  do {
                    puVar61 = puVar44 + 2;
                    local_840 = ppuVar55;
                    if ((undefined8 **)*puVar44 != ppuVar59) break;
                    uVar39 = puVar44[1];
                    if (uVar57 < uVar39) {
                      local_460 = 0x13;
                      local_8f0 = ppuVar21;
LAB_006e3f2c:
                      ppuVar37 = (undefined8 **)CONCAT71(uStack_45f,local_460);
LAB_006e4000:
                      uVar57 = (ulong)ppuVar37 >> 8;
                      ppuVar30 = local_8f0;
                      ppuVar59 = ppuVar37;
                      goto LAB_006e3680;
                    }
                    uStack_488 = (undefined7)(uVar57 - uVar39);
                    uStack_481 = (undefined1)(uVar57 - uVar39 >> 0x38);
                    local_490 = (uint7)(undefined1 *)((long)ppuVar21 + uVar39);
                    uStack_489 = (undefined1)((long)ppuVar21 + uVar39 >> 0x38);
                    FUN_006dee90(&local_460,&local_490);
                    if (local_438._1_1_ == '\x03') {
                      local_8f0 = (undefined8 **)
                                  CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
                      goto LAB_006e3f2c;
                    }
                    uVar34 = (uint)local_438;
                    uVar46 = (uVar34 & 0xaaaaaaaa) >> 1 | (uVar34 & 0x55555555) << 1;
                    uVar46 = (uVar46 & 0xcccccccc) >> 2 | (uVar46 & 0x33333333) << 2;
                    uVar46 = (uVar46 & 0xf0f0f0f0) >> 4 | (uVar46 & 0xf0f0f0f) << 4;
                    uVar46 = (uVar46 & 0xff00ff00) >> 8 | (uVar46 & 0xff00ff) << 8;
                    uVar46 = (uint)LZCOUNT(uVar46 >> 0x10 | uVar46 << 0x10);
                    if ((uVar34 - 1 & 0xff) < ((uVar34 ^ uVar34 - 1) & 0xff) && uVar46 < 4) {
                      puVar51 = (uint *)CONCAT71(uStack_45f,local_460);
                      uVar39 = CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
                      uVar32 = ((ulong)local_438 & 0x7f) << 1;
                      uVar47 = 0xffffffffffffffff >> (uVar34 * -8 & 0x38);
                      uVar48 = uVar47 & 0xfffffffffffffffe;
                      do {
                        ppuVar30 = local_560;
                        if (uVar46 == 0) {
LAB_006e3334:
                          do {
                            if (uVar39 == 0) goto LAB_006e33d8;
                            do {
                              if (uVar39 < uVar32) goto LAB_006e33d8;
                              bVar17 = uVar39 < 2;
                              uVar39 = uVar39 - 2;
                              if (bVar17) {
                                uVar39 = 0;
                                puVar51 = (uint *)0x1;
                                goto LAB_006e3334;
                              }
                              uVar34 = *puVar51;
                              uVar56 = (ulong)(byte)uVar34;
                              pbVar1 = (byte *)((long)puVar51 + 1);
                              uVar33 = (ulong)*pbVar1;
                              puVar51 = (uint *)((long)puVar51 + 2);
                            } while (*pbVar1 == 0 && (byte)uVar34 == 0);
                            uVar58 = uVar33 + uVar56;
                          } while (uVar48 <= uVar56 || uVar47 < uVar58);
                        }
                        else if (uVar46 == 1) {
LAB_006e32e4:
                          do {
                            if (uVar39 == 0) goto LAB_006e33d8;
                            do {
                              if (uVar39 < uVar32) goto LAB_006e33d8;
                              bVar17 = uVar39 < 4;
                              uVar39 = uVar39 - 4;
                              if (bVar17) {
                                uVar39 = 0;
                                puVar51 = (uint *)0x1;
                                goto LAB_006e32e4;
                              }
                              uVar34 = *puVar51;
                              uVar56 = (ulong)(ushort)uVar34;
                              puVar2 = (ushort *)((long)puVar51 + 2);
                              uVar33 = (ulong)*puVar2;
                              puVar51 = puVar51 + 1;
                            } while (*puVar2 == 0 && (ushort)uVar34 == 0);
                            uVar58 = uVar33 + uVar56;
                          } while (uVar48 <= uVar56 || uVar47 < uVar58);
                        }
                        else {
                          puVar52 = puVar51;
                          if (uVar46 == 2) {
LAB_006e31f8:
                            do {
                              if (uVar39 == 0) goto LAB_006e33d8;
                              do {
                                if (uVar39 < uVar32) goto LAB_006e33d8;
                                bVar17 = uVar39 < 8;
                                uVar39 = uVar39 - 8;
                                if (bVar17) {
                                  uVar39 = 0;
                                  puVar51 = (uint *)0x1;
                                  goto LAB_006e31f8;
                                }
                                uVar56 = (ulong)*puVar51;
                                uVar33 = (ulong)puVar51[1];
                                puVar51 = puVar51 + 2;
                              } while (uVar33 == 0 && uVar56 == 0);
                              uVar58 = uVar33 + uVar56;
                            } while (uVar48 <= uVar56 || uVar47 < uVar58);
                          }
                          else {
LAB_006e3248:
                            do {
                              if (uVar39 == 0) goto LAB_006e33d8;
                              do {
                                if (uVar39 < uVar32) goto LAB_006e33d8;
                                bVar17 = uVar39 < 0x10;
                                uVar39 = uVar39 - 0x10;
                                if (bVar17) {
                                  uVar39 = 0;
                                  puVar52 = (uint *)0x1;
                                  goto LAB_006e3248;
                                }
                                puVar51 = puVar52 + 4;
                                uVar56 = ((ulong)*puVar52 << 8 | (ulong)(uint3)puVar52[1] << 0x28)
                                         >> 8 | (ulong)*(byte *)((long)puVar52 + 7) << 0x38;
                                uVar33 = ((ulong)puVar52[2] << 8 | (ulong)(uint3)puVar52[3] << 0x28)
                                         >> 8 | (ulong)*(byte *)((long)puVar52 + 0xf) << 0x38;
                                puVar52 = puVar51;
                              } while (uVar33 == 0 && uVar56 == 0);
                            } while (((uVar48 <= uVar56) ||
                                     (uVar58 = uVar33 + uVar56, CARRY8(uVar33,uVar56))) ||
                                    (uVar47 < uVar58));
                          }
                        }
                        if (uVar33 != 0) {
                          if (local_560 == local_570) {
                    /* try { // try from 006e3398 to 006e339b has its CatchHandler @ 006e406c */
                            FUN_0070f2fc();
                          }
                          bVar15 = false;
                          puVar44 = local_568 + (long)ppuVar30 * 4;
                          local_560 = (undefined8 **)((long)ppuVar30 + 1);
                          *puVar44 = uVar56;
                          puVar44[1] = uVar58;
                          puVar44[2] = uVar50;
                          puVar44[3] = 0;
                        }
                      } while( true );
                    }
LAB_006e33d8:
                    puVar44 = puVar61;
                  } while (puVar61 != puVar53);
                  if (!bVar15) goto LAB_006e2a98;
                }
              }
            }
            ppuVar30 = local_560;
            if ((bVar18) && (bVar16)) {
              if (local_890 < local_8f0) {
                ppuVar29 = local_8f0;
                if (local_560 == local_570) {
                    /* try { // try from 006e3500 to 006e353b has its CatchHandler @ 006e4074 */
                  FUN_0070f2fc();
                }
LAB_006e3628:
                puVar62 = local_568 + (long)ppuVar30 * 4;
                *puVar62 = local_890;
                puVar62[1] = ppuVar29;
                local_560 = (undefined8 **)((long)ppuVar30 + 1);
                puVar62[2] = uVar50;
                puVar62[3] = 0;
                goto LAB_006e2a98;
              }
            }
            else if (((bool)(bVar18 & bVar49)) &&
                    (ppuVar29 = (undefined8 **)((long)local_890 + (long)ppuVar55),
                    local_890 < ppuVar29)) {
              if (local_560 == local_570) {
                FUN_0070f2fc();
              }
              goto LAB_006e3628;
            }
            local_4e0 = (undefined8 **)0x0;
            if (local_1d0[0] != -2) {
                    /* try { // try from 006e3578 to 006e358b has its CatchHandler @ 006e4070 */
              plVar28 = (long *)FUN_006bc2d8(&local_4e0,plVar26 + 2,&local_230,local_1d0);
              if (*plVar28 == 0) {
                if ((char)plVar28[1] != -1) goto LAB_006e2a9c;
                plVar28 = (long *)plVar28[2];
              }
              if (plVar28[3] != 0) {
                lVar54 = plVar28[3] << 5;
                lVar36 = (long)local_560 << 5;
                puVar62 = (undefined8 *)(plVar28[2] + 0x10);
                do {
                  ppuVar30 = local_560;
                  uVar43 = puVar62[1];
                  local_840 = (undefined8 **)*puVar62;
                  if (local_560 == local_570) {
                    /* try { // try from 006e35c8 to 006e35cb has its CatchHandler @ 006e407c */
                    FUN_0070f2fc();
                  }
                  local_560 = (undefined8 **)((long)ppuVar30 + 1);
                  lVar54 = lVar54 + -0x20;
                  puVar4 = (undefined8 *)((long)local_568 + lVar36);
                  lVar36 = lVar36 + 0x20;
                  puVar4[1] = uVar43;
                  *puVar4 = local_840;
                  puVar4[2] = uVar50;
                  puVar4[3] = 0;
                  puVar62 = puVar62 + 4;
                } while (lVar54 != 0);
              }
            }
            goto LAB_006e2a9c;
          }
          do {
            lVar36 = *local_c0[0];
            cVar12 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(local_c0[0],0x10);
            if (bVar18) {
              *local_c0[0] = lVar36 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (lVar36 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 006e2a34 to 006e2a3b has its CatchHandler @ 006e4110 */
            <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
                      (local_c0);
          }
          if (local_1d0[0] != -2) {
            if (local_178 != 0) {
              FUN_0070f27c(local_170);
            }
            if (local_160 != 0) {
              FUN_0070f1c0(local_160 * 3,local_158);
            }
            if (local_148 != 0) {
              FUN_0070f27c(local_140);
            }
            if (local_130 != 0) {
              FUN_0070f244(local_128);
            }
          }
        }
      }
    }
    goto LAB_006e28cc;
  }
  if (local_560 < (undefined8 **)0x2) {
    if (local_560 != (undefined8 **)0x0) goto LAB_006e3928;
    if (local_570 != (undefined8 **)0x0) {
      FUN_0070f23c(local_568,(long)local_570 << 5);
      puVar62 = (undefined8 *)&DAT_00000008;
    }
  }
  else {
    if (&DAT_00000014 < local_560) {
                    /* try { // try from 006e4038 to 006e4047 has its CatchHandler @ 006e405c */
      core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
      <addr2line[5beaa54f6b4a1439]::unit::UnitRange,<[addr2line[5beaa54f6b4a1439]::unit::UnitRange]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::unit::ResUnits<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::unit::UnitRange>>
                (local_568,local_560,&local_230);
    }
    else {
      lVar36 = 0;
      puVar4 = local_568 + 4;
      puVar45 = local_568;
      do {
        puVar42 = puVar4;
        uVar57 = puVar45[5];
        if (uVar57 < (ulong)puVar45[1]) {
          uVar64 = puVar45[7];
          uVar63 = puVar45[6];
          uVar43 = puVar45[4];
          uStack_458 = (undefined1)uVar64;
          uStack_457 = (undefined1)((ulong)uVar64 >> 8);
          uStack_456 = (undefined6)((ulong)uVar64 >> 0x10);
          local_460 = (byte)uVar63;
          uStack_45f = (uint7)((ulong)uVar63 >> 8);
          lVar54 = lVar36;
          do {
            lVar27 = lVar54;
            puVar4 = (undefined8 *)((long)local_568 + lVar27);
            puVar4[5] = puVar4[1];
            puVar4[4] = *puVar4;
            puVar4[7] = puVar4[3];
            puVar4[6] = puVar4[2];
            puVar45 = local_568;
            if (lVar27 == 0) goto LAB_006e3fcc;
            lVar54 = lVar27 + -0x20;
          } while (uVar57 < (ulong)puVar4[-3]);
          puVar45 = (undefined8 *)((long)local_568 + lVar27);
LAB_006e3fcc:
          *puVar45 = uVar43;
          puVar4[1] = uVar57;
          puVar4[3] = uVar64;
          puVar4[2] = uVar63;
        }
        puVar4 = puVar42 + 4;
        lVar36 = lVar36 + 0x20;
        puVar45 = puVar42;
      } while (puVar4 != local_568 + (long)local_560 * 4);
    }
LAB_006e3928:
    lVar54 = (long)ppuVar29 << 5;
    uVar57 = 0xffffffffffffffff;
    lVar36 = lVar54;
    do {
      uVar50 = *(ulong *)((long)puVar62 + lVar36 + -0x20);
      if (uVar57 <= uVar50) {
        uVar50 = uVar57;
      }
      lVar27 = lVar36 + -0x20;
      *(ulong *)((long)puVar62 + lVar36 + -8) = uVar50;
      uVar57 = uVar50;
      lVar36 = lVar27;
    } while (lVar27 != 0);
    if (ppuVar29 < local_570) {
      puVar62 = (undefined8 *)__rustc::__rust_realloc(puVar62,(long)local_570 << 5,8,lVar54);
      if (puVar62 == (undefined8 *)0x0) {
                    /* try { // try from 006e4028 to 006e4033 has its CatchHandler @ 006e40f8 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(8,lVar54);
      }
    }
  }
  uVar50 = local_548;
  ppuVar30 = local_550;
  if (local_548 < local_558) {
    if (local_548 == 0) {
      FUN_0070f23c(local_550,local_558 * 0x230);
      ppuVar30 = (undefined8 **)&DAT_00000008;
    }
    else {
      ppuVar30 = (undefined8 **)FUN_0070f334(0x230,local_550);
      if (ppuVar30 == (undefined8 **)0x0) {
                    /* try { // try from 006e3a24 to 006e3a2b has its CatchHandler @ 006e40d8 */
        FUN_0070f4d8(8);
        goto LAB_006e4058;
      }
    }
  }
  uVar57 = (ulong)ppuVar29 >> 8;
  if (local_5a0 != 0) {
LAB_006e3758:
    FUN_0070f23c(local_598,local_5a0 << 4);
    if (puVar62 == (undefined8 *)0x0) goto LAB_006e3894;
  }
  auVar66._8_8_ = local_810;
  auVar66._0_8_ = lVar35;
  auVar65._8_8_ = ppuVar21;
  auVar65._0_8_ = local_808;
  uVar32 = (ulong)ppuVar29 & 0xff | uVar57 << 8;
  auVar74._8_8_ = local_840;
  auVar74._0_8_ = uVar32;
  lVar54 = plVar26[0x20];
  uStack_5b0 = SUB87(ppuVar30,0);
  uStack_5a9 = (undefined1)((ulong)ppuVar30 >> 0x38);
  uVar39 = 0;
  lVar36 = 8;
  uStack_5b8 = (undefined7)uVar32;
  uStack_5b1 = (undefined1)(uVar57 >> 0x30);
  ppuVar55 = param_3;
  local_5c0 = puVar62;
  uStack_5a8 = uVar50;
  if (lVar54 != 0) {
    uVar57 = 0x1c8;
    local_490 = 0;
    uStack_489 = 0;
    uStack_488 = 8;
    uStack_481 = 0;
    uStack_480 = 0;
    uStack_479 = 0;
    local_520 = (uint7)*(undefined8 *)(lVar54 + 0x40);
    uStack_519 = (undefined1)((ulong)*(undefined8 *)(lVar54 + 0x40) >> 0x38);
    uStack_518 = (undefined7)*(undefined8 *)(lVar54 + 0x48);
    uStack_511 = (undefined1)((ulong)*(undefined8 *)(lVar54 + 0x48) >> 0x38);
    uStack_510 = 0;
    uStack_509 = 0;
    do {
      while( true ) {
        FUN_006df6f0(&local_460,&local_520);
        lVar27 = CONCAT71(uStack_45f,local_460);
        if (lVar27 == -1) {
                    /* try { // try from 006e3884 to 006e3887 has its CatchHandler @ 006e4128 */
          FUN_0070f448();
                    /* try { // try from 006e3888 to 006e3893 has its CatchHandler @ 006e4120 */
          FUN_006c304c(&local_5c0);
          goto LAB_006e3894;
        }
        ppuStack_4d8 = ppuStack_440;
        local_4e0 = local_448;
        ppuStack_4c8 = ppuStack_430;
        local_4d0 = local_438;
        ppuStack_4b8 = ppuStack_420;
        ppuStack_4c0 = local_428;
        ppuStack_4b0 = local_418;
        ppuVar55 = (undefined8 **)CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458));
        if (lVar27 != 0) break;
        local_460 = 0;
        uStack_45f = 0;
                    /* try { // try from 006e382c to 006e383b has its CatchHandler @ 006e41ac */
        FUN_006dd40c(&local_230,lVar54 + 0x10,&local_460);
        if (local_230 != (undefined8 *)&DAT_00000002) {
          FUN_0070f3a4();
          local_2a0 = ppuVar55;
          if (uVar39 == CONCAT17(uStack_489,local_490)) {
                    /* try { // try from 006e385c to 006e3863 has its CatchHandler @ 006e40c4 */
            <alloc[cc0d62b833a55794]::raw_vec::RawVec<addr2line[5beaa54f6b4a1439]::unit::SupUnit<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
            ::grow_one(&local_490);
            lVar36 = CONCAT17(uStack_481,uStack_488);
          }
          memcpy((void *)(lVar36 + uVar39 * 0x1c8),&local_460,0x1c8);
          uVar39 = uVar39 + 1;
          uStack_480 = (undefined7)uVar39;
          uStack_479 = (undefined1)(uVar39 >> 0x38);
        }
      }
    } while (lVar27 != 2);
    if (uVar39 < CONCAT17(uStack_489,local_490)) {
      if (uVar39 == 0) {
        FUN_0070f23c(lVar36,CONCAT17(uStack_489,local_490) * 0x1c8);
        lVar36 = 8;
      }
      else {
        lVar36 = FUN_0070f334(0x1c8,lVar36);
        if (lVar36 == 0) {
                    /* try { // try from 006e39b0 to 006e39b7 has its CatchHandler @ 006e40b4 */
          FUN_0070f4d8(8);
LAB_006e4058:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x6e405c);
          (*pcVar14)();
        }
      }
    }
  }
  auVar72._8_8_ = local_820;
  auVar72._0_8_ = ppuVar55;
  auVar71._8_8_ = local_818;
  auVar71._0_8_ = uVar57;
  auVar69._8_8_ = &local_490;
  auVar69._0_8_ = local_5c0;
  local_6a0 = CONCAT17(uStack_5a9,uStack_5b0);
  auVar70._8_8_ = local_848;
  auVar70._0_8_ = &local_6b8;
  lVar54 = *param_5;
  uStack_698 = uStack_5a8;
  local_6b8 = plVar26;
  puStack_6b0 = local_5c0;
  local_6a8 = uVar32;
  local_690 = lVar36;
  local_688 = uVar39;
  if (lVar54 == -1) {
    bVar49 = 0xff;
    auVar73._8_8_ = local_828;
    auVar73._0_8_ = 0xffffffffffffffff;
    local_7d8 = param_4;
LAB_006e3d58:
    __dest[0x3f] = local_688;
    __dest[0x3a] = puStack_6b0;
    __dest[0x39] = local_6b8;
    __dest[0x3c] = local_6a0;
    __dest[0x3b] = local_6a8;
    __dest[0x3e] = local_690;
    __dest[0x3d] = uStack_698;
    memcpy(__dest,param_3,0x78);
    *(byte *)(__dest + 0xf) = bVar49;
    memcpy((void *)((long)__dest + 0x79),auStack_620,0x57);
    *(undefined1 (*) [16])(__dest + 0x27) = auVar69;
    *(ulong *)((long)__dest + 0xd9) = CONCAT17(uStack_631,uStack_638);
    *(undefined8 *)((long)__dest + 0xd1) = local_640;
    *(char *)(__dest + 0x1a) = (char)local_7d8;
    __dest[0x1e] = ppuStack_678;
    __dest[0x1d] = local_680;
    __dest[0x20] = ppuStack_668;
    __dest[0x1f] = ppuStack_670;
    __dest[0x1c] = CONCAT71(uStack_630,uStack_631);
    __dest[0x22] = ppuStack_658;
    __dest[0x21] = local_660;
    __dest[0x24] = ppuStack_648;
    __dest[0x23] = ppuStack_650;
    *(undefined1 (*) [16])(__dest + 0x25) = auVar65;
    *(undefined1 (*) [16])(__dest + 0x29) = auVar66;
    *(undefined1 (*) [16])(__dest + 0x2b) = auVar70;
    *(undefined1 (*) [16])(__dest + 0x2f) = auVar72;
    *(undefined1 (*) [16])(__dest + 0x2d) = auVar71;
    *(undefined1 (*) [16])(__dest + 0x31) = auVar73;
    *(undefined1 (*) [16])(__dest + 0x33) = auVar74;
    *(undefined1 (*) [16])(__dest + 0x35) = auVar75;
    __dest[0x37] = 1;
    __dest[0x38] = 0;
    goto LAB_006e3904;
  }
                    /* try { // try from 006e3aa0 to 006e3bfb has its CatchHandler @ 006e418c */
  auVar67 = FUN_006e592c(param_5,uVar31,&DAT_0045ae8e,0xf);
  uVar31 = auVar67._8_8_;
  lVar36 = auVar67._0_8_;
  if (lVar36 == 0) {
    auVar67 = ZEXT816(1);
  }
  auVar68 = FUN_0070f26c(lVar36,uVar31,&DAT_0045af25);
  lVar36 = auVar68._0_8_;
  FUN_0070f2d8(lVar36,auVar68._8_8_,&DAT_0045ae7d);
  auVar65 = FUN_006e592c();
  uVar31 = auVar65._8_8_;
  lVar27 = auVar65._0_8_;
  if (lVar27 == 0) {
    auVar65 = ZEXT816(1);
  }
  auVar69 = FUN_0070f26c(lVar27,uVar31,&DAT_0045ae9d);
  uVar31 = auVar69._8_8_;
  lVar27 = auVar69._0_8_;
  if (lVar27 == 0) {
    auVar69 = ZEXT816(1);
  }
  auVar66 = FUN_0070f26c(lVar27,uVar31,&DAT_0045aeac);
  uVar31 = auVar66._8_8_;
  lVar27 = auVar66._0_8_;
  if (lVar27 == 0) {
    auVar66 = ZEXT816(1);
  }
  FUN_0070f2d8(lVar27,uVar31,&DAT_0045af01);
  auVar70 = FUN_0070f2a0();
  uVar31 = auVar70._8_8_;
  lVar27 = auVar70._0_8_;
  if (lVar27 == 0) {
    auVar70 = ZEXT816(1);
  }
  FUN_0070f2d8(lVar27,uVar31,&DAT_0045af0f);
  auVar71 = FUN_006e592c();
  uVar31 = auVar71._8_8_;
  lVar27 = auVar71._0_8_;
  if (lVar27 == 0) {
    auVar71 = ZEXT816(1);
  }
  FUN_0070f2d8(lVar27,uVar31,&DAT_0045aebb);
  auVar72 = FUN_0070f2a0();
  uVar31 = auVar72._8_8_;
  lVar27 = auVar72._0_8_;
  if (lVar27 == 0) {
    auVar72 = ZEXT816(1);
  }
  FUN_0070f2d8(lVar27,uVar31,&DAT_0045aec9);
  auVar73 = FUN_0070f35c();
  uVar31 = auVar73._8_8_;
  lVar27 = auVar73._0_8_;
  if (lVar27 == 0) {
    auVar73 = ZEXT816(1);
  }
  FUN_0070f2d8(lVar27,uVar31,&DAT_0045aeee);
  auVar74 = FUN_0070f35c();
  uVar31 = auVar74._8_8_;
  lVar27 = auVar74._0_8_;
  if (lVar27 == 0) {
    auVar74 = ZEXT816(1);
  }
  FUN_0070f2d8(lVar27,uVar31,&DAT_00371ac0);
  auVar75 = FUN_0070f468();
  if (auVar75._0_8_ == 0) {
    auVar75 = ZEXT816(1);
  }
  FUN_006e01b8(&local_460,auVar67._0_8_,auVar67._8_8_);
  bVar49 = local_460;
  if (local_460 == 0xff) {
    uStack_481 = local_450;
    uStack_480 = uStack_44f;
    uStack_489 = uStack_458;
    uStack_488 = (undefined7)(CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458)) >> 8);
  }
  else {
    uStack_488 = CONCAT61(uStack_456,uStack_457);
    bVar18 = lVar36 == 0;
    if (bVar18) {
      lVar36 = 1;
    }
    local_490 = uStack_45f;
    uStack_489 = uStack_458;
    uStack_481 = local_450;
    uStack_480 = uStack_44f;
    ppuStack_4d8 = ppuStack_440;
    local_4e0 = local_448;
    ppuStack_4c8 = ppuStack_430;
    local_4d0 = local_438;
    uVar31 = 0;
    if (!bVar18) {
      uVar31 = auVar68._8_8_;
    }
    ppuStack_4b8 = ppuStack_420;
    ppuStack_4c0 = local_428;
    local_4a8 = ppuStack_410;
    ppuStack_4b0 = local_418;
    FUN_006e01b8(&local_460,lVar36,uVar31);
    if (local_460 != 0xff) {
      uStack_638 = CONCAT61(uStack_456,uStack_457);
      local_520 = uStack_45f;
      uStack_519 = uStack_458;
      local_7d8 = (long *)(ulong)(uint)local_460;
      ppuStack_678 = ppuStack_440;
      local_680 = local_448;
      ppuStack_668 = ppuStack_430;
      ppuStack_670 = local_438;
      uStack_5b0 = uStack_480;
      ppuStack_658 = ppuStack_420;
      local_660 = local_428;
      ppuStack_648 = ppuStack_410;
      ppuStack_650 = local_418;
      local_5c0 = (undefined8 *)CONCAT17(uStack_489,local_490);
      uStack_511 = local_450;
      uStack_510 = uStack_44f;
      uStack_5b8 = uStack_488;
      uStack_5b1 = uStack_481;
      ppuStack_1e1 = local_4a8;
      local_1e9 = ppuStack_4b0;
      ppuStack_1f1 = ppuStack_4b8;
      uStack_1f9 = SUB81(ppuStack_4c0,0);
      uStack_1f8 = (undefined7)((ulong)ppuStack_4c0 >> 8);
      uStack_530 = uStack_480;
      uStack_538 = uStack_488;
      uStack_531 = uStack_481;
      uStack_201 = SUB81(ppuStack_4c8,0);
      uStack_200 = (undefined7)((ulong)ppuStack_4c8 >> 8);
      local_209 = SUB81(local_4d0,0);
      uStack_208 = (undefined7)((ulong)local_4d0 >> 8);
      local_640 = CONCAT17(uStack_458,uStack_45f);
      ppuStack_211 = ppuStack_4d8;
      local_219 = local_4e0;
      uStack_630 = uStack_44f;
      uStack_631 = local_450;
      uStack_220 = uStack_480;
      uStack_228 = uStack_488;
      uStack_221 = uStack_481;
      local_540 = local_5c0;
      uStack_518 = uStack_638;
      local_230 = local_5c0;
      memcpy(auStack_620,&local_230,0x57);
      FUN_006c4da4(lVar54,param_5[1]);
      goto LAB_006e3d58;
    }
    uStack_511 = local_450;
    uStack_510 = uStack_44f;
    uStack_519 = uStack_458;
    uStack_518 = (undefined7)(CONCAT62(uStack_456,CONCAT11(uStack_457,uStack_458)) >> 8);
  }
  lVar36 = param_5[1];
  *__dest = 0xffffffffffffffff;
  FUN_006c4da4(lVar54,lVar36);
                    /* try { // try from 006e3e50 to 006e3e5f has its CatchHandler @ 006e4154 */
  FUN_006c2644(&local_6b8);
  goto LAB_006e38e0;
LAB_006e36f8:
  uVar57 = (ulong)ppuVar59 >> 8;
LAB_006e36fc:
  ppuVar55 = local_550;
  lVar36 = local_548 + 1;
  ppuVar29 = local_550;
  while (lVar36 = lVar36 + -1, lVar36 != 0) {
                    /* try { // try from 006e3718 to 006e371b has its CatchHandler @ 006e41f0 */
    FUN_006c2f0c(ppuVar29);
    ppuVar29 = ppuVar29 + 0x46;
  }
  if (local_558 != 0) {
    FUN_0070f244(ppuVar55);
  }
  uVar50 = 0;
  ppuVar29 = ppuVar59;
  if (local_570 != (undefined8 **)0x0) {
    FUN_0070f23c(local_568,(long)local_570 << 5);
  }
LAB_006e374c:
  if (local_5a0 != 0) {
    puVar62 = (undefined8 *)0x0;
    goto LAB_006e3758;
  }
LAB_006e3894:
  do {
    lVar36 = *plVar26;
    cVar12 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar18) {
      *plVar26 = lVar36 + -1;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  if (lVar36 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 006e38b4 to 006e38bb has its CatchHandler @ 006e4154 */
    <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
    ::drop_slow(&local_5c8);
  }
  lVar36 = *param_5;
  *__dest = 0xffffffffffffffff;
  if (lVar36 != -1) {
    FUN_006c4da4(lVar36,param_5[1]);
  }
LAB_006e38e0:
  if (lVar35 == -1 && *param_4 != -1) {
    FUN_006c4da4(*param_4,param_4[1]);
  }
  FUN_006c4da4(*param_3,param_3[1]);
LAB_006e3904:
  FUN_0070f3d0();
  return;
}


// ===== 006e4300  <std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>::write_cold =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>::write_cold
    */

undefined1  [16] __rustcall
<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>::
write_cold(ulong *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  int *piVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = *param_1;
  if (uVar6 - param_1[2] < param_3) {
    lVar4 = FUN_006e4500(param_1);
    if (lVar4 != 0) {
      auVar7._8_8_ = lVar4;
      auVar7._0_8_ = 1;
      return auVar7;
    }
    uVar6 = *param_1;
  }
  if (param_3 < uVar6) {
    uVar6 = param_1[2];
    memcpy((void *)(param_1[1] + uVar6),param_2,param_3);
    param_1[2] = uVar6 + param_3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  uVar6 = ::write(1,param_2,param_3);
  if (uVar6 != 0xffffffffffffffff) {
    *(undefined1 *)(param_1 + 3) = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    return auVar3 << 0x40;
  }
  piVar5 = (int *)__errno();
  iVar1 = *piVar5;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar8._1_7_ = 0;
  auVar8[0] = iVar1 != 9;
  uVar6 = (long)iVar1 << 0x20 | 2;
  if (iVar1 == 9) {
    uVar6 = param_3;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  auVar8._8_8_ = uVar6;
  return auVar8;
}


// ===== 006e4430  <std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>::write_all_cold =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>::write_all_cold
    */

ulong __rustcall
<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>::
write_all_cold(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 - param_1[2] < param_3) {
    uVar2 = FUN_006e4500(param_1);
    if (uVar2 != 0) {
      return uVar2;
    }
    uVar2 = *param_1;
  }
  if (uVar2 <= param_3) {
    *(undefined1 *)(param_1 + 3) = 1;
    uVar1 = FUN_0070e9f0(param_2,param_3);
    uVar2 = uVar1;
    if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) &&
       (uVar2 = 0, uVar1 >> 0x20 != 9)) {
      uVar2 = uVar1;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    return uVar2;
  }
  uVar2 = param_1[2];
  memcpy((void *)(param_1[1] + uVar2),param_2,param_3);
  param_1[2] = uVar2 + param_3;
  return 0;
}


// ===== 006e4500  FUN_006e4500 =====

undefined ** FUN_006e4500(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  void *__dest;
  ulong uVar6;
  undefined **ppuVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 == 0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    __dest = *(void **)(param_1 + 8);
    uVar5 = 0;
    do {
      *(undefined1 *)(param_1 + 0x18) = 1;
      __n = uVar6 - uVar5;
      lVar2 = write(1,(void *)((long)__dest + uVar5),uVar6 - uVar5);
      if (lVar2 == -1) {
        piVar3 = (int *)__errno();
        iVar1 = *piVar3;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006e45d8 to 006e45df has its CatchHandler @ 006e4664 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        ppuVar7 = (undefined **)((long)iVar1 << 0x20 | 2);
        lVar2 = uVar6 - uVar5;
        *(undefined1 *)(param_1 + 0x18) = 0;
        if (iVar1 == 9) goto LAB_006e45cc;
                    /* try { // try from 006e45b4 to 006e45c3 has its CatchHandler @ 006e466c */
        lVar2 = core::io::error::os_functions::get_os_functions();
        uVar4 = (**(code **)(lVar2 + 0x10))(iVar1);
        if ((uVar4 & 1) == 0) goto LAB_006e4610;
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 0;
LAB_006e45cc:
        if (lVar2 == 0) {
          ppuVar7 = &PTR_DAT_00977ad8;
LAB_006e4610:
          if (uVar5 == 0) {
            return ppuVar7;
          }
          memmove(__dest,(void *)((long)__dest + uVar5),__n);
          goto LAB_006e4624;
        }
        uVar5 = lVar2 + uVar5;
      }
      __n = uVar6 - uVar5;
    } while (uVar6 >= uVar5 && __n != 0);
    if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar5,uVar6,uVar6,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977d90);
    }
    memmove(*(void **)(param_1 + 8),(void *)((long)*(void **)(param_1 + 8) + uVar5),__n);
    ppuVar7 = (undefined **)0x0;
LAB_006e4624:
    *(size_t *)(param_1 + 0x10) = __n;
  }
  return ppuVar7;
}


// ===== 006e4694  <std::os::fd::owned::std::os::fd::owned::OwnedFd>::try_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::fd::owned::std::os::fd::owned::OwnedFd>::try_clone */

void __rustcall
<std::os::fd::owned::std::os::fd::owned::OwnedFd>::try_clone(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fcntl(*param_2,0x406,3);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 006e4720  <std::sys::process::env::std::sys::process::env::CommandEnv>::set =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::env::std::sys::process::env::CommandEnv>::set */

void __rustcall
<std::sys::process::env::std::sys::process::env::CommandEnv>::set
          (long param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  int *__dest;
  void *__dest_00;
  long local_88;
  undefined8 local_80;
  size_t local_70;
  int *piStack_68;
  size_t local_60;
  size_t local_58;
  void *pvStack_50;
  size_t local_48;
  
  if (param_3 == 0) {
    piStack_68 = (int *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (int *)__rustc::__rust_alloc(param_3,1);
    if (__dest == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
    piStack_68 = __dest;
    if (((param_3 == 4) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) && (*__dest == 0x48544150)) {
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
  }
  local_70 = param_3;
  local_60 = param_3;
  if (param_5 == 0) {
    __dest_00 = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest_00 = (void *)__rustc::__rust_alloc(param_5,1);
    if (__dest_00 == (void *)0x0) {
                    /* try { // try from 006e4854 to 006e485f has its CatchHandler @ 006e4864 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_5);
    }
    memcpy(__dest_00,param_4,param_5);
  }
  local_58 = param_5;
  pvStack_50 = __dest_00;
  local_48 = param_5;
  FUN_006eb6cc(&local_88,param_1,&local_70,&local_58);
  if (0 < local_88) {
    __rustc::__rust_dealloc(local_80,local_88,1);
    return;
  }
  return;
}


// ===== 006e4884  <std::sys::process::env::std::sys::process::env::CommandEnv>::remove =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::env::std::sys::process::env::CommandEnv>::remove */

void __rustcall
<std::sys::process::env::std::sys::process::env::CommandEnv>::remove
          (size_t *param_1,void *param_2,size_t param_3)

{
  char cVar1;
  ushort *puVar2;
  size_t __n;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  int *__dest;
  size_t sVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  size_t sVar12;
  size_t sVar13;
  size_t sVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  char local_10c [4];
  long local_108;
  undefined8 local_100;
  long local_f8;
  size_t local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long *plStack_c0;
  ulong local_b0;
  size_t local_a0;
  int *piStack_98;
  size_t local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if (param_3 == 0) {
    __dest = (int *)0x1;
    bVar4 = (byte)param_1[3];
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (int *)__rustc::__rust_alloc(param_3,1);
    if (__dest == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
    if (((param_3 == 4) && ((*(byte *)((long)param_1 + 0x19) & 1) == 0)) && (*__dest == 0x48544150))
    {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
    bVar4 = (byte)param_1[3];
  }
  if ((bVar4 & 1) == 0) {
    local_f0 = 0xffffffffffffffff;
    local_a0 = param_3;
    piStack_98 = __dest;
    local_90 = param_3;
    FUN_006eb6cc(&local_108,param_1,&local_a0,&local_f0);
    if (0 < local_108) {
      __rustc::__rust_dealloc(local_100,local_108,1);
    }
  }
  else {
    sVar6 = *param_1;
    if (sVar6 != 0) {
      sVar12 = param_1[1];
      sVar13 = sVar12;
      sVar14 = sVar6;
LAB_006e4924:
      uVar15 = (ulong)*(ushort *)(sVar14 + 0x21a);
      lVar8 = sVar14 + 8;
      lVar11 = uVar15 * 0x18;
      lVar9 = 0x43;
      do {
        lVar16 = lVar9;
        if (lVar11 == 0) goto LAB_006e4988;
        puVar7 = (undefined8 *)(lVar8 + 8);
        uVar3 = *(ulong *)(lVar8 + 0x10);
        lVar8 = lVar8 + 0x18;
        __n = param_3;
        if (uVar3 <= param_3) {
          __n = uVar3;
        }
        iVar5 = memcmp(__dest,(void *)*puVar7,__n);
        lVar11 = lVar11 + -0x18;
        lVar9 = param_3 - uVar3;
        if (iVar5 != 0) {
          lVar9 = (long)iVar5;
        }
        cVar1 = 0 < lVar9;
        if (lVar9 < 0) {
          cVar1 = -1;
        }
        lVar9 = lVar16 + 1;
      } while (cVar1 == '\x01');
      if (cVar1 == '\0') {
        local_10c[0] = '\0';
        if (sVar13 == 0) {
          local_90 = lVar16 + -0x43;
          piStack_98 = (int *)0x0;
          local_a0 = sVar14;
          FUN_006c1c00(&local_f0,&local_a0,local_10c);
        }
        else {
          local_108 = *(long *)(sVar14 + (lVar16 + 1) * 8);
          while (sVar13 = sVar13 - 1, sVar13 != 0) {
            local_108 = *(long *)(local_108 + (ulong)*(ushort *)(local_108 + 0x21a) * 8 + 0x220);
          }
          local_100 = 0;
          local_f8 = (ulong)*(ushort *)(local_108 + 0x21a) - 1;
                    /* try { // try from 006e4a24 to 006e4ad3 has its CatchHandler @ 006e4be0 */
          FUN_006c1c00(&local_f0,&local_108,local_10c);
          plVar10 = plStack_c0;
          if (*(ushort *)((long)plStack_c0 + 0x21a) <= local_b0) {
            do {
              plStack_c0 = (long *)*plVar10;
              puVar2 = (ushort *)(plVar10 + 0x43);
              local_b0 = (ulong)*puVar2;
              plVar10 = plStack_c0;
            } while (*(ushort *)((long)plStack_c0 + 0x21a) <= *puVar2);
          }
          lVar11 = plStack_c0[local_b0 * 3 + 2];
          sVar13 = plStack_c0[local_b0 * 3 + 1];
          plStack_c0[local_b0 * 3 + 1] = local_f0;
          plStack_c0[local_b0 * 3 + 2] = lStack_e8;
          lVar9 = plStack_c0[local_b0 * 3 + 3];
          lVar17 = plStack_c0[local_b0 * 3 + 0x23];
          lVar16 = plStack_c0[local_b0 * 3 + 0x22];
          plStack_c0[local_b0 * 3 + 0x22] = lStack_d8;
          plStack_c0[local_b0 * 3 + 0x23] = local_d0;
          lVar8 = plStack_c0[local_b0 * 3 + 0x24];
          plStack_c0[local_b0 * 3 + 3] = local_e0;
          plStack_c0[local_b0 * 3 + 0x24] = lStack_c8;
          local_f0 = sVar13;
          lStack_e8 = lVar11;
          local_e0 = lVar9;
          lStack_d8 = lVar16;
          local_d0 = lVar17;
          lStack_c8 = lVar8;
        }
        piStack_98 = (int *)lStack_e8;
        local_a0 = local_f0;
        lStack_88 = lStack_d8;
        local_90 = local_e0;
        lStack_78 = lStack_c8;
        lStack_80 = local_d0;
        param_1[2] = param_1[2] - 1;
        if (local_10c[0] == '\x01') {
          if (sVar12 == 0) {
                    /* try { // try from 006e4bb8 to 006e4bcf has its CatchHandler @ 006e4be8 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic
                      (&DAT_0045ac90,0x21,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d98);
          }
          puVar7 = *(undefined8 **)(sVar6 + 0x220);
          *param_1 = (size_t)puVar7;
          param_1[1] = sVar12 - 1;
          *puVar7 = 0;
          __rustc::__rust_dealloc(sVar6,0x280,8);
        }
        lVar9 = lStack_80;
        lVar8 = lStack_88;
        if (local_a0 != 0xffffffffffffffff) {
          if (local_a0 != 0) {
            __rustc::__rust_dealloc(piStack_98,local_a0,1);
          }
          if (lVar8 - 1U < 0xfffffffffffffffd) {
            __rustc::__rust_dealloc(lVar9,lVar8,1);
          }
        }
      }
      else {
        uVar15 = lVar16 - 0x43;
LAB_006e4988:
        if (sVar13 != 0) goto code_r0x006e498c;
      }
    }
    if (param_3 != 0) {
      __rustc::__rust_dealloc(__dest,param_3,1);
      return;
    }
  }
  return;
code_r0x006e498c:
  sVar13 = sVar13 - 1;
  sVar14 = *(size_t *)(sVar14 + uVar15 * 8 + 0x220);
  goto LAB_006e4924;
}


// ===== 006e4c10  FUN_006e4c10 =====

void FUN_006e4c10(undefined8 *param_1,long *param_2)

{
  char cVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  long local_170;
  undefined8 *local_160;
  long lStack_158;
  long local_150;
  undefined8 *local_148;
  ulong *puStack_140;
  undefined8 *local_138;
  ulong *puStack_130;
  ulong local_128;
  ulong local_120;
  ulong uStack_118;
  ulong *local_110;
  ulong uStack_108;
  ulong local_100;
  undefined8 *local_f0;
  ulong *puStack_e8;
  undefined8 *local_e0;
  ulong *puStack_d8;
  ulong local_d0;
  long lStack_c8;
  long *local_c0;
  ulong local_b0;
  undefined8 *local_a0;
  ulong *puStack_98;
  undefined8 *local_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  
  local_160 = (undefined8 *)0x0;
  local_150 = 0;
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
                    /* try { // try from 006e4c48 to 006e4c4f has its CatchHandler @ 006e51cc */
    std::env::vars_os(&local_148);
    puStack_d8 = puStack_130;
    local_e0 = local_138;
    local_f0 = local_148;
    uVar12 = local_128;
    while (puVar7 = puStack_140, puStack_140 != puStack_130) {
      puVar7 = puStack_140 + 6;
      local_128 = *puStack_140;
      if (local_128 == 0xffffffffffffffff) break;
      uStack_118 = puStack_140[2];
      local_120 = puStack_140[1];
      uStack_108 = puStack_140[4];
      local_110 = (ulong *)puStack_140[3];
      local_100 = puStack_140[5];
                    /* try { // try from 006e4cb8 to 006e4ccb has its CatchHandler @ 006e519c */
      FUN_006eab80(&local_a0,&local_160,&local_128,&local_110);
      puStack_140 = puVar7;
      uVar12 = local_128;
      if (0 < (long)local_a0) {
        __rustc::__rust_dealloc(puStack_98,local_a0,1);
        uVar12 = local_128;
      }
    }
    local_128 = uVar12;
    puStack_e8 = puVar7;
    if ((long)puStack_130 - (long)puVar7 != 0) {
      puVar23 = puVar7 + 4;
      uVar12 = (ulong)((long)puStack_130 - (long)puVar7) / 0x30;
      do {
        if (puVar23[-4] != 0) {
          __rustc::__rust_dealloc(puVar23[-3],puVar23[-4],1);
        }
        if (puVar23[-1] != 0) {
          __rustc::__rust_dealloc(*puVar23,puVar23[-1],1);
        }
        uVar12 = uVar12 - 1;
        puVar23 = puVar23 + 6;
      } while (uVar12 != 0);
    }
    if (local_e0 != (undefined8 *)0x0) {
      __rustc::__rust_dealloc(local_f0,(long)local_e0 * 0x30,8);
    }
  }
  plVar8 = (long *)*param_2;
  if ((plVar8 != (long *)0x0) && (lVar11 = param_2[2], lVar11 != 0)) {
    plVar20 = (long *)0x0;
    uVar12 = param_2[1];
    do {
      lVar5 = lStack_158;
      puVar14 = local_160;
      if (plVar20 == (long *)0x0) {
        for (; plVar20 = plVar8, uVar12 != 0; uVar12 = uVar12 - 1) {
          plVar8 = (long *)plVar20[0x44];
        }
        plVar8 = (long *)0x0;
        uVar12 = 0;
        plVar9 = plVar20;
        if (*(short *)((long)plVar20 + 0x21a) == 0) goto LAB_006e4dd8;
      }
      else {
        plVar9 = plVar20;
        if (*(ushort *)((long)plVar20 + 0x21a) <= uVar12) {
LAB_006e4dd8:
          do {
            plVar20 = (long *)*plVar9;
            if (plVar20 == (long *)0x0) {
                    /* try { // try from 006e5164 to 006e516f has its CatchHandler @ 006e51dc */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977248);
            }
            puVar2 = (ushort *)(plVar9 + 0x43);
            uVar12 = (ulong)*puVar2;
            plVar8 = (long *)((long)plVar8 + 1);
            plVar9 = plVar20;
          } while (*(ushort *)((long)plVar20 + 0x21a) <= *puVar2);
        }
      }
      if (plVar8 == (long *)0x0) {
        uVar13 = uVar12 + 1;
        plVar8 = plVar20 + uVar12 * 3;
        if (plVar8[0x22] == -1) goto LAB_006e4eb8;
LAB_006e4e30:
        puVar14 = (undefined8 *)plVar8[3];
        if (puVar14 == (undefined8 *)0x0) {
          puStack_98 = (ulong *)0x1;
          puVar17 = (undefined8 *)plVar8[0x24];
          if (puVar17 == (undefined8 *)0x0) goto LAB_006e4f6c;
LAB_006e4e70:
          pvVar16 = (void *)plVar8[0x23];
          local_a0 = puVar14;
          local_90 = puVar14;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar7 = (ulong *)__rustc::__rust_alloc(puVar17,1);
          if (puVar7 == (ulong *)0x0) {
                    /* try { // try from 006e5184 to 006e518f has its CatchHandler @ 006e51b0 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(1,puVar17);
          }
          memcpy(puVar7,pvVar16,(size_t)puVar17);
        }
        else {
          pvVar16 = (void *)plVar8[2];
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar7 = (ulong *)__rustc::__rust_alloc(puVar14,1);
          if (puVar7 == (ulong *)0x0) {
                    /* try { // try from 006e5174 to 006e517f has its CatchHandler @ 006e51cc */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(1,puVar14);
          }
          memcpy(puVar7,pvVar16,(size_t)puVar14);
          puVar17 = (undefined8 *)plVar8[0x24];
          puStack_98 = puVar7;
          if (puVar17 != (undefined8 *)0x0) goto LAB_006e4e70;
LAB_006e4f6c:
          puVar7 = (ulong *)0x1;
          local_a0 = puVar14;
          local_90 = puVar14;
        }
                    /* try { // try from 006e4f78 to 006e4f8b has its CatchHandler @ 006e51d4 */
        local_f0 = puVar17;
        puStack_e8 = puVar7;
        local_e0 = puVar17;
        FUN_006eab80(&local_110,&local_160,&local_a0,&local_f0);
        uVar12 = uStack_108;
        puVar7 = local_110;
        if (0 < (long)local_110) {
LAB_006e4d80:
          __rustc::__rust_dealloc(uVar12,puVar7,1);
        }
      }
      else {
        plVar9 = plVar20 + uVar12 + 0x45;
        do {
          plVar21 = (long *)*plVar9;
          plVar8 = (long *)((long)plVar8 + -1);
          plVar9 = plVar21 + 0x44;
        } while (plVar8 != (long *)0x0);
        uVar13 = 0;
        plVar8 = plVar20 + uVar12 * 3;
        plVar20 = plVar21;
        if (plVar8[0x22] != -1) goto LAB_006e4e30;
LAB_006e4eb8:
        if (local_160 != (undefined8 *)0x0) {
          pvVar16 = (void *)plVar8[2];
          uVar12 = plVar8[3];
          local_170 = lStack_158;
          puVar17 = local_160;
LAB_006e4ed8:
          uVar19 = (ulong)*(ushort *)((long)puVar17 + 0x21a);
          puVar22 = puVar17 + 1;
          lVar15 = uVar19 * 0x18;
          lVar10 = 0x43;
          do {
            lVar18 = lVar10;
            if (lVar15 == 0) goto LAB_006e4f3c;
            puVar3 = puVar22 + 1;
            uVar4 = puVar22[2];
            puVar22 = puVar22 + 3;
            __n = uVar12;
            if (uVar4 <= uVar12) {
              __n = uVar4;
            }
            iVar6 = memcmp(pvVar16,(void *)*puVar3,__n);
            lVar15 = lVar15 + -0x18;
            lVar10 = uVar12 - uVar4;
            if (iVar6 != 0) {
              lVar10 = (long)iVar6;
            }
            cVar1 = 0 < lVar10;
            if (lVar10 < 0) {
              cVar1 = -1;
            }
            lVar10 = lVar18 + 1;
          } while (cVar1 == '\x01');
          if (cVar1 == '\0') {
            local_128 = local_128 & 0xffffffffffffff00;
            if (local_170 == 0) {
              local_90 = (undefined8 *)(lVar18 + -0x43);
              puStack_98 = (ulong *)0x0;
              local_a0 = puVar17;
              FUN_006c16d0(&local_f0,&local_a0,&local_128);
            }
            else {
              local_110 = (ulong *)puVar17[lVar18 + 1];
              while (local_170 = local_170 + -1, local_170 != 0) {
                local_110 = (ulong *)local_110[(ulong)*(ushort *)((long)local_110 + 0x21a) + 0x44];
              }
              uStack_108 = 0;
              local_100 = (ulong)*(ushort *)((long)local_110 + 0x21a) - 1;
                    /* try { // try from 006e4fdc to 006e508b has its CatchHandler @ 006e5194 */
              FUN_006c16d0(&local_f0,&local_110,&local_128);
              plVar8 = local_c0;
              plVar9 = local_c0;
              uVar12 = local_b0;
              if (*(ushort *)((long)local_c0 + 0x21a) <= local_b0) {
                do {
                  plVar9 = (long *)*plVar8;
                  puVar2 = (ushort *)(plVar8 + 0x43);
                  uVar12 = (ulong)*puVar2;
                  plVar8 = plVar9;
                } while (*(ushort *)((long)plVar9 + 0x21a) <= *puVar2);
              }
              puVar7 = (ulong *)plVar9[uVar12 * 3 + 2];
              puVar22 = (undefined8 *)plVar9[uVar12 * 3 + 1];
              plVar9[uVar12 * 3 + 1] = (long)local_f0;
              plVar9[uVar12 * 3 + 2] = (long)puStack_e8;
              puVar17 = (undefined8 *)plVar9[uVar12 * 3 + 3];
              uVar19 = plVar9[uVar12 * 3 + 0x23];
              puVar23 = (ulong *)plVar9[uVar12 * 3 + 0x22];
              lVar10 = plVar9[uVar12 * 3 + 0x24];
              plVar9[uVar12 * 3 + 3] = (long)local_e0;
              plVar9[uVar12 * 3 + 0x22] = (long)puStack_d8;
              plVar9[uVar12 * 3 + 0x23] = local_d0;
              plVar9[uVar12 * 3 + 0x24] = lStack_c8;
              local_f0 = puVar22;
              puStack_e8 = puVar7;
              local_e0 = puVar17;
              puStack_d8 = puVar23;
              local_d0 = uVar19;
              lStack_c8 = lVar10;
            }
            local_150 = local_150 + -1;
            puStack_98 = puStack_e8;
            local_a0 = local_f0;
            puStack_88 = puStack_d8;
            local_90 = local_e0;
            lStack_78 = lStack_c8;
            uStack_80 = local_d0;
            if ((char)local_128 == '\x01') {
              if (lVar5 == 0) {
                    /* try { // try from 006e5148 to 006e515f has its CatchHandler @ 006e51e0 */
                    /* WARNING: Subroutine does not return */
                core::panicking::panic
                          (&DAT_0045ac90,0x21,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d98);
              }
              lStack_158 = lVar5 + -1;
              local_160 = (undefined8 *)puVar14[0x44];
              *local_160 = 0;
              __rustc::__rust_dealloc(puVar14,0x280,8);
            }
            uVar12 = uStack_80;
            puVar7 = puStack_88;
            if (local_a0 != (undefined8 *)0xffffffffffffffff) {
              if (local_a0 != (undefined8 *)0x0) {
                __rustc::__rust_dealloc(puStack_98,local_a0,1);
              }
              if (0xfffffffffffffffd < (long)puVar7 - 1U) goto LAB_006e4d88;
              goto LAB_006e4d80;
            }
          }
          else {
            uVar19 = lVar18 - 0x43;
LAB_006e4f3c:
            if (local_170 != 0) goto code_r0x006e4f44;
          }
        }
      }
LAB_006e4d88:
      plVar8 = (long *)0x0;
      lVar11 = lVar11 + -1;
      uVar12 = uVar13;
    } while (lVar11 != 0);
  }
  param_1[1] = lStack_158;
  *param_1 = local_160;
  param_1[2] = local_150;
  return;
code_r0x006e4f44:
  local_170 = local_170 + -1;
  puVar17 = (undefined8 *)puVar17[uVar19 + 0x44];
  goto LAB_006e4ed8;
}


// ===== 006e5200  FUN_006e5200 =====

undefined8 FUN_006e5200(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 8);
  uVar6 = 0;
  if (uVar4 != 1) {
    uVar6 = 0;
    uVar7 = uVar4;
    do {
      uVar1 = (uVar7 >> 1) + uVar6;
      if (*(ulong *)(lVar3 + uVar1 * 0x18) <= param_2) {
        uVar6 = uVar1;
      }
      uVar7 = uVar7 - (uVar7 >> 1);
    } while (1 < uVar7);
  }
  uVar7 = *(ulong *)(lVar3 + uVar6 * 0x18);
  if (uVar7 != param_2) {
    if (uVar7 < param_2) {
      uVar6 = uVar6 + 1;
    }
    if (uVar6 == 0) {
      return 0;
    }
    uVar6 = uVar6 - 1;
  }
  if (uVar6 < uVar4) {
    puVar5 = (ulong *)(lVar3 + uVar6 * 0x18);
    if ((((*puVar5 <= param_2) && (param_2 <= puVar5[1] + *puVar5)) &&
        (*(long *)(param_1 + 0x58) != 0)) &&
       (!CARRY8(*(ulong *)(param_1 + 0x68),(ulong)(uint)puVar5[2]))) {
      uVar2 = <&[u8]as_object::read::read_ref::ReadRef>::read_bytes_at_until
                        (*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                         *(ulong *)(param_1 + 0x68) + (ulong)(uint)puVar5[2],
                         *(undefined8 *)(param_1 + 0x70),0);
      return uVar2;
    }
  }
  return 0;
}


// ===== 006e52f0  FUN_006e52f0 =====

void FUN_006e52f0(ulong *param_1,int *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  int *piVar23;
  ulong *puVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  ulong local_80;
  ulong *puStack_78;
  ulong local_70;
  undefined1 auStack_68 [8];
  
  if (((((param_3 < 0x40) || (*param_2 != 0x464c457f)) || ((char)param_2[1] != '\x02')) ||
      ((1 < *(byte *)((long)param_2 + 5) - 1 || (*(char *)((long)param_2 + 6) != '\x01')))) ||
     (*(byte *)((long)param_2 + 5) == 2)) goto LAB_006e531c;
  uVar10 = *(ulong *)(param_2 + 10);
  if (uVar10 == 0) {
    uVar28 = 0;
LAB_006e541c:
    piVar9 = (int *)0x0;
    uVar8 = 0;
    uVar6 = 0;
    piVar23 = (int *)0x0;
    uVar18 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar16 = 1;
    puVar30 = (undefined4 *)0x1;
    goto LAB_006e5434;
  }
  uVar28 = (ulong)*(ushort *)(param_2 + 0xf);
  bVar5 = *(short *)((long)param_2 + 0x3a) != 0x40;
  if (uVar28 == 0) {
    if (((bVar5) || (uVar16 = param_3 - uVar10, param_3 < uVar10)) || (uVar16 < 0x40))
    goto LAB_006e531c;
    uVar28 = *(ulong *)((long)param_2 + uVar10 + 0x20);
    if (uVar28 == 0) goto LAB_006e541c;
    if (uVar28 >> 0x3a != 0) goto LAB_006e531c;
  }
  else {
    if (bVar5) goto LAB_006e531c;
    uVar16 = param_3 - uVar10;
  }
  if ((param_3 < uVar10) || (uVar14 = uVar28 * 0x40, uVar16 <= uVar14 && uVar14 - uVar16 != 0)) {
LAB_006e531c:
    *param_1 = 0xffffffffffffffff;
    return;
  }
  uVar15 = (uint)*(ushort *)((long)param_2 + 0x3e);
  uVar16 = (long)param_2 + uVar10;
  if (*(ushort *)((long)param_2 + 0x3e) == 0xffff) {
    uVar15 = *(uint *)(uVar16 + 0x28);
  }
  if ((uVar15 == 0) || (uVar28 <= uVar15)) goto LAB_006e531c;
  lVar11 = uVar16 + (ulong)uVar15 * 0x40;
  if (*(int *)(lVar11 + 4) == 8) {
    uVar6 = 0;
    uVar8 = 0;
    piVar9 = (int *)0x0;
  }
  else {
    uVar8 = *(ulong *)(lVar11 + 0x18);
    uVar6 = *(ulong *)(lVar11 + 0x20) + uVar8;
    piVar9 = param_2;
    if (CARRY8(*(ulong *)(lVar11 + 0x20),uVar8)) goto LAB_006e531c;
  }
  uVar17 = 0;
  puVar13 = (uint *)((long)param_2 + uVar10 + 0x28);
  uVar20 = uVar14;
  do {
    if (puVar13[-9] == 2) {
      uVar21 = *(ulong *)(puVar13 + -2);
      if (uVar21 == 0) {
        puVar30 = (undefined4 *)0x1;
      }
      else {
        uVar20 = *(ulong *)(puVar13 + -4);
        if ((param_3 < uVar20) || (param_3 - uVar20 < uVar21)) goto LAB_006e531c;
        puVar30 = (undefined4 *)((long)param_2 + uVar20);
      }
      uVar19 = uVar21 / 0x18;
      if (uVar21 != uVar19 * 0x18) goto LAB_006e531c;
      uVar15 = *puVar13;
      if (uVar15 == 0) {
        uVar20 = 0;
        uVar18 = 0;
        piVar23 = (int *)0x0;
      }
      else {
        if ((uVar28 <= uVar15) ||
           (lVar11 = uVar16 + (ulong)uVar15 * 0x40, *(int *)(lVar11 + 4) != 3)) goto LAB_006e531c;
        uVar18 = *(ulong *)(lVar11 + 0x18);
        uVar20 = *(ulong *)(lVar11 + 0x20) + uVar18;
        piVar23 = param_2;
        if (CARRY8(*(ulong *)(lVar11 + 0x20),uVar18)) goto LAB_006e531c;
      }
      puVar13 = (uint *)((long)param_2 + uVar10 + 0x28);
      uVar26 = uVar14;
      goto LAB_006e5758;
    }
    uVar20 = uVar20 - 0x40;
    uVar17 = uVar17 + 1;
    puVar13 = puVar13 + 0x10;
  } while (uVar20 != 0);
  goto LAB_006e55f4;
  while( true ) {
    uVar14 = uVar14 - 0x40;
    puVar13 = puVar13 + 0x10;
    if (uVar14 == 0) break;
LAB_006e57dc:
    if ((((puVar13[-9] == 0x12) && (*puVar13 == uVar17)) &&
        (uVar10 = *(ulong *)(puVar13 + -2), uVar10 != 0)) &&
       ((((uVar10 & 3) != 0 || (param_3 < *(ulong *)(puVar13 + -4))) ||
        (param_3 - *(ulong *)(puVar13 + -4) < uVar10)))) goto LAB_006e531c;
  }
  goto LAB_006e5434;
  while( true ) {
    uVar26 = uVar26 - 0x40;
    puVar13 = puVar13 + 0x10;
    if (uVar26 == 0) break;
LAB_006e5758:
    if ((((puVar13[-9] == 0x12) && (*puVar13 == uVar17)) &&
        (uVar27 = *(ulong *)(puVar13 + -2), uVar27 != 0)) &&
       ((((uVar27 & 3) != 0 || (param_3 < *(ulong *)(puVar13 + -4))) ||
        (param_3 - *(ulong *)(puVar13 + -4) < uVar27)))) goto LAB_006e531c;
  }
  if (0x17 < uVar21) goto LAB_006e5434;
LAB_006e55f4:
  uVar17 = 0;
  puVar30 = (undefined4 *)0x1;
  puVar13 = (uint *)((long)param_2 + uVar10 + 0x28);
  uVar20 = uVar14;
  do {
    if (puVar13[-9] == 0xb) {
      uVar20 = *(ulong *)(puVar13 + -2);
      if (uVar20 == 0) {
        puVar30 = (undefined4 *)0x1;
      }
      else {
        uVar18 = *(ulong *)(puVar13 + -4);
        if ((param_3 < uVar18) || (param_3 - uVar18 < uVar20)) goto LAB_006e531c;
        puVar30 = (undefined4 *)((long)param_2 + uVar18);
      }
      uVar19 = uVar20 / 0x18;
      if (uVar20 != uVar19 * 0x18) goto LAB_006e531c;
      uVar15 = *puVar13;
      if (uVar15 == 0) {
        uVar20 = 0;
        uVar18 = 0;
        piVar23 = (int *)0x0;
      }
      else {
        if ((uVar28 <= uVar15) ||
           (lVar11 = uVar16 + (ulong)uVar15 * 0x40, *(int *)(lVar11 + 4) != 3)) goto LAB_006e531c;
        uVar18 = *(ulong *)(lVar11 + 0x18);
        uVar20 = *(ulong *)(lVar11 + 0x20) + uVar18;
        piVar23 = param_2;
        if (CARRY8(*(ulong *)(lVar11 + 0x20),uVar18)) goto LAB_006e531c;
      }
      uVar16 = (long)param_2 + uVar10;
      puVar13 = (uint *)((long)param_2 + uVar10 + 0x28);
      goto LAB_006e57dc;
    }
    uVar20 = uVar20 - 0x40;
    uVar17 = uVar17 + 1;
    puVar13 = puVar13 + 0x10;
  } while (uVar20 != 0);
  piVar23 = (int *)0x0;
  uVar18 = 0;
  uVar20 = 0;
  uVar19 = 0;
LAB_006e5434:
  lVar11 = uVar19 * 0x18;
  puVar4 = puVar30;
  do {
    puVar29 = puVar4;
    if (lVar11 == 0) {
      uVar14 = 0;
      uVar10 = 0;
      puVar12 = (ulong *)&DAT_00000008;
      goto LAB_006e5584;
    }
    puVar4 = puVar29 + 6;
    lVar11 = lVar11 + -0x18;
  } while (((*(byte *)(puVar29 + 1) & 0xf) - 3 < 0xfffffffe) || (*(short *)((long)puVar29 + 6) == 0)
          );
  uVar10 = *(ulong *)(puVar29 + 2);
  uVar14 = *(ulong *)(puVar29 + 4);
  uVar2 = *puVar29;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puStack_78 = (ulong *)__rustc::__rust_alloc(0x60,8);
  if (puStack_78 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(8,0x60);
  }
  *puStack_78 = uVar10;
  puStack_78[1] = uVar14;
  uVar10 = 1;
  *(undefined4 *)(puStack_78 + 2) = uVar2;
  local_80 = 4;
  puVar7 = puStack_78;
  while (puVar29 = puVar4, puVar12 = puStack_78, uVar14 = local_80, local_70 = uVar10,
        puVar29 != puVar30 + uVar19 * 6) {
    puVar4 = puVar29 + 6;
    if ((0xfffffffd < (*(byte *)(puVar29 + 1) & 0xf) - 3) && (*(short *)((long)puVar29 + 6) != 0)) {
      uVar17 = *(ulong *)(puVar29 + 4);
      uVar14 = *(ulong *)(puVar29 + 2);
      uVar2 = *puVar29;
      if (uVar10 == local_80) {
                    /* try { // try from 006e54f8 to 006e550f has its CatchHandler @ 006e58fc */
        FUN_006cecec(&local_80,uVar10,1,8,0x18);
        puVar7 = puStack_78;
      }
      puVar12 = puVar7 + uVar10 * 3;
      uVar10 = uVar10 + 1;
      puVar12[1] = uVar17;
      *puVar12 = uVar14;
      *(undefined4 *)(puVar12 + 2) = uVar2;
    }
  }
  if (1 < uVar10) {
    if (uVar10 < 0x15) {
      lVar11 = 0;
      puVar7 = puStack_78 + 3;
      puVar24 = puStack_78;
      do {
        puVar22 = puVar7;
        uVar19 = puVar24[3];
        if (uVar19 < *puVar24) {
          uVar21 = puVar24[5];
          uVar17 = puVar24[4];
          lVar3 = lVar11;
          do {
            lVar25 = lVar3;
            puVar1 = (undefined8 *)((long)puStack_78 + lVar25);
            puVar1[4] = puVar1[1];
            puVar1[3] = *puVar1;
            puVar1[5] = puVar1[2];
            puVar7 = puStack_78;
            if (lVar25 == 0) goto LAB_006e585c;
            lVar3 = lVar25 + -0x18;
          } while (uVar19 < (ulong)puVar1[-3]);
          puVar7 = (ulong *)((long)puStack_78 + lVar25);
LAB_006e585c:
          *puVar7 = uVar19;
          puVar7[2] = uVar21;
          puVar7[1] = uVar17;
        }
        puVar7 = puVar22 + 3;
        lVar11 = lVar11 + 0x18;
        puVar24 = puVar22;
      } while (puVar7 != puStack_78 + uVar10 * 3);
    }
    else {
                    /* try { // try from 006e58d8 to 006e58e7 has its CatchHandler @ 006e58f0 */
      core[188d2c0002da36d0]::slice::sort::unstable::ipnsort::
      <std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[29fbf8137994c300]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
                (puStack_78,uVar10,auStack_68);
    }
  }
LAB_006e5584:
  *param_1 = uVar14;
  param_1[1] = (ulong)puVar12;
  param_1[2] = uVar10;
  param_1[3] = (ulong)param_2;
  param_1[4] = param_3;
  param_1[5] = uVar16;
  param_1[6] = uVar28;
  param_1[7] = (ulong)piVar9;
  param_1[8] = param_3;
  param_1[9] = uVar8;
  param_1[10] = uVar6;
  param_1[0xb] = (ulong)piVar23;
  param_1[0xc] = param_3;
  param_1[0xd] = uVar18;
  param_1[0xe] = uVar20;
  return;
}


// ===== 006e592c  FUN_006e592c =====

undefined1  [16] FUN_006e592c(long param_1,undefined8 param_2,int *param_3,size_t param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  long local_2988;
  char local_2980;
  size_t local_2978;
  undefined1 auStack_2970 [2320];
  undefined8 local_2060;
  undefined8 local_1060;
  
  local_1060 = 0;
  local_2060 = 0;
  puVar2 = *(uint **)(param_1 + 0x28);
  lVar12 = *(long *)(param_1 + 0x30);
  lVar11 = lVar12 << 6;
  if ((lVar12 != 0) && (lVar13 = *(long *)(param_1 + 0x38), lVar13 != 0)) {
    uVar9 = *(ulong *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    lVar15 = lVar11;
    puVar16 = puVar2;
    do {
      if (!CARRY8(uVar9,(ulong)*puVar16)) {
        auVar17 = <&[u8]as_object::read::read_ref::ReadRef>::read_bytes_at_until
                            (lVar13,uVar14,uVar9 + *puVar16,uVar3,0);
        if (((auVar17._0_8_ != (void *)0x0) && (auVar17._8_8_ == param_4)) &&
           (iVar5 = memcmp(auVar17._0_8_,param_3,param_4), iVar5 == 0)) {
          if (puVar16[1] == 8) {
            param_4 = 0;
          }
          else {
            param_4 = *(size_t *)(puVar16 + 8);
            if (param_4 != 0) {
              uVar9 = *(ulong *)(puVar16 + 6);
              piVar6 = (int *)0x0;
              if (((*(ulong *)(param_1 + 0x20) < uVar9) ||
                  (*(ulong *)(param_1 + 0x20) - uVar9 < param_4)) ||
                 (piVar1 = (int *)(*(long *)(param_1 + 0x18) + uVar9), piVar6 = piVar1,
                 (*(byte *)((long)puVar16 + 9) >> 3 & 1) == 0)) goto LAB_006e5a24;
              lVar12 = param_4 - 0x18;
              if ((param_4 < 0x18) || (*piVar1 != 1)) goto LAB_006e5a20;
              auVar17 = FUN_006d5dc0(param_2,*(undefined8 *)(piVar1 + 2));
              param_4 = auVar17._8_8_;
              piVar6 = auVar17._0_8_;
              memset(auStack_2970,0,0x2905);
              miniz_oxide::inflate::core::decompress
                        (&local_2988,auStack_2970,piVar1 + 6,lVar12,piVar6,param_4,0,5);
              if ((local_2978 != param_4 || local_2988 != lVar12) || local_2980 != '\0') {
                piVar6 = (int *)0x0;
              }
              goto LAB_006e5a24;
            }
          }
          piVar6 = (int *)(ulong)((*(byte *)((long)puVar16 + 9) & 8) == 0);
          goto LAB_006e5a24;
        }
      }
      lVar15 = lVar15 + -0x40;
      puVar16 = puVar16 + 0x10;
    } while (lVar15 != 0);
  }
  if (*param_3 == 0x6265642e && *(int *)((long)param_3 + 3) == 0x5f677562) {
    iVar5 = (int)*(char *)((long)param_3 + 7);
    if (iVar5 + 0x40 < 0 != SCARRY4(iVar5,0x40)) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_3,param_4,7,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977af0);
    }
    if ((lVar12 != 0) && (lVar12 = *(long *)(param_1 + 0x38), lVar12 != 0)) {
      uVar9 = *(ulong *)(param_1 + 0x48);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      puVar10 = (ulong *)(puVar2 + 8);
      do {
        if (!CARRY8(uVar9,(ulong)(uint)puVar10[-4])) {
          auVar17 = <&[u8]as_object::read::read_ref::ReadRef>::read_bytes_at_until
                              (lVar12,uVar14,uVar9 + (uint)puVar10[-4],uVar3,0);
          uVar8 = auVar17._8_8_;
          plVar7 = auVar17._0_8_;
          if ((plVar7 != (long *)0x0) && (7 < uVar8)) {
            if ((uVar8 - 1 == param_4) &&
               ((*plVar7 == 0x5f67756265647a2e &&
                (iVar5 = memcmp(plVar7 + 1,(char *)((long)param_3 + 7),uVar8 - 8), iVar5 == 0)))) {
              if ((*(uint *)((long)puVar10 + -0x1c) != 8) && (uVar9 = *puVar10, uVar9 != 0)) {
                uVar8 = puVar10[-1];
                piVar6 = (int *)0x0;
                if ((*(ulong *)(param_1 + 0x20) < uVar8) ||
                   (*(ulong *)(param_1 + 0x20) - uVar8 < uVar9)) goto LAB_006e5a24;
                if (7 < uVar9) {
                  piVar6 = (int *)0x0;
                  plVar7 = (long *)(*(long *)(param_1 + 0x18) + uVar8);
                  if ((*plVar7 == 0x42494c5a) && (3 < uVar9 - 8)) {
                    uVar4 = (*(uint *)(plVar7 + 1) & 0xff00ff00) >> 8 |
                            (*(uint *)(plVar7 + 1) & 0xff00ff) << 8;
                    auVar17 = FUN_006d5dc0(param_2,uVar4 >> 0x10 | uVar4 << 0x10);
                    param_4 = auVar17._8_8_;
                    piVar6 = auVar17._0_8_;
                    iVar5 = FUN_006f6758((long)plVar7 + 0xc,uVar9 - 0xc,piVar6,param_4);
                    if (iVar5 == 0) {
                      piVar6 = (int *)0x0;
                    }
                  }
                  goto LAB_006e5a24;
                }
              }
              break;
            }
          }
        }
        lVar11 = lVar11 + -0x40;
        puVar10 = puVar10 + 8;
      } while (lVar11 != 0);
    }
  }
LAB_006e5a20:
  piVar6 = (int *)0x0;
LAB_006e5a24:
  auVar17._8_8_ = param_4;
  auVar17._0_8_ = piVar6;
  return auVar17;
}


// ===== 006e5c78  FUN_006e5c78 =====

long FUN_006e5c78(long param_1)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  lVar1 = lVar8 + *(long *)(param_1 + 0x30) * 0x40;
  do {
    if (*(int *)(lVar8 + 4) == 7) {
      uVar9 = *(ulong *)(lVar8 + 0x20);
      if (uVar9 == 0) {
        puVar11 = (uint *)0x1;
        uVar10 = *(ulong *)(lVar8 + 0x30);
        if (4 < uVar10) goto LAB_006e5ce0;
LAB_006e5d08:
        lVar5 = 4;
        if (uVar9 < 0xc) goto LAB_006e5c9c;
LAB_006e5d14:
        while (uVar10 = (ulong)*puVar11, uVar10 <= uVar9 - 0xc) {
          uVar6 = lVar5 + 0xb + uVar10 & -lVar5;
          if ((uVar9 < uVar6) || (uVar9 - uVar6 < (ulong)puVar11[1])) break;
          uVar7 = lVar5 + -1 + uVar6 + (ulong)puVar11[1] & -lVar5;
          puVar2 = (uint *)((long)puVar11 + uVar7);
          if (uVar9 < uVar7) {
            puVar2 = (uint *)0x1;
          }
          uVar3 = 0;
          if (uVar9 >= uVar7) {
            uVar3 = uVar9 - uVar7;
          }
          do {
            if (uVar10 == 0) goto LAB_006e5da8;
            lVar4 = uVar10 + 0xb;
            uVar10 = uVar10 - 1;
          } while (*(char *)((long)puVar11 + lVar4) == '\0');
          if (((uVar10 == 2) &&
              ((short)puVar11[3] == 0x4e47 && *(char *)((long)puVar11 + 0xe) == 'U')) &&
             (puVar11[2] == 3)) {
            return (long)puVar11 + uVar6;
          }
LAB_006e5da8:
          if ((uVar9 <= uVar7) || (uVar9 = uVar3, puVar11 = puVar2, uVar3 < 0xc)) break;
        }
      }
      else {
        uVar10 = *(ulong *)(lVar8 + 0x18);
        if ((uVar10 <= *(ulong *)(param_1 + 0x20)) && (uVar9 <= *(ulong *)(param_1 + 0x20) - uVar10)
           ) {
          puVar11 = (uint *)(*(long *)(param_1 + 0x18) + uVar10);
          uVar10 = *(ulong *)(lVar8 + 0x30);
          if (uVar10 < 5) goto LAB_006e5d08;
LAB_006e5ce0:
          if ((uVar10 == 8) && (lVar5 = 8, 0xb < uVar9)) goto LAB_006e5d14;
        }
      }
    }
LAB_006e5c9c:
    lVar8 = lVar8 + 0x40;
    if (lVar8 == lVar1) {
      return 0;
    }
  } while( true );
}


// ===== 006e5de4  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::local_addr */

void __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::local_addr
          (undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  sockaddr local_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined6 uStack_48;
  undefined2 local_42;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  socklen_t local_24;
  
  local_24 = 0x6e;
  uStack_3a = 0;
  uStack_40 = 0;
  local_a0.sa_data[6] = '\0';
  local_a0.sa_data[7] = '\0';
  local_a0.sa_data[8] = '\0';
  local_a0.sa_data[9] = '\0';
  local_a0.sa_data[10] = '\0';
  local_a0.sa_data[0xb] = '\0';
  local_a0.sa_data[0xc] = '\0';
  local_a0.sa_data[0xd] = '\0';
  local_a0.sa_family = 0;
  local_a0.sa_data[0] = '\0';
  local_a0.sa_data[1] = '\0';
  local_a0.sa_data[2] = '\0';
  local_a0.sa_data[3] = '\0';
  local_a0.sa_data[4] = '\0';
  local_a0.sa_data[5] = '\0';
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_42 = 0;
  uStack_50 = 0;
  iVar1 = getsockname(*param_2,&local_a0,&local_24);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    ppuVar3 = (undefined **)((long)iVar1 << 0x20 | 2);
LAB_006e5e7c:
    *(undefined ***)(param_1 + 2) = ppuVar3;
    *param_1 = 1;
    return;
  }
  if (local_24 == 0) {
    local_24 = 2;
  }
  else if (local_a0.sa_family != 1) {
    ppuVar3 = &PTR_DAT_009774f8;
    goto LAB_006e5e7c;
  }
  puVar4 = (undefined8 *)((ulong)&local_a0 | 2);
  *(sa_family_t *)(param_1 + 2) = local_a0.sa_family;
  uVar6 = puVar4[7];
  uVar5 = puVar4[6];
  uVar8 = puVar4[9];
  uVar7 = puVar4[8];
  *param_1 = 0;
  param_1[1] = local_24;
  *(undefined8 *)((long)param_1 + 0x42) = uVar6;
  *(undefined8 *)((long)param_1 + 0x3a) = uVar5;
  uVar6 = puVar4[0xb];
  uVar5 = puVar4[10];
  *(undefined8 *)((long)param_1 + 0x52) = uVar8;
  *(undefined8 *)((long)param_1 + 0x4a) = uVar7;
  uVar8 = *(undefined8 *)((long)puVar4 + 100);
  uVar7 = *(undefined8 *)((long)puVar4 + 0x5c);
  *(undefined8 *)((long)param_1 + 0x62) = uVar6;
  *(undefined8 *)((long)param_1 + 0x5a) = uVar5;
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  *(undefined8 *)((long)param_1 + 0x6e) = uVar8;
  *(undefined8 *)((long)param_1 + 0x66) = uVar7;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  uVar10 = puVar4[5];
  uVar9 = puVar4[4];
  *(undefined8 *)((long)param_1 + 0x12) = uVar6;
  *(undefined8 *)((long)param_1 + 10) = uVar5;
  *(undefined8 *)((long)param_1 + 0x22) = uVar8;
  *(undefined8 *)((long)param_1 + 0x1a) = uVar7;
  *(undefined8 *)((long)param_1 + 0x32) = uVar10;
  *(undefined8 *)((long)param_1 + 0x2a) = uVar9;
  return;
}


// ===== 006e5ef8  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::connect_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::connect_addr */

int * __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::connect_addr
          (undefined4 *param_1,socklen_t *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = socket(1,0x80001,0);
  if (iVar2 == -1) {
    piVar4 = (int *)__errno();
    iVar2 = *piVar4;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      piVar4 = (int *)core::io::error::os_functions::set_functions::set_functions_inner
                                (&PTR_FUN_00977078);
    }
    *param_1 = 1;
    *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
    return piVar4;
  }
  uVar3 = connect(iVar2,(sockaddr *)(param_2 + 1),*param_2);
  if (uVar3 != 0xffffffff) {
    *param_1 = 0;
    param_1[1] = iVar2;
    return (int *)(ulong)uVar3;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006e5ffc to 006e6007 has its CatchHandler @ 006e600c */
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  uVar3 = close(iVar2);
  return (int *)(ulong)uVar3;
}


// ===== 006e6020  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::read_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::read_timeout */

void __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::read_timeout
          (undefined8 param_1,undefined4 *param_2)

{
  FUN_006d7d5c(param_1,*param_2,0x14);
  return;
}


