// ===== 009c4564  FUN_009c4564 =====

void FUN_009c4564(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *param_1;
  lVar5 = param_1[1];
  *param_1 = 8;
  param_1[1] = 8;
  uVar3 = lVar5 - lVar7;
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      lVar5 = uVar8 * 8;
      uVar8 = uVar8 + 1;
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
                    /* try { // try from 009c45c8 to 009c45cb has its CatchHandler @ 009c4618 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
        ::drop_slow();
      }
    } while (uVar8 != uVar3 >> 3);
  }
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    lVar5 = param_1[2];
    lVar6 = *(long *)(lVar5 + 0x10);
    if (param_1[3] != lVar6) {
      memmove((void *)(*(long *)(lVar5 + 8) + lVar6 * 8),
              (void *)(*(long *)(lVar5 + 8) + param_1[3] * 8),lVar7 << 3);
    }
    *(long *)(lVar5 + 0x10) = lVar6 + lVar7;
  }
  return;
}


// ===== 009c4698  FUN_009c4698 =====

void FUN_009c4698(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  puVar3 = (undefined8 *)*param_1;
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  *param_1 = 8;
  param_1[1] = 8;
  uVar5 = lVar1 - (long)puVar3;
  if (uVar5 != 0) {
    for (uVar5 = uVar5 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    /* try { // try from 009c46d8 to 009c46db has its CatchHandler @ 009c4728 */
      FUN_009bfca8(*puVar3);
      puVar3 = puVar3 + 1;
    }
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    if (param_1[3] != lVar4) {
      memmove((void *)(*(long *)(lVar2 + 8) + lVar4 * 8),
              (void *)(*(long *)(lVar2 + 8) + param_1[3] * 8),lVar1 << 3);
    }
    *(long *)(lVar2 + 0x10) = lVar4 + lVar1;
  }
  return;
}


// ===== 009c4780  <tokio::net::unix::pipe::Receiver_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::pipe::Receiver as tokio::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<tokio::net::unix::pipe::Receiver_as_tokio::io::async_read::AsyncRead>::poll_read
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
  long lStack_78;
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
LAB_0099eeac:
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      goto LAB_0099ee2c;
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
        goto LAB_0099eeac;
      }
    }
    else if (uStack_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar4 = bStack_70;
        unaff_x20 = CONCAT71(uStack_6f,bStack_70);
        if (uStack_68._1_1_ == '\x02') {
          uVar7 = 0;
          goto LAB_0099ee38;
        }
        cVar5 = (char)uStack_68;
        lStack_78 = param_1 + 0x18;
        auVar15 = <&mio::sys::unix::pipe::Receiver_as_alloc::io::read::Read>::read
                            (&lStack_78,lVar13 + uVar2,uVar12 - uVar2);
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
          uStack_68 = unaff_x20 - 1;
          bStack_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&bStack_70,param_1,param_2,0);
      } while (uStack_68._1_1_ != -1);
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


// ===== 009c4784  <tokio::time::instant::Instant_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::time::instant::Instant as core::fmt::Debug>::fmt */

void __rustcall <tokio::time::instant::Instant_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b053c8)();
  return;
}


// ===== 009c4788  <tokio::process::imp::Child_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::Child as core::future::future::Future>::poll */

void __rustcall
<tokio::process::imp::Child_as_core::future::future::Future>::poll
          (undefined4 *param_1,int *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 local_d0 [9] [16];
  undefined1 local_38;
  
  while( true ) {
    auVar1 = (**(code **)(*(long *)(param_2 + 8) + 0x18))(*(undefined8 *)(param_2 + 6),param_3);
    if (auVar1._0_8_ != 0) {
      local_38 = 0;
      local_d0[0] = auVar1;
      FUN_009b5fb0(param_2 + 6,local_d0);
    }
    if (*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("inner has gone away",0x13,&PTR_s__root__cargo_registry_src_index__00af42a0);
    }
    <std::process::[T]::std::process::Child>::try_wait(local_d0,param_2);
    if ((local_d0[0] & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 2) = local_d0[0]._8_8_;
      return;
    }
    if (local_d0[0]._4_4_ == 1) break;
    if (auVar1._0_8_ == 0) {
      *param_1 = 2;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = local_d0[0]._8_4_;
  return;
}


// ===== 009c4878  <&tokio::process::imp::Pipe_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&tokio::process::imp::Pipe as alloc::io::read::Read>::read */

void __rustcall <&tokio::process::imp::Pipe_as_alloc::io::read::Read>::read(undefined8 *param_1)

{
  <std::io::pipe::PipeReader_as_alloc::io::read::Read>::read(*param_1);
  return;
}


// ===== 009c4880  <&tokio::process::imp::Pipe_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&tokio::process::imp::Pipe as core::io::write::Write>::write_vectored */

void __rustcall
<&tokio::process::imp::Pipe_as_core::io::write::Write>::write_vectored(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <&std::fs::File_as_core::io::write::Write>::write_vectored(&local_18);
  return;
}


// ===== 009c48a8  <&tokio::process::imp::Pipe_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&tokio::process::imp::Pipe as core::io::write::Write>::write */

void __rustcall <&tokio::process::imp::Pipe_as_core::io::write::Write>::write(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <&std::fs::File_as_core::io::write::Write>::write(&local_18);
  return;
}


// ===== 009c48d0  FUN_009c48d0 =====

void FUN_009c48d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
            (param_2,&DAT_0037ceed,5,param_1,&DAT_00af6338,&local_18,&DAT_00af6358);
  return;
}


// ===== 009c491c  FUN_009c491c =====

void FUN_009c491c(undefined8 param_1,long param_2)

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


// ===== 009c4934  <tokio::net::udp::UdpSocket_as_core::convert::TryFrom<std::net::udp::UdpSocket>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::udp::UdpSocket as core::convert::TryFrom<std::net::udp::UdpSocket>>::try_from */

ulong __rustcall
<tokio::net::udp::UdpSocket_as_core::convert::TryFrom<std::net::udp::UdpSocket>>::try_from
          (long *param_1,int param_2)

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
  
                    /* try { // try from 009c4954 to 009c4963 has its CatchHandler @ 009c4a30 */
  local_18 = param_2;
  iVar1 = <std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 009c49e8 to 009c49ff has its CatchHandler @ 009c4a30 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 009c4964 to 009c496f has its CatchHandler @ 009c4a1c */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af6390);
                    /* try { // try from 009c497c to 009c4993 has its CatchHandler @ 009c4a04 */
  local_14 = param_2;
  uVar3 = FUN_009a4d48(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af6390);
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


// ===== 009c4a44  <tokio::util::wake_list::WakeList_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::util::wake_list::WakeList as core::ops::drop::Drop>::drop */

void __rustcall <tokio::util::wake_list::WakeList_as_core::ops::drop::Drop>::drop(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x200) + 1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    plVar1 = puVar4 + -1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 2;
                    /* try { // try from 009c4a74 to 009c4a77 has its CatchHandler @ 009c4a8c */
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  return;
}


// ===== 009c4ab8  FUN_009c4ab8 =====

void FUN_009c4ab8(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong local_a0;
  ulong uStack_98;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined1 local_60 [24];
  undefined8 uStack_48;
  
  uVar2 = param_3 - param_2;
  uVar1 = 0;
  if (param_3 >= param_2) {
    uVar1 = uVar2;
  }
  local_a0 = (ulong)uVar1;
  if (param_3 < param_2 || uVar2 == 0) {
    uVar3 = 0;
    local_a0 = 0;
    uStack_98 = 8;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uStack_98 = FUN_004b25a4(local_a0 * 0x28,8);
    if (uStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,local_a0 * 0x28);
    }
    uVar3 = 0;
    puVar4 = (undefined8 *)(uStack_98 + 1);
    do {
                    /* try { // try from 009c4b0c to 009c4b13 has its CatchHandler @ 009c4b88 */
      FUN_009b7ecc(local_60);
      uVar3 = uVar3 + 1;
      *(undefined1 *)((long)puVar4 + -1) = 0;
      uStack_79 = (undefined1)local_60._8_8_;
      uStack_78 = SUB87(local_60._8_8_,1);
      local_81 = (undefined1)local_60._0_8_;
      uStack_80 = SUB87(local_60._0_8_,1);
      uStack_69 = (undefined1)uStack_48;
      local_71 = (undefined1)local_60._16_8_;
      uStack_70 = SUB87(local_60._16_8_,1);
      puVar4[1] = CONCAT17(uStack_79,uStack_80);
      *puVar4 = CONCAT17(local_81,uStack_88);
      puVar4[3] = CONCAT17(uStack_69,uStack_70);
      puVar4[2] = CONCAT17(local_71,uStack_78);
      *(undefined8 *)((long)puVar4 + 0x1f) = uStack_48;
      puVar4 = puVar4 + 5;
    } while (uVar2 != (uint)uVar3);
  }
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[2] = uVar3;
  return;
}


// ===== 009c4ba0  <tokio::net::unix::datagram::socket::UnixDatagram_as_core::convert::TryFrom<std::os::unix::net::datagram::UnixDatagram>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::datagram::socket::UnixDatagram as
   core::convert::TryFrom<std::os::unix::net::datagram::UnixDatagram>>::try_from */

ulong __rustcall
<tokio::net::unix::datagram::socket::UnixDatagram_as_core::convert::TryFrom<std::os::unix::net::datagram::UnixDatagram>>
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
  
                    /* try { // try from 009c4bc0 to 009c4bcf has its CatchHandler @ 009c4c9c */
  local_18 = param_2;
  iVar1 = <std::sys::fd::unix::FileDesc_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 009c4c54 to 009c4c6b has its CatchHandler @ 009c4c9c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 009c4bd0 to 009c4bdb has its CatchHandler @ 009c4c88 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af63c0);
                    /* try { // try from 009c4be8 to 009c4bff has its CatchHandler @ 009c4c70 */
  local_14 = param_2;
  uVar3 = FUN_009a51a8(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af63c0);
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


// ===== 009c4cb0  <tokio::process::imp::Pipe_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::Pipe as std::os::fd::owned::AsFd>::as_fd */

undefined4 __rustcall
<tokio::process::imp::Pipe_as_std::os::fd::owned::AsFd>::as_fd(undefined4 *param_1)

{
  return *param_1;
}


// ===== 009c4cb8  <tokio::process::imp::Pipe_as_mio::event::source::Source>::deregister =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::Pipe as mio::event::source::Source>::deregister */

void __rustcall
<tokio::process::imp::Pipe_as_mio::event::source::Source>::deregister(undefined4 *param_1)

{
  undefined4 *local_20;
  undefined4 local_14;
  
  local_14 = *param_1;
  local_20 = &local_14;
  <mio::sys::unix::sourcefd::SourceFd_as_mio::event::source::Source>::deregister(&local_20);
  return;
}


// ===== 009c4ce8  <tokio::process::imp::Pipe_as_mio::event::source::Source>::reregister =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::Pipe as mio::event::source::Source>::reregister */

void __rustcall
<tokio::process::imp::Pipe_as_mio::event::source::Source>::reregister(undefined4 *param_1)

{
  undefined4 *local_20;
  undefined4 local_14;
  
  local_14 = *param_1;
  local_20 = &local_14;
  <mio::sys::unix::sourcefd::SourceFd_as_mio::event::source::Source>::reregister(&local_20);
  return;
}


// ===== 009c4d18  <tokio::process::imp::Pipe_as_mio::event::source::Source>::register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::Pipe as mio::event::source::Source>::register */

void __rustcall
<tokio::process::imp::Pipe_as_mio::event::source::Source>::register(undefined4 *param_1)

{
  undefined4 *local_20;
  undefined4 local_14;
  
  local_14 = *param_1;
  local_20 = &local_14;
  <mio::sys::unix::sourcefd::SourceFd_as_mio::event::source::Source>::register(&local_20);
  return;
}


// ===== 009c4d48  <tokio::process::imp::ChildStdio_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::ChildStdio as core::fmt::Debug>::fmt */

void __rustcall
<tokio::process::imp::ChildStdio_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,param_1 + 0x18,&PTR_FUN_00af4a68);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009c4dac  <tokio::process::imp::ChildStdio_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::ChildStdio as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::process::imp::ChildStdio_as_tokio::io::async_write::AsyncWrite>::poll_write
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


// ===== 009c4db0  <tokio::process::imp::ChildStdio_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::ChildStdio as tokio::io::async_write::AsyncWrite>::poll_write_vectored */

void __rustcall
<tokio::process::imp::ChildStdio_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
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


// ===== 009c4ddc  <tokio::process::imp::ChildStdio_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::imp::ChildStdio as tokio::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<tokio::process::imp::ChildStdio_as_tokio::io::async_read::AsyncRead>::poll_read
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


// ===== 009c4de0  FUN_009c4de0 =====

void FUN_009c4de0(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 8) + 0x18;
    do {
      __ptr = *(void **)(lVar4 + -0x18);
      puVar1 = *(undefined8 **)(lVar4 + -0x10);
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 009c4e1c to 009c4e23 has its CatchHandler @ 009c4e4c */
        (*pcVar2)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 009c4e8c  FUN_009c4e8c =====

void FUN_009c4e8c(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar8 = *(long *)(param_1 + 8);
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(lVar8 + lVar7 * 0x10);
      lVar7 = lVar7 + 1;
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
                    /* try { // try from 009c4ef0 to 009c4ef7 has its CatchHandler @ 009c4f34 */
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
                    /* try { // try from 009c4f14 to 009c4f1b has its CatchHandler @ 009c4f64 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
        drop_slow(puVar1 + 1);
      }
    } while (lVar7 != lVar6);
  }
  return;
}


// ===== 009c4f90  FUN_009c4f90 =====

void FUN_009c4f90(long param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00af4510);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 009c4ffc  FUN_009c4ffc =====

ulong FUN_009c4ffc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long local_38;
  void *local_30;
  undefined8 uStack_28;
  
  std::sys::io::error::unix::error_string(&local_38);
                    /* try { // try from 009c501c to 009c5027 has its CatchHandler @ 009c5054 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,local_30,uStack_28);
  if (local_38 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    free(local_30);
  }
  return uVar1;
}


// ===== 009c5074  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(usize,std[17aff9129faa4dc5]::thread::join_handle::JoinHandle<()>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<usize,std[17aff9129faa4dc5]::thread::join_handle::JoinHandle< =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(usize,
   std[17aff9129faa4dc5]::thread::join_handle::JoinHandle<()>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<usize,
   std[17aff9129faa4dc5]::thread::join_handle::JoinHandle<()>,
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(usize,std[17aff9129faa4dc5]::thread::join_handle::
JoinHandle<()>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
make_hasher<usize,std[17aff9129faa4dc5]::thread::join_handle::JoinHandle<(void)

{
  ulong *puVar1;
  undefined8 *__s;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *in_x0;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong in_x1;
  undefined8 in_x2;
  undefined4 in_w3;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *__src;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar20 = in_x0[3];
  uVar21 = uVar20 + in_x1;
  if (CARRY8(uVar20,in_x1)) {
LAB_009c54d8:
    uVar10 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
  }
  else {
    uVar17 = in_x0[1];
    uVar19 = uVar17 + 1;
    uVar12 = uVar19 >> 3;
    uVar18 = uVar17;
    if (7 < uVar17) {
      uVar18 = uVar12 * 7;
    }
    if (uVar18 >> 1 < uVar21) {
      if (uVar21 < uVar18 + 1) {
        uVar21 = uVar18 + 1;
      }
      if (uVar21 < 0xf) {
        uVar19 = 4;
        if (3 < uVar21) {
          uVar19 = (uVar21 & 8) + 8;
        }
        uVar18 = uVar19 * 0x20;
        uVar21 = uVar19 + 8;
        bVar7 = CARRY8(uVar21,uVar18);
        uVar12 = uVar21 + uVar18;
      }
      else {
        if ((uVar21 >> 0x3d != 0) ||
           (uVar21 = 0xffffffffffffffff >> (LZCOUNT((uVar21 * 8) / 7 - 1) & 0x3fU),
           0x7fffffffffffffe < uVar21)) goto LAB_009c54d8;
        uVar19 = uVar21 + 1;
        uVar18 = uVar19 * 0x20;
        uVar21 = uVar21 + 9;
        bVar7 = CARRY8(uVar21,uVar18);
        uVar12 = uVar21 + uVar18;
      }
      if ((bVar7) || (0x7ffffffffffffff8 < uVar12)) goto LAB_009c54d8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar8 = FUN_004b25a4(uVar12,8);
      if (lVar8 == 0) {
        uVar10 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(in_w3,8,uVar12);
        return uVar10;
      }
      __s = (undefined8 *)(lVar8 + uVar18);
      uVar18 = uVar19 - 1;
      uVar12 = uVar18;
      if (8 < uVar19) {
        uVar12 = (uVar19 >> 3) * 7;
      }
      memset(__s,0xff,uVar21);
      if (uVar20 == 0) {
        puVar16 = (undefined8 *)*in_x0;
        *in_x0 = (long)__s;
        in_x0[1] = uVar18;
        in_x0[2] = uVar12;
      }
      else {
        puVar16 = (undefined8 *)*in_x0;
        lVar8 = 0;
        uVar21 = NEON_cmge(*puVar16,0,1);
        uVar21 = uVar21 & 0x8080808080808080;
        puVar6 = puVar16;
        uVar19 = uVar20;
        do {
          for (; uVar21 == 0; uVar21 = uVar21 & 0x8080808080808080) {
            lVar8 = lVar8 + 8;
            uVar21 = NEON_cmge(puVar6[1],0,1);
            puVar6 = puVar6 + 1;
          }
          uVar15 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar15 = lVar8 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
          uVar9 = FUN_009aac9c(in_x2,puVar16 + uVar15 * -4 + -4);
          uVar11 = uVar9 & uVar18;
          uVar22 = NEON_cmlt(*(undefined8 *)((long)__s + uVar11),0,1);
          if (uVar22 == 0) {
            lVar13 = 8;
            do {
              uVar11 = uVar11 + lVar13;
              lVar13 = lVar13 + 8;
              uVar11 = uVar11 & uVar18;
              uVar22 = NEON_cmlt(*(undefined8 *)((long)__s + uVar11),0,1);
            } while (uVar22 == 0);
          }
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar18;
          if (-1 < *(char *)((long)__s + uVar11)) {
            uVar11 = NEON_cmlt(*__s,0,1);
            uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
          }
          puVar2 = puVar16 + ~uVar15 * 4;
          bVar5 = (byte)(uVar9 >> 0x38);
          *(byte *)((long)__s + uVar11) = bVar5 >> 1;
          uVar19 = uVar19 - 1;
          *(byte *)((long)__s + (uVar11 - 8 & uVar18) + 8) = bVar5 >> 1;
          puVar3 = __s + ~uVar11 * 4;
          uVar24 = *puVar2;
          uVar23 = puVar2[3];
          uVar10 = puVar2[2];
          uVar21 = uVar21 - 1 & uVar21;
          puVar3[1] = puVar2[1];
          *puVar3 = uVar24;
          puVar3[3] = uVar23;
          puVar3[2] = uVar10;
        } while (uVar19 != 0);
        *in_x0 = (long)__s;
        in_x0[1] = uVar18;
        in_x0[2] = uVar12 - uVar20;
      }
      if ((uVar17 != 0) && (lVar8 = uVar17 * 0x20 + 0x20, uVar17 + lVar8 != -9)) {
        free((void *)((long)puVar16 - lVar8));
      }
    }
    else {
      if (uVar19 != 0) {
        __src = (ulong *)*in_x0;
        puVar14 = __src;
        if ((uVar19 & 7) != 0) {
          uVar12 = uVar12 + 1;
        }
        do {
          uVar12 = uVar12 - 1;
          uVar21 = NEON_cmlt(*puVar14,0,1);
          *puVar14 = uVar21 | 0x8080808080808080;
          puVar14 = puVar14 + 1;
        } while (uVar12 != 0);
        if (uVar19 < 8) {
          memmove(__src + 1,__src,uVar17 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar19) = *__src;
        }
        uVar21 = 0;
        do {
          if (*(char *)((long)__src + uVar21) == -0x80) {
            puVar14 = __src + ~uVar21 * 4;
            while( true ) {
              uVar20 = FUN_009aac9c();
              uVar19 = in_x0[1];
              uVar12 = uVar19 & uVar20;
              uVar18 = NEON_cmlt(*(undefined8 *)((long)__src + uVar12),0,1);
              if (uVar18 == 0) {
                lVar8 = 8;
                uVar15 = uVar19 & uVar20;
                do {
                  uVar15 = uVar15 + lVar8;
                  lVar8 = lVar8 + 8;
                  uVar15 = uVar15 & uVar19;
                  uVar18 = NEON_cmlt(*(undefined8 *)((long)__src + uVar15),0,1);
                } while (uVar18 == 0);
              }
              else {
                uVar15 = uVar19 & uVar20;
              }
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = uVar15 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar19;
              bVar5 = (byte)(uVar20 >> 0x38);
              if (*(char *)((long)__src + uVar18) < '\0') {
                uVar20 = uVar18 - uVar12 ^ uVar21 - uVar12;
              }
              else {
                uVar20 = NEON_cmlt(*__src,0,1);
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar18 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
                uVar20 = uVar18 - uVar12 ^ uVar21 - uVar12;
              }
              if ((uVar20 & uVar19) < 8) {
                *(byte *)((long)__src + uVar21) = bVar5 >> 1;
                __src = (ulong *)*in_x0;
                *(byte *)((long)__src + (uVar19 & uVar21 - 8) + 8) = bVar5 >> 1;
                goto LAB_009c529c;
              }
              cVar4 = *(char *)((long)__src + uVar18);
              *(byte *)((long)__src + uVar18) = bVar5 >> 1;
              puVar1 = __src + ~uVar18 * 4;
              __src = (ulong *)*in_x0;
              *(byte *)((long)__src + (uVar18 - 8 & uVar19) + 8) = bVar5 >> 1;
              if (cVar4 == -1) break;
              uVar20 = *puVar14;
              *puVar14 = *puVar1;
              *puVar1 = uVar20;
              uVar20 = puVar14[1];
              puVar14[1] = puVar1[1];
              puVar1[1] = uVar20;
              uVar20 = puVar14[2];
              puVar14[2] = puVar1[2];
              puVar1[2] = uVar20;
              uVar20 = puVar14[3];
              puVar14[3] = puVar1[3];
              puVar1[3] = uVar20;
              __src = (ulong *)*in_x0;
            }
            uVar20 = in_x0[1];
            *(undefined1 *)((long)__src + uVar21) = 0xff;
            *(undefined1 *)((long)__src + (uVar20 & uVar21 - 8) + 8) = 0xff;
            uVar12 = *puVar14;
            uVar19 = puVar14[3];
            uVar20 = puVar14[2];
            puVar1[1] = puVar14[1];
            *puVar1 = uVar12;
            puVar1[3] = uVar19;
            puVar1[2] = uVar20;
          }
LAB_009c529c:
          bVar7 = uVar21 != uVar17;
          uVar21 = uVar21 + 1;
        } while (bVar7);
        uVar19 = in_x0[1];
        uVar20 = in_x0[3];
        if (7 < uVar19) {
          uVar19 = (uVar19 + 1 >> 3) * 7;
        }
      }
      in_x0[2] = uVar19 - uVar20;
    }
    uVar10 = 0xffffffffffffffff;
  }
  return uVar10;
}


// ===== 009c557c  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(i32,signal_hook_registry[27533933916be64]::Slot)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<i32,signal_hook_registry[27533933916be64]::Slot,std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(i32,
   signal_hook_registry[27533933916be64]::Slot)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<i32,
   signal_hook_registry[27533933916be64]::Slot,
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(i32,signal_hook_registry[27533933916be64]::Slot)>>::
reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<i32,signal_hook_registry[27533933916be64]::Slot,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
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
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong *__src;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  uVar18 = param_1[3];
  uVar22 = uVar18 + param_2;
  if (!CARRY8(uVar18,param_2)) {
    uVar21 = param_1[1];
    uVar19 = uVar21 + 1;
    uVar10 = uVar19 >> 3;
    uVar17 = uVar21;
    if (7 < uVar21) {
      uVar17 = uVar10 * 7;
    }
    if (uVar22 <= uVar17 >> 1) {
      if (uVar19 != 0) {
        __src = (ulong *)*param_1;
        puVar14 = __src;
        if ((uVar19 & 7) != 0) {
          uVar10 = uVar10 + 1;
        }
        do {
          uVar10 = uVar10 - 1;
          uVar22 = NEON_cmlt(*puVar14,0,1);
          *puVar14 = uVar22 | 0x8080808080808080;
          puVar14 = puVar14 + 1;
        } while (uVar10 != 0);
        if (uVar19 < 8) {
          memmove(__src + 1,__src,uVar21 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar19) = *__src;
        }
        uVar22 = 0;
        do {
          if (*(char *)((long)__src + uVar22) == -0x80) {
            puVar14 = __src + ~uVar22 * 9;
            while( true ) {
              uVar18 = FUN_009aadb8(param_3,__src + uVar22 * -9 + -9);
              uVar19 = param_1[1];
              uVar10 = uVar19 & uVar18;
              uVar17 = NEON_cmlt(*(undefined8 *)((long)__src + uVar10),0,1);
              if (uVar17 == 0) {
                lVar6 = 8;
                uVar15 = uVar19 & uVar18;
                do {
                  uVar15 = uVar15 + lVar6;
                  lVar6 = lVar6 + 8;
                  uVar15 = uVar15 & uVar19;
                  uVar17 = NEON_cmlt(*(undefined8 *)((long)__src + uVar15),0,1);
                } while (uVar17 == 0);
              }
              else {
                uVar15 = uVar19 & uVar18;
              }
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = uVar15 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar19;
              bVar3 = (byte)(uVar18 >> 0x38);
              if (*(char *)((long)__src + uVar17) < '\0') {
                uVar18 = uVar17 - uVar10 ^ uVar22 - uVar10;
              }
              else {
                uVar18 = NEON_cmlt(*__src,0,1);
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar17 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
                uVar18 = uVar17 - uVar10 ^ uVar22 - uVar10;
              }
              if ((uVar18 & uVar19) < 8) {
                *(byte *)((long)__src + uVar22) = bVar3 >> 1;
                __src = (ulong *)*param_1;
                *(byte *)((long)__src + (uVar19 & uVar22 - 8) + 8) = bVar3 >> 1;
                goto LAB_009c57ec;
              }
              cVar1 = *(char *)((long)__src + uVar17);
              puVar11 = __src + ~uVar17 * 9;
              *(byte *)((long)__src + uVar17) = bVar3 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar17 - 8 & uVar19) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar18 = *puVar14;
              *puVar14 = *puVar11;
              *puVar11 = uVar18;
              uVar18 = puVar14[1];
              puVar14[1] = puVar11[1];
              puVar11[1] = uVar18;
              uVar18 = puVar14[2];
              puVar14[2] = puVar11[2];
              puVar11[2] = uVar18;
              uVar18 = puVar14[3];
              puVar14[3] = puVar11[3];
              puVar11[3] = uVar18;
              uVar18 = puVar14[4];
              puVar14[4] = puVar11[4];
              puVar11[4] = uVar18;
              uVar18 = puVar14[5];
              puVar14[5] = puVar11[5];
              puVar11[5] = uVar18;
              uVar18 = puVar14[6];
              puVar14[6] = puVar11[6];
              puVar11[6] = uVar18;
              uVar18 = puVar14[7];
              puVar14[7] = puVar11[7];
              puVar11[7] = uVar18;
              uVar18 = puVar14[8];
              puVar14[8] = puVar11[8];
              puVar11[8] = uVar18;
              __src = (ulong *)*param_1;
            }
            uVar18 = param_1[1];
            *(undefined1 *)((long)__src + uVar22) = 0xff;
            *(undefined1 *)((long)__src + (uVar18 & uVar22 - 8) + 8) = 0xff;
            uVar17 = puVar14[5];
            uVar10 = puVar14[4];
            uVar19 = puVar14[7];
            uVar18 = puVar14[6];
            uVar9 = puVar14[3];
            uVar15 = puVar14[2];
            puVar11[8] = puVar14[8];
            puVar11[5] = uVar17;
            puVar11[4] = uVar10;
            puVar11[7] = uVar19;
            puVar11[6] = uVar18;
            puVar11[3] = uVar9;
            puVar11[2] = uVar15;
            uVar18 = *puVar14;
            puVar11[1] = puVar14[1];
            *puVar11 = uVar18;
          }
LAB_009c57ec:
          bVar5 = uVar22 != uVar21;
          uVar22 = uVar22 + 1;
        } while (bVar5);
        uVar19 = param_1[1];
        uVar18 = param_1[3];
        if (7 < uVar19) {
          uVar19 = (uVar19 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar19 - uVar18;
      return 0xffffffffffffffff;
    }
    if (uVar22 < uVar17 + 1) {
      uVar22 = uVar17 + 1;
    }
    if (uVar22 < 0xf) {
      uVar19 = 4;
      if (3 < uVar22) {
        uVar19 = (uVar22 & 8) + 8;
      }
    }
    else {
      if (uVar22 >> 0x3d != 0) goto LAB_009c5a64;
      uVar19 = (0xffffffffffffffffU >> (LZCOUNT((uVar22 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar19;
    if (SUB168(auVar2 * ZEXT816(0x48),8) == 0) {
      uVar22 = uVar19 + 8;
      uVar17 = uVar19 * 0x48;
      uVar10 = uVar17 + uVar22;
      if ((!CARRY8(uVar17,uVar22)) && (uVar10 < 0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar10,8);
        if (lVar6 == 0) {
          uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar10);
          return uVar8;
        }
        __s = (undefined8 *)(lVar6 + uVar17);
        uVar17 = uVar19 - 1;
        uVar10 = uVar17;
        if (8 < uVar19) {
          uVar10 = (uVar19 >> 3) * 7;
        }
        memset(__s,0xff,uVar22);
        if (uVar18 == 0) {
          puVar20 = (undefined8 *)*param_1;
          *param_1 = (long)__s;
          param_1[1] = uVar17;
          param_1[2] = uVar10;
        }
        else {
          puVar20 = (undefined8 *)*param_1;
          lVar6 = 0;
          uVar22 = NEON_cmge(*puVar20,0,1);
          uVar22 = uVar22 & 0x8080808080808080;
          puVar4 = puVar20;
          uVar19 = uVar18;
          do {
            for (; uVar22 == 0; uVar22 = uVar22 & 0x8080808080808080) {
              lVar6 = lVar6 + 8;
              uVar22 = NEON_cmge(puVar4[1],0,1);
              puVar4 = puVar4 + 1;
            }
            uVar15 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar15 = lVar6 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
            uVar7 = FUN_009aadb8(param_3,puVar20 + uVar15 * -9 + -9);
            uVar9 = uVar7 & uVar17;
            uVar23 = NEON_cmlt(*(undefined8 *)((long)__s + uVar9),0,1);
            if (uVar23 == 0) {
              lVar13 = 8;
              do {
                uVar9 = uVar9 + lVar13;
                lVar13 = lVar13 + 8;
                uVar9 = uVar9 & uVar17;
                uVar23 = NEON_cmlt(*(undefined8 *)((long)__s + uVar9),0,1);
              } while (uVar23 == 0);
            }
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar17;
            if (-1 < *(char *)((long)__s + uVar9)) {
              uVar9 = NEON_cmlt(*__s,0,1);
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
            }
            puVar12 = puVar20 + ~uVar15 * 9;
            bVar3 = (byte)(uVar7 >> 0x38);
            *(byte *)((long)__s + uVar9) = bVar3 >> 1;
            uVar19 = uVar19 - 1;
            puVar16 = __s + ~uVar9 * 9;
            *(byte *)((long)__s + (uVar9 - 8 & uVar17) + 8) = bVar3 >> 1;
            uVar8 = *puVar12;
            puVar16[1] = puVar12[1];
            *puVar16 = uVar8;
            uVar28 = puVar12[5];
            uVar27 = puVar12[4];
            uVar24 = puVar12[7];
            uVar8 = puVar12[6];
            uVar26 = puVar12[3];
            uVar25 = puVar12[2];
            puVar16[8] = puVar12[8];
            uVar22 = uVar22 - 1 & uVar22;
            puVar16[5] = uVar28;
            puVar16[4] = uVar27;
            puVar16[7] = uVar24;
            puVar16[6] = uVar8;
            puVar16[3] = uVar26;
            puVar16[2] = uVar25;
          } while (uVar19 != 0);
          *param_1 = (long)__s;
          param_1[1] = uVar17;
          param_1[2] = uVar10 - uVar18;
        }
        if (uVar21 == 0) {
          return 0xffffffffffffffff;
        }
        lVar6 = uVar21 * 0x48 + 0x48;
        if (uVar21 + lVar6 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar20 - lVar6));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_009c5a64:
  uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar8;
}


// ===== 009c5b10  FUN_009c5b10 =====

void FUN_009c5b10(long param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_1 != 0) {
    pcVar1 = param_2 + -0x18;
    do {
      if (-1 < *param_2) {
        FUN_009bf620(pcVar1);
      }
      param_1 = param_1 + -1;
      pcVar1 = pcVar1 + -0x48;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}


// ===== 009c5b64  FUN_009c5b64 =====

void FUN_009c5b64(long *param_1)

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
          puVar4 = puVar4 + -0x48;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_009bf620(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 9 +
                              -3);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x49 != -0x51) {
      free((void *)(*param_1 + lVar2 * -0x48 + -0x48));
      return;
    }
  }
  return;
}


// ===== 009c5c4c  FUN_009c5c4c =====

void FUN_009c5c4c(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow();
    return;
  }
  return;
}


// ===== 009c5c70  FUN_009c5c70 =====

void FUN_009c5c70(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 009c5c80 to 009c5c87 has its CatchHandler @ 009c5cec */
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
                    /* try { // try from 009c5ca4 to 009c5cab has its CatchHandler @ 009c5ce4 */
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


// ===== 009c5d44  FUN_009c5d44 =====

void FUN_009c5d44(long param_1)

{
                    /* try { // try from 009c5d54 to 009c5d57 has its CatchHandler @ 009c5d80 */
  <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop();
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009c5d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}


// ===== 009c5da4  FUN_009c5da4 =====

void FUN_009c5da4(ulong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar2 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
    if (&DAT_00000001 < puVar1) goto joined_r0x009c5ddc;
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
    if (&DAT_00000001 < puVar1) goto joined_r0x009c5ddc;
  }
  puVar1 = (undefined1 *)FUN_00996984(uVar2 & 0xffffffff,puVar1,0);
joined_r0x009c5ddc:
  if (puVar1 != (undefined1 *)0x0) {
    puVar1[0x45] = param_2;
    puVar1[0x44] = 1;
  }
  return;
}


// ===== 009c5e30  <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task */

void __rustcall
<tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task
          (undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = (*(code *)**(undefined8 **)*param_2)(((undefined8 *)*param_2)[1]);
  *param_1 = auVar1;
  return;
}


// ===== 009c5e64  <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task */

void __rustcall <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009c5e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1[1]);
  return;
}


// ===== 009c5e70  <tokio::task::coop::tokio::task::coop::Budget>::has_remaining =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::coop::tokio::task::coop::Budget>::has_remaining */

uint __rustcall
<tokio::task::coop::tokio::task::coop::Budget>::has_remaining(uint param_1,char param_2)

{
  param_1 = param_1 ^ 1;
  if (param_2 != '\0') {
    param_1 = 1;
  }
  return param_1;
}


// ===== 009c5e80  <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::local_addr */

void __rustcall
<tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::local_addr(long *param_1)

{
  if (*(int *)(*param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::local_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 009c5ea8  <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::try_read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::try_read_vectored */

void __rustcall
<tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::try_read_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a66fc(local_28,1,&local_28);
  return;
}


// ===== 009c5ed8  <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::try_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::try_read */

void __rustcall
<tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::try_read
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6acc(local_28,1,&local_28);
  return;
}


// ===== 009c5f08  <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::peer_addr */

void __rustcall <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::peer_addr(long *param_1)

{
  if (*(int *)(*param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::peer_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 009c5f30  <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::poll_peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::poll_peek */

void __rustcall
<tokio::net::tcp::split::tokio::net::tcp::split::ReadHalf>::poll_peek(undefined8 *param_1)

{
  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::poll_peek(*param_1);
  return;
}


// ===== 009c5f38  <tokio::sync::watch::state::[0]::tokio::sync::watch::state::AtomicState>::load =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::watch::state::[0]::tokio::sync::watch::state::AtomicState>::load */

undefined8 __rustcall
<tokio::sync::watch::state::[0]::tokio::sync::watch::state::AtomicState>::load(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009c5f40  FUN_009c5f40 =====

void FUN_009c5f40(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long local_28;
  
  local_28 = param_3;
  uVar5 = FUN_009aac9c(param_2 + 4,&local_28);
  uVar16 = extraout_x11;
  if (param_2[2] == 0) {
                    /* try { // try from 009c60d8 to 009c60eb has its CatchHandler @ 009c6110 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(usize,std[17aff9129faa4dc5]::thread::join_handle::
    JoinHandle<()>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<usize,std[17aff9129faa4dc5]::thread::join_handle::JoinHandle<();
    uVar16 = extraout_x11_00;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar7 = 0;
  bVar3 = (byte)(uVar5 >> 0x38);
  bVar13 = bVar3 >> 1;
  uVar6 = CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(
                                                  bVar13,CONCAT11(bVar13,bVar13)))))));
  uVar5 = uVar5 & uVar2;
  uVar14 = *(undefined8 *)((long)puVar1 + uVar5);
  uVar15 = NEON_cmeq(uVar14,uVar6,1);
  do {
    for (uVar15 = uVar15 & 0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar8 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar5 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar8 * -4 + -4]) {
        uVar9 = puVar1[uVar8 * -4 + -3];
        uVar14 = puVar1[uVar8 * -4 + -1];
        uVar11 = param_4[1];
        uVar10 = *param_4;
        uVar6 = param_4[2];
        param_1[1] = puVar1[uVar8 * -4 + -2];
        *param_1 = uVar9;
        param_1[2] = uVar14;
        puVar1[uVar8 * -4 + -2] = uVar11;
        puVar1[uVar8 * -4 + -3] = uVar10;
        puVar1[uVar8 * -4 + -1] = uVar6;
        return;
      }
    }
    if (bVar4) {
LAB_009c6000:
      uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
      bVar13 = NEON_umaxv(uVar14,1);
      if ((bVar13 & 1) != 0) {
        uVar5 = (ulong)*(char *)((long)puVar1 + uVar16);
        if (-1 < *(char *)((long)puVar1 + uVar16)) {
          uVar16 = NEON_cmlt(*puVar1,0,1);
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
          uVar5 = (ulong)*(byte *)((long)puVar1 + uVar16);
        }
        *(byte *)((long)puVar1 + uVar16) = bVar3 >> 1;
        lVar12 = param_2[3];
        lVar7 = param_2[2];
        *(byte *)((long)puVar1 + (uVar16 - 8 & uVar2) + 8) = bVar3 >> 1;
        puVar1[uVar16 * -4 + -4] = param_3;
        uVar6 = param_4[1];
        uVar14 = *param_4;
        puVar1[uVar16 * -4 + -1] = param_4[2];
        puVar1[uVar16 * -4 + -2] = uVar6;
        puVar1[uVar16 * -4 + -3] = uVar14;
        param_2[3] = lVar12 + 1;
        param_2[2] = lVar7 - (uVar5 & 1);
        *param_1 = 0;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar16 = NEON_cmlt(uVar14,0,1);
      if (uVar16 != 0) {
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar5 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar2;
        goto LAB_009c6000;
      }
      bVar4 = false;
      uVar16 = 0;
    }
    lVar7 = lVar7 + 8;
    uVar5 = lVar7 + uVar5 & uVar2;
    uVar14 = *(undefined8 *)((long)puVar1 + uVar5);
    uVar15 = NEON_cmeq(uVar14,uVar6,1);
  } while( true );
}


// ===== 009c6128  FUN_009c6128 =====

bool FUN_009c6128(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  lVar5 = *(long *)(lVar6 + 0x140);
  if (lVar5 == 0) goto LAB_009c61c0;
  plVar1 = (long *)(lVar6 + 0x130);
  if (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_009c61d8;
  }
  else {
    ClearExclusiveLocal();
LAB_009c61d8:
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_exclusive_slow
              (lVar6 + 0x130,param_2,0xffffffff);
  }
  plVar4 = (long *)(lVar6 + 0x130);
  plVar1 = (long *)(lVar6 + 0x138);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (*plVar4 != 8) {
      ClearExclusiveLocal();
      <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_exclusive_slow
                (lVar6 + 0x130,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x10);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x30);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x50);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x70);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x90);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0xb0);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0xd0);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0xf0);
LAB_009c61c0:
  return lVar5 == 0;
}


// ===== 009c6200  <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete */

ulong __rustcall
<tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  do {
    while( true ) {
      uVar3 = uVar4;
      if (((uint)uVar3 >> 2 & 1) != 0) {
        return uVar3;
      }
      uVar4 = *param_1;
      if (uVar4 == uVar3) break;
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar3 | 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return uVar3;
}


// ===== 009c6238  <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load */

undefined8 __rustcall
<tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load(undefined8 *param_1,byte param_2)

{
  if (param_2 < 2) {
    if (param_2 == 0) {
      return *param_1;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037cf12,0x51,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6458);
  }
  if ((param_2 != 2) && (param_2 != 4)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037cf3a,99,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6470);
  }
  return *param_1;
}


// ===== 009c62a8  <tokio::net::tcp::split::tokio::net::tcp::split::WriteHalf>::try_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::tokio::net::tcp::split::WriteHalf>::try_write_vectored */

void __rustcall
<tokio::net::tcp::split::tokio::net::tcp::split::WriteHalf>::try_write_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a68e4(local_28,2,&local_28);
  return;
}


// ===== 009c62d8  <tokio::net::tcp::split::tokio::net::tcp::split::WriteHalf>::try_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::tokio::net::tcp::split::WriteHalf>::try_write */

void __rustcall
<tokio::net::tcp::split::tokio::net::tcp::split::WriteHalf>::try_write
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6cb4(local_28,2,&local_28);
  return;
}


// ===== 009c6308  tokio::io::util::poll_proceed_and_make_progress =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::util::poll_proceed_and_make_progress */

undefined8 __rustcall tokio::io::util::poll_proceed_and_make_progress(undefined8 *param_1)

{
  void *pvVar1;
  char cVar2;
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
  cVar2 = *(char *)((long)pvVar1 + 0x45);
  if (*(char *)((long)pvVar1 + 0x44) == '\x01') {
    if (cVar2 == '\0') {
      FUN_009b13f8(*param_1,&PTR_s__root__cargo_registry_src_index__00af64a0);
      return 1;
    }
    cVar2 = cVar2 + -1;
  }
  *(char *)((long)pvVar1 + 0x45) = cVar2;
  return 0;
}


// ===== 009c63d0  tokio::io::stdin::stdin =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::stdin::stdin */

void __rustcall tokio::io::stdin::stdin(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::io::stdio::stdin();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar1;
  *param_1 = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


// ===== 009c6404  tokio::task::coop::register_waker =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::task::coop::register_waker */

void __rustcall tokio::task::coop::register_waker(undefined8 *param_1)

{
  FUN_009b13f8(*param_1,&PTR_s__root__cargo_registry_src_index__00af64a0);
  return;
}


// ===== 009c6414  tokio::task::coop::stop =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::task::coop::stop */

undefined1  [16] __rustcall tokio::task::coop::stop(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
    auVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    param_2 = auVar7._8_8_;
    uVar5 = auVar7._0_8_;
    pvVar4 = pthread_getspecific(auVar7._0_4_);
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)uVar5);
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = pvVar4;
  if (pvVar4 < (void *)0x2) {
    auVar7 = FUN_00996984(uVar5 & 0xffffffff,pvVar4,0);
  }
  lVar3 = auVar7._0_8_;
  if (lVar3 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar7._8_8_;
    return auVar2 << 0x40;
  }
  bVar1 = *(byte *)(lVar3 + 0x44);
  *(undefined1 *)(lVar3 + 0x44) = 0;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = bVar1 & 1;
  auVar6[8] = *(undefined1 *)(lVar3 + 0x45);
  auVar6._9_7_ = 0;
  return auVar6;
}


// ===== 009c64a0  FUN_009c64a0 =====

ulong FUN_009c64a0(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar9);
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar9);
  }
  if (puVar4 < (ulong *)0x2) {
    puVar4 = (ulong *)FUN_00996620(uVar9 & 0xffffffff,puVar4,0);
  }
  if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  uVar9 = *puVar4;
  uVar7 = puVar4[1] ^ 0x646f72616e646f6d;
  *puVar4 = uVar9 + 1;
  do {
    uVar3 = DAT_00b0f748;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb0f748,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b0f748 = DAT_00b0f748 + 1;
    }
  } while (cVar1 != '\0');
  uVar6 = uVar7 + (uVar9 ^ 0x736f6d6570736575);
  uVar8 = uVar6 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar7 = puVar4[1] ^ 0x7465646279746573 ^ ((ulong)uVar3 | 0x400000000000000);
  uVar9 = uVar7 + (uVar9 ^ 0x6c7967656e657261);
  uVar5 = uVar9 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar9 = uVar9 + uVar8;
  uVar8 = uVar9 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
  uVar7 = uVar5 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar6 = uVar7 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar7 = (uVar7 ^ ((ulong)uVar3 | 0x400000000000000)) + uVar8;
  uVar9 = uVar6 + ((uVar9 >> 0x20 | uVar9 << 0x20) ^ 0xff);
  uVar5 = uVar7 ^ (uVar8 >> 0x33 | uVar8 << 0xd);
  uVar6 = uVar9 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
  uVar9 = uVar5 + uVar9;
  uVar7 = uVar6 + (uVar7 >> 0x20 | uVar7 << 0x20);
  uVar5 = uVar9 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
  uVar6 = uVar7 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
  uVar7 = uVar5 + uVar7;
  uVar9 = uVar6 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar5 = uVar7 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar6 = uVar9 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
  uVar9 = uVar5 + uVar9;
  uVar7 = uVar6 + (uVar7 >> 0x20 | uVar7 << 0x20);
  uVar5 = uVar9 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
  uVar6 = uVar7 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
  uVar9 = uVar6 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar5 = uVar5 + uVar7 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar7 = uVar9 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
  uVar9 = uVar5 + uVar9;
  return (uVar7 >> 0x2b | uVar7 << 0x15) ^ (uVar5 >> 0x2f | uVar5 << 0x11) ^
         (uVar9 >> 0x20 | uVar9 << 0x20) ^ uVar9;
}


// ===== 009c6644  <tokio::task::yield_now::yield_now::{closure#0}::YieldNow_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::yield_now::yield_now::{closure#0}::YieldNow as core::future::future::Future>::poll
    */

byte __rustcall
<tokio::task::yield_now::yield_now::{closure#0}::YieldNow_as_core::future::future::Future>::poll
          (byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar2 = *param_2;
    *param_1 = 1;
    FUN_009b13f8(uVar2,&PTR_s__root__cargo_registry_src_index__00af64b8);
  }
  return bVar1 ^ 1;
}


// ===== 009c6684  FUN_009c6684 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c6684(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *__src;
  ulong uVar9;
  undefined *__dest;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_b0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  lVar10 = param_2[1];
  __dest = PTR_DAT_00af6438;
  lVar5 = _UNK_00af6440;
  uVar8 = _DAT_00af6448;
  lVar6 = _UNK_00af6450;
  if (lVar10 == 0) goto LAB_009c689c;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = lVar10 + 1U;
  if (SUB168(auVar3 * ZEXT816(0x48),8) == 0) {
    uVar9 = (lVar10 + 1U) * 0x48;
    uVar13 = uVar9 + lVar10 + 9U;
    if ((CARRY8(uVar9,lVar10 + 9U)) || (0x7ffffffffffffff8 < uVar13)) goto LAB_009c6730;
    if (uVar13 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(uVar13,8);
      if (lVar5 != 0) goto LAB_009c674c;
      lVar10 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(1,8,uVar13);
      goto LAB_009c6738;
    }
    lVar5 = 8;
LAB_009c674c:
    __dest = (undefined *)(lVar5 + uVar9);
  }
  else {
LAB_009c6730:
    lVar10 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(1);
LAB_009c6738:
    __dest = (undefined *)0x0;
  }
  __src = (undefined8 *)*param_2;
  memcpy(__dest,__src,lVar10 + 9);
  lVar6 = param_2[3];
  if (lVar6 != 0) {
    puVar12 = __src + 1;
    uVar13 = NEON_cmge(*__src,0,1);
    uVar13 = uVar13 & 0x8080808080808080;
    puVar4 = __src;
    lVar5 = lVar6;
    do {
      for (; uVar13 == 0; uVar13 = uVar13 & 0x8080808080808080) {
        uVar13 = NEON_cmge(*puVar12,0,1);
        puVar4 = puVar4 + -0x48;
        puVar12 = puVar12 + 1;
      }
      uVar9 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      puVar11 = puVar4 + (long)-(int)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) * 9;
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(puVar11 + -9));
      if (puVar11[-1] == 0) {
        local_80 = 0;
        local_70 = 0;
      }
      else {
        if (puVar11[-3] == 0) {
                    /* try { // try from 009c68cc to 009c68d7 has its CatchHandler @ 009c68e0 */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6028);
        }
                    /* try { // try from 009c6878 to 009c687f has its CatchHandler @ 009c68dc */
        FUN_009bd34c(&local_80,puVar11[-3],puVar11[-2]);
      }
      lVar5 = lVar5 + -1;
      lVar7 = (long)__src - (long)puVar11 >> 3;
      uVar16 = puVar11[-7];
      uVar15 = puVar11[-8];
      uVar14 = puVar11[-5];
      uVar8 = puVar11[-4];
      *(undefined8 *)(__dest + lVar7 * -8 + -0x30) = puVar11[-6];
      *(undefined8 *)(__dest + lVar7 * -8 + -0x38) = uVar16;
      *(undefined8 *)(__dest + lVar7 * -8 + -8) = local_70;
      *(undefined8 *)(__dest + lVar7 * -8 + -0x10) = uStack_78;
      *(undefined8 *)(__dest + lVar7 * -8 + -0x18) = local_80;
      uVar13 = uVar13 - 1 & uVar13;
      *(undefined8 *)(__dest + lVar7 * -8 + -0x20) = uVar8;
      *(undefined8 *)(__dest + lVar7 * -8 + -0x28) = uVar14;
      *(undefined8 *)(__dest + lVar7 * -8 + -0x40) = uVar15;
      *(undefined8 *)(__dest + lVar7 * -8 + -0x48) = local_b0;
    } while (lVar5 != 0);
  }
  lVar5 = lVar10;
  uVar8 = param_2[2];
LAB_009c689c:
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[1] = lVar5;
  *param_1 = __dest;
  param_1[3] = lVar6;
  param_1[2] = uVar8;
  return;
}


// ===== 009c6908  <tokio::io::stdin::Stdin_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stdin::Stdin as tokio::io::async_read::AsyncRead>::poll_read */

undefined8 __rustcall
<tokio::io::stdin::Stdin_as_tokio::io::async_read::AsyncRead>::poll_read
          (ulong *param_1,undefined8 param_2,long *param_3)

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
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar11 = *param_1;
  if (uVar11 != 0xfffffffffffffffe) {
    uVar7 = param_3[1];
    uVar5 = param_3[2];
    *param_1 = 0xffffffffffffffff;
    sVar10 = uVar7 - uVar5;
    uStack_78 = sVar10;
    if (0x1fffff < sVar10) {
      uStack_78 = 0x200000;
    }
    if (uVar11 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af41f8);
    }
    uVar8 = param_1[2];
    uVar1 = param_1[3];
    uStack_98 = param_1[1];
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
          memcpy((void *)(*param_3 + uVar5),(void *)(uStack_98 + uVar1),sVar10);
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
    uStack_80 = param_1[4];
    param_1[4] = 0;
    if (uStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4210);
    }
    uStack_a0 = uVar11;
    uStack_90 = uVar8;
    uStack_88 = uVar8;
    uVar11 = FUN_009a0fcc(&uStack_a0,&PTR_s__root__cargo_registry_src_index__00af4228);
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = uVar11;
  }
  FUN_009ac650(&uStack_a0,param_1 + 1,param_2);
  uVar11 = uStack_78;
  uVar1 = uStack_80;
  uVar5 = uStack_88;
  uVar7 = uStack_90;
  if (uStack_a0 == 0xffffffffffffffff) {
    return 1;
  }
  if (uStack_a0 == 2) {
    uStack_68 = uStack_98;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
    ::from(&uStack_68);
    return 0;
  }
  param_1[4] = uStack_70;
  if (uStack_a0 != 1) {
    uVar8 = param_3[1];
    uVar6 = param_3[2];
    sVar10 = uVar8 - uVar6;
    if (uStack_80 - uStack_78 <= uVar8 - uVar6) {
      sVar10 = uStack_80 - uStack_78;
    }
    if (uStack_80 < uStack_78) {
      ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af4198;
      uVar6 = uStack_78;
      uVar8 = uStack_80;
      uVar12 = uStack_80;
LAB_0098e000:
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail(uVar6,uVar12,uVar8,ppuVar9);
    }
    uVar12 = sVar10 + uVar6;
    ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af41b0;
    if ((uVar12 < uVar6) || (uVar8 < uVar12)) goto LAB_0098e000;
    memcpy((void *)(*param_3 + uVar6),(void *)(uStack_88 + uStack_78),sVar10);
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
    (**(code **)(plVar4[2] + 0x20))();
LAB_0098df60:
    *param_1 = uVar7;
    param_1[1] = uVar5;
    param_1[2] = uVar8;
    param_1[3] = uVar6;
    return 0;
  }
  uStack_a0 = uStack_98;
  if (uStack_80 != uStack_78) {
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
  (**(code **)(plVar4[2] + 0x20))();
LAB_0098dec4:
  *param_1 = uVar7;
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return 0;
}


// ===== 009c690c  FUN_009c690c =====

byte FUN_009c690c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  undefined1 auVar13 [16];
  
  puVar3 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  plVar8 = (long *)*param_1;
  lVar11 = *plVar8;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037cfd5,0x2b,&PTR_s__root__cargo_registry_src_index__00af6550);
  }
  plVar9 = (long *)*param_2;
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar10 == 0) {
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000001 < puVar4) goto LAB_009c6954;
LAB_009c69f4:
    puVar4 = (undefined1 *)FUN_00996984(uVar10 & 0xffffffff,puVar4,0);
    if (puVar4 != (undefined1 *)0x0) goto LAB_009c6958;
LAB_009c6a08:
    uVar5 = 0;
    uVar6 = (uint)*(undefined8 *)(lVar11 + 0x30);
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (puVar4 <= &DAT_00000001) goto LAB_009c69f4;
LAB_009c6954:
    if (puVar4 == (undefined1 *)0x0) goto LAB_009c6a08;
LAB_009c6958:
    bVar7 = puVar4[0x45];
    uVar5 = (uint)bVar7;
    if (puVar4[0x44] == 1) {
      if (uVar5 == 0) {
        FUN_009b13f8(plVar9,&PTR_s__root__cargo_registry_src_index__00af64a0);
        return 2;
      }
      bVar7 = bVar7 - 1;
    }
    puVar4[0x45] = bVar7;
    uVar5 = (uint)(byte)puVar4[0x44] << 8 | uVar5 << 0x10;
    uVar6 = (uint)*(undefined8 *)(lVar11 + 0x30);
  }
  if ((uVar6 >> 1 & 1) != 0) {
LAB_009c6ae0:
    bVar7 = *(byte *)(lVar11 + 0x38);
    *(undefined1 *)(lVar11 + 0x38) = 0;
    bVar7 = bVar7 ^ 1;
    plVar9 = (long *)*plVar8;
joined_r0x009c6af0:
    if (plVar9 != (long *)0x0) {
      do {
        lVar11 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 009c6b1c to 009c6b23 has its CatchHandler @ 009c6b94 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(plVar8);
      }
    }
    *plVar8 = 0;
    return bVar7 & 1;
  }
  puVar12 = (ulong *)(lVar11 + 0x30);
  if ((uVar6 >> 2 & 1) != 0) {
    bVar7 = 1;
    plVar9 = (long *)*plVar8;
    goto joined_r0x009c6af0;
  }
  if ((uVar6 & 1) == 0) {
LAB_009c6a60:
    auVar13 = (**(code **)*plVar9)(plVar9[1]);
    *(undefined1 (*) [16])(lVar11 + 0x20) = auVar13;
    do {
      uVar10 = *puVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar2) {
        *puVar12 = uVar10 | 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (((uint)uVar10 >> 1 & 1) != 0) goto LAB_009c6ae0;
  }
  else if ((*(long *)(lVar11 + 0x28) != plVar9[1]) || (*(long *)(lVar11 + 0x20) != *plVar9)) {
    do {
      uVar10 = *puVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar2) {
        *puVar12 = uVar10 & 0xfffffffffffffffe;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (((uint)uVar10 >> 1 & 1) != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar2) {
          *puVar12 = *puVar12 | 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_009c6ae0;
    }
                    /* try { // try from 009c6a5c to 009c6a6b has its CatchHandler @ 009c6b78 */
    (**(code **)(*(long *)(lVar11 + 0x20) + 0x18))(*(undefined8 *)(lVar11 + 0x28));
    goto LAB_009c6a60;
  }
  if ((uVar5 >> 8 & 1) == 0) {
    return 2;
  }
  uVar10 = *(ulong *)puVar3;
  if (uVar10 == 0) {
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000001 < puVar4) goto joined_r0x009c6b70;
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000001 < puVar4) goto joined_r0x009c6b70;
  }
  puVar4 = (undefined1 *)FUN_00996984(uVar10 & 0xffffffff,puVar4,0);
joined_r0x009c6b70:
  if (puVar4 != (undefined1 *)0x0) {
    puVar4[0x44] = 1;
    puVar4[0x45] = (char)(uVar5 >> 0x10);
  }
  return 2;
}


// ===== 009c6ba4  <tokio::io::stdin::Stdin_as_std::os::fd::raw::AsRawFd>::as_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stdin::Stdin as std::os::fd::raw::AsRawFd>::as_raw_fd */

undefined8 __rustcall <tokio::io::stdin::Stdin_as_std::os::fd::raw::AsRawFd>::as_raw_fd(void)

{
  std::io::stdio::stdin();
  return 0;
}


// ===== 009c6bbc  <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::coop::with_budget::ResetGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop(undefined2 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar2 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
    if (&DAT_00000001 < puVar1) goto joined_r0x009c6bf0;
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
    if (&DAT_00000001 < puVar1) goto joined_r0x009c6bf0;
  }
  puVar1 = (undefined1 *)FUN_00996984(uVar2 & 0xffffffff,puVar1,0);
joined_r0x009c6bf0:
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined2 *)(puVar1 + 0x44) = *param_1;
  }
  return;
}


// ===== 009c6c40  <tokio::net::tcp::split::ReadHalf_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::ReadHalf as tokio::io::async_read::AsyncRead>::poll_read */

void __rustcall
<tokio::net::tcp::split::ReadHalf_as_tokio::io::async_read::AsyncRead>::poll_read
          (undefined8 *param_1)

{
  FUN_0099b9cc(*param_1);
  return;
}


// ===== 009c6c48  <tokio::net::tcp::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::WriteHalf as tokio::io::async_write::AsyncWrite>::poll_write */

void __rustcall
<tokio::net::tcp::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write
          (undefined8 *param_1)

{
  FUN_0099bd68(*param_1);
  return;
}


// ===== 009c6c50  <tokio::net::tcp::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::WriteHalf as tokio::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio::net::tcp::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
          (long *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  if (*(int *)(*param_1 + 0x18) != -1) {
    uVar2 = <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::shutdown
                      ((int *)(*param_1 + 0x18),1);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    return auVar1 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 009c6c8c  <tokio::net::tcp::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split::WriteHalf as tokio::io::async_write::AsyncWrite>::poll_write_vectored */

void __rustcall
<tokio::net::tcp::split::WriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009a9f94(local_28,param_2,1,&local_28);
  return;
}


// ===== 009c6cbc  FUN_009c6cbc =====

void FUN_009c6cbc(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 auStack_40 [16];
  ulong *local_30;
  undefined8 uStack_28;
  
  puVar4 = (ulong *)*param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_0037d028,6);
  uVar3 = *puVar4;
  if (uVar3 < 0xfffffffffffffff0 && (uVar3 & 8) == 0) {
    if (*puVar4 != uVar3) {
      ClearExclusiveLocal();
      goto LAB_009c6cfc;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar2) {
      *puVar4 = uVar3 + 0x10;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 != '\0') goto LAB_009c6cfc;
  }
  else {
LAB_009c6cfc:
    uVar3 = <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::try_lock_shared_slow
                      (puVar4,0);
    if ((uVar3 & 1) == 0) {
      local_30 = (ulong *)&DAT_002a18b8;
      uStack_28 = 0x11;
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (auStack_40,&DAT_002bd1f4,4,&local_30,&DAT_00af6648);
      goto LAB_009c6d3c;
    }
  }
  local_30 = puVar4 + 1;
                    /* try { // try from 009c6d74 to 009c6d93 has its CatchHandler @ 009c6ddc */
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_40,&DAT_002bd1f4,4,&local_30,&DAT_00af6668);
  do {
    uVar3 = *puVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar2) {
      *puVar4 = uVar3 - 0x10;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((uVar3 & 0xfffffffffffffff2) == 0x12) {
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow(puVar4);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_40);
    return;
  }
LAB_009c6d3c:
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_40);
  return;
}


// ===== 009c6e18  FUN_009c6e18 =====

void FUN_009c6e18(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_002a1628,8,&DAT_0037cff1,6,*param_1,&PTR_FUN_00af6588,&DAT_0037cf76,7,
             &local_18,&DAT_00af65a8);
  return;
}


// ===== 009c6e88  FUN_009c6e88 =====

void FUN_009c6e88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
            (param_2,&DAT_0037cff7,5,local_18,&DAT_00af65c8,&local_18,&DAT_00af65e8);
  return;
}


// ===== 009c6ed4  FUN_009c6ed4 =====

void FUN_009c6ed4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0037cfea,7,&local_18,&DAT_00af6568);
  return;
}


// ===== 009c6f18  <tokio::io::ready::Ready_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::ready::Ready as core::fmt::Debug>::fmt */

void __rustcall
<tokio::io::ready::Ready_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_58 [20];
  byte local_44 [4];
  byte local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_58,param_2,&DAT_0037cf92,5);
  uVar4 = *param_1;
  uVar3 = (uint)uVar4;
  bVar1 = (byte)(uVar3 >> 2) & 1;
  local_44[0] = bVar1;
  if ((uVar4 & 1) != 0) {
    local_44[0] = 1;
  }
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_58,&DAT_0037cf97,0xb,local_44,&DAT_00af6510);
  local_38[0] = (byte)(uVar3 >> 3) & 1;
  local_40[0] = local_38[0];
  if ((uVar4 & 2) != 0) {
    local_40[0] = 1;
  }
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,&DAT_0037cfa2,0xb,local_40,&DAT_00af6510);
  local_3c[0] = bVar1;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,&DAT_0037cfad,0xe,local_3c,&DAT_00af6510);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,&DAT_0037cfbb,0xf,local_38,&DAT_00af6510);
  local_34[0] = (byte)(uVar3 >> 5) & 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,&DAT_002a1930,8,local_34,&DAT_00af6510);
  local_34[0] = (byte)(uVar3 >> 4) & 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_58,&DAT_0037cfca,0xb,local_34,&DAT_00af6510);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_58);
  return;
}


// ===== 009c7044  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::coop::RestoreOnPending as core::ops::drop::Drop>::drop */

void __rustcall <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(char *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  if (*param_1 != '\x01') {
    return;
  }
  cVar1 = param_1[1];
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (&DAT_00000001 < puVar2) goto joined_r0x009c7084;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (&DAT_00000001 < puVar2) goto joined_r0x009c7084;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar2,0);
joined_r0x009c7084:
  if (puVar2 != (undefined1 *)0x0) {
    puVar2[0x45] = cVar1;
    puVar2[0x44] = 1;
  }
  return;
}


// ===== 009c70d8  FUN_009c70d8 =====

void FUN_009c70d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0037cfea,7,&local_18,&DAT_00af6568);
  return;
}


// ===== 009c7118  FUN_009c7118 =====

void FUN_009c7118(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  plVar1 = (long *)(lVar6 + 0x148);
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
    puVar2 = (ulong *)(lVar6 + 0x138);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x10);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x30);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x50);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x70);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x90);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0xb0);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0xd0);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0xf0);
    return;
  }
  return;
}


// ===== 009c71a8  FUN_009c71a8 =====

undefined4 FUN_009c71a8(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  ulong *local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined1 local_48;
  uint7 uStack_47;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar11 == 0) {
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar4 <= &DAT_00000001) goto LAB_009c7268;
LAB_009c71ec:
    if (puVar4 != (undefined1 *)0x0) goto LAB_009c71f0;
LAB_009c727c:
    uVar7 = 0;
    bVar9 = *(byte *)((long)param_1 + 0x21);
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
    if (&DAT_00000001 < puVar4) goto LAB_009c71ec;
LAB_009c7268:
    puVar4 = (undefined1 *)FUN_00996984(uVar11 & 0xffffffff,puVar4,0);
    if (puVar4 == (undefined1 *)0x0) goto LAB_009c727c;
LAB_009c71f0:
    bVar9 = puVar4[0x45];
    uVar7 = (uint)bVar9;
    if (puVar4[0x44] == 1) {
      if (uVar7 == 0) {
        FUN_009b13f8(*param_2,&PTR_s__root__cargo_registry_src_index__00af64a0);
        return 2;
      }
      bVar9 = bVar9 - 1;
    }
    puVar4[0x45] = bVar9;
    uVar7 = (uint)(byte)puVar4[0x44] << 8 | uVar7 << 0x10;
    bVar9 = *(byte *)((long)param_1 + 0x21);
  }
  if (bVar9 < 3) {
    if (bVar9 == 0) {
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[1] = param_1[3];
      *param_1 = param_1[2];
      goto LAB_009c72d4;
    }
    if (bVar9 == 1) {
                    /* try { // try from 009c72a8 to 009c72c3 has its CatchHandler @ 009c72c8 */
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00af6488);
    }
    else {
      core::panicking::panic_const::panic_const_async_fn_resumed_panic
                (&PTR_s__root__cargo_registry_src_index__00af6488);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x9c72d4);
    (*pcVar2)();
  }
  if (bVar9 == 3) goto LAB_009c72d4;
                    /* try { // try from 009c7394 to 009c739b has its CatchHandler @ 009c74f0 */
  while (uVar11 = FUN_009864d0(param_1 + 5,*param_2), (uVar11 & 1) == 0) {
                    /* try { // try from 009c73a0 to 009c73a7 has its CatchHandler @ 009c74d0 */
    <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 5);
    if (param_1[9] != 0) {
                    /* try { // try from 009c73b8 to 009c73bb has its CatchHandler @ 009c74c8 */
      (**(code **)(param_1[9] + 0x18))(param_1[10]);
    }
    *(undefined1 *)(param_1 + 4) = 0;
LAB_009c72d4:
    lVar12 = *param_1;
                    /* try { // try from 009c72d8 to 009c72fb has its CatchHandler @ 009c7514 */
    lVar5 = FUN_009b2398(0);
    if (lVar5 == 0) {
                    /* try { // try from 009c7494 to 009c749f has its CatchHandler @ 009c7514 */
                    /* WARNING: Subroutine does not return */
      std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
    }
    if ((*(uint *)(lVar5 + 0x38) & 1) == 0) {
      uVar6 = FUN_009c64a0();
      uVar8 = (uint)((ulong)uVar6 >> 0x20);
      uVar3 = (uint)uVar6;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
    }
    else {
      uVar8 = *(uint *)(lVar5 + 0x3c);
      uVar3 = *(uint *)(lVar5 + 0x40);
    }
    uVar8 = uVar8 ^ uVar8 << 0x11;
    *(undefined4 *)(lVar5 + 0x38) = 1;
    *(uint *)(lVar5 + 0x3c) = uVar3;
    uVar8 = uVar3 >> 0x10 ^ uVar8 >> 7 ^ uVar3 ^ uVar8;
    *(uint *)(lVar5 + 0x40) = uVar8;
    local_80 = (ulong *)(lVar12 + (ulong)(uVar8 + uVar3 >> 0x1d) * 0x20);
    local_48 = 0;
    uStack_78 = *local_80 >> 2;
    local_50 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_70 = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    uVar11 = *(ulong *)(*param_1 + 0x128) & 0xfffffffffffffffe;
    if (*(ulong *)param_1[1] != uVar11) {
      uVar10 = 0;
      *(ulong *)param_1[1] = uVar11;
LAB_009c7418:
                    /* try { // try from 009c7418 to 009c741f has its CatchHandler @ 009c74a8 */
      <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(&local_80);
      if (local_60 != 0) {
                    /* try { // try from 009c7430 to 009c7433 has its CatchHandler @ 009c74a4 */
        (**(code **)(local_60 + 0x18))(lStack_58);
      }
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)((long)param_1 + 0x21) = 1;
      return uVar10;
    }
    if ((*(ulong *)(*param_1 + 0x128) & 1) != 0) {
      uVar10 = 1;
      goto LAB_009c7418;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[6] = uStack_78;
    param_1[5] = (long)local_80;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = lStack_58;
    param_1[9] = 0;
    param_1[0xc] = (ulong)uStack_47 << 8;
    param_1[0xb] = 0;
  }
  *(undefined1 *)((long)param_1 + 0x21) = 4;
  if ((uVar7 >> 8 & 1) == 0) {
    return 2;
  }
  uVar11 = *(ulong *)puVar1;
  if (uVar11 == 0) {
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
    if (&DAT_00000001 < puVar4) goto joined_r0x009c748c;
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
    if (&DAT_00000001 < puVar4) goto joined_r0x009c748c;
  }
  puVar4 = (undefined1 *)FUN_00996984(uVar11 & 0xffffffff,puVar4,0);
joined_r0x009c748c:
  if (puVar4 != (undefined1 *)0x0) {
    puVar4[0x44] = 1;
    puVar4[0x45] = (char)(uVar7 >> 0x10);
  }
  return 2;
}


// ===== 009c753c  FUN_009c753c =====

void FUN_009c753c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    uVar6 = param_1[4];
    puVar4 = (undefined8 *)param_1[5];
    do {
      puVar5 = puVar4;
      if (uVar6 == 0) {
        do {
          puVar4 = puVar5 + 1;
          lVar3 = lVar3 + -0x100;
          uVar6 = NEON_cmge(*puVar5,0,1);
          uVar6 = uVar6 & 0x8080808080808080;
          puVar5 = puVar4;
        } while (uVar6 == 0);
        param_1[5] = (long)puVar4;
        param_1[3] = lVar3;
      }
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar2 = lVar2 + -1;
      uVar6 = uVar6 - 1 & uVar6;
      param_1[7] = lVar2;
      param_1[4] = uVar6;
      FUN_009c5c70(lVar3 + (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78U) * -4 + -0x18);
    } while (lVar2 != 0);
  }
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    free((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 009c7600  <tokio::io::stdin::Stdin_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stdin::Stdin as std::os::fd::owned::AsFd>::as_fd */

undefined8 __rustcall <tokio::io::stdin::Stdin_as_std::os::fd::owned::AsFd>::as_fd(void)

{
  std::io::stdio::stdin();
  return 0;
}


// ===== 009c7618  <tokio::sync::oneshot::State_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::oneshot::State as core::fmt::Debug>::fmt */

void __rustcall
<tokio::sync::oneshot::State_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  byte local_24 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_0037cffc,5);
  bVar1 = *param_1;
  local_30[0] = bVar1 >> 1 & 1;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,&DAT_0037d001,0xb,local_30,&DAT_00af6510);
  local_2c[0] = bVar1 >> 2 & 1;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,&DAT_0037cf7d,9,local_2c,&DAT_00af6510);
  local_28[0] = bVar1 & 1;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,&DAT_0037d00c,0xe,local_28,&DAT_00af6510);
  local_24[0] = bVar1 >> 3 & 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,&DAT_0037d01a,0xe,local_24,&DAT_00af6510);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009c76ec  FUN_009c76ec =====

void FUN_009c76ec(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
            (param_2,&DAT_0037d028,6,param_1 + 8,&DAT_00af6608,&local_18,&DAT_00af6628);
  return;
}


// ===== 009c7738  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 009c773c  <str_as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs */

void __rustcall
<str_as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  short local_78;
  undefined6 uStack_76;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  size_t local_58;
  undefined1 *puStack_50;
  size_t local_48;
  
  <core::net::socket_addr::SocketAddr_as_core::str::traits::FromStr>::from_str(&local_78);
  if (local_78 != 2) {
    param_1[1] = uStack_70;
    *param_1 = CONCAT62(uStack_76,local_78);
    param_1[3] = uStack_60;
    param_1[2] = local_68;
    return;
  }
  if ((long)param_3 < 0) {
    uVar1 = 0;
LAB_009c777c:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar1,param_3);
  }
  if (param_3 == 0) {
    puStack_50 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    puStack_50 = (undefined1 *)FUN_004b25a4(param_3,1);
    if (puStack_50 == (undefined1 *)0x0) goto LAB_009c777c;
    memcpy(puStack_50,param_2,param_3);
  }
  local_58 = param_3;
  local_48 = param_3;
  uVar1 = FUN_009a1ec4(&local_58,&PTR_s__root__cargo_registry_src_index__00af6688);
  param_1[1] = uVar1;
  *(undefined2 *)param_1 = 0xffff;
  return;
}


// ===== 009c781c  FUN_009c781c =====

void FUN_009c781c(long *param_1)

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
          puVar4 = puVar4 + -0x20;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_009c5c70((long)puVar4 + (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78U) * -4 + -0x18);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x21 != -0x29) {
      free((void *)(*param_1 + lVar2 * -0x20 + -0x20));
      return;
    }
  }
  return;
}


// ===== 009c78f4  FUN_009c78f4 =====

void FUN_009c78f4(long *param_1)

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
          puVar4 = puVar4 + -0x48;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_009bf620(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 9 +
                              -3);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x49 != -0x51) {
      free((void *)(*param_1 + lVar2 * -0x48 + -0x48));
      return;
    }
  }
  return;
}


// ===== 009c79dc  <(&str,u16)as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <(&str, u16) as tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs */

void __rustcall
<(&str,u16)as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs
          (undefined2 *param_1,undefined8 *param_2)

{
  void *__src;
  size_t __n;
  undefined2 uVar1;
  ulong uVar2;
  undefined1 *__dest;
  undefined8 uVar3;
  undefined2 uStack_72;
  undefined6 local_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  byte local_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined2 local_48;
  
  __src = (void *)*param_2;
  __n = param_2[1];
  uVar1 = *(undefined2 *)(param_2 + 2);
  uVar2 = <core::net::ip_addr::Ipv4Addr_as_core::str::traits::FromStr>::from_str(__src,__n);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
    param_1[3] = uVar1;
    *(int *)(param_1 + 1) = (int)(uVar2 >> 8);
    return;
  }
  <core::net::ip_addr::Ipv6Addr_as_core::str::traits::FromStr>::from_str(&local_60,__src,__n);
  if ((local_60 & 1) == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *param_1 = 1;
    uStack_68 = (undefined6)uStack_57;
    uStack_62 = (undefined2)(CONCAT17(bStack_50,uStack_57) >> 0x30);
    local_70 = (undefined6)uStack_5f;
    uStack_6a = (undefined2)(CONCAT17(uStack_58,uStack_5f) >> 0x30);
    param_1[0xe] = uVar1;
    *(ulong *)(param_1 + 5) = CONCAT62(uStack_68,uStack_6a);
    *(ulong *)(param_1 + 1) = CONCAT62(local_70,uStack_72);
    param_1[9] = uStack_62;
    return;
  }
  if ((long)__n < 0) {
    uVar3 = 0;
LAB_009c7a30:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,__n);
  }
  if (__n == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 1;
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) goto LAB_009c7a30;
    memcpy(__dest,__src,__n);
  }
  local_60 = (byte)__n;
  uStack_5f = (undefined7)(__n >> 8);
  uStack_58 = SUB81(__dest,0);
  uStack_57 = (undefined7)((ulong)__dest >> 8);
  bStack_50 = local_60;
  uStack_4f = uStack_5f;
  local_48 = uVar1;
  uVar3 = FUN_009a20ec(&local_60,&PTR_s__root__cargo_registry_src_index__00af66a0);
  *(undefined8 *)(param_1 + 4) = uVar3;
  *param_1 = 0xffff;
  return;
}


// ===== 009c7b18  <(alloc::string::String,u16)as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <(alloc::string::String, u16) as tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs */

void __rustcall
<(alloc::string::String,u16)as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs
          (long param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  local_18 = *(undefined2 *)(param_1 + 0x18);
  <(&str,u16)as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs(&local_28);
  return;
}


// ===== 009c7b48  <alloc::string::String_as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs */

void __rustcall
<alloc::string::String_as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs
          (undefined8 *param_1,long param_2)

{
  void *__src;
  size_t __n;
  undefined8 uVar1;
  short local_78;
  undefined6 uStack_76;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  size_t local_58;
  undefined1 *puStack_50;
  size_t local_48;
  
  __src = *(void **)(param_2 + 8);
  __n = *(size_t *)(param_2 + 0x10);
  <core::net::socket_addr::SocketAddr_as_core::str::traits::FromStr>::from_str(&local_78,__src,__n);
  if (local_78 != 2) {
    param_1[1] = uStack_70;
    *param_1 = CONCAT62(uStack_76,local_78);
    param_1[3] = uStack_60;
    param_1[2] = local_68;
    return;
  }
  if ((long)__n < 0) {
    uVar1 = 0;
LAB_009c7b8c:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar1,__n);
  }
  if (__n == 0) {
    puStack_50 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    puStack_50 = (undefined1 *)FUN_004b25a4(__n,1);
    if (puStack_50 == (undefined1 *)0x0) goto LAB_009c7b8c;
    memcpy(puStack_50,__src,__n);
  }
  local_58 = __n;
  local_48 = __n;
  uVar1 = FUN_009a1ec4(&local_58,&PTR_s__root__cargo_registry_src_index__00af6688);
  param_1[1] = uVar1;
  *(undefined2 *)param_1 = 0xffff;
  return;
}


// ===== 009c7c2c  FUN_009c7c2c =====

long FUN_009c7c2c(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar5 = param_1[5] ^ 0x646f72616e646f6d;
  uVar7 = uVar5 + (param_1[4] ^ 0x736f6d6570736575U);
  uVar4 = param_1[5] ^ (ulong)param_2 ^ 0x7065646279746573;
  uVar6 = uVar7 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar5 = uVar4 + (param_1[4] ^ 0x6c7967656e657261U);
  uVar4 = uVar5 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar5 = uVar6 + uVar5;
  lVar2 = 0;
  uVar6 = uVar5 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
  uVar7 = uVar4 + (uVar7 >> 0x20 | uVar7 << 0x20);
  uVar4 = uVar7 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar7 = (uVar7 ^ ((ulong)param_2 | 0x400000000000000)) + uVar6;
  uVar6 = uVar7 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
  uVar5 = ((uVar5 >> 0x20 | uVar5 << 0x20) ^ 0xff) + uVar4;
  uVar4 = uVar5 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar5 = uVar6 + uVar5;
  uVar6 = uVar5 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
  uVar7 = uVar4 + (uVar7 >> 0x20 | uVar7 << 0x20);
  uVar4 = uVar7 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar7 = uVar6 + uVar7;
  uVar6 = uVar7 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
  uVar5 = uVar4 + (uVar5 >> 0x20 | uVar5 << 0x20);
  uVar4 = uVar5 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar5 = uVar6 + uVar5;
  uVar6 = uVar5 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
  uVar7 = uVar4 + (uVar7 >> 0x20 | uVar7 << 0x20);
  uVar4 = uVar7 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar6 = uVar6 + uVar7 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
  uVar7 = uVar4 + (uVar5 >> 0x20 | uVar5 << 0x20);
  uVar5 = uVar7 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar7 = uVar6 + uVar7;
  uVar7 = (uVar6 >> 0x2f | uVar6 << 0x11) ^ (uVar5 >> 0x2b | uVar5 << 0x15) ^
          (uVar7 >> 0x20 | uVar7 << 0x20) ^ uVar7;
  bVar3 = (byte)(uVar7 >> 0x39);
  lVar1 = *param_1;
  uVar4 = param_1[1];
  uVar7 = uVar7 & uVar4;
  uVar10 = *(undefined8 *)(lVar1 + uVar7);
  uVar5 = NEON_cmeq(uVar10,CONCAT17(bVar3,CONCAT16(bVar3,CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(
                                                  bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))))),1
                   );
  while( true ) {
    for (uVar5 = uVar5 & 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      lVar8 = lVar1 + (uVar7 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar4) * -0x48
      ;
      if (param_2 == *(uint *)(lVar8 + -0x48)) goto LAB_009c7dd8;
    }
    uVar10 = NEON_cmeq(uVar10,0xffffffffffffffff,1);
    bVar9 = NEON_umaxv(uVar10,1);
    if ((bVar9 & 1) != 0) break;
    lVar2 = lVar2 + 8;
    uVar7 = uVar7 + lVar2 & uVar4;
    uVar10 = *(undefined8 *)(lVar1 + uVar7);
    uVar5 = NEON_cmeq(uVar10,CONCAT17(bVar3,CONCAT16(bVar3,CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(
                                                  bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))))),1
                     );
  }
  lVar8 = 0;
LAB_009c7dd8:
  lVar2 = 0;
  if (lVar8 != 0) {
    lVar2 = lVar8 + -0x40;
  }
  return lVar2;
}


// ===== 009c7de8  FUN_009c7de8 =====

undefined1 (*) [16] FUN_009c7de8(pthread_key_t param_1,long param_2)

{
  undefined1 (*__pointer) [16];
  void *__ptr;
  undefined1 auVar1 [16];
  
  if (param_2 == 1) {
    return (undefined1 (*) [16])0x0;
  }
  auVar1 = std::sys::random::linux::hashmap_random_keys();
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


// ===== 009c7e84  FUN_009c7e84 =====

/* WARNING: Removing unreachable block (ram,0x009c80e4) */

void FUN_009c7e84(long param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  void *local_a0;
  void *local_98;
  ulong local_90;
  
  if (param_1 != 0) {
    lVar11 = 0;
    do {
      if (-1 < *(char *)(param_2 + lVar11)) {
        lVar7 = param_2 + lVar11 * -0x48;
        local_98 = *(void **)(lVar7 + -0x18);
        if (local_98 != (void *)0x0) {
          uVar9 = *(ulong *)(lVar7 + -0x10);
          lVar7 = *(long *)(lVar7 + -8);
          local_a0 = (void *)0x0;
          local_90 = uVar9;
          if (lVar7 == 0) {
joined_r0x009c8094:
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              local_98 = *(void **)((long)local_98 + 0x170);
            }
            pvVar4 = *(void **)((long)local_98 + 0x160);
          }
          else {
            do {
              lVar7 = lVar7 + -1;
              pvVar5 = local_98;
              if (local_a0 == (void *)0x0) {
                for (; local_a0 = pvVar5, local_90 != 0; local_90 = local_90 - 1) {
                  pvVar5 = *(void **)((long)local_a0 + 0x170);
                }
                local_90 = 0;
                local_98 = (void *)0x0;
                if (*(short *)((long)local_a0 + 0x16a) == 0) goto LAB_009c7fb0;
              }
              else if (*(ushort *)((long)local_a0 + 0x16a) <= local_90) {
LAB_009c7fb0:
                do {
                  pvVar5 = *(void **)((long)local_a0 + 0x160);
                  if (pvVar5 == (void *)0x0) {
                    free(local_a0);
                    /* try { // try from 009c80d4 to 009c80df has its CatchHandler @ 009c8108 */
                    /* WARNING: Subroutine does not return */
                    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6740);
                  }
                  uVar1 = *(ushort *)((long)local_a0 + 0x168);
                  local_90 = (ulong)uVar1;
                  local_98 = (void *)((long)local_98 + 1);
                  free(local_a0);
                  local_a0 = pvVar5;
                } while (*(ushort *)((long)pvVar5 + 0x16a) <= uVar1);
              }
              if (local_98 == (void *)0x0) {
                uVar9 = local_90 + 1;
                pvVar5 = local_a0;
              }
              else {
                puVar8 = (undefined8 *)((long)local_a0 + local_90 * 8 + 0x178);
                do {
                  pvVar5 = (void *)*puVar8;
                  local_98 = (void *)((long)local_98 + -1);
                  puVar8 = (undefined8 *)((long)pvVar5 + 0x170);
                } while (local_98 != (void *)0x0);
                uVar9 = 0;
              }
              local_98 = (void *)0x0;
              plVar6 = *(long **)((long)local_a0 + local_90 * 0x10 + 0xb0);
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
                    /* try { // try from 009c8038 to 009c803b has its CatchHandler @ 009c80f0 */
                <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
                ::drop_slow();
              }
              local_a0 = pvVar5;
              local_90 = uVar9;
            } while (lVar7 != 0);
            if (pvVar5 == (void *)0x0) goto joined_r0x009c8094;
            pvVar4 = *(void **)((long)pvVar5 + 0x160);
            local_98 = pvVar5;
          }
          while (pvVar5 = pvVar4, pvVar5 != (void *)0x0) {
            free(local_98);
            local_98 = pvVar5;
            pvVar4 = *(void **)((long)pvVar5 + 0x160);
          }
          free(local_98);
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != param_1);
  }
  return;
}


// ===== 009c810c  FUN_009c810c =====

/* WARNING: Removing unreachable block (ram,0x009c83fc) */

void FUN_009c810c(long *param_1)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  void *local_a0;
  void *local_98;
  ulong local_90;
  
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    lVar13 = param_1[3];
    if (lVar13 != 0) {
      puVar14 = (undefined8 *)*param_1;
      puVar15 = puVar14 + 1;
      uVar16 = NEON_cmge(*puVar14,0,1);
      uVar16 = uVar16 & 0x8080808080808080;
      do {
        for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
          puVar14 = puVar14 + -0x48;
          uVar16 = NEON_cmge(*puVar15,0,1);
          puVar15 = puVar15 + 1;
        }
        uVar11 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        iVar4 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
        local_98 = (void *)puVar14[(long)-iVar4 * 9 + -3];
        if (local_98 != (void *)0x0) {
          uVar11 = puVar14[(long)-iVar4 * 9 + -2];
          lVar9 = puVar14[(long)-iVar4 * 9 + -1];
          local_a0 = (void *)0x0;
          local_90 = uVar11;
          if (lVar9 == 0) {
joined_r0x009c8360:
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              local_98 = *(void **)((long)local_98 + 0x170);
            }
            pvVar5 = *(void **)((long)local_98 + 0x160);
          }
          else {
            do {
              lVar9 = lVar9 + -1;
              pvVar7 = local_98;
              if (local_a0 == (void *)0x0) {
                for (; local_a0 = pvVar7, local_90 != 0; local_90 = local_90 - 1) {
                  pvVar7 = *(void **)((long)local_a0 + 0x170);
                }
                local_90 = 0;
                local_98 = (void *)0x0;
                if (*(short *)((long)local_a0 + 0x16a) == 0) goto LAB_009c827c;
              }
              else if (*(ushort *)((long)local_a0 + 0x16a) <= local_90) {
LAB_009c827c:
                do {
                  pvVar7 = *(void **)((long)local_a0 + 0x160);
                  if (pvVar7 == (void *)0x0) {
                    free(local_a0);
                    /* try { // try from 009c83ec to 009c83f7 has its CatchHandler @ 009c8420 */
                    /* WARNING: Subroutine does not return */
                    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6740);
                  }
                  uVar1 = *(ushort *)((long)local_a0 + 0x168);
                  local_90 = (ulong)uVar1;
                  local_98 = (void *)((long)local_98 + 1);
                  free(local_a0);
                  local_a0 = pvVar7;
                } while (*(ushort *)((long)pvVar7 + 0x16a) <= uVar1);
              }
              if (local_98 == (void *)0x0) {
                uVar11 = local_90 + 1;
                pvVar7 = local_a0;
              }
              else {
                puVar10 = (undefined8 *)((long)local_a0 + local_90 * 8 + 0x178);
                do {
                  pvVar7 = (void *)*puVar10;
                  local_98 = (void *)((long)local_98 + -1);
                  puVar10 = (undefined8 *)((long)pvVar7 + 0x170);
                } while (local_98 != (void *)0x0);
                uVar11 = 0;
              }
              local_98 = (void *)0x0;
              plVar8 = *(long **)((long)local_a0 + local_90 * 0x10 + 0xb0);
              do {
                lVar12 = *plVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar3) {
                  *plVar8 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar12 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 009c8304 to 009c8307 has its CatchHandler @ 009c8408 */
                <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
                ::drop_slow();
              }
              local_a0 = pvVar7;
              local_90 = uVar11;
            } while (lVar9 != 0);
            if (pvVar7 == (void *)0x0) goto joined_r0x009c8360;
            pvVar5 = *(void **)((long)pvVar7 + 0x160);
            local_98 = pvVar7;
          }
          while (pvVar7 = pvVar5, pvVar7 != (void *)0x0) {
            free(local_98);
            local_98 = pvVar7;
            pvVar5 = *(void **)((long)pvVar7 + 0x160);
          }
          free(local_98);
        }
        lVar13 = lVar13 + -1;
        uVar16 = uVar16 - 1 & uVar16;
      } while (lVar13 != 0);
    }
    if (lVar6 * 0x49 != -0x51) {
      free((void *)(*param_1 + lVar6 * -0x48 + -0x48));
      return;
    }
  }
  return;
}


// ===== 009c8424  FUN_009c8424 =====

void FUN_009c8424(int *param_1,uint param_2)

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


// ===== 009c8494  FUN_009c8494 =====

void FUN_009c8494(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x10);
                    /* try { // try from 009c84a8 to 009c84af has its CatchHandler @ 009c84c8 */
  FUN_009c810c(__ptr);
  free(__ptr);
  return;
}


// ===== 009c84e4  FUN_009c84e4 =====

void FUN_009c84e4(void *param_1,long param_2)

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


// ===== 009c8534  FUN_009c8534 =====

void FUN_009c8534(long *param_1)

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
    FUN_009c9b50(local_38,local_80);
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
                    /* try { // try from 009c85b0 to 009c85b3 has its CatchHandler @ 009c85c8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  return;
}


// ===== 009c85e0  FUN_009c85e0 =====

void FUN_009c85e0(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_38 [2];
  long local_28;
  
  while( true ) {
    FUN_009c9b50(local_38,param_1);
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


// ===== 009c8644  FUN_009c8644 =====

void FUN_009c8644(long *param_1,long param_2,long param_3)

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
  code *pcVar10;
  bool bVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
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
  long local_88;
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
    local_88 = 0;
    if (sVar5 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      do {
        puVar8 = (undefined8 *)(param_2 + 0xb0 + uVar21 * 0x10);
        uVar22 = puVar8[1];
        plVar12 = (long *)*puVar8;
        puVar8 = (undefined8 *)(param_2 + uVar21 * 0x10);
        uVar21 = uVar21 + 1;
        uVar15 = *puVar8;
        uVar3 = puVar8[1];
        do {
          lVar20 = *plVar12;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar11) {
            *plVar12 = lVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar20 < 0) goto LAB_009c8934;
        uVar4 = *(ushort *)(local_98 + 0x16a);
        local_d0 = plVar12;
        uStack_c8 = uVar22;
        if (10 < uVar4) {
                    /* try { // try from 009c88dc to 009c88f3 has its CatchHandler @ 009c89bc */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002c02c8,0x20,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6940);
        }
        uVar6 = *(ushort *)(param_2 + 0x16a);
        *(ushort *)(local_98 + 0x16a) = uVar4 + 1;
        puVar8 = (undefined8 *)(local_98 + (ulong)uVar4 * 0x10);
        puVar9 = (undefined8 *)(local_98 + 0xb0 + (ulong)uVar4 * 0x10);
        puVar9[1] = uVar22;
        *puVar9 = plVar12;
        *puVar8 = uVar15;
        puVar8[1] = uVar3;
      } while (uVar21 < uVar6);
    }
    param_1[2] = uVar21;
    param_1[1] = 0;
    *param_1 = local_98;
  }
  else {
    FUN_009c8644(&local_d0,*(undefined8 *)(param_2 + 0x170),param_3 + -1);
    uVar21 = uStack_c8;
    if (local_d0 == (long *)0x0) {
                    /* try { // try from 009c8908 to 009c8913 has its CatchHandler @ 009c8988 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6710);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar12 = (long *)FUN_004b25a4(0x1d0,0x10);
    if (plVar12 == (long *)0x0) {
                    /* try { // try from 009c8918 to 009c8923 has its CatchHandler @ 009c8984 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(0x10,0x1d0);
    }
    bVar11 = 0xfffffffffffffffe < uStack_c8;
    uStack_c8 = uStack_c8 + 1;
    plVar12[0x2c] = 0;
    *(undefined2 *)((long)plVar12 + 0x16a) = 0;
    plVar12[0x2e] = (long)local_d0;
    if (bVar11) {
                    /* try { // try from 009c8928 to 009c8933 has its CatchHandler @ 009c8970 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6850);
    }
    local_d0[0x2c] = (long)plVar12;
    *(undefined2 *)(local_d0 + 0x2d) = 0;
    local_d0 = plVar12;
    if (*(short *)(param_2 + 0x16a) != 0) {
      uVar22 = 0;
      lVar20 = local_c0;
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
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *plVar23 = lVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar18 < 0) {
LAB_009c8934:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x9c8938);
          (*pcVar10)();
        }
                    /* try { // try from 009c8718 to 009c8727 has its CatchHandler @ 009c8944 */
        local_b0 = plVar23;
        lStack_a8 = lVar24;
        FUN_009c8644(&local_98,*(undefined8 *)(param_2 + 0x170 + uVar22 * 8),param_3 + -1);
        lVar18 = local_88;
        lVar13 = local_98;
        uVar19 = uStack_90;
        local_80 = plVar23;
        lStack_78 = lVar24;
        if (local_98 == 0) {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          lVar13 = FUN_004b25a4(0x170,0x10);
          if (lVar13 == 0) {
                    /* try { // try from 009c88f8 to 009c8903 has its CatchHandler @ 009c8990 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(0x10,0x170);
          }
          uVar19 = 0;
          *(undefined8 *)(lVar13 + 0x160) = 0;
          *(undefined2 *)(lVar13 + 0x16a) = 0;
        }
        local_70 = plVar23;
        lStack_68 = lVar24;
        if (uVar19 != uVar21) {
          ppuVar16 = &PTR_s__nix_store_8006w282fgsx3273c878b_00af6958;
          puVar14 = &DAT_0037d302;
          uVar15 = 0x30;
LAB_009c88d4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009c88d4 to 009c88d7 has its CatchHandler @ 009c89f4 */
          core::panicking::panic(puVar14,uVar15,ppuVar16);
        }
        uVar4 = *(ushort *)((long)plVar12 + 0x16a);
        uVar19 = (ulong)uVar4;
        if (10 < uVar4) {
          puVar14 = &DAT_002c02c8;
          uVar15 = 0x20;
          ppuVar16 = &PTR_s__nix_store_8006w282fgsx3273c878b_00af6970;
          goto LAB_009c88d4;
        }
        *(ushort *)((long)plVar12 + 0x16a) = uVar4 + 1;
        (plVar12 + uVar19 * 2 + 0x16)[1] = lVar24;
        plVar12[uVar19 * 2 + 0x16] = (long)plVar23;
        plVar12[uVar19 * 2] = lVar17;
        (plVar12 + uVar19 * 2)[1] = lVar2;
        plVar12[uVar19 + 0x2f] = lVar13;
        *(long **)(lVar13 + 0x160) = plVar12;
        lVar20 = lVar20 + lVar18 + 1;
        *(ushort *)(lVar13 + 0x168) = uVar4 + 1;
        local_c0 = lVar20;
      } while (uVar22 < *(ushort *)(param_2 + 0x16a));
    }
    param_1[1] = uStack_c8;
    *param_1 = (long)local_d0;
    param_1[2] = local_c0;
  }
  return;
}


// ===== 009c8a34  FUN_009c8a34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c8a34(undefined8 *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *__ptr;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6728);
  }
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar6 = (long *)pthread_getspecific((pthread_key_t)uVar9);
  }
  else {
    plVar6 = (long *)pthread_getspecific((pthread_key_t)uVar9);
  }
  puVar2 = PTR_DAT_00af6758;
  uVar3 = _UNK_00af6760;
  uVar4 = _DAT_00af6768;
  uVar5 = _UNK_00af6770;
  if (plVar6 < (long *)0x2) {
    plVar6 = (long *)FUN_009c7de8(uVar9 & 0xffffffff);
    puVar2 = PTR_DAT_00af6758;
    uVar3 = _UNK_00af6760;
    uVar4 = _DAT_00af6768;
    uVar5 = _UNK_00af6770;
  }
  PTR_DAT_00af6758 = puVar2;
  _UNK_00af6760 = uVar3;
  _DAT_00af6768 = uVar4;
  _UNK_00af6770 = uVar5;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af66e0);
  }
  lVar11 = plVar6[1];
  lVar10 = *plVar6;
  *plVar6 = *plVar6 + 1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar7 = (undefined8 *)FUN_004b25a4(0x40,0x10);
  if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 009c8be0 to 009c8beb has its CatchHandler @ 009c8c70 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(0x10,0x40);
  }
  puVar7[1] = uVar3;
  *puVar7 = puVar2;
  puVar7[3] = uVar5;
  puVar7[2] = uVar4;
  puVar7[5] = lVar11;
  puVar7[4] = lVar10;
  puVar7[7] = 0;
  puVar7[6] = 1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar8 = (undefined8 *)FUN_004b25a4(0x30,8);
  lVar10 = DAT_00b10788;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    __ptr = DAT_00b107a0;
    if (lVar10 != 0) {
                    /* try { // try from 009c8b28 to 009c8b2f has its CatchHandler @ 009c8c00 */
      FUN_009c810c(DAT_00b107a0);
      free(__ptr);
      free(DAT_00b107c8);
    }
    DAT_00b10788 = 1;
    DAT_00b107c0 = 0;
    DAT_00b107c8 = puVar8;
    uRam0000000000b10798 = 0;
    _DAT_00b10790 = 0;
    DAT_00b107a8 = 0;
    DAT_00b107a0 = puVar7;
    DAT_00b107b0 = 0;
    DAT_00b107b8 = 0;
    DAT_00b107d0 = 0;
    DAT_00b107d8 = 0;
    return;
  }
                    /* try { // try from 009c8bf0 to 009c8bfb has its CatchHandler @ 009c8c5c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x30);
}


// ===== 009c8c88  FUN_009c8c88 =====

void FUN_009c8c88(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_009c8a34(&local_18);
  return;
}


// ===== 009c8cb0  signal_hook_registry::unregister =====

/* WARNING: Unknown calling convention: __rustcall */
/* signal_hook_registry::unregister */

undefined8 __rustcall
signal_hook_registry::unregister(ulong param_1,ulong param_2,undefined4 param_3)

{
  int *piVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  byte bVar8;
  long lVar9;
  void *__ptr;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  undefined *local_150;
  long local_148;
  int *local_140;
  byte local_138;
  undefined8 ****local_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long lStack_d0;
  ulong local_c8;
  long *plStack_c0;
  char local_b4 [4];
  undefined8 ****local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 ****local_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((int)DAT_00b0f74c == 0) {
    uVar16 = (uint)DAT_00b10788 & 1;
  }
  else {
    local_90 = &local_b0;
    local_b0 = (undefined8 ****)CONCAT71(local_b0._1_7_,1);
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (&DAT_00b0f74c,0,&local_90,&DAT_00af66b8,
               &PTR_s__root__cargo_registry_src_index__00af67c0);
    uVar16 = (uint)DAT_00b10788 & 1;
  }
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af67a8);
  }
  piVar1 = (int *)&DAT_00b107b0;
  do {
    if ((int)DAT_00b107b0 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_00b107b0);
      uVar11 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar7 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x009c8fcc;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0xb107b0,0x10);
    if (bVar6) {
      DAT_00b107b0._0_4_ = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar11 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar7 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x009c8fcc:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar7;
  if ((uVar11 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = std::panicking::panic_count::is_zero_slow_path();
    bVar8 = bVar8 ^ 1;
  }
  lVar9 = DAT_00b107a0;
  local_150 = &DAT_00b10790;
  local_148 = DAT_00b107a0;
  local_140 = (int *)&DAT_00b107b0;
                    /* try { // try from 009c8d4c to 009c8d57 has its CatchHandler @ 009c8fe8 */
  local_138 = bVar8;
  FUN_009c9ed0(&local_90,DAT_00b107a0);
  local_100 = *(undefined8 *)(lVar9 + 0x30);
  uStack_f8 = *(undefined8 *)(lVar9 + 0x38);
  uStack_128 = uStack_88;
  local_130 = local_90;
  uStack_118 = uStack_78;
  plStack_120 = plStack_80;
  uStack_108 = uStack_68;
  local_110 = local_70;
  lVar9 = FUN_009c7c2c(&local_130,param_3);
  if (lVar9 != 0) {
    plVar17 = (long *)(lVar9 + 0x28);
    lVar12 = *plVar17;
    if (lVar12 != 0) {
      lVar13 = *(long *)(lVar9 + 0x30);
      while( true ) {
        lVar14 = (ulong)*(ushort *)(lVar12 + 0x16a) << 4;
        uVar11 = 0;
        do {
          uVar15 = uVar11;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x16a);
          if (lVar14 == 0) goto LAB_009c8de0;
          puVar2 = (ulong *)(lVar12 + uVar15 * 0x10);
          lVar14 = lVar14 + -0x10;
          uVar11 = *puVar2;
          uVar3 = puVar2[1];
          uVar16 = (uint)(!CARRY8(uVar3,~param_2) &&
                         !CARRY8(uVar3 + ~param_2,(ulong)(param_1 <= uVar11)));
          if (!CARRY8(param_2,~uVar3) && !CARRY8(param_2 + ~uVar3,(ulong)(uVar11 <= param_1))) {
            uVar16 = 0xffffffff;
          }
          uVar11 = uVar15 + 1;
        } while (uVar16 == 1);
        uVar11 = uVar15;
        if ((uVar16 & 0xff) == 0) break;
LAB_009c8de0:
        if (lVar13 == 0) goto LAB_009c8eb4;
        lVar13 = lVar13 + -1;
        lVar12 = *(long *)(lVar12 + uVar11 * 8 + 0x170);
      }
      local_b4[0] = '\0';
                    /* try { // try from 009c8e08 to 009c8e93 has its CatchHandler @ 009c8fe0 */
      local_d8 = lVar12;
      lStack_d0 = lVar13;
      local_c8 = uVar15;
      plStack_c0 = plVar17;
      FUN_009ca1e8(&local_90,&local_d8,local_b4);
      uStack_a8 = uStack_88;
      local_b0 = local_90;
      uStack_98 = uStack_78;
      local_a0 = plStack_80;
      *(long *)(lVar9 + 0x38) = *(long *)(lVar9 + 0x38) + -1;
      if (local_b4[0] == '\x01') {
        __ptr = (void *)*plVar17;
        if (__ptr == (void *)0x0) {
                    /* try { // try from 009c8f80 to 009c8fa7 has its CatchHandler @ 009c8ff0 */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af67d8);
        }
        if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_0037d1a0,0x21,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6868);
        }
        lVar12 = *(long *)((long)__ptr + 0x170);
        *(long *)(lVar9 + 0x28) = lVar12;
        *(long *)(lVar9 + 0x30) = *(long *)(lVar9 + 0x30) + -1;
        *(undefined8 *)(lVar12 + 0x160) = 0;
        free(__ptr);
      }
      local_e8 = local_a0;
      uStack_e0 = uStack_98;
      if (local_a0 != (long *)0x0) goto LAB_009c8e74;
    }
  }
LAB_009c8eb4:
                    /* try { // try from 009c8eb4 to 009c8ebb has its CatchHandler @ 009c8fe8 */
  FUN_009c810c(&local_130);
  uVar10 = 0;
joined_r0x009c8eac:
  if ((((bVar8 & 1) == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
     (uVar11 = std::panicking::panic_count::is_zero_slow_path(uVar10), (uVar11 & 1) == 0)) {
    *(undefined1 *)(piVar1 + 1) = 1;
  }
  do {
    iVar4 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
  }
  return uVar10;
LAB_009c8e74:
  do {
    lVar9 = *local_a0;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(local_a0,0x10);
    if (bVar6) {
      *local_a0 = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar9 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
    ::drop_slow(&local_e8);
  }
                    /* try { // try from 009c8e94 to 009c8e9f has its CatchHandler @ 009c8fdc */
  FUN_009c9880(&local_150,&local_130);
  uVar10 = 1;
  piVar1 = local_140;
  bVar8 = local_138;
  goto joined_r0x009c8eac;
}


// ===== 009c9040  signal_hook_registry::unregister_signal =====

/* WARNING: Unknown calling convention: __rustcall */
/* signal_hook_registry::unregister_signal */

undefined8 __rustcall signal_hook_registry::unregister_signal(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong *puVar6;
  int *piVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined *local_100;
  long local_f8;
  int *local_f0;
  byte local_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 local_68;
  long local_60;
  long local_58 [2];
  long local_48;
  
  if ((int)DAT_00b0f74c == 0) {
    uVar5 = (uint)DAT_00b10788 & 1;
  }
  else {
    local_100 = (undefined *)CONCAT71(local_100._1_7_,1);
    local_a0 = (undefined1 *)&local_100;
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (&DAT_00b0f74c,0,&local_a0,&DAT_00af66b8,
               &PTR_s__root__cargo_registry_src_index__00af67c0);
    uVar5 = (uint)DAT_00b10788 & 1;
  }
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af67a8);
  }
  do {
    if ((int)DAT_00b107b0 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_00b107b0);
      uVar11 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar6 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x009c92a0;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xb107b0,0x10);
    if (bVar4) {
      DAT_00b107b0._0_4_ = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar6 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x009c92a0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar6;
  if ((uVar11 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = std::panicking::panic_count::is_zero_slow_path();
    bVar8 = bVar8 ^ 1;
  }
  lVar9 = DAT_00b107a0;
  local_100 = &DAT_00b10790;
  local_f8 = DAT_00b107a0;
  local_f0 = (int *)&DAT_00b107b0;
                    /* try { // try from 009c90d0 to 009c913b has its CatchHandler @ 009c92b8 */
  local_e8 = bVar8;
  FUN_009c9ed0(&local_a0,DAT_00b107a0);
  local_b0 = *(undefined8 *)(lVar9 + 0x30);
  uStack_a8 = *(undefined8 *)(lVar9 + 0x38);
  uStack_d8 = uStack_98;
  local_e0 = local_a0;
  uStack_c8 = local_88;
  lStack_d0 = lStack_90;
  uStack_b8 = uStack_78;
  local_c0 = local_80;
  lVar9 = FUN_009c7c2c(&local_e0,param_1);
  if ((lVar9 == 0) || (lVar12 = *(long *)(lVar9 + 0x38), lVar12 == 0)) {
    FUN_009c810c(&local_e0);
    uVar10 = 0;
    piVar7 = (int *)&DAT_00b107b0;
  }
  else {
    lVar1 = *(long *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    if (lVar1 == 0) {
      lVar12 = 0;
    }
    else {
      uStack_98 = 0;
      uStack_78 = 0;
      lStack_90 = lVar1;
      local_88 = *(undefined8 *)(lVar9 + 0x30);
      lStack_70 = lVar1;
      local_68 = *(undefined8 *)(lVar9 + 0x30);
    }
    local_a0 = (undefined1 *)(ulong)(lVar1 != 0);
    local_80 = local_a0;
    local_60 = lVar12;
                    /* try { // try from 009c9158 to 009c9163 has its CatchHandler @ 009c92d4 */
    while (FUN_009c9b50(local_58,&local_a0), local_58[0] != 0) {
      plVar13 = *(long **)(local_58[0] + local_48 * 0x10 + 0xb0);
      do {
        lVar9 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 009c9190 to 009c9193 has its CatchHandler @ 009c92c0 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
        ::drop_slow();
      }
    }
                    /* try { // try from 009c9198 to 009c91a3 has its CatchHandler @ 009c92b0 */
    FUN_009c9880(&local_100,&local_e0);
    uVar10 = 1;
    piVar7 = local_f0;
    bVar8 = local_e8;
  }
  if ((((bVar8 & 1) == 0) && ((*puVar6 & 0x7fffffffffffffff) != 0)) &&
     (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
    *(undefined1 *)(piVar7 + 1) = 1;
  }
  do {
    iVar2 = *piVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar4) {
      *piVar7 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar7);
    return uVar10;
  }
  return uVar10;
}


// ===== 009c92f8  FUN_009c92f8 =====

void FUN_009c92f8(ulong param_1,long param_2)

{
  ushort *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  uint *puVar5;
  bool bVar6;
  long lVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  code *pcVar8;
  long lVar9;
  byte bVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  byte bVar19;
  undefined8 uVar20;
  
  if (((uint)DAT_00b10788 & 1) == 0) {
                    /* try { // try from 009c96b0 to 009c96bb has its CatchHandler @ 009c9728 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af67a8);
  }
  plVar2 = &DAT_00b107b8 + (DAT_00b107d0 & 1);
  do {
    lVar7 = *plVar2;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar5 = DAT_00b107c8;
  } while (cVar4 != '\0');
  if (-1 < lVar7) {
    plVar3 = (long *)(&DAT_00b10790 + (DAT_00b107a8 & 1) * 8);
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (-1 < lVar7) {
      if (DAT_00b107a0[3] != 0) {
        uVar14 = DAT_00b107a0[5] ^ 0x646f72616e646f6d;
        uVar13 = uVar14 + (DAT_00b107a0[4] ^ 0x736f6d6570736575U);
        uVar12 = DAT_00b107a0[5] ^ param_1 & 0xffffffff ^ 0x7065646279746573;
        uVar15 = uVar13 ^ (uVar14 >> 0x33 | uVar14 << 0xd);
        uVar14 = uVar12 + (DAT_00b107a0[4] ^ 0x6c7967656e657261U);
        uVar12 = uVar14 ^ (uVar12 >> 0x30 | uVar12 << 0x10);
        uVar14 = uVar15 + uVar14;
        lVar7 = 0;
        uVar15 = uVar14 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
        uVar13 = uVar12 + (uVar13 >> 0x20 | uVar13 << 0x20);
        uVar12 = uVar13 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
        uVar13 = (uVar13 ^ (param_1 & 0xffffffff | 0x400000000000000)) + uVar15;
        uVar15 = uVar13 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
        uVar14 = ((uVar14 >> 0x20 | uVar14 << 0x20) ^ 0xff) + uVar12;
        uVar12 = uVar14 ^ (uVar12 >> 0x30 | uVar12 << 0x10);
        uVar14 = uVar15 + uVar14;
        uVar15 = uVar14 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
        uVar13 = uVar12 + (uVar13 >> 0x20 | uVar13 << 0x20);
        uVar12 = uVar13 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
        uVar13 = uVar15 + uVar13;
        uVar15 = uVar13 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
        uVar14 = uVar12 + (uVar14 >> 0x20 | uVar14 << 0x20);
        uVar12 = uVar14 ^ (uVar12 >> 0x30 | uVar12 << 0x10);
        uVar14 = uVar15 + uVar14;
        uVar15 = uVar14 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
        uVar13 = uVar12 + (uVar13 >> 0x20 | uVar13 << 0x20);
        uVar12 = uVar13 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
        uVar15 = uVar15 + uVar13 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
        uVar13 = uVar12 + (uVar14 >> 0x20 | uVar14 << 0x20);
        uVar14 = uVar13 ^ (uVar12 >> 0x30 | uVar12 << 0x10);
        uVar13 = uVar15 + uVar13;
        uVar13 = (uVar15 >> 0x2f | uVar15 << 0x11) ^ (uVar14 >> 0x2b | uVar14 << 0x15) ^
                 (uVar13 >> 0x20 | uVar13 << 0x20) ^ uVar13;
        bVar10 = (byte)(uVar13 >> 0x39);
        lVar16 = *DAT_00b107a0;
        uVar12 = DAT_00b107a0[1];
        uVar13 = uVar13 & uVar12;
        uVar20 = *(undefined8 *)(lVar16 + uVar13);
        uVar14 = NEON_cmeq(uVar20,CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,
                                                  CONCAT13(bVar10,CONCAT12(bVar10,CONCAT11(bVar10,
                                                  bVar10))))))),1);
        uVar14 = uVar14 & 0x8080808080808080;
        while( true ) {
          for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
            uVar15 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            lVar9 = lVar16 + (uVar13 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) &
                             uVar12) * -0x48;
            if ((uint)param_1 == *(uint *)(lVar9 + -0x48)) {
              pcVar8 = *(code **)(lVar9 + -0x38);
              if (&DAT_00000001 < pcVar8) {
                if ((*(byte *)(lVar9 + -0x40) >> 2 & 1) == 0) {
                  (*pcVar8)();
                  pcVar8 = extraout_x8;
                }
                else {
                  (*pcVar8)(param_1,param_2);
                  pcVar8 = extraout_x8_00;
                }
              }
              if (param_2 == 0) {
                write(2,&DAT_0037d0a8,0x40);
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar7 = *(long *)(lVar9 + -0x18);
              bVar6 = lVar7 != 0;
              if (lVar7 == 0) {
                lVar16 = 0;
              }
              else {
                pcVar8 = *(code **)(lVar9 + -0x10);
                lVar16 = *(long *)(lVar9 + -8);
              }
              lVar9 = 0;
              goto LAB_009c95e8;
            }
          }
          uVar20 = NEON_cmeq(uVar20,0xffffffffffffffff,1);
          bVar19 = NEON_umaxv(uVar20,1);
          if ((bVar19 & 1) != 0) break;
          lVar7 = lVar7 + 8;
          uVar13 = uVar13 + lVar7 & uVar12;
          uVar20 = *(undefined8 *)(lVar16 + uVar13);
          uVar14 = NEON_cmeq(uVar20,CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,
                                                  CONCAT13(bVar10,CONCAT12(bVar10,CONCAT11(bVar10,
                                                  bVar10))))))),1);
          uVar14 = uVar14 & 0x8080808080808080;
        }
      }
      if ((((*puVar5 & 1) != 0) && (puVar5[10] == (uint)param_1)) &&
         (pcVar8 = *(code **)(puVar5 + 4), &DAT_00000001 < pcVar8)) {
        if (((byte)puVar5[2] >> 2 & 1) == 0) {
          (*pcVar8)();
        }
        else {
          (*pcVar8)(param_1,param_2);
        }
      }
LAB_009c9678:
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = *plVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
LAB_009c95e8:
  if (lVar16 == 0) goto LAB_009c9678;
  if (!bVar6) {
                    /* try { // try from 009c96d0 to 009c96db has its CatchHandler @ 009c9700 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6808);
  }
  if (lVar9 == 0) {
    for (; lVar9 = lVar7, pcVar8 != (code *)0x0; pcVar8 = pcVar8 + -1) {
      lVar7 = *(long *)(lVar9 + 0x170);
    }
    lVar7 = 0;
    pcVar8 = (code *)0x0;
    lVar17 = lVar9;
    if (*(short *)(lVar9 + 0x16a) == 0) goto LAB_009c962c;
  }
  else {
    lVar17 = lVar9;
    if ((code *)(ulong)*(ushort *)(lVar9 + 0x16a) <= pcVar8) {
LAB_009c962c:
      do {
        lVar9 = *(long *)(lVar17 + 0x160);
        if (lVar9 == 0) {
                    /* try { // try from 009c96c0 to 009c96cb has its CatchHandler @ 009c9724 */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6778);
        }
        puVar1 = (ushort *)(lVar17 + 0x168);
        pcVar8 = (code *)(ulong)*puVar1;
        lVar7 = lVar7 + 1;
        lVar17 = lVar9;
      } while (*(ushort *)(lVar9 + 0x16a) <= *puVar1);
    }
  }
  if (lVar7 == 0) {
    pcVar18 = pcVar8 + 1;
    lVar17 = lVar9;
  }
  else {
    plVar11 = (long *)(lVar9 + (long)pcVar8 * 8 + 0x178);
    do {
      lVar17 = *plVar11;
      lVar7 = lVar7 + -1;
      plVar11 = (long *)(lVar17 + 0x170);
    } while (lVar7 != 0);
    pcVar18 = (code *)0x0;
  }
  lVar9 = lVar9 + (long)pcVar8 * 0x10;
  lVar16 = lVar16 + -1;
  bVar6 = true;
  lVar7 = *(long *)(lVar9 + 0xb8);
                    /* try { // try from 009c95d4 to 009c95df has its CatchHandler @ 009c96fc */
  (**(code **)(lVar7 + 0x28))
            (*(long *)(lVar9 + 0xb0) + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
             param_2);
  lVar7 = 0;
  pcVar8 = pcVar18;
  lVar9 = lVar17;
  goto LAB_009c95e8;
}


// ===== 009c972c  <signal_hook_registry::signal_hook_registry::Slot>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <signal_hook_registry::signal_hook_registry::Slot>::new */

void __rustcall
<signal_hook_registry::signal_hook_registry::Slot>::new(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  _union_1457 local_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  _union_1457 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = 0;
  uStack_50 = 0;
  pcStack_58 = FUN_009c92f8;
  local_60.sa_handler = (__sighandler_t)0x10000004;
  uStack_38 = 0;
  local_40.sa_handler = (__sighandler_t)0x0;
  uStack_28 = 0;
  uStack_30 = 0;
  iVar1 = sigaction(param_2,(sigaction *)&local_60,(sigaction *)&local_40);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6790) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6790);
    }
    *param_1 = 1;
    param_1[1] = (long)iVar1 << 0x20 | 2;
    return;
  }
  *(int *)(param_1 + 5) = param_2;
  param_1[6] = 0;
  param_1[2] = uStack_38;
  ((_union_1457 *)(param_1 + 1))->sa_handler = (__sighandler_t)local_40;
  param_1[4] = uStack_28;
  param_1[3] = uStack_30;
  param_1[8] = 0;
  *param_1 = 0;
  return;
}


// ===== 009c97f8  <signal_hook_registry::[0]::signal_hook_registry::GlobalData>::ensure =====

/* WARNING: Unknown calling convention: __rustcall */
/* <signal_hook_registry::[0]::signal_hook_registry::GlobalData>::ensure */

undefined * __rustcall <signal_hook_registry::[0]::signal_hook_registry::GlobalData>::ensure(void)

{
  uint uVar1;
  undefined1 local_1c [4];
  undefined1 *local_18;
  
  if ((int)DAT_00b0f74c == 0) {
    uVar1 = (uint)DAT_00b10788 & 1;
  }
  else {
    local_18 = local_1c;
    local_1c[0] = 1;
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (&DAT_00b0f74c,0,&local_18,&DAT_00af66b8,
               &PTR_s__root__cargo_registry_src_index__00af67c0);
    uVar1 = (uint)DAT_00b10788 & 1;
  }
  if (uVar1 != 0) {
    return &DAT_00b10790;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af67a8);
}


// ===== 009c9880  FUN_009c9880 =====

void FUN_009c9880(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *__ptr;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar6 = (undefined8 *)FUN_004b25a4(0x40,0x10);
  if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 009c99ac to 009c99b7 has its CatchHandler @ 009c99d8 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(0x10,0x40);
  }
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = (long)puVar6;
  plVar1 = (long *)(*param_1 + 0x10);
  puVar6[1] = uVar9;
  *puVar6 = uVar8;
  puVar6[3] = uVar11;
  puVar6[2] = uVar10;
  uVar8 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  puVar6[5] = param_2[5];
  puVar6[4] = uVar8;
  puVar6[7] = uVar10;
  puVar6[6] = uVar9;
  do {
    __ptr = (void *)*plVar1;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = (long)puVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1 = (long *)*param_1;
  plVar1 = param_1 + 3;
  bVar4 = *param_1 == 0;
  bVar5 = param_1[1] == 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*param_1 != 0 || param_1[1] != 0) {
    uVar7 = 1;
    do {
      while ((uVar7 & 0xf) == 0) {
        std::thread::functions::yield_now();
        if (bVar4) goto LAB_009c9940;
LAB_009c9954:
        bVar4 = *param_1 == 0;
        if (!bVar5) goto LAB_009c9964;
LAB_009c991c:
        bVar5 = true;
        uVar7 = uVar7 + 1;
        if (bVar4) goto LAB_009c9984;
      }
      InstructionSynchronizationBarrier();
      if (!bVar4) goto LAB_009c9954;
LAB_009c9940:
      bVar4 = true;
      if (bVar5) goto LAB_009c991c;
LAB_009c9964:
      bVar5 = param_1[1] == 0;
      uVar7 = uVar7 + 1;
    } while (!(bool)(bVar4 & bVar5));
  }
LAB_009c9984:
                    /* try { // try from 009c9984 to 009c998b has its CatchHandler @ 009c99bc */
  FUN_009c810c(__ptr);
  free(__ptr);
  return;
}


// ===== 009c99f0  <signal_hook_registry::signal_hook_registry::Prev>::detect =====

/* WARNING: Unknown calling convention: __rustcall */
/* <signal_hook_registry::signal_hook_registry::Prev>::detect */

void __rustcall
<signal_hook_registry::signal_hook_registry::Prev>::detect(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  _union_1457 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  local_40.sa_handler = (__sighandler_t)0x0;
  uStack_28 = 0;
  uStack_30 = 0;
  iVar1 = sigaction(param_2,(sigaction *)0x0,(sigaction *)&local_40);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6790) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6790);
    }
    *param_1 = 1;
    param_1[1] = (long)iVar1 << 0x20 | 2;
    return;
  }
  *(int *)(param_1 + 5) = param_2;
  param_1[2] = uStack_38;
  ((_union_1457 *)(param_1 + 1))->sa_handler = (__sighandler_t)local_40;
  param_1[4] = uStack_28;
  param_1[3] = uStack_30;
  *param_1 = 0;
  return;
}


// ===== 009c9a98  <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<dyn for<'a> core[bcece726f298455b]::ops::function::Fn<(&'a
   libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,), Output = ()> +
   core[bcece726f298455b]::marker::Sync + core[bcece726f298455b]::marker::Send>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a>core[bcece726f298455b]::ops::function::Fn<(&'a_libc[fede65a866ff44c6]::unix::linux_like::android::siginfo_t,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
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
                    /* try { // try from 009c9ac4 to 009c9acb has its CatchHandler @ 009c9b38 */
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


// ===== 009c9b50  FUN_009c9b50 =====

void FUN_009c9b50(long *param_1,long *param_2)

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
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af66f8);
  }
  pvVar2 = (void *)param_2[1];
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)param_2[2];
    for (lVar3 = param_2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
      pvVar2 = *(void **)((long)pvVar2 + 0x170);
    }
    uVar6 = 0;
    lVar3 = 0;
    *param_2 = 1;
    param_2[1] = (long)pvVar2;
    param_2[2] = 0;
    param_2[3] = 0;
    pvVar7 = pvVar2;
    if (*(short *)((long)pvVar2 + 0x16a) != 0) goto joined_r0x009c9ba8;
  }
  else {
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    pvVar7 = pvVar2;
    if (uVar6 < *(ushort *)((long)pvVar2 + 0x16a)) goto joined_r0x009c9ba8;
  }
  do {
    pvVar7 = *(void **)((long)pvVar2 + 0x160);
    if (pvVar7 == (void *)0x0) {
      free(pvVar2);
                    /* try { // try from 009c9d44 to 009c9d4f has its CatchHandler @ 009c9d60 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6740);
    }
    uVar1 = *(ushort *)((long)pvVar2 + 0x168);
    uVar6 = (ulong)uVar1;
    lVar3 = lVar3 + 1;
    free(pvVar2);
    pvVar2 = pvVar7;
  } while (*(ushort *)((long)pvVar7 + 0x16a) <= uVar1);
joined_r0x009c9ba8:
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
  *param_1 = (long)pvVar7;
  param_1[1] = lVar3;
  param_1[2] = uVar6;
  param_2[1] = (long)pvVar2;
  param_2[2] = 0;
  param_2[3] = lVar5;
  return;
}


// ===== 009c9d64  FUN_009c9d64 =====

bool FUN_009c9d64(int param_1)

{
  return param_1 == 4;
}


// ===== 009c9d70  FUN_009c9d70 =====

undefined8 FUN_009c9d70(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x22;
  switch(param_1) {
  case 1:
  case 0xd:
    uVar1 = 1;
switchD_009c9d94_caseD_7:
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
    goto switchD_009c9d94_caseD_7;
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


// ===== 009c9ed0  FUN_009c9ed0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c9ed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *__dest;
  undefined8 uVar9;
  undefined8 *__src;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  lVar12 = param_2[1];
  __dest = PTR_DAT_00af6758;
  lVar6 = _UNK_00af6760;
  uVar9 = _DAT_00af6768;
  lVar7 = _UNK_00af6770;
  if (lVar12 == 0) goto LAB_009ca104;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = lVar12 + 1U;
  if (SUB168(auVar4 * ZEXT816(0x48),8) == 0) {
    uVar10 = (lVar12 + 1U) * 0x48;
    uVar14 = uVar10 + lVar12 + 9U;
    if ((CARRY8(uVar10,lVar12 + 9U)) || (0x7ffffffffffffff8 < uVar14)) goto LAB_009c9f7c;
    if (uVar14 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar6 = FUN_004b25a4(uVar14,8);
      if (lVar6 != 0) goto LAB_009c9f98;
      lVar12 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(1,8,uVar14);
      goto LAB_009c9f84;
    }
    lVar6 = 8;
LAB_009c9f98:
    __dest = (undefined *)(lVar6 + uVar10);
  }
  else {
LAB_009c9f7c:
    lVar12 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(1);
LAB_009c9f84:
    __dest = (undefined *)0x0;
  }
  __src = (undefined8 *)*param_2;
  memcpy(__dest,__src,lVar12 + 9);
  lVar7 = param_2[3];
  if (lVar7 != 0) {
    puVar13 = __src + 1;
    uVar14 = NEON_cmge(*__src,0,1);
    uVar14 = uVar14 & 0x8080808080808080;
    puVar5 = __src;
    lVar6 = lVar7;
    do {
      for (; uVar14 == 0; uVar14 = uVar14 & 0x8080808080808080) {
        uVar14 = NEON_cmge(*puVar13,0,1);
        puVar5 = puVar5 + -0x48;
        puVar13 = puVar13 + 1;
      }
      uVar10 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      puVar11 = puVar5 + (long)-(int)((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) * 9;
      uVar3 = *(undefined4 *)(puVar11 + -9);
      if (puVar11[-1] == 0) {
        local_80 = 0;
        local_70 = 0;
      }
      else {
        if (puVar11[-3] == 0) {
                    /* try { // try from 009ca134 to 009ca13f has its CatchHandler @ 009ca148 */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af67f0);
        }
                    /* try { // try from 009ca0dc to 009ca0e7 has its CatchHandler @ 009ca144 */
        FUN_009c8644(&local_80,puVar11[-3],puVar11[-2]);
      }
      lVar8 = (long)__src - (long)puVar11 >> 3;
      uVar15 = puVar11[-5];
      lVar6 = lVar6 + -1;
      uVar9 = puVar11[-4];
      uVar14 = uVar14 - 1 & uVar14;
      uStack_94 = (undefined4)uVar15;
      local_9c = (undefined4)puVar11[-6];
      uStack_98 = (undefined4)((ulong)puVar11[-6] >> 0x20);
      uStack_a4 = (undefined4)puVar11[-7];
      uStack_a0 = (undefined4)((ulong)puVar11[-7] >> 0x20);
      local_ac = (undefined4)puVar11[-8];
      uStack_a8 = (undefined4)((ulong)puVar11[-8] >> 0x20);
      *(undefined4 *)(__dest + lVar8 * -8 + -0x48) = uVar3;
      *(ulong *)(__dest + lVar8 * -8 + -0x3c) = CONCAT44(uStack_a4,uStack_a8);
      *(ulong *)(__dest + lVar8 * -8 + -0x44) = CONCAT44(local_ac,uStack_b0);
      *(ulong *)(__dest + lVar8 * -8 + -0x2c) = CONCAT44(uStack_94,uStack_98);
      *(ulong *)(__dest + lVar8 * -8 + -0x34) = CONCAT44(local_9c,uStack_a0);
      *(undefined8 *)(__dest + lVar8 * -8 + -0x20) = uVar9;
      *(undefined8 *)(__dest + lVar8 * -8 + -0x28) = uVar15;
      *(undefined8 *)(__dest + lVar8 * -8 + -0x10) = uStack_78;
      *(undefined8 *)(__dest + lVar8 * -8 + -0x18) = local_80;
      *(undefined8 *)(__dest + lVar8 * -8 + -8) = local_70;
    } while (lVar6 != 0);
  }
  lVar6 = lVar12;
  uVar9 = param_2[2];
LAB_009ca104:
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[1] = lVar6;
  *param_1 = __dest;
  param_1[3] = lVar7;
  param_1[2] = uVar9;
  return;
}


// ===== 009ca170  FUN_009ca170 =====

ulong FUN_009ca170(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long local_38;
  void *local_30;
  undefined8 uStack_28;
  
  std::sys::io::error::unix::error_string(&local_38);
                    /* try { // try from 009ca190 to 009ca19b has its CatchHandler @ 009ca1c8 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,local_30,uStack_28);
  if (local_38 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    free(local_30);
  }
  return uVar1;
}


// ===== 009ca1e8  FUN_009ca1e8 =====

void FUN_009ca1e8(long *param_1,long *param_2,undefined8 param_3)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_78 [3];
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  ulong local_30;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    lStack_58 = 0;
    local_60 = *param_2;
    local_50 = param_2[2];
    FUN_009ca580(param_1,&local_60,param_3);
    return;
  }
  local_78[0] = *(long *)(*param_2 + param_2[2] * 8 + 0x170);
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    local_78[0] = *(long *)(local_78[0] + (ulong)*(ushort *)(local_78[0] + 0x16a) * 8 + 0x170);
  }
  local_78[1] = 0;
  local_78[2] = (ulong)*(ushort *)(local_78[0] + 0x16a) - 1;
  FUN_009ca580(&local_60,local_78,param_3);
  lVar3 = local_40;
  if (*(ushort *)(local_40 + 0x16a) <= local_30) {
    do {
      local_40 = *(long *)(lVar3 + 0x160);
      lStack_38 = lStack_38 + 1;
      puVar1 = (ushort *)(lVar3 + 0x168);
      local_30 = (ulong)*puVar1;
      lVar3 = local_40;
    } while (*(ushort *)(local_40 + 0x16a) <= *puVar1);
  }
  plVar5 = (long *)(local_40 + local_30 * 0x10);
  lVar3 = *plVar5;
  lVar2 = plVar5[1];
  lVar7 = plVar5[0x17];
  lVar6 = plVar5[0x16];
  *plVar5 = local_60;
  plVar5[1] = lStack_58;
  plVar5[0x17] = lStack_48;
  plVar5[0x16] = local_50;
  if (lStack_38 == 0) {
    lVar4 = local_30 + 1;
  }
  else {
    plVar5 = (long *)(local_40 + local_30 * 8 + 0x178);
    do {
      local_40 = *plVar5;
      lStack_38 = lStack_38 + -1;
      plVar5 = (long *)(local_40 + 0x170);
    } while (lStack_38 != 0);
    lVar4 = 0;
  }
  *param_1 = lVar3;
  param_1[1] = lVar2;
  param_1[3] = lVar7;
  param_1[2] = lVar6;
  param_1[4] = local_40;
  param_1[5] = 0;
  param_1[6] = lVar4;
  return;
}


// ===== 009ca300  FUN_009ca300 =====

void FUN_009ca300(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  void *__src;
  size_t __n;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar14 = param_2[3];
  uVar11 = (ulong)*(ushort *)(lVar14 + 0x16a);
  uVar5 = uVar11;
  if (param_3 == 1) {
    uVar5 = (ulong)*(ushort *)(param_2[5] + 0x16a);
  }
  if (uVar5 < param_4) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037d0e8,0x8e,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6820);
  }
  __src = (void *)param_2[5];
  uVar13 = (ulong)*(ushort *)((long)__src + 0x16a);
  uVar5 = uVar11 + 1 + uVar13;
  if (0xb < uVar5) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037d176,0x2a,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6838);
  }
  lVar6 = *param_2;
  uVar3 = param_2[1];
  uVar10 = param_2[2];
  lVar7 = param_2[4];
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x16a);
  puVar1 = (undefined8 *)(lVar6 + uVar10 * 0x10);
  *(short *)(lVar14 + 0x16a) = (short)uVar5;
  uVar15 = *puVar1;
  uVar16 = puVar1[1];
  __n = (uVar9 + ~uVar10) * 0x10;
  memmove(puVar1,puVar1 + 2,__n);
  lVar12 = (uVar11 + 1) * 0x10;
  puVar2 = (undefined8 *)(lVar14 + uVar11 * 0x10);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  memcpy((void *)(lVar14 + lVar12),__src,uVar13 << 4);
  uVar16 = puVar1[0x17];
  uVar15 = puVar1[0x16];
  memmove(puVar1 + 0x16,puVar1 + 0x18,__n);
  puVar1 = (undefined8 *)(lVar14 + 0xb0 + uVar11 * 0x10);
  puVar1[1] = uVar16;
  *puVar1 = uVar15;
  memcpy((void *)(lVar14 + 0xb0 + lVar12),(void *)((long)__src + 0xb0),uVar13 << 4);
  lVar12 = lVar6 + (uVar10 + 1) * 8;
  memmove((void *)(lVar12 + 0x170),(void *)(lVar12 + 0x178),(uVar9 + ~uVar10) * 8);
  if (uVar10 + 1 < uVar9) {
    lVar12 = uVar10 + 0x2f;
    do {
      sVar4 = (short)lVar12;
      lVar8 = *(long *)(lVar6 + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *(long *)(lVar8 + 0x160) = lVar6;
      *(short *)(lVar8 + 0x168) = sVar4 + -0x2e;
    } while ((1 - uVar9) + lVar12 != 0x2f);
  }
  *(short *)(lVar6 + 0x16a) = *(short *)(lVar6 + 0x16a) + -1;
  if (1 < uVar3) {
    lVar12 = uVar13 + 1;
    if (lVar12 != uVar5 - uVar11) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0037d1c1,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6880);
    }
    memcpy((void *)(lVar14 + 0x170 + (uVar11 + 1) * 8),(void *)((long)__src + 0x170),lVar12 * 8);
    lVar6 = uVar11 + 0x2f;
    do {
      lVar8 = *(long *)(lVar14 + lVar6 * 8);
      sVar4 = (short)lVar6;
      lVar12 = lVar12 + -1;
      lVar6 = lVar6 + 1;
      *(long *)(lVar8 + 0x160) = lVar14;
      *(short *)(lVar8 + 0x168) = sVar4 + -0x2e;
    } while (lVar12 != 0);
  }
  lVar12 = uVar11 + 1;
  free(__src);
  if ((param_3 & 1) == 0) {
    lVar12 = 0;
  }
  *param_1 = lVar14;
  param_1[1] = lVar7;
  param_1[2] = lVar12 + param_4;
  return;
}


// ===== 009ca580  FUN_009ca580 =====

void FUN_009ca580(undefined8 *param_1,long *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  size_t sVar18;
  ulong uVar19;
  void *pvVar20;
  void *pvVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong local_158;
  void *local_128;
  void *local_f0;
  ulong uStack_e8;
  ulong local_e0;
  void *local_d8;
  ulong uStack_d0;
  ulong local_c8;
  void *pvStack_c0;
  ulong local_b8;
  void *pvStack_b0;
  ulong local_a8;
  void *local_a0;
  ulong uStack_98;
  long local_90;
  void *pvStack_88;
  ulong local_80;
  void *pvStack_78;
  ulong local_70;
  
  pvVar21 = (void *)*param_2;
  local_158 = param_2[2];
  uVar6 = *(ushort *)((long)pvVar21 + 0x16a);
  uVar14 = (ulong)uVar6;
  puVar2 = (undefined8 *)((long)pvVar21 + local_158 * 0x10);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  sVar18 = (uVar14 + ~local_158) * 0x10;
  memmove(puVar2,puVar2 + 2,sVar18);
  uVar24 = puVar2[0x17];
  uVar22 = puVar2[0x16];
  uVar6 = uVar6 - 1;
  memmove(puVar2 + 0x16,puVar2 + 0x18,sVar18);
  uVar11 = param_2[1];
  *(ushort *)((long)pvVar21 + 0x16a) = uVar6;
  if (4 < uVar6) goto LAB_009ca730;
  pvVar7 = *(void **)((long)pvVar21 + 0x160);
  if (pvVar7 == (void *)0x0) {
LAB_009ca708:
    pvVar7 = *(void **)((long)pvVar21 + 0x160);
  }
  else {
    uVar8 = uVar11 + 1;
    if (*(ushort *)((long)pvVar21 + 0x168) == 0) {
      if (*(short *)((long)pvVar7 + 0x16a) == 0) {
LAB_009ca9e4:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037d2c5,0x7b,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6928);
      }
      pvStack_78 = *(void **)((long)pvVar7 + 0x178);
      local_90 = 0;
      pvStack_88 = pvVar21;
      if (0xb < *(ushort *)((long)pvStack_78 + 0x16a) + uVar14) {
        local_a0 = pvVar7;
        uStack_98 = uVar8;
        local_80 = uVar11;
        local_70 = uVar11;
        FUN_009cac20(&local_a0,1);
        goto LAB_009ca708;
      }
      local_a0 = pvVar7;
      uStack_98 = uVar8;
      local_80 = uVar11;
      local_70 = uVar11;
      FUN_009ca300(&local_f0,&local_a0,0,local_158);
    }
    else {
      local_90 = (ulong)*(ushort *)((long)pvVar21 + 0x168) - 1;
      pvStack_88 = *(void **)((long)pvVar7 + local_90 * 8 + 0x170);
      pvStack_78 = pvVar21;
      if (0xb < uVar14 + *(ushort *)((long)pvStack_88 + 0x16a)) {
        local_a0 = pvVar7;
        uStack_98 = uVar8;
        local_80 = uVar11;
        local_70 = uVar11;
        FUN_009caa38(&local_a0,1);
        local_158 = local_158 + 1;
        goto LAB_009ca708;
      }
                    /* try { // try from 009ca658 to 009ca6ff has its CatchHandler @ 009caa00 */
      local_a0 = pvVar7;
      uStack_98 = uVar8;
      local_80 = uVar11;
      local_70 = uVar11;
      FUN_009ca300(&local_f0,&local_a0,1,local_158);
    }
    pvVar7 = *(void **)((long)local_f0 + 0x160);
    pvVar21 = local_f0;
    uVar11 = uStack_e8;
    local_158 = local_e0;
  }
  if ((pvVar7 != (void *)0x0) && (uVar6 = *(ushort *)((long)pvVar7 + 0x16a), uVar6 < 5)) {
    uVar14 = uVar11 + 1;
    local_f0 = pvVar21;
    uStack_e8 = uVar11;
    local_e0 = local_158;
    do {
      uVar8 = (ulong)uVar6;
      pvVar17 = *(void **)((long)pvVar7 + 0x160);
      if (pvVar17 == (void *)0x0) {
        if (uVar6 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar1 = uVar14 + 1;
      if (*(ushort *)((long)pvVar7 + 0x168) == 0) {
        uVar6 = *(ushort *)((long)pvVar17 + 0x16a);
        if (uVar6 == 0) goto LAB_009ca9e4;
        local_128 = *(void **)((long)pvVar17 + 0x178);
        lVar15 = uVar8 + 1;
        local_90 = 0;
        uVar19 = (ulong)*(ushort *)((long)local_128 + 0x16a);
        uVar12 = lVar15 + uVar19;
        local_a0 = pvVar17;
        uStack_98 = uVar1;
        pvStack_88 = pvVar7;
        local_80 = uVar14;
        pvStack_78 = local_128;
        local_70 = uVar14;
        if (0xb < uVar12) {
          FUN_009cac20(&local_a0,5 - uVar8);
          break;
        }
        uVar13 = 0;
        uVar16 = uVar8;
        pvVar20 = pvVar7;
      }
      else {
        uVar13 = (ulong)*(ushort *)((long)pvVar7 + 0x168) - 1;
        pvStack_c0 = *(void **)((long)pvVar17 + uVar13 * 8 + 0x170);
        uVar16 = (ulong)*(ushort *)((long)pvStack_c0 + 0x16a);
        local_d8 = pvVar17;
        uStack_d0 = uVar1;
        local_c8 = uVar13;
        local_b8 = uVar14;
        pvStack_b0 = pvVar7;
        local_a8 = uVar14;
        if (0xb < uVar8 + uVar16 + 1) {
                    /* try { // try from 009ca9a8 to 009ca9fb has its CatchHandler @ 009caa00 */
          FUN_009caa38(&local_d8,5 - uVar8);
          break;
        }
        lVar15 = uVar16 + 1;
        uVar6 = *(ushort *)((long)pvVar17 + 0x16a);
        uVar12 = lVar15 + uVar8;
        uVar19 = uVar8;
        pvVar20 = pvStack_c0;
        local_128 = pvVar7;
      }
      uVar8 = (ulong)uVar6;
      puVar2 = (undefined8 *)((long)pvVar17 + uVar13 * 0x10);
      *(short *)((long)pvVar20 + 0x16a) = (short)uVar12;
      uVar23 = *puVar2;
      uVar25 = puVar2[1];
      sVar18 = (uVar8 + ~uVar13) * 0x10;
      memmove(puVar2,puVar2 + 2,sVar18);
      puVar3 = (undefined8 *)((long)pvVar20 + uVar16 * 0x10);
      *puVar3 = uVar23;
      puVar3[1] = uVar25;
      memcpy((void *)((long)pvVar20 + lVar15 * 0x10),local_128,uVar19 << 4);
      uVar25 = puVar2[0x17];
      uVar23 = puVar2[0x16];
      memmove(puVar2 + 0x16,puVar2 + 0x18,sVar18);
      puVar2 = (undefined8 *)((long)pvVar20 + uVar16 * 0x10 + 0xb0);
      puVar2[1] = uVar25;
      *puVar2 = uVar23;
      memcpy((void *)((long)pvVar20 + lVar15 * 0x10 + 0xb0),(void *)((long)local_128 + 0xb0),
             uVar19 << 4);
      uVar14 = uVar13 + 1;
      memmove((void *)((long)pvVar17 + uVar14 * 8 + 0x170),
              (void *)((long)pvVar17 + uVar14 * 8 + 0x178),(uVar8 + ~uVar13) * 8);
      if (uVar14 < uVar8) {
        do {
          uVar13 = uVar14 + 1;
          lVar9 = *(long *)((long)pvVar17 + uVar14 * 8 + 0x170);
          *(short *)(lVar9 + 0x168) = (short)uVar14;
          *(void **)(lVar9 + 0x160) = pvVar17;
          uVar14 = uVar13;
        } while (uVar8 != uVar13);
      }
      *(short *)((long)pvVar17 + 0x16a) = *(short *)((long)pvVar17 + 0x16a) + -1;
      if (1 < uVar1) {
        if (uVar19 + 1 != uVar12 - uVar16) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_0037d1c1,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6880);
        }
        memcpy((void *)((long)pvVar20 + lVar15 * 8 + 0x170),(void *)((long)local_128 + 0x170),
               (uVar19 + 1) * 8);
        do {
          lVar9 = lVar15 + 1;
          lVar10 = *(long *)((long)pvVar20 + lVar15 * 8 + 0x170);
          *(short *)(lVar10 + 0x168) = (short)lVar15;
          *(void **)(lVar10 + 0x160) = pvVar20;
          lVar15 = lVar9;
        } while (uVar12 + 1 != lVar9);
      }
      free(local_128);
      uVar6 = *(ushort *)((long)pvVar17 + 0x16a);
      uVar14 = uVar1;
      pvVar7 = pvVar17;
    } while (uVar6 < 5);
  }
LAB_009ca730:
  param_1[4] = pvVar21;
  param_1[5] = uVar11;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar24;
  param_1[2] = uVar22;
  param_1[6] = local_158;
  return;
}


// ===== 009caa38  FUN_009caa38 =====

void FUN_009caa38(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *__src;
  size_t __n;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  __src = (void *)param_1[5];
  uVar11 = (ulong)*(ushort *)((long)__src + 0x16a);
  if (0xb < param_2 + uVar11) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037d1e9,0x33,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6898);
  }
  lVar12 = param_1[3];
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x16a);
  lVar8 = uVar13 - param_2;
  if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037d21c,0x27,&PTR_s__nix_store_8006w282fgsx3273c878b_00af68b0);
  }
  *(short *)(lVar12 + 0x16a) = (short)lVar8;
  *(short *)((long)__src + 0x16a) = (short)(param_2 + uVar11);
  memmove((void *)((long)__src + param_2 * 0x10),__src,uVar11 << 4);
  memmove((void *)((long)__src + param_2 * 0x10 + 0xb0),(void *)((long)__src + 0xb0),uVar11 << 4);
  lVar10 = lVar8 + 1;
  if (uVar13 - lVar10 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037d1c1,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6880);
  }
  __n = (uVar13 - lVar10) * 0x10;
  memcpy(__src,(void *)(lVar12 + lVar10 * 0x10),__n);
  memcpy((void *)((long)__src + 0xb0),(void *)(lVar12 + 0xb0 + lVar10 * 0x10),__n);
  puVar1 = (undefined8 *)(lVar12 + lVar8 * 0x10);
  puVar2 = (undefined8 *)(*param_1 + param_1[2] * 0x10);
  puVar7 = (undefined8 *)(lVar12 + 0xb0 + lVar8 * 0x10);
  uVar14 = *puVar7;
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar4 = *puVar2;
  uVar6 = puVar2[1];
  uVar16 = puVar2[0x17];
  uVar15 = puVar2[0x16];
  puVar2[0x17] = puVar7[1];
  puVar2[0x16] = uVar14;
  *puVar2 = uVar3;
  puVar2[1] = uVar5;
  lVar9 = param_1[4];
  *(undefined8 *)((long)__src + __n) = uVar4;
  ((undefined8 *)((long)__src + __n))[1] = uVar6;
  lVar8 = param_1[6];
  puVar1 = (undefined8 *)((long)__src + __n + 0xb0);
  puVar1[1] = uVar16;
  *puVar1 = uVar15;
  if (lVar9 == 0) {
    if (lVar8 != 0) goto LAB_009cac08;
  }
  else {
    if (lVar8 == 0) {
LAB_009cac08:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0037d243,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af68c8);
    }
    memmove((void *)((long)__src + param_2 * 8 + 0x170),(void *)((long)__src + 0x170),uVar11 * 8 + 8
           );
    memcpy((void *)((long)__src + 0x170),(void *)(lVar12 + lVar10 * 8 + 0x170),param_2 * 8);
    lVar8 = 0;
    do {
      lVar12 = lVar8 + 1;
      lVar10 = *(long *)((long)__src + lVar8 * 8 + 0x170);
      *(short *)(lVar10 + 0x168) = (short)lVar8;
      *(void **)(lVar10 + 0x160) = __src;
      lVar8 = lVar12;
    } while (param_2 + uVar11 + 1 != lVar12);
  }
  return;
}


// ===== 009cac20  FUN_009cac20 =====

void FUN_009cac20(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  void *__src;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar11 = param_1[3];
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x16a);
  if (0xb < param_2 + uVar12) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037d26b,0x32,&PTR_s__nix_store_8006w282fgsx3273c878b_00af68e0);
  }
  __src = (void *)param_1[5];
  lVar7 = *(ushort *)((long)__src + 0x16a) - param_2;
  if (*(ushort *)((long)__src + 0x16a) < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037d29d,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af68f8);
  }
  lVar13 = param_2 * 0x10;
  lVar9 = *param_1;
  lVar10 = param_1[2];
  *(short *)(lVar11 + 0x16a) = (short)(param_2 + uVar12);
  puVar1 = (undefined8 *)(lVar9 + lVar10 * 0x10);
  *(short *)((long)__src + 0x16a) = (short)lVar7;
  puVar2 = (undefined8 *)((long)__src + lVar13 + -0x10);
  puVar8 = (undefined8 *)((long)__src + lVar13 + 0xa0);
  uVar14 = *puVar8;
  uVar3 = *puVar2;
  uVar5 = puVar2[1];
  uVar16 = puVar1[0x17];
  uVar15 = puVar1[0x16];
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  puVar1[0x17] = puVar8[1];
  puVar1[0x16] = uVar14;
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar11 + uVar12 * 0x10);
  lVar9 = (uVar12 + 1) * 0x10;
  *puVar1 = uVar4;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar11 + 0xb0 + uVar12 * 0x10);
  puVar1[1] = uVar16;
  *puVar1 = uVar15;
  memcpy((void *)(lVar11 + lVar9),__src,lVar13 - 0x10);
  memcpy((void *)(lVar11 + 0xb0 + lVar9),(void *)((long)__src + 0xb0),lVar13 - 0x10);
  memmove(__src,(void *)((long)__src + lVar13),lVar7 * 0x10);
  memmove((void *)((long)__src + 0xb0),(void *)((long)__src + lVar13 + 0xb0),lVar7 * 0x10);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_009cae34;
  }
  else {
    if (param_1[6] == 0) {
LAB_009cae34:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0037d243,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6910);
    }
    lVar9 = lVar11 + 0x170;
    __dest = (long *)(lVar9 + (uVar12 + 1) * 8);
    memcpy(__dest,(void *)((long)__src + 0x170),param_2 * 8);
    memmove((void *)((long)__src + 0x170),(void *)((long)__src + param_2 * 8 + 0x170),lVar7 * 8 + 8)
    ;
    lVar10 = *__dest;
    *(long *)(lVar10 + 0x160) = lVar11;
    *(short *)(lVar10 + 0x168) = (short)(uVar12 + 1);
    if (param_2 != 1) {
      lVar10 = *(long *)(lVar9 + (uVar12 + 2) * 8);
      *(long *)(lVar10 + 0x160) = lVar11;
      *(short *)(lVar10 + 0x168) = (short)(uVar12 + 2);
      if (param_2 != 2) {
        lVar10 = *(long *)(lVar9 + (uVar12 + 3) * 8);
        *(long *)(lVar10 + 0x160) = lVar11;
        *(short *)(lVar10 + 0x168) = (short)(uVar12 + 3);
        if (param_2 != 3) {
          lVar10 = *(long *)(lVar9 + (uVar12 + 4) * 8);
          *(long *)(lVar10 + 0x160) = lVar11;
          *(short *)(lVar10 + 0x168) = (short)(uVar12 + 4);
          if (param_2 != 4) {
            lVar9 = *(long *)(lVar9 + (uVar12 + 5) * 8);
            *(long *)(lVar9 + 0x160) = lVar11;
            *(short *)(lVar9 + 0x168) = (short)(uVar12 + 5);
          }
        }
      }
    }
    lVar11 = 0;
    do {
      lVar9 = lVar11 + 1;
      lVar10 = *(long *)((long)__src + lVar11 * 8 + 0x170);
      *(short *)(lVar10 + 0x168) = (short)lVar11;
      *(void **)(lVar10 + 0x160) = __src;
      lVar11 = lVar9;
    } while (lVar7 + 1 != lVar9);
  }
  return;
}


// ===== 009cae4c  FUN_009cae4c =====

void FUN_009cae4c(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009cae98  FUN_009cae98 =====

void FUN_009cae98(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009caee0  <socket2::socket::socket2::socket::Socket>::accept_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::accept_raw */

void __rustcall <socket2::socket::socket2::socket::Socket>::accept_raw(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  sockaddr local_c0;
  undefined4 uStack_b0;
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int iStack_44;
  socklen_t local_34;
  
  local_34 = 0x80;
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
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_60 = 0;
  uStack_5c = 0;
  uStack_48 = 0;
  iStack_44 = 0;
  uStack_50 = 0;
  local_4c = 0;
  iVar1 = ::accept(*param_2,&local_c0,&local_34);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
    }
    *param_1 = -1;
    *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
    return;
  }
  if (-1 < iVar1) {
    *param_1 = iVar1;
    param_1[0x21] = iStack_44;
    param_1[0x22] = local_34;
    *(ulong *)(param_1 + 3) = CONCAT44(local_c0.sa_data._6_4_,local_c0.sa_data._2_4_);
    *(ulong *)(param_1 + 1) = CONCAT44(local_c0._0_4_,local_c0._0_4_);
    *(ulong *)(param_1 + 7) = CONCAT44(uStack_a8,uStack_ac);
    *(ulong *)(param_1 + 5) = CONCAT44(uStack_b0,local_c0.sa_data._10_4_);
    *(ulong *)(param_1 + 0x13) = CONCAT44(uStack_78,uStack_7c);
    *(ulong *)(param_1 + 0x11) = CONCAT44(local_80,uStack_84);
    *(ulong *)(param_1 + 0x17) = CONCAT44(uStack_68,uStack_6c);
    *(ulong *)(param_1 + 0x15) = CONCAT44(uStack_70,uStack_74);
    *(ulong *)(param_1 + 0xf) = CONCAT44(uStack_88,uStack_8c);
    *(ulong *)(param_1 + 0xd) = CONCAT44(uStack_90,uStack_94);
    *(ulong *)(param_1 + 0xb) = CONCAT44(uStack_98,uStack_9c);
    *(ulong *)(param_1 + 9) = CONCAT44(local_a0,uStack_a4);
    *(ulong *)(param_1 + 0x1f) = CONCAT44(uStack_48,local_4c);
    *(ulong *)(param_1 + 0x1d) = CONCAT44(uStack_50,uStack_54);
    *(ulong *)(param_1 + 0x1b) = CONCAT44(uStack_58,uStack_5c);
    *(ulong *)(param_1 + 0x19) = CONCAT44(local_60,uStack_64);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
}


// ===== 009cb050  <socket2::socket::socket2::socket::Socket>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::local_addr */

void __rustcall
<socket2::socket::socket2::socket::Socket>::local_addr(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  sockaddr local_b0;
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
  socklen_t local_24;
  
  local_24 = 0x80;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar1 = getsockname(*param_2,&local_b0,&local_24);
  if (iVar1 != -1) {
    param_1[10] = uStack_68;
    param_1[9] = local_70;
    param_1[0xc] = uStack_58;
    param_1[0xb] = uStack_60;
    *(socklen_t *)(param_1 + 0x11) = local_24;
    param_1[0xe] = uStack_48;
    param_1[0xd] = local_50;
    param_1[0x10] = uStack_38;
    param_1[0xf] = uStack_40;
    param_1[2] = local_b0.sa_data._6_8_;
    param_1[1] = local_b0._0_8_;
    param_1[4] = uStack_98;
    param_1[3] = uStack_a0;
    param_1[6] = uStack_88;
    param_1[5] = local_90;
    param_1[8] = uStack_78;
    param_1[7] = uStack_80;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cb138  <socket2::socket::socket2::socket::Socket>::nonblocking =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::nonblocking */

void __rustcall
<socket2::socket::socket2::socket::Socket>::nonblocking(undefined1 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = fcntl(*param_2,3);
  if (uVar2 != 0xffffffff) {
    param_1[1] = (byte)(uVar2 >> 0xb) & 1;
    *param_1 = 0;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cb1c8  <socket2::socket::socket2::socket::Socket>::peek_sender =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::peek_sender */

void __rustcall
<socket2::socket::socket2::socket::Socket>::peek_sender(undefined8 *param_1,int *param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auStack_b8 [8];
  sockaddr local_b0;
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
  socklen_t local_24;
  
  local_24 = 0x80;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  sVar2 = recvfrom(*param_2,auStack_b8,8,2,&local_b0,&local_24);
  if (sVar2 != -1) {
    param_1[10] = uStack_68;
    param_1[9] = local_70;
    param_1[0xc] = uStack_58;
    param_1[0xb] = uStack_60;
    *(socklen_t *)(param_1 + 0x11) = local_24;
    param_1[0xe] = uStack_48;
    param_1[0xd] = local_50;
    param_1[0x10] = uStack_38;
    param_1[0xf] = uStack_40;
    param_1[2] = local_b0.sa_data._6_8_;
    param_1[1] = local_b0._0_8_;
    param_1[4] = uStack_98;
    param_1[3] = uStack_a0;
    param_1[6] = uStack_88;
    param_1[5] = local_90;
    param_1[8] = uStack_78;
    param_1[7] = uStack_80;
    *param_1 = 0;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cb2bc  <socket2::socket::socket2::socket::Socket>::recv_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_vectored */

void __rustcall
<socket2::socket::socket2::socket::Socket>::recv_vectored
          (undefined8 *param_1,int *param_2,iovec *param_3,size_t param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  msghdr local_58;
  
  local_58.msg_control = (void *)0x0;
  local_58.msg_name = (void *)0x0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_iov = param_3;
  local_58.msg_iovlen = param_4;
  sVar2 = ::recvmsg(*param_2,&local_58,0);
  if (sVar2 != -1) {
    *param_1 = 0;
    param_1[1] = sVar2;
    *(int *)(param_1 + 2) = local_58.msg_flags;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cb368  <socket2::socket::socket2::socket::Socket>::send_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_vectored */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_vectored
          (int *param_1,iovec *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  msghdr local_58;
  
  local_58.msg_control = (void *)0x0;
  local_58.msg_name = (void *)0x0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  uVar3 = ::sendmsg(*param_1,&local_58,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 009cb408  <socket2::socket::socket2::socket::Socket>::connect_timeout =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::connect_timeout */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::connect_timeout
          (int *param_1,sockaddr *param_2,ulong param_3,uint param_4)

{
  socklen_t __len;
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined1 auVar15 [12];
  pollfd local_80;
  int local_78;
  socklen_t local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar5 = *param_1;
  uVar6 = FUN_009d13d4(iVar5,3,4,0x800);
  if (uVar6 != 0) {
    return uVar6;
  }
  __len._0_2_ = param_2[8].sa_family;
  __len._2_1_ = param_2[8].sa_data[0];
  __len._3_1_ = param_2[8].sa_data[1];
  iVar4 = ::connect(iVar5,param_2,__len);
  if (iVar4 == -1) {
    piVar8 = (int *)__errno();
    iVar4 = *piVar8;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
    uVar6 = (long)iVar4 << 0x20 | 2;
  }
  else {
    uVar6 = 0;
  }
                    /* try { // try from 009cb4bc to 009cb593 has its CatchHandler @ 009cb838 */
  uVar7 = FUN_009d1204(iVar5,3,4,0x800);
  if (uVar7 != 0) {
    if (uVar6 == 0) {
      return uVar7;
    }
    goto joined_r0x009cb794;
  }
  if (uVar6 == 0) {
    return 0;
  }
  uVar7 = uVar6 & 3;
  if (uVar7 < 2) {
    if (uVar7 == 0) {
      cVar3 = *(char *)(uVar6 + 0x10);
    }
    else {
      cVar3 = *(char *)(uVar6 + 0x1f);
    }
joined_r0x009cb558:
    if (cVar3 != '\r') {
LAB_009cb570:
      if ((uVar6 & 3) < 2) {
        return uVar6;
      }
      if ((uVar6 & 3) == 3) {
        return uVar6;
      }
      if (uVar6 >> 0x20 != 0x73) {
        return uVar6;
      }
    }
  }
  else {
    if (uVar7 == 2) {
      lVar13 = core::io::error::os_functions::get_os_functions();
      cVar3 = (**(code **)(lVar13 + 8))(uVar6 >> 0x20);
      goto joined_r0x009cb558;
    }
    if (((uint)(uVar6 >> 0x20) & 0xff) != 0xd) goto LAB_009cb570;
  }
  auVar15 = <std::time::std::time::Instant>::now();
  local_70 = auVar15._0_8_;
  local_68 = CONCAT44(local_68._4_4_,auVar15._8_4_);
  local_80.events = 5;
  local_80.revents = 0;
  local_80.fd = iVar5;
  do {
                    /* try { // try from 009cb5c4 to 009cb5cb has its CatchHandler @ 009cb818 */
    auVar15 = <std::time::std::time::Instant>::elapsed(&local_70);
    uVar14 = auVar15._8_4_;
    uVar7 = auVar15._0_8_;
    bVar2 = param_4 <= uVar14;
    if (param_3 != uVar7) {
      bVar2 = param_3 <= uVar7;
    }
    if (bVar2) {
LAB_009cb6cc:
      uVar7 = 0x1600000003;
      goto joined_r0x009cb794;
    }
    uVar12 = param_3 - uVar7;
    if (param_3 < uVar7) {
LAB_009cb800:
      ppuVar11 = &PTR_s__nix_store_8006w282fgsx3273c878b_00af69e8;
      puVar9 = &DAT_0037d3f2;
      uVar10 = 0x23;
LAB_009cb7d8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009cb7d8 to 009cb7db has its CatchHandler @ 009cb838 */
      core::option::expect_failed(puVar9,uVar10,ppuVar11);
    }
    if (param_4 < uVar14) {
      if (uVar12 == 0) goto LAB_009cb800;
      uVar12 = uVar12 - 1;
      uVar14 = (param_4 + 1000000000) - uVar14;
    }
    else {
      uVar14 = param_4 - uVar14;
    }
    if (999999999 < uVar14) {
      if (uVar12 == 0xffffffffffffffff) {
        puVar9 = &DAT_0037d3d9;
        uVar10 = 0x19;
        ppuVar11 = &PTR_s__nix_store_8006w282fgsx3273c878b_00af69b8;
        goto LAB_009cb7d8;
      }
      uVar12 = uVar12 + 1;
      uVar14 = uVar14 + 0xc4653600;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar12;
    lVar13 = SUB168(auVar1 * ZEXT816(1000),8);
    uVar7 = uVar12 * 1000 + (ulong)uVar14 / 1000000;
    if (CARRY8(uVar12 * 1000,(ulong)uVar14 / 1000000)) {
      lVar13 = lVar13 + 1;
    }
    uVar12 = uVar7;
    if (0x7ffffffe < uVar7) {
      uVar12 = 0x7fffffff;
    }
    iVar4 = (int)uVar12;
    if (lVar13 != 0) {
      iVar4 = 0x7fffffff;
    }
    if (uVar7 == 0 && lVar13 == 0) {
      iVar4 = 1;
    }
    iVar4 = ::poll(&local_80,1,iVar4);
    if (iVar4 != -1) {
      if (iVar4 == 0) goto LAB_009cb6cc;
      if ((local_80._4_4_ & 0x180000) == 0) {
        uVar7 = 0;
        goto joined_r0x009cb794;
      }
      local_74 = 4;
      iVar5 = getsockopt(iVar5,1,4,&local_78,&local_74);
      if (iVar5 == -1) {
        piVar8 = (int *)__errno();
        lVar13 = (long)*piVar8;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
                    /* try { // try from 009cb7f0 to 009cb7fb has its CatchHandler @ 009cb838 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
        }
      }
      else {
        lVar13 = (long)local_78;
        if (local_78 == 0) {
          uVar7 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,&DAT_0037d415,0x1a);
          goto joined_r0x009cb794;
        }
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
                    /* try { // try from 009cb728 to 009cb787 has its CatchHandler @ 009cb838 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
        }
      }
      uVar7 = lVar13 << 0x20 | 2;
      goto joined_r0x009cb794;
    }
    piVar8 = (int *)__errno();
    iVar4 = *piVar8;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
                    /* try { // try from 009cb6b4 to 009cb6bb has its CatchHandler @ 009cb818 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
                    /* try { // try from 009cb694 to 009cb6a3 has its CatchHandler @ 009cb81c */
    lVar13 = core::io::error::os_functions::get_os_functions();
    cVar3 = (**(code **)(lVar13 + 8))(iVar4);
  } while (cVar3 == '#');
  uVar7 = (long)iVar4 << 0x20 | 2;
joined_r0x009cb794:
  if ((1 < (uVar6 & 3) - 2) && ((uVar6 & 3) != 0)) {
    local_68 = uVar6 - 1;
    uVar6 = (ulong)local_70 >> 8;
    local_70 = CONCAT71((int7)uVar6,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
  }
  return uVar7;
}


// ===== 009cb850  <socket2::socket::socket2::socket::Socket>::recv_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_with_flags */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::recv_with_flags
          (int *param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::recv(*param_1,param_2,param_3,param_4);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cb8e0  <socket2::socket::socket2::socket::Socket>::send_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_with_flags */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_with_flags
          (int *param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::send(*param_1,param_2,param_3,param_4);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cb970  <socket2::socket::socket2::socket::Socket>::set_nonblocking =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_nonblocking */

void __rustcall
<socket2::socket::socket2::socket::Socket>::set_nonblocking(undefined4 *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_009d13d4(*param_1,3,4,0x800);
    return;
  }
  FUN_009d1204(*param_1,3,4,0x800);
  return;
}


// ===== 009cb998  <socket2::socket::socket2::socket::Socket>::recv_out_of_band =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_out_of_band */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::recv_out_of_band
          (int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::recv(*param_1,param_2,param_3,1);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cba2c  <socket2::socket::socket2::socket::Socket>::send_out_of_band =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_out_of_band */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_out_of_band
          (int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::send(*param_1,param_2,param_3,1);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cbac0  <socket2::socket::socket2::socket::Socket>::send_to_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_to_vectored */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_to_vectored
          (int *param_1,iovec *param_2,size_t param_3,void *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  msghdr local_58;
  
  local_58.msg_namelen = *(socklen_t *)((long)param_4 + 0x80);
  local_58.msg_control = (void *)0x0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58._12_4_ = 0;
  local_58.msg_name = param_4;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  uVar3 = ::sendmsg(*param_1,&local_58,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 009cbb68  <socket2::socket::socket2::socket::Socket>::recv_from_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_from_vectored */

void __rustcall
<socket2::socket::socket2::socket::Socket>::recv_from_vectored
          (undefined8 *param_1,int *param_2,iovec *param_3,size_t param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  msghdr local_178;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  local_178.msg_name = &local_140;
  local_178.msg_control = (void *)0x0;
  local_178.msg_controllen = 0;
  local_178.msg_flags = 0;
  local_178._52_4_ = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_120 = 0;
  uStack_11c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_110 = 0;
  uStack_10c = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_140 = 0;
  uStack_13c = 0;
  local_178.msg_namelen = 0x80;
  local_178._12_4_ = 0;
  local_178.msg_iov = param_3;
  local_178.msg_iovlen = param_4;
  sVar2 = ::recvmsg(*param_2,&local_178,0);
  if (sVar2 != -1) {
    *(int *)(param_1 + 2) = local_178.msg_flags;
    *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_118,uStack_11c);
    *(ulong *)((long)param_1 + 0x34) = CONCAT44(local_120,uStack_124);
    *(undefined4 *)((long)param_1 + 0x94) = uStack_c4;
    *(socklen_t *)(param_1 + 0x13) = local_178.msg_namelen;
    *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_138,uStack_13c);
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_140,local_140);
    *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_128,uStack_12c);
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(local_130,uStack_134);
    *(ulong *)((long)param_1 + 0x5c) = CONCAT44(uStack_f8,uStack_fc);
    *(ulong *)((long)param_1 + 0x54) = CONCAT44(uStack_100,uStack_104);
    *(ulong *)((long)param_1 + 0x4c) = CONCAT44(uStack_108,uStack_10c);
    *(ulong *)((long)param_1 + 0x44) = CONCAT44(local_110,uStack_114);
    *(ulong *)((long)param_1 + 0x6c) = CONCAT44(uStack_e8,uStack_ec);
    *(ulong *)((long)param_1 + 100) = CONCAT44(local_f0,uStack_f4);
    *(ulong *)((long)param_1 + 0x8c) = CONCAT44(uStack_c8,uStack_cc);
    *(ulong *)((long)param_1 + 0x84) = CONCAT44(local_d0,uStack_d4);
    *(ulong *)((long)param_1 + 0x7c) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)param_1 + 0x74) = CONCAT44(local_e0,uStack_e4);
    *param_1 = 0;
    param_1[1] = sVar2;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cbce0  <socket2::socket::socket2::socket::Socket>::send_to_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_to_with_flags */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_to_with_flags
          (int *param_1,void *param_2,size_t param_3,sockaddr *param_4,int param_5)

{
  socklen_t __addr_len;
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  __addr_len._0_2_ = param_4[8].sa_family;
  __addr_len._2_1_ = param_4[8].sa_data[0];
  __addr_len._3_1_ = param_4[8].sa_data[1];
  uVar3 = sendto(*param_1,param_2,param_3,param_5,param_4,__addr_len);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cbd80  <socket2::socket::socket2::socket::Socket>::recv_from_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_from_with_flags */

void __rustcall
<socket2::socket::socket2::socket::Socket>::recv_from_with_flags
          (undefined8 *param_1,int *param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  sockaddr local_b0;
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
  socklen_t local_24;
  
  local_24 = 0x80;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  sVar2 = recvfrom(*param_2,param_3,param_4,param_5,&local_b0,&local_24);
  if (sVar2 != -1) {
    *param_1 = 0;
    param_1[1] = sVar2;
    param_1[0xb] = uStack_68;
    param_1[10] = local_70;
    param_1[0xd] = uStack_58;
    param_1[0xc] = uStack_60;
    *(socklen_t *)(param_1 + 0x12) = local_24;
    param_1[0xf] = uStack_48;
    param_1[0xe] = local_50;
    param_1[0x11] = uStack_38;
    param_1[0x10] = uStack_40;
    param_1[3] = local_b0.sa_data._6_8_;
    param_1[2] = local_b0._0_8_;
    param_1[5] = uStack_98;
    param_1[4] = uStack_a0;
    param_1[7] = uStack_88;
    param_1[6] = local_90;
    param_1[9] = uStack_78;
    param_1[8] = uStack_80;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cbe58  <socket2::socket::socket2::socket::Socket>::recv_vectored_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_vectored_with_flags */

void __rustcall
<socket2::socket::socket2::socket::Socket>::recv_vectored_with_flags
          (undefined8 *param_1,int *param_2,iovec *param_3,size_t param_4,int param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  msghdr local_58;
  
  local_58.msg_control = (void *)0x0;
  local_58.msg_name = (void *)0x0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_iov = param_3;
  local_58.msg_iovlen = param_4;
  sVar2 = ::recvmsg(*param_2,&local_58,param_5);
  if (sVar2 != -1) {
    *param_1 = 0;
    param_1[1] = sVar2;
    *(int *)(param_1 + 2) = local_58.msg_flags;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cbf04  <socket2::socket::socket2::socket::Socket>::send_vectored_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_vectored_with_flags */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_vectored_with_flags
          (int *param_1,iovec *param_2,size_t param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  msghdr local_58;
  
  local_58.msg_control = (void *)0x0;
  local_58.msg_name = (void *)0x0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  uVar3 = ::sendmsg(*param_1,&local_58,param_4);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 009cbfa4  <socket2::socket::socket2::socket::Socket>::send_to_vectored_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_to_vectored_with_flags */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_to_vectored_with_flags
          (int *param_1,iovec *param_2,size_t param_3,void *param_4,int param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  msghdr local_58;
  
  local_58.msg_namelen = *(socklen_t *)((long)param_4 + 0x80);
  local_58.msg_control = (void *)0x0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58._12_4_ = 0;
  local_58.msg_name = param_4;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  uVar3 = ::sendmsg(*param_1,&local_58,param_5);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 009cc04c  <socket2::socket::socket2::socket::Socket>::recv_from_vectored_with_flags =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_from_vectored_with_flags */

void __rustcall
<socket2::socket::socket2::socket::Socket>::recv_from_vectored_with_flags
          (undefined8 *param_1,int *param_2,iovec *param_3,size_t param_4,int param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  msghdr local_178;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  local_178.msg_name = &local_140;
  local_178.msg_control = (void *)0x0;
  local_178.msg_controllen = 0;
  local_178.msg_flags = 0;
  local_178._52_4_ = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_120 = 0;
  uStack_11c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_110 = 0;
  uStack_10c = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_140 = 0;
  uStack_13c = 0;
  local_178.msg_namelen = 0x80;
  local_178._12_4_ = 0;
  local_178.msg_iov = param_3;
  local_178.msg_iovlen = param_4;
  sVar2 = ::recvmsg(*param_2,&local_178,param_5);
  if (sVar2 != -1) {
    *(int *)(param_1 + 2) = local_178.msg_flags;
    *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_118,uStack_11c);
    *(ulong *)((long)param_1 + 0x34) = CONCAT44(local_120,uStack_124);
    *(undefined4 *)((long)param_1 + 0x94) = uStack_c4;
    *(socklen_t *)(param_1 + 0x13) = local_178.msg_namelen;
    *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_138,uStack_13c);
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_140,local_140);
    *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_128,uStack_12c);
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(local_130,uStack_134);
    *(ulong *)((long)param_1 + 0x5c) = CONCAT44(uStack_f8,uStack_fc);
    *(ulong *)((long)param_1 + 0x54) = CONCAT44(uStack_100,uStack_104);
    *(ulong *)((long)param_1 + 0x4c) = CONCAT44(uStack_108,uStack_10c);
    *(ulong *)((long)param_1 + 0x44) = CONCAT44(local_110,uStack_114);
    *(ulong *)((long)param_1 + 0x6c) = CONCAT44(uStack_e8,uStack_ec);
    *(ulong *)((long)param_1 + 100) = CONCAT44(local_f0,uStack_f4);
    *(ulong *)((long)param_1 + 0x8c) = CONCAT44(uStack_c8,uStack_cc);
    *(ulong *)((long)param_1 + 0x84) = CONCAT44(local_d0,uStack_d4);
    *(ulong *)((long)param_1 + 0x7c) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)param_1 + 0x74) = CONCAT44(local_e0,uStack_e4);
    *param_1 = 0;
    param_1[1] = sVar2;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cc1c4  <socket2::socket::socket2::socket::Socket>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::new */

void __rustcall
<socket2::socket::socket2::socket::Socket>::new
          (undefined4 *param_1,int param_2,uint param_3,ulong param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((param_4 & 1) == 0) {
    param_5 = 0;
  }
  iVar1 = socket(param_2,param_3 | 0x80000,param_5);
  if (iVar1 != -1) {
    if (-1 < iVar1) {
      *param_1 = 0;
      param_1[1] = iVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cc26c  <socket2::socket::socket2::socket::Socket>::bind =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::bind */

ulong __rustcall <socket2::socket::socket2::socket::Socket>::bind(int *param_1,sockaddr *param_2)

{
  socklen_t __len;
  int iVar1;
  int *piVar2;
  
  __len._0_2_ = param_2[8].sa_family;
  __len._2_1_ = param_2[8].sa_data[0];
  __len._3_1_ = param_2[8].sa_data[1];
  iVar1 = ::bind(*param_1,param_2,__len);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cc2f4  <socket2::socket::socket2::socket::Socket>::pair =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::pair */

void __rustcall
<socket2::socket::socket2::socket::Socket>::pair
          (undefined4 *param_1,undefined8 param_2,uint param_3)

{
  int local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  pair_raw(&local_30,param_2,param_3 | 0x80000);
  if (local_30 == 1) {
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_24,local_28);
    *param_1 = 1;
    return;
  }
  *(ulong *)(param_1 + 1) = CONCAT44(local_28,uStack_2c);
  *param_1 = 0;
  return;
}


// ===== 009cc35c  <socket2::socket::socket2::socket::Socket>::peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::peek */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::peek(int *param_1,void *param_2,size_t param_3)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cc3f0  <socket2::socket::socket2::socket::Socket>::recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::recv(int *param_1,void *param_2,size_t param_3)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cc484  <socket2::socket::socket2::socket::Socket>::send =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::send(*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cc518  <socket2::socket::socket2::socket::Socket>::type =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::type */

void __rustcall <socket2::socket::socket2::socket::Socket>::type(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,1,3,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cc5c4  <socket2::socket::socket2::socket::Socket>::accept =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::accept */

void __rustcall <socket2::socket::socket2::socket::Socket>::accept(int *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  local_b8 = 0x80;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lVar2 = syscall(0xf2,(ulong)*param_2,&local_140,&local_b8,0x80000);
  iVar1 = (int)lVar2;
  if (iVar1 == -1) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
    }
    *param_1 = -1;
    *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
    return;
  }
  if (-1 < iVar1) {
    *param_1 = iVar1;
    uStack_88 = (undefined4)uStack_118;
    uStack_84 = (undefined4)((ulong)uStack_118 >> 0x20);
    local_90 = (undefined4)local_120;
    uStack_8c = (undefined4)((ulong)local_120 >> 0x20);
    uStack_98 = (undefined4)uStack_128;
    uStack_94 = (undefined4)((ulong)uStack_128 >> 0x20);
    local_a0 = (undefined4)local_130;
    uStack_9c = (undefined4)((ulong)local_130 >> 0x20);
    uStack_a8 = (undefined4)uStack_138;
    uStack_a4 = (undefined4)((ulong)uStack_138 >> 0x20);
    local_b0 = (undefined4)local_140;
    uStack_ac = (undefined4)((ulong)local_140 >> 0x20);
    uStack_38 = (undefined4)uStack_c8;
    iStack_34 = (int)((ulong)uStack_c8 >> 0x20);
    local_40 = (undefined4)uStack_d0;
    uStack_3c = (undefined4)((ulong)uStack_d0 >> 0x20);
    uStack_48 = (undefined4)uStack_d8;
    uStack_44 = (undefined4)((ulong)uStack_d8 >> 0x20);
    local_50 = (undefined4)local_e0;
    uStack_4c = (undefined4)((ulong)local_e0 >> 0x20);
    uStack_68 = (undefined4)uStack_f8;
    uStack_64 = (undefined4)((ulong)uStack_f8 >> 0x20);
    local_70 = (undefined4)local_100;
    uStack_6c = (undefined4)((ulong)local_100 >> 0x20);
    uStack_78 = (undefined4)uStack_108;
    uStack_74 = (undefined4)((ulong)uStack_108 >> 0x20);
    local_80 = (undefined4)local_110;
    uStack_7c = (undefined4)((ulong)local_110 >> 0x20);
    uStack_58 = (undefined4)uStack_e8;
    uStack_54 = (undefined4)((ulong)uStack_e8 >> 0x20);
    local_60 = (undefined4)local_f0;
    uStack_5c = (undefined4)((ulong)local_f0 >> 0x20);
    *(ulong *)(param_1 + 3) = CONCAT44(uStack_a8,uStack_ac);
    *(ulong *)(param_1 + 1) = CONCAT44(local_b0,uStack_b4);
    *(ulong *)(param_1 + 7) = CONCAT44(uStack_98,uStack_9c);
    *(ulong *)(param_1 + 5) = CONCAT44(local_a0,uStack_a4);
    *(ulong *)(param_1 + 0x13) = CONCAT44(uStack_68,uStack_6c);
    *(ulong *)(param_1 + 0x11) = CONCAT44(local_70,uStack_74);
    *(ulong *)(param_1 + 0x17) = CONCAT44(uStack_58,uStack_5c);
    *(ulong *)(param_1 + 0x15) = CONCAT44(local_60,uStack_64);
    *(ulong *)(param_1 + 0xf) = CONCAT44(uStack_78,uStack_7c);
    *(ulong *)(param_1 + 0xd) = CONCAT44(local_80,uStack_84);
    *(ulong *)(param_1 + 0xb) = CONCAT44(uStack_88,uStack_8c);
    *(ulong *)(param_1 + 9) = CONCAT44(local_90,uStack_94);
    *(ulong *)(param_1 + 0x1f) = CONCAT44(uStack_38,uStack_3c);
    *(ulong *)(param_1 + 0x1d) = CONCAT44(local_40,uStack_44);
    *(ulong *)(param_1 + 0x1b) = CONCAT44(uStack_48,uStack_4c);
    *(ulong *)(param_1 + 0x19) = CONCAT44(local_50,uStack_54);
    param_1[0x21] = iStack_34;
    param_1[0x22] = local_b8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
}


// ===== 009cc71c  <socket2::socket::socket2::socket::Socket>::listen =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::listen */

ulong __rustcall <socket2::socket::socket2::socket::Socket>::listen(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = ::listen(*param_1,param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cc7a0  <socket2::socket::socket2::socket::Socket>::connect =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::connect */

ulong __rustcall <socket2::socket::socket2::socket::Socket>::connect(int *param_1,sockaddr *param_2)

{
  socklen_t __len;
  int iVar1;
  int *piVar2;
  
  __len._0_2_ = param_2[8].sa_family;
  __len._2_1_ = param_2[8].sa_data[0];
  __len._3_1_ = param_2[8].sa_data[1];
  iVar1 = ::connect(*param_1,param_2,__len);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cc828  <socket2::socket::socket2::socket::Socket>::new_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::new_raw */

void __rustcall
<socket2::socket::socket2::socket::Socket>::new_raw
          (undefined4 *param_1,int param_2,int param_3,ulong param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((param_4 & 1) == 0) {
    param_5 = 0;
  }
  iVar1 = socket(param_2,param_3,param_5);
  if (iVar1 != -1) {
    if (-1 < iVar1) {
      *param_1 = 0;
      param_1[1] = iVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cc8cc  <socket2::socket::socket2::socket::Socket>::recvmsg =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recvmsg */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::recvmsg(int *param_1,msghdr *param_2,int param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::recvmsg(*param_1,param_2,param_3);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cc95c  <socket2::socket::socket2::socket::Socket>::send_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_to */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_to
          (int *param_1,void *param_2,size_t param_3,sockaddr *param_4)

{
  socklen_t __addr_len;
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  __addr_len._0_2_ = param_4[8].sa_family;
  __addr_len._2_1_ = param_4[8].sa_data[0];
  __addr_len._3_1_ = param_4[8].sa_data[1];
  uVar3 = sendto(*param_1,param_2,param_3,0,param_4,__addr_len);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cc9f8  <socket2::socket::socket2::socket::Socket>::sendmsg =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::sendmsg */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::sendmsg(int *param_1,msghdr *param_2,int param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = ::sendmsg(*param_1,param_2,param_3);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009cca88  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::Socket as std::os::fd::raw::FromRawFd>::from_raw_fd */

void __rustcall <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd(int param_1)

{
  if (-1 < param_1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
}


// ===== 009ccab0  <socket2::socket::socket2::socket::Socket>::pair_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::pair_raw */

void __rustcall
<socket2::socket::socket2::socket::Socket>::pair_raw
          (undefined4 *param_1,int param_2,int param_3,ulong param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  long local_28;
  
  local_28 = 0;
  if ((param_4 & 1) == 0) {
    param_5 = 0;
  }
  iVar1 = socketpair(param_2,param_3,param_5,(int *)&local_28);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
    *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
    *param_1 = 1;
    return;
  }
  if ((int)local_28 < 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
  }
  if (-1 < local_28) {
    *(long *)(param_1 + 1) = local_28;
    *param_1 = 0;
    return;
  }
                    /* try { // try from 009ccb70 to 009ccb87 has its CatchHandler @ 009ccb9c */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
}


// ===== 009ccbb0  <socket2::socket::socket2::socket::Socket>::shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::shutdown */

ulong __rustcall <socket2::socket::socket2::socket::Socket>::shutdown(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = ::shutdown(*param_1,param_2 & 0xff);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ccc38  <socket2::socket::socket2::socket::Socket>::peek_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::peek_from */

void __rustcall
<socket2::socket::socket2::socket::Socket>::peek_from
          (undefined8 *param_1,int *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  sockaddr local_b0;
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
  socklen_t local_24;
  
  local_24 = 0x80;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  sVar2 = recvfrom(*param_2,param_3,param_4,2,&local_b0,&local_24);
  if (sVar2 != -1) {
    *param_1 = 0;
    param_1[1] = sVar2;
    param_1[0xb] = uStack_68;
    param_1[10] = local_70;
    param_1[0xd] = uStack_58;
    param_1[0xc] = uStack_60;
    *(socklen_t *)(param_1 + 0x12) = local_24;
    param_1[0xf] = uStack_48;
    param_1[0xe] = local_50;
    param_1[0x11] = uStack_38;
    param_1[0x10] = uStack_40;
    param_1[3] = local_b0.sa_data._6_8_;
    param_1[2] = local_b0._0_8_;
    param_1[5] = uStack_98;
    param_1[4] = uStack_a0;
    param_1[7] = uStack_88;
    param_1[6] = local_90;
    param_1[9] = uStack_78;
    param_1[8] = uStack_80;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009ccd14  <socket2::socket::socket2::socket::Socket>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::peer_addr */

void __rustcall
<socket2::socket::socket2::socket::Socket>::peer_addr(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  sockaddr local_b0;
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
  socklen_t local_24;
  
  local_24 = 0x80;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar1 = getpeername(*param_2,&local_b0,&local_24);
  if (iVar1 != -1) {
    param_1[10] = uStack_68;
    param_1[9] = local_70;
    param_1[0xc] = uStack_58;
    param_1[0xb] = uStack_60;
    *(socklen_t *)(param_1 + 0x11) = local_24;
    param_1[0xe] = uStack_48;
    param_1[0xd] = local_50;
    param_1[0x10] = uStack_38;
    param_1[0xf] = uStack_40;
    param_1[2] = local_b0.sa_data._6_8_;
    param_1[1] = local_b0._0_8_;
    param_1[4] = uStack_98;
    param_1[3] = uStack_a0;
    param_1[6] = uStack_88;
    param_1[5] = local_90;
    param_1[8] = uStack_78;
    param_1[7] = uStack_80;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009ccdfc  <socket2::socket::socket2::socket::Socket>::recv_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_from */

void __rustcall
<socket2::socket::socket2::socket::Socket>::recv_from
          (undefined8 *param_1,int *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  sockaddr local_b0;
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
  socklen_t local_24;
  
  local_24 = 0x80;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  sVar2 = recvfrom(*param_2,param_3,param_4,0,&local_b0,&local_24);
  if (sVar2 != -1) {
    *param_1 = 0;
    param_1[1] = sVar2;
    param_1[0xb] = uStack_68;
    param_1[10] = local_70;
    param_1[0xd] = uStack_58;
    param_1[0xc] = uStack_60;
    *(socklen_t *)(param_1 + 0x12) = local_24;
    param_1[0xf] = uStack_48;
    param_1[0xe] = local_50;
    param_1[0x11] = uStack_38;
    param_1[0x10] = uStack_40;
    param_1[3] = local_b0.sa_data._6_8_;
    param_1[2] = local_b0._0_8_;
    param_1[5] = uStack_98;
    param_1[4] = uStack_a0;
    param_1[7] = uStack_88;
    param_1[6] = local_90;
    param_1[9] = uStack_78;
    param_1[8] = uStack_80;
    return;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cced8  <socket2::socket::socket2::socket::Socket>::try_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::try_clone */

void __rustcall
<socket2::socket::socket2::socket::Socket>::try_clone(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fcntl(*param_2,0x406,0);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
    *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
    *param_1 = 1;
    return;
  }
  if (-1 < iVar1) {
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
}


// ===== 009ccf80  <socket2::socket::[0]::socket2::socket::Socket>::join_ssm_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::join_ssm_v4 */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::join_ssm_v4
          (int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  local_2c = *param_3;
  uStack_28 = *param_4;
  local_24 = *param_2;
  iVar1 = setsockopt(*param_1,0,0x27,&local_2c,0xc);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd038  <socket2::socket::[0]::socket2::socket::Socket>::leave_ssm_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::leave_ssm_v4 */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::leave_ssm_v4
          (int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  local_2c = *param_3;
  uStack_28 = *param_4;
  local_24 = *param_2;
  iVar1 = setsockopt(*param_1,0,0x28,&local_2c,0xc);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd0f0  <socket2::socket::[0]::socket2::socket::Socket>::set_recv_tos =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::set_recv_tos */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::set_recv_tos(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0,0xd,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd188  <socket2::socket::[0]::socket2::socket::Socket>::header_included =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::header_included */

void __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::header_included(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0,3,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cd240  <socket2::socket::[0]::socket2::socket::Socket>::multicast_if_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::multicast_if_v4 */

void __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::multicast_if_v4(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0,0x20,&local_28,&local_24);
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 1) = local_28;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cd2f0  <socket2::socket::[0]::socket2::socket::Socket>::multicast_ttl_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::multicast_ttl_v4 */

void __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::multicast_ttl_v4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0,0x21,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cd39c  <socket2::socket::[0]::socket2::socket::Socket>::join_multicast_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::join_multicast_v4 */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::join_multicast_v4
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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd440  <socket2::socket::[0]::socket2::socket::Socket>::multicast_loop_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::multicast_loop_v4 */

void __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::multicast_loop_v4(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0,0x22,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cd4f8  <socket2::socket::[0]::socket2::socket::Socket>::header_included_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::header_included_v4 */

void __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::header_included_v4
          (undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0,3,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cd5b0  <socket2::socket::[0]::socket2::socket::Socket>::leave_multicast_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::leave_multicast_v4 */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::leave_multicast_v4
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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd654  <socket2::socket::[0]::socket2::socket::Socket>::join_multicast_v4_n =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::join_multicast_v4_n */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::join_multicast_v4_n
          (int *param_1,undefined4 *param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  uStack_28 = *(undefined4 *)(param_3 + 1);
  local_2c = *param_2;
  if (*param_3 == '\0') {
    uStack_28 = 0;
  }
  local_24 = 0;
  if (*param_3 == '\0') {
    local_24 = *(undefined4 *)(param_3 + 4);
  }
  iVar1 = setsockopt(*param_1,0,0x23,&local_2c,0xc);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd71c  <socket2::socket::[0]::socket2::socket::Socket>::set_header_included =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::set_header_included */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::set_header_included
          (int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0,3,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd7b4  <socket2::socket::[0]::socket2::socket::Socket>::set_multicast_if_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::set_multicast_if_v4 */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::set_multicast_if_v4
          (int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = *param_2;
  iVar1 = setsockopt(*param_1,0,0x20,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd850  <socket2::socket::[0]::socket2::socket::Socket>::leave_multicast_v4_n =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::leave_multicast_v4_n */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::leave_multicast_v4_n
          (int *param_1,undefined4 *param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  uStack_28 = *(undefined4 *)(param_3 + 1);
  local_2c = *param_2;
  if (*param_3 == '\0') {
    uStack_28 = 0;
  }
  local_24 = 0;
  if (*param_3 == '\0') {
    local_24 = *(undefined4 *)(param_3 + 4);
  }
  iVar1 = setsockopt(*param_1,0,0x24,&local_2c,0xc);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd918  <socket2::socket::[0]::socket2::socket::Socket>::set_multicast_ttl_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::set_multicast_ttl_v4 */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::set_multicast_ttl_v4
          (int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cd9b0  <socket2::socket::[0]::socket2::socket::Socket>::set_multicast_loop_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::set_multicast_loop_v4 */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::set_multicast_loop_v4
          (int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cda48  <socket2::socket::[0]::socket2::socket::Socket>::set_header_included_v4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::set_header_included_v4 */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::set_header_included_v4
          (int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0,3,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cdae0  <socket2::socket::[0]::socket2::socket::Socket>::tos =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::tos */

void __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::tos(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0,1,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cdb8c  <socket2::socket::[0]::socket2::socket::Socket>::ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::ttl */

void __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::ttl(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0,2,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cdc38  <socket2::socket::[0]::socket2::socket::Socket>::set_tos =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::set_tos */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::set_tos(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0,1,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cdcd0  <socket2::socket::[0]::socket2::socket::Socket>::set_ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::set_ttl */

ulong __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::set_ttl(int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cdd68  <socket2::socket::[0]::socket2::socket::Socket>::recv_tos =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[0]::socket2::socket::Socket>::recv_tos */

void __rustcall
<socket2::socket::[0]::socket2::socket::Socket>::recv_tos(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0,0xd,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = 0 < local_28[0];
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cde20  <socket2::socket::[1]::socket2::socket::Socket>::set_only_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::set_only_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::set_only_v6(int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cdeb8  <socket2::socket::[1]::socket2::socket::Socket>::recv_tclass_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::recv_tclass_v6 */

void __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::recv_tclass_v6(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0x29,0x42,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = 0 < local_28[0];
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cdf70  <socket2::socket::[1]::socket2::socket::Socket>::multicast_if_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::multicast_if_v6 */

void __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::multicast_if_v6(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0x29,0x11,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009ce01c  <socket2::socket::[1]::socket2::socket::Socket>::unicast_hops_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::unicast_hops_v6 */

void __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::unicast_hops_v6(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0x29,0x10,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009ce0c8  <socket2::socket::[1]::socket2::socket::Socket>::join_multicast_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::join_multicast_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::join_multicast_v6
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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce178  <socket2::socket::[1]::socket2::socket::Socket>::multicast_hops_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::multicast_hops_v6 */

void __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::multicast_hops_v6(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0x29,0x12,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009ce224  <socket2::socket::[1]::socket2::socket::Socket>::multicast_loop_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::multicast_loop_v6 */

void __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::multicast_loop_v6(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0x29,0x13,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009ce2dc  <socket2::socket::[1]::socket2::socket::Socket>::header_included_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::header_included_v6 */

void __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::header_included_v6
          (undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0x29,3,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009ce394  <socket2::socket::[1]::socket2::socket::Socket>::leave_multicast_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::leave_multicast_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::leave_multicast_v6
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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce444  <socket2::socket::[1]::socket2::socket::Socket>::set_recv_tclass_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::set_recv_tclass_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::set_recv_tclass_v6(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,0x42,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce4dc  <socket2::socket::[1]::socket2::socket::Socket>::set_multicast_if_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::set_multicast_if_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::set_multicast_if_v6
          (int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,0x11,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce574  <socket2::socket::[1]::socket2::socket::Socket>::set_unicast_hops_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::set_unicast_hops_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::set_unicast_hops_v6
          (int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,0x10,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce60c  <socket2::socket::[1]::socket2::socket::Socket>::set_multicast_hops_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::set_multicast_hops_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::set_multicast_hops_v6
          (int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,0x12,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce6a4  <socket2::socket::[1]::socket2::socket::Socket>::set_multicast_loop_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::set_multicast_loop_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::set_multicast_loop_v6
          (int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce73c  <socket2::socket::[1]::socket2::socket::Socket>::set_header_included_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::set_header_included_v6 */

ulong __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::set_header_included_v6
          (int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,3,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce7d4  <socket2::socket::[1]::socket2::socket::Socket>::only_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[1]::socket2::socket::Socket>::only_v6 */

void __rustcall
<socket2::socket::[1]::socket2::socket::Socket>::only_v6(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0x29,0x1a,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009ce88c  <socket2::socket::[2]::socket2::socket::Socket>::set_nodelay =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[2]::socket2::socket::Socket>::set_nodelay */

ulong __rustcall
<socket2::socket::[2]::socket2::socket::Socket>::set_nodelay(int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009ce924  <socket2::socket::[2]::socket2::socket::Socket>::original_dst =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[2]::socket2::socket::Socket>::original_dst */

void __rustcall
<socket2::socket::[2]::socket2::socket::Socket>::original_dst(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
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
  socklen_t local_24;
  
  local_24 = 0x80;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar1 = getsockopt(*param_2,0,0x50,&local_b0,&local_24);
  if (iVar1 != -1) {
    param_1[10] = uStack_68;
    param_1[9] = local_70;
    param_1[0xc] = uStack_58;
    param_1[0xb] = uStack_60;
    *(socklen_t *)(param_1 + 0x11) = local_24;
    param_1[0xe] = uStack_48;
    param_1[0xd] = local_50;
    param_1[0x10] = uStack_38;
    param_1[0xf] = uStack_40;
    param_1[2] = uStack_a8;
    param_1[1] = local_b0;
    param_1[4] = uStack_98;
    param_1[3] = uStack_a0;
    param_1[6] = uStack_88;
    param_1[5] = local_90;
    param_1[8] = uStack_78;
    param_1[7] = uStack_80;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cea14  <socket2::socket::[2]::socket2::socket::Socket>::keepalive_time =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[2]::socket2::socket::Socket>::keepalive_time */

void __rustcall
<socket2::socket::[2]::socket2::socket::Socket>::keepalive_time(ulong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,6,4,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    *param_1 = (long)local_28[0];
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *param_1 = (long)iVar1 << 0x20 | 2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 009ceac4  <socket2::socket::[2]::socket2::socket::Socket>::keepalive_retries =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[2]::socket2::socket::Socket>::keepalive_retries */

void __rustcall
<socket2::socket::[2]::socket2::socket::Socket>::keepalive_retries(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,6,6,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009ceb70  <socket2::socket::[2]::socket2::socket::Socket>::original_dst_ipv6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[2]::socket2::socket::Socket>::original_dst_ipv6 */

void __rustcall
<socket2::socket::[2]::socket2::socket::Socket>::original_dst_ipv6(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
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
  socklen_t local_24;
  
  local_24 = 0x80;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar1 = getsockopt(*param_2,0x29,0x50,&local_b0,&local_24);
  if (iVar1 != -1) {
    param_1[10] = uStack_68;
    param_1[9] = local_70;
    param_1[0xc] = uStack_58;
    param_1[0xb] = uStack_60;
    *(socklen_t *)(param_1 + 0x11) = local_24;
    param_1[0xe] = uStack_48;
    param_1[0xd] = local_50;
    param_1[0x10] = uStack_38;
    param_1[0xf] = uStack_40;
    param_1[2] = uStack_a8;
    param_1[1] = local_b0;
    param_1[4] = uStack_98;
    param_1[3] = uStack_a0;
    param_1[6] = uStack_88;
    param_1[5] = local_90;
    param_1[8] = uStack_78;
    param_1[7] = uStack_80;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 009cec60  <socket2::socket::[2]::socket2::socket::Socket>::set_tcp_keepalive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[2]::socket2::socket::Socket>::set_tcp_keepalive */

ulong __rustcall
<socket2::socket::[2]::socket2::socket::Socket>::set_tcp_keepalive(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int local_24;
  
  iVar2 = *param_1;
  local_24 = 1;
  iVar1 = setsockopt(iVar2,1,9,&local_24,4);
  if (iVar1 != -1) {
    if (param_2[4] != -1) {
      uVar4 = *(ulong *)(param_2 + 2);
      if (0x7ffffffe < uVar4) {
        uVar4 = 0x7fffffff;
      }
      local_24 = (int)uVar4;
      iVar1 = setsockopt(iVar2,6,4,&local_24,4);
      if (iVar1 == -1) goto LAB_009ced68;
    }
    if (param_2[8] != -1) {
      uVar4 = *(ulong *)(param_2 + 6);
      if (0x7ffffffe < uVar4) {
        uVar4 = 0x7fffffff;
      }
      local_24 = (int)uVar4;
      iVar1 = setsockopt(iVar2,6,5,&local_24,4);
      if (iVar1 == -1) goto LAB_009ced68;
    }
    if (*param_2 == 1) {
      local_24 = param_2[1];
      iVar2 = setsockopt(iVar2,6,6,&local_24,4);
      if (iVar2 == -1) goto LAB_009ced68;
    }
    return 0;
  }
LAB_009ced68:
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 009cedc8  <socket2::socket::[2]::socket2::socket::Socket>::keepalive_interval =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[2]::socket2::socket::Socket>::keepalive_interval */

void __rustcall
<socket2::socket::[2]::socket2::socket::Socket>::keepalive_interval(ulong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,6,5,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    *param_1 = (long)local_28[0];
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *param_1 = (long)iVar1 << 0x20 | 2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 009cee78  <socket2::socket::[2]::socket2::socket::Socket>::nodelay =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::[2]::socket2::socket::Socket>::nodelay */

void __rustcall
<socket2::socket::[2]::socket2::socket::Socket>::nodelay(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,6,1,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cef30  <socket2::sys::[6]::socket2::socket::Socket>::reuse_port =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::reuse_port */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::reuse_port(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,0xf,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cefe8  <socket2::sys::[6]::socket2::socket::Socket>::bind_device =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::bind_device */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::bind_device
          (int *param_1,void *param_2,socklen_t param_3)

{
  socklen_t __optlen;
  int iVar1;
  int *piVar2;
  
  __optlen = 0;
  if (param_2 != (void *)0x0) {
    __optlen = param_3;
  }
  iVar1 = setsockopt(*param_1,1,0x19,param_2,__optlen);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf080  <socket2::sys::[6]::socket2::socket::Socket>::is_listener =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::is_listener */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::is_listener(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,0x1e,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cf138  <socket2::sys::[6]::socket2::socket::Socket>::set_cloexec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_cloexec */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_cloexec(undefined4 *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_009d13d4(*param_1,1,2,1);
    return;
  }
  FUN_009d1204(*param_1,1,2,1);
  return;
}


// ===== 009cf160  <socket2::sys::[6]::socket2::socket::Socket>::set_freebind =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_freebind */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_freebind(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0,0xf,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf1f8  <socket2::sys::[6]::socket2::socket::Socket>::set_quickack =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_quickack */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_quickack(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,6,0xc,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf290  <socket2::sys::[6]::socket2::socket::Socket>::attach_filter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::attach_filter */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::attach_filter
          (int *param_1,undefined8 param_2,undefined2 param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 local_30 [4];
  undefined8 local_28;
  
  local_30[0] = param_3;
  local_28 = param_2;
  iVar1 = setsockopt(*param_1,1,0x1a,local_30,0x10);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf33c  <socket2::sys::[6]::socket2::socket::Socket>::detach_filter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::detach_filter */

ulong __rustcall <socket2::sys::[6]::socket2::socket::Socket>::detach_filter(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = setsockopt(*param_1,1,0x1b,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf3d4  <socket2::sys::[6]::socket2::socket::Socket>::freebind_ipv6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::freebind_ipv6 */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::freebind_ipv6(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0x29,0x4e,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cf48c  <socket2::sys::[6]::socket2::socket::Socket>::set_tclass_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_tclass_v6 */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_tclass_v6(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,0x43,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf524  <socket2::sys::[6]::socket2::socket::Socket>::set_reuse_port =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_reuse_port */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_reuse_port(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,0xf,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf5bc  <socket2::sys::[6]::socket2::socket::Socket>::tcp_user_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::tcp_user_timeout */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::tcp_user_timeout(ulong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ulong extraout_x8;
  uint local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,6,0x12,&local_28,&local_24);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
    *param_1 = (long)iVar1 << 0x20 | 2;
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
    return;
  }
  if (local_28 != 0) {
    *param_1 = (ulong)local_28 / 1000;
    *(uint *)(param_1 + 1) = (local_28 % 1000) * 1000000;
    return;
  }
  *param_1 = extraout_x8;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 009cf6b0  <socket2::sys::[6]::socket2::socket::Socket>::set_freebind_ipv6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_freebind_ipv6 */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_freebind_ipv6(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0x29,0x4e,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf748  <socket2::sys::[6]::socket2::socket::Socket>::set_tcp_user_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_tcp_user_timeout */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_tcp_user_timeout
          (int *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined4 local_4;
  
  if (param_3 == 0xffffffff) {
    local_4 = 0;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    lVar5 = SUB168(auVar2 * ZEXT816(1000),8);
    uVar1 = param_2 * 1000 + (ulong)param_3 / 1000000;
    if (CARRY8(param_2 * 1000,(ulong)param_3 / 1000000)) {
      lVar5 = lVar5 + 1;
    }
    if (0xfffffffe < uVar1) {
      uVar1 = 0xffffffff;
    }
    local_4 = (undefined4)uVar1;
    if (lVar5 != 0) {
      local_4 = 0xffffffff;
    }
  }
  iVar3 = setsockopt(*param_1,6,0x12,&local_4,4);
  if (iVar3 == -1) {
    piVar4 = (int *)__errno();
    iVar3 = *piVar4;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
      return (long)iVar3 << 0x20 | 2;
    }
    return (long)iVar3 << 0x20 | 2;
  }
  return 0;
}


// ===== 009cf824  <socket2::sys::[6]::socket2::socket::Socket>::thin_linear_timeouts =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::thin_linear_timeouts */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::thin_linear_timeouts(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,6,0x10,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cf8dc  <socket2::sys::[6]::socket2::socket::Socket>::set_thin_linear_timeouts =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_thin_linear_timeouts */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_thin_linear_timeouts
          (int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,6,0x10,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cf974  <socket2::sys::[6]::socket2::socket::Socket>::mss =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::mss */

void __rustcall <socket2::sys::[6]::socket2::socket::Socket>::mss(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,6,2,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cfa20  <socket2::sys::[6]::socket2::socket::Socket>::cork =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::cork */

void __rustcall <socket2::sys::[6]::socket2::socket::Socket>::cork(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,6,3,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cfad8  <socket2::sys::[6]::socket2::socket::Socket>::mark =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::mark */

void __rustcall <socket2::sys::[6]::socket2::socket::Socket>::mark(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,1,0x24,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cfb84  <socket2::sys::[6]::socket2::socket::Socket>::device =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::device */

void __rustcall <socket2::sys::[6]::socket2::socket::Socket>::device(size_t *param_1,int *param_2)

{
  int iVar1;
  undefined1 *__dest;
  int *piVar2;
  size_t __n;
  undefined1 auStack_40 [16];
  socklen_t local_14;
  
  local_14 = 0x10;
  iVar1 = getsockopt(*param_2,1,0x19,auStack_40,&local_14);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = (long)iVar1 << 0x20 | 2;
    return;
  }
  if (local_14 != 0) {
    __n = (ulong)local_14 - 1;
    if (0x11 < local_14) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,__n,0x10,&PTR_s__root__cargo_registry_src_index__00af69d0);
    }
    if (__n == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,__n);
      }
      memcpy(__dest,auStack_40,__n);
    }
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 009cfcbc  <socket2::sys::[6]::socket2::socket::Socket>::domain =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::domain */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::domain(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,1,0x27,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009cfd68  <socket2::sys::[6]::socket2::socket::Socket>::accept4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::accept4 */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::accept4(int *param_1,uint *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  local_b8 = 0x80;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lVar2 = syscall(0xf2,(ulong)*param_2,&local_140,&local_b8,param_3 & 0xffffffff);
  iVar1 = (int)lVar2;
  if (iVar1 == -1) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
    }
    *param_1 = -1;
    *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
    return;
  }
  if (-1 < iVar1) {
    *param_1 = iVar1;
    uStack_88 = (undefined4)uStack_118;
    uStack_84 = (undefined4)((ulong)uStack_118 >> 0x20);
    local_90 = (undefined4)local_120;
    uStack_8c = (undefined4)((ulong)local_120 >> 0x20);
    uStack_98 = (undefined4)uStack_128;
    uStack_94 = (undefined4)((ulong)uStack_128 >> 0x20);
    local_a0 = (undefined4)local_130;
    uStack_9c = (undefined4)((ulong)local_130 >> 0x20);
    uStack_a8 = (undefined4)uStack_138;
    uStack_a4 = (undefined4)((ulong)uStack_138 >> 0x20);
    local_b0 = (undefined4)local_140;
    uStack_ac = (undefined4)((ulong)local_140 >> 0x20);
    uStack_38 = (undefined4)uStack_c8;
    iStack_34 = (int)((ulong)uStack_c8 >> 0x20);
    local_40 = (undefined4)uStack_d0;
    uStack_3c = (undefined4)((ulong)uStack_d0 >> 0x20);
    uStack_48 = (undefined4)uStack_d8;
    uStack_44 = (undefined4)((ulong)uStack_d8 >> 0x20);
    local_50 = (undefined4)local_e0;
    uStack_4c = (undefined4)((ulong)local_e0 >> 0x20);
    uStack_68 = (undefined4)uStack_f8;
    uStack_64 = (undefined4)((ulong)uStack_f8 >> 0x20);
    local_70 = (undefined4)local_100;
    uStack_6c = (undefined4)((ulong)local_100 >> 0x20);
    uStack_78 = (undefined4)uStack_108;
    uStack_74 = (undefined4)((ulong)uStack_108 >> 0x20);
    local_80 = (undefined4)local_110;
    uStack_7c = (undefined4)((ulong)local_110 >> 0x20);
    uStack_58 = (undefined4)uStack_e8;
    uStack_54 = (undefined4)((ulong)uStack_e8 >> 0x20);
    local_60 = (undefined4)local_f0;
    uStack_5c = (undefined4)((ulong)local_f0 >> 0x20);
    *(ulong *)(param_1 + 3) = CONCAT44(uStack_a8,uStack_ac);
    *(ulong *)(param_1 + 1) = CONCAT44(local_b0,uStack_b4);
    *(ulong *)(param_1 + 7) = CONCAT44(uStack_98,uStack_9c);
    *(ulong *)(param_1 + 5) = CONCAT44(local_a0,uStack_a4);
    *(ulong *)(param_1 + 0x13) = CONCAT44(uStack_68,uStack_6c);
    *(ulong *)(param_1 + 0x11) = CONCAT44(local_70,uStack_74);
    *(ulong *)(param_1 + 0x17) = CONCAT44(uStack_58,uStack_5c);
    *(ulong *)(param_1 + 0x15) = CONCAT44(local_60,uStack_64);
    *(ulong *)(param_1 + 0xf) = CONCAT44(uStack_78,uStack_7c);
    *(ulong *)(param_1 + 0xd) = CONCAT44(local_80,uStack_84);
    *(ulong *)(param_1 + 0xb) = CONCAT44(uStack_88,uStack_8c);
    *(ulong *)(param_1 + 9) = CONCAT44(local_90,uStack_94);
    *(ulong *)(param_1 + 0x1f) = CONCAT44(uStack_38,uStack_3c);
    *(ulong *)(param_1 + 0x1d) = CONCAT44(local_40,uStack_44);
    *(ulong *)(param_1 + 0x1b) = CONCAT44(uStack_48,uStack_4c);
    *(ulong *)(param_1 + 0x19) = CONCAT44(local_50,uStack_54);
    param_1[0x21] = iStack_34;
    param_1[0x22] = local_b8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
}


// ===== 009cfec0  <socket2::sys::[6]::socket2::socket::Socket>::set_mss =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_mss */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_mss(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,6,2,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009cff58  <socket2::sys::[6]::socket2::socket::Socket>::freebind =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::freebind */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::freebind(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,0,0xf,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d0010  <socket2::sys::[6]::socket2::socket::Socket>::protocol =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::protocol */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::protocol(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,0x26,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = (uint)(local_28[0] != 0);
    param_1[2] = local_28[0];
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d00c8  <socket2::sys::[6]::socket2::socket::Socket>::quickack =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::quickack */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::quickack(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,6,0xc,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d0180  <socket2::sys::[6]::socket2::socket::Socket>::set_cork =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_cork */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_cork(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,6,3,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d0218  <socket2::sys::[6]::socket2::socket::Socket>::set_mark =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::set_mark */

ulong __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::set_mark(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,0x24,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d02b0  <socket2::sys::[6]::socket2::socket::Socket>::_sendfile =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::_sendfile */

undefined1  [16] __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::_sendfile
          (int *param_1,int param_2,off_t param_3,size_t param_4)

{
  size_t __count;
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  off_t local_8;
  
  __count = 0x7ffff000;
  if (param_4 != 0) {
    __count = param_4;
  }
  local_8 = param_3;
  uVar3 = sendfile(*param_1,param_2,&local_8,__count);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009d0354  <socket2::sys::[6]::socket2::socket::Socket>::tclass_v6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[6]::socket2::socket::Socket>::tclass_v6 */

void __rustcall
<socket2::sys::[6]::socket2::socket::Socket>::tclass_v6(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  socklen_t local_24;
  
  local_24 = 4;
  iVar1 = getsockopt(*param_2,0x29,0x43,&local_28,&local_24);
  if (iVar1 != -1) {
    *param_1 = 0;
    param_1[1] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d0400  <socket2::socket::socket2::socket::Socket>::set_linger =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_linger */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_linger(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint local_8;
  undefined4 uStack_4;
  
  if (param_3 == -1) {
    param_2 = 0;
  }
  local_8 = (uint)(param_3 != -1);
  uStack_4 = param_2;
  iVar1 = setsockopt(*param_1,1,0xd,&local_8,8);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d04a4  <socket2::socket::socket2::socket::Socket>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::take_error */

undefined1  [16] __rustcall <socket2::socket::socket2::socket::Socket>::take_error(int *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int local_8 [2];
  
  local_8[1] = 4;
  iVar2 = getsockopt(*param_1,1,4,local_8,(socklen_t *)(local_8 + 1));
  if (iVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
      auVar4._8_8_ = (long)iVar2 << 0x20 | 2;
      auVar4._0_8_ = 1;
      return auVar4;
    }
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    auVar5._8_8_ = (long)iVar2 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  if (local_8[0] != 0) {
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)local_8[0] << 0x20 | 2;
    return auVar1 << 0x40;
  }
  return ZEXT816(0);
}


// ===== 009d0598  <socket2::socket::socket2::socket::Socket>::read_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::read_timeout */

void __rustcall
<socket2::socket::socket2::socket::Socket>::read_timeout(ulong *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  long lStack_30;
  socklen_t local_24;
  
  local_24 = 0x10;
  iVar2 = getsockopt(*param_2,1,0x14,&local_38,&local_24);
  if (iVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
    *param_1 = (long)iVar2 << 0x20 | 2;
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
    return;
  }
  if (lStack_30 != 0 || local_38 != 0) {
    uVar4 = (int)lStack_30 * 1000;
    if (999999999 < uVar4) {
      uVar5 = (ulong)(uVar4 >> 9) * 0x44b83;
      uVar6 = uVar5 >> 0x27;
      bVar1 = CARRY8(local_38,uVar6);
      local_38 = local_38 + uVar6;
      if (bVar1) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_0037d3d9,0x19,&PTR_s__nix_store_8006w282fgsx3273c878b_00af69b8);
      }
      uVar4 = uVar4 + (uint)(uVar5 >> 0x27) * -1000000000;
    }
    *param_1 = local_38;
    *(uint *)(param_1 + 1) = uVar4;
    return;
  }
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 009d06bc  <socket2::socket::socket2::socket::Socket>::reuse_address =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::reuse_address */

void __rustcall
<socket2::socket::socket2::socket::Socket>::reuse_address(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,2,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d0774  <socket2::socket::socket2::socket::Socket>::set_broadcast =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_broadcast */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_broadcast(int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d080c  <socket2::socket::socket2::socket::Socket>::set_keepalive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_keepalive */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_keepalive(int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d08a4  <socket2::socket::socket2::socket::Socket>::write_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::write_timeout */

void __rustcall
<socket2::socket::socket2::socket::Socket>::write_timeout(ulong *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  long lStack_30;
  socklen_t local_24;
  
  local_24 = 0x10;
  iVar2 = getsockopt(*param_2,1,0x15,&local_38,&local_24);
  if (iVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
    }
    *param_1 = (long)iVar2 << 0x20 | 2;
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
    return;
  }
  if (lStack_30 != 0 || local_38 != 0) {
    uVar4 = (int)lStack_30 * 1000;
    if (999999999 < uVar4) {
      uVar5 = (ulong)(uVar4 >> 9) * 0x44b83;
      uVar6 = uVar5 >> 0x27;
      bVar1 = CARRY8(local_38,uVar6);
      local_38 = local_38 + uVar6;
      if (bVar1) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_0037d3d9,0x19,&PTR_s__nix_store_8006w282fgsx3273c878b_00af69b8);
      }
      uVar4 = uVar4 + (uint)(uVar5 >> 0x27) * -1000000000;
    }
    *param_1 = local_38;
    *(uint *)(param_1 + 1) = uVar4;
    return;
  }
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 009d09c8  <socket2::socket::socket2::socket::Socket>::recv_buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::recv_buffer_size */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::recv_buffer_size(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_1,1,8,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    auVar3._8_8_ = (long)local_28[0];
    auVar3._1_7_ = 0;
    auVar3[0] = iVar1 == -1;
    return auVar3;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar4._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar4._0_8_ = 1;
  return auVar4;
}


// ===== 009d0a74  <socket2::socket::socket2::socket::Socket>::send_buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::send_buffer_size */

undefined1  [16] __rustcall
<socket2::socket::socket2::socket::Socket>::send_buffer_size(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_1,1,7,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    auVar3._8_8_ = (long)local_28[0];
    auVar3._1_7_ = 0;
    auVar3[0] = iVar1 == -1;
    return auVar3;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar4._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar4._0_8_ = 1;
  return auVar4;
}


// ===== 009d0b20  <socket2::socket::socket2::socket::Socket>::set_read_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_read_timeout */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_read_timeout
          (int *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  ulong local_30;
  ulong uStack_28;
  
  if (0x7ffffffffffffffe < param_2) {
    param_2 = 0x7fffffffffffffff;
  }
  local_30 = 0;
  if (param_3 != 0xffffffff) {
    local_30 = param_2;
  }
  uStack_28 = 0;
  if (param_3 != 0xffffffff) {
    uStack_28 = (ulong)param_3 / 1000;
  }
  iVar1 = setsockopt(*param_1,1,0x14,&local_30,0x10);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d0bf0  <socket2::socket::socket2::socket::Socket>::set_reuse_address =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_reuse_address */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_reuse_address(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,2,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d0c88  <socket2::socket::socket2::socket::Socket>::set_write_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_write_timeout */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_write_timeout
          (int *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  ulong local_30;
  ulong uStack_28;
  
  if (0x7ffffffffffffffe < param_2) {
    param_2 = 0x7fffffffffffffff;
  }
  local_30 = 0;
  if (param_3 != 0xffffffff) {
    local_30 = param_2;
  }
  uStack_28 = 0;
  if (param_3 != 0xffffffff) {
    uStack_28 = (ulong)param_3 / 1000;
  }
  iVar1 = setsockopt(*param_1,1,0x15,&local_30,0x10);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d0d58  <socket2::socket::socket2::socket::Socket>::out_of_band_inline =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::out_of_band_inline */

void __rustcall
<socket2::socket::socket2::socket::Socket>::out_of_band_inline(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,10,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d0e10  <socket2::socket::socket2::socket::Socket>::set_recv_buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_recv_buffer_size */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_recv_buffer_size(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,8,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d0ea8  <socket2::socket::socket2::socket::Socket>::set_send_buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_send_buffer_size */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_send_buffer_size(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,7,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d0f40  <socket2::socket::socket2::socket::Socket>::set_out_of_band_inline =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::set_out_of_band_inline */

ulong __rustcall
<socket2::socket::socket2::socket::Socket>::set_out_of_band_inline(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,10,&local_4,4);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 009d0fd8  <socket2::socket::socket2::socket::Socket>::linger =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::linger */

void __rustcall <socket2::socket::socket2::socket::Socket>::linger(ulong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_2c;
  int iStack_28;
  socklen_t local_24;
  
  local_24 = 8;
  iVar1 = getsockopt(*param_2,1,0xd,&local_2c,&local_24);
  if (iVar1 != -1) {
    *param_1 = (long)iStack_28;
    *(uint *)(param_1 + 1) = -(uint)(local_2c == 0);
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *param_1 = (long)iVar1 << 0x20 | 2;
  *(undefined4 *)(param_1 + 1) = 0xfffffffe;
  return;
}


// ===== 009d1094  <socket2::socket::socket2::socket::Socket>::broadcast =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::broadcast */

void __rustcall
<socket2::socket::socket2::socket::Socket>::broadcast(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,6,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d114c  <socket2::socket::socket2::socket::Socket>::keepalive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::socket2::socket::Socket>::keepalive */

void __rustcall
<socket2::socket::socket2::socket::Socket>::keepalive(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,9,local_28,(socklen_t *)(local_28 + 1));
  if (iVar1 != -1) {
    param_1[1] = local_28[0] != 0;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d1204  FUN_009d1204 =====

ulong FUN_009d1204(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = fcntl(param_1,param_2);
  if (uVar1 != 0xffffffff) {
    if ((uVar1 & (param_4 ^ 0xffffffff)) == uVar1) {
      return 0;
    }
    iVar2 = fcntl(param_1,param_3);
    if (iVar2 != -1) {
      return 0;
    }
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 009d12d4  socket2::sys::unix_sockaddr =====

/* WARNING: Unknown calling convention: __rustcall */
/* socket2::sys::unix_sockaddr */

void __rustcall socket2::sys::unix_sockaddr(undefined8 *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_50;
  undefined6 uStack_48;
  undefined2 local_42;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  
  uStack_3a = 0;
  uStack_40 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_42 = 0;
  uStack_50 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (param_3 == 0) {
    iVar4 = 2;
  }
  else {
    cVar2 = *param_2;
    uVar1 = 0x6b;
    if (cVar2 == '\0') {
      uVar1 = 0x6c;
    }
    if (uVar1 < param_3) {
      uVar3 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0037d42f,0x21);
      *param_1 = 1;
      param_1[1] = uVar3;
      return;
    }
    memcpy(&local_b0,param_2,param_3);
    iVar4 = (int)param_3;
    if (cVar2 != '\0') {
      iVar4 = iVar4 + 1;
    }
    iVar4 = iVar4 + 2;
  }
  *(int *)(param_1 + 0x11) = iVar4;
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined8 *)((long)param_1 + 0x52) = uStack_68;
  *(undefined8 *)((long)param_1 + 0x4a) = local_70;
  *(undefined8 *)((long)param_1 + 0x62) = uStack_58;
  *(undefined8 *)((long)param_1 + 0x5a) = local_60;
  *(ulong *)((long)param_1 + 0x72) = CONCAT26(local_42,uStack_48);
  *(undefined8 *)((long)param_1 + 0x6a) = uStack_50;
  param_1[0x10] = uStack_3a;
  param_1[0xf] = CONCAT62(uStack_40,local_42);
  *(undefined8 *)((long)param_1 + 0x12) = uStack_a8;
  *(undefined8 *)((long)param_1 + 10) = local_b0;
  *(undefined8 *)((long)param_1 + 0x22) = uStack_98;
  *(undefined8 *)((long)param_1 + 0x1a) = local_a0;
  *(undefined8 *)((long)param_1 + 0x32) = uStack_88;
  *(undefined8 *)((long)param_1 + 0x2a) = local_90;
  *(undefined8 *)((long)param_1 + 0x42) = uStack_78;
  *(undefined8 *)((long)param_1 + 0x3a) = local_80;
  *param_1 = 0;
  return;
}


// ===== 009d13d4  FUN_009d13d4 =====

ulong FUN_009d13d4(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = fcntl(param_1,param_2);
  if (uVar1 != 0xffffffff) {
    if ((uVar1 | param_4) == uVar1) {
      return 0;
    }
    iVar2 = fcntl(param_1,param_3);
    if (iVar2 != -1) {
      return 0;
    }
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 009d14a4  FUN_009d14a4 =====

bool FUN_009d14a4(int param_1)

{
  return param_1 == 4;
}


// ===== 009d14b0  FUN_009d14b0 =====

undefined8 FUN_009d14b0(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x22;
  switch(param_1) {
  case 1:
  case 0xd:
    uVar1 = 1;
switchD_009d14d4_caseD_7:
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
    goto switchD_009d14d4_caseD_7;
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


// ===== 009d1610  <socket2::socket::Socket_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::Socket as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<socket2::socket::Socket_as_alloc::io::read::Read>::read_vectored
          (int *param_1,iovec *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  msghdr local_58;
  
  local_58.msg_control = (void *)0x0;
  local_58.msg_name = (void *)0x0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  sVar2 = recvmsg(*param_1,&local_58,0);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 009d16bc  <socket2::socket::Socket_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::Socket as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<socket2::socket::Socket_as_alloc::io::read::Read>::read(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = recv(*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009d1750  <&socket2::socket::Socket_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&socket2::socket::Socket as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<&socket2::socket::Socket_as_alloc::io::read::Read>::read_vectored
          (undefined8 *param_1,iovec *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  msghdr local_58;
  
  local_58.msg_control = (void *)0x0;
  local_58.msg_name = (void *)0x0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  sVar2 = recvmsg(*(int *)*param_1,&local_58,0);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 009d1800  <&socket2::socket::Socket_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&socket2::socket::Socket as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<&socket2::socket::Socket_as_alloc::io::read::Read>::read
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = recv(*(int *)*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009d1898  <socket2::socket::Socket_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::Socket as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<socket2::socket::Socket_as_core::io::write::Write>::write_vectored
          (int *param_1,iovec *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  msghdr local_58;
  
  local_58.msg_control = (void *)0x0;
  local_58.msg_name = (void *)0x0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  uVar3 = sendmsg(*param_1,&local_58,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 009d1938  <socket2::socket::Socket_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::Socket as core::io::write::Write>::write */

undefined1  [16] __rustcall
<socket2::socket::Socket_as_core::io::write::Write>::write
          (int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = send(*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009d19cc  <&socket2::socket::Socket_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&socket2::socket::Socket as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<&socket2::socket::Socket_as_core::io::write::Write>::write_vectored
          (undefined8 *param_1,iovec *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  msghdr local_58;
  
  local_58.msg_control = (void *)0x0;
  local_58.msg_name = (void *)0x0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_controllen = 0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  uVar3 = sendmsg(*(int *)*param_1,&local_58,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6988) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 009d1a70  <&socket2::socket::Socket_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&socket2::socket::Socket as core::io::write::Write>::write */

undefined1  [16] __rustcall
<&socket2::socket::Socket_as_core::io::write::Write>::write
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = send(*(int *)*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6988) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6988);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 009d1b08  <socket2::socket::Socket_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::Socket as std::os::fd::owned::AsFd>::as_fd */

undefined4 __rustcall
<socket2::socket::Socket_as_std::os::fd::owned::AsFd>::as_fd(undefined4 *param_1)

{
  return *param_1;
}


// ===== 009d1b10  <socket2::socket::Socket_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::Socket as core::fmt::Debug>::fmt */

void __rustcall <socket2::socket::Socket_as_core::fmt::Debug>::fmt(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1f8 [20];
  int local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  sockaddr local_1d0;
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
  undefined8 local_160;
  undefined1 local_158 [16];
  sockaddr sStack_148;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  socklen_t local_c8;
  sockaddr local_c0;
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
  undefined8 local_48;
  socklen_t local_34;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_1f8,param_2,&DAT_0037d450,6);
  iVar2 = *param_1;
  local_1e4 = iVar2;
  uVar3 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_1f8,&DAT_0037d456,3,&local_1e4,&DAT_00af6a00);
  local_c0._0_4_ = 0x80;
  sStack_148.sa_family = 0;
  sStack_148.sa_data[0] = '\0';
  sStack_148.sa_data[1] = '\0';
  sStack_148.sa_data[2] = '\0';
  sStack_148.sa_data[3] = '\0';
  sStack_148.sa_data[4] = '\0';
  sStack_148.sa_data[5] = '\0';
  local_158._8_8_ = 0;
  uStack_138 = 0;
  sStack_148.sa_data[6] = '\0';
  sStack_148.sa_data[7] = '\0';
  sStack_148.sa_data[8] = '\0';
  sStack_148.sa_data[9] = '\0';
  sStack_148.sa_data[10] = '\0';
  sStack_148.sa_data[0xb] = '\0';
  sStack_148.sa_data[0xc] = '\0';
  sStack_148.sa_data[0xd] = '\0';
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  iVar1 = getsockname(iVar2,(sockaddr *)(local_158 + 8),(socklen_t *)&local_c0);
  uVar4 = local_c0._0_8_;
  if (iVar1 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
    }
    local_1e0 = 0;
  }
  else {
    uStack_188 = local_100;
    local_190 = uStack_108;
    uStack_178 = local_f0;
    uStack_180 = uStack_f8;
    uStack_168 = local_e0;
    local_170 = uStack_e8;
    local_1d0.sa_data[6] = sStack_148.sa_data[6];
    local_1d0.sa_data[7] = sStack_148.sa_data[7];
    local_1d0.sa_data[8] = sStack_148.sa_data[8];
    local_1d0.sa_data[9] = sStack_148.sa_data[9];
    local_1d0.sa_data[10] = sStack_148.sa_data[10];
    local_1d0.sa_data[0xb] = sStack_148.sa_data[0xb];
    local_1d0.sa_data[0xc] = sStack_148.sa_data[0xc];
    local_1d0.sa_data[0xd] = sStack_148.sa_data[0xd];
    local_1d0.sa_family = sStack_148.sa_family;
    local_1d0.sa_data[0] = sStack_148.sa_data[0];
    local_1d0.sa_data[1] = sStack_148.sa_data[1];
    local_1d0.sa_data[2] = sStack_148.sa_data[2];
    local_1d0.sa_data[3] = sStack_148.sa_data[3];
    local_1d0.sa_data[4] = sStack_148.sa_data[4];
    local_1d0.sa_data[5] = sStack_148.sa_data[5];
    uStack_1b8 = local_130;
    uStack_1c0 = uStack_138;
    local_160 = uStack_d8;
    local_1e0 = 1;
    uStack_1a8 = local_120;
    local_1b0 = uStack_128;
    uStack_198 = local_110;
    uStack_1a0 = uStack_118;
    local_158._0_2_ = local_c0.sa_family;
    local_158[2] = local_c0.sa_data[0];
    local_158[3] = local_c0.sa_data[1];
    local_1d8 = local_158._8_8_;
    local_c0._0_8_ = uVar4;
  }
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar3,&DAT_0037d459,10,&local_1e0,&DAT_00af6a20);
  local_34 = 0x80;
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
  uStack_a8 = 0;
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
  local_48 = 0;
  uStack_50 = 0;
  iVar2 = getpeername(iVar2,&local_c0,&local_34);
  if (iVar2 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
    }
    local_158._8_8_ = 0;
  }
  else {
    local_d0 = local_48;
    uStack_f8 = uStack_70;
    local_100 = uStack_78;
    uStack_e8 = local_60;
    local_f0 = uStack_68;
    uStack_d8 = uStack_50;
    local_e0 = uStack_58;
    uStack_138 = uStack_b0;
    sStack_148.sa_data[6] = local_c0.sa_data[6];
    sStack_148.sa_data[7] = local_c0.sa_data[7];
    sStack_148.sa_data[8] = local_c0.sa_data[8];
    sStack_148.sa_data[9] = local_c0.sa_data[9];
    sStack_148.sa_data[10] = local_c0.sa_data[10];
    sStack_148.sa_data[0xb] = local_c0.sa_data[0xb];
    sStack_148.sa_data[0xc] = local_c0.sa_data[0xc];
    sStack_148.sa_data[0xd] = local_c0.sa_data[0xd];
    uStack_128 = local_a0;
    local_130 = uStack_a8;
    sStack_148.sa_family = local_c0.sa_family;
    sStack_148.sa_data[0] = local_c0.sa_data[0];
    sStack_148.sa_data[1] = local_c0.sa_data[1];
    sStack_148.sa_data[2] = local_c0.sa_data[2];
    sStack_148.sa_data[3] = local_c0.sa_data[3];
    sStack_148.sa_data[4] = local_c0.sa_data[4];
    sStack_148.sa_data[5] = local_c0.sa_data[5];
    uStack_118 = uStack_90;
    local_120 = uStack_98;
    uStack_108 = local_80;
    local_110 = uStack_88;
    local_c8 = local_34;
    local_158._8_8_ = 1;
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar4,&DAT_0037d463,9,local_158 + 8,&DAT_00af6a20);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009d1d44  <socket2::socket::Socket_as_core::convert::From<std::os::unix::net::listener::UnixListener>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::socket::Socket as
   core::convert::From<std::os::unix::net::listener::UnixListener>>::from */

void __rustcall
<socket2::socket::Socket_as_core::convert::From<std::os::unix::net::listener::UnixListener>>::from
          (int param_1)

{
  if (-1 < param_1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037d3ac,0x5b,&PTR_s__root__cargo_registry_src_index__00af69a0);
}


// ===== 009d1d6c  FUN_009d1d6c =====

void FUN_009d1d6c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i32_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i32_as_core::fmt::Display>::fmt();
    return;
  }
  <i32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 009d1d84  FUN_009d1d84 =====

void FUN_009d1d84(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af6a40);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009d1de4  FUN_009d1de4 =====

ulong FUN_009d1de4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long local_38;
  void *local_30;
  undefined8 uStack_28;
  
  std::sys::io::error::unix::error_string(&local_38);
                    /* try { // try from 009d1e04 to 009d1e0f has its CatchHandler @ 009d1e3c */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,local_30,uStack_28);
  if (local_38 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    free(local_30);
  }
  return uVar1;
}


// ===== 009d1e5c  FUN_009d1e5c =====

void FUN_009d1e5c(ulong *param_1)

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


// ===== 009d1eac  <socket2::sockaddr::socket2::sockaddr::SockAddr>::as_socket_ipv4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sockaddr::socket2::sockaddr::SockAddr>::as_socket_ipv4 */

ulong __rustcall <socket2::sockaddr::socket2::sockaddr::SockAddr>::as_socket_ipv4(short *param_1)

{
  if (*param_1 == 2) {
    return (ulong)*(uint *)(param_1 + 2) << 0x10 |
           ((ulong)((ushort)param_1[1] >> 8) | ((ulong)(ushort)param_1[1] & 0xff00ff00ff00ff) << 8)
           << 0x30 | 1;
  }
  return 0;
}


// ===== 009d1edc  <socket2::sockaddr::socket2::sockaddr::SockAddr>::as_socket_ipv6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sockaddr::socket2::sockaddr::SockAddr>::as_socket_ipv6 */

void __rustcall
<socket2::sockaddr::socket2::sockaddr::SockAddr>::as_socket_ipv6(undefined4 *param_1,short *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  if (*param_2 == 10) {
    uVar3 = param_2[1];
    uVar2 = *(undefined4 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 6);
    uVar1 = *(undefined4 *)(param_2 + 2);
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[4] = uVar2;
    param_1[5] = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    *(ushort *)(param_1 + 7) = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
    param_1[6] = uVar1;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 009d1f2c  <socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_pathname =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_pathname */

undefined1  [16] __rustcall
<socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_pathname(short *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  short *psVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 == 1) {
    psVar2 = param_1 + 1;
    auVar3._8_8_ = (ulong)*(uint *)(param_1 + 0x40) - 3;
    if ((char)*psVar2 == '\0' || *(uint *)(param_1 + 0x40) < 3) {
      psVar2 = (short *)0x0;
    }
    auVar3._0_8_ = psVar2;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 009d1f5c  <socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_abstract_namespace =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_abstract_namespace */

undefined1  [16] __rustcall
<socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_abstract_namespace
          (short *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*param_1 == 1) {
    lVar1 = (long)param_1 + 3;
    auVar3._8_8_ = (ulong)*(uint *)(param_1 + 0x40) - 3;
    if ((char)param_1[1] != '\0' || *(uint *)(param_1 + 0x40) < 3) {
      lVar1 = 0;
    }
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 009d1f90  <socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_unix =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_unix */

void __rustcall
<socket2::sys::[5]::socket2::sockaddr::SockAddr>::as_unix(undefined4 *param_1,short *param_2)

{
  undefined2 uStack_9a;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined6 uStack_34;
  undefined2 uStack_2e;
  undefined6 uStack_2c;
  undefined4 local_24;
  
  if (*param_2 == 1) {
    if ((2 < *(uint *)(param_2 + 0x40)) && ((char)param_2[1] != '\0')) {
      std::os::unix::net::addr::sockaddr_un
                (&local_98,param_2 + 1,(ulong)*(uint *)(param_2 + 0x40) - 3);
      if (local_98 != 1) {
        *(ulong *)(param_1 + 2) = CONCAT44(uStack_90,uStack_94);
        *(undefined8 *)(param_1 + 0x16) = uStack_44;
        *(undefined8 *)(param_1 + 0x14) = local_4c;
        *(ulong *)(param_1 + 0x1a) = CONCAT26(uStack_2e,uStack_34);
        *(undefined8 *)(param_1 + 0x18) = local_3c;
        *(ulong *)(param_1 + 0x1c) = CONCAT26(uStack_9a,uStack_2c);
        *(undefined8 *)(param_1 + 6) = uStack_84;
        *(ulong *)(param_1 + 4) = CONCAT44(uStack_88,local_8c);
        *(undefined8 *)(param_1 + 10) = uStack_74;
        *(undefined8 *)(param_1 + 8) = local_7c;
        *param_1 = 1;
        param_1[1] = local_24;
        *(undefined8 *)(param_1 + 0xe) = uStack_64;
        *(undefined8 *)(param_1 + 0xc) = local_6c;
        *(undefined8 *)(param_1 + 0x12) = uStack_54;
        *(undefined8 *)(param_1 + 0x10) = local_5c;
        return;
      }
                    /* try { // try from 009d206c to 009d208f has its CatchHandler @ 009d2094 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0037d4e6,0x2b,&local_98,&PTR_FUN_00af6ab0,
                 &PTR_s__root__cargo_registry_src_index__00af6ad0);
    }
  }
  *param_1 = 0;
  return;
}


// ===== 009d20ac  <socket2::[d]::socket2::MsgHdr>::with_buffers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::[d]::socket2::MsgHdr>::with_buffers */

void __rustcall
<socket2::[d]::socket2::MsgHdr>::with_buffers
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_2[2] = param_3;
  param_2[3] = param_4;
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[6] = param_2[6];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  return;
}


// ===== 009d20cc  <socket2::[f]::socket2::MsgHdrMut>::with_buffers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::[f]::socket2::MsgHdrMut>::with_buffers */

void __rustcall
<socket2::[f]::socket2::MsgHdrMut>::with_buffers
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_2[2] = param_3;
  param_2[3] = param_4;
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[6] = param_2[6];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  return;
}


// ===== 009d20ec  FUN_009d20ec =====

bool FUN_009d20ec(int param_1)

{
  return param_1 == 4;
}


// ===== 009d20f8  FUN_009d20f8 =====

undefined8 FUN_009d20f8(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x22;
  switch(param_1) {
  case 1:
  case 0xd:
    uVar1 = 1;
switchD_009d211c_caseD_7:
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
    goto switchD_009d211c_caseD_7;
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


// ===== 009d2258  <socket2::sockref::SockRef_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sockref::SockRef as core::fmt::Debug>::fmt */

void __rustcall
<socket2::sockref::SockRef_as_core::fmt::Debug>::fmt(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1f8 [20];
  int local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  sockaddr local_1d0;
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
  undefined8 local_160;
  undefined1 local_158 [16];
  sockaddr sStack_148;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  socklen_t local_c8;
  sockaddr local_c0;
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
  undefined8 local_48;
  socklen_t local_34;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_1f8,param_2,&DAT_0037d511,7);
  iVar2 = *param_1;
  local_1e4 = iVar2;
  uVar3 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_1f8,&DAT_0037d518,3,&local_1e4,&DAT_00af6ae8);
  local_c0._0_4_ = 0x80;
  sStack_148.sa_family = 0;
  sStack_148.sa_data[0] = '\0';
  sStack_148.sa_data[1] = '\0';
  sStack_148.sa_data[2] = '\0';
  sStack_148.sa_data[3] = '\0';
  sStack_148.sa_data[4] = '\0';
  sStack_148.sa_data[5] = '\0';
  local_158._8_8_ = 0;
  uStack_138 = 0;
  sStack_148.sa_data[6] = '\0';
  sStack_148.sa_data[7] = '\0';
  sStack_148.sa_data[8] = '\0';
  sStack_148.sa_data[9] = '\0';
  sStack_148.sa_data[10] = '\0';
  sStack_148.sa_data[0xb] = '\0';
  sStack_148.sa_data[0xc] = '\0';
  sStack_148.sa_data[0xd] = '\0';
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  iVar1 = getsockname(iVar2,(sockaddr *)(local_158 + 8),(socklen_t *)&local_c0);
  uVar4 = local_c0._0_8_;
  if (iVar1 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
    }
    local_1e0 = 0;
  }
  else {
    uStack_188 = local_100;
    local_190 = uStack_108;
    uStack_178 = local_f0;
    uStack_180 = uStack_f8;
    uStack_168 = local_e0;
    local_170 = uStack_e8;
    local_1d0.sa_data[6] = sStack_148.sa_data[6];
    local_1d0.sa_data[7] = sStack_148.sa_data[7];
    local_1d0.sa_data[8] = sStack_148.sa_data[8];
    local_1d0.sa_data[9] = sStack_148.sa_data[9];
    local_1d0.sa_data[10] = sStack_148.sa_data[10];
    local_1d0.sa_data[0xb] = sStack_148.sa_data[0xb];
    local_1d0.sa_data[0xc] = sStack_148.sa_data[0xc];
    local_1d0.sa_data[0xd] = sStack_148.sa_data[0xd];
    local_1d0.sa_family = sStack_148.sa_family;
    local_1d0.sa_data[0] = sStack_148.sa_data[0];
    local_1d0.sa_data[1] = sStack_148.sa_data[1];
    local_1d0.sa_data[2] = sStack_148.sa_data[2];
    local_1d0.sa_data[3] = sStack_148.sa_data[3];
    local_1d0.sa_data[4] = sStack_148.sa_data[4];
    local_1d0.sa_data[5] = sStack_148.sa_data[5];
    uStack_1b8 = local_130;
    uStack_1c0 = uStack_138;
    local_160 = uStack_d8;
    local_1e0 = 1;
    uStack_1a8 = local_120;
    local_1b0 = uStack_128;
    uStack_198 = local_110;
    uStack_1a0 = uStack_118;
    local_1d8 = local_158._8_8_;
    local_158._0_2_ = local_c0.sa_family;
    local_158[2] = local_c0.sa_data[0];
    local_158[3] = local_c0.sa_data[1];
    local_c0._0_8_ = uVar4;
  }
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar3,&DAT_0037d51b,10,&local_1e0,&DAT_00af6b08);
  local_34 = 0x80;
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
  uStack_a8 = 0;
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
  local_48 = 0;
  uStack_50 = 0;
  iVar2 = getpeername(iVar2,&local_c0,&local_34);
  if (iVar2 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6a98) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6a98);
    }
    local_158._8_8_ = 0;
  }
  else {
    sStack_148.sa_family = local_c0.sa_family;
    sStack_148.sa_data[0] = local_c0.sa_data[0];
    sStack_148.sa_data[1] = local_c0.sa_data[1];
    sStack_148.sa_data[2] = local_c0.sa_data[2];
    sStack_148.sa_data[3] = local_c0.sa_data[3];
    sStack_148.sa_data[4] = local_c0.sa_data[4];
    sStack_148.sa_data[5] = local_c0.sa_data[5];
    uStack_f8 = uStack_70;
    local_100 = uStack_78;
    uStack_e8 = local_60;
    local_f0 = uStack_68;
    uStack_d8 = uStack_50;
    local_e0 = uStack_58;
    uStack_138 = uStack_b0;
    sStack_148.sa_data[6] = local_c0.sa_data[6];
    sStack_148.sa_data[7] = local_c0.sa_data[7];
    sStack_148.sa_data[8] = local_c0.sa_data[8];
    sStack_148.sa_data[9] = local_c0.sa_data[9];
    sStack_148.sa_data[10] = local_c0.sa_data[10];
    sStack_148.sa_data[0xb] = local_c0.sa_data[0xb];
    sStack_148.sa_data[0xc] = local_c0.sa_data[0xc];
    sStack_148.sa_data[0xd] = local_c0.sa_data[0xd];
    uStack_128 = local_a0;
    local_130 = uStack_a8;
    local_c8 = local_34;
    uStack_118 = uStack_90;
    local_120 = uStack_98;
    uStack_108 = local_80;
    local_110 = uStack_88;
    local_d0 = local_48;
    local_158._8_8_ = 1;
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar4,&DAT_0037d525,9,local_158 + 8,&DAT_00af6b08);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009d248c  <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddrV4>>::from =====

/* <socket2[797b7815e2a0656b]::sockaddr::SockAddr as
   core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddrV4>>::from
    */

void <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddrV4>>
     ::from(undefined2 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(int *)(param_1 + 2) = (int)param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[1] = (ushort)((ulong)param_2 >> 0x28) & 0xff |
               (ushort)(((uint)((ulong)param_2 >> 0x20) & 0xff00ff) << 8);
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x10;
  return;
}


// ===== 009d24cc  <socket2::RecvFlags_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::RecvFlags as core::fmt::Debug>::fmt */

void __rustcall <socket2::RecvFlags_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_38 [20];
  byte local_24 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_38,param_2,&DAT_0037d561,9);
  uVar1 = *param_1;
  local_24[0] = (byte)(uVar1 >> 7) & 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_38,&DAT_002a0880,0x10,local_24,&DAT_00af6b58);
  local_24[0] = (byte)uVar1 & 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_38,&DAT_0037d56a,0xe,local_24,&DAT_00af6b58);
  local_24[0] = (byte)(uVar1 >> 5) & 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_38,&DAT_0037d578,0xc,local_24,&DAT_00af6b58);
  local_24[0] = (byte)(uVar1 >> 0xb) & 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_38,&DAT_0037d584,10,local_24,&DAT_00af6b58);
  local_24[0] = (byte)(uVar1 >> 2) & 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_38,&DAT_0037d58e,0xc,local_24,&DAT_00af6b58);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_38);
  return;
}


// ===== 009d25d4  FUN_009d25d4 =====

void FUN_009d25d4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint local_88 [2];
  ulong local_80;
  byte local_70;
  undefined1 uStack_6f;
  byte bStack_6e;
  undefined5 uStack_6d;
  ulong local_68;
  ulong local_60;
  ulong local_50;
  long local_40;
  ulong uStack_38;
  long local_30;
  ulong uStack_28;
  
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
            (local_88,&DAT_0037d52e,0x28,&DAT_0037d556,0xb);
  if ((local_88[0] & 1) == 0) {
    if ((bStack_6e & 1) != 0) goto LAB_009d28a4;
    if (local_80 != 0) {
      if (local_80 < uStack_38) {
        if (*(char *)(local_40 + local_80) + 0x40 < 0 !=
            SCARRY4((int)*(char *)(local_40 + local_80),0x40)) goto LAB_009d2928;
      }
      else if (local_80 != uStack_38) goto LAB_009d2928;
    }
    local_60 = local_80;
    if (local_80 == uStack_38) {
      if ((local_70 & 1) == 0) goto LAB_009d28a4;
    }
    else {
      pbVar2 = (byte *)(local_40 + local_80);
      uVar3 = (uint)*pbVar2;
      if ((char)*pbVar2 < '\0') {
        if (uVar3 < 0xe0) {
          uVar3 = pbVar2[1] & 0x3f | (uVar3 & 0x1f) << 6;
        }
        else {
          uVar5 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
          if (uVar3 < 0xf0) {
            uVar3 = uVar5 | (uVar3 & 0x1f) << 0xc;
          }
          else {
            uVar3 = pbVar2[3] & 0x3f | uVar5 << 6 | (uVar3 & 7) << 0x12;
          }
        }
      }
      if ((local_70 & 1) == 0) {
        if (uVar3 < 0x80) {
          local_80 = local_80 + 1;
        }
        else if (uVar3 < 0x800) {
          local_80 = local_80 + 2;
        }
        else {
          lVar12 = 3;
          if (0xffff < uVar3) {
            lVar12 = 4;
          }
          local_80 = lVar12 + local_80;
        }
        if (local_80 != 0) {
          if (local_80 < uStack_38) {
            if (*(char *)(local_40 + local_80) + 0x40 < 0 !=
                SCARRY4((int)*(char *)(local_40 + local_80),0x40)) {
LAB_009d2928:
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail
                        (local_40,uStack_38,local_80,uStack_38,
                         &PTR_s__nix_store_8006w282fgsx3273c878b_00af6bd8);
            }
          }
          else if (local_80 != uStack_38) goto LAB_009d2928;
        }
        local_60 = uStack_38;
        if (local_80 != uStack_38) {
          local_60 = local_80;
        }
      }
    }
LAB_009d2970:
    if (local_60 < 0x29) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0037d52e + local_60,0x28 - local_60);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (&DAT_0037d52e,0x28,local_60,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6b40);
  }
  lVar12 = uStack_28 - 1;
  if (local_50 == 0xffffffffffffffff) {
    uVar9 = local_60 + lVar12;
    if (uVar9 < uStack_38) {
      uVar6 = local_80 - 1;
      uVar14 = local_80;
      if (local_80 <= uStack_28) {
        uVar14 = uStack_28;
      }
      if (uVar6 < uStack_28) {
LAB_009d276c:
        if ((local_68 >> ((ulong)*(byte *)(local_40 + uVar9) & 0x3f) & 1) == 0) {
          local_60 = local_60 + uStack_28;
        }
        else {
          lVar7 = -local_60;
          lVar8 = local_80 + local_60;
          lVar11 = uVar14 - local_80;
          pcVar10 = (char *)(local_30 + local_80);
          do {
            if (lVar11 == 0) {
              uVar9 = local_80;
              goto LAB_009d27b8;
            }
            cVar4 = *pcVar10;
            pcVar1 = (char *)(local_40 + lVar8);
            lVar7 = lVar7 + -1;
            lVar8 = lVar8 + 1;
            lVar11 = lVar11 + -1;
            pcVar10 = pcVar10 + 1;
          } while (cVar4 == *pcVar1);
          local_60 = -lVar7;
        }
        goto LAB_009d2760;
      }
      do {
        while (pcVar10 = (char *)(local_30 + local_80), uVar13 = local_60, uVar15 = uVar14,
              (local_68 >> ((ulong)*(byte *)(local_40 + uVar9) & 0x3f) & 1) != 0) {
          do {
            if (local_80 == uVar15) {
              if (local_80 != 0) goto LAB_009d28b4;
              goto LAB_009d2970;
            }
            cVar4 = *pcVar10;
            pcVar1 = (char *)(local_40 + local_80 + uVar13);
            uVar13 = uVar13 + 1;
            pcVar10 = pcVar10 + 1;
            uVar15 = uVar15 - 1;
          } while (cVar4 == *pcVar1);
          uVar9 = uVar13 + lVar12;
          local_60 = uVar13;
          if (uStack_38 <= uVar9) goto LAB_009d28a4;
        }
        local_60 = local_60 + uStack_28;
        uVar9 = local_60 + lVar12;
      } while (uVar9 < uStack_38);
    }
  }
  else {
    uVar9 = local_60 + lVar12;
    if (uVar9 < uStack_38) {
      lVar8 = CONCAT53(uStack_6d,CONCAT12(bStack_6e,CONCAT11(uStack_6f,local_70)));
LAB_009d2664:
      if ((local_68 >> ((ulong)*(byte *)(local_40 + uVar9) & 0x3f) & 1) == 0) {
        local_50 = 0;
        local_60 = local_60 + uStack_28;
      }
      else {
        uVar9 = local_50;
        if (local_50 <= local_80) {
          uVar9 = local_80;
        }
        uVar14 = (local_60 - local_80) + uVar9;
        do {
          if (uStack_28 <= uVar9) {
            uVar9 = local_80;
            goto LAB_009d26b4;
          }
          pcVar10 = (char *)(local_30 + uVar9);
          pcVar1 = (char *)(local_40 + local_60 + uVar9);
          uVar9 = uVar9 + 1;
          uVar14 = uVar14 + 1;
        } while (*pcVar10 == *pcVar1);
        local_50 = 0;
        local_60 = uVar14;
      }
      goto LAB_009d2654;
    }
  }
LAB_009d28a4:
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af6b28);
  while (pcVar10 = (char *)(local_30 + -1 + uVar9),
        pcVar1 = (char *)(local_40 + -1 + local_60 + uVar9), uVar9 = uVar9 - 1, *pcVar10 == *pcVar1)
  {
LAB_009d27b8:
    if (uVar9 == 0) goto LAB_009d2970;
  }
  local_60 = local_60 + CONCAT53(uStack_6d,CONCAT12(bStack_6e,CONCAT11(uStack_6f,local_70)));
LAB_009d2760:
  uVar9 = local_60 + lVar12;
  if (uStack_38 <= uVar9) goto LAB_009d28a4;
  goto LAB_009d276c;
LAB_009d26b4:
  do {
    uVar6 = uVar9 - 1;
    if (uVar9 <= local_50) goto LAB_009d2970;
    if (uStack_28 <= uVar6) {
LAB_009d28b4:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar6,uStack_28,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6a80);
    }
    uVar9 = uVar6;
  } while (*(char *)(local_30 + uVar6) == *(char *)(local_40 + local_60 + uVar6));
  local_60 = local_60 + lVar8;
  local_50 = uStack_28 - lVar8;
LAB_009d2654:
  uVar9 = local_60 + lVar12;
  if (uStack_38 <= uVar9) goto LAB_009d28a4;
  goto LAB_009d2664;
}


// ===== 009d29b8  FUN_009d29b8 =====

void FUN_009d29b8(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  lVar2 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002a12b8,8);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0037d59a,9,lVar2,&DAT_00af6b78);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0037d5a3,3,lVar2 + 0x80,&DAT_00af6b98);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009d2a34  <socket2::sockaddr::SockAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::sockaddr::SockAddr as core::fmt::Debug>::fmt */

void __rustcall
<socket2::sockaddr::SockAddr_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002a12b8,8);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0037d59a,9,param_1,&DAT_00af6b78);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0037d5a3,3,param_1 + 0x80,&DAT_00af6b98);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009d2ab4  <socket2::MaybeUninitSlice_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::MaybeUninitSlice as core::fmt::Debug>::fmt */

void __rustcall
<socket2::MaybeUninitSlice_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00af6a60);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 009d2b20  <std::os::unix::net::listener::UnixListener_as_core::convert::From<socket2::socket::Socket>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::listener::UnixListener as
   core::convert::From<socket2::socket::Socket>>::from */

void __rustcall
<std::os::unix::net::listener::UnixListener_as_core::convert::From<socket2::socket::Socket>>::from
          (void)

{
  return;
}


// ===== 009d2b24  FUN_009d2b24 =====

void FUN_009d2b24(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i32_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i32_as_core::fmt::Display>::fmt();
    return;
  }
  <i32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 009d2b3c  FUN_009d2b3c =====

void FUN_009d2b3c(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af6bb8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009d2b9c  FUN_009d2b9c =====

void FUN_009d2b9c(undefined8 param_1,long param_2)

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


// ===== 009d2bb4  FUN_009d2bb4 =====

void FUN_009d2bb4(undefined8 param_1,long param_2)

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


// ===== 009d2bcc  <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>::from =====

/* <socket2[797b7815e2a0656b]::sockaddr::SockAddr as
   core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>::from
    */

void <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>
     ::from(undefined2 *param_1,short *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*param_2 == 1) {
    uVar1 = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar3 = param_2[0xe];
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x3a) = 0;
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0x1c;
    *param_1 = 10;
    param_1[1] = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
    *(undefined4 *)(param_1 + 2) = uVar1;
    return;
  }
  uVar3 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *param_1 = 2;
  param_1[1] = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 0x10;
  return;
}


// ===== 009d2c70  <socket2::Domain_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::Domain as core::fmt::Debug>::fmt */

void __rustcall <socket2::Domain_as_core::fmt::Debug>::fmt(int *param_1,undefined8 *param_2)

{
  int local_24;
  int *local_20;
  undefined *puStack_18;
  
  local_24 = *param_1;
  if (local_24 < 10) {
    if (local_24 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d5bd,9);
      return;
    }
    if (local_24 == 1) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d5ad,7);
      return;
    }
    if (local_24 == 2) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d5a6,7);
      return;
    }
  }
  else {
    if (local_24 == 10) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a1ab8,8);
      return;
    }
    if (local_24 == 0x11) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d5b4,9);
      return;
    }
    if (local_24 == 0x28) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a1630,8);
      return;
    }
  }
  local_20 = &local_24;
  puStack_18 = PTR_fmt_00b00d18;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
  return;
}


// ===== 009d2d78  <socket2::MsgHdr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::MsgHdr as core::fmt::Debug>::fmt */

void __rustcall <socket2::MsgHdr_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(&DAT_0037d5c6,6,param_2);
  return;
}


// ===== 009d2d8c  <socket2::Type_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::Type as core::fmt::Debug>::fmt */

void __rustcall <socket2::Type_as_core::fmt::Debug>::fmt(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int local_24;
  int *local_20;
  undefined *puStack_18;
  
  local_24 = *param_1;
  uVar1 = local_24 - 1;
  if (uVar1 < 5) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str
              (param_2,&DAT_0037d670 + *(int *)(&DAT_0037d670 + (ulong)uVar1 * 4),
               *(undefined8 *)(&DAT_0037d648 + (ulong)uVar1 * 8));
    return;
  }
  local_20 = &local_24;
  puStack_18 = PTR_fmt_00b00d18;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
  return;
}


// ===== 009d2e04  <socket2::Protocol_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::Protocol as core::fmt::Debug>::fmt */

void __rustcall <socket2::Protocol_as_core::fmt::Debug>::fmt(int *param_1,undefined8 *param_2)

{
  int local_24;
  int *local_20;
  undefined *puStack_18;
  
  local_24 = *param_1;
  if (local_24 < 0x11) {
    if (local_24 == 1) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d5ff,0xc);
      return;
    }
    if (local_24 == 6) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d619,0xb);
      return;
    }
  }
  else {
    if (local_24 == 0x11) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d624,0xb);
      return;
    }
    if (local_24 == 0x3a) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d60b,0xe);
      return;
    }
    if (local_24 == 0x88) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d62f,0xf);
      return;
    }
  }
  local_20 = &local_24;
  puStack_18 = PTR_fmt_00b00d18;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
  return;
}


// ===== 009d2ef0  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 009d2ef4  <socket2::MsgHdrMut_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <socket2::MsgHdrMut as core::fmt::Debug>::fmt */

void __rustcall <socket2::MsgHdrMut_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt("MsgHdrMut",9,param_2);
  return;
}


// ===== 009d2f08  FUN_009d2f08 =====

ulong FUN_009d2f08(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long local_38;
  void *local_30;
  undefined8 uStack_28;
  
  std::sys::io::error::unix::error_string(&local_38);
                    /* try { // try from 009d2f28 to 009d2f33 has its CatchHandler @ 009d2f60 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,local_30,uStack_28);
  if (local_38 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    free(local_30);
  }
  return uVar1;
}


// ===== 009d2f80  <alloc::io::error::core::io::error::Error>::new<bytes::TryGetError> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<bytes::TryGetError> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<bytes::TryGetError>
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&DAT_00af6e78);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 009d2fe4  FUN_009d2fe4 =====

void FUN_009d2fe4(void *param_1,long param_2)

{
  undefined1 uStack_11;
  
  if (-1 < param_2) {
    free(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0037d684,0x2b,&uStack_11,&DAT_00af6c78,
             &PTR_s__root__cargo_registry_src_index__00af6e40);
}


// ===== 009d3020  bytes::panic_advance =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::panic_advance */

void __rustcall bytes::panic_advance(long param_1)

{
  long local_30;
  undefined *puStack_28;
  long local_20;
  undefined *puStack_18;
  
  local_30 = param_1 + 8;
  puStack_18 = PTR_fmt_00b00c10;
  puStack_28 = PTR_fmt_00b00c10;
  local_20 = param_1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b038c,&local_30,&PTR_s__root__cargo_registry_src_index__00af6c48);
}


// ===== 009d3058  bytes::panic_does_not_fit =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::panic_does_not_fit */

void __rustcall bytes::panic_does_not_fit(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined8 *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_40;
  puStack_28 = PTR_fmt_00b00c10;
  local_20 = &uStack_38;
  puStack_18 = PTR_fmt_00b00c10;
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a4eb9,&local_30,&PTR_s__root__cargo_registry_src_index__00af6c60);
}


// ===== 009d3098  FUN_009d3098 =====

void FUN_009d3098(void)

{
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 009d30a4  <bytes::bytes::bytes::bytes::Bytes>::try_into_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::bytes::bytes::Bytes>::try_into_mut */

void __rustcall <bytes::bytes::bytes::bytes::Bytes>::try_into_mut(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
                    /* try { // try from 009d30cc to 009d30d3 has its CatchHandler @ 009d313c */
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2 + 3);
  if ((uVar1 & 1) != 0) {
    lStack_38 = param_2[3];
    (**(code **)(*param_2 + 0x10))(param_1 + 1,&lStack_38,param_2[1],param_2[2]);
    *param_1 = 0;
    return;
  }
  lVar2 = *param_2;
  lVar4 = param_2[3];
  lVar3 = param_2[2];
  param_1[2] = param_2[1];
  param_1[1] = lVar2;
  param_1[4] = lVar4;
  param_1[3] = lVar3;
  *param_1 = 1;
  return;
}


// ===== 009d3160  <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice */

void __rustcall
<bytes::bytes::bytes::bytes::Bytes>::copy_from_slice
          (undefined8 param_1,void *param_2,size_t param_3)

{
  size_t local_48;
  undefined1 *puStack_40;
  size_t local_38;
  
  if (param_3 == 0) {
    local_38 = 0;
    local_48 = 0;
    puStack_40 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_40 = (undefined1 *)FUN_004b25a4(param_3,1);
    if (puStack_40 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    local_48 = param_3;
    memcpy(puStack_40,param_2,param_3);
    local_38 = param_3;
  }
  <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(param_1,&local_48);
  return;
}


// ===== 009d31e8  <bytes::bytes::bytes::bytes::Bytes>::split_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::bytes::bytes::Bytes>::split_to */

void __rustcall
<bytes::bytes::bytes::bytes::Bytes>::split_to(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_58;
  ulong *local_50;
  code *pcStack_48;
  ulong *local_40;
  code *pcStack_38;
  ulong local_18;
  
  local_18 = param_2[2];
  if (param_3 == local_18) {
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    lVar3 = param_2[1];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    *param_2 = &PTR_FUN_00af6c20;
    param_2[1] = lVar3 + param_3;
    param_2[2] = 0;
    param_2[3] = 0;
    return;
  }
  if (param_3 != 0) {
    local_58 = param_3;
    if (param_3 <= local_18) {
      (**(code **)*param_2)(param_2 + 3,param_2[1]);
      lVar3 = param_2[1];
      lVar1 = param_2[2];
      param_1[2] = param_3;
      param_2[1] = lVar3 + param_3;
      param_2[2] = lVar1 - param_3;
      return;
    }
    local_50 = &local_58;
    pcStack_48 = FUN_009d4f1c;
    local_40 = &local_18;
    pcStack_38 = FUN_009d4f1c;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b573e,&local_50,&PTR_s__root__cargo_registry_src_index__00af6c98);
  }
  uVar2 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00af6c20;
  param_1[1] = uVar2;
  return;
}


// ===== 009d32f4  <bytes::bytes::bytes::bytes::Bytes>::is_unique =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::bytes::bytes::Bytes>::is_unique */

void __rustcall <bytes::bytes::bytes::bytes::Bytes>::is_unique(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d32fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1 + 3);
  return;
}


// ===== 009d3300  <bytes::bytes::bytes::bytes::Bytes>::slice_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::bytes::bytes::Bytes>::slice_ref */

void __rustcall
<bytes::bytes::bytes::bytes::Bytes>::slice_ref
          (undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong local_90;
  ulong uStack_88;
  ulong *local_80;
  code *pcStack_78;
  ulong *local_70;
  code *pcStack_68;
  ulong *local_60;
  code *pcStack_58;
  ulong *local_50;
  undefined *puStack_48;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  local_70 = &local_90;
  if (param_4 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_FUN_00af6c20;
    param_1[1] = 1;
    return;
  }
  local_18 = param_2[1];
  local_90 = param_2[2];
  uVar1 = param_3 - local_18;
  uStack_88 = param_4;
  if (param_3 < local_18) {
    local_80 = &local_38;
    pcStack_78 = FUN_009d503c;
    local_70 = &local_18;
    pcStack_68 = FUN_009d503c;
    local_38 = param_3;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ac0a1,&local_80,&PTR_s__root__cargo_registry_src_index__00af6cb0);
  }
  if (local_90 + local_18 < param_4 + param_3) {
    local_80 = &local_38;
    pcStack_78 = FUN_009d503c;
    pcStack_68 = (code *)PTR_fmt_00b00c10;
    local_60 = &local_18;
    pcStack_58 = FUN_009d503c;
    local_50 = &uStack_88;
    puStack_48 = PTR_fmt_00b00c10;
    local_38 = local_18;
    local_18 = param_3;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ada6d,&local_80,&PTR_s__root__cargo_registry_src_index__00af6cc8);
  }
  local_18 = uVar1 + param_4;
  local_40 = local_90;
  local_38 = uVar1;
  if (!CARRY8(uVar1,param_4)) {
    if (local_18 <= local_90) {
      (**(code **)*param_2)(param_2 + 3);
      param_1[1] = param_1[1] + uVar1;
      param_1[2] = param_4;
      return;
    }
    local_80 = &local_18;
    pcStack_78 = FUN_009d4f1c;
    local_70 = &local_40;
    pcStack_68 = FUN_009d4f1c;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b1a40,&local_80,&PTR_s__root__cargo_registry_src_index__00af6c08);
  }
  local_80 = &local_38;
  pcStack_78 = FUN_009d4f1c;
  local_70 = &local_18;
  pcStack_68 = FUN_009d4f1c;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002bafe5,&local_80,&PTR_s__root__cargo_registry_src_index__00af6bf0);
}


// ===== 009d3498  <bytes::bytes::bytes::bytes::Bytes>::split_off =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::bytes::bytes::Bytes>::split_off */

void __rustcall
<bytes::bytes::bytes::bytes::Bytes>::split_off
          (undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_58;
  ulong *local_50;
  code *pcStack_48;
  ulong *local_40;
  code *pcStack_38;
  ulong local_18;
  
  local_18 = param_2[2];
  if (param_3 == local_18) {
    lVar2 = param_2[1];
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_FUN_00af6c20;
    param_1[1] = lVar2 + param_3;
    return;
  }
  if (param_3 != 0) {
    local_58 = param_3;
    if (param_3 <= local_18) {
      (**(code **)*param_2)(param_2 + 3,param_2[1]);
      lVar2 = param_1[1];
      lVar1 = param_1[2];
      param_2[2] = param_3;
      param_1[1] = lVar2 + param_3;
      param_1[2] = lVar1 - param_3;
      return;
    }
    local_50 = &local_58;
    pcStack_48 = FUN_009d4f1c;
    local_40 = &local_18;
    pcStack_38 = FUN_009d4f1c;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b8e2f,&local_50,&PTR_s__root__cargo_registry_src_index__00af6ce0);
  }
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *param_2 = &PTR_FUN_00af6c20;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}


// ===== 009d35a0  bytes::bytes::owned_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::owned_drop */

void __rustcall bytes::bytes::owned_drop(undefined8 *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x009d35c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar3[1])();
    return;
  }
  return;
}


// ===== 009d35c8  bytes::bytes::owned_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::owned_clone */

void __rustcall
bytes::bytes::owned_clone
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar4) {
    param_1[2] = param_4;
    param_1[3] = plVar3;
    *param_1 = PTR_OWNED_VTABLE_00b01170;
    param_1[1] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d3098();
}


// ===== 009d3604  FUN_009d3604 =====

void FUN_009d3604(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_21;
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = param_1 + 2;
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
    if (-1 < (long)param_1[1]) {
      free((void *)*param_1);
      free(param_1);
      return;
    }
                    /* try { // try from 009d3678 to 009d369b has its CatchHandler @ 009d36a0 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0037d684,0x2b,&uStack_21,&DAT_00af6c78,
               &PTR_s__root__cargo_registry_src_index__00af6e40);
  }
  return;
}


// ===== 009d36bc  FUN_009d36bc =====

void FUN_009d36bc(void)

{
  return;
}


// ===== 009d36c0  bytes::bytes::owned_to_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::owned_to_mut */

void __rustcall
bytes::bytes::owned_to_mut(undefined8 *param_1,undefined8 *param_2,void *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *__dest;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((long)param_4 < 0) {
    uVar6 = 0;
LAB_009d36e0:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,param_4);
  }
  if (param_4 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    __dest = (undefined1 *)FUN_004b25a4(param_4,1);
    if (__dest == (undefined1 *)0x0) goto LAB_009d36e0;
    memcpy(__dest,param_3,param_4);
  }
  plVar3 = (long *)*param_2;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
                    /* try { // try from 009d3750 to 009d3753 has its CatchHandler @ 009d3794 */
    (*(code *)plVar3[1])();
  }
  *param_1 = __dest;
  param_1[1] = param_4;
  uVar5 = 0x40 - LZCOUNT(param_4 >> 10);
  if (6 < uVar5) {
    uVar5 = 7;
  }
  param_1[2] = param_4;
  param_1[3] = uVar5 << 2 | 1;
  return;
}


// ===== 009d37b4  bytes::bytes::owned_to_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::owned_to_vec */

void __rustcall
bytes::bytes::owned_to_vec(size_t *param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *__dest;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((long)param_4 < 0) {
    uVar5 = 0;
LAB_009d37d4:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar5,param_4);
  }
  if (param_4 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar5 = 1;
    __dest = (undefined1 *)FUN_004b25a4(param_4,1);
    if (__dest == (undefined1 *)0x0) goto LAB_009d37d4;
    memcpy(__dest,param_3,param_4);
  }
  plVar3 = (long *)*param_2;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
                    /* try { // try from 009d3844 to 009d3847 has its CatchHandler @ 009d3864 */
    (*(code *)plVar3[1])();
  }
  *param_1 = param_4;
  param_1[1] = (size_t)__dest;
  param_1[2] = param_4;
  return;
}


// ===== 009d3884  FUN_009d3884 =====

void FUN_009d3884(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_2;
  plVar1 = (long *)(lVar4 + 0x10);
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
    param_1[2] = param_4;
    param_1[3] = lVar4;
    *param_1 = &PTR_FUN_00af6d20;
    param_1[1] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d3098();
}


// ===== 009d38c4  FUN_009d38c4 =====

void FUN_009d38c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00af6c20;
  param_1[1] = param_3;
  return;
}


// ===== 009d38d8  FUN_009d38d8 =====

void FUN_009d38d8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009d3b88(param_1,*param_2,param_3,param_4);
  return;
}


// ===== 009d38f0  FUN_009d38f0 =====

void FUN_009d38f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009d3d60(param_1,*param_2,param_3,param_4);
  return;
}


// ===== 009d3908  bytes::bytes::static_to_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::static_to_mut */

void __rustcall
bytes::bytes::static_to_mut(undefined8 *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  undefined1 *__dest;
  ulong uVar1;
  
  if (param_4 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_4,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_4);
    }
    memcpy(__dest,param_3,param_4);
  }
  *param_1 = __dest;
  param_1[1] = param_4;
  uVar1 = 0x40 - LZCOUNT(param_4 >> 10);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  param_1[2] = param_4;
  param_1[3] = uVar1 << 2 | 1;
  return;
}


// ===== 009d399c  bytes::bytes::static_to_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::static_to_vec */

void __rustcall
bytes::bytes::static_to_vec(size_t *param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  void *__dest;
  undefined8 uVar1;
  
  if ((long)param_4 < 0) {
    uVar1 = 0;
  }
  else {
    if (param_4 == 0) {
      param_1[2] = 0;
      *param_1 = 0;
      param_1[1] = 1;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    __dest = (void *)FUN_004b25a4(param_4,1);
    if (__dest != (void *)0x0) {
      *param_1 = param_4;
      param_1[1] = (size_t)__dest;
      memcpy(__dest,param_3,param_4);
      param_1[2] = param_4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar1,param_4);
}


// ===== 009d3a28  FUN_009d3a28 =====

bool FUN_009d3a28(long *param_1)

{
  return *(long *)(*param_1 + 0x10) == 1;
}


// ===== 009d3a3c  FUN_009d3a3c =====

undefined8 FUN_009d3a3c(void)

{
  return 0;
}


// ===== 009d3a44  FUN_009d3a44 =====

void FUN_009d3a44(undefined8 *param_1,long *param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *__ptr;
  long lVar4;
  long lVar5;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __ptr = (long *)FUN_004b25a4(0x18,8);
  if (__ptr == (long *)0x0) {
                    /* try { // try from 009d3ae4 to 009d3aef has its CatchHandler @ 009d3b6c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  *__ptr = param_4;
  __ptr[1] = (param_5 - param_4) + param_6;
  __ptr[2] = 2;
  while (lVar4 = *param_2, lVar4 == param_3) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      param_1[2] = param_6;
      param_1[3] = __ptr;
      *param_1 = &PTR_FUN_00af6d20;
      param_1[1] = param_5;
      return;
    }
  }
  ClearExclusiveLocal();
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009d3b48 to 009d3b4b has its CatchHandler @ 009d3b50 */
    FUN_009d3098();
  }
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = lVar4;
  *param_1 = &PTR_FUN_00af6d20;
  free(__ptr);
  return;
}


// ===== 009d3b88  FUN_009d3b88 =====

void FUN_009d3b88(long *param_1,long *param_2,void *param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 *__dest;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long local_70;
  long lStack_68;
  ulong local_60;
  ulong uStack_58;
  undefined1 uStack_31;
  
  plVar1 = param_2 + 2;
  if (*plVar1 == 1) {
    lVar6 = *param_2;
    uVar2 = param_2[1];
    free(param_2);
    uVar5 = 0x40 - LZCOUNT(uVar2 >> 10);
    lStack_68 = (long)param_3 + (param_4 - lVar6);
    if (6 < uVar5) {
      uVar5 = 7;
    }
    uStack_58 = uVar5 << 2 | 1;
    local_70 = lVar6;
    local_60 = uVar2;
                    /* try { // try from 009d3c0c to 009d3c13 has its CatchHandler @ 009d3d48 */
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(&local_70);
    param_1[1] = lStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = local_60;
  }
  else {
    if ((long)param_4 < 0) {
      uVar7 = 0;
LAB_009d3c28:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar7,param_4);
    }
    if (param_4 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_4,1);
      if (__dest == (undefined1 *)0x0) goto LAB_009d3c28;
      memcpy(__dest,param_3,param_4);
    }
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
      if (param_2[1] < 0) {
                    /* try { // try from 009d3cf0 to 009d3d13 has its CatchHandler @ 009d3d18 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_0037d684,0x2b,&uStack_31,&DAT_00af6c78,
                   &PTR_s__root__cargo_registry_src_index__00af6e40);
      }
      free((void *)*param_2);
      free(param_2);
    }
    *param_1 = (long)__dest;
    param_1[1] = param_4;
    uVar5 = 0x40 - LZCOUNT(param_4 >> 10);
    if (6 < uVar5) {
      uVar5 = 7;
    }
    param_1[2] = param_4;
    param_1[3] = uVar5 << 2 | 1;
  }
  return;
}


// ===== 009d3d60  FUN_009d3d60 =====

void FUN_009d3d60(size_t *param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *__dest;
  long lVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined1 uStack_41;
  
  plVar1 = param_2 + 2;
  while (*plVar1 == 1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto code_r0x009d3d9c;
  }
  plVar1 = param_2 + 2;
  ClearExclusiveLocal();
  if ((long)param_4 < 0) {
    uVar6 = 0;
  }
  else {
    if (param_4 == 0) {
      __dest = &DAT_00000001;
      goto LAB_009d3e34;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    __dest = (undefined1 *)FUN_004b25a4(param_4,1);
    if (__dest != (undefined1 *)0x0) {
      memcpy(__dest,param_3,param_4);
LAB_009d3e34:
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      sVar5 = param_4;
      if (lVar4 + -1 == 0) {
        if ((long)param_2[1] < 0) {
                    /* try { // try from 009d3e84 to 009d3ea7 has its CatchHandler @ 009d3eac */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    (&DAT_0037d684,0x2b,&uStack_41,&DAT_00af6c78,
                     &PTR_s__root__cargo_registry_src_index__00af6e40);
        }
        free((void *)*param_2);
        free(param_2);
      }
      goto LAB_009d3dc0;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar6,param_4);
code_r0x009d3d9c:
  __dest = (undefined1 *)*param_2;
  sVar5 = param_2[1];
  free(param_2);
  memmove(__dest,param_3,param_4);
LAB_009d3dc0:
  *param_1 = sVar5;
  param_1[1] = (size_t)__dest;
  param_1[2] = param_4;
  return;
}


// ===== 009d3edc  bytes::bytes::promotable_odd_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_odd_drop */

void __rustcall bytes::bytes::promotable_odd_drop(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_21;
  
  param_1 = (undefined8 *)*param_1;
  if (((ulong)param_1 & 1) != 0) {
    if (-1 < (param_2 - (long)param_1) + param_3) {
      free(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0037d684,0x2b,&uStack_21,&DAT_00af6c78,
               &PTR_s__root__cargo_registry_src_index__00af6d48);
  }
  plVar1 = param_1 + 2;
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
    if (-1 < (long)param_1[1]) {
      free((void *)*param_1);
      free(param_1);
      return;
    }
                    /* try { // try from 009d3f9c to 009d3fbf has its CatchHandler @ 009d3fc4 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0037d684,0x2b,&uStack_21,&DAT_00af6c78,
               &PTR_s__root__cargo_registry_src_index__00af6e40);
  }
  return;
}


// ===== 009d3fe0  bytes::bytes::promotable_even_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_even_drop */

void __rustcall bytes::bytes::promotable_even_drop(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_21;
  
  param_1 = (undefined8 *)*param_1;
  if (((ulong)param_1 & 1) != 0) {
    if (-1 < (param_2 - (long)((ulong)param_1 & 0xfffffffffffffffe)) + param_3) {
      free((void *)((ulong)param_1 & 0xfffffffffffffffe));
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0037d684,0x2b,&uStack_21,&DAT_00af6c78,
               &PTR_s__root__cargo_registry_src_index__00af6d48);
  }
  plVar1 = param_1 + 2;
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
    if (-1 < (long)param_1[1]) {
      free((void *)*param_1);
      free(param_1);
      return;
    }
                    /* try { // try from 009d40a0 to 009d40c3 has its CatchHandler @ 009d40c8 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0037d684,0x2b,&uStack_21,&DAT_00af6c78,
               &PTR_s__root__cargo_registry_src_index__00af6e40);
  }
  return;
}


// ===== 009d40e4  bytes::bytes::promotable_is_unique =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_is_unique */

bool __rustcall bytes::bytes::promotable_is_unique(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    return *(long *)(*param_1 + 0x10) == 1;
  }
  return true;
}


// ===== 009d4104  bytes::bytes::promotable_odd_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_odd_clone */

void __rustcall
bytes::bytes::promotable_odd_clone
          (undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    FUN_009d3a44(param_1,param_2,uVar4,uVar4);
    return;
  }
  plVar1 = (long *)(uVar4 + 0x10);
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
    param_1[2] = param_4;
    param_1[3] = uVar4;
    *param_1 = &PTR_FUN_00af6d20;
    param_1[1] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d3098();
}


// ===== 009d4164  bytes::bytes::promotable_even_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_even_clone */

void __rustcall
bytes::bytes::promotable_even_clone
          (undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    FUN_009d3a44(param_1,param_2,uVar4,uVar4 & 0xfffffffffffffffe);
    return;
  }
  plVar1 = (long *)(uVar4 + 0x10);
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
    param_1[2] = param_4;
    param_1[3] = uVar4;
    *param_1 = &PTR_FUN_00af6d20;
    param_1[1] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d3098();
}


// ===== 009d41c4  bytes::bytes::promotable_odd_to_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_odd_to_mut */

void __rustcall
bytes::bytes::promotable_odd_to_mut(ulong *param_1,ulong *param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  ulong uStack_28;
  
  local_40 = *param_2;
  if ((local_40 & 1) == 0) {
    FUN_009d3b88(param_1);
    return;
  }
  uStack_38 = (param_3 - local_40) + param_4;
  uVar1 = 0x40 - LZCOUNT(uStack_38 >> 10);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  uStack_28 = uVar1 << 2 | 1;
  local_30 = uStack_38;
                    /* try { // try from 009d4230 to 009d423b has its CatchHandler @ 009d4254 */
  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(&local_40,param_3 - local_40);
  param_1[1] = uStack_38;
  *param_1 = local_40;
  param_1[3] = uStack_28;
  param_1[2] = local_30;
  return;
}


// ===== 009d426c  bytes::bytes::promotable_odd_to_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_odd_to_vec */

void __rustcall
bytes::bytes::promotable_odd_to_vec(long *param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  void *__dest;
  
  __dest = (void *)*param_2;
  if (((ulong)__dest & 1) == 0) {
    FUN_009d3d60(param_1,__dest,param_3,param_4);
    return;
  }
  memmove(__dest,param_3,param_4);
  *param_1 = (long)param_3 + (param_4 - (long)__dest);
  param_1[1] = (long)__dest;
  param_1[2] = param_4;
  return;
}


// ===== 009d42dc  bytes::bytes::promotable_even_to_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_even_to_mut */

void __rustcall
bytes::bytes::promotable_even_to_mut(ulong *param_1,ulong *param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  ulong uStack_28;
  
  if ((*param_2 & 1) == 0) {
    FUN_009d3b88(param_1);
    return;
  }
  local_40 = *param_2 & 0xfffffffffffffffe;
  uStack_38 = (param_3 - local_40) + param_4;
  uVar1 = 0x40 - LZCOUNT(uStack_38 >> 10);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  uStack_28 = uVar1 << 2 | 1;
  local_30 = uStack_38;
                    /* try { // try from 009d434c to 009d4353 has its CatchHandler @ 009d436c */
  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(&local_40);
  param_1[1] = uStack_38;
  *param_1 = local_40;
  param_1[3] = uStack_28;
  param_1[2] = local_30;
  return;
}


// ===== 009d4384  bytes::bytes::promotable_even_to_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes::promotable_even_to_vec */

void __rustcall
bytes::bytes::promotable_even_to_vec(long *param_1,ulong *param_2,void *param_3,size_t param_4)

{
  ulong uVar1;
  void *__dest;
  
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    FUN_009d3d60(param_1,uVar1,param_3,param_4);
    return;
  }
  __dest = (void *)(uVar1 & 0xfffffffffffffffe);
  memmove(__dest,param_3,param_4);
  *param_1 = (long)param_3 + (param_4 - (long)__dest);
  param_1[1] = (long)__dest;
  param_1[2] = param_4;
  return;
}


// ===== 009d43f4  <bytes::TryGetError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::TryGetError as core::fmt::Display>::fmt */

void __rustcall <bytes::TryGetError_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
  long local_30;
  undefined *puStack_28;
  long local_20;
  undefined *puStack_18;
  
  local_20 = param_1 + 8;
  puStack_28 = PTR_fmt_00b00c10;
  puStack_18 = PTR_fmt_00b00c10;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002b3936,&local_30);
  return;
}


// ===== 009d4434  <bytes::fmt::BytesRef_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::fmt::BytesRef as core::fmt::LowerHex>::fmt */

undefined8 __rustcall
<bytes::fmt::BytesRef_as_core::fmt::LowerHex>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined1 local_34 [4];
  
  puVar3 = PTR_fmt_00b00c20;
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar6 = (undefined1 *)*param_1;
    do {
      local_34[0] = *puVar6;
      puStack_58 = puVar3;
      local_60 = local_34;
      iVar4 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar4 != 0) {
        return 1;
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 009d44c8  <bytes::fmt::BytesRef_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::fmt::BytesRef as core::fmt::Debug>::fmt */

undefined8 __rustcall
<bytes::fmt::BytesRef_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  byte *pbVar8;
  code *pcVar9;
  byte local_78 [4];
  uint local_74;
  uint *local_70;
  undefined *local_68;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  pcVar9 = *(code **)(lVar1 + 0x18);
  uVar2 = (*pcVar9)(uVar3,&DAT_0037d6af,2);
  puVar6 = PTR_fmt_00b00ee0;
  if ((uVar2 & 1) == 0) {
    lVar7 = param_1[1];
    if (lVar7 != 0) {
      pbVar8 = (byte *)*param_1;
      do {
        local_78[0] = *pbVar8;
        uVar5 = (uint)local_78[0];
        if (local_78[0] < 0xd) {
          if (uVar5 == 0) {
            puVar4 = &DAT_0037d6b7;
          }
          else if (uVar5 == 9) {
            puVar4 = &DAT_0037d6b5;
          }
          else {
            puVar4 = &DAT_0037d6b1;
            if (uVar5 != 10) goto LAB_009d45e0;
          }
LAB_009d4554:
          uVar2 = (*pcVar9)(uVar3,puVar4,2);
        }
        else {
          if (local_78[0] == 0xd) {
            puVar4 = &DAT_0037d6b3;
            goto LAB_009d4554;
          }
          if ((local_78[0] == 0x22) || (local_78[0] == 0x5c)) {
            puVar4 = &DAT_002a78e3;
            local_68 = puVar6;
            local_74 = uVar5;
            local_70 = &local_74;
          }
          else {
LAB_009d45e0:
            if (uVar5 - 0x20 < 0x5f) {
              puVar4 = &DAT_002ab692;
              local_74 = uVar5;
              local_70 = &local_74;
              local_68 = puVar6;
            }
            else {
              puVar4 = &DAT_0037d6b9;
              local_68 = PTR_fmt_00b00c20;
              local_70 = (uint *)local_78;
            }
          }
          uVar2 = core::fmt::write(uVar3,lVar1,puVar4,&local_70);
        }
        if ((uVar2 & 1) != 0) goto LAB_009d450c;
        lVar7 = lVar7 + -1;
        pbVar8 = pbVar8 + 1;
      } while (lVar7 != 0);
    }
    uVar3 = (*pcVar9)(uVar3,&DAT_0037d6c4,1);
  }
  else {
LAB_009d450c:
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 009d467c  <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<bytes[d132ff9db1b623e3]::TryGetError>>::from =====

/* <core[bcece726f298455b]::io::error::Error as
   core[bcece726f298455b]::convert::From<bytes[d132ff9db1b623e3]::TryGetError>>::from */

void <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<bytes[d132ff9db1b623e3]::TryGetError>>
     ::from(undefined8 param_1,undefined8 param_2)

{
  <alloc::io::error::core::io::error::Error>::new<bytes::TryGetError>(0x2a,param_1,param_2);
  return;
}


// ===== 009d468c  <bytes::bytes::Bytes_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Bytes as core::fmt::LowerHex>::fmt */

undefined8 __rustcall
<bytes::bytes::Bytes_as_core::fmt::LowerHex>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined1 local_34 [4];
  
  puVar3 = PTR_fmt_00b00c20;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar6 = *(undefined1 **)(param_1 + 8);
    do {
      local_34[0] = *puVar6;
      puStack_58 = puVar3;
      local_60 = local_34;
      iVar4 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar4 != 0) {
        return 1;
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 009d4720  FUN_009d4720 =====

void FUN_009d4720(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_0037d6c5,0xb,&DAT_0037d6d0,9,param_1,&DAT_00af6dc8,&DAT_0037d6d9,9,
             &local_18,&DAT_00af6de8);
  return;
}


// ===== 009d4790  FUN_009d4790 =====

void FUN_009d4790(undefined8 *param_1,long param_2)

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


// ===== 009d47ac  <bytes::bytes::Bytes_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Bytes as core::fmt::UpperHex>::fmt */

undefined8 __rustcall
<bytes::bytes::Bytes_as_core::fmt::UpperHex>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined1 local_34 [4];
  
  puVar3 = PTR_fmt_00b00c28;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar6 = *(undefined1 **)(param_1 + 8);
    do {
      local_34[0] = *puVar6;
      puStack_58 = puVar3;
      local_60 = local_34;
      iVar4 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar4 != 0) {
        return 1;
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 009d4840  <bytes::bytes::Bytes_as_bytes::buf::buf_impl::Buf>::copy_to_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Bytes as bytes::buf::buf_impl::Buf>::copy_to_bytes */

void __rustcall
<bytes::bytes::Bytes_as_bytes::buf::buf_impl::Buf>::copy_to_bytes
          (undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_58;
  ulong *local_50;
  code *pcStack_48;
  ulong *local_40;
  code *pcStack_38;
  ulong local_18;
  
  local_18 = param_2[2];
  if (param_3 == local_18) {
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    lVar3 = param_2[1];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    *param_2 = &PTR_FUN_00af6c20;
    param_2[1] = lVar3 + param_3;
    param_2[2] = 0;
    param_2[3] = 0;
    return;
  }
  if (param_3 != 0) {
    local_58 = param_3;
    if (param_3 <= local_18) {
      (**(code **)*param_2)(param_2 + 3,param_2[1]);
      lVar3 = param_2[1];
      lVar1 = param_2[2];
      param_1[2] = param_3;
      param_2[1] = lVar3 + param_3;
      param_2[2] = lVar1 - param_3;
      return;
    }
    local_50 = &local_58;
    pcStack_48 = FUN_009d4f1c;
    local_40 = &local_18;
    pcStack_38 = FUN_009d4f1c;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b573e,&local_50,&PTR_s__root__cargo_registry_src_index__00af6c98);
  }
  uVar2 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00af6c20;
  param_1[1] = uVar2;
  return;
}


// ===== 009d494c  <bytes::bytes::Bytes_as_core::convert::From<bytes::bytes_mut::BytesMut>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Bytes as core::convert::From<bytes::bytes_mut::BytesMut>>::from */

void __rustcall
<bytes::bytes::Bytes_as_core::convert::From<bytes::bytes_mut::BytesMut>>::from
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 *puStack_80;
  ulong local_78;
  ulong *local_70;
  code *pcStack_68;
  ulong *local_60;
  code *pcStack_58;
  ulong local_38;
  
  uVar5 = param_2[3];
  if ((uVar5 & 1) == 0) {
    lVar2 = *param_2;
    param_1[2] = param_2[1];
    puVar4 = PTR_SHARED_VTABLE_00b00e28;
    param_1[3] = uVar5;
    *param_1 = puVar4;
    param_1[1] = lVar2;
  }
  else {
    lVar2 = param_2[1];
    lVar3 = param_2[2];
    uVar5 = uVar5 >> 5;
    puVar6 = (undefined8 *)(*param_2 - uVar5);
    uVar1 = lVar2 + uVar5;
    if (lVar2 == lVar3) {
      if (uVar1 == 0) {
        puVar6 = (undefined8 *)&DAT_00000001;
        puStack_80 = (undefined8 *)0x0;
        ppuVar7 = &PTR_FUN_00af6c20;
      }
      else {
        ppuVar7 = (undefined **)PTR_PROMOTABLE_ODD_VTABLE_00b01130;
        puStack_80 = puVar6;
        if (((ulong)puVar6 & 1) == 0) {
          ppuVar7 = (undefined **)PTR_PROMOTABLE_EVEN_VTABLE_00b01128;
          puStack_80 = (undefined8 *)((ulong)puVar6 | 1);
        }
      }
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puStack_80 = (undefined8 *)FUN_004b25a4(0x18,8);
      if (puStack_80 == (undefined8 *)0x0) {
                    /* try { // try from 009d4aa8 to 009d4ab3 has its CatchHandler @ 009d4ab8 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x18);
      }
      *puStack_80 = puVar6;
      puStack_80[1] = lVar3 + uVar5;
      puStack_80[2] = 1;
      ppuVar7 = &PTR_FUN_00af6d20;
    }
    if (uVar1 < uVar5) {
      local_70 = &local_78;
      pcStack_68 = FUN_009d4f1c;
      local_60 = &local_38;
      pcStack_58 = FUN_009d4f1c;
                    /* try { // try from 009d4a8c to 009d4aa3 has its CatchHandler @ 009d4ad8 */
      local_78 = uVar5;
      local_38 = uVar1;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_70,&PTR_s__root__cargo_registry_src_index__00af6e08);
    }
    param_1[1] = (undefined1 *)((long)puVar6 + uVar5);
    *param_1 = ppuVar7;
    param_1[3] = puStack_80;
    param_1[2] = lVar2;
  }
  return;
}


// ===== 009d4b00  <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Bytes as core::convert::From<alloc::vec::Vec<u8>>>::from */

void __rustcall
<bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from
          (undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = *param_2;
  if (uVar2 != uVar5) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (ulong *)FUN_004b25a4(0x18,8);
    if (puVar4 != (ulong *)0x0) {
      *puVar4 = uVar1;
      puVar4[1] = uVar5;
      puVar4[2] = 1;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = puVar4;
      *param_1 = &PTR_FUN_00af6d20;
      return;
    }
                    /* try { // try from 009d4be4 to 009d4bef has its CatchHandler @ 009d4bf4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  if (uVar2 != 0) {
    if ((uVar1 & 1) == 0) {
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      puVar3 = PTR_PROMOTABLE_EVEN_VTABLE_00b01128;
      param_1[3] = uVar1 | 1;
      *param_1 = puVar3;
      return;
    }
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    puVar3 = PTR_PROMOTABLE_ODD_VTABLE_00b01130;
    param_1[3] = uVar1;
    *param_1 = puVar3;
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 1;
  *param_1 = &PTR_FUN_00af6c20;
  return;
}


// ===== 009d4c10  <bytes::bytes::Bytes_as_core::convert::From<alloc::boxed::Box<[u8]>>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Bytes as core::convert::From<alloc::boxed::Box<[u8]>>>::from */

void __rustcall
<bytes::bytes::Bytes_as_core::convert::From<alloc::boxed::Box<[u8]>>>::from
          (undefined8 *param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 1;
    *param_1 = &PTR_FUN_00af6c20;
    return;
  }
  if ((param_2 & 1) == 0) {
    param_1[1] = param_2;
    param_1[2] = param_3;
    puVar1 = PTR_PROMOTABLE_EVEN_VTABLE_00b01128;
    param_1[3] = param_2 | 1;
    *param_1 = puVar1;
    return;
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  puVar1 = PTR_PROMOTABLE_ODD_VTABLE_00b01130;
  param_1[3] = param_2;
  *param_1 = puVar1;
  return;
}


// ===== 009d4c68  <bytes::bytes::Bytes_as_core::convert::From<alloc::string::String>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Bytes as core::convert::From<alloc::string::String>>::from */

void __rustcall <bytes::bytes::Bytes_as_core::convert::From<alloc::string::String>>::from(void)

{
  (*(code *)PTR_from_00b020e8)();
  return;
}


// ===== 009d4c6c  <alloc::vec::Vec<u8>as_core::convert::From<bytes::bytes::Bytes>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::Vec<u8> as core::convert::From<bytes::bytes::Bytes>>::from */

void __rustcall
<alloc::vec::Vec<u8>as_core::convert::From<bytes::bytes::Bytes>>::from(long *param_1)

{
  long lStack_18;
  
  lStack_18 = param_1[3];
  (**(code **)(*param_1 + 8))(&lStack_18,param_1[1],param_1[2]);
  return;
}


// ===== 009d4ca4  <bytes::bytes::Vtable_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Vtable as core::fmt::Debug>::fmt */

void __rustcall
<bytes::bytes::Vtable_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_0037d6e2,6);
  local_30 = *param_1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,&DAT_0037d6e8,5,&local_30,&DAT_00af6e20);
  local_28 = param_1[4];
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"drop",4,&local_28,&DAT_00af6e20);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009d4d34  <bytes::bytes::Shared_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Shared as core::ops::drop::Drop>::drop */

void __rustcall <bytes::bytes::Shared_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  if (-1 < (long)param_1[1]) {
    free((void *)*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0037d684,0x2b,&uStack_11,&DAT_00af6c78,
             &PTR_s__root__cargo_registry_src_index__00af6e40);
}


// ===== 009d4d78  <alloc::vec::Vec<u8>as_core::convert::From<bytes::bytes_mut::BytesMut>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::Vec<u8> as core::convert::From<bytes::bytes_mut::BytesMut>>::from */

void __rustcall
<alloc::vec::Vec<u8>as_core::convert::From<bytes::bytes_mut::BytesMut>>::from
          (size_t *param_1,long *param_2)

{
  size_t *psVar1;
  size_t sVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  size_t sVar6;
  size_t *__ptr;
  void *pvVar7;
  undefined8 uVar8;
  
  __ptr = (size_t *)param_2[3];
  if (((ulong)__ptr & 1) == 0) {
    psVar1 = __ptr + 4;
    if (*psVar1 != 1) {
      sVar6 = param_2[1];
      if (-1 < (long)sVar6) {
        if (sVar6 == 0) {
          param_1[2] = 0;
          *param_1 = 0;
          param_1[1] = 1;
        }
        else {
          pvVar7 = (void *)*param_2;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar8 = 1;
          pvVar5 = (void *)FUN_004b25a4(sVar6,1);
          if (pvVar5 == (void *)0x0) goto LAB_009d4e5c;
          *param_1 = sVar6;
          param_1[1] = (size_t)pvVar5;
          memcpy(pvVar5,pvVar7,sVar6);
          param_1[2] = sVar6;
        }
        do {
          sVar6 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar6 - 1 != 0) {
          return;
        }
        if (*__ptr != 0) {
          free((void *)__ptr[1]);
        }
        free(__ptr);
        return;
      }
      uVar8 = 0;
LAB_009d4e5c:
                    /* try { // try from 009d4e5c to 009d4e67 has its CatchHandler @ 009d4f04 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar8,sVar6);
    }
    sVar2 = *__ptr;
    pvVar7 = (void *)__ptr[1];
    *__ptr = 0;
    __ptr[1] = 1;
    __ptr[2] = 0;
    do {
      sVar6 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar6 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar6 - 1 == 0) {
      if (*__ptr != 0) {
        free((void *)__ptr[1]);
      }
      free(__ptr);
    }
    pvVar5 = (void *)*param_2;
    sVar6 = param_2[1];
    *param_1 = sVar2;
  }
  else {
    sVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    pvVar7 = (void *)((long)pvVar5 - ((ulong)__ptr >> 5));
    *param_1 = param_2[2] + ((ulong)__ptr >> 5);
  }
  param_1[1] = (size_t)pvVar7;
  memmove(pvVar7,pvVar5,sVar6);
  param_1[2] = sVar6;
  return;
}


// ===== 009d4f1c  FUN_009d4f1c =====

void FUN_009d4f1c(undefined8 param_1,long param_2)

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


// ===== 009d4f34  <bytes::buf::uninit_slice::UninitSlice_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::buf::uninit_slice::UninitSlice as core::fmt::Debug>::fmt */

void __rustcall
<bytes::buf::uninit_slice::UninitSlice_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_3,"UninitSlice[...]",0x10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 009d4f6c  <bytes::fmt::BytesRef_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::fmt::BytesRef as core::fmt::UpperHex>::fmt */

undefined8 __rustcall
<bytes::fmt::BytesRef_as_core::fmt::UpperHex>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined1 local_34 [4];
  
  puVar3 = PTR_fmt_00b00c28;
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar6 = (undefined1 *)*param_1;
    do {
      local_34[0] = *puVar6;
      puStack_58 = puVar3;
      local_60 = local_34;
      iVar4 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar4 != 0) {
        return 1;
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 009d5000  <bytes::bytes::Bytes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes::Bytes as core::fmt::Debug>::fmt */

void __rustcall <bytes::bytes::Bytes_as_core::fmt::Debug>::fmt(long param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(param_1 + 8);
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  <bytes::fmt::BytesRef_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 009d5028  FUN_009d5028 =====

void FUN_009d5028(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037d6ed,0xb);
  return;
}


// ===== 009d503c  FUN_009d503c =====

void FUN_009d503c(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1);
  return;
}


// ===== 009d5044  FUN_009d5044 =====

undefined1  [16] FUN_009d5044(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &DAT_0037d6f8;
  return auVar1;
}


// ===== 009d5054  FUN_009d5054 =====

undefined8 FUN_009d5054(void)

{
  return 0;
}


// ===== 009d505c  FUN_009d505c =====

void FUN_009d505c(void)

{
  return;
}


// ===== 009d5060  FUN_009d5060 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009d5060(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f640;
  param_1[1] = _UNK_0029f648;
  *param_1 = uVar1;
  return;
}


// ===== 009d5074  FUN_009d5074 =====

void FUN_009d5074(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *__ptr;
  
  __ptr = (long *)param_1[3];
  if (((ulong)__ptr & 1) == 0) {
    plVar1 = __ptr + 4;
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
      if (*__ptr != 0) {
        free((void *)__ptr[1]);
      }
      free(__ptr);
      return;
    }
  }
  else if (param_1[2] + ((ulong)__ptr >> 5) != 0) {
    free((void *)(*param_1 - ((ulong)__ptr >> 5)));
    return;
  }
  return;
}


// ===== 009d5108  FUN_009d5108 =====

void FUN_009d5108(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

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
  FUN_009d5cc8(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009d51a0  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner */

undefined8 __rustcall
<bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner
          (long *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *__ptr;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_58;
  long local_50;
  long local_48;
  
  __ptr = (ulong *)param_1[3];
  uVar4 = param_1[1];
  if (((ulong)__ptr & 1) == 0) {
    uVar5 = uVar4 + param_2;
    if (CARRY8(uVar4,param_2)) {
      if ((param_3 & 1) == 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002a1770,8,&PTR_s__root__cargo_registry_src_index__00af6ee8);
    }
    puVar1 = __ptr + 4;
    if (*puVar1 != 1) {
      if ((param_3 & 1) == 0) {
        return 0;
      }
      uVar11 = __ptr[3];
      uVar4 = 1L << ((ulong)((int)uVar11 + 9) & 0x3f);
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar11 != 0) {
        uVar5 = uVar4;
      }
      if ((long)uVar5 < 0) {
        uVar9 = 0;
LAB_009d52fc:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar9,uVar5);
      }
      if (uVar5 == 0) {
        local_50 = 1;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar9 = 1;
        local_50 = FUN_004b25a4(uVar5,1);
        if (local_50 == 0) goto LAB_009d52fc;
      }
      pvVar8 = (void *)*param_1;
      uVar4 = param_1[1];
      local_48 = 0;
      local_58 = uVar5;
      if (uVar5 < uVar4) {
        FUN_009d5108(&local_58,0,uVar4,1,1);
      }
      else {
        lVar6 = 0;
        if (uVar4 == 0) goto LAB_009d53ac;
      }
      lVar6 = local_48;
      memcpy((void *)(local_50 + local_48),pvVar8,uVar4);
LAB_009d53ac:
      local_48 = lVar6 + uVar4;
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        if (*__ptr != 0) {
          free((void *)__ptr[1]);
        }
        free(__ptr);
      }
      *param_1 = local_50;
      param_1[2] = local_58;
      param_1[3] = uVar11 << 2 | 1;
      return 1;
    }
    uVar7 = *__ptr;
    pvVar8 = (void *)__ptr[1];
    uVar10 = *param_1 - (long)pvVar8;
    uVar11 = uVar10 + uVar5;
    if (uVar11 <= uVar7) goto LAB_009d52b0;
    if ((uVar5 <= uVar7) && (uVar4 <= uVar10)) {
      memcpy(pvVar8,(void *)*param_1,uVar4);
      uVar4 = *__ptr;
      *param_1 = (long)pvVar8;
      param_1[2] = uVar4;
      return 1;
    }
    if ((param_3 & 1) == 0) {
      return 0;
    }
    if (uVar11 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed(&DAT_002a1770,8,&PTR_s__root__cargo_registry_src_index__00af6ed0);
    }
    uVar4 = uVar10 + uVar4;
    __ptr[2] = uVar4;
    if (uVar11 <= uVar7 * 2) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 - uVar4 < uVar11 - uVar4) {
      FUN_009d5108(__ptr,uVar4,uVar11 - uVar4,1,1);
      uVar7 = *__ptr;
      pvVar8 = (void *)__ptr[1];
    }
    local_50 = (long)pvVar8 + uVar10;
    uVar5 = uVar7 - uVar10;
  }
  else {
    uVar5 = (ulong)__ptr >> 5;
    uVar11 = param_1[2] + uVar5;
    if ((uVar4 <= uVar5) && (param_2 <= uVar11 - uVar4)) {
      pvVar8 = (void *)(*param_1 - uVar5);
      memcpy(pvVar8,(void *)*param_1,uVar4);
      *param_1 = (long)pvVar8;
      param_1[2] = uVar11;
      param_1[3] = (ulong)__ptr & 0x1f;
      return 1;
    }
    if ((param_3 & 1) == 0) {
      return 0;
    }
    local_50 = *param_1 - uVar5;
    local_48 = uVar5 + uVar4;
    local_58 = uVar11;
    if (param_1[2] - uVar4 < param_2) {
      FUN_009d5108(&local_58,local_48,param_2,1,1);
    }
    local_50 = local_50 + uVar5;
    uVar5 = local_58 - uVar5;
  }
  *param_1 = local_50;
LAB_009d52b0:
  param_1[2] = uVar5;
  return 1;
}


// ===== 009d54dc  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked */

void __rustcall
<bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar5 = param_1[3];
    if ((uVar5 & 1) != 0) {
      uVar6 = uVar5 >> 5;
      if (uVar6 + param_2 >> 0x3b == 0) {
        plVar3 = (long *)(uVar5 & 0x1f | (uVar6 + param_2) * 0x20);
      }
      else {
        lVar1 = param_1[1];
        lVar2 = param_1[2];
        lVar4 = *param_1;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar3 = (long *)FUN_004b25a4(0x28,8);
        if (plVar3 == (long *)0x0) {
                    /* try { // try from 009d55a8 to 009d55b3 has its CatchHandler @ 009d55b8 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x28);
        }
        *plVar3 = lVar2 + uVar6;
        plVar3[1] = lVar4 - uVar6;
        plVar3[2] = lVar1 + uVar6;
        plVar3[3] = uVar5 >> 2 & 7;
        plVar3[4] = 1;
      }
      param_1[3] = (long)plVar3;
    }
    lVar1 = 0;
    if (param_2 <= (ulong)param_1[1]) {
      lVar1 = param_1[1] - param_2;
    }
    *param_1 = *param_1 + param_2;
    param_1[1] = lVar1;
    param_1[2] = param_1[2] - param_2;
  }
  return;
}


// ===== 009d55d8  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split */

void __rustcall <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split(long param_1)

{
  split_to(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 009d55e0  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::resize =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::resize */

void __rustcall
<bytes::bytes_mut::bytes::bytes_mut::BytesMut>::resize(long *param_1,ulong param_2,int param_3)

{
  ulong __n;
  ulong uVar1;
  
  uVar1 = param_1[1];
  __n = param_2 - uVar1;
  if (uVar1 <= param_2) {
    if (__n == 0) {
      return;
    }
    if (param_1[2] - uVar1 < __n) {
      reserve_inner(param_1,__n,1);
      uVar1 = param_1[1];
    }
    memset((void *)(*param_1 + uVar1),param_3,__n);
  }
  param_1[1] = param_2;
  return;
}


// ===== 009d5660  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::zeroed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::zeroed */

void __rustcall <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::zeroed(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (-1 < (long)param_2) {
    if (param_2 == 0) {
      lVar1 = 1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      lVar1 = FUN_004b263c(param_2,1);
      if (lVar1 == 0) goto LAB_009d567c;
    }
    *param_1 = lVar1;
    param_1[1] = param_2;
    uVar2 = 0x40 - LZCOUNT(param_2 >> 10);
    if (6 < uVar2) {
      uVar2 = 7;
    }
    param_1[2] = param_2;
    param_1[3] = uVar2 << 2 | 1;
    return;
  }
  uVar3 = 0;
LAB_009d567c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_2);
}


// ===== 009d56f0  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::unsplit =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::unsplit */

void __rustcall <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::unsplit(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  void *__src;
  ulong __n;
  long lVar6;
  long lVar7;
  ulong local_60;
  ulong uStack_58;
  
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    plVar4 = (long *)param_1[3];
    if (((ulong)plVar4 & 1) == 0) {
      plVar1 = plVar4 + 4;
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
        if (*plVar4 != 0) {
          free((void *)plVar4[1]);
        }
        free(plVar4);
      }
    }
    else if (param_1[2] + ((ulong)plVar4 >> 5) != 0) {
      free((void *)(*param_1 - ((ulong)plVar4 >> 5)));
    }
    lVar6 = *param_2;
    lVar5 = param_2[3];
    lVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar6;
    param_1[3] = lVar5;
    param_1[2] = lVar7;
    return;
  }
  lVar7 = param_2[2];
  plVar4 = (long *)param_2[3];
  __src = (void *)*param_2;
  if (lVar7 == 0) {
    if (((ulong)plVar4 & 1) != 0) {
      if ((ulong)plVar4 >> 5 == 0) {
        return;
      }
      plVar4 = (long *)((long)__src - ((ulong)plVar4 >> 5));
      goto LAB_009d5914;
    }
    plVar1 = plVar4 + 4;
    do {
      lVar6 = *plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    lVar5 = *param_1;
    __n = param_2[1];
    if (((((void *)(lVar5 + lVar6) != __src) || (((ulong)param_1[3] & 1) != 0)) ||
        (((ulong)plVar4 & 1) != 0)) || ((long *)param_1[3] != plVar4)) {
      uStack_58 = param_1[2] - lVar6;
      if (uStack_58 < __n) {
                    /* try { // try from 009d57c4 to 009d57d3 has its CatchHandler @ 009d595c */
        reserve_inner(param_1,__n,1);
        lVar6 = param_1[1];
        lVar5 = *param_1;
        uStack_58 = param_1[2] - lVar6;
      }
      memcpy((void *)(lVar5 + lVar6),__src,__n);
      if (__n <= uStack_58) {
        param_1[1] = lVar6 + __n;
        if (((ulong)plVar4 & 1) == 0) {
          plVar1 = plVar4 + 4;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 != 0) {
            return;
          }
          if (*plVar4 != 0) {
            free((void *)plVar4[1]);
          }
        }
        else {
          if (((ulong)plVar4 >> 5) + lVar7 == 0) {
            return;
          }
          plVar4 = (long *)((long)__src - ((ulong)plVar4 >> 5));
        }
        free(plVar4);
        return;
      }
                    /* try { // try from 009d5950 to 009d5957 has its CatchHandler @ 009d595c */
      local_60 = __n;
                    /* WARNING: Subroutine does not return */
      bytes::panic_advance(&local_60);
    }
    param_1[1] = __n + lVar6;
    param_1[2] = param_1[2] + lVar7;
    plVar1 = plVar4 + 4;
    do {
      lVar6 = *plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar6 != 0) {
    return;
  }
  if (*plVar4 != 0) {
    free((void *)plVar4[1]);
  }
LAB_009d5914:
  free(plVar4);
  return;
}


// ===== 009d5970  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to */

void __rustcall
<bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to(long *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_80;
  ulong local_78;
  undefined1 *puStack_70;
  code *local_68;
  ulong *puStack_60;
  code *local_58;
  
  puStack_70 = (undefined1 *)&local_80;
  local_78 = param_2[1];
  local_80 = param_3;
  if (local_78 < param_3) {
    puStack_60 = &local_78;
    local_68 = FUN_009d6748;
    local_58 = FUN_009d6748;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b573e,&puStack_70,&PTR_s__root__cargo_registry_src_index__00af6f00);
  }
  uVar6 = param_2[3];
  if ((uVar6 & 1) == 0) {
    plVar3 = (long *)(uVar6 + 0x20);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d3098();
    }
    lVar4 = *param_2;
    plVar3 = (long *)param_2[3];
  }
  else {
    uVar7 = uVar6 >> 5;
    lVar4 = *param_2;
    lVar5 = param_2[2];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar3 = (long *)FUN_004b25a4(0x28,8);
    if (plVar3 == (long *)0x0) {
                    /* try { // try from 009d5aa4 to 009d5aaf has its CatchHandler @ 009d5ab4 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x28);
    }
    *plVar3 = lVar5 + uVar7;
    plVar3[1] = lVar4 - uVar7;
    param_2[3] = (long)plVar3;
    plVar3[2] = uVar7 + local_78;
    plVar3[3] = uVar6 >> 2 & 7;
    plVar3[4] = 2;
    lVar4 = *param_2;
  }
  if (param_3 != 0) {
    lVar5 = 0;
    if (param_3 <= local_78) {
      lVar5 = local_78 - param_3;
    }
    *param_2 = *param_2 + param_3;
    param_2[1] = lVar5;
    param_2[2] = param_2[2] - param_3;
  }
  *param_1 = lVar4;
  param_1[1] = param_3;
  param_1[2] = param_3;
  param_1[3] = (long)plVar3;
  return;
}


// ===== 009d5ad4  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_off =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_off */

void __rustcall
<bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_off(long *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong local_90;
  ulong local_88;
  undefined1 *local_80;
  code *pcStack_78;
  ulong *local_70;
  code *pcStack_68;
  
  local_80 = (undefined1 *)&local_90;
  local_88 = param_2[2];
  local_90 = param_3;
  if (local_88 < param_3) {
    pcStack_78 = FUN_009d6748;
    local_70 = &local_88;
    pcStack_68 = FUN_009d6748;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b8e2f,&local_80,&PTR_s__root__cargo_registry_src_index__00af6f18);
  }
  uVar7 = param_2[3];
  if ((uVar7 & 1) == 0) {
    plVar3 = (long *)(uVar7 + 0x20);
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d3098();
    }
    lVar6 = *param_2;
    uVar7 = param_2[1];
    lVar8 = param_2[2];
    plVar3 = (long *)param_2[3];
  }
  else {
    lVar6 = *param_2;
    lVar8 = param_2[1];
    uVar9 = uVar7 >> 5;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar3 = (long *)FUN_004b25a4(0x28,8);
    if (plVar3 == (long *)0x0) {
                    /* try { // try from 009d5c60 to 009d5c6b has its CatchHandler @ 009d5ca8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x28);
    }
    *plVar3 = uVar9 + local_88;
    plVar3[1] = lVar6 - uVar9;
    param_2[3] = (long)plVar3;
    plVar3[2] = lVar8 + uVar9;
    plVar3[3] = uVar7 >> 2 & 7;
    plVar3[4] = 2;
    lVar6 = *param_2;
    uVar7 = param_2[1];
    lVar8 = param_2[2];
    plVar3 = (long *)param_2[3];
  }
  uVar9 = uVar7;
  if (param_3 != 0) {
    if (((ulong)plVar3 & 1) != 0) {
      uVar9 = (ulong)plVar3 >> 5;
      if (uVar9 + param_3 >> 0x3b == 0) {
        plVar3 = (long *)((ulong)plVar3 & 0x1f | (uVar9 + param_3) * 0x20);
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar4 = (long *)FUN_004b25a4(0x28,8);
        if (plVar4 == (long *)0x0) {
                    /* try { // try from 009d5c70 to 009d5c7b has its CatchHandler @ 009d5c80 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x28);
        }
        *plVar4 = lVar8 + uVar9;
        plVar4[1] = lVar6 - uVar9;
        plVar4[2] = uVar7 + uVar9;
        plVar4[3] = (ulong)plVar3 >> 2 & 7;
        plVar4[4] = 1;
        plVar3 = plVar4;
      }
    }
    lVar6 = lVar6 + param_3;
    lVar8 = lVar8 - param_3;
    uVar9 = 0;
    if (param_3 <= uVar7) {
      uVar9 = uVar7 - param_3;
    }
  }
  uVar5 = param_2[1];
  *param_1 = lVar6;
  param_1[1] = uVar9;
  uVar7 = param_3;
  if (uVar5 <= param_3) {
    uVar7 = uVar5;
  }
  param_2[1] = uVar7;
  param_2[2] = param_3;
  param_1[2] = lVar8;
  param_1[3] = (long)plVar3;
  return;
}


// ===== 009d5cc8  FUN_009d5cc8 =====

void FUN_009d5cc8(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
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
  goto LAB_009d5d64;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_009d5d44;
    }
LAB_009d5d54:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_009d5d54;
LAB_009d5d44:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_009d5d64:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 009d5d7c  bytes::bytes_mut::shared_v_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes_mut::shared_v_drop */

void __rustcall bytes::bytes_mut::shared_v_drop(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *__ptr;
  
  __ptr = (long *)*param_1;
  plVar1 = __ptr + 4;
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
    if (*__ptr != 0) {
      free((void *)__ptr[1]);
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 009d5de4  bytes::bytes_mut::shared_v_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes_mut::shared_v_clone */

void __rustcall
bytes::bytes_mut::shared_v_clone
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_2;
  plVar1 = (long *)(lVar4 + 0x20);
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
    param_1[2] = param_4;
    param_1[3] = lVar4;
    *param_1 = PTR_SHARED_VTABLE_00b00e28;
    param_1[1] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d3098();
}


// ===== 009d5e24  bytes::bytes_mut::shared_v_to_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes_mut::shared_v_to_mut */

void __rustcall
bytes::bytes_mut::shared_v_to_mut
          (undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *__dest;
  long lVar4;
  ulong uVar5;
  long *__ptr;
  undefined8 uVar6;
  
  __ptr = (long *)*param_2;
  plVar1 = __ptr + 4;
  if (*plVar1 == 1) {
    uVar5 = (*__ptr - (long)param_3) + __ptr[1];
  }
  else {
    if ((long)param_4 < 0) {
      uVar6 = 0;
LAB_009d5e6c:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar6,param_4);
    }
    if (param_4 == 0) {
      param_3 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_4,1);
      if (__dest == (undefined1 *)0x0) goto LAB_009d5e6c;
      memcpy(__dest,param_3,param_4);
      param_3 = __dest;
    }
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
      if (*__ptr != 0) {
        free((void *)__ptr[1]);
      }
      free(__ptr);
    }
    uVar5 = 0x40 - LZCOUNT(param_4 >> 10);
    if (6 < uVar5) {
      uVar5 = 7;
    }
    __ptr = (long *)(uVar5 << 2 | 1);
    uVar5 = param_4;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = uVar5;
  param_1[3] = __ptr;
  return;
}


// ===== 009d5f54  bytes::bytes_mut::shared_v_to_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes_mut::shared_v_to_vec */

void __rustcall
bytes::bytes_mut::shared_v_to_vec(size_t *param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  size_t *psVar1;
  char cVar2;
  bool bVar3;
  undefined1 *__dest;
  size_t sVar4;
  size_t *__ptr;
  size_t sVar5;
  undefined8 uVar6;
  
  __ptr = (size_t *)*param_2;
  psVar1 = __ptr + 4;
  if (*psVar1 == 1) {
    sVar5 = *__ptr;
    __dest = (undefined1 *)__ptr[1];
    *__ptr = 0;
    __ptr[1] = 1;
    __ptr[2] = 0;
    do {
      sVar4 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar4 - 1 == 0) {
      if (*__ptr != 0) {
        free((void *)__ptr[1]);
      }
      free(__ptr);
    }
    memmove(__dest,param_3,param_4);
  }
  else {
    if ((long)param_4 < 0) {
      uVar6 = 0;
LAB_009d5ff8:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar6,param_4);
    }
    if (param_4 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_4,1);
      if (__dest == (undefined1 *)0x0) goto LAB_009d5ff8;
      memcpy(__dest,param_3,param_4);
    }
    do {
      sVar4 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    sVar5 = param_4;
    if (sVar4 - 1 == 0) {
      if (*__ptr != 0) {
        free((void *)__ptr[1]);
      }
      free(__ptr);
    }
  }
  *param_1 = sVar5;
  param_1[1] = (size_t)__dest;
  param_1[2] = param_4;
  return;
}


// ===== 009d60a0  bytes::bytes_mut::shared_v_is_unique =====

/* WARNING: Unknown calling convention: __rustcall */
/* bytes::bytes_mut::shared_v_is_unique */

bool __rustcall bytes::bytes_mut::shared_v_is_unique(long *param_1)

{
  return *(long *)(*param_1 + 0x20) == 1;
}


// ===== 009d60b4  <alloc::collections::vec_deque::VecDeque<u8>as_bytes::buf::buf_impl::Buf>::chunks_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::VecDeque<u8> as bytes::buf::buf_impl::Buf>::chunks_vectored */

undefined8 __rustcall
<alloc::collections::vec_deque::VecDeque<u8>as_bytes::buf::buf_impl::Buf>::chunks_vectored
          (ulong *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = 0;
  if ((param_3 != 0) && (uVar3 = param_1[3], uVar3 != 0)) {
    uVar5 = *param_1;
    uVar1 = param_1[1];
    uVar2 = 1;
    uVar4 = 0;
    if (uVar5 <= param_1[2]) {
      uVar4 = uVar5;
    }
    lVar6 = param_1[2] - uVar4;
    uVar4 = uVar5 - lVar6;
    if (uVar3 <= uVar4) {
      uVar5 = lVar6 + uVar3;
    }
    *param_2 = uVar1 + lVar6;
    param_2[1] = uVar5 - lVar6;
    if ((param_3 != 1) && (uVar4 <= uVar3 && uVar3 - uVar4 != 0)) {
      uVar2 = 2;
      param_2[2] = uVar1;
      param_2[3] = uVar3 - uVar4;
    }
  }
  return uVar2;
}


// ===== 009d6118  <alloc::collections::vec_deque::VecDeque<u8>as_bytes::buf::buf_impl::Buf>::chunk =====

/* WARNING: Removing unreachable block (ram,0x009d6168) */
/* WARNING: Removing unreachable block (ram,0x009d616c) */
/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::VecDeque<u8> as bytes::buf::buf_impl::Buf>::chunk */

undefined1  [16] __rustcall
<alloc::collections::vec_deque::VecDeque<u8>as_bytes::buf::buf_impl::Buf>::chunk(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = param_1[3];
  if (uVar6 == 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_1[1];
    return auVar8;
  }
  uVar4 = *param_1;
  uVar1 = 0;
  if (uVar4 <= param_1[2]) {
    uVar1 = uVar4;
  }
  lVar3 = param_1[2] - uVar1;
  lVar5 = uVar6 - (uVar4 - lVar3);
  if (uVar6 < uVar4 - lVar3 || lVar5 == 0) {
    lVar5 = 0;
    uVar4 = lVar3 + uVar6;
  }
  lVar2 = 0;
  if (uVar4 - lVar3 != 0) {
    lVar5 = uVar4 - lVar3;
    lVar2 = lVar3;
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = param_1[1] + lVar2;
  return auVar7;
}


// ===== 009d6178  <alloc::collections::vec_deque::VecDeque<u8>as_bytes::buf::buf_impl::Buf>::advance =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::VecDeque<u8> as bytes::buf::buf_impl::Buf>::advance */

void __rustcall
<alloc::collections::vec_deque::VecDeque<u8>as_bytes::buf::buf_impl::Buf>::advance
          (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1[3];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,param_2,uVar2,&PTR_s__nix_store_8006w282fgsx3273c878b_00af6db0);
  }
  if (uVar2 - param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar1 = 0;
  if (*param_1 <= param_1[2] + param_2) {
    uVar1 = *param_1;
  }
  param_1[2] = (param_1[2] + param_2) - uVar1;
  param_1[3] = uVar2 - param_2;
  return;
}


// ===== 009d61c8  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_impl::Buf>::copy_to_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as bytes::buf::buf_impl::Buf>::copy_to_bytes */

void __rustcall
<bytes::bytes_mut::BytesMut_as_bytes::buf::buf_impl::Buf>::copy_to_bytes(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long local_b0;
  long local_a8;
  long lStack_a0;
  ulong local_98;
  undefined **local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined8 *local_78;
  ulong local_70;
  ulong local_68;
  ulong *puStack_60;
  code *local_58;
  ulong *puStack_50;
  code *local_48;
  
  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to(&local_b0);
  if ((local_98 & 1) == 0) {
    param_1[2] = local_a8;
    puVar2 = PTR_SHARED_VTABLE_00b00e28;
    param_1[3] = local_98;
    *param_1 = puVar2;
    param_1[1] = local_b0;
    return;
  }
  uVar4 = local_98 >> 5;
  puVar3 = (undefined8 *)(local_b0 - uVar4);
  uVar1 = local_a8 + uVar4;
  puStack_88 = puVar3;
  local_80 = uVar1;
  if (local_a8 == lStack_a0) {
    if (uVar1 == 0) {
      local_80 = 0;
      local_78 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)&DAT_00000001;
      local_90 = &PTR_FUN_00af6c20;
    }
    else {
      local_90 = (undefined **)PTR_PROMOTABLE_ODD_VTABLE_00b01130;
      local_78 = puVar3;
      if (((ulong)puVar3 & 1) == 0) {
        local_90 = (undefined **)PTR_PROMOTABLE_EVEN_VTABLE_00b01128;
        local_78 = (undefined8 *)((ulong)puVar3 | 1);
      }
    }
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_78 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (local_78 == (undefined8 *)0x0) {
                    /* try { // try from 009d6330 to 009d633b has its CatchHandler @ 009d6340 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    *local_78 = puVar3;
    local_78[1] = lStack_a0 + uVar4;
    local_78[2] = 1;
    local_90 = &PTR_FUN_00af6d20;
  }
  if (uVar1 < uVar4) {
    puStack_60 = &local_70;
    puStack_50 = &local_68;
    local_58 = FUN_009d6748;
    local_48 = FUN_009d6748;
                    /* try { // try from 009d6314 to 009d632b has its CatchHandler @ 009d6358 */
    local_70 = uVar4;
    local_68 = uVar1;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002afeea,&puStack_60,&PTR_s__root__cargo_registry_src_index__00af6f30);
  }
  param_1[1] = (undefined1 *)((long)puStack_88 + uVar4);
  *param_1 = local_90;
  param_1[3] = local_78;
  param_1[2] = local_a8;
  return;
}


// ===== 009d6380  <bytes::bytes_mut::BytesMut_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as core::fmt::Debug>::fmt */

void __rustcall <bytes::bytes_mut::BytesMut_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *param_1;
  uStack_18 = param_1[1];
  <bytes::fmt::BytesRef_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 009d63a8  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as bytes::buf::buf_mut::BufMut>::put_bytes */

void __rustcall
<bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_bytes
          (long *param_1,int param_2,ulong param_3)

{
  long lVar1;
  ulong local_40;
  ulong uStack_38;
  
  lVar1 = param_1[1];
  uStack_38 = param_1[2] - lVar1;
  if (uStack_38 < param_3) {
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_1,param_3,1);
    lVar1 = param_1[1];
    uStack_38 = param_1[2] - lVar1;
  }
  memset((void *)(*param_1 + lVar1),param_2,param_3);
  if (param_3 <= uStack_38) {
    param_1[1] = lVar1 + param_3;
    return;
  }
  local_40 = param_3;
                    /* WARNING: Subroutine does not return */
  bytes::panic_advance(&local_40);
}


// ===== 009d6434  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as bytes::buf::buf_mut::BufMut>::put_slice */

void __rustcall
<bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
          (long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  ulong local_40;
  ulong uStack_38;
  
  lVar1 = param_1[1];
  uStack_38 = param_1[2] - lVar1;
  if (uStack_38 < param_3) {
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_1,param_3,1);
    lVar1 = param_1[1];
    uStack_38 = param_1[2] - lVar1;
  }
  memcpy((void *)(*param_1 + lVar1),param_2,param_3);
  if (param_3 <= uStack_38) {
    param_1[1] = lVar1 + param_3;
    return;
  }
  local_40 = param_3;
                    /* WARNING: Subroutine does not return */
  bytes::panic_advance(&local_40);
}


// ===== 009d64c0  <bytes::bytes_mut::BytesMut_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as core::fmt::LowerHex>::fmt */

undefined8 __rustcall
<bytes::bytes_mut::BytesMut_as_core::fmt::LowerHex>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined1 local_34 [4];
  
  puVar3 = PTR_fmt_00b00c20;
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar6 = (undefined1 *)*param_1;
    do {
      local_34[0] = *puVar6;
      puStack_58 = puVar3;
      local_60 = local_34;
      iVar4 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar4 != 0) {
        return 1;
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 009d6554  <bytes::bytes_mut::BytesMut_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as core::fmt::UpperHex>::fmt */

undefined8 __rustcall
<bytes::bytes_mut::BytesMut_as_core::fmt::UpperHex>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined1 local_34 [4];
  
  puVar3 = PTR_fmt_00b00c28;
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar6 = (undefined1 *)*param_1;
    do {
      local_34[0] = *puVar6;
      puStack_58 = puVar3;
      local_60 = local_34;
      iVar4 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar4 != 0) {
        return 1;
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 009d65e8  <bytes::bytes_mut::BytesMut_as_core::convert::From<&[u8]>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as core::convert::From<&[u8]>>::from */

void __rustcall
<bytes::bytes_mut::BytesMut_as_core::convert::From<&[u8]>>::from
          (undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined1 *__dest;
  ulong uVar1;
  
  if (param_3 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
  }
  *param_1 = __dest;
  param_1[1] = param_3;
  uVar1 = 0x40 - LZCOUNT(param_3 >> 10);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  param_1[2] = param_3;
  param_1[3] = uVar1 << 2 | 1;
  return;
}


// ===== 009d667c  <bytes::bytes_mut::BytesMut_as_core::convert::From<&str>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as core::convert::From<&str>>::from */

void __rustcall
<bytes::bytes_mut::BytesMut_as_core::convert::From<&str>>::from
          (undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined1 *__dest;
  ulong uVar1;
  
  if (param_3 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
  }
  *param_1 = __dest;
  param_1[1] = param_3;
  uVar1 = 0x40 - LZCOUNT(param_3 >> 10);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  param_1[2] = param_3;
  param_1[3] = uVar1 << 2 | 1;
  return;
}


// ===== 009d6710  <bytes::bytes_mut::BytesMut_as_core::convert::From<bytes::bytes::Bytes>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as core::convert::From<bytes::bytes::Bytes>>::from */

void __rustcall
<bytes::bytes_mut::BytesMut_as_core::convert::From<bytes::bytes::Bytes>>::from(long *param_1)

{
  long lStack_18;
  
  lStack_18 = param_1[3];
  (**(code **)(*param_1 + 0x10))(&lStack_18,param_1[1],param_1[2]);
  return;
}


// ===== 009d6748  FUN_009d6748 =====

void FUN_009d6748(undefined8 param_1,long param_2)

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


// ===== 009d6760  <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as core::ops::drop::Drop>::drop */

void __rustcall <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *__ptr;
  
  __ptr = (long *)param_1[3];
  if (((ulong)__ptr & 1) == 0) {
    plVar1 = __ptr + 4;
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
      if (*__ptr != 0) {
        free((void *)__ptr[1]);
      }
      free(__ptr);
      return;
    }
  }
  else if (param_1[2] + ((ulong)__ptr >> 5) != 0) {
    free((void *)(*param_1 - ((ulong)__ptr >> 5)));
    return;
  }
  return;
}


// ===== 009d67f4  <bytes::bytes_mut::BytesMut_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bytes::bytes_mut::BytesMut as core::clone::Clone>::clone */

void __rustcall
<bytes::bytes_mut::BytesMut_as_core::clone::Clone>::clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *__dest;
  ulong uVar1;
  ulong __n;
  void *__src;
  
  __n = param_2[1];
  if (__n == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __src = (void *)*param_2;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,__src,__n);
  }
  *param_1 = __dest;
  param_1[1] = __n;
  uVar1 = 0x40 - LZCOUNT(__n >> 10);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  param_1[2] = __n;
  param_1[3] = uVar1 << 2 | 1;
  return;
}


// ===== 009d6888  FUN_009d6888 =====

void FUN_009d6888(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009d68d0  <mio::poll::mio::poll::Poll>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <mio::poll::mio::poll::Poll>::new */

void __rustcall <mio::poll::mio::poll::Poll>::new(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = epoll_create1(0x80000);
  if (-1 < iVar1) {
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af6fa8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6fa8);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 009d6950  <mio::poll::mio::poll::Poll>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <mio::poll::mio::poll::Poll>::poll */

ulong __rustcall
<mio::poll::mio::poll::Poll>::poll(int *param_1,int *param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  iVar2 = *param_1;
  if (param_4 == 0xffffffff) {
    param_2[4] = 0;
    param_2[5] = 0;
    uVar4 = epoll_wait(iVar2,*(epoll_event **)(param_2 + 2),*param_2,-1);
  }
  else {
    uVar7 = (ulong)(param_4 + 999999);
    uVar4 = 0xffffffff;
    if (param_3 != 0xffffffffffffffff) {
      uVar7 = param_3 + 1;
      uVar4 = param_4 + 0xc474783f;
    }
    uVar1 = param_3;
    uVar3 = param_4 + 999999;
    if (999000000 < param_4) {
      uVar1 = uVar7;
      uVar3 = uVar4;
    }
    iVar6 = (int)param_3;
    if (uVar3 != 0xffffffff) {
      iVar6 = (int)uVar1;
      param_4 = uVar3;
    }
    param_2[4] = 0;
    param_2[5] = 0;
    uVar4 = epoll_wait(iVar2,*(epoll_event **)(param_2 + 2),*param_2,
                       iVar6 * 1000 + param_4 / 1000000);
  }
  if (-1 < (int)uVar4) {
    *(ulong *)(param_2 + 4) = (ulong)uVar4;
    return 0;
  }
  piVar5 = (int *)__errno();
  iVar2 = *piVar5;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00af6fa8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af6fa8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 009d6a68  <mio::net::udp::mio::net::udp::UdpSocket>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <mio::net::udp::mio::net::udp::UdpSocket>::local_addr */

void __rustcall <mio::net::udp::mio::net::udp::UdpSocket>::local_addr(void)

{
  (*(code *)PTR_local_addr_00b054c8)();
  return;
}


