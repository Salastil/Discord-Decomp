// ===== 009b3248  thunk_FUN_0097b334 =====

void thunk_FUN_0097b334(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iStack_50;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x68);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_50 = (int)uVar3;
    if (iStack_50 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x60);
    if (*param_2 != 2) {
      FUN_00973cb8(param_2);
    }
    param_2[4] = lVar2;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
  }
  return;
}


// ===== 009b324c  thunk_FUN_0097b334 =====

void thunk_FUN_0097b334(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iStack_50;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x68);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_50 = (int)uVar3;
    if (iStack_50 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x60);
    if (*param_2 != 2) {
      FUN_00973cb8(param_2);
    }
    param_2[4] = lVar2;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
  }
  return;
}


// ===== 009b3250  FUN_009b3250 =====

void FUN_009b3250(ulong *param_1)

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
  FUN_009741b0();
  return;
}


// ===== 009b32a0  FUN_009b32a0 =====

void FUN_009b32a0(ulong *param_1)

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
  FUN_009742f8();
  return;
}


// ===== 009b32f0  FUN_009b32f0 =====

void FUN_009b32f0(ulong *param_1)

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
  FUN_00974418();
  return;
}


// ===== 009b3340  FUN_009b3340 =====

void FUN_009b3340(ulong *param_1)

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
  FUN_00974568();
  return;
}


// ===== 009b3390  FUN_009b3390 =====

void FUN_009b3390(ulong *param_1)

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
  FUN_009746fc();
  return;
}


// ===== 009b33e0  FUN_009b33e0 =====

void FUN_009b33e0(ulong *param_1)

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
  FUN_009746fc();
  return;
}


// ===== 009b3430  FUN_009b3430 =====

void FUN_009b3430(ulong *param_1)

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
  FUN_00974890();
  return;
}


// ===== 009b3480  FUN_009b3480 =====

void FUN_009b3480(ulong *param_1)

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
  FUN_00974418();
  return;
}


// ===== 009b34d0  FUN_009b34d0 =====

void FUN_009b34d0(ulong *param_1)

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
  FUN_00974418();
  return;
}


// ===== 009b3520  FUN_009b3520 =====

void FUN_009b3520(ulong *param_1)

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
  FUN_00974418();
  return;
}


// ===== 009b3570  FUN_009b3570 =====

void FUN_009b3570(ulong *param_1)

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
  FUN_00974418();
  return;
}


// ===== 009b35c0  FUN_009b35c0 =====

void FUN_009b35c0(ulong *param_1)

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
  FUN_00974a04();
  return;
}


// ===== 009b3610  FUN_009b3610 =====

void FUN_009b3610(ulong *param_1)

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
  FUN_00974a04();
  return;
}


// ===== 009b3660  thunk_FUN_009753a8 =====

void thunk_FUN_009753a8(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009b963c(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_009741b0(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3664  thunk_FUN_00975d24 =====

void thunk_FUN_00975d24(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_50 [8];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_50[0] = 2;
          FUN_009b99f8(param_1 + 4,auStack_50);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0xd] != 0) {
            (**(code **)(param_1[0xd] + 0x18))(param_1[0xe]);
          }
          param_1[0xd] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_009742f8(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3668  thunk_FUN_00976618 =====

void thunk_FUN_00976618(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974418(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b366c  thunk_FUN_00976f54 =====

void thunk_FUN_00976f54(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009ba1f0(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974568(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3670  thunk_FUN_00977890 =====

void thunk_FUN_00977890(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009ba5f8(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_009746fc(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3674  thunk_FUN_009780cc =====

void thunk_FUN_009780cc(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009ba5f8(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_009746fc(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3678  thunk_FUN_00978a08 =====

void thunk_FUN_00978a08(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009bacac(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974890(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b367c  thunk_FUN_00979244 =====

void thunk_FUN_00979244(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974418(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3680  thunk_FUN_00979a80 =====

void thunk_FUN_00979a80(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974418(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3684  thunk_FUN_0097a2bc =====

void thunk_FUN_0097a2bc(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974418(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3688  thunk_FUN_0097aaf8 =====

void thunk_FUN_0097aaf8(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_70 [16];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_70[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974418(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b368c  thunk_FUN_0097b40c =====

void thunk_FUN_0097b40c(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_60 [12];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_60[0] = 2;
          FUN_009bba4c(param_1 + 4,auStack_60);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0xf] != 0) {
            (**(code **)(param_1[0xf] + 0x18))(param_1[0x10]);
          }
          param_1[0xf] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974a04(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3690  thunk_FUN_0097bc28 =====

void thunk_FUN_0097bc28(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 auStack_60 [12];
  
  uVar4 = (uint)*param_1;
  uVar5 = *param_1;
  do {
    if ((uVar4 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar5 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((uint)uVar5 >> 1 & 1) != 0) {
          auStack_60[0] = 2;
          FUN_009bba4c(param_1 + 4,auStack_60);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0xf] != 0) {
            (**(code **)(param_1[0xf] + 0x18))(param_1[0x10]);
          }
          param_1[0xf] = 0;
        }
        do {
          uVar5 = *param_1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar5 - 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = uVar5 >> 6;
        if (uVar5 != 1) {
          if (uVar5 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        FUN_00974a04(param_1);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar5 = uVar6;
  } while( true );
}


// ===== 009b3694  thunk_FUN_00975518 =====

void thunk_FUN_00975518(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_0097578c;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_00975634;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009b963c(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_00975664;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009b9390(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == -1) {
          uVar3 = *param_1;
          goto joined_r0x009756b8;
        }
        if (lVar5 == -2) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = -1;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009b963c(param_1 + 4,&uStack_70);
        goto LAB_0097568c;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x009756b8:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_0097578c;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_00975754:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_0097578c:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009b963c(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_00975664:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 0xffffffffffffffff;
        uStack_b0._0_4_ = 1;
        FUN_009b963c(param_1 + 4,&uStack_b0);
LAB_0097568c:
        FUN_00975870(param_1);
        return;
      }
LAB_00975634:
      FUN_009741b0(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00975754;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x009756b8;
}


// ===== 009b3698  thunk_FUN_00975e94 =====

void thunk_FUN_00975e94(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined *puStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar5 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_009760dc;
      uVar5 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar5 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar6 = *param_1, uVar6 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_0097600c;
        }
        if (uVar4 != 0) {
          uStack_50 = CONCAT44(uStack_50._4_4_,2);
          FUN_009b99f8(param_1 + 4,&uStack_50);
          uStack_58 = extraout_x1;
          goto LAB_0097603c;
        }
        puStack_a0 = PTR_WAKER_VTABLE_00b00d40;
        uStack_80 = 0;
        puStack_98 = param_1;
        puStack_90 = (undefined1 *)&puStack_a0;
        puStack_88 = (undefined1 *)&puStack_a0;
        uVar3 = FUN_009b9798(param_1 + 4,&puStack_90);
        if ((uVar3 & 1) != 0) {
          uVar3 = *param_1;
          goto joined_r0x00975f68;
        }
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = CONCAT44(uStack_50._4_4_,1);
        uStack_38 = uVar3 & 0xffffffff;
        FUN_009b99f8(param_1 + 4,&uStack_50);
        goto LAB_00976088;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar3 = uVar6;
  } while( true );
joined_r0x00975f68:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_009760dc;
      uVar5 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar5) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar5 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar7 = (ulong *)&uStack_70;
    uStack_50 = 1;
  }
  else {
    uVar5 = 0;
    puVar7 = &uStack_50;
    uVar4 = 3;
  }
  *puVar7 = uVar5;
  if (uStack_50 != 1) {
LAB_009760a4:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_009760dc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_50 = CONCAT44(uStack_50._4_4_,2);
        FUN_009b99f8(param_1 + 4,&uStack_50);
        uStack_58 = extraout_x1_00;
LAB_0097603c:
        uStack_68 = param_1[6];
        uStack_60 = 0;
        uStack_70 = 1;
        FUN_009b99f8(param_1 + 4,&uStack_70);
LAB_00976088:
        FUN_009761b4(param_1);
        return;
      }
LAB_0097600c:
      FUN_009742f8(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_6c,uStack_70);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_009760a4;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00975f68;
}


// ===== 009b369c  thunk_FUN_00976788 =====

void thunk_FUN_00976788(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_009769fc;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_009768a4;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009b9de8(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_009768d4;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009b9b3c(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == 2) {
          uVar3 = *param_1;
          goto joined_r0x00976928;
        }
        if (lVar5 == -1) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = 2;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&uStack_70);
        goto LAB_009768fc;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x00976928:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_009769fc;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_009769c4:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_009769fc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009b9de8(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_009768d4:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 2;
        uStack_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&uStack_b0);
LAB_009768fc:
        FUN_00976ae0(param_1);
        return;
      }
LAB_009768a4:
      FUN_00974418(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_009769c4;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00976928;
}


// ===== 009b36a0  thunk_FUN_009770c4 =====

void thunk_FUN_009770c4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_00977338;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_009771e0;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009ba1f0(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_00977210;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009b9f44(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == -1) {
          uVar3 = *param_1;
          goto joined_r0x00977264;
        }
        if (lVar5 == -2) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = -1;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009ba1f0(param_1 + 4,&uStack_70);
        goto LAB_00977238;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x00977264:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_00977338;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_00977300:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_00977338:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009ba1f0(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_00977210:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 0xffffffffffffffff;
        uStack_b0._0_4_ = 1;
        FUN_009ba1f0(param_1 + 4,&uStack_b0);
LAB_00977238:
        FUN_0097741c(param_1);
        return;
      }
LAB_009771e0:
      FUN_00974568(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00977300;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00977264;
}


// ===== 009b36a4  thunk_FUN_00977a00 =====

void thunk_FUN_00977a00(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_00977c74;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_00977b1c;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009ba5f8(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_00977b4c;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009ba34c(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == -1) {
          uVar3 = *param_1;
          goto joined_r0x00977ba0;
        }
        if (lVar5 == -2) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = -1;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009ba5f8(param_1 + 4,&uStack_70);
        goto LAB_00977b74;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x00977ba0:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_00977c74;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_00977c3c:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_00977c74:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009ba5f8(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_00977b4c:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 0xffffffffffffffff;
        uStack_b0._0_4_ = 1;
        FUN_009ba5f8(param_1 + 4,&uStack_b0);
LAB_00977b74:
        FUN_00977d58(param_1);
        return;
      }
LAB_00977b1c:
      FUN_009746fc(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00977c3c;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00977ba0;
}


// ===== 009b36a8  thunk_FUN_0097823c =====

void thunk_FUN_0097823c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_009784b0;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_00978358;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009ba5f8(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_00978388;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009ba754(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == -1) {
          uVar3 = *param_1;
          goto joined_r0x009783dc;
        }
        if (lVar5 == -2) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = -1;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009ba5f8(param_1 + 4,&uStack_70);
        goto LAB_009783b0;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x009783dc:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_009784b0;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_00978478:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_009784b0:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009ba5f8(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_00978388:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 0xffffffffffffffff;
        uStack_b0._0_4_ = 1;
        FUN_009ba5f8(param_1 + 4,&uStack_b0);
LAB_009783b0:
        FUN_00978594(param_1);
        return;
      }
LAB_00978358:
      FUN_009746fc(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00978478;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x009783dc;
}


// ===== 009b36ac  thunk_FUN_00978b78 =====

void thunk_FUN_00978b78(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_00978dec;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_00978c94;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009bacac(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_00978cc4;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009baa00(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == -1) {
          uVar3 = *param_1;
          goto joined_r0x00978d18;
        }
        if (lVar5 == -2) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = -1;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009bacac(param_1 + 4,&uStack_70);
        goto LAB_00978cec;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x00978d18:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_00978dec;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_00978db4:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_00978dec:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009bacac(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_00978cc4:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 0xffffffffffffffff;
        uStack_b0._0_4_ = 1;
        FUN_009bacac(param_1 + 4,&uStack_b0);
LAB_00978cec:
        FUN_00978ed0(param_1);
        return;
      }
LAB_00978c94:
      FUN_00974890(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00978db4;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00978d18;
}


// ===== 009b36b0  thunk_FUN_009793b4 =====

void thunk_FUN_009793b4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_00979628;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_009794d0;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009b9de8(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_00979500;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009bae08(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == 2) {
          uVar3 = *param_1;
          goto joined_r0x00979554;
        }
        if (lVar5 == -1) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = 2;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&uStack_70);
        goto LAB_00979528;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x00979554:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_00979628;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_009795f0:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_00979628:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009b9de8(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_00979500:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 2;
        uStack_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&uStack_b0);
LAB_00979528:
        FUN_0097970c(param_1);
        return;
      }
LAB_009794d0:
      FUN_00974418(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_009795f0;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00979554;
}


// ===== 009b36b4  thunk_FUN_00979bf0 =====

void thunk_FUN_00979bf0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_00979e64;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_00979d0c;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009b9de8(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_00979d3c;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009bb0b4(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == 2) {
          uVar3 = *param_1;
          goto joined_r0x00979d90;
        }
        if (lVar5 == -1) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = 2;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&uStack_70);
        goto LAB_00979d64;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x00979d90:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_00979e64;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_00979e2c:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_00979e64:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009b9de8(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_00979d3c:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 2;
        uStack_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&uStack_b0);
LAB_00979d64:
        FUN_00979f48(param_1);
        return;
      }
LAB_00979d0c:
      FUN_00974418(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00979e2c;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00979d90;
}


// ===== 009b36b8  thunk_FUN_0097a42c =====

void thunk_FUN_0097a42c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_0097a6a0;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_0097a548;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009b9de8(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_0097a578;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009bb360(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == 2) {
          uVar3 = *param_1;
          goto joined_r0x0097a5cc;
        }
        if (lVar5 == -1) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = 2;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&uStack_70);
        goto LAB_0097a5a0;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x0097a5cc:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_0097a6a0;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_0097a668:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_0097a6a0:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009b9de8(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_0097a578:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 2;
        uStack_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&uStack_b0);
LAB_0097a5a0:
        FUN_0097a784(param_1);
        return;
      }
LAB_0097a548:
      FUN_00974418(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0097a668;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x0097a5cc;
}


// ===== 009b36bc  thunk_FUN_0097ac68 =====

void thunk_FUN_0097ac68(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar6 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_0097aedc;
      uVar6 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar6 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar7 = *param_1, uVar7 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_0097ad84;
        }
        if (uVar4 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,2);
          FUN_009b9de8(param_1 + 4,&uStack_70);
          uStack_90 = extraout_x1;
          goto LAB_0097adb4;
        }
        uStack_c0 = 0;
        puStack_100 = PTR_WAKER_VTABLE_00b00d40;
        puStack_f8 = param_1;
        puStack_d0 = (undefined1 *)&puStack_100;
        puStack_c8 = (undefined1 *)&puStack_100;
        FUN_009bb60c(&uStack_b0,param_1 + 4,&puStack_d0);
        lVar5 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
        uStack_e8 = uStack_80;
        uStack_f0 = uStack_88;
        if (lVar5 == 2) {
          uVar3 = *param_1;
          goto joined_r0x0097ae08;
        }
        if (lVar5 == -1) {
          uStack_48 = 0;
          uStack_60 = param_1[6];
          lVar5 = 2;
        }
        else {
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_60 = uStack_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = uStack_e0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        lStack_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&uStack_70);
        goto LAB_0097addc;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar7;
    uVar3 = uVar7;
  } while( true );
joined_r0x0097ae08:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_0097aedc;
      uVar6 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar6) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar8 = &uStack_b0;
    uStack_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &uStack_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (uStack_70 != 1) {
LAB_0097aea4:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_0097aedc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        FUN_009b9de8(param_1 + 4,&uStack_70);
        uStack_90 = extraout_x1_00;
LAB_0097adb4:
        uStack_a0 = param_1[6];
        uStack_98 = 0;
        uStack_a8 = 2;
        uStack_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&uStack_b0);
LAB_0097addc:
        FUN_0097afc0(param_1);
        return;
      }
LAB_0097ad84:
      FUN_00974418(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0097aea4;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x0097ae08;
}


// ===== 009b36c0  thunk_FUN_0097b57c =====

void thunk_FUN_0097b57c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined *puStack_c0;
  ulong *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar5 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_0097b7d4;
      uVar5 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar5 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar6 = *param_1, uVar6 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_0097b704;
        }
        if (uVar4 != 0) {
          uStack_60 = CONCAT44(uStack_60._4_4_,2);
          FUN_009bba4c(param_1 + 4,&uStack_60);
          uStack_70 = extraout_x1;
          goto LAB_0097b734;
        }
        uStack_a0 = 0;
        puStack_c0 = PTR_WAKER_VTABLE_00b00d40;
        puStack_b8 = param_1;
        puStack_b0 = (undefined1 *)&puStack_c0;
        puStack_a8 = (undefined1 *)&puStack_c0;
        FUN_009bb8b8(&uStack_90,param_1 + 4,&puStack_b0);
        if (CONCAT44(uStack_90._4_4_,(undefined4)uStack_90) == 0) {
          uStack_58 = 0;
          uStack_50 = uStack_88;
          uStack_38 = uStack_70;
        }
        else {
          if (CONCAT44(uStack_90._4_4_,(undefined4)uStack_90) != 2) {
            uVar3 = *param_1;
            goto joined_r0x0097b660;
          }
          uStack_58 = 1;
          uStack_50 = param_1[6];
          uStack_38 = 0;
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,1);
        FUN_009bba4c(param_1 + 4,&uStack_60);
        goto LAB_0097b780;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar3 = uVar6;
  } while( true );
joined_r0x0097b660:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_0097b7d4;
      uVar5 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar5) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar5 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar7 = &uStack_90;
    uStack_60 = 1;
  }
  else {
    uVar5 = 0;
    puVar7 = &uStack_60;
    uVar4 = 3;
  }
  *puVar7 = uVar5;
  if (uStack_60 != 1) {
LAB_0097b79c:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_0097b7d4:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_60 = CONCAT44(uStack_60._4_4_,2);
        FUN_009bba4c(param_1 + 4,&uStack_60);
        uStack_70 = extraout_x1_00;
LAB_0097b734:
        uStack_80 = param_1[6];
        uStack_78 = 0;
        uStack_90._0_4_ = 1;
        uStack_88 = 1;
        FUN_009bba4c(param_1 + 4,&uStack_90);
LAB_0097b780:
        FUN_0097b8b8(param_1);
        return;
      }
LAB_0097b704:
      FUN_00974a04(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0097b79c;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x0097b660;
}


// ===== 009b36c4  thunk_FUN_0097bd98 =====

void thunk_FUN_0097bd98(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined *puStack_c0;
  ulong *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_38;
  
  uVar4 = (uint)*param_1;
  uVar3 = *param_1;
  do {
    if ((uVar4 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: next.is_notified()",0x24,
                 &PTR_s__root__cargo_registry_src_index__00af3e20);
    }
    if ((uVar3 & 3) == 0) {
      uVar4 = (uint)uVar3 >> 5 & 1;
      uVar5 = uVar3 & 0xfffffffffffffff8 | 1;
    }
    else {
      if (uVar3 < 0x40) goto LAB_0097bff0;
      uVar5 = uVar3 - 0x40;
      uVar4 = 2;
      if (uVar5 < 0x40) {
        uVar4 = 3;
      }
    }
    while (uVar6 = *param_1, uVar6 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (1 < uVar4) {
          if (uVar4 == 2) {
            return;
          }
          goto LAB_0097bf20;
        }
        if (uVar4 != 0) {
          uStack_60 = CONCAT44(uStack_60._4_4_,2);
          FUN_009bba4c(param_1 + 4,&uStack_60);
          uStack_70 = extraout_x1;
          goto LAB_0097bf50;
        }
        uStack_a0 = 0;
        puStack_c0 = PTR_WAKER_VTABLE_00b00d40;
        puStack_b8 = param_1;
        puStack_b0 = (undefined1 *)&puStack_c0;
        puStack_a8 = (undefined1 *)&puStack_c0;
        FUN_009bbbd8(&uStack_90,param_1 + 4,&puStack_b0);
        if (CONCAT44(uStack_90._4_4_,(undefined4)uStack_90) == 0) {
          uStack_58 = 0;
          uStack_50 = uStack_88;
          uStack_38 = uStack_70;
        }
        else {
          if (CONCAT44(uStack_90._4_4_,(undefined4)uStack_90) != 2) {
            uVar3 = *param_1;
            goto joined_r0x0097be7c;
          }
          uStack_58 = 1;
          uStack_50 = param_1[6];
          uStack_38 = 0;
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,1);
        FUN_009bba4c(param_1 + 4,&uStack_60);
        goto LAB_0097bf9c;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar3 = uVar6;
  } while( true );
joined_r0x0097be7c:
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: curr.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e08);
  }
  if (((uint)uVar3 >> 5 & 1) == 0) {
    if (((uint)uVar3 >> 2 & 1) == 0) {
      if (uVar3 < 0x40) goto LAB_0097bff0;
      uVar5 = (uVar3 & 0xffffffffffffffde) - 0x40;
      uVar4 = 2;
      if (0x3f < uVar5) {
        uVar4 = 0;
      }
    }
    else {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar5 = (uVar3 & 0xffffffffffffffde) + 0x40;
      uVar4 = 1;
    }
    puVar7 = &uStack_90;
    uStack_60 = 1;
  }
  else {
    uVar5 = 0;
    puVar7 = &uStack_60;
    uVar4 = 3;
  }
  *puVar7 = uVar5;
  if (uStack_60 != 1) {
LAB_0097bfb8:
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        FUN_009b2410(param_1 + 4,param_1);
LAB_0097bff0:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
    }
    else {
      if (uVar4 != 2) {
        uStack_60 = CONCAT44(uStack_60._4_4_,2);
        FUN_009bba4c(param_1 + 4,&uStack_60);
        uStack_70 = extraout_x1_00;
LAB_0097bf50:
        uStack_80 = param_1[6];
        uStack_78 = 0;
        uStack_90._0_4_ = 1;
        uStack_88 = 1;
        FUN_009bba4c(param_1 + 4,&uStack_90);
LAB_0097bf9c:
        FUN_0097c0d4(param_1);
        return;
      }
LAB_0097bf20:
      FUN_00974a04(param_1);
    }
    return;
  }
  while (*param_1 == uVar3) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0097bfb8;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x0097be7c;
}


// ===== 009b36c8  FUN_009b36c8 =====

void FUN_009b36c8(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
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
                    /* try { // try from 009b36f8 to 009b36fb has its CatchHandler @ 009b379c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
    FUN_009b2690((long)param_1 + 0x40);
  }
  else if (*(int *)((long)param_1 + 0x38) == 0) {
    if (*(long *)((long)param_1 + 0x40) != -1) {
                    /* try { // try from 009b371c to 009b372b has its CatchHandler @ 009b37b0 */
      FUN_009b2d60();
    }
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 009b373c to 009b373f has its CatchHandler @ 009b37c4 */
    (**(code **)(*(long *)((long)param_1 + 0x88) + 0x18))(*(undefined8 *)((long)param_1 + 0x90));
  }
  plVar3 = *(long **)((long)param_1 + 0x98);
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
                    /* try { // try from 009b3764 to 009b3767 has its CatchHandler @ 009b3780 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009b3810  FUN_009b3810 =====

void FUN_009b3810(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
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
                    /* try { // try from 009b3840 to 009b3843 has its CatchHandler @ 009b38bc */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
                    /* try { // try from 009b3844 to 009b384b has its CatchHandler @ 009b3908 */
  FUN_009b2a68((long)param_1 + 0x38);
  if (*(long *)((long)param_1 + 0x68) != 0) {
                    /* try { // try from 009b385c to 009b385f has its CatchHandler @ 009b38d0 */
    (**(code **)(*(long *)((long)param_1 + 0x68) + 0x18))(*(undefined8 *)((long)param_1 + 0x70));
  }
  plVar3 = *(long **)((long)param_1 + 0x78);
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
                    /* try { // try from 009b3884 to 009b3887 has its CatchHandler @ 009b38a0 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009b3930  FUN_009b3930 =====

void FUN_009b3930(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
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
                    /* try { // try from 009b3960 to 009b3963 has its CatchHandler @ 009b3a0c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
                    /* try { // try from 009b3994 to 009b399b has its CatchHandler @ 009b3a20 */
    FUN_009b2598((long)param_1 + 0x40);
  }
  else if (((*(int *)((long)param_1 + 0x38) == 0) && (*(long *)((long)param_1 + 0x40) != -1)) &&
          (*(long *)((long)param_1 + 0x40) != 0)) {
    free(*(void **)((long)param_1 + 0x48));
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 009b39ac to 009b39af has its CatchHandler @ 009b3a34 */
    (**(code **)(*(long *)((long)param_1 + 0x88) + 0x18))(*(undefined8 *)((long)param_1 + 0x90));
  }
  plVar3 = *(long **)((long)param_1 + 0x98);
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
                    /* try { // try from 009b39d4 to 009b39d7 has its CatchHandler @ 009b39f0 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009b3a80  FUN_009b3a80 =====

void FUN_009b3a80(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
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
                    /* try { // try from 009b3ab0 to 009b3ab3 has its CatchHandler @ 009b3ba0 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
                    /* try { // try from 009b3b0c to 009b3b13 has its CatchHandler @ 009b3bb4 */
    FUN_009b2820((long)param_1 + 0x40);
  }
  else if ((*(int *)((long)param_1 + 0x38) == 0) && (*(long *)((long)param_1 + 0x40) != -1)) {
    plVar3 = *(long **)((long)param_1 + 0x70);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009b3af0 to 009b3af3 has its CatchHandler @ 009b3b68 */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
    if (*(long *)((long)param_1 + 0x50) != 0) {
      free(*(void **)((long)param_1 + 0x58));
    }
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 009b3b24 to 009b3b27 has its CatchHandler @ 009b3bc8 */
    (**(code **)(*(long *)((long)param_1 + 0x88) + 0x18))(*(undefined8 *)((long)param_1 + 0x90));
  }
  plVar3 = *(long **)((long)param_1 + 0x98);
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
                    /* try { // try from 009b3b4c to 009b3b4f has its CatchHandler @ 009b3b84 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009b3c14  FUN_009b3c14 =====

void FUN_009b3c14(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
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
                    /* try { // try from 009b3c44 to 009b3c47 has its CatchHandler @ 009b3d34 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
                    /* try { // try from 009b3ca0 to 009b3ca7 has its CatchHandler @ 009b3d48 */
    FUN_009b2820((long)param_1 + 0x40);
  }
  else if ((*(int *)((long)param_1 + 0x38) == 0) && (*(long *)((long)param_1 + 0x40) != -2)) {
    plVar3 = *(long **)((long)param_1 + 0x70);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009b3c84 to 009b3c87 has its CatchHandler @ 009b3cfc */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
    if (*(long *)((long)param_1 + 0x50) != 0) {
      free(*(void **)((long)param_1 + 0x58));
    }
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 009b3cb8 to 009b3cbb has its CatchHandler @ 009b3d5c */
    (**(code **)(*(long *)((long)param_1 + 0x88) + 0x18))(*(undefined8 *)((long)param_1 + 0x90));
  }
  plVar3 = *(long **)((long)param_1 + 0x98);
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
                    /* try { // try from 009b3ce0 to 009b3ce3 has its CatchHandler @ 009b3d18 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009b3da8  FUN_009b3da8 =====

void FUN_009b3da8(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
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
                    /* try { // try from 009b3dd8 to 009b3ddb has its CatchHandler @ 009b3ea8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
    FUN_009b2820((long)param_1 + 0x40);
  }
  else if ((*(int *)((long)param_1 + 0x38) == 0) && (*(long *)((long)param_1 + 0x40) != -1)) {
    if (*(long *)((long)param_1 + 0x40) != 0) {
      free(*(void **)((long)param_1 + 0x48));
    }
    plVar3 = *(long **)((long)param_1 + 0x60);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009b3e28 to 009b3e37 has its CatchHandler @ 009b3ebc */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 009b3e48 to 009b3e4b has its CatchHandler @ 009b3ed0 */
    (**(code **)(*(long *)((long)param_1 + 0x88) + 0x18))(*(undefined8 *)((long)param_1 + 0x90));
  }
  plVar3 = *(long **)((long)param_1 + 0x98);
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
                    /* try { // try from 009b3e70 to 009b3e73 has its CatchHandler @ 009b3e8c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009b3f1c  FUN_009b3f1c =====

void FUN_009b3f1c(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
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
                    /* try { // try from 009b3f4c to 009b3f4f has its CatchHandler @ 009b3ff8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
                    /* try { // try from 009b3f80 to 009b3f87 has its CatchHandler @ 009b400c */
    FUN_009b24b0((long)param_1 + 0x40);
  }
  else if (((*(int *)((long)param_1 + 0x38) == 0) && (*(long *)((long)param_1 + 0x40) != -1)) &&
          (*(long *)((long)param_1 + 0x40) != 0)) {
    free(*(void **)((long)param_1 + 0x48));
  }
  if (*(long *)((long)param_1 + 0x78) != 0) {
                    /* try { // try from 009b3f98 to 009b3f9b has its CatchHandler @ 009b4020 */
    (**(code **)(*(long *)((long)param_1 + 0x78) + 0x18))(*(undefined8 *)((long)param_1 + 0x80));
  }
  plVar3 = *(long **)((long)param_1 + 0x88);
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
                    /* try { // try from 009b3fc0 to 009b3fc3 has its CatchHandler @ 009b3fdc */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009b406c  FUN_009b406c =====

void FUN_009b406c(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 extraout_x1;
  ulong uVar4;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_70 [16];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  puVar3 = (ulong *)<tokio::runtime::blocking::schedule::BlockingSchedule_as_tokio::runtime::task::Schedule>
                    ::schedule(param_1 + *(long *)(*(long *)(param_1 + 0x10) + 0x40),param_1);
  pcStack_28 = thunk_FUN_00975adc;
  uVar4 = *puVar3;
  do {
    while (*puVar3 == uVar4) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *puVar3 = uVar4 | (uVar4 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar4 & 3) == 0) {
          auStack_70[0] = 2;
          puStack_30 = &stack0xfffffffffffffff0;
          FUN_009b963c(puVar3 + 4,auStack_70);
          uStack_a0 = puVar3[6];
          uStack_98 = 0;
          uStack_a8 = 0xffffffffffffffff;
          auStack_b0[0] = 1;
          uStack_90 = extraout_x1;
          FUN_009b963c(puVar3 + 4,auStack_b0);
          FUN_00975870(puVar3);
          return;
        }
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
          puStack_30 = &stack0xfffffffffffffff0;
          FUN_009741b0();
          return;
        }
        if (uVar4 == 0) {
          puStack_30 = &stack0xfffffffffffffff0;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar3;
  } while( true );
}


// ===== 009b4088  thunk_FUN_00975adc =====

void thunk_FUN_00975adc(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009b963c(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 0xffffffffffffffff;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b963c(param_1 + 4,auStack_a0);
          FUN_00975870(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_009741b0();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b408c  thunk_FUN_00976420 =====

void thunk_FUN_00976420(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_60 [2];
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [8];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_40[0] = 2;
          FUN_009b99f8(param_1 + 4,auStack_40);
          uStack_58 = param_1[6];
          uStack_50 = 0;
          auStack_60[0] = 1;
          uStack_48 = extraout_x1;
          FUN_009b99f8(param_1 + 4,auStack_60);
          FUN_009761b4(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_009742f8();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b4090  thunk_FUN_00976d4c =====

void thunk_FUN_00976d4c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 2;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,auStack_a0);
          FUN_00976ae0(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974418();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b4094  thunk_FUN_00977688 =====

void thunk_FUN_00977688(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009ba1f0(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 0xffffffffffffffff;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009ba1f0(param_1 + 4,auStack_a0);
          FUN_0097741c(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974568();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b4098  thunk_FUN_00977fc4 =====

void thunk_FUN_00977fc4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009ba5f8(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 0xffffffffffffffff;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009ba5f8(param_1 + 4,auStack_a0);
          FUN_00977d58(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_009746fc();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b409c  thunk_FUN_00978800 =====

void thunk_FUN_00978800(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009ba5f8(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 0xffffffffffffffff;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009ba5f8(param_1 + 4,auStack_a0);
          FUN_00978594(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_009746fc();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b40a0  thunk_FUN_0097913c =====

void thunk_FUN_0097913c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009bacac(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 0xffffffffffffffff;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009bacac(param_1 + 4,auStack_a0);
          FUN_00978ed0(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974890();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b40a4  thunk_FUN_00979978 =====

void thunk_FUN_00979978(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 2;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,auStack_a0);
          FUN_0097970c(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974418();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b40a8  thunk_FUN_0097a1b4 =====

void thunk_FUN_0097a1b4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 2;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,auStack_a0);
          FUN_00979f48(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974418();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b40ac  thunk_FUN_0097a9f0 =====

void thunk_FUN_0097a9f0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 2;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,auStack_a0);
          FUN_0097a784(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974418();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b40b0  thunk_FUN_0097b22c =====

void thunk_FUN_0097b22c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_60 [16];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_60[0] = 2;
          FUN_009b9de8(param_1 + 4,auStack_60);
          uStack_90 = param_1[6];
          uStack_88 = 0;
          uStack_98 = 2;
          auStack_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,auStack_a0);
          FUN_0097afc0(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974418();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b40b4  thunk_FUN_0097bb24 =====

void thunk_FUN_0097bb24(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 auStack_50 [12];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_50[0] = 2;
          FUN_009bba4c(param_1 + 4,auStack_50);
          uStack_70 = param_1[6];
          uStack_68 = 0;
          auStack_80[0] = 1;
          uStack_78 = 1;
          uStack_60 = extraout_x1;
          FUN_009bba4c(param_1 + 4,auStack_80);
          FUN_0097b8b8(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974a04();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b40b8  thunk_FUN_0097c340 =====

void thunk_FUN_0097c340(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 auStack_50 [12];
  
  uVar3 = *param_1;
  do {
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 | (uVar3 & 3) == 0 | 0x20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if ((uVar3 & 3) == 0) {
          auStack_50[0] = 2;
          FUN_009bba4c(param_1 + 4,auStack_50);
          uStack_70 = param_1[6];
          uStack_68 = 0;
          auStack_80[0] = 1;
          uStack_78 = 1;
          uStack_60 = extraout_x1;
          FUN_009bba4c(param_1 + 4,auStack_80);
          FUN_0097c0d4(param_1);
          return;
        }
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
        if (uVar3 == 1) {
          FUN_00974a04();
          return;
        }
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
        return;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009b40bc  FUN_009b40bc =====

void FUN_009b40bc(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *(ulong *)(param_2 + 0x408);
  if (uVar4 == 0) {
    *param_1 = 0;
    return;
  }
  uVar3 = (uint)*(undefined8 *)(param_2 + 0x400);
  if (uVar3 < 0xb) {
    uVar5 = (ulong)(uVar3 * 6);
    uVar6 = param_3 >> (uVar5 & 0x3f);
    uVar2 = uVar6 & 0x3f;
    uVar4 = uVar4 >> uVar2 | uVar4 << 0x40 - uVar2;
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar7 = 0x40L << (uVar5 & 0x3f);
    uVar4 = (ulong)(uint)((int)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) + (int)uVar6) & 0x3f;
    param_1[1] = *(undefined8 *)(param_2 + 0x400);
    param_1[2] = uVar4;
    uVar4 = (uVar4 << (uVar5 & 0x3f)) + (param_3 & -lVar7);
    lVar1 = 0;
    if (uVar4 <= param_3) {
      lVar1 = lVar7;
    }
    param_1[3] = lVar1 + uVar4;
    *param_1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_const::panic_const_div_by_zero
            (&PTR_s__root__cargo_registry_src_index__00af5538);
}


// ===== 009b4144  <tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_after =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_after */

void __rustcall
<tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_after
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  auVar2 = <std::time::std::time::Instant>::now();
  auVar2 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
           ::add(auVar2._0_8_,auVar2._8_8_,param_2,param_3,
                 &PTR_s__root__cargo_registry_src_index__00af62e8);
  FUN_009b466c(uVar1,auVar2._0_8_,auVar2._8_8_ & 0xffffffff,1);
  return;
}


// ===== 009b41a0  <tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_immediately =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_immediately */

void __rustcall
<tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_immediately(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  auVar2 = <std::time::std::time::Instant>::now();
  FUN_009b466c(uVar1,auVar2._0_8_,auVar2._8_8_ & 0xffffffff,1);
  return;
}


// ===== 009b41d8  <tokio::time::interval::[0]::tokio::time::interval::Interval>::reset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::interval::[0]::tokio::time::interval::Interval>::reset */

void __rustcall
<tokio::time::interval::[0]::tokio::time::interval::Interval>::reset(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1[2];
  auVar2 = <std::time::std::time::Instant>::now();
  auVar2 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
           ::add(auVar2._0_8_,auVar2._8_8_,*param_1,*(undefined4 *)(param_1 + 1),
                 &PTR_s__root__cargo_registry_src_index__00af62e8);
  FUN_009b466c(uVar1,auVar2._0_8_,auVar2._8_8_ & 0xffffffff,1);
  return;
}


// ===== 009b4228  <tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_at */

void __rustcall
<tokio::time::interval::[0]::tokio::time::interval::Interval>::reset_at
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009b466c(*(undefined8 *)(param_1 + 0x10),param_2,param_3,1);
  return;
}


// ===== 009b4234  <tokio::time::interval::[0]::tokio::time::interval::Interval>::poll_tick =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::interval::[0]::tokio::time::interval::Interval>::poll_tick */

undefined1  [16] __rustcall
<tokio::time::interval::[0]::tokio::time::interval::Interval>::poll_tick(ulong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  long local_80;
  undefined4 local_78;
  long local_70;
  uint local_68;
  
  uVar8 = param_1[2];
  uVar3 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(uVar8);
  if ((uVar3 & 1) != 0) {
    uVar7 = 0xffffffff;
    goto LAB_009b4400;
  }
  unaff_x20 = *(long *)*(undefined1 (*) [12])(uVar8 + 0x10);
  uVar7 = *(undefined4 *)(uVar8 + 0x18);
  auVar2 = *(undefined1 (*) [12])(uVar8 + 0x10);
  local_80 = unaff_x20;
  local_78 = uVar7;
  auVar9 = <std::time::std::time::Instant>::now();
  lVar6 = auVar9._0_8_;
  uVar3 = auVar9._8_8_ & 0xffffffff;
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = lVar6;
  auVar12 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
            ::add(unaff_x20,uVar7,0,&LAB_004c4b40,&PTR_s__root__cargo_registry_src_index__00af62e8);
  if (lVar6 == auVar12._0_8_) {
    if (auVar12._8_4_ < auVar9._8_4_) goto LAB_009b42e4;
LAB_009b42bc:
    auVar10 = <std::time::[5]::std::time::SystemTime>::checked_add
                        (&local_80,*param_1,(int)param_1[1]);
    if (auVar10._8_4_ != -1) goto LAB_009b43ec;
    auVar10 = <std::time::std::time::Instant>::now();
    uVar4 = 0x38640900;
    uVar5 = 0;
LAB_009b4334:
    auVar10 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
              ::add(auVar10._0_8_,auVar10._8_8_,uVar4,uVar5,
                    &PTR_s__root__cargo_registry_src_index__00af62e8);
  }
  else {
    if (lVar6 <= auVar12._0_8_) goto LAB_009b42bc;
LAB_009b42e4:
    uVar4 = *param_1;
    uVar5 = (ulong)(uint)param_1[1];
    if ((char)param_1[3] == '\0') {
      auVar10._12_4_ = 0;
      auVar10._0_12_ = auVar2;
      goto LAB_009b4334;
    }
    if ((char)param_1[3] == '\x01') goto LAB_009b4334;
    auVar10 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
              ::add(lVar6,uVar3,uVar4,uVar5,&PTR_s__root__cargo_registry_src_index__00af62e8);
    local_70 = lVar6;
    local_68 = auVar9._8_4_;
    auVar11 = <std::time::std::time::Instant>::duration_since(&local_70,unaff_x20,uVar7);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar4;
    lVar6 = SUB168(auVar9 * ZEXT816(1000000000),8);
    if (CARRY8(uVar4 * 1000000000,uVar5)) {
      lVar6 = lVar6 + 1;
    }
    if (uVar4 * 1000000000 + uVar5 == 0 && lVar6 == 0) {
      core::panicking::panic_const::panic_const_rem_by_zero
                (&PTR_s__root__cargo_registry_src_index__00af54f0);
LAB_009b4434:
      local_70 = CONCAT71(local_70._1_7_,2);
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0037c897,0x41,&local_70,&DAT_00af54d0,
                 &PTR_s__root__cargo_registry_src_index__00af5508);
    }
    uVar4 = auVar11._0_8_ * 1000000000;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar11._0_8_;
    lVar6 = SUB168(auVar1 * ZEXT816(1000000000),8);
    uVar3 = auVar11._8_8_ & 0xffffffff;
    if (CARRY8(uVar4,uVar3)) {
      lVar6 = lVar6 + 1;
    }
    auVar9 = FUN_00ab1938(uVar4 + uVar3,lVar6);
    if (auVar9._8_8_ != 0) goto LAB_009b4434;
    uVar3 = auVar9._0_8_ / 1000000000;
    auVar10 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>
              ::sub(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,uVar3,
                    auVar9._0_4_ + (int)uVar3 * -1000000000,
                    &PTR_s__root__cargo_registry_src_index__00af6320);
  }
LAB_009b43ec:
  FUN_009b466c(uVar8,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,0);
LAB_009b4400:
  auVar11._8_4_ = uVar7;
  auVar11._0_8_ = unaff_x20;
  auVar11._12_4_ = 0;
  return auVar11;
}


// ===== 009b4460  FUN_009b4460 =====

undefined1 FUN_009b4460(int *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined **local_30;
  code *pcStack_28;
  
  lVar1 = 0x140;
  if (*param_1 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x80) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
               ,0x73,&PTR_s__root__cargo_registry_src_index__00af55c0);
  }
  if (*(char *)(*(long *)(param_1 + 2) + lVar1 + 0x74) != '\0') {
    local_30 = &PTR_DAT_00af5580;
    pcStack_28 = FUN_0099f78c;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ab692,&local_30,&PTR_s__root__cargo_registry_src_index__00af5590);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    FUN_009b466c(param_1,*(undefined8 *)(param_1 + 4),param_1[6],1);
  }
  lVar1 = FUN_009b4558(param_1);
  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::
  register_by_ref(lVar1 + 0x20,*param_2);
  if (*(long *)(lVar1 + 0x18) != -1) {
    return 0xff;
  }
  return *(undefined1 *)(lVar1 + 0x38);
}


// ===== 009b4558  FUN_009b4558 =====

int * FUN_009b4558(int *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  
  if (*(long *)(param_1 + 8) != 0) {
    return param_1 + 10;
  }
  lVar1 = 0x140;
  if (*param_1 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x80) != -1) {
    uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar1 + 0x70);
    local_24 = uVar2;
    uVar4 = FUN_009ae42c(&local_24,&PTR_s__root__cargo_registry_src_index__00af5608);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar4 / uVar2;
      }
      if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x12) != 0)) {
                    /* try { // try from 009b45ec to 009b45ef has its CatchHandler @ 009b4648 */
        (**(code **)(*(long *)(param_1 + 0x12) + 0x18))(*(undefined8 *)(param_1 + 0x14));
      }
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[8] = 1;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0x10] = -1;
      param_1[0x11] = -1;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      param_1[0x1a] = uVar4 - uVar3 * uVar2;
      return param_1 + 10;
    }
    core::panicking::panic_const::panic_const_rem_by_zero
              (&PTR_s__root__cargo_registry_src_index__00af5620);
                    /* catch() { ... } // from try @ 009b45ec with catch @ 009b4648 */
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[8] = 1;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = -1;
    param_1[0x11] = -1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    param_1[0x1a] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530();
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,&PTR_s__root__cargo_registry_src_index__00af55a8);
}


// ===== 009b466c  FUN_009b466c =====

void FUN_009b466c(int *param_1,undefined8 param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_40 [12];
  
  lVar11 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  lVar8 = 0x140;
  if (*param_1 == 0) {
    lVar8 = 0xe0;
  }
  *(char *)(param_1 + 0x1c) = (char)param_4;
  iVar3 = *(int *)(lVar11 + lVar8 + 0x80);
  if (iVar3 != -1) {
    local_40 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
               ::add(param_2,param_3,0,999999,&PTR_s__root__cargo_registry_src_index__00af62e8);
    auVar12 = <std::time::std::time::Instant>::duration_since
                        (local_40,*(undefined8 *)(lVar11 + lVar8 + 0x78),iVar3);
    uVar9 = auVar12._0_8_ * 1000;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar12._0_8_;
    lVar8 = SUB168(auVar6 * ZEXT816(1000),8);
    uVar1 = (auVar12._8_8_ & 0xffffffff) / 1000000;
    uVar10 = uVar9 + uVar1;
    if (CARRY8(uVar9,uVar1)) {
      lVar8 = lVar8 + 1;
    }
    if (0xfffffffffffffffc < uVar10) {
      uVar10 = 0xfffffffffffffffd;
    }
    uVar1 = 0xfffffffffffffffd;
    if (lVar8 == 0) {
      uVar1 = uVar10;
    }
    lVar8 = FUN_009b4558(param_1);
    puVar2 = (ulong *)(lVar8 + 0x18);
    uVar10 = *(ulong *)(lVar8 + 0x18);
    while (uVar10 <= uVar1) {
      uVar9 = *puVar2;
      if (uVar9 == uVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        uVar10 = uVar9;
        if (cVar4 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
        uVar10 = uVar9;
      }
    }
    if (param_4 == 0) {
      return;
    }
    lVar8 = 0x140;
    if (*param_1 == 0) {
      lVar8 = 0xe0;
    }
    lVar8 = *(long *)(param_1 + 2) + lVar8;
    if (*(int *)(lVar8 + 0x80) != -1) {
      uVar7 = FUN_009b4558(param_1);
      FUN_009a293c(lVar8 + 0x50,lVar8,uVar1,uVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,&PTR_s__root__cargo_registry_src_index__00af55c0);
}


// ===== 009b47f0  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output */

void __rustcall
<tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b47f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))();
  return;
}


// ===== 009b47fc  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow */

void __rustcall
<tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b4804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 009b4808  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::poll */

void __rustcall <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::poll(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b4810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x10))();
  return;
}


// ===== 009b4814  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc */

void __rustcall
<tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b481c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  return;
}


// ===== 009b4820  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::ref_inc =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::ref_inc */

void __rustcall
<tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::ref_inc(long *param_1)

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
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 009b4848  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::shutdown */

void __rustcall
<tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::shutdown(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b4850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 009b4854  <tokio::runtime::task::harness::tokio::runtime::task::raw::RawTask>::remote_abort =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::harness::tokio::runtime::task::raw::RawTask>::remote_abort */

void __rustcall
<tokio::runtime::task::harness::tokio::runtime::task::raw::RawTask>::remote_abort
          (undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar5 = (ulong *)*param_1;
  uVar4 = *puVar5;
  while ((uVar4 & 0x22) == 0) {
    if ((uVar4 & 1) == 0) {
      if (((uint)uVar4 >> 2 & 1) == 0) {
        if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                     &PTR_s__root__cargo_registry_src_index__00af4018);
        }
        uVar6 = uVar4 + 100;
        bVar3 = true;
      }
      else {
        bVar3 = false;
        uVar6 = uVar4 | 0x20;
      }
    }
    else {
      bVar3 = false;
      uVar6 = uVar4 | 0x24;
    }
    while (*puVar5 == uVar4) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar2) {
        *puVar5 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_009b490c;
    }
    ClearExclusiveLocal();
    uVar4 = *puVar5;
  }
  bVar3 = false;
LAB_009b490c:
  if (!bVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009b4920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar5[2] + 8))();
  return;
}


// ===== 009b4948  <tokio::runtime::task::harness::tokio::runtime::task::raw::RawTask>::try_set_join_waker =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::harness::tokio::runtime::task::raw::RawTask>::try_set_join_waker */

void __rustcall
<tokio::runtime::task::harness::tokio::runtime::task::raw::RawTask>::try_set_join_waker
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  tokio::runtime::task::harness::can_read_output
            (lVar1,lVar1 + *(long *)(*(long *)(lVar1 + 0x10) + 0x38),param_2);
  return;
}


// ===== 009b4960  tokio::time::interval::interval_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::time::interval::interval_at */

void __rustcall
tokio::time::interval::interval_at
          (long *param_1,undefined8 param_2,undefined4 param_3,long param_4,int param_5,
          undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined4 uStack_ac;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint7 uStack_57;
  
  bVar2 = param_5 != 0;
  if (param_4 != 0) {
    bVar2 = param_4 != 0;
  }
  if (!bVar2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037c987,0x35,param_6);
  }
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af55d8);
  lVar1 = 0x140;
  if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(auVar4._8_8_ + lVar1 + 0x80) != -1) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pauVar3 = (undefined1 (*) [16])FUN_004b25a4(0x78,8);
    if (pauVar3 != (undefined1 (*) [16])0x0) {
      param_1[2] = (long)pauVar3;
      *(undefined8 *)(pauVar3[4] + 8) = uStack_80;
      *(undefined8 *)pauVar3[4] = local_88;
      *(undefined8 *)(pauVar3[5] + 8) = uStack_70;
      *(undefined8 *)pauVar3[5] = local_78;
      *(undefined8 *)(pauVar3[6] + 8) = uStack_60;
      *(undefined8 *)pauVar3[6] = local_68;
      *pauVar3 = auVar4;
      *(ulong *)(pauVar3[1] + 8) = CONCAT44(uStack_ac,param_3);
      *(undefined8 *)pauVar3[1] = param_2;
      *(ulong *)pauVar3[7] = (ulong)uStack_57 << 8;
      *(undefined8 *)(pauVar3[2] + 8) = uStack_a0;
      *(undefined8 *)pauVar3[2] = 0;
      *(undefined8 *)(pauVar3[3] + 8) = uStack_90;
      *(undefined8 *)pauVar3[3] = local_98;
      *param_1 = param_4;
      *(int *)(param_1 + 1) = param_5;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
                    /* try { // try from 009b4a88 to 009b4a93 has its CatchHandler @ 009b4a98 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x78);
  }
                    /* try { // try from 009b4a6c to 009b4a83 has its CatchHandler @ 009b4aac */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,&PTR_s__root__cargo_registry_src_index__00af55d8);
}


// ===== 009b4ac4  tokio::time::interval::interval =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::time::interval::interval */

void __rustcall tokio::time::interval::interval(long *param_1,long param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined4 uStack_ac;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint7 uStack_57;
  
  bVar2 = param_3 != 0;
  if (param_2 != 0) {
    bVar2 = param_2 != 0;
  }
  if (!bVar2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037c987,0x35);
  }
  auVar5 = <std::time::std::time::Instant>::now();
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af55d8);
  lVar1 = 0x140;
  if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(auVar4._8_8_ + lVar1 + 0x80) != -1) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pauVar3 = (undefined1 (*) [16])FUN_004b25a4(0x78,8);
    if (pauVar3 != (undefined1 (*) [16])0x0) {
      param_1[2] = (long)pauVar3;
      *(undefined8 *)(pauVar3[4] + 8) = uStack_80;
      *(undefined8 *)pauVar3[4] = local_88;
      *(undefined8 *)(pauVar3[5] + 8) = uStack_70;
      *(undefined8 *)pauVar3[5] = local_78;
      *(undefined8 *)(pauVar3[6] + 8) = uStack_60;
      *(undefined8 *)pauVar3[6] = local_68;
      *pauVar3 = auVar4;
      *(ulong *)(pauVar3[1] + 8) = CONCAT44(uStack_ac,auVar5._8_4_);
      *(long *)pauVar3[1] = auVar5._0_8_;
      *(ulong *)pauVar3[7] = (ulong)uStack_57 << 8;
      *(undefined8 *)(pauVar3[2] + 8) = uStack_a0;
      *(undefined8 *)pauVar3[2] = 0;
      *(undefined8 *)(pauVar3[3] + 8) = uStack_90;
      *(undefined8 *)pauVar3[3] = local_98;
      *param_1 = param_2;
      *(int *)(param_1 + 1) = param_3;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
                    /* try { // try from 009b4bec to 009b4bf7 has its CatchHandler @ 009b4bfc */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x78);
  }
                    /* try { // try from 009b4bd0 to 009b4be7 has its CatchHandler @ 009b4c10 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,&PTR_s__root__cargo_registry_src_index__00af55d8);
}


// ===== 009b4c28  FUN_009b4c28 =====

void FUN_009b4c28(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037c9a1,0x6f,&PTR_s__root__cargo_registry_src_index__00af55f0);
}


// ===== 009b4c48  FUN_009b4c48 =====

void FUN_009b4c48(long *param_1,long *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  lVar3 = *param_2;
  *param_2 = -1;
  if (lVar3 != -1) {
    lVar7 = param_2[2];
    lVar6 = param_2[1];
    lVar9 = param_2[4];
    lVar8 = param_2[3];
    lVar4 = param_2[5];
    uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar5 == 0) {
                    /* try { // try from 009b4d1c to 009b4d4b has its CatchHandler @ 009b4d50 */
      uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      pvVar2 = pthread_getspecific((pthread_key_t)uVar5);
    }
    else {
      pvVar2 = pthread_getspecific((pthread_key_t)uVar5);
    }
    if (pvVar2 < (void *)0x2) {
      pvVar2 = (void *)FUN_00996984(uVar5 & 0xffffffff,pvVar2,0);
    }
    if (pvVar2 != (void *)0x0) {
      *(undefined1 *)((long)pvVar2 + 0x44) = 0;
    }
                    /* try { // try from 009b4ccc to 009b4cd7 has its CatchHandler @ 009b4d64 */
    local_50 = lVar3;
    lStack_48 = lVar6;
    lStack_40 = lVar7;
    lStack_38 = lVar8;
    local_30 = lVar9;
    lStack_28 = lVar4;
    uVar1 = <tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::next_chunk(&local_50,&local_30);
    param_1[4] = local_30;
    param_1[1] = lStack_48;
    *param_1 = local_50;
    param_1[3] = lStack_38;
    param_1[2] = lStack_40;
    *(undefined1 *)(param_1 + 5) = (undefined1)lStack_28;
    *(undefined1 *)(param_1 + 6) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b4d7c  FUN_009b4d7c =====

undefined8 FUN_009b4d7c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar3 == 0) {
                    /* try { // try from 009b4dfc to 009b4e2b has its CatchHandler @ 009b4e30 */
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
    if (pvVar1 != (void *)0x0) {
      *(undefined1 *)((long)pvVar1 + 0x44) = 0;
    }
    tokio::runtime::scheduler::multi_thread::worker::run(lVar2);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b4e60  FUN_009b4e60 =====

void FUN_009b4e60(undefined1 (*param_1) [16],long *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar2 = *param_2;
  *param_2 = -1;
  if (lVar2 != -1) {
    lVar6 = param_2[3];
    lVar5 = param_2[2];
    lVar8 = param_2[5];
    lVar7 = param_2[4];
    lVar3 = param_2[1];
    uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar4 == 0) {
                    /* try { // try from 009b4f24 to 009b4f53 has its CatchHandler @ 009b4f58 */
      uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      pvVar1 = pthread_getspecific((pthread_key_t)uVar4);
    }
    else {
      pvVar1 = pthread_getspecific((pthread_key_t)uVar4);
    }
    if (pvVar1 < (void *)0x2) {
      pvVar1 = (void *)FUN_00996984(uVar4 & 0xffffffff,pvVar1,0);
    }
    if (pvVar1 != (void *)0x0) {
      *(undefined1 *)((long)pvVar1 + 0x44) = 0;
    }
                    /* try { // try from 009b4ed8 to 009b4ee3 has its CatchHandler @ 009b4f6c */
    local_60 = lVar2;
    lStack_58 = lVar3;
    local_50 = lVar5;
    lStack_48 = lVar6;
    local_40 = lVar7;
    local_38 = lVar8;
    auVar9 = FUN_0098ba80(&local_60,&local_40,lVar8);
    *param_1 = auVar9;
    *(long *)(param_1[1] + 8) = lStack_58;
    *(long *)param_1[1] = local_60;
    *(long *)(param_1[2] + 8) = lStack_48;
    *(long *)param_1[2] = local_50;
    *(long *)param_1[3] = local_40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b4f8c  FUN_009b4f8c =====

void FUN_009b4f8c(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  long *local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long *local_50 [2];
  
  lVar4 = *param_2;
  *param_2 = -1;
  if (lVar4 != -1) {
    lVar7 = param_2[2];
    lVar6 = param_2[1];
    lVar9 = param_2[4];
    lVar8 = param_2[3];
    plVar11 = (long *)param_2[6];
    lVar10 = param_2[5];
    uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar5 == 0) {
                    /* try { // try from 009b50b0 to 009b50df has its CatchHandler @ 009b50e4 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined1 *)((long)pvVar3 + 0x44) = 0;
    }
    local_a0 = plVar11 + 2;
                    /* try { // try from 009b502c to 009b5033 has its CatchHandler @ 009b50f8 */
    local_80 = lVar4;
    lStack_78 = lVar6;
    lStack_70 = lVar7;
    lStack_68 = lVar8;
    local_60 = lVar9;
    lStack_58 = lVar10;
    local_50[0] = plVar11;
    auVar12 = <&std::fs::File_as_core::io::seek::Seek>::seek(&local_a0,lVar4,lVar6);
    lStack_98 = param_2[3];
    local_a0 = (long *)param_2[2];
    lStack_88 = param_2[5];
    lStack_90 = param_2[4];
    do {
      lVar4 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(local_50);
    }
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 1) = auVar12;
    param_1[4] = lStack_98;
    param_1[3] = local_a0;
    param_1[6] = lStack_88;
    param_1[5] = lStack_90;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b5110  FUN_009b5110 =====

void FUN_009b5110(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long *local_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long *local_40 [2];
  long *local_18;
  
  lVar5 = *param_2;
  *param_2 = -2;
  if (lVar5 != -2) {
    lVar8 = param_2[2];
    lVar7 = param_2[1];
    lVar10 = param_2[4];
    lVar9 = param_2[3];
    plVar12 = (long *)param_2[6];
    lVar11 = param_2[5];
    uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar6 == 0) {
                    /* try { // try from 009b5280 to 009b52af has its CatchHandler @ 009b52b4 */
      uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      pvVar3 = pthread_getspecific((pthread_key_t)uVar6);
    }
    else {
      pvVar3 = pthread_getspecific((pthread_key_t)uVar6);
    }
    if (pvVar3 < (void *)0x2) {
      pvVar3 = (void *)FUN_00996984(uVar6 & 0xffffffff,pvVar3,0);
    }
    if (pvVar3 != (void *)0x0) {
      *(undefined1 *)((long)pvVar3 + 0x44) = 0;
    }
    local_70 = lVar5;
    lStack_68 = lVar7;
    local_60 = lVar8;
    lStack_58 = lVar9;
    local_50 = lVar10;
    lStack_48 = lVar11;
    local_40[0] = plVar12;
    if (lVar5 == -1) {
      local_98 = plVar12 + 2;
      uVar4 = FUN_0098b8e0(&local_60,&local_98);
    }
    else {
                    /* try { // try from 009b51b8 to 009b5203 has its CatchHandler @ 009b52c8 */
      local_18 = plVar12 + 2;
      auVar13 = <&std::fs::File_as_core::io::seek::Seek>::seek(&local_18,lVar5,lVar7);
      uVar4 = auVar13._8_8_;
      if (auVar13._0_8_ != 1) {
        local_98 = plVar12 + 2;
        uVar4 = FUN_0098b8e0(&local_60,&local_98);
      }
    }
    lStack_88 = lStack_58;
    local_90 = local_60;
    local_78 = lStack_48;
    lStack_80 = local_50;
    do {
      lVar5 = *local_40[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_40[0],0x10);
      if (bVar2) {
        *local_40[0] = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(local_40);
    }
    *param_1 = 1;
    param_1[1] = uVar4;
    param_1[3] = local_90;
    param_1[2] = local_98;
    param_1[5] = lStack_80;
    param_1[4] = lStack_88;
    param_1[6] = local_78;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b52e0  FUN_009b52e0 =====

void FUN_009b52e0(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  long *local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long *local_40;
  long lStack_38;
  
  plVar4 = (long *)*param_2;
  *param_2 = -1;
  if (plVar4 != (long *)0xffffffffffffffff) {
    lVar8 = param_2[2];
    lVar7 = param_2[1];
    plVar10 = (long *)param_2[4];
    lVar9 = param_2[3];
    lVar5 = param_2[5];
    uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar6 == 0) {
                    /* try { // try from 009b53f4 to 009b5423 has its CatchHandler @ 009b5428 */
      uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      pvVar3 = pthread_getspecific((pthread_key_t)uVar6);
    }
    else {
      pvVar3 = pthread_getspecific((pthread_key_t)uVar6);
    }
    if (pvVar3 < (void *)0x2) {
      pvVar3 = (void *)FUN_00996984(uVar6 & 0xffffffff,pvVar3,0);
    }
    if (pvVar3 != (void *)0x0) {
      *(undefined1 *)((long)pvVar3 + 0x44) = 0;
    }
    local_80 = plVar10 + 2;
                    /* try { // try from 009b5374 to 009b537f has its CatchHandler @ 009b543c */
    local_60 = plVar4;
    lStack_58 = lVar7;
    local_50 = lVar8;
    lStack_48 = lVar9;
    local_40 = plVar10;
    lStack_38 = lVar5;
    auVar11 = FUN_0098bca8(&local_60,&local_80,lVar5);
    lStack_78 = lStack_58;
    local_80 = local_60;
    lStack_68 = lStack_48;
    lStack_70 = local_50;
    do {
      lVar5 = *local_40;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_40,0x10);
      if (bVar2) {
        *local_40 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(&local_40);
    }
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 1) = auVar11;
    param_1[4] = lStack_78;
    param_1[3] = local_80;
    param_1[6] = lStack_68;
    param_1[5] = lStack_70;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b5454  FUN_009b5454 =====

void FUN_009b5454(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_38;
  
  uVar3 = *param_2;
  *param_2 = 0xffffffffffffffff;
  if (uVar3 != 0xffffffffffffffff) {
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar2 = param_2[4];
    uVar4 = param_2[1];
    uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar5 == 0) {
                    /* try { // try from 009b552c to 009b555b has its CatchHandler @ 009b5560 */
      uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      pvVar1 = pthread_getspecific((pthread_key_t)uVar5);
    }
    else {
      pvVar1 = pthread_getspecific((pthread_key_t)uVar5);
    }
    if (pvVar1 < (void *)0x2) {
      pvVar1 = (void *)FUN_00996984(uVar5 & 0xffffffff,pvVar1,0);
    }
    if (pvVar1 != (void *)0x0) {
      *(undefined1 *)((long)pvVar1 + 0x44) = 0;
    }
                    /* try { // try from 009b54d8 to 009b54df has its CatchHandler @ 009b5574 */
    local_38 = uVar2;
    uVar5 = <std::io::stdio::Stderr_as_core::io::write::Write>::flush(&local_38);
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    *param_1 = (ulong)(uVar5 != 0);
    param_1[1] = uVar5;
    param_1[6] = local_38;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b5594  FUN_009b5594 =====

void FUN_009b5594(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  undefined8 in_x4;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_40;
  ulong local_38;
  
  uVar3 = *param_2;
  *param_2 = 0xffffffffffffffff;
  if (uVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638)
    ;
  }
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar2 = param_2[4];
  uVar4 = param_2[1];
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
                    /* try { // try from 009b5688 to 009b56b7 has its CatchHandler @ 009b56e0 */
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar1 = pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    pvVar1 = pthread_getspecific((pthread_key_t)uVar5);
  }
  if (pvVar1 < (void *)0x2) {
    pvVar1 = (void *)FUN_00996984(uVar5 & 0xffffffff,pvVar1,0);
  }
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)((long)pvVar1 + 0x44) = 0;
  }
  uStack_40 = uVar7;
  local_38 = uVar2;
  if (uVar7 != 0) {
                    /* try { // try from 009b56bc to 009b56db has its CatchHandler @ 009b56f4 */
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>
              (0,&uStack_40,&DAT_002a1518,0,in_x4,&PTR_s__root__cargo_registry_src_index__00af40b0);
  }
                    /* try { // try from 009b5620 to 009b5633 has its CatchHandler @ 009b56f4 */
  uVar2 = <std::io::stdio::Stderr_as_core::io::write::Write>::write_all(&local_38,uVar4,uVar6);
  uVar5 = uVar2;
  if (uVar2 == 0) {
    uVar5 = uVar6;
  }
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uStack_40;
  param_1[4] = 0;
  *param_1 = (ulong)(uVar2 != 0);
  param_1[1] = uVar5;
  param_1[6] = local_38;
  return;
}


// ===== 009b5718  FUN_009b5718 =====

void FUN_009b5718(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_38;
  
  uVar3 = *param_2;
  *param_2 = 0xffffffffffffffff;
  if (uVar3 != 0xffffffffffffffff) {
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar2 = param_2[4];
    uVar4 = param_2[1];
    uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar5 == 0) {
                    /* try { // try from 009b57f0 to 009b581f has its CatchHandler @ 009b5824 */
      uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      pvVar1 = pthread_getspecific((pthread_key_t)uVar5);
    }
    else {
      pvVar1 = pthread_getspecific((pthread_key_t)uVar5);
    }
    if (pvVar1 < (void *)0x2) {
      pvVar1 = (void *)FUN_00996984(uVar5 & 0xffffffff,pvVar1,0);
    }
    if (pvVar1 != (void *)0x0) {
      *(undefined1 *)((long)pvVar1 + 0x44) = 0;
    }
                    /* try { // try from 009b579c to 009b57a3 has its CatchHandler @ 009b5838 */
    local_38 = uVar2;
    uVar5 = <std::io::stdio::Stdout_as_core::io::write::Write>::flush(&local_38);
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    *param_1 = (ulong)(uVar5 != 0);
    param_1[1] = uVar5;
    param_1[6] = local_38;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b5858  FUN_009b5858 =====

void FUN_009b5858(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  undefined8 in_x4;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_40;
  ulong local_38;
  
  uVar3 = *param_2;
  *param_2 = 0xffffffffffffffff;
  if (uVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638)
    ;
  }
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar2 = param_2[4];
  uVar4 = param_2[1];
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
                    /* try { // try from 009b594c to 009b597b has its CatchHandler @ 009b59a4 */
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar1 = pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    pvVar1 = pthread_getspecific((pthread_key_t)uVar5);
  }
  if (pvVar1 < (void *)0x2) {
    pvVar1 = (void *)FUN_00996984(uVar5 & 0xffffffff,pvVar1,0);
  }
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)((long)pvVar1 + 0x44) = 0;
  }
  uStack_40 = uVar7;
  local_38 = uVar2;
  if (uVar7 != 0) {
                    /* try { // try from 009b5980 to 009b599f has its CatchHandler @ 009b59b8 */
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>
              (0,&uStack_40,&DAT_002a1518,0,in_x4,&PTR_s__root__cargo_registry_src_index__00af40b0);
  }
                    /* try { // try from 009b58e4 to 009b58f7 has its CatchHandler @ 009b59b8 */
  uVar2 = <std::io::stdio::Stdout_as_core::io::write::Write>::write_all(&local_38,uVar4,uVar6);
  uVar5 = uVar2;
  if (uVar2 == 0) {
    uVar5 = uVar6;
  }
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uStack_40;
  param_1[4] = 0;
  *param_1 = (ulong)(uVar2 != 0);
  param_1[1] = uVar5;
  param_1[6] = local_38;
  return;
}


// ===== 009b59dc  FUN_009b59dc =====

void FUN_009b59dc(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  void *pvStack_50;
  long local_48;
  
  lVar3 = *param_2;
  *param_2 = -1;
  if (lVar3 != -1) {
    __ptr = (void *)param_2[1];
    lVar1 = param_2[2];
    uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar4 == 0) {
                    /* try { // try from 009b5aa8 to 009b5ad7 has its CatchHandler @ 009b5adc */
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
    if (pvVar2 != (void *)0x0) {
      *(undefined1 *)((long)pvVar2 + 0x44) = 0;
    }
                    /* try { // try from 009b5a44 to 009b5a4f has its CatchHandler @ 009b5ae0 */
    local_58 = lVar3;
    pvStack_50 = __ptr;
    local_48 = lVar1;
    <alloc::string::String_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs
              (&local_78,&local_58);
    if (lVar3 != 0) {
      free(__ptr);
    }
    param_1[2] = uStack_70;
    param_1[1] = local_78;
    param_1[4] = uStack_60;
    param_1[3] = local_68;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b5b00  FUN_009b5b00 =====

void FUN_009b5b00(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  long lStack_50;
  undefined2 local_48;
  
  lVar4 = *param_2;
  *param_2 = -1;
  if (lVar4 != -1) {
    __ptr = (void *)param_2[1];
    lVar1 = param_2[2];
    lVar2 = param_2[3];
    uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar5 == 0) {
                    /* try { // try from 009b5bd0 to 009b5bff has its CatchHandler @ 009b5c04 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined1 *)((long)pvVar3 + 0x44) = 0;
    }
                    /* try { // try from 009b5b6c to 009b5b77 has its CatchHandler @ 009b5c08 */
    local_58 = __ptr;
    lStack_50 = lVar1;
    local_48 = (short)lVar2;
    <(&str,u16)as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&local_78,&local_58);
    if (lVar4 != 0) {
      free(__ptr);
    }
    param_1[2] = uStack_70;
    param_1[1] = local_78;
    param_1[4] = uStack_60;
    param_1[3] = local_68;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037c9d8,0x2d,&PTR_s__root__cargo_registry_src_index__00af5638);
}


// ===== 009b5c28  FUN_009b5c28 =====

void FUN_009b5c28(undefined8 *param_1)

{
  <mio::net::uds::stream::UnixStream_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 009b5c30  <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>::from =====

/* <core[bcece726f298455b]::io::error::Error as
   core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>::from
    */

undefined8
<core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
::from(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  
  __ptr = *(void **)(param_1 + 8);
  uVar2 = 0x12;
  if (__ptr != (void *)0x0) {
    uVar2 = 0xd;
  }
  puVar1 = &UNK_0037ca05;
  if (__ptr != (void *)0x0) {
    puVar1 = &DAT_0037ca17;
  }
                    /* try { // try from 009b5c6c to 009b5c73 has its CatchHandler @ 009b5cd8 */
  uVar2 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,puVar1,uVar2);
  if (__ptr != (void *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 009b5c88 to 009b5c8f has its CatchHandler @ 009b5cb8 */
      (*pcVar3)(__ptr);
    }
    if (puVar4[1] != 0) {
      free(__ptr);
    }
  }
  return uVar2;
}


// ===== 009b5cf4  <tokio::runtime::time::entry::TimerShared_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::time::entry::TimerShared as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::time::entry::TimerShared_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  undefined8 local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0037ca24,0xb);
  local_8 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0037ca2f,0xb,&local_8,&DAT_00af5650);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0037ca3a,5,param_1 + 0x18,&PTR_FUN_00af5670);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009b5d7c  FUN_009b5d7c =====

void FUN_009b5d7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0037ca3f,0xf,&local_18,&DAT_00af5690);
  return;
}


// ===== 009b5dbc  FUN_009b5dbc =====

void FUN_009b5dbc(char *param_1,undefined8 param_2)

{
  char *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_0037ca4e,5,&local_18,&DAT_00af56b0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037ca53,7);
  return;
}


// ===== 009b5e18  FUN_009b5e18 =====

void FUN_009b5e18(undefined8 param_1,long param_2)

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


// ===== 009b5e30  <tokio::runtime::time::entry::StateCell_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::time::entry::StateCell as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::time::entry::StateCell_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  undefined1 local_24 [4];
  undefined1 *local_20;
  code *pcStack_18;
  
  if (*param_1 == -1) {
    local_24[0] = (undefined1)param_1[4];
  }
  else {
    local_24[0] = 0xff;
  }
  local_20 = local_24;
  pcStack_18 = FUN_009b5dbc;
  core::fmt::write(*param_2,param_2[1],&DAT_002a8c29,&local_20);
  return;
}


// ===== 009b5e88  <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::blocking::pool::SpawnError>>::from =====

/* <core[bcece726f298455b]::io::error::Error as
   core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::blocking::pool::SpawnError>>::from
    */

void <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::blocking::pool::SpawnError>>
     ::from(long param_1)

{
  if (param_1 != 0) {
    return;
  }
  <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,&DAT_0037ca5a,0x1b);
  return;
}


// ===== 009b5ea4  <tokio::runtime::time::wheel::level::Level_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::time::wheel::level::Level as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::time::wheel::level::Level_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0037ca75,5);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002a1b00,8,param_1 + 0x408,&DAT_00af5650);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009b5f08  <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::time::entry::TimerEntry as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 2);
  lVar1 = 0x140;
  if (*param_1 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(lVar3 + lVar1 + 0x80) != -1) {
    uVar2 = FUN_009b4558();
    FUN_009a2bd8(lVar3 + lVar1 + 0x50,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,&PTR_s__root__cargo_registry_src_index__00af55c0);
}


// ===== 009b5f80  FUN_009b5f80 =====

undefined1  [16] FUN_009b5f80(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &DAT_0037ca7a;
  return auVar1;
}


// ===== 009b5f90  FUN_009b5f90 =====

undefined8 FUN_009b5f90(void)

{
  return 0;
}


// ===== 009b5f98  FUN_009b5f98 =====

void FUN_009b5f98(void)

{
  return;
}


// ===== 009b5f9c  FUN_009b5f9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009b5f9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 009b5fb0  FUN_009b5fb0 =====

void FUN_009b5fb0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  lVar1 = puVar3[1];
  if (lVar1 == 0xa0 && puVar3[2] == 8) {
    puVar2 = (undefined8 *)*param_1;
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 009b6090 to 009b6097 has its CatchHandler @ 009b6120 */
      (*(code *)*puVar3)(puVar2);
    }
    uVar4 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    puVar2[0xd] = param_2[0xd];
    puVar2[0xc] = uVar4;
    puVar2[0xf] = uVar6;
    puVar2[0xe] = uVar5;
    uVar4 = param_2[0x10];
    uVar6 = param_2[0x13];
    uVar5 = param_2[0x12];
    puVar2[0x11] = param_2[0x11];
    puVar2[0x10] = uVar4;
    puVar2[0x13] = uVar6;
    puVar2[0x12] = uVar5;
    uVar6 = param_2[4];
    uVar5 = param_2[7];
    uVar4 = param_2[6];
    puVar2[5] = param_2[5];
    puVar2[4] = uVar6;
    puVar2[7] = uVar5;
    puVar2[6] = uVar4;
    uVar6 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    puVar2[9] = param_2[9];
    puVar2[8] = uVar6;
    puVar2[0xb] = uVar5;
    puVar2[10] = uVar4;
    uVar6 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar6;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar2 = (undefined8 *)FUN_004b25a4(0xa0,8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 009b60e4 to 009b60ef has its CatchHandler @ 009b6164 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0xa0);
    }
    uVar4 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    puVar2[0xd] = param_2[0xd];
    puVar2[0xc] = uVar4;
    puVar2[0xf] = uVar6;
    puVar2[0xe] = uVar5;
    uVar4 = param_2[0x10];
    uVar6 = param_2[0x13];
    uVar5 = param_2[0x12];
    puVar2[0x11] = param_2[0x11];
    puVar2[0x10] = uVar4;
    puVar2[0x13] = uVar6;
    puVar2[0x12] = uVar5;
    uVar6 = param_2[4];
    uVar5 = param_2[7];
    uVar4 = param_2[6];
    puVar2[5] = param_2[5];
    puVar2[4] = uVar6;
    puVar2[7] = uVar5;
    puVar2[6] = uVar4;
    uVar6 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    puVar2[9] = param_2[9];
    puVar2[8] = uVar6;
    puVar2[0xb] = uVar5;
    puVar2[10] = uVar4;
    uVar6 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar6;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
    __ptr = (void *)*param_1;
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 009b6058 to 009b605f has its CatchHandler @ 009b60f4 */
      (*(code *)*puVar3)(__ptr);
    }
    if (lVar1 != 0) {
      free(__ptr);
    }
    *param_1 = (long)puVar2;
  }
  param_1[1] = (long)&PTR_FUN_00af5748;
  return;
}


// ===== 009b617c  FUN_009b617c =====

void FUN_009b617c(long *param_1)

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
                    /* try { // try from 009b61a8 to 009b61af has its CatchHandler @ 009b6240 */
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


// ===== 009b6264  FUN_009b6264 =====

void FUN_009b6264(long *param_1)

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


// ===== 009b62dc  FUN_009b62dc =====

void FUN_009b62dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  plVar1 = plVar4 + 0x28;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
                    /* try { // try from 009b6308 to 009b630f has its CatchHandler @ 009b6348 */
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar4 + 0x22);
    plVar4 = (long *)*param_1;
  }
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 009b637c  FUN_009b637c =====

void FUN_009b637c(long param_1)

{
  if (*(char *)(param_1 + 0x21) == '\x04') {
                    /* try { // try from 009b6394 to 009b639f has its CatchHandler @ 009b63cc */
    <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 0x28);
    if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 009b63b0 to 009b63b3 has its CatchHandler @ 009b63c4 */
      (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(*(undefined8 *)(param_1 + 0x50));
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 009b63f4  FUN_009b63f4 =====

void FUN_009b63f4(long param_1)

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
                    /* try { // try from 009b6424 to 009b6427 has its CatchHandler @ 009b6480 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
                    /* try { // try from 009b6428 to 009b642f has its CatchHandler @ 009b64c8 */
  FUN_009b6a98(param_1 + 0x38);
  if (*(long *)(param_1 + 0x88) != 0) {
                    /* try { // try from 009b6440 to 009b6443 has its CatchHandler @ 009b6494 */
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


// ===== 009b64e0  FUN_009b64e0 =====

void FUN_009b64e0(long param_1)

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
                    /* try { // try from 009b6510 to 009b6513 has its CatchHandler @ 009b656c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
                    /* try { // try from 009b6514 to 009b651b has its CatchHandler @ 009b65b4 */
  FUN_009b6b54(param_1 + 0x38);
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 009b652c to 009b652f has its CatchHandler @ 009b6580 */
    (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(*(undefined8 *)(param_1 + 0x70));
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x78));
      return;
    }
  }
  return;
}


// ===== 009b65cc  FUN_009b65cc =====

void FUN_009b65cc(long param_1)

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
                    /* try { // try from 009b65fc to 009b65ff has its CatchHandler @ 009b6658 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
                    /* try { // try from 009b6600 to 009b6607 has its CatchHandler @ 009b66a0 */
  FUN_009b6c0c(param_1 + 0x38);
  if (*(long *)(param_1 + 0x88) != 0) {
                    /* try { // try from 009b6618 to 009b661b has its CatchHandler @ 009b666c */
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


// ===== 009b66b8  FUN_009b66b8 =====

void FUN_009b66b8(long param_1)

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
                    /* try { // try from 009b66e8 to 009b66eb has its CatchHandler @ 009b6744 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
                    /* try { // try from 009b66ec to 009b66f3 has its CatchHandler @ 009b678c */
  FUN_009b6d3c(param_1 + 0x38);
  if (*(long *)(param_1 + 0x88) != 0) {
                    /* try { // try from 009b6704 to 009b6707 has its CatchHandler @ 009b6758 */
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


// ===== 009b67a4  FUN_009b67a4 =====

void FUN_009b67a4(long param_1)

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
                    /* try { // try from 009b67d4 to 009b67d7 has its CatchHandler @ 009b6830 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
                    /* try { // try from 009b67d8 to 009b67df has its CatchHandler @ 009b6878 */
  FUN_009b6e44(param_1 + 0x38);
  if (*(long *)(param_1 + 0x88) != 0) {
                    /* try { // try from 009b67f0 to 009b67f3 has its CatchHandler @ 009b6844 */
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


// ===== 009b6890  FUN_009b6890 =====

void FUN_009b6890(long param_1)

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
                    /* try { // try from 009b68c0 to 009b68c3 has its CatchHandler @ 009b691c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
                    /* try { // try from 009b68c4 to 009b68cb has its CatchHandler @ 009b6964 */
  FUN_009b6f4c(param_1 + 0x38);
  if (*(long *)(param_1 + 0x88) != 0) {
                    /* try { // try from 009b68dc to 009b68df has its CatchHandler @ 009b6930 */
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


// ===== 009b697c  FUN_009b697c =====

void FUN_009b697c(long param_1)

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
                    /* try { // try from 009b69ac to 009b69af has its CatchHandler @ 009b6a38 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
                    /* try { // try from 009b69e0 to 009b69e7 has its CatchHandler @ 009b6a4c */
    FUN_009b617c(param_1 + 0x40);
  }
  else if (((*(int *)(param_1 + 0x38) == 0) && (*(long *)(param_1 + 0x40) != -1)) &&
          (*(long *)(param_1 + 0x40) != 0)) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
                    /* try { // try from 009b69f8 to 009b69fb has its CatchHandler @ 009b6a60 */
    (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x80));
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x88));
      return;
    }
  }
  return;
}


// ===== 009b6a98  FUN_009b6a98 =====

void FUN_009b6a98(int *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_009b70b0();
      return;
    }
  }
  else if (*param_1 == 1) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_009b75dc(param_1 + 2);
      return;
    }
    __ptr = *(void **)(param_1 + 6);
    if (__ptr != (void *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 8);
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 009b6b00 to 009b6b07 has its CatchHandler @ 009b6b30 */
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


// ===== 009b6b54  FUN_009b6b54 =====

void FUN_009b6b54(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  if (*param_1 == 0) {
    plVar4 = *(long **)(param_1 + 2);
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
        ::drop_slow();
        return;
      }
    }
  }
  else if (((*param_1 == 1) && (*(long *)(param_1 + 2) != 0)) &&
          (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
    puVar6 = *(undefined8 **)(param_1 + 6);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 009b6b8c to 009b6b93 has its CatchHandler @ 009b6be8 */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 009b6c0c  FUN_009b6c0c =====

void FUN_009b6c0c(int *param_1)

{
  code *pcVar1;
  ulong uVar2;
  void *__ptr;
  undefined8 *puVar3;
  long local_28;
  
  if (*param_1 == 0) {
    if ((*(long *)(param_1 + 2) != -1) && (*(long *)(param_1 + 2) != 0)) {
      free(*(void **)(param_1 + 4));
      return;
    }
  }
  else if (*param_1 == 1) {
    if (*(long *)(param_1 + 2) == 2) {
      __ptr = *(void **)(param_1 + 6);
      if (__ptr != (void *)0x0) {
        puVar3 = *(undefined8 **)(param_1 + 8);
        pcVar1 = (code *)*puVar3;
        if (pcVar1 != (code *)0x0) {
                    /* try { // try from 009b6c4c to 009b6c53 has its CatchHandler @ 009b6d18 */
          (*pcVar1)(__ptr);
        }
        if (puVar3[1] != 0) {
          free(__ptr);
          return;
        }
      }
    }
    else {
      if (*(long *)(param_1 + 2) != 0) {
        uVar2 = *(ulong *)(param_1 + 4) & 3;
        if ((1 < uVar2 - 2) && (uVar2 != 0)) {
          local_28 = *(ulong *)(param_1 + 4) - 1;
                    /* try { // try from 009b6cd0 to 009b6cd7 has its CatchHandler @ 009b6d00 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
      }
      if (*(long *)(param_1 + 6) != 0) {
        free(*(void **)(param_1 + 8));
      }
    }
  }
  return;
}


// ===== 009b6d3c  FUN_009b6d3c =====

void FUN_009b6d3c(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
      plVar3 = *(long **)(param_1 + 0xe);
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
                    /* try { // try from 009b6da4 to 009b6da7 has its CatchHandler @ 009b6e24 */
        <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
      }
      if (*(long *)(param_1 + 6) != 0) {
        free(*(void **)(param_1 + 8));
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_009b7708(param_1 + 2);
      return;
    }
    __ptr = *(void **)(param_1 + 6);
    if (__ptr != (void *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 8);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 009b6dd8 to 009b6ddf has its CatchHandler @ 009b6e08 */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 009b6e44  FUN_009b6e44 =====

void FUN_009b6e44(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -2) {
      plVar3 = *(long **)(param_1 + 0xe);
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
                    /* try { // try from 009b6eac to 009b6eaf has its CatchHandler @ 009b6f2c */
        <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
      }
      if (*(long *)(param_1 + 6) != 0) {
        free(*(void **)(param_1 + 8));
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_009b7708(param_1 + 2);
      return;
    }
    __ptr = *(void **)(param_1 + 6);
    if (__ptr != (void *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 8);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 009b6ee0 to 009b6ee7 has its CatchHandler @ 009b6f10 */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 009b6f4c  FUN_009b6f4c =====

void FUN_009b6f4c(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
      if (*(long *)(param_1 + 2) != 0) {
        free(*(void **)(param_1 + 4));
      }
      plVar3 = *(long **)(param_1 + 10);
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
        <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_009b7708(param_1 + 2);
      return;
    }
    __ptr = *(void **)(param_1 + 6);
    if (__ptr != (void *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 8);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 009b6fec to 009b6ff3 has its CatchHandler @ 009b701c */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 009b7040  FUN_009b7040 =====

void FUN_009b7040(int *param_1)

{
  if (*param_1 == 0) {
    if ((*(long *)(param_1 + 2) != -1) && (*(long *)(param_1 + 2) != 0)) {
      free(*(void **)(param_1 + 4));
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_009b617c(param_1 + 2);
    return;
  }
  return;
}


// ===== 009b7078  FUN_009b7078 =====

void FUN_009b7078(int *param_1)

{
  if (*param_1 == 1) {
    FUN_009b617c(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) && (*(long *)(param_1 + 2) != 0)) {
    free(*(void **)(param_1 + 4));
    return;
  }
  return;
}


// ===== 009b70b0  FUN_009b70b0 =====

void FUN_009b70b0(ulong *param_1)

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
                    /* try { // try from 009b7110 to 009b7113 has its CatchHandler @ 009b7180 */
  FUN_009976d8(uVar7 + lVar6 * 0x10,uVar4 - lVar6);
                    /* try { // try from 009b7114 to 009b711f has its CatchHandler @ 009b7178 */
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


// ===== 009b71dc  FUN_009b71dc =====

void FUN_009b71dc(long param_1)

{
  if ((*(char *)(param_1 + 0x70) == '\x03') && (*(char *)(param_1 + 0x29) == '\x04')) {
                    /* try { // try from 009b7204 to 009b720b has its CatchHandler @ 009b7238 */
    <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 0x30);
    if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 009b721c to 009b721f has its CatchHandler @ 009b7230 */
      (**(code **)(*(long *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}


// ===== 009b7260  FUN_009b7260 =====

void FUN_009b7260(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if ((char)param_1[0x13] == '\0') {
    lVar3 = *param_1;
    plVar4 = (long *)(lVar3 + 0x140);
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
                    /* try { // try from 009b731c to 009b7323 has its CatchHandler @ 009b73b8 */
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar3 + 0x110);
    }
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
    if ((char)param_1[0x13] != '\x03') {
      return;
    }
    if (((char)param_1[0x12] == '\x03') && (*(char *)((long)param_1 + 0x49) == '\x04')) {
                    /* try { // try from 009b7298 to 009b729f has its CatchHandler @ 009b7358 */
      <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 10);
      if (param_1[0xe] != 0) {
                    /* try { // try from 009b72b0 to 009b72b3 has its CatchHandler @ 009b7350 */
        (**(code **)(param_1[0xe] + 0x18))(param_1[0xf]);
      }
      *(undefined1 *)(param_1 + 9) = 0;
    }
    param_1 = param_1 + 2;
    lVar3 = *param_1;
    plVar4 = (long *)(lVar3 + 0x140);
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
                    /* try { // try from 009b72d4 to 009b72db has its CatchHandler @ 009b7388 */
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar3 + 0x110);
    }
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
  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(param_1);
  return;
}


// ===== 009b73ec  FUN_009b73ec =====

void FUN_009b73ec(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar6 = (long *)*param_1;
  if (iVar2 == 0) goto LAB_009b7430;
  plVar1 = plVar6 + 2;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(char *)plVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_009b7470;
  }
  else {
    ClearExclusiveLocal();
LAB_009b7470:
                    /* try { // try from 009b7470 to 009b747b has its CatchHandler @ 009b7480 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (plVar1,param_2,0xffffffff);
  }
                    /* try { // try from 009b7424 to 009b742f has its CatchHandler @ 009b7480 */
  FUN_009aafdc(plVar6 + 2,iVar2,plVar6 + 2);
LAB_009b7430:
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 009b74b0  FUN_009b74b0 =====

void FUN_009b74b0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 009b74d0 to 009b74d3 has its CatchHandler @ 009b7510 */
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


// ===== 009b7548  FUN_009b7548 =====

void FUN_009b7548(long *param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*param_1 != 0) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = param_1[1] - 1;
                    /* try { // try from 009b7590 to 009b7597 has its CatchHandler @ 009b75bc */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  if (param_1[2] != 0) {
    free((void *)param_1[3]);
  }
  return;
}


// ===== 009b75dc  FUN_009b75dc =====

void FUN_009b75dc(ulong *param_1)

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
                    /* try { // try from 009b763c to 009b763f has its CatchHandler @ 009b76ac */
  FUN_009976d8(uVar7 + lVar6 * 0x10,uVar4 - lVar6);
                    /* try { // try from 009b7640 to 009b764b has its CatchHandler @ 009b76a4 */
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


// ===== 009b7708  FUN_009b7708 =====

void FUN_009b7708(long *param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      uVar1 = param_1[2] & 3;
      if ((1 < uVar1 - 2) && (uVar1 != 0)) {
        local_28 = param_1[2] - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = param_1[1];
    if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
      local_28 = uVar1 - 1;
                    /* try { // try from 009b775c to 009b77e3 has its CatchHandler @ 009b7808 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if (param_1[1] != 0) {
    uVar1 = param_1[2] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = param_1[2] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
  }
  return;
}


// ===== 009b7828  FUN_009b7828 =====

long FUN_009b7828(long *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_31;
  
  bVar2 = *(byte *)(param_1 + 0x13);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      lVar4 = *param_1;
      plVar3 = param_1 + 2;
      *plVar3 = lVar4;
      param_1[3] = param_1[1];
      param_1[4] = (long)plVar3;
      *(undefined1 *)(param_1 + 0x12) = 0;
LAB_009b789c:
      *(undefined1 *)((long)param_1 + 0x49) = 0;
      param_1[7] = lVar4 + 0x10;
      param_1[8] = (long)(plVar3 + 1);
LAB_009b78b8:
                    /* try { // try from 009b78b8 to 009b78bf has its CatchHandler @ 009b79d8 */
      bVar2 = FUN_009c71a8(param_1 + 5);
      if (bVar2 == 2) {
        *(undefined1 *)(param_1 + 0x12) = 3;
        *(undefined1 *)(param_1 + 0x13) = 3;
        return 0;
      }
      if (*(char *)((long)param_1 + 0x49) == '\x04') {
                    /* try { // try from 009b78fc to 009b7903 has its CatchHandler @ 009b79ac */
        <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 10);
        if (param_1[0xe] != 0) {
                    /* try { // try from 009b7914 to 009b7917 has its CatchHandler @ 009b79a4 */
          (**(code **)(param_1[0xe] + 0x18))(param_1[0xf]);
        }
        *(undefined1 *)(param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 0x12) = 1;
      if ((bVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x13) = 1;
        return param_1[2];
      }
                    /* try { // try from 009b7944 to 009b7967 has its CatchHandler @ 009b79fc */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0037cae9,0x17,&uStack_31,&DAT_00af57e0,
                 &PTR_s__root__cargo_registry_src_index__00af57c8);
    }
    core::panicking::panic_const::panic_const_async_fn_resumed
              (&PTR_s__root__cargo_registry_src_index__00af57b0);
LAB_009b7978:
    core::panicking::panic_const::panic_const_async_fn_resumed_panic
              (&PTR_s__root__cargo_registry_src_index__00af57b0);
  }
  else {
    if (bVar2 != 3) goto LAB_009b7978;
    bVar2 = *(byte *)(param_1 + 0x12);
    if (1 < bVar2) {
      if (bVar2 != 3) {
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00af5768);
        goto LAB_009b79a0;
      }
      goto LAB_009b78b8;
    }
    if (bVar2 == 0) {
      plVar3 = (long *)param_1[4];
      lVar4 = *plVar3;
      goto LAB_009b789c;
    }
  }
                    /* try { // try from 009b7984 to 009b799f has its CatchHandler @ 009b79d0 */
  core::panicking::panic_const::panic_const_async_fn_resumed
            (&PTR_s__root__cargo_registry_src_index__00af5768);
LAB_009b79a0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9b79a4);
  (*pcVar1)();
}


// ===== 009b7a1c  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::add_permits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::add_permits */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::add_permits(char *param_1,long param_2)

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


// ===== 009b7a70  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_2 + 0x20);
  uVar4 = *puVar1;
  while( true ) {
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return;
    }
    if (uVar4 < 2) break;
    while (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *param_1 = param_2;
        *(undefined4 *)(param_1 + 1) = 1;
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}


// ===== 009b7ad4  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::forget_permits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::forget_permits */

ulong __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::forget_permits
          (long param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar1 = (ulong *)(param_1 + 0x20);
  uVar5 = *puVar1;
  do {
    while( true ) {
      uVar7 = uVar5 >> 1;
      uVar6 = *puVar1;
      lVar2 = 0;
      if (param_2 <= uVar7) {
        lVar2 = uVar7 - param_2;
      }
      if (uVar6 == uVar5) break;
      ClearExclusiveLocal();
      uVar5 = uVar6;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = lVar2 << 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    uVar5 = uVar6;
  } while (cVar3 != '\0');
  if (uVar7 <= param_2) {
    param_2 = uVar7;
  }
  return param_2;
}


// ===== 009b7b28  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_many =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_many */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_many
          (long *param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_2 + 0x20);
  uVar4 = *puVar1;
  while( true ) {
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return;
    }
    if (uVar4 < (ulong)param_3 * 2) break;
    while (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + (ulong)param_3 * -2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(uint *)(param_1 + 1) = param_3;
        *param_1 = param_2;
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}


// ===== 009b7b8c  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::available_permits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::available_permits */

ulong __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::available_permits(long param_1)

{
  return *(ulong *)(param_1 + 0x20) >> 1;
}


// ===== 009b7b9c  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_owned */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_owned
          (undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  long *local_18;
  
  puVar1 = (ulong *)(param_2 + 6);
  uVar4 = *puVar1;
  do {
    if ((uVar4 & 1) != 0) {
      uVar6 = 0;
LAB_009b7c08:
      *(undefined1 *)(param_1 + 1) = uVar6;
      *param_1 = 0;
      do {
        lVar5 = *param_2;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar3) {
          *param_2 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 != 0) {
        return;
      }
      DataMemoryBarrier(2,1);
      local_18 = param_2;
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow(&local_18);
      return;
    }
    if (uVar4 < 2) {
      uVar6 = 1;
      goto LAB_009b7c08;
    }
    while (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *param_1 = param_2;
        *(undefined4 *)(param_1 + 1) = 1;
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  } while( true );
}


// ===== 009b7c3c  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_many_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_many_owned */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_many_owned
          (undefined8 *param_1,long *param_2,uint param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  long *local_18;
  
  puVar1 = (ulong *)(param_2 + 6);
  uVar4 = *puVar1;
  do {
    if ((uVar4 & 1) != 0) {
      uVar6 = 0;
LAB_009b7ca8:
      *(undefined1 *)(param_1 + 1) = uVar6;
      *param_1 = 0;
      do {
        lVar5 = *param_2;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar3) {
          *param_2 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 != 0) {
        return;
      }
      DataMemoryBarrier(2,1);
      local_18 = param_2;
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow(&local_18);
      return;
    }
    if (uVar4 < (ulong)param_3 * 2) {
      uVar6 = 1;
      goto LAB_009b7ca8;
    }
    while (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + (ulong)param_3 * -2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *param_1 = param_2;
        *(uint *)(param_1 + 1) = param_3;
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  } while( true );
}


// ===== 009b7cdc  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::new */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::new(undefined8 *param_1,ulong param_2)

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


// ===== 009b7d34  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::close =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::close */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::close(char *param_1,undefined8 param_2)

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


// ===== 009b7d38  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::const_new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::const_new */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::const_new
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


// ===== 009b7d78  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::is_closed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::is_closed */

uint __rustcall <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::is_closed(long param_1)

{
  return (uint)*(undefined8 *)(param_1 + 0x20) & 1;
}


// ===== 009b7d88  FUN_009b7d88 =====

void FUN_009b7d88(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2[2] != 0) {
    lVar3 = param_2[1];
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = lVar3;
    *param_1 = 1;
    return;
  }
  if (param_2[3] != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cb00,0x25,&PTR_s__root__cargo_registry_src_index__00af5818);
  }
  lVar3 = *param_2;
  uVar1 = param_2[1];
  uVar5 = *(ulong *)(lVar3 + 0x408);
  if (uVar5 == 0) {
    uVar5 = *(ulong *)(lVar3 + 0x818);
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(lVar3 + 0xc28);
      if (uVar5 == 0) {
        uVar5 = *(ulong *)(lVar3 + 0x1038);
        if (uVar5 == 0) {
          uVar5 = *(ulong *)(lVar3 + 0x1448);
          if (uVar5 == 0) {
            *param_1 = 0;
            FUN_009b40bc(param_1,lVar3 + 0x1450);
            *param_1 = *param_1;
            return;
          }
          uVar4 = *(undefined8 *)(lVar3 + 0x1440);
        }
        else {
          uVar4 = *(undefined8 *)(lVar3 + 0x1030);
        }
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0xc20);
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x810);
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x400);
  }
  if ((uint)uVar4 < 0xb) {
    uVar6 = (ulong)((uint)uVar4 * 6);
    uVar7 = uVar1 >> (uVar6 & 0x3f);
    uVar2 = uVar7 & 0x3f;
    uVar5 = uVar5 >> uVar2 | uVar5 << 0x40 - uVar2;
    uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    lVar8 = 0x40L << (uVar6 & 0x3f);
    uVar5 = (ulong)(uint)((int)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) + (int)uVar7) & 0x3f;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    uVar5 = (uVar5 << (uVar6 & 0x3f)) + (uVar1 & -lVar8);
    lVar3 = 0;
    if (uVar5 <= uVar1) {
      lVar3 = lVar8;
    }
    param_1[3] = lVar3 + uVar5;
    *param_1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_const::panic_const_div_by_zero
            (&PTR_s__root__cargo_registry_src_index__00af5538);
}


// ===== 009b7ecc  FUN_009b7ecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009b7ecc(undefined8 *param_1)

{
  undefined8 uVar1;
  void *__s;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __s = (void *)FUN_004b25a4(0x1860,8);
  if (__s != (void *)0x0) {
    memset(__s,0,0x810);
    *(undefined8 *)((long)__s + 0x810) = 1;
    memset((void *)((long)__s + 0x818),0,0x408);
    *(undefined8 *)((long)__s + 0xc20) = 2;
    memset((void *)((long)__s + 0xc28),0,0x408);
    *(undefined8 *)((long)__s + 0x1030) = 3;
    memset((void *)((long)__s + 0x1038),0,0x408);
    *(undefined8 *)((long)__s + 0x1440) = 4;
    memset((void *)((long)__s + 0x1448),0,0x408);
    *param_1 = __s;
    param_1[1] = 0;
    uVar1 = _DAT_0029f320;
    *(undefined8 *)((long)__s + 0x1858) = _UNK_0029f328;
    *(undefined8 *)((long)__s + 0x1850) = uVar1;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x1860);
}


// ===== 009b7f94  FUN_009b7f94 =====

void FUN_009b7f94(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong *puVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  bool bVar11;
  uint local_a0 [2];
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong *local_80;
  code *pcStack_78;
  ulong *local_70;
  code *pcStack_68;
  ulong local_48;
  
  plVar5 = (long *)param_1[3];
  if (plVar5 == (long *)0x0) {
    puVar1 = (ulong *)(param_1 + 1);
    do {
      FUN_009b7d88(local_a0,param_1);
      if (((local_a0[0] & 1) == 0) || (param_2 < local_88)) {
        local_48 = param_2;
        if (param_2 < *puVar1) {
code_r0x009b8258:
          local_70 = &local_48;
          pcStack_78 = FUN_009bc270;
          pcStack_68 = FUN_009bc270;
          local_80 = puVar1;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002a520d,&local_80,&PTR_s__root__cargo_registry_src_index__00af5800);
        }
        if (*puVar1 < param_2) {
          *puVar1 = param_2;
        }
        plVar5 = (long *)param_1[3];
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar5;
        param_1[3] = lVar6;
        goto joined_r0x009b81f0;
      }
      if (5 < local_98) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (local_98,6,&PTR_s__root__cargo_registry_src_index__00af5830);
      }
      lVar6 = *param_1 + local_98 * 0x410;
      *(ulong *)(lVar6 + 0x408) =
           *(ulong *)(lVar6 + 0x408) & (1L << (local_90 & 0x3f) ^ 0xffffffffffffffffU);
      if (0x3f < local_90) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (local_90,0x40,&PTR_s__root__cargo_registry_src_index__00af5848);
      }
      puVar2 = (undefined8 *)(lVar6 + local_90 * 0x10);
      puVar7 = (ulong *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
joined_r0x009b805c:
      puVar4 = puVar7;
      if (puVar4 != (ulong *)0x0) {
        puVar7 = (ulong *)*puVar4;
        if (puVar7 != (ulong *)0x0) {
          puVar7[1] = 0;
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar9 = puVar4 + 3;
        uVar8 = puVar4[3];
        do {
          if (0xfffffffffffffffd < uVar8) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0037c8fd,0x7f,&PTR_s__root__cargo_registry_src_index__00af5550);
          }
          if (local_88 < uVar8) {
            puVar4[2] = uVar8;
            uVar8 = uVar8 ^ local_88 | 0x3f;
            if (0xffffffffd < uVar8) {
              uVar8 = 0xffffffffe;
            }
            uVar10 = (ulong)((uint)(LZCOUNT(uVar8) ^ 0x3eU) / 6);
            if (0x23 < (LZCOUNT(uVar8) ^ 0x3eU)) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar10,6,&PTR_s__root__cargo_registry_src_index__00af5860);
            }
            lVar6 = *param_1 + uVar10 * 0x410;
            uVar8 = puVar4[2] >> (((ulong)(uint)(*(int *)(lVar6 + 0x400) * 3) & 0x1f) << 1) & 0x3f;
            puVar2 = (undefined8 *)(lVar6 + uVar8 * 0x10);
            puVar9 = (ulong *)*puVar2;
            if (puVar9 == puVar4) {
              local_80 = puVar4;
              core[bcece726f298455b]::panicking::assert_failed::
              <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>>
                        (1,puVar2,&local_80,0,param_5,
                         &PTR_s__root__cargo_registry_src_index__00af47e0);
              goto LAB_009b8238;
            }
            *puVar4 = 0;
            puVar4[1] = (ulong)puVar9;
            if (puVar9 != (ulong *)0x0) {
              *puVar9 = (ulong)puVar4;
            }
            *puVar2 = puVar4;
            if (puVar2[1] == 0) {
              puVar2[1] = puVar4;
            }
            *(ulong *)(lVar6 + 0x408) = *(ulong *)(lVar6 + 0x408) | 1L << uVar8;
            local_80 = puVar4;
            goto joined_r0x009b805c;
          }
          uVar10 = *puVar9;
          if (uVar10 == uVar8) {
            cVar3 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar11) {
              *puVar9 = 0xfffffffffffffffe;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
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
          uVar8 = uVar10;
        } while (!bVar11);
        puVar4[2] = 0xffffffffffffffff;
        puVar9 = (ulong *)param_1[2];
        local_80 = puVar4;
        if (puVar9 == puVar4) {
LAB_009b8238:
          core[bcece726f298455b]::panicking::assert_failed::
          <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>>
                    (1,param_1 + 2,&local_80,0,param_5,
                     &PTR_s__root__cargo_registry_src_index__00af47e0);
          goto code_r0x009b8258;
        }
        *puVar4 = 0;
        puVar4[1] = (ulong)puVar9;
        if (puVar9 != (ulong *)0x0) {
          *puVar9 = (ulong)puVar4;
        }
        param_1[2] = (long)puVar4;
        if (param_1[3] == 0) {
          param_1[3] = (long)puVar4;
        }
        goto joined_r0x009b805c;
      }
      local_48 = local_88;
      if (local_88 < *puVar1) goto code_r0x009b8258;
      if (*puVar1 < local_88) {
        *puVar1 = local_88;
      }
      plVar5 = (long *)param_1[3];
      local_48 = local_88;
    } while (plVar5 == (long *)0x0);
  }
  lVar6 = *plVar5;
  param_1[3] = lVar6;
joined_r0x009b81f0:
  if (lVar6 == 0) {
    param_1[2] = 0;
  }
  else {
    *(undefined8 *)(lVar6 + 8) = 0;
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  return;
}


// ===== 009b82b0  FUN_009b82b0 =====

undefined1  [16]
FUN_009b82b0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 *local_18;
  
  uVar5 = param_2[3];
  if (uVar5 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0037c93c,0x13,&PTR_s__root__cargo_registry_src_index__00af5568)
    ;
  }
  param_2[2] = uVar5;
  if ((ulong)param_1[1] < uVar5) {
    uVar3 = param_1[1] ^ uVar5 | 0x3f;
    if (0xffffffffd < uVar3) {
      uVar3 = 0xffffffffe;
    }
    uVar4 = (ulong)((uint)(LZCOUNT(uVar3) ^ 0x3eU) / 6);
    if ((LZCOUNT(uVar3) ^ 0x3eU) < 0x24) {
      lVar6 = *param_1 + uVar4 * 0x410;
      uVar3 = (ulong)param_2[2] >> (((ulong)(uint)(*(int *)(lVar6 + 0x400) * 3) & 0x1f) << 1) & 0x3f
      ;
      puVar1 = (undefined8 *)(lVar6 + uVar3 * 0x10);
      puVar7 = (undefined8 *)*puVar1;
      if (puVar7 != param_2) {
        *param_2 = 0;
        param_2[1] = puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = param_2;
        }
        *puVar1 = param_2;
        if (puVar1[1] == 0) {
          puVar1[1] = param_2;
        }
        *(ulong *)(lVar6 + 0x408) = *(ulong *)(lVar6 + 0x408) | 1L << uVar3;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar5;
        return auVar2 << 0x40;
      }
      local_18 = param_2;
      core[bcece726f298455b]::panicking::assert_failed::
      <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>>
                (1,puVar1,&local_18,0,param_5,&PTR_s__root__cargo_registry_src_index__00af47e0);
      uVar4 = extraout_x8;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar4,6,&PTR_s__root__cargo_registry_src_index__00af5878);
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = 1;
  return auVar8;
}


// ===== 009b83dc  FUN_009b83dc =====

void FUN_009b83dc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2[2] == 0xffffffffffffffff) {
    if (*param_2 == 0) {
      if ((long *)param_1[2] != param_2) {
        return;
      }
      plVar4 = (long *)param_2[1];
      param_1[2] = (long)plVar4;
    }
    else {
      plVar4 = (long *)param_2[1];
      *(long **)(*param_2 + 8) = plVar4;
    }
    if (plVar4 == (long *)0x0) {
      if ((long *)param_1[3] != param_2) {
        return;
      }
      param_1[3] = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    *plVar4 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  uVar1 = param_1[1] ^ param_2[2] | 0x3f;
  if (0xffffffffd < uVar1) {
    uVar1 = 0xffffffffe;
  }
  uVar2 = (ulong)((uint)(LZCOUNT(uVar1) ^ 0x3eU) / 6);
  if (0x23 < (LZCOUNT(uVar1) ^ 0x3eU)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar2,6,&PTR_s__root__cargo_registry_src_index__00af5890);
  }
  lVar3 = *param_1 + uVar2 * 0x410;
  uVar1 = (ulong)param_2[2] >> (((ulong)(uint)(*(int *)(lVar3 + 0x400) * 3) & 0x1f) << 1) & 0x3f;
  plVar4 = (long *)(lVar3 + uVar1 * 0x10);
  if (*param_2 == 0) {
    if ((long *)*plVar4 != param_2) {
      if ((long *)*plVar4 != (long *)0x0) {
        return;
      }
      goto LAB_009b8508;
    }
    plVar5 = (long *)param_2[1];
    *plVar4 = (long)plVar5;
    if (plVar5 == (long *)0x0) goto LAB_009b84f4;
LAB_009b8460:
    *plVar5 = *param_2;
LAB_009b8468:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar5 = (long *)param_2[1];
    *(long **)(*param_2 + 8) = plVar5;
    if (plVar5 != (long *)0x0) goto LAB_009b8460;
LAB_009b84f4:
    if ((long *)plVar4[1] == param_2) {
      plVar4[1] = *param_2;
      goto LAB_009b8468;
    }
  }
  if (*plVar4 != 0) {
    return;
  }
LAB_009b8508:
  if (plVar4[1] == 0) {
    *(ulong *)(lVar3 + 0x408) = *(ulong *)(lVar3 + 0x408) ^ 1L << uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037c8d8,0x25,&PTR_s__root__cargo_registry_src_index__00af5520);
}


// ===== 009b8564  <tokio::sync::semaphore::[0]::tokio::sync::semaphore::OwnedSemaphorePermit>::merge =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::[0]::tokio::sync::semaphore::OwnedSemaphorePermit>::merge */

void __rustcall
<tokio::sync::semaphore::[0]::tokio::sync::semaphore::OwnedSemaphorePermit>::merge
          (undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *local_30;
  int local_28;
  
  local_30 = param_2;
  if ((long *)*param_1 == param_2) {
    local_28 = 0;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + param_3;
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow(&local_30);
    }
    return;
  }
  local_28 = param_3;
                    /* try { // try from 009b85c8 to 009b85db has its CatchHandler @ 009b85e0 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037cb25,0x65,param_4);
}


// ===== 009b85f8  <tokio::sync::semaphore::[0]::tokio::sync::semaphore::OwnedSemaphorePermit>::forget =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::[0]::tokio::sync::semaphore::OwnedSemaphorePermit>::forget */

void __rustcall
<tokio::sync::semaphore::[0]::tokio::sync::semaphore::OwnedSemaphorePermit>::forget(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *local_20;
  undefined4 local_18;
  
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow(&local_20);
  }
  return;
}


// ===== 009b8638  FUN_009b8638 =====

void FUN_009b8638(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_190;
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
  uint uStack_b4;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8734);
      (*pcVar3)();
    }
  }
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  uVar11 = param_1[5];
  uVar10 = param_1[4];
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
    puVar4[9] = uVar7;
    puVar4[8] = uVar6;
    puVar4[0xb] = uVar9;
    puVar4[10] = uVar8;
    puVar4[0xd] = uVar11;
    puVar4[0xc] = uVar10;
    puVar4[0xf] = 0;
    puVar4[0xe] = uStack_190;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_00975518_00af58a8;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_b4 << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8724 to 009b872f has its CatchHandler @ 009b8734 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b874c  FUN_009b874c =====

void FUN_009b874c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_190;
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
  uint uStack_b4;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8848);
      (*pcVar3)();
    }
  }
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  uVar11 = param_1[5];
  uVar10 = param_1[4];
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
    puVar4[9] = uVar7;
    puVar4[8] = uVar6;
    puVar4[0xb] = uVar9;
    puVar4[10] = uVar8;
    puVar4[0xd] = uVar11;
    puVar4[0xc] = uVar10;
    puVar4[0xf] = 0;
    puVar4[0xe] = uStack_190;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_00976788_00af5948;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_b4 << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8838 to 009b8843 has its CatchHandler @ 009b8848 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b8860  FUN_009b8860 =====

void FUN_009b8860(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8964);
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
    puVar4[2] = &PTR_thunk_FUN_009770c4_00af5998;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_bc << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8954 to 009b895f has its CatchHandler @ 009b8964 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b897c  FUN_009b897c =====

void FUN_009b897c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8a80);
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
    puVar4[2] = &PTR_thunk_FUN_00977a00_00af59e8;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_bc << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8a70 to 009b8a7b has its CatchHandler @ 009b8a80 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b8a98  FUN_009b8a98 =====

void FUN_009b8a98(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8b9c);
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
    puVar4[2] = &PTR_thunk_FUN_0097823c_00af5a38;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_bc << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8b8c to 009b8b97 has its CatchHandler @ 009b8b9c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b8bb4  FUN_009b8bb4 =====

void FUN_009b8bb4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_190;
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
  uint uStack_b4;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8cb0);
      (*pcVar3)();
    }
  }
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  uVar11 = param_1[5];
  uVar10 = param_1[4];
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
    puVar4[9] = uVar7;
    puVar4[8] = uVar6;
    puVar4[0xb] = uVar9;
    puVar4[10] = uVar8;
    puVar4[0xd] = uVar11;
    puVar4[0xc] = uVar10;
    puVar4[0xf] = 0;
    puVar4[0xe] = uStack_190;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_00978b78_00af5a88;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_b4 << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8ca0 to 009b8cab has its CatchHandler @ 009b8cb0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b8cc8  FUN_009b8cc8 =====

void FUN_009b8cc8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_198;
  undefined8 uStack_190;
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
  uint uStack_ac;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8dbc);
      (*pcVar3)();
    }
  }
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  uVar6 = param_1[4];
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
    puVar4[0xd] = uStack_198;
    puVar4[0xc] = uVar6;
    puVar4[0xf] = 0;
    puVar4[0xe] = uStack_190;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_009793b4_00af5ad8;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_ac << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8dac to 009b8db7 has its CatchHandler @ 009b8dbc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b8dd4  FUN_009b8dd4 =====

void FUN_009b8dd4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_198;
  undefined8 uStack_190;
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
  uint uStack_ac;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8ec8);
      (*pcVar3)();
    }
  }
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  uVar6 = param_1[4];
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
    puVar4[0xd] = uStack_198;
    puVar4[0xc] = uVar6;
    puVar4[0xf] = 0;
    puVar4[0xe] = uStack_190;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_00979bf0_00af5b28;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_ac << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8eb8 to 009b8ec3 has its CatchHandler @ 009b8ec8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b8ee0  FUN_009b8ee0 =====

void FUN_009b8ee0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_198;
  undefined8 uStack_190;
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
  uint uStack_ac;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b8fd4);
      (*pcVar3)();
    }
  }
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  uVar6 = param_1[4];
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
    puVar4[0xd] = uStack_198;
    puVar4[0xc] = uVar6;
    puVar4[0xf] = 0;
    puVar4[0xe] = uStack_190;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_0097a42c_00af5b78;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_ac << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b8fc4 to 009b8fcf has its CatchHandler @ 009b8fd4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b8fec  FUN_009b8fec =====

void FUN_009b8fec(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_198;
  undefined8 uStack_190;
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
  uint uStack_ac;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b90e0);
      (*pcVar3)();
    }
  }
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  uVar6 = param_1[4];
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
    puVar4[0xd] = uStack_198;
    puVar4[0xc] = uVar6;
    puVar4[0xf] = 0;
    puVar4[0xe] = uStack_190;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_0097ac68_00af5bc8;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_ac << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b90d0 to 009b90db has its CatchHandler @ 009b90e0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b90f8  FUN_009b90f8 =====

void FUN_009b90f8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_180;
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
  uint uStack_9c;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b91e4);
      (*pcVar3)();
    }
  }
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar6 = param_1[2];
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
    puVar4[0x11] = param_2;
    puVar4[0x10] = local_180;
    puVar4[0x13] = uStack_168;
    puVar4[0x12] = param_3;
    puVar4[0x15] = uStack_158;
    puVar4[0x14] = local_160;
    puVar4[0x17] = uStack_148;
    puVar4[0x16] = uStack_150;
    puVar4[9] = uVar8;
    puVar4[8] = uVar7;
    puVar4[0xb] = uStack_1a8;
    puVar4[10] = uVar6;
    puVar4[0xd] = 0;
    puVar4[0xc] = local_1a0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_0097b57c_00af5c18;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_9c << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b91d4 to 009b91df has its CatchHandler @ 009b91e4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b91fc  FUN_009b91fc =====

void FUN_009b91fc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 local_1a0;
  undefined8 local_180;
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
  uint uStack_a4;
  
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9b92e8);
      (*pcVar3)();
    }
  }
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
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
    puVar4[0x11] = param_2;
    puVar4[0x10] = local_180;
    puVar4[0x13] = uStack_168;
    puVar4[0x12] = param_3;
    puVar4[0x15] = uStack_158;
    puVar4[0x14] = local_160;
    puVar4[0x17] = uStack_148;
    puVar4[0x16] = uStack_150;
    puVar4[9] = uVar7;
    puVar4[8] = uVar6;
    puVar4[0xb] = uVar9;
    puVar4[10] = uVar8;
    puVar4[0xd] = 0;
    puVar4[0xc] = local_1a0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_0097bd98_00af5c68;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_a4 << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 009b92d8 to 009b92e3 has its CatchHandler @ 009b92e8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 009b9300  <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter */

undefined8 __rustcall
<tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
          (undefined8 param_1)

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


// ===== 009b9390  FUN_009b9390 =====

void FUN_009b9390(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009b9434;
LAB_009b93ec:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009b93f0;
LAB_009b9448:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009b93ec;
LAB_009b9434:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009b9448;
LAB_009b93f0:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009b944c to 009b945b has its CatchHandler @ 009b9624 */
  FUN_009b4c48(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009b956c;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009b956c;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009b956c:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != -1) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009b9574 to 009b95a3 has its CatchHandler @ 009b95e4 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009b94c8 to 009b94cf has its CatchHandler @ 009b95f4 */
    FUN_009b6a98(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009b95a8 to 009b95d7 has its CatchHandler @ 009b95dc */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009b963c  FUN_009b963c =====

void FUN_009b963c(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar4 == 0) {
                    /* try { // try from 009b96ec to 009b971b has its CatchHandler @ 009b9758 */
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
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x30) = uVar6;
  }
                    /* try { // try from 009b9694 to 009b969b has its CatchHandler @ 009b9768 */
  FUN_009b6a98(param_1 + 0x18);
  uVar6 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  uVar4 = *(ulong *)puVar1;
  if (uVar4 == 0) {
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009b9750;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009b9750;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar4 & 0xffffffff,puVar3,0);
joined_r0x009b9750:
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
  }
  return;
}


// ===== 009b9798  FUN_009b9798 =====

int FUN_009b9798(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar5 = (int *)(param_1 + 0x18);
  if (*piVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto LAB_009b97ec;
LAB_009b9834:
    puVar3 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar3,0);
    if (puVar3 != (undefined1 *)0x0) goto LAB_009b97f0;
LAB_009b9848:
    uVar7 = 0;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (puVar3 <= &DAT_00000001) goto LAB_009b9834;
LAB_009b97ec:
    if (puVar3 == (undefined1 *)0x0) goto LAB_009b9848;
LAB_009b97f0:
    uVar7 = *(undefined8 *)(puVar3 + 0x30);
    *(undefined8 *)(puVar3 + 0x30) = uVar8;
  }
                    /* try { // try from 009b984c to 009b9857 has its CatchHandler @ 009b99e0 */
  iVar2 = FUN_009b4d7c(param_1 + 0x20,param_2);
  uVar6 = *(ulong *)puVar1;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (puVar3 <= &DAT_00000001) goto LAB_009b9930;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (puVar3 <= &DAT_00000001) {
LAB_009b9930:
      puVar3 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar3,0);
    }
  }
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar7;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(ulong *)puVar1;
  if (uVar6 == 0) {
                    /* try { // try from 009b9948 to 009b9977 has its CatchHandler @ 009b99b4 */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
  }
  if (pvVar4 < (void *)0x2) {
    pvVar4 = (void *)FUN_00996984(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)((long)pvVar4 + 0x30);
    *(undefined8 *)((long)pvVar4 + 0x30) = uVar8;
  }
                    /* try { // try from 009b98c0 to 009b98c7 has its CatchHandler @ 009b99c4 */
  FUN_009b6b54(piVar5);
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(ulong *)piVar5 = CONCAT44(uStack_5c,2);
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  uVar6 = *(ulong *)puVar1;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009b98ec;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009b98ec;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar3,0);
joined_r0x009b98ec:
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar7;
  }
  return 0;
}


// ===== 009b99f8  FUN_009b99f8 =====

void FUN_009b99f8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar4 == 0) {
                    /* try { // try from 009b9a9c to 009b9acb has its CatchHandler @ 009b9b08 */
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
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x30) = uVar6;
  }
                    /* try { // try from 009b9a50 to 009b9a57 has its CatchHandler @ 009b9b18 */
  FUN_009b6b54(param_1 + 0x18);
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar4 = *(ulong *)puVar1;
  if (uVar4 == 0) {
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009b9b00;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009b9b00;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar4 & 0xffffffff,puVar3,0);
joined_r0x009b9b00:
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
  }
  return;
}


// ===== 009b9b3c  FUN_009b9b3c =====

void FUN_009b9b3c(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009b9be0;
LAB_009b9b98:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009b9b9c;
LAB_009b9bf4:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009b9b98;
LAB_009b9be0:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009b9bf4;
LAB_009b9b9c:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009b9bf8 to 009b9c07 has its CatchHandler @ 009b9dd0 */
  FUN_009b4e60(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009b9d18;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009b9d18;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009b9d18:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != 2) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009b9d20 to 009b9d4f has its CatchHandler @ 009b9d90 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009b9c74 to 009b9c7b has its CatchHandler @ 009b9da0 */
    FUN_009b6c0c(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009b9d54 to 009b9d83 has its CatchHandler @ 009b9d88 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009b9de8  FUN_009b9de8 =====

void FUN_009b9de8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar4 == 0) {
                    /* try { // try from 009b9e98 to 009b9ec7 has its CatchHandler @ 009b9f04 */
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
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x30) = uVar6;
  }
                    /* try { // try from 009b9e40 to 009b9e47 has its CatchHandler @ 009b9f14 */
  FUN_009b6c0c(param_1 + 0x18);
  uVar6 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  uVar4 = *(ulong *)puVar1;
  if (uVar4 == 0) {
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009b9efc;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009b9efc;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar4 & 0xffffffff,puVar3,0);
joined_r0x009b9efc:
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
  }
  return;
}


// ===== 009b9f44  FUN_009b9f44 =====

void FUN_009b9f44(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009b9fe8;
LAB_009b9fa0:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009b9fa4;
LAB_009b9ffc:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009b9fa0;
LAB_009b9fe8:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009b9ffc;
LAB_009b9fa4:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009ba000 to 009ba00f has its CatchHandler @ 009ba1d8 */
  FUN_009b4f8c(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009ba120;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009ba120;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009ba120:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != -1) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009ba128 to 009ba157 has its CatchHandler @ 009ba198 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009ba07c to 009ba083 has its CatchHandler @ 009ba1a8 */
    FUN_009b6d3c(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009ba15c to 009ba18b has its CatchHandler @ 009ba190 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009ba1f0  FUN_009ba1f0 =====

void FUN_009ba1f0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar4 == 0) {
                    /* try { // try from 009ba2a0 to 009ba2cf has its CatchHandler @ 009ba30c */
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
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x30) = uVar6;
  }
                    /* try { // try from 009ba248 to 009ba24f has its CatchHandler @ 009ba31c */
  FUN_009b6d3c(param_1 + 0x18);
  uVar6 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  uVar4 = *(ulong *)puVar1;
  if (uVar4 == 0) {
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ba304;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ba304;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar4 & 0xffffffff,puVar3,0);
joined_r0x009ba304:
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
  }
  return;
}


// ===== 009ba34c  FUN_009ba34c =====

void FUN_009ba34c(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009ba3f0;
LAB_009ba3a8:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009ba3ac;
LAB_009ba404:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009ba3a8;
LAB_009ba3f0:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009ba404;
LAB_009ba3ac:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009ba408 to 009ba417 has its CatchHandler @ 009ba5e0 */
  FUN_009b5110(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009ba528;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009ba528;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009ba528:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != -1) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009ba530 to 009ba55f has its CatchHandler @ 009ba5a0 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009ba484 to 009ba48b has its CatchHandler @ 009ba5b0 */
    FUN_009b6e44(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009ba564 to 009ba593 has its CatchHandler @ 009ba598 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009ba5f8  FUN_009ba5f8 =====

void FUN_009ba5f8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar4 == 0) {
                    /* try { // try from 009ba6a8 to 009ba6d7 has its CatchHandler @ 009ba714 */
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
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x30) = uVar6;
  }
                    /* try { // try from 009ba650 to 009ba657 has its CatchHandler @ 009ba724 */
  FUN_009b6e44(param_1 + 0x18);
  uVar6 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  uVar4 = *(ulong *)puVar1;
  if (uVar4 == 0) {
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ba70c;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ba70c;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar4 & 0xffffffff,puVar3,0);
joined_r0x009ba70c:
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
  }
  return;
}


// ===== 009ba754  FUN_009ba754 =====

void FUN_009ba754(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009ba7f8;
LAB_009ba7b0:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009ba7b4;
LAB_009ba80c:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009ba7b0;
LAB_009ba7f8:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009ba80c;
LAB_009ba7b4:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009ba810 to 009ba81f has its CatchHandler @ 009ba9e8 */
  FUN_009b5110(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009ba930;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009ba930;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009ba930:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != -1) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009ba938 to 009ba967 has its CatchHandler @ 009ba9a8 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009ba88c to 009ba893 has its CatchHandler @ 009ba9b8 */
    FUN_009b6e44(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009ba96c to 009ba99b has its CatchHandler @ 009ba9a0 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009baa00  FUN_009baa00 =====

void FUN_009baa00(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009baaa4;
LAB_009baa5c:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009baa60;
LAB_009baab8:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009baa5c;
LAB_009baaa4:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009baab8;
LAB_009baa60:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009baabc to 009baacb has its CatchHandler @ 009bac94 */
  FUN_009b52e0(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009babdc;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009babdc;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009babdc:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != -1) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009babe4 to 009bac13 has its CatchHandler @ 009bac54 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009bab38 to 009bab3f has its CatchHandler @ 009bac64 */
    FUN_009b6f4c(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bac18 to 009bac47 has its CatchHandler @ 009bac4c */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009bacac  FUN_009bacac =====

void FUN_009bacac(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar4 == 0) {
                    /* try { // try from 009bad5c to 009bad8b has its CatchHandler @ 009badc8 */
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
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x30) = uVar6;
  }
                    /* try { // try from 009bad04 to 009bad0b has its CatchHandler @ 009badd8 */
  FUN_009b6f4c(param_1 + 0x18);
  uVar6 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  uVar4 = *(ulong *)puVar1;
  if (uVar4 == 0) {
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009badc0;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar4);
    if (&DAT_00000001 < puVar3) goto joined_r0x009badc0;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar4 & 0xffffffff,puVar3,0);
joined_r0x009badc0:
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
  }
  return;
}


// ===== 009bae08  FUN_009bae08 =====

void FUN_009bae08(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009baeac;
LAB_009bae64:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009bae68;
LAB_009baec0:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009bae64;
LAB_009baeac:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009baec0;
LAB_009bae68:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009baec4 to 009baed3 has its CatchHandler @ 009bb09c */
  FUN_009b5454(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bafe4;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bafe4;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009bafe4:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != 2) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bafec to 009bb01b has its CatchHandler @ 009bb05c */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009baf40 to 009baf47 has its CatchHandler @ 009bb06c */
    FUN_009b6c0c(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bb020 to 009bb04f has its CatchHandler @ 009bb054 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009bb0b4  FUN_009bb0b4 =====

void FUN_009bb0b4(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009bb158;
LAB_009bb110:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009bb114;
LAB_009bb16c:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009bb110;
LAB_009bb158:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009bb16c;
LAB_009bb114:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009bb170 to 009bb17f has its CatchHandler @ 009bb348 */
  FUN_009b5594(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bb290;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bb290;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009bb290:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != 2) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bb298 to 009bb2c7 has its CatchHandler @ 009bb308 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009bb1ec to 009bb1f3 has its CatchHandler @ 009bb318 */
    FUN_009b6c0c(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bb2cc to 009bb2fb has its CatchHandler @ 009bb300 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009bb360  FUN_009bb360 =====

void FUN_009bb360(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009bb404;
LAB_009bb3bc:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009bb3c0;
LAB_009bb418:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009bb3bc;
LAB_009bb404:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009bb418;
LAB_009bb3c0:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009bb41c to 009bb42b has its CatchHandler @ 009bb5f4 */
  FUN_009b5718(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bb53c;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bb53c;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009bb53c:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != 2) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bb544 to 009bb573 has its CatchHandler @ 009bb5b4 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009bb498 to 009bb49f has its CatchHandler @ 009bb5c4 */
    FUN_009b6c0c(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bb578 to 009bb5a7 has its CatchHandler @ 009bb5ac */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009bb60c  FUN_009bb60c =====

void FUN_009bb60c(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  piVar4 = (int *)(param_2 + 0x18);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_009bb6b0;
LAB_009bb668:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009bb66c;
LAB_009bb6c4:
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_009bb668;
LAB_009bb6b0:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009bb6c4;
LAB_009bb66c:
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
  }
                    /* try { // try from 009bb6c8 to 009bb6d7 has its CatchHandler @ 009bb8a0 */
  FUN_009b5858(&local_c8,param_2 + 0x20,param_3);
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bb7e8;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bb7e8;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x009bb7e8:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
  }
  if (local_c8 != 2) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    local_90 = 2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bb7f0 to 009bb81f has its CatchHandler @ 009bb860 */
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
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar3 + 0x30);
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar7;
    }
                    /* try { // try from 009bb744 to 009bb74b has its CatchHandler @ 009bb870 */
    FUN_009b6c0c(piVar4);
    *(undefined8 *)(param_2 + 0x20) = uStack_88;
    *(ulong *)piVar4 = CONCAT44(uStack_8c,local_90);
    *(undefined8 *)(param_2 + 0x30) = uStack_78;
    *(undefined8 *)(param_2 + 0x28) = uStack_80;
    *(undefined8 *)(param_2 + 0x40) = uStack_68;
    *(undefined8 *)(param_2 + 0x38) = local_70;
    *(undefined8 *)(param_2 + 0x50) = uStack_58;
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) {
                    /* try { // try from 009bb824 to 009bb853 has its CatchHandler @ 009bb858 */
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
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x30) = uVar6;
    }
  }
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = local_b8;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[6] = local_98;
  return;
}


// ===== 009bb8b8  FUN_009bb8b8 =====

void FUN_009bb8b8(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined4 local_70 [12];
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (*(int *)(param_2 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (&DAT_00000001 < puVar2) goto LAB_009bb90c;
LAB_009bb954:
    puVar2 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar2,0);
    if (puVar2 != (undefined1 *)0x0) goto LAB_009bb910;
LAB_009bb968:
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (puVar2 <= &DAT_00000001) goto LAB_009bb954;
LAB_009bb90c:
    if (puVar2 == (undefined1 *)0x0) goto LAB_009bb968;
LAB_009bb910:
    uVar4 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar5;
  }
                    /* try { // try from 009bb96c to 009bb97b has its CatchHandler @ 009bba34 */
  FUN_009b59dc(&local_98,param_2 + 0x20,param_3);
  uVar3 = *(ulong *)puVar1;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bb998;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bb998;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar2,0);
joined_r0x009bb998:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar4;
  }
  if (local_98 == 0) {
    local_70[0] = 2;
                    /* try { // try from 009bb9b0 to 009bb9bb has its CatchHandler @ 009bba20 */
    FUN_009bba4c(param_2,local_70);
  }
  param_1[1] = lStack_90;
  *param_1 = local_98;
  param_1[3] = lStack_80;
  param_1[2] = local_88;
  param_1[4] = local_78;
  return;
}


// ===== 009bba4c  FUN_009bba4c =====

void FUN_009bba4c(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
                    /* try { // try from 009bbb34 to 009bbb63 has its CatchHandler @ 009bbba0 */
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar5);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00996984(uVar5 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 == (void *)0x0) {
    uVar6 = 0;
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 == 1) goto LAB_009bbae4;
LAB_009bbaac:
    if (((iVar4 == 0) && (*(long *)(param_1 + 0x20) != -1)) && (*(long *)(param_1 + 0x20) != 0)) {
      free(*(void **)(param_1 + 0x28));
    }
  }
  else {
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x30) = uVar7;
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 != 1) goto LAB_009bbaac;
LAB_009bbae4:
                    /* try { // try from 009bbae4 to 009bbaeb has its CatchHandler @ 009bbbb0 */
    FUN_009b617c(param_1 + 0x20);
  }
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uVar11 = param_2[4];
  *(undefined8 *)(param_1 + 0x40) = param_2[5];
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar3) goto joined_r0x009bbb98;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar3) goto joined_r0x009bbb98;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar3,0);
joined_r0x009bbb98:
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x30) = uVar6;
  }
  return;
}


// ===== 009bbbd8  FUN_009bbbd8 =====

void FUN_009bbbd8(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined4 local_70 [12];
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (*(int *)(param_2 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037caa2,0x75,&PTR_s__root__cargo_registry_src_index__00af5780);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (&DAT_00000001 < puVar2) goto LAB_009bbc2c;
LAB_009bbc74:
    puVar2 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar2,0);
    if (puVar2 != (undefined1 *)0x0) goto LAB_009bbc30;
LAB_009bbc88:
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (puVar2 <= &DAT_00000001) goto LAB_009bbc74;
LAB_009bbc2c:
    if (puVar2 == (undefined1 *)0x0) goto LAB_009bbc88;
LAB_009bbc30:
    uVar4 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar5;
  }
                    /* try { // try from 009bbc8c to 009bbc9b has its CatchHandler @ 009bbd54 */
  FUN_009b5b00(&local_98,param_2 + 0x20,param_3);
  uVar3 = *(ulong *)puVar1;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bbcb8;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (&DAT_00000001 < puVar2) goto joined_r0x009bbcb8;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar2,0);
joined_r0x009bbcb8:
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x30) = uVar4;
  }
  if (local_98 == 0) {
    local_70[0] = 2;
                    /* try { // try from 009bbcd0 to 009bbcdb has its CatchHandler @ 009bbd40 */
    FUN_009bba4c(param_2,local_70);
  }
  param_1[1] = lStack_90;
  *param_1 = local_98;
  param_1[3] = lStack_80;
  param_1[2] = local_88;
  param_1[4] = local_78;
  return;
}


// ===== 009bbd6c  FUN_009bbd6c =====

void FUN_009bbd6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (param_2[2] == 0) {
    puVar4 = (undefined8 *)param_2[5];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_78 = (undefined8 *)FUN_004b25a4(0x170,0x10);
    if (local_78 == (undefined8 *)0x0) {
                    /* try { // try from 009bbe50 to 009bbe5b has its CatchHandler @ 009bbe60 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(0x10,0x170);
    }
    local_78[0x2c] = 0;
    local_70 = 0;
    uStack_68 = 0;
    *puVar4 = local_78;
    puVar4[1] = 0;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *(undefined2 *)((long)local_78 + 0x16a) = 1;
    local_78[0x16] = param_3;
    local_78[0x17] = param_4;
    *local_78 = uVar1;
    local_78[1] = uVar2;
  }
  else {
    uStack_58 = param_2[3];
    local_60 = param_2[2];
    local_50 = param_2[4];
    FUN_009bc288(&local_78,&local_60,param_3,*param_2,param_2[1],param_3,param_4,param_2 + 5,
                 param_2 + 6);
    puVar4 = (undefined8 *)param_2[5];
  }
  lVar3 = puVar4[2];
  *param_1 = local_78;
  param_1[2] = uStack_68;
  param_1[1] = local_70;
  puVar4[2] = lVar3 + 1;
  param_1[3] = param_2[5];
  return;
}


// ===== 009bbe90  <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker */

void __rustcall
<tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 009bbebc to 009bbebf has its CatchHandler @ 009bbed4 */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}


// ===== 009bbedc  <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join */

void __rustcall
<tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009bbeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(undefined8 *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
}


// ===== 009bbf10  <tokio::sync::semaphore::tokio::sync::semaphore::SemaphorePermit>::merge =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::SemaphorePermit>::merge */

void __rustcall
<tokio::sync::semaphore::tokio::sync::semaphore::SemaphorePermit>::merge
          (long *param_1,long param_2,int param_3,undefined8 param_4)

{
  if (*param_1 == param_2) {
    *(int *)(param_1 + 1) = (int)param_1[1] + param_3;
    return;
  }
                    /* try { // try from 009bbf4c to 009bbf63 has its CatchHandler @ 009bbf68 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037cb25,0x65,param_4);
}


// ===== 009bbf84  <tokio::sync::semaphore::tokio::sync::semaphore::SemaphorePermit>::forget =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::tokio::sync::semaphore::SemaphorePermit>::forget */

void __rustcall <tokio::sync::semaphore::tokio::sync::semaphore::SemaphorePermit>::forget(void)

{
  return;
}


// ===== 009bbf88  tokio::macros::support::thread_rng_n =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::macros::support::thread_rng_n */

ulong __rustcall tokio::macros::support::thread_rng_n(uint param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  lVar2 = FUN_009b2398(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  if ((*(uint *)(lVar2 + 0x38) & 1) == 0) {
    uVar3 = FUN_009c64a0();
    uVar4 = (uint)((ulong)uVar3 >> 0x20);
    uVar1 = (uint)uVar3;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
  }
  else {
    uVar4 = *(uint *)(lVar2 + 0x3c);
    uVar1 = *(uint *)(lVar2 + 0x40);
  }
  uVar4 = uVar4 ^ uVar4 << 0x11;
  uVar4 = uVar1 >> 0x10 ^ uVar4 >> 7 ^ uVar1 ^ uVar4;
  *(undefined4 *)(lVar2 + 0x38) = 1;
  *(uint *)(lVar2 + 0x3c) = uVar1;
  *(uint *)(lVar2 + 0x40) = uVar4;
  return (ulong)(uVar4 + uVar1) * (ulong)param_1 >> 0x20;
}


// ===== 009bc00c  <tokio::sync::semaphore::SemaphorePermit_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::SemaphorePermit as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::sync::semaphore::SemaphorePermit_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    return;
  }
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
    if (bVar3) {
      *pcVar4 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      FUN_009aafdc(pcVar4,iVar1,pcVar4);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar4,iVar1,0xffffffff);
  FUN_009aafdc(pcVar4,iVar1,pcVar4);
  return;
}


// ===== 009bc068  FUN_009bc068 =====

void FUN_009bc068(undefined8 *param_1,long param_2)

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


// ===== 009bc0c0  <tokio::sync::semaphore::OwnedSemaphorePermit_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::semaphore::OwnedSemaphorePermit as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::sync::semaphore::OwnedSemaphorePermit_as_core::ops::drop::Drop>::drop(long *param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 == 0) {
    return;
  }
  pcVar1 = (char *)(*param_1 + 0x10);
  if (*pcVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      FUN_009aafdc(pcVar1,iVar2,pcVar1);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar1,iVar2,0xffffffff);
  FUN_009aafdc(pcVar1,iVar2,pcVar1);
  return;
}


// ===== 009bc120  FUN_009bc120 =====

void FUN_009bc120(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 009bc138 to 009bc13f has its CatchHandler @ 009bc168 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009bc18c  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::core::TaskIdGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar2 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
    if (&DAT_00000001 < puVar1) goto joined_r0x009bc1c0;
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
    if (&DAT_00000001 < puVar1) goto joined_r0x009bc1c0;
  }
  puVar1 = (undefined1 *)FUN_00996984(uVar2 & 0xffffffff,puVar1,0);
joined_r0x009bc1c0:
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar1 + 0x30) = uVar3;
  }
  return;
}


// ===== 009bc20c  <core::task::wake::Waker_as_tokio::sync::task::atomic_waker::WakerRef>::wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::task::wake::Waker as tokio::sync::task::atomic_waker::WakerRef>::wake */

void __rustcall
<core::task::wake::Waker_as_tokio::sync::task::atomic_waker::WakerRef>::wake
          (long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x009bc214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2);
  return;
}


// ===== 009bc218  <&core::task::wake::Waker_as_tokio::sync::task::atomic_waker::WakerRef>::into_waker =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&core::task::wake::Waker as tokio::sync::task::atomic_waker::WakerRef>::into_waker */

void __rustcall
<&core::task::wake::Waker_as_tokio::sync::task::atomic_waker::WakerRef>::into_waker
          (undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bc220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1[1]);
  return;
}


// ===== 009bc224  <&core::task::wake::Waker_as_tokio::sync::task::atomic_waker::WakerRef>::wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&core::task::wake::Waker as tokio::sync::task::atomic_waker::WakerRef>::wake */

void __rustcall
<&core::task::wake::Waker_as_tokio::sync::task::atomic_waker::WakerRef>::wake(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bc22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1[1]);
  return;
}


// ===== 009bc230  FUN_009bc230 =====

void FUN_009bc230(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0037cb57,9,&local_18,&DAT_00af5cd0);
  return;
}


// ===== 009bc270  FUN_009bc270 =====

void FUN_009bc270(undefined8 param_1,long param_2)

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


// ===== 009bc288  FUN_009bc288 =====

void FUN_009bc288(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  void *pvVar7;
  bool bVar8;
  void *__dest;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  void *pvVar15;
  long *plVar16;
  size_t sVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  void *pvVar25;
  void *pvVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong local_140;
  ulong local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  
  pvVar25 = (void *)*param_2;
  uVar4 = *(ushort *)((long)pvVar25 + 0x16a);
  if (uVar4 < 0xb) {
    local_140 = param_2[2];
    if (local_140 + 1 <= (ulong)uVar4) {
      lVar22 = (local_140 + 1) * 0x10;
      sVar17 = (uVar4 - local_140) * 0x10;
      memmove((void *)((long)pvVar25 + lVar22),(void *)((long)pvVar25 + local_140 * 0x10),sVar17);
      memmove((void *)((long)pvVar25 + lVar22 + 0xb0),
              (void *)((long)pvVar25 + local_140 * 0x10 + 0xb0),sVar17);
    }
    puVar9 = (undefined8 *)((long)pvVar25 + local_140 * 0x10);
    uVar13 = param_2[1];
    *puVar9 = param_4;
    puVar9[1] = param_5;
    puVar9[0x16] = param_6;
    puVar9[0x17] = param_7;
    *(ushort *)((long)pvVar25 + 0x16a) = uVar4 + 1;
    pvVar26 = pvVar25;
  }
  else {
    local_140 = param_2[2];
    if (local_140 < 5) {
      bVar8 = false;
      uVar13 = 4;
    }
    else if (local_140 == 5) {
      bVar8 = false;
      uVar13 = 5;
    }
    else if (local_140 == 6) {
      bVar8 = true;
      uVar13 = 5;
      local_140 = 0;
    }
    else {
      local_140 = local_140 - 7;
      bVar8 = true;
      uVar13 = 6;
    }
    local_f0 = param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)FUN_004b25a4(0x170,0x10);
    if (__dest == (void *)0x0) {
                    /* try { // try from 009bc9e8 to 009bc9f3 has its CatchHandler @ 009bcac8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(0x10,0x170);
    }
    *(undefined8 *)((long)__dest + 0x160) = 0;
    uVar20 = (ulong)*(ushort *)((long)pvVar25 + 0x16a) + ~uVar13;
    lVar22 = uVar13 * 0x10;
    *(short *)((long)__dest + 0x16a) = (short)uVar20;
    puVar9 = (undefined8 *)((long)pvVar25 + lVar22 + 0xb0);
    uStack_d8 = puVar9[1];
    local_e0 = *puVar9;
    uVar14 = *(undefined8 *)((long)pvVar25 + lVar22);
    uVar24 = ((undefined8 *)((long)pvVar25 + lVar22))[1];
    if (0xb < uVar20) {
                    /* try { // try from 009bc9d0 to 009bc9e3 has its CatchHandler @ 009bcad0 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar20,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00af5f50);
    }
    memcpy(__dest,(void *)((long)pvVar25 + lVar22 + 0x10),uVar20 * 0x10);
    memcpy((void *)((long)__dest + 0xb0),(void *)((long)pvVar25 + lVar22 + 0xc0),uVar20 * 0x10);
    *(short *)((long)pvVar25 + 0x16a) = (short)uVar13;
    pvVar26 = __dest;
    if (!bVar8) {
      pvVar26 = pvVar25;
    }
    uVar13 = 0;
    if (!bVar8) {
      uVar13 = local_f0;
    }
    uVar4 = *(ushort *)((long)pvVar26 + 0x16a);
    lVar22 = uVar4 - local_140;
    if (local_140 <= uVar4 && lVar22 != 0) {
      lVar18 = local_140 * 0x10;
      sVar17 = lVar22 * 0x10;
      memmove((void *)((long)pvVar26 + lVar18 + 0x10),(void *)((long)pvVar26 + lVar18),sVar17);
      memmove((void *)((long)pvVar26 + lVar18 + 0xc0),(void *)((long)pvVar26 + lVar18 + 0xb0),sVar17
             );
    }
    puVar9 = (undefined8 *)((long)pvVar26 + local_140 * 0x10);
    *puVar9 = param_4;
    puVar9[1] = param_5;
    puVar9[0x16] = param_6;
    puVar9[0x17] = param_7;
    *(ushort *)((long)pvVar26 + 0x16a) = uVar4 + 1;
    if (*(void **)((long)pvVar25 + 0x160) == (void *)0x0) {
      local_f0 = 0;
    }
    else {
      bVar8 = local_f0 == 0;
      pvVar7 = *(void **)((long)pvVar25 + 0x160);
      uVar12 = uVar24;
      pvVar15 = __dest;
      uVar19 = uVar14;
      do {
        pvVar10 = pvVar7;
        uVar4 = *(ushort *)((long)pvVar25 + 0x168);
        uVar20 = (ulong)uVar4;
        if (!bVar8) {
                    /* try { // try from 009bc988 to 009bc99f has its CatchHandler @ 009bcb38 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (local_e0,&DAT_0037cba9,0x35,&PTR_s__nix_store_8006w282fgsx3273c878b_00af5d90);
        }
        uVar5 = *(ushort *)((long)pvVar10 + 0x16a);
        uVar21 = (ulong)uVar5;
        if (uVar5 < 0xb) {
          puVar9 = (undefined8 *)((long)pvVar10 + uVar20 * 0x10);
          uVar23 = uVar20 + 1;
          if (uVar4 < uVar5) {
            lVar22 = uVar20 * 0x10;
            sVar17 = (uVar21 - uVar20) * 0x10;
            memmove((void *)((long)pvVar10 + uVar23 * 0x10),puVar9,sVar17);
            memmove((void *)((long)pvVar10 + uVar23 * 0x10 + 0xb0),
                    (void *)((long)pvVar10 + lVar22 + 0xb0),sVar17);
            *(undefined8 *)((long)pvVar10 + lVar22) = uVar19;
            ((undefined8 *)((long)pvVar10 + lVar22))[1] = uVar12;
            puVar9 = (undefined8 *)((long)pvVar10 + lVar22 + 0xb0);
            puVar9[1] = uStack_d8;
            *puVar9 = local_e0;
            memmove((void *)((long)pvVar10 + uVar20 * 8 + 0x180),
                    (void *)((long)pvVar10 + uVar23 * 8 + 0x170),(uVar21 - uVar20) * 8);
          }
          else {
            *puVar9 = uVar19;
            puVar9[1] = uVar12;
            puVar9[0x16] = local_e0;
            puVar9[0x17] = uStack_d8;
          }
          *(ushort *)((long)pvVar10 + 0x16a) = uVar5 + 1;
          *(void **)((long)pvVar10 + uVar23 * 8 + 0x170) = pvVar15;
          if (uVar23 < uVar21 + 2) {
            lVar22 = uVar20 + 0x2f;
            do {
              sVar6 = (short)lVar22;
              lVar18 = *(long *)((long)pvVar10 + lVar22 * 8);
              lVar22 = lVar22 + 1;
              *(void **)(lVar18 + 0x160) = pvVar10;
              *(short *)(lVar18 + 0x168) = sVar6 + -0x2e;
            } while (lVar22 - uVar21 != 0x30);
          }
          goto LAB_009bc92c;
        }
        if (uVar4 < 5) {
          bVar8 = false;
          uVar23 = 4;
        }
        else if (uVar4 == 5) {
          bVar8 = false;
          uVar23 = uVar20;
        }
        else if (uVar4 == 6) {
          uVar20 = 0;
          bVar8 = true;
          uVar23 = 5;
        }
        else {
          uVar20 = uVar20 - 7;
          bVar8 = true;
          uVar23 = 6;
        }
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __dest = (void *)FUN_004b25a4(0x1d0,0x10);
        if (__dest == (void *)0x0) {
                    /* try { // try from 009bc9a4 to 009bc9af has its CatchHandler @ 009bcb34 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(0x10,0x1d0);
        }
        *(undefined8 *)((long)__dest + 0x160) = 0;
        *(undefined2 *)((long)__dest + 0x16a) = 0;
        uVar2 = (ulong)*(ushort *)((long)pvVar10 + 0x16a) + ~uVar23;
        lVar22 = uVar23 * 0x10;
        *(short *)((long)__dest + 0x16a) = (short)uVar2;
        puVar9 = (undefined8 *)((long)pvVar10 + lVar22 + 0xb0);
        uVar28 = puVar9[1];
        uVar27 = *puVar9;
        uVar14 = *(undefined8 *)((long)pvVar10 + lVar22);
        uVar24 = ((undefined8 *)((long)pvVar10 + lVar22))[1];
        if (0xb < uVar2) {
                    /* try { // try from 009bc954 to 009bc967 has its CatchHandler @ 009bcb40 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar2,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00af5f50);
        }
        memcpy(__dest,(void *)((long)pvVar10 + lVar22 + 0x10),uVar2 * 0x10);
        memcpy((void *)((long)__dest + 0xb0),(void *)((long)pvVar10 + lVar22 + 0xc0),uVar2 * 0x10);
        *(short *)((long)pvVar10 + 0x16a) = (short)uVar23;
        lVar22 = (ulong)*(ushort *)((long)__dest + 0x16a) + 1;
        if (0xb < (ulong)*(ushort *)((long)__dest + 0x16a)) {
                    /* try { // try from 009bc96c to 009bc983 has its CatchHandler @ 009bcb6c */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,lVar22,0xc,&PTR_s__nix_store_8006w282fgsx3273c878b_00af5da8);
        }
        if (uVar21 - uVar23 != lVar22) {
                    /* try { // try from 009bc9b4 to 009bc9cb has its CatchHandler @ 009bcb6c */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_0037cbde,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af5dd8);
        }
        local_f0 = local_f0 + 1;
        memcpy((void *)((long)__dest + 0x170),(void *)((long)pvVar10 + uVar23 * 8 + 0x178),
               lVar22 * 8);
        lVar18 = 0;
        do {
          lVar1 = lVar18 + 1;
          lVar11 = *(long *)((long)__dest + lVar18 * 8 + 0x170);
          *(short *)(lVar11 + 0x168) = (short)lVar18;
          *(void **)(lVar11 + 0x160) = __dest;
          lVar18 = lVar1;
        } while (lVar22 != lVar1);
        pvVar25 = __dest;
        if (!bVar8) {
          pvVar25 = pvVar10;
        }
        uVar4 = *(ushort *)((long)pvVar25 + 0x16a);
        uVar23 = (ulong)uVar4;
        puVar9 = (undefined8 *)((long)pvVar25 + uVar20 * 0x10);
        uVar21 = uVar20 + 1;
        lVar22 = uVar23 - uVar20;
        if (uVar23 < uVar20 || lVar22 == 0) {
          *puVar9 = uVar19;
          puVar9[1] = uVar12;
          puVar9[0x16] = local_e0;
          puVar9[0x17] = uStack_d8;
        }
        else {
          puVar3 = (undefined8 *)((long)pvVar25 + uVar20 * 0x10);
          memmove((void *)((long)pvVar25 + uVar21 * 0x10),puVar9,lVar22 * 0x10);
          puVar9 = (undefined8 *)((long)pvVar25 + uVar20 * 0x10 + 0xb0);
          memmove((void *)((long)pvVar25 + uVar21 * 0x10 + 0xb0),puVar9,lVar22 * 0x10);
          *puVar3 = uVar19;
          puVar3[1] = uVar12;
          *puVar9 = local_e0;
          puVar9[1] = uStack_d8;
          memmove((void *)((long)pvVar25 + uVar20 * 8 + 0x180),
                  (void *)((long)pvVar25 + uVar21 * 8 + 0x170),lVar22 * 8);
        }
        *(ushort *)((long)pvVar25 + 0x16a) = uVar4 + 1;
        *(void **)((long)pvVar25 + uVar21 * 8 + 0x170) = pvVar15;
        if (uVar21 < uVar23 + 2) {
          lVar22 = uVar20 + 0x2f;
          do {
            sVar6 = (short)lVar22;
            lVar18 = *(long *)((long)pvVar25 + lVar22 * 8);
            lVar22 = lVar22 + 1;
            *(void **)(lVar18 + 0x160) = pvVar25;
            *(short *)(lVar18 + 0x168) = sVar6 + -0x2e;
          } while (lVar22 - uVar23 != 0x30);
        }
        bVar8 = true;
        pvVar7 = *(void **)((long)pvVar10 + 0x160);
        uVar12 = uVar24;
        pvVar15 = __dest;
        uVar19 = uVar14;
        pvVar25 = pvVar10;
        local_e0 = uVar27;
        uStack_d8 = uVar28;
      } while (*(void **)((long)pvVar10 + 0x160) != (void *)0x0);
    }
    plVar16 = (long *)*param_8;
    lVar22 = *plVar16;
    if (lVar22 == 0) {
                    /* try { // try from 009bc9f8 to 009bca07 has its CatchHandler @ 009bca94 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af5e50);
    }
    uVar20 = plVar16[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar9 = (undefined8 *)FUN_004b25a4(0x1d0,0x10);
    if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 009bca0c to 009bca17 has its CatchHandler @ 009bca90 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(0x10,0x1d0);
    }
    puVar9[0x2c] = 0;
    *(undefined2 *)((long)puVar9 + 0x16a) = 0;
    puVar9[0x2e] = lVar22;
    if (0xfffffffffffffffe < uVar20) {
                    /* try { // try from 009bca1c to 009bca27 has its CatchHandler @ 009bca7c */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af5d78);
    }
    *(undefined8 **)(lVar22 + 0x160) = puVar9;
    *(undefined2 *)(lVar22 + 0x168) = 0;
    *plVar16 = (long)puVar9;
    plVar16[1] = uVar20 + 1;
    if (local_f0 != uVar20) {
                    /* try { // try from 009bca2c to 009bca43 has its CatchHandler @ 009bca48 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0037cc75,0x30,&PTR_s__nix_store_8006w282fgsx3273c878b_00af5f80);
    }
    *puVar9 = uVar14;
    puVar9[1] = uVar24;
    *(undefined2 *)((long)puVar9 + 0x16a) = 1;
    puVar9[0x17] = uStack_d8;
    puVar9[0x16] = local_e0;
    puVar9[0x2f] = __dest;
    *(undefined8 **)((long)__dest + 0x160) = puVar9;
    *(undefined2 *)((long)__dest + 0x168) = 1;
  }
LAB_009bc92c:
  *param_1 = (long)pvVar26;
  param_1[1] = uVar13;
  param_1[2] = local_140;
  return;
}


// ===== 009bcbd8  FUN_009bcbd8 =====

void FUN_009bcbd8(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009bcc24  FUN_009bcc24 =====

void FUN_009bcc24(int *param_1,uint param_2)

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


// ===== 009bcc94  FUN_009bcc94 =====

void FUN_009bcc94(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009bccac  FUN_009bccac =====

void FUN_009bccac(undefined8 *param_1)

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


// ===== 009bcd1c  FUN_009bcd1c =====

void FUN_009bcd1c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  plVar1 = plVar4 + 0x28;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
                    /* try { // try from 009bcd48 to 009bcd4f has its CatchHandler @ 009bcd88 */
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar4 + 0x22);
    plVar4 = (long *)*param_1;
  }
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 009bcdbc  FUN_009bcdbc =====

void FUN_009bcdbc(long param_1)

{
  if (*(char *)(param_1 + 0x21) == '\x04') {
                    /* try { // try from 009bcdd4 to 009bcddf has its CatchHandler @ 009bce0c */
    <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 0x28);
    if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 009bcdf0 to 009bcdf3 has its CatchHandler @ 009bce04 */
      (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(*(undefined8 *)(param_1 + 0x50));
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 009bce34  FUN_009bce34 =====

void FUN_009bce34(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  long local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long local_38 [2];
  long local_28;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = param_1[1];
    local_40 = param_1[2];
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
  local_60 = local_80[0];
  while( true ) {
    FUN_009bed50(local_38,local_80);
    if (local_38[0] == 0) break;
    plVar3 = *(long **)(local_38[0] + local_28 * 0x10 + 0xb0);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009bceb0 to 009bceb3 has its CatchHandler @ 009bcec8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  return;
}


// ===== 009bcee0  FUN_009bcee0 =====

void FUN_009bcee0(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_38 [2];
  long local_28;
  
  while( true ) {
    FUN_009bed50(local_38,param_1);
    if (local_38[0] == 0) break;
    plVar3 = *(long **)(local_38[0] + local_28 * 0x10 + 0xb0);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  return;
}


// ===== 009bcf44  FUN_009bcf44 =====

void FUN_009bcf44(long param_1)

{
  if ((*(char *)(param_1 + 0x70) == '\x03') && (*(char *)(param_1 + 0x29) == '\x04')) {
                    /* try { // try from 009bcf6c to 009bcf73 has its CatchHandler @ 009bcfa0 */
    <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 0x30);
    if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 009bcf84 to 009bcf87 has its CatchHandler @ 009bcf98 */
      (**(code **)(*(long *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}


// ===== 009bcfc8  FUN_009bcfc8 =====

void FUN_009bcfc8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if ((char)param_1[0x13] == '\0') {
    lVar3 = *param_1;
    plVar4 = (long *)(lVar3 + 0x140);
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
                    /* try { // try from 009bd084 to 009bd08b has its CatchHandler @ 009bd120 */
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar3 + 0x110);
    }
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
    if ((char)param_1[0x13] != '\x03') {
      return;
    }
    if (((char)param_1[0x12] == '\x03') && (*(char *)((long)param_1 + 0x49) == '\x04')) {
                    /* try { // try from 009bd000 to 009bd007 has its CatchHandler @ 009bd0c0 */
      <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 10);
      if (param_1[0xe] != 0) {
                    /* try { // try from 009bd018 to 009bd01b has its CatchHandler @ 009bd0b8 */
        (**(code **)(param_1[0xe] + 0x18))(param_1[0xf]);
      }
      *(undefined1 *)(param_1 + 9) = 0;
    }
    param_1 = param_1 + 2;
    lVar3 = *param_1;
    plVar4 = (long *)(lVar3 + 0x140);
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
                    /* try { // try from 009bd03c to 009bd043 has its CatchHandler @ 009bd0f0 */
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar3 + 0x110);
    }
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
  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(param_1);
  return;
}


// ===== 009bd154  FUN_009bd154 =====

void FUN_009bd154(long param_1)

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
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x30);
    local_40 = *(undefined8 *)(param_1 + 0x38);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
  local_60 = local_80[0];
  while( true ) {
    FUN_009bed50(local_38,local_80);
    if (local_38[0] == 0) break;
    plVar3 = *(long **)(local_38[0] + local_28 * 0x10 + 0xb0);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009bd1d0 to 009bd1d3 has its CatchHandler @ 009bd1e8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  return;
}


// ===== 009bd200  FUN_009bd200 =====

void FUN_009bd200(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009bd218  FUN_009bd218 =====

void FUN_009bd218(ulong *param_1)

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


// ===== 009bd268  FUN_009bd268 =====

void FUN_009bd268(long *param_1)

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


// ===== 009bd2b4  FUN_009bd2b4 =====

void FUN_009bd2b4(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

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
  FUN_009bebdc(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009bd34c  FUN_009bd34c =====

void FUN_009bd34c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  bool bVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long *local_d0;
  ulong uStack_c8;
  long local_c0;
  long *local_b0;
  long lStack_a8;
  long local_98;
  ulong uStack_90;
  ulong local_88;
  long *local_80;
  long lStack_78;
  long *local_70;
  long lStack_68;
  
  if (param_3 == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_98 = FUN_004b25a4(0x170,0x10);
    if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(0x10,0x170);
    }
    sVar5 = *(short *)(param_2 + 0x16a);
    *(undefined8 *)(local_98 + 0x160) = 0;
    *(undefined2 *)(local_98 + 0x16a) = 0;
    uStack_90 = 0;
    if (sVar5 == 0) {
      uVar20 = 0;
    }
    else {
      local_88 = 0;
      do {
        puVar8 = (undefined8 *)(param_2 + 0xb0 + local_88 * 0x10);
        uVar22 = puVar8[1];
        plVar13 = (long *)*puVar8;
        puVar8 = (undefined8 *)(param_2 + local_88 * 0x10);
        uVar20 = local_88 + 1;
        uVar15 = *puVar8;
        uVar3 = puVar8[1];
        do {
          lVar21 = *plVar13;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar12) {
            *plVar13 = lVar21 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar21 < 0) goto LAB_009bd640;
        uVar4 = *(ushort *)(local_98 + 0x16a);
        local_d0 = plVar13;
        uStack_c8 = uVar22;
        if (10 < uVar4) {
                    /* try { // try from 009bd5e8 to 009bd5ff has its CatchHandler @ 009bd6c8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002c02c8,0x20,&PTR_s__nix_store_8006w282fgsx3273c878b_00af5f68);
        }
        uVar6 = *(ushort *)(param_2 + 0x16a);
        *(ushort *)(local_98 + 0x16a) = uVar4 + 1;
        puVar8 = (undefined8 *)(local_98 + (ulong)uVar4 * 0x10);
        puVar9 = (undefined8 *)(local_98 + 0xb0 + (ulong)uVar4 * 0x10);
        puVar9[1] = uVar22;
        *puVar9 = plVar13;
        *puVar8 = uVar15;
        puVar8[1] = uVar3;
        local_88 = uVar20;
      } while (uVar20 < uVar6);
    }
    param_1[2] = uVar20;
    param_1[1] = 0;
    *param_1 = local_98;
  }
  else {
    FUN_009bd34c(&local_d0,*(undefined8 *)(param_2 + 0x170),param_3 + -1);
    uVar20 = uStack_c8;
    if (local_d0 == (long *)0x0) {
                    /* try { // try from 009bd614 to 009bd61f has its CatchHandler @ 009bd694 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af5df0);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar13 = (long *)FUN_004b25a4(0x1d0,0x10);
    if (plVar13 == (long *)0x0) {
                    /* try { // try from 009bd624 to 009bd62f has its CatchHandler @ 009bd690 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(0x10,0x1d0);
    }
    bVar12 = 0xfffffffffffffffe < uStack_c8;
    uStack_c8 = uStack_c8 + 1;
    plVar13[0x2c] = 0;
    *(undefined2 *)((long)plVar13 + 0x16a) = 0;
    plVar13[0x2e] = (long)local_d0;
    if (bVar12) {
                    /* try { // try from 009bd634 to 009bd63f has its CatchHandler @ 009bd67c */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af5d78);
    }
    local_d0[0x2c] = (long)plVar13;
    *(undefined2 *)(local_d0 + 0x2d) = 0;
    local_d0 = plVar13;
    if (*(short *)(param_2 + 0x16a) != 0) {
      uVar22 = 0;
      lVar21 = local_c0;
      do {
        lVar17 = uVar22 * 0x10;
        uVar22 = uVar22 + 1;
        puVar8 = (undefined8 *)(param_2 + 0xb0 + lVar17);
        lVar24 = puVar8[1];
        plVar23 = (long *)*puVar8;
        plVar1 = (long *)(param_2 + lVar17);
        lVar17 = *plVar1;
        lVar2 = plVar1[1];
        do {
          lVar18 = *plVar23;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar12) {
            *plVar23 = lVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar18 < 0) {
LAB_009bd640:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x9bd644);
          (*pcVar11)();
        }
                    /* try { // try from 009bd420 to 009bd42f has its CatchHandler @ 009bd650 */
        local_b0 = plVar23;
        lStack_a8 = lVar24;
        FUN_009bd34c(&local_98,*(undefined8 *)(param_2 + 0x170 + uVar22 * 8),param_3 + -1);
        uVar10 = local_88;
        lVar18 = local_98;
        uVar19 = uStack_90;
        local_80 = plVar23;
        lStack_78 = lVar24;
        if (local_98 == 0) {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          lVar18 = FUN_004b25a4(0x170,0x10);
          if (lVar18 == 0) {
                    /* try { // try from 009bd604 to 009bd60f has its CatchHandler @ 009bd69c */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(0x10,0x170);
          }
          uVar19 = 0;
          *(undefined8 *)(lVar18 + 0x160) = 0;
          *(undefined2 *)(lVar18 + 0x16a) = 0;
        }
        local_70 = plVar23;
        lStack_68 = lVar24;
        if (uVar19 != uVar20) {
          ppuVar16 = &PTR_s__nix_store_8006w282fgsx3273c878b_00af5f80;
          puVar14 = &DAT_0037cc75;
          uVar15 = 0x30;
LAB_009bd5d8:
          local_c0 = lVar21;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009bd5dc to 009bd5df has its CatchHandler @ 009bd6fc */
          core::panicking::panic(puVar14,uVar15,ppuVar16);
        }
        uVar4 = *(ushort *)((long)plVar13 + 0x16a);
        uVar19 = (ulong)uVar4;
        if (10 < uVar4) {
          puVar14 = &DAT_002c02c8;
          uVar15 = 0x20;
          ppuVar16 = &PTR_s__nix_store_8006w282fgsx3273c878b_00af5f98;
          goto LAB_009bd5d8;
        }
        *(ushort *)((long)plVar13 + 0x16a) = uVar4 + 1;
        (plVar13 + uVar19 * 2 + 0x16)[1] = lVar24;
        plVar13[uVar19 * 2 + 0x16] = (long)plVar23;
        plVar13[uVar19 * 2] = lVar17;
        (plVar13 + uVar19 * 2)[1] = lVar2;
        plVar13[uVar19 + 0x2f] = lVar18;
        *(long **)(lVar18 + 0x160) = plVar13;
        lVar21 = lVar21 + uVar10 + 1;
        *(ushort *)(lVar18 + 0x168) = uVar4 + 1;
        local_c0 = lVar21;
      } while (uVar22 < *(ushort *)(param_2 + 0x16a));
    }
    param_1[1] = uStack_c8;
    *param_1 = (long)local_d0;
    param_1[2] = local_c0;
  }
  return;
}


// ===== 009bd738  FUN_009bd738 =====

void FUN_009bd738(long *param_1)

{
  undefined1 auVar1 [16];
  long local_28;
  undefined1 local_20;
  long local_18;
  
  local_28 = *param_1;
  if ((ulong)(long)(int)param_1[1] < *(ulong *)(local_28 + 0x10) && *(long *)(local_28 + 8) != 0) {
    *(undefined4 *)(*(long *)(local_28 + 8) + (long)(int)param_1[1] * 0x18 + 8) = 1;
  }
  auVar1 = <&mio::net::uds::stream::UnixStream_as_core::io::write::Write>::write
                     (&local_28,&DAT_0037ccc6,1);
  if (((auVar1._0_8_ != 0) && (1 < (auVar1._8_8_ & 3) - 2)) &&
     ((auVar1 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
    local_18 = auVar1._8_8_ - 1;
    local_20 = 3;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009bd7c8  FUN_009bd7c8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_009bd7c8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  ulong extraout_x10;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  undefined8 *puVar31;
  void *__ptr;
  undefined8 uVar32;
  ulong uVar33;
  byte bVar34;
  undefined8 uVar35;
  ulong uVar36;
  uint local_170;
  uint local_16c;
  long *local_168;
  undefined8 *local_160;
  ulong uStack_158;
  long local_150;
  long lStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  ulong uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long local_f8;
  long lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long *local_90;
  undefined8 uStack_88;
  
  plVar21 = (long *)*param_1;
  puVar4 = (ulong *)*plVar21;
  *plVar21 = 0;
  lVar20 = plVar21[3];
  if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af5e08);
  }
  uVar27 = *(uint *)plVar21[1];
  lVar28 = *(long *)plVar21[2];
  local_16c = uVar27;
  if (uVar27 < 0x14 && (1 << (ulong)(uVar27 & 0x1f) & 0x80b10U) != 0) {
    local_e0 = &local_16c;
    uStack_d8._0_4_ = SUB84(PTR_fmt_00b00d18,0);
    uStack_d8._4_4_ = (undefined4)((ulong)PTR_fmt_00b00d18 >> 0x20);
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b0f17,&local_e0,&PTR_s__root__cargo_registry_src_index__00af5cf0);
  }
  plVar21 = (long *)<signal_hook_registry::[0]::signal_hook_registry::GlobalData>::ensure();
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_168 = (long *)FUN_004b25a4(0x20,8);
  if (local_168 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x20);
  }
  local_168[2] = lVar28;
  plVar1 = plVar21 + 4;
  *(uint *)(local_168 + 3) = uVar27;
  local_168[1] = 1;
  *local_168 = 1;
  do {
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
                    /* try { // try from 009be2cc to 009be2d3 has its CatchHandler @ 009be2ec */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (plVar21 + 4);
      break;
    }
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar15) {
      *(int *)plVar1 = 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    local_170 = 0;
  }
  else {
                    /* try { // try from 009be11c to 009be11f has its CatchHandler @ 009be2ec */
    local_170 = std::panicking::panic_count::is_zero_slow_path();
    local_170 = local_170 ^ 1;
  }
  plVar2 = plVar21 + 2;
  lVar28 = *plVar2;
                    /* try { // try from 009bd89c to 009bd8a7 has its CatchHandler @ 009be310 */
  FUN_009c6684(&local_e0,lVar28);
  uStack_158 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
  local_160 = (undefined8 *)CONCAT44(local_e0._4_4_,(uint)local_e0);
  lStack_148 = CONCAT44(uStack_c4,uStack_c8);
  local_150 = CONCAT44(uStack_cc,local_d0);
  uVar33 = *(ulong *)(lVar28 + 0x30);
  uVar23 = *(ulong *)(lVar28 + 0x38);
  uStack_138 = CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
  local_140 = CONCAT44(uStack_bc,local_c0);
  local_130 = uVar33 + 1;
  uStack_128 = uVar23;
  if (uVar33 == 0xffffffffffffffff) {
    uStack_128 = uVar23 + 1;
  }
                    /* try { // try from 009bd8d4 to 009bd8df has its CatchHandler @ 009be360 */
  local_e0._0_4_ = uVar27;
  uVar18 = FUN_009aadb8(&local_140,&local_e0);
  uVar13 = uStack_d8._4_4_;
  uVar11 = (undefined4)uStack_d8;
  uVar9 = local_e0._4_4_;
  uVar17 = (uint)local_e0;
  lVar28 = 0;
  uVar22 = 0x48;
  bVar6 = (byte)(uVar18 >> 0x38);
  bVar34 = bVar6 >> 1;
  uVar32 = CONCAT17(bVar34,CONCAT16(bVar34,CONCAT15(bVar34,CONCAT14(bVar34,CONCAT13(bVar34,CONCAT12(
                                                  bVar34,CONCAT11(bVar34,bVar34)))))));
  uVar24 = uVar18 & uStack_158;
  uVar35 = *(undefined8 *)((long)local_160 + uVar24);
  uVar36 = NEON_cmeq(uVar35,uVar32,1);
  uVar36 = uVar36 & 0x8080808080808080;
  local_e0._0_4_ = (uint)uVar33;
  uVar8 = (uint)local_e0;
  local_e0._4_4_ = (undefined4)(uVar33 >> 0x20);
  uVar10 = local_e0._4_4_;
  uStack_d8._0_4_ = (undefined4)uVar23;
  uVar12 = (undefined4)uStack_d8;
  uStack_d8._4_4_ = (undefined4)(uVar23 >> 0x20);
  uVar14 = uStack_d8._4_4_;
  while( true ) {
    for (; uVar36 != 0; uVar36 = uVar36 - 1 & uVar36) {
      uVar26 = (uVar36 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar36 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      uVar26 = uVar24 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3) & uStack_158;
      if (*(uint *)(local_160 + uVar26 * -9 + -9) == uVar27) {
        uStack_b8 = local_160 + uVar26 * -9 + -3;
        lVar28 = *uStack_b8;
        if (lVar28 == 0) goto LAB_009bdaa0;
        lVar30 = local_160[uVar26 * -9 + -2];
        goto LAB_009bd988;
      }
    }
    uVar35 = NEON_cmeq(uVar35,0xffffffffffffffff,1);
    bVar34 = NEON_umaxv(uVar35,1);
    if ((bVar34 & 1) != 0) break;
    lVar28 = lVar28 + 8;
    uVar24 = uVar24 + lVar28 & uStack_158;
    uVar35 = *(undefined8 *)((long)local_160 + uVar24);
    uVar36 = NEON_cmeq(uVar35,uVar32,1);
    uVar36 = uVar36 & 0x8080808080808080;
  }
  local_e0._0_4_ = uVar17;
  local_e0._4_4_ = uVar9;
  uStack_d8._0_4_ = uVar11;
  uStack_d8._4_4_ = uVar13;
  if (local_150 == 0) {
                    /* try { // try from 009be14c to 009be1cb has its CatchHandler @ 009be360 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(i32,signal_hook_registry[27533933916be64]::Slot)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<i32,signal_hook_registry[27533933916be64]::Slot,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
              (&local_160,1,&local_140,1);
  }
  plVar29 = plVar21 + 9;
  do {
    if ((int)*plVar29 != 0) {
      ClearExclusiveLocal();
                    /* try { // try from 009be2e0 to 009be2e7 has its CatchHandler @ 009be360 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (plVar21 + 9);
      break;
    }
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar15) {
      *(int *)plVar29 = 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = std::panicking::panic_count::is_zero_slow_path();
    uVar17 = uVar17 ^ 1;
  }
  plVar3 = plVar21 + 7;
                    /* try { // try from 009bda40 to 009bda4f has its CatchHandler @ 009be348 */
  <signal_hook_registry::signal_hook_registry::Prev>::detect(&local_e0,uVar27);
  uVar36 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
  if (CONCAT44(local_e0._4_4_,(uint)local_e0) == 1) {
                    /* try { // try from 009be230 to 009be26f has its CatchHandler @ 009be360 */
    if ((((uVar17 & 1) == 0) &&
        ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
       (uVar33 = std::panicking::panic_count::is_zero_slow_path(), (uVar33 & 1) == 0)) {
      *(undefined1 *)((long)plVar21 + 0x4c) = 1;
    }
    do {
      lVar28 = *plVar29;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar15) {
        *(int *)plVar29 = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar28 == 2) {
                    /* try { // try from 009bda94 to 009bdac3 has its CatchHandler @ 009be360 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar21 + 9);
    }
  }
  else {
    uStack_118 = CONCAT44(uStack_c4,uStack_c8);
    local_120 = CONCAT44(uStack_cc,local_d0);
    local_108 = CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
    uStack_110 = CONCAT44(uStack_bc,local_c0);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar19 = (undefined8 *)FUN_004b25a4(0x30,8);
    if (puVar19 == (undefined8 *)0x0) {
                    /* try { // try from 009be1f0 to 009be1fb has its CatchHandler @ 009be348 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x30);
    }
    *puVar19 = 1;
    puVar19[1] = uVar36;
    puVar19[3] = uStack_118;
    puVar19[2] = local_120;
    puVar19[5] = local_108;
    puVar19[4] = uStack_110;
    do {
      __ptr = (void *)*plVar3;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar15) {
        *plVar3 = (long)puVar19;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar3 = plVar21 + 8;
    bVar15 = plVar21[5] == 0;
    bVar16 = plVar21[6] == 0;
    do {
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (plVar21[5] != 0 || plVar21[6] != 0) {
      uVar36 = 1;
      do {
        while( true ) {
          if ((uVar36 & 0xf) == 0) {
                    /* try { // try from 009bddac to 009bddaf has its CatchHandler @ 009be314 */
            std::thread::functions::yield_now();
          }
          else {
            InstructionSynchronizationBarrier();
          }
          if (!bVar15) break;
          bVar15 = true;
          if (!bVar16) goto LAB_009bdd7c;
LAB_009bddd4:
          bVar16 = true;
          uVar36 = uVar36 + 1;
          if (bVar15) goto LAB_009bdde8;
        }
        bVar15 = plVar21[5] == 0;
        if (bVar16) goto LAB_009bddd4;
LAB_009bdd7c:
        bVar16 = plVar21[6] == 0;
        uVar36 = uVar36 + 1;
      } while (!(bool)(bVar15 & bVar16));
    }
LAB_009bdde8:
    free(__ptr);
    if ((((uVar17 & 1) == 0) &&
        ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
       (uVar36 = std::panicking::panic_count::is_zero_slow_path(), (uVar36 & 1) == 0)) {
      *(undefined1 *)((long)plVar21 + 0x4c) = 1;
    }
    do {
      lVar28 = *plVar29;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar15) {
        *(int *)plVar29 = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar28 == 2) {
                    /* try { // try from 009be204 to 009be213 has its CatchHandler @ 009be360 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar21 + 9);
    }
                    /* try { // try from 009bde38 to 009bde43 has its CatchHandler @ 009be360 */
    <signal_hook_registry::signal_hook_registry::Slot>::new(&local_e0,uVar27);
    uVar36 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
    if (CONCAT44(local_e0._4_4_,(uint)local_e0) != 1) {
      uStack_100 = (undefined4)uStack_b8;
      uStack_fc = uStack_b8._4_4_;
      local_108._0_4_ = local_c0;
      local_108._4_4_ = uStack_bc;
      lStack_f0 = CONCAT44(uStack_a4,uStack_a8);
      local_f8 = CONCAT44(uStack_ac,local_b0);
      local_e8 = uStack_a0;
      uStack_e4 = uStack_9c;
      uStack_110._0_4_ = uStack_c8;
      uStack_110._4_4_ = uStack_c4;
      uStack_118._0_4_ = local_d0;
      uStack_118._4_4_ = uStack_cc;
      lVar28 = local_f8;
      lVar30 = lStack_f0;
      uVar24 = extraout_x10;
      local_120 = uVar36;
      if (local_f8 != 0) {
LAB_009bdf78:
        uVar24 = (ulong)*(ushort *)(lVar28 + 0x16a);
        uVar36 = 0xffffffffffffffff;
        lVar25 = uVar24 << 4;
        puVar19 = (undefined8 *)(lVar28 + 0xa0);
        do {
          puVar31 = puVar19;
          if (lVar25 == 0) goto LAB_009bdfcc;
          uVar22 = puVar31[-0x13];
          puVar19 = puVar31 + 2;
          uVar36 = uVar36 + 1;
          lVar25 = lVar25 + -0x10;
          uVar17 = (uint)(!CARRY8(uVar22,~uVar23) &&
                         !CARRY8(uVar22 + ~uVar23,(ulong)(uVar33 <= (ulong)puVar31[-0x14])));
          if (!CARRY8(uVar23,~uVar22) &&
              !CARRY8(uVar23 + ~uVar22,(ulong)((ulong)puVar31[-0x14] <= uVar33))) {
            uVar17 = 0xffffffff;
          }
        } while (uVar17 == 1);
        uVar24 = uVar36;
        if ((uVar17 & 0xff) == 0) {
          uVar35 = puVar31[3];
          plVar29 = (long *)*puVar19;
          *puVar19 = local_168;
          puVar31[3] = &DAT_00af5d08;
          uStack_d8._0_4_ = (undefined4)uVar35;
          uStack_d8._4_4_ = (undefined4)((ulong)uVar35 >> 0x20);
          local_e0._0_4_ = (uint)plVar29;
          local_e0._4_4_ = (undefined4)((ulong)plVar29 >> 0x20);
          do {
            lVar28 = *plVar29;
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar15) {
              *plVar29 = lVar28 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar28 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 009be010 to 009be04b has its CatchHandler @ 009be2f4 */
            <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
            ::drop_slow(&local_e0);
          }
          goto LAB_009be050;
        }
LAB_009bdfcc:
        if (lVar30 != 0) goto code_r0x009bdfd0;
      }
      local_d0 = (undefined4)lVar28;
      uStack_cc = (undefined4)((ulong)lVar28 >> 0x20);
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_b8 = &local_f8;
      local_c0 = (undefined4)uVar24;
      uStack_bc = (undefined4)(uVar24 >> 0x20);
      local_e0._0_4_ = uVar8;
      local_e0._4_4_ = uVar10;
      uStack_d8._0_4_ = uVar12;
      uStack_d8._4_4_ = uVar14;
      FUN_009bbd6c(&local_90,&local_e0,local_168,&DAT_00af5d08);
LAB_009be050:
      local_e0._4_4_ = (undefined4)local_120;
      uStack_d8._0_4_ = (undefined4)(local_120 >> 0x20);
      uVar18 = uStack_158 & uVar18;
      uStack_b8._4_4_ = (undefined4)local_f8;
      local_b0 = (undefined4)((ulong)local_f8 >> 0x20);
      uStack_ac = (undefined4)lStack_f0;
      uStack_a8 = (undefined4)((ulong)lStack_f0 >> 0x20);
      uVar33 = NEON_cmlt(*(undefined8 *)((long)local_160 + uVar18),0,1);
      if (uVar33 == 0) {
        lVar28 = 8;
        do {
          uVar18 = uVar18 + lVar28;
          lVar28 = lVar28 + 8;
          uVar18 = uVar18 & uStack_158;
          uVar33 = NEON_cmlt(*(undefined8 *)((long)local_160 + uVar18),0,1);
        } while (uVar33 == 0);
      }
      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar23 = uVar18 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) & uStack_158;
      uVar33 = (ulong)*(char *)((long)local_160 + uVar23);
      if (-1 < *(char *)((long)local_160 + uVar23)) {
        uVar33 = NEON_cmlt(*local_160,0,1);
        uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
        uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
        uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
        uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
        uVar23 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
        uVar33 = (ulong)*(byte *)((long)local_160 + uVar23);
      }
      bVar6 = bVar6 >> 1;
      *(byte *)((long)local_160 + uVar23) = bVar6;
      *(byte *)((long)local_160 + (uVar23 - 8 & uStack_158) + 8) = bVar6;
      *(uint *)(local_160 + uVar23 * -9 + -9) = uVar27;
      *(ulong *)((long)local_160 + uVar23 * -0x48 + -0x2c) =
           CONCAT44((undefined4)local_108,uStack_110._4_4_);
      *(ulong *)((long)local_160 + uVar23 * -0x48 + -0x34) =
           CONCAT44((undefined4)uStack_110,uStack_118._4_4_);
      *(ulong *)((long)local_160 + uVar23 * -0x48 + -0x1c) = CONCAT44(uStack_b8._4_4_,uStack_fc);
      *(ulong *)((long)local_160 + uVar23 * -0x48 + -0x24) = CONCAT44(uStack_100,local_108._4_4_);
      *(ulong *)((long)local_160 + uVar23 * -0x48 + -0xc) = CONCAT44(local_e8,uStack_a8);
      *(ulong *)((long)local_160 + uVar23 * -0x48 + -0x14) = CONCAT44(uStack_ac,local_b0);
      *(undefined4 *)((long)local_160 + uVar23 * -0x48 + -4) = uStack_e4;
      *(ulong *)((long)local_160 + uVar23 * -0x48 + -0x3c) =
           CONCAT44((undefined4)uStack_118,(undefined4)uStack_d8);
      *(ulong *)((long)local_160 + uVar23 * -0x48 + -0x44) = CONCAT44(local_e0._4_4_,(uint)local_e0)
      ;
      local_150 = local_150 - (uVar33 & 1);
      lStack_148 = lStack_148 + 1;
      goto LAB_009bdac4;
    }
  }
  if (uStack_158 != 0) {
    if (lStack_148 != 0) {
      puVar31 = local_160 + 1;
      uVar33 = NEON_cmge(*local_160,0,1);
      uVar33 = uVar33 & 0x8080808080808080;
      puVar19 = local_160;
      lVar28 = lStack_148;
      do {
        for (; uVar33 == 0; uVar33 = uVar33 & 0x8080808080808080) {
          uVar33 = NEON_cmge(*puVar31,0,1);
          puVar19 = puVar19 + -0x48;
          puVar31 = puVar31 + 1;
        }
        uVar23 = (uVar33 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar33 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 009bdeac to 009bdeaf has its CatchHandler @ 009be31c */
        FUN_009bf620(puVar19 + (long)-(int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) *
                               9 + -3);
        lVar28 = lVar28 + -1;
        uVar33 = uVar33 - 1 & uVar33;
      } while (lVar28 != 0);
    }
    if (uStack_158 * 0x49 != -0x51) {
      free(local_160 + uStack_158 * -9 + -9);
    }
  }
                    /* try { // try from 009be218 to 009be21b has its CatchHandler @ 009be2ec */
  if ((((local_170 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar33 = std::panicking::panic_count::is_zero_slow_path(), (uVar33 & 1) == 0)) {
    *(undefined1 *)((long)plVar21 + 0x24) = 1;
  }
  do {
    lVar28 = *plVar1;
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar15) {
      *(int *)plVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar28 == 2) {
                    /* try { // try from 009be1e4 to 009be1eb has its CatchHandler @ 009be2ec */
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
  }
  do {
    lVar28 = *local_168;
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(local_168,0x10);
    if (bVar15) {
      *local_168 = lVar28 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar28 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<signal_hook_registry::register<tokio::signal::unix::signal_enable::{closure#0}::{closure#0}>::{closure#0}>>
    ::drop_slow(&local_168);
  }
LAB_009bdc8c:
  uVar33 = *puVar4;
  if (((uVar33 != 0) && (1 < (uVar33 & 3) - 2)) && ((uVar33 & 3) != 0)) {
    uStack_d8 = uVar33 - 1;
    local_e0._0_4_ = CONCAT31(local_e0._1_3_,3);
                    /* try { // try from 009bdcbc to 009bdcc3 has its CatchHandler @ 009be308 */
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_d8);
  }
  *puVar4 = uVar36;
  if (uVar36 == 0) {
    *(undefined1 *)(lVar20 + 0x14) = 1;
  }
  return;
code_r0x009bdfd0:
  lVar28 = *(long *)(lVar28 + uVar24 * 8 + 0x170);
  lVar30 = lVar30 + -1;
  goto LAB_009bdf78;
LAB_009bd988:
  uVar18 = 0xffffffffffffffff;
  lVar25 = (ulong)*(ushort *)(lVar28 + 0x16a) << 4;
  puVar19 = (undefined8 *)(lVar28 + 0xa0);
  do {
    puVar31 = puVar19;
    uVar22 = (ulong)*(ushort *)(lVar28 + 0x16a);
    if (lVar25 == 0) goto joined_r0x009bd9e4;
    uVar36 = puVar31[-0x13];
    puVar19 = puVar31 + 2;
    uVar18 = uVar18 + 1;
    lVar25 = lVar25 + -0x10;
    uVar27 = (uint)(!CARRY8(uVar36,~uVar23) &&
                   !CARRY8(uVar36 + ~uVar23,(ulong)(uVar33 <= (ulong)puVar31[-0x14])));
    if (!CARRY8(uVar23,~uVar36) &&
        !CARRY8(uVar23 + ~uVar36,(ulong)((ulong)puVar31[-0x14] <= uVar33))) {
      uVar27 = 0xffffffff;
    }
  } while (uVar27 == 1);
  uVar22 = uVar18;
  if ((uVar27 & 0xff) != 0xff) {
    uStack_88 = puVar31[3];
    local_90 = (long *)*puVar19;
    *puVar19 = local_168;
    puVar31[3] = &DAT_00af5d08;
    do {
      lVar20 = *local_90;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(local_90,0x10);
      if (bVar15) {
        *local_90 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    local_e0._0_4_ = uVar17;
    if (lVar20 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(&local_90);
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cb60,0x49,&PTR_s__root__cargo_registry_src_index__00af5d38);
  }
joined_r0x009bd9e4:
  if (lVar30 == 0) goto LAB_009bdaa0;
  lVar30 = lVar30 + -1;
  lVar28 = *(long *)(lVar28 + uVar22 * 8 + 0x170);
  goto LAB_009bd988;
LAB_009bdaa0:
  local_d0 = (undefined4)lVar28;
  uStack_cc = (undefined4)((ulong)lVar28 >> 0x20);
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_c0 = (undefined4)uVar22;
  uStack_bc = (undefined4)(uVar22 >> 0x20);
  FUN_009bbd6c(&local_120,&local_e0,local_168,&DAT_00af5d08);
LAB_009bdac4:
  uStack_d8._0_4_ = (undefined4)uStack_158;
  uStack_d8._4_4_ = (undefined4)(uStack_158 >> 0x20);
  local_e0._0_4_ = (uint)local_160;
  local_e0._4_4_ = (undefined4)((ulong)local_160 >> 0x20);
  uStack_c8 = (undefined4)lStack_148;
  uStack_c4 = (undefined4)((ulong)lStack_148 >> 0x20);
  local_d0 = (undefined4)local_150;
  uStack_cc = (undefined4)((ulong)local_150 >> 0x20);
  uStack_b8._0_4_ = (undefined4)uStack_138;
  uStack_b8._4_4_ = (undefined4)((ulong)uStack_138 >> 0x20);
  local_c0 = (undefined4)local_140;
  uStack_bc = (undefined4)((ulong)local_140 >> 0x20);
  uStack_a8 = (undefined4)uStack_128;
  uStack_a4 = (undefined4)(uStack_128 >> 0x20);
  local_b0 = (undefined4)local_130;
  uStack_ac = (undefined4)((ulong)local_130 >> 0x20);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar19 = (undefined8 *)FUN_004b25a4(0x40,0x10);
  if (puVar19 == (undefined8 *)0x0) {
                    /* try { // try from 009be12c to 009be137 has its CatchHandler @ 009be370 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(0x10,0x40);
  }
  puVar19[1] = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
  *puVar19 = CONCAT44(local_e0._4_4_,(uint)local_e0);
  puVar19[3] = CONCAT44(uStack_c4,uStack_c8);
  puVar19[2] = CONCAT44(uStack_cc,local_d0);
  puVar19[5] = CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
  puVar19[4] = CONCAT44(uStack_bc,local_c0);
  puVar19[7] = CONCAT44(uStack_a4,uStack_a8);
  puVar19[6] = CONCAT44(uStack_ac,local_b0);
  do {
    plVar29 = (long *)*plVar2;
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar15) {
      *plVar2 = (long)puVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  plVar2 = plVar21 + 3;
  bVar15 = *plVar21 == 0;
  bVar16 = plVar21[1] == 0;
  do {
    cVar7 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = *plVar2 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (*plVar21 != 0 || plVar21[1] != 0) {
    uVar33 = 1;
    do {
      while( true ) {
        if ((uVar33 & 0xf) == 0) {
                    /* try { // try from 009bdb74 to 009bdb77 has its CatchHandler @ 009be328 */
          std::thread::functions::yield_now();
        }
        else {
          InstructionSynchronizationBarrier();
        }
        if (!bVar15) break;
        bVar15 = true;
        if (!bVar16) goto LAB_009bdb44;
LAB_009bdb98:
        bVar16 = true;
        uVar33 = uVar33 + 1;
        if (bVar15) goto LAB_009bdbac;
      }
      bVar15 = *plVar21 == 0;
      if (bVar16) goto LAB_009bdb98;
LAB_009bdb44:
      bVar16 = plVar21[1] == 0;
      uVar33 = uVar33 + 1;
    } while (!(bool)(bVar15 & bVar16));
  }
LAB_009bdbac:
  lVar28 = plVar29[1];
  if (lVar28 != 0) {
    lVar30 = plVar29[3];
    if (lVar30 != 0) {
      puVar19 = (undefined8 *)*plVar29;
      puVar31 = puVar19 + 1;
      uVar33 = NEON_cmge(*puVar19,0,1);
      uVar33 = uVar33 & 0x8080808080808080;
      do {
        for (; uVar33 == 0; uVar33 = uVar33 & 0x8080808080808080) {
          puVar19 = puVar19 + -0x48;
          uVar33 = NEON_cmge(*puVar31,0,1);
          puVar31 = puVar31 + 1;
        }
        uVar23 = (uVar33 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar33 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 009bdc08 to 009bdc0b has its CatchHandler @ 009be330 */
        FUN_009bf620(puVar19 + (long)-(int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) *
                               9 + -3);
        lVar30 = lVar30 + -1;
        uVar33 = uVar33 - 1 & uVar33;
      } while (lVar30 != 0);
    }
    if (lVar28 * 0x49 != -0x51) {
      free((void *)(*plVar29 + lVar28 * -0x48 + -0x48));
    }
  }
  free(plVar29);
  if ((((local_170 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar33 = std::panicking::panic_count::is_zero_slow_path(), (uVar33 & 1) == 0)) {
    *(undefined1 *)((long)plVar21 + 0x24) = 1;
  }
  do {
    lVar28 = *plVar1;
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar15) {
      *(int *)plVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar28 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
  }
  uVar36 = 0;
  goto LAB_009bdc8c;
}


// ===== 009be3c4  FUN_009be3c4 =====

long FUN_009be3c4(long *param_1)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_31;
  
  bVar2 = *(byte *)(param_1 + 0x13);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      lVar4 = *param_1;
      plVar3 = param_1 + 2;
      *plVar3 = lVar4;
      param_1[3] = param_1[1];
      param_1[4] = (long)plVar3;
      *(undefined1 *)(param_1 + 0x12) = 0;
LAB_009be438:
      *(undefined1 *)((long)param_1 + 0x49) = 0;
      param_1[7] = lVar4 + 0x10;
      param_1[8] = (long)(plVar3 + 1);
LAB_009be454:
                    /* try { // try from 009be454 to 009be45b has its CatchHandler @ 009be574 */
      bVar2 = FUN_009c71a8(param_1 + 5);
      if (bVar2 == 2) {
        *(undefined1 *)(param_1 + 0x12) = 3;
        *(undefined1 *)(param_1 + 0x13) = 3;
        return 0;
      }
      if (*(char *)((long)param_1 + 0x49) == '\x04') {
                    /* try { // try from 009be498 to 009be49f has its CatchHandler @ 009be548 */
        <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 10);
        if (param_1[0xe] != 0) {
                    /* try { // try from 009be4b0 to 009be4b3 has its CatchHandler @ 009be540 */
          (**(code **)(param_1[0xe] + 0x18))(param_1[0xf]);
        }
        *(undefined1 *)(param_1 + 9) = 0;
      }
      *(undefined1 *)(param_1 + 0x12) = 1;
      if ((bVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x13) = 1;
        return param_1[2];
      }
                    /* try { // try from 009be4e0 to 009be503 has its CatchHandler @ 009be598 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0037cc06,0x17,&uStack_31,&DAT_00af5f18,
                 &PTR_s__root__cargo_registry_src_index__00af5e80);
    }
    core::panicking::panic_const::panic_const_async_fn_resumed
              (&PTR_s__root__cargo_registry_src_index__00af5e68);
LAB_009be514:
    core::panicking::panic_const::panic_const_async_fn_resumed_panic
              (&PTR_s__root__cargo_registry_src_index__00af5e68);
  }
  else {
    if (bVar2 != 3) goto LAB_009be514;
    bVar2 = *(byte *)(param_1 + 0x12);
    if (1 < bVar2) {
      if (bVar2 != 3) {
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00af5e38);
        goto LAB_009be53c;
      }
      goto LAB_009be454;
    }
    if (bVar2 == 0) {
      plVar3 = (long *)param_1[4];
      lVar4 = *plVar3;
      goto LAB_009be438;
    }
  }
                    /* try { // try from 009be520 to 009be53b has its CatchHandler @ 009be56c */
  core::panicking::panic_const::panic_const_async_fn_resumed
            (&PTR_s__root__cargo_registry_src_index__00af5e38);
LAB_009be53c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9be540);
  (*pcVar1)();
}


// ===== 009be5b8  FUN_009be5b8 =====

void FUN_009be5b8(long *param_1)

{
  undefined1 auVar1 [16];
  long local_28;
  undefined1 local_20;
  long local_18;
  
  local_28 = *param_1;
  if ((ulong)(long)(int)param_1[1] < *(ulong *)(local_28 + 0x10) && *(long *)(local_28 + 8) != 0) {
    *(undefined4 *)(*(long *)(local_28 + 8) + (long)(int)param_1[1] * 0x18 + 8) = 1;
  }
  auVar1 = <&mio::net::uds::stream::UnixStream_as_core::io::write::Write>::write
                     (&local_28,&DAT_0037ccc6,1);
  if (((auVar1._0_8_ != 0) && (1 < (auVar1._8_8_ & 3) - 2)) &&
     ((auVar1 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
    local_18 = auVar1._8_8_ - 1;
    local_20 = 3;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009be648  FUN_009be648 =====

void FUN_009be648(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_009bd7c8(&local_18);
  return;
}


// ===== 009be670  <tokio::signal::tokio::signal::RxFuture>::poll_recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::signal::tokio::signal::RxFuture>::poll_recv */

undefined8 __rustcall <tokio::signal::tokio::signal::RxFuture>::poll_recv(undefined8 *param_1)

{
  undefined1 local_c0 [9] [16];
  undefined1 local_28;
  
  local_c0[0] = (**(code **)(param_1[1] + 0x18))(*param_1);
  if (SUB168(local_c0[0],0) != 0) {
    local_28 = 0;
    FUN_009b5fb0(param_1,local_c0);
    return 1;
  }
  return 2;
}


// ===== 009be6d0  <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn */

void __rustcall
<tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x009be6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x28))
              (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    return;
  }
  return;
}


// ===== 009be6fc  <tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::local_addr */

void __rustcall
<tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::local_addr
          (undefined4 *param_1,long *param_2)

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
  
  if (*(int *)(*param_2 + 0x18) == -1) {
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


// ===== 009be7b0  <tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::try_read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::try_read_vectored */

void __rustcall
<tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::try_read_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6e9c(local_28,1,&local_28);
  return;
}


// ===== 009be7e0  <tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::try_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::try_read */

void __rustcall
<tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::try_read
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a726c(local_28,1,&local_28);
  return;
}


// ===== 009be810  <tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::peer_addr */

void __rustcall
<tokio::net::unix::split::tokio::net::unix::split::ReadHalf>::peer_addr
          (undefined4 *param_1,long *param_2)

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
  
  if (*(int *)(*param_2 + 0x18) == -1) {
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


// ===== 009be8c4  <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed */

int __rustcall
<tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  ulong uVar8;
  int *local_40;
  byte local_38;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended();
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar7 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x009be9c4;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar6) {
      *param_1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar7 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x009be9c4:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar7;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar5 = (char)param_1[1];
  }
  else {
    local_38 = std::panicking::panic_count::is_zero_slow_path();
    local_38 = local_38 ^ 1;
    cVar5 = (char)param_1[1];
  }
  if (cVar5 == '\0') {
    uVar3 = param_1[3];
    uVar1 = param_1[2] ^ param_1[2] << 0x11;
    uVar2 = uVar3 ^ uVar3 << 0x11;
    uVar1 = uVar3 >> 0x10 ^ uVar1 >> 7 ^ uVar3 ^ uVar1;
    param_1[2] = uVar1;
    param_1[3] = uVar2 >> 7 ^ uVar1 >> 0x10 ^ uVar2 ^ uVar1;
    if ((((local_38 & 1) == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
       (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    do {
      iVar4 = *param_1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar6) {
        *param_1 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 2) {
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake();
    }
    return uVar1 + uVar3;
  }
  local_40 = param_1;
                    /* try { // try from 009be9ec to 009bea0f has its CatchHandler @ 009bea14 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0037cc4d,0x28,&local_40,&PTR_FUN_00af5eb8,
             &PTR_s__root__cargo_registry_src_index__00af5f38);
}


// ===== 009bea2c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
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
  FUN_009bebdc(&local_38,*param_1,param_1[1],uVar1,8,8);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009bea94  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<core::task::wake::Waker>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<core::task::wake::Waker>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<core::task::wake::Waker>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_009bebdc(&local_38,*param_1,param_1[1],uVar1,8,0x10);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009beafc  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<tokio[8c8895dbfa691109]::loom::std::parking_lot::Mutex<tokio[8c8895dbfa691109]::util::linked_list::LinkedList<tokio[8c8895dbfa691109]::runtime::task::Task<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>,tokio[8c8895dbfa691109]::runtime::task::core::Header>>>>::grow_one =====

/* <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<tokio[8c8895dbfa691109]::loom::std::parking_lot::Mutex<tokio[8c8895dbfa691109]::util::linked_list::LinkedList<tokio[8c8895dbfa691109]::runtime::task::Task<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>,
   tokio[8c8895dbfa691109]::runtime::task::core::Header>>>>::grow_one */

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<tokio[8c8895dbfa691109]::loom::std::parking_lot::Mutex<tokio[8c8895dbfa691109]::util::linked_list::LinkedList<tokio[8c8895dbfa691109]::runtime::task::Task<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>,tokio[8c8895dbfa691109]::runtime::task::core::Header>>>>
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
  FUN_009bebdc(&local_38,*param_1,param_1[1],uVar1,8,0x18);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009beb64  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::process::Child>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::process::Child>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::process::Child>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_009bebdc(&local_38,*param_1,param_1[1],uVar1,4,0x18);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009bebcc  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tokio::runtime::metrics::mock::WorkerMetrics>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tokio::runtime::metrics::mock::WorkerMetrics>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tokio::runtime::metrics::mock::WorkerMetrics>>::
grow_one(void)

{
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(0);
}


// ===== 009bebdc  FUN_009bebdc =====

void FUN_009bebdc(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
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
  goto LAB_009bec78;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_009bec58;
    }
LAB_009bec68:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_009bec68;
LAB_009bec58:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_009bec78:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 009bec90  <tokio::signal::unix::[5]::tokio::signal::unix::Signal>::poll_recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::signal::unix::[5]::tokio::signal::unix::Signal>::poll_recv */

undefined8 __rustcall
<tokio::signal::unix::[5]::tokio::signal::unix::Signal>::poll_recv(undefined8 *param_1)

{
  undefined1 local_c0 [9] [16];
  undefined1 local_28;
  
  local_c0[0] = (**(code **)(param_1[1] + 0x18))(*param_1);
  if (SUB168(local_c0[0],0) != 0) {
    local_28 = 0;
    FUN_009b5fb0(param_1,local_c0);
    return 1;
  }
  return 2;
}


// ===== 009becf0  <tokio::net::unix::split::tokio::net::unix::split::WriteHalf>::try_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::tokio::net::unix::split::WriteHalf>::try_write_vectored */

void __rustcall
<tokio::net::unix::split::tokio::net::unix::split::WriteHalf>::try_write_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7084(local_28,2,&local_28);
  return;
}


// ===== 009bed20  <tokio::net::unix::split::tokio::net::unix::split::WriteHalf>::try_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::tokio::net::unix::split::WriteHalf>::try_write */

void __rustcall
<tokio::net::unix::split::tokio::net::unix::split::WriteHalf>::try_write
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7454(local_28,2,&local_28);
  return;
}


// ===== 009bed50  FUN_009bed50 =====

void FUN_009bed50(long *param_1,long *param_2)

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
          pvVar2 = *(void **)((long)pvVar2 + 0x170);
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
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af5dc0);
  }
  pvVar2 = (void *)param_2[1];
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)param_2[2];
    for (lVar3 = param_2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
      pvVar2 = *(void **)((long)pvVar2 + 0x170);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 1;
    param_2[1] = (long)pvVar2;
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    pvVar7 = pvVar2;
    if (uVar6 < *(ushort *)((long)pvVar2 + 0x16a)) goto joined_r0x009beda8;
  }
  else {
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    pvVar7 = pvVar2;
    if (uVar6 < *(ushort *)((long)pvVar2 + 0x16a)) goto joined_r0x009beda8;
  }
  do {
    pvVar7 = *(void **)((long)pvVar2 + 0x160);
    if (pvVar7 == (void *)0x0) {
      free(pvVar2);
                    /* try { // try from 009bef44 to 009bef4f has its CatchHandler @ 009bef60 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af5e20);
    }
    uVar1 = *(ushort *)((long)pvVar2 + 0x168);
    uVar6 = (ulong)uVar1;
    lVar3 = lVar3 + 1;
    free(pvVar2);
    pvVar2 = pvVar7;
  } while (*(ushort *)((long)pvVar7 + 0x16a) <= uVar1);
joined_r0x009beda8:
  if (lVar3 == 0) {
    lVar5 = uVar6 + 1;
    pvVar2 = pvVar7;
  }
  else {
    puVar4 = (undefined8 *)((long)pvVar7 + uVar6 * 8 + 0x178);
    lVar5 = lVar3;
    do {
      pvVar2 = (void *)*puVar4;
      lVar5 = lVar5 + -1;
      puVar4 = (undefined8 *)((long)pvVar2 + 0x170);
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


// ===== 009bef64  FUN_009bef64 =====

void FUN_009bef64(undefined1 (*param_1) [16],uint param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  uint local_6c;
  undefined1 auStack_68 [24];
  undefined *local_50;
  long local_48;
  uint *local_40;
  uint *puStack_38;
  undefined **local_30;
  long lStack_28;
  uint **local_8;
  
  local_6c = param_2;
  if ((-1 < (int)param_2) && ((0x13 < param_2 || ((1 << (ulong)(param_2 & 0x1f) & 0x80b10U) == 0))))
  {
    if (((long *)*param_3 == (long *)0xffffffffffffffff) || (*(long *)*param_3 == 0)) {
      uVar1 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,"signal driver gone",0x12);
      *(undefined8 *)*param_1 = 0;
      *(undefined8 *)(*param_1 + 8) = uVar1;
      return;
    }
    if ((int)DAT_00b0f708 != 0) {
      FUN_009bf930();
    }
    uVar2 = (ulong)param_2;
    local_50 = &DAT_00b0f6f0;
    if (DAT_00b0f700 <= uVar2) {
      uVar1 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,&DAT_0029ff40,0x10);
      *(undefined8 *)*param_1 = 0;
      *(undefined8 *)(*param_1 + 8) = uVar1;
      return;
    }
    local_48 = 0;
    lVar3 = DAT_00b0f6f8 + uVar2 * 0x18;
    if ((int)*(undefined8 *)(lVar3 + 0x10) != 0) {
      local_40 = (uint *)&local_48;
      puStack_38 = &local_6c;
      local_30 = &local_50;
      local_8 = &local_40;
                    /* try { // try from 009bf12c to 009bf14b has its CatchHandler @ 009bf174 */
      lStack_28 = lVar3;
      <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
                (lVar3 + 0x10,0,&local_8,&DAT_00af5d50,
                 &PTR_s__root__cargo_registry_src_index__00af5fb0);
      if (local_48 != 0) goto LAB_009befd0;
    }
    if (*(char *)(lVar3 + 0x14) != '\0') {
      if ((int)DAT_00b0f708 != 0) {
        FUN_009bf930();
      }
      auVar4 = FUN_009c28a0(&DAT_00b0f6f0,uVar2);
      *param_1 = auVar4;
      return;
    }
    uVar1 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,&DAT_0037cca5,0x21);
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = uVar1;
    return;
  }
  local_40 = &local_6c;
  puStack_38 = (uint *)PTR_fmt_00b00d18;
  alloc::fmt::format::format_inner(auStack_68,&DAT_002ba624,&local_40);
  local_48 = <alloc::io::error::core::io::error::Error>::new<alloc::string::String>(0x2a,auStack_68)
  ;
LAB_009befd0:
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_48;
  return;
}


// ===== 009bf190  tokio::signal::unix::ctrl_c =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::signal::unix::ctrl_c */

void __rustcall tokio::signal::unix::ctrl_c(void)

{
  signal(2,&PTR_s__root__cargo_registry_src_index__00af5fc8);
  return;
}


// ===== 009bf1a0  tokio::signal::unix::signal =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::signal::unix::signal */

void __rustcall tokio::signal::unix::signal(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  long *local_d8;
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
  long lStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  auVar5 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_3);
  local_d8 = auVar5._8_8_;
  lVar1 = 0x140;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar1 = 0xe0;
  }
  if (*(long *)((long)local_d8 + lVar1 + 0x48) == 0) {
                    /* try { // try from 009bf324 to 009bf337 has its CatchHandler @ 009bf360 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("there is no signal driver running, must be called from the context of Tokio runtime"
               ,0x53,param_3);
  }
                    /* try { // try from 009bf1e8 to 009bf1f3 has its CatchHandler @ 009bf360 */
  FUN_009bef64(&local_d0,param_2);
  if (local_d0 == 0) {
    *param_1 = 0;
    param_1[1] = lStack_c8;
    if (auVar5._0_8_ != 0) {
      do {
        lVar1 = *local_d8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_d8,0x10);
        if (bVar3) {
          *local_d8 = lVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto joined_r0x009bf29c;
    }
    do {
      lVar1 = *local_d8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_d8,0x10);
      if (bVar3) {
        *local_d8 = lVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    local_38 = 0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar4 = (long *)FUN_004b25a4(0xa0,8);
    if (plVar4 == (long *)0x0) {
                    /* try { // try from 009bf33c to 009bf347 has its CatchHandler @ 009bf34c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0xa0);
    }
    *param_1 = (long)plVar4;
    param_1[1] = (long)&PTR_FUN_00af5e98;
    plVar4[0xd] = lStack_68;
    plVar4[0xc] = local_70;
    plVar4[0xf] = lStack_58;
    plVar4[0xe] = lStack_60;
    plVar4[0x11] = lStack_48;
    plVar4[0x10] = local_50;
    plVar4[0x13] = CONCAT71(uStack_37,local_38);
    plVar4[0x12] = lStack_40;
    plVar4[5] = lStack_a8;
    plVar4[4] = local_b0;
    plVar4[7] = lStack_98;
    plVar4[6] = lStack_a0;
    plVar4[9] = lStack_88;
    plVar4[8] = local_90;
    plVar4[0xb] = lStack_78;
    plVar4[10] = lStack_80;
    plVar4[1] = lStack_c8;
    *plVar4 = local_d0;
    plVar4[3] = lStack_b8;
    plVar4[2] = lStack_c0;
    if (auVar5._0_8_ != 0) {
      do {
        lVar1 = *local_d8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_d8,0x10);
        if (bVar3) {
          *local_d8 = lVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
joined_r0x009bf29c:
      if (lVar1 != 0) {
        return;
      }
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_d8);
      return;
    }
    do {
      lVar1 = *local_d8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_d8,0x10);
      if (bVar3) {
        *local_d8 = lVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar1 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::drop_slow
            (&local_d8);
  return;
}


// ===== 009bf378  tokio::io::util::read_line::finish_string_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::util::read_line::finish_string_read */

undefined1  [16] __rustcall
tokio::io::util::read_line::finish_string_read
          (long param_1,ulong param_2,long *param_3,ulong param_4,long *param_5,ulong param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (param_1 == 1) {
    if (*param_3 == -1) {
      if (*param_5 != 0) {
        param_6 = param_6 & 0xffffffff;
        free((void *)param_5[1]);
      }
      lVar6 = param_3[1];
      lVar3 = param_3[3];
      param_5[1] = param_3[2];
      *param_5 = lVar6;
      param_5[2] = lVar3;
      if ((param_6 & 1) != 0) {
        uVar5 = param_5[2];
        uVar1 = uVar5 - param_4;
        if (param_4 <= uVar5) {
          if (((uVar1 != 0) && (uVar1 < uVar5)) &&
             (iVar4 = (int)*(char *)(param_5[1] + uVar1),
             iVar4 == -0x41 || iVar4 + 0x41 < 0 != SCARRY4(iVar4,0x41))) {
                    /* try { // try from 009bf4d4 to 009bf4eb has its CatchHandler @ 009bf500 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic
                      (&DAT_0037cc1d,0x30,&PTR_s__root__cargo_registry_src_index__00af5fe0);
          }
          param_5[2] = uVar1;
        }
      }
    }
    else {
                    /* try { // try from 009bf3a8 to 009bf3b7 has its CatchHandler @ 009bf4f0 */
      FUN_009bf518(param_5,param_3,param_4);
    }
  }
  else {
    if (*param_3 == -1) {
      if (*param_5 != 0) {
        free((void *)param_5[1]);
      }
      lVar6 = param_3[1];
      lVar3 = param_3[3];
      param_5[1] = param_3[2];
      *param_5 = lVar6;
      param_5[2] = lVar3;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2;
      return auVar2 << 0x40;
    }
    FUN_009bf518(param_5,param_3,param_2);
    param_2 = <alloc::io::error::core::io::error::Error>::new<&str>
                        (0x15,runtime::io::EXPOSE_IO,0x22);
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = 1;
  return auVar7;
}


// ===== 009bf518  FUN_009bf518 =====

void FUN_009bf518(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined8 uStack_38;
  
  lVar2 = param_2[1];
  lVar4 = *param_2;
  uVar1 = 0;
  if (param_3 <= (ulong)param_2[2]) {
    uVar1 = param_3;
  }
  lVar6 = param_2[2] - uVar1;
                    /* try { // try from 009bf544 to 009bf553 has its CatchHandler @ 009bf5dc */
  core::str::converts::from_utf8(&local_58,lVar2,lVar6);
  lVar3 = lVar2;
  lVar5 = lVar4;
  lVar7 = lVar6;
  if ((((uint)local_58 & 1) != 0) && (lVar3 = lVar6, lVar5 = lVar2, lVar7 = local_50, lVar4 != -1))
  {
    uStack_38 = lStack_48;
    local_40 = local_50;
                    /* try { // try from 009bf5b4 to 009bf5d7 has its CatchHandler @ 009bf5fc */
    local_58 = lVar4;
    local_50 = lVar2;
    lStack_48 = lVar6;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("The original data must be valid utf-8.",0x26,&local_58,&PTR_FUN_00af5ed8,
               &PTR_s__root__cargo_registry_src_index__00af5ff8);
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_1[2] = lVar7;
  return;
}


// ===== 009bf620  FUN_009bf620 =====

void FUN_009bf620(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  long local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long local_38 [2];
  long local_28;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = param_1[1];
    local_40 = param_1[2];
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
  local_60 = local_80[0];
  while( true ) {
    FUN_009bed50(local_38,local_80);
    if (local_38[0] == 0) break;
    plVar3 = *(long **)(local_38[0] + local_28 * 0x10 + 0xb0);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009bf69c to 009bf69f has its CatchHandler @ 009bf6b4 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  return;
}


// ===== 009bf6cc  <tokio::signal::unix::OsExtraData_as_tokio::signal::registry::Init>::init =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::signal::unix::OsExtraData as tokio::signal::registry::Init>::init */

undefined4 __rustcall
<tokio::signal::unix::OsExtraData_as_tokio::signal::registry::Init>::init(void)

{
  int local_30 [2];
  undefined4 local_28;
  undefined1 local_8 [8];
  
  <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::pair(local_30);
  if (local_30[0] != 1) {
    return local_28;
  }
                    /* try { // try from 009bf70c to 009bf72f has its CatchHandler @ 009bf734 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("failed to create UnixStream",0x1b,local_8,&PTR_FUN_00af5ef8,
             &PTR_s__root__cargo_registry_src_index__00af6010);
}


// ===== 009bf74c  <tokio::net::unix::split::ReadHalf_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::ReadHalf as tokio::io::async_read::AsyncRead>::poll_read */

void __rustcall
<tokio::net::unix::split::ReadHalf_as_tokio::io::async_read::AsyncRead>::poll_read
          (undefined8 *param_1)

{
  FUN_0099dd34(*param_1);
  return;
}


// ===== 009bf754  <tokio::net::unix::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::WriteHalf as tokio::io::async_write::AsyncWrite>::poll_write */

void __rustcall
<tokio::net::unix::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write
          (undefined8 *param_1)

{
  FUN_0099e06c(*param_1);
  return;
}


// ===== 009bf75c  <tokio::net::unix::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::WriteHalf as tokio::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio::net::unix::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
          (long *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  if (*(int *)(*param_1 + 0x18) != -1) {
    uVar2 = <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::shutdown
                      ((int *)(*param_1 + 0x18),1);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    return auVar1 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 009bf798  <tokio::net::unix::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split::WriteHalf as tokio::io::async_write::AsyncWrite>::poll_write_vectored
    */

void __rustcall
<tokio::net::unix::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009aa1b4(local_28,param_2,1,&local_28);
  return;
}


// ===== 009bf7c8  FUN_009bf7c8 =====

void FUN_009bf7c8(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_0037cdb8 + *(int *)(&DAT_0037cdb8 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_0037cd88 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 009bf7f4  FUN_009bf7f4 =====

void FUN_009bf7f4(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"FromUtf8Error",0xd,"bytes",5,param_1,&PTR_FUN_00af6040,"error",5,&local_18,
             &DAT_00af6060);
  return;
}


// ===== 009bf864  <tokio::signal::unix::SignalInfo_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::signal::unix::SignalInfo as core::default::Default>::default */

void __rustcall <tokio::signal::unix::SignalInfo_as_core::default::Default>::default(long param_1)

{
  <tokio::signal::registry::EventInfo_as_core::default::Default>::default();
  *(undefined4 *)(param_1 + 0x10) = 3;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


// ===== 009bf890  <tokio::signal::unix::Signal_as_tokio::signal::unix::InternalStream>::poll_recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::signal::unix::Signal as tokio::signal::unix::InternalStream>::poll_recv */

undefined8 __rustcall
<tokio::signal::unix::Signal_as_tokio::signal::unix::InternalStream>::poll_recv(undefined8 *param_1)

{
  undefined1 local_c0 [9] [16];
  undefined1 local_28;
  
  local_c0[0] = (**(code **)(param_1[1] + 0x18))(*param_1);
  if (SUB168(local_c0[0],0) != 0) {
    local_28 = 0;
    FUN_009b5fb0(param_1,local_c0);
    return 1;
  }
  return 2;
}


// ===== 009bf8f0  FUN_009bf8f0 =====

void FUN_009bf8f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"RecvErrorEmptyInvalidDigitPosOverflowNegOverflowZeroNotAPowerOfTwo",9,
             &local_18,&DAT_00af6080);
  return;
}


// ===== 009bf930  FUN_009bf930 =====

void FUN_009bf930(void)

{
  undefined *local_28;
  undefined **local_20;
  undefined8 **local_18;
  
  local_28 = &DAT_00b0f6f0;
  if ((int)DAT_00b0f708 == 0) {
    return;
  }
  local_20 = &local_28;
  local_18 = &local_20;
  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
            (&DAT_00b0f708,0,&local_18,&DAT_00af60a0,
             &PTR_s__root__cargo_registry_src_index__00af60c8);
  return;
}


// ===== 009bf9a0  FUN_009bf9a0 =====

void FUN_009bf9a0(long *param_1)

{
  if (*param_1 == 2) {
    return;
  }
                    /* try { // try from 009bf9c4 to 009bf9cb has its CatchHandler @ 009bf9ec */
  FUN_0099f8c0();
  if ((int)param_1[3] != -1) {
    close((int)param_1[3]);
  }
  FUN_009c00bc(param_1);
  return;
}


// ===== 009bfa18  FUN_009bfa18 =====

void FUN_009bfa18(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      free((void *)*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 5;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009bfa88  FUN_009bfa88 =====

void FUN_009bfa88(long *param_1)

{
  void *__ptr;
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar7 = 0;
    do {
      puVar6 = (undefined8 *)((long)__ptr + lVar7 * 0x18);
                    /* try { // try from 009bfad4 to 009bfadb has its CatchHandler @ 009bfb58 */
      FUN_009c7118(puVar6);
      plVar4 = (long *)*puVar6;
      lVar7 = lVar7 + 1;
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
                    /* try { // try from 009bfafc to 009bfb03 has its CatchHandler @ 009bfb50 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(puVar6);
      }
    } while (lVar7 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009bfbcc  FUN_009bfbcc =====

void FUN_009bfbcc(long *param_1)

{
                    /* try { // try from 009bfbdc to 009bfbdf has its CatchHandler @ 009bfc0c */
  FUN_009c4e8c();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009bfc30  FUN_009bfc30 =====

void FUN_009bfc30(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 009bfc50 to 009bfc57 has its CatchHandler @ 009bfc88 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 009bfca8  FUN_009bfca8 =====

void FUN_009bfca8(long *param_1)

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
                    /* try { // try from 009bfce0 to 009bfd07 has its CatchHandler @ 009bfdc8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
                    /* try { // try from 009bfd08 to 009bfd0f has its CatchHandler @ 009bfd98 */
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
                    /* try { // try from 009bfd2c to 009bfd33 has its CatchHandler @ 009bfd90 */
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
                    /* try { // try from 009bfd58 to 009bfd5b has its CatchHandler @ 009bfd74 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
      drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009bfe18  FUN_009bfe18 =====

void FUN_009bfe18(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(param_1 + 8);
  plVar4 = (long *)*puVar6;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 0x28;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* try { // try from 009bfe48 to 009bfe4f has its CatchHandler @ 009bfe88 */
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar4 + 0x22);
      plVar4 = (long *)*puVar6;
    }
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(puVar6);
      return;
    }
  }
  return;
}


// ===== 009bfebc  FUN_009bfebc =====

void FUN_009bfebc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 009bfecc to 009bfecf has its CatchHandler @ 009bff08 */
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


// ===== 009bff3c  FUN_009bff3c =====

int FUN_009bff3c(long param_1)

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


// ===== 009bff90  FUN_009bff90 =====

void FUN_009bff90(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 009bffa0 to 009bffa3 has its CatchHandler @ 009bffdc */
  FUN_009c7118();
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 009c0010  FUN_009c0010 =====

void FUN_009c0010(long *param_1)

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


// ===== 009c005c  FUN_009c005c =====

void FUN_009c005c(long param_1)

{
                    /* try { // try from 009c006c to 009c006f has its CatchHandler @ 009c0090 */
  FUN_0099fc40();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_009c00bc(param_1);
  return;
}


// ===== 009c00bc  FUN_009c00bc =====

void FUN_009c00bc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 009c00cc to 009c00cf has its CatchHandler @ 009c0160 */
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
                    /* try { // try from 009c00f8 to 009c011f has its CatchHandler @ 009c0158 */
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


// ===== 009c019c  FUN_009c019c =====

void FUN_009c019c(long param_1)

{
                    /* try { // try from 009c01ac to 009c01af has its CatchHandler @ 009c01d0 */
  FUN_0099fb60();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_009c00bc(param_1);
  return;
}


// ===== 009c01fc  FUN_009c01fc =====

void FUN_009c01fc(undefined8 *param_1)

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
                    /* try { // try from 009c0228 to 009c022f has its CatchHandler @ 009c0268 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
    drop_slow(param_1 + 1);
    return;
  }
  return;
}


// ===== 009c029c  FUN_009c029c =====

void FUN_009c029c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 8);
  lVar3 = (param_2 - param_1 >> 4) + 1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    plVar1 = puVar4 + -1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 2;
                    /* try { // try from 009c02d0 to 009c02d3 has its CatchHandler @ 009c02e8 */
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  return;
}


// ===== 009c0314  FUN_009c0314 =====

ulong FUN_009c0314(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = fcntl(param_1,3);
  if ((uVar1 != 0xffffffff) && (iVar2 = fcntl(param_1,4,(ulong)(uVar1 | 0x800)), iVar2 != -1)) {
    return 0;
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af60f8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 009c03b4  FUN_009c03b4 =====

ulong FUN_009c03b4(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  int local_3c;
  long local_38;
  long lStack_30;
  long local_28;
  
                    /* try { // try from 009c03cc to 009c03cf has its CatchHandler @ 009c049c */
  lVar2 = FUN_009c0314();
  if (lVar2 != 0) {
    *param_1 = 2;
    param_1[1] = lVar2;
    uVar1 = close(param_2);
    return (ulong)uVar1;
  }
                    /* try { // try from 009c03f0 to 009c03fb has its CatchHandler @ 009c0488 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6110);
                    /* try { // try from 009c0408 to 009c041f has its CatchHandler @ 009c0470 */
  local_3c = param_2;
  uVar3 = FUN_009a4c30(&local_38,&local_3c,3,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af6110);
  if (local_38 == 2) {
    uVar1 = close(local_3c);
    *param_1 = 2;
    param_1[1] = lStack_30;
    return (ulong)uVar1;
  }
  *param_1 = local_38;
  param_1[1] = lStack_30;
  param_1[2] = local_28;
  *(int *)(param_1 + 3) = local_3c;
  return uVar3;
}


// ===== 009c04b0  FUN_009c04b0 =====

ulong FUN_009c04b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = fcntl(param_1,3);
  if ((uVar1 != 0xffffffff) && (iVar2 = fcntl(param_1,4,(ulong)(uVar1 & 0xfffff7ff)), iVar2 != -1))
  {
    return 0;
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af60f8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 009c0550  FUN_009c0550 =====

void FUN_009c0550(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 local_30;
  undefined1 local_28;
  
  plVar1 = *(long **)*param_1;
  *(long *)*param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6128);
  }
  puVar2 = (undefined8 *)*plVar1;
  <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::pair(&local_48);
  if (local_48 != 1) {
    local_28 = 0;
    local_30 = DAT_002a1ab0;
                    /* try { // try from 009c05a0 to 009c05b3 has its CatchHandler @ 009c0610 */
    FUN_009c3c4c(&local_48,&local_30);
    auVar4 = FUN_009c2f58(&local_48);
    uVar3 = NEON_rev64(CONCAT44(uStack_40,local_44),4);
    *puVar2 = uVar3;
    *(undefined1 (*) [16])(puVar2 + 1) = auVar4;
    return;
  }
                    /* try { // try from 009c05e8 to 009c060b has its CatchHandler @ 009c0638 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("failed to create UnixStream",0x1b,&local_30,&PTR_FUN_00af5ef8,
             &PTR_s__root__cargo_registry_src_index__00af6010);
}


// ===== 009c0650  FUN_009c0650 =====

void FUN_009c0650(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 local_30;
  undefined1 local_28;
  
  plVar1 = *(long **)*param_1;
  *(long *)*param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6128);
  }
  puVar2 = (undefined8 *)*plVar1;
  <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::pair(&local_48);
  if (local_48 != 1) {
    local_28 = 0;
    local_30 = DAT_002a1ab0;
                    /* try { // try from 009c06a0 to 009c06b3 has its CatchHandler @ 009c0710 */
    FUN_009c3c4c(&local_48,&local_30);
    auVar4 = FUN_009c2f58(&local_48);
    uVar3 = NEON_rev64(CONCAT44(uStack_40,local_44),4);
    *puVar2 = uVar3;
    *(undefined1 (*) [16])(puVar2 + 1) = auVar4;
    return;
  }
                    /* try { // try from 009c06e8 to 009c070b has its CatchHandler @ 009c0738 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("failed to create UnixStream",0x1b,&local_30,&PTR_FUN_00af5ef8,
             &PTR_s__root__cargo_registry_src_index__00af6010);
}


// ===== 009c0750  <tokio::net::udp::tokio::net::udp::UdpSocket>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::local_addr */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::local_addr(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::local_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0774  <tokio::net::udp::tokio::net::udp::UdpSocket>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::take_error */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::take_error(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::take_error();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0798  <tokio::net::udp::tokio::net::udp::UdpSocket>::bind_device =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::bind_device */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::bind_device
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    local_24 = <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
    <socket2::sys::[6]::socket2::socket::Socket>::bind_device(&local_24,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
}


// ===== 009c080c  <tokio::net::udp::tokio::net::udp::UdpSocket>::try_send_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::try_send_to */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::try_send_to
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = param_1;
  uStack_28 = param_2;
  local_20 = param_3;
  uStack_18 = param_4;
  FUN_009a5f64(param_1,2,&local_30);
  return;
}


// ===== 009c0838  <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_send_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_send_to */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::poll_send_to
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = param_1;
  uStack_28 = param_3;
  local_20 = param_4;
  uStack_18 = param_5;
  FUN_009a8f6c(param_1,param_2,1,&local_30);
  return;
}


// ===== 009c0864  <tokio::net::udp::tokio::net::udp::UdpSocket>::set_broadcast =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::set_broadcast */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::set_broadcast(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::set_broadcast();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0888  <tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek_from */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek_from
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a58d4(param_1,1,&local_28);
  return;
}


// ===== 009c08b4  <tokio::net::udp::tokio::net::udp::UdpSocket>::try_recv_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::try_recv_from */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::try_recv_from
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a5afc(param_1,1,&local_28);
  return;
}


// ===== 009c08e0  <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek_from */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek_from
          (short *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long local_68;
  short local_60;
  undefined8 local_5e;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_2a;
  
  FUN_009a86f0(&local_68,param_2,param_3,0,param_4,param_2);
  if (local_60 == -1) {
    *param_1 = -1;
    return;
  }
  if (local_60 == 2) {
    *param_1 = 2;
    *(long *)(param_1 + 4) = local_68;
    return;
  }
  local_40 = local_5e;
  uVar1 = *(ulong *)(param_4 + 0x10) + local_68;
  uStack_2a = uStack_48;
  if (*(ulong *)(param_4 + 0x18) < uVar1) {
    *(ulong *)(param_4 + 0x18) = uVar1;
  }
  if (*(ulong *)(param_4 + 0x10) <= uVar1) {
    *(ulong *)(param_4 + 0x10) = uVar1;
    *param_1 = local_60;
    *(ulong *)(param_1 + 5) = CONCAT26(uStack_50,uStack_56);
    *(undefined8 *)(param_1 + 1) = local_5e;
    *(undefined8 *)(param_1 + 0xc) = uStack_48;
    *(ulong *)(param_1 + 8) = CONCAT62(uStack_4e,uStack_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce5b,0xf,&PTR_s__root__cargo_registry_src_index__00af6158);
}


// ===== 009c09c0  <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv_from */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv_from
          (short *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long local_68;
  short local_60;
  undefined8 local_5e;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_2a;
  
  FUN_009a89bc(&local_68,param_2,param_3,0,param_4,param_2);
  if (local_60 == -1) {
    *param_1 = -1;
    return;
  }
  if (local_60 == 2) {
    *param_1 = 2;
    *(long *)(param_1 + 4) = local_68;
    return;
  }
  local_40 = local_5e;
  uVar1 = *(ulong *)(param_4 + 0x10) + local_68;
  uStack_2a = uStack_48;
  if (*(ulong *)(param_4 + 0x18) < uVar1) {
    *(ulong *)(param_4 + 0x18) = uVar1;
  }
  if (*(ulong *)(param_4 + 0x10) <= uVar1) {
    *(ulong *)(param_4 + 0x10) = uVar1;
    *param_1 = local_60;
    *(ulong *)(param_1 + 5) = CONCAT26(uStack_50,uStack_56);
    *(undefined8 *)(param_1 + 1) = local_5e;
    *(undefined8 *)(param_1 + 0xc) = uStack_48;
    *(ulong *)(param_1 + 8) = CONCAT62(uStack_4e,uStack_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce5b,0xf,&PTR_s__root__cargo_registry_src_index__00af6170);
}


// ===== 009c0aa0  <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv_ready */

undefined1  [16] __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv_ready
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


// ===== 009c0b04  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_send_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_send_ready
    */

undefined1  [16] __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::
poll_send_ready(undefined8 param_1,undefined8 param_2)

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


// ===== 009c0b84  <tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek_sender =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek_sender */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek_sender(undefined8 param_1)

{
  FUN_009a5608(param_1,1,param_1);
  return;
}


// ===== 009c0b90  <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_ttl_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_ttl_v4 */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_ttl_v4(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::multicast_ttl_v4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0bb4  <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek_sender =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek_sender */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek_sender
          (undefined8 param_1,undefined8 param_2)

{
  FUN_009a819c(param_1,param_2,0,param_1);
  return;
}


// ===== 009c0bc0  <tokio::net::udp::tokio::net::udp::UdpSocket>::join_multicast_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::join_multicast_v4 */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::join_multicast_v4
          (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::join_multicast_v4
              ((int *)(param_1 + 0x18),&local_18,&local_14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0c04  <tokio::net::udp::tokio::net::udp::UdpSocket>::join_multicast_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::join_multicast_v6 */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::join_multicast_v6(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::join_multicast_v6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0c28  <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_loop_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_loop_v4 */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_loop_v4(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::multicast_loop_v4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0c4c  <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_loop_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_loop_v6 */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::multicast_loop_v6(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::multicast_loop_v6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0c70  <tokio::net::udp::tokio::net::udp::UdpSocket>::leave_multicast_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::leave_multicast_v4 */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::leave_multicast_v4
          (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::leave_multicast_v4
              ((int *)(param_1 + 0x18),&local_18,&local_14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0cb4  <tokio::net::udp::tokio::net::udp::UdpSocket>::leave_multicast_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::leave_multicast_v6 */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::leave_multicast_v6(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::leave_multicast_v6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0cd8  <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_ttl_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_ttl_v4 */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_ttl_v4(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::set_multicast_ttl_v4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0cfc  <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_loop_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_loop_v4 */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_loop_v4(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::set_multicast_loop_v4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0d20  <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_loop_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_loop_v6 */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::set_multicast_loop_v6(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::set_multicast_loop_v6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0d44  <tokio::net::udp::tokio::net::udp::UdpSocket>::tos =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::tos */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::tos(undefined8 param_1,long param_2)

{
  undefined4 local_4;
  
  if (*(int *)(param_2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
  }
  if (-1 < *(int *)(param_2 + 0x18)) {
    local_4 = <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
    <socket2::socket::[0]::socket2::socket::Socket>::tos(param_1,&local_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
}


// ===== 009c0da8  <tokio::net::udp::tokio::net::udp::UdpSocket>::ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::ttl */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::ttl(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::ttl();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0dcc  <tokio::net::udp::tokio::net::udp::UdpSocket>::device =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::device */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::device(undefined8 param_1,long param_2)

{
  undefined4 local_4;
  
  if (*(int *)(param_2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
  }
  if (-1 < *(int *)(param_2 + 0x18)) {
    local_4 = <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
    <socket2::sys::[6]::socket2::socket::Socket>::device(param_1,&local_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
}


// ===== 009c0e30  <tokio::net::udp::tokio::net::udp::UdpSocket>::set_tos =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::set_tos */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::set_tos(long param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    local_4 = <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
    <socket2::socket::[0]::socket2::socket::Socket>::set_tos(&local_4,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
}


// ===== 009c0e94  <tokio::net::udp::tokio::net::udp::UdpSocket>::set_ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::set_ttl */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::set_ttl(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::set_ttl();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c0eb8  <tokio::net::udp::tokio::net::udp::UdpSocket>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::from_std */

ulong __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::from_std
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
  
                    /* try { // try from 009c0edc to 009c0eeb has its CatchHandler @ 009c0fb0 */
  local_18 = param_2;
  iVar1 = <std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 009c0f68 to 009c0f7f has its CatchHandler @ 009c0fb0 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 009c0eec to 009c0ef3 has its CatchHandler @ 009c0f9c */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_3);
                    /* try { // try from 009c0f00 to 009c0f13 has its CatchHandler @ 009c0f84 */
  local_14 = param_2;
  uVar3 = FUN_009a4d48(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,param_3);
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


// ===== 009c0fc4  <tokio::net::udp::tokio::net::udp::UdpSocket>::into_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::into_std */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::into_std(undefined4 *param_1,undefined8 *param_2)

{
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  FUN_0099b178(&local_50,&local_40);
  if (local_50 == 1) {
    *(undefined8 *)(param_1 + 2) = local_48;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  return;
}


// ===== 009c1030  <tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::try_peek
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a615c(param_1,1,&local_28);
  return;
}


// ===== 009c105c  <tokio::net::udp::tokio::net::udp::UdpSocket>::try_recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::try_recv */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::try_recv
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a633c(param_1,1,&local_28);
  return;
}


// ===== 009c1088  <tokio::net::udp::tokio::net::udp::UdpSocket>::try_send =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::try_send */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::try_send
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a651c(param_1,2,&local_28);
  return;
}


// ===== 009c10b4  <tokio::net::udp::tokio::net::udp::UdpSocket>::as_socket =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::as_socket */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::as_socket(long param_1)

{
  if (*(int *)(param_1 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
}


// ===== 009c10f8  <tokio::net::udp::tokio::net::udp::UdpSocket>::bind_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::bind_addr */

ulong __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::bind_addr(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  int local_3c;
  int local_38;
  int iStack_34;
  long local_30;
  long local_28;
  
  uVar2 = <mio::net::udp::mio::net::udp::UdpSocket>::bind(&local_38);
  local_3c = iStack_34;
  if (local_38 == 1) {
    *param_1 = 2;
    param_1[1] = local_30;
    return uVar2;
  }
                    /* try { // try from 009c1140 to 009c114b has its CatchHandler @ 009c11d8 */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6188);
                    /* try { // try from 009c1158 to 009c116f has its CatchHandler @ 009c11c0 */
  uVar2 = FUN_009a4d48(&local_38,&local_3c,3,auVar3._0_8_,auVar3._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af6188);
  if (CONCAT44(iStack_34,local_38) == 2) {
    uVar1 = close(local_3c);
    *param_1 = 2;
    param_1[1] = local_30;
    return (ulong)uVar1;
  }
  param_1[2] = local_28;
  *(int *)(param_1 + 3) = local_3c;
  *param_1 = CONCAT44(iStack_34,local_38);
  param_1[1] = local_30;
  return uVar2;
}


// ===== 009c11ec  <tokio::net::udp::tokio::net::udp::UdpSocket>::broadcast =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::broadcast */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::broadcast(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::broadcast();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c1210  <tokio::net::udp::tokio::net::udp::UdpSocket>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::peer_addr */

void __rustcall <tokio::net::udp::tokio::net::udp::UdpSocket>::peer_addr(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::udp::mio::net::udp::UdpSocket>::peer_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c1234  <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek */

undefined8 __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::poll_peek
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_009a9194(param_1,param_2,0,param_3,param_1);
  if (auVar2._0_8_ != 0) {
    if (auVar2._0_8_ == 2) {
      return 1;
    }
    return 0;
  }
  uVar1 = *(ulong *)(param_3 + 0x10) + auVar2._8_8_;
  if (*(ulong *)(param_3 + 0x18) < uVar1) {
    *(ulong *)(param_3 + 0x18) = uVar1;
  }
  if (*(ulong *)(param_3 + 0x10) <= uVar1) {
    *(ulong *)(param_3 + 0x10) = uVar1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce5b,0xf,&PTR_s__root__cargo_registry_src_index__00af61a0);
}


// ===== 009c12cc  <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv */

undefined8 __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::poll_recv
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_009a9424(param_1,param_2,0,param_3,param_1);
  if (auVar2._0_8_ != 0) {
    if (auVar2._0_8_ == 2) {
      return 1;
    }
    return 0;
  }
  uVar1 = *(ulong *)(param_3 + 0x10) + auVar2._8_8_;
  if (*(ulong *)(param_3 + 0x18) < uVar1) {
    *(ulong *)(param_3 + 0x18) = uVar1;
  }
  if (*(ulong *)(param_3 + 0x10) <= uVar1) {
    *(ulong *)(param_3 + 0x10) = uVar1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce5b,0xf,&PTR_s__root__cargo_registry_src_index__00af61b8);
}


// ===== 009c1364  <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_send =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::tokio::net::udp::UdpSocket>::poll_send */

void __rustcall
<tokio::net::udp::tokio::net::udp::UdpSocket>::poll_send
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009a96b4(param_1,param_2,1,&local_28);
  return;
}


// ===== 009c1390  <tokio::sync::barrier::tokio::sync::barrier::Barrier>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::barrier::tokio::sync::barrier::Barrier>::new */

void __rustcall
<tokio::sync::barrier::tokio::sync::barrier::Barrier>::new(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar6 = (long *)FUN_004b25a4(0x158,8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x158);
  }
  plVar6[0x28] = 0;
  plVar6[0x29] = 1;
  plVar6[0x2a] = 1;
  plVar6[1] = 1;
  *plVar6 = 1;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  plVar6[0x13] = 0;
  plVar6[0x12] = 0;
  plVar6[0x15] = 0;
  plVar6[0x14] = 0;
  plVar6[0x17] = 0;
  plVar6[0x16] = 0;
  plVar6[0x19] = 0;
  plVar6[0x18] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1f] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x21] = 0;
  plVar6[0x20] = 0;
  plVar6[0x23] = 0;
  plVar6[0x22] = 0;
  plVar6[0x25] = 0;
  plVar6[0x24] = 0;
  plVar6[0x27] = 0;
  plVar6[0x26] = 0;
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
    *param_1 = plVar6;
    param_1[1] = 0;
    uVar4 = _UNK_0029fa78;
    uVar3 = _DAT_0029fa70;
    if (param_2 < 2) {
      param_2 = 1;
    }
    param_1[2] = 0;
    param_1[3] = plVar6;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[6] = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x9c1444);
  (*pcVar5)();
}


// ===== 009c1444  <tokio::time::instant::tokio::time::instant::Instant>::checked_add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::tokio::time::instant::Instant>::checked_add */

void __rustcall <tokio::time::instant::tokio::time::instant::Instant>::checked_add(void)

{
  <std::time::[5]::std::time::SystemTime>::checked_add();
  return;
}


// ===== 009c1458  <tokio::time::instant::tokio::time::instant::Instant>::checked_sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::tokio::time::instant::Instant>::checked_sub */

void __rustcall <tokio::time::instant::tokio::time::instant::Instant>::checked_sub(void)

{
  <std::time::[5]::std::time::SystemTime>::checked_sub();
  return;
}


// ===== 009c146c  <tokio::time::instant::tokio::time::instant::Instant>::duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::tokio::time::instant::Instant>::duration_since */

void __rustcall <tokio::time::instant::tokio::time::instant::Instant>::duration_since(void)

{
  (*(code *)PTR_duration_since_00b036f0)();
  return;
}


// ===== 009c1470  <tokio::time::instant::tokio::time::instant::Instant>::checked_duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::tokio::time::instant::Instant>::checked_duration_since */

void __rustcall <tokio::time::instant::tokio::time::instant::Instant>::checked_duration_since(void)

{
  (*(code *)PTR_checked_duration_since_00b05358)();
  return;
}


// ===== 009c1474  <tokio::time::instant::tokio::time::instant::Instant>::now =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::tokio::time::instant::Instant>::now */

void __rustcall <tokio::time::instant::tokio::time::instant::Instant>::now(void)

{
  (*(code *)PTR_now_00b033f8)();
  return;
}


// ===== 009c1478  <tokio::time::instant::tokio::time::instant::Instant>::elapsed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::tokio::time::instant::Instant>::elapsed */

void __rustcall <tokio::time::instant::tokio::time::instant::Instant>::elapsed(undefined8 *param_1)

{
  undefined1 local_30 [12];
  
  local_30 = <std::time::std::time::Instant>::now();
  <std::time::std::time::Instant>::duration_since(local_30,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 009c14bc  <tokio::util::wake_list::tokio::util::wake_list::WakeList>::wake_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::util::wake_list::tokio::util::wake_list::WakeList>::wake_all */

void __rustcall <tokio::util::wake_list::tokio::util::wake_list::WakeList>::wake_all(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0x40];
  param_1[0x40] = 0;
  for (lVar1 = lVar1 << 4; lVar1 != 0; lVar1 = lVar1 + -0x10) {
                    /* try { // try from 009c14f4 to 009c14f7 has its CatchHandler @ 009c150c */
    (**(code **)(*param_1 + 8))(param_1[1]);
    param_1 = param_1 + 2;
  }
  return;
}


// ===== 009c152c  <tokio::io::util::copy::tokio::io::util::copy::CopyBuffer>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::copy::tokio::io::util::copy::CopyBuffer>::new */

void __rustcall
<tokio::io::util::copy::tokio::io::util::copy::CopyBuffer>::new(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (-1 < param_2) {
    if (param_2 == 0) {
      lVar1 = 1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      lVar1 = FUN_004b263c(param_2,1);
      if (lVar1 == 0) goto LAB_009c1548;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 5) = 0;
    param_1[4] = 0;
    *param_1 = lVar1;
    param_1[1] = param_2;
    return;
  }
  uVar2 = 0;
LAB_009c1548:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_2);
}


// ===== 009c15a0  <tokio::net::unix::pipe::tokio::net::unix::pipe::OpenOptions>::open =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::tokio::net::unix::pipe::OpenOptions>::open */

ulong __rustcall
<tokio::net::unix::pipe::tokio::net::unix::pipe::OpenOptions>::open
          (undefined4 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
          undefined1 param_5)

{
  int __fd;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  __ino_t _Stack_a8;
  __nlink_t local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  __dev_t _Stack_88;
  __off_t _Stack_80;
  __blksize_t _Stack_78;
  __blkcnt_t local_70;
  __time_t _Stack_68;
  long lStack_60;
  __time_t _Stack_58;
  long local_50;
  __time_t _Stack_48;
  long lStack_40;
  long lStack_38;
  int local_14;
  
  local_c0 = 0x1b600000800;
  local_b8 = (ulong)CONCAT11(param_5,param_5) ^ 0x100;
  uVar3 = <std::fs::[j]::std::fs::OpenOptions>::_open(&local_b0,&local_c0);
  if ((int)local_b0 == 1) {
    *param_1 = 1;
    *(__ino_t *)(param_1 + 2) = _Stack_a8;
    return uVar3;
  }
  __fd = local_b0._4_4_;
  local_14 = local_b0._4_4_;
  if ((*param_2 & 1) == 0) {
                    /* try { // try from 009c1620 to 009c16eb has its CatchHandler @ 009c16f0 */
    iVar1 = <std::sys::fd::unix::FileDesc_as_std::os::fd::owned::AsFd>::as_fd(&local_14);
    _Stack_a8 = 0;
    local_b0 = 0;
    uStack_98._0_4_ = 0;
    uStack_98._4_4_ = 0;
    local_a0 = 0;
    _Stack_88 = 0;
    local_90._0_4_ = 0;
    local_90._4_4_ = 0;
    _Stack_78 = 0;
    _Stack_80 = 0;
    _Stack_68 = 0;
    local_70 = 0;
    _Stack_58 = 0;
    lStack_60 = 0;
    _Stack_48 = 0;
    local_50 = 0;
    lStack_38 = 0;
    lStack_40 = 0;
    uVar2 = fstat(iVar1,(stat *)&local_b0);
    uVar3 = (ulong)uVar2;
    if (uVar2 == 0xffffffff) {
      piVar4 = (int *)__errno();
      iVar1 = *piVar4;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
      }
      uVar3 = (long)iVar1 << 0x20 | 2;
    }
    else {
      if (((uint)local_a0 & 0xf000) == 0x1000) goto LAB_009c165c;
      uVar3 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0037ce6a,10);
    }
    *(ulong *)(param_1 + 2) = uVar3;
    *param_1 = 1;
    uVar2 = close(__fd);
    return (ulong)uVar2;
  }
LAB_009c165c:
  *param_1 = 0;
  param_1[1] = __fd;
  return uVar3;
}


// ===== 009c1704  <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::notify_waiters =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::notify_waiters */

void __rustcall
<tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::notify_waiters
          (long param_1)

{
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters();
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(param_1 + 0x20);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(param_1 + 0x40);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(param_1 + 0x60);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(param_1 + 0x80);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(param_1 + 0xa0);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(param_1 + 0xc0);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(param_1 + 0xe0);
  return;
}


// ===== 009c1758  <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::new */

void __rustcall
<tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::new
          (undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  return;
}


// ===== 009c1780  <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::notified =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::notified */

void __rustcall
<tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::notified
          (long *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  
  lVar3 = FUN_009b2398(0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  if ((*(uint *)(lVar3 + 0x38) & 1) == 0) {
    uVar4 = FUN_009c64a0();
    uVar5 = (uint)((ulong)uVar4 >> 0x20);
    uVar2 = (uint)uVar4;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
  }
  else {
    uVar5 = *(uint *)(lVar3 + 0x3c);
    uVar2 = *(uint *)(lVar3 + 0x40);
  }
  uVar5 = uVar5 ^ uVar5 << 0x11;
  *(undefined4 *)(lVar3 + 0x38) = 1;
  *(uint *)(lVar3 + 0x3c) = uVar2;
  uVar5 = uVar2 >> 0x10 ^ uVar5 >> 7 ^ uVar2 ^ uVar5;
  *(uint *)(lVar3 + 0x40) = uVar5;
  puVar1 = (ulong *)(param_2 + (ulong)(uVar5 + uVar2 >> 0x1d) * 0x20);
  uVar6 = *puVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = uVar6 >> 2;
  param_1[2] = 0;
  return;
}


// ===== 009c182c  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::local_addr
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::local_addr
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
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
  }
  <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::local_addr(&local_98);
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


// ===== 009c18dc  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::take_error
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::take_error
          (long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::take_error();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c1900  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::try_recv_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::try_recv_from
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::
try_recv_from(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_c0;
  undefined8 local_b8;
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
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = param_2;
  uStack_30 = param_3;
  local_28 = param_4;
  FUN_009a5d24(&local_c0,param_2,1,&local_38);
  if (local_c0 == 1) {
    *param_1 = 1;
    param_1[1] = local_b8;
    return;
  }
  param_1[0xb] = uStack_68;
  param_1[10] = local_70;
  param_1[0xd] = uStack_58;
  param_1[0xc] = uStack_60;
  param_1[0xf] = uStack_48;
  param_1[0xe] = local_50;
  *(undefined4 *)(param_1 + 0x10) = local_40;
  param_1[3] = uStack_a8;
  param_1[2] = local_b0;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = local_90;
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  *param_1 = 0;
  param_1[1] = local_b8;
  return;
}


// ===== 009c1990  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_recv_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_recv_from
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::
poll_recv_from(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long local_138;
  long local_130;
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
  undefined4 local_b8;
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
  undefined4 local_40;
  
  FUN_009a8c88(&local_138,param_2,param_3,0,param_4,param_2);
  if (local_138 == 2) {
    *param_1 = (int)local_138;
    return;
  }
  if (local_138 == 1) {
    *param_1 = (int)local_138;
    *(long *)(param_1 + 2) = local_130;
    return;
  }
  uStack_68 = uStack_e0;
  local_70 = local_e8;
  uStack_58 = uStack_d0;
  uStack_60 = local_d8;
  local_40 = local_b8;
  uStack_48 = uStack_c0;
  local_50 = local_c8;
  uStack_a8 = uStack_120;
  local_b0 = local_128;
  uStack_98 = uStack_110;
  uStack_a0 = local_118;
  uVar1 = *(ulong *)(param_4 + 0x10) + local_130;
  uStack_88 = uStack_100;
  local_90 = local_108;
  uStack_78 = uStack_f0;
  uStack_80 = local_f8;
  if (*(ulong *)(param_4 + 0x18) < uVar1) {
    *(ulong *)(param_4 + 0x18) = uVar1;
  }
  if (*(ulong *)(param_4 + 0x10) <= uVar1) {
    *(ulong *)(param_4 + 0x10) = uVar1;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x13) = uStack_e0;
    *(undefined8 *)(param_1 + 0x11) = local_e8;
    *(undefined8 *)(param_1 + 0x17) = uStack_d0;
    *(undefined8 *)(param_1 + 0x15) = local_d8;
    *(undefined8 *)(param_1 + 0x1b) = uStack_c0;
    *(undefined8 *)(param_1 + 0x19) = local_c8;
    *(undefined8 *)(param_1 + 3) = uStack_120;
    *(undefined8 *)(param_1 + 1) = local_128;
    *(undefined8 *)(param_1 + 7) = uStack_110;
    *(undefined8 *)(param_1 + 5) = local_118;
    *(undefined8 *)(param_1 + 0xb) = uStack_100;
    *(undefined8 *)(param_1 + 9) = local_108;
    param_1[0x1d] = local_b8;
    *(undefined8 *)(param_1 + 0xf) = uStack_f0;
    *(undefined8 *)(param_1 + 0xd) = local_f8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce5b,0xf,&PTR_s__root__cargo_registry_src_index__00af61d0);
}


// ===== 009c1ac8  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::new */

ulong __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::new
          (long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
                    /* try { // try from 009c1ae4 to 009c1aef has its CatchHandler @ 009c1b80 */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af61e8);
                    /* try { // try from 009c1afc to 009c1b13 has its CatchHandler @ 009c1b68 */
  local_14 = param_2;
  uVar2 = FUN_009a51a8(&local_48,&local_14,3,auVar3._0_8_,auVar3._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af61e8);
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


// ===== 009c1b94  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::pair =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::pair */

ulong __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::pair
          (long *param_1)

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
  
  uVar3 = <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::pair(&local_68);
  if ((int)local_68 == 1) {
    *param_1 = 2;
    param_1[1] = lStack_60;
    return uVar3;
  }
  iVar1 = (int)lStack_60;
                    /* try { // try from 009c1be4 to 009c1bef has its CatchHandler @ 009c1d70 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af61e8);
  local_14 = local_68._4_4_;
                    /* try { // try from 009c1bfc to 009c1c13 has its CatchHandler @ 009c1d60 */
  FUN_009a51a8(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,
               &PTR_s__root__cargo_registry_src_index__00af61e8);
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
                    /* try { // try from 009c1c60 to 009c1c6b has its CatchHandler @ 009c1d44 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af61e8);
  local_14 = iVar1;
                    /* try { // try from 009c1c78 to 009c1c8f has its CatchHandler @ 009c1d3c */
  uVar3 = FUN_009a51a8(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af61e8);
  if (local_48 == 2) {
    close(local_14);
    *param_1 = 2;
    param_1[1] = lStack_40;
                    /* try { // try from 009c1cac to 009c1cb3 has its CatchHandler @ 009c1d14 */
    FUN_0099fb60(&local_68);
    if (iStack_50 != -1) {
      close(iStack_50);
    }
    uVar3 = FUN_009c00bc(&local_68);
    return uVar3;
  }
  param_1[4] = local_48;
  param_1[5] = lStack_40;
  param_1[6] = local_38;
  *(int *)(param_1 + 7) = local_14;
  param_1[1] = lStack_60;
  *param_1 = local_68;
  param_1[3] = CONCAT44(uStack_4c,iStack_50);
  param_1[2] = local_58;
  return uVar3;
}


// ===== 009c1d8c  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::unbound =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::unbound
    */

ulong __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::unbound
          (long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  int local_3c;
  int local_38;
  int iStack_34;
  long local_30;
  long local_28;
  
  uVar2 = <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::unbound(&local_38);
  local_3c = iStack_34;
  if (local_38 == 1) {
    *param_1 = 2;
    param_1[1] = local_30;
    return uVar2;
  }
                    /* try { // try from 009c1dd4 to 009c1ddf has its CatchHandler @ 009c1e6c */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af61e8);
                    /* try { // try from 009c1dec to 009c1e03 has its CatchHandler @ 009c1e54 */
  uVar2 = FUN_009a51a8(&local_38,&local_3c,3,auVar3._0_8_,auVar3._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af61e8);
  if (CONCAT44(iStack_34,local_38) == 2) {
    uVar1 = close(local_3c);
    *param_1 = 2;
    param_1[1] = local_30;
    return (ulong)uVar1;
  }
  param_1[2] = local_28;
  *(int *)(param_1 + 3) = local_3c;
  *param_1 = CONCAT44(iStack_34,local_38);
  param_1[1] = local_30;
  return uVar2;
}


// ===== 009c1e80  FUN_009c1e80 =====

ulong FUN_009c1e80(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int iStack_30;
  undefined4 uStack_2c;
  int local_24;
  
                    /* try { // try from 009c1e98 to 009c1ea3 has its CatchHandler @ 009c1fbc */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af61e8);
                    /* try { // try from 009c1eb0 to 009c1ec7 has its CatchHandler @ 009c1fac */
  local_24 = param_2;
  FUN_009a51a8(&local_48,&local_24,3,auVar3._0_8_,auVar3._8_8_,
               &PTR_s__root__cargo_registry_src_index__00af61e8);
  if (local_48 == 2) {
    uVar1 = close(local_24);
    *param_1 = 2;
    param_1[1] = lStack_40;
    return (ulong)uVar1;
  }
  iStack_30 = local_24;
                    /* try { // try from 009c1f0c to 009c1f13 has its CatchHandler @ 009c1f98 */
  auVar3 = <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::take_error(&iStack_30);
  if (((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar3._8_8_ == 0)) {
    param_1[1] = lStack_40;
    *param_1 = local_48;
    param_1[3] = CONCAT44(uStack_2c,iStack_30);
    param_1[2] = local_38;
    return auVar3._0_8_;
  }
  *param_1 = 2;
  param_1[1] = auVar3._8_8_;
                    /* try { // try from 009c1f24 to 009c1f2b has its CatchHandler @ 009c1f70 */
  FUN_0099fb60(&local_48);
  if (iStack_30 != -1) {
    close(iStack_30);
  }
  uVar2 = FUN_009c00bc(&local_48);
  return uVar2;
}


// ===== 009c1fd0  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::from_std
    */

ulong __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::from_std
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
  
                    /* try { // try from 009c1ff4 to 009c2003 has its CatchHandler @ 009c20c8 */
  local_18 = param_2;
  iVar1 = <std::sys::fd::unix::FileDesc_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 009c2080 to 009c2097 has its CatchHandler @ 009c20c8 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 009c2004 to 009c200b has its CatchHandler @ 009c20b4 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_3);
                    /* try { // try from 009c2018 to 009c202b has its CatchHandler @ 009c209c */
  local_14 = param_2;
  uVar3 = FUN_009a51a8(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,param_3);
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


// ===== 009c20dc  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::into_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::into_std
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::into_std
          (undefined4 *param_1,undefined8 *param_2)

{
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  FUN_0099b378(&local_50,&local_40);
  if (local_50 == 1) {
    *(undefined8 *)(param_1 + 2) = local_48;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  return;
}


// ===== 009c2148  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::shutdown
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::shutdown
          (long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::shutdown();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c216c  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::try_recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::try_recv
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::try_recv
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a763c(param_1,1,&local_28);
  return;
}


// ===== 009c2198  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::try_send =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::try_send
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::try_send
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a781c(param_1,2,&local_28);
  return;
}


// ===== 009c21c4  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::peer_addr
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::peer_addr
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
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
  }
  <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::peer_addr(&local_98);
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


// ===== 009c2274  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_recv
    */

undefined8 __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_recv
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_009a98cc(param_1,param_2,0,param_3,param_1);
  if (auVar2._0_8_ != 0) {
    if (auVar2._0_8_ == 2) {
      return 1;
    }
    return 0;
  }
  uVar1 = *(ulong *)(param_3 + 0x10) + auVar2._8_8_;
  if (*(ulong *)(param_3 + 0x18) < uVar1) {
    *(ulong *)(param_3 + 0x18) = uVar1;
  }
  if (*(ulong *)(param_3 + 0x10) <= uVar1) {
    *(ulong *)(param_3 + 0x10) = uVar1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce5b,0xf,&PTR_s__root__cargo_registry_src_index__00af6200);
}


// ===== 009c230c  <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_send =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_send
    */

void __rustcall
<tokio::net::unix::datagram::socket::tokio::net::unix::datagram::socket::UnixDatagram>::poll_send
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009a9b5c(param_1,param_2,1,&local_28);
  return;
}


// ===== 009c2338  <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_owned_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_owned_fd */

ulong __rustcall
<tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_owned_fd
          (__dev_t *param_1,int param_2)

{
  __dev_t _Var1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined1 auVar7 [16];
  __dev_t local_b0;
  __dev_t _Stack_a8;
  __dev_t local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  __dev_t _Stack_88;
  __off_t _Stack_80;
  __blksize_t _Stack_78;
  __blkcnt_t local_70;
  __time_t _Stack_68;
  long lStack_60;
  __time_t _Stack_58;
  long local_50;
  __time_t _Stack_48;
  long lStack_40;
  long lStack_38;
  int local_14;
  
  _Stack_a8 = 0;
  local_b0 = 0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  local_a0 = 0;
  _Stack_88 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  _Stack_78 = 0;
  _Stack_80 = 0;
  _Stack_68 = 0;
  local_70 = 0;
  _Stack_58 = 0;
  lStack_60 = 0;
  _Stack_48 = 0;
  local_50 = 0;
  lStack_38 = 0;
  lStack_40 = 0;
  iVar2 = fstat(param_2,(stat *)&local_b0);
  if (iVar2 == -1) {
    piVar5 = (int *)__errno();
    lVar6 = (long)*piVar5;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
                    /* try { // try from 009c2450 to 009c2543 has its CatchHandler @ 009c2574 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
    }
  }
  else {
    if (((uint)local_a0 & 0xf000) != 0x1000) {
      uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0037ce6a,10);
      goto LAB_009c24a4;
    }
    uVar3 = fcntl(param_2,3);
    if ((int)uVar3 < 0) {
      piVar5 = (int *)__errno();
      lVar6 = (long)*piVar5;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
      }
    }
    else {
      if (1 < (uVar3 & 3) - 1) {
        uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0037ce74,0x25);
        goto LAB_009c24a4;
      }
      if ((uVar3 | 0x800) == uVar3) {
LAB_009c23c4:
        iVar2 = <mio::sys::unix::pipe::Receiver_as_std::os::fd::raw::FromRawFd>::from_raw_fd
                          (param_2);
                    /* try { // try from 009c23d0 to 009c23db has its CatchHandler @ 009c2560 */
        auVar7 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                           (&PTR_s__root__cargo_registry_src_index__00af6218);
                    /* try { // try from 009c23e8 to 009c23ff has its CatchHandler @ 009c2548 */
        local_14 = iVar2;
        uVar4 = FUN_009a53d8(&local_b0,&local_14,2,auVar7._0_8_,auVar7._8_8_,
                             &PTR_s__root__cargo_registry_src_index__00af6218);
        _Var1 = _Stack_a8;
        if (local_b0 == 2) {
          uVar3 = close(local_14);
          *param_1 = 2;
          param_1[1] = _Var1;
          return (ulong)uVar3;
        }
        param_1[2] = local_a0;
        *(int *)(param_1 + 3) = local_14;
        *param_1 = local_b0;
        param_1[1] = _Stack_a8;
        return uVar4;
      }
      iVar2 = fcntl(param_2,4);
      if (-1 < iVar2) goto LAB_009c23c4;
      piVar5 = (int *)__errno();
      lVar6 = (long)*piVar5;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
      }
    }
  }
  uVar4 = lVar6 << 0x20 | 2;
LAB_009c24a4:
  *param_1 = 2;
  param_1[1] = uVar4;
  uVar3 = close(param_2);
  return (ulong)uVar3;
}


// ===== 009c2588  <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::into_blocking_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::into_blocking_fd */

ulong __rustcall
<tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::into_blocking_fd
          (undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uVar2 = FUN_0099b5e0(&local_50,&local_40);
  if (local_50 == 1) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 2) = local_48;
    return uVar2;
  }
                    /* try { // try from 009c25e0 to 009c25e7 has its CatchHandler @ 009c2624 */
  lVar3 = FUN_009c04b0(local_4c);
  if (lVar3 != 0) {
    *(long *)(param_1 + 2) = lVar3;
    *param_1 = 1;
    uVar1 = close(local_4c);
    return (ulong)uVar1;
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  return 0;
}


// ===== 009c2638  <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::try_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::try_write_vectored */

void __rustcall
<tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::try_write_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a79fc(param_1,2,&local_28);
  return;
}


// ===== 009c2664  <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_file_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_file_unchecked */

ulong __rustcall
<tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_file_unchecked(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
  iVar1 = <mio::sys::unix::pipe::Receiver_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 009c2684 to 009c268f has its CatchHandler @ 009c2720 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6218);
                    /* try { // try from 009c269c to 009c26b3 has its CatchHandler @ 009c2708 */
  local_14 = iVar1;
  uVar3 = FUN_009a53d8(&local_48,&local_14,2,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af6218);
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


// ===== 009c2734  <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::into_nonblocking_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::into_nonblocking_fd */

void __rustcall
<tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::into_nonblocking_fd
          (undefined4 *param_1,undefined8 *param_2)

{
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  FUN_0099b5e0(&local_50,&local_40);
  if (local_50 == 1) {
    *(undefined8 *)(param_1 + 2) = local_48;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  return;
}


// ===== 009c27a0  <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_owned_fd_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_owned_fd_unchecked */

ulong __rustcall
<tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_owned_fd_unchecked
          (long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
  iVar1 = <mio::sys::unix::pipe::Receiver_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 009c27c0 to 009c27cb has its CatchHandler @ 009c285c */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6218);
                    /* try { // try from 009c27d8 to 009c27ef has its CatchHandler @ 009c2844 */
  local_14 = iVar1;
  uVar3 = FUN_009a53d8(&local_48,&local_14,2,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af6218);
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


// ===== 009c2870  <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_file =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_file */

void __rustcall <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::from_file(void)

{
  (*(code *)PTR_from_owned_fd_00b05390)();
  return;
}


// ===== 009c2874  <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::try_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::try_write */

void __rustcall
<tokio::net::unix::pipe::[0]::tokio::net::unix::pipe::Sender>::try_write
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7be4(param_1,2,&local_28);
  return;
}


// ===== 009c28a0  FUN_009c28a0 =====

void FUN_009c28a0(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong local_28;
  ulong *local_20;
  undefined *puStack_18;
  
  local_28 = param_2;
  if ((*(ulong *)(param_1 + 0x10) <= param_2) || (*(long *)(param_1 + 8) == 0)) {
    local_20 = &local_28;
    puStack_18 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002a7cbf,&local_20,&PTR_s__root__cargo_registry_src_index__00af6230);
  }
  plVar4 = *(long **)(*(long *)(param_1 + 8) + param_2 * 0x18);
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
    plVar4 = plVar4 + 0x28;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x9c2938);
  (*pcVar3)();
}


// ===== 009c2938  <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_owned_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_owned_fd */

ulong __rustcall
<tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_owned_fd
          (__dev_t *param_1,int param_2)

{
  __dev_t _Var1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined1 auVar7 [16];
  __dev_t local_b0;
  __dev_t _Stack_a8;
  __dev_t local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  __dev_t _Stack_88;
  __off_t _Stack_80;
  __blksize_t _Stack_78;
  __blkcnt_t local_70;
  __time_t _Stack_68;
  long lStack_60;
  __time_t _Stack_58;
  long local_50;
  __time_t _Stack_48;
  long lStack_40;
  long lStack_38;
  int local_14;
  
  _Stack_a8 = 0;
  local_b0 = 0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  local_a0 = 0;
  _Stack_88 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  _Stack_78 = 0;
  _Stack_80 = 0;
  _Stack_68 = 0;
  local_70 = 0;
  _Stack_58 = 0;
  lStack_60 = 0;
  _Stack_48 = 0;
  local_50 = 0;
  lStack_38 = 0;
  lStack_40 = 0;
  iVar2 = fstat(param_2,(stat *)&local_b0);
  if (iVar2 == -1) {
    piVar5 = (int *)__errno();
    lVar6 = (long)*piVar5;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
                    /* try { // try from 009c2a44 to 009c2b37 has its CatchHandler @ 009c2b68 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
    }
  }
  else {
    if (((uint)local_a0 & 0xf000) != 0x1000) {
      uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0037ce6a,10);
      goto LAB_009c2a98;
    }
    uVar3 = fcntl(param_2,3);
    if ((int)uVar3 < 0) {
      piVar5 = (int *)__errno();
      lVar6 = (long)*piVar5;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
      }
    }
    else {
      if ((uVar3 & 1) != 0) {
        uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0037ceac,0x25);
        goto LAB_009c2a98;
      }
      if ((uVar3 | 0x800) == uVar3) {
LAB_009c29b8:
        iVar2 = <mio::sys::unix::pipe::Receiver_as_std::os::fd::raw::FromRawFd>::from_raw_fd
                          (param_2);
                    /* try { // try from 009c29c4 to 009c29cf has its CatchHandler @ 009c2b54 */
        auVar7 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                           (&PTR_s__root__cargo_registry_src_index__00af6278);
                    /* try { // try from 009c29dc to 009c29f3 has its CatchHandler @ 009c2b3c */
        local_14 = iVar2;
        uVar4 = FUN_009a54f0(&local_b0,&local_14,1,auVar7._0_8_,auVar7._8_8_,
                             &PTR_s__root__cargo_registry_src_index__00af6278);
        _Var1 = _Stack_a8;
        if (local_b0 == 2) {
          uVar3 = close(local_14);
          *param_1 = 2;
          param_1[1] = _Var1;
          return (ulong)uVar3;
        }
        param_1[2] = local_a0;
        *(int *)(param_1 + 3) = local_14;
        *param_1 = local_b0;
        param_1[1] = _Stack_a8;
        return uVar4;
      }
      iVar2 = fcntl(param_2,4);
      if (-1 < iVar2) goto LAB_009c29b8;
      piVar5 = (int *)__errno();
      lVar6 = (long)*piVar5;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
      }
    }
  }
  uVar4 = lVar6 << 0x20 | 2;
LAB_009c2a98:
  *param_1 = 2;
  param_1[1] = uVar4;
  uVar3 = close(param_2);
  return (ulong)uVar3;
}


// ===== 009c2b7c  <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::into_blocking_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::into_blocking_fd */

ulong __rustcall
<tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::into_blocking_fd
          (undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uVar2 = FUN_0099b748(&local_50,&local_40);
  if (local_50 == 1) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 2) = local_48;
    return uVar2;
  }
                    /* try { // try from 009c2bd4 to 009c2bdb has its CatchHandler @ 009c2c18 */
  lVar3 = FUN_009c04b0(local_4c);
  if (lVar3 != 0) {
    *(long *)(param_1 + 2) = lVar3;
    *param_1 = 1;
    uVar1 = close(local_4c);
    return (ulong)uVar1;
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  return 0;
}


// ===== 009c2c2c  <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::try_read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::try_read_vectored */

void __rustcall
<tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::try_read_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7dcc(param_1,1,&local_28);
  return;
}


// ===== 009c2c58  <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_file_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_file_unchecked */

ulong __rustcall
<tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_file_unchecked(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
  iVar1 = <mio::sys::unix::pipe::Receiver_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 009c2c78 to 009c2c83 has its CatchHandler @ 009c2d14 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6278);
                    /* try { // try from 009c2c90 to 009c2ca7 has its CatchHandler @ 009c2cfc */
  local_14 = iVar1;
  uVar3 = FUN_009a54f0(&local_48,&local_14,1,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af6278);
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


// ===== 009c2d28  <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::into_nonblocking_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::into_nonblocking_fd */

void __rustcall
<tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::into_nonblocking_fd
          (undefined4 *param_1,undefined8 *param_2)

{
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  FUN_0099b748(&local_50,&local_40);
  if (local_50 == 1) {
    *(undefined8 *)(param_1 + 2) = local_48;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  return;
}


// ===== 009c2d94  <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_owned_fd_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_owned_fd_unchecked */

ulong __rustcall
<tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_owned_fd_unchecked
          (long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
  iVar1 = <mio::sys::unix::pipe::Receiver_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 009c2db4 to 009c2dbf has its CatchHandler @ 009c2e50 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6278);
                    /* try { // try from 009c2dcc to 009c2de3 has its CatchHandler @ 009c2e38 */
  local_14 = iVar1;
  uVar3 = FUN_009a54f0(&local_48,&local_14,1,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af6278);
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


// ===== 009c2e64  <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::try_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::try_read */

void __rustcall
<tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::try_read
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7fb4(param_1,1,&local_28);
  return;
}


// ===== 009c2e90  <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_file =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_file */

void __rustcall <tokio::net::unix::pipe::[4]::tokio::net::unix::pipe::Receiver>::from_file(void)

{
  (*(code *)PTR_from_owned_fd_00b053a0)();
  return;
}


// ===== 009c2e94  FUN_009c2e94 =====

undefined1  [16] FUN_009c2e94(ulong *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_1[2];
  if (*param_1 <= uVar1) {
    auVar3._0_8_ = param_1[1];
    auVar3._8_8_ = uVar1;
    return auVar3;
  }
  if (uVar1 != 0) {
    auVar2._0_8_ = FUN_004b2600((void *)param_1[1],*param_1 * 0x28,8,uVar1 * 0x28);
    if (auVar2._0_8_ != 0) {
      auVar2._8_8_ = uVar1;
      return auVar2;
    }
                    /* try { // try from 009c2f34 to 009c2f3f has its CatchHandler @ 009c2f44 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(8,uVar1 * 0x28);
  }
  free((void *)param_1[1]);
  return ZEXT816(8);
}


// ===== 009c2f58  FUN_009c2f58 =====

undefined1  [16] FUN_009c2f58(ulong *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_1[2];
  if (*param_1 <= uVar1) {
    auVar3._0_8_ = param_1[1];
    auVar3._8_8_ = uVar1;
    return auVar3;
  }
  if (uVar1 != 0) {
    auVar2._0_8_ = FUN_004b2600((void *)param_1[1],*param_1 * 0x18,8,uVar1 * 0x18);
    if (auVar2._0_8_ != 0) {
      auVar2._8_8_ = uVar1;
      return auVar2;
    }
                    /* try { // try from 009c2ff8 to 009c3003 has its CatchHandler @ 009c3008 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(8,uVar1 * 0x18);
  }
  free((void *)param_1[1]);
  return ZEXT816(8);
}


// ===== 009c3020  FUN_009c3020 =====

undefined1  [16] FUN_009c3020(ulong *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_1[2];
  if (*param_1 <= uVar1) {
    auVar3._0_8_ = param_1[1];
    auVar3._8_8_ = uVar1;
    return auVar3;
  }
  if (uVar1 != 0) {
    auVar2._0_8_ = FUN_004b2600((void *)param_1[1],*param_1 << 4,8,uVar1 << 4);
    if (auVar2._0_8_ != 0) {
      auVar2._8_8_ = uVar1;
      return auVar2;
    }
                    /* try { // try from 009c30b8 to 009c30c3 has its CatchHandler @ 009c30c8 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(8,uVar1 << 4);
  }
  free((void *)param_1[1]);
  return ZEXT816(8);
}


// ===== 009c30e0  FUN_009c30e0 =====

ulong FUN_009c30e0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  int __fd;
  uint uVar3;
  int __fd_00;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong unaff_x22;
  undefined1 auVar11 [16];
  undefined8 uStack_140;
  long local_130;
  undefined4 uStack_114;
  long local_110;
  ulong uStack_108;
  ulong uStack_100;
  int local_f8;
  undefined4 uStack_f4;
  long local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  ulong uStack_c8;
  ulong local_c0;
  int local_54;
  
  uVar5 = <std::process::[i]::std::process::Command>::spawn(&local_d0);
  uVar8 = local_c0;
  uVar1 = uStack_c8;
  lVar2 = local_d0;
  if ((int)local_d0 == 2) {
    *param_1 = -1;
    param_1[1] = uStack_c8;
    return uVar5;
  }
  uVar5 = local_c0 >> 0x20;
  __fd_00 = (int)(local_c0 >> 0x20);
  uStack_140 = CONCAT44(0xffffffff,(int)uStack_c8);
  iVar10 = (int)local_c0;
  if (uStack_c8 >> 0x20 != 0xffffffff) {
                    /* try { // try from 009c3180 to 009c3187 has its CatchHandler @ 009c3570 */
    lVar7 = FUN_009c0314(uStack_c8 >> 0x20);
    __fd = (int)(uVar1 >> 0x20);
    if (lVar7 == 0) {
                    /* try { // try from 009c31ac to 009c31b7 has its CatchHandler @ 009c3518 */
      auVar11 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                          (&PTR_s__root__cargo_registry_src_index__00af6110);
      local_f0 = CONCAT44(local_f0._4_4_,__fd);
                    /* try { // try from 009c31c4 to 009c31db has its CatchHandler @ 009c3508 */
      FUN_009a4c30(&local_d0,&local_f0,3,auVar11._0_8_,auVar11._8_8_,
                   &PTR_s__root__cargo_registry_src_index__00af6110);
      lVar7 = local_d0;
      unaff_x22 = uStack_c8;
      uVar1 = local_c0;
      uVar4 = (uint)local_f0;
      if (local_d0 != 2) goto joined_r0x009c3284;
      uVar4 = close((uint)local_f0);
      *param_1 = -1;
      param_1[1] = uStack_c8;
    }
    else {
      uVar4 = close(__fd);
      *param_1 = -1;
      param_1[1] = lVar7;
    }
    uVar8 = (ulong)uVar4;
    if (iVar10 != -1) {
      uVar4 = close(iVar10);
      uVar8 = (ulong)uVar4;
    }
    goto LAB_009c3420;
  }
  local_130 = 2;
  lVar7 = local_130;
  uVar4 = local_d0._4_4_;
joined_r0x009c3284:
  local_130 = lVar7;
  if (iVar10 == -1) {
    lVar7 = 2;
    uVar9 = (ulong)uVar4;
    uStack_108 = unaff_x22;
    iVar10 = (int)uVar1;
LAB_009c3298:
    local_110 = lVar7;
    uStack_100 = uVar9;
    local_f8 = iVar10;
    if (uVar5 == 0xffffffff) {
      lVar7 = 2;
      local_c0 = 0xffffffff;
      uStack_e8 = uVar8;
LAB_009c32b8:
                    /* try { // try from 009c32c4 to 009c32d7 has its CatchHandler @ 009c34f0 */
      local_f0 = lVar7;
      uStack_e0 = local_c0;
      local_d8 = iVar10;
      uVar8 = tokio::signal::unix::signal
                        (&local_d0,0x11,&PTR_s__root__cargo_registry_src_index__00af6290);
      if (local_d0 != 0) {
        param_1[1] = unaff_x22;
        *param_1 = local_130;
        param_1[3] = CONCAT44(uStack_114,uVar4);
        param_1[2] = uVar1;
        param_1[5] = uStack_108;
        param_1[4] = local_110;
        param_1[7] = CONCAT44(uStack_f4,local_f8);
        param_1[6] = uStack_100;
        param_1[9] = uStack_e8;
        param_1[8] = local_f0;
        param_1[0xb] = CONCAT44(uStack_d4,local_d8);
        param_1[10] = uStack_e0;
        param_1[0xd] = uStack_140;
        param_1[0xc] = lVar2;
        param_1[0xe] = -1;
        param_1[0xf] = local_d0;
        param_1[0x10] = uStack_c8;
        return uVar8;
      }
      *param_1 = -1;
      param_1[1] = uStack_c8;
      if (local_f0 != 2) {
                    /* try { // try from 009c3354 to 009c335b has its CatchHandler @ 009c3460 */
        FUN_0099f8c0(&local_f0);
        if (local_d8 != -1) {
          close(local_d8);
        }
                    /* try { // try from 009c336c to 009c3373 has its CatchHandler @ 009c3458 */
        uVar8 = FUN_009c00bc(&local_f0);
      }
    }
    else {
                    /* try { // try from 009c3328 to 009c332f has its CatchHandler @ 009c34e0 */
      uVar5 = FUN_009c0314(uVar5);
      if (uVar5 == 0) {
                    /* try { // try from 009c3378 to 009c3383 has its CatchHandler @ 009c3498 */
        auVar11 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                            (&PTR_s__root__cargo_registry_src_index__00af6110);
                    /* try { // try from 009c3390 to 009c33a7 has its CatchHandler @ 009c3488 */
        local_54 = __fd_00;
        FUN_009a4c30(&local_d0,&local_54,3,auVar11._0_8_,auVar11._8_8_,
                     &PTR_s__root__cargo_registry_src_index__00af6110);
        lVar7 = local_d0;
        uStack_e8 = uStack_c8;
        uVar5 = uStack_c8;
        iVar10 = local_54;
        __fd_00 = local_54;
        if (local_d0 != 2) goto LAB_009c32b8;
      }
      uVar3 = close(__fd_00);
      uVar8 = (ulong)uVar3;
      *param_1 = -1;
      param_1[1] = uVar5;
    }
    if (local_110 != 2) {
                    /* try { // try from 009c33d0 to 009c33d7 has its CatchHandler @ 009c34a4 */
      FUN_0099f8c0(&local_110);
      if (local_f8 != -1) {
        close(local_f8);
      }
                    /* try { // try from 009c33e8 to 009c33ef has its CatchHandler @ 009c349c */
      uVar8 = FUN_009c00bc(&local_110);
    }
    __fd_00 = -1;
  }
  else {
                    /* try { // try from 009c3168 to 009c316f has its CatchHandler @ 009c3558 */
    uVar6 = FUN_009c0314(uVar8 & 0xffffffff);
    if (uVar6 == 0) {
                    /* try { // try from 009c320c to 009c3217 has its CatchHandler @ 009c34dc */
      auVar11 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                          (&PTR_s__root__cargo_registry_src_index__00af6110);
      local_f0 = CONCAT44(local_f0._4_4_,iVar10);
                    /* try { // try from 009c3224 to 009c323b has its CatchHandler @ 009c34cc */
      FUN_009a4c30(&local_d0,&local_f0,3,auVar11._0_8_,auVar11._8_8_,
                   &PTR_s__root__cargo_registry_src_index__00af6110);
      lVar7 = local_d0;
      uVar9 = local_c0;
      uStack_108 = uStack_c8;
      uVar6 = uStack_c8;
      iVar10 = (uint)local_f0;
      if (local_d0 != 2) goto LAB_009c3298;
    }
    uVar3 = close(iVar10);
    uVar8 = (ulong)uVar3;
    *param_1 = -1;
    param_1[1] = uVar6;
  }
  if (local_130 != 2) {
                    /* try { // try from 009c3400 to 009c3407 has its CatchHandler @ 009c3530 */
    FUN_0099f8c0(&local_130);
    if (uVar4 != 0xffffffff) {
      close(uVar4);
    }
                    /* try { // try from 009c3418 to 009c341f has its CatchHandler @ 009c351c */
    uVar8 = FUN_009c00bc(&local_130);
  }
LAB_009c3420:
  if (__fd_00 != -1) {
    uVar4 = close(__fd_00);
    uVar8 = (ulong)uVar4;
  }
  return uVar8;
}


// ===== 009c3590  FUN_009c3590 =====

ulong FUN_009c3590(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uVar2 = FUN_0099b010(&local_60,&local_50);
  if (local_60 == 1) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 2) = local_58;
    return uVar2;
  }
  uVar1 = fcntl(local_5c,3);
  if (uVar1 == 0xffffffff) {
    puVar3 = (uint *)__errno();
    uVar2 = (ulong)*puVar3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
                    /* try { // try from 009c3658 to 009c36c7 has its CatchHandler @ 009c36cc */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
    }
  }
  else {
    uVar1 = fcntl(local_5c,4,(ulong)(uVar1 & 0xfffff7ff));
    if (uVar1 != 0xffffffff) {
      *param_1 = 0;
      param_1[1] = local_5c;
      return (ulong)uVar1;
    }
    puVar3 = (uint *)__errno();
    uVar2 = (ulong)*puVar3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
    }
  }
  *param_1 = 1;
  *(ulong *)(param_1 + 2) = uVar2 << 0x20 | 2;
  uVar1 = close(local_5c);
  return (ulong)uVar1;
}


// ===== 009c36e0  tokio::net::unix::pipe::pipe =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::net::unix::pipe::pipe */

ulong __rustcall tokio::net::unix::pipe::pipe(long *param_1)

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
  
  uVar3 = mio::sys::unix::pipe::new(&local_68);
  if ((int)local_68 == 1) {
    *param_1 = 2;
    param_1[1] = lStack_60;
    return uVar3;
  }
  iVar1 = (int)lStack_60;
                    /* try { // try from 009c3730 to 009c373b has its CatchHandler @ 009c38d0 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6218);
  local_14 = local_68._4_4_;
                    /* try { // try from 009c3748 to 009c375f has its CatchHandler @ 009c38b0 */
  FUN_009a53d8(&local_48,&local_14,2,auVar4._0_8_,auVar4._8_8_,
               &PTR_s__root__cargo_registry_src_index__00af6218);
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
                    /* try { // try from 009c37ac to 009c37b7 has its CatchHandler @ 009c3890 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6278);
  local_14 = iVar1;
                    /* try { // try from 009c37c4 to 009c37db has its CatchHandler @ 009c3888 */
  uVar3 = FUN_009a54f0(&local_48,&local_14,1,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af6278);
  if (local_48 == 2) {
    close(local_14);
    *param_1 = 2;
    param_1[1] = lStack_40;
                    /* try { // try from 009c37f8 to 009c37ff has its CatchHandler @ 009c3860 */
    FUN_0099fc40(&local_68);
    if (iStack_50 != -1) {
      close(iStack_50);
    }
    uVar3 = FUN_009c00bc(&local_68);
    return uVar3;
  }
  param_1[4] = local_48;
  param_1[5] = lStack_40;
  param_1[6] = local_38;
  *(int *)(param_1 + 7) = local_14;
  param_1[1] = lStack_60;
  *param_1 = local_68;
  param_1[3] = CONCAT44(uStack_4c,iStack_50);
  param_1[2] = local_58;
  return uVar3;
}


// ===== 009c38ec  FUN_009c38ec =====

bool FUN_009c38ec(int param_1)

{
  return param_1 == 4;
}


// ===== 009c38f8  FUN_009c38f8 =====

undefined8 FUN_009c38f8(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x22;
  switch(param_1) {
  case 1:
  case 0xd:
    uVar1 = 1;
switchD_009c391c_caseD_7:
    return uVar1;
  case 2:
    return 0;
  default:
    return 0x2b;
  case 4:
    return 0x23;
  case 5:
    return 0x29;
  case 7:
    goto switchD_009c391c_caseD_7;
  case 0xb:
    return 0xd;
  case 0xc:
    return 0x26;
  case 0x10:
    return 0x1c;
  case 0x11:
    return 0xc;
  case 0x12:
    return 0x1f;
  case 0x14:
    return 0xe;
  case 0x15:
    return 0xf;
  case 0x16:
    return 0x14;
  case 0x17:
  case 0x18:
    return 0x28;
  case 0x1a:
    return 0x1d;
  case 0x1b:
    return 0x1b;
  case 0x1c:
    return 0x18;
  case 0x1d:
    return 0x19;
  case 0x1e:
    return 0x11;
  case 0x1f:
    return 0x20;
  case 0x20:
    return 0xb;
  case 0x23:
    return 0x1e;
  case 0x24:
    return 0x21;
  case 0x26:
  case 0x5f:
    return 0x24;
  case 0x27:
    return 0x10;
  case 0x28:
    return 0x12;
  case 0x62:
    return 8;
  case 99:
    return 9;
  case 100:
    return 10;
  case 0x65:
    return 5;
  case 0x67:
    return 6;
  case 0x68:
    return 3;
  case 0x6b:
    return 7;
  case 0x6e:
    return 0x16;
  case 0x6f:
    return 2;
  case 0x71:
    return 4;
  case 0x73:
    return 0x27;
  case 0x74:
    return 0x13;
  case 0x7a:
    return 0x1a;
  }
}


// ===== 009c3a58  FUN_009c3a58 =====

void FUN_009c3a58(undefined4 *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 local_30;
  undefined4 local_28;
  socklen_t local_24;
  
  if (*(int *)(param_2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
  }
  local_30 = 0;
  local_28 = 0;
  local_24 = 0xc;
  iVar1 = getsockopt(*(int *)(param_2 + 0x18),1,0x11,&local_30,&local_24);
  if ((iVar1 == 0) && (local_24 == 0xc)) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 1) = local_30;
    param_1[3] = local_28;
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


// ===== 009c3b34  <tokio::signal::registry::EventInfo_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::signal::registry::EventInfo as core::default::Default>::default */

void __rustcall
<tokio::signal::registry::EventInfo_as_core::default::Default>::default(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *local_30;
  undefined8 uStack_28;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_30 = (long *)FUN_004b25a4(0x150,8);
  if (local_30 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x150);
  }
  plVar4 = local_30 + 0x28;
  local_30[1] = 1;
  *local_30 = 1;
  local_30[3] = 0;
  local_30[2] = 0;
  local_30[5] = 0;
  local_30[4] = 0;
  local_30[7] = 0;
  local_30[6] = 0;
  local_30[9] = 0;
  local_30[8] = 0;
  local_30[0xb] = 0;
  local_30[10] = 0;
  local_30[0xd] = 0;
  local_30[0xc] = 0;
  local_30[0xf] = 0;
  local_30[0xe] = 0;
  local_30[0x11] = 0;
  local_30[0x10] = 0;
  local_30[0x13] = 0;
  local_30[0x12] = 0;
  local_30[0x15] = 0;
  local_30[0x14] = 0;
  local_30[0x17] = 0;
  local_30[0x16] = 0;
  local_30[0x19] = 0;
  local_30[0x18] = 0;
  local_30[0x1b] = 0;
  local_30[0x1a] = 0;
  local_30[0x1d] = 0;
  local_30[0x1c] = 0;
  local_30[0x1f] = 0;
  local_30[0x1e] = 0;
  local_30[0x21] = 0;
  local_30[0x20] = 0;
  local_30[0x23] = 0;
  local_30[0x22] = 0;
  local_30[0x25] = 0;
  local_30[0x24] = 0;
  local_30[0x27] = 0;
  local_30[0x26] = 0;
  local_30[0x29] = 1;
  local_30[0x28] = 1;
  do {
    lVar5 = *local_30;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_30,0x10);
    if (bVar2) {
      *local_30 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar5) {
    uStack_28 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = local_30;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = local_30;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 009c3bcc to 009c3bd3 has its CatchHandler @ 009c3c18 */
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(local_30 + 0x22);
      plVar4 = local_30;
    }
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(&local_30);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x9c3c18);
  (*pcVar3)();
}


// ===== 009c3c4c  FUN_009c3c4c =====

void FUN_009c3c4c(ulong *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x21;
  ulong uVar5;
  int iVar6;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint uStack_44;
  
  if ((char)param_2[2] == '\x01') {
    local_60 = 0;
    local_70 = 0;
    uStack_68 = 8;
    goto LAB_009c3c84;
  }
  if (param_2[2] < *param_2) {
    local_70 = 0;
    uStack_68 = 8;
    iVar1 = *param_2;
    iVar6 = param_2[2];
    if (iVar1 <= iVar6) {
LAB_009c3d68:
      local_60 = 0;
      uVar5 = ((long)iVar6 - (long)iVar1) + 1;
      if (0xfffffffffffffffe < (ulong)((long)iVar6 - (long)iVar1)) {
                    /* try { // try from 009c3dc8 to 009c3df7 has its CatchHandler @ 009c3e50 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ce4a,0x23,&PTR_s__nix_store_8006w282fgsx3273c878b_00af60e0);
      }
      if (local_70 < uVar5) {
        FUN_009bd2b4(&local_70,0,uVar5,8,0x18);
        if (iVar1 < iVar6) goto LAB_009c3d88;
LAB_009c3e04:
        uVar3 = uStack_68;
        uVar5 = local_60;
        if (iVar1 != iVar6) goto LAB_009c3c84;
      }
      else {
        if (iVar6 <= iVar1) goto LAB_009c3e04;
LAB_009c3d88:
        uVar3 = uStack_68;
        iVar6 = iVar6 - iVar1;
        uVar5 = local_60;
        puVar4 = (undefined8 *)(uStack_68 + local_60 * 0x18);
        do {
                    /* try { // try from 009c3d98 to 009c3d9f has its CatchHandler @ 009c3e44 */
          <tokio::signal::registry::EventInfo_as_core::default::Default>::default(&local_58);
          local_48 = 3;
          iVar6 = iVar6 + -1;
          uStack_44 = uStack_44 & 0xffffff00;
          uVar5 = uVar5 + 1;
          puVar4[2] = CONCAT44(uStack_44,3);
          puVar4[1] = uStack_50;
          *puVar4 = local_58;
          puVar4 = puVar4 + 3;
        } while (iVar6 != 0);
      }
                    /* try { // try from 009c3e0c to 009c3e13 has its CatchHandler @ 009c3e40 */
      <tokio::signal::registry::EventInfo_as_core::default::Default>::default(&local_58);
      uStack_44 = uStack_44 & 0xffffff00;
      puVar4 = (undefined8 *)(uVar3 + uVar5 * 0x18);
      local_60 = uVar5 + 1;
      puVar4[2] = CONCAT44(uStack_44,3);
      puVar4[1] = uStack_50;
      *puVar4 = local_58;
      goto LAB_009c3c84;
    }
  }
  else {
    uVar3 = (long)param_2[2] - (long)*param_2;
    uVar5 = uVar3 + 1;
    if (0xfffffffffffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037ce4a,0x23,&PTR_s__nix_store_8006w282fgsx3273c878b_00af63a8);
    }
    if (0x555555555555555 < uVar5) {
      uVar2 = 0;
LAB_009c3cf8:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,unaff_x21);
    }
    if (uVar5 == 0) {
      uStack_68 = 8;
    }
    else {
      unaff_x21 = uVar5 * 0x18;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uStack_68 = FUN_004b25a4(unaff_x21,8);
      uVar2 = 8;
      if (uStack_68 == 0) goto LAB_009c3cf8;
    }
    iVar1 = *param_2;
    iVar6 = param_2[2];
    local_70 = uVar5;
    if (iVar1 <= iVar6) goto LAB_009c3d68;
  }
  local_60 = 0;
LAB_009c3c84:
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  return;
}


// ===== 009c3e68  <tokio::net::udp::UdpSocket_as_std::os::fd::raw::AsRawFd>::as_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::UdpSocket as std::os::fd::raw::AsRawFd>::as_raw_fd */

void __rustcall <tokio::net::udp::UdpSocket_as_std::os::fd::raw::AsRawFd>::as_raw_fd(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c3e8c  <<tokio::util::wake_list::tokio::util::wake_list::WakeList>::wake_all::DropGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<tokio::util::wake_list::tokio::util::wake_list::WakeList>::wake_all::DropGuard as
   core::ops::drop::Drop>::drop */

void __rustcall
<<tokio::util::wake_list::tokio::util::wake_list::WakeList>::wake_all::DropGuard_as_core::ops::drop::Drop>
::drop(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*param_1 + 8);
  lVar3 = (param_1[1] - *param_1 >> 4) + 1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    plVar1 = puVar4 + -1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 2;
                    /* try { // try from 009c3ec4 to 009c3ec7 has its CatchHandler @ 009c3edc */
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  return;
}


// ===== 009c3f08  <tokio::net::udp::UdpSocket_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::UdpSocket as core::fmt::Debug>::fmt */

void __rustcall
<tokio::net::udp::UdpSocket_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,param_1 + 0x18,&PTR_FUN_00af4a88);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009c3f6c  <tokio::process::imp::GlobalOrphanQueue_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::GlobalOrphanQueue as core::fmt::Debug>::fmt */

void __rustcall
<tokio::process::imp::GlobalOrphanQueue_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined *local_18;
  
  local_18 = &DAT_00b0f710;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_0037ced1,0xf,&DAT_002a16d8,8,&DAT_00b0f730,&PTR_FUN_00af62a8,&DAT_0037cee0
             ,5,&local_18,&DAT_00af62c8);
  return;
}


// ===== 009c3fdc  <tokio::net::unix::datagram::socket::UnixDatagram_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::UnixDatagram as core::fmt::Debug>::fmt */

void __rustcall
<tokio::net::unix::datagram::socket::UnixDatagram_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,param_1 + 0x18,&PTR_FUN_00af4b08);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009c4040  <alloc::vec::Vec<u8>as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::Vec<u8> as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<alloc::vec::Vec<u8>as_tokio::io::async_write::AsyncWrite>::poll_write
          (long *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  
  lVar2 = param_1[2];
  if ((ulong)(*param_1 - lVar2) < param_4) {
    FUN_009bd2b4(param_1,lVar2,param_4,1,1);
    lVar2 = param_1[2];
  }
  else if (param_4 == 0) goto LAB_009c4084;
  memcpy((void *)(param_1[1] + lVar2),param_3,param_4);
LAB_009c4084:
  param_1[2] = lVar2 + param_4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_4;
  return auVar1 << 0x40;
}


// ===== 009c40cc  <alloc::vec::Vec<u8>as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::Vec<u8> as tokio::io::async_write::AsyncWrite>::poll_write_vectored */

undefined1  [16] __rustcall
<alloc::vec::Vec<u8>as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (long *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__src;
  ulong __n;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if (param_4 == 0) {
    uVar10 = 0;
  }
  else {
    if (param_4 < 5) {
      lVar5 = 0;
      uVar10 = 0;
    }
    else {
      lVar6 = 0;
      lVar11 = 0;
      lVar12 = 0;
      lVar13 = 0;
      uVar10 = 4;
      if ((param_4 & 3) != 0) {
        uVar10 = param_4 & 3;
      }
      plVar7 = param_3 + 5;
      lVar5 = param_4 - uVar10;
      lVar8 = lVar5;
      do {
        plVar1 = plVar7 + -4;
        lVar14 = *plVar7;
        plVar9 = plVar7 + -2;
        plVar2 = plVar7 + 2;
        lVar8 = lVar8 + -4;
        plVar7 = plVar7 + 8;
        lVar6 = *plVar1 + lVar6;
        lVar11 = *plVar9 + lVar11;
        lVar12 = lVar14 + lVar12;
        lVar13 = *plVar2 + lVar13;
      } while (lVar8 != 0);
      uVar10 = lVar12 + lVar6 + lVar13 + lVar11;
    }
    puVar3 = param_3 + param_4 * 2;
    lVar6 = param_4 - lVar5;
    plVar7 = param_3 + lVar5 * 2 + 1;
    do {
      lVar6 = lVar6 + -1;
      uVar10 = *plVar7 + uVar10;
      plVar7 = plVar7 + 2;
    } while (lVar6 != 0);
    lVar6 = param_1[2];
    if ((ulong)(*param_1 - lVar6) < uVar10) {
      FUN_009bd2b4(param_1,lVar6,uVar10,1,1);
      lVar6 = param_1[2];
    }
    do {
      __src = (void *)*param_3;
      __n = param_3[1];
      if ((ulong)(*param_1 - lVar6) < __n) {
        FUN_009bd2b4(param_1,lVar6,__n,1,1);
        lVar6 = param_1[2];
LAB_009c41f8:
        memcpy((void *)(param_1[1] + lVar6),__src,__n);
      }
      else if (__n != 0) goto LAB_009c41f8;
      param_3 = param_3 + 2;
      lVar6 = lVar6 + __n;
      param_1[2] = lVar6;
    } while (param_3 != puVar3);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  return auVar4 << 0x40;
}


// ===== 009c4238  <tokio::time::instant::Instant_as_core::ops::arith::Add<{backref_16}::time::Duration>>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::Instant as core::ops::arith::Add<{backref 16}::time::Duration>>::add */

void __rustcall
<tokio::time::instant::Instant_as_core::ops::arith::Add<{backref_16}::time::Duration>>::add(void)

{
  <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
  ::add();
  return;
}


// ===== 009c4244  <tokio::net::unix::pipe::Sender_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::Sender as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::net::unix::pipe::Sender_as_tokio::io::async_write::AsyncWrite>::poll_write
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
      goto LAB_0099eb54;
    }
  }
  else if (uStack_68._1_1_ != -1) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
    do {
      bVar3 = bStack_70;
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      if (uStack_68._1_1_ == '\x02') {
        uVar6 = 1;
        goto LAB_0099eb54;
      }
      cVar4 = (char)uStack_68;
      piStack_78 = (int *)(param_1 + 0x18);
      auVar12 = <&mio::sys::unix::pipe::Sender_as_core::io::write::Write>::write
                          (&piStack_78,param_3,param_4);
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
        uStack_68 = unaff_x20 - 1;
        bStack_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&bStack_70,param_1,param_2,1);
    } while (uStack_68._1_1_ != -1);
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


// ===== 009c4248  <tokio::net::unix::pipe::Sender_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::Sender as tokio::io::async_write::AsyncWrite>::poll_write_vectored */

void __rustcall
<tokio::net::unix::pipe::Sender_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009aa3d4(param_1,param_2,1,&local_28);
  return;
}


// ===== 009c4274  FUN_009c4274 =====

void FUN_009c4274(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1;
  if (*local_18 != '\0') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_0037cf0f,3,&local_18,&DAT_00af6418);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0037cf0d,2,&local_18,&DAT_00af63f8);
  return;
}


// ===== 009c42e8  FUN_009c42e8 =====

void FUN_009c42e8(long *param_1,undefined8 param_2)

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
                (auStack_40,&local_18,&DAT_00af44f0);
      lVar2 = lVar2 + -0x18;
      lVar1 = lVar1 + 0x18;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 009c4360  FUN_009c4360 =====

void FUN_009c4360(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,&DAT_002bcff0,4,&DAT_0037cf0b,2,&local_18,&DAT_00af63d8);
  return;
}


// ===== 009c43b0  <tokio::time::instant::Instant_as_core::ops::arith::AddAssign<{backref_16}::time::Duration>>::add_assign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::Instant as core::ops::arith::AddAssign<{backref
   16}::time::Duration>>::add_assign */

void __rustcall
<tokio::time::instant::Instant_as_core::ops::arith::AddAssign<{backref_16}::time::Duration>>::
add_assign(undefined1 (*param_1) [12],undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [12];
  
  auVar1 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
           ::add(*(undefined8 *)*param_1,*(undefined4 *)(*param_1 + 8),param_2,param_3,
                 &PTR_s__root__cargo_registry_src_index__00af62e8);
  *param_1 = auVar1;
  return;
}


// ===== 009c43f4  <tokio::process::imp::GlobalOrphanQueue_as_tokio::process::imp::orphan::OrphanQueue<std::process::Child>>::push_orphan =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::GlobalOrphanQueue as
   tokio::process::imp::orphan::OrphanQueue<std::process::Child>>::push_orphan */

void __rustcall
<tokio::process::imp::GlobalOrphanQueue_as_tokio::process::imp::orphan::OrphanQueue<std::process::Child>>
::push_orphan(void)

{
  FUN_00985800(&DAT_00b0f710);
  return;
}


// ===== 009c4400  <tokio::process::imp::ChildStdio_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::ChildStdio as std::os::fd::owned::AsFd>::as_fd */

void __rustcall <tokio::process::imp::ChildStdio_as_std::os::fd::owned::AsFd>::as_fd(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 009c4424  <tokio::time::instant::Instant_as_core::ops::arith::Sub>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::Instant as core::ops::arith::Sub>::sub */

void __rustcall
<tokio::time::instant::Instant_as_core::ops::arith::Sub>::sub
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = param_1;
  local_18 = param_2;
  <std::time::std::time::Instant>::duration_since(&local_20,param_3,param_4);
  return;
}


// ===== 009c4454  <tokio::process::imp::Child_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::Child as core::fmt::Debug>::fmt */

void __rustcall
<tokio::process::imp::Child_as_core::fmt::Debug>::fmt(int *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  int local_4;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0037cee5,5);
  if (*param_1 != 2) {
    local_4 = param_1[2];
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_0037ceea,3,&local_4,&DAT_00af6300);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce99,0x13,&PTR_s__root__cargo_registry_src_index__00af6248);
}


// ===== 009c44e4  <tokio::time::instant::Instant_as_core::ops::arith::Sub<{backref_16}::time::Duration>>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::Instant as core::ops::arith::Sub<{backref 16}::time::Duration>>::sub */

void __rustcall
<tokio::time::instant::Instant_as_core::ops::arith::Sub<{backref_16}::time::Duration>>::sub(void)

{
  <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>
  ::sub();
  return;
}


// ===== 009c44f0  <tokio::time::instant::Instant_as_core::ops::arith::SubAssign<{backref_16}::time::Duration>>::sub_assign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::Instant as core::ops::arith::SubAssign<{backref
   16}::time::Duration>>::sub_assign */

void __rustcall
<tokio::time::instant::Instant_as_core::ops::arith::SubAssign<{backref_16}::time::Duration>>::
sub_assign(undefined1 (*param_1) [12],undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [12];
  
  auVar1 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>
           ::sub(*(undefined8 *)*param_1,*(undefined4 *)(*param_1 + 8),param_2,param_3,
                 &PTR_s__root__cargo_registry_src_index__00af6320);
  *param_1 = auVar1;
  return;
}


// ===== 009c4534  <tokio::process::imp::Child_as_tokio::process::kill::Kill>::kill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::Child as tokio::process::kill::Kill>::kill */

void __rustcall <tokio::process::imp::Child_as_tokio::process::kill::Kill>::kill(int *param_1)

{
  if (*param_1 != 2) {
    <std::process::[T]::std::process::Child>::kill();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce99,0x13,&PTR_s__root__cargo_registry_src_index__00af6260);
}


