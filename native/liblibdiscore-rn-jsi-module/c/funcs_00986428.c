// ===== 00986428  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified */

void __rustcall
<tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified
          (undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = uVar1 >> 2;
  return;
}


// ===== 00986448  <tokio::process::[5]::tokio::process::ChildStdout>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::[5]::tokio::process::ChildStdout>::from_std */

void __rustcall <tokio::process::[5]::tokio::process::ChildStdout>::from_std(long *param_1)

{
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  FUN_009c03b4(&local_40);
  if (local_40 != 2) {
    param_1[3] = lStack_28;
    param_1[2] = local_30;
  }
  *param_1 = local_40;
  param_1[1] = lStack_38;
  return;
}


// ===== 0098648c  <tokio::process::[6]::tokio::process::ChildStderr>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::[6]::tokio::process::ChildStderr>::from_std */

void __rustcall <tokio::process::[6]::tokio::process::ChildStderr>::from_std(long *param_1)

{
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  FUN_009c03b4(&local_40);
  if (local_40 != 2) {
    param_1[3] = lStack_28;
    param_1[2] = local_30;
  }
  *param_1 = local_40;
  param_1[1] = lStack_38;
  return;
}


// ===== 009864d0  FUN_009864d0 =====

undefined4
FUN_009864d0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  undefined **ppuVar12;
  ulong *puVar13;
  undefined1 auVar14 [16];
  undefined8 local_88;
  long local_80;
  long *local_70;
  ulong local_68;
  
  puVar10 = param_1 + 2;
  puVar13 = (ulong *)*param_1;
  puVar1 = puVar13 + 1;
LAB_00986524:
  while( true ) {
    if (*(char *)(param_1 + 7) != '\0') break;
    uVar5 = *puVar13;
    do {
      if (*puVar13 != (uVar5 & 0xfffffffffffffffc | 2)) {
        ClearExclusiveLocal();
        if (param_2 == (long *)0x0) {
          auVar14 = ZEXT816(0);
        }
        else {
          auVar14 = (**(code **)*param_2)(param_2[1]);
          local_88 = auVar14._8_8_;
        }
        local_80 = auVar14._0_8_;
        if ((char)*puVar1 == '\0') {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(char *)puVar1 = '\x01';
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_009867c8;
        }
        else {
          ClearExclusiveLocal();
LAB_009867c8:
                    /* try { // try from 009867c8 to 009867e7 has its CatchHandler @ 00986a78 */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                    (puVar13 + 1,auVar14._8_8_,0xffffffff);
        }
        uVar5 = *puVar13;
        if (param_1[1] != uVar5 >> 2) goto LAB_00986734;
        goto LAB_009866a0;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar4) {
        *puVar13 = uVar5 & 0xfffffffffffffffc;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 7) = 2;
  }
  if (*(char *)(param_1 + 7) != '\x01') {
    return 0;
  }
  lVar11 = param_1[6];
  if (lVar11 - 1U < 2) {
LAB_009867fc:
    lVar11 = param_1[4];
    param_1[4] = 0;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x18))(param_1[5]);
    }
    param_1[6] = 0;
    goto LAB_00986824;
  }
  if (lVar11 != 0) {
    if (lVar11 != 5) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s__root__cargo_registry_src_index__00af3b68);
    }
    goto LAB_009867fc;
  }
  if ((char)*puVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *(char *)puVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00986778;
    lVar11 = param_1[6];
    if (1 < lVar11 - 1U) goto LAB_00986594;
LAB_00986858:
    lVar11 = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = 0;
    param_1[6] = 0;
    goto LAB_00986868;
  }
  ClearExclusiveLocal();
LAB_00986778:
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (puVar13 + 1,param_2,0xffffffff);
  lVar11 = param_1[6];
  if (lVar11 - 1U < 2) goto LAB_00986858;
LAB_00986594:
  if (lVar11 != 0) {
    if (lVar11 != 5) {
                    /* try { // try from 00986930 to 00986947 has its CatchHandler @ 00986acc */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s__root__cargo_registry_src_index__00af3b68);
    }
    goto LAB_00986858;
  }
  if (param_1[1] != *puVar13 >> 2) {
    lVar11 = param_1[4];
    local_70 = (long *)param_1[5];
    param_1[4] = 0;
    if (param_1[2] == 0) {
      if ((ulong *)puVar13[2] == puVar10) {
        puVar6 = (ulong *)param_1[3];
        puVar13[2] = (ulong)puVar6;
        goto joined_r0x009865e8;
      }
    }
    else {
      puVar6 = (ulong *)param_1[3];
      *(ulong **)(param_1[2] + 8) = puVar6;
joined_r0x009865e8:
      if (puVar6 == (ulong *)0x0) {
        if ((ulong *)puVar13[3] != puVar10) goto LAB_009865f8;
        puVar13[3] = *puVar10;
      }
      else {
        *puVar6 = *puVar10;
      }
      *puVar10 = 0;
      param_1[3] = 0;
    }
LAB_009865f8:
    *(undefined1 *)(param_1 + 7) = 2;
    do {
      if ((char)*puVar1 != '\x01') {
        ClearExclusiveLocal();
                    /* try { // try from 009867ac to 009867bf has its CatchHandler @ 00986a60 */
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar13 + 1,0);
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(char *)puVar1 = '\0';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x18))(local_70);
    }
    goto LAB_00986524;
  }
  if (param_2 == (long *)0x0) {
LAB_009868c4:
    lVar11 = 0;
  }
  else {
    if ((undefined8 *)param_1[4] == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*param_2;
    }
    else {
      puVar9 = (undefined8 *)*param_2;
      if ((param_1[5] == param_2[1]) && ((undefined8 *)param_1[4] == puVar9)) goto LAB_009868c4;
    }
                    /* try { // try from 009868d8 to 009868df has its CatchHandler @ 00986acc */
    auVar14 = (*(code *)*puVar9)(param_2[1]);
    lVar11 = param_1[4];
    local_70 = (long *)param_1[5];
    *(undefined1 (*) [16])(param_1 + 4) = auVar14;
  }
  do {
    if ((char)*puVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 00986a18 to 00986a23 has its CatchHandler @ 00986a40 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar1,0);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *(char *)puVar1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar11 == 0) {
    return 1;
  }
  pcVar7 = *(code **)(lVar11 + 0x18);
LAB_0098690c:
  (*pcVar7)(local_70);
  return 1;
LAB_009866a0:
  uVar8 = uVar5 & 3;
  if (1 < uVar8) {
    if (uVar8 != 2) {
                    /* try { // try from 009869d4 to 00986a0f has its CatchHandler @ 00986a80 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s__root__cargo_registry_src_index__00af3b50);
    }
    uVar8 = uVar5 & 0xfffffffffffffffc;
    while (uVar5 = *puVar13, uVar5 == (uVar8 | 2)) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar4) {
        *puVar13 = uVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00986734;
    }
    ClearExclusiveLocal();
    local_68 = uVar5 & 3;
    ppuVar12 = &PTR_s__root__cargo_registry_src_index__00af3b38;
    puVar9 = (undefined8 *)&DAT_002a1518;
    if (local_68 != 0) goto LAB_009869fc;
    goto LAB_009866a0;
  }
  if (uVar8 != 0) {
LAB_0098694c:
    if (local_80 == 0) {
      lVar11 = 0;
      local_70 = param_2;
    }
    else {
      lVar11 = param_1[4];
      local_70 = (long *)param_1[5];
      param_1[4] = local_80;
      param_1[5] = local_88;
    }
                    /* try { // try from 00986978 to 00986983 has its CatchHandler @ 00986a44 */
    FUN_00998350(puVar13 + 2,puVar10);
    *(undefined1 *)(param_1 + 7) = 1;
    goto LAB_0098698c;
  }
  uVar8 = uVar5 & 0xfffffffffffffffc;
  while (uVar5 = *puVar13, uVar5 == uVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
    if (bVar4) {
      *puVar13 = uVar8 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0098694c;
  }
  ClearExclusiveLocal();
  local_68 = uVar5 & 3;
  ppuVar12 = &PTR_s__root__cargo_registry_src_index__00af3b20;
  puVar9 = &DAT_002a16a8;
  if (local_68 != 2) {
LAB_009869fc:
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>(0,&local_68,puVar9,0,param_5,ppuVar12);
  }
  goto LAB_009866a0;
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *(char *)puVar1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_0098698c:
    if ((char)*puVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 00986a2c to 00986a3b has its CatchHandler @ 00986a44 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar1,0);
      break;
    }
  }
  if (lVar11 == 0) {
    return 1;
  }
  pcVar7 = *(code **)(lVar11 + 0x18);
  goto LAB_0098690c;
LAB_00986734:
  *(undefined1 *)(param_1 + 7) = 2;
  do {
    if ((char)*puVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar13 + 1,0);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *(char *)puVar1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (local_80 != 0) {
    (**(code **)(local_80 + 0x18))(local_88);
  }
  goto LAB_00986524;
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *(char *)puVar1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_00986868:
    if ((char)*puVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009869b4 to 009869c7 has its CatchHandler @ 00986a40 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar1,0);
      break;
    }
  }
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 0x18))(uVar2);
  }
LAB_00986824:
  *(undefined1 *)(param_1 + 7) = 2;
  return 0;
}


// ===== 00986b04  <tokio::sync::notify::[8]::tokio::sync::notify::Notified>::enable =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::notify::[8]::tokio::sync::notify::Notified>::enable */

uint __rustcall
<tokio::sync::notify::[8]::tokio::sync::notify::Notified>::enable(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_009864d0(param_1,0);
  return uVar1 ^ 1;
}


// ===== 00986b20  FUN_00986b20 =====

undefined1  [16] FUN_00986b20(long *param_1,ulong *param_2,ulong param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar3 = param_3 & 3;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      if ((param_4 & 1) == 0) {
        plVar5 = (long *)param_1[1];
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3b98);
        }
        lVar6 = *plVar5;
        param_1[1] = lVar6;
        if (lVar6 == 0) {
          *param_1 = 0;
          lVar6 = plVar5[2];
          unaff_x20 = plVar5[3];
          *plVar5 = 0;
          plVar5[1] = 0;
          plVar5[2] = 0;
          plVar5[4] = 1;
        }
        else {
          lVar8 = *param_1;
          *(undefined8 *)(lVar6 + 8) = 0;
          lVar6 = plVar5[2];
          unaff_x20 = plVar5[3];
          *plVar5 = 0;
          plVar5[1] = 0;
          plVar5[2] = 0;
          plVar5[4] = 1;
          if (lVar8 != 0) goto LAB_00986b8c;
        }
LAB_00986c34:
        if (param_1[1] != 0) {
                    /* try { // try from 00986c74 to 00986c8b has its CatchHandler @ 00986cd8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: self.tail.is_none()",0x25,
                     &PTR_s__root__cargo_registry_src_index__00af3bc8);
        }
        param_3 = param_3 & 0xfffffffffffffffc;
LAB_00986c40:
        *param_2 = param_3;
        auVar10._8_8_ = unaff_x20;
        auVar10._0_8_ = lVar6;
        return auVar10;
      }
      puVar4 = (undefined8 *)*param_1;
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3bb0);
      }
      puVar7 = (undefined8 *)puVar4[1];
      *param_1 = (long)puVar7;
      if (puVar7 == (undefined8 *)0x0) {
        param_1[1] = 0;
      }
      else {
        *puVar7 = 0;
      }
      lVar6 = puVar4[2];
      unaff_x20 = puVar4[3];
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[4] = 5;
      if (puVar7 == (undefined8 *)0x0) goto LAB_00986c34;
      goto LAB_00986b8c;
    }
  }
  else if (uVar3 != 2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("internal error: entered unreachable code",0x28,
               &PTR_s__root__cargo_registry_src_index__00af3be0);
  }
  do {
    uVar3 = *param_2;
    if (uVar3 != param_3) {
      ClearExclusiveLocal();
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: actual_state == EMPTY || actual_state == NOTIFIED",0x43,
                   &PTR_s__root__cargo_registry_src_index__00af3b80);
      }
      lVar6 = 0;
      param_3 = uVar3 & 0xfffffffffffffffc | 2;
      goto LAB_00986c40;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = param_3 & 0xfffffffffffffffc | 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    lVar6 = 0;
  } while (cVar1 != '\0');
LAB_00986b8c:
  auVar9._8_8_ = unaff_x20;
  auVar9._0_8_ = lVar6;
  return auVar9;
}


// ===== 00986cf8  <tokio::net::tcp::listener::TcpListener_as_std::os::fd::raw::AsRawFd>::as_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::TcpListener as std::os::fd::raw::AsRawFd>::as_raw_fd */

void __rustcall
<tokio::net::tcp::listener::TcpListener_as_std::os::fd::raw::AsRawFd>::as_raw_fd(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3a48);
}


// ===== 00986d1c  FUN_00986d1c =====

bool FUN_00986d1c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_00990748(*param_1);
  if (lVar1 != 0) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 00986d70 to 00986d77 has its CatchHandler @ 00986d94 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


// ===== 00986d9c  <tokio::process::ChildStderr_as_std::os::fd::raw::AsRawFd>::as_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::ChildStderr as std::os::fd::raw::AsRawFd>::as_raw_fd */

void __rustcall <tokio::process::ChildStderr_as_std::os::fd::raw::AsRawFd>::as_raw_fd(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af6140);
}


// ===== 00986dc0  <tokio::net::tcp::listener::TcpListener_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::TcpListener as core::fmt::Debug>::fmt */

void __rustcall
<tokio::net::tcp::listener::TcpListener_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,param_1 + 0x18,&PTR_FUN_00af4ac8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00986e24  <tokio::net::unix::listener::UnixListener_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::listener::UnixListener as core::fmt::Debug>::fmt */

void __rustcall
<tokio::net::unix::listener::UnixListener_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,param_1 + 0x18,&PTR_FUN_00af4b28);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00986e88  <tokio::io::interest::Interest_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::interest::Interest as core::fmt::Debug>::fmt */

undefined8 __rustcall
<tokio::io::interest::Interest_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  
  uVar3 = (uint)*param_1;
  if ((*param_1 & 1) == 0) {
    if ((uVar3 >> 1 & 1) != 0) {
      uVar2 = *param_2;
      lVar5 = param_2[1];
      pcVar4 = *(code **)(lVar5 + 0x18);
LAB_00986f00:
      uVar1 = (*pcVar4)(uVar2,&DAT_002a1620,8);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      goto LAB_00986f18;
    }
    if ((uVar3 >> 4 & 1) == 0) {
      if ((uVar3 >> 5 & 1) == 0) {
        return 0;
      }
      uVar2 = *param_2;
      pcVar4 = *(code **)(param_2[1] + 0x18);
      goto LAB_00986f90;
    }
    uVar2 = *param_2;
    lVar5 = param_2[1];
    uVar1 = (**(code **)(lVar5 + 0x18))(uVar2,&DAT_002a17b8,8);
joined_r0x00986f48:
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar2 = *param_2;
    lVar5 = param_2[1];
    pcVar4 = *(code **)(lVar5 + 0x18);
    uVar1 = (*pcVar4)(uVar2,&DAT_002a13e0,8);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar1 = (*pcVar4)(uVar2," | ",3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      goto LAB_00986f00;
    }
LAB_00986f18:
    if ((uVar3 >> 4 & 1) != 0) {
      uVar1 = (*pcVar4)(uVar2," | ",3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      uVar1 = (*pcVar4)(uVar2,&DAT_002a17b8,8);
      goto joined_r0x00986f48;
    }
  }
  if ((uVar3 >> 5 & 1) == 0) {
    return 0;
  }
  pcVar4 = *(code **)(lVar5 + 0x18);
  uVar1 = (*pcVar4)(uVar2," | ",3);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
LAB_00986f90:
  uVar1 = (*pcVar4)(uVar2,"ERRORHandle",5);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}


// ===== 00986fd0  <tokio::sync::notify::NotifyWaitersList_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::notify::NotifyWaitersList as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::sync::notify::NotifyWaitersList_as_core::ops::drop::Drop>::drop
          (undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return;
  }
  pcVar1 = (char *)(param_1[1] + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      plVar5 = (long *)*param_1;
      plVar6 = (long *)*plVar5;
      goto joined_r0x00987094;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar1,param_2,0xffffffff);
  plVar5 = (long *)*param_1;
  plVar6 = (long *)*plVar5;
joined_r0x00987094:
  if (plVar6 == (long *)0x0) {
    ppuVar4 = &PTR_s__root__cargo_registry_src_index__00af4810;
  }
  else {
    do {
      if (plVar6 == plVar5) {
        do {
          if (*pcVar1 != '\x01') {
            ClearExclusiveLocal();
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
            return;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *pcVar1 = '\0';
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
      lVar7 = *plVar6;
      ppuVar4 = &PTR_s__root__cargo_registry_src_index__00af4828;
      if (lVar7 == 0) break;
      *plVar5 = lVar7;
      *(long **)(lVar7 + 8) = plVar5;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[4] = 2;
      plVar6 = (long *)*plVar5;
      ppuVar4 = &PTR_s__root__cargo_registry_src_index__00af4810;
    } while (plVar6 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009870a0 to 009870a3 has its CatchHandler @ 009870c0 */
  core::option::unwrap_failed(ppuVar4);
}


// ===== 009870f8  <tokio::runtime::io::driver::Handle_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::driver::Handle as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::io::driver::Handle_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00987110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"Handle",6);
  return;
}


// ===== 00987114  FUN_00987114 =====

ulong FUN_00987114(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *local_38;
  undefined1 auStack_30 [16];
  
  pbVar6 = (byte *)*param_1;
  bVar5 = *pbVar6;
  do {
    while( true ) {
      if ((bVar5 & 1) != 0) {
        <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"MutexDriver",5);
        <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                  (auStack_30,&DAT_002bd1f4,4,1,&DAT_00af3bf8);
        uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
        return uVar4;
      }
      bVar1 = *pbVar6;
      if (bVar1 == bVar5) break;
      ClearExclusiveLocal();
      bVar5 = bVar1;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar6,0x10);
    if (bVar3) {
      *pbVar6 = bVar5 | 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    bVar5 = bVar1;
  } while (cVar2 != '\0');
                    /* try { // try from 00987160 to 0098719f has its CatchHandler @ 00987234 */
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"MutexDriver",5);
  local_38 = pbVar6 + 8;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002bd1f4,4,&local_38,&DAT_00af3c38);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  do {
    if (*pbVar6 != 1) {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pbVar6,0);
      return uVar4 & 0xffffffff;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar6,0x10);
    if (bVar3) {
      *pbVar6 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar4;
}


// ===== 0098726c  FUN_0098726c =====

ulong FUN_0098726c(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *local_38;
  undefined1 auStack_30 [16];
  
  pbVar6 = (byte *)*param_1;
  bVar5 = *pbVar6;
  do {
    while( true ) {
      if ((bVar5 & 1) != 0) {
        <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"MutexDriver",5);
        <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                  (auStack_30,&DAT_002bd1f4,4,1,&DAT_00af3bf8);
        uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
        return uVar4;
      }
      bVar1 = *pbVar6;
      if (bVar1 == bVar5) break;
      ClearExclusiveLocal();
      bVar5 = bVar1;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar6,0x10);
    if (bVar3) {
      *pbVar6 = bVar5 | 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    bVar5 = bVar1;
  } while (cVar2 != '\0');
                    /* try { // try from 009872b8 to 009872f7 has its CatchHandler @ 0098738c */
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"MutexDriver",5);
  local_38 = pbVar6 + 8;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002bd1f4,4,&local_38,&DAT_00af3c18);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  do {
    if (*pbVar6 != 1) {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pbVar6,0);
      return uVar4 & 0xffffffff;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar6,0x10);
    if (bVar3) {
      *pbVar6 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar4;
}


// ===== 009873c4  <tokio::net::unix::listener::UnixListener_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::listener::UnixListener as std::os::fd::owned::AsFd>::as_fd */

void __rustcall
<tokio::net::unix::listener::UnixListener_as_std::os::fd::owned::AsFd>::as_fd(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3a48);
}


// ===== 009873e8  <tokio::process::ChildStdin_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::ChildStdin as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::process::ChildStdin_as_tokio::io::async_write::AsyncWrite>::poll_write
          (long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

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
  int *piStack_70;
  undefined8 uStack_68;
  
  iVar2 = *(int *)(param_1 + 0x18);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&piStack_70,param_1,param_2,1);
  if (iVar2 == -1) {
    if (uStack_68._1_1_ != -1) {
      if (uStack_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4998);
      }
      uVar6 = 1;
      unaff_x20 = piStack_70;
      goto LAB_0099e568;
    }
  }
  else if (uStack_68._1_1_ != -1) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
    do {
      piVar3 = piStack_70;
      if (uStack_68._1_1_ == '\x02') {
        uVar6 = 1;
        unaff_x20 = piStack_70;
        goto LAB_0099e568;
      }
      cVar4 = (char)uStack_68;
      piStack_70 = (int *)(param_1 + 0x18);
      auVar12 = <&std::fs::File_as_core::io::write::Write>::write(&piStack_70,param_3,param_4);
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
        uStack_68 = (long)unaff_x20 + -1;
        piStack_70 = (int *)CONCAT71(piStack_70._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&piStack_70,param_1,param_2,1);
    } while (uStack_68._1_1_ != -1);
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


// ===== 009873ec  <tokio::process::ChildStdin_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::ChildStdin as tokio::io::async_write::AsyncWrite>::poll_write_vectored */

void __rustcall
<tokio::process::ChildStdin_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009a9d74(param_1,param_2,1,&local_28);
  return;
}


// ===== 00987418  <tokio::process::ChildStdout_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::ChildStdout as tokio::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<tokio::process::ChildStdout_as_tokio::io::async_read::AsyncRead>::poll_read
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
  bool bVar11;
  ulong uVar12;
  ulong unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  
  uVar12 = param_3[1];
  uVar2 = param_3[2];
  if (uVar12 < uVar2) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&bStack_70,param_1,param_2,0);
    if (uStack_68._1_1_ != -1) {
      if (uStack_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,uVar12,uVar12,&PTR_s__root__cargo_registry_src_index__00af4938);
      }
LAB_0099e8c0:
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      uVar7 = 0;
      goto LAB_0099e84c;
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
        goto LAB_0099e8c0;
      }
    }
    else if (uStack_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar4 = bStack_70;
        unaff_x20 = CONCAT71(uStack_6f,bStack_70);
        if (uStack_68._1_1_ == '\x02') {
          uVar7 = 0;
          goto LAB_0099e84c;
        }
        cVar5 = (char)uStack_68;
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
          uStack_68 = unaff_x20 - 1;
          bStack_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&bStack_70,param_1,param_2,0);
      } while (uStack_68._1_1_ != -1);
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


// ===== 0098741c  <tokio::sync::notify::Notified_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::notify::Notified as core::future::future::Future>::poll */

void __rustcall
<tokio::sync::notify::Notified_as_core::future::future::Future>::poll
          (undefined8 param_1,undefined8 *param_2)

{
  FUN_009864d0(param_1,*param_2);
  return;
}


// ===== 00987424  <tokio::net::tcp::listener::TcpListener_as_core::convert::TryFrom<std::net::tcp::TcpListener>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::TcpListener as
   core::convert::TryFrom<std::net::tcp::TcpListener>>::try_from */

ulong __rustcall
<tokio::net::tcp::listener::TcpListener_as_core::convert::TryFrom<std::net::tcp::TcpListener>>::
try_from(long *param_1,int param_2)

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
  
                    /* try { // try from 00987444 to 00987453 has its CatchHandler @ 00987520 */
  local_18 = param_2;
  iVar1 = <std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 009874d8 to 009874ef has its CatchHandler @ 00987520 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 00987454 to 0098745f has its CatchHandler @ 0098750c */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af3c58);
                    /* try { // try from 0098746c to 00987483 has its CatchHandler @ 009874f4 */
  local_14 = param_2;
  uVar3 = FUN_009a4f78(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af3c58);
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


// ===== 00987534  <tokio::net::unix::listener::UnixListener_as_core::convert::TryFrom<std::os::unix::net::listener::UnixListener>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::listener::UnixListener as
   core::convert::TryFrom<std::os::unix::net::listener::UnixListener>>::try_from */

ulong __rustcall
<tokio::net::unix::listener::UnixListener_as_core::convert::TryFrom<std::os::unix::net::listener::UnixListener>>
::try_from(long *param_1,int param_2)

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
  
                    /* try { // try from 00987554 to 00987563 has its CatchHandler @ 00987630 */
  local_18 = param_2;
  iVar1 = <std::sys::fd::unix::FileDesc_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 009875e8 to 009875ff has its CatchHandler @ 00987630 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 00987564 to 0098756f has its CatchHandler @ 0098761c */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af3c70);
                    /* try { // try from 0098757c to 00987593 has its CatchHandler @ 00987604 */
  local_14 = param_2;
  uVar3 = FUN_009a52c0(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af3c70);
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


// ===== 00987644  <tokio::runtime::io::driver::Driver_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::driver::Driver as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::io::driver::Driver_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0098765c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"Driver",6);
  return;
}


// ===== 00987660  <tokio::process::ChildStdin_as_core::convert::TryInto<std::process::Stdio>>::try_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::ChildStdin as core::convert::TryInto<std::process::Stdio>>::try_into */

void __rustcall
<tokio::process::ChildStdin_as_core::convert::TryInto<std::process::Stdio>>::try_into
          (undefined4 *param_1,undefined8 param_2)

{
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  FUN_009c3590(&local_30,param_2);
  if (local_30 == 1) {
    *(undefined8 *)(param_1 + 2) = local_28;
    *param_1 = 1;
    return;
  }
  param_1[1] = 3;
  param_1[2] = local_2c;
  *param_1 = 0;
  return;
}


// ===== 009876cc  <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::notify::Notified as core::ops::drop::Drop>::drop */

void __rustcall <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  char cVar3;
  ulong *puVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  ulong *puVar8;
  undefined1 auVar9 [16];
  
  if ((char)param_1[7] != '\x01') {
    return;
  }
  puVar4 = (ulong *)*param_1;
  puVar1 = puVar4 + 1;
  if ((char)*puVar1 == '\0') {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *(char *)puVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00987730;
    uVar5 = *puVar4;
    lVar7 = param_1[6];
    if (1 < lVar7) goto LAB_00987760;
LAB_00987718:
    bVar6 = false;
    if (lVar7 != 0) {
      if (lVar7 != 1) {
LAB_00987878:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s__root__cargo_registry_src_index__00af3b68);
      }
LAB_00987774:
      bVar6 = true;
    }
  }
  else {
    ClearExclusiveLocal();
LAB_00987730:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (puVar4 + 1,puVar4,0xffffffff);
    uVar5 = *puVar4;
    lVar7 = param_1[6];
    if (lVar7 < 2) goto LAB_00987718;
LAB_00987760:
    bVar6 = false;
    if (lVar7 != 2) {
      if (lVar7 != 5) goto LAB_00987878;
      goto LAB_00987774;
    }
  }
  puVar2 = (ulong *)(param_1 + 2);
  if (*puVar2 == 0) {
    puVar8 = (ulong *)puVar4[2];
    if (puVar8 != puVar2) goto LAB_009877c8;
    puVar8 = (ulong *)param_1[3];
    puVar4[2] = (ulong)puVar8;
  }
  else {
    puVar8 = (ulong *)param_1[3];
    *(ulong **)(*puVar2 + 8) = puVar8;
  }
  if (puVar8 == (ulong *)0x0) {
    if ((ulong *)puVar4[3] == puVar2) {
      puVar4[3] = *puVar2;
      goto LAB_00987798;
    }
  }
  else {
    *puVar8 = *puVar2;
LAB_00987798:
    *puVar2 = 0;
    param_1[3] = 0;
  }
  puVar8 = (ulong *)puVar4[2];
LAB_009877c8:
  if (puVar8 == (ulong *)0x0) {
    if (puVar4[3] != 0) {
                    /* try { // try from 0098785c to 0098788f has its CatchHandler @ 009878dc */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: self.tail.is_none()",0x25,
                 &PTR_s__root__cargo_registry_src_index__00af3bc8);
    }
    if ((uVar5 & 3) == 1) {
      *puVar4 = uVar5 & 0xfffffffffffffffc;
    }
  }
  if (bVar6) {
                    /* try { // try from 009877ec to 009877f3 has its CatchHandler @ 009878dc */
    auVar9 = FUN_00986b20(puVar4 + 2);
    if (auVar9._0_8_ != 0) {
      do {
        if ((char)*puVar1 != '\x01') {
          ClearExclusiveLocal();
                    /* try { // try from 009878b4 to 009878bf has its CatchHandler @ 009878c4 */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar1,0);
          break;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *(char *)puVar1 = '\0';
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00987828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(auVar9._0_8_ + 8))(auVar9._8_8_);
      return;
    }
  }
  do {
    if ((char)*puVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar1,0);
      return;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *(char *)puVar1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


// ===== 00987914  FUN_00987914 =====

bool FUN_00987914(undefined8 *param_1,uint param_2)

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
    lVar3 = FUN_00990748(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_00987a1c;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_00990748(*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_00987a1c:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 00987a4c to 00987a53 has its CatchHandler @ 00987a70 */
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
        lVar3 = FUN_00990748(*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_00990748(*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_00987a1c;
    }
  }
  return lVar3 != 0;
}


// ===== 00987a78  FUN_00987a78 =====

void FUN_00987a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00af3998,param_2,param_3);
  return;
}


// ===== 00987a8c  FUN_00987a8c =====

void FUN_00987a8c(long *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if ((*param_1 != 0) && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    puVar2 = (undefined8 *)param_1[2];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00987ab4 to 00987abb has its CatchHandler @ 00987ae4 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00987b08  FUN_00987b08 =====

void FUN_00987b08(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
                    /* try { // try from 00987b1c to 00987b27 has its CatchHandler @ 00987b8c */
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
                    /* try { // try from 00987b44 to 00987b4b has its CatchHandler @ 00987b84 */
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
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow
                (param_1 + 1);
      return;
    }
  }
  return;
}


// ===== 00987be4  FUN_00987be4 =====

void FUN_00987be4(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((long)param_1 - 1U < 0xfffffffffffffffe) {
    plVar1 = (long *)((long)param_1 + 8);
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
      free(param_1);
      return;
    }
  }
  return;
}


// ===== 00987c1c  FUN_00987c1c =====

void FUN_00987c1c(long param_1)

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


// ===== 00987c98  FUN_00987c98 =====

void FUN_00987c98(void *param_1,long param_2)

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


// ===== 00987ce8  FUN_00987ce8 =====

void FUN_00987ce8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
                    /* try { // try from 00987d04 to 00987d07 has its CatchHandler @ 00987d30 */
  if ((lVar1 != -1) && (FUN_00998cc4(), lVar1 != 0)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00987d54  FUN_00987d54 =====

void FUN_00987d54(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 00987d74 to 00987d77 has its CatchHandler @ 00987da0 */
    (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00987d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}


// ===== 00987dc4  FUN_00987dc4 =====

void FUN_00987dc4(undefined8 *param_1)

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
                    /* try { // try from 00987df4 to 00987dfb has its CatchHandler @ 00987e38 */
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


// ===== 00987e70  FUN_00987e70 =====

void FUN_00987e70(long param_1)

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
                    /* try { // try from 00987ea0 to 00987ea3 has its CatchHandler @ 00987f40 */
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
                    /* try { // try from 00987ec8 to 00987ecb has its CatchHandler @ 00987f38 */
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
                    /* try { // try from 00987ef0 to 00987ef3 has its CatchHandler @ 00987f30 */
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


// ===== 00987fcc  FUN_00987fcc =====

void FUN_00987fcc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 00987fe0 to 00987fe3 has its CatchHandler @ 00988088 */
  FUN_00988180();
  pvVar4 = *(void **)(param_1 + 0x48);
  if ((long)pvVar4 - 1U < 0xfffffffffffffffe) {
    plVar1 = (long *)((long)pvVar4 + 8);
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
      DataMemoryBarrier(2,1);
      free(pvVar4);
    }
  }
  if ((*(int *)(param_1 + 0x80) != -1) && (lVar5 = *(long *)(param_1 + 0x68), lVar5 != 0)) {
    pvVar4 = *(void **)(param_1 + 0x60);
    lVar6 = 8;
    do {
      free(*(void **)((long)pvVar4 + lVar6));
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + 0x28;
    } while (lVar5 != 0);
    free(pvVar4);
    return;
  }
  return;
}


// ===== 009880a8  FUN_009880a8 =====

void FUN_009880a8(long *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == -1) {
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(param_1 + 1);
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    close((int)param_1[3]);
    close((int)param_1[5]);
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
      <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow();
    }
    __ptr = (void *)param_1[6];
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


// ===== 00988180  FUN_00988180 =====

undefined8 * FUN_00988180(undefined8 *param_1)

{
  void *__ptr;
  int __fd;
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  __fd = *(int *)((long)param_1 + 0x44);
  if (__fd != -1) {
    close(*(int *)(param_1 + 8));
    __ptr = (void *)param_1[3];
    lVar7 = param_1[4];
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        lVar6 = lVar8 * 8;
        lVar8 = lVar8 + 1;
        plVar5 = *(long **)((long)__ptr + lVar6);
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
                    /* try { // try from 009881e8 to 009881eb has its CatchHandler @ 00988268 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
          drop_slow();
        }
      } while (lVar8 != lVar7);
    }
    if (param_1[2] != 0) {
      free(__ptr);
    }
    uVar3 = close(__fd);
    return (undefined8 *)(ulong)uVar3;
  }
  plVar5 = (long *)*param_1;
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
    puVar4 = (undefined8 *)
             <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(param_1);
    return puVar4;
  }
  return param_1;
}


// ===== 009882d4  FUN_009882d4 =====

ulong FUN_009882d4(long *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  close((int)param_1[3]);
  uVar3 = close((int)param_1[5]);
  plVar5 = (long *)param_1[4];
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
    uVar4 = <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow(param_1 + 4);
    return uVar4;
  }
  return (ulong)uVar3;
}


// ===== 00988344  FUN_00988344 =====

void FUN_00988344(long *param_1)

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


// ===== 00988390  FUN_00988390 =====

void FUN_00988390(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 009883a0 to 009883a3 has its CatchHandler @ 00988434 */
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
                    /* try { // try from 009883cc to 009883f3 has its CatchHandler @ 0098842c */
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


// ===== 00988470  FUN_00988470 =====

int FUN_00988470(long param_1)

{
  void *__ptr;
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  close(*(int *)(param_1 + 0x40));
  __ptr = *(void **)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar7 = 0;
    do {
      lVar6 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      plVar5 = *(long **)((long)__ptr + lVar6);
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
                    /* try { // try from 009884cc to 009884cf has its CatchHandler @ 00988504 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
        drop_slow();
      }
    } while (lVar7 != lVar1);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(__ptr);
  }
  iVar4 = close(*(int *)(param_1 + 0x44));
  return iVar4;
}


// ===== 00988570  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::num::nonzero::NonZero<u64>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::num::nonzero::NonZero<u64>>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::num::nonzero::NonZero<u64>>,
   core[bcece726f298455b]::option::Option<core[bcece726f298455b]::num::nonzero::NonZero<u64>>> */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::num::nonzero::NonZero<u64>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::num::nonzero::NonZero<u64>>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3c88);
}


// ===== 0098858c  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::batch_semaphore::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::batch_semaphore::Waiter>>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::batch_semaphore::Waiter>>,
   core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::batch_semaphore::Waiter>>>
    */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::batch_semaphore::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::batch_semaphore::Waiter>>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3ca8);
}


// ===== 009885a8  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::notify::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::notify::Waiter>>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::notify::Waiter>>,
   core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::notify::Waiter>>>
    */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::notify::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::notify::Waiter>>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3cc8);
}


// ===== 009885c4  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::ScheduledIo>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::ScheduledIo>>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::ScheduledIo>>,
   core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::ScheduledIo>>>
    */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::ScheduledIo>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::ScheduledIo>>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3ce8);
}


// ===== 009885e0  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::Waiter>>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::Waiter>>,
   core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::Waiter>>>
    */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::Waiter>>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3d08);
}


// ===== 009885fc  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>,
   core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>>
    */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::time::entry::TimerShared>>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3d28);
}


// ===== 00988618  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::num::nonzero::NonZero<u64>,core[bcece726f298455b]::num::nonzero::NonZero<u64>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::num::nonzero::NonZero<u64>,
   core[bcece726f298455b]::num::nonzero::NonZero<u64>> */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::num::nonzero::NonZero<u64>,core[bcece726f298455b]::num::nonzero::NonZero<u64>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3d48);
}


// ===== 00988634  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::time::Duration,core[bcece726f298455b]::time::Duration> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::time::Duration,
   core[bcece726f298455b]::time::Duration> */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::time::Duration,core[bcece726f298455b]::time::Duration>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3d68);
}


// ===== 00988650  core::panicking::assert_failed<u32,u32> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<u32, u32> */

void __rustcall core::panicking::assert_failed<u32,u32>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0098b8c4(param_1,param_2,&DAT_00af3d88);
}


// ===== 0098866c  FUN_0098866c =====

void FUN_0098866c(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = param_1 + 1;
  if (*param_1 != 1) {
    FUN_00989588(plVar1);
    return;
  }
  if (*plVar1 != -1) {
    if (*(int *)(param_2 + 0x44) != -1) {
      FUN_0098552c(plVar1);
      FUN_009844b4(plVar1);
      FUN_00985910(&DAT_00b0f710,param_1 + 7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,&PTR_s__root__cargo_registry_src_index__00af3a90);
  }
  FUN_0097f308(param_1[2] + 0x10,param_3,param_4);
  return;
}


// ===== 00988710  FUN_00988710 =====

void FUN_00988710(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  code *unaff_x23;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined **local_280;
  long lStack_278;
  void *local_270;
  long lStack_268;
  undefined8 local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  long *local_240;
  undefined **ppuStack_238;
  long lStack_230;
  void *pvStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined **local_1d8;
  undefined8 uStack_1d0;
  long *local_1c8;
  undefined **ppuStack_1c0;
  long local_1b8;
  void *pvStack_1b0;
  long local_1a8;
  undefined **local_1a0;
  code *pcStack_198;
  long *local_190;
  undefined **ppuStack_188;
  long local_180;
  void *pvStack_178;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long *local_140;
  undefined **ppuStack_138;
  undefined **local_130;
  void *pvStack_128;
  long *local_120;
  undefined **ppuStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int local_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *local_d0;
  undefined8 uStack_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined **ppuStack_98;
  long local_90;
  void *pvStack_88;
  undefined **local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined **ppuStack_68;
  long local_60;
  void *pvStack_58;
  
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    auVar11 = FUN_004b25a4(0x28,8);
    local_140 = auVar11._0_8_;
    if (local_140 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x28);
    }
    local_140[2] = 0;
    local_140[3] = 0;
    *(undefined1 *)(local_140 + 4) = 0;
    local_140[1] = 1;
    *local_140 = 1;
    do {
      local_180 = *local_140;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_140,0x10);
      if (bVar3) {
        *local_140 = local_180 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_180 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x988b08);
      (*pcVar5)();
    }
    iStack_fc = -1;
    local_1d8 = (undefined **)0xffffffffffffffff;
    lVar10 = 0;
LAB_00988850:
    uStack_1d0 = auVar11._0_8_;
    ppuStack_1c0 = ppuStack_238;
    local_1c8 = local_240;
    pvStack_1b0 = pvStack_228;
    local_1b8 = lStack_230;
    local_130 = (undefined **)lStack_278;
    ppuStack_138 = local_280;
    local_120 = (long *)lStack_268;
    pvStack_128 = local_270;
    local_110 = uStack_258;
    ppuStack_118 = (undefined **)local_260;
    uStack_104 = (undefined4)uStack_24c;
    local_100 = (int)((ulong)uStack_24c >> 0x20);
    uStack_10c = uStack_254;
    uStack_108 = uStack_250;
    local_1a8 = local_180;
    if ((*(byte *)((long)param_2 + 0x11) & 1) == 0) {
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = unaff_x23;
      uVar7 = 1;
    }
    else {
      uVar1 = *(uint *)(param_2 + 1);
      param_2 = (undefined8 *)(ulong)uVar1;
      if (uVar1 == 0) {
                    /* try { // try from 00988a8c to 00988aa3 has its CatchHandler @ 00988bb8 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: shards > 0",0x1c,
                   &PTR_s__root__cargo_registry_src_index__00af3fa0);
      }
                    /* try { // try from 00988890 to 009888ab has its CatchHandler @ 00988bb8 */
      auVar12 = <std::time::std::time::Instant>::now();
      FUN_009c4ab8(&local_280,0,uVar1);
      pcStack_198 = (code *)lStack_278;
      local_1a0 = local_280;
      local_190 = (long *)local_270;
                    /* try { // try from 009888bc to 009888c3 has its CatchHandler @ 00988b08 */
      auVar11 = FUN_009c2e94(&local_1a0);
      uVar7 = 0;
      local_220 = 0;
      uStack_218 = 0;
    }
    *param_1 = uVar7;
    *(undefined1 (*) [16])(param_1 + 0x14) = auVar11;
    *(int *)(param_1 + 0x16) = (int)param_2;
    param_1[0xd] = ppuStack_118;
    param_1[0xc] = local_120;
    param_1[0xf] = CONCAT44(uStack_104,uStack_108);
    param_1[0xe] = CONCAT44(uStack_10c,local_110);
    param_1[7] = local_1a8;
    param_1[0x10] = CONCAT44(iStack_fc,local_100);
    param_1[0x11] = lVar10;
    param_1[9] = ppuStack_138;
    param_1[8] = local_140;
    param_1[0xb] = pvStack_128;
    param_1[10] = local_130;
    *(undefined1 *)((long)param_1 + 0xb4) = 0;
    param_1[0x17] = auVar12._0_8_;
    param_1[4] = ppuStack_1c0;
    param_1[3] = local_1c8;
    param_1[2] = uStack_1d0;
    param_1[1] = local_1d8;
    param_1[6] = pvStack_1b0;
    param_1[5] = local_1b8;
    *(int *)(param_1 + 0x18) = auVar12._8_4_;
    param_1[0x13] = uStack_218;
    param_1[0x12] = local_220;
  }
  else {
    FUN_0098535c(&local_140,*param_2);
    ppuVar6 = ppuStack_138;
    if (local_140 != (long *)0xffffffffffffffff) {
      pvStack_178 = (void *)CONCAT44(uStack_104,uStack_108);
      local_180 = CONCAT44(uStack_10c,local_110);
      lVar10 = CONCAT44(iStack_fc,local_100);
      uStack_158 = uStack_e8;
      local_160 = local_f0;
      uStack_168 = uStack_f8;
      local_150 = local_e0;
      pcStack_198 = (code *)pvStack_128;
      local_1a0 = local_130;
      ppuStack_188 = ppuStack_118;
      local_190 = local_120;
      local_d0 = local_140;
      uStack_c8 = ppuStack_138;
      uStack_b8 = pvStack_128;
      local_c0 = local_130;
      local_100 = (int)local_e0;
      iStack_fc = (int)((ulong)local_e0 >> 0x20);
      ppuStack_138 = ppuStack_118;
      local_140 = local_120;
      ppuStack_118 = (undefined **)uStack_f8;
      uStack_108 = (undefined4)uStack_e8;
      uStack_104 = (undefined4)((ulong)uStack_e8 >> 0x20);
      local_110 = (undefined4)local_f0;
      uStack_10c = (undefined4)((ulong)local_f0 >> 0x20);
                    /* try { // try from 0098878c to 0098879b has its CatchHandler @ 00988b0c */
      local_130 = (undefined **)local_180;
      pvStack_128 = pvStack_178;
      local_120 = (long *)lVar10;
      FUN_00984330(&local_1a0,&local_d0,&local_140);
      ppuVar6 = (undefined **)pcStack_198;
      auVar11._8_8_ = extraout_x1;
      auVar11._0_8_ = pcStack_198;
      local_b0 = local_1a0;
      uStack_a8 = pcStack_198;
      if (local_1a0 != (undefined **)0xffffffffffffffff) {
        local_80 = local_1a0;
        uStack_78 = pcStack_198;
        ppuStack_68 = ppuStack_188;
        local_70 = local_190;
        pvStack_58 = pvStack_178;
        local_60 = local_180;
        plVar8 = (long *)(local_180 + 8);
        do {
          lVar10 = *plVar8;
          while (lVar10 != -1) {
            if (lVar10 < 0) {
              local_1a0 = &PTR_s_Arc_counter_overflow_00af4030;
              pcStack_198 = FUN_0099f78c;
                    /* try { // try from 00988abc to 00988ad3 has its CatchHandler @ 00988b9c */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_002ab692,&local_1a0,&PTR_s__nix_store_8006w282fgsx3273c878b_00af4040);
            }
            lVar9 = *plVar8;
            if (lVar9 == lVar10) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              lVar10 = lVar9;
              if (cVar2 == '\0') {
                ppuStack_98 = ppuStack_188;
                local_a0 = local_190;
                pvStack_88 = pvStack_178;
                local_90 = local_180;
                plVar8 = (long *)(local_180 + 8);
                goto LAB_0098896c;
              }
            }
            else {
              ClearExclusiveLocal();
              lVar10 = lVar9;
            }
          }
          InstructionSynchronizationBarrier();
        } while( true );
      }
      close(local_100);
      pvVar4 = pvStack_128;
      if (local_120 != (long *)0x0) {
        lVar10 = 0;
        do {
          lVar9 = lVar10 * 8;
          lVar10 = lVar10 + 1;
          plVar8 = *(long **)((long)pvVar4 + lVar9);
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 00988a30 to 00988a33 has its CatchHandler @ 00988b14 */
            <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
            drop_slow();
          }
        } while ((long *)lVar10 != local_120);
      }
      if (local_130 != (undefined **)0x0) {
        free(pvStack_128);
      }
      close(iStack_fc);
    }
LAB_00988a5c:
    *param_1 = 2;
    param_1[1] = ppuVar6;
  }
  return;
LAB_0098896c:
  lVar10 = *plVar8;
  while (lVar10 != -1) {
    if (lVar10 < 0) {
      local_1a0 = &PTR_s_Arc_counter_overflow_00af4030;
      pcStack_198 = FUN_0099f78c;
                    /* try { // try from 00988aec to 00988b03 has its CatchHandler @ 00988b80 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002ab692,&local_1a0,&PTR_s__nix_store_8006w282fgsx3273c878b_00af4040);
    }
    lVar9 = *plVar8;
    if (lVar9 == lVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lVar10 = lVar9;
      if (cVar2 == '\0') {
        ppuStack_238 = ppuStack_188;
        local_240 = local_190;
        pvStack_228 = pvStack_178;
        lStack_230 = local_180;
        lStack_278 = (long)local_130;
        local_280 = ppuStack_138;
        lStack_268 = (long)local_120;
        local_270 = pvStack_128;
        local_260 = ppuStack_118;
        uStack_24c = CONCAT44(local_100,uStack_104);
        uStack_258 = local_110;
        uStack_254 = uStack_10c;
        uStack_250 = uStack_108;
        local_1d8 = local_1a0;
        lVar10 = local_180;
        unaff_x23 = pcStack_198;
        if (local_1a0 != (undefined **)0xfffffffffffffffe) goto LAB_00988850;
        goto LAB_00988a5c;
      }
    }
    else {
      ClearExclusiveLocal();
      lVar10 = lVar9;
    }
  }
  InstructionSynchronizationBarrier();
  goto LAB_0098896c;
}


// ===== 00988be0  FUN_00988be0 =====

void FUN_00988be0(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1 + 1;
  if (*param_1 != 1) {
    FUN_00989588(plVar1,param_2,param_3,0xffffffff);
    return;
  }
  if (*plVar1 != -1) {
    if (*(int *)(param_2 + 0x44) != -1) {
      FUN_0098552c(plVar1,param_2,param_3,0xffffffff);
      FUN_009844b4(plVar1);
      FUN_00985910(&DAT_00b0f710,param_1 + 7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,&PTR_s__root__cargo_registry_src_index__00af3aa8);
  }
  FUN_0097f56c(param_1[2] + 0x10);
  return;
}


// ===== 00988c84  FUN_00988c84 =====

void FUN_00988c84(long *param_1,long param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  if (*param_1 != 1) {
    if (*(int *)(param_2 + 0x80) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&PTR_s__root__cargo_registry_src_index__00af3fb8);
    }
    pcVar1 = (char *)(param_2 + 0x74);
    if (*pcVar1 != '\0') {
      return;
    }
    pcVar1[0] = '\x01';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar2 = *(uint *)(param_2 + 0x70);
    uVar3 = 0;
    do {
      if (uVar2 == uVar3) {
        *(undefined8 *)(param_2 + 0x50) = 0;
        goto LAB_00988cb4;
      }
      uVar6 = uVar3 + 1;
      auVar7 = FUN_009a2dd4(param_2 + 0x50,uVar3,0xffffffffffffffff);
      uVar5 = auVar7._8_8_;
      uVar3 = uVar6;
    } while ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0);
    uVar4 = uVar5;
    if (uVar6 < uVar2) {
      do {
        uVar3 = uVar6 + 1;
        auVar7 = FUN_009a2dd4(param_2 + 0x50,uVar6,0xffffffffffffffff);
        uVar5 = uVar4;
        if (auVar7._8_8_ <= uVar4) {
          uVar5 = auVar7._8_8_;
        }
        if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          uVar5 = uVar4;
        }
        uVar4 = uVar5;
        uVar6 = uVar3;
      } while (uVar2 != uVar3);
    }
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    *(ulong *)(param_2 + 0x50) = uVar5;
  }
LAB_00988cb4:
  if (param_1[1] != -1) {
    FUN_00984684(param_1 + 1,param_2);
    return;
  }
  if (*(long *)(param_1[2] + 0x18) == 0) {
    return;
  }
  <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_all_slow(param_1[2] + 0x18);
  return;
}


// ===== 00988dd4  FUN_00988dd4 =====

void FUN_00988dd4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  
  *(undefined4 *)(param_1 + 6) = 1;
  uVar1 = param_2 + param_1[4] + 1;
  if (param_2 < uVar1) {
    plVar2 = param_1 + 3;
    uVar8 = param_2;
LAB_00988e30:
    do {
      pcVar9 = (char *)(*param_1 + (param_1[4] & uVar8) * 0x18);
      if (*pcVar9 == '\0') {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
        if (bVar4) {
          *pcVar9 = '\x01';
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00988edc;
        lVar5 = *(long *)(pcVar9 + 0x10);
      }
      else {
        ClearExclusiveLocal();
LAB_00988edc:
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                  (pcVar9,param_2,0xffffffff);
        lVar5 = *(long *)(pcVar9 + 0x10);
        param_2 = extraout_x1_00;
      }
      if (lVar5 != 0) {
        lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x38);
        lVar7 = *(long *)(lVar5 + lVar6);
        *(long *)(pcVar9 + 0x10) = lVar7;
        if (lVar7 == 0) {
          pcVar9[8] = '\0';
          pcVar9[9] = '\0';
          pcVar9[10] = '\0';
          pcVar9[0xb] = '\0';
          pcVar9[0xc] = '\0';
          pcVar9[0xd] = '\0';
          pcVar9[0xe] = '\0';
          pcVar9[0xf] = '\0';
        }
        else {
          *(undefined8 *)(lVar7 + *(long *)(*(long *)(lVar7 + 0x10) + 0x38) + 8) = 0;
          lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x38);
        }
        *(undefined8 *)(lVar5 + lVar6) = 0;
        *(undefined8 *)(lVar5 + *(long *)(*(long *)(lVar5 + 0x10) + 0x38) + 8) = 0;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      do {
        if (*pcVar9 != '\x01') {
          ClearExclusiveLocal();
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar9,0);
          param_2 = extraout_x1_01;
          break;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
        if (bVar4) {
          *pcVar9 = '\0';
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x10) + 0x30))();
        param_2 = extraout_x1;
        goto LAB_00988e30;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  return;
}


// ===== 00988f2c  <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec_twice =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec_twice */

bool __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec_twice(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  do {
    uVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar3 - 0x80;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (0x7f < uVar3) {
    return uVar3 < 0xc0;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: prev.ref_count() >= 2",0x27,
             &PTR_s__root__cargo_registry_src_index__00af3e80);
}


// ===== 00988f74  <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle */

undefined4 __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle
          (ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong local_20;
  ulong local_18;
  
  uVar3 = *param_1;
  while( true ) {
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: curr.is_running()",0x23,
                 &PTR_s__root__cargo_registry_src_index__00af3e08);
    }
    if (((uint)uVar3 >> 5 & 1) == 0) {
      if (((uint)uVar3 >> 2 & 1) == 0) {
        if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: self.ref_count() > 0",0x26,
                     &PTR_s__root__cargo_registry_src_index__00af4000);
        }
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
      local_18 = 1;
      puVar6 = &local_20;
    }
    else {
      uVar5 = 0;
      puVar6 = &local_18;
      uVar4 = 3;
    }
    *puVar6 = uVar5;
    if (local_18 != 1) break;
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = local_20;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return uVar4;
      }
    }
    ClearExclusiveLocal();
    local_18 = 1;
    uVar3 = *param_1;
  }
  return uVar4;
}


// ===== 0098906c  <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast */

undefined8 __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
          (long *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 != 0xcc) {
    ClearExclusiveLocal();
    return 1;
  }
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar2) {
    *param_1 = 0x84;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}


// ===== 009890a4  <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running */

uint __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running
          (ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
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
      if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
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
        return uVar4;
      }
    }
    ClearExclusiveLocal();
    uVar4 = (uint)uVar6;
    uVar3 = uVar6;
  } while( true );
}


// ===== 00989144  <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete */

ulong __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
          (ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  do {
    uVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar3 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((uVar3 & 1) != 0) {
    if (((uint)uVar3 >> 1 & 1) == 0) {
      return uVar3 ^ 3;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: prev.is_running()",0x23,
             &PTR_s__root__cargo_registry_src_index__00af3e98);
}


// ===== 009891a0  <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown */

bool __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
          (ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
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
        return (uVar3 & 3) == 0;
      }
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  } while( true );
}


// ===== 009891e4  <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal */

bool __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
          (ulong *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong local_40;
  ulong local_38;
  ulong *local_30;
  undefined *puStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_40;
  do {
    local_38 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_38 + param_2 * -0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_38 = local_38 >> 6;
  if (param_2 <= local_38) {
    return local_38 == param_2;
  }
  local_30 = &local_38;
  puStack_28 = PTR_fmt_00b00c10;
  puStack_18 = PTR_fmt_00b00c10;
  local_40 = param_2;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_30,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 0098925c  <tokio::runtime::task::state::tokio::runtime::task::state::State>::unset_waker_after_complete =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::unset_waker_after_complete */

ulong __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::unset_waker_after_complete
          (ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  do {
    uVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar3 & 0xffffffffffffffef;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (((uint)uVar3 >> 1 & 1) != 0) {
    if (((uint)uVar3 >> 4 & 1) != 0) {
      return uVar3 & 0xffffffffffffffef;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_join_waker_set()",0x2a,
               &PTR_s__root__cargo_registry_src_index__00af3ef8);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: prev.is_complete()",0x24,
             &PTR_s__root__cargo_registry_src_index__00af3ee0);
}


// ===== 009892b8  FUN_009892b8 =====

undefined4 FUN_009892b8(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *param_1;
  if ((uVar4 & 1) != 0) goto LAB_009892ec;
  do {
    uVar5 = uVar4;
    if ((uVar4 & 6) == 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar6 = uVar4 + 0x44;
      uVar3 = 1;
    }
    else {
      if (uVar4 < 0x40) {
LAB_0098934c:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.ref_count() > 0",0x26,
                   &PTR_s__root__cargo_registry_src_index__00af4000);
      }
      uVar6 = uVar4 - 0x40;
      uVar3 = 2;
      if (0x3f < uVar6) {
        uVar3 = 0;
      }
    }
    while( true ) {
      while (uVar4 = *param_1, uVar4 == uVar5) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = uVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return uVar3;
        }
      }
      ClearExclusiveLocal();
      if ((uVar4 & 1) == 0) break;
LAB_009892ec:
      if (uVar4 < 0x40) goto LAB_0098934c;
      uVar6 = (uVar4 | 4) - 0x40;
      if (uVar6 < 0x40) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: snapshot.ref_count() > 0",0x2a,
                   &PTR_s__root__cargo_registry_src_index__00af3e38);
      }
      uVar3 = 0;
      uVar5 = uVar4;
    }
  } while( true );
}


// ===== 00989394  <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_join_handle_dropped =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_join_handle_dropped
    */

bool __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_join_handle_dropped
          (ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = (uint)*param_1;
  uVar4 = *param_1;
  do {
    if ((uVar5 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af3e50);
    }
    uVar1 = 0xffffffffffffffe5;
    if ((uVar4 & 2) != 0) {
      uVar1 = 0xfffffffffffffff7;
    }
    while (uVar6 = *param_1, uVar6 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1 & uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return (uVar1 & uVar4 & 0x10) == 0;
      }
    }
    ClearExclusiveLocal();
    uVar5 = (uint)uVar6;
    uVar4 = uVar6;
  } while( true );
}


// ===== 00989408  <tokio::runtime::task::state::tokio::runtime::task::state::State>::load =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::load */

undefined8 __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::load(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00989410  <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec */

bool __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(ulong *param_1)

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
  if (uVar3 != 0) {
    return uVar3 == 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: prev.ref_count() >= 1",0x27,
             &PTR_s__root__cargo_registry_src_index__00af3f10);
}


// ===== 00989458  FUN_00989458 =====

void FUN_00989458(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long local_8;
  
  if (*(int *)((long)param_1 + 0x44) != -1) {
    local_8 = <mio::waker::mio::waker::Waker>::wake();
    if (local_8 == 0) {
      return;
    }
                    /* try { // try from 00989514 to 00989537 has its CatchHandler @ 00989570 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("failed to wake I/O driver",0x19,&local_8,&PTR_FUN_00af39f8,
               &PTR_s__root__cargo_registry_src_index__00af3af0);
  }
  lVar6 = *param_1;
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    return;
  }
  if (lVar4 != 1) {
    if (lVar4 == 2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("inconsistent state in unpark",0x39,&PTR_s__root__cargo_registry_src_index__00af3938)
    ;
  }
  pcVar5 = (char *)(lVar6 + 0x20);
  if (*pcVar5 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
    if (bVar3) {
      *pcVar5 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_009894e4;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar6 + 0x20,param_2,0xffffffff);
LAB_009894e4:
  do {
    pcVar5 = (char *)(lVar6 + 0x20);
    if (*pcVar5 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(lVar6 + 0x20,0);
      lVar4 = *(long *)(lVar6 + 0x18);
      goto joined_r0x00989568;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
    if (bVar3) {
      *pcVar5 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = *(long *)(lVar6 + 0x18);
joined_r0x00989568:
  if (lVar4 == 0) {
    return;
  }
  <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow(lVar6 + 0x18);
  return;
}


// ===== 00989588  FUN_00989588 =====

/* WARNING: Removing unreachable block (ram,0x00989650) */

void FUN_00989588(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 local_80 [2] [12];
  ulong local_68;
  
  if (*(int *)(param_2 + 0x80) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
               ,0x73,&PTR_s__root__cargo_registry_src_index__00af3f40);
  }
  if (*(char *)(param_2 + 0x74) != '\0') {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !handle.is_shutdown()",0x27,
               &PTR_s__root__cargo_registry_src_index__00af3f88);
  }
  if (*(int *)(param_2 + 0x80) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
               ,0x73,&PTR_s__root__cargo_registry_src_index__00af3f58);
  }
  plVar1 = (long *)(param_2 + 0x58);
  if (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_009896a0;
    lVar9 = *(long *)(param_2 + 0x60);
    uVar11 = *(long *)(param_2 + 0x68) * 0x28;
    lVar13 = lVar9 + uVar11;
    if (*(long *)(param_2 + 0x68) == 0) goto LAB_009896c0;
LAB_0098960c:
    do {
                    /* try { // try from 0098960c to 00989617 has its CatchHandler @ 009899c8 */
      lVar10 = lVar9 + 0x28;
      FUN_009b7d88(local_80,lVar9 + 8);
      if ((local_80[0]._0_8_ & 1) != 0) {
        bVar7 = true;
        uVar11 = local_68;
        if (lVar10 != lVar13) {
          lVar9 = lVar9 + 0x30;
          uVar14 = (ulong)(lVar13 - lVar10) / 0x28;
          uVar12 = local_68;
          do {
                    /* try { // try from 009896ec to 009896f7 has its CatchHandler @ 009899c4 */
            FUN_009b7d88(local_80,lVar9);
            lVar9 = lVar9 + 0x28;
            uVar11 = uVar12;
            if (local_68 <= uVar12) {
              uVar11 = local_68;
            }
            if (local_80[0]._0_4_ == 0) {
              uVar11 = uVar12;
            }
            uVar14 = uVar14 - 1;
            uVar12 = uVar11;
          } while (uVar14 != 0);
        }
        goto LAB_0098971c;
      }
      uVar11 = uVar11 - 0x28;
      lVar9 = lVar10;
    } while (uVar11 != 0);
    bVar7 = false;
    uVar11 = 0;
  }
  else {
    ClearExclusiveLocal();
LAB_009896a0:
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_exclusive_slow
              (param_2 + 0x58,param_2,0xffffffff);
    lVar9 = *(long *)(param_2 + 0x60);
    uVar11 = *(long *)(param_2 + 0x68) * 0x28;
    lVar13 = lVar9 + uVar11;
    if (*(long *)(param_2 + 0x68) != 0) goto LAB_0098960c;
LAB_009896c0:
    bVar7 = false;
  }
LAB_0098971c:
  if (*(int *)(param_2 + 0x80) == -1) {
                    /* try { // try from 009898a0 to 009898b7 has its CatchHandler @ 009899cc */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
               ,0x73,&PTR_s__root__cargo_registry_src_index__00af3f70);
  }
  uVar14 = uVar11;
  if (uVar11 < 2) {
    uVar14 = 1;
  }
  if (!bVar7) {
    uVar14 = 0;
  }
  *(ulong *)(param_2 + 0x50) = uVar14;
  do {
    if (*plVar1 != 8) {
      ClearExclusiveLocal();
      <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_exclusive_slow
                (param_2 + 0x58,0);
      break;
    }
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (bVar7) {
    local_80[0] = <std::time::std::time::Instant>::now();
    auVar15 = <std::time::std::time::Instant>::duration_since
                        (local_80,*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
    uVar8 = auVar15._0_8_ * 1000;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar15._0_8_;
    lVar9 = SUB168(auVar6 * ZEXT816(1000),8);
    uVar14 = (auVar15._8_8_ & 0xffffffff) / 1000000;
    uVar12 = uVar8 + uVar14;
    if (CARRY8(uVar8,uVar14)) {
      lVar9 = lVar9 + 1;
    }
    if (0xfffffffffffffffc < uVar12) {
      uVar12 = 0xfffffffffffffffd;
    }
    uVar14 = 0xfffffffffffffffd;
    if (lVar9 == 0) {
      uVar14 = uVar12;
    }
    uVar12 = 0;
    if (uVar14 <= uVar11) {
      uVar12 = uVar11 - uVar14;
    }
    uVar11 = uVar12 / 1000;
    bVar7 = uVar12 % 1000 != 0;
    if (999 < uVar12) {
      bVar7 = 999 < uVar12;
    }
    if (bVar7) {
      uVar3 = (int)(uVar12 % 1000) * 1000000;
      if (param_4 != 0xffffffff) {
        bVar7 = uVar3 < param_4;
        if (uVar11 != param_3) {
          bVar7 = uVar11 < param_3;
        }
        if (!bVar7) {
          uVar11 = param_3;
          uVar3 = param_4;
        }
      }
      if (*param_1 == -1) {
        FUN_0097f308(param_1[1] + 0x10,uVar11,uVar3);
        goto LAB_00989940;
      }
      iVar2 = *(int *)(param_2 + 0x44);
    }
    else {
      if (*param_1 == -1) {
        FUN_0097f308(param_1[1] + 0x10,0,0);
        goto LAB_00989940;
      }
      iVar2 = *(int *)(param_2 + 0x44);
    }
joined_r0x00989858:
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af3a90);
    }
  }
  else {
    if (param_4 != 0xffffffff) {
      if (*param_1 == -1) {
        FUN_0097f308(param_1[1] + 0x10,param_3,param_4);
        goto LAB_00989940;
      }
      iVar2 = *(int *)(param_2 + 0x44);
      goto joined_r0x00989858;
    }
    if (*param_1 == -1) {
      FUN_0097f56c(param_1[1] + 0x10);
      goto LAB_00989940;
    }
    if (*(int *)(param_2 + 0x44) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af3aa8);
    }
  }
  FUN_0098552c(param_1,param_2);
  FUN_009844b4(param_1);
  FUN_00985910(&DAT_00b0f710,param_1 + 6);
LAB_00989940:
  FUN_009a323c(param_2 + 0x50,param_2 + 0x88);
  return;
}


// ===== 00989a04  <tokio::runtime::driver::tokio::runtime::driver::Handle>::io =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::driver::tokio::runtime::driver::Handle>::io */

void __rustcall
<tokio::runtime::driver::tokio::runtime::driver::Handle>::io(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x44) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,param_2);
}


// ===== 00989a30  <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<dyn for<'a, 'b>
   core[bcece726f298455b]::ops::function::Fn<(&'a
   tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,), Output = ()> +
   core[bcece726f298455b]::marker::Sync + core[bcece726f298455b]::marker::Send>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
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
                    /* try { // try from 00989a5c to 00989a63 has its CatchHandler @ 00989ad0 */
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


// ===== 00989ae8  <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow
          (undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  void *__ptr_00;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 00989afc to 00989b03 has its CatchHandler @ 00989bdc */
  FUN_0099f404((long)__ptr + 0x10);
  plVar3 = *(long **)((long)__ptr + 0x10);
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
                    /* try { // try from 00989b24 to 00989b2b has its CatchHandler @ 00989bd4 */
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::scoped::ScopeData>>::drop_slow
                ((long)__ptr + 0x10);
    }
  }
  if ((*(long *)((long)__ptr + 0x18) != 0) &&
     (__ptr_00 = *(void **)((long)__ptr + 0x20), __ptr_00 != (void *)0x0)) {
    puVar6 = *(undefined8 **)((long)__ptr + 0x28);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00989b48 to 00989b4f has its CatchHandler @ 00989bb4 */
      (*pcVar4)(__ptr_00);
    }
    if (puVar6[1] != 0) {
      free(__ptr_00);
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar3 = (long *)((long)__ptr + 8);
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
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00989c50  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(undefined8 *param_1)

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


// ===== 00989c88  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow
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
                    /* try { // try from 00989ca8 to 00989cbb has its CatchHandler @ 00989d04 */
    (**(code **)(*(long *)((long)__ptr + 0x20) + 0x18))(*(undefined8 *)((long)__ptr + 0x28));
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    (**(code **)(*(long *)((long)__ptr + 0x10) + 0x18))(*(undefined8 *)((long)__ptr + 0x18));
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


// ===== 00989d44  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Sender<()>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Sender<()>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Sender<()>>>::drop_slow
          (undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  void *__ptr;
  long *plVar8;
  
  __ptr = (void *)*param_1;
  plVar8 = (long *)((long)__ptr + 0x10);
  lVar4 = *plVar8;
  if (lVar4 != 0) {
    puVar1 = (ulong *)(lVar4 + 0x30);
    uVar7 = *(ulong *)(lVar4 + 0x30);
    do {
      while( true ) {
        uVar6 = uVar7;
        if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_00989da8;
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
                    /* try { // try from 00989da4 to 00989da7 has its CatchHandler @ 00989e28 */
      (**(code **)(*(long *)(lVar4 + 0x20) + 0x10))(*(undefined8 *)(lVar4 + 0x28));
    }
LAB_00989da8:
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
                    /* try { // try from 00989dc8 to 00989dcf has its CatchHandler @ 00989e20 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(plVar8);
      }
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar8 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar4 + -1;
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


// ===== 00989e94  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::loom::std::parking_lot::Mutex<tokio[8c8895dbfa691109]::io::util::mem::SimplexStream>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::loom::std::parking_lot::Mutex<tokio[8c8895dbfa691109]::io::util::mem::SimplexStream>>>::drop_slow
    */

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::loom::std::parking_lot::Mutex<tokio[8c8895dbfa691109]::io::util::mem::SimplexStream>>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 00989ea4 to 00989eab has its CatchHandler @ 00989f2c */
  <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop((long)__ptr + 0x18);
  if (*(long *)((long)__ptr + 0x40) != 0) {
                    /* try { // try from 00989ebc to 00989ebf has its CatchHandler @ 00989f24 */
    (**(code **)(*(long *)((long)__ptr + 0x40) + 0x18))(*(undefined8 *)((long)__ptr + 0x48));
  }
  if (*(long *)((long)__ptr + 0x50) != 0) {
                    /* try { // try from 00989ed0 to 00989ed3 has its CatchHandler @ 00989f1c */
    (**(code **)(*(long *)((long)__ptr + 0x50) + 0x18))(*(undefined8 *)((long)__ptr + 0x58));
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


// ===== 00989f98  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>::drop_slow
    */

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  free(*(void **)((long)__ptr + 0x10));
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


// ===== 0098a000  <alloc::sync::[n]::alloc::sync::Arc<signal_hook_registry::register<tokio::signal::unix::signal_enable::{closure#0}::{closure#0}>::{closure#0}>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<signal_hook_registry::register<tokio::signal::unix::signal_enable::{closure#0}::{closure#0}>::{closure#0}>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<signal_hook_registry::register<tokio::signal::unix::signal_enable::{closure#0}::{closure#0}>::{closure#0}>>
::drop_slow(undefined8 *param_1)

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


// ===== 0098a038  <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow */

void * __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  uVar4 = close(*(int *)((long)__ptr + 0x10));
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
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
      DataMemoryBarrier(2,1);
      free(__ptr);
      return __ptr;
    }
  }
  return (void *)(ulong)uVar4;
}


// ===== 0098a098  <alloc::sync::[n]::alloc::sync::Arc<std::fs::DirEntry>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::fs::DirEntry>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::fs::DirEntry>>::drop_slow(undefined8 *param_1)

{
  undefined1 *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr_00;
  
  __ptr_00 = (void *)*param_1;
  plVar3 = *(long **)((long)__ptr_00 + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0098a0c8 to 0098a0cb has its CatchHandler @ 0098a128 */
    <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow();
  }
  __ptr = *(undefined1 **)((long)__ptr_00 + 0x18);
  lVar4 = *(long *)((long)__ptr_00 + 0x20);
  *__ptr = 0;
  if (lVar4 != 0) {
    free(__ptr);
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


// ===== 0098a17c  <alloc::sync::[n]::alloc::sync::Arc<std::thread::scoped::ScopeData>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::thread::scoped::ScopeData>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::thread::scoped::ScopeData>>::drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  plVar3 = *(long **)((long)__ptr + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0098a1ac to 0098a1af has its CatchHandler @ 0098a1f8 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
    ::drop_slow();
  }
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
  return;
}


// ===== 0098a238  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow
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


// ===== 0098a270  <alloc::sync::[n]::alloc::sync::Arc<tokio::task::local::Shared>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::task::local::Shared>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::task::local::Shared>>::drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  void *__ptr;
  long *plVar4;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 0098a280 to 0098a287 has its CatchHandler @ 0098a354 */
  FUN_00998cc4((long)__ptr + 0x38);
  if (*(long *)((long)__ptr + 0x38) != 0) {
    free(*(void **)((long)__ptr + 0x40));
  }
  plVar4 = (long *)((long)__ptr + 0x60);
                    /* try { // try from 0098a2b0 to 0098a2b7 has its CatchHandler @ 0098a334 */
  if ((*plVar4 != -1) && (FUN_00998cc4(plVar4), *plVar4 != 0)) {
    free(*(void **)((long)__ptr + 0x68));
  }
  if (*(long *)((long)__ptr + 0x80) != 0) {
                    /* try { // try from 0098a2e0 to 0098a2e3 has its CatchHandler @ 0098a32c */
    (**(code **)(*(long *)((long)__ptr + 0x80) + 0x18))(*(undefined8 *)((long)__ptr + 0x88));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar4 = (long *)((long)__ptr + 8);
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
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0098a3cc  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(undefined8 *param_1)

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


// ===== 0098a404  <alloc::sync::[n]::alloc::sync::Arc<tokio::net::tcp::stream::TcpStream>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::net::tcp::stream::TcpStream>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::net::tcp::stream::TcpStream>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 0098a414 to 0098a41b has its CatchHandler @ 0098a484 */
  FUN_0099f9a0((long)__ptr + 0x10);
  if (*(int *)((long)__ptr + 0x28) != -1) {
    close(*(int *)((long)__ptr + 0x28));
  }
                    /* try { // try from 0098a42c to 0098a433 has its CatchHandler @ 0098a47c */
  FUN_00988390((long)__ptr + 0x10);
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


// ===== 0098a4e4  <alloc::sync::[n]::alloc::sync::Arc<tokio::net::unix::stream::UnixStream>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::net::unix::stream::UnixStream>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::net::unix::stream::UnixStream>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 0098a4f4 to 0098a4fb has its CatchHandler @ 0098a564 */
  FUN_0099fa80((long)__ptr + 0x10);
  if (*(int *)((long)__ptr + 0x28) != -1) {
    close(*(int *)((long)__ptr + 0x28));
  }
                    /* try { // try from 0098a50c to 0098a513 has its CatchHandler @ 0098a55c */
  FUN_00988390((long)__ptr + 0x10);
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


// ===== 0098a5c4  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 0098a5d4 to 0098a5df has its CatchHandler @ 0098a678 */
  FUN_0097f9c8((long)__ptr + 0x80,0x3f);
  if (*(long *)((long)__ptr + 0xb0) != 0) {
                    /* try { // try from 0098a5f0 to 0098a5f3 has its CatchHandler @ 0098a658 */
    (**(code **)(*(long *)((long)__ptr + 0xb0) + 0x18))(*(undefined8 *)((long)__ptr + 0xb8));
  }
  if (*(long *)((long)__ptr + 0xc0) != 0) {
                    /* try { // try from 0098a604 to 0098a607 has its CatchHandler @ 0098a650 */
    (**(code **)(*(long *)((long)__ptr + 0xc0) + 0x18))(*(undefined8 *)((long)__ptr + 200));
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


// ===== 0098a6c4  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow
          (undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 0098a6dc to 0098a6e3 has its CatchHandler @ 0098a8b4 */
  FUN_00998e94((long)__ptr + 0x48);
  if (*(long *)((long)__ptr + 0x48) != 0) {
    free(*(void **)((long)__ptr + 0x50));
  }
  plVar4 = *(long **)((long)__ptr + 0x98);
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
                    /* try { // try from 0098a720 to 0098a723 has its CatchHandler @ 0098a89c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Sender<()>>>::drop_slow();
    }
  }
                    /* try { // try from 0098a724 to 0098a72b has its CatchHandler @ 0098a8ac */
  FUN_00987b08((long)__ptr + 0xa0);
  lVar5 = *(long *)((long)__ptr + 0x70);
  if (lVar5 != 0) {
    lVar6 = *(long *)((long)__ptr + 0x80);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)((long)__ptr + 0x68);
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
                    /* try { // try from 0098a788 to 0098a78b has its CatchHandler @ 0098a910 */
        FUN_009c5c70((long)puVar7 + (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78U) * -4 + -0x18);
        lVar6 = lVar6 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x21 != -0x29) {
      free((void *)(*(long *)((long)__ptr + 0x68) + lVar5 * -0x20 + -0x20));
    }
  }
  plVar4 = *(long **)((long)__ptr + 0x30);
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
                    /* try { // try from 0098a7e0 to 0098a7e3 has its CatchHandler @ 0098a8a4 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
    ::drop_slow();
  }
  plVar4 = *(long **)((long)__ptr + 0xd0);
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
                    /* try { // try from 0098a808 to 0098a80b has its CatchHandler @ 0098a894 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  plVar4 = *(long **)((long)__ptr + 0xe0);
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
                    /* try { // try from 0098a830 to 0098a833 has its CatchHandler @ 0098a88c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar4 = (long *)((long)__ptr + 8);
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
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0098a9c8  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::drop_slow
          (undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x80) != 0) {
    free(*(void **)((long)__ptr + 0x78));
  }
                    /* try { // try from 0098a9f4 to 0098a9fb has its CatchHandler @ 0098ab0c */
  FUN_00987e70((long)__ptr + 0x10);
                    /* try { // try from 0098a9fc to 0098aa03 has its CatchHandler @ 0098ab04 */
  FUN_00987fcc((long)__ptr + 0xe0);
  plVar3 = *(long **)((long)__ptr + 0x168);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0098aa20 to 0098aa27 has its CatchHandler @ 0098aafc */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow
              ((long)__ptr + 0x168);
  }
  plVar3 = *(long **)((long)__ptr + 0x180);
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
                    /* try { // try from 0098aa48 to 0098aa4f has its CatchHandler @ 0098aac8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((long)__ptr + 0x180);
    }
  }
  plVar3 = *(long **)((long)__ptr + 400);
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
                    /* try { // try from 0098aa70 to 0098aa77 has its CatchHandler @ 0098aac0 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((long)__ptr + 400);
    }
  }
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
  return;
}


// ===== 0098ab84  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  plVar3 = *(long **)((long)__ptr + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Shared>>::
    drop_slow();
  }
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
  return;
}


// ===== 0098ac00  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Shared>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Shared>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Shared>>::
drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long *plVar3;
  long lVar4;
  void *__ptr_00;
  
  __ptr_00 = (void *)*param_1;
  if (*(long *)((long)__ptr_00 + 0x10) == 0) {
    if (*(long *)((long)__ptr_00 + 0x18) == -1) {
      plVar3 = *(long **)((long)__ptr_00 + 0x20);
      do {
        lVar4 = *plVar3 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_0098ad50;
    }
    if (*(long *)((long)__ptr_00 + 0x18) != 0) {
      free(*(void **)((long)__ptr_00 + 0x20));
    }
    close(*(int *)((long)__ptr_00 + 0x30));
    close(*(int *)((long)__ptr_00 + 0x40));
    plVar3 = *(long **)((long)__ptr_00 + 0x38);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow();
    }
    __ptr = *(void **)((long)__ptr_00 + 0x48);
    if (__ptr == (void *)0xffffffffffffffff) goto LAB_0098ad5c;
    plVar3 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if (*(long *)((long)__ptr_00 + 0x18) == -1) {
      plVar3 = *(long **)((long)__ptr_00 + 0x20);
      do {
        lVar4 = *plVar3 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_0098ad50:
      if (lVar4 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow();
      }
      goto LAB_0098ad5c;
    }
    if (*(long *)((long)__ptr_00 + 0x18) != 0) {
      free(*(void **)((long)__ptr_00 + 0x20));
    }
    close(*(int *)((long)__ptr_00 + 0x30));
    close(*(int *)((long)__ptr_00 + 0x40));
    plVar3 = *(long **)((long)__ptr_00 + 0x38);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow();
    }
    __ptr = *(void **)((long)__ptr_00 + 0x48);
    if (__ptr == (void *)0xffffffffffffffff) goto LAB_0098ad5c;
    plVar3 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar4 == 0) {
    DataMemoryBarrier(2,1);
    free(__ptr);
  }
LAB_0098ad5c:
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


// ===== 0098ada4  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  void *__ptr_00;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  __ptr = (void *)*param_1;
  lVar6 = *(long *)((long)__ptr + 0x80);
  if (lVar6 != 0) {
    __ptr_00 = *(void **)((long)__ptr + 0x78);
    lVar7 = 0;
    do {
      puVar5 = (undefined8 *)((long)__ptr_00 + lVar7 * 0x10);
      lVar7 = lVar7 + 1;
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
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
        ::drop_slow(puVar5);
      }
      plVar3 = (long *)puVar5[1];
      do {
        lVar4 = *plVar3;
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
        drop_slow(puVar5 + 1);
      }
    } while (lVar7 != lVar6);
    free(__ptr_00);
  }
  if (*(long *)((long)__ptr + 0x90) != 0) {
    free(*(void **)((long)__ptr + 0x88));
  }
  if (*(long *)((long)__ptr + 0xf0) != 0) {
    free(*(void **)((long)__ptr + 0xf8));
  }
  puVar5 = *(undefined8 **)((long)__ptr + 0x130);
  for (lVar6 = *(long *)((long)__ptr + 0x138); lVar6 != 0; lVar6 = lVar6 + -1) {
                    /* try { // try from 0098ae80 to 0098ae83 has its CatchHandler @ 0098afd0 */
    FUN_009bfca8(*puVar5);
    puVar5 = puVar5 + 1;
  }
  if (*(long *)((long)__ptr + 0x128) != 0) {
    free(*(void **)((long)__ptr + 0x130));
  }
                    /* try { // try from 0098aea0 to 0098aea7 has its CatchHandler @ 0098afc8 */
  FUN_00987e70((long)__ptr + 0x10);
                    /* try { // try from 0098aea8 to 0098aeaf has its CatchHandler @ 0098afc0 */
  FUN_00987fcc((long)__ptr + 0x140);
  plVar3 = *(long **)((long)__ptr + 0x1c8);
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
                    /* try { // try from 0098aecc to 0098aed3 has its CatchHandler @ 0098afb8 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow
              ((long)__ptr + 0x1c8);
  }
  plVar3 = *(long **)((long)__ptr + 0x1e0);
  if (plVar3 != (long *)0x0) {
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
                    /* try { // try from 0098aef4 to 0098aefb has its CatchHandler @ 0098af84 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((long)__ptr + 0x1e0);
    }
  }
  plVar3 = *(long **)((long)__ptr + 0x1f0);
  if (plVar3 != (long *)0x0) {
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
                    /* try { // try from 0098af1c to 0098af23 has its CatchHandler @ 0098af7c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((long)__ptr + 0x1f0);
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar3 = (long *)((long)__ptr + 8);
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
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0098b084  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>::
drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  long local_28;
  
  __ptr = (void *)*param_1;
  plVar3 = *(long **)((long)__ptr + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0098b0b8 to 0098b0bb has its CatchHandler @ 0098b12c */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
  plVar3 = (long *)((long)__ptr + 0x20);
  do {
    local_28 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (local_28 != 0) {
                    /* try { // try from 0098b0d4 to 0098b0db has its CatchHandler @ 0098b158 */
    FUN_0097cd18(&local_28);
  }
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
  return;
}


// ===== 0098b198  <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow(undefined8 *param_1)

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


// ===== 0098b1d0  <tokio::loom::std::barrier::Barrier_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::loom::std::barrier::Barrier as core::fmt::Debug>::fmt */

void __rustcall
<tokio::loom::std::barrier::Barrier_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"Barrierchannel closed",7)
  ;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 0098b208  <tokio::sync::watch::error::RecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::watch::error::RecvError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::watch::error::RecvError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0098b220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"channel closed",0xe);
  return;
}


// ===== 0098b224  <tokio::loom::std::barrier::BarrierWaitResult_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::loom::std::barrier::BarrierWaitResult as core::fmt::Debug>::fmt */

void __rustcall
<tokio::loom::std::barrier::BarrierWaitResult_as_core::fmt::Debug>::fmt
          (undefined1 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined1 local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"BarrierWaitResult",0x11);
  local_4[0] = *param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"is_leaderchannel empty",9,local_4,&DAT_00af4058);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0098b290  <tokio::sync::oneshot::error::TryRecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::oneshot::error::TryRecvError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::oneshot::error::TryRecvError_as_core::fmt::Display>::fmt
          (byte *param_1,undefined8 *param_2)

{
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0098b2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,"channel closed",0xe);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0098b2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"channel empty",0xd);
  return;
}


// ===== 0098b2c0  <tokio::runtime::task::state::State_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::State as core::fmt::Debug>::fmt */

void __rustcall <tokio::runtime::task::state::State_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <tokio::runtime::task::state::Snapshot_as_core::fmt::Debug>::fmt(&local_18);
  return;
}


// ===== 0098b2e8  <tokio::runtime::task::state::Snapshot_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::state::Snapshot as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::task::state::Snapshot_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_50 [16];
  byte local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  byte local_30 [4];
  byte local_2c [4];
  ulong local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_50,param_2,&DAT_002a17c0,8);
  uVar3 = *param_1;
  uVar2 = (uint)uVar3;
  local_40[0] = (byte)uVar3 & 1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_50,"is_running",10,local_40,&DAT_00af4058);
  local_3c[0] = (byte)(uVar2 >> 1) & 1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"is_complete",0xb,local_3c,&DAT_00af4058);
  local_38[0] = (byte)(uVar2 >> 2) & 1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"is_notified",0xb,local_38,&DAT_00af4058);
  local_34[0] = (byte)(uVar2 >> 5) & 1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"is_cancelled",0xc,local_34,&DAT_00af4058);
  local_30[0] = (byte)(uVar2 >> 3) & 1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"is_join_interested",0x12,local_30,&DAT_00af4058);
  local_2c[0] = (byte)(uVar2 >> 4) & 1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"is_join_waker_set",0x11,local_2c,&DAT_00af4058);
  local_28 = uVar3 >> 6;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"ref_count",9,&local_28,&DAT_00af4078);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0098b420  <tokio::runtime::time::Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::time::Inner as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::time::Inner_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"Inner",5);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 0098b458  <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>::release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle> as
   tokio::runtime::task::Schedule>::release */

undefined8 __rustcall
<alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
::release(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long local_18;
  
  local_18 = *(long *)(*param_2 + 0x18);
  if (local_18 == 0) {
    return 0;
  }
  lVar2 = *param_1;
  if (local_18 == *(long *)(lVar2 + 0xb0)) {
    uVar1 = FUN_009925dc(lVar2 + 0x88);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  core[bcece726f298455b]::panicking::assert_failed::
  <core[bcece726f298455b]::num::nonzero::NonZero<u64>,core[bcece726f298455b]::num::nonzero::NonZero<u64>>
            (0,&local_18,lVar2 + 0xb0,0,param_5,&PTR_s__root__cargo_registry_src_index__00af3e68);
}


// ===== 0098b4c0  <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>::schedule =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle> as
   tokio::runtime::task::Schedule>::schedule */

void __rustcall
<alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
::schedule(long *param_1,undefined8 param_2)

{
  undefined1 local_2c [4];
  long local_28;
  undefined8 uStack_20;
  undefined1 *local_18;
  
  local_2c[0] = 0;
  local_28 = *param_1 + 0x10;
  local_18 = local_2c;
  uStack_20 = param_2;
  FUN_009ae668(&local_28,&PTR_s__root__cargo_registry_src_index__00af4638);
  return;
}


// ===== 0098b500  <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>::yield_now =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle> as
   tokio::runtime::task::Schedule>::yield_now */

void __rustcall
<alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
::yield_now(long *param_1,undefined8 param_2)

{
  undefined1 local_2c [4];
  long local_28;
  undefined8 uStack_20;
  undefined1 *local_18;
  
  local_2c[0] = 1;
  local_28 = *param_1 + 0x10;
  local_18 = local_2c;
  uStack_20 = param_2;
  FUN_009ae668(&local_28,&PTR_s__root__cargo_registry_src_index__00af4638);
  return;
}


// ===== 0098b544  <tokio::loom::std::atomic_u16::AtomicU16_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::loom::std::atomic_u16::AtomicU16 as core::fmt::Debug>::fmt */

void __rustcall <tokio::loom::std::atomic_u16::AtomicU16_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b04ec8)();
  return;
}


// ===== 0098b548  <tokio::loom::std::atomic_u32::AtomicU32_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::loom::std::atomic_u32::AtomicU32 as core::fmt::Debug>::fmt */

void __rustcall <tokio::loom::std::atomic_u32::AtomicU32_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b04ed0)();
  return;
}


// ===== 0098b54c  <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>::release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle> as
   tokio::runtime::task::Schedule>::release */

undefined8 __rustcall
<alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
::release(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long local_18;
  
  local_18 = *(long *)(*param_2 + 0x18);
  if (local_18 == 0) {
    return 0;
  }
  lVar2 = *param_1;
  if (local_18 == *(long *)(lVar2 + 0xa0)) {
    uVar1 = FUN_009925dc(lVar2 + 0x78);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  core[bcece726f298455b]::panicking::assert_failed::
  <core[bcece726f298455b]::num::nonzero::NonZero<u64>,core[bcece726f298455b]::num::nonzero::NonZero<u64>>
            (0,&local_18,lVar2 + 0xa0,0,param_5,&PTR_s__root__cargo_registry_src_index__00af3e68);
}


// ===== 0098b5b4  <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>::schedule =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle> as
   tokio::runtime::task::Schedule>::schedule */

void __rustcall
<alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
::schedule(undefined8 param_1,undefined8 param_2)

{
  FUN_009aea48(param_1,param_2,&PTR_s__root__cargo_registry_src_index__00af4098);
  return;
}


// ===== 0098b5c0  FUN_0098b5c0 =====

void FUN_0098b5c0(undefined8 *param_1)

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


// ===== 0098b5f8  FUN_0098b5f8 =====

void FUN_0098b5f8(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_40 [16];
  ulong local_30;
  byte local_24 [4];
  
  lVar2 = *param_1;
  uVar3 = *(ulong *)(lVar2 + 0x138);
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_0037cf6b,6);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,&DAT_0037cf71,5,lVar2 + 0x130,&DAT_00af64d0);
  local_30 = uVar3 & 0xfffffffffffffffe;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0037cf76,7,&local_30,&DAT_00af64f0);
  local_24[0] = (byte)uVar3 & 1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0037cf7d,9,local_24,&DAT_00af6510);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0037cf86,0xc,lVar2 + 0x140,&DAT_00af6530);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0098b6c4  FUN_0098b6c4 =====

void FUN_0098b6c4(long *param_1)

{
  <std::fs::File_as_core::fmt::Debug>::fmt(*param_1 + 0x10);
  return;
}


// ===== 0098b6d0  FUN_0098b6d0 =====

void FUN_0098b6d0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  lVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,lVar1 + 0x28,&PTR_FUN_00af4aa8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0098b730  FUN_0098b730 =====

void FUN_0098b730(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  lVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,lVar1 + 0x28,&PTR_FUN_00af4ae8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0098b790  FUN_0098b790 =====

void FUN_0098b790(undefined8 param_1,long param_2)

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


// ===== 0098b7a8  <alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>as_tokio::util::linked_list::Link>::from_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo> as
   tokio::util::linked_list::Link>::from_raw */

long __rustcall
<alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>as_tokio::util::linked_list::Link>::
from_raw(long param_1)

{
  return param_1 + -0x80;
}


// ===== 0098b7b0  <alloc::sync::Arc<tokio::task::local::Shared>as_tokio::runtime::task::Schedule>::release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<tokio::task::local::Shared> as tokio::runtime::task::Schedule>::release */

long __rustcall
<alloc::sync::Arc<tokio::task::local::Shared>as_tokio::runtime::task::Schedule>::release
          (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_18;
  
  lVar2 = *param_2;
  local_18 = *(long *)(lVar2 + 0x18);
  if (local_18 == 0) {
    return 0;
  }
  lVar3 = *param_1;
  if (local_18 == *(long *)(lVar3 + 0x18)) {
    lVar4 = *(long *)(*(long *)(lVar2 + 0x10) + 0x38);
    plVar1 = (long *)(lVar2 + lVar4);
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      if (*(long *)(lVar3 + 0x20) != lVar2) {
        return 0;
      }
      lVar5 = plVar1[1];
      *(long *)(lVar3 + 0x20) = lVar5;
    }
    else {
      *(long *)(lVar5 + *(long *)(*(long *)(lVar5 + 0x10) + 0x38) + 8) = plVar1[1];
      lVar4 = *(long *)(*(long *)(lVar2 + 0x10) + 0x38);
      lVar5 = *(long *)(lVar2 + lVar4 + 8);
    }
    if (lVar5 == 0) {
      if (*(long *)(lVar3 + 0x28) != lVar2) {
        return 0;
      }
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + lVar4);
    }
    else {
      *(undefined8 *)(lVar5 + *(long *)(*(long *)(lVar5 + 0x10) + 0x38)) =
           *(undefined8 *)(lVar2 + lVar4);
      lVar4 = *(long *)(*(long *)(lVar2 + 0x10) + 0x38);
    }
    *(undefined8 *)(lVar2 + lVar4 + 8) = 0;
    *(undefined8 *)(lVar2 + *(long *)(*(long *)(lVar2 + 0x10) + 0x38)) = 0;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  core[bcece726f298455b]::panicking::assert_failed::
  <core[bcece726f298455b]::num::nonzero::NonZero<u64>,core[bcece726f298455b]::num::nonzero::NonZero<u64>>
            (0,&local_18,lVar3 + 0x18,0,param_5,&PTR_s__root__cargo_registry_src_index__00af3fd0);
}


// ===== 0098b8b4  <alloc::sync::Arc<tokio::task::local::Shared>as_tokio::runtime::task::Schedule>::schedule =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<tokio::task::local::Shared> as tokio::runtime::task::Schedule>::schedule */

void __rustcall
<alloc::sync::Arc<tokio::task::local::Shared>as_tokio::runtime::task::Schedule>::schedule
          (long *param_1)

{
  <tokio::task::local::[9]::tokio::task::local::Shared>::schedule(*param_1 + 0x10);
  return;
}


// ===== 0098b8c0  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 0098b8c4  FUN_0098b8c4 =====

void FUN_0098b8c4(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner();
}


// ===== 0098b8e0  FUN_0098b8e0 =====

undefined **
FUN_0098b8e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  long local_68;
  
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>
              (0,param_1 + 0x18,&DAT_002a1518,0,param_5,
               &PTR_s__root__cargo_registry_src_index__00af40b0);
  }
  ppuVar3 = *(undefined ***)(param_1 + 0x10);
  if (ppuVar3 != (undefined **)0x0) {
    lVar4 = *(long *)(param_1 + 8);
    do {
      auVar7 = <&std::fs::File_as_core::io::write::Write>::write(param_2,lVar4,ppuVar3);
      ppuVar5 = auVar7._8_8_;
      if (auVar7._0_8_ == 1) {
        if (((ulong)ppuVar5 & 3) < 2) {
          if ((auVar7 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            if (*(char *)(ppuVar5 + 2) != '#') goto LAB_0098ba00;
          }
          else {
            if (*(char *)((long)ppuVar5 + 0x1f) != '#') goto LAB_0098ba00;
            local_68 = (long)ppuVar5 - 1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
        }
        else if (((ulong)ppuVar5 & 3) == 2) {
                    /* try { // try from 0098b9c4 to 0098b9d7 has its CatchHandler @ 0098ba68 */
          lVar2 = core::io::error::os_functions::get_os_functions();
          iVar1 = (**(code **)(lVar2 + 0x10))((ulong)ppuVar5 >> 0x20);
          if (iVar1 == 0) goto LAB_0098ba00;
        }
        else {
          uVar6 = auVar7._12_4_ & 0xff;
          if (10 < (ulong)ppuVar5 >> 0x22) {
            uVar6 = 0xff;
          }
          if (uVar6 != 0x23) goto LAB_0098ba00;
        }
      }
      else {
        if (ppuVar5 == (undefined **)0x0) {
          ppuVar5 = &PTR_s_failed_to_write_whole_buffer_00af44c0;
          goto LAB_0098ba00;
        }
        if (ppuVar3 < ppuVar5) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar5,ppuVar3,ppuVar3,&PTR_s__nix_store_8006w282fgsx3273c878b_00af44d8);
        }
        lVar4 = lVar4 + (long)ppuVar5;
        ppuVar3 = (undefined **)((long)ppuVar3 - (long)ppuVar5);
      }
    } while (ppuVar3 != (undefined **)0x0);
  }
  ppuVar5 = (undefined **)0x0;
LAB_0098ba00:
  *(undefined8 *)(param_1 + 0x10) = 0;
  return ppuVar5;
}


// ===== 0098ba80  FUN_0098ba80 =====

undefined1  [16] FUN_0098ba80(long *param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long local_68;
  
  lVar4 = param_1[2];
  if (lVar4 != param_1[3]) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: self.is_empty()",0x21,
               &PTR_s__root__cargo_registry_src_index__00af40c8);
  }
  uVar3 = *param_1 - lVar4;
  if (uVar3 < param_3) {
    FUN_009bd2b4(param_1,lVar4,param_3,1,1);
    lVar4 = param_1[2];
    uVar3 = *param_1 - lVar4;
  }
  if (uVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,param_3,uVar3,&PTR_s__root__cargo_registry_src_index__00af40f8);
  }
  lVar5 = param_1[1];
  auVar7 = <std::io::stdio::Stdin_as_alloc::io::read::Read>::read(param_2,lVar5 + lVar4,param_3);
  if (auVar7._0_8_ == 1) {
    do {
      uVar3 = auVar7._8_8_;
      uVar6 = uVar3 & 3;
      if (1 < uVar6) {
        if (uVar6 == 2) {
                    /* try { // try from 0098bb4c to 0098bb5f has its CatchHandler @ 0098bc78 */
          lVar2 = core::io::error::os_functions::get_os_functions();
          cVar1 = (**(code **)(lVar2 + 8))(uVar3 >> 0x20);
LAB_0098bb68:
          if (cVar1 == '#') goto LAB_0098bb88;
        }
        else if ((auVar7._12_4_ & 0xff) == 0x23) goto LAB_0098bb88;
LAB_0098bbec:
        lVar4 = param_1[3];
        param_1[2] = 0;
        goto joined_r0x0098bbf8;
      }
      if ((auVar7 & (undefined1  [16])0x3) != (undefined1  [16])0x0) {
        cVar1 = *(char *)(uVar3 + 0x1f);
        goto LAB_0098bb68;
      }
      if (*(char *)(uVar3 + 0x10) != '#') goto LAB_0098bbec;
LAB_0098bb88:
      if ((1 < uVar6 - 2) && ((auVar7 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = uVar3 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      auVar7 = <std::io::stdio::Stdin_as_alloc::io::read::Read>::read(param_2,lVar5 + lVar4,param_3)
      ;
    } while ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0);
  }
  lVar4 = param_1[3];
  param_1[2] = auVar7._8_8_;
joined_r0x0098bbf8:
  if (lVar4 != 0) {
                    /* try { // try from 0098bbfc to 0098bc1b has its CatchHandler @ 0098bc8c */
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>(0,param_1 + 3,&DAT_002a1518,0);
  }
  return auVar7;
}


// ===== 0098bca8  FUN_0098bca8 =====

undefined1  [16] FUN_0098bca8(long *param_1,undefined8 *param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long local_68;
  
  lVar4 = param_1[2];
  if (lVar4 != param_1[3]) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: self.is_empty()",0x21,
               &PTR_s__root__cargo_registry_src_index__00af40c8);
  }
  uVar3 = *param_1 - lVar4;
  if (uVar3 < param_3) {
    FUN_009bd2b4(param_1,lVar4,param_3,1,1);
    lVar4 = param_1[2];
    uVar3 = *param_1 - lVar4;
  }
  if (uVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,param_3,uVar3,&PTR_s__root__cargo_registry_src_index__00af40f8);
  }
  lVar6 = param_1[1];
  uVar5 = *param_2;
  auVar8 = <std::io::pipe::PipeReader_as_alloc::io::read::Read>::read(uVar5,lVar6 + lVar4,param_3);
  if (auVar8._0_8_ == 1) {
    do {
      uVar3 = auVar8._8_8_;
      uVar7 = uVar3 & 3;
      if (1 < uVar7) {
        if (uVar7 == 2) {
                    /* try { // try from 0098bd74 to 0098bd87 has its CatchHandler @ 0098bea8 */
          lVar2 = core::io::error::os_functions::get_os_functions();
          cVar1 = (**(code **)(lVar2 + 8))(uVar3 >> 0x20);
LAB_0098bd90:
          if (cVar1 == '#') goto LAB_0098bdb0;
        }
        else if ((auVar8._12_4_ & 0xff) == 0x23) goto LAB_0098bdb0;
LAB_0098be14:
        lVar4 = param_1[3];
        param_1[2] = 0;
        goto joined_r0x0098be20;
      }
      if ((auVar8 & (undefined1  [16])0x3) != (undefined1  [16])0x0) {
        cVar1 = *(char *)(uVar3 + 0x1f);
        goto LAB_0098bd90;
      }
      if (*(char *)(uVar3 + 0x10) != '#') goto LAB_0098be14;
LAB_0098bdb0:
      if ((1 < uVar7 - 2) && ((auVar8 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = uVar3 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      auVar8 = <std::io::pipe::PipeReader_as_alloc::io::read::Read>::read
                         (uVar5,lVar6 + lVar4,param_3);
    } while ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0);
  }
  lVar4 = param_1[3];
  param_1[2] = auVar8._8_8_;
joined_r0x0098be20:
  if (lVar4 != 0) {
                    /* try { // try from 0098be24 to 0098be43 has its CatchHandler @ 0098bebc */
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>(0,param_1 + 3,&DAT_002a1518,0);
  }
  return auVar8;
}


// ===== 0098bed8  FUN_0098bed8 =====

void FUN_0098bed8(long param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 0098bf24  FUN_0098bf24 =====

void FUN_0098bf24(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 0098bf70  FUN_0098bf70 =====

void FUN_0098bf70(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    return;
  }
  return;
}


// ===== 0098bf94  FUN_0098bf94 =====

void FUN_0098bf94(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::net::unix::stream::UnixStream>>::drop_slow();
    return;
  }
  return;
}


// ===== 0098bfb8  FUN_0098bfb8 =====

void FUN_0098bfb8(long param_1)

{
  undefined1 *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 0098bfe4 to 0098bfe7 has its CatchHandler @ 0098c010 */
    <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow();
  }
  __ptr = *(undefined1 **)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  *__ptr = 0;
  if (lVar4 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0098c030  FUN_0098c030 =====

void FUN_0098c030(long param_1)

{
                    /* try { // try from 0098c040 to 0098c047 has its CatchHandler @ 0098c068 */
  FUN_0099fa80(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) != -1) {
    close(*(int *)(param_1 + 0x28));
  }
  FUN_0098c444(param_1 + 0x10);
  return;
}


// ===== 0098c094  FUN_0098c094 =====

void FUN_0098c094(undefined8 *param_1)

{
  undefined1 *__ptr;
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
                    /* try { // try from 0098c0c0 to 0098c0c7 has its CatchHandler @ 0098c0f0 */
    <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(param_1);
  }
  __ptr = (undefined1 *)param_1[1];
  lVar4 = param_1[2];
  *__ptr = 0;
  if (lVar4 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0098c110  FUN_0098c110 =====

void FUN_0098c110(ulong *param_1)

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


// ===== 0098c160  FUN_0098c160 =====

void FUN_0098c160(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      return;
    }
    uVar1 = param_1[2];
  }
  else {
    if (*param_1 != 1) {
      if (param_1[1] == 0) {
        return;
      }
      uVar1 = param_1[2];
      if ((uVar1 & 3) - 2 < 2) {
        return;
      }
      if ((uVar1 & 3) == 0) {
        return;
      }
      goto LAB_0098c1e8;
    }
    uVar1 = param_1[1];
    if (uVar1 == 0) {
      return;
    }
  }
  if (((uVar1 & 3) - 2 < 2) || ((uVar1 & 3) == 0)) {
    return;
  }
LAB_0098c1e8:
  local_18 = uVar1 - 1;
  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  return;
}


// ===== 0098c210  FUN_0098c210 =====

void FUN_0098c210(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = *param_1;
  if (uVar4 == 0xfffffffffffffffe) {
    plVar5 = (long *)param_1[1];
    if (*plVar5 == 0xcc) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 0x84;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
                    /* WARNING: Could not recover jumptable at 0x0098c320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(plVar5[2] + 0x20))();
    return;
  }
  if (uVar4 != 0xffffffffffffffff) {
    uVar7 = param_1[3];
    if (uVar7 == 0) {
      lVar8 = 0;
      uVar4 = 0;
      lVar6 = 0;
    }
    else {
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
                    /* try { // try from 0098c2a0 to 0098c2a3 has its CatchHandler @ 0098c32c */
    FUN_009976d8(uVar7 + lVar6 * 0x10,uVar4 - lVar6);
                    /* try { // try from 0098c2a4 to 0098c2af has its CatchHandler @ 0098c324 */
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
      <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(param_1 + 4)
      ;
      return;
    }
  }
  return;
}


// ===== 0098c388  FUN_0098c388 =====

ulong FUN_0098c388(long *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  close((int)param_1[3]);
  uVar3 = close((int)param_1[5]);
  plVar5 = (long *)param_1[4];
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
    uVar4 = <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow(param_1 + 4);
    return uVar4;
  }
  return (ulong)uVar3;
}


// ===== 0098c3f8  FUN_0098c3f8 =====

void FUN_0098c3f8(long *param_1)

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


// ===== 0098c444  FUN_0098c444 =====

void FUN_0098c444(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0098c454 to 0098c457 has its CatchHandler @ 0098c4e8 */
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
                    /* try { // try from 0098c480 to 0098c4a7 has its CatchHandler @ 0098c4e0 */
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


// ===== 0098c524  <tokio::fs::file::tokio::fs::file::File>::try_into_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::tokio::fs::file::File>::try_into_std */

void __rustcall
<tokio::fs::file::tokio::fs::file::File>::try_into_std(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  plVar5 = (long *)*param_2;
  do {
    if (*plVar5 != 1) {
      ClearExclusiveLocal();
      uVar8 = param_2[9];
      uVar7 = param_2[8];
      uVar10 = param_2[0xb];
      uVar9 = param_2[10];
      param_1[0xc] = param_2[0xc];
      param_1[9] = uVar8;
      param_1[8] = uVar7;
      param_1[0xb] = uVar10;
      param_1[10] = uVar9;
      uVar7 = *param_2;
      uVar9 = param_2[3];
      uVar8 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[3] = uVar9;
      param_1[2] = uVar8;
      uVar7 = param_2[4];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar7;
      param_1[7] = uVar9;
      param_1[6] = uVar8;
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,1);
  lVar4 = plVar5[2];
  if (plVar5 != (long *)0xffffffffffffffff) {
    plVar1 = plVar5 + 1;
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
      free(plVar5);
    }
  }
  lVar6 = param_2[6];
  *(int *)(param_1 + 1) = (int)lVar4;
  *param_1 = 0;
  if (lVar6 == -2) {
    plVar5 = (long *)param_2[7];
    if (*plVar5 == 0xcc) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 0x84;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
                    /* WARNING: Could not recover jumptable at 0x0098c648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(plVar5[2] + 0x20))();
    return;
  }
  if ((lVar6 != -1) && (lVar6 != 0)) {
    free((void *)param_2[7]);
    return;
  }
  return;
}


// ===== 0098c64c  <tokio::fs::file::tokio::fs::file::File>::from_std =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::tokio::fs::file::File>::from_std */

void __rustcall
<tokio::fs::file::tokio::fs::file::File>::from_std(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 2) = param_2;
    param_1[7] = 1;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
    param_1[9] = 0;
    param_1[10] = 0;
    puVar3[1] = 1;
    *puVar3 = 1;
    uVar2 = _UNK_0029fde8;
    uVar1 = _DAT_0029fde0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = puVar3;
    param_1[1] = 0;
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    param_1[0xc] = 0x200000;
    return;
  }
                    /* try { // try from 0098c6c0 to 0098c6cb has its CatchHandler @ 0098c6d0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 0098c6e4  <tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::next_chunk =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::next_chunk */

ulong __rustcall
<tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::next_chunk(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uStack_e4;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  int local_b0;
  undefined4 uStack_ac;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  
  lVar10 = 0x20;
  do {
    <std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next(&local_a0,param_2);
    uVar7 = uStack_90;
    uVar5 = local_a0;
    if (local_a0 != 1) break;
    if (uStack_98 == 0) {
      uVar8 = param_1[3];
      uVar9 = *param_1;
      if (uVar8 == uVar9) {
                    /* try { // try from 0098c874 to 0098c87b has its CatchHandler @ 0098c8dc */
        <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<core::result::Result<tokio::fs::read_dir::DirEntry,{backref_26}::io::error::Error>>>
        ::grow(param_1);
        uVar8 = param_1[3];
        uVar9 = *param_1;
      }
      param_1[3] = uVar8 + 1;
      uVar1 = 0;
      if (uVar9 <= param_1[2] + uVar8) {
        uVar1 = uVar9;
      }
      puVar3 = (undefined8 *)(param_1[1] + ((param_1[2] + uVar8) - uVar1) * 0x10);
      puVar3[1] = uVar7;
      *puVar3 = CONCAT44(uStack_e4,2);
      break;
    }
    local_d8 = uStack_98;
    uStack_d0 = uStack_90;
    uStack_c0 = uStack_80;
    local_c8 = local_88;
    local_b8 = local_78;
                    /* try { // try from 0098c79c to 0098c7df has its CatchHandler @ 0098c904 */
    <std::fs::[A]::std::fs::DirEntry>::file_type(&local_b0,&local_d8);
    uStack_e4 = uStack_ac;
    iVar4 = local_b0;
    if (local_b0 == 1) {
      if ((1 < (local_a8 & 3) - 2) && ((local_a8 & 3) != 0)) {
        uStack_98 = local_a8 - 1;
        local_a0 = CONCAT71(local_a0._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_98);
      }
    }
    local_88 = uStack_d0;
    uStack_90 = local_d8;
    local_78 = uStack_c0;
    uStack_80 = local_c8;
    local_70 = local_b8;
    uStack_98 = 1;
    local_a0 = 1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar6 = (ulong *)FUN_004b25a4(0x38,8);
    if (puVar6 == (ulong *)0x0) {
                    /* try { // try from 0098c8cc to 0098c8d7 has its CatchHandler @ 0098c918 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x38);
    }
    uVar8 = param_1[3];
    puVar6[6] = local_70;
    uVar7 = *param_1;
    puVar6[1] = uStack_98;
    *puVar6 = local_a0;
    puVar6[3] = local_88;
    puVar6[2] = uStack_90;
    puVar6[5] = local_78;
    puVar6[4] = uStack_80;
    if (uVar8 == uVar7) {
                    /* try { // try from 0098c844 to 0098c84b has its CatchHandler @ 0098c8f0 */
      <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<core::result::Result<tokio::fs::read_dir::DirEntry,{backref_26}::io::error::Error>>>
      ::grow(param_1);
      uVar8 = param_1[3];
      uVar7 = *param_1;
    }
    param_1[3] = uVar8 + 1;
    uVar9 = 0;
    if (uVar7 <= param_1[2] + uVar8) {
      uVar9 = uVar7;
    }
    lVar10 = lVar10 + -1;
    puVar2 = (ulong *)(param_1[1] + ((param_1[2] + uVar8) - uVar9) * 0x10);
    puVar2[1] = (ulong)puVar6;
    *puVar2 = CONCAT44(uStack_e4,iVar4) ^ 1;
  } while (lVar10 != 0);
  return uVar5 & 0xffffffff;
}


// ===== 0098c930  <tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::poll_next_entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::poll_next_entry */

void __rustcall
<tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::poll_next_entry
          (int *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  byte bStack_70;
  undefined7 uStack_6f;
  ulong local_68;
  
  uVar6 = *param_2;
  do {
    if (uVar6 != 0xfffffffffffffffe) {
      if (uVar6 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4150);
      }
      if (param_2[3] != 0) {
        uVar1 = param_2[2] + 1;
        piVar5 = (int *)(param_2[1] + param_2[2] * 0x10);
        uVar2 = 0;
        if (uVar6 <= uVar1) {
          uVar2 = uVar6;
        }
        param_2[2] = uVar1 - uVar2;
        param_2[3] = param_2[3] - 1;
        iVar4 = *piVar5;
        if (iVar4 != -1) {
          uVar3 = *(undefined8 *)(piVar5 + 2);
          if (iVar4 == 2) {
            iVar4 = -1;
          }
          else {
            piVar5 = (int *)(ulong)(uint)piVar5[1];
          }
          *param_1 = iVar4;
          param_1[1] = (int)piVar5;
          *(undefined8 *)(param_1 + 2) = uVar3;
          return;
        }
      }
      if ((char)param_2[6] != '\x01') {
        iVar4 = 2;
        goto LAB_0098caa0;
      }
      local_80 = param_2[3];
      local_78 = param_2[4];
      uStack_88 = param_2[2];
      local_90 = param_2[1];
      *param_2 = 0xffffffffffffffff;
      bStack_70 = (byte)param_2[5] & 1;
      local_98 = uVar6;
      uVar6 = FUN_009a0ad8(&local_98,&PTR_s__root__cargo_registry_src_index__00af4168);
                    /* try { // try from 0098ca00 to 0098ca07 has its CatchHandler @ 0098cae0 */
      FUN_0098c210(param_2);
      *param_2 = 0xfffffffffffffffe;
      param_2[1] = uVar6;
    }
    FUN_009ac828(&local_98,param_2 + 1,param_3);
    uVar6 = local_98;
    if (local_98 == 0xfffffffffffffffe) {
      iVar4 = -2;
LAB_0098caa0:
      *param_1 = iVar4;
      return;
    }
    if (local_98 == 0xffffffffffffffff) {
      uVar3 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
              ::from(&local_90);
      *(undefined8 *)(param_1 + 2) = uVar3;
      *param_1 = -1;
      return;
    }
                    /* try { // try from 0098ca30 to 0098ca37 has its CatchHandler @ 0098caec */
    FUN_0098c210(param_2);
    *param_2 = uVar6;
    param_2[3] = local_80;
    param_2[2] = uStack_88;
    param_2[1] = local_90;
    param_2[5] = CONCAT71(uStack_6f,bStack_70);
    param_2[4] = local_78;
    param_2[6] = local_68;
  } while( true );
}


// ===== 0098cb14  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::local_addr */

void __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::local_addr(undefined2 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int extraout_w11;
  undefined2 uVar3;
  long local_c0;
  ushort local_b8;
  ushort uStack_b6;
  int iStack_b4;
  ushort local_b0;
  ushort local_ae;
  undefined8 local_ac;
  undefined4 local_a4;
  uint uStack_a0;
  undefined8 local_30;
  undefined4 local_28;
  
  <socket2::socket::socket2::socket::Socket>::local_addr(&local_c0);
  if (local_c0 == 1) {
    *param_1 = 2;
    *(ulong *)(param_1 + 4) = CONCAT44(iStack_b4,CONCAT22(uStack_b6,local_b8));
    return;
  }
  if (local_b8 == 10) {
    uStack_b6 = uStack_b6 >> 8 | (ushort)((uStack_b6 & 0xff00ff) << 8);
    iVar2 = (uint)local_b0 << 0x10;
    local_30 = local_ac;
    uVar3 = 1;
    local_28 = local_a4;
  }
  else {
    if (local_b8 != 2) {
      uVar1 = <alloc::io::error::core::io::error::Error>::new<&str>
                        (0x14,"invalid address family (not IPv4 or IPv6)",0x29);
      *(undefined8 *)(param_1 + 4) = uVar1;
      *param_1 = 2;
      return;
    }
    uVar3 = 0;
    local_ae = uStack_b6 >> 8 | (ushort)((uStack_b6 & 0xff00ff) << 8);
    uStack_a0 = (uint)local_b8;
    iVar2 = iStack_b4;
    iStack_b4 = extraout_w11;
  }
  *(int *)(param_1 + 1) = iVar2;
  param_1[3] = local_ae;
  *param_1 = uVar3;
  *(undefined8 *)(param_1 + 4) = local_30;
  *(undefined4 *)(param_1 + 8) = local_28;
  *(int *)(param_1 + 10) = iStack_b4;
  *(uint *)(param_1 + 0xc) = uStack_a0;
  param_1[0xe] = uStack_b6;
  return;
}


// ===== 0098cc10  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_linger =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_linger */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_linger(void)

{
  (*(code *)PTR_set_linger_00b04f28)();
  return;
}


// ===== 0098cc14  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::take_error */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::take_error(void)

{
  (*(code *)PTR_take_error_00b04f30)();
  return;
}


// ===== 0098cc18  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::bind_device =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::bind_device */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::bind_device(void)

{
  (*(code *)PTR_bind_device_00b04728)();
  return;
}


// ===== 0098cc1c  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_nodelay =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_nodelay */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_nodelay(void)

{
  (*(code *)PTR_set_nodelay_00b04f38)();
  return;
}


// ===== 0098cc20  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_keepalive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_keepalive */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_keepalive(void)

{
  (*(code *)PTR_set_keepalive_00b04f40)();
  return;
}


// ===== 0098cc24  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_reuseaddr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_reuseaddr */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_reuseaddr(void)

{
  (*(code *)PTR_set_reuse_address_00b04f48)();
  return;
}


// ===== 0098cc28  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_reuseport =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_reuseport */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_reuseport(void)

{
  (*(code *)PTR_set_reuse_port_00b04f50)();
  return;
}


// ===== 0098cc2c  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::from_std_stream =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::from_std_stream */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::from_std_stream(void)

{
  (*(code *)PTR_from_raw_fd_00b04e18)();
  return;
}


// ===== 0098cc30  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::recv_buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::recv_buffer_size */

void __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::recv_buffer_size(undefined4 *param_1)

{
  long extraout_x0;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  
  <socket2::socket::socket2::socket::Socket>::recv_buffer_size();
  if (extraout_x0 == 1) {
    *(ulong *)(param_1 + 2) = CONCAT44(extraout_var,extraout_w1);
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = extraout_w1;
  return;
}


// ===== 0098cc74  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::send_buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::send_buffer_size */

void __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::send_buffer_size(undefined4 *param_1)

{
  long extraout_x0;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  
  <socket2::socket::socket2::socket::Socket>::send_buffer_size();
  if (extraout_x0 == 1) {
    *(ulong *)(param_1 + 2) = CONCAT44(extraout_var,extraout_w1);
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = extraout_w1;
  return;
}


// ===== 0098ccb8  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_recv_buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_recv_buffer_size */

void __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_recv_buffer_size
          (undefined8 param_1,undefined4 param_2)

{
  <socket2::socket::socket2::socket::Socket>::set_recv_buffer_size(param_1,param_2);
  return;
}


// ===== 0098ccc0  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_send_buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_send_buffer_size */

void __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_send_buffer_size
          (undefined8 param_1,undefined4 param_2)

{
  <socket2::socket::socket2::socket::Socket>::set_send_buffer_size(param_1,param_2);
  return;
}


// ===== 0098ccc8  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::tos =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::tos */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::tos(void)

{
  (*(code *)PTR_tos_00b04f78)();
  return;
}


// ===== 0098cccc  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::bind =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::bind */

void __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::bind
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [136];
  
  <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>
  ::from(auStack_a8,param_2);
  <socket2::socket::socket2::socket::Socket>::bind(param_1,auStack_a8);
  return;
}


// ===== 0098cd08  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::device =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::device */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::device(void)

{
  (*(code *)PTR_device_00b04f80)();
  return;
}


// ===== 0098cd0c  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::linger =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::linger */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::linger(void)

{
  (*(code *)PTR_linger_00b04f88)();
  return;
}


// ===== 0098cd10  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::listen =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::listen */

ulong __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::listen
          (undefined8 *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int local_24;
  
                    /* try { // try from 0098cd2c to 0098cd33 has its CatchHandler @ 0098cd78 */
  local_24 = param_2;
  lVar2 = <socket2::socket::socket2::socket::Socket>::listen(&local_24);
  if (lVar2 != 0) {
    *param_1 = 2;
    param_1[1] = lVar2;
    uVar1 = close(param_2);
    return (ulong)uVar1;
  }
  <mio::net::udp::UdpSocket_as_std::os::fd::raw::FromRawFd>::from_raw_fd(param_2);
  uVar3 = FUN_00984b18(param_1);
  return uVar3;
}


// ===== 0098cd8c  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::new_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::new_v4 */

void __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::new_v4(undefined4 *param_1)

{
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  <socket2::socket::socket2::socket::Socket>::new(&local_30,2,0x801,1,6);
  if (local_30 == 1) {
    *(undefined8 *)(param_1 + 2) = local_28;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_2c;
  return;
}


// ===== 0098cdfc  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::new_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::new_v6 */

void __rustcall
<tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::new_v6(undefined4 *param_1)

{
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  <socket2::socket::socket2::socket::Socket>::new(&local_30,10,0x801,1,6);
  if (local_30 == 1) {
    *(undefined8 *)(param_1 + 2) = local_28;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_2c;
  return;
}


// ===== 0098ce6c  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::nodelay =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::nodelay */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::nodelay(void)

{
  (*(code *)PTR_nodelay_00b04fa0)();
  return;
}


// ===== 0098ce70  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_tos =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_tos */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::set_tos(void)

{
  (*(code *)PTR_set_tos_00b04fa8)();
  return;
}


// ===== 0098ce74  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::keepalive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::keepalive */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::keepalive(void)

{
  (*(code *)PTR_keepalive_00b04fb0)();
  return;
}


// ===== 0098ce78  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::reuseaddr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::reuseaddr */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::reuseaddr(void)

{
  (*(code *)PTR_reuse_address_00b04fb8)();
  return;
}


// ===== 0098ce7c  <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::reuseport =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::reuseport */

void __rustcall <tokio::net::tcp::socket::tokio::net::tcp::socket::TcpSocket>::reuseport(void)

{
  (*(code *)PTR_reuse_port_00b04fc0)();
  return;
}


// ===== 0098ce80  <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::new_stream =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::new_stream */

void __rustcall
<tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::new_stream(undefined4 *param_1)

{
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  <socket2::socket::socket2::socket::Socket>::new(&local_30,1,0x801,0);
  if (local_30 == 1) {
    *(undefined8 *)(param_1 + 2) = local_28;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_2c;
  return;
}


// ===== 0098ceec  <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::new_datagram =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::new_datagram */

void __rustcall
<tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::new_datagram(undefined4 *param_1)

{
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  <socket2::socket::socket2::socket::Socket>::new(&local_30,1,0x802,0);
  if (local_30 == 1) {
    *(undefined8 *)(param_1 + 2) = local_28;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_2c;
  return;
}


// ===== 0098cf58  <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::ty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::ty */

undefined4 __rustcall <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::ty(void)

{
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_8;
  
  <socket2::socket::socket2::socket::Socket>::type(&local_30);
  if (local_30 != 1) {
    return local_2c;
  }
  local_8 = local_28;
                    /* try { // try from 0098cf98 to 0098cfbb has its CatchHandler @ 0098cfc0 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("called `Result::unwrap()` on an `Err` value",0x2b,&local_8,&PTR_FUN_00af4110,
             &PTR_s__root__cargo_registry_src_index__00af4180);
}


// ===== 0098cfd8  <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::listen =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::listen */

ulong __rustcall
<tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::listen
          (undefined8 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_18;
  
                    /* try { // try from 0098cffc to 0098d043 has its CatchHandler @ 0098d0c0 */
  local_44 = param_2;
  <socket2::socket::socket2::socket::Socket>::type(&local_40,&local_44);
  if (local_40 == 1) {
    local_18 = local_38;
                    /* try { // try from 0098d098 to 0098d0bb has its CatchHandler @ 0098d0d4 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_18,&PTR_FUN_00af4110,
               &PTR_s__root__cargo_registry_src_index__00af4180);
  }
  if (local_3c == 2) {
    lVar2 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x2a,"listen cannot be called on a datagram socket",0x2c);
  }
  else {
    lVar2 = <socket2::socket::socket2::socket::Socket>::listen(&local_44,param_3);
    if (lVar2 == 0) {
      <mio::net::uds::listener::UnixListener_as_std::os::fd::raw::FromRawFd>::from_raw_fd(param_2);
      uVar3 = FUN_00985118(param_1);
      return uVar3;
    }
  }
  *param_1 = 2;
  param_1[1] = lVar2;
  uVar1 = close(param_2);
  return (ulong)uVar1;
}


// ===== 0098d0f4  <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::datagram =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::datagram */

ulong __rustcall
<tokio::net::unix::socket::tokio::net::unix::socket::UnixSocket>::datagram
          (undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  
                    /* try { // try from 0098d110 to 0098d147 has its CatchHandler @ 0098d1b8 */
  local_3c = param_2;
  <socket2::socket::socket2::socket::Socket>::type(&local_38,&local_3c);
  if (local_38 == 1) {
    local_28 = local_30;
                    /* try { // try from 0098d190 to 0098d1b3 has its CatchHandler @ 0098d1cc */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_00af4110,
               &PTR_s__root__cargo_registry_src_index__00af4180);
  }
  if (local_34 == 1) {
    uVar2 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x2a,"datagram cannot be called on a stream socket",0x2c);
    *param_1 = 2;
    param_1[1] = uVar2;
    uVar1 = close(param_2);
    return (ulong)uVar1;
  }
  <mio::net::uds::datagram::UnixDatagram_as_std::os::fd::raw::FromRawFd>::from_raw_fd(param_2);
  uVar3 = FUN_009c1e80(param_1);
  return uVar3;
}


// ===== 0098d1ec  <tokio::io::blocking::[0]::tokio::io::blocking::Buf>::copy_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::blocking::[0]::tokio::io::blocking::Buf>::copy_to */

size_t __rustcall
<tokio::io::blocking::[0]::tokio::io::blocking::Buf>::copy_to(long param_1,long *param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  __n = uVar3 - uVar5;
  if (uVar2 - uVar4 <= uVar3 - uVar5) {
    __n = uVar2 - uVar4;
  }
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar4,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00af4198);
  }
  uVar1 = __n + uVar5;
  if (uVar5 <= uVar1 && uVar1 <= uVar3) {
    memcpy((void *)(*param_2 + uVar5),(void *)(*(long *)(param_1 + 8) + uVar4),__n);
    if ((ulong)param_2[3] < uVar1) {
      param_2[3] = uVar1;
    }
    param_2[2] = uVar1;
    *(size_t *)(param_1 + 0x18) = __n + uVar4;
    if (__n + uVar4 == uVar2) {
      *(ulong *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    return __n;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar5,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00af41b0);
}


// ===== 0098d2c4  <tokio::io::blocking::[0]::tokio::io::blocking::Buf>::copy_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::blocking::[0]::tokio::io::blocking::Buf>::copy_from */

ulong __rustcall
<tokio::io::blocking::[0]::tokio::io::blocking::Buf>::copy_from
          (long *param_1,void *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[3]) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: self.is_empty()",0x21,
               &PTR_s__root__cargo_registry_src_index__00af41c8);
  }
  if (param_3 <= param_4) {
    param_4 = param_3;
  }
  if ((ulong)(*param_1 - lVar1) < param_4) {
    FUN_009bd2b4(param_1,lVar1,param_4,1,1);
    lVar1 = param_1[2];
  }
  else if (param_4 == 0) goto LAB_0098d310;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_4);
LAB_0098d310:
  param_1[2] = lVar1 + param_4;
  return param_4;
}


// ===== 0098d36c  <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::local_addr */

void __rustcall
<tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::local_addr
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
  
  if (*(int *)(*param_2 + 0x28) == -1) {
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


// ===== 0098d420  <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::try_read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::try_read_vectored
    */

void __rustcall
<tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::
try_read_vectored(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6e9c(local_28,1,&local_28);
  return;
}


// ===== 0098d454  <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::reunite =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::reunite */

void __rustcall
<tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::reunite
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_0098da64(param_1,param_2,param_3,param_4);
  return;
}


// ===== 0098d468  <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::try_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::try_read */

void __rustcall
<tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::try_read
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a726c(local_28,1,&local_28);
  return;
}


// ===== 0098d49c  <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::peer_addr */

void __rustcall
<tokio::net::unix::split_owned::[0]::tokio::net::unix::split_owned::OwnedReadHalf>::peer_addr
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
  
  if (*(int *)(*param_2 + 0x28) == -1) {
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


// ===== 0098d550  <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::local_addr
    */

void __rustcall
<tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::local_addr
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
  
  if (*(int *)(*param_2 + 0x28) == -1) {
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


// ===== 0098d604  <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::try_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::try_write_vectored
    */

void __rustcall
<tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::
try_write_vectored(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7084(local_28,2,&local_28);
  return;
}


// ===== 0098d638  <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::forget =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::forget */

void __rustcall
<tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::forget
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::net::unix::stream::UnixStream>>::drop_slow(&local_20)
    ;
  }
  return;
}


// ===== 0098d678  <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::reunite =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::reunite */

void __rustcall
<tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::reunite
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_0098da64(param_1,param_4,param_2,param_3);
  return;
}


// ===== 0098d690  <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::peer_addr */

void __rustcall
<tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::peer_addr
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
  
  if (*(int *)(*param_2 + 0x28) == -1) {
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


// ===== 0098d744  <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::try_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::try_write */

void __rustcall
<tokio::net::unix::split_owned::[2]::tokio::net::unix::split_owned::OwnedWriteHalf>::try_write
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7454(local_28,2,&local_28);
  return;
}


// ===== 0098d778  <tokio::io::blocking::[5]::tokio::io::blocking::Buf>::discard_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::blocking::[5]::tokio::io::blocking::Buf>::discard_read */

long __rustcall <tokio::io::blocking::[5]::tokio::io::blocking::Buf>::discard_read(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
    *(ulong *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return uVar2 - uVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00af4198);
}


// ===== 0098d7ac  FUN_0098d7ac =====

undefined1  [16] FUN_0098d7ac(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined1 auVar10 [16];
  long local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  long local_98;
  ulong local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  ulong local_60;
  undefined8 uStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long local_38;
  
  bVar1 = *(byte *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = 0xff;
  if ((ulong)bVar1 != 0xff) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)bVar1 << 0x20 | 3;
    return auVar4 << 0x40;
  }
  if (*param_1 != -2) {
    uVar9 = 0;
    goto LAB_0098d83c;
  }
  FUN_009aca00(&local_98,param_1 + 1);
  if (local_98 == -2) {
    auVar10._8_8_ = extraout_x1;
    auVar10._0_8_ = 1;
    return auVar10;
  }
  if (local_98 == -1) {
    uVar9 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
            ::from(&local_90);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar9;
    return auVar7 << 0x40;
  }
  plVar8 = (long *)param_1[1];
  local_b0 = local_98;
  uStack_58 = uStack_88;
  local_60 = local_90;
  local_50 = local_80;
  lStack_40 = lStack_70;
  lStack_48 = local_78;
  local_38 = local_68;
  uStack_a0 = uStack_88;
  local_a8 = local_90;
  if (*plVar8 == 0xcc) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = 0x84;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_0098d910;
  }
  else {
    ClearExclusiveLocal();
LAB_0098d910:
                    /* try { // try from 0098d918 to 0098d91b has its CatchHandler @ 0098d920 */
    (**(code **)(plVar8[2] + 0x20))();
  }
  uVar9 = local_a8;
  if (local_98 != 1) {
    uVar9 = 0;
  }
  param_1[1] = lStack_48;
  *param_1 = local_50;
  param_1[3] = local_38;
  param_1[2] = lStack_40;
  if (local_98 != 1) {
    FUN_0098c160(&local_b0);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar9;
    return auVar6 << 0x40;
  }
LAB_0098d83c:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9;
  return auVar5 << 0x40;
}


// ===== 0098d940  <tokio::fs::file::[7]::tokio::fs::file::Inner>::poll_complete_inflight =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::[7]::tokio::fs::file::Inner>::poll_complete_inflight */

uint __rustcall <tokio::fs::file::[7]::tokio::fs::file::Inner>::poll_complete_inflight(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long local_38;
  
  auVar5 = FUN_0098d7ac();
  uVar3 = auVar5._8_8_;
  uVar4 = auVar5._0_4_;
  if (((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (uVar3 != 0)) {
    if (1 < (uVar3 & 3)) {
      if ((uVar3 & 3) == 2) {
                    /* try { // try from 0098d9a8 to 0098d9bb has its CatchHandler @ 0098da34 */
        lVar2 = core::io::error::os_functions::get_os_functions();
        uVar1 = (**(code **)(lVar2 + 8))(uVar3 >> 0x20);
        *(undefined1 *)(param_1 + 0x28) = uVar1;
        return uVar4 & 1;
      }
      *(char *)(param_1 + 0x28) = auVar5[0xc];
      return uVar4 & 1;
    }
    if ((auVar5 & (undefined1  [16])0x3) != (undefined1  [16])0x0) {
      local_38 = uVar3 - 1;
      *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(uVar3 + 0x1f);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      return uVar4 & 1;
    }
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(uVar3 + 0x10);
  }
  return uVar4 & 1;
}


// ===== 0098da4c  <tokio::fs::read_dir::tokio::fs::read_dir::DirEntry>::path =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::read_dir::tokio::fs::read_dir::DirEntry>::path */

void __rustcall <tokio::fs::read_dir::tokio::fs::read_dir::DirEntry>::path(long param_1)

{
  <std::fs::[A]::std::fs::DirEntry>::path(*(long *)(param_1 + 8) + 0x10);
  return;
}


// ===== 0098da58  <tokio::fs::read_dir::tokio::fs::read_dir::DirEntry>::file_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::read_dir::tokio::fs::read_dir::DirEntry>::file_name */

void __rustcall <tokio::fs::read_dir::tokio::fs::read_dir::DirEntry>::file_name(long param_1)

{
  <std::fs::[A]::std::fs::DirEntry>::file_name(*(long *)(param_1 + 8) + 0x10);
  return;
}


// ===== 0098da64  FUN_0098da64 =====

void FUN_0098da64(long *param_1,long *param_2,long *param_3,undefined1 param_4)

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
                    /* try { // try from 0098dac8 to 0098dad7 has its CatchHandler @ 0098db9c */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::net::unix::stream::UnixStream>>::drop_slow(&local_40)
    ;
  }
  do {
    if (*param_2 != 1) {
      ClearExclusiveLocal();
      plVar5 = param_2;
      goto LAB_0098db68;
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
LAB_0098db68:
                    /* try { // try from 0098db6c to 0098db8f has its CatchHandler @ 0098dbcc */
  local_18 = plVar5;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("UnixStream: try_unwrap failed in reunite",0x28,&local_18,&PTR_FUN_00af4130,
             &PTR_s__root__cargo_registry_src_index__00af41e0);
}


// ===== 0098dc00  tokio::runtime::task::id::id =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::task::id::id */

void __rustcall tokio::runtime::task::id::id(undefined8 param_1)

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
  if (puVar1 <= &DAT_00000001) {
    puVar1 = (undefined1 *)FUN_00996984(uVar2 & 0xffffffff,puVar1,0);
  }
  if ((puVar1 != (undefined1 *)0x0) && (*(long *)(puVar1 + 0x30) != 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("Can\'t get a task id when not inside a tasktried to reunite halves that are not from the same socket"
             ,0x2a,param_1);
}


// ===== 0098dc94  tokio::runtime::task::id::try_id =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::task::id::try_id */

undefined8 __rustcall tokio::runtime::task::id::try_id(void)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar2 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar1 = pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    pvVar1 = pthread_getspecific((pthread_key_t)uVar2);
  }
  if (pvVar1 < (void *)0x2) {
    pvVar1 = (void *)FUN_00996984(uVar2 & 0xffffffff,pvVar1,0);
  }
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  return *(undefined8 *)((long)pvVar1 + 0x30);
}


// ===== 0098dd1c  FUN_0098dd1c =====

undefined8 FUN_0098dd1c(ulong *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  size_t sVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong local_60;
  ulong uStack_58;
  
  uVar11 = *param_1;
  if (uVar11 != 0xfffffffffffffffe) {
    uVar7 = param_3[1];
    uVar5 = param_3[2];
    *param_1 = 0xffffffffffffffff;
    sVar10 = uVar7 - uVar5;
    local_78 = sVar10;
    if (0x1fffff < sVar10) {
      local_78 = 0x200000;
    }
    if (uVar11 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af41f8);
    }
    uVar8 = param_1[2];
    uVar1 = param_1[3];
    local_98 = param_1[1];
    uVar6 = uVar8 - uVar1;
    if (uVar6 != 0) {
      if (uVar6 <= sVar10) {
        sVar10 = uVar6;
      }
      if (uVar8 < uVar1) {
        ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af4198;
        uVar5 = uVar1;
        uVar7 = uVar8;
        uVar6 = uVar8;
      }
      else {
        uVar6 = sVar10 + uVar5;
        ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af41b0;
        if ((uVar5 <= uVar6) && (uVar6 <= uVar7)) {
          memcpy((void *)(*param_3 + uVar5),(void *)(local_98 + uVar1),sVar10);
          if ((ulong)param_3[3] < uVar6) {
            param_3[3] = uVar6;
          }
          uVar1 = sVar10 + uVar1;
          param_3[2] = uVar6;
          uVar7 = 0;
          if (uVar1 != uVar8) {
            uVar7 = uVar8;
          }
          uVar5 = 0;
          if (uVar1 != uVar8) {
            uVar5 = uVar1;
          }
          *param_1 = uVar11;
          param_1[2] = uVar7;
          param_1[3] = uVar5;
          return 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail(uVar5,uVar6,uVar7,ppuVar9);
    }
    local_80 = param_1[4];
    param_1[4] = 0;
    if (local_80 == 0) {
                    /* try { // try from 0098dfa0 to 0098dfc7 has its CatchHandler @ 0098e098 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4210);
    }
    local_a0 = uVar11;
    local_90 = uVar8;
    uStack_88 = uVar8;
    uVar11 = FUN_009a0fcc(&local_a0,&PTR_s__root__cargo_registry_src_index__00af4228);
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = uVar11;
  }
  FUN_009ac650(&local_a0,param_1 + 1,param_2);
  uVar11 = local_78;
  uVar1 = local_80;
  uVar5 = uStack_88;
  uVar7 = local_90;
  if (local_a0 == 0xffffffffffffffff) {
    return 1;
  }
  if (local_a0 == 2) {
    local_68 = local_98;
    uStack_58 = uStack_88;
    local_60 = local_90;
    <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
    ::from(&local_68);
    return 0;
  }
  param_1[4] = uStack_70;
  if (local_a0 != 1) {
    uVar8 = param_3[1];
    uVar6 = param_3[2];
    sVar10 = uVar8 - uVar6;
    if (local_80 - local_78 <= uVar8 - uVar6) {
      sVar10 = local_80 - local_78;
    }
    if (local_80 < local_78) {
      ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af4198;
      uVar6 = local_78;
      uVar8 = local_80;
      uVar12 = local_80;
LAB_0098e000:
                    /* try { // try from 0098e000 to 0098e007 has its CatchHandler @ 0098e078 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail(uVar6,uVar12,uVar8,ppuVar9);
    }
    uVar12 = sVar10 + uVar6;
    ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af41b0;
    if ((uVar12 < uVar6) || (uVar8 < uVar12)) goto LAB_0098e000;
    memcpy((void *)(*param_3 + uVar6),(void *)(uStack_88 + local_78),sVar10);
    if ((ulong)param_3[3] < uVar12) {
      param_3[3] = uVar12;
    }
    plVar4 = (long *)param_1[1];
    param_3[2] = uVar12;
    uVar11 = sVar10 + uVar11;
    uVar8 = 0;
    if (uVar11 != uVar1) {
      uVar8 = uVar1;
    }
    uVar6 = 0;
    if (uVar11 != uVar1) {
      uVar6 = uVar11;
    }
    if (*plVar4 == 0xcc) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 0x84;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_0098df60;
    }
    else {
      ClearExclusiveLocal();
    }
                    /* try { // try from 0098e034 to 0098e037 has its CatchHandler @ 0098e03c */
    (**(code **)(plVar4[2] + 0x20))();
LAB_0098df60:
    *param_1 = uVar7;
    param_1[1] = uVar5;
    param_1[2] = uVar8;
    param_1[3] = uVar6;
    return 0;
  }
  local_a0 = local_98;
  if (local_80 != local_78) {
                    /* try { // try from 0098dfd4 to 0098dfeb has its CatchHandler @ 0098e058 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: buf.is_empty()",0x20,
               &PTR_s__root__cargo_registry_src_index__00af4240);
  }
  plVar4 = (long *)param_1[1];
  if (*plVar4 == 0xcc) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = 0x84;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0098dec4;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 0098e018 to 0098e023 has its CatchHandler @ 0098e048 */
  (**(code **)(plVar4[2] + 0x20))();
LAB_0098dec4:
  *param_1 = uVar7;
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return 0;
}


// ===== 0098e0bc  <alloc::boxed::Box<[tokio::signal::unix::SignalInfo]>as_tokio::signal::registry::Init>::init =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<[tokio::signal::unix::SignalInfo]> as tokio::signal::registry::Init>::init */

void __rustcall
<alloc::boxed::Box<[tokio::signal::unix::SignalInfo]>as_tokio::signal::registry::Init>::init(void)

{
  undefined1 auStack_38 [24];
  undefined8 local_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_20 = DAT_002a1ab0;
  FUN_009c3c4c(auStack_38,&local_20);
  FUN_009c2f58(auStack_38);
  return;
}


// ===== 0098e0f8  <tokio::net::unix::split_owned::ReuniteError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::ReuniteError as core::fmt::Display>::fmt */

void __rustcall
<tokio::net::unix::split_owned::ReuniteError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0098e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,"tried to reunite halves that are not from the same socket",0x39);
  return;
}


// ===== 0098e114  <tokio::runtime::task::id::Id_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::id::Id as core::fmt::Display>::fmt */

void __rustcall <tokio::runtime::task::id::Id_as_core::fmt::Display>::fmt(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <usize_as_core::fmt::Display>::fmt(&local_18);
  return;
}


// ===== 0098e13c  <tokio::fs::file::File_as_tokio::io::async_seek::AsyncSeek>::start_seek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as tokio::io::async_seek::AsyncSeek>::start_seek */

undefined8 __rustcall
<tokio::fs::file::File_as_tokio::io::async_seek::AsyncSeek>::start_seek
          (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long local_68;
  long lStack_60;
  long local_58;
  undefined8 uStack_50;
  ulong local_48;
  ulong local_40;
  long *plStack_38;
  
  local_58 = param_1[6];
  if (local_58 == -2) {
    uVar5 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x2a,"other file operation is pending, call poll_complete before start_seek",
                       0x45);
    return uVar5;
  }
  param_1[6] = 0xffffffffffffffff;
  if (local_58 == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4258);
  }
  local_48 = param_1[8];
  uVar1 = param_1[9];
  uStack_50 = param_1[7];
  lVar6 = uVar1 - local_48;
  if (lVar6 != 0) {
    if (local_48 <= uVar1 && lVar6 != 0) {
                    /* try { // try from 0098e220 to 0098e233 has its CatchHandler @ 0098e238 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar1,local_48,local_48,&PTR_s__root__cargo_registry_src_index__00af4198);
    }
    local_48 = 0;
    if (param_2 != 2) {
      lVar6 = 0;
    }
    param_3 = lVar6 + param_3;
  }
  plStack_38 = (long *)*param_1;
  do {
    lVar6 = *plStack_38;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plStack_38,0x10);
    if (bVar3) {
      *plStack_38 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar6) {
    local_68 = param_2;
    lStack_60 = param_3;
    local_40 = local_48;
    uVar5 = FUN_009a11f4(&local_68,&PTR_s__root__cargo_registry_src_index__00af4270);
    param_1[6] = 0xfffffffffffffffe;
    param_1[7] = uVar5;
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x98e238);
  (*pcVar4)();
}


// ===== 0098e258  <tokio::fs::file::File_as_tokio::io::async_seek::AsyncSeek>::poll_complete =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as tokio::io::async_seek::AsyncSeek>::poll_complete */

ulong __rustcall
<tokio::fs::file::File_as_tokio::io::async_seek::AsyncSeek>::poll_complete
          (long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long local_128;
  ulong local_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined7 uStack_d7;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  puVar8 = (ulong *)(param_1 + 0x30);
  uVar6 = *puVar8;
  do {
    if (uVar6 != 0xfffffffffffffffe) {
      return 0;
    }
    FUN_009aca00(&local_d8,param_1 + 0x38,param_2);
    lVar5 = CONCAT71(uStack_d7,local_d8);
    if (lVar5 == -2) {
      return 2;
    }
    if (lVar5 == -1) {
      <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
      ::from(&local_d0);
      return 1;
    }
    plVar4 = *(long **)(param_1 + 0x38);
    uStack_80 = uStack_b0;
    local_78 = local_a8;
    uStack_f8 = local_b8;
    local_100 = local_c0;
    uStack_e8 = local_a8;
    uStack_f0 = uStack_b0;
    uStack_108 = uStack_c8;
    local_110 = local_d0;
    uStack_118 = uStack_c8;
    local_120 = local_d0;
    uStack_98 = local_b8;
    local_a0 = local_c0;
    uStack_88 = local_a8;
    local_90 = uStack_b0;
    local_128 = lVar5;
    if (*plVar4 == 0xcc) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 0x84;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 != '\0') goto LAB_0098e3cc;
    }
    else {
      ClearExclusiveLocal();
LAB_0098e3cc:
                    /* try { // try from 0098e3d4 to 0098e3d7 has its CatchHandler @ 0098e44c */
      (**(code **)(plVar4[2] + 0x20))();
    }
    uVar6 = local_120;
    *(undefined8 *)(param_1 + 0x38) = uStack_98;
    *puVar8 = local_a0;
    *(undefined8 *)(param_1 + 0x48) = uStack_88;
    *(undefined8 *)(param_1 + 0x40) = local_90;
    if (lVar5 == 0) {
      FUN_0098c160(&local_128);
    }
    else {
      if (lVar5 != 1) {
        if ((local_120 & 1) != 0) {
          return local_120;
        }
        *(undefined8 *)(param_1 + 0x50) = uStack_118;
        return local_120;
      }
      if (local_120 != 0) {
        local_a0 = local_120;
        if (*(char *)(param_1 + 0x58) != -1) {
                    /* try { // try from 0098e430 to 0098e447 has its CatchHandler @ 0098e498 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: inner.last_write_err.is_none()",0x30,
                     &PTR_s__root__cargo_registry_src_index__00af4288);
        }
        uVar7 = local_120 & 3;
        if (uVar7 < 2) {
          if (uVar7 == 0) {
            uVar3 = *(undefined1 *)(local_120 + 0x10);
LAB_0098e3c0:
            *(undefined1 *)(param_1 + 0x58) = uVar3;
          }
          else {
            local_d0 = local_120 - 1;
            *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(local_120 + 0x1f);
            local_d8 = 3;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_d0);
          }
        }
        else {
          if (uVar7 != 3) {
                    /* try { // try from 0098e3ac to 0098e3bf has its CatchHandler @ 0098e494 */
            lVar5 = core::io::error::os_functions::get_os_functions();
            uVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
            goto LAB_0098e3c0;
          }
          *(char *)(param_1 + 0x58) = (char)(local_120 >> 0x20);
          local_a0 = local_120;
        }
      }
    }
    uVar6 = *puVar8;
  } while( true );
}


// ===== 0098e4b0  <tokio::net::tcp::socket::TcpSocket_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::TcpSocket as std::os::fd::owned::AsFd>::as_fd */

undefined4 __rustcall
<tokio::net::tcp::socket::TcpSocket_as_std::os::fd::owned::AsFd>::as_fd(undefined4 *param_1)

{
  return *param_1;
}


// ===== 0098e4b8  <tokio::fs::file::File_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as tokio::io::async_write::AsyncWrite>::poll_shutdown */

void __rustcall
<tokio::fs::file::File_as_tokio::io::async_write::AsyncWrite>::poll_shutdown(long param_1)

{
  FUN_0098d7ac(param_1 + 0x30);
  return;
}


// ===== 0098e4c0  <tokio::fs::file::File_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::fs::file::File_as_tokio::io::async_write::AsyncWrite>::poll_write
          (undefined8 *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong __n;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long local_128;
  ulong local_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long local_d8;
  ulong local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  ulong uStack_b0;
  long *local_a8;
  long local_a0;
  long lStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  bVar1 = *(byte *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  if ((ulong)bVar1 == 0xff) {
    lVar8 = param_1[6];
    while (lVar8 == -2) {
      FUN_009aca00(&local_d8,param_1 + 7,param_2);
      lVar8 = local_d8;
      if (local_d8 == -2) {
        uVar6 = 2;
        __n = 0xfffffffffffffffe;
        goto LAB_0098e500;
      }
      if (local_d8 == -1) {
        local_120 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
                    ::from(&local_d0);
        goto LAB_0098e4fc;
      }
      plVar7 = (long *)param_1[7];
      local_128 = local_d8;
      uStack_80 = uStack_b0;
      local_78 = local_a8;
      uStack_f8 = local_b8;
      local_100 = local_c0;
      uStack_e8 = local_a8;
      uStack_f0 = uStack_b0;
      uStack_108 = lStack_c8;
      local_110 = local_d0;
      uStack_118 = lStack_c8;
      local_120 = local_d0;
      lStack_98 = local_b8;
      local_a0 = local_c0;
      uStack_88 = (ulong)local_a8;
      local_90 = uStack_b0;
      if (*plVar7 == 0xcc) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = 0x84;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_0098e608;
      }
      else {
        ClearExclusiveLocal();
LAB_0098e608:
                    /* try { // try from 0098e610 to 0098e613 has its CatchHandler @ 0098e764 */
        (**(code **)(plVar7[2] + 0x20))();
      }
      param_1[7] = lStack_98;
      param_1[6] = local_a0;
      param_1[9] = uStack_88;
      param_1[8] = local_90;
      if (lVar8 == 1) {
        if (local_120 != 0) goto LAB_0098e4fc;
      }
      else {
        FUN_0098c160(&local_128);
      }
      lVar8 = param_1[6];
    }
    param_1[6] = 0xffffffffffffffff;
    if (lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af42b8);
    }
    local_90 = param_1[8];
    lStack_98 = param_1[7];
    uStack_88 = param_1[9];
    uVar4 = uStack_88 - local_90;
    local_a0 = lVar8;
    if (uVar4 != 0) {
      if (local_90 <= uStack_88 && uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uStack_88,local_90,local_90,&PTR_s__root__cargo_registry_src_index__00af4198);
      }
      lVar10 = 2;
      local_90 = 0;
      uStack_88 = 0;
    }
    else {
      lVar10 = -1;
    }
    __n = param_1[0xc];
    if (param_4 <= (ulong)param_1[0xc]) {
      __n = param_4;
    }
    if (lVar8 - local_90 < __n) {
                    /* try { // try from 0098e72c to 0098e75f has its CatchHandler @ 0098e794 */
      FUN_009bd2b4(&local_a0,local_90,__n,1,1);
LAB_0098e69c:
      uVar9 = local_90;
      memcpy((void *)(lStack_98 + local_90),param_3,__n);
    }
    else {
      uVar9 = local_90;
      if (__n != 0) goto LAB_0098e69c;
    }
    local_a8 = (long *)*param_1;
    local_b8 = uVar9 + __n;
    do {
      lVar8 = *local_a8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_a8,0x10);
      if (bVar3) {
        *local_a8 = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_90 = local_b8;
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x98e764);
      (*pcVar5)();
    }
    local_c0 = lStack_98;
    lStack_c8 = local_a0;
    uStack_b0 = uStack_88;
    local_d8 = lVar10;
    local_d0 = uVar4;
    lVar8 = FUN_009a2314(&local_d8);
    if (lVar8 != 0) {
      uVar6 = 0;
      param_1[6] = 0xfffffffffffffffe;
      param_1[7] = lVar8;
      goto LAB_0098e500;
    }
    local_120 = <alloc::io::error::core::io::error::Error>::new<&str>
                          (0x2a,
                           "background task failedthe timer is shutdown, must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration"
                           ,0x16);
  }
  else {
    local_120 = (ulong)bVar1 << 0x20 | 3;
  }
LAB_0098e4fc:
  uVar6 = 1;
  __n = local_120;
LAB_0098e500:
  auVar11._8_8_ = __n;
  auVar11._0_8_ = uVar6;
  return auVar11;
}


// ===== 0098e7bc  <tokio::fs::file::File_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as tokio::io::async_write::AsyncWrite>::poll_write_vectored */

undefined8 __rustcall
<tokio::fs::file::File_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong __n;
  void *__src;
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  ulong local_b8;
  ulong uStack_b0;
  long *local_a8;
  long local_a0;
  long lStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  cVar2 = *(char *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  if (cVar2 == -1) {
    lVar8 = param_1[6];
    while (lVar8 == -2) {
      FUN_009aca00(&local_d8,param_1 + 7,param_2);
      lVar8 = local_d8;
      if (local_d8 == -2) {
        return 2;
      }
      if (local_d8 == -1) {
        <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
        ::from(&local_d0);
        return 1;
      }
      plVar7 = (long *)param_1[7];
      local_128 = local_d8;
      uStack_80 = uStack_b0;
      local_78 = local_a8;
      uStack_f8 = local_b8;
      local_100 = local_c0;
      uStack_e8 = local_a8;
      uStack_f0 = uStack_b0;
      uStack_108 = lStack_c8;
      local_110 = local_d0;
      uStack_118 = lStack_c8;
      local_120 = local_d0;
      lStack_98 = local_b8;
      local_a0 = local_c0;
      uStack_88 = (ulong)local_a8;
      local_90 = uStack_b0;
      if (*plVar7 == 0xcc) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = 0x84;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_0098e8fc;
      }
      else {
        ClearExclusiveLocal();
LAB_0098e8fc:
                    /* try { // try from 0098e904 to 0098e907 has its CatchHandler @ 0098eab0 */
        (**(code **)(plVar7[2] + 0x20))();
      }
      param_1[7] = lStack_98;
      param_1[6] = local_a0;
      param_1[9] = uStack_88;
      param_1[8] = local_90;
      if (lVar8 == 1) {
        if (local_120 != 0) {
          return 1;
        }
      }
      else {
        FUN_0098c160(&local_128);
      }
      lVar8 = param_1[6];
    }
    param_1[6] = 0xffffffffffffffff;
    if (lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af42d0);
    }
    local_90 = param_1[8];
    lStack_98 = param_1[7];
    uStack_88 = param_1[9];
    lVar4 = uStack_88 - local_90;
    local_a0 = lVar8;
    if (lVar4 != 0) {
      if (local_90 <= uStack_88 && lVar4 != 0) {
                    /* try { // try from 0098ea98 to 0098eaab has its CatchHandler @ 0098eae8 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uStack_88,local_90,local_90,&PTR_s__root__cargo_registry_src_index__00af4198);
      }
      local_90 = 0;
      uStack_88 = 0;
      local_130 = 2;
      uVar9 = param_1[0xc];
      local_138 = lVar4;
    }
    else {
      local_130 = -1;
      uVar9 = param_1[0xc];
    }
    if (param_4 != 0) {
      param_4 = param_4 << 4;
      puVar10 = (ulong *)(param_3 + 8);
      do {
        if (uVar9 == 0) break;
        __src = (void *)puVar10[-1];
        uVar1 = *puVar10;
        __n = uVar9;
        if (uVar1 <= uVar9) {
          __n = uVar1;
        }
        uVar5 = local_90;
        if (local_a0 - local_90 < __n) {
                    /* try { // try from 0098e9cc to 0098e9e3 has its CatchHandler @ 0098eae0 */
          FUN_009bd2b4(&local_a0,local_90,__n,1,1);
          uVar5 = local_90;
        }
        if (uVar1 != 0) {
          local_90 = uVar5;
          memcpy((void *)(lStack_98 + uVar5),__src,__n);
        }
        local_90 = uVar5 + __n;
        param_4 = param_4 + -0x10;
        puVar10 = puVar10 + 2;
        uVar9 = uVar9 - __n;
      } while (param_4 != 0);
    }
    local_a8 = (long *)*param_1;
    do {
      lVar8 = *local_a8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_a8,0x10);
      if (bVar3) {
        *local_a8 = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x98eab0);
      (*pcVar6)();
    }
    local_c0 = lStack_98;
    lStack_c8 = local_a0;
    uStack_b0 = uStack_88;
    local_b8 = local_90;
    local_d8 = local_130;
    local_d0 = local_138;
    lVar8 = FUN_009a2564(&local_d8);
    if (lVar8 != 0) {
      param_1[6] = 0xfffffffffffffffe;
      param_1[7] = lVar8;
      return 0;
    }
    <alloc::io::error::core::io::error::Error>::new<&str>
              (0x2a,
               "background task failedthe timer is shutdown, must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration"
               ,0x16);
  }
  return 1;
}


// ===== 0098eb10  <&[u8]as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as tokio::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<&[u8]as_tokio::io::async_read::AsyncRead>::poll_read
          (long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  ulong uVar4;
  
  uVar3 = param_3[1];
  uVar2 = param_3[2];
  uVar4 = param_1[1];
  __n = uVar3 - uVar2;
  if (uVar4 <= uVar3 - uVar2) {
    __n = uVar4;
  }
  uVar1 = __n + uVar2;
  if (uVar2 <= uVar1 && uVar1 <= uVar3) {
    __src = (void *)*param_1;
    memcpy((void *)(*param_3 + uVar2),__src,__n);
    if ((ulong)param_3[3] < uVar1) {
      param_3[3] = uVar1;
    }
    param_3[2] = uVar1;
    *param_1 = (long)__src + __n;
    param_1[1] = uVar4 - __n;
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar2,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00af42e8);
}


// ===== 0098ebb8  <&[u8]as_tokio::io::async_buf_read::AsyncBufRead>::consume =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as tokio::io::async_buf_read::AsyncBufRead>::consume */

void __rustcall
<&[u8]as_tokio::io::async_buf_read::AsyncBufRead>::consume(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    *param_1 = *param_1 + param_2;
    param_1[1] = uVar1 - param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (param_2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00af4300);
}


// ===== 0098ebf0  <tokio::time::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::error::Error as core::fmt::Display>::fmt */

void __rustcall
<tokio::time::error::Error_as_core::fmt::Display>::fmt(byte *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  uVar1 = (ulong)(*param_1 - 1) & 0xff;
  uStack_28 = *(undefined8 *)(&DAT_0037be70 + uVar1 * 8);
  local_30 = &DAT_0037be64 + *(int *)(&DAT_0037be64 + uVar1 * 4);
  pcStack_18 = FUN_0099f78c;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
  return;
}


// ===== 0098ec58  <tokio::net::unix::split_owned::OwnedReadHalf_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::OwnedReadHalf as tokio::io::async_read::AsyncRead>::poll_read */

void __rustcall
<tokio::net::unix::split_owned::OwnedReadHalf_as_tokio::io::async_read::AsyncRead>::poll_read
          (long *param_1)

{
  FUN_0099dd34(*param_1 + 0x10);
  return;
}


// ===== 0098ec64  <tokio::net::unix::socket::UnixSocket_as_std::os::fd::raw::FromRawFd>::from_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socket::UnixSocket as std::os::fd::raw::FromRawFd>::from_raw_fd */

void __rustcall
<tokio::net::unix::socket::UnixSocket_as_std::os::fd::raw::FromRawFd>::from_raw_fd(void)

{
  (*(code *)PTR_from_raw_fd_00b04e18)();
  return;
}


// ===== 0098ec68  FUN_0098ec68 =====

void FUN_0098ec68(undefined8 *param_1)

{
  <core::time::Duration_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0098ec70  FUN_0098ec70 =====

void FUN_0098ec70(undefined8 *param_1)

{
  <std::fs::File_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0098ec78  FUN_0098ec78 =====

void FUN_0098ec78(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(byte *)*param_1 - 1) & 0xff;
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_0037bea0 + *(int *)(&DAT_0037bea0 + uVar1 * 4),
             *(undefined8 *)(&DAT_0037be88 + uVar1 * 8));
  return;
}


// ===== 0098ecac  FUN_0098ecac =====

void FUN_0098ecac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"ErrorShutdownAtCapacityInvalid",5,&local_18,&DAT_00af4368);
  return;
}


// ===== 0098ecf0  <tokio::fs::file::File_as_core::convert::From<std::fs::File>>::from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as core::convert::From<std::fs::File>>::from */

void __rustcall
<tokio::fs::file::File_as_core::convert::From<std::fs::File>>::from
          (undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 2) = param_2;
    param_1[7] = 1;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
    param_1[9] = 0;
    param_1[10] = 0;
    puVar3[1] = 1;
    *puVar3 = 1;
    uVar2 = _UNK_0029fde8;
    uVar1 = _DAT_0029fde0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = puVar3;
    param_1[1] = 0;
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    param_1[0xc] = 0x200000;
    return;
  }
                    /* try { // try from 0098ed64 to 0098ed6f has its CatchHandler @ 0098ed74 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 0098ed88  <core::io::cursor::Cursor<&mut[u8]>as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::cursor::Cursor<&mut [u8]> as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<core::io::cursor::Cursor<&mut[u8]>as_tokio::io::async_write::AsyncWrite>::poll_write
          (long *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  __n = uVar2 - uVar1;
  if (param_4 <= uVar2 - uVar1) {
    __n = param_4;
  }
  memcpy((void *)(*param_1 + uVar1),param_3,__n);
  param_1[2] = __n + uVar3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = __n;
  return auVar4 << 0x40;
}


// ===== 0098ede8  <core::io::cursor::Cursor<alloc::boxed::Box<[u8]>>as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::cursor::Cursor<alloc::boxed::Box<[u8]>> as
   tokio::io::async_write::AsyncWrite>::poll_write_vectored */

undefined1  [16] __rustcall
<core::io::cursor::Cursor<alloc::boxed::Box<[u8]>>as_tokio::io::async_write::AsyncWrite>::
poll_write_vectored(long *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  param_4 = param_4 << 4;
  uVar7 = param_1[2];
  uVar6 = 0;
  do {
    if (param_4 == 0) break;
    uVar4 = param_3[1];
    uVar1 = uVar3;
    if (uVar7 <= uVar3) {
      uVar1 = uVar7;
    }
    uVar8 = uVar3 - uVar1;
    __n = uVar8;
    if (uVar4 <= uVar8) {
      __n = uVar4;
    }
    memcpy((void *)(lVar2 + uVar1),(void *)*param_3,__n);
    param_4 = param_4 + -0x10;
    uVar7 = __n + uVar7;
    uVar6 = __n + uVar6;
    param_1[2] = uVar7;
    param_3 = param_3 + 2;
  } while (uVar4 <= uVar8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar6;
  return auVar5 << 0x40;
}


// ===== 0098ee80  FUN_0098ee80 =====

void FUN_0098ee80(int *param_1)

{
  int iVar1;
  int local_48;
  uint local_44;
  ulong local_40;
  int local_38;
  undefined4 local_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  int local_24;
  
  if (*param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("inner has gone away",0x13,&PTR_s__root__cargo_registry_src_index__00af42a0);
  }
  <std::process::[T]::std::process::Child>::try_wait(&local_48);
  if ((local_48 != 1) && ((local_44 & 1) != 0)) {
    return;
  }
  uStack_30 = CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
  if (local_48 != 0) {
    uStack_30 = CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
    if ((1 < (local_40 & 3) - 2) &&
       (uStack_30 = CONCAT44(uStack_30._4_4_,(undefined4)uStack_30), (local_40 & 3) != 0)) {
      uStack_30 = local_40 - 1;
      local_38 = CONCAT31(local_38._1_3_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_30);
    }
  }
  iVar1 = *param_1;
  *param_1 = 2;
  if (iVar1 != 2) {
    local_24 = param_1[5];
    uStack_30._4_4_ = (undefined4)*(undefined8 *)(param_1 + 3);
    uStack_28 = (undefined4)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20);
    local_34 = (undefined4)*(undefined8 *)(param_1 + 1);
    uStack_30._0_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
    local_38 = iVar1;
    FUN_00985800(&DAT_00b0f710,&local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4318);
}


// ===== 0098ef70  <tokio::fs::file::File_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as core::fmt::Debug>::fmt */

void __rustcall
<tokio::fs::file::File_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"tokio::fs::File",0xf);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"std",3,param_1,&PTR_FUN_00af4330);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0098efd4  <core::io::cursor::Cursor<&mut_alloc::vec::Vec<u8>>as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::cursor::Cursor<&mut alloc::vec::Vec<u8>> as
   tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<core::io::cursor::Cursor<&mut_alloc::vec::Vec<u8>>as_tokio::io::async_write::AsyncWrite>::
poll_write(long *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  size_t __n;
  ulong uVar5;
  
  puVar1 = (ulong *)*param_1;
  uVar2 = param_1[1];
  uVar5 = uVar2 + param_4;
  if (CARRY8(uVar2,param_4)) {
    uVar5 = 0xffffffffffffffff;
  }
  if (*puVar1 < uVar5) {
    uVar4 = puVar1[2];
    if (uVar5 - uVar4 <= *puVar1 - uVar4) goto LAB_0098f024;
    FUN_009bd2b4(puVar1,uVar4,uVar5 - uVar4,1,1);
    uVar5 = puVar1[2];
    __n = uVar2 - uVar5;
    if (uVar2 < uVar5 || __n == 0) goto LAB_0098f068;
  }
  else {
LAB_0098f024:
    uVar5 = puVar1[2];
    __n = uVar2 - uVar5;
    if (uVar2 < uVar5 || __n == 0) {
LAB_0098f068:
      uVar4 = puVar1[1];
      goto LAB_0098f06c;
    }
  }
  uVar4 = puVar1[1];
  memset((void *)(uVar4 + uVar5),0,__n);
  puVar1[2] = uVar2;
  uVar5 = uVar2;
LAB_0098f06c:
  memcpy((void *)(uVar4 + uVar2),param_3,param_4);
  uVar2 = uVar2 + param_4;
  if (uVar5 < uVar2) {
    puVar1[2] = uVar2;
  }
  param_1[1] = uVar2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_4;
  return auVar3 << 0x40;
}


// ===== 0098f0b0  <core::io::cursor::Cursor<&mut_alloc::vec::Vec<u8>>as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::cursor::Cursor<&mut alloc::vec::Vec<u8>> as
   tokio::io::async_write::AsyncWrite>::poll_write_vectored */

undefined1  [16] __rustcall
<core::io::cursor::Cursor<&mut_alloc::vec::Vec<u8>>as_tokio::io::async_write::AsyncWrite>::
poll_write_vectored(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulong uVar3;
  size_t sVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar10;
  
  puVar7 = (ulong *)*param_1;
  uVar8 = 0;
  if (param_4 != 0) {
    puVar5 = param_3 + 1;
    lVar6 = param_4;
    do {
      bVar2 = CARRY8(uVar8,*puVar5);
      uVar8 = uVar8 + *puVar5;
      if (bVar2) {
        uVar8 = 0xffffffffffffffff;
      }
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 2;
    } while (lVar6 != 0);
  }
  uVar11 = param_1[1];
  uVar12 = uVar11 + uVar8;
  if (CARRY8(uVar11,uVar8)) {
    uVar12 = 0xffffffffffffffff;
  }
  if (*puVar7 < uVar12) {
    uVar3 = puVar7[2];
    if (uVar12 - uVar3 <= *puVar7 - uVar3) goto LAB_0098f12c;
    FUN_009bd2b4(puVar7,uVar3,uVar12 - uVar3,1,1);
    uVar12 = puVar7[2];
    sVar4 = uVar11 - uVar12;
    if (uVar11 < uVar12 || sVar4 == 0) goto LAB_0098f150;
  }
  else {
LAB_0098f12c:
    uVar12 = puVar7[2];
    sVar4 = uVar11 - uVar12;
    if (uVar11 < uVar12 || sVar4 == 0) goto LAB_0098f150;
  }
  memset((void *)(puVar7[1] + uVar12),0,sVar4);
  puVar7[2] = uVar11;
  uVar12 = uVar11;
LAB_0098f150:
  uVar3 = uVar11;
  if (param_4 != 0) {
    uVar13 = puVar7[1];
    puVar9 = param_3;
    do {
      puVar10 = puVar9 + 2;
      sVar4 = puVar9[1];
      memcpy((void *)(uVar13 + uVar3),(void *)*puVar9,sVar4);
      uVar3 = sVar4 + uVar3;
      puVar9 = puVar10;
    } while (puVar10 != param_3 + param_4 * 2);
  }
  if (uVar12 < uVar3) {
    puVar7[2] = uVar3;
  }
  param_1[1] = uVar11 + uVar8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar8;
  return auVar1 << 0x40;
}


// ===== 0098f1e4  <tokio::time::error::Elapsed_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::error::Elapsed as core::fmt::Display>::fmt */

void __rustcall
<tokio::time::error::Elapsed_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt("deadline has elapsedoperation would block",0x14,param_2);
  return;
}


// ===== 0098f1f8  <tokio::net::unix::split_owned::OwnedWriteHalf_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::OwnedWriteHalf as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::net::unix::split_owned::OwnedWriteHalf_as_core::ops::drop::Drop>::drop(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    if (*(int *)(*param_1 + 0x28) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
    }
    uVar1 = <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::shutdown
                      ((int *)(*param_1 + 0x28),1);
    if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
      local_18 = uVar1 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  return;
}


// ===== 0098f270  <core::io::cursor::Cursor<alloc::vec::Vec<u8>>as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::cursor::Cursor<alloc::vec::Vec<u8>> as tokio::io::async_write::AsyncWrite>::poll_write
    */

undefined1  [16] __rustcall
<core::io::cursor::Cursor<alloc::vec::Vec<u8>>as_tokio::io::async_write::AsyncWrite>::poll_write
          (ulong *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_1[3];
  uVar4 = uVar3 + param_4;
  if (CARRY8(uVar3,param_4)) {
    uVar4 = 0xffffffffffffffff;
  }
  if (*param_1 < uVar4) {
    uVar2 = param_1[2];
    if (uVar4 - uVar2 <= *param_1 - uVar2) goto LAB_0098f2bc;
    FUN_009bd2b4(param_1,uVar2,uVar4 - uVar2,1,1);
    uVar4 = param_1[2];
    __n = uVar3 - uVar4;
    if (uVar3 < uVar4 || __n == 0) goto LAB_0098f300;
  }
  else {
LAB_0098f2bc:
    uVar4 = param_1[2];
    __n = uVar3 - uVar4;
    if (uVar3 < uVar4 || __n == 0) {
LAB_0098f300:
      uVar2 = param_1[1];
      goto LAB_0098f304;
    }
  }
  uVar2 = param_1[1];
  memset((void *)(uVar2 + uVar4),0,__n);
  param_1[2] = uVar3;
  uVar4 = uVar3;
LAB_0098f304:
  memcpy((void *)(uVar2 + uVar3),param_3,param_4);
  uVar3 = uVar3 + param_4;
  if (uVar4 < uVar3) {
    param_1[2] = uVar3;
  }
  param_1[3] = uVar3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_4;
  return auVar1 << 0x40;
}


// ===== 0098f344  <core::io::cursor::Cursor<alloc::vec::Vec<u8>>as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::cursor::Cursor<alloc::vec::Vec<u8>> as
   tokio::io::async_write::AsyncWrite>::poll_write_vectored */

undefined1  [16] __rustcall
<core::io::cursor::Cursor<alloc::vec::Vec<u8>>as_tokio::io::async_write::AsyncWrite>::
poll_write_vectored(ulong *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulong uVar3;
  size_t sVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar9;
  
  uVar7 = 0;
  if (param_4 != 0) {
    puVar5 = param_3 + 1;
    lVar6 = param_4;
    do {
      bVar2 = CARRY8(uVar7,*puVar5);
      uVar7 = uVar7 + *puVar5;
      if (bVar2) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 2;
    } while (lVar6 != 0);
  }
  uVar10 = param_1[3];
  uVar11 = uVar10 + uVar7;
  if (CARRY8(uVar10,uVar7)) {
    uVar11 = 0xffffffffffffffff;
  }
  if (*param_1 < uVar11) {
    uVar3 = param_1[2];
    if (uVar11 - uVar3 <= *param_1 - uVar3) goto LAB_0098f3bc;
    FUN_009bd2b4(param_1,uVar3,uVar11 - uVar3,1,1);
    uVar11 = param_1[2];
    sVar4 = uVar10 - uVar11;
    if (uVar10 < uVar11 || sVar4 == 0) goto LAB_0098f3e0;
  }
  else {
LAB_0098f3bc:
    uVar11 = param_1[2];
    sVar4 = uVar10 - uVar11;
    if (uVar10 < uVar11 || sVar4 == 0) goto LAB_0098f3e0;
  }
  memset((void *)(param_1[1] + uVar11),0,sVar4);
  param_1[2] = uVar10;
  uVar11 = uVar10;
LAB_0098f3e0:
  uVar3 = uVar10;
  if (param_4 != 0) {
    uVar12 = param_1[1];
    puVar8 = param_3;
    do {
      puVar9 = puVar8 + 2;
      sVar4 = puVar8[1];
      memcpy((void *)(uVar12 + uVar3),(void *)*puVar8,sVar4);
      uVar3 = sVar4 + uVar3;
      puVar8 = puVar9;
    } while (puVar9 != param_3 + param_4 * 2);
  }
  if (uVar11 < uVar3) {
    param_1[2] = uVar3;
  }
  param_1[3] = uVar10 + uVar7;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  return auVar1 << 0x40;
}


// ===== 0098f474  <tokio::net::unix::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::OwnedWriteHalf as tokio::io::async_write::AsyncWrite>::poll_write
    */

void __rustcall
<tokio::net::unix::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write
          (long *param_1)

{
  FUN_0099e06c(*param_1 + 0x10);
  return;
}


// ===== 0098f480  <tokio::net::unix::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::OwnedWriteHalf as
   tokio::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio::net::unix::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
          (long *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  if (*(int *)(*param_1 + 0x28) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
  }
  uVar2 = <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::shutdown
                    ((int *)(*param_1 + 0x28),1);
  if (uVar2 != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    return auVar1 << 0x40;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return ZEXT816(0) << 0x40;
}


// ===== 0098f4e0  <tokio::net::unix::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::split_owned::OwnedWriteHalf as
   tokio::io::async_write::AsyncWrite>::poll_write_vectored */

void __rustcall
<tokio::net::unix::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::
poll_write_vectored(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009aa1b4(local_28,param_2,1,&local_28);
  return;
}


// ===== 0098f514  <tokio::fs::file::File_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as std::os::fd::owned::AsFd>::as_fd */

undefined4 __rustcall <tokio::fs::file::File_as_std::os::fd::owned::AsFd>::as_fd(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0x10);
}


// ===== 0098f520  <tokio::fs::file::File_as_std::os::fd::raw::FromRawFd>::from_raw_fd =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as std::os::fd::raw::FromRawFd>::from_raw_fd */

void __rustcall
<tokio::fs::file::File_as_std::os::fd::raw::FromRawFd>::from_raw_fd(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_002a1150,8,&PTR_s__nix_store_8006w282fgsx3273c878b_00af4350);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 2) = param_2;
    param_1[7] = 1;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
    param_1[9] = 0;
    param_1[10] = 0;
    puVar3[1] = 1;
    *puVar3 = 1;
    uVar2 = _UNK_0029fde8;
    uVar1 = _DAT_0029fde0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = puVar3;
    param_1[1] = 0;
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    param_1[0xc] = 0x200000;
    return;
  }
                    /* try { // try from 0098f59c to 0098f5a7 has its CatchHandler @ 0098f5c4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 0098f5d8  <tokio::sync::mutex::TryLockError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mutex::TryLockError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::mutex::TryLockError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0098f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"operation would block",0x15);
  return;
}


// ===== 0098f5f4  <tokio::fs::file::File_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::fs::file::File as tokio::io::async_read::AsyncRead>::poll_read */

undefined8 __rustcall
<tokio::fs::file::File_as_tokio::io::async_read::AsyncRead>::poll_read
          (long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  code *pcVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  long local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
LAB_0098f638:
  do {
    uVar13 = param_1[6];
    if (uVar13 != 0xfffffffffffffffe) {
      uVar7 = param_3[1];
      uVar12 = param_3[2];
      param_1[6] = -1;
      sVar3 = uVar7 - uVar12;
      if (sVar3 == 0) {
        if (uVar13 != 0xffffffffffffffff) {
          uVar14 = param_1[7];
          uVar16 = param_1[8];
          uVar11 = param_1[9];
LAB_0098f988:
          if (uVar16 - uVar11 <= sVar3) {
            sVar3 = uVar16 - uVar11;
          }
          if (uVar16 < uVar11) {
            ppuVar8 = &PTR_s__root__cargo_registry_src_index__00af4198;
            uVar7 = uVar16;
            uVar12 = uVar11;
            uVar15 = uVar16;
          }
          else {
            uVar15 = sVar3 + uVar12;
            ppuVar8 = &PTR_s__root__cargo_registry_src_index__00af41b0;
            if ((uVar12 <= uVar15) && (uVar15 <= uVar7)) {
              memcpy((void *)(*param_3 + uVar12),(void *)(uVar14 + uVar11),sVar3);
              if ((ulong)param_3[3] < uVar15) {
                param_3[3] = uVar15;
              }
              uVar11 = sVar3 + uVar11;
              lVar10 = param_1[6];
              param_3[2] = uVar15;
              uVar7 = 0;
              if (uVar11 != uVar16) {
                uVar7 = uVar11;
              }
              uVar12 = 0;
              if (uVar11 != uVar16) {
                uVar12 = uVar16;
              }
              if ((lVar10 != -1) && (lVar10 != 0)) {
                free((void *)param_1[7]);
              }
              param_1[6] = uVar13;
              param_1[7] = uVar14;
              param_1[8] = uVar12;
              param_1[9] = uVar7;
              return 0;
            }
          }
                    /* try { // try from 0098fc0c to 0098fc17 has its CatchHandler @ 0098fd24 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail(uVar12,uVar15,uVar7,ppuVar8);
        }
LAB_0098fb8c:
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4388);
      }
      if (uVar13 == 0xffffffffffffffff) goto LAB_0098fb8c;
      uVar16 = param_1[8];
      uVar11 = param_1[9];
      uVar14 = param_1[7];
      if (uVar16 != uVar11) goto LAB_0098f988;
      plVar9 = (long *)*param_1;
      do {
        lVar10 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x98fc64);
        (*pcVar4)();
      }
      local_80 = *param_1;
      local_78 = param_1[0xc];
      if (sVar3 <= (ulong)param_1[0xc]) {
        local_78 = sVar3;
      }
      local_a0 = uVar13;
      local_98 = uVar14;
      uStack_90 = uVar16;
      local_88 = uVar16;
      lVar10 = FUN_009a140c(&local_a0,&PTR_s__root__cargo_registry_src_index__00af43a0);
      lVar6 = param_1[6];
      if (lVar6 != -1) {
        if (lVar6 == -2) {
          plVar9 = (long *)param_1[7];
          if (*plVar9 == 0xcc) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = 0x84;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0098f6fc;
          }
          else {
            ClearExclusiveLocal();
          }
                    /* try { // try from 0098f918 to 0098f91b has its CatchHandler @ 0098fcb8 */
          (**(code **)(plVar9[2] + 0x20))();
        }
        else if (lVar6 != 0) {
          free((void *)param_1[7]);
        }
      }
LAB_0098f6fc:
      param_1[6] = -2;
      param_1[7] = lVar10;
    }
    FUN_009aca00(&local_a0,param_1 + 7,param_2);
    uVar16 = uStack_70;
    uVar11 = local_78;
    lVar10 = local_80;
    uVar12 = local_88;
    uVar7 = uStack_90;
    uVar13 = local_98;
    if (local_a0 == 0xfffffffffffffffe) {
      return 1;
    }
    if (local_a0 == 0xffffffffffffffff) {
      <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
      ::from(&local_98);
      return 0;
    }
    if (local_a0 == 1) {
      if (local_98 == 0) {
        if (local_78 != uStack_70) {
                    /* try { // try from 0098fbd0 to 0098fbef has its CatchHandler @ 0098fd44 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: buf.is_empty()",0x20,
                     &PTR_s__root__cargo_registry_src_index__00af43d0);
        }
        lVar6 = param_1[6];
        if (lVar6 == -2) {
          plVar9 = (long *)param_1[7];
          if (*plVar9 == 0xcc) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = 0x84;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0098f8fc;
          }
          else {
            ClearExclusiveLocal();
          }
                    /* try { // try from 0098f954 to 0098f957 has its CatchHandler @ 0098fcc4 */
          (**(code **)(plVar9[2] + 0x20))();
        }
        else if ((lVar6 != -1) && (lVar6 != 0)) {
          free((void *)param_1[7]);
        }
LAB_0098f8fc:
        param_1[8] = uVar11;
        param_1[9] = uVar11;
        param_1[6] = uVar12;
        param_1[7] = lVar10;
      }
      else {
        local_68 = local_98;
        if ((char)param_1[0xb] != -1) {
                    /* try { // try from 0098fbb4 to 0098fbcb has its CatchHandler @ 0098fd58 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: inner.last_write_err.is_none()",0x30,
                     &PTR_s__root__cargo_registry_src_index__00af43e8);
        }
        uVar14 = local_98 & 3;
        if (uVar14 < 2) {
          if (uVar14 == 0) {
            uVar5 = *(undefined1 *)(local_98 + 0x10);
          }
          else {
            uVar5 = *(undefined1 *)(local_98 + 0x1f);
          }
        }
        else if (uVar14 == 3) {
          uVar5 = (undefined1)(local_98 >> 0x20);
        }
        else {
                    /* try { // try from 0098f848 to 0098f85b has its CatchHandler @ 0098fd00 */
          lVar6 = core::io::error::os_functions::get_os_functions();
          uVar5 = (**(code **)(lVar6 + 8))(uVar13 >> 0x20);
        }
        lVar6 = param_1[6];
        *(undefined1 *)(param_1 + 0xb) = uVar5;
        if (lVar6 == -2) {
          plVar9 = (long *)param_1[7];
          if (*plVar9 == 0xcc) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = 0x84;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0098f8a4;
          }
          else {
            ClearExclusiveLocal();
          }
                    /* try { // try from 0098f940 to 0098f943 has its CatchHandler @ 0098fcd4 */
          (**(code **)(plVar9[2] + 0x20))();
        }
        else if ((lVar6 != -1) && (lVar6 != 0)) {
          free((void *)param_1[7]);
        }
LAB_0098f8a4:
        param_1[8] = uVar11;
        param_1[9] = uVar16;
        param_1[6] = uVar12;
        param_1[7] = lVar10;
joined_r0x0098f824:
        if ((1 < uVar14 - 2) && (uVar14 != 0)) {
          local_98 = uVar13 - 1;
          uVar13 = local_a0 >> 8;
          local_a0 = CONCAT71((int7)uVar13,3);
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_98);
        }
      }
      goto LAB_0098f638;
    }
    if (local_a0 != 2) {
      if ((local_98 & 1) == 0) {
        uVar13 = param_3[1];
        uVar7 = param_3[2];
        sVar3 = uVar13 - uVar7;
        if (local_78 - uStack_70 <= uVar13 - uVar7) {
          sVar3 = local_78 - uStack_70;
        }
        if (local_78 < uStack_70) {
          ppuVar8 = &PTR_s__root__cargo_registry_src_index__00af4198;
          uVar13 = local_78;
          uVar16 = local_78;
          uVar7 = uStack_70;
        }
        else {
          uVar16 = sVar3 + uVar7;
          ppuVar8 = &PTR_s__root__cargo_registry_src_index__00af41b0;
          if ((uVar7 <= uVar16) && (uVar16 <= uVar13)) {
            memcpy((void *)(*param_3 + uVar7),(void *)(local_80 + uStack_70),sVar3);
            if ((ulong)param_3[3] < uVar16) {
              param_3[3] = uVar16;
            }
            uStack_70 = sVar3 + uStack_70;
            lVar6 = param_1[6];
            param_3[2] = uVar16;
            uVar13 = 0;
            if (uStack_70 != uVar11) {
              uVar13 = uVar11;
            }
            uVar7 = 0;
            if (uStack_70 != uVar11) {
              uVar7 = uStack_70;
            }
            if (lVar6 == -2) {
              plVar9 = (long *)param_1[7];
              if (*plVar9 == 0xcc) {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = 0x84;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 == '\0') goto LAB_0098fb74;
              }
              else {
                ClearExclusiveLocal();
              }
                    /* try { // try from 0098fc8c to 0098fc8f has its CatchHandler @ 0098fc94 */
              (**(code **)(plVar9[2] + 0x20))();
            }
            else if ((lVar6 != -1) && (lVar6 != 0)) {
              free((void *)param_1[7]);
            }
LAB_0098fb74:
            param_1[8] = uVar13;
            param_1[9] = uVar7;
            param_1[6] = uVar12;
            param_1[7] = lVar10;
            return 0;
          }
        }
                    /* try { // try from 0098fc50 to 0098fc5f has its CatchHandler @ 0098fd44 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail(uVar7,uVar16,uVar13,ppuVar8);
      }
      local_a0 = uStack_90;
      if (local_78 != uStack_70) {
                    /* try { // try from 0098fc28 to 0098fc3f has its CatchHandler @ 0098fd04 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: buf.is_empty()",0x20,
                   &PTR_s__root__cargo_registry_src_index__00af43b8);
      }
      lVar6 = param_1[6];
      if (lVar6 == -2) {
        plVar9 = (long *)param_1[7];
        if (*plVar9 == 0xcc) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = 0x84;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0098fb44;
        }
        else {
          ClearExclusiveLocal();
        }
                    /* try { // try from 0098fc70 to 0098fc7b has its CatchHandler @ 0098fca4 */
        (**(code **)(plVar9[2] + 0x20))();
      }
      else if ((lVar6 != -1) && (lVar6 != 0)) {
        free((void *)param_1[7]);
      }
LAB_0098fb44:
      param_1[8] = uVar11;
      param_1[9] = uVar11;
      param_1[6] = uVar12;
      param_1[7] = lVar10;
      return 0;
    }
    if (local_78 != uStack_70) {
                    /* try { // try from 0098fb98 to 0098fbaf has its CatchHandler @ 0098fd78 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.is_empty()",0x20,
                 &PTR_s__root__cargo_registry_src_index__00af4400);
    }
    lVar6 = param_1[6];
    if (lVar6 == -2) {
      plVar9 = (long *)param_1[7];
      if (*plVar9 == 0xcc) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = 0x84;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') goto LAB_0098f808;
      }
      else {
        ClearExclusiveLocal();
      }
                    /* try { // try from 0098f92c to 0098f92f has its CatchHandler @ 0098fcec */
      (**(code **)(plVar9[2] + 0x20))();
    }
    else if ((lVar6 != -1) && (lVar6 != 0)) {
      free((void *)param_1[7]);
    }
LAB_0098f808:
    param_1[8] = uVar11;
    param_1[9] = uVar11;
    param_1[6] = uVar12;
    param_1[7] = lVar10;
    if (uVar13 != 0) {
      uVar14 = uVar7 & 3;
      uVar13 = uVar7;
      goto joined_r0x0098f824;
    }
    param_1[10] = uVar7;
  } while( true );
}


// ===== 0098fe08  FUN_0098fe08 =====

undefined1  [16] FUN_0098fe08(ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  while( true ) {
    while (uVar7 = *param_1, uVar7 != 0xfffffffffffffffe) {
      if ((char)param_1[5] != '\x01') {
        uVar7 = 0;
        goto LAB_0098ff50;
      }
      *param_1 = 0xffffffffffffffff;
      if (uVar7 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4418);
      }
      uVar6 = param_1[4];
      param_1[4] = 0;
      if (uVar6 == 0) {
                    /* try { // try from 0098ff84 to 0098ff8f has its CatchHandler @ 0098ffb4 */
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4430);
      }
      uStack_c0 = param_1[3];
      local_c8 = param_1[2];
      local_d8 = uVar7;
      local_d0 = param_1[1];
      local_b8 = uVar6;
      uVar7 = FUN_009a1624(&local_d8,&PTR_s__root__cargo_registry_src_index__00af4448);
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = uVar7;
      *(undefined1 *)(param_1 + 5) = 0;
    }
    FUN_009ac650(&local_d8,param_1 + 1,param_2);
    uVar3 = local_a8;
    uVar7 = local_d0;
    uVar6 = local_d8;
    if (local_d8 == 0xffffffffffffffff) {
      uVar5 = 1;
      uVar7 = 0xfffffffffffffffe;
      goto LAB_0098ff54;
    }
    if (local_d8 == 2) break;
    plVar4 = (long *)param_1[1];
    uStack_68 = uStack_b0;
    local_70 = local_b8;
    uStack_78 = uStack_c0;
    local_80 = local_c8;
    uStack_98 = uStack_c0;
    local_a0 = local_c8;
    uStack_88 = uStack_b0;
    uStack_90 = local_b8;
    if (*plVar4 == 0xcc) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 0x84;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 != '\0') goto LAB_0098ff18;
    }
    else {
      ClearExclusiveLocal();
LAB_0098ff18:
                    /* try { // try from 0098ff20 to 0098ff23 has its CatchHandler @ 0098ff94 */
      (**(code **)(plVar4[2] + 0x20))();
    }
    param_1[4] = uVar3;
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    if ((uVar6 & 1) != 0) {
LAB_0098ff50:
      uVar5 = 0;
LAB_0098ff54:
      auVar8._8_8_ = uVar7;
      auVar8._0_8_ = uVar5;
      return auVar8;
    }
  }
  local_80 = local_d0;
  local_70 = uStack_c0;
  uStack_78 = local_c8;
  uVar7 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
          ::from(&local_80);
  goto LAB_0098ff50;
}


// ===== 0098ffd4  FUN_0098ffd4 =====

undefined1  [16] FUN_0098ffd4(ulong *param_1,undefined8 param_2,void *param_3,ulong param_4)

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
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
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
      local_70 = param_1[2];
      uStack_78 = param_1[1];
      uStack_68 = param_1[3];
      local_80 = uVar6;
      if (local_70 != uStack_68) {
                    /* try { // try from 0099019c to 009901e7 has its CatchHandler @ 00990210 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: buf.is_empty()",0x20,
                   &PTR_s__root__cargo_registry_src_index__00af4478);
      }
      unaff_x20 = param_4;
      if (0x1fffff < param_4) {
        unaff_x20 = 0x200000;
      }
      local_d0 = local_70;
      if (uVar6 - local_70 < unaff_x20) {
        FUN_009bd2b4(&local_80,local_70,unaff_x20,1,1);
        local_d0 = local_70;
      }
      if (param_4 != 0) {
        local_70 = local_d0;
        memcpy((void *)(uStack_78 + local_d0),param_3,unaff_x20);
      }
      local_c0 = param_1[4];
      local_d0 = local_d0 + unaff_x20;
      param_1[4] = 0;
      local_70 = local_d0;
      if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4490);
      }
      uStack_d8 = uStack_78;
      local_e0 = local_80;
      uStack_c8 = uStack_68;
      uVar6 = FUN_009a184c(&local_e0,&PTR_s__root__cargo_registry_src_index__00af44a8);
      uVar7 = 0;
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = uVar6;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_00990168;
    }
    FUN_009ac650(&local_e0,param_1 + 1,param_2);
    uVar4 = local_b0;
    uVar3 = uStack_d8;
    uVar6 = local_e0;
    if (local_e0 == 0xffffffffffffffff) goto LAB_00990168;
    if (local_e0 == 2) break;
    plVar5 = (long *)param_1[1];
    uStack_68 = uStack_b8;
    local_70 = local_c0;
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    uStack_78 = uStack_c8;
    local_80 = local_d0;
    if (*plVar5 == 0xcc) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = 0x84;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 != '\0') goto LAB_00990090;
    }
    else {
      ClearExclusiveLocal();
LAB_00990090:
                    /* try { // try from 00990098 to 0099009b has its CatchHandler @ 009901ec */
      (**(code **)(plVar5[2] + 0x20))();
    }
    param_1[4] = uVar4;
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = local_90;
    unaff_x20 = uVar3;
    if ((uVar6 & 1) != 0) {
LAB_00990164:
      uVar7 = 1;
LAB_00990168:
      auVar8._8_8_ = unaff_x20;
      auVar8._0_8_ = uVar7;
      return auVar8;
    }
  }
  local_80 = uStack_d8;
  local_70 = uStack_c8;
  uStack_78 = local_d0;
  unaff_x20 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
              ::from(&local_80);
  goto LAB_00990164;
}


// ===== 00990234  FUN_00990234 =====

undefined1  [16] FUN_00990234(ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
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
                    /* try { // try from 009903b0 to 009903bb has its CatchHandler @ 009903e0 */
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4430);
      }
      uStack_c0 = param_1[3];
      local_c8 = param_1[2];
      local_d8 = uVar7;
      local_d0 = param_1[1];
      local_b8 = uVar6;
      uVar7 = FUN_009a1a74(&local_d8,&PTR_s__root__cargo_registry_src_index__00af4448);
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = uVar7;
      *(undefined1 *)(param_1 + 5) = 0;
    }
    FUN_009ac650(&local_d8,param_1 + 1,param_2);
    uVar3 = local_a8;
    uVar7 = local_d0;
    uVar6 = local_d8;
    if (local_d8 == 0xffffffffffffffff) {
      uVar5 = 1;
      uVar7 = 0xfffffffffffffffe;
      goto LAB_00990380;
    }
    if (local_d8 == 2) break;
    plVar4 = (long *)param_1[1];
    uStack_68 = uStack_b0;
    local_70 = local_b8;
    uStack_78 = uStack_c0;
    local_80 = local_c8;
    uStack_98 = uStack_c0;
    local_a0 = local_c8;
    uStack_88 = uStack_b0;
    uStack_90 = local_b8;
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
                    /* try { // try from 0099034c to 0099034f has its CatchHandler @ 009903c0 */
      (**(code **)(plVar4[2] + 0x20))();
    }
    param_1[4] = uVar3;
    param_1[1] = uStack_98;
    *param_1 = local_a0;
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
  local_80 = local_d0;
  local_70 = uStack_c0;
  uStack_78 = local_c8;
  uVar7 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
          ::from(&local_80);
  goto LAB_0099037c;
}


// ===== 00990400  FUN_00990400 =====

undefined1  [16] FUN_00990400(ulong *param_1,undefined8 param_2,void *param_3,ulong param_4)

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
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
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
      local_70 = param_1[2];
      uStack_78 = param_1[1];
      uStack_68 = param_1[3];
      local_80 = uVar6;
      if (local_70 != uStack_68) {
                    /* try { // try from 009905c8 to 00990613 has its CatchHandler @ 0099063c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: buf.is_empty()",0x20,
                   &PTR_s__root__cargo_registry_src_index__00af4478);
      }
      unaff_x20 = param_4;
      if (0x1fffff < param_4) {
        unaff_x20 = 0x200000;
      }
      local_d0 = local_70;
      if (uVar6 - local_70 < unaff_x20) {
        FUN_009bd2b4(&local_80,local_70,unaff_x20,1,1);
        local_d0 = local_70;
      }
      if (param_4 != 0) {
        local_70 = local_d0;
        memcpy((void *)(uStack_78 + local_d0),param_3,unaff_x20);
      }
      local_c0 = param_1[4];
      local_d0 = local_d0 + unaff_x20;
      param_1[4] = 0;
      local_70 = local_d0;
      if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4490);
      }
      uStack_d8 = uStack_78;
      local_e0 = local_80;
      uStack_c8 = uStack_68;
      uVar6 = FUN_009a1c9c(&local_e0,&PTR_s__root__cargo_registry_src_index__00af44a8);
      uVar7 = 0;
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = uVar6;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_00990594;
    }
    FUN_009ac650(&local_e0,param_1 + 1,param_2);
    uVar4 = local_b0;
    uVar3 = uStack_d8;
    uVar6 = local_e0;
    if (local_e0 == 0xffffffffffffffff) goto LAB_00990594;
    if (local_e0 == 2) break;
    plVar5 = (long *)param_1[1];
    uStack_68 = uStack_b8;
    local_70 = local_c0;
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    uStack_78 = uStack_c8;
    local_80 = local_d0;
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
                    /* try { // try from 009904c4 to 009904c7 has its CatchHandler @ 00990618 */
      (**(code **)(plVar5[2] + 0x20))();
    }
    param_1[4] = uVar4;
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = local_90;
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
  local_80 = uStack_d8;
  local_70 = uStack_c8;
  uStack_78 = local_d0;
  unaff_x20 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
              ::from(&local_80);
  goto LAB_00990590;
}


// ===== 00990660  <tokio::net::tcp::socket::TcpSocket_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::socket::TcpSocket as core::fmt::Debug>::fmt */

void __rustcall <tokio::net::tcp::socket::TcpSocket_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b05008)();
  return;
}


// ===== 00990664  FUN_00990664 =====

void FUN_00990664(undefined8 param_1,undefined8 *param_2)

{
  char *local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = 
  "std::sync::poison::mutex::Mutex<core::option::Option<tokio::sync::watch::Receiver<()>>>";
  uStack_28 = 0x57;
  pcStack_18 = FUN_0099f78c;
  core::fmt::write(*param_2,param_2[1],&DAT_002b8d15,&local_20);
  return;
}


// ===== 009906b0  FUN_009906b0 =====

void FUN_009906b0(undefined8 param_1,undefined8 *param_2)

{
  char *local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = "std::sync::poison::mutex::Mutex<alloc::vec::Vec<std::process::Child>>";
  uStack_28 = 0x45;
  pcStack_18 = FUN_0099f78c;
  core::fmt::write(*param_2,param_2[1],&DAT_002b8d15,&local_20);
  return;
}


// ===== 009906fc  FUN_009906fc =====

void FUN_009906fc(undefined8 param_1,undefined8 *param_2)

{
  char *local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = "std::sync::poison::rwlock::RwLock<()>";
  uStack_28 = 0x25;
  pcStack_18 = FUN_0099f78c;
  core::fmt::write(*param_2,param_2[1],&DAT_002b8d15,&local_20);
  return;
}


// ===== 00990748  FUN_00990748 =====

undefined ** FUN_00990748(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long local_68;
  
  if (param_3 != (undefined **)0x0) {
    do {
      auVar5 = <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write
                         (param_1,param_2,param_3);
      ppuVar3 = auVar5._8_8_;
      if (auVar5._0_8_ == 1) {
        if (((ulong)ppuVar3 & 3) < 2) {
          if ((auVar5 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            if (*(char *)(ppuVar3 + 2) != '#') {
              return ppuVar3;
            }
          }
          else {
            if (*(char *)((long)ppuVar3 + 0x1f) != '#') {
              return ppuVar3;
            }
            local_68 = (long)ppuVar3 - 1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
        }
        else if (((ulong)ppuVar3 & 3) == 2) {
                    /* try { // try from 00990820 to 00990833 has its CatchHandler @ 009908a0 */
          lVar1 = core::io::error::os_functions::get_os_functions();
          uVar2 = (**(code **)(lVar1 + 0x10))((ulong)ppuVar3 >> 0x20);
          if ((uVar2 & 1) == 0) {
            return ppuVar3;
          }
        }
        else {
          uVar4 = auVar5._12_4_ & 0xff;
          if (10 < (ulong)ppuVar3 >> 0x22) {
            uVar4 = 0xff;
          }
          if (uVar4 != 0x23) {
            return ppuVar3;
          }
        }
      }
      else {
        if (ppuVar3 == (undefined **)0x0) {
          return &PTR_s_failed_to_write_whole_buffer_00af44c0;
        }
        if (param_3 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar3,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00af44d8);
        }
        param_2 = param_2 + (long)ppuVar3;
        param_3 = (undefined **)((long)param_3 - (long)ppuVar3);
      }
    } while (param_3 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


// ===== 009908b8  thunk_FUN_00983cb0 =====

ulong thunk_FUN_00983cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  iVar1 = core::fmt::write(&uStack_40,&PTR_FUN_00af3998,param_2,param_3);
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
    core::panicking::panic_fmt
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00af39c8);
  }
  return uStack_38;
}


// ===== 009908bc  FUN_009908bc =====

void FUN_009908bc(void *param_1)

{
                    /* try { // try from 009908cc to 009908cf has its CatchHandler @ 009908e8 */
  FUN_0099143c();
  free(param_1);
  return;
}


// ===== 00990904  FUN_00990904 =====

void FUN_00990904(long param_1)

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


// ===== 00990980  FUN_00990980 =====

void FUN_00990980(long *param_1)

{
                    /* try { // try from 00990990 to 00990993 has its CatchHandler @ 009909c0 */
  FUN_009c4e8c();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009909e4  FUN_009909e4 =====

void FUN_009909e4(long param_1)

{
                    /* try { // try from 009909f4 to 009909fb has its CatchHandler @ 00990a40 */
  <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_1 + 0x18);
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 00990a0c to 00990a0f has its CatchHandler @ 00990a38 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x18))(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00990a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
    return;
  }
  return;
}


// ===== 00990a78  FUN_00990a78 =====

void FUN_00990a78(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
                    /* try { // try from 00990a94 to 00990a97 has its CatchHandler @ 00990be8 */
  FUN_00990d88(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  if (*(long *)(param_1 + 0x90) != 0) {
    free(*(void **)(param_1 + 0x88));
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    free(*(void **)(param_1 + 0xf8));
  }
  puVar4 = *(undefined8 **)(param_1 + 0x130);
  for (lVar5 = *(long *)(param_1 + 0x138); lVar5 != 0; lVar5 = lVar5 + -1) {
                    /* try { // try from 00990adc to 00990adf has its CatchHandler @ 00990c2c */
    FUN_009bfca8(*puVar4);
    puVar4 = puVar4 + 1;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    free(*(void **)(param_1 + 0x130));
  }
                    /* try { // try from 00990afc to 00990b03 has its CatchHandler @ 00990be0 */
  FUN_009910a0(param_1 + 0x10);
                    /* try { // try from 00990b04 to 00990b0b has its CatchHandler @ 00990bd8 */
  FUN_009911fc(param_1 + 0x140);
  plVar3 = *(long **)(param_1 + 0x1c8);
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
                    /* try { // try from 00990b28 to 00990b2f has its CatchHandler @ 00990bd0 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow
              (param_1 + 0x1c8);
  }
  plVar3 = *(long **)(param_1 + 0x1e0);
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
                    /* try { // try from 00990b50 to 00990b57 has its CatchHandler @ 00990b9c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x1e0);
    }
  }
  plVar3 = *(long **)(param_1 + 0x1f0);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x1f0);
      return;
    }
  }
  return;
}


// ===== 00990cac  FUN_00990cac =====

void FUN_00990cac(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_28;
  
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
                    /* try { // try from 00990cdc to 00990cdf has its CatchHandler @ 00990d10 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
  plVar3 = (long *)(param_1 + 0x20);
  do {
    local_28 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (local_28 != 0) {
    FUN_0097cd18(&local_28);
  }
  return;
}


// ===== 00990d40  FUN_00990d40 =====

void FUN_00990d40(void *param_1)

{
                    /* try { // try from 00990d50 to 00990d53 has its CatchHandler @ 00990d6c */
  FUN_0099143c();
  free(param_1);
  return;
}


// ===== 00990d88  FUN_00990d88 =====

void FUN_00990d88(void *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)((long)param_1 + lVar6 * 0x10);
      lVar6 = lVar6 + 1;
      plVar4 = (long *)*puVar1;
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
                    /* try { // try from 00990dec to 00990df3 has its CatchHandler @ 00990e50 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
        ::drop_slow(puVar1);
      }
      plVar4 = (long *)puVar1[1];
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
                    /* try { // try from 00990e10 to 00990e17 has its CatchHandler @ 00990e80 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
        drop_slow(puVar1 + 1);
      }
    } while (lVar6 != param_2);
    free(param_1);
    return;
  }
  return;
}


// ===== 00990ebc  FUN_00990ebc =====

void FUN_00990ebc(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = *(void **)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  for (lVar2 = 0; lVar1 != lVar2; lVar2 = lVar2 + 1) {
                    /* try { // try from 00990eec to 00990eef has its CatchHandler @ 00990f34 */
    FUN_009bfca8(*(undefined8 *)((long)__ptr + lVar2 * 8));
  }
  if (*(long *)(param_1 + 8) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00990f74  FUN_00990f74 =====

void FUN_00990f74(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00990f84 to 00990f87 has its CatchHandler @ 00990fc0 */
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


// ===== 00990ff4  FUN_00990ff4 =====

void FUN_00990ff4(undefined8 *param_1)

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
                    /* try { // try from 00991024 to 0099102b has its CatchHandler @ 00991068 */
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


// ===== 009910a0  FUN_009910a0 =====

void FUN_009910a0(long param_1)

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
                    /* try { // try from 009910d0 to 009910d3 has its CatchHandler @ 00991170 */
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
                    /* try { // try from 009910f8 to 009910fb has its CatchHandler @ 00991168 */
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
                    /* try { // try from 00991120 to 00991123 has its CatchHandler @ 00991160 */
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


// ===== 009911fc  FUN_009911fc =====

void FUN_009911fc(undefined8 *param_1)

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
                    /* try { // try from 009912b0 to 009912b7 has its CatchHandler @ 00991364 */
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
                    /* try { // try from 00991268 to 0099126b has its CatchHandler @ 0099136c */
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


// ===== 009913f0  FUN_009913f0 =====

void FUN_009913f0(long *param_1)

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


// ===== 0099143c  FUN_0099143c =====

void FUN_0099143c(long *param_1)

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
                    /* try { // try from 00991474 to 0099149b has its CatchHandler @ 0099153c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
                    /* try { // try from 0099149c to 009914a3 has its CatchHandler @ 0099150c */
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
                    /* try { // try from 009914c0 to 009914c7 has its CatchHandler @ 00991504 */
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
      drop_slow(param_1 + 1);
      return;
    }
  }
  return;
}


// ===== 0099157c  FUN_0099157c =====

void FUN_0099157c(long *param_1)

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
                    /* try { // try from 009915d0 to 009915d3 has its CatchHandler @ 00991614 */
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


// ===== 00991678  FUN_00991678 =====

void FUN_00991678(undefined8 *param_1)

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
                    /* try { // try from 009916a4 to 009916ab has its CatchHandler @ 009916e4 */
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


// ===== 00991718  FUN_00991718 =====

void FUN_00991718(long param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  
  lVar9 = *(long *)(param_2 + 4);
  if (lVar9 == 0) {
LAB_00991744:
    if (*(long *)param_2 != 1) {
      return;
    }
    puVar5 = *(ulong **)(param_2 + 2);
    param_2[2] = 0;
    param_2[3] = 0;
    if (puVar5 == (ulong *)0x0) {
      return;
    }
    lVar10 = 1;
    puVar12 = puVar5;
  }
  else {
    lVar10 = *(long *)(param_2 + 8);
    if (lVar10 == 0x80) {
      param_2[4] = 0;
      param_2[5] = 0;
      goto LAB_00991744;
    }
    uVar2 = *param_2;
    *(long *)(param_2 + 8) = lVar10 + 1;
    puVar5 = *(ulong **)
              (lVar9 + ((ulong)(uint)((int)*(long *)(param_2 + 6) + (int)lVar10) & 0xff) * 8);
    puVar7 = *(ulong **)(param_2 + 2);
    if (lVar10 + 1 == 0x80) {
      lVar10 = 1;
      puVar12 = puVar5;
    }
    else {
      uVar6 = lVar10 + *(long *)(param_2 + 6);
      lVar11 = 0x7f - lVar10;
      puVar8 = puVar5;
      do {
        uVar6 = uVar6 + 1;
        lVar11 = lVar11 + -1;
        puVar12 = *(ulong **)(lVar9 + (uVar6 & 0xff) * 8);
        puVar8[1] = (ulong)puVar12;
        puVar8 = puVar12;
      } while (lVar11 != 0);
      lVar10 = 0x80 - lVar10;
    }
    if ((uVar2 & puVar7 != (ulong *)0x0) == 1) {
      puVar12[1] = (ulong)puVar7;
      lVar10 = lVar10 + 1;
      puVar12 = puVar7;
    }
  }
  pcVar1 = (char *)(param_1 + 0xd8);
  if (*pcVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_1 + 0x108);
      goto joined_r0x00991874;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 0xd8,param_2,0xffffffff);
  cVar3 = *(char *)(param_1 + 0x108);
joined_r0x00991874:
  if (cVar3 == '\x01') {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
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
    do {
      puVar12 = (ulong *)puVar5[1];
      do {
        uVar6 = *puVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar6 - 0x40;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar6 = uVar6 >> 6;
      if (uVar6 == 1) {
        (**(code **)(puVar5[2] + 0x10))();
      }
      else if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 1",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3f10);
      }
      puVar5 = puVar12;
    } while (puVar12 != (ulong *)0x0);
  }
  else {
    if (*(long *)(param_1 + 0x100) == 0) {
      *(ulong **)(param_1 + 0xf8) = puVar5;
    }
    else {
      *(ulong **)(*(long *)(param_1 + 0x100) + 8) = puVar5;
    }
    *(ulong **)(param_1 + 0x100) = puVar12;
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + lVar10;
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
  }
  return;
}


// ===== 00991948  FUN_00991948 =====

void FUN_00991948(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_68;
  undefined1 *local_60;
  ulong local_58;
  
  uVar7 = param_2 - 1;
  if ((param_2 ^ uVar7) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: sharded_size.is_power_of_two()",0x30,
               &PTR_s__root__cargo_registry_src_index__00af4560);
  }
  lVar4 = param_2 * 0x18;
  if (param_2 < 0x555555555555556) {
    if (lVar4 == 0) {
      local_60 = &DAT_00000008;
      local_68 = 0;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar5 = 8;
      local_60 = (undefined1 *)FUN_004b25a4(lVar4,8);
      local_68 = param_2;
      if (local_60 == (undefined1 *)0x0) goto LAB_00991998;
    }
    lVar6 = 0;
    local_58 = 0;
    do {
      uVar2 = local_58;
      if (local_58 == local_68) {
                    /* try { // try from 00991a14 to 00991a1b has its CatchHandler @ 00991ad0 */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<tokio[8c8895dbfa691109]::loom::std::parking_lot::Mutex<tokio[8c8895dbfa691109]::util::linked_list::LinkedList<tokio[8c8895dbfa691109]::runtime::task::Task<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>,tokio[8c8895dbfa691109]::runtime::task::core::Header>>>>
        ::grow_one(&local_68);
      }
      local_58 = uVar2 + 1;
      puVar1 = (undefined8 *)(local_60 + lVar6);
      lVar6 = lVar6 + 0x18;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    } while (param_2 != local_58);
    puVar3 = local_60;
    if (param_2 < local_68) {
      if (param_2 == 0) {
        free(local_60);
        puVar3 = &DAT_00000008;
      }
      else {
        puVar3 = (undefined1 *)FUN_004b2600(local_60,local_68 * 0x18,8,lVar4);
        if (puVar3 == (undefined1 *)0x0) {
                    /* try { // try from 00991a54 to 00991a5f has its CatchHandler @ 00991ac0 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(8,lVar4);
        }
      }
    }
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = uVar7;
    return;
  }
  uVar5 = 0;
LAB_00991998:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar5,lVar4);
}


// ===== 00991af8  FUN_00991af8 =====

void FUN_00991af8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_68;
  undefined1 *local_60;
  ulong local_58;
  
  uVar7 = param_2 - 1;
  if ((param_2 ^ uVar7) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: sharded_size.is_power_of_two()",0x30,
               &PTR_s__root__cargo_registry_src_index__00af4560);
  }
  lVar4 = param_2 * 0x18;
  if (param_2 < 0x555555555555556) {
    if (lVar4 == 0) {
      local_60 = &DAT_00000008;
      local_68 = 0;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar5 = 8;
      local_60 = (undefined1 *)FUN_004b25a4(lVar4,8);
      local_68 = param_2;
      if (local_60 == (undefined1 *)0x0) goto LAB_00991b48;
    }
    lVar6 = 0;
    local_58 = 0;
    do {
      uVar2 = local_58;
      if (local_58 == local_68) {
                    /* try { // try from 00991bc4 to 00991bcb has its CatchHandler @ 00991c80 */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<tokio[8c8895dbfa691109]::loom::std::parking_lot::Mutex<tokio[8c8895dbfa691109]::util::linked_list::LinkedList<tokio[8c8895dbfa691109]::runtime::task::Task<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>,tokio[8c8895dbfa691109]::runtime::task::core::Header>>>>
        ::grow_one(&local_68);
      }
      local_58 = uVar2 + 1;
      puVar1 = (undefined8 *)(local_60 + lVar6);
      lVar6 = lVar6 + 0x18;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    } while (param_2 != local_58);
    puVar3 = local_60;
    if (param_2 < local_68) {
      if (param_2 == 0) {
        free(local_60);
        puVar3 = &DAT_00000008;
      }
      else {
        puVar3 = (undefined1 *)FUN_004b2600(local_60,local_68 * 0x18,8,lVar4);
        if (puVar3 == (undefined1 *)0x0) {
                    /* try { // try from 00991c04 to 00991c0f has its CatchHandler @ 00991c70 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(8,lVar4);
        }
      }
    }
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = uVar7;
    return;
  }
  uVar5 = 0;
LAB_00991b48:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar5,lVar4);
}


// ===== 00991ca8  FUN_00991ca8 =====

void FUN_00991ca8(char *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  if (*param_1 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00991cd8;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 00991d84 to 00991d8f has its CatchHandler @ 00991db0 */
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1,param_2,0xffffffff);
LAB_00991cd8:
  if (param_1[0x18] == '\x01') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = uVar3 - 0x40;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = uVar3 >> 6;
    if (uVar3 == 1) {
      (**(code **)(param_2[2] + 0x10))(param_2);
    }
    else if (uVar3 == 0) {
                    /* try { // try from 00991d04 to 00991d43 has its CatchHandler @ 00991dc4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x10) == 0) {
      *(ulong **)(param_1 + 8) = param_2;
    }
    else {
      *(ulong **)(*(long *)(param_1 + 0x10) + 8) = param_2;
    }
    *(ulong **)(param_1 + 0x10) = param_2;
    *(long *)(param_1 + 0x20) = lVar4 + 1;
  }
  do {
    if (*param_1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1,0);
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = '\0';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 00991dfc  FUN_00991dfc =====

void FUN_00991dfc(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_68;
  undefined8 *puStack_60;
  long *local_58;
  long local_50;
  undefined8 uStack_48;
  
  local_68 = (undefined8 *)param_1[1];
  local_50 = param_1[2];
  param_1[2] = 0;
  puStack_60 = local_68 + local_50;
  uStack_48 = 0;
  local_58 = param_1;
  if (local_50 != 0) {
    do {
      uVar3 = *local_68;
      local_68 = local_68 + 1;
                    /* try { // try from 00991e4c to 00991e87 has its CatchHandler @ 00991f78 */
      plVar4 = (long *)FUN_009a0cf0(uVar3,&PTR_s__root__cargo_registry_src_index__00af4578);
      if (*plVar4 == 0xcc) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = 0x84;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 != '\0') goto LAB_00991e7c;
      }
      else {
        ClearExclusiveLocal();
LAB_00991e7c:
        (**(code **)(plVar4[2] + 0x20))();
      }
    } while (local_68 != puStack_60);
  }
                    /* try { // try from 00991e8c to 00991e93 has its CatchHandler @ 00991f0c */
  FUN_009c4564(&local_68);
  lVar6 = param_1[2];
  if (lVar6 != 0) {
    lVar7 = param_1[1];
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
                    /* try { // try from 00991ed4 to 00991ed7 has its CatchHandler @ 00991f14 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
        ::drop_slow();
      }
    } while (lVar8 != lVar6);
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  return;
}


// ===== 00991f98  <tokio::io::util::mem::[1]::tokio::io::util::mem::SimplexStream>::new_unsplit =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::[1]::tokio::io::util::mem::SimplexStream>::new_unsplit */

void __rustcall
<tokio::io::util::mem::[1]::tokio::io::util::mem::SimplexStream>::new_unsplit
          (undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  return;
}


// ===== 00991fb4  FUN_00991fb4 =====

void FUN_00991fb4(long param_1,long *param_2,long param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_3;
  if ((param_4 == 0) && ((*(byte *)(param_2 + 9) & 1) != 0)) {
    lVar6 = *param_2;
    *param_2 = 0;
    if (lVar6 == 0) {
      *param_2 = param_3;
      return;
    }
    lVar10 = param_2[3];
    do {
      uVar2 = *(uint *)(lVar10 + 0x20);
      iVar7 = (int)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
      if (uVar2 - iVar7 < 0x100) {
        *(long *)(*(long *)(lVar10 + 0x10) + ((ulong)uVar2 & 0xff) * 8) = lVar6;
        *(uint *)(lVar10 + 0x20) = uVar2 + 1;
        break;
      }
      if (iVar7 != (int)*(undefined8 *)(lVar10 + 0x18)) {
                    /* try { // try from 009920fc to 00992103 has its CatchHandler @ 009922a8 */
        FUN_009922d0(param_1);
        lVar6 = extraout_x1_00;
        break;
      }
                    /* try { // try from 0099201c to 0099202b has its CatchHandler @ 009922ac */
      lVar6 = <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Local<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>
              ::push_overflow::
              <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>
                        (param_2 + 3);
    } while (lVar6 != 0);
    puVar5 = (ulong *)*param_2;
    if (puVar5 != (ulong *)0x0) {
      do {
        uVar8 = *puVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar8 - 0x40;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar8 = uVar8 >> 6;
      if (uVar8 == 1) {
        (**(code **)(puVar5[2] + 0x10))();
        lVar6 = extraout_x1_01;
      }
      else if (uVar8 == 0) {
                    /* try { // try from 0099212c to 00992153 has its CatchHandler @ 009922c0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 1",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3f10);
      }
    }
    lVar10 = param_2[1];
    *param_2 = param_3;
  }
  else {
    lVar10 = param_2[3];
    do {
      lVar6 = auVar11._8_8_;
      uVar9 = auVar11._0_8_;
      uVar8 = *(ulong *)(lVar10 + 0x18);
      uVar2 = *(uint *)(lVar10 + 0x20);
      iVar7 = (int)(uVar8 >> 0x20);
      if (uVar2 - iVar7 < 0x100) {
        *(undefined8 *)(*(long *)(lVar10 + 0x10) + ((ulong)uVar2 & 0xff) * 8) = uVar9;
        *(uint *)(lVar10 + 0x20) = uVar2 + 1;
        break;
      }
      if (iVar7 != (int)uVar8) {
        FUN_009922d0(param_1,uVar9);
        lVar10 = param_2[1];
        lVar6 = extraout_x1;
        goto joined_r0x009920d8;
      }
      auVar11 = <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Local<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>
                ::push_overflow::
                <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>
                          (param_2 + 3,uVar9,uVar8 >> 0x20,(ulong)uVar2,param_1);
      lVar6 = auVar11._8_8_;
    } while (auVar11._0_8_ != 0);
    lVar10 = param_2[1];
  }
joined_r0x009920d8:
  if (lVar10 == 0) {
    return;
  }
  puVar5 = (ulong *)(param_1 + 200);
  do {
    uVar8 = *puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar8 & 0xffff) != 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0xd0) <= uVar8 >> 0x10) {
    return;
  }
  pcVar1 = (char *)(param_1 + 0xd8);
  if (*pcVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0099219c;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 0xd8,lVar6,0xffffffff);
LAB_0099219c:
  do {
    uVar8 = *puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uVar8 & 0xffff) == 0) && (uVar8 >> 0x10 < *(ulong *)(param_1 + 0xd0))) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = *puVar5 + 0x10001;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = *(long *)(param_1 + 0xf0);
    if (lVar10 != 0) {
      *(long *)(param_1 + 0xf0) = lVar10 + -1;
      puVar5 = *(ulong **)(*(long *)(param_1 + 0xe8) + (lVar10 + -1) * 8);
    }
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                  (param_1 + 0xd8,0);
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\0';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 != 0) {
      if (puVar5 < *(ulong **)(param_1 + 0x70)) {
        FUN_0097e264(*(long *)(param_1 + 0x68) + (long)puVar5 * 0x10 + 8,param_1 + 0x130);
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (puVar5,*(ulong **)(param_1 + 0x70),&PTR_s__root__cargo_registry_src_index__00af4650
                );
    }
  }
  else {
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
  }
  return;
}


// ===== 009922d0  FUN_009922d0 =====

void FUN_009922d0(long param_1,ulong *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  
  pcVar1 = (char *)(param_1 + 0xd8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00992300;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 009923ac to 009923bf has its CatchHandler @ 009923e0 */
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 0xd8,param_2,0xffffffff);
LAB_00992300:
  if (*(char *)(param_1 + 0x108) == '\x01') {
    do {
      uVar4 = *param_2;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = uVar4 - 0x40;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = uVar4 >> 6;
    if (uVar4 == 1) {
      (**(code **)(param_2[2] + 0x10))(param_2);
    }
    else if (uVar4 == 0) {
                    /* try { // try from 0099232c to 0099236b has its CatchHandler @ 009923f4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0xc0);
    if (*(long *)(param_1 + 0x100) == 0) {
      *(ulong **)(param_1 + 0xf8) = param_2;
    }
    else {
      *(ulong **)(*(long *)(param_1 + 0x100) + 8) = param_2;
    }
    *(ulong **)(param_1 + 0x100) = param_2;
    *(long *)(param_1 + 0xc0) = lVar5 + 1;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0099242c  FUN_0099242c =====

void FUN_0099242c(long param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  
  puVar6 = (ulong *)(param_1 + 200);
  do {
    uVar4 = *puVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar3) {
      *puVar6 = uVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar4 & 0xffff) != 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0xd0) <= uVar4 >> 0x10) {
    return;
  }
  pcVar1 = (char *)(param_1 + 0xd8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00992478;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 0xd8,param_2,0xffffffff);
LAB_00992478:
  do {
    uVar4 = *puVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar3) {
      *puVar6 = uVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uVar4 & 0xffff) == 0) && (uVar4 >> 0x10 < *(ulong *)(param_1 + 0xd0))) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *puVar6 = *puVar6 + 0x10001;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = *(long *)(param_1 + 0xf0);
    if (lVar5 != 0) {
      *(long *)(param_1 + 0xf0) = lVar5 + -1;
      puVar6 = *(ulong **)(*(long *)(param_1 + 0xe8) + (lVar5 + -1) * 8);
    }
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                  (param_1 + 0xd8,0);
        if (lVar5 == 0) {
          return;
        }
        goto LAB_00992504;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) {
LAB_00992504:
      if (puVar6 < *(ulong **)(param_1 + 0x70)) {
        FUN_0097e264(*(long *)(param_1 + 0x68) + (long)puVar6 * 0x10 + 8,param_1 + 0x130);
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (puVar6,*(ulong **)(param_1 + 0x70),&PTR_s__root__cargo_registry_src_index__00af4668
                );
    }
  }
  else {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


// ===== 009925a0  <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>::schedule_option_task_without_yield =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>::schedule_option_task_without_yield
    */

void __rustcall
<tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>
::schedule_option_task_without_yield(undefined8 param_1,long param_2)

{
  undefined1 local_2c [4];
  undefined8 local_28;
  long lStack_20;
  undefined1 *local_18;
  
  if (param_2 != 0) {
    local_18 = local_2c;
    local_2c[0] = 0;
    local_28 = param_1;
    lStack_20 = param_2;
    FUN_009ae668(&local_28,&PTR_s__root__cargo_registry_src_index__00af4638);
  }
  return;
}


// ===== 009925dc  FUN_009925dc =====

long FUN_009925dc(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  pcVar3 = (char *)(*param_1 +
                   (param_1[4] & *(ulong *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x48)))
                   * 0x18);
  if (*pcVar3 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *pcVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 != '\0') goto LAB_009926a4;
    lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
    plVar5 = (long *)(param_2 + lVar4);
    lVar6 = *plVar5;
    if (lVar6 == 0) goto LAB_009926d4;
LAB_00992634:
    *(long *)(lVar6 + *(long *)(*(long *)(lVar6 + 0x10) + 0x38) + 8) = plVar5[1];
    lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
    lVar6 = *(long *)(param_2 + lVar4 + 8);
joined_r0x009926e8:
    if (lVar6 == 0) {
      if (*(long *)(pcVar3 + 0x10) != param_2) goto LAB_009926f8;
      *(undefined8 *)(pcVar3 + 0x10) = *(undefined8 *)(param_2 + lVar4);
    }
    else {
      *(undefined8 *)(lVar6 + *(long *)(*(long *)(lVar6 + 0x10) + 0x38)) =
           *(undefined8 *)(param_2 + lVar4);
      lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
    }
    param_1 = param_1 + 3;
    *(undefined8 *)(param_2 + lVar4 + 8) = 0;
    *(undefined8 *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x38)) = 0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    ClearExclusiveLocal();
LAB_009926a4:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (pcVar3,param_2,0xffffffff);
    lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
    plVar5 = (long *)(param_2 + lVar4);
    lVar6 = *plVar5;
    if (lVar6 != 0) goto LAB_00992634;
LAB_009926d4:
    if (*(long *)(pcVar3 + 8) == param_2) {
      lVar6 = plVar5[1];
      *(long *)(pcVar3 + 8) = lVar6;
      goto joined_r0x009926e8;
    }
LAB_009926f8:
    param_2 = 0;
  }
  do {
    if (*pcVar3 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar3,0);
      return param_2;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *pcVar3 = '\0';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return param_2;
}


// ===== 00992750  FUN_00992750 =====

long * FUN_00992750(long *param_1,long param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong *puVar11;
  void *__ptr;
  long local_38;
  
  local_38 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (local_38 == 0) {
                    /* try { // try from 00992a0c to 00992a23 has its CatchHandler @ 00992b3c */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed("park missing",0xc,&PTR_s__root__cargo_registry_src_index__00af4698)
    ;
  }
  if (param_1[1] != 0) {
                    /* try { // try from 00992a28 to 00992a33 has its CatchHandler @ 00992b2c */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af46e0);
    goto LAB_00992abc;
  }
  __ptr = (void *)param_1[2];
  param_1[1] = -1;
  if (__ptr == (void *)0x0) {
    param_1[1] = 0;
    param_1[2] = param_2;
    lVar6 = *(long *)(*param_1 + 0x10);
    if (param_3 != -1) goto LAB_009927c8;
LAB_00992820:
                    /* try { // try from 00992820 to 0099282b has its CatchHandler @ 00992b98 */
    FUN_0097dfe0(&local_38,lVar6 + 0x140);
    lVar6 = param_1[3];
  }
  else {
                    /* try { // try from 00992798 to 0099279f has its CatchHandler @ 00992ae0 */
    FUN_0099143c(__ptr);
    free(__ptr);
    param_1[1] = param_1[1] + 1;
    param_1[2] = param_2;
    lVar6 = *(long *)(*param_1 + 0x10);
    if (param_3 == -1) goto LAB_00992820;
LAB_009927c8:
    lVar9 = *(long *)(local_38 + 0x10);
    pcVar1 = (char *)(lVar9 + 0x50);
    do {
      if (*pcVar1 != '\0') {
        ClearExclusiveLocal();
        lVar6 = param_1[3];
        goto joined_r0x00992a6c;
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* try { // try from 009927e8 to 009927fb has its CatchHandler @ 00992ad4 */
    FUN_0098866c(lVar9 + 0x10,lVar6 + 0x140,0,0);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    lVar6 = param_1[3];
  }
joined_r0x00992a6c:
  if (lVar6 == 0) {
    do {
      lVar6 = local_38;
      param_1[3] = -1;
      if (param_1[6] == 0) {
        param_1[3] = 0;
        if (param_1[1] == 0) {
          plVar10 = (long *)param_1[2];
          param_1[1] = -1;
          param_1[2] = 0;
          if (plVar10 == (long *)0x0) {
                    /* try { // try from 00992a48 to 00992a5f has its CatchHandler @ 00992b18 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      ("core missing",0xc,&PTR_s__root__cargo_registry_src_index__00af46b0);
          }
          param_1[1] = 0;
          plVar8 = (long *)plVar10[1];
          if (plVar8 != (long *)0x0) {
            do {
              lVar9 = *plVar8;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 + -1 == 0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 009928c8 to 009928cf has its CatchHandler @ 00992ac4 */
              <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>
              ::drop_slow(plVar10 + 1);
            }
          }
          plVar10[1] = lVar6;
          if ((*(byte *)((long)plVar10 + 0x49) & 1) != 0) {
            return plVar10;
          }
          uVar7 = (ulong)(uint)((int)*(undefined8 *)(plVar10[3] + 0x20) -
                               (int)*(undefined8 *)(plVar10[3] + 0x18));
          if (*plVar10 != 0) {
            uVar7 = uVar7 + 1;
          }
          if (uVar7 < 2) {
            return plVar10;
          }
          lVar6 = *(long *)(*param_1 + 0x10);
          puVar11 = (ulong *)(lVar6 + 0xd8);
          do {
            uVar7 = *puVar11;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar11,0x10);
            if (bVar5) {
              *puVar11 = uVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar7 & 0xffff) != 0) {
            return plVar10;
          }
          if (*(ulong *)(lVar6 + 0xe0) <= uVar7 >> 0x10) {
            return plVar10;
          }
          pcVar1 = (char *)(lVar6 + 0xe8);
          if (*pcVar1 == '\0') {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar5) {
              *pcVar1 = '\x01';
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_00992a78;
          }
          else {
            ClearExclusiveLocal();
LAB_00992a78:
                    /* try { // try from 00992a78 to 00992abb has its CatchHandler @ 00992ac0 */
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow(lVar6 + 0xe8)
            ;
          }
          do {
            uVar7 = *puVar11;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar11,0x10);
            if (bVar5) {
              *puVar11 = uVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (((uVar7 & 0xffff) == 0) && (uVar7 >> 0x10 < *(ulong *)(lVar6 + 0xe0))) {
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar11,0x10);
              if (bVar5) {
                *puVar11 = *puVar11 + 0x10001;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar9 = *(long *)(lVar6 + 0x100);
            bVar5 = lVar9 != 0;
            if (lVar9 != 0) {
              *(long *)(lVar6 + 0x100) = lVar9 + -1;
              puVar11 = *(ulong **)(*(long *)(lVar6 + 0xf8) + (lVar9 + -1) * 8);
            }
            while (*pcVar1 == '\x01') {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar3) {
                *pcVar1 = '\0';
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_009929e4;
            }
          }
          else {
            while (*pcVar1 == '\x01') {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar5) {
                *pcVar1 = '\0';
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                return plVar10;
              }
            }
            bVar5 = false;
          }
          ClearExclusiveLocal();
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                    (lVar6 + 0xe8,0);
LAB_009929e4:
          if (bVar5) {
            if (*(ulong **)(lVar6 + 0x80) <= puVar11) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (puVar11,*(ulong **)(lVar6 + 0x80),
                         &PTR_s__root__cargo_registry_src_index__00af4650);
            }
                    /* try { // try from 009929fc to 00992a07 has its CatchHandler @ 00992ac0 */
            FUN_0097e264(*(long *)(lVar6 + 0x78) + (long)puVar11 * 0x10 + 8,lVar6 + 0x140);
          }
          return plVar10;
        }
                    /* try { // try from 00992a38 to 00992a43 has its CatchHandler @ 00992b98 */
        core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af46c8);
        goto LAB_00992abc;
      }
      lVar6 = param_1[6] + -1;
      param_1[6] = lVar6;
      plVar10 = (long *)(param_1[5] + lVar6 * 0x10);
                    /* try { // try from 0099285c to 0099285f has its CatchHandler @ 00992b04 */
      (**(code **)(*plVar10 + 8))(plVar10[1]);
      uVar7 = param_1[3];
      param_1[3] = uVar7 + 1;
    } while (0xfffffffffffffffe < uVar7);
  }
                    /* try { // try from 00992870 to 0099287b has its CatchHandler @ 00992b98 */
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af37c8);
LAB_00992abc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x992ac0);
  (*pcVar4)();
}


// ===== 00992bcc  FUN_00992bcc =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00992bcc(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 (*pauVar1) [16];
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double __x;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar20;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  bool bVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  undefined8 *puVar33;
  double dVar34;
  double dVar35;
  ushort uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  uint local_84;
  
  *(byte *)(param_2 + 9) = *(byte *)(*(long *)(*param_1 + 0x10) + 0x74) ^ 1;
                    /* try { // try from 00992c10 to 00992c67 has its CatchHandler @ 00993f90 */
  auVar41 = <std::time::std::time::Instant>::now();
  uVar20 = auVar41._8_8_;
  param_2[6] = auVar41._0_8_;
  *(int *)(param_2 + 7) = auVar41._8_4_;
  param_2[4] = 0;
  __x = DAT_002a17c8;
  if ((*(byte *)((long)param_2 + 0x4a) & 1) == 0) {
LAB_00992ea4:
    uVar28 = (int)param_2[8] + 1;
    *(uint *)(param_2 + 8) = uVar28;
    lVar26 = *param_1;
    uVar23 = *(uint *)(*(long *)(lVar26 + 0x10) + 0x70);
    if (uVar23 == 0) {
                    /* try { // try from 00993dd4 to 00993ddf has its CatchHandler @ 00993f78 */
      core::panicking::panic_const::panic_const_rem_by_zero
                (&PTR_s__root__cargo_registry_src_index__00af4680);
      goto LAB_00993e94;
    }
    uVar7 = 0;
    if (uVar23 != 0) {
      uVar7 = uVar28 / uVar23;
    }
    if (uVar28 == uVar7 * uVar23) {
      uVar18 = param_2[4];
      if (uVar18 != 0) {
                    /* try { // try from 00992ed4 to 00992ee3 has its CatchHandler @ 00993f70 */
        auVar41 = <std::time::std::time::Instant>::now();
        auVar42 = <std::time::Instant_as_core::ops::arith::Sub>::sub
                            (auVar41._0_8_,auVar41._8_8_,param_2[6],(int)param_2[7]);
        uVar29 = auVar42._0_8_ * 1000000000;
        auVar41._8_8_ = 0;
        auVar41._0_8_ = auVar42._0_8_;
        lVar26 = SUB168(auVar41 * ZEXT816(1000000000),8);
        uVar27 = auVar42._8_8_ & 0xffffffff;
        if (CARRY8(uVar29,uVar27)) {
          lVar26 = lVar26 + 1;
        }
        dVar34 = (double)FUN_00ab18bc(uVar29 + uVar27,lVar26);
        dVar37 = (double)uVar18;
        dVar35 = pow(__x,dVar37);
        param_2[5] = (long)((1.0 - dVar35) * (dVar34 / dVar37) +
                           (1.0 - (1.0 - dVar35)) * (double)param_2[5]);
      }
      param_2 = (long *)FUN_00992750(param_1,param_2,0);
      lVar26 = *(long *)(*param_1 + 0x10);
      uVar18 = *(ulong *)(*param_1 + 0x18);
      uVar27 = *(ulong *)(lVar26 + 200);
      if (uVar27 <= uVar18) {
                    /* try { // try from 00993e04 to 00993e13 has its CatchHandler @ 00993f78 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar18,uVar27,&PTR_s__root__cargo_registry_src_index__00af45a8);
      }
      if ((*(byte *)((long)param_2 + 0x4a) & 1) == 0) {
        pcVar2 = (char *)(lVar26 + 0xe8);
        if (*pcVar2 == '\0') {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar14) {
            *pcVar2 = '\x01';
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00993ae4;
        }
        else {
          ClearExclusiveLocal();
LAB_00993ae4:
                    /* try { // try from 00993ae4 to 00993b03 has its CatchHandler @ 00993f70 */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                    (lVar26 + 0xe8,uVar27,0xffffffff);
        }
        *(undefined1 *)((long)param_2 + 0x4a) = *(undefined1 *)(lVar26 + 0x118);
        do {
          if (*pcVar2 != '\x01') {
            ClearExclusiveLocal();
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar2,0);
            break;
          }
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar14) {
            *pcVar2 = '\0';
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((*(byte *)((long)param_2 + 0x4b) & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x4b) = 0;
      }
                    /* try { // try from 00992f90 to 00992f93 has its CatchHandler @ 00993f70 */
      auVar41 = <std::time::std::time::Instant>::now();
      uVar20 = auVar41._8_8_;
      param_2[6] = auVar41._0_8_;
      *(int *)(param_2 + 7) = auVar41._8_4_;
      param_2[4] = 0;
      lVar26 = *param_1;
    }
    uVar28 = *(uint *)((long)param_2 + 0x44);
    if (uVar28 == 0) {
                    /* try { // try from 00993de4 to 00993dff has its CatchHandler @ 00993f90 */
      core::panicking::panic_const::panic_const_rem_by_zero
                (&PTR_s__root__cargo_registry_src_index__00af45f0);
LAB_00993e94:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x993e98);
      (*pcVar13)();
    }
    uVar23 = 0;
    if (uVar28 != 0) {
      uVar23 = *(uint *)(param_2 + 8) / uVar28;
    }
    if (*(uint *)(param_2 + 8) == uVar23 * uVar28) {
      lVar26 = *(long *)(lVar26 + 0x10);
      if (*(int *)(lVar26 + 0x10) == 1) {
        uVar23 = *(uint *)(lVar26 + 0x14);
        uVar6 = uVar28 - uVar23;
        uVar7 = -uVar6;
        if (uVar23 <= uVar28 && uVar6 != 0) {
          uVar7 = uVar6;
        }
      }
      else {
        uVar23 = (uint)(200000.0 / (double)param_2[5]);
        if (uVar23 < 3) {
          uVar23 = 2;
        }
        if (0x7e < uVar23) {
          uVar23 = 0x7f;
        }
        uVar6 = uVar28 - uVar23;
        uVar7 = -uVar6;
        if (uVar23 <= uVar28 && uVar6 != 0) {
          uVar7 = uVar6;
        }
      }
      if (2 < uVar7) {
        *(uint *)((long)param_2 + 0x44) = uVar23;
      }
      if (*(long *)(lVar26 + 0xd0) != 0) {
        pcVar2 = (char *)(lVar26 + 0xe8);
        if (*pcVar2 == '\0') {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar14) {
            *pcVar2 = '\x01';
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00993abc;
        }
        else {
          ClearExclusiveLocal();
LAB_00993abc:
                    /* try { // try from 00993abc to 00993adb has its CatchHandler @ 00993f44 */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                    (lVar26 + 0xe8,uVar20,0xffffffff);
        }
        lVar32 = *(long *)(lVar26 + 0xd0);
        *(long *)(lVar26 + 0xd0) = lVar32 - (ulong)(lVar32 != 0);
        if (lVar32 == 0) {
          puVar33 = (undefined8 *)0x0;
        }
        else {
          puVar33 = *(undefined8 **)(lVar26 + 0x108);
          if (puVar33 != (undefined8 *)0x0) {
            lVar32 = puVar33[1];
            *(long *)(lVar26 + 0x108) = lVar32;
            if (lVar32 == 0) {
              *(undefined8 *)(lVar26 + 0x110) = 0;
            }
            puVar33[1] = 0;
          }
        }
        do {
          if (*pcVar2 != '\x01') {
            ClearExclusiveLocal();
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar2,0);
            break;
          }
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar14) {
            *pcVar2 = '\0';
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar33 != (undefined8 *)0x0) goto LAB_009932dc;
      }
      puVar33 = (undefined8 *)*param_2;
      *param_2 = 0;
      if (puVar33 != (undefined8 *)0x0) goto LAB_009932dc;
      lVar32 = param_2[3];
      puVar16 = (ulong *)(lVar32 + 0x18);
      uVar18 = *puVar16;
      local_90 = (long *)CONCAT44(local_90._4_4_,(int)(uVar18 >> 0x20));
      if (*(int *)(lVar32 + 0x20) != (int)uVar18) {
        uVar27 = uVar18 & 0xffffffff;
        do {
          uVar28 = (uint)uVar27 + 1;
          uVar23 = (uint)(uVar18 >> 0x20);
          local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,uVar28);
          if (uVar23 == (uint)uVar27) {
            uVar29 = CONCAT44(uVar28,uVar28);
          }
          else {
            if (uVar28 == uVar23) {
LAB_00993d6c:
                    /* try { // try from 00993d74 to 00993d87 has its CatchHandler @ 00993fa4 */
                    /* WARNING: Subroutine does not return */
              core::panicking::assert_failed<u32,u32>
                        (1,&local_90,&local_b8,0,param_5,
                         &PTR_s__root__cargo_registry_src_index__00af51b8);
            }
            uVar29 = uVar18 & 0xffffffff00000000 | (ulong)uVar28;
          }
          while (uVar27 = *puVar16, uVar27 == uVar18) {
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar14) {
              *puVar16 = uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0099328c;
          }
          ClearExclusiveLocal();
          local_90 = (long *)CONCAT44(local_90._4_4_,(int)(uVar27 >> 0x20));
          uVar18 = uVar27;
        } while (*(int *)(lVar32 + 0x20) != (int)uVar27);
      }
LAB_00993300:
      uVar18 = param_2[4];
      if (uVar18 != 0) {
                    /* try { // try from 0099330c to 0099331b has its CatchHandler @ 00993f44 */
        auVar41 = <std::time::std::time::Instant>::now();
        auVar41 = <std::time::Instant_as_core::ops::arith::Sub>::sub
                            (auVar41._0_8_,auVar41._8_8_,param_2[6],(int)param_2[7]);
        uVar29 = auVar41._0_8_ * 1000000000;
        auVar39._8_8_ = 0;
        auVar39._0_8_ = auVar41._0_8_;
        lVar26 = SUB168(auVar39 * ZEXT816(1000000000),8);
        uVar27 = auVar41._8_8_ & 0xffffffff;
        if (CARRY8(uVar29,uVar27)) {
          lVar26 = lVar26 + 1;
        }
        dVar34 = (double)FUN_00ab18bc(uVar29 + uVar27,lVar26);
        dVar37 = (double)uVar18;
        dVar35 = pow(__x,dVar37);
        param_2[5] = (long)((1.0 - dVar35) * (dVar34 / dVar37) +
                           (1.0 - (1.0 - dVar35)) * (double)param_2[5]);
      }
      lVar26 = *param_1;
      if ((*(byte *)((long)param_2 + 0x49) & 1) != 0) {
LAB_00993398:
        uVar23 = *(uint *)((long)param_2 + 0x14);
        lVar32 = *(long *)(lVar26 + 0x10);
        uVar28 = *(uint *)(param_2 + 2) ^ *(uint *)(param_2 + 2) << 0x11;
        uVar18 = *(ulong *)(lVar32 + 0x80);
        uVar28 = uVar23 >> 0x10 ^ uVar28 >> 7 ^ uVar23 ^ uVar28;
        *(uint *)(param_2 + 2) = uVar23;
        *(uint *)((long)param_2 + 0x14) = uVar28;
        if (uVar18 != 0) {
          uVar27 = (uVar18 & 0xffffffff) * (ulong)(uVar28 + uVar23) >> 0x20;
          uVar29 = uVar18;
          do {
            uVar17 = 0;
            if (uVar18 != 0) {
              uVar17 = uVar27 / uVar18;
            }
            uVar17 = uVar27 - uVar17 * uVar18;
            if (uVar17 != *(ulong *)(lVar26 + 0x18)) {
              uVar19 = *(ulong *)(*(long *)(lVar26 + 0x10) + 0x80);
              if (uVar19 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar17,uVar19,&PTR_s__root__cargo_registry_src_index__00af4590);
              }
                    /* try { // try from 0099340c to 00993417 has its CatchHandler @ 00993f74 */
              puVar33 = (undefined8 *)
                        FUN_009b1138(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + uVar17 * 0x10,
                                     param_2 + 3,param_2 + 4);
              if (puVar33 != (undefined8 *)0x0) goto LAB_009934a4;
            }
            uVar29 = uVar29 - 1;
            uVar27 = uVar27 + 1;
          } while (uVar29 != 0);
          lVar32 = *(long *)(lVar26 + 0x10);
        }
        if (*(long *)(lVar32 + 0xd0) == 0) goto LAB_009934d4;
        pcVar2 = (char *)(lVar32 + 0xe8);
        if (*pcVar2 == '\0') {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar14) {
            *pcVar2 = '\x01';
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00993b34;
        }
        else {
          ClearExclusiveLocal();
LAB_00993b34:
                    /* try { // try from 00993b34 to 00993b5b has its CatchHandler @ 00993f44 */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow(lVar32 + 0xe8);
        }
        lVar26 = *(long *)(lVar32 + 0xd0);
        *(long *)(lVar32 + 0xd0) = lVar26 - (ulong)(lVar26 != 0);
        if (lVar26 == 0) {
          puVar33 = (undefined8 *)0x0;
        }
        else {
          puVar33 = *(undefined8 **)(lVar32 + 0x108);
          if (puVar33 != (undefined8 *)0x0) {
            lVar26 = puVar33[1];
            *(long *)(lVar32 + 0x108) = lVar26;
            if (lVar26 == 0) {
              *(undefined8 *)(lVar32 + 0x110) = 0;
            }
            puVar33[1] = 0;
          }
        }
        do {
          if (*pcVar2 != '\x01') {
            ClearExclusiveLocal();
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar2,0);
            break;
          }
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar14) {
            *pcVar2 = '\0';
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar33 == (undefined8 *)0x0) goto LAB_009934d4;
LAB_009934a4:
        local_b8 = puVar33;
                    /* try { // try from 009934ac to 009934af has its CatchHandler @ 00993ed4 */
        auVar43 = <std::time::std::time::Instant>::now();
        *(undefined1 (*) [12])(param_2 + 6) = auVar43;
        param_2[4] = 0;
        auVar42 = FUN_00994028(param_1,puVar33,param_2);
        lVar26 = auVar42._0_8_;
        goto joined_r0x009932ec;
      }
      puVar16 = (ulong *)(*(long *)(lVar26 + 0x10) + 0xd8);
      if ((*puVar16 & 0xffff) << 1 < *(ulong *)(*(long *)(lVar26 + 0x10) + 0xe0)) {
        do {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar14) {
            *puVar16 = *puVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(undefined1 *)((long)param_2 + 0x49) = 1;
        goto LAB_00993398;
      }
      *(undefined1 *)((long)param_2 + 0x49) = 0;
LAB_009934d4:
      if (0x7ffffffffffffffe < (ulong)param_1[3]) {
                    /* try { // try from 00993dc4 to 00993dcf has its CatchHandler @ 00993fa4 */
                    /* WARNING: Subroutine does not return */
        core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00af37f8)
        ;
      }
      if (param_1[6] == 0) {
        lVar32 = *param_1;
        lVar26 = *(long *)(*(long *)(lVar32 + 0x10) + 0x20);
        if (lVar26 != 0) {
          lVar32 = *(long *)(*(long *)(lVar32 + 0x10) + 0x28);
                    /* try { // try from 0099352c to 0099356f has its CatchHandler @ 00993ed0 */
          (**(code **)(lVar32 + 0x28))
                    (lVar26 + (*(long *)(lVar32 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
          lVar32 = *param_1;
        }
        if (((*param_2 == 0) &&
            ((int)*(undefined8 *)(param_2[3] + 0x20) == (int)*(undefined8 *)(param_2[3] + 0x18))) &&
           ((*(byte *)((long)param_2 + 0x4b) & 1) == 0)) {
                    /* try { // try from 009935b8 to 00993777 has its CatchHandler @ 00993ed0 */
          iVar15 = FUN_009a27e4(*(long *)(lVar32 + 0x10) + 0xd8,*(long *)(lVar32 + 0x10) + 0x10,
                                *(undefined8 *)(lVar32 + 0x18),*(undefined1 *)((long)param_2 + 0x49)
                               );
          *(undefined1 *)((long)param_2 + 0x49) = 0;
          if (iVar15 == 0) goto LAB_009937a8;
          lVar26 = *(long *)(lVar32 + 0x10);
          if (*(long *)(lVar26 + 0x80) == 0) {
LAB_00993604:
            if (*(long *)(lVar26 + 0xd0) != 0) {
              puVar16 = (ulong *)(lVar26 + 0xd8);
              do {
                uVar18 = *puVar16;
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                if (bVar14) {
                  *puVar16 = uVar18;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (((uVar18 & 0xffff) == 0) && (uVar18 >> 0x10 < *(ulong *)(lVar26 + 0xe0))) {
                pcVar2 = (char *)(lVar26 + 0xe8);
                if (*pcVar2 == '\0') {
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar14) {
                    *pcVar2 = '\x01';
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_00993b90;
                }
                else {
                  ClearExclusiveLocal();
LAB_00993b90:
                  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                            (lVar26 + 0xe8,extraout_x1,0xffffffff);
                }
                do {
                  uVar18 = *puVar16;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                  if (bVar14) {
                    *puVar16 = uVar18;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (((uVar18 & 0xffff) == 0) && (uVar18 >> 0x10 < *(ulong *)(lVar26 + 0xe0))) {
                  do {
                    cVar5 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                    if (bVar14) {
                      *puVar16 = *puVar16 + 0x10001;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  lVar32 = *(long *)(lVar26 + 0x100);
                  bVar14 = lVar32 != 0;
                  if (lVar32 != 0) {
                    *(long *)(lVar26 + 0x100) = lVar32 + -1;
                    puVar16 = *(ulong **)(*(long *)(lVar26 + 0xf8) + (lVar32 + -1) * 8);
                  }
                  do {
                    if (*pcVar2 != '\x01') goto LAB_00993ba4;
                    cVar5 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                    if (bVar21) {
                      *pcVar2 = '\0';
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  goto LAB_00993754;
                }
                do {
                  if (*pcVar2 != '\x01') {
                    bVar14 = false;
LAB_00993ba4:
                    ClearExclusiveLocal();
                    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                              (lVar26 + 0xe8,0);
                    goto LAB_00993754;
                  }
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar14) {
                    *pcVar2 = '\0';
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
            }
          }
          else {
            lVar32 = *(long *)(lVar26 + 0x80) << 4;
            plVar22 = *(long **)(lVar26 + 0x78);
LAB_009935e0:
            if ((int)*(undefined8 *)(*plVar22 + 0x20) == (int)*(undefined8 *)(*plVar22 + 0x18))
            goto code_r0x009935fc;
            puVar16 = (ulong *)(lVar26 + 0xd8);
            do {
              uVar18 = *puVar16;
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
              if (bVar14) {
                *puVar16 = uVar18;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((uVar18 & 0xffff) != 0) || (*(ulong *)(lVar26 + 0xe0) <= uVar18 >> 0x10))
            goto LAB_009937a8;
            pcVar2 = (char *)(lVar26 + 0xe8);
            if (*pcVar2 == '\0') {
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar14) {
                *pcVar2 = '\x01';
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_00993bbc;
            }
            else {
              ClearExclusiveLocal();
LAB_00993bbc:
              <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                        (lVar26 + 0xe8,extraout_x1,0xffffffff);
            }
            do {
              uVar18 = *puVar16;
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
              if (bVar14) {
                *puVar16 = uVar18;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((uVar18 & 0xffff) != 0) || (*(ulong *)(lVar26 + 0xe0) <= uVar18 >> 0x10)) {
              do {
                if (*pcVar2 != '\x01') {
                  bVar14 = false;
                  goto LAB_00993bd0;
                }
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar14) {
                  *pcVar2 = '\0';
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_009937a8;
            }
            do {
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
              if (bVar14) {
                *puVar16 = *puVar16 + 0x10001;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar32 = *(long *)(lVar26 + 0x100);
            bVar14 = lVar32 != 0;
            if (lVar32 != 0) {
              *(long *)(lVar26 + 0x100) = lVar32 + -1;
              puVar16 = *(ulong **)(*(long *)(lVar26 + 0xf8) + (lVar32 + -1) * 8);
            }
            do {
              if (*pcVar2 != '\x01') {
LAB_00993bd0:
                ClearExclusiveLocal();
                <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                          (lVar26 + 0xe8,0);
                break;
              }
              cVar5 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar21) {
                *pcVar2 = '\0';
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00993754:
            if (bVar14) {
              if (*(ulong **)(lVar26 + 0x80) <= puVar16) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (puVar16,*(ulong **)(lVar26 + 0x80),
                           &PTR_s__root__cargo_registry_src_index__00af4650);
              }
              FUN_0097e264(*(long *)(lVar26 + 0x78) + (long)puVar16 * 0x10 + 8,lVar26 + 0x140);
            }
          }
LAB_009937a8:
          do {
            if (((*(byte *)((long)param_2 + 0x4a) & 1) != 0) ||
               ((*(byte *)((long)param_2 + 0x4b) & 1) != 0)) goto LAB_00993540;
            uVar18 = *(ulong *)(*param_1 + 0x18);
            uVar27 = *(ulong *)(*(long *)(*param_1 + 0x10) + 200);
            if (uVar27 <= uVar18) {
                    /* try { // try from 00993e60 to 00993e93 has its CatchHandler @ 00993ee4 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar18,uVar27,&PTR_s__root__cargo_registry_src_index__00af46f8);
            }
            param_2 = (long *)FUN_00992750(param_1,param_2,0xffffffff);
            lVar26 = *(long *)(*param_1 + 0x10);
            uVar18 = *(ulong *)(*param_1 + 0x18);
            uVar27 = *(ulong *)(lVar26 + 200);
            if (uVar27 <= uVar18) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar18,uVar27,&PTR_s__root__cargo_registry_src_index__00af45a8);
            }
            if ((*(byte *)((long)param_2 + 0x4a) & 1) == 0) {
              pcVar2 = (char *)(lVar26 + 0xe8);
              if (*pcVar2 == '\0') {
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar14) {
                  *pcVar2 = '\x01';
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 != '\0') goto LAB_009939e8;
              }
              else {
                ClearExclusiveLocal();
LAB_009939e8:
                <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                          (lVar26 + 0xe8,uVar27,0xffffffff);
                uVar27 = extraout_x1_00;
              }
              *(undefined1 *)((long)param_2 + 0x4a) = *(undefined1 *)(lVar26 + 0x118);
              do {
                if (*pcVar2 != '\x01') {
                  ClearExclusiveLocal();
                  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                            (pcVar2,0);
                  uVar27 = extraout_x1_01;
                  break;
                }
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar14) {
                  *pcVar2 = '\0';
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if ((*(byte *)((long)param_2 + 0x4b) & 1) == 0) {
              *(undefined1 *)((long)param_2 + 0x4b) = 0;
            }
            lVar26 = *param_1;
            if ((*param_2 != 0) ||
               ((int)*(undefined8 *)(param_2[3] + 0x20) != (int)*(undefined8 *)(param_2[3] + 0x18)))
            {
              lVar32 = *(long *)(lVar26 + 0x10);
              lVar26 = *(long *)(lVar26 + 0x18);
              pcVar2 = (char *)(lVar32 + 0xe8);
              if (*pcVar2 == '\0') {
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar14) {
                  *pcVar2 = '\x01';
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 != '\0') goto LAB_00993b64;
              }
              else {
                ClearExclusiveLocal();
LAB_00993b64:
                    /* try { // try from 00993b64 to 00993bdf has its CatchHandler @ 00993ed0 */
                <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                          (lVar32 + 0xe8,uVar27,0xffffffff);
              }
              lVar24 = 0;
              plVar22 = (long *)(lVar32 + 0xd8);
              goto LAB_00993a34;
            }
            lVar32 = *(long *)(lVar26 + 0x10);
            lVar26 = *(long *)(lVar26 + 0x18);
            pcVar2 = (char *)(lVar32 + 0xe8);
            if (*pcVar2 == '\0') {
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar14) {
                *pcVar2 = '\x01';
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_009939c0;
            }
            else {
              ClearExclusiveLocal();
LAB_009939c0:
                    /* try { // try from 009939c0 to 00993a07 has its CatchHandler @ 00993ea8 */
              <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                        (lVar32 + 0xe8,uVar27,0xffffffff);
            }
            pauVar25 = *(undefined1 (**) [16])(lVar32 + 0xf8);
            uVar18 = *(ulong *)(lVar32 + 0x100) & 0xffffffffffffff8;
            plVar22 = (long *)(*pauVar25 + uVar18 * 8);
            uVar18 = uVar18 ^ 0xfffffffffffffff8;
            do {
              uVar18 = uVar18 + 8;
              if (uVar18 == 0) {
                uVar18 = *(ulong *)(lVar32 + 0x100) & 7;
                if (uVar18 == 0) {
                  bVar14 = false;
                  goto LAB_009938fc;
                }
                if (*plVar22 != lVar26) {
                  if (uVar18 == 1) {
                    bVar14 = false;
                    goto LAB_009938fc;
                  }
                  if (plVar22[1] != lVar26) {
                    if (uVar18 == 2) {
                      bVar14 = false;
                      goto LAB_009938fc;
                    }
                    if (plVar22[2] != lVar26) {
                      if (uVar18 == 3) {
                        bVar14 = false;
                        goto LAB_009938fc;
                      }
                      if (plVar22[3] != lVar26) {
                        if (uVar18 == 4) {
                          bVar14 = false;
                          goto LAB_009938fc;
                        }
                        if (plVar22[4] != lVar26) {
                          if (uVar18 == 5) {
                            bVar14 = false;
                            goto LAB_009938fc;
                          }
                          if (plVar22[5] != lVar26) {
                            if (uVar18 == 6) {
                              bVar14 = false;
                              goto LAB_009938fc;
                            }
                            if (plVar22[6] != lVar26) {
                              bVar14 = uVar18 != 7;
                              goto LAB_009938fc;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                break;
              }
              auVar41 = *pauVar25;
              pauVar8 = pauVar25 + 1;
              pauVar1 = pauVar25 + 2;
              pauVar9 = pauVar25 + 3;
              pauVar25 = pauVar25 + 4;
              auVar40._8_8_ = lVar26;
              auVar40._0_8_ = lVar26;
              auVar42 = NEON_cmeq(*pauVar8,auVar40,8);
              auVar10._8_8_ = lVar26;
              auVar10._0_8_ = lVar26;
              auVar41 = NEON_cmeq(auVar41,auVar10,8);
              auVar11._8_8_ = lVar26;
              auVar11._0_8_ = lVar26;
              auVar40 = NEON_cmeq(*pauVar1,auVar11,8);
              auVar12._8_8_ = lVar26;
              auVar12._0_8_ = lVar26;
              auVar39 = NEON_cmeq(*pauVar9,auVar12,8);
              auVar38._2_2_ = auVar41._8_2_;
              auVar38._0_2_ = auVar41._0_2_;
              auVar38._4_2_ = auVar42._0_2_;
              auVar38._6_2_ = auVar42._8_2_;
              auVar38._8_2_ = auVar40._0_2_;
              auVar38._10_2_ = auVar40._8_2_;
              auVar38._12_2_ = auVar39._0_2_;
              auVar38._14_2_ = auVar39._8_2_;
              uVar36 = NEON_umaxv(auVar38,2);
            } while ((uVar36 & 1) == 0);
            bVar14 = true;
LAB_009938fc:
            do {
              if (*pcVar2 != '\x01') {
                ClearExclusiveLocal();
                <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                          (pcVar2,0);
                break;
              }
              cVar5 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar21) {
                *pcVar2 = '\0';
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          } while (bVar14);
          *(undefined1 *)((long)param_2 + 0x49) = 1;
        }
        goto LAB_00993540;
      }
      param_2 = (long *)FUN_00992750(param_1,param_2,0);
      goto LAB_00993570;
    }
    puVar33 = (undefined8 *)*param_2;
    *param_2 = 0;
    if (puVar33 == (undefined8 *)0x0) {
      plVar22 = param_2 + 3;
      lVar32 = *plVar22;
      puVar16 = (ulong *)(lVar32 + 0x18);
      uVar18 = *puVar16;
      local_90 = (long *)CONCAT44(local_90._4_4_,(int)(uVar18 >> 0x20));
      if (*(int *)(lVar32 + 0x20) != (int)uVar18) {
        uVar27 = uVar18 & 0xffffffff;
        do {
          uVar28 = (uint)uVar27 + 1;
          uVar23 = (uint)(uVar18 >> 0x20);
          local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,uVar28);
          if (uVar23 == (uint)uVar27) {
            uVar29 = CONCAT44(uVar28,uVar28);
          }
          else {
            if (uVar28 == uVar23) goto LAB_00993d6c;
            uVar29 = uVar18 & 0xffffffff00000000 | (ulong)uVar28;
          }
          while (uVar27 = *puVar16, uVar27 == uVar18) {
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar14) {
              *puVar16 = uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0099328c;
          }
          ClearExclusiveLocal();
          local_90 = (long *)CONCAT44(local_90._4_4_,(int)(uVar27 >> 0x20));
          uVar18 = uVar27;
        } while (*(int *)(lVar32 + 0x20) != (int)uVar27);
      }
      if (*(long *)(*(long *)(lVar26 + 0x10) + 0xd0) != 0) {
        lVar32 = *(long *)(lVar26 + 0x10);
        uVar18 = *(ulong *)(lVar32 + 0x80);
        if (uVar18 == 0) {
                    /* try { // try from 00993e18 to 00993e23 has its CatchHandler @ 00993ef8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_const::panic_const_div_by_zero
                    (&PTR_s__root__cargo_registry_src_index__00af4608);
        }
        uVar27 = 0;
        if (uVar18 != 0) {
          uVar27 = *(ulong *)(*(long *)(lVar26 + 0x10) + 0xd0) / uVar18;
        }
        pcVar2 = (char *)(lVar32 + 0xe8);
        uVar18 = 0x100 - (*(long *)(*plVar22 + 0x20) - (*(ulong *)(*plVar22 + 0x18) >> 0x20) &
                         0xffffffff);
        if (uVar27 + 1 <= uVar18) {
          uVar18 = uVar27 + 1;
        }
        if (uVar18 < 2) {
          uVar18 = 1;
        }
        if (*pcVar2 == '\0') {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar14) {
            *pcVar2 = '\x01';
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00993b0c;
        }
        else {
          ClearExclusiveLocal();
LAB_00993b0c:
                    /* try { // try from 00993b0c to 00993b2b has its CatchHandler @ 00993eac */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                    (lVar32 + 0xe8,uVar20,0xffffffff);
        }
        puVar16 = (ulong *)(*(long *)(lVar26 + 0x10) + 0xd0);
        uVar27 = *puVar16;
        if (uVar27 <= uVar18) {
          uVar18 = uVar27;
        }
        if (0x7f < uVar18) {
          uVar18 = 0x80;
        }
        *puVar16 = uVar27 - uVar18;
        if (uVar27 == 0) {
          local_b8 = (undefined8 *)0x0;
        }
        else {
          local_b8 = *(undefined8 **)(lVar32 + 0x108);
          if (local_b8 != (undefined8 *)0x0) {
            lVar26 = local_b8[1];
            *(long *)(lVar32 + 0x108) = lVar26;
            if (lVar26 == 0) {
              *(undefined8 *)(lVar32 + 0x110) = 0;
            }
            local_b8[1] = 0;
          }
          uVar18 = uVar18 - 1;
        }
        puVar33 = local_b8;
                    /* try { // try from 009932b8 to 009932c3 has its CatchHandler @ 00993efc */
        FUN_009acee0(plVar22,lVar32 + 0x108,uVar18);
        do {
          if (*pcVar2 != '\x01') {
            ClearExclusiveLocal();
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar2,0);
            break;
          }
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar14) {
            *pcVar2 = '\0';
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar33 != (undefined8 *)0x0) goto LAB_009932dc;
      }
      goto LAB_00993300;
    }
LAB_009932dc:
    auVar42 = FUN_00994028(param_1,puVar33,param_2);
    lVar26 = auVar42._0_8_;
joined_r0x009932ec:
    if (lVar26 == 0) {
      return 0;
    }
    goto LAB_009932f0;
  }
LAB_00992c28:
  uVar23 = *(uint *)((long)param_2 + 0x14);
  lVar32 = *param_1;
  uVar28 = *(uint *)(param_2 + 2) ^ *(uint *)(param_2 + 2) << 0x11;
  lVar26 = *(long *)(lVar32 + 0x10);
  iVar15 = *(int *)(lVar26 + 0xa8);
  uVar28 = uVar23 >> 0x10 ^ uVar28 >> 7 ^ uVar23 ^ uVar28;
  *(uint *)(param_2 + 2) = uVar23;
  *(uint *)((long)param_2 + 0x14) = uVar28;
  FUN_00988dd4(lVar26 + 0x88,(ulong)(iVar15 + 1) * (ulong)(uVar28 + uVar23) >> 0x20);
  uVar18 = *(ulong *)(*(long *)(lVar32 + 0x10) + 200);
  if (uVar18 <= *(ulong *)(lVar32 + 0x18)) {
                    /* try { // try from 00993e28 to 00993e33 has its CatchHandler @ 00993f90 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (*(ulong *)(lVar32 + 0x18),uVar18,&PTR_s__root__cargo_registry_src_index__00af45c0);
  }
  lVar26 = *(long *)(*param_1 + 0x10);
  pcVar2 = (char *)(lVar26 + 0x120);
  if (*pcVar2 == '\0') {
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar14) {
      *pcVar2 = '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00992c98;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 00993e3c to 00993e47 has its CatchHandler @ 00993e98 */
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar26 + 0x120,uVar18,0xffffffff);
LAB_00992c98:
  lVar32 = *(long *)(lVar26 + 0x138);
  if (lVar32 == *(long *)(lVar26 + 0x128)) {
                    /* try { // try from 00992cac to 00992cb3 has its CatchHandler @ 00993ebc */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(lVar26 + 0x128);
  }
  lVar24 = lVar32 + 1;
  *(long **)(*(long *)(lVar26 + 0x130) + lVar32 * 8) = param_2;
  *(long *)(lVar26 + 0x138) = lVar24;
  if (lVar24 == *(long *)(lVar26 + 0x80)) {
    local_b8 = *(undefined8 **)(lVar26 + 0x130);
    *(undefined8 *)(lVar26 + 0x138) = 0;
    puStack_b0 = local_b8 + lVar24;
    local_98 = 0;
    local_a8 = lVar26 + 0x128;
    lStack_a0 = lVar24;
    if (lVar24 != 0) {
      do {
        puVar33 = local_b8 + 1;
        plVar31 = (long *)*local_b8;
        plVar22 = (long *)plVar31[1];
        plVar31[1] = 0;
        local_b8 = puVar33;
        if (plVar22 == (long *)0x0) {
                    /* try { // try from 00993d8c to 00993da3 has its CatchHandler @ 00993f9c */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    ("park missing",0xc,&PTR_s__root__cargo_registry_src_index__00af45d8);
        }
        while( true ) {
          local_90 = plVar22;
          plVar22 = local_90;
          puVar16 = (ulong *)*plVar31;
          *plVar31 = 0;
          if (puVar16 == (ulong *)0x0) break;
LAB_00992dc0:
          do {
            uVar18 = *puVar16;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar14) {
              *puVar16 = uVar18 - 0x40;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar18 = uVar18 >> 6;
          if (uVar18 == 1) {
                    /* try { // try from 00992d18 to 00992d1b has its CatchHandler @ 00993f8c */
            (**(code **)(puVar16[2] + 0x10))();
            plVar22 = local_90;
          }
          else if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic
                      ("assertion failed: prev.ref_count() >= 1",0x27,
                       &PTR_s__root__cargo_registry_src_index__00af3f10);
          }
        }
        lVar32 = plVar31[3];
        puVar16 = (ulong *)(lVar32 + 0x18);
        uVar18 = *puVar16;
        local_88 = (undefined4)(uVar18 >> 0x20);
        if (*(int *)(lVar32 + 0x20) != (int)uVar18) {
          uVar27 = uVar18 & 0xffffffff;
          do {
            local_84 = (uint)uVar27 + 1;
            uVar28 = (uint)(uVar18 >> 0x20);
            if (uVar28 == (uint)uVar27) {
              uVar29 = CONCAT44(local_84,local_84);
            }
            else {
              if (local_84 == uVar28) {
                    /* try { // try from 00993d30 to 00993d67 has its CatchHandler @ 00993fb8 */
                    /* WARNING: Subroutine does not return */
                core::panicking::assert_failed<u32,u32>
                          (1,&local_88,&local_84,0,param_5,
                           &PTR_s__root__cargo_registry_src_index__00af51b8);
              }
              uVar29 = uVar18 & 0xffffffff00000000 | (ulong)local_84;
            }
            while (uVar27 = *puVar16, uVar27 == uVar18) {
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
              if (bVar14) {
                *puVar16 = uVar29;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                puVar16 = *(ulong **)(*(long *)(lVar32 + 0x10) + (uVar18 & 0xff) * 8);
                goto LAB_00992dc0;
              }
            }
            ClearExclusiveLocal();
            local_88 = (undefined4)(uVar27 >> 0x20);
            uVar18 = uVar27;
          } while (*(int *)(lVar32 + 0x20) != (int)uVar27);
        }
        lVar32 = local_90[2];
        pcVar3 = (char *)(lVar32 + 0x50);
        do {
          if (*pcVar3 != '\0') {
            ClearExclusiveLocal();
            lVar32 = local_90[4];
            goto joined_r0x00992e6c;
          }
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar14) {
            *pcVar3 = '\x01';
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
                    /* try { // try from 00992e00 to 00992e0b has its CatchHandler @ 00993f4c */
        FUN_00988c84(lVar32 + 0x10,lVar26 + 0x140);
        pcVar3[0] = '\0';
        pcVar3[1] = '\0';
        pcVar3[2] = '\0';
        pcVar3[3] = '\0';
        lVar32 = plVar22[4];
joined_r0x00992e6c:
        if (lVar32 != 0) {
                    /* try { // try from 00992e70 to 00992e77 has its CatchHandler @ 00993eb0 */
          <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_all_slow(plVar22 + 4);
        }
        do {
          lVar32 = *local_90;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(local_90,0x10);
          if (bVar14) {
            *local_90 = lVar32 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar32 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 00992e34 to 00992e3b has its CatchHandler @ 00993f48 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>
          ::drop_slow(&local_90);
        }
                    /* try { // try from 00992e3c to 00992e43 has its CatchHandler @ 00993f58 */
        FUN_0099143c(plVar31);
        free(plVar31);
      } while (local_b8 != puStack_b0);
    }
                    /* try { // try from 00993bfc to 00993c03 has its CatchHandler @ 00993eb4 */
    FUN_009c4698(&local_b8);
    if (*(long *)(lVar26 + 0xd0) != 0) {
      pcVar3 = (char *)(lVar26 + 0xe8);
      uVar20 = extraout_x1_02;
      do {
        if (*pcVar3 == '\0') {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar14) {
            *pcVar3 = '\x01';
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00993cc4;
        }
        else {
          ClearExclusiveLocal();
LAB_00993cc4:
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                    (lVar26 + 0xe8,uVar20,0xffffffff);
          uVar20 = extraout_x1_04;
        }
        lVar32 = *(long *)(lVar26 + 0xd0);
        *(long *)(lVar26 + 0xd0) = lVar32 - (ulong)(lVar32 != 0);
        if (lVar32 == 0) {
          puVar16 = (ulong *)0x0;
        }
        else {
          puVar16 = *(ulong **)(lVar26 + 0x108);
          if (puVar16 != (ulong *)0x0) {
            uVar18 = puVar16[1];
            *(ulong *)(lVar26 + 0x108) = uVar18;
            if (uVar18 == 0) {
              *(undefined8 *)(lVar26 + 0x110) = 0;
            }
            puVar16[1] = 0;
          }
        }
        do {
          if (*pcVar3 != '\x01') {
            ClearExclusiveLocal();
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                      (lVar26 + 0xe8,0);
            uVar20 = extraout_x1_05;
            break;
          }
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar14) {
            *pcVar3 = '\0';
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar16 == (ulong *)0x0) break;
        do {
          uVar18 = *puVar16;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar14) {
            *puVar16 = uVar18 - 0x40;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar18 = uVar18 >> 6;
        if (uVar18 == 1) {
                    /* try { // try from 00993c24 to 00993ceb has its CatchHandler @ 00993f3c */
          (**(code **)(puVar16[2] + 0x10))();
          uVar20 = extraout_x1_03;
        }
        else if (uVar18 == 0) {
                    /* try { // try from 00993da8 to 00993dbf has its CatchHandler @ 00993f94 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
      } while (*(long *)(lVar26 + 0xd0) != 0);
    }
    do {
      if (*pcVar2 != '\x01') {
LAB_00993e4c:
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar2,0);
        return 0;
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar14) {
        *pcVar2 = '\0';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    do {
      if (*pcVar2 != '\x01') goto LAB_00993e4c;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar14) {
        *pcVar2 = '\0';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return 0;
LAB_0099328c:
  auVar42 = FUN_00994028(param_1,*(undefined8 *)(*(long *)(lVar32 + 0x10) + (uVar18 & 0xff) * 8),
                         param_2);
  if (auVar42._0_8_ == 0) {
    return 0;
  }
LAB_009932f0:
  bVar4 = *(byte *)(auVar42._0_8_ + 0x4a);
  goto joined_r0x00993584;
code_r0x009935fc:
  lVar32 = lVar32 + -0x10;
  plVar22 = plVar22 + 2;
  if (lVar32 == 0) goto LAB_00993604;
  goto LAB_009935e0;
  while( true ) {
    lVar30 = *(long *)(lVar32 + 0xf8);
    plVar31 = (long *)(lVar30 + lVar24);
    lVar24 = lVar24 + 8;
    if (*plVar31 == lVar26) break;
LAB_00993a34:
    bVar14 = *(long *)(lVar32 + 0x100) * 8 - lVar24 == 0;
    if (bVar14) goto LAB_00993a94;
  }
  lVar26 = *(long *)(lVar32 + 0x100) + -1;
  *(undefined8 *)(lVar30 + lVar24 + -8) = *(undefined8 *)(lVar30 + lVar26 * 8);
  *(long *)(lVar32 + 0x100) = lVar26;
  do {
    cVar5 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar21) {
      *plVar22 = *plVar22 + 0x10000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*pcVar2 != '\x01') goto LAB_00993b74;
    cVar5 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar21) {
      *pcVar2 = '\0';
      cVar5 = ExclusiveMonitorsStatus();
    }
    bVar21 = false;
  } while (cVar5 != '\0');
LAB_00993aa8:
  *(bool *)((long)param_2 + 0x49) = bVar21;
LAB_00993540:
  lVar26 = *(long *)(*(long *)(*param_1 + 0x10) + 0x30);
  if (lVar26 != 0) {
    lVar32 = *(long *)(*(long *)(*param_1 + 0x10) + 0x38);
    (**(code **)(lVar32 + 0x28))
              (lVar26 + (*(long *)(lVar32 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  }
LAB_00993570:
                    /* try { // try from 00993570 to 00993573 has its CatchHandler @ 00993f44 */
  auVar41 = <std::time::std::time::Instant>::now();
  auVar42._8_8_ = auVar41._8_8_;
  auVar42._0_8_ = param_2;
  param_2[6] = auVar41._0_8_;
  *(int *)(param_2 + 7) = auVar41._8_4_;
  param_2[4] = 0;
  bVar4 = *(byte *)((long)param_2 + 0x4a);
joined_r0x00993584:
  uVar20 = auVar42._8_8_;
  param_2 = auVar42._0_8_;
  if ((bVar4 & 1) != 0) goto LAB_00992c28;
  goto LAB_00992ea4;
  while( true ) {
    cVar5 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar21) {
      *pcVar2 = '\0';
      cVar5 = ExclusiveMonitorsStatus();
    }
    bVar21 = true;
    if (cVar5 == '\0') break;
LAB_00993a94:
    if (*pcVar2 != '\x01') goto LAB_00993b74;
  }
  goto LAB_00993aa8;
LAB_00993b74:
  ClearExclusiveLocal();
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar2,0);
  bVar21 = bVar14;
  goto LAB_00993aa8;
}


// ===== 00994028  FUN_00994028 =====

long * FUN_00994028(long *param_1,long param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong *puVar11;
  void *pvVar12;
  ulong uVar13;
  char cVar14;
  undefined1 unaff_w25;
  long lVar15;
  
  if (*(char *)(param_3 + 0x49) == '\x01') {
    lVar7 = *param_1;
    *(undefined1 *)(param_3 + 0x49) = 0;
    lVar7 = *(long *)(lVar7 + 0x10);
    puVar11 = (ulong *)(lVar7 + 0xd8);
    do {
      uVar8 = *puVar11;
      cVar14 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar11,0x10);
      if (bVar3) {
        *puVar11 = uVar8 - 1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if ((uVar8 & 0xffff) == 1) {
      do {
        uVar8 = *puVar11;
        cVar14 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar3) {
          *puVar11 = uVar8;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (((uVar8 & 0xffff) == 0) && (uVar8 >> 0x10 < *(ulong *)(lVar7 + 0xe0))) {
        pcVar1 = (char *)(lVar7 + 0xe8);
        if (*pcVar1 == '\0') {
          cVar14 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *pcVar1 = '\x01';
            cVar14 = ExclusiveMonitorsStatus();
          }
          if (cVar14 != '\0') goto LAB_009944ac;
        }
        else {
          ClearExclusiveLocal();
LAB_009944ac:
                    /* try { // try from 009944ac to 009944e3 has its CatchHandler @ 009944f8 */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                    (lVar7 + 0xe8,param_2,0xffffffff);
        }
        do {
          uVar8 = *puVar11;
          cVar14 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar11,0x10);
          if (bVar3) {
            *puVar11 = uVar8;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (((uVar8 & 0xffff) == 0) && (uVar8 >> 0x10 < *(ulong *)(lVar7 + 0xe0))) {
          do {
            cVar14 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar11,0x10);
            if (bVar3) {
              *puVar11 = *puVar11 + 0x10001;
              cVar14 = ExclusiveMonitorsStatus();
            }
          } while (cVar14 != '\0');
          lVar9 = *(long *)(lVar7 + 0x100);
          unaff_w25 = lVar9 != 0;
          if (lVar9 != 0) {
            *(long *)(lVar7 + 0x100) = lVar9 + -1;
            puVar11 = *(ulong **)(*(long *)(lVar7 + 0xf8) + (lVar9 + -1) * 8);
          }
          do {
            if (*pcVar1 != '\x01') goto LAB_009944c0;
            cVar14 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
              *pcVar1 = '\0';
              cVar14 = ExclusiveMonitorsStatus();
            }
          } while (cVar14 != '\0');
LAB_00994438:
          if ((bool)unaff_w25 != false) {
            if (*(ulong **)(lVar7 + 0x80) <= puVar11) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (puVar11,*(ulong **)(lVar7 + 0x80),
                         &PTR_s__root__cargo_registry_src_index__00af4650);
            }
                    /* try { // try from 00994450 to 0099445b has its CatchHandler @ 009944f8 */
            FUN_0097e264(*(long *)(lVar7 + 0x78) + (long)puVar11 * 0x10 + 8,lVar7 + 0x140);
          }
        }
        else {
          do {
            if (*pcVar1 != '\x01') {
              unaff_w25 = false;
LAB_009944c0:
              ClearExclusiveLocal();
              <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                        (lVar7 + 0xe8,0);
              goto LAB_00994438;
            }
            cVar14 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
              *pcVar1 = '\0';
              cVar14 = ExclusiveMonitorsStatus();
            }
          } while (cVar14 != '\0');
        }
      }
    }
  }
  lVar7 = param_1[1];
  *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + 1;
  if (lVar7 != 0) {
                    /* try { // try from 00994460 to 0099446b has its CatchHandler @ 00994570 */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4728);
    goto LAB_009944e4;
  }
  pvVar12 = (void *)param_1[2];
  param_1[1] = -1;
  if (pvVar12 == (void *)0x0) {
    param_1[1] = 0;
    param_1[2] = param_3;
    uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar8 != 0) goto LAB_00994190;
LAB_009941d4:
                    /* try { // try from 009941d4 to 00994203 has its CatchHandler @ 009944e8 */
    puVar11 = (ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar12 = pthread_getspecific((pthread_key_t)uVar8);
  }
  else {
                    /* try { // try from 00994158 to 0099415f has its CatchHandler @ 00994514 */
    FUN_0099143c(pvVar12);
    free(pvVar12);
    param_1[1] = param_1[1] + 1;
    param_1[2] = param_3;
    uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar8 == 0) goto LAB_009941d4;
LAB_00994190:
    puVar11 = (ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    pvVar12 = pthread_getspecific((pthread_key_t)uVar8);
  }
  if (pvVar12 < (void *)0x2) {
    pvVar12 = (void *)FUN_00996984(uVar8 & 0xffffffff,pvVar12,0);
  }
  if (pvVar12 == (void *)0x0) {
    cVar14 = '\x02';
  }
  else {
    cVar14 = *(char *)((long)pvVar12 + 0x44);
    unaff_w25 = *(undefined1 *)((long)pvVar12 + 0x45);
    *(undefined2 *)((long)pvVar12 + 0x44) = 0x8001;
  }
                    /* try { // try from 0099421c to 00994223 has its CatchHandler @ 009945d8 */
  (*(code *)**(undefined8 **)(param_2 + 0x10))(param_2);
  if (param_1[1] == 0) {
    uVar8 = 1;
    do {
      plVar10 = (long *)param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      if (plVar10 == (long *)0x0) goto LAB_00994334;
      lVar7 = *plVar10;
      *plVar10 = 0;
      if (lVar7 == 0) {
        *(byte *)(plVar10 + 9) = *(byte *)(*(long *)(*param_1 + 0x10) + 0x74) ^ 1;
        goto LAB_00994334;
      }
      uVar13 = *puVar11;
      if (uVar13 == 0) {
                    /* try { // try from 009942f0 to 0099431b has its CatchHandler @ 00994504 */
        uVar13 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(puVar11);
        pvVar12 = pthread_getspecific((pthread_key_t)uVar13);
      }
      else {
        pvVar12 = pthread_getspecific((pthread_key_t)uVar13);
      }
      if (pvVar12 < (void *)0x2) {
        pvVar12 = (void *)FUN_00996984(uVar13 & 0xffffffff,pvVar12,0);
      }
      if (((pvVar12 != (void *)0x0) && (*(char *)((long)pvVar12 + 0x44) == '\x01')) &&
         (*(char *)((long)pvVar12 + 0x45) == '\0')) {
        lVar9 = plVar10[3];
        lVar15 = *(long *)(*param_1 + 0x10);
        goto LAB_00994398;
      }
      if (2 < uVar8) {
        *(undefined1 *)(plVar10 + 9) = 0;
      }
      if (param_1[1] != 0) {
                    /* try { // try from 00994414 to 0099441f has its CatchHandler @ 0099459c */
        core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4530);
        goto LAB_009944e4;
      }
      pvVar12 = (void *)param_1[2];
      param_1[1] = -1;
      if (pvVar12 == (void *)0x0) {
        lVar9 = 0;
      }
      else {
                    /* try { // try from 009942a4 to 009942ab has its CatchHandler @ 00994544 */
        FUN_0099143c(pvVar12);
        free(pvVar12);
        lVar9 = param_1[1] + 1;
      }
      param_1[1] = lVar9;
      param_1[2] = (long)plVar10;
                    /* try { // try from 009942d8 to 009942df has its CatchHandler @ 0099456c */
      (*(code *)**(undefined8 **)(lVar7 + 0x10))(lVar7);
      uVar8 = uVar8 + 1;
    } while (param_1[1] == 0);
  }
                    /* try { // try from 00994404 to 0099440f has its CatchHandler @ 009945d8 */
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4548);
LAB_009944e4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x9944e8);
  (*pcVar4)();
                    /* try { // try from 009943bc to 009943cb has its CatchHandler @ 0099453c */
  while (lVar7 = <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Local<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>
                 ::push_overflow::
                 <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>
                           (plVar10 + 3,lVar7,uVar8 >> 0x20,(ulong)uVar2,lVar15 + 0x10), lVar7 != 0)
  {
LAB_00994398:
    uVar8 = *(ulong *)(lVar9 + 0x18);
    uVar2 = *(uint *)(lVar9 + 0x20);
    iVar6 = (int)(uVar8 >> 0x20);
    if (uVar2 - iVar6 < 0x100) {
      *(long *)(*(long *)(lVar9 + 0x10) + ((ulong)uVar2 & 0xff) * 8) = lVar7;
      *(uint *)(lVar9 + 0x20) = uVar2 + 1;
      break;
    }
    if (iVar6 != (int)uVar8) {
                    /* try { // try from 009943f4 to 009943ff has its CatchHandler @ 00994510 */
      FUN_009922d0(lVar15 + 0x10,lVar7);
      break;
    }
  }
LAB_00994334:
  if (cVar14 == '\x02') {
    return plVar10;
  }
  uVar8 = *puVar11;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000001 < puVar5) goto joined_r0x009944a0;
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000001 < puVar5) goto joined_r0x009944a0;
  }
  puVar5 = (undefined1 *)FUN_00996984(uVar8 & 0xffffffff,puVar5,0);
joined_r0x009944a0:
  if (puVar5 != (undefined1 *)0x0) {
    puVar5[0x44] = cVar14;
    puVar5[0x45] = unaff_w25;
  }
  return plVar10;
}


// ===== 009945f8  tokio::io::util::mem::duplex =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::util::mem::duplex */

void __rustcall tokio::io::util::mem::duplex(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint7 uStack_8f;
  long lStack_58;
  long lStack_48;
  uint7 uStack_3f;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x68,8);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 00994710 to 0099471b has its CatchHandler @ 00994768 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x68);
  }
  plVar4[9] = lStack_58;
  plVar4[8] = 0;
  plVar4[0xb] = lStack_48;
  plVar4[10] = 0;
  plVar4[0xc] = (ulong)uStack_3f << 8;
  plVar4[1] = 1;
  *plVar4 = 1;
  plVar4[3] = 1;
  plVar4[2] = (ulong)uStack_8f << 8;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = param_2;
  plVar4[6] = 1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar5 = (long *)FUN_004b25a4(0x68,8);
  if (plVar5 != (long *)0x0) {
    plVar5[0xc] = (ulong)uStack_3f << 8;
    plVar5[9] = lStack_58;
    plVar5[8] = 0;
    plVar5[0xb] = lStack_48;
    plVar5[10] = 0;
    plVar5[1] = 1;
    *plVar5 = 1;
    plVar5[3] = 1;
    plVar5[2] = (ulong)uStack_8f << 8;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[7] = param_2;
    plVar5[6] = 1;
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
        *param_1 = plVar4;
        param_1[1] = plVar5;
        param_1[2] = plVar5;
        param_1[3] = plVar4;
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x994730);
    (*pcVar3)();
  }
                    /* try { // try from 00994720 to 0099472b has its CatchHandler @ 00994730 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x68);
}


// ===== 00994780  tokio::io::util::mem::simplex =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::util::mem::simplex */

void __rustcall tokio::io::util::mem::simplex(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  uint local_7c;
  long lStack_48;
  long lStack_38;
  uint7 uStack_2f;
  undefined7 uStack_27;
  
  local_7c = local_7c & 0xffffff00;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x70,8);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 00994818 to 00994823 has its CatchHandler @ 00994828 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x70);
  }
  plVar4[0xd] = CONCAT71(uStack_27,1);
  plVar4[0xc] = (ulong)uStack_2f << 8;
  plVar4[9] = lStack_48;
  plVar4[8] = 0;
  plVar4[0xb] = lStack_38;
  plVar4[10] = 0;
  plVar4[1] = 1;
  *plVar4 = 1;
  plVar4[3] = 1;
  plVar4[2] = (ulong)local_7c << 0x20;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = param_1;
  plVar4[6] = 1;
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x994828);
  (*pcVar3)();
}


// ===== 00994840  tokio::runtime::scheduler::multi_thread::worker::run =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::scheduler::multi_thread::worker::run */

void __rustcall tokio::runtime::scheduler::multi_thread::worker::run(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *local_40;
  long *plStack_38;
  long *local_18;
  
  plVar5 = param_1 + 4;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = param_1;
  if (lVar6 == 0) {
    do {
      lVar6 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
      ::drop_slow(&local_18);
      return;
    }
  }
  else {
    if (*(ulong *)(param_1[2] + 200) <= (ulong)param_1[3]) {
                    /* try { // try from 00994954 to 0099495f has its CatchHandler @ 00994974 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (param_1[3],*(ulong *)(param_1[2] + 200),
                 &PTR_s__root__cargo_registry_src_index__00af4740);
    }
                    /* try { // try from 0099487c to 009948a3 has its CatchHandler @ 00994974 */
    local_40 = (long *)std::thread::current::current();
    do {
      lVar4 = *local_40;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_40,0x10);
      if (bVar2) {
        *local_40 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
      ::drop_slow(&local_40);
    }
    plVar5 = (long *)local_18[2];
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x994964);
      (*pcVar3)();
    }
    plVar5 = (long *)local_18[2];
    local_40 = (long *)0x1;
    plStack_38 = plVar5;
                    /* try { // try from 009948d4 to 009948eb has its CatchHandler @ 00994964 */
    FUN_0097d71c(&local_40,1,local_18,lVar6,&PTR_s__root__cargo_registry_src_index__00af4758);
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&plStack_38);
    }
  }
  return;
}


// ===== 009949b0  FUN_009949b0 =====

void FUN_009949b0(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 extraout_w1;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  long *local_338;
  undefined8 uStack_330;
  long *local_328;
  long *local_320;
  long *local_318;
  long *local_310;
  long lStack_308;
  long *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  long local_2e8;
  undefined1 local_2e0 [16];
  long *local_2d0;
  long *local_2c8;
  long *local_2c0;
  long lStack_2b8;
  long *local_2b0;
  undefined8 uStack_2a8;
  long *local_2a0;
  long *plStack_298;
  undefined8 local_290;
  long *local_288;
  long local_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  long local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 auStack_228 [16];
  long *local_218;
  long lStack_210;
  long *local_208;
  ulong uStack_200;
  long local_1f8;
  long lStack_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  long *local_1c0;
  undefined1 local_1b8;
  long *local_1b0;
  long lStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
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
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long lStack_98;
  long *local_90;
  ulong uStack_88;
  long local_80;
  
  uVar13 = (long)param_2 * 8;
  uVar18 = 0;
  local_338 = param_3;
  uStack_330 = param_5;
  if (((ulong)param_2 >> 0x3d != 0) || (0x7ffffffffffffff8 < uVar13)) {
LAB_00994a44:
                    /* try { // try from 00994a44 to 00994a4b has its CatchHandler @ 00995378 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar18,uVar13);
  }
  if (uVar13 == 0) {
    local_328 = (long *)0x0;
    local_320 = (long *)&DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar18 = 8;
    local_320 = (long *)FUN_004b25a4(uVar13,8);
    local_328 = param_2;
    if (local_320 == (long *)0x0) goto LAB_00994a44;
  }
  local_318 = (long *)0x0;
  uVar18 = 0;
  uVar19 = (long)param_2 << 4;
  if ((ulong)param_2 >> 0x3c != 0) {
LAB_00994aa4:
                    /* try { // try from 00994aa4 to 00994aaf has its CatchHandler @ 009952f4 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar18,uVar19);
  }
  local_318 = (long *)0x0;
  uVar19 = (long)param_2 * 0x10;
  uVar18 = 0;
  if (0x7ffffffffffffff8 < uVar19) goto LAB_00994aa4;
  if (uVar19 == 0) {
    lStack_308 = 8;
    local_310 = (long *)0x0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar18 = 8;
    lStack_308 = FUN_004b25a4(uVar19,8);
    local_310 = param_2;
    if (lStack_308 == 0) goto LAB_00994aa4;
  }
  local_300 = (long *)0x0;
  uStack_2f8 = 0;
  local_2f0 = 1;
  local_2e8 = 0;
  if (param_2 == (long *)0x0) {
    lVar16 = 8;
    plVar20 = *(long **)(param_7 + 0xc);
    if (plVar20 == (long *)0x0) goto LAB_00994d20;
LAB_00994cfc:
    do {
      lVar15 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar14 = local_2c0;
    lVar12 = lStack_2b8;
    uVar19 = uStack_278;
    if (lVar15 < 0) goto LAB_0099506c;
    plVar20 = *(long **)(param_7 + 0x10);
    plVar10 = *(long **)(param_7 + 0xc);
    uVar7 = *(undefined8 *)(param_7 + 0xe);
    plVar17 = local_2b0;
    uVar18 = uStack_2a8;
  }
  else {
    plVar20 = (long *)0x0;
    do {
                    /* try { // try from 00994b24 to 00994b27 has its CatchHandler @ 00995178 */
      auVar21 = FUN_009aec48();
      plVar17 = auVar21._0_8_;
      plVar20 = (long *)((long)plVar20 + 1);
      plVar14 = (long *)local_338[2];
      do {
        lVar16 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = local_2c0;
      lVar12 = lStack_2b8;
      uVar19 = uStack_278;
      local_2e0 = auVar21;
      if (lVar16 < 0) goto LAB_0099506c;
      local_290 = (long **)local_338[2];
      local_288 = (long *)0x0;
      local_280 = 0;
      plStack_298 = (long *)&DAT_00000001;
      local_2a0 = (long *)&DAT_00000001;
      uStack_278 = uStack_278 & 0xffffffffffffff00;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar10 = (long *)FUN_004b25a4(0x30,8);
      if (plVar10 == (long *)0x0) {
                    /* try { // try from 00995020 to 0099502b has its CatchHandler @ 0099528c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x30);
      }
      plVar10[1] = (long)plStack_298;
      *plVar10 = (long)local_2a0;
      plVar10[3] = (long)local_288;
      plVar10[2] = (long)local_290;
      plVar10[5] = uStack_278;
      plVar10[4] = local_280;
      do {
        lVar16 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_2d0 = plVar10;
      plVar14 = local_2c0;
      lVar12 = lStack_2b8;
      uVar19 = uStack_278;
      if (lVar16 < 0) goto LAB_0099506c;
      local_2c8 = plVar10;
                    /* try { // try from 00994bb8 to 00994bbb has its CatchHandler @ 00995164 */
      auVar22 = <std::time::std::time::Instant>::now();
      iVar1 = *param_7;
      uVar2 = param_7[1];
      bVar3 = *(byte *)(param_7 + 0x19);
                    /* try { // try from 00994bd8 to 00994bdf has its CatchHandler @ 00995124 */
      local_2c0 = auVar21._8_8_;
      local_a0 = plVar10;
      uVar9 = <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed
                        (param_7 + 0x14);
      uVar18 = uStack_258;
      uStack_258._4_4_ = SUB84(uVar18,4);
      uStack_258._0_4_ = (uint)(bVar3 ^ 1);
      local_2a0 = (long *)0x0;
      uStack_278 = 0x40a99d60864b8a7e;
      if (iVar1 == 0) {
        uVar2 = 0x3d;
      }
      local_280 = 0;
      local_268 = CONCAT44(local_268._4_4_,auVar22._8_4_);
      local_260 = (ulong)uVar2 << 0x20;
      local_290 = (long **)CONCAT44(extraout_w1,uVar9);
      plStack_298 = plVar10;
      local_288 = auVar21._8_8_;
      uStack_270 = auVar22._0_8_;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar11 = (undefined8 *)FUN_004b25a4(0x50,8);
      plVar14 = local_318;
      if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00995030 to 0099503b has its CatchHandler @ 00995224 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x50);
      }
      puVar11[5] = uStack_278;
      puVar11[4] = local_280;
      puVar11[7] = local_268;
      puVar11[6] = uStack_270;
      puVar11[9] = uStack_258;
      puVar11[8] = local_260;
      puVar11[1] = plStack_298;
      *puVar11 = local_2a0;
      puVar11[3] = local_288;
      puVar11[2] = local_290;
      if (local_318 == local_328) {
                    /* try { // try from 00994c6c to 00994c73 has its CatchHandler @ 009950f8 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
        ::grow_one(&local_328);
      }
      plVar6 = local_300;
      local_320[(long)plVar14] = (long)puVar11;
      local_318 = (long *)((long)plVar14 + 1);
      local_2a0 = plVar17;
      plStack_298 = plVar10;
      if (local_300 == local_310) {
                    /* try { // try from 00994c98 to 00994c9f has its CatchHandler @ 00995110 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<core::task::wake::Waker>>::grow_one(&local_310)
        ;
      }
      lVar16 = local_2e8;
      puVar11 = (undefined8 *)(lStack_308 + (long)plVar6 * 0x10);
      *puVar11 = plVar17;
      puVar11[1] = plVar10;
      local_300 = (long *)((long)plVar6 + 1);
      if (local_2e8 == -1) {
                    /* try { // try from 00994ca4 to 00994cab has its CatchHandler @ 009950bc */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tokio::runtime::metrics::mock::WorkerMetrics>>
        ::grow_one(&uStack_2f8);
      }
      local_2e8 = lVar16 + 1;
    } while (plVar20 != param_2);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar16 = FUN_004b25a4(uVar13,8);
    if (lVar16 == 0) {
                    /* try { // try from 00995060 to 0099506b has its CatchHandler @ 00995070 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar13);
    }
    plVar20 = *(long **)(param_7 + 0xc);
    if (plVar20 != (long *)0x0) goto LAB_00994cfc;
LAB_00994d20:
    plVar20 = *(long **)(param_7 + 0x10);
    plVar10 = (long *)0x0;
    uVar7 = 0;
    plVar14 = local_2c0;
    lVar12 = lStack_2b8;
    plVar17 = local_2b0;
    uVar18 = uStack_2a8;
  }
  lStack_2b8 = uVar7;
  local_2c0 = plVar10;
  uStack_2a8 = 0;
  local_2b0 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    do {
      lVar15 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_2b0 = plVar17;
    uStack_2a8 = uVar18;
    uVar19 = uStack_278;
    if (lVar15 < 0) {
LAB_0099506c:
      uStack_278 = uVar19;
      lStack_2b8 = lVar12;
      local_2c0 = plVar14;
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x995070);
      (*pcVar8)();
    }
    uStack_2a8 = *(undefined8 *)(param_7 + 0x12);
    local_2b0 = *(long **)(param_7 + 0x10);
  }
                    /* try { // try from 00994d54 to 00994d5b has its CatchHandler @ 00995090 */
  local_2a0 = local_310;
  plStack_298 = (long *)lStack_308;
  local_290 = (long **)local_300;
  auStack_228 = FUN_009c3020(&local_2a0);
  if (param_2 < (long *)0x2) {
    lVar12 = 4;
  }
  else {
    uVar13 = (0xffffffffffffffffU >> (LZCOUNT((long)param_2 - 1) & 0x3fU)) << 2;
    if (0xfffb < uVar13) {
      uVar13 = 0xfffc;
    }
    lVar12 = uVar13 + 4;
  }
                    /* try { // try from 00994d98 to 00994d9f has its CatchHandler @ 0099507c */
  FUN_00991af8(&local_a0,lVar12);
  lStack_1c8 = (long)param_2 << 0x10;
  do {
    lStack_1f0 = DAT_00b0f6d0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0xb0f6d0,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      DAT_00b0f6d0 = DAT_00b0f6d0 + 1;
    }
  } while (cVar4 != '\0' || lStack_1f0 == 0);
  uStack_238 = *(undefined8 *)(param_7 + 0x16);
  local_240 = *(undefined8 *)(param_7 + 0x14);
  local_1d0 = 0;
  uStack_200 = uStack_88;
  local_208 = local_90;
  uStack_258 = *(undefined8 *)(param_7 + 0xe);
  local_260 = *(long *)(param_7 + 0xc);
  uStack_248 = *(undefined8 *)(param_7 + 0x12);
  uStack_250 = *(undefined8 *)(param_7 + 0x10);
  local_1f8 = local_80;
  local_170 = 8;
  uStack_278 = *(ulong *)(param_7 + 6);
  local_280 = *(long *)(param_7 + 4);
  local_268 = *(undefined8 *)(param_7 + 10);
  uStack_270 = *(undefined8 *)(param_7 + 8);
  local_218 = local_a0;
  lStack_210 = lStack_98;
  uStack_138 = param_4[5];
  local_140 = param_4[4];
  uStack_128 = param_4[7];
  uStack_130 = param_4[6];
  local_190 = 0;
  uStack_158 = param_4[1];
  local_160 = *param_4;
  uStack_148 = param_4[3];
  uStack_150 = param_4[2];
  local_188 = 0;
  uStack_f8 = param_4[0xd];
  local_100 = param_4[0xc];
  uStack_e8 = param_4[0xf];
  uStack_f0 = param_4[0xe];
  local_178 = 0;
  local_180 = 0;
  uStack_c8 = param_6[1];
  local_d0 = *param_6;
  uStack_118 = param_4[9];
  local_120 = param_4[8];
  uStack_108 = param_4[0xb];
  uStack_110 = param_4[10];
  local_1e8 = 0;
  local_1b8 = 0;
  local_288 = *(long **)(param_7 + 2);
  local_290 = *(long ***)param_7;
  uStack_b8 = lStack_2b8;
  plStack_c0 = local_2c0;
  local_230 = *(undefined8 *)(param_7 + 0x18);
  local_1a0 = 0;
  uStack_198 = 0;
  local_168 = 0;
  uStack_a8 = uStack_2a8;
  local_b0 = local_2b0;
  local_1e0 = local_2f0;
  lStack_1d8 = local_2e8;
  local_e0 = param_4[0x10];
  plStack_298 = (long *)0x1;
  local_2a0 = (long *)0x1;
  local_1c0 = param_2;
  local_1b0 = param_2;
  lStack_1a8 = lVar16;
  local_d8 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar20 = (long *)FUN_004b25a4(0x200,8);
  if (plVar20 == (long *)0x0) {
                    /* try { // try from 00995050 to 0099505b has its CatchHandler @ 009951c0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x200);
  }
  memcpy(plVar20,&local_2a0,0x200);
  local_288 = local_318;
  local_2c0 = (long *)0x0;
  lStack_2b8 = 8;
  local_2b0 = (long *)0x0;
  local_318 = (long *)0x0;
  local_280 = 0;
  uStack_278 = 0;
  plStack_298 = local_320 + (long)local_288;
  local_2a0 = local_320;
  local_290 = &local_328;
  local_2c8 = plVar20;
  if (local_288 != (long *)0x0) {
    do {
      plVar17 = local_2a0 + 1;
      lVar16 = *local_2a0;
      do {
        lVar15 = *plVar20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = lVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = local_2c0;
      lVar12 = lStack_2b8;
      local_2a0 = plVar17;
      uVar19 = uStack_278 + 1;
      if (lVar15 < 0) goto LAB_0099506c;
      uStack_88 = uStack_278;
      lStack_98 = 1;
      local_a0 = (long *)0x1;
      uStack_278 = uStack_278 + 1;
      local_90 = plVar20;
      local_80 = lVar16;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar14 = (long *)FUN_004b25a4(0x28,8);
      plVar17 = local_2b0;
      if (plVar14 == (long *)0x0) {
                    /* try { // try from 00995040 to 0099504b has its CatchHandler @ 009951d4 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x28);
      }
      plVar14[1] = lStack_98;
      *plVar14 = (long)local_a0;
      plVar14[3] = uStack_88;
      plVar14[2] = (long)local_90;
      plVar14[4] = local_80;
      local_a0 = plVar14;
      if (local_2b0 == local_2c0) {
                    /* try { // try from 00994f80 to 00994f87 has its CatchHandler @ 009950c0 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
        ::grow_one(&local_2c0);
      }
      local_2b0 = (long *)((long)plVar17 + 1);
      *(long **)(lStack_2b8 + (long)plVar17 * 8) = plVar14;
    } while (local_2a0 != plStack_298);
  }
                    /* try { // try from 00994f8c to 00994f93 has its CatchHandler @ 00995074 */
  FUN_009c4698(&local_2a0);
  param_1[2] = lStack_2b8;
  param_1[1] = local_2c0;
  param_1[3] = local_2b0;
  *param_1 = plVar20;
  plVar20 = local_320;
  for (plVar17 = local_318; plVar17 != (long *)0x0; plVar17 = (long *)((long)plVar17 - 1)) {
                    /* try { // try from 00994fbc to 00994fbf has its CatchHandler @ 00995188 */
    FUN_009bfca8(*plVar20);
    plVar20 = plVar20 + 1;
  }
  if (local_328 != (long *)0x0) {
    free(local_320);
  }
  do {
    lVar16 = *local_338;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(local_338,0x10);
    if (bVar5) {
      *local_338 = lVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar16 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
    drop_slow(&local_338);
  }
  return;
}


// ===== 009953e0  <tokio::io::util::mem::DuplexStream_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::DuplexStream as tokio::io::async_read::AsyncRead>::poll_read */

undefined8 __rustcall
<tokio::io::util::mem::DuplexStream_as_tokio::io::async_read::AsyncRead>::poll_read
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  pcVar1 = (char *)(lVar5 + 0x10);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0099540c;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar5 + 0x10,param_2,0xffffffff);
LAB_0099540c:
                    /* try { // try from 0099540c to 00995413 has its CatchHandler @ 00995484 */
  uVar4 = <tokio::io::util::mem::SimplexStream_as_tokio::io::async_read::AsyncRead>::poll_read
                    (lVar5 + 0x18,param_2,param_3);
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return uVar4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar4;
}


// ===== 009954bc  <tokio::runtime::scheduler::multi_thread::worker::block_in_place::Reset_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::multi_thread::worker::block_in_place::Reset as
   core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::scheduler::multi_thread::worker::block_in_place::Reset_as_core::ops::drop::Drop>::
drop(long param_1)

{
  FUN_009ae848(param_1,param_1 + 1,&PTR_s__root__cargo_registry_src_index__00af4770);
  return;
}


// ===== 009954cc  <tokio::runtime::scheduler::multi_thread::worker::run::AbortOnPanic_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::multi_thread::worker::run::AbortOnPanic as
   core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::scheduler::multi_thread::worker::run::AbortOnPanic_as_core::ops::drop::Drop>::drop
          (void)

{
  int iVar1;
  
  if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) &&
     (iVar1 = std::panicking::panic_count::is_zero_slow_path(), iVar1 == 0)) {
    std::io::stdio::_eprint("worker thread panicking; aborting process\n",0x55);
                    /* WARNING: Subroutine does not return */
    std::process::abort();
  }
  return;
}


// ===== 0099550c  <tokio::io::util::mem::DuplexStream_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::DuplexStream as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::io::util::mem::DuplexStream_as_core::ops::drop::Drop>::drop
          (long *param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar6;
  
  lVar6 = param_1[1];
  pcVar1 = (char *)(lVar6 + 0x10);
  if (*pcVar1 == '\0') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_009955cc;
    lVar2 = *(long *)(lVar6 + 0x40);
    uVar3 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined1 *)(lVar6 + 0x60) = 1;
    *(undefined8 *)(lVar6 + 0x40) = 0;
  }
  else {
    ClearExclusiveLocal();
LAB_009955cc:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (lVar6 + 0x10,param_2,0xffffffff);
    lVar2 = *(long *)(lVar6 + 0x40);
    uVar3 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined1 *)(lVar6 + 0x60) = 1;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    param_2 = extraout_x1_00;
  }
  if (lVar2 != 0) {
                    /* try { // try from 00995554 to 00995557 has its CatchHandler @ 0099568c */
    (**(code **)(lVar2 + 8))(uVar3);
    param_2 = extraout_x1;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      lVar6 = *param_1;
      pcVar1 = (char *)(lVar6 + 0x10);
      cVar4 = *pcVar1;
      param_2 = extraout_x1_01;
      goto joined_r0x00995614;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\0';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar6 = *param_1;
  pcVar1 = (char *)(lVar6 + 0x10);
  cVar4 = *pcVar1;
joined_r0x00995614:
  if (cVar4 == '\0') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      lVar2 = *(long *)(lVar6 + 0x50);
      uVar3 = *(undefined8 *)(lVar6 + 0x58);
      *(undefined1 *)(lVar6 + 0x60) = 1;
      *(undefined8 *)(lVar6 + 0x50) = 0;
      goto joined_r0x00995638;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar6 + 0x10,param_2,0xffffffff);
  lVar2 = *(long *)(lVar6 + 0x50);
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  *(undefined1 *)(lVar6 + 0x60) = 1;
  *(undefined8 *)(lVar6 + 0x50) = 0;
joined_r0x00995638:
  if (lVar2 != 0) {
                    /* try { // try from 009955a0 to 009955a3 has its CatchHandler @ 0099565c */
    (**(code **)(lVar2 + 8))(uVar3);
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


// ===== 009956c4  FUN_009956c4 =====

void FUN_009956c4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    puVar6 = (ulong *)*param_1;
    do {
      puVar3 = (ulong *)*puVar6;
      if (puVar3 == (ulong *)0x0) {
        param_1[1] = lVar5 + -1;
        return;
      }
      uVar4 = puVar3[1];
      *puVar6 = uVar4;
      if (uVar4 == 0) {
        puVar6[1] = 0;
      }
      lVar5 = lVar5 + -1;
      puVar3[1] = 0;
      param_1[1] = lVar5;
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
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 1",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3f10);
      }
    } while (lVar5 != 0);
  }
  return;
}


// ===== 0099576c  FUN_0099576c =====

void FUN_0099576c(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*(undefined8 *)*param_1);
  return;
}


// ===== 00995778  FUN_00995778 =====

void FUN_00995778(undefined8 *param_1)

{
  <mio::net::tcp::listener::TcpListener_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00995780  <tokio::io::util::mem::SimplexStream_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::SimplexStream as tokio::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<tokio::io::util::mem::SimplexStream_as_tokio::io::async_read::AsyncRead>::poll_read
          (undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  char cVar9;
  undefined1 auVar10 [16];
  
  puVar4 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000001 < puVar5) goto LAB_009957c8;
LAB_009958c4:
    puVar5 = (undefined1 *)FUN_00996984(uVar8 & 0xffffffff,puVar5,0);
    if (puVar5 != (undefined1 *)0x0) goto LAB_009957cc;
LAB_009958d8:
    cVar9 = '\0';
    cVar7 = '\0';
    uVar8 = param_1[1];
    if (uVar8 != 0) goto LAB_009957fc;
LAB_009958f0:
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
                    /* try { // try from 0099590c to 0099590f has its CatchHandler @ 009959cc */
      auVar10 = (*(code *)**(undefined8 **)*param_2)(((undefined8 *)*param_2)[1]);
      if (param_1[5] != 0) {
                    /* try { // try from 00995928 to 0099592b has its CatchHandler @ 009959c0 */
        (**(code **)(param_1[5] + 0x18))(param_1[6]);
      }
      *(undefined1 (*) [16])(param_1 + 5) = auVar10;
      if (cVar9 == '\0') goto LAB_00995964;
      uVar8 = *(ulong *)puVar4;
      if (uVar8 == 0) {
        uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
        puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
        if (puVar5 <= &DAT_00000001) goto LAB_009959a4;
      }
      else {
        puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
        if (puVar5 <= &DAT_00000001) {
LAB_009959a4:
          puVar5 = (undefined1 *)FUN_00996984(uVar8 & 0xffffffff,puVar5,0);
        }
      }
      uVar8 = 1;
      if (puVar5 != (undefined1 *)0x0) {
        uVar8 = 1;
        puVar5[0x44] = 1;
        puVar5[0x45] = cVar7;
      }
      goto LAB_00995968;
    }
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (puVar5 <= &DAT_00000001) goto LAB_009958c4;
LAB_009957c8:
    if (puVar5 == (undefined1 *)0x0) goto LAB_009958d8;
LAB_009957cc:
    cVar9 = puVar5[0x44];
    cVar7 = puVar5[0x45];
    cVar6 = cVar7;
    if (cVar9 == '\x01') {
      if (cVar7 != '\0') {
        cVar6 = cVar7 + -1;
        goto LAB_009957e8;
      }
      FUN_009b13f8(*param_2,&PTR_s__root__cargo_registry_src_index__00af64a0);
LAB_00995964:
      uVar8 = 1;
      goto LAB_00995968;
    }
LAB_009957e8:
    puVar5[0x45] = cVar6;
    uVar8 = param_1[1];
    if (uVar8 == 0) goto LAB_009958f0;
LAB_009957fc:
    uVar1 = param_3[1];
    uVar3 = param_3[2];
    __n = uVar1 - uVar3;
    if (uVar8 <= uVar1 - uVar3) {
      __n = uVar8;
    }
    uVar8 = __n + uVar3;
    if ((uVar8 < uVar3) || (uVar1 < uVar8)) {
                    /* try { // try from 00995888 to 0099589f has its CatchHandler @ 009959cc */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar3,uVar8,uVar1,&PTR_s__root__cargo_registry_src_index__00af4620);
    }
    memcpy((void *)(*param_3 + uVar3),(void *)*param_1,__n);
    if ((ulong)param_3[3] < uVar8) {
      param_3[3] = uVar8;
    }
    param_3[2] = uVar8;
                    /* try { // try from 00995848 to 0099586f has its CatchHandler @ 009959cc */
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_1,__n);
    if (uVar1 != uVar3) {
      lVar2 = param_1[7];
      param_1[7] = 0;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(param_1[8]);
      }
    }
  }
  uVar8 = 0;
LAB_00995968:
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar8;
  return auVar10;
}


// ===== 009959e4  <tokio::io::util::mem::SimplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::SimplexStream as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::io::util::mem::SimplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write
          (long *param_1,undefined8 *param_2,void *param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  char cVar9;
  undefined1 auVar10 [16];
  ulong local_60;
  ulong uStack_58;
  
  puVar2 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (puVar3 <= &DAT_00000001) goto LAB_00995ab0;
LAB_00995a34:
    if (puVar3 != (undefined1 *)0x0) goto LAB_00995a38;
LAB_00995ac4:
    cVar9 = '\0';
    cVar7 = '\0';
    bVar1 = *(byte *)(param_1 + 9);
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000001 < puVar3) goto LAB_00995a34;
LAB_00995ab0:
    puVar3 = (undefined1 *)FUN_00996984(uVar8 & 0xffffffff,puVar3,0);
    if (puVar3 == (undefined1 *)0x0) goto LAB_00995ac4;
LAB_00995a38:
    cVar9 = puVar3[0x44];
    cVar7 = puVar3[0x45];
    cVar5 = cVar7;
    if (cVar9 == '\x01') {
      if (cVar7 == '\0') {
        FUN_009b13f8(*param_2,&PTR_s__root__cargo_registry_src_index__00af64a0);
        uVar4 = 2;
        goto LAB_00995bc4;
      }
      cVar5 = cVar7 + -1;
    }
    puVar3[0x45] = cVar5;
    bVar1 = *(byte *)(param_1 + 9);
  }
  if ((bVar1 & 1) != 0) {
    uVar4 = 1;
    param_4 = 0xb00000003;
    goto LAB_00995bc4;
  }
  lVar6 = param_1[1];
  uVar8 = param_1[4] - lVar6;
  if (uVar8 != 0) {
    if (param_4 <= uVar8) {
      uVar8 = param_4;
    }
    if ((ulong)(param_1[2] - lVar6) < uVar8) {
                    /* try { // try from 00995b6c to 00995b7b has its CatchHandler @ 00995c38 */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_1,uVar8,1);
      lVar6 = param_1[1];
    }
    memcpy((void *)(*param_1 + lVar6),param_3,uVar8);
    uStack_58 = param_1[2] - param_1[1];
    if (uStack_58 < uVar8) {
      local_60 = uVar8;
                    /* WARNING: Subroutine does not return */
      bytes::panic_advance(&local_60);
    }
    lVar6 = param_1[5];
    param_1[1] = param_1[1] + uVar8;
    param_1[5] = 0;
    if (lVar6 != 0) {
                    /* try { // try from 00995bbc to 00995bef has its CatchHandler @ 00995c38 */
      (**(code **)(lVar6 + 8))(param_1[6]);
    }
    uVar4 = 0;
    param_4 = uVar8;
    goto LAB_00995bc4;
  }
                    /* try { // try from 00995af8 to 00995afb has its CatchHandler @ 00995c38 */
  auVar10 = (*(code *)**(undefined8 **)*param_2)(((undefined8 *)*param_2)[1]);
  if (param_1[7] != 0) {
                    /* try { // try from 00995b14 to 00995b17 has its CatchHandler @ 00995c2c */
    (**(code **)(param_1[7] + 0x18))(param_1[8]);
  }
  *(undefined1 (*) [16])(param_1 + 7) = auVar10;
  if (cVar9 != '\0') {
    uVar8 = *(ulong *)puVar2;
    if (uVar8 == 0) {
      uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
      if (puVar3 <= &DAT_00000001) goto LAB_00995c14;
    }
    else {
      puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
      if (puVar3 <= &DAT_00000001) {
LAB_00995c14:
        puVar3 = (undefined1 *)FUN_00996984(uVar8 & 0xffffffff,puVar3,0);
      }
    }
    if (puVar3 != (undefined1 *)0x0) {
      puVar3[0x45] = cVar7;
      puVar3[0x44] = 1;
    }
  }
  uVar4 = 2;
  param_4 = auVar10._0_8_;
LAB_00995bc4:
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = uVar4;
  return auVar10;
}


// ===== 00995c50  <tokio::io::util::mem::SimplexStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::SimplexStream as tokio::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio::io::util::mem::SimplexStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
          (long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x48) = 1;
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 8))(*(undefined8 *)(param_1 + 0x30));
  }
  return ZEXT816(0);
}


// ===== 00995c88  <tokio::io::util::mem::SimplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::SimplexStream as tokio::io::async_write::AsyncWrite>::poll_write_vectored
    */

undefined8 __rustcall
<tokio::io::util::mem::SimplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong __n;
  void *__src;
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  char cVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  ulong *puVar9;
  char cVar10;
  undefined1 auVar11 [16];
  ulong local_60;
  ulong uStack_58;
  
  puVar3 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (puVar4 <= &DAT_00000001) goto LAB_00995d54;
LAB_00995cd8:
    if (puVar4 != (undefined1 *)0x0) goto LAB_00995cdc;
LAB_00995d68:
    cVar10 = '\0';
    cVar7 = '\0';
    bVar2 = *(byte *)(param_1 + 9);
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000001 < puVar4) goto LAB_00995cd8;
LAB_00995d54:
    puVar4 = (undefined1 *)FUN_00996984(uVar8 & 0xffffffff,puVar4,0);
    if (puVar4 == (undefined1 *)0x0) goto LAB_00995d68;
LAB_00995cdc:
    cVar10 = puVar4[0x44];
    cVar7 = puVar4[0x45];
    cVar5 = cVar7;
    if (cVar10 == '\x01') {
      if (cVar7 == '\0') {
        FUN_009b13f8(*param_2,&PTR_s__root__cargo_registry_src_index__00af64a0);
        return 2;
      }
      cVar5 = cVar7 + -1;
    }
    puVar4[0x45] = cVar5;
    bVar2 = *(byte *)(param_1 + 9);
  }
  if ((bVar2 & 1) != 0) {
    return 1;
  }
  lVar6 = param_1[1];
  uVar8 = param_1[4] - lVar6;
  if (uVar8 != 0) {
    if (param_4 == 0) {
      lVar6 = param_1[5];
      lVar1 = param_1[6];
      param_1[5] = 0;
    }
    else {
      param_4 = param_4 << 4;
      puVar9 = (ulong *)(param_3 + 8);
      do {
        if (uVar8 == 0) break;
        __src = (void *)puVar9[-1];
        __n = uVar8;
        if (*puVar9 <= uVar8) {
          __n = *puVar9;
        }
        if ((ulong)(param_1[2] - lVar6) < __n) {
                    /* try { // try from 00995dc0 to 00995dcf has its CatchHandler @ 00995f18 */
          <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_1,__n,1);
          lVar6 = param_1[1];
        }
        memcpy((void *)(*param_1 + lVar6),__src,__n);
        uStack_58 = param_1[2] - param_1[1];
        if (uStack_58 < __n) {
          local_60 = __n;
                    /* WARNING: Subroutine does not return */
          bytes::panic_advance(&local_60);
        }
        lVar6 = param_1[1] + __n;
        param_4 = param_4 + -0x10;
        puVar9 = puVar9 + 2;
        uVar8 = uVar8 - __n;
        param_1[1] = lVar6;
      } while (param_4 != 0);
      lVar6 = param_1[5];
      lVar1 = param_1[6];
      param_1[5] = 0;
    }
    if (lVar6 != 0) {
                    /* try { // try from 00995e9c to 00995ecf has its CatchHandler @ 00995f1c */
      (**(code **)(lVar6 + 8))(lVar1);
    }
    return 0;
  }
                    /* try { // try from 00995e2c to 00995e2f has its CatchHandler @ 00995f1c */
  auVar11 = (*(code *)**(undefined8 **)*param_2)(((undefined8 *)*param_2)[1]);
  if (param_1[7] != 0) {
                    /* try { // try from 00995e48 to 00995e4b has its CatchHandler @ 00995f0c */
    (**(code **)(param_1[7] + 0x18))(param_1[8]);
  }
  *(undefined1 (*) [16])(param_1 + 7) = auVar11;
  if (cVar10 == '\0') {
    return 2;
  }
  uVar8 = *(ulong *)puVar3;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000001 < puVar4) goto joined_r0x00995e70;
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000001 < puVar4) goto joined_r0x00995e70;
  }
  puVar4 = (undefined1 *)FUN_00996984(uVar8 & 0xffffffff,puVar4,0);
joined_r0x00995e70:
  if (puVar4 != (undefined1 *)0x0) {
    puVar4[0x45] = cVar7;
    puVar4[0x44] = 1;
  }
  return 2;
}


// ===== 00995f34  <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle_as_tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::overflow::Overflow<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>::push =====

/* <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle as
   tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::overflow::Overflow<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>::push
    */

void <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle_as_tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::overflow::Overflow<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>
     ::push(long param_1,ulong *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  
  pcVar1 = (char *)(param_1 + 0xd8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00992300;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 0xd8,param_2,0xffffffff);
LAB_00992300:
  if (*(char *)(param_1 + 0x108) == '\x01') {
    do {
      uVar4 = *param_2;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = uVar4 - 0x40;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = uVar4 >> 6;
    if (uVar4 == 1) {
      (**(code **)(param_2[2] + 0x10))(param_2);
    }
    else if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0xc0);
    if (*(long *)(param_1 + 0x100) == 0) {
      *(ulong **)(param_1 + 0xf8) = param_2;
    }
    else {
      *(ulong **)(*(long *)(param_1 + 0x100) + 8) = param_2;
    }
    *(ulong **)(param_1 + 0x100) = param_2;
    *(long *)(param_1 + 0xc0) = lVar5 + 1;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 00995f38  <&tokio::runtime::scheduler::multi_thread::handle::Handle_as_tokio::runtime::scheduler::lock::Lock<tokio::runtime::scheduler::inject::synced::Synced>>::lock =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&tokio::runtime::scheduler::multi_thread::handle::Handle as
   tokio::runtime::scheduler::lock::Lock<tokio::runtime::scheduler::inject::synced::Synced>>::lock
    */

char * __rustcall
<&tokio::runtime::scheduler::multi_thread::handle::Handle_as_tokio::runtime::scheduler::lock::Lock<tokio::runtime::scheduler::inject::synced::Synced>>
::lock(long param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  
  pcVar1 = (char *)(param_1 + 0xd8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      return pcVar1;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar1,param_2,0xffffffff);
  return pcVar1;
}


// ===== 00995f80  <tokio::io::util::mem::DuplexStream_as_tokio::io::async_write::AsyncWrite>::poll_flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::DuplexStream as tokio::io::async_write::AsyncWrite>::poll_flush */

undefined1  [16] __rustcall
<tokio::io::util::mem::DuplexStream_as_tokio::io::async_write::AsyncWrite>::poll_flush
          (long param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  
  pcVar1 = (char *)(*(long *)(param_1 + 8) + 0x10);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00995fa8;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar1,param_2,0xffffffff);
LAB_00995fa8:
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return ZEXT816(0);
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return ZEXT816(0);
}


// ===== 00996008  <tokio::io::util::mem::DuplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::DuplexStream as tokio::io::async_write::AsyncWrite>::poll_write */

undefined8 __rustcall
<tokio::io::util::mem::DuplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  pcVar1 = (char *)(lVar5 + 0x10);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00996034;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar5 + 0x10,param_2,0xffffffff);
LAB_00996034:
                    /* try { // try from 00996034 to 0099603b has its CatchHandler @ 009960b4 */
  uVar4 = <tokio::io::util::mem::SimplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write
                    (lVar5 + 0x18,param_2,param_3,param_4);
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return uVar4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar4;
}


// ===== 009960ec  <tokio::io::util::mem::DuplexStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::DuplexStream as tokio::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio::io::util::mem::DuplexStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
          (long param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  pcVar1 = (char *)(lVar6 + 0x10);
  if (*pcVar1 == '\0') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      lVar2 = *(long *)(lVar6 + 0x40);
      uVar3 = *(undefined8 *)(lVar6 + 0x48);
      *(undefined1 *)(lVar6 + 0x60) = 1;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      goto joined_r0x00996178;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar6 + 0x10,param_2,0xffffffff);
  lVar2 = *(long *)(lVar6 + 0x40);
  uVar3 = *(undefined8 *)(lVar6 + 0x48);
  *(undefined1 *)(lVar6 + 0x60) = 1;
  *(undefined8 *)(lVar6 + 0x40) = 0;
joined_r0x00996178:
  if (lVar2 != 0) {
                    /* try { // try from 0099612c to 0099612f has its CatchHandler @ 009961a4 */
    (**(code **)(lVar2 + 8))(uVar3);
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return ZEXT816(0);
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\0';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return ZEXT816(0);
}


// ===== 009961dc  <tokio::io::util::mem::DuplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::mem::DuplexStream as tokio::io::async_write::AsyncWrite>::poll_write_vectored
    */

undefined8 __rustcall
<tokio::io::util::mem::DuplexStream_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  pcVar1 = (char *)(lVar5 + 0x10);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00996208;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar5 + 0x10,param_2,0xffffffff);
LAB_00996208:
                    /* try { // try from 00996208 to 0099620f has its CatchHandler @ 00996288 */
  uVar4 = <tokio::io::util::mem::SimplexStream_as_tokio::io::async_write::AsyncWrite>::
          poll_write_vectored(lVar5 + 0x18,param_2,param_3,param_4);
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return uVar4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar4;
}


// ===== 009962c0  <tokio::io::util::sink::Sink_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::sink::Sink as core::fmt::Debug>::fmt */

void __rustcall
<tokio::io::util::sink::Sink_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"Sink { .. }",0xb);
  return;
}


// ===== 009962d4  <tokio::runtime::scheduler::multi_thread::handle::Handle_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::multi_thread::handle::Handle as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::scheduler::multi_thread::handle::Handle_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct
            (auStack_20,param_2,"multi_thread::Handle { ... }",0x1c);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 0099630c  FUN_0099630c =====

char FUN_0099630c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  char cVar11;
  undefined1 unaff_w27;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined **local_98;
  long *plStack_90;
  undefined ***local_88;
  undefined ***pppuStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 uStack_41;
  
  uVar10 = DAT_00b0f6c0;
  if (DAT_00b0f6c0 == 0) {
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(&DAT_00b0f6c0);
    puVar5 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar10);
  }
  else {
    puVar5 = (undefined8 *)pthread_getspecific((pthread_key_t)DAT_00b0f6c0);
  }
  if (puVar5 < (undefined8 *)0x2) {
    puVar5 = (undefined8 *)FUN_00996818(uVar10 & 0xffffffff,puVar5,0);
  }
  if (puVar5 == (undefined8 *)0x0) {
    cVar4 = '\x02';
  }
  else {
    plStack_90 = (long *)*puVar5;
    do {
      lVar9 = *plStack_90;
      cVar4 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar1) {
        *plStack_90 = lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9965e0);
      (*pcVar3)();
    }
    plStack_90 = plStack_90 + 2;
    local_98 = &PTR_FUN_00af38d0;
    local_88 = &local_98;
    local_78 = 0;
    pppuStack_80 = local_88;
    local_68 = param_2;
                    /* try { // try from 00996398 to 009963af has its CatchHandler @ 009965e0 */
    auVar12 = <std::time::std::time::Instant>::now();
    auVar13 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
              ::add(auVar12._0_8_,auVar12._8_8_,param_3,param_4,
                    &PTR_s__root__cargo_registry_src_index__00af4788);
    puVar2 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    lVar9 = auVar13._0_8_;
    while( true ) {
      uVar10 = *(ulong *)puVar2;
      if (uVar10 == 0) {
        uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(puVar2);
        pvVar6 = pthread_getspecific((pthread_key_t)uVar10);
      }
      else {
        pvVar6 = pthread_getspecific((pthread_key_t)uVar10);
      }
      if (pvVar6 < (void *)0x2) {
        pvVar6 = (void *)FUN_00996984(uVar10 & 0xffffffff,pvVar6,0);
      }
      if (pvVar6 == (void *)0x0) {
        cVar11 = '\x02';
      }
      else {
        cVar11 = *(char *)((long)pvVar6 + 0x44);
        unaff_w27 = *(undefined1 *)((long)pvVar6 + 0x45);
        *(undefined2 *)((long)pvVar6 + 0x44) = 0x8001;
      }
                    /* try { // try from 00996400 to 0099640b has its CatchHandler @ 009965e8 */
      cVar4 = FUN_009c690c(&local_68,&local_88);
      if (cVar11 != '\x02') {
        uVar10 = *(ulong *)puVar2;
        if (uVar10 == 0) {
          uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                   lazy_init(puVar2);
          pvVar6 = pthread_getspecific((pthread_key_t)uVar10);
        }
        else {
          pvVar6 = pthread_getspecific((pthread_key_t)uVar10);
        }
        if (pvVar6 < (void *)0x2) {
          pvVar6 = (void *)FUN_00996984(uVar10 & 0xffffffff,pvVar6,0);
        }
        if (pvVar6 != (void *)0x0) {
          *(char *)((long)pvVar6 + 0x44) = cVar11;
          *(undefined1 *)((long)pvVar6 + 0x45) = unaff_w27;
        }
      }
      if (cVar4 != '\x02') break;
                    /* try { // try from 0099644c to 00996547 has its CatchHandler @ 00996604 */
      auVar12 = <std::time::std::time::Instant>::now();
      lVar7 = auVar12._0_8_;
      bVar1 = auVar13._8_4_ <= auVar12._8_4_;
      if (lVar7 != lVar9) {
        bVar1 = lVar9 <= lVar7;
      }
      if (bVar1) break;
      auVar12 = <std::time::Instant_as_core::ops::arith::Sub>::sub
                          (lVar9,auVar13._8_4_,lVar7,auVar12._8_8_ & 0xffffffff);
      uVar10 = DAT_00b0f6c0;
      if (DAT_00b0f6c0 == 0) {
        uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(&DAT_00b0f6c0);
        plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar10);
      }
      else {
        plVar8 = (long *)pthread_getspecific((pthread_key_t)DAT_00b0f6c0);
      }
      if (plVar8 < (long *)0x2) {
        plVar8 = (long *)FUN_00996818(uVar10 & 0xffffffff,plVar8,0);
      }
      if (plVar8 == (long *)0x0) {
                    /* try { // try from 009965b8 to 009965db has its CatchHandler @ 009965e4 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_41,&DAT_00af37a8,
                   &PTR_s__root__cargo_registry_src_index__00af38a0);
      }
      FUN_0097f308(*plVar8 + 0x10,auVar12._0_8_,auVar12._8_8_ & 0xffffffff);
    }
    (*(code *)local_98[3])(plStack_90);
  }
  return cVar4;
}


// ===== 00996620  FUN_00996620 =====

undefined1 (*) [16] FUN_00996620(pthread_key_t param_1,long param_2,uint *param_3)

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
    if ((*param_3 & 1) != 0) goto LAB_0099665c;
  }
  auVar1 = std::sys::random::linux::hashmap_random_keys();
LAB_0099665c:
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


// ===== 009966d0  FUN_009966d0 =====

undefined8 * FUN_009966d0(pthread_key_t param_1,long param_2,uint *param_3)

{
  undefined8 *__pointer;
  undefined8 *__ptr;
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined7 uStack_3f;
  undefined4 uStack_34;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    uVar4 = *(undefined8 *)(param_3 + 2);
    uVar1 = (undefined1)param_3[4];
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_00996710;
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_00996710:
  __pointer = (undefined8 *)malloc(0x18);
  if (__pointer != (undefined8 *)0x0) {
    __pointer[1] = CONCAT71(uStack_3f,uVar1);
    *__pointer = uVar4;
    __pointer[2] = CONCAT44(uStack_34,param_1);
    __ptr = (undefined8 *)pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (undefined8 *)0x0) {
      plVar2 = (long *)*__ptr;
      if ((plVar2 != (long *)0x0) && (lVar3 = *plVar2, *plVar2 = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00996770 to 00996777 has its CatchHandler @ 009967c4 */
        <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(__ptr);
      }
      free(__ptr);
    }
    return __pointer;
  }
                    /* try { // try from 009967b4 to 009967bf has its CatchHandler @ 009967ec */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00996818  FUN_00996818 =====

undefined8 * FUN_00996818(pthread_key_t param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *__pointer;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_3;
    *param_3 = 0;
    if (puVar5 != (undefined8 *)0x0) goto LAB_00996874;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar5 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x28);
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[1] = 1;
  *puVar5 = 1;
LAB_00996874:
  __pointer = (undefined8 *)malloc(0x10);
  if (__pointer != (undefined8 *)0x0) {
    *__pointer = puVar5;
    *(pthread_key_t *)(__pointer + 1) = param_1;
    puVar5 = (undefined8 *)pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (puVar5 != (undefined8 *)0x0) {
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
                    /* try { // try from 009968cc to 009968d3 has its CatchHandler @ 0099692c */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(puVar5);
      }
      free(puVar5);
    }
    return __pointer;
  }
                    /* try { // try from 00996910 to 0099691b has its CatchHandler @ 00996954 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 00996984  FUN_00996984 =====

undefined8 * FUN_00996984(pthread_key_t param_1,long param_2,uint *param_3)

{
  undefined8 *__pointer;
  void *pvVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_34;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  puVar2 = (uint *)"";
  if (param_3 != (uint *)0x0) {
    param_3[0] = 0;
    param_3[1] = 0;
    puVar2 = param_3 + 2;
    if ((*param_3 & 1) == 0) {
      puVar2 = (uint *)"";
    }
  }
  uVar6 = *(undefined8 *)(puVar2 + 10);
  uVar4 = *(undefined8 *)(puVar2 + 8);
  uVar10 = *(undefined8 *)(puVar2 + 0xe);
  uVar8 = *(undefined8 *)(puVar2 + 0xc);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  uVar11 = *(undefined8 *)(puVar2 + 2);
  uVar9 = *(undefined8 *)puVar2;
  uVar7 = *(undefined8 *)(puVar2 + 6);
  uVar5 = *(undefined8 *)(puVar2 + 4);
  __pointer = (undefined8 *)malloc(0x50);
  if (__pointer == (undefined8 *)0x0) {
                    /* try { // try from 00996a5c to 00996a67 has its CatchHandler @ 00996a6c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x50);
  }
  __pointer[5] = uVar6;
  __pointer[4] = uVar4;
  __pointer[7] = uVar10;
  __pointer[6] = uVar8;
  __pointer[9] = CONCAT44(uStack_34,param_1);
  __pointer[8] = uVar3;
  __pointer[1] = uVar11;
  *__pointer = uVar9;
  __pointer[3] = uVar7;
  __pointer[2] = uVar5;
  pvVar1 = pthread_getspecific(param_1);
  pthread_setspecific(param_1,__pointer);
  if (pvVar1 != (void *)0x0) {
    FUN_00996efc(pvVar1);
  }
  return __pointer;
}


// ===== 00996a84  FUN_00996a84 =====

void FUN_00996a84(long *param_1)

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


// ===== 00996ae0  FUN_00996ae0 =====

void FUN_00996ae0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != -1) {
                    /* try { // try from 00996af8 to 00996b0f has its CatchHandler @ 00996b84 */
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
  }
  return;
}


// ===== 00996b9c  FUN_00996b9c =====

void FUN_00996b9c(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long local_18;
  
  if (*param_1 == 2) {
    uVar4 = *(ulong *)(param_1 + 2) & 3;
    if ((1 < uVar4 - 2) && (uVar4 != 0)) {
      local_18 = *(ulong *)(param_1 + 2) - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 2);
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
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::DirEntry>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 00996c20  FUN_00996c20 =====

void FUN_00996c20(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00996c6c  FUN_00996c6c =====

void FUN_00996c6c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      puVar3 = *(ulong **)(param_1 + lVar5 * 8);
      lVar5 = lVar5 + 1;
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
                    /* try { // try from 00996ca4 to 00996ca7 has its CatchHandler @ 00996d10 */
        (**(code **)(puVar3[2] + 0x10))();
      }
      else if (uVar4 == 0) {
                    /* try { // try from 00996ce0 to 00996cf7 has its CatchHandler @ 00996d18 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 1",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3f10);
      }
    } while (lVar5 != param_2);
  }
  return;
}


// ===== 00996d44  FUN_00996d44 =====

void FUN_00996d44(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      puVar3 = *(ulong **)(param_1 + lVar5 * 8);
      lVar5 = lVar5 + 1;
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
                    /* try { // try from 00996d7c to 00996d7f has its CatchHandler @ 00996de8 */
        (**(code **)(puVar3[2] + 0x10))();
      }
      else if (uVar4 == 0) {
                    /* try { // try from 00996db8 to 00996dcf has its CatchHandler @ 00996df0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 1",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3f10);
      }
    } while (lVar5 != param_2);
  }
  return;
}


// ===== 00996e1c  FUN_00996e1c =====

void FUN_00996e1c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 != 0) {
    lVar6 = 0;
    do {
      lVar4 = lVar6 * 0x10;
      lVar6 = lVar6 + 1;
      puVar3 = *(ulong **)(param_1 + lVar4);
      do {
        uVar5 = *puVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = uVar5 - 0x80;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (uVar5 < 0x80) {
                    /* try { // try from 00996eac to 00996ec3 has its CatchHandler @ 00996ed0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 2",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3e80);
      }
      if (uVar5 < 0xc0) {
                    /* try { // try from 00996e90 to 00996e93 has its CatchHandler @ 00996ec8 */
        (**(code **)(puVar3[2] + 0x10))();
      }
    } while (lVar6 != param_2);
  }
  return;
}


// ===== 00996efc  FUN_00996efc =====

void FUN_00996efc(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)((long)param_1 + 8) != 2) {
    if (*(long *)((long)param_1 + 8) == 0) {
      plVar3 = *(long **)((long)param_1 + 0x10);
      do {
        lVar4 = *plVar3;
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
        drop_slow((long)param_1 + 0x10);
      }
    }
    else {
      plVar3 = *(long **)((long)param_1 + 0x10);
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 00996f3c to 00996f6b has its CatchHandler @ 00996f80 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
        ::drop_slow((long)param_1 + 0x10);
      }
    }
  }
  free(param_1);
  return;
}


// ===== 00996fb8  FUN_00996fb8 =====

void FUN_00996fb8(long param_1)

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


// ===== 00997014  FUN_00997014 =====

void FUN_00997014(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00997024 to 00997037 has its CatchHandler @ 009970ac */
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


// ===== 009970c4  FUN_009970c4 =====

void FUN_009970c4(long *param_1)

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


// ===== 00997110  FUN_00997110 =====

void FUN_00997110(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x38);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0099713c to 0099713f has its CatchHandler @ 0099726c */
    <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
    ::drop_slow();
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
                    /* try { // try from 00997164 to 00997167 has its CatchHandler @ 00997264 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
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
                    /* try { // try from 0099718c to 0099718f has its CatchHandler @ 0099725c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
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
                    /* try { // try from 009971b4 to 009971b7 has its CatchHandler @ 00997254 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
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
                    /* try { // try from 009971dc to 009971df has its CatchHandler @ 0099724c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
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
                    /* try { // try from 00997204 to 00997207 has its CatchHandler @ 00997244 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0xa8);
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
      ::drop_slow((undefined8 *)(param_1 + 0xa8));
      return;
    }
  }
  return;
}


// ===== 00997370  FUN_00997370 =====

void FUN_00997370(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 00997380 to 00997383 has its CatchHandler @ 00997418 */
  <tokio::runtime::runtime::Runtime_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar4 = param_1 + 5;
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 != 0) {
                    /* try { // try from 009973a0 to 009973a3 has its CatchHandler @ 00997408 */
      FUN_0097cc54();
    }
  }
  if (param_1[6] == 0) {
    plVar4 = (long *)param_1[7];
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(param_1 + 7);
    }
  }
  else {
    plVar4 = (long *)param_1[7];
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
                    /* try { // try from 009973c8 to 009973f7 has its CatchHandler @ 00997410 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(param_1 + 7);
    }
  }
  FUN_009974cc(param_1 + 8);
  return;
}


// ===== 00997458  FUN_00997458 =====

void FUN_00997458(long param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = *(void **)(param_1 + 8);
  if (__ptr != (void *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00997478 to 0099747f has its CatchHandler @ 009974a8 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 009974cc  FUN_009974cc =====

void FUN_009974cc(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
                    /* try { // try from 009974e0 to 009974e7 has its CatchHandler @ 009975cc */
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
                    /* try { // try from 00997504 to 0099750b has its CatchHandler @ 009975c4 */
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
                    /* try { // try from 00997540 to 00997543 has its CatchHandler @ 00997590 */
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


// ===== 00997608  FUN_00997608 =====

void FUN_00997608(long *param_1)

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
                    /* try { // try from 00997650 to 00997653 has its CatchHandler @ 009976a0 */
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


// ===== 009976d8  FUN_009976d8 =====

void FUN_009976d8(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_58;
  
  if (param_2 != 0) {
    lVar7 = 0;
    do {
      piVar1 = (int *)(param_1 + lVar7 * 0x10);
      if (*piVar1 == 2) {
        uVar5 = *(ulong *)(piVar1 + 2) & 3;
        if (1 < uVar5 - 2 && uVar5 != 0) {
          local_58 = *(ulong *)(piVar1 + 2) - 1;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
        }
      }
      else {
        plVar4 = *(long **)(piVar1 + 2);
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
                    /* try { // try from 00997770 to 0099778b has its CatchHandler @ 009977ac */
          <alloc::sync::[n]::alloc::sync::Arc<std::fs::DirEntry>>::drop_slow();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != param_2);
  }
  return;
}


// ===== 009977d8  std::sys::backtrace::__rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<<tokio::runtime::blocking::pool::[4]::{backref_35}::Spawner>::spawn_thread::{closure#0},()>::{closure#0}::{closure#0}::{closure#0},()> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::backtrace::__rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<<tokio::runtime::blocking::pool::[4]::{backref
   35}::Spawner>::spawn_thread::{closure#0}, ()>::{closure#0}::{closure#0}::{closure#0}, ()> */

void __rustcall
std::sys::backtrace::
__rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<<tokio::runtime::blocking::pool::[4]::_backref_35_::Spawner>::spawn_thread::_closure_0_,()>::_closure_0_::_closure_0_::_closure_0_,()>
          (undefined8 *param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_1[1];
  local_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  <std::thread::spawnhook::std::thread::spawnhook::ChildSpawnHooks>::inherit_and_run(&local_30);
  return;
}


// ===== 00997800  std::sys::backtrace::__rust_begin_short_backtrace<<tokio::runtime::blocking::pool::[4]::{backref_31}::Spawner>::spawn_thread::{closure#0},()> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::backtrace::__rust_begin_short_backtrace<<tokio::runtime::blocking::pool::[4]::{backref
   31}::Spawner>::spawn_thread::{closure#0}, ()> */

void __rustcall
std::sys::backtrace::
__rust_begin_short_backtrace<<tokio::runtime::blocking::pool::[4]::_backref_31_::Spawner>::spawn_thread::_closure_0_,()>
          (long *param_1)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined **local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined **local_48;
  code *local_40;
  undefined8 uStack_38;
  
  uVar7 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar7 == 0) {
                    /* try { // try from 009979c0 to 00997a27 has its CatchHandler @ 00997a54 */
    uVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar3 = pthread_getspecific((pthread_key_t)uVar7);
  }
  else {
    pvVar3 = pthread_getspecific((pthread_key_t)uVar7);
  }
  if (pvVar3 < (void *)0x2) {
    pvVar3 = (void *)FUN_00996984(uVar7 & 0xffffffff,pvVar3,0);
  }
                    /* try { // try from 00997844 to 00997853 has its CatchHandler @ 00997a54 */
  if ((pvVar3 == (void *)0x0) ||
     (<tokio::runtime::context::current::tokio::runtime::context::Context>::set_current
                (&local_48,pvVar3,param_1), local_48 == (undefined **)0xffffffffffffffff)) {
    local_48 = &PTR_DAT_00af5070;
    local_40 = FUN_0099f78c;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ab692,&local_48,&PTR_s__root__cargo_registry_src_index__00af5080);
  }
  plVar8 = param_1 + 1;
  uStack_50 = uStack_38;
  local_58 = (long *)local_40;
  local_60 = local_48;
  lVar6 = 0x1c8;
  if ((int)*param_1 == 0) {
    lVar6 = 0x168;
  }
                    /* try { // try from 00997890 to 009978c7 has its CatchHandler @ 00997a44 */
  FUN_009a3e0c(*(long *)(*plVar8 + lVar6) + 0x10,param_1[3]);
  local_48 = (undefined **)param_1[2];
  do {
    puVar5 = *local_48;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_48,0x10);
    if (bVar2) {
      *local_48 = puVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar5 + -1 == (undefined *)0x0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Sender<()>>>::drop_slow(&local_48);
  }
                    /* try { // try from 009978cc to 009978df has its CatchHandler @ 00997a2c */
  FUN_0097c6e8(&PTR_FUN_00af47a0,&local_60,&uStack_50);
  if (local_60 != (undefined **)0x2) {
    if (local_60 == (undefined **)0x0) {
      do {
        lVar6 = *local_58;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_58,0x10);
        if (bVar2) {
          *local_58 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
        drop_slow(&local_58);
      }
    }
    else {
      do {
        lVar6 = *local_58;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_58,0x10);
        if (bVar2) {
          *local_58 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0099790c to 00997943 has its CatchHandler @ 00997a54 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
        ::drop_slow(&local_58);
      }
    }
  }
  if (*param_1 == 0) {
    plVar4 = (long *)*plVar8;
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
      drop_slow(plVar8);
      return;
    }
  }
  else {
    plVar4 = (long *)*plVar8;
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(plVar8);
    }
  }
  return;
}


// ===== 00997a94  FUN_00997a94 =====

void FUN_00997a94(undefined8 *param_1)

{
  pthread_key_t __key;
  int iVar1;
  long *plVar2;
  long lVar3;
  
  __key = *(pthread_key_t *)(param_1 + 2);
  pthread_setspecific(__key,&DAT_00000001);
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) && (lVar3 = *plVar2, *plVar2 = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00997ad0 to 00997ad7 has its CatchHandler @ 00997b00 */
    <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(param_1);
  }
  free(param_1);
  iVar1 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 00997aec to 00997aef has its CatchHandler @ 00997b2c */
  std::sys::thread_local::guard::key::enable(iVar1);
  return;
}


// ===== 00997b38  FUN_00997b38 =====

void FUN_00997b38(undefined8 *param_1)

{
  pthread_key_t __key;
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  __key = *(pthread_key_t *)(param_1 + 1);
  pthread_setspecific(__key,&DAT_00000001);
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
                    /* try { // try from 00997b78 to 00997b7f has its CatchHandler @ 00997ba8 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(param_1);
  }
  free(param_1);
  iVar3 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 00997b94 to 00997b97 has its CatchHandler @ 00997bd4 */
  std::sys::thread_local::guard::key::enable(iVar3);
  return;
}


// ===== 00997be0  FUN_00997be0 =====

void FUN_00997be0(long param_1)

{
  pthread_key_t __key;
  int iVar1;
  
  __key = *(pthread_key_t *)(param_1 + 0x48);
  pthread_setspecific(__key,&DAT_00000001);
                    /* try { // try from 00997c00 to 00997c17 has its CatchHandler @ 00997c24 */
  FUN_00996efc(param_1);
  iVar1 = pthread_setspecific(__key,(void *)0x0);
  std::sys::thread_local::guard::key::enable(iVar1);
  return;
}


// ===== 00997c30  <tokio::time::sleep::tokio::time::sleep::Sleep>::far_future =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::sleep::tokio::time::sleep::Sleep>::far_future */

void __rustcall
<tokio::time::sleep::tokio::time::sleep::Sleep>::far_future(undefined1 (*param_1) [16])

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  
  auVar2 = <std::time::std::time::Instant>::now();
  auVar3 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
           ::add(auVar2._0_8_,auVar2._8_8_,0x38640900,0,
                 &PTR_s__root__cargo_registry_src_index__00af62e8);
  auVar2 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af47c8);
  lVar1 = 0x140;
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(auVar2._8_8_ + lVar1 + 0x80) != -1) {
    *param_1 = auVar2;
    *(undefined8 *)param_1[2] = 0;
    *(undefined1 (*) [12])param_1[1] = auVar3;
    param_1[7][0] = 0;
    return;
  }
                    /* try { // try from 00997cc4 to 00997cdb has its CatchHandler @ 00997ce0 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,&PTR_s__root__cargo_registry_src_index__00af47c8);
}


// ===== 00997cf8  <tokio::time::sleep::tokio::time::sleep::Sleep>::is_elapsed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::sleep::tokio::time::sleep::Sleep>::is_elapsed */

uint __rustcall <tokio::time::sleep::tokio::time::sleep::Sleep>::is_elapsed(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar2 != 0) {
    lVar1 = FUN_009b4558();
    if (*(long *)(lVar1 + 0x18) == -1) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x70);
    }
    else {
      uVar2 = 0;
    }
  }
  return (uint)uVar2 & 1;
}


// ===== 00997d3c  <tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout */

void __rustcall
<tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout
          (undefined1 (*param_1) [16],undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_5);
  lVar1 = 0x140;
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(auVar2._8_8_ + lVar1 + 0x80) != -1) {
    *param_1 = auVar2;
    *(undefined8 *)param_1[2] = 0;
    *(undefined8 *)param_1[1] = param_2;
    *(undefined4 *)(param_1[1] + 8) = param_3;
    param_1[7][0] = 0;
    return;
  }
                    /* try { // try from 00997db4 to 00997dc7 has its CatchHandler @ 00997dcc */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,param_5);
}


// ===== 00997de4  <tokio::time::sleep::tokio::time::sleep::Sleep>::reset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::sleep::tokio::time::sleep::Sleep>::reset */

void __rustcall <tokio::time::sleep::tokio::time::sleep::Sleep>::reset(void)

{
  FUN_009b466c();
  return;
}


// ===== 00997dec  <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::shutdown_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::shutdown_timeout */

void __rustcall
<tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::shutdown_timeout
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x30) != 1) goto LAB_00997ea0;
  lVar5 = *(long *)(param_1 + 0x38);
  pcVar1 = (char *)(lVar5 + 0xe8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00997ecc;
  }
  else {
    ClearExclusiveLocal();
LAB_00997ecc:
                    /* try { // try from 00997ecc to 00997eff has its CatchHandler @ 00997f04 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (lVar5 + 0xe8,param_2,0xffffffff);
  }
  if (*(char *)(lVar5 + 0x118) == '\x01') {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    *(undefined1 *)(lVar5 + 0x118) = 1;
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(lVar5 + 0xe8,0)
        ;
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + 0x80) << 4;
      lVar4 = *(long *)(lVar5 + 0x78) + 8;
      do {
                    /* try { // try from 00997e88 to 00997e93 has its CatchHandler @ 00997f08 */
        FUN_0097e264(lVar4,lVar5 + 0x140);
        lVar6 = lVar6 + -0x10;
        lVar4 = lVar4 + 0x10;
      } while (lVar6 != 0);
    }
  }
LAB_00997ea0:
                    /* try { // try from 00997ea0 to 00997eaf has its CatchHandler @ 00997f04 */
  FUN_009a33bc(param_1 + 0x40,param_2,param_3);
  FUN_00997370(param_1);
  return;
}


// ===== 00997f20  <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::shutdown_background =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::shutdown_background */

void __rustcall
<tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::shutdown_background
          (long param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x30) != 1) goto LAB_00997fc8;
  lVar5 = *(long *)(param_1 + 0x38);
  pcVar1 = (char *)(lVar5 + 0xe8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00997ff0;
  }
  else {
    ClearExclusiveLocal();
LAB_00997ff0:
                    /* try { // try from 00997ff0 to 00998023 has its CatchHandler @ 00998028 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (lVar5 + 0xe8,param_2,0xffffffff);
  }
  if (*(char *)(lVar5 + 0x118) == '\x01') {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    *(undefined1 *)(lVar5 + 0x118) = 1;
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(lVar5 + 0xe8,0)
        ;
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + 0x80) << 4;
      lVar4 = *(long *)(lVar5 + 0x78) + 8;
      do {
                    /* try { // try from 00997fb0 to 00997fbb has its CatchHandler @ 0099802c */
        FUN_0097e264(lVar4,lVar5 + 0x140);
        lVar6 = lVar6 + -0x10;
        lVar4 = lVar4 + 0x10;
      } while (lVar6 != 0);
    }
  }
LAB_00997fc8:
                    /* try { // try from 00997fc8 to 00997fd7 has its CatchHandler @ 00998028 */
  FUN_009a33bc(param_1 + 0x40,0,0);
  FUN_00997370(param_1);
  return;
}


// ===== 00998044  <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::new */

void __rustcall <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::new(undefined8 param_1)

{
  undefined1 auStack_100 [213];
  undefined2 local_2b;
  
  FUN_009af138(auStack_100,1);
  local_2b = 0x101;
                    /* try { // try from 0099806c to 00998077 has its CatchHandler @ 00998090 */
  <tokio::runtime::builder::tokio::runtime::builder::Builder>::build(param_1,auStack_100);
  FUN_00997110(auStack_100);
  return;
}


// ===== 009980a8  <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::enter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::enter */

void __rustcall
<tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::enter(long *param_1,long param_2)

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
                (&local_48,puVar1,param_2 + 0x30), local_48 != (undefined **)0xffffffffffffffff)) {
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


// ===== 0099817c  <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::metrics =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::metrics */

undefined8 __rustcall
<tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::metrics(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  plVar5 = *(long **)(param_1 + 0x38);
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x9981b4);
  (*pcVar4)();
}


// ===== 009981b4  <tokio::net::unix::socketaddr::tokio::net::unix::socketaddr::SocketAddr>::is_unnamed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socketaddr::tokio::net::unix::socketaddr::SocketAddr>::is_unnamed */

void __rustcall
<tokio::net::unix::socketaddr::tokio::net::unix::socketaddr::SocketAddr>::is_unnamed(void)

{
  (*(code *)PTR_is_unnamed_00b05098)();
  return;
}


// ===== 009981b8  <tokio::net::unix::socketaddr::tokio::net::unix::socketaddr::SocketAddr>::as_pathname =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socketaddr::tokio::net::unix::socketaddr::SocketAddr>::as_pathname */

void __rustcall
<tokio::net::unix::socketaddr::tokio::net::unix::socketaddr::SocketAddr>::as_pathname(void)

{
  (*(code *)PTR_as_pathname_00b050a0)();
  return;
}


// ===== 009981bc  <tokio::runtime::task::abort::tokio::runtime::task::abort::AbortHandle>::is_finished =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::abort::tokio::runtime::task::abort::AbortHandle>::is_finished */

ulong __rustcall
<tokio::runtime::task::abort::tokio::runtime::task::abort::AbortHandle>::is_finished
          (undefined8 *param_1)

{
  return *(ulong *)*param_1 >> 1 & 1;
}


// ===== 009981cc  <tokio::runtime::task::abort::tokio::runtime::task::abort::AbortHandle>::abort =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::abort::tokio::runtime::task::abort::AbortHandle>::abort */

void __rustcall
<tokio::runtime::task::abort::tokio::runtime::task::abort::AbortHandle>::abort(undefined8 *param_1)

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
      if (cVar1 == '\0') goto LAB_00998284;
    }
    ClearExclusiveLocal();
    uVar4 = *puVar5;
  }
  bVar3 = false;
LAB_00998284:
  if (!bVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00998298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar5[2] + 8))();
  return;
}


// ===== 009982c0  <tokio::runtime::task::error::tokio::runtime::task::error::JoinError>::into_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::error::tokio::runtime::task::error::JoinError>::into_panic */

void __rustcall
<tokio::runtime::task::error::tokio::runtime::task::error::JoinError>::into_panic
          (long *param_1,undefined8 param_2)

{
  long local_38 [3];
  
  if (param_1[1] != 0) {
    return;
  }
  local_38[0] = *param_1;
  local_38[2] = param_1[2];
  if (local_38[0] == 0) {
    return;
  }
  local_38[1] = 0;
                    /* try { // try from 00998318 to 00998333 has its CatchHandler @ 00998338 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("`JoinError` reason is not a panic.",0x22,local_38,&PTR_FUN_00af47a8,param_2);
}


// ===== 00998350  FUN_00998350 =====

void FUN_00998350(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *local_18;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == param_2) {
    local_18 = param_2;
    plVar2 = (long *)core[bcece726f298455b]::panicking::assert_failed::
                     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::notify::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::notify::Waiter>>>
                               (1,param_1,&local_18,0,param_5,
                                &PTR_s__root__cargo_registry_src_index__00af47e0);
    lVar6 = *plVar2;
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<core::task::wake::Waker>>::grow_one();
    uVar1 = plVar2[2];
    if ((ulong)(lVar6 - plVar2[3]) < uVar1) {
      uVar4 = lVar6 - uVar1;
      uVar5 = plVar2[3] - uVar4;
      if ((uVar5 < uVar4) && (uVar5 <= (ulong)(*plVar2 - lVar6))) {
        memcpy((void *)(plVar2[1] + lVar6 * 0x10),(void *)plVar2[1],uVar5 * 0x10);
        return;
      }
      lVar6 = *plVar2 - uVar4;
      memmove((void *)(plVar2[1] + lVar6 * 0x10),(void *)(plVar2[1] + uVar1 * 0x10),uVar4 * 0x10);
      plVar2[2] = lVar6;
    }
    return;
  }
  *param_2 = 0;
  param_2[1] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_2;
  }
  *param_1 = param_2;
  if (param_1[1] != 0) {
    return;
  }
  param_1[1] = param_2;
  return;
}


// ===== 009983bc  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<core::result::Result<tokio::fs::read_dir::DirEntry,{backref_26}::io::error::Error>>>::grow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<core::result::Result<tokio::fs::read_dir::DirEntry,
   {backref 26}::io::error::Error>>>::grow */

void __rustcall
<alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<core::result::Result<tokio::fs::read_dir::DirEntry,{backref_26}::io::error::Error>>>
::grow(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<core::task::wake::Waker>>::grow_one();
  uVar1 = param_1[2];
  if ((ulong)(lVar4 - param_1[3]) < uVar1) {
    uVar2 = lVar4 - uVar1;
    uVar3 = param_1[3] - uVar2;
    if ((uVar3 < uVar2) && (uVar3 <= (ulong)(*param_1 - lVar4))) {
      memcpy((void *)(param_1[1] + lVar4 * 0x10),(void *)param_1[1],uVar3 * 0x10);
      return;
    }
    lVar4 = *param_1 - uVar2;
    memmove((void *)(param_1[1] + lVar4 * 0x10),(void *)(param_1[1] + uVar1 * 0x10),uVar2 * 0x10);
    param_1[2] = lVar4;
  }
  return;
}


// ===== 00998444  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref_26}::scheduler::current_thread::Handle>>>>::grow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref
   26}::scheduler::current_thread::Handle>>>>::grow */

void __rustcall
<alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref_26}::scheduler::current_thread::Handle>>>>
::grow(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
  ::grow_one();
  uVar1 = param_1[2];
  if ((ulong)(lVar4 - param_1[3]) < uVar1) {
    uVar2 = lVar4 - uVar1;
    uVar3 = param_1[3] - uVar2;
    if ((uVar3 < uVar2) && (uVar3 <= (ulong)(*param_1 - lVar4))) {
      memcpy((void *)(param_1[1] + lVar4 * 8),(void *)param_1[1],uVar3 * 8);
      return;
    }
    lVar4 = *param_1 - uVar2;
    memmove((void *)(param_1[1] + lVar4 * 8),(void *)(param_1[1] + uVar1 * 8),uVar2 * 8);
    param_1[2] = lVar4;
  }
  return;
}


// ===== 009984cc  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref_28}::task::local::Shared>>>>::grow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref
   28}::task::local::Shared>>>>::grow */

void __rustcall
<alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref_28}::task::local::Shared>>>>
::grow(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
  ::grow_one();
  uVar1 = param_1[2];
  if ((ulong)(lVar4 - param_1[3]) < uVar1) {
    uVar2 = lVar4 - uVar1;
    uVar3 = param_1[3] - uVar2;
    if ((uVar3 < uVar2) && (uVar3 <= (ulong)(*param_1 - lVar4))) {
      memcpy((void *)(param_1[1] + lVar4 * 8),(void *)param_1[1],uVar3 * 8);
      return;
    }
    lVar4 = *param_1 - uVar2;
    memmove((void *)(param_1[1] + lVar4 * 8),(void *)(param_1[1] + uVar1 * 8),uVar2 * 8);
    param_1[2] = lVar4;
  }
  return;
}


// ===== 00998554  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::blocking::pool::Task>>::grow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::blocking::pool::Task>>::grow
    */

void __rustcall
<alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::blocking::pool::Task>>
::grow(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<core::task::wake::Waker>>::grow_one();
  uVar1 = param_1[2];
  if ((ulong)(lVar4 - param_1[3]) < uVar1) {
    uVar2 = lVar4 - uVar1;
    uVar3 = param_1[3] - uVar2;
    if ((uVar3 < uVar2) && (uVar3 <= (ulong)(*param_1 - lVar4))) {
      memcpy((void *)(param_1[1] + lVar4 * 0x10),(void *)param_1[1],uVar3 * 0x10);
      return;
    }
    lVar4 = *param_1 - uVar2;
    memmove((void *)(param_1[1] + lVar4 * 0x10),(void *)(param_1[1] + uVar1 * 0x10),uVar2 * 0x10);
    param_1[2] = lVar4;
  }
  return;
}


// ===== 009985dc  tokio::io::stderr::stderr =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::stderr::stderr */

void __rustcall tokio::io::stderr::stderr(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_INSTANCE_00b01150;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = puVar1;
  *param_1 = 0;
  param_1[1] = 1;
  return;
}


// ===== 009985fc  tokio::time::sleep::sleep_until =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::time::sleep::sleep_until */

void __rustcall
tokio::time::sleep::sleep_until
          (undefined1 (*param_1) [16],undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_4);
  lVar1 = 0x140;
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(auVar2._8_8_ + lVar1 + 0x80) != -1) {
    *param_1 = auVar2;
    *(undefined8 *)param_1[2] = 0;
    *(undefined8 *)param_1[1] = param_2;
    *(undefined4 *)(param_1[1] + 8) = param_3;
    param_1[7][0] = 0;
    return;
  }
                    /* try { // try from 00998674 to 00998687 has its CatchHandler @ 0099868c */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,param_4);
}


// ===== 009986a4  tokio::time::sleep::sleep =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::time::sleep::sleep */

void __rustcall
tokio::time::sleep::sleep
          (undefined1 (*param_1) [16],undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 local_50 [12];
  undefined1 local_40 [16];
  
  local_50 = <std::time::std::time::Instant>::now();
  auVar3 = <std::time::[5]::std::time::SystemTime>::checked_add(local_50,param_2,param_3);
  if (auVar3._8_4_ == -1) {
    auVar2 = <std::time::std::time::Instant>::now();
    auVar3 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
             ::add(auVar2._0_8_,auVar2._8_8_,0x38640900,0,
                   &PTR_s__root__cargo_registry_src_index__00af62e8);
    local_40 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_4)
    ;
    lVar1 = 0x140;
    if ((local_40 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      lVar1 = 0xe0;
    }
    if (*(int *)(local_40._8_8_ + lVar1 + 0x80) != -1) {
      *param_1 = local_40;
      *(undefined8 *)param_1[2] = 0;
      *(undefined1 (*) [12])param_1[1] = auVar3;
      param_1[7][0] = 0;
      return;
    }
                    /* try { // try from 009987d8 to 009987eb has its CatchHandler @ 009987f0 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
               ,0x73,param_4);
  }
  local_40 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_4);
  lVar1 = 0x140;
  if ((local_40 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(local_40._8_8_ + lVar1 + 0x80) != -1) {
    *param_1 = local_40;
    *(undefined8 *)param_1[2] = 0;
    *(undefined1 (*) [12])param_1[1] = auVar3;
    param_1[7][0] = 0;
    return;
  }
                    /* try { // try from 009987c0 to 009987d3 has its CatchHandler @ 00998804 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
             ,0x73,param_4);
}


// ===== 0099881c  tokio::util::memchr::memchr =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::util::memchr::memchr */

undefined1  [16] __rustcall tokio::util::memchr::memchr(uint param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  
  pvVar1 = ::memchr(param_2,param_1 & 0xff,param_3);
  auVar2._8_8_ = (long)pvVar1 - (long)param_2;
  auVar2._1_7_ = 0;
  auVar2[0] = pvVar1 != (void *)0x0;
  return auVar2;
}


// ===== 00998854  tokio::io::util::read_exact::eof =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::util::read_exact::eof */

void __rustcall tokio::io::util::read_exact::eof(void)

{
  <alloc::io::error::core::io::error::Error>::new<&str>(0x25,"early eof",9);
  return;
}


// ===== 00998868  tokio::runtime::context::runtime_mt::current_enter_context =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::context::runtime_mt::current_enter_context */

undefined1 __rustcall tokio::runtime::context::runtime_mt::current_enter_context(void)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar2 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar1 = pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    pvVar1 = pthread_getspecific((pthread_key_t)uVar2);
  }
  if (pvVar1 < (void *)0x2) {
    pvVar1 = (void *)FUN_00996984(uVar2 & 0xffffffff,pvVar1,0);
  }
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  return *(undefined1 *)((long)pvVar1 + 0x46);
}


// ===== 009988ec  tokio::runtime::context::blocking::disallow_block_in_place =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::context::blocking::disallow_block_in_place */

byte __rustcall tokio::runtime::context::blocking::disallow_block_in_place(void)

{
  byte bVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar3);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar3);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00996984(uVar3 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  bVar1 = *(byte *)((long)pvVar2 + 0x46);
  if ((bVar1 & 1) != 0) {
    *(undefined1 *)((long)pvVar2 + 0x46) = 0;
  }
  return bVar1 & 1;
}


// ===== 0099897c  tokio::runtime::context::blocking::try_enter_blocking_region =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::context::blocking::try_enter_blocking_region */

byte __rustcall tokio::runtime::context::blocking::try_enter_blocking_region(void)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
  }
  if (puVar2 <= &DAT_00000001) {
    puVar2 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar2,0);
  }
  if (puVar2 == (undefined1 *)0x0) {
    bVar1 = 2;
  }
  else {
    bVar1 = puVar2[0x46] == '\x02';
  }
  return bVar1 == 2 | bVar1 & 1;
}


// ===== 00998a18  <tokio::io::stderr::Stderr_as_tokio::io::async_write::AsyncWrite>::poll_flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stderr::Stderr as tokio::io::async_write::AsyncWrite>::poll_flush */

undefined1  [16] __rustcall
<tokio::io::stderr::Stderr_as_tokio::io::async_write::AsyncWrite>::poll_flush
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
        goto LAB_0098ff50;
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
      uVar7 = FUN_009a1624(&uStack_d8,&PTR_s__root__cargo_registry_src_index__00af4448);
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
      goto LAB_0098ff54;
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
      if (cVar1 != '\0') goto LAB_0098ff18;
    }
    else {
      ClearExclusiveLocal();
LAB_0098ff18:
      (**(code **)(plVar4[2] + 0x20))();
    }
    param_1[4] = uVar3;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    if ((uVar6 & 1) != 0) {
LAB_0098ff50:
      uVar5 = 0;
LAB_0098ff54:
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
  goto LAB_0098ff50;
}


// ===== 00998a1c  <tokio::io::stderr::Stderr_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stderr::Stderr as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::io::stderr::Stderr_as_tokio::io::async_write::AsyncWrite>::poll_write
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
      uVar6 = FUN_009a184c(&uStack_e0,&PTR_s__root__cargo_registry_src_index__00af44a8);
      uVar7 = 0;
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = uVar6;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_00990168;
    }
    FUN_009ac650(&uStack_e0,param_1 + 1,param_2);
    uVar4 = uStack_b0;
    uVar3 = uStack_d8;
    uVar6 = uStack_e0;
    if (uStack_e0 == 0xffffffffffffffff) goto LAB_00990168;
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
      if (cVar1 != '\0') goto LAB_00990090;
    }
    else {
      ClearExclusiveLocal();
LAB_00990090:
      (**(code **)(plVar5[2] + 0x20))();
    }
    param_1[4] = uVar4;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    unaff_x20 = uVar3;
    if ((uVar6 & 1) != 0) {
LAB_00990164:
      uVar7 = 1;
LAB_00990168:
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
  goto LAB_00990164;
}


// ===== 00998a20  FUN_00998a20 =====

void FUN_00998a20(void)

{
  undefined1 uStack_11;
  
  thunk_FUN_00983cb0(&uStack_11,"fatal runtime error: thread local panicked on drop, aborting\n",
                     0x7b);
  FUN_00996c20();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00998a48  <tokio::runtime::context::runtime_mt::exit_runtime::Reset_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::context::runtime_mt::exit_runtime::Reset as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::context::runtime_mt::exit_runtime::Reset_as_core::ops::drop::Drop>::drop
          (undefined1 *param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar3);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar3);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00996984(uVar3 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  if (*(char *)((long)pvVar2 + 0x46) == '\x02') {
    *(undefined1 *)((long)pvVar2 + 0x46) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("closure claimed permanent executor",0x45,
             &PTR_s__root__cargo_registry_src_index__00af3718);
}


// ===== 00998af4  FUN_00998af4 =====

void FUN_00998af4(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar9 = param_1[3];
  if (uVar9 != 0) {
    uVar2 = param_1[1];
    uVar8 = *param_1;
    uVar7 = 0;
    if (uVar8 <= param_1[2]) {
      uVar7 = uVar8;
    }
    uVar7 = param_1[2] - uVar7;
    uVar11 = uVar8 - uVar7;
    lVar1 = 0;
    if (uVar11 <= uVar9) {
      lVar1 = uVar9 - uVar11;
    }
    if (uVar9 <= uVar11) {
      uVar8 = uVar7 + uVar9;
    }
    if (uVar8 != uVar7) {
      lVar10 = 0;
      do {
        puVar5 = *(ulong **)(uVar2 + uVar7 * 8 + lVar10 * 8);
        lVar10 = lVar10 + 1;
        do {
          uVar6 = *puVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *puVar5 = uVar6 - 0x40;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = uVar6 >> 6;
        if (uVar6 == 1) {
                    /* try { // try from 00998c04 to 00998c07 has its CatchHandler @ 00998c60 */
          (**(code **)(puVar5[2] + 0x10))();
        }
        else if (uVar6 == 0) {
                    /* try { // try from 00998c40 to 00998c57 has its CatchHandler @ 00998c88 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
      } while (lVar10 != uVar8 - uVar7);
    }
    if (uVar11 < uVar9) {
      lVar10 = 0;
      do {
        puVar5 = *(ulong **)(uVar2 + lVar10 * 8);
        lVar10 = lVar10 + 1;
        do {
          uVar9 = *puVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *puVar5 = uVar9 - 0x40;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar9 = uVar9 >> 6;
        if (uVar9 == 1) {
                    /* try { // try from 00998b6c to 00998b6f has its CatchHandler @ 00998c5c */
          (**(code **)(puVar5[2] + 0x10))();
        }
        else if (uVar9 == 0) {
                    /* try { // try from 00998ba8 to 00998bbf has its CatchHandler @ 00998c64 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
      } while (lVar10 != lVar1);
    }
  }
  return;
}


// ===== 00998cc4  FUN_00998cc4 =====

void FUN_00998cc4(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar9 = param_1[3];
  if (uVar9 != 0) {
    uVar2 = param_1[1];
    uVar8 = *param_1;
    uVar7 = 0;
    if (uVar8 <= param_1[2]) {
      uVar7 = uVar8;
    }
    uVar7 = param_1[2] - uVar7;
    uVar11 = uVar8 - uVar7;
    lVar1 = 0;
    if (uVar11 <= uVar9) {
      lVar1 = uVar9 - uVar11;
    }
    if (uVar9 <= uVar11) {
      uVar8 = uVar7 + uVar9;
    }
    if (uVar8 != uVar7) {
      lVar10 = 0;
      do {
        puVar5 = *(ulong **)(uVar2 + uVar7 * 8 + lVar10 * 8);
        lVar10 = lVar10 + 1;
        do {
          uVar6 = *puVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *puVar5 = uVar6 - 0x40;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = uVar6 >> 6;
        if (uVar6 == 1) {
                    /* try { // try from 00998dd4 to 00998dd7 has its CatchHandler @ 00998e30 */
          (**(code **)(puVar5[2] + 0x10))();
        }
        else if (uVar6 == 0) {
                    /* try { // try from 00998e10 to 00998e27 has its CatchHandler @ 00998e58 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
      } while (lVar10 != uVar8 - uVar7);
    }
    if (uVar11 < uVar9) {
      lVar10 = 0;
      do {
        puVar5 = *(ulong **)(uVar2 + lVar10 * 8);
        lVar10 = lVar10 + 1;
        do {
          uVar9 = *puVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *puVar5 = uVar9 - 0x40;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar9 = uVar9 >> 6;
        if (uVar9 == 1) {
                    /* try { // try from 00998d3c to 00998d3f has its CatchHandler @ 00998e2c */
          (**(code **)(puVar5[2] + 0x10))();
        }
        else if (uVar9 == 0) {
                    /* try { // try from 00998d78 to 00998d8f has its CatchHandler @ 00998e34 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 1",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3f10);
        }
      } while (lVar10 != lVar1);
    }
  }
  return;
}


// ===== 00998e94  FUN_00998e94 =====

void FUN_00998e94(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar10 = param_1[3];
  if (uVar10 != 0) {
    uVar2 = param_1[1];
    uVar9 = *param_1;
    uVar8 = 0;
    if (uVar9 <= param_1[2]) {
      uVar8 = uVar9;
    }
    uVar8 = param_1[2] - uVar8;
    uVar12 = uVar9 - uVar8;
    lVar1 = 0;
    if (uVar12 <= uVar10) {
      lVar1 = uVar10 - uVar12;
    }
    if (uVar10 <= uVar12) {
      uVar9 = uVar8 + uVar10;
    }
    if (uVar9 != uVar8) {
      lVar11 = 0;
      do {
        lVar6 = lVar11 * 0x10;
        lVar11 = lVar11 + 1;
        puVar5 = *(ulong **)(uVar2 + uVar8 * 0x10 + lVar6);
        do {
          uVar7 = *puVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *puVar5 = uVar7 - 0x80;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 < 0x80) {
                    /* try { // try from 00998fd4 to 00998feb has its CatchHandler @ 00999038 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 2",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3e80);
        }
        if (uVar7 < 0xc0) {
                    /* try { // try from 00998fcc to 00998fcf has its CatchHandler @ 00999010 */
          (**(code **)(puVar5[2] + 0x10))();
        }
      } while (lVar11 != uVar9 - uVar8);
    }
    if (uVar12 < uVar10) {
      lVar11 = 0;
      do {
        lVar6 = lVar11 * 0x10;
        lVar11 = lVar11 + 1;
        puVar5 = *(ulong **)(uVar2 + lVar6);
        do {
          uVar10 = *puVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *puVar5 = uVar10 - 0x80;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar10 < 0x80) {
                    /* try { // try from 00998ff0 to 00999007 has its CatchHandler @ 00999014 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: prev.ref_count() >= 2",0x27,
                     &PTR_s__root__cargo_registry_src_index__00af3e80);
        }
        if (uVar10 < 0xc0) {
                    /* try { // try from 00998f48 to 00998f4b has its CatchHandler @ 0099900c */
          (**(code **)(puVar5[2] + 0x10))();
        }
      } while (lVar11 != lVar1);
    }
  }
  return;
}


// ===== 00999074  <tokio::runtime::task::error::JoinError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::error::JoinError as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::task::error::JoinError_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  code *pcStack_48;
  undefined1 *local_40;
  code *pcStack_38;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (puVar6 == (undefined8 *)0x0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_002acd56;
  }
  else {
    pcVar7 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
    (*pcVar7)(&local_50,puVar6);
    if (pcStack_48 == (code *)0x16fa802d90bf615b && local_50 == -0x119351643378db84) {
      lVar4 = 0x10;
      puVar5 = puVar6 + 1;
    }
    else {
      (*pcVar7)(&local_50,puVar6);
      if (pcStack_48 != (code *)0x24c161f26c70c1f1 || local_50 != -0x4609fd23a01609a4) {
        uVar1 = *param_2;
        uVar2 = param_2[1];
        puVar3 = &DAT_002b8d81;
        goto LAB_00999194;
      }
      lVar4 = 8;
      puVar5 = puVar6;
    }
    local_60 = *puVar5;
    uStack_58 = *(undefined8 *)((long)puVar6 + lVar4);
    puVar3 = &DAT_002af3ed;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    pcStack_38 = FUN_0099f710;
    local_40 = (undefined1 *)&local_60;
  }
LAB_00999194:
  pcStack_48 = FUN_009991cc;
  local_50 = param_1;
  core::fmt::write(uVar1,uVar2,puVar3,&local_50);
  return;
}


// ===== 009991b0  <tokio::runtime::context::current::SetCurrentGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::context::current::SetCurrentGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::context::current::SetCurrentGuard_as_core::ops::drop::Drop>::drop(long param_1)

{
  FUN_0097c6e8(&PTR_FUN_00af47a0,param_1,param_1 + 0x10);
  return;
}


// ===== 009991c4  FUN_009991c4 =====

void FUN_009991c4(undefined8 *param_1)

{
  <mio::net::udp::UdpSocket_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 009991cc  FUN_009991cc =====

void FUN_009991cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Id",2,&local_18,&DAT_00af4840);
  return;
}


// ===== 0099920c  <tokio::runtime::task::abort::AbortHandle_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::abort::AbortHandle as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::task::abort::AbortHandle_as_core::fmt::Debug>::fmt
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  lVar1 = *param_1;
  lVar2 = *(long *)(*(long *)(lVar1 + 0x10) + 0x48);
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"AbortHandle",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"id",2,lVar1 + lVar2,&DAT_00af4860);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00999274  <tokio::runtime::task::abort::AbortHandle_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::abort::AbortHandle as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::task::abort::AbortHandle_as_core::ops::drop::Drop>::drop(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00999280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*param_1 + 0x10) + 0x28))();
  return;
}


// ===== 00999284  <tokio::runtime::task::abort::AbortHandle_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::abort::AbortHandle as core::clone::Clone>::clone */

void __rustcall
<tokio::runtime::task::abort::AbortHandle_as_core::clone::Clone>::clone(undefined8 *param_1)

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
      *plVar3 = lVar4 + 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 009992b0  FUN_009992b0 =====

void FUN_009992b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 009992e8  <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::sleep::Sleep as core::future::future::Future>::poll */

undefined8 __rustcall
<tokio::time::sleep::Sleep_as_core::future::future::Future>::poll
          (undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  char cVar6;
  undefined8 local_50;
  undefined *puStack_48;
  byte local_24 [4];
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (puVar2 <= &DAT_00000001) goto LAB_00999388;
LAB_0099932c:
    if (puVar2 != (undefined1 *)0x0) goto LAB_00999330;
LAB_0099939c:
    cVar6 = '\0';
    cVar4 = '\0';
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto LAB_0099932c;
LAB_00999388:
    puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_0099939c;
LAB_00999330:
    cVar6 = puVar2[0x44];
    cVar4 = puVar2[0x45];
    cVar3 = cVar4;
    if (cVar6 == '\x01') {
      if (cVar4 == '\0') {
        FUN_009b13f8(*param_2,&PTR_s__root__cargo_registry_src_index__00af64a0);
        return 1;
      }
      cVar3 = cVar4 + -1;
    }
    puVar2[0x45] = cVar3;
  }
  local_50._0_2_ = CONCAT11(cVar4,cVar6);
                    /* try { // try from 009993ac to 009993b7 has its CatchHandler @ 00999498 */
  local_24[0] = FUN_009b4460(param_1,param_2);
  if (local_24[0] != 0xff) {
    if (local_24[0] == 0) {
      return 0;
    }
    local_50 = local_24;
    puStack_48 = PTR_fmt_00b01148;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002a4de6,&local_50,&PTR_s__root__cargo_registry_src_index__00af4880);
  }
  if (cVar6 == '\0') {
    return 1;
  }
  uVar5 = *(ulong *)puVar1;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x00999408;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar2) goto joined_r0x00999408;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar5 & 0xffffffff,puVar2,0);
joined_r0x00999408:
  if (puVar2 != (undefined1 *)0x0) {
    puVar2[0x45] = cVar4;
    puVar2[0x44] = 1;
  }
  return 1;
}


// ===== 009994b0  <tokio::util::bit::Pack_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::util::bit::Pack as core::fmt::Debug>::fmt */

void __rustcall <tokio::util::bit::Pack_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  long local_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  lStack_20 = param_1 + 8;
  local_28 = PTR_fmt_00b01158;
  local_18 = PTR_fmt_00b00c40;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002b0e94,&local_30);
  return;
}


// ===== 009994fc  <tokio::runtime::runtime::Runtime_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::runtime::Runtime as core::ops::drop::Drop>::drop */

void __rustcall <tokio::runtime::runtime::Runtime_as_core::ops::drop::Drop>::drop(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*param_1 == 1) {
    FUN_009b0054(param_1 + 1,param_1 + 6);
    return;
  }
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
  if ((puVar1 == (undefined1 *)0x0) ||
     (<tokio::runtime::context::current::tokio::runtime::context::Context>::set_current
                (&local_48,puVar1,param_1 + 6), local_48 == -1)) {
    local_60 = -1;
  }
  else {
    uStack_58 = uStack_40;
    local_60 = local_48;
    local_50 = local_38;
  }
                    /* try { // try from 009995c8 to 009995d3 has its CatchHandler @ 009995f0 */
  FUN_009b0174(param_1 + 1,param_1 + 6);
  FUN_00996ae0(&local_60);
  return;
}


// ===== 00999608  <tokio::net::unix::socketaddr::SocketAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::socketaddr::SocketAddr as core::fmt::Debug>::fmt */

void __rustcall <tokio::net::unix::socketaddr::SocketAddr_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b050e0)();
  return;
}


// ===== 0099960c  <tokio::runtime::task::error::JoinError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::task::error::JoinError as core::fmt::Display>::fmt */

void __rustcall
<tokio::runtime::task::error::JoinError_as_core::fmt::Display>::fmt
          (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined *local_48;
  undefined1 *puStack_40;
  code *local_38;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (puVar6 == (undefined8 *)0x0) {
    puVar3 = &DAT_002acd70;
LAB_0099971c:
    uVar1 = *param_2;
    uVar2 = param_2[1];
  }
  else {
    pcVar7 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
    (*pcVar7)(&local_50,puVar6);
    if (local_48 == (undefined *)0x16fa802d90bf615b && local_50 == -0x119351643378db84) {
      lVar4 = 0x10;
      puVar5 = puVar6 + 1;
    }
    else {
      (*pcVar7)(&local_50,puVar6);
      if (local_48 != (undefined *)0x24c161f26c70c1f1 || local_50 != -0x4609fd23a01609a4) {
        puVar3 = &DAT_002ad9d3;
        goto LAB_0099971c;
      }
      lVar4 = 8;
      puVar5 = puVar6;
    }
    local_60 = *puVar5;
    local_58 = *(undefined8 *)((long)puVar6 + lVar4);
    puVar3 = &DAT_002ba603;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_38 = FUN_0099f710;
    puStack_40 = (undefined1 *)&local_60;
  }
  local_50 = param_1;
  local_48 = PTR_fmt_00b01140;
  core::fmt::write(uVar1,uVar2,puVar3,&local_50);
  return;
}


// ===== 00999744  <tokio::runtime::context::blocking::DisallowBlockInPlaceGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::context::blocking::DisallowBlockInPlaceGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::context::blocking::DisallowBlockInPlaceGuard_as_core::ops::drop::Drop>::drop
          (byte *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar2 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
    if (&DAT_00000001 < puVar1) goto joined_r0x009997d8;
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
    if ((undefined1 *)0x1 < puVar1) goto joined_r0x009997d8;
  }
  puVar1 = (undefined1 *)FUN_00996984(uVar2 & 0xffffffff,puVar1,0);
joined_r0x009997d8:
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  if (puVar1[0x46] != '\0') {
    return;
  }
  puVar1[0x46] = 1;
  return;
}


// ===== 009997e8  FUN_009997e8 =====

undefined1 * FUN_009997e8(undefined8 param_1)

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


// ===== 00999860  FUN_00999860 =====

void FUN_00999860(long *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if ((*param_1 != 0) && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    puVar2 = (undefined8 *)param_1[2];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00999888 to 0099988f has its CatchHandler @ 009998b8 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 009998dc  FUN_009998dc =====

int FUN_009998dc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != -1) {
    iVar1 = close(iVar1);
    return iVar1;
  }
  return iVar1;
}


// ===== 009998f0  FUN_009998f0 =====

void FUN_009998f0(void *param_1,undefined8 *param_2)

{
  if (param_1 != (void *)0x0) {
    if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00999914 to 0099991b has its CatchHandler @ 0099994c */
      (*(code *)*param_2)(param_1);
    }
    if (param_2[1] != 0) {
      free(param_1);
      return;
    }
  }
  return;
}


// ===== 0099996c  FUN_0099996c =====

void FUN_0099996c(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009999b8  FUN_009999b8 =====

void FUN_009999b8(long *param_1)

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
                    /* try { // try from 00999a0c to 00999a0f has its CatchHandler @ 00999a50 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
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


// ===== 00999ab4  FUN_00999ab4 =====

void FUN_00999ab4(long *param_1)

{
                    /* try { // try from 00999ac4 to 00999ac7 has its CatchHandler @ 00999af4 */
  FUN_009c4de0();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00999b18  FUN_00999b18 =====

void FUN_00999b18(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::net::tcp::stream::TcpStream>>::drop_slow();
    return;
  }
  return;
}


// ===== 00999b3c  FUN_00999b3c =====

void FUN_00999b3c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
                    /* try { // try from 00999b50 to 00999b57 has its CatchHandler @ 00999bfc */
  FUN_0099f404(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 0x10);
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
                    /* try { // try from 00999b78 to 00999b7f has its CatchHandler @ 00999bf4 */
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::scoped::ScopeData>>::drop_slow
                (param_1 + 0x10);
    }
  }
  if ((*(long *)(param_1 + 0x18) != 0) && (__ptr = *(void **)(param_1 + 0x20), __ptr != (void *)0x0)
     ) {
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00999b9c to 00999ba3 has its CatchHandler @ 00999bd4 */
      (*pcVar4)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00999c3c  FUN_00999c3c =====

void FUN_00999c3c(long param_1)

{
                    /* try { // try from 00999c4c to 00999c53 has its CatchHandler @ 00999c74 */
  FUN_0099f9a0(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) != -1) {
    close(*(int *)(param_1 + 0x28));
  }
  FUN_0099a8a4(param_1 + 0x10);
  return;
}


// ===== 00999ca0  FUN_00999ca0 =====

void FUN_00999ca0(long param_1)

{
                    /* try { // try from 00999cb0 to 00999cbb has its CatchHandler @ 00999d18 */
  FUN_0097f9c8(param_1 + 0x80,0x3f);
  if (*(long *)(param_1 + 0xb0) != 0) {
                    /* try { // try from 00999ccc to 00999ccf has its CatchHandler @ 00999cf8 */
    (**(code **)(*(long *)(param_1 + 0xb0) + 0x18))(*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00999ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
    return;
  }
  return;
}


// ===== 00999d30  FUN_00999d30 =====

void FUN_00999d30(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00999d50 to 00999d57 has its CatchHandler @ 00999d88 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00999da8  FUN_00999da8 =====

void FUN_00999da8(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00999dc8 to 00999dcf has its CatchHandler @ 00999e00 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00999e20  FUN_00999e20 =====

void FUN_00999e20(long param_1)

{
                    /* try { // try from 00999e30 to 00999e33 has its CatchHandler @ 00999e54 */
  FUN_0099f8c0();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 00999e80  FUN_00999e80 =====

void FUN_00999e80(int *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int local_34;
  undefined1 local_30;
  long local_28;
  
  iVar2 = param_1[6];
  param_1[6] = -1;
  if (iVar2 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    local_34 = iVar2;
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* try { // try from 00999f44 to 00999f5b has its CatchHandler @ 00999f60 */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 00999ed4 to 00999f13 has its CatchHandler @ 00999f60 */
    uVar3 = FUN_009828f8(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_34);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      local_30 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    close(local_34);
    if (param_1[6] != -1) {
      close(param_1[6]);
    }
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 00999f94  FUN_00999f94 =====

void FUN_00999f94(long param_1)

{
                    /* try { // try from 00999fa4 to 00999fa7 has its CatchHandler @ 00999fc8 */
  FUN_0099f9a0();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 00999ff4  FUN_00999ff4 =====

void FUN_00999ff4(int *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int local_34;
  undefined1 local_30;
  long local_28;
  
  iVar2 = param_1[6];
  param_1[6] = -1;
  if (iVar2 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    local_34 = iVar2;
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* try { // try from 0099a0b8 to 0099a0cf has its CatchHandler @ 0099a0d4 */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 0099a048 to 0099a087 has its CatchHandler @ 0099a0d4 */
    uVar3 = FUN_00982cb0(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_34);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      local_30 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    close(local_34);
    if (param_1[6] != -1) {
      close(param_1[6]);
    }
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 0099a108  FUN_0099a108 =====

void FUN_0099a108(long param_1)

{
                    /* try { // try from 0099a118 to 0099a11b has its CatchHandler @ 0099a13c */
  FUN_0099fa80();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 0099a168  FUN_0099a168 =====

void FUN_0099a168(long param_1)

{
                    /* try { // try from 0099a178 to 0099a17b has its CatchHandler @ 0099a19c */
  FUN_0099fb60();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 0099a1c8  FUN_0099a1c8 =====

void FUN_0099a1c8(int *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int local_34;
  undefined1 local_30;
  long local_28;
  
  iVar2 = param_1[6];
  param_1[6] = -1;
  if (iVar2 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    local_34 = iVar2;
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* try { // try from 0099a28c to 0099a2a3 has its CatchHandler @ 0099a2a8 */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 0099a21c to 0099a25b has its CatchHandler @ 0099a2a8 */
    uVar3 = FUN_00983244(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_34);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      local_30 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    close(local_34);
    if (param_1[6] != -1) {
      close(param_1[6]);
    }
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 0099a2dc  FUN_0099a2dc =====

void FUN_0099a2dc(long param_1)

{
                    /* try { // try from 0099a2ec to 0099a2ef has its CatchHandler @ 0099a310 */
  FUN_0099fc40();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 0099a33c  FUN_0099a33c =====

void FUN_0099a33c(int *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int local_34;
  undefined1 local_30;
  long local_28;
  
  iVar2 = param_1[6];
  param_1[6] = -1;
  if (iVar2 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    local_34 = iVar2;
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* try { // try from 0099a400 to 0099a417 has its CatchHandler @ 0099a41c */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 0099a390 to 0099a3cf has its CatchHandler @ 0099a41c */
    uVar3 = FUN_009835fc(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_34);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      local_30 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    close(local_34);
    if (param_1[6] != -1) {
      close(param_1[6]);
    }
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 0099a450  FUN_0099a450 =====

void FUN_0099a450(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 0099a470 to 0099a473 has its CatchHandler @ 0099a49c */
    (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0099a48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}


// ===== 0099a4c0  FUN_0099a4c0 =====

void FUN_0099a4c0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0099a4d0 to 0099a4d3 has its CatchHandler @ 0099a51c */
  FUN_0099a558();
                    /* try { // try from 0099a4d4 to 0099a4db has its CatchHandler @ 0099a514 */
  FUN_0099a714(param_1 + 0x20);
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
    <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow
              ((undefined8 *)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 0099a558  FUN_0099a558 =====

void FUN_0099a558(long *param_1)

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
                    /* try { // try from 0099a58c to 0099a5b3 has its CatchHandler @ 0099a5ec */
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Sender<()>>>::drop_slow(param_1 + 2);
    return;
  }
  return;
}


// ===== 0099a620  FUN_0099a620 =====

void FUN_0099a620(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 0099a668  FUN_0099a668 =====

void FUN_0099a668(undefined8 *param_1)

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
                    /* try { // try from 0099a694 to 0099a69b has its CatchHandler @ 0099a6d8 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
    ::drop_slow(param_1);
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar5 = (code *)*puVar1;
  if (pcVar5 != (code *)0x0) {
                    /* try { // try from 0099a6a8 to 0099a6af has its CatchHandler @ 0099a6f0 */
    (*pcVar5)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0099a714  FUN_0099a714 =====

void FUN_0099a714(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0099a724 to 0099a72b has its CatchHandler @ 0099a7b4 */
  <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop(param_1 + 3);
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
                    /* try { // try from 0099a74c to 0099a753 has its CatchHandler @ 0099a788 */
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow
                (param_1 + 3);
    }
  }
                    /* try { // try from 0099a754 to 0099a75b has its CatchHandler @ 0099a790 */
  FUN_009c4de0(param_1);
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0099a7f8  FUN_0099a7f8 =====

void FUN_0099a7f8(long *param_1)

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


// ===== 0099a844  FUN_0099a844 =====

void FUN_0099a844(long param_1)

{
                    /* try { // try from 0099a854 to 0099a857 has its CatchHandler @ 0099a878 */
  FUN_0099fa80();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_0099a8a4(param_1);
  return;
}


// ===== 0099a8a4  FUN_0099a8a4 =====

void FUN_0099a8a4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0099a8b4 to 0099a8b7 has its CatchHandler @ 0099a948 */
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
                    /* try { // try from 0099a8e0 to 0099a907 has its CatchHandler @ 0099a940 */
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


