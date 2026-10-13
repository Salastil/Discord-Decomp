// ===== 0074b3e8  FUN_0074b3e8 =====

void FUN_0074b3e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  code *local_18;
  
  local_28 = *param_1;
  puStack_20 = &local_28;
  local_18 = FUN_0074b640;
  core::fmt::write(*param_2,param_2[1],&DAT_003676e7,&puStack_20);
  return;
}


// ===== 0074b42c  <core::net::socket_addr::SocketAddrV4_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV4 as core::fmt::Debug>::fmt */

void __rustcall <core::net::socket_addr::SocketAddrV4_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a1f90)();
  return;
}


// ===== 0074b430  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv4Addr as core::fmt::Debug>::fmt */

void __rustcall <core::net::ip_addr::Ipv4Addr_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a0e08)();
  return;
}


// ===== 0074b434  <core::fmt::Arguments_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Arguments as core::fmt::Display>::fmt */

void __rustcall
<core::fmt::Arguments_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  core::fmt::write(*param_2,param_2[1],*param_1,param_1[1]);
  return;
}


// ===== 0074b444  <i128_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::pat::RangePattern>::sub_one */

undefined1  [16] __rustcall <i128_as_core::pat::RangePattern>::sub_one(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2 + -1 + (ulong)(param_1 != 0);
  if (SCARRY8(param_2,-1) == SCARRY8(param_2 + -1,(ulong)(param_1 != 0))) {
    auVar1._0_8_ = param_1 + -1;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59);
}


// ===== 0074b474  <core::error::Source_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::error::Source as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<core::error::Source_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar1 = *param_2;
  if (*(long *)*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    auVar3 = (**(code **)(*(long *)(*param_2 + 8) + 0x30))(*(long *)*param_2);
    param_1 = auVar3._8_8_;
    uVar2 = auVar3._0_8_;
  }
  *(undefined8 *)*param_2 = uVar2;
  *(undefined8 *)(*param_2 + 8) = param_1;
  return auVar1;
}


// ===== 0074b4c4  <core::io::error::Custom_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Custom as core::fmt::Debug>::fmt */

byte __rustcall
<core::io::error::Custom_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_30;
  byte local_28;
  byte local_27;
  
  local_28 = (**(code **)(param_2[1] + 0x18))(*param_2,"Custom",6);
  local_27 = 0;
  local_30 = param_2;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_30,&DAT_00376fb4,4,param_1 + 4,&DAT_0097c148);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_30,"error",5,*param_1,param_1[1]);
  bVar1 = local_27 | local_28;
  if ((local_27 == 1) && ((local_28 & 1) == 0)) {
    if (*(char *)((long)local_30 + 0x12) < '\0') {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0074b5a0  <u64_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as core::fmt::UpperHex>::fmt */

void __rustcall <u64_as_core::fmt::UpperHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074b610  <f64_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::fmt::LowerExp>::fmt */

void __rustcall <f64_as_core::fmt::LowerExp>::fmt(undefined8 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00734140(param_2,uVar1,0);
    return;
  }
  FUN_007337d0(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),0);
  return;
}


// ===== 0074b640  FUN_0074b640 =====

void FUN_0074b640(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074b658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)PTR_PTR_0099f738)(*(undefined4 *)*param_1);
  return;
}


// ===== 0074b65c  <core::net::socket_addr::SocketAddrV6_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV6 as core::fmt::Display>::fmt */

void __rustcall
<core::net::socket_addr::SocketAddrV6_as_core::fmt::Display>::fmt
          (undefined8 **param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long **local_a0;
  code *pcStack_98;
  undefined8 **local_90;
  undefined *puStack_88;
  int *local_80;
  undefined *puStack_78;
  long *local_58;
  undefined8 **local_50;
  code *local_48;
  int *local_40;
  undefined *puStack_38;
  undefined2 *local_30;
  undefined *puStack_28;
  int local_8;
  undefined2 local_4;
  undefined1 uStack_1;
  
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) == 0) {
    local_50 = param_1;
    if (*(int *)((long)param_1 + 0x14) != 0) {
      local_58 = (long *)CONCAT44(local_58._4_4_,*(int *)((long)param_1 + 0x14));
      local_a0 = (long **)&local_50;
      local_80 = &local_8;
      local_8 = CONCAT22(local_8._2_2_,*(undefined2 *)(param_1 + 3));
      pcStack_98 = FUN_00746eb8;
      local_90 = &local_58;
      puStack_88 = PTR_fmt_0099f518;
      puStack_78 = PTR_fmt_0099f528;
      core::fmt::write(*param_2,param_2[1],&DAT_003703cb,&local_a0);
      return;
    }
    local_a0 = (long **)&local_50;
    local_58 = (long *)CONCAT62(local_58._2_6_,*(undefined2 *)(param_1 + 3));
    local_90 = &local_58;
    pcStack_98 = FUN_00746eb8;
    puStack_88 = PTR_fmt_0099f528;
    core::fmt::write(*param_2,param_2[1],&DAT_0036f11d,&local_a0);
    return;
  }
  local_a0 = (long **)0x0;
  local_58 = (long *)param_1;
  if (*(int *)((long)param_1 + 0x14) == 0) {
    local_50 = &local_58;
    local_8 = CONCAT22(local_8._2_2_,*(undefined2 *)(param_1 + 3));
    local_48 = FUN_00746eb8;
    local_40 = &local_8;
    puStack_38 = PTR_fmt_0099f528;
    uVar2 = core::fmt::write(&local_a0,&DAT_0097c2c0,&DAT_0036f11d,&local_50);
    if ((uVar2 & 1) != 0) goto LAB_0074b7cc;
  }
  else {
    local_4 = *(undefined2 *)(param_1 + 3);
    local_50 = &local_58;
    local_48 = FUN_00746eb8;
    local_40 = &local_8;
    puStack_38 = PTR_fmt_0099f518;
    local_30 = &local_4;
    puStack_28 = PTR_fmt_0099f528;
    local_8 = *(int *)((long)param_1 + 0x14);
    iVar1 = core::fmt::write(&local_a0,&DAT_0097c2c0,&DAT_003703cb,&local_50);
    if (iVar1 != 0) {
LAB_0074b7cc:
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_00466abc,0x2b,&uStack_1,&DAT_0097b670,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097c2f0);
    }
  }
  if (local_a0 < (long **)0x3b) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&pcStack_98);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,local_a0,0x3a,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c260);
}


// ===== 0074b858  <core::net::socket_addr::SocketAddrV6_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV6 as core::str::traits::FromStr>::from_str */

void __rustcall
<core::net::socket_addr::SocketAddrV6_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_50;
  long local_48;
  uint local_40;
  undefined8 local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  local_50 = param_2;
  local_48 = param_3;
  FUN_007352fc(&local_40,&local_50);
  if ((local_48 == 0) && ((local_40 & 1) != 0)) {
    *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_30,uStack_34);
    *(undefined8 *)(param_1 + 4) = local_3c;
    *(undefined8 *)(param_1 + 0x18) = uStack_28;
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_2c,uStack_30);
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 1;
  return;
}


// ===== 0074b8d0  <u32_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::Display>::fmt */

void __rustcall <u32_as_core::fmt::Display>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14 [2];
  
  uVar1 = *param_1;
  if (uVar1 < 1000) {
    lVar4 = 10;
    uVar8 = uVar1;
    uVar6 = uVar1;
    if (uVar1 < 10) goto LAB_0074b9ac;
  }
  else {
    lVar5 = 0;
    uVar3 = (ulong)uVar1;
    do {
      uVar9 = uVar3;
      lVar4 = lVar5;
      uVar6 = (uint)(uVar9 / 10000);
      uVar7 = (uint)(uVar9 / 10000);
      uVar2 = (uint)uVar9 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)local_14 + lVar4) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar8 * 2);
      *(undefined2 *)((long)local_14 + lVar4 + 2) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar5 = lVar4 + -4;
      uVar3 = uVar9 / 10000;
    } while (9999999 < (uint)uVar9);
    lVar4 = lVar4 + 6;
    uVar8 = (uint)(uVar9 / 10000);
    if (uVar7 < 9 || (int)(uVar9 / 10000) == 9) goto LAB_0074b9ac;
  }
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar4) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_0074b9ac:
  if ((uVar1 == 0) || (lVar5 = lVar4, uVar6 != 0)) {
    lVar5 = lVar4 + -1;
    *(undefined *)((long)&uStack_1c + lVar4 + 1) = (&DAT_004670a7)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar5,10 - lVar5);
  return;
}


// ===== 0074b9fc  <core::slice::GetDisjointMutError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::GetDisjointMutError as core::fmt::Display>::fmt */

void __rustcall
<core::slice::GetDisjointMutError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"there were overlapping indices",0x1e);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"an index is out of bounds",0x19);
  return;
}


// ===== 0074ba2c  <core::io::error::Custom_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Custom as core::ops::drop::Drop>::drop */

void __rustcall <core::io::error::Custom_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074ba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])(*param_1,param_1[1]);
  return;
}


// ===== 0074ba3c  <i64_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::UpperHex>::fmt */

void __rustcall <i64_as_core::fmt::UpperHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074baac  <f64_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::fmt::UpperExp>::fmt */

void __rustcall <f64_as_core::fmt::UpperExp>::fmt(undefined8 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00734140(param_2,uVar1,1);
    return;
  }
  FUN_007337d0(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),1);
  return;
}


// ===== 0074badc  <core::net::socket_addr::SocketAddrV6_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV6 as core::fmt::Debug>::fmt */

void __rustcall <core::net::socket_addr::SocketAddrV6_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a1f88)();
  return;
}


// ===== 0074bae0  <core::char::convert::CharTryFromError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::convert::CharTryFromError as core::fmt::Display>::fmt */

void __rustcall
<core::char::convert::CharTryFromError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"converted integer out of range for `char`",0x29);
  return;
}


// ===== 0074baf4  <core::task::wake::Waker_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::task::wake::Waker as core::fmt::Debug>::fmt */

byte __rustcall
<core::task::wake::Waker_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 *local_30;
  byte local_28;
  byte local_27;
  
  local_38 = *param_1;
  local_28 = (**(code **)(param_2[1] + 0x18))(*param_2,"Waker",5);
  local_27 = 0;
  local_30 = param_2;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_30,&DAT_003791f0,4,param_1 + 1,&DAT_0097c308);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_30,"vtablePhantomInvariantLifetime",6,&local_38,&DAT_0097c328);
  bVar1 = local_27 | local_28;
  if ((local_27 == 1) && ((local_28 & 1) == 0)) {
    if (*(char *)((long)local_30 + 0x12) < '\0') {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0074bbdc  <core::marker::variance::PhantomInvariantLifetime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::marker::variance::PhantomInvariantLifetime as core::fmt::Debug>::fmt */

void __rustcall
<core::marker::variance::PhantomInvariantLifetime_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0074bbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"PhantomInvariantLifetime",0x18);
  return;
}


// ===== 0074bbf8  <i32_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::Display>::fmt */

void __rustcall <i32_as_core::fmt::Display>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14 [2];
  uint uVar6;
  
  uVar1 = *param_1;
  uVar5 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar5 = uVar1;
  }
  if (uVar5 < 1000) {
    lVar9 = 10;
    uVar6 = uVar5;
    if (uVar5 < 10) goto LAB_0074bcd8;
  }
  else {
    uVar4 = (ulong)uVar5;
    lVar10 = 0;
    do {
      lVar9 = lVar10;
      uVar8 = uVar4;
      uVar6 = (uint)(uVar8 / 10000);
      uVar5 = (uint)(uVar8 / 10000);
      uVar7 = (uint)(uVar8 / 10000);
      uVar3 = (uint)uVar8 + uVar7 * -10000;
      uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)local_14 + lVar9) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar2 * 2);
      *(undefined2 *)((long)local_14 + lVar9 + 2) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
      uVar4 = uVar8 / 10000;
      lVar10 = lVar9 + -4;
    } while (9999999 < (uint)uVar8);
    lVar9 = lVar9 + 6;
    if (uVar7 < 9 || (int)(uVar8 / 10000) == 9) goto LAB_0074bcd8;
  }
  uVar6 = (uVar5 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar9) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar5 + uVar6 * -100) & 0xffff) * 2);
  lVar9 = lVar9 + -2;
LAB_0074bcd8:
  if ((uVar1 == 0) || (lVar10 = lVar9, uVar6 != 0)) {
    lVar10 = lVar9 + -1;
    *(undefined *)((long)&uStack_1c + lVar9 + 1) = (&DAT_004670a7)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,~uVar1 >> 0x1f,1,0,auStack_1a + lVar10,10 - lVar10);
  return;
}


// ===== 0074bd2c  <core::num::imp::bignum::Big32x40_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::Big32x40 as core::fmt::Debug>::fmt */

ulong __rustcall
<core::num::imp::bignum::Big32x40_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_74;
  undefined4 *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined2 local_58;
  
  puVar3 = PTR_fmt_0099f520;
  uVar6 = *(ulong *)(param_1 + 0xa0);
  uVar4 = uVar6 - (uVar6 != 0);
  if (0x27 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar4,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738)
    ;
  }
  local_70 = (undefined4 *)(param_1 + uVar4 * 4);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puStack_68 = PTR_fmt_0099f520;
  uVar4 = core::fmt::write(uVar1,uVar2,&DAT_0046c71d,&local_70);
  if ((uVar4 & 1) == 0) {
    if (uVar6 < 2) {
      uVar6 = 0;
    }
    else {
      lVar5 = uVar6 * 4;
      if (uVar6 != 0) {
        uVar6 = 1;
      }
      lVar5 = lVar5 + uVar6 * -4;
      do {
        lVar5 = lVar5 + -4;
        local_74 = *(undefined4 *)(param_1 + lVar5);
        puStack_68 = puVar3;
        local_60 = 0;
        local_58 = 8;
        local_70 = &local_74;
        uVar6 = core::fmt::write(uVar1,uVar2,&DAT_0046c723,&local_70);
        if ((uVar6 & 1) != 0) {
          return uVar6;
        }
      } while (lVar5 != 0);
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 0074be34  <usize_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::fmt::LowerExp>::fmt */

void __rustcall <usize_as_core::fmt::LowerExp>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_0073f3e4(param_2,*param_1,1,0x65);
  return;
}


// ===== 0074be4c  <core::sync::atomic::Atomic<u8>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<u8> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<u8>as_core::fmt::Debug>::fmt(undefined1 *param_1)

{
  FUN_0074d13c(*param_1);
  return;
}


// ===== 0074be54  <i64_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::UpperExp>::fmt */

void __rustcall <i64_as_core::fmt::UpperExp>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  FUN_0073f3e4(param_2,lVar1,(uint)((ulong)lVar2 >> 0x3f) ^ 1,0x45);
  return;
}


// ===== 0074be78  <u64_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as core::fmt::UpperExp>::fmt */

void __rustcall <u64_as_core::fmt::UpperExp>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_0073f3e4(param_2,*param_1,1,0x45);
  return;
}


// ===== 0074be90  <i64_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::LowerExp>::fmt */

void __rustcall <i64_as_core::fmt::LowerExp>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  FUN_0073f3e4(param_2,lVar1,(uint)((ulong)lVar2 >> 0x3f) ^ 1,0x65);
  return;
}


// ===== 0074beb4  <core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::advance_by =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToCasefold as core::iter::traits::iterator::Iterator>::advance_by */

long __rustcall
<core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::advance_by
          (long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1 + param_2;
  lVar2 = param_1[1];
  if (param_2 <= (ulong)(param_1[1] - *param_1)) {
    lVar2 = lVar1;
  }
  *param_1 = lVar2;
  return lVar1 - lVar2;
}


// ===== 0074bed8  <core::char::ToTitlecase_as_core::iter::traits::iterator::Iterator>::__iterator_get_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToTitlecase as core::iter::traits::iterator::Iterator>::__iterator_get_unchecked */

undefined4 __rustcall
<core::char::ToTitlecase_as_core::iter::traits::iterator::Iterator>::__iterator_get_unchecked
          (long *param_1,long param_2)

{
  return *(undefined4 *)((long)param_1 + param_2 * 4 + *param_1 * 4 + 0x10);
}


// ===== 0074beec  <core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::last =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToCasefold as core::iter::traits::iterator::Iterator>::last */

undefined4 __rustcall
<core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::last(long *param_1)

{
  long lStack_10;
  long lStack_8;
  
  lStack_8 = param_1[3];
  lStack_10 = param_1[2];
  if (param_1[1] == *param_1) {
    return 0xffffffff;
  }
  return *(undefined4 *)((long)&lStack_10 + (param_1[1] + -1) * 4);
}


// ===== 0074bf28  <core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToCasefold as core::iter::traits::iterator::Iterator>::next */

undefined4 __rustcall
<core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::next(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] == lVar1) {
    return 0xffffffff;
  }
  *param_1 = lVar1 + 1;
  return *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x10);
}


// ===== 0074bf54  <core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::count =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToCasefold as core::iter::traits::iterator::Iterator>::count */

long __rustcall
<core::char::ToCasefold_as_core::iter::traits::iterator::Iterator>::count(long *param_1)

{
  return param_1[1] - *param_1;
}


// ===== 0074bf60  <core::num::niche_types::NonZeroU32Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU32Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU32Inner_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar3 = *param_1;
  uVar5 = (ulong)uVar3;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    lVar6 = 0;
    do {
      uVar8 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      lVar7 = lVar6 + -1;
      *(char *)((long)&local_14 + lVar6 + 1) = "0123456789abcdef"[uVar8];
      lVar6 = lVar7;
    } while ((int)uVar5 != 0);
LAB_0074c068:
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_2,1,"0x",2,(long)&local_12 + lVar7,-lVar7);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) != 0) {
    lVar6 = 0;
    do {
      uVar8 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      lVar7 = lVar6 + -1;
      *(char *)((long)&local_14 + lVar6 + 1) = "0123456789ABCDEF"[uVar8];
      lVar6 = lVar7;
    } while ((int)uVar5 != 0);
    goto LAB_0074c068;
  }
  if (uVar3 < 1000) {
    lVar6 = 10;
    if (uVar3 < 10) goto LAB_0074c0d8;
  }
  else {
    lVar7 = 0;
    do {
      lVar6 = lVar7;
      uVar8 = uVar5;
      uVar3 = (uint)(uVar8 / 10000);
      uVar4 = (uint)(uVar8 / 10000);
      uVar2 = (uint)uVar8 + uVar4 * -10000;
      uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)&local_14 + lVar6) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar1 * 2);
      *(undefined2 *)((long)&local_12 + lVar6) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      uVar5 = uVar8 / 10000;
      lVar7 = lVar6 + -4;
    } while (9999999 < (uint)uVar8);
    lVar6 = lVar6 + 6;
    if (uVar4 < 9 || (int)(uVar8 / 10000) == 9) goto LAB_0074c0d8;
  }
  uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar6) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
  lVar6 = lVar6 + -2;
  uVar3 = uVar1;
LAB_0074c0d8:
  lVar7 = lVar6;
  if (uVar3 != 0) {
    lVar7 = lVar6 + -1;
    *(undefined *)((long)&uStack_1c + lVar6 + 1) = (&DAT_004670a7)[(uVar3 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar7,10 - lVar7);
  return;
}


// ===== 0074c124  <core::char::ToLowercase_as_core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToLowercase as
   core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by */

long __rustcall
<core::char::ToLowercase_as_core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by
          (long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  lVar1 = *param_1;
  if (param_2 <= (ulong)(lVar2 - *param_1)) {
    lVar1 = lVar2 - param_2;
  }
  param_1[1] = lVar1;
  return (param_2 - lVar2) + lVar1;
}


// ===== 0074c14c  <core::char::ToLowercase_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::ToLowercase as core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

undefined4 __rustcall
<core::char::ToLowercase_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (long *param_1)

{
  long lVar1;
  
  if (param_1[1] == *param_1) {
    return 0xffffffff;
  }
  lVar1 = param_1[1] + -1;
  param_1[1] = lVar1;
  return *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x10);
}


// ===== 0074c174  <core::sync::atomic::Atomic<i16>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<i16> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<i16>as_core::fmt::Debug>::fmt(undefined2 *param_1)

{
  FUN_0074ca98(*param_1);
  return;
}


// ===== 0074c17c  <u128_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::Binary>::fmt */

void __rustcall <u128_as_core::fmt::Binary>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 1;
    uVar4 = uVar4 >> 1 | uVar3 << 0x3f;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_0046c5b6)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074c1f4  <i128_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::Binary>::fmt */

void __rustcall <i128_as_core::fmt::Binary>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 1;
    uVar4 = uVar4 >> 1 | uVar3 << 0x3f;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_0046c5b6)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074c26c  <core::num::nonzero::NonZero<u8>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u8> as core::str::traits::FromStr>::from_str */

undefined1  [16] __rustcall
<core::num::nonzero::NonZero<u8>as_core::str::traits::FromStr>::from_str(byte *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 == 0) {
    return ZEXT816(1);
  }
  if (param_2 == 1) {
    bVar1 = *param_1;
    if (bVar1 == 0x2b) {
      auVar9._8_8_ = 1;
      auVar9._0_8_ = 1;
      return auVar9;
    }
    if (bVar1 == 0x2d) {
      auVar6._8_8_ = 1;
      auVar6._0_8_ = 1;
      return auVar6;
    }
  }
  else {
    bVar1 = *param_1;
  }
  if (bVar1 == 0x2b) {
    param_1 = param_1 + 1;
  }
  uVar5 = param_2 - (ulong)(bVar1 == 0x2b);
  if (uVar5 < 3) {
    if (uVar5 != 0) {
      uVar4 = *param_1 - 0x30;
      if (uVar4 < 10) {
        if (uVar5 == 1) goto LAB_0074c338;
        if (param_1[1] - 0x30 < 10) {
          uVar2 = (param_1[1] - 0x30) + uVar4 * 10;
          bVar3 = (uVar2 & 0xff) == 0;
          auVar11._1_7_ = 0;
          auVar11[0] = bVar3;
          uVar4 = 4;
          if (!bVar3) {
            uVar4 = uVar2;
          }
          auVar11._8_4_ = uVar4;
          auVar11._12_4_ = 0;
          return auVar11;
        }
      }
LAB_0074c2d8:
      auVar7._8_8_ = 1;
      auVar7._0_8_ = 1;
      return auVar7;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    while (uVar5 != 0) {
      uVar4 = ((uVar4 & 0xff) + (uVar4 & 0xff) * 4) * 2;
      if ((uVar4 & 0xf00) != 0) {
        uVar4 = 1;
        if (*param_1 - 0x30 < 10) {
          uVar4 = 2;
        }
        auVar12._12_4_ = 0;
        auVar12._8_4_ = uVar4;
        auVar12._0_8_ = 1;
        return auVar12;
      }
      uVar2 = *param_1 - 0x30;
      if (9 < uVar2) goto LAB_0074c2d8;
      uVar5 = uVar5 - 1;
      uVar4 = (uVar4 & 0xff) + (uVar2 & 0xff);
      param_1 = param_1 + 1;
      if (uVar4 >> 8 != 0) {
        auVar8._8_8_ = 2;
        auVar8._0_8_ = 1;
        return auVar8;
      }
    }
  }
LAB_0074c338:
  bVar3 = (uVar4 & 0xff) == 0;
  auVar10._1_7_ = 0;
  auVar10[0] = bVar3;
  uVar2 = 4;
  if (!bVar3) {
    uVar2 = uVar4;
  }
  auVar10._8_4_ = uVar2;
  auVar10._12_4_ = 0;
  return auVar10;
}


// ===== 0074c394  <u128_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::Octal>::fmt */

void __rustcall <u128_as_core::fmt::Octal>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 7;
    uVar4 = uVar4 >> 3 | uVar3 << 0x3d;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_00374588)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074c40c  <i128_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::Octal>::fmt */

void __rustcall <i128_as_core::fmt::Octal>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 7;
    uVar4 = uVar4 >> 3 | uVar3 << 0x3d;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_00374588)[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074c484  <core::sync::atomic::Atomic<u16>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<u16> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<u16>as_core::fmt::Debug>::fmt(undefined2 *param_1)

{
  FUN_0074d2a4(*param_1);
  return;
}


// ===== 0074c48c  FUN_0074c48c =====

void FUN_0074c48c(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0074c4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046c5b1,5);
  return;
}


// ===== 0074c4a8  <u128_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::LowerHex>::fmt */

void __rustcall <u128_as_core::fmt::LowerHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4 | uVar3 << 0x3c;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789abcdef"[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074c520  <i128_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::LowerHex>::fmt */

void __rustcall <i128_as_core::fmt::LowerHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4 | uVar3 << 0x3c;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789abcdef"[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074c598  <u128_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::UpperHex>::fmt */

void __rustcall <u128_as_core::fmt::UpperHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4 | uVar3 << 0x3c;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789ABCDEF"[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074c610  <i128_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::UpperHex>::fmt */

void __rustcall <i128_as_core::fmt::UpperHex>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char local_11;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar5 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4 | uVar3 << 0x3c;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789ABCDEF"[uVar5];
    lVar1 = lVar2 + -1;
  } while (uVar4 != 0 || uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074c688  <core::str::iter::EncodeUtf16_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::EncodeUtf16 as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::str::iter::EncodeUtf16_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,"EncodeUtf16memory allocation failed",0xb);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0074c6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00466a5b,7);
  return uVar2;
}


// ===== 0074c6e8  <core::sync::atomic::Atomic<i32>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<i32> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<i32>as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint local_1c [2];
  char local_11;
  
  local_1c[0] = *param_1;
  uVar1 = (ulong)local_1c[0];
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <i32_as_core::fmt::Display>::fmt(local_1c);
      return;
    }
    lVar2 = 0;
    do {
      uVar4 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4];
      lVar2 = lVar3;
    } while ((int)uVar1 != 0);
  }
  else {
    lVar2 = 0;
    do {
      uVar4 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = "0123456789abcdef"[uVar4];
      lVar2 = lVar3;
    } while ((int)uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 0074c7b4  FUN_0074c7b4 =====

void FUN_0074c7b4(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char local_16 [2];
  undefined2 local_14;
  char local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar1 = (uint)(char)param_1;
      uVar2 = -uVar1;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      uVar5 = (ulong)uVar2;
      if (uVar2 < 10) {
        lVar3 = 3;
      }
      else {
        uVar5 = (ulong)(99 < (uVar2 & 0xff));
        uVar1 = uVar2 * 2;
        if (99 < (uVar2 & 0xff)) {
          uVar1 = uVar2 * 2 + 0x38;
        }
        local_14 = *(undefined2 *)(&DAT_004670a6 + ((ulong)uVar1 & 0xfe));
        lVar3 = 1;
      }
      if (((param_1 & 0xff) == 0) || ((uVar5 & 0xff) != 0)) {
        local_16[lVar3] = (&DAT_004670a7)[(uVar5 & 0x7f) * 2];
        lVar3 = lVar3 + -1;
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,(uint)param_1 >> 7 & 1 ^ 1,1,0,local_16 + lVar3 + 1,3 - lVar3);
      return;
    }
    lVar3 = 0;
    do {
      uVar5 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xf;
      lVar4 = lVar3 + -1;
      param_1 = (ulong)uVar2;
      (&local_11)[lVar3] = "0123456789ABCDEF"[uVar5];
      lVar3 = lVar4;
    } while (uVar2 != 0);
    lVar3 = -2;
  }
  else {
    lVar3 = 0;
    do {
      uVar5 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xf;
      lVar4 = lVar3 + -1;
      param_1 = (ulong)uVar2;
      local_16[lVar3] = "0123456789abcdef"[uVar5];
      lVar3 = lVar4;
    } while (uVar2 != 0);
    lVar3 = -7;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff2 + lVar4 + lVar3,-lVar4);
  return;
}


// ===== 0074c924  <core::num::nonzero::NonZero<u16>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u16> as core::str::traits::FromStr>::from_str */

uint __rustcall
<core::num::nonzero::NonZero<u16>as_core::str::traits::FromStr>::from_str
          (byte *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    uVar3 = 1;
    goto LAB_0074ca50;
  }
  if (param_2 == 1) {
    bVar2 = *param_1;
    uVar3 = 0x101;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0074ca50;
    uVar4 = (ulong)(bVar2 != 0x2b);
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar4 = param_2 - (ulong)(*param_1 == 0x2b);
    if (*param_1 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  if (4 < uVar4) {
    uVar3 = 0;
    do {
      if (uVar4 == 0) goto LAB_0074ca4c;
      uVar3 = ((uVar3 & 0xffff) + (uVar3 & 0xffff) * 4) * 2;
      if ((uVar3 & 0xf0000) != 0) {
        uVar3 = 0x201;
        if (9 < *param_1 - 0x30) {
          uVar3 = 0x101;
        }
        goto LAB_0074ca50;
      }
      uVar5 = *param_1 - 0x30;
      if (9 < uVar5) goto LAB_0074ca40;
      uVar4 = uVar4 - 1;
      uVar3 = (uVar3 & 0xffff) + (uVar5 & 0xffff);
      param_1 = param_1 + 1;
    } while (uVar3 >> 0x10 == 0);
    uVar3 = 0x201;
    goto LAB_0074ca50;
  }
  if (uVar4 == 0) {
    uVar3 = 0;
LAB_0074ca4c:
    uVar3 = uVar3 << 0x10;
  }
  else {
    uVar3 = *param_1 - 0x30;
    if (uVar3 < 10) {
      if (uVar4 == 1) goto LAB_0074ca4c;
      if (param_1[1] - 0x30 < 10) {
        uVar3 = (param_1[1] - 0x30) + uVar3 * 10;
        if (uVar4 == 2) goto LAB_0074ca4c;
        if (param_1[2] - 0x30 < 10) {
          uVar3 = (param_1[2] - 0x30) + uVar3 * 10;
          if (uVar4 == 3) goto LAB_0074ca4c;
          if (param_1[3] - 0x30 < 10) {
            uVar3 = ((param_1[3] - 0x30) + uVar3 * 10) * 0x10000;
            goto LAB_0074ca50;
          }
        }
      }
    }
LAB_0074ca40:
    uVar3 = 0x101;
  }
LAB_0074ca50:
  uVar5 = 0x400;
  if (uVar3 >= 0x10000) {
    uVar5 = 0;
  }
  uVar1 = uVar3 & 0x300;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar5;
  }
  return uVar1 | uVar3 & 0xffff0000 | (uint)(uVar3 < 0x10000) | uVar3 & 1;
}


// ===== 0074ca98  FUN_0074ca98 =====

void FUN_0074ca98(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_1d [3];
  char local_1a [2];
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [3];
  char local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar3 = (uint)(short)param_1;
      uVar2 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      if (uVar2 < 1000) {
        if ((uVar2 & 0xffff) < 10) {
          lVar5 = 5;
          uVar3 = uVar2;
        }
        else {
          uVar3 = (uVar2 >> 2 & 0x3fff) / 0x19;
          lVar5 = 3;
          local_16 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar2 + uVar3 * -100) & 0xffff) * 2);
        }
      }
      else {
        uVar3 = (uVar2 >> 4 & 0xfff) / 0x271;
        uVar2 = uVar2 + uVar3 * -10000;
        uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
        local_18 = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar1 * 2);
        lVar5 = 1;
        local_16 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      }
      if (((param_1 & 0xffff) == 0) || ((uVar3 & 0xffff) != 0)) {
        local_1a[lVar5] = (&DAT_004670a7)[(uVar3 & 0xf) << 1];
        lVar5 = lVar5 + -1;
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,(uint)param_1 >> 0xf & 1 ^ 1,1,0,local_1a + lVar5 + 1,5 - lVar5);
      return;
    }
    lVar5 = 0;
    do {
      uVar7 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xfff;
      lVar4 = lVar5 + -1;
      param_1 = (ulong)uVar2;
      (&local_11)[lVar5] = "0123456789ABCDEF"[uVar7];
      lVar5 = lVar4;
    } while (uVar2 != 0);
    puVar6 = auStack_14;
  }
  else {
    lVar5 = 0;
    do {
      uVar7 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xfff;
      lVar4 = lVar5 + -1;
      param_1 = (ulong)uVar2;
      local_1a[lVar5] = "0123456789abcdef"[uVar7];
      lVar5 = lVar4;
    } while (uVar2 != 0);
    puVar6 = auStack_1d;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,"0x",2,puVar6 + lVar4 + 4,-lVar4);
  return;
}


// ===== 0074cc64  FUN_0074cc64 =====

void FUN_0074cc64(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <i32_as_core::fmt::Display>::fmt();
      return;
    }
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  else {
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = "0123456789abcdef"[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 0074cd28  FUN_0074cd28 =====

void FUN_0074cd28(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_44 [15];
  char local_35 [5];
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar3 = -param_1;
      if (-1 < (long)param_1) {
        uVar3 = param_1;
      }
      lVar1 = FUN_0073be94(uVar3,auStack_44,0x14);
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,(uint)(param_1 >> 0x3f) ^ 1,1,0,auStack_44 + lVar1,0x14 - lVar1);
      return;
    }
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      lVar2 = lVar1 + -1;
      local_35[lVar1] = "0123456789ABCDEF"[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0);
  }
  else {
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      lVar2 = lVar1 + -1;
      local_35[lVar1] = "0123456789abcdef"[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,"0x",2,local_35 + lVar2 + 1,-lVar2)
  ;
  return;
}


// ===== 0074ce3c  <core::sync::atomic::Atomic<u32>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<u32> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<u32>as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(char *)((long)&local_14 + lVar4 + 1) = "0123456789abcdef"[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
LAB_0074cf48:
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_2,1,"0x",2,(long)&local_12 + lVar5,-lVar5);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(char *)((long)&local_14 + lVar4 + 1) = "0123456789ABCDEF"[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
    goto LAB_0074cf48;
  }
  if (uVar1 < 1000) {
    lVar4 = 10;
    uVar8 = uVar1;
    uVar6 = uVar1;
    if (uVar1 < 10) goto LAB_0074cfbc;
  }
  else {
    lVar5 = 0;
    uVar3 = (ulong)uVar1;
    do {
      uVar9 = uVar3;
      lVar4 = lVar5;
      uVar6 = (uint)(uVar9 / 10000);
      uVar7 = (uint)(uVar9 / 10000);
      uVar2 = (uint)uVar9 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)&local_14 + lVar4) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar8 * 2);
      *(undefined2 *)((long)&local_12 + lVar4) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar5 = lVar4 + -4;
      uVar3 = uVar9 / 10000;
    } while (9999999 < (uint)uVar9);
    lVar4 = lVar4 + 6;
    uVar8 = (uint)(uVar9 / 10000);
    if (uVar7 < 9 || (int)(uVar9 / 10000) == 9) goto LAB_0074cfbc;
  }
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar4) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_0074cfbc:
  if ((uVar1 == 0) || (lVar5 = lVar4, uVar6 != 0)) {
    lVar5 = lVar4 + -1;
    *(undefined *)((long)&uStack_1c + lVar4 + 1) = (&DAT_004670a7)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar5,10 - lVar5);
  return;
}


// ===== 0074d00c  FUN_0074d00c =====

void FUN_0074d00c(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_57 [31];
  char local_38 [8];
  
  if ((*(uint *)(param_3 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_3 + 0x10) >> 0x1a & 1) == 0) {
      uVar2 = (long)param_2 >> 0x3f;
      lVar1 = FUN_007366d0((param_1 ^ uVar2) - uVar2,
                           (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2)),auStack_57,0x27
                          );
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_3,(uint)(param_2 >> 0x3f) ^ 1,1,0,auStack_57 + lVar1,0x27 - lVar1);
      return;
    }
    lVar1 = 0;
    do {
      uVar2 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x3c;
      param_2 = param_2 >> 4;
      lVar3 = lVar1 + -1;
      local_38[lVar1] = "0123456789ABCDEF"[uVar2];
      lVar1 = lVar3;
    } while (param_1 != 0 || param_2 != 0);
  }
  else {
    lVar1 = 0;
    do {
      uVar2 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x3c;
      param_2 = param_2 >> 4;
      lVar3 = lVar1 + -1;
      local_38[lVar1] = "0123456789abcdef"[uVar2];
      lVar1 = lVar3;
    } while (param_1 != 0 || param_2 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_3,1,"0x",2,local_38 + lVar3 + 1,-lVar3)
  ;
  return;
}


// ===== 0074d13c  FUN_0074d13c =====

void FUN_0074d13c(ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char local_16 [2];
  undefined2 local_14;
  char local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar1 = (uint)param_1 & 0xff;
      if (uVar1 < 10) {
        lVar2 = 3;
        uVar4 = param_1 & 0xffffffff;
      }
      else {
        uVar1 = uVar1 * 0x29 >> 0xc;
        uVar4 = (ulong)uVar1;
        local_14 = *(undefined2 *)
                    (&DAT_004670a6 + ((ulong)((uint)param_1 + uVar1 * -100) & 0xff) * 2);
        lVar2 = 1;
      }
      if (((param_1 & 0xff) == 0) || ((uVar4 & 0xff) != 0)) {
        local_16[lVar2] = (&DAT_004670a7)[(uVar4 & 0x7f) * 2];
        lVar2 = lVar2 + -1;
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,1,1,0,local_16 + lVar2 + 1,3 - lVar2);
      return;
    }
    lVar2 = 0;
    do {
      uVar4 = param_1 & 0xf;
      uVar1 = (uint)param_1 >> 4 & 0xf;
      lVar3 = lVar2 + -1;
      param_1 = (ulong)uVar1;
      (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4];
      lVar2 = lVar3;
    } while (uVar1 != 0);
    lVar2 = -2;
  }
  else {
    lVar2 = 0;
    do {
      uVar4 = param_1 & 0xf;
      uVar1 = (uint)param_1 >> 4 & 0xf;
      lVar3 = lVar2 + -1;
      param_1 = (ulong)uVar1;
      local_16[lVar2] = "0123456789abcdef"[uVar4];
      lVar2 = lVar3;
    } while (uVar1 != 0);
    lVar2 = -7;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff2 + lVar3 + lVar2,-lVar3);
  return;
}


// ===== 0074d294  <core::num::niche_types::NonZeroU128Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU128Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU128Inner_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  FUN_0074d804(*param_1,param_1[1],param_2);
  return;
}


// ===== 0074d2a4  FUN_0074d2a4 =====

void FUN_0074d2a4(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_1d [3];
  char local_1a [2];
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [3];
  char local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar3 = (uint)param_1;
      if ((uVar3 & 0xffff) < 1000) {
        if ((uVar3 & 0xffff) < 10) {
          lVar5 = 5;
          uVar1 = uVar3;
        }
        else {
          uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
          lVar5 = 3;
          local_16 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
        }
      }
      else {
        uVar1 = (uVar3 >> 4 & 0xfff) / 0x271;
        uVar3 = uVar3 + uVar1 * -10000;
        uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
        local_18 = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar2 * 2);
        lVar5 = 1;
        local_16 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
      }
      if (((param_1 & 0xffff) == 0) || ((uVar1 & 0xffff) != 0)) {
        local_1a[lVar5] = (&DAT_004670a7)[(uVar1 & 0xf) << 1];
        lVar5 = lVar5 + -1;
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,1,1,0,local_1a + lVar5 + 1,5 - lVar5);
      return;
    }
    lVar5 = 0;
    do {
      uVar7 = param_1 & 0xf;
      uVar3 = (uint)param_1 >> 4 & 0xfff;
      lVar4 = lVar5 + -1;
      param_1 = (ulong)uVar3;
      (&local_11)[lVar5] = "0123456789ABCDEF"[uVar7];
      lVar5 = lVar4;
    } while (uVar3 != 0);
    puVar6 = auStack_14;
  }
  else {
    lVar5 = 0;
    do {
      uVar7 = param_1 & 0xf;
      uVar3 = (uint)param_1 >> 4 & 0xfff;
      lVar4 = lVar5 + -1;
      param_1 = (ulong)uVar3;
      local_1a[lVar5] = "0123456789abcdef"[uVar7];
      lVar5 = lVar4;
    } while (uVar3 != 0);
    puVar6 = auStack_1d;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,"0x",2,puVar6 + lVar4 + 4,-lVar4);
  return;
}


// ===== 0074d45c  <core::num::nonzero::NonZero<u32>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u32> as core::str::traits::FromStr>::from_str */

ulong __rustcall
<core::num::nonzero::NonZero<u32>as_core::str::traits::FromStr>::from_str
          (byte *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    uVar9 = 0;
    bVar4 = true;
    goto LAB_0074d5f4;
  }
  if (param_2 == 1) {
    bVar2 = *param_1;
    uVar9 = 0x101;
    bVar4 = true;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0074d5f4;
    uVar6 = (ulong)(bVar2 != 0x2b);
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar6 = param_2 - (ulong)(*param_1 == 0x2b);
    if (*param_1 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  if (8 < uVar6) {
    uVar8 = 0;
    uVar9 = 0x101;
    bVar4 = true;
    do {
      if (uVar6 == 0) goto LAB_0074d5f0;
      if (((ulong)uVar8 * 10 & 0xffffffff00000000) != 0) {
        uVar9 = 0x201;
        if (9 < *param_1 - 0x30) {
          uVar9 = 0x101;
        }
        bVar4 = true;
        goto LAB_0074d5f4;
      }
      uVar3 = *param_1 - 0x30;
      if (9 < uVar3) goto LAB_0074d5f4;
      uVar7 = (uint)((ulong)uVar8 * 10);
      uVar8 = uVar3 + uVar7;
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
    } while (!CARRY4(uVar3,uVar7));
    uVar9 = 0x201;
    bVar4 = true;
    goto LAB_0074d5f4;
  }
  if (uVar6 == 0) {
    uVar8 = 0;
LAB_0074d5f0:
    uVar9 = (ulong)uVar8 << 0x20;
    bVar4 = false;
  }
  else {
    uVar8 = *param_1 - 0x30;
    if (uVar8 < 10) {
      if (uVar6 == 1) goto LAB_0074d5f0;
      if (param_1[1] - 0x30 < 10) {
        uVar8 = (param_1[1] - 0x30) + uVar8 * 10;
        if (uVar6 == 2) goto LAB_0074d5f0;
        if (param_1[2] - 0x30 < 10) {
          uVar8 = (param_1[2] - 0x30) + uVar8 * 10;
          if (uVar6 == 3) goto LAB_0074d5f0;
          if (param_1[3] - 0x30 < 10) {
            uVar8 = (param_1[3] - 0x30) + uVar8 * 10;
            if (uVar6 == 4) goto LAB_0074d5f0;
            if (param_1[4] - 0x30 < 10) {
              uVar8 = (param_1[4] - 0x30) + uVar8 * 10;
              if (uVar6 == 5) goto LAB_0074d5f0;
              if (param_1[5] - 0x30 < 10) {
                uVar8 = (param_1[5] - 0x30) + uVar8 * 10;
                if (uVar6 == 6) goto LAB_0074d5f0;
                if (param_1[6] - 0x30 < 10) {
                  uVar8 = (param_1[6] - 0x30) + uVar8 * 10;
                  if (uVar6 == 7) goto LAB_0074d5f0;
                  if (param_1[7] - 0x30 < 10) {
                    uVar9 = (ulong)((param_1[7] - 0x30) + uVar8 * 10) << 0x20;
                    bVar4 = false;
                    goto LAB_0074d5f4;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar9 = 0x101;
    bVar4 = true;
  }
LAB_0074d5f4:
  bVar5 = uVar9 >> 0x20 == 0;
  uVar6 = 0x400;
  if (!bVar5) {
    uVar6 = 0;
  }
  uVar1 = uVar9 & 0x300;
  if (!bVar4) {
    uVar1 = uVar6;
  }
  return uVar1 | uVar9 & 0xffffffff00000000 | (ulong)(byte)(bVar5 | bVar4);
}


// ===== 0074d640  FUN_0074d640 =====

void FUN_0074d640(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char local_11;
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      <u32_as_core::fmt::Display>::fmt();
      return;
    }
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  else {
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      uVar4 = (ulong)uVar1;
      uVar1 = uVar1 >> 4;
      lVar3 = lVar2 + -1;
      (&local_11)[lVar2] = "0123456789abcdef"[uVar4 & 0xf];
      lVar2 = lVar3;
    } while (uVar1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&stack0xfffffffffffffff0 + lVar3,-lVar3);
  return;
}


// ===== 0074d704  FUN_0074d704 =====

void FUN_0074d704(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_44 [15];
  char local_35 [5];
  
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      lVar1 = FUN_0073be94(param_1,auStack_44,0x14);
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,1,1,0,auStack_44 + lVar1,0x14 - lVar1);
      return;
    }
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      lVar2 = lVar1 + -1;
      local_35[lVar1] = "0123456789ABCDEF"[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0);
  }
  else {
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      lVar2 = lVar1 + -1;
      local_35[lVar1] = "0123456789abcdef"[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,"0x",2,local_35 + lVar2 + 1,-lVar2)
  ;
  return;
}


// ===== 0074d804  FUN_0074d804 =====

void FUN_0074d804(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_57 [31];
  char local_38 [8];
  
  if ((*(uint *)(param_3 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_3 + 0x10) >> 0x1a & 1) == 0) {
      lVar1 = FUN_007366d0(param_1,param_2,auStack_57,0x27);
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_3,1,1,0,auStack_57 + lVar1,0x27 - lVar1);
      return;
    }
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x3c;
      param_2 = param_2 >> 4;
      lVar2 = lVar1 + -1;
      local_38[lVar1] = "0123456789ABCDEF"[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0 || param_2 != 0);
  }
  else {
    lVar1 = 0;
    do {
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x3c;
      param_2 = param_2 >> 4;
      lVar2 = lVar1 + -1;
      local_38[lVar1] = "0123456789abcdef"[uVar3];
      lVar1 = lVar2;
    } while (param_1 != 0 || param_2 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_3,1,"0x",2,local_38 + lVar2 + 1,-lVar2)
  ;
  return;
}


// ===== 0074d914  <core::alloc::AllocError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::alloc::AllocError as core::fmt::Display>::fmt */

void __rustcall
<core::alloc::AllocError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0074d92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"memory allocation failed",0x18);
  return;
}


// ===== 0074d930  <i128_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::Display>::fmt */

void __rustcall <i128_as_core::fmt::Display>::fmt(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_57 [39];
  
  uVar1 = param_1[1];
  uVar3 = (long)uVar1 >> 0x3f;
  lVar2 = FUN_007366d0((*param_1 ^ uVar3) - uVar3,
                       (uVar1 ^ uVar3) - (uVar3 + ((*param_1 ^ uVar3) < uVar3)),auStack_57,0x27);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,(uint)(uVar1 >> 0x3f) ^ 1,1,0,auStack_57 + lVar2,0x27 - lVar2);
  return;
}


// ===== 0074d9a8  <core::mem::alignment::Alignment_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::alignment::Alignment as core::fmt::Debug>::fmt */

void __rustcall
<core::mem::alignment::Alignment_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_34;
  undefined1 *local_30;
  code *pcStack_28;
  undefined4 *local_20;
  code *pcStack_18;
  
  local_30 = (undefined1 *)&local_40;
  local_40 = *param_1;
  uVar1 = (local_40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_40 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  pcStack_28 = FUN_00750c14;
  local_20 = &local_34;
  local_34 = (undefined4)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
  pcStack_18 = FUN_0074d640;
  core::fmt::write(*param_2,param_2[1],&DAT_0036cfbe,&local_30);
  return;
}


// ===== 0074da08  FUN_0074da08 =====

bool FUN_0074da08(ulong *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2 + param_3;
  if (0x15 >= uVar1 && !CARRY8(uVar2,param_3)) {
    memcpy((void *)((long)param_1 + uVar2 + 8),param_2,param_3);
    *param_1 = uVar1;
  }
  return 0x15 < uVar1 || CARRY8(uVar2,param_3);
}


// ===== 0074da58  FUN_0074da58 =====

bool FUN_0074da58(ulong *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2 + param_3;
  if (0x27 >= uVar1 && !CARRY8(uVar2,param_3)) {
    memcpy((void *)((long)param_1 + uVar2 + 8),param_2,param_3);
    *param_1 = uVar1;
  }
  return 0x27 < uVar1 || CARRY8(uVar2,param_3);
}


// ===== 0074daa8  FUN_0074daa8 =====

bool FUN_0074daa8(ulong *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2 + param_3;
  if (0x3a >= uVar1 && !CARRY8(uVar2,param_3)) {
    memcpy((void *)((long)param_1 + uVar2 + 8),param_2,param_3);
    *param_1 = uVar1;
  }
  return 0x3a < uVar1 || CARRY8(uVar2,param_3);
}


// ===== 0074daf8  FUN_0074daf8 =====

bool FUN_0074daf8(ulong *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2 + param_3;
  if (0xf >= uVar1 && !CARRY8(uVar2,param_3)) {
    memcpy((void *)((long)param_1 + uVar2 + 8),param_2,param_3);
    *param_1 = uVar1;
  }
  return 0xf < uVar1 || CARRY8(uVar2,param_3);
}


// ===== 0074db48  <core::num::float_parse::ParseFloatError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::float_parse::ParseFloatError as core::fmt::Display>::fmt */

void __rustcall
<core::num::float_parse::ParseFloatError_as_core::fmt::Display>::fmt
          (char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"invalid float literal",0x15);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"cannot parse float from empty string",0x24);
  return;
}


// ===== 0074db78  <core::num::error::TryFromIntError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::error::TryFromIntError as core::fmt::Display>::fmt */

void __rustcall
<core::num::error::TryFromIntError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"out of range integral type conversion attempted",0x2f);
  return;
}


// ===== 0074db8c  FUN_0074db8c =====

undefined8 FUN_0074db8c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0074d704(*param_1);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046c3e7,2), (uVar1 & 1) == 0)) {
    uVar2 = FUN_0074d704(param_1[1],param_2);
    return uVar2;
  }
  return 1;
}


// ===== 0074dbec  <core::str::iter::Chars_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::Chars as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::str::iter::Chars_as_core::fmt::Debug>::fmt(long *param_1,ulong *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  code *pcVar11;
  code *pcVar12;
  byte *pbVar13;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  char local_74 [4];
  int local_70 [3];
  byte local_64;
  byte local_63;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  pcVar12 = *(code **)(uVar8 + 0x18);
  uVar6 = (*pcVar12)(uVar1,"Chars(",6);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar7 = (*pcVar12)(uVar1,&DAT_00467170,1);
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  uVar6 = uVar7 & 0xffffffff;
  if (pbVar2 == pbVar3) goto LAB_0074ddf4;
  pbVar13 = pbVar2 + 1;
  uVar10 = (uint)*pbVar2;
  if ((char)*pbVar2 < '\0') {
    if (uVar10 < 0xe0) {
      uVar10 = pbVar2[1] & 0x3f | (uVar10 & 0x1f) << 6;
      pbVar13 = pbVar2 + 2;
    }
    else {
      uVar4 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
      if (uVar10 < 0xf0) {
        uVar10 = uVar4 | (uVar10 & 0x1f) << 0xc;
        pbVar13 = pbVar2 + 3;
        goto joined_r0x0074e024;
      }
      pbVar13 = pbVar2 + 4;
      uVar10 = pbVar2[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12;
    }
    if ((uVar7 & 1) == 0) goto LAB_0074e028;
LAB_0074dc6c:
    uVar6 = 1;
  }
  else {
joined_r0x0074e024:
    if ((uVar7 & 1) != 0) goto LAB_0074dc6c;
LAB_0074e028:
    if (-1 < *(char *)((long)param_2 + 0x12)) {
      pcVar11 = *(code **)(uVar8 + 0x20);
      uVar6 = (*pcVar11)(uVar1,0x27);
      if ((uVar6 & 1) == 0) {
        FUN_00735594(&local_90,uVar10,0x101);
        uVar6 = uStack_88 >> 0x28 & 0xff;
        if (uVar6 < 0x81) {
          uVar7 = uStack_88 >> 0x20 & 0xff;
          uVar6 = (*pcVar12)(uVar1,(long)&local_90 + uVar7,uVar6 - uVar7);
        }
        else {
          uVar6 = (*pcVar11)(uVar1,local_90 & 0xffffffff);
        }
        if ((uVar6 & 1) == 0) {
          uVar6 = (*pcVar11)(uVar1,0x27);
LAB_0074e160:
          uVar6 = uVar6 & 0xffffffff;
          goto LAB_0074dc70;
        }
      }
      goto LAB_0074dc6c;
    }
    uVar6 = 1;
    uVar7 = (*pcVar12)(uVar1,&DAT_004669e6,1);
    if ((uVar7 & 1) == 0) {
      local_80 = local_74;
      local_74[0] = '\x01';
      local_90 = uVar1;
      uStack_88 = uVar8;
      uVar6 = (*pcVar12)(uVar1,"    ",4);
      if ((uVar6 & 1) == 0) {
        pcVar11 = *(code **)(uVar8 + 0x20);
        local_74[0] = '\0';
        uVar6 = (*pcVar11)(uVar1,0x27);
        if ((uVar6 & 1) == 0) {
          FUN_00735594(local_70,uVar10,0x101);
          iVar5 = local_70[0];
          if ((ulong)local_63 < 0x81) {
            uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                              (&local_90,(long)local_70 + (ulong)local_64,
                               (ulong)local_63 - (ulong)local_64);
          }
          else {
            if ((local_74[0] == '\x01') && (uVar6 = (*pcVar12)(uVar1,"    ",4), (uVar6 & 1) != 0))
            goto LAB_0074dc6c;
            local_74[0] = iVar5 == 10;
            uVar6 = (*pcVar11)(uVar1,iVar5);
          }
          if (((uVar6 & 1) == 0) &&
             ((local_74[0] != '\x01' || (uVar6 = (*pcVar12)(uVar1,"    ",4), (uVar6 & 1) == 0)))) {
            local_74[0] = '\0';
            uVar6 = (*pcVar11)(uVar1,0x27);
            if ((uVar6 & 1) == 0) {
              uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                                (&local_90,&DAT_004669e1,2);
              goto LAB_0074e160;
            }
          }
        }
      }
      goto LAB_0074dc6c;
    }
  }
LAB_0074dc70:
  if (pbVar13 != pbVar3) {
    if (((uint)param_2[2] >> 0x17 & 1) == 0) {
      do {
        while( true ) {
          uVar10 = (uint)*pbVar13;
          pbVar2 = pbVar13 + 1;
          if ((char)*pbVar13 < '\0') break;
joined_r0x0074dca4:
          pbVar13 = pbVar2;
          if ((uVar6 & 1) == 0) goto LAB_0074dd10;
LAB_0074dd38:
          uVar6 = 1;
          if (pbVar13 == pbVar3) goto LAB_0074ddf4;
        }
        if (uVar10 < 0xe0) {
          uVar10 = pbVar13[1] & 0x3f | (uVar10 & 0x1f) << 6;
          pbVar13 = pbVar13 + 2;
        }
        else {
          uVar4 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (0xef < uVar10) {
            uVar10 = pbVar13[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12;
            pbVar2 = pbVar13 + 4;
            goto joined_r0x0074dca4;
          }
          uVar10 = uVar4 | (uVar10 & 0x1f) << 0xc;
          pbVar13 = pbVar13 + 3;
        }
        if ((uVar6 & 1) != 0) goto LAB_0074dd38;
LAB_0074dd10:
        uVar6 = (*pcVar12)(uVar1,&DAT_004669da,2);
        if ((uVar6 & 1) != 0) goto LAB_0074dd38;
        pcVar11 = *(code **)(uVar8 + 0x20);
        uVar6 = (*pcVar11)(uVar1,0x27);
        if ((uVar6 & 1) != 0) goto LAB_0074dd38;
        FUN_00735594(&local_90,uVar10,0x101);
        uVar6 = uStack_88 >> 0x28 & 0xff;
        if (uVar6 < 0x81) {
          uVar7 = uStack_88 >> 0x20 & 0xff;
          uVar6 = (*pcVar12)(uVar1,(long)&local_90 + uVar7,uVar6 - uVar7);
          if ((uVar6 & 1) == 0) goto LAB_0074dd90;
          goto LAB_0074dd38;
        }
        uVar6 = (*pcVar11)(uVar1,local_90 & 0xffffffff);
        if ((uVar6 & 1) != 0) goto LAB_0074dd38;
LAB_0074dd90:
        uVar6 = (*pcVar11)(uVar1,0x27);
        uVar6 = uVar6 & 0xffffffff;
      } while (pbVar13 != pbVar3);
    }
    else {
      do {
        uVar10 = (uint)*pbVar13;
        pbVar2 = pbVar13 + 1;
        if ((char)*pbVar13 < '\0') {
          if (uVar10 < 0xe0) {
            uVar10 = pbVar13[1] & 0x3f | (uVar10 & 0x1f) << 6;
            pbVar2 = pbVar13 + 2;
          }
          else {
            uVar4 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
            if (uVar10 < 0xf0) {
              uVar10 = uVar4 | (uVar10 & 0x1f) << 0xc;
              pbVar2 = pbVar13 + 3;
            }
            else {
              uVar10 = pbVar13[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12;
              pbVar2 = pbVar13 + 4;
            }
          }
        }
        pbVar13 = pbVar2;
        uVar7 = uVar6 & 1;
        uVar6 = 1;
        if (uVar7 == 0) {
          uVar6 = 1;
          local_74[0] = '\x01';
          local_90 = uVar1;
          uStack_88 = uVar8;
          local_80 = local_74;
          uVar7 = (*pcVar12)(uVar1,"    ",4);
          if ((uVar7 & 1) == 0) {
            pcVar11 = *(code **)(uVar8 + 0x20);
            local_74[0] = '\0';
            uVar7 = (*pcVar11)(uVar1,0x27);
            if ((uVar7 & 1) == 0) {
              FUN_00735594(local_70,uVar10,0x101);
              iVar5 = local_70[0];
              if ((ulong)local_63 < 0x81) {
                uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                                  (&local_90,(long)local_70 + (ulong)local_64,
                                   (ulong)local_63 - (ulong)local_64);
joined_r0x0074dfb4:
                if (((uVar6 & 1) == 0) &&
                   ((local_74[0] != '\x01' || (uVar6 = (*pcVar12)(uVar1,"    ",4), (uVar6 & 1) == 0)
                    ))) {
                  local_74[0] = '\0';
                  uVar6 = (*pcVar11)(uVar1,0x27);
                  if ((uVar6 & 1) == 0) {
                    uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                                      (&local_90,&DAT_004669e1,2);
                    uVar6 = uVar6 & 0xffffffff;
                    goto LAB_0074de68;
                  }
                }
              }
              else if ((local_74[0] != '\x01') ||
                      (uVar6 = (*pcVar12)(uVar1,"    ",4), (uVar6 & 1) == 0)) {
                local_74[0] = iVar5 == 10;
                uVar6 = (*pcVar11)(uVar1,iVar5);
                goto joined_r0x0074dfb4;
              }
              uVar6 = 1;
            }
          }
        }
LAB_0074de68:
      } while (pbVar13 != pbVar3);
    }
  }
LAB_0074ddf4:
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar8 = (*pcVar12)(uVar1,&DAT_00466a83,1);
  if ((uVar8 & 1) == 0) {
    uVar9 = (*pcVar12)(uVar1,&DAT_00466a71,1);
    return uVar9;
  }
  return 1;
}


// ===== 0074e1d0  <core::str::error::Utf8Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::error::Utf8Error as core::fmt::Display>::fmt */

void __rustcall
<core::str::error::Utf8Error_as_core::fmt::Display>::fmt(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 local_34 [4];
  undefined1 *local_30;
  undefined *local_28;
  undefined1 *puStack_20;
  undefined *local_18;
  
  if (param_1[8] == '\x01') {
    local_34[0] = param_1[9];
    local_30 = local_34;
    local_28 = PTR_fmt_0099f4e8;
    local_18 = PTR_fmt_0099f540;
    puStack_20 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_0036ab6d,&local_30);
    return;
  }
  local_28 = PTR_fmt_0099f540;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_00368ac8,&local_30);
  return;
}


// ===== 0074e264  <core::panic::panic_info::PanicInfo_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::panic::panic_info::PanicInfo as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::panic::panic_info::PanicInfo_as_core::fmt::Display>::fmt
          (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  code *pcStack_58;
  undefined8 *local_50;
  undefined *local_48;
  long lStack_40;
  undefined *local_38;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar2 = (*pcVar5)(uVar3,"panicked at ",0xc);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  puVar4 = (undefined8 *)param_1[1];
  pcStack_58 = FUN_00746ec0;
  local_50 = puVar4 + 2;
  local_70 = *puVar4;
  uStack_68 = puVar4[1];
  lStack_40 = (long)puVar4 + 0x14;
  local_48 = PTR_fmt_0099f518;
  local_38 = PTR_fmt_0099f518;
  local_60 = (undefined1 *)&local_70;
  uVar2 = core::fmt::write(uVar3,lVar1,&DAT_0036fcf1,&local_60);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = (*pcVar5)(uVar3,":\n",2);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar3 = core::fmt::write(uVar3,lVar1,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]);
  return uVar3;
}


// ===== 0074e37c  <i8_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::Display>::fmt */

void __rustcall <i8_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_14 [2];
  undefined2 local_12;
  
  cVar3 = *param_1;
  uVar4 = (uint)cVar3;
  uVar1 = -(int)cVar3;
  if (-1 < cVar3) {
    uVar1 = uVar4;
  }
  uVar6 = (ulong)uVar1;
  if (uVar1 < 10) {
    lVar5 = 3;
  }
  else {
    uVar6 = (ulong)(99 < (uVar1 & 0xff));
    uVar2 = uVar1 * 2;
    if (99 < (uVar1 & 0xff)) {
      uVar2 = uVar1 * 2 + 0x38;
    }
    local_12 = *(undefined2 *)(&DAT_004670a6 + ((ulong)uVar2 & 0xfe));
    lVar5 = 1;
  }
  if ((uVar4 == 0) || ((uVar6 & 0xff) != 0)) {
    auStack_14[lVar5] = (&DAT_004670a7)[(uVar6 & 0x7f) * 2];
    lVar5 = lVar5 + -1;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,uVar4 >> 7 & 1 ^ 1,1,0,auStack_14 + lVar5 + 1,3 - lVar5);
  return;
}


// ===== 0074e43c  <core::any::TypeId_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::any::TypeId as core::fmt::Debug>::fmt */

void __rustcall
<core::any::TypeId_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = *param_1;
  local_28 = param_1[1];
  puStack_18 = PTR_fmt_0099f6c8;
  core::fmt::write(*param_2,param_2[1],&DAT_0046c8dc,&local_20);
  return;
}


// ===== 0074e484  <u8_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::pat::RangePattern>::sub_one */

int __rustcall <u8_as_core::pat::RangePattern>::sub_one(uint param_1,undefined8 param_2)

{
  if ((param_1 & 0xff) != 0) {
    return param_1 - 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59,param_2);
}


// ===== 0074e4b0  <core::time::Duration_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::time::Duration as core::fmt::Debug>::fmt */

void __rustcall <core::time::Duration_as_core::fmt::Debug>::fmt(long *param_1,long param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = (ulong)uVar2;
  uVar3 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  pcVar1 = "+";
  if ((*(uint *)(param_2 + 0x10) & 0x200000) == 0) {
    pcVar1 = (char *)0x1;
  }
  if (*param_1 != 0) {
    FUN_00744044(param_2,*param_1,uVar4,100000000,pcVar1,uVar3,"s",1);
    return;
  }
  if (999999 < uVar2) {
    FUN_00744044(param_2,uVar4 / 1000000,uVar2 % 1000000,100000,pcVar1,uVar3,"ms",2);
    return;
  }
  if (999 < uVar2) {
    FUN_00744044(param_2,(ulong)uVar2 / 1000,uVar2 % 1000,100,pcVar1,uVar3,&DAT_0046c8f0,3);
    return;
  }
  FUN_00744044(param_2,uVar4,0,1,pcVar1,uVar3,&DAT_0046c8ee,2);
  return;
}


// ===== 0074e594  <core::wtf8::Wtf8CodePoints_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::wtf8::Wtf8CodePoints as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::wtf8::Wtf8CodePoints_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar6 = *param_2;
  lVar2 = param_2[1];
  pcVar7 = *(code **)(lVar2 + 0x18);
  uVar5 = (*pcVar7)(uVar6,"Wtf8CodePoints",0xe);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  lVar1 = *param_1;
  lVar3 = param_1[1];
  if (*(char *)((long)param_2 + 0x12) < '\0') {
    uVar5 = (*pcVar7)(uVar6,&DAT_004669e4,2);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    local_68 = local_5c;
    uStack_48 = param_2[2];
    local_5c[0] = 1;
    local_58 = &local_78;
    local_50 = &DAT_0097b768;
    local_78 = uVar6;
    lStack_70 = lVar2;
    iVar4 = <core::wtf8::Wtf8_as_core::fmt::Debug>::fmt(lVar1,lVar3 - lVar1,&local_58);
    if (iVar4 != 0) {
      return 1;
    }
    uVar5 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_78,&DAT_004669e1,2);
  }
  else {
    uVar5 = (*pcVar7)(uVar6,&DAT_004669e3,1);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar5 = <core::wtf8::Wtf8_as_core::fmt::Debug>::fmt(lVar1,lVar3 - lVar1,param_2);
  }
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  uVar6 = (*pcVar7)(uVar6,&DAT_00466a71,1);
  return uVar6;
}


// ===== 0074e6d8  <u8_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::Binary>::fmt */

void __rustcall <u8_as_core::fmt::Binary>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_0046c5b6)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074e74c  <f16_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::fmt::Debug>::fmt */

void __rustcall <f16_as_core::fmt::Debug>::fmt(float2 *param_1,long param_2)

{
  uint uVar1;
  float2 fVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  fVar2 = *param_1;
  if ((uVar1 >> 0x1c & 1) != 0) {
    FUN_00732364(param_2,uVar1 >> 0x15 & 1,*(undefined2 *)(param_2 + 0x16));
    return;
  }
  if ((ABS(fVar2) != FLOAT_UNKNOWN) && (0.000100016594 <= (float)ABS(fVar2) || (float)fVar2 == 0.0))
  {
    FUN_00732d24(param_2,uVar1 >> 0x15 & 1,1);
    return;
  }
  FUN_00733e04(param_2,uVar1 >> 0x15 & 1,0);
  return;
}


// ===== 0074e7d0  <core::net::socket_addr::SocketAddr_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddr as core::str::traits::FromStr>::from_str */

void __rustcall <core::net::socket_addr::SocketAddr_as_core::str::traits::FromStr>::from_str(void)

{
  (*(code *)PTR_parse_ascii_009a1f08)();
  return;
}


// ===== 0074e7d4  <core::fmt::Formatter_as_core::fmt::Write>::write_char =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Formatter as core::fmt::Write>::write_char */

void __rustcall <core::fmt::Formatter_as_core::fmt::Write>::write_char(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074e7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 0074e7e0  <u16_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::pat::RangePattern>::sub_one */

int __rustcall <u16_as_core::pat::RangePattern>::sub_one(uint param_1,undefined8 param_2)

{
  if ((param_1 & 0xffff) != 0) {
    return param_1 - 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59,param_2);
}


// ===== 0074e80c  <core::time::TryFromFloatSecsError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::time::TryFromFloatSecsError as core::fmt::Display>::fmt */

void __rustcall
<core::time::TryFromFloatSecsError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::pad
              (param_2,
               "cannot convert float seconds to Duration: value is either too big or NaNinvalid IP address syntaxinvalid IPv4 address syntaxinvalid IPv6 address syntaxinvalid socket address syntaxinvalid IPv4 socket address syntaxinvalid IPv6 socket address syntax"
               ,0x48);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"cannot convert float seconds to Duration: value is negative",0x3b);
  return;
}


// ===== 0074e83c  <i8_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::Binary>::fmt */

void __rustcall <i8_as_core::fmt::Binary>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_0046c5b6)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074e8b0  <f16_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::fmt::Display>::fmt */

void __rustcall <f16_as_core::fmt::Display>::fmt(undefined2 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00732d24(param_2,uVar1,0);
    return;
  }
  FUN_00732364(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16));
  return;
}


// ===== 0074e8dc  <core::net::parser::AddrParseError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::AddrParseError as core::fmt::Display>::fmt */

void __rustcall
<core::net::parser::AddrParseError_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,&DAT_0046cd68 + *(int *)(&DAT_0046cd68 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_0046cd38 + (ulong)*param_1 * 8));
  return;
}


// ===== 0074e904  <core::fmt::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Error as core::fmt::Display>::fmt */

void __rustcall <core::fmt::Error_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"an error occurred when formatting an argument",0x2d);
  return;
}


// ===== 0074e918  <u32_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::pat::RangePattern>::sub_one */

int __rustcall <u32_as_core::pat::RangePattern>::sub_one(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    return param_1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59,param_2);
}


// ===== 0074e940  FUN_0074e940 =====

void FUN_0074e940(undefined4 *param_1,undefined8 *param_2)

{
  if (0x80 < (ulong)*(byte *)((long)param_1 + 0xd)) {
                    /* WARNING: Could not recover jumptable at 0x0074e95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x20))(*param_2,*param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074e974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,(long)param_1 + (ulong)*(byte *)(param_1 + 3),
             (ulong)*(byte *)((long)param_1 + 0xd) - (ulong)*(byte *)(param_1 + 3));
  return;
}


// ===== 0074e978  <u8_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::Octal>::fmt */

void __rustcall <u8_as_core::fmt::Octal>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_00374588)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074e9ec  <f16_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::fmt::LowerExp>::fmt */

void __rustcall <f16_as_core::fmt::LowerExp>::fmt(undefined2 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00733e04(param_2,uVar1,0);
    return;
  }
  FUN_007334b0(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),0);
  return;
}


// ===== 0074ea1c  <u64_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as core::pat::RangePattern>::sub_one */

long __rustcall <u64_as_core::pat::RangePattern>::sub_one(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    return param_1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59,param_2);
}


// ===== 0074ea44  <core::wtf8::EncodeWide_as_core::fmt::Debug>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::wtf8::EncodeWide as core::fmt::Debug>::fmt */

undefined8 __rustcall <core::wtf8::EncodeWide_as_core::fmt::Debug>::fmt(long *param_1,long *param_2)

{
  uint **ppuVar1;
  undefined *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_94 [4];
  uint **local_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined1 local_78 [4];
  uint local_74;
  uint *local_70;
  undefined *local_68;
  
  ppuVar1 = (uint **)*param_2;
  puVar2 = (undefined *)param_2[1];
  pcVar13 = *(code **)(puVar2 + 0x18);
  uVar6 = (*pcVar13)(ppuVar1,"EncodeWide(",0xb);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar6 = (*pcVar13)(ppuVar1,&DAT_00467170,1);
  pbVar12 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  pbVar11 = pbVar12;
  uVar14 = (uint)*(ushort *)(param_1 + 2);
  if (*(ushort *)(param_1 + 2) == 0) {
    if (pbVar12 == pbVar3) {
LAB_0074ef0c:
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      uVar6 = (*pcVar13)(ppuVar1,&DAT_00466a83,1);
      if ((uVar6 & 1) == 0) {
        uVar8 = (*pcVar13)(ppuVar1,&DAT_00466a71,1);
        return uVar8;
      }
      return 1;
    }
    pbVar11 = pbVar12 + 1;
    uVar14 = (uint)*pbVar12;
    if (-1 < (char)*pbVar12) goto LAB_0074eab0;
    if (uVar14 < 0xe0) {
      uVar14 = pbVar12[1] & 0x3f | (uVar14 & 0x1f) << 6;
      pbVar11 = pbVar12 + 2;
      uVar15 = 0;
    }
    else {
      uVar15 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
      if (uVar14 < 0xf0) {
        uVar15 = uVar15 | (uVar14 & 0x1f) << 0xc;
        pbVar11 = pbVar12 + 3;
      }
      else {
        pbVar11 = pbVar12 + 4;
        uVar15 = pbVar12[3] & 0x3f | uVar15 << 6 | (uVar14 & 7) << 0x12;
      }
      uVar14 = uVar15;
      if (uVar15 < 0x10000) goto LAB_0074eab0;
      uVar14 = uVar15 + 0xff0000 >> 10 | 0xd800;
      uVar15 = uVar15 & 0x3ff | 0xdc00;
    }
  }
  else {
LAB_0074eab0:
    uVar15 = 0;
  }
  uVar4 = *(uint *)(param_2 + 2);
  local_94._0_2_ = (undefined2)uVar14;
  if ((uVar6 & 1) == 0) {
    if ((uVar4 >> 0x17 & 1) == 0) {
      if ((uVar14 ^ 0xffefd800) < 0xffef0800) {
        local_90 = (uint **)local_94;
        puVar9 = &DAT_0046c3e9;
        local_88 = PTR_fmt_0099f538;
      }
      else {
        local_70 = (uint *)CONCAT44(local_70._4_4_,uVar14);
        local_90 = &local_70;
        puVar9 = &DAT_00368e80;
        local_88 = PTR_fmt_0099f658;
      }
      uVar6 = core::fmt::write(ppuVar1,puVar2,puVar9,&local_90);
    }
    else {
      uVar6 = 1;
      uVar7 = (*pcVar13)(ppuVar1,&DAT_004669e6,1);
      if ((uVar7 & 1) != 0) goto joined_r0x0074eda0;
      local_80 = local_78;
      local_78[0] = 1;
      if ((uVar14 ^ 0xffefd800) < 0xffef0800) {
        local_70 = (uint *)local_94;
        local_68 = PTR_fmt_0099f538;
        local_90 = ppuVar1;
        local_88 = puVar2;
        uVar6 = core::fmt::write(&local_90,&DAT_0097b768,&DAT_0046c3e9,&local_70);
      }
      else {
        local_70 = &local_74;
        local_68 = PTR_fmt_0099f658;
        local_90 = ppuVar1;
        local_88 = puVar2;
        local_74 = uVar14;
        uVar6 = core::fmt::write(&local_90,&DAT_0097b768,&DAT_00368e80,&local_70);
      }
      if ((uVar6 & 1) != 0) goto LAB_0074eac8;
      uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                        (&local_90,&DAT_004669e1,2);
    }
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
LAB_0074eac8:
    uVar6 = 1;
  }
joined_r0x0074eda0:
  if ((uVar4 >> 0x17 & 1) == 0) {
LAB_0074edec:
    pbVar12 = pbVar11;
    if (uVar15 == 0) {
      if (pbVar11 == pbVar3) goto LAB_0074ef0c;
      pbVar12 = pbVar11 + 1;
      uVar15 = (uint)*pbVar11;
      if (-1 < (char)*pbVar11) goto LAB_0074ee14;
      if (uVar15 < 0xe0) {
        local_94._0_2_ = (ushort)(pbVar11[1] & 0x3f) | (ushort)((uVar15 & 0x1f) << 6);
        pbVar12 = pbVar11 + 2;
        uVar15 = 0;
      }
      else {
        uVar14 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
        if (uVar15 < 0xf0) {
          uVar15 = uVar14 | (uVar15 & 0x1f) << 0xc;
          pbVar12 = pbVar11 + 3;
        }
        else {
          pbVar12 = pbVar11 + 4;
          uVar15 = pbVar11[3] & 0x3f | uVar14 << 6 | (uVar15 & 7) << 0x12;
        }
        if (uVar15 < 0x10000) goto LAB_0074ee14;
        local_94._0_2_ = (ushort)(uVar15 + 0xff0000 >> 10) | 0xd800;
        uVar15 = uVar15 & 0x3ff | 0xdc00;
      }
    }
    else {
LAB_0074ee14:
      local_94._0_2_ = (undefined2)uVar15;
      uVar15 = 0;
    }
    uVar7 = uVar6 & 1;
    uVar6 = 1;
    pbVar11 = pbVar12;
    if (uVar7 == 0) {
      uVar7 = (*pcVar13)(ppuVar1,&DAT_004669da,2);
      uVar6 = 1;
      if ((uVar7 & 1) == 0) {
        if (((ushort)local_94._0_2_ ^ 0xffefd800) < 0xffef0800) {
          local_90 = (uint **)local_94;
          puVar9 = &DAT_0046c3e9;
          local_88 = PTR_fmt_0099f538;
        }
        else {
          local_70 = (uint *)CONCAT44(local_70._4_4_,(uint)(ushort)local_94._0_2_);
          local_90 = &local_70;
          puVar9 = &DAT_00368e80;
          local_88 = PTR_fmt_0099f658;
        }
        uVar6 = core::fmt::write(ppuVar1,puVar2,puVar9,&local_90);
        uVar6 = uVar6 & 0xffffffff;
      }
    }
    goto LAB_0074edec;
  }
LAB_0074eb00:
  do {
    if (uVar15 == 0) {
      if (pbVar11 == pbVar3) goto LAB_0074ef0c;
      pbVar12 = pbVar11 + 1;
      bVar5 = *pbVar11;
      uVar15 = (uint)bVar5;
      if (-1 < (char)bVar5) {
        local_94._0_2_ = ZEXT12(bVar5);
        goto joined_r0x0074eb1c;
      }
      if (uVar15 < 0xe0) {
        uVar15 = pbVar11[1] & 0x3f | (uVar15 & 0x1f) << 6;
        local_94._0_2_ = (undefined2)uVar15;
        pbVar12 = pbVar11 + 2;
        goto joined_r0x0074eb1c;
      }
      uVar14 = (pbVar11[1] & 0x3f) << 6;
      uVar10 = pbVar11[2] & 0x3f | uVar14;
      if (uVar15 < 0xf0) {
        uVar14 = (uVar15 & 0x1f) << 0xc;
        uVar10 = uVar10 | uVar14;
        pbVar11 = pbVar11 + 3;
        if (uVar14 >> 0x10 == 0) goto LAB_0074ec00;
LAB_0074eba0:
        uVar14 = uVar10 + 0xff0000 >> 10 | 0xd800;
        local_94._0_2_ = (undefined2)uVar14;
        uVar4 = uVar10 & 0x3ff | 0xdc00;
      }
      else {
        pbVar12 = pbVar11 + 3;
        pbVar11 = pbVar11 + 4;
        uVar10 = *pbVar12 & 0x3f | uVar10 << 6 | (uVar15 & 7) << 0x12;
        if ((uVar14 & 0x3fffc00) != 0 || (bVar5 & 7) != 0) goto LAB_0074eba0;
LAB_0074ec00:
        local_94._0_2_ = (undefined2)uVar10;
        uVar4 = 0;
        uVar14 = uVar10;
      }
    }
    else {
      local_94._0_2_ = (undefined2)uVar15;
      pbVar12 = pbVar11;
joined_r0x0074eb1c:
      pbVar11 = pbVar12;
      uVar4 = 0;
      uVar14 = uVar15;
    }
    uVar15 = uVar4;
    uVar7 = uVar6 & 1;
    uVar6 = 1;
    if (uVar7 == 0) {
      local_78[0] = 1;
      local_80 = local_78;
      if ((uVar14 ^ 0xffefd800) < 0xffef0800) {
        local_70 = (uint *)local_94;
        local_68 = PTR_fmt_0099f538;
        local_90 = ppuVar1;
        local_88 = puVar2;
        uVar6 = core::fmt::write(&local_90,&DAT_0097b768,&DAT_0046c3e9,&local_70);
        if ((uVar6 & 1) != 0) {
          uVar6 = 1;
          goto LAB_0074eb00;
        }
      }
      else {
        local_70 = &local_74;
        local_68 = PTR_fmt_0099f658;
        local_90 = ppuVar1;
        local_88 = puVar2;
        local_74 = uVar14;
        uVar6 = core::fmt::write(&local_90,&DAT_0097b768,&DAT_00368e80,&local_70);
        if ((uVar6 & 1) != 0) {
          uVar6 = 1;
          goto LAB_0074eb00;
        }
      }
      uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                        (&local_90,&DAT_004669e1,2);
      uVar6 = uVar6 & 0xffffffff;
    }
  } while( true );
}


// ===== 0074f038  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::CustomOwner as core::ops::drop::Drop>::drop */

void __rustcall <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074f040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 0074f044  <i8_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::Octal>::fmt */

void __rustcall <i8_as_core::fmt::Octal>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_00374588)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074f0b8  <f16_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::fmt::UpperExp>::fmt */

void __rustcall <f16_as_core::fmt::UpperExp>::fmt(undefined2 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00733e04(param_2,uVar1,1);
    return;
  }
  FUN_007334b0(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),1);
  return;
}


// ===== 0074f0e8  <core::num::niche_types::Nanoseconds_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::Nanoseconds as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::Nanoseconds_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(char *)((long)&local_14 + lVar4 + 1) = "0123456789abcdef"[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
LAB_0074f1f4:
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_2,1,"0x",2,(long)&local_12 + lVar5,-lVar5);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) != 0) {
    lVar4 = 0;
    do {
      uVar9 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      lVar5 = lVar4 + -1;
      *(char *)((long)&local_14 + lVar4 + 1) = "0123456789ABCDEF"[uVar9];
      lVar4 = lVar5;
    } while ((int)uVar3 != 0);
    goto LAB_0074f1f4;
  }
  if (uVar1 < 1000) {
    lVar4 = 10;
    uVar8 = uVar1;
    uVar6 = uVar1;
    if (uVar1 < 10) goto LAB_0074f268;
  }
  else {
    lVar5 = 0;
    uVar3 = (ulong)uVar1;
    do {
      uVar9 = uVar3;
      lVar4 = lVar5;
      uVar6 = (uint)(uVar9 / 10000);
      uVar7 = (uint)(uVar9 / 10000);
      uVar2 = (uint)uVar9 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)&local_14 + lVar4) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar8 * 2);
      *(undefined2 *)((long)&local_12 + lVar4) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar5 = lVar4 + -4;
      uVar3 = uVar9 / 10000;
    } while (9999999 < (uint)uVar9);
    lVar4 = lVar4 + 6;
    uVar8 = (uint)(uVar9 / 10000);
    if (uVar7 < 9 || (int)(uVar9 / 10000) == 9) goto LAB_0074f268;
  }
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar4) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_0074f268:
  if ((uVar1 == 0) || (lVar5 = lVar4, uVar6 != 0)) {
    lVar5 = lVar4 + -1;
    *(undefined *)((long)&uStack_1c + lVar4 + 1) = (&DAT_004670a7)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar5,10 - lVar5);
  return;
}


// ===== 0074f2b8  <usize_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::fmt::Display>::fmt */

void __rustcall <usize_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_44 [20];
  
  lVar1 = FUN_0073be94(*param_1,auStack_44,0x14);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_44 + lVar1,0x14 - lVar1);
  return;
}


// ===== 0074f318  <u128_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::pat::RangePattern>::sub_one */

undefined1  [16] __rustcall <u128_as_core::pat::RangePattern>::sub_one(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if (param_1 != 0 || param_2 != 0) {
    auVar1._8_8_ = param_2 + -1 + (ulong)(param_1 != 0);
    auVar1._0_8_ = param_1 + -1;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59);
}


// ===== 0074f348  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::advance_by =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::advance_by */

long __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::advance_by
          (long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1 + param_2;
  lVar2 = param_1[1];
  if (param_2 <= (ulong)(param_1[1] - *param_1)) {
    lVar2 = lVar1;
  }
  *param_1 = lVar2;
  return lVar1 - lVar2;
}


// ===== 0074f36c  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::__iterator_get_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::__iterator_get_unchecked
    */

undefined4 __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::__iterator_get_unchecked
          (long *param_1,long param_2)

{
  return *(undefined4 *)((long)param_1 + param_2 * 4 + *param_1 * 4 + 0x10);
}


// ===== 0074f380  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::last =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::last */

undefined4 __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::last(long *param_1)

{
  long lStack_10;
  long lStack_8;
  
  lStack_8 = param_1[3];
  lStack_10 = param_1[2];
  if (param_1[1] == *param_1) {
    return 0xffffffff;
  }
  return *(undefined4 *)((long)&lStack_10 + (param_1[1] + -1) * 4);
}


// ===== 0074f3bc  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::next */

undefined4 __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::next(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] == lVar1) {
    return 0xffffffff;
  }
  *param_1 = lVar1 + 1;
  return *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x10);
}


// ===== 0074f3e8  <core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::count =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::count */

long __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::iterator::Iterator>::count(long *param_1)

{
  return param_1[1] - *param_1;
}


// ===== 0074f3f4  <u8_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::LowerHex>::fmt */

void __rustcall <u8_as_core::fmt::LowerHex>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789abcdef"[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074f468  <i64_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::Display>::fmt */

void __rustcall <i64_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_44 [20];
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  lVar1 = FUN_0073be94(lVar1,auStack_44,0x14);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,(uint)((ulong)lVar2 >> 0x3f) ^ 1,1,0,auStack_44 + lVar1,0x14 - lVar1);
  return;
}


// ===== 0074f4d4  <core::char::CaseMappingIter_as_core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as
   core::iter::traits::double_ended::DoubleEndedIterator>::advance_back_by */

long __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::double_ended::DoubleEndedIterator>::
advance_back_by(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  lVar1 = *param_1;
  if (param_2 <= (ulong)(lVar2 - *param_1)) {
    lVar1 = lVar2 - param_2;
  }
  param_1[1] = lVar1;
  return (param_2 - lVar2) + lVar1;
}


// ===== 0074f4fc  <core::char::CaseMappingIter_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::CaseMappingIter as core::iter::traits::double_ended::DoubleEndedIterator>::next_back
    */

undefined4 __rustcall
<core::char::CaseMappingIter_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (long *param_1)

{
  long lVar1;
  
  if (param_1[1] == *param_1) {
    return 0xffffffff;
  }
  lVar1 = param_1[1] + -1;
  param_1[1] = lVar1;
  return *(undefined4 *)((long)param_1 + lVar1 * 4 + 0x10);
}


// ===== 0074f524  <i8_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::LowerHex>::fmt */

void __rustcall <i8_as_core::fmt::LowerHex>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789abcdef"[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074f598  <core::task::wake::LocalWaker_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::task::wake::LocalWaker as core::fmt::Debug>::fmt */

byte __rustcall
<core::task::wake::LocalWaker_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 *local_30;
  byte local_28;
  byte local_27;
  
  local_38 = *param_1;
  local_28 = (**(code **)(param_2[1] + 0x18))(*param_2,"LocalWaker",10);
  local_27 = 0;
  local_30 = param_2;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_30,&DAT_003791f0,4,param_1 + 1,&DAT_0097c308);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_30,"vtablePhantomInvariantLifetime",6,&local_38,&DAT_0097c328);
  bVar1 = local_27 | local_28;
  if ((local_27 == 1) && ((local_28 & 1) == 0)) {
    if (*(char *)((long)local_30 + 0x12) < '\0') {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_30;
      lVar5 = local_30[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0074f680  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as core::fmt::Display>::fmt */

void __rustcall <bool_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  if ((*param_1 & 1) != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00377e48,4);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"false",5);
  return;
}


// ===== 0074f6ac  <core::io::error::ErrorKind_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::ErrorKind as core::fmt::Display>::fmt */

void __rustcall
<core::io::error::ErrorKind_as_core::fmt::Display>::fmt(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0074f6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,(&PTR_s_entity_not_found_0097c418)[*param_1],
             *(undefined8 *)(&DAT_0046cd80 + (ulong)*param_1 * 8));
  return;
}


// ===== 0074f6d4  <u8_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::UpperHex>::fmt */

void __rustcall <u8_as_core::fmt::UpperHex>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074f748  <str_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as core::fmt::Debug>::fmt */

undefined8 __rustcall
<str_as_core::fmt::Debug>::fmt(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  code *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  code *pcVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined4 local_70 [3];
  byte local_64;
  byte local_63;
  
  uVar7 = *param_3;
  lVar2 = param_3[1];
  pcVar13 = *(code **)(lVar2 + 0x20);
  uVar5 = (*pcVar13)(uVar7,0x22);
  if ((uVar5 & 1) == 0) {
    if (param_2 == (byte *)0x0) {
      pbVar15 = (byte *)0x0;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar15 = (byte *)0x0;
      pbVar8 = param_2;
      pbVar1 = (byte *)0x0;
      pbVar14 = param_1;
      do {
        pbVar12 = pbVar1;
        pbVar19 = (byte *)0x0;
        while( true ) {
          bVar3 = pbVar14[(long)pbVar19];
          if (((bVar3 - 0x7f < 0xffffffa1) || (bVar3 == 0x22)) || (bVar3 == 0x5c)) break;
          pbVar19 = pbVar19 + 1;
          if (pbVar8 == pbVar19) {
            pbVar8 = pbVar8 + (long)pbVar12;
            if (pbVar15 <= pbVar8) goto LAB_0074f9d0;
            goto LAB_0074fa04;
          }
        }
        pbVar10 = pbVar14 + (long)pbVar19 + 1;
        bVar3 = pbVar14[(long)pbVar19];
        uVar16 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          bVar3 = *pbVar10;
          pbVar10 = pbVar14 + (long)(pbVar19 + 2);
          if (uVar16 < 0xe0) {
            uVar16 = bVar3 & 0x3f | (uVar16 & 0x1f) << 6;
          }
          else {
            uVar4 = *pbVar10 & 0x3f | (bVar3 & 0x3f) << 6;
            pbVar10 = pbVar14 + (long)(pbVar19 + 3);
            if (uVar16 < 0xf0) {
              uVar16 = uVar4 | (uVar16 & 0x1f) << 0xc;
            }
            else {
              bVar3 = *pbVar10;
              pbVar10 = pbVar14 + (long)(pbVar19 + 4);
              uVar16 = bVar3 & 0x3f | uVar4 << 6 | (uVar16 & 7) << 0x12;
            }
          }
        }
        FUN_00735594(local_70,uVar16,0x10001);
        bVar3 = local_63;
        uVar18 = (ulong)local_63;
        uVar5 = (ulong)local_64;
        if ((byte)(local_63 - local_64) != '\x01') {
          pbVar1 = pbVar19 + (long)pbVar12;
          if (((pbVar1 < pbVar15) || (param_2 < pbVar1)) ||
             ((pbVar15 != param_2 &&
              (((pbVar15 != (byte *)0x0 &&
                (iVar9 = (int)(char)param_1[(long)pbVar15],
                iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41))) ||
               ((pbVar1 != param_2 &&
                (iVar9 = (int)(char)param_1[(long)(pbVar19 + (long)pbVar12)],
                iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41))))))))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (param_1,param_2,pbVar15,pbVar12 + (long)pbVar19,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097c3b8);
          }
          pcVar17 = *(code **)(lVar2 + 0x18);
          uVar6 = (*pcVar17)(uVar7,param_1 + (long)pbVar15,pbVar19 + ((long)pbVar12 - (long)pbVar15)
                            );
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          if (bVar3 < 0x81) {
            uVar5 = (*pcVar17)(uVar7,(long)local_70 + uVar5,uVar18 - uVar5);
          }
          else {
            uVar5 = (*pcVar13)(uVar7,local_70[0]);
          }
          if ((uVar5 & 1) != 0) {
            return 1;
          }
          if (uVar16 < 0x80) {
            lVar11 = 1;
          }
          else if (uVar16 < 0x800) {
            lVar11 = 2;
          }
          else {
            lVar11 = 3;
            if (0xffff < uVar16) {
              lVar11 = 4;
            }
          }
          pbVar15 = pbVar19 + (long)(pbVar12 + lVar11);
        }
        if (uVar16 < 0x80) {
          lVar11 = 1;
        }
        else if (uVar16 < 0x800) {
          lVar11 = 2;
        }
        else {
          lVar11 = 3;
          if (0xffff < uVar16) {
            lVar11 = 4;
          }
        }
        pbVar8 = pbVar14 + ((long)pbVar8 - (long)pbVar10);
        pbVar1 = pbVar19 + (long)(pbVar12 + lVar11);
        pbVar14 = pbVar10;
      } while (pbVar8 != (byte *)0x0);
      pbVar8 = pbVar19 + (long)(pbVar12 + lVar11);
      if (pbVar8 < pbVar15) {
LAB_0074fa04:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_1,param_2,pbVar15,pbVar8,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c3d0);
      }
LAB_0074f9d0:
      if ((param_2 < pbVar8) ||
         ((pbVar15 != param_2 &&
          (((pbVar15 != (byte *)0x0 &&
            (iVar9 = (int)(char)param_1[(long)pbVar15],
            iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41))) ||
           ((pbVar8 != param_2 &&
            (iVar9 = (int)(char)param_1[(long)pbVar8],
            iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41))))))))) goto LAB_0074fa04;
    }
    uVar5 = (**(code **)(lVar2 + 0x18))(uVar7,param_1 + (long)pbVar15,(long)pbVar8 - (long)pbVar15);
    if ((uVar5 & 1) == 0) {
      uVar7 = (*pcVar13)(uVar7,0x22);
      return uVar7;
    }
  }
  return 1;
}


// ===== 0074faa8  <i8_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::UpperHex>::fmt */

void __rustcall <i8_as_core::fmt::UpperHex>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074fb1c  <str_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as core::fmt::Display>::fmt */

void __rustcall
<str_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_3,param_1,param_2);
  return;
}


// ===== 0074fb30  <u16_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::Binary>::fmt */

void __rustcall <u16_as_core::fmt::Binary>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_0046c5b6)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074fba4  <char_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <char as core::fmt::Debug>::fmt */

undefined8 __rustcall <char_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 local_40 [3];
  byte local_34;
  byte local_33;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  pcVar4 = *(code **)(lVar1 + 0x20);
  uVar2 = (*pcVar4)(uVar3,0x27);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  FUN_00735594(local_40,*param_1,0x101);
  if ((ulong)local_33 < 0x81) {
    uVar2 = (**(code **)(lVar1 + 0x18))
                      (uVar3,(long)local_40 + (ulong)local_34,(ulong)local_33 - (ulong)local_34);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar2 = (*pcVar4)(uVar3,local_40[0]);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  uVar3 = (*pcVar4)(uVar3,0x27);
  return uVar3;
}


// ===== 0074fc88  <i16_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::Binary>::fmt */

void __rustcall <i16_as_core::fmt::Binary>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_0046c5b6)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074fcfc  <core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv6Addr as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt(short *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  code *pcVar18;
  long lVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  short *local_c8;
  undefined8 **local_c0;
  code *apcStack_b8 [5];
  undefined1 local_90 [8];
  code *pcStack_88;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 uStack_61;
  
  local_c8 = param_1;
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) != 0) {
    local_90 = (undefined1  [8])&local_c8;
    local_c0 = (undefined8 **)0x0;
    pcStack_88 = FUN_00746eb8;
    iVar8 = core::fmt::write(&local_c0,&DAT_0097c348,&DAT_00368e80,local_90);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_00466abc,0x2b,&uStack_61,&DAT_0097b670,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097c400);
    }
    if (local_c0 < (undefined8 **)0x28) {
      uVar9 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,apcStack_b8);
      return uVar9;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,local_c0,0x27,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c260);
  }
  uVar14 = *(ulong *)(param_1 + 1);
  bVar20 = (byte)uVar14;
  bVar21 = (byte)(uVar14 >> 0x10);
  bVar22 = (byte)(uVar14 >> 0x20);
  bVar23 = (byte)(uVar14 >> 0x30);
  auVar7._8_8_ = _UNK_00370f68;
  auVar7._0_8_ = _DAT_00370f60;
  sVar3 = *param_1;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar14;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar14;
  auVar28 = NEON_ext(auVar24,auVar28,0xe,1);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar24 = NEON_ext(auVar6,ZEXT416(*(uint *)(param_1 + 5)),6,1);
  uVar4 = param_1[5];
  auVar24 = NEON_bit(auVar24,auVar28,auVar7,1);
  auVar25._2_14_ = auVar24._2_14_;
  auVar25._0_2_ = sVar3;
  auVar26._0_14_ = auVar25._0_14_;
  auVar26._14_2_ = param_1[7];
  auVar27 = NEON_rev16(auVar26,1);
  pcStack_88 = auVar27._8_8_;
  local_90 = auVar27._0_8_;
  if (((sVar3 == 0) &&
      (auVar27._0_4_ =
            CONCAT13(bVar23 | (byte)(uVar14 >> 0x38),
                     CONCAT12(bVar22 | (byte)(uVar14 >> 0x28),
                              CONCAT11(bVar21 | (byte)(uVar14 >> 0x18),bVar20 | (byte)(uVar14 >> 8))
                             )), auVar27[4] = bVar20, auVar27[5] = bVar21, auVar27[6] = bVar22,
      auVar27[7] = bVar23, auVar27._8_8_ = 0, auVar27._0_4_ == 0)) && ((uVar4 & uVar4 >> 8) == 0xff)
     ) {
    local_c0 = &local_70;
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 6));
    apcStack_b8[0] = (code *)PTR_fmt_0099f630;
    uVar9 = core::fmt::write(bVar20,auVar27,auVar28,_DAT_00370f60,*param_2,param_2[1],&DAT_003667ca,
                             &local_c0);
    return uVar9;
  }
  sVar5 = (short)uVar14;
  uVar11 = 1;
  if (sVar3 == 0) {
    uVar11 = 2;
  }
  uVar1 = uVar11;
  if (sVar5 != 0) {
    uVar1 = (ulong)(sVar3 == 0);
  }
  uVar15 = 0;
  if (sVar3 != 0) {
    uVar15 = (uint)(sVar5 == 0);
  }
  uVar16 = (ulong)uVar15;
  if ((short)(uVar14 >> 0x10) == 0) {
    uVar10 = uVar16;
    if (sVar5 != 0) {
      uVar11 = 0;
      uVar10 = 2;
    }
    uVar12 = uVar11 + 1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar10;
    }
    if (uVar1 < uVar12) {
      uVar1 = uVar11 + 1;
    }
  }
  else {
    uVar10 = 0;
    uVar12 = 0;
  }
  if ((short)(uVar14 >> 0x20) == 0) {
    uVar13 = 3;
    if (uVar12 != 0) {
      uVar13 = uVar10;
    }
    uVar11 = uVar12 + 1;
    if (uVar1 <= uVar12) {
      uVar16 = uVar13;
    }
    if (uVar1 < uVar11) {
      uVar1 = uVar12 + 1;
    }
  }
  else {
    uVar13 = 0;
    uVar11 = 0;
  }
  if ((short)(uVar14 >> 0x30) == 0) {
    uVar14 = 4;
    if (uVar11 != 0) {
      uVar14 = uVar13;
    }
    uVar10 = uVar11 + 1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar14;
    }
    if (uVar1 < uVar10) {
      uVar1 = uVar11 + 1;
    }
  }
  else {
    uVar14 = 0;
    uVar10 = 0;
  }
  if (uVar4 == 0) {
    uVar11 = 5;
    if (uVar10 != 0) {
      uVar11 = uVar14;
    }
    uVar14 = uVar10 + 1;
    if (uVar1 <= uVar10) {
      uVar16 = uVar11;
    }
    if (uVar1 < uVar14) {
      uVar1 = uVar10 + 1;
    }
  }
  else {
    uVar11 = 0;
    uVar14 = 0;
  }
  if (param_1[6] == 0) {
    uVar10 = 6;
    if (uVar14 != 0) {
      uVar10 = uVar11;
    }
    uVar11 = uVar14 + 1;
    if (uVar1 <= uVar14) {
      uVar16 = uVar10;
    }
    if (uVar1 < uVar11) {
      uVar1 = uVar14 + 1;
    }
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
  }
  puVar17 = (undefined8 *)((ulong)local_90 | 2);
  if (param_1[7] == 0) {
    uVar14 = 7;
    if (uVar11 != 0) {
      uVar14 = uVar10;
    }
    if (uVar1 <= uVar11) {
      uVar16 = uVar14;
    }
    if (uVar1 < uVar11 + 1) {
      uVar1 = uVar11 + 1;
    }
    uVar9 = *param_2;
    lVar2 = param_2[1];
  }
  else {
    uVar9 = *param_2;
    lVar2 = param_2[1];
  }
  if (uVar1 < 2) {
    local_c0 = &local_78;
    apcStack_b8[0] = FUN_00747220;
    local_78 = (undefined8 *)local_90;
    uVar14 = core::fmt::write(bVar20,auVar27,auVar28,_DAT_00370f60,uVar9,lVar2,&DAT_00368e80,
                              &local_c0);
    if ((uVar14 & 1) == 0) {
      pcVar18 = *(code **)(lVar2 + 0x20);
      local_70 = puVar17;
      uVar14 = (*pcVar18)(uVar9,0x3a);
      if ((uVar14 & 1) == 0) {
        local_c0 = &local_70;
        apcStack_b8[0] = FUN_00747220;
        uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
        if ((uVar14 & 1) == 0) {
          local_70 = (undefined8 *)((ulong)local_90 | 4);
          uVar14 = (*pcVar18)(uVar9,0x3a);
          if ((uVar14 & 1) == 0) {
            local_c0 = &local_70;
            apcStack_b8[0] = FUN_00747220;
            uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
            if ((uVar14 & 1) == 0) {
              local_70 = (undefined8 *)((ulong)local_90 | 6);
              uVar14 = (*pcVar18)(uVar9,0x3a);
              if ((uVar14 & 1) == 0) {
                local_c0 = &local_70;
                apcStack_b8[0] = FUN_00747220;
                uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
                if ((uVar14 & 1) == 0) {
                  local_70 = (undefined8 *)((ulong)local_90 | 8);
                  uVar14 = (*pcVar18)(uVar9,0x3a);
                  if ((uVar14 & 1) == 0) {
                    local_c0 = &local_70;
                    apcStack_b8[0] = FUN_00747220;
                    uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
                    if ((uVar14 & 1) == 0) {
                      local_70 = (undefined8 *)((ulong)local_90 | 10);
                      uVar14 = (*pcVar18)(uVar9,0x3a);
                      if ((uVar14 & 1) == 0) {
                        local_c0 = &local_70;
                        apcStack_b8[0] = FUN_00747220;
                        uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
                        if ((uVar14 & 1) == 0) {
                          local_70 = (undefined8 *)((ulong)local_90 | 0xc);
                          uVar14 = (*pcVar18)(uVar9,0x3a);
                          if ((uVar14 & 1) == 0) {
                            local_c0 = &local_70;
                            apcStack_b8[0] = FUN_00747220;
                            uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
                            if ((uVar14 & 1) == 0) {
                              local_70 = (undefined8 *)((ulong)local_90 | 0xe);
                              uVar14 = (*pcVar18)(uVar9,0x3a);
                              if ((uVar14 & 1) == 0) {
                                local_c0 = &local_70;
                                apcStack_b8[0] = FUN_00747220;
                                uVar9 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
                                if ((int)uVar9 == 0) {
                                  return uVar9;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (uVar16 != 0) {
      local_78 = (undefined8 *)local_90;
      local_c0 = &local_78;
      apcStack_b8[0] = FUN_00747220;
      uVar14 = core::fmt::write(bVar20,auVar27,auVar28,_DAT_00370f60,uVar9,lVar2,&DAT_00368e80,
                                &local_c0);
      if ((uVar14 & 1) != 0) {
        return 1;
      }
      if (uVar16 != 1) {
        pcVar18 = *(code **)(lVar2 + 0x20);
        lVar19 = uVar16 * 2 + -2;
        do {
          local_70 = puVar17;
          uVar14 = (*pcVar18)(uVar9,0x3a);
          if ((uVar14 & 1) != 0) {
            return 1;
          }
          apcStack_b8[0] = FUN_00747220;
          local_c0 = &local_70;
          uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
          if ((uVar14 & 1) != 0) {
            return 1;
          }
          lVar19 = lVar19 + -2;
          puVar17 = (undefined8 *)((long)puVar17 + 2);
        } while (lVar19 != 0);
      }
    }
    uVar14 = (**(code **)(lVar2 + 0x18))(uVar9,"::",2);
    if ((uVar14 & 1) == 0) {
      uVar1 = uVar1 + uVar16;
      if (8 < uVar1) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar1,8,8,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c3e8);
      }
      if (uVar1 != 8) {
        local_78 = (undefined8 *)(local_90 + uVar1 * 2);
        local_c0 = &local_78;
        apcStack_b8[0] = FUN_00747220;
        uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
        if ((uVar14 & 1) != 0) {
          return 1;
        }
        if (uVar1 != 7) {
          pcVar18 = *(code **)(lVar2 + 0x20);
          puVar17 = (undefined8 *)(local_90 + uVar1 * 2 + 2);
          lVar19 = uVar1 * -2 + 0xe;
          do {
            local_70 = puVar17;
            uVar14 = (*pcVar18)(uVar9,0x3a);
            if ((uVar14 & 1) != 0) {
              return 1;
            }
            apcStack_b8[0] = FUN_00747220;
            local_c0 = &local_70;
            uVar14 = core::fmt::write(uVar9,lVar2,&DAT_00368e80,&local_c0);
            if ((uVar14 & 1) != 0) {
              return 1;
            }
            lVar19 = lVar19 + -2;
            puVar17 = (undefined8 *)((long)puVar17 + 2);
          } while (lVar19 != 0);
        }
      }
      return 0;
    }
  }
  return 1;
}


// ===== 00750354  <char_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <char as core::fmt::Display>::fmt */

void __rustcall <char_as_core::fmt::Display>::fmt(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  uint local_14;
  
  uVar1 = *param_1;
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007503a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x20))(*param_2);
    return;
  }
  bVar4 = (byte)uVar1;
  if (uVar1 < 0x80) {
    local_14 = uVar1 & 0xff;
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&local_14,1);
    return;
  }
  if (uVar1 < 0x800) {
    local_14 = (uint)(bVar4 & 0xffff3f | 0x80) << 8;
    uVar3 = 2;
    bVar4 = (byte)(uVar1 >> 6) | 0xc0;
  }
  else {
    bVar2 = (byte)(uVar1 >> 6);
    if (uVar1 >> 0x10 != 0) {
      local_14 = CONCAT31(CONCAT21(CONCAT11(bVar4,bVar2),(char)(uVar1 >> 0xc)),(char)(uVar1 >> 0x12)
                         ) & 0x3f3f3fff | 0x808080f0;
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&local_14,4);
      return;
    }
    local_14._0_2_ = (bVar2 & 0xff3f | 0x80) << 8;
    uVar3 = 3;
    local_14 = CONCAT12(bVar4,(short)local_14) & 0xff3fffff | 0x800000;
    bVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
  }
  local_14 = CONCAT31(local_14._1_3_,bVar4);
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&local_14,uVar3);
  return;
}


// ===== 0075044c  <u16_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::Octal>::fmt */

void __rustcall <u16_as_core::fmt::Octal>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_00374588)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 007504c0  <core::net::ip_addr::Ipv6Addr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv6Addr as core::fmt::Debug>::fmt */

void __rustcall <core::net::ip_addr::Ipv6Addr_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a1f78)();
  return;
}


// ===== 007504c4  <i16_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::Octal>::fmt */

void __rustcall <i16_as_core::fmt::Octal>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_00374588)[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 00750538  <core::char::TryFromCharError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::TryFromCharError as core::fmt::Display>::fmt */

void __rustcall
<core::char::TryFromCharError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"unicode code point out of range",0x1f);
  return;
}


// ===== 0075054c  <u16_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::LowerHex>::fmt */

void __rustcall <u16_as_core::fmt::LowerHex>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789abcdef"[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 007505c0  FUN_007505c0 =====

void FUN_007505c0(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007505e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,(&PTR_s_NotFound_0097c570)[*param_1],
             *(undefined8 *)(&DAT_0046ced8 + (ulong)*param_1 * 8));
  return;
}


// ===== 007505e8  <i16_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::LowerHex>::fmt */

void __rustcall <i16_as_core::fmt::LowerHex>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789abcdef"[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0075065c  <i8_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::LowerExp>::fmt */

void __rustcall <i8_as_core::fmt::LowerExp>::fmt(char *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *param_1;
  iVar1 = -(int)cVar2;
  if (-1 < cVar2) {
    iVar1 = (int)cVar2;
  }
  FUN_0073f3e4(param_2,iVar1,(uint)(int)cVar2 >> 7 & 1 ^ 1,0x65);
  return;
}


// ===== 00750680  <u16_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::UpperHex>::fmt */

void __rustcall <u16_as_core::fmt::UpperHex>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 007506f4  <core::num::niche_types::NonZeroU8Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU8Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU8Inner_as_core::fmt::Debug>::fmt(undefined1 *param_1)

{
  FUN_0074d13c(*param_1);
  return;
}


// ===== 007506fc  <u8_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::LowerExp>::fmt */

void __rustcall <u8_as_core::fmt::LowerExp>::fmt(undefined1 *param_1,undefined8 param_2)

{
  FUN_0073f3e4(param_2,*param_1,1,0x65);
  return;
}


// ===== 00750714  FUN_00750714 =====

void FUN_00750714(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  char local_21;
  
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *param_1;
  uVar5 = (uint)uVar6;
  if ((uVar5 >> 0x17 & 1) != 0) {
    if ((uVar5 >> 0x1b & 1) == 0) {
      uVar5 = uVar5 | 0x9000000;
      *(undefined2 *)(param_2 + 0x14) = 0x12;
    }
    else {
      uVar5 = uVar5 | 0x1000000;
    }
  }
  *(uint *)(param_2 + 0x10) = uVar5 | 0x800000;
  lVar1 = 0;
  do {
    lVar3 = lVar1;
    uVar4 = uVar2 & 0xf;
    uVar2 = uVar2 >> 4;
    (&local_21)[lVar3] = "0123456789abcdef"[uVar4];
    lVar1 = lVar3 + -1;
  } while (uVar2 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_21 + lVar3,-(lVar3 + -1));
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  return;
}


// ===== 007507c8  <i16_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::UpperHex>::fmt */

void __rustcall <i16_as_core::fmt::UpperHex>::fmt(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4;
    (&local_11)[lVar2] = "0123456789ABCDEF"[uVar4];
    lVar1 = lVar2 + -1;
  } while ((int)uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0075083c  <i8_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::fmt::UpperExp>::fmt */

void __rustcall <i8_as_core::fmt::UpperExp>::fmt(char *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *param_1;
  iVar1 = -(int)cVar2;
  if (-1 < cVar2) {
    iVar1 = (int)cVar2;
  }
  FUN_0073f3e4(param_2,iVar1,(uint)(int)cVar2 >> 7 & 1 ^ 1,0x45);
  return;
}


// ===== 00750860  <core::cell::BorrowError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::cell::BorrowError as core::fmt::Display>::fmt */

void __rustcall
<core::cell::BorrowError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,
             "RefCell already mutably borrowedman_guard_medium_light_skin_toneperson_feeding_baby::skin-tone-3construction_worker::skin-tone-5blond_haired_person::skin-tone-5woman_health_worker::skin-tone-1woman_bouncing_ball::skin-tone-1man_farmer_medium_dark_skin_tonewoman_health_worker::skin-tone-5woman_walking_facing_right_tone5blond-haired_man_light_skin_toneman_feeding_baby_light_skin_toneman_getting_haircut::skin-tone-4man_lifting_weights::skin-tone-3man_with_gua_pi_mao::skin-tone-3person_raising_hand::skin-tone-4person_tipping_hand::skin-tone-2woman_health_worker::skin-tone-3man_singer_medium_dark_skin_tone"
             ,0x20);
  return;
}


// ===== 00750874  <u32_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::Binary>::fmt */

void __rustcall <u32_as_core::fmt::Binary>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 1;
    (&local_11)[lVar3] = (&DAT_0046c5b6)[uVar4 & 1];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 007508e8  <u8_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::UpperExp>::fmt */

void __rustcall <u8_as_core::fmt::UpperExp>::fmt(undefined1 *param_1,undefined8 param_2)

{
  FUN_0073f3e4(param_2,*param_1,1,0x45);
  return;
}


// ===== 00750900  FUN_00750900 =====

undefined8 FUN_00750900(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 local_90;
  long lStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined1 local_44 [4];
  
  uVar5 = *param_3;
  lVar1 = param_3[1];
  pcVar7 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar7)(uVar5,&DAT_00467170,1);
  if (param_2 == 0) goto LAB_00750998;
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_3 + 0x12) < '\0') {
      uVar4 = (*pcVar7)(uVar5,&DAT_004669e6,1);
      uVar3 = 1;
      if ((uVar4 & 1) == 0) {
        local_44[0] = 1;
        local_80 = local_44;
        uStack_68 = param_3[2];
        local_70 = &DAT_0097b768;
        local_90 = uVar5;
        lStack_88 = lVar1;
        local_78 = (undefined1 *)&local_90;
        uVar3 = FUN_0074d13c(*param_1,&local_78);
        if ((uVar3 & 1) != 0) goto LAB_00750950;
        uVar3 = (**(code **)(local_70 + 0x18))(local_78,&DAT_004669e1,2);
      }
    }
    else {
      uVar3 = FUN_0074d13c(*param_1,param_3);
    }
  }
  else {
LAB_00750950:
    uVar3 = 1;
  }
  param_2 = param_2 + -1;
  if (param_2 != 0) {
    puVar6 = param_1 + 1;
LAB_00750a18:
    do {
      if ((uVar3 & 1) == 0) {
        if (-1 < *(char *)((long)param_3 + 0x12)) {
          uVar3 = (**(code **)(param_3[1] + 0x18))(*param_3,&DAT_004669da,2);
          if ((uVar3 & 1) != 0) goto LAB_00750a08;
          uVar3 = FUN_0074d13c(*puVar6,param_3);
          param_2 = param_2 + -1;
          puVar6 = puVar6 + 1;
          if (param_2 == 0) break;
          goto LAB_00750a18;
        }
        lStack_88 = param_3[1];
        local_90 = *param_3;
        uStack_68 = param_3[2];
        local_44[0] = 1;
        local_70 = &DAT_0097b768;
        local_80 = local_44;
        local_78 = (undefined1 *)&local_90;
        iVar2 = FUN_0074d13c(*puVar6,&local_78);
        if (iVar2 != 0) goto LAB_00750a08;
        uVar3 = (**(code **)(local_70 + 0x18))(local_78,&DAT_004669e1,2);
      }
      else {
LAB_00750a08:
        uVar3 = 1;
      }
      puVar6 = puVar6 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
LAB_00750998:
  if ((uVar3 & 1) == 0) {
    uVar5 = (**(code **)(param_3[1] + 0x18))(*param_3,&DAT_00466a83,1);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 00750af4  <core::cell::BorrowMutError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::cell::BorrowMutError as core::fmt::Display>::fmt */

void __rustcall
<core::cell::BorrowMutError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"RefCell already borrowed",0x18);
  return;
}


// ===== 00750b08  <i32_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::Binary>::fmt */

void __rustcall <i32_as_core::fmt::Binary>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 1;
    (&local_11)[lVar3] = (&DAT_0046c5b6)[uVar4 & 1];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00750b7c  <i16_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::LowerExp>::fmt */

void __rustcall <i16_as_core::fmt::LowerExp>::fmt(short *param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *param_1;
  iVar1 = -(int)sVar2;
  if (-1 < sVar2) {
    iVar1 = (int)sVar2;
  }
  FUN_0073f3e4(param_2,iVar1,(uint)(int)sVar2 >> 0xf & 1 ^ 1,0x65);
  return;
}


// ===== 00750ba0  <u32_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::Octal>::fmt */

void __rustcall <u32_as_core::fmt::Octal>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 3;
    (&local_11)[lVar3] = (&DAT_00374588)[uVar4 & 7];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00750c14  FUN_00750c14 =====

void FUN_00750c14(undefined8 *param_1)

{
  FUN_0074d704(*param_1);
  return;
}


// ===== 00750c1c  <u16_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::LowerExp>::fmt */

void __rustcall <u16_as_core::fmt::LowerExp>::fmt(undefined2 *param_1,undefined8 param_2)

{
  FUN_0073f3e4(param_2,*param_1,1,0x65);
  return;
}


// ===== 00750c34  <i32_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::Octal>::fmt */

void __rustcall <i32_as_core::fmt::Octal>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 3;
    (&local_11)[lVar3] = (&DAT_00374588)[uVar4 & 7];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00750ca8  <i16_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::UpperExp>::fmt */

void __rustcall <i16_as_core::fmt::UpperExp>::fmt(short *param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *param_1;
  iVar1 = -(int)sVar2;
  if (-1 < sVar2) {
    iVar1 = (int)sVar2;
  }
  FUN_0073f3e4(param_2,iVar1,(uint)(int)sVar2 >> 0xf & 1 ^ 1,0x45);
  return;
}


// ===== 00750ccc  <u32_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::LowerHex>::fmt */

void __rustcall <u32_as_core::fmt::LowerHex>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 4;
    (&local_11)[lVar3] = "0123456789abcdef"[uVar4 & 0xf];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00750d40  <u16_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::UpperExp>::fmt */

void __rustcall <u16_as_core::fmt::UpperExp>::fmt(undefined2 *param_1,undefined8 param_2)

{
  FUN_0073f3e4(param_2,*param_1,1,0x45);
  return;
}


// ===== 00750d58  <i32_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::LowerHex>::fmt */

void __rustcall <i32_as_core::fmt::LowerHex>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 4;
    (&local_11)[lVar3] = "0123456789abcdef"[uVar4 & 0xf];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00750dcc  <i32_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::LowerExp>::fmt */

void __rustcall <i32_as_core::fmt::LowerExp>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  FUN_0073f3e4(param_2,uVar1,~uVar2 >> 0x1f,0x65);
  return;
}


// ===== 00750df0  <u32_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::UpperHex>::fmt */

void __rustcall <u32_as_core::fmt::UpperHex>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 4;
    (&local_11)[lVar3] = "0123456789ABCDEF"[uVar4 & 0xf];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00750e64  <core::num::niche_types::NonZeroU16Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroU16Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroU16Inner_as_core::fmt::Debug>::fmt(undefined2 *param_1)

{
  FUN_0074d2a4(*param_1);
  return;
}


// ===== 00750e6c  <u32_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::LowerExp>::fmt */

void __rustcall <u32_as_core::fmt::LowerExp>::fmt(undefined4 *param_1,undefined8 param_2)

{
  FUN_0073f3e4(param_2,*param_1,1,0x65);
  return;
}


// ===== 00750e84  <i32_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::UpperHex>::fmt */

void __rustcall <i32_as_core::fmt::UpperHex>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char local_11;
  
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 >> 4;
    (&local_11)[lVar3] = "0123456789ABCDEF"[uVar4 & 0xf];
    lVar2 = lVar3 + -1;
  } while (uVar1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar3,-(lVar3 + -1));
  return;
}


// ===== 00750ef8  <core::sync::atomic::Atomic<i8>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<i8> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<i8>as_core::fmt::Debug>::fmt(undefined1 *param_1)

{
  FUN_0074c7b4(*param_1);
  return;
}


// ===== 00750f00  <i32_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::fmt::UpperExp>::fmt */

void __rustcall <i32_as_core::fmt::UpperExp>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  FUN_0073f3e4(param_2,uVar1,~uVar2 >> 0x1f,0x45);
  return;
}


// ===== 00750f24  <u32_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as core::fmt::UpperExp>::fmt */

void __rustcall <u32_as_core::fmt::UpperExp>::fmt(undefined4 *param_1,undefined8 param_2)

{
  FUN_0073f3e4(param_2,*param_1,1,0x45);
  return;
}


// ===== 00750f3c  FUN_00750f3c =====

bool FUN_00750f3c(ulong *param_1,uint param_2)

{
  byte bVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  uint local_14;
  
  bVar3 = (byte)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    __n = 1;
    uVar2 = *param_1;
    uVar5 = uVar2 + 1;
    bVar4 = 0x15 < uVar5 || 0xfffffffffffffffe < uVar2;
    if (bVar4) {
      return bVar4;
    }
  }
  else {
    if (param_2 < 0x800) {
      local_14 = (uint)(bVar3 & 0xffff3f | 0x80) << 8;
      __n = 2;
      bVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 != 0) {
        __n = 4;
        local_14 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        uVar2 = *param_1;
        uVar5 = uVar2 + 4;
        bVar4 = 0x15 < uVar5 || 0xfffffffffffffffb < uVar2;
        if (bVar4) {
          return bVar4;
        }
        goto LAB_00750f78;
      }
      local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
      __n = 3;
      local_14 = CONCAT12(bVar3,(short)local_14) & 0xff3fffff | 0x800000;
      bVar3 = (byte)(param_2 >> 0xc) | 0xe0;
    }
    local_14 = CONCAT31(local_14._1_3_,bVar3);
    uVar2 = *param_1;
    uVar5 = uVar2 + __n;
    bVar4 = 0x15 < uVar5 || CARRY8(uVar2,__n);
    if (bVar4) {
      return bVar4;
    }
  }
LAB_00750f78:
  memcpy((void *)((long)param_1 + uVar2 + 8),&local_14,__n);
  *param_1 = uVar5;
  return bVar4;
}


// ===== 0075104c  FUN_0075104c =====

void FUN_0075104c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_0097c218,param_2,param_3);
  return;
}


// ===== 00751060  FUN_00751060 =====

bool FUN_00751060(ulong *param_1,uint param_2)

{
  byte bVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  uint local_14;
  
  bVar3 = (byte)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    __n = 1;
    uVar2 = *param_1;
    uVar5 = uVar2 + 1;
    bVar4 = 0x27 < uVar5 || 0xfffffffffffffffe < uVar2;
    if (bVar4) {
      return bVar4;
    }
  }
  else {
    if (param_2 < 0x800) {
      local_14 = (uint)(bVar3 & 0xffff3f | 0x80) << 8;
      __n = 2;
      bVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 != 0) {
        __n = 4;
        local_14 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        uVar2 = *param_1;
        uVar5 = uVar2 + 4;
        bVar4 = 0x27 < uVar5 || 0xfffffffffffffffb < uVar2;
        if (bVar4) {
          return bVar4;
        }
        goto LAB_0075109c;
      }
      local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
      __n = 3;
      local_14 = CONCAT12(bVar3,(short)local_14) & 0xff3fffff | 0x800000;
      bVar3 = (byte)(param_2 >> 0xc) | 0xe0;
    }
    local_14 = CONCAT31(local_14._1_3_,bVar3);
    uVar2 = *param_1;
    uVar5 = uVar2 + __n;
    bVar4 = 0x27 < uVar5 || CARRY8(uVar2,__n);
    if (bVar4) {
      return bVar4;
    }
  }
LAB_0075109c:
  memcpy((void *)((long)param_1 + uVar2 + 8),&local_14,__n);
  *param_1 = uVar5;
  return bVar4;
}


// ===== 00751170  FUN_00751170 =====

void FUN_00751170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_0097c348,param_2,param_3);
  return;
}


// ===== 00751184  FUN_00751184 =====

bool FUN_00751184(ulong *param_1,uint param_2)

{
  byte bVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  uint local_14;
  
  bVar3 = (byte)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    __n = 1;
    uVar2 = *param_1;
    uVar5 = uVar2 + 1;
    bVar4 = 0x3a < uVar5 || 0xfffffffffffffffe < uVar2;
    if (bVar4) {
      return bVar4;
    }
  }
  else {
    if (param_2 < 0x800) {
      local_14 = (uint)(bVar3 & 0xffff3f | 0x80) << 8;
      __n = 2;
      bVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 != 0) {
        __n = 4;
        local_14 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        uVar2 = *param_1;
        uVar5 = uVar2 + 4;
        bVar4 = 0x3a < uVar5 || 0xfffffffffffffffb < uVar2;
        if (bVar4) {
          return bVar4;
        }
        goto LAB_007511c0;
      }
      local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
      __n = 3;
      local_14 = CONCAT12(bVar3,(short)local_14) & 0xff3fffff | 0x800000;
      bVar3 = (byte)(param_2 >> 0xc) | 0xe0;
    }
    local_14 = CONCAT31(local_14._1_3_,bVar3);
    uVar2 = *param_1;
    uVar5 = uVar2 + __n;
    bVar4 = 0x3a < uVar5 || CARRY8(uVar2,__n);
    if (bVar4) {
      return bVar4;
    }
  }
LAB_007511c0:
  memcpy((void *)((long)param_1 + uVar2 + 8),&local_14,__n);
  *param_1 = uVar5;
  return bVar4;
}


// ===== 00751294  FUN_00751294 =====

void FUN_00751294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_0097c2c0,param_2,param_3);
  return;
}


// ===== 007512a8  FUN_007512a8 =====

bool FUN_007512a8(ulong *param_1,uint param_2)

{
  byte bVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  uint local_14;
  
  bVar3 = (byte)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    __n = 1;
    uVar2 = *param_1;
    uVar5 = uVar2 + 1;
    bVar4 = 0xf < uVar5 || 0xfffffffffffffffe < uVar2;
    if (bVar4) {
      return bVar4;
    }
  }
  else {
    if (param_2 < 0x800) {
      local_14 = (uint)(bVar3 & 0xffff3f | 0x80) << 8;
      __n = 2;
      bVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 != 0) {
        __n = 4;
        local_14 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        uVar2 = *param_1;
        uVar5 = uVar2 + 4;
        bVar4 = 0xf < uVar5 || 0xfffffffffffffffb < uVar2;
        if (bVar4) {
          return bVar4;
        }
        goto LAB_007512e4;
      }
      local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
      __n = 3;
      local_14 = CONCAT12(bVar3,(short)local_14) & 0xff3fffff | 0x800000;
      bVar3 = (byte)(param_2 >> 0xc) | 0xe0;
    }
    local_14 = CONCAT31(local_14._1_3_,bVar3);
    uVar2 = *param_1;
    uVar5 = uVar2 + __n;
    bVar4 = 0xf < uVar5 || CARRY8(uVar2,__n);
    if (bVar4) {
      return bVar4;
    }
  }
LAB_007512e4:
  memcpy((void *)((long)param_1 + uVar2 + 8),&local_14,__n);
  *param_1 = uVar5;
  return bVar4;
}


// ===== 007513b8  FUN_007513b8 =====

void FUN_007513b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_0097c278,param_2,param_3);
  return;
}


// ===== 007513cc  FUN_007513cc =====

undefined8 FUN_007513cc(void)

{
  return 0;
}


// ===== 007513d4  FUN_007513d4 =====

undefined8 FUN_007513d4(void)

{
  return 0;
}


// ===== 007513dc  FUN_007513dc =====

undefined8 FUN_007513dc(void)

{
  return 0x2a;
}


// ===== 007513e4  FUN_007513e4 =====

undefined1  [16] FUN_007513e4(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = PTR_VTABLE_0099f8a0;
  return auVar1;
}


// ===== 007513f8  FUN_007513f8 =====

void FUN_007513f8(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x007513f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 007513fc  FUN_007513fc =====

void FUN_007513fc(void)

{
  return;
}


// ===== 00751400  FUN_00751400 =====

undefined1  [16] FUN_00751400(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = PTR_VTABLE_0099f8a8;
  return auVar1;
}


// ===== 00751414  FUN_00751414 =====

void FUN_00751414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_0097b768,param_2,param_3);
  return;
}


// ===== 00751428  FUN_00751428 =====

void FUN_00751428(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner();
}


// ===== 00751444  FUN_00751444 =====

undefined1  [16] FUN_00751444(void)

{
  undefined1 local_30 [2] [16];
  
                    /* try { // try from 00751450 to 00751457 has its CatchHandler @ 00751468 */
  FUN_0075146c(local_30);
  return local_30[0];
}


// ===== 0075146c  FUN_0075146c =====

void FUN_0075146c(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  uVar1 = (uint)LZCOUNT(param_5);
  if (param_5 == 0) {
    uVar1 = (int)LZCOUNT(param_4) + 0x40;
  }
  uVar19 = (uint)LZCOUNT(param_3);
  if (param_3 == 0) {
    uVar19 = (int)LZCOUNT(param_2) + 0x40;
  }
  if (uVar1 <= uVar19) {
    if (CARRY8(param_3,~param_5) || CARRY8(param_3 + ~param_5,(ulong)(param_4 <= param_2))) {
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = param_2 - param_4;
      param_1[3] = param_3 - (param_5 + (param_2 < param_4));
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_2;
    param_1[3] = param_3;
    return;
  }
  if (0x3f < uVar19) {
    uVar15 = 0;
    if (param_4 != 0) {
      uVar15 = param_2 / param_4;
    }
    *param_1 = uVar15;
    param_1[1] = 0;
    param_1[2] = param_2 - uVar15 * param_4;
    param_1[3] = 0;
    return;
  }
  if (uVar1 < 0x60) {
    if (0x1f < uVar1 - uVar19) {
      uVar3 = 0x60 - uVar1;
      uVar15 = 0;
      uVar14 = 0;
      uVar16 = param_5 >> ((ulong)uVar3 & 0x3f);
      if ((uVar3 & 0x40) == 0) {
        uVar16 = (param_5 << 1) << ((ulong)(uVar1 - 0x61) & 0x3f) | param_4 >> ((ulong)uVar3 & 0x3f)
        ;
      }
      uVar16 = (uVar16 & 0xffffffff) + 1;
      while( true ) {
        uVar4 = 0x40 - uVar19;
        uVar22 = (ulong)uVar4;
        uVar17 = param_3 >> (uVar22 & 0x3f);
        if ((uVar4 & 0x40) == 0) {
          uVar17 = (param_3 << 1) << ((ulong)(uVar19 - 1) & 0x3f) | param_2 >> (uVar22 & 0x3f);
        }
        uVar19 = uVar4 - uVar3;
        uVar20 = (ulong)uVar19;
        if (uVar4 < uVar3) {
          uVar16 = param_5 >> (uVar22 & 0x3f);
          if ((uVar4 & 0x40) == 0) {
            uVar16 = (param_5 << 1) << ((ulong)~uVar4 & 0x3f) | param_4 >> (uVar22 & 0x3f);
          }
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = uVar17 / uVar16;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = param_4;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar22;
          uVar17 = param_4 * uVar22;
          uVar16 = SUB168(auVar8 * auVar12,8) + param_5 * uVar22;
          if (CARRY8(param_3,~uVar16) || CARRY8(param_3 + ~uVar16,(ulong)(uVar17 <= param_2))) {
            if (CARRY8(uVar15,uVar22)) {
              uVar14 = uVar14 + 1;
            }
            *param_1 = uVar15 + uVar22;
            param_1[1] = uVar14;
            param_1[2] = param_2 - uVar17;
            param_1[3] = param_3 - (uVar16 + (param_2 < uVar17));
            return;
          }
          if (CARRY8(uVar15,uVar22 - 1)) {
            uVar14 = uVar14 + 1;
          }
          *param_1 = uVar15 + (uVar22 - 1);
          param_1[1] = uVar14;
          param_1[2] = (param_2 + param_4) - uVar17;
          param_1[3] = (param_3 + param_5 + (ulong)CARRY8(param_2,param_4)) -
                       (uVar16 + (param_2 + param_4 < uVar17));
          return;
        }
        uVar22 = 0;
        if (uVar16 != 0) {
          uVar22 = uVar17 / uVar16;
        }
        bVar13 = (uVar19 & 0x40) == 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = param_4;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar22;
        uVar23 = uVar22 << (uVar20 & 0x3f);
        uVar21 = param_4 * uVar22 << (uVar20 & 0x3f);
        uVar17 = uVar23;
        if (bVar13) {
          uVar17 = (uVar22 >> 1) >> ((ulong)~uVar19 & 0x3f);
        }
        uVar2 = 0;
        if (bVar13) {
          uVar2 = uVar23;
        }
        uVar23 = uVar21;
        if (bVar13) {
          uVar23 = SUB168(auVar7 * auVar11,8) + param_5 * uVar22 << (uVar20 & 0x3f) |
                   (param_4 * uVar22 >> 1) >> ((ulong)~uVar19 & 0x3f);
        }
        uVar22 = 0;
        if (bVar13) {
          uVar22 = uVar21;
        }
        bVar13 = CARRY8(uVar2,uVar15);
        uVar15 = uVar2 + uVar15;
        uVar14 = uVar17 + uVar14 + (ulong)bVar13;
        bVar13 = param_2 < uVar22;
        param_2 = param_2 - uVar22;
        param_3 = param_3 - (uVar23 + bVar13);
        uVar19 = (uint)LZCOUNT(param_3);
        if (param_3 == 0) {
          uVar19 = (int)LZCOUNT(param_2) + 0x40;
        }
        if (uVar1 <= uVar19) break;
        if (0x3f < uVar19) {
          uVar16 = 0;
          if (param_4 != 0) {
            uVar16 = param_2 / param_4;
          }
          if (CARRY8(uVar15,uVar16)) {
            uVar14 = uVar14 + 1;
          }
          *param_1 = uVar15 + uVar16;
          param_1[1] = uVar14;
          param_1[2] = param_2 - uVar16 * param_4;
          param_1[3] = 0;
          return;
        }
      }
      if (CARRY8(param_3,~param_5) || CARRY8(param_3 + ~param_5,(ulong)(param_4 <= param_2))) {
        if (uVar15 == 0xffffffffffffffff) {
          uVar14 = uVar14 + 1;
        }
        *param_1 = uVar15 + 1;
        param_1[1] = uVar14;
        param_1[2] = param_2 - param_4;
        param_1[3] = param_3 - (param_5 + (param_2 < param_4));
        return;
      }
      *param_1 = uVar15;
      param_1[1] = uVar14;
      param_1[2] = param_2;
      param_1[3] = param_3;
      return;
    }
    uVar16 = (ulong)(0x40 - uVar19);
    uVar15 = param_5 >> (uVar16 & 0x3f);
    uVar14 = param_3 >> (uVar16 & 0x3f);
    if ((0x40 - uVar19 & 0x40) == 0) {
      uVar15 = (param_5 << 1) << ((ulong)(uVar19 - 1) & 0x3f) | param_4 >> (uVar16 & 0x3f);
      uVar14 = (param_3 << 1) << ((ulong)(uVar19 - 1) & 0x3f) | param_2 >> (uVar16 & 0x3f);
    }
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = uVar14 / uVar15;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar16;
    uVar14 = SUB168(auVar5 * auVar9,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_5;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar16;
    lVar18 = SUB168(auVar6 * auVar10,8);
    uVar17 = param_4 * uVar16;
    uVar15 = uVar14 + param_5 * uVar16;
    if (CARRY8(uVar14,param_5 * uVar16)) {
      lVar18 = lVar18 + 1;
    }
    if ((lVar18 == 0) &&
       (CARRY8(param_3,~uVar15) || CARRY8(param_3 + ~uVar15,(ulong)(uVar17 <= param_2)))) {
      *param_1 = uVar16;
      param_1[1] = 0;
      param_1[2] = param_2 - uVar17;
      param_1[3] = param_3 - (uVar15 + (param_2 < uVar17));
      return;
    }
    *param_1 = uVar16 - 1;
    param_1[1] = 0;
    param_1[2] = (param_4 + param_2) - uVar17;
    param_1[3] = (param_5 + param_3 + (ulong)CARRY8(param_4,param_2)) -
                 (uVar15 + (param_4 + param_2 < uVar17));
    return;
  }
  uVar14 = param_4 & 0xffffffff;
  uVar15 = 0;
  if (uVar14 != 0) {
    uVar15 = param_3 / uVar14;
  }
  uVar16 = 0;
  if (uVar14 != 0) {
    uVar16 = (param_2 >> 0x20 | (ulong)(uint)((int)param_3 - (int)uVar15 * (int)param_4) << 0x20) /
             uVar14;
  }
  uVar17 = param_2 & 0xffffffff |
           (ulong)(uint)((int)(param_2 >> 0x20) - (int)uVar16 * (int)param_4) << 0x20;
  uVar22 = 0;
  if (uVar14 != 0) {
    uVar22 = uVar17 / uVar14;
  }
  *param_1 = uVar22 | uVar16 << 0x20;
  param_1[1] = uVar15 | uVar16 >> 0x20;
  param_1[2] = uVar17 - uVar22 * uVar14;
  param_1[3] = 0;
  return;
}


// ===== 00751794  __emutls_get_address =====

void * __emutls_get_address(size_t *param_1)

{
  pthread_key_t __key;
  undefined8 *__ptr;
  void *pvVar1;
  void *__s;
  ulong uVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  
  sVar3 = param_1[2];
  if (sVar3 == 0) {
    pthread_once((pthread_once_t *)&DAT_009a6f78,FUN_007519a0);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_009a6f88);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_009a6f80 + 1;
      DAT_009a6f80 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_009a6f88);
    __ptr = (undefined8 *)pthread_getspecific(DAT_009a6f74);
    if (__ptr == (undefined8 *)0x0) goto LAB_00751870;
LAB_007517c4:
    uVar2 = __ptr[1];
    if (sVar3 <= uVar2) goto LAB_007518b8;
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_009a6f74);
    if (__ptr != (undefined8 *)0x0) goto LAB_007517c4;
LAB_00751870:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
  }
  __key = DAT_009a6f74;
  __ptr[1] = lVar4;
  pthread_setspecific(__key,__ptr);
LAB_007518b8:
  pvVar1 = (void *)__ptr[sVar3 + 1];
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    __n = *param_1;
    pvVar1 = malloc(uVar2 + 7 + __n);
    if (pvVar1 != (void *)0x0) {
      __s = (void *)((long)pvVar1 + uVar2 + 7 & -uVar2);
      *(void **)((long)__s + -8) = pvVar1;
      if ((void *)param_1[3] == (void *)0x0) {
        memset(__s,0,__n);
      }
      else {
        memcpy(__s,(void *)param_1[3],__n);
      }
      __ptr[sVar3 + 1] = __s;
      return __s;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00751970  FUN_00751970 =====

ulong FUN_00751970(ulong param_1)

{
  uint uVar1;
  
  if (DAT_009a6f70 == '\x01') {
    uVar1 = pthread_key_delete(DAT_009a6f74);
    param_1 = (ulong)uVar1;
    DAT_009a6f70 = '\0';
  }
  return param_1;
}


// ===== 007519a0  FUN_007519a0 =====

void FUN_007519a0(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_009a6f74,FUN_007519d4);
  if (iVar1 == 0) {
    DAT_009a6f70 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007519d4  FUN_007519d4 =====

long * FUN_007519d4(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_009a6f74,param_1);
    return (long *)(ulong)uVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (param_1[uVar3 + 2] != 0) {
        free(*(void **)(param_1[uVar3 + 2] + -8));
        uVar2 = param_1[1];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  free(param_1);
  return param_1;
}


// ===== 00751a50  FUN_00751a50 =====

undefined8 FUN_00751a50(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_00755c7c(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00751ec0(auStack_4f0,auStack_280);
  iVar1 = FUN_007520d0(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_007520f8(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_00751f68(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_00751b48(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_007520d0(auStack_4f0);
  }
  return 3;
}


// ===== 00751b48  FUN_00751b48 =====

undefined8 FUN_00751b48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00751ec0(param_2,param_1);
  iVar2 = FUN_007520e4(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00751f68(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_007520f8(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_0099f8b0;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00752138(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_007520e4(param_2);
  }
  return 2;
}


// ===== 00751c7c  FUN_00751c7c =====

void FUN_00751c7c(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_00755c7c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00751b48(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00751d00(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_0099f8b0;
  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00751d00  FUN_00751d00 =====

void FUN_00751d00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00751ec0(param_2,param_1);
  iVar1 = FUN_007520e4(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_007520f8(param_2,auStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_60 != (code *)0x0) &&
       (iVar1 = (*local_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_00752138(param_2);
    }
    iVar1 = FUN_007520e4(param_2);
  }
  return;
}


// ===== 00751df4  FUN_00751df4 =====

undefined8 FUN_00751df4(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_007520f8(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 00751e28  FUN_00751e28 =====

undefined8 FUN_00751e28(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_007520f8(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 00751e5c  FUN_00751e5c =====

void FUN_00751e5c(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00751e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 00751e78  thunk_FUN_00751fe4 =====

void thunk_FUN_00751fe4(void)

{
  FUN_00751fe4();
  return;
}


// ===== 00751e80  FUN_00751e80 =====

undefined8 FUN_00751e80(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00751f68(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 00751eb0  FUN_00751eb0 =====

void FUN_00751eb0(undefined8 param_1,undefined8 param_2)

{
  FUN_00751fe4(param_1,0xffffffff,param_2);
  return;
}


// ===== 00751ec0  FUN_00751ec0 =====

undefined8 FUN_00751ec0(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_0097c6d8;
  param_1[1] = &DAT_009a6fb0;
  memcpy(param_1 + 2,param_2,0x110);
  uVar3 = *(undefined8 *)((long)param_2 + 0x130);
  uVar2 = *(undefined8 *)((long)param_2 + 0x148);
  uVar1 = *(undefined8 *)((long)param_2 + 0x140);
  uVar7 = *(undefined8 *)((long)param_2 + 0x118);
  uVar6 = *(undefined8 *)((long)param_2 + 0x110);
  uVar5 = *(undefined8 *)((long)param_2 + 0x128);
  uVar4 = *(undefined8 *)((long)param_2 + 0x120);
  param_1[0x29] = *(undefined8 *)((long)param_2 + 0x138);
  param_1[0x28] = uVar3;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x25] = uVar7;
  param_1[0x24] = uVar6;
  param_1[0x27] = uVar5;
  param_1[0x26] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x170);
  uVar2 = *(undefined8 *)((long)param_2 + 0x188);
  uVar1 = *(undefined8 *)((long)param_2 + 0x180);
  uVar7 = *(undefined8 *)((long)param_2 + 0x158);
  uVar6 = *(undefined8 *)((long)param_2 + 0x150);
  uVar5 = *(undefined8 *)((long)param_2 + 0x168);
  uVar4 = *(undefined8 *)((long)param_2 + 0x160);
  param_1[0x31] = *(undefined8 *)((long)param_2 + 0x178);
  param_1[0x30] = uVar3;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x2d] = uVar7;
  param_1[0x2c] = uVar6;
  param_1[0x2f] = uVar5;
  param_1[0x2e] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1b0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x1c8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1c0);
  uVar7 = *(undefined8 *)((long)param_2 + 0x198);
  uVar6 = *(undefined8 *)((long)param_2 + 400);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1a8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1a0);
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1b8);
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar2;
  param_1[0x3a] = uVar1;
  param_1[0x35] = uVar7;
  param_1[0x34] = uVar6;
  param_1[0x37] = uVar5;
  param_1[0x36] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1f0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x208);
  uVar1 = *(undefined8 *)((long)param_2 + 0x200);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1d8);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1d0);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1e8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1e0);
  param_1[0x41] = *(undefined8 *)((long)param_2 + 0x1f8);
  param_1[0x40] = uVar3;
  param_1[0x43] = uVar2;
  param_1[0x42] = uVar1;
  param_1[0x3d] = uVar7;
  param_1[0x3c] = uVar6;
  param_1[0x3f] = uVar5;
  param_1[0x3e] = uVar4;
  *(undefined8 *)((long)param_1 + 0x263) = 0;
  *(undefined8 *)((long)param_1 + 0x25b) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_007529b0(param_1,0);
  return 0;
}


// ===== 00751f68  FUN_00751f68 =====

undefined8 FUN_00751f68(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    *param_3 = uVar2;
    return 0;
  }
  return 0xffffe672;
}


// ===== 00751fe4  FUN_00751fe4 =====

undefined8 FUN_00751fe4(long *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_78 [32];
  long local_58;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
    if (param_2 == -1) {
      (**(code **)(*param_1 + 0x48))(param_1,auStack_78);
      (**(code **)(*param_1 + 0x68))(param_1,0);
      if (local_58 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
        (**(code **)(*param_1 + 0x20))(param_1,0xfffffffe,local_58 + lVar2);
      }
    }
    return 0;
  }
  return 0xffffe672;
}


// ===== 007520d0  FUN_007520d0 =====

void FUN_007520d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007520e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}


// ===== 007520e4  FUN_007520e4 =====

void FUN_007520e4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007520f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 007520f8  FUN_007520f8 =====

undefined4 FUN_007520f8(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00752138  FUN_00752138 =====

undefined8 FUN_00752138(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00752160  FUN_00752160 =====

uint FUN_00752160(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
  return uVar1 & 1;
}


// ===== 00752188  FUN_00752188 =====

char * FUN_00752188(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
                   )

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *local_48;
  
  puVar10 = param_2 + 1;
  uVar9 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar9 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
  }
  if (uVar9 == 0) {
    pcVar7 = "FDE has zero length";
  }
  else if (*puVar10 == 0) {
    pcVar7 = "FDE is really a CIE";
  }
  else {
    lVar8 = (long)puVar10 - (ulong)*puVar10;
    if ((param_5 & 1) == 0) {
      pcVar7 = (char *)FUN_00752318(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00754170(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00754170(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_007544fc(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00754170(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00754170(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
        param_3[5] = uVar6;
      }
    }
    pcVar7 = (char *)0x0;
    param_3[2] = puVar10;
    param_3[3] = lVar3;
    *param_3 = param_2;
    param_3[1] = lVar8 - (long)param_2;
    param_3[4] = lVar4 + lVar3;
  }
  return pcVar7;
}


// ===== 00752318  FUN_00752318 =====

char * FUN_00752318(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *local_48;
  
  *(undefined2 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar10 = param_2 + 1;
  uVar13 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar13 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
    pbVar1 = (byte *)(uVar13 + (long)puVar10);
  }
  else {
    pbVar1 = (byte *)((long)puVar10 + uVar13);
  }
  if (uVar13 == 0) {
    pcVar9 = (char *)0x0;
  }
  else if (*puVar10 == 0) {
    uVar4 = puVar10[1];
    if (((byte)uVar4 & 0xfd) == 1) {
      pbVar18 = (byte *)((long)puVar10 + 5);
      pbVar11 = pbVar18;
      do {
        local_48 = pbVar11 + 1;
        bVar2 = *pbVar11;
        pbVar11 = local_48;
      } while (bVar2 != 0);
      uVar7 = FUN_007544fc(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_0099f8b0;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar16 = pbVar15 + 1;
        bVar2 = *pbVar15;
        pbVar11 = pbVar12 + 1;
        uVar3 = uVar13 & 0x3f;
        uVar13 = uVar13 + 7;
        uVar14 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar14;
        pbVar15 = pbVar16;
      } while ((char)bVar2 < '\0');
      uVar17 = (uint)(-1L << (uVar13 & 0x3f));
      if (0x38 < (int)uVar13 - 7U || bVar2 < 0x40) {
        uVar17 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar14 | uVar17;
      if ((byte)uVar4 == 1) {
        local_48 = pbVar12 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar16;
        bVar2 = *pbVar18;
      }
      else {
        local_48 = pbVar11;
        uVar6 = FUN_007544fc(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_007544fc(&local_48,pbVar1);
LAB_00752498:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00752538;
              goto LAB_0075257c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00752498;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00752538;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00752498;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00754170(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00752498;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00752498;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00752498;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00752498;
          }
        }
LAB_00752538:
        pbVar18 = pbVar18 + 1;
        goto LAB_00752498;
      }
LAB_0075257c:
      pcVar9 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_48;
    }
    else {
      pcVar9 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar9 = "CIE ID is not zero";
  }
  return pcVar9;
}


// ===== 007525e0  FUN_007525e0 =====

void FUN_007525e0(void)

{
  return;
}


// ===== 007525e8  FUN_007525e8 =====

void FUN_007525e8(void)

{
  return;
}


// ===== 007525f0  FUN_007525f0 =====

bool FUN_007525f0(undefined8 param_1,uint param_2)

{
  if (0xfffffffd < param_2) {
    return true;
  }
  if (0x5f < param_2) {
    return false;
  }
  if (param_2 == 0x22) {
    return true;
  }
  return param_2 - 0x40 < 0xffffffe1;
}


// ===== 00752634  FUN_00752634 =====

undefined8 FUN_00752634(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0099f8b0;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0075269c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00752690;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0075269c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00752690:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0075271c  FUN_0075271c =====

void FUN_0075271c(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0099f8b0;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00752784:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00752778;
    if (param_2 == 0x1d) {
      *(undefined8 *)(param_1 + 0xf8) = param_3;
      return;
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      *(undefined8 *)(param_1 + 0x100) = param_3;
      return;
    }
    if (param_2 == 0x1f) goto LAB_00752784;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00752778:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 00752804  FUN_00752804 =====

bool FUN_00752804(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00752818  FUN_00752818 =====

undefined1  [16] FUN_00752818(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00752828  FUN_00752828 =====

void FUN_00752828(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00752838  FUN_00752838 =====

ulong FUN_00752838(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [528];
  
  if ((char)param_1[0x4d] != '\0') {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x26a) == '\0') {
    lVar1 = param_1[1];
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar3 = FUN_00752d5c(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00752c3c(param_1,auStack_240);
    iVar2 = (int)uVar3;
  }
  if (iVar2 == 1) {
    uVar3 = uVar3 & 0xffffffff;
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] != '\0') {
      return 0;
    }
  }
  return uVar3;
}


// ===== 00752928  FUN_00752928 =====

void FUN_00752928(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) != '\0') {
    param_2[8] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x248);
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  uVar2 = *(undefined8 *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 0x238);
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  param_2[8] = *(undefined8 *)(param_1 + 0x260);
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return;
}


// ===== 0075296c  FUN_0075296c =====

void FUN_0075296c(long param_1)

{
  FUN_00755bec(param_1 + 0x10);
  return;
}


// ===== 00752978  FUN_00752978 =====

undefined1 FUN_00752978(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00752984  FUN_00752984 =====

undefined8 FUN_00752984(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 007529b0  FUN_007529b0 =====

void FUN_007529b0(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long local_6e0 [4];
  long local_6c0;
  int local_6a8;
  int iStack_6a4;
  undefined4 uStack_6a0;
  long local_690;
  long lStack_688;
  long local_680;
  undefined1 auStack_678 [16];
  long local_668;
  int *local_648;
  undefined1 *puStack_640;
  ulong local_638;
  
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x4d) = 1;
    return;
  }
  local_648 = (int *)param_1[1];
  puStack_640 = auStack_678;
  uVar7 = lVar3 - (param_2 & 1);
  local_638 = uVar7;
  iVar1 = dl_iterate_phdr(FUN_00755354,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00755080(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_009a6fb4);
    for (puVar6 = PTR_DAT_009a6e28; puVar6 < PTR_DAT_009a6e30; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_009a6fb4);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00752188(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_007531e4(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
          if ((uVar7 & 1) != 0) {
            param_1[0x49] = 0;
            param_1[0x46] = local_680;
            param_1[0x47] = local_6c0;
            param_1[0x48] = local_638 & 0xffffffff;
            *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x45] = lStack_688;
            param_1[0x44] = local_690;
            param_1[0x4c] = 0;
            param_1[0x4b] = CONCAT44(iStack_6a4,local_6a8);
            *(undefined4 *)((long)param_1 + 0x254) = uStack_6a0;
            return;
          }
        }
        goto LAB_00752b38;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_009a6fb4);
LAB_00752b38:
    lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    local_648 = &local_6a8;
    puStack_640 = (undefined1 *)0x8;
    local_6e0[1] = 8;
    local_6e0[0] = lVar3;
    uVar2 = getpid();
    lVar5 = syscall(0x10e,(ulong)uVar2,&local_648,1,local_6e0,1,0);
    if (((lVar5 != 8) || (local_6a8 != -0x2d7fee98)) || (iStack_6a4 != -0x2bffffff)) {
      *(undefined1 *)(param_1 + 0x4d) = 1;
      return;
    }
    param_1[0x4c] = 0;
    param_1[0x45] = lVar3 + 4;
    param_1[0x44] = lVar3;
    *(undefined1 *)((long)param_1 + 0x26a) = 1;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
  }
  return;
}


// ===== 00752c30  FUN_00752c30 =====

void FUN_00752c30(undefined8 param_1,undefined4 param_2)

{
  FUN_007559d4(param_2);
  return;
}


// ===== 00752c3c  FUN_00752c3c =====

undefined8 FUN_00752c3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x138);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x148);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x150);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x158);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x160);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x168);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x170);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x178);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x180);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x188);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 400);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x198);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x1c0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar1 + 0x1c8);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0x1d0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar1 + 0x1d8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0x1e0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar1 + 0x1e8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 0x1f0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0x1f8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 0x200);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar1 + 0x210);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar1 + 0x218);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar1 + 0x220);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar1 + 0x228);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x230);
  uVar2 = *(undefined8 *)(lVar1 + 0x238);
  *(undefined1 *)(param_1 + 0x269) = 1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  return 1;
}


// ===== 00752d5c  FUN_00752d5c =====

undefined8
FUN_00752d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int *piVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined1 auStack_b20 [288];
  ulong local_a00 [96];
  undefined1 auStack_700 [24];
  int local_6e8 [2];
  long local_6e0 [67];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 auStack_e8 [48];
  undefined1 local_b8;
  byte local_b6;
  char local_b4;
  undefined1 auStack_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar7 = FUN_00752188(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_007531e4(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00753e2c(param_1,auStack_700,param_4);
      if (((param_6 & 1) != 0) && (local_b4 != '\0')) {
        for (uVar12 = *(ulong *)((long)param_4 + 0xf8) & 0xfffffffffffffff0; uVar12 < uVar8;
            uVar12 = uVar12 + 0x10) {
        }
      }
      memcpy(local_a00 + 0x1e,param_4,0x210);
      uVar12 = 0;
      uVar14 = 0;
      piVar15 = local_6e8;
      puVar17 = local_a00 + 0x1e;
      local_a00[0x3d] = uVar8;
      do {
        puVar3 = PTR___sF_0099f8b0;
        iVar2 = *piVar15;
        if (iVar2 == 0) {
          uVar18 = local_a00[0x3d];
          uVar5 = local_a00[0x3b];
          uVar6 = local_a00[0x3c];
          uVar10 = local_a00[0x3f];
          if (uVar12 == local_b6) {
            if (local_b6 < 0x1f) {
              puVar13 = (undefined8 *)((long)param_4 + 0xe8);
              if ((local_b6 != 0x1d) &&
                 (puVar13 = (undefined8 *)((long)param_4 + 0xf0), local_b6 != 0x1e))
              goto LAB_0075303c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0075303c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                puVar13 = (undefined8 *)((long)param_4 + (ulong)local_b6 * 8);
              }
            }
            uVar14 = *puVar13;
          }
        }
        else {
          uVar16 = (uint)uVar12;
          if ((uVar16 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar18 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
LAB_00753148:
                  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n",
                          "getSavedFloatRegister","unsupported restore location for float register")
                  ;
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar18 = *(ulong *)(*(long *)(piVar15 + 2) + uVar8);
              }
            }
            else if (iVar2 == 5) {
              uVar18 = *(ulong *)((long)param_4 +
                                 ((*(long *)(piVar15 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
              ;
            }
            else {
              if (iVar2 != 6) goto LAB_00753148;
              puVar9 = (ulong *)FUN_007546c4(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00753f60(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00753f60(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00753f60(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_0099f8b0;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00753090;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00753090:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","setRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *puVar17 = uVar11;
                uVar18 = local_a00[0x3d];
                uVar5 = local_a00[0x3b];
                uVar6 = local_a00[0x3c];
                uVar10 = local_a00[0x3f];
              }
            }
          }
        }
        local_a00[0x3f] = uVar10;
        local_a00[0x3c] = uVar6;
        local_a00[0x3b] = uVar5;
        local_a00[0x3d] = uVar18;
        uVar12 = uVar12 + 1;
        piVar15 = piVar15 + 4;
        puVar17 = puVar17 + 1;
        if (uVar12 == 0x60) {
          *param_5 = local_b8;
          memcpy(auStack_b20,param_4,0x210);
          uStack_78 = uStack_4c0;
          local_80 = local_4c8;
          uVar4 = local_80;
          local_80._0_4_ = (int)local_4c8;
          bVar1 = (int)local_80 != 0;
          if (bVar1) {
            local_80 = uVar4;
            FUN_00753f60(param_1,auStack_b20,uVar8,&local_80);
          }
          local_a00[0x3e] = uVar14;
          memcpy(param_4,local_a00 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


// ===== 007531e4  FUN_007531e4 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_007531e4(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 auStack_6e0 [4];
  int local_6dc;
  byte **local_6d8;
  undefined8 *puStack_6d0;
  undefined8 local_6c8;
  undefined8 *local_6c0;
  byte *apbStack_6a0 [193];
  ulong local_98 [7];
  
  puVar6 = (undefined8 *)auStack_6e0;
  lVar20 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6c8 = param_1;
  local_6c0 = (undefined8 *)0x0;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6d8 = apbStack_6a0 + 0x44;
  puStack_6d0 = (undefined8 *)(param_6 + 0x8e);
  while( true ) {
    pbVar21 = *(byte **)((long)local_98 + lVar20);
    pbVar2 = *(byte **)((long)local_98 + lVar20 + 8);
    uVar16 = *(ulong *)((long)local_98 + lVar20 + 0x10);
    apbStack_6a0[0xc0] = pbVar21;
    if (pbVar21 < pbVar2 && uVar16 != 0) break;
LAB_00753268:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00753298:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_0099f8b0;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00753b6c;
  case 1:
    uVar17 = FUN_00754170(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00753720;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00753720;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00753720:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
      goto LAB_00753d1c;
    }
    puVar12 = param_6 + uVar19 * 4;
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    lVar8 = lVar8 * iVar13;
LAB_007536bc:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00753c0c:
      __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
      __size = 0x47;
      goto LAB_00753d1c;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00753b4c:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00753b6c;
  case 7:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00753d10:
      __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
      __size = 0x40;
      goto LAB_00753d1c;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 8:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00753cf4:
      __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
      __size = 0x41;
      goto LAB_00753d1c;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 0;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 9:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
      goto LAB_00753d1c;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00753d10;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    *(ulong *)(param_6 + uVar19 * 4 + 8) = uVar14;
    param_6[uVar19 * 4 + 6] = 5;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 10:
    puVar18 = (undefined8 *)((long)puVar6 + 0xfffffffffffff9e0);
    *puVar18 = local_6c0;
    memcpy((undefined1 *)((long)puVar6 + 0xfffffffffffff9e8),param_6,0x618);
    local_6c0 = puVar18;
    puVar6 = puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xb:
    if (local_6c0 == (undefined8 *)0x0) {
      return 0;
    }
    memcpy(param_6,local_6c0 + 1,0x618);
    local_6c0 = (undefined8 *)*puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xc:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
      goto LAB_00753d1c;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00753c0c;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00753aa0;
  case 0x10:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00753cf4;
    }
    puVar12 = param_6 + uVar19 * 4;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar7 = 6;
LAB_00753a98:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00753aa0:
    lVar8 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0099f8b0;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
      goto LAB_00753d1c;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    puVar12 = param_6 + uVar19 * 4;
    uVar15 = -1L << (uVar14 & 0x3f);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
      uVar15 = 0;
    }
    apbStack_6a0[0xc0] = pbVar21;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar11 = uVar11 | uVar15;
    uVar7 = 2;
LAB_00753a2c:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0099f8b0;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar21;
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
      goto LAB_00753cf4;
    }
    iVar13 = *(int *)((long)param_3 + 0x2c);
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    *param_6 = (int)uVar14;
    param_6[1] = iVar13 * ((uint)uVar11 | uVar9);
    break;
  case 0x13:
    uVar19 = 0;
    uVar14 = 0;
    pbVar21 = pbVar10;
    do {
      if (pbVar21 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar21;
      pbVar10 = pbVar10 + 1;
      uVar11 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar14 = ((ulong)bVar3 & 0x7f) << uVar11 | uVar14;
      pbVar21 = pbVar21 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar10;
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar14 | uVar9);
    pbVar21 = pbVar10;
    break;
  case 0x14:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00753d24;
    }
    lVar8 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 4;
    *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x15:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0099f8b0;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar3 = *pbVar10;
        pbVar21 = pbVar21 + 1;
        uVar15 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
        pbVar10 = pbVar10 + 1;
      } while ((char)bVar3 < '\0');
      puVar12 = param_6 + uVar19 * 4;
      uVar15 = -1L << (uVar14 & 0x3f);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
        uVar15 = 0;
      }
      apbStack_6a0[0xc0] = pbVar21;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar11 = uVar11 | uVar15;
      uVar7 = 4;
      goto LAB_00753a2c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
    goto LAB_00753d1c;
  case 0x16:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      puVar12 = param_6 + uVar19 * 4;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar7 = 7;
      goto LAB_00753a98;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
    goto LAB_00753d1c;
  default:
    bVar1 = bVar3 & 0xc0;
    uVar19 = (ulong)bVar3 & 0x3f;
    if (bVar1 == 0x40) {
      uVar17 = uVar17 + (uint)((int)param_3[5] * (int)uVar19);
      pbVar21 = pbVar10;
    }
    else {
      if (bVar1 == 0xc0) {
        cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
        goto joined_r0x00753b4c;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
        apbStack_6a0[uVar19 * 2] = pbVar21;
        *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      }
      param_6[uVar19 * 4 + 6] = 2;
      *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
      param_5 = local_6dc;
      pbVar21 = apbStack_6a0[0xc0];
    }
    break;
  case 0x2d:
    if (param_5 != 4) goto code_r0x00753b6c;
    if (*(char *)(param_6 + 0x8f) == '\0') {
      pbVar10 = (byte *)puStack_6d0[1];
      pbVar21 = (byte *)*puStack_6d0;
      *(undefined1 *)(param_6 + 0x8f) = 1;
      local_6d8[1] = pbVar10;
      *local_6d8 = pbVar21;
    }
    *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2e:
    uVar7 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_007544fc(apbStack_6a0 + 0xc0,pbVar2);
      puVar12 = param_6 + uVar19 * 4;
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      lVar8 = -(lVar8 * iVar13);
      goto LAB_007536bc;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_0099f8b0 + 0x130);
LAB_00753d1c:
    fwrite(__ptr,__size,1,__s);
LAB_00753d24:
    fflush((FILE *)(PTR___sF_0099f8b0 + 0x130));
    return 0;
  }
joined_r0x00753654:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00753268;
  goto LAB_00753298;
code_r0x00753b6c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x00753654;
}


// ===== 00753e2c  FUN_00753e2c =====

long FUN_00753e2c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_0099f8b0;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00753e6c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00753eb0;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_007546c4(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
        return lVar3;
      }
      if (uVar1 == 0x1d) {
        return *(long *)(param_3 + 0xe8) + (long)(int)param_2[1];
      }
    }
  }
  else if ((int)uVar1 < 0x20) {
    if (uVar1 == 0x1e) {
      return *(long *)(param_3 + 0xf0) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x1f) goto LAB_00753e6c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00753eb0:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00753f60  FUN_00753f60 =====

undefined8 FUN_00753f60(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_0099f8b0;
  iVar1 = *param_4;
  if (iVar1 < 5) {
    if (iVar1 == 1) {
      return 0;
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
    }
  }
  else {
    if (iVar1 == 5) {
      uVar5 = (uint)*(ulong *)(param_4 + 2);
      if ((int)uVar5 < 0x1e) {
        if (uVar5 == 0xfffffffe) {
LAB_0075409c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00754084;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0075409c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00754084:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_007546c4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_007546c4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00754170  FUN_00754170 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00754170(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  puVar3 = PTR___sF_0099f8b0;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_007542bc;
      if (uVar1 != 1) {
LAB_007544c8:
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_007544fc(param_2,param_3);
      puVar3 = PTR___sF_0099f8b0;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_0099f8b0;
    }
    else {
      if (uVar1 != 3) goto LAB_007544c8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_0099f8b0;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_007542bc:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_0099f8b0;
    }
    else {
      if (uVar1 != 9) goto LAB_007544c8;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar2 = (byte)*puVar9;
        puVar6 = (ulong *)((long)puVar6 + 1);
        uVar8 = uVar7 & 0x3f;
        uVar7 = uVar7 + 7;
        uVar5 = ((ulong)bVar2 & 0x7f) << uVar8 | uVar5;
        puVar9 = (ulong *)((long)puVar9 + 1);
      } while ((char)bVar2 < '\0');
      *param_2 = (long)puVar6;
      uVar8 = -1L << (uVar7 & 0x3f);
      if (0x38 < (int)uVar7 - 7U || bVar2 < 0x40) {
        uVar8 = 0;
      }
      puVar4 = (undefined8 *)(uVar5 | uVar8);
      puVar3 = PTR___sF_0099f8b0;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_0099f8b0;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_007544c8;
      goto LAB_007542bc;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_0099f8b0;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_0099f8b0 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00754494;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00754348:
    if ((param_4 >> 7 & 1) != 0) {
      return (undefined8 *)*puVar4;
    }
    return puVar4;
  }
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)((long)puVar4 + param_5);
      goto LAB_00754348;
    }
    if (uVar1 == 2) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_textrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar1 == 4) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_funcrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar1 == 5) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_aligned pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_00754494:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007544fc  FUN_007544fc =====

ulong FUN_007544fc(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_0099f8b0;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0075452c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0075452c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0075452c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0075452c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0075452c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0075452c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0075452c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0075452c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0075452c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0075465c;
                      }
                      fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n",
                              "getULEB128","malformed uleb128 expression");
                      fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0075465c:
  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007546c4  FUN_007546c4 =====

ulong FUN_007546c4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong *puVar19;
  undefined1 auVar20 [16];
  ulong auStack_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_007544fc(&local_68,param_1 + 0x14);
  auStack_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar19 = auStack_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = local_68;
    do {
      puVar9 = PTR___sF_0099f8b0;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00754f40:
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = (uint)bVar8;
      puVar14 = puVar4;
      switch(uVar10) {
      case 3:
      case 0xe:
      case 0xf:
        uVar16 = *(ulong *)(pbVar18 + 1);
        local_68 = pbVar18 + 9;
        goto LAB_00754bac;
      case 4:
      case 5:
      case 7:
        goto code_r0x00754f40;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_00754b3c:
        *puVar19 = *puVar14;
        goto LAB_00754748;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00754b10;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00754b10:
        local_68 = pbVar18 + 2;
        goto LAB_00754bac;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00754bac;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00754bac;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00754bac;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00754bac;
      case 0x10:
        uVar16 = FUN_007544fc(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00754748;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        puVar19 = puVar19 + 1;
        *puVar19 = uVar12 | uVar17;
        goto LAB_00754748;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00754744;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00754748;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00754744;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_00754bac:
LAB_00754744:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00754748;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00754748;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00754748;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00754748;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_00754ce4;
        goto LAB_00754748;
      case 0x1a:
        uVar16 = puVar19[-1] & *puVar19;
        break;
      case 0x1b:
        uVar16 = 0;
        if (*puVar19 != 0) {
          uVar16 = (long)puVar19[-1] / (long)*puVar19;
        }
        break;
      case 0x1c:
        uVar16 = puVar19[-1] - *puVar19;
        break;
      case 0x1d:
        uVar16 = *puVar19;
        lVar11 = 0;
        if (uVar16 != 0) {
          lVar11 = (long)puVar19[-1] / (long)uVar16;
        }
        uVar16 = puVar19[-1] - lVar11 * uVar16;
        break;
      case 0x1e:
        uVar16 = puVar19[-1] * *puVar19;
        break;
      case 0x1f:
        uVar16 = *puVar19;
LAB_00754ce4:
        *puVar19 = -uVar16;
        goto LAB_00754748;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00754748;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_007544fc(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00754748;
      case 0x24:
        uVar16 = puVar19[-1] << (*puVar19 & 0x3f);
        break;
      case 0x25:
        uVar16 = puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x26:
        uVar16 = (long)puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x27:
        uVar16 = puVar19[-1] ^ *puVar19;
        break;
      case 0x28:
        puVar14 = puVar19 + -1;
        uVar16 = *puVar19;
        local_68 = pbVar18 + 3;
        puVar19 = puVar14;
        if (uVar16 != 0) {
          local_68 = pbVar18 + 3 + *(short *)(pbVar18 + 1);
        }
        goto LAB_00754748;
      case 0x29:
        uVar16 = (ulong)(puVar19[-1] == *puVar19);
        break;
      case 0x2a:
        uVar16 = (ulong)(*puVar19 <= puVar19[-1]);
        break;
      case 0x2b:
        uVar16 = (ulong)(*puVar19 < puVar19[-1]);
        break;
      case 0x2c:
        uVar16 = (ulong)(puVar19[-1] <= *puVar19);
        break;
      case 0x2d:
        uVar16 = (ulong)(puVar19[-1] < *puVar19);
        break;
      case 0x2e:
        uVar16 = (ulong)(puVar19[-1] != *puVar19);
        break;
      case 0x2f:
        local_68 = pbVar18 + (long)*(short *)(pbVar18 + 1) + 3;
        goto LAB_00754748;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00754744;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        if (((uVar15 != 0x6f) && (puVar14 = puVar1, bVar8 != 0x6e)) &&
           (puVar14 = puVar2, bVar8 != 0x6d)) {
          puVar14 = (ulong *)(param_3 + (ulong)(uVar15 - 0x50) * 8);
        }
        goto LAB_00754740;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar7 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar7 < 0x40) {
          uVar17 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar14 = puVar5, bVar8 != 0x6f)) &&
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00754880;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00754880:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)(uVar10 - 0x70) * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00754880;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00754744;
      case 0x90:
        uVar10 = FUN_007544fc(&local_68,pbVar6);
        puVar9 = PTR___sF_0099f8b0;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00754de4;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00754de4:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00754de4;
        }
LAB_00754740:
        uVar16 = *puVar14;
        goto LAB_00754744;
      case 0x91:
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_007544fc(&local_68,pbVar6);
        puVar9 = PTR___sF_0099f8b0;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar13;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar13 = pbVar13 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar18;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00754e0c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00754e0c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00754e0c;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00754744;
      case 0x93:
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar18 + 2;
        puVar14 = (ulong *)*puVar19;
        bVar8 = pbVar18[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar19 = (ulong)(byte)*puVar14;
          }
          else {
            if (bVar8 != 2) {
LAB_00754fe4:
              fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n",
                      "evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar19 = (ulong)(ushort)*puVar14;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto LAB_00754fe4;
            goto LAB_00754b3c;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00754748;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00754748:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00755080  FUN_00755080 =====

undefined8 FUN_00755080(long param_1,ulong param_2,long *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  undefined *__src;
  ulong uVar3;
  undefined *__dest;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [16];
  uint local_670;
  
  if (((param_4 == 0) ||
      (uVar3 = FUN_007555a8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00755770(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_009a6fb4);
    if (PTR_DAT_009a6e28 < PTR_DAT_009a6e30) {
      plVar4 = (long *)PTR_DAT_009a6e28;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00755188;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_009a6e30);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00755188;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_009a6e30);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_009a6fb4);
    goto LAB_007551d0;
  }
LAB_007551f0:
  bVar2 = 1;
LAB_007551f4:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_007531e4(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  bVar1 = (bool)(bVar2 ^ 1);
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  if (param_4 != 0) {
    bVar1 = true;
  }
  *(long *)(param_1 + 600) = local_6b0;
  *(long *)(param_1 + 0x260) = lVar5;
  if (!bVar1) {
    if (param_3[4] == 0) {
      lVar5 = *param_3;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_009a6fb4);
      __src = PTR_DAT_009a6e28;
      if (PTR_DAT_009a6e38 <= PTR_DAT_009a6e30) {
        __n = (long)PTR_DAT_009a6e38 - (long)PTR_DAT_009a6e28;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_009a6ff0) {
          free(__src);
        }
        PTR_DAT_009a6e38 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_009a6e30 = __dest + __n;
        PTR_DAT_009a6e28 = __dest;
      }
      *(long *)PTR_DAT_009a6e30 = lVar5;
      *(long *)((long)PTR_DAT_009a6e30 + 8) = local_698;
      *(long *)((long)PTR_DAT_009a6e30 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_009a6e30 + 0x10) = local_690;
      PTR_DAT_009a6e30 = (undefined *)((long)PTR_DAT_009a6e30 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_009a6fb4);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00755188:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_009a6fb4);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_007555a8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_007551f4;
  }
LAB_007551d0:
  uVar3 = FUN_007555a8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_007551f0;
}


// ===== 00755354  FUN_00755354 =====

undefined8 FUN_00755354(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_70 [4];
  
  uVar12 = (ulong)(ushort)param_1[3];
  if (uVar12 != 0) {
    uVar6 = param_3[2];
    uVar13 = *param_1;
    if (uVar13 <= uVar6) {
      uVar5 = uVar12;
      piVar10 = (int *)param_1[2];
      do {
        if (((*piVar10 == 1) && (uVar1 = *(long *)(piVar10 + 4) + uVar13, uVar1 <= uVar6)) &&
           (uVar11 = *(ulong *)(piVar10 + 10), uVar6 < uVar11 + uVar1)) {
          puVar7 = (ulong *)param_3[1];
          uVar6 = uVar12 + 0xffffffff;
          *puVar7 = uVar1;
          puVar7[1] = uVar11;
          do {
            if (*(int *)(param_1[2] + (uVar6 & 0xffffffff) * 0x38) == 0x6474e550) {
              lVar8 = param_1[2] + (uVar6 & 0xffffffff) * 0x38;
              uVar2 = *param_3;
              lVar3 = param_3[1];
              lVar9 = *(long *)(lVar8 + 0x28);
              lVar8 = *(long *)(lVar8 + 0x10) + uVar13;
              *(long *)(lVar3 + 0x20) = lVar8;
              *(long *)(lVar3 + 0x28) = lVar9;
              uVar5 = FUN_00755488(uVar2,lVar8,lVar9 + lVar8,local_70);
              if ((uVar5 & 1) != 0) {
                lVar8 = param_3[1];
                *(undefined8 *)(lVar8 + 0x10) = local_70[0];
                *(undefined8 *)(lVar8 + 0x18) = 0xffffffffffffffff;
                return 1;
              }
            }
            uVar4 = (int)uVar12 - 1;
            uVar12 = (ulong)uVar4;
            uVar6 = uVar6 - 1;
          } while ((uVar4 & 0xffff) != 0);
          return 0;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 0xe;
      } while (uVar5 != 0);
    }
  }
  return 0;
}


// ===== 00755488  FUN_00755488 =====

undefined8 FUN_00755488(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_0099f8b0;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00754170(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00754170(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 007555a8  FUN_007555a8 =====

undefined8
FUN_007555a8(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *local_68;
  
  puVar9 = (uint *)(param_4 + (long)param_3);
  puVar1 = param_3;
  if (param_5 != (uint *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar9 = (uint *)0xffffffffffffffff;
  }
  while( true ) {
    puVar3 = puVar1;
    if (puVar9 <= puVar3) {
      return 0;
    }
    local_68 = puVar3 + 1;
    uVar8 = (ulong)*puVar3;
    if (*puVar3 == 0xffffffff) {
      uVar8 = *(ulong *)(puVar3 + 1);
      local_68 = puVar3 + 3;
    }
    if (uVar8 == 0) break;
    puVar1 = (uint *)((long)local_68 + uVar8);
    if ((((*local_68 != 0) &&
         (puVar7 = (uint *)((long)local_68 - (ulong)*local_68), param_3 <= puVar7)) &&
        (puVar7 < puVar9)) && (lVar4 = FUN_00752318(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00754170(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00754170(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_007544fc(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00754170(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00754170(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
            param_6[5] = uVar6;
          }
        }
        param_6[2] = puVar9;
        param_6[3] = uVar8;
        *param_6 = puVar3;
        param_6[1] = (long)puVar1 - (long)puVar3;
        param_6[4] = lVar4 + uVar8;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 00755770  FUN_00755770 =====

undefined8
FUN_00755770(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  long local_70;
  undefined1 local_68;
  
  lVar4 = param_3 + (param_4 & 0xffffffff);
  uVar1 = FUN_00755488(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_007558d8(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00754170(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00754170(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00754170(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00752188(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 007558d8  FUN_007558d8 =====

undefined8 FUN_007558d8(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0099f8b0;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_007559a0:
        fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
                "Can\'t binary search on variable length encoded data.");
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_1 == 3) {
        return 8;
      }
      if (param_1 == 4) {
        return 0x10;
      }
    }
  }
  else if (param_1 < 0xb) {
    if (param_1 == 10) {
      return 4;
    }
    if (param_1 == 9) goto LAB_007559a0;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007559d4  FUN_007559d4 =====

char * FUN_007559d4(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_0046d1b4 + *(int *)(&DAT_0046d1b4 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00755a04  FUN_00755a04 =====

void FUN_00755a04(void)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0099f8b0;
  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","_Unwind_GetDataRelBase",
          "_Unwind_GetDataRelBase() not implemented");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00755a48  FUN_00755a48 =====

void FUN_00755a48(void)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0099f8b0;
  fprintf((FILE *)(PTR___sF_0099f8b0 + 0x130),"libunwind: %s - %s\n","_Unwind_GetTextRelBase",
          "_Unwind_GetTextRelBase() not implemented");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00755a8c  FUN_00755a8c =====

undefined8 FUN_00755a8c(undefined8 param_1)

{
  int iVar1;
  undefined8 local_4e8 [9];
  undefined1 auStack_4a0 [528];
  undefined1 auStack_290 [624];
  
  FUN_00755c7c(auStack_4a0);
  FUN_00751ec0(auStack_290,auStack_4a0);
  FUN_00751fe4(auStack_290,0xffffffff,param_1);
  iVar1 = FUN_007520f8(auStack_290,local_4e8);
  if (iVar1 != 0) {
    local_4e8[0] = 0;
  }
  return local_4e8[0];
}


// ===== 00755af4  FUN_00755af4 =====

undefined8 FUN_00755af4(code *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4b0 [528];
  undefined1 auStack_2a0 [624];
  
  FUN_00755c7c(auStack_4b0);
  FUN_00751ec0(auStack_2a0,auStack_4b0);
  do {
    iVar1 = FUN_007520d0(auStack_2a0);
    if (iVar1 < 1) {
      return 5;
    }
    uVar2 = (*param_1)(auStack_2a0,param_2);
  } while ((int)uVar2 == 0);
  return uVar2;
}


// ===== 00755b7c  FUN_00755b7c =====

undefined8 FUN_00755b7c(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00751f68(param_1,0xfffffffe,&local_18);
  return local_18;
}


// ===== 00755bac  FUN_00755bac =====

void FUN_00755bac(undefined8 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00752160();
  *param_2 = (uint)(0 < iVar1);
  FUN_00751e80(param_1);
  return;
}


// ===== 00755bec  FUN_00755bec =====

undefined1  [16] FUN_00755bec(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00755c7c  FUN_00755c7c =====

undefined8
FUN_00755c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17)

{
  undefined8 in_x9;
  undefined8 in_x10;
  undefined8 in_x11;
  undefined8 in_x12;
  undefined8 in_x13;
  undefined8 in_x14;
  undefined8 in_x15;
  undefined8 in_x16;
  undefined8 in_x17;
  undefined8 in_x18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  *(long *)param_10 = param_10;
  *(undefined8 *)(param_10 + 8) = param_11;
  *(undefined8 *)(param_10 + 0x10) = param_12;
  *(undefined8 *)(param_10 + 0x18) = param_13;
  *(undefined8 *)(param_10 + 0x20) = param_14;
  *(undefined8 *)(param_10 + 0x28) = param_15;
  *(undefined8 *)(param_10 + 0x30) = param_16;
  *(undefined8 *)(param_10 + 0x38) = param_17;
  *(undefined8 *)(param_10 + 0x40) = param_1;
  *(undefined8 *)(param_10 + 0x48) = in_x9;
  *(undefined8 *)(param_10 + 0x50) = in_x10;
  *(undefined8 *)(param_10 + 0x58) = in_x11;
  *(undefined8 *)(param_10 + 0x60) = in_x12;
  *(undefined8 *)(param_10 + 0x68) = in_x13;
  *(undefined8 *)(param_10 + 0x70) = in_x14;
  *(undefined8 *)(param_10 + 0x78) = in_x15;
  *(undefined8 *)(param_10 + 0x80) = in_x16;
  *(undefined8 *)(param_10 + 0x88) = in_x17;
  *(undefined8 *)(param_10 + 0x90) = in_x18;
  *(undefined8 *)(param_10 + 0x98) = unaff_x19;
  *(undefined8 *)(param_10 + 0xa0) = unaff_x20;
  *(undefined8 *)(param_10 + 0xa8) = unaff_x21;
  *(undefined8 *)(param_10 + 0xb0) = unaff_x22;
  *(undefined8 *)(param_10 + 0xb8) = unaff_x23;
  *(undefined8 *)(param_10 + 0xc0) = unaff_x24;
  *(undefined8 *)(param_10 + 200) = unaff_x25;
  *(undefined8 *)(param_10 + 0xd0) = unaff_x26;
  *(undefined8 *)(param_10 + 0xd8) = unaff_x27;
  *(undefined8 *)(param_10 + 0xe0) = unaff_x28;
  *(undefined8 *)(param_10 + 0xe8) = unaff_x29;
  *(undefined8 *)(param_10 + 0xf0) = unaff_x30;
  *(BADSPACEBASE **)(param_10 + 0xf8) = register0x00000008;
  *(undefined8 *)(param_10 + 0x100) = unaff_x30;
  *(undefined8 *)(param_10 + 0x110) = param_2;
  *(undefined8 *)(param_10 + 0x118) = param_3;
  *(undefined8 *)(param_10 + 0x120) = param_4;
  *(undefined8 *)(param_10 + 0x128) = param_5;
  *(undefined8 *)(param_10 + 0x130) = param_6;
  *(undefined8 *)(param_10 + 0x138) = param_7;
  *(undefined8 *)(param_10 + 0x140) = param_8;
  *(undefined8 *)(param_10 + 0x148) = param_9;
  *(undefined8 *)(param_10 + 0x150) = unaff_d8;
  *(undefined8 *)(param_10 + 0x158) = unaff_d9;
  *(undefined8 *)(param_10 + 0x160) = unaff_d10;
  *(undefined8 *)(param_10 + 0x168) = unaff_d11;
  *(undefined8 *)(param_10 + 0x170) = unaff_d12;
  *(undefined8 *)(param_10 + 0x178) = unaff_d13;
  *(undefined8 *)(param_10 + 0x180) = unaff_d14;
  *(undefined8 *)(param_10 + 0x188) = unaff_d15;
  *(undefined8 *)(param_10 + 400) = in_d16;
  *(undefined8 *)(param_10 + 0x198) = in_d17;
  *(undefined8 *)(param_10 + 0x1a0) = in_d18;
  *(undefined8 *)(param_10 + 0x1a8) = in_d19;
  *(undefined8 *)(param_10 + 0x1b0) = in_d20;
  *(undefined8 *)(param_10 + 0x1b8) = in_d21;
  *(undefined8 *)(param_10 + 0x1c0) = in_d22;
  *(undefined8 *)(param_10 + 0x1c8) = in_d23;
  *(undefined8 *)(param_10 + 0x1d0) = in_d24;
  *(undefined8 *)(param_10 + 0x1d8) = in_d25;
  *(undefined8 *)(param_10 + 0x1e0) = in_d26;
  *(undefined8 *)(param_10 + 0x1e8) = in_d27;
  *(undefined8 *)(param_10 + 0x1f0) = in_d28;
  *(undefined8 *)(param_10 + 0x1f8) = in_d29;
  *(undefined8 *)(param_10 + 0x200) = in_d30;
  *(undefined8 *)(param_10 + 0x208) = in_d31;
  return 0;
}


// ===== 00755d18  facebook::react::NativeDiscordMarkdownSpecJSI::NativeDiscordMarkdownSpecJSI =====

/* facebook::react::NativeDiscordMarkdownSpecJSI::NativeDiscordMarkdownSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDiscordMarkdownSpecJSI::NativeDiscordMarkdownSpecJSI
          (NativeDiscordMarkdownSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  uint uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097c760;
  uStack_4f = uStack_4f & 0xffffff00;
  local_60 = 0x20;
  uStack_57 = (undefined7)s_parseToAstString_0036c9b1._8_8_;
  cStack_50 = SUB81(s_parseToAstString_0036c9b1._8_8_,7);
  local_5f[0] = s_parseToAstString_0036c9b1[0];
  local_5f[1] = s_parseToAstString_0036c9b1[1];
  local_5f[2] = s_parseToAstString_0036c9b1[2];
  local_5f[3] = s_parseToAstString_0036c9b1[3];
  local_5f[4] = s_parseToAstString_0036c9b1[4];
  local_5f[5] = s_parseToAstString_0036c9b1[5];
  local_5f[6] = s_parseToAstString_0036c9b1[6];
  local_5f[7] = s_parseToAstString_0036c9b1[7];
                    /* try { // try from 00755d74 to 00755d8f has its CatchHandler @ 00755e44 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(code **)(lVar2 + 0x30) = FUN_00755e7c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x676e6972;
  uStack_57 = (undefined7)s_unparseFromAstString_0036d6fd._8_8_;
  cStack_50 = SUB81(s_unparseFromAstString_0036d6fd._8_8_,7);
  local_5f[0] = s_unparseFromAstString_0036d6fd[0];
  local_5f[1] = s_unparseFromAstString_0036d6fd[1];
  local_5f[2] = s_unparseFromAstString_0036d6fd[2];
  local_5f[3] = s_unparseFromAstString_0036d6fd[3];
  local_5f[4] = s_unparseFromAstString_0036d6fd[4];
  local_5f[5] = s_unparseFromAstString_0036d6fd[5];
  local_5f[6] = s_unparseFromAstString_0036d6fd[6];
  local_5f[7] = s_unparseFromAstString_0036d6fd[7];
                    /* try { // try from 00755de0 to 00755dfb has its CatchHandler @ 00755e40 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00755fc8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00755e7c  FUN_00755e7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00755e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x20;
  uStack_57 = (undefined7)s_parseToAstString_0036c9b1._8_8_;
  cStack_50 = SUB81(s_parseToAstString_0036c9b1._8_8_,7);
  local_5f = (char  [8])s_parseToAstString_0036c9b1._0_8_;
  uStack_4f = 0;
                    /* try { // try from 00755ed0 to 00755ed7 has its CatchHandler @ 00755f98 */
  local_70 = (char *)operator_new(0x50);
  uVar4 = s_Double__Lj_0036d05a._0_8_;
  uVar3 = s_ring_Ljava_lang__0036d04a._0_8_;
  uVar2 = CONCAT62(s_ava_lang_String__0036d064._0_6_,s_Double__Lj_0036d05a._8_2_);
  uStack_78 = _UNK_00372248;
  local_80 = _s_Q_00372240;
  *(undefined8 *)(local_70 + 0x28) = s_ring_Ljava_lang__0036d04a._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar3;
  *(undefined8 *)(local_70 + 0x38) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar3 = s_ava_lang_String__0036d064._8_8_;
  uVar2 = CONCAT26(s_ava_lang_String__0036d064._6_2_,s_ava_lang_String__0036d064._0_6_);
  local_70[0x4a] = '\0';
  *(undefined8 *)(local_70 + 0x42) = uVar3;
  *(undefined8 *)(local_70 + 0x3a) = uVar2;
  uVar4 = s_ng_Ljava_lang_St_0036d03a._8_8_;
  uVar3 = s_ng_Ljava_lang_St_0036d03a._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036d02a._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036d02a._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 00755f0c to 00755f37 has its CatchHandler @ 00755f80 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,3,&local_60,&local_80,param_4,param_5,&DAT_009a77f0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_4e,CONCAT11(uStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00755fc8  FUN_00755fc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00755fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x676e6972;
  uStack_57 = (undefined7)s_unparseFromAstString_0036d6fd._8_8_;
  cStack_50 = SUB81(s_unparseFromAstString_0036d6fd._8_8_,7);
  local_5f = (char  [8])s_unparseFromAstString_0036d6fd._0_8_;
                    /* try { // try from 00756028 to 0075602f has its CatchHandler @ 007560e8 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_ng__Ljava_lang_00366141._0_8_;
  uVar4 = s__Ljava_lang_Stri_00366131._0_8_;
  uVar2 = CONCAT26(s__String__0036614f._0_2_,s_ng__Ljava_lang_00366141._8_6_);
  uVar3 = CONCAT62(s__String__0036614f._2_6_,s__String__0036614f._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_00366131._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 0075605c to 00756087 has its CatchHandler @ 007560d0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,3,&local_60,&local_80,param_4,param_5,&DAT_009a77f8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00756118  facebook::react::RNDiscordMarkdownSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNDiscordMarkdownSpec_ModuleProvider */

void __rustcall
facebook::react::RNDiscordMarkdownSpec_ModuleProvider
          (undefined8 *param_1,byte *param_2,InitParams *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0xf) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    if (*(long *)pbVar4 == 0x4d64726f63736944 && *(long *)(pbVar4 + 7) == 0x6e776f646b72614d) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0097c7b8;
                    /* try { // try from 007561c0 to 007561cb has its CatchHandler @ 007561d4 */
      NativeDiscordMarkdownSpecJSI::NativeDiscordMarkdownSpecJSI
                ((NativeDiscordMarkdownSpecJSI *)(puVar3 + 3),param_3);
      *param_1 = (NativeDiscordMarkdownSpecJSI *)(puVar3 + 3);
      param_1[1] = puVar3;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007561f0  FUN_007561f0 =====

void FUN_007561f0(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00756214  FUN_00756214 =====

void FUN_00756214(Value *param_1,long *param_2,IRuntime *param_3,undefined8 param_4)

{
  long lVar1;
  IRuntime aIStack_70 [16];
  undefined8 *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x28))();
  if ((param_2[0x10] != 0) && (*(int *)param_1 != 0)) {
                    /* try { // try from 0075626c to 00756277 has its CatchHandler @ 0075633c */
    (**(code **)(*(long *)param_3 + 0x228))(aIStack_70,param_3);
                    /* try { // try from 00756278 to 00756287 has its CatchHandler @ 0075632c */
    facebook::jsi::Value::asObject(aIStack_70);
                    /* try { // try from 00756288 to 00756297 has its CatchHandler @ 00756310 */
    facebook::jsi::Value::Value(aVStack_58,param_3,param_1);
                    /* try { // try from 007562a0 to 007562b3 has its CatchHandler @ 00756300 */
    (**(code **)(*(long *)param_3 + 0x1b0))(param_3,&local_60,param_4,aVStack_58);
    facebook::jsi::Value::~Value(aVStack_58);
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)();
    }
    facebook::jsi::Value::~Value((Value *)aIStack_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00756364  FUN_00756364 =====

void FUN_00756364(ulong *param_1,long param_2,long *param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 007563ac to 007563b3 has its CatchHandler @ 00756600 */
  FUN_00757368(param_1,uVar5);
  plVar13 = *(long **)(param_2 + 0x40);
  do {
    if (plVar13 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
LAB_0075664c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
    lVar14 = (long)plVar13 + 0x11;
    if ((*(byte *)(plVar13 + 2) & 1) != 0) {
      uVar7 = plVar13[3];
      lVar14 = plVar13[4];
    }
                    /* try { // try from 00756400 to 0075640b has its CatchHandler @ 00756624 */
    (**(code **)(*param_3 + 0xa0))(&local_70,param_3,lVar14,uVar7);
    plVar12 = (long *)param_1[1];
    if (plVar12 < (long *)param_1[2]) {
      *plVar12 = (long)local_70;
      param_1[1] = (ulong)(plVar12 + 1);
    }
    else {
      plVar16 = (long *)*param_1;
      lVar14 = (long)plVar12 - (long)plVar16 >> 3;
      uVar7 = lVar14 + 1;
      if (uVar7 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007565e0 to 007565ff has its CatchHandler @ 00756608 */
          FUN_00757544(param_1);
LAB_007565e8:
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00756920();
          }
        }
        goto LAB_0075664c;
      }
      uVar6 = (long)param_1[2] - (long)plVar16;
      uVar9 = (long)uVar6 >> 2;
      if (uVar9 <= uVar7) {
        uVar9 = uVar7;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (uVar9 >> 0x3d != 0) goto LAB_007565e8;
                    /* try { // try from 0075645c to 0075645f has its CatchHandler @ 00756604 */
        pvVar4 = operator_new(uVar9 << 3);
      }
      puVar3 = local_70;
      plVar10 = (long *)((long)pvVar4 + lVar14 * 8);
      pvVar1 = (void *)((long)pvVar4 + uVar9 * 8);
      local_70 = (undefined8 *)0x0;
      plVar15 = plVar10 + 1;
      *plVar10 = (long)puVar3;
      if ((long)plVar12 - (long)plVar16 == 0) {
        *param_1 = (ulong)plVar10;
        param_1[1] = (ulong)plVar15;
        param_1[2] = (ulong)pvVar1;
      }
      else {
        uVar7 = ((long)plVar12 - (long)plVar16) - 8;
        plVar8 = plVar10;
        if ((uVar7 < 0x78) ||
           ((uVar9 = (long)plVar12 + (-8 - (long)plVar16) & 0xfffffffffffffff8,
            (long *)((long)pvVar4 + (((long)plVar12 - (long)plVar16) - uVar9) + -8) < plVar12 &&
            ((long *)((long)plVar12 + (-8 - uVar9)) < plVar10)))) {
LAB_0075651c:
          do {
            plVar12 = plVar12 + -1;
            plVar8 = plVar8 + -1;
            *plVar8 = *plVar12;
            *plVar12 = 0;
          } while (plVar12 != plVar16);
        }
        else {
          plVar11 = plVar12 + -2;
          uVar7 = (uVar7 >> 3) + 1;
          uVar6 = uVar7 & 0x3ffffffffffffffc;
          plVar12 = plVar12 + -uVar6;
          plVar8 = plVar10 + -uVar6;
          plVar10 = plVar10 + -2;
          uVar9 = uVar6;
          do {
            lVar19 = plVar11[-1];
            lVar18 = plVar11[-2];
            lVar17 = plVar11[1];
            lVar14 = *plVar11;
            uVar9 = uVar9 - 4;
            plVar11[1] = 0;
            *plVar11 = 0;
            plVar11[-1] = 0;
            plVar11[-2] = 0;
            plVar11 = plVar11 + -4;
            plVar10[-1] = lVar19;
            plVar10[-2] = lVar18;
            plVar10[1] = lVar17;
            *plVar10 = lVar14;
            plVar10 = plVar10 + -4;
          } while (uVar9 != 0);
          if (uVar7 != uVar6) goto LAB_0075651c;
        }
        plVar12 = (long *)*param_1;
        plVar16 = (long *)param_1[1];
        *param_1 = (ulong)plVar8;
        param_1[1] = (ulong)plVar15;
        param_1[2] = (ulong)pvVar1;
        while (plVar16 != plVar12) {
          plVar16 = plVar16 + -1;
          if ((undefined8 *)*plVar16 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plVar16)();
          }
        }
      }
      if (plVar12 != (long *)0x0) {
        operator_delete(plVar12);
      }
      param_1[1] = (ulong)plVar15;
      if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)();
      }
    }
    plVar13 = (long *)*plVar13;
  } while( true );
}


// ===== 00756650  FUN_00756650 =====

void FUN_00756650(undefined4 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined8 local_d0;
  byte local_c8 [16];
  void *local_b8;
  undefined **local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined ***local_90;
  undefined **local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0xc0))(local_c8,param_3,param_4);
                    /* try { // try from 0075669c to 007566a7 has its CatchHandler @ 00756870 */
  lVar2 = FUN_00757558(param_2 + 0x30,local_c8);
  if (lVar2 == 0) {
                    /* try { // try from 00756718 to 00756723 has its CatchHandler @ 00756804 */
    lVar2 = FUN_007577c8(param_2 + 0x58,local_c8);
    if (lVar2 == 0) {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 00756734 to 00756743 has its CatchHandler @ 00756800 */
      (**(code **)(**(long **)(lVar2 + 0x28) + 0x10))
                (&local_80,*(long **)(lVar2 + 0x28),param_3,param_2 + 0x20);
      *param_1 = 7;
      *(undefined ***)(param_1 + 2) = local_80;
    }
    goto joined_r0x00756758;
  }
  uStack_98 = *(undefined8 *)(lVar2 + 0x30);
  local_a0 = *(undefined8 *)(lVar2 + 0x28);
  local_90 = &local_b0;
  local_b0 = &PTR_FUN_0097c808;
  local_80 = &PTR_FUN_0097c808;
                    /* try { // try from 007566ec to 007566ff has its CatchHandler @ 00756808 */
  lStack_a8 = param_2;
  local_78 = param_2;
  uStack_70 = local_a0;
  local_68 = uStack_98;
  local_60 = &local_80;
  (**(code **)(*param_3 + 0x278))(&local_d0,param_3,param_4,*(undefined4 *)(lVar2 + 0x28),&local_80)
  ;
  if (local_60 == &local_80) {
    lVar2 = 4;
    pppuVar3 = &local_80;
LAB_00756768:
    (*(code *)(*pppuVar3)[lVar2])();
  }
  else if (local_60 != (undefined ***)0x0) {
    lVar2 = 5;
    pppuVar3 = local_60;
    goto LAB_00756768;
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_d0;
  local_d0 = 0;
  if (local_90 == &local_b0) {
    lVar2 = 4;
    pppuVar3 = &local_b0;
  }
  else {
    if (local_90 == (undefined ***)0x0) goto joined_r0x00756758;
    lVar2 = 5;
    pppuVar3 = local_90;
  }
  (*(code *)(*pppuVar3)[lVar2])();
joined_r0x00756758:
  if ((local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007568a0  FUN_007568a0 =====

void FUN_007568a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 007568bc to 007568c3 has its CatchHandler @ 007568dc */
  FUN_007568f0(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_0099db00,PTR__length_error_0099daf0);
}


// ===== 007568f0  FUN_007568f0 =====

void FUN_007568f0(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_0099db08 + 0x10;
  return;
}


// ===== 00756920  FUN_00756920 =====

void FUN_00756920(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0099db10,PTR__bad_array_new_length_0099daf8);
}


// ===== 00756954  FUN_00756954 =====

long * FUN_00756954(void)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 *in_x3;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *unaff_x26;
  undefined2 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  long *plStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  __cxa_begin_catch();
  auVar23 = std::terminate();
  pbVar9 = auVar23._8_8_;
  plVar7 = auVar23._0_8_;
  pcStack_68 = FUN_00756964;
  lVar5 = tpidr_el0;
  lStack_78 = *(long *)(lVar5 + 0x28);
  uVar16 = *(ulong *)(pbVar9 + 8);
  pbVar3 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar3 = pbVar9 + 1;
    uVar16 = (ulong)(*pbVar9 >> 1);
  }
  puStack_70 = &stack0xfffffffffffffff0;
  plVar8 = (long *)FUN_00756d84(&plStack_90,pbVar3,uVar16);
  plVar19 = (long *)plVar7[1];
  if (plVar19 != (long *)0x0) {
    uVar21 = NEON_cnt(plVar19,1);
    uVar20 = NEON_uaddlv(uVar21,1);
    uVar16 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
    if (uVar16 < 2) {
      unaff_x26 = (long *)((long)plVar19 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar19 <= plVar8) {
        uVar15 = 0;
        if (plVar19 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar19;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar15 * (long)plVar19);
      }
    }
    puVar10 = *(undefined8 **)(*plVar7 + (long)unaff_x26 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar10, plVar18 != (long *)0x0)) {
      plVar12 = plVar8;
      pbVar3 = pbVar9 + 1;
      sVar1 = (ulong)(*pbVar9 >> 1);
      if ((*pbVar9 & 1) != 0) {
        pbVar3 = *(byte **)(pbVar9 + 0x10);
        sVar1 = *(size_t *)(pbVar9 + 8);
      }
      do {
        plVar11 = (long *)plVar18[1];
        if (plVar11 == plVar8) {
          bVar4 = *(byte *)(plVar18 + 2);
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar18[3];
          }
          if (sVar2 == sVar1) {
            if ((bVar4 & 1) == 0) {
              if (bVar4 < 2) {
LAB_00756adc:
                uVar21 = 0;
                goto LAB_00756cd4;
              }
              uVar15 = 0;
              while (*(byte *)((long)plVar18 + uVar15 + 0x11) == pbVar3[uVar15]) {
                uVar15 = uVar15 + 1;
                if (bVar4 >> 1 == uVar15) goto LAB_00756adc;
              }
            }
            else {
              uVar6 = memcmp((void *)plVar18[4],pbVar3,plVar18[3]);
              plVar12 = (long *)(ulong)uVar6;
              if (uVar6 == 0) goto LAB_00756adc;
            }
          }
        }
        else {
          if (uVar16 < 2) {
            plVar11 = (long *)((ulong)plVar11 & (long)plVar19 - 1U);
          }
          else if (plVar19 <= plVar11) {
            uVar15 = 0;
            if (plVar19 != (long *)0x0) {
              uVar15 = (ulong)plVar11 / (ulong)plVar19;
            }
            plVar11 = (long *)((long)plVar11 - uVar15 * (long)plVar19);
          }
          if (plVar11 != unaff_x26) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
  plVar11 = plVar7 + 2;
  plVar18 = (long *)operator_new(0x38);
  plVar12 = (long *)*in_x3;
  *plVar18 = 0;
  plVar18[1] = (long)plVar8;
  lVar14 = plVar12[1];
  lVar13 = *plVar12;
  plVar18[4] = plVar12[2];
  plVar18[3] = lVar14;
  plVar18[2] = lVar13;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = 0;
  lVar13 = plVar7[3];
  fVar22 = *(float *)(plVar7 + 4);
  plVar18[5] = 0;
  plVar18[6] = 0;
  uStack_80 = 1;
  plVar12 = plVar18;
  plStack_90 = plVar18;
  plStack_88 = plVar11;
  if ((plVar19 == (long *)0x0) || (fVar22 * (float)plVar19 < (float)(lVar13 + 1))) {
    if (plVar19 < (long *)0x3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
    }
    plVar19 = (long *)(uVar16 | (long)plVar19 << 1);
    plVar17 = (long *)(long)((float)(lVar13 + 1) / fVar22);
    if (plVar19 <= plVar17) {
      plVar19 = plVar17;
    }
    if ((long)plVar19 - 1U == 0) {
      plVar19 = (long *)&DAT_00000002;
    }
    else if (((ulong)plVar19 & (long)plVar19 - 1U) != 0) {
      plVar12 = (long *)std::__ndk1::__next_prime((ulong)plVar19);
      plVar19 = plVar12;
    }
    plVar17 = (long *)plVar7[1];
    if (plVar17 < plVar19) {
LAB_00756bb4:
      plVar12 = (long *)FUN_007571bc(plVar7,plVar19);
    }
    else if (plVar19 < plVar17) {
      plVar12 = (long *)(long)((float)(ulong)plVar7[3] / *(float *)(plVar7 + 4));
      if (plVar17 < (long *)0x3) {
LAB_00756c1c:
        plVar12 = (long *)std::__ndk1::__next_prime((ulong)plVar12);
      }
      else {
        uVar21 = NEON_cnt(plVar17,1);
        uVar20 = NEON_uaddlv(uVar21,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20)) goto LAB_00756c1c;
        if ((long *)0x1 < plVar12) {
          plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
        }
      }
      if (plVar19 <= plVar12) {
        plVar19 = plVar12;
      }
      if (plVar19 < plVar17) goto LAB_00756bb4;
    }
    plVar19 = (long *)plVar7[1];
    if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar19 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar19 <= plVar8) {
        uVar16 = 0;
        if (plVar19 != (long *)0x0) {
          uVar16 = (ulong)plVar8 / (ulong)plVar19;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar16 * (long)plVar19);
      }
    }
  }
  lVar13 = *plVar7;
  plVar8 = *(long **)(lVar13 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    lVar14 = *plVar11;
    *plVar11 = (long)plVar18;
    *plVar18 = lVar14;
    *(long **)(lVar13 + (long)unaff_x26 * 8) = plVar11;
    if (*plVar18 == 0) goto LAB_00756cc4;
    plVar8 = *(long **)(*plVar18 + 8);
    if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
      plVar8 = (long *)((ulong)plVar8 & (long)plVar19 - 1U);
    }
    else if (plVar19 <= plVar8) {
      uVar16 = 0;
      if (plVar19 != (long *)0x0) {
        uVar16 = (ulong)plVar8 / (ulong)plVar19;
      }
      plVar8 = (long *)((long)plVar8 - uVar16 * (long)plVar19);
    }
    plVar8 = (long *)(*plVar7 + (long)plVar8 * 8);
  }
  else {
    *plVar18 = *plVar8;
  }
  *plVar8 = (long)plVar18;
LAB_00756cc4:
  uVar21 = 1;
  plVar7[3] = plVar7[3] + 1;
LAB_00756cd4:
  if (*(long *)(lVar5 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar12,uVar21);
  }
  return plVar18;
}


// ===== 00756964  FUN_00756964 =====

long * FUN_00756964(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x26;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar14 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar14 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 007569b4 to 007569bb has its CatchHandler @ 00756d30 */
  plVar7 = (long *)FUN_00756d84(&local_80,pbVar3,uVar14);
  plVar17 = (long *)param_1[1];
  if (plVar17 != (long *)0x0) {
    uVar19 = NEON_cnt(plVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar14 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar14 < 2) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar17 <= plVar7) {
        uVar13 = 0;
        if (plVar17 != (long *)0x0) {
          uVar13 = (ulong)plVar7 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar13 * (long)plVar17);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar8, plVar16 != (long *)0x0)) {
      plVar10 = plVar7;
      pbVar3 = param_2 + 1;
      sVar1 = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar3 = *(byte **)(param_2 + 0x10);
        sVar1 = *(size_t *)(param_2 + 8);
      }
      do {
        plVar9 = (long *)plVar16[1];
        if (plVar9 == plVar7) {
          bVar4 = *(byte *)(plVar16 + 2);
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar16[3];
          }
          if (sVar2 == sVar1) {
            if ((bVar4 & 1) == 0) {
              if (bVar4 < 2) {
LAB_00756adc:
                uVar19 = 0;
                goto LAB_00756cd4;
              }
              uVar13 = 0;
              while (*(byte *)((long)plVar16 + uVar13 + 0x11) == pbVar3[uVar13]) {
                uVar13 = uVar13 + 1;
                if (bVar4 >> 1 == uVar13) goto LAB_00756adc;
              }
            }
            else {
              uVar6 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
              plVar10 = (long *)(ulong)uVar6;
              if (uVar6 == 0) goto LAB_00756adc;
            }
          }
        }
        else {
          if (uVar14 < 2) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar17 - 1U);
          }
          else if (plVar17 <= plVar9) {
            uVar13 = 0;
            if (plVar17 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar17;
            }
            plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar17);
          }
          if (plVar9 != unaff_x26) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  plVar9 = param_1 + 2;
  plVar16 = (long *)operator_new(0x38);
  plVar10 = (long *)*param_4;
  *plVar16 = 0;
  plVar16[1] = (long)plVar7;
  lVar12 = plVar10[1];
  lVar11 = *plVar10;
  plVar16[4] = plVar10[2];
  plVar16[3] = lVar12;
  plVar16[2] = lVar11;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = 0;
  lVar11 = param_1[3];
  fVar20 = *(float *)(param_1 + 4);
  plVar16[5] = 0;
  plVar16[6] = 0;
  local_70 = 1;
  plVar10 = plVar16;
  local_80 = plVar16;
  plStack_78 = plVar9;
  if ((plVar17 == (long *)0x0) || (fVar20 * (float)plVar17 < (float)(lVar11 + 1))) {
    if (plVar17 < (long *)0x3) {
      uVar14 = 1;
    }
    else {
      uVar14 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    plVar17 = (long *)(uVar14 | (long)plVar17 << 1);
    plVar15 = (long *)(long)((float)(lVar11 + 1) / fVar20);
    if (plVar17 <= plVar15) {
      plVar17 = plVar15;
    }
    if ((long)plVar17 - 1U == 0) {
      plVar17 = (long *)&DAT_00000002;
    }
    else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
                    /* try { // try from 00756b9c to 00756c1f has its CatchHandler @ 00756d08 */
      plVar10 = (long *)std::__ndk1::__next_prime((ulong)plVar17);
      plVar17 = plVar10;
    }
    plVar15 = (long *)param_1[1];
    if (plVar15 < plVar17) {
LAB_00756bb4:
      plVar10 = (long *)FUN_007571bc(param_1,plVar17);
    }
    else if (plVar17 < plVar15) {
      plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar15 < (long *)0x3) {
LAB_00756c1c:
        plVar10 = (long *)std::__ndk1::__next_prime((ulong)plVar10);
      }
      else {
        uVar19 = NEON_cnt(plVar15,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18)) goto LAB_00756c1c;
        if ((long *)0x1 < plVar10) {
          plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
        }
      }
      if (plVar17 <= plVar10) {
        plVar17 = plVar10;
      }
      if (plVar17 < plVar15) goto LAB_00756bb4;
    }
    plVar17 = (long *)param_1[1];
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar17 <= plVar7) {
        uVar14 = 0;
        if (plVar17 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar14 * (long)plVar17);
      }
    }
  }
  lVar11 = *param_1;
  plVar7 = *(long **)(lVar11 + (long)unaff_x26 * 8);
  if (plVar7 == (long *)0x0) {
    lVar12 = *plVar9;
    *plVar9 = (long)plVar16;
    *plVar16 = lVar12;
    *(long **)(lVar11 + (long)unaff_x26 * 8) = plVar9;
    if (*plVar16 == 0) goto LAB_00756cc4;
    plVar7 = *(long **)(*plVar16 + 8);
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      plVar7 = (long *)((ulong)plVar7 & (long)plVar17 - 1U);
    }
    else if (plVar17 <= plVar7) {
      uVar14 = 0;
      if (plVar17 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar17;
      }
      plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar17);
    }
    plVar7 = (long *)(*param_1 + (long)plVar7 * 8);
  }
  else {
    *plVar16 = *plVar7;
  }
  *plVar7 = (long)plVar16;
LAB_00756cc4:
  uVar19 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00756cd4:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar10,uVar19);
  }
  return plVar16;
}


// ===== 00756d34  FUN_00756d34 =====

void FUN_00756d34(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)pvVar1 + 0x10) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar1 + 0x20));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00756d84  FUN_00756d84 =====

ulong FUN_00756d84(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  
  if (param_3 < 0x21) {
    if (param_3 < 0x11) {
      if (8 < param_3) {
        uVar12 = *(ulong *)((long)param_2 + (param_3 - 8));
        uVar13 = uVar12 + param_3;
        uVar13 = uVar13 >> (param_3 & 0x3f) | uVar13 << 0x40 - (param_3 & 0x3f);
        uVar14 = (uVar13 ^ *param_2) * -0x622015f714c7d297;
        uVar13 = (uVar13 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
        return (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297 ^ uVar12;
      }
      if (param_3 < 4) {
        if (param_3 == 0) {
          return 0x9ae16a3b2f90404f;
        }
        uVar13 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
                 -0x36b62838af619aa9 ^
                 (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                 -0x651e95c4d06fbfb1;
        return (uVar13 ^ uVar13 >> 0x2f) * -0x651e95c4d06fbfb1;
      }
      uVar12 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar13 = ((uint)((int)*param_2 << 3) + param_3 ^ uVar12) * -0x622015f714c7d297;
      uVar13 = uVar12 ^ uVar13 >> 0x2f ^ uVar13;
    }
    else {
      lVar19 = *(long *)((long)param_2 + (param_3 - 8));
      uVar13 = lVar19 * -0x651e95c4d06fbfb1;
      uVar14 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar12 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar12 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar12 >> 0x14 | uVar12 << 0x2c) +
               lVar19 * 0x651e95c4d06fbfb1;
      uVar13 = ((uVar13 >> 0x1e | uVar13 << 0x22) + (uVar14 >> 0x2b | uVar14 * 0x200000) +
                *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar12) *
               -0x622015f714c7d297;
      uVar13 = uVar12 ^ uVar13 >> 0x2f ^ uVar13;
    }
    lVar15 = -0x622015f714c7d297;
    uVar13 = uVar13 * -0x622015f714c7d297;
  }
  else {
    if (0x40 < param_3) {
      lVar4 = *(long *)((long)param_2 + (param_3 - 0x38));
      lVar16 = *(long *)((long)param_2 + (param_3 - 0x30));
      uVar14 = *(ulong *)((long)param_2 + (param_3 - 0x18));
      lVar11 = *(long *)((long)param_2 + (param_3 - 0x28));
      lVar15 = *(long *)((long)param_2 + (param_3 - 0x10));
      lVar9 = *(long *)((long)param_2 + (param_3 - 8));
      uVar13 = (uVar14 ^ lVar16 + param_3) * -0x622015f714c7d297;
      lVar19 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
      puVar10 = param_2 + 4;
      uVar13 = (uVar14 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      uVar21 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
      uVar13 = lVar4 + lVar15;
      uVar12 = lVar16 + lVar4 + lVar19;
      lVar4 = uVar13 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
      lVar16 = *param_2 + lVar11 * -0x4b6d499041670d8d;
      uVar14 = uVar14 + lVar15 + lVar4;
      uVar18 = uVar12 + lVar11;
      uVar3 = lVar4 + lVar11 + lVar9;
      uVar20 = lVar19 + lVar11 + uVar21;
      uVar12 = (uVar12 >> 0x2c | uVar12 * 0x100000) + lVar19 + (uVar20 >> 0x15 | uVar20 << 0x2b);
      uVar20 = uVar14 + lVar9;
      uVar14 = (uVar14 >> 0x2c | uVar14 * 0x100000) + lVar4 + (uVar3 >> 0x15 | uVar3 << 0x2b);
      lVar19 = -(param_3 - 1 & 0xffffffffffffffc0);
      do {
        puVar5 = puVar10 + -3;
        lVar15 = puVar10[-4] + uVar12 * -0x4b6d499041670d8d;
        lVar19 = lVar19 + 0x40;
        uVar3 = lVar16 + uVar18 + uVar13 + *puVar5;
        puVar6 = puVar10 + 1;
        lVar16 = (uVar21 + uVar20 >> 0x21 | (uVar21 + uVar20) * 0x80000000) * -0x4b6d499041670d8d;
        puVar1 = puVar10 + 2;
        puVar7 = puVar10 + 3;
        uVar13 = uVar13 + uVar12 + *puVar1;
        lVar4 = lVar16 + uVar14 + *puVar10;
        uVar13 = *puVar6 + uVar18 + (uVar13 >> 0x2a | uVar13 * 0x400000) * -0x4b6d499041670d8d;
        puVar2 = puVar10 + -2;
        puVar8 = puVar10 + -1;
        puVar10 = puVar10 + 8;
        uVar12 = lVar15 + *puVar5 + *puVar2;
        uVar18 = uVar12 + *puVar8;
        uVar21 = (uVar3 >> 0x25 | uVar3 * 0x8000000) * -0x4b6d499041670d8d ^ uVar14;
        uVar14 = *puVar6 + *puVar1 + lVar4;
        uVar3 = lVar15 + uVar20 + *puVar8 + uVar21;
        uVar17 = uVar13 + *puVar2 + lVar4 + *puVar7;
        uVar20 = uVar14 + *puVar7;
        uVar12 = (uVar12 >> 0x2c | uVar12 * 0x100000) + lVar15 + (uVar3 >> 0x15 | uVar3 << 0x2b);
        uVar14 = (uVar14 >> 0x2c | uVar14 * 0x100000) + lVar4 + (uVar17 >> 0x15 | uVar17 << 0x2b);
      } while (lVar19 != 0);
      uVar18 = (uVar20 ^ uVar18) * -0x622015f714c7d297;
      uVar12 = (uVar14 ^ uVar12) * -0x622015f714c7d297;
      uVar18 = (uVar20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
      uVar12 = (uVar14 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      uVar12 = lVar16 + (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
      uVar13 = (uVar12 ^ uVar21 + (uVar13 ^ uVar13 >> 0x2f) * -0x4b6d499041670d8d +
                         (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
      uVar13 = (uVar12 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      return (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
    }
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x10));
    uVar17 = *param_2 + (lVar4 + param_3) * -0x3c5a37a36834ced9;
    uVar21 = param_2[3];
    uVar13 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
    lVar19 = *(long *)((long)param_2 + (param_3 - 8)) + uVar21;
    uVar12 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar13;
    uVar14 = uVar17 + param_2[1];
    uVar18 = uVar14 + param_2[2];
    uVar3 = uVar12 + lVar4;
    uVar20 = lVar19 + uVar13;
    lVar4 = (uVar14 >> 7 | uVar14 << 0x39) + (uVar17 >> 0x25 | uVar17 * 0x8000000) +
            (uVar17 + uVar21 >> 0x34 | (uVar17 + uVar21) * 0x1000) +
            (uVar18 >> 0x1f | uVar18 << 0x21);
    lVar15 = -0x651e95c4d06fbfb1;
    uVar13 = (uVar3 + lVar19 + lVar4) * -0x3c5a37a36834ced9 +
             (uVar18 + uVar21 + (uVar13 >> 0x25 | uVar13 * 0x8000000) +
                       (uVar12 >> 7 | uVar12 << 0x39) + (uVar20 >> 0x34 | uVar20 * 0x1000) +
                       (uVar3 >> 0x1f | uVar3 << 0x21)) * -0x651e95c4d06fbfb1;
    uVar13 = lVar4 + (uVar13 ^ uVar13 >> 0x2f) * -0x3c5a37a36834ced9;
  }
  return (uVar13 ^ uVar13 >> 0x2f) * lVar15;
}


// ===== 007571bc  FUN_007571bc =====

void FUN_007571bc(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00756920();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00757318  FUN_00757318 =====

void FUN_00757318(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0097c7b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00757328  FUN_00757328 =====

void FUN_00757328(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0097c7b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00757358  FUN_00757358 =====

void FUN_00757358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00757360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00757364  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00757368  FUN_00757368 =====

void FUN_00757368(ulong *param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  plVar11 = (long *)*param_1;
  if (param_2 <= (ulong)((long)(param_1[2] - (long)plVar11) >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    puVar3 = (undefined8 *)FUN_00757544(param_1);
    plVar11 = (long *)*puVar3;
    if (plVar11 == (long *)0x0) {
      return;
    }
    plVar12 = (long *)puVar3[1];
    plVar4 = plVar11;
    if (plVar12 != plVar11) {
      do {
        plVar12 = plVar12 + -1;
        if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar12)();
        }
      } while (plVar12 != plVar11);
      plVar4 = (long *)*puVar3;
    }
    puVar3[1] = plVar11;
    operator_delete(plVar4);
    return;
  }
  plVar12 = (long *)param_1[1];
  pvVar2 = operator_new(param_2 * 8);
  lVar13 = (long)plVar12 - (long)plVar11;
  pvVar1 = (void *)((long)pvVar2 + param_2 * 8);
  plVar4 = (long *)((long)pvVar2 + lVar13);
  if (lVar13 == 0) {
    *param_1 = (ulong)plVar4;
    param_1[1] = (ulong)plVar4;
    param_1[2] = (ulong)pvVar1;
    goto LAB_0075747c;
  }
  uVar6 = lVar13 - 8;
  plVar5 = plVar4;
  if ((uVar6 < 0x68) ||
     (((long *)((long)pvVar2 + (uVar6 & 7)) < plVar12 &&
      ((long *)((long)plVar12 + ((uVar6 ^ 0xffffffffffffffff) & 0xfffffffffffffff8)) < plVar4)))) {
LAB_00757454:
    do {
      plVar12 = plVar12 + -1;
      plVar5 = plVar5 + -1;
      *plVar5 = *plVar12;
      *plVar12 = 0;
    } while (plVar12 != plVar11);
  }
  else {
    plVar8 = plVar12 + -2;
    uVar6 = (uVar6 >> 3) + 1;
    plVar9 = (long *)((long)pvVar2 + ((long)plVar8 - (long)plVar11));
    uVar7 = uVar6 & 0x3ffffffffffffffc;
    plVar12 = plVar12 + -uVar7;
    plVar5 = plVar4 + -uVar7;
    uVar10 = uVar7;
    do {
      lVar16 = plVar8[-1];
      lVar15 = plVar8[-2];
      lVar14 = plVar8[1];
      lVar13 = *plVar8;
      uVar10 = uVar10 - 4;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[-1] = 0;
      plVar8[-2] = 0;
      plVar8 = plVar8 + -4;
      plVar9[-1] = lVar16;
      plVar9[-2] = lVar15;
      plVar9[1] = lVar14;
      *plVar9 = lVar13;
      plVar9 = plVar9 + -4;
    } while (uVar10 != 0);
    if (uVar6 != uVar7) goto LAB_00757454;
  }
  plVar11 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  *param_1 = (ulong)plVar5;
  param_1[1] = (ulong)plVar4;
  param_1[2] = (ulong)pvVar1;
  while (plVar12 != plVar11) {
    plVar12 = plVar12 + -1;
    if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar12)();
    }
  }
LAB_0075747c:
  if (plVar11 == (long *)0x0) {
    return;
  }
  operator_delete(plVar11);
  return;
}


// ===== 007574cc  FUN_007574cc =====

void FUN_007574cc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)param_1[1];
  plVar1 = plVar2;
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + -1;
      if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)*plVar3)();
      }
    } while (plVar3 != plVar2);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar2;
  operator_delete(plVar1);
  return;
}


// ===== 00757544  FUN_00757544 =====

void FUN_00757544(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_007568a0("vector");
}


// ===== 00757558  FUN_00757558 =====

long * FUN_00757558(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined1 uStack_69;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 007575a4 to 007575ab has its CatchHandler @ 00757710 */
  uVar8 = FUN_00756d84(&uStack_69,pbVar3,uVar8);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar15 = NEON_cnt(uVar11,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (uVar11 <= uVar8) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar8 / uVar11;
        }
        uVar13 = uVar8 - uVar13 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar13 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        pbVar3 = param_2 + 1;
        sVar1 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          pbVar3 = *(byte **)(param_2 + 0x10);
          sVar1 = *(size_t *)(param_2 + 8);
        }
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_007576d8;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 < 2) {
              uVar10 = uVar10 & uVar11 - 1;
            }
            else if (uVar11 <= uVar10) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar5 * uVar11;
            }
            if (uVar10 != uVar13) goto LAB_007576d4;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_007576d8;
    }
  }
LAB_007576d4:
  plVar9 = (long *)0x0;
LAB_007576d8:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00757714  FUN_00757714 =====

void FUN_00757714(void)

{
  return;
}


// ===== 00757718  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0075771c  FUN_0075771c =====

void FUN_0075771c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_0097c808;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 0075775c  FUN_0075775c =====

void FUN_0075775c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_0097c808;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 0075777c  FUN_0075777c =====

void FUN_0075777c(void)

{
  return;
}


// ===== 00757780  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00757784  FUN_00757784 =====

void FUN_00757784(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0075779c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_2,*(undefined8 *)(param_1 + 8),*param_4,*param_5);
  return;
}


// ===== 007577a0  FUN_007577a0 =====

long FUN_007577a0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099dae0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007577bc  FUN_007577bc =====

undefined * FUN_007577bc(void)

{
  return PTR_typeinfo_0099dae8;
}


// ===== 007577c8  FUN_007577c8 =====

long * FUN_007577c8(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined1 uStack_69;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00757814 to 0075781b has its CatchHandler @ 00757980 */
  uVar8 = FUN_00756d84(&uStack_69,pbVar3,uVar8);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar15 = NEON_cnt(uVar11,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (uVar11 <= uVar8) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar8 / uVar11;
        }
        uVar13 = uVar8 - uVar13 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar13 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        pbVar3 = param_2 + 1;
        sVar1 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          pbVar3 = *(byte **)(param_2 + 0x10);
          sVar1 = *(size_t *)(param_2 + 8);
        }
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_00757948;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 < 2) {
              uVar10 = uVar10 & uVar11 - 1;
            }
            else if (uVar11 <= uVar10) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar5 * uVar11;
            }
            if (uVar10 != uVar13) goto LAB_00757944;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_00757948;
    }
  }
LAB_00757944:
  plVar9 = (long *)0x0;
LAB_00757948:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00757984  facebook::react::RNDiscordMarkdownSpec_registerComponentDescriptorsFromCodegen =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNDiscordMarkdownSpec_registerComponentDescriptorsFromCodegen */

void __rustcall facebook::react::RNDiscordMarkdownSpec_registerComponentDescriptorsFromCodegen(void)

{
  return;
}


// ===== 00757990  FUN_00757990 =====

long FUN_00757990(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_009a7800 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  LOAcquire();
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  LORelease();
  return lVar3;
}


// ===== 007579bc  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_009a7800 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_009a7800 = iVar2 != 0;
    return;
  }
  DAT_009a7800 = 1;
  return;
}


// ===== 00757a44  FUN_00757a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00757a44(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar1 = (uint)param_1;
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x10);
  }
  auVar23._8_8_ = param_1;
  auVar23._0_8_ = param_1;
  auVar29[8] = UNK_00371f18;
  auVar29._0_8_ = _DAT_00371f10;
  auVar20 = NEON_ushl(auVar23,_DAT_00371110,8);
  auVar29[9] = (char)_UNK_00371f19;
  auVar29[10] = (char)((uint7)_UNK_00371f19 >> 8);
  auVar29[0xb] = (char)((uint7)_UNK_00371f19 >> 0x10);
  auVar29[0xc] = (char)((uint7)_UNK_00371f19 >> 0x18);
  auVar29[0xd] = (char)((uint7)_UNK_00371f19 >> 0x20);
  auVar29[0xe] = (char)((uint7)_UNK_00371f19 >> 0x28);
  auVar29[0xf] = (char)((uint7)_UNK_00371f19 >> 0x30);
  auVar29 = NEON_ushl(auVar23,auVar29,8);
  auVar26[8] = UNK_00370f78;
  auVar26._0_8_ = _DAT_00370f70;
  auVar21 = NEON_ushl(auVar23,_DAT_00372c20,8);
  auVar23 = NEON_ushl(auVar23,_DAT_003725a0,8);
  auVar25._8_8_ = uVar2;
  auVar25._0_8_ = uVar2;
  bVar4 = auVar29[0] & DAT_00371450 | auVar20[0] & DAT_003720e0;
  bVar5 = auVar29[1] & UNK_00371451 | auVar20[1] & UNK_003720e1;
  bVar6 = auVar29[2] & UNK_00371452 | auVar20[2] & UNK_003720e2;
  bVar7 = auVar29[3] & UNK_00371453 | auVar20[3] & UNK_003720e3;
  bVar8 = auVar29[4] & UNK_00371454 | auVar20[4] & UNK_003720e4;
  bVar9 = auVar29[5] & UNK_00371455 | auVar20[5] & UNK_003720e5;
  bVar10 = auVar29[6] & UNK_00371456 | auVar20[6] & UNK_003720e6;
  bVar11 = auVar29[7] & UNK_00371457 | auVar20[7] & UNK_003720e7;
  bVar12 = auVar29[8] & UNK_00371458 | auVar20[8] & UNK_003720e8;
  bVar13 = auVar29[9] & UNK_00371459 | auVar20[9] & UNK_003720e9;
  bVar14 = auVar29[10] & UNK_0037145a | auVar20[10] & UNK_003720ea;
  bVar15 = auVar29[0xb] & UNK_0037145b | auVar20[0xb] & UNK_003720eb;
  bVar16 = auVar29[0xc] & UNK_0037145c | auVar20[0xc] & UNK_003720ec;
  bVar17 = auVar29[0xd] & UNK_0037145d | auVar20[0xd] & UNK_003720ed;
  bVar18 = auVar29[0xe] & UNK_0037145e | auVar20[0xe] & UNK_003720ee;
  bVar19 = auVar29[0xf] & UNK_0037145f | auVar20[0xf] & UNK_003720ef;
  auVar28 = NEON_ushl(auVar25,_s___00372d20,8);
  auVar24 = NEON_ushl(auVar25,_s__00371980,8);
  auVar30 = NEON_ushl(auVar25,_DAT_00371c50,8);
  auVar26[9] = (char)_UNK_00370f79;
  auVar26[10] = (char)((uint7)_UNK_00370f79 >> 8);
  auVar26[0xb] = (char)((uint7)_UNK_00370f79 >> 0x10);
  auVar26[0xc] = (char)((uint7)_UNK_00370f79 >> 0x18);
  auVar26[0xd] = (char)((uint7)_UNK_00370f79 >> 0x20);
  auVar26[0xe] = (char)((uint7)_UNK_00370f79 >> 0x28);
  auVar26[0xf] = (char)((uint7)_UNK_00370f79 >> 0x30);
  auVar26 = NEON_ushl(auVar25,auVar26,8);
  auVar20[1] = bVar5;
  auVar20[0] = bVar4;
  auVar20[2] = bVar6;
  auVar20[3] = bVar7;
  auVar20[4] = bVar8;
  auVar20[5] = bVar9;
  auVar20[6] = bVar10;
  auVar20[7] = bVar11;
  auVar20[8] = bVar12;
  auVar20[9] = bVar13;
  auVar20[10] = bVar14;
  auVar20[0xb] = bVar15;
  auVar20[0xc] = bVar16;
  auVar20[0xd] = bVar17;
  auVar20[0xe] = bVar18;
  auVar20[0xf] = bVar19;
  auVar27[1] = bVar5;
  auVar27[0] = bVar4;
  auVar27[2] = bVar6;
  auVar27[3] = bVar7;
  auVar27[4] = bVar8;
  auVar27[5] = bVar9;
  auVar27[6] = bVar10;
  auVar27[7] = bVar11;
  auVar27[8] = bVar12;
  auVar27[9] = bVar13;
  auVar27[10] = bVar14;
  auVar27[0xb] = bVar15;
  auVar27[0xc] = bVar16;
  auVar27[0xd] = bVar17;
  auVar27[0xe] = bVar18;
  auVar27[0xf] = bVar19;
  auVar29 = NEON_ext(auVar20,auVar27,8,1);
  auVar22[0] = auVar21[0] & DAT_00370f80 | auVar23[0] & DAT_00371120;
  auVar22[1] = auVar21[1] & UNK_00370f81 | auVar23[1] & UNK_00371121;
  auVar22[2] = auVar21[2] & UNK_00370f82 | auVar23[2] & UNK_00371122;
  auVar22[3] = auVar21[3] & UNK_00370f83 | auVar23[3] & UNK_00371123;
  auVar22[4] = auVar21[4] & UNK_00370f84 | auVar23[4] & UNK_00371124;
  auVar22[5] = auVar21[5] & UNK_00370f85 | auVar23[5] & UNK_00371125;
  auVar22[6] = auVar21[6] & UNK_00370f86 | auVar23[6] & UNK_00371126;
  auVar22[7] = auVar21[7] & UNK_00370f87 | auVar23[7] & UNK_00371127;
  auVar22[8] = auVar21[8] & UNK_00370f88 | auVar23[8] & UNK_00371128;
  auVar22[9] = auVar21[9] & UNK_00370f89 | auVar23[9] & UNK_00371129;
  auVar22[10] = auVar21[10] & UNK_00370f8a | auVar23[10] & UNK_0037112a;
  auVar22[0xb] = auVar21[0xb] & UNK_00370f8b | auVar23[0xb] & UNK_0037112b;
  auVar22[0xc] = auVar21[0xc] & UNK_00370f8c | auVar23[0xc] & UNK_0037112c;
  auVar22[0xd] = auVar21[0xd] & UNK_00370f8d | auVar23[0xd] & UNK_0037112d;
  auVar22[0xe] = auVar21[0xe] & UNK_00370f8e | auVar23[0xe] & UNK_0037112e;
  auVar22[0xf] = auVar21[0xf] & UNK_00370f8f | auVar23[0xf] & UNK_0037112f;
  auVar27 = NEON_ext(auVar22,auVar22,8,1);
  auVar21[0] = auVar30[0] & DAT_00372f40 | auVar26[0] & (byte)_s__00371310 |
               auVar28[0] & DAT_00370fa0 | auVar24[0] & DAT_00370f90;
  auVar21[1] = auVar30[1] & UNK_00372f41 | auVar26[1] & (byte)((ulong)_s__00371310 >> 8) |
               auVar28[1] & UNK_00370fa1 | auVar24[1] & UNK_00370f91;
  auVar21[2] = auVar30[2] & UNK_00372f42 | auVar26[2] & (byte)((ulong)_s__00371310 >> 0x10) |
               auVar28[2] & UNK_00370fa2 | auVar24[2] & UNK_00370f92;
  auVar21[3] = auVar30[3] & UNK_00372f43 | auVar26[3] & (byte)((ulong)_s__00371310 >> 0x18) |
               auVar28[3] & UNK_00370fa3 | auVar24[3] & UNK_00370f93;
  auVar21[4] = auVar30[4] & UNK_00372f44 | auVar26[4] & (byte)((ulong)_s__00371310 >> 0x20) |
               auVar28[4] & UNK_00370fa4 | auVar24[4] & UNK_00370f94;
  auVar21[5] = auVar30[5] & UNK_00372f45 | auVar26[5] & (byte)((ulong)_s__00371310 >> 0x28) |
               auVar28[5] & UNK_00370fa5 | auVar24[5] & UNK_00370f95;
  auVar21[6] = auVar30[6] & UNK_00372f46 | auVar26[6] & (byte)((ulong)_s__00371310 >> 0x30) |
               auVar28[6] & UNK_00370fa6 | auVar24[6] & UNK_00370f96;
  auVar21[7] = auVar30[7] & UNK_00372f47 | auVar26[7] & (byte)((ulong)_s__00371310 >> 0x38) |
               auVar28[7] & UNK_00370fa7 | auVar24[7] & UNK_00370f97;
  auVar21[8] = auVar30[8] & UNK_00372f48 | auVar26[8] & (byte)_UNK_00371318 |
               auVar28[8] & UNK_00370fa8 | auVar24[8] & UNK_00370f98;
  auVar21[9] = auVar30[9] & UNK_00372f49 | auVar26[9] & (byte)((ulong)_UNK_00371318 >> 8) |
               auVar28[9] & UNK_00370fa9 | auVar24[9] & UNK_00370f99;
  auVar21[10] = auVar30[10] & UNK_00372f4a | auVar26[10] & (byte)((ulong)_UNK_00371318 >> 0x10) |
                auVar28[10] & UNK_00370faa | auVar24[10] & UNK_00370f9a;
  auVar21[0xb] = auVar30[0xb] & UNK_00372f4b | auVar26[0xb] & (byte)((ulong)_UNK_00371318 >> 0x18) |
                 auVar28[0xb] & UNK_00370fab | auVar24[0xb] & UNK_00370f9b;
  auVar21[0xc] = auVar30[0xc] & UNK_00372f4c | auVar26[0xc] & (byte)((ulong)_UNK_00371318 >> 0x20) |
                 auVar28[0xc] & UNK_00370fac | auVar24[0xc] & UNK_00370f9c;
  auVar21[0xd] = auVar30[0xd] & UNK_00372f4d | auVar26[0xd] & (byte)((ulong)_UNK_00371318 >> 0x28) |
                 auVar28[0xd] & UNK_00370fad | auVar24[0xd] & UNK_00370f9d;
  auVar21[0xe] = auVar30[0xe] & UNK_00372f4e | auVar26[0xe] & (byte)((ulong)_UNK_00371318 >> 0x30) |
                 auVar28[0xe] & UNK_00370fae | auVar24[0xe] & UNK_00370f9e;
  auVar21[0xf] = auVar30[0xf] & UNK_00372f4f | auVar26[0xf] & (byte)((ulong)_UNK_00371318 >> 0x38) |
                 auVar28[0xf] & UNK_00370faf | auVar24[0xf] & UNK_00370f9f;
  auVar20 = NEON_ext(auVar21,auVar21,8,1);
  uVar3 = CONCAT17(auVar22[7] | auVar27[7],
                   CONCAT16(auVar22[6] | auVar27[6],
                            CONCAT15(auVar22[5] | auVar27[5],
                                     CONCAT14(auVar22[4] | auVar27[4],
                                              CONCAT13(auVar22[3] | auVar27[3],
                                                       CONCAT12(auVar22[2] | auVar27[2],
                                                                CONCAT11(auVar22[1] | auVar27[1],
                                                                         auVar22[0] | auVar27[0]))))
                                    ))) |
          CONCAT17(bVar11 | auVar29[7],
                   CONCAT16(bVar10 | auVar29[6],
                            CONCAT15(bVar9 | auVar29[5],
                                     CONCAT14(bVar8 | auVar29[4],
                                              CONCAT13(bVar7 | auVar29[3],
                                                       CONCAT12(bVar6 | auVar29[2],
                                                                CONCAT11(bVar5 | auVar29[1],
                                                                         bVar4 | auVar29[0]))))))) |
          auVar30._0_8_ & 0x800000000000000 | uVar2 >> 0x17 & 0x800 | (uVar2 >> 0xd & 1) << 0x1a |
          auVar26._0_8_ & 0x80000 | uVar2 >> 0x10 & 1 |
          (uVar2 & 0x40000) << 0x1a | (uVar2 >> 3 & 0xf) << 0x26 |
          uVar2 >> 5 & 4 | (param_1 & 0x100) >> 1 |
          (param_1 & 0x1000) >> 6 | (param_1 & 0x1000000) >> 7 |
          auVar23._0_8_ & 0x10000 | ((ulong)(uVar1 >> 4) & 1) << 0xf |
          (ulong)(uVar1 << 3) & 0x400 |
          CONCAT17(auVar21[7] | auVar20[7],
                   CONCAT16(auVar21[6] | auVar20[6],
                            CONCAT15(auVar21[5] | auVar20[5],
                                     CONCAT14(auVar21[4] | auVar20[4],
                                              CONCAT13(auVar21[3] | auVar20[3],
                                                       CONCAT12(auVar21[2] | auVar20[2],
                                                                CONCAT11(auVar21[1] | auVar20[1],
                                                                         auVar21[0] | auVar20[0]))))
                                    )));
  if ((param_1 & 1) != 0) {
    uVar3 = uVar3 | 0x300;
  }
  DAT_009a7808 = ((ulong)(uVar1 >> 0x16) & 1) << 0x1e | (uVar2 >> 0x2e & 1) << 0x3a |
                 auVar23._0_8_ & 0x400000 | ((ulong)(uVar1 >> 0x10) & 1) << 0x12 |
                 (param_1 & 0x4000000) >> 3 | (param_1 & 0x20000) >> 4 | (uVar2 >> 0xe & 1) << 0x1b
                 | (uVar2 & 2) << 0x23 | uVar3 | 0x8000000000000000;
  return;
}


// ===== 00757c6c  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if ((DAT_009a7808 == 0) &&
     ((iVar1 = __system_property_get("ro.arch",local_70), iVar1 < 1 ||
      (iVar1 = strncmp(local_70,"exynos9810",10), iVar1 != 0)))) {
    uVar2 = getauxval(0x10);
    local_60 = getauxval(0x1a);
    local_70[0] = '\x18';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    uStack_68 = uVar2;
    FUN_00757a44(uVar2 | 0x4000000000000000,local_70);
    return;
  }
  return;
}


// ===== 00757d00  FUN_00757d00 =====

long FUN_00757d00(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_009a7800 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  return lVar3;
}


// ===== 00757d2c  facebook::react::NativeAPNGPreloadModuleSpecJSI::NativeAPNGPreloadModuleSpecJSI =====

/* facebook::react::NativeAPNGPreloadModuleSpecJSI::NativeAPNGPreloadModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAPNGPreloadModuleSpecJSI::NativeAPNGPreloadModuleSpecJSI
          (NativeAPNGPreloadModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60 [16];
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097c898;
  local_60[8] = 0;
  local_60[0] = 0xe;
  local_60[1] = 0x70;
  local_60[2] = 0x72;
  local_60[3] = 0x65;
  local_60[4] = 0x6c;
  local_60[5] = 0x6f;
  local_60[6] = 0x61;
  local_60[7] = 100;
                    /* try { // try from 00757d90 to 00757da7 has its CatchHandler @ 00757dec */
  local_40 = local_60;
  lVar2 = FUN_00756964(this + 0x30,local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00757e24;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00757e24  FUN_00757e24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00757e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x70;
  local_60[2] = 0x72;
  local_60[3] = 0x65;
  local_60[4] = 0x6c;
  local_60[5] = 0x6f;
  local_60[6] = 0x61;
  local_60[7] = 100;
                    /* try { // try from 00757e80 to 00757e87 has its CatchHandler @ 00757f48 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 00757ebc to 00757ee7 has its CatchHandler @ 00757f30 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,local_60,&local_80,param_4,param_5,&DAT_009a7810);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00757f78  facebook::react::NativeAdsModuleSpecJSI::NativeAdsModuleSpecJSI =====

/* facebook::react::NativeAdsModuleSpecJSI::NativeAdsModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAdsModuleSpecJSI::NativeAdsModuleSpecJSI
          (NativeAdsModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [8];
  char acStack_57 [6];
  char cStack_51;
  char cStack_50;
  char acStack_4f [6];
  undefined1 uStack_49;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097c8d8;
  uStack_49 = 0;
  local_60 = 0x2c;
  acStack_57[0] = s_getGoogleAdver_0036ead5[8];
  acStack_57[1] = s_getGoogleAdver_0036ead5[9];
  acStack_57[2] = s_getGoogleAdver_0036ead5[10];
  acStack_57[3] = s_getGoogleAdver_0036ead5[0xb];
  acStack_57[4] = s_getGoogleAdver_0036ead5[0xc];
  acStack_57[5] = s_getGoogleAdver_0036ead5[0xd];
  local_5f[0] = s_getGoogleAdver_0036ead5[0];
  local_5f[1] = s_getGoogleAdver_0036ead5[1];
  local_5f[2] = s_getGoogleAdver_0036ead5[2];
  local_5f[3] = s_getGoogleAdver_0036ead5[3];
  local_5f[4] = s_getGoogleAdver_0036ead5[4];
  local_5f[5] = s_getGoogleAdver_0036ead5[5];
  local_5f[6] = s_getGoogleAdver_0036ead5[6];
  local_5f[7] = s_getGoogleAdver_0036ead5[7];
  cStack_51 = (char)s_tisingId_0036eae3._0_2_;
  cStack_50 = SUB21(s_tisingId_0036eae3._0_2_,1);
  acStack_4f[0] = s_tisingId_0036eae3[2];
  acStack_4f[1] = s_tisingId_0036eae3[3];
  acStack_4f[2] = s_tisingId_0036eae3[4];
  acStack_4f[3] = s_tisingId_0036eae3[5];
  acStack_4f[4] = s_tisingId_0036eae3[6];
  acStack_4f[5] = s_tisingId_0036eae3[7];
                    /* try { // try from 00757fdc to 00757ff3 has its CatchHandler @ 00758034 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0075806c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT61(acStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075806c  FUN_0075806c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075806c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  char acStack_57 [6];
  char cStack_51;
  char cStack_50;
  char acStack_4f [6];
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x2c;
  uStack_49 = 0;
  acStack_57 = (char  [6])s_getGoogleAdver_0036ead5._8_6_;
  local_5f = (char  [8])s_getGoogleAdver_0036ead5._0_8_;
  cStack_51 = (char)s_tisingId_0036eae3._0_2_;
  cStack_50 = SUB21(s_tisingId_0036eae3._0_2_,1);
  acStack_4f = (char  [6])s_tisingId_0036eae3._2_6_;
                    /* try { // try from 007580c8 to 007580cf has its CatchHandler @ 00758188 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 007580fc to 00758127 has its CatchHandler @ 00758170 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7818);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT61(acStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007581b8  facebook::react::NativeAppAttestModuleSpecJSI::NativeAppAttestModuleSpecJSI =====

/* facebook::react::NativeAppAttestModuleSpecJSI::NativeAppAttestModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAppAttestModuleSpecJSI::NativeAppAttestModuleSpecJSI
          (NativeAppAttestModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeAppAttestModuleSpecJSI *pNVar3;
  byte local_60;
  undefined7 local_5f;
  char cStack_58;
  undefined3 uStack_57;
  uint uStack_54;
  char cStack_50;
  undefined2 uStack_4f;
  undefined2 uStack_4d;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097c918;
  local_60 = 0x16;
  uStack_54 = uStack_54 & 0xffffff00;
  local_5f = (undefined7)s_isSupported_0036e467._0_8_;
  cStack_58 = SUB81(s_isSupported_0036e467._0_8_,7);
  _cStack_58 = CONCAT31(0x646574,cStack_58);
                    /* try { // try from 00758220 to 0075823b has its CatchHandler @ 00758354 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0075838c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT23(uStack_4d,CONCAT21(uStack_4f,cStack_50)))));
  }
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x4b74;
  uStack_4d = 0x7965;
  uStack_57 = (undefined3)s_generateAndAttestKey_00367786._8_8_;
  uStack_54 = SUB84(s_generateAndAttestKey_00367786._8_8_,3);
  cStack_50 = SUB81(s_generateAndAttestKey_00367786._8_8_,7);
  local_5f = (undefined7)s_generateAndAttestKey_00367786._0_8_;
  cStack_58 = SUB81(s_generateAndAttestKey_00367786._0_8_,7);
                    /* try { // try from 00758288 to 007582a3 has its CatchHandler @ 00758350 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00758490;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT23(uStack_4d,CONCAT21(uStack_4f,cStack_50)))));
  }
  local_60 = 0x22;
  uStack_4f = 0x6e;
  uStack_57 = (undefined3)s_generateAssertion_0036717e._8_8_;
  uStack_54 = SUB84(s_generateAssertion_0036717e._8_8_,3);
  cStack_50 = SUB81(s_generateAssertion_0036717e._8_8_,7);
  local_5f = (undefined7)s_generateAssertion_0036717e._0_8_;
  cStack_58 = SUB81(s_generateAssertion_0036717e._0_8_,7);
                    /* try { // try from 007582ec to 00758307 has its CatchHandler @ 0075834c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_007585e8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT23(uStack_4d,CONCAT21(uStack_4f,cStack_50)))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075838c  FUN_0075838c =====

void FUN_0075838c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58[0] = 6;
  local_34 = 0;
  local_3f = (undefined7)s_isSupported_0036e467._0_8_;
  _cStack_38 = CONCAT31(0x646574,SUB81(s_isSupported_0036e467._0_8_,7));
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x5a;
  local_58[4] = 0;
                    /* try { // try from 007583f0 to 0075840f has its CatchHandler @ 00758450 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,1,&local_40,local_58,param_3,param_4,&DAT_009a7820);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00758490  FUN_00758490 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00758490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x79654b74;
  uStack_57 = (undefined7)s_generateAndAttestKey_00367786._8_8_;
  cStack_50 = SUB81(s_generateAndAttestKey_00367786._8_8_,7);
  local_5f = (char  [8])s_generateAndAttestKey_00367786._0_8_;
                    /* try { // try from 007584f0 to 007584f7 has its CatchHandler @ 007585b8 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0075852c to 00758557 has its CatchHandler @ 007585a0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7828);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007585e8  FUN_007585e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007585e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined5 uStack_4d;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x22;
  uStack_57 = (undefined7)s_generateAssertion_0036717e._8_8_;
  cStack_50 = SUB81(s_generateAssertion_0036717e._8_8_,7);
  local_5f = (char  [8])s_generateAssertion_0036717e._0_8_;
  uStack_4f = 0x6e;
                    /* try { // try from 00758640 to 00758647 has its CatchHandler @ 00758708 */
  local_70 = (char *)operator_new(0x50);
  uVar4 = s_ok_react_b_0036cada._0_8_;
  uVar3 = s_ring_Lcom_facebo_0036caca._0_8_;
  uVar2 = CONCAT62(s_ridge_Promise__V_0036cae4._0_6_,s_ok_react_b_0036cada._8_2_);
  uStack_78 = _UNK_00372248;
  local_80 = _s_Q_00372240;
  *(undefined8 *)(local_70 + 0x28) = s_ring_Lcom_facebo_0036caca._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar3;
  *(undefined8 *)(local_70 + 0x38) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar3 = s_ridge_Promise__V_0036cae4._8_8_;
  uVar2 = CONCAT26(s_ridge_Promise__V_0036cae4._6_2_,s_ridge_Promise__V_0036cae4._0_6_);
  local_70[0x4a] = '\0';
  *(undefined8 *)(local_70 + 0x42) = uVar3;
  *(undefined8 *)(local_70 + 0x3a) = uVar2;
  uVar4 = s_ng_Ljava_lang_St_0036caba._8_8_;
  uVar3 = s_ng_Ljava_lang_St_0036caba._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036caaa._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036caaa._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 0075867c to 007586a7 has its CatchHandler @ 007586f0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7830);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT21(uStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00758738  facebook::react::NativeAppDatabaseModuleSpecJSI::NativeAppDatabaseModuleSpecJSI =====

/* facebook::react::NativeAppDatabaseModuleSpecJSI::NativeAppDatabaseModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAppDatabaseModuleSpecJSI::NativeAppDatabaseModuleSpecJSI
          (NativeAppDatabaseModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [8];
  undefined4 local_57;
  undefined1 local_53;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097c958;
  local_60 = 0x18;
  local_53 = 0;
  local_57 = 0x73746e61;
  local_5f[0] = s_getConstants_0036b771[0];
  local_5f[1] = s_getConstants_0036b771[1];
  local_5f[2] = s_getConstants_0036b771[2];
  local_5f[3] = s_getConstants_0036b771[3];
  local_5f[4] = s_getConstants_0036b771[4];
  local_5f[5] = s_getConstants_0036b771[5];
  local_5f[6] = s_getConstants_0036b771[6];
  local_5f[7] = s_getConstants_0036b771[7];
                    /* try { // try from 007587a0 to 007587bb has its CatchHandler @ 00758864 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0075889c;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x12;
  local_57 = CONCAT22(local_57._2_2_,100);
  local_5f[0] = s_setUserId_0036f6f0[0];
  local_5f[1] = s_setUserId_0036f6f0[1];
  local_5f[2] = s_setUserId_0036f6f0[2];
  local_5f[3] = s_setUserId_0036f6f0[3];
  local_5f[4] = s_setUserId_0036f6f0[4];
  local_5f[5] = s_setUserId_0036f6f0[5];
  local_5f[6] = s_setUserId_0036f6f0[6];
  local_5f[7] = s_setUserId_0036f6f0[7];
                    /* try { // try from 00758800 to 0075881b has its CatchHandler @ 00758860 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_007589ac;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075889c  FUN_0075889c =====

void FUN_0075889c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x73746e61;
  local_33 = 0;
  local_58 = 0x22;
  local_3f = (char  [8])s_getConstants_0036b771._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__0036c3af._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__0036c3af._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__0036c3af._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 0075890c to 0075892b has its CatchHandler @ 0075896c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_009a7838);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,cStack_48)));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007589ac  FUN_007589ac =====

void FUN_007589ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  char local_3f [8];
  undefined2 local_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x12;
  uStack_42 = 0;
  local_3f = (char  [8])s_setUserId_0036f6f0._0_8_;
  local_37 = 100;
  local_58 = 0x2a;
  acStack_4f = (char  [5])s__Ljava_lang_S_0036ec45._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036ec45._0_8_;
  uStack_4a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_48 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_47 = (char  [5])s_tring__V_0036ec52._3_5_;
                    /* try { // try from 00758a18 to 00758a37 has its CatchHandler @ 00758a78 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_009a7840);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00758ab8  facebook::react::NativeAppIconModuleSpecJSI::NativeAppIconModuleSpecJSI =====

/* facebook::react::NativeAppIconModuleSpecJSI::NativeAppIconModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAppIconModuleSpecJSI::NativeAppIconModuleSpecJSI
          (NativeAppIconModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeAppIconModuleSpecJSI *pNVar3;
  byte local_60;
  undefined4 local_5f;
  undefined2 uStack_5b;
  char cStack_59;
  char cStack_58;
  undefined6 uStack_57;
  char cStack_51;
  char cStack_50;
  undefined2 uStack_4f;
  undefined5 uStack_4d;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097c998;
  cStack_51 = 0;
  local_60 = 0x1c;
  local_5f = s_getCur_0036551a._0_4_;
  uStack_5b = s_getCur_0036551a._4_2_;
  cStack_59 = (char)s_rentIcon_00365520._0_2_;
  cStack_58 = SUB21(s_rentIcon_00365520._0_2_,1);
  uStack_57._0_1_ = s_rentIcon_00365520[2];
  uStack_57._1_1_ = s_rentIcon_00365520[3];
  uStack_57._2_1_ = s_rentIcon_00365520[4];
  uStack_57._3_1_ = s_rentIcon_00365520[5];
  uStack_57._4_1_ = s_rentIcon_00365520[6];
  uStack_57._5_1_ = s_rentIcon_00365520[7];
                    /* try { // try from 00758b1c to 00758b37 has its CatchHandler @ 00758c48 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00758c80;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT21(uStack_4f,cStack_50)));
  }
  cStack_58 = 0;
  local_60 = 0xe;
  local_5f = 0x49746573;
  uStack_5b = 0x6f63;
  cStack_59 = 0x6e;
                    /* try { // try from 00758b80 to 00758b9b has its CatchHandler @ 00758c44 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00758dcc;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT21(uStack_4f,cStack_50)));
  }
  local_60 = 0x22;
  uStack_4f = 0x73;
  uStack_57 = (undefined6)s_getAvailableIcons_00370908._8_8_;
  cStack_51 = SUB81(s_getAvailableIcons_00370908._8_8_,6);
  cStack_50 = SUB81(s_getAvailableIcons_00370908._8_8_,7);
  local_5f = (undefined4)s_getAvailableIcons_00370908._0_8_;
  uStack_5b = SUB82(s_getAvailableIcons_00370908._0_8_,4);
  cStack_59 = SUB81(s_getAvailableIcons_00370908._0_8_,6);
  cStack_58 = SUB81(s_getAvailableIcons_00370908._0_8_,7);
                    /* try { // try from 00758be4 to 00758bff has its CatchHandler @ 00758c40 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00758f20;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT21(uStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00758c80  FUN_00758c80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00758c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [6];
  char acStack_59 [2];
  char acStack_57 [6];
  undefined1 local_51;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_51 = 0;
  local_60 = 0x1c;
  local_5f = s_getCur_0036551a;
  acStack_59 = (char  [2])s_rentIcon_00365520._0_2_;
  acStack_57 = (char  [6])s_rentIcon_00365520._2_6_;
                    /* try { // try from 00758cdc to 00758ce3 has its CatchHandler @ 00758d9c */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00758d10 to 00758d3b has its CatchHandler @ 00758d84 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7848);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00758dcc  FUN_00758dcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00758dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x73;
  local_60[2] = 0x65;
  local_60[3] = 0x74;
  local_60[4] = 0x49;
  local_60[5] = 99;
  local_60[6] = 0x6f;
  local_60[7] = 0x6e;
                    /* try { // try from 00758e28 to 00758e2f has its CatchHandler @ 00758ef0 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 00758e64 to 00758e8f has its CatchHandler @ 00758ed8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,local_60,&local_80,param_4,param_5,&DAT_009a7850);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00758f20  FUN_00758f20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00758f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined5 uStack_4d;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x22;
  uStack_57 = (undefined7)s_getAvailableIcons_00370908._8_8_;
  cStack_50 = SUB81(s_getAvailableIcons_00370908._8_8_,7);
  local_5f = (char  [8])s_getAvailableIcons_00370908._0_8_;
  uStack_4f = 0x73;
                    /* try { // try from 00758f78 to 00758f7f has its CatchHandler @ 00759038 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00758fac to 00758fd7 has its CatchHandler @ 00759020 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7858);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT21(uStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00759068  facebook::react::NativeAppLifecycleModuleSpecJSI::NativeAppLifecycleModuleSpecJSI =====

/* facebook::react::NativeAppLifecycleModuleSpecJSI::NativeAppLifecycleModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAppLifecycleModuleSpecJSI::NativeAppLifecycleModuleSpecJSI
          (NativeAppLifecycleModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [7];
  undefined4 uStack_58;
  uint uStack_54;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097c9d8;
  local_60 = 0x16;
  uStack_54 = uStack_54 & 0xffffff00;
  local_5f = SUB87(s_addListener_0036dd70._0_8_,0);
  uStack_58 = CONCAT31(0x72656e,SUB81(s_addListener_0036dd70._0_8_,7));
                    /* try { // try from 007590d0 to 007590eb has its CatchHandler @ 0075919c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_007591d4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  local_60 = 0x1e;
  local_50 = 0;
  local_5f[0] = s_removeL_0037044f[0];
  local_5f[1] = s_removeL_0037044f[1];
  local_5f[2] = s_removeL_0037044f[2];
  local_5f[3] = s_removeL_0037044f[3];
  local_5f[4] = s_removeL_0037044f[4];
  local_5f[5] = s_removeL_0037044f[5];
  local_5f[6] = s_removeL_0037044f[6];
  uStack_58 = (undefined4)CONCAT71(s_isteners_00370456._1_7_,s_isteners_00370456[0]);
  uStack_54 = SUB74(s_isteners_00370456._1_7_,3);
                    /* try { // try from 00759138 to 00759153 has its CatchHandler @ 00759198 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_007592e8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007591d4  FUN_007591d4 =====

void FUN_007591d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58 = 0x2a;
  local_34 = 0;
  local_3f = (undefined7)s_addListener_0036dd70._0_8_;
  _cStack_38 = CONCAT31(0x72656e,SUB81(s_addListener_0036dd70._0_8_,7));
  acStack_4f = (char  [5])s__Ljava_lang_S_0036ec45._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036ec45._0_8_;
  uStack_4a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_48 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_47 = (char  [5])s_tring__V_0036ec52._3_5_;
  uStack_42 = 0;
                    /* try { // try from 00759248 to 00759267 has its CatchHandler @ 007592a8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_009a7860);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007592e8  FUN_007592e8 =====

void FUN_007592e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1e;
  local_3f = s_removeL_0037044f;
  local_58[0] = 8;
  cStack_38 = s_isteners_00370456[0];
  acStack_37 = (char  [7])s_isteners_00370456._1_7_;
  local_30 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 0075934c to 0075936b has its CatchHandler @ 007593ac */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7868);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_2f,local_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007593ec  facebook::react::NativeAppRatingRequestModuleSpecJSI::NativeAppRatingRequestModuleSpecJSI =====

/* facebook::react::NativeAppRatingRequestModuleSpecJSI::NativeAppRatingRequestModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAppRatingRequestModuleSpecJSI::NativeAppRatingRequestModuleSpecJSI
          (NativeAppRatingRequestModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [5];
  char acStack_5a [3];
  char acStack_57 [5];
  undefined1 local_52;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097ca18;
  local_52 = 0;
  local_60 = 0x1a;
  local_5f[0] = s_reque_0037091a[0];
  local_5f[1] = s_reque_0037091a[1];
  local_5f[2] = s_reque_0037091a[2];
  local_5f[3] = s_reque_0037091a[3];
  local_5f[4] = s_reque_0037091a[4];
  acStack_5a[0] = s_stRating_0037091f[0];
  acStack_5a[1] = s_stRating_0037091f[1];
  acStack_5a[2] = s_stRating_0037091f[2];
  acStack_57[0] = s_stRating_0037091f[3];
  acStack_57[1] = s_stRating_0037091f[4];
  acStack_57[2] = s_stRating_0037091f[5];
  acStack_57[3] = s_stRating_0037091f[6];
  acStack_57[4] = s_stRating_0037091f[7];
                    /* try { // try from 00759450 to 00759467 has its CatchHandler @ 007594a8 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_007594e0;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007594e0  FUN_007594e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007594e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [5];
  char acStack_5a [3];
  char acStack_57 [5];
  undefined1 local_52;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_52 = 0;
  local_60 = 0x1a;
  local_5f = s_reque_0037091a;
  acStack_5a = (char  [3])s_stRating_0037091f._0_3_;
  acStack_57 = (char  [5])s_stRating_0037091f._3_5_;
                    /* try { // try from 0075953c to 00759543 has its CatchHandler @ 007595fc */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00759570 to 0075959b has its CatchHandler @ 007595e4 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7870);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075962c  facebook::react::NativeAudioManagerModuleSpecJSI::NativeAudioManagerModuleSpecJSI =====

/* facebook::react::NativeAudioManagerModuleSpecJSI::NativeAudioManagerModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAudioManagerModuleSpecJSI::NativeAudioManagerModuleSpecJSI
          (NativeAudioManagerModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeAudioManagerModuleSpecJSI *pNVar3;
  byte local_60;
  char local_5f [7];
  undefined4 uStack_58;
  char cStack_54;
  undefined2 uStack_53;
  char cStack_51;
  char cStack_50;
  uint uStack_4f;
  char cStack_4b;
  char cStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097ca58;
  cStack_50 = 0;
  local_60 = 0x1e;
  local_5f[0] = s_getAudi_0036b77e[0];
  local_5f[1] = s_getAudi_0036b77e[1];
  local_5f[2] = s_getAudi_0036b77e[2];
  local_5f[3] = s_getAudi_0036b77e[3];
  local_5f[4] = s_getAudi_0036b77e[4];
  local_5f[5] = s_getAudi_0036b77e[5];
  local_5f[6] = s_getAudi_0036b77e[6];
  uStack_58 = (undefined4)CONCAT71(s_oDevices_0036b785._1_7_,s_oDevices_0036b785[0]);
  cStack_54 = SUB71(s_oDevices_0036b785._1_7_,3);
  uStack_53 = SUB72(s_oDevices_0036b785._1_7_,4);
  cStack_51 = SUB71(s_oDevices_0036b785._1_7_,6);
                    /* try { // try from 00759690 to 007596ab has its CatchHandler @ 00759974 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_007599ac;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT41(uStack_4f,cStack_50)))));
  }
  local_60 = 0x28;
  cStack_4b = 0;
  uStack_4f = 0x65636976;
  uStack_58._1_3_ = (undefined3)s_setActiveAudioDevice_00366854._8_8_;
  cStack_54 = SUB81(s_setActiveAudioDevice_00366854._8_8_,3);
  uStack_53 = SUB82(s_setActiveAudioDevice_00366854._8_8_,4);
  cStack_51 = SUB81(s_setActiveAudioDevice_00366854._8_8_,6);
  cStack_50 = SUB81(s_setActiveAudioDevice_00366854._8_8_,7);
  local_5f = SUB87(s_setActiveAudioDevice_00366854._0_8_,0);
  uStack_58._0_1_ = SUB81(s_setActiveAudioDevice_00366854._0_8_,7);
                    /* try { // try from 007596f8 to 00759713 has its CatchHandler @ 00759970 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00759af8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT41(uStack_4f,cStack_50)))));
  }
  local_60 = 0x28;
  cStack_4b = 0;
  uStack_4f = 0x65636976;
  uStack_58._1_3_ = (undefined3)s_getActiveAudioDevice_00366158._8_8_;
  cStack_54 = SUB81(s_getActiveAudioDevice_00366158._8_8_,3);
  uStack_53 = SUB82(s_getActiveAudioDevice_00366158._8_8_,4);
  cStack_51 = SUB81(s_getActiveAudioDevice_00366158._8_8_,6);
  cStack_50 = SUB81(s_getActiveAudioDevice_00366158._8_8_,7);
  local_5f = SUB87(s_getActiveAudioDevice_00366158._0_8_,0);
  uStack_58._0_1_ = SUB81(s_getActiveAudioDevice_00366158._0_8_,7);
                    /* try { // try from 00759764 to 0075977f has its CatchHandler @ 0075996c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00759c48;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT41(uStack_4f,cStack_50)))));
  }
  local_60 = 0x2c;
  uStack_49 = 0;
  uStack_58._1_3_ = (undefined3)s_setCommunicati_0036fe3b._8_6_;
  cStack_54 = SUB61(s_setCommunicati_0036fe3b._8_6_,3);
  uStack_53 = SUB62(s_setCommunicati_0036fe3b._8_6_,4);
  local_5f = SUB87(s_setCommunicati_0036fe3b._0_8_,0);
  uStack_58._0_1_ = SUB81(s_setCommunicati_0036fe3b._0_8_,7);
  cStack_51 = (char)s_onModeOn_0036fe49._0_2_;
  cStack_50 = SUB21(s_onModeOn_0036fe49._0_2_,1);
  uStack_4f = (uint)s_onModeOn_0036fe49._2_6_;
  cStack_4b = SUB61(s_onModeOn_0036fe49._2_6_,4);
  cStack_4a = SUB61(s_onModeOn_0036fe49._2_6_,5);
                    /* try { // try from 007597c8 to 007597e3 has its CatchHandler @ 00759968 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00759d98;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT41(uStack_4f,cStack_50)))));
  }
  uStack_4f = uStack_4f & 0xffffff00;
  local_60 = 0x20;
  uStack_58._1_3_ = (undefined3)s_setSCORetryCount_00367e19._8_8_;
  cStack_54 = SUB81(s_setSCORetryCount_00367e19._8_8_,3);
  uStack_53 = SUB82(s_setSCORetryCount_00367e19._8_8_,4);
  cStack_51 = SUB81(s_setSCORetryCount_00367e19._8_8_,6);
  cStack_50 = SUB81(s_setSCORetryCount_00367e19._8_8_,7);
  local_5f = SUB87(s_setSCORetryCount_00367e19._0_8_,0);
  uStack_58._0_1_ = SUB81(s_setSCORetryCount_00367e19._0_8_,7);
                    /* try { // try from 00759828 to 00759843 has its CatchHandler @ 00759964 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00759e9c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT41(uStack_4f,cStack_50)))));
  }
  local_60 = 0x16;
  cStack_54 = 0;
  local_5f = SUB87(s_addListener_0036dd70._0_8_,0);
  uStack_58._0_1_ = SUB81(s_addListener_0036dd70._0_8_,7);
  uStack_58 = CONCAT31(0x72656e,(char)uStack_58);
                    /* try { // try from 00759894 to 007598af has its CatchHandler @ 00759960 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00759f98;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT41(uStack_4f,cStack_50)))));
  }
  local_60 = 0x1e;
  cStack_50 = 0;
  local_5f[0] = s_removeL_0037044f[0];
  local_5f[1] = s_removeL_0037044f[1];
  local_5f[2] = s_removeL_0037044f[2];
  local_5f[3] = s_removeL_0037044f[3];
  local_5f[4] = s_removeL_0037044f[4];
  local_5f[5] = s_removeL_0037044f[5];
  local_5f[6] = s_removeL_0037044f[6];
  uStack_58 = (undefined4)CONCAT71(s_isteners_00370456._1_7_,s_isteners_00370456[0]);
  cStack_54 = SUB71(s_isteners_00370456._1_7_,3);
  uStack_53 = SUB72(s_isteners_00370456._1_7_,4);
  cStack_51 = SUB71(s_isteners_00370456._1_7_,6);
                    /* try { // try from 007598fc to 00759917 has its CatchHandler @ 0075995c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0075a0ac;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT41(uStack_4f,cStack_50)))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007599ac  FUN_007599ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007599ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [7];
  char cStack_58;
  char acStack_57 [7];
  undefined1 local_50;
  undefined7 uStack_4f;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_60 = 0x1e;
  local_5f = s_getAudi_0036b77e;
  cStack_58 = s_oDevices_0036b785[0];
  acStack_57 = (char  [7])s_oDevices_0036b785._1_7_;
                    /* try { // try from 00759a08 to 00759a0f has its CatchHandler @ 00759ac8 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00759a3c to 00759a67 has its CatchHandler @ 00759ab0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7878);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00759af8  FUN_00759af8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00759af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x65636976;
  uStack_57 = (undefined7)s_setActiveAudioDevice_00366854._8_8_;
  cStack_50 = SUB81(s_setActiveAudioDevice_00366854._8_8_,7);
  local_5f = (char  [8])s_setActiveAudioDevice_00366854._0_8_;
                    /* try { // try from 00759b58 to 00759b5f has its CatchHandler @ 00759c18 */
  local_70 = (char *)operator_new(0x30);
  uVar4 = s_eact_bridg_0036d854._0_8_;
  uVar3 = s__Lcom_facebook_r_0036d844._0_8_;
  uVar2 = CONCAT62(s_e_ReadableMap__V_0036d85e._0_6_,s_eact_bridg_0036d854._8_2_);
  uStack_78 = _UNK_00371258;
  local_80 = _s_1_00371250;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_0036d844._8_8_;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar4;
  uVar3 = s_e_ReadableMap__V_0036d85e._8_8_;
  uVar2 = CONCAT26(s_e_ReadableMap__V_0036d85e._6_2_,s_e_ReadableMap__V_0036d85e._0_6_);
  local_70[0x2a] = '\0';
  *(undefined8 *)(local_70 + 0x22) = uVar3;
  *(undefined8 *)(local_70 + 0x1a) = uVar2;
                    /* try { // try from 00759b8c to 00759bb7 has its CatchHandler @ 00759c00 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009a7880);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00759c48  FUN_00759c48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00759c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x65636976;
  uStack_57 = (undefined7)s_getActiveAudioDevice_00366158._8_8_;
  cStack_50 = SUB81(s_getActiveAudioDevice_00366158._8_8_,7);
  local_5f = (char  [8])s_getActiveAudioDevice_00366158._0_8_;
                    /* try { // try from 00759ca8 to 00759caf has its CatchHandler @ 00759d68 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00759cdc to 00759d07 has its CatchHandler @ 00759d50 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7888);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00759d98  FUN_00759d98 =====

void FUN_00759d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  char acStack_37 [6];
  char cStack_31;
  char cStack_30;
  char acStack_2f [6];
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x2c;
  uStack_29 = 0;
  acStack_37 = (char  [6])s_setCommunicati_0036fe3b._8_6_;
  local_3f = (char  [8])s_setCommunicati_0036fe3b._0_8_;
  cStack_31 = (char)s_onModeOn_0036fe49._0_2_;
  cStack_30 = SUB21(s_onModeOn_0036fe49._0_2_,1);
  acStack_2f = (char  [6])s_onModeOn_0036fe49._2_6_;
  local_58[0] = 8;
  local_58[5] = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x5a;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
                    /* try { // try from 00759dfc to 00759e1b has its CatchHandler @ 00759e5c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7890);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT61(acStack_2f,cStack_30)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00759e9c  FUN_00759e9c =====

void FUN_00759e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x20;
  local_58[0] = 8;
  uStack_37 = (undefined7)s_setSCORetryCount_00367e19._8_8_;
  cStack_30 = SUB81(s_setSCORetryCount_00367e19._8_8_,7);
  local_3f = (char  [8])s_setSCORetryCount_00367e19._0_8_;
  uStack_2f = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 00759ef8 to 00759f17 has its CatchHandler @ 00759f58 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7898);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00759f98  FUN_00759f98 =====

void FUN_00759f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58 = 0x2a;
  local_34 = 0;
  local_3f = (undefined7)s_addListener_0036dd70._0_8_;
  _cStack_38 = CONCAT31(0x72656e,SUB81(s_addListener_0036dd70._0_8_,7));
  acStack_4f = (char  [5])s__Ljava_lang_S_0036ec45._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036ec45._0_8_;
  uStack_4a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_48 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_47 = (char  [5])s_tring__V_0036ec52._3_5_;
  uStack_42 = 0;
                    /* try { // try from 0075a00c to 0075a02b has its CatchHandler @ 0075a06c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_009a78a0);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075a0ac  FUN_0075a0ac =====

void FUN_0075a0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1e;
  local_3f = s_removeL_0037044f;
  local_58[0] = 8;
  cStack_38 = s_isteners_00370456[0];
  acStack_37 = (char  [7])s_isteners_00370456._1_7_;
  local_30 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 0075a110 to 0075a12f has its CatchHandler @ 0075a170 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a78a8);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_2f,local_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075a1b0  facebook::react::NativeAudioPlayerModuleSpecJSI::NativeAudioPlayerModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeAudioPlayerModuleSpecJSI::NativeAudioPlayerModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAudioPlayerModuleSpecJSI::NativeAudioPlayerModuleSpecJSI
          (NativeAudioPlayerModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  NativeAudioPlayerModuleSpecJSI *pNVar9;
  byte local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined6 uStack_57;
  char cStack_51;
  char cStack_50;
  undefined2 uStack_4f;
  uint uStack_4d;
  undefined1 uStack_49;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  local_60 = 0x24;
  pNVar9 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097ca98;
  uStack_4d = uStack_4d & 0xffffff00;
  uStack_4f = 0x7265;
  uStack_57 = (undefined6)s_pauseCurrentPlayer_0036eaec._8_8_;
  cStack_51 = SUB81(s_pauseCurrentPlayer_0036eaec._8_8_,6);
  cStack_50 = SUB81(s_pauseCurrentPlayer_0036eaec._8_8_,7);
  uStack_5f = (undefined7)s_pauseCurrentPlayer_0036eaec._0_8_;
  cStack_58 = SUB81(s_pauseCurrentPlayer_0036eaec._0_8_,7);
                    /* try { // try from 0075a214 to 0075a22f has its CatchHandler @ 0075a360 */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar9,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 1;
  *(code **)(lVar7 + 0x30) = FUN_0075a398;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT43(uStack_4d,CONCAT21(uStack_4f,cStack_50))));
  }
  local_60 = 0x2c;
  uStack_49 = 0;
  uStack_57._0_1_ = s_maybePlayCurre_0036d719[8];
  uStack_57._1_1_ = s_maybePlayCurre_0036d719[9];
  uStack_57._2_1_ = s_maybePlayCurre_0036d719[10];
  uStack_57._3_1_ = s_maybePlayCurre_0036d719[0xb];
  uStack_57._4_1_ = s_maybePlayCurre_0036d719[0xc];
  uStack_57._5_1_ = s_maybePlayCurre_0036d719[0xd];
  uStack_5f = (undefined7)s_maybePlayCurre_0036d719._0_8_;
  cStack_58 = SUB81(s_maybePlayCurre_0036d719._0_8_,7);
  cStack_51 = (char)s_ntPlayer_0036d727._0_2_;
  cStack_50 = SUB21(s_ntPlayer_0036d727._0_2_,1);
  uStack_4f = (undefined2)s_ntPlayer_0036d727._2_6_;
  uStack_4d = SUB64(s_ntPlayer_0036d727._2_6_,2);
                    /* try { // try from 0075a27c to 0075a297 has its CatchHandler @ 0075a35c */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar9,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_0075a49c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT43(uStack_4d,CONCAT21(uStack_4f,cStack_50))));
  }
                    /* try { // try from 0075a2b4 to 0075a2bb has its CatchHandler @ 0075a354 */
  pcVar8 = (char *)operator_new(0x20);
  uVar6 = _UNK_00371d78;
  uVar5 = _s___00371d70;
  uVar4 = s_ceMessageDeleted_0036a571._8_8_;
  uVar3 = s_handleVoi_0036a568._0_8_;
  uVar2 = CONCAT17(s_ceMessageDeleted_0036a571[7],s_ceMessageDeleted_0036a571._0_7_);
  cStack_50 = (char)pcVar8;
  uStack_4f = (undefined2)((ulong)pcVar8 >> 8);
  uStack_4d = (uint)((ulong)pcVar8 >> 0x18);
  uStack_49 = (undefined1)((ulong)pcVar8 >> 0x38);
  *(ulong *)(pcVar8 + 8) = CONCAT71(s_ceMessageDeleted_0036a571._0_7_,s_handleVoi_0036a568[8]);
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0x11) = uVar4;
  *(undefined8 *)(pcVar8 + 9) = uVar2;
  cStack_58 = (char)uVar6;
  uStack_57 = (undefined6)((ulong)uVar6 >> 8);
  cStack_51 = (char)((ulong)uVar6 >> 0x38);
  local_60 = (byte)uVar5;
  uStack_5f = (undefined7)((ulong)uVar5 >> 8);
  pcVar8[0x19] = '\0';
                    /* try { // try from 0075a2f0 to 0075a30b has its CatchHandler @ 0075a350 */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar9,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 1;
  *(code **)(lVar7 + 0x30) = FUN_0075a59c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT43(uStack_4d,CONCAT21(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075a398  FUN_0075a398 =====

void FUN_0075a398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x24;
  uStack_2f = 0x7265;
  local_58[0] = 8;
  uStack_37 = (undefined7)s_pauseCurrentPlayer_0036eaec._8_8_;
  cStack_30 = SUB81(s_pauseCurrentPlayer_0036eaec._8_8_,7);
  local_3f = (char  [8])s_pauseCurrentPlayer_0036eaec._0_8_;
  uStack_2d = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x5a;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 0075a3fc to 0075a41b has its CatchHandler @ 0075a45c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a78b0);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,cStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075a49c  FUN_0075a49c =====

void FUN_0075a49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  char acStack_37 [6];
  char cStack_31;
  char cStack_30;
  char acStack_2f [6];
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x2c;
  uStack_29 = 0;
  acStack_37 = (char  [6])s_maybePlayCurre_0036d719._8_6_;
  local_3f = (char  [8])s_maybePlayCurre_0036d719._0_8_;
  cStack_31 = (char)s_ntPlayer_0036d727._0_2_;
  cStack_30 = SUB21(s_ntPlayer_0036d727._0_2_,1);
  acStack_2f = (char  [6])s_ntPlayer_0036d727._2_6_;
  local_58[0] = 6;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0075a4fc to 0075a51b has its CatchHandler @ 0075a55c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a78b8);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT61(acStack_2f,cStack_30)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075a59c  FUN_0075a59c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075a59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined5 uVar5;
  undefined5 uVar6;
  undefined3 uVar7;
  undefined5 uVar8;
  undefined5 uVar9;
  byte local_78;
  char local_77 [8];
  char acStack_6f [5];
  undefined2 uStack_6a;
  char cStack_68;
  char acStack_67 [5];
  undefined1 uStack_62;
  undefined1 uStack_61;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_ceMessageDeleted_0036a571._8_8_;
  uVar3 = s_handleVoi_0036a568._0_8_;
  uVar2 = CONCAT17(s_ceMessageDeleted_0036a571[7],s_ceMessageDeleted_0036a571._0_7_);
  *(ulong *)(local_50 + 8) = CONCAT71(s_ceMessageDeleted_0036a571._0_7_,s_handleVoi_0036a568[8]);
  *(undefined8 *)local_50 = uVar3;
  uVar8 = s_tring__V_0036ec52._3_5_;
  uVar7 = s_tring__V_0036ec52._0_3_;
  uVar5 = s__Ljava_lang_S_0036ec45._8_5_;
  uVar3 = s__Ljava_lang_S_0036ec45._0_8_;
  local_78 = 0x2a;
  uStack_58 = _UNK_00371d78;
  local_60 = _s___00371d70;
  *(undefined8 *)(local_50 + 0x11) = uVar4;
  *(undefined8 *)(local_50 + 9) = uVar2;
  local_50[0x19] = '\0';
  uVar9 = s_tring__V_0036ec52._3_5_;
  uVar6 = s__Ljava_lang_S_0036ec45._8_5_;
  uVar2 = s__Ljava_lang_S_0036ec45._0_8_;
  s__Ljava_lang_S_0036ec45[8] = (char)uVar5;
  s__Ljava_lang_S_0036ec45[9] = SUB51(uVar5,1);
  s__Ljava_lang_S_0036ec45[10] = SUB51(uVar5,2);
  s__Ljava_lang_S_0036ec45[0xb] = SUB51(uVar5,3);
  s__Ljava_lang_S_0036ec45[0xc] = SUB51(uVar5,4);
  acStack_6f[0] = s__Ljava_lang_S_0036ec45[8];
  acStack_6f[1] = s__Ljava_lang_S_0036ec45[9];
  acStack_6f[2] = s__Ljava_lang_S_0036ec45[10];
  acStack_6f[3] = s__Ljava_lang_S_0036ec45[0xb];
  acStack_6f[4] = s__Ljava_lang_S_0036ec45[0xc];
  s__Ljava_lang_S_0036ec45[0] = (char)uVar3;
  s__Ljava_lang_S_0036ec45[1] = SUB81(uVar3,1);
  s__Ljava_lang_S_0036ec45[2] = SUB81(uVar3,2);
  s__Ljava_lang_S_0036ec45[3] = SUB81(uVar3,3);
  s__Ljava_lang_S_0036ec45[4] = SUB81(uVar3,4);
  s__Ljava_lang_S_0036ec45[5] = SUB81(uVar3,5);
  s__Ljava_lang_S_0036ec45[6] = SUB81(uVar3,6);
  s__Ljava_lang_S_0036ec45[7] = SUB81(uVar3,7);
  local_77[0] = s__Ljava_lang_S_0036ec45[0];
  local_77[1] = s__Ljava_lang_S_0036ec45[1];
  local_77[2] = s__Ljava_lang_S_0036ec45[2];
  local_77[3] = s__Ljava_lang_S_0036ec45[3];
  local_77[4] = s__Ljava_lang_S_0036ec45[4];
  local_77[5] = s__Ljava_lang_S_0036ec45[5];
  local_77[6] = s__Ljava_lang_S_0036ec45[6];
  local_77[7] = s__Ljava_lang_S_0036ec45[7];
  uStack_6a = (undefined2)uVar7;
  cStack_68 = SUB31(uVar7,2);
  s_tring__V_0036ec52[3] = (char)uVar8;
  s_tring__V_0036ec52[4] = SUB51(uVar8,1);
  s_tring__V_0036ec52[5] = SUB51(uVar8,2);
  s_tring__V_0036ec52[6] = SUB51(uVar8,3);
  s_tring__V_0036ec52[7] = SUB51(uVar8,4);
  acStack_67[0] = s_tring__V_0036ec52[3];
  acStack_67[1] = s_tring__V_0036ec52[4];
  acStack_67[2] = s_tring__V_0036ec52[5];
  acStack_67[3] = s_tring__V_0036ec52[6];
  acStack_67[4] = s_tring__V_0036ec52[7];
  uStack_62 = 0;
                    /* try { // try from 0075a62c to 0075a657 has its CatchHandler @ 0075a6a0 */
  s__Ljava_lang_S_0036ec45._0_8_ = uVar2;
  s__Ljava_lang_S_0036ec45._8_5_ = uVar6;
  s_tring__V_0036ec52._3_5_ = uVar9;
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_78,param_4,param_5,&DAT_009a78c0);
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT51(acStack_67,cStack_68))));
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075a6e0  facebook::react::NativeAudioRouteEmitterModuleSpecJSI::NativeAudioRouteEmitterModuleSpecJSI =====

/* facebook::react::NativeAudioRouteEmitterModuleSpecJSI::NativeAudioRouteEmitterModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAudioRouteEmitterModuleSpecJSI::NativeAudioRouteEmitterModuleSpecJSI
          (NativeAudioRouteEmitterModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [7];
  char cStack_58;
  char acStack_57 [7];
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097cad8;
  local_50 = 0;
  local_60 = 0x1e;
  local_5f[0] = s_getCurr_0036eaff[0];
  local_5f[1] = s_getCurr_0036eaff[1];
  local_5f[2] = s_getCurr_0036eaff[2];
  local_5f[3] = s_getCurr_0036eaff[3];
  local_5f[4] = s_getCurr_0036eaff[4];
  local_5f[5] = s_getCurr_0036eaff[5];
  local_5f[6] = s_getCurr_0036eaff[6];
  cStack_58 = s_entRoute_0036eb06[0];
  acStack_57[0] = s_entRoute_0036eb06[1];
  acStack_57[1] = s_entRoute_0036eb06[2];
  acStack_57[2] = s_entRoute_0036eb06[3];
  acStack_57[3] = s_entRoute_0036eb06[4];
  acStack_57[4] = s_entRoute_0036eb06[5];
  acStack_57[5] = s_entRoute_0036eb06[6];
  acStack_57[6] = s_entRoute_0036eb06[7];
                    /* try { // try from 0075a744 to 0075a75b has its CatchHandler @ 0075a79c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0075a7d4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075a7d4  FUN_0075a7d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075a7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [7];
  char cStack_58;
  char acStack_57 [7];
  undefined1 local_50;
  undefined7 uStack_4f;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_60 = 0x1e;
  local_5f = s_getCurr_0036eaff;
  cStack_58 = s_entRoute_0036eb06[0];
  acStack_57 = (char  [7])s_entRoute_0036eb06._1_7_;
                    /* try { // try from 0075a830 to 0075a837 has its CatchHandler @ 0075a8f0 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 0075a864 to 0075a88f has its CatchHandler @ 0075a8d8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a78c8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075a920  facebook::react::NativeAuthenticationModuleSpecJSI::NativeAuthenticationModuleSpecJSI =====

/* facebook::react::NativeAuthenticationModuleSpecJSI::NativeAuthenticationModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeAuthenticationModuleSpecJSI::NativeAuthenticationModuleSpecJSI
          (NativeAuthenticationModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  undefined7 local_5f;
  char cStack_58;
  undefined3 uStack_57;
  undefined1 local_54;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097cb18;
  local_60 = 0x16;
  local_54 = 0;
  local_5f = (undefined7)s_sendAuthUrl_0036a0be._0_8_;
  _cStack_58 = CONCAT31(0x6c7255,SUB81(s_sendAuthUrl_0036a0be._0_8_,7));
                    /* try { // try from 0075a988 to 0075a99f has its CatchHandler @ 0075a9e4 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0075aa1c;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075aa1c  FUN_0075aa1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075aa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  undefined7 local_5f;
  char cStack_58;
  undefined3 uStack_57;
  undefined1 local_54;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x16;
  local_54 = 0;
  local_5f = (undefined7)s_sendAuthUrl_0036a0be._0_8_;
  _cStack_58 = CONCAT31(0x6c7255,SUB81(s_sendAuthUrl_0036a0be._0_8_,7));
                    /* try { // try from 0075aa7c to 0075aa83 has its CatchHandler @ 0075ab44 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0075aab8 to 0075aae3 has its CatchHandler @ 0075ab2c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a78d0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075ab74  facebook::react::NativeBrowserManagerModuleSpecJSI::NativeBrowserManagerModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeBrowserManagerModuleSpecJSI::NativeBrowserManagerModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeBrowserManagerModuleSpecJSI::NativeBrowserManagerModuleSpecJSI
          (NativeBrowserManagerModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  NativeBrowserManagerModuleSpecJSI *pNVar10;
  long *plVar11;
  byte *local_70;
  long *plStack_68;
  byte local_60;
  char acStack_5f [5];
  undefined2 uStack_5a;
  char cStack_58;
  undefined4 uStack_57;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  uint uStack_50;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  undefined1 uStack_49;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar10 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097cb58;
  local_60 = 0x18;
  cStack_53 = 0;
  uStack_57 = 0x73746e61;
  local_70 = &local_60;
  acStack_5f = SUB85(s_getConstants_0036b771._0_8_,0);
  uStack_5a = SUB82(s_getConstants_0036b771._0_8_,5);
  cStack_58 = SUB81(s_getConstants_0036b771._0_8_,7);
                    /* try { // try from 0075abdc to 0075abf7 has its CatchHandler @ 0075afe0 */
  lVar8 = FUN_00756964(pNVar10,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(code **)(lVar8 + 0x30) = FUN_0075b018;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT14(cStack_4c,uStack_50)))));
  }
  local_60 = 0x1a;
  local_70 = &local_60;
  cStack_52 = 0;
  acStack_5f[0] = s_selec_0036616d[0];
  acStack_5f[1] = s_selec_0036616d[1];
  acStack_5f[2] = s_selec_0036616d[2];
  acStack_5f[3] = s_selec_0036616d[3];
  acStack_5f[4] = s_selec_0036616d[4];
  uStack_5a = (undefined2)s_tBrowser_00366172._0_3_;
  cStack_58 = SUB31(s_tBrowser_00366172._0_3_,2);
  uStack_57 = (undefined4)s_tBrowser_00366172._3_5_;
  cStack_53 = SUB51(s_tBrowser_00366172._3_5_,4);
                    /* try { // try from 0075ac40 to 0075ac5b has its CatchHandler @ 0075afdc */
  lVar8 = FUN_00756964(pNVar10,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar8 + 0x28) = 1;
  *(code **)(lVar8 + 0x30) = FUN_0075b128;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT14(cStack_4c,uStack_50)))));
  }
  local_60 = 0x1e;
  local_70 = &local_60;
  uStack_50 = uStack_50 & 0xffffff00;
  acStack_5f = s_openInC_0036a582._0_5_;
  uStack_5a = s_openInC_0036a582._5_2_;
  cStack_58 = s_hromeURL_0036a589[0];
  uStack_57 = (undefined4)s_hromeURL_0036a589._1_7_;
  cStack_53 = SUB71(s_hromeURL_0036a589._1_7_,4);
  cStack_52 = SUB71(s_hromeURL_0036a589._1_7_,5);
  cStack_51 = SUB71(s_hromeURL_0036a589._1_7_,6);
                    /* try { // try from 0075aca8 to 0075acc3 has its CatchHandler @ 0075afd8 */
  lVar8 = FUN_00756964(pNVar10,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar8 + 0x28) = 1;
  *(code **)(lVar8 + 0x30) = FUN_0075b22c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT14(cStack_4c,uStack_50)))));
  }
  local_60 = 0x18;
  local_70 = &local_60;
  cStack_53 = 0;
  uStack_57 = 0x4c525570;
  acStack_5f = SUB85(s_openInAppURL_00369be5._0_8_,0);
  uStack_5a = SUB82(s_openInAppURL_00369be5._0_8_,5);
  cStack_58 = SUB81(s_openInAppURL_00369be5._0_8_,7);
                    /* try { // try from 0075ad14 to 0075ad2f has its CatchHandler @ 0075afd4 */
  lVar8 = FUN_00756964(pNVar10,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar8 + 0x28) = 1;
  *(code **)(lVar8 + 0x30) = FUN_0075b380;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT14(cStack_4c,uStack_50)))));
  }
  local_60 = 0x26;
  local_70 = &local_60;
  cStack_4c = 0;
  uStack_57 = (undefined4)s_openPlayStoreInline_00370928._8_8_;
  cStack_53 = SUB81(s_openPlayStoreInline_00370928._8_8_,4);
  cStack_52 = SUB81(s_openPlayStoreInline_00370928._8_8_,5);
  cStack_51 = SUB81(s_openPlayStoreInline_00370928._8_8_,6);
  uStack_50._0_1_ = SUB81(s_openPlayStoreInline_00370928._8_8_,7);
  uStack_50 = CONCAT31(0x656e69,(char)uStack_50);
  acStack_5f = SUB85(s_openPlayStoreInline_00370928._0_8_,0);
  uStack_5a = SUB82(s_openPlayStoreInline_00370928._0_8_,5);
  cStack_58 = SUB81(s_openPlayStoreInline_00370928._0_8_,7);
                    /* try { // try from 0075ad80 to 0075ad9b has its CatchHandler @ 0075afd0 */
  lVar8 = FUN_00756964(pNVar10,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar8 + 0x28) = 3;
  *(code **)(lVar8 + 0x30) = FUN_0075b4d8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT14(cStack_4c,uStack_50)))));
  }
  local_60 = 0x28;
  local_70 = &local_60;
  cStack_4b = 0;
  cStack_4c = 0x62;
  uStack_57 = (undefined4)s_openTrackedCustomTab_0036a592._8_8_;
  cStack_53 = SUB81(s_openTrackedCustomTab_0036a592._8_8_,4);
  cStack_52 = SUB81(s_openTrackedCustomTab_0036a592._8_8_,5);
  cStack_51 = SUB81(s_openTrackedCustomTab_0036a592._8_8_,6);
  uStack_50._0_1_ = SUB81(s_openTrackedCustomTab_0036a592._8_8_,7);
  uStack_50 = CONCAT31(0x61546d,(char)uStack_50);
  acStack_5f = SUB85(s_openTrackedCustomTab_0036a592._0_8_,0);
  uStack_5a = SUB82(s_openTrackedCustomTab_0036a592._0_8_,5);
  cStack_58 = SUB81(s_openTrackedCustomTab_0036a592._0_8_,7);
                    /* try { // try from 0075adec to 0075ae07 has its CatchHandler @ 0075afcc */
  lVar8 = FUN_00756964(pNVar10,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar8 + 0x28) = 1;
  *(code **)(lVar8 + 0x30) = FUN_0075b638;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT14(cStack_4c,uStack_50)))));
  }
  local_60 = 0x2c;
  local_70 = &local_60;
  uStack_49 = 0;
  uStack_57 = (undefined4)s_resumeTrackedC_0036d075._8_6_;
  cStack_53 = SUB61(s_resumeTrackedC_0036d075._8_6_,4);
  cStack_52 = SUB61(s_resumeTrackedC_0036d075._8_6_,5);
  acStack_5f = SUB85(s_resumeTrackedC_0036d075._0_8_,0);
  uStack_5a = SUB82(s_resumeTrackedC_0036d075._0_8_,5);
  cStack_58 = SUB81(s_resumeTrackedC_0036d075._0_8_,7);
  cStack_51 = (char)s_ustomTab_0036d083._0_2_;
  uStack_50 = (uint)(CONCAT62(s_ustomTab_0036d083._2_6_,s_ustomTab_0036d083._0_2_) >> 8);
  cStack_4c = SUB61(s_ustomTab_0036d083._2_6_,3);
  cStack_4b = SUB61(s_ustomTab_0036d083._2_6_,4);
  cStack_4a = SUB61(s_ustomTab_0036d083._2_6_,5);
                    /* try { // try from 0075ae54 to 0075ae6f has its CatchHandler @ 0075afc8 */
  lVar8 = FUN_00756964(pNVar10,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(code **)(lVar8 + 0x30) = FUN_0075b790;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT14(cStack_4c,uStack_50)))));
  }
                    /* try { // try from 0075ae8c to 0075ae93 has its CatchHandler @ 0075afc0 */
  FUN_0078307c(&local_70);
                    /* try { // try from 0075ae94 to 0075ae9b has its CatchHandler @ 0075afb0 */
  pcVar9 = (char *)operator_new(0x20);
  uVar5 = _UNK_00371468;
  uVar4 = _DAT_00371460;
  uVar3 = s_onTrackedCustomT_00369156._8_8_;
  uVar2 = s_onTrackedCustomT_00369156._0_8_;
  uStack_50 = (uint)pcVar9;
  cStack_4c = (char)((ulong)pcVar9 >> 0x20);
  cStack_4b = (char)((ulong)pcVar9 >> 0x28);
  cStack_4a = (char)((ulong)pcVar9 >> 0x30);
  uStack_49 = (undefined1)((ulong)pcVar9 >> 0x38);
  *(undefined8 *)(pcVar9 + 0x10) = s_abClosed_00369166._0_8_;
  local_40 = &local_60;
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined4)((ulong)uVar5 >> 8);
  cStack_53 = (char)((ulong)uVar5 >> 0x28);
  cStack_52 = (char)((ulong)uVar5 >> 0x30);
  cStack_51 = (char)((ulong)uVar5 >> 0x38);
  local_60 = (byte)uVar4;
  acStack_5f = SUB85((ulong)uVar4 >> 8,0);
  uStack_5a = (undefined2)((ulong)uVar4 >> 0x30);
  pcVar9[0x18] = '\0';
                    /* try { // try from 0075aed0 to 0075aedf has its CatchHandler @ 0075af98 */
  lVar8 = FUN_00782af4(this + 0x58,&local_60,&local_40);
  plVar7 = plStack_68;
  pbVar6 = local_70;
  plVar11 = *(long **)(lVar8 + 0x30);
  local_70 = (byte *)0x0;
  plStack_68 = (long *)0x0;
  *(long **)(lVar8 + 0x30) = plVar7;
  *(byte **)(lVar8 + 0x28) = pbVar6;
  if ((plVar11 != (long *)0x0) && (lVar8 = FUN_00757990(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)
     ) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,CONCAT14(cStack_4c,uStack_50)))));
  }
  plVar7 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar8 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar8 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0075af44 to 0075af4b has its CatchHandler @ 0075af94 */
  ::facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::
  configureEventEmitterCallback(this);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0075b018  FUN_0075b018 =====

void FUN_0075b018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x73746e61;
  local_33 = 0;
  local_58 = 0x22;
  local_3f = (char  [8])s_getConstants_0036b771._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__0036c3af._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__0036c3af._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__0036c3af._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 0075b088 to 0075b0a7 has its CatchHandler @ 0075b0e8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_009a78d8);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,cStack_48)));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075b128  FUN_0075b128 =====

void FUN_0075b128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [5];
  char acStack_3a [3];
  char acStack_37 [5];
  undefined1 local_32;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1a;
  local_3f = s_selec_0036616d;
  local_58[0] = 8;
  acStack_3a = (char  [3])s_tBrowser_00366172._0_3_;
  acStack_37 = (char  [5])s_tBrowser_00366172._3_5_;
  local_32 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 0075b18c to 0075b1ab has its CatchHandler @ 0075b1ec */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a78e0);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075b22c  FUN_0075b22c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075b22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [7];
  char cStack_58;
  char acStack_57 [7];
  undefined1 local_50;
  undefined7 uStack_4f;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_60 = 0x1e;
  local_5f = s_openInC_0036a582;
  cStack_58 = s_hromeURL_0036a589[0];
  acStack_57 = (char  [7])s_hromeURL_0036a589._1_7_;
                    /* try { // try from 0075b288 to 0075b28f has its CatchHandler @ 0075b350 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0075b2c4 to 0075b2ef has its CatchHandler @ 0075b338 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a78e8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075b380  FUN_0075b380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075b380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined4 local_57;
  undefined1 local_53;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x18;
  local_53 = 0;
  local_57 = 0x4c525570;
  local_5f = (char  [8])s_openInAppURL_00369be5._0_8_;
                    /* try { // try from 0075b3e0 to 0075b3e7 has its CatchHandler @ 0075b4a8 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0075b41c to 0075b447 has its CatchHandler @ 0075b490 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a78f0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075b4d8  FUN_0075b4d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075b4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  undefined4 uStack_50;
  uint uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x26;
  uStack_4c = uStack_4c & 0xffffff00;
  uStack_57 = (undefined7)s_openPlayStoreInline_00370928._8_8_;
  uStack_50 = CONCAT31(0x656e69,SUB81(s_openPlayStoreInline_00370928._8_8_,7));
  local_5f = (char  [8])s_openPlayStoreInline_00370928._0_8_;
                    /* try { // try from 0075b538 to 0075b53f has its CatchHandler @ 0075b608 */
  local_70 = (char *)operator_new(0x70);
  uVar4 = s_cebook_react_b_00364e79._0_8_;
  uVar3 = s_Callback_Lcom_fa_00364e69._0_8_;
  uVar2 = CONCAT26(s_ridge_Promise__V_00364e87._0_2_,s_cebook_react_b_00364e79._8_6_);
  uStack_78 = _UNK_00371578;
  local_80 = _s_q_00371570;
  *(undefined8 *)(local_70 + 0x48) = s_Callback_Lcom_fa_00364e69._8_8_;
  *(undefined8 *)(local_70 + 0x40) = uVar3;
  *(undefined8 *)(local_70 + 0x58) = uVar2;
  *(undefined8 *)(local_70 + 0x50) = uVar4;
  uVar3 = s_ridge_Promise__V_00364e87._8_8_;
  uVar2 = CONCAT62(s_ridge_Promise__V_00364e87._2_6_,s_ridge_Promise__V_00364e87._0_2_);
  local_70[0x6e] = '\0';
  *(undefined8 *)(local_70 + 0x66) = uVar3;
  *(undefined8 *)(local_70 + 0x5e) = uVar2;
  uVar4 = s_ng_Ljava_lang_Do_00364e39._8_8_;
  uVar3 = s_ng_Ljava_lang_Do_00364e39._0_8_;
  uVar2 = s__Ljava_lang_Stri_00364e29._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_00364e29._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_ok_react_bridge__00364e59._8_8_;
  uVar3 = s_ok_react_bridge__00364e59._0_8_;
  uVar2 = s_uble_Lcom_facebo_00364e49._0_8_;
  *(undefined8 *)(local_70 + 0x28) = s_uble_Lcom_facebo_00364e49._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x38) = uVar4;
  *(undefined8 *)(local_70 + 0x30) = uVar3;
                    /* try { // try from 0075b57c to 0075b5a7 has its CatchHandler @ 0075b5f0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a78f8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,uStack_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075b638  FUN_0075b638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075b638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x6261546d;
  uStack_57 = (undefined7)s_openTrackedCustomTab_0036a592._8_8_;
  cStack_50 = SUB81(s_openTrackedCustomTab_0036a592._8_8_,7);
  local_5f = (char  [8])s_openTrackedCustomTab_0036a592._0_8_;
                    /* try { // try from 0075b698 to 0075b69f has its CatchHandler @ 0075b760 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0075b6d4 to 0075b6ff has its CatchHandler @ 0075b748 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7900);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075b790  FUN_0075b790 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075b790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  char acStack_57 [6];
  char cStack_51;
  char cStack_50;
  char acStack_4f [6];
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x2c;
  uStack_49 = 0;
  acStack_57 = (char  [6])s_resumeTrackedC_0036d075._8_6_;
  local_5f = (char  [8])s_resumeTrackedC_0036d075._0_8_;
  cStack_51 = (char)s_ustomTab_0036d083._0_2_;
  cStack_50 = SUB21(s_ustomTab_0036d083._0_2_,1);
  acStack_4f = (char  [6])s_ustomTab_0036d083._2_6_;
                    /* try { // try from 0075b7ec to 0075b7f3 has its CatchHandler @ 0075b8ac */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 0075b820 to 0075b84b has its CatchHandler @ 0075b894 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7908);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT61(acStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075b8dc  FUN_0075b8dc =====

void FUN_0075b8dc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0075b92c  facebook::react::NativeCacheModuleSpecJSI::NativeCacheModuleSpecJSI =====

/* facebook::react::NativeCacheModuleSpecJSI::NativeCacheModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeCacheModuleSpecJSI::NativeCacheModuleSpecJSI
          (NativeCacheModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeCacheModuleSpecJSI *pNVar3;
  byte local_60;
  undefined8 local_5f;
  undefined2 local_57;
  undefined1 local_55;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097cb98;
  local_60 = 0xe;
  local_5f = 0x68736572666572;
                    /* try { // try from 0075b990 to 0075b9ab has its CatchHandler @ 0075bb94 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0075bbcc;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0xe;
  local_5f = 0x6d657449746567;
                    /* try { // try from 0075b9f8 to 0075ba13 has its CatchHandler @ 0075bb90 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0075bd20;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0xe;
  local_5f = 0x6d657449746573;
                    /* try { // try from 0075ba60 to 0075ba7b has its CatchHandler @ 0075bb8c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_0075be74;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x14;
  local_57 = 0x6d65;
  local_5f._0_1_ = s_removeItem_0036779b[0];
  local_5f._1_1_ = s_removeItem_0036779b[1];
  local_5f._2_1_ = s_removeItem_0036779b[2];
  local_5f._3_1_ = s_removeItem_0036779b[3];
  local_5f._4_1_ = s_removeItem_0036779b[4];
  local_5f._5_1_ = s_removeItem_0036779b[5];
  local_5f._6_1_ = s_removeItem_0036779b[6];
  local_5f._7_1_ = s_removeItem_0036779b[7];
  local_55 = 0;
                    /* try { // try from 0075bac8 to 0075bae3 has its CatchHandler @ 0075bb88 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0075bfc0;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 10;
  local_5f = CONCAT26(local_5f._6_2_,0x7200000000);
  local_5f = CONCAT44(local_5f._4_4_,0x61656c63);
                    /* try { // try from 0075bb28 to 0075bb43 has its CatchHandler @ 0075bb84 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0075c0d0;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075bbcc  FUN_0075bbcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075bbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x72;
  local_60[2] = 0x65;
  local_60[3] = 0x66;
  local_60[4] = 0x72;
  local_60[5] = 0x65;
  local_60[6] = 0x73;
  local_60[7] = 0x68;
                    /* try { // try from 0075bc28 to 0075bc2f has its CatchHandler @ 0075bcf0 */
  local_70 = (char *)operator_new(0x50);
  uVar4 = s_acebook_react_b_0036d89f._0_8_;
  uVar3 = s_ableArray_Lcom_f_0036d88f._0_8_;
  uVar2 = CONCAT17(s_ridge_Promise__V_0036d8ae[0],s_acebook_react_b_0036d89f._8_7_);
  uStack_78 = _UNK_00372d38;
  local_80 = _DAT_00372d30;
  *(undefined8 *)(local_70 + 0x28) = s_ableArray_Lcom_f_0036d88f._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar3;
  *(undefined8 *)(local_70 + 0x38) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar3 = s_ridge_Promise__V_0036d8ae._8_8_;
  uVar2 = CONCAT71(s_ridge_Promise__V_0036d8ae._1_7_,s_ridge_Promise__V_0036d8ae[0]);
  local_70[0x4f] = '\0';
  *(undefined8 *)(local_70 + 0x47) = uVar3;
  *(undefined8 *)(local_70 + 0x3f) = uVar2;
  uVar4 = s_eact_bridge_Read_0036d87f._8_8_;
  uVar3 = s_eact_bridge_Read_0036d87f._0_8_;
  uVar2 = s__Lcom_facebook_r_0036d86f._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_0036d86f._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 0075bc64 to 0075bc8f has its CatchHandler @ 0075bcd8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,local_60,&local_80,param_4,param_5,&DAT_009a7910);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075bd20  FUN_0075bd20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075bd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x67;
  local_60[2] = 0x65;
  local_60[3] = 0x74;
  local_60[4] = 0x49;
  local_60[5] = 0x74;
  local_60[6] = 0x65;
  local_60[7] = 0x6d;
                    /* try { // try from 0075bd7c to 0075bd83 has its CatchHandler @ 0075be44 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0075bdb8 to 0075bde3 has its CatchHandler @ 0075be2c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,local_60,&local_80,param_4,param_5,&DAT_009a7918);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075be74  FUN_0075be74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075be74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x73;
  local_60[2] = 0x65;
  local_60[3] = 0x74;
  local_60[4] = 0x49;
  local_60[5] = 0x74;
  local_60[6] = 0x65;
  local_60[7] = 0x6d;
                    /* try { // try from 0075bed0 to 0075bed7 has its CatchHandler @ 0075bf90 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_ng_Ljava_lang_S_0036f287._0_8_;
  uVar4 = s__Ljava_lang_Stri_0036f277._0_8_;
  uVar2 = CONCAT17(s_tring__V_0036f296[0],s_ng_Ljava_lang_S_0036f287._8_7_);
  uVar3 = CONCAT71(s_tring__V_0036f296._1_7_,s_tring__V_0036f296[0]);
  uStack_78 = _UNK_00371d88;
  local_80 = _DAT_00371d80;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f277._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1f) = uVar3;
  local_70[0x27] = '\0';
                    /* try { // try from 0075bf04 to 0075bf2f has its CatchHandler @ 0075bf78 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,local_60,&local_80,param_4,param_5,&DAT_009a7920);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075bfc0  FUN_0075bfc0 =====

void FUN_0075bfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  char local_3f [8];
  undefined2 local_37;
  undefined1 local_35;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_37 = 0x6d65;
  local_40 = 0x14;
  local_58 = 0x2a;
  local_35 = 0;
  local_3f = (char  [8])s_removeItem_0036779b._0_8_;
  acStack_4f = (char  [5])s__Ljava_lang_S_0036ec45._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036ec45._0_8_;
  uStack_4a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_48 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_47 = (char  [5])s_tring__V_0036ec52._3_5_;
  uStack_42 = 0;
                    /* try { // try from 0075c030 to 0075c04f has its CatchHandler @ 0075c090 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_009a7928);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075c0d0  FUN_0075c0d0 =====

void FUN_0075c0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 10;
  local_40[1] = 99;
  local_40[2] = 0x6c;
  local_40[3] = 0x65;
  local_40[4] = 0x61;
  local_40[5] = 0x72;
  local_40[6] = 0;
  local_58[0] = 6;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0075c128 to 0075c147 has its CatchHandler @ 0075c188 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,local_40,local_58,param_3,param_4,&DAT_009a7930);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075c1c8  facebook::react::NativeCallKitModuleSpecJSI::NativeCallKitModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeCallKitModuleSpecJSI::NativeCallKitModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeCallKitModuleSpecJSI::NativeCallKitModuleSpecJSI
          (NativeCallKitModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined2 uVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  long lVar19;
  char *pcVar20;
  NativeCallKitModuleSpecJSI *pNVar21;
  long *plVar22;
  uint *local_70;
  long *plStack_68;
  uint local_60;
  undefined4 uStack_5c;
  char cStack_58;
  undefined2 uStack_57;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  undefined2 uStack_4f;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  undefined1 uStack_49;
  uint *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar21 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097cbd8;
  uStack_4f = 0x72;
  local_70 = &local_60;
  uStack_57 = (undefined2)s_initializeManager_0036617b._8_8_;
  cStack_55 = SUB81(s_initializeManager_0036617b._8_8_,2);
  cStack_54 = SUB81(s_initializeManager_0036617b._8_8_,3);
  cStack_53 = SUB81(s_initializeManager_0036617b._8_8_,4);
  cStack_52 = SUB81(s_initializeManager_0036617b._8_8_,5);
  cStack_51 = SUB81(s_initializeManager_0036617b._8_8_,6);
  cStack_50 = SUB81(s_initializeManager_0036617b._8_8_,7);
  local_60._1_3_ = (undefined3)s_initializeManager_0036617b._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x22);
  uStack_5c = SUB84(s_initializeManager_0036617b._0_8_,3);
  cStack_58 = SUB81(s_initializeManager_0036617b._0_8_,7);
                    /* try { // try from 0075c228 to 0075c243 has its CatchHandler @ 0075cb90 */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 0;
  *(code **)(lVar19 + 0x30) = FUN_0075cbc8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  local_70 = &local_60;
  cStack_4a = 0;
  uStack_57 = (undefined2)s_reportNewInco_00369bf2._8_5_;
  cStack_55 = SUB51(s_reportNewInco_00369bf2._8_5_,2);
  cStack_54 = SUB51(s_reportNewInco_00369bf2._8_5_,3);
  cStack_53 = SUB51(s_reportNewInco_00369bf2._8_5_,4);
  local_60._1_3_ = (undefined3)s_reportNewInco_00369bf2._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x2a);
  uStack_5c = SUB84(s_reportNewInco_00369bf2._0_8_,3);
  cStack_58 = SUB81(s_reportNewInco_00369bf2._0_8_,7);
  cStack_52 = (char)s_mingCall_00369bff._0_3_;
  cStack_51 = SUB31(s_mingCall_00369bff._0_3_,1);
  cStack_50 = SUB31(s_mingCall_00369bff._0_3_,2);
  uStack_4f = (undefined2)s_mingCall_00369bff._3_5_;
  cStack_4d = SUB51(s_mingCall_00369bff._3_5_,2);
  cStack_4c = SUB51(s_mingCall_00369bff._3_5_,3);
  cStack_4b = SUB51(s_mingCall_00369bff._3_5_,4);
                    /* try { // try from 0075c28c to 0075c2a7 has its CatchHandler @ 0075cb8c */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 4;
  *(code **)(lVar19 + 0x30) = FUN_0075ccc4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
                    /* try { // try from 0075c2c8 to 0075c2cf has its CatchHandler @ 0075cb84 */
  pcVar20 = (char *)operator_new(0x30);
  uVar7 = _UNK_00371f28;
  uVar6 = _DAT_00371f20;
  uVar5 = s_llStartedConnecting_003695ce._8_8_;
  uVar4 = s_llStartedConnecting_003695ce._0_8_;
  uVar3 = s_reportOutgoingCa_003695be._8_8_;
  uVar2 = s_reportOutgoingCa_003695be._0_8_;
  local_70 = &local_60;
  cStack_50 = (char)pcVar20;
  uStack_4f = (undefined2)((ulong)pcVar20 >> 8);
  cStack_4d = (char)((ulong)pcVar20 >> 0x18);
  cStack_4c = (char)((ulong)pcVar20 >> 0x20);
  cStack_4b = (char)((ulong)pcVar20 >> 0x28);
  cStack_4a = (char)((ulong)pcVar20 >> 0x30);
  uStack_49 = (undefined1)((ulong)pcVar20 >> 0x38);
  pcVar20[0x1f] = 't';
  pcVar20[0x20] = 'i';
  pcVar20[0x21] = 'n';
  pcVar20[0x22] = 'g';
  cStack_58 = (char)uVar7;
  uStack_57 = (undefined2)((ulong)uVar7 >> 8);
  cStack_55 = (char)((ulong)uVar7 >> 0x18);
  cStack_54 = (char)((ulong)uVar7 >> 0x20);
  cStack_53 = (char)((ulong)uVar7 >> 0x28);
  cStack_52 = (char)((ulong)uVar7 >> 0x30);
  cStack_51 = (char)((ulong)uVar7 >> 0x38);
  local_60 = (uint)uVar6;
  uStack_5c = (undefined4)((ulong)uVar6 >> 0x20);
  *(undefined8 *)(pcVar20 + 8) = uVar3;
  *(undefined8 *)pcVar20 = uVar2;
  *(undefined8 *)(pcVar20 + 0x18) = uVar5;
  *(undefined8 *)(pcVar20 + 0x10) = uVar4;
  pcVar20[0x23] = '\0';
                    /* try { // try from 0075c308 to 0075c323 has its CatchHandler @ 0075cb80 */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 1;
  *(code **)(lVar19 + 0x30) = FUN_0075ce18;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
                    /* try { // try from 0075c344 to 0075c34b has its CatchHandler @ 0075cb7c */
  pcVar20 = (char *)operator_new(0x20);
  uVar6 = _UNK_00371b28;
  uVar5 = _s___00371b20;
  uVar4 = s_ingCallConnected_00364cdb._8_8_;
  uVar3 = s_reportOutgo_00364cd0._0_8_;
  uVar2 = CONCAT35(s_ingCallConnected_00364cdb._5_3_,s_ingCallConnected_00364cdb._0_5_);
  local_70 = &local_60;
  cStack_50 = (char)pcVar20;
  uStack_4f = (undefined2)((ulong)pcVar20 >> 8);
  cStack_4d = (char)((ulong)pcVar20 >> 0x18);
  cStack_4c = (char)((ulong)pcVar20 >> 0x20);
  cStack_4b = (char)((ulong)pcVar20 >> 0x28);
  cStack_4a = (char)((ulong)pcVar20 >> 0x30);
  uStack_49 = (undefined1)((ulong)pcVar20 >> 0x38);
  *(ulong *)(pcVar20 + 8) = CONCAT53(s_ingCallConnected_00364cdb._0_5_,s_reportOutgo_00364cd0._8_3_)
  ;
  *(undefined8 *)pcVar20 = uVar3;
  *(undefined8 *)(pcVar20 + 0x13) = uVar4;
  *(undefined8 *)(pcVar20 + 0xb) = uVar2;
  cStack_58 = (char)uVar6;
  cVar12 = cStack_58;
  uStack_57 = (undefined2)((ulong)uVar6 >> 8);
  uVar13 = uStack_57;
  cStack_55 = (char)((ulong)uVar6 >> 0x18);
  cVar14 = cStack_55;
  cStack_54 = (char)((ulong)uVar6 >> 0x20);
  cVar15 = cStack_54;
  cStack_53 = (char)((ulong)uVar6 >> 0x28);
  cVar16 = cStack_53;
  cStack_52 = (char)((ulong)uVar6 >> 0x30);
  cVar17 = cStack_52;
  cStack_51 = (char)((ulong)uVar6 >> 0x38);
  cVar18 = cStack_51;
  local_60 = (uint)uVar5;
  uVar10 = local_60;
  uStack_5c = (undefined4)((ulong)uVar5 >> 0x20);
  uVar11 = uStack_5c;
  pcVar20[0x1b] = '\0';
                    /* try { // try from 0075c384 to 0075c39f has its CatchHandler @ 0075cb78 */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 1;
  *(code **)(lVar19 + 0x30) = FUN_0075cf60;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  local_70 = &local_60;
  uStack_57 = 0x6c6c;
  local_60._1_3_ = (undefined3)s_reportCall_0036a5a7._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x14);
  uStack_5c = SUB84(s_reportCall_0036a5a7._0_8_,3);
  cStack_58 = SUB81(s_reportCall_0036a5a7._0_8_,7);
  cStack_55 = 0;
                    /* try { // try from 0075c3ec to 0075c407 has its CatchHandler @ 0075cb74 */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 4;
  *(code **)(lVar19 + 0x30) = FUN_0075d0a4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  local_70 = &local_60;
  cStack_50 = 0;
  local_60._1_3_ = s_reportC_0036a5b2._0_3_;
  local_60 = CONCAT31(local_60._1_3_,0x1e);
  uStack_5c = s_reportC_0036a5b2._3_4_;
  cStack_58 = s_allEnded_0036a5b9[0];
  uStack_57 = (undefined2)s_allEnded_0036a5b9._1_7_;
  cStack_55 = SUB71(s_allEnded_0036a5b9._1_7_,2);
  cStack_54 = SUB71(s_allEnded_0036a5b9._1_7_,3);
  cStack_53 = SUB71(s_allEnded_0036a5b9._1_7_,4);
  cStack_52 = SUB71(s_allEnded_0036a5b9._1_7_,5);
  cStack_51 = SUB71(s_allEnded_0036a5b9._1_7_,6);
                    /* try { // try from 0075c454 to 0075c46f has its CatchHandler @ 0075cb70 */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 1;
  *(code **)(lVar19 + 0x30) = FUN_0075d1f8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  local_70 = &local_60;
  uStack_57 = 0x6c;
  local_60._1_3_ = (undefined3)s_startCall_0036abe4._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x12);
  uStack_5c = SUB84(s_startCall_0036abe4._0_8_,3);
  cStack_58 = SUB81(s_startCall_0036abe4._0_8_,7);
                    /* try { // try from 0075c4b8 to 0075c4d3 has its CatchHandler @ 0075cb6c */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 4;
  *(code **)(lVar19 + 0x30) = FUN_0075d308;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  cStack_58 = 0;
  local_60 = 0x646e650e;
  uStack_5c = 0x6c6c6143;
  local_70 = &local_60;
                    /* try { // try from 0075c520 to 0075c53b has its CatchHandler @ 0075cb68 */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 1;
  *(code **)(lVar19 + 0x30) = FUN_0075d460;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  local_70 = &local_60;
  uStack_57 = 0x6c6c;
  local_60._1_3_ = (undefined3)s_answerCall_0036bee1._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x14);
  uStack_5c = SUB84(s_answerCall_0036bee1._0_8_,3);
  cStack_58 = SUB81(s_answerCall_0036bee1._0_8_,7);
  cStack_55 = 0;
                    /* try { // try from 0075c588 to 0075c5a3 has its CatchHandler @ 0075cb64 */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 1;
  *(code **)(lVar19 + 0x30) = FUN_0075d5b4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  local_70 = &local_60;
  cStack_53 = 0;
  uStack_57 = 0x6143;
  cStack_55 = 0x6c;
  cStack_54 = 0x6c;
  local_60._1_3_ = (undefined3)s_setMutedCall_0036f6fa._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x18);
  uStack_5c = SUB84(s_setMutedCall_0036f6fa._0_8_,3);
  cStack_58 = SUB81(s_setMutedCall_0036f6fa._0_8_,7);
                    /* try { // try from 0075c5f4 to 0075c60f has its CatchHandler @ 0075cb60 */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 2;
  *(code **)(lVar19 + 0x30) = FUN_0075d708;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  local_70 = &local_60;
  cStack_4c = 0;
  uStack_4f = 0x6e6f;
  cStack_4d = 0x65;
  uStack_57 = (undefined2)s_setIncomingRingtone_00367190._8_8_;
  cStack_55 = SUB81(s_setIncomingRingtone_00367190._8_8_,2);
  cStack_54 = SUB81(s_setIncomingRingtone_00367190._8_8_,3);
  cStack_53 = SUB81(s_setIncomingRingtone_00367190._8_8_,4);
  cStack_52 = SUB81(s_setIncomingRingtone_00367190._8_8_,5);
  cStack_51 = SUB81(s_setIncomingRingtone_00367190._8_8_,6);
  cStack_50 = SUB81(s_setIncomingRingtone_00367190._8_8_,7);
  local_60._1_3_ = (undefined3)s_setIncomingRingtone_00367190._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x26);
  uStack_5c = SUB84(s_setIncomingRingtone_00367190._0_8_,3);
  cStack_58 = SUB81(s_setIncomingRingtone_00367190._0_8_,7);
                    /* try { // try from 0075c660 to 0075c67b has its CatchHandler @ 0075cb5c */
  lVar19 = FUN_00756964(pNVar21,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar19 + 0x28) = 1;
  *(code **)(lVar19 + 0x30) = FUN_0075d860;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
                    /* try { // try from 0075c69c to 0075c6a3 has its CatchHandler @ 0075cb58 */
  FUN_0078307c(&local_70);
                    /* try { // try from 0075c6a4 to 0075c6ab has its CatchHandler @ 0075cb48 */
  pcVar20 = (char *)operator_new(0x20);
  uVar5 = _UNK_00372d28;
  uVar4 = _s___00372d20;
  uVar3 = s_onStartCallNoti_0036eb0f._0_8_;
  uVar2 = CONCAT71(s_fication_0036eb1e._1_7_,s_fication_0036eb1e[0]);
  cStack_50 = (char)pcVar20;
  uStack_4f = (undefined2)((ulong)pcVar20 >> 8);
  cStack_4d = (char)((ulong)pcVar20 >> 0x18);
  cStack_4c = (char)((ulong)pcVar20 >> 0x20);
  cStack_4b = (char)((ulong)pcVar20 >> 0x28);
  cStack_4a = (char)((ulong)pcVar20 >> 0x30);
  uStack_49 = (undefined1)((ulong)pcVar20 >> 0x38);
  *(ulong *)(pcVar20 + 8) = CONCAT17(s_fication_0036eb1e[0],s_onStartCallNoti_0036eb0f._8_7_);
  *(undefined8 *)pcVar20 = uVar3;
  *(undefined8 *)(pcVar20 + 0xf) = uVar2;
  local_40 = &local_60;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined2)((ulong)uVar5 >> 8);
  cStack_55 = (char)((ulong)uVar5 >> 0x18);
  cStack_54 = (char)((ulong)uVar5 >> 0x20);
  cStack_53 = (char)((ulong)uVar5 >> 0x28);
  cStack_52 = (char)((ulong)uVar5 >> 0x30);
  cStack_51 = (char)((ulong)uVar5 >> 0x38);
  local_60 = (uint)uVar4;
  uStack_5c = (undefined4)((ulong)uVar4 >> 0x20);
  pcVar20[0x17] = '\0';
                    /* try { // try from 0075c6e0 to 0075c6ef has its CatchHandler @ 0075cb30 */
  lVar19 = FUN_00782af4(this + 0x58,&local_60,&local_40);
  plVar9 = plStack_68;
  puVar8 = local_70;
  plVar22 = *(long **)(lVar19 + 0x30);
  local_70 = (uint *)0x0;
  plStack_68 = (long *)0x0;
  *(long **)(lVar19 + 0x30) = plVar9;
  *(uint **)(lVar19 + 0x28) = puVar8;
  if ((plVar22 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plVar22 + 1), lVar19 == 0)) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  plVar9 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar19 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0075c754 to 0075c75b has its CatchHandler @ 0075cb2c */
  FUN_0078307c(&local_70);
                    /* try { // try from 0075c75c to 0075c763 has its CatchHandler @ 0075cb28 */
  pcVar20 = (char *)operator_new(0x20);
  uVar5 = _UNK_00371468;
  uVar4 = _DAT_00371460;
  uVar3 = s_onPerformStartCa_00366d29._8_8_;
  uVar2 = s_onPerformStartCa_00366d29._0_8_;
  cStack_50 = (char)pcVar20;
  uStack_4f = (undefined2)((ulong)pcVar20 >> 8);
  cStack_4d = (char)((ulong)pcVar20 >> 0x18);
  cStack_4c = (char)((ulong)pcVar20 >> 0x20);
  cStack_4b = (char)((ulong)pcVar20 >> 0x28);
  cStack_4a = (char)((ulong)pcVar20 >> 0x30);
  uStack_49 = (undefined1)((ulong)pcVar20 >> 0x38);
  *(undefined8 *)(pcVar20 + 0x10) = s_llAction_00366d39._0_8_;
  local_40 = &local_60;
  *(undefined8 *)(pcVar20 + 8) = uVar3;
  *(undefined8 *)pcVar20 = uVar2;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined2)((ulong)uVar5 >> 8);
  cStack_55 = (char)((ulong)uVar5 >> 0x18);
  cStack_54 = (char)((ulong)uVar5 >> 0x20);
  cStack_53 = (char)((ulong)uVar5 >> 0x28);
  cStack_52 = (char)((ulong)uVar5 >> 0x30);
  cStack_51 = (char)((ulong)uVar5 >> 0x38);
  local_60 = (uint)uVar4;
  uStack_5c = (undefined4)((ulong)uVar4 >> 0x20);
  pcVar20[0x18] = '\0';
                    /* try { // try from 0075c798 to 0075c7a7 has its CatchHandler @ 0075cb24 */
  lVar19 = FUN_00782af4(this + 0x58,&local_60,&local_40);
  plVar9 = plStack_68;
  puVar8 = local_70;
  plVar22 = *(long **)(lVar19 + 0x30);
  local_70 = (uint *)0x0;
  plStack_68 = (long *)0x0;
  *(long **)(lVar19 + 0x30) = plVar9;
  *(uint **)(lVar19 + 0x28) = puVar8;
  if ((plVar22 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plVar22 + 1), lVar19 == 0)) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  plVar9 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar19 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0075c80c to 0075c813 has its CatchHandler @ 0075cb20 */
  FUN_0078307c(&local_70);
                    /* try { // try from 0075c814 to 0075c81b has its CatchHandler @ 0075cb1c */
  pcVar20 = (char *)operator_new(0x20);
  uVar6 = _UNK_00371d78;
  uVar5 = _s___00371d70;
  uVar4 = s_AnswerCallAction_00366d4b._8_8_;
  uVar3 = s_onPerform_00366d42._0_8_;
  uVar2 = CONCAT17(s_AnswerCallAction_00366d4b[7],s_AnswerCallAction_00366d4b._0_7_);
  local_40 = &local_60;
  cStack_50 = (char)pcVar20;
  uStack_4f = (undefined2)((ulong)pcVar20 >> 8);
  cStack_4d = (char)((ulong)pcVar20 >> 0x18);
  cStack_4c = (char)((ulong)pcVar20 >> 0x20);
  cStack_4b = (char)((ulong)pcVar20 >> 0x28);
  cStack_4a = (char)((ulong)pcVar20 >> 0x30);
  uStack_49 = (undefined1)((ulong)pcVar20 >> 0x38);
  *(ulong *)(pcVar20 + 8) = CONCAT71(s_AnswerCallAction_00366d4b._0_7_,s_onPerform_00366d42[8]);
  *(undefined8 *)pcVar20 = uVar3;
  *(undefined8 *)(pcVar20 + 0x11) = uVar4;
  *(undefined8 *)(pcVar20 + 9) = uVar2;
  cStack_58 = (char)uVar6;
  uStack_57 = (undefined2)((ulong)uVar6 >> 8);
  cStack_55 = (char)((ulong)uVar6 >> 0x18);
  cStack_54 = (char)((ulong)uVar6 >> 0x20);
  cStack_53 = (char)((ulong)uVar6 >> 0x28);
  cStack_52 = (char)((ulong)uVar6 >> 0x30);
  cStack_51 = (char)((ulong)uVar6 >> 0x38);
  local_60 = (uint)uVar5;
  uStack_5c = (undefined4)((ulong)uVar5 >> 0x20);
  pcVar20[0x19] = '\0';
                    /* try { // try from 0075c850 to 0075c85f has its CatchHandler @ 0075cb18 */
  lVar19 = FUN_00782af4(this + 0x58,&local_60,&local_40);
  plVar9 = plStack_68;
  puVar8 = local_70;
  plVar22 = *(long **)(lVar19 + 0x30);
  local_70 = (uint *)0x0;
  plStack_68 = (long *)0x0;
  *(long **)(lVar19 + 0x30) = plVar9;
  *(uint **)(lVar19 + 0x28) = puVar8;
  if ((plVar22 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plVar22 + 1), lVar19 == 0)) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  plVar9 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar19 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0075c8c4 to 0075c8cb has its CatchHandler @ 0075cb14 */
  FUN_0078307c(&local_70);
  local_40 = &local_60;
  uStack_49 = 0;
  uStack_57 = (undefined2)s_onPerformEndCa_00367e2a._8_6_;
  cStack_55 = SUB61(s_onPerformEndCa_00367e2a._8_6_,2);
  cStack_54 = SUB61(s_onPerformEndCa_00367e2a._8_6_,3);
  cStack_53 = SUB61(s_onPerformEndCa_00367e2a._8_6_,4);
  cStack_52 = SUB61(s_onPerformEndCa_00367e2a._8_6_,5);
  local_60._1_3_ = (undefined3)s_onPerformEndCa_00367e2a._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x2c);
  uStack_5c = SUB84(s_onPerformEndCa_00367e2a._0_8_,3);
  cStack_58 = SUB81(s_onPerformEndCa_00367e2a._0_8_,7);
  cStack_51 = (char)s_llAction_00367e38._0_2_;
  cStack_50 = SUB21(s_llAction_00367e38._0_2_,1);
  uStack_4f = (undefined2)s_llAction_00367e38._2_6_;
  cStack_4d = SUB61(s_llAction_00367e38._2_6_,2);
  cStack_4c = SUB61(s_llAction_00367e38._2_6_,3);
  cStack_4b = SUB61(s_llAction_00367e38._2_6_,4);
  cStack_4a = SUB61(s_llAction_00367e38._2_6_,5);
                    /* try { // try from 0075c8f8 to 0075c907 has its CatchHandler @ 0075cb10 */
  lVar19 = FUN_00782af4(this + 0x58,&local_60,&local_40);
  plVar9 = plStack_68;
  puVar8 = local_70;
  plVar22 = *(long **)(lVar19 + 0x30);
  local_70 = (uint *)0x0;
  plStack_68 = (long *)0x0;
  *(long **)(lVar19 + 0x30) = plVar9;
  *(uint **)(lVar19 + 0x28) = puVar8;
  if ((plVar22 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plVar22 + 1), lVar19 == 0)) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  plVar9 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar19 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0075c96c to 0075c973 has its CatchHandler @ 0075cb0c */
  FUN_0078307c(&local_70);
                    /* try { // try from 0075c974 to 0075c97b has its CatchHandler @ 0075cb08 */
  pcVar20 = (char *)operator_new(0x20);
  uVar4 = s_tMutedCallAction_0036b799._8_8_;
  uVar3 = s_onPerformSe_0036b78e._0_8_;
  cStack_50 = (char)pcVar20;
  uStack_4f = (undefined2)((ulong)pcVar20 >> 8);
  cStack_4d = (char)((ulong)pcVar20 >> 0x18);
  cStack_4c = (char)((ulong)pcVar20 >> 0x20);
  cStack_4b = (char)((ulong)pcVar20 >> 0x28);
  cStack_4a = (char)((ulong)pcVar20 >> 0x30);
  uStack_49 = (undefined1)((ulong)pcVar20 >> 0x38);
  uVar2 = CONCAT35(s_tMutedCallAction_0036b799._5_3_,s_tMutedCallAction_0036b799._0_5_);
  local_40 = &local_60;
  *(ulong *)(pcVar20 + 8) = CONCAT53(s_tMutedCallAction_0036b799._0_5_,s_onPerformSe_0036b78e._8_3_)
  ;
  *(undefined8 *)pcVar20 = uVar3;
  *(undefined8 *)(pcVar20 + 0x13) = uVar4;
  *(undefined8 *)(pcVar20 + 0xb) = uVar2;
  pcVar20[0x1b] = '\0';
                    /* try { // try from 0075c9ac to 0075c9bb has its CatchHandler @ 0075cb04 */
  local_60 = uVar10;
  uStack_5c = uVar11;
  cStack_58 = cVar12;
  uStack_57 = uVar13;
  cStack_55 = cVar14;
  cStack_54 = cVar15;
  cStack_53 = cVar16;
  cStack_52 = cVar17;
  cStack_51 = cVar18;
  lVar19 = FUN_00782af4(this + 0x58,&local_60,&local_40);
  plVar9 = plStack_68;
  puVar8 = local_70;
  plVar22 = *(long **)(lVar19 + 0x30);
  local_70 = (uint *)0x0;
  plStack_68 = (long *)0x0;
  *(long **)(lVar19 + 0x30) = plVar9;
  *(uint **)(lVar19 + 0x28) = puVar8;
  if ((plVar22 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plVar22 + 1), lVar19 == 0)) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT13(cStack_4d,
                                                                         CONCAT21(uStack_4f,
                                                                                  cStack_50)))))));
  }
  plVar9 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar19 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar19 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0075ca20 to 0075ca27 has its CatchHandler @ 0075cb00 */
  ::facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::
  configureEventEmitterCallback(this);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0075cbc8  FUN_0075cbc8 =====

void FUN_0075cbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined2 uStack_2f;
  undefined5 uStack_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x22;
  uStack_2f = 0x72;
  local_58[0] = 6;
  uStack_37 = (undefined7)s_initializeManager_0036617b._8_8_;
  cStack_30 = SUB81(s_initializeManager_0036617b._8_8_,7);
  local_3f = (char  [8])s_initializeManager_0036617b._0_8_;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0075cc24 to 0075cc43 has its CatchHandler @ 0075cc84 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7938);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_2d,CONCAT21(uStack_2f,cStack_30)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075ccc4  FUN_0075ccc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075ccc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  char acStack_57 [5];
  undefined2 uStack_52;
  char cStack_50;
  char acStack_4f [5];
  undefined1 uStack_4a;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x2a;
  uStack_4a = 0;
  acStack_57 = (char  [5])s_reportNewInco_00369bf2._8_5_;
  local_5f = (char  [8])s_reportNewInco_00369bf2._0_8_;
  uStack_52 = (undefined2)s_mingCall_00369bff._0_3_;
  cStack_50 = SUB31(s_mingCall_00369bff._0_3_,2);
  acStack_4f = (char  [5])s_mingCall_00369bff._3_5_;
                    /* try { // try from 0075cd20 to 0075cd27 has its CatchHandler @ 0075cde8 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Ljava_lang_St_0036a65f._8_8_;
  uVar3 = s_ng_Ljava_lang_St_0036a65f._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036a64f._0_8_;
  uStack_78 = _UNK_00371328;
  local_80 = _DAT_00371320;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036a64f._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s_a_lang_String__V_0036a679._8_8_;
  uVar4 = s_ring_ZLjav_0036a66f._0_8_;
  uVar2 = CONCAT62(s_a_lang_String__V_0036a679._0_6_,s_ring_ZLjav_0036a66f._8_2_);
  uVar3 = CONCAT26(s_a_lang_String__V_0036a679._6_2_,s_a_lang_String__V_0036a679._0_6_);
  local_70[0x3a] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x32) = uVar5;
  *(undefined8 *)(local_70 + 0x2a) = uVar3;
                    /* try { // try from 0075cd5c to 0075cd87 has its CatchHandler @ 0075cdd0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009a7940);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT51(acStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075ce18  FUN_0075ce18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075ce18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_78;
  char local_77 [8];
  char acStack_6f [5];
  undefined2 uStack_6a;
  char cStack_68;
  char acStack_67 [5];
  undefined1 uStack_62;
  undefined1 uStack_61;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x30);
  uStack_58 = _UNK_00371f28;
  local_60 = _DAT_00371f20;
  local_50[0x23] = '\0';
  uVar5 = s_llStartedConnecting_003695ce._8_8_;
  uVar4 = s_llStartedConnecting_003695ce._0_8_;
  uVar3 = s_reportOutgoingCa_003695be._8_8_;
  uVar2 = s_reportOutgoingCa_003695be._0_8_;
  local_50[0x1f] = 't';
  local_50[0x20] = 'i';
  local_50[0x21] = 'n';
  local_50[0x22] = 'g';
  local_78 = 0x2a;
  *(undefined8 *)(local_50 + 8) = uVar3;
  *(undefined8 *)local_50 = uVar2;
  *(undefined8 *)(local_50 + 0x18) = uVar5;
  *(undefined8 *)(local_50 + 0x10) = uVar4;
  uStack_62 = 0;
  acStack_6f[0] = s__Ljava_lang_S_0036ec45[8];
  acStack_6f[1] = s__Ljava_lang_S_0036ec45[9];
  acStack_6f[2] = s__Ljava_lang_S_0036ec45[10];
  acStack_6f[3] = s__Ljava_lang_S_0036ec45[0xb];
  acStack_6f[4] = s__Ljava_lang_S_0036ec45[0xc];
  local_77[0] = s__Ljava_lang_S_0036ec45[0];
  local_77[1] = s__Ljava_lang_S_0036ec45[1];
  local_77[2] = s__Ljava_lang_S_0036ec45[2];
  local_77[3] = s__Ljava_lang_S_0036ec45[3];
  local_77[4] = s__Ljava_lang_S_0036ec45[4];
  local_77[5] = s__Ljava_lang_S_0036ec45[5];
  local_77[6] = s__Ljava_lang_S_0036ec45[6];
  local_77[7] = s__Ljava_lang_S_0036ec45[7];
  uStack_6a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_68 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_67[0] = s_tring__V_0036ec52[3];
  acStack_67[1] = s_tring__V_0036ec52[4];
  acStack_67[2] = s_tring__V_0036ec52[5];
  acStack_67[3] = s_tring__V_0036ec52[6];
  acStack_67[4] = s_tring__V_0036ec52[7];
                    /* try { // try from 0075ceac to 0075ced7 has its CatchHandler @ 0075cf20 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_78,param_4,param_5,&DAT_009a7948);
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT51(acStack_67,cStack_68))));
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075cf60  FUN_0075cf60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075cf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined5 uVar5;
  undefined5 uVar6;
  undefined3 uVar7;
  undefined5 uVar8;
  undefined5 uVar9;
  byte local_78;
  char local_77 [8];
  char acStack_6f [5];
  undefined2 uStack_6a;
  char cStack_68;
  char acStack_67 [5];
  undefined1 uStack_62;
  undefined1 uStack_61;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_ingCallConnected_00364cdb._8_8_;
  uVar3 = s_reportOutgo_00364cd0._0_8_;
  uVar2 = CONCAT35(s_ingCallConnected_00364cdb._5_3_,s_ingCallConnected_00364cdb._0_5_);
  *(ulong *)(local_50 + 8) =
       CONCAT53(s_ingCallConnected_00364cdb._0_5_,s_reportOutgo_00364cd0._8_3_);
  *(undefined8 *)local_50 = uVar3;
  uVar8 = s_tring__V_0036ec52._3_5_;
  uVar7 = s_tring__V_0036ec52._0_3_;
  uVar5 = s__Ljava_lang_S_0036ec45._8_5_;
  uVar3 = s__Ljava_lang_S_0036ec45._0_8_;
  local_78 = 0x2a;
  uStack_58 = _UNK_00371b28;
  local_60 = _s___00371b20;
  *(undefined8 *)(local_50 + 0x13) = uVar4;
  *(undefined8 *)(local_50 + 0xb) = uVar2;
  local_50[0x1b] = '\0';
  uVar9 = s_tring__V_0036ec52._3_5_;
  uVar6 = s__Ljava_lang_S_0036ec45._8_5_;
  uVar2 = s__Ljava_lang_S_0036ec45._0_8_;
  s__Ljava_lang_S_0036ec45[8] = (char)uVar5;
  s__Ljava_lang_S_0036ec45[9] = SUB51(uVar5,1);
  s__Ljava_lang_S_0036ec45[10] = SUB51(uVar5,2);
  s__Ljava_lang_S_0036ec45[0xb] = SUB51(uVar5,3);
  s__Ljava_lang_S_0036ec45[0xc] = SUB51(uVar5,4);
  acStack_6f[0] = s__Ljava_lang_S_0036ec45[8];
  acStack_6f[1] = s__Ljava_lang_S_0036ec45[9];
  acStack_6f[2] = s__Ljava_lang_S_0036ec45[10];
  acStack_6f[3] = s__Ljava_lang_S_0036ec45[0xb];
  acStack_6f[4] = s__Ljava_lang_S_0036ec45[0xc];
  s__Ljava_lang_S_0036ec45[0] = (char)uVar3;
  s__Ljava_lang_S_0036ec45[1] = SUB81(uVar3,1);
  s__Ljava_lang_S_0036ec45[2] = SUB81(uVar3,2);
  s__Ljava_lang_S_0036ec45[3] = SUB81(uVar3,3);
  s__Ljava_lang_S_0036ec45[4] = SUB81(uVar3,4);
  s__Ljava_lang_S_0036ec45[5] = SUB81(uVar3,5);
  s__Ljava_lang_S_0036ec45[6] = SUB81(uVar3,6);
  s__Ljava_lang_S_0036ec45[7] = SUB81(uVar3,7);
  local_77[0] = s__Ljava_lang_S_0036ec45[0];
  local_77[1] = s__Ljava_lang_S_0036ec45[1];
  local_77[2] = s__Ljava_lang_S_0036ec45[2];
  local_77[3] = s__Ljava_lang_S_0036ec45[3];
  local_77[4] = s__Ljava_lang_S_0036ec45[4];
  local_77[5] = s__Ljava_lang_S_0036ec45[5];
  local_77[6] = s__Ljava_lang_S_0036ec45[6];
  local_77[7] = s__Ljava_lang_S_0036ec45[7];
  uStack_6a = (undefined2)uVar7;
  cStack_68 = SUB31(uVar7,2);
  s_tring__V_0036ec52[3] = (char)uVar8;
  s_tring__V_0036ec52[4] = SUB51(uVar8,1);
  s_tring__V_0036ec52[5] = SUB51(uVar8,2);
  s_tring__V_0036ec52[6] = SUB51(uVar8,3);
  s_tring__V_0036ec52[7] = SUB51(uVar8,4);
  acStack_67[0] = s_tring__V_0036ec52[3];
  acStack_67[1] = s_tring__V_0036ec52[4];
  acStack_67[2] = s_tring__V_0036ec52[5];
  acStack_67[3] = s_tring__V_0036ec52[6];
  acStack_67[4] = s_tring__V_0036ec52[7];
  uStack_62 = 0;
                    /* try { // try from 0075cff0 to 0075d01b has its CatchHandler @ 0075d064 */
  s__Ljava_lang_S_0036ec45._0_8_ = uVar2;
  s__Ljava_lang_S_0036ec45._8_5_ = uVar6;
  s_tring__V_0036ec52._3_5_ = uVar9;
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_78,param_4,param_5,&DAT_009a7950);
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT51(acStack_67,cStack_68))));
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075d0a4  FUN_0075d0a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075d0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined2 local_57;
  undefined1 local_55;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x14;
  local_57 = 0x6c6c;
  local_55 = 0;
  local_5f = (char  [8])s_reportCall_0036a5a7._0_8_;
                    /* try { // try from 0075d100 to 0075d107 has its CatchHandler @ 0075d1c8 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Ljava_lang_St_0036a65f._8_8_;
  uVar3 = s_ng_Ljava_lang_St_0036a65f._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036a64f._0_8_;
  uStack_78 = _UNK_00371328;
  local_80 = _DAT_00371320;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036a64f._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s_a_lang_String__V_0036a679._8_8_;
  uVar4 = s_ring_ZLjav_0036a66f._0_8_;
  uVar2 = CONCAT62(s_a_lang_String__V_0036a679._0_6_,s_ring_ZLjav_0036a66f._8_2_);
  uVar3 = CONCAT26(s_a_lang_String__V_0036a679._6_2_,s_a_lang_String__V_0036a679._0_6_);
  local_70[0x3a] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x32) = uVar5;
  *(undefined8 *)(local_70 + 0x2a) = uVar3;
                    /* try { // try from 0075d13c to 0075d167 has its CatchHandler @ 0075d1b0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009a7958);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075d1f8  FUN_0075d1f8 =====

void FUN_0075d1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1e;
  local_3f = s_reportC_0036a5b2;
  cStack_38 = s_allEnded_0036a5b9[0];
  acStack_37 = (char  [7])s_allEnded_0036a5b9._1_7_;
  local_58 = 0x2a;
  local_30 = 0;
  acStack_4f = (char  [5])s__Ljava_lang_S_0036ec45._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036ec45._0_8_;
  uStack_4a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_48 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_47 = (char  [5])s_tring__V_0036ec52._3_5_;
  uStack_42 = 0;
                    /* try { // try from 0075d268 to 0075d287 has its CatchHandler @ 0075d2c8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_009a7960);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_2f,local_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075d308  FUN_0075d308 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075d308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined2 local_57;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x12;
  local_5f = (char  [8])s_startCall_0036abe4._0_8_;
  local_57 = 0x6c;
                    /* try { // try from 0075d360 to 0075d367 has its CatchHandler @ 0075d430 */
  local_70 = (char *)operator_new(0x60);
  uVar4 = s__String_Lcom_fac_00364ec8._8_8_;
  uVar3 = s__String_Lcom_fac_00364ec8._0_8_;
  uVar2 = s_ring_ZLjava_lang_00364eb8._0_8_;
  uStack_78 = _UNK_00372c38;
  local_80 = _DAT_00372c30;
  *(undefined8 *)(local_70 + 0x28) = s_ring_ZLjava_lang_00364eb8._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x38) = uVar4;
  *(undefined8 *)(local_70 + 0x30) = uVar3;
  uVar5 = s_ridge_Promise__V_00364ee5._8_8_;
  uVar4 = s_ebook_react_b_00364ed8._0_8_;
  uVar2 = CONCAT35(s_ridge_Promise__V_00364ee5._0_3_,s_ebook_react_b_00364ed8._8_5_);
  uVar3 = CONCAT53(s_ridge_Promise__V_00364ee5._3_5_,s_ridge_Promise__V_00364ee5._0_3_);
  local_70[0x5d] = '\0';
  *(undefined8 *)(local_70 + 0x48) = uVar2;
  *(undefined8 *)(local_70 + 0x40) = uVar4;
  *(undefined8 *)(local_70 + 0x55) = uVar5;
  *(undefined8 *)(local_70 + 0x4d) = uVar3;
  uVar4 = s_ng_Ljava_lang_St_00364ea8._8_8_;
  uVar3 = s_ng_Ljava_lang_St_00364ea8._0_8_;
  uVar2 = s__Ljava_lang_Stri_00364e98._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_00364e98._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 0075d3a4 to 0075d3cf has its CatchHandler @ 0075d418 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7968);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075d460  FUN_0075d460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075d460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x65;
  local_60[2] = 0x6e;
  local_60[3] = 100;
  local_60[4] = 0x43;
  local_60[5] = 0x61;
  local_60[6] = 0x6c;
  local_60[7] = 0x6c;
                    /* try { // try from 0075d4bc to 0075d4c3 has its CatchHandler @ 0075d584 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0075d4f8 to 0075d523 has its CatchHandler @ 0075d56c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,local_60,&local_80,param_4,param_5,&DAT_009a7970);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075d5b4  FUN_0075d5b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075d5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined2 local_57;
  undefined1 local_55;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x14;
  local_57 = 0x6c6c;
  local_55 = 0;
  local_5f = (char  [8])s_answerCall_0036bee1._0_8_;
                    /* try { // try from 0075d610 to 0075d617 has its CatchHandler @ 0075d6d8 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0075d64c to 0075d677 has its CatchHandler @ 0075d6c0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7978);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075d708  FUN_0075d708 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075d708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined4 local_57;
  undefined1 local_53;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x18;
  local_53 = 0;
  local_57 = 0x6c6c6143;
  local_5f = (char  [8])s_setMutedCall_0036f6fa._0_8_;
                    /* try { // try from 0075d768 to 0075d76f has its CatchHandler @ 0075d830 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_ZLcom_faceboo_00368c2a._8_8_;
  uVar3 = s_ng_ZLcom_faceboo_00368c2a._0_8_;
  uVar2 = s__Ljava_lang_Stri_00368c1a._0_8_;
  uStack_78 = _UNK_00371998;
  local_80 = _DAT_00371990;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_00368c1a._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s_ridge_Promise__V_00368c43._8_8_;
  uVar4 = s_k_react_b_00368c3a._0_8_;
  uVar2 = CONCAT71(s_ridge_Promise__V_00368c43._0_7_,s_k_react_b_00368c3a[8]);
  uVar3 = CONCAT17(s_ridge_Promise__V_00368c43[7],s_ridge_Promise__V_00368c43._0_7_);
  local_70[0x39] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x31) = uVar5;
  *(undefined8 *)(local_70 + 0x29) = uVar3;
                    /* try { // try from 0075d7a4 to 0075d7cf has its CatchHandler @ 0075d818 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7980);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075d860  FUN_0075d860 =====

void FUN_0075d860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  undefined4 uStack_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x26;
  uStack_2c = uStack_2c & 0xffffff00;
  local_58 = 0x2a;
  uStack_37 = (undefined7)s_setIncomingRingtone_00367190._8_8_;
  uStack_30 = CONCAT31(0x656e6f,SUB81(s_setIncomingRingtone_00367190._8_8_,7));
  local_3f = (char  [8])s_setIncomingRingtone_00367190._0_8_;
  uStack_42 = 0;
  acStack_4f = (char  [5])s__Ljava_lang_S_0036ec45._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036ec45._0_8_;
  uStack_4a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_48 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_47 = (char  [5])s_tring__V_0036ec52._3_5_;
                    /* try { // try from 0075d8d4 to 0075d8f3 has its CatchHandler @ 0075d934 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_009a7988);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,uStack_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075d974  facebook::react::NativeChatModuleSpecJSI::NativeChatModuleSpecJSI =====

/* facebook::react::NativeChatModuleSpecJSI::NativeChatModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeChatModuleSpecJSI::NativeChatModuleSpecJSI
          (NativeChatModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [8];
  undefined2 local_57;
  undefined1 local_55;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  local_60 = 0x14;
  *(undefined ***)this = &PTR__JavaTurboModule_0097cc18;
  local_55 = 0;
  local_57 = 0x7377;
  local_5f[0] = s_updateRows_0036b7aa[0];
  local_5f[1] = s_updateRows_0036b7aa[1];
  local_5f[2] = s_updateRows_0036b7aa[2];
  local_5f[3] = s_updateRows_0036b7aa[3];
  local_5f[4] = s_updateRows_0036b7aa[4];
  local_5f[5] = s_updateRows_0036b7aa[5];
  local_5f[6] = s_updateRows_0036b7aa[6];
  local_5f[7] = s_updateRows_0036b7aa[7];
                    /* try { // try from 0075d9d8 to 0075d9f3 has its CatchHandler @ 0075daa0 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 8;
  *(code **)(lVar2 + 0x30) = FUN_0075dad8;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x12;
  local_57 = 0x73;
  local_5f[0] = s_clearRows_00367e41[0];
  local_5f[1] = s_clearRows_00367e41[1];
  local_5f[2] = s_clearRows_00367e41[2];
  local_5f[3] = s_clearRows_00367e41[3];
  local_5f[4] = s_clearRows_00367e41[4];
  local_5f[5] = s_clearRows_00367e41[5];
  local_5f[6] = s_clearRows_00367e41[6];
  local_5f[7] = s_clearRows_00367e41[7];
                    /* try { // try from 0075da3c to 0075da57 has its CatchHandler @ 0075da9c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_0075dc24;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075dad8  FUN_0075dad8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075dad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined2 local_57;
  undefined1 local_55;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x14;
  local_57 = 0x7377;
  local_55 = 0;
  local_5f = (char  [8])s_updateRows_0036b7aa._0_8_;
                    /* try { // try from 0075db34 to 0075db3b has its CatchHandler @ 0075dbf4 */
  local_70 = (char *)operator_new(0x30);
  uVar4 = s_ing_ZLjava_la_00366206._0_8_;
  uVar3 = s__DLjava_lang_Str_003661f6._0_8_;
  uVar2 = CONCAT35(s_ng_String_DZZZ_V_00366213._0_3_,s_ing_ZLjava_la_00366206._8_5_);
  uStack_78 = _UNK_00372b08;
  local_80 = _s_1_00372b00;
  *(undefined8 *)(local_70 + 8) = s__DLjava_lang_Str_003661f6._8_8_;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar4;
  uVar3 = s_ng_String_DZZZ_V_00366213._8_8_;
  uVar2 = CONCAT53(s_ng_String_DZZZ_V_00366213._3_5_,s_ng_String_DZZZ_V_00366213._0_3_);
  local_70[0x2d] = '\0';
  *(undefined8 *)(local_70 + 0x25) = uVar3;
  *(undefined8 *)(local_70 + 0x1d) = uVar2;
                    /* try { // try from 0075db68 to 0075db93 has its CatchHandler @ 0075dbdc */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009a7990);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075dc24  FUN_0075dc24 =====

void FUN_0075dc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined2 local_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x12;
  local_3f = (char  [8])s_clearRows_00367e41._0_8_;
  local_37 = 0x73;
  local_58[0] = 10;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x44;
  local_58[4] = 0x29;
  local_58[5] = 0x56;
  local_58[6] = 0;
                    /* try { // try from 0075dc88 to 0075dca7 has its CatchHandler @ 0075dce8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7998);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075dd28  facebook::react::NativeClientInfoModuleSpecJSI::NativeClientInfoModuleSpecJSI =====

/* facebook::react::NativeClientInfoModuleSpecJSI::NativeClientInfoModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeClientInfoModuleSpecJSI::NativeClientInfoModuleSpecJSI
          (NativeClientInfoModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [8];
  undefined4 local_57;
  undefined1 local_53;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097cc58;
  local_60 = 0x18;
  local_53 = 0;
  local_57 = 0x73746e61;
  local_5f[0] = s_getConstants_0036b771[0];
  local_5f[1] = s_getConstants_0036b771[1];
  local_5f[2] = s_getConstants_0036b771[2];
  local_5f[3] = s_getConstants_0036b771[3];
  local_5f[4] = s_getConstants_0036b771[4];
  local_5f[5] = s_getConstants_0036b771[5];
  local_5f[6] = s_getConstants_0036b771[6];
  local_5f[7] = s_getConstants_0036b771[7];
                    /* try { // try from 0075dd90 to 0075dda7 has its CatchHandler @ 0075dde8 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0075de20;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075de20  FUN_0075de20 =====

void FUN_0075de20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x73746e61;
  local_33 = 0;
  local_58 = 0x22;
  local_3f = (char  [8])s_getConstants_0036b771._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__0036c3af._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__0036c3af._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__0036c3af._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 0075de90 to 0075deaf has its CatchHandler @ 0075def0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_009a79a0);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,cStack_48)));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075df30  facebook::react::NativeCommandClipboardModuleSpecJSI::NativeCommandClipboardModuleSpecJSI =====

/* facebook::react::NativeCommandClipboardModuleSpecJSI::NativeCommandClipboardModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeCommandClipboardModuleSpecJSI::NativeCommandClipboardModuleSpecJSI
          (NativeCommandClipboardModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60 [16];
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097cc98;
  local_60[8] = 0;
  local_60[0] = 0xe;
  local_60[1] = 0x73;
  local_60[2] = 0x65;
  local_60[3] = 0x74;
  local_60[4] = 0x49;
  local_60[5] = 0x74;
  local_60[6] = 0x65;
  local_60[7] = 0x6d;
                    /* try { // try from 0075df94 to 0075dfab has its CatchHandler @ 0075dff0 */
  local_40 = local_60;
  lVar2 = FUN_00756964(this + 0x30,local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(code **)(lVar2 + 0x30) = FUN_0075e028;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075e028  FUN_0075e028 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075e028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x73;
  local_60[2] = 0x65;
  local_60[3] = 0x74;
  local_60[4] = 0x49;
  local_60[5] = 0x74;
  local_60[6] = 0x65;
  local_60[7] = 0x6d;
                    /* try { // try from 0075e084 to 0075e08b has its CatchHandler @ 0075e14c */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Ljava_lang_St_0036f7a9._8_8_;
  uVar3 = s_ng_Ljava_lang_St_0036f7a9._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f799._0_8_;
  uStack_78 = _UNK_00371998;
  local_80 = _DAT_00371990;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f799._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s_a_lang_String__V_0036f7c2._8_8_;
  uVar4 = s_ring_Ljav_0036f7b9._0_8_;
  uVar2 = CONCAT71(s_a_lang_String__V_0036f7c2._0_7_,s_ring_Ljav_0036f7b9[8]);
  uVar3 = CONCAT17(s_a_lang_String__V_0036f7c2[7],s_a_lang_String__V_0036f7c2._0_7_);
  local_70[0x39] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x31) = uVar5;
  *(undefined8 *)(local_70 + 0x29) = uVar3;
                    /* try { // try from 0075e0c0 to 0075e0eb has its CatchHandler @ 0075e134 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,local_60,&local_80,param_4,param_5,&DAT_009a79a8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075e17c  facebook::react::NativeCompressionModuleSpecJSI::NativeCompressionModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeCompressionModuleSpecJSI::NativeCompressionModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeCompressionModuleSpecJSI::NativeCompressionModuleSpecJSI
          (NativeCompressionModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined7 uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  long lVar12;
  NativeCompressionModuleSpecJSI *pNVar13;
  byte local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined4 uStack_57;
  undefined1 uStack_53;
  undefined2 uStack_52;
  char *local_50;
  undefined1 uStack_41;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar13 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097ccd8;
  local_60 = 0x18;
  uStack_53 = 0;
  uStack_57 = 0x73746e61;
  local_40 = &local_60;
  uStack_5f = (undefined7)s_getConstants_0036b771._0_8_;
  cStack_58 = SUB81(s_getConstants_0036b771._0_8_,7);
                    /* try { // try from 0075e1e4 to 0075e1ff has its CatchHandler @ 0075e3c8 */
  lVar12 = FUN_00756964(pNVar13,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(code **)(lVar12 + 0x30) = FUN_0075e400;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 0075e21c to 0075e223 has its CatchHandler @ 0075e3c0 */
  local_50 = (char *)operator_new(0x20);
  uVar5 = _UNK_00372d28;
  uVar4 = _s___00372d20;
  uVar3 = s_enableZlibStrea_0036c9c2._0_8_;
  uVar2 = CONCAT71(s_mSupport_0036c9d1._1_7_,s_mSupport_0036c9d1[0]);
  *(ulong *)(local_50 + 8) = CONCAT17(s_mSupport_0036c9d1[0],s_enableZlibStrea_0036c9c2._8_7_);
  *(undefined8 *)local_50 = uVar3;
  *(undefined8 *)(local_50 + 0xf) = uVar2;
  local_40 = &local_60;
  cStack_58 = (char)uVar5;
  cVar8 = cStack_58;
  uStack_57 = (undefined4)((ulong)uVar5 >> 8);
  uVar9 = uStack_57;
  uStack_53 = (undefined1)((ulong)uVar5 >> 0x28);
  uVar10 = uStack_53;
  uStack_52 = (undefined2)((ulong)uVar5 >> 0x30);
  uVar11 = uStack_52;
  local_60 = (byte)uVar4;
  bVar6 = local_60;
  uStack_5f = (undefined7)((ulong)uVar4 >> 8);
  uVar7 = uStack_5f;
  local_50[0x17] = '\0';
                    /* try { // try from 0075e258 to 0075e273 has its CatchHandler @ 0075e3bc */
  lVar12 = FUN_00756964(pNVar13,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar12 + 0x28) = 1;
  *(code **)(lVar12 + 0x30) = FUN_0075e510;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 0075e294 to 0075e29b has its CatchHandler @ 0075e3b4 */
  local_50 = (char *)operator_new(0x20);
  uVar5 = _UNK_00371468;
  uVar4 = _DAT_00371460;
  uVar3 = s_disableZlibStrea_0037093c._8_8_;
  uVar2 = s_disableZlibStrea_0037093c._0_8_;
  *(undefined8 *)(local_50 + 0x10) = s_mSupport_0037094c._0_8_;
  local_40 = &local_60;
  *(undefined8 *)(local_50 + 8) = uVar3;
  *(undefined8 *)local_50 = uVar2;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined4)((ulong)uVar5 >> 8);
  uStack_53 = (undefined1)((ulong)uVar5 >> 0x28);
  uStack_52 = (undefined2)((ulong)uVar5 >> 0x30);
  local_60 = (byte)uVar4;
  uStack_5f = (undefined7)((ulong)uVar4 >> 8);
  local_50[0x18] = '\0';
                    /* try { // try from 0075e2d0 to 0075e2eb has its CatchHandler @ 0075e3b0 */
  lVar12 = FUN_00756964(pNVar13,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar12 + 0x28) = 1;
  *(code **)(lVar12 + 0x30) = FUN_0075e648;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 0075e30c to 0075e313 has its CatchHandler @ 0075e3a8 */
  local_50 = (char *)operator_new(0x20);
  uVar3 = s_enableZstdStrea_0036858b._0_8_;
  uVar2 = CONCAT71(s_mSupport_0036859a._1_7_,s_mSupport_0036859a[0]);
  *(ulong *)(local_50 + 8) = CONCAT17(s_mSupport_0036859a[0],s_enableZstdStrea_0036858b._8_7_);
  *(undefined8 *)local_50 = uVar3;
  *(undefined8 *)(local_50 + 0xf) = uVar2;
  local_40 = &local_60;
  local_50[0x17] = '\0';
                    /* try { // try from 0075e344 to 0075e35f has its CatchHandler @ 0075e3a4 */
  local_60 = bVar6;
  uStack_5f = uVar7;
  cStack_58 = cVar8;
  uStack_57 = uVar9;
  uStack_53 = uVar10;
  uStack_52 = uVar11;
  lVar12 = FUN_00756964(pNVar13,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar12 + 0x28) = 1;
  *(code **)(lVar12 + 0x30) = FUN_0075e780;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075e400  FUN_0075e400 =====

void FUN_0075e400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x73746e61;
  local_33 = 0;
  local_58 = 0x22;
  local_3f = (char  [8])s_getConstants_0036b771._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__0036c3af._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__0036c3af._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__0036c3af._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 0075e470 to 0075e48f has its CatchHandler @ 0075e4d0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_009a79b0);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,cStack_48)));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075e510  FUN_0075e510 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075e510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_enableZlibStrea_0036c9c2._0_8_;
  uVar2 = CONCAT17(s_mSupport_0036c9d1[0],s_enableZlibStrea_0036c9c2._8_7_);
  uVar3 = CONCAT71(s_mSupport_0036c9d1._1_7_,s_mSupport_0036c9d1[0]);
  local_50[0x17] = '\0';
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar4;
  uStack_58 = _UNK_00372d28;
  local_60 = _s___00372d20;
  *(undefined8 *)(local_50 + 0xf) = uVar3;
  local_78[0] = 8;
  local_78[1] = 0x28;
  local_78[2] = 0x44;
  local_78[3] = 0x29;
  local_78[4] = 0x56;
  local_78[5] = 0;
                    /* try { // try from 0075e594 to 0075e5bf has its CatchHandler @ 0075e608 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,local_78,param_4,param_5,&DAT_009a79b8);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075e648  FUN_0075e648 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075e648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_mSupport_0037094c._0_8_;
  uVar3 = s_disableZlibStrea_0037093c._8_8_;
  uVar2 = s_disableZlibStrea_0037093c._0_8_;
  local_50[0x18] = '\0';
  *(undefined8 *)(local_50 + 0x10) = uVar4;
  *(undefined8 *)(local_50 + 8) = uVar3;
  *(undefined8 *)local_50 = uVar2;
  local_78[0] = 8;
  uStack_58 = _UNK_00371468;
  local_60 = _DAT_00371460;
  local_78[1] = 0x28;
  local_78[2] = 0x44;
  local_78[3] = 0x29;
  local_78[4] = 0x56;
  local_78[5] = 0;
                    /* try { // try from 0075e6cc to 0075e6f7 has its CatchHandler @ 0075e740 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,local_78,param_4,param_5,&DAT_009a79c0);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075e780  FUN_0075e780 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075e780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_enableZstdStrea_0036858b._0_8_;
  uVar2 = CONCAT17(s_mSupport_0036859a[0],s_enableZstdStrea_0036858b._8_7_);
  uVar3 = CONCAT71(s_mSupport_0036859a._1_7_,s_mSupport_0036859a[0]);
  local_50[0x17] = '\0';
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar4;
  uStack_58 = _UNK_00372d28;
  local_60 = _s___00372d20;
  *(undefined8 *)(local_50 + 0xf) = uVar3;
  local_78[0] = 8;
  local_78[1] = 0x28;
  local_78[2] = 0x44;
  local_78[3] = 0x29;
  local_78[4] = 0x56;
  local_78[5] = 0;
                    /* try { // try from 0075e804 to 0075e82f has its CatchHandler @ 0075e878 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,local_78,param_4,param_5,&DAT_009a79c8);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075e8b8  facebook::react::NativeDateFormatUtilsModuleSpecJSI::NativeDateFormatUtilsModuleSpecJSI =====

/* facebook::react::NativeDateFormatUtilsModuleSpecJSI::NativeDateFormatUtilsModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDateFormatUtilsModuleSpecJSI::NativeDateFormatUtilsModuleSpecJSI
          (NativeDateFormatUtilsModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60 [16];
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097cd18;
  local_60[9] = 0;
  local_60[0] = 0x10;
  local_60[1] = 0x61;
  local_60[2] = 99;
  local_60[3] = 0x74;
  local_60[4] = 0x69;
  local_60[5] = 0x76;
  local_60[6] = 0x61;
  local_60[7] = 0x74;
  local_60[8] = 0x65;
                    /* try { // try from 0075e918 to 0075e92f has its CatchHandler @ 0075e970 */
  local_40 = local_60;
  lVar2 = FUN_00756964(this + 0x30,local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0075e9a8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075e9a8  FUN_0075e9a8 =====

void FUN_0075e9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x10;
  local_40[9] = 0;
  local_40[1] = 0x61;
  local_40[2] = 99;
  local_40[3] = 0x74;
  local_40[4] = 0x69;
  local_40[5] = 0x76;
  local_40[6] = 0x61;
  local_40[7] = 0x74;
  local_40[8] = 0x65;
  local_58[0] = 6;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x5a;
  local_58[4] = 0;
                    /* try { // try from 0075ea04 to 0075ea23 has its CatchHandler @ 0075ea64 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,1,local_40,local_58,param_3,param_4,&DAT_009a79d0);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075eaa4  facebook::react::NativeDeclaredAgeRangeModuleSpecJSI::NativeDeclaredAgeRangeModuleSpecJSI =====

/* facebook::react::NativeDeclaredAgeRangeModuleSpecJSI::NativeDeclaredAgeRangeModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDeclaredAgeRangeModuleSpecJSI::NativeDeclaredAgeRangeModuleSpecJSI
          (NativeDeclaredAgeRangeModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  undefined7 local_5f;
  char cStack_58;
  undefined3 uStack_57;
  undefined1 local_54;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097cd58;
  local_60 = 0x16;
  local_54 = 0;
  local_5f = (undefined7)s_getAgeRange_00364cec._0_8_;
  _cStack_58 = CONCAT31(0x65676e,SUB81(s_getAgeRange_00364cec._0_8_,7));
                    /* try { // try from 0075eb0c to 0075eb23 has its CatchHandler @ 0075eb68 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(code **)(lVar2 + 0x30) = FUN_0075eba0;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075eba0  FUN_0075eba0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075eba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  undefined7 local_5f;
  char cStack_58;
  undefined3 uStack_57;
  undefined1 local_54;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x16;
  local_54 = 0;
  local_5f = (undefined7)s_getAgeRange_00364cec._0_8_;
  _cStack_58 = CONCAT31(0x65676e,SUB81(s_getAgeRange_00364cec._0_8_,7));
                    /* try { // try from 0075ec00 to 0075ec07 has its CatchHandler @ 0075ecc8 */
  local_70 = (char *)operator_new(0x50);
  uVar4 = s_ook_react_b_003678b2._0_8_;
  uVar3 = s_ouble_Lcom_faceb_003678a2._0_8_;
  uVar2 = CONCAT53(s_ridge_Promise__V_003678bd._0_5_,s_ook_react_b_003678b2._8_3_);
  uStack_78 = _UNK_00372818;
  local_80 = _s_Q_00372810;
  *(undefined8 *)(local_70 + 0x28) = s_ouble_Lcom_faceb_003678a2._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar3;
  *(undefined8 *)(local_70 + 0x38) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar3 = s_ridge_Promise__V_003678bd._8_8_;
  uVar2 = CONCAT35(s_ridge_Promise__V_003678bd._5_3_,s_ridge_Promise__V_003678bd._0_5_);
  local_70[0x4b] = '\0';
  *(undefined8 *)(local_70 + 0x43) = uVar3;
  *(undefined8 *)(local_70 + 0x3b) = uVar2;
  uVar4 = s_ble_Ljava_lang_D_00367892._8_8_;
  uVar3 = s_ble_Ljava_lang_D_00367892._0_8_;
  uVar2 = s__DLjava_lang_Dou_00367882._0_8_;
  *(undefined8 *)(local_70 + 8) = s__DLjava_lang_Dou_00367882._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 0075ec3c to 0075ec67 has its CatchHandler @ 0075ecb0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a79d8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075ecf8  facebook::react::NativeDeviceAccessibilityModuleSpecJSI::NativeDeviceAccessibilityModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeDeviceAccessibilityModuleSpecJSI::NativeDeviceAccessibilityModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDeviceAccessibilityModuleSpecJSI::NativeDeviceAccessibilityModuleSpecJSI
          (NativeDeviceAccessibilityModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long *plVar9;
  byte bVar10;
  char acVar11 [7];
  char cVar12;
  undefined7 uVar13;
  char *pcVar14;
  long lVar15;
  NativeDeviceAccessibilityModuleSpecJSI *pNVar16;
  long *plVar17;
  byte *local_70;
  long *plStack_68;
  byte local_60;
  char acStack_5f [7];
  char cStack_58;
  undefined7 uStack_57;
  char local_50;
  uint uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar16 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097cd98;
                    /* try { // try from 0075ed30 to 0075ed37 has its CatchHandler @ 0075f110 */
  pcVar14 = (char *)operator_new(0x20);
  uVar6 = _UNK_00372438;
  uVar5 = _DAT_00372430;
  uVar4 = s_ersReducedMotion_00368b45._8_8_;
  uVar3 = s_handleSetPref_00368b38._0_8_;
  uVar2 = CONCAT53(s_ersReducedMotion_00368b45._3_5_,s_ersReducedMotion_00368b45._0_3_);
  local_70 = &local_60;
  local_50 = (char)pcVar14;
  uStack_4f = (uint)((ulong)pcVar14 >> 8);
  uStack_4b = (undefined1)((ulong)pcVar14 >> 0x28);
  uStack_4a = (undefined2)((ulong)pcVar14 >> 0x30);
  *(ulong *)(pcVar14 + 8) =
       CONCAT35(s_ersReducedMotion_00368b45._0_3_,s_handleSetPref_00368b38._8_5_);
  *(undefined8 *)pcVar14 = uVar3;
  *(undefined8 *)(pcVar14 + 0x15) = uVar4;
  *(undefined8 *)(pcVar14 + 0xd) = uVar2;
  cStack_58 = (char)uVar6;
  cVar12 = cStack_58;
  uStack_57 = (undefined7)((ulong)uVar6 >> 8);
  uVar13 = uStack_57;
  local_60 = (byte)uVar5;
  bVar10 = local_60;
  acStack_5f = SUB87((ulong)uVar5 >> 8,0);
  acVar11 = acStack_5f;
  pcVar14[0x1d] = '\0';
                    /* try { // try from 0075ed70 to 0075ed8b has its CatchHandler @ 0075f0f8 */
  lVar15 = FUN_00756964(pNVar16,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar15 + 0x28) = 1;
  *(code **)(lVar15 + 0x30) = FUN_0075f138;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,local_50))));
  }
  local_60 = 0x1e;
  local_70 = &local_60;
  local_50 = 0;
  acStack_5f[0] = s_enableF_00365a3d[0];
  acStack_5f[1] = s_enableF_00365a3d[1];
  acStack_5f[2] = s_enableF_00365a3d[2];
  acStack_5f[3] = s_enableF_00365a3d[3];
  acStack_5f[4] = s_enableF_00365a3d[4];
  acStack_5f[5] = s_enableF_00365a3d[5];
  acStack_5f[6] = s_enableF_00365a3d[6];
  cStack_58 = s_ocusLock_00365a44[0];
  uStack_57._0_1_ = s_ocusLock_00365a44[1];
  uStack_57._1_1_ = s_ocusLock_00365a44[2];
  uStack_57._2_1_ = s_ocusLock_00365a44[3];
  uStack_57._3_1_ = s_ocusLock_00365a44[4];
  uStack_57._4_1_ = s_ocusLock_00365a44[5];
  uStack_57._5_1_ = s_ocusLock_00365a44[6];
  uStack_57._6_1_ = s_ocusLock_00365a44[7];
                    /* try { // try from 0075edd8 to 0075edf3 has its CatchHandler @ 0075f0f4 */
  lVar15 = FUN_00756964(pNVar16,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar15 + 0x28) = 2;
  *(code **)(lVar15 + 0x30) = FUN_0075f27c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,local_50))));
  }
  local_70 = &local_60;
  uStack_4f = uStack_4f & 0xffffff00;
  local_60 = 0x20;
  uStack_57 = (undefined7)s_disableFocusLock_0036eb27._8_8_;
  local_50 = SUB81(s_disableFocusLock_0036eb27._8_8_,7);
  acStack_5f = SUB87(s_disableFocusLock_0036eb27._0_8_,0);
  cStack_58 = SUB81(s_disableFocusLock_0036eb27._0_8_,7);
                    /* try { // try from 0075ee38 to 0075ee53 has its CatchHandler @ 0075f0f0 */
  lVar15 = FUN_00756964(pNVar16,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  *(code **)(lVar15 + 0x30) = FUN_0075f3c8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,local_50))));
  }
  local_70 = &local_60;
  uStack_4f = uStack_4f & 0xffffff00;
  local_60 = 0x20;
  uStack_57 = (undefined7)s_markCurrentFocus_0036f18b._8_8_;
  local_50 = SUB81(s_markCurrentFocus_0036f18b._8_8_,7);
  acStack_5f = SUB87(s_markCurrentFocus_0036f18b._0_8_,0);
  cStack_58 = SUB81(s_markCurrentFocus_0036f18b._0_8_,7);
                    /* try { // try from 0075ee94 to 0075eeaf has its CatchHandler @ 0075f0ec */
  lVar15 = FUN_00756964(pNVar16,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  *(code **)(lVar15 + 0x30) = FUN_0075f4c0;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,local_50))));
  }
  local_60 = 0x28;
  local_70 = &local_60;
  uStack_4b = 0;
  uStack_4f = 0x7375636f;
  uStack_57 = (undefined7)s_restorePreviousFocus_0036916f._8_8_;
  local_50 = SUB81(s_restorePreviousFocus_0036916f._8_8_,7);
  acStack_5f = SUB87(s_restorePreviousFocus_0036916f._0_8_,0);
  cStack_58 = SUB81(s_restorePreviousFocus_0036916f._0_8_,7);
                    /* try { // try from 0075eefc to 0075ef17 has its CatchHandler @ 0075f0e8 */
  lVar15 = FUN_00756964(pNVar16,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  *(code **)(lVar15 + 0x30) = FUN_0075f5b8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,local_50))));
  }
                    /* try { // try from 0075ef34 to 0075ef3b has its CatchHandler @ 0075f0e4 */
  pcVar14 = (char *)operator_new(0x20);
  uVar4 = s_tyServiceEnabled_0036a5cf._8_8_;
  uVar3 = s_isAccessibili_0036a5c2._0_8_;
  local_50 = (char)pcVar14;
  uStack_4f = (uint)((ulong)pcVar14 >> 8);
  uStack_4b = (undefined1)((ulong)pcVar14 >> 0x28);
  uStack_4a = (undefined2)((ulong)pcVar14 >> 0x30);
  uVar2 = CONCAT53(s_tyServiceEnabled_0036a5cf._3_5_,s_tyServiceEnabled_0036a5cf._0_3_);
  local_70 = &local_60;
  *(ulong *)(pcVar14 + 8) =
       CONCAT35(s_tyServiceEnabled_0036a5cf._0_3_,s_isAccessibili_0036a5c2._8_5_);
  *(undefined8 *)pcVar14 = uVar3;
  *(undefined8 *)(pcVar14 + 0x15) = uVar4;
  *(undefined8 *)(pcVar14 + 0xd) = uVar2;
  pcVar14[0x1d] = '\0';
                    /* try { // try from 0075ef6c to 0075ef87 has its CatchHandler @ 0075f0e0 */
  local_60 = bVar10;
  acStack_5f = acVar11;
  cStack_58 = cVar12;
  uStack_57 = uVar13;
  lVar15 = FUN_00756964(pNVar16,&local_60,PTR_piecewise_construct_0099dad8,&local_70,&local_40);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  *(code **)(lVar15 + 0x30) = FUN_0075f6bc;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,local_50))));
  }
                    /* try { // try from 0075efa4 to 0075efab has its CatchHandler @ 0075f0dc */
  FUN_0078307c(&local_70);
                    /* try { // try from 0075efac to 0075efb3 has its CatchHandler @ 0075f0cc */
  pcVar14 = (char *)operator_new(0x30);
  uVar7 = _UNK_00371588;
  uVar6 = _DAT_00371580;
  uVar5 = s_erviceEnabledChanged_0036abfe._8_8_;
  uVar4 = s_erviceEnabledChanged_0036abfe._0_8_;
  uVar3 = s_onAccessibilityS_0036abee._8_8_;
  uVar2 = s_onAccessibilityS_0036abee._0_8_;
  local_40 = &local_60;
  local_50 = (char)pcVar14;
  uStack_4f = (uint)((ulong)pcVar14 >> 8);
  uStack_4b = (undefined1)((ulong)pcVar14 >> 0x28);
  uStack_4a = (undefined2)((ulong)pcVar14 >> 0x30);
  pcVar14[0x20] = 'n';
  pcVar14[0x21] = 'g';
  pcVar14[0x22] = 'e';
  pcVar14[0x23] = 'd';
  cStack_58 = (char)uVar7;
  uStack_57 = (undefined7)((ulong)uVar7 >> 8);
  local_60 = (byte)uVar6;
  acStack_5f = SUB87((ulong)uVar6 >> 8,0);
  *(undefined8 *)(pcVar14 + 8) = uVar3;
  *(undefined8 *)pcVar14 = uVar2;
  *(undefined8 *)(pcVar14 + 0x18) = uVar5;
  *(undefined8 *)(pcVar14 + 0x10) = uVar4;
  pcVar14[0x24] = '\0';
                    /* try { // try from 0075efec to 0075effb has its CatchHandler @ 0075f0b4 */
  lVar15 = FUN_00782af4(this + 0x58,&local_60,&local_40);
  plVar9 = plStack_68;
  pbVar8 = local_70;
  plVar17 = *(long **)(lVar15 + 0x30);
  local_70 = (byte *)0x0;
  plStack_68 = (long *)0x0;
  *(long **)(lVar15 + 0x30) = plVar9;
  *(byte **)(lVar15 + 0x28) = pbVar8;
  if ((plVar17 != (long *)0x0) &&
     (lVar15 = FUN_00757990(0xffffffffffffffff,plVar17 + 1), lVar15 == 0)) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,local_50))));
  }
  plVar9 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar15 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar15 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0075f060 to 0075f067 has its CatchHandler @ 0075f0b0 */
  ::facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::
  configureEventEmitterCallback(this);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0075f138  FUN_0075f138 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075f138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined5 uVar5;
  undefined5 uVar6;
  undefined3 uVar7;
  undefined5 uVar8;
  undefined5 uVar9;
  byte local_78;
  char local_77 [8];
  char acStack_6f [5];
  undefined2 uStack_6a;
  char cStack_68;
  char acStack_67 [5];
  undefined1 uStack_62;
  undefined1 uStack_61;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_ersReducedMotion_00368b45._8_8_;
  uVar3 = s_handleSetPref_00368b38._0_8_;
  uVar2 = CONCAT53(s_ersReducedMotion_00368b45._3_5_,s_ersReducedMotion_00368b45._0_3_);
  *(ulong *)(local_50 + 8) =
       CONCAT35(s_ersReducedMotion_00368b45._0_3_,s_handleSetPref_00368b38._8_5_);
  *(undefined8 *)local_50 = uVar3;
  uVar8 = s_tring__V_0036ec52._3_5_;
  uVar7 = s_tring__V_0036ec52._0_3_;
  uVar5 = s__Ljava_lang_S_0036ec45._8_5_;
  uVar3 = s__Ljava_lang_S_0036ec45._0_8_;
  local_78 = 0x2a;
  uStack_58 = _UNK_00372438;
  local_60 = _DAT_00372430;
  *(undefined8 *)(local_50 + 0x15) = uVar4;
  *(undefined8 *)(local_50 + 0xd) = uVar2;
  local_50[0x1d] = '\0';
  uVar9 = s_tring__V_0036ec52._3_5_;
  uVar6 = s__Ljava_lang_S_0036ec45._8_5_;
  uVar2 = s__Ljava_lang_S_0036ec45._0_8_;
  s__Ljava_lang_S_0036ec45[8] = (char)uVar5;
  s__Ljava_lang_S_0036ec45[9] = SUB51(uVar5,1);
  s__Ljava_lang_S_0036ec45[10] = SUB51(uVar5,2);
  s__Ljava_lang_S_0036ec45[0xb] = SUB51(uVar5,3);
  s__Ljava_lang_S_0036ec45[0xc] = SUB51(uVar5,4);
  acStack_6f[0] = s__Ljava_lang_S_0036ec45[8];
  acStack_6f[1] = s__Ljava_lang_S_0036ec45[9];
  acStack_6f[2] = s__Ljava_lang_S_0036ec45[10];
  acStack_6f[3] = s__Ljava_lang_S_0036ec45[0xb];
  acStack_6f[4] = s__Ljava_lang_S_0036ec45[0xc];
  s__Ljava_lang_S_0036ec45[0] = (char)uVar3;
  s__Ljava_lang_S_0036ec45[1] = SUB81(uVar3,1);
  s__Ljava_lang_S_0036ec45[2] = SUB81(uVar3,2);
  s__Ljava_lang_S_0036ec45[3] = SUB81(uVar3,3);
  s__Ljava_lang_S_0036ec45[4] = SUB81(uVar3,4);
  s__Ljava_lang_S_0036ec45[5] = SUB81(uVar3,5);
  s__Ljava_lang_S_0036ec45[6] = SUB81(uVar3,6);
  s__Ljava_lang_S_0036ec45[7] = SUB81(uVar3,7);
  local_77[0] = s__Ljava_lang_S_0036ec45[0];
  local_77[1] = s__Ljava_lang_S_0036ec45[1];
  local_77[2] = s__Ljava_lang_S_0036ec45[2];
  local_77[3] = s__Ljava_lang_S_0036ec45[3];
  local_77[4] = s__Ljava_lang_S_0036ec45[4];
  local_77[5] = s__Ljava_lang_S_0036ec45[5];
  local_77[6] = s__Ljava_lang_S_0036ec45[6];
  local_77[7] = s__Ljava_lang_S_0036ec45[7];
  uStack_6a = (undefined2)uVar7;
  cStack_68 = SUB31(uVar7,2);
  s_tring__V_0036ec52[3] = (char)uVar8;
  s_tring__V_0036ec52[4] = SUB51(uVar8,1);
  s_tring__V_0036ec52[5] = SUB51(uVar8,2);
  s_tring__V_0036ec52[6] = SUB51(uVar8,3);
  s_tring__V_0036ec52[7] = SUB51(uVar8,4);
  acStack_67[0] = s_tring__V_0036ec52[3];
  acStack_67[1] = s_tring__V_0036ec52[4];
  acStack_67[2] = s_tring__V_0036ec52[5];
  acStack_67[3] = s_tring__V_0036ec52[6];
  acStack_67[4] = s_tring__V_0036ec52[7];
  uStack_62 = 0;
                    /* try { // try from 0075f1c8 to 0075f1f3 has its CatchHandler @ 0075f23c */
  s__Ljava_lang_S_0036ec45._0_8_ = uVar2;
  s__Ljava_lang_S_0036ec45._8_5_ = uVar6;
  s_tring__V_0036ec52._3_5_ = uVar9;
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_78,param_4,param_5,&DAT_009a79e0);
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT51(acStack_67,cStack_68))));
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075f27c  FUN_0075f27c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075f27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [7];
  char cStack_58;
  char acStack_57 [7];
  undefined1 local_50;
  undefined7 uStack_4f;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_60 = 0x1e;
  local_5f = s_enableF_00365a3d;
  cStack_58 = s_ocusLock_00365a44[0];
  acStack_57 = (char  [7])s_ocusLock_00365a44._1_7_;
                    /* try { // try from 0075f2d8 to 0075f2df has its CatchHandler @ 0075f398 */
  local_70 = (char *)operator_new(0x30);
  uVar4 = s_eact_bridge_R_00365b26._0_8_;
  uVar3 = s__Lcom_facebook_r_00365b16._0_8_;
  uVar2 = CONCAT35(s_eadableArray_Z_V_00365b33._0_3_,s_eact_bridge_R_00365b26._8_5_);
  uStack_78 = _UNK_00372b08;
  local_80 = _s_1_00372b00;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00365b16._8_8_;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar4;
  uVar3 = s_eadableArray_Z_V_00365b33._8_8_;
  uVar2 = CONCAT53(s_eadableArray_Z_V_00365b33._3_5_,s_eadableArray_Z_V_00365b33._0_3_);
  local_70[0x2d] = '\0';
  *(undefined8 *)(local_70 + 0x25) = uVar3;
  *(undefined8 *)(local_70 + 0x1d) = uVar2;
                    /* try { // try from 0075f30c to 0075f337 has its CatchHandler @ 0075f380 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009a79e8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075f3c8  FUN_0075f3c8 =====

void FUN_0075f3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x20;
  local_58[0] = 6;
  uStack_37 = (undefined7)s_disableFocusLock_0036eb27._8_8_;
  cStack_30 = SUB81(s_disableFocusLock_0036eb27._8_8_,7);
  local_3f = (char  [8])s_disableFocusLock_0036eb27._0_8_;
  uStack_2f = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0075f420 to 0075f43f has its CatchHandler @ 0075f480 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a79f0);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075f4c0  FUN_0075f4c0 =====

void FUN_0075f4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x20;
  local_58[0] = 6;
  uStack_37 = (undefined7)s_markCurrentFocus_0036f18b._8_8_;
  cStack_30 = SUB81(s_markCurrentFocus_0036f18b._8_8_,7);
  local_3f = (char  [8])s_markCurrentFocus_0036f18b._0_8_;
  uStack_2f = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0075f518 to 0075f537 has its CatchHandler @ 0075f578 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a79f8);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075f5b8  FUN_0075f5b8 =====

void FUN_0075f5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x28;
  uStack_2b = 0;
  uStack_2f = 0x7375636f;
  local_58[0] = 6;
  uStack_37 = (undefined7)s_restorePreviousFocus_0036916f._8_8_;
  cStack_30 = SUB81(s_restorePreviousFocus_0036916f._8_8_,7);
  local_3f = (char  [8])s_restorePreviousFocus_0036916f._0_8_;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0075f61c to 0075f63b has its CatchHandler @ 0075f67c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7a00);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,cStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075f6bc  FUN_0075f6bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075f6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar5 = s_tyServiceEnabled_0036a5cf._8_8_;
  uVar4 = s_isAccessibili_0036a5c2._0_8_;
  uVar2 = CONCAT35(s_tyServiceEnabled_0036a5cf._0_3_,s_isAccessibili_0036a5c2._8_5_);
  uVar3 = CONCAT53(s_tyServiceEnabled_0036a5cf._3_5_,s_tyServiceEnabled_0036a5cf._0_3_);
  local_50[0x1d] = '\0';
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar4;
  uStack_58 = _UNK_00372438;
  local_60 = _DAT_00372430;
  local_78[0] = 6;
  *(undefined8 *)(local_50 + 0x15) = uVar5;
  *(undefined8 *)(local_50 + 0xd) = uVar3;
  local_78[1] = 0x28;
  local_78[2] = 0x29;
  local_78[3] = 0x5a;
  local_78[4] = 0;
                    /* try { // try from 0075f73c to 0075f767 has its CatchHandler @ 0075f7b0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,1,&local_60,local_78,param_4,param_5,&DAT_009a7a08);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075f7f0  facebook::react::NativeDeviceLocaleModuleSpecJSI::NativeDeviceLocaleModuleSpecJSI =====

/* facebook::react::NativeDeviceLocaleModuleSpecJSI::NativeDeviceLocaleModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDeviceLocaleModuleSpecJSI::NativeDeviceLocaleModuleSpecJSI
          (NativeDeviceLocaleModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [8];
  undefined4 local_57;
  undefined1 local_53;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097cdd8;
  local_60 = 0x18;
  local_53 = 0;
  local_57 = 0x73746e61;
  local_5f[0] = s_getConstants_0036b771[0];
  local_5f[1] = s_getConstants_0036b771[1];
  local_5f[2] = s_getConstants_0036b771[2];
  local_5f[3] = s_getConstants_0036b771[3];
  local_5f[4] = s_getConstants_0036b771[4];
  local_5f[5] = s_getConstants_0036b771[5];
  local_5f[6] = s_getConstants_0036b771[6];
  local_5f[7] = s_getConstants_0036b771[7];
                    /* try { // try from 0075f858 to 0075f86f has its CatchHandler @ 0075f8b0 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0075f8e8;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075f8e8  FUN_0075f8e8 =====

void FUN_0075f8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x73746e61;
  local_33 = 0;
  local_58 = 0x22;
  local_3f = (char  [8])s_getConstants_0036b771._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__0036c3af._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__0036c3af._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__0036c3af._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 0075f958 to 0075f977 has its CatchHandler @ 0075f9b8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_009a7a10);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,cStack_48)));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075f9f8  facebook::react::NativeDeviceModuleSpecJSI::NativeDeviceModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeDeviceModuleSpecJSI::NativeDeviceModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDeviceModuleSpecJSI::NativeDeviceModuleSpecJSI
          (NativeDeviceModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  NativeDeviceModuleSpecJSI *pNVar7;
  byte local_60;
  char acStack_5f [5];
  undefined2 uStack_5a;
  char cStack_58;
  undefined4 uStack_57;
  char cStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  char *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar7 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097ce18;
  local_60 = 0x18;
  cStack_53 = 0;
  uStack_57 = 0x73746e61;
  acStack_5f = SUB85(s_getConstants_0036b771._0_8_,0);
  uStack_5a = SUB82(s_getConstants_0036b771._0_8_,5);
  cStack_58 = SUB81(s_getConstants_0036b771._0_8_,7);
                    /* try { // try from 0075fa60 to 0075fa7b has its CatchHandler @ 0075fc14 */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar7,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(code **)(lVar6 + 0x30) = FUN_0075fc4c;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x1a;
  uStack_52 = 0;
  acStack_5f[0] = s_getSc_00367e4b[0];
  acStack_5f[1] = s_getSc_00367e4b[1];
  acStack_5f[2] = s_getSc_00367e4b[2];
  acStack_5f[3] = s_getSc_00367e4b[3];
  acStack_5f[4] = s_getSc_00367e4b[4];
  uStack_5a = (undefined2)s_reenSize_00367e50._0_3_;
  cStack_58 = SUB31(s_reenSize_00367e50._0_3_,2);
  uStack_57 = (undefined4)s_reenSize_00367e50._3_5_;
  cStack_53 = SUB51(s_reenSize_00367e50._3_5_,4);
                    /* try { // try from 0075fac4 to 0075fadf has its CatchHandler @ 0075fc10 */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar7,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 1;
  *(code **)(lVar6 + 0x30) = FUN_0075fd5c;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x1a;
  uStack_52 = 0;
  acStack_5f[0] = s_getWi_0036b7b5[0];
  acStack_5f[1] = s_getWi_0036b7b5[1];
  acStack_5f[2] = s_getWi_0036b7b5[2];
  acStack_5f[3] = s_getWi_0036b7b5[3];
  acStack_5f[4] = s_getWi_0036b7b5[4];
  uStack_5a = (undefined2)s_ndowSize_0036b7ba._0_3_;
  cStack_58 = SUB31(s_ndowSize_0036b7ba._0_3_,2);
  uStack_57 = (undefined4)s_ndowSize_0036b7ba._3_5_;
  cStack_53 = SUB51(s_ndowSize_0036b7ba._3_5_,4);
                    /* try { // try from 0075fb2c to 0075fb47 has its CatchHandler @ 0075fc0c */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar7,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 1;
  *(code **)(lVar6 + 0x30) = FUN_0075feb0;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 0075fb68 to 0075fb6f has its CatchHandler @ 0075fc04 */
  local_50 = (char *)operator_new(0x20);
  uVar5 = _UNK_00371468;
  uVar4 = _DAT_00371460;
  uVar3 = s_getMediaPerforma_00369c08._8_8_;
  uVar2 = s_getMediaPerforma_00369c08._0_8_;
  *(undefined8 *)(local_50 + 0x10) = s_nceClass_00369c18._0_8_;
  *(undefined8 *)(local_50 + 8) = uVar3;
  *(undefined8 *)local_50 = uVar2;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined4)((ulong)uVar5 >> 8);
  cStack_53 = (char)((ulong)uVar5 >> 0x28);
  uStack_52 = (undefined1)((ulong)uVar5 >> 0x30);
  uStack_51 = (undefined1)((ulong)uVar5 >> 0x38);
  local_60 = (byte)uVar4;
  acStack_5f = SUB85((ulong)uVar4 >> 8,0);
  uStack_5a = (undefined2)((ulong)uVar4 >> 0x30);
  local_50[0x18] = '\0';
                    /* try { // try from 0075fba4 to 0075fbbf has its CatchHandler @ 0075fc00 */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar7,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(code **)(lVar6 + 0x30) = FUN_00760004;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075fc4c  FUN_0075fc4c =====

void FUN_0075fc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x73746e61;
  local_33 = 0;
  local_58 = 0x22;
  local_3f = (char  [8])s_getConstants_0036b771._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__0036c3af._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__0036c3af._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__0036c3af._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 0075fcbc to 0075fcdb has its CatchHandler @ 0075fd1c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_009a7a18);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,cStack_48)));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075fd5c  FUN_0075fd5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075fd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [5];
  char acStack_5a [3];
  char acStack_57 [5];
  undefined1 local_52;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_52 = 0;
  local_60 = 0x1a;
  local_5f = s_getSc_00367e4b;
  acStack_5a = (char  [3])s_reenSize_00367e50._0_3_;
  acStack_57 = (char  [5])s_reenSize_00367e50._3_5_;
                    /* try { // try from 0075fdb8 to 0075fdbf has its CatchHandler @ 0075fe80 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng__Lcom_faceboo_0036c3d1._8_8_;
  uVar3 = s_ng__Lcom_faceboo_0036c3d1._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036c3c1._0_8_;
  uStack_78 = _UNK_00372c48;
  local_80 = _DAT_00372c40;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036c3c1._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s_dge_WritableMap__0036c3ec._8_8_;
  uVar4 = s_k_react_bri_0036c3e1._0_8_;
  uVar2 = CONCAT53(s_dge_WritableMap__0036c3ec._0_5_,s_k_react_bri_0036c3e1._8_3_);
  uVar3 = CONCAT35(s_dge_WritableMap__0036c3ec._5_3_,s_dge_WritableMap__0036c3ec._0_5_);
  local_70[0x3b] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x33) = uVar5;
  *(undefined8 *)(local_70 + 0x2b) = uVar3;
                    /* try { // try from 0075fdf4 to 0075fe1f has its CatchHandler @ 0075fe68 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,4,&local_60,&local_80,param_4,param_5,&DAT_009a7a20);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0075feb0  FUN_0075feb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075feb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [5];
  char acStack_5a [3];
  char acStack_57 [5];
  undefined1 local_52;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_52 = 0;
  local_60 = 0x1a;
  local_5f = s_getWi_0036b7b5;
  acStack_5a = (char  [3])s_ndowSize_0036b7ba._0_3_;
  acStack_57 = (char  [5])s_ndowSize_0036b7ba._3_5_;
                    /* try { // try from 0075ff0c to 0075ff13 has its CatchHandler @ 0075ffd4 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng__Lcom_faceboo_0036c3d1._8_8_;
  uVar3 = s_ng__Lcom_faceboo_0036c3d1._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036c3c1._0_8_;
  uStack_78 = _UNK_00372c48;
  local_80 = _DAT_00372c40;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036c3c1._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s_dge_WritableMap__0036c3ec._8_8_;
  uVar4 = s_k_react_bri_0036c3e1._0_8_;
  uVar2 = CONCAT53(s_dge_WritableMap__0036c3ec._0_5_,s_k_react_bri_0036c3e1._8_3_);
  uVar3 = CONCAT35(s_dge_WritableMap__0036c3ec._5_3_,s_dge_WritableMap__0036c3ec._0_5_);
  local_70[0x3b] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x33) = uVar5;
  *(undefined8 *)(local_70 + 0x2b) = uVar3;
                    /* try { // try from 0075ff48 to 0075ff73 has its CatchHandler @ 0075ffbc */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,4,&local_60,&local_80,param_4,param_5,&DAT_009a7a28);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760004  FUN_00760004 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00760004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_nceClass_00369c18._0_8_;
  uVar3 = s_getMediaPerforma_00369c08._8_8_;
  uVar2 = s_getMediaPerforma_00369c08._0_8_;
  local_50[0x18] = '\0';
  *(undefined8 *)(local_50 + 0x10) = uVar4;
  *(undefined8 *)(local_50 + 8) = uVar3;
  *(undefined8 *)local_50 = uVar2;
  local_78[0] = 6;
  uStack_58 = _UNK_00371468;
  local_60 = _DAT_00371460;
  local_78[1] = 0x28;
  local_78[2] = 0x29;
  local_78[3] = 0x44;
  local_78[4] = 0;
                    /* try { // try from 00760084 to 007600af has its CatchHandler @ 007600f8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,2,&local_60,local_78,param_4,param_5,&DAT_009a7a30);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760138  facebook::react::NativeDeviceSettingsModuleSpecJSI::NativeDeviceSettingsModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeDeviceSettingsModuleSpecJSI::NativeDeviceSettingsModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDeviceSettingsModuleSpecJSI::NativeDeviceSettingsModuleSpecJSI
          (NativeDeviceSettingsModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  NativeDeviceSettingsModuleSpecJSI *pNVar9;
  byte local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined7 uStack_57;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar9 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097ce58;
  local_60 = 0x26;
  uStack_4c = uStack_4c & 0xffffff00;
  uStack_57 = (undefined7)s_openPrivacySettings_003677a6._8_8_;
  uStack_50 = CONCAT31(0x73676e,SUB81(s_openPrivacySettings_003677a6._8_8_,7));
  uStack_5f = (undefined7)s_openPrivacySettings_003677a6._0_8_;
  cStack_58 = SUB81(s_openPrivacySettings_003677a6._0_8_,7);
                    /* try { // try from 007601a0 to 007601bb has its CatchHandler @ 00760380 */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar9,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_007603b8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,uStack_50));
  }
                    /* try { // try from 007601d8 to 007601df has its CatchHandler @ 00760378 */
  pcVar8 = (char *)operator_new(0x20);
  uVar5 = _UNK_00371468;
  uVar4 = _DAT_00371460;
  uVar3 = s_openNotification_0036618d._8_8_;
  uVar2 = s_openNotification_0036618d._0_8_;
  uStack_50 = SUB84(pcVar8,0);
  uStack_4c = (uint)((ulong)pcVar8 >> 0x20);
  *(undefined8 *)(pcVar8 + 0x10) = s_Settings_0036619d._0_8_;
  *(undefined8 *)(pcVar8 + 8) = uVar3;
  *(undefined8 *)pcVar8 = uVar2;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined7)((ulong)uVar5 >> 8);
  local_60 = (byte)uVar4;
  uStack_5f = (undefined7)((ulong)uVar4 >> 8);
  pcVar8[0x18] = '\0';
                    /* try { // try from 00760214 to 0076022f has its CatchHandler @ 00760374 */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar9,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_007604bc;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,uStack_50));
  }
                    /* try { // try from 0076024c to 00760253 has its CatchHandler @ 0076036c */
  pcVar8 = (char *)operator_new(0x20);
  uVar6 = _UNK_00371d78;
  uVar5 = _s___00371d70;
  uVar4 = s_sibilitySettings_0036b1c2._8_8_;
  uVar3 = s_openAcces_0036b1b9._0_8_;
  uVar2 = CONCAT17(s_sibilitySettings_0036b1c2[7],s_sibilitySettings_0036b1c2._0_7_);
  uStack_50 = SUB84(pcVar8,0);
  uStack_4c = (uint)((ulong)pcVar8 >> 0x20);
  *(ulong *)(pcVar8 + 8) = CONCAT71(s_sibilitySettings_0036b1c2._0_7_,s_openAcces_0036b1b9[8]);
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0x11) = uVar4;
  *(undefined8 *)(pcVar8 + 9) = uVar2;
  cStack_58 = (char)uVar6;
  uStack_57 = (undefined7)((ulong)uVar6 >> 8);
  local_60 = (byte)uVar5;
  uStack_5f = (undefined7)((ulong)uVar5 >> 8);
  pcVar8[0x19] = '\0';
                    /* try { // try from 00760288 to 007602a3 has its CatchHandler @ 00760368 */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar9,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_007605f0;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,uStack_50));
  }
                    /* try { // try from 007602c0 to 007602c7 has its CatchHandler @ 00760360 */
  pcVar8 = (char *)operator_new(0x20);
  uVar6 = _UNK_003717a8;
  uVar5 = _s___003717a0;
  uVar4 = s_reExclusionRects_0036f715._8_8_;
  uVar3 = s_setSystemGestu_0036f707._0_8_;
  uVar2 = CONCAT62(s_reExclusionRects_0036f715._2_6_,s_reExclusionRects_0036f715._0_2_);
  uStack_50 = SUB84(pcVar8,0);
  uStack_4c = (uint)((ulong)pcVar8 >> 0x20);
  *(ulong *)(pcVar8 + 8) =
       CONCAT26(s_reExclusionRects_0036f715._0_2_,s_setSystemGestu_0036f707._8_6_);
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0x16) = uVar4;
  *(undefined8 *)(pcVar8 + 0xe) = uVar2;
  cStack_58 = (char)uVar6;
  uStack_57 = (undefined7)((ulong)uVar6 >> 8);
  local_60 = (byte)uVar5;
  uStack_5f = (undefined7)((ulong)uVar5 >> 8);
  pcVar8[0x1e] = '\0';
                    /* try { // try from 007602fc to 00760317 has its CatchHandler @ 0076035c */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar9,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 1;
  *(code **)(lVar7 + 0x30) = FUN_00760724;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,uStack_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007603b8  FUN_007603b8 =====

void FUN_007603b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  undefined4 uStack_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x26;
  uStack_2c = uStack_2c & 0xffffff00;
  local_58[0] = 6;
  uStack_37 = (undefined7)s_openPrivacySettings_003677a6._8_8_;
  uStack_30 = CONCAT31(0x73676e,SUB81(s_openPrivacySettings_003677a6._8_8_,7));
  local_3f = (char  [8])s_openPrivacySettings_003677a6._0_8_;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0076041c to 0076043b has its CatchHandler @ 0076047c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7a38);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,uStack_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007604bc  FUN_007604bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007604bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_Settings_0036619d._0_8_;
  uVar3 = s_openNotification_0036618d._8_8_;
  uVar2 = s_openNotification_0036618d._0_8_;
  local_50[0x18] = '\0';
  *(undefined8 *)(local_50 + 0x10) = uVar4;
  *(undefined8 *)(local_50 + 8) = uVar3;
  *(undefined8 *)local_50 = uVar2;
  local_78[0] = 6;
  uStack_58 = _UNK_00371468;
  local_60 = _DAT_00371460;
  local_78[1] = 0x28;
  local_78[2] = 0x29;
  local_78[3] = 0x56;
  local_78[4] = 0;
                    /* try { // try from 0076053c to 00760567 has its CatchHandler @ 007605b0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,local_78,param_4,param_5,&DAT_009a7a40);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007605f0  FUN_007605f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007605f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar5 = s_sibilitySettings_0036b1c2._8_8_;
  uVar4 = s_openAcces_0036b1b9._0_8_;
  uVar2 = CONCAT71(s_sibilitySettings_0036b1c2._0_7_,s_openAcces_0036b1b9[8]);
  uVar3 = CONCAT17(s_sibilitySettings_0036b1c2[7],s_sibilitySettings_0036b1c2._0_7_);
  local_50[0x19] = '\0';
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar4;
  uStack_58 = _UNK_00371d78;
  local_60 = _s___00371d70;
  local_78[0] = 6;
  *(undefined8 *)(local_50 + 0x11) = uVar5;
  *(undefined8 *)(local_50 + 9) = uVar3;
  local_78[1] = 0x28;
  local_78[2] = 0x29;
  local_78[3] = 0x56;
  local_78[4] = 0;
                    /* try { // try from 00760670 to 0076069b has its CatchHandler @ 007606e4 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,local_78,param_4,param_5,&DAT_009a7a48);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760724  FUN_00760724 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00760724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uStack_58 = _UNK_003717a8;
  local_60 = _s___003717a0;
  uVar4 = s_reExclusionRects_0036f715._8_8_;
  uVar3 = s_setSystemGestu_0036f707._0_8_;
  uVar2 = CONCAT62(s_reExclusionRects_0036f715._2_6_,s_reExclusionRects_0036f715._0_2_);
  *(ulong *)(local_50 + 8) =
       CONCAT26(s_reExclusionRects_0036f715._0_2_,s_setSystemGestu_0036f707._8_6_);
  *(undefined8 *)local_50 = uVar3;
  *(undefined8 *)(local_50 + 0x16) = uVar4;
  *(undefined8 *)(local_50 + 0xe) = uVar2;
  local_50[0x1e] = '\0';
                    /* try { // try from 00760790 to 00760797 has its CatchHandler @ 00760850 */
  local_70 = (char *)operator_new(0x30);
  uVar4 = s_eact_bridge__00369687._0_8_;
  uVar3 = s__Lcom_facebook_r_00369677._0_8_;
  uVar2 = CONCAT44(s_ReadableArray__V_00369693._0_4_,s_eact_bridge__00369687._8_4_);
  uStack_78 = _UNK_00372448;
  local_80 = _DAT_00372440;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00369677._8_8_;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar4;
  uVar3 = s_ReadableArray__V_00369693._8_8_;
  uVar2 = CONCAT44(s_ReadableArray__V_00369693._4_4_,s_ReadableArray__V_00369693._0_4_);
  local_70[0x2c] = '\0';
  *(undefined8 *)(local_70 + 0x24) = uVar3;
  *(undefined8 *)(local_70 + 0x1c) = uVar2;
                    /* try { // try from 007607c4 to 007607ef has its CatchHandler @ 00760838 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009a7a50);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760880  facebook::react::NativeDeviceThermalStateModuleSpecJSI::NativeDeviceThermalStateModuleSpecJSI =====

/* facebook::react::NativeDeviceThermalStateModuleSpecJSI::NativeDeviceThermalStateModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDeviceThermalStateModuleSpecJSI::NativeDeviceThermalStateModuleSpecJSI
          (NativeDeviceThermalStateModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeDeviceThermalStateModuleSpecJSI *pNVar3;
  byte local_60;
  char local_5f [7];
  undefined4 uStack_58;
  uint uStack_54;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097ce98;
  local_60 = 0x16;
  uStack_54 = uStack_54 & 0xffffff00;
  local_5f = SUB87(s_addListener_0036dd70._0_8_,0);
  uStack_58 = CONCAT31(0x72656e,SUB81(s_addListener_0036dd70._0_8_,7));
                    /* try { // try from 007608e8 to 00760903 has its CatchHandler @ 00760a1c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00760a54;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  local_60 = 0x1e;
  local_50 = 0;
  local_5f[0] = s_removeL_0037044f[0];
  local_5f[1] = s_removeL_0037044f[1];
  local_5f[2] = s_removeL_0037044f[2];
  local_5f[3] = s_removeL_0037044f[3];
  local_5f[4] = s_removeL_0037044f[4];
  local_5f[5] = s_removeL_0037044f[5];
  local_5f[6] = s_removeL_0037044f[6];
  uStack_58 = (undefined4)CONCAT71(s_isteners_00370456._1_7_,s_isteners_00370456[0]);
  uStack_54 = SUB74(s_isteners_00370456._1_7_,3);
                    /* try { // try from 00760950 to 0076096b has its CatchHandler @ 00760a18 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00760b68;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  local_60 = 0x1e;
  local_50 = 0;
  local_5f[0] = s_getTher_0036c2e1[0];
  local_5f[1] = s_getTher_0036c2e1[1];
  local_5f[2] = s_getTher_0036c2e1[2];
  local_5f[3] = s_getTher_0036c2e1[3];
  local_5f[4] = s_getTher_0036c2e1[4];
  local_5f[5] = s_getTher_0036c2e1[5];
  local_5f[6] = s_getTher_0036c2e1[6];
  uStack_58 = (undefined4)CONCAT71(s_malState_0036c2e8._1_7_,s_malState_0036c2e8[0]);
  uStack_54 = SUB74(s_malState_0036c2e8._1_7_,3);
                    /* try { // try from 007609b8 to 007609d3 has its CatchHandler @ 00760a14 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00760c6c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760a54  FUN_00760a54 =====

void FUN_00760a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58 = 0x2a;
  local_34 = 0;
  local_3f = (undefined7)s_addListener_0036dd70._0_8_;
  _cStack_38 = CONCAT31(0x72656e,SUB81(s_addListener_0036dd70._0_8_,7));
  acStack_4f = (char  [5])s__Ljava_lang_S_0036ec45._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036ec45._0_8_;
  uStack_4a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_48 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_47 = (char  [5])s_tring__V_0036ec52._3_5_;
  uStack_42 = 0;
                    /* try { // try from 00760ac8 to 00760ae7 has its CatchHandler @ 00760b28 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_009a7a58);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760b68  FUN_00760b68 =====

void FUN_00760b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1e;
  local_3f = s_removeL_0037044f;
  local_58[0] = 8;
  cStack_38 = s_isteners_00370456[0];
  acStack_37 = (char  [7])s_isteners_00370456._1_7_;
  local_30 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 00760bcc to 00760beb has its CatchHandler @ 00760c2c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7a60);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_2f,local_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760c6c  FUN_00760c6c =====

void FUN_00760c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined4 uStack_47;
  undefined1 uStack_43;
  undefined2 uStack_42;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1e;
  local_3f = s_getTher_0036c2e1;
  cStack_38 = s_malState_0036c2e8[0];
  acStack_37 = (char  [7])s_malState_0036c2e8._1_7_;
  local_58 = 0x28;
  local_30 = 0;
  uStack_47 = 0x3b656c62;
  uStack_4f = (undefined7)s___Ljava_lang_Double__003696a4._8_8_;
  cStack_48 = SUB81(s___Ljava_lang_Double__003696a4._8_8_,7);
  local_57 = (char  [8])s___Ljava_lang_Double__003696a4._0_8_;
  uStack_43 = 0;
                    /* try { // try from 00760ce0 to 00760cff has its CatchHandler @ 00760d40 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,2,&local_40,&local_58,param_3,param_4,&DAT_009a7a68);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_2f,local_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760d80  facebook::react::NativeDigitalCredentialModuleSpecJSI::NativeDigitalCredentialModuleSpecJSI =====

/* facebook::react::NativeDigitalCredentialModuleSpecJSI::NativeDigitalCredentialModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDigitalCredentialModuleSpecJSI::NativeDigitalCredentialModuleSpecJSI
          (NativeDigitalCredentialModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [5];
  undefined2 uStack_5a;
  undefined4 uStack_58;
  char cStack_54;
  char cStack_53;
  undefined1 local_52;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097ced8;
  local_60 = 0x16;
  cStack_54 = 0;
  local_5f = SUB85(s_isAvailable_00365a4d._0_8_,0);
  uStack_5a = SUB82(s_isAvailable_00365a4d._0_8_,5);
  uStack_58 = CONCAT31(0x656c62,SUB81(s_isAvailable_00365a4d._0_8_,7));
                    /* try { // try from 00760de8 to 00760e03 has its CatchHandler @ 00760eb0 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00760ee8;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x1a;
  local_52 = 0;
  local_5f[0] = s_getCr_00370955[0];
  local_5f[1] = s_getCr_00370955[1];
  local_5f[2] = s_getCr_00370955[2];
  local_5f[3] = s_getCr_00370955[3];
  local_5f[4] = s_getCr_00370955[4];
  uStack_5a = (undefined2)s_edential_0037095a._0_3_;
  uStack_58 = (undefined4)(CONCAT53(s_edential_0037095a._3_5_,s_edential_0037095a._0_3_) >> 0x10);
  cStack_54 = SUB51(s_edential_0037095a._3_5_,3);
  cStack_53 = SUB51(s_edential_0037095a._3_5_,4);
                    /* try { // try from 00760e4c to 00760e67 has its CatchHandler @ 00760eac */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00761038;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00760ee8  FUN_00760ee8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00760ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  undefined7 local_5f;
  char cStack_58;
  undefined3 uStack_57;
  undefined1 local_54;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x16;
  local_54 = 0;
  local_5f = (undefined7)s_isAvailable_00365a4d._0_8_;
  _cStack_58 = CONCAT31(0x656c62,SUB81(s_isAvailable_00365a4d._0_8_,7));
                    /* try { // try from 00760f48 to 00760f4f has its CatchHandler @ 00761008 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00760f7c to 00760fa7 has its CatchHandler @ 00760ff0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7a70);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00761038  FUN_00761038 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [5];
  char acStack_5a [3];
  char acStack_57 [5];
  undefined1 local_52;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_52 = 0;
  local_60 = 0x1a;
  local_5f = s_getCr_00370955;
  acStack_5a = (char  [3])s_edential_0037095a._0_3_;
  acStack_57 = (char  [5])s_edential_0037095a._3_5_;
                    /* try { // try from 00761094 to 0076109b has its CatchHandler @ 0076115c */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 007610d0 to 007610fb has its CatchHandler @ 00761144 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7a78);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0076118c  facebook::react::NativeDiskUsageModuleSpecJSI::NativeDiskUsageModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeDiskUsageModuleSpecJSI::NativeDiskUsageModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeDiskUsageModuleSpecJSI::NativeDiskUsageModuleSpecJSI
          (NativeDiskUsageModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  NativeDiskUsageModuleSpecJSI *pNVar8;
  byte local_60;
  char acStack_5f [5];
  undefined2 uStack_5a;
  undefined4 uStack_58;
  char cStack_54;
  char cStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  char *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar8 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097cf18;
  local_60 = 0x16;
  cStack_54 = 0;
  acStack_5f = SUB85(s_clearCaches_0036d730._0_8_,0);
  uStack_5a = SUB82(s_clearCaches_0036d730._0_8_,5);
  uStack_58 = CONCAT31(0x736568,SUB81(s_clearCaches_0036d730._0_8_,7));
                    /* try { // try from 007611f4 to 0076120f has its CatchHandler @ 00761338 */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_00761370;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x1a;
  uStack_52 = 0;
  acStack_5f[0] = s_calcu_0036a5e0[0];
  acStack_5f[1] = s_calcu_0036a5e0[1];
  acStack_5f[2] = s_calcu_0036a5e0[2];
  acStack_5f[3] = s_calcu_0036a5e0[3];
  acStack_5f[4] = s_calcu_0036a5e0[4];
  uStack_5a = (undefined2)s_lateSize_0036a5e5._0_3_;
  uStack_58 = (undefined4)(CONCAT53(s_lateSize_0036a5e5._3_5_,s_lateSize_0036a5e5._0_3_) >> 0x10);
  cStack_54 = SUB51(s_lateSize_0036a5e5._3_5_,3);
  cStack_53 = SUB51(s_lateSize_0036a5e5._3_5_,4);
                    /* try { // try from 00761258 to 00761273 has its CatchHandler @ 00761334 */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_00761474;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 00761290 to 00761297 has its CatchHandler @ 0076132c */
  local_50 = (char *)operator_new(0x20);
  uVar6 = _UNK_00371d78;
  uVar5 = _s___00371d70;
  uVar4 = s_orageDiagnostics_0036c9e3._8_8_;
  uVar3 = s_collectSt_0036c9da._0_8_;
  uVar2 = CONCAT17(s_orageDiagnostics_0036c9e3[7],s_orageDiagnostics_0036c9e3._0_7_);
  *(ulong *)(local_50 + 8) = CONCAT71(s_orageDiagnostics_0036c9e3._0_7_,s_collectSt_0036c9da[8]);
  *(undefined8 *)local_50 = uVar3;
  *(undefined8 *)(local_50 + 0x11) = uVar4;
  *(undefined8 *)(local_50 + 9) = uVar2;
  uStack_58 = (undefined4)uVar6;
  cStack_54 = (char)((ulong)uVar6 >> 0x20);
  cStack_53 = (char)((ulong)uVar6 >> 0x28);
  uStack_52 = (undefined1)((ulong)uVar6 >> 0x30);
  uStack_51 = (undefined1)((ulong)uVar6 >> 0x38);
  local_60 = (byte)uVar5;
  acStack_5f = SUB85((ulong)uVar5 >> 8,0);
  uStack_5a = (undefined2)((ulong)uVar5 >> 0x30);
  local_50[0x19] = '\0';
                    /* try { // try from 007612cc to 007612e7 has its CatchHandler @ 00761328 */
  local_40 = &local_60;
  lVar7 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(code **)(lVar7 + 0x30) = FUN_007615c0;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00761370  FUN_00761370 =====

void FUN_00761370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58[0] = 6;
  local_34 = 0;
  local_3f = (undefined7)s_clearCaches_0036d730._0_8_;
  _cStack_38 = CONCAT31(0x736568,SUB81(s_clearCaches_0036d730._0_8_,7));
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 007613d4 to 007613f3 has its CatchHandler @ 00761434 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7a80);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00761474  FUN_00761474 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [5];
  char acStack_5a [3];
  char acStack_57 [5];
  undefined1 local_52;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_52 = 0;
  local_60 = 0x1a;
  local_5f = s_calcu_0036a5e0;
  acStack_5a = (char  [3])s_lateSize_0036a5e5._0_3_;
  acStack_57 = (char  [5])s_lateSize_0036a5e5._3_5_;
                    /* try { // try from 007614d0 to 007614d7 has its CatchHandler @ 00761590 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00761504 to 0076152f has its CatchHandler @ 00761578 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7a88);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007615c0  FUN_007615c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007615c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uStack_58 = _UNK_00371d78;
  local_60 = _s___00371d70;
  uVar4 = s_orageDiagnostics_0036c9e3._8_8_;
  uVar3 = s_collectSt_0036c9da._0_8_;
  uVar2 = CONCAT17(s_orageDiagnostics_0036c9e3[7],s_orageDiagnostics_0036c9e3._0_7_);
  *(ulong *)(local_50 + 8) = CONCAT71(s_orageDiagnostics_0036c9e3._0_7_,s_collectSt_0036c9da[8]);
  *(undefined8 *)local_50 = uVar3;
  *(undefined8 *)(local_50 + 0x11) = uVar4;
  *(undefined8 *)(local_50 + 9) = uVar2;
  local_50[0x19] = '\0';
                    /* try { // try from 0076162c to 00761633 has its CatchHandler @ 007616ec */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00761660 to 0076168b has its CatchHandler @ 007616d4 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009a7a90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0076171c  facebook::react::NativeFWOMeasureModuleSpecJSI::NativeFWOMeasureModuleSpecJSI =====

/* facebook::react::NativeFWOMeasureModuleSpecJSI::NativeFWOMeasureModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeFWOMeasureModuleSpecJSI::NativeFWOMeasureModuleSpecJSI
          (NativeFWOMeasureModuleSpecJSI *this,InitParams *param_1)

{
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0097cf58;
  return;
}


// ===== 00761748  facebook::react::NativeFastConnectModuleSpecJSI::NativeFastConnectModuleSpecJSI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::NativeFastConnectModuleSpecJSI::NativeFastConnectModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeFastConnectModuleSpecJSI::NativeFastConnectModuleSpecJSI
          (NativeFastConnectModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  NativeFastConnectModuleSpecJSI *pNVar8;
  byte local_60;
  char acStack_5f [6];
  char cStack_59;
  char cStack_58;
  undefined4 uStack_57;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char local_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar8 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0097cf98;
  local_60 = 0x18;
  cStack_53 = 0;
  uStack_57 = 0x73746e61;
  acStack_5f = SUB86(s_getConstants_0036b771._0_8_,0);
  cStack_59 = SUB81(s_getConstants_0036b771._0_8_,6);
  cStack_58 = SUB81(s_getConstants_0036b771._0_8_,7);
                    /* try { // try from 007617b0 to 007617cb has its CatchHandler @ 00761a9c */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(code **)(lVar6 + 0x30) = FUN_00761ad4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,local_50))));
  }
  local_60 = 0x1c;
  cStack_51 = 0;
  acStack_5f[0] = s_setCli_00370963[0];
  acStack_5f[1] = s_setCli_00370963[1];
  acStack_5f[2] = s_setCli_00370963[2];
  acStack_5f[3] = s_setCli_00370963[3];
  acStack_5f[4] = s_setCli_00370963[4];
  acStack_5f[5] = s_setCli_00370963[5];
  cStack_59 = (char)s_entState_00370969._0_2_;
  cStack_58 = SUB21(s_entState_00370969._0_2_,1);
  uStack_57 = (undefined4)s_entState_00370969._2_6_;
  cStack_53 = SUB61(s_entState_00370969._2_6_,4);
  cStack_52 = SUB61(s_entState_00370969._2_6_,5);
                    /* try { // try from 00761814 to 0076182f has its CatchHandler @ 00761a98 */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 2;
  *(code **)(lVar6 + 0x30) = FUN_00761be4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,local_50))));
  }
                    /* try { // try from 00761850 to 00761857 has its CatchHandler @ 00761a90 */
  pcVar7 = (char *)operator_new(0x20);
  uVar5 = _UNK_00371468;
  uVar4 = _DAT_00371460;
  uVar3 = s_setUseChannelObf_00369184._8_8_;
  uVar2 = s_setUseChannelObf_00369184._0_8_;
  local_50 = (char)pcVar7;
  uStack_4f = (undefined1)((ulong)pcVar7 >> 8);
  uStack_4e = (undefined1)((ulong)pcVar7 >> 0x10);
  uStack_4d = (undefined5)((ulong)pcVar7 >> 0x18);
  *(undefined8 *)(pcVar7 + 0x10) = s_uscation_00369194._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  cStack_58 = (char)uVar5;
  uStack_57 = (undefined4)((ulong)uVar5 >> 8);
  cStack_53 = (char)((ulong)uVar5 >> 0x28);
  cStack_52 = (char)((ulong)uVar5 >> 0x30);
  cStack_51 = (char)((ulong)uVar5 >> 0x38);
  local_60 = (byte)uVar4;
  acStack_5f = SUB86((ulong)uVar4 >> 8,0);
  cStack_59 = (char)((ulong)uVar4 >> 0x38);
  pcVar7[0x18] = '\0';
                    /* try { // try from 0076188c to 007618a7 has its CatchHandler @ 00761a8c */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 1;
  *(code **)(lVar6 + 0x30) = FUN_00761d30;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,local_50))));
  }
  uStack_4f = 0;
  local_60 = 0x20;
  uStack_57 = (undefined4)s_setUseAltGateway_00367e59._8_8_;
  cStack_53 = SUB81(s_setUseAltGateway_00367e59._8_8_,4);
  cStack_52 = SUB81(s_setUseAltGateway_00367e59._8_8_,5);
  cStack_51 = SUB81(s_setUseAltGateway_00367e59._8_8_,6);
  local_50 = SUB81(s_setUseAltGateway_00367e59._8_8_,7);
  acStack_5f = SUB86(s_setUseAltGateway_00367e59._0_8_,0);
  cStack_59 = SUB81(s_setUseAltGateway_00367e59._0_8_,6);
  cStack_58 = SUB81(s_setUseAltGateway_00367e59._0_8_,7);
                    /* try { // try from 007618ec to 00761907 has its CatchHandler @ 00761a88 */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 1;
  *(code **)(lVar6 + 0x30) = FUN_00761e68;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,local_50))));
  }
  local_60 = 0x22;
  uStack_4f = 0x61;
  uStack_4e = 0;
  uStack_57 = (undefined4)s_setDerivedQosData_003661a6._8_8_;
  cStack_53 = SUB81(s_setDerivedQosData_003661a6._8_8_,4);
  cStack_52 = SUB81(s_setDerivedQosData_003661a6._8_8_,5);
  cStack_51 = SUB81(s_setDerivedQosData_003661a6._8_8_,6);
  local_50 = SUB81(s_setDerivedQosData_003661a6._8_8_,7);
  acStack_5f = SUB86(s_setDerivedQosData_003661a6._0_8_,0);
  cStack_59 = SUB81(s_setDerivedQosData_003661a6._0_8_,6);
  cStack_58 = SUB81(s_setDerivedQosData_003661a6._0_8_,7);
                    /* try { // try from 00761950 to 0076196b has its CatchHandler @ 00761a84 */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 2;
  *(code **)(lVar6 + 0x30) = FUN_00761f64;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,local_50))));
  }
  local_60 = 0x22;
  uStack_4f = 0x61;
  uStack_4e = 0;
  uStack_57 = (undefined4)s_getDerivedQosData_0036d73c._8_8_;
  cStack_53 = SUB81(s_getDerivedQosData_0036d73c._8_8_,4);
  cStack_52 = SUB81(s_getDerivedQosData_0036d73c._8_8_,5);
  cStack_51 = SUB81(s_getDerivedQosData_0036d73c._8_8_,6);
  local_50 = SUB81(s_getDerivedQosData_0036d73c._8_8_,7);
  acStack_5f = SUB86(s_getDerivedQosData_0036d73c._0_8_,0);
  cStack_59 = SUB81(s_getDerivedQosData_0036d73c._0_8_,6);
  cStack_58 = SUB81(s_getDerivedQosData_0036d73c._0_8_,7);
                    /* try { // try from 007619b4 to 007619cf has its CatchHandler @ 00761a80 */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 1;
  *(code **)(lVar6 + 0x30) = FUN_007620ac;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,local_50))));
  }
  local_60 = 0x1e;
  local_50 = 0;
  acStack_5f = s_prepare_00365a59._0_6_;
  cStack_59 = s_prepare_00365a59[6];
  cStack_58 = s_Identify_00365a60[0];
  uStack_57 = (undefined4)s_Identify_00365a60._1_7_;
  cStack_53 = SUB71(s_Identify_00365a60._1_7_,4);
  cStack_52 = SUB71(s_Identify_00365a60._1_7_,5);
  cStack_51 = SUB71(s_Identify_00365a60._1_7_,6);
                    /* try { // try from 00761a1c to 00761a37 has its CatchHandler @ 00761a7c */
  local_40 = &local_60;
  lVar6 = FUN_00756964(pNVar8,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar6 + 0x28) = 4;
  *(code **)(lVar6 + 0x30) = FUN_007621f4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,local_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00761ad4  FUN_00761ad4 =====

void FUN_00761ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x73746e61;
  local_33 = 0;
  local_58 = 0x22;
  local_3f = (char  [8])s_getConstants_0036b771._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__0036c3af._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__0036c3af._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__0036c3af._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 00761b44 to 00761b63 has its CatchHandler @ 00761ba4 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_009a7a98);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,cStack_48)));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00761be4  FUN_00761be4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [6];
  char acStack_59 [2];
  char acStack_57 [6];
  undefined1 local_51;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_51 = 0;
  local_60 = 0x1c;
  local_5f = s_setCli_00370963;
  acStack_59 = (char  [2])s_entState_00370969._0_2_;
  acStack_57 = (char  [6])s_entState_00370969._2_6_;
                    /* try { // try from 00761c40 to 00761c47 has its CatchHandler @ 00761d00 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_ng_Ljava_lang_S_0036f287._0_8_;
  uVar4 = s__Ljava_lang_Stri_0036f277._0_8_;
  uVar2 = CONCAT17(s_tring__V_0036f296[0],s_ng_Ljava_lang_S_0036f287._8_7_);
  uVar3 = CONCAT71(s_tring__V_0036f296._1_7_,s_tring__V_0036f296[0]);
  uStack_78 = _UNK_00371d88;
  local_80 = _DAT_00371d80;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f277._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1f) = uVar3;
  local_70[0x27] = '\0';
                    /* try { // try from 00761c74 to 00761c9f has its CatchHandler @ 00761ce8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009a7aa0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00761d30  FUN_00761d30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (char *)operator_new(0x20);
  uVar4 = s_uscation_00369194._0_8_;
  uVar3 = s_setUseChannelObf_00369184._8_8_;
  uVar2 = s_setUseChannelObf_00369184._0_8_;
  local_50[0x18] = '\0';
  *(undefined8 *)(local_50 + 0x10) = uVar4;
  *(undefined8 *)(local_50 + 8) = uVar3;
  *(undefined8 *)local_50 = uVar2;
  local_78[0] = 8;
  uStack_58 = _UNK_00371468;
  local_60 = _DAT_00371460;
  local_78[1] = 0x28;
  local_78[2] = 0x5a;
  local_78[3] = 0x29;
  local_78[4] = 0x56;
  local_78[5] = 0;
                    /* try { // try from 00761db4 to 00761ddf has its CatchHandler @ 00761e28 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,local_78,param_4,param_5,&DAT_009a7aa8);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00761e68  FUN_00761e68 =====

void FUN_00761e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x20;
  local_58[0] = 8;
  uStack_37 = (undefined7)s_setUseAltGateway_00367e59._8_8_;
  cStack_30 = SUB81(s_setUseAltGateway_00367e59._8_8_,7);
  local_3f = (char  [8])s_setUseAltGateway_00367e59._0_8_;
  uStack_2f = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x5a;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 00761ec4 to 00761ee3 has its CatchHandler @ 00761f24 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009a7ab0);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00761f64  FUN_00761f64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined5 uStack_4d;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x22;
  uStack_57 = (undefined7)s_setDerivedQosData_003661a6._8_8_;
  cStack_50 = SUB81(s_setDerivedQosData_003661a6._8_8_,7);
  local_5f = (char  [8])s_setDerivedQosData_003661a6._0_8_;
  uStack_4f = 0x61;
                    /* try { // try from 00761fbc to 00761fc3 has its CatchHandler @ 0076207c */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_ng_Ljava_lang_S_0036f287._0_8_;
  uVar4 = s__Ljava_lang_Stri_0036f277._0_8_;
  uVar2 = CONCAT17(s_tring__V_0036f296[0],s_ng_Ljava_lang_S_0036f287._8_7_);
  uVar3 = CONCAT71(s_tring__V_0036f296._1_7_,s_tring__V_0036f296[0]);
  uStack_78 = _UNK_00371d88;
  local_80 = _DAT_00371d80;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f277._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1f) = uVar3;
  local_70[0x27] = '\0';
                    /* try { // try from 00761ff0 to 0076201b has its CatchHandler @ 00762064 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009a7ab8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_4d,CONCAT21(uStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


