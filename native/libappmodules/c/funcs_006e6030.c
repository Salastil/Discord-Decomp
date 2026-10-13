// ===== 006e6030  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::write_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::write_timeout */

void __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::write_timeout
          (undefined8 param_1,undefined4 *param_2)

{
  FUN_006d7d5c(param_1,*param_2,0x15);
  return;
}


// ===== 006e6040  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::recv_vectored_with_ancillary =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::recv_vectored_with_ancillary
    */

undefined1  [16] __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::recv_vectored_with_ancillary
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 local_a8;
  undefined7 uStack_a7;
  long local_a0;
  int local_98;
  ulong local_90;
  
  FUN_006f6c4c(&local_a8,*param_1,param_2,param_3,param_4);
  uVar2 = CONCAT71(uStack_a7,local_a8);
  if (local_98 == 2) {
    auVar3._8_8_ = uVar2;
    auVar3._0_8_ = 1;
    return auVar3;
  }
  if (local_98 != 0) {
    if ((1 < (local_90 & 3) - 2) && ((local_90 & 3) != 0)) {
      local_a0 = local_90 - 1;
      local_a8 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_a0,uVar2);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}


// ===== 006e60e4  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::send_vectored_with_ancillary =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::send_vectored_with_ancillary
    */

undefined1  [16] __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::send_vectored_with_ancillary
          (int *param_1,iovec *param_2,size_t param_3,undefined8 *param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  undefined8 uStack_6a;
  msghdr local_58;
  
  local_58.msg_name = &local_d0;
  local_58.msg_namelen = 0;
  local_58._12_4_ = 0;
  local_58.msg_control = (void *)0x0;
  local_58.msg_flags = 0;
  local_58._52_4_ = 0;
  local_58.msg_controllen = param_4[2];
  uStack_6a = 0;
  uStack_70 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_72 = 0;
  uStack_80 = 0;
  if (local_58.msg_controllen != 0) {
    local_58.msg_control = (void *)*param_4;
  }
  iVar1 = *param_1;
  *(undefined1 *)(param_4 + 3) = 0;
  local_58.msg_iov = param_2;
  local_58.msg_iovlen = param_3;
  sVar2 = sendmsg(iVar1,&local_58,0);
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


// ===== 006e61c8  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::pair =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::pair */

void __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::pair(undefined4 *param_1)

{
  int local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_006d7e7c(&local_30,1);
  if (local_30 == 1) {
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_24,local_28);
    *param_1 = 1;
    return;
  }
  *(ulong *)(param_1 + 1) = CONCAT44(local_28,uStack_2c);
  *param_1 = 0;
  return;
}


// ===== 006e6230  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::peek */

undefined1  [16] __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::peek
          (int *param_1,void *param_2,size_t param_3)

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


// ===== 006e62c4  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::peer_addr */

void __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::peer_addr
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
  iVar1 = getpeername(*param_2,&local_a0,&local_24);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    ppuVar3 = (undefined **)((long)iVar1 << 0x20 | 2);
LAB_006e635c:
    *(undefined ***)(param_1 + 2) = ppuVar3;
    *param_1 = 1;
    return;
  }
  if (local_24 == 0) {
    local_24 = 2;
  }
  else if (local_a0.sa_family != 1) {
    ppuVar3 = &PTR_DAT_009774f8;
    goto LAB_006e635c;
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


// ===== 006e63d8  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::peer_cred =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::peer_cred */

void __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::peer_cred
          (undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  socklen_t local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  local_34 = 0xc;
  local_28 = 1;
  local_30 = 0x100000001;
  iVar1 = getsockopt(*param_2,1,0x11,&local_30,&local_34);
  if ((iVar1 == 0) && (local_34 == 0xc)) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 1) = local_30;
    param_1[3] = local_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *param_1 = 2;
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 006e64a8  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::connect_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::connect_addr */

ulong __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::connect_addr
          (int *param_1,socklen_t *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = connect(*param_1,(sockaddr *)(param_2 + 1),*param_2);
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


// ===== 006e6530  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::send_to_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::send_to_addr */

undefined1  [16] __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::send_to_addr
          (int *param_1,void *param_2,size_t param_3,socklen_t *param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = sendto(*param_1,param_2,param_3,0x4000,(sockaddr *)(param_4 + 1),*param_4);
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


// ===== 006e65c4  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv_vectored_with_ancillary =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv_vectored_with_ancillary
    */

void __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::
recv_vectored_with_ancillary
          (undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_a8;
  byte local_a0;
  int local_98;
  undefined8 local_90;
  
  FUN_006f6c4c(&local_a8,*param_2,param_3,param_4,param_5);
  uVar1 = local_a8;
  if ((local_98 != 2) && (uVar1 = local_90, local_98 != 1)) {
    *param_1 = local_a8;
    *(byte *)(param_1 + 1) = local_a0 & 1;
    return;
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 2;
  return;
}


// ===== 006e6650  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv_vectored_with_ancillary_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv_vectored_with_ancillary_from
    */

void __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::
recv_vectored_with_ancillary_from
          (undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 local_118;
  byte local_110;
  int local_108;
  undefined4 local_104;
  undefined8 local_100;
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
  
  FUN_006f6c4c(&local_118,*param_2,param_3,param_4,param_5);
  if (local_108 == 2) {
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = local_118;
    return;
  }
  if (local_108 == 1) {
    *param_1 = local_100;
    *(undefined1 *)(param_1 + 1) = 2;
    return;
  }
  *param_1 = local_118;
  *(undefined4 *)((long)param_1 + 0xc) = local_104;
  param_1[2] = local_100;
  param_1[10] = uStack_c0;
  param_1[9] = local_c8;
  param_1[0xc] = uStack_b0;
  param_1[0xb] = local_b8;
  param_1[0xe] = uStack_a0;
  param_1[0xd] = local_a8;
  param_1[4] = uStack_f0;
  param_1[3] = local_f8;
  param_1[0xf] = local_98;
  param_1[6] = uStack_e0;
  param_1[5] = local_e8;
  param_1[8] = uStack_d0;
  param_1[7] = local_d8;
  *(byte *)(param_1 + 1) = local_110 & 1;
  return;
}


// ===== 006e6760  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::pair =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::pair */

void __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::pair
          (undefined4 *param_1)

{
  int local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_006d7e7c(&local_30,2);
  if (local_30 == 1) {
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_24,local_28);
    *param_1 = 1;
    return;
  }
  *(ulong *)(param_1 + 1) = CONCAT44(local_28,uStack_2c);
  *param_1 = 0;
  return;
}


// ===== 006e67c8  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv */

undefined1  [16] __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv
          (int *param_1,void *param_2,size_t param_3)

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


// ===== 006e685c  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::send =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::send */

undefined1  [16] __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::send
          (int *param_1,void *param_2,size_t param_3)

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


// ===== 006e68e4  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::unbound =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::unbound */

void __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::unbound
          (undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = socket(1,0x80002,0);
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


// ===== 006e6974  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::bind_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::bind_addr */

int * __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::bind_addr
          (undefined4 *param_1,socklen_t *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = socket(1,0x80002,0);
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
  uVar3 = bind(iVar2,(sockaddr *)(param_2 + 1),*param_2);
  if (uVar3 != 0xffffffff) {
    *param_1 = 0;
    param_1[1] = iVar2;
    return (int *)(ulong)uVar3;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006e6a78 to 006e6a83 has its CatchHandler @ 006e6a88 */
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  uVar3 = close(iVar2);
  return (int *)(ulong)uVar3;
}


// ===== 006e6a9c  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::peek_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::peek_from */

void __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::peek_from
          (undefined8 *param_1,int *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined2 uStack_ba;
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
  undefined6 uStack_58;
  undefined2 local_52;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  socklen_t local_34;
  
  local_34 = 0x6e;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_50 = 0;
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
  local_52 = 0;
  uStack_60 = 0;
  sVar2 = recvfrom(*param_2,param_3,param_4,2,&local_b0,&local_34);
  if (sVar2 < 0) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    ppuVar4 = (undefined **)((long)iVar1 << 0x20 | 2);
LAB_006e6b38:
    *param_1 = 1;
    param_1[1] = ppuVar4;
    return;
  }
  if (local_34 == 0) {
    local_34 = 2;
  }
  else if (local_b0.sa_family != 1) {
    ppuVar4 = &PTR_DAT_009774f8;
    goto LAB_006e6b38;
  }
  *(socklen_t *)(param_1 + 2) = local_34;
  *param_1 = 0;
  param_1[1] = sVar2;
  *(ulong *)((long)param_1 + 0x7c) = CONCAT26(uStack_ba,uStack_48);
  *(undefined8 *)((long)param_1 + 0x54) = local_70;
  *(undefined8 *)((long)param_1 + 0x4c) = uStack_78;
  *(undefined8 *)((long)param_1 + 100) = uStack_60;
  *(undefined8 *)((long)param_1 + 0x5c) = uStack_68;
  *(ulong *)((long)param_1 + 0x74) = CONCAT26(uStack_4a,uStack_50);
  *(ulong *)((long)param_1 + 0x6c) = CONCAT26(local_52,uStack_58);
  *(undefined8 *)((long)param_1 + 0x24) = uStack_a0;
  *(undefined8 *)((long)param_1 + 0x1c) = local_b0.sa_data._6_8_;
  *(ulong *)((long)param_1 + 0x14) =
       ((ulong)local_b0._0_8_ >> 0x10 & 0xffffffff) << 0x10 | local_b0._0_8_ & 0xffff000000000000 |
       local_b0._0_8_ & 0xffff;
  *(undefined8 *)((long)param_1 + 0x34) = local_90;
  *(undefined8 *)((long)param_1 + 0x2c) = uStack_98;
  *(undefined8 *)((long)param_1 + 0x44) = uStack_80;
  *(undefined8 *)((long)param_1 + 0x3c) = uStack_88;
  return;
}


// ===== 006e6bfc  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv_from */

void __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::recv_from
          (undefined8 *param_1,int *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined2 uStack_ba;
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
  undefined6 uStack_58;
  undefined2 local_52;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  socklen_t local_34;
  
  local_34 = 0x6e;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_50 = 0;
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
  local_52 = 0;
  uStack_60 = 0;
  sVar2 = recvfrom(*param_2,param_3,param_4,0,&local_b0,&local_34);
  if (sVar2 < 0) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    ppuVar4 = (undefined **)((long)iVar1 << 0x20 | 2);
LAB_006e6c98:
    *param_1 = 1;
    param_1[1] = ppuVar4;
    return;
  }
  if (local_34 == 0) {
    local_34 = 2;
  }
  else if (local_b0.sa_family != 1) {
    ppuVar4 = &PTR_DAT_009774f8;
    goto LAB_006e6c98;
  }
  *(socklen_t *)(param_1 + 2) = local_34;
  *param_1 = 0;
  param_1[1] = sVar2;
  *(ulong *)((long)param_1 + 0x7c) = CONCAT26(uStack_ba,uStack_48);
  *(undefined8 *)((long)param_1 + 0x54) = local_70;
  *(undefined8 *)((long)param_1 + 0x4c) = uStack_78;
  *(undefined8 *)((long)param_1 + 100) = uStack_60;
  *(undefined8 *)((long)param_1 + 0x5c) = uStack_68;
  *(ulong *)((long)param_1 + 0x74) = CONCAT26(uStack_4a,uStack_50);
  *(ulong *)((long)param_1 + 0x6c) = CONCAT26(local_52,uStack_58);
  *(undefined8 *)((long)param_1 + 0x24) = uStack_a0;
  *(undefined8 *)((long)param_1 + 0x1c) = local_b0.sa_data._6_8_;
  *(ulong *)((long)param_1 + 0x14) =
       ((ulong)local_b0._0_8_ >> 0x10 & 0xffffffff) << 0x10 | local_b0._0_8_ & 0xffff000000000000 |
       local_b0._0_8_ & 0xffff;
  *(undefined8 *)((long)param_1 + 0x34) = local_90;
  *(undefined8 *)((long)param_1 + 0x2c) = uStack_98;
  *(undefined8 *)((long)param_1 + 0x44) = uStack_80;
  *(undefined8 *)((long)param_1 + 0x3c) = uStack_88;
  return;
}


// ===== 006e6d5c  <std::os::unix::net::listener::std::os::unix::net::listener::UnixListener>::accept =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::listener::std::os::unix::net::listener::UnixListener>::accept */

ulong __rustcall
<std::os::unix::net::listener::std::os::unix::net::listener::UnixListener>::accept
          (uint *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong local_b0 [11];
  undefined6 uStack_58;
  undefined2 local_52;
  undefined6 uStack_50;
  undefined8 uStack_4a;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined8 local_28;
  
  local_34 = 0x6e;
  uStack_4a = 0;
  uStack_50 = 0;
  local_b0[1] = 0;
  local_b0[0] = 0;
  local_b0[3] = 0;
  local_b0[2] = 0;
  local_b0[5] = 0;
  local_b0[4] = 0;
  local_b0[7] = 0;
  local_b0[6] = 0;
  local_b0[9] = 0;
  local_b0[8] = 0;
  uStack_58 = 0;
  local_52 = 0;
  local_b0[10] = 0;
  uVar2 = FUN_006d7c74(&local_30,param_2,local_b0,&local_34);
  if (local_30 == 1) {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = local_28;
    return uVar2;
  }
  if (local_34 == 0) {
    local_34 = 2;
  }
  else if ((local_b0[0] & 0xffff) != 1) {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_009774f8;
    *param_1 = 0xffffffff;
    uVar1 = close(local_2c);
    return (ulong)uVar1;
  }
  puVar3 = (undefined8 *)((ulong)local_b0 | 8);
  *param_1 = local_2c;
  param_1[1] = local_34;
  uVar6 = puVar3[9];
  uVar5 = puVar3[8];
  uVar8 = puVar3[0xb];
  uVar7 = puVar3[10];
  uVar4 = *(undefined8 *)((long)puVar3 + 0x5e);
  *(ulong *)(param_1 + 2) = local_b0[0];
  *(undefined8 *)(param_1 + 0x16) = uVar6;
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  *(undefined8 *)(param_1 + 0x1a) = uVar8;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  uVar8 = puVar3[3];
  uVar7 = puVar3[2];
  *(undefined8 *)((long)param_1 + 0x6e) = uVar4;
  *(undefined8 *)(param_1 + 6) = uVar6;
  *(undefined8 *)(param_1 + 4) = uVar5;
  *(undefined8 *)(param_1 + 10) = uVar8;
  *(undefined8 *)(param_1 + 8) = uVar7;
  uVar4 = puVar3[4];
  uVar6 = puVar3[7];
  uVar5 = puVar3[6];
  *(undefined8 *)(param_1 + 0xe) = puVar3[5];
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  return (ulong)local_2c;
}


// ===== 006e6e54  <std::os::unix::net::listener::std::os::unix::net::listener::UnixListener>::bind_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::listener::std::os::unix::net::listener::UnixListener>::bind_addr */

int * __rustcall
<std::os::unix::net::listener::std::os::unix::net::listener::UnixListener>::bind_addr
          (undefined4 *param_1,socklen_t *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  
  iVar1 = socket(1,0x80001,0);
  if (iVar1 == -1) {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      piVar4 = (int *)core::io::error::os_functions::set_functions::set_functions_inner
                                (&PTR_FUN_00977078);
    }
    *param_1 = 1;
    *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
    return piVar4;
  }
  iVar2 = bind(iVar1,(sockaddr *)(param_2 + 1),*param_2);
  if (iVar2 == -1) {
    puVar5 = (uint *)__errno();
    uVar6 = (ulong)*puVar5;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006e6f34 to 006e6f3f has its CatchHandler @ 006e6fb0 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  else {
    uVar3 = listen(iVar1,0x80);
    if (uVar3 != 0xffffffff) {
      *param_1 = 0;
      param_1[1] = iVar1;
      return (int *)(ulong)uVar3;
    }
    puVar5 = (uint *)__errno();
    uVar6 = (ulong)*puVar5;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006e6fa0 to 006e6fab has its CatchHandler @ 006e6fb0 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  *(ulong *)(param_1 + 2) = uVar6 << 0x20 | 2;
  *param_1 = 1;
  uVar3 = close(iVar1);
  return (int *)(ulong)uVar3;
}


// ===== 006e6fc4  FUN_006e6fc4 =====

void FUN_006e6fc4(undefined4 *param_1,int *param_2)

{
  __pid_t __pid;
  int iVar1;
  undefined *puVar2;
  __pid_t _Var3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  int local_44;
  
  puVar2 = PTR_PTR_0099f738;
  if (*param_2 == 1) {
    local_44 = param_2[1];
  }
  else {
    __pid = param_2[2];
    local_44 = 0;
    while( true ) {
      _Var3 = waitpid(__pid,&local_44,0);
      if (_Var3 != -1) break;
      piVar4 = (int *)__errno();
      iVar1 = *piVar4;
      if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
                    /* try { // try from 006e703c to 006e704b has its CatchHandler @ 006e70b4 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      uVar6 = (**(code **)(lVar5 + 0x10))(iVar1);
      if ((uVar6 & 1) == 0) {
        *param_1 = 1;
        *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
        return;
      }
    }
    *param_2 = 1;
    param_2[1] = local_44;
  }
  *param_1 = 0;
  param_1[1] = local_44;
  return;
}


// ===== 006e70d4  FUN_006e70d4 =====

/* WARNING: Removing unreachable block (ram,0x006e7364) */

void FUN_006e70d4(ulong *param_1,long param_2)

{
  void *__src;
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long local_118;
  undefined8 local_110;
  long lStack_108;
  ulong local_100;
  undefined8 *puStack_f8;
  ulong local_f0;
  ulong local_e0;
  undefined8 *puStack_d8;
  ulong local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  ulong local_80;
  undefined8 *local_78;
  ulong local_70;
  
  if (((*(byte *)(param_2 + 0x78) & 1) == 0) && (*(long *)(param_2 + 0x70) == 0)) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  FUN_006e4c10(&local_118,param_2 + 0x60);
  uVar6 = 0;
  local_e0 = lStack_108 + 1;
  uVar8 = local_e0 * 8;
  if ((local_e0 >> 0x3d != 0) || (0x7ffffffffffffff8 < uVar8)) {
LAB_006e7184:
                    /* try { // try from 006e7184 to 006e718f has its CatchHandler @ 006e756c */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,uVar8);
  }
  if (uVar8 == 0) {
    local_e0 = 0;
    puStack_d8 = (undefined8 *)&DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 8;
    puStack_d8 = (undefined8 *)__rustc::__rust_alloc(uVar8,8);
    if (puStack_d8 == (undefined8 *)0x0) goto LAB_006e7184;
    local_d0 = 0;
    if (local_e0 != 0) goto LAB_006e71ac;
  }
                    /* try { // try from 006e71a0 to 006e71a7 has its CatchHandler @ 006e7498 */
  local_d0 = 0;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<*const_u8>>::grow_one(&local_e0);
LAB_006e71ac:
  local_f0 = 1;
  local_c8 = (ulong)(local_118 != 0);
  uStack_c0 = 0;
  uStack_a0 = 0;
  if (local_118 == 0) {
    lStack_108 = 0;
  }
  *puStack_d8 = 0;
  puStack_f8 = puStack_d8;
  local_100 = local_e0;
  local_b8 = local_118;
  uStack_b0 = local_110;
  local_98 = local_118;
  uStack_90 = local_110;
  local_a8 = local_c8;
  local_88 = lStack_108;
                    /* try { // try from 006e721c to 006e7227 has its CatchHandler @ 006e7544 */
  while (FUN_006eda68(&local_80,&local_c8), local_80 != 0) {
    lVar4 = local_80 + local_70 * 0x18;
    uVar8 = *(ulong *)(lVar4 + 8);
    if (uVar8 == 0xffffffffffffffff) break;
    uVar10 = *(ulong *)(lVar4 + 0x18);
    puStack_d8 = *(undefined8 **)(lVar4 + 0x10);
    lVar7 = *(long *)(lVar4 + 0x110);
    __src = *(void **)(lVar4 + 0x118);
    uVar5 = *(ulong *)(lVar4 + 0x120);
    uVar9 = uVar5 + 2;
    puVar2 = puStack_d8;
    uVar1 = uVar10;
    local_d0 = uVar10;
    if (uVar8 - uVar10 < uVar9) {
      local_e0 = uVar8;
      if (CARRY8(uVar10,uVar9)) {
        puVar2 = (undefined8 *)0x0;
        uVar3 = uVar8;
LAB_006e7478:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006e7478 to 006e747b has its CatchHandler @ 006e7514 */
        alloc::raw_vec::handle_error(puVar2,uVar3);
      }
      FUN_006df348(&local_80,uVar8,puStack_d8,uVar10 + uVar9,1,1);
      puVar2 = local_78;
      uVar3 = local_70;
      uVar8 = uVar10 + uVar9;
      uVar1 = local_d0;
      if (local_80 == 1) goto LAB_006e7478;
    }
    puStack_d8 = puVar2;
    local_e0 = uVar8;
    local_d0 = uVar10;
    if (local_e0 == uVar10) {
                    /* try { // try from 006e73a8 to 006e73e7 has its CatchHandler @ 006e74e0 */
      local_d0 = uVar1;
      FUN_006cecec(&local_e0,uVar10,1,1,1);
    }
    uVar8 = local_d0 + 1;
    *(undefined1 *)((long)puStack_d8 + local_d0) = 0x3d;
    local_d0 = uVar8;
    if (local_e0 - uVar8 < uVar5) {
      FUN_006cecec(&local_e0,uVar8,uVar5,1,1);
LAB_006e729c:
      uVar8 = local_d0;
      puVar2 = puStack_d8;
      uVar9 = local_e0;
      memcpy((void *)((long)puStack_d8 + local_d0),__src,uVar5);
    }
    else {
      puVar2 = puStack_d8;
      uVar9 = local_e0;
      if (uVar5 != 0) goto LAB_006e729c;
    }
    uVar8 = uVar8 + uVar5;
    local_d0 = uVar8;
    if (uVar8 < 0x10) {
      if (uVar8 != 0) {
        uVar5 = 0;
        do {
          if (*(char *)((long)puVar2 + uVar5) == '\0') goto LAB_006e7314;
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
      }
LAB_006e72e0:
                    /* try { // try from 006e72e8 to 006e72f3 has its CatchHandler @ 006e74e0 */
      local_80 = uVar9;
      local_78 = puVar2;
      local_70 = uVar8;
      puVar2 = (undefined8 *)
               <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked(&local_80);
LAB_006e7320:
      uVar8 = local_f0;
      if (local_f0 == local_100) {
                    /* try { // try from 006e7330 to 006e7337 has its CatchHandler @ 006e74ac */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<*const_u8>>::grow_one(&local_100);
      }
      local_f0 = uVar8 + 1;
      puStack_f8[uVar8] = 0;
      if (uVar8 == 0) {
                    /* try { // try from 006e7480 to 006e748b has its CatchHandler @ 006e74e8 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar8 - 1,local_f0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009776d8);
      }
      puStack_f8[uVar8 - 1] = puVar2;
    }
    else {
                    /* try { // try from 006e7300 to 006e730f has its CatchHandler @ 006e74c4 */
      uVar5 = core::slice::memchr::memchr_aligned(0,puVar2,uVar8);
      if ((uVar5 & 1) == 0) goto LAB_006e72e0;
LAB_006e7314:
      if (uVar9 != 0) {
        if (uVar9 != 0xffffffffffffffff) {
          __rustc::__rust_dealloc(puVar2,uVar9,1);
          goto LAB_006e7200;
        }
        goto LAB_006e7320;
      }
LAB_006e7200:
      *(undefined1 *)(param_2 + 0xc0) = 1;
    }
    if (lVar7 != 0) {
      __rustc::__rust_dealloc(__src,lVar7,1);
    }
  }
                    /* try { // try from 006e73fc to 006e7407 has its CatchHandler @ 006e7554 */
  while (FUN_006eda68(&local_80,&local_c8), local_80 != 0) {
    lVar4 = local_80 + local_70 * 0x18;
    if (*(long *)(lVar4 + 8) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar4 + 0x10),*(long *)(lVar4 + 8),1);
    }
    if (*(long *)(lVar4 + 0x110) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar4 + 0x118),*(long *)(lVar4 + 0x110),1);
    }
  }
  param_1[1] = (ulong)puStack_f8;
  *param_1 = local_100;
  param_1[2] = local_f0;
  return;
}


// ===== 006e75f0  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::arg =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::arg */

void __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::arg
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_60;
  undefined8 uStack_58;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_60,param_2,param_3);
  if (local_60 == -1) {
    lVar3 = param_1[2];
    uVar1 = uStack_58;
    if (lVar3 != *param_1) goto LAB_006e7690;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
                    /* try { // try from 006e7630 to 006e763f has its CatchHandler @ 006e76e8 */
    uVar1 = <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_box("<string-with-nul>",0x12);
    if (local_60 != 0) {
      __rustc::__rust_dealloc(uStack_58,local_60,1);
    }
    lVar3 = param_1[2];
    if (lVar3 != *param_1) goto LAB_006e7690;
  }
                    /* try { // try from 006e7688 to 006e768f has its CatchHandler @ 006e76d0 */
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<*const_u8>>::grow_one(param_1);
LAB_006e7690:
  lVar2 = param_1[1];
  param_1[2] = lVar3 + 1;
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (lVar3 + -1,lVar3 + 1,&PTR_s__rustc_48a229ceaefd4985c50990b14_009776d8);
  }
  *(undefined8 *)(lVar2 + (lVar3 + -1) * 8) = uVar1;
  return;
}


// ===== 006e7708  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::cwd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::cwd */

void __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::cwd
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_60,param_2,param_3);
  auVar3._8_8_ = local_50;
  auVar3._0_8_ = uStack_58;
  if (local_60 == -1) {
    puVar1 = *(undefined1 **)(param_1 + 0x90);
  }
  else {
    *(undefined1 *)(param_1 + 0xc0) = 1;
                    /* try { // try from 006e7748 to 006e7757 has its CatchHandler @ 006e77c0 */
    auVar3 = <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_box("<string-with-nul>",0x12);
    if (local_60 != 0) {
      __rustc::__rust_dealloc(uStack_58,local_60,1);
    }
    puVar1 = *(undefined1 **)(param_1 + 0x90);
  }
  if (puVar1 != (undefined1 *)0x0) {
    lVar2 = *(long *)(param_1 + 0x98);
    *puVar1 = 0;
    if (lVar2 != 0) {
      __rustc::__rust_dealloc(puVar1,lVar2,1);
    }
  }
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar3;
  return;
}


// ===== 006e77e0  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::new */

void __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::new
          (long *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  size_t __n;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__dest;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  long local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  if (param_3 == 0) {
    uVar2 = 0;
    <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
              (&local_70);
    lVar3 = local_70;
    puVar4 = puStack_68;
  }
  else if (*param_2 == '/') {
    uVar2 = 2;
    <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
              (&local_70);
    lVar3 = local_70;
    puVar4 = puStack_68;
  }
  else if (param_3 < 0x10) {
    lVar3 = param_3 - 1;
    do {
      uVar2 = *param_2 == '/';
      if ((bool)uVar2) break;
      bVar1 = lVar3 != 0;
      param_2 = param_2 + 1;
      lVar3 = lVar3 + -1;
    } while (bVar1);
    <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
              (&local_70);
    lVar3 = local_70;
    puVar4 = puStack_68;
  }
  else {
    lVar3 = core::slice::memchr::memchr_aligned(0x2f,param_2,param_3);
    uVar2 = lVar3 == 1;
    <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
              (&local_70,param_2,param_3);
    lVar3 = local_70;
    puVar4 = puStack_68;
  }
  if (lVar3 == -1) {
    auVar6._8_8_ = local_60;
    auVar6._0_8_ = puVar4;
    uVar5 = 0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined8 *)__rustc::__rust_alloc(0x10,8);
  }
  else {
                    /* try { // try from 006e7888 to 006e7897 has its CatchHandler @ 006e7a24 */
    auVar6 = <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_box("<string-with-nul>",0x12);
    if (lVar3 != 0) {
      __rustc::__rust_dealloc(puVar4,lVar3,1);
    }
    uVar5 = 1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined8 *)__rustc::__rust_alloc(0x10,8);
  }
  __n = auVar6._8_8_;
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 006e79ec to 006e79f7 has its CatchHandler @ 006e7a38 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(8,0x10);
  }
  __dest = (void *)0x1;
  *puVar4 = 0;
  local_70 = 2;
  local_60 = 1;
  puStack_68 = puVar4;
  if (__n != 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(__n,1);
    if (__dest == (void *)0x0) {
                    /* try { // try from 006e79fc to 006e7a07 has its CatchHandler @ 006e7a0c */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,auVar6._0_8_,__n);
  }
  *puVar4 = __dest;
  puVar4[1] = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[1] = (long)puStack_68;
  *param_1 = local_70;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar6;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0xc2) = uVar2;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x18) = uVar5;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0xc1) = 0;
  return;
}


// ===== 006e7a5c  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::stdin =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::stdin */

ulong __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::stdin
          (ulong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if (*(int *)(param_1 + 0x48) == 3) {
    uVar1 = close(*(int *)(param_1 + 0x4c));
    uVar2 = (ulong)uVar1;
  }
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  return uVar2;
}


// ===== 006e7aa0  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::chroot =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::chroot */

void __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::chroot
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_60,param_2,param_3);
  auVar3._8_8_ = local_50;
  auVar3._0_8_ = uStack_58;
  if (local_60 == -1) {
    puVar1 = *(undefined1 **)(param_1 + 0xa0);
  }
  else {
    *(undefined1 *)(param_1 + 0xc0) = 1;
                    /* try { // try from 006e7ae0 to 006e7aef has its CatchHandler @ 006e7b8c */
    auVar3 = <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_box("<string-with-nul>",0x12);
    if (local_60 != 0) {
      __rustc::__rust_dealloc(uStack_58,local_60,1);
    }
    puVar1 = *(undefined1 **)(param_1 + 0xa0);
  }
  if (puVar1 != (undefined1 *)0x0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    *puVar1 = 0;
    if (lVar2 != 0) {
      __rustc::__rust_dealloc(puVar1,lVar2,1);
    }
  }
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar3;
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  cwd(param_1,&DAT_0045b2ad,1);
  return;
}


// ===== 006e7bac  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::stderr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::stderr */

ulong __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::stderr
          (ulong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if (*(int *)(param_1 + 0x58) == 3) {
    uVar1 = close(*(int *)(param_1 + 0x5c));
    uVar2 = (ulong)uVar1;
  }
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  return uVar2;
}


// ===== 006e7bf0  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::stdout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::stdout */

ulong __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::stdout
          (ulong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if (*(int *)(param_1 + 0x50) == 3) {
    uVar1 = close(*(int *)(param_1 + 0x54));
    uVar2 = (ulong)uVar1;
  }
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  return uVar2;
}


// ===== 006e7c34  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::pre_exec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::pre_exec */

void __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::pre_exec
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == *(long *)(param_1 + 0x18)) {
                    /* try { // try from 006e7c60 to 006e7c63 has its CatchHandler @ 006e7c88 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap>>::
    grow_one();
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(long *)(param_1 + 0x28) = lVar2 + 1;
  return;
}


// ===== 006e7ca4  FUN_006e7ca4 =====

ulong FUN_006e7ca4(undefined4 *param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int local_70;
  uint local_6c;
  ulong local_68;
  
  iVar8 = *(int *)(param_2 + 0x50);
  iVar10 = *(int *)(param_2 + 0x58);
  iVar3 = param_3;
  if (param_5 == 0) {
    iVar3 = 1;
  }
  iVar11 = param_4;
  if (*(int *)(param_2 + 0x48) != -1) {
    iVar11 = *(int *)(param_2 + 0x4c);
    iVar3 = *(int *)(param_2 + 0x48);
  }
                    /* try { // try from 006e7cf4 to 006e7cff has its CatchHandler @ 006e7f30 */
  uVar7 = FUN_006d8cf0(&local_70,iVar3,iVar11,1);
  uVar12 = local_68;
  uVar4 = local_6c;
  if (local_70 == 1) {
    *param_1 = 1;
    *(ulong *)(param_1 + 2) = local_68;
  }
  else {
    iVar3 = param_3;
    if (iVar8 != -1) {
      iVar3 = iVar8;
    }
    uVar9 = local_68 >> 0x20;
    iVar11 = param_4;
    if (iVar8 != -1) {
      iVar11 = *(int *)(param_2 + 0x54);
    }
                    /* try { // try from 006e7d44 to 006e7d4f has its CatchHandler @ 006e7efc */
    uVar7 = FUN_006d8cf0(&local_70,iVar3,iVar11,0);
    uVar2 = local_68;
    uVar5 = local_6c;
    iVar3 = (int)(uVar12 >> 0x20);
    iVar8 = (int)uVar12;
    if (local_70 == 1) {
      *param_1 = 1;
      *(ulong *)(param_1 + 2) = local_68;
    }
    else {
      iVar11 = param_3;
      if (iVar10 != -1) {
        iVar11 = iVar10;
      }
      uVar12 = local_68 >> 0x20;
      iVar1 = param_4;
      if (iVar10 != -1) {
        iVar1 = *(int *)(param_2 + 0x5c);
      }
                    /* try { // try from 006e7dc8 to 006e7dd3 has its CatchHandler @ 006e7e90 */
      uVar7 = FUN_006d8cf0(&local_70,iVar11,iVar1,0);
      iVar10 = (int)uVar2;
      iVar11 = (int)(uVar2 >> 0x20);
      if (local_70 != 1) {
        param_1[4] = uVar4;
        param_1[5] = iVar8;
        param_1[6] = uVar5;
        param_1[7] = iVar10;
        *param_1 = 0;
        param_1[1] = iVar3;
        param_1[2] = iVar11;
        param_1[3] = (int)(local_68 >> 0x20);
        param_1[8] = local_6c;
        param_1[9] = (int)local_68;
        goto joined_r0x006e7e6c;
      }
      *param_1 = 1;
      *(ulong *)(param_1 + 2) = local_68;
      if (uVar12 != 0xffffffff) {
        uVar6 = close(iVar11);
        uVar7 = (ulong)uVar6;
      }
      if (1 < uVar5) {
        uVar5 = close(iVar10);
        uVar7 = (ulong)uVar5;
      }
    }
    if (uVar9 != 0xffffffff) {
      uVar5 = close(iVar3);
      uVar7 = (ulong)uVar5;
    }
    if (1 < uVar4) {
      uVar4 = close(iVar8);
      uVar7 = (ulong)uVar4;
    }
  }
joined_r0x006e7e6c:
  if (param_3 == 3) {
    uVar4 = close(param_4);
    return (ulong)uVar4;
  }
  return uVar7;
}


// ===== 006e7f40  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::set_arg_0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::std::sys::process::unix::common::Command>::set_arg_0 */

void __rustcall
<std::sys::process::unix::common::std::sys::process::unix::common::Command>::set_arg_0
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_60;
  undefined8 uStack_58;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_60,param_2,param_3);
  if (local_60 == -1) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar1 = uStack_58;
  }
  else {
    *(undefined1 *)(param_1 + 0xc0) = 1;
                    /* try { // try from 006e7f80 to 006e7f8f has its CatchHandler @ 006e8034 */
    uVar1 = <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_box("<string-with-nul>",0x12);
    if (local_60 != 0) {
      __rustc::__rust_dealloc(uStack_58,local_60,1);
    }
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    if (lVar3 + -1 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009776f0);
    }
    uVar2 = **(undefined8 **)(param_1 + 8);
    **(undefined8 **)(param_1 + 8) = uVar1;
    auVar4 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_raw(uVar2);
    *auVar4._0_8_ = 0;
    if (auVar4._8_8_ != 0) {
      __rustc::__rust_dealloc(auVar4._0_8_,auVar4._8_8_,1);
    }
    return;
  }
                    /* try { // try from 006e8008 to 006e802f has its CatchHandler @ 006e8054 */
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,lVar3 + -1,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977708);
}


// ===== 006e807c  <std::io::stdio::[k]::std::io::stdio::Stderr>::lock =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::[k]::std::io::stdio::Stderr>::lock */

long * __rustcall <std::io::stdio::[k]::std::io::stdio::Stderr>::lock(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  void *pvVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar4 = pthread_getspecific(__key);
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
  }
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)FUN_006d2020();
    if (pvVar4 != (void *)*plVar5) goto LAB_006e80f8;
  }
  else if (pvVar4 != (void *)*plVar5) {
LAB_006e80f8:
    plVar1 = plVar5 + 1;
    do {
      if ((int)*plVar1 != 0) {
        ClearExclusiveLocal();
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (plVar5 + 1);
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *plVar5 = (long)pvVar4;
    *(undefined4 *)((long)plVar5 + 0xc) = 1;
    return plVar5;
  }
  if (*(int *)((long)plVar5 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  *(int *)((long)plVar5 + 0xc) = *(int *)((long)plVar5 + 0xc) + 1;
  return plVar5;
}


// ===== 006e815c  <std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::send_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::send_to
    */

undefined1  [16] __rustcall
<std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::send_to
          (int *param_1,void *param_2,size_t param_3,short *param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  socklen_t __addr_len;
  short *psVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  sockaddr local_3c;
  undefined8 uStack_2c;
  uint local_24;
  
  if (*param_4 == 1) {
    local_24 = *(uint *)(param_4 + 0xc);
    psVar4 = param_4 + 10;
    uStack_2c = *(undefined8 *)(param_4 + 6);
    local_3c.sa_data._6_8_ = *(undefined8 *)(param_4 + 2);
    __addr_len = 0x1c;
    local_3c.sa_family = 10;
    local_3c.sa_data._0_2_ =
         (ushort)param_4[0xe] >> 8 | (ushort)(((ushort)param_4[0xe] & 0xff00ff) << 8);
  }
  else {
    local_3c.sa_data[6] = '\0';
    local_3c.sa_data[7] = '\0';
    local_3c.sa_data[8] = '\0';
    local_3c.sa_data[9] = '\0';
    local_3c.sa_data[10] = '\0';
    local_3c.sa_data[0xb] = '\0';
    local_3c.sa_data[0xc] = '\0';
    local_3c.sa_data[0xd] = '\0';
    uStack_2c = 0;
    local_24 = (uint)(ushort)param_4[3];
    psVar4 = param_4 + 1;
    __addr_len = 0x10;
    local_3c.sa_family = 2;
    local_3c.sa_data._0_2_ = (ushort)param_4[3] >> 8 | (ushort)((local_24 & 0xff00ff) << 8);
  }
  local_3c.sa_data._2_4_ = *(undefined4 *)psVar4;
  sVar2 = sendto(*param_1,param_2,param_3,0x4000,&local_3c,__addr_len);
  if (sVar2 != -1) {
    auVar5._1_7_ = 0;
    auVar5[0] = sVar2 == -1;
    auVar5._8_8_ = sVar2;
    return auVar5;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 006e8254  FUN_006e8254 =====

void FUN_006e8254(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  undefined1 extraout_w1_01;
  undefined1 extraout_w1_02;
  undefined1 extraout_w1_03;
  undefined1 extraout_w1_04;
  undefined1 extraout_w1_05;
  undefined1 extraout_w1_06;
  undefined1 extraout_w1_07;
  undefined1 extraout_w1_08;
  long lVar5;
  unkuint10 Var6;
  
  uVar3 = *(ushort *)(param_2 + 3);
  if (0x2130 < uVar3) {
    if (uVar3 == 0x2131) {
      lVar5 = *param_2;
      if (lVar5 < 5) {
        if (lVar5 == 2) {
          bVar2 = *(byte *)(param_2 + 1);
          *param_1 = 0x2d;
          param_1[1] = (ulong)bVar2;
          return;
        }
        if (lVar5 == 3) {
          uVar3 = *(ushort *)(param_2 + 1);
          *param_1 = 0x2d;
          param_1[1] = (ulong)uVar3;
          return;
        }
        if (lVar5 == 4) {
          uVar1 = *(uint *)(param_2 + 1);
          *param_1 = 0x2d;
          param_1[1] = (ulong)uVar1;
          return;
        }
      }
      else {
        if (lVar5 == 5) {
LAB_006e8ab4:
          lVar5 = param_2[1];
          *param_1 = 0x2d;
          param_1[1] = lVar5;
          return;
        }
        if (lVar5 == 6) {
          lVar5 = param_2[1];
          if (-1 < lVar5) {
            *param_1 = 0x2d;
            param_1[1] = lVar5;
            return;
          }
        }
        else if (lVar5 == 7) goto LAB_006e8ab4;
      }
      goto switchD_006e8290_caseD_3;
    }
    if (uVar3 == 0x2132) goto switchD_006e8290_caseD_74;
    if (uVar3 != 0x2133) goto switchD_006e8290_caseD_3;
switchD_006e8290_caseD_73:
    if (*param_2 == 10) {
      lVar5 = param_2[1];
      *param_1 = 0xb;
      param_1[1] = lVar5;
      return;
    }
    goto switchD_006e8290_caseD_3;
  }
  switch(uVar3) {
  case 2:
  case 0x19:
  case 0x2a:
  case 0x40:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4d:
    lVar5 = *param_2;
    if (lVar5 == 1) goto LAB_006e8afc;
LAB_006e82b8:
    if (lVar5 != 8) {
      if (lVar5 == 10) {
        lVar5 = param_2[1];
        *param_1 = 0x11;
        param_1[1] = lVar5;
        return;
      }
      break;
    }
    goto LAB_006e8afc;
  case 9:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_03;
      *param_1 = 0x2b;
      return;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
    lVar5 = *param_2;
    if (4 < lVar5) {
LAB_006e86ac:
      if (lVar5 < 7) goto LAB_006e86b4;
      if (lVar5 == 7) goto LAB_006e88f8;
      goto LAB_006e82a0;
    }
    if (lVar5 < 3) {
LAB_006e8ad4:
      if (lVar5 != 1) {
        if (lVar5 == 2) {
LAB_006e8ae4:
          bVar2 = *(byte *)(param_2 + 1);
          *param_1 = 7;
          param_1[1] = (ulong)bVar2;
          return;
        }
        break;
      }
      goto LAB_006e8afc;
    }
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    goto LAB_006e8b8c;
  case 0x10:
    if (*param_2 == 10) {
      lVar5 = param_2[1];
      *param_1 = 0x10;
      param_1[1] = lVar5;
      return;
    }
    break;
  case 0x12:
    lVar5 = *param_2;
    if (4 < lVar5) {
LAB_006e88e0:
      if (lVar5 == 5) goto LAB_006e88f8;
      if (lVar5 != 6) {
        if (lVar5 != 7) break;
        goto LAB_006e88f8;
      }
LAB_006e8910:
      uVar4 = param_2[1];
      if ((long)uVar4 < 0) break;
      goto LAB_006e8b90;
    }
    if (lVar5 == 2) goto LAB_006e8ae4;
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    goto LAB_006e8b8c;
  case 0x13:
    Var6 = FUN_006e8cdc(param_2);
    if ((Var6 & 1) != 0) {
      *(short *)(param_1 + 1) = (short)(Var6 >> 0x40);
      *param_1 = 0x26;
      return;
    }
    break;
  case 0x17:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_05;
      *param_1 = 0x24;
      return;
    }
    break;
  case 0x20:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_06;
      *param_1 = 0x2a;
      return;
    }
    break;
  case 0x22:
  case 0x2f:
  case 0x37:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x71:
  case 0x7e:
  case 0x7f:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
    lVar5 = *param_2;
    if (lVar5 == 1) goto LAB_006e8afc;
LAB_006e82a0:
    if (lVar5 == 8) {
LAB_006e8afc:
      lVar5 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = lVar5;
      *param_1 = 8;
      return;
    }
    break;
  case 0x2c:
  case 0x55:
    if (*param_2 == 10) {
      lVar5 = param_2[1];
      *param_1 = 0x16;
      param_1[1] = lVar5;
      return;
    }
    break;
  case 0x2e:
    lVar5 = *param_2;
    if (4 < lVar5) goto LAB_006e86ac;
    if (lVar5 < 3) goto LAB_006e8ad4;
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    goto LAB_006e8b8c;
  case 0x32:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_04;
      *param_1 = 0x23;
      return;
    }
    break;
  case 0x33:
    lVar5 = *param_2;
    if (lVar5 < 5) {
      if (lVar5 == 2) {
        bVar2 = *(byte *)(param_2 + 1);
        *param_1 = 0x27;
        param_1[1] = (ulong)bVar2;
        return;
      }
      if (lVar5 == 3) {
        uVar3 = *(ushort *)(param_2 + 1);
        *param_1 = 0x27;
        param_1[1] = (ulong)uVar3;
        return;
      }
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 0x27;
        param_1[1] = (ulong)uVar1;
        return;
      }
    }
    else {
      if (lVar5 == 5) {
LAB_006e8a84:
        lVar5 = param_2[1];
        *param_1 = 0x27;
        param_1[1] = lVar5;
        return;
      }
      if (lVar5 == 6) {
        lVar5 = param_2[1];
        if (-1 < lVar5) {
          *param_1 = 0x27;
          param_1[1] = lVar5;
          return;
        }
      }
      else if (lVar5 == 7) goto LAB_006e8a84;
    }
    break;
  case 0x36:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_00;
      *param_1 = 0x29;
      return;
    }
    break;
  case 0x38:
    lVar5 = *param_2;
    if (4 < lVar5) {
      if (6 < lVar5) {
        if (lVar5 == 7) goto LAB_006e88f8;
        goto LAB_006e82b8;
      }
LAB_006e86b4:
      if (lVar5 == 5) {
LAB_006e88f8:
        lVar5 = param_2[1];
        *param_1 = 7;
        param_1[1] = lVar5;
        return;
      }
      if (lVar5 != 6) break;
      goto LAB_006e8910;
    }
    if (lVar5 < 3) goto LAB_006e8ad4;
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    goto LAB_006e8b8c;
  case 0x39:
    lVar5 = *param_2;
    if (4 < lVar5) goto LAB_006e88e0;
    if (lVar5 == 2) goto LAB_006e8ae4;
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    goto LAB_006e8b8c;
  case 0x3a:
    lVar5 = *param_2;
    if (lVar5 < 5) {
      if (lVar5 == 2) {
LAB_006e8b18:
        bVar2 = *(byte *)(param_2 + 1);
        *param_1 = 0x2c;
        param_1[1] = (ulong)bVar2;
        return;
      }
      if (lVar5 == 3) {
LAB_006e8b4c:
        uVar3 = *(ushort *)(param_2 + 1);
        *param_1 = 0x2c;
        param_1[1] = (ulong)uVar3;
        return;
      }
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 0x2c;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    if (lVar5 == 5) {
LAB_006e8a24:
      lVar5 = param_2[1];
      *param_1 = 0x2c;
      param_1[1] = lVar5;
      return;
    }
    if (lVar5 != 6) {
      if (lVar5 != 7) break;
      goto LAB_006e8a24;
    }
    goto LAB_006e8b30;
  case 0x3b:
    lVar5 = *param_2;
    if (4 < lVar5) goto LAB_006e88e0;
    if (lVar5 == 2) goto LAB_006e8ae4;
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    goto LAB_006e8b8c;
  case 0x3e:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_02;
      *param_1 = 0x20;
      return;
    }
    break;
  case 0x42:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1;
      *param_1 = 0x28;
      return;
    }
    break;
  case 0x43:
    if (*param_2 == 10) {
      lVar5 = param_2[1];
      *param_1 = 0x14;
      param_1[1] = lVar5;
      return;
    }
    break;
  case 0x4c:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_08;
      *param_1 = 0x25;
      return;
    }
    break;
  case 0x51:
    lVar5 = *param_2;
    if (4 < lVar5) goto LAB_006e86ac;
    if (lVar5 < 3) goto LAB_006e8ad4;
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    goto LAB_006e8b8c;
  case 0x57:
    lVar5 = *param_2;
    if (4 < lVar5) goto LAB_006e88e0;
    if (lVar5 == 2) goto LAB_006e8ae4;
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    goto LAB_006e8b8c;
  case 0x58:
    lVar5 = *param_2;
    if (lVar5 < 5) {
      if (lVar5 == 2) goto LAB_006e8b18;
      if (lVar5 == 3) goto LAB_006e8b4c;
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 0x2c;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
    if (lVar5 == 5) {
LAB_006e8a54:
      lVar5 = param_2[1];
      *param_1 = 0x2c;
      param_1[1] = lVar5;
      return;
    }
    if (lVar5 != 6) {
      if (lVar5 != 7) break;
      goto LAB_006e8a54;
    }
LAB_006e8b30:
    lVar5 = param_2[1];
    if (-1 < lVar5) {
      *param_1 = 0x2c;
      param_1[1] = lVar5;
      return;
    }
    break;
  case 0x59:
    lVar5 = *param_2;
    if (4 < lVar5) goto LAB_006e88e0;
    if (lVar5 == 2) goto LAB_006e8ae4;
    if (lVar5 != 3) {
      if (lVar5 == 4) {
        uVar1 = *(uint *)(param_2 + 1);
        *param_1 = 7;
        param_1[1] = (ulong)uVar1;
        return;
      }
      break;
    }
LAB_006e8b8c:
    uVar4 = (ulong)*(ushort *)(param_2 + 1);
LAB_006e8b90:
    *param_1 = 7;
    param_1[1] = uVar4;
    return;
  case 0x5e:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_07;
      *param_1 = 0x21;
      return;
    }
    break;
  case 0x65:
    uVar4 = FUN_006e8c48(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_w1_01;
      *param_1 = 0x22;
      return;
    }
    break;
  case 0x72:
    if (*param_2 == 10) {
      lVar5 = param_2[1];
      *param_1 = 0x1c;
      param_1[1] = lVar5;
      return;
    }
    break;
  case 0x73:
    goto switchD_006e8290_caseD_73;
  case 0x74:
switchD_006e8290_caseD_74:
    if (*param_2 == 10) {
      lVar5 = param_2[1];
      *param_1 = 0x17;
      param_1[1] = lVar5;
      return;
    }
    break;
  case 0x79:
    if (*param_2 == 10) {
      lVar5 = param_2[1];
      *param_1 = 0x15;
      param_1[1] = lVar5;
      return;
    }
    break;
  case 0x8c:
    if (*param_2 == 10) {
      lVar5 = param_2[1];
      *param_1 = 0x12;
      param_1[1] = lVar5;
      return;
    }
  }
switchD_006e8290_caseD_3:
  FUN_00705a80(param_1,param_2);
  return;
}


// ===== 006e8c48  FUN_006e8c48 =====

bool FUN_006e8c48(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 < 5) {
    if (lVar2 == 2) {
      return true;
    }
    if (lVar2 == 3) {
      return *(ushort *)(param_1 + 1) < 0x100;
    }
    if (lVar2 == 4) {
      uVar1 = (ulong)*(uint *)(param_1 + 1);
LAB_006e8c78:
      return uVar1 < 0x100;
    }
  }
  else {
    if (lVar2 == 5) {
LAB_006e8c9c:
      return (ulong)param_1[1] < 0x100;
    }
    if (lVar2 == 6) {
      uVar1 = param_1[1];
      if (-1 < (long)uVar1) goto LAB_006e8c78;
    }
    else if (lVar2 == 7) goto LAB_006e8c9c;
  }
  return false;
}


// ===== 006e8cdc  FUN_006e8cdc =====

bool FUN_006e8cdc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 < 5) {
    if (lVar2 == 2) {
      return (ulong)*(byte *)(param_1 + 1) < 0x10000;
    }
    if (lVar2 == 3) {
      return true;
    }
    if (lVar2 == 4) {
      uVar1 = (ulong)*(uint *)(param_1 + 1);
LAB_006e8d0c:
      return uVar1 < 0x10000;
    }
  }
  else {
    if (lVar2 == 5) {
LAB_006e8d30:
      return (ulong)param_1[1] < 0x10000;
    }
    if (lVar2 == 6) {
      uVar1 = param_1[1];
      if (-1 < (long)uVar1) goto LAB_006e8d0c;
    }
    else if (lVar2 == 7) goto LAB_006e8d30;
  }
  return false;
}


// ===== 006e8d70  FUN_006e8d70 =====

void FUN_006e8d70(undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  uint3 *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *in_x6;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *unaff_x23;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  ulong unaff_x27;
  ulong uVar27;
  ulong *local_70;
  ulong *local_68;
  ulong *local_58;
  
  uVar17 = param_2[5];
  if (uVar17 != 0) {
    uVar6 = *(uint *)(param_2 + 6);
    uVar13 = (ulong)uVar6;
    uVar4 = param_2[3];
    puVar24 = (ulong *)param_2[4];
    uVar5 = param_2[1];
    uVar8 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    puVar19 = (ulong *)param_2[2];
    uVar15 = uVar13 & 0xff;
    uVar16 = uVar5 - uVar4;
    uVar14 = 0xffffffffffffffff >> (uVar6 * -8 & 0x38);
    puVar3 = (uint *)(*param_2 + uVar4);
    uVar11 = 6;
    do {
      uVar10 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
      if ((*(byte *)((long)param_2 + 0x34) & 1) != 0) {
        uVar25 = uVar17 - 1;
        puVar22 = (ulong *)((long)puVar24 + 1);
        bVar7 = (byte)*puVar24;
        if (bVar7 < 4) {
          puVar12 = puVar3;
          if (bVar7 < 2) {
            if (bVar7 != 1) {
              if (bVar7 != 0) goto LAB_006e9980;
              goto LAB_006e9948;
            }
            if (uVar17 == 1) goto LAB_006e9838;
            uVar25 = 0;
            uVar23 = 0;
            unaff_x23 = (ulong *)(2 - uVar17);
            puVar19 = (ulong *)((long)puVar24 + 2);
            while( true ) {
              bVar7 = *(byte *)((long)puVar19 - 1);
              if (((int)uVar23 == 0x3f) && (1 < bVar7)) goto LAB_006e9848;
              uVar25 = ((ulong)bVar7 & 0x7f) << (uVar23 & 0x3f) | uVar25;
              if (-1 < (char)bVar7) break;
              unaff_x23 = (ulong *)((long)unaff_x23 + 1);
              puVar19 = (ulong *)((long)puVar19 + 1);
              uVar23 = (ulong)((int)uVar23 + 7);
              if (unaff_x23 == (ulong *)0x1) goto LAB_006e9830;
            }
            uVar17 = -(long)unaff_x23;
            param_2[4] = (long)puVar19;
            param_2[5] = uVar17;
            if (uVar5 < uVar4) {
LAB_006e999c:
              uVar11 = 0x13;
              puVar12 = (uint *)*param_2;
            }
            else {
              uVar27 = uVar25 * uVar15;
              uVar23 = uVar16 - uVar27;
              if (uVar16 < uVar27) goto LAB_006e99d0;
              if ((uVar6 - 1 & 0xff) < ((uVar6 ^ uVar6 - 1) & 0xff)) {
                puVar12 = (uint *)((long)puVar3 + uVar27);
                puVar24 = puVar19;
                if (uVar10 < 2) {
                  if (uVar10 == 0) {
                    if (uVar16 == uVar27) {
LAB_006e99a8:
                      uVar11 = 0x13;
                      goto LAB_006e99d4;
                    }
                    unaff_x27 = uVar25 >> 8;
                    unaff_x23 = (ulong *)(ulong)(byte)*puVar12;
                  }
                  else {
                    if (uVar10 != 1) goto LAB_006e9990;
                    if (uVar23 < 2) goto LAB_006e99a8;
                    unaff_x27 = uVar25 >> 8;
                    unaff_x23 = (ulong *)(ulong)(ushort)*puVar12;
                  }
                }
                else if (uVar10 == 2) {
                  if (uVar23 < 4) goto LAB_006e99a8;
                  unaff_x27 = uVar25 >> 8;
                  unaff_x23 = (ulong *)(ulong)*puVar12;
                }
                else {
                  if (uVar10 != 3) goto LAB_006e9990;
                  if (uVar23 < 8) goto LAB_006e99a8;
                  unaff_x27 = uVar25 >> 8;
                  unaff_x23 = (ulong *)(((ulong)*puVar12 << 8 | (ulong)(uint3)puVar12[1] << 0x28) >>
                                        8 | (ulong)*(byte *)((long)puVar12 + 7) << 0x38);
                }
                goto LAB_006e9474;
              }
LAB_006e9990:
              uVar11 = uVar15 << 8 | 0x19;
              puVar12 = puVar3;
            }
LAB_006e99d4:
            param_1[2] = puVar12;
            goto LAB_006e9874;
          }
          if (bVar7 == 2) {
            if (uVar17 != 1) {
              uVar23 = 0;
              uVar18 = 0;
              uVar27 = 0;
              while( true ) {
                bVar7 = *(byte *)((long)puVar24 + uVar23 + 1);
                if (((int)uVar27 == 0x3f) && (1 < bVar7)) goto LAB_006e9848;
                unaff_x23 = (ulong *)(((ulong)bVar7 & 0x7f) << (uVar27 & 0x3f));
                uVar18 = (ulong)unaff_x23 | uVar18;
                if (-1 < (char)bVar7) break;
                uVar23 = uVar23 + 1;
                uVar27 = (ulong)((int)uVar27 + 7);
                if (uVar25 == uVar23) goto LAB_006e9830;
              }
              lVar26 = uVar17 - uVar23;
              unaff_x23 = (ulong *)((long)puVar24 + uVar23 + 2);
              param_2[4] = (long)unaff_x23;
              param_2[5] = lVar26 + -2;
              if (uVar17 - 2 == uVar23) goto LAB_006e98a4;
              unaff_x23 = (ulong *)0x0;
              uVar27 = 0;
              uVar25 = uVar23;
              while( true ) {
                bVar7 = *(byte *)((long)puVar24 + uVar25 + 2);
                if (((int)uVar27 == 0x3f) && (1 < bVar7)) {
                  uVar13 = 0;
                  unaff_x23 = local_70;
                  goto LAB_006e9864;
                }
                unaff_x23 = (ulong *)(((ulong)bVar7 & 0x7f) << (uVar27 & 0x3f) | (ulong)unaff_x23);
                if (-1 < (char)bVar7) break;
                uVar25 = uVar25 + 1;
                uVar27 = (ulong)((int)uVar27 + 7);
                if (uVar17 - 2 == uVar25) goto LAB_006e9898;
              }
              puVar24 = (ulong *)((long)puVar24 + uVar25 + 3);
              uVar17 = (uVar17 - uVar25) - 3;
              param_2[4] = (long)puVar24;
              param_2[5] = uVar17;
              if (uVar5 < uVar4) goto LAB_006e999c;
              uVar23 = uVar18 * uVar15;
              uVar25 = uVar16 - uVar23;
              if (uVar16 < uVar23) goto LAB_006e99d0;
              if (((uVar6 ^ uVar6 - 1) & 0xff) <= (uVar6 - 1 & 0xff)) goto LAB_006e9990;
              puVar12 = (uint *)((long)puVar3 + uVar23);
              if (uVar10 < 2) {
                if (uVar10 == 0) {
                  if (uVar16 == uVar23) {
LAB_006e99b4:
                    uVar11 = 0x13;
                    goto LAB_006e99d4;
                  }
                  puVar22 = (ulong *)(ulong)(byte)*puVar12;
                }
                else {
                  if (uVar10 != 1) goto LAB_006e9990;
                  if (uVar25 < 2) goto LAB_006e99b4;
                  puVar22 = (ulong *)(ulong)(ushort)*puVar12;
                }
              }
              else if (uVar10 == 2) {
                if (uVar25 < 4) goto LAB_006e99b4;
                puVar22 = (ulong *)(ulong)*puVar12;
              }
              else {
                if (uVar10 != 3) goto LAB_006e9990;
                if (uVar25 < 8) goto LAB_006e99b4;
                puVar22 = (ulong *)(((ulong)*puVar12 << 8 | (ulong)(uint3)puVar12[1] << 0x28) >> 8 |
                                   (ulong)*(byte *)((long)puVar12 + 7) << 0x38);
              }
              uVar23 = (long)unaff_x23 * uVar15;
              uVar25 = uVar16 - uVar23;
              puVar12 = puVar3;
              if (uVar16 < uVar23) goto LAB_006e99d0;
              puVar12 = (uint *)((long)puVar3 + uVar23);
              if (uVar10 < 2) {
                if (uVar10 == 0) {
                  if (uVar16 != uVar23) {
                    puVar21 = (ulong *)(ulong)(byte)*puVar12;
LAB_006e9828:
                    unaff_x27 = uVar18 >> 8;
                    local_70 = unaff_x23;
                    goto LAB_006e9564;
                  }
                }
                else if (1 < uVar25) {
                  puVar21 = (ulong *)(ulong)(ushort)*puVar12;
                  goto LAB_006e9828;
                }
              }
              else if (uVar10 == 2) {
                if (3 < uVar25) {
                  puVar21 = (ulong *)(ulong)*puVar12;
                  goto LAB_006e9828;
                }
              }
              else if (7 < uVar25) {
                puVar21 = (ulong *)(((ulong)*puVar12 << 8 | (ulong)(uint3)puVar12[1] << 0x28) >> 8 |
                                   (ulong)*(byte *)((long)puVar12 + 7) << 0x38);
                goto LAB_006e9828;
              }
LAB_006e99d0:
              uVar11 = 0x13;
              goto LAB_006e99d4;
            }
          }
          else {
            if (bVar7 != 3) goto LAB_006e9980;
            if (uVar17 != 1) {
              uVar23 = 0;
              uVar18 = 0;
              uVar27 = 0;
              while( true ) {
                bVar7 = *(byte *)((long)puVar24 + uVar23 + 1);
                if (((int)uVar27 == 0x3f) && (1 < bVar7)) goto LAB_006e9848;
                unaff_x23 = (ulong *)(((ulong)bVar7 & 0x7f) << (uVar27 & 0x3f));
                uVar18 = (ulong)unaff_x23 | uVar18;
                if (-1 < (char)bVar7) break;
                uVar23 = uVar23 + 1;
                uVar27 = (ulong)((int)uVar27 + 7);
                if (uVar25 == uVar23) goto LAB_006e9830;
              }
              lVar26 = uVar17 - uVar23;
              unaff_x23 = (ulong *)((long)puVar24 + uVar23 + 2);
              param_2[4] = (long)unaff_x23;
              param_2[5] = lVar26 + -2;
              if (uVar17 - 2 == uVar23) goto LAB_006e98a4;
              unaff_x23 = (ulong *)0x0;
              uVar27 = 0;
              uVar25 = uVar23;
              while( true ) {
                bVar7 = *(byte *)((long)puVar24 + uVar25 + 2);
                if (((int)uVar27 == 0x3f) && (1 < bVar7)) {
                  uVar13 = 0;
                  unaff_x23 = local_68;
                  goto LAB_006e9864;
                }
                unaff_x23 = (ulong *)(((ulong)bVar7 & 0x7f) << (uVar27 & 0x3f) | (ulong)unaff_x23);
                if (-1 < (char)bVar7) break;
                uVar25 = uVar25 + 1;
                uVar27 = (ulong)((int)uVar27 + 7);
                if (uVar17 - 2 == uVar25) goto LAB_006e9898;
              }
              puVar24 = (ulong *)((long)puVar24 + uVar25 + 3);
              uVar17 = (uVar17 - uVar25) - 3;
              param_2[4] = (long)puVar24;
              param_2[5] = uVar17;
              if (uVar5 < uVar4) goto LAB_006e999c;
              uVar23 = uVar18 * uVar15;
              uVar25 = uVar16 - uVar23;
              if (uVar16 < uVar23) goto LAB_006e99d0;
              if ((uVar6 - 1 & 0xff) < ((uVar6 ^ uVar6 - 1) & 0xff)) {
                puVar12 = (uint *)((long)puVar3 + uVar23);
                if (uVar10 < 2) {
                  if (uVar10 == 0) {
                    if (uVar16 == uVar23) {
LAB_006e99c0:
                      uVar11 = 0x13;
                      goto LAB_006e99d4;
                    }
                    puVar22 = (ulong *)(ulong)(byte)*puVar12;
                  }
                  else {
                    if (uVar10 != 1) goto LAB_006e9990;
                    if (uVar25 < 2) goto LAB_006e99c0;
                    puVar22 = (ulong *)(ulong)(ushort)*puVar12;
                  }
                }
                else if (uVar10 == 2) {
                  if (uVar25 < 4) goto LAB_006e99c0;
                  puVar22 = (ulong *)(ulong)*puVar12;
                }
                else {
                  if (uVar10 != 3) goto LAB_006e9990;
                  if (uVar25 < 8) goto LAB_006e99c0;
                  puVar22 = (ulong *)(((ulong)*puVar12 << 8 | (ulong)(uint3)puVar12[1] << 0x28) >> 8
                                     | (ulong)*(byte *)((long)puVar12 + 7) << 0x38);
                }
                unaff_x27 = uVar18 >> 8;
                puVar21 = (ulong *)((long)puVar22 + (long)unaff_x23 & uVar14);
                local_68 = unaff_x23;
                goto LAB_006e9564;
              }
              goto LAB_006e9990;
            }
          }
          goto LAB_006e9838;
        }
        if (bVar7 < 6) {
          if (bVar7 != 4) {
            if (bVar7 != 5) {
LAB_006e9980:
              uVar13 = unaff_x27 & 0xffffffffffffff00 | (ulong)bVar7;
              uVar11 = 0x18;
              goto LAB_006e9864;
            }
            if (((uVar6 ^ uVar6 - 1) & 0xff) <= (uVar6 - 1 & 0xff)) {
LAB_006e9938:
              uVar13 = (ulong)(uVar6 & 0xff);
              uVar11 = 0x19;
              goto LAB_006e9864;
            }
            if (uVar10 < 2) {
              if (uVar10 == 0) {
                if (uVar17 != 1) {
                  unaff_x23 = (ulong *)(ulong)*(byte *)((long)puVar24 + 1);
                  puVar19 = (ulong *)((long)puVar24 + 2);
                  uVar17 = uVar17 - 2;
LAB_006e946c:
                  param_2[4] = (long)puVar19;
                  param_2[5] = uVar17;
                  unaff_x27 = (ulong)unaff_x23 >> 8;
                  puVar24 = puVar19;
                  goto LAB_006e9474;
                }
              }
              else {
                if (uVar10 != 1) goto LAB_006e9938;
                if (1 < uVar25) {
                  unaff_x23 = (ulong *)(ulong)*(ushort *)((long)puVar24 + 1);
                  puVar19 = (ulong *)((long)puVar24 + 3);
                  uVar17 = uVar17 - 3;
                  goto LAB_006e946c;
                }
              }
            }
            else if (uVar10 == 2) {
              if (3 < uVar25) {
                unaff_x23 = (ulong *)(ulong)*(uint *)((long)puVar24 + 1);
                puVar19 = (ulong *)((long)puVar24 + 5);
                uVar17 = uVar17 - 5;
                goto LAB_006e946c;
              }
            }
            else {
              if (uVar10 != 3) goto LAB_006e9938;
              if (7 < uVar25) {
                puVar19 = (ulong *)((long)puVar24 + 9);
                uVar17 = uVar17 - 9;
                unaff_x23 = (ulong *)(((ulong)*(uint *)((long)puVar24 + 1) << 8 |
                                      (ulong)*(uint3 *)((long)puVar24 + 5) << 0x28) >> 8 |
                                     (ulong)(byte)puVar24[1] << 0x38);
                goto LAB_006e946c;
              }
            }
            goto LAB_006e9838;
          }
          if (uVar17 == 1) goto LAB_006e9838;
          uVar23 = 0;
          uVar27 = 0;
          uVar18 = 0;
          while( true ) {
            bVar7 = *(byte *)((long)puVar24 + uVar23 + 1);
            if (((int)uVar18 == 0x3f) && (1 < bVar7)) {
              uVar13 = 0;
              param_2[4] = (long)puVar24 + uVar23 + 2;
              uVar11 = 6;
              unaff_x23 = (ulong *)(ulong)bVar7;
              goto LAB_006e9864;
            }
            uVar27 = ((ulong)bVar7 & 0x7f) << (uVar18 & 0x3f) | uVar27;
            if (-1 < (char)bVar7) break;
            uVar23 = uVar23 + 1;
            uVar18 = (ulong)((int)uVar18 + 7);
            if (uVar25 == uVar23) goto LAB_006e9830;
          }
          lVar26 = uVar17 - uVar23;
          unaff_x23 = (ulong *)((long)puVar24 + uVar23 + 2);
          param_2[4] = (long)unaff_x23;
          param_2[5] = lVar26 + -2;
          if (uVar17 - 2 == uVar23) goto LAB_006e98a4;
          unaff_x23 = (ulong *)0x0;
          uVar18 = 0;
          uVar25 = uVar23;
          while( true ) {
            bVar7 = *(byte *)((long)puVar24 + uVar25 + 2);
            if (((int)uVar18 == 0x3f) && (1 < bVar7)) {
              uVar13 = 0;
              param_2[4] = (long)puVar24 + uVar25 + 3;
              uVar11 = 6;
              unaff_x23 = local_58;
              goto LAB_006e9864;
            }
            unaff_x23 = (ulong *)(((ulong)bVar7 & 0x7f) << (uVar18 & 0x3f) | (ulong)unaff_x23);
            if (-1 < (char)bVar7) break;
            uVar25 = uVar25 + 1;
            uVar18 = (ulong)((int)uVar18 + 7);
            if (uVar17 - 2 == uVar25) goto LAB_006e9898;
          }
          unaff_x27 = uVar27 >> 8;
          puVar24 = (ulong *)((long)puVar24 + uVar25 + 3);
          uVar17 = (uVar17 - uVar25) - 3;
          param_2[4] = (long)puVar24;
          param_2[5] = uVar17;
          local_58 = unaff_x23;
joined_r0x006e9644:
          if ((ulong *)(uVar14 & 0xfffffffffffffffe) <= puVar19) goto LAB_006e9574;
          puVar22 = (ulong *)(uVar14 & (long)puVar19 + uVar27);
          puVar21 = (ulong *)(uVar14 & (long)puVar19 + (long)unaff_x23);
LAB_006e9564:
          if ((puVar22 < (ulong *)(uVar14 & 0xfffffffffffffffe)) && (puVar22 < puVar21)) {
            param_1[2] = puVar21;
            *param_1 = 1;
            param_1[1] = puVar22;
            return;
          }
          goto LAB_006e9574;
        }
        if (bVar7 != 6) {
          if (bVar7 != 7) goto LAB_006e9980;
          if (((uVar6 ^ uVar6 - 1) & 0xff) <= (uVar6 - 1 & 0xff)) goto LAB_006e9938;
          if (uVar10 < 2) {
            if (uVar10 == 0) {
              if (uVar17 != 1) {
                puVar22 = (ulong *)(ulong)*(byte *)((long)puVar24 + 1);
                puVar21 = (ulong *)((long)puVar24 + 2);
                lVar26 = uVar17 - 2;
LAB_006e9494:
                param_2[4] = (long)puVar21;
                param_2[5] = lVar26;
                if (lVar26 == 0) {
LAB_006e98b8:
                  uVar13 = 0;
                  uVar11 = 0x13;
                  unaff_x23 = puVar21;
                  goto LAB_006e9864;
                }
                unaff_x23 = (ulong *)0x0;
                uVar17 = 0;
                lVar20 = 1 - lVar26;
                puVar9 = puVar21;
                while( true ) {
                  puVar24 = (ulong *)((long)puVar9 + 1);
                  bVar7 = (byte)*puVar9;
                  if (((int)uVar17 == 0x3f) && (1 < bVar7)) {
                    uVar13 = 0;
                    param_2[4] = (long)puVar24;
                    param_2[5] = -lVar20;
                    uVar11 = 6;
                    unaff_x23 = in_x6;
                    goto LAB_006e9864;
                  }
                  unaff_x23 = (ulong *)(((ulong)bVar7 & 0x7f) << (uVar17 & 0x3f) | (ulong)unaff_x23)
                  ;
                  if (-1 < (char)bVar7) break;
                  lVar20 = lVar20 + 1;
                  uVar17 = (ulong)((int)uVar17 + 7);
                  puVar9 = puVar24;
                  if (lVar20 == 1) {
                    puVar21 = (ulong *)((long)puVar21 + lVar26);
                    param_2[4] = (long)puVar21;
                    param_2[5] = 0;
                    goto LAB_006e98b8;
                  }
                }
                uVar17 = -lVar20;
                unaff_x27 = (ulong)puVar22 >> 8;
                param_2[4] = (long)puVar24;
                param_2[5] = uVar17;
                in_x6 = unaff_x23;
                puVar21 = (ulong *)(uVar14 & (long)unaff_x23 + (long)puVar22);
                goto LAB_006e9564;
              }
            }
            else {
              if (uVar10 != 1) goto LAB_006e9938;
              if (1 < uVar25) {
                puVar22 = (ulong *)(ulong)*(ushort *)((long)puVar24 + 1);
                puVar21 = (ulong *)((long)puVar24 + 3);
                lVar26 = uVar17 - 3;
                goto LAB_006e9494;
              }
            }
          }
          else if (uVar10 == 2) {
            if (3 < uVar25) {
              puVar22 = (ulong *)(ulong)*(uint *)((long)puVar24 + 1);
              puVar21 = (ulong *)((long)puVar24 + 5);
              lVar26 = uVar17 - 5;
              goto LAB_006e9494;
            }
          }
          else {
            if (uVar10 != 3) goto LAB_006e9938;
            if (7 < uVar25) {
              puVar21 = (ulong *)((long)puVar24 + 9);
              lVar26 = uVar17 - 9;
              puVar22 = (ulong *)(((ulong)*(uint *)((long)puVar24 + 1) << 8 |
                                  (ulong)*(uint3 *)((long)puVar24 + 5) << 0x28) >> 8 |
                                 (ulong)(byte)puVar24[1] << 0x38);
              goto LAB_006e9494;
            }
          }
          goto LAB_006e9838;
        }
        if (((uVar6 ^ uVar6 - 1) & 0xff) <= (uVar6 - 1 & 0xff)) {
LAB_006e9974:
          uVar13 = uVar13 & 0xff;
          uVar11 = 0x19;
          goto LAB_006e9864;
        }
        if (1 < uVar10) {
          if (uVar10 != 2) {
            if (uVar10 != 3) goto LAB_006e9974;
            if (7 < uVar25) {
              unaff_x23 = (ulong *)((long)puVar24 + 9);
              param_2[4] = (long)unaff_x23;
              param_2[5] = uVar17 - 9;
              if (7 < uVar17 - 9) {
                uVar17 = uVar17 - 0x11;
                puVar2 = (uint3 *)((long)puVar24 + 0xd);
                puVar12 = (uint *)((long)puVar24 + 9);
                puVar21 = puVar24 + 2;
                puVar22 = *(ulong **)((long)puVar24 + 1);
                puVar24 = (ulong *)((long)puVar24 + 0x11);
                unaff_x23 = (ulong *)(((ulong)*puVar12 << 8 | (ulong)*puVar2 << 0x28) >> 8 |
                                     (ulong)(byte)*puVar21 << 0x38);
                goto LAB_006e9558;
              }
              goto LAB_006e98a4;
            }
            goto LAB_006e9838;
          }
          if (uVar25 < 4) goto LAB_006e9838;
          unaff_x23 = (ulong *)((long)puVar24 + 5);
          param_2[4] = (long)unaff_x23;
          param_2[5] = uVar17 - 5;
          if (3 < uVar17 - 5) {
            puVar22 = (ulong *)(ulong)*(uint *)((long)puVar24 + 1);
            unaff_x23 = (ulong *)(ulong)*(uint *)((long)puVar24 + 5);
            puVar24 = (ulong *)((long)puVar24 + 9);
            uVar17 = uVar17 - 9;
            goto LAB_006e9558;
          }
          goto LAB_006e98a4;
        }
        if (uVar10 == 0) {
          if (uVar17 != 1) {
            unaff_x23 = (ulong *)((long)puVar24 + 2);
            param_2[4] = (long)unaff_x23;
            param_2[5] = uVar17 - 2;
            if (uVar17 - 2 == 0) goto LAB_006e98a4;
            puVar22 = (ulong *)(ulong)*(byte *)((long)puVar24 + 1);
            unaff_x23 = (ulong *)(ulong)*(byte *)((long)puVar24 + 2);
            puVar24 = (ulong *)((long)puVar24 + 3);
            uVar17 = uVar17 - 3;
LAB_006e9558:
            param_2[4] = (long)puVar24;
            param_2[5] = uVar17;
            unaff_x27 = (ulong)puVar22 >> 8;
            puVar21 = unaff_x23;
            goto LAB_006e9564;
          }
        }
        else {
          if (uVar10 != 1) goto LAB_006e9974;
          if (1 < uVar25) {
            unaff_x23 = (ulong *)((long)puVar24 + 3);
            param_2[4] = (long)unaff_x23;
            param_2[5] = uVar17 - 3;
            if (1 < uVar17 - 3) {
              puVar22 = (ulong *)(ulong)*(ushort *)((long)puVar24 + 1);
              unaff_x23 = (ulong *)(ulong)*(ushort *)((long)puVar24 + 3);
              puVar24 = (ulong *)((long)puVar24 + 5);
              uVar17 = uVar17 - 5;
              goto LAB_006e9558;
            }
            goto LAB_006e98a4;
          }
        }
        goto LAB_006e9838;
      }
      if (((uVar6 ^ uVar6 - 1) & 0xff) <= (uVar6 - 1 & 0xff)) {
LAB_006e98c8:
        uVar11 = 0x19;
        uVar13 = uVar13 & 0xff;
        goto LAB_006e9864;
      }
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          unaff_x23 = (ulong *)((long)puVar24 + 1);
          uVar27 = (ulong)(byte)*puVar24;
          param_2[4] = (long)unaff_x23;
          param_2[5] = uVar17 - 1;
          if (uVar17 - 1 == 0) {
LAB_006e98d8:
            uVar11 = 0x13;
            uVar13 = 0;
            goto LAB_006e9864;
          }
          unaff_x23 = (ulong *)(ulong)*(byte *)((long)puVar24 + 1);
          puVar24 = (ulong *)((long)puVar24 + 2);
          uVar17 = uVar17 - 2;
        }
        else {
          if (uVar10 != 1) goto LAB_006e98c8;
          if (uVar17 == 1) goto LAB_006e98e4;
          unaff_x23 = (ulong *)((long)puVar24 + 2);
          uVar27 = (ulong)(ushort)*puVar24;
          param_2[4] = (long)unaff_x23;
          param_2[5] = uVar17 - 2;
          if (uVar17 - 2 < 2) goto LAB_006e98d8;
          unaff_x23 = (ulong *)(ulong)*(ushort *)((long)puVar24 + 2);
          puVar24 = (ulong *)((long)puVar24 + 4);
          uVar17 = uVar17 - 4;
        }
      }
      else if (uVar10 == 2) {
        if (uVar17 < 4) {
LAB_006e98e4:
          uVar11 = 0x13;
          uVar13 = 0;
          unaff_x23 = puVar24;
          goto LAB_006e9864;
        }
        unaff_x23 = (ulong *)((long)puVar24 + 4);
        uVar27 = (ulong)(uint)*puVar24;
        param_2[4] = (long)unaff_x23;
        param_2[5] = uVar17 - 4;
        if (uVar17 - 4 < 4) goto LAB_006e98d8;
        unaff_x23 = (ulong *)(ulong)*(uint *)((long)puVar24 + 4);
        puVar24 = puVar24 + 1;
        uVar17 = uVar17 - 8;
      }
      else {
        if (uVar10 != 3) goto LAB_006e98c8;
        if (uVar17 < 8) goto LAB_006e98e4;
        unaff_x23 = puVar24 + 1;
        param_2[4] = (long)unaff_x23;
        param_2[5] = uVar17 - 8;
        if (uVar17 - 8 < 8) goto LAB_006e98d8;
        uVar17 = uVar17 - 0x10;
        puVar2 = (uint3 *)((long)puVar24 + 0xc);
        puVar22 = puVar24 + 1;
        pbVar1 = (byte *)((long)puVar24 + 0xf);
        uVar27 = *puVar24;
        puVar24 = puVar24 + 2;
        unaff_x23 = (ulong *)(((ulong)(uint)*puVar22 << 8 | (ulong)*puVar2 << 0x28) >> 8 |
                             (ulong)*pbVar1 << 0x38);
      }
      param_2[4] = (long)puVar24;
      param_2[5] = uVar17;
      if (unaff_x23 == (ulong *)0x0 && uVar27 == 0) {
LAB_006e9948:
        param_2[4] = 1;
        param_2[5] = 0;
        break;
      }
      puVar22 = unaff_x23;
      if (uVar27 != uVar14) {
        puVar22 = (ulong *)uVar27;
      }
      unaff_x27 = (ulong)puVar22 >> 8;
      if (uVar27 != uVar14) goto joined_r0x006e9644;
LAB_006e9474:
      puVar19 = unaff_x23;
      param_2[2] = (long)puVar19;
      unaff_x23 = puVar19;
LAB_006e9574:
    } while (uVar17 != 0);
  }
  *param_1 = 0;
  return;
LAB_006e9848:
  uVar13 = 0;
  goto LAB_006e9864;
LAB_006e9898:
  unaff_x23 = (ulong *)((long)puVar24 + lVar26 + uVar23);
  param_2[4] = (long)unaff_x23;
  param_2[5] = 0;
LAB_006e98a4:
  uVar13 = 0;
  uVar11 = 0x13;
  goto LAB_006e9864;
LAB_006e9830:
  puVar22 = (ulong *)((long)puVar24 + uVar17);
  param_2[4] = (long)puVar22;
  param_2[5] = 0;
LAB_006e9838:
  uVar13 = 0;
  uVar11 = 0x13;
  unaff_x23 = puVar22;
LAB_006e9864:
  uVar11 = uVar11 | uVar13 << 8;
  param_1[2] = unaff_x23;
  param_2[4] = 1;
  param_2[5] = 0;
LAB_006e9874:
  *param_1 = 2;
  param_1[1] = uVar11;
  return;
}


// ===== 006e99dc  FUN_006e99dc =====

void FUN_006e99dc(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar6 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 == 0) {
    uVar4 = 0x13;
  }
  else {
    uVar8 = 0;
    uVar5 = 0;
    uVar10 = 0;
    do {
      bVar3 = *(byte *)(uVar6 + uVar8);
      if (((int)uVar10 == 0x3f) && (1 < bVar3)) {
        lVar1 = uVar6 + uVar8;
        uVar6 = ~uVar8;
        *param_2 = lVar1 + 1;
        param_2[1] = uVar6 + uVar2;
        uVar4 = 6;
        goto LAB_006e9a58;
      }
      uVar5 = ((ulong)bVar3 & 0x7f) << (uVar10 & 0x3f) | uVar5;
      if (-1 < (char)bVar3) {
        uVar10 = uVar6 + uVar8 + 1;
        *param_2 = uVar10;
        param_2[1] = (uVar2 - uVar8) - 1;
        if (uVar2 - 1 == uVar8) goto LAB_006e9ae0;
        uVar7 = 0;
        uVar12 = 0;
        uVar10 = uVar6 + uVar8 + (uVar2 - uVar8);
        goto LAB_006e9aa4;
      }
      uVar8 = uVar8 + 1;
      uVar10 = (ulong)((int)uVar10 + 7);
    } while (uVar2 != uVar8);
    *param_2 = uVar6 + uVar2;
    param_2[1] = 0;
    uVar4 = 0x13;
    uVar6 = uVar6 + uVar2;
  }
LAB_006e9a58:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  param_1[2] = uVar6;
  *param_1 = 0xffffffffffffffff;
  return;
LAB_006e9aa4:
  bVar3 = *(byte *)(uVar6 + uVar8 + 1);
  if (((int)uVar12 == 0x3f) && (1 < bVar3)) {
    *param_2 = uVar6 + uVar8 + 2;
    param_2[1] = (uVar2 - uVar8) - 2;
    uVar4 = 6;
    goto LAB_006e9b00;
  }
  uVar7 = ((ulong)bVar3 & 0x7f) << (uVar12 & 0x3f) | uVar7;
  if (-1 < (char)bVar3) {
    lVar1 = uVar6 + uVar8;
    uVar6 = lVar1 + 2;
    *param_2 = uVar6;
    param_2[1] = (uVar2 - uVar8) - 2;
    if (uVar2 - 2 == uVar8) goto LAB_006e9b9c;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = lVar1 + 3;
    lVar9 = (uVar8 - uVar2) + 3;
    uVar6 = lVar1 + (uVar2 - uVar8);
    goto LAB_006e9b60;
  }
  uVar8 = uVar8 + 1;
  uVar12 = (ulong)((int)uVar12 + 7);
  if (uVar2 - 1 == uVar8) {
    *param_2 = uVar10;
    param_2[1] = 0;
LAB_006e9ae0:
    uVar4 = 0x13;
LAB_006e9b00:
    *(undefined1 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((long)param_1 + 9) = 0;
    *(undefined2 *)((long)param_1 + 0xe) = 0;
    *(undefined4 *)((long)param_1 + 10) = 0;
    param_1[2] = uVar10;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  goto LAB_006e9aa4;
  while( true ) {
    uVar12 = ((ulong)bVar3 & 0x7f) << (uVar11 & 0x3f) | uVar12;
    if (-1 < (char)bVar3) {
      param_1[9] = 0;
      param_1[10] = 0;
      *param_2 = uVar10;
      param_2[1] = -lVar9;
      *param_1 = 0x1f;
      param_1[1] = param_3;
      param_1[2] = param_4;
      param_1[3] = 0xffffffffffffffff;
      param_1[6] = uVar5;
      param_1[7] = uVar7;
      param_1[8] = uVar12;
      return;
    }
    lVar9 = lVar9 + 1;
    uVar10 = uVar10 + 1;
    uVar11 = (ulong)((int)uVar11 + 7);
    if (lVar9 == 1) break;
LAB_006e9b60:
    bVar3 = *(byte *)(uVar10 - 1);
    if (((int)uVar11 == 0x3f) && (1 < bVar3)) {
      *param_2 = uVar10;
      param_2[1] = -lVar9;
      uVar4 = 6;
      goto LAB_006e9bb0;
    }
  }
  *param_2 = uVar6;
  param_2[1] = 0;
LAB_006e9b9c:
  uVar4 = 0x13;
LAB_006e9bb0:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  param_1[2] = uVar6;
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 006e9bf8  <std::fs::[e]::std::fs::Dir>::metadata =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[e]::std::fs::Dir>::metadata */

void __rustcall <std::fs::[e]::std::fs::Dir>::metadata(undefined8 *param_1,int *param_2)

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


// ===== 006e9cd4  FUN_006e9cd4 =====

undefined1  [16] FUN_006e9cd4(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint local_38 [2];
  long local_30;
  long lStack_28;
  
  if ((*(byte *)((long)param_1 + 0x41) & 1) != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    auVar5 = FUN_006e9cd4(param_1);
    if ((auVar5._0_8_ != 0) && (auVar5._8_8_ != 0)) {
      return auVar5;
    }
    if (*(char *)((long)param_1 + 0x41) == '\x01') {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar5._8_8_;
      return auVar2 << 0x40;
    }
  }
  lVar3 = param_1[2];
  FUN_006fcdd8(local_38);
  if ((local_38[0] & 1) != 0) {
    auVar4._8_8_ = param_1[1] - lStack_28;
    param_1[1] = local_30;
    auVar4._0_8_ = lVar3 + lStack_28;
    return auVar4;
  }
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  auVar5._8_8_ = param_1[1] - *param_1;
  auVar5._0_8_ = lVar3 + *param_1;
  return auVar5;
}


// ===== 006e9da8  FUN_006e9da8 =====

void FUN_006e9da8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  long lVar8;
  undefined8 *puVar9;
  undefined2 uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long local_98;
  long local_90;
  undefined1 local_88 [16];
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  long lStack_50;
  
  plVar23 = param_2 + 4;
  lVar22 = *plVar23;
  if (lVar22 == 0) {
    local_90 = param_2[1];
  }
  else if (param_2[9] == 1) {
    uVar11 = param_2[10];
    local_90 = param_2[5] - uVar11;
    if ((ulong)param_2[5] < uVar11) {
      local_58 = 0x13;
      lStack_50 = lVar22;
LAB_006e9fe4:
      *param_1 = local_58;
      param_1[1] = lStack_50;
      return;
    }
    *param_2 = lVar22 + uVar11;
    param_2[1] = local_90;
  }
  else {
    lVar1 = param_2[5];
    local_88 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(param_2[6]);
    local_98 = lVar22;
    local_78 = plVar23;
    local_90 = lVar1;
    if (local_88._8_8_ != 0) {
      lVar22 = local_88._8_8_ + -1;
      do {
        puVar9 = local_88._0_8_;
        auVar7._8_8_ = lVar22;
        auVar7._0_8_ = puVar9 + 2;
        uStack_68 = puVar9[1];
        local_70 = *puVar9;
        FUN_006c753c(&local_60,&local_98,*(undefined4 *)(local_78[3] + 0x48),&local_70);
        if (local_60 == -1) goto LAB_006e9fe4;
        lVar22 = lVar22 + -1;
        local_88 = auVar7;
      } while (lVar22 != -1);
    }
    if ((*(uint *)(local_78 + 5) & 1) == 0) {
      local_78[5] = 1;
      local_78[6] = local_98 - *local_78;
    }
    *param_2 = local_98;
    param_2[1] = local_90;
  }
  if (local_90 != 0) {
    lVar1 = param_2[2];
    lVar19 = param_2[3];
    pbVar20 = (byte *)*param_2;
    pbVar12 = (byte *)0x0;
    uVar11 = 0;
    lVar2 = *(long *)(lVar1 + 0x30);
    lVar3 = *(long *)(lVar1 + 0x38);
    lVar13 = *(long *)(lVar1 + 0x28);
    lVar22 = 0xc;
    if (*(char *)(lVar1 + 0x49) != '\b') {
      lVar22 = 4;
    }
    lVar18 = 1 - local_90;
    uVar15 = 6;
    pbVar6 = pbVar20;
    do {
      pbVar14 = pbVar6 + 1;
      bVar5 = *pbVar6;
      if (((int)uVar11 == 0x3f) && (1 < bVar5)) goto LAB_006e9f3c;
      pbVar12 = (byte *)(((ulong)bVar5 & 0x7f) << (uVar11 & 0x3f) | (ulong)pbVar12);
      if (-1 < (char)bVar5) {
        *param_2 = (long)pbVar14;
        param_2[1] = -lVar18;
        if (pbVar12 == (byte *)0x0) {
          param_2[4] = 0;
          param_2[0xb] = -1;
          *(undefined2 *)param_1 = 0x1ff;
          return;
        }
        if (pbVar12 + -1 < *(byte **)(lVar19 + 0x10)) {
          lVar19 = *(long *)(lVar19 + 8) + (long)(pbVar12 + -1) * 0x70;
          goto LAB_006e9fa0;
        }
        lVar17 = *(long *)(lVar19 + 0x18);
        if (lVar17 != 0) {
          lVar16 = *(long *)(lVar19 + 0x20);
          uVar15 = 0x12;
          goto LAB_006ea03c;
        }
        uVar15 = 0x12;
        goto LAB_006e9f3c;
      }
      lVar18 = lVar18 + 1;
      uVar11 = (ulong)((int)uVar11 + 7);
      pbVar6 = pbVar14;
    } while (lVar18 != 1);
    uVar15 = 0x13;
    pbVar12 = pbVar20 + local_90;
LAB_006e9f3c:
    param_2[0xb] = 0;
    *param_2 = 1;
    param_2[1] = 0;
    param_2[4] = 0;
    *param_1 = uVar15;
    param_1[1] = pbVar12;
    return;
  }
  uVar10 = 0xff;
  param_2[4] = 0;
  param_2[0xb] = 0;
LAB_006e9fc0:
  *(undefined2 *)param_1 = uVar10;
  return;
LAB_006ea03c:
  lVar19 = lVar17 + -0x70;
  lVar8 = (ulong)*(ushort *)(lVar17 + 0x532) << 3;
  puVar9 = (undefined8 *)(lVar17 + 0x4d8);
  uVar11 = 0xffffffffffffffff;
  do {
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x532);
    if (lVar8 == 0) goto LAB_006ea088;
    lVar19 = lVar19 + 0x70;
    uVar21 = uVar11 + 1;
    lVar8 = lVar8 + -8;
    cVar4 = (byte *)*puVar9 < pbVar12;
    if (pbVar12 < (byte *)*puVar9) {
      cVar4 = -1;
    }
    puVar9 = puVar9 + 1;
    uVar11 = uVar21;
  } while (cVar4 == '\x01');
  if (cVar4 == '\0') goto LAB_006e9fa0;
LAB_006ea088:
  if (lVar16 == 0) goto LAB_006e9f3c;
  lVar16 = lVar16 + -1;
  lVar17 = *(long *)(lVar17 + uVar21 * 8 + 0x538);
  goto LAB_006ea03c;
LAB_006e9fa0:
  cVar4 = *(char *)(lVar19 + 0x6a);
  param_2[4] = (long)pbVar14;
  param_2[5] = -lVar18;
  param_2[6] = lVar19;
  param_2[7] = lVar1;
  param_2[8] = (long)(pbVar20 + ((lVar22 + (lVar3 - lVar2)) - lVar13));
  param_2[9] = 0;
  param_2[0xb] = (ulong)(cVar4 == '\x01');
  uVar10 = 0x1ff;
  goto LAB_006e9fc0;
}


// ===== 006ea0a4  FUN_006ea0a4 =====

void FUN_006ea0a4(undefined8 *param_1,long param_2,char *param_3)

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
  long lStack_28;
  
  iVar1 = dirfd(*(DIR **)(param_2 + 0x28));
  if (iVar1 != -1) {
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
    lStack_28 = 0;
    lStack_30 = 0;
    iVar1 = fstatat(iVar1,param_3,(stat *)&local_a0,0x100);
    if (iVar1 != -1) {
      *param_1 = 0;
      param_1[10] = _Stack_58;
      param_1[9] = local_60;
      param_1[0xc] = _Stack_48;
      param_1[0xb] = lStack_50;
      param_1[0xe] = _Stack_38;
      param_1[0xd] = local_40;
      param_1[0x10] = lStack_28;
      param_1[0xf] = lStack_30;
      param_1[2] = _Stack_98;
      param_1[1] = local_a0;
      param_1[4] = uStack_88;
      param_1[3] = _Stack_90;
      param_1[6] = _Stack_78;
      param_1[5] = local_80;
      param_1[8] = _Stack_68;
      param_1[7] = _Stack_70;
      return;
    }
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


// ===== 006ea194  <std::process::[i]::std::process::Command>::get_program =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[i]::std::process::Command>::get_program */

undefined1  [16] __rustcall <std::process::[i]::std::process::Command>::get_program(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(long *)(param_1 + 0x88) + -1;
  auVar1._0_8_ = *(undefined8 *)(param_1 + 0x80);
  return auVar1;
}


// ===== 006ea1a0  <std::process::[i]::std::process::Command>::get_current_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[i]::std::process::Command>::get_current_dir */

undefined1  [16] __rustcall
<std::process::[i]::std::process::Command>::get_current_dir(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(long *)(param_1 + 0x98) + -1;
  auVar1._0_8_ = *(undefined8 *)(param_1 + 0x90);
  return auVar1;
}


// ===== 006ea1ac  <std::process::[i]::std::process::Command>::get_resolved_envs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[i]::std::process::Command>::get_resolved_envs */

void __rustcall
<std::process::[i]::std::process::Command>::get_resolved_envs(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  
  FUN_006e4c10(&local_38,param_2 + 0x60);
  param_1[2] = local_38;
  param_1[3] = uStack_30;
  uVar1 = (ulong)(local_38 != 0);
  param_1[6] = local_38;
  param_1[7] = uStack_30;
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[4] = uVar1;
  param_1[5] = 0;
  if (local_38 == 0) {
    local_28 = 0;
  }
  param_1[8] = local_28;
  return;
}


// ===== 006ea208  <std::process::[i]::std::process::Command>::spawn =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[i]::std::process::Command>::spawn */

void __rustcall
<std::process::[i]::std::process::Command>::spawn(undefined8 *param_1,undefined8 param_2)

{
  int local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  FUN_006d6ca4(&local_38,param_2,0,1);
  if (local_38 == 2) {
    *(undefined4 *)param_1 = 2;
    param_1[1] = CONCAT44(uStack_2c,local_30);
    return;
  }
  *param_1 = CONCAT44(uStack_34,local_38);
  *(undefined4 *)(param_1 + 1) = local_30;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_28,uStack_2c);
  *(undefined4 *)((long)param_1 + 0x14) = local_24;
  return;
}


// ===== 006ea28c  <std::process::[i]::std::process::Command>::output =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[i]::std::process::Command>::output */

void __rustcall <std::process::[i]::std::process::Command>::output(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  int __fd;
  ulong uVar3;
  undefined1 auVar4 [16];
  int local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  long lStack_70;
  long local_68;
  undefined8 local_60;
  ulong local_58;
  int local_14;
  
  FUN_006d6ca4(&local_90,param_2,2,0);
  uVar1 = local_80;
  uVar3 = local_88;
  if ((int)local_90 == 2) goto LAB_006ea420;
  local_a8 = (int)local_90;
  uStack_a4 = local_90._4_4_;
  uVar3 = local_80 >> 0x20;
  local_a0 = (undefined4)local_88;
  uStack_9c = 0xffffffff;
  if (local_88 >> 0x20 != 0xffffffff) {
    close((int)(local_88 >> 0x20));
  }
  __fd = (int)local_80;
  local_90 = 0;
  local_88 = 1;
  lStack_70 = 1;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_98 = 0xffffffffffffffff;
  if (__fd == -1) {
    if (uVar3 != 0xffffffff) {
      __fd = (int)(uVar1 >> 0x20);
                    /* try { // try from 006ea34c to 006ea357 has its CatchHandler @ 006ea4c0 */
      local_14 = __fd;
      auVar4 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&local_14,&local_78);
      if (auVar4._0_8_ == 1) {
                    /* try { // try from 006ea498 to 006ea4bb has its CatchHandler @ 006ea4d8 */
        local_60 = auVar4._8_8_;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_0045b05c,0x2b,&local_60,&PTR_FUN_009773e8,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00977e08);
      }
      goto LAB_006ea364;
    }
  }
  else if (uVar3 == 0xffffffff) {
                    /* try { // try from 006ea324 to 006ea32f has its CatchHandler @ 006ea4c8 */
    local_14 = __fd;
    auVar4 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&local_14,&local_90);
    if (auVar4._0_8_ == 1) {
                    /* try { // try from 006ea440 to 006ea463 has its CatchHandler @ 006ea504 */
      local_60 = auVar4._8_8_;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045b05c,0x2b,&local_60,&PTR_FUN_009773e8,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977e20);
    }
LAB_006ea364:
    close(__fd);
  }
  else {
                    /* try { // try from 006ea36c to 006ea38f has its CatchHandler @ 006ea4d0 */
    lVar2 = FUN_006f853c(uVar1 & 0xffffffff,&local_90,uVar3,&local_78);
    if (lVar2 != 0) {
                    /* try { // try from 006ea46c to 006ea48f has its CatchHandler @ 006ea4f0 */
      local_60 = lVar2;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045b05c,0x2b,&local_60,&PTR_FUN_009773e8,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977e38);
    }
  }
  FUN_006e6fc4(&local_60,&local_a8);
  if ((int)local_60 == 1) {
    if (local_78 != 0) {
      __rustc::__rust_dealloc(lStack_70,local_78,1);
    }
    uVar3 = local_58;
    if (local_90 != 0) {
      __rustc::__rust_dealloc(local_88,local_90,1);
    }
  }
  else {
    uVar3 = local_88;
    if (local_90 != -1) {
      *param_1 = local_90;
      param_1[1] = local_88;
      param_1[2] = local_80;
      param_1[4] = lStack_70;
      param_1[3] = local_78;
      param_1[5] = local_68;
      *(undefined4 *)(param_1 + 6) = local_60._4_4_;
      return;
    }
  }
LAB_006ea420:
  *param_1 = -1;
  param_1[1] = uVar3;
  return;
}


// ===== 006ea56c  <std::process::[i]::std::process::Command>::status =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[i]::std::process::Command>::status */

ulong __rustcall
<std::process::[i]::std::process::Command>::status(undefined4 *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int local_48 [2];
  undefined8 local_40;
  int local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  uVar3 = FUN_006d6ca4(local_48,param_2,0,1);
  uVar1 = local_40;
  if (local_48[0] == 2) {
    *param_1 = 1;
    *(ulong *)(param_1 + 2) = local_40;
  }
  else {
    uVar3 = local_40 >> 0x20;
    local_40._4_4_ = -1;
    if (uVar3 != 0xffffffff) {
      close((int)(uVar1 >> 0x20));
    }
                    /* try { // try from 006ea5e8 to 006ea5f3 has its CatchHandler @ 006ea668 */
    FUN_006e6fc4(&local_30,local_48);
    if (local_30 == 1) {
      *(undefined8 *)(param_1 + 2) = local_28;
      *param_1 = 1;
    }
    else {
      *param_1 = 0;
      param_1[1] = local_2c;
    }
    if (local_40._4_4_ != -1) {
      close(local_40._4_4_);
    }
    if (local_38 != -1) {
      close(local_38);
    }
    uVar3 = (ulong)local_34;
    if (local_34 != 0xffffffff) {
      uVar2 = close(local_34);
      return (ulong)uVar2;
    }
  }
  return uVar3;
}


// ===== 006ea67c  <std::process::[i]::std::process::Command>::get_args =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[i]::std::process::Command>::get_args */

undefined1  [16] __rustcall <std::process::[i]::std::process::Command>::get_args(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x10) + -1;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = 8;
    }
    auVar3._8_8_ = *(long *)(param_1 + 8) + lVar2 * 8;
    auVar3._0_8_ = *(long *)(param_1 + 8) + lVar1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,lVar2,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009776c0);
}


// ===== 006ea6c0  <std::process::[i]::std::process::Command>::env_clear =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[i]::std::process::Command>::env_clear */

long __rustcall <std::process::[i]::std::process::Command>::env_clear(long param_1)

{
  long lVar1;
  ulong local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48 [2];
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x78) = 1;
  local_50 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar1 == 0) {
    local_50 = 0;
  }
  else {
    local_88 = 0;
    local_68 = 0;
    lStack_80 = lVar1;
    local_78 = *(undefined8 *)(param_1 + 0x68);
    lStack_60 = lVar1;
    local_58 = *(undefined8 *)(param_1 + 0x68);
  }
  local_90 = (ulong)(lVar1 != 0);
  local_70 = local_90;
  FUN_006eda68(local_48,&local_90);
  while (local_48[0] != 0) {
    lVar1 = local_48[0] + local_38 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x10),*(long *)(lVar1 + 8),1);
    }
    if (0 < *(long *)(lVar1 + 0x110)) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x118),*(long *)(lVar1 + 0x110),1);
    }
    FUN_006eda68(local_48,&local_90);
  }
  return param_1;
}


// ===== 006ea79c  <std::process::ChildStderr_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStderr as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<std::process::ChildStderr_as_std::io::Read>::read_vectored
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


// ===== 006ea830  <std::io::pipe::PipeReader_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeReader as std::io::Read>::read */

undefined1  [16] __rustcall
<std::io::pipe::PipeReader_as_std::io::Read>::read(int *param_1,void *param_2,size_t param_3)

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


// ===== 006ea8b8  FUN_006ea8b8 =====

void FUN_006ea8b8(undefined4 *param_1,char *param_2,uint *param_3)

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
  byte bVar11;
  byte bVar12;
  uint uVar13;
  
  puVar8 = PTR_PTR_0099f738;
  bVar11 = *(byte *)((long)param_3 + 10);
  if ((param_3[2] & 1) == 0) {
    if ((*(byte *)((long)param_3 + 9) & 1) != 0) {
      if ((bVar11 & 1) == 0) {
        uVar10 = 1;
        goto LAB_006ea904;
      }
LAB_006ea930:
      uVar10 = 0x401;
      bVar12 = *(byte *)((long)param_3 + 0xb);
      bVar11 = *(byte *)((long)param_3 + 0xd);
      uVar13 = 0x401;
      if (bVar12 == 1) goto LAB_006ea944;
      goto LAB_006ea968;
    }
    if ((bVar11 & 1) != 0) goto LAB_006ea930;
    if ((((param_3[3] & 1) == 0) && ((*(byte *)((long)param_3 + 0xd) & 1) == 0)) &&
       ((*(byte *)((long)param_3 + 0xb) & 1) == 0)) {
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
    if ((*(byte *)((long)param_3 + 9) & 1) == 0) {
      if ((bVar11 & 1) != 0) goto LAB_006ea914;
      if ((((*(byte *)((long)param_3 + 0xb) & 1) != 0) || ((param_3[3] & 1) != 0)) ||
         ((*(byte *)((long)param_3 + 0xd) & 1) != 0)) goto LAB_006ea948;
      uVar10 = 0;
      uVar13 = 0;
    }
    else {
      if ((bVar11 & 1) == 0) {
        uVar10 = 2;
LAB_006ea904:
        bVar11 = *(byte *)((long)param_3 + 0xd);
        bVar12 = *(byte *)((long)param_3 + 0xb);
      }
      else {
LAB_006ea914:
        uVar10 = 0x402;
        bVar12 = *(byte *)((long)param_3 + 0xb);
        bVar11 = *(byte *)((long)param_3 + 0xd);
        uVar13 = 0x402;
        if (bVar12 != 1) goto LAB_006ea968;
LAB_006ea944:
        uVar10 = uVar13;
        if ((bVar11 & 1) == 0) {
LAB_006ea948:
          uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_0045b680,0x3d);
          uVar9 = 1;
          *(undefined8 *)(param_1 + 2) = uVar4;
          goto LAB_006eaa94;
        }
      }
LAB_006ea968:
      if ((param_3[3] & 1) == 0) {
        uVar13 = 0x200;
        if ((bVar12 & 1) == 0) {
          uVar13 = 0;
        }
      }
      else {
        uVar13 = 0x240;
        if ((bVar12 & 1) == 0) {
          uVar13 = 0x40;
        }
      }
      if ((bVar11 & 1) != 0) {
        uVar13 = 0xc0;
      }
    }
    uVar1 = *param_3;
    uVar2 = param_3[1];
    do {
      iVar3 = open(param_2,uVar10 | uVar13 | uVar1 & 0xfffffffc | 0x80000,(ulong)uVar2);
      if (iVar3 != -1) {
        uVar9 = 0;
        param_1[1] = iVar3;
        goto LAB_006eaa94;
      }
      piVar5 = (int *)__errno();
      iVar3 = *piVar5;
      if (*(undefined ***)puVar8 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
                    /* try { // try from 006ea9e8 to 006ea9f7 has its CatchHandler @ 006eaab0 */
      lVar6 = core::io::error::os_functions::get_os_functions();
      uVar7 = (**(code **)(lVar6 + 0x10))(iVar3);
    } while ((uVar7 & 1) != 0);
    *(ulong *)(param_1 + 2) = (long)iVar3 << 0x20 | 2;
  }
  uVar9 = 1;
LAB_006eaa94:
  *param_1 = uVar9;
  return;
}


// ===== 006eaad0  <std::process::ChildStdout_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdout as std::io::Read>::read_buf */

ulong __rustcall <std::process::ChildStdout_as_std::io::Read>::read_buf(int *param_1,long *param_2)

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


// ===== 006eab80  FUN_006eab80 =====

void FUN_006eab80(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  size_t sVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_b0;
  
  puVar19 = (undefined8 *)*param_2;
  if (puVar19 != (undefined8 *)0x0) {
    puVar24 = (undefined8 *)param_3[1];
    uVar20 = param_3[2];
    lVar11 = param_2[1];
    do {
      uVar3 = *(ushort *)((long)puVar19 + 0x21a);
      puVar22 = (undefined8 *)(ulong)uVar3;
      puVar16 = (undefined8 *)0xffffffffffffffff;
      puVar9 = puVar19 + 1;
      lVar18 = (long)puVar22 * 0x18;
      do {
        puVar17 = puVar22;
        if (lVar18 == 0) goto LAB_006eac24;
        puVar17 = puVar9 + 1;
        uVar23 = puVar9[2];
        puVar9 = puVar9 + 3;
        sVar15 = uVar20;
        if (uVar23 <= uVar20) {
          sVar15 = uVar23;
        }
        iVar8 = memcmp(puVar24,(void *)*puVar17,sVar15);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
        lVar18 = lVar18 + -0x18;
        lVar5 = uVar20 - uVar23;
        if (iVar8 != 0) {
          lVar5 = (long)iVar8;
        }
        cVar1 = 0 < lVar5;
        if (lVar5 < 0) {
          cVar1 = -1;
        }
      } while (cVar1 == '\x01');
      puVar17 = puVar16;
      if (cVar1 == '\0') {
        param_2 = puVar16;
        puVar9 = puVar19;
        if (*param_3 != 0) {
          __rustc::__rust_dealloc(puVar24,*param_3,1);
        }
        goto LAB_006eac50;
      }
LAB_006eac24:
      if (lVar11 == 0) goto LAB_006ead20;
      lVar11 = lVar11 + -1;
      puVar19 = (undefined8 *)puVar19[(long)puVar17 + 0x44];
    } while( true );
  }
  lVar11 = *param_3;
  puVar9 = (undefined8 *)param_3[1];
  if (lVar11 != -1) {
    lVar18 = param_3[2];
    uVar10 = *param_4;
    uVar25 = param_4[1];
    uVar14 = param_4[2];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar19 = (undefined8 *)__rustc::__rust_alloc(0x220,8);
    if (puVar19 == (undefined8 *)0x0) {
                    /* try { // try from 006eb460 to 006eb46b has its CatchHandler @ 006eb698 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x220);
    }
    *param_2 = puVar19;
    param_2[1] = 0;
    *(undefined2 *)((long)puVar19 + 0x21a) = 1;
    *puVar19 = 0;
    puVar19[1] = lVar11;
    puVar19[2] = puVar9;
    puVar19[3] = lVar18;
    puVar19[0x22] = uVar10;
    puVar19[0x23] = uVar25;
    puVar19[0x24] = uVar14;
    goto LAB_006eace4;
  }
LAB_006eac50:
  uVar27 = param_4[1];
  uVar26 = *param_4;
  uVar10 = puVar9[(long)param_2 * 3 + 0x24];
  uVar14 = puVar9[(long)param_2 * 3 + 0x23];
  uVar25 = puVar9[(long)param_2 * 3 + 0x22];
  puVar9[(long)param_2 * 3 + 0x24] = param_4[2];
  puVar9[(long)param_2 * 3 + 0x23] = uVar27;
  puVar9[(long)param_2 * 3 + 0x22] = uVar26;
  param_1[1] = uVar14;
  *param_1 = uVar25;
  param_1[2] = uVar10;
  return;
LAB_006ead20:
  lVar11 = *param_3;
  puVar9 = puVar24;
  if (lVar11 != -1) {
    uVar10 = *param_4;
    uVar25 = param_4[1];
    uVar14 = param_4[2];
    if (uVar3 < 0xb) {
      plVar13 = puVar19 + (long)puVar17 * 3 + 1;
      if (puVar17 <= puVar22 && (long)puVar22 - (long)puVar17 != 0) {
        sVar15 = ((long)puVar22 - (long)puVar17) * 0x18;
        memmove(puVar19 + (long)puVar17 * 3 + 4,plVar13,sVar15);
        memmove(puVar19 + (long)puVar17 * 3 + 0x25,puVar19 + (long)puVar17 * 3 + 0x22,sVar15);
      }
      *plVar13 = lVar11;
      plVar13[1] = (long)puVar24;
      plVar13[2] = uVar20;
      puVar19[(long)puVar17 * 3 + 0x22] = uVar10;
      puVar19[(long)puVar17 * 3 + 0x23] = uVar25;
      puVar19[(long)puVar17 * 3 + 0x24] = uVar14;
      *(ushort *)((long)puVar19 + 0x21a) = uVar3 + 1;
    }
    else {
      if (&DAT_00000004 < puVar17) {
        if (puVar17 == (undefined8 *)&DAT_00000005) {
          bVar7 = false;
          uVar23 = 5;
        }
        else if (puVar17 == (undefined8 *)0x6) {
          puVar17 = (undefined8 *)0x0;
          bVar7 = true;
          uVar23 = 5;
        }
        else {
          puVar17 = (undefined8 *)((long)puVar17 + -7);
          bVar7 = true;
          uVar23 = 6;
        }
      }
      else {
        bVar7 = false;
        uVar23 = 4;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar9 = (undefined8 *)__rustc::__rust_alloc(0x220,8);
      if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 006eb4ec to 006eb4f7 has its CatchHandler @ 006eb59c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x220);
      }
      *puVar9 = 0;
      uVar12 = (ulong)*(ushort *)((long)puVar19 + 0x21a) + ~uVar23;
      *(short *)((long)puVar9 + 0x21a) = (short)uVar12;
      plVar13 = puVar19 + uVar23 * 3 + 1;
      puVar16 = puVar19 + uVar23 * 3 + 0x22;
      lVar18 = *plVar13;
      local_e0 = plVar13[1];
      local_d0 = *puVar16;
      local_d8 = puVar16[1];
      if (0xb < uVar12) {
                    /* try { // try from 006eb4d4 to 006eb4e7 has its CatchHandler @ 006eb5a4 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar12,0xb,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977a78);
      }
      local_e8 = puVar16[2];
      local_f0 = plVar13[2];
      memcpy(puVar9 + 1,puVar19 + uVar23 * 3 + 4,uVar12 * 0x18);
      memcpy(puVar9 + 0x22,puVar19 + uVar23 * 3 + 0x25,uVar12 * 0x18);
      *(short *)((long)puVar19 + 0x21a) = (short)uVar23;
      puVar16 = puVar9;
      if (!bVar7) {
        puVar16 = puVar19;
      }
      plVar13 = puVar16 + (long)puVar17 * 3 + 1;
      uVar3 = *(ushort *)((long)puVar16 + 0x21a);
      lVar5 = (long)(ulong)uVar3 - (long)puVar17;
      if (puVar17 <= (undefined8 *)(ulong)uVar3 && lVar5 != 0) {
        sVar15 = lVar5 * 0x18;
        memmove(puVar16 + (long)puVar17 * 3 + 4,plVar13,sVar15);
        memmove(puVar16 + (long)puVar17 * 3 + 0x25,puVar16 + (long)puVar17 * 3 + 0x22,sVar15);
      }
      plVar13[2] = uVar20;
      *plVar13 = lVar11;
      plVar13[1] = (long)puVar24;
      puVar16[(long)puVar17 * 3 + 0x22] = uVar10;
      puVar16[(long)puVar17 * 3 + 0x23] = uVar25;
      puVar16[(long)puVar17 * 3 + 0x24] = uVar14;
      *(ushort *)((long)puVar16 + 0x21a) = uVar3 + 1;
      if (lVar18 != -1) {
        local_f8 = 0;
        do {
          puVar24 = (undefined8 *)*puVar19;
          if (puVar24 == (undefined8 *)0x0) {
            puVar19 = (undefined8 *)*param_2;
            if (puVar19 == (undefined8 *)0x0) {
                    /* try { // try from 006eb4fc to 006eb507 has its CatchHandler @ 006eb574 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977218);
            }
            uVar20 = param_2[1];
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            puVar24 = (undefined8 *)__rustc::__rust_alloc(0x280,8);
            if (puVar24 == (undefined8 *)0x0) {
                    /* try { // try from 006eb50c to 006eb517 has its CatchHandler @ 006eb570 */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x280);
            }
            *puVar24 = 0;
            *(undefined2 *)((long)puVar24 + 0x21a) = 0;
            puVar24[0x44] = puVar19;
            if (0xfffffffffffffffe < uVar20) {
                    /* try { // try from 006eb51c to 006eb527 has its CatchHandler @ 006eb55c */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d50);
            }
            *puVar19 = puVar24;
            *(undefined2 *)(puVar19 + 0x43) = 0;
            *param_2 = puVar24;
            param_2[1] = uVar20 + 1;
            if (local_f8 != uVar20) {
                    /* try { // try from 006eb52c to 006eb543 has its CatchHandler @ 006eb548 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic
                        (&DAT_0045b6f0,0x30,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977b68);
            }
            *(undefined2 *)((long)puVar24 + 0x21a) = 1;
            puVar24[1] = lVar18;
            puVar24[2] = local_e0;
            puVar24[0x45] = puVar9;
            puVar24[3] = local_f0;
            *puVar9 = puVar24;
            puVar24[0x22] = local_d0;
            puVar24[0x23] = local_d8;
            *(undefined2 *)(puVar9 + 0x43) = 1;
            puVar24[0x24] = local_e8;
            break;
          }
          uVar3 = *(ushort *)((long)puVar24 + 0x21a);
          uVar20 = (ulong)uVar3;
          uVar4 = *(ushort *)(puVar19 + 0x43);
          local_b0 = (ulong)uVar4;
          if (uVar3 < 0xb) {
            plVar13 = puVar24 + local_b0 * 3 + 1;
            uVar23 = local_b0 + 1;
            if (uVar4 < uVar3) {
              sVar15 = (uVar20 - local_b0) * 0x18;
              memmove(puVar24 + uVar23 * 3 + 1,plVar13,sVar15);
              memmove(puVar24 + uVar23 * 3 + 0x22,puVar24 + local_b0 * 3 + 0x22,sVar15);
            }
            *plVar13 = lVar18;
            plVar13[1] = local_e0;
            plVar13[2] = local_f0;
            puVar24[local_b0 * 3 + 0x22] = local_d0;
            puVar24[local_b0 * 3 + 0x23] = local_d8;
            puVar24[local_b0 * 3 + 0x24] = local_e8;
            if (uVar4 < uVar3) {
              memmove(puVar24 + local_b0 + 0x46,puVar24 + local_b0 + 0x45,(uVar20 - local_b0) * 8);
            }
            *(ushort *)((long)puVar24 + 0x21a) = uVar3 + 1;
            puVar24[local_b0 + 0x45] = puVar9;
            if (uVar23 < uVar20 + 2) {
              lVar11 = local_b0 + 0x45;
              do {
                sVar6 = (short)lVar11;
                puVar19 = (undefined8 *)puVar24[lVar11];
                lVar11 = lVar11 + 1;
                *puVar19 = puVar24;
                *(short *)(puVar19 + 0x43) = sVar6 + -0x44;
              } while (lVar11 - uVar20 != 0x46);
            }
            break;
          }
          if (uVar4 < 5) {
            bVar7 = false;
            uVar23 = 4;
          }
          else if (uVar4 == 5) {
            bVar7 = false;
            uVar23 = local_b0;
          }
          else if (uVar4 == 6) {
            bVar7 = true;
            local_b0 = 0;
            uVar23 = 5;
          }
          else {
            local_b0 = local_b0 - 7;
            bVar7 = true;
            uVar23 = 6;
          }
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar19 = (undefined8 *)__rustc::__rust_alloc(0x280,8);
          if (puVar19 == (undefined8 *)0x0) {
                    /* try { // try from 006eb4a4 to 006eb4b3 has its CatchHandler @ 006eb610 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x280);
          }
          *puVar19 = 0;
          uVar12 = (ulong)*(ushort *)((long)puVar24 + 0x21a) + ~uVar23;
          *(short *)((long)puVar19 + 0x21a) = (short)uVar12;
          plVar13 = puVar24 + uVar23 * 3 + 1;
          puVar16 = puVar24 + uVar23 * 3 + 0x22;
          lVar11 = *plVar13;
          lVar5 = plVar13[1];
          uVar10 = *puVar16;
          uVar25 = puVar16[1];
          if (0xb < uVar12) {
                    /* try { // try from 006eb470 to 006eb487 has its CatchHandler @ 006eb61c */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,uVar12,0xb,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977a78);
          }
          uVar14 = puVar16[2];
          lVar21 = plVar13[2];
          memcpy(puVar19 + 1,puVar24 + uVar23 * 3 + 4,uVar12 * 0x18);
          memcpy(puVar19 + 0x22,puVar24 + uVar23 * 3 + 0x25,uVar12 * 0x18);
          *(short *)((long)puVar24 + 0x21a) = (short)uVar23;
          uVar12 = (ulong)*(ushort *)((long)puVar19 + 0x21a);
          lVar2 = uVar12 + 1;
          if (0xb < uVar12) {
                    /* try { // try from 006eb48c to 006eb49f has its CatchHandler @ 006eb650 */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,lVar2,0xc,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d68);
          }
          if (uVar20 - uVar23 != lVar2) {
                    /* try { // try from 006eb4b8 to 006eb4cf has its CatchHandler @ 006eb650 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic(&DAT_0045add3,0x28,&DAT_009770a8);
          }
          local_f8 = local_f8 + 1;
          memcpy(puVar19 + 0x44,puVar24 + uVar23 + 0x45,lVar2 * 8);
          uVar20 = 0;
          do {
            puVar16 = (undefined8 *)puVar19[uVar20 + 0x44];
            uVar23 = uVar20;
            if (uVar20 < uVar12) {
              uVar23 = uVar20 + 1;
            }
            *puVar16 = puVar19;
            *(short *)(puVar16 + 0x43) = (short)uVar20;
          } while ((uVar20 < uVar12) && (uVar20 = uVar23, uVar23 <= uVar12));
          uVar20 = local_b0 + 1;
          puVar16 = puVar19;
          if (!bVar7) {
            puVar16 = puVar24;
          }
          uVar3 = *(ushort *)((long)puVar16 + 0x21a);
          uVar23 = (ulong)uVar3;
          iVar8 = (int)local_b0;
          plVar13 = puVar16 + (long)iVar8 * 3 + 1;
          lVar2 = uVar23 - local_b0;
          if (uVar23 < local_b0 || lVar2 == 0) {
            *plVar13 = lVar18;
            plVar13[1] = local_e0;
            plVar13[2] = local_f0;
            puVar16[(long)iVar8 * 3 + 0x22] = local_d0;
            puVar16[(long)iVar8 * 3 + 0x23] = local_d8;
            puVar16[(long)iVar8 * 3 + 0x24] = local_e8;
          }
          else {
            memmove(puVar16 + uVar20 * 3 + 1,plVar13,lVar2 * 0x18);
            puVar22 = puVar16 + (long)iVar8 * 3 + 0x22;
            *plVar13 = lVar18;
            plVar13[1] = local_e0;
            plVar13[2] = local_f0;
            memmove(puVar16 + uVar20 * 3 + 0x22,puVar22,lVar2 * 0x18);
            *puVar22 = local_d0;
            puVar22[1] = local_d8;
            puVar22[2] = local_e8;
            memmove(puVar16 + local_b0 + 0x46,puVar16 + local_b0 + 0x45,lVar2 * 8);
          }
          puVar16[local_b0 + 0x45] = puVar9;
          *(ushort *)((long)puVar16 + 0x21a) = uVar3 + 1;
          if (uVar20 < uVar23 + 2) {
            lVar18 = local_b0 + 0x45;
            do {
              sVar6 = (short)lVar18;
              puVar9 = (undefined8 *)puVar16[lVar18];
              lVar18 = lVar18 + 1;
              *puVar9 = puVar16;
              *(short *)(puVar9 + 0x43) = sVar6 + -0x44;
            } while (lVar18 - uVar23 != 0x46);
          }
          lVar18 = lVar11;
          puVar9 = puVar19;
          puVar19 = puVar24;
          local_f0 = lVar21;
          local_e8 = uVar14;
          local_e0 = lVar5;
          local_d8 = uVar25;
          local_d0 = uVar10;
        } while (lVar11 != -1);
      }
    }
LAB_006eace4:
    lVar11 = param_2[2];
    *param_1 = 0xffffffffffffffff;
    param_2[2] = lVar11 + 1;
    return;
  }
  goto LAB_006eac50;
}


// ===== 006eb6cc  FUN_006eb6cc =====

void FUN_006eb6cc(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  size_t sVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_b0;
  
  puVar19 = (undefined8 *)*param_2;
  if (puVar19 != (undefined8 *)0x0) {
    puVar24 = (undefined8 *)param_3[1];
    uVar20 = param_3[2];
    lVar11 = param_2[1];
    do {
      uVar3 = *(ushort *)((long)puVar19 + 0x21a);
      puVar22 = (undefined8 *)(ulong)uVar3;
      puVar16 = (undefined8 *)0xffffffffffffffff;
      puVar9 = puVar19 + 1;
      lVar18 = (long)puVar22 * 0x18;
      do {
        puVar17 = puVar22;
        if (lVar18 == 0) goto LAB_006eb770;
        puVar17 = puVar9 + 1;
        uVar23 = puVar9[2];
        puVar9 = puVar9 + 3;
        sVar15 = uVar20;
        if (uVar23 <= uVar20) {
          sVar15 = uVar23;
        }
        iVar8 = memcmp(puVar24,(void *)*puVar17,sVar15);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
        lVar18 = lVar18 + -0x18;
        lVar5 = uVar20 - uVar23;
        if (iVar8 != 0) {
          lVar5 = (long)iVar8;
        }
        cVar1 = 0 < lVar5;
        if (lVar5 < 0) {
          cVar1 = -1;
        }
      } while (cVar1 == '\x01');
      puVar17 = puVar16;
      if (cVar1 == '\0') {
        param_2 = puVar16;
        puVar9 = puVar19;
        if (*param_3 != 0) {
          __rustc::__rust_dealloc(puVar24,*param_3,1);
        }
        goto LAB_006eb79c;
      }
LAB_006eb770:
      if (lVar11 == 0) goto LAB_006eb86c;
      lVar11 = lVar11 + -1;
      puVar19 = (undefined8 *)puVar19[(long)puVar17 + 0x44];
    } while( true );
  }
  lVar11 = *param_3;
  puVar9 = (undefined8 *)param_3[1];
  if (lVar11 != -1) {
    lVar18 = param_3[2];
    uVar10 = *param_4;
    uVar25 = param_4[1];
    uVar14 = param_4[2];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar19 = (undefined8 *)__rustc::__rust_alloc(0x220,8);
    if (puVar19 == (undefined8 *)0x0) {
                    /* try { // try from 006ebfac to 006ebfb7 has its CatchHandler @ 006ec204 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x220);
    }
    *param_2 = puVar19;
    param_2[1] = 0;
    *(undefined2 *)((long)puVar19 + 0x21a) = 1;
    *puVar19 = 0;
    puVar19[1] = lVar11;
    puVar19[2] = puVar9;
    puVar19[3] = lVar18;
    puVar19[0x22] = uVar10;
    puVar19[0x23] = uVar25;
    puVar19[0x24] = uVar14;
    goto LAB_006eb830;
  }
LAB_006eb79c:
  uVar27 = param_4[1];
  uVar26 = *param_4;
  uVar10 = puVar9[(long)param_2 * 3 + 0x24];
  uVar14 = puVar9[(long)param_2 * 3 + 0x23];
  uVar25 = puVar9[(long)param_2 * 3 + 0x22];
  puVar9[(long)param_2 * 3 + 0x24] = param_4[2];
  puVar9[(long)param_2 * 3 + 0x23] = uVar27;
  puVar9[(long)param_2 * 3 + 0x22] = uVar26;
  param_1[1] = uVar14;
  *param_1 = uVar25;
  param_1[2] = uVar10;
  return;
LAB_006eb86c:
  lVar11 = *param_3;
  puVar9 = puVar24;
  if (lVar11 != -1) {
    uVar10 = *param_4;
    uVar25 = param_4[1];
    uVar14 = param_4[2];
    if (uVar3 < 0xb) {
      plVar13 = puVar19 + (long)puVar17 * 3 + 1;
      if (puVar17 <= puVar22 && (long)puVar22 - (long)puVar17 != 0) {
        sVar15 = ((long)puVar22 - (long)puVar17) * 0x18;
        memmove(puVar19 + (long)puVar17 * 3 + 4,plVar13,sVar15);
        memmove(puVar19 + (long)puVar17 * 3 + 0x25,puVar19 + (long)puVar17 * 3 + 0x22,sVar15);
      }
      *plVar13 = lVar11;
      plVar13[1] = (long)puVar24;
      plVar13[2] = uVar20;
      puVar19[(long)puVar17 * 3 + 0x22] = uVar10;
      puVar19[(long)puVar17 * 3 + 0x23] = uVar25;
      puVar19[(long)puVar17 * 3 + 0x24] = uVar14;
      *(ushort *)((long)puVar19 + 0x21a) = uVar3 + 1;
    }
    else {
      if (&DAT_00000004 < puVar17) {
        if (puVar17 == (undefined8 *)&DAT_00000005) {
          bVar7 = false;
          uVar23 = 5;
        }
        else if (puVar17 == (undefined8 *)0x6) {
          puVar17 = (undefined8 *)0x0;
          bVar7 = true;
          uVar23 = 5;
        }
        else {
          puVar17 = (undefined8 *)((long)puVar17 + -7);
          bVar7 = true;
          uVar23 = 6;
        }
      }
      else {
        bVar7 = false;
        uVar23 = 4;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar9 = (undefined8 *)__rustc::__rust_alloc(0x220,8);
      if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 006ec038 to 006ec043 has its CatchHandler @ 006ec0f0 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x220);
      }
      *puVar9 = 0;
      uVar12 = (ulong)*(ushort *)((long)puVar19 + 0x21a) + ~uVar23;
      *(short *)((long)puVar9 + 0x21a) = (short)uVar12;
      plVar13 = puVar19 + uVar23 * 3 + 1;
      puVar16 = puVar19 + uVar23 * 3 + 0x22;
      lVar18 = *plVar13;
      local_e0 = plVar13[1];
      local_d0 = *puVar16;
      local_d8 = puVar16[1];
      if (0xb < uVar12) {
                    /* try { // try from 006ec020 to 006ec033 has its CatchHandler @ 006ec0f8 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar12,0xb,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977a78);
      }
      local_e8 = puVar16[2];
      local_f0 = plVar13[2];
      memcpy(puVar9 + 1,puVar19 + uVar23 * 3 + 4,uVar12 * 0x18);
      memcpy(puVar9 + 0x22,puVar19 + uVar23 * 3 + 0x25,uVar12 * 0x18);
      *(short *)((long)puVar19 + 0x21a) = (short)uVar23;
      puVar16 = puVar9;
      if (!bVar7) {
        puVar16 = puVar19;
      }
      plVar13 = puVar16 + (long)puVar17 * 3 + 1;
      uVar3 = *(ushort *)((long)puVar16 + 0x21a);
      lVar5 = (long)(ulong)uVar3 - (long)puVar17;
      if (puVar17 <= (undefined8 *)(ulong)uVar3 && lVar5 != 0) {
        sVar15 = lVar5 * 0x18;
        memmove(puVar16 + (long)puVar17 * 3 + 4,plVar13,sVar15);
        memmove(puVar16 + (long)puVar17 * 3 + 0x25,puVar16 + (long)puVar17 * 3 + 0x22,sVar15);
      }
      plVar13[2] = uVar20;
      *plVar13 = lVar11;
      plVar13[1] = (long)puVar24;
      puVar16[(long)puVar17 * 3 + 0x22] = uVar10;
      puVar16[(long)puVar17 * 3 + 0x23] = uVar25;
      puVar16[(long)puVar17 * 3 + 0x24] = uVar14;
      *(ushort *)((long)puVar16 + 0x21a) = uVar3 + 1;
      if (lVar18 != -1) {
        local_f8 = 0;
        do {
          puVar24 = (undefined8 *)*puVar19;
          if (puVar24 == (undefined8 *)0x0) {
            puVar19 = (undefined8 *)*param_2;
            if (puVar19 == (undefined8 *)0x0) {
                    /* try { // try from 006ec048 to 006ec053 has its CatchHandler @ 006ec0c4 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977218);
            }
            uVar20 = param_2[1];
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            puVar24 = (undefined8 *)__rustc::__rust_alloc(0x280,8);
            if (puVar24 == (undefined8 *)0x0) {
                    /* try { // try from 006ec058 to 006ec063 has its CatchHandler @ 006ec0c0 */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x280);
            }
            *puVar24 = 0;
            *(undefined2 *)((long)puVar24 + 0x21a) = 0;
            puVar24[0x44] = puVar19;
            if (0xfffffffffffffffe < uVar20) {
                    /* try { // try from 006ec068 to 006ec073 has its CatchHandler @ 006ec0ac */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d50);
            }
            *puVar19 = puVar24;
            *(undefined2 *)(puVar19 + 0x43) = 0;
            *param_2 = puVar24;
            param_2[1] = uVar20 + 1;
            if (local_f8 != uVar20) {
                    /* try { // try from 006ec078 to 006ec08f has its CatchHandler @ 006ec094 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic
                        (&DAT_0045b6f0,0x30,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977b68);
            }
            *(undefined2 *)((long)puVar24 + 0x21a) = 1;
            puVar24[1] = lVar18;
            puVar24[2] = local_e0;
            puVar24[0x45] = puVar9;
            puVar24[3] = local_f0;
            *puVar9 = puVar24;
            puVar24[0x22] = local_d0;
            puVar24[0x23] = local_d8;
            *(undefined2 *)(puVar9 + 0x43) = 1;
            puVar24[0x24] = local_e8;
            break;
          }
          uVar3 = *(ushort *)((long)puVar24 + 0x21a);
          uVar20 = (ulong)uVar3;
          uVar4 = *(ushort *)(puVar19 + 0x43);
          local_b0 = (ulong)uVar4;
          if (uVar3 < 0xb) {
            plVar13 = puVar24 + local_b0 * 3 + 1;
            uVar23 = local_b0 + 1;
            if (uVar4 < uVar3) {
              sVar15 = (uVar20 - local_b0) * 0x18;
              memmove(puVar24 + uVar23 * 3 + 1,plVar13,sVar15);
              memmove(puVar24 + uVar23 * 3 + 0x22,puVar24 + local_b0 * 3 + 0x22,sVar15);
            }
            *plVar13 = lVar18;
            plVar13[1] = local_e0;
            plVar13[2] = local_f0;
            puVar24[local_b0 * 3 + 0x22] = local_d0;
            puVar24[local_b0 * 3 + 0x23] = local_d8;
            puVar24[local_b0 * 3 + 0x24] = local_e8;
            if (uVar4 < uVar3) {
              memmove(puVar24 + local_b0 + 0x46,puVar24 + local_b0 + 0x45,(uVar20 - local_b0) * 8);
            }
            *(ushort *)((long)puVar24 + 0x21a) = uVar3 + 1;
            puVar24[local_b0 + 0x45] = puVar9;
            if (uVar23 < uVar20 + 2) {
              lVar11 = local_b0 + 0x45;
              do {
                sVar6 = (short)lVar11;
                puVar19 = (undefined8 *)puVar24[lVar11];
                lVar11 = lVar11 + 1;
                *puVar19 = puVar24;
                *(short *)(puVar19 + 0x43) = sVar6 + -0x44;
              } while (lVar11 - uVar20 != 0x46);
            }
            break;
          }
          if (uVar4 < 5) {
            bVar7 = false;
            uVar23 = 4;
          }
          else if (uVar4 == 5) {
            bVar7 = false;
            uVar23 = local_b0;
          }
          else if (uVar4 == 6) {
            bVar7 = true;
            local_b0 = 0;
            uVar23 = 5;
          }
          else {
            local_b0 = local_b0 - 7;
            bVar7 = true;
            uVar23 = 6;
          }
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar19 = (undefined8 *)__rustc::__rust_alloc(0x280,8);
          if (puVar19 == (undefined8 *)0x0) {
                    /* try { // try from 006ebff0 to 006ebfff has its CatchHandler @ 006ec170 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x280);
          }
          *puVar19 = 0;
          uVar12 = (ulong)*(ushort *)((long)puVar24 + 0x21a) + ~uVar23;
          *(short *)((long)puVar19 + 0x21a) = (short)uVar12;
          plVar13 = puVar24 + uVar23 * 3 + 1;
          puVar16 = puVar24 + uVar23 * 3 + 0x22;
          lVar11 = *plVar13;
          lVar5 = plVar13[1];
          uVar10 = *puVar16;
          uVar25 = puVar16[1];
          if (0xb < uVar12) {
                    /* try { // try from 006ebfbc to 006ebfd3 has its CatchHandler @ 006ec17c */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,uVar12,0xb,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977a78);
          }
          uVar14 = puVar16[2];
          lVar21 = plVar13[2];
          memcpy(puVar19 + 1,puVar24 + uVar23 * 3 + 4,uVar12 * 0x18);
          memcpy(puVar19 + 0x22,puVar24 + uVar23 * 3 + 0x25,uVar12 * 0x18);
          *(short *)((long)puVar24 + 0x21a) = (short)uVar23;
          uVar12 = (ulong)*(ushort *)((long)puVar19 + 0x21a);
          lVar2 = uVar12 + 1;
          if (0xb < uVar12) {
                    /* try { // try from 006ebfd8 to 006ebfeb has its CatchHandler @ 006ec1b8 */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,lVar2,0xc,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d68);
          }
          if (uVar20 - uVar23 != lVar2) {
                    /* try { // try from 006ec004 to 006ec01b has its CatchHandler @ 006ec1b8 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic(&DAT_0045add3,0x28,&DAT_009770a8);
          }
          local_f8 = local_f8 + 1;
          memcpy(puVar19 + 0x44,puVar24 + uVar23 + 0x45,lVar2 * 8);
          uVar20 = 0;
          do {
            puVar16 = (undefined8 *)puVar19[uVar20 + 0x44];
            uVar23 = uVar20;
            if (uVar20 < uVar12) {
              uVar23 = uVar20 + 1;
            }
            *puVar16 = puVar19;
            *(short *)(puVar16 + 0x43) = (short)uVar20;
          } while ((uVar20 < uVar12) && (uVar20 = uVar23, uVar23 <= uVar12));
          uVar20 = local_b0 + 1;
          puVar16 = puVar19;
          if (!bVar7) {
            puVar16 = puVar24;
          }
          uVar3 = *(ushort *)((long)puVar16 + 0x21a);
          uVar23 = (ulong)uVar3;
          iVar8 = (int)local_b0;
          plVar13 = puVar16 + (long)iVar8 * 3 + 1;
          lVar2 = uVar23 - local_b0;
          if (uVar23 < local_b0 || lVar2 == 0) {
            *plVar13 = lVar18;
            plVar13[1] = local_e0;
            plVar13[2] = local_f0;
            puVar16[(long)iVar8 * 3 + 0x22] = local_d0;
            puVar16[(long)iVar8 * 3 + 0x23] = local_d8;
            puVar16[(long)iVar8 * 3 + 0x24] = local_e8;
          }
          else {
            memmove(puVar16 + uVar20 * 3 + 1,plVar13,lVar2 * 0x18);
            puVar22 = puVar16 + (long)iVar8 * 3 + 0x22;
            *plVar13 = lVar18;
            plVar13[1] = local_e0;
            plVar13[2] = local_f0;
            memmove(puVar16 + uVar20 * 3 + 0x22,puVar22,lVar2 * 0x18);
            *puVar22 = local_d0;
            puVar22[1] = local_d8;
            puVar22[2] = local_e8;
            memmove(puVar16 + local_b0 + 0x46,puVar16 + local_b0 + 0x45,lVar2 * 8);
          }
          puVar16[local_b0 + 0x45] = puVar9;
          *(ushort *)((long)puVar16 + 0x21a) = uVar3 + 1;
          if (uVar20 < uVar23 + 2) {
            lVar18 = local_b0 + 0x45;
            do {
              sVar6 = (short)lVar18;
              puVar9 = (undefined8 *)puVar16[lVar18];
              lVar18 = lVar18 + 1;
              *puVar9 = puVar16;
              *(short *)(puVar9 + 0x43) = sVar6 + -0x44;
            } while (lVar18 - uVar23 != 0x46);
          }
          lVar18 = lVar11;
          puVar9 = puVar19;
          puVar19 = puVar24;
          local_f0 = lVar21;
          local_e8 = uVar14;
          local_e0 = lVar5;
          local_d8 = uVar25;
          local_d0 = uVar10;
        } while (lVar11 != -1);
      }
    }
LAB_006eb830:
    lVar11 = param_2[2];
    *param_1 = 0xfffffffffffffffe;
    param_2[2] = lVar11 + 1;
    return;
  }
  goto LAB_006eb79c;
}


// ===== 006ec23c  <std::fs::[j]::std::fs::OpenOptions>::_open =====

/* WARNING: Removing unreachable block (ram,0x006ec2bc) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[j]::std::fs::OpenOptions>::_open */

void __rustcall
<std::fs::[j]::std::fs::OpenOptions>::_open
          (undefined4 *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  undefined4 uVar1;
  int local_1e8;
  undefined4 local_1e4;
  undefined **local_1e0;
  undefined1 auStack_1d8 [384];
  long local_58;
  undefined8 local_50;
  undefined8 local_28;
  
  local_28 = param_2;
  if (param_4 < 0x180) {
    memcpy(auStack_1d8,param_3,param_4);
    auStack_1d8[param_4] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_58,auStack_1d8,param_4 + 1);
    if (local_58 != 1) {
      FUN_006ea8b8(&local_1e8,local_50,param_2);
      goto joined_r0x006ec30c;
    }
    local_1e0 = &PTR_DAT_00977090;
  }
  else {
    FUN_006c94c0(&local_1e8,param_3,param_4,&local_28,FUN_006d0e6c);
joined_r0x006ec30c:
    if (local_1e8 != 1) {
      uVar1 = 0;
      param_1[1] = local_1e4;
      goto LAB_006ec31c;
    }
  }
  *(undefined ***)(param_1 + 2) = local_1e0;
  uVar1 = 1;
LAB_006ec31c:
  *param_1 = uVar1;
  return;
}


// ===== 006ec338  <std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::split_at_checked =====

/* WARNING: Removing unreachable block (ram,0x006ec354) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::split_at_checked */

void __rustcall
<std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::split_at_checked
          (long *param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  
  if ((((param_4 != 0) && (param_3 != param_4)) && (param_3 <= param_4)) &&
     (iVar1 = <std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::
              try_check_public_boundary::slow_path(), iVar1 == 0)) {
    *param_1 = 0;
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[2] = param_2 + param_4;
  param_1[3] = param_3 - param_4;
  return;
}


// ===== 006ec3c0  <std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::to_ascii_lowercase =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::to_ascii_lowercase */

void __rustcall
<std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::to_ascii_lowercase
          (ulong *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar4;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar20;
  byte bVar28;
  ulong uVar21;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined8 uVar29;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(param_3,1);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,param_3);
  }
  memcpy(__dest,param_2,param_3);
  if (param_3 < 8) {
    uVar1 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_3 & 0xffffffffffffffe0;
      puVar2 = (undefined8 *)((long)__dest + 0x10);
      uVar3 = param_3 & 0xffffffffffffffe0;
      do {
        uVar12 = puVar2[-1];
        uVar4 = puVar2[-2];
        uVar29 = puVar2[1];
        uVar20 = *puVar2;
        uVar3 = uVar3 - 0x20;
        auVar37[0] = (byte)uVar4 + 0xbf;
        bVar5 = (byte)((ulong)uVar4 >> 8);
        auVar37[1] = bVar5 + 0xbf;
        bVar6 = (byte)((ulong)uVar4 >> 0x10);
        auVar37[2] = bVar6 + 0xbf;
        bVar7 = (byte)((ulong)uVar4 >> 0x18);
        auVar37[3] = bVar7 + 0xbf;
        bVar8 = (byte)((ulong)uVar4 >> 0x20);
        auVar37[4] = bVar8 + 0xbf;
        bVar9 = (byte)((ulong)uVar4 >> 0x28);
        auVar37[5] = bVar9 + 0xbf;
        bVar10 = (byte)((ulong)uVar4 >> 0x30);
        auVar37[6] = bVar10 + 0xbf;
        bVar11 = (byte)((ulong)uVar4 >> 0x38);
        auVar37[7] = bVar11 + 0xbf;
        auVar37[8] = (byte)uVar12 + 0xbf;
        bVar13 = (byte)((ulong)uVar12 >> 8);
        auVar37[9] = bVar13 + 0xbf;
        bVar14 = (byte)((ulong)uVar12 >> 0x10);
        auVar37[10] = bVar14 + 0xbf;
        bVar15 = (byte)((ulong)uVar12 >> 0x18);
        auVar37[0xb] = bVar15 + 0xbf;
        bVar16 = (byte)((ulong)uVar12 >> 0x20);
        auVar37[0xc] = bVar16 + 0xbf;
        bVar17 = (byte)((ulong)uVar12 >> 0x28);
        auVar37[0xd] = bVar17 + 0xbf;
        bVar18 = (byte)((ulong)uVar12 >> 0x30);
        auVar37[0xe] = bVar18 + 0xbf;
        bVar19 = (byte)((ulong)uVar12 >> 0x38);
        auVar37[0xf] = bVar19 + 0xbf;
        auVar40[0] = (byte)uVar20 + 0xbf;
        bVar22 = (byte)((ulong)uVar20 >> 8);
        auVar40[1] = bVar22 + 0xbf;
        bVar23 = (byte)((ulong)uVar20 >> 0x10);
        auVar40[2] = bVar23 + 0xbf;
        bVar24 = (byte)((ulong)uVar20 >> 0x18);
        auVar40[3] = bVar24 + 0xbf;
        bVar25 = (byte)((ulong)uVar20 >> 0x20);
        auVar40[4] = bVar25 + 0xbf;
        bVar26 = (byte)((ulong)uVar20 >> 0x28);
        auVar40[5] = bVar26 + 0xbf;
        bVar27 = (byte)((ulong)uVar20 >> 0x30);
        auVar40[6] = bVar27 + 0xbf;
        bVar28 = (byte)((ulong)uVar20 >> 0x38);
        auVar40[7] = bVar28 + 0xbf;
        auVar40[8] = (byte)uVar29 + 0xbf;
        bVar30 = (byte)((ulong)uVar29 >> 8);
        auVar40[9] = bVar30 + 0xbf;
        bVar31 = (byte)((ulong)uVar29 >> 0x10);
        auVar40[10] = bVar31 + 0xbf;
        bVar32 = (byte)((ulong)uVar29 >> 0x18);
        auVar40[0xb] = bVar32 + 0xbf;
        bVar33 = (byte)((ulong)uVar29 >> 0x20);
        auVar40[0xc] = bVar33 + 0xbf;
        bVar34 = (byte)((ulong)uVar29 >> 0x28);
        auVar40[0xd] = bVar34 + 0xbf;
        bVar35 = (byte)((ulong)uVar29 >> 0x30);
        auVar40[0xe] = bVar35 + 0xbf;
        bVar36 = (byte)((ulong)uVar29 >> 0x38);
        auVar40[0xf] = bVar36 + 0xbf;
        auVar38[8] = 0x1a;
        auVar38._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar38[9] = 0x1a;
        auVar38[10] = 0x1a;
        auVar38[0xb] = 0x1a;
        auVar38[0xc] = 0x1a;
        auVar38[0xd] = 0x1a;
        auVar38[0xe] = 0x1a;
        auVar38[0xf] = 0x1a;
        auVar38 = NEON_cmhi(auVar38,auVar37,1);
        auVar41[8] = 0x1a;
        auVar41._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar41[9] = 0x1a;
        auVar41[10] = 0x1a;
        auVar41[0xb] = 0x1a;
        auVar41[0xc] = 0x1a;
        auVar41[0xd] = 0x1a;
        auVar41[0xe] = 0x1a;
        auVar41[0xf] = 0x1a;
        auVar41 = NEON_cmhi(auVar41,auVar40,1);
        uVar21 = auVar38._0_8_ & 0x2020202020202020;
        uVar39 = auVar41._0_8_ & 0x2020202020202020;
        puVar2[-1] = CONCAT17(auVar38[0xf] & 0x20 | bVar19,
                              CONCAT16(auVar38[0xe] & 0x20 | bVar18,
                                       CONCAT15(auVar38[0xd] & 0x20 | bVar17,
                                                CONCAT14(auVar38[0xc] & 0x20 | bVar16,
                                                         CONCAT13(auVar38[0xb] & 0x20 | bVar15,
                                                                  CONCAT12(auVar38[10] & 0x20 |
                                                                           bVar14,CONCAT11(auVar38[9
                                                  ] & 0x20 | bVar13,auVar38[8] & 0x20 | (byte)uVar12
                                                  )))))));
        puVar2[-2] = CONCAT17((byte)(uVar21 >> 0x38) | bVar11,
                              CONCAT16((byte)(uVar21 >> 0x30) | bVar10,
                                       CONCAT15((byte)(uVar21 >> 0x28) | bVar9,
                                                CONCAT14((byte)(uVar21 >> 0x20) | bVar8,
                                                         CONCAT13((byte)(uVar21 >> 0x18) | bVar7,
                                                                  CONCAT12((byte)(uVar21 >> 0x10) |
                                                                           bVar6,CONCAT11((byte)(
                                                  uVar21 >> 8) | bVar5,(byte)uVar21 | (byte)uVar4)))
                                                  ))));
        puVar2[1] = CONCAT17(auVar41[0xf] & 0x20 | bVar36,
                             CONCAT16(auVar41[0xe] & 0x20 | bVar35,
                                      CONCAT15(auVar41[0xd] & 0x20 | bVar34,
                                               CONCAT14(auVar41[0xc] & 0x20 | bVar33,
                                                        CONCAT13(auVar41[0xb] & 0x20 | bVar32,
                                                                 CONCAT12(auVar41[10] & 0x20 |
                                                                          bVar31,CONCAT11(auVar41[9]
                                                                                          & 0x20 | 
                                                  bVar30,auVar41[8] & 0x20 | (byte)uVar29)))))));
        *puVar2 = CONCAT17((byte)(uVar39 >> 0x38) | bVar28,
                           CONCAT16((byte)(uVar39 >> 0x30) | bVar27,
                                    CONCAT15((byte)(uVar39 >> 0x28) | bVar26,
                                             CONCAT14((byte)(uVar39 >> 0x20) | bVar25,
                                                      CONCAT13((byte)(uVar39 >> 0x18) | bVar24,
                                                               CONCAT12((byte)(uVar39 >> 0x10) |
                                                                        bVar23,CONCAT11((byte)(
                                                  uVar39 >> 8) | bVar22,(byte)uVar39 | (byte)uVar20)
                                                  ))))));
        puVar2 = puVar2 + 4;
      } while (uVar3 != 0);
      if (param_3 == uVar1) goto LAB_006ec504;
      uVar3 = uVar1;
      if ((param_3 & 0x18) == 0) goto LAB_006ec4e0;
    }
    uVar1 = param_3 & 0xfffffffffffffff8;
    do {
      uVar4 = *(undefined8 *)((long)__dest + uVar3);
      bVar5 = (byte)((ulong)uVar4 >> 8);
      bVar6 = (byte)((ulong)uVar4 >> 0x10);
      bVar7 = (byte)((ulong)uVar4 >> 0x18);
      bVar8 = (byte)((ulong)uVar4 >> 0x20);
      bVar9 = (byte)((ulong)uVar4 >> 0x28);
      bVar10 = (byte)((ulong)uVar4 >> 0x30);
      bVar11 = (byte)((ulong)uVar4 >> 0x38);
      uVar21 = NEON_cmhi(0x1a1a1a1a1a1a1a1a,
                         CONCAT17(bVar11 + 0xbf,
                                  CONCAT16(bVar10 + 0xbf,
                                           CONCAT15(bVar9 + 0xbf,
                                                    CONCAT14(bVar8 + 0xbf,
                                                             CONCAT13(bVar7 + 0xbf,
                                                                      CONCAT12(bVar6 + 0xbf,
                                                                               CONCAT11(bVar5 + 0xbf
                                                                                        ,(byte)uVar4
                                                                                         + 0xbf)))))
                                          )),1);
      uVar21 = uVar21 & 0x2020202020202020;
      *(ulong *)((long)__dest + uVar3) =
           CONCAT17((byte)(uVar21 >> 0x38) | bVar11,
                    CONCAT16((byte)(uVar21 >> 0x30) | bVar10,
                             CONCAT15((byte)(uVar21 >> 0x28) | bVar9,
                                      CONCAT14((byte)(uVar21 >> 0x20) | bVar8,
                                               CONCAT13((byte)(uVar21 >> 0x18) | bVar7,
                                                        CONCAT12((byte)(uVar21 >> 0x10) | bVar6,
                                                                 CONCAT11((byte)(uVar21 >> 8) |
                                                                          bVar5,(byte)uVar21 |
                                                                                (byte)uVar4)))))));
      uVar3 = uVar3 + 8;
    } while (uVar1 != uVar3);
    if (param_3 == uVar1) goto LAB_006ec504;
  }
LAB_006ec4e0:
  do {
    bVar5 = 0x20;
    if (0x19 < *(byte *)((long)__dest + uVar1) - 0x41) {
      bVar5 = 0;
    }
    *(byte *)((long)__dest + uVar1) = bVar5 | *(byte *)((long)__dest + uVar1);
    uVar1 = uVar1 + 1;
  } while (param_3 != uVar1);
LAB_006ec504:
  *param_1 = param_3;
  param_1[1] = (ulong)__dest;
  param_1[2] = param_3;
  return;
}


// ===== 006ec528  <std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::to_ascii_uppercase =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::to_ascii_uppercase */

void __rustcall
<std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::to_ascii_uppercase
          (ulong *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar4;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar20;
  byte bVar28;
  ulong uVar21;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined8 uVar29;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(param_3,1);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,param_3);
  }
  memcpy(__dest,param_2,param_3);
  if (param_3 < 8) {
    uVar1 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_3 & 0xffffffffffffffe0;
      puVar2 = (undefined8 *)((long)__dest + 0x10);
      uVar3 = param_3 & 0xffffffffffffffe0;
      do {
        uVar12 = puVar2[-1];
        uVar4 = puVar2[-2];
        uVar29 = puVar2[1];
        uVar20 = *puVar2;
        uVar3 = uVar3 - 0x20;
        auVar37[0] = (byte)uVar4 + 0x9f;
        bVar5 = (byte)((ulong)uVar4 >> 8);
        auVar37[1] = bVar5 + 0x9f;
        bVar6 = (byte)((ulong)uVar4 >> 0x10);
        auVar37[2] = bVar6 + 0x9f;
        bVar7 = (byte)((ulong)uVar4 >> 0x18);
        auVar37[3] = bVar7 + 0x9f;
        bVar8 = (byte)((ulong)uVar4 >> 0x20);
        auVar37[4] = bVar8 + 0x9f;
        bVar9 = (byte)((ulong)uVar4 >> 0x28);
        auVar37[5] = bVar9 + 0x9f;
        bVar10 = (byte)((ulong)uVar4 >> 0x30);
        auVar37[6] = bVar10 + 0x9f;
        bVar11 = (byte)((ulong)uVar4 >> 0x38);
        auVar37[7] = bVar11 + 0x9f;
        auVar37[8] = (byte)uVar12 + 0x9f;
        bVar13 = (byte)((ulong)uVar12 >> 8);
        auVar37[9] = bVar13 + 0x9f;
        bVar14 = (byte)((ulong)uVar12 >> 0x10);
        auVar37[10] = bVar14 + 0x9f;
        bVar15 = (byte)((ulong)uVar12 >> 0x18);
        auVar37[0xb] = bVar15 + 0x9f;
        bVar16 = (byte)((ulong)uVar12 >> 0x20);
        auVar37[0xc] = bVar16 + 0x9f;
        bVar17 = (byte)((ulong)uVar12 >> 0x28);
        auVar37[0xd] = bVar17 + 0x9f;
        bVar18 = (byte)((ulong)uVar12 >> 0x30);
        auVar37[0xe] = bVar18 + 0x9f;
        bVar19 = (byte)((ulong)uVar12 >> 0x38);
        auVar37[0xf] = bVar19 + 0x9f;
        auVar40[0] = (byte)uVar20 + 0x9f;
        bVar22 = (byte)((ulong)uVar20 >> 8);
        auVar40[1] = bVar22 + 0x9f;
        bVar23 = (byte)((ulong)uVar20 >> 0x10);
        auVar40[2] = bVar23 + 0x9f;
        bVar24 = (byte)((ulong)uVar20 >> 0x18);
        auVar40[3] = bVar24 + 0x9f;
        bVar25 = (byte)((ulong)uVar20 >> 0x20);
        auVar40[4] = bVar25 + 0x9f;
        bVar26 = (byte)((ulong)uVar20 >> 0x28);
        auVar40[5] = bVar26 + 0x9f;
        bVar27 = (byte)((ulong)uVar20 >> 0x30);
        auVar40[6] = bVar27 + 0x9f;
        bVar28 = (byte)((ulong)uVar20 >> 0x38);
        auVar40[7] = bVar28 + 0x9f;
        auVar40[8] = (byte)uVar29 + 0x9f;
        bVar30 = (byte)((ulong)uVar29 >> 8);
        auVar40[9] = bVar30 + 0x9f;
        bVar31 = (byte)((ulong)uVar29 >> 0x10);
        auVar40[10] = bVar31 + 0x9f;
        bVar32 = (byte)((ulong)uVar29 >> 0x18);
        auVar40[0xb] = bVar32 + 0x9f;
        bVar33 = (byte)((ulong)uVar29 >> 0x20);
        auVar40[0xc] = bVar33 + 0x9f;
        bVar34 = (byte)((ulong)uVar29 >> 0x28);
        auVar40[0xd] = bVar34 + 0x9f;
        bVar35 = (byte)((ulong)uVar29 >> 0x30);
        auVar40[0xe] = bVar35 + 0x9f;
        bVar36 = (byte)((ulong)uVar29 >> 0x38);
        auVar40[0xf] = bVar36 + 0x9f;
        auVar38[8] = 0x1a;
        auVar38._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar38[9] = 0x1a;
        auVar38[10] = 0x1a;
        auVar38[0xb] = 0x1a;
        auVar38[0xc] = 0x1a;
        auVar38[0xd] = 0x1a;
        auVar38[0xe] = 0x1a;
        auVar38[0xf] = 0x1a;
        auVar38 = NEON_cmhi(auVar38,auVar37,1);
        auVar41[8] = 0x1a;
        auVar41._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar41[9] = 0x1a;
        auVar41[10] = 0x1a;
        auVar41[0xb] = 0x1a;
        auVar41[0xc] = 0x1a;
        auVar41[0xd] = 0x1a;
        auVar41[0xe] = 0x1a;
        auVar41[0xf] = 0x1a;
        auVar41 = NEON_cmhi(auVar41,auVar40,1);
        uVar21 = auVar38._0_8_ & 0x2020202020202020;
        uVar39 = auVar41._0_8_ & 0x2020202020202020;
        puVar2[-1] = CONCAT17(auVar38[0xf] & 0x20 ^ bVar19,
                              CONCAT16(auVar38[0xe] & 0x20 ^ bVar18,
                                       CONCAT15(auVar38[0xd] & 0x20 ^ bVar17,
                                                CONCAT14(auVar38[0xc] & 0x20 ^ bVar16,
                                                         CONCAT13(auVar38[0xb] & 0x20 ^ bVar15,
                                                                  CONCAT12(auVar38[10] & 0x20 ^
                                                                           bVar14,CONCAT11(auVar38[9
                                                  ] & 0x20 ^ bVar13,auVar38[8] & 0x20 ^ (byte)uVar12
                                                  )))))));
        puVar2[-2] = CONCAT17((byte)(uVar21 >> 0x38) ^ bVar11,
                              CONCAT16((byte)(uVar21 >> 0x30) ^ bVar10,
                                       CONCAT15((byte)(uVar21 >> 0x28) ^ bVar9,
                                                CONCAT14((byte)(uVar21 >> 0x20) ^ bVar8,
                                                         CONCAT13((byte)(uVar21 >> 0x18) ^ bVar7,
                                                                  CONCAT12((byte)(uVar21 >> 0x10) ^
                                                                           bVar6,CONCAT11((byte)(
                                                  uVar21 >> 8) ^ bVar5,(byte)uVar21 ^ (byte)uVar4)))
                                                  ))));
        puVar2[1] = CONCAT17(auVar41[0xf] & 0x20 ^ bVar36,
                             CONCAT16(auVar41[0xe] & 0x20 ^ bVar35,
                                      CONCAT15(auVar41[0xd] & 0x20 ^ bVar34,
                                               CONCAT14(auVar41[0xc] & 0x20 ^ bVar33,
                                                        CONCAT13(auVar41[0xb] & 0x20 ^ bVar32,
                                                                 CONCAT12(auVar41[10] & 0x20 ^
                                                                          bVar31,CONCAT11(auVar41[9]
                                                                                          & 0x20 ^ 
                                                  bVar30,auVar41[8] & 0x20 ^ (byte)uVar29)))))));
        *puVar2 = CONCAT17((byte)(uVar39 >> 0x38) ^ bVar28,
                           CONCAT16((byte)(uVar39 >> 0x30) ^ bVar27,
                                    CONCAT15((byte)(uVar39 >> 0x28) ^ bVar26,
                                             CONCAT14((byte)(uVar39 >> 0x20) ^ bVar25,
                                                      CONCAT13((byte)(uVar39 >> 0x18) ^ bVar24,
                                                               CONCAT12((byte)(uVar39 >> 0x10) ^
                                                                        bVar23,CONCAT11((byte)(
                                                  uVar39 >> 8) ^ bVar22,(byte)uVar39 ^ (byte)uVar20)
                                                  ))))));
        puVar2 = puVar2 + 4;
      } while (uVar3 != 0);
      if (param_3 == uVar1) goto LAB_006ec66c;
      uVar3 = uVar1;
      if ((param_3 & 0x18) == 0) goto LAB_006ec648;
    }
    uVar1 = param_3 & 0xfffffffffffffff8;
    do {
      uVar4 = *(undefined8 *)((long)__dest + uVar3);
      bVar5 = (byte)((ulong)uVar4 >> 8);
      bVar6 = (byte)((ulong)uVar4 >> 0x10);
      bVar7 = (byte)((ulong)uVar4 >> 0x18);
      bVar8 = (byte)((ulong)uVar4 >> 0x20);
      bVar9 = (byte)((ulong)uVar4 >> 0x28);
      bVar10 = (byte)((ulong)uVar4 >> 0x30);
      bVar11 = (byte)((ulong)uVar4 >> 0x38);
      uVar21 = NEON_cmhi(0x1a1a1a1a1a1a1a1a,
                         CONCAT17(bVar11 + 0x9f,
                                  CONCAT16(bVar10 + 0x9f,
                                           CONCAT15(bVar9 + 0x9f,
                                                    CONCAT14(bVar8 + 0x9f,
                                                             CONCAT13(bVar7 + 0x9f,
                                                                      CONCAT12(bVar6 + 0x9f,
                                                                               CONCAT11(bVar5 + 0x9f
                                                                                        ,(byte)uVar4
                                                                                         + 0x9f)))))
                                          )),1);
      uVar21 = uVar21 & 0x2020202020202020;
      *(ulong *)((long)__dest + uVar3) =
           CONCAT17((byte)(uVar21 >> 0x38) ^ bVar11,
                    CONCAT16((byte)(uVar21 >> 0x30) ^ bVar10,
                             CONCAT15((byte)(uVar21 >> 0x28) ^ bVar9,
                                      CONCAT14((byte)(uVar21 >> 0x20) ^ bVar8,
                                               CONCAT13((byte)(uVar21 >> 0x18) ^ bVar7,
                                                        CONCAT12((byte)(uVar21 >> 0x10) ^ bVar6,
                                                                 CONCAT11((byte)(uVar21 >> 8) ^
                                                                          bVar5,(byte)uVar21 ^
                                                                                (byte)uVar4)))))));
      uVar3 = uVar3 + 8;
    } while (uVar1 != uVar3);
    if (param_3 == uVar1) goto LAB_006ec66c;
  }
LAB_006ec648:
  do {
    bVar5 = 0x20;
    if (0x19 < *(byte *)((long)__dest + uVar1) - 0x61) {
      bVar5 = 0;
    }
    *(byte *)((long)__dest + uVar1) = bVar5 ^ *(byte *)((long)__dest + uVar1);
    uVar1 = uVar1 + 1;
  } while (param_3 != uVar1);
LAB_006ec66c:
  *param_1 = param_3;
  param_1[1] = (ulong)__dest;
  param_1[2] = param_3;
  return;
}


// ===== 006ec690  <std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::split_at =====

/* WARNING: Removing unreachable block (ram,0x006ec6c4) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::split_at */

void __rustcall
<std::ffi::os_str::[j]::std::ffi::os_str::OsStr>::split_at
          (long *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong local_48;
  ulong *local_40;
  undefined *puStack_38;
  
  if ((((param_4 != 0) && (param_3 != param_4)) && (param_3 <= param_4)) &&
     (local_48 = param_4,
     uVar1 = <std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::
             try_check_public_boundary::slow_path(), (uVar1 & 1) == 0)) {
    local_40 = &local_48;
    puStack_38 = PTR_fmt_0099f458;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_00368a17,&local_40,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977b50);
  }
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[2] = param_2 + param_4;
  param_1[3] = param_3 - param_4;
  return;
}


// ===== 006ec744  FUN_006ec744 =====

undefined ** FUN_006ec744(__mode_t *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  __mode_t *local_1d0;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  
  local_1d0 = param_1;
  if (0x17f < param_3) {
    ppuVar3 = (undefined **)FUN_006c9920(param_2,param_3,&local_1d0,FUN_006d0e78);
    return ppuVar3;
  }
  memcpy(auStack_1c8,param_2,param_3);
  auStack_1c8[param_3] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_3 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = mkdir(local_40,*param_1);
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


// ===== 006ec85c  <std::fs::[m]::std::fs::Metadata>::created =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[m]::std::fs::Metadata>::created */

void __rustcall <std::fs::[m]::std::fs::Metadata>::created(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00977910;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 006ec874  <std::fs::[m]::std::fs::Metadata>::accessed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[m]::std::fs::Metadata>::accessed */

void __rustcall <std::fs::[m]::std::fs::Metadata>::accessed(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x50);
  ppuVar1 = &PTR_DAT_00977540;
  if (uVar2 < 1000000000) {
    ppuVar1 = *(undefined ***)(param_2 + 0x48);
  }
  uVar3 = (undefined4)uVar2;
  if (999999999 < uVar2) {
    uVar3 = 0xffffffff;
  }
  *param_1 = ppuVar1;
  *(undefined4 *)(param_1 + 1) = uVar3;
  return;
}


// ===== 006ec8a0  <std::fs::[m]::std::fs::Metadata>::modified =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::[m]::std::fs::Metadata>::modified */

void __rustcall <std::fs::[m]::std::fs::Metadata>::modified(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x60);
  ppuVar1 = &PTR_DAT_00977540;
  if (uVar2 < 1000000000) {
    ppuVar1 = *(undefined ***)(param_2 + 0x58);
  }
  uVar3 = (undefined4)uVar2;
  if (999999999 < uVar2) {
    uVar3 = 0xffffffff;
  }
  *param_1 = ppuVar1;
  *(undefined4 *)(param_1 + 1) = uVar3;
  return;
}


// ===== 006ec8cc  <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>::drop_slow =====

/* <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>::drop_slow
    */

void <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
     ::drop_slow(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + 0x100);
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
                    /* try { // try from 006ec8fc to 006ec903 has its CatchHandler @ 006ec954 */
      drop_slow(lVar5 + 0x100);
    }
  }
                    /* try { // try from 006ec904 to 006ec90b has its CatchHandler @ 006ec968 */
  FUN_006c49f0(lVar5 + 0x108);
  if (lVar5 != -1) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      __rustc::__rust_dealloc(lVar5,0x128,8);
      return;
    }
  }
  return;
}


// ===== 006ec9a8  <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>::
drop_slow(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (*(long *)(lVar5 + 0x18) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(lVar5 + 0x20),*(long *)(lVar5 + 0x18),1);
  }
  if (lVar5 != -1) {
    plVar1 = (long *)(lVar5 + 8);
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
      __rustc::__rust_dealloc(lVar5,0x30,8);
      return;
    }
  }
  return;
}


// ===== 006eca14  <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>::drop_slow =====

/* <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,
   std[29fbf8137994c300]::alloc::System>>::drop_slow */

void <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  puVar4 = *(undefined1 **)((long)__ptr + 0x18);
  if (puVar4 != (undefined1 *)0x0) {
    lVar5 = *(long *)((long)__ptr + 0x20);
    *puVar4 = 0;
    if (lVar5 != 0) {
      __rustc::__rust_dealloc(puVar4,lVar5,1);
    }
  }
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
      return;
    }
  }
  return;
}


// ===== 006eca80  <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
                    /* try { // try from 006eca90 to 006eca97 has its CatchHandler @ 006ecae0 */
  FUN_006c47e8(lVar5 + 0x10);
  if (lVar5 != -1) {
    plVar1 = (long *)(lVar5 + 8);
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
      __rustc::__rust_dealloc(lVar5,0x28,8);
      return;
    }
  }
  return;
}


// ===== 006ecb20  <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
                    /* try { // try from 006ecb30 to 006ecb37 has its CatchHandler @ 006ecb80 */
  FUN_006c48d8(lVar5 + 0x10);
  if (lVar5 != -1) {
    plVar1 = (long *)(lVar5 + 8);
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
      __rustc::__rust_dealloc(lVar5,0x40,8);
      return;
    }
  }
  return;
}


// ===== 006ecbc0  <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
                    /* try { // try from 006ecbd0 to 006ecbd7 has its CatchHandler @ 006ecc34 */
  <std::sys::fs::unix::DirStream_as_core::ops::drop::Drop>::drop(lVar5 + 0x28);
  if (*(long *)(lVar5 + 0x10) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(lVar5 + 0x18),*(long *)(lVar5 + 0x10),1);
  }
  if (lVar5 != -1) {
    plVar1 = (long *)(lVar5 + 8);
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
      __rustc::__rust_dealloc(lVar5,0x30,8);
      return;
    }
  }
  return;
}


// ===== 006ecc88  <alloc::sync::[n]::alloc::sync::Arc<std::sync::mpmc::context::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::sync::mpmc::context::Inner>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::sync::mpmc::context::Inner>>::drop_slow(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + 0x10);
  do {
    lVar4 = *plVar3;
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
  }
  if (lVar5 != -1) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      __rustc::__rust_dealloc(lVar5,0x30,8);
      return;
    }
  }
  return;
}


// ===== 006ecd04  <std::path::[r]::std::path::PathBuf>::into_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::into_string */

void __rustcall <std::path::[r]::std::path::PathBuf>::into_string(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_48 [2];
  ulong local_40;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
                    /* try { // try from 006ecd24 to 006ecd33 has its CatchHandler @ 006ecd78 */
  core::str::converts::from_utf8(local_48,uVar5,uVar6);
  if ((local_48[0] & 1) == 0) {
    uVar3 = 0;
  }
  else {
    bVar2 = uVar4 != 0xffffffffffffffff;
    uVar1 = uVar6;
    if (!bVar2) {
      uVar1 = local_40;
      uVar4 = uVar5;
      uVar5 = uVar6;
    }
    uVar3 = (ulong)bVar2;
    uVar6 = uVar1;
  }
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}


// ===== 006ecd98  <std::path::[r]::std::path::PathBuf>::_add_extension =====

/* WARNING: Removing unreachable block (ram,0x006ecee4) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::_add_extension */

undefined8 __rustcall
<std::path::[r]::std::path::PathBuf>::_add_extension(long *param_1,char ***param_2,ulong param_3)

{
  char ***pppcVar1;
  ulong uVar2;
  char ***pppcVar3;
  char *pcVar4;
  char ***pppcVar5;
  char ***pppcVar6;
  char **local_b8;
  ulong local_b0;
  long lStack_a8;
  char ***local_80;
  char **local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined2 local_48;
  undefined1 local_46;
  
  local_b8 = (char **)param_2;
  local_b0 = param_3;
  if (param_3 != 0) {
    pppcVar3 = param_2;
    for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(char *)pppcVar3 == '/') goto LAB_006ecf78;
      pppcVar3 = (char ***)((long)pppcVar3 + 1);
    }
    if (3 < param_3) {
      do {
        if ((((*(char *)pppcVar3 == '/') || (*(char *)((long)pppcVar3 + 1) == '/')) ||
            (*(char *)((long)pppcVar3 + 2) == '/')) || (*(char *)((long)pppcVar3 + 3) == '/')) {
LAB_006ecf78:
          local_80 = &local_b8;
          local_78 = (char **)PTR_fmt_0099f7b8;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_00367c52,&local_80,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977c28);
        }
        pppcVar3 = (char ***)((long)pppcVar3 + 4);
      } while (pppcVar3 != (char ***)((long)param_2 + param_3));
    }
  }
  pppcVar3 = (char ***)param_1[1];
  pppcVar6 = (char ***)param_1[2];
  if (pppcVar6 == (char ***)0x0) {
    local_46 = false;
  }
  else {
    local_46 = *(char *)pppcVar3 == '/';
  }
  local_48 = 0x201;
  local_70 = 0xff;
  local_80 = pppcVar3;
  local_78 = (char **)pppcVar6;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (&local_b8,&local_80);
  if (((char)local_b8 == -1) || ((char)local_b8 != '\t')) {
    return 0;
  }
  if (param_3 != 0) {
    pppcVar5 = (char ***)((long)(local_b0 + lStack_a8) - (long)pppcVar3);
    if (pppcVar5 <= pppcVar6) {
      local_b8 = (char **)pppcVar5;
      if ((((char ***)(local_b0 + lStack_a8) != pppcVar3) && (pppcVar5 != pppcVar6)) &&
         ((pppcVar6 <= pppcVar5 &&
          (uVar2 = <std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::
                   try_check_public_boundary::slow_path(pppcVar3,pppcVar6,pppcVar5),
          (uVar2 & 1) == 0)))) {
        local_80 = &local_b8;
        local_78 = (char **)PTR_fmt_0099f458;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_00368a17,&local_80,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977468);
      }
      param_1[2] = (long)pppcVar5;
      pppcVar6 = pppcVar5;
    }
    pppcVar5 = (char ***)*param_1;
    uVar2 = param_3 + 1;
    if ((ulong)((long)pppcVar5 - (long)pppcVar6) < uVar2) {
      pppcVar1 = (char ***)((long)pppcVar6 + uVar2);
      if (CARRY8((ulong)pppcVar6,uVar2)) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(0);
      }
      FUN_006df348(&local_80,pppcVar5,pppcVar3,pppcVar1,1,1);
      if (local_80 == (char ***)0x1) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(local_78,CONCAT71(uStack_6f,local_70));
      }
      *param_1 = (long)pppcVar1;
      param_1[1] = (long)local_78;
      pppcVar3 = (char ***)local_78;
      pppcVar5 = pppcVar1;
    }
    if (pppcVar5 == pppcVar6) {
      FUN_006cecec(param_1,pppcVar6,1,1,1);
      pppcVar3 = (char ***)param_1[1];
      pppcVar6 = (char ***)param_1[2];
    }
    *(char *)((long)pppcVar3 + (long)pppcVar6) = '.';
    pcVar4 = (char *)((long)pppcVar6 + 1);
    param_1[2] = (long)pcVar4;
    if ((ulong)(*param_1 - (long)pcVar4) < param_3) {
      FUN_006cecec(param_1,pcVar4,param_3,1,1);
      pcVar4 = (char *)param_1[2];
    }
    memcpy(pcVar4 + param_1[1],param_2,param_3);
    param_1[2] = (long)(pcVar4 + param_3);
  }
  return 1;
}


// ===== 006ed054  <std::path::[r]::std::path::PathBuf>::_set_extension =====

/* WARNING: Removing unreachable block (ram,0x006ed1bc) */
/* WARNING: Removing unreachable block (ram,0x006ed27c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::_set_extension */

undefined8 __rustcall
<std::path::[r]::std::path::PathBuf>::_set_extension(long *param_1,char ****param_2,short *param_3)

{
  char ****ppppcVar1;
  char ****ppppcVar2;
  short *psVar3;
  ulong uVar4;
  ulong uVar5;
  short *psVar6;
  char *pcVar7;
  char ****ppppcVar8;
  char ****ppppcVar9;
  char ****local_b8;
  short *local_b0;
  ulong uStack_a8;
  char ****local_80;
  char ****local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined2 local_48;
  undefined1 local_46;
  
  local_b8 = param_2;
  local_b0 = param_3;
  if (param_3 != (short *)0x0) {
    ppppcVar2 = param_2;
    for (uVar4 = (ulong)param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (*(char *)ppppcVar2 == '/') goto LAB_006ed2e8;
      ppppcVar2 = (char ****)((long)ppppcVar2 + 1);
    }
    if ((short *)0x3 < param_3) {
      do {
        if ((((*(char *)ppppcVar2 == '/') || (*(char *)((long)ppppcVar2 + 1) == '/')) ||
            (*(char *)((long)ppppcVar2 + 2) == '/')) || (*(char *)((long)ppppcVar2 + 3) == '/')) {
LAB_006ed2e8:
          local_80 = (char ****)&local_b8;
          local_78 = (char ****)PTR_fmt_0099f7b8;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_00367c52,&local_80,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977c28);
        }
        ppppcVar2 = (char ****)((long)ppppcVar2 + 4);
      } while (ppppcVar2 != (char ****)((long)param_2 + (long)param_3));
    }
  }
  ppppcVar2 = (char ****)param_1[1];
  ppppcVar9 = (char ****)param_1[2];
  if (ppppcVar9 == (char ****)0x0) {
    local_46 = false;
  }
  else {
    local_46 = *(char *)ppppcVar2 == '/';
  }
  local_48 = 0x201;
  local_70 = 0xff;
  local_80 = ppppcVar2;
  local_78 = ppppcVar9;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (&local_b8,&local_80);
  if (((char)local_b8 != -1) && ((char)local_b8 == '\t')) {
    uVar4 = uStack_a8;
    psVar3 = local_b0;
    if ((uStack_a8 == 2) && (*local_b0 == 0x2e2e)) {
      uVar4 = 2;
      psVar6 = (short *)0x0;
      if (local_b0 != (short *)0x0) {
        psVar6 = local_b0;
      }
    }
    else {
      do {
        uVar5 = uVar4;
        if (uVar5 == 0) {
          uVar4 = 0;
          psVar3 = (short *)0x0;
          psVar6 = local_b0;
          goto joined_r0x006ed1c0;
        }
        uVar4 = uVar5 - 1;
      } while (*(char *)((long)local_b0 + (uVar5 - 1)) != '.');
      if (uVar4 != 0) {
        uStack_a8 = ~uVar4 + uStack_a8;
        psVar6 = (short *)((long)local_b0 + uVar5);
        if (local_b0 != (short *)0x0) {
          psVar6 = local_b0;
        }
joined_r0x006ed1c0:
        if (psVar6 == (short *)0x0) {
          return 0;
        }
        goto LAB_006ed1c4;
      }
      psVar6 = (short *)0x0;
      uVar4 = uStack_a8;
      if (local_b0 != (short *)0x0) {
        psVar6 = local_b0;
      }
    }
    if (psVar6 != (short *)0x0) {
LAB_006ed1c4:
      if (psVar3 != (short *)0x0) {
        uStack_a8 = uVar4;
      }
      ppppcVar8 = (char ****)((long)((long)psVar6 + uStack_a8) - (long)ppppcVar2);
      if (ppppcVar8 <= ppppcVar9) {
        local_b8 = ppppcVar8;
        if ((((char ****)((long)psVar6 + uStack_a8) != ppppcVar2) && (ppppcVar8 != ppppcVar9)) &&
           ((ppppcVar9 <= ppppcVar8 &&
            (uVar4 = <std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::
                     try_check_public_boundary::slow_path(ppppcVar2,ppppcVar9,ppppcVar8),
            (uVar4 & 1) == 0)))) {
          local_80 = (char ****)&local_b8;
          local_78 = (char ****)PTR_fmt_0099f458;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_00368a17,&local_80,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977468);
        }
        param_1[2] = (long)ppppcVar8;
        ppppcVar9 = ppppcVar8;
      }
      if (param_3 == (short *)0x0) {
        return 1;
      }
      ppppcVar8 = (char ****)*param_1;
      uVar4 = (long)param_3 + 1;
      if ((ulong)((long)ppppcVar8 - (long)ppppcVar9) < uVar4) {
        ppppcVar1 = (char ****)((long)ppppcVar9 + uVar4);
        if (CARRY8((ulong)ppppcVar9,uVar4)) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(0);
        }
        FUN_006df348(&local_80,ppppcVar8,ppppcVar2,ppppcVar1,1,1);
        if (local_80 == (char ****)0x1) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(local_78,CONCAT71(uStack_6f,local_70));
        }
        *param_1 = (long)ppppcVar1;
        param_1[1] = (long)local_78;
        ppppcVar2 = local_78;
        ppppcVar8 = ppppcVar1;
      }
      if (ppppcVar8 == ppppcVar9) {
        FUN_006cecec(param_1,ppppcVar9,1,1,1);
        ppppcVar2 = (char ****)param_1[1];
        ppppcVar9 = (char ****)param_1[2];
      }
      *(char *)((long)ppppcVar2 + (long)ppppcVar9) = '.';
      pcVar7 = (char *)((long)ppppcVar9 + 1);
      param_1[2] = (long)pcVar7;
      if ((short *)(*param_1 - (long)pcVar7) < param_3) {
        FUN_006cecec(param_1,pcVar7,param_3,1,1);
        pcVar7 = (char *)param_1[2];
      }
      memcpy(pcVar7 + param_1[1],param_2,(size_t)param_3);
      param_1[2] = (long)(pcVar7 + (long)param_3);
      return 1;
    }
  }
  return 0;
}


// ===== 006ed3c4  <std::path::[r]::std::path::PathBuf>::_set_file_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::_set_file_name */

void __rustcall
<std::path::[r]::std::path::PathBuf>::_set_file_name(ulong *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  char local_a8 [56];
  char *local_70;
  ulong uStack_68;
  undefined1 local_60;
  undefined2 local_38;
  undefined1 local_36;
  
  local_70 = (char *)param_1[1];
  uVar3 = param_1[2];
  if (uVar3 == 0) {
    local_36 = false;
  }
  else {
    local_36 = *local_70 == '/';
  }
  local_60 = 0xff;
  local_38 = 0x201;
  uStack_68 = uVar3;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_a8,&local_70);
  if (local_a8[0] == '\t') {
    pop(param_1);
    uVar3 = param_1[2];
  }
  if (uVar3 == 0) {
    bVar1 = false;
    if (param_3 != 0) goto LAB_006ed464;
LAB_006ed488:
    uVar2 = *param_1;
    if (bVar1) {
      if (uVar2 == uVar3) {
        FUN_006cecec(param_1,uVar3,1,1,1);
        uVar3 = param_1[2];
        uVar2 = *param_1;
      }
      *(undefined1 *)(param_1[1] + uVar3) = 0x2f;
      uVar3 = uVar3 + 1;
      param_1[2] = uVar3;
    }
    if (uVar2 - uVar3 < param_3) {
LAB_006ed4ec:
      FUN_006cecec(param_1,uVar3,param_3,1,1);
      uVar3 = param_1[2];
    }
    else if (param_3 == 0) goto LAB_006ed4d0;
  }
  else {
    bVar1 = *(char *)(param_1[1] + uVar3 + -1) != '/';
    if (param_3 == 0) goto LAB_006ed488;
LAB_006ed464:
    if (*param_2 != '/') goto LAB_006ed488;
    uVar3 = 0;
    param_1[2] = 0;
    if (*param_1 < param_3) goto LAB_006ed4ec;
  }
  memcpy((void *)(param_1[1] + uVar3),param_2,param_3);
LAB_006ed4d0:
  param_1[2] = uVar3 + param_3;
  return;
}


// ===== 006ed530  <std::path::[r]::std::path::PathBuf>::pop_trailing_sep =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::pop_trailing_sep */

void __rustcall <std::path::[r]::std::path::PathBuf>::pop_trailing_sep(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *local_a8;
  undefined *puStack_a0;
  undefined1 local_98;
  undefined2 local_70;
  undefined1 local_6e;
  ulong local_68 [7];
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar5 = uVar4;
  if ((uVar4 != 0) &&
     (puVar6 = *(ulong **)(param_1 + 8), *(char *)((long)puVar6 + (uVar4 - 1)) == '/')) {
    if ((char)*puVar6 == '/') {
      local_98 = 0xff;
      local_6e = 1;
      local_70 = 0x201;
      local_a8 = puVar6;
      puStack_a0 = (undefined *)uVar4;
      <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
                (local_68,&local_a8);
      if (0xf7 < (byte)local_68[0] - 7) {
        *(ulong *)(param_1 + 0x10) = uVar4;
        return;
      }
      lVar3 = <std::path::[8]::std::path::Components>::as_path(&local_a8);
      if (lVar3 == 0) goto LAB_006ed638;
    }
    lVar3 = 0;
    do {
      if (uVar4 + lVar3 == 0) {
        uVar5 = 0;
        goto LAB_006ed638;
      }
      lVar2 = lVar3 + uVar4;
      lVar3 = lVar3 + -1;
    } while (*(char *)((long)puVar6 + lVar2 + -1) == '/');
    uVar5 = uVar4 + lVar3 + 1;
    if (lVar3 != -1) {
      if ((uVar5 < uVar4) &&
         ((pcVar1 = (char *)((long)puVar6 + lVar3 + uVar4), -1 < *pcVar1 || (-1 < pcVar1[1])))) {
        *(ulong *)(param_1 + 0x10) = uVar5;
        return;
      }
      local_68[0] = uVar5;
      uVar4 = <std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::
              try_check_public_boundary::slow_path(puVar6,uVar4,uVar5);
      if ((uVar4 & 1) == 0) {
        local_a8 = local_68;
        puStack_a0 = PTR_fmt_0099f458;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_00368a17,&local_a8,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977468);
      }
    }
  }
LAB_006ed638:
  *(ulong *)(param_1 + 0x10) = uVar5;
  return;
}


// ===== 006ed6b0  <std::path::[r]::std::path::PathBuf>::set_trailing_sep =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::set_trailing_sep */

void __rustcall <std::path::[r]::std::path::PathBuf>::set_trailing_sep(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    pop_trailing_sep();
    return;
  }
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + lVar1 + -1) == '/') {
      return;
    }
    if (*param_1 == lVar1) {
      FUN_006cecec(param_1,lVar1,1,1,1);
      lVar2 = param_1[1];
      lVar1 = param_1[2];
    }
    *(undefined1 *)(lVar2 + lVar1) = 0x2f;
    lVar1 = lVar1 + 1;
  }
  param_1[2] = lVar1;
  return;
}


// ===== 006ed730  <std::path::[r]::std::path::PathBuf>::push_trailing_sep =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::push_trailing_sep */

void __rustcall <std::path::[r]::std::path::PathBuf>::push_trailing_sep(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + lVar1 + -1) == '/') {
      return;
    }
    if (*param_1 == lVar1) {
      FUN_006cecec(param_1,lVar1,1,1,1);
      lVar2 = param_1[1];
      lVar1 = param_1[2];
    }
    *(undefined1 *)(lVar2 + lVar1) = 0x2f;
    lVar1 = lVar1 + 1;
  }
  param_1[2] = lVar1;
  return;
}


// ===== 006ed7a8  <std::path::[r]::std::path::PathBuf>::pop =====

/* WARNING: Removing unreachable block (ram,0x006ed844) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::pop */

long __rustcall <std::path::[r]::std::path::PathBuf>::pop(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong *local_a8;
  undefined *puStack_a0;
  undefined1 local_98;
  undefined2 local_70;
  undefined1 local_6e;
  ulong local_68 [7];
  
  puVar1 = *(ulong **)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 == 0) {
    local_6e = false;
  }
  else {
    local_6e = (char)*puVar1 == '/';
  }
  local_70 = 0x201;
  local_98 = 0xff;
  local_a8 = puVar1;
  puStack_a0 = (undefined *)uVar2;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_68,&local_a8);
  if ((byte)local_68[0] - 7 < 0xf8) {
    auVar5 = <std::path::[8]::std::path::Components>::as_path(&local_a8);
    uVar4 = auVar5._8_8_;
    lVar3 = auVar5._0_8_;
    if (lVar3 != 0) {
      if (uVar4 <= uVar2) {
        if ((((uVar4 != 0) && (uVar4 != uVar2)) && (uVar2 <= uVar4)) &&
           (local_68[0] = uVar4,
           uVar2 = <std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::
                   try_check_public_boundary::slow_path(puVar1,uVar2,uVar4), (uVar2 & 1) == 0)) {
          local_a8 = local_68;
          puStack_a0 = PTR_fmt_0099f458;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_00368a17,&local_a8,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977468);
        }
        *(ulong *)(param_1 + 0x10) = uVar4;
      }
      lVar3 = 1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 006ed8c4  <std::path::[r]::std::path::PathBuf>::_push =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[r]::std::path::PathBuf>::_push */

void __rustcall
<std::path::[r]::std::path::PathBuf>::_push(ulong *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 == 0) {
    bVar1 = false;
    if (param_3 != 0) goto LAB_006ed90c;
LAB_006ed930:
    if (bVar1) {
      if (*param_1 == uVar2) {
        FUN_006cecec(param_1,uVar2,1,1,1);
        uVar2 = param_1[2];
      }
      *(undefined1 *)(param_1[1] + uVar2) = 0x2f;
      uVar2 = uVar2 + 1;
      param_1[2] = uVar2;
    }
    if (*param_1 - uVar2 < param_3) {
LAB_006ed994:
      FUN_006cecec(param_1,uVar2,param_3,1,1);
      uVar2 = param_1[2];
    }
    else if (param_3 == 0) goto LAB_006ed978;
  }
  else {
    bVar1 = *(char *)(param_1[1] + uVar2 + -1) != '/';
    if (param_3 == 0) goto LAB_006ed930;
LAB_006ed90c:
    if (*param_2 != '/') goto LAB_006ed930;
    uVar2 = 0;
    param_1[2] = 0;
    if (*param_1 < param_3) goto LAB_006ed994;
  }
  memcpy((void *)(param_1[1] + uVar2),param_2,param_3);
LAB_006ed978:
  param_1[2] = uVar2 + param_3;
  return;
}


// ===== 006ed9e4  <std::process::[r]::std::process::Output>::exit_ok =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::[r]::std::process::Output>::exit_ok */

void __rustcall <std::process::[r]::std::process::Output>::exit_ok(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((int)param_2[6] == 0) {
    lVar3 = param_2[1];
    lVar2 = *param_2;
    lVar5 = param_2[3];
    lVar4 = param_2[2];
    lVar6 = param_2[4];
    lVar1 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar6;
    param_1[1] = lVar3;
    *param_1 = lVar2;
    param_1[3] = lVar5;
    param_1[2] = lVar4;
    param_1[6] = lVar1;
    return;
  }
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[6];
  *param_1 = -1;
  if (lVar1 != 0) {
    __rustc::__rust_dealloc(param_2[1],lVar1,1);
  }
  if (param_2[3] != 0) {
    __rustc::__rust_dealloc(param_2[4],param_2[3],1);
    return;
  }
  return;
}


// ===== 006eda68  FUN_006eda68 =====

void FUN_006eda68(long *param_1,long *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_2[8] == 0) {
    lVar4 = *param_2;
    plVar7 = (long *)param_2[1];
    *param_2 = 0;
    plVar3 = (long *)param_2[2];
    lVar5 = param_2[3];
    if (lVar4 == 1) {
      if (plVar7 == (long *)0x0) {
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          plVar3 = (long *)plVar3[0x44];
        }
        plVar8 = (long *)0x0;
        plVar7 = plVar3;
        plVar3 = (long *)*plVar3;
      }
      else {
        plVar8 = plVar3;
        plVar3 = (long *)*plVar7;
      }
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        uVar1 = 0x220;
        if (plVar8 != (long *)0x0) {
          uVar1 = 0x280;
        }
        plVar8 = (long *)((long)plVar8 + 1);
        __rustc::__rust_dealloc(plVar7,uVar1,8);
        plVar7 = plVar3;
      }
      uVar1 = 0x220;
      if (plVar8 != (long *)0x0) {
        uVar1 = 0x280;
      }
      __rustc::__rust_dealloc(plVar7,uVar1,8);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d80);
  }
  plVar3 = (long *)param_2[1];
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)param_2[2];
    for (lVar4 = param_2[3]; lVar4 != 0; lVar4 = lVar4 + -1) {
      plVar3 = (long *)plVar3[0x44];
    }
    uVar6 = 0;
    lVar4 = 0;
    *param_2 = 1;
    plVar7 = plVar3;
    if (*(short *)((long)plVar3 + 0x21a) != 0) goto joined_r0x006edac0;
  }
  else {
    lVar4 = param_2[2];
    uVar6 = param_2[3];
    plVar7 = plVar3;
    if (uVar6 < *(ushort *)((long)plVar3 + 0x21a)) goto joined_r0x006edac0;
  }
  do {
    plVar7 = (long *)*plVar3;
    if (plVar7 == (long *)0x0) {
      uVar1 = 0x220;
      if (lVar4 != 0) {
        uVar1 = 0x280;
      }
      __rustc::__rust_dealloc(plVar3,uVar1,8);
                    /* try { // try from 006edc58 to 006edc63 has its CatchHandler @ 006edc74 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977138);
    }
    uVar2 = *(ushort *)(plVar3 + 0x43);
    uVar6 = (ulong)uVar2;
    uVar1 = 0x220;
    if (lVar4 != 0) {
      uVar1 = 0x280;
    }
    lVar4 = lVar4 + 1;
    __rustc::__rust_dealloc(plVar3,uVar1,8);
    plVar3 = plVar7;
  } while (*(ushort *)((long)plVar7 + 0x21a) <= uVar2);
joined_r0x006edac0:
  if (lVar4 == 0) {
    lVar5 = uVar6 + 1;
    plVar3 = plVar7;
  }
  else {
    plVar8 = plVar7 + uVar6 + 0x45;
    lVar5 = lVar4;
    do {
      plVar3 = (long *)*plVar8;
      lVar5 = lVar5 + -1;
      plVar8 = plVar3 + 0x44;
    } while (lVar5 != 0);
    lVar5 = 0;
  }
  param_2[1] = (long)plVar3;
  param_2[2] = 0;
  param_2[3] = lVar5;
  *param_1 = (long)plVar7;
  param_1[1] = lVar4;
  param_1[2] = uVar6;
  return;
}


// ===== 006edc78  FUN_006edc78 =====

void FUN_006edc78(long *param_1,long *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2[8] == 0) {
    lVar3 = *param_2;
    lVar8 = param_2[1];
    *param_2 = 0;
    lVar5 = param_2[2];
    lVar4 = param_2[3];
    if (lVar3 == 1) {
      if (lVar8 == 0) {
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          lVar5 = *(long *)(lVar5 + 0x118);
        }
        lVar3 = 0;
        lVar8 = lVar5;
        lVar5 = *(long *)(lVar5 + 0xb0);
      }
      else {
        lVar3 = lVar5;
        lVar5 = *(long *)(lVar8 + 0xb0);
      }
      for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0xb0)) {
        uVar1 = 0x118;
        if (lVar3 != 0) {
          uVar1 = 0x178;
        }
        lVar3 = lVar3 + 1;
        __rustc::__rust_dealloc(lVar8,uVar1,8);
        lVar8 = lVar5;
      }
      uVar1 = 0x118;
      if (lVar3 != 0) {
        uVar1 = 0x178;
      }
      __rustc::__rust_dealloc(lVar8,uVar1,8);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d80);
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    lVar3 = param_2[2];
    for (lVar5 = param_2[3]; lVar5 != 0; lVar5 = lVar5 + -1) {
      lVar3 = *(long *)(lVar3 + 0x118);
    }
    uVar7 = 0;
    lVar5 = 0;
    *param_2 = 1;
    lVar8 = lVar3;
    if (*(short *)(lVar3 + 0x112) != 0) goto joined_r0x006edcd0;
  }
  else {
    lVar5 = param_2[2];
    uVar7 = param_2[3];
    lVar8 = lVar3;
    if (uVar7 < *(ushort *)(lVar3 + 0x112)) goto joined_r0x006edcd0;
  }
  do {
    lVar8 = *(long *)(lVar3 + 0xb0);
    if (lVar8 == 0) {
      uVar1 = 0x118;
      if (lVar5 != 0) {
        uVar1 = 0x178;
      }
      __rustc::__rust_dealloc(lVar3,uVar1,8);
                    /* try { // try from 006ede68 to 006ede73 has its CatchHandler @ 006ede84 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977138);
    }
    uVar2 = *(ushort *)(lVar3 + 0x110);
    uVar7 = (ulong)uVar2;
    uVar1 = 0x118;
    if (lVar5 != 0) {
      uVar1 = 0x178;
    }
    lVar5 = lVar5 + 1;
    __rustc::__rust_dealloc(lVar3,uVar1,8);
    lVar3 = lVar8;
  } while (*(ushort *)(lVar8 + 0x112) <= uVar2);
joined_r0x006edcd0:
  if (lVar5 == 0) {
    lVar3 = uVar7 + 1;
    lVar4 = lVar8;
  }
  else {
    plVar6 = (long *)(lVar8 + uVar7 * 8 + 0x120);
    lVar3 = lVar5;
    do {
      lVar4 = *plVar6;
      lVar3 = lVar3 + -1;
      plVar6 = (long *)(lVar4 + 0x118);
    } while (lVar3 != 0);
    lVar3 = 0;
  }
  param_2[1] = lVar4;
  param_2[2] = 0;
  param_2[3] = lVar3;
  *param_1 = lVar8;
  param_1[1] = lVar5;
  param_1[2] = uVar7;
  return;
}


// ===== 006ede88  FUN_006ede88 =====

void FUN_006ede88(long *param_1,long *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2[8] == 0) {
    lVar3 = *param_2;
    lVar8 = param_2[1];
    *param_2 = 0;
    lVar5 = param_2[2];
    lVar4 = param_2[3];
    if (lVar3 == 1) {
      if (lVar8 == 0) {
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          lVar5 = *(long *)(lVar5 + 0x538);
        }
        lVar3 = 0;
        lVar8 = lVar5;
        lVar5 = *(long *)(lVar5 + 0x4d0);
      }
      else {
        lVar3 = lVar5;
        lVar5 = *(long *)(lVar8 + 0x4d0);
      }
      for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x4d0)) {
        uVar1 = 0x538;
        if (lVar3 != 0) {
          uVar1 = 0x598;
        }
        lVar3 = lVar3 + 1;
        __rustc::__rust_dealloc(lVar8,uVar1,8);
        lVar8 = lVar5;
      }
      uVar1 = 0x538;
      if (lVar3 != 0) {
        uVar1 = 0x598;
      }
      __rustc::__rust_dealloc(lVar8,uVar1,8);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976d80);
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    lVar3 = param_2[2];
    for (lVar5 = param_2[3]; lVar5 != 0; lVar5 = lVar5 + -1) {
      lVar3 = *(long *)(lVar3 + 0x538);
    }
    uVar7 = 0;
    lVar5 = 0;
    *param_2 = 1;
    lVar8 = lVar3;
    if (*(short *)(lVar3 + 0x532) != 0) goto joined_r0x006edee0;
  }
  else {
    lVar5 = param_2[2];
    uVar7 = param_2[3];
    lVar8 = lVar3;
    if (uVar7 < *(ushort *)(lVar3 + 0x532)) goto joined_r0x006edee0;
  }
  do {
    lVar8 = *(long *)(lVar3 + 0x4d0);
    if (lVar8 == 0) {
      uVar1 = 0x538;
      if (lVar5 != 0) {
        uVar1 = 0x598;
      }
      __rustc::__rust_dealloc(lVar3,uVar1,8);
                    /* try { // try from 006ee078 to 006ee083 has its CatchHandler @ 006ee094 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977138);
    }
    uVar2 = *(ushort *)(lVar3 + 0x530);
    uVar7 = (ulong)uVar2;
    uVar1 = 0x538;
    if (lVar5 != 0) {
      uVar1 = 0x598;
    }
    lVar5 = lVar5 + 1;
    __rustc::__rust_dealloc(lVar3,uVar1,8);
    lVar3 = lVar8;
  } while (*(ushort *)(lVar8 + 0x532) <= uVar2);
joined_r0x006edee0:
  if (lVar5 == 0) {
    lVar3 = uVar7 + 1;
    lVar4 = lVar8;
  }
  else {
    plVar6 = (long *)(lVar8 + uVar7 * 8 + 0x540);
    lVar3 = lVar5;
    do {
      lVar4 = *plVar6;
      lVar3 = lVar3 + -1;
      plVar6 = (long *)(lVar4 + 0x538);
    } while (lVar3 != 0);
    lVar3 = 0;
  }
  param_2[1] = lVar4;
  param_2[2] = 0;
  param_2[3] = lVar3;
  *param_1 = lVar8;
  param_1[1] = lVar5;
  param_1[2] = uVar7;
  return;
}


// ===== 006ee098  FUN_006ee098 =====

undefined1  [16] FUN_006ee098(int *param_1)

{
  long lVar1;
  int __fd;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined1 auVar9 [16];
  __dev_t local_a0;
  __ino_t _Stack_98;
  __nlink_t _Stack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __dev_t _Stack_78;
  ulong local_70;
  __blksize_t _Stack_68;
  __blkcnt_t local_60;
  __time_t _Stack_58;
  long lStack_50;
  __time_t _Stack_48;
  long local_40;
  __time_t _Stack_38;
  long lStack_30;
  long lStack_28;
  
  __fd = *param_1;
  _Stack_98 = 0;
  local_a0 = 0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  _Stack_90 = 0;
  _Stack_78 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  _Stack_68 = 0;
  local_70 = 0;
  _Stack_58 = 0;
  local_60 = 0;
  _Stack_48 = 0;
  lStack_50 = 0;
  _Stack_38 = 0;
  local_40 = 0;
  lStack_28 = 0;
  lStack_30 = 0;
  iVar7 = fstat(__fd,(stat *)&local_a0);
  uVar6 = local_70;
  if (iVar7 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1;
      return auVar2 << 0x40;
    }
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = extraout_x1_01;
    return auVar3 << 0x40;
  }
  uVar8 = lseek64(__fd,0,1);
  if (uVar8 != 0xffffffffffffffff) {
    lVar1 = 0;
    if (uVar8 <= uVar6) {
      lVar1 = uVar6 - uVar8;
    }
    auVar9._1_7_ = 0;
    auVar9[0] = uVar8 != 0xffffffffffffffff;
    auVar9._8_8_ = lVar1;
    return auVar9;
  }
  __errno();
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = extraout_x1_00;
    return auVar4 << 0x40;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = extraout_x1_02;
  return auVar5 << 0x40;
}


// ===== 006ee1c4  std::rt::lang_start_internal =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::rt::lang_start_internal */

long __rustcall
std::rt::lang_start_internal
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  pthread_key_t __key;
  void *pvVar5;
  uint *puVar6;
  __sighandler_t p_Var7;
  long lVar8;
  ushort *puVar9;
  ushort *puVar10;
  pollfd local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_64 [4];
  
  if (DAT_009a6f60 == 0) {
                    /* try { // try from 006ee49c to 006ee4e3 has its CatchHandler @ 006ee59c */
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar5 = pthread_getspecific(__key);
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
  }
  if (pvVar5 == (void *)0x0) {
                    /* try { // try from 006ee214 to 006ee217 has its CatchHandler @ 006ee59c */
    pvVar5 = (void *)FUN_006d2020();
  }
  local_80.fd = 0;
  local_80.events = 0;
  local_80.revents = 0;
  uStack_78 = 1;
  local_70 = 2;
  DAT_009a6f40 = pvVar5;
  do {
    iVar3 = poll(&local_80,3,0);
    if (iVar3 != -1) {
      lVar8 = 0;
      iVar3 = -1;
      do {
        puVar9 = (ushort *)(((ulong)&local_80 | 6) + lVar8);
        do {
          lVar8 = lVar8 + 8;
          if (lVar8 == 0x20) goto LAB_006ee380;
          puVar10 = puVar9 + 4;
          uVar2 = *puVar9;
          puVar9 = puVar10;
        } while (((uVar2 >> 5 & 1) == 0) || ((iVar3 != -1 && (iVar4 = dup(iVar3), iVar4 != -1))));
        iVar3 = open("/dev/null",2,0);
      } while (iVar3 != -1);
      goto LAB_006ee498;
    }
    puVar6 = (uint *)__errno();
    uVar1 = *puVar6;
  } while (uVar1 == 4);
  if ((0x16 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x401800U) == 0)) {
LAB_006ee498:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar3 = fcntl(0,1);
  if ((iVar3 == -1) && (*puVar6 == 9)) {
    iVar3 = open("/dev/null",2,0);
    if (iVar3 == -1) goto LAB_006ee498;
    iVar4 = fcntl(1,1);
  }
  else {
    iVar3 = -1;
    iVar4 = fcntl(1,1);
  }
  if (((((iVar4 == -1) && (*puVar6 == 9)) && ((iVar3 == -1 || (iVar4 = dup(iVar3), iVar4 == -1))))
      && (iVar3 = open("/dev/null",2,0), iVar3 == -1)) ||
     (((iVar4 = fcntl(2,1), iVar4 == -1 && (*puVar6 == 9)) &&
      (((iVar3 == -1 || (iVar3 = dup(iVar3), iVar3 == -1)) &&
       (iVar3 = open("/dev/null",2,0), iVar3 == -1)))))) goto LAB_006ee498;
LAB_006ee380:
  p_Var7 = (__sighandler_t)0x1;
  if (param_5 < 2) {
    if (param_5 != 0) {
      if (param_5 != 1) {
LAB_006ee4cc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_0045ad81,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_009781c8);
      }
      DAT_009a6f38 = 1;
      goto LAB_006ee3dc;
    }
  }
  else {
    if (param_5 != 2) {
      if (param_5 != 3) goto LAB_006ee4cc;
      p_Var7 = (__sighandler_t)0x0;
    }
    DAT_009a6f38 = 1;
  }
  p_Var7 = signal(0xd,p_Var7);
  if (p_Var7 == (__sighandler_t)0xffffffffffffffff) {
    FUN_0070e804(0xffffffffffffffff,&DAT_0045bee6,0x61);
    FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
    std::process::abort();
  }
LAB_006ee3dc:
  DAT_009a6f48 = param_3;
  DAT_009a6f50 = param_4;
                    /* try { // try from 006ee3f0 to 006ee3f7 has its CatchHandler @ 006ee4e8 */
  iVar3 = (**(code **)(param_2 + 0x28))(param_1);
  if ((int)DAT_009a6d98 != 0) {
    local_80 = (pollfd)local_64;
    local_64[0] = 1;
                    /* try { // try from 006ee540 to 006ee563 has its CatchHandler @ 006ee59c */
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (&DAT_009a6d98,0,&local_80,&DAT_00976b40,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_00977b80);
  }
  return (long)iVar3;
}


// ===== 006ee5a8  FUN_006ee5a8 =====

void FUN_006ee5a8(void)

{
  undefined1 local_1c [4];
  undefined1 *local_18;
  
  if ((int)DAT_009a6d98 == 0) {
    return;
  }
  local_18 = local_1c;
  local_1c[0] = 1;
  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
            (&DAT_009a6d98,0,&local_18,&DAT_00976b40,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00977b80);
  return;
}


// ===== 006ee608  std::env::current_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::env::current_dir */

void __rustcall std::env::current_dir(size_t *param_1)

{
  int iVar1;
  undefined *puVar2;
  size_t sVar3;
  char *__buf;
  char *pcVar4;
  size_t sVar5;
  int *piVar6;
  size_t sVar7;
  size_t local_68;
  char *pcStack_60;
  size_t local_58;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __buf = (char *)__rustc::__rust_alloc(0x200,1);
  if (__buf == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    ::alloc::raw_vec::handle_error(1,0x200);
  }
  sVar7 = 0x200;
  local_68 = 0x200;
  local_58 = 0;
  pcStack_60 = __buf;
  pcVar4 = getcwd(__buf,0x200);
  if (pcVar4 == (char *)0x0) {
    sVar7 = 0x200;
    piVar6 = (int *)__errno();
    puVar2 = PTR_PTR_0099f738;
    do {
      iVar1 = *piVar6;
      if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      if (iVar1 != 0x22) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = (long)iVar1 << 0x20 | 2;
        if (sVar7 == 0) {
          return;
        }
        __rustc::__rust_dealloc(__buf,sVar7,1);
        return;
      }
                    /* try { // try from 006ee6d8 to 006ee70f has its CatchHandler @ 006ee7a8 */
      local_58 = sVar7;
      FUN_006cecec(&local_68,sVar7,1,1,1);
      __buf = pcStack_60;
      sVar7 = local_68;
      pcVar4 = getcwd(pcStack_60,local_68);
    } while (pcVar4 == (char *)0x0);
  }
  sVar5 = strlen(__buf);
  sVar3 = local_68;
  pcVar4 = pcStack_60;
  local_58 = sVar5;
  if (sVar5 < sVar7) {
    sVar3 = sVar5;
    if (sVar5 == 0) {
      __rustc::__rust_dealloc(__buf,sVar7,1);
      pcVar4 = (char *)0x1;
    }
    else {
      pcVar4 = (char *)__rustc::__rust_realloc(__buf,sVar7,1,sVar5);
      if (pcVar4 == (char *)0x0) {
                    /* try { // try from 006ee690 to 006ee69b has its CatchHandler @ 006ee7a0 */
                    /* WARNING: Subroutine does not return */
        ::alloc::raw_vec::handle_error(1,sVar5);
      }
    }
  }
  pcStack_60 = pcVar4;
  local_68 = sVar3;
  param_1[1] = (size_t)pcStack_60;
  *param_1 = local_68;
  param_1[2] = local_58;
  return;
}


// ===== 006ee7d0  std::env::current_exe =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::env::current_exe */

void __rustcall std::env::current_exe(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long local_1e0;
  undefined **ppuStack_1d8;
  long local_1d0;
  undefined1 local_1c8;
  undefined5 uStack_1c7;
  undefined2 uStack_1c2;
  undefined6 local_1c0;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  long local_48;
  undefined8 local_40;
  
  uStack_1ba = 0;
  local_1c8 = (undefined1)(undefined6)DAT_0045bafa;
  uStack_1c7 = (undefined5)((uint6)(undefined6)DAT_0045bafa >> 8);
  uStack_1c2 = DAT_0045bafa._6_2_;
  local_1c0 = _UNK_0045bb02;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(&local_48,&local_1c8,0xf);
  if (local_48 == 1) {
    local_1e0 = -1;
    ppuStack_1d8 = &PTR_DAT_00977090;
    uVar4 = 0;
LAB_006ee83c:
    ppuVar3 = ppuStack_1d8;
    if (uVar4 == 0) {
      if (*(char *)(ppuStack_1d8 + 2) != '\0') goto LAB_006ee8a4;
    }
    else {
      uVar1 = (ulong)*(byte *)((long)ppuStack_1d8 + 0x1f);
joined_r0x006ee8d0:
      if ((uVar1 & 0xff) != 0) goto LAB_006ee8a4;
    }
    *param_1 = -1;
    param_1[1] = (long)&PTR_DAT_00977fe8;
    if ((1 < uVar4 - 2) && (uVar4 != 0)) {
      lVar2 = (long)ppuVar3 + -1;
      local_1c0 = (undefined6)lVar2;
      uStack_1ba = (undefined1)((ulong)lVar2 >> 0x30);
      uStack_1b9 = (undefined1)((ulong)lVar2 >> 0x38);
      local_1c8 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_1c0);
      return;
    }
  }
  else {
    FUN_006f5284(&local_1e0,local_40);
    ppuVar3 = ppuStack_1d8;
    if (local_1e0 == -1) {
      uVar4 = (ulong)ppuStack_1d8 & 3;
      if (uVar4 < 2) goto LAB_006ee83c;
      if (uVar4 == 2) {
                    /* try { // try from 006ee880 to 006ee893 has its CatchHandler @ 006ee924 */
        lVar2 = core::io::error::os_functions::get_os_functions();
        uVar1 = (**(code **)(lVar2 + 8))((ulong)ppuVar3 >> 0x20);
      }
      else {
        uVar1 = (ulong)ppuStack_1d8 >> 0x20;
      }
      goto joined_r0x006ee8d0;
    }
LAB_006ee8a4:
    param_1[1] = (long)ppuStack_1d8;
    *param_1 = local_1e0;
    param_1[2] = local_1d0;
  }
  return;
}


// ===== 006ee940  std::env::args =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::env::args */

void __rustcall std::env::args(void)

{
  (*(code *)PTR_args_os_009a1988)();
  return;
}


// ===== 006ee944  std::env::vars =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::env::vars */

void __rustcall std::env::vars(void)

{
  (*(code *)PTR_vars_os_009a18e8)();
  return;
}


// ===== 006ee948  std::env::args_os =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::env::args_os */

void __rustcall std::env::args_os(long *param_1)

{
  size_t *psVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  size_t __n;
  void *__dest;
  long lVar6;
  char *__s;
  ulong uVar7;
  ulong local_78;
  long local_70;
  ulong local_68;
  
  lVar3 = DAT_009a6f50;
  uVar2 = DAT_009a6f48;
  if (DAT_009a6f50 == 0) {
    local_78 = 0;
    local_70 = 8;
    uVar7 = 0;
  }
  else {
    lVar6 = DAT_009a6f48 * 0x18;
    if (0x555555555555555 < DAT_009a6f48) {
      uVar4 = 0;
LAB_006ee9a4:
                    /* WARNING: Subroutine does not return */
      ::alloc::raw_vec::handle_error(uVar4,lVar6);
    }
    if (lVar6 == 0) {
      lVar5 = 8;
      local_78 = 0;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = __rustc::__rust_alloc(lVar6,8);
      uVar4 = 8;
      local_78 = uVar2;
      if (lVar5 == 0) goto LAB_006ee9a4;
    }
    local_70 = lVar5;
    if (uVar2 == 0) {
      uVar7 = 0;
    }
    else {
      local_68 = 0;
      lVar6 = 0;
      do {
        uVar7 = local_68;
        __s = *(char **)(lVar3 + local_68 * 8);
        if (__s == (char *)0x0) break;
        __n = strlen(__s);
        if (__n == 0) {
          __dest = (void *)0x1;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (void *)__rustc::__rust_alloc(__n,1);
          if (__dest == (void *)0x0) {
                    /* try { // try from 006eeadc to 006eeae7 has its CatchHandler @ 006eeb14 */
                    /* WARNING: Subroutine does not return */
            ::alloc::raw_vec::handle_error(1,__n);
          }
          memcpy(__dest,__s,__n);
        }
        if (uVar7 == local_78) {
                    /* try { // try from 006eeaa4 to 006eeaab has its CatchHandler @ 006eeaec */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::
          grow_one(&local_78);
          lVar5 = local_70;
        }
        local_68 = uVar7 + 1;
        psVar1 = (size_t *)(lVar5 + lVar6);
        lVar6 = lVar6 + 0x18;
        *psVar1 = __n;
        psVar1[1] = (size_t)__dest;
        psVar1[2] = __n;
        uVar7 = uVar2;
      } while (uVar2 != local_68);
    }
  }
  *param_1 = local_70;
  param_1[1] = local_70;
  param_1[2] = local_78;
  param_1[3] = local_70 + uVar7 * 0x18;
  return;
}


// ===== 006eeb28  std::env::vars_os =====

/* WARNING: Removing unreachable block (ram,0x006eec64) */
/* WARNING: Removing unreachable block (ram,0x006eec34) */
/* WARNING: Removing unreachable block (ram,0x006eee14) */
/* WARNING: Unknown calling convention: __rustcall */
/* std::env::vars_os */

void __rustcall std::env::vars_os(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  void *__dest;
  void *__dest_00;
  ulong *puVar6;
  long *plVar7;
  char *__s;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  void *pvStack_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong uStack_68;
  
  if (DAT_009a6f00 < 0x3ffffffe) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_009a6f00 = DAT_009a6f00 + 1;
    }
    if (cVar2 == '\0') goto LAB_006eeb80;
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
            (&DAT_009a6f00);
LAB_006eeb80:
  lVar10 = 8;
  local_a8 = 0;
  local_a0 = 8;
  local_98 = 0;
  plVar7 = *(long **)PTR_environ_0099f790;
  if (plVar7 == (long *)0x0) {
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    __s = (char *)*plVar7;
    if (__s == (char *)0x0) {
      lVar9 = 0;
      lVar10 = 8;
      lVar8 = local_a8;
    }
    else {
      lVar9 = 0;
      lVar10 = 8;
      do {
        sVar5 = strlen(__s);
        if (sVar5 != 0) {
          if (sVar5 < 0x11) {
            lVar8 = 0;
            if (sVar5 != 1) {
              do {
                if (__s[lVar8 + 1] == '=') goto LAB_006eec74;
                lVar8 = lVar8 + 1;
              } while (sVar5 - 1 != lVar8);
            }
          }
          else {
                    /* try { // try from 006eec38 to 006eec47 has its CatchHandler @ 006eee44 */
            auVar11 = core::slice::memchr::memchr_aligned(0x3d,__s + 1,sVar5 - 1);
            lVar8 = auVar11._8_8_;
            if (auVar11._0_8_ == 1) {
LAB_006eec74:
              uVar1 = lVar8 + 1;
              if (sVar5 < uVar1) {
                    /* try { // try from 006eedac to 006eedc3 has its CatchHandler @ 006eee60 */
                    /* WARNING: Subroutine does not return */
                core::slice::index::slice_index_fail
                          (0,uVar1,sVar5,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977300);
              }
              if (uVar1 == 0) {
                __dest = (void *)0x1;
                if (sVar5 == 0) goto LAB_006eedc8;
              }
              else {
                __rustc::__rust_no_alloc_shim_is_unstable_v2();
                __dest = (void *)__rustc::__rust_alloc(lVar8 + 1,1);
                if (__dest == (void *)0x0) {
                    /* try { // try from 006eedf4 to 006eedff has its CatchHandler @ 006eee60 */
                    /* WARNING: Subroutine does not return */
                  ::alloc::raw_vec::handle_error(1,uVar1);
                }
                memcpy(__dest,__s,lVar8 + 1);
                if (sVar5 <= uVar1) {
LAB_006eedc8:
                    /* try { // try from 006eedc8 to 006eeddf has its CatchHandler @ 006eee48 */
                    /* WARNING: Subroutine does not return */
                  core::slice::index::slice_index_fail
                            (lVar8 + 2,sVar5,sVar5,&PTR_s__rustc_48a229ceaefd4985c50990b14_009772e8)
                  ;
                }
              }
              sVar5 = sVar5 - (lVar8 + 2);
              if (sVar5 == 0) {
                local_70 = (void *)0x1;
              }
              else {
                __rustc::__rust_no_alloc_shim_is_unstable_v2();
                __dest_00 = (void *)__rustc::__rust_alloc(sVar5,1);
                if (__dest_00 == (void *)0x0) {
                    /* try { // try from 006eee04 to 006eee0f has its CatchHandler @ 006eee28 */
                    /* WARNING: Subroutine does not return */
                  ::alloc::raw_vec::handle_error(1,sVar5);
                }
                memcpy(__dest_00,__s + lVar8 + 2,sVar5);
                local_70 = __dest_00;
              }
              local_90 = uVar1;
              pvStack_88 = __dest;
              local_80 = uVar1;
              uStack_78 = sVar5;
              uStack_68 = sVar5;
              if (lVar9 == local_a8) {
                    /* try { // try from 006eed2c to 006eed33 has its CatchHandler @ 006eee34 */
                <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry>>
                ::grow_one(&local_a8);
                lVar10 = local_a0;
              }
              puVar6 = (ulong *)(lVar10 + lVar9 * 0x30);
              lVar9 = lVar9 + 1;
              puVar6[3] = uStack_78;
              puVar6[2] = local_80;
              puVar6[5] = uStack_68;
              puVar6[4] = (ulong)local_70;
              puVar6[1] = (ulong)pvStack_88;
              *puVar6 = local_90;
              local_98 = lVar9;
            }
          }
        }
        plVar7 = plVar7 + 1;
        __s = (char *)*plVar7;
        lVar8 = local_a8;
      } while (__s != (char *)0x0);
    }
  }
  do {
    uVar4 = DAT_009a6f00 - 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_009a6f00 = uVar4;
    }
  } while (cVar2 != '\0');
  if ((uVar4 & 0xbfffffff) == 0x80000000) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (&DAT_009a6f00);
  }
  *param_1 = lVar10;
  param_1[1] = lVar10;
  param_1[2] = lVar8;
  param_1[3] = lVar10 + lVar9 * 0x30;
  return;
}


// ===== 006eeea8  std::env::home_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::env::home_dir */

void __rustcall std::env::home_dir(long *param_1)

{
  undefined8 uVar1;
  long local_1d0;
  undefined **ppuStack_1c8;
  long local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  long local_1b0 [47];
  long local_38;
  undefined8 local_30;
  
  local_1b4 = 0;
  local_1b8 = 0x454d4f48;
  uVar1 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_38,&local_1b8,5);
  if (local_38 == 1) {
    ppuStack_1c8 = &PTR_DAT_00977090;
  }
  else {
    FUN_006d1be8(&local_1d0,uVar1,local_30);
    if (local_1d0 != -2) {
      if (local_1d0 != -1) {
        if (local_1c0 != 0) {
          *param_1 = local_1d0;
          param_1[1] = (long)ppuStack_1c8;
          param_1[2] = local_1c0;
          return;
        }
        if (local_1d0 != 0) {
          __rustc::__rust_dealloc(ppuStack_1c8,local_1d0,1);
        }
      }
      goto LAB_006eef88;
    }
  }
  if ((1 < ((ulong)ppuStack_1c8 & 3) - 2) && (((ulong)ppuStack_1c8 & 3) != 0)) {
    local_1b0[0] = (long)ppuStack_1c8 + -1;
    local_1b8 = CONCAT31(local_1b8._1_3_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_1b0);
    *param_1 = -1;
    return;
  }
LAB_006eef88:
  *param_1 = -1;
  return;
}


// ===== 006eefa0  std::env::temp_dir =====

/* WARNING: Removing unreachable block (ram,0x006ef004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::env::temp_dir */

void __rustcall std::env::temp_dir(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long local_1e0;
  undefined **local_1d8;
  long lStack_1d0;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined1 local_1c2;
  long local_1c0 [47];
  long local_48;
  undefined8 local_40;
  
  local_1c4 = 0x5249;
  local_1c8 = 0x44504d54;
  local_1c2 = 0;
  uVar1 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_48,&local_1c8,7);
  if (local_48 == 1) {
    local_1d8 = &PTR_DAT_00977090;
    uVar3 = 0;
  }
  else {
    FUN_006d1be8(&local_1e0,uVar1,local_40);
    if (local_1e0 != -2) {
      if (local_1e0 != -1) {
        *param_1 = local_1e0;
        param_1[2] = lStack_1d0;
        param_1[1] = (long)local_1d8;
        return;
      }
      goto LAB_006ef08c;
    }
    uVar3 = (ulong)local_1d8 & 3;
    if (uVar3 - 2 < 2) goto LAB_006ef08c;
  }
  if (uVar3 != 0) {
    local_1c0[0] = (long)local_1d8 + -1;
    local_1c8 = CONCAT31(local_1c8._1_3_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_1c0);
  }
LAB_006ef08c:
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)__rustc::__rust_alloc(0xf,1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    ::alloc::raw_vec::handle_error(1,0xf);
  }
  uVar1 = CONCAT71(_UNK_0045bb3e,DAT_0045bb36._7_1_);
  *puVar2 = CONCAT17(DAT_0045bb36._7_1_,(undefined7)DAT_0045bb36);
  *(undefined8 *)((long)puVar2 + 7) = uVar1;
  *param_1 = 0xf;
  param_1[1] = (long)puVar2;
  param_1[2] = 0xf;
  return;
}


// ===== 006ef0e4  std::path::compare_components =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::path::compare_components */

uint __rustcall std::path::compare_components(long *param_1,long *param_2)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  void *__s1;
  void *__s1_00;
  void *__s2;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long local_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte local_d0;
  byte local_cf;
  void *local_c8;
  ulong uStack_c0;
  void *local_b8;
  ulong uStack_b0;
  byte local_98;
  byte local_97;
  void *local_90;
  ulong uStack_88;
  void *local_80;
  ulong uStack_78;
  
  if ((((char)param_1[2] == -1) && ((char)param_2[2] == -1)) &&
     ((char)param_1[7] == (char)param_2[7])) {
    lVar8 = *param_1;
    uVar3 = param_1[1];
    lVar2 = *param_2;
    uVar11 = param_2[1];
    uVar10 = uVar11;
    if (uVar3 <= uVar11) {
      uVar10 = uVar3;
    }
    if (uVar10 != 0) {
      uVar9 = 0;
      do {
        if (*(char *)(lVar8 + uVar9) != *(char *)(lVar2 + uVar9)) {
          if (uVar3 < uVar9) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,uVar9,uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977c10);
          }
          goto LAB_006ef17c;
        }
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    uVar9 = uVar10;
    if (uVar3 == uVar11) {
      return 0;
    }
LAB_006ef17c:
    do {
      uVar10 = uVar9;
      if (uVar10 == 0) goto LAB_006ef1d8;
      uVar9 = uVar10 - 1;
    } while (*(char *)(lVar8 + uVar10 + -1) != '/');
    if (uVar3 < uVar10) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar10,uVar3,uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977bf8);
    }
    *param_1 = lVar8 + uVar9 + 1;
    param_1[1] = ~uVar9 + uVar3;
    *(undefined1 *)(param_1 + 7) = 2;
    if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar10,uVar11,uVar11,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977be0);
    }
    *(undefined1 *)(param_2 + 7) = 2;
    *param_2 = lVar2 + uVar9 + 1;
    param_2[1] = ~uVar9 + uVar11;
  }
LAB_006ef1d8:
  lStack_148 = param_1[1];
  local_150 = *param_1;
  lStack_138 = param_1[3];
  lStack_140 = param_1[2];
  lStack_128 = param_1[5];
  local_130 = param_1[4];
  lStack_118 = param_1[7];
  lStack_120 = param_1[6];
  lStack_108 = param_2[1];
  local_110 = *param_2;
  lStack_f8 = param_2[3];
  lStack_100 = param_2[2];
  lStack_e8 = param_2[5];
  local_f0 = param_2[4];
  lStack_d8 = param_2[7];
  lStack_e0 = param_2[6];
LAB_006ef1f8:
  do {
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_d0,&local_150);
    uVar10 = uStack_b0;
    __s1_00 = local_b8;
    sVar1 = uStack_c0;
    __s1 = local_c8;
    bVar5 = local_cf;
    bVar4 = local_d0;
    uVar7 = (uint)local_d0;
    if (uVar7 == 0xff) {
      <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_98,&local_110);
      return -(uint)(local_98 != 0xff);
    }
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_98,&local_110);
    uVar3 = uStack_78;
    __s2 = local_80;
    uVar11 = (ulong)local_98;
    if (local_98 == 0xff) {
      return 1;
    }
    uVar9 = (ulong)uVar7;
    lVar8 = uVar9 - 5;
    if (bVar4 < 6) {
      lVar8 = 0;
    }
    lVar2 = 0;
    if (5 < local_98) {
      lVar2 = uVar11 - 5;
    }
    uVar7 = (uint)(lVar2 < lVar8);
    if (lVar8 < lVar2) {
      uVar7 = 0xffffffff;
    }
    if (lVar8 == lVar2) {
      if (lVar8 == 4) goto LAB_006ef318;
      if ((lVar8 != 0) || (5 < local_98)) goto LAB_006ef1f8;
      uVar7 = (uint)(uVar11 < uVar9);
      if (uVar9 < uVar11) {
        uVar7 = 0xffffffff;
      }
      if (bVar4 == local_98) {
        if (bVar4 < 3) {
          if (bVar4 == 0) {
LAB_006ef318:
            lVar8 = sVar1 - uStack_88;
            if (uStack_88 <= sVar1) {
              sVar1 = uStack_88;
            }
            iVar6 = memcmp(__s1,local_90,sVar1);
            if (iVar6 != 0) {
              lVar8 = (long)iVar6;
            }
          }
          else {
            if (bVar4 != 1) goto LAB_006ef2a8;
LAB_006ef2c8:
            lVar8 = sVar1 - uStack_88;
            if (uStack_88 <= sVar1) {
              sVar1 = uStack_88;
            }
            iVar6 = memcmp(__s1,local_90,sVar1);
            if (iVar6 != 0) {
              lVar8 = (long)iVar6;
            }
            uVar7 = (uint)(0 < lVar8);
            if (lVar8 < 0) {
              uVar7 = 0xffffffff;
            }
            if (lVar8 != 0) goto LAB_006ef340;
            sVar1 = uVar10;
            if (uVar3 <= uVar10) {
              sVar1 = uVar3;
            }
            iVar6 = memcmp(__s1_00,__s2,sVar1);
            lVar8 = uVar10 - uVar3;
            if (iVar6 != 0) {
              lVar8 = (long)iVar6;
            }
          }
          uVar7 = (uint)(0 < lVar8);
          if (lVar8 < 0) {
            uVar7 = 0xffffffff;
          }
        }
        else {
          if (bVar4 == 3) goto LAB_006ef318;
          if (bVar4 == 4) goto LAB_006ef2c8;
LAB_006ef2a8:
          uVar7 = (uint)(local_97 < bVar5);
          if (bVar5 < local_97) {
            uVar7 = 0xffffffff;
          }
        }
      }
    }
LAB_006ef340:
    if (((uVar7 & 0xff) != 0xfe) && ((uVar7 & 0xff) != 0)) {
      return uVar7;
    }
  } while( true );
}


// ===== 006ef3d4  std::alloc::set_alloc_error_hook =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::alloc::set_alloc_error_hook */

void __rustcall std::alloc::set_alloc_error_hook(undefined8 param_1)

{
  *(undefined8 *)PTR_HOOK_0099f748 = param_1;
  return;
}


// ===== 006ef3e4  std::alloc::default_alloc_error_hook =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::alloc::default_alloc_error_hook */

void __rustcall std::alloc::default_alloc_error_hook(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  byte local_48 [8];
  byte *local_40;
  undefined *puStack_38;
  undefined1 uStack_11;
  
  do {
    cVar3 = DAT_009a6f0d;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f0d,0x10);
    if (bVar2) {
      DAT_009a6f0d = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (cVar3 != '\0') {
    uVar5 = FUN_0070f544();
    FUN_0070f384(uVar5,&DAT_0036bd1b);
    FUN_006c2ec0();
    return;
  }
  uVar5 = FUN_0070f544();
  FUN_0070f384(uVar5,&DAT_00364bde);
  FUN_006c2ec0();
  sys::backtrace::lock();
                    /* try { // try from 006ef44c to 006ef4b7 has its CatchHandler @ 006ef4d0 */
  bVar4 = panic::get_backtrace_style();
  if (bVar4 == 0) {
    local_48[0] = 0;
    local_40 = local_48;
    puStack_38 = PTR_fmt_0099f760;
    FUN_0070f304();
  }
  else if (bVar4 == 1) {
    local_40 = local_48;
    puStack_38 = PTR_fmt_0099f760;
    local_48[0] = bVar4;
    FUN_0070f304();
  }
  else {
    if (bVar4 != 2) goto LAB_006ef4b8;
    FUN_0070e928(&uStack_11,&DAT_0045af34,0x9d);
  }
  FUN_006c2ec0();
LAB_006ef4b8:
  FUN_0070f260();
  return;
}


// ===== 006ef4e4  std::alloc::rust_oom =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::alloc::rust_oom */

uint __rustcall std::alloc::rust_oom(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  long lStack_200;
  undefined **ppuStack_1f8;
  long lStack_1f0;
  undefined1 uStack_1e8;
  undefined5 uStack_1e7;
  undefined2 uStack_1e2;
  undefined6 uStack_1e0;
  undefined1 uStack_1da;
  undefined1 uStack_1d9;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_1;
  uStack_18 = param_2;
  sys::backtrace::__rust_end_short_backtrace<std::alloc::rust_oom::_closure_0_,_>(&local_20);
  pcStack_28 = panic::resume_unwind;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_006ef7fc();
  if ((DAT_009a6ec0 - 1 & 0xff) < 3) {
    return DAT_009a6ec0 - 1;
  }
  pcStack_48 = panic::get_backtrace_style;
  uStack_1da = 0;
  uStack_1e8 = (undefined1)(undefined6)DAT_0045b420;
  uStack_1e7 = (undefined5)((uint6)(undefined6)DAT_0045b420 >> 8);
  uStack_1e2 = DAT_0045b420._6_2_;
  uStack_1e0 = _UNK_0045b428;
  puStack_50 = (undefined1 *)&puStack_30;
  uVar4 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&lStack_68,&uStack_1e8,0xf);
  if (lStack_68 == 1) {
    ppuStack_1f8 = &PTR_DAT_00977090;
LAB_006ef58c:
    if ((1 < ((ulong)ppuStack_1f8 & 3) - 2) && (((ulong)ppuStack_1f8 & 3) != 0)) {
      lVar5 = (long)ppuStack_1f8 + -1;
      uStack_1e0 = (undefined6)lVar5;
      uStack_1da = (undefined1)((ulong)lVar5 >> 0x30);
      uStack_1d9 = (undefined1)((ulong)lVar5 >> 0x38);
      uStack_1e8 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_1e0);
    }
  }
  else {
    FUN_006d1be8(&lStack_200,uVar4,uStack_60);
    if (lStack_200 == -2) goto LAB_006ef58c;
    if (lStack_200 != -1) {
      if (lStack_1f0 == 4) {
        if (*(int *)ppuStack_1f8 == 0x6c6c7566) {
          if (lStack_200 != 0) {
            __rustc::__rust_dealloc(ppuStack_1f8,lStack_200,1);
          }
          uVar3 = 1;
          bVar6 = 2;
          goto LAB_006ef604;
        }
      }
      else if ((lStack_1f0 == 1) && (*(char *)ppuStack_1f8 == '0')) {
        if (lStack_200 != 0) {
          __rustc::__rust_dealloc(ppuStack_1f8,lStack_200,1);
        }
        goto LAB_006ef5f4;
      }
      if (lStack_200 == 0) {
        uVar3 = 0;
        bVar6 = 1;
      }
      else {
        bVar6 = 1;
        __rustc::__rust_dealloc(ppuStack_1f8,lStack_200,1);
        uVar3 = 0;
      }
      goto LAB_006ef604;
    }
  }
LAB_006ef5f4:
  uVar3 = 2;
  bVar6 = 3;
LAB_006ef604:
  do {
    if (DAT_009a6ec0 != 0) {
      ClearExclusiveLocal();
      if (DAT_009a6ec0 < 4) {
        return DAT_009a6ec0 - 1;
      }
      return 0xffffffff;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6ec0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_009a6ec0 = bVar6;
    }
  } while (cVar1 != '\0');
  return uVar3;
}


// ===== 006ef4fc  std::panic::resume_unwind =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::panic::resume_unwind */

uint __rustcall std::panic::resume_unwind(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  long lStack_1e0;
  undefined **ppuStack_1d8;
  long lStack_1d0;
  undefined1 uStack_1c8;
  undefined5 uStack_1c7;
  undefined2 uStack_1c2;
  undefined6 uStack_1c0;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_006ef7fc();
  if ((DAT_009a6ec0 - 1 & 0xff) < 3) {
    return DAT_009a6ec0 - 1;
  }
  pcStack_28 = get_backtrace_style;
  uStack_1ba = 0;
  uStack_1c8 = (undefined1)(undefined6)DAT_0045b420;
  uStack_1c7 = (undefined5)((uint6)(undefined6)DAT_0045b420 >> 8);
  uStack_1c2 = DAT_0045b420._6_2_;
  uStack_1c0 = _UNK_0045b428;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar4 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&lStack_48,&uStack_1c8,0xf);
  if (lStack_48 == 1) {
    ppuStack_1d8 = &PTR_DAT_00977090;
LAB_006ef58c:
    if ((1 < ((ulong)ppuStack_1d8 & 3) - 2) && (((ulong)ppuStack_1d8 & 3) != 0)) {
      lVar5 = (long)ppuStack_1d8 + -1;
      uStack_1c0 = (undefined6)lVar5;
      uStack_1ba = (undefined1)((ulong)lVar5 >> 0x30);
      uStack_1b9 = (undefined1)((ulong)lVar5 >> 0x38);
      uStack_1c8 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_1c0);
    }
  }
  else {
    FUN_006d1be8(&lStack_1e0,uVar4,uStack_40);
    if (lStack_1e0 == -2) goto LAB_006ef58c;
    if (lStack_1e0 != -1) {
      if (lStack_1d0 == 4) {
        if (*(int *)ppuStack_1d8 == 0x6c6c7566) {
          if (lStack_1e0 != 0) {
            __rustc::__rust_dealloc(ppuStack_1d8,lStack_1e0,1);
          }
          uVar3 = 1;
          bVar6 = 2;
          goto LAB_006ef604;
        }
      }
      else if ((lStack_1d0 == 1) && (*(char *)ppuStack_1d8 == '0')) {
        if (lStack_1e0 != 0) {
          __rustc::__rust_dealloc(ppuStack_1d8,lStack_1e0,1);
        }
        goto LAB_006ef5f4;
      }
      if (lStack_1e0 == 0) {
        uVar3 = 0;
        bVar6 = 1;
      }
      else {
        bVar6 = 1;
        __rustc::__rust_dealloc(ppuStack_1d8,lStack_1e0,1);
        uVar3 = 0;
      }
      goto LAB_006ef604;
    }
  }
LAB_006ef5f4:
  uVar3 = 2;
  bVar6 = 3;
LAB_006ef604:
  do {
    if (DAT_009a6ec0 != 0) {
      ClearExclusiveLocal();
      if (DAT_009a6ec0 < 4) {
        return DAT_009a6ec0 - 1;
      }
      return 0xffffffff;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6ec0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_009a6ec0 = bVar6;
    }
  } while (cVar1 != '\0');
  return uVar3;
}


// ===== 006ef508  std::panic::get_backtrace_style =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::panic::get_backtrace_style */

uint __rustcall std::panic::get_backtrace_style(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  long local_1d0;
  undefined **ppuStack_1c8;
  long local_1c0;
  undefined1 local_1b8;
  undefined5 uStack_1b7;
  undefined2 uStack_1b2;
  undefined6 local_1b0;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  long local_38;
  undefined8 local_30;
  
  if ((DAT_009a6ec0 - 1 & 0xff) < 3) {
    return DAT_009a6ec0 - 1;
  }
  uStack_1aa = 0;
  local_1b8 = (undefined1)(undefined6)DAT_0045b420;
  uStack_1b7 = (undefined5)((uint6)(undefined6)DAT_0045b420 >> 8);
  uStack_1b2 = DAT_0045b420._6_2_;
  local_1b0 = _UNK_0045b428;
  uVar4 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_38,&local_1b8,0xf);
  if (local_38 == 1) {
    ppuStack_1c8 = &PTR_DAT_00977090;
LAB_006ef58c:
    if ((1 < ((ulong)ppuStack_1c8 & 3) - 2) && (((ulong)ppuStack_1c8 & 3) != 0)) {
      lVar5 = (long)ppuStack_1c8 + -1;
      local_1b0 = (undefined6)lVar5;
      uStack_1aa = (undefined1)((ulong)lVar5 >> 0x30);
      uStack_1a9 = (undefined1)((ulong)lVar5 >> 0x38);
      local_1b8 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_1b0);
    }
  }
  else {
    FUN_006d1be8(&local_1d0,uVar4,local_30);
    if (local_1d0 == -2) goto LAB_006ef58c;
    if (local_1d0 != -1) {
      if (local_1c0 == 4) {
        if (*(int *)ppuStack_1c8 == 0x6c6c7566) {
          if (local_1d0 != 0) {
            __rustc::__rust_dealloc(ppuStack_1c8,local_1d0,1);
          }
          uVar3 = 1;
          bVar6 = 2;
          goto LAB_006ef604;
        }
      }
      else if ((local_1c0 == 1) && (*(char *)ppuStack_1c8 == '0')) {
        if (local_1d0 != 0) {
          __rustc::__rust_dealloc(ppuStack_1c8,local_1d0,1);
        }
        goto LAB_006ef5f4;
      }
      if (local_1d0 == 0) {
        uVar3 = 0;
        bVar6 = 1;
      }
      else {
        bVar6 = 1;
        __rustc::__rust_dealloc(ppuStack_1c8,local_1d0,1);
        uVar3 = 0;
      }
      goto LAB_006ef604;
    }
  }
LAB_006ef5f4:
  uVar3 = 2;
  bVar6 = 3;
LAB_006ef604:
  do {
    if (DAT_009a6ec0 != 0) {
      ClearExclusiveLocal();
      if (DAT_009a6ec0 < 4) {
        return DAT_009a6ec0 - 1;
      }
      return 0xffffffff;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6ec0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_009a6ec0 = bVar6;
    }
  } while (cVar1 != '\0');
  return uVar3;
}


// ===== 006ef688  std::panic::set_backtrace_style =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panic::set_backtrace_style */

void __rustcall std::panic::set_backtrace_style(char param_1)

{
  DAT_009a6ec0 = param_1 + '\x01';
  return;
}


// ===== 006ef698  std::process::id =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::process::id */

void __rustcall std::process::id(void)

{
  (*(code *)PTR_getpid_009a19a0)();
  return;
}


// ===== 006ef69c  std::process::exit =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::process::exit */

void __rustcall std::process::exit(undefined4 param_1)

{
  FUN_006ee5a8();
  FUN_006f2104(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_006f5728();
}


// ===== 006ef6b8  std::process::abort =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::process::abort */

void __rustcall std::process::abort(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_006f5728();
}


// ===== 006ef6c4  std::panicking::default_hook =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::default_hook */

void __rustcall std::panicking::default_hook(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  long local_50;
  undefined8 local_48;
  long *local_40 [2];
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  if ((*(byte *)((long)param_1 + 0x19) & 1) == 0) {
    uVar3 = panic_count::get_count();
    if (uVar3 < 2) {
      local_14[0] = panic::get_backtrace_style();
    }
    else {
      local_14[0] = 1;
    }
  }
  else {
    local_14[0] = 0xff;
  }
  local_80 = param_1[2];
  local_78 = payload_as_str(*param_1,param_1[1]);
  puStack_60 = local_78;
  local_58 = local_14;
  local_68 = (undefined1 *)&local_80;
  auVar5 = io::stdio::try_set_output_capture(0);
  lVar4 = auVar5._8_8_;
  if (((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (lVar4 != 0)) {
                    /* try { // try from 006ef748 to 006ef753 has its CatchHandler @ 006ef7ec */
    local_50 = lVar4;
    FUN_006df3fc(&local_48,lVar4 + 0x10);
                    /* try { // try from 006ef75c to 006ef76f has its CatchHandler @ 006ef7dc */
    FUN_006d0f3c(&local_68,local_40[0] + 1,&PTR_FUN_00977c90);
                    /* try { // try from 006ef770 to 006ef773 has its CatchHandler @ 006ef7ec */
    FUN_0070f43c();
    auVar5 = io::stdio::try_set_output_capture(lVar4);
    local_40[0] = auVar5._8_8_;
    if (((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
       (local_48 = 1, local_40[0] != (long *)0x0)) {
      do {
        lVar4 = *local_40[0];
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_40[0],0x10);
        if (bVar2) {
          *local_40[0] = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>::
        drop_slow(local_40);
      }
    }
  }
  else {
    FUN_006d0f3c(&local_68,&uStack_11,&DAT_00977c40);
  }
  return;
}


// ===== 006ef7fc  FUN_006ef7fc =====

void FUN_006ef7fc(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_40;
  long local_38;
  
  puVar3 = PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  do {
    lVar7 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    uVar6 = DAT_009a63d8;
  } while (cVar1 != '\0');
  if (lVar7 < 0) {
    uVar6 = FUN_0070e804(param_1,&DAT_0045b720,0x16);
    if (((uVar6 != 0) && (1 < (uVar6 & 3) - 2)) && ((uVar6 & 3) != 0)) {
      local_38 = uVar6 - 1;
      local_40 = CONCAT71(local_40._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
    }
  }
  else {
    if (DAT_009a63d8 == 0) {
                    /* try { // try from 006ef92c to 006ef95b has its CatchHandler @ 006ef994 */
      uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(&DAT_009a63d8);
      plVar5 = (long *)pthread_getspecific((pthread_key_t)uVar6);
    }
    else {
      plVar5 = (long *)pthread_getspecific((pthread_key_t)DAT_009a63d8);
    }
    if (plVar5 < &DAT_00000002) {
      plVar5 = (long *)FUN_006c1574(uVar6 & 0xffffffff,plVar5,0);
    }
    if (plVar5 == (long *)0x0) {
                    /* try { // try from 006ef85c to 006ef8ff has its CatchHandler @ 006ef994 */
                    /* WARNING: Subroutine does not return */
      std::thread::local::panic_access_error(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976bb0);
    }
    if ((*(byte *)(plVar5 + 1) & 1) == 0) {
      *(undefined1 *)(plVar5 + 1) = 0;
      *plVar5 = *plVar5 + 1;
      local_40 = param_1;
      local_38 = param_2;
                    /* try { // try from 006ef918 to 006ef927 has its CatchHandler @ 006ef960 */
      __rustc::rust_panic(&local_40,&PTR_FUN_00977ce0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x6ef92c);
      (*pcVar4)();
    }
    uVar6 = FUN_0070e804(plVar5,&DAT_0045b736,0x32);
    if (((uVar6 != 0) && (1 < (uVar6 & 3) - 2)) && ((uVar6 & 3) != 0)) {
      local_38 = uVar6 - 1;
      local_40 = CONCAT71(local_40._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006ef9dc  std::panicking::payload_as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::payload_as_str */

undefined1  [16] __rustcall std::panicking::payload_as_str(undefined1 (*param_1) [16],long param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  long local_30;
  long lStack_28;
  
  pcVar1 = *(code **)(param_2 + 0x18);
  (*pcVar1)(&local_30);
  if (lStack_28 == 0x24c161f26c70c1f1 && local_30 == -0x4609fd23a01609a4) {
    return *param_1;
  }
  (*pcVar1)(&local_30,param_1);
  if (lStack_28 == -0x42f18623245a2bbe && local_30 == -0x717792f12e63cac0) {
    return *(undefined1 (*) [16])(*param_1 + 8);
  }
  auVar2._8_8_ = 0xc;
  auVar2._0_8_ = &DAT_0045b768;
  return auVar2;
}


// ===== 006efac0  std::panicking::panic_with_hook =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::panic_with_hook */

void __rustcall
std::panicking::panic_with_hook
          (long param_1,long param_2,long *param_3,byte param_4,undefined1 param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint extraout_w8;
  undefined1 auVar6 [16];
  long local_88;
  long local_80;
  long *local_78;
  long local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  long *local_50;
  undefined8 local_48;
  undefined1 uStack_21;
  
  local_88 = param_1;
  local_80 = param_2;
  local_78 = param_3;
  uVar3 = panic_count::increase(1);
  puVar4 = PTR_HOOK_0099f7c0;
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 2) {
    uVar3 = *(uint *)PTR_HOOK_0099f7c0;
    if (uVar3 < 0x3ffffffe) {
      if (*(uint *)PTR_HOOK_0099f7c0 != uVar3) {
        ClearExclusiveLocal();
        goto LAB_006efc54;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(PTR_HOOK_0099f7c0,0x10);
      if (bVar2) {
        *(uint *)PTR_HOOK_0099f7c0 = uVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 != '\0') goto LAB_006efc54;
    }
    else {
LAB_006efc54:
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
                (PTR_HOOK_0099f7c0);
    }
    param_1 = local_80;
    param_2 = local_88;
    if (*(long *)(puVar4 + 8) == 0) {
                    /* try { // try from 006efb44 to 006efb9f has its CatchHandler @ 006efc64 */
      local_60 = (**(code **)(local_80 + 0x28))(local_88);
      local_50 = local_78;
      local_48._0_2_ = CONCAT11(param_5,param_4);
      default_hook(local_60);
    }
    else {
      local_60 = (**(code **)(local_80 + 0x28))(local_88);
      local_48._0_2_ = CONCAT11(param_5,param_4);
      local_50 = local_78;
      (**(code **)(*(long *)(puVar4 + 0x10) + 0x28))(*(undefined8 *)(puVar4 + 8),local_60);
    }
    FUN_0070f450();
    panic_count::finished_panic_hook();
    if ((param_4 & 1) == 0) {
      puVar4 = &DAT_0045b774;
      puVar5 = (undefined1 *)0x5b;
      goto LAB_006efc30;
    }
    __rustc::rust_panic(param_2,param_1);
    uVar3 = extraout_w8;
  }
  if (uVar3 == 0) {
    local_50 = &local_88;
    local_48 = FUN_006ff778;
    puVar4 = &DAT_0036cf4f;
  }
  else {
    auVar6 = (**(code **)(param_2 + 0x30))(param_1);
    local_70 = auVar6._0_8_;
    bVar2 = local_70 == 0;
    if (bVar2) {
      local_70 = 1;
    }
    uStack_68 = 0;
    if (!bVar2) {
      uStack_68 = auVar6._8_8_;
    }
    puVar4 = &DAT_0036ef2d;
    local_50 = &local_70;
    local_48 = FUN_006ff764;
  }
  local_60._0_8_ = &local_78;
  local_60._8_8_ = FUN_006ff700;
  puVar5 = local_60;
LAB_006efc30:
  FUN_0070e928(&uStack_21,puVar4,puVar5);
  FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006efc74  std::panicking::set_hook =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::set_hook */

void __rustcall std::panicking::set_hook(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  
                    /* try { // try from 006efd3c to 006efd5b has its CatchHandler @ 006efd7c */
  if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0) &&
     (uVar7 = panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045b7a1,0x69,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977d18);
  }
  puVar6 = PTR_HOOK_0099f7c0;
  if (*(int *)PTR_HOOK_0099f7c0 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(PTR_HOOK_0099f7c0,0x10);
    if (bVar5) {
      *(undefined4 *)PTR_HOOK_0099f7c0 = 0x3fffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_006efcbc;
  }
  else {
    ClearExclusiveLocal();
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
            (PTR_HOOK_0099f7c0);
LAB_006efcbc:
  lVar1 = *(long *)(puVar6 + 8);
  puVar2 = *(undefined8 **)(puVar6 + 0x10);
  *(undefined8 *)(puVar6 + 8) = param_1;
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  do {
    iVar3 = *(int *)puVar6;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar5) {
      *(int *)puVar6 = iVar3 + -0x3fffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (PTR_HOOK_0099f7c0);
  }
  if (lVar1 != 0) {
    if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 006efcf4 to 006efcfb has its CatchHandler @ 006efd94 */
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      __rustc::__rust_dealloc(lVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


// ===== 006efdb8  std::panicking::take_hook =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::take_hook */

undefined1  [16] __rustcall std::panicking::take_hook(void)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0) &&
     (iVar6 = panic_count::is_zero_slow_path(), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045b7a1,0x69,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977d60);
  }
  puVar5 = PTR_HOOK_0099f7c0;
  if (*(int *)PTR_HOOK_0099f7c0 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(PTR_HOOK_0099f7c0,0x10);
    if (bVar4) {
      *(undefined4 *)PTR_HOOK_0099f7c0 = 0x3fffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_006efdf4;
  }
  else {
    ClearExclusiveLocal();
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
            (PTR_HOOK_0099f7c0);
LAB_006efdf4:
  lVar1 = *(long *)(puVar5 + 8);
  puVar2 = *(undefined **)(puVar5 + 0x10);
  *(undefined8 *)(puVar5 + 8) = 0;
  do {
    iVar6 = *(int *)puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *(int *)puVar5 = iVar6 + -0x3fffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (PTR_HOOK_0099f7c0);
  }
  if (lVar1 == 0) {
    lVar1 = 1;
    puVar2 = &UNK_00977d30;
  }
  auVar7._8_8_ = puVar2;
  auVar7._0_8_ = lVar1;
  return auVar7;
}


// ===== 006efe8c  FUN_006efe8c =====

long FUN_006efe8c(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return param_1;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = __rustc::__rust_alloc(param_2,param_1);
  if (lVar1 != 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(param_1,param_2);
}


// ===== 006efee0  std::io::stdio::set_output_capture =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::io::stdio::set_output_capture */

undefined8 __rustcall std::io::stdio::set_output_capture(void)

{
  undefined1 auVar1 [16];
  undefined1 uStack_11;
  
  auVar1 = try_set_output_capture();
  if (auVar1._0_8_ != 1) {
    return auVar1._8_8_;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0045b7d8,0x46,&uStack_11,&DAT_009773a8,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00977dc0);
}


// ===== 006eff2c  std::io::stdio::try_set_output_capture =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::io::stdio::try_set_output_capture */

undefined1  [16] __rustcall std::io::stdio::try_set_output_capture(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *local_28;
  
  uVar6 = DAT_009a63b8;
  if ((param_1 == (long *)0x0) && (DAT_009a6ee0 == '\0')) {
    return ZEXT816(0);
  }
  DAT_009a6ee0 = 1;
  local_28 = param_1;
  if (DAT_009a63b8 == 0) {
                    /* try { // try from 006effb8 to 006effe7 has its CatchHandler @ 006f002c */
    auVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(&DAT_009a63b8);
    param_2 = auVar9._8_8_;
    uVar6 = auVar9._0_8_;
    puVar5 = (undefined1 *)pthread_getspecific(auVar9._0_4_);
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)DAT_009a63b8);
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar5;
  if (puVar5 < &DAT_00000002) {
    auVar9 = FUN_006c1384(uVar6 & 0xffffffff,puVar5,0);
  }
  uVar7 = auVar9._8_8_;
  puVar4 = auVar9._0_8_;
  if (puVar4 == (ulong *)0x0) {
    if (param_1 != (long *)0x0) {
      do {
        lVar8 = *param_1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>::
        drop_slow(&local_28);
        uVar7 = extraout_x1;
      }
    }
    auVar10._8_8_ = uVar7;
    auVar10._0_8_ = 1;
    return auVar10;
  }
  uVar6 = *puVar4;
  *puVar4 = (ulong)param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  return auVar3 << 0x40;
}


// ===== 006f005c  std::io::stdio::attempt_print_to_stderr =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::io::stdio::attempt_print_to_stderr */

void __rustcall std::io::stdio::attempt_print_to_stderr(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *local_38;
  undefined **local_30;
  long local_28;
  
  uVar1 = FUN_006f00e0();
  if ((uVar1 & 1) == 0) {
    local_30 = &local_38;
    local_38 = PTR_INSTANCE_0099f7c8;
    uVar1 = <&std::io::stdio::Stderr_as_std::io::Write>::write_fmt(&local_30,param_1,param_2);
    if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
      local_28 = uVar1 - 1;
      local_30 = (undefined **)CONCAT71(local_30._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  return;
}


// ===== 006f00e0  FUN_006f00e0 =====

undefined8 FUN_006f00e0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *local_60;
  long local_58;
  
  uVar8 = DAT_009a63b8;
  if (DAT_009a6ee0 == '\0') {
    return 0;
  }
  if (DAT_009a63b8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a63b8);
    plVar7 = (long *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000002 <= plVar7) goto joined_r0x006f0250;
  }
  else {
    plVar7 = (long *)pthread_getspecific((pthread_key_t)DAT_009a63b8);
    if (&DAT_00000002 <= plVar7) goto joined_r0x006f0250;
  }
  plVar7 = (long *)FUN_006c1384(uVar8 & 0xffffffff,plVar7,0);
joined_r0x006f0250:
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    *plVar7 = 0;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x10);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (lVar9 + 0x10);
          uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
          puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
          goto joined_r0x006f02cc;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006f02cc:
      PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar5;
      if ((uVar8 & 0x7fffffffffffffff) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = std::panicking::panic_count::is_zero_slow_path();
        uVar6 = uVar6 ^ 1;
      }
                    /* try { // try from 006f017c to 006f01bf has its CatchHandler @ 006f02e4 */
      uVar8 = FUN_0070d6a8(lVar9 + 0x18,param_1,param_2);
      if (((uVar8 != 0) && (1 < (uVar8 & 3) - 2)) && ((uVar8 & 3) != 0)) {
        local_58 = uVar8 - 1;
        local_60 = (long *)CONCAT71(local_60._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
      }
                    /* try { // try from 006f029c to 006f02d3 has its CatchHandler @ 006f02dc */
      if ((((uVar6 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
        *(undefined1 *)(lVar9 + 0x14) = 1;
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
        syscall(0x62,lVar9 + 0x10,0x81,1);
        local_60 = (long *)*plVar7;
        *plVar7 = lVar9;
      }
      else {
        local_60 = (long *)*plVar7;
        *plVar7 = lVar9;
      }
      if (local_60 != (long *)0x0) {
        do {
          lVar9 = *local_60;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(local_60,0x10);
          if (bVar4) {
            *local_60 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>
          ::drop_slow(&local_60);
        }
      }
      return 1;
    }
  }
  return 0;
}


// ===== 006f0320  std::io::stdio::stdin =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::io::stdio::stdin */

undefined * __rustcall std::io::stdio::stdin(void)

{
  if ((int)DAT_009a6dd0 == 0) {
    return &DAT_009a6da0;
  }
  FUN_006bdc28();
  return &DAT_009a6da0;
}


// ===== 006f0358  std::io::stdio::_print =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::io::stdio::_print */

void __rustcall std::io::stdio::_print(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  long local_48;
  undefined8 **local_40;
  code *local_38;
  long *local_30;
  undefined *puStack_28;
  
  local_60 = &DAT_0045b81e;
  uStack_58 = 6;
  uVar1 = FUN_006f00e0();
  if ((uVar1 & 1) == 0) {
    if ((int)DAT_009a6450 != 0) {
      FUN_006bdb74();
    }
    local_50 = &DAT_009a6418;
    local_40 = &local_50;
    local_48 = <&std::io::stdio::Stdout_as_std::io::Write>::write_fmt(&local_40,param_1,param_2);
    if (local_48 != 0) {
      local_30 = &local_48;
      local_38 = FUN_006ff764;
      puStack_28 = PTR_fmt_0099f710;
                    /* try { // try from 006f03fc to 006f0413 has its CatchHandler @ 006f0418 */
      local_40 = (undefined8 **)&local_60;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0036a4b2,&local_40,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977030);
    }
  }
  return;
}


// ===== 006f0430  std::io::stdio::stdout =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::io::stdio::stdout */

undefined8 * __rustcall std::io::stdio::stdout(void)

{
  if ((int)DAT_009a6450 == 0) {
    return &DAT_009a6418;
  }
  FUN_006bdb74();
  return &DAT_009a6418;
}


// ===== 006f0468  std::io::stdio::_eprint =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::io::stdio::_eprint */

void __rustcall std::io::stdio::_eprint(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  long local_48;
  undefined **local_40;
  code *local_38;
  long *local_30;
  undefined *puStack_28;
  
  local_60 = &DAT_0045b824;
  uStack_58 = 6;
  uVar1 = FUN_006f00e0();
  if ((uVar1 & 1) == 0) {
    local_40 = &local_50;
    local_50 = PTR_INSTANCE_0099f7c8;
    local_48 = <&std::io::stdio::Stderr_as_std::io::Write>::write_fmt(&local_40,param_1,param_2);
    if (local_48 != 0) {
      local_30 = &local_48;
      local_38 = FUN_006ff764;
      puStack_28 = PTR_fmt_0099f710;
                    /* try { // try from 006f04f4 to 006f050b has its CatchHandler @ 006f0510 */
      local_40 = &local_60;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0036a4b2,&local_40,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977030);
    }
  }
  return;
}


// ===== 006f0528  std::net::hostname::hostname =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::net::hostname::hostname */

void __rustcall std::net::hostname::hostname(ulong *param_1)

{
  int iVar1;
  long lVar2;
  char *__name;
  int *piVar3;
  size_t sVar4;
  size_t __len;
  ulong uVar5;
  size_t sVar6;
  char *pcVar7;
  uint local_58 [2];
  char *local_50;
  
  lVar2 = sysconf(0x6f);
  __len = 0x100;
  if (lVar2 != -1) {
    __len = lVar2 + 1;
  }
  if (-1 < (long)__len) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __name = (char *)__rustc::__rust_alloc(__len,1);
    if (__name != (char *)0x0) {
      iVar1 = gethostname(__name,__len);
      if (iVar1 == 0) goto LAB_006f05a0;
      do {
        piVar3 = (int *)__errno();
        iVar1 = *piVar3;
        sVar6 = __len;
        pcVar7 = __name;
        if ((iVar1 != 0x24) && (iVar1 != 0x16)) {
          if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f06a8 to 006f06b3 has its CatchHandler @ 006f06b8 */
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
          }
          uVar5 = (long)iVar1 << 0x20 | 2;
LAB_006f0650:
          *param_1 = 0xffffffffffffffff;
          param_1[1] = uVar5;
          __rustc::__rust_dealloc(pcVar7,sVar6,1);
          return;
        }
        while( true ) {
          __len = sVar6 * 2;
          if (__len < 9) {
            __len = 8;
          }
          FUN_006df348(local_58,sVar6,pcVar7,__len,1,1);
          __name = local_50;
          if ((local_58[0] & 1) != 0) {
            uVar5 = 0x2600000003;
            goto LAB_006f0650;
          }
          iVar1 = gethostname(local_50,__len);
          if (iVar1 != 0) break;
LAB_006f05a0:
          sVar4 = strnlen(__name,__len);
          sVar6 = __len;
          pcVar7 = __name;
          if (sVar4 < __len) {
            *param_1 = __len;
            param_1[1] = (ulong)__name;
            param_1[2] = sVar4;
            return;
          }
        }
      } while( true );
    }
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0x2600000003;
  return;
}


// ===== 006f06d4  std::sys::fs::remove_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::remove_dir */

undefined ** __rustcall std::sys::fs::remove_dir(void *param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  
  if (0x17f < param_2) {
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,1,FUN_0070ed04);
    return ppuVar3;
  }
  memcpy(auStack_1c8,param_1,param_2);
  auStack_1c8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_2 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = rmdir(local_40);
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


// ===== 006f07e0  std::sys::fs::remove_file =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::remove_file */

undefined ** __rustcall std::sys::fs::remove_file(void *param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  
  if (0x17f < param_2) {
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,1,FUN_0070ed88);
    return ppuVar3;
  }
  memcpy(auStack_1c8,param_1,param_2);
  auStack_1c8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_2 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = unlink(local_40);
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


// ===== 006f08ec  std::sys::fs::canonicalize =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::canonicalize */

void __rustcall std::sys::fs::canonicalize(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined1 auStack_1c8 [384];
  long local_48;
  undefined8 local_40;
  
  if (0x17f < param_3) {
    FUN_006c9404(param_1,param_2,param_3,FUN_0070eb54);
    return;
  }
  memcpy(auStack_1c8,param_2,param_3);
  auStack_1c8[param_3] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (&local_48,auStack_1c8,param_3 + 1);
  if (local_48 == 1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = &PTR_DAT_00977090;
    return;
  }
  FUN_006f4bc0(param_1,local_40);
  return;
}


// ===== 006f09ac  std::sys::fs::remove_dir_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::remove_dir_all */

undefined ** __rustcall std::sys::fs::remove_dir_all(void *param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  undefined8 local_40;
  
  if (0x17f < param_2) {
    ppuVar1 = (undefined **)FUN_006c9920(param_1,param_2,1,FUN_0070ee14);
    return ppuVar1;
  }
  memcpy(auStack_1c8,param_1,param_2);
  auStack_1c8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_2 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  ppuVar1 = (undefined **)FUN_006f6f60(local_40);
  return ppuVar1;
}


// ===== 006f0a5c  std::sys::fs::set_permissions =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::set_permissions */

undefined ** __rustcall std::sys::fs::set_permissions(void *param_1,ulong param_2,__mode_t param_3)

{
  undefined *puVar1;
  __mode_t __mode;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  __mode_t local_1e4;
  __mode_t *local_1e0;
  undefined1 auStack_1d8 [384];
  uint local_58 [2];
  char *local_50;
  
  local_1e0 = &local_1e4;
  local_1e4 = param_3;
  if (0x17f < param_2) {
    ppuVar6 = (undefined **)FUN_006c9920(param_1,param_2,&local_1e0,FUN_006d122c);
    return ppuVar6;
  }
  memcpy(auStack_1d8,param_1,param_2);
  auStack_1d8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_58,auStack_1d8,param_2 + 1);
  __mode = local_1e4;
  puVar1 = PTR_PTR_0099f738;
  if ((local_58[0] & 1) == 0) {
    do {
      iVar2 = chmod(local_50,__mode);
      if (iVar2 != -1) {
        return (undefined **)0x0;
      }
      piVar3 = (int *)__errno();
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
                    /* try { // try from 006f0b1c to 006f0b2b has its CatchHandler @ 006f0bac */
      lVar4 = core::io::error::os_functions::get_os_functions();
      uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
    } while ((uVar5 & 1) != 0);
    return (undefined **)((long)iVar2 << 0x20 | 2);
  }
  return &PTR_DAT_00977090;
}


// ===== 006f0bcc  std::sys::fs::symlink_metadata =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::symlink_metadata */

void __rustcall std::sys::fs::symlink_metadata(undefined8 *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_248 [384];
  long local_c8;
  char *local_c0;
  __dev_t local_b0;
  __ino_t _Stack_a8;
  __nlink_t _Stack_a0;
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
  
  if (0x17f < param_3) {
    FUN_006c958c(param_1,param_2,param_3,FUN_0070ec30);
    return;
  }
  memcpy(auStack_248,param_2,param_3);
  auStack_248[param_3] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (&local_c8,auStack_248,param_3 + 1);
  if (local_c8 == 1) {
    *param_1 = 1;
    param_1[1] = &PTR_DAT_00977090;
    return;
  }
  _Stack_a8 = 0;
  local_b0 = 0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  _Stack_a0 = 0;
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
  iVar1 = lstat(local_c0,(stat *)&local_b0);
  if (iVar1 != -1) {
    param_1[10] = _Stack_68;
    param_1[9] = local_70;
    param_1[0xc] = _Stack_58;
    param_1[0xb] = lStack_60;
    param_1[0xe] = _Stack_48;
    param_1[0xd] = local_50;
    param_1[0x10] = lStack_38;
    param_1[0xf] = lStack_40;
    param_1[2] = _Stack_a8;
    param_1[1] = local_b0;
    param_1[4] = uStack_98;
    param_1[3] = _Stack_a0;
    param_1[6] = _Stack_88;
    param_1[5] = local_90;
    param_1[8] = _Stack_78;
    param_1[7] = _Stack_80;
    *param_1 = 0;
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


// ===== 006f0d38  std::sys::fs::set_times_nofollow =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::set_times_nofollow */

undefined ** __rustcall
std::sys::fs::set_times_nofollow(void *param_1,ulong param_2,__time_t *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  __time_t *local_1f0;
  undefined1 auStack_1e8 [384];
  uint local_68 [2];
  char *local_60;
  timespec local_50;
  __time_t local_40;
  ulong uStack_38;
  
  local_1f0 = param_3;
  if (0x17f < param_2) {
    ppuVar4 = (undefined **)FUN_006c9920(param_1,param_2,&local_1f0,FUN_006d12fc);
    return ppuVar4;
  }
  memcpy(auStack_1e8,param_1,param_2);
  auStack_1e8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_68,auStack_1e8,param_2 + 1);
  if ((local_68[0] & 1) == 0) {
    uVar1 = 0x3ffffffe;
    local_50.tv_sec = 0;
    if (*(uint *)(param_3 + 1) != 0xffffffff) {
      uVar1 = *(uint *)(param_3 + 1);
      local_50.tv_sec = *param_3;
    }
    local_50.tv_nsec = (long)uVar1;
    uVar1 = 0x3ffffffe;
    local_40 = 0;
    if (*(uint *)(param_3 + 3) != 0xffffffff) {
      uVar1 = *(uint *)(param_3 + 3);
      local_40 = param_3[2];
    }
    uStack_38 = (ulong)uVar1;
    if (PTR_utimensat_0099f768 == (undefined *)0x0) {
      return &PTR_DAT_00977b38;
    }
    iVar2 = utimensat(-100,local_60,&local_50,0x100);
    if (iVar2 == -1) {
      piVar3 = (int *)__errno();
      iVar2 = *piVar3;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      return (undefined **)((long)iVar2 << 0x20 | 2);
    }
    return (undefined **)0x0;
  }
  return &PTR_DAT_00977090;
}


// ===== 006f0eb8  std::sys::fs::set_permissions_nofollow =====

/* WARNING: Removing unreachable block (ram,0x006f0f4c) */
/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::set_permissions_nofollow */

undefined ** __rustcall
std::sys::fs::set_permissions_nofollow(void *param_1,ulong param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e4;
  int local_1e0;
  int local_1dc;
  undefined **local_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c8 [384];
  long local_48;
  undefined8 local_40;
  
  local_1d0 = (undefined1 *)&local_1f0;
  local_1e4 = 0;
  local_1e8 = 0;
  local_1f0 = DAT_00373258;
  if (param_2 < 0x180) {
    local_1d0 = (undefined1 *)&local_1f0;
    memcpy(local_1c8,param_1,param_2);
    local_1c8[param_2] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_48,local_1c8,param_2 + 1);
    if (local_48 == 1) {
      return &PTR_DAT_00977090;
    }
    FUN_006ea8b8(&local_1e0,local_40,&local_1f0);
  }
  else {
    FUN_006c94c0(&local_1e0,param_1,param_2,&local_1d0,FUN_006d0e6c);
  }
  if (local_1e0 == 1) {
    return local_1d8;
  }
                    /* try { // try from 006f0fb0 to 006f0fbb has its CatchHandler @ 006f0fe0 */
  ppuVar1 = (undefined **)<std::fs::[2]::std::fs::File>::set_permissions(local_1c8,param_3);
  close(local_1dc);
  return ppuVar1;
}


// ===== 006f0ff4  std::sys::fs::copy =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::copy */

undefined1  [16] __rustcall
std::sys::fs::copy(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  byte bVar1;
  int __fd;
  undefined *puVar2;
  uint uVar3;
  __nlink_t _Var4;
  __off_t _Var5;
  int iVar6;
  undefined **ppuVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined **ppuVar12;
  stat *__buf;
  ulong __n;
  undefined1 auVar13 [16];
  long local_20c0;
  int local_20b4;
  long local_20b0;
  undefined4 local_20a8;
  undefined2 local_20a4;
  int local_20a0;
  int local_209c;
  undefined **local_2098;
  long *local_2090;
  undefined **local_2088;
  undefined **local_2080;
  stat local_2070 [28];
  undefined8 local_1060;
  
  local_1060 = 0;
  local_2070[0].st_nlink = 0;
  local_20a8 = 1;
  local_2090 = &local_20b0;
  local_20a4 = 0;
  local_20b0 = _s__00373250;
  if (param_2 < 0x180) {
    memcpy(local_2070,param_1,param_2);
    *(undefined1 *)((long)local_2070[0].__unused + (param_2 - 0x78)) = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_2088,local_2070,param_2 + 1);
    if (local_2088 != (undefined **)0x1) {
      FUN_006ea8b8(&local_20a0,local_2080,&local_20b0);
      __fd = local_209c;
      ppuVar7 = local_2098;
      goto joined_r0x006f14f4;
    }
    local_2098 = &PTR_DAT_00977090;
    ppuVar7 = local_2098;
  }
  else {
    FUN_006c94c0(&local_20a0,param_1,param_2,&local_2090,FUN_006d0e6c);
    __fd = local_209c;
    ppuVar7 = local_2098;
joined_r0x006f14f4:
    if (local_20a0 != 1) {
      local_2070[0].st_atim.tv_sec = 0;
      local_2070[0].st_blocks = 0;
      local_2070[0].st_mtim.tv_sec = 0;
      local_2070[0].st_atim.tv_nsec = 0;
      local_2070[0].st_ctim.tv_sec = 0;
      local_2070[0].st_mtim.tv_nsec = 0;
      local_2070[0].__unused[0] = 0;
      local_2070[0].st_ctim.tv_nsec = 0;
      local_2070[0].st_ino = 0;
      local_2070[0].st_dev = 0;
      local_2070[0].st_mode = 0;
      local_2070[0].st_uid = 0;
      local_2070[0].st_nlink = 0;
      local_2070[0].st_rdev = 0;
      local_2070[0].st_gid = 0;
      local_2070[0].__pad0 = 0;
      local_2070[0].st_blksize = 0;
      local_2070[0].st_size = 0;
      local_209c = __fd;
      local_2098 = ppuVar7;
      iVar6 = fstat(__fd,local_2070);
      _Var5 = local_2070[0].st_size;
      _Var4 = local_2070[0].st_nlink;
      if (iVar6 == -1) {
        piVar9 = (int *)__errno();
        iVar6 = *piVar9;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f1514 to 006f151f has its CatchHandler @ 006f1554 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        ppuVar7 = (undefined **)((long)iVar6 << 0x20 | 2);
      }
      else if (((uint)local_2070[0].st_nlink & 0xf000) == 0x8000) {
        local_20a4 = 1;
        local_20a8 = 0x1000100;
        local_2090 = &local_20b0;
        local_20b0 = local_2070[0].st_nlink << 0x20;
        if (param_4 < 0x180) {
          memcpy(local_2070,param_3,param_4);
          *(undefined1 *)((long)local_2070[0].__unused + (param_4 - 0x78)) = 0;
                    /* try { // try from 006f1154 to 006f11d3 has its CatchHandler @ 006f1574 */
          <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_2088,local_2070,param_4 + 1);
          if (local_2088 == (undefined **)0x1) {
            local_2098 = &PTR_DAT_00977090;
            local_20a0 = 1;
          }
          else {
            FUN_006ea8b8(&local_20a0,local_2080,&local_20b0);
          }
        }
        else {
          FUN_006c94c0(&local_20a0,param_3,param_4,&local_2090,FUN_006d0e6c);
        }
        ppuVar7 = local_2098;
        if (local_20a0 != 1) {
          local_20b4 = local_209c;
          local_2070[0].st_atim.tv_sec = 0;
          local_2070[0].st_blocks = 0;
          local_2070[0].st_mtim.tv_sec = 0;
          local_2070[0].st_atim.tv_nsec = 0;
          local_2070[0].st_ctim.tv_sec = 0;
          local_2070[0].st_mtim.tv_nsec = 0;
          local_2070[0].__unused[0] = 0;
          local_2070[0].st_ctim.tv_nsec = 0;
          local_2070[0].st_ino = 0;
          local_2070[0].st_dev = 0;
          local_2070[0].st_mode = 0;
          local_2070[0].st_uid = 0;
          local_2070[0].st_nlink = 0;
          local_2070[0].st_rdev = 0;
          local_2070[0].st_gid = 0;
          local_2070[0].__pad0 = 0;
          local_2070[0].st_blksize = 0;
          local_2070[0].st_size = 0;
          iVar6 = fstat(local_209c,local_2070);
          if (iVar6 != -1) {
            uVar3 = (uint)local_2070[0].st_nlink;
            if (((uint)local_2070[0].st_nlink & 0xf000) == 0x8000) {
                    /* try { // try from 006f1228 to 006f1233 has its CatchHandler @ 006f1570 */
              ppuVar7 = (undefined **)
                        <std::fs::[2]::std::fs::File>::set_permissions
                                  (&local_20b4,_Var4 & 0xffffffff);
              if (ppuVar7 != (undefined **)0x0) goto LAB_006f1298;
              if (_Var5 == 0) {
                ppuVar12 = (undefined **)0x0;
                goto LAB_006f1340;
              }
                    /* try { // try from 006f1240 to 006f1307 has its CatchHandler @ 006f15b4 */
              io::kernel_copy::linux::copy_regular_files
                        (local_2070,__fd,local_209c,0xffffffffffffffff);
              if (local_2070[0].st_dev != 0) {
                ppuVar12 = (undefined **)local_2070[0].st_ino;
                if (local_2070[0].st_dev != 1) goto LAB_006f12dc;
                goto LAB_006f1318;
              }
              bVar1 = 0;
              ppuVar7 = (undefined **)local_2070[0].st_ino;
            }
            else {
              ppuVar12 = (undefined **)0x0;
              if (_Var5 == 0) goto LAB_006f1340;
LAB_006f12dc:
              if (((uVar3 & 0xf000) == 0x1000) || ((uVar3 & 0xf000) == 0xc000)) {
LAB_006f1340:
                puVar2 = PTR_PTR_0099f738;
                local_20c0 = 0;
                uVar8 = ::read(__fd,local_2070,0x2000);
joined_r0x006f1374:
                if (uVar8 == 0xffffffffffffffff) {
                  piVar9 = (int *)__errno();
                  do {
                    iVar6 = *piVar9;
                    if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
                    /* try { // try from 006f13c8 to 006f13cf has its CatchHandler @ 006f1568 */
                      core::io::error::os_functions::set_functions::set_functions_inner
                                (&PTR_FUN_00977078);
                    }
                    ppuVar7 = (undefined **)((long)iVar6 << 0x20 | 2);
                    local_2088 = ppuVar7;
                    /* try { // try from 006f1398 to 006f13a7 has its CatchHandler @ 006f1588 */
                    lVar10 = core::io::error::os_functions::get_os_functions();
                    iVar6 = (**(code **)(lVar10 + 0x10))(iVar6);
                    if (iVar6 == 0) goto LAB_006f148c;
                    uVar8 = ::read(__fd,local_2070,0x2000);
                  } while (uVar8 == 0xffffffffffffffff);
                }
                if (uVar8 == 0) {
                  uVar8 = 0;
                  ppuVar7 = (undefined **)((long)ppuVar12 + local_20c0);
                }
                else {
                  __buf = local_2070;
                  __n = uVar8;
LAB_006f13ec:
                  uVar11 = ::write(local_209c,__buf,__n);
                  if (uVar11 == 0xffffffffffffffff) {
                    piVar9 = (int *)__errno();
                    iVar6 = *piVar9;
                    if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
                    /* try { // try from 006f1450 to 006f1457 has its CatchHandler @ 006f156c */
                      core::io::error::os_functions::set_functions::set_functions_inner
                                (&PTR_FUN_00977078);
                    }
                    ppuVar7 = (undefined **)((long)iVar6 << 0x20 | 2);
                    local_2088 = (undefined **)0x1;
                    local_2080 = ppuVar7;
                    /* try { // try from 006f1438 to 006f1447 has its CatchHandler @ 006f159c */
                    lVar10 = core::io::error::os_functions::get_os_functions();
                    iVar6 = (**(code **)(lVar10 + 0x10))(iVar6);
                    if (iVar6 == 0) goto LAB_006f148c;
LAB_006f13e8:
                    if (__n == 0) goto LAB_006f145c;
                    goto LAB_006f13ec;
                  }
                  if (uVar11 != 0) {
                    if (__n < uVar11) {
                    /* try { // try from 006f14fc to 006f150f has its CatchHandler @ 006f15b4 */
                    /* WARNING: Subroutine does not return */
                      core::slice::index::slice_index_fail
                                (uVar11,__n,__n,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ef0);
                    }
                    __buf = (stat *)((long)__buf->__unused + (uVar11 - 0x78));
                    __n = __n - uVar11;
                    goto LAB_006f13e8;
                  }
                  ppuVar7 = &PTR_DAT_00977df0;
LAB_006f148c:
                  uVar8 = 1;
                }
                goto LAB_006f14a4;
              }
              io::kernel_copy::linux::sendfile_splice
                        (local_2070,0,__fd,local_209c,0xffffffffffffffff);
              if (local_2070[0].st_dev == 0) {
                ppuVar7 = (undefined **)(local_2070[0].st_ino + (long)ppuVar12);
                bVar1 = 0;
              }
              else {
                if (local_2070[0].st_dev != 1) {
                  ppuVar12 = (undefined **)(local_2070[0].st_ino + (long)ppuVar12);
                  goto LAB_006f1340;
                }
LAB_006f1318:
                bVar1 = 1;
                ppuVar7 = (undefined **)local_2070[0].st_nlink;
              }
            }
            uVar8 = (ulong)bVar1;
LAB_006f14a4:
            close(local_209c);
            close(__fd);
            goto LAB_006f12ac;
          }
          piVar9 = (int *)__errno();
          iVar6 = *piVar9;
          if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f1544 to 006f154f has its CatchHandler @ 006f1570 */
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
          }
          ppuVar7 = (undefined **)((long)iVar6 << 0x20 | 2);
LAB_006f1298:
          close(local_209c);
        }
      }
      else {
        ppuVar7 = &PTR_DAT_00977fa0;
      }
      close(__fd);
    }
  }
  uVar8 = 1;
LAB_006f12ac:
  auVar13._8_8_ = ppuVar7;
  auVar13._0_8_ = uVar8;
  return auVar13;
LAB_006f145c:
  local_20c0 = uVar8 + local_20c0;
  uVar8 = ::read(__fd,local_2070,0x2000);
  goto joined_r0x006f1374;
}


// ===== 006f15d0  std::sys::fs::exists =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::exists */

void __rustcall std::sys::fs::exists(undefined2 *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 local_c8;
  undefined7 uStack_c7;
  ulong local_c0 [16];
  
  metadata(&local_c8);
  if (CONCAT71(uStack_c7,local_c8) != 1) {
    *param_1 = 0x100;
    return;
  }
  uVar3 = local_c0[0] & 3;
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      if (*(char *)(local_c0[0] + 0x10) != '\0') goto LAB_006f1678;
      goto LAB_006f16a8;
    }
    uVar2 = (ulong)*(byte *)(local_c0[0] + 0x1f);
  }
  else if (uVar3 == 2) {
                    /* try { // try from 006f1650 to 006f1667 has its CatchHandler @ 006f16f0 */
    lVar1 = core::io::error::os_functions::get_os_functions();
    uVar2 = (**(code **)(lVar1 + 8))(local_c0[0] >> 0x20);
  }
  else {
    uVar2 = local_c0[0] >> 0x20;
  }
  if ((uVar2 & 0xff) != 0) {
LAB_006f1678:
    *(ulong *)(param_1 + 4) = local_c0[0];
    *(undefined1 *)param_1 = 1;
    return;
  }
LAB_006f16a8:
  *param_1 = 0;
  if ((1 < uVar3 - 2) && (uVar3 != 0)) {
    local_c0[0] = local_c0[0] - 1;
    local_c8 = 3;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_c0);
    return;
  }
  return;
}


// ===== 006f1708  std::sys::fs::rename =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::rename */

undefined ** __rustcall
std::sys::fs::rename(char *param_1,ulong param_2,char *param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  char **ppcVar4;
  code *pcVar5;
  char *local_390;
  ulong uStack_388;
  undefined1 auStack_380 [384];
  uint local_200 [2];
  char *local_1f8;
  undefined8 uStack_1f0;
  char *local_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [384];
  uint local_58 [2];
  char *local_50;
  
  ppcVar4 = &local_390;
  local_390 = param_3;
  uStack_388 = param_4;
  if (0x17f < param_2) {
    pcVar5 = FUN_006d13ec;
LAB_006f1868:
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,ppcVar4,pcVar5);
    return ppuVar3;
  }
  memcpy(auStack_380,param_1,param_2);
  auStack_380[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_200,auStack_380,param_2 + 1);
  if ((local_200[0] & 1) == 0) {
    local_1e8 = local_1f8;
    uStack_1e0 = uStack_1f0;
    if (0x17f < param_4) {
      pcVar5 = FUN_006cfd2c;
      ppcVar4 = &local_1e8;
      param_1 = param_3;
      param_2 = param_4;
      goto LAB_006f1868;
    }
    memcpy(auStack_1d8,param_3,param_4);
    auStack_1d8[param_4] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (local_58,auStack_1d8,param_4 + 1);
    if ((local_58[0] & 1) == 0) {
      iVar1 = ::rename(local_1f8,local_50);
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
  }
  return &PTR_DAT_00977090;
}


// ===== 006f1894  std::sys::fs::symlink =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::symlink */

undefined ** __rustcall
std::sys::fs::symlink(char *param_1,ulong param_2,char *param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  char **ppcVar4;
  code *pcVar5;
  char *local_390;
  ulong uStack_388;
  undefined1 auStack_380 [384];
  uint local_200 [2];
  char *local_1f8;
  undefined8 uStack_1f0;
  char *local_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [384];
  uint local_58 [2];
  char *local_50;
  
  ppcVar4 = &local_390;
  local_390 = param_3;
  uStack_388 = param_4;
  if (0x17f < param_2) {
    pcVar5 = FUN_006d1504;
LAB_006f19f4:
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,ppcVar4,pcVar5);
    return ppuVar3;
  }
  memcpy(auStack_380,param_1,param_2);
  auStack_380[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_200,auStack_380,param_2 + 1);
  if ((local_200[0] & 1) == 0) {
    local_1e8 = local_1f8;
    uStack_1e0 = uStack_1f0;
    if (0x17f < param_4) {
      pcVar5 = FUN_006cfdb0;
      ppcVar4 = &local_1e8;
      param_1 = param_3;
      param_2 = param_4;
      goto LAB_006f19f4;
    }
    memcpy(auStack_1d8,param_3,param_4);
    auStack_1d8[param_4] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (local_58,auStack_1d8,param_4 + 1);
    if ((local_58[0] & 1) == 0) {
      iVar1 = ::symlink(local_1f8,local_50);
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
  }
  return &PTR_DAT_00977090;
}


// ===== 006f1a20  std::sys::fs::metadata =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::metadata */

void __rustcall std::sys::fs::metadata(undefined8 *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_248 [384];
  long local_c8;
  char *local_c0;
  __dev_t local_b0;
  __ino_t _Stack_a8;
  __nlink_t _Stack_a0;
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
  
  if (0x17f < param_3) {
    FUN_006c958c(param_1,param_2,param_3,FUN_0070eb5c);
    return;
  }
  memcpy(auStack_248,param_2,param_3);
  auStack_248[param_3] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (&local_c8,auStack_248,param_3 + 1);
  if (local_c8 == 1) {
    *param_1 = 1;
    param_1[1] = &PTR_DAT_00977090;
    return;
  }
  _Stack_a8 = 0;
  local_b0 = 0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  _Stack_a0 = 0;
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
  iVar1 = stat(local_c0,(stat *)&local_b0);
  if (iVar1 != -1) {
    param_1[10] = _Stack_68;
    param_1[9] = local_70;
    param_1[0xc] = _Stack_58;
    param_1[0xb] = lStack_60;
    param_1[0xe] = _Stack_48;
    param_1[0xd] = local_50;
    param_1[0x10] = lStack_38;
    param_1[0xf] = lStack_40;
    param_1[2] = _Stack_a8;
    param_1[1] = local_b0;
    param_1[4] = uStack_98;
    param_1[3] = _Stack_a0;
    param_1[6] = _Stack_88;
    param_1[5] = local_90;
    param_1[8] = _Stack_78;
    param_1[7] = _Stack_80;
    *param_1 = 0;
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


// ===== 006f1b8c  std::sys::fs::read_dir =====

/* WARNING: Removing unreachable block (ram,0x006f1bf8) */
/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::read_dir */

void __rustcall std::sys::fs::read_dir(undefined8 *param_1,void *param_2,undefined *param_3)

{
  int iVar1;
  undefined *__dest;
  int *piVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined *local_1c0;
  DIR *pDStack_1b8;
  uint local_58 [2];
  char *local_50;
  
  if (param_3 < (undefined *)0x180) {
    memcpy(&local_1e0,param_2,(size_t)param_3);
    *(undefined1 *)((long)&local_1e0 + (long)param_3) = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (local_58,&local_1e0,param_3 + 1);
    if ((local_58[0] & 1) == 0) {
      ppuVar3 = (undefined **)opendir(local_50);
LAB_006f1c2c:
      if ((DIR *)ppuVar3 == (DIR *)0x0) {
        piVar2 = (int *)__errno();
        iVar1 = *piVar2;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        uVar4 = 2;
        ppuVar3 = (undefined **)((long)iVar1 << 0x20 | 2);
      }
      else {
        if (param_3 == (undefined *)0x0) {
          __dest = (undefined *)0x1;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (undefined *)__rustc::__rust_alloc(param_3,1);
          if (__dest == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
            ::alloc::raw_vec::handle_error(1,param_3);
          }
          memcpy(__dest,param_2,(size_t)param_3);
        }
        puStack_1d8 = (undefined *)0x1;
        local_1e0 = (undefined *)0x1;
        local_1d0 = param_3;
        puStack_1c8 = __dest;
        local_1c0 = param_3;
        pDStack_1b8 = (DIR *)ppuVar3;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        ppuVar3 = (undefined **)__rustc::__rust_alloc(0x30,8);
        if ((DIR *)ppuVar3 == (DIR *)0x0) {
                    /* try { // try from 006f1cf4 to 006f1cff has its CatchHandler @ 006f1d20 */
                    /* WARNING: Subroutine does not return */
          ::alloc::alloc::handle_alloc_error(8,0x30);
        }
        uVar4 = 0;
        *(undefined **)((long)ppuVar3 + 8) = puStack_1d8;
        *ppuVar3 = local_1e0;
        *(undefined **)((long)ppuVar3 + 0x18) = puStack_1c8;
        *(undefined **)((long)ppuVar3 + 0x10) = local_1d0;
        *(DIR **)((long)ppuVar3 + 0x28) = pDStack_1b8;
        *(undefined **)((long)ppuVar3 + 0x20) = local_1c0;
      }
      goto LAB_006f1cd4;
    }
    ppuVar3 = &PTR_DAT_00977090;
  }
  else {
    auVar5 = FUN_006c97bc(param_2,param_3);
    ppuVar3 = auVar5._8_8_;
    if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_006f1c2c;
  }
  uVar4 = 2;
LAB_006f1cd4:
  *param_1 = ppuVar3;
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}


// ===== 006f1d38  std::sys::fs::hard_link =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::hard_link */

undefined ** __rustcall
std::sys::fs::hard_link(char *param_1,ulong param_2,char *param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  char **ppcVar4;
  code *pcVar5;
  char *local_390;
  ulong uStack_388;
  undefined1 auStack_380 [384];
  uint local_200 [2];
  char *local_1f8;
  undefined8 uStack_1f0;
  char *local_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [384];
  uint local_58 [2];
  char *local_50;
  
  ppcVar4 = &local_390;
  local_390 = param_3;
  uStack_388 = param_4;
  if (0x17f < param_2) {
    pcVar5 = FUN_006d161c;
LAB_006f1e98:
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,ppcVar4,pcVar5);
    return ppuVar3;
  }
  memcpy(auStack_380,param_1,param_2);
  auStack_380[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_200,auStack_380,param_2 + 1);
  if ((local_200[0] & 1) == 0) {
    local_1e8 = local_1f8;
    uStack_1e0 = uStack_1f0;
    if (0x17f < param_4) {
      pcVar5 = FUN_006cfe34;
      ppcVar4 = &local_1e8;
      param_1 = param_3;
      param_2 = param_4;
      goto LAB_006f1e98;
    }
    memcpy(auStack_1d8,param_3,param_4);
    auStack_1d8[param_4] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (local_58,auStack_1d8,param_4 + 1);
    if ((local_58[0] & 1) == 0) {
      iVar1 = link(local_1f8,local_50);
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
  }
  return &PTR_DAT_00977090;
}


// ===== 006f1ec4  std::sys::fs::read_link =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::read_link */

void __rustcall std::sys::fs::read_link(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined1 auStack_1c8 [384];
  long local_48;
  undefined8 local_40;
  
  if (0x17f < param_3) {
    FUN_006c9404(param_1,param_2,param_3,FUN_0070ee0c);
    return;
  }
  memcpy(auStack_1c8,param_2,param_3);
  auStack_1c8[param_3] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (&local_48,auStack_1c8,param_3 + 1);
  if (local_48 == 1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = &PTR_DAT_00977090;
    return;
  }
  FUN_006f5284(param_1,local_40);
  return;
}


// ===== 006f1f84  std::sys::fs::set_times =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::set_times */

undefined ** __rustcall std::sys::fs::set_times(void *param_1,ulong param_2,__time_t *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  __time_t *local_1f0;
  undefined1 auStack_1e8 [384];
  uint local_68 [2];
  char *local_60;
  timespec local_50;
  __time_t local_40;
  ulong uStack_38;
  
  local_1f0 = param_3;
  if (0x17f < param_2) {
    ppuVar4 = (undefined **)FUN_006c9920(param_1,param_2,&local_1f0,FUN_006d1734);
    return ppuVar4;
  }
  memcpy(auStack_1e8,param_1,param_2);
  auStack_1e8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_68,auStack_1e8,param_2 + 1);
  if ((local_68[0] & 1) == 0) {
    uVar1 = 0x3ffffffe;
    local_50.tv_sec = 0;
    if (*(uint *)(param_3 + 1) != 0xffffffff) {
      uVar1 = *(uint *)(param_3 + 1);
      local_50.tv_sec = *param_3;
    }
    local_50.tv_nsec = (long)uVar1;
    uVar1 = 0x3ffffffe;
    local_40 = 0;
    if (*(uint *)(param_3 + 3) != 0xffffffff) {
      uVar1 = *(uint *)(param_3 + 3);
      local_40 = param_3[2];
    }
    uStack_38 = (ulong)uVar1;
    if (PTR_utimensat_0099f768 == (undefined *)0x0) {
      return &PTR_DAT_00977b38;
    }
    iVar2 = utimensat(-100,local_60,&local_50,0);
    if (iVar2 == -1) {
      piVar3 = (int *)__errno();
      iVar2 = *piVar3;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      return (undefined **)((long)iVar2 << 0x20 | 2);
    }
    return (undefined **)0x0;
  }
  return &PTR_DAT_00977090;
}


// ===== 006f2104  FUN_006f2104 =====

void * FUN_006f2104(int param_1,void *param_2,size_t param_3,ulong param_4,size_t param_5)

{
  int iVar1;
  void *__dest;
  void *pvStack_28;
  
  exit(param_1);
  if ((param_3 < 0x11) && (param_3 <= param_5)) {
    __dest = malloc(param_5);
  }
  else {
    if (param_3 < 9) {
      param_3 = 8;
    }
    pvStack_28 = (void *)0x0;
    iVar1 = posix_memalign(&pvStack_28,param_3,param_5);
    __dest = pvStack_28;
    if (iVar1 != 0) {
      return (void *)0x0;
    }
  }
  if (__dest != (void *)0x0) {
    if (param_4 <= param_5) {
      param_5 = param_4;
    }
    memcpy(__dest,param_2,param_5);
    free(param_2);
    return __dest;
  }
  return (void *)0x0;
}


// ===== 006f2110  std::sys::alloc::realloc_fallback =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::alloc::realloc_fallback */

void * __rustcall
std::sys::alloc::realloc_fallback
          (undefined8 param_1,void *param_2,size_t param_3,ulong param_4,size_t param_5)

{
  int iVar1;
  void *__dest;
  void *local_18;
  
  if ((param_3 < 0x11) && (param_3 <= param_5)) {
    __dest = malloc(param_5);
  }
  else {
    if (param_3 < 9) {
      param_3 = 8;
    }
    local_18 = (void *)0x0;
    iVar1 = posix_memalign(&local_18,param_3,param_5);
    __dest = local_18;
    if (iVar1 != 0) {
      return (void *)0x0;
    }
  }
  if (__dest != (void *)0x0) {
    if (param_4 <= param_5) {
      param_5 = param_4;
    }
    memcpy(__dest,param_2,param_5);
    free(param_2);
    return __dest;
  }
  return (void *)0x0;
}


// ===== 006f21c4  FUN_006f21c4 =====

void FUN_006f21c4(undefined8 *param_1,uint *param_2,ulong param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 local_58;
  char *local_50;
  undefined *local_48;
  undefined1 *puStack_40;
  code *local_38;
  
  if ((*param_2 & 1) == 0) {
    pcVar1 = *(char **)(param_2 + 2);
    lVar3 = *(long *)(param_2 + 4);
    if (((param_3 & 1) != 0) || (lVar3 == 0)) goto LAB_006f21f4;
  }
  else {
    pcVar1 = &DAT_0045b5f7;
    lVar3 = 9;
    if ((param_3 & 1) != 0) goto LAB_006f21f4;
  }
  if ((param_4 != 0) && (*pcVar1 == '/')) {
    lVar2 = <std::path::[16]::std::path::Path>::_strip_prefix
                      (pcVar1,lVar3,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
    if ((lVar2 != 0) && (core::str::converts::from_utf8(&local_50), local_50 != (char *)0x1)) {
      local_60 = local_48;
      local_58 = puStack_40;
      local_50 = "/";
      local_48 = PTR_fmt_0099f5a8;
      local_38 = FUN_006ff764;
      puStack_40 = (undefined1 *)&local_60;
      core::fmt::write(*param_1,param_1[1],&DAT_00365327,&local_50);
      return;
    }
    <core::bstr::ByteStr_as_core::fmt::Display>::fmt(pcVar1,lVar3,param_1);
    return;
  }
LAB_006f21f4:
  <core::bstr::ByteStr_as_core::fmt::Display>::fmt(pcVar1,lVar3,param_1);
  return;
}


// ===== 006f22c8  std::sys::backtrace::lock =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::backtrace::lock */

undefined1  [16] __rustcall std::sys::backtrace::lock(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  do {
    if (DAT_009a6f28 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_009a6f28);
      uVar4 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006f2344;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6f28,0x10);
    if (bVar2) {
      DAT_009a6f28 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar4 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006f2344:
  if ((uVar4 & 0x7fffffffffffffff) == 0) {
    return ZEXT816(0x9a6f28);
  }
  uVar3 = panicking::panic_count::is_zero_slow_path();
  auVar5._8_4_ = uVar3 ^ 1;
  auVar5._0_8_ = &DAT_009a6f28;
  auVar5._12_4_ = 0;
  return auVar5;
}


// ===== 006f236c  std::sync::lazy_lock::panic_poisoned =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sync::lazy_lock::panic_poisoned */

void __rustcall std::sync::lazy_lock::panic_poisoned(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045b8af,0x5d,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977ea0);
}


// ===== 006f238c  std::thread::local::panic_access_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::local::panic_access_error */

void __rustcall std::thread::local::panic_access_error(undefined8 param_1)

{
  undefined1 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_28 = &uStack_11;
  puStack_20 = PTR_fmt_0099f7d0;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0036c7a6,&local_28,param_1);
}


// ===== 006f23bc  FUN_006f23bc =====

long * FUN_006f23bc(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  pthread_key_t pVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_40 [3];
  undefined1 uStack_21;
  
  puVar3 = PTR_CURRENT_0099f758;
  if (param_1 != 0) {
    if (param_1 == 1) {
      FUN_0070e928(&uStack_21,&DAT_0045b93b,0xf3);
      FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
      std::process::abort();
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045b8dd,0xbd,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977eb8);
  }
  if (*(long *)PTR_CURRENT_0099f758 == 0) {
    pVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_0099f758);
    pthread_setspecific(pVar5,(void *)0x1);
  }
  else {
    pthread_setspecific((pthread_key_t)*(long *)PTR_CURRENT_0099f758,(void *)0x1);
  }
  if (DAT_009a6f60 == 0) {
    pVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar6 = pthread_getspecific(pVar5);
  }
  else {
    pvVar6 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
  }
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)FUN_006d2020();
  }
  local_40[0] = 0xffffffffffffffff;
  plVar7 = (long *)<std::thread::thread::std::thread::thread::Thread>::new(pvVar6,local_40);
  lVar8 = DAT_009a6dd8;
  if (DAT_009a6dd8 == 0) {
                    /* try { // try from 006f24cc to 006f24e7 has its CatchHandler @ 006f2508 */
    lVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6dd8);
  }
  pthread_setspecific((pthread_key_t)lVar8,(void *)0x1);
  do {
    lVar8 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar8) {
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
      lVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR_CURRENT_0099f758);
    }
    pthread_setspecific((pthread_key_t)lVar8,plVar7 + 2);
    return plVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x6f2508);
  (*pcVar4)();
}


// ===== 006f2534  std::thread::current::current_or_unnamed =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::current::current_or_unnamed */

void __rustcall std::thread::current::current_or_unnamed(void)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  pthread_key_t pVar4;
  undefined1 *puVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  undefined8 local_28 [3];
  
  if (*(long *)PTR_CURRENT_0099f758 == 0) {
    pVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_0099f758);
    puVar5 = (undefined1 *)pthread_getspecific(pVar4);
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)*(long *)PTR_CURRENT_0099f758);
  }
  if (puVar5 < (undefined1 *)0x3) {
    if (puVar5 == &DAT_00000002) {
      if (DAT_009a6f60 == 0) {
        pVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                lazy_init(&DAT_009a6f60);
        pvVar7 = pthread_getspecific(pVar4);
      }
      else {
        pvVar7 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
      }
      if (pvVar7 == (void *)0x0) {
        pvVar7 = (void *)FUN_006d2020();
      }
      local_28[0] = 0xffffffffffffffff;
      <std::thread::thread::std::thread::thread::Thread>::new(pvVar7,local_28);
      return;
    }
    FUN_006f23bc();
    return;
  }
  plVar6 = (long *)(puVar5 + -0x10);
  do {
    lVar8 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x6f25fc);
    (*pcVar3)();
  }
  return;
}


// ===== 006f25fc  std::thread::current::current =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::current::current */

void __rustcall std::thread::current::current(void)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  pthread_key_t __key;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)PTR_CURRENT_0099f758 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_0099f758);
    pvVar4 = pthread_getspecific(__key);
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)*(long *)PTR_CURRENT_0099f758);
  }
  if (pvVar4 < (void *)0x3) {
    FUN_006f23bc();
    return;
  }
  plVar5 = (long *)((long)pvVar4 - 0x10);
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x6f2664);
    (*pcVar3)();
  }
  return;
}


// ===== 006f2664  std::thread::functions::sleep_until =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::functions::sleep_until */

void __rustcall std::thread::functions::sleep_until(__time_t param_1,ulong param_2)

{
  timespec local_28;
  int local_14;
  
  local_28.tv_nsec = param_2 & 0xffffffff;
  local_28.tv_sec = param_1;
  do {
    local_14 = clock_nanosleep(1,1,&local_28,(timespec *)0x0);
    if (local_14 == 0) {
      return;
    }
  } while (local_14 == 4);
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed<i32,i32>
            (0,&local_14,&DAT_003767c4,&DAT_0045bba2,0xb9,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00978090);
}


// ===== 006f26d0  std::thread::functions::park_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::functions::park_timeout */

void __rustcall std::thread::functions::park_timeout(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  pthread_key_t __key;
  undefined1 *puVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  long *local_50;
  undefined8 local_48;
  long local_40;
  ulong uStack_38;
  
  if (*(long *)PTR_CURRENT_0099f758 == 0) {
                    /* try { // try from 006f2828 to 006f2843 has its CatchHandler @ 006f2854 */
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_0099f758);
    puVar7 = (undefined1 *)pthread_getspecific(__key);
    if (puVar7 < (undefined1 *)0x3) goto LAB_006f2840;
LAB_006f270c:
    plVar11 = (long *)(puVar7 + -0x10);
    do {
      lVar9 = *plVar11;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x6f2880);
      (*pcVar5)();
    }
  }
  else {
    puVar7 = (undefined1 *)pthread_getspecific((pthread_key_t)*(long *)PTR_CURRENT_0099f758);
    if (&DAT_00000002 < puVar7) goto LAB_006f270c;
LAB_006f2840:
    plVar11 = (long *)FUN_006f23bc();
  }
  plVar1 = plVar11 + 5;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_50 = plVar11;
  if (iVar4 == 0) goto LAB_006f27f4;
                    /* try { // try from 006f2740 to 006f2747 has its CatchHandler @ 006f2858 */
  auVar12 = FUN_006d63bc(1);
  lVar9 = auVar12._0_8_ + param_1;
  if (param_1 < 0 == SCARRY8(auVar12._0_8_,param_1)) {
    uVar10 = auVar12._8_4_ + param_2;
    if (999999999 < uVar10) {
      bVar6 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar6) goto LAB_006f284c;
      uVar10 = uVar10 + 0xc4653600;
    }
    uStack_38 = (ulong)uVar10;
    local_48 = 1;
    local_40 = lVar9;
  }
  else {
LAB_006f284c:
    local_48 = 0;
  }
  while ((int)*plVar1 == -1) {
    plVar2 = &local_40;
    if ((int)local_48 == 0) {
      plVar2 = (long *)0x0;
    }
    lVar9 = syscall(0x62,plVar11 + 5,0x89,0xffffffff,plVar2,0,0xffffffff);
    if ((-1 < lVar9) || (piVar8 = (int *)__errno(), *piVar8 != 4)) break;
  }
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(undefined4 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_006f27f4:
  do {
    lVar9 = *plVar11;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
    ::drop_slow(&local_50);
  }
  return;
}


// ===== 006f2884  std::thread::functions::park_timeout_ms =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::functions::park_timeout_ms */

void __rustcall std::thread::functions::park_timeout_ms(uint param_1)

{
  park_timeout((ulong)param_1 / 1000,(param_1 % 1000) * 1000000);
  return;
}


// ===== 006f28b0  std::thread::functions::available_parallelism =====

/* WARNING: Removing unreachable block (ram,0x006f2964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::functions::available_parallelism */

undefined1  [16] __rustcall std::thread::functions::available_parallelism(void)

{
  short *psVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  __cpu_mask __src;
  __cpu_mask __src_00;
  __cpu_mask __n;
  undefined **ppuVar10;
  int *piVar11;
  size_t sVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  undefined *puVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  cpu_set_t *pcVar26;
  char *pcVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  char *pcVar31;
  char *pcVar32;
  byte *pbVar33;
  ulong uVar34;
  byte *pbVar35;
  void *pvVar36;
  void *pvVar37;
  void *pvVar38;
  long lVar39;
  size_t sVar40;
  undefined *puVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  byte local_2a8;
  size_t local_2a0;
  void *local_298;
  long local_290;
  ulong uStack_288;
  ulong local_280;
  undefined8 local_278;
  ulong local_270;
  ulong local_268;
  undefined4 local_260;
  undefined2 local_25c;
  int local_258;
  undefined4 local_254;
  undefined **local_250;
  ulong *local_248;
  cpu_set_t local_240 [3];
  undefined8 local_c0;
  undefined **local_b8;
  int *local_b0;
  ulong local_a8;
  ulong local_a0;
  __cpu_mask local_98;
  char *local_78;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar16 = __rustc::__rust_alloc(0x80,1);
  uVar29 = _s__00373250;
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    ::alloc::raw_vec::handle_error(1,0x80);
  }
  local_298 = (void *)0x80;
  uStack_288 = 0;
  local_280 = _s__00373250;
  local_278 = (undefined8 *)((ulong)local_278._6_2_ << 0x30);
  local_278 = (undefined8 *)CONCAT71(local_278._1_7_,1);
  local_240[0].__bits[1] = SUB168(_DAT_0045bd59,8);
  local_240[0].__bits[0]._0_1_ = SUB161(_DAT_0045bd59,0);
  local_240[0].__bits[0]._1_7_ = SUB167(_DAT_0045bd59,1);
  local_240[0].__bits[2]._0_2_ = 0x70;
                    /* try { // try from 006f2930 to 006f29b7 has its CatchHandler @ 006f3ba8 */
  local_290 = lVar16;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(&local_a8,local_240,0x12);
  if (local_a8 == 1) {
    uVar29 = 0;
    ppuVar22 = &PTR_DAT_00977090;
LAB_006f2998:
    if (uVar29 != 0) {
      local_240[0].__bits[1] = (long)ppuVar22 + -1;
      local_240[0].__bits[0]._0_1_ = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_240[0].__bits + 1);
    }
  }
  else {
    FUN_006ea8b8(&local_c0,local_a0,&local_280);
    if ((int)local_c0 == 1) {
      uVar29 = (ulong)local_b8 & 3;
      ppuVar22 = local_b8;
      if (1 < uVar29 - 2) goto LAB_006f2998;
    }
    else {
      local_258 = local_c0._4_4_;
                    /* try { // try from 006f29cc to 006f2a37 has its CatchHandler @ 006f3ad4 */
      local_c0 = &local_258;
      auVar42 = FUN_006ee098(&local_258);
      pvVar36 = auVar42._8_8_;
      pvVar38 = pvVar36;
      if ((auVar42 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        pvVar38 = (void *)0x0;
      }
      pvVar37 = local_298;
      lVar17 = local_290;
      if (pvVar38 < (void *)0x81) {
LAB_006f2a24:
        local_290 = lVar17;
        local_298 = pvVar37;
        auVar42 = FUN_006c5c18(&local_c0,&local_298,auVar42._0_8_,pvVar36);
        uVar25 = auVar42._8_8_;
        if (auVar42._0_8_ != 1) {
          uVar14 = close(local_258);
          pvVar38 = (void *)(ulong)uVar14;
          lVar16 = local_290;
          sVar40 = 0xffffffffffffffff;
          uVar25 = uStack_288;
LAB_006f2a54:
          if (uVar25 != 0) {
            lVar17 = lVar16 + uVar25;
            lVar28 = lVar16;
LAB_006f2a68:
            uVar30 = 0;
            do {
              cVar5 = *(char *)(lVar28 + uVar30);
              if (cVar5 == '\n') {
                uVar25 = ~uVar30 + uVar25;
                lVar16 = lVar28 + uVar30 + 1;
                uVar34 = uVar30;
                break;
              }
              uVar30 = uVar30 + 1;
              lVar16 = lVar28;
              uVar34 = uVar25;
            } while (lVar28 + uVar30 != lVar17);
            if (uVar34 != 0) {
              uVar30 = 0;
              lVar17 = uVar34 - 2;
              do {
                if (*(char *)(lVar28 + uVar30) == ':') {
                  pcVar18 = local_78;
                  if (uVar34 - 1 != uVar30) {
                    lVar24 = 0;
                    lVar39 = ~uVar30 + uVar34;
                    pvVar38 = (void *)(lVar28 + uVar30 + 1);
                    goto LAB_006f2b18;
                  }
                  sVar12 = sVar40;
                  if (sVar40 != 0xffffffffffffffff) goto LAB_006f2b50;
                  goto LAB_006f2d20;
                }
                uVar30 = uVar30 + 1;
                lVar17 = lVar17 + -1;
              } while (uVar34 != uVar30);
            }
            if ((cVar5 == '\n') && (uVar25 != 0)) goto LAB_006f2a64;
          }
          goto LAB_006f325c;
        }
      }
      else {
        if (pvVar38 < (void *)0x101) {
          pvVar38 = (void *)0x100;
        }
        if ((long)pvVar38 < 0) {
          pvVar38 = (void *)0x0;
          pcVar26 = local_240;
        }
        else {
          lVar17 = __rustc::__rust_realloc(lVar16,0x80,1,pvVar38);
          pvVar37 = pvVar38;
          if (lVar17 != 0) goto LAB_006f2a24;
          local_240[0].__bits[0]._0_1_ = 1;
          local_240[0].__bits[0]._1_7_ = 0;
          pcVar26 = (cpu_set_t *)&local_a8;
        }
        pcVar26->__bits[0] = (__cpu_mask)pvVar38;
        uVar25 = 0x2600000003;
      }
      if ((1 < (uVar25 & 3) - 2) && ((uVar25 & 3) != 0)) {
        local_240[0].__bits[1] = uVar25 - 1;
        local_240[0].__bits[0]._0_1_ = 3;
                    /* try { // try from 006f2d6c to 006f2d73 has its CatchHandler @ 006f3ad4 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_240[0].__bits + 1);
      }
      close(local_258);
    }
  }
LAB_006f2d7c:
  puVar41 = (undefined *)0xffffffffffffffff;
  goto joined_r0x006f39a4;
  while (lVar24 = lVar24 + 1, pvVar36 = pvVar38, lVar9 = lVar39, (uVar30 - uVar34) + 1 + lVar24 != 0
        ) {
LAB_006f2b18:
    cVar3 = *(char *)(lVar28 + uVar30 + lVar24 + 1);
    if (cVar3 == ':') {
      lVar39 = lVar17 - lVar24;
      pvVar36 = (void *)(lVar28 + uVar30 + lVar24 + 2);
      lVar9 = lVar24;
      break;
    }
  }
  bVar13 = lVar9 == 0;
  if (lVar9 != 0) {
                    /* try { // try from 006f2b80 to 006f2b87 has its CatchHandler @ 006f3acc */
    pvVar38 = (void *)core::str::converts::from_utf8(&local_c0,pvVar38,lVar9);
    if (((ulong)local_c0 & 1) == 0) {
      local_240[0].__bits[6] = 0x2c0000002c;
      local_240[0].__bits[0]._0_1_ = 0;
      local_240[0].__bits[0]._1_7_ = 0;
      local_240[0].__bits[1] = (__cpu_mask)local_b0;
      local_240[0].__bits[2]._0_2_ = SUB82(local_b8,0);
      local_240[0].__bits[2]._2_6_ = (undefined6)((ulong)local_b8 >> 0x10);
      local_240[0].__bits[3] = (__cpu_mask)local_b0;
      local_240[0].__bits[4] = 0;
      local_240[0].__bits[5] = (__cpu_mask)local_b0;
      local_240[0].__bits[7]._0_1_ = 1;
      local_240[0].__bits[8]._0_1_ = 1;
      local_240[0].__bits[8]._1_1_ = 0;
      do {
        lVar17 = CONCAT62(local_240[0].__bits[2]._2_6_,(undefined2)local_240[0].__bits[2]);
                    /* try { // try from 006f2bf8 to 006f2c07 has its CatchHandler @ 006f3b88 */
        pvVar38 = (void *)FUN_007063dc(&local_a8,local_240[0].__bits + 2);
        if (local_a8 == 1) {
          lVar28 = local_a0 -
                   CONCAT71(local_240[0].__bits[0]._1_7_,(undefined1)local_240[0].__bits[0]);
          psVar1 = (short *)(lVar17 + CONCAT71(local_240[0].__bits[0]._1_7_,
                                               (undefined1)local_240[0].__bits[0]));
          local_240[0].__bits[0]._0_1_ = (undefined1)local_98;
          local_240[0].__bits[0]._1_7_ = (undefined7)(local_98 >> 8);
        }
        else {
          if ((local_240[0].__bits[8]._1_1_ & 1) != 0) break;
          pcVar27 = (char *)CONCAT71(local_240[0].__bits[0]._1_7_,(undefined1)local_240[0].__bits[0]
                                    );
          local_240[0].__bits[8]._1_1_ = 1;
          if ((((byte)local_240[0].__bits[8] & 1) == 0) &&
             ((char *)local_240[0].__bits[1] == pcVar27)) break;
          lVar28 = local_240[0].__bits[1] - (long)pcVar27;
          psVar1 = (short *)(pcVar27 +
                            CONCAT62(local_240[0].__bits[2]._2_6_,(undefined2)local_240[0].__bits[2]
                                    ));
        }
        if ((lVar28 == 3) && (*psVar1 == 0x7063 && (char)psVar1[1] == 'u')) {
          if (cVar3 == ':') goto LAB_006f2ca4;
          if ((long)sVar40 < 1) goto LAB_006f2cd8;
          pvVar38 = (void *)__rustc::__rust_dealloc(local_78,sVar40,1);
          sVar40 = 0xffffffffffffffff;
          if (cVar5 == '\n') goto LAB_006f2a54;
          goto LAB_006f2d7c;
        }
      } while (local_240[0].__bits[8]._1_1_ != 1);
    }
    if ((cVar5 != '\n') || (uVar25 == 0)) goto LAB_006f325c;
LAB_006f2a64:
    lVar17 = lVar16 + uVar25;
    lVar28 = lVar16;
    goto LAB_006f2a68;
  }
  if (sVar40 != 0xffffffffffffffff) {
LAB_006f2b50:
    if ((cVar5 != '\n') || (uVar25 == 0)) goto joined_r0x006f2f18;
    goto LAB_006f2a64;
  }
  if (cVar3 == ':') {
LAB_006f2ca4:
    if (lVar39 == 0) {
                    /* try { // try from 006f3a1c to 006f3a33 has its CatchHandler @ 006f3b84 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail(1,0,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009772d0);
    }
    local_2a0 = lVar39 - 1;
    if (local_2a0 == 0) {
      pcVar18 = (char *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pcVar18 = (char *)__rustc::__rust_alloc(local_2a0,1);
      if (pcVar18 == (char *)0x0) {
                    /* try { // try from 006f3a84 to 006f3a8f has its CatchHandler @ 006f3b84 */
                    /* WARNING: Subroutine does not return */
        ::alloc::raw_vec::handle_error(1,local_2a0);
      }
      pvVar38 = memcpy(pcVar18,(void *)((long)pvVar36 + 1),local_2a0);
    }
    sVar12 = local_2a0;
    local_2a8 = bVar13;
    if (0 < (long)sVar40) {
      pvVar38 = (void *)__rustc::__rust_dealloc(local_78,sVar40,1);
      sVar40 = local_2a0;
      local_78 = pcVar18;
      if (cVar5 == '\n') goto LAB_006f2a54;
      goto joined_r0x006f2f18;
    }
  }
  else {
LAB_006f2cd8:
    sVar12 = 0xffffffffffffffff;
  }
LAB_006f2d20:
  local_78 = pcVar18;
  sVar40 = sVar12;
  if (cVar5 == '\n') goto LAB_006f2a54;
LAB_006f325c:
  if (sVar40 == 0xffffffffffffffff) goto LAB_006f2d7c;
joined_r0x006f2f18:
  if ((local_2a8 & 1) == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2(pvVar38);
    ppuVar22 = (undefined **)__rustc::__rust_alloc(0x80,1);
    if (ppuVar22 == (undefined **)0x0) {
                    /* try { // try from 006f3a44 to 006f3a4f has its CatchHandler @ 006f3aac */
                    /* WARNING: Subroutine does not return */
      ::alloc::raw_vec::handle_error(1,0x80);
    }
    local_b0 = (int *)0x0;
    local_c0 = (int *)0x80;
    local_b8 = ppuVar22;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_a0 = __rustc::__rust_alloc(0x14,1);
    if (local_a0 == 0) {
                    /* try { // try from 006f3a64 to 006f3a6f has its CatchHandler @ 006f3a9c */
                    /* WARNING: Subroutine does not return */
      ::alloc::raw_vec::handle_error(1,0x14);
    }
    lVar16 = 0;
    local_98 = 0;
    local_a8 = 0x14;
    goto LAB_006f2f80;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2(pvVar38);
  puVar23 = (undefined8 *)__rustc::__rust_alloc(0x80,1);
  if (puVar23 == (undefined8 *)0x0) {
                    /* try { // try from 006f3a54 to 006f3a5f has its CatchHandler @ 006f3aa4 */
                    /* WARNING: Subroutine does not return */
    ::alloc::raw_vec::handle_error(1,0x80);
  }
  local_280 = 0x80;
  local_278 = puVar23;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_b8 = (undefined **)__rustc::__rust_alloc(0x14,1);
  if (local_b8 == (undefined **)0x0) {
                    /* try { // try from 006f3a74 to 006f3a7f has its CatchHandler @ 006f3a94 */
                    /* WARNING: Subroutine does not return */
    ::alloc::raw_vec::handle_error(1,0x14);
  }
  local_c0 = (int *)&DAT_00000014;
  uVar21 = CONCAT62(_UNK_0045bd83,DAT_0045bd7b._6_2_);
  local_b0 = (int *)0x0;
  *puVar23 = CONCAT26(DAT_0045bd7b._6_2_,(undefined6)DAT_0045bd7b);
  *(undefined8 *)((long)puVar23 + 6) = uVar21;
  if (local_2a0 == 0) {
    uVar25 = 0xf;
    *(undefined1 *)((long)puVar23 + 0xe) = 0x2f;
    goto LAB_006f3334;
  }
  if (*local_78 == '/') {
    uVar21 = 0;
    local_270 = 0;
    if (0x80 < local_2a0) {
LAB_006f39d8:
      FUN_006cecec(&local_280,uVar21,local_2a0,1,1);
      puVar23 = local_278;
    }
  }
  else {
    uVar21 = 0xf;
    *(undefined1 *)((long)puVar23 + 0xe) = 0x2f;
    local_270 = 0xf;
    if (0x71 < local_2a0) goto LAB_006f39d8;
  }
  uVar25 = local_270;
  memcpy((void *)((long)puVar23 + local_270),local_78,local_2a0);
LAB_006f3334:
  local_270 = uVar25 + local_2a0;
  if ((local_270 != 0) && (*(char *)((long)puVar23 + (local_270 - 1)) != '/')) {
    if (local_280 == local_270) {
      FUN_006cecec(&local_280,local_270,1,1,1);
      puVar23 = local_278;
    }
    *(undefined1 *)((long)puVar23 + local_270) = 0x2f;
    local_270 = local_270 + 1;
  }
  if (local_280 - local_270 < 0x12) {
                    /* try { // try from 006f39bc to 006f3a0f has its CatchHandler @ 006f3ab4 */
    FUN_006cecec(&local_280,local_270,0x12,1,1);
    puVar23 = local_278;
  }
  auVar42 = _DAT_0045bd89;
  puVar2 = (undefined8 *)((long)puVar23 + local_270);
  local_270 = local_270 + 0x12;
  *(undefined2 *)(puVar2 + 2) = 0x7372;
  puVar2[1] = auVar42._8_8_;
  *puVar2 = auVar42._0_8_;
                    /* try { // try from 006f33a4 to 006f33c7 has its CatchHandler @ 006f3ab4 */
  sys::fs::exists(&local_a8,puVar23);
  if (((local_a8 & 1) == 0) && ((local_a8 & 0x100) != 0)) {
    <std::path::[r]::std::path::PathBuf>::pop(&local_280);
    puVar41 = (undefined *)0xffffffffffffffff;
    goto LAB_006f33e0;
  }
  if ((((char)local_a8 != '\0') && (1 < (local_a0 & 3) - 2)) && ((local_a0 & 3) != 0)) {
    local_240[0].__bits[1] = local_a0 - 1;
    local_240[0].__bits[0]._0_1_ = 3;
                    /* try { // try from 006f3908 to 006f390f has its CatchHandler @ 006f3ab4 */
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_240[0].__bits + 1);
  }
  if (local_c0 != (int *)0x0) {
    __rustc::__rust_dealloc(local_b8,local_c0,1);
  }
  if (local_280 != 0) {
    __rustc::__rust_dealloc(puVar23,local_280,1);
  }
  puVar41 = (undefined *)0xffffffffffffffff;
  goto joined_r0x006f3248;
LAB_006f2f80:
  do {
                    /* try { // try from 006f2f8c to 006f2f9b has its CatchHandler @ 006f3ae8 */
    (**(code **)((long)&PTR_FUN_00978198 + lVar16))(local_240,local_78,local_2a0);
    __n = local_240[0].__bits[4];
    __src_00 = local_240[0].__bits[3];
    __src = local_240[0].__bits[1];
    lVar17 = CONCAT71(local_240[0].__bits[0]._1_7_,(undefined1)local_240[0].__bits[0]);
    if (lVar17 == -2) goto LAB_006f2f70;
    piVar20 = (int *)CONCAT62(local_240[0].__bits[2]._2_6_,(undefined2)local_240[0].__bits[2]);
    local_b0 = (int *)0x0;
    if (piVar20 == (int *)0x0) {
      local_b0 = (int *)0x0;
LAB_006f302c:
      bVar13 = false;
      if ((int *)__n == (int *)0x0) goto LAB_006f3038;
LAB_006f2ffc:
      if (*(char *)__src_00 != '/') goto LAB_006f3038;
      local_b0 = (int *)0x0;
      if (__n <= local_c0) goto LAB_006f3068;
LAB_006f3110:
      FUN_006cecec(&local_c0,local_b0,__n,1,1);
LAB_006f3068:
      piVar11 = local_b0;
      ppuVar22 = local_b8;
      memcpy((undefined1 *)((long)local_b8 + (long)local_b0),(void *)__src_00,__n);
      local_b0 = piVar11;
    }
    else {
      if (local_c0 < piVar20) {
        FUN_006cecec(&local_c0,0,piVar20,1,1);
        ppuVar22 = local_b8;
      }
      piVar11 = local_b0;
      memcpy((void *)((long)ppuVar22 + (long)local_b0),(void *)__src,(size_t)piVar20);
      local_b0 = (int *)((long)piVar11 + (long)piVar20);
      if (local_b0 == (int *)0x0) goto LAB_006f302c;
      bVar13 = *(char *)((long)local_b0 + (long)local_b8 + -1) != '/';
      if ((int *)__n != (int *)0x0) goto LAB_006f2ffc;
LAB_006f3038:
      if (bVar13) {
        if (local_c0 == local_b0) {
          FUN_006cecec(&local_c0,local_b0,1,1,1);
        }
        *(undefined1 *)((long)local_b8 + (long)local_b0) = 0x2f;
        local_b0 = (int *)((long)local_b0 + 1);
      }
      if ((int *)((long)local_c0 - (long)local_b0) < __n) goto LAB_006f3110;
      ppuVar22 = local_b8;
      if ((int *)__n != (int *)0x0) goto LAB_006f3068;
    }
    local_b0 = (int *)((long)local_b0 + __n);
                    /* try { // try from 006f308c to 006f3167 has its CatchHandler @ 006f3ad0 */
    sys::fs::exists(&local_280,ppuVar22);
    if (((local_280 & 1) == 0) && ((local_280 & 0x100) != 0)) {
      puVar41 = (undefined *)0xffffffffffffffff;
      while (ppuVar22 = local_b8,
            uVar29 = <std::path::[16]::std::path::Path>::_starts_with
                               (local_b8,local_b0,__src,piVar20), (uVar29 & 1) != 0) {
        auVar42 = FUN_006d2260(&local_c0,&local_a8,&DAT_00371ec0,0x10);
        auVar43 = FUN_006d2260(&local_c0,&local_a8,&DAT_0045bd6a,0x11);
        uVar29 = auVar43._8_8_;
        puVar19 = puVar41;
        if (((auVar42._0_8_ == 1) && ((auVar43 & (undefined1  [16])0x1) != (undefined1  [16])0x0))
           && (uVar29 != 0)) {
          puVar19 = (undefined *)0x0;
          if (uVar29 != 0) {
            puVar19 = (undefined *)(auVar42._8_8_ / uVar29);
          }
          if (puVar41 <= puVar19) {
            puVar19 = puVar41;
          }
        }
                    /* try { // try from 006f3194 to 006f31e3 has its CatchHandler @ 006f3af0 */
        <std::path::[r]::std::path::PathBuf>::pop(&local_c0);
        puVar41 = puVar19;
      }
      if (0 < lVar17) {
        __rustc::__rust_dealloc(__src,lVar17,1);
      }
      goto LAB_006f3220;
    }
    if ((((char)local_280 != '\0') && (1 < ((ulong)local_278 & 3) - 2)) &&
       (((ulong)local_278 & 3) != 0)) {
      local_240[0].__bits[1] = (long)local_278 + -1;
      local_240[0].__bits[0]._0_1_ = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_240[0].__bits + 1);
    }
    if (0 < lVar17) {
      __rustc::__rust_dealloc(__src,lVar17,1);
    }
    lVar16 = lVar16 + 8;
  } while (lVar16 != 0x18);
  goto LAB_006f3174;
LAB_006f2f70:
  lVar16 = lVar16 + 8;
  if (lVar16 == 0x18) goto LAB_006f3174;
  goto LAB_006f2f80;
LAB_006f33e0:
  uVar25 = local_270;
  puVar23 = local_278;
                    /* try { // try from 006f33e4 to 006f33fb has its CatchHandler @ 006f3b44 */
  iVar15 = <std::path::[16]::std::path::Path>::_starts_with(local_278,local_270,&DAT_0045bd7b,0xe);
  if (iVar15 == 0) goto LAB_006f3960;
  if ((uVar25 != 0) && (*(char *)((long)puVar23 + (uVar25 - 1)) != '/')) {
    if (local_280 == uVar25) {
      FUN_006cecec(&local_280,uVar25,1,1,1);
      uVar25 = local_270;
      puVar23 = local_278;
    }
    *(undefined1 *)((long)puVar23 + uVar25) = 0x2f;
    uVar25 = uVar25 + 1;
    local_270 = uVar25;
  }
  if (local_280 - uVar25 < 7) {
    FUN_006cecec(&local_280,uVar25,7,1,1);
    uVar25 = local_270;
    puVar23 = local_278;
  }
  local_270 = uVar25 + 7;
  *(undefined4 *)((long)((long)puVar23 + uVar25) + 3) = 0x78616d2e;
  *(undefined4 *)((long)puVar23 + uVar25) = 0x2e757063;
  local_b0 = (int *)0x0;
  local_268 = uVar29;
  local_25c = 0;
  local_260 = 1;
  local_248 = &local_268;
  if (uVar25 < 0x179) {
    memcpy(local_240,puVar23,uVar25 + 7);
    *(undefined1 *)((long)local_240[0].__bits + uVar25 + 7) = 0;
                    /* try { // try from 006f349c to 006f34db has its CatchHandler @ 006f3b44 */
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_a8,local_240,uVar25 + 8);
    if (local_a8 == 1) {
      local_258 = 1;
      local_250 = &PTR_DAT_00977090;
    }
    else {
      FUN_006ea8b8(&local_258,local_a0,&local_268);
    }
  }
  else {
    FUN_006c94c0(&local_258,puVar23,local_270,&local_248,FUN_006d0e6c);
  }
  ppuVar22 = local_250;
  puVar19 = puVar41;
  if (local_258 == 1) {
LAB_006f3520:
    if ((1 < ((ulong)ppuVar22 & 3) - 2) && (((ulong)ppuVar22 & 3) != 0)) {
      local_240[0].__bits[1] = (long)ppuVar22 - 1;
      local_240[0].__bits[0]._0_1_ = 3;
                    /* try { // try from 006f3544 to 006f38cb has its CatchHandler @ 006f3b44 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_240[0].__bits + 1);
    }
  }
  else {
    local_a8 = CONCAT44(local_a8._4_4_,local_254);
    local_240[0].__bits[0]._0_1_ = SUB81(&local_a8,0);
    local_240[0].__bits[0]._1_7_ = (undefined7)((ulong)&local_a8 >> 8);
                    /* try { // try from 006f3500 to 006f350b has its CatchHandler @ 006f3ab8 */
    auVar42 = <&std::fs::File_as_std::io::Read>::read_to_string(local_240,&local_c0);
    close((int)local_a8);
    ppuVar10 = local_b8;
    ppuVar22 = auVar42._8_8_;
    if (auVar42._0_8_ != 0) goto LAB_006f3520;
    local_240[0].__bits[6] = 0xa0000000a;
    local_240[0].__bits[7]._0_1_ = 1;
    local_240[0].__bits[8]._0_1_ = 0;
    local_240[0].__bits[8]._1_1_ = 0;
    local_240[0].__bits[0]._0_1_ = 0;
    local_240[0].__bits[0]._1_7_ = 0;
    local_240[0].__bits[1] = (__cpu_mask)local_b0;
    local_240[0].__bits[2]._0_2_ = SUB82(local_b8,0);
    local_240[0].__bits[2]._2_6_ = (undefined6)((ulong)local_b8 >> 0x10);
    local_240[0].__bits[3] = (__cpu_mask)local_b0;
    local_240[0].__bits[4] = 0;
    local_240[0].__bits[5] = (__cpu_mask)local_b0;
    FUN_007063dc(&local_a8,local_240[0].__bits + 2);
    if (local_a8 == 1) {
      pcVar27 = (char *)(local_98 -
                        CONCAT71(local_240[0].__bits[0]._1_7_,(undefined1)local_240[0].__bits[0]));
      pcVar18 = (char *)((long)ppuVar10 +
                        CONCAT71(local_240[0].__bits[0]._1_7_,(undefined1)local_240[0].__bits[0]));
    }
    else {
      if (((local_240[0].__bits[8]._1_1_ & 1) != 0) ||
         ((pcVar18 = (char *)CONCAT71(local_240[0].__bits[0]._1_7_,
                                      (undefined1)local_240[0].__bits[0]),
          ((byte)local_240[0].__bits[8] & 1) == 0 && ((char *)local_240[0].__bits[1] == pcVar18))))
      goto LAB_006f3960;
      pcVar27 = (char *)(local_240[0].__bits[1] + -(long)pcVar18);
      pcVar18 = pcVar18 + CONCAT62(local_240[0].__bits[2]._2_6_,(undefined2)local_240[0].__bits[2]);
    }
    local_240[0].__bits[1] = (__cpu_mask)pcVar27;
    if ((pcVar27 != (char *)0x0) && (pcVar31 = pcVar27 + -1, pcVar18[(long)pcVar31] == '\n')) {
      if (pcVar31 == (char *)0x0) {
        pcVar32 = (char *)0x0;
      }
      else {
        pcVar32 = pcVar18;
        if (pcVar18[(long)(pcVar27 + -2)] != '\r') {
          pcVar32 = (char *)0x0;
        }
      }
      local_240[0].__bits[1] = (__cpu_mask)pcVar31;
      if (pcVar32 != (char *)0x0) {
        local_240[0].__bits[1] = (__cpu_mask)(pcVar27 + -2);
        pcVar18 = pcVar32;
      }
    }
    local_240[0].__bits[0]._0_1_ = 0;
    local_240[0].__bits[0]._1_7_ = 0;
    local_240[0].__bits[2]._0_2_ = SUB82(pcVar18,0);
    local_240[0].__bits[2]._2_6_ = (undefined6)((ulong)pcVar18 >> 0x10);
    local_240[0].__bits[4] = 0;
    local_240[0].__bits[6] = 0x2000000020;
    local_240[0].__bits[7]._0_1_ = 1;
    local_240[0].__bits[8]._0_1_ = 1;
    local_240[0].__bits[8]._1_1_ = 0;
    local_240[0].__bits[3] = local_240[0].__bits[1];
    local_240[0].__bits[5] = local_240[0].__bits[1];
    FUN_007063dc(&local_a8,local_240[0].__bits + 2);
    uVar25 = local_a0;
    if ((local_a8 & 1) == 0) goto LAB_006f3960;
    lVar16 = CONCAT71(local_240[0].__bits[0]._1_7_,(undefined1)local_240[0].__bits[0]);
    local_240[0].__bits[0]._0_1_ = (undefined1)local_98;
    local_240[0].__bits[0]._1_7_ = (undefined7)(local_98 >> 8);
    if ((pcVar18 == (char *)0x0) || ((local_240[0].__bits[8]._1_1_ & 1) != 0)) goto LAB_006f3960;
    lVar17 = CONCAT62(local_240[0].__bits[2]._2_6_,(undefined2)local_240[0].__bits[2]);
    FUN_007063dc(&local_a8,local_240[0].__bits + 2);
    if (local_a8 == 1) {
      lVar28 = local_a0 - CONCAT71(local_240[0].__bits[0]._1_7_,(undefined1)local_240[0].__bits[0]);
      pbVar33 = (byte *)(lVar17 + CONCAT71(local_240[0].__bits[0]._1_7_,
                                           (undefined1)local_240[0].__bits[0]));
      local_240[0].__bits[0]._0_1_ = (undefined1)local_98;
      local_240[0].__bits[0]._1_7_ = (undefined7)(local_98 >> 8);
    }
    else {
      if (((local_240[0].__bits[8]._1_1_ & 1) != 0) ||
         ((pcVar27 = (char *)CONCAT71(local_240[0].__bits[0]._1_7_,
                                      (undefined1)local_240[0].__bits[0]),
          ((byte)local_240[0].__bits[8] & 1) == 0 && ((char *)local_240[0].__bits[1] == pcVar27))))
      goto LAB_006f3960;
      lVar28 = local_240[0].__bits[1] - (long)pcVar27;
      pbVar33 = (byte *)(pcVar27 +
                        CONCAT62(local_240[0].__bits[2]._2_6_,(undefined2)local_240[0].__bits[2]));
    }
    lVar17 = uVar25 - lVar16;
    pvVar38 = pvVar36;
    if (lVar17 == 0) {
      bVar13 = true;
    }
    else {
      pbVar35 = (byte *)(pcVar18 + lVar16);
      if (lVar17 == 1) {
        bVar4 = *pbVar35;
        bVar13 = true;
        if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) goto joined_r0x006f36f8;
      }
      else {
        bVar4 = *pbVar35;
      }
      if (bVar4 == 0x2b) {
        pbVar35 = pbVar35 + 1;
      }
      uVar25 = lVar17 - (ulong)(bVar4 == 0x2b);
      if (uVar25 < 0x11) {
        pvVar37 = (void *)0x0;
        if (uVar25 == 0) {
          bVar13 = false;
          pvVar38 = pvVar37;
        }
        else {
          do {
            uVar14 = *pbVar35 - 0x30;
            bVar13 = 9 < uVar14;
            pvVar38 = pvVar36;
            if (9 < uVar14) break;
            uVar25 = uVar25 - 1;
            pvVar37 = (void *)((long)pvVar37 * 10 + (ulong)uVar14);
            pbVar35 = pbVar35 + 1;
            pvVar38 = pvVar37;
          } while (uVar25 != 0);
        }
      }
      else {
        pvVar37 = (void *)0x0;
        while( true ) {
          bVar13 = uVar25 != 0;
          uVar25 = uVar25 - 1;
          pvVar38 = pvVar37;
          if ((!bVar13) ||
             (auVar42._8_8_ = 0, auVar42._0_8_ = pvVar37, pvVar38 = pvVar36,
             SUB168(auVar42 * ZEXT816(10),8) != 0)) break;
          uVar30 = (long)pvVar37 * 10;
          uVar14 = *pbVar35 - 0x30;
          pvVar37 = (void *)(uVar30 + uVar14);
          if ((9 < uVar14) || (pbVar35 = pbVar35 + 1, CARRY8(uVar30,(ulong)uVar14))) break;
        }
      }
    }
joined_r0x006f36f8:
    pvVar36 = pvVar38;
    if (lVar28 != 0) {
      if (lVar28 == 1) {
        bVar4 = *pbVar33;
        if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) goto LAB_006f3550;
      }
      else {
        bVar4 = *pbVar33;
      }
      if (bVar4 == 0x2b) {
        pbVar33 = pbVar33 + 1;
      }
      uVar25 = lVar28 - (ulong)(bVar4 == 0x2b);
      if (uVar25 < 0x11) {
        if (uVar25 != 0) {
          uVar30 = 0;
          do {
            if (9 < *pbVar33 - 0x30) goto LAB_006f3550;
            uVar25 = uVar25 - 1;
            uVar30 = uVar30 * 10 + (ulong)(*pbVar33 - 0x30);
            pbVar33 = pbVar33 + 1;
          } while (uVar25 != 0);
LAB_006f3814:
          if (uVar30 == 0) {
            bVar13 = true;
          }
          if (!bVar13) {
            puVar19 = (undefined *)0x0;
            if (uVar30 != 0) {
              puVar19 = (undefined *)((ulong)pvVar36 / uVar30);
            }
            if (puVar41 <= puVar19) {
              puVar19 = puVar41;
            }
          }
        }
      }
      else {
        uVar30 = 0;
        while( true ) {
          if (uVar25 == 0) goto LAB_006f3814;
          auVar43._8_8_ = 0;
          auVar43._0_8_ = uVar30;
          if (SUB168(auVar43 * ZEXT816(10),8) != 0) break;
          uVar34 = uVar30 * 10;
          uVar14 = *pbVar33 - 0x30;
          uVar30 = uVar34 + uVar14;
          if ((9 < uVar14) ||
             (uVar25 = uVar25 - 1, pbVar33 = pbVar33 + 1, CARRY8(uVar34,(ulong)uVar14))) break;
        }
      }
    }
  }
LAB_006f3550:
  <std::path::[r]::std::path::PathBuf>::pop(&local_280);
  <std::path::[r]::std::path::PathBuf>::pop(&local_280);
  puVar41 = puVar19;
  goto LAB_006f33e0;
LAB_006f3960:
  if (local_c0 != (int *)0x0) {
    __rustc::__rust_dealloc(local_b8,local_c0,1);
  }
  if (local_280 != 0) {
    __rustc::__rust_dealloc(local_278,local_280,1);
  }
  goto joined_r0x006f3248;
LAB_006f3174:
  puVar41 = (undefined *)0xffffffffffffffff;
LAB_006f3220:
  if (local_a8 != 0) {
    __rustc::__rust_dealloc(local_a0,local_a8,1);
  }
  if (local_c0 != (int *)0x0) {
    __rustc::__rust_dealloc(ppuVar22,local_c0,1);
  }
joined_r0x006f3248:
  if (sVar40 != 0) {
    __rustc::__rust_dealloc(local_78,sVar40,1);
  }
joined_r0x006f39a4:
  if (local_298 != (void *)0x0) {
    __rustc::__rust_dealloc(local_290,local_298,1);
  }
  if (puVar41 < (undefined *)0x2) {
    puVar41 = (undefined *)0x1;
  }
  local_240[0].__bits[9] = 0;
  local_240[0].__bits[8]._0_1_ = 0;
  local_240[0].__bits[8]._1_1_ = 0;
  local_240[0].__bits[8]._2_6_ = 0;
  local_240[0].__bits[0xb] = 0;
  local_240[0].__bits[10] = 0;
  local_240[0].__bits[0xd] = 0;
  local_240[0].__bits[0xc] = 0;
  local_240[0].__bits[0xf] = 0;
  local_240[0].__bits[0xe] = 0;
  local_240[0].__bits[7]._0_1_ = 0;
  local_240[0].__bits[7]._1_7_ = 0;
  local_240[0].__bits[6] = 0;
  local_240[0].__bits[3] = 0;
  local_240[0].__bits[2]._0_2_ = 0;
  local_240[0].__bits[2]._2_6_ = 0;
  local_240[0].__bits[5] = 0;
  local_240[0].__bits[4] = 0;
  local_240[0].__bits[1] = 0;
  local_240[0].__bits[0]._0_1_ = 0;
  local_240[0].__bits[0]._1_7_ = 0;
  iVar15 = sched_getaffinity(0,0x80,local_240);
  if (iVar15 == 0) {
    auVar46[8] = (undefined1)local_240[0].__bits[7];
    auVar46._0_8_ = local_240[0].__bits[6];
    auVar46._9_7_ = local_240[0].__bits[7]._1_7_;
    auVar48[1] = local_240[0].__bits[8]._1_1_;
    auVar48[0] = (byte)local_240[0].__bits[8];
    auVar48._2_6_ = local_240[0].__bits[8]._2_6_;
    auVar48._8_8_ = local_240[0].__bits[9];
    auVar44._1_7_ = local_240[0].__bits[0]._1_7_;
    auVar44[0] = (undefined1)local_240[0].__bits[0];
    auVar44._8_8_ = local_240[0].__bits[1];
    auVar47._2_6_ = local_240[0].__bits[2]._2_6_;
    auVar47._0_2_ = (undefined2)local_240[0].__bits[2];
    auVar47._8_8_ = local_240[0].__bits[3];
    auVar49._8_8_ = local_240[0].__bits[5];
    auVar49._0_8_ = local_240[0].__bits[4];
    auVar6._8_8_ = local_240[0].__bits[0xb];
    auVar6._0_8_ = local_240[0].__bits[10];
    auVar45 = NEON_cnt(auVar44,1);
    auVar7._8_8_ = local_240[0].__bits[0xd];
    auVar7._0_8_ = local_240[0].__bits[0xc];
    auVar8._8_8_ = local_240[0].__bits[0xf];
    auVar8._0_8_ = local_240[0].__bits[0xe];
    auVar42 = NEON_cnt(auVar46,1);
    auVar46 = NEON_cnt(auVar48,1);
    auVar48 = NEON_cnt(auVar6,1);
    auVar44 = NEON_cnt(auVar47,1);
    auVar43 = NEON_cnt(auVar49,1);
    auVar47 = NEON_cnt(auVar8,1);
    auVar49 = NEON_cnt(auVar7,1);
    puVar19 = (undefined *)
              ((ulong)((uint)(ushort)((ushort)auVar45[0] + (ushort)auVar45[1]) +
                      (uint)(ushort)((ushort)auVar45[2] + (ushort)auVar45[3])) +
               (ulong)((uint)(ushort)((ushort)auVar45[4] + (ushort)auVar45[5]) +
                      (uint)(ushort)((ushort)auVar45[6] + (ushort)auVar45[7])) +
               (ulong)((uint)(ushort)((ushort)auVar46[0] + (ushort)auVar46[1]) +
                      (uint)(ushort)((ushort)auVar46[2] + (ushort)auVar46[3])) +
               (ulong)((uint)(ushort)((ushort)auVar46[4] + (ushort)auVar46[5]) +
                      (uint)(ushort)((ushort)auVar46[6] + (ushort)auVar46[7])) +
               (ulong)((uint)(ushort)((ushort)auVar43[0] + (ushort)auVar43[1]) +
                      (uint)(ushort)((ushort)auVar43[2] + (ushort)auVar43[3])) +
               (ulong)((uint)(ushort)((ushort)auVar43[4] + (ushort)auVar43[5]) +
                      (uint)(ushort)((ushort)auVar43[6] + (ushort)auVar43[7])) +
               (ulong)((uint)(ushort)((ushort)auVar49[0] + (ushort)auVar49[1]) +
                      (uint)(ushort)((ushort)auVar49[2] + (ushort)auVar49[3])) +
               (ulong)((uint)(ushort)((ushort)auVar49[4] + (ushort)auVar49[5]) +
                      (uint)(ushort)((ushort)auVar49[6] + (ushort)auVar49[7])) +
               (ulong)((uint)(ushort)((ushort)auVar44[0] + (ushort)auVar44[1]) +
                      (uint)(ushort)((ushort)auVar44[2] + (ushort)auVar44[3])) +
               (ulong)((uint)(ushort)((ushort)auVar44[4] + (ushort)auVar44[5]) +
                      (uint)(ushort)((ushort)auVar44[6] + (ushort)auVar44[7])) +
               (ulong)((uint)(ushort)((ushort)auVar48[0] + (ushort)auVar48[1]) +
                      (uint)(ushort)((ushort)auVar48[2] + (ushort)auVar48[3])) +
               (ulong)((uint)(ushort)((ushort)auVar48[4] + (ushort)auVar48[5]) +
                      (uint)(ushort)((ushort)auVar48[6] + (ushort)auVar48[7])) +
               (ulong)((uint)(ushort)((ushort)auVar42[0] + (ushort)auVar42[1]) +
                      (uint)(ushort)((ushort)auVar42[2] + (ushort)auVar42[3])) +
               (ulong)((uint)(ushort)((ushort)auVar42[4] + (ushort)auVar42[5]) +
                      (uint)(ushort)((ushort)auVar42[6] + (ushort)auVar42[7])) +
               (ulong)((uint)(ushort)((ushort)auVar47[0] + (ushort)auVar47[1]) +
                      (uint)(ushort)((ushort)auVar47[2] + (ushort)auVar47[3])) +
               (ulong)((uint)(ushort)((ushort)auVar47[4] + (ushort)auVar47[5]) +
                      (uint)(ushort)((ushort)auVar47[6] + (ushort)auVar47[7])) +
              (ulong)((uint)(ushort)((ushort)auVar45[8] + (ushort)auVar45[9]) +
                     (uint)(ushort)((ushort)auVar45[10] + (ushort)auVar45[0xb])) +
              (ulong)((uint)(ushort)((ushort)auVar45[0xc] + (ushort)auVar45[0xd]) +
                     (uint)(ushort)((ushort)auVar45[0xe] + (ushort)auVar45[0xf])) +
              (ulong)((uint)(ushort)((ushort)auVar46[8] + (ushort)auVar46[9]) +
                     (uint)(ushort)((ushort)auVar46[10] + (ushort)auVar46[0xb])) +
              (ulong)((uint)(ushort)((ushort)auVar46[0xc] + (ushort)auVar46[0xd]) +
                     (uint)(ushort)((ushort)auVar46[0xe] + (ushort)auVar46[0xf])) +
              (ulong)((uint)(ushort)((ushort)auVar43[8] + (ushort)auVar43[9]) +
                     (uint)(ushort)((ushort)auVar43[10] + (ushort)auVar43[0xb])) +
              (ulong)((uint)(ushort)((ushort)auVar43[0xc] + (ushort)auVar43[0xd]) +
                     (uint)(ushort)((ushort)auVar43[0xe] + (ushort)auVar43[0xf])) +
              (ulong)((uint)(ushort)((ushort)auVar49[8] + (ushort)auVar49[9]) +
                     (uint)(ushort)((ushort)auVar49[10] + (ushort)auVar49[0xb])) +
              (ulong)((uint)(ushort)((ushort)auVar49[0xc] + (ushort)auVar49[0xd]) +
                     (uint)(ushort)((ushort)auVar49[0xe] + (ushort)auVar49[0xf])) +
              (ulong)((uint)(ushort)((ushort)auVar44[8] + (ushort)auVar44[9]) +
                     (uint)(ushort)((ushort)auVar44[10] + (ushort)auVar44[0xb])) +
              (ulong)((uint)(ushort)((ushort)auVar44[0xc] + (ushort)auVar44[0xd]) +
                     (uint)(ushort)((ushort)auVar44[0xe] + (ushort)auVar44[0xf])) +
              (ulong)((uint)(ushort)((ushort)auVar48[8] + (ushort)auVar48[9]) +
                     (uint)(ushort)((ushort)auVar48[10] + (ushort)auVar48[0xb])) +
              (ulong)((uint)(ushort)((ushort)auVar48[0xc] + (ushort)auVar48[0xd]) +
                     (uint)(ushort)((ushort)auVar48[0xe] + (ushort)auVar48[0xf])) +
              (ulong)((uint)(ushort)((ushort)auVar42[8] + (ushort)auVar42[9]) +
                     (uint)(ushort)((ushort)auVar42[10] + (ushort)auVar42[0xb])) +
              (ulong)((uint)(ushort)((ushort)auVar42[0xc] + (ushort)auVar42[0xd]) +
                     (uint)(ushort)((ushort)auVar42[0xe] + (ushort)auVar42[0xf])) +
              (ulong)((uint)(ushort)((ushort)auVar47[8] + (ushort)auVar47[9]) +
                     (uint)(ushort)((ushort)auVar47[10] + (ushort)auVar47[0xb])) +
              (ulong)((uint)(ushort)((ushort)auVar47[0xc] + (ushort)auVar47[0xd]) +
                     (uint)(ushort)((ushort)auVar47[0xe] + (ushort)auVar47[0xf])));
    if (puVar19 == (undefined *)0x0) goto LAB_006f2dcc;
LAB_006f2ed4:
    uVar21 = 0;
    if (puVar19 <= puVar41) {
      puVar41 = puVar19;
    }
  }
  else {
LAB_006f2dcc:
    puVar19 = (undefined *)sysconf(0x61);
    if (puVar19 == (undefined *)0xffffffffffffffff) {
      piVar20 = (int *)__errno();
      iVar15 = *piVar20;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      puVar41 = (undefined *)((long)iVar15 << 0x20 | 2);
    }
    else {
      if (puVar19 != (undefined *)0x0) goto LAB_006f2ed4;
      puVar41 = &UNK_009780a8;
    }
    uVar21 = 1;
  }
  auVar45._8_8_ = puVar41;
  auVar45._0_8_ = uVar21;
  return auVar45;
}


// ===== 006f3bc8  std::thread::functions::park =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::functions::park */

void __rustcall std::thread::functions::park(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  void *pvVar7;
  int *piVar8;
  long *plVar9;
  long *local_18;
  
  lVar6 = *(long *)PTR_CURRENT_0099f758;
  if (lVar6 == 0) {
                    /* try { // try from 006f3cd4 to 006f3ce7 has its CatchHandler @ 006f3cf0 */
    lVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_0099f758);
  }
  pvVar7 = pthread_getspecific((pthread_key_t)lVar6);
  if (pvVar7 < (void *)0x3) {
    plVar9 = (long *)FUN_006f23bc();
  }
  else {
    plVar9 = (long *)((long)pvVar7 + -0x10);
    do {
      lVar6 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x6f3cf8);
      (*pcVar5)();
    }
  }
  plVar1 = plVar9 + 5;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_18 = plVar9;
  if (iVar4 == 0) {
LAB_006f3c2c:
    do {
      lVar6 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
      ::drop_slow(&local_18);
    }
    return;
  }
LAB_006f3c6c:
  if (((int)*plVar1 == -1) &&
     (lVar6 = syscall(0x62,plVar9 + 5,0x89,0xffffffff,0,0,0xffffffff), lVar6 < 0))
  goto code_r0x006f3ca4;
  goto LAB_006f3cb4;
code_r0x006f3ca4:
  piVar8 = (int *)__errno();
  if (*piVar8 != 4) {
LAB_006f3cb4:
    while ((int)*plVar1 == 1) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(undefined4 *)plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_006f3c2c;
    }
    ClearExclusiveLocal();
  }
  goto LAB_006f3c6c;
}


// ===== 006f3cfc  std::thread::functions::sleep =====

/* WARNING: Removing unreachable block (ram,0x006f3d58) */
/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::functions::sleep */

void __rustcall
std::thread::functions::sleep
          (ulong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  timespec local_38;
  int local_24;
  
  if ((param_1 != 0) || (param_2 != 0)) {
    local_38.tv_nsec = (long)param_2;
LAB_006f3d20:
    do {
      local_38.tv_sec = param_1;
      if (0x7ffffffffffffffe < param_1) {
        local_38.tv_sec = 0x7fffffffffffffff;
      }
      param_1 = param_1 - local_38.tv_sec;
      local_24 = clock_nanosleep(1,0,&local_38,&local_38);
      if (local_24 == 0) {
        local_38.tv_nsec = 0;
      }
      else {
        if (local_24 != 4) {
                    /* WARNING: Subroutine does not return */
          core::panicking::assert_failed<i32,i32>
                    (0,&local_24,&DAT_003767c4,0,param_5,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_009780c0);
        }
        param_1 = local_38.tv_sec + param_1;
        if (0 < local_38.tv_nsec) goto LAB_006f3d20;
      }
    } while (param_1 != 0);
  }
  return;
}


// ===== 006f3da8  std::thread::functions::sleep_ms =====

/* WARNING: Removing unreachable block (ram,0x006f3e28) */
/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::functions::sleep_ms */

void __rustcall std::thread::functions::sleep_ms(uint param_1)

{
  undefined8 in_x4;
  ulong uVar1;
  timespec local_38;
  int local_24;
  
  if ((999 < param_1) || (param_1 % 1000 != 0)) {
    uVar1 = (ulong)(param_1 / 1000);
    local_38.tv_nsec = (long)((param_1 % 1000) * 1000000);
LAB_006f3df0:
    do {
      local_38.tv_sec = uVar1;
      if (0x7ffffffffffffffe < uVar1) {
        local_38.tv_sec = 0x7fffffffffffffff;
      }
      uVar1 = uVar1 - local_38.tv_sec;
      local_24 = clock_nanosleep(1,0,&local_38,&local_38);
      if (local_24 == 0) {
        local_38.tv_nsec = 0;
      }
      else {
        if (local_24 != 4) {
                    /* WARNING: Subroutine does not return */
          core::panicking::assert_failed<i32,i32>
                    (0,&local_24,&DAT_003767c4,0,in_x4,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_009780c0);
        }
        uVar1 = local_38.tv_sec + uVar1;
        if (0 < local_38.tv_nsec) goto LAB_006f3df0;
      }
    } while (uVar1 != 0);
  }
  return;
}


// ===== 006f3e78  std::thread::functions::yield_now =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::functions::yield_now */

void __rustcall std::thread::functions::yield_now(void)

{
  (*(code *)PTR_sched_yield_009a1a58)();
  return;
}


// ===== 006f3e7c  std::thread::spawnhook::run_spawn_hooks =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::spawnhook::run_spawn_hooks */

void __rustcall std::thread::spawnhook::run_spawn_hooks(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long *local_78;
  undefined1 (*local_70) [16];
  long *local_68;
  
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f7b0;
  if (uVar10 == 0) {
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f7b0);
    puVar5 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar10);
    if (puVar5 < &DAT_00000002) goto LAB_006f4054;
  }
  else {
    puVar5 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar10);
    if (puVar5 < &DAT_00000002) {
LAB_006f4054:
      puVar5 = (undefined8 *)FUN_006c149c(uVar10 & 0xffffffff,puVar5,0);
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 8;
    return;
  }
  plVar7 = (long *)*puVar5;
  *puVar5 = 0;
  if (plVar7 == (long *)0x0) {
    local_78 = (long *)0x0;
  }
  else {
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x6f40a4);
      (*pcVar4)();
    }
    local_78 = (long *)*puVar5;
  }
  *puVar5 = plVar7;
                    /* try { // try from 006f3f04 to 006f3f0b has its CatchHandler @ 006f40c8 */
  <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop(&local_78);
  if (local_78 != (long *)0x0) {
    do {
      lVar9 = *local_78;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_78,0x10);
      if (bVar3) {
        *local_78 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 006f3f2c to 006f3f33 has its CatchHandler @ 006f40a4 */
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow(&local_78);
    }
  }
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[4];
                    /* try { // try from 006f3f4c to 006f3f53 has its CatchHandler @ 006f40c0 */
    auVar13 = (**(code **)(plVar7[3] + 0x28))(plVar7[2],param_2);
    if (auVar13._0_8_ != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pauVar6 = (undefined1 (*) [16])__rustc::__rust_alloc(0x40,8);
      if (pauVar6 == (undefined1 (*) [16])0x0) {
                    /* try { // try from 006f4094 to 006f409f has its CatchHandler @ 006f40ac */
                    /* WARNING: Subroutine does not return */
        ::alloc::raw_vec::handle_error(8,0x40);
      }
      *pauVar6 = auVar13;
      plVar11 = (long *)0x1;
      local_78 = (long *)0x4;
      local_68 = (long *)0x1;
      plVar8 = (long *)0x4;
      local_70 = pauVar6;
      if (lVar9 != 0) {
        lVar12 = 0;
        do {
          plVar11 = local_68;
          puVar5 = (undefined8 *)(lVar9 + 0x10);
          plVar8 = (long *)(lVar9 + 0x18);
          lVar9 = *(long *)(lVar9 + 0x20);
                    /* try { // try from 006f3fc8 to 006f3fcf has its CatchHandler @ 006f4120 */
          auVar13 = (**(code **)(*plVar8 + 0x28))(*puVar5,param_2);
          plVar8 = local_78;
          if (auVar13._0_8_ == 0) break;
          if (plVar11 == local_78) {
            uVar1 = 1;
            if (lVar9 != 0) {
              uVar1 = 2;
            }
                    /* try { // try from 006f3ff0 to 006f4003 has its CatchHandler @ 006f4108 */
            FUN_006cecec(&local_78,plVar11,uVar1,8,0x10);
            pauVar6 = local_70;
          }
          plVar11 = (long *)((long)plVar11 + 1);
          *(undefined1 (*) [16])(pauVar6[1] + lVar12) = auVar13;
          plVar8 = local_78;
          lVar12 = lVar12 + 0x10;
          local_68 = plVar11;
        } while (lVar9 != 0);
      }
      goto LAB_006f4028;
    }
  }
  plVar11 = (long *)0x0;
  local_70 = (undefined1 (*) [16])&DAT_00000008;
  plVar8 = (long *)0x0;
LAB_006f4028:
  *param_1 = (long)plVar8;
  param_1[1] = (long)local_70;
  param_1[2] = (long)plVar11;
  param_1[3] = (long)plVar7;
  return;
}


// ===== 006f4144  std::panicking::panic_count::is_zero_slow_path =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::panic_count::is_zero_slow_path */

bool __rustcall std::panicking::panic_count::is_zero_slow_path(void)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = DAT_009a63d8;
  if (DAT_009a63d8 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a63d8);
    plVar1 = (long *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    plVar1 = (long *)pthread_getspecific((pthread_key_t)DAT_009a63d8);
  }
  if (plVar1 < &DAT_00000002) {
    plVar1 = (long *)FUN_006c1574(uVar2 & 0xffffffff,plVar1,0);
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    thread::local::panic_access_error(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976bb0);
  }
  return *plVar1 == 0;
}


// ===== 006f41d0  std::panicking::panic_count::finished_panic_hook =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::panic_count::finished_panic_hook */

void __rustcall std::panicking::panic_count::finished_panic_hook(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  uVar2 = DAT_009a63d8;
  if (DAT_009a63d8 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a63d8);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)DAT_009a63d8);
  }
  if (puVar1 < &DAT_00000002) {
    puVar1 = (undefined1 *)FUN_006c1574(uVar2 & 0xffffffff,puVar1,0);
  }
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    thread::local::panic_access_error(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976bb0);
  }
  puVar1[8] = 0;
  return;
}


// ===== 006f4254  std::panicking::panic_count::decrease =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::panic_count::decrease */

void __rustcall std::panicking::panic_count::decrease(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  
  puVar3 = PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = *(long *)puVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    uVar5 = DAT_009a63d8;
  } while (cVar1 != '\0');
  if (DAT_009a63d8 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a63d8);
    plVar4 = (long *)pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    plVar4 = (long *)pthread_getspecific((pthread_key_t)DAT_009a63d8);
  }
  if (plVar4 < &DAT_00000002) {
    plVar4 = (long *)FUN_006c1574(uVar5 & 0xffffffff,plVar4,0);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    thread::local::panic_access_error(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976bb0);
  }
  *plVar4 = *plVar4 + -1;
  *(undefined1 *)(plVar4 + 1) = 0;
  return;
}


// ===== 006f42fc  std::panicking::panic_count::increase =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::panic_count::increase */

undefined8 __rustcall std::panicking::panic_count::increase(undefined1 param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  do {
    lVar6 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    uVar5 = DAT_009a63d8;
  } while (cVar1 != '\0');
  if (lVar6 < 0) {
    return 0;
  }
  if (DAT_009a63d8 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a63d8);
    plVar4 = (long *)pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    plVar4 = (long *)pthread_getspecific((pthread_key_t)DAT_009a63d8);
  }
  if (plVar4 < &DAT_00000002) {
    plVar4 = (long *)FUN_006c1574(uVar5 & 0xffffffff,plVar4,0);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    thread::local::panic_access_error(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976bb0);
  }
  if ((*(byte *)(plVar4 + 1) & 1) != 0) {
    return 1;
  }
  *(undefined1 *)(plVar4 + 1) = param_1;
  *plVar4 = *plVar4 + 1;
  return 2;
}


// ===== 006f43d8  std::panicking::panic_count::get_count =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::panic_count::get_count */

undefined8 __rustcall std::panicking::panic_count::get_count(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = DAT_009a63d8;
  if (DAT_009a63d8 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a63d8);
    puVar1 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    puVar1 = (undefined8 *)pthread_getspecific((pthread_key_t)DAT_009a63d8);
  }
  if (puVar1 < &DAT_00000002) {
    puVar1 = (undefined8 *)FUN_006c1574(uVar2 & 0xffffffff,puVar1,0);
  }
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    thread::local::panic_access_error(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976bb0);
  }
  return *puVar1;
}


// ===== 006f445c  FUN_006f445c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_006f445c(undefined8 *param_1,void *param_2,ulong param_3)

{
  int __fd;
  __off_t _Var1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  int local_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined8 *local_1d8;
  stat local_1d0 [2];
  long local_48;
  undefined8 local_40;
  
  local_1f0 = 1;
  local_1d8 = &local_1f8;
  local_1ec = 0;
  local_1f8 = _s__00373250;
  if (param_3 < 0x180) {
    memcpy(local_1d0,param_2,param_3);
    *(undefined1 *)((long)local_1d0[0].__unused + (param_3 - 0x78)) = 0;
    uVar4 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                      (&local_48,local_1d0,param_3 + 1);
    if (local_48 == 1) {
      local_1e0 = &PTR_DAT_00977090;
      local_1e8 = 1;
      goto LAB_006f44f4;
    }
    uVar4 = FUN_006ea8b8(&local_1e8,local_40,&local_1f8);
    __fd = local_1e4;
  }
  else {
    uVar4 = FUN_006c94c0(&local_1e8,param_2,param_3,&local_1d8,FUN_006d0e6c);
    __fd = local_1e4;
  }
  if (local_1e8 == 1) {
LAB_006f44f4:
    if ((1 < ((ulong)local_1e0 & 3) - 2) && (((ulong)local_1e0 & 3) != 0)) {
      local_1d0[0].st_ino = (long)local_1e0 - 1;
      local_1d0[0].st_dev = CONCAT71(local_1d0[0].st_dev._1_7_,3);
      uVar4 = <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_1d0[0].st_ino);
    }
    *param_1 = 0;
    return uVar4;
  }
  local_1d0[0].st_ctim.tv_sec = 0;
  local_1d0[0].st_mtim.tv_nsec = 0;
  local_1d0[0].__unused[0] = 0;
  local_1d0[0].st_ctim.tv_nsec = 0;
  local_1d0[0].st_ino = 0;
  local_1d0[0].st_dev = 0;
  local_1d0[0].st_mode = 0;
  local_1d0[0].st_uid = 0;
  local_1d0[0].st_nlink = 0;
  local_1d0[0].st_rdev = 0;
  local_1d0[0].st_gid = 0;
  local_1d0[0].__pad0 = 0;
  local_1d0[0].st_blksize = 0;
  local_1d0[0].st_size = 0;
  local_1d0[0].st_atim.tv_sec = 0;
  local_1d0[0].st_blocks = 0;
  local_1d0[0].st_mtim.tv_sec = 0;
  local_1d0[0].st_atim.tv_nsec = 0;
  iVar2 = fstat(__fd,local_1d0);
  _Var1 = local_1d0[0].st_size;
  if (iVar2 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f4628 to 006f4633 has its CatchHandler @ 006f4638 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  else {
    pvVar5 = mmap((void *)0x0,local_1d0[0].st_size,1,2,__fd,0);
    if (pvVar5 != (void *)0xffffffffffffffff) {
      param_1[1] = pvVar5;
      param_1[2] = _Var1;
      *param_1 = 1;
      goto LAB_006f45e4;
    }
  }
  *param_1 = 0;
LAB_006f45e4:
  uVar3 = close(__fd);
  return (ulong)uVar3;
}


// ===== 006f464c  std::backtrace_rs::symbolize::gimli::resolve =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::backtrace_rs::symbolize::gimli::resolve */

void __rustcall
std::backtrace_rs::symbolize::gimli::resolve
          (long param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *(long *)(param_2 + 2);
    if ((*param_2 & 1) == 0) {
      lVar2 = FUN_00751e80();
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + -1;
    }
    FUN_006bde28(lVar1,param_3,param_4);
    return;
  }
  if (param_2 != (uint *)0x0) {
    FUN_006bde28((long)param_2 + -1,param_3,param_4);
    return;
  }
  FUN_006bde28(0,param_3,param_4);
  return;
}


// ===== 006f46cc  std::os::unix::io::replace_stdio_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::io::replace_stdio_fd */

ulong __rustcall std::os::unix::io::replace_stdio_fd(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = dup2(param_2,param_1);
  if (iVar1 != -1) {
    close(param_2);
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f4750 to 006f475b has its CatchHandler @ 006f4760 */
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  close(param_2);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006f4774  std::os::unix::xdg::config_dirs =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::xdg::config_dirs */

void __rustcall std::os::unix::xdg::config_dirs(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long local_1d0;
  undefined **ppuStack_1c8;
  long local_1c0;
  undefined1 local_1b8;
  undefined6 uStack_1b7;
  undefined1 uStack_1b1;
  undefined7 local_1b0;
  undefined1 uStack_1a9;
  long local_38;
  undefined8 local_30;
  
  uStack_1a9 = 0;
  local_1b8 = (undefined1)(undefined7)DAT_0045b9bd;
  uStack_1b7 = (undefined6)((uint7)(undefined7)DAT_0045b9bd >> 8);
  uStack_1b1 = DAT_0045b9bd._7_1_;
  local_1b0 = _UNK_0045b9c5;
  uVar1 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_38,&local_1b8,0x10);
  if (local_38 == 1) {
    ppuStack_1c8 = &PTR_DAT_00977090;
  }
  else {
    FUN_006d1be8(&local_1d0,uVar1,local_30);
    if (local_1d0 != -2) {
      if (local_1d0 != -1) {
        if (local_1c0 != 0) {
          *param_1 = local_1d0;
          param_1[1] = (long)ppuStack_1c8;
          param_1[2] = local_1c0;
          param_1[3] = 0;
          return;
        }
        if (local_1d0 != 0) {
          __rustc::__rust_dealloc(ppuStack_1c8,local_1d0,1);
        }
      }
      goto LAB_006f484c;
    }
  }
  if ((1 < ((ulong)ppuStack_1c8 & 3) - 2) && (((ulong)ppuStack_1c8 & 3) != 0)) {
    local_1b0 = (undefined7)((long)ppuStack_1c8 + -1);
    uStack_1a9 = (undefined1)((ulong)((long)ppuStack_1c8 + -1) >> 0x38);
    local_1b8 = 3;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_1b0);
  }
LAB_006f484c:
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)__rustc::__rust_alloc(8,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x6764782f6374652f;
    *param_1 = 8;
    param_1[1] = (long)puVar2;
    param_1[2] = 8;
    param_1[3] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  ::alloc::raw_vec::handle_error(1,8);
}


// ===== 006f48a0  std::os::unix::xdg::data_home_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::xdg::data_home_dir */

void __rustcall std::os::unix::xdg::data_home_dir(undefined8 param_1)

{
  FUN_006f4920(param_1,&DAT_0045b9fb,0xd,&DAT_0045ba08,0xc);
  return;
}


// ===== 006f48c0  std::os::unix::xdg::cache_home_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::xdg::cache_home_dir */

void __rustcall std::os::unix::xdg::cache_home_dir(undefined8 param_1)

{
  FUN_006f4920(param_1,&DAT_0045ba14,0xe,&DAT_0045ba22,6);
  return;
}


// ===== 006f48e0  std::os::unix::xdg::state_home_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::xdg::state_home_dir */

void __rustcall std::os::unix::xdg::state_home_dir(undefined8 param_1)

{
  FUN_006f4920(param_1,&DAT_0045ba28,0xe,&DAT_0045ba36,0xc);
  return;
}


// ===== 006f4900  std::os::unix::xdg::config_home_dir =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::xdg::config_home_dir */

void __rustcall std::os::unix::xdg::config_home_dir(undefined8 param_1)

{
  FUN_006f4920(param_1,&DAT_0045ba42,0xf,&DAT_0045ba51,7);
  return;
}


// ===== 006f4920  FUN_006f4920 =====

void FUN_006f4920(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long local_58;
  undefined1 *local_50;
  long lStack_48;
  
  std::sys::env::unix::getenv(&local_58,param_2,param_3);
  if (local_58 != -1) {
    if (lStack_48 != 0) {
      *param_1 = local_58;
      param_1[1] = (long)local_50;
      param_1[2] = lStack_48;
      return;
    }
    if (local_58 != 0) {
      __rustc::__rust_dealloc(local_50,local_58,1);
    }
  }
  std::env::home_dir(&local_58);
  if (local_58 == -1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045b9cc,0x5f,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977ee8);
  }
  lVar2 = local_58;
  puVar1 = local_50;
  if (lStack_48 == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined1 *)__rustc::__rust_alloc(1,1);
    if (puVar1 == (undefined1 *)0x0) {
                    /* try { // try from 006f4a4c to 006f4a57 has its CatchHandler @ 006f4a5c */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,1);
    }
    *puVar1 = 0x2f;
    if (local_58 != 0) {
      __rustc::__rust_dealloc(local_50,local_58,1);
    }
    lStack_48 = 1;
    lVar2 = 1;
  }
                    /* try { // try from 006f49e0 to 006f49f3 has its CatchHandler @ 006f4a6c */
  <std::path::[16]::std::path::Path>::_join(param_1,puVar1,lStack_48,param_4,param_5);
  if (lVar2 == 0) {
    return;
  }
  __rustc::__rust_dealloc(puVar1,lVar2,1);
  return;
}


// ===== 006f4a8c  std::os::unix::xdg::data_dirs =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::xdg::data_dirs */

void __rustcall std::os::unix::xdg::data_dirs(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_1d0;
  undefined **ppuStack_1c8;
  long local_1c0;
  undefined1 local_1b8;
  undefined4 uStack_1b7;
  undefined3 uStack_1b3;
  undefined5 local_1b0;
  undefined1 uStack_1ab;
  undefined2 uStack_1aa;
  long local_38;
  undefined8 local_30;
  
  uStack_1ab = 0;
  local_1b8 = (undefined1)(undefined5)DAT_0045ba58;
  uStack_1b7 = (undefined4)((uint5)(undefined5)DAT_0045ba58 >> 8);
  uStack_1b3 = DAT_0045ba58._5_3_;
  local_1b0 = _UNK_0045ba60;
  uVar3 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_38,&local_1b8,0xe);
  if (local_38 == 1) {
    ppuStack_1c8 = &PTR_DAT_00977090;
  }
  else {
    FUN_006d1be8(&local_1d0,uVar3,local_30);
    if (local_1d0 != -2) {
      if (local_1d0 != -1) {
        if (local_1c0 != 0) {
          *param_1 = local_1d0;
          param_1[1] = (long)ppuStack_1c8;
          param_1[2] = local_1c0;
          param_1[3] = 0;
          return;
        }
        if (local_1d0 != 0) {
          __rustc::__rust_dealloc(ppuStack_1c8,local_1d0,1);
        }
      }
      goto LAB_006f4b64;
    }
  }
  if ((1 < ((ulong)ppuStack_1c8 & 3) - 2) && (((ulong)ppuStack_1c8 & 3) != 0)) {
    lVar5 = (long)ppuStack_1c8 + -1;
    local_1b0 = (undefined5)lVar5;
    uStack_1ab = (undefined1)((ulong)lVar5 >> 0x28);
    uStack_1aa = (undefined2)((ulong)lVar5 >> 0x30);
    local_1b8 = 3;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_1b0);
  }
LAB_006f4b64:
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)__rustc::__rust_alloc(0x1d,1);
  uVar2 = _UNK_0045ba7a;
  uVar3 = _DAT_0045ba65;
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = CONCAT53(_UNK_0045ba75,_DAT_0045ba72);
    puVar4[1] = CONCAT35(_DAT_0045ba72,_UNK_0045ba6d);
    *puVar4 = uVar3;
    *(undefined8 *)((long)puVar4 + 0x15) = uVar2;
    *(undefined8 *)((long)puVar4 + 0xd) = uVar1;
    *param_1 = 0x1d;
    param_1[1] = (long)puVar4;
    param_1[2] = 0x1d;
    param_1[3] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  ::alloc::raw_vec::handle_error(1,0x1d);
}


// ===== 006f4bbc  std::os::unix::process::parent_id =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::process::parent_id */

void __rustcall std::os::unix::process::parent_id(void)

{
  (*(code *)PTR_getppid_009a1a70)();
  return;
}


// ===== 006f4bc0  FUN_006f4bc0 =====

void FUN_006f4bc0(size_t *param_1,char *param_2)

{
  int iVar1;
  char *__s;
  size_t __n;
  void *__dest;
  int *piVar2;
  
  __s = realpath(param_2,(char *)0x0);
  if (__s == (char *)0x0) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *param_1 = 0xffffffffffffffff;
    param_1[1] = (long)iVar1 << 0x20 | 2;
    return;
  }
  __n = strlen(__s);
  if (__n == 0) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(__n,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,__s,__n);
  }
  free(__s);
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 006f4ca0  FUN_006f4ca0 =====

void FUN_006f4ca0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  local_3c = param_2;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(&local_38,param_3,param_4,param_5);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_38,&DAT_0045ba82,2,&local_3c,&DAT_00977f60);
  uVar1 = fcntl(local_3c,3);
  if (uVar1 != 0xffffffff) {
    uVar1 = uVar1 & 3;
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        local_28[0] = 1;
        local_24[0] = 0;
      }
      else {
        local_28[0] = 0;
        local_24[0] = 1;
      }
    }
    else {
      if (uVar1 != 2) goto LAB_006f4d78;
      local_24[0] = 1;
      local_28[0] = 1;
    }
    uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                      (&local_38,&DAT_00377758,4,local_28,&DAT_00977f80);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (uVar2,&DAT_0045ba84,5,local_24,&DAT_00977f80);
  }
LAB_006f4d78:
  param_1[1] = uStack_30;
  *param_1 = local_38;
  return;
}


// ===== 006f4d90  std::sys::fs::unix::chown =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::unix::chown */

undefined ** __rustcall
std::sys::fs::unix::chown(void *param_1,ulong param_2,__uid_t param_3,__gid_t param_4)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  __uid_t *local_1d8;
  __gid_t *p_Stack_1d0;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  __uid_t local_18;
  __gid_t _Stack_14;
  
  local_1d8 = &local_18;
  p_Stack_1d0 = &_Stack_14;
  local_18 = param_3;
  _Stack_14 = param_4;
  if (0x17f < param_2) {
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,&local_1d8,FUN_006d19ac);
    return ppuVar3;
  }
  memcpy(auStack_1c8,param_1,param_2);
  auStack_1c8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_2 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = ::chown(local_40,local_18,_Stack_14);
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


// ===== 006f4eb4  std::sys::fs::unix::chroot =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::unix::chroot */

undefined ** __rustcall std::sys::fs::unix::chroot(void *param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  
  if (0x17f < param_2) {
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,1,FUN_006d1a40);
    return ppuVar3;
  }
  memcpy(auStack_1c8,param_1,param_2);
  auStack_1c8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_2 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = ::chroot(local_40);
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


// ===== 006f4fc0  std::sys::fs::unix::fchown =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::unix::fchown */

ulong __rustcall std::sys::fs::unix::fchown(int param_1,__uid_t param_2,__gid_t param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = ::fchown(param_1,param_2,param_3);
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


// ===== 006f5040  std::sys::fs::unix::lchown =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::unix::lchown */

undefined ** __rustcall
std::sys::fs::unix::lchown(void *param_1,ulong param_2,__uid_t param_3,__gid_t param_4)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  __uid_t *local_1d8;
  __gid_t *p_Stack_1d0;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  __uid_t local_18;
  __gid_t _Stack_14;
  
  local_1d8 = &local_18;
  p_Stack_1d0 = &_Stack_14;
  local_18 = param_3;
  _Stack_14 = param_4;
  if (0x17f < param_2) {
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,&local_1d8,FUN_006d1ac4);
    return ppuVar3;
  }
  memcpy(auStack_1c8,param_1,param_2);
  auStack_1c8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_2 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = ::lchown(local_40,local_18,_Stack_14);
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


// ===== 006f5164  std::sys::fs::unix::mkfifo =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::fs::unix::mkfifo */

undefined ** __rustcall std::sys::fs::unix::mkfifo(void *param_1,ulong param_2,__mode_t param_3)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  __mode_t local_1cc;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  __mode_t *local_18;
  
  local_18 = &local_1cc;
  local_1cc = param_3;
  if (0x17f < param_2) {
    ppuVar3 = (undefined **)FUN_006c9920(param_1,param_2,&local_18,FUN_006d1b58);
    return ppuVar3;
  }
  memcpy(auStack_1c8,param_1,param_2);
  auStack_1c8[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_2 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  iVar1 = ::mkfifo(local_40,local_1cc);
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


// ===== 006f5284  FUN_006f5284 =====

void FUN_006f5284(ulong *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  char *__buf;
  ulong uVar3;
  int *piVar4;
  char *pcVar5;
  ulong uVar6;
  ulong local_48;
  char *pcStack_40;
  ulong local_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __buf = (char *)__rustc::__rust_alloc(0x100,1);
  if (__buf == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x100);
  }
  uVar6 = 0x100;
  local_48 = 0x100;
  local_38 = 0;
  pcStack_40 = __buf;
  uVar3 = readlink(param_2,__buf,0x100);
  if (uVar3 != 0xffffffffffffffff) {
    uVar6 = 0x100;
    do {
      local_38 = uVar3;
      if (uVar6 != uVar3) {
        uVar2 = local_48;
        pcVar5 = pcStack_40;
        if (uVar3 < uVar6) {
          uVar2 = uVar3;
          if (uVar3 == 0) {
            __rustc::__rust_dealloc(__buf,uVar6,1);
            pcVar5 = (char *)0x1;
          }
          else {
            pcVar5 = (char *)__rustc::__rust_realloc(__buf,uVar6,1,uVar3);
            if (pcVar5 == (char *)0x0) {
                    /* try { // try from 006f53a0 to 006f53f7 has its CatchHandler @ 006f5408 */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(1,uVar3);
            }
          }
        }
        pcStack_40 = pcVar5;
        local_48 = uVar2;
        param_1[1] = (ulong)pcStack_40;
        *param_1 = local_48;
        param_1[2] = local_38;
        return;
      }
                    /* try { // try from 006f52ec to 006f5303 has its CatchHandler @ 006f540c */
      FUN_006cecec(&local_48,uVar6,1,1,1);
      __buf = pcStack_40;
      uVar6 = local_48;
      uVar3 = readlink(param_2,pcStack_40,local_48);
    } while (uVar3 != 0xffffffffffffffff);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  if (uVar6 == 0) {
    return;
  }
  __rustc::__rust_dealloc(__buf,uVar6,1);
  return;
}


// ===== 006f5430  std::sys::env::unix::getenv =====

/* WARNING: Removing unreachable block (ram,0x006f54a4) */
/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::env::unix::getenv */

void __rustcall std::sys::env::unix::getenv(long *param_1,void *param_2,ulong param_3)

{
  undefined8 uVar1;
  long local_1e0;
  undefined **local_1d8;
  long lStack_1d0;
  undefined1 local_1c8 [8];
  long local_1c0 [47];
  long local_48;
  undefined8 local_40;
  
  if (param_3 < 0x180) {
    memcpy(local_1c8,param_2,param_3);
    local_1c8[param_3] = 0;
    uVar1 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                      (&local_48,local_1c8,param_3 + 1);
    if (local_48 == 1) {
      local_1e0 = -2;
      local_1d8 = &PTR_DAT_00977090;
      goto LAB_006f54c0;
    }
    FUN_006d1be8(&local_1e0,uVar1,local_40);
  }
  else {
    FUN_006c9354(&local_1e0,param_2,param_3);
  }
  if (local_1e0 != -2) {
    param_1[2] = lStack_1d0;
    param_1[1] = (long)local_1d8;
    *param_1 = local_1e0;
    return;
  }
LAB_006f54c0:
  if ((1 < ((ulong)local_1d8 & 3) - 2) && (((ulong)local_1d8 & 3) != 0)) {
    local_1c0[0] = (long)local_1d8 + -1;
    local_1c8[0] = 3;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_1c0);
  }
  *param_1 = -1;
  return;
}


// ===== 006f554c  std::sys::env::unix::setenv =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::env::unix::setenv */

undefined ** __rustcall
std::sys::env::unix::setenv(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  undefined **ppuVar1;
  void **ppvVar2;
  code *pcVar3;
  void *local_390;
  ulong uStack_388;
  undefined1 auStack_380 [384];
  uint local_200 [2];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [384];
  uint local_58 [2];
  undefined8 local_50;
  
  ppvVar2 = &local_390;
  local_390 = param_3;
  uStack_388 = param_4;
  if (0x17f < param_2) {
    pcVar3 = FUN_006d1d64;
LAB_006f565c:
    ppuVar1 = (undefined **)FUN_006c9920(param_1,param_2,ppvVar2,pcVar3);
    return ppuVar1;
  }
  memcpy(auStack_380,param_1,param_2);
  auStack_380[param_2] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_200,auStack_380,param_2 + 1);
  if ((local_200[0] & 1) == 0) {
    local_1e8 = local_1f8;
    uStack_1e0 = uStack_1f0;
    if (0x17f < param_4) {
      pcVar3 = FUN_006d036c;
      ppvVar2 = (void **)&local_1e8;
      param_1 = param_3;
      param_2 = param_4;
      goto LAB_006f565c;
    }
    memcpy(auStack_1d8,param_3,param_4);
    auStack_1d8[param_4] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (local_58,auStack_1d8,param_4 + 1);
    if ((local_58[0] & 1) == 0) {
      ppuVar1 = (undefined **)FUN_006d036c(&local_1e8,local_50);
      return ppuVar1;
    }
  }
  return &PTR_DAT_00977090;
}


// ===== 006f5678  std::sys::env::unix::unsetenv =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::env::unix::unsetenv */

undefined ** __rustcall std::sys::env::unix::unsetenv(void *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  undefined8 local_40;
  
  if (0x17f < param_2) {
    ppuVar2 = (undefined **)FUN_006c9920(param_1,param_2,1,FUN_006d1e20);
    return ppuVar2;
  }
  memcpy(auStack_1c8,param_1,param_2);
  auStack_1c8[param_2] = 0;
  uVar1 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (local_48,auStack_1c8,param_2 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00977090;
  }
  ppuVar2 = (undefined **)FUN_006d1e20(uVar1,local_40);
  return ppuVar2;
}


// ===== 006f5728  FUN_006f5728 =====

void FUN_006f5728(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 006f5734  std::sys::path::unix::absolute =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::path::unix::absolute */

void __rustcall std::sys::path::unix::absolute(ulong *param_1,short *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  ulong __n;
  char *__src;
  undefined1 auVar6 [16];
  undefined1 local_138 [16];
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  undefined5 uStack_fd;
  ulong local_f8;
  undefined2 *puStack_f0;
  ulong local_e8;
  undefined1 local_e0 [16];
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte local_a0 [8];
  char *local_98;
  ulong uStack_90;
  char *local_78;
  ulong uStack_70;
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  auVar6 = <std::path::[16]::std::path::Path>::_strip_prefix(param_2,param_3,&DAT_0045b467,1);
  local_138 = auVar1;
  if (auVar6._0_8_ != 0) {
    local_138 = auVar6;
  }
  if (local_138._8_8_ == 0) {
    uStack_fe = false;
  }
  else {
    uStack_fe = *local_138._0_8_ == '/';
  }
  local_128 = 0xff;
  uStack_100 = 0x201;
  if ((param_3 == 0) || ((char)*param_2 != '/')) {
    std::env::current_dir(local_e0);
    if (local_e0._0_8_ == 0xffffffffffffffff) {
      *param_1 = 0xffffffffffffffff;
      param_1[1] = local_e0._8_8_;
      return;
    }
  }
  else if (((param_3 == 1) || (*param_2 != 0x2f2f)) ||
          ((2 < param_3 && (*param_2 == 0x2f2f && (char)param_2[1] == '/')))) {
    local_e0._0_8_ = 0;
    local_d0 = 0;
    local_e0._8_8_ = (undefined2 *)0x1;
  }
  else {
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(local_e0,local_138);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_e0._8_8_ = __rustc::__rust_alloc(2,1);
    if ((undefined2 *)local_e0._8_8_ == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      ::alloc::raw_vec::handle_error(1,2);
    }
    local_d0 = 2;
    *(undefined2 *)local_e0._8_8_ = 0x2f2f;
    local_e0._0_8_ = 2;
  }
  uStack_c8 = uStack_120;
  uStack_a8 = CONCAT53(uStack_fd,CONCAT12(uStack_fe,uStack_100));
  uStack_b8 = uStack_110;
  local_c0 = local_118;
  uStack_b0 = local_108;
  uVar4 = local_d0;
  puVar5 = (undefined2 *)local_e0._8_8_;
  local_f8 = local_e0._0_8_;
  puStack_f0 = (undefined2 *)local_e0._8_8_;
  local_d0 = CONCAT71(uStack_127,local_128);
  local_e0 = local_138;
  do {
                    /* try { // try from 006f586c to 006f597b has its CatchHandler @ 006f5a98 */
    local_e8 = uVar4;
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(local_a0,local_e0);
    if (local_a0[0] == 0xff) {
      uVar3 = local_e8;
      if ((((param_3 != 0) && (*(char *)((long)param_2 + (param_3 - 1)) == '/')) &&
          (uVar3 = uVar4, uVar4 != 0)) && (*(char *)((long)puStack_f0 + (uVar4 - 1)) != '/')) {
        if (local_f8 == uVar4) {
                    /* try { // try from 006f5a68 to 006f5a7f has its CatchHandler @ 006f5a94 */
          FUN_006cecec(&local_f8,uVar4,1,1,1);
          uVar4 = local_e8;
        }
        *(undefined1 *)((long)puStack_f0 + uVar4) = 0x2f;
        uVar3 = uVar4 + 1;
      }
      local_e8 = uVar3;
      param_1[1] = (ulong)puStack_f0;
      *param_1 = local_f8;
      param_1[2] = local_e8;
      return;
    }
    uVar3 = (ulong)local_a0[0] - 5;
    if (local_a0[0] < 6) {
      uVar3 = 0;
    }
    if ((long)uVar3 < 2) {
      __n = uVar3;
      __src = &DAT_0045b2ad;
      if (uVar3 != 0) goto joined_r0x006f58d4;
      __n = uStack_70;
      __src = local_78;
      if (uVar4 != 0) goto LAB_006f58d8;
LAB_006f590c:
      bVar2 = false;
      if (__n == 0) goto LAB_006f5914;
LAB_006f58ec:
      if (*__src != '/') {
        if (bVar2) goto LAB_006f591c;
        goto LAB_006f5930;
      }
      uVar4 = 0;
      local_e8 = 0;
      if (__n <= local_f8) goto LAB_006f5854;
LAB_006f5944:
      FUN_006cecec(&local_f8,uVar4,__n,1,1);
      uVar4 = local_e8;
      puVar5 = puStack_f0;
LAB_006f5854:
      memcpy((void *)((long)puVar5 + uVar4),__src,__n);
    }
    else {
      if (uVar3 == 2) {
        __n = 1;
        __src = &DAT_0045b467;
      }
      else {
        __n = uStack_90;
        __src = local_98;
        if (uVar3 == 3) {
          __n = 2;
          __src = &DAT_0045b468;
        }
      }
joined_r0x006f58d4:
      if (uVar4 == 0) goto LAB_006f590c;
LAB_006f58d8:
      bVar2 = *(char *)((long)puVar5 + (uVar4 - 1)) != '/';
      if (__n != 0) goto LAB_006f58ec;
LAB_006f5914:
      if (bVar2) {
LAB_006f591c:
        if (local_f8 == uVar4) {
          FUN_006cecec(&local_f8,uVar4,1,1,1);
          uVar4 = local_e8;
          puVar5 = puStack_f0;
        }
        *(undefined1 *)((long)puVar5 + uVar4) = 0x2f;
        uVar4 = uVar4 + 1;
        local_e8 = uVar4;
      }
LAB_006f5930:
      if (local_f8 - uVar4 < __n) goto LAB_006f5944;
      if (__n != 0) goto LAB_006f5854;
    }
    uVar4 = uVar4 + __n;
  } while( true );
}


// ===== 006f5ab8  std::sys::pipe::unix::pipe =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::pipe::unix::pipe */

void __rustcall std::sys::pipe::unix::pipe(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 0;
  iVar1 = pipe2(local_28,0x80000);
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
                    /* try { // try from 006f5b84 to 006f5b9b has its CatchHandler @ 006f5ba0 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00373580,8,&PTR_s__rustc_48a229ceaefd4985c50990b14_009786b0);
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00373580,8,&PTR_s__rustc_48a229ceaefd4985c50990b14_009786b0);
}


// ===== 006f5bb4  std::sys::paths::unix::chdir =====

/* WARNING: Removing unreachable block (ram,0x006f5c1c) */
/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::paths::unix::chdir */

undefined ** __rustcall std::sys::paths::unix::chdir(void *param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  int local_1d8;
  int local_1d4;
  undefined **local_1d0;
  undefined1 auStack_1c8 [384];
  long local_48;
  char *local_40;
  
  if (param_2 < 0x180) {
    memcpy(auStack_1c8,param_1,param_2);
    auStack_1c8[param_2] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_48,auStack_1c8,param_2 + 1);
    if (local_48 != 1) {
      local_1d4 = ::chdir(local_40);
LAB_006f5c5c:
      if (local_1d4 == 0) {
        return (undefined **)0x0;
      }
      piVar2 = (int *)__errno();
      iVar1 = *piVar2;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      return (undefined **)((long)iVar1 << 0x20 | 2);
    }
    local_1d0 = &PTR_DAT_00977090;
  }
  else {
    FUN_006c9890(&local_1d8,param_1,param_2);
    if (local_1d8 == 0) goto LAB_006f5c5c;
  }
  return local_1d0;
}


// ===== 006f5ccc  std::sys::random::linux::hashmap_random_keys =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::random::linux::hashmap_random_keys */

undefined1  [16] __rustcall std::sys::random::linux::hashmap_random_keys(void)

{
  undefined1 auVar1 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_006f5cfc(&local_20,0x10,1);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}


// ===== 006f5cfc  FUN_006f5cfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5cfc(int *param_1,int *param_2,uint param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  int *__buf;
  undefined **ppuVar9;
  undefined8 local_220;
  undefined4 local_218;
  undefined2 local_214;
  int local_210;
  int local_20c;
  undefined **local_208;
  undefined1 local_200 [7];
  uint uStack_1f9;
  undefined1 local_1f5;
  uint uStack_1f4;
  int *local_1f0;
  code *pcStack_1e8;
  int local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  
  puVar1 = PTR_getrandom_0099f7d8;
  __buf = param_1;
  if (DAT_009a6de8 != '\0') {
    if (param_2 == (int *)0x0) {
      return;
    }
    if (param_3 == 0) {
      if (PTR_getrandom_0099f7d8 == (undefined *)0x0) {
        while( true ) {
          local_210 = 0;
          param_1 = (int *)syscall(0x116,__buf,param_2,0);
          if (param_1 == (int *)0xffffffffffffffff) {
            piVar6 = (int *)__errno();
            param_1 = piVar6;
            do {
              iVar4 = *piVar6;
              if (10 < iVar4) goto LAB_006f5fac;
              if (iVar4 == 1) goto LAB_006f5fbc;
              if (iVar4 != 4) goto LAB_006f6210;
              local_210 = 0;
              param_1 = (int *)syscall(0x116,__buf,param_2,0);
            } while (param_1 == (int *)0xffffffffffffffff);
          }
          piVar6 = (int *)((long)param_2 - (long)param_1);
          if (param_2 < param_1) break;
          __buf = (int *)((long)__buf + (long)param_1);
          param_2 = piVar6;
          if (piVar6 == (int *)0x0) {
            return;
          }
        }
      }
      else {
        while( true ) {
          local_210 = 0;
          param_1 = (int *)getrandom(__buf,param_2,0);
          if (param_1 == (int *)0xffffffffffffffff) {
            piVar6 = (int *)__errno();
            param_1 = piVar6;
            do {
              iVar4 = *piVar6;
              if (10 < iVar4) goto LAB_006f5fac;
              if (iVar4 == 1) goto LAB_006f5fbc;
              if (iVar4 != 4) goto LAB_006f6210;
              local_210 = 0;
              param_1 = (int *)getrandom(__buf,param_2,0);
            } while (param_1 == (int *)0xffffffffffffffff);
          }
          piVar6 = (int *)((long)param_2 - (long)param_1);
          if (param_2 < param_1) break;
          __buf = (int *)((long)__buf + (long)param_1);
          param_2 = piVar6;
          if (piVar6 == (int *)0x0) {
            return;
          }
        }
      }
    }
    else {
      while( true ) {
        if (puVar1 == (undefined *)0x0) {
          bVar3 = DAT_009a6dec == '\0';
          local_210 = 4;
          if (bVar3) {
            local_210 = 1;
          }
          param_1 = (int *)syscall(0x116,__buf,param_2);
          if (param_1 == (int *)0xffffffffffffffff) {
            piVar6 = (int *)__errno();
            param_1 = piVar6;
            do {
              iVar4 = *piVar6;
              if (iVar4 < 0xb) {
                if (iVar4 == 1) goto LAB_006f5fbc;
                if (iVar4 != 4) goto LAB_006f6210;
              }
              else {
                if (iVar4 == 0xb) goto LAB_006f5fc4;
                if (iVar4 == 0x26) goto LAB_006f5fbc;
                if (iVar4 != 0x16) goto LAB_006f6210;
                if (bVar3) goto LAB_006f620c;
                DAT_009a6dec = '\0';
              }
              bVar3 = DAT_009a6dec == '\0';
              local_210 = 4;
              if (bVar3) {
                local_210 = 1;
              }
              param_1 = (int *)syscall(0x116,__buf,param_2);
            } while (param_1 == (int *)0xffffffffffffffff);
          }
        }
        else {
          bVar3 = DAT_009a6dec == '\0';
          local_210 = 4;
          if (bVar3) {
            local_210 = 1;
          }
          param_1 = (int *)getrandom(__buf,param_2);
          if (param_1 == (int *)0xffffffffffffffff) {
            piVar6 = (int *)__errno();
            param_1 = piVar6;
            do {
              iVar4 = *piVar6;
              if (iVar4 < 0xb) {
                if (iVar4 == 1) goto LAB_006f5fbc;
                if (iVar4 != 4) goto LAB_006f6210;
              }
              else {
                if (iVar4 == 0xb) goto LAB_006f5fc4;
                if (iVar4 == 0x26) goto LAB_006f5fbc;
                if (iVar4 != 0x16) goto LAB_006f6210;
                if (bVar3) goto LAB_006f620c;
                DAT_009a6dec = '\0';
              }
              bVar3 = DAT_009a6dec == '\0';
              local_210 = 4;
              if (bVar3) {
                local_210 = 1;
              }
              param_1 = (int *)getrandom(__buf,param_2);
            } while (param_1 == (int *)0xffffffffffffffff);
          }
        }
        piVar6 = (int *)((long)param_2 - (long)param_1);
        if (param_2 < param_1) break;
        param_2 = piVar6;
        __buf = (int *)((long)__buf + (long)param_1);
        if (piVar6 == (int *)0x0) {
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (param_1,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978078);
  }
LAB_006f5fd0:
  if (((param_3 & 1) == 0) && ((char)DAT_009a6f30 == '\0')) {
    local_214 = 0;
    local_200._0_4_ = (undefined4)DAT_0045bb45;
    local_200._4_2_ = (undefined2)((ulong)DAT_0045bb45 >> 0x20);
    local_200[6] = (undefined1)((ulong)DAT_0045bb45 >> 0x30);
    local_218 = 1;
    uStack_1f9 = 0x6d6f646e;
    local_220 = _s__00373250;
    local_1f5 = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(&local_80,local_200,0xc);
    if (CONCAT44(uStack_7c,local_80) == 1) {
      local_208 = &PTR_DAT_00977090;
    }
    else {
      FUN_006ea8b8(&local_210,local_78,&local_220);
      if (local_210 != 1) {
        local_200._0_4_ = local_20c;
        local_200._4_2_ = 1;
        local_200[6] = 0;
        uStack_1f9 = uStack_1f9 & 0xffffff00;
        do {
          if ((char)DAT_009a6f30 != '\0') {
LAB_006f60b4:
            uVar5 = close(local_20c);
            param_1 = (int *)(ulong)uVar5;
            goto LAB_006f60bc;
          }
          iVar4 = poll((pollfd *)local_200,1,-1);
          if (iVar4 != -1) {
            if (iVar4 == 1) {
              if (CONCAT11((undefined1)uStack_1f9,local_200[6]) != 1) {
                core::panicking::assert_failed<i16,i16>(0,local_200 + 6,&DAT_00392a98,0);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x6f62b8);
                (*pcVar2)();
              }
              DAT_009a6f30 = 1;
              goto LAB_006f60b4;
            }
            goto LAB_006f61c4;
          }
          piVar6 = (int *)__errno();
          if (*piVar6 != 4) {
LAB_006f61c4:
                    /* try { // try from 006f61c4 to 006f61ff has its CatchHandler @ 006f62fc */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045bb6a,0x35,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978030);
          }
        } while( true );
      }
    }
    local_200._0_4_ = SUB84(local_208,0);
    local_200._4_2_ = (undefined2)((ulong)local_208 >> 0x20);
    local_200[6] = (undefined1)((ulong)local_208 >> 0x30);
    uStack_1f9._0_1_ = (undefined1)((ulong)local_208 >> 0x38);
                    /* try { // try from 006f6290 to 006f62b3 has its CatchHandler @ 006f62b8 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0045bb50,0x1a,local_200,&PTR_FUN_009773e8,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_00978000);
  }
LAB_006f60bc:
  if (((int)DAT_009a6df8 != 0) &&
     (ppuVar9 = (undefined **)FUN_006bdc78(param_1), ppuVar9 != (undefined **)0x0)) {
LAB_006f6250:
    local_200._0_4_ = SUB84(ppuVar9,0);
    local_200._4_2_ = (undefined2)((ulong)ppuVar9 >> 0x20);
    local_200[6] = (undefined1)((ulong)ppuVar9 >> 0x30);
    uStack_1f9._0_1_ = (undefined1)((ulong)ppuVar9 >> 0x38);
                    /* try { // try from 006f6254 to 006f6277 has its CatchHandler @ 006f62e4 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0045bb84,0x1e,local_200,&PTR_FUN_009773e8,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_00978048);
  }
  puVar1 = PTR_PTR_0099f738;
  if (param_2 != (int *)0x0) {
    do {
      piVar6 = (int *)read(DAT_009a6df8._4_4_,__buf,(size_t)param_2);
      if (piVar6 == (int *)0xffffffffffffffff) {
        puVar7 = (uint *)__errno();
        uVar5 = *puVar7;
        if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        ppuVar9 = (undefined **)((ulong)uVar5 << 0x20 | 2);
        local_200._0_4_ = 1;
        local_200._4_2_ = 0;
        local_200[6] = 0;
        uStack_1f9 = 0x200;
        local_1f5 = 0;
        uStack_1f4 = uVar5;
                    /* try { // try from 006f6148 to 006f6157 has its CatchHandler @ 006f62cc */
        lVar8 = core::io::error::os_functions::get_os_functions();
        iVar4 = (**(code **)(lVar8 + 0x10))(uVar5);
        if (iVar4 == 0) goto LAB_006f6250;
      }
      else {
        ppuVar9 = &PTR_DAT_00976fb0;
        if (piVar6 == (int *)0x0) goto LAB_006f6250;
        if (param_2 < piVar6) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (piVar6,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976fc8);
        }
        __buf = (int *)((long)__buf + (long)piVar6);
        param_2 = (int *)((long)param_2 - (long)piVar6);
      }
    } while (param_2 != (int *)0x0);
  }
  return;
LAB_006f5fac:
  if (iVar4 == 0xb) {
LAB_006f5fc4:
    if (local_210 != 1) {
      iVar4 = 0xb;
      goto LAB_006f6210;
    }
  }
  else {
    if (iVar4 != 0x26) goto LAB_006f6210;
LAB_006f5fbc:
    DAT_009a6de8 = '\0';
  }
  goto LAB_006f5fd0;
LAB_006f620c:
  iVar4 = 0x16;
LAB_006f6210:
  local_200._0_4_ = SUB84(&local_80,0);
  local_200._4_2_ = (undefined2)((ulong)&local_80 >> 0x20);
  local_200[6] = (undefined1)((ulong)&local_80 >> 0x30);
  uStack_1f9._0_1_ = (undefined1)((ulong)&local_80 >> 0x38);
  uStack_1f9 = CONCAT31(0x705b68,(undefined1)uStack_1f9);
  local_1f5 = 0;
  uStack_1f4 = 0;
  local_1f0 = &local_210;
  pcStack_1e8 = FUN_00705f28;
  local_80 = iVar4;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_0036a4d1,local_200,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978060);
}


// ===== 006f6310  std::thread::current::id::get =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::current::id::get */

void __rustcall std::thread::current::id::get(void)

{
  pthread_key_t __key;
  
  if (DAT_009a6f60 != 0) {
    pthread_getspecific((pthread_key_t)DAT_009a6f60);
    return;
  }
  __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init
                    (&DAT_009a6f60);
  pthread_getspecific(__key);
  return;
}


// ===== 006f6340  std::thread::current::id::set =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::thread::current::id::set */

int __rustcall std::thread::current::id::set(void *param_1)

{
  int iVar1;
  pthread_key_t __key;
  
  if (DAT_009a6f60 != 0) {
    iVar1 = pthread_setspecific((pthread_key_t)DAT_009a6f60,param_1);
    return iVar1;
  }
  __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init
                    (&DAT_009a6f60);
  iVar1 = pthread_setspecific(__key,param_1);
  return iVar1;
}


// ===== 006f6390  FUN_006f6390 =====

undefined8 FUN_006f6390(ulong *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  size_t *psVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  size_t sVar11;
  char *__s;
  ulong uVar12;
  ulong uVar13;
  size_t local_c0;
  char *pcStack_b8;
  ulong local_b0;
  size_t local_a8;
  char *pcStack_a0;
  size_t local_98;
  char *pcStack_90;
  ulong local_88;
  ulong uStack_80;
  size_t local_78;
  ulong uStack_70;
  ulong local_68;
  undefined1 local_60;
  char *local_58;
  
  uVar2 = *param_1;
  __s = (char *)param_1[1];
  uVar13 = param_1[2];
  uVar3 = param_1[3];
  uVar12 = (ulong)(ushort)uVar3;
  if (__s == (char *)0x0) {
    if (uVar2 == 0) goto LAB_006f6434;
    if (param_3[2] == 0) goto LAB_006f6488;
    local_b0 = 0;
    local_c0 = 0;
    pcStack_b8 = (char *)0x1;
    lVar5 = param_3[3];
  }
  else {
    if (uVar2 == 0) {
LAB_006f6434:
                    /* try { // try from 006f6434 to 006f643b has its CatchHandler @ 006f6748 */
      std::env::current_exe(&local_a8);
      if (local_a8 != 0xffffffffffffffff) goto LAB_006f6518;
      if ((1 < ((ulong)pcStack_a0 & 3) - 2) && (((ulong)pcStack_a0 & 3) != 0)) {
        local_58 = pcStack_a0 + -1;
        local_60 = 3;
                    /* try { // try from 006f6470 to 006f6477 has its CatchHandler @ 006f672c */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
      }
      local_98 = 0;
      pcStack_b8 = (char *)0x1;
      local_c0 = 0;
    }
    else if ((param_3[2] == 0) && (*__s == '\0')) {
LAB_006f6488:
      if ((param_3[3] != -1) && (param_3[5] != 0)) {
        lVar5 = param_3[5] * 0x30;
        puVar4 = (ulong *)(param_3[4] + 0x20);
        do {
          if (((puVar4[-1] <= uVar2) && (uVar2 < *puVar4)) && (sVar11 = puVar4[-2], sVar11 != 0)) {
            __s = (char *)puVar4[-3];
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            pcStack_b8 = (char *)__rustc::__rust_alloc(sVar11,1);
            local_98 = sVar11;
            goto joined_r0x006f64f0;
          }
          lVar5 = lVar5 + -0x30;
          puVar4 = puVar4 + 6;
        } while (lVar5 != 0);
      }
      std::env::current_exe(&local_a8);
      if (local_a8 == 0xffffffffffffffff) {
        local_b0 = 0;
        local_c0 = 0;
        pcStack_b8 = (char *)0x1;
        if ((1 < ((ulong)pcStack_a0 & 3) - 2) && (((ulong)pcStack_a0 & 3) != 0)) {
          pcStack_a0 = pcStack_a0 + -1;
          local_a8 = 0xffffffffffffff03;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pcStack_a0);
        }
        lVar5 = param_3[3];
        goto joined_r0x006f6570;
      }
LAB_006f6518:
      local_c0 = local_a8;
      pcStack_b8 = pcStack_a0;
    }
    else {
      local_98 = strlen(__s);
      if (local_98 == 0) {
        pcStack_b8 = (char *)0x1;
        local_c0 = local_98;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pcStack_b8 = (char *)__rustc::__rust_alloc(local_98,1);
joined_r0x006f64f0:
        if (pcStack_b8 == (char *)0x0) {
                    /* try { // try from 006f64f4 to 006f655f has its CatchHandler @ 006f6748 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,local_98);
        }
        memcpy(pcStack_b8,__s,local_98);
        local_c0 = local_98;
      }
    }
    lVar5 = param_3[3];
    local_b0 = local_98;
  }
joined_r0x006f6570:
  if ((lVar5 != -1) && (1 < local_b0)) {
    uVar9 = 0;
    do {
      if (*(short *)(pcStack_b8 + uVar9) == 0x2f21) {
        if (local_b0 < uVar9) {
                    /* try { // try from 006f6700 to 006f6717 has its CatchHandler @ 006f674c */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977ed0);
        }
        if (param_3[5] != 0) {
          puVar6 = (undefined8 *)(param_3[4] + 0x28);
          lVar5 = param_3[5] * 0x30;
          goto LAB_006f65ec;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (local_b0 - 1 != uVar9);
  }
LAB_006f6610:
  sVar11 = 0;
LAB_006f6614:
  local_78 = 8;
  uVar9 = 0;
  if (uVar13 != 0) {
    uVar9 = uVar12;
  }
  uVar1 = 8;
  if ((ushort)uVar3 != 0 && uVar13 != 0) {
    uVar1 = uVar13;
  }
  if (uVar9 == 0) {
    uVar12 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_78 = __rustc::__rust_alloc(uVar9 << 4,8);
    if (local_78 == 0) {
                    /* try { // try from 006f671c to 006f6727 has its CatchHandler @ 006f673c */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar9 << 4);
    }
    puVar6 = (undefined8 *)(local_78 + 8);
    puVar8 = (undefined8 *)(uVar1 + 0x28);
    do {
      uVar10 = *puVar8;
      uVar9 = uVar9 - 1;
      puVar6[-1] = puVar8[-3];
      *puVar6 = uVar10;
      puVar6 = puVar6 + 2;
      puVar8 = puVar8 + 7;
    } while (uVar9 != 0);
  }
  lVar5 = param_3[2];
  local_a8 = sVar11;
  pcStack_a0 = __s;
  local_98 = local_c0;
  pcStack_90 = pcStack_b8;
  local_88 = local_b0;
  uStack_80 = uVar12;
  uStack_70 = uVar12;
  local_68 = uVar2;
  if (lVar5 == *param_3) {
                    /* try { // try from 006f669c to 006f66a3 has its CatchHandler @ 006f6730 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::Library>>::
    grow_one(param_3);
  }
  psVar7 = (size_t *)(param_3[1] + lVar5 * 0x48);
  psVar7[3] = (size_t)pcStack_90;
  psVar7[2] = local_98;
  psVar7[5] = uStack_80;
  psVar7[4] = local_88;
  psVar7[7] = uStack_70;
  psVar7[6] = local_78;
  psVar7[8] = local_68;
  psVar7[1] = (size_t)pcStack_a0;
  *psVar7 = local_a8;
  param_3[2] = lVar5 + 1;
  return 0;
  while( true ) {
    lVar5 = lVar5 + -0x30;
    puVar6 = puVar6 + 6;
    if (lVar5 == 0) break;
LAB_006f65ec:
    if (((ulong)puVar6[-2] <= uVar2) && (uVar2 < (ulong)puVar6[-1])) {
      __s = (char *)*puVar6;
      sVar11 = 1;
      goto LAB_006f6614;
    }
  }
  goto LAB_006f6610;
}


// ===== 006f6758  FUN_006f6758 =====

bool FUN_006f6758(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long local_2960;
  char local_2958;
  long local_2950;
  undefined1 auStack_2948 [2312];
  undefined8 local_2040;
  undefined8 local_1040;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
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
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
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
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined1 local_58;
  undefined8 uStack_57;
  undefined7 uStack_4f;
  undefined4 local_48;
  undefined1 local_44;
  
  local_1040 = 0;
  local_2040 = 0;
  local_2960 = 0;
  local_5c = 0;
  uStack_4f = 0;
  uStack_57 = 0;
  local_60 = 0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  uStack_190 = 0;
  local_198 = 0;
  uStack_180 = 0;
  local_188 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  local_48 = 0;
  local_44 = 0;
  local_5a = 0;
  local_58 = 0;
  memset(auStack_2948,0,0x2780);
  local_68 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  miniz_oxide::inflate::core::decompress
            (&local_2960,auStack_2948,param_1,param_2,param_3,param_4,0,5);
  return (local_2958 == '\0' && local_2960 == param_2) && local_2950 == param_4;
}


// ===== 006f6894  std::os::unix::net::addr::sockaddr_un =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::net::addr::sockaddr_un */

void __rustcall
std::os::unix::net::addr::sockaddr_un(undefined4 *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined **ppuVar3;
  char *pcVar4;
  ulong uVar5;
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
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  uStack_3c = 0;
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
  local_44 = 0;
  uStack_50 = 0;
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      memcpy(&local_a0,param_2,0);
      iVar2 = 2;
      goto LAB_006f6988;
    }
    ppuVar3 = &PTR_DAT_009780d8;
    pcVar4 = param_2;
    uVar5 = param_3;
    do {
      if (*pcVar4 == '\0') goto LAB_006f692c;
      uVar5 = uVar5 - 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar5 != 0);
  }
  else {
    lVar1 = core::slice::memchr::memchr_aligned(0,param_2,param_3);
    if (lVar1 == 1) {
      ppuVar3 = &PTR_DAT_009780d8;
      goto LAB_006f692c;
    }
  }
  if (param_3 < 0x6c) {
    memcpy(&local_a0,param_2,param_3);
    iVar2 = 2;
    if (*param_2 != '\0') {
      iVar2 = 3;
    }
    iVar2 = iVar2 + (int)param_3;
LAB_006f6988:
    param_1[0x1d] = iVar2;
    *(undefined2 *)(param_1 + 1) = 1;
    *(undefined8 *)((long)param_1 + 0x3e) = uStack_68;
    *(undefined8 *)((long)param_1 + 0x36) = local_70;
    *(undefined8 *)((long)param_1 + 0x4e) = uStack_58;
    *(undefined8 *)((long)param_1 + 0x46) = local_60;
    *(ulong *)((long)param_1 + 0x5e) = CONCAT44(local_44,uStack_48);
    *(undefined8 *)((long)param_1 + 0x56) = uStack_50;
    *(undefined8 *)((long)param_1 + 0x6a) = uStack_3c;
    *(ulong *)((long)param_1 + 0x62) = CONCAT44(uStack_40,local_44);
    *(undefined8 *)((long)param_1 + 0xe) = uStack_98;
    *(undefined8 *)((long)param_1 + 6) = local_a0;
    *(undefined8 *)((long)param_1 + 0x1e) = uStack_88;
    *(undefined8 *)((long)param_1 + 0x16) = local_90;
    *(undefined8 *)((long)param_1 + 0x2e) = uStack_78;
    *(undefined8 *)((long)param_1 + 0x26) = local_80;
    *param_1 = 0;
    return;
  }
  ppuVar3 = &PTR_DAT_009780f0;
LAB_006f692c:
  *(undefined ***)(param_1 + 2) = ppuVar3;
  *param_1 = 1;
  return;
}


// ===== 006f69dc  std::os::unix::net::ancillary::send_vectored_with_ancillary_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::os::unix::net::ancillary::send_vectored_with_ancillary_to */

undefined1  [16] __rustcall
std::os::unix::net::ancillary::send_vectored_with_ancillary_to
          (int *param_1,char *param_2,ulong param_3,iovec *param_4,size_t param_5,
          undefined8 *param_6)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  int *piVar4;
  undefined **ppuVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  ushort local_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined4 uStack_194;
  undefined2 uStack_190;
  undefined2 uStack_18e;
  undefined4 uStack_18c;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined4 uStack_184;
  undefined2 local_180;
  undefined2 uStack_17e;
  undefined4 uStack_17c;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined4 uStack_174;
  undefined2 uStack_170;
  undefined2 uStack_16e;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined2 local_160;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 local_144;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined6 uStack_13c;
  undefined2 uStack_136;
  undefined2 local_134;
  msghdr local_130;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
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
  undefined2 local_60;
  
  if (param_2 == (char *)0x0) {
    uVar9 = 0;
    uVar8 = 0;
    local_130.msg_namelen = 0;
    local_60 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
  }
  else {
    uStack_13c = 0;
    uStack_136 = 0;
    uStack_140 = 0;
    uStack_13e = 0;
    uStack_198 = 0;
    uStack_196 = 0;
    uStack_194 = 0;
    local_1a0 = 0;
    uStack_19e = 0;
    uStack_19c = 0;
    uStack_188 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_190 = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_178 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    local_180 = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_168 = 0;
    uStack_166 = 0;
    uStack_164 = 0;
    uStack_170 = 0;
    uStack_16e = 0;
    uStack_16c = 0;
    uStack_158 = 0;
    uStack_156 = 0;
    uStack_154 = 0;
    local_160 = 0;
    uStack_15e = 0;
    uStack_15c = 0;
    uStack_148 = 0;
    uStack_146 = 0;
    local_144 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    if (0xf < param_3) {
      lVar1 = core::slice::memchr::memchr_aligned(0,param_2,param_3);
      if (lVar1 != 1) goto LAB_006f6ab0;
      ppuVar5 = &PTR_DAT_009780d8;
LAB_006f6ac0:
      uVar2 = 1;
      goto LAB_006f6c20;
    }
    if (param_3 == 0) {
      uVar8 = 0;
      local_130.msg_namelen = 2;
      uVar9 = 1;
    }
    else {
      ppuVar5 = &PTR_DAT_009780d8;
      pcVar7 = param_2;
      uVar2 = param_3;
      do {
        if (*pcVar7 == '\0') goto LAB_006f6ac0;
        uVar2 = uVar2 - 1;
        pcVar7 = pcVar7 + 1;
      } while (uVar2 != 0);
LAB_006f6ab0:
      if (0x6b < param_3) {
        ppuVar5 = &PTR_DAT_009780f0;
        goto LAB_006f6ac0;
      }
      memcpy(&local_1a0,param_2,param_3);
      uVar8 = CONCAT26(uStack_198,CONCAT42(uStack_19c,uStack_19e));
      uVar9 = (uint)local_1a0 << 0x10 | 1;
      iVar6 = 2;
      if (*param_2 != '\0') {
        iVar6 = 3;
      }
      local_130.msg_namelen = iVar6 + (int)param_3;
    }
    uStack_b8 = CONCAT26(uStack_188,CONCAT42(uStack_18c,uStack_18e));
    local_c0 = CONCAT26(uStack_190,CONCAT42(uStack_194,uStack_196));
    uStack_a8 = CONCAT26(uStack_178,CONCAT42(uStack_17c,uStack_17e));
    local_b0 = CONCAT26(local_180,CONCAT42(uStack_184,uStack_186));
    uStack_e8 = CONCAT26(uStack_148,CONCAT42(uStack_14c,uStack_14e));
    local_f0 = CONCAT26(uStack_150,CONCAT42(uStack_154,uStack_156));
    uStack_d8 = CONCAT62(uStack_13c,uStack_13e);
    uStack_e0 = CONCAT26(uStack_140,CONCAT42(local_144,uStack_146));
    uStack_98 = CONCAT26(uStack_168,CONCAT42(uStack_16c,uStack_16e));
    local_a0 = CONCAT26(uStack_170,CONCAT42(uStack_174,uStack_176));
    uStack_88 = CONCAT26(uStack_158,CONCAT42(uStack_15c,uStack_15e));
    local_90 = CONCAT26(local_160,CONCAT42(uStack_164,uStack_166));
    local_d0 = uStack_136;
    local_60 = uStack_136;
    local_80 = local_f0;
    uStack_78 = uStack_e8;
    local_70 = uStack_e0;
    uStack_68 = uStack_d8;
  }
  uStack_19c = (undefined4)uVar8;
  uStack_198 = (undefined2)((ulong)uVar8 >> 0x20);
  uStack_196 = (undefined2)((ulong)uVar8 >> 0x30);
  local_1a0 = (ushort)uVar9;
  uStack_19e = (undefined2)(uVar9 >> 0x10);
  uStack_15c = (undefined4)uStack_88;
  uStack_158 = (undefined2)((ulong)uStack_88 >> 0x20);
  uStack_156 = (undefined2)((ulong)uStack_88 >> 0x30);
  uStack_164 = (undefined4)local_90;
  local_160 = (undefined2)((ulong)local_90 >> 0x20);
  uStack_15e = (undefined2)((ulong)local_90 >> 0x30);
  uStack_14c = (undefined4)uStack_78;
  uStack_148 = (undefined2)((ulong)uStack_78 >> 0x20);
  uStack_146 = (undefined2)((ulong)uStack_78 >> 0x30);
  uStack_154 = (undefined4)local_80;
  uStack_150 = (undefined2)((ulong)local_80 >> 0x20);
  uStack_14e = (undefined2)((ulong)local_80 >> 0x30);
  uStack_13c = (undefined6)uStack_68;
  uStack_136 = (undefined2)((ulong)uStack_68 >> 0x30);
  local_144 = (undefined4)local_70;
  uStack_140 = (undefined2)((ulong)local_70 >> 0x20);
  uStack_13e = (undefined2)((ulong)local_70 >> 0x30);
  uStack_18c = (undefined4)uStack_b8;
  uStack_188 = (undefined2)((ulong)uStack_b8 >> 0x20);
  uStack_186 = (undefined2)((ulong)uStack_b8 >> 0x30);
  uStack_194 = (undefined4)local_c0;
  uStack_190 = (undefined2)((ulong)local_c0 >> 0x20);
  uStack_18e = (undefined2)((ulong)local_c0 >> 0x30);
  local_134 = local_60;
  uStack_17c = (undefined4)uStack_a8;
  uStack_178 = (undefined2)((ulong)uStack_a8 >> 0x20);
  uStack_176 = (undefined2)((ulong)uStack_a8 >> 0x30);
  uStack_184 = (undefined4)local_b0;
  local_180 = (undefined2)((ulong)local_b0 >> 0x20);
  uStack_17e = (undefined2)((ulong)local_b0 >> 0x30);
  uStack_16c = (undefined4)uStack_98;
  uStack_168 = (undefined2)((ulong)uStack_98 >> 0x20);
  uStack_166 = (undefined2)((ulong)uStack_98 >> 0x30);
  uStack_174 = (undefined4)local_a0;
  uStack_170 = (undefined2)((ulong)local_a0 >> 0x20);
  uStack_16e = (undefined2)((ulong)local_a0 >> 0x30);
  local_130.msg_control = (void *)0x0;
  local_130.msg_flags = 0;
  local_130._52_4_ = 0;
  local_130._12_4_ = 0;
  local_130.msg_controllen = param_6[2];
  if (local_130.msg_controllen != 0) {
    local_130.msg_control = (void *)*param_6;
  }
  iVar6 = *param_1;
  *(undefined1 *)(param_6 + 3) = 0;
  local_130.msg_name = &local_1a0;
  local_130.msg_iov = param_4;
  local_130.msg_iovlen = param_5;
  ppuVar3 = (undefined **)sendmsg(iVar6,&local_130,0);
  ppuVar5 = ppuVar3;
  if (ppuVar3 == (undefined **)0xffffffffffffffff) {
    piVar4 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
    iVar6 = *piVar4;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    ppuVar5 = (undefined **)((long)iVar6 << 0x20 | 2);
  }
  uVar2 = (ulong)(ppuVar3 == (undefined **)0xffffffffffffffff);
LAB_006f6c20:
  auVar10._8_8_ = ppuVar5;
  auVar10._0_8_ = uVar2;
  return auVar10;
}


// ===== 006f6c4c  FUN_006f6c4c =====

void FUN_006f6c4c(ulong *param_1,int param_2,iovec *param_3,size_t param_4,undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 uVar4;
  ulong *puVar5;
  undefined **local_150;
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
  undefined6 uStack_f8;
  undefined2 local_f2;
  undefined6 uStack_f0;
  undefined8 uStack_ea;
  msghdr local_d8;
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
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 local_40;
  undefined2 uStack_3a;
  
  local_d8.msg_name = &local_150;
  local_d8.msg_control = (void *)0x0;
  local_d8.msg_flags = 0;
  local_d8._52_4_ = 0;
  local_d8.msg_namelen = 0x6e;
  local_d8._12_4_ = 0;
  local_d8.msg_controllen = param_5[1];
  uStack_ea = 0;
  uStack_f0 = 0;
  uStack_148 = 0;
  local_150 = (undefined **)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_f2 = 0;
  uStack_100 = 0;
  if (local_d8.msg_controllen != 0) {
    local_d8.msg_control = (void *)*param_5;
  }
  local_d8.msg_iov = param_3;
  local_d8.msg_iovlen = param_4;
  uVar2 = recvmsg(param_2,&local_d8,0x40000000);
  if (uVar2 == 0xffffffffffffffff) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *(undefined4 *)(param_1 + 2) = 2;
    *param_1 = (long)iVar1 << 0x20 | 2;
    return;
  }
  param_5[2] = local_d8.msg_controllen;
  *(byte *)(param_5 + 3) = (byte)((uint)local_d8.msg_flags >> 3) & 1;
  if (local_d8.msg_namelen == 0) {
    local_d8.msg_namelen = 2;
  }
  else if (((ulong)local_150 & 0xffff) != 1) {
    uVar4 = 1;
    local_150 = &PTR_DAT_009774f8;
    goto LAB_006f6d84;
  }
  uVar4 = 0;
  puVar5 = (ulong *)((ulong)&local_150 | 8);
  uStack_58 = puVar5[9];
  local_60 = puVar5[8];
  uStack_50 = puVar5[10];
  uStack_48 = (undefined6)puVar5[0xb];
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  uStack_88 = puVar5[3];
  uStack_90 = puVar5[2];
  uStack_42 = (undefined2)*(undefined8 *)((long)puVar5 + 0x5e);
  local_40 = (undefined6)((ulong)*(undefined8 *)((long)puVar5 + 0x5e) >> 0x10);
  uStack_78 = puVar5[5];
  local_80 = puVar5[4];
  uStack_68 = puVar5[7];
  uStack_70 = puVar5[6];
LAB_006f6d84:
  *param_1 = uVar2;
  *(byte *)(param_1 + 1) = (byte)((uint)local_d8.msg_flags >> 5) & 1;
  param_1[0xd] = uStack_58;
  param_1[0xc] = local_60;
  param_1[0xf] = CONCAT26(uStack_42,uStack_48);
  param_1[0xe] = uStack_50;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(socklen_t *)((long)param_1 + 0x14) = local_d8.msg_namelen;
  param_1[3] = (ulong)local_150;
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[0x10] = CONCAT26(uStack_3a,local_40);
  param_1[9] = uStack_78;
  param_1[8] = local_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  return;
}


// ===== 006f6ddc  FUN_006f6ddc =====

undefined1  [16] FUN_006f6ddc(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong *puVar7;
  byte *pbVar10;
  
  uVar1 = (uint)param_2 & 0xff;
  if (0xf < uVar1) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = 1;
    return auVar12;
  }
  uVar5 = 1;
  if (uVar1 < 4) {
    if (uVar1 == 1 || (param_2 & 0xff) == 0) {
      if ((param_2 & 0xff) == 0) goto LAB_006f6ee0;
      if (uVar1 != 1) goto LAB_006f6f20;
      uVar8 = 0;
      param_2 = 0;
      puVar7 = (ulong *)*param_1;
      do {
        puVar6 = (ulong *)((long)puVar7 + 1);
        uVar3 = *puVar7;
        uVar11 = uVar8 & 0x3f;
        uVar8 = uVar8 + 7;
        param_2 = ((ulong)(byte)uVar3 & 0x7f) << uVar11 | param_2;
        puVar7 = puVar6;
      } while ((char)(byte)uVar3 < '\0');
    }
    else if (uVar1 == 2) {
      puVar6 = (ulong *)((ushort *)*param_1 + 1);
      param_2 = (ulong)*(ushort *)*param_1;
    }
    else {
      if (uVar1 != 3) goto LAB_006f6f20;
      puVar6 = (ulong *)((uint *)*param_1 + 1);
      param_2 = (ulong)*(uint *)*param_1;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 != 4) {
      if (uVar1 == 9) {
        uVar8 = 0;
        uVar11 = 0;
        pbVar10 = (byte *)*param_1;
        do {
          pbVar9 = pbVar10 + 1;
          bVar2 = *pbVar10;
          uVar3 = uVar11 & 0x3f;
          uVar1 = (int)uVar11 + 7;
          uVar11 = (ulong)uVar1;
          uVar8 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar8;
          pbVar10 = pbVar9;
        } while ((char)bVar2 < '\0');
        *param_1 = pbVar9;
        uVar3 = 0;
        if (0x3f < bVar2 && uVar1 < 0x40) {
          uVar3 = -1L << (uVar11 & 0x3f);
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar8 | uVar3;
        return auVar4 << 0x40;
      }
      goto LAB_006f6f20;
    }
LAB_006f6ee0:
    puVar6 = (ulong *)*param_1 + 1;
    param_2 = *(ulong *)*param_1;
  }
  else if (uVar1 == 10) {
    puVar6 = (ulong *)((short *)*param_1 + 1);
    param_2 = (ulong)*(short *)*param_1;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_006f6f20;
      goto LAB_006f6ee0;
    }
    puVar6 = (ulong *)((int *)*param_1 + 1);
    param_2 = (ulong)*(int *)*param_1;
  }
  uVar5 = 0;
  *param_1 = puVar6;
LAB_006f6f20:
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = uVar5;
  return auVar13;
}


// ===== 006f6f28  std::sys::thread_local::guard::key::enable =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::thread_local::guard::key::enable */

int __rustcall std::sys::thread_local::guard::key::enable(void)

{
  int iVar1;
  pthread_key_t __key;
  
  if (DAT_009a6dd8 != 0) {
    iVar1 = pthread_setspecific((pthread_key_t)DAT_009a6dd8,(void *)0x1);
    return iVar1;
  }
  __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init
                    (&DAT_009a6dd8);
  iVar1 = pthread_setspecific(__key,(void *)0x1);
  return iVar1;
}


// ===== 006f6f60  FUN_006f6f60 =====

ulong FUN_006f6f60(char *param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  __dev_t local_a0;
  __ino_t _Stack_98;
  __nlink_t local_90;
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
  long lStack_28;
  
  _Stack_98 = 0;
  local_a0 = 0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  local_90 = 0;
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
  lStack_28 = 0;
  lStack_30 = 0;
  iVar1 = lstat(param_1,(stat *)&local_a0);
  if (iVar1 != -1) {
    if (((uint)local_90 & 0xf000) != 0xa000) {
      uVar3 = FUN_006f7044(0);
      return uVar3;
    }
    iVar1 = unlink(param_1);
    if (iVar1 != -1) {
      return 0;
    }
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006f7044  FUN_006f7044 =====

/* WARNING: Removing unreachable block (ram,0x006f7244) */

char * FUN_006f7044(uint param_1,int param_2,char *param_3)

{
  bool bVar1;
  undefined *puVar2;
  DIR *pDVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  long *local_c8;
  undefined1 local_c0;
  long *local_b8;
  char *pcStack_b0;
  long local_a8;
  long lStack_a0;
  DIR *local_98;
  char *local_90;
  long *plStack_88;
  char *local_80;
  long lStack_78;
  long local_70;
  DIR *pDStack_68;
  
  puVar2 = PTR_PTR_0099f738;
  iVar8 = param_2;
  if ((param_1 & 1) == 0) {
    iVar8 = -100;
  }
  while (iVar6 = openat(iVar8,param_3,0x8c000), iVar6 == -1) {
    piVar9 = (int *)__errno();
    iVar6 = *piVar9;
    if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
                    /* try { // try from 006f70c0 to 006f70cf has its CatchHandler @ 006f74c4 */
    lVar10 = core::io::error::os_functions::get_os_functions();
    uVar11 = (**(code **)(lVar10 + 0x10))(iVar6);
    if ((uVar11 & 1) == 0) {
      local_90 = (char *)((long)iVar6 << 0x20 | 2);
      if ((iVar6 != 0x28) && (iVar6 != 0x14)) {
        return local_90;
      }
      if (param_1 != 1) {
        return local_90;
      }
      iVar8 = unlinkat(param_2,param_3,0);
      if (iVar8 != -1) {
        return (char *)0x0;
      }
      iVar8 = *piVar9;
      if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
                    /* try { // try from 006f7408 to 006f7413 has its CatchHandler @ 006f7428 */
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      return (char *)((long)iVar8 << 0x20 | 2);
    }
  }
  pDStack_68 = fdopendir(iVar6);
  if (pDStack_68 == (DIR *)0x0) {
    piVar9 = (int *)__errno();
    iVar8 = *piVar9;
    if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
                    /* try { // try from 006f73f8 to 006f7403 has its CatchHandler @ 006f7438 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    close(iVar6);
    return (char *)((long)iVar8 << 0x20 | 2);
  }
  local_70 = 0;
  local_80 = (char *)0x0;
  lStack_78 = 1;
  plStack_88 = (long *)0x1;
  local_90 = (char *)0x1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_c8 = (long *)__rustc::__rust_alloc(0x30,8);
  if (local_c8 == (long *)0x0) {
                    /* try { // try from 006f73e8 to 006f73f3 has its CatchHandler @ 006f74e0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  local_c0 = 0;
  local_c8[1] = (long)plStack_88;
  *local_c8 = (long)local_90;
  local_c8[3] = lStack_78;
  local_c8[2] = (long)local_80;
  local_c8[5] = (long)pDStack_68;
  local_c8[4] = local_70;
  while( true ) {
                    /* try { // try from 006f7138 to 006f7143 has its CatchHandler @ 006f7494 */
    <std::sys::fs::unix::ReadDir_as_core::iter::traits::iterator::Iterator>::next
              (&local_90,&local_c8);
    pcVar13 = local_80;
    plVar4 = plStack_88;
    if (local_90 != (char *)0x1) {
      do {
        lVar10 = *local_c8;
        cVar5 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(local_c8,0x10);
        if (bVar1) {
          *local_c8 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(&local_c8)
        ;
      }
      iVar8 = unlinkat(iVar8,param_3,0x200);
      if (iVar8 != -1) {
        return (char *)0x0;
      }
      piVar9 = (int *)__errno();
      iVar8 = *piVar9;
      if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      pcVar13 = (char *)((long)iVar8 << 0x20 | 2);
      local_90 = (char *)CONCAT44(local_90._4_4_,1);
      plStack_88 = (long *)pcVar13;
                    /* try { // try from 006f73c4 to 006f73d3 has its CatchHandler @ 006f744c */
      lVar10 = core::io::error::os_functions::get_os_functions();
      cVar5 = (**(code **)(lVar10 + 8))(iVar8);
      if (cVar5 != '\0') {
        return pcVar13;
      }
      return (char *)0x0;
    }
    pcVar12 = local_80;
    if (plStack_88 == (long *)0x0) break;
    local_b8 = plStack_88;
    pcStack_b0 = local_80;
    local_98 = pDStack_68;
    pDVar3 = local_98;
    local_98._0_1_ = (char)pDStack_68;
    lStack_a0 = local_70;
    local_a8 = lStack_78;
    local_98 = pDVar3;
    if ((char)local_98 == '\0') {
      pcVar12 = (char *)FUN_006f7044(1,iVar6,local_80);
LAB_006f71a0:
      if (pcVar12 != (char *)0x0) {
        uVar11 = (ulong)pcVar12 & 3;
        if (uVar11 < 2) goto LAB_006f7254;
LAB_006f71b4:
        if ((uVar11 != 2) || ((ulong)pcVar12 >> 0x20 != 2)) goto LAB_006f7254;
      }
    }
    else {
      if ((char)local_98 == '\x04') {
                    /* try { // try from 006f717c to 006f719f has its CatchHandler @ 006f7484 */
        pcVar12 = (char *)FUN_006f7044(1,iVar6,local_80);
        goto LAB_006f71a0;
      }
      iVar7 = unlinkat(iVar6,local_80,0);
      if (iVar7 == -1) {
        piVar9 = (int *)__errno();
        iVar7 = *piVar9;
        if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
                    /* try { // try from 006f7248 to 006f724f has its CatchHandler @ 006f7484 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        pcVar12 = (char *)((long)iVar7 << 0x20 | 2);
        uVar11 = 2;
        goto LAB_006f71b4;
      }
    }
    do {
      lVar10 = *plVar4;
      cVar5 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar1) {
        *plVar4 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 006f71f8 to 006f71ff has its CatchHandler @ 006f7464 */
      <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(&local_b8);
    }
    *pcVar13 = '\0';
    if (local_a8 != 0) {
      __rustc::__rust_dealloc(pcVar13,local_a8,1);
    }
  }
LAB_006f7290:
  do {
    lVar10 = *local_c8;
    cVar5 = '\x01';
    bVar1 = (bool)ExclusiveMonitorPass(local_c8,0x10);
    if (bVar1) {
      *local_c8 = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar10 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(&local_c8);
    return pcVar12;
  }
  return pcVar12;
LAB_006f7254:
  do {
    lVar10 = *plVar4;
    cVar5 = '\x01';
    bVar1 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar1) {
      *plVar4 = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar10 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 006f726c to 006f7273 has its CatchHandler @ 006f7460 */
    <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(&local_b8);
  }
  *pcVar13 = '\0';
  if (local_a8 != 0) {
    __rustc::__rust_dealloc(pcVar13,local_a8,1);
  }
  goto LAB_006f7290;
}


// ===== 006f74f8  std::sys::io::kernel_copy::linux::sendfile_splice =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::io::kernel_copy::linux::sendfile_splice */

void __rustcall
std::sys::io::kernel_copy::linux::sendfile_splice
          (undefined8 *param_1,uint param_2,uint param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  code *pcVar2;
  ssize_t sVar3;
  long lVar4;
  uint *puVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong local_58;
  
  uVar8 = _DAT_00371c90;
  if (param_2 == 0) {
    if (DAT_009a6df4 == '\0') goto LAB_006f76a8;
    local_58 = 0;
    if (param_5 != 0) {
      uVar9 = 0;
      do {
        sVar6 = param_5 - uVar9;
        if (0x7fffefff < sVar6) {
          sVar6 = 0x7ffff000;
        }
        sVar3 = sendfile(param_4,param_3,(off_t *)0x0,sVar6);
        if (sVar3 == -1) goto LAB_006f75d4;
      } while ((sVar3 != 0) && (uVar9 = sVar3 + uVar9, uVar9 < param_5));
      goto LAB_006f76bc;
    }
  }
  else {
    if (DAT_009a6df0 == '\0') {
LAB_006f76a8:
      param_1[1] = _UNK_00371c98;
      *param_1 = uVar8;
      return;
    }
    local_58 = 0;
    if (param_5 != 0) {
      uVar9 = 0;
      if (PTR_splice_0099f7e0 == (undefined *)0x0) {
        do {
          uVar7 = param_5 - uVar9;
          if (0x7fffefff < uVar7) {
            uVar7 = 0x7ffff000;
          }
          lVar4 = syscall(0x4c,(ulong)param_3,0,(ulong)param_4,0,uVar7,0);
          if (lVar4 == 0) break;
          if (lVar4 == -1) goto LAB_006f75d4;
          uVar9 = lVar4 + uVar9;
        } while (uVar9 < param_5);
      }
      else {
        do {
          sVar6 = param_5 - uVar9;
          if (0x7fffefff < sVar6) {
            sVar6 = 0x7ffff000;
          }
          sVar3 = splice(param_3,(__off64_t *)0x0,param_4,(__off64_t *)0x0,sVar6,0);
          if (sVar3 == 0) break;
          if (sVar3 == -1) goto LAB_006f75d4;
          uVar9 = sVar3 + uVar9;
        } while (uVar9 < param_5);
      }
      goto LAB_006f76bc;
    }
  }
  uVar9 = 0;
LAB_006f76bc:
  *param_1 = 0;
  param_1[1] = uVar9;
  return;
LAB_006f75d4:
  local_58 = uVar9;
  puVar5 = (uint *)__errno();
  uVar1 = *puVar5;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    if (uVar1 == 1) goto LAB_006f7620;
LAB_006f7610:
    if (uVar1 == 0x16) goto joined_r0x006f76c4;
    if (uVar1 == 0x26) goto LAB_006f7620;
    if (((param_2 & 1) != 0) || (uVar1 != 0x4b)) {
      param_1[2] = (ulong)uVar1 << 0x20 | 2;
      uVar8 = 1;
      goto LAB_006f76fc;
    }
  }
  else {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    if (uVar1 != 1) goto LAB_006f7610;
LAB_006f7620:
    lVar4 = 8;
    if (param_2 == 0) {
      lVar4 = 0xc;
    }
    (&DAT_009a6de8)[lVar4] = 0;
joined_r0x006f76c4:
    if (uVar9 != 0) {
                    /* try { // try from 006f76d0 to 006f76e7 has its CatchHandler @ 006f774c */
      core::panicking::assert_failed<u64,u64>(0,&local_58,&DAT_00374590,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x6f76ec);
      (*pcVar2)();
    }
  }
  uVar8 = 2;
LAB_006f76fc:
  *param_1 = uVar8;
  param_1[1] = uVar9;
  return;
}


// ===== 006f7764  std::sys::io::kernel_copy::linux::copy_regular_files =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::io::kernel_copy::linux::copy_regular_files */

void __rustcall
std::sys::io::kernel_copy::linux::copy_regular_files
          (undefined8 *param_1,uint param_2,uint param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (DAT_009a6f34 == '\x01') goto LAB_006f7978;
  bVar1 = DAT_009a6f34 != '\0';
  if (param_4 == 0) {
    uVar3 = 0;
LAB_006f784c:
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  if (PTR_copy_file_range_0099f7e8 == (undefined *)0x0) {
    uVar3 = param_4;
    if (0x3fffffff < param_4) {
      uVar3 = 0x40000000;
    }
    uVar3 = syscall(0x11d,(ulong)param_2,0,(ulong)param_3,0,uVar3,0);
    if (uVar3 != 0xffffffffffffffff) {
      if (!bVar1) {
        DAT_009a6f34 = '\x02';
      }
      if (uVar3 == 0) goto LAB_006f7978;
      for (; uVar3 < param_4; uVar3 = lVar4 + uVar3) {
        uVar7 = param_4 - uVar3;
        if (0x3fffffff < uVar7) {
          uVar7 = 0x40000000;
        }
        lVar4 = syscall(0x11d,(ulong)param_2,0,(ulong)param_3,0,uVar7,0);
        if (lVar4 == -1) goto LAB_006f799c;
        if (lVar4 == 0) goto LAB_006f7974;
      }
      goto LAB_006f784c;
    }
  }
  else {
    uVar3 = param_4;
    if (0x3fffffff < param_4) {
      uVar3 = 0x40000000;
    }
    uVar3 = copy_file_range(param_2,0,param_3,0,uVar3,0);
    if (uVar3 != 0xffffffffffffffff) {
      if (!bVar1) {
        DAT_009a6f34 = '\x02';
      }
      if (uVar3 == 0) goto LAB_006f7978;
      for (; uVar3 < param_4; uVar3 = lVar4 + uVar3) {
        uVar7 = param_4 - uVar3;
        if (0x3fffffff < uVar7) {
          uVar7 = 0x40000000;
        }
        lVar4 = copy_file_range(param_2,0,param_3,0,uVar7,0);
        if (lVar4 == -1) goto LAB_006f799c;
        if (lVar4 == 0) goto LAB_006f7974;
      }
      goto LAB_006f784c;
    }
  }
  uVar3 = 0;
  goto LAB_006f7900;
LAB_006f7974:
  if (uVar3 != 0) goto LAB_006f784c;
LAB_006f7978:
  uVar6 = _DAT_00371c90;
  param_1[1] = _UNK_00371c98;
  *param_1 = uVar6;
  return;
LAB_006f799c:
  bVar1 = true;
LAB_006f7900:
  piVar5 = (int *)__errno();
  iVar2 = *piVar5;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    uVar7 = (long)iVar2 << 0x20 | 2;
    if (iVar2 < 0x16) goto LAB_006f79c4;
LAB_006f7938:
    uVar6 = 2;
    if (0x4a < iVar2) {
      if (iVar2 == 0x4b) goto LAB_006f7a14;
      if (iVar2 == 0x5f) goto joined_r0x006f7964;
      goto LAB_006f79f4;
    }
    if (iVar2 == 0x16) goto LAB_006f79dc;
    if (iVar2 != 0x26) goto LAB_006f79f4;
joined_r0x006f7964:
    if (uVar3 == 0) {
      if (!bVar1) {
                    /* try { // try from 006f7a04 to 006f7a07 has its CatchHandler @ 006f7a30 */
        uVar6 = FUN_006f9b94();
LAB_006f7a08:
        DAT_009a6f34 = (char)uVar6;
      }
      uVar3 = 0;
      uVar6 = 2;
      goto LAB_006f7a14;
    }
  }
  else {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    uVar7 = (long)iVar2 << 0x20 | 2;
    if (0x15 < iVar2) goto LAB_006f7938;
LAB_006f79c4:
    if (iVar2 == 1) goto joined_r0x006f7964;
    if ((iVar2 == 9) || (iVar2 == 0x12)) {
LAB_006f79dc:
      if (uVar3 != 0) goto LAB_006f79f4;
      uVar6 = 2;
      if (bVar1) {
        uVar3 = 0;
        goto LAB_006f7a14;
      }
      goto LAB_006f7a08;
    }
  }
LAB_006f79f4:
  uVar6 = 1;
  param_1[2] = uVar7;
LAB_006f7a14:
  *param_1 = uVar6;
  param_1[1] = uVar3;
  return;
}


// ===== 006f7a48  std::sys::io::error::unix::error_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::io::error::unix::error_string */

void __rustcall std::sys::io::error::unix::error_string(undefined8 param_1,int param_2)

{
  char *pcVar1;
  size_t sVar2;
  char local_c0 [136];
  undefined1 auStack_38 [24];
  
  local_c0[8] = '\0';
  local_c0[9] = '\0';
  local_c0[10] = '\0';
  local_c0[0xb] = '\0';
  local_c0[0xc] = '\0';
  local_c0[0xd] = '\0';
  local_c0[0xe] = '\0';
  local_c0[0xf] = '\0';
  local_c0[0] = '\0';
  local_c0[1] = '\0';
  local_c0[2] = '\0';
  local_c0[3] = '\0';
  local_c0[4] = '\0';
  local_c0[5] = '\0';
  local_c0[6] = '\0';
  local_c0[7] = '\0';
  local_c0[0x18] = '\0';
  local_c0[0x19] = '\0';
  local_c0[0x1a] = '\0';
  local_c0[0x1b] = '\0';
  local_c0[0x1c] = '\0';
  local_c0[0x1d] = '\0';
  local_c0[0x1e] = '\0';
  local_c0[0x1f] = '\0';
  local_c0[0x10] = '\0';
  local_c0[0x11] = '\0';
  local_c0[0x12] = '\0';
  local_c0[0x13] = '\0';
  local_c0[0x14] = '\0';
  local_c0[0x15] = '\0';
  local_c0[0x16] = '\0';
  local_c0[0x17] = '\0';
  local_c0[0x28] = '\0';
  local_c0[0x29] = '\0';
  local_c0[0x2a] = '\0';
  local_c0[0x2b] = '\0';
  local_c0[0x2c] = '\0';
  local_c0[0x2d] = '\0';
  local_c0[0x2e] = '\0';
  local_c0[0x2f] = '\0';
  local_c0[0x20] = '\0';
  local_c0[0x21] = '\0';
  local_c0[0x22] = '\0';
  local_c0[0x23] = '\0';
  local_c0[0x24] = '\0';
  local_c0[0x25] = '\0';
  local_c0[0x26] = '\0';
  local_c0[0x27] = '\0';
  local_c0[0x38] = '\0';
  local_c0[0x39] = '\0';
  local_c0[0x3a] = '\0';
  local_c0[0x3b] = '\0';
  local_c0[0x3c] = '\0';
  local_c0[0x3d] = '\0';
  local_c0[0x3e] = '\0';
  local_c0[0x3f] = '\0';
  local_c0[0x30] = '\0';
  local_c0[0x31] = '\0';
  local_c0[0x32] = '\0';
  local_c0[0x33] = '\0';
  local_c0[0x34] = '\0';
  local_c0[0x35] = '\0';
  local_c0[0x36] = '\0';
  local_c0[0x37] = '\0';
  local_c0[0x48] = '\0';
  local_c0[0x49] = '\0';
  local_c0[0x4a] = '\0';
  local_c0[0x4b] = '\0';
  local_c0[0x4c] = '\0';
  local_c0[0x4d] = '\0';
  local_c0[0x4e] = '\0';
  local_c0[0x4f] = '\0';
  local_c0[0x40] = '\0';
  local_c0[0x41] = '\0';
  local_c0[0x42] = '\0';
  local_c0[0x43] = '\0';
  local_c0[0x44] = '\0';
  local_c0[0x45] = '\0';
  local_c0[0x46] = '\0';
  local_c0[0x47] = '\0';
  local_c0[0x58] = '\0';
  local_c0[0x59] = '\0';
  local_c0[0x5a] = '\0';
  local_c0[0x5b] = '\0';
  local_c0[0x5c] = '\0';
  local_c0[0x5d] = '\0';
  local_c0[0x5e] = '\0';
  local_c0[0x5f] = '\0';
  local_c0[0x50] = '\0';
  local_c0[0x51] = '\0';
  local_c0[0x52] = '\0';
  local_c0[0x53] = '\0';
  local_c0[0x54] = '\0';
  local_c0[0x55] = '\0';
  local_c0[0x56] = '\0';
  local_c0[0x57] = '\0';
  local_c0[0x68] = '\0';
  local_c0[0x69] = '\0';
  local_c0[0x6a] = '\0';
  local_c0[0x6b] = '\0';
  local_c0[0x6c] = '\0';
  local_c0[0x6d] = '\0';
  local_c0[0x6e] = '\0';
  local_c0[0x6f] = '\0';
  local_c0[0x60] = '\0';
  local_c0[0x61] = '\0';
  local_c0[0x62] = '\0';
  local_c0[99] = '\0';
  local_c0[100] = '\0';
  local_c0[0x65] = '\0';
  local_c0[0x66] = '\0';
  local_c0[0x67] = '\0';
  local_c0[0x78] = '\0';
  local_c0[0x79] = '\0';
  local_c0[0x7a] = '\0';
  local_c0[0x7b] = '\0';
  local_c0[0x7c] = '\0';
  local_c0[0x7d] = '\0';
  local_c0[0x7e] = '\0';
  local_c0[0x7f] = '\0';
  local_c0[0x70] = '\0';
  local_c0[0x71] = '\0';
  local_c0[0x72] = '\0';
  local_c0[0x73] = '\0';
  local_c0[0x74] = '\0';
  local_c0[0x75] = '\0';
  local_c0[0x76] = '\0';
  local_c0[0x77] = '\0';
  pcVar1 = strerror_r(param_2,local_c0,0x80);
  if (-1 < (int)pcVar1) {
    sVar2 = strlen(local_c0);
    <alloc::string::alloc::string::String>::from_utf8_lossy(auStack_38,local_c0,sVar2);
    <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
              (param_1,auStack_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045bcca,0x25,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978138);
}


// ===== 006f7acc  FUN_006f7acc =====

bool FUN_006f7acc(int param_1)

{
  return param_1 == 4;
}


// ===== 006f7ad8  FUN_006f7ad8 =====

undefined8 FUN_006f7ad8(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x22;
  switch(param_1) {
  case 1:
  case 0xd:
    uVar1 = 1;
switchD_006f7afc_caseD_7:
    return uVar1;
  case 2:
    return 0;
  default:
    return 0x2a;
  case 4:
    return 0x23;
  case 7:
    goto switchD_006f7afc_caseD_7;
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


// ===== 006f7c30  std::sys::pal::unix::futex::futex_wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::pal::unix::futex::futex_wake */

bool __rustcall std::sys::pal::unix::futex::futex_wake(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = syscall(0x62,param_1,0x81,1);
  return 0 < lVar1;
}


// ===== 006f7c5c  std::sys::pal::unix::futex::futex_wake_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::pal::unix::futex::futex_wake_all */

void __rustcall std::sys::pal::unix::futex::futex_wake_all(undefined8 param_1)

{
  syscall(0x62,param_1,0x81,0x7fffffff);
  return;
}


// ===== 006f7c70  FUN_006f7c70 =====

/* WARNING: Removing unreachable block (ram,0x006f7ee4) */
/* WARNING: Removing unreachable block (ram,0x006f7d34) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_006f7c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __n;
  undefined *puVar1;
  int __fd;
  undefined8 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *__buf;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long local_2c8;
  long local_2c0;
  long local_2a8;
  undefined8 local_2a0;
  undefined **local_298;
  ulong local_290;
  ulong uStack_288;
  undefined1 local_280;
  int local_278;
  long local_270;
  long local_268;
  long local_260;
  ulong local_258;
  ulong local_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  ulong uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined2 local_218;
  undefined *local_210;
  undefined *puStack_208;
  ulong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined2 local_1d0;
  long local_90;
  undefined4 local_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined *puStack_80;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __buf = (void *)__rustc::__rust_alloc(0x2000,1);
  if (__buf == (void *)0x0) {
    ppuVar14 = (undefined **)&UNK_009774b0;
    uVar13 = 0;
    uVar8 = 0;
  }
  else {
    uStack_84 = 0;
    local_88 = 1;
    local_90 = _s__00373250;
    puStack_208 = _UNK_0045bd4d;
    local_210 = _DAT_0045bd45;
    local_200 = CONCAT35(local_200._5_3_,0x6f666e69);
                    /* try { // try from 006f7cf4 to 006f7d47 has its CatchHandler @ 006f84c0 */
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(&local_258,&local_210,0x15)
    ;
    if (local_258 == 1) {
      ppuVar14 = &PTR_DAT_00977090;
    }
    else {
      FUN_006ea8b8(&local_2a0,local_250,&local_90);
      ppuVar14 = local_298;
      if ((int)local_2a0 != 1) {
        __fd = local_2a0._4_4_;
        local_290 = 0;
        uStack_288 = 0;
        local_298 = (undefined **)0x2000;
        local_280 = 0;
        local_278 = local_2a0._4_4_;
        local_2a0 = __buf;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        local_2a8 = __rustc::__rust_alloc(0x100,1);
        if (local_2a8 == 0) {
                    /* try { // try from 006f846c to 006f8477 has its CatchHandler @ 006f848c */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,0x100);
        }
        local_270 = 0x100;
        uVar8 = uStack_288;
        uVar13 = local_290;
        local_268 = local_2a8;
        do {
          puVar16 = (undefined *)0x0;
          local_260 = 0;
          do {
            lVar11 = local_260;
            uVar15 = uVar8 - uVar13;
            if (uVar8 < uVar13 || uVar8 - uVar13 == 0) {
              uVar8 = read(__fd,__buf,0x2000);
              if (uVar8 == 0xffffffffffffffff) {
                piVar9 = (int *)__errno();
                puVar1 = PTR_PTR_0099f738;
                iVar6 = *piVar9;
                if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f7fbc to 006f7fc3 has its CatchHandler @ 006f8480 */
                  core::io::error::os_functions::set_functions::set_functions_inner
                            (&PTR_FUN_00977078);
                }
                local_290 = 0;
                uStack_288 = 0;
                    /* try { // try from 006f7f20 to 006f7f2f has its CatchHandler @ 006f84dc */
                lVar10 = core::io::error::os_functions::get_os_functions();
                iVar5 = (**(code **)(lVar10 + 0x10))(iVar6);
                if (iVar5 == 0) {
LAB_006f7fc8:
                  uVar8 = 0;
                  bVar4 = true;
                  puVar16 = (undefined *)((long)iVar6 << 0x20 | 2);
                  uVar13 = 0;
                  goto LAB_006f803c;
                }
                while( true ) {
                  uVar8 = read(__fd,__buf,0x2000);
                  if (uVar8 != 0xffffffffffffffff) break;
                  iVar6 = *piVar9;
                  if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
                    /* try { // try from 006f7f78 to 006f7f7f has its CatchHandler @ 006f8484 */
                    core::io::error::os_functions::set_functions::set_functions_inner
                              (&PTR_FUN_00977078);
                  }
                  local_290 = 0;
                  uStack_288 = 0;
                    /* try { // try from 006f7f60 to 006f7f6f has its CatchHandler @ 006f84f4 */
                  lVar10 = core::io::error::os_functions::get_os_functions();
                  uVar8 = (**(code **)(lVar10 + 0x10))(iVar6);
                  if ((uVar8 & 1) == 0) goto LAB_006f7fc8;
                }
              }
              uVar13 = 0;
              local_290 = 0;
              uVar15 = uVar8;
              uStack_288 = uVar8;
            }
            if (uVar15 < 0x10) {
              uVar12 = 0;
              if (uVar15 == 0) {
                auVar17 = ZEXT816(0);
                goto LAB_006f7f88;
              }
              do {
                if (*(char *)((long)((long)__buf + uVar13) + uVar12) == '\n') goto LAB_006f7fe4;
                uVar12 = uVar12 + 1;
              } while (uVar15 != uVar12);
            }
            else {
                    /* try { // try from 006f7ee8 to 006f7ef7 has its CatchHandler @ 006f84e4 */
              auVar17 = core::slice::memchr::memchr_aligned(10,(long)__buf + uVar13,uVar15);
LAB_006f7f88:
              uVar12 = auVar17._8_8_;
              if (auVar17._0_8_ == 1) {
LAB_006f7fe4:
                if (uVar15 <= uVar12) {
                  local_280 = 0;
                    /* try { // try from 006f8454 to 006f8467 has its CatchHandler @ 006f8514 */
                    /* WARNING: Subroutine does not return */
                  core::slice::index::slice_index_fail
                            (0,uVar12,uVar15,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976e48);
                }
                __n = uVar12 + 1;
                if ((ulong)(local_270 - lVar11) <= uVar12) {
                    /* try { // try from 006f8304 to 006f831b has its CatchHandler @ 006f847c */
                  FUN_006cecec(&local_270,lVar11,__n,1,1);
                  local_2a8 = local_268;
                  lVar11 = local_260;
                }
                memcpy((void *)(local_2a8 + lVar11),(void *)((long)__buf + uVar13),__n);
                uVar15 = __n + uVar13;
                bVar4 = false;
                lVar11 = lVar11 + __n;
                puVar16 = puVar16 + __n;
                uVar13 = uVar8;
                local_290 = uVar8;
                if (uVar15 <= uVar8) {
                  uVar13 = uVar15;
                  local_290 = uVar15;
                }
                goto LAB_006f803c;
              }
            }
            if ((ulong)(local_270 - lVar11) < uVar15) {
                    /* try { // try from 006f7e2c to 006f7e43 has its CatchHandler @ 006f84e4 */
              FUN_006cecec(&local_270,lVar11,uVar15,1,1);
              local_2a8 = local_268;
              lVar11 = local_260;
LAB_006f7e4c:
              memcpy((void *)(local_2a8 + lVar11),(void *)((long)__buf + uVar13),uVar15);
            }
            else if (uVar8 != uVar13) goto LAB_006f7e4c;
            lVar11 = lVar11 + uVar15;
            puVar16 = puVar16 + uVar15;
            uVar13 = uVar8;
            local_290 = uVar8;
            local_260 = lVar11;
          } while (uVar15 != 0);
          bVar4 = false;
LAB_006f803c:
                    /* try { // try from 006f803c to 006f804f has its CatchHandler @ 006f84a0 */
          core::str::converts::from_utf8(&local_210,local_2a8,lVar11);
          if (local_210 != (undefined *)0x0) {
            if (!bVar4) {
              puVar16 = &UNK_00976e60;
            }
LAB_006f8374:
            local_280 = 0;
            if ((1 < ((ulong)puVar16 & 3) - 2) && (((ulong)puVar16 & 3) != 0)) {
              puStack_208 = puVar16 + -1;
              local_210 = (undefined *)CONCAT71(local_210._1_7_,3);
                    /* try { // try from 006f839c to 006f842b has its CatchHandler @ 006f8488 */
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&puStack_208);
            }
LAB_006f83a4:
            *param_1 = 0xfffffffffffffffe;
            local_2a8 = local_268;
joined_r0x006f83f4:
            if (local_270 != 0) {
              __rustc::__rust_dealloc(local_2a8,local_270,1);
            }
            __rustc::__rust_dealloc(__buf,0x2000,1);
            uVar7 = close(__fd);
            return (ulong)uVar7;
          }
          local_260 = lVar11;
          if (bVar4) goto LAB_006f8374;
          if (puVar16 == (undefined *)0x0) {
            local_280 = 0;
            *param_1 = 0xfffffffffffffffe;
            goto joined_r0x006f83f4;
          }
          auVar17 = FUN_006bad34(local_2a8,lVar11);
          local_250 = auVar17._8_8_;
          local_258 = 0;
          local_238 = 0;
          local_228 = 0x2000000020;
          local_220 = 1;
          local_218 = 1;
                    /* try { // try from 006f8090 to 006f81d3 has its CatchHandler @ 006f84e8 */
          uStack_230 = local_250;
          local_248 = auVar17;
          FUN_007063dc(&local_210,local_248);
          if (((ulong)local_210 & 1) == 0) {
LAB_006f8328:
            if (((local_218 & 0x100) != 0) || ((local_218 & 1) != 0)) goto LAB_006f83a4;
            *param_1 = 0xfffffffffffffffe;
            local_2a8 = local_268;
            goto joined_r0x006f83f4;
          }
          local_258 = local_200;
          if ((local_218 & 0x100) != 0) goto LAB_006f83a4;
          FUN_007063dc(&local_210,local_248);
          if (((ulong)local_210 & 1) == 0) goto LAB_006f8328;
          local_258 = local_200;
          if ((local_218 & 0x100) != 0) goto LAB_006f83a4;
          FUN_007063dc(&local_210,local_248);
          uVar2 = local_248._0_8_;
          if (((ulong)local_210 & 1) == 0) goto LAB_006f8328;
          local_258 = local_200;
          if ((local_218 & 0x100) != 0) goto LAB_006f83a4;
          FUN_007063dc(&local_210,local_248);
          puVar16 = puStack_208;
          uVar15 = local_258;
          local_2c8 = local_248._0_8_;
          if (((ulong)local_210 & 1) == 0) goto LAB_006f8328;
          local_258 = local_200;
          if ((local_218 & 0x100) != 0) goto LAB_006f83a4;
          FUN_007063dc(&local_210,local_248);
          uVar3 = local_218;
          uVar12 = local_258;
          if (local_210 == (undefined *)0x1) {
            local_2c0 = (long)puStack_208 - local_258;
            local_258 = local_200;
          }
          else {
            if ((local_218 & 0x100) != 0) goto LAB_006f83a4;
            local_218 = CONCAT11(1,(undefined1)local_218);
            if (((uVar3 & 1) == 0) && (local_250 == local_258)) goto LAB_006f83a4;
            local_2c0 = local_250 - local_258;
            local_2c8 = local_248._0_8_;
          }
          local_2c8 = local_2c8 + uVar12;
          auVar17 = FUN_006e9cd4(&local_258);
          if (auVar17._0_8_ == 0) goto LAB_006f83a4;
          lVar11 = FUN_006e9cd4(&local_258);
          if (lVar11 == 0) goto LAB_006f83a4;
          auVar18 = FUN_006e9cd4(&local_258);
          piVar9 = auVar18._0_8_;
          if (piVar9 == (int *)0x0) goto LAB_006f83a4;
          if ((auVar18._8_8_ == 6) && (*piVar9 == 0x6f726763 && (short)piVar9[1] == 0x7075)) {
            local_210 = (undefined *)0x0;
            local_1f0 = 0;
            local_1e0 = 0x2c0000002c;
            local_1d8 = 1;
            local_1d0 = 1;
            uStack_1f8 = auVar17._8_8_;
            uStack_1e8 = auVar17._8_8_;
            do {
              puStack_208 = auVar17._8_8_;
              local_200 = auVar17._0_8_;
              uVar12 = local_200;
                    /* try { // try from 006f8238 to 006f8247 has its CatchHandler @ 006f84bc */
              FUN_007063dc(&local_90,&local_200);
              uVar3 = local_1d0;
              auVar17._8_8_ = puStack_208;
              auVar17._0_8_ = local_200;
              if (local_90 == 1) {
                lVar11 = CONCAT26(uStack_82,CONCAT24(uStack_84,local_88)) - (long)local_210;
                puVar1 = puStack_80;
              }
              else {
                if ((local_1d0 & 0x100) != 0) break;
                local_1d0 = CONCAT11(1,(undefined1)local_1d0);
                if (((uVar3 & 1) == 0) && (puStack_208 == local_210)) break;
                lVar11 = (long)puStack_208 - (long)local_210;
                puVar1 = local_210;
                uVar12 = local_200;
              }
              if ((lVar11 == 3) &&
                 (*(short *)(local_210 + uVar12) == 0x7063 &&
                  (char)*(short *)((long)(local_210 + uVar12) + 2) == 'u')) {
                    /* try { // try from 006f82c4 to 006f82fb has its CatchHandler @ 006f84e8 */
                local_210 = puVar1;
                auVar17 = <std::path::[16]::std::path::Path>::_strip_prefix
                                    (uVar2 + uVar15,(long)puVar16 - uVar15,&DAT_0045b2ad,1);
                lVar11 = auVar17._0_8_;
                if (lVar11 == 0) goto LAB_006f83a4;
                iVar6 = <std::path::[16]::std::path::Path>::_starts_with
                                  (param_2,param_3,lVar11,auVar17._8_8_);
                if (iVar6 != 0) {
                  local_280 = 0;
                  auVar17 = <std::path::[16]::std::path::Path>::_strip_prefix
                                      (param_2,param_3,lVar11,auVar17._8_8_);
                  if (auVar17._0_8_ == 0) goto LAB_006f83a4;
                  FUN_006cf360(&local_210,local_2c8,local_2c0);
                  param_1[1] = puStack_208;
                  *param_1 = local_210;
                  param_1[2] = local_200;
                  *(undefined1 (*) [16])(param_1 + 3) = auVar17;
                  local_2a8 = local_268;
                  goto joined_r0x006f83f4;
                }
                break;
              }
              local_1d0._1_1_ = (char)(local_1d0 >> 8);
              bVar4 = local_1d0._1_1_ != '\x01';
              local_210 = puVar1;
            } while (bVar4);
          }
        } while( true );
      }
    }
    uVar8 = __rustc::__rust_dealloc(__buf,0x2000,1);
    uVar13 = (ulong)ppuVar14 & 3;
    if (uVar13 - 2 < 2) goto LAB_006f7d98;
  }
  if (uVar13 != 0) {
    puStack_208 = (undefined *)((long)ppuVar14 + -1);
    local_210 = (undefined *)CONCAT71(local_210._1_7_,3);
    uVar8 = <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&puStack_208);
  }
LAB_006f7d98:
  *param_1 = 0xfffffffffffffffe;
  return uVar8;
}


// ===== 006f853c  FUN_006f853c =====

ulong FUN_006f853c(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined1 auVar6 [16];
  pollfd local_60;
  int iStack_58;
  undefined4 local_54;
  int local_38;
  int iStack_34;
  
                    /* try { // try from 006f856c to 006f858b has its CatchHandler @ 006f873c */
  local_38 = param_1;
  iStack_34 = param_3;
  uVar3 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_nonblocking(&local_38,1);
  if ((uVar3 != 0) ||
     (uVar3 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_nonblocking(&iStack_34,1),
     puVar1 = PTR_PTR_0099f738, uVar3 != 0)) {
LAB_006f8594:
    close(param_3);
    close(param_1);
    return uVar3;
  }
  stack0xffffffffffffffa4 = CONCAT44(param_3,1);
  local_54 = 1;
  local_60.fd = param_1;
  do {
    do {
      while (iVar2 = poll(&local_60,2,-1), iVar2 == -1) {
        piVar4 = (int *)__errno();
        iVar2 = *piVar4;
        if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
                    /* try { // try from 006f86b0 to 006f86b7 has its CatchHandler @ 006f8718 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
                    /* try { // try from 006f8698 to 006f86a7 has its CatchHandler @ 006f8720 */
        lVar5 = core::io::error::os_functions::get_os_functions();
        uVar3 = (**(code **)(lVar5 + 0x10))(iVar2);
        if ((uVar3 & 1) == 0) {
          uVar3 = (long)iVar2 << 0x20 | 2;
          goto LAB_006f8594;
        }
      }
      if (local_60.revents != 0) {
                    /* try { // try from 006f860c to 006f8653 has its CatchHandler @ 006f871c */
        auVar6 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&local_38,param_2);
        uVar3 = auVar6._8_8_;
        if (auVar6._0_8_ == 1) {
          if (((1 < (uVar3 & 3)) && ((uVar3 & 3) == 2)) && (uVar3 >> 0x20 == 0xb))
          goto LAB_006f8640;
        }
        else {
                    /* try { // try from 006f86bc to 006f870b has its CatchHandler @ 006f873c */
          uVar3 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_nonblocking(&iStack_34,0);
          if (uVar3 == 0) {
            auVar6 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end
                               (&iStack_34,param_4);
LAB_006f870c:
            uVar3 = auVar6._8_8_;
            if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              uVar3 = 0;
            }
          }
        }
        goto LAB_006f8594;
      }
LAB_006f8640:
    } while (local_54._2_2_ == 0);
    auVar6 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&iStack_34,param_4);
    uVar3 = auVar6._8_8_;
    if (auVar6._0_8_ != 1) {
      uVar3 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_nonblocking(&local_38,0);
      if (uVar3 == 0) {
        auVar6 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(&local_38,param_2);
        goto LAB_006f870c;
      }
      goto LAB_006f8594;
    }
    if ((((uVar3 & 3) < 2) || ((uVar3 & 3) == 3)) || (uVar3 >> 0x20 != 0xb)) goto LAB_006f8594;
  } while( true );
}


// ===== 006f8758  FUN_006f8758 =====

void FUN_006f8758(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045beaf,0x6f,&PTR_s__rustc_48a229ceaefd4985c50990b14_009781b0);
}


// ===== 006f8778  FUN_006f8778 =====

undefined8 FUN_006f8778(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  void *pvVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_1;
  do {
    lVar7 = *plVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar6 = PTR_CURRENT_0099f758;
  } while (cVar2 != '\0');
  if (lVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x6f8958);
    (*pcVar4)();
  }
  lVar7 = *(long *)PTR_CURRENT_0099f758;
  if (lVar7 == 0) {
                    /* try { // try from 006f88e8 to 006f8913 has its CatchHandler @ 006f895c */
    lVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_0099f758);
  }
  pvVar5 = pthread_getspecific((pthread_key_t)lVar7);
  if (pvVar5 != (void *)0x0) {
LAB_006f8938:
                    /* try { // try from 006f893c to 006f894f has its CatchHandler @ 006f8988 */
    FUN_0070e804(pvVar5,&DAT_0045b0af,0x55);
    FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
    std::process::abort();
  }
  lVar7 = DAT_009a6f60;
  if (DAT_009a6f60 == 0) {
    lVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
  }
  pvVar5 = pthread_getspecific((pthread_key_t)lVar7);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)plVar9[2];
    lVar7 = DAT_009a6f60;
    if (DAT_009a6f60 == 0) {
                    /* try { // try from 006f8928 to 006f8933 has its CatchHandler @ 006f895c */
      lVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(&DAT_009a6f60);
    }
    pthread_setspecific((pthread_key_t)lVar7,pvVar5);
    lVar7 = DAT_009a6dd8;
  }
  else {
    lVar7 = DAT_009a6dd8;
    if ((void *)plVar9[2] != pvVar5) goto LAB_006f8938;
  }
  DAT_009a6dd8 = lVar7;
  if (lVar7 == 0) {
    lVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6dd8);
  }
  pthread_setspecific((pthread_key_t)lVar7,(void *)0x1);
  lVar7 = *(long *)puVar6;
  if (lVar7 == 0) {
                    /* try { // try from 006f8918 to 006f8923 has its CatchHandler @ 006f8958 */
    lVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_0099f758);
  }
  pthread_setspecific((pthread_key_t)lVar7,plVar9 + 2);
  plVar9 = (long *)*param_1;
  puVar6 = (undefined *)plVar9[3];
  if (puVar6 == (undefined *)0x0) {
    if ((DAT_009a6f40 == 0) || (DAT_009a6f40 != plVar9[2])) goto LAB_006f8858;
    puVar6 = &DAT_0036a4cc;
  }
  prctl(0xf,puVar6,0,0,0);
LAB_006f8858:
  uVar1 = param_1[1];
  lVar7 = param_1[2];
  do {
    lVar8 = *plVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
    ::drop_slow(param_1);
  }
  __rustc::__rust_dealloc(param_1,0x18,8);
                    /* try { // try from 006f8890 to 006f8897 has its CatchHandler @ 006f8970 */
  (**(code **)(lVar7 + 0x18))(uVar1);
  if (*(long *)(lVar7 + 8) != 0) {
    __rustc::__rust_dealloc(uVar1,*(long *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
  }
  return 0;
}


// ===== 006f89b8  <std::sys::net::connection::socket::[3]::std::sys::net::connection::socket::TcpStream>::connect::inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::[3]::std::sys::net::connection::socket::TcpStream>::connect::inner
    */

uint * __rustcall
<std::sys::net::connection::socket::[3]::std::sys::net::connection::socket::TcpStream>::connect::
inner(undefined4 *param_1,short *param_2)

{
  int __fd;
  uint uVar1;
  uint *puVar2;
  undefined4 extraout_w9;
  short *psVar3;
  socklen_t __len;
  sockaddr local_4c;
  undefined8 uStack_3c;
  undefined4 local_34;
  
  if (*param_2 == 1) {
    __fd = socket(10,0x80001,0);
    if (__fd == -1) {
LAB_006f8ab8:
      puVar2 = (uint *)__errno();
      uVar1 = *puVar2;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        puVar2 = (uint *)core::io::error::os_functions::set_functions::set_functions_inner
                                   (&PTR_FUN_00977078);
      }
      *param_1 = 1;
      *(ulong *)(param_1 + 2) = (ulong)uVar1 << 0x20 | 2;
      return puVar2;
    }
    local_34 = *(undefined4 *)(param_2 + 0xc);
    uStack_3c = *(undefined8 *)(param_2 + 6);
    local_4c.sa_data._6_8_ = *(undefined8 *)(param_2 + 2);
    psVar3 = param_2 + 10;
    __len = 0x1c;
    local_4c.sa_data._0_2_ =
         (ushort)param_2[0xe] >> 8 | (ushort)(((ushort)param_2[0xe] & 0xff00ff) << 8);
    local_4c.sa_family = 10;
  }
  else {
    __fd = socket(2,0x80001,0);
    if (__fd == -1) goto LAB_006f8ab8;
    local_4c.sa_data[6] = '\0';
    local_4c.sa_data[7] = '\0';
    local_4c.sa_data[8] = '\0';
    local_4c.sa_data[9] = '\0';
    local_4c.sa_data[10] = '\0';
    local_4c.sa_data[0xb] = '\0';
    local_4c.sa_data[0xc] = '\0';
    local_4c.sa_data[0xd] = '\0';
    uStack_3c = 0;
    psVar3 = param_2 + 1;
    __len = 0x10;
    local_4c.sa_family = 2;
    local_4c.sa_data._0_2_ =
         (ushort)param_2[3] >> 8 | (ushort)(((ushort)param_2[3] & 0xff00ff) << 8);
    local_34 = extraout_w9;
  }
  local_4c.sa_data._2_4_ = *(undefined4 *)psVar3;
  do {
    uVar1 = ::connect(__fd,&local_4c,__len);
    puVar2 = (uint *)(ulong)uVar1;
    if (uVar1 != 0xffffffff) goto LAB_006f8aa0;
    puVar2 = (uint *)__errno();
    uVar1 = *puVar2;
  } while (uVar1 == 4);
  if (uVar1 != 0x6a) {
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f8b64 to 006f8b6f has its CatchHandler @ 006f8b74 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    *param_1 = 1;
    *(ulong *)(param_1 + 2) = (long)(int)uVar1 << 0x20 | 2;
    uVar1 = close(__fd);
    return (uint *)(ulong)uVar1;
  }
LAB_006f8aa0:
  *param_1 = 0;
  param_1[1] = __fd;
  return puVar2;
}


// ===== 006f8b88  <std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::try_check_public_boundary::slow_path =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::try_check_public_boundary::slow_path
    */

undefined8 __rustcall
<std::sys::os_str::bytes::[7]::std::sys::os_str::bytes::Slice>::try_check_public_boundary::slow_path
          (long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_48;
  long local_40;
  
  uVar1 = param_2 - param_3;
  if (param_2 < param_3) {
    return 0;
  }
  if (3 < uVar1) {
    uVar1 = 4;
  }
  core::str::converts::from_utf8(&local_48,param_1 + param_3,uVar1);
  uVar2 = 1;
  if ((local_48 == 1) && (local_40 == 0)) {
    uVar1 = param_3;
    if (3 < param_3) {
      uVar1 = 4;
    }
    if (param_3 < 2) {
      uVar2 = 0;
    }
    else {
      uVar3 = 2;
      do {
        core::str::converts::from_utf8(&local_48,param_1 + (param_3 - uVar3),uVar3);
        if (local_48 == 0) {
          return 1;
        }
        uVar2 = 0;
      } while ((uVar3 < uVar1) && (uVar3 = uVar3 + 1, uVar3 <= uVar1));
    }
  }
  return uVar2;
}


// ===== 006f8c64  <std::sys::net::connection::socket::[7]::std::sys::net::connection::socket::TcpListener>::bind::inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::[7]::std::sys::net::connection::socket::TcpListener>::bind::inner
    */

uint * __rustcall
<std::sys::net::connection::socket::[7]::std::sys::net::connection::socket::TcpListener>::bind::
inner(undefined4 *param_1,short *param_2)

{
  ushort uVar1;
  int __fd;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  socklen_t __len;
  undefined4 extraout_w9;
  short *psVar6;
  ulong uVar7;
  sockaddr local_4c;
  undefined8 uStack_3c;
  undefined4 local_34;
  
  if (*param_2 == 1) {
    __fd = socket(10,0x80001,0);
    if (__fd == -1) {
LAB_006f8da0:
      puVar5 = (uint *)__errno();
      uVar3 = *puVar5;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        puVar5 = (uint *)core::io::error::os_functions::set_functions::set_functions_inner
                                   (&PTR_FUN_00977078);
      }
      *param_1 = 1;
      *(ulong *)(param_1 + 2) = (ulong)uVar3 << 0x20 | 2;
      return puVar5;
    }
    local_4c.sa_family = 1;
    local_4c.sa_data[0] = '\0';
    local_4c.sa_data[1] = '\0';
    iVar2 = setsockopt(__fd,1,2,&local_4c,4);
    if (iVar2 == -1) {
LAB_006f8dec:
      piVar4 = (int *)__errno();
      uVar7 = (ulong)*piVar4;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f8e10 to 006f8e4f has its CatchHandler @ 006f8ec8 */
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      goto LAB_006f8e78;
    }
    uVar1 = param_2[0xe];
    local_34 = *(undefined4 *)(param_2 + 0xc);
    psVar6 = param_2 + 10;
    uStack_3c = *(undefined8 *)(param_2 + 6);
    local_4c.sa_data._6_8_ = *(undefined8 *)(param_2 + 2);
    __len = 0x1c;
    local_4c.sa_family = 10;
  }
  else {
    __fd = socket(2,0x80001,0);
    if (__fd == -1) goto LAB_006f8da0;
    local_4c.sa_family = 1;
    local_4c.sa_data[0] = '\0';
    local_4c.sa_data[1] = '\0';
    iVar2 = setsockopt(__fd,1,2,&local_4c,4);
    if (iVar2 == -1) goto LAB_006f8dec;
    local_4c.sa_data[6] = '\0';
    local_4c.sa_data[7] = '\0';
    local_4c.sa_data[8] = '\0';
    local_4c.sa_data[9] = '\0';
    local_4c.sa_data[10] = '\0';
    local_4c.sa_data[0xb] = '\0';
    local_4c.sa_data[0xc] = '\0';
    local_4c.sa_data[0xd] = '\0';
    uStack_3c = 0;
    uVar1 = param_2[3];
    psVar6 = param_2 + 1;
    __len = 0x10;
    local_4c.sa_family = 2;
    local_34 = extraout_w9;
  }
  local_4c.sa_data._2_4_ = *(undefined4 *)psVar6;
  local_4c.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
  iVar2 = ::bind(__fd,&local_4c,__len);
  if (iVar2 == -1) {
    puVar5 = (uint *)__errno();
    uVar7 = (ulong)*puVar5;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  else {
    uVar3 = listen(__fd,0x80);
    if (uVar3 != 0xffffffff) {
      *param_1 = 0;
      param_1[1] = __fd;
      return (uint *)(ulong)uVar3;
    }
    puVar5 = (uint *)__errno();
    uVar7 = (ulong)*puVar5;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f8eb8 to 006f8ec3 has its CatchHandler @ 006f8ec8 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
LAB_006f8e78:
  *param_1 = 1;
  *(ulong *)(param_1 + 2) = uVar7 << 0x20 | 2;
  uVar3 = close(__fd);
  return (uint *)(ulong)uVar3;
}


// ===== 006f8edc  <std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::bind::inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::bind::inner
    */

uint * __rustcall
<std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::bind::inner
          (undefined4 *param_1,short *param_2)

{
  int iVar1;
  int __fd;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  socklen_t __len;
  undefined4 extraout_w9;
  short *psVar5;
  sockaddr local_4c;
  undefined8 uStack_3c;
  undefined4 local_34;
  
  if (*param_2 == 1) {
    __fd = socket(10,0x80002,0);
    if (__fd == -1) {
LAB_006f8fc0:
      puVar3 = (uint *)__errno();
      uVar2 = *puVar3;
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        puVar3 = (uint *)core::io::error::os_functions::set_functions::set_functions_inner
                                   (&PTR_FUN_00977078);
      }
      *param_1 = 1;
      *(ulong *)(param_1 + 2) = (ulong)uVar2 << 0x20 | 2;
      return puVar3;
    }
    local_34 = *(undefined4 *)(param_2 + 0xc);
    uStack_3c = *(undefined8 *)(param_2 + 6);
    local_4c.sa_data._6_8_ = *(undefined8 *)(param_2 + 2);
    psVar5 = param_2 + 10;
    __len = 0x1c;
    local_4c.sa_data._0_2_ =
         (ushort)param_2[0xe] >> 8 | (ushort)(((ushort)param_2[0xe] & 0xff00ff) << 8);
    local_4c.sa_family = 10;
  }
  else {
    __fd = socket(2,0x80002,0);
    if (__fd == -1) goto LAB_006f8fc0;
    local_4c.sa_data[6] = '\0';
    local_4c.sa_data[7] = '\0';
    local_4c.sa_data[8] = '\0';
    local_4c.sa_data[9] = '\0';
    local_4c.sa_data[10] = '\0';
    local_4c.sa_data[0xb] = '\0';
    local_4c.sa_data[0xc] = '\0';
    local_4c.sa_data[0xd] = '\0';
    uStack_3c = 0;
    psVar5 = param_2 + 1;
    __len = 0x10;
    local_4c.sa_family = 2;
    local_4c.sa_data._0_2_ =
         (ushort)param_2[3] >> 8 | (ushort)(((ushort)param_2[3] & 0xff00ff) << 8);
    local_34 = extraout_w9;
  }
  local_4c.sa_data._2_4_ = *(undefined4 *)psVar5;
  uVar2 = ::bind(__fd,&local_4c,__len);
  if (uVar2 != 0xffffffff) {
    *param_1 = 0;
    param_1[1] = __fd;
    return (uint *)(ulong)uVar2;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f9070 to 006f907b has its CatchHandler @ 006f9080 */
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *param_1 = 1;
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  uVar2 = close(__fd);
  return (uint *)(ulong)uVar2;
}


// ===== 006f9094  <std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::connect::inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::connect::inner
    */

ulong __rustcall
<std::sys::net::connection::socket::[a]::std::sys::net::connection::socket::UdpSocket>::connect::
inner(int *param_1,short *param_2)

{
  int __fd;
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  short *psVar6;
  socklen_t __len;
  sockaddr local_5c;
  undefined8 uStack_4c;
  uint local_44;
  
  puVar1 = PTR_PTR_0099f738;
  if (*param_2 == 1) {
    local_44 = *(uint *)(param_2 + 0xc);
    psVar6 = param_2 + 10;
    uStack_4c = *(undefined8 *)(param_2 + 6);
    local_5c.sa_data._6_8_ = *(undefined8 *)(param_2 + 2);
    __len = 0x1c;
    local_5c.sa_family = 10;
    local_5c.sa_data._0_2_ =
         (ushort)param_2[0xe] >> 8 | (ushort)(((ushort)param_2[0xe] & 0xff00ff) << 8);
  }
  else {
    local_5c.sa_data[6] = '\0';
    local_5c.sa_data[7] = '\0';
    local_5c.sa_data[8] = '\0';
    local_5c.sa_data[9] = '\0';
    local_5c.sa_data[10] = '\0';
    local_5c.sa_data[0xb] = '\0';
    local_5c.sa_data[0xc] = '\0';
    local_5c.sa_data[0xd] = '\0';
    uStack_4c = 0;
    local_44 = (uint)(ushort)param_2[3];
    psVar6 = param_2 + 1;
    __len = 0x10;
    local_5c.sa_family = 2;
    local_5c.sa_data._0_2_ = (ushort)param_2[3] >> 8 | (ushort)((local_44 & 0xff00ff) << 8);
  }
  local_5c.sa_data._2_4_ = *(undefined4 *)psVar6;
  __fd = *param_1;
  do {
    iVar2 = ::connect(__fd,&local_5c,__len);
    if (iVar2 != -1) {
      return 0;
    }
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
                    /* try { // try from 006f9148 to 006f9157 has its CatchHandler @ 006f91a8 */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar5 & 1) != 0);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 006f91c8  std::fs::read_to_string::inner =====

/* WARNING: Removing unreachable block (ram,0x006f926c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::fs::read_to_string::inner */

ulong __rustcall std::fs::read_to_string::inner(long *param_1,void *param_2,ulong param_3)

{
  stat *psVar1;
  int __fd;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  stat *psVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined8 local_218;
  undefined4 local_210;
  undefined2 local_20c;
  int local_208;
  int local_204;
  undefined **local_200;
  undefined8 *local_1f8;
  stat local_1f0 [2];
  long local_68;
  long lStack_60;
  long local_58;
  
  psVar7 = local_1f0;
  local_210 = 1;
  local_1f8 = &local_218;
  local_20c = 0;
  local_218 = _s__00373250;
  if (param_3 < 0x180) {
    memcpy(local_1f0,param_2,param_3);
    *(undefined1 *)((long)psVar7->__unused + (param_3 - 0x78)) = 0;
    uVar5 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                      (&local_68,local_1f0,param_3 + 1);
    if (local_68 == 1) {
      local_200 = &PTR_DAT_00977090;
      goto LAB_006f928c;
    }
    uVar5 = FUN_006ea8b8(&local_208,lStack_60,&local_218);
    __fd = local_204;
  }
  else {
    uVar5 = FUN_006c94c0(&local_208,param_2,param_3,&local_1f8,FUN_006d0e6c);
    __fd = local_204;
  }
  if (local_208 == 1) {
LAB_006f928c:
    *param_1 = -1;
    param_1[1] = (long)local_200;
    return uVar5;
  }
  local_1f0[0].st_ctim.tv_sec = 0;
  local_1f0[0].st_mtim.tv_nsec = 0;
  local_1f0[0].__unused[0] = 0;
  local_1f0[0].st_ctim.tv_nsec = 0;
  local_1f0[0].st_ino = 0;
  local_1f0[0].st_dev = 0;
  local_1f0[0].st_mode = 0;
  local_1f0[0].st_uid = 0;
  local_1f0[0].st_nlink = 0;
  local_1f0[0].st_rdev = 0;
  local_1f0[0].st_gid = 0;
  local_1f0[0].__pad0 = 0;
  local_1f0[0].st_blksize = 0;
  local_1f0[0].st_size = 0;
  local_1f0[0].st_atim.tv_sec = 0;
  local_1f0[0].st_blocks = 0;
  local_1f0[0].st_mtim.tv_sec = 0;
  local_1f0[0].st_atim.tv_nsec = 0;
  iVar3 = fstat(__fd,local_1f0);
  if (iVar3 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f9408 to 006f9413 has its CatchHandler @ 006f9418 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
    psVar7 = (stat *)local_1f0[0].st_size;
  }
  local_58 = 0;
  psVar1 = psVar7;
  if (iVar3 == 0) {
    psVar1 = (stat *)0x0;
  }
  local_68 = 0;
  lStack_60 = 1;
                    /* try { // try from 006f9330 to 006f9337 has its CatchHandler @ 006f9450 */
  lVar6 = <alloc::string::alloc::string::String>::try_reserve_exact(&local_68,psVar1);
  lVar2 = local_58;
  if (lVar6 == -1) {
                    /* try { // try from 006f9350 to 006f9363 has its CatchHandler @ 006f9444 */
    auVar9 = FUN_006c56d0(__fd,&local_68,iVar3,psVar7);
    lVar6 = local_58;
                    /* try { // try from 006f9370 to 006f937f has its CatchHandler @ 006f942c */
    core::str::converts::from_utf8(local_1f0,lStack_60 + lVar2,local_58 - lVar2);
    puVar8 = auVar9._8_8_;
    if (local_1f0[0].st_dev == 0) {
      local_58 = lVar6;
      if (auVar9._0_8_ != 1) {
        param_1[1] = lStack_60;
        *param_1 = local_68;
        param_1[2] = lVar6;
        goto LAB_006f93e4;
      }
    }
    else {
      local_58 = lVar2;
      if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        puVar8 = &UNK_00976e60;
      }
    }
  }
  else {
    puVar8 = (undefined *)0x2600000003;
    local_58 = lVar2;
  }
  *param_1 = -1;
  param_1[1] = (long)puVar8;
  if (local_68 != 0) {
    __rustc::__rust_dealloc(lStack_60,local_68,1);
  }
LAB_006f93e4:
  uVar4 = close(__fd);
  return (ulong)uVar4;
}


// ===== 006f9478  std::fs::read::inner =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::fs::read::inner */

ulong __rustcall std::fs::read::inner(__dev_t *param_1,void *param_2,ulong param_3)

{
  int __fd;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  __dev_t _Var4;
  undefined8 uVar5;
  __dev_t _Var6;
  undefined1 auVar7 [16];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  int local_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined8 *local_1d8;
  stat local_1d0 [2];
  long local_48;
  undefined8 local_40;
  
  local_1f0 = 1;
  local_1d8 = &local_1f8;
  local_1ec = 0;
  local_1f8 = _s__00373250;
  if (param_3 < 0x180) {
    memcpy(local_1d0,param_2,param_3);
    *(undefined1 *)((long)local_1d0[0].__unused + (param_3 - 0x78)) = 0;
    uVar3 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                      (&local_48,local_1d0,param_3 + 1);
    if (local_48 == 1) {
      local_1e0 = &PTR_DAT_00977090;
      goto LAB_006f9514;
    }
    uVar3 = FUN_006ea8b8(&local_1e8,local_40,&local_1f8);
    __fd = local_1e4;
  }
  else {
    uVar3 = FUN_006c94c0(&local_1e8,param_2,param_3,&local_1d8,FUN_006d0e6c);
    __fd = local_1e4;
  }
  if (local_1e8 == 1) {
LAB_006f9514:
    *param_1 = 0xffffffffffffffff;
    param_1[1] = (__dev_t)local_1e0;
    return uVar3;
  }
  local_1d0[0].st_ctim.tv_sec = 0;
  local_1d0[0].st_mtim.tv_nsec = 0;
  local_1d0[0].__unused[0] = 0;
  local_1d0[0].st_ctim.tv_nsec = 0;
  local_1d0[0].st_ino = 0;
  local_1d0[0].st_dev = 0;
  local_1d0[0].st_mode = 0;
  local_1d0[0].st_uid = 0;
  local_1d0[0].st_nlink = 0;
  local_1d0[0].st_rdev = 0;
  local_1d0[0].st_gid = 0;
  local_1d0[0].__pad0 = 0;
  local_1d0[0].st_blksize = 0;
  local_1d0[0].st_size = 0;
  local_1d0[0].st_atim.tv_sec = 0;
  local_1d0[0].st_blocks = 0;
  local_1d0[0].st_mtim.tv_sec = 0;
  local_1d0[0].st_atim.tv_nsec = 0;
  iVar1 = fstat(__fd,local_1d0);
  _Var6 = local_1d0[0].st_size;
  if (iVar1 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006f9688 to 006f9693 has its CatchHandler @ 006f9698 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    uVar5 = 0;
LAB_006f95c0:
    _Var6 = 0;
    _Var4 = 1;
  }
  else {
    if (local_1d0[0].st_size < 0) {
LAB_006f9584:
      *param_1 = 0xffffffffffffffff;
      param_1[1] = 0x2600000003;
      goto LAB_006f9614;
    }
    if (local_1d0[0].st_size == 0) {
      uVar5 = 1;
      goto LAB_006f95c0;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    _Var4 = __rustc::__rust_alloc(_Var6,1);
    if (_Var4 == 0) goto LAB_006f9584;
    uVar5 = 1;
  }
  local_1d0[0].st_nlink = 0;
                    /* try { // try from 006f95cc to 006f95d7 has its CatchHandler @ 006f96ac */
  local_1d0[0].st_dev = _Var6;
  local_1d0[0].st_ino = _Var4;
  auVar7 = FUN_006c56d0(__fd,local_1d0,uVar5);
  if (auVar7._0_8_ == 1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = auVar7._8_8_;
    if (local_1d0[0].st_dev != 0) {
      __rustc::__rust_dealloc(local_1d0[0].st_ino,local_1d0[0].st_dev,1);
    }
  }
  else {
    param_1[1] = local_1d0[0].st_ino;
    *param_1 = local_1d0[0].st_dev;
    param_1[2] = local_1d0[0].st_nlink;
  }
LAB_006f9614:
  uVar2 = close(__fd);
  return (ulong)uVar2;
}


// ===== 006f96d4  std::fs::write::inner =====

/* WARNING: Removing unreachable block (ram,0x006f9788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* std::fs::write::inner */

undefined ** __rustcall
std::fs::write::inner(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  undefined8 *puVar1;
  int __fd;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 local_228;
  undefined4 local_220;
  undefined2 local_21c;
  int local_218;
  int local_214;
  undefined **local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined **ppuStack_1f8;
  long local_80;
  undefined8 local_78;
  
  local_21c = 1;
  local_220 = 0x1000100;
  local_208 = &local_228;
  local_228 = _s__00373250;
  if (param_2 < 0x180) {
    memcpy(&local_200,param_1,param_2);
    *(undefined1 *)((long)&local_200 + param_2) = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_80,&local_200,param_2 + 1);
    if (local_80 == 1) {
      local_210 = &PTR_DAT_00977090;
      return local_210;
    }
    FUN_006ea8b8(&local_218,local_78,&local_228);
    puVar1 = (undefined8 *)PTR_PTR_0099f738;
    __fd = local_214;
    ppuVar6 = local_210;
  }
  else {
    FUN_006c94c0(&local_218,param_1,param_2,&local_208,FUN_006d0e6c);
    puVar1 = (undefined8 *)PTR_PTR_0099f738;
    __fd = local_214;
    ppuVar6 = local_210;
  }
  PTR_PTR_0099f738 = (undefined *)puVar1;
  if (local_218 != 1) {
    if (param_4 != 0) {
      do {
        uVar3 = ::write(__fd,param_3,param_4);
        if (uVar3 == 0xffffffffffffffff) {
          piVar4 = (int *)__errno();
          iVar2 = *piVar4;
          if ((undefined **)*puVar1 != &PTR_FUN_00977078) {
                    /* try { // try from 006f9868 to 006f986f has its CatchHandler @ 006f98c4 */
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
          }
          ppuVar6 = (undefined **)((long)iVar2 << 0x20 | 2);
          local_200 = 1;
          ppuStack_1f8 = ppuVar6;
                    /* try { // try from 006f9850 to 006f985f has its CatchHandler @ 006f98c8 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
          if (iVar2 == 0) goto LAB_006f9878;
        }
        else {
          ppuVar6 = &PTR_DAT_00977df0;
          if (uVar3 == 0) goto LAB_006f9878;
          if (param_4 < uVar3) {
                    /* try { // try from 006f98ac to 006f98bf has its CatchHandler @ 006f98e0 */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar3,param_4,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ef0);
          }
          param_3 = (void *)((long)param_3 + uVar3);
          param_4 = param_4 - uVar3;
        }
      } while (param_4 != 0);
    }
    ppuVar6 = (undefined **)0x0;
LAB_006f9878:
    close(__fd);
  }
  return ppuVar6;
}


// ===== 006f98f4  std::env::var::inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::env::var::inner */

void __rustcall std::env::var::inner(long *param_1)

{
  long lVar1;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  sys::env::unix::getenv(&local_48);
  lVar1 = local_48;
  if (local_48 == -1) {
    uStack_38 = 0xffffffffffffffff;
    local_48 = 1;
    lVar1 = 8;
  }
  else {
                    /* try { // try from 006f9924 to 006f9933 has its CatchHandler @ 006f996c */
    core::str::converts::from_utf8(&local_48,local_40,uStack_38);
    param_1[1] = lVar1;
    param_1[2] = local_40;
    lVar1 = 0x18;
  }
  *(undefined8 *)((long)param_1 + lVar1) = uStack_38;
  *param_1 = local_48;
  return;
}


// ===== 006f998c  std::panicking::catch_unwind::cleanup =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::catch_unwind::cleanup */

undefined1  [16] __rustcall std::panicking::catch_unwind::cleanup(void)

{
  undefined1 auVar1 [16];
  
  auVar1 = __rustc::__rust_panic_cleanup();
                    /* try { // try from 006f99ac to 006f99af has its CatchHandler @ 006f99c8 */
  panic_count::decrease();
  return auVar1;
}


// ===== 006f99dc  FUN_006f99dc =====

undefined4 FUN_006f99dc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = param_1;
                    /* try { // try from 006f99f4 to 006f99ff has its CatchHandler @ 006f9a18 */
  iVar1 = (**(code **)(param_2[1] + 0x20))(*param_2,&local_30);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  return uVar2;
}


// ===== 006f9a28  std::sys::paths::unix::split_paths::into_pathbuf =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::paths::unix::split_paths::into_pathbuf */

void __rustcall
std::sys::paths::unix::split_paths::into_pathbuf(size_t *param_1,void *param_2,size_t param_3)

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
  ::alloc::raw_vec::handle_error(1,param_3);
}


// ===== 006f9aac  FUN_006f9aac =====

undefined1 * FUN_006f9aac(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *local_28;
  
  puVar3 = PTR_CURRENT_0099f758;
  if (param_1 != 1) {
    lVar5 = *(long *)PTR_CURRENT_0099f758;
    if (lVar5 == 0) {
                    /* try { // try from 006f9b50 to 006f9b5b has its CatchHandler @ 006f9b80 */
      lVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR_CURRENT_0099f758);
    }
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)lVar5);
    puVar7 = puVar6;
    if (&DAT_00000002 < puVar6) {
      lVar5 = *(long *)puVar3;
      if (lVar5 == 0) {
                    /* try { // try from 006f9b70 to 006f9b7b has its CatchHandler @ 006f9b80 */
        lVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                lazy_init(PTR_CURRENT_0099f758);
      }
      uVar4 = pthread_setspecific((pthread_key_t)lVar5,&DAT_00000002);
      puVar7 = (undefined1 *)(ulong)uVar4;
      local_28 = (long *)(puVar6 + -0x10);
      do {
        lVar5 = *local_28;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
        if (bVar2) {
          *local_28 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
        puVar7 = (undefined1 *)
                 <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
                 ::drop_slow(&local_28);
      }
    }
    return puVar7;
  }
  lVar5 = DAT_009a6dd8;
  if (DAT_009a6dd8 == 0) {
                    /* try { // try from 006f9b60 to 006f9b6b has its CatchHandler @ 006f9b90 */
    lVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6dd8);
  }
  uVar4 = pthread_setspecific((pthread_key_t)lVar5,&DAT_00000002);
  return (undefined1 *)(ulong)uVar4;
}


// ===== 006f9b94  FUN_006f9b94 =====

undefined4 FUN_006f9b94(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (PTR_copy_file_range_0099f7e8 == (undefined *)0x0) {
    lVar2 = syscall(0x11d,0xffffffff,0,0xffffffff,0,1,0);
  }
  else {
    lVar2 = copy_file_range(0xffffffff,0,0xffffffff,0,1,0);
  }
  if (lVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      uVar4 = 1;
      if (iVar1 == 9) {
        uVar4 = 2;
      }
      return uVar4;
    }
    uVar4 = 1;
    if (iVar1 == 9) {
      uVar4 = 2;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045bf47,0x51,&PTR_s__rustc_48a229ceaefd4985c50990b14_009781e0);
}


// ===== 006f9c70  FUN_006f9c70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_003712e0;
  param_1[1] = _UNK_003712e8;
  *param_1 = uVar1;
  return;
}


// ===== 006f9c84  FUN_006f9c84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00371ad0;
  param_1[1] = _UNK_00371ad8;
  *param_1 = uVar1;
  return;
}


// ===== 006f9c98  FUN_006f9c98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c98(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00371870;
  param_1[1] = _UNK_00371878;
  *param_1 = uVar1;
  return;
}


// ===== 006f9cac  <std::io::Guard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::Guard as core::ops::drop::Drop>::drop */

void __rustcall <std::io::Guard_as_core::ops::drop::Drop>::drop(long *param_1)

{
  *(long *)(*param_1 + 0x10) = param_1[1];
  return;
}


// ===== 006f9cb8  <std::random::SystemRng_as_core::random::Rng>::fill_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::random::SystemRng as core::random::Rng>::fill_bytes */

void __rustcall
<std::random::SystemRng_as_core::random::Rng>::fill_bytes
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006f5cfc(param_2,param_3,0);
  return;
}


// ===== 006f9cc8  <std::backtrace::Backtrace_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::Backtrace as core::fmt::Debug>::fmt */

undefined8 __rustcall
<std::backtrace::Backtrace_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  long **local_50 [2];
  long *local_28;
  
  if (*param_1 == 0) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045bf6f,0xd);
    return uVar1;
  }
  if (*param_1 == 1) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045bf7c,10);
    return uVar1;
  }
  if ((int)param_1[5] == 0) {
    uVar5 = param_1[3];
    uVar4 = param_1[4];
    if (uVar5 < uVar4) {
LAB_006f9e98:
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar4,uVar5,uVar5,&PTR_s__rustc_48a229ceaefd4985c50990b14_009781f8);
    }
  }
  else {
    local_28 = param_1 + 1;
    local_50[0] = &local_28;
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (param_1 + 5,1,local_50,&DAT_00976b18,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976a88
              );
    uVar5 = param_1[3];
    uVar4 = param_1[4];
    if (uVar5 < uVar4) goto LAB_006f9e98;
  }
  lVar7 = param_1[2];
  uVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0045bf86,10);
  if ((uVar2 & 1) == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_list(local_50,param_2);
    if (uVar4 != uVar5) {
      puVar6 = (uint *)(lVar7 + uVar4 * 0x38);
      do {
        lVar3 = *(long *)(puVar6 + 2);
        if ((*puVar6 & 1) == 0) {
          lVar3 = FUN_00751e80();
        }
        if ((lVar3 != 0) && (*(long *)(puVar6 + 0xc) != 0)) {
          lVar3 = *(long *)(puVar6 + 0xc) * 0x48;
          plVar8 = *(long **)(puVar6 + 10);
          do {
            local_28 = plVar8;
            <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                      (local_50,&local_28,&DAT_00976be8);
            lVar3 = lVar3 + -0x48;
            plVar8 = plVar8 + 9;
          } while (lVar3 != 0);
        }
        puVar6 = puVar6 + 0xe;
      } while (puVar6 != (uint *)(lVar7 + uVar5 * 0x38));
    }
    uVar1 = <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(local_50);
    return uVar1;
  }
  return 1;
}


// ===== 006f9eb0  <std::io::stdio::StdinRaw_as_std::io::Read>::read_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinRaw as std::io::Read>::read_exact */

undefined ** __rustcall
<std::io::stdio::StdinRaw_as_std::io::Read>::read_exact
          (undefined8 param_1,void *param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined **ppuVar7;
  
  puVar2 = PTR_PTR_0099f738;
  if (param_3 != 0) {
    do {
      uVar4 = ::read(0,param_2,param_3);
      if (uVar4 == 0xffffffffffffffff) {
        piVar5 = (int *)__errno();
        iVar1 = *piVar5;
        if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
                    /* try { // try from 006f9f54 to 006f9f63 has its CatchHandler @ 006f9fd8 */
        lVar6 = core::io::error::os_functions::get_os_functions();
        iVar3 = (**(code **)(lVar6 + 0x10))(iVar1);
        ppuVar7 = (undefined **)((long)iVar1 << 0x20 | 2);
        if (iVar3 == 0) goto LAB_006f9fa4;
      }
      else {
        ppuVar7 = &PTR_DAT_00976fb0;
        if (uVar4 == 0) {
LAB_006f9fa4:
          if (((ulong)ppuVar7 & 3) < 2) {
            return ppuVar7;
          }
          if (((ulong)ppuVar7 & 3) != 2) {
            return ppuVar7;
          }
          if ((ulong)ppuVar7 >> 0x20 == 9) {
            return &PTR_DAT_00976fb0;
          }
          return ppuVar7;
        }
        if (param_3 < uVar4) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar4,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976fc8);
        }
        param_2 = (void *)((long)param_2 + uVar4);
        param_3 = param_3 - uVar4;
      }
    } while (param_3 != 0);
  }
  return (undefined **)0x0;
}


// ===== 006f9ff0  <std::io::stdio::StdinRaw_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinRaw as std::io::Read>::read_to_end */

bool __rustcall
<std::io::stdio::StdinRaw_as_std::io::Read>::read_to_end(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_006c5978(param_2,0);
  if (auVar2._0_8_ != 1) {
    return false;
  }
  uVar1 = auVar2._8_8_ & 3;
  if (1 < uVar1) {
    return uVar1 != 2 || (auVar2._8_8_ & 0xffffffff00000000) != 0x900000000;
  }
  return true;
}


// ===== 006fa058  <std::io::stdio::StdinRaw_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinRaw as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<std::io::stdio::StdinRaw_as_std::io::Read>::read_vectored
          (undefined8 param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  uVar3 = readv(0,param_2,(int)param_3);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  uVar3 = (long)iVar1 << 0x20 | 2;
  auVar5._1_7_ = 0;
  auVar5[0] = iVar1 != 9;
  if (iVar1 == 9) {
    uVar3 = 0;
  }
  auVar5._8_8_ = uVar3;
  return auVar5;
}


// ===== 006fa0e8  <std::io::stdio::StdinRaw_as_std::io::Read>::read_buf_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinRaw as std::io::Read>::read_buf_exact */

undefined ** __rustcall
<std::io::stdio::StdinRaw_as_std::io::Read>::read_buf_exact(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  long lVar6;
  size_t __nbytes;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_0099f738;
  lVar1 = param_2[1];
  lVar8 = param_2[2];
  if (lVar1 != lVar8) {
    lVar9 = *param_2;
    do {
      __nbytes = lVar1 - lVar8;
      if (0x7ffffffffffffffe < __nbytes) {
        __nbytes = 0x7fffffffffffffff;
      }
      sVar4 = ::read(0,(void *)(lVar9 + lVar8),__nbytes);
      if (sVar4 == -1) {
        piVar5 = (int *)__errno();
        iVar3 = *piVar5;
        if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        ppuVar7 = (undefined **)((long)iVar3 << 0x20 | 2);
                    /* try { // try from 006fa1b0 to 006fa1bf has its CatchHandler @ 006fa204 */
        lVar6 = core::io::error::os_functions::get_os_functions();
        iVar3 = (**(code **)(lVar6 + 0x10))(iVar3);
        if (iVar3 == 0) {
LAB_006fa1dc:
          if (((ulong)ppuVar7 & 3) < 2) {
            return ppuVar7;
          }
          if (((ulong)ppuVar7 & 3) != 2) {
            return ppuVar7;
          }
          if ((ulong)ppuVar7 >> 0x20 == 9) {
            return &PTR_DAT_00976fb0;
          }
          return ppuVar7;
        }
      }
      else {
        lVar8 = sVar4 + lVar8;
        param_2[2] = lVar8;
        if (sVar4 == 0) {
          ppuVar7 = &PTR_DAT_00976fb0;
          goto LAB_006fa1dc;
        }
      }
    } while (lVar1 != lVar8);
  }
  return (undefined **)0x0;
}


// ===== 006fa21c  <std::io::stdio::StdinRaw_as_std::io::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinRaw as std::io::Read>::read_to_string */

undefined1  [16] __rustcall
<std::io::stdio::StdinRaw_as_std::io::Read>::read_to_string(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_58 [3];
  
  lVar5 = *(long *)(param_2 + 0x10);
                    /* try { // try from 006fa23c to 006fa247 has its CatchHandler @ 006fa2fc */
  auVar6 = FUN_006c5978(param_2,0);
  puVar4 = auVar6._8_8_;
  lVar1 = *(long *)(param_2 + 0x10);
                    /* try { // try from 006fa258 to 006fa263 has its CatchHandler @ 006fa2e4 */
  core::str::converts::from_utf8(local_58,*(long *)(param_2 + 8) + lVar5,lVar1 - lVar5);
  if (local_58[0] == 0) {
    *(long *)(param_2 + 0x10) = lVar1;
    if (auVar6._0_8_ != 1) {
      uVar3 = 0;
      goto LAB_006fa2c8;
    }
  }
  else {
    if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      puVar4 = &UNK_00976e60;
    }
    *(long *)(param_2 + 0x10) = lVar5;
  }
  uVar3 = 1;
  if (((1 < ((ulong)puVar4 & 3)) && (((ulong)puVar4 & 3) == 2)) &&
     (bVar2 = ((ulong)puVar4 & 0xffffffff00000000) != 0x900000000, uVar3 = (ulong)bVar2, !bVar2)) {
    puVar4 = (undefined *)0x0;
  }
LAB_006fa2c8:
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}


// ===== 006fa30c  <std::io::stdio::StdinRaw_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinRaw as std::io::Read>::read */

undefined1  [16] __rustcall
<std::io::stdio::StdinRaw_as_std::io::Read>::read(undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  
  uVar3 = ::read(0,param_2,param_3);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  uVar3 = (long)iVar1 << 0x20 | 2;
  auVar5._1_7_ = 0;
  auVar5[0] = iVar1 != 9;
  if (iVar1 == 9) {
    uVar3 = 0;
  }
  auVar5._8_8_ = uVar3;
  return auVar5;
}


// ===== 006fa390  <std::io::stdio::StdinRaw_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinRaw as std::io::Read>::read_buf */

ulong __rustcall
<std::io::stdio::StdinRaw_as_std::io::Read>::read_buf(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  size_t __nbytes;
  
  lVar2 = param_2[2];
  __nbytes = param_2[1] - lVar2;
  if (0x7ffffffffffffffe < __nbytes) {
    __nbytes = 0x7fffffffffffffff;
  }
  sVar4 = ::read(0,(void *)(*param_2 + lVar2),__nbytes);
  if (sVar4 != -1) {
    param_2[2] = sVar4 + lVar2;
    return 0;
  }
  piVar5 = (int *)__errno();
  iVar3 = *piVar5;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  uVar1 = 0;
  if (iVar3 != 9) {
    uVar1 = (long)iVar3 << 0x20 | 2;
  }
  return uVar1;
}


// ===== 006fa438  <std::sync::nonpoison::WouldBlock_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::nonpoison::WouldBlock as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::nonpoison::WouldBlock_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(&DAT_0045bf90,10,param_2);
  return;
}


// ===== 006fa44c  <std::thread::functions::PanicGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::functions::PanicGuard as core::ops::drop::Drop>::drop */

void __rustcall <std::thread::functions::PanicGuard_as_core::ops::drop::Drop>::drop(void)

{
  undefined1 uStack_11;
  
  FUN_0070e928(&uStack_11,&DAT_0045bf9a,0xb7);
  FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006fa474  <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::spawnhook::SpawnHooks as core::ops::drop::Drop>::drop */

void __rustcall
<std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)*param_1;
  *param_1 = 0;
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return;
    }
    do {
      lVar5 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 != 0) break;
    DataMemoryBarrier(2,1);
    lVar5 = plVar7[2];
    puVar2 = (undefined8 *)plVar7[3];
    plVar8 = (long *)plVar7[4];
    if (plVar7 != (long *)0xffffffffffffffff) {
      plVar1 = plVar7 + 1;
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
        DataMemoryBarrier(2,1);
        __rustc::__rust_dealloc(plVar7,0x28,8);
      }
    }
    if (lVar5 == 0) {
      return;
    }
    if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 006fa514 to 006fa51b has its CatchHandler @ 006fa534 */
      (*(code *)*puVar2)(lVar5);
    }
    plVar7 = plVar8;
    if (puVar2[1] != 0) {
      __rustc::__rust_dealloc(lVar5,puVar2[1],puVar2[2]);
    }
  }
  return;
}


// ===== 006fa580  FUN_006fa580 =====

/* WARNING: Removing unreachable block (ram,0x006fa790) */
/* WARNING: Removing unreachable block (ram,0x006fa794) */

void FUN_006fa580(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  short *psVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  short *psVar7;
  undefined *puVar8;
  undefined8 uVar9;
  addrinfo *paVar10;
  ushort unaff_w19;
  undefined4 unaff_w21;
  short sVar11;
  short sVar12;
  undefined4 unaff_w22;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined4 local_7c;
  long local_78;
  short *psStack_70;
  long local_68;
  
  lVar3 = param_2[1];
  do {
    lVar15 = lVar3;
    if (lVar15 == 0) {
      paVar10 = (addrinfo *)*param_2;
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      freeaddrinfo(paVar10);
      return;
    }
    psVar7 = *(short **)(lVar15 + 0x20);
    lVar3 = *(long *)(lVar15 + 0x28);
    sVar11 = *psVar7;
    param_2[1] = lVar3;
    if (sVar11 == 10) {
      if (0x1b < *(uint *)(lVar15 + 0x10)) {
        sVar11 = 1;
        unaff_w22 = *(undefined4 *)(psVar7 + 2);
        uVar13 = (uint)(ushort)psVar7[5];
        ppuVar17 = *(undefined ***)(psVar7 + 6);
        iVar14 = (uint)(ushort)psVar7[4] << 0x10;
        unaff_w19 = (ushort)psVar7[1] >> 8 | (ushort)(((ushort)psVar7[1] & 0xff00ff) << 8);
        unaff_w21 = *(undefined4 *)(psVar7 + 10);
        local_7c = *(undefined4 *)(psVar7 + 0xc);
        goto LAB_006fa664;
      }
      ppuVar17 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978168;
      puVar8 = &DAT_0045bd10;
      uVar9 = 0x35;
      goto LAB_006fa858;
    }
  } while (sVar11 != 2);
  if (*(uint *)(lVar15 + 0x10) < 0x10) {
    ppuVar17 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978150;
    puVar8 = &DAT_0045bcdc;
    uVar9 = 0x34;
LAB_006fa858:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006fa858 to 006fa85b has its CatchHandler @ 006fa888 */
    core::panicking::panic(puVar8,uVar9,ppuVar17);
  }
  iVar14 = *(int *)(psVar7 + 2);
  sVar11 = 0;
  ppuVar17 = &PTR_s_invalid_argument_00978180;
  uVar13 = (uint)((ushort)psVar7[1] >> 8) | ((ushort)psVar7[1] & 0xff00ff) << 8;
LAB_006fa664:
  uVar4 = *(ushort *)(param_2 + 2);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  psVar7 = (short *)__rustc::__rust_alloc(0x80,4);
  if (psVar7 == (short *)0x0) {
                    /* try { // try from 006fa860 to 006fa86b has its CatchHandler @ 006fa874 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(4,0x80);
  }
  paVar10 = (addrinfo *)*param_2;
  *(int *)(psVar7 + 1) = iVar14;
  uVar1 = uVar13;
  if (sVar11 == 0) {
    uVar1 = (uint)uVar4;
  }
  lVar15 = 1;
  psVar7[3] = (short)uVar1;
  uVar5 = uVar4;
  if (sVar11 == 0) {
    uVar5 = unaff_w19;
  }
  *psVar7 = sVar11;
  *(undefined ***)(psVar7 + 4) = ppuVar17;
  *(undefined4 *)(psVar7 + 8) = unaff_w21;
  *(undefined4 *)(psVar7 + 10) = unaff_w22;
  *(undefined4 *)(psVar7 + 0xc) = local_7c;
  psVar7[0xe] = uVar5;
  local_78 = 4;
  local_68 = 1;
  psStack_70 = psVar7;
LAB_006fa6f4:
  lVar16 = lVar3;
  if (lVar16 == 0) {
    freeaddrinfo(paVar10);
    param_1[1] = (long)psStack_70;
    *param_1 = local_78;
    param_1[2] = local_68;
    return;
  }
  psVar2 = *(short **)(lVar16 + 0x20);
  lVar3 = *(long *)(lVar16 + 0x28);
  if (*psVar2 != 10) goto code_r0x006fa70c;
  if (*(uint *)(lVar16 + 0x10) < 0x1c) {
    puVar8 = &DAT_0045bd10;
    uVar9 = 0x35;
    ppuVar17 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978168;
    goto LAB_006fa824;
  }
  local_7c = *(undefined4 *)(psVar2 + 2);
  sVar12 = 1;
  sVar11 = 1;
  ppuVar17 = *(undefined ***)(psVar2 + 6);
  param_2 = (undefined8 *)(ulong)*(uint *)(psVar2 + 10);
  uVar13 = *(uint *)(psVar2 + 0xc);
  uVar5 = psVar2[5];
  iVar14 = (uint)(ushort)psVar2[4] << 0x10;
  uVar6 = uVar4;
  goto joined_r0x006fa74c;
code_r0x006fa70c:
  if (*psVar2 == 2) {
    if (*(uint *)(lVar16 + 0x10) < 0x10) {
      ppuVar17 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978150;
      puVar8 = &DAT_0045bcdc;
      uVar9 = 0x34;
LAB_006fa824:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006fa824 to 006fa827 has its CatchHandler @ 006fa89c */
      core::panicking::panic(puVar8,uVar9,ppuVar17);
    }
    iVar14 = *(int *)(psVar2 + 2);
    sVar12 = 0;
    sVar11 = 0;
    ppuVar17 = &PTR_s_invalid_argument_00978180;
    uVar5 = uVar4;
    uVar6 = (ushort)psVar2;
joined_r0x006fa74c:
    if (lVar15 == local_78) {
                    /* try { // try from 006fa7a0 to 006fa7b7 has its CatchHandler @ 006fa870 */
      FUN_006cecec(&local_78,lVar15,1,4,0x20);
      psVar7 = psStack_70;
      sVar11 = sVar12;
    }
    psVar2 = psVar7 + lVar15 * 0x10;
    lVar15 = lVar15 + 1;
    *psVar2 = sVar11;
    *(int *)(psVar2 + 1) = iVar14;
    psVar2[3] = uVar5;
    *(undefined ***)(psVar2 + 4) = ppuVar17;
    *(int *)(psVar2 + 8) = (int)param_2;
    *(undefined4 *)(psVar2 + 10) = local_7c;
    *(uint *)(psVar2 + 0xc) = uVar13;
    psVar2[0xe] = uVar6;
    local_68 = lVar15;
  }
  goto LAB_006fa6f4;
}


// ===== 006fa8c8  <std::fs::File_as_std::os::unix::fs::FileExt>::read_buf_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::os::unix::fs::FileExt>::read_buf_at */

ulong __rustcall
<std::fs::File_as_std::os::unix::fs::FileExt>::read_buf_at
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


// ===== 006fa97c  <std::fs::File_as_std::os::unix::fs::FileExt>::read_vectored_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::os::unix::fs::FileExt>::read_vectored_at */

undefined1  [16] __rustcall
<std::fs::File_as_std::os::unix::fs::FileExt>::read_vectored_at
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


// ===== 006faa50  <std::fs::File_as_std::os::unix::fs::FileExt>::write_vectored_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::os::unix::fs::FileExt>::write_vectored_at */

undefined1  [16] __rustcall
<std::fs::File_as_std::os::unix::fs::FileExt>::write_vectored_at
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


// ===== 006fab24  <std::fs::File_as_std::os::unix::fs::FileExt>::read_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::os::unix::fs::FileExt>::read_at */

undefined1  [16] __rustcall
<std::fs::File_as_std::os::unix::fs::FileExt>::read_at
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


// ===== 006fabac  <std::fs::File_as_std::os::unix::fs::FileExt>::write_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::os::unix::fs::FileExt>::write_at */

undefined1  [16] __rustcall
<std::fs::File_as_std::os::unix::fs::FileExt>::write_at
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


// ===== 006fac34  <std::io::stdio::Stdout_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as std::os::unix::io::StdioExt>::take_fd */

void __rustcall
<std::io::stdio::Stdout_as_std::os::unix::io::StdioExt>::take_fd
          (undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  void *pvVar4;
  int iVar5;
  undefined8 *local_28;
  
  param_2 = (undefined8 *)*param_2;
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_006fac98;
LAB_006fac64:
    if (pvVar4 != (void *)*param_2) {
LAB_006faca8:
      piVar1 = (int *)(param_2 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (param_2 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_2 = pvVar4;
      iVar5 = 1;
      goto LAB_006facc8;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar4 != (void *)0x0) goto LAB_006fac64;
LAB_006fac98:
    pvVar4 = (void *)FUN_006d2020();
    if (pvVar4 != (void *)*param_2) goto LAB_006faca8;
  }
  if (*(int *)((long)param_2 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar5 = *(int *)((long)param_2 + 0xc) + 1;
LAB_006facc8:
  *(int *)((long)param_2 + 0xc) = iVar5;
                    /* try { // try from 006facd0 to 006facdb has its CatchHandler @ 006fad64 */
  local_28 = param_2;
  <std::io::stdio::StdoutLock_as_std::os::unix::io::StdioExt>::take_fd(param_1,&local_28);
  iVar5 = *(int *)((long)param_2 + 0xc) + -1;
  *(int *)((long)param_2 + 0xc) = iVar5;
  if (iVar5 == 0) {
    piVar1 = (int *)(param_2 + 1);
    *param_2 = 0;
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return;
    }
  }
  return;
}


// ===== 006fad78  <std::process::Command_as_std::os::unix::process::CommandExt>::exec =====

/* WARNING: Removing unreachable block (ram,0x006faedc) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Command as std::os::unix::process::CommandExt>::exec */

undefined ** __rustcall
<std::process::Command_as_std::os::unix::process::CommandExt>::exec
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined **ppuVar5;
  long local_80 [3];
  uint local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_006e70d4(local_80,param_1);
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    ppuVar5 = &PTR_DAT_009775b8;
    goto joined_r0x006faec4;
  }
                    /* try { // try from 006fadd0 to 006fade3 has its CatchHandler @ 006faf54 */
  FUN_006e7ca4(&local_68,param_1,0,param_4,1);
  if (local_68 == 1) {
    ppuVar5 = (undefined **)CONCAT44(iStack_5c,local_60);
    goto joined_r0x006faec4;
  }
  uStack_38 = uStack_50;
  local_40 = local_58;
  local_30 = local_48;
  if (DAT_009a6f00 < 0x3ffffffe) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_009a6f00 = DAT_009a6f00 + 1;
    }
    if (cVar2 != '\0') goto LAB_006faee0;
  }
  else {
LAB_006faee0:
                    /* try { // try from 006faee0 to 006faeeb has its CatchHandler @ 006faef8 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
              (&DAT_009a6f00);
  }
  plVar1 = (long *)(undefined1 *)0x0;
  if (local_80[0] != -1) {
    plVar1 = local_80;
  }
                    /* try { // try from 006fae54 to 006fae5f has its CatchHandler @ 006faf08 */
  ppuVar5 = (undefined **)FUN_006d740c(param_1,&local_40,plVar1);
  do {
    uVar4 = DAT_009a6f00 - 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x9a6f00,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_009a6f00 = uVar4;
    }
  } while (cVar2 != '\0');
  if ((uVar4 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 006faecc to 006faed7 has its CatchHandler @ 006faef0 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (&DAT_009a6f00);
  }
  if ((local_68 & 1) == 0) {
    if (local_64 != -1) {
      close(local_64);
    }
    if (local_60 != -1) {
      close(local_60);
    }
    if (iStack_5c != -1) {
      close(iStack_5c);
    }
  }
joined_r0x006faec4:
  if (local_80[0] != -1) {
    FUN_006c4ef4(local_80);
  }
  return ppuVar5;
}


// ===== 006faf78  <std::process::Command_as_std::os::unix::process::CommandExt>::groups =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Command as std::os::unix::process::CommandExt>::groups */

long __rustcall
<std::process::Command_as_std::os::unix::process::CommandExt>::groups
          (long param_1,void *param_2,long param_3)

{
  undefined1 *__dest;
  long lVar1;
  size_t __n;
  
  __n = param_3 << 2;
  if (param_3 == 0) {
    __dest = &DAT_00000004;
    memcpy(&DAT_00000004,param_2,__n);
    lVar1 = *(long *)(param_1 + 0xb0);
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)__rustc::__rust_alloc(__n,4);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(4,__n);
    }
    memcpy(__dest,param_2,__n);
    lVar1 = *(long *)(param_1 + 0xb0);
  }
  if ((lVar1 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
    __rustc::__rust_dealloc(lVar1,*(long *)(param_1 + 0xb8) << 2,4);
    *(undefined1 **)(param_1 + 0xb0) = __dest;
    *(long *)(param_1 + 0xb8) = param_3;
    return param_1;
  }
  *(undefined1 **)(param_1 + 0xb0) = __dest;
  *(long *)(param_1 + 0xb8) = param_3;
  return param_1;
}


// ===== 006fb034  <std::sys::paths::unix::JoinPathsError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::paths::unix::JoinPathsError as core::fmt::Display>::fmt */

void __rustcall
<std::sys::paths::unix::JoinPathsError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined *puStack_18;
  
  local_20 = &local_24;
  local_24 = 0x3a;
  puStack_18 = PTR_fmt_0099f5a8;
  core::fmt::write(*param_2,param_2[1],&DAT_0036836f,&local_20);
  return;
}


// ===== 006fb078  <std::sys::process::env::CommandEnv_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::env::CommandEnv as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::env::CommandEnv_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045bff5,10);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0045bfff,5,param_1 + 0x18,&DAT_00977f80);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_00377e50,4,param_1,&PTR_FUN_00978210);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_30);
  return;
}


// ===== 006fb0fc  <std::thread::thread::thread_name_string::ThreadNameString_as_core::convert::From<alloc::string::String>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::thread::thread_name_string::ThreadNameString as
   core::convert::From<alloc::string::String>>::from */

undefined1  [16] __rustcall
<std::thread::thread::thread_name_string::ThreadNameString_as_core::convert::From<alloc::string::String>>
::from(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long local_50;
  long lStack_48;
  ulong local_40;
  undefined8 uStack_38;
  
  lStack_48 = *(long *)*(undefined1 (*) [16])(param_1 + 1);
  local_40 = param_1[2];
  auVar4 = *(undefined1 (*) [16])(param_1 + 1);
  lVar2 = *param_1;
  local_50 = lVar2;
  if (local_40 < 0x10) {
    uVar1 = 0;
    if (local_40 != 0) {
      do {
        auVar3._8_8_ = uVar1;
        auVar3._0_8_ = 1;
        if (*(char *)(lStack_48 + uVar1) == '\0') goto LAB_006fb160;
        uVar1 = uVar1 + 1;
      } while (local_40 != uVar1);
    }
  }
  else {
                    /* try { // try from 006fb150 to 006fb15f has its CatchHandler @ 006fb1d8 */
    auVar3 = core::slice::memchr::memchr_aligned(0,lStack_48,local_40);
LAB_006fb160:
    uStack_38 = auVar3._8_8_;
    if ((auVar3 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      if (lVar2 == -1) {
        return auVar4;
      }
                    /* try { // try from 006fb174 to 006fb197 has its CatchHandler @ 006fb1f8 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045c004,0x2f,&local_50,&PTR_FUN_00977428,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00978230);
    }
  }
  auVar4 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked(&local_50);
  return auVar4;
}


// ===== 006fb220  <std::net::tcp::TcpStream_as_std::os::net::linux_ext::tcp::TcpStreamExt>::set_quickack =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as std::os::net::linux_ext::tcp::TcpStreamExt>::set_quickack */

ulong __rustcall
<std::net::tcp::TcpStream_as_std::os::net::linux_ext::tcp::TcpStreamExt>::set_quickack
          (int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 006fb2b8  <std::net::tcp::TcpStream_as_std::os::net::linux_ext::tcp::TcpStreamExt>::quickack =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as std::os::net::linux_ext::tcp::TcpStreamExt>::quickack */

void __rustcall
<std::net::tcp::TcpStream_as_std::os::net::linux_ext::tcp::TcpStreamExt>::quickack
          (undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,6,0xc,local_28,(socklen_t *)(local_28 + 1));
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


// ===== 006fb374  <std::os::unix::net::datagram::UnixDatagram_as_std::os::net::linux_ext::socket::UnixSocketExt>::set_passcred =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::UnixDatagram as
   std::os::net::linux_ext::socket::UnixSocketExt>::set_passcred */

ulong __rustcall
<std::os::unix::net::datagram::UnixDatagram_as_std::os::net::linux_ext::socket::UnixSocketExt>::
set_passcred(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,1,0x10,&local_4,4);
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


// ===== 006fb40c  <std::os::unix::net::datagram::UnixDatagram_as_std::os::net::linux_ext::socket::UnixSocketExt>::passcred =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::UnixDatagram as
   std::os::net::linux_ext::socket::UnixSocketExt>::passcred */

void __rustcall
<std::os::unix::net::datagram::UnixDatagram_as_std::os::net::linux_ext::socket::UnixSocketExt>::
passcred(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 4;
  iVar1 = getsockopt(*param_2,1,0x10,local_28,(socklen_t *)(local_28 + 1));
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


// ===== 006fb4c8  <std::os::unix::net::stream::UnixStream_as_core::fmt::Debug>::fmt =====

/* WARNING: Removing unreachable block (ram,0x006fb584) */
/* WARNING: Removing unreachable block (ram,0x006fb6e8) */
/* WARNING: Removing unreachable block (ram,0x006fb5c8) */
/* WARNING: Removing unreachable block (ram,0x006fb72c) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as core::fmt::Debug>::fmt */

void __rustcall
<std::os::unix::net::stream::UnixStream_as_core::fmt::Debug>::fmt(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  socklen_t sVar25;
  undefined1 auStack_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  sockaddr local_b0;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined6 uStack_42;
  socklen_t local_34;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_130,param_2,&DAT_0045c033,10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_130,&DAT_0045ba82,2,param_1,&PTR_FUN_00978248);
  iVar24 = *param_1;
  local_34 = 0x6e;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family._0_1_ = 0;
  local_b0.sa_family._1_1_ = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iVar23 = getsockname(iVar24,&local_b0,&local_34);
  uVar22 = uStack_48;
  uVar21 = local_58;
  uVar20 = uStack_5c;
  uVar19 = uStack_64;
  uVar18 = uStack_68;
  uVar17 = uStack_6c;
  uVar16 = uStack_74;
  uVar15 = uStack_7c;
  uVar14 = uStack_84;
  uVar13 = uStack_88;
  uVar12 = uStack_8c;
  uVar11 = uStack_94;
  uVar10 = uStack_98;
  uVar9 = uStack_9c;
  uVar8 = local_b0.sa_data._10_4_;
  uVar6 = local_b0.sa_data._6_4_;
  uVar4 = local_b0.sa_data._0_2_;
  if (iVar23 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  else {
    sVar2 = CONCAT11(local_b0.sa_family._1_1_,(undefined1)local_b0.sa_family);
    if (local_34 == 0) {
      sVar25 = 2;
    }
    else {
      sVar25 = local_34;
      if (sVar2 != 1) goto LAB_006fb688;
    }
    uStack_e8 = CONCAT44(uStack_6c,local_70);
    local_f0 = CONCAT44(uStack_74,uStack_78);
    uStack_d8 = CONCAT44(uStack_5c,uStack_60);
    uStack_e0 = CONCAT44(uStack_64,uStack_68);
    uStack_f8 = CONCAT44(uStack_7c,uStack_80);
    local_100 = CONCAT44(uStack_84,uStack_88);
    uStack_c8 = CONCAT24(uStack_4c,uStack_50);
    local_d0 = CONCAT26(uStack_52,CONCAT24(uStack_54,local_58));
    uStack_108 = CONCAT44(uStack_8c,local_90);
    local_110 = CONCAT44(uStack_94,uStack_98);
    uStack_118 = CONCAT44(uStack_9c,uStack_a0);
    local_120 = CONCAT44(local_b0.sa_data._10_4_,local_b0.sa_data._6_4_);
    uStack_c2 = uStack_4a;
    uStack_c0 = (undefined6)(CONCAT26(uStack_44,CONCAT42(uStack_48,uStack_4a)) >> 0x10);
    local_b0.sa_family._0_1_ = (undefined1)sVar25;
    local_b0.sa_family._1_1_ = (undefined1)(sVar25 >> 8);
    local_b0.sa_data._0_2_ = (undefined2)(sVar25 >> 0x10);
    uVar5 = local_b0.sa_data._0_2_;
    uStack_6c = local_70;
    uStack_68 = uVar17;
    uStack_74 = uStack_78;
    local_70 = uVar16;
    uVar1 = CONCAT26(uStack_4a,uStack_c8);
    local_b0.sa_data._6_4_ =
         (uint)(ushort)local_b0.sa_data._2_2_ |
         (uint)(((ulong)(ushort)local_b0.sa_data._4_2_ << 0x30) >> 0x20);
    uVar7 = local_b0.sa_data._6_4_;
    uStack_5c = uStack_60;
    local_58 = uVar20;
    uStack_64 = uVar18;
    uStack_60 = uVar19;
    uStack_4c = (undefined2)uStack_50;
    uStack_4a = (undefined2)((uint)uStack_50 >> 0x10);
    uStack_48 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_54 = (undefined2)uVar21;
    uStack_52 = (undefined2)(uVar21 >> 0x10);
    uStack_50 = (undefined4)((ulong)local_d0 >> 0x20);
    uStack_9c = uStack_a0;
    uStack_98 = uVar9;
    local_b0.sa_data[6] = (char)uVar6;
    local_b0.sa_data[7] = SUB41(uVar6,1);
    local_b0.sa_data[8] = SUB41(uVar6,2);
    local_b0.sa_data[9] = SUB41(uVar6,3);
    local_b0.sa_data[10] = local_b0.sa_data[6];
    local_b0.sa_data[0xb] = local_b0.sa_data[7];
    local_b0.sa_data[0xc] = local_b0.sa_data[8];
    local_b0.sa_data[0xd] = local_b0.sa_data[9];
    uVar6 = local_b0.sa_data._10_4_;
    local_b0.sa_data[10] = (char)uVar8;
    local_b0.sa_data[0xb] = SUB41(uVar8,1);
    local_b0.sa_data[0xc] = SUB41(uVar8,2);
    local_b0.sa_data[0xd] = SUB41(uVar8,3);
    uStack_a0._0_1_ = local_b0.sa_data[10];
    uStack_a0._1_1_ = local_b0.sa_data[0xb];
    uStack_a0._2_1_ = local_b0.sa_data[0xc];
    uStack_a0._3_1_ = local_b0.sa_data[0xd];
    local_b0.sa_data[0] = (char)uVar4;
    local_b0.sa_data[1] = SUB21(uVar4,1);
    local_b0.sa_data[4] = local_b0.sa_data[0];
    local_b0.sa_data[5] = local_b0.sa_data[1];
    uStack_8c = local_90;
    uStack_88 = uVar12;
    uStack_94 = uVar10;
    local_90 = uVar11;
    uStack_44 = (undefined2)uVar22;
    uStack_42 = (undefined6)(CONCAT26(uStack_ba,uStack_c0) >> 0x10);
    uStack_7c = uStack_80;
    uStack_78 = uVar15;
    uStack_84 = uVar13;
    uStack_80 = uVar14;
                    /* try { // try from 006fb668 to 006fb687 has its CatchHandler @ 006fb83c */
    local_b0.sa_data._0_2_ = uVar5;
    local_b0.sa_data._2_2_ = sVar2;
    local_b0.sa_data._6_4_ = uVar7;
    local_b0.sa_data._10_4_ = uVar6;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_130,&DAT_0045c03d,5,&local_b0,&DAT_00978268);
  }
LAB_006fb688:
  local_34 = 0x6e;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family._0_1_ = 0;
  local_b0.sa_family._1_1_ = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iVar24 = getpeername(iVar24,&local_b0,&local_34);
  uVar22 = uStack_48;
  uVar21 = local_58;
  uVar20 = uStack_5c;
  uVar19 = uStack_64;
  uVar18 = uStack_68;
  uVar17 = uStack_6c;
  uVar16 = uStack_74;
  uVar15 = uStack_7c;
  uVar14 = uStack_84;
  uVar13 = uStack_88;
  uVar12 = uStack_8c;
  uVar11 = uStack_94;
  uVar10 = uStack_98;
  uVar9 = uStack_9c;
  uVar8 = local_b0.sa_data._10_4_;
  uVar6 = local_b0.sa_data._6_4_;
  uVar4 = local_b0.sa_data._0_2_;
  if (iVar24 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  else {
    uVar3 = CONCAT11(local_b0.sa_family._1_1_,(undefined1)local_b0.sa_family);
    if (local_34 == 0) {
      sVar25 = 2;
    }
    else {
      sVar25 = local_34;
      if (uVar3 != 1) goto LAB_006fb7ec;
    }
    uStack_e8 = CONCAT44(uStack_6c,local_70);
    local_f0 = CONCAT44(uStack_74,uStack_78);
    uStack_d8 = CONCAT44(uStack_5c,uStack_60);
    uStack_e0 = CONCAT44(uStack_64,uStack_68);
    uStack_f8 = CONCAT44(uStack_7c,uStack_80);
    local_100 = CONCAT44(uStack_84,uStack_88);
    uStack_c8 = CONCAT24(uStack_4c,uStack_50);
    local_d0 = CONCAT26(uStack_52,CONCAT24(uStack_54,local_58));
    uStack_108 = CONCAT44(uStack_8c,local_90);
    local_110 = CONCAT44(uStack_94,uStack_98);
    uStack_118 = CONCAT44(uStack_9c,uStack_a0);
    local_120 = CONCAT44(local_b0.sa_data._10_4_,local_b0.sa_data._6_4_);
    uStack_c2 = uStack_4a;
    uStack_c0 = (undefined6)(CONCAT26(uStack_44,CONCAT42(uStack_48,uStack_4a)) >> 0x10);
    local_b0.sa_family._0_1_ = (undefined1)sVar25;
    local_b0.sa_family._1_1_ = (undefined1)(sVar25 >> 8);
    local_b0.sa_data._0_2_ = (undefined2)(sVar25 >> 0x10);
    uVar5 = local_b0.sa_data._0_2_;
    uStack_6c = local_70;
    uStack_68 = uVar17;
    uStack_74 = uStack_78;
    local_70 = uVar16;
    uVar1 = CONCAT26(uStack_4a,uStack_c8);
    local_b0.sa_data._6_4_ =
         (uint)(ushort)local_b0.sa_data._2_2_ |
         (uint)(((ulong)(ushort)local_b0.sa_data._4_2_ << 0x30) >> 0x20);
    uVar7 = local_b0.sa_data._6_4_;
    uStack_5c = uStack_60;
    local_58 = uVar20;
    uStack_64 = uVar18;
    uStack_60 = uVar19;
    uStack_4c = (undefined2)uStack_50;
    uStack_4a = (undefined2)((uint)uStack_50 >> 0x10);
    uStack_48 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_54 = (undefined2)uVar21;
    uStack_52 = (undefined2)(uVar21 >> 0x10);
    uStack_50 = (undefined4)((ulong)local_d0 >> 0x20);
    uStack_9c = uStack_a0;
    uStack_98 = uVar9;
    local_b0.sa_data[6] = (char)uVar6;
    local_b0.sa_data[7] = SUB41(uVar6,1);
    local_b0.sa_data[8] = SUB41(uVar6,2);
    local_b0.sa_data[9] = SUB41(uVar6,3);
    local_b0.sa_data[10] = local_b0.sa_data[6];
    local_b0.sa_data[0xb] = local_b0.sa_data[7];
    local_b0.sa_data[0xc] = local_b0.sa_data[8];
    local_b0.sa_data[0xd] = local_b0.sa_data[9];
    uVar6 = local_b0.sa_data._10_4_;
    local_b0.sa_data[10] = (char)uVar8;
    local_b0.sa_data[0xb] = SUB41(uVar8,1);
    local_b0.sa_data[0xc] = SUB41(uVar8,2);
    local_b0.sa_data[0xd] = SUB41(uVar8,3);
    uStack_a0._0_1_ = local_b0.sa_data[10];
    uStack_a0._1_1_ = local_b0.sa_data[0xb];
    uStack_a0._2_1_ = local_b0.sa_data[0xc];
    uStack_a0._3_1_ = local_b0.sa_data[0xd];
    local_b0.sa_data[0] = (char)uVar4;
    local_b0.sa_data[1] = SUB21(uVar4,1);
    local_b0.sa_data[4] = local_b0.sa_data[0];
    local_b0.sa_data[5] = local_b0.sa_data[1];
    uStack_8c = local_90;
    uStack_88 = uVar12;
    uStack_94 = uVar10;
    local_90 = uVar11;
    uStack_44 = (undefined2)uVar22;
    uStack_42 = (undefined6)(CONCAT26(uStack_ba,uStack_c0) >> 0x10);
    uStack_7c = uStack_80;
    uStack_78 = uVar15;
    uStack_84 = uVar13;
    uStack_80 = uVar14;
                    /* try { // try from 006fb7cc to 006fb7eb has its CatchHandler @ 006fb828 */
    local_b0.sa_data._0_2_ = uVar5;
    local_b0.sa_data._2_2_ = uVar3;
    local_b0.sa_data._6_4_ = uVar7;
    local_b0.sa_data._10_4_ = uVar6;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_130,&DAT_00379d90,4,&local_b0,&DAT_00978268);
  }
LAB_006fb7ec:
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_130);
  return;
}


// ===== 006fb858  <std::os::unix::net::datagram::UnixDatagram_as_core::fmt::Debug>::fmt =====

/* WARNING: Removing unreachable block (ram,0x006fb914) */
/* WARNING: Removing unreachable block (ram,0x006fba78) */
/* WARNING: Removing unreachable block (ram,0x006fb958) */
/* WARNING: Removing unreachable block (ram,0x006fbabc) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::UnixDatagram as core::fmt::Debug>::fmt */

void __rustcall
<std::os::unix::net::datagram::UnixDatagram_as_core::fmt::Debug>::fmt
          (int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  socklen_t sVar25;
  undefined1 auStack_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  sockaddr local_b0;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined6 uStack_42;
  socklen_t local_34;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_130,param_2,&DAT_0045c042,0xc);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_130,&DAT_0045ba82,2,param_1,&PTR_FUN_00978248);
  iVar24 = *param_1;
  local_34 = 0x6e;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family._0_1_ = 0;
  local_b0.sa_family._1_1_ = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iVar23 = getsockname(iVar24,&local_b0,&local_34);
  uVar22 = uStack_48;
  uVar21 = local_58;
  uVar20 = uStack_5c;
  uVar19 = uStack_64;
  uVar18 = uStack_68;
  uVar17 = uStack_6c;
  uVar16 = uStack_74;
  uVar15 = uStack_7c;
  uVar14 = uStack_84;
  uVar13 = uStack_88;
  uVar12 = uStack_8c;
  uVar11 = uStack_94;
  uVar10 = uStack_98;
  uVar9 = uStack_9c;
  uVar8 = local_b0.sa_data._10_4_;
  uVar6 = local_b0.sa_data._6_4_;
  uVar4 = local_b0.sa_data._0_2_;
  if (iVar23 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  else {
    sVar2 = CONCAT11(local_b0.sa_family._1_1_,(undefined1)local_b0.sa_family);
    if (local_34 == 0) {
      sVar25 = 2;
    }
    else {
      sVar25 = local_34;
      if (sVar2 != 1) goto LAB_006fba18;
    }
    uStack_e8 = CONCAT44(uStack_6c,local_70);
    local_f0 = CONCAT44(uStack_74,uStack_78);
    uStack_d8 = CONCAT44(uStack_5c,uStack_60);
    uStack_e0 = CONCAT44(uStack_64,uStack_68);
    uStack_f8 = CONCAT44(uStack_7c,uStack_80);
    local_100 = CONCAT44(uStack_84,uStack_88);
    uStack_c8 = CONCAT24(uStack_4c,uStack_50);
    local_d0 = CONCAT26(uStack_52,CONCAT24(uStack_54,local_58));
    uStack_108 = CONCAT44(uStack_8c,local_90);
    local_110 = CONCAT44(uStack_94,uStack_98);
    uStack_118 = CONCAT44(uStack_9c,uStack_a0);
    local_120 = CONCAT44(local_b0.sa_data._10_4_,local_b0.sa_data._6_4_);
    uStack_c2 = uStack_4a;
    uStack_c0 = (undefined6)(CONCAT26(uStack_44,CONCAT42(uStack_48,uStack_4a)) >> 0x10);
    local_b0.sa_family._0_1_ = (undefined1)sVar25;
    local_b0.sa_family._1_1_ = (undefined1)(sVar25 >> 8);
    local_b0.sa_data._0_2_ = (undefined2)(sVar25 >> 0x10);
    uVar5 = local_b0.sa_data._0_2_;
    uStack_6c = local_70;
    uStack_68 = uVar17;
    uStack_74 = uStack_78;
    local_70 = uVar16;
    uVar1 = CONCAT26(uStack_4a,uStack_c8);
    local_b0.sa_data._6_4_ =
         (uint)(ushort)local_b0.sa_data._2_2_ |
         (uint)(((ulong)(ushort)local_b0.sa_data._4_2_ << 0x30) >> 0x20);
    uVar7 = local_b0.sa_data._6_4_;
    uStack_5c = uStack_60;
    local_58 = uVar20;
    uStack_64 = uVar18;
    uStack_60 = uVar19;
    uStack_4c = (undefined2)uStack_50;
    uStack_4a = (undefined2)((uint)uStack_50 >> 0x10);
    uStack_48 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_54 = (undefined2)uVar21;
    uStack_52 = (undefined2)(uVar21 >> 0x10);
    uStack_50 = (undefined4)((ulong)local_d0 >> 0x20);
    uStack_9c = uStack_a0;
    uStack_98 = uVar9;
    local_b0.sa_data[6] = (char)uVar6;
    local_b0.sa_data[7] = SUB41(uVar6,1);
    local_b0.sa_data[8] = SUB41(uVar6,2);
    local_b0.sa_data[9] = SUB41(uVar6,3);
    local_b0.sa_data[10] = local_b0.sa_data[6];
    local_b0.sa_data[0xb] = local_b0.sa_data[7];
    local_b0.sa_data[0xc] = local_b0.sa_data[8];
    local_b0.sa_data[0xd] = local_b0.sa_data[9];
    uVar6 = local_b0.sa_data._10_4_;
    local_b0.sa_data[10] = (char)uVar8;
    local_b0.sa_data[0xb] = SUB41(uVar8,1);
    local_b0.sa_data[0xc] = SUB41(uVar8,2);
    local_b0.sa_data[0xd] = SUB41(uVar8,3);
    uStack_a0._0_1_ = local_b0.sa_data[10];
    uStack_a0._1_1_ = local_b0.sa_data[0xb];
    uStack_a0._2_1_ = local_b0.sa_data[0xc];
    uStack_a0._3_1_ = local_b0.sa_data[0xd];
    local_b0.sa_data[0] = (char)uVar4;
    local_b0.sa_data[1] = SUB21(uVar4,1);
    local_b0.sa_data[4] = local_b0.sa_data[0];
    local_b0.sa_data[5] = local_b0.sa_data[1];
    uStack_8c = local_90;
    uStack_88 = uVar12;
    uStack_94 = uVar10;
    local_90 = uVar11;
    uStack_44 = (undefined2)uVar22;
    uStack_42 = (undefined6)(CONCAT26(uStack_ba,uStack_c0) >> 0x10);
    uStack_7c = uStack_80;
    uStack_78 = uVar15;
    uStack_84 = uVar13;
    uStack_80 = uVar14;
                    /* try { // try from 006fb9f8 to 006fba17 has its CatchHandler @ 006fbbcc */
    local_b0.sa_data._0_2_ = uVar5;
    local_b0.sa_data._2_2_ = sVar2;
    local_b0.sa_data._6_4_ = uVar7;
    local_b0.sa_data._10_4_ = uVar6;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_130,&DAT_0045c03d,5,&local_b0,&DAT_00978268);
  }
LAB_006fba18:
  local_34 = 0x6e;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family._0_1_ = 0;
  local_b0.sa_family._1_1_ = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iVar24 = getpeername(iVar24,&local_b0,&local_34);
  uVar22 = uStack_48;
  uVar21 = local_58;
  uVar20 = uStack_5c;
  uVar19 = uStack_64;
  uVar18 = uStack_68;
  uVar17 = uStack_6c;
  uVar16 = uStack_74;
  uVar15 = uStack_7c;
  uVar14 = uStack_84;
  uVar13 = uStack_88;
  uVar12 = uStack_8c;
  uVar11 = uStack_94;
  uVar10 = uStack_98;
  uVar9 = uStack_9c;
  uVar8 = local_b0.sa_data._10_4_;
  uVar6 = local_b0.sa_data._6_4_;
  uVar4 = local_b0.sa_data._0_2_;
  if (iVar24 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  else {
    uVar3 = CONCAT11(local_b0.sa_family._1_1_,(undefined1)local_b0.sa_family);
    if (local_34 == 0) {
      sVar25 = 2;
    }
    else {
      sVar25 = local_34;
      if (uVar3 != 1) goto LAB_006fbb7c;
    }
    uStack_e8 = CONCAT44(uStack_6c,local_70);
    local_f0 = CONCAT44(uStack_74,uStack_78);
    uStack_d8 = CONCAT44(uStack_5c,uStack_60);
    uStack_e0 = CONCAT44(uStack_64,uStack_68);
    uStack_f8 = CONCAT44(uStack_7c,uStack_80);
    local_100 = CONCAT44(uStack_84,uStack_88);
    uStack_c8 = CONCAT24(uStack_4c,uStack_50);
    local_d0 = CONCAT26(uStack_52,CONCAT24(uStack_54,local_58));
    uStack_108 = CONCAT44(uStack_8c,local_90);
    local_110 = CONCAT44(uStack_94,uStack_98);
    uStack_118 = CONCAT44(uStack_9c,uStack_a0);
    local_120 = CONCAT44(local_b0.sa_data._10_4_,local_b0.sa_data._6_4_);
    uStack_c2 = uStack_4a;
    uStack_c0 = (undefined6)(CONCAT26(uStack_44,CONCAT42(uStack_48,uStack_4a)) >> 0x10);
    local_b0.sa_family._0_1_ = (undefined1)sVar25;
    local_b0.sa_family._1_1_ = (undefined1)(sVar25 >> 8);
    local_b0.sa_data._0_2_ = (undefined2)(sVar25 >> 0x10);
    uVar5 = local_b0.sa_data._0_2_;
    uStack_6c = local_70;
    uStack_68 = uVar17;
    uStack_74 = uStack_78;
    local_70 = uVar16;
    uVar1 = CONCAT26(uStack_4a,uStack_c8);
    local_b0.sa_data._6_4_ =
         (uint)(ushort)local_b0.sa_data._2_2_ |
         (uint)(((ulong)(ushort)local_b0.sa_data._4_2_ << 0x30) >> 0x20);
    uVar7 = local_b0.sa_data._6_4_;
    uStack_5c = uStack_60;
    local_58 = uVar20;
    uStack_64 = uVar18;
    uStack_60 = uVar19;
    uStack_4c = (undefined2)uStack_50;
    uStack_4a = (undefined2)((uint)uStack_50 >> 0x10);
    uStack_48 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_54 = (undefined2)uVar21;
    uStack_52 = (undefined2)(uVar21 >> 0x10);
    uStack_50 = (undefined4)((ulong)local_d0 >> 0x20);
    uStack_9c = uStack_a0;
    uStack_98 = uVar9;
    local_b0.sa_data[6] = (char)uVar6;
    local_b0.sa_data[7] = SUB41(uVar6,1);
    local_b0.sa_data[8] = SUB41(uVar6,2);
    local_b0.sa_data[9] = SUB41(uVar6,3);
    local_b0.sa_data[10] = local_b0.sa_data[6];
    local_b0.sa_data[0xb] = local_b0.sa_data[7];
    local_b0.sa_data[0xc] = local_b0.sa_data[8];
    local_b0.sa_data[0xd] = local_b0.sa_data[9];
    uVar6 = local_b0.sa_data._10_4_;
    local_b0.sa_data[10] = (char)uVar8;
    local_b0.sa_data[0xb] = SUB41(uVar8,1);
    local_b0.sa_data[0xc] = SUB41(uVar8,2);
    local_b0.sa_data[0xd] = SUB41(uVar8,3);
    uStack_a0._0_1_ = local_b0.sa_data[10];
    uStack_a0._1_1_ = local_b0.sa_data[0xb];
    uStack_a0._2_1_ = local_b0.sa_data[0xc];
    uStack_a0._3_1_ = local_b0.sa_data[0xd];
    local_b0.sa_data[0] = (char)uVar4;
    local_b0.sa_data[1] = SUB21(uVar4,1);
    local_b0.sa_data[4] = local_b0.sa_data[0];
    local_b0.sa_data[5] = local_b0.sa_data[1];
    uStack_8c = local_90;
    uStack_88 = uVar12;
    uStack_94 = uVar10;
    local_90 = uVar11;
    uStack_44 = (undefined2)uVar22;
    uStack_42 = (undefined6)(CONCAT26(uStack_ba,uStack_c0) >> 0x10);
    uStack_7c = uStack_80;
    uStack_78 = uVar15;
    uStack_84 = uVar13;
    uStack_80 = uVar14;
                    /* try { // try from 006fbb5c to 006fbb7b has its CatchHandler @ 006fbbb8 */
    local_b0.sa_data._0_2_ = uVar5;
    local_b0.sa_data._2_2_ = uVar3;
    local_b0.sa_data._6_4_ = uVar7;
    local_b0.sa_data._10_4_ = uVar6;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_130,&DAT_00379d90,4,&local_b0,&DAT_00978268);
  }
LAB_006fbb7c:
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_130);
  return;
}


// ===== 006fbbe8  <std::os::unix::net::listener::UnixListener_as_core::fmt::Debug>::fmt =====

/* WARNING: Removing unreachable block (ram,0x006fbca0) */
/* WARNING: Removing unreachable block (ram,0x006fbce4) */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::listener::UnixListener as core::fmt::Debug>::fmt */

void __rustcall
<std::os::unix::net::listener::UnixListener_as_core::fmt::Debug>::fmt
          (int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  socklen_t sVar23;
  undefined1 auStack_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  sockaddr local_b0;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined6 uStack_42;
  socklen_t local_34;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_130,param_2,&DAT_0045c04e,0xc);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_130,&DAT_0045ba82,2,param_1,&PTR_FUN_00978248);
  local_34 = 0x6e;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_b0.sa_data[6] = '\0';
  local_b0.sa_data[7] = '\0';
  local_b0.sa_data[8] = '\0';
  local_b0.sa_data[9] = '\0';
  local_b0.sa_data[10] = '\0';
  local_b0.sa_data[0xb] = '\0';
  local_b0.sa_data[0xc] = '\0';
  local_b0.sa_data[0xd] = '\0';
  local_b0.sa_family._0_1_ = 0;
  local_b0.sa_family._1_1_ = 0;
  local_b0.sa_data[0] = '\0';
  local_b0.sa_data[1] = '\0';
  local_b0.sa_data[2] = '\0';
  local_b0.sa_data[3] = '\0';
  local_b0.sa_data[4] = '\0';
  local_b0.sa_data[5] = '\0';
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iVar22 = getsockname(*param_1,&local_b0,&local_34);
  uVar21 = uStack_48;
  uVar20 = local_58;
  uVar19 = uStack_5c;
  uVar18 = uStack_64;
  uVar17 = uStack_68;
  uVar16 = uStack_6c;
  uVar15 = uStack_74;
  uVar14 = uStack_7c;
  uVar13 = uStack_84;
  uVar12 = uStack_88;
  uVar11 = uStack_8c;
  uVar10 = uStack_94;
  uVar9 = uStack_98;
  uVar8 = uStack_9c;
  uVar7 = local_b0.sa_data._10_4_;
  uVar5 = local_b0.sa_data._6_4_;
  uVar3 = local_b0.sa_data._0_2_;
  if (iVar22 == -1) {
    __errno();
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
  }
  else {
    uVar2 = CONCAT11(local_b0.sa_family._1_1_,(undefined1)local_b0.sa_family);
    if (local_34 == 0) {
      sVar23 = 2;
    }
    else {
      sVar23 = local_34;
      if (uVar2 != 1) goto LAB_006fbda4;
    }
    uStack_e8 = CONCAT44(uStack_6c,local_70);
    local_f0 = CONCAT44(uStack_74,uStack_78);
    uStack_d8 = CONCAT44(uStack_5c,uStack_60);
    uStack_e0 = CONCAT44(uStack_64,uStack_68);
    uStack_f8 = CONCAT44(uStack_7c,uStack_80);
    local_100 = CONCAT44(uStack_84,uStack_88);
    uStack_c8 = CONCAT24(uStack_4c,uStack_50);
    local_d0 = CONCAT26(uStack_52,CONCAT24(uStack_54,local_58));
    uStack_108 = CONCAT44(uStack_8c,local_90);
    local_110 = CONCAT44(uStack_94,uStack_98);
    uStack_118 = CONCAT44(uStack_9c,uStack_a0);
    local_120 = CONCAT44(local_b0.sa_data._10_4_,local_b0.sa_data._6_4_);
    uStack_c2 = uStack_4a;
    uStack_c0 = (undefined6)(CONCAT26(uStack_44,CONCAT42(uStack_48,uStack_4a)) >> 0x10);
    local_b0.sa_family._0_1_ = (undefined1)sVar23;
    local_b0.sa_family._1_1_ = (undefined1)(sVar23 >> 8);
    local_b0.sa_data._0_2_ = (undefined2)(sVar23 >> 0x10);
    uVar4 = local_b0.sa_data._0_2_;
    uStack_6c = local_70;
    uStack_68 = uVar16;
    uStack_74 = uStack_78;
    local_70 = uVar15;
    uVar1 = CONCAT26(uStack_4a,uStack_c8);
    local_b0.sa_data._6_4_ =
         (uint)(ushort)local_b0.sa_data._2_2_ |
         (uint)(((ulong)(ushort)local_b0.sa_data._4_2_ << 0x30) >> 0x20);
    uVar6 = local_b0.sa_data._6_4_;
    uStack_5c = uStack_60;
    local_58 = uVar19;
    uStack_64 = uVar17;
    uStack_60 = uVar18;
    uStack_4c = (undefined2)uStack_50;
    uStack_4a = (undefined2)((uint)uStack_50 >> 0x10);
    uStack_48 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_54 = (undefined2)uVar20;
    uStack_52 = (undefined2)(uVar20 >> 0x10);
    uStack_50 = (undefined4)((ulong)local_d0 >> 0x20);
    uStack_9c = uStack_a0;
    uStack_98 = uVar8;
    local_b0.sa_data[6] = (char)uVar5;
    local_b0.sa_data[7] = SUB41(uVar5,1);
    local_b0.sa_data[8] = SUB41(uVar5,2);
    local_b0.sa_data[9] = SUB41(uVar5,3);
    local_b0.sa_data[10] = local_b0.sa_data[6];
    local_b0.sa_data[0xb] = local_b0.sa_data[7];
    local_b0.sa_data[0xc] = local_b0.sa_data[8];
    local_b0.sa_data[0xd] = local_b0.sa_data[9];
    uVar5 = local_b0.sa_data._10_4_;
    local_b0.sa_data[10] = (char)uVar7;
    local_b0.sa_data[0xb] = SUB41(uVar7,1);
    local_b0.sa_data[0xc] = SUB41(uVar7,2);
    local_b0.sa_data[0xd] = SUB41(uVar7,3);
    uStack_a0._0_1_ = local_b0.sa_data[10];
    uStack_a0._1_1_ = local_b0.sa_data[0xb];
    uStack_a0._2_1_ = local_b0.sa_data[0xc];
    uStack_a0._3_1_ = local_b0.sa_data[0xd];
    local_b0.sa_data[0] = (char)uVar3;
    local_b0.sa_data[1] = SUB21(uVar3,1);
    local_b0.sa_data[4] = local_b0.sa_data[0];
    local_b0.sa_data[5] = local_b0.sa_data[1];
    uStack_8c = local_90;
    uStack_88 = uVar11;
    uStack_94 = uVar9;
    local_90 = uVar10;
    uStack_44 = (undefined2)uVar21;
    uStack_42 = (undefined6)(CONCAT26(uStack_ba,uStack_c0) >> 0x10);
    uStack_7c = uStack_80;
    uStack_78 = uVar14;
    uStack_84 = uVar12;
    uStack_80 = uVar13;
                    /* try { // try from 006fbd84 to 006fbda3 has its CatchHandler @ 006fbdd0 */
    local_b0.sa_data._0_2_ = uVar4;
    local_b0.sa_data._2_2_ = uVar2;
    local_b0.sa_data._6_4_ = uVar6;
    local_b0.sa_data._10_4_ = uVar5;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_130,&DAT_0045c03d,5,&local_b0,&DAT_00978268);
  }
LAB_006fbda4:
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_130);
  return;
}


// ===== 006fbdec  <std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as std::io::Read>::read_to_end */

undefined1  [16] __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read_to_end
          (long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_50;
  long local_48;
  ulong local_40;
  
  local_50 = param_1 + 0x80;
  auVar5 = FUN_006ee098();
  uVar4 = param_2[2];
  uVar3 = *param_2;
  uVar1 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  if (uVar1 <= uVar3 - uVar4) {
LAB_006fbeb0:
    auVar5 = FUN_006c5c18(&local_50,param_2,auVar5._0_8_,auVar5._8_8_);
    return auVar5;
  }
  if (!CARRY8(uVar1,uVar4)) {
    uVar2 = uVar1 + uVar4;
    if (uVar1 + uVar4 <= uVar3 * 2) {
      uVar2 = uVar3 * 2;
    }
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    FUN_006df348(&local_48,uVar3,param_2[1],uVar2,1,1);
    if (local_48 != 1) {
      *param_2 = uVar2;
      param_2[1] = local_40;
      goto LAB_006fbeb0;
    }
  }
  auVar5._8_8_ = 0x2600000003;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 006fbed4  <std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read_vectored
          (long param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*(int *)(param_1 + 0x80),param_2,(int)param_3);
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


// ===== 006fbf68  <std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as std::io::Read>::read_to_string */

void __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read_to_string(long param_1)

{
  long local_18;
  
  local_18 = param_1 + 0x80;
  <&std::fs::File_as_std::io::Read>::read_to_string(&local_18);
  return;
}


// ===== 006fbf90  <std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as std::io::Read>::read */

undefined1  [16] __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read
          (long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::read(*(int *)(param_1 + 0x80),param_2,param_3);
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


// ===== 006fc018  <std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as std::io::Read>::read_buf */

ulong __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Read>::read_buf(long param_1,long *param_2)

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
  sVar3 = ::read(*(int *)(param_1 + 0x80),(void *)(*param_2 + lVar1),__nbytes);
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


// ===== 006fc0c8  <<std::sys::backtrace::std::sys::backtrace::BacktraceLock>::print::DisplayBacktrace_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<std::sys::backtrace::std::sys::backtrace::BacktraceLock>::print::DisplayBacktrace as
   core::fmt::Display>::fmt */

undefined8 __rustcall
<<std::sys::backtrace::std::sys::backtrace::BacktraceLock>::print::DisplayBacktrace_as_core::fmt::Display>
::fmt(char *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char local_f4 [4];
  undefined8 *local_f0;
  byte *pbStack_e8;
  char *local_e0;
  undefined8 *local_d8;
  byte *pbStack_d0;
  char local_c8;
  undefined8 *local_c0;
  char **local_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  char local_a0;
  undefined8 local_98;
  byte local_8c [4];
  undefined8 local_88;
  undefined1 local_80 [4];
  char local_7c [4];
  char *local_78;
  undefined8 *local_70;
  byte *pbStack_68;
  undefined8 **local_60;
  char *pcStack_58;
  undefined8 *local_50;
  undefined1 *puStack_48;
  char **local_40;
  undefined *puStack_38;
  
  cVar1 = *param_1;
  local_f4[0] = cVar1;
  std::env::current_dir(&local_78);
  pcVar6 = local_78;
  if (local_78 == (char *)0xffffffffffffffff) {
    if ((1 < ((ulong)local_70 & 3) - 2) && (((ulong)local_70 & 3) != 0)) {
      local_b8 = (char **)((long)local_70 + -1);
      local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_b8);
    }
  }
  else {
    pbStack_e8 = pbStack_68;
    local_f0 = local_70;
  }
  local_e0 = pcVar6;
  pbStack_d0 = pbStack_e8;
  local_d8 = local_f0;
  local_c8 = cVar1;
                    /* try { // try from 006fc158 to 006fc243 has its CatchHandler @ 006fc260 */
  uVar3 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0045b846,0x11);
  if ((uVar3 & 1) == 0) {
    local_b8 = &local_e0;
    pbStack_68 = local_8c;
    local_b0 = &PTR_FUN_00977e50;
    uStack_a8 = 0;
    local_80[0] = 1;
    local_78 = local_f4;
    local_70 = &local_98;
    local_60 = &local_c0;
    pcStack_58 = local_7c;
    local_50 = &local_88;
    puStack_48 = local_80;
    local_98 = 0;
    local_8c[0] = 0;
    local_88 = 0;
    puStack_38 = &DAT_00977e78;
    local_c0 = param_2;
    local_a0 = cVar1;
    local_7c[0] = cVar1;
    local_40 = &local_78;
    FUN_00755af4(FUN_006f99dc,&local_40);
    pcVar6 = local_e0;
    if (((local_8c[0] & 1) == 0) &&
       ((cVar1 != '\0' ||
        (iVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0045b857,0x58), pcVar6 = local_e0,
        iVar2 == 0)))) {
      uVar5 = 0;
      uVar4 = 0;
      pcVar6 = local_e0;
      goto joined_r0x006fc1fc;
    }
  }
  uVar5 = 1;
  uVar4 = 1;
joined_r0x006fc1fc:
  if (0 < (long)pcVar6) {
    __rustc::__rust_dealloc(local_d8,pcVar6,1);
    uVar4 = uVar5;
  }
  return uVar4;
}


// ===== 006fc284  FUN_006fc284 =====

undefined8 FUN_006fc284(undefined8 *param_1,void *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  lVar2 = plVar1[2];
  if ((ulong)(*plVar1 - lVar2) < param_3) {
    FUN_006cecec(plVar1,lVar2,param_3,1,1);
    lVar2 = plVar1[2];
  }
  else if (param_3 == 0) goto LAB_006fc2c4;
  memcpy((void *)(plVar1[1] + lVar2),param_2,param_3);
LAB_006fc2c4:
  plVar1[2] = lVar2 + param_3;
  return 0;
}


// ===== 006fc308  FUN_006fc308 =====

bool FUN_006fc308(undefined8 *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long local_48;
  
  plVar4 = (long *)*param_1;
  uVar3 = plVar4[1];
  uVar1 = plVar4[2];
  uVar2 = uVar3;
  if (uVar1 <= uVar3) {
    uVar2 = uVar1;
  }
  uVar3 = uVar3 - uVar2;
  __n = uVar3;
  if (param_3 <= uVar3) {
    __n = param_3;
  }
  memcpy((void *)(*plVar4 + uVar2),param_2,__n);
  plVar4[2] = __n + uVar1;
  if (uVar3 < param_3) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_48 = uVar2 - 1;
                    /* try { // try from 006fc394 to 006fc39b has its CatchHandler @ 006fc3c8 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
    }
    param_1[1] = &PTR_DAT_00977df0;
  }
  return uVar3 < param_3;
}


// ===== 006fc3d8  FUN_006fc3d8 =====

undefined8 FUN_006fc3d8(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long local_28;
  
  lVar3 = *(long *)*param_1;
  if (*(long *)(lVar3 + 0x10) != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ec0);
                    /* catch() { ... } // from try @ 006fc488 with catch @ 006fc4b8 */
    *(long *)(unaff_x19 + 8) = lVar3;
                    /* WARNING: Subroutine does not return */
    FUN_00751c7c();
  }
  *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 006fc404 to 006fc407 has its CatchHandler @ 006fc4c0 */
  uVar1 = FUN_0070e804();
  if ((uVar1 != 0) && ((((uVar1 & 3) < 2 || ((uVar1 & 3) != 2)) || (uVar1 >> 0x20 != 9)))) {
    uVar2 = param_1[1];
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 006fc488 to 006fc48f has its CatchHandler @ 006fc4b8 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = uVar1;
    return 1;
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  return 0;
}


// ===== 006fc4d0  FUN_006fc4d0 =====

bool FUN_006fc4d0(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = <std::io::stdio::StdoutLock_as_std::io::Write>::write_all(*param_1);
  if (lVar1 != 0) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 006fc524 to 006fc52b has its CatchHandler @ 006fc548 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


// ===== 006fc550  FUN_006fc550 =====

bool FUN_006fc550(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_0070e804();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 006fc5a0 to 006fc5a7 has its CatchHandler @ 006fc5c4 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    *(long *)(param_1 + 8) = lVar1;
  }
  return lVar1 != 0;
}


// ===== 006fc5cc  FUN_006fc5cc =====

bool FUN_006fc5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_0070e9f0(param_2,param_3);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 006fc624 to 006fc62b has its CatchHandler @ 006fc648 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    *(long *)(param_1 + 8) = lVar1;
  }
  return lVar1 != 0;
}


// ===== 006fc650  FUN_006fc650 =====

void FUN_006fc650(long *param_1)

{
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006fc670  FUN_006fc670 =====

void FUN_006fc670(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = 0;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::process::abort();
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar3 = (long *)__rustc::__rust_alloc(0x10,8);
  if (plVar3 != (long *)0x0) {
    *plVar3 = lVar1;
    plVar3[1] = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 006fc6c4  FUN_006fc6c4 =====

undefined1  [16] FUN_006fc6c4(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 006fc6d0  <std::panicking::resume_unwind::RewrapBox_as_core::panic::PanicPayload>::take_box =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::resume_unwind::RewrapBox as core::panic::PanicPayload>::take_box */

undefined1  [16] __rustcall
<std::panicking::resume_unwind::RewrapBox_as_core::panic::PanicPayload>::take_box
          (undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = *param_1;
  *(undefined8 *)*param_1 = 1;
  *(undefined **)(*param_1 + 8) = &DAT_009782a8;
  return auVar1;
}


// ===== 006fc6f0  FUN_006fc6f0 =====

void FUN_006fc6f0(void)

{
  undefined1 uStack_11;
  
  FUN_0070e928(&uStack_11,&DAT_0045c05a,0x7b);
  FUN_006c2ec0();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006fc718  <<std[29fbf8137994c300]::path::Components_as_core[188d2c0002da36d0]::fmt::Debug>::fmt::DebugHelper_as_core[188d2c0002da36d0]::fmt::Debug>::fmt =====

/* <<std[29fbf8137994c300]::path::Components as
   core[188d2c0002da36d0]::fmt::Debug>::fmt::DebugHelper as core[188d2c0002da36d0]::fmt::Debug>::fmt
    */

void <<std[29fbf8137994c300]::path::Components_as_core[188d2c0002da36d0]::fmt::Debug>::fmt::DebugHelper_as_core[188d2c0002da36d0]::fmt::Debug>
     ::fmt(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [16];
  char *local_d8;
  long lStack_d0;
  undefined1 local_c8;
  undefined2 local_a0;
  undefined1 local_9e;
  char local_98 [56];
  undefined1 local_60 [64];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_e8,param_2);
  local_d8 = (char *)*param_1;
  lStack_d0 = param_1[1];
  if (lStack_d0 == 0) {
    local_9e = false;
  }
  else {
    local_9e = *local_d8 == '/';
  }
  local_c8 = 0xff;
  local_a0 = 0x201;
  <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(local_98,&local_d8);
  while (local_98[0] != -1) {
    <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
              (auStack_e8,local_60,&DAT_00976bc8);
    <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(local_98,&local_d8);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_e8);
  return;
}


// ===== 006fc7ec  <<std[29fbf8137994c300]::path::Iter_as_core[188d2c0002da36d0]::fmt::Debug>::fmt::DebugHelper_as_core[188d2c0002da36d0]::fmt::Debug>::fmt =====

/* <<std[29fbf8137994c300]::path::Iter as core[188d2c0002da36d0]::fmt::Debug>::fmt::DebugHelper as
   core[188d2c0002da36d0]::fmt::Debug>::fmt */

void <<std[29fbf8137994c300]::path::Iter_as_core[188d2c0002da36d0]::fmt::Debug>::fmt::DebugHelper_as_core[188d2c0002da36d0]::fmt::Debug>
     ::fmt(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_b8 [16];
  char *local_a8;
  long lStack_a0;
  undefined1 local_98;
  undefined2 local_70;
  undefined1 local_6e;
  undefined *local_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_40;
  undefined *puStack_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_b8,param_2);
  local_a8 = (char *)*param_1;
  lStack_a0 = param_1[1];
  if (lStack_a0 == 0) {
    local_6e = false;
  }
  else {
    local_6e = *local_a8 == '/';
  }
  local_98 = 0xff;
  local_70 = 0x201;
  <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_68,&local_a8);
  if ((char)local_68 != -1) {
    do {
      puVar2 = (undefined *)(((ulong)local_68 & 0xff) - 5);
      if ((uint)((ulong)local_68 & 0xff) < 6) {
        puVar2 = (undefined *)0x0;
      }
      if ((long)puVar2 < 2) {
        puVar1 = puVar2;
        local_68 = &DAT_0045b2ad;
        if (puVar2 == (undefined *)0x0) {
          puVar1 = puStack_38;
          local_68 = local_40;
        }
      }
      else if (puVar2 == (undefined *)0x2) {
        puVar1 = (undefined *)0x1;
        local_68 = &DAT_0045b467;
      }
      else {
        puVar1 = puStack_58;
        local_68 = local_60;
        if (puVar2 == (undefined *)0x3) {
          puVar1 = (undefined *)0x2;
          local_68 = &DAT_0045b468;
        }
      }
      local_60 = puVar1;
      <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                (auStack_b8,&local_68,&DAT_00976c28);
      <std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&local_68,&local_a8);
    } while ((char)local_68 != -1);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_b8);
  return;
}


// ===== 006fc91c  <std::fs::TryLockError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::TryLockError as core::fmt::Display>::fmt */

void __rustcall <std::fs::TryLockError_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0x39;
  if (*param_1 != 0) {
    uVar1 = 0x28;
  }
  puVar2 = &UNK_0045c0bf;
  if (*param_1 != 0) {
    puVar2 = &DAT_0045c097;
  }
  <str_as_core::fmt::Display>::fmt(puVar2,uVar1,param_2);
  return;
}


// ===== 006fc94c  <std::env::Vars_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::Vars as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::env::Vars_as_core::iter::traits::iterator::Iterator>::next(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  puVar5 = *(ulong **)(param_2 + 8);
  if (puVar5 != *(ulong **)(param_2 + 0x18)) {
    uVar6 = *puVar5;
    *(ulong **)(param_2 + 8) = puVar5 + 6;
    if (uVar6 != 0xffffffffffffffff) {
                    /* try { // try from 006fc990 to 006fc9ab has its CatchHandler @ 006fcacc */
      uVar1 = puVar5[1];
      uVar3 = puVar5[2];
      uVar2 = puVar5[3];
      uVar4 = puVar5[4];
      uVar9 = puVar5[5];
      core::str::converts::from_utf8(&local_68,uVar1,uVar3);
      if (local_68 == 1) {
                    /* try { // try from 006fca24 to 006fca47 has its CatchHandler @ 006fcab8 */
        local_68 = uVar6;
        local_60 = uVar1;
        local_58 = uVar3;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_0045b05c,0x2b,&local_68,&PTR_FUN_00977408,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00977318);
      }
                    /* try { // try from 006fc9b8 to 006fc9c7 has its CatchHandler @ 006fca90 */
      core::str::converts::from_utf8(&local_68,uVar4,uVar9);
      uVar7 = uVar4;
      uVar8 = uVar2;
      uVar10 = uVar9;
      if (((local_68 & 1) != 0) &&
         (uVar7 = uVar9, uVar8 = uVar4, uVar10 = local_60, uVar2 != 0xffffffffffffffff)) {
                    /* try { // try from 006fca54 to 006fca77 has its CatchHandler @ 006fca7c */
        local_68 = uVar2;
        local_60 = uVar4;
        local_58 = uVar9;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_0045b05c,0x2b,&local_68,&PTR_FUN_00977408,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00977330);
      }
      *param_1 = uVar6;
      param_1[1] = uVar1;
      param_1[2] = uVar3;
      param_1[3] = uVar8;
      param_1[4] = uVar7;
      param_1[5] = uVar10;
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 006fcb00  <std::env::Vars_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::Vars as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::env::Vars_as_core::iter::traits::iterator::Iterator>::size_hint(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = ((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 8)) >> 4) * -0x5555555555555555;
  *param_1 = lVar1;
  param_1[1] = 1;
  param_1[2] = lVar1;
  return;
}


// ===== 006fcb2c  <std[29fbf8137994c300]::time::Instant_as_core[188d2c0002da36d0]::ops::arith::AddAssign<core[188d2c0002da36d0]::time::Duration>>::add_assign =====

/* <std[29fbf8137994c300]::time::Instant as
   core[188d2c0002da36d0]::ops::arith::AddAssign<core[188d2c0002da36d0]::time::Duration>>::add_assign
    */

void <std[29fbf8137994c300]::time::Instant_as_core[188d2c0002da36d0]::ops::arith::AddAssign<core[188d2c0002da36d0]::time::Duration>>
     ::add_assign(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *param_1 + param_2;
  if (param_2 < 0 == SCARRY8(*param_1,param_2)) {
    uVar3 = (int)param_1[1] + param_3;
    if (999999999 < uVar3) {
      bVar1 = SCARRY8(lVar2,1);
      lVar2 = lVar2 + 1;
      if (bVar1) goto LAB_006fcb80;
      uVar3 = uVar3 + 0xc4653600;
    }
    *param_1 = lVar2;
    *(uint *)(param_1 + 1) = uVar3;
    return;
  }
LAB_006fcb80:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0045c4eb,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_009782c8);
}


// ===== 006fcba0  <std[29fbf8137994c300]::process::Child_as_std[29fbf8137994c300]::sys::IntoInner<std[29fbf8137994c300]::sys::process::unix::unix::Process>>::into_inner =====

/* <std[29fbf8137994c300]::process::Child as
   std[29fbf8137994c300]::sys::IntoInner<std[29fbf8137994c300]::sys::process::unix::unix::Process>>::into_inner
    */

int <std[29fbf8137994c300]::process::Child_as_std[29fbf8137994c300]::sys::IntoInner<std[29fbf8137994c300]::sys::process::unix::unix::Process>>
    ::into_inner(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((long)param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  if (iVar2 != -1) {
    close(iVar2);
  }
  if (*(int *)(param_2 + 2) != -1) {
    close(*(int *)(param_2 + 2));
  }
  iVar2 = *(int *)((long)param_2 + 0x14);
  if (iVar2 != -1) {
    iVar2 = close(iVar2);
    return iVar2;
  }
  return iVar2;
}


// ===== 006fcc04  <std::backtrace::BacktraceSymbol_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::BacktraceSymbol as core::fmt::Debug>::fmt */

undefined8 __rustcall
<std::backtrace::BacktraceSymbol_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long **local_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar5 = *param_2;
  lVar2 = param_2[1];
  pcVar6 = *(code **)(lVar2 + 0x18);
  uVar4 = (*pcVar6)(uVar5,&DAT_0045c0f8,2);
  if ((uVar4 & 1) == 0) {
    if (param_1[4] == -1) {
      uVar4 = (*pcVar6)(uVar5,&DAT_0045c0fa,0xd);
    }
    else {
      lVar1 = param_1[5];
      lVar3 = param_1[6];
      core::str::converts::from_utf8(&local_e0,lVar1,lVar3);
      if (local_e0 == (long **)0x1) {
        local_e0 = (long **)&DAT_00000002;
      }
      else {
        rustc_demangle::try_demangle(&local_e0,local_d8,uStack_d0);
        if (local_e0 != (long **)&DAT_00000002) {
          uStack_78 = uStack_d0;
          local_80 = local_d8;
          uStack_68 = uStack_c0;
          uStack_70 = local_c8;
          uStack_58 = uStack_b0;
          local_60 = local_b8;
          local_50 = local_a8;
        }
      }
      uStack_d0 = uStack_78;
      local_d8 = local_80;
      uStack_c0 = uStack_68;
      local_c8 = uStack_70;
      uStack_b0 = uStack_58;
      local_b8 = local_60;
      local_a8 = local_50;
      puStack_88 = PTR_fmt_0099f7a8;
      lStack_a0 = lVar1;
      local_98 = lVar3;
      local_90 = (long *)&local_e0;
      uVar4 = core::fmt::write(uVar5,lVar2,&DAT_0045c107,&local_90);
    }
    if ((uVar4 & 1) == 0) {
      if (*param_1 != 2) {
        local_e0 = &local_90;
        local_d8 = FUN_006ff1c8;
        local_90 = param_1;
        uVar4 = core::fmt::write(uVar5,lVar2,&DAT_0036d548,&local_e0);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      if ((int)param_1[7] == 1) {
        local_e0 = &local_90;
        local_90 = (long *)CONCAT44(local_90._4_4_,*(undefined4 *)((long)param_1 + 0x3c));
        local_d8 = FUN_00705f28;
        uVar4 = core::fmt::write(uVar5,lVar2,&DAT_0036dbca,&local_e0);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      uVar5 = (*pcVar6)(uVar5,&DAT_0045c115,2);
      return uVar5;
    }
  }
  return 1;
}


// ===== 006fcdd8  FUN_006fcdd8 =====

void FUN_006fcdd8(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong __n;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = param_2[2];
  uVar8 = param_2[3];
  uVar4 = 0;
  if ((uVar1 <= uVar8) && (uVar5 = param_2[1], uVar8 <= uVar5)) {
    __n = (ulong)*(byte *)(param_2 + 5);
    lVar6 = *param_2;
    uVar7 = __n - 1;
    if (__n < 5) {
      while( true ) {
        auVar9 = core::slice::memchr::memrchr
                           (*(undefined1 *)((long)param_2 + __n + 0x1f),lVar6 + uVar1,uVar8 - uVar1)
        ;
        if (auVar9._0_8_ != 1) goto LAB_006fcef8;
        uVar8 = auVar9._8_8_ + uVar1;
        uVar2 = uVar8 - uVar7;
        if (((uVar7 <= uVar8) && (!CARRY8(uVar2,__n))) &&
           ((uVar2 + __n <= uVar5 &&
            (iVar3 = memcmp((void *)(lVar6 + uVar2),param_2 + 4,__n), iVar3 == 0)))) break;
        uVar4 = 0;
        param_2[3] = uVar8;
        if ((uVar8 < uVar1) || (uVar5 < uVar8)) goto LAB_006fcf00;
      }
      uVar4 = 1;
      param_2[3] = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2 + __n;
    }
    else {
      do {
        auVar9 = core::slice::memchr::memrchr
                           (*(undefined1 *)((long)param_2 + __n + 0x1f),lVar6 + uVar1,uVar8 - uVar1)
        ;
        if (auVar9._0_8_ != 1) goto LAB_006fcef8;
        uVar8 = auVar9._8_8_ + uVar1;
        if (((uVar7 <= uVar8) && (!CARRY8(uVar8 - uVar7,__n))) && ((uVar8 - uVar7) + __n <= uVar5))
        {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__rustc_48a229ceaefd4985c50990b14_009782e0);
        }
        uVar4 = 0;
        param_2[3] = uVar8;
      } while ((uVar1 <= uVar8) && (uVar8 <= uVar5));
    }
  }
LAB_006fcf00:
  *param_1 = uVar4;
  return;
LAB_006fcef8:
  uVar4 = 0;
  param_2[3] = uVar1;
  goto LAB_006fcf00;
}


// ===== 006fcf40  <std::backtrace_rs::symbolize::Symbol_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::Symbol as core::fmt::Debug>::fmt */

void __rustcall
<std::backtrace_rs::symbolize::Symbol_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_d0 [16];
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
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_d0,param_2,&DAT_0045c117,6);
  <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name(&local_c0,param_1);
  if (local_c0 != -1) {
    uStack_48 = uStack_98;
    local_50 = local_a0;
    uStack_38 = uStack_88;
    uStack_40 = uStack_90;
    uStack_28 = uStack_78;
    local_30 = local_80;
    uStack_68 = uStack_b8;
    local_70 = local_c0;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_d0,&DAT_00378e60,4,&local_70,&DAT_009782f8);
  }
  uVar1 = *param_1;
  if (uVar1 != 0xffffffff) {
    local_70 = *(long *)(param_1 + 8);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_d0,&DAT_003769d8,4,&local_70,&DAT_00978318);
    if ((uVar1 & 0xfffffffd) != 0) {
      local_70 = CONCAT44(local_70._4_4_,param_1[1]);
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (auStack_d0,&DAT_0045c11d,6,&local_70,&DAT_00978338);
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_d0);
      return;
    }
  }
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_d0);
  return;
}


// ===== 006fd054  <std::io::stdio::StderrRaw_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrRaw as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::io::stdio::StderrRaw_as_std::io::Write>::write_vectored
          (undefined8 param_1,iovec *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  size_t *psVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  size_t sVar15;
  undefined1 auVar16 [16];
  
  uVar5 = param_3;
  if (0x3ff < param_3) {
    uVar5 = 0x400;
  }
  uVar5 = writev(2,param_2,(int)uVar5);
  if (uVar5 == 0xffffffffffffffff) {
    piVar6 = (int *)__errno();
    iVar3 = *piVar6;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    if (iVar3 != 9) {
      auVar16._8_8_ = (long)iVar3 << 0x20 | 2;
      auVar16._0_8_ = 1;
      return auVar16;
    }
    if (param_3 == 0) {
      return ZEXT816(0);
    }
    if (param_3 < 5) {
      lVar7 = 0;
      uVar5 = 0;
    }
    else {
      lVar8 = 0;
      lVar12 = 0;
      lVar13 = 0;
      lVar14 = 0;
      uVar5 = 4;
      if ((param_3 & 3) != 0) {
        uVar5 = param_3 & 3;
      }
      psVar9 = &param_2[2].iov_len;
      lVar7 = param_3 - uVar5;
      lVar10 = lVar7;
      do {
        plVar1 = (long *)(psVar9 + -4);
        sVar15 = *psVar9;
        plVar11 = (long *)(psVar9 + -2);
        plVar2 = (long *)(psVar9 + 2);
        lVar10 = lVar10 + -4;
        psVar9 = psVar9 + 8;
        lVar8 = *plVar1 + lVar8;
        lVar12 = *plVar11 + lVar12;
        lVar13 = sVar15 + lVar13;
        lVar14 = *plVar2 + lVar14;
      } while (lVar10 != 0);
      uVar5 = lVar13 + lVar8 + lVar14 + lVar12;
    }
    lVar8 = param_3 - lVar7;
    psVar9 = &param_2[lVar7].iov_len;
    do {
      lVar8 = lVar8 + -1;
      uVar5 = *psVar9 + uVar5;
      psVar9 = psVar9 + 2;
    } while (lVar8 != 0);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5;
  return auVar4 << 0x40;
}


// ===== 006fd1a4  <std::io::stdio::StderrRaw_as_std::io::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrRaw as std::io::Write>::write_all_vectored */

ulong __rustcall <std::io::stdio::StderrRaw_as_std::io::Write>::write_all_vectored(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0070e600();
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 006fd1d8  <std::io::stdio::StdoutRaw_as_std::io::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as std::io::Write>::flush */

undefined8 __rustcall <std::io::stdio::StdoutRaw_as_std::io::Write>::flush(void)

{
  return 0;
}


// ===== 006fd1e0  <std::io::stdio::StderrRaw_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrRaw as std::io::Write>::write */

undefined1  [16] __rustcall
<std::io::stdio::StderrRaw_as_std::io::Write>::write
          (undefined8 param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  
  uVar4 = ::write(2,param_2,param_3);
  if (uVar4 != 0xffffffffffffffff) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    return auVar3 << 0x40;
  }
  piVar5 = (int *)__errno();
  iVar2 = *piVar5;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar6._1_7_ = 0;
  auVar6[0] = iVar2 != 9;
  sVar1 = (long)iVar2 << 0x20 | 2;
  if (iVar2 == 9) {
    sVar1 = param_3;
  }
  auVar6._8_8_ = sVar1;
  return auVar6;
}


// ===== 006fd268  <std::io::stdio::StderrRaw_as_std::io::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrRaw as std::io::Write>::write_all */

ulong __rustcall <std::io::stdio::StderrRaw_as_std::io::Write>::write_all(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0070e804();
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 006fd29c  <std::io::stdio::StderrRaw_as_std::io::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrRaw as std::io::Write>::write_fmt */

ulong __rustcall <std::io::stdio::StderrRaw_as_std::io::Write>::write_fmt(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0070e928();
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 006fd2d0  <std::net::tcp::TcpStream_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::net::tcp::TcpStream_as_std::io::Write>::write_vectored
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


// ===== 006fd364  <std::thread::local::AccessError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::local::AccessError as core::fmt::Display>::fmt */

void __rustcall
<std::thread::local::AccessError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_0045c123,0x11,param_2);
  return;
}


// ===== 006fd378  <std::thread::thread::Thread_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::thread::Thread as core::fmt::Debug>::fmt */

void __rustcall
<std::thread::thread::Thread_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long extraout_x9;
  long lVar2;
  undefined1 auStack_40 [16];
  undefined *local_30;
  long lStack_28;
  undefined8 local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_0045c134,6);
  lVar2 = *param_1;
  local_8 = *(undefined8 *)(lVar2 + 0x10);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,&DAT_0045c13a,2,&local_8,&DAT_00978358);
  if (*(undefined **)(lVar2 + 0x18) == (undefined *)0x0) {
    local_30 = DAT_009a6f40;
    lStack_28 = extraout_x9;
    if (DAT_009a6f40 != (undefined *)0x0) {
      local_30 = &UNK_00378000;
      lStack_28 = 4;
      if (DAT_009a6f40 != *(undefined **)(lVar2 + 0x10)) {
        local_30 = (undefined *)0x0;
      }
    }
  }
  else {
    lStack_28 = *(long *)(lVar2 + 0x20) + -1;
    local_30 = *(undefined **)(lVar2 + 0x18);
  }
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_00378e60,4,&local_30,&DAT_00978378);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive();
  return;
}


// ===== 006fd444  <std::io::stdio::Stdin_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::os::unix::io::StdioExt>::take_fd */

void __rustcall
<std::io::stdio::Stdin_as_std::os::unix::io::StdioExt>::take_fd
          (undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  
  piVar7 = (int *)*param_2;
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(piVar7);
      uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006fd518;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar3) {
      *piVar7 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006fd518:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 006fd488 to 006fd48b has its CatchHandler @ 006fd530 */
  <std::io::stdio::StdinLock_as_std::os::unix::io::StdioExt>::take_fd(param_1);
  if ((((uVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(piVar7 + 1) = 1;
  }
  do {
    iVar1 = *piVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar3) {
      *piVar7 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar7,0x81,1);
    return;
  }
  return;
}


// ===== 006fd54c  <std::process::ExitStatusError_as_std::os::unix::process::ExitStatusExt>::from_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ExitStatusError as std::os::unix::process::ExitStatusExt>::from_raw */

void __rustcall
<std::process::ExitStatusError_as_std::os::unix::process::ExitStatusExt>::from_raw(int param_1)

{
  undefined1 uStack_11;
  
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0045c13c,0x48,&uStack_11,&DAT_00977448,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_00978398);
}


// ===== 006fd584  <std::sys::env::common::Env_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::env::common::Env as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::sys::env::common::Env_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != *(undefined8 **)(param_2 + 0x18)) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar7 = puVar1[5];
    uVar6 = puVar1[4];
    *(undefined8 **)(param_2 + 8) = puVar1 + 6;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    return;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 006fd5bc  <std::sys::env::common::Env_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::env::common::Env as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::sys::env::common::Env_as_core::iter::traits::iterator::Iterator>::size_hint
          (long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = ((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 8)) >> 4) * -0x5555555555555555;
  *param_1 = lVar1;
  param_1[1] = 1;
  param_1[2] = lVar1;
  return;
}


// ===== 006fd5e8  <std::sys::process::env::CommandEnvs_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::env::CommandEnvs as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::sys::process::env::CommandEnvs_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_0070aec8();
  plVar6 = auVar7._8_8_;
  lVar5 = auVar7._0_8_;
  if (lVar5 != 0) {
    lVar1 = *plVar6;
    lVar3 = plVar6[1];
    uVar2 = *(undefined8 *)(lVar5 + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    param_1[3] = plVar6[2];
    lVar5 = 0;
    if (lVar1 != -1) {
      lVar5 = lVar3;
    }
    param_1[1] = uVar4;
    param_1[2] = lVar5;
    *param_1 = uVar2;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 006fd63c  <std::backtrace_rs::symbolize::gimli::mmap::Mmap_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::gimli::mmap::Mmap as core::ops::drop::Drop>::drop */

int __rustcall
<std::backtrace_rs::symbolize::gimli::mmap::Mmap_as_core::ops::drop::Drop>::drop
          (undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = munmap((void *)*param_1,param_1[1]);
  return iVar1;
}


// ===== 006fd648  <std::os::unix::net::addr::SocketAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::addr::SocketAddr as core::fmt::Debug>::fmt */

void __rustcall
<std::os::unix::net::addr::SocketAddr_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *local_30;
  ulong uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = (char *)((long)param_1 + 6);
  uStack_28 = (ulong)*param_1;
  uVar1 = uStack_28 - 2;
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x006fd6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0045c184,9);
    return;
  }
  if (*local_30 != '\0') {
    uStack_28 = uStack_28 - 3;
    if (uStack_28 < 0x6d) {
      pcStack_18 = (code *)PTR_fmt_0099f7b8;
      local_20 = (undefined1 *)&local_30;
      core::fmt::write(*param_2,param_2[1],&DAT_00366bc6,&local_20);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uStack_28,0x6c,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977528);
  }
  if (uVar1 < 0x6d) {
    local_30 = (char *)((long)param_1 + 7);
    uStack_28 = uStack_28 - 3;
    pcStack_18 = FUN_006fef48;
    core::fmt::write(*param_2,param_2[1],&DAT_0036cf71,&local_20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (1,uVar1,0x6c,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977510);
}


// ===== 006fd740  <std::os::unix::net::stream::UnixStream_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read_vectored
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


// ===== 006fd7d4  <std::os::unix::net::stream::UnixStream_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as std::io::Read>::read */

undefined1  [16] __rustcall
<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read
          (int *param_1,void *param_2,size_t param_3)

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


// ===== 006fd868  <std::os::unix::net::stream::UnixStream_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as std::io::Read>::read_buf */

ulong __rustcall
<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read_buf(int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  
  lVar1 = param_2[2];
  sVar3 = recv(*param_1,(void *)(*param_2 + lVar1),param_2[1] - lVar1,0);
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


// ===== 006fd910  <std::sys::process::unix::unix::ExitStatus_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::unix::ExitStatus as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::unix::ExitStatus_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_00372c00,0x10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&DAT_00977f60);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 006fd968  <std::sys::process::unix::common::cstring_array::CStringArray_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::cstring_array::CStringArray as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::common::cstring_array::CStringArray_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 param_2)

{
  size_t sVar1;
  long lVar2;
  char *__s;
  undefined8 *puVar3;
  undefined1 auStack_50 [16];
  char *local_40;
  long lStack_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_50,param_2);
  lVar2 = *(long *)(param_1 + 0x10) + -1;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,lVar2,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009776c0)
    ;
  }
  if (lVar2 != 0) {
    lVar2 = lVar2 * 8;
    puVar3 = *(undefined8 **)(param_1 + 8);
    do {
      __s = (char *)*puVar3;
      if (__s == (char *)0x0) break;
      sVar1 = strlen(__s);
      lStack_38 = sVar1 + 1;
      local_40 = __s;
      <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                (auStack_50,&local_40,&DAT_00976c08);
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_50);
  return;
}


// ===== 006fda0c  <std::panicking::panic_handler::FormatStringPayload_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::panic_handler::FormatStringPayload as core::fmt::Display>::fmt */

void __rustcall
<std::panicking::panic_handler::FormatStringPayload_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  if (*param_1 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,param_1[1],param_1[2]);
    return;
  }
  core::fmt::write(*param_2,param_2[1],**(undefined8 **)param_1[3],(*(undefined8 **)param_1[3])[1]);
  return;
}


// ===== 006fda3c  FUN_006fda3c =====

void FUN_006fda3c(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x006fda54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_006fda58 + (ulong)(byte)"P\'\n<Z"[*param_2] * 4))();
  return;
}


// ===== 006fdc10  <std::sys::os_str::bytes::Slice_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::os_str::bytes::Slice as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::os_str::bytes::Slice_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_1;
  uStack_18 = param_2;
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20,param_3);
  return;
}


// ===== 006fdc38  FUN_006fdc38 =====

void FUN_006fdc38(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = param_1 + 8;
  local_28 = param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_009783d0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_009783f0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 006fdcac  FUN_006fdcac =====

bool FUN_006fdcac(byte *param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  
  bVar2 = *param_1;
  bVar3 = *param_2;
  lVar5 = (ulong)bVar2 - 5;
  if (bVar2 < 6) {
    lVar5 = 0;
  }
  lVar1 = 0;
  if (5 < bVar3) {
    lVar1 = (ulong)bVar3 - 5;
  }
  if (lVar5 != lVar1) {
    return false;
  }
  if (lVar5 == 0) {
    if (5 < bVar3) {
      return true;
    }
    if (bVar2 != bVar3) {
      return false;
    }
    if (bVar2 < 3) {
      if (bVar2 != 0) {
        if (bVar2 != 1) {
LAB_006fddf4:
          return param_1[1] == param_2[1];
        }
        if (*(size_t *)(param_1 + 0x10) != *(size_t *)(param_2 + 0x10)) {
          return false;
        }
        iVar4 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0x10));
joined_r0x006fddb0:
        if (iVar4 != 0) {
          return false;
        }
        if (*(size_t *)(param_1 + 0x20) != *(size_t *)(param_2 + 0x20)) {
          return false;
        }
        iVar4 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
                       *(size_t *)(param_1 + 0x20));
        return iVar4 == 0;
      }
    }
    else if (bVar2 != 3) {
      if (bVar2 != 4) goto LAB_006fddf4;
      if (*(size_t *)(param_1 + 0x10) != *(size_t *)(param_2 + 0x10)) {
        return false;
      }
      iVar4 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0x10));
      goto joined_r0x006fddb0;
    }
  }
  else if (lVar5 != 4) {
    return true;
  }
  if (*(size_t *)(param_1 + 0x10) != *(size_t *)(param_2 + 0x10)) {
    return false;
  }
  iVar4 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0x10));
  return iVar4 == 0;
}


// ===== 006fde10  <std::env::Vars_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::Vars as core::fmt::Debug>::fmt */

void __rustcall <std::env::Vars_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00379d94,4);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045c1bf,5,param_1,&PTR_FUN_00978430);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006fde74  <std[29fbf8137994c300]::time::Instant_as_core[188d2c0002da36d0]::ops::arith::Sub<core[188d2c0002da36d0]::time::Duration>>::sub =====

/* <std[29fbf8137994c300]::time::Instant as
   core[188d2c0002da36d0]::ops::arith::Sub<core[188d2c0002da36d0]::time::Duration>>::sub */

undefined1  [16]
<std[29fbf8137994c300]::time::Instant_as_core[188d2c0002da36d0]::ops::arith::Sub<core[188d2c0002da36d0]::time::Duration>>
::sub(long param_1,int param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  lVar1 = param_1 - param_3;
  if (param_3 < 0 == SBORROW8(param_1,param_3)) {
    param_2 = param_2 - param_4;
    if (-1 < param_2) {
      auVar2._8_4_ = param_2;
      auVar2._0_8_ = lVar1;
      auVar2._12_4_ = 0;
      return auVar2;
    }
    if (!SBORROW8(lVar1,1)) {
      auVar3._8_4_ = param_2 + 1000000000;
      auVar3._0_8_ = lVar1 + -1;
      auVar3._12_4_ = 0;
      return auVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0045c1c4,0x2f,param_5);
}


// ===== 006fdecc  <std::process::Child_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as core::fmt::Debug>::fmt */

void __rustcall <std::process::Child_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c1f3,5);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0045c1f8,5,param_1 + 0xc,&PTR_FUN_00978450);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0045b81e,6,param_1 + 0x10,&PTR_FUN_00978470);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0045b824,6,param_1 + 0x14,&PTR_FUN_00978490);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive();
  return;
}


// ===== 006fdf68  <std::backtrace::BytesOrWide_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::BytesOrWide as core::fmt::Debug>::fmt */

ulong __rustcall
<std::backtrace::BytesOrWide_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  ulong local_50;
  undefined1 local_40;
  long local_38;
  
  local_68 = param_1[2];
  uStack_60 = param_1[3];
  local_70 = *param_1;
  std::env::current_dir(&local_58);
  plVar1 = (long *)0x0;
  if (local_58 != -1) {
    plVar1 = &local_58;
  }
                    /* try { // try from 006fdfa8 to 006fdfb7 has its CatchHandler @ 006fe040 */
  uVar2 = FUN_006f21c4(param_2,&local_70,0,plVar1);
  if (local_58 == -1) {
    if ((1 < (local_50 & 3) - 2) && ((local_50 & 3) != 0)) {
      local_38 = local_50 - 1;
      local_40 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      return uVar2 & 0xffffffff;
    }
  }
  else if (local_58 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    __rustc::__rust_dealloc(local_50,local_58,1);
  }
  return uVar2;
}


// ===== 006fe05c  <&std::net::tcp::TcpStream_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::net::tcp::TcpStream as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<&std::net::tcp::TcpStream_as_std::io::Read>::read_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*(int *)*param_1,param_2,(int)param_3);
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


// ===== 006fe0f4  <&std::net::tcp::TcpStream_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::net::tcp::TcpStream as std::io::Read>::read */

undefined1  [16] __rustcall
<&std::net::tcp::TcpStream_as_std::io::Read>::read(undefined8 *param_1,void *param_2,size_t param_3)

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


// ===== 006fe18c  <&std::net::tcp::TcpStream_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::net::tcp::TcpStream as std::io::Read>::read_buf */

ulong __rustcall
<&std::net::tcp::TcpStream_as_std::io::Read>::read_buf(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  
  lVar1 = param_2[2];
  sVar3 = recv(*(int *)*param_1,(void *)(*param_2 + lVar1),param_2[1] - lVar1,0);
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


// ===== 006fe238  <std::sync::once::Once_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::once::Once as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::once::Once_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00377e54,4);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 006fe270  <std::sync::barrier::BarrierWaitResult_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::barrier::BarrierWaitResult as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::barrier::BarrierWaitResult_as_core::fmt::Debug>::fmt
          (undefined1 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined1 local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c1fd,0x11);
  local_4[0] = *param_1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045c20e,9,local_4,&DAT_00977f80);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006fe2dc  <std::backtrace_rs::backtrace::libunwind::Frame_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::backtrace::libunwind::Frame as core::clone::Clone>::clone */

void __rustcall
<std::backtrace_rs::backtrace::libunwind::Frame_as_core::clone::Clone>::clone
          (undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2[1];
  if (*param_2 == 1) {
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
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  *param_1 = 1;
  param_1[1] = lVar2;
  return;
}


// ===== 006fe348  <std::io::stdio::StdinLock_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::os::unix::io::StdioExt>::take_fd */

ulong __rustcall
<std::io::stdio::StdinLock_as_std::os::unix::io::StdioExt>::take_fd(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  int local_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  long local_58;
  undefined8 local_50;
  
  local_1d8 = DAT_0045b9b4;
  local_1d0 = 0x6c;
  local_1ec = 0;
  local_1f0 = 0x101;
  local_1f8 = _s__00373250;
  uVar4 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_58,&local_1d8,10);
  if (local_58 == 1) {
    local_1e0 = &PTR_DAT_00977090;
  }
  else {
    uVar4 = FUN_006ea8b8(&local_1e8,local_50,&local_1f8);
    if (local_1e8 != 1) {
      iVar1 = fcntl(0,0x406,3);
      if (iVar1 == -1) {
        piVar5 = (int *)__errno();
        iVar1 = *piVar5;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006fe4fc to 006fe507 has its CatchHandler @ 006fe538 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        *param_1 = 1;
        *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
      }
      else {
        iVar2 = dup2(local_1e4,0);
        if (iVar2 != -1) {
          uVar3 = close(local_1e4);
          *param_1 = 0;
          param_1[1] = iVar1;
          return (ulong)uVar3;
        }
        piVar5 = (int *)__errno();
        iVar2 = *piVar5;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 006fe50c to 006fe517 has its CatchHandler @ 006fe51c */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        close(local_1e4);
        *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
        *param_1 = 1;
        local_1e4 = iVar1;
      }
      uVar3 = close(local_1e4);
      return (ulong)uVar3;
    }
  }
  *(undefined ***)(param_1 + 2) = local_1e0;
  *param_1 = 1;
  return uVar4;
}


// ===== 006fe550  <std::process::Child_as_std::os::unix::process::ChildExt>::send_signal =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as std::os::unix::process::ChildExt>::send_signal */

ulong __rustcall
<std::process::Child_as_std::os::unix::process::ChildExt>::send_signal(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = kill(param_1[2],param_2);
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


// ===== 006fe5ec  <std::process::Child_as_std::os::unix::process::ChildExt>::kill_process_group =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as std::os::unix::process::ChildExt>::kill_process_group */

ulong __rustcall
<std::process::Child_as_std::os::unix::process::ChildExt>::kill_process_group(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = killpg(param_1[2],9);
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


// ===== 006fe68c  <std::process::Child_as_std::os::unix::process::ChildExt>::send_process_group_signal =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as std::os::unix::process::ChildExt>::send_process_group_signal */

ulong __rustcall
<std::process::Child_as_std::os::unix::process::ChildExt>::send_process_group_signal
          (int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = killpg(param_1[2],param_2);
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


// ===== 006fe728  <std::sys::args::common::Args_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::args::common::Args as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::args::common::Args_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x18);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  for (; lVar1 != lVar2; lVar2 = lVar2 + 0x18) {
    local_18 = lVar2;
    <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00976c48);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 006fe79c  <std::sys::stdio::unix::Stdout_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdout as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stdout_as_std::io::Write>::write_vectored
          (undefined8 param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(1,param_2,(int)param_3);
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


// ===== 006fe830  <std::sys::stdio::unix::Stdout_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdout as std::io::Write>::write */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stdout_as_std::io::Write>::write
          (undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(1,param_2,param_3);
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


// ===== 006fe8b8  <std::path::PathBuf_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::PathBuf as core::fmt::Debug>::fmt */

void __rustcall <std::path::PathBuf_as_core::fmt::Debug>::fmt(long param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(param_1 + 8);
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 006fe8e0  <std::sys::thread::unix::Thread_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::thread::unix::Thread as core::ops::drop::Drop>::drop */

int __rustcall <std::sys::thread::unix::Thread_as_core::ops::drop::Drop>::drop(pthread_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_detach(*param_1);
  return iVar1;
}


// ===== 006fe8e8  <&std::os::unix::net::stream::UnixStream_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::os::unix::net::stream::UnixStream as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<&std::os::unix::net::stream::UnixStream_as_std::io::Read>::read_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*(int *)*param_1,param_2,(int)param_3);
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


// ===== 006fe980  <&std::os::unix::net::stream::UnixStream_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::os::unix::net::stream::UnixStream as std::io::Read>::read */

undefined1  [16] __rustcall
<&std::os::unix::net::stream::UnixStream_as_std::io::Read>::read
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


// ===== 006fea18  <&std::os::unix::net::stream::UnixStream_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::os::unix::net::stream::UnixStream as std::io::Read>::read_buf */

ulong __rustcall
<&std::os::unix::net::stream::UnixStream_as_std::io::Read>::read_buf
          (undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  
  lVar1 = param_2[2];
  sVar3 = recv(*(int *)*param_1,(void *)(*param_2 + lVar1),param_2[1] - lVar1,0);
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


// ===== 006feac4  <std::os::unix::net::ancillary::ScmRights_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::ancillary::ScmRights as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<std::os::unix::net::ancillary::ScmRights_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (3 < (ulong)param_1[1]) {
    auVar2._12_4_ = 0;
    auVar2._8_4_ = *(uint *)*param_1;
    *param_1 = (uint *)*param_1 + 1;
    param_1[1] = param_1[1] - 4;
    auVar2._0_8_ = 1;
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 006feaec  FUN_006feaec =====

void FUN_006feaec(void)

{
  return;
}


// ===== 006feaf8  FUN_006feaf8 =====

undefined1  [16] FUN_006feaf8(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 006feb04  <std::panicking::panic_handler::StaticStrPayload_as_core::panic::PanicPayload>::take_box =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::panic_handler::StaticStrPayload as core::panic::PanicPayload>::take_box */

void __rustcall
<std::panicking::panic_handler::StaticStrPayload_as_core::panic::PanicPayload>::take_box
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)__rustc::__rust_alloc(0x10,8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 006feb4c  <std::path::Display_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Display as core::fmt::Debug>::fmt */

void __rustcall <std::path::Display_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *param_1;
  uStack_18 = param_1[1];
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 006feb74  FUN_006feb74 =====

void FUN_006feb74(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0045c217,10,&local_18,&DAT_009784b0);
  return;
}


// ===== 006febb4  <std::path::Display_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Display as core::fmt::Display>::fmt */

void __rustcall
<std::path::Display_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006febc8  FUN_006febc8 =====

void FUN_006febc8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_38,param_2);
  local_28 = lVar1;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = lVar1 + 1;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = lVar1 + 2;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = lVar1 + 3;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_38);
  return;
}


// ===== 006fec64  FUN_006fec64 =====

void FUN_006fec64(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00976c48);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 006fecc0  FUN_006fecc0 =====

void FUN_006fecc0(long *param_1,undefined8 param_2)

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
    <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00976c88);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 006fed30  FUN_006fed30 =====

void FUN_006fed30(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)*param_1;
  lVar2 = ((long *)*param_1)[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 2;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00976ca8);
      lVar2 = lVar2 + -4;
      lVar1 = lVar1 + 4;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 006feda4  FUN_006feda4 =====

void FUN_006feda4(undefined8 *param_1,long param_2)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)*param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u64_as_core::fmt::LowerHex>::fmt(&local_18);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <u64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006fedfc  FUN_006fedfc =====

void FUN_006fedfc(undefined8 *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auStack_60 [16];
  long *local_50;
  long *plStack_48;
  
  puVar7 = (uint *)*param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_60,param_2);
  lVar8 = *(long *)(puVar7 + 0x10);
  if (lVar8 != 0) {
    plVar3 = *(long **)(puVar7 + 4);
    uVar4 = *puVar7;
    uVar2 = *(ulong *)(puVar7 + 6);
    plVar5 = *(long **)(puVar7 + 2);
    do {
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978d48);
      }
      if (plVar5 == (long *)0x0) {
        for (; plVar5 = plVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          plVar3 = (long *)plVar5[0x44];
        }
        plVar3 = (long *)0x0;
        uVar2 = 0;
        plVar9 = plVar5;
        if (*(short *)((long)plVar5 + 0x21a) == 0) goto LAB_006feec4;
      }
      else {
        plVar9 = plVar5;
        if (*(ushort *)((long)plVar5 + 0x21a) <= uVar2) {
LAB_006feec4:
          do {
            plVar5 = (long *)*plVar9;
            if (plVar5 == (long *)0x0) {
                    /* try { // try from 006fef28 to 006fef33 has its CatchHandler @ 006fef44 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977248);
            }
            puVar1 = (ushort *)(plVar9 + 0x43);
            uVar2 = (ulong)*puVar1;
            plVar3 = (long *)((long)plVar3 + 1);
            plVar9 = plVar5;
          } while (*(ushort *)((long)plVar5 + 0x21a) <= *puVar1);
        }
      }
      if (plVar3 == (long *)0x0) {
        uVar10 = uVar2 + 1;
        plVar9 = plVar5;
      }
      else {
        plVar6 = plVar5 + uVar2 + 0x45;
        do {
          plVar9 = (long *)*plVar6;
          plVar3 = (long *)((long)plVar3 + -1);
          plVar6 = plVar9 + 0x44;
        } while (plVar3 != (long *)0x0);
        uVar10 = 0;
      }
      lVar8 = lVar8 + -1;
      local_50 = plVar5 + uVar2 * 3 + 1;
      plStack_48 = plVar5 + uVar2 * 3 + 0x22;
      <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                (auStack_60,&local_50,&DAT_00976cc8);
      plVar3 = (long *)0x0;
      uVar4 = 1;
      uVar2 = uVar10;
      plVar5 = plVar9;
    } while (lVar8 != 0);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_60);
  return;
}


// ===== 006fef48  FUN_006fef48 =====

void FUN_006fef48(undefined8 *param_1,undefined8 param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006fef5c  FUN_006fef5c =====

void FUN_006fef5c(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_0045c1a7,0xf,&DAT_0045c1b6,3,local_18 + 0x28,&DAT_00976c28,&DAT_0045c1b9,6
             ,&local_18,&DAT_00978410);
  return;
}


// ===== 006fefcc  FUN_006fefcc =====

void FUN_006fefcc(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *local_18;
  
  pbVar3 = (byte *)*param_1;
  bVar1 = *pbVar3;
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        local_18 = pbVar3 + 0x18;
        <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
                  (param_2,&DAT_0045c18d,0xb,pbVar3 + 8,&DAT_00976c28,&local_18,&DAT_009783b0);
        return;
      }
      local_18 = pbVar3 + 1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_0045c198,0xc,&local_18,&DAT_00976c88);
      return;
    }
    pcVar2 = &DAT_00375778;
  }
  else {
    if (bVar1 != 3) {
      if (bVar1 == 4) {
        local_18 = pbVar3 + 0x18;
        <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
                  (param_2,&DAT_0045c1a4,3,pbVar3 + 8,&DAT_00976c28,&local_18,&DAT_009783b0);
        return;
      }
      local_18 = pbVar3 + 1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_003771a4,4,&local_18,&DAT_00976c88);
      return;
    }
    pcVar2 = "DeviceNS";
  }
  local_18 = pbVar3 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,pcVar2,8,&local_18,&DAT_009783b0);
  return;
}


// ===== 006ff120  FUN_006ff120 =====

void FUN_006ff120(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c478,10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 006ff158  FUN_006ff158 =====

void FUN_006ff158(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c5e9,0xb);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 006ff190  FUN_006ff190 =====

void FUN_006ff190(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c59e,0xb);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 006ff1c8  FUN_006ff1c8 =====

void FUN_006ff1c8(undefined8 *param_1)

{
  <std::backtrace::BytesOrWide_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 006ff1d0  FUN_006ff1d0 =====

void FUN_006ff1d0(undefined8 *param_1)

{
  <std::backtrace::BacktraceSymbol_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 006ff1d8  FUN_006ff1d8 =====

void FUN_006ff1d8(undefined8 *param_1,undefined8 param_2)

{
  <core::ffi::c_str::CStr_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006ff1ec  FUN_006ff1ec =====

void FUN_006ff1ec(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_0045c7e8 + *(int *)(&DAT_0045c7e8 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_0045c7b8 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 006ff218  FUN_006ff218 =====

void FUN_006ff218(long *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(*param_1 + 8);
  uStack_18 = *(undefined8 *)(*param_1 + 0x10);
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 006ff244  FUN_006ff244 =====

void FUN_006ff244(undefined8 *param_1)

{
  <alloc::ffi::c_str::CString_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 006ff24c  FUN_006ff24c =====

void FUN_006ff24c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c424,10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045ba82,2,uVar1,&DAT_00978690);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006ff2ac  FUN_006ff2ac =====

void FUN_006ff2ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c482,7);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045ba82,2,uVar1,&DAT_00978690);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006ff30c  FUN_006ff30c =====

void FUN_006ff30c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_00375c28,8,&local_18,&DAT_00978838);
  return;
}


// ===== 006ff350  FUN_006ff350 =====

void FUN_006ff350(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  puVar1 = (undefined4 *)*param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c4c6,0xf);
  local_4 = *puVar1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003799a4,4,&local_4,&DAT_00978858);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006ff3b8  FUN_006ff3b8 =====

void FUN_006ff3b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_00372c00,0x10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field(auStack_38,uVar1,&DAT_00977f60)
  ;
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 006ff40c  FUN_006ff40c =====

void FUN_006ff40c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *local_18;
  
  local_18 = (int *)*param_1 + 1;
  iVar1 = *(int *)*param_1;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045c5e0,7);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00376600,4);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_0045c5e7,2,&local_18,&DAT_00978ac0);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"StaticFd",8,&local_18,&DAT_00978ae0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00373c68,8);
  return;
}


// ===== 006ff4c8  FUN_006ff4c8 =====

void FUN_006ff4c8(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = *(long **)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00976c48);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 006ff528  FUN_006ff528 =====

void FUN_006ff528(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)*param_1;
  uStack_18 = ((undefined8 *)*param_1)[1];
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 006ff554  FUN_006ff554 =====

void FUN_006ff554(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(*(long *)*param_1 + 8);
  uStack_18 = *(undefined8 *)(*(long *)*param_1 + 0x10);
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 006ff584  FUN_006ff584 =====

void FUN_006ff584(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)*param_1;
  lVar2 = ((long *)*param_1)[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00976c88);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 006ff5f4  FUN_006ff5f4 =====

void FUN_006ff5f4(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 006ff608  FUN_006ff608 =====

void FUN_006ff608(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  lVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = lVar1 + 0x18;
  local_28 = lVar1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00976c48);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00976c48);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 006ff67c  FUN_006ff67c =====

void FUN_006ff67c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006ff690  FUN_006ff690 =====

void FUN_006ff690(undefined8 *param_1,long param_2)

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


// ===== 006ff6ac  FUN_006ff6ac =====

void FUN_006ff6ac(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i32_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i32_as_core::fmt::Display>::fmt();
    return;
  }
  <i32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006ff6c8  FUN_006ff6c8 =====

void FUN_006ff6c8(undefined8 *param_1,long param_2)

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


// ===== 006ff6e4  FUN_006ff6e4 =====

void FUN_006ff6e4(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i16_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i16_as_core::fmt::Display>::fmt();
    return;
  }
  <i16_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006ff700  FUN_006ff700 =====

void FUN_006ff700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  code *pcStack_38;
  undefined8 *local_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  local_40 = (undefined1 *)&local_50;
  param_1 = (undefined8 *)*param_1;
  pcStack_38 = FUN_006ff764;
  local_30 = param_1 + 2;
  local_50 = *param_1;
  uStack_48 = param_1[1];
  local_18 = PTR_fmt_0099f518;
  lStack_20 = (long)param_1 + 0x14;
  local_28 = PTR_fmt_0099f518;
  core::fmt::write(*param_2,param_2[1],&DAT_0036fcf1,&local_40);
  return;
}


// ===== 006ff764  FUN_006ff764 =====

void FUN_006ff764(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006ff778  FUN_006ff778 =====

void FUN_006ff778(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006ff780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 006ff784  <std::path::StripPrefixError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::StripPrefixError as core::fmt::Display>::fmt */

void __rustcall
<std::path::StripPrefixError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_003710d0,0x10,param_2);
  return;
}


// ===== 006ff798  <std::path::NormalizeError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::NormalizeError as core::fmt::Display>::fmt */

void __rustcall
<std::path::NormalizeError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045c221,0x36);
  return;
}


// ===== 006ff7ac  FUN_006ff7ac =====

void FUN_006ff7ac(long *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_60 [16];
  long *local_50;
  long *local_48;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_60,param_2);
  plVar3 = (long *)*param_1;
  if ((plVar3 != (long *)0x0) && (lVar6 = param_1[2], lVar6 != 0)) {
    uVar2 = param_1[1];
    plVar4 = (long *)0x0;
    do {
      if (plVar4 == (long *)0x0) {
        for (; plVar4 = plVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          plVar3 = (long *)plVar4[0x44];
        }
        plVar3 = (long *)0x0;
        uVar2 = 0;
        plVar7 = plVar4;
        if (*(short *)((long)plVar4 + 0x21a) == 0) goto LAB_006ff884;
      }
      else {
        plVar7 = plVar4;
        if (*(ushort *)((long)plVar4 + 0x21a) <= uVar2) {
LAB_006ff884:
          do {
            plVar4 = (long *)*plVar7;
            if (plVar4 == (long *)0x0) {
                    /* try { // try from 006ff8e8 to 006ff8f3 has its CatchHandler @ 006ff8f8 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977248);
            }
            puVar1 = (ushort *)(plVar7 + 0x43);
            uVar2 = (ulong)*puVar1;
            plVar3 = (long *)((long)plVar3 + 1);
            plVar7 = plVar4;
          } while (*(ushort *)((long)plVar4 + 0x21a) <= *puVar1);
        }
      }
      if (plVar3 == (long *)0x0) {
        uVar8 = uVar2 + 1;
        plVar7 = plVar4;
      }
      else {
        plVar5 = plVar4 + uVar2 + 0x45;
        do {
          plVar7 = (long *)*plVar5;
          plVar3 = (long *)((long)plVar3 + -1);
          plVar5 = plVar7 + 0x44;
        } while (plVar3 != (long *)0x0);
        uVar8 = 0;
      }
      lVar6 = lVar6 + -1;
      local_50 = plVar4 + uVar2 * 3 + 1;
      local_48 = plVar4 + uVar2 * 3 + 0x22;
      <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
                (auStack_60,&local_50,&DAT_00976c48,&local_48,&DAT_00976ce8);
      plVar3 = (long *)0x0;
      uVar2 = uVar8;
      plVar4 = plVar7;
    } while (lVar6 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish(auStack_60);
  return;
}


// ===== 006ff8fc  FUN_006ff8fc =====

void FUN_006ff8fc(byte *param_1,undefined8 param_2)

{
  long lVar1;
  byte *local_18;
  
  lVar1 = (ulong)*param_1 - 5;
  if (*param_1 < 6) {
    lVar1 = 0;
  }
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      local_18 = param_1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_0045c257,6,&local_18,&DAT_009784d0);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045c25d,7);
    return;
  }
  if (lVar1 == 2) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045c264,6);
    return;
  }
  if (lVar1 == 3) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045c26a,9);
    return;
  }
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0045c273,6,&local_18,&DAT_009783b0);
  return;
}


// ===== 006ff9e0  <std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::VarsOs as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::next(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != *(undefined8 **)(param_2 + 0x18)) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar7 = puVar1[5];
    uVar6 = puVar1[4];
    *(undefined8 **)(param_2 + 8) = puVar1 + 6;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    return;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 006ffa18  <std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::VarsOs as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::size_hint(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = ((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 8)) >> 4) * -0x5555555555555555;
  *param_1 = lVar1;
  param_1[1] = 1;
  param_1[2] = lVar1;
  return;
}


// ===== 006ffa44  <std[29fbf8137994c300]::time::Instant_as_core[188d2c0002da36d0]::ops::arith::SubAssign<core[188d2c0002da36d0]::time::Duration>>::sub_assign =====

/* <std[29fbf8137994c300]::time::Instant as
   core[188d2c0002da36d0]::ops::arith::SubAssign<core[188d2c0002da36d0]::time::Duration>>::sub_assign
    */

void <std[29fbf8137994c300]::time::Instant_as_core[188d2c0002da36d0]::ops::arith::SubAssign<core[188d2c0002da36d0]::time::Duration>>
     ::sub_assign(long *param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_1 - param_2;
  if (param_2 < 0 == SBORROW8(*param_1,param_2)) {
    param_3 = (int)param_1[1] - param_3;
    if (-1 < param_3) {
      *param_1 = lVar1;
      *(int *)(param_1 + 1) = param_3;
      return;
    }
    if (!SBORROW8(lVar1,1)) {
      *param_1 = lVar1 + -1;
      *(int *)(param_1 + 1) = param_3 + 1000000000;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0045c1c4,0x2f,&PTR_s__rustc_48a229ceaefd4985c50990b14_009784f0);
}


// ===== 006ffab8  <std::process::ChildStdin_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdin as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::process::ChildStdin_as_std::io::Write>::write_vectored
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


// ===== 006ffb4c  <std::process::ChildStdin_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdin as std::io::Write>::write */

undefined1  [16] __rustcall
<std::process::ChildStdin_as_std::io::Write>::write(int *param_1,void *param_2,size_t param_3)

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


// ===== 006ffbd4  <std::backtrace_rs::symbolize::SymbolName_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::SymbolName as core::fmt::Display>::fmt */

undefined8 __rustcall
<std::backtrace_rs::symbolize::SymbolName_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long local_68;
  long local_60;
  byte local_58;
  byte local_57;
  undefined6 uStack_56;
  
  if (*param_1 != 2) {
    uVar4 = <rustc_demangle::Demangle_as_core::fmt::Display>::fmt(param_1,param_2);
    return uVar4;
  }
  if (param_1[9] != 0) {
    lVar6 = param_1[8];
    uVar5 = param_1[9];
    do {
      core::str::converts::from_utf8(&local_68,lVar6,uVar5);
      bVar2 = local_58;
      lVar1 = local_60;
      if (local_68 != 1) {
        uVar4 = <str_as_core::fmt::Display>::fmt
                          (local_60,CONCAT62(uStack_56,CONCAT11(local_57,local_58)),param_2);
        if ((int)uVar4 != 0) {
          return 1;
        }
        return uVar4;
      }
      uVar7 = (ulong)local_57;
      uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0045b7d5,3,param_2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      if ((bVar2 & 1) == 0) {
        return 0;
      }
      uVar7 = lVar1 + uVar7;
      uVar3 = uVar5 - uVar7;
      if (uVar5 < uVar7) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar7,uVar5,uVar5,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977da8);
      }
      lVar6 = lVar6 + uVar7;
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  return 0;
}


// ===== 006ffcd8  <std::io::stdio::Stdin_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::Stdin_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c279,5);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 006ffd10  <&std::net::tcp::TcpStream_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::net::tcp::TcpStream as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<&std::net::tcp::TcpStream_as_std::io::Write>::write_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*(int *)*param_1,param_2,(int)param_3);
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


// ===== 006ffda8  <&std::os::unix::net::stream::UnixStream_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::os::unix::net::stream::UnixStream as std::io::Write>::write */

undefined1  [16] __rustcall
<&std::os::unix::net::stream::UnixStream_as_std::io::Write>::write
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = send(*(int *)*param_1,param_2,param_3,0x4000);
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


// ===== 006ffe38  <std::net::udp::UdpSocket_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::UdpSocket as core::fmt::Debug>::fmt */

void __rustcall <std::net::udp::UdpSocket_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a1b90)();
  return;
}


// ===== 006ffe3c  <std::thread::scoped::Scope_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::scoped::Scope as core::fmt::Debug>::fmt */

void __rustcall
<std::thread::scoped::Scope_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  undefined8 local_28;
  undefined1 local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_38,param_2,&DAT_0045c27e,5);
  lVar2 = *param_1;
  local_28 = *(undefined8 *)(lVar2 + 0x18);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_38,&DAT_0045c283,0x13,&local_28,&DAT_00978508);
  local_4[0] = *(char *)(lVar2 + 0x20) != '\0';
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0045c296,0x11,local_4,&DAT_00977f80);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0045c2a7,0xb,lVar2 + 0x10,&PTR_FUN_00978528);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive();
  return;
}


// ===== 006ffef4  <std::backtrace_rs::backtrace::libunwind::Bomb_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::backtrace::libunwind::Bomb as core::ops::drop::Drop>::drop */

void __rustcall
<std::backtrace_rs::backtrace::libunwind::Bomb_as_core::ops::drop::Drop>::drop(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045c2b2,0x55,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978548);
}


// ===== 006fff20  <std::io::buffered::bufwriter::WriterPanicked_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::buffered::bufwriter::WriterPanicked as core::fmt::Display>::fmt */

void __rustcall
<std::io::buffered::bufwriter::WriterPanicked_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_0045c2dc,0x49,param_2);
  return;
}


// ===== 006fff34  <std::io::stdio::Stderr_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as std::os::unix::io::StdioExt>::take_fd */

void __rustcall
<std::io::stdio::Stderr_as_std::os::unix::io::StdioExt>::take_fd
          (undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  void *pvVar4;
  int iVar5;
  undefined8 *local_28;
  
  param_2 = (undefined8 *)*param_2;
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_006fff98;
LAB_006fff64:
    if (pvVar4 != (void *)*param_2) {
LAB_006fffa8:
      piVar1 = (int *)(param_2 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (param_2 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_2 = pvVar4;
      iVar5 = 1;
      goto LAB_006fffc8;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar4 != (void *)0x0) goto LAB_006fff64;
LAB_006fff98:
    pvVar4 = (void *)FUN_006d2020();
    if (pvVar4 != (void *)*param_2) goto LAB_006fffa8;
  }
  if (*(int *)((long)param_2 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar5 = *(int *)((long)param_2 + 0xc) + 1;
LAB_006fffc8:
  *(int *)((long)param_2 + 0xc) = iVar5;
                    /* try { // try from 006fffd0 to 006fffdb has its CatchHandler @ 00700064 */
  local_28 = param_2;
  <std::io::stdio::StderrLock_as_std::os::unix::io::StdioExt>::take_fd(param_1,&local_28);
  iVar5 = *(int *)((long)param_2 + 0xc) + -1;
  *(int *)((long)param_2 + 0xc) = iVar5;
  if (iVar5 == 0) {
    piVar1 = (int *)(param_2 + 1);
    *param_2 = 0;
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return;
    }
  }
  return;
}


