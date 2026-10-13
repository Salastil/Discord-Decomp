// ===== 009692bc  <http::uri::Uri_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::Uri as core::fmt::Debug>::fmt */

void __rustcall <http::uri::Uri_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b048a8)();
  return;
}


// ===== 009692c0  <http::uri::InvalidUri_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::InvalidUri as core::fmt::Display>::fmt */

void __rustcall <http::uri::InvalidUri_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            ((&PTR_s_invalid_uri_character_00af2ab0)[*param_1],
             *(undefined8 *)(&DAT_00379400 + (ulong)*param_1 * 8),param_2);
  return;
}


// ===== 009692e8  <http::uri::InvalidUriParts_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::InvalidUriParts as core::fmt::Display>::fmt */

void __rustcall
<http::uri::InvalidUriParts_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            ((&PTR_s_invalid_uri_character_00af2ab0)[*param_1],
             *(undefined8 *)(&DAT_00379400 + (ulong)*param_1 * 8),param_2);
  return;
}


// ===== 00969310  FUN_00969310 =====

undefined8 FUN_00969310(void)

{
  return 0;
}


// ===== 00969318  <http::uri::authority::http::uri::authority::Authority>::from_shared =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::http::uri::authority::Authority>::from_shared */

void __rustcall
<http::uri::authority::http::uri::authority::Authority>::from_shared(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long in_x14;
  uint uVar8;
  long lVar9;
  
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    lVar5 = *param_2;
    *(undefined1 *)(param_1 + 1) = 9;
    *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00969420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x20))(param_2 + 3);
    return;
  }
  uVar6 = 0;
  uVar8 = 0;
  uVar7 = 0;
  bVar2 = false;
  bVar3 = 0;
  lVar4 = 0;
  do {
    bVar1 = ""[*(byte *)(param_2[1] + lVar4)];
    if (bVar1 < 0x40) {
      lVar9 = lVar4;
      if (bVar1 < 0x2f) {
        if (bVar1 == 0) {
          if (*(byte *)(param_2[1] + lVar4) != 0x25) goto LAB_0096949c;
          bVar2 = true;
        }
        else if (bVar1 == 0x23) break;
      }
      else if (bVar1 == 0x3a) {
        if (7 < uVar6) goto LAB_0096946c;
        uVar6 = uVar6 + 1;
      }
      else if ((bVar1 == 0x2f) || (bVar1 == 0x3f)) break;
    }
    else if (bVar1 == 0x40) {
      bVar2 = false;
      uVar6 = 0;
      bVar3 = 1;
      in_x14 = lVar4;
    }
    else if (bVar1 == 0x5b) {
      if (bVar2 || uVar8 != 0) {
LAB_0096946c:
        lVar5 = *param_2;
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00969480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x20))(param_2 + 3);
        return;
      }
      bVar2 = false;
      uVar8 = 1;
    }
    else if (bVar1 == 0x5d) {
      if (uVar7 != 0 || ((uVar8 ^ 0xffffffff) & 1) != 0) goto LAB_0096946c;
      bVar2 = false;
      uVar6 = 0;
      uVar7 = 1;
      uVar8 = 1;
    }
    lVar4 = lVar4 + 1;
    lVar9 = lVar5;
  } while (lVar5 != lVar4);
  if ((uVar7 == uVar8) && (uVar6 < 2)) {
    if (lVar9 == 0) {
      if (!bVar2) goto LAB_00969488;
    }
    else if (!(bool)(bVar3 & in_x14 == lVar9 + -1) && !bVar2) {
LAB_00969488:
      if (lVar9 == lVar5) {
        lVar5 = *param_2;
        lVar9 = param_2[3];
        lVar4 = param_2[2];
        param_1[1] = param_2[1];
        *param_1 = lVar5;
        param_1[3] = lVar9;
        param_1[2] = lVar4;
        return;
      }
LAB_0096949c:
      lVar5 = *param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x009694ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x20))(param_2 + 3);
      return;
    }
  }
  lVar5 = *param_2;
  *(undefined1 *)(param_1 + 1) = 2;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00969468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x20))(param_2 + 3);
  return;
}


// ===== 009694b0  <http::uri::authority::http::uri::authority::Authority>::from_static =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::http::uri::authority::Authority>::from_static */

void __rustcall
<http::uri::authority::http::uri::authority::Authority>::from_static
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  long lStack_50;
  long lStack_48;
  undefined **local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = &PTR_FUN_00af2b40;
  uStack_28 = 0;
  uStack_38 = param_2;
  local_30 = param_3;
  from_shared(&local_60,&local_40);
  if (local_60 != 0) {
    param_1[1] = CONCAT71(uStack_57,uStack_58);
    *param_1 = local_60;
    param_1[3] = lStack_48;
    param_1[2] = lStack_50;
    return;
  }
  local_40 = (undefined **)CONCAT71(local_40._1_7_,uStack_58);
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("static str is not valid authority",0x21,&local_40,&DAT_00af2b20,
             &PTR_s__root__cargo_registry_src_index__00af2b68);
}


// ===== 0096952c  <http::uri::authority::http::uri::authority::Authority>::parse_non_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::http::uri::authority::Authority>::parse_non_empty */

void __rustcall
<http::uri::authority::http::uri::authority::Authority>::parse_non_empty
          (undefined2 *param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_009696f0();
    return;
  }
  *param_1 = 0x901;
  return;
}


// ===== 00969540  <http::uri::authority::http::uri::authority::Authority>::port =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::http::uri::authority::Authority>::port */

void __rustcall
<http::uri::authority::http::uri::authority::Authority>::port(long *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined2 uVar8;
  uint uVar10;
  long local_78;
  long local_70;
  long local_60;
  ulong local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined8 local_40;
  undefined1 local_38;
  int iVar9;
  
  lVar3 = *(long *)(param_2 + 8);
  uVar6 = *(ulong *)(param_2 + 0x10);
  local_38 = 1;
  uStack_50 = 0;
  local_40 = 0x3a0000003a;
  local_60 = lVar3;
  local_58 = uVar6;
  local_48 = uVar6;
  FUN_00969b98(&local_78,&local_60);
  if (local_78 == 1) {
    uVar1 = local_70 + 1;
    if (local_70 != -1) {
      if (uVar1 < uVar6) {
        if (*(char *)(lVar3 + uVar1) + 0x40 < 0 != SCARRY4((int)*(char *)(lVar3 + uVar1),0x40)) {
LAB_009695b0:
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (lVar3,uVar6,uVar1,uVar6,&PTR_s__root__cargo_registry_src_index__00af2b08);
        }
      }
      else if (uVar6 != uVar1) goto LAB_009695b0;
    }
    lVar5 = uVar6 - uVar1;
    if (lVar5 != 0) {
      pbVar2 = (byte *)(lVar3 + uVar1);
      pbVar7 = pbVar2;
      if (lVar5 == 1) {
        bVar4 = *pbVar2;
        if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) goto LAB_009696b8;
        uVar6 = (ulong)(bVar4 != 0x2b);
        if (bVar4 == 0x2b) {
          pbVar7 = pbVar2 + 1;
        }
      }
      else {
        uVar6 = lVar5 - (ulong)(*pbVar2 == 0x2b);
        if (*pbVar2 == 0x2b) {
          pbVar7 = pbVar2 + 1;
        }
      }
      if (uVar6 < 5) {
        iVar9 = 0;
        uVar8 = 0;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          if (9 < *pbVar7 - 0x30) goto LAB_009696b8;
          iVar9 = (*pbVar7 - 0x30) + iVar9 * 10;
          uVar8 = (undefined2)iVar9;
          pbVar7 = pbVar7 + 1;
        }
LAB_00969634:
        *param_1 = (long)pbVar2;
        param_1[1] = lVar5;
        *(undefined2 *)(param_1 + 2) = uVar8;
        return;
      }
      uVar10 = 0;
      do {
        uVar8 = (undefined2)uVar10;
        if (uVar6 == 0) goto LAB_00969634;
        uVar10 = ((uVar10 & 0xffff) + (uVar10 & 0xffff) * 4) * 2;
        if ((uVar10 & 0xf0000) != 0) break;
        if (9 < *pbVar7 - 0x30) break;
        uVar6 = uVar6 - 1;
        uVar10 = (uVar10 & 0xffff) + (*pbVar7 - 0x30 & 0xffff);
        pbVar7 = pbVar7 + 1;
      } while (uVar10 >> 0x10 == 0);
    }
  }
LAB_009696b8:
  *param_1 = 0;
  return;
}


// ===== 009696f0  FUN_009696f0 =====

void FUN_009696f0(undefined1 *param_1,long param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long in_x14;
  uint uVar7;
  
  if (param_3 == 0) {
    lVar4 = 0;
LAB_009697ec:
    *(long *)(param_1 + 8) = lVar4;
    *param_1 = 0;
    return;
  }
  uVar5 = 0;
  uVar7 = 0;
  uVar6 = 0;
  bVar2 = false;
  bVar3 = 0;
  lVar4 = 0;
  do {
    bVar1 = ""[*(byte *)(param_2 + lVar4)];
    if (bVar1 < 0x40) {
      if (bVar1 < 0x2f) {
        if (bVar1 == 0) {
          if (*(byte *)(param_2 + lVar4) != 0x25) {
            param_1[1] = 0;
            *param_1 = 1;
            return;
          }
          bVar2 = true;
        }
        else if (bVar1 == 0x23) goto LAB_009697dc;
      }
      else if (bVar1 == 0x3a) {
        if (7 < uVar5) goto LAB_00969828;
        uVar5 = uVar5 + 1;
      }
      else if ((bVar1 == 0x2f) || (bVar1 == 0x3f)) {
LAB_009697dc:
        if (uVar6 != uVar7) goto LAB_00969828;
        goto LAB_00969804;
      }
    }
    else if (bVar1 == 0x40) {
      bVar2 = false;
      uVar5 = 0;
      bVar3 = 1;
      in_x14 = lVar4;
    }
    else if (bVar1 == 0x5b) {
      if (bVar2 || uVar7 != 0) goto LAB_00969828;
      bVar2 = false;
      uVar7 = 1;
    }
    else if (bVar1 == 0x5d) {
      if (uVar6 != 0 || ((uVar7 ^ 0xffffffff) & 1) != 0) goto LAB_00969828;
      bVar2 = false;
      uVar5 = 0;
      uVar6 = 1;
      uVar7 = 1;
    }
    lVar4 = lVar4 + 1;
  } while (param_3 != lVar4);
  lVar4 = param_3;
  if (uVar6 == uVar7) {
LAB_00969804:
    if ((uVar5 < 2) && (((lVar4 == 0 || (!(bool)(bVar3 & in_x14 == lVar4 + -1))) && (!bVar2))))
    goto LAB_009697ec;
  }
LAB_00969828:
  param_1[1] = 2;
  *param_1 = 1;
  return;
}


// ===== 0096984c  <http::uri::authority::http::uri::authority::Authority>::port_u16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::http::uri::authority::Authority>::port_u16 */

undefined1  [16] __rustcall <http::uri::authority::http::uri::authority::Authority>::port_u16(void)

{
  undefined1 auVar1 [16];
  long local_28 [2];
  undefined2 local_18;
  
  port(local_28);
  auVar1._1_7_ = 0;
  auVar1[0] = local_28[0] != 0;
  auVar1._8_2_ = local_18;
  auVar1._10_6_ = 0;
  return auVar1;
}


// ===== 0096987c  FUN_0096987c =====

undefined1  [16] FUN_0096987c(long *param_1,ulong param_2)

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
    auVar5 = FUN_0096987c(param_1);
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
  FUN_00969b98(local_38);
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


// ===== 00969950  FUN_00969950 =====

void FUN_00969950(void)

{
  return;
}


// ===== 00969954  FUN_00969954 =====

void FUN_00969954(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00af2b40;
  param_1[1] = param_3;
  return;
}


// ===== 00969968  FUN_00969968 =====

undefined8 FUN_00969968(void)

{
  return 0;
}


// ===== 00969970  http::uri::authority::host =====

/* WARNING: Unknown calling convention: __rustcall */
/* http::uri::authority::host */

undefined1  [16] __rustcall http::uri::authority::host(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined1 local_48;
  ushort local_40;
  uint local_38 [2];
  long local_30;
  ulong uVar2;
  
  local_80._0_8_ = 0;
  local_60 = 0;
  local_48 = 1;
  local_50 = 0x4000000040;
  local_40 = 1;
  local_80._8_8_ = param_2;
  local_70._0_8_ = param_1;
  local_70._8_8_ = param_2;
  local_58 = param_2;
  auVar5 = FUN_0096987c(local_80);
  uVar2 = auVar5._8_8_;
  if (auVar5._0_8_ == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("split always has at least 1 item",0x20,
               &PTR_s__root__cargo_registry_src_index__00af2b80);
  }
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00af2b98);
  }
  if (*auVar5._0_8_ == '[') {
    local_70._0_8_ = 0;
    local_58 = CONCAT71(local_58._1_7_,1);
    local_60 = 0x5d0000005d;
    local_70._8_8_ = uVar2;
    local_80 = auVar5;
    FUN_0096a000(local_38,local_80);
    if ((local_38[0] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("parsing should validate brackets",0x20,
                 &PTR_s__root__cargo_registry_src_index__00af2bb0);
    }
    uVar1 = local_30 + 1;
    if ((uVar1 <= uVar2) &&
       ((uVar3 = uVar2, uVar1 == uVar2 ||
        (iVar4 = (int)auVar5._0_8_[uVar1], uVar3 = uVar1,
        iVar4 != -0x41 && iVar4 + 0x41 < 0 == SCARRY4(iVar4,0x41))))) {
      auVar5._8_8_ = uVar3;
      return auVar5;
    }
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (auVar5._0_8_,uVar2,0,uVar1,&PTR_s__root__cargo_registry_src_index__00af2bc8);
  }
  local_80._0_8_ = 0;
  local_60 = 0;
  local_48 = 1;
  local_50 = 0x3a0000003a;
  local_40 = 1;
  local_80._8_8_ = uVar2;
  local_58 = uVar2;
  local_70 = auVar5;
  FUN_0096a000(local_38,local_70);
  if ((local_38[0] & 1) != 0) {
    auVar6._8_8_ = local_30 - local_80._0_8_;
    auVar6._0_8_ = auVar5._0_8_ + local_80._0_8_;
    return auVar6;
  }
  if (((local_40 & 0x100) == 0) && (((local_40 & 1) != 0 || (local_80._8_8_ != local_80._0_8_)))) {
    auVar7._8_8_ = local_80._8_8_ - local_80._0_8_;
    auVar7._0_8_ = local_70._0_8_ + local_80._0_8_;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("split always has at least 1 item",0x20,
             &PTR_s__root__cargo_registry_src_index__00af2be0);
}


// ===== 00969b30  <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::cmp::PartialEq>::eq */

bool __rustcall
<http::uri::authority::Authority_as_core::cmp::PartialEq>::eq(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  pbVar6 = *(byte **)(param_2 + 8);
  pbVar7 = *(byte **)(param_1 + 8);
  do {
    bVar4 = lVar5 == 0;
    if (lVar5 == 0) {
      return bVar4;
    }
    bVar2 = *pbVar7;
    lVar5 = lVar5 + -1;
    bVar3 = *pbVar6;
    uVar8 = 0x20;
    uVar1 = uVar8;
    if (0x19 < bVar2 - 0x41) {
      uVar1 = 0;
    }
    if (0x19 < bVar3 - 0x41) {
      uVar8 = 0;
    }
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while ((uVar1 | bVar2) == (uVar8 | bVar3));
  return bVar4;
}


// ===== 00969b98  FUN_00969b98 =====

void FUN_00969b98(undefined8 *param_1,long *param_2)

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
        if (auVar9._0_8_ != 1) goto LAB_00969cb8;
        uVar8 = auVar9._8_8_ + uVar1;
        uVar2 = uVar8 - uVar7;
        if (((uVar7 <= uVar8) && (!CARRY8(uVar2,__n))) &&
           ((uVar2 + __n <= uVar5 &&
            (iVar3 = memcmp((void *)(lVar6 + uVar2),param_2 + 4,__n), iVar3 == 0)))) break;
        uVar4 = 0;
        param_2[3] = uVar8;
        if ((uVar8 < uVar1) || (uVar5 < uVar8)) goto LAB_00969cc0;
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
        if (auVar9._0_8_ != 1) goto LAB_00969cb8;
        uVar8 = auVar9._8_8_ + uVar1;
        if (((uVar7 <= uVar8) && (!CARRY8(uVar8 - uVar7,__n))) && ((uVar8 - uVar7) + __n <= uVar5))
        {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__nix_store_8006w282fgsx3273c878b_00af2bf8);
        }
        uVar4 = 0;
        param_2[3] = uVar8;
      } while ((uVar1 <= uVar8) && (uVar8 <= uVar5));
    }
  }
LAB_00969cc0:
  *param_1 = uVar4;
  return;
LAB_00969cb8:
  uVar4 = 0;
  param_2[3] = uVar1;
  goto LAB_00969cc0;
}


// ===== 00969d00  FUN_00969d00 =====

void FUN_00969d00(long *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10));
  return;
}


// ===== 00969d14  <http::uri::authority::Authority_as_core::cmp::PartialEq<str>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::cmp::PartialEq<str>>::eq */

bool __rustcall
<http::uri::authority::Authority_as_core::cmp::PartialEq<str>>::eq
          (long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  
  if (*(long *)(param_1 + 0x10) != param_3) {
    return false;
  }
  pbVar5 = *(byte **)(param_1 + 8);
  do {
    bVar4 = param_3 == 0;
    if (param_3 == 0) {
      return bVar4;
    }
    bVar2 = *pbVar5;
    param_3 = param_3 + -1;
    bVar3 = *param_2;
    uVar6 = 0x20;
    uVar1 = uVar6;
    if (0x19 < bVar2 - 0x41) {
      uVar1 = 0;
    }
    if (0x19 < bVar3 - 0x41) {
      uVar6 = 0;
    }
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  } while ((uVar1 | bVar2) == (uVar6 | bVar3));
  return bVar4;
}


// ===== 00969d74  <str_as_core::cmp::PartialEq<http::uri::authority::Authority>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as core::cmp::PartialEq<http::uri::authority::Authority>>::eq */

bool __rustcall
<str_as_core::cmp::PartialEq<http::uri::authority::Authority>>::eq
          (byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  
  if (param_2 != *(long *)(param_3 + 0x10)) {
    return false;
  }
  pbVar5 = *(byte **)(param_3 + 8);
  do {
    bVar4 = param_2 == 0;
    if (param_2 == 0) {
      return bVar4;
    }
    bVar2 = *param_1;
    param_2 = param_2 + -1;
    bVar3 = *pbVar5;
    uVar6 = 0x20;
    uVar1 = uVar6;
    if (0x19 < bVar2 - 0x41) {
      uVar1 = 0;
    }
    if (0x19 < bVar3 - 0x41) {
      uVar6 = 0;
    }
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  } while ((uVar1 | bVar2) == (uVar6 | bVar3));
  return bVar4;
}


// ===== 00969ddc  <&str_as_core::cmp::PartialEq<http::uri::authority::Authority>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as core::cmp::PartialEq<http::uri::authority::Authority>>::eq */

bool __rustcall
<&str_as_core::cmp::PartialEq<http::uri::authority::Authority>>::eq
          (undefined8 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  lVar5 = param_1[1];
  if (lVar5 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  pbVar6 = *(byte **)(param_2 + 8);
  pbVar7 = (byte *)*param_1;
  do {
    bVar4 = lVar5 == 0;
    if (lVar5 == 0) {
      return bVar4;
    }
    bVar2 = *pbVar7;
    lVar5 = lVar5 + -1;
    bVar3 = *pbVar6;
    uVar8 = 0x20;
    uVar1 = uVar8;
    if (0x19 < bVar2 - 0x41) {
      uVar1 = 0;
    }
    if (0x19 < bVar3 - 0x41) {
      uVar8 = 0;
    }
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while ((uVar1 | bVar2) == (uVar8 | bVar3));
  return bVar4;
}


// ===== 00969e44  <http::uri::authority::Authority_as_core::cmp::PartialEq<&str>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::cmp::PartialEq<&str>>::eq */

bool __rustcall
<http::uri::authority::Authority_as_core::cmp::PartialEq<&str>>::eq
          (long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != param_2[1]) {
    return false;
  }
  pbVar6 = (byte *)*param_2;
  pbVar7 = *(byte **)(param_1 + 8);
  do {
    bVar4 = lVar5 == 0;
    if (lVar5 == 0) {
      return bVar4;
    }
    bVar2 = *pbVar7;
    lVar5 = lVar5 + -1;
    bVar3 = *pbVar6;
    uVar8 = 0x20;
    uVar1 = uVar8;
    if (0x19 < bVar2 - 0x41) {
      uVar1 = 0;
    }
    if (0x19 < bVar3 - 0x41) {
      uVar8 = 0;
    }
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while ((uVar1 | bVar2) == (uVar8 | bVar3));
  return bVar4;
}


// ===== 00969eac  <http::uri::authority::Authority_as_core::cmp::PartialEq<alloc::string::String>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::cmp::PartialEq<alloc::string::String>>::eq */

bool __rustcall
<http::uri::authority::Authority_as_core::cmp::PartialEq<alloc::string::String>>::eq
          (long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  pbVar6 = *(byte **)(param_2 + 8);
  pbVar7 = *(byte **)(param_1 + 8);
  do {
    bVar4 = lVar5 == 0;
    if (lVar5 == 0) {
      return bVar4;
    }
    bVar2 = *pbVar7;
    lVar5 = lVar5 + -1;
    bVar3 = *pbVar6;
    uVar8 = 0x20;
    uVar1 = uVar8;
    if (0x19 < bVar2 - 0x41) {
      uVar1 = 0;
    }
    if (0x19 < bVar3 - 0x41) {
      uVar8 = 0;
    }
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while ((uVar1 | bVar2) == (uVar8 | bVar3));
  return bVar4;
}


// ===== 00969f14  <http::uri::authority::Authority_as_core::cmp::PartialOrd>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::cmp::PartialOrd>::partial_cmp */

uint __rustcall
<http::uri::authority::Authority_as_core::cmp::PartialOrd>::partial_cmp(long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = 0;
  while( true ) {
    if (*(long *)(param_1 + 0x10) == lVar5) {
      return -(uint)(*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10));
    }
    if (*(long *)(param_2 + 0x10) == lVar5) break;
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + lVar5);
    pbVar2 = (byte *)(*(long *)(param_2 + 8) + lVar5);
    lVar5 = lVar5 + 1;
    uVar4 = (uint)*pbVar1;
    uVar7 = (uint)*pbVar2;
    uVar6 = 0x20;
    uVar3 = uVar6;
    if (0x19 < uVar4 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | uVar4;
    if (0x19 < uVar7 - 0x41) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | uVar7;
    if (uVar3 != uVar6) {
      uVar4 = (uint)(uVar6 < uVar3);
      if (uVar3 < uVar6) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return 1;
}


// ===== 00969f8c  <http::uri::authority::Authority_as_core::cmp::PartialOrd<str>>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::cmp::PartialOrd<str>>::partial_cmp */

uint __rustcall
<http::uri::authority::Authority_as_core::cmp::PartialOrd<str>>::partial_cmp
          (long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = 0;
  while( true ) {
    if (*(long *)(param_1 + 0x10) == lVar5) {
      return -(uint)(*(long *)(param_1 + 0x10) != param_3);
    }
    if (param_3 == lVar5) break;
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + lVar5);
    pbVar2 = (byte *)(param_2 + lVar5);
    lVar5 = lVar5 + 1;
    uVar4 = (uint)*pbVar1;
    uVar6 = 0x20;
    uVar3 = uVar6;
    if (0x19 < uVar4 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | uVar4;
    if (0x19 < *pbVar2 - 0x41) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | *pbVar2;
    if (uVar3 != uVar6) {
      uVar4 = (uint)(uVar6 < uVar3);
      if (uVar3 < uVar6) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return 1;
}


// ===== 0096a000  FUN_0096a000 =====

void FUN_0096a000(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong __n;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  uVar7 = param_2[2];
  uVar1 = param_2[3];
  uVar6 = 0;
  if ((uVar7 <= uVar1) && (uVar8 = param_2[1], uVar1 <= uVar8)) {
    __n = (ulong)*(byte *)(param_2 + 5);
    lVar9 = *param_2;
    cVar2 = *(char *)((long)param_2 + __n + 0x1f);
    if (__n < 5) {
      do {
        if (uVar1 - uVar7 < 0x10) {
          uVar5 = 0;
          if (uVar1 == uVar7) goto LAB_0096a1cc;
          while (*(char *)(lVar9 + uVar7 + uVar5) != cVar2) {
            uVar5 = uVar5 + 1;
            if (uVar1 - uVar7 == uVar5) goto LAB_0096a1cc;
          }
        }
        else {
          auVar10 = core::slice::memchr::memchr_aligned(cVar2,lVar9 + uVar7,uVar1 - uVar7);
          uVar5 = auVar10._8_8_;
          if (auVar10._0_8_ != 1) goto LAB_0096a1cc;
        }
        uVar7 = uVar7 + uVar5 + 1;
        param_2[2] = uVar7;
        if (((__n <= uVar7) && (uVar7 <= uVar8)) &&
           (iVar4 = memcmp((void *)(lVar9 + (uVar7 - __n)),param_2 + 4,__n), iVar4 == 0)) {
          uVar6 = 1;
          param_1[1] = uVar7 - __n;
          param_1[2] = uVar7;
          goto LAB_0096a1d4;
        }
      } while (uVar7 <= uVar1);
      uVar6 = 0;
    }
    else {
      do {
        if (uVar1 - uVar7 < 0x10) {
          uVar5 = 0;
          if (uVar1 == uVar7) {
            auVar10 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(lVar9 + uVar7 + uVar5) == cVar2) {
                auVar10._8_8_ = uVar5;
                auVar10._0_8_ = 1;
                goto LAB_0096a190;
              }
              uVar5 = uVar5 + 1;
            } while (uVar1 - uVar7 != uVar5);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar1 - uVar7;
            auVar10 = auVar3 << 0x40;
          }
        }
        else {
          auVar10 = core::slice::memchr::memchr_aligned(cVar2,lVar9 + uVar7,uVar1 - uVar7);
        }
LAB_0096a190:
        if (auVar10._0_8_ != 1) goto LAB_0096a1cc;
        uVar7 = uVar7 + auVar10._8_8_ + 1;
        param_2[2] = uVar7;
        if ((__n <= uVar7) && (uVar7 <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__nix_store_8006w282fgsx3273c878b_00af2c10);
        }
        uVar6 = 0;
      } while (uVar7 <= uVar1);
    }
  }
LAB_0096a1d4:
  *param_1 = uVar6;
  return;
LAB_0096a1cc:
  uVar6 = 0;
  param_2[2] = uVar1;
  goto LAB_0096a1d4;
}


// ===== 0096a1f4  <str_as_core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp */

uint __rustcall
<str_as_core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp
          (long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = 0;
  while( true ) {
    if (param_2 == lVar5) {
      return -(uint)(param_2 != *(long *)(param_3 + 0x10));
    }
    if (*(long *)(param_3 + 0x10) == lVar5) break;
    pbVar1 = (byte *)(param_1 + lVar5);
    pbVar2 = (byte *)(*(long *)(param_3 + 8) + lVar5);
    lVar5 = lVar5 + 1;
    uVar4 = (uint)*pbVar2;
    uVar6 = 0x20;
    uVar3 = uVar6;
    if (0x19 < *pbVar1 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | *pbVar1;
    if (0x19 < uVar4 - 0x41) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | uVar4;
    if (uVar3 != uVar6) {
      uVar4 = (uint)(uVar6 < uVar3);
      if (uVar3 < uVar6) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return 1;
}


// ===== 0096a268  <&str_as_core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp */

uint __rustcall
<&str_as_core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp
          (long *param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = 0;
  while( true ) {
    if (param_1[1] == lVar5) {
      return -(uint)(param_1[1] != *(long *)(param_2 + 0x10));
    }
    if (*(long *)(param_2 + 0x10) == lVar5) break;
    pbVar1 = (byte *)(*param_1 + lVar5);
    pbVar2 = (byte *)(*(long *)(param_2 + 8) + lVar5);
    lVar5 = lVar5 + 1;
    uVar4 = (uint)*pbVar2;
    uVar6 = 0x20;
    uVar3 = uVar6;
    if (0x19 < *pbVar1 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | *pbVar1;
    if (0x19 < uVar4 - 0x41) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | uVar4;
    if (uVar3 != uVar6) {
      uVar4 = (uint)(uVar6 < uVar3);
      if (uVar3 < uVar6) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return 1;
}


// ===== 0096a2e0  <http::uri::authority::Authority_as_core::cmp::PartialOrd<&str>>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::cmp::PartialOrd<&str>>::partial_cmp */

uint __rustcall
<http::uri::authority::Authority_as_core::cmp::PartialOrd<&str>>::partial_cmp
          (long param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = 0;
  while( true ) {
    if (*(long *)(param_1 + 0x10) == lVar5) {
      return -(uint)(*(long *)(param_1 + 0x10) != param_2[1]);
    }
    if (param_2[1] == lVar5) break;
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + lVar5);
    pbVar2 = (byte *)(*param_2 + lVar5);
    lVar5 = lVar5 + 1;
    uVar4 = (uint)*pbVar1;
    uVar6 = 0x20;
    uVar3 = uVar6;
    if (0x19 < uVar4 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | uVar4;
    if (0x19 < *pbVar2 - 0x41) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | *pbVar2;
    if (uVar3 != uVar6) {
      uVar4 = (uint)(uVar6 < uVar3);
      if (uVar3 < uVar6) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return 1;
}


// ===== 0096a358  <http::uri::authority::Authority_as_core::cmp::PartialOrd<alloc::string::String>>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::cmp::PartialOrd<alloc::string::String>>::partial_cmp */

uint __rustcall
<http::uri::authority::Authority_as_core::cmp::PartialOrd<alloc::string::String>>::partial_cmp
          (long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = 0;
  while( true ) {
    if (*(long *)(param_1 + 0x10) == lVar5) {
      return -(uint)(*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10));
    }
    if (*(long *)(param_2 + 0x10) == lVar5) break;
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + lVar5);
    pbVar2 = (byte *)(*(long *)(param_2 + 8) + lVar5);
    lVar5 = lVar5 + 1;
    uVar4 = (uint)*pbVar1;
    uVar7 = (uint)*pbVar2;
    uVar6 = 0x20;
    uVar3 = uVar6;
    if (0x19 < uVar4 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | uVar4;
    if (0x19 < uVar7 - 0x41) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | uVar7;
    if (uVar3 != uVar6) {
      uVar4 = (uint)(uVar6 < uVar3);
      if (uVar3 < uVar6) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return 1;
}


// ===== 0096a3d0  <http::uri::authority::Authority_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::str::traits::FromStr>::from_str */

void __rustcall
<http::uri::authority::Authority_as_core::str::traits::FromStr>::from_str
          (undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long in_x14;
  uint uVar8;
  
  if (param_3 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 9;
    return;
  }
  uVar6 = 0;
  uVar8 = 0;
  uVar7 = 0;
  bVar2 = false;
  bVar3 = 0;
  lVar4 = 0;
  do {
    bVar1 = ""[*(byte *)(param_2 + lVar4)];
    if (bVar1 < 0x40) {
      lVar5 = lVar4;
      if (bVar1 < 0x2f) {
        if (bVar1 == 0) {
          if (*(byte *)(param_2 + lVar4) != 0x25) goto LAB_0096a530;
          bVar2 = true;
        }
        else if (bVar1 == 0x23) break;
      }
      else if (bVar1 == 0x3a) {
        if (7 < uVar6) goto LAB_0096a510;
        uVar6 = uVar6 + 1;
      }
      else if ((bVar1 == 0x2f) || (bVar1 == 0x3f)) break;
    }
    else if (bVar1 == 0x40) {
      bVar2 = false;
      uVar6 = 0;
      bVar3 = 1;
      in_x14 = lVar4;
    }
    else if (bVar1 == 0x5b) {
      if (bVar2 || uVar8 != 0) {
LAB_0096a510:
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = 0;
        return;
      }
      bVar2 = false;
      uVar8 = 1;
    }
    else if (bVar1 == 0x5d) {
      if (uVar7 != 0 || ((uVar8 ^ 0xffffffff) & 1) != 0) goto LAB_0096a510;
      bVar2 = false;
      uVar6 = 0;
      uVar7 = 1;
      uVar8 = 1;
    }
    lVar4 = lVar4 + 1;
    lVar5 = param_3;
  } while (param_3 != lVar4);
  if ((uVar7 == uVar8) && (uVar6 < 2)) {
    if (lVar5 == 0) {
      if (!bVar2) goto LAB_0096a524;
    }
    else if (!(bool)(bVar3 & in_x14 == lVar5 + -1) && !bVar2) {
LAB_0096a524:
      if (lVar5 == param_3) {
        <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice();
        return;
      }
LAB_0096a530:
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 2;
  *param_1 = 0;
  return;
}


// ===== 0096a53c  <http::uri::authority::Authority_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::authority::Authority as core::fmt::Debug>::fmt */

void __rustcall
<http::uri::authority::Authority_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0096a54c  FUN_0096a54c =====

void FUN_0096a54c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_00379579,10,&local_18,&DAT_00af2c28);
  return;
}


// ===== 0096a58c  FUN_0096a58c =====

void FUN_0096a58c(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 0096a5ac to 0096a5b3 has its CatchHandler @ 0096a5e4 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0096a604  FUN_0096a604 =====

void FUN_0096a604(long *param_1,long *param_2)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  byte bVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *in_x10;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *puVar12;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x11_02;
  long in_x12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 local_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  long lStack_70;
  ulong local_68;
  
  puVar17 = (undefined8 *)*param_2;
  lVar15 = param_2[1];
  uVar9 = param_2[3];
  if (lVar15 == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = 8;
    in_x12 = lVar15 * 0x21 + 0x29;
    in_x10 = puVar17 + lVar15 * -4 + -4;
  }
  uVar18 = NEON_cmge(*puVar17,0,1);
  lStack_70 = (long)puVar17 + lVar15 + 1;
  puVar6 = puVar17 + 1;
  uVar19 = 0;
  if (param_1[3] != 0) {
    uVar19 = uVar9 >> 1;
  }
  puVar10 = (undefined8 *)(uVar18 & 0x8080808080808080);
  local_88 = puVar17;
  local_68 = uVar9;
  puStack_78 = puVar6;
  local_80 = puVar10;
  puStack_90 = in_x10;
  puVar11 = puVar10;
  lStack_98 = in_x12;
  if ((ulong)param_1[2] < uVar9 - uVar19) {
                    /* try { // try from 0096a8ac to 0096a8bb has its CatchHandler @ 0096a8c0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_http[b87e90c26fe47eb4]::extensions::AnyClone+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_http[b87e90c26fe47eb4]::extensions::AnyClone_core[bcece726f298455b]::marker::Sync_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<http[b87e90c26fe47eb4]::extensions::IdHasher>>::_closure_0_>
              (param_1,uVar9 - uVar19,param_1 + 4,1);
    puVar11 = extraout_x11_02;
  }
joined_r0x0096a6b0:
  if (uVar9 != 0) {
    while (puVar10 == (undefined8 *)0x0) {
      puVar17 = puVar17 + -0x20;
      uVar19 = NEON_cmge(*puVar6,0,1);
      puVar6 = puVar6 + 1;
      puVar10 = (undefined8 *)(uVar19 & 0x8080808080808080);
    }
    uVar19 = ((ulong)puVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)puVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 - 1;
    puVar10 = (undefined8 *)((long)puVar10 - 1U & (ulong)puVar10);
    uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) & 0x78;
    lVar15 = *(long *)((long)puVar17 + uVar19 * -4 + -0x10);
    if (lVar15 != 0) {
      lVar1 = *(long *)((long)puVar17 + uVar19 * -4 + -0x20);
      uVar18 = *(ulong *)((long)puVar17 + uVar19 * -4 + -0x18);
      uVar16 = *(undefined8 *)((long)puVar17 + uVar19 * -4 + -8);
      if (param_1[2] == 0) {
                    /* try { // try from 0096a840 to 0096a853 has its CatchHandler @ 0096a8d4 */
        <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_http[b87e90c26fe47eb4]::extensions::AnyClone+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>)>>
        ::reserve_rehash::
        <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_http[b87e90c26fe47eb4]::extensions::AnyClone_core[bcece726f298455b]::marker::Sync_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<http[b87e90c26fe47eb4]::extensions::IdHasher>>::_closure_0_>
                  (param_1,1,param_1 + 4,1);
        puVar11 = extraout_x11_01;
      }
      puVar2 = (undefined8 *)*param_1;
      uVar3 = param_1[1];
      bVar4 = false;
      lVar13 = 0;
      bVar5 = (byte)(uVar18 >> 0x38);
      bVar7 = bVar5 >> 1;
      uVar19 = uVar18;
      do {
        uVar19 = uVar19 & uVar3;
        uVar21 = *(undefined8 *)((long)puVar2 + uVar19);
        uVar23 = NEON_cmeq(uVar21,CONCAT17(bVar7,CONCAT16(bVar7,CONCAT15(bVar7,CONCAT14(bVar7,
                                                  CONCAT13(bVar7,CONCAT12(bVar7,CONCAT11(bVar7,bVar7
                                                                                        ))))))),1);
        for (uVar23 = uVar23 & 0x8080808080808080; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
          uVar14 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar19 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar3;
          if (uVar18 == puVar2[uVar14 * -4 + -3] && lVar1 == puVar2[uVar14 * -4 + -4]) {
            __ptr = (void *)puVar2[uVar14 * -4 + -2];
            puVar12 = (undefined8 *)puVar2[uVar14 * -4 + -1];
            puVar2[uVar14 * -4 + -2] = lVar15;
            puVar2[uVar14 * -4 + -1] = uVar16;
            pcVar8 = (code *)*puVar12;
            if (pcVar8 != (code *)0x0) {
                    /* try { // try from 0096a768 to 0096a76f has its CatchHandler @ 0096a8f8 */
              (*pcVar8)(__ptr);
              puVar11 = extraout_x11;
            }
            if (puVar12[1] != 0) {
              free(__ptr);
              puVar11 = extraout_x11_00;
            }
            goto joined_r0x0096a6b0;
          }
        }
        if (bVar4) {
LAB_0096a72c:
          uVar21 = NEON_cmeq(uVar21,0xffffffffffffffff,1);
          bVar20 = NEON_umaxv(uVar21,1);
          if ((bVar20 & 1) != 0) goto LAB_0096a7f8;
          bVar4 = true;
        }
        else {
          uVar23 = NEON_cmlt(uVar21,0,1);
          if (uVar23 != 0) {
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            puVar11 = (undefined8 *)
                      (uVar19 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar3);
            goto LAB_0096a72c;
          }
          bVar4 = false;
          puVar11 = (undefined8 *)0x0;
        }
        lVar13 = lVar13 + 8;
        uVar19 = lVar13 + uVar19;
      } while( true );
    }
  }
  puStack_78 = puVar6;
  local_80 = puVar10;
  local_88 = puVar17;
  local_68 = uVar9;
  FUN_009687c8(&local_a0);
  return;
LAB_0096a7f8:
  uVar19 = (ulong)*(char *)((long)puVar2 + (long)puVar11);
  if (-1 < *(char *)((long)puVar2 + (long)puVar11)) {
    uVar19 = NEON_cmlt(*puVar2,0,1);
    uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
    uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    puVar11 = (undefined8 *)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
    uVar19 = (ulong)*(byte *)((long)puVar2 + (long)puVar11);
  }
  lVar22 = param_1[3];
  lVar13 = param_1[2];
  *(byte *)((long)puVar2 + (long)puVar11) = bVar5 >> 1;
  puVar12 = puVar2 + (long)puVar11 * -4;
  *(byte *)((long)puVar2 + ((ulong)(puVar11 + -1) & uVar3) + 8) = bVar5 >> 1;
  puVar12[-4] = lVar1;
  puVar12[-3] = uVar18;
  puVar12[-2] = lVar15;
  puVar12[-1] = uVar16;
  param_1[3] = lVar22 + 1;
  param_1[2] = lVar13 - (uVar19 & 1);
  puVar11 = puVar12;
  goto joined_r0x0096a6b0;
}


// ===== 0096a930  <http::header::value::http::header::value::HeaderValue>::from_shared =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::http::header::value::HeaderValue>::from_shared */

void __rustcall
<http::header::value::http::header::value::HeaderValue>::from_shared(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_2[2] != 0) {
    lVar2 = 0;
    do {
      bVar1 = *(byte *)(param_2[1] + lVar2);
      if (bVar1 < 0x20) {
        if (bVar1 != 9) {
LAB_0096a96c:
          lVar2 = *param_2;
          *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Could not recover jumptable at 0x0096a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x20))(param_2 + 3);
          return;
        }
      }
      else if (bVar1 == 0x7f) goto LAB_0096a96c;
      lVar2 = lVar2 + 1;
    } while (param_2[2] != lVar2);
  }
  lVar3 = param_2[1];
  lVar2 = *param_2;
  lVar5 = param_2[3];
  lVar4 = param_2[2];
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = lVar3;
  *param_1 = lVar2;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  return;
}


// ===== 0096a990  <http::header::value::HeaderValue_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::HeaderValue as core::fmt::Debug>::fmt */

ulong __rustcall
<http::header::value::HeaderValue_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte local_64 [4];
  byte *local_60;
  undefined *puStack_58;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00379586,9);
    return uVar5;
  }
  uVar7 = 1;
  uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00379583,1);
  puVar3 = PTR_fmt_00b00c20;
  if ((uVar5 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar5 = *(ulong *)(param_1 + 0x10);
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        local_64[0] = *(byte *)(lVar2 + uVar6);
        uVar1 = uVar6 + 1;
        if (local_64[0] - 0x20 < 0x5f) {
          if (local_64[0] == 0x22) {
LAB_0096aa8c:
            if (uVar6 != uVar7) {
              if ((uVar5 < uVar6) || (uVar6 < uVar7)) {
                    /* WARNING: Subroutine does not return */
                core::slice::index::slice_index_fail
                          (uVar7,uVar6,uVar5,&PTR_s__root__cargo_registry_src_index__00af2c60);
              }
              uVar7 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                                (param_2,lVar2 + uVar7,uVar6 - uVar7);
              if ((uVar7 & 1) != 0) goto LAB_0096aafc;
            }
            uVar7 = uVar1;
            if (local_64[0] == 0x22) {
              uVar6 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00379584,2);
              if ((uVar6 & 1) != 0) goto LAB_0096aafc;
            }
            else {
              puStack_58 = puVar3;
              local_60 = local_64;
              iVar4 = core::fmt::write(*param_2,param_2[1],&DAT_002b392c,&local_60);
              if (iVar4 != 0) goto LAB_0096aafc;
            }
          }
        }
        else if (local_64[0] != 9) goto LAB_0096aa8c;
        uVar6 = uVar1;
      } while (uVar5 != uVar1);
      if (uVar5 < uVar7) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar7,uVar5,uVar5,&PTR_s__root__cargo_registry_src_index__00af2c48);
      }
    }
    uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,lVar2 + uVar7,uVar5 - uVar7);
    if ((uVar5 & 1) == 0) {
      uVar7 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00379583,1);
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
LAB_0096aafc:
      uVar7 = 1;
    }
  }
  return uVar7;
}


// ===== 0096ab60  FUN_0096ab60 =====

void FUN_0096ab60(undefined8 *param_1)

{
  <http::header::value::HeaderValue_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0096ab68  <http::header::value::InvalidHeaderValue_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::InvalidHeaderValue as core::fmt::Debug>::fmt */

void __rustcall
<http::header::value::InvalidHeaderValue_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00379657,0x12);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 0096aba0  <http::header::value::HeaderValue_as_core::convert::From<u16>>::from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::HeaderValue as core::convert::From<u16>>::from */

void __rustcall
<http::header::value::HeaderValue_as_core::convert::From<u16>>::from
          (undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *pcStack_90;
  ulong *local_88;
  code *pcStack_80;
  long local_70;
  long lStack_68;
  long local_60;
  undefined *local_58;
  long lStack_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_b8 = FUN_004b25a4(5,1);
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,5);
  }
  uVar2 = param_2 >> 4 & 0xfff;
  local_a0 = 1;
  lStack_a8 = _UNK_0029f7c8;
  local_b0 = _DAT_0029f7c0;
  if (uVar2 < 0x271) {
    if ((param_2 & 0xffff) < 100) {
      lVar3 = 5;
      uVar2 = param_2;
      uVar1 = param_2 & 0xffff;
    }
    else {
      uVar2 = (param_2 >> 2 & 0x3fff) / 0x19;
      local_98._0_5_ =
           CONCAT23(*(undefined2 *)(&DAT_0037958f + ((ulong)(param_2 + uVar2 * -100) & 0xffff) * 2),
                    (undefined3)local_98);
      lVar3 = 3;
      uVar1 = uVar2;
    }
    if (9 < uVar1) {
      lVar4 = lVar3 + -2;
      *(undefined2 *)((long)&local_a0 + lVar3 + 6) =
           *(undefined2 *)(&DAT_0037958f + ((ulong)uVar2 & 0xffff) * 2);
      goto LAB_0096acc8;
    }
  }
  else {
    uVar2 = uVar2 / 0x271;
    param_2 = param_2 + uVar2 * -10000;
    uVar1 = (param_2 >> 2 & 0x3fff) / 0x19;
    local_98._0_3_ =
         CONCAT21(*(undefined2 *)(&DAT_0037958f + (ulong)uVar1 * 2),(undefined1)local_98);
    lVar3 = 1;
    local_98._0_5_ =
         CONCAT23(*(undefined2 *)(&DAT_0037958f + ((ulong)(param_2 + uVar1 * -100) & 0xffff) * 2),
                  (undefined3)local_98);
  }
  lVar4 = lVar3 + -1;
  *(byte *)((long)&local_a0 + lVar3 + 7) = (byte)uVar2 | 0x30;
LAB_0096acc8:
                    /* try { // try from 0096acd4 to 0096acdf has its CatchHandler @ 0096ada0 */
  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
            (&local_b8,(long)&local_98 + lVar4,5 - lVar4);
  puVar5 = PTR_SHARED_VTABLE_00b00e28;
  if ((local_a0 & 1) != 0) {
    uVar6 = local_a0 >> 5;
    local_60 = uVar6 + local_b0;
    local_70 = lStack_a8 + uVar6;
    lStack_68 = local_b8 - uVar6;
    <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_58,&local_70);
    if (local_48 < uVar6) {
      local_98 = &local_38;
      pcStack_90 = FUN_0096b9c8;
      local_88 = &local_18;
      local_18 = local_48;
      pcStack_80 = FUN_0096b9c8;
                    /* try { // try from 0096ad78 to 0096ad8f has its CatchHandler @ 0096adb4 */
      local_38 = uVar6;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_98,&PTR_s__root__cargo_registry_src_index__00af2c78);
    }
    local_b8 = lStack_50 + uVar6;
    local_b0 = local_48 - uVar6;
    local_a0 = local_40;
    puVar5 = local_58;
  }
  *param_1 = puVar5;
  param_1[1] = local_b8;
  param_1[2] = local_b0;
  param_1[3] = local_a0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 0096addc  <http::header::value::HeaderValue_as_core::convert::From<i16>>::from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::HeaderValue as core::convert::From<i16>>::from */

void __rustcall
<http::header::value::HeaderValue_as_core::convert::From<i16>>::from
          (undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *pcStack_90;
  ulong *local_88;
  code *pcStack_80;
  long local_70;
  long lStack_68;
  long local_60;
  undefined *local_58;
  long lStack_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_b8 = FUN_004b25a4(6,1);
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,6);
  }
  uVar3 = (uint)(short)param_2;
  local_a0 = 1;
  uVar2 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  lStack_a8 = _UNK_002a0368;
  local_b0 = _s__002a0360;
  if (uVar2 >> 4 < 0x271) {
    if ((uVar2 & 0xffff) < 100) {
      lVar5 = 6;
      uVar3 = uVar2;
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar3 = (uVar2 >> 2 & 0x3fff) / 0x19;
      lVar5 = 4;
      local_98._0_6_ =
           CONCAT24(*(undefined2 *)(&DAT_0037958f + ((ulong)(uVar2 + uVar3 * -100) & 0xffff) * 2),
                    (undefined4)local_98);
      uVar2 = uVar3;
    }
    if (9 < uVar2) {
      lVar4 = lVar5 + -2;
      *(undefined2 *)((long)&local_a0 + lVar5 + 6) =
           *(undefined2 *)(&DAT_0037958f + ((ulong)uVar3 & 0xffff) * 2);
      goto joined_r0x0096aeec;
    }
  }
  else {
    uVar3 = (uVar2 >> 4 & 0xfff) / 0x271;
    uVar2 = uVar2 + uVar3 * -10000;
    uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
    local_98._0_4_ =
         CONCAT22(*(undefined2 *)(&DAT_0037958f + (ulong)uVar1 * 2),(undefined2)local_98);
    lVar5 = 2;
    local_98._0_6_ =
         CONCAT24(*(undefined2 *)(&DAT_0037958f + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2),
                  (undefined4)local_98);
  }
  lVar4 = lVar5 + -1;
  *(byte *)((long)&local_a0 + lVar5 + 7) = (byte)uVar3 | 0x30;
joined_r0x0096aeec:
  lVar5 = lVar4;
  if ((param_2 >> 0xf & 1) != 0) {
    lVar5 = lVar4 + -1;
    *(undefined1 *)((long)&local_a0 + lVar4 + 7) = 0x2d;
  }
                    /* try { // try from 0096af38 to 0096af43 has its CatchHandler @ 0096b004 */
  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
            (&local_b8,(long)&local_98 + lVar5,6 - lVar5);
  puVar6 = PTR_SHARED_VTABLE_00b00e28;
  if ((local_a0 & 1) != 0) {
    uVar7 = local_a0 >> 5;
    local_60 = uVar7 + local_b0;
    local_70 = lStack_a8 + uVar7;
    lStack_68 = local_b8 - uVar7;
    <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_58,&local_70);
    if (local_48 < uVar7) {
      local_98 = &local_38;
      pcStack_90 = FUN_0096b9c8;
      local_88 = &local_18;
      local_18 = local_48;
      pcStack_80 = FUN_0096b9c8;
                    /* try { // try from 0096afdc to 0096aff3 has its CatchHandler @ 0096b018 */
      local_38 = uVar7;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_98,&PTR_s__root__cargo_registry_src_index__00af2c78);
    }
    local_b8 = lStack_50 + uVar7;
    local_b0 = local_48 - uVar7;
    local_a0 = local_40;
    puVar6 = local_58;
  }
  *param_1 = puVar6;
  param_1[1] = local_b8;
  param_1[2] = local_b0;
  param_1[3] = local_a0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 0096b040  <http::header::value::HeaderValue_as_core::convert::From<u32>>::from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::HeaderValue as core::convert::From<u32>>::from */

void __rustcall
<http::header::value::HeaderValue_as_core::convert::From<u32>>::from
          (undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code **ppcVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *pcStack_90;
  ulong *local_88;
  code *pcStack_80;
  long local_70;
  long lStack_68;
  long local_60;
  undefined *local_58;
  long lStack_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_b8 = FUN_004b25a4(10,1);
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,10);
  }
  local_a0 = 1;
  lStack_a8 = _UNK_0029f9a8;
  local_b0 = _DAT_0029f9a0;
  if (param_2 >> 4 < 0x271) {
    lVar3 = 10;
    if (param_2 < 100) goto LAB_0096b13c;
  }
  else {
    lVar3 = 10;
    ppcVar6 = &pcStack_90;
    uVar9 = (ulong)param_2;
    do {
      uVar8 = uVar9;
      lVar3 = lVar3 + -4;
      param_2 = (uint)(uVar8 / 10000);
      uVar7 = (uint)(uVar8 / 10000);
      uVar2 = (uint)uVar8 + uVar7 * -10000;
      uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)ppcVar6 + -2) = *(undefined2 *)(&DAT_0037958f + (ulong)uVar1 * 2);
      *(undefined2 *)ppcVar6 =
           *(undefined2 *)(&DAT_0037958f + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      ppcVar6 = (code **)((long)ppcVar6 + -4);
      uVar9 = uVar8 / 10000;
    } while (99999999 < (uint)uVar8);
    if (uVar7 < 99 || (int)(uVar8 / 10000) == 99) goto LAB_0096b13c;
  }
  uVar1 = (param_2 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&local_a0 + lVar3 + 6) =
       *(undefined2 *)(&DAT_0037958f + ((ulong)(param_2 + uVar1 * -100) & 0xffff) * 2);
  lVar3 = lVar3 + -2;
  param_2 = uVar1;
LAB_0096b13c:
  if (param_2 < 10) {
    lVar4 = lVar3 + -1;
    *(byte *)((long)&local_a0 + lVar3 + 7) = (byte)param_2 | 0x30;
  }
  else {
    lVar4 = lVar3 + -2;
    *(undefined2 *)((long)&local_a0 + lVar3 + 6) =
         *(undefined2 *)(&DAT_0037958f + (ulong)param_2 * 2);
  }
                    /* try { // try from 0096b184 to 0096b18f has its CatchHandler @ 0096b250 */
  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
            (&local_b8,(long)&local_98 + lVar4,10 - lVar4);
  puVar5 = PTR_SHARED_VTABLE_00b00e28;
  if ((local_a0 & 1) != 0) {
    uVar9 = local_a0 >> 5;
    local_60 = uVar9 + local_b0;
    local_70 = lStack_a8 + uVar9;
    lStack_68 = local_b8 - uVar9;
    <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_58,&local_70);
    if (local_48 < uVar9) {
      local_98 = &local_38;
      pcStack_90 = FUN_0096b9c8;
      local_88 = &local_18;
      local_18 = local_48;
      pcStack_80 = FUN_0096b9c8;
                    /* try { // try from 0096b228 to 0096b23f has its CatchHandler @ 0096b264 */
      local_38 = uVar9;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_98,&PTR_s__root__cargo_registry_src_index__00af2c78);
    }
    local_b8 = lStack_50 + uVar9;
    local_b0 = local_48 - uVar9;
    local_a0 = local_40;
    puVar5 = local_58;
  }
  *param_1 = puVar5;
  param_1[1] = local_b8;
  param_1[2] = local_b0;
  param_1[3] = local_a0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 0096b28c  <http::header::value::HeaderValue_as_core::convert::From<i32>>::from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::HeaderValue as core::convert::From<i32>>::from */

void __rustcall
<http::header::value::HeaderValue_as_core::convert::From<i32>>::from
          (undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined2 *puVar9;
  ulong uVar10;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  ulong *local_88;
  code *pcStack_80;
  long local_70;
  long lStack_68;
  long local_60;
  undefined *local_58;
  long lStack_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_b8 = FUN_004b25a4(0xb,1);
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0xb);
  }
  uVar3 = -param_2;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  local_a0 = 1;
  lStack_a8 = _UNK_0029f8a8;
  local_b0 = _DAT_0029f8a0;
  if (uVar3 >> 4 < 0x271) {
    lVar6 = 0xb;
    if (uVar3 < 100) goto LAB_0096b390;
  }
  else {
    lVar6 = 0xb;
    uVar10 = (ulong)uVar3;
    puVar9 = (undefined2 *)((long)&uStack_90 + 1);
    do {
      uVar5 = uVar10;
      lVar6 = lVar6 + -4;
      uVar3 = (uint)(uVar5 / 10000);
      uVar4 = (uint)(uVar5 / 10000);
      uVar2 = (uint)uVar5 + uVar4 * -10000;
      uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
      puVar9[-1] = *(undefined2 *)(&DAT_0037958f + (ulong)uVar1 * 2);
      *puVar9 = *(undefined2 *)(&DAT_0037958f + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      uVar10 = uVar5 / 10000;
      puVar9 = puVar9 + -2;
    } while (99999999 < (uint)uVar5);
    if (uVar4 < 99 || (int)(uVar5 / 10000) == 99) goto LAB_0096b390;
  }
  uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)(local_98 + lVar6 + -2) =
       *(undefined2 *)(&DAT_0037958f + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
  lVar6 = lVar6 + -2;
  uVar3 = uVar1;
LAB_0096b390:
  if (uVar3 < 10) {
    lVar7 = lVar6 + -1;
    local_98[lVar6 + -1] = (byte)uVar3 | 0x30;
  }
  else {
    lVar7 = lVar6 + -2;
    *(undefined2 *)(local_98 + lVar6 + -2) = *(undefined2 *)(&DAT_0037958f + (ulong)uVar3 * 2);
  }
  lVar6 = lVar7;
  if ((int)param_2 < 0) {
    lVar6 = lVar7 + -1;
    local_98[lVar7 + -1] = 0x2d;
  }
                    /* try { // try from 0096b3f0 to 0096b3fb has its CatchHandler @ 0096b4bc */
  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
            (&local_b8,local_98 + lVar6,0xb - lVar6);
  puVar8 = PTR_SHARED_VTABLE_00b00e28;
  if ((local_a0 & 1) != 0) {
    uVar10 = local_a0 >> 5;
    local_60 = uVar10 + local_b0;
    local_70 = lStack_a8 + uVar10;
    lStack_68 = local_b8 - uVar10;
    <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_58,&local_70);
    if (local_48 < uVar10) {
      local_98 = (undefined1  [8])&local_38;
      uStack_90 = FUN_0096b9c8;
      local_88 = &local_18;
      local_18 = local_48;
      pcStack_80 = FUN_0096b9c8;
                    /* try { // try from 0096b494 to 0096b4ab has its CatchHandler @ 0096b4d0 */
      local_38 = uVar10;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,local_98,&PTR_s__root__cargo_registry_src_index__00af2c78);
    }
    local_b8 = lStack_50 + uVar10;
    local_b0 = local_48 - uVar10;
    local_a0 = local_40;
    puVar8 = local_58;
  }
  *param_1 = puVar8;
  param_1[1] = local_b8;
  param_1[2] = local_b0;
  param_1[3] = local_a0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 0096b4f8  <http::header::value::HeaderValue_as_core::convert::From<usize>>::from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::HeaderValue as core::convert::From<usize>>::from */

void __rustcall
<http::header::value::HeaderValue_as_core::convert::From<usize>>::from
          (undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulong uVar8;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  ulong *local_98;
  code *pcStack_90;
  undefined8 local_88;
  code *pcStack_80;
  long local_70;
  long lStack_68;
  long local_60;
  undefined *local_58;
  long lStack_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_b8 = FUN_004b25a4(0x14,1);
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x14);
  }
  local_a0 = 1;
  lStack_a8 = _UNK_002a0fd8;
  local_b0 = _s__002a0fd0;
  if (param_2 >> 4 < 0x271) {
    lVar3 = 0x14;
    if (param_2 < 100) goto LAB_0096b600;
  }
  else {
    lVar3 = 0x14;
    puVar6 = (undefined2 *)((long)&local_88 + 2);
    uVar8 = param_2;
    do {
      lVar3 = lVar3 + -4;
      param_2 = uVar8 / 10000;
      uVar7 = (int)uVar8 + (int)param_2 * -10000;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      puVar6[-1] = *(undefined2 *)(&DAT_0037958f + (ulong)uVar2 * 2);
      *puVar6 = *(undefined2 *)(&DAT_0037958f + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar8;
      puVar6 = puVar6 + -2;
      uVar8 = param_2;
    } while (bVar1);
    if (param_2 < 100) goto LAB_0096b600;
  }
  uVar7 = (uint)param_2;
  uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
  param_2 = (ulong)uVar2;
  *(undefined2 *)((long)&local_a0 + lVar3 + 6) =
       *(undefined2 *)(&DAT_0037958f + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
  lVar3 = lVar3 + -2;
LAB_0096b600:
  if (param_2 < 10) {
    lVar4 = lVar3 + -1;
    *(byte *)((long)&local_a0 + lVar3 + 7) = (byte)param_2 | 0x30;
  }
  else {
    lVar4 = lVar3 + -2;
    *(undefined2 *)((long)&local_a0 + lVar3 + 6) = *(undefined2 *)(&DAT_0037958f + param_2 * 2);
  }
                    /* try { // try from 0096b648 to 0096b653 has its CatchHandler @ 0096b714 */
  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
            (&local_b8,(long)&local_98 + lVar4,0x14 - lVar4);
  puVar5 = PTR_SHARED_VTABLE_00b00e28;
  if ((local_a0 & 1) != 0) {
    uVar8 = local_a0 >> 5;
    local_60 = uVar8 + local_b0;
    local_70 = lStack_a8 + uVar8;
    lStack_68 = local_b8 - uVar8;
    <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_58,&local_70);
    if (local_48 < uVar8) {
      local_98 = &local_38;
      pcStack_90 = FUN_0096b9c8;
      local_88 = &local_18;
      local_18 = local_48;
      pcStack_80 = FUN_0096b9c8;
                    /* try { // try from 0096b6ec to 0096b703 has its CatchHandler @ 0096b728 */
      local_38 = uVar8;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_98,&PTR_s__root__cargo_registry_src_index__00af2c78);
    }
    local_b8 = lStack_50 + uVar8;
    local_b0 = local_48 - uVar8;
    local_a0 = local_40;
    puVar5 = local_58;
  }
  *param_1 = puVar5;
  param_1[1] = local_b8;
  param_1[2] = local_b0;
  param_1[3] = local_a0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 0096b750  <http::header::value::HeaderValue_as_core::convert::From<isize>>::from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::HeaderValue as core::convert::From<isize>>::from */

void __rustcall
<http::header::value::HeaderValue_as_core::convert::From<isize>>::from
          (undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  ulong *local_98;
  code *pcStack_90;
  undefined8 local_88;
  code *pcStack_80;
  long local_70;
  long lStack_68;
  long local_60;
  undefined *local_58;
  long lStack_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_b8 = FUN_004b25a4(0x14,1);
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x14);
  }
  uVar4 = -param_2;
  if (-1 < (long)param_2) {
    uVar4 = param_2;
  }
  local_a0 = 1;
  lStack_a8 = _UNK_002a0fd8;
  local_b0 = _s__002a0fd0;
  if (uVar4 >> 4 < 0x271) {
    lVar5 = 0x14;
  }
  else {
    lVar5 = 0x14;
    puVar8 = (undefined2 *)((long)&local_88 + 2);
    uVar9 = uVar4;
    do {
      lVar5 = lVar5 + -4;
      uVar4 = uVar9 / 10000;
      uVar3 = (int)uVar9 + (int)uVar4 * -10000;
      uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
      puVar8[-1] = *(undefined2 *)(&DAT_0037958f + (ulong)uVar2 * 2);
      *puVar8 = *(undefined2 *)(&DAT_0037958f + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar9;
      puVar8 = puVar8 + -2;
      uVar9 = uVar4;
    } while (bVar1);
  }
  lVar6 = lVar5;
  if (99 < uVar4) {
    uVar3 = (uint)uVar4;
    lVar6 = lVar5 + -2;
    uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
    uVar4 = (ulong)uVar2;
    *(undefined2 *)((long)&local_a0 + lVar5 + 6) =
         *(undefined2 *)(&DAT_0037958f + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
  }
  if (uVar4 < 10) {
    lVar5 = lVar6 + -1;
    *(byte *)((long)&local_a0 + lVar6 + 7) = (byte)uVar4 | 0x30;
  }
  else {
    lVar5 = lVar6 + -2;
    *(undefined2 *)((long)&local_a0 + lVar6 + 6) = *(undefined2 *)(&DAT_0037958f + uVar4 * 2);
  }
  lVar6 = lVar5;
  if ((long)param_2 < 0) {
    lVar6 = lVar5 + -1;
    *(undefined1 *)((long)&local_a0 + lVar5 + 7) = 0x2d;
  }
                    /* try { // try from 0096b8c0 to 0096b8cb has its CatchHandler @ 0096b98c */
  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
            (&local_b8,(long)&local_98 + lVar6,0x14 - lVar6);
  puVar7 = PTR_SHARED_VTABLE_00b00e28;
  if ((local_a0 & 1) != 0) {
    uVar4 = local_a0 >> 5;
    local_60 = uVar4 + local_b0;
    local_70 = lStack_a8 + uVar4;
    lStack_68 = local_b8 - uVar4;
    <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_58,&local_70);
    if (local_48 < uVar4) {
      local_98 = &local_38;
      pcStack_90 = FUN_0096b9c8;
      local_88 = &local_18;
      local_18 = local_48;
      pcStack_80 = FUN_0096b9c8;
                    /* try { // try from 0096b964 to 0096b97b has its CatchHandler @ 0096b9a0 */
      local_38 = uVar4;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_98,&PTR_s__root__cargo_registry_src_index__00af2c78);
    }
    local_b8 = lStack_50 + uVar4;
    local_b0 = local_48 - uVar4;
    local_a0 = local_40;
    puVar7 = local_58;
  }
  *param_1 = puVar7;
  param_1[1] = local_b8;
  param_1[2] = local_b0;
  param_1[3] = local_a0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 0096b9c8  FUN_0096b9c8 =====

void FUN_0096b9c8(undefined8 param_1,long param_2)

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


// ===== 0096b9e0  <http::header::value::InvalidHeaderValue_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::InvalidHeaderValue as core::fmt::Display>::fmt */

void __rustcall
<http::header::value::InvalidHeaderValue_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00379669,0x1c);
  return;
}


// ===== 0096b9f4  <http::header::value::ToStrError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::value::ToStrError as core::fmt::Display>::fmt */

void __rustcall
<http::header::value::ToStrError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00379685,0x21);
  return;
}


// ===== 0096ba08  FUN_0096ba08 =====

undefined8 FUN_0096ba08(void)

{
  return 0;
}


// ===== 0096ba10  <http::header::name::[P]::http::header::name::StandardHeader>::from_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::[P]::http::header::name::StandardHeader>::from_bytes */

undefined8 __rustcall
<http::header::name::[P]::http::header::name::StandardHeader>::from_bytes
          (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  
  switch(param_2) {
  case 2:
    if ((*param_1 == 0x74) && (param_1[1] == 0x65)) {
      return 0x43;
    }
    break;
  case 3:
    bVar1 = *param_1;
    if (bVar1 == 0x76) {
      if ((param_1[1] == 0x69) && (param_1[2] == 0x61)) {
        return 0x4a;
      }
    }
    else if (bVar1 == 100) {
      if ((param_1[1] == 0x6e) && (param_1[2] == 0x74)) {
        return 0x1f;
      }
    }
    else if (((bVar1 == 0x61) && (param_1[1] == 0x67)) && (param_1[2] == 0x65)) {
      return 0xd;
    }
    break;
  case 4:
    bVar1 = *param_1;
    if (bVar1 < 0x68) {
      if (bVar1 == 100) {
        if (((param_1[1] == 0x61) && (param_1[2] == 0x74)) && (param_1[3] == 0x65)) {
          return 0x20;
        }
      }
      else if (bVar1 == 0x65) {
        if (((param_1[1] == 0x74) && (param_1[2] == 0x61)) && (param_1[3] == 0x67)) {
          return 0x21;
        }
      }
      else if (((bVar1 == 0x66) && (param_1[1] == 0x72)) &&
              ((param_1[2] == 0x6f && (param_1[3] == 0x6d)))) {
        return 0x25;
      }
    }
    else if (bVar1 == 0x68) {
      if (((param_1[1] == 0x6f) && (param_1[2] == 0x73)) && (param_1[3] == 0x74)) {
        return 0x26;
      }
    }
    else if (bVar1 == 0x6c) {
      if (((param_1[1] == 0x69) && (param_1[2] == 0x6e)) && (param_1[3] == 0x6b)) {
        return 0x2d;
      }
    }
    else if (((bVar1 == 0x76) && (param_1[1] == 0x61)) &&
            ((param_1[2] == 0x72 && (param_1[3] == 0x79)))) {
      return 0x49;
    }
    break;
  case 5:
    if (*param_1 == 0x72) {
      if (((param_1[1] == 0x61) && (param_1[2] == 0x6e)) &&
         ((param_1[3] == 0x67 && (param_1[4] == 0x65)))) {
        return 0x36;
      }
    }
    else if (((*param_1 == 0x61) && (param_1[1] == 0x6c)) &&
            ((param_1[2] == 0x6c && ((param_1[3] == 0x6f && (param_1[4] == 0x77)))))) {
      return 0xe;
    }
    break;
  case 6:
    bVar1 = *param_1;
    if (bVar1 < 0x6f) {
      if (bVar1 == 0x61) {
        if (((param_1[1] == 99) && (param_1[2] == 99)) &&
           ((param_1[3] == 0x65 && ((param_1[4] == 0x70 && (param_1[5] == 0x74)))))) {
          return 0;
        }
      }
      else if (bVar1 == 99) {
        if ((((param_1[1] == 0x6f) && (param_1[2] == 0x6f)) && (param_1[3] == 0x6b)) &&
           ((param_1[4] == 0x69 && (param_1[5] == 0x65)))) {
          return 0x1e;
        }
      }
      else if (((bVar1 == 0x65) && (param_1[1] == 0x78)) &&
              ((param_1[2] == 0x70 &&
               (((param_1[3] == 0x65 && (param_1[4] == 99)) && (param_1[5] == 0x74)))))) {
        return 0x22;
      }
    }
    else if (bVar1 == 0x6f) {
      if (((param_1[1] == 0x72) && (param_1[2] == 0x69)) &&
         ((param_1[3] == 0x67 && ((param_1[4] == 0x69 && (param_1[5] == 0x6e)))))) {
        return 0x30;
      }
    }
    else if (bVar1 == 0x70) {
      if ((((param_1[1] == 0x72) && (param_1[2] == 0x61)) && (param_1[3] == 0x67)) &&
         ((param_1[4] == 0x6d && (param_1[5] == 0x61)))) {
        return 0x31;
      }
    }
    else if (((bVar1 == 0x73) && (param_1[1] == 0x65)) &&
            ((param_1[2] == 0x72 &&
             (((param_1[3] == 0x76 && (param_1[4] == 0x65)) && (param_1[5] == 0x72)))))) {
      return 0x40;
    }
    break;
  case 7:
    bVar1 = *param_1;
    if (bVar1 < 0x74) {
      if (bVar1 == 0x61) {
        if (((((param_1[1] == 0x6c) && (param_1[2] == 0x74)) && (param_1[3] == 0x2d)) &&
            ((param_1[4] == 0x73 && (param_1[5] == 0x76)))) && (param_1[6] == 99)) {
          return 0xf;
        }
      }
      else if (bVar1 == 0x65) {
        if (((param_1[1] == 0x78) && (param_1[2] == 0x70)) &&
           ((param_1[3] == 0x69 &&
            (((param_1[4] == 0x72 && (param_1[5] == 0x65)) && (param_1[6] == 0x73)))))) {
          return 0x23;
        }
      }
      else if (((bVar1 == 0x72) && (param_1[1] == 0x65)) && (param_1[2] == 0x66)) {
        if (param_1[3] == 0x72) {
          if (((param_1[4] == 0x65) && (param_1[5] == 0x73)) && (param_1[6] == 0x68)) {
            return 0x39;
          }
        }
        else if ((((param_1[3] == 0x65) && (param_1[4] == 0x72)) && (param_1[5] == 0x65)) &&
                (param_1[6] == 0x72)) {
          return 0x37;
        }
      }
    }
    else if (bVar1 == 0x74) {
      if (((((param_1[1] == 0x72) && (param_1[2] == 0x61)) && (param_1[3] == 0x69)) &&
          ((param_1[4] == 0x6c && (param_1[5] == 0x65)))) && (param_1[6] == 0x72)) {
        return 0x44;
      }
    }
    else if (bVar1 == 0x75) {
      if (((param_1[1] == 0x70) && (param_1[2] == 0x67)) &&
         ((param_1[3] == 0x72 &&
          (((param_1[4] == 0x61 && (param_1[5] == 100)) && (param_1[6] == 0x65)))))) {
        return 0x47;
      }
    }
    else if (((((bVar1 == 0x77) && (param_1[1] == 0x61)) &&
              ((param_1[2] == 0x72 && ((param_1[3] == 0x6e && (param_1[4] == 0x69)))))) &&
             (param_1[5] == 0x6e)) && (param_1[6] == 0x67)) {
      return 0x4b;
    }
    break;
  case 8:
    if (*param_1 == 0x6c) {
      if ((((param_1[1] == 0x6f) && (param_1[2] == 99)) && (param_1[3] == 0x61)) &&
         (((param_1[4] == 0x74 && (param_1[5] == 0x69)) &&
          ((param_1[6] == 0x6f && (param_1[7] == 0x6e)))))) {
        return 0x2e;
      }
    }
    else if (((*param_1 == 0x69) && (param_1[1] == 0x66)) && (param_1[2] == 0x2d)) {
      if (param_1[3] == 0x72) {
        if ((((param_1[4] == 0x61) && (param_1[5] == 0x6e)) && (param_1[6] == 0x67)) &&
           (param_1[7] == 0x65)) {
          return 0x2a;
        }
      }
      else if (((param_1[3] == 0x6d) && (param_1[4] == 0x61)) &&
              ((param_1[5] == 0x74 && ((param_1[6] == 99 && (param_1[7] == 0x68)))))) {
        return 0x27;
      }
    }
    break;
  case 9:
    if ((((((*param_1 == 0x66) && (param_1[1] == 0x6f)) && (param_1[2] == 0x72)) &&
         ((param_1[3] == 0x77 && (param_1[4] == 0x61)))) &&
        ((param_1[5] == 0x72 && ((param_1[6] == 100 && (param_1[7] == 0x65)))))) &&
       (param_1[8] == 100)) {
      return 0x24;
    }
    break;
  case 10:
    bVar1 = *param_1;
    if (bVar1 == 0x75) {
      if ((((((param_1[1] == 0x73) && (param_1[2] == 0x65)) && (param_1[3] == 0x72)) &&
           ((param_1[4] == 0x2d && (param_1[5] == 0x61)))) &&
          ((param_1[6] == 0x67 && ((param_1[7] == 0x65 && (param_1[8] == 0x6e)))))) &&
         (param_1[9] == 0x74)) {
        return 0x46;
      }
    }
    else if (bVar1 == 0x73) {
      if (((((param_1[1] == 0x65) && (param_1[2] == 0x74)) && (param_1[3] == 0x2d)) &&
          (((param_1[4] == 99 && (param_1[5] == 0x6f)) &&
           ((param_1[6] == 0x6f && ((param_1[7] == 0x6b && (param_1[8] == 0x69)))))))) &&
         (param_1[9] == 0x65)) {
        return 0x41;
      }
    }
    else if (((((bVar1 == 99) && (param_1[1] == 0x6f)) && (param_1[2] == 0x6e)) &&
             (((param_1[3] == 0x6e && (param_1[4] == 0x65)) &&
              (((param_1[5] == 99 && ((param_1[6] == 0x74 && (param_1[7] == 0x69)))) &&
               (param_1[8] == 0x6f)))))) && (param_1[9] == 0x6e)) {
      return 0x14;
    }
    break;
  case 0xb:
    if (((((*param_1 == 0x72) && (param_1[1] == 0x65)) && (param_1[2] == 0x74)) &&
        (((param_1[3] == 0x72 && (param_1[4] == 0x79)) &&
         ((param_1[5] == 0x2d && ((param_1[6] == 0x61 && (param_1[7] == 0x66)))))))) &&
       ((param_1[8] == 0x74 && ((param_1[9] == 0x65 && (param_1[10] == 0x72)))))) {
      return 0x3a;
    }
    break;
  case 0xc:
    if (*param_1 == 0x6d) {
      if ((((((param_1[1] == 0x61) && (param_1[2] == 0x78)) && (param_1[3] == 0x2d)) &&
           ((param_1[4] == 0x66 && (param_1[5] == 0x6f)))) &&
          ((param_1[6] == 0x72 && ((param_1[7] == 0x77 && (param_1[8] == 0x61)))))) &&
         ((param_1[9] == 0x72 && ((param_1[10] == 100 && (param_1[0xb] == 0x73)))))) {
        return 0x2f;
      }
    }
    else if (*param_1 == 99) {
      if (param_1[1] == 0x61) {
        if (((((((param_1[2] == 99) && (param_1[3] == 0x68)) && (param_1[4] == 0x65)) &&
              ((param_1[5] == 0x2d && (param_1[6] == 0x73)))) && (param_1[7] == 0x74)) &&
            ((param_1[8] == 0x61 && (param_1[9] == 0x74)))) &&
           ((param_1[10] == 0x75 && (param_1[0xb] == 0x73)))) {
          return 0x12;
        }
      }
      else if ((((param_1[1] == 0x6f) && (param_1[2] == 0x6e)) && (param_1[3] == 0x74)) &&
              ((((param_1[4] == 0x65 && (param_1[5] == 0x6e)) &&
                ((param_1[6] == 0x74 && ((param_1[7] == 0x2d && (param_1[8] == 0x74)))))) &&
               ((param_1[9] == 0x79 && ((param_1[10] == 0x70 && (param_1[0xb] == 0x65)))))))) {
        return 0x1d;
      }
    }
    break;
  case 0xd:
    bVar1 = *param_1;
    if (bVar1 < 0x69) {
      if (bVar1 == 0x61) {
        if (param_1[1] == 99) {
          if (((param_1[2] == 99) && (param_1[3] == 0x65)) &&
             ((((param_1[4] == 0x70 &&
                (((param_1[5] == 0x74 && (param_1[6] == 0x2d)) && (param_1[7] == 0x72)))) &&
               (((param_1[8] == 0x61 && (param_1[9] == 0x6e)) && (param_1[10] == 0x67)))) &&
              ((param_1[0xb] == 0x65 && (param_1[0xc] == 0x73)))))) {
            return 4;
          }
        }
        else if (((((param_1[1] == 0x75) && (param_1[2] == 0x74)) && (param_1[3] == 0x68)) &&
                 (((param_1[4] == 0x6f && (param_1[5] == 0x72)) &&
                  ((param_1[6] == 0x69 && ((param_1[7] == 0x7a && (param_1[8] == 0x61)))))))) &&
                ((param_1[9] == 0x74 &&
                 (((param_1[10] == 0x69 && (param_1[0xb] == 0x6f)) && (param_1[0xc] == 0x6e)))))) {
          return 0x10;
        }
      }
      else if (bVar1 == 99) {
        if (param_1[1] == 0x61) {
          if (((((param_1[2] == 99) && (param_1[3] == 0x68)) &&
               ((param_1[4] == 0x65 && ((param_1[5] == 0x2d && (param_1[6] == 99)))))) &&
              (param_1[7] == 0x6f)) &&
             ((((param_1[8] == 0x6e && (param_1[9] == 0x74)) && (param_1[10] == 0x72)) &&
              ((param_1[0xb] == 0x6f && (param_1[0xc] == 0x6c)))))) {
            return 0x11;
          }
        }
        else if (((param_1[1] == 0x6f) && (param_1[2] == 0x6e)) &&
                ((((param_1[3] == 0x74 &&
                   (((param_1[4] == 0x65 && (param_1[5] == 0x6e)) && (param_1[6] == 0x74)))) &&
                  (((param_1[7] == 0x2d && (param_1[8] == 0x72)) && (param_1[9] == 0x61)))) &&
                 (((param_1[10] == 0x6e && (param_1[0xb] == 0x67)) && (param_1[0xc] == 0x65)))))) {
          return 0x1a;
        }
      }
    }
    else if (bVar1 == 0x69) {
      if (((((param_1[1] == 0x66) && (param_1[2] == 0x2d)) && (param_1[3] == 0x6e)) &&
          ((param_1[4] == 0x6f && (param_1[5] == 0x6e)))) &&
         (((param_1[6] == 0x65 && ((param_1[7] == 0x2d && (param_1[8] == 0x6d)))) &&
          ((param_1[9] == 0x61 &&
           (((param_1[10] == 0x74 && (param_1[0xb] == 99)) && (param_1[0xc] == 0x68)))))))) {
        return 0x29;
      }
    }
    else if ((((bVar1 == 0x6c) && (param_1[1] == 0x61)) &&
             ((param_1[2] == 0x73 && ((param_1[3] == 0x74 && (param_1[4] == 0x2d)))))) &&
            (((param_1[5] == 0x6d &&
              ((((param_1[6] == 0x6f && (param_1[7] == 100)) && (param_1[8] == 0x69)) &&
               ((param_1[9] == 0x66 && (param_1[10] == 0x69)))))) &&
             ((param_1[0xb] == 0x65 && (param_1[0xc] == 100)))))) {
      return 0x2c;
    }
    break;
  case 0xe:
    if (*param_1 == 99) {
      if ((((param_1[1] == 0x6f) && (param_1[2] == 0x6e)) &&
          ((param_1[3] == 0x74 && ((param_1[4] == 0x65 && (param_1[5] == 0x6e)))))) &&
         ((param_1[6] == 0x74 &&
          ((((((param_1[7] == 0x2d && (param_1[8] == 0x6c)) && (param_1[9] == 0x65)) &&
             ((param_1[10] == 0x6e && (param_1[0xb] == 0x67)))) && (param_1[0xc] == 0x74)) &&
           (param_1[0xd] == 0x68)))))) {
        return 0x18;
      }
    }
    else if ((((((*param_1 == 0x61) && (param_1[1] == 99)) &&
               ((param_1[2] == 99 &&
                (((param_1[3] == 0x65 && (param_1[4] == 0x70)) && (param_1[5] == 0x74)))))) &&
              ((param_1[6] == 0x2d && (param_1[7] == 99)))) && (param_1[8] == 0x68)) &&
            (((param_1[9] == 0x61 && (param_1[10] == 0x72)) &&
             ((param_1[0xb] == 0x73 && ((param_1[0xc] == 0x65 && (param_1[0xd] == 0x74)))))))) {
      return 1;
    }
    break;
  case 0xf:
    bVar1 = *param_1;
    if (bVar1 < 0x72) {
      if (bVar1 == 0x61) {
        if (((param_1[1] == 99) && (param_1[2] == 99)) &&
           (((param_1[3] == 0x65 && ((param_1[4] == 0x70 && (param_1[5] == 0x74)))) &&
            (param_1[6] == 0x2d)))) {
          if (param_1[7] == 0x6c) {
            if (((((param_1[8] == 0x61) && (param_1[9] == 0x6e)) && (param_1[10] == 0x67)) &&
                ((param_1[0xb] == 0x75 && (param_1[0xc] == 0x61)))) &&
               ((param_1[0xd] == 0x67 && (param_1[0xe] == 0x65)))) {
              return 3;
            }
          }
          else if ((((param_1[7] == 0x65) && (param_1[8] == 0x6e)) &&
                   ((param_1[9] == 99 &&
                    (((param_1[10] == 0x6f && (param_1[0xb] == 100)) && (param_1[0xc] == 0x69))))))
                  && ((param_1[0xd] == 0x6e && (param_1[0xe] == 0x67)))) {
            return 2;
          }
        }
      }
      else if (((((bVar1 == 0x70) && (param_1[1] == 0x75)) &&
                ((param_1[2] == 0x62 &&
                 (((param_1[3] == 0x6c && (param_1[4] == 0x69)) && (param_1[5] == 99)))))) &&
               ((param_1[6] == 0x2d && (param_1[7] == 0x6b)))) &&
              ((param_1[8] == 0x65 &&
               (((param_1[9] == 0x79 && (param_1[10] == 0x2d)) &&
                ((param_1[0xb] == 0x70 &&
                 (((param_1[0xc] == 0x69 && (param_1[0xd] == 0x6e)) && (param_1[0xe] == 0x73))))))))
              )) {
        return 0x34;
      }
    }
    else if (bVar1 == 0x72) {
      if (((((param_1[1] == 0x65) && (param_1[2] == 0x66)) && (param_1[3] == 0x65)) &&
          (((param_1[4] == 0x72 && (param_1[5] == 0x72)) &&
           ((param_1[6] == 0x65 && ((param_1[7] == 0x72 && (param_1[8] == 0x2d)))))))) &&
         ((param_1[9] == 0x70 &&
          ((((param_1[10] == 0x6f && (param_1[0xb] == 0x6c)) && (param_1[0xc] == 0x69)) &&
           ((param_1[0xd] == 99 && (param_1[0xe] == 0x79)))))))) {
        return 0x38;
      }
    }
    else if (((((bVar1 == 0x78) && (param_1[1] == 0x2d)) &&
              ((param_1[2] == 0x66 &&
               (((param_1[3] == 0x72 && (param_1[4] == 0x61)) && (param_1[5] == 0x6d)))))) &&
             ((((param_1[6] == 0x65 && (param_1[7] == 0x2d)) && (param_1[8] == 0x6f)) &&
              ((param_1[9] == 0x70 && (param_1[10] == 0x74)))))) &&
            ((param_1[0xb] == 0x69 &&
             (((param_1[0xc] == 0x6f && (param_1[0xd] == 0x6e)) && (param_1[0xe] == 0x73)))))) {
      return 0x4f;
    }
    break;
  case 0x10:
    bVar1 = *param_1;
    if (bVar1 == 0x78) {
      if (((((param_1[1] == 0x2d) && (param_1[2] == 0x78)) && (param_1[3] == 0x73)) &&
          ((param_1[4] == 0x73 && (param_1[5] == 0x2d)))) &&
         ((((param_1[6] == 0x70 && ((param_1[7] == 0x72 && (param_1[8] == 0x6f)))) &&
           (param_1[9] == 0x74)) &&
          ((((param_1[10] == 0x65 && (param_1[0xb] == 99)) && (param_1[0xc] == 0x74)) &&
           (((param_1[0xd] == 0x69 && (param_1[0xe] == 0x6f)) && (param_1[0xf] == 0x6e)))))))) {
        return 0x50;
      }
    }
    else if (bVar1 == 0x77) {
      if (((((param_1[1] == 0x77) && (param_1[2] == 0x77)) &&
           ((param_1[3] == 0x2d &&
            (((param_1[4] == 0x61 && (param_1[5] == 0x75)) && (param_1[6] == 0x74)))))) &&
          ((param_1[7] == 0x68 && (param_1[8] == 0x65)))) &&
         ((param_1[9] == 0x6e &&
          (((param_1[10] == 0x74 && (param_1[0xb] == 0x69)) &&
           ((param_1[0xc] == 99 &&
            (((param_1[0xd] == 0x61 && (param_1[0xe] == 0x74)) && (param_1[0xf] == 0x65)))))))))) {
        return 0x4c;
      }
    }
    else if ((((bVar1 == 99) && (param_1[1] == 0x6f)) &&
             ((param_1[2] == 0x6e && ((param_1[3] == 0x74 && (param_1[4] == 0x65)))))) &&
            ((param_1[5] == 0x6e && ((param_1[6] == 0x74 && (param_1[7] == 0x2d)))))) {
      if (param_1[8] == 0x6c) {
        if (param_1[9] == 0x61) {
          if (((((param_1[10] == 0x6e) && (param_1[0xb] == 0x67)) && (param_1[0xc] == 0x75)) &&
              ((param_1[0xd] == 0x61 && (param_1[0xe] == 0x67)))) && (param_1[0xf] == 0x65)) {
            return 0x17;
          }
        }
        else if ((((param_1[9] == 0x6f) && (param_1[10] == 99)) &&
                 ((param_1[0xb] == 0x61 &&
                  (((param_1[0xc] == 0x74 && (param_1[0xd] == 0x69)) && (param_1[0xe] == 0x6f))))))
                && (param_1[0xf] == 0x6e)) {
          return 0x19;
        }
      }
      else if (((param_1[8] == 0x65) && (param_1[9] == 0x6e)) &&
              ((((param_1[10] == 99 && ((param_1[0xb] == 0x6f && (param_1[0xc] == 100)))) &&
                (param_1[0xd] == 0x69)) && ((param_1[0xe] == 0x6e && (param_1[0xf] == 0x67)))))) {
        return 0x16;
      }
    }
    break;
  case 0x11:
    bVar1 = *param_1;
    if (bVar1 < 0x73) {
      if (bVar1 == 99) {
        if (((((param_1[1] == 100) && (param_1[2] == 0x6e)) &&
             ((param_1[3] == 0x2d &&
              ((((param_1[4] == 99 && (param_1[5] == 0x61)) && (param_1[6] == 99)) &&
               ((param_1[7] == 0x68 && (param_1[8] == 0x65)))))))) &&
            (((param_1[9] == 0x2d && ((param_1[10] == 99 && (param_1[0xb] == 0x6f)))) &&
             ((param_1[0xc] == 0x6e &&
              (((param_1[0xd] == 0x74 && (param_1[0xe] == 0x72)) && (param_1[0xf] == 0x6f)))))))) &&
           (param_1[0x10] == 0x6c)) {
          return 0x13;
        }
      }
      else if ((((((bVar1 == 0x69) && (param_1[1] == 0x66)) &&
                 ((param_1[2] == 0x2d && ((param_1[3] == 0x6d && (param_1[4] == 0x6f)))))) &&
                ((param_1[5] == 100 &&
                 (((param_1[6] == 0x69 && (param_1[7] == 0x66)) && (param_1[8] == 0x69)))))) &&
               (((param_1[9] == 0x65 && (param_1[10] == 100)) &&
                ((param_1[0xb] == 0x2d && ((param_1[0xc] == 0x73 && (param_1[0xd] == 0x69)))))))) &&
              ((param_1[0xe] == 0x6e && ((param_1[0xf] == 99 && (param_1[0x10] == 0x65)))))) {
        return 0x28;
      }
    }
    else if (bVar1 == 0x73) {
      if ((((((param_1[1] == 0x65) && (param_1[2] == 99)) && (param_1[3] == 0x2d)) &&
           (((param_1[4] == 0x77 && (param_1[5] == 0x65)) &&
            ((param_1[6] == 0x62 && ((param_1[7] == 0x73 && (param_1[8] == 0x6f)))))))) &&
          (param_1[9] == 99)) &&
         ((((((param_1[10] == 0x6b && (param_1[0xb] == 0x65)) && (param_1[0xc] == 0x74)) &&
            ((param_1[0xd] == 0x2d && (param_1[0xe] == 0x6b)))) && (param_1[0xf] == 0x65)) &&
          (param_1[0x10] == 0x79)))) {
        return 0x3d;
      }
    }
    else if (((((bVar1 == 0x74) && (param_1[1] == 0x72)) &&
              ((param_1[2] == 0x61 &&
               (((param_1[3] == 0x6e && (param_1[4] == 0x73)) && (param_1[5] == 0x66)))))) &&
             ((((param_1[6] == 0x65 && (param_1[7] == 0x72)) && (param_1[8] == 0x2d)) &&
              ((param_1[9] == 0x65 && (param_1[10] == 0x6e)))))) &&
            (((param_1[0xb] == 99 &&
              (((param_1[0xc] == 0x6f && (param_1[0xd] == 100)) && (param_1[0xe] == 0x69)))) &&
             ((param_1[0xf] == 0x6e && (param_1[0x10] == 0x67)))))) {
      return 0x45;
    }
    break;
  case 0x12:
    if (((((((*param_1 == 0x70) && (param_1[1] == 0x72)) && (param_1[2] == 0x6f)) &&
          ((param_1[3] == 0x78 && (param_1[4] == 0x79)))) &&
         ((param_1[5] == 0x2d && ((param_1[6] == 0x61 && (param_1[7] == 0x75)))))) &&
        ((param_1[8] == 0x74 &&
         (((param_1[9] == 0x68 && (param_1[10] == 0x65)) && (param_1[0xb] == 0x6e)))))) &&
       (((param_1[0xc] == 0x74 && (param_1[0xd] == 0x69)) &&
        (((param_1[0xe] == 99 && ((param_1[0xf] == 0x61 && (param_1[0x10] == 0x74)))) &&
         (param_1[0x11] == 0x65)))))) {
      return 0x32;
    }
    break;
  case 0x13:
    bVar1 = *param_1;
    if (bVar1 == 0x70) {
      if (((((((param_1[1] == 0x72) && (param_1[2] == 0x6f)) && (param_1[3] == 0x78)) &&
            ((param_1[4] == 0x79 && (param_1[5] == 0x2d)))) && (param_1[6] == 0x61)) &&
          (((param_1[7] == 0x75 && (param_1[8] == 0x74)) &&
           ((param_1[9] == 0x68 &&
            (((param_1[10] == 0x6f && (param_1[0xb] == 0x72)) && (param_1[0xc] == 0x69)))))))) &&
         (((param_1[0xd] == 0x7a && (param_1[0xe] == 0x61)) &&
          ((param_1[0xf] == 0x74 &&
           (((param_1[0x10] == 0x69 && (param_1[0x11] == 0x6f)) && (param_1[0x12] == 0x6e)))))))) {
        return 0x33;
      }
    }
    else if (bVar1 == 0x69) {
      if ((((param_1[1] == 0x66) && (param_1[2] == 0x2d)) && (param_1[3] == 0x75)) &&
         (((((param_1[4] == 0x6e && (param_1[5] == 0x6d)) &&
            (((param_1[6] == 0x6f && ((param_1[7] == 100 && (param_1[8] == 0x69)))) &&
             ((param_1[9] == 0x66 &&
              ((((param_1[10] == 0x69 && (param_1[0xb] == 0x65)) && (param_1[0xc] == 100)) &&
               ((param_1[0xd] == 0x2d && (param_1[0xe] == 0x73)))))))))) &&
           ((param_1[0xf] == 0x69 && ((param_1[0x10] == 0x6e && (param_1[0x11] == 99)))))) &&
          (param_1[0x12] == 0x65)))) {
        return 0x2b;
      }
    }
    else if (((((bVar1 == 99) && (param_1[1] == 0x6f)) && (param_1[2] == 0x6e)) &&
             (((param_1[3] == 0x74 && (param_1[4] == 0x65)) &&
              (((param_1[5] == 0x6e && ((param_1[6] == 0x74 && (param_1[7] == 0x2d)))) &&
               (param_1[8] == 100)))))) &&
            (((((param_1[9] == 0x69 && (param_1[10] == 0x73)) && (param_1[0xb] == 0x70)) &&
              (((param_1[0xc] == 0x6f && (param_1[0xd] == 0x73)) &&
               ((param_1[0xe] == 0x69 && ((param_1[0xf] == 0x74 && (param_1[0x10] == 0x69)))))))) &&
             ((param_1[0x11] == 0x6f && (param_1[0x12] == 0x6e)))))) {
      return 0x15;
    }
    break;
  case 0x14:
    if ((((*param_1 == 0x73) && (param_1[1] == 0x65)) && (param_1[2] == 99)) &&
       (((((param_1[3] == 0x2d && (param_1[4] == 0x77)) &&
          ((param_1[5] == 0x65 && ((param_1[6] == 0x62 && (param_1[7] == 0x73)))))) &&
         ((param_1[8] == 0x6f &&
          (((((param_1[9] == 99 && (param_1[10] == 0x6b)) && (param_1[0xb] == 0x65)) &&
            ((param_1[0xc] == 0x74 && (param_1[0xd] == 0x2d)))) &&
           (((param_1[0xe] == 0x61 && ((param_1[0xf] == 99 && (param_1[0x10] == 99)))) &&
            (param_1[0x11] == 0x65)))))))) && ((param_1[0x12] == 0x70 && (param_1[0x13] == 0x74)))))
       ) {
      return 0x3b;
    }
    break;
  case 0x15:
    if ((((*param_1 == 0x73) && (param_1[1] == 0x65)) &&
        ((param_1[2] == 99 &&
         (((param_1[3] == 0x2d && (param_1[4] == 0x77)) && (param_1[5] == 0x65)))))) &&
       ((((((param_1[6] == 0x62 && (param_1[7] == 0x73)) && (param_1[8] == 0x6f)) &&
          ((param_1[9] == 99 && (param_1[10] == 0x6b)))) &&
         ((param_1[0xb] == 0x65 &&
          ((((param_1[0xc] == 0x74 && (param_1[0xd] == 0x2d)) && (param_1[0xe] == 0x76)) &&
           ((param_1[0xf] == 0x65 && (param_1[0x10] == 0x72)))))))) &&
        (((param_1[0x11] == 0x73 && ((param_1[0x12] == 0x69 && (param_1[0x13] == 0x6f)))) &&
         (param_1[0x14] == 0x6e)))))) {
      return 0x3f;
    }
    break;
  case 0x16:
    bVar1 = *param_1;
    if (bVar1 == 0x78) {
      if (param_1[1] == 0x2d) {
        if (param_1[2] == 100) {
          if (((((param_1[3] == 0x6e) && (param_1[4] == 0x73)) &&
               ((param_1[5] == 0x2d &&
                (((param_1[6] == 0x70 && (param_1[7] == 0x72)) && (param_1[8] == 0x65)))))) &&
              ((param_1[9] == 0x66 && (param_1[10] == 0x65)))) &&
             ((((param_1[0xb] == 0x74 &&
                (((param_1[0xc] == 99 && (param_1[0xd] == 0x68)) &&
                 ((param_1[0xe] == 0x2d &&
                  ((((param_1[0xf] == 99 && (param_1[0x10] == 0x6f)) && (param_1[0x11] == 0x6e)) &&
                   ((param_1[0x12] == 0x74 && (param_1[0x13] == 0x72)))))))))) &&
               (param_1[0x14] == 0x6f)) && (param_1[0x15] == 0x6c)))) {
            return 0x4e;
          }
        }
        else if ((((param_1[2] == 99) && (param_1[3] == 0x6f)) &&
                 ((param_1[4] == 0x6e &&
                  (((param_1[5] == 0x74 && (param_1[6] == 0x65)) && (param_1[7] == 0x6e)))))) &&
                ((((param_1[8] == 0x74 && (param_1[9] == 0x2d)) && (param_1[10] == 0x74)) &&
                 (((param_1[0xb] == 0x79 && (param_1[0xc] == 0x70)) &&
                  (((param_1[0xd] == 0x65 &&
                    (((param_1[0xe] == 0x2d && (param_1[0xf] == 0x6f)) && (param_1[0x10] == 0x70))))
                   && (((param_1[0x11] == 0x74 && (param_1[0x12] == 0x69)) &&
                       ((param_1[0x13] == 0x6f &&
                        ((param_1[0x14] == 0x6e && (param_1[0x15] == 0x73)))))))))))))) {
          return 0x4d;
        }
      }
    }
    else if (bVar1 == 0x73) {
      if (((((((param_1[1] == 0x65) && (param_1[2] == 99)) && (param_1[3] == 0x2d)) &&
            ((param_1[4] == 0x77 && (param_1[5] == 0x65)))) && (param_1[6] == 0x62)) &&
          (((((param_1[7] == 0x73 && (param_1[8] == 0x6f)) &&
             ((param_1[9] == 99 &&
              (((param_1[10] == 0x6b && (param_1[0xb] == 0x65)) && (param_1[0xc] == 0x74)))))) &&
            ((param_1[0xd] == 0x2d && (param_1[0xe] == 0x70)))) && (param_1[0xf] == 0x72)))) &&
         (((param_1[0x10] == 0x6f && (param_1[0x11] == 0x74)) &&
          ((param_1[0x12] == 0x6f &&
           (((param_1[0x13] == 99 && (param_1[0x14] == 0x6f)) && (param_1[0x15] == 0x6c)))))))) {
        return 0x3e;
      }
    }
    else if (((bVar1 == 0x61) && (param_1[1] == 99)) &&
            ((((param_1[2] == 99 && ((param_1[3] == 0x65 && (param_1[4] == 0x73)))) &&
              (param_1[5] == 0x73)) &&
             ((((((((param_1[6] == 0x2d && (param_1[7] == 99)) && (param_1[8] == 0x6f)) &&
                  ((param_1[9] == 0x6e && (param_1[10] == 0x74)))) &&
                 ((param_1[0xb] == 0x72 && ((param_1[0xc] == 0x6f && (param_1[0xd] == 0x6c)))))) &&
                (param_1[0xe] == 0x2d)) &&
               (((param_1[0xf] == 0x6d && (param_1[0x10] == 0x61)) && (param_1[0x11] == 0x78)))) &&
              (((param_1[0x12] == 0x2d && (param_1[0x13] == 0x61)) &&
               ((param_1[0x14] == 0x67 && (param_1[0x15] == 0x65)))))))))) {
      return 10;
    }
    break;
  case 0x17:
    if ((((((*param_1 == 99) && (param_1[1] == 0x6f)) && (param_1[2] == 0x6e)) &&
         ((param_1[3] == 0x74 && (param_1[4] == 0x65)))) &&
        (((param_1[5] == 0x6e && ((param_1[6] == 0x74 && (param_1[7] == 0x2d)))) &&
         ((param_1[8] == 0x73 &&
          ((((param_1[9] == 0x65 && (param_1[10] == 99)) && (param_1[0xb] == 0x75)) &&
           ((param_1[0xc] == 0x72 && (param_1[0xd] == 0x69)))))))))) &&
       ((((param_1[0xe] == 0x74 && ((param_1[0xf] == 0x79 && (param_1[0x10] == 0x2d)))) &&
         (param_1[0x11] == 0x70)) &&
        ((((param_1[0x12] == 0x6f && (param_1[0x13] == 0x6c)) && (param_1[0x14] == 0x69)) &&
         ((param_1[0x15] == 99 && (param_1[0x16] == 0x79)))))))) {
      return 0x1b;
    }
    break;
  case 0x18:
    if (((((*param_1 == 0x73) && (param_1[1] == 0x65)) &&
         ((param_1[2] == 99 && ((param_1[3] == 0x2d && (param_1[4] == 0x77)))))) &&
        ((param_1[5] == 0x65 &&
         ((((((((param_1[6] == 0x62 && (param_1[7] == 0x73)) && (param_1[8] == 0x6f)) &&
              ((param_1[9] == 99 && (param_1[10] == 0x6b)))) && (param_1[0xb] == 0x65)) &&
            ((param_1[0xc] == 0x74 && (param_1[0xd] == 0x2d)))) && (param_1[0xe] == 0x65)) &&
          (((param_1[0xf] == 0x78 && (param_1[0x10] == 0x74)) && (param_1[0x11] == 0x65)))))))) &&
       ((((param_1[0x12] == 0x6e && (param_1[0x13] == 0x73)) &&
         ((param_1[0x14] == 0x69 && ((param_1[0x15] == 0x6f && (param_1[0x16] == 0x6e)))))) &&
        (param_1[0x17] == 0x73)))) {
      return 0x3c;
    }
    break;
  case 0x19:
    if (*param_1 == 0x75) {
      if ((((((((((param_1[1] == 0x70) && (param_1[2] == 0x67)) && (param_1[3] == 0x72)) &&
               ((param_1[4] == 0x61 && (param_1[5] == 100)))) &&
              ((param_1[6] == 0x65 && ((param_1[7] == 0x2d && (param_1[8] == 0x69)))))) &&
             ((param_1[9] == 0x6e &&
              ((((param_1[10] == 0x73 && (param_1[0xb] == 0x65)) && (param_1[0xc] == 99)) &&
               ((param_1[0xd] == 0x75 && (param_1[0xe] == 0x72)))))))) &&
            ((param_1[0xf] == 0x65 && ((param_1[0x10] == 0x2d && (param_1[0x11] == 0x72)))))) &&
           (param_1[0x12] == 0x65)) &&
          (((param_1[0x13] == 0x71 && (param_1[0x14] == 0x75)) && (param_1[0x15] == 0x65)))) &&
         (((param_1[0x16] == 0x73 && (param_1[0x17] == 0x74)) && (param_1[0x18] == 0x73)))) {
        return 0x48;
      }
    }
    else if (((((*param_1 == 0x73) && (param_1[1] == 0x74)) &&
              ((param_1[2] == 0x72 &&
               ((((param_1[3] == 0x69 && (param_1[4] == 99)) && (param_1[5] == 0x74)) &&
                ((param_1[6] == 0x2d && (param_1[7] == 0x74)))))))) && (param_1[8] == 0x72)) &&
            (((param_1[9] == 0x61 && (param_1[10] == 0x6e)) &&
             (((((param_1[0xb] == 0x73 &&
                 (((param_1[0xc] == 0x70 && (param_1[0xd] == 0x6f)) && (param_1[0xe] == 0x72)))) &&
                (((param_1[0xf] == 0x74 && (param_1[0x10] == 0x2d)) && (param_1[0x11] == 0x73)))) &&
               ((param_1[0x12] == 0x65 && (param_1[0x13] == 99)))) &&
              (((param_1[0x14] == 0x75 &&
                (((param_1[0x15] == 0x72 && (param_1[0x16] == 0x69)) && (param_1[0x17] == 0x74))))
               && (param_1[0x18] == 0x79)))))))) {
      return 0x42;
    }
    break;
  case 0x1b:
    if (*param_1 == 0x70) {
      if ((((param_1[1] == 0x75) && (param_1[2] == 0x62)) &&
          (((param_1[3] == 0x6c && ((param_1[4] == 0x69 && (param_1[5] == 99)))) &&
           ((param_1[6] == 0x2d &&
            (((param_1[7] == 0x6b && (param_1[8] == 0x65)) && (param_1[9] == 0x79)))))))) &&
         ((((((((param_1[10] == 0x2d && (param_1[0xb] == 0x70)) &&
               ((param_1[0xc] == 0x69 && ((param_1[0xd] == 0x6e && (param_1[0xe] == 0x73)))))) &&
              (param_1[0xf] == 0x2d)) &&
             (((param_1[0x10] == 0x72 && (param_1[0x11] == 0x65)) && (param_1[0x12] == 0x70)))) &&
            ((param_1[0x13] == 0x6f && (param_1[0x14] == 0x72)))) &&
           (((param_1[0x15] == 0x74 && ((param_1[0x16] == 0x2d && (param_1[0x17] == 0x6f)))) &&
            (param_1[0x18] == 0x6e)))) && ((param_1[0x19] == 0x6c && (param_1[0x1a] == 0x79)))))) {
        return 0x35;
      }
    }
    else if ((((((((*param_1 == 0x61) && (param_1[1] == 99)) && (param_1[2] == 99)) &&
                ((param_1[3] == 0x65 && (param_1[4] == 0x73)))) && (param_1[5] == 0x73)) &&
              (((param_1[6] == 0x2d && (param_1[7] == 99)) &&
               ((param_1[8] == 0x6f &&
                (((param_1[9] == 0x6e && (param_1[10] == 0x74)) && (param_1[0xb] == 0x72)))))))) &&
             (((param_1[0xc] == 0x6f && (param_1[0xd] == 0x6c)) &&
              ((param_1[0xe] == 0x2d &&
               (((param_1[0xf] == 0x61 && (param_1[0x10] == 0x6c)) &&
                ((param_1[0x11] == 0x6c &&
                 (((param_1[0x12] == 0x6f && (param_1[0x13] == 0x77)) && (param_1[0x14] == 0x2d)))))
                ))))))) &&
            (((param_1[0x15] == 0x6f && (param_1[0x16] == 0x72)) &&
             ((param_1[0x17] == 0x69 &&
              (((param_1[0x18] == 0x67 && (param_1[0x19] == 0x69)) && (param_1[0x1a] == 0x6e))))))))
    {
      return 8;
    }
    break;
  case 0x1c:
    if (((((*param_1 == 0x61) && (param_1[1] == 99)) &&
         ((param_1[2] == 99 &&
          ((((param_1[3] == 0x65 && (param_1[4] == 0x73)) && (param_1[5] == 0x73)) &&
           ((param_1[6] == 0x2d && (param_1[7] == 99)))))))) &&
        ((param_1[8] == 0x6f && ((param_1[9] == 0x6e && (param_1[10] == 0x74)))))) &&
       ((((param_1[0xb] == 0x72 &&
          (((param_1[0xc] == 0x6f && (param_1[0xd] == 0x6c)) && (param_1[0xe] == 0x2d)))) &&
         (((param_1[0xf] == 0x61 && (param_1[0x10] == 0x6c)) && (param_1[0x11] == 0x6c)))) &&
        (((param_1[0x12] == 0x6f && (param_1[0x13] == 0x77)) && (param_1[0x14] == 0x2d)))))) {
      if (param_1[0x15] == 0x6d) {
        if (((((param_1[0x16] == 0x65) && (param_1[0x17] == 0x74)) && (param_1[0x18] == 0x68)) &&
            ((param_1[0x19] == 0x6f && (param_1[0x1a] == 100)))) && (param_1[0x1b] == 0x73)) {
          return 7;
        }
      }
      else if (((param_1[0x15] == 0x68) && (param_1[0x16] == 0x65)) &&
              ((param_1[0x17] == 0x61 &&
               ((((param_1[0x18] == 100 && (param_1[0x19] == 0x65)) && (param_1[0x1a] == 0x72)) &&
                (param_1[0x1b] == 0x73)))))) {
        return 6;
      }
    }
    break;
  case 0x1d:
    if ((((((*param_1 == 0x61) && (param_1[1] == 99)) && (param_1[2] == 99)) &&
         (((param_1[3] == 0x65 && (param_1[4] == 0x73)) &&
          ((param_1[5] == 0x73 && ((param_1[6] == 0x2d && (param_1[7] == 99)))))))) &&
        ((param_1[8] == 0x6f &&
         (((param_1[9] == 0x6e && (param_1[10] == 0x74)) && (param_1[0xb] == 0x72)))))) &&
       (((param_1[0xc] == 0x6f && (param_1[0xd] == 0x6c)) && (param_1[0xe] == 0x2d)))) {
      if (param_1[0xf] == 0x72) {
        if ((((((param_1[0x10] == 0x65) && (param_1[0x11] == 0x71)) &&
              ((param_1[0x12] == 0x75 &&
               ((((param_1[0x13] == 0x65 && (param_1[0x14] == 0x73)) && (param_1[0x15] == 0x74)) &&
                ((param_1[0x16] == 0x2d && (param_1[0x17] == 0x6d)))))))) && (param_1[0x18] == 0x65)
             ) && ((param_1[0x19] == 0x74 && (param_1[0x1a] == 0x68)))) &&
           ((param_1[0x1b] == 0x6f && (param_1[0x1c] == 100)))) {
          return 0xc;
        }
      }
      else if (((((param_1[0xf] == 0x65) && (param_1[0x10] == 0x78)) && (param_1[0x11] == 0x70)) &&
               (((param_1[0x12] == 0x6f && (param_1[0x13] == 0x73)) &&
                ((param_1[0x14] == 0x65 && ((param_1[0x15] == 0x2d && (param_1[0x16] == 0x68))))))))
              && (((param_1[0x17] == 0x65 &&
                   (((param_1[0x18] == 0x61 && (param_1[0x19] == 100)) && (param_1[0x1a] == 0x65))))
                  && ((param_1[0x1b] == 0x72 && (param_1[0x1c] == 0x73)))))) {
        return 9;
      }
    }
    break;
  case 0x1e:
    if (((((*param_1 == 0x61) && (param_1[1] == 99)) &&
         ((param_1[2] == 99 &&
          (((param_1[3] == 0x65 && (param_1[4] == 0x73)) && (param_1[5] == 0x73)))))) &&
        ((((((param_1[6] == 0x2d && (param_1[7] == 99)) &&
            ((param_1[8] == 0x6f &&
             ((((param_1[9] == 0x6e && (param_1[10] == 0x74)) &&
               ((param_1[0xb] == 0x72 &&
                (((param_1[0xc] == 0x6f && (param_1[0xd] == 0x6c)) && (param_1[0xe] == 0x2d)))))) &&
              ((param_1[0xf] == 0x72 && (param_1[0x10] == 0x65)))))))) && (param_1[0x11] == 0x71))
          && (((param_1[0x12] == 0x75 && (param_1[0x13] == 0x65)) &&
              ((param_1[0x14] == 0x73 &&
               (((((param_1[0x15] == 0x74 && (param_1[0x16] == 0x2d)) && (param_1[0x17] == 0x68)) &&
                 ((param_1[0x18] == 0x65 && (param_1[0x19] == 0x61)))) && (param_1[0x1a] == 100)))))
              ))) && ((param_1[0x1b] == 0x65 && (param_1[0x1c] == 0x72)))))) &&
       (param_1[0x1d] == 0x73)) {
      return 0xb;
    }
    break;
  case 0x20:
    if (((((((*param_1 == 0x61) && (param_1[1] == 99)) && (param_1[2] == 99)) &&
          ((param_1[3] == 0x65 && (param_1[4] == 0x73)))) &&
         ((param_1[5] == 0x73 && ((param_1[6] == 0x2d && (param_1[7] == 99)))))) &&
        (((param_1[8] == 0x6f &&
          (((param_1[9] == 0x6e && (param_1[10] == 0x74)) && (param_1[0xb] == 0x72)))) &&
         ((((param_1[0xc] == 0x6f && (param_1[0xd] == 0x6c)) &&
           ((param_1[0xe] == 0x2d && ((param_1[0xf] == 0x61 && (param_1[0x10] == 0x6c)))))) &&
          (param_1[0x11] == 0x6c)))))) &&
       (((((param_1[0x12] == 0x6f && (param_1[0x13] == 0x77)) && (param_1[0x14] == 0x2d)) &&
         ((param_1[0x15] == 99 && (param_1[0x16] == 0x72)))) &&
        (((param_1[0x17] == 0x65 && ((param_1[0x18] == 100 && (param_1[0x19] == 0x65)))) &&
         ((param_1[0x1a] == 0x6e &&
          ((((param_1[0x1b] == 0x74 && (param_1[0x1c] == 0x69)) && (param_1[0x1d] == 0x61)) &&
           ((param_1[0x1e] == 0x6c && (param_1[0x1f] == 0x73)))))))))))) {
      return 5;
    }
    break;
  case 0x23:
    if (((((((*param_1 == 99) && (param_1[1] == 0x6f)) && (param_1[2] == 0x6e)) &&
          (((param_1[3] == 0x74 && (param_1[4] == 0x65)) &&
           ((param_1[5] == 0x6e && ((param_1[6] == 0x74 && (param_1[7] == 0x2d)))))))) &&
         (param_1[8] == 0x73)) &&
        ((((((param_1[9] == 0x65 && (param_1[10] == 99)) && (param_1[0xb] == 0x75)) &&
           ((param_1[0xc] == 0x72 && (param_1[0xd] == 0x69)))) && (param_1[0xe] == 0x74)) &&
         ((param_1[0xf] == 0x79 && (param_1[0x10] == 0x2d)))))) &&
       (((((param_1[0x11] == 0x70 &&
           (((param_1[0x12] == 0x6f && (param_1[0x13] == 0x6c)) && (param_1[0x14] == 0x69)))) &&
          ((param_1[0x15] == 99 && (param_1[0x16] == 0x79)))) && (param_1[0x17] == 0x2d)) &&
        ((((((param_1[0x18] == 0x72 && (param_1[0x19] == 0x65)) &&
            ((param_1[0x1a] == 0x70 &&
             (((param_1[0x1b] == 0x6f && (param_1[0x1c] == 0x72)) && (param_1[0x1d] == 0x74)))))) &&
           ((param_1[0x1e] == 0x2d && (param_1[0x1f] == 0x6f)))) && (param_1[0x20] == 0x6e)) &&
         ((param_1[0x21] == 0x6c && (param_1[0x22] == 0x79)))))))) {
      return 0x1c;
    }
  }
  return 0xff;
}


// ===== 0096ee08  FUN_0096ee08 =====

undefined1  [16] FUN_0096ee08(ulong param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_00379d88 + (param_1 & 0xff) * 8);
  auVar1._0_8_ = &DAT_0037a010 + *(int *)(&DAT_0037a010 + (param_1 & 0xff) * 4);
  return auVar1;
}


// ===== 0096ee2c  <http::header::name::http::header::name::HeaderName>::from_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::http::header::name::HeaderName>::from_bytes */

void __rustcall
<http::header::name::http::header::name::HeaderName>::from_bytes
          (undefined8 *param_1,byte *param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 local_d8;
  code *pcStack_d0;
  ulong *local_c8;
  code *pcStack_c0;
  long local_98;
  long lStack_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  long lStack_70;
  long local_68;
  undefined *local_60;
  long lStack_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  if (param_3 == 0) goto LAB_0096efe8;
  if (0x40 < param_3) {
    if (param_3 < 0x10000) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      local_98 = FUN_004b25a4(param_3,1);
      if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,param_3);
      }
      lStack_90 = 0;
      local_80 = LZCOUNT(param_3 >> 10) * -4 + 0x101;
      local_88 = param_3;
      do {
        if (""[*param_2] == '\0') {
          *param_1 = 1;
          <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(&local_98);
          return;
        }
        local_d8 = (ulong *)CONCAT71(local_d8._1_7_,""[*param_2]);
                    /* try { // try from 0096eeb4 to 0096eec3 has its CatchHandler @ 0096f0d4 */
        <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
                  (&local_98,&local_d8,1);
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
      puVar6 = PTR_SHARED_VTABLE_00b00e28;
      if ((local_80 & 1) != 0) {
        uVar7 = local_80 >> 5;
        local_68 = uVar7 + lStack_90;
        local_78 = local_88 + uVar7;
        lStack_70 = local_98 - uVar7;
        <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_60,&local_78)
        ;
        if (local_50 < uVar7) {
          local_d8 = &local_40;
          pcStack_d0 = FUN_0096f67c;
          local_c8 = &local_38;
          local_38 = local_50;
          pcStack_c0 = FUN_0096f67c;
                    /* try { // try from 0096f0ac to 0096f0c3 has its CatchHandler @ 0096f0e8 */
          local_40 = uVar7;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002afeea,&local_d8,&PTR_s__root__cargo_registry_src_index__00af2cd0);
        }
        local_98 = lStack_58 + uVar7;
        lStack_90 = local_50 - uVar7;
        local_80 = local_48;
        puVar6 = local_60;
      }
      param_1[2] = local_98;
      param_1[3] = lStack_90;
      param_1[4] = local_80;
      *param_1 = 0;
      param_1[1] = puVar6;
      return;
    }
    goto LAB_0096efe8;
  }
  if (param_3 == 1) {
    uVar2 = 0;
LAB_0096ef28:
    lVar3 = param_3 - uVar2;
    pbVar5 = param_2 + uVar2;
    pcVar4 = (char *)((long)&local_d8 + uVar2);
    do {
      lVar3 = lVar3 + -1;
      *pcVar4 = ""[*pbVar5];
      pbVar5 = pbVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (lVar3 != 0);
  }
  else {
    uVar2 = param_3 & 0x7e;
    uVar7 = param_3 & 0x7e;
    pbVar5 = param_2 + 1;
    pcVar4 = (char *)((long)&local_d8 + 1);
    do {
      uVar7 = uVar7 - 2;
      cVar1 = ""[*pbVar5];
      pcVar4[-1] = ""[pbVar5[-1]];
      *pcVar4 = cVar1;
      pbVar5 = pbVar5 + 2;
      pcVar4 = pcVar4 + 2;
    } while (uVar7 != 0);
    if (param_3 != uVar2) goto LAB_0096ef28;
  }
  cVar1 = <http::header::name::[P]::http::header::name::StandardHeader>::from_bytes
                    (&local_d8,param_3);
  if (cVar1 != -1) {
    *(char *)(param_1 + 2) = cVar1;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (param_3 < 0x10) {
    pcVar4 = (char *)&local_d8;
    uVar7 = param_3;
    do {
      if (*pcVar4 == '\0') goto LAB_0096efe8;
      uVar7 = uVar7 - 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar7 != 0);
  }
  else {
    lVar3 = core::slice::memchr::memchr_aligned(0,&local_d8,param_3);
    if (lVar3 == 1) {
LAB_0096efe8:
      *param_1 = 1;
      return;
    }
  }
  <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(param_1 + 1,&local_d8,param_3);
  *param_1 = 0;
  return;
}


// ===== 0096f110  <http::header::name::http::header::name::HeaderName>::into_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::http::header::name::HeaderName>::into_bytes */

void __rustcall
<http::header::name::http::header::name::HeaderName>::into_bytes(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 != 0) {
    lVar2 = *param_2;
    lVar4 = param_2[3];
    lVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[3] = lVar4;
    param_1[2] = lVar3;
    return;
  }
  puVar1 = (&PTR_s_accept_00af3200)[*(byte *)(param_2 + 1)];
  param_1[2] = *(long *)(&DAT_0037ac18 + (ulong)*(byte *)(param_2 + 1) * 8);
  param_1[3] = 0;
  *param_1 = (long)&PTR_FUN_00af2d20;
  param_1[1] = (long)puVar1;
  return;
}


// ===== 0096f114  <http::header::name::http::header::name::HeaderName>::from_static =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::http::header::name::HeaderName>::from_static */

void __rustcall
<http::header::name::http::header::name::HeaderName>::from_static
          (undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  
  cVar1 = <http::header::name::[P]::http::header::name::StandardHeader>::from_bytes();
  if (cVar1 != -1) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = cVar1;
    return;
  }
  if (0xffffffffffff0000 < param_3 - 0x10000U) {
    lVar2 = 0;
    while ((&DAT_00379c59)[*(byte *)(param_2 + lVar2)] != '\0') {
      lVar2 = lVar2 + 1;
      if (param_3 == lVar2) {
        param_1[2] = param_3;
        param_1[3] = 0;
        *param_1 = &PTR_FUN_00af2ca8;
        param_1[1] = param_2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00af2c90);
}


// ===== 0096f1bc  <http::header::name::http::header::name::HeaderName>::from_lowercase =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::http::header::name::HeaderName>::from_lowercase */

void __rustcall
<http::header::name::http::header::name::HeaderName>::from_lowercase
          (undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  char local_60 [64];
  
  pcVar6 = local_60;
  pcVar2 = local_60;
  if (param_3 == 0) {
LAB_0096f1f0:
    *param_1 = 1;
    return;
  }
  if (0x40 < param_3) {
    if (param_3 < 0x10000) {
      uVar8 = 0;
      do {
        pcVar2 = param_2;
        if (param_3 == uVar8) goto LAB_0096f348;
        pbVar5 = param_2 + uVar8;
        uVar8 = uVar8 + 1;
      } while ((&DAT_00379c59)[*pbVar5] != '\0');
      goto LAB_0096f1f0;
    }
    goto LAB_0096f328;
  }
  if (param_3 == 1) {
    uVar3 = 0;
LAB_0096f27c:
    lVar4 = param_3 - uVar3;
    pbVar5 = param_2 + uVar3;
    pcVar7 = local_60 + uVar3;
    do {
      lVar4 = lVar4 + -1;
      *pcVar7 = (&DAT_00379c59)[*pbVar5];
      pbVar5 = pbVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (lVar4 != 0);
  }
  else {
    uVar3 = param_3 & 0x7e;
    uVar8 = param_3 & 0x7e;
    pbVar5 = param_2 + 1;
    pcVar7 = local_60 + 1;
    do {
      uVar8 = uVar8 - 2;
      cVar1 = (&DAT_00379c59)[*pbVar5];
      pcVar7[-1] = (&DAT_00379c59)[pbVar5[-1]];
      *pcVar7 = cVar1;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (uVar8 != 0);
    if (param_3 != uVar3) goto LAB_0096f27c;
  }
  cVar1 = <http::header::name::[P]::http::header::name::StandardHeader>::from_bytes(local_60);
  if (cVar1 != -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(char *)(param_1 + 2) = cVar1;
    return;
  }
  uVar8 = param_3;
  if (param_3 < 0x10) {
    do {
      if (*pcVar6 == '\0') goto LAB_0096f1f0;
      uVar8 = uVar8 - 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar8 != 0);
  }
  else {
    lVar4 = core::slice::memchr::memchr_aligned(0,local_60,param_3);
    pcVar2 = local_60;
    if (lVar4 == 1) {
LAB_0096f328:
      *param_1 = 1;
      return;
    }
  }
LAB_0096f348:
  <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(param_1 + 1,pcVar2,param_3);
  *param_1 = 0;
  return;
}


// ===== 0096f360  FUN_0096f360 =====

void FUN_0096f360(void)

{
  return;
}


// ===== 0096f364  FUN_0096f364 =====

void FUN_0096f364(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00af2ca8;
  param_1[1] = param_3;
  return;
}


// ===== 0096f378  FUN_0096f378 =====

undefined8 FUN_0096f378(void)

{
  return 0;
}


// ===== 0096f380  http::header::name::parse_hdr =====

/* WARNING: Unknown calling convention: __rustcall */
/* http::header::name::parse_hdr */

void __rustcall
http::header::name::parse_hdr(long *param_1,long param_2,ulong param_3,char *param_4,long param_5)

{
  char cVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
LAB_0096f3c4:
    *(char *)(param_1 + 2) = -1;
    return;
  }
  if (0x40 < param_3) {
    if (param_3 >> 0x10 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      *(char *)(param_1 + 2) = (char)(param_3 >> 0x10);
      return;
    }
    goto LAB_0096f3c4;
  }
  if (param_3 == 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3 & 0x7e;
    uVar6 = param_3 & 0x7e;
    pbVar2 = (byte *)(param_2 + 1);
    pcVar5 = param_4 + 1;
    do {
      uVar6 = uVar6 - 2;
      cVar1 = *(char *)(param_5 + (ulong)*pbVar2);
      pcVar5[-1] = *(char *)(param_5 + (ulong)pbVar2[-1]);
      *pcVar5 = cVar1;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (uVar6 != 0);
    if (param_3 == uVar3) goto LAB_0096f42c;
  }
  lVar4 = param_3 - uVar3;
  pbVar2 = (byte *)(param_2 + uVar3);
  pcVar5 = param_4 + uVar3;
  do {
    lVar4 = lVar4 + -1;
    *pcVar5 = *(char *)(param_5 + (ulong)*pbVar2);
    pbVar2 = pbVar2 + 1;
    pcVar5 = pcVar5 + 1;
  } while (lVar4 != 0);
LAB_0096f42c:
  cVar1 = <http::header::name::[P]::http::header::name::StandardHeader>::from_bytes(param_4);
  if (cVar1 != -1) {
    *(char *)param_1 = cVar1;
    *(char *)(param_1 + 2) = '\x02';
    return;
  }
  pcVar5 = param_4;
  uVar6 = param_3;
  if (param_3 < 0x10) {
    do {
      if (*pcVar5 == '\0') goto LAB_0096f4b4;
      uVar6 = uVar6 - 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar6 != 0);
  }
  else {
    lVar4 = core::slice::memchr::memchr_aligned(0,param_4,param_3);
    if (lVar4 == 1) {
LAB_0096f4b4:
      *(char *)(param_1 + 2) = -1;
      return;
    }
  }
  *param_1 = (long)param_4;
  param_1[1] = param_3;
  *(char *)(param_1 + 2) = '\x01';
  return;
}


// ===== 0096f4e8  <http::header::name::HeaderName_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::HeaderName as core::str::traits::FromStr>::from_str */

void __rustcall <http::header::name::HeaderName_as_core::str::traits::FromStr>::from_str(void)

{
  (*(code *)PTR_from_bytes_00b04898)();
  return;
}


// ===== 0096f4ec  <http::header::name::HeaderName_as_core::borrow::Borrow<str>>::borrow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::HeaderName as core::borrow::Borrow<str>>::borrow */

undefined1  [16] __rustcall
<http::header::name::HeaderName_as_core::borrow::Borrow<str>>::borrow(long *param_1)

{
  undefined1 auVar1 [16];
  
  if (*param_1 != 0) {
    return *(undefined1 (*) [16])(param_1 + 1);
  }
  auVar1 = FUN_0096ee08((char)param_1[1]);
  return auVar1;
}


// ===== 0096f508  FUN_0096f508 =====

void FUN_0096f508(long *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  param_1 = (long *)*param_1;
  if (*param_1 != 0) {
    <str_as_core::fmt::Debug>::fmt(param_1[1],param_1[2],param_2);
    return;
  }
  auVar1 = FUN_0096ee08((char)param_1[1]);
  <str_as_core::fmt::Debug>::fmt(auVar1._0_8_,auVar1._8_8_,param_2);
  return;
}


// ===== 0096f550  <&http::header::name::HeaderName_as_http::header::map::as_header_name::Sealed>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&http::header::name::HeaderName as http::header::map::as_header_name::Sealed>::as_str */

undefined1  [16] __rustcall
<&http::header::name::HeaderName_as_http::header::map::as_header_name::Sealed>::as_str
          (long *param_1)

{
  undefined1 auVar1 [16];
  
  param_1 = (long *)*param_1;
  if (*param_1 != 0) {
    return *(undefined1 (*) [16])(param_1 + 1);
  }
  auVar1 = FUN_0096ee08((char)param_1[1]);
  return auVar1;
}


// ===== 0096f56c  <http::header::name::HeaderName_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::HeaderName as core::fmt::Debug>::fmt */

void __rustcall
<http::header::name::HeaderName_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  if (*param_1 != 0) {
    <str_as_core::fmt::Debug>::fmt(param_1[1],param_1[2],param_2);
    return;
  }
  auVar1 = FUN_0096ee08((char)param_1[1]);
  <str_as_core::fmt::Debug>::fmt(auVar1._0_8_,auVar1._8_8_,param_2);
  return;
}


// ===== 0096f5b8  <http::header::name::HeaderName_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::HeaderName as core::fmt::Display>::fmt */

void __rustcall
<http::header::name::HeaderName_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  if (*param_1 != 0) {
    <str_as_core::fmt::Display>::fmt(param_1[1],param_1[2],param_2);
    return;
  }
  auVar1 = FUN_0096ee08((char)param_1[1]);
  <str_as_core::fmt::Display>::fmt(auVar1._0_8_,auVar1._8_8_,param_2);
  return;
}


// ===== 0096f604  <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>::from =====

/* <http[b87e90c26fe47eb4]::header::name::HeaderName as
   core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>::from
    */

void <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
     ::from(undefined8 *param_1,long *param_2)

{
  undefined8 local_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_37;
  undefined7 uStack_2f;
  undefined1 uStack_28;
  undefined7 uStack_27;
  
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    local_38 = (undefined1)param_2[1];
    local_40 = 0;
  }
  else {
    (**(code **)*param_2)(&local_40,param_2 + 3,param_2[1],param_2[2]);
    uStack_58 = uStack_2f;
    local_60 = local_37;
    uStack_51 = uStack_28;
    uStack_50 = uStack_27;
  }
  *(undefined1 *)(param_1 + 1) = local_38;
  *param_1 = local_40;
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_51,uStack_58);
  *(undefined8 *)((long)param_1 + 9) = local_60;
  param_1[3] = CONCAT71(uStack_50,uStack_51);
  return;
}


// ===== 0096f67c  FUN_0096f67c =====

void FUN_0096f67c(undefined8 param_1,long param_2)

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


// ===== 0096f694  <http::header::name::InvalidHeaderName_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::InvalidHeaderName as core::fmt::Debug>::fmt */

void __rustcall
<http::header::name::InvalidHeaderName_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"InvalidHeaderName",0x11);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 0096f6cc  <http::header::name::InvalidHeaderName_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::InvalidHeaderName as core::fmt::Display>::fmt */

void __rustcall
<http::header::name::InvalidHeaderName_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"invalid HTTP header name",0x18);
  return;
}


// ===== 0096f6e0  <http::header::name::HeaderName_as_core::convert::From<http::header::name::HdrName>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::name::HeaderName as core::convert::From<http::header::name::HdrName>>::from */

void __rustcall
<http::header::name::HeaderName_as_core::convert::From<http::header::name::HdrName>>::from
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_b8;
  long lStack_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined *local_80;
  long lStack_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong *local_50;
  code *local_48;
  ulong *puStack_40;
  code *local_38;
  
  if (*(byte *)(param_2 + 2) == 2) {
    uVar1 = *(undefined1 *)param_2;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = uVar1;
    return;
  }
  pbVar4 = (byte *)*param_2;
  uVar5 = param_2[1];
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(pbVar4,uVar5);
    return;
  }
  if ((long)uVar5 < 0) {
    uVar6 = 0;
LAB_0096f74c:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,uVar5);
  }
  if (uVar5 == 0) {
    local_b8 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    local_b8 = FUN_004b25a4(uVar5,1);
    if (local_b8 == 0) goto LAB_0096f74c;
  }
  lStack_b0 = 0;
  uVar2 = 0x40 - LZCOUNT(uVar5 >> 10);
  if (6 < uVar2) {
    uVar2 = 7;
  }
  local_a0 = uVar2 << 2 | 1;
  local_a8 = uVar5;
  if (uVar5 != 0) {
    do {
      local_50 = (ulong *)CONCAT71(local_50._1_7_,""[*pbVar4]);
                    /* try { // try from 0096f7c8 to 0096f7d7 has its CatchHandler @ 0096f8a0 */
      <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice(&local_b8,&local_50,1);
      uVar5 = uVar5 - 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    puVar3 = PTR_SHARED_VTABLE_00b00e28;
    if ((local_a0 & 1) == 0) goto LAB_0096f84c;
  }
  uVar5 = local_a0 >> 5;
  local_98 = local_a8 + uVar5;
  lStack_90 = local_b8 - uVar5;
  local_88 = uVar5 + lStack_b0;
  <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_80,&local_98);
  if (local_70 < uVar5) {
    local_50 = &local_60;
    local_58 = local_70;
    puStack_40 = &local_58;
    local_48 = FUN_0096f67c;
    local_38 = FUN_0096f67c;
                    /* try { // try from 0096f884 to 0096f89b has its CatchHandler @ 0096f8b4 */
    local_60 = uVar5;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002afeea,&local_50,&PTR_s__root__cargo_registry_src_index__00af2cd0);
  }
  local_b8 = lStack_78 + uVar5;
  lStack_b0 = local_70 - uVar5;
  local_a0 = local_68;
  puVar3 = local_80;
LAB_0096f84c:
  *param_1 = puVar3;
  param_1[1] = local_b8;
  param_1[2] = lStack_b0;
  param_1[3] = local_a0;
  return;
}


// ===== 0096f8dc  FUN_0096f8dc =====

undefined8 FUN_0096f8dc(void)

{
  return 0;
}


// ===== 0096f8e4  FUN_0096f8e4 =====

undefined1 (*) [16] FUN_0096f8e4(pthread_key_t param_1,long param_2,uint *param_3)

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
    if ((*param_3 & 1) != 0) goto LAB_0096f920;
  }
  auVar1 = std::sys::random::linux::hashmap_random_keys();
LAB_0096f920:
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


// ===== 0096f994  FUN_0096f994 =====

void FUN_0096f994(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0096f9d0 to 0096f9d3 has its CatchHandler @ 0096fa1c */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0096fa70  FUN_0096fa70 =====

void FUN_0096fa70(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 0096fa9c to 0096faa3 has its CatchHandler @ 0096fae4 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 0096fac0 to 0096fac7 has its CatchHandler @ 0096fb14 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0096fae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 0096fb38  FUN_0096fb38 =====

void FUN_0096fb38(byte *param_1)

{
  if ((9 < *param_1) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0096fb5c  FUN_0096fb5c =====

void FUN_0096fb5c(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 0096fb8c to 0096fb93 has its CatchHandler @ 0096fc20 */
  FUN_0097266c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0096fbd4 to 0096fbd7 has its CatchHandler @ 0096fc50 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0096fca4  <http::status::http::status::StatusCode>::canonical_reason =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::status::http::status::StatusCode>::canonical_reason */

undefined1  [16] __rustcall
<http::status::http::status::StatusCode>::canonical_reason(undefined2 *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
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
  
  pcVar2 = (char *)0x0;
  switch(*param_1) {
  case 100:
    auVar3._8_8_ = 8;
    auVar3._0_8_ = "Continue";
    return auVar3;
  case 0x65:
    auVar32._8_8_ = 0x13;
    auVar32._0_8_ = "Switching Protocols";
    return auVar32;
  case 0x66:
    auVar26._8_8_ = 10;
    auVar26._0_8_ = "Processing";
    return auVar26;
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
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
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 0x132:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14c:
  case 0x14d:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x151:
  case 0x152:
  case 0x153:
  case 0x154:
  case 0x155:
  case 0x156:
  case 0x157:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
  case 0x1a3:
  case 0x1a4:
  case 0x1ab:
  case 0x1ae:
  case 0x1b0:
  case 0x1b1:
  case 0x1b2:
  case 0x1b3:
  case 0x1b4:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cb:
  case 0x1cc:
  case 0x1cd:
  case 0x1ce:
  case 0x1cf:
  case 0x1d0:
  case 0x1d1:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 0x1fd:
    goto switchD_0096fccc_caseD_67;
  case 200:
    auVar27._8_8_ = 2;
    auVar27._0_8_ = "OK";
    return auVar27;
  case 0xc9:
    auVar37._8_8_ = 7;
    auVar37._0_8_ = "Created";
    return auVar37;
  case 0xca:
    auVar40._8_8_ = 8;
    auVar40._0_8_ = &DAT_002a1618;
    return auVar40;
  case 0xcb:
    auVar21._8_8_ = 0x1d;
    auVar21._0_8_ = "Non Authoritative Information";
    return auVar21;
  case 0xcc:
    auVar46._8_8_ = 10;
    auVar46._0_8_ = "No Content";
    return auVar46;
  case 0xcd:
    auVar20._8_8_ = 0xd;
    auVar20._0_8_ = "Reset Content";
    return auVar20;
  case 0xce:
    auVar47._8_8_ = 0xf;
    auVar47._0_8_ = "Partial Content";
    return auVar47;
  case 0xcf:
    auVar24._8_8_ = 0xc;
    auVar24._0_8_ = "Multi-Status";
    return auVar24;
  case 0xd0:
    auVar34._8_8_ = 0x10;
    auVar34._0_8_ = &DAT_0029fe50;
    return auVar34;
  case 0xe2:
    auVar31._8_8_ = 7;
    auVar31._0_8_ = "IM Used";
    return auVar31;
  case 300:
    auVar18._8_8_ = 0x10;
    auVar18._0_8_ = &DAT_002a0440;
    return auVar18;
  case 0x12d:
    auVar44._8_8_ = 0x11;
    auVar44._0_8_ = "Moved Permanently";
    return auVar44;
  case 0x12e:
    auVar45._8_8_ = 5;
    auVar45._0_8_ = "Found";
    return auVar45;
  case 0x12f:
    auVar51._8_8_ = 9;
    auVar51._0_8_ = "See Other";
    return auVar51;
  case 0x130:
    auVar49._8_8_ = 0xc;
    auVar49._0_8_ = "Not Modified";
    return auVar49;
  case 0x131:
    auVar15._8_8_ = 9;
    auVar15._0_8_ = "Use Proxy";
    return auVar15;
  case 0x133:
    auVar33._8_8_ = 0x12;
    auVar33._0_8_ = "Temporary Redirect";
    return auVar33;
  case 0x134:
    auVar54._8_8_ = 0x12;
    auVar54._0_8_ = "Permanent Redirect";
    return auVar54;
  case 400:
    auVar17._8_8_ = 0xb;
    auVar17._0_8_ = "Bad Request";
    return auVar17;
  case 0x191:
    auVar30._8_8_ = 0xc;
    auVar30._0_8_ = "Unauthorized";
    return auVar30;
  case 0x192:
    auVar22._8_8_ = 0x10;
    auVar22._0_8_ = &DAT_0029fbd0;
    return auVar22;
  case 0x193:
    auVar38._8_8_ = 9;
    auVar38._0_8_ = "Forbidden";
    return auVar38;
  case 0x194:
    auVar19._8_8_ = 9;
    auVar19._0_8_ = "Not Found";
    return auVar19;
  case 0x195:
    auVar13._8_8_ = 0x12;
    auVar13._0_8_ = "Method Not Allowed";
    return auVar13;
  case 0x196:
    auVar56._8_8_ = 0xe;
    auVar56._0_8_ = "Not Acceptable";
    return auVar56;
  case 0x197:
    auVar25._8_8_ = 0x1d;
    auVar25._0_8_ = "Proxy Authentication Required";
    return auVar25;
  case 0x198:
    auVar28._8_8_ = 0xf;
    auVar28._0_8_ = "Request Timeout";
    return auVar28;
  case 0x199:
    auVar43._8_8_ = 8;
    auVar43._0_8_ = &DAT_002a1af8;
    return auVar43;
  case 0x19a:
    auVar29._8_8_ = 4;
    auVar29._0_8_ = &DAT_002bd100;
    return auVar29;
  case 0x19b:
    auVar9._8_8_ = 0xf;
    auVar9._0_8_ = "Length Required";
    return auVar9;
  case 0x19c:
    auVar16._8_8_ = 0x13;
    auVar16._0_8_ = "Precondition Failed";
    return auVar16;
  case 0x19d:
    auVar48._8_8_ = 0x11;
    auVar48._0_8_ = "Payload Too Large";
    return auVar48;
  case 0x19e:
    auVar58._8_8_ = 0xc;
    auVar58._0_8_ = "URI Too Long";
    return auVar58;
  case 0x19f:
    auVar12._8_8_ = 0x16;
    auVar12._0_8_ = "Unsupported Media Type";
    return auVar12;
  case 0x1a0:
    auVar41._8_8_ = 0x15;
    auVar41._0_8_ = "Range Not Satisfiable";
    return auVar41;
  case 0x1a1:
    auVar11._8_8_ = 0x12;
    auVar11._0_8_ = "Expectation Failed";
    return auVar11;
  case 0x1a2:
    auVar10._8_8_ = 0xc;
    auVar10._0_8_ = "I\'m a teapot";
    return auVar10;
  case 0x1a5:
    auVar23._8_8_ = 0x13;
    auVar23._0_8_ = "Misdirected Request";
    return auVar23;
  case 0x1a6:
    auVar35._8_8_ = 0x14;
    auVar35._0_8_ = "Unprocessable Entity";
    return auVar35;
  case 0x1a7:
    auVar52._8_8_ = 6;
    auVar52._0_8_ = "Locked";
    return auVar52;
  case 0x1a8:
    auVar4._8_8_ = 0x11;
    auVar4._0_8_ = "Failed Dependency";
    return auVar4;
  case 0x1a9:
    auVar14._8_8_ = 9;
    auVar14._0_8_ = "Too Early";
    return auVar14;
  case 0x1aa:
    auVar36._8_8_ = 0x10;
    auVar36._0_8_ = &DAT_002a0750;
    return auVar36;
  case 0x1ac:
    auVar39._8_8_ = 0x15;
    auVar39._0_8_ = "Precondition Required";
    return auVar39;
  case 0x1ad:
    auVar59._8_8_ = 0x11;
    auVar59._0_8_ = "Too Many Requests";
    return auVar59;
  case 0x1af:
    pcVar2 = "Request Header Fields Too Large";
    break;
  case 0x1c3:
    auVar8._8_8_ = 0x1d;
    auVar8._0_8_ = "Unavailable For Legal Reasons";
    return auVar8;
  case 500:
    auVar5._8_8_ = 0x15;
    auVar5._0_8_ = "Internal Server Error";
    return auVar5;
  case 0x1f5:
    auVar61._8_8_ = 0xf;
    auVar61._0_8_ = "Not Implemented";
    return auVar61;
  case 0x1f6:
    auVar57._8_8_ = 0xb;
    auVar57._0_8_ = "Bad Gateway";
    return auVar57;
  case 0x1f7:
    auVar7._8_8_ = 0x13;
    auVar7._0_8_ = "Service Unavailable";
    return auVar7;
  case 0x1f8:
    auVar42._8_8_ = 0xf;
    auVar42._0_8_ = "Gateway Timeout";
    return auVar42;
  case 0x1f9:
    auVar50._8_8_ = 0x1a;
    auVar50._0_8_ = "HTTP Version Not Supported";
    return auVar50;
  case 0x1fa:
    auVar6._8_8_ = 0x17;
    auVar6._0_8_ = "Variant Also Negotiates";
    return auVar6;
  case 0x1fb:
    auVar55._8_8_ = 0x14;
    auVar55._0_8_ = "Insufficient Storage";
    return auVar55;
  case 0x1fc:
    auVar53._8_8_ = 0xd;
    auVar53._0_8_ = "Loop Detected";
    return auVar53;
  case 0x1fe:
    auVar62._8_8_ = 0xc;
    auVar62._0_8_ = "Not Extended";
    return auVar62;
  case 0x1ff:
    pcVar2 = "Network Authentication Required";
    break;
  default:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  }
  param_2 = 0x1f;
switchD_0096fccc_caseD_67:
  auVar60._8_8_ = param_2;
  auVar60._0_8_ = pcVar2;
  return auVar60;
}


// ===== 009700a0  FUN_009700a0 =====

void FUN_009700a0(undefined1 *param_1,byte *param_2,long param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  
  if (param_3 == 0) {
    cVar6 = '\0';
LAB_00970208:
    cVar7 = '\0';
LAB_0097020c:
    cVar8 = '\0';
LAB_00970210:
    cVar9 = '\0';
LAB_00970214:
    cVar10 = '\0';
LAB_00970218:
    cVar11 = '\0';
LAB_0097021c:
    cVar12 = '\0';
LAB_00970220:
    cVar13 = '\0';
LAB_00970224:
    cVar14 = '\0';
LAB_00970228:
    cVar1 = '\0';
LAB_0097022c:
    cVar2 = '\0';
LAB_00970230:
    cVar3 = '\0';
LAB_00970234:
    cVar4 = '\0';
LAB_00970238:
    cVar5 = '\0';
  }
  else {
    cVar6 = ""[*param_2];
    if (cVar6 == '\0') goto LAB_009701f0;
    if (param_3 == 1) goto LAB_00970208;
    cVar7 = ""[param_2[1]];
    if (cVar7 == '\0') goto LAB_009701f0;
    if (param_3 == 2) goto LAB_0097020c;
    cVar8 = ""[param_2[2]];
    if (cVar8 == '\0') goto LAB_009701f0;
    if (param_3 == 3) goto LAB_00970210;
    cVar9 = ""[param_2[3]];
    if (cVar9 == '\0') goto LAB_009701f0;
    if (param_3 == 4) goto LAB_00970214;
    cVar10 = ""[param_2[4]];
    if (cVar10 == '\0') goto LAB_009701f0;
    if (param_3 == 5) goto LAB_00970218;
    cVar11 = ""[param_2[5]];
    if (cVar11 == '\0') goto LAB_009701f0;
    if (param_3 == 6) goto LAB_0097021c;
    cVar12 = ""[param_2[6]];
    if (cVar12 == '\0') goto LAB_009701f0;
    if (param_3 == 7) goto LAB_00970220;
    cVar13 = ""[param_2[7]];
    if (cVar13 == '\0') goto LAB_009701f0;
    if (param_3 == 8) goto LAB_00970224;
    cVar14 = ""[param_2[8]];
    if (cVar14 == '\0') goto LAB_009701f0;
    if (param_3 == 9) goto LAB_00970228;
    cVar1 = ""[param_2[9]];
    if (cVar1 == '\0') goto LAB_009701f0;
    if (param_3 == 10) goto LAB_0097022c;
    cVar2 = ""[param_2[10]];
    if (cVar2 == '\0') goto LAB_009701f0;
    if (param_3 == 0xb) goto LAB_00970230;
    cVar3 = ""[param_2[0xb]];
    if (cVar3 == '\0') goto LAB_009701f0;
    if (param_3 == 0xc) goto LAB_00970234;
    cVar4 = ""[param_2[0xc]];
    if (cVar4 == '\0') goto LAB_009701f0;
    if (param_3 == 0xd) goto LAB_00970238;
    cVar5 = ""[param_2[0xd]];
    if (cVar5 == '\0') goto LAB_009701f0;
    if (param_3 != 0xe) {
      cVar15 = ""[param_2[0xe]];
      if (cVar15 == '\0') {
LAB_009701f0:
        *param_1 = 1;
        return;
      }
      if (param_3 != 0xf) {
        if (""[param_2[0xf]] != '\0') {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (0xf,0xf,&PTR_s__root__cargo_registry_src_index__00af2d60);
        }
        goto LAB_009701f0;
      }
      goto LAB_00970240;
    }
  }
  cVar15 = '\0';
LAB_00970240:
  param_1[1] = cVar6;
  param_1[2] = cVar7;
  param_1[3] = cVar8;
  param_1[4] = cVar9;
  param_1[5] = cVar10;
  param_1[6] = cVar11;
  param_1[7] = cVar12;
  param_1[8] = cVar13;
  param_1[9] = cVar14;
  param_1[10] = cVar1;
  param_1[0xb] = cVar2;
  param_1[0xc] = cVar3;
  param_1[0xd] = cVar4;
  param_1[0xe] = cVar5;
  param_1[0xf] = cVar15;
  param_1[0x10] = (char)param_3;
  *param_1 = 0;
  return;
}


// ===== 009702a4  <http::method::extension::http::method::extension::InlineExtension>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::method::extension::http::method::extension::InlineExtension>::as_str */

void __rustcall
<http::method::extension::http::method::extension::InlineExtension>::as_str(long param_1)

{
  if (*(byte *)(param_1 + 0xf) < 0x10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(byte *)(param_1 + 0xf),0xf,&PTR_s__root__cargo_registry_src_index__00af2d08);
}


// ===== 009702d0  <http::request::[2]::http::request::Parts>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <http::request::[2]::http::request::Parts>::new */

void __rustcall <http::request::[2]::http::request::Parts>::new(long *param_1)

{
  long lVar1;
  long lVar2;
  uint7 uStack_df;
  long lStack_d8;
  undefined6 uStack_8e;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  undefined1 uStack_21;
  
  lVar2 = _UNK_002a02b8;
  lVar1 = _DAT_002a02b0;
                    /* try { // try from 0097031c to 009703cb has its CatchHandler @ 009703d0 */
  FUN_009717a4(&local_88,0);
  if (local_88 != -1) {
    *(undefined4 *)((long)param_1 + 0xb9) = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[5] = lStack_60;
    param_1[4] = local_68;
    param_1[7] = lStack_50;
    param_1[6] = local_58;
    param_1[9] = lStack_40;
    param_1[8] = lStack_48;
    param_1[0xb] = lStack_30;
    param_1[10] = local_38;
    *(undefined1 *)(param_1 + 0x17) = 1;
    param_1[1] = lStack_80;
    *param_1 = local_88;
    param_1[3] = lStack_70;
    param_1[2] = local_78;
    param_1[0x16] = CONCAT62(uStack_8e,0xffff);
    param_1[0x15] = lVar2;
    param_1[0x14] = lVar1;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = (long)"/";
    param_1[0x12] = (long)&PTR_FUN_00af2d20;
    *(undefined1 *)(param_1 + 0x1b) = 2;
    param_1[0xd] = lStack_d8;
    param_1[0xc] = (ulong)uStack_df << 8;
    param_1[0xf] = 1;
    param_1[0xe] = (long)&PTR_FUN_00af2d20;
    param_1[0x1a] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("zero capacity should never fail",0x1f,&uStack_21,&DAT_00af2ce8,
             &PTR_s__root__cargo_registry_src_index__00af2d48);
}


// ===== 009703e8  <http::response::[2]::http::response::Parts>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::response::[2]::http::response::Parts>::new */

void __rustcall <http::response::[2]::http::response::Parts>::new(long *param_1)

{
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  undefined1 uStack_1;
  
  FUN_009717a4(&local_80,0);
  if (local_80 != -1) {
    *(undefined2 *)(param_1 + 0xd) = 200;
    *(undefined1 *)((long)param_1 + 0x6a) = 2;
    param_1[5] = lStack_58;
    param_1[4] = local_60;
    param_1[7] = lStack_48;
    param_1[6] = lStack_50;
    param_1[9] = lStack_38;
    param_1[8] = local_40;
    param_1[0xb] = lStack_28;
    param_1[10] = lStack_30;
    param_1[1] = lStack_78;
    *param_1 = local_80;
    param_1[3] = lStack_68;
    param_1[2] = lStack_70;
    param_1[0xc] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("zero capacity should never fail",0x1f,&uStack_1,&DAT_00af2ce8,
             &PTR_s__root__cargo_registry_src_index__00af2d48);
}


// ===== 00970474  <http::request::[4]::http::request::Builder>::version =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::request::[4]::http::request::Builder>::version */

void __rustcall
<http::request::[4]::http::request::Builder>::version
          (long *param_1,long *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined4 local_d8;
  undefined3 uStack_d4;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  long local_20;
  long lStack_18;
  long local_10;
  long lStack_8;
  
  lStack_28 = param_2[0x16];
  local_30 = param_2[0x15];
  lStack_18 = param_2[0x18];
  local_20 = param_2[0x17];
  lStack_38 = param_2[0x14];
  local_40 = param_2[0x13];
  lStack_8 = param_2[0x1a];
  local_10 = param_2[0x19];
  lStack_78 = param_2[0xc];
  local_80 = param_2[0xb];
  lStack_68 = param_2[0xe];
  local_70 = param_2[0xd];
  lStack_58 = param_2[0x10];
  local_60 = param_2[0xf];
  lStack_a8 = param_2[6];
  local_b0 = param_2[5];
  lStack_88 = param_2[10];
  local_90 = param_2[9];
  lStack_48 = param_2[0x12];
  local_50 = param_2[0x11];
  lStack_98 = param_2[8];
  local_a0 = param_2[7];
  lStack_b8 = param_2[4];
  local_c0 = param_2[3];
  lStack_c8 = param_2[2];
  local_d0 = param_2[1];
  local_d8._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0xd9);
  local_d8._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0xdc);
  uStack_d4 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0xdc) >> 8);
  uVar1 = (char)param_2[0x1b];
  if (*param_2 != -1) {
    lStack_28 = param_2[0x16];
    local_30 = param_2[0x15];
    lStack_18 = param_2[0x18];
    local_20 = param_2[0x17];
    lStack_8 = param_2[0x1a];
    local_10 = param_2[0x19];
    lStack_68 = param_2[0xe];
    local_70 = param_2[0xd];
    lStack_58 = param_2[0x10];
    local_60 = param_2[0xf];
    lStack_38 = param_2[0x14];
    local_40 = param_2[0x13];
    lStack_48 = param_2[0x12];
    local_50 = param_2[0x11];
    lStack_a8 = param_2[6];
    local_b0 = param_2[5];
    lStack_98 = param_2[8];
    local_a0 = param_2[7];
    lStack_78 = param_2[0xc];
    local_80 = param_2[0xb];
    local_d8._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0xd9);
    local_d8._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0xdc);
    uStack_d4 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0xdc) >> 8);
    lStack_88 = param_2[10];
    local_90 = param_2[9];
    lStack_b8 = param_2[4];
    local_c0 = param_2[3];
    lStack_c8 = param_2[2];
    local_d0 = param_2[1];
    uVar1 = param_3;
  }
  *param_1 = *param_2;
  param_1[0x12] = lStack_48;
  param_1[0x11] = local_50;
  param_1[0x14] = lStack_38;
  param_1[0x13] = local_40;
  param_1[0x16] = lStack_28;
  param_1[0x15] = local_30;
  param_1[2] = lStack_c8;
  param_1[1] = local_d0;
  param_1[0x1a] = lStack_8;
  param_1[0x19] = local_10;
  param_1[0x18] = lStack_18;
  param_1[0x17] = local_20;
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  param_1[0xc] = lStack_78;
  param_1[0xb] = local_80;
  param_1[0xe] = lStack_68;
  param_1[0xd] = local_70;
  param_1[0x10] = lStack_58;
  param_1[0xf] = local_60;
  *(undefined4 *)((long)param_1 + 0xd9) = local_d8;
  *(uint *)((long)param_1 + 0xdc) = CONCAT31(uStack_d4,local_d8._3_1_);
  param_1[4] = lStack_b8;
  param_1[3] = local_c0;
  param_1[6] = lStack_a8;
  param_1[5] = local_b0;
  param_1[8] = lStack_98;
  param_1[7] = local_a0;
  param_1[10] = lStack_88;
  param_1[9] = local_90;
  return;
}


// ===== 009705cc  <http::response::[4]::http::response::Builder>::version =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::response::[4]::http::response::Builder>::version */

void __rustcall
<http::response::[4]::http::response::Builder>::version
          (long *param_1,long *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined4 local_78;
  undefined1 local_74;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  long local_20;
  long lStack_18;
  undefined2 local_10;
  
  lStack_28 = param_2[10];
  local_30 = param_2[9];
  lStack_18 = param_2[0xc];
  local_20 = param_2[0xb];
  local_10 = (undefined2)param_2[0xd];
  lStack_38 = param_2[8];
  local_40 = param_2[7];
  local_74 = *(undefined1 *)((long)param_2 + 0x6f);
  lStack_68 = param_2[2];
  local_70 = param_2[1];
  lStack_58 = param_2[4];
  local_60 = param_2[3];
  lStack_48 = param_2[6];
  local_50 = param_2[5];
  local_78 = *(undefined4 *)((long)param_2 + 0x6b);
  uVar1 = *(undefined1 *)((long)param_2 + 0x6a);
  if (*param_2 != -1) {
    lStack_28 = param_2[10];
    local_30 = param_2[9];
    lStack_18 = param_2[0xc];
    local_20 = param_2[0xb];
    local_10 = (undefined2)param_2[0xd];
    lStack_38 = param_2[8];
    local_40 = param_2[7];
    lStack_68 = param_2[2];
    local_70 = param_2[1];
    lStack_58 = param_2[4];
    local_60 = param_2[3];
    local_78 = *(undefined4 *)((long)param_2 + 0x6b);
    local_74 = *(undefined1 *)((long)param_2 + 0x6f);
    lStack_48 = param_2[6];
    local_50 = param_2[5];
    uVar1 = param_3;
  }
  *param_1 = *param_2;
  *(undefined1 *)((long)param_1 + 0x6a) = uVar1;
  param_1[8] = lStack_38;
  param_1[7] = local_40;
  param_1[10] = lStack_28;
  param_1[9] = local_30;
  param_1[0xc] = lStack_18;
  param_1[0xb] = local_20;
  param_1[2] = lStack_68;
  param_1[1] = local_70;
  *(undefined2 *)(param_1 + 0xd) = local_10;
  param_1[4] = lStack_58;
  param_1[3] = local_60;
  param_1[6] = lStack_48;
  param_1[5] = local_50;
  *(undefined1 *)((long)param_1 + 0x6f) = local_74;
  *(undefined4 *)((long)param_1 + 0x6b) = local_78;
  return;
}


// ===== 009706b0  <http::extensions::http::extensions::Extensions>::extend =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::extensions::http::extensions::Extensions>::extend */

void __rustcall
<http::extensions::http::extensions::Extensions>::extend(long *param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    if (*param_1 == 0) {
      *param_1 = (long)param_2;
      return;
    }
    uStack_38 = param_2[1];
    local_40 = *param_2;
    uStack_28 = param_2[3];
    uStack_30 = param_2[2];
                    /* try { // try from 009706dc to 009706e3 has its CatchHandler @ 00970718 */
    FUN_0096a604(*param_1,&local_40);
    free(param_2);
  }
  return;
}


// ===== 00970734  FUN_00970734 =====

void FUN_00970734(void)

{
  return;
}


// ===== 00970738  FUN_00970738 =====

void FUN_00970738(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00af2d20;
  param_1[1] = param_3;
  return;
}


// ===== 0097074c  FUN_0097074c =====

undefined8 FUN_0097074c(void)

{
  return 0;
}


// ===== 00970754  <http::extensions::IdHasher_as_core::hash::Hasher>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::extensions::IdHasher as core::hash::Hasher>::write */

void __rustcall <http::extensions::IdHasher_as_core::hash::Hasher>::write(void)

{
  undefined **local_20;
  code *pcStack_18;
  
  local_20 = &PTR_s_TypeId_calls_write_u64_00af2d78;
  pcStack_18 = FUN_00971e24;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ae57a,&local_20,&PTR_s__root__cargo_registry_src_index__00af2d88);
}


// ===== 0097078c  <http::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::error::Error as core::fmt::Debug>::fmt */

void __rustcall <http::error::Error_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  byte *local_30;
  undefined *puStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,"http::Error",0xb);
  local_30 = param_1 + 1;
  puStack_28 = (&PTR_DAT_00af3488)[*param_1];
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_48,&local_30,&DAT_00af30e8);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 009707f8  <http::extensions::Extensions_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::extensions::Extensions as core::fmt::Debug>::fmt */

void __rustcall
<http::extensions::Extensions_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct
            (auStack_20,param_2,"Extensions<unknown status code>",10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00970830  <http::status::StatusCode_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::status::StatusCode as core::fmt::Display>::fmt */

void __rustcall
<http::status::StatusCode_as_core::fmt::Display>::fmt(undefined2 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  char *local_50;
  undefined8 uStack_48;
  undefined2 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined2 local_4 [2];
  
  local_4[0] = *param_1;
  auVar2 = <http::status::http::status::StatusCode>::canonical_reason();
  pcVar1 = auVar2._0_8_;
  uStack_48 = 0x15;
  if (pcVar1 != (char *)0x0) {
    uStack_48 = auVar2._8_8_;
  }
  local_40 = local_4;
  local_50 = "<unknown status code>";
  if (pcVar1 != (char *)0x0) {
    local_50 = pcVar1;
  }
  puStack_38 = PTR_fmt_00b00e10;
  pcStack_28 = FUN_00971e24;
  local_30 = (undefined1 *)&local_50;
  core::fmt::write(*param_2,param_2[1],&DAT_002b3931,&local_40);
  return;
}


// ===== 009708b0  <http::version::Version_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::version::Version as core::fmt::Debug>::fmt */

void __rustcall <http::version::Version_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a1aa8,8);
      return;
    }
    if (bVar1 == 4) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"HTTP/3.0",8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("internal error: entered unreachable code",0x28,
               &PTR_s__root__cargo_registry_src_index__00af3108);
  }
  if (bVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a16d0,8);
    return;
  }
  if (bVar1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a1208,8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a1438,8);
  return;
}


// ===== 00970970  <http::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::error::Error as core::error::Error>::source */

void __rustcall <http::error::Error_as_core::error::Error>::source(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00970984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((&PTR_DAT_00af3488)[*param_1] + 0x30))(param_1 + 1);
  return;
}


// ===== 00970988  <http::request::Parts_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::request::Parts as core::fmt::Debug>::fmt */

void __rustcall <http::request::Parts_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Parts",5);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,"method",6,param_1 + 0xb8,&PTR_FUN_00af3120);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"uri",3,param_1 + 0x60,&PTR_FUN_00af3140);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"version",7,param_1 + 0xd8,&DAT_00af3160);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"headers",7,param_1,&PTR_FUN_00af3180);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00970a40  <http::response::Parts_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::response::Parts as core::fmt::Debug>::fmt */

void __rustcall <http::response::Parts_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Parts",5);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,"status",6,param_1 + 0x68,&DAT_00af31a0);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"version",7,param_1 + 0x6a,&DAT_00af3160);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"headers",7,param_1,&PTR_FUN_00af3180);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00970adc  <http::status::StatusCode_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::status::StatusCode as core::str::traits::FromStr>::from_str */

int __rustcall
<http::status::StatusCode_as_core::str::traits::FromStr>::from_str(char *param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == 3) {
    iVar1 = 0;
    if (((0xf6 < (byte)(*param_1 - 0x3aU)) && (((byte)param_1[1] - 0x30 & 0xff) < 10)) &&
       ((byte)(param_1[2] - 0x30U) < 10)) {
      iVar1 = (((byte)param_1[1] - 0x30) * 5 & 0x7f) * 2 + (uint)(byte)(*param_1 - 0x30) * 100 +
              (uint)(byte)(param_1[2] - 0x30);
    }
    return iVar1;
  }
  return 0;
}


// ===== 00970b50  FUN_00970b50 =====

void FUN_00970b50(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 != 0) {
    lVar2 = *param_2;
    lVar4 = param_2[3];
    lVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[3] = lVar4;
    param_1[2] = lVar3;
    return;
  }
  puVar1 = (&PTR_s_accept_00af3200)[*(byte *)(param_2 + 1)];
  param_1[2] = *(long *)(&DAT_0037ac18 + (ulong)*(byte *)(param_2 + 1) * 8);
  param_1[3] = 0;
  *param_1 = (long)&PTR_FUN_00af2d20;
  param_1[1] = (long)puVar1;
  return;
}


// ===== 00970b94  <http::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::error::Error as core::fmt::Display>::fmt */

void __rustcall <http::error::Error_as_core::fmt::Display>::fmt(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00970ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((&PTR_DAT_00af3488)[*param_1] + 0x20))(param_1 + 1);
  return;
}


// ===== 00970bac  <http::status::StatusCode_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::status::StatusCode as core::fmt::Debug>::fmt */

void __rustcall
<http::status::StatusCode_as_core::fmt::Debug>::fmt(undefined2 *param_1,long param_2)

{
  undefined2 local_14 [2];
  
  local_14[0] = *param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u16_as_core::fmt::LowerHex>::fmt(local_14);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u16_as_core::fmt::Display>::fmt();
    return;
  }
  <u16_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00970c00  <http::status::InvalidStatusCode_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::status::InvalidStatusCode as core::fmt::Debug>::fmt */

void __rustcall
<http::status::InvalidStatusCode_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"InvalidStatusCode",0x11);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00970c38  <http::status::InvalidStatusCode_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::status::InvalidStatusCode as core::fmt::Display>::fmt */

void __rustcall
<http::status::InvalidStatusCode_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"invalid status code",0x13);
  return;
}


// ===== 00970c4c  FUN_00970c4c =====

void FUN_00970c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"InvalidUri",10,&local_18,&DAT_00af31c0);
  return;
}


// ===== 00970c8c  FUN_00970c8c =====

void FUN_00970c8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"InvalidUriParts",0xf,&local_18,&DAT_00af31e0);
  return;
}


// ===== 00970ccc  FUN_00970ccc =====

undefined1  [16] FUN_00970ccc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00970cdc  FUN_00970cdc =====

undefined8 FUN_00970cdc(void)

{
  return 0;
}


// ===== 00970ce4  FUN_00970ce4 =====

void FUN_00970ce4(void)

{
  return;
}


// ===== 00970ce8  FUN_00970ce8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00970ce8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f50;
  param_1[1] = _UNK_002a0f58;
  *param_1 = uVar1;
  return;
}


// ===== 00970cfc  FUN_00970cfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00970cfc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f560;
  param_1[1] = _UNK_0029f568;
  *param_1 = uVar1;
  return;
}


// ===== 00970d10  FUN_00970d10 =====

undefined1  [16] FUN_00970d10(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00970d20  FUN_00970d20 =====

undefined8 FUN_00970d20(void)

{
  return 0;
}


// ===== 00970d28  FUN_00970d28 =====

void FUN_00970d28(void)

{
  return;
}


// ===== 00970d2c  FUN_00970d2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00970d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0540;
  param_1[1] = _UNK_002a0548;
  *param_1 = uVar1;
  return;
}


// ===== 00970d40  FUN_00970d40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00970d40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0370;
  param_1[1] = _UNK_002a0378;
  *param_1 = uVar1;
  return;
}


// ===== 00970d54  FUN_00970d54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00970d54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f7d0;
  param_1[1] = _UNK_0029f7d8;
  *param_1 = uVar1;
  return;
}


// ===== 00970d68  FUN_00970d68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00970d68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a1090;
  param_1[1] = _UNK_002a1098;
  *param_1 = uVar1;
  return;
}


// ===== 00970d7c  FUN_00970d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00970d7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f630;
  param_1[1] = _UNK_0029f638;
  *param_1 = uVar1;
  return;
}


// ===== 00970d90  FUN_00970d90 =====

void FUN_00970d90(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 00970db0 to 00970db7 has its CatchHandler @ 00970dd4 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00970dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 00970df8  <http::method::http::method::Method>::from_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::method::http::method::Method>::from_bytes */

void __rustcall
<http::method::http::method::Method>::from_bytes(undefined1 *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  void *__ptr;
  ulong uVar2;
  char local_54;
  undefined8 local_53;
  undefined8 uStack_4b;
  
  if ((long)param_3 < 5) {
    if (param_3 == 0) goto LAB_00971284;
    if (param_3 == 3) {
      if (*param_2 == 'G') {
        if ((param_2[1] == 'E') && (param_2[2] == 'T')) {
          *param_1 = 1;
          return;
        }
      }
      else if (((*param_2 == 'P') && (param_2[1] == 'U')) && (param_2[2] == 'T')) {
        *param_1 = 3;
        return;
      }
      FUN_009700a0(&local_54,param_2,3);
    }
    else if (param_3 == 4) {
      if (*param_2 == 'H') {
        if (((param_2[1] == 'E') && (param_2[2] == 'A')) && (param_2[3] == 'D')) {
          *param_1 = 5;
          return;
        }
      }
      else if (((*param_2 == 'P') && (param_2[1] == 'O')) &&
              ((param_2[2] == 'S' && (param_2[3] == 'T')))) {
        *param_1 = 2;
        return;
      }
      FUN_009700a0(&local_54,param_2,4);
    }
    else {
LAB_00970f6c:
      if (0xf < param_3) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __ptr = (void *)FUN_004b263c(param_3,1);
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,param_3);
        }
        uVar2 = 0;
        while (""[(byte)param_2[uVar2]] != '\0') {
          uVar1 = uVar2 + 1;
          *(char *)((long)__ptr + uVar2) = ""[(byte)param_2[uVar2]];
          uVar2 = uVar1;
          if (param_3 == uVar1) {
            *(void **)(param_1 + 8) = __ptr;
            *(ulong *)(param_1 + 0x10) = param_3;
            *param_1 = 10;
            return;
          }
        }
        free(__ptr);
        goto LAB_00971284;
      }
      FUN_009700a0(&local_54);
    }
  }
  else {
    if (param_3 == 5) {
      if (*param_2 == 'P') {
        if ((((param_2[1] == 'A') && (param_2[2] == 'T')) && (param_2[3] == 'C')) &&
           (param_2[4] == 'H')) {
          *param_1 = 8;
          return;
        }
      }
      else if (((*param_2 == 'T') && (param_2[1] == 'R')) &&
              ((param_2[2] == 'A' && ((param_2[3] == 'C' && (param_2[4] == 'E')))))) {
        *param_1 = 6;
        return;
      }
      FUN_009700a0(&local_54,param_2,5);
      if (local_54 == '\x01') goto LAB_00971284;
      goto LAB_00971250;
    }
    if (param_3 == 6) {
      if ((((*param_2 == 'D') && (param_2[1] == 'E')) && (param_2[2] == 'L')) &&
         (((param_2[3] == 'E' && (param_2[4] == 'T')) && (param_2[5] == 'E')))) {
        *param_1 = 4;
        return;
      }
      FUN_009700a0(&local_54,param_2,6);
    }
    else {
      if (param_3 != 7) goto LAB_00970f6c;
      if (*param_2 == 'C') {
        if (((param_2[1] == 'O') && (param_2[2] == 'N')) &&
           ((param_2[3] == 'N' &&
            (((param_2[4] == 'E' && (param_2[5] == 'C')) && (param_2[6] == 'T')))))) {
          *param_1 = 7;
          return;
        }
      }
      else if (((*param_2 == 'O') && (param_2[1] == 'P')) &&
              ((((param_2[2] == 'T' && ((param_2[3] == 'I' && (param_2[4] == 'O')))) &&
                (param_2[5] == 'N')) && (param_2[6] == 'S')))) {
        *param_1 = 0;
        return;
      }
      FUN_009700a0(&local_54,param_2,7);
    }
  }
  if (local_54 != '\x01') {
LAB_00971250:
    *(undefined8 *)(param_1 + 9) = uStack_4b;
    *(undefined8 *)(param_1 + 1) = local_53;
    *param_1 = 9;
    return;
  }
LAB_00971284:
  *param_1 = 0xff;
  return;
}


// ===== 009712ac  <http::uri::path::http::uri::path::PathAndQuery>::from_shared =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::path::http::uri::path::PathAndQuery>::from_shared */

void __rustcall
<http::uri::path::http::uri::path::PathAndQuery>::from_shared(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  byte *pbVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 uVar14;
  ulong uVar15;
  ulong uVar16;
  long local_80;
  ulong uStack_78;
  ulong local_70;
  long local_68 [2];
  long local_58 [3];
  
  pbVar6 = (byte *)param_2[1];
  uVar16 = param_2[2];
  uVar11 = (ulong)pbVar6 >> 8;
  if (uVar16 != 0) {
    bVar3 = false;
    pbVar1 = pbVar6 + uVar16;
    pbVar8 = pbVar6;
    uVar15 = 0;
    do {
      while( true ) {
        pbVar9 = pbVar8 + 1;
        bVar2 = *pbVar8;
        uVar12 = (uint)bVar2;
        uVar13 = (uint)bVar2;
        if (uVar12 < 0x3f) break;
        if (3 < bVar2 - 0x7b) {
          if (bVar2 != 0x3f) goto LAB_0097133c;
          if ((((uint)uVar15 ^ 0xffffffff) & 0xffff) == 0) {
            uVar15 = 0xffff;
            goto LAB_00971504;
          }
          if (pbVar9 == pbVar1) goto LAB_00971504;
          lVar7 = 1;
          goto LAB_009714bc;
        }
LAB_009712f4:
        pbVar8 = pbVar9;
        uVar15 = uVar15 + 1;
        if (pbVar9 == pbVar1) {
          uVar14 = 0xffff;
          if (!bVar3) goto LAB_009713d0;
          goto LAB_00971384;
        }
      }
      if ((uVar12 - 0x21 < 2) || (uVar12 == 0x3d)) goto LAB_009712f4;
      if (uVar13 == 0x23) {
        bVar4 = uVar16 <= uVar15;
        uVar10 = uVar15;
        uVar15 = 0xffff;
        if (bVar4) goto LAB_00971504;
        goto LAB_0097145c;
      }
LAB_0097133c:
      if (((uVar13 - 0x61 < 0x1a) || (uVar13 - 0x24 < 0x18)) || ((uVar13 & 0xe0) == 0x40))
      goto LAB_009712f4;
      if (uVar13 < 0x7f) goto LAB_00971574;
      bVar3 = true;
      pbVar8 = pbVar9;
      uVar15 = uVar15 + 1;
    } while (pbVar9 != pbVar1);
    uVar14 = 0xffff;
    goto LAB_00971384;
  }
  uVar14 = 0xffff;
  goto LAB_009713d0;
LAB_0097145c:
  uVar14 = (undefined2)uVar15;
  if (((undefined *)*param_2 == PTR_PROMOTABLE_EVEN_VTABLE_00b01128) ||
     ((undefined *)*param_2 == PTR_PROMOTABLE_ODD_VTABLE_00b01130)) {
                    /* try { // try from 0097150c to 00971533 has its CatchHandler @ 009715a0 */
    <bytes::bytes::bytes::bytes::Bytes>::split_off(&local_80,param_2,uVar10);
    (**(code **)(local_80 + 0x20))(local_68,uStack_78,local_70);
    if (bVar3) goto LAB_00971384;
    pbVar6 = (byte *)(ulong)*(byte *)(param_2 + 1);
    uVar11 = (ulong)*(uint7 *)((long)param_2 + 9);
    uVar16 = param_2[2];
  }
  else {
    param_2[2] = uVar10;
    uVar16 = uVar10;
    if (bVar3) goto LAB_00971384;
  }
  goto LAB_009713d0;
LAB_009714bc:
  do {
    bVar2 = pbVar8[lVar7];
    if ((bVar2 != 0x21) && (bVar2 != 0x3d)) {
      uVar12 = (uint)bVar2;
      if (uVar12 == 0x23) {
        uVar10 = uVar15 + lVar7;
        if (uVar10 < uVar16) goto LAB_0097145c;
        break;
      }
      if ((0x17 < uVar12 - 0x24) && (0x3f < uVar12 - 0x3f)) {
        if (uVar12 < 0x7f) {
LAB_00971574:
          lVar7 = *param_2;
          *(undefined1 *)(param_1 + 1) = 0;
          UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x20);
          *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x0097159c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_2 + 3,pbVar6,uVar16);
          return;
        }
        bVar3 = true;
      }
    }
    lVar7 = lVar7 + 1;
  } while (pbVar8 + lVar7 != pbVar1);
LAB_00971504:
  uVar14 = (undefined2)uVar15;
  if (bVar3) {
LAB_00971384:
    uVar15 = param_2[1];
    local_80 = *param_2;
    local_68[0] = param_2[3];
    uVar16 = param_2[2];
                    /* try { // try from 00971390 to 0097139f has its CatchHandler @ 009715c0 */
    uStack_78 = uVar15;
    local_70 = uVar16;
    core::str::converts::from_utf8(local_58,uVar15,uVar16);
    if (local_58[0] == 1) {
      (**(code **)(local_80 + 0x20))(local_68,uVar15,uVar16);
LAB_0097142c:
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return;
    }
    if (local_80 == 0) goto LAB_0097142c;
    uVar11 = uVar15 >> 8;
    uVar5 = (undefined1)uVar15;
    goto LAB_009713d8;
  }
LAB_009713d0:
  uVar5 = SUB81(pbVar6,0);
  local_80 = *param_2;
  local_68[0] = param_2[3];
LAB_009713d8:
  *param_1 = local_80;
  *(int *)((long)param_1 + 9) = (int)uVar11;
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(char *)((long)param_1 + 0xf) = (char)(uVar11 >> 0x30);
  *(short *)((long)param_1 + 0xd) = (short)(uVar11 >> 0x20);
  param_1[2] = uVar16;
  param_1[3] = local_68[0];
  *(undefined2 *)(param_1 + 4) = uVar14;
  return;
}


// ===== 009715ec  <http::uri::builder::http::uri::builder::Builder>::build =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::builder::http::uri::builder::Builder>::build */

void __rustcall
<http::uri::builder::http::uri::builder::Builder>::build(undefined8 *param_1,char *param_2)

{
  char local_d0;
  char local_cf;
  char local_ce;
  undefined8 local_cd;
  undefined8 uStack_c5;
  undefined8 local_bd;
  undefined8 uStack_b5;
  undefined8 local_ad;
  undefined8 uStack_a5;
  undefined8 local_9d;
  undefined8 uStack_95;
  undefined8 local_8d;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined5 uStack_7d;
  char local_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_d0 = *param_2;
  local_cf = param_2[1];
  local_ce = param_2[2];
  if (local_d0 == -2) {
    *(char *)((long)param_1 + 1) = local_cf;
    *(char *)((long)param_1 + 2) = local_ce;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  uStack_a5 = *(undefined8 *)(param_2 + 0x2b);
  local_ad = *(undefined8 *)(param_2 + 0x23);
  uStack_95 = *(undefined8 *)(param_2 + 0x3b);
  local_9d = *(undefined8 *)(param_2 + 0x33);
  local_8d = *(undefined8 *)(param_2 + 0x43);
  uStack_85 = (undefined5)*(undefined8 *)(param_2 + 0x4b);
  uStack_c5 = *(undefined8 *)(param_2 + 0xb);
  local_cd = *(undefined8 *)(param_2 + 3);
  uStack_80 = (undefined3)*(undefined8 *)(param_2 + 0x50);
  uStack_7d = (undefined5)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x18);
  uStack_b5 = *(undefined8 *)(param_2 + 0x1b);
  local_bd = *(undefined8 *)(param_2 + 0x13);
  <http::uri::http::uri::Uri>::from_parts(&local_78,&local_d0);
  if (local_78 != -1) {
    param_1[10] = local_28;
    param_1[5] = uStack_50;
    param_1[4] = local_58;
    param_1[7] = uStack_40;
    param_1[6] = local_48;
    param_1[9] = uStack_30;
    param_1[8] = uStack_38;
    param_1[1] = uStack_70;
    *param_1 = CONCAT62(uStack_76,CONCAT11(uStack_77,local_78));
    param_1[3] = uStack_60;
    param_1[2] = local_68;
    return;
  }
  *(undefined2 *)param_1 = 0x3ff;
  *(undefined1 *)((long)param_1 + 2) = uStack_77;
  return;
}


// ===== 009716e0  <http::header::map::http::header::map::HeaderMap>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::map::http::header::map::HeaderMap>::new */

void __rustcall <http::header::map::http::header::map::HeaderMap>::new(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[7] = 8;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  return;
}


// ===== 00971704  <http::header::map::[12]::http::header::map::Danger>::set_red =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::map::[12]::http::header::map::Danger>::set_red */

void __rustcall <http::header::map::[12]::http::header::map::Danger>::set_red(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar1 = (long *)pthread_getspecific((pthread_key_t)uVar3);
  }
  else {
    plVar1 = (long *)pthread_getspecific((pthread_key_t)uVar3);
  }
  if (plVar1 < (long *)0x2) {
    plVar1 = (long *)FUN_0096f8e4(uVar3 & 0xffffffff,plVar1,0);
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af34c0);
  }
  lVar2 = *plVar1;
  lVar5 = plVar1[1];
  lVar4 = *plVar1;
  *param_1 = 2;
  *plVar1 = lVar2 + 1;
  param_1[2] = lVar5;
  param_1[1] = lVar4;
  return;
}


// ===== 009717a4  FUN_009717a4 =====

void FUN_009717a4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  ulong local_68;
  ulong *local_60;
  undefined *puStack_58;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[7] = 8;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 2;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    auVar4._8_8_ = 2;
    auVar4._0_8_ = 0xaaaaaaaaaaaaaaab;
    uVar1 = SUB168(auVar3 * auVar4,8) >> 1;
    local_68 = param_2;
    if (CARRY8(param_2,param_2 / 3)) {
      local_60 = &local_68;
      puStack_58 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002ba43f,&local_60,&PTR_s__root__cargo_registry_src_index__00af3518);
    }
    uVar2 = 0;
    if (1 < uVar1) {
      uVar2 = 0xffffffffffffffff >> (LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (uVar2 == 0xffffffffffffffff) {
      *param_1 = 0xffffffffffffffff;
    }
    else {
      uVar1 = uVar2 + 1;
      if (uVar1 < 0x8001) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar5 = (undefined4 *)FUN_004b25a4(uVar1 * 4,2);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(2,uVar1 * 4);
        }
        puVar8 = puVar5;
        if (1 < uVar1) {
          if (uVar2 < 0x10) {
            uVar9 = 1;
            puVar7 = puVar5;
          }
          else {
            uVar12 = uVar2 & 0xfffffffffffffff0;
            puVar7 = puVar5 + uVar12;
            uVar9 = uVar12 | 1;
            puVar10 = (undefined8 *)(puVar5 + 8);
            do {
              uVar12 = uVar12 - 0x10;
              puVar10[-3] = 0xffff0000ffff;
              puVar10[-4] = 0xffff0000ffff;
              puVar10[-1] = 0xffff0000ffff;
              puVar10[-2] = 0xffff0000ffff;
              puVar10[1] = 0xffff0000ffff;
              *puVar10 = 0xffff0000ffff;
              puVar10[3] = 0xffff0000ffff;
              puVar10[2] = 0xffff0000ffff;
              puVar10 = puVar10 + 8;
            } while (uVar12 != 0);
          }
          lVar6 = (uVar2 - uVar9) + 1;
          do {
            lVar6 = lVar6 + -1;
            puVar8 = puVar7 + 1;
            *puVar7 = 0xffff;
            puVar7 = puVar8;
          } while (lVar6 != 0);
        }
        uVar12 = uVar1 - (uVar1 >> 2);
        *puVar8 = 0xffff;
        if (0x13b13b13b13b13b < uVar12) {
          uVar11 = 0;
LAB_009718d8:
                    /* try { // try from 009718d8 to 009718e3 has its CatchHandler @ 00971988 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar11,unaff_x22);
        }
        if (uVar1 == 0) {
          lVar6 = 8;
        }
        else {
          unaff_x22 = uVar12 * 0x68;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar11 = 8;
          lVar6 = FUN_004b25a4(unaff_x22,8);
          if (lVar6 == 0) goto LAB_009718d8;
        }
        *param_1 = 0;
        param_1[3] = uVar12;
        param_1[4] = lVar6;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 8;
        param_1[8] = 0;
        param_1[9] = puVar5;
        param_1[10] = uVar1;
        *(short *)(param_1 + 0xb) = (short)uVar2;
      }
      else {
        *param_1 = 0xffffffffffffffff;
      }
    }
  }
  return;
}


// ===== 009719a4  FUN_009719a4 =====

void FUN_009719a4(undefined2 *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (param_3 < 7) {
    if (param_3 < 4) goto LAB_00971af4;
  }
  else {
    uVar2 = 0x20;
    uVar4 = uVar2;
    if (0x19 < *param_2 - 0x41) {
      uVar4 = 0;
    }
    if ((uVar4 | *param_2) == 0x68) {
      if (0x19 < param_2[1] - 0x41) {
        uVar2 = 0;
      }
      if ((uVar2 | param_2[1]) == 0x74) {
        uVar2 = 0x20;
        uVar4 = uVar2;
        if (0x19 < param_2[2] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | param_2[2]) == 0x74) {
          if (0x19 < param_2[3] - 0x41) {
            uVar2 = 0;
          }
          if ((uVar2 | param_2[3]) == 0x70) {
            uVar2 = 0x20;
            uVar4 = uVar2;
            if (0x19 < param_2[4] - 0x41) {
              uVar4 = 0;
            }
            if ((uVar4 | param_2[4]) == 0x3a) {
              if (0x19 < param_2[5] - 0x41) {
                uVar2 = 0;
              }
              if ((uVar2 | param_2[5]) == 0x2f) {
                uVar4 = 0x20;
                if (0x19 < param_2[6] - 0x41) {
                  uVar4 = 0;
                }
                if ((uVar4 | param_2[6]) == 0x2f) {
                  *param_1 = 1;
                  return;
                }
              }
            }
          }
          if (param_3 != 7) {
            uVar2 = 0x20;
            uVar4 = uVar2;
            if (0x19 < param_2[3] - 0x41) {
              uVar4 = 0;
            }
            if ((uVar4 | param_2[3]) == 0x70) {
              if (0x19 < param_2[4] - 0x41) {
                uVar2 = 0;
              }
              if ((uVar2 | param_2[4]) == 0x73) {
                uVar2 = 0x20;
                uVar4 = uVar2;
                if (0x19 < param_2[5] - 0x41) {
                  uVar4 = 0;
                }
                if ((uVar4 | param_2[5]) == 0x3a) {
                  if (0x19 < param_2[6] - 0x41) {
                    uVar2 = 0;
                  }
                  if ((uVar2 | param_2[6]) == 0x2f) {
                    uVar4 = 0x20;
                    if (0x19 < param_2[7] - 0x41) {
                      uVar4 = 0;
                    }
                    if ((uVar4 | param_2[7]) == 0x2f) {
                      *param_1 = 0x101;
                      return;
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
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if ((param_3 == uVar3) || ((&DAT_0037aeab)[param_2[uVar3]] == '\0')) goto LAB_00971af4;
    uVar1 = uVar3 + 1;
  } while ((&DAT_0037aeab)[param_2[uVar3]] != ':');
  if ((uVar3 + 3 <= param_3) && (*(short *)(param_2 + uVar3 + 1) == 0x2f2f)) {
    if (0x40 < uVar3) {
      *param_1 = 0xaff;
      return;
    }
    *(ulong *)(param_1 + 4) = uVar3;
    *(undefined1 *)param_1 = 2;
    return;
  }
LAB_00971af4:
  *(undefined1 *)param_1 = 0;
  return;
}


// ===== 00971bb8  <http::uri::builder::Builder_as_core::convert::From<http::uri::Uri>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::builder::Builder as core::convert::From<http::uri::Uri>>::from */

void __rustcall <http::uri::builder::Builder_as_core::convert::From<http::uri::Uri>>::from(void)

{
  (*(code *)PTR_from_00b046f8)();
  return;
}


// ===== 00971bbc  <http::header::map::MaxSizeReached_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::map::MaxSizeReached as core::fmt::Debug>::fmt */

void __rustcall
<http::header::map::MaxSizeReached_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"MaxSizeReached",0xe);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00971bf4  <http::header::map::MaxSizeReached_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::header::map::MaxSizeReached as core::fmt::Display>::fmt */

void __rustcall
<http::header::map::MaxSizeReached_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"max size reached",0x10);
  return;
}


// ===== 00971c08  <http::uri::scheme::Scheme_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::scheme::Scheme as core::str::traits::FromStr>::from_str */

void __rustcall
<http::uri::scheme::Scheme_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,char *param_2,ulong param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 5) {
    if ((((*param_2 == 'h') && (param_2[1] == 't')) && (param_2[2] == 't')) &&
       ((param_2[3] == 'p' && (param_2[4] == 's')))) {
      uVar3 = 1;
LAB_00971ca0:
      param_1[1] = uVar3;
      *param_1 = 1;
      return;
    }
  }
  else if (param_3 == 4) {
    if (((*param_2 == 'h') && (param_2[1] == 't')) && ((param_2[2] == 't' && (param_2[3] == 'p'))))
    {
      uVar3 = 0;
      goto LAB_00971ca0;
    }
  }
  else if (0x40 < param_3) {
    uVar3 = 10;
    goto LAB_00971cfc;
  }
  uVar4 = 0;
  do {
    if (param_3 == uVar4) {
      <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_60);
      uStack_38 = uStack_58;
      local_40 = local_60;
      uStack_28 = uStack_48;
      uStack_30 = uStack_50;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar2 = (undefined8 *)FUN_004b25a4(0x20,8);
      if (puVar2 != (undefined8 *)0x0) {
        *param_1 = 2;
        *(undefined8 **)(param_1 + 8) = puVar2;
        puVar2[1] = uStack_58;
        *puVar2 = local_60;
        puVar2[3] = uStack_48;
        puVar2[2] = uStack_50;
        return;
      }
                    /* try { // try from 00971d64 to 00971d6f has its CatchHandler @ 00971d74 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    pbVar1 = (byte *)(param_2 + uVar4);
  } while (((&DAT_0037aeab)[*pbVar1] != ':') &&
          (uVar4 = uVar4 + 1, (&DAT_0037aeab)[*pbVar1] != '\0'));
  uVar3 = 1;
LAB_00971cfc:
  param_1[1] = uVar3;
  *param_1 = 0xff;
  return;
}


// ===== 00971d9c  FUN_00971d9c =====

void FUN_00971d9c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00971da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 00971da8  FUN_00971da8 =====

void FUN_00971da8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\x01') {
    uVar1 = 4;
    if (pcVar3[1] != '\0') {
      uVar1 = 5;
    }
    pcVar2 = "httpsOPTIONSGETPUTDELETETRACECONNECTPATCH/";
    if (pcVar3[1] == '\0') {
      pcVar2 = "http\x03";
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar2,uVar1);
    return;
  }
  if (*pcVar3 == '\x02') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str
              (param_2,*(undefined8 *)(*(long *)(pcVar3 + 8) + 8),
               *(undefined8 *)(*(long *)(pcVar3 + 8) + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable codehttpsOPTIONSGETPUTDELETETRACECONNECTPATCH/",
             0x28,&PTR_s__root__cargo_registry_src_index__00af3530);
}


// ===== 00971e24  FUN_00971e24 =====

void FUN_00971e24(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00971e38  <alloc[c1f8e832b0d782c7]::boxed::Box<dyn_http[b87e90c26fe47eb4]::extensions::AnyClone+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>as_core[bcece726f298455b]::clone::Clone>::clone =====

/* <alloc[c1f8e832b0d782c7]::boxed::Box<dyn http[b87e90c26fe47eb4]::extensions::AnyClone +
   core[bcece726f298455b]::marker::Sync + core[bcece726f298455b]::marker::Send> as
   core[bcece726f298455b]::clone::Clone>::clone */

void <alloc[c1f8e832b0d782c7]::boxed::Box<dyn_http[b87e90c26fe47eb4]::extensions::AnyClone+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>as_core[bcece726f298455b]::clone::Clone>
     ::clone(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00971e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 00971e44  <http::uri::scheme::Scheme_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::scheme::Scheme as core::fmt::Debug>::fmt */

void __rustcall
<http::uri::scheme::Scheme_as_core::fmt::Debug>::fmt(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (*param_1 == '\x01') {
    uVar1 = 4;
    if (param_1[1] != '\0') {
      uVar1 = 5;
    }
    pcVar2 = "httpsOPTIONSGETPUTDELETETRACECONNECTPATCH/";
    if (param_1[1] == '\0') {
      pcVar2 = "http\x03";
    }
    <str_as_core::fmt::Debug>::fmt(pcVar2,uVar1,param_2);
    return;
  }
  if (*param_1 == '\x02') {
    <str_as_core::fmt::Debug>::fmt
              (*(undefined8 *)(*(long *)(param_1 + 8) + 8),
               *(undefined8 *)(*(long *)(param_1 + 8) + 0x10),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable codehttpsOPTIONSGETPUTDELETETRACECONNECTPATCH/",
             0x28,&PTR_s__root__cargo_registry_src_index__00af3530);
}


// ===== 00971eb0  <http::uri::scheme::Scheme_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::scheme::Scheme as core::fmt::Display>::fmt */

void __rustcall
<http::uri::scheme::Scheme_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (*param_1 == '\x01') {
    uVar1 = 4;
    if (param_1[1] != '\0') {
      uVar1 = 5;
    }
    pcVar2 = "httpsOPTIONSGETPUTDELETETRACECONNECTPATCH/";
    if (param_1[1] == '\0') {
      pcVar2 = "http\x03";
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar2,uVar1);
    return;
  }
  if (*param_1 == '\x02') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str
              (param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 8),
               *(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable codehttpsOPTIONSGETPUTDELETETRACECONNECTPATCH/",
             0x28,&PTR_s__root__cargo_registry_src_index__00af3530);
}


// ===== 00971f28  <http::uri::path::PathAndQuery_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::path::PathAndQuery as core::fmt::Debug>::fmt */

void __rustcall
<http::uri::path::PathAndQuery_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *local_30;
  long lStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  lStack_28 = *(long *)(param_1 + 0x10);
  if (lStack_28 != 0) {
    local_20 = (undefined1 *)&local_30;
    local_30 = *(char **)(param_1 + 8);
    if ((*local_30 == '*') || (*local_30 == '/')) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      puVar3 = &DAT_002ab692;
    }
    else {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      puVar3 = &DAT_002b0260;
    }
    pcStack_18 = FUN_00971e24;
    core::fmt::write(uVar1,uVar2,puVar3,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00971f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"/",1);
  return;
}


// ===== 00971fb0  <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::scheme::Scheme as core::cmp::PartialEq>::eq */

bool __rustcall <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(char *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  if (*param_1 == '\x01') {
    cVar4 = *param_2;
    if (cVar4 == '\x01') {
      if ((param_1[1] & 1U) == 0) {
        if ((param_2[1] & 1U) != 0) {
          return false;
        }
        return true;
      }
      if ((param_2[1] & 1U) == 0) {
        return false;
      }
      return true;
    }
  }
  else {
    if (*param_1 != '\x02') goto LAB_00972084;
    cVar4 = *param_2;
    if (cVar4 == '\x02') {
      lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if (lVar6 != *(long *)(*(long *)(param_2 + 8) + 0x10)) {
        return false;
      }
      pbVar7 = *(byte **)(*(long *)(param_2 + 8) + 8);
      pbVar8 = *(byte **)(*(long *)(param_1 + 8) + 8);
      do {
        bVar5 = lVar6 == 0;
        if (lVar6 == 0) {
          return bVar5;
        }
        bVar2 = *pbVar8;
        lVar6 = lVar6 + -1;
        bVar3 = *pbVar7;
        uVar9 = 0x20;
        uVar1 = uVar9;
        if (0x19 < bVar2 - 0x41) {
          uVar1 = 0;
        }
        if (0x19 < bVar3 - 0x41) {
          uVar9 = 0;
        }
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while ((uVar1 | bVar2) == (uVar9 | bVar3));
      return bVar5;
    }
  }
  if (cVar4 != '\0') {
    return false;
  }
LAB_00972084:
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable codehttpsOPTIONSGETPUTDELETETRACECONNECTPATCH/",
             0x28,&PTR_s__root__cargo_registry_src_index__00af3548);
}


// ===== 0097209c  <http::method::Method_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::method::Method as core::fmt::Debug>::fmt */

void __rustcall <http::method::Method_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x009720c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_009720c4 + (ulong)(byte)(&DAT_0037aea0)[*param_1] * 4))
            ("OPTIONSGETPUTDELETETRACECONNECTPATCH/",param_1,param_2,7);
  return;
}


// ===== 009721b0  FUN_009721b0 =====

void FUN_009721b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,param_3,0xf,&PTR_s__root__cargo_registry_src_index__00af2d08);
}


// ===== 009721d0  <http::uri::path::PathAndQuery_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::path::PathAndQuery as core::fmt::Display>::fmt */

void __rustcall
<http::uri::path::PathAndQuery_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *local_30;
  long lStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  lStack_28 = *(long *)(param_1 + 0x10);
  if (lStack_28 != 0) {
    local_20 = (undefined1 *)&local_30;
    local_30 = *(char **)(param_1 + 8);
    if ((*local_30 == '*') || (*local_30 == '/')) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      puVar3 = &DAT_002ab692;
    }
    else {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      puVar3 = &DAT_002b0260;
    }
    pcStack_18 = FUN_00971e24;
    core::fmt::write(uVar1,uVar2,puVar3,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00972220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"/",1);
  return;
}


// ===== 00972258  <http::uri::scheme::Scheme_as_core::cmp::PartialEq<str>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::uri::scheme::Scheme as core::cmp::PartialEq<str>>::eq */

bool __rustcall
<http::uri::scheme::Scheme_as_core::cmp::PartialEq<str>>::eq
          (char *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  
  if (*param_1 == '\x01') {
    pbVar6 = (byte *)&DAT_002bd0ac;
    lVar2 = 4;
    if (param_1[1] != '\0') {
      lVar2 = 5;
      pbVar6 = (byte *)0x37afe1;
    }
  }
  else {
    if (*param_1 != '\x02') {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable codehttpsOPTIONSGETPUTDELETETRACECONNECTPATCH/"
                 ,0x28,&PTR_s__root__cargo_registry_src_index__00af3530);
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    pbVar6 = *(byte **)(*(long *)(param_1 + 8) + 8);
  }
  if (lVar2 == param_3) {
    do {
      bVar5 = param_3 == 0;
      if (param_3 == 0) {
        return bVar5;
      }
      bVar3 = *pbVar6;
      param_3 = param_3 + -1;
      bVar4 = *param_2;
      uVar7 = 0x20;
      uVar1 = uVar7;
      if (0x19 < bVar3 - 0x41) {
        uVar1 = 0;
      }
      if (0x19 < bVar4 - 0x41) {
        uVar7 = 0;
      }
      param_2 = param_2 + 1;
      pbVar6 = pbVar6 + 1;
    } while ((uVar1 | bVar3) == (uVar7 | bVar4));
    return bVar5;
  }
  return false;
}


// ===== 00972320  <alloc::string::String_as_core::cmp::PartialEq<http::uri::authority::Authority>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as core::cmp::PartialEq<http::uri::authority::Authority>>::eq */

bool __rustcall
<alloc::string::String_as_core::cmp::PartialEq<http::uri::authority::Authority>>::eq
          (long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  pbVar6 = *(byte **)(param_2 + 8);
  pbVar7 = *(byte **)(param_1 + 8);
  do {
    bVar4 = lVar5 == 0;
    if (lVar5 == 0) {
      return bVar4;
    }
    bVar2 = *pbVar7;
    lVar5 = lVar5 + -1;
    bVar3 = *pbVar6;
    uVar8 = 0x20;
    uVar1 = uVar8;
    if (0x19 < bVar2 - 0x41) {
      uVar1 = 0;
    }
    if (0x19 < bVar3 - 0x41) {
      uVar8 = 0;
    }
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while ((uVar1 | bVar2) == (uVar8 | bVar3));
  return bVar4;
}


// ===== 00972388  <str_as_core::cmp::PartialEq<http::uri::scheme::Scheme>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as core::cmp::PartialEq<http::uri::scheme::Scheme>>::eq */

bool __rustcall
<str_as_core::cmp::PartialEq<http::uri::scheme::Scheme>>::eq
          (byte *param_1,long param_2,char *param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  
  if (*param_3 == '\x01') {
    lVar2 = 4;
    if (param_3[1] != '\0') {
      lVar2 = 5;
    }
    pbVar6 = (byte *)0x37afe1;
    if (param_3[1] == '\0') {
      pbVar6 = (byte *)&DAT_002bd0ac;
    }
  }
  else {
    if (*param_3 != '\x02') {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable codehttpsOPTIONSGETPUTDELETETRACECONNECTPATCH/"
                 ,0x28,&PTR_s__root__cargo_registry_src_index__00af3530);
    }
    lVar2 = *(long *)(*(long *)(param_3 + 8) + 0x10);
    pbVar6 = *(byte **)(*(long *)(param_3 + 8) + 8);
  }
  if (lVar2 == param_2) {
    do {
      bVar5 = param_2 == 0;
      if (param_2 == 0) {
        return bVar5;
      }
      bVar3 = *pbVar6;
      param_2 = param_2 + -1;
      bVar4 = *param_1;
      uVar7 = 0x20;
      uVar1 = uVar7;
      if (0x19 < bVar3 - 0x41) {
        uVar1 = 0;
      }
      if (0x19 < bVar4 - 0x41) {
        uVar7 = 0;
      }
      param_1 = param_1 + 1;
      pbVar6 = pbVar6 + 1;
    } while ((uVar1 | bVar3) == (uVar7 | bVar4));
    return bVar5;
  }
  return false;
}


// ===== 00972458  FUN_00972458 =====

void FUN_00972458(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong unaff_x24;
  long lVar8;
  undefined1 auStack_80 [16];
  long *local_70;
  long *local_68;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_80,param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x38);
  uVar4 = *(ulong *)(param_1 + 0x40);
  uVar7 = 0;
  lVar8 = 2;
  if (uVar3 != 0) {
    lVar8 = 0;
  }
  do {
    if (lVar8 == 2) {
      uVar7 = uVar7 + 1;
      if (uVar3 <= uVar7) {
        <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_80);
        return;
      }
      plVar5 = (long *)(lVar1 + uVar7 * 0x68);
LAB_00972534:
      if (*plVar5 == 1) {
        unaff_x24 = plVar5[1];
        lVar8 = 1;
      }
      else {
        lVar8 = 2;
      }
      local_68 = plVar5 + 3;
    }
    else {
      if (uVar3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar7,uVar3,&PTR_s__root__cargo_registry_src_index__00af3560);
      }
      plVar5 = (long *)(lVar1 + uVar7 * 0x68);
      if (lVar8 == 0) goto LAB_00972534;
      if (uVar4 <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (unaff_x24,uVar4,&PTR_s__root__cargo_registry_src_index__00af3578);
      }
      lVar6 = lVar2 + unaff_x24 * 0x48;
      if ((*(uint *)(lVar6 + 0x10) & 1) == 0) {
        lVar8 = 2;
      }
      else {
        unaff_x24 = *(ulong *)(lVar6 + 0x18);
        lVar8 = 1;
      }
      local_68 = (long *)(lVar6 + 0x20);
    }
    local_70 = plVar5 + 8;
    <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
              (auStack_80,&local_70,&DAT_00af34d8,&local_68,&DAT_00af34f8);
  } while( true );
}


// ===== 009725a8  <http::method::InvalidMethod_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::method::InvalidMethod as core::fmt::Debug>::fmt */

void __rustcall
<http::method::InvalidMethod_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"InvalidMethod",0xd);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 009725e0  <alloc::string::String_as_core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp */

uint __rustcall
<alloc::string::String_as_core::cmp::PartialOrd<http::uri::authority::Authority>>::partial_cmp
          (long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = 0;
  while( true ) {
    if (*(long *)(param_1 + 0x10) == lVar5) {
      return -(uint)(*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10));
    }
    if (*(long *)(param_2 + 0x10) == lVar5) break;
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + lVar5);
    pbVar2 = (byte *)(*(long *)(param_2 + 8) + lVar5);
    lVar5 = lVar5 + 1;
    uVar4 = (uint)*pbVar1;
    uVar7 = (uint)*pbVar2;
    uVar6 = 0x20;
    uVar3 = uVar6;
    if (0x19 < uVar4 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | uVar4;
    if (0x19 < uVar7 - 0x41) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | uVar7;
    if (uVar3 != uVar6) {
      uVar4 = (uint)(uVar6 < uVar3);
      if (uVar3 < uVar6) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return 1;
}


// ===== 00972658  <http::method::InvalidMethod_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::method::InvalidMethod as core::fmt::Display>::fmt */

void __rustcall
<http::method::InvalidMethod_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"invalid HTTP method",0x13);
  return;
}


// ===== 0097266c  FUN_0097266c =====

void FUN_0097266c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x40) != 0) {
                    /* try { // try from 009726c0 to 009726c7 has its CatchHandler @ 009726dc */
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
                    /* try { // try from 0097269c to 009726a3 has its CatchHandler @ 009726fc */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x68;
  }
  return;
}


// ===== 00972728  FUN_00972728 =====

undefined8 FUN_00972728(void)

{
  return 0;
}


// ===== 00972730  FUN_00972730 =====

ulong * FUN_00972730(pthread_key_t param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong *__pointer;
  void *__ptr;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == 1) {
    return (ulong *)0x0;
  }
  do {
    do {
      uVar3 = DAT_00b10778;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb10778,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00b10778 = DAT_00b10778 + 1;
      }
    } while (cVar1 != '\0');
    uVar4 = uVar3 ^ 0x7465646279746573;
    uVar6 = uVar4 + 0x6c7967656e657261 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
    uVar4 = uVar4 + 0xa60c596fc19fead0;
    uVar7 = uVar6 + 0xded7d4e2d7dedfc6 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar5 = uVar4 ^ 0xe414a674f0de7325;
    uVar8 = uVar7 ^ 0x800000000000000;
    uVar3 = (uVar6 + 0xded7d4e2d7dedfc6 ^ uVar3) + uVar5;
    uVar4 = uVar8 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar5 = uVar3 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar6 = uVar4 ^ (uVar8 >> 0x30 | uVar7 << 0x10);
    uVar4 = uVar4 + uVar5;
    uVar3 = uVar6 + (uVar3 >> 0x20 | uVar3 << 0x20);
    uVar5 = uVar4 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
    uVar6 = uVar3 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar3 = (uVar3 ^ 0x800000000000000) + uVar5;
    uVar4 = uVar6 + ((uVar4 >> 0x20 | uVar4 << 0x20) ^ 0xff);
    uVar5 = uVar3 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar6 = uVar4 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
    uVar4 = uVar5 + uVar4;
    uVar3 = uVar6 + (uVar3 >> 0x20 | uVar3 << 0x20);
    uVar5 = uVar4 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
    uVar6 = uVar3 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar3 = uVar5 + uVar3;
    uVar4 = uVar6 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar5 = uVar3 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar6 = uVar4 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
    uVar4 = uVar5 + uVar4;
    uVar3 = uVar6 + (uVar3 >> 0x20 | uVar3 << 0x20);
    uVar5 = uVar4 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
    uVar6 = uVar3 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar4 = uVar6 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar3 = uVar5 + uVar3 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar5 = uVar4 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
    uVar4 = uVar3 + uVar4;
    uVar3 = (uVar5 >> 0x2b | uVar5 << 0x15) ^ (uVar3 >> 0x2f | uVar3 << 0x11) ^
            (uVar4 >> 0x20 | uVar4 << 0x20);
  } while (uVar3 == uVar4);
  __pointer = (ulong *)malloc(0x10);
  if (__pointer == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  *(pthread_key_t *)(__pointer + 1) = param_1;
  *__pointer = uVar3 ^ uVar4;
  __ptr = pthread_getspecific(param_1);
  pthread_setspecific(param_1,__pointer);
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  return __pointer;
}


// ===== 009728fc  FUN_009728fc =====

void FUN_009728fc(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00972948  FUN_00972948 =====

void FUN_00972948(undefined8 *param_1)

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


// ===== 009729b8  FUN_009729b8 =====

void FUN_009729b8(int *param_1,uint param_2)

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


// ===== 00972a28  FUN_00972a28 =====

void FUN_00972a28(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  void *__ptr;
  long lVar5;
  
  if (param_1[1] != 0) {
                    /* try { // try from 00972a90 to 00972aa3 has its CatchHandler @ 00972aa8 */
    futures_util::stream::futures_unordered::abort::abort("future still here when dropping",0x1f);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x972aa8);
    (*pcVar4)();
  }
  __ptr = (void *)*param_1;
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


// ===== 00972af8  FUN_00972af8 =====

void FUN_00972af8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  void *__ptr;
  long lVar5;
  
  if (param_1[1] != 0) {
                    /* try { // try from 00972b60 to 00972b73 has its CatchHandler @ 00972b78 */
    futures_util::stream::futures_unordered::abort::abort("future still here when dropping",0x1f);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x972b78);
    (*pcVar4)();
  }
  __ptr = (void *)*param_1;
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


// ===== 00972bc8  FUN_00972bc8 =====

void FUN_00972bc8(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00972c10  FUN_00972c10 =====

void FUN_00972c10(void *param_1)

{
  pthread_key_t __key;
  int iVar1;
  
  __key = *(pthread_key_t *)((long)param_1 + 8);
  pthread_setspecific(__key,&DAT_00000001);
  free(param_1);
  iVar1 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 00972c44 to 00972c47 has its CatchHandler @ 00972c54 */
  std::sys::thread_local::guard::key::enable(iVar1);
  return;
}


// ===== 00972c60  <futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>::stop_waking =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>::stop_waking
    */

byte __rustcall
<futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>
::stop_waking(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  
  pbVar1 = (byte *)(*param_1 + 0x10);
  bVar6 = *pbVar1;
  do {
    bVar3 = bVar6 & 0xe7 | 0x10;
    if (bVar3 == bVar6) {
      return bVar6;
    }
    bVar2 = *pbVar1;
    if (bVar2 == bVar6) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = bVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    bVar6 = bVar2;
  } while (!bVar5);
  return bVar2;
}


// ===== 00972cc0  <futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>::stop_polling =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>::stop_polling
    */

void __rustcall
<futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>
::stop_polling(long *param_1,byte param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  
  pbVar1 = (byte *)(*param_1 + 0x10);
  bVar6 = *pbVar1;
  if ((param_3 & 1) == 0) {
    do {
      bVar3 = *pbVar1;
      bVar2 = param_2;
      if ((bVar6 & 3) != 0) {
        bVar2 = param_2 | 0x10;
      }
      if (bVar3 == bVar6) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar5) {
          *pbVar1 = bVar2 & 0xf3 | bVar6 & 3;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
      }
      else {
        bVar5 = false;
        ClearExclusiveLocal();
      }
      bVar6 = bVar3;
    } while (!bVar5);
  }
  else {
    do {
      while (bVar2 = *pbVar1, bVar2 != bVar6) {
        ClearExclusiveLocal();
        bVar6 = bVar2;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = bVar6 & 3 | param_2 & 0xf3 | 0x10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      bVar6 = bVar2;
    } while (cVar4 != '\0');
  }
  return;
}


// ===== 00972d64  <futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>::start_polling =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>::start_polling
    */

void __rustcall
<futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>
::start_polling(byte *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  
  pbVar1 = (byte *)(*param_2 + 0x10);
  uVar5 = (uint)*pbVar1;
  do {
    if ((uVar5 >> 3 & 1) != 0) {
      param_1[0x10] = 2;
      return;
    }
    bVar2 = *pbVar1;
    if (bVar2 == uVar5) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 4;
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
    uVar5 = (uint)bVar2;
  } while (!bVar4);
  *param_1 = bVar2;
  *(long **)(param_1 + 8) = param_2;
  param_1[0x10] = 1;
  return;
}


// ===== 00972dd0  <futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>::new
    */

void __rustcall
<futures_util::stream::stream::flatten_unordered::futures_util::stream::stream::flatten_unordered::SharedPollState>
::new(undefined1 param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 1;
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 2) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00972e1c  <futures_util::abortable::[0]::futures_util::abortable::AbortHandle>::new_pair =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::abortable::[0]::futures_util::abortable::AbortHandle>::new_pair */

void __rustcall <futures_util::abortable::[0]::futures_util::abortable::AbortHandle>::new_pair(void)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x30,8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  plVar4[2] = 0;
  plVar4[4] = 0;
  *(undefined1 *)(plVar4 + 5) = 0;
  plVar4[1] = 1;
  *plVar4 = 1;
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x972e80);
  (*pcVar3)();
}


// ===== 00972e80  <futures_util::lock::mutex::[1]::futures_util::lock::mutex::Waiter>::wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::lock::mutex::[1]::futures_util::lock::mutex::Waiter>::wake */

void __rustcall
<futures_util::lock::mutex::[1]::futures_util::lock::mutex::Waiter>::wake(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00972e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 00972e9c  <futures_util::lock::mutex::[1]::futures_util::lock::mutex::Waiter>::register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::lock::mutex::[1]::futures_util::lock::mutex::Waiter>::register */

void __rustcall
<futures_util::lock::mutex::[1]::futures_util::lock::mutex::Waiter>::register
          (undefined1 (*param_1) [16],long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar2 = *(undefined8 **)*param_1;
  puVar1 = (undefined8 *)*param_2;
  if (puVar2 == (undefined8 *)0x0) {
    auVar4 = (*(code *)*puVar1)();
    *param_1 = auVar4;
    return;
  }
  lVar3 = *(long *)(*param_1 + 8);
  if ((puVar1 == puVar2) && (param_2[1] == lVar3)) {
    return;
  }
  auVar4 = (*(code *)*puVar1)();
                    /* try { // try from 00972f10 to 00972f17 has its CatchHandler @ 00972f2c */
  (*(code *)puVar2[3])(lVar3);
  *param_1 = auVar4;
  return;
}


// ===== 00972f34  <futures_util::stream::stream::flatten_unordered::[3]::futures_util::stream::stream::flatten_unordered::WrappedWaker>::replace_waker =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::stream::stream::flatten_unordered::[3]::futures_util::stream::stream::flatten_unordered::WrappedWaker>::replace_waker
    */

void __rustcall
<futures_util::stream::stream::flatten_unordered::[3]::futures_util::stream::stream::flatten_unordered::WrappedWaker>
::replace_waker(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2 = (*(code *)**(undefined8 **)*param_2)(((undefined8 *)*param_2)[1]);
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x18) != 0) {
                    /* try { // try from 00972f78 to 00972f7b has its CatchHandler @ 00972f90 */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x18))(*(undefined8 *)(lVar1 + 0x20));
  }
  *(undefined1 (*) [16])(lVar1 + 0x18) = auVar2;
  return;
}


// ===== 00972f98  <futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::is_aborted =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::is_aborted */

bool __rustcall
<futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::is_aborted(long *param_1)

{
  return *(char *)(*param_1 + 0x28) != '\0';
}


// ===== 00972fac  <futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::abort =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::abort */

void __rustcall
<futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::abort(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x28) = 1;
  <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
  ::wake(lVar1 + 0x10);
  return;
}


// ===== 00972fc0  <alloc::sync::[n]::alloc::sync::Arc<futures_util::stream::futures_unordered::task::Task<futures_task::future_obj::LocalFutureObj<()>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<futures_util::stream::futures_unordered::task::Task<futures_task::future_obj::LocalFutureObj<()>>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_util::stream::futures_unordered::task::Task<futures_task::future_obj::LocalFutureObj<()>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 00972fd0 to 00972fd7 has its CatchHandler @ 00973020 */
  FUN_00972a28((long)__ptr + 0x10);
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


// ===== 00973060  <alloc::sync::[n]::alloc::sync::Arc<futures_util::stream::futures_unordered::task::Task<futures_task::future_obj::FutureObj<()>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<futures_util::stream::futures_unordered::task::Task<futures_task::future_obj::FutureObj<()>>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_util::stream::futures_unordered::task::Task<futures_task::future_obj::FutureObj<()>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 00973070 to 00973077 has its CatchHandler @ 009730c0 */
  FUN_00972af8((long)__ptr + 0x10);
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


// ===== 00973100  futures_util::async_await::random::gen_index =====

/* WARNING: Unknown calling convention: __rustcall */
/* futures_util::async_await::random::gen_index */

long __rustcall futures_util::async_await::random::gen_index(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  uVar3 = DAT_00b0f6a0;
  if (DAT_00b0f6a0 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b0f6a0);
    puVar2 = (ulong *)pthread_getspecific((pthread_key_t)uVar3);
  }
  else {
    puVar2 = (ulong *)pthread_getspecific((pthread_key_t)DAT_00b0f6a0);
  }
  if (puVar2 < (ulong *)0x2) {
    puVar2 = (ulong *)FUN_00972730(uVar3 & 0xffffffff);
  }
  if (puVar2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af3590);
  }
  uVar3 = *puVar2 ^ *puVar2 >> 0xc;
  uVar3 = uVar3 ^ uVar3 << 0x19;
  uVar3 = uVar3 ^ uVar3 >> 0x1b;
  *puVar2 = uVar3;
  if (param_1 != 0) {
    uVar3 = uVar3 * 0x2545f4914f6cdd1d;
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = uVar3 / param_1;
    }
    return uVar3 - uVar1 * param_1;
  }
  auStack_50 = core::panicking::panic_const::panic_const_rem_by_zero
                         (&PTR_s__root__cargo_registry_src_index__00af35f0);
  puStack_40 = auStack_50;
  pcStack_28 = stream::futures_unordered::abort::abort;
  pcStack_38 = FUN_00973468;
  puStack_30 = &stack0xffffffffffffffe0;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab692,&puStack_40,&PTR_s__root__cargo_registry_src_index__00af3608);
}


// ===== 009731c0  futures_util::stream::futures_unordered::abort::abort =====

/* WARNING: Unknown calling convention: __rustcall */
/* futures_util::stream::futures_unordered::abort::abort */

void __rustcall
futures_util::stream::futures_unordered::abort::abort(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  pcStack_18 = FUN_00973468;
                    /* try { // try from 009731e0 to 009731f7 has its CatchHandler @ 009731fc */
  local_30 = param_1;
  uStack_28 = param_2;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab692,&local_20,&PTR_s__root__cargo_registry_src_index__00af3608);
}


// ===== 0097321c  FUN_0097321c =====

void FUN_0097321c(void)

{
  undefined1 uStack_11;
  
  FUN_009739d0(&uStack_11);
  FUN_009728fc();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00973238  <futures_util::stream::futures_unordered::abort::abort::DoublePanic_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::stream::futures_unordered::abort::abort::DoublePanic as
   core::ops::drop::Drop>::drop */

void __rustcall
<futures_util::stream::futures_unordered::abort::abort::DoublePanic_as_core::ops::drop::Drop>::drop
          (void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("panicking twice to abort the program`Abortable` future has been aborted",0x24,
             &PTR_s__root__cargo_registry_src_index__00af3620);
}


// ===== 00973258  <<futures_util[7a5921e26b03c296]::future::future::shared::Shared<_>as_core[bcece726f298455b]::future::future::Future>::poll::Reset_as_core[bcece726f298455b]::ops::drop::Drop>::drop =====

/* <<futures_util[7a5921e26b03c296]::future::future::shared::Shared<_> as
   core[bcece726f298455b]::future::future::Future>::poll::Reset as
   core[bcece726f298455b]::ops::drop::Drop>::drop */

void <<futures_util[7a5921e26b03c296]::future::future::shared::Shared<_>as_core[bcece726f298455b]::future::future::Future>::poll::Reset_as_core[bcece726f298455b]::ops::drop::Drop>
     ::drop(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined8 *)*param_1 = 3;
  }
  return;
}


// ===== 00973270  <futures_util::abortable::Aborted_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::abortable::Aborted as core::fmt::Display>::fmt */

void __rustcall
<futures_util::abortable::Aborted_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00973288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"`Abortable` future has been aborted",0x23);
  return;
}


// ===== 0097328c  <futures_util[7a5921e26b03c296]::stream::futures_unordered::FuturesUnordered<futures_task[b45bc9d6f08fe8b7]::future_obj::FutureObj<()>>as_futures_task[b45bc9d6f08fe8b7]::spawn::Spawn>::spawn_obj =====

/* <futures_util[7a5921e26b03c296]::stream::futures_unordered::FuturesUnordered<futures_task[b45bc9d6f08fe8b7]::future_obj::FutureObj<()>>
   as futures_task[b45bc9d6f08fe8b7]::spawn::Spawn>::spawn_obj */

undefined8
<futures_util[7a5921e26b03c296]::stream::futures_unordered::FuturesUnordered<futures_task[b45bc9d6f08fe8b7]::future_obj::FutureObj<()>>as_futures_task[b45bc9d6f08fe8b7]::spawn::Spawn>
::spawn_obj(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined **local_90;
  code *pcStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined6 uStack_3e;
  
  local_80 = *param_1;
  uStack_78 = *param_2;
  local_70 = param_2[1];
  uStack_68 = param_2[2];
  plVar1 = (long *)(local_80 + 8);
  do {
    lVar6 = *plVar1;
    while (lVar6 != -1) {
      if (lVar6 < 0) {
        local_90 = &PTR_s_Arc_counter_overflo_00af35c8;
        pcStack_88 = FUN_00973468;
                    /* try { // try from 00973404 to 0097341b has its CatchHandler @ 00973448 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_90,&PTR_s__nix_store_8006w282fgsx3273c878b_00af35d8);
      }
      lVar7 = *plVar1;
      if (lVar7 == lVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        lVar6 = lVar7;
        if (cVar3 == '\0') {
          local_60 = *(long *)(local_80 + 0x10) + 0x10;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          pcStack_88 = (code *)0x1;
          local_90 = (undefined **)0x1;
          local_40 = 1;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar5 = (undefined8 *)FUN_004b25a4(0x58,8);
          if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 00973420 to 0097342f has its CatchHandler @ 00973434 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x58);
          }
          plVar1 = param_1 + 1;
          puVar5[5] = uStack_68;
          puVar5[4] = local_70;
          puVar5[7] = uStack_58;
          puVar5[6] = local_60;
          puVar5[10] = CONCAT62(uStack_3e,local_40);
          puVar2 = puVar5 + 2;
          puVar5[9] = uStack_48;
          puVar5[8] = local_50;
          puVar5[1] = pcStack_88;
          *puVar5 = local_90;
          puVar5[3] = uStack_78;
          puVar5[2] = local_80;
          *(undefined1 *)(param_1 + 2) = 0;
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = (long)puVar2;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            puVar5[8] = 1;
            puVar5[6] = 0;
          }
          else {
            do {
            } while (*(long *)(lVar6 + 0x20) == *(long *)(*param_1 + 0x10) + 0x10);
            puVar5[8] = *(long *)(lVar6 + 0x30) + 1;
            puVar5[6] = lVar6;
            *(undefined8 **)(lVar6 + 0x28) = puVar2;
          }
          lVar6 = *param_1;
          puVar5[9] = 0;
          plVar1 = (long *)(lVar6 + 0x30);
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = (long)puVar2;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          *(undefined8 **)(lVar6 + 0x38) = puVar2;
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
        lVar6 = lVar7;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}


// ===== 00973468  FUN_00973468 =====

void FUN_00973468(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0097347c  <futures_util[7a5921e26b03c296]::stream::futures_unordered::FuturesUnordered<futures_task[b45bc9d6f08fe8b7]::future_obj::LocalFutureObj<()>>as_futures_task[b45bc9d6f08fe8b7]::spawn::LocalSpawn>::spawn_local_obj =====

/* <futures_util[7a5921e26b03c296]::stream::futures_unordered::FuturesUnordered<futures_task[b45bc9d6f08fe8b7]::future_obj::LocalFutureObj<()>>
   as futures_task[b45bc9d6f08fe8b7]::spawn::LocalSpawn>::spawn_local_obj */

undefined8
<futures_util[7a5921e26b03c296]::stream::futures_unordered::FuturesUnordered<futures_task[b45bc9d6f08fe8b7]::future_obj::LocalFutureObj<()>>as_futures_task[b45bc9d6f08fe8b7]::spawn::LocalSpawn>
::spawn_local_obj(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined **local_90;
  code *pcStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined6 uStack_3e;
  
  local_80 = *param_1;
  uStack_78 = *param_2;
  local_70 = param_2[1];
  uStack_68 = param_2[2];
  plVar1 = (long *)(local_80 + 8);
  do {
    lVar6 = *plVar1;
    while (lVar6 != -1) {
      if (lVar6 < 0) {
        local_90 = &PTR_s_Arc_counter_overflo_00af35c8;
        pcStack_88 = FUN_00973468;
                    /* try { // try from 009735f4 to 0097360b has its CatchHandler @ 00973638 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_90,&PTR_s__nix_store_8006w282fgsx3273c878b_00af35d8);
      }
      lVar7 = *plVar1;
      if (lVar7 == lVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        lVar6 = lVar7;
        if (cVar3 == '\0') {
          local_60 = *(long *)(local_80 + 0x10) + 0x10;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          pcStack_88 = (code *)0x1;
          local_90 = (undefined **)0x1;
          local_40 = 1;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar5 = (undefined8 *)FUN_004b25a4(0x58,8);
          if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 00973610 to 0097361f has its CatchHandler @ 00973624 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x58);
          }
          plVar1 = param_1 + 1;
          puVar5[5] = uStack_68;
          puVar5[4] = local_70;
          puVar5[7] = uStack_58;
          puVar5[6] = local_60;
          puVar5[10] = CONCAT62(uStack_3e,local_40);
          puVar2 = puVar5 + 2;
          puVar5[9] = uStack_48;
          puVar5[8] = local_50;
          puVar5[1] = pcStack_88;
          *puVar5 = local_90;
          puVar5[3] = uStack_78;
          puVar5[2] = local_80;
          *(undefined1 *)(param_1 + 2) = 0;
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = (long)puVar2;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            puVar5[8] = 1;
            puVar5[6] = 0;
          }
          else {
            do {
            } while (*(long *)(lVar6 + 0x20) == *(long *)(*param_1 + 0x10) + 0x10);
            puVar5[8] = *(long *)(lVar6 + 0x30) + 1;
            puVar5[6] = lVar6;
            *(undefined8 **)(lVar6 + 0x28) = puVar2;
          }
          lVar6 = *param_1;
          puVar5[9] = 0;
          plVar1 = (long *)(lVar6 + 0x30);
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = (long)puVar2;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          *(undefined8 **)(lVar6 + 0x38) = puVar2;
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
        lVar6 = lVar7;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}


// ===== 00973658  <futures_util::stream::stream::flatten_unordered::WrappedWaker_as_futures_task::arc_wake::ArcWake>::wake_by_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::stream::stream::flatten_unordered::WrappedWaker as
   futures_task::arc_wake::ArcWake>::wake_by_ref */

void __rustcall
<futures_util::stream::stream::flatten_unordered::WrappedWaker_as_futures_task::arc_wake::ArcWake>::
wake_by_ref(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar8 = *param_1;
  bVar7 = *(byte *)(lVar8 + 0x28);
  pbVar1 = (byte *)(*(long *)(lVar8 + 0x10) + 0x10);
  bVar6 = *pbVar1;
  do {
    bVar2 = bVar6 | bVar7;
    bVar3 = bVar2 | 8;
    if ((bVar6 & 0x14) != 0) {
      bVar3 = bVar2;
    }
    if (bVar3 == bVar6) {
      return;
    }
    bVar2 = *pbVar1;
    if (bVar2 == bVar6) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = bVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    bVar6 = bVar2;
  } while (!bVar5);
  if ((bVar2 & 0x1c) == 0) {
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
                    /* try { // try from 009736f0 to 009736f3 has its CatchHandler @ 00973798 */
      auVar9 = (*(code *)**(undefined8 **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x20));
      pbVar1 = (byte *)(*(long *)(lVar8 + 0x10) + 0x10);
      bVar7 = *pbVar1;
      do {
        while( true ) {
          bVar6 = bVar7 & 0xe7 | 0x10;
          if (bVar6 == bVar7) goto LAB_0097373c;
          bVar3 = *pbVar1;
          if (bVar3 == bVar7) break;
          ClearExclusiveLocal();
          bVar7 = bVar3;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar5) {
          *pbVar1 = bVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
        bVar7 = bVar3;
      } while (cVar4 != '\0');
LAB_0097373c:
                    /* WARNING: Could not recover jumptable at 0x0097374c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(auVar9._0_8_ + 8))(auVar9._8_8_);
      return;
    }
    pbVar1 = (byte *)(*(long *)(lVar8 + 0x10) + 0x10);
    bVar7 = *pbVar1;
    do {
      while( true ) {
        bVar6 = bVar7 & 0xe7 | 0x10;
        if (bVar6 == bVar7) {
          return;
        }
        bVar3 = *pbVar1;
        if (bVar3 == bVar7) break;
        ClearExclusiveLocal();
        bVar7 = bVar3;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = bVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
      bVar7 = bVar3;
    } while (cVar4 != '\0');
  }
  return;
}


// ===== 009737e4  <futures_util::fns::MergeResultFn_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::fns::MergeResultFn as core::fmt::Debug>::fmt */

void __rustcall
<futures_util::fns::MergeResultFn_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"merge_result",0xc);
  return;
}


// ===== 009737f8  FUN_009737f8 =====

void FUN_009737f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00973830  <futures_util::future::future::shared::Notifier_as_futures_task::arc_wake::ArcWake>::wake_by_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_util::future::future::shared::Notifier as futures_task::arc_wake::ArcWake>::wake_by_ref
    */

void __rustcall
<futures_util::future::future::shared::Notifier_as_futures_task::arc_wake::ArcWake>::wake_by_ref
          (long *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int *local_50;
  undefined1 local_48;
  
  lVar9 = *param_1;
  piVar1 = (int *)(lVar9 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      param_1 = (long *)<std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::
                        lock_contended(lVar9 + 0x10);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar6 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00973958;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar6 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00973958:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar6;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar8 = 0;
    local_48 = 0;
    cVar4 = *(char *)(lVar9 + 0x14);
  }
  else {
    param_1 = (long *)std::panicking::panic_count::is_zero_slow_path();
    uVar8 = (uint)param_1 ^ 1;
    local_48 = (undefined1)uVar8;
    cVar4 = *(char *)(lVar9 + 0x14);
  }
  if (cVar4 != '\0') {
                    /* try { // try from 00973974 to 00973997 has its CatchHandler @ 009739b8 */
    local_50 = piVar1;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_00af35a8,
               &PTR_s__root__cargo_registry_src_index__00af3638);
  }
  if (*(long *)(lVar9 + 0x18) != -1) {
    plVar11 = (long *)(*(long *)(lVar9 + 0x20) + 8);
    for (lVar10 = *(long *)(lVar9 + 0x28) * 0x18; lVar10 != 0; lVar10 = lVar10 + -0x18) {
      if ((*(uint *)(plVar11 + -1) & 1) != 0) {
        lVar2 = *plVar11;
        param_1 = (long *)plVar11[1];
        *plVar11 = 0;
        if (lVar2 != 0) {
                    /* try { // try from 009738c8 to 009738cb has its CatchHandler @ 0097399c */
          param_1 = (long *)(**(code **)(lVar2 + 8))();
        }
      }
      plVar11 = plVar11 + 3;
    }
  }
  if ((((uVar8 & 1) == 0) && ((*puVar6 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(param_1), (uVar7 & 1) == 0)) {
    *(undefined1 *)(lVar9 + 0x14) = 1;
  }
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
    return;
  }
  return;
}


// ===== 009739d0  FUN_009739d0 =====

undefined ** FUN_009739d0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  long local_58;
  
  pcVar4 = "fatal runtime er";
  ppuVar5 = (undefined **)0x3d;
  do {
    auVar8 = <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write
                       (param_1,pcVar4,ppuVar5);
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
                    /* try { // try from 00973a94 to 00973aa7 has its CatchHandler @ 00973b10 */
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
        return &PTR_s_failed_to_write_whole_bufferAtom_00af3650;
      }
      ppuVar6 = (undefined **)((long)ppuVar5 - (long)ppuVar3);
      if (ppuVar5 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (ppuVar3,ppuVar5,ppuVar5,&PTR_s__nix_store_8006w282fgsx3273c878b_00af3668);
      }
      pcVar4 = pcVar4 + (long)ppuVar3;
    }
    ppuVar5 = ppuVar6;
    if (ppuVar6 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  } while( true );
}


// ===== 00973b28  <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>::wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>::wake
    */

void __rustcall
<futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
::wake(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00973b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(param_1[1]);
      return;
    }
  }
  return;
}


// ===== 00973b6c  <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>::register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>::register
    */

void __rustcall
<futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
::register(undefined1 (*param_1) [16],long *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  pauVar1 = param_1 + 1;
  do {
    lVar5 = *(long *)*pauVar1;
    if (lVar5 != 0) {
      ClearExclusiveLocal();
      if (lVar5 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00973c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x10))(param_2[1]);
        return;
      }
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pauVar1,0x10);
    if (bVar4) {
      *(undefined8 *)*pauVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 != 0) {
    return;
  }
  puVar6 = (undefined8 *)*param_2;
  if (*(undefined8 **)*param_1 == (undefined8 *)0x0) {
    auVar7 = (*(code *)*puVar6)(param_2[1]);
    lVar5 = *(long *)*param_1;
  }
  else {
    if ((*(undefined8 **)*param_1 == puVar6) && (*(long *)(*param_1 + 8) == param_2[1]))
    goto LAB_00973c10;
    auVar7 = (*(code *)*puVar6)();
    lVar5 = *(long *)*param_1;
  }
  if (lVar5 != 0) {
                    /* try { // try from 00973c08 to 00973c0b has its CatchHandler @ 00973c94 */
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(*param_1 + 8));
  }
  *param_1 = auVar7;
LAB_00973c10:
  do {
    if (*(long *)*pauVar1 != 1) {
      ClearExclusiveLocal();
      lVar5 = *(long *)*param_1;
      uVar2 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)*param_1 = 0;
      if (lVar5 != 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pauVar1,0x10);
          if (bVar4) {
            *(undefined8 *)*pauVar1 = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00973c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 8))(uVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3680);
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pauVar1,0x10);
    if (bVar4) {
      *(undefined8 *)*pauVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


// ===== 00973c9c  <futures_core::task::__internal::atomic_waker::AtomicWaker_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_core::task::__internal::atomic_waker::AtomicWaker as core::fmt::Debug>::fmt */

void __rustcall
<futures_core::task::__internal::atomic_waker::AtomicWaker_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00973cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"AtomicWaker",0xb);
  return;
}


// ===== 00973cb8  FUN_00973cb8 =====

void FUN_00973cb8(long *param_1)

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
                    /* try { // try from 00973ce4 to 00973ceb has its CatchHandler @ 00973d7c */
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


// ===== 00973da0  FUN_00973da0 =====

void FUN_00973da0(long *param_1)

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
                    /* try { // try from 00973dd0 to 00973dd7 has its CatchHandler @ 00973e74 */
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
                    /* try { // try from 00973e2c to 00973e33 has its CatchHandler @ 00973e5c */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
    }
  }
  return;
}


// ===== 00973e98  FUN_00973e98 =====

void FUN_00973e98(ulong *param_1)

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
                    /* try { // try from 00973efc to 00973f03 has its CatchHandler @ 00973fa4 */
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
                    /* try { // try from 00973f3c to 00973f3f has its CatchHandler @ 00973fcc */
    FUN_009976d8(uVar8 + lVar7 * 0x10,uVar4 - lVar7);
                    /* try { // try from 00973f40 to 00973f4b has its CatchHandler @ 00973fc4 */
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


// ===== 00974028  FUN_00974028 =====

void FUN_00974028(long *param_1)

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
                    /* try { // try from 009740a8 to 009740af has its CatchHandler @ 00974190 */
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
                    /* try { // try from 00974108 to 0097414f has its CatchHandler @ 00974178 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
        }
      }
    }
    else if (lVar1 == 1) {
      uVar2 = param_1[1];
      if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
        local_38 = uVar2 - 1;
                    /* try { // try from 00974088 to 0097408f has its CatchHandler @ 00974178 */
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


// ===== 009741b0  FUN_009741b0 =====

void FUN_009741b0(void *param_1)

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
                    /* try { // try from 009741e0 to 009741e3 has its CatchHandler @ 00974284 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
    FUN_00973e98((long)param_1 + 0x40);
  }
  else if (*(int *)((long)param_1 + 0x38) == 0) {
    if (*(long *)((long)param_1 + 0x40) != -1) {
                    /* try { // try from 00974204 to 00974213 has its CatchHandler @ 00974298 */
      FUN_009750e4();
    }
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 00974224 to 00974227 has its CatchHandler @ 009742ac */
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
                    /* try { // try from 0097424c to 0097424f has its CatchHandler @ 00974268 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009742f8  FUN_009742f8 =====

void FUN_009742f8(void *param_1)

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
                    /* try { // try from 00974328 to 0097432b has its CatchHandler @ 009743a4 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
                    /* try { // try from 0097432c to 00974333 has its CatchHandler @ 009743f0 */
  FUN_00974b80((long)param_1 + 0x38);
  if (*(long *)((long)param_1 + 0x68) != 0) {
                    /* try { // try from 00974344 to 00974347 has its CatchHandler @ 009743b8 */
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
                    /* try { // try from 0097436c to 0097436f has its CatchHandler @ 00974388 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 00974418  FUN_00974418 =====

void FUN_00974418(void *param_1)

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
                    /* try { // try from 00974448 to 0097444b has its CatchHandler @ 009744f4 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
                    /* try { // try from 0097447c to 00974483 has its CatchHandler @ 00974508 */
    FUN_00973da0((long)param_1 + 0x40);
  }
  else if (((*(int *)((long)param_1 + 0x38) == 0) && (*(long *)((long)param_1 + 0x40) != -1)) &&
          (*(long *)((long)param_1 + 0x40) != 0)) {
    free(*(void **)((long)param_1 + 0x48));
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 00974494 to 00974497 has its CatchHandler @ 0097451c */
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
                    /* try { // try from 009744bc to 009744bf has its CatchHandler @ 009744d8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 00974568  FUN_00974568 =====

void FUN_00974568(void *param_1)

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
                    /* try { // try from 00974598 to 0097459b has its CatchHandler @ 00974688 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
                    /* try { // try from 009745f4 to 009745fb has its CatchHandler @ 0097469c */
    FUN_00974028((long)param_1 + 0x40);
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
                    /* try { // try from 009745d8 to 009745db has its CatchHandler @ 00974650 */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
    if (*(long *)((long)param_1 + 0x50) != 0) {
      free(*(void **)((long)param_1 + 0x58));
    }
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 0097460c to 0097460f has its CatchHandler @ 009746b0 */
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
                    /* try { // try from 00974634 to 00974637 has its CatchHandler @ 0097466c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009746fc  FUN_009746fc =====

void FUN_009746fc(void *param_1)

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
                    /* try { // try from 0097472c to 0097472f has its CatchHandler @ 0097481c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
                    /* try { // try from 00974788 to 0097478f has its CatchHandler @ 00974830 */
    FUN_00974028((long)param_1 + 0x40);
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
                    /* try { // try from 0097476c to 0097476f has its CatchHandler @ 009747e4 */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
    if (*(long *)((long)param_1 + 0x50) != 0) {
      free(*(void **)((long)param_1 + 0x58));
    }
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 009747a0 to 009747a3 has its CatchHandler @ 00974844 */
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
                    /* try { // try from 009747c8 to 009747cb has its CatchHandler @ 00974800 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 00974890  FUN_00974890 =====

void FUN_00974890(void *param_1)

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
                    /* try { // try from 009748c0 to 009748c3 has its CatchHandler @ 00974990 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
    FUN_00974028((long)param_1 + 0x40);
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
                    /* try { // try from 00974910 to 0097491f has its CatchHandler @ 009749a4 */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
                    /* try { // try from 00974930 to 00974933 has its CatchHandler @ 009749b8 */
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
                    /* try { // try from 00974958 to 0097495b has its CatchHandler @ 00974974 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 00974a04  FUN_00974a04 =====

void FUN_00974a04(void *param_1)

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
                    /* try { // try from 00974a34 to 00974a37 has its CatchHandler @ 00974ae0 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)((long)param_1 + 0x38) == 1) {
                    /* try { // try from 00974a68 to 00974a6f has its CatchHandler @ 00974af4 */
    FUN_00973cb8((long)param_1 + 0x40);
  }
  else if (((*(int *)((long)param_1 + 0x38) == 0) && (*(long *)((long)param_1 + 0x40) != -1)) &&
          (*(long *)((long)param_1 + 0x40) != 0)) {
    free(*(void **)((long)param_1 + 0x48));
  }
  if (*(long *)((long)param_1 + 0x78) != 0) {
                    /* try { // try from 00974a80 to 00974a83 has its CatchHandler @ 00974b08 */
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
                    /* try { // try from 00974aa8 to 00974aab has its CatchHandler @ 00974ac4 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 00974b54  FUN_00974b54 =====

void FUN_00974b54(int *param_1)

{
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_009750e4();
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_00973e98(param_1 + 2);
    return;
  }
  return;
}


// ===== 00974b80  FUN_00974b80 =====

void FUN_00974b80(int *param_1)

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
                    /* try { // try from 00974bb8 to 00974bbf has its CatchHandler @ 00974c14 */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00974c38  FUN_00974c38 =====

void FUN_00974c38(int *param_1)

{
  if (*param_1 == 0) {
    if ((*(long *)(param_1 + 2) != -1) && (*(long *)(param_1 + 2) != 0)) {
      free(*(void **)(param_1 + 4));
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_00973da0(param_1 + 2);
    return;
  }
  return;
}


// ===== 00974c70  FUN_00974c70 =====

void FUN_00974c70(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
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
                    /* try { // try from 00974cc8 to 00974ccb has its CatchHandler @ 00974cf4 */
        <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
      }
      if (*(long *)(param_1 + 6) != 0) {
        free(*(void **)(param_1 + 8));
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    FUN_00974028(param_1 + 2);
    return;
  }
  return;
}


// ===== 00974d14  FUN_00974d14 =====

void FUN_00974d14(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -2) {
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
                    /* try { // try from 00974d6c to 00974d6f has its CatchHandler @ 00974d98 */
        <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
      }
      if (*(long *)(param_1 + 6) != 0) {
        free(*(void **)(param_1 + 8));
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    FUN_00974028(param_1 + 2);
    return;
  }
  return;
}


// ===== 00974db8  FUN_00974db8 =====

void FUN_00974db8(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
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
  }
  else if (*param_1 == 1) {
    FUN_00974028(param_1 + 2);
    return;
  }
  return;
}


// ===== 00974e40  FUN_00974e40 =====

void FUN_00974e40(int *param_1)

{
  if (*param_1 == 0) {
    if ((*(long *)(param_1 + 2) != -1) && (*(long *)(param_1 + 2) != 0)) {
      free(*(void **)(param_1 + 4));
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_00973cb8(param_1 + 2);
    return;
  }
  return;
}


// ===== 00974e78  FUN_00974e78 =====

void FUN_00974e78(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00973e98(param_1 + 2);
    return;
  }
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_009750e4();
      return;
    }
  }
  return;
}


// ===== 00974ea4  FUN_00974ea4 =====

void FUN_00974ea4(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00973da0(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) && (*(long *)(param_1 + 2) != 0)) {
    free(*(void **)(param_1 + 4));
    return;
  }
  return;
}


// ===== 00974edc  FUN_00974edc =====

void FUN_00974edc(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 1) {
    FUN_00974028(param_1 + 2);
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
                    /* try { // try from 00974f24 to 00974f27 has its CatchHandler @ 00974f60 */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
    if (*(long *)(param_1 + 6) != 0) {
      free(*(void **)(param_1 + 8));
      return;
    }
  }
  return;
}


// ===== 00974f80  FUN_00974f80 =====

void FUN_00974f80(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 1) {
    FUN_00974028(param_1 + 2);
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
                    /* try { // try from 00974fc8 to 00974fcb has its CatchHandler @ 00975004 */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
    if (*(long *)(param_1 + 6) != 0) {
      free(*(void **)(param_1 + 8));
      return;
    }
  }
  return;
}


// ===== 00975024  FUN_00975024 =====

void FUN_00975024(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 1) {
    FUN_00974028(param_1 + 2);
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


// ===== 009750ac  FUN_009750ac =====

void FUN_009750ac(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00973cb8(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) && (*(long *)(param_1 + 2) != 0)) {
    free(*(void **)(param_1 + 4));
    return;
  }
  return;
}


// ===== 009750e4  FUN_009750e4 =====

void FUN_009750e4(ulong *param_1)

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
                    /* try { // try from 00975144 to 00975147 has its CatchHandler @ 009751b4 */
  FUN_009976d8(uVar7 + lVar6 * 0x10,uVar4 - lVar6);
                    /* try { // try from 00975148 to 00975153 has its CatchHandler @ 009751ac */
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


// ===== 00975210  FUN_00975210 =====

void FUN_00975210(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 00975230 to 00975233 has its CatchHandler @ 00975270 */
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


// ===== 009752a8  FUN_009752a8 =====

void FUN_009752a8(long param_1,long *param_2)

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
  int local_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    local_60 = (int)uVar3;
    if (local_60 != 1) {
                    /* try { // try from 0097534c to 00975363 has its CatchHandler @ 00975384 */
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
                    /* try { // try from 0097531c to 00975323 has its CatchHandler @ 00975368 */
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


// ===== 009753a8  FUN_009753a8 =====

void FUN_009753a8(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 00975424 to 0097542f has its CatchHandler @ 009754bc */
          FUN_009b963c(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00975444 to 00975447 has its CatchHandler @ 009754b4 */
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


// ===== 00975518  FUN_00975518 =====

void FUN_00975518(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00975658 to 00975663 has its CatchHandler @ 00975824 */
          FUN_009b963c(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_00975664;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 009755c8 to 009755d7 has its CatchHandler @ 00975830 */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009b9390(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 0097561c to 00975627 has its CatchHandler @ 009757c8 */
        local_68 = lVar5;
        FUN_009b963c(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 0097576c to 00975777 has its CatchHandler @ 009757bc */
        FUN_009b963c(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_00975664:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 0xffffffffffffffff;
        local_b0._0_4_ = 1;
        FUN_009b963c(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00975754;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x009756b8;
}


// ===== 00975870  FUN_00975870 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00975870(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 009758ac to 009758d3 has its CatchHandler @ 00975a80 */
    FUN_009b963c(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 009759e8 to 00975a33 has its CatchHandler @ 00975a80 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00975900 to 00975903 has its CatchHandler @ 00975a38 */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_00975908;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_00975908:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 00975930 to 0097593b has its CatchHandler @ 00975a40 */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_009741b0(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 00975adc  FUN_00975adc =====

void FUN_00975adc(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 00975b60 to 00975b6f has its CatchHandler @ 00975bd8 */
          FUN_009b963c(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 0xffffffffffffffff;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b963c(param_1 + 4,local_a0);
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


// ===== 00975be4  FUN_00975be4 =====

void FUN_00975be4(long param_1,long *param_2)

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
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x58);
  if (iVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    local_50 = (int)uVar5;
    if (local_50 != 1) {
                    /* try { // try from 00975cac to 00975cc3 has its CatchHandler @ 00975d00 */
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
                    /* try { // try from 00975c8c to 00975c93 has its CatchHandler @ 00975cc8 */
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


// ===== 00975d24  FUN_00975d24 =====

void FUN_00975d24(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_50 [8];
  
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
          local_50[0] = 2;
                    /* try { // try from 00975da0 to 00975dab has its CatchHandler @ 00975e38 */
          FUN_009b99f8(param_1 + 4,local_50);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0xd] != 0) {
                    /* try { // try from 00975dc0 to 00975dc3 has its CatchHandler @ 00975e30 */
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


// ===== 00975e94  FUN_00975e94 =====

void FUN_00975e94(ulong *param_1)

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
  undefined *local_a0;
  ulong *puStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
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
          local_50 = CONCAT44(local_50._4_4_,2);
                    /* try { // try from 00976030 to 0097603b has its CatchHandler @ 00976174 */
          FUN_009b99f8(param_1 + 4,&local_50);
          uStack_58 = extraout_x1;
          goto LAB_0097603c;
        }
        local_a0 = PTR_WAKER_VTABLE_00b00d40;
        uStack_80 = 0;
                    /* try { // try from 00975f44 to 00975f4f has its CatchHandler @ 00976180 */
        puStack_98 = param_1;
        local_90 = (undefined1 *)&local_a0;
        local_88 = (undefined1 *)&local_a0;
        uVar3 = FUN_009b9798(param_1 + 4,&local_90);
        if ((uVar3 & 1) != 0) {
          uVar3 = *param_1;
          goto joined_r0x00975f68;
        }
        local_48 = 0;
        uStack_40 = 0;
        local_50 = CONCAT44(local_50._4_4_,1);
                    /* try { // try from 0097607c to 00976087 has its CatchHandler @ 00976118 */
        local_38 = uVar3 & 0xffffffff;
        FUN_009b99f8(param_1 + 4,&local_50);
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
    puVar7 = (ulong *)&local_70;
    local_50 = 1;
  }
  else {
    uVar5 = 0;
    puVar7 = &local_50;
    uVar4 = 3;
  }
  *puVar7 = uVar5;
  if (local_50 != 1) {
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
        local_50 = CONCAT44(local_50._4_4_,2);
                    /* try { // try from 009760bc to 009760c7 has its CatchHandler @ 0097610c */
        FUN_009b99f8(param_1 + 4,&local_50);
        uStack_58 = extraout_x1_00;
LAB_0097603c:
        local_68 = param_1[6];
        local_60 = 0;
        local_70 = 1;
        FUN_009b99f8(param_1 + 4,&local_70);
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
      *param_1 = CONCAT44(uStack_6c,local_70);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_009760a4;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00975f68;
}


// ===== 009761b4  FUN_009761b4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_009761b4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_80 [8];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_80[0] = 2;
                    /* try { // try from 009761f0 to 00976217 has its CatchHandler @ 009763c4 */
    FUN_009b99f8(param_1 + 4,local_80);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0xd] == 0) {
                    /* try { // try from 0097632c to 00976377 has its CatchHandler @ 009763c4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0xd] + 0x10))(param_1[0xe]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0xd] != 0) {
                    /* try { // try from 00976244 to 00976247 has its CatchHandler @ 0097637c */
            (**(code **)(param_1[0xd] + 0x18))(param_1[0xe]);
          }
          param_1[0xd] = 0;
        }
        goto LAB_0097624c;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_0097624c:
  if (param_1[0xf] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 00976274 to 0097627f has its CatchHandler @ 00976384 */
    (**(code **)(param_1[0x10] + 0x28))
              (param_1[0xf] + (*(long *)(param_1[0x10] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_009742f8(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 00976420  FUN_00976420 =====

void FUN_00976420(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_60 [2];
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40 [8];
  
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
          local_40[0] = 2;
                    /* try { // try from 009764a4 to 009764b3 has its CatchHandler @ 00976518 */
          FUN_009b99f8(param_1 + 4,local_40);
          local_58 = param_1[6];
          local_50 = 0;
          local_60[0] = 1;
          uStack_48 = extraout_x1;
          FUN_009b99f8(param_1 + 4,local_60);
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


// ===== 00976524  FUN_00976524 =====

void FUN_00976524(long param_1,long *param_2)

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
  int local_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    local_60 = (int)uVar3;
    if (local_60 != 1) {
                    /* try { // try from 009765c8 to 009765df has its CatchHandler @ 00976600 */
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
                    /* try { // try from 00976598 to 0097659f has its CatchHandler @ 009765e4 */
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


// ===== 00976618  FUN_00976618 =====

void FUN_00976618(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 00976694 to 0097669f has its CatchHandler @ 0097672c */
          FUN_009b9de8(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 009766b4 to 009766b7 has its CatchHandler @ 00976724 */
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


// ===== 00976788  FUN_00976788 =====

void FUN_00976788(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 009768c8 to 009768d3 has its CatchHandler @ 00976a94 */
          FUN_009b9de8(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_009768d4;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 00976838 to 00976847 has its CatchHandler @ 00976aa0 */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009b9b3c(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 0097688c to 00976897 has its CatchHandler @ 00976a38 */
        local_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 009769dc to 009769e7 has its CatchHandler @ 00976a2c */
        FUN_009b9de8(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_009768d4:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 2;
        local_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_009769c4;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00976928;
}


// ===== 00976ae0  FUN_00976ae0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00976ae0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 00976b1c to 00976b43 has its CatchHandler @ 00976cf0 */
    FUN_009b9de8(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 00976c58 to 00976ca3 has its CatchHandler @ 00976cf0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00976b70 to 00976b73 has its CatchHandler @ 00976ca8 */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_00976b78;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_00976b78:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 00976ba0 to 00976bab has its CatchHandler @ 00976cb0 */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974418(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 00976d4c  FUN_00976d4c =====

void FUN_00976d4c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 00976dd0 to 00976ddf has its CatchHandler @ 00976e48 */
          FUN_009b9de8(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 2;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,local_a0);
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


// ===== 00976e54  FUN_00976e54 =====

void FUN_00976e54(long param_1,long *param_2)

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
  int local_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    local_60 = (int)uVar3;
    if (local_60 != 1) {
                    /* try { // try from 00976ef8 to 00976f0f has its CatchHandler @ 00976f30 */
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
                    /* try { // try from 00976ec8 to 00976ecf has its CatchHandler @ 00976f14 */
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


// ===== 00976f54  FUN_00976f54 =====

void FUN_00976f54(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 00976fd0 to 00976fdb has its CatchHandler @ 00977068 */
          FUN_009ba1f0(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00976ff0 to 00976ff3 has its CatchHandler @ 00977060 */
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


// ===== 009770c4  FUN_009770c4 =====

void FUN_009770c4(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00977204 to 0097720f has its CatchHandler @ 009773d0 */
          FUN_009ba1f0(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_00977210;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 00977174 to 00977183 has its CatchHandler @ 009773dc */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009b9f44(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 009771c8 to 009771d3 has its CatchHandler @ 00977374 */
        local_68 = lVar5;
        FUN_009ba1f0(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00977318 to 00977323 has its CatchHandler @ 00977368 */
        FUN_009ba1f0(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_00977210:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 0xffffffffffffffff;
        local_b0._0_4_ = 1;
        FUN_009ba1f0(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00977300;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00977264;
}


// ===== 0097741c  FUN_0097741c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0097741c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 00977458 to 0097747f has its CatchHandler @ 0097762c */
    FUN_009ba1f0(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 00977594 to 009775df has its CatchHandler @ 0097762c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 009774ac to 009774af has its CatchHandler @ 009775e4 */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_009774b4;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_009774b4:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 009774dc to 009774e7 has its CatchHandler @ 009775ec */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974568(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 00977688  FUN_00977688 =====

void FUN_00977688(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 0097770c to 0097771b has its CatchHandler @ 00977784 */
          FUN_009ba1f0(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 0xffffffffffffffff;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009ba1f0(param_1 + 4,local_a0);
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


// ===== 00977790  FUN_00977790 =====

void FUN_00977790(long param_1,long *param_2)

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
  int local_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    local_60 = (int)uVar3;
    if (local_60 != 1) {
                    /* try { // try from 00977834 to 0097784b has its CatchHandler @ 0097786c */
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
                    /* try { // try from 00977804 to 0097780b has its CatchHandler @ 00977850 */
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


// ===== 00977890  FUN_00977890 =====

void FUN_00977890(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 0097790c to 00977917 has its CatchHandler @ 009779a4 */
          FUN_009ba5f8(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 0097792c to 0097792f has its CatchHandler @ 0097799c */
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


// ===== 00977a00  FUN_00977a00 =====

void FUN_00977a00(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00977b40 to 00977b4b has its CatchHandler @ 00977d0c */
          FUN_009ba5f8(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_00977b4c;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 00977ab0 to 00977abf has its CatchHandler @ 00977d18 */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009ba34c(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 00977b04 to 00977b0f has its CatchHandler @ 00977cb0 */
        local_68 = lVar5;
        FUN_009ba5f8(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00977c54 to 00977c5f has its CatchHandler @ 00977ca4 */
        FUN_009ba5f8(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_00977b4c:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 0xffffffffffffffff;
        local_b0._0_4_ = 1;
        FUN_009ba5f8(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00977c3c;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00977ba0;
}


// ===== 00977d58  FUN_00977d58 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00977d58(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 00977d94 to 00977dbb has its CatchHandler @ 00977f68 */
    FUN_009ba5f8(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 00977ed0 to 00977f1b has its CatchHandler @ 00977f68 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00977de8 to 00977deb has its CatchHandler @ 00977f20 */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_00977df0;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_00977df0:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 00977e18 to 00977e23 has its CatchHandler @ 00977f28 */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_009746fc(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 00977fc4  FUN_00977fc4 =====

void FUN_00977fc4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 00978048 to 00978057 has its CatchHandler @ 009780c0 */
          FUN_009ba5f8(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 0xffffffffffffffff;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009ba5f8(param_1 + 4,local_a0);
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


// ===== 009780cc  FUN_009780cc =====

void FUN_009780cc(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 00978148 to 00978153 has its CatchHandler @ 009781e0 */
          FUN_009ba5f8(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00978168 to 0097816b has its CatchHandler @ 009781d8 */
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


// ===== 0097823c  FUN_0097823c =====

void FUN_0097823c(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 0097837c to 00978387 has its CatchHandler @ 00978548 */
          FUN_009ba5f8(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_00978388;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 009782ec to 009782fb has its CatchHandler @ 00978554 */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009ba754(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 00978340 to 0097834b has its CatchHandler @ 009784ec */
        local_68 = lVar5;
        FUN_009ba5f8(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00978490 to 0097849b has its CatchHandler @ 009784e0 */
        FUN_009ba5f8(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_00978388:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 0xffffffffffffffff;
        local_b0._0_4_ = 1;
        FUN_009ba5f8(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00978478;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x009783dc;
}


// ===== 00978594  FUN_00978594 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00978594(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 009785d0 to 009785f7 has its CatchHandler @ 009787a4 */
    FUN_009ba5f8(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 0097870c to 00978757 has its CatchHandler @ 009787a4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00978624 to 00978627 has its CatchHandler @ 0097875c */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_0097862c;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_0097862c:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 00978654 to 0097865f has its CatchHandler @ 00978764 */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_009746fc(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 00978800  FUN_00978800 =====

void FUN_00978800(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 00978884 to 00978893 has its CatchHandler @ 009788fc */
          FUN_009ba5f8(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 0xffffffffffffffff;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009ba5f8(param_1 + 4,local_a0);
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


// ===== 00978908  FUN_00978908 =====

void FUN_00978908(long param_1,long *param_2)

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
  int local_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    local_60 = (int)uVar3;
    if (local_60 != 1) {
                    /* try { // try from 009789ac to 009789c3 has its CatchHandler @ 009789e4 */
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
                    /* try { // try from 0097897c to 00978983 has its CatchHandler @ 009789c8 */
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


// ===== 00978a08  FUN_00978a08 =====

void FUN_00978a08(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 00978a84 to 00978a8f has its CatchHandler @ 00978b1c */
          FUN_009bacac(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00978aa4 to 00978aa7 has its CatchHandler @ 00978b14 */
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


// ===== 00978b78  FUN_00978b78 =====

void FUN_00978b78(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00978cb8 to 00978cc3 has its CatchHandler @ 00978e84 */
          FUN_009bacac(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_00978cc4;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 00978c28 to 00978c37 has its CatchHandler @ 00978e90 */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009baa00(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 00978c7c to 00978c87 has its CatchHandler @ 00978e28 */
        local_68 = lVar5;
        FUN_009bacac(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00978dcc to 00978dd7 has its CatchHandler @ 00978e1c */
        FUN_009bacac(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_00978cc4:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 0xffffffffffffffff;
        local_b0._0_4_ = 1;
        FUN_009bacac(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00978db4;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00978d18;
}


// ===== 00978ed0  FUN_00978ed0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00978ed0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 00978f0c to 00978f33 has its CatchHandler @ 009790e0 */
    FUN_009bacac(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 00979048 to 00979093 has its CatchHandler @ 009790e0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00978f60 to 00978f63 has its CatchHandler @ 00979098 */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_00978f68;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_00978f68:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 00978f90 to 00978f9b has its CatchHandler @ 009790a0 */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974890(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 0097913c  FUN_0097913c =====

void FUN_0097913c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 009791c0 to 009791cf has its CatchHandler @ 00979238 */
          FUN_009bacac(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 0xffffffffffffffff;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009bacac(param_1 + 4,local_a0);
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


// ===== 00979244  FUN_00979244 =====

void FUN_00979244(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 009792c0 to 009792cb has its CatchHandler @ 00979358 */
          FUN_009b9de8(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 009792e0 to 009792e3 has its CatchHandler @ 00979350 */
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


// ===== 009793b4  FUN_009793b4 =====

void FUN_009793b4(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 009794f4 to 009794ff has its CatchHandler @ 009796c0 */
          FUN_009b9de8(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_00979500;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 00979464 to 00979473 has its CatchHandler @ 009796cc */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009bae08(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 009794b8 to 009794c3 has its CatchHandler @ 00979664 */
        local_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00979608 to 00979613 has its CatchHandler @ 00979658 */
        FUN_009b9de8(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_00979500:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 2;
        local_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_009795f0;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00979554;
}


// ===== 0097970c  FUN_0097970c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0097970c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 00979748 to 0097976f has its CatchHandler @ 0097991c */
    FUN_009b9de8(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 00979884 to 009798cf has its CatchHandler @ 0097991c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 0097979c to 0097979f has its CatchHandler @ 009798d4 */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_009797a4;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_009797a4:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 009797cc to 009797d7 has its CatchHandler @ 009798dc */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974418(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 00979978  FUN_00979978 =====

void FUN_00979978(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 009799fc to 00979a0b has its CatchHandler @ 00979a74 */
          FUN_009b9de8(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 2;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,local_a0);
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


// ===== 00979a80  FUN_00979a80 =====

void FUN_00979a80(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 00979afc to 00979b07 has its CatchHandler @ 00979b94 */
          FUN_009b9de8(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00979b1c to 00979b1f has its CatchHandler @ 00979b8c */
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


// ===== 00979bf0  FUN_00979bf0 =====

void FUN_00979bf0(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00979d30 to 00979d3b has its CatchHandler @ 00979efc */
          FUN_009b9de8(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_00979d3c;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 00979ca0 to 00979caf has its CatchHandler @ 00979f08 */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009bb0b4(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 00979cf4 to 00979cff has its CatchHandler @ 00979ea0 */
        local_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 00979e44 to 00979e4f has its CatchHandler @ 00979e94 */
        FUN_009b9de8(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_00979d3c:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 2;
        local_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00979e2c;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x00979d90;
}


// ===== 00979f48  FUN_00979f48 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00979f48(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 00979f84 to 00979fab has its CatchHandler @ 0097a158 */
    FUN_009b9de8(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 0097a0c0 to 0097a10b has its CatchHandler @ 0097a158 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 00979fd8 to 00979fdb has its CatchHandler @ 0097a110 */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_00979fe0;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_00979fe0:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 0097a008 to 0097a013 has its CatchHandler @ 0097a118 */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974418(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 0097a1b4  FUN_0097a1b4 =====

void FUN_0097a1b4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 0097a238 to 0097a247 has its CatchHandler @ 0097a2b0 */
          FUN_009b9de8(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 2;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,local_a0);
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


// ===== 0097a2bc  FUN_0097a2bc =====

void FUN_0097a2bc(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 0097a338 to 0097a343 has its CatchHandler @ 0097a3d0 */
          FUN_009b9de8(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 0097a358 to 0097a35b has its CatchHandler @ 0097a3c8 */
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


// ===== 0097a42c  FUN_0097a42c =====

void FUN_0097a42c(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 0097a56c to 0097a577 has its CatchHandler @ 0097a738 */
          FUN_009b9de8(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_0097a578;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 0097a4dc to 0097a4eb has its CatchHandler @ 0097a744 */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009bb360(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 0097a530 to 0097a53b has its CatchHandler @ 0097a6dc */
        local_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 0097a680 to 0097a68b has its CatchHandler @ 0097a6d0 */
        FUN_009b9de8(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_0097a578:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 2;
        local_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0097a668;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x0097a5cc;
}


// ===== 0097a784  FUN_0097a784 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0097a784(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 0097a7c0 to 0097a7e7 has its CatchHandler @ 0097a994 */
    FUN_009b9de8(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 0097a8fc to 0097a947 has its CatchHandler @ 0097a994 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 0097a814 to 0097a817 has its CatchHandler @ 0097a94c */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_0097a81c;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_0097a81c:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 0097a844 to 0097a84f has its CatchHandler @ 0097a954 */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974418(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 0097a9f0  FUN_0097a9f0 =====

void FUN_0097a9f0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 0097aa74 to 0097aa83 has its CatchHandler @ 0097aaec */
          FUN_009b9de8(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 2;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,local_a0);
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


// ===== 0097aaf8  FUN_0097aaf8 =====

void FUN_0097aaf8(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70 [16];
  
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
          local_70[0] = 2;
                    /* try { // try from 0097ab74 to 0097ab7f has its CatchHandler @ 0097ac0c */
          FUN_009b9de8(param_1 + 4,local_70);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 0097ab94 to 0097ab97 has its CatchHandler @ 0097ac04 */
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


// ===== 0097ac68  FUN_0097ac68 =====

void FUN_0097ac68(ulong *param_1)

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
  undefined *local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  long local_68;
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
          local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 0097ada8 to 0097adb3 has its CatchHandler @ 0097af74 */
          FUN_009b9de8(param_1 + 4,&local_70);
          uStack_90 = extraout_x1;
          goto LAB_0097adb4;
        }
        local_c0 = 0;
        local_100 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 0097ad18 to 0097ad27 has its CatchHandler @ 0097af80 */
        puStack_f8 = param_1;
        local_d0 = (undefined1 *)&local_100;
        puStack_c8 = (undefined1 *)&local_100;
        FUN_009bb60c(&local_b0,param_1 + 4,&local_d0);
        lVar5 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
        uStack_e8 = uStack_80;
        local_f0 = local_88;
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
          local_e0 = local_88;
          uStack_60 = local_a8;
          uStack_48 = uStack_90;
        }
        uStack_38 = uStack_d8;
        uStack_40 = local_e0;
        local_70 = CONCAT44(local_70._4_4_,1);
                    /* try { // try from 0097ad6c to 0097ad77 has its CatchHandler @ 0097af18 */
        local_68 = lVar5;
        FUN_009b9de8(param_1 + 4,&local_70);
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
    puVar8 = &local_b0;
    local_70 = 1;
  }
  else {
    uVar6 = 0;
    puVar8 = &local_70;
    uVar4 = 3;
  }
  *puVar8 = uVar6;
  if (local_70 != 1) {
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
        local_70 = CONCAT44(local_70._4_4_,2);
                    /* try { // try from 0097aebc to 0097aec7 has its CatchHandler @ 0097af0c */
        FUN_009b9de8(param_1 + 4,&local_70);
        uStack_90 = extraout_x1_00;
LAB_0097adb4:
        local_a0 = param_1[6];
        local_98 = 0;
        local_a8 = 2;
        local_b0._0_4_ = 1;
        FUN_009b9de8(param_1 + 4,&local_b0);
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
      *param_1 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0097aea4;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x0097ae08;
}


// ===== 0097afc0  FUN_0097afc0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0097afc0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_a0 [16];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_a0[0] = 2;
                    /* try { // try from 0097affc to 0097b023 has its CatchHandler @ 0097b1d0 */
    FUN_009b9de8(param_1 + 4,local_a0);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0x11] == 0) {
                    /* try { // try from 0097b138 to 0097b183 has its CatchHandler @ 0097b1d0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0x11] + 0x10))(param_1[0x12]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0x11] != 0) {
                    /* try { // try from 0097b050 to 0097b053 has its CatchHandler @ 0097b188 */
            (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
          }
          param_1[0x11] = 0;
        }
        goto LAB_0097b058;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_0097b058:
  if (param_1[0x13] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 0097b080 to 0097b08b has its CatchHandler @ 0097b190 */
    (**(code **)(param_1[0x14] + 0x28))
              (param_1[0x13] + (*(long *)(param_1[0x14] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974418(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 0097b22c  FUN_0097b22c =====

void FUN_0097b22c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_60 [16];
  
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
          local_60[0] = 2;
                    /* try { // try from 0097b2b0 to 0097b2bf has its CatchHandler @ 0097b328 */
          FUN_009b9de8(param_1 + 4,local_60);
          uStack_90 = param_1[6];
          local_88 = 0;
          local_98 = 2;
          local_a0[0] = 1;
          uStack_80 = extraout_x1;
          FUN_009b9de8(param_1 + 4,local_a0);
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


// ===== 0097b334  FUN_0097b334 =====

void FUN_0097b334(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int local_50;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x68);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    local_50 = (int)uVar3;
    if (local_50 != 1) {
                    /* try { // try from 0097b3c4 to 0097b3db has its CatchHandler @ 0097b3f4 */
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
                    /* try { // try from 0097b39c to 0097b3a3 has its CatchHandler @ 0097b3e0 */
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


// ===== 0097b40c  FUN_0097b40c =====

void FUN_0097b40c(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_60 [12];
  
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
          local_60[0] = 2;
                    /* try { // try from 0097b488 to 0097b493 has its CatchHandler @ 0097b520 */
          FUN_009bba4c(param_1 + 4,local_60);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0xf] != 0) {
                    /* try { // try from 0097b4a8 to 0097b4ab has its CatchHandler @ 0097b518 */
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


// ===== 0097b57c  FUN_0097b57c =====

void FUN_0097b57c(ulong *param_1)

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
  undefined *local_c0;
  ulong *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_60;
  undefined8 local_58;
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
          local_60 = CONCAT44(local_60._4_4_,2);
                    /* try { // try from 0097b728 to 0097b733 has its CatchHandler @ 0097b86c */
          FUN_009bba4c(param_1 + 4,&local_60);
          uStack_70 = extraout_x1;
          goto LAB_0097b734;
        }
        local_a0 = 0;
        local_c0 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 0097b62c to 0097b63b has its CatchHandler @ 0097b878 */
        puStack_b8 = param_1;
        local_b0 = (undefined1 *)&local_c0;
        puStack_a8 = (undefined1 *)&local_c0;
        FUN_009bb8b8(&local_90,param_1 + 4,&local_b0);
        if (CONCAT44(local_90._4_4_,(undefined4)local_90) == 0) {
          local_58 = 0;
          uStack_50 = local_88;
          uStack_38 = uStack_70;
        }
        else {
          if (CONCAT44(local_90._4_4_,(undefined4)local_90) != 2) {
            uVar3 = *param_1;
            goto joined_r0x0097b660;
          }
          local_58 = 1;
          uStack_50 = param_1[6];
          uStack_38 = 0;
        }
        local_60 = CONCAT44(local_60._4_4_,1);
                    /* try { // try from 0097b774 to 0097b77f has its CatchHandler @ 0097b810 */
        FUN_009bba4c(param_1 + 4,&local_60);
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
    puVar7 = &local_90;
    local_60 = 1;
  }
  else {
    uVar5 = 0;
    puVar7 = &local_60;
    uVar4 = 3;
  }
  *puVar7 = uVar5;
  if (local_60 != 1) {
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
        local_60 = CONCAT44(local_60._4_4_,2);
                    /* try { // try from 0097b7b4 to 0097b7bf has its CatchHandler @ 0097b804 */
        FUN_009bba4c(param_1 + 4,&local_60);
        uStack_70 = extraout_x1_00;
LAB_0097b734:
        local_80 = param_1[6];
        local_78 = 0;
        local_90._0_4_ = 1;
        local_88 = 1;
        FUN_009bba4c(param_1 + 4,&local_90);
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
      *param_1 = CONCAT44(local_90._4_4_,(undefined4)local_90);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0097b79c;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x0097b660;
}


// ===== 0097b8b8  FUN_0097b8b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0097b8b8(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_90 [12];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_90[0] = 2;
                    /* try { // try from 0097b8f4 to 0097b91b has its CatchHandler @ 0097bac8 */
    FUN_009bba4c(param_1 + 4,local_90);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0xf] == 0) {
                    /* try { // try from 0097ba30 to 0097ba7b has its CatchHandler @ 0097bac8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0xf] + 0x10))(param_1[0x10]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0xf] != 0) {
                    /* try { // try from 0097b948 to 0097b94b has its CatchHandler @ 0097ba80 */
            (**(code **)(param_1[0xf] + 0x18))(param_1[0x10]);
          }
          param_1[0xf] = 0;
        }
        goto LAB_0097b950;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_0097b950:
  if (param_1[0x11] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 0097b978 to 0097b983 has its CatchHandler @ 0097ba88 */
    (**(code **)(param_1[0x12] + 0x28))
              (param_1[0x11] + (*(long *)(param_1[0x12] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974a04(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 0097bb24  FUN_0097bb24 =====

void FUN_0097bb24(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50 [12];
  
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
          local_50[0] = 2;
                    /* try { // try from 0097bba8 to 0097bbb7 has its CatchHandler @ 0097bc1c */
          FUN_009bba4c(param_1 + 4,local_50);
          uStack_70 = param_1[6];
          local_68 = 0;
          local_80[0] = 1;
          local_78 = 1;
          uStack_60 = extraout_x1;
          FUN_009bba4c(param_1 + 4,local_80);
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


// ===== 0097bc28  FUN_0097bc28 =====

void FUN_0097bc28(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_60 [12];
  
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
          local_60[0] = 2;
                    /* try { // try from 0097bca4 to 0097bcaf has its CatchHandler @ 0097bd3c */
          FUN_009bba4c(param_1 + 4,local_60);
        }
        if (((uint)(uVar1 & uVar5) >> 4 & 1) == 0) {
          if (param_1[0xf] != 0) {
                    /* try { // try from 0097bcc4 to 0097bcc7 has its CatchHandler @ 0097bd34 */
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


// ===== 0097bd98  FUN_0097bd98 =====

void FUN_0097bd98(ulong *param_1)

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
  undefined *local_c0;
  ulong *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_60;
  undefined8 local_58;
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
          local_60 = CONCAT44(local_60._4_4_,2);
                    /* try { // try from 0097bf44 to 0097bf4f has its CatchHandler @ 0097c088 */
          FUN_009bba4c(param_1 + 4,&local_60);
          uStack_70 = extraout_x1;
          goto LAB_0097bf50;
        }
        local_a0 = 0;
        local_c0 = PTR_WAKER_VTABLE_00b00d40;
                    /* try { // try from 0097be48 to 0097be57 has its CatchHandler @ 0097c094 */
        puStack_b8 = param_1;
        local_b0 = (undefined1 *)&local_c0;
        puStack_a8 = (undefined1 *)&local_c0;
        FUN_009bbbd8(&local_90,param_1 + 4,&local_b0);
        if (CONCAT44(local_90._4_4_,(undefined4)local_90) == 0) {
          local_58 = 0;
          uStack_50 = local_88;
          uStack_38 = uStack_70;
        }
        else {
          if (CONCAT44(local_90._4_4_,(undefined4)local_90) != 2) {
            uVar3 = *param_1;
            goto joined_r0x0097be7c;
          }
          local_58 = 1;
          uStack_50 = param_1[6];
          uStack_38 = 0;
        }
        local_60 = CONCAT44(local_60._4_4_,1);
                    /* try { // try from 0097bf90 to 0097bf9b has its CatchHandler @ 0097c02c */
        FUN_009bba4c(param_1 + 4,&local_60);
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
    puVar7 = &local_90;
    local_60 = 1;
  }
  else {
    uVar5 = 0;
    puVar7 = &local_60;
    uVar4 = 3;
  }
  *puVar7 = uVar5;
  if (local_60 != 1) {
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
        local_60 = CONCAT44(local_60._4_4_,2);
                    /* try { // try from 0097bfd0 to 0097bfdb has its CatchHandler @ 0097c020 */
        FUN_009bba4c(param_1 + 4,&local_60);
        uStack_70 = extraout_x1_00;
LAB_0097bf50:
        local_80 = param_1[6];
        local_78 = 0;
        local_90._0_4_ = 1;
        local_88 = 1;
        FUN_009bba4c(param_1 + 4,&local_90);
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
      *param_1 = CONCAT44(local_90._4_4_,(undefined4)local_90);
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0097bfb8;
  }
  ClearExclusiveLocal();
  uVar3 = *param_1;
  goto joined_r0x0097be7c;
}


// ===== 0097c0d4  FUN_0097c0d4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0097c0d4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_90 [12];
  ulong local_60 [2];
  ulong *local_50;
  undefined *puStack_48;
  ulong *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  do {
    uVar7 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 ^ 3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = (uint)uVar7;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.is_running()",0x23,
               &PTR_s__root__cargo_registry_src_index__00af3e98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: !prev.is_complete()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3eb0);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    local_90[0] = 2;
                    /* try { // try from 0097c110 to 0097c137 has its CatchHandler @ 0097c2e4 */
    FUN_009bba4c(param_1 + 4,local_90);
  }
  else if ((uVar6 >> 4 & 1) != 0) {
    if (param_1[0xf] == 0) {
                    /* try { // try from 0097c24c to 0097c297 has its CatchHandler @ 0097c2e4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037cadc,0x1b,&PTR_s__root__cargo_registry_src_index__00af5798);
    }
    (**(code **)(param_1[0xf] + 0x10))(param_1[0x10]);
    do {
      uVar7 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar7 & 0xffffffffffffffef;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ee0;
      pcVar3 = "assertion failed: prev.is_complete()";
      uVar4 = 0x24;
    }
    else {
      if ((uVar6 >> 4 & 1) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if (param_1[0xf] != 0) {
                    /* try { // try from 0097c164 to 0097c167 has its CatchHandler @ 0097c29c */
            (**(code **)(param_1[0xf] + 0x18))(param_1[0x10]);
          }
          param_1[0xf] = 0;
        }
        goto LAB_0097c16c;
      }
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af3ef8;
      pcVar3 = "assertion failed: prev.is_join_waker_set()";
      uVar4 = 0x2a;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(pcVar3,uVar4,ppuVar5);
  }
LAB_0097c16c:
  if (param_1[0x11] != 0) {
    local_60[0] = param_1[6];
                    /* try { // try from 0097c194 to 0097c19f has its CatchHandler @ 0097c2a4 */
    (**(code **)(param_1[0x12] + 0x28))
              (param_1[0x11] + (*(long *)(param_1[0x12] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               local_60);
  }
  local_60[1] = 1;
  do {
    local_18 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = local_18 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_18 = local_18 >> 6;
  if (local_18 != 0) {
    if (local_18 == 1) {
      FUN_00974a04(param_1);
    }
    return;
  }
  local_50 = &local_18;
  puStack_48 = PTR_fmt_00b00c10;
  local_40 = local_60 + 1;
  puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a5ba4,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ec8);
}


// ===== 0097c340  FUN_0097c340 =====

void FUN_0097c340(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50 [12];
  
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
          local_50[0] = 2;
                    /* try { // try from 0097c3c4 to 0097c3d3 has its CatchHandler @ 0097c438 */
          FUN_009bba4c(param_1 + 4,local_50);
          uStack_70 = param_1[6];
          local_68 = 0;
          local_80[0] = 1;
          local_78 = 1;
          uStack_60 = extraout_x1;
          FUN_009bba4c(param_1 + 4,local_80);
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


// ===== 0097c444  tokio::runtime::task::harness::can_read_output =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::task::harness::can_read_output */

undefined8 __rustcall
tokio::runtime::task::harness::can_read_output(ulong *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar6 = (uint)*param_1;
  if ((uVar6 >> 1 & 1) != 0) {
    return 1;
  }
  if ((uVar6 >> 4 & 1) == 0) {
    auVar8 = (**(code **)*param_3)(param_3[1]);
    if ((uVar6 >> 3 & 1) == 0) {
                    /* try { // try from 0097c658 to 0097c66f has its CatchHandler @ 0097c6cc */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: snapshot.is_join_interested()",0x2f,
                 &PTR_s__root__cargo_registry_src_index__00af36b0);
    }
    if (*(long *)(param_2 + 0x10) != 0) {
                    /* try { // try from 0097c494 to 0097c497 has its CatchHandler @ 0097c6c4 */
      (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
    }
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar8;
    uVar6 = (uint)*param_1;
    uVar7 = *param_1;
    do {
      if ((uVar6 >> 3 & 1) == 0) {
LAB_0097c4dc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: curr.is_join_interested()",0x2b,
                   &PTR_s__root__cargo_registry_src_index__00af3dd8);
      }
      if (((uint)uVar7 >> 4 & 1) != 0) {
LAB_0097c640:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: !curr.is_join_waker_set()",0x2b,
                   &PTR_s__root__cargo_registry_src_index__00af3df0);
      }
      if (((uint)uVar7 >> 1 & 1) != 0) goto LAB_0097c60c;
      while (uVar5 = *param_1, uVar5 == uVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = uVar7 | 0x10;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return 0;
        }
      }
      ClearExclusiveLocal();
      uVar6 = (uint)uVar5;
      uVar7 = uVar5;
    } while( true );
  }
  if (*(undefined8 **)(param_2 + 0x10) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af5cb8);
  }
  puVar1 = (undefined8 *)*param_3;
  lVar2 = param_3[1];
  if ((*(long *)(param_2 + 0x18) == lVar2) && (*(undefined8 **)(param_2 + 0x10) == puVar1)) {
    return 0;
  }
  uVar6 = (uint)*param_1;
  uVar7 = *param_1;
  while( true ) {
    if ((uVar6 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: curr.is_join_interested()",0x2b,
                 &PTR_s__root__cargo_registry_src_index__00af3da8);
    }
    if (((uint)uVar7 >> 1 & 1) != 0) break;
    if (((uint)uVar7 >> 4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: curr.is_join_waker_set()",0x2a,
                 &PTR_s__root__cargo_registry_src_index__00af3dc0);
    }
    while (uVar5 = *param_1, uVar5 == uVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = uVar7 & 0xffffffffffffffed;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        auVar8 = (*(code *)*puVar1)(lVar2);
        if (*(long *)(param_2 + 0x10) != 0) {
                    /* try { // try from 0097c5c0 to 0097c5c3 has its CatchHandler @ 0097c6b8 */
          (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
        }
        *(undefined1 (*) [16])(param_2 + 0x10) = auVar8;
        uVar6 = (uint)*param_1;
        uVar7 = *param_1;
        goto joined_r0x0097c5d0;
      }
    }
    ClearExclusiveLocal();
    uVar6 = (uint)uVar5;
    uVar7 = uVar5;
  }
LAB_0097c624:
  if (((uint)uVar7 >> 1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: snapshot.is_complete()",0x28,
             &PTR_s__root__cargo_registry_src_index__00af36c8);
joined_r0x0097c5d0:
  if ((uVar6 >> 3 & 1) == 0) goto LAB_0097c4dc;
  if (((uint)uVar7 >> 4 & 1) != 0) goto LAB_0097c640;
  if (((uint)uVar7 >> 1 & 1) != 0) goto LAB_0097c60c;
  while (uVar5 = *param_1, uVar5 == uVar7) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = uVar7 | 0x10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      return 0;
    }
  }
  ClearExclusiveLocal();
  uVar6 = (uint)uVar5;
  uVar7 = uVar5;
  goto joined_r0x0097c5d0;
LAB_0097c60c:
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* try { // try from 0097c61c to 0097c61f has its CatchHandler @ 0097c6b0 */
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  goto LAB_0097c624;
}


// ===== 0097c6e8  FUN_0097c6e8 =====

void FUN_0097c6e8(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar10 = *param_3;
  plVar7 = (long *)(*(code *)*param_1)(0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  if (plVar7[3] == lVar10) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar8 = *plVar7;
    *param_2 = 2;
    if (lVar8 != 0) {
                    /* try { // try from 0097c800 to 0097c80b has its CatchHandler @ 0097c834 */
      core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af3730);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x97c810);
      (*pcVar5)();
    }
    *plVar7 = -1;
    if (plVar7[1] != 2) {
      if (plVar7[1] == 0) {
        plVar9 = (long *)plVar7[2];
        do {
          lVar8 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
          drop_slow(plVar7 + 2);
        }
      }
      else {
        plVar9 = (long *)plVar7[2];
        do {
          lVar8 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0097c770 to 0097c79f has its CatchHandler @ 0097c81c */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
          ::drop_slow(plVar7 + 2);
        }
      }
    }
    *plVar7 = *plVar7 + 1;
    plVar7[1] = lVar1;
    plVar7[2] = lVar2;
    plVar7[3] = lVar10 + -1;
  }
  else if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) ||
          (iVar6 = std::panicking::panic_count::is_zero_slow_path(), iVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired."
               ,0x135,&PTR_s__root__cargo_registry_src_index__00af3748);
  }
  return;
}


// ===== 0097c84c  FUN_0097c84c =====

char FUN_0097c84c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  undefined1 unaff_w25;
  undefined **local_88;
  long *plStack_80;
  undefined ***local_78;
  undefined ***pppuStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 uStack_31;
  
  uVar9 = DAT_00b0f6c0;
  if (DAT_00b0f6c0 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b0f6c0);
    puVar5 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar9);
  }
  else {
    puVar5 = (undefined8 *)pthread_getspecific((pthread_key_t)DAT_00b0f6c0);
  }
  if (puVar5 < (undefined8 *)0x2) {
    puVar5 = (undefined8 *)FUN_00996818(uVar9 & 0xffffffff,puVar5,0);
  }
  if (puVar5 == (undefined8 *)0x0) {
    cVar4 = '\x02';
  }
  else {
    plStack_80 = (long *)*puVar5;
    do {
      lVar8 = *plStack_80;
      cVar4 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar1) {
        *plStack_80 = lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar2 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    } while (cVar4 != '\0');
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x97cab0);
      (*pcVar3)();
    }
    plStack_80 = plStack_80 + 2;
    local_88 = &PTR_FUN_00af38d0;
    local_78 = &local_88;
    local_68 = 0;
    pppuStack_70 = local_78;
    local_58 = param_2;
    while( true ) {
      uVar9 = *(ulong *)puVar2;
      if (uVar9 == 0) {
        uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                lazy_init(puVar2);
        pvVar6 = pthread_getspecific((pthread_key_t)uVar9);
      }
      else {
        pvVar6 = pthread_getspecific((pthread_key_t)uVar9);
      }
      if (pvVar6 < (void *)0x2) {
        pvVar6 = (void *)FUN_00996984(uVar9 & 0xffffffff,pvVar6,0);
      }
      if (pvVar6 == (void *)0x0) {
        cVar10 = '\x02';
      }
      else {
        cVar10 = *(char *)((long)pvVar6 + 0x44);
        unaff_w25 = *(undefined1 *)((long)pvVar6 + 0x45);
        *(undefined2 *)((long)pvVar6 + 0x44) = 0x8001;
      }
                    /* try { // try from 0097c914 to 0097c91f has its CatchHandler @ 0097cabc */
      cVar4 = FUN_009c690c(&local_58,&local_78);
      if (cVar10 != '\x02') {
        uVar9 = *(ulong *)puVar2;
        if (uVar9 == 0) {
          uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                  lazy_init(puVar2);
          pvVar6 = pthread_getspecific((pthread_key_t)uVar9);
        }
        else {
          pvVar6 = pthread_getspecific((pthread_key_t)uVar9);
        }
        if (pvVar6 < (void *)0x2) {
          pvVar6 = (void *)FUN_00996984(uVar9 & 0xffffffff,pvVar6,0);
        }
        if (pvVar6 != (void *)0x0) {
          *(char *)((long)pvVar6 + 0x44) = cVar10;
          *(undefined1 *)((long)pvVar6 + 0x45) = unaff_w25;
        }
      }
      uVar9 = DAT_00b0f6c0;
      if (cVar4 != '\x02') break;
      if (DAT_00b0f6c0 == 0) {
        uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                lazy_init(&DAT_00b0f6c0);
        plVar7 = (long *)pthread_getspecific((pthread_key_t)uVar9);
      }
      else {
        plVar7 = (long *)pthread_getspecific((pthread_key_t)DAT_00b0f6c0);
      }
      if (plVar7 < (long *)0x2) {
        plVar7 = (long *)FUN_00996818(uVar9 & 0xffffffff,plVar7,0);
      }
      if (plVar7 == (long *)0x0) {
                    /* try { // try from 0097ca88 to 0097caab has its CatchHandler @ 0097cab0 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_31,&DAT_00af37a8,
                   &PTR_s__root__cargo_registry_src_index__00af38b8);
      }
                    /* try { // try from 0097c984 to 0097ca1b has its CatchHandler @ 0097cab4 */
      FUN_0097f56c(*plVar7 + 0x10);
    }
    (*(code *)local_88[3])(plStack_80);
  }
  return cVar4;
}


// ===== 0097caec  FUN_0097caec =====

void FUN_0097caec(long *param_1)

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


// ===== 0097cb48  FUN_0097cb48 =====

void FUN_0097cb48(void *param_1)

{
  long lVar1;
  
  if ((param_1 != (void *)0xffffffffffffffff) &&
     (lVar1 = *(long *)((long)param_1 + 8) + -1, *(long *)((long)param_1 + 8) = lVar1, lVar1 == 0))
  {
    free(param_1);
    return;
  }
  return;
}


// ===== 0097cb70  FUN_0097cb70 =====

void FUN_0097cb70(long param_1)

{
  long lVar1;
  
                    /* try { // try from 0097cb80 to 0097cb87 has its CatchHandler @ 0097cc10 */
  FUN_00998cc4(param_1 + 0x38);
  if (*(long *)(param_1 + 0x38) != 0) {
    free(*(void **)(param_1 + 0x40));
  }
  lVar1 = *(long *)(param_1 + 0x60);
                    /* try { // try from 0097cbb0 to 0097cbb3 has its CatchHandler @ 0097cbf0 */
  if ((lVar1 != -1) && (FUN_00998cc4(), lVar1 != 0)) {
    free(*(void **)(param_1 + 0x68));
  }
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0097cbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  return;
}


// ===== 0097cc54  FUN_0097cc54 =====

void FUN_0097cc54(long *param_1)

{
                    /* try { // try from 0097cc64 to 0097cc6b has its CatchHandler @ 0097cccc */
  FUN_00998af4(param_1 + 8);
  if (param_1[8] != 0) {
    free((void *)param_1[9]);
  }
  if (*param_1 != 2) {
                    /* try { // try from 0097cc90 to 0097cc97 has its CatchHandler @ 0097ccb0 */
    FUN_0097d110(param_1);
  }
  free(param_1);
  return;
}


// ===== 0097cd18  FUN_0097cd18 =====

void FUN_0097cd18(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *__ptr;
  
  __ptr = (long *)*param_1;
  puVar3 = (ulong *)*__ptr;
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
                    /* try { // try from 0097cd50 to 0097cd77 has its CatchHandler @ 0097ce38 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
                    /* try { // try from 0097cd78 to 0097cd7f has its CatchHandler @ 0097ce08 */
  FUN_009b1ce8(__ptr + 3);
  plVar5 = (long *)__ptr[3];
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
                    /* try { // try from 0097cd9c to 0097cda3 has its CatchHandler @ 0097ce00 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
    ::drop_slow(__ptr + 3);
  }
  plVar5 = (long *)__ptr[1];
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
                    /* try { // try from 0097cdc8 to 0097cdcb has its CatchHandler @ 0097cde4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
      drop_slow();
    }
  }
  free(__ptr);
  return;
}


// ===== 0097ce88  FUN_0097ce88 =====

void FUN_0097ce88(long *param_1)

{
                    /* try { // try from 0097ce98 to 0097ce9b has its CatchHandler @ 0097cec8 */
  FUN_00998cc4();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0097ceec  FUN_0097ceec =====

void FUN_0097ceec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
                    /* try { // try from 0097cf08 to 0097cf0b has its CatchHandler @ 0097cf34 */
  if ((lVar1 != -1) && (FUN_00998cc4(), lVar1 != 0)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 0097cf58  FUN_0097cf58 =====

void FUN_0097cf58(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0097cf68 to 0097cf6b has its CatchHandler @ 0097cfa4 */
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


// ===== 0097cfd8  FUN_0097cfd8 =====

void FUN_0097cfd8(undefined8 *param_1)

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
                    /* try { // try from 0097d004 to 0097d00b has its CatchHandler @ 0097d01c */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>::
    drop_slow(param_1);
  }
  FUN_0097cd18(param_1 + 1);
  return;
}


// ===== 0097d034  FUN_0097d034 =====

void FUN_0097d034(long param_1)

{
                    /* try { // try from 0097d044 to 0097d04b has its CatchHandler @ 0097d078 */
  FUN_00998cc4(param_1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    free(*(void **)(param_1 + 0x30));
    return;
  }
  return;
}


// ===== 0097d09c  FUN_0097d09c =====

void FUN_0097d09c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *local_28;
  
  plVar1 = (long *)*param_1;
  lVar2 = param_1[1];
  param_1[1] = 0;
  local_28 = (long *)*plVar1;
  *plVar1 = lVar2;
  if ((local_28 != (long *)0x0) && (lVar2 = *local_28, *local_28 = lVar2 + -1, lVar2 + -1 == 0)) {
    <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(&local_28);
    *(char *)(plVar1 + 1) = (char)param_1[2];
    return;
  }
  *(char *)(plVar1 + 1) = (char)param_1[2];
  return;
}


// ===== 0097d110  FUN_0097d110 =====

void FUN_0097d110(long param_1)

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
                    /* try { // try from 0097d170 to 0097d173 has its CatchHandler @ 0097d1e8 */
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


// ===== 0097d1fc  FUN_0097d1fc =====

void FUN_0097d1fc(long *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
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
                    /* try { // try from 0097d298 to 0097d29b has its CatchHandler @ 0097d314 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
    if (param_1[3] != 0) {
                    /* try { // try from 0097d2a4 to 0097d2a7 has its CatchHandler @ 0097d32c */
      FUN_0097cc54();
    }
    puVar6 = (undefined8 *)(param_1[6] + 8);
    lVar5 = param_1[7] + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      plVar4 = puVar6 + -1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 2;
                    /* try { // try from 0097d2d0 to 0097d2d3 has its CatchHandler @ 0097d370 */
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
                    /* try { // try from 0097d238 to 0097d23b has its CatchHandler @ 0097d340 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
      ::drop_slow();
    }
    if (param_1[3] != 0) {
                    /* try { // try from 0097d248 to 0097d24b has its CatchHandler @ 0097d35c */
      FUN_0097cd18();
    }
    puVar6 = (undefined8 *)(param_1[6] + 8);
    lVar5 = param_1[7] + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      plVar4 = puVar6 + -1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 2;
                    /* try { // try from 0097d274 to 0097d277 has its CatchHandler @ 0097d394 */
      (**(code **)(*plVar4 + 0x18))(uVar1);
    }
  }
  if (param_1[5] != 0) {
    free((void *)param_1[6]);
    return;
  }
  return;
}


// ===== 0097d3d8  FUN_0097d3d8 =====

void FUN_0097d3d8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0097d3e8 to 0097d3fb has its CatchHandler @ 0097d470 */
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


// ===== 0097d488  FUN_0097d488 =====

void FUN_0097d488(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0097d498 to 0097d49b has its CatchHandler @ 0097d538 */
  <tokio::runtime::context::runtime::EnterRuntimeGuard_as_core::ops::drop::Drop>::drop();
                    /* try { // try from 0097d49c to 0097d4af has its CatchHandler @ 0097d524 */
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


// ===== 0097d550  FUN_0097d550 =====

void FUN_0097d550(long param_1)

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
                    /* try { // try from 0097d588 to 0097d58b has its CatchHandler @ 0097d5cc */
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  if (*(long *)(param_1 + 8) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0097d610  FUN_0097d610 =====

void FUN_0097d610(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *local_18;
  
  local_18 = (long *)(param_1 + -0x10);
  do {
    lVar3 = *local_18;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_18,0x10);
    if (bVar2) {
      *local_18 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow(&local_18);
  }
  return;
}


// ===== 0097d650  FUN_0097d650 =====

void FUN_0097d650(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *local_28;
  
  plVar4 = (long *)(param_1 + -0x10);
  *(undefined4 *)(param_1 + 200) = 1;
                    /* try { // try from 0097d674 to 0097d67b has its CatchHandler @ 0097d6ac */
  local_28 = plVar4;
  FUN_00989458(param_1 + 0xd0);
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
    drop_slow(&local_28);
  }
  return;
}


// ===== 0097d6dc  FUN_0097d6dc =====

undefined1  [16] FUN_0097d6dc(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar4 = (long *)(param_1 + -0x10);
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
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = &PTR_FUN_00af36f8;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x97d708);
  (*pcVar3)();
}


// ===== 0097d708  FUN_0097d708 =====

void FUN_0097d708(long param_1)

{
  *(undefined4 *)(param_1 + 200) = 1;
  FUN_00989458(param_1 + 0xd0);
  return;
}


// ===== 0097d71c  FUN_0097d71c =====

void FUN_0097d71c(int *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined4 extraout_w1;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  long *plStack_60;
  undefined8 local_58;
  
  puVar3 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar10 == 0) {
                    /* try { // try from 0097d8c0 to 0097d903 has its CatchHandler @ 0097d9a4 */
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (puVar6 <= &DAT_00000001) goto LAB_0097d8e0;
  }
  else {
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (puVar6 < (undefined1 *)0x2) {
LAB_0097d8e0:
      puVar6 = (undefined1 *)FUN_00996984(uVar10 & 0xffffffff,puVar6,0);
    }
  }
  if (puVar6 == (undefined1 *)0x0) {
LAB_0097d8f8:
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  if (puVar6[0x46] == '\x02') {
    iVar2 = *param_1;
    lVar9 = *(long *)(param_1 + 2);
    puVar6[0x46] = param_2;
    lVar1 = 0x1d0;
    if (iVar2 == 0) {
      lVar1 = 0x170;
    }
                    /* try { // try from 0097d798 to 0097d7e3 has its CatchHandler @ 0097d9a4 */
    uVar4 = <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed
                      (lVar9 + lVar1);
    if ((*(uint *)(puVar6 + 0x38) & 1) == 0) {
      uVar7 = FUN_009c64a0();
      uVar11 = (undefined4)((ulong)uVar7 >> 0x20);
      uVar5 = (uint)uVar7;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
    }
    else {
      uVar11 = *(undefined4 *)(puVar6 + 0x3c);
      uVar5 = *(uint *)(puVar6 + 0x40);
    }
    *(undefined4 *)(puVar6 + 0x40) = extraout_w1;
    *(undefined4 *)(puVar6 + 0x38) = 1;
    *(undefined4 *)(puVar6 + 0x3c) = uVar4;
    <tokio::runtime::context::current::tokio::runtime::context::Context>::set_current
              (&local_a8,puVar6,param_1);
    local_90 = CONCAT44(uVar5,uVar11);
    lStack_c8 = uStack_98;
    local_d0 = local_a0;
    local_c0 = local_90;
    if (local_a8 == -2) goto LAB_0097d8f8;
    if (local_a8 != -1) {
      local_d0 = local_a8;
      local_b8 = local_90;
      local_78 = 8;
      uStack_70 = 0;
      local_c0 = uStack_98;
      lStack_c8 = local_a0;
      local_a8 = 1;
      local_68 = &local_a8;
      local_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      local_88 = 0;
      uVar10 = *(ulong *)puVar3;
      local_a0 = param_3;
      plStack_60 = local_68;
      local_58 = param_4;
      if (uVar10 == 0) {
                    /* try { // try from 0097d908 to 0097d937 has its CatchHandler @ 0097d96c */
        uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
        pvVar8 = pthread_getspecific((pthread_key_t)uVar10);
      }
      else {
        pvVar8 = pthread_getspecific((pthread_key_t)uVar10);
      }
      if (pvVar8 < (void *)0x2) {
        pvVar8 = (void *)FUN_00996984(uVar10 & 0xffffffff,pvVar8,0);
      }
      if (pvVar8 != (void *)0x0) {
                    /* try { // try from 0097d880 to 0097d893 has its CatchHandler @ 0097d988 */
        FUN_009accc4((long)pvVar8 + 0x28,&local_a8,&local_a8,param_4);
                    /* try { // try from 0097d894 to 0097d89b has its CatchHandler @ 0097d980 */
        FUN_0097d1fc(&local_a8);
        FUN_0097d488(&local_d0);
        return;
      }
                    /* try { // try from 0097d954 to 0097d967 has its CatchHandler @ 0097d988 */
      FUN_0097cd18(&local_58);
                    /* WARNING: Subroutine does not return */
      std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
    }
  }
                    /* try { // try from 0097d93c to 0097d94f has its CatchHandler @ 0097d9a4 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
             ,0x183,param_5);
}


// ===== 0097d9bc  FUN_0097d9bc =====

void FUN_0097d9bc(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  ulong local_50;
  void *pvStack_48;
  long local_40;
  long local_38;
  
  lVar10 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar10 + 0x28);
  *(undefined1 *)(lVar10 + 0x30) = 1;
  while (lVar4 != 0) {
    lVar7 = *(long *)(*(long *)(lVar4 + 0x10) + 0x38);
    lVar9 = *(long *)(lVar4 + lVar7);
    *(long *)(lVar10 + 0x28) = lVar9;
    if (lVar9 == 0) {
      *(undefined8 *)(lVar10 + 0x20) = 0;
    }
    else {
      *(undefined8 *)(lVar9 + *(long *)(*(long *)(lVar9 + 0x10) + 0x38) + 8) = 0;
      lVar7 = *(long *)(*(long *)(lVar4 + 0x10) + 0x38);
    }
    *(undefined8 *)(lVar4 + lVar7) = 0;
    *(undefined8 *)(lVar4 + *(long *)(*(long *)(lVar4 + 0x10) + 0x38) + 8) = 0;
    (**(code **)(*(long *)(lVar4 + 0x10) + 0x30))();
    lVar4 = *(long *)(lVar10 + 0x28);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  local_38 = *(long *)(lVar4 + 0x50);
  local_40 = *(long *)(lVar4 + 0x48);
  pvStack_48 = *(void **)(lVar4 + 0x40);
  local_50 = *(ulong *)(lVar4 + 0x38);
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 8;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  while (local_38 != 0) {
    local_38 = local_38 + -1;
    puVar5 = *(ulong **)((long)pvStack_48 + local_40 * 8);
    uVar8 = 0;
    if (local_50 <= local_40 + 1U) {
      uVar8 = local_50;
    }
    local_40 = (local_40 + 1U) - uVar8;
    do {
      uVar8 = *puVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *puVar5 = uVar8 - 0x40;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar8 = uVar8 >> 6;
    if (uVar8 == 1) {
                    /* try { // try from 0097daec to 0097daef has its CatchHandler @ 0097dce4 */
      (**(code **)(puVar5[2] + 0x10))();
    }
    else if (uVar8 == 0) {
                    /* try { // try from 0097db3c to 0097db53 has its CatchHandler @ 0097dd28 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
                    /* try { // try from 0097da0c to 0097da1b has its CatchHandler @ 0097dcbc */
  FUN_00998cc4(&local_50,&local_50);
  if (local_50 != 0) {
    free(pvStack_48);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  pcVar1 = (char *)(lVar4 + 0x58);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      uVar8 = *(ulong *)(lVar4 + 0x60);
      *(undefined8 *)(lVar4 + 0x60) = 0xffffffffffffffff;
      goto joined_r0x0097da60;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow(lVar4 + 0x58);
  uVar8 = *(ulong *)(lVar4 + 0x60);
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffffffffffff;
joined_r0x0097da60:
  if (uVar8 == 0xffffffffffffffff) {
                    /* try { // try from 0097dc6c to 0097dc77 has its CatchHandler @ 0097dce8 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3760);
  }
  lVar10 = *(long *)(lVar4 + 0x70);
  pvVar11 = *(void **)(lVar4 + 0x68);
  lVar4 = *(long *)(lVar4 + 0x78);
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 0097dc80 to 0097dc8b has its CatchHandler @ 0097dca8 */
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
  while (local_50 = uVar8, local_40 = lVar10, pvStack_48 = pvVar11, local_38 = lVar4, local_38 != 0)
  {
    local_38 = local_38 + -1;
    puVar5 = *(ulong **)((long)pvStack_48 + local_40 * 8);
    uVar8 = 0;
    if (local_50 <= local_40 + 1U) {
      uVar8 = local_50;
    }
    local_40 = (local_40 + 1U) - uVar8;
    do {
      uVar6 = *puVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *puVar5 = uVar6 - 0x40;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = uVar6 >> 6;
    if (uVar6 == 1) {
                    /* try { // try from 0097db60 to 0097db63 has its CatchHandler @ 0097dce0 */
      (**(code **)(puVar5[2] + 0x10))();
      lVar4 = local_38;
      pvVar11 = pvStack_48;
      lVar10 = local_40;
      uVar8 = local_50;
    }
    else {
      lVar4 = local_38;
      pvVar11 = pvStack_48;
      lVar10 = local_40;
      uVar8 = local_50;
      if (uVar6 == 0) {
                    /* try { // try from 0097dbb0 to 0097dbc7 has its CatchHandler @ 0097dd18 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 1",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3f10);
      }
    }
  }
                    /* try { // try from 0097da9c to 0097daa3 has its CatchHandler @ 0097dcb8 */
  FUN_00998cc4(&local_50);
  if (local_50 != 0) {
    free(pvStack_48);
  }
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x20) == 0) {
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x28) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: self.tail.is_none()",0x25,
               &PTR_s__root__cargo_registry_src_index__00af3fe8);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: unsafe { self.context.shared.local_state.owned_is_empty() }",0x4d,
             &PTR_s__root__cargo_registry_src_index__00af3778);
}


// ===== 0097dd40  <tokio::runtime::park::ParkThread_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::park::ParkThread as core::default::Default>::default */

void __rustcall <tokio::runtime::park::ParkThread_as_core::default::Default>::default(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 1;
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 0097dd84  FUN_0097dd84 =====

void FUN_0097dd84(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  long unaff_x21;
  undefined1 auVar5 [16];
  
  if (*param_1 != 0) {
    uVar3 = core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af37e0);
                    /* catch() { ... } // from try @ 0097de10 with catch @ 0097de54 */
                    /* try { // try from 0097de5c to 0097de63 has its CatchHandler @ 0097de68 */
    (**(code **)(unaff_x21 + 0x18))();
    *unaff_x19 = *unaff_x19 + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530(uVar3);
  }
  puVar4 = (undefined8 *)*param_2;
  *param_1 = -1;
  if (param_1[3] == 0) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    lVar1 = param_1[2] + param_1[3] * 0x10;
    if ((*(undefined8 **)(lVar1 + -0x10) == puVar4) && (*(long *)(lVar1 + -8) == lVar2)) {
      *param_1 = 0;
      return;
    }
  }
                    /* try { // try from 0097ddf4 to 0097ddf7 has its CatchHandler @ 0097de6c */
  auVar5 = (*(code *)*puVar4)(lVar2);
  lVar2 = param_1[3];
  if (lVar2 == param_1[1]) {
                    /* try { // try from 0097de10 to 0097de17 has its CatchHandler @ 0097de54 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<core::task::wake::Waker>>::grow_one(param_1 + 1);
  }
  *(undefined1 (*) [16])(param_1[2] + lVar2 * 0x10) = auVar5;
  param_1[3] = lVar2 + 1;
  *param_1 = *param_1 + 1;
  return;
}


// ===== 0097de84  <tokio::runtime::scheduler::defer::tokio::runtime::scheduler::defer::Defer>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::defer::tokio::runtime::scheduler::defer::Defer>::is_empty */

bool __rustcall
<tokio::runtime::scheduler::defer::tokio::runtime::scheduler::defer::Defer>::is_empty
          (ulong *param_1)

{
  if (*param_1 < 0x7fffffffffffffff) {
    return param_1[3] == 0;
  }
                    /* WARNING: Subroutine does not return */
  core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00af37f8);
}


// ===== 0097deb8  FUN_0097deb8 =====

void FUN_0097deb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uStack_68;
  uint7 uStack_3f;
  
  uVar5 = param_1[3];
  uVar3 = param_1[2];
  uVar8 = param_1[5];
  uVar7 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x58,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0097df7c to 0097df87 has its CatchHandler @ 0097dfc8 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x58);
  }
  uStack_68 = uVar5 & 0xffffffffffffff00;
  puVar1[5] = uVar5;
  puVar1[4] = uVar3;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[9] = uVar10;
  puVar1[8] = uVar9;
  puVar1[1] = 1;
  *puVar1 = 1;
  puVar1[3] = uVar6;
  puVar1[2] = uVar4;
  puVar1[10] = (ulong)uStack_3f << 8;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x30,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 1;
    *puVar2 = 1;
    puVar2[3] = 0;
    puVar2[2] = puVar1;
    puVar2[5] = uStack_68;
    puVar2[4] = 0;
    return;
  }
                    /* try { // try from 0097df8c to 0097df97 has its CatchHandler @ 0097df9c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x30);
}


// ===== 0097dfe0  FUN_0097dfe0 =====

void FUN_0097dfe0(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  ulong local_38;
  ulong *local_30;
  undefined *local_28;
  
  lVar7 = *param_1;
  puVar1 = (ulong *)(lVar7 + 0x18);
  while (*puVar1 == 3) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      return;
    }
  }
  ClearExclusiveLocal();
  lVar8 = *(long *)(lVar7 + 0x10);
  pcVar2 = (char *)(lVar8 + 0x50);
  do {
    if (*pcVar2 != '\0') {
      ClearExclusiveLocal();
      pcVar2 = (char *)(lVar7 + 0x28);
      if (*pcVar2 == '\0') {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar4) {
          *pcVar2 = '\x01';
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0097e0e0;
      }
      else {
        ClearExclusiveLocal();
      }
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                (lVar7 + 0x28,param_2,0xffffffff);
LAB_0097e0e0:
      do {
        local_38 = *puVar1;
        if (local_38 != 0) {
          ClearExclusiveLocal();
          if (local_38 != 3) {
            local_30 = &local_38;
            local_28 = PTR_fmt_00b00c10;
                    /* try { // try from 0097e1b8 to 0097e1cf has its CatchHandler @ 0097e1f0 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_002a8ba0,&local_30,&PTR_s__root__cargo_registry_src_index__00af3840);
          }
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = 0;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_0097e18c:
          do {
            if (*pcVar2 != '\x01') {
              ClearExclusiveLocal();
              <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar2,0)
              ;
              return;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar4) {
              *pcVar2 = '\0';
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          return;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
                    /* try { // try from 0097e0f0 to 0097e103 has its CatchHandler @ 0097e224 */
        <parking_lot::condvar::parking_lot::condvar::Condvar>::wait_until_internal
                  (lVar7 + 0x20,lVar7 + 0x28);
        while (*puVar1 == 3) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0097e18c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    local_38 = *puVar1;
    if (local_38 != 0) {
      ClearExclusiveLocal();
      if (local_38 == 3) goto LAB_0097e130;
      ppuVar6 = &PTR_s__root__cargo_registry_src_index__00af3828;
      puVar5 = &DAT_002a8ba0;
      goto LAB_0097e0a4;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
                    /* try { // try from 0097e054 to 0097e0b7 has its CatchHandler @ 0097e25c */
  FUN_00988be0(lVar8 + 0x10);
  do {
    local_38 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((local_38 & 0xfffffffffffffffe) != 2) {
    ppuVar6 = &PTR_s__root__cargo_registry_src_index__00af3810;
    puVar5 = &DAT_002acd32;
LAB_0097e0a4:
    local_30 = &local_38;
    local_28 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(puVar5,&local_30,ppuVar6);
  }
LAB_0097e074:
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  return;
LAB_0097e130:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_0097e074;
}


// ===== 0097e264  FUN_0097e264 =====

void FUN_0097e264(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long local_28;
  long *local_20;
  undefined *puStack_18;
  
  lVar6 = *param_1;
  plVar1 = (long *)(lVar6 + 0x18);
  do {
    local_28 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 3;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (1 < local_28) {
    if (local_28 == 2) {
      FUN_00989458(param_2);
      return;
    }
    if (local_28 == 3) {
      return;
    }
LAB_0097e30c:
    local_20 = &local_28;
    puStack_18 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ab2b9,&local_20,&PTR_s__root__cargo_registry_src_index__00af3858);
  }
  if (local_28 == 0) {
    return;
  }
  if (local_28 != 1) goto LAB_0097e30c;
  pcVar2 = (char *)(lVar6 + 0x28);
  if (*pcVar2 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0097e2b4;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar6 + 0x28,param_2,0xffffffff);
LAB_0097e2b4:
  do {
    if (*pcVar2 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(lVar6 + 0x28,0);
      lVar5 = *(long *)(lVar6 + 0x20);
      goto joined_r0x0097e370;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar5 = *(long *)(lVar6 + 0x20);
joined_r0x0097e370:
  if (lVar5 == 0) {
    return;
  }
  <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow(lVar6 + 0x20);
  return;
}


// ===== 0097e378  <tokio::task::local::[2]::tokio::task::local::LocalSet>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::[2]::tokio::task::local::LocalSet>::new */

void __rustcall <tokio::task::local::[2]::tokio::task::local::LocalSet>::new(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint7 uStack_f7;
  ulong local_b8;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar10 == 0) {
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar5 = pthread_getspecific((pthread_key_t)uVar10);
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)uVar10);
  }
  if (pvVar5 < (void *)0x2) {
    pvVar5 = (void *)FUN_00996984(uVar10 & 0xffffffff,pvVar5,0);
  }
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("cannot create LocalSet during thread shutdown",0x2d,&uStack_31,&DAT_00af37a8,
               &PTR_s__root__cargo_registry_src_index__00af3870);
  }
  lVar11 = *(long *)((long)pvVar5 + 0x20);
  lVar6 = DAT_00b10780;
  if (lVar11 == 0) {
    do {
      while( true ) {
        lVar7 = DAT_00b10780;
        if (lVar6 == -1) {
          FUN_009b4c28();
          goto LAB_0097e5bc;
        }
        if (DAT_00b10780 == lVar6) break;
        ClearExclusiveLocal();
        lVar6 = lVar7;
      }
      lVar11 = lVar6 + 1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb10780,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00b10780 = lVar11;
      }
      lVar6 = lVar7;
    } while (cVar1 != '\0');
    *(long *)((long)pvVar5 + 0x20) = lVar11;
  }
  do {
    uVar10 = DAT_00b0f6d0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb0f6d0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b0f6d0 = DAT_00b0f6d0 + 1;
    }
  } while (cVar1 != '\0' || uVar10 == 0);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar6 = FUN_004b25a4(0x200,8);
  if (lVar6 != 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar7 = FUN_004b25a4(0x200,8);
    uVar4 = _UNK_0029fab8;
    uVar3 = _DAT_0029fab0;
    if (lVar7 == 0) {
                    /* try { // try from 0097e5c8 to 0097e5d3 has its CatchHandler @ 0097e5d8 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x200);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar8 = (undefined8 *)FUN_004b25a4(0x98,8);
    if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0097e594 to 0097e59f has its CatchHandler @ 0097e618 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x98);
    }
    puVar8[0xd] = lVar7;
    puVar8[0xc] = uVar4;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x11] = uStack_48;
    puVar8[0x10] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0x40;
    puVar8[6] = (ulong)uStack_f7 << 8;
    puVar8[9] = 0;
    puVar8[8] = lVar6;
    puVar8[0xb] = uVar3;
    puVar8[10] = 0;
    local_b8 = uVar10 & 0xffffffffffffff00;
    puVar8[1] = 1;
    *puVar8 = 1;
    puVar8[3] = uVar10;
    puVar8[2] = lVar11;
    puVar8[0x12] = 0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar9 = (undefined8 *)FUN_004b25a4(0x20,8);
    if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 0097e5a4 to 0097e5b3 has its CatchHandler @ 0097e5ec */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    puVar9[1] = 1;
    *puVar9 = 1;
    puVar9[3] = local_b8;
    puVar9[2] = puVar8;
    return;
  }
LAB_0097e5bc:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(8,0x200);
}


// ===== 0097e630  <tokio::task::local::[2]::tokio::task::local::LocalSet>::tick =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::[2]::tokio::task::local::LocalSet>::tick */

undefined8 __rustcall
<tokio::task::local::[2]::tokio::task::local::LocalSet>::tick
          (long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  code *pcVar6;
  char *pcVar7;
  void *pvVar8;
  undefined1 *extraout_x1;
  long lVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  undefined1 unaff_w26;
  long local_60;
  undefined8 local_58;
  
  puVar5 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  lVar13 = 0;
LAB_0097e674:
  if ((*(byte *)(*param_1 + 0x18) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("a spawned task panicked and the LocalSet is configured to shutdown on unhandled panic"
               ,0xab,&PTR_s__root__cargo_registry_src_index__00af3888);
  }
  lVar10 = param_1[1];
  *(char *)(param_1 + 1) = (char)lVar10 + '\x01';
  lVar9 = *(long *)(*param_1 + 0x10);
  if ((byte)((char)lVar10 * -0x21) < 9) {
    pcVar7 = (char *)(lVar9 + 0x58);
    if (*pcVar7 == '\0') {
      cVar11 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar4) {
        *pcVar7 = '\x01';
        cVar11 = ExclusiveMonitorsStatus();
      }
      if (cVar11 != '\0') goto LAB_0097e778;
      uVar12 = *(ulong *)(lVar9 + 0x60);
      if (uVar12 != 0xffffffffffffffff) goto LAB_0097e6f4;
LAB_0097e794:
      lVar10 = *(long *)(*param_1 + 0x10);
      if (*(long *)(lVar10 + 0x50) == 0) {
        lVar10 = 0;
      }
      else {
        lVar3 = *(long *)(lVar10 + 0x48);
        uVar12 = lVar3 + 1;
        uVar1 = 0;
        if (*(ulong *)(lVar10 + 0x38) <= uVar12) {
          uVar1 = *(ulong *)(lVar10 + 0x38);
        }
        *(ulong *)(lVar10 + 0x48) = uVar12 - uVar1;
        *(long *)(lVar10 + 0x50) = *(long *)(lVar10 + 0x50) + -1;
        lVar10 = *(long *)(*(long *)(lVar10 + 0x40) + lVar3 * 8);
      }
    }
    else {
      ClearExclusiveLocal();
LAB_0097e778:
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                (lVar9 + 0x58,param_2,0xffffffff);
      uVar12 = *(ulong *)(lVar9 + 0x60);
      if (uVar12 == 0xffffffffffffffff) goto LAB_0097e794;
LAB_0097e6f4:
      if (*(long *)(lVar9 + 0x78) == 0) goto LAB_0097e794;
      lVar10 = *(long *)(lVar9 + 0x70);
      uVar1 = lVar10 + 1;
      uVar2 = 0;
      if (uVar12 <= uVar1) {
        uVar2 = uVar12;
      }
      *(ulong *)(lVar9 + 0x70) = uVar1 - uVar2;
      *(long *)(lVar9 + 0x78) = *(long *)(lVar9 + 0x78) + -1;
      lVar10 = *(long *)(*(long *)(lVar9 + 0x68) + lVar10 * 8);
    }
    do {
      pcVar7 = (char *)(lVar9 + 0x58);
      if (*pcVar7 != '\x01') goto LAB_0097e924;
      cVar11 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar4) {
        *pcVar7 = '\0';
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    goto joined_r0x0097e930;
  }
  if (*(long *)(lVar9 + 0x50) == 0) {
    pcVar7 = (char *)(lVar9 + 0x58);
    if (*pcVar7 == '\0') {
      cVar11 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar4) {
        *pcVar7 = '\x01';
        cVar11 = ExclusiveMonitorsStatus();
      }
      if (cVar11 != '\0') goto LAB_0097e7ec;
      uVar12 = *(ulong *)(lVar9 + 0x60);
      if (uVar12 == 0xffffffffffffffff) goto LAB_0097e808;
LAB_0097e740:
      if (*(long *)(lVar9 + 0x78) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar9 + 0x70);
        uVar1 = lVar10 + 1;
        uVar2 = 0;
        if (uVar12 <= uVar1) {
          uVar2 = uVar12;
        }
        *(ulong *)(lVar9 + 0x70) = uVar1 - uVar2;
        *(long *)(lVar9 + 0x78) = *(long *)(lVar9 + 0x78) + -1;
        lVar10 = *(long *)(*(long *)(lVar9 + 0x68) + lVar10 * 8);
      }
    }
    else {
      ClearExclusiveLocal();
LAB_0097e7ec:
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                (lVar9 + 0x58,param_2,0xffffffff);
      uVar12 = *(ulong *)(lVar9 + 0x60);
      if (uVar12 != 0xffffffffffffffff) goto LAB_0097e740;
LAB_0097e808:
      lVar10 = 0;
    }
    do {
      pcVar7 = (char *)(lVar9 + 0x58);
      if (*pcVar7 != '\x01') goto LAB_0097e924;
      cVar11 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar4) {
        *pcVar7 = '\0';
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    goto joined_r0x0097e930;
  }
  lVar10 = *(long *)(lVar9 + 0x48);
  uVar12 = lVar10 + 1;
  uVar1 = 0;
  if (*(ulong *)(lVar9 + 0x38) <= uVar12) {
    uVar1 = *(ulong *)(lVar9 + 0x38);
  }
  *(ulong *)(lVar9 + 0x48) = uVar12 - uVar1;
  *(long *)(lVar9 + 0x50) = *(long *)(lVar9 + 0x50) + -1;
  lVar10 = *(long *)(*(long *)(lVar9 + 0x40) + lVar10 * 8);
  goto LAB_0097e824;
LAB_0097e924:
  ClearExclusiveLocal();
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(lVar9 + 0x58,0);
joined_r0x0097e930:
  if (lVar10 == 0) {
    return 0;
  }
LAB_0097e824:
  local_60 = *(long *)(lVar10 + 0x18);
  local_58 = *(long *)(*(long *)(*param_1 + 0x10) + 0x18);
  if (local_60 != local_58) {
                    /* try { // try from 0097e95c to 0097e977 has its CatchHandler @ 0097ea04 */
    core[bcece726f298455b]::panicking::assert_failed::
    <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::num::nonzero::NonZero<u64>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::num::nonzero::NonZero<u64>>>
              (0,&local_60,&local_58,0,param_5,&PTR_s__root__cargo_registry_src_index__00af3968);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x97ea44);
    (*pcVar6)();
  }
  uVar12 = *(ulong *)puVar5;
  if (uVar12 == 0) {
                    /* try { // try from 0097e8c0 to 0097e8eb has its CatchHandler @ 0097e994 */
    uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(puVar5);
    pvVar8 = pthread_getspecific((pthread_key_t)uVar12);
  }
  else {
    pvVar8 = pthread_getspecific((pthread_key_t)uVar12);
  }
  if (pvVar8 < (void *)0x2) {
    pvVar8 = (void *)FUN_00996984(uVar12 & 0xffffffff,pvVar8,0);
  }
  if (pvVar8 == (void *)0x0) {
    cVar11 = '\x02';
  }
  else {
    cVar11 = *(char *)((long)pvVar8 + 0x44);
    unaff_w26 = *(undefined1 *)((long)pvVar8 + 0x45);
    *(undefined2 *)((long)pvVar8 + 0x44) = 0x8001;
  }
  local_58._0_2_ = CONCAT11(unaff_w26,cVar11);
                    /* try { // try from 0097e884 to 0097e88b has its CatchHandler @ 0097e9e8 */
  (*(code *)**(undefined8 **)(lVar10 + 0x10))(lVar10);
  param_2 = extraout_x1;
  if (cVar11 == '\x02') goto LAB_0097e668;
  uVar12 = *(ulong *)puVar5;
  if (uVar12 == 0) {
    uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(puVar5);
    param_2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar12);
    if (param_2 <= &DAT_00000001) goto LAB_0097e90c;
  }
  else {
    param_2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar12);
    if (param_2 <= &DAT_00000001) {
LAB_0097e90c:
      param_2 = (undefined1 *)FUN_00996984(uVar12 & 0xffffffff,param_2,0);
    }
  }
  if (param_2 != (undefined1 *)0x0) {
    param_2[0x44] = cVar11;
    param_2[0x45] = unaff_w26;
  }
LAB_0097e668:
  lVar13 = lVar13 + 1;
  if (lVar13 == 0x3d) {
    return 1;
  }
  goto LAB_0097e674;
}


// ===== 0097ea60  <tokio::task::local::[2]::tokio::task::local::LocalSet>::enter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::[2]::tokio::task::local::LocalSet>::enter */

undefined1  [16] __rustcall
<tokio::task::local::[2]::tokio::task::local::LocalSet>::enter(undefined8 *param_1)

{
  unkuint9 Var1;
  code *pcVar2;
  unkuint9 *pVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01138;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01138);
    pVar3 = (unkuint9 *)pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    pVar3 = (unkuint9 *)pthread_getspecific((pthread_key_t)uVar5);
  }
  if (pVar3 < (unkuint9 *)0x2) {
    pVar3 = (unkuint9 *)FUN_009966d0(uVar5 & 0xffffffff,pVar3,0);
  }
  if (pVar3 == (unkuint9 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  lVar4 = *(long *)*param_1;
  *(long *)*param_1 = lVar4 + 1;
  if (lVar4 != -1) {
    Var1 = *pVar3;
    *(undefined8 *)pVar3 = *param_1;
    *(undefined1 *)((long)pVar3 + 8) = 1;
    auVar6._9_7_ = 0;
    auVar6._0_9_ = Var1;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x97eb18);
  (*pcVar2)();
}


// ===== 0097eb18  <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::park =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::park */

void __rustcall <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::park(void)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uStack_1;
  
  uVar2 = DAT_00b0f6c0;
  if (DAT_00b0f6c0 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b0f6c0);
    plVar1 = (long *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    plVar1 = (long *)pthread_getspecific((pthread_key_t)DAT_00b0f6c0);
  }
  if (plVar1 < (long *)0x2) {
    plVar1 = (long *)FUN_00996818(uVar2 & 0xffffffff,plVar1,0);
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_1,&DAT_00af37a8,
               &PTR_s__root__cargo_registry_src_index__00af38b8);
  }
  FUN_0097f56c(*plVar1 + 0x10);
  return;
}


// ===== 0097ebb8  <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::waker =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::waker */

undefined1  [16] __rustcall
<tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::waker(void)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  uVar6 = DAT_00b0f6c0;
  if (DAT_00b0f6c0 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b0f6c0);
    puVar5 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    puVar5 = (undefined8 *)pthread_getspecific((pthread_key_t)DAT_00b0f6c0);
  }
  if (puVar5 <= &DAT_00000001) {
    puVar5 = (undefined8 *)FUN_00996818(uVar6 & 0xffffffff,puVar5,0);
  }
  if (puVar5 == (undefined8 *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)*puVar5;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x97ec08);
      (*pcVar4)();
    }
  }
  ppuVar1 = (undefined **)0x0;
  if (plVar7 != (long *)0x0) {
    ppuVar1 = &PTR_FUN_00af38d0;
  }
  auVar9._8_8_ = plVar7 + 2;
  auVar9._0_8_ = ppuVar1;
  return auVar9;
}


// ===== 0097ec60  <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow */

void __rustcall
<alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(undefined8 *param_1)

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
                    /* try { // try from 0097ec90 to 0097ec93 has its CatchHandler @ 0097ecd0 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::task::local::Shared>>::drop_slow();
  }
  if ((__ptr != (void *)0xffffffffffffffff) &&
     (lVar4 = *(long *)((long)__ptr + 8) + -1, *(long *)((long)__ptr + 8) = lVar4, lVar4 == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0097ece4  <tokio::task::local::[9]::tokio::task::local::Shared>::schedule =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::[9]::tokio::task::local::Shared>::schedule */

void __rustcall
<tokio::task::local::[9]::tokio::task::local::Shared>::schedule(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  long *local_60;
  long *local_58;
  
  uVar13 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01138;
  if (uVar13 == 0) {
                    /* try { // try from 0097f078 to 0097f0a7 has its CatchHandler @ 0097f184 */
    uVar13 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01138);
    puVar10 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar13);
  }
  else {
    puVar10 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar13);
  }
  if (puVar10 < (undefined8 *)0x2) {
    puVar10 = (undefined8 *)FUN_009966d0(uVar13 & 0xffffffff,puVar10,0);
  }
  if (puVar10 == (undefined8 *)0x0) {
    do {
      uVar13 = *param_2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar6) {
        *param_2 = uVar13 - 0x40;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar13 = uVar13 >> 6;
    if (uVar13 == 1) {
      (**(code **)(param_2[2] + 0x10))(param_2);
LAB_0097f144:
                    /* WARNING: Subroutine does not return */
      std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
    }
    if (uVar13 != 0) goto LAB_0097f144;
    goto LAB_0097f0f0;
  }
  puVar16 = (ulong *)*puVar10;
  if (puVar16 == (ulong *)0x0) {
    local_60 = (long *)0x0;
  }
  else {
    uVar13 = *puVar16;
    *puVar16 = uVar13 + 1;
    if (0xfffffffffffffffe < uVar13) {
LAB_0097f2e8:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x97f2ec);
      (*pcVar9)();
    }
    plVar15 = (long *)*puVar10;
    lVar14 = plVar15[2];
    local_60 = plVar15;
    if (((long *)(lVar14 + 0x10) == param_1) && ((*(byte *)(puVar10 + 1) & 1) == 0)) {
      uVar13 = *(ulong *)(lVar14 + 0x38);
      uVar12 = *(ulong *)(lVar14 + 0x50);
      local_58 = plVar15;
      if (uVar12 == uVar13) {
                    /* try { // try from 0097ed84 to 0097ed87 has its CatchHandler @ 0097f1dc */
        <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref_28}::task::local::Shared>>>>
        ::grow();
        uVar12 = *(ulong *)(lVar14 + 0x50);
        uVar13 = *(ulong *)(lVar14 + 0x38);
      }
      uVar4 = *(long *)(lVar14 + 0x48) + uVar12;
      *(ulong *)(lVar14 + 0x50) = uVar12 + 1;
      uVar12 = 0;
      if (uVar13 <= uVar4) {
        uVar12 = uVar13;
      }
      *(ulong **)(*(long *)(lVar14 + 0x40) + (uVar4 - uVar12) * 8) = param_2;
      lVar14 = *plVar15;
      *plVar15 = lVar14 + -1;
      if (lVar14 + -1 != 0) {
        return;
      }
                    /* try { // try from 0097edc0 to 0097edcf has its CatchHandler @ 0097f280 */
      <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(&local_58);
      return;
    }
  }
  plVar15 = local_60;
  uVar13 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar13 == 0) {
                    /* try { // try from 0097f0b0 to 0097f0eb has its CatchHandler @ 0097f280 */
    uVar13 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar11 = pthread_getspecific((pthread_key_t)uVar13);
  }
  else {
    pvVar11 = pthread_getspecific((pthread_key_t)uVar13);
  }
  if (pvVar11 < (void *)0x2) {
    pvVar11 = (void *)FUN_00996984(uVar13 & 0xffffffff,pvVar11,0);
  }
  if (pvVar11 == (void *)0x0) {
LAB_0097ef20:
    plVar3 = param_1 + 9;
    if ((char)*plVar3 == '\0') {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(char *)plVar3 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_0097f11c;
    }
    else {
      ClearExclusiveLocal();
LAB_0097f11c:
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                (param_1 + 9,pvVar11,0xffffffff);
    }
    uVar13 = param_1[10];
    if (uVar13 != 0xffffffffffffffff) {
      uVar12 = param_1[0xd];
      if (uVar12 == uVar13) {
                    /* try { // try from 0097ef58 to 0097ef5b has its CatchHandler @ 0097f22c */
        <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref_28}::task::local::Shared>>>>
        ::grow();
        uVar12 = param_1[0xd];
        uVar13 = param_1[10];
      }
      param_1[0xd] = uVar12 + 1;
      uVar4 = 0;
      if (uVar13 <= param_1[0xc] + uVar12) {
        uVar4 = uVar13;
      }
      *(ulong **)(param_1[0xb] + ((param_1[0xc] + uVar12) - uVar4) * 8) = param_2;
      do {
        if ((char)*plVar3 != '\x01') {
          ClearExclusiveLocal();
                    /* try { // try from 0097f154 to 0097f15f has its CatchHandler @ 0097f208 */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                    (param_1 + 9,0);
          break;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(char *)plVar3 = '\0';
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar1 = (ulong *)(param_1 + 0x10);
      do {
        uVar13 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar13 | 2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar13 == 0) {
        lVar14 = param_1[0xe];
        param_1[0xe] = 0;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 & 0xfffffffffffffffd;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 != 0) {
                    /* try { // try from 0097efd0 to 0097efd3 has its CatchHandler @ 0097f208 */
          (**(code **)(lVar14 + 8))(param_1[0xf]);
        }
      }
      goto LAB_0097efd4;
    }
    bVar6 = true;
    do {
      if ((char)*plVar3 != '\x01') {
        ClearExclusiveLocal();
                    /* try { // try from 0097f16c to 0097f17b has its CatchHandler @ 0097f280 */
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar3,0);
        bVar6 = true;
        break;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(char *)plVar3 = '\0';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    lVar14 = DAT_00b10780;
    if (*(long *)((long)pvVar11 + 0x20) == 0) {
      do {
        while( true ) {
          lVar8 = DAT_00b10780;
          if (lVar14 == -1) {
                    /* try { // try from 0097f10c to 0097f12f has its CatchHandler @ 0097f280 */
            FUN_009b4c28();
            goto LAB_0097f2e8;
          }
          if (DAT_00b10780 == lVar14) break;
          ClearExclusiveLocal();
          lVar14 = lVar8;
        }
        lVar2 = lVar14 + 1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0xb10780,0x10);
        if (bVar6) {
          cVar5 = ExclusiveMonitorsStatus();
          DAT_00b10780 = lVar2;
        }
        lVar14 = lVar8;
      } while (cVar5 != '\0');
      *(long *)((long)pvVar11 + 0x20) = lVar2;
      if (lVar2 != *param_1) goto LAB_0097ef20;
    }
    else if (*(long *)((long)pvVar11 + 0x20) != *param_1) goto LAB_0097ef20;
    uVar13 = param_1[5];
    uVar12 = param_1[8];
    if (uVar12 == uVar13) {
                    /* try { // try from 0097ee54 to 0097ee57 has its CatchHandler @ 0097f210 */
      <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref_28}::task::local::Shared>>>>
      ::grow();
      uVar12 = param_1[8];
      uVar13 = param_1[5];
    }
    param_1[8] = uVar12 + 1;
    uVar4 = 0;
    if (uVar13 <= param_1[7] + uVar12) {
      uVar4 = uVar13;
    }
    *(ulong **)(param_1[6] + ((param_1[7] + uVar12) - uVar4) * 8) = param_2;
    puVar1 = (ulong *)(param_1 + 0x10);
    do {
      uVar13 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar13 | 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (uVar13 == 0) {
      lVar14 = param_1[0xe];
      param_1[0xe] = 0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 & 0xfffffffffffffffd;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 != 0) {
                    /* try { // try from 0097eebc to 0097eec3 has its CatchHandler @ 0097f280 */
        (**(code **)(lVar14 + 8))(param_1[0xf]);
        bVar6 = false;
        goto LAB_0097eff4;
      }
    }
LAB_0097efd4:
    bVar6 = false;
  }
LAB_0097eff4:
  if ((puVar16 != (ulong *)0x0) && (lVar14 = *plVar15 + -1, *plVar15 = lVar14, lVar14 == 0)) {
                    /* try { // try from 0097f008 to 0097f00f has its CatchHandler @ 0097f270 */
    <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(&local_60);
  }
  if (bVar6) {
    do {
      uVar13 = *param_2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar6) {
        *param_2 = uVar13 - 0x40;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar13 = uVar13 >> 6;
    if (uVar13 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0097f074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[2] + 0x10))(param_2);
      return;
    }
    if (uVar13 == 0) {
LAB_0097f0f0:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
  return;
}


// ===== 0097f308  FUN_0097f308 =====

void FUN_0097f308(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  long local_48;
  long *local_40;
  undefined *local_38;
  
  while (*param_1 == 2) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      return;
    }
  }
  ClearExclusiveLocal();
  if ((param_2 == 0) && (param_3 == 0)) {
    return;
  }
  plVar1 = param_1 + 2;
  if ((char)*plVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(char *)plVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0097f378;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 2,param_2,0xffffffff);
LAB_0097f378:
  do {
    local_48 = *param_1;
    if (local_48 != 0) {
      ClearExclusiveLocal();
      if (local_48 != 2) {
        local_40 = &local_48;
        local_38 = PTR_fmt_00b00c10;
                    /* try { // try from 0097f494 to 0097f4ab has its CatchHandler @ 0097f4d0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002b4719,&local_40,&PTR_s__root__cargo_registry_src_index__00af3908);
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        if ((char)*plVar1 != '\x01') {
          ClearExclusiveLocal();
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
          return;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(char *)plVar1 = '\0';
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* try { // try from 0097f388 to 0097f3b7 has its CatchHandler @ 0097f500 */
  auVar5 = <std::time::std::time::Instant>::now();
  local_40 = auVar5._0_8_;
  local_38 = (undefined *)CONCAT44(local_38._4_4_,auVar5._8_4_);
  auVar4 = <std::time::[5]::std::time::SystemTime>::checked_add(&local_40,param_2,param_3);
  <parking_lot::condvar::parking_lot::condvar::Condvar>::wait_until_internal
            (param_1 + 1,param_1 + 2,auVar4._0_8_,auVar4._8_8_ & 0xffffffff);
  do {
    local_48 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (local_48 - 1U < 2) {
    do {
      if ((char)*plVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(char *)plVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return;
  }
  local_40 = &local_48;
  local_38 = PTR_fmt_00b00c10;
                    /* try { // try from 0097f3fc to 0097f413 has its CatchHandler @ 0097f534 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002acd32,&local_40,&PTR_s__root__cargo_registry_src_index__00af38f0);
}


// ===== 0097f56c  FUN_0097f56c =====

void FUN_0097f56c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long local_38;
  long *local_30;
  undefined *puStack_28;
  
  while (*param_1 == 2) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      return;
    }
  }
  ClearExclusiveLocal();
  plVar1 = param_1 + 2;
  if ((char)*plVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(char *)plVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0097f5c4;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 2,param_2,0xffffffff);
LAB_0097f5c4:
  do {
    local_38 = *param_1;
    if (local_38 != 0) {
      ClearExclusiveLocal();
      if (local_38 != 2) {
        local_30 = &local_38;
        puStack_28 = PTR_fmt_00b00c10;
                    /* try { // try from 0097f680 to 0097f697 has its CatchHandler @ 0097f69c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002a8ba0,&local_30,&PTR_s__root__cargo_registry_src_index__00af3920);
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0097f638:
      do {
        if ((char)*plVar1 != '\x01') {
          ClearExclusiveLocal();
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
          return;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(char *)plVar1 = '\0';
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
                    /* try { // try from 0097f5d4 to 0097f5e3 has its CatchHandler @ 0097f6d0 */
    <parking_lot::condvar::parking_lot::condvar::Condvar>::wait_until_internal
              (param_1 + 1,param_1 + 2);
    while (*param_1 == 2) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_0097f638;
    }
    ClearExclusiveLocal();
  } while( true );
}


// ===== 0097f708  <tokio::runtime::io::scheduled_io::tokio::runtime::io::scheduled_io::ScheduledIo>::ready_event =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::scheduled_io::tokio::runtime::io::scheduled_io::ScheduledIo>::ready_event */

void __rustcall
<tokio::runtime::io::scheduled_io::tokio::runtime::io::scheduled_io::ScheduledIo>::ready_event
          (ulong *param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar1 = (undefined1)(uVar2 >> 0x10);
  if ((param_3 - 1 < (param_3 ^ param_3 - 1)) &&
     (uVar3 = (param_3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_3 & 0x5555555555555555) << 1,
     uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2,
     uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8,
     uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10,
     uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20), uVar3 < 6)) {
    *param_1 = *(ulong *)(&DAT_0037b4a0 + uVar3 * 8) & uVar2;
    *(undefined1 *)(param_1 + 1) = uVar1;
    *(byte *)((long)param_1 + 9) = (byte)(uVar2 >> 0x1f) & 1;
    return;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(byte *)((long)param_1 + 9) = (byte)(uVar2 >> 0x1f) & 1;
  return;
}


// ===== 0097f770  FUN_0097f770 =====

void FUN_0097f770(ulong *param_1,long param_2,undefined8 *param_3,int param_4)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  uVar6 = 10;
  if (param_4 == 0) {
    uVar6 = 5;
  }
  if ((uVar5 & (uVar6 | 0x80000000)) != 0) {
    *param_1 = uVar5 & uVar6;
    *(char *)(param_1 + 1) = (char)(uVar5 >> 0x10);
    *(char *)((long)param_1 + 9) = (char)((uVar5 & 0x80000000) >> 0x1f);
    return;
  }
  pcVar1 = (char *)(param_2 + 0x18);
  if (*pcVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0097f928;
  }
  else {
    ClearExclusiveLocal();
LAB_0097f928:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_2 + 0x18,param_3,0xffffffff);
  }
  lVar9 = 0x40;
  if (param_4 == 0) {
    lVar9 = 0x30;
  }
  pauVar2 = (undefined1 (*) [16])(param_2 + lVar9);
  param_3 = (undefined8 *)*param_3;
  puVar10 = *(undefined8 **)*pauVar2;
  puVar7 = (undefined8 *)*param_3;
  if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 0097f850 to 0097f853 has its CatchHandler @ 0097f990 */
    auVar11 = (*(code *)*puVar7)(param_3[1]);
    if (*(long *)*pauVar2 != 0) {
                    /* try { // try from 0097f86c to 0097f86f has its CatchHandler @ 0097f980 */
      (**(code **)(*(long *)*pauVar2 + 0x18))(*(undefined8 *)(*pauVar2 + 8));
    }
    *pauVar2 = auVar11;
    uVar6 = *(ulong *)(param_2 + 0x10);
joined_r0x0097f880:
    if (param_4 != 0) goto LAB_0097f82c;
LAB_0097f884:
    uVar5 = 5;
    if ((int)uVar6 < 0) goto LAB_0097f834;
LAB_0097f88c:
    uVar5 = uVar6 & uVar5;
    if (uVar5 == 0) {
      uVar8 = 2;
      goto LAB_0097f8a4;
    }
    uVar8 = 0;
  }
  else {
    lVar9 = *(long *)(*pauVar2 + 8);
    if ((puVar10 != puVar7) || (lVar9 != param_3[1])) {
                    /* try { // try from 0097f8e8 to 0097f8ef has its CatchHandler @ 0097f990 */
      auVar11 = (*(code *)*puVar7)(param_3[1]);
                    /* try { // try from 0097f8fc to 0097f903 has its CatchHandler @ 0097f984 */
      (*(code *)puVar10[3])(lVar9);
      *pauVar2 = auVar11;
      uVar6 = *(ulong *)(param_2 + 0x10);
      goto joined_r0x0097f880;
    }
    uVar6 = *(ulong *)(param_2 + 0x10);
    if (param_4 == 0) goto LAB_0097f884;
LAB_0097f82c:
    uVar5 = 10;
    if (-1 < (int)uVar6) goto LAB_0097f88c;
LAB_0097f834:
    uVar8 = 1;
  }
  *param_1 = uVar5;
  *(char *)(param_1 + 1) = (char)(uVar6 >> 0x10);
LAB_0097f8a4:
  *(undefined1 *)((long)param_1 + 9) = uVar8;
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


// ===== 0097f9c8  FUN_0097f9c8 =====

void FUN_0097f9c8(long param_1,ulong param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long local_258 [65];
  
  local_258[0x40] = 0;
  pcVar1 = (char *)(param_1 + 0x18);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    uVar5 = param_2;
    if (cVar2 != '\0') goto LAB_0097fcb0;
  }
  else {
    ClearExclusiveLocal();
LAB_0097fcb0:
                    /* try { // try from 0097fcb0 to 0097fcbb has its CatchHandler @ 0097fcd8 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 0x18,param_2,0xffffffff);
    uVar5 = extraout_x1_02;
  }
  if ((param_2 & 5) != 0) {
    lVar10 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar10 != 0) {
      if (0x1f < (ulong)local_258[0x40]) goto LAB_0097fc98;
      lVar11 = local_258[0x40] * 2;
      local_258[local_258[0x40] * 2 + 1] = *(long *)(param_1 + 0x38);
      local_258[lVar11] = lVar10;
      local_258[0x40] = local_258[0x40] + 1;
    }
  }
  if ((param_2 & 10) != 0) {
    lVar10 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar10 != 0) {
      if (0x1f < (ulong)local_258[0x40]) {
LAB_0097fc98:
                    /* try { // try from 0097fc98 to 0097fca7 has its CatchHandler @ 0097fce4 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (local_258[0x40],0x20,&PTR_s__root__cargo_registry_src_index__00af3950);
      }
      lVar11 = local_258[0x40] * 2;
      local_258[local_258[0x40] * 2 + 1] = *(long *)(param_1 + 0x48);
      local_258[lVar11] = lVar10;
      local_258[0x40] = local_258[0x40] + 1;
    }
  }
LAB_0097fa80:
  if ((ulong)local_258[0x40] < 0x20) {
    plVar8 = *(long **)(param_1 + 0x20);
    do {
      while( true ) {
        do {
          plVar6 = plVar8;
          if (plVar6 == (long *)0x0) goto LAB_0097fc0c;
          uVar7 = plVar6[4];
          uVar9 = -(uVar7 & 1) & 5;
          if ((uVar7 & 2) != 0) {
            uVar9 = uVar9 | 10;
          }
          if ((uVar7 & 0x10) != 0) {
            uVar9 = uVar9 | 0x14;
          }
          plVar8 = (long *)plVar6[1];
        } while (((uVar9 | uVar7 & 0x20) & param_2) == 0);
        if (*plVar6 == 0) break;
        *(long **)(*plVar6 + 8) = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0097fb30;
LAB_0097fafc:
        *plVar8 = *plVar6;
        lVar11 = plVar6[3];
        lVar10 = plVar6[2];
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
        if (lVar10 != 0) goto LAB_0097fb58;
LAB_0097fa94:
        if (0x1f < (ulong)local_258[0x40]) goto LAB_0097fb88;
      }
      if (*(long **)(param_1 + 0x20) != plVar6) goto LAB_0097fc0c;
      *(long **)(param_1 + 0x20) = plVar8;
      if (plVar8 != (long *)0x0) goto LAB_0097fafc;
LAB_0097fb30:
      if (*(long **)(param_1 + 0x28) != plVar6) goto LAB_0097fc0c;
      *(long *)(param_1 + 0x28) = *plVar6;
      lVar11 = plVar6[3];
      lVar10 = plVar6[2];
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 0;
      if (lVar10 == 0) goto LAB_0097fa94;
LAB_0097fb58:
      *(undefined1 *)(plVar6 + 5) = 1;
      if (0x1f < (ulong)local_258[0x40]) goto LAB_0097fc98;
      lVar4 = local_258[0x40] * 2;
      local_258[local_258[0x40] * 2 + 1] = lVar11;
      local_258[lVar4] = lVar10;
      local_258[0x40] = local_258[0x40] + 1;
    } while ((ulong)local_258[0x40] < 0x20);
  }
LAB_0097fb88:
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 0097fbe8 to 0097fc07 has its CatchHandler @ 0097fcdc */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 0x18,0)
      ;
      uVar5 = extraout_x1_00;
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar10 = local_258[0x40];
  local_258[0x40] = 0;
  plVar8 = local_258;
  for (lVar10 = lVar10 << 4; lVar10 != 0; lVar10 = lVar10 + -0x10) {
                    /* try { // try from 0097fbc4 to 0097fbc7 has its CatchHandler @ 0097fd50 */
    (**(code **)(*plVar8 + 8))(plVar8[1]);
    uVar5 = extraout_x1;
    plVar8 = plVar8 + 2;
  }
  if (*pcVar1 == '\0') goto code_r0x0097fbd4;
  ClearExclusiveLocal();
  goto LAB_0097fbfc;
code_r0x0097fbd4:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
  if (bVar3) {
    *pcVar1 = '\x01';
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') {
LAB_0097fbfc:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 0x18,uVar5,0xffffffff);
    uVar5 = extraout_x1_01;
  }
  goto LAB_0097fa80;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_0097fc0c:
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 0097fcc4 to 0097fccf has its CatchHandler @ 0097fcd4 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      break;
    }
  }
  lVar10 = local_258[0x40];
  local_258[0x40] = 0;
  plVar8 = local_258;
  for (lVar10 = lVar10 << 4; lVar10 != 0; lVar10 = lVar10 + -0x10) {
                    /* try { // try from 0097fc48 to 0097fc4b has its CatchHandler @ 0097fd38 */
    (**(code **)(*plVar8 + 8))(plVar8[1]);
    plVar8 = plVar8 + 2;
  }
  plVar8 = local_258 + 1;
  lVar10 = local_258[0x40] + 1;
  while (lVar10 = lVar10 + -1, lVar10 != 0) {
    plVar6 = plVar8 + -1;
    lVar11 = *plVar8;
    plVar8 = plVar8 + 2;
                    /* try { // try from 0097fc74 to 0097fc77 has its CatchHandler @ 0097fd14 */
    (**(code **)(*plVar6 + 0x18))(lVar11);
  }
  return;
}


// ===== 0097fd78  FUN_0097fd78 =====

void FUN_0097fd78(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *local_18;
  
  local_18 = (long *)(param_1 + -0x10);
  do {
    lVar3 = *local_18;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_18,0x10);
    if (bVar2) {
      *local_18 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(&local_18);
  }
  return;
}


// ===== 0097fdb8  FUN_0097fdb8 =====

void FUN_0097fdb8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  do {
    lVar4 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 2;
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
  plVar1 = param_1 + 2;
  if ((char)*plVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(char *)plVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0097fe18;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 2,param_2,0xffffffff);
LAB_0097fe18:
  do {
    if ((char)*plVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 2,0);
      lVar4 = param_1[1];
      goto joined_r0x0097fe78;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(char *)plVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = param_1[1];
joined_r0x0097fe78:
  if (lVar4 == 0) {
    return;
  }
  <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow();
  return;
}


// ===== 0097fe88  FUN_0097fe88 =====

void FUN_0097fe88(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *local_8;
  
  local_8 = param_1 + -2;
  do {
    lVar4 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) goto LAB_0097ff18;
  if (lVar4 != 1) {
    if (lVar4 != 2) {
                    /* try { // try from 0097fec4 to 0097fedb has its CatchHandler @ 0097ff88 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("inconsistent state in unpark",0x39,
                 &PTR_s__root__cargo_registry_src_index__00af3938);
    }
    goto LAB_0097ff18;
  }
  plVar1 = param_1 + 2;
  if ((char)*plVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(char *)plVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_0097ff54;
  }
  else {
    ClearExclusiveLocal();
LAB_0097ff54:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 2,param_2,0xffffffff);
  }
  do {
    if ((char)*plVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 2,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(char *)plVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[1] != 0) {
                    /* try { // try from 0097ff48 to 0097ff83 has its CatchHandler @ 0097ff88 */
    <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow();
  }
LAB_0097ff18:
  do {
    lVar4 = *local_8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_8,0x10);
    if (bVar3) {
      *local_8 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(&local_8);
  }
  return;
}


// ===== 0097ffbc  FUN_0097ffbc =====

undefined1  [16] FUN_0097ffbc(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar4 = (long *)(param_1 + -0x10);
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
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = &PTR_FUN_00af38d0;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x97ffe8);
  (*pcVar3)();
}


// ===== 0097ffe8  <tokio::runtime::context::runtime::EnterRuntimeGuard_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::context::runtime::EnterRuntimeGuard as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::context::runtime::EnterRuntimeGuard_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"Enter",5);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00980020  <tokio::task::local::LocalEnterGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::LocalEnterGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::task::local::LocalEnterGuard_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *local_28;
  
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01138;
  if (uVar5 == 0) {
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01138);
    puVar2 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    puVar2 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar5);
  }
  if (puVar2 < (undefined8 *)0x2) {
    puVar2 = (undefined8 *)FUN_009966d0(uVar5 & 0xffffffff,puVar2,0);
  }
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  uVar3 = *param_1;
  *param_1 = 0;
  local_28 = (long *)*puVar2;
  uVar1 = *(undefined1 *)(param_1 + 1);
  *puVar2 = uVar3;
  if ((local_28 != (long *)0x0) && (lVar4 = *local_28, *local_28 = lVar4 + -1, lVar4 + -1 == 0)) {
    <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(&local_28);
    *(undefined1 *)(puVar2 + 1) = uVar1;
    return;
  }
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 009800f4  <tokio::runtime::io::scheduled_io::ScheduledIo_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::scheduled_io::ScheduledIo as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::io::scheduled_io::ScheduledIo_as_core::ops::drop::Drop>::drop(undefined8 param_1)

{
  FUN_0097f9c8(param_1,0x3f);
  return;
}


// ===== 009800fc  <tokio::task::local::LocalEnterGuard_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::LocalEnterGuard as core::fmt::Debug>::fmt */

void __rustcall
<tokio::task::local::LocalEnterGuard_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"LocalEnterGuard",0xf);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00980134  <tokio::task::local::LocalSet_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::LocalSet as core::fmt::Debug>::fmt */

void __rustcall
<tokio::task::local::LocalSet_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002a1210,8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 0098016c  <tokio::task::local::LocalSet_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::LocalSet as core::future::future::Future>::poll */

undefined8 __rustcall
<tokio::task::local::LocalSet_as_core::future::future::Future>::poll
          (long *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *local_28;
  
  plVar6 = (long *)*param_2;
  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::
  register_by_ref(*(long *)(*param_1 + 0x10) + 0x80,plVar6);
  uVar7 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01138;
  if (uVar7 == 0) {
    uVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01138);
    puVar3 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar7);
  }
  else {
    puVar3 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar7);
  }
  if (puVar3 <= &DAT_00000001) {
    puVar3 = (undefined8 *)FUN_009966d0(uVar7 & 0xffffffff,puVar3,0);
  }
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  plVar4 = (long *)*param_1;
  lVar5 = *plVar4;
  *plVar4 = lVar5 + 1;
  if (lVar5 == -1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x9802e0);
    (*pcVar2)();
  }
  uVar8 = *puVar3;
  uVar1 = *(undefined1 *)(puVar3 + 1);
  *puVar3 = plVar4;
  *(undefined1 *)(puVar3 + 1) = 0;
                    /* try { // try from 009801f4 to 009801fb has its CatchHandler @ 009802f8 */
  uVar7 = <tokio::task::local::[2]::tokio::task::local::LocalSet>::tick(param_1);
  local_28 = (long *)*puVar3;
  *puVar3 = uVar8;
  if ((local_28 == (long *)0x0) || (lVar5 = *local_28, *local_28 = lVar5 + -1, lVar5 + -1 != 0)) {
    *(undefined1 *)(puVar3 + 1) = uVar1;
  }
  else {
    <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(&local_28);
    *(undefined1 *)(puVar3 + 1) = uVar1;
  }
  if ((uVar7 & 1) == 0) {
    if (*(long *)(*(long *)(*param_1 + 0x10) + 0x20) == 0) {
      if (*(long *)(*(long *)(*param_1 + 0x10) + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.tail.is_none()",0x25,
                   &PTR_s__root__cargo_registry_src_index__00af3fe8);
      }
      return 0;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6[1]);
  }
  return 1;
}


// ===== 00980310  <tokio::task::local::LocalSet_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::LocalSet as core::default::Default>::default */

void __rustcall <tokio::task::local::LocalSet_as_core::default::Default>::default(void)

{
  (*(code *)PTR_new_00b04cb8)();
  return;
}


// ===== 00980314  <tokio::runtime::io::scheduled_io::Readiness_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::scheduled_io::Readiness as core::future::future::Future>::poll */

void __rustcall
<tokio::runtime::io::scheduled_io::Readiness_as_core::future::future::Future>::poll
          (ulong *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long *local_68;
  
  plVar14 = (long *)*param_3;
  plVar1 = param_2 + 1;
LAB_00980368:
  do {
    while( true ) {
      lVar6 = *param_2;
      if ((char)param_2[7] == '\0') break;
      if ((char)param_2[7] != '\x01') {
        uVar8 = *(ulong *)(lVar6 + 0x10);
        uVar9 = param_2[5];
        uVar11 = -(uVar9 & 1) & 5;
        if ((uVar9 & 2) != 0) {
          uVar11 = uVar11 | 10;
        }
        if ((uVar9 & 0x10) != 0) {
          uVar11 = uVar11 | 0x14;
        }
        *(char *)(param_1 + 1) = (char)(uVar8 >> 0x10);
        *param_1 = uVar8 & (uVar11 | uVar9 & 0x20);
        *(byte *)((long)param_1 + 9) = (byte)(uVar8 >> 0x1f) & 1;
        return;
      }
      pcVar12 = (char *)(lVar6 + 0x18);
      if (*pcVar12 == '\0') {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar4) {
          *pcVar12 = '\x01';
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_009804b8;
        bVar2 = *(byte *)(param_2 + 6);
      }
      else {
        ClearExclusiveLocal();
LAB_009804b8:
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                  (pcVar12,param_3,0xffffffff);
        bVar2 = *(byte *)(param_2 + 6);
        param_3 = extraout_x1_00;
      }
      if ((bVar2 & 1) == 0) {
        puVar13 = (undefined8 *)param_2[3];
        if (puVar13 == (undefined8 *)0x0) {
                    /* try { // try from 0098063c to 00980647 has its CatchHandler @ 0098068c */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3980);
        }
        lVar6 = param_2[4];
        if ((puVar13 != (undefined8 *)*plVar14) || (lVar6 != plVar14[1])) {
                    /* try { // try from 0098058c to 0098058f has its CatchHandler @ 0098068c */
          auVar15 = (**(code **)*plVar14)();
                    /* try { // try from 0098059c to 009805a3 has its CatchHandler @ 00980678 */
          (*(code *)puVar13[3])(lVar6);
          *(undefined1 (*) [16])(param_2 + 3) = auVar15;
        }
        *(undefined1 *)((long)param_1 + 9) = 2;
        while (*pcVar12 == '\x01') {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
          if (bVar4) {
            *pcVar12 = '\0';
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            return;
          }
        }
LAB_0098064c:
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar12,0);
        return;
      }
      *(undefined1 *)(param_2 + 7) = 2;
      do {
        if (*pcVar12 != '\x01') goto LAB_009804a0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar4) {
          *pcVar12 = '\0';
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar8 = *(ulong *)(lVar6 + 0x10);
    uVar9 = param_2[5];
    uVar11 = -(uVar9 & 1) & 5;
    if ((uVar9 & 2) != 0) {
      uVar11 = uVar11 | 10;
    }
    if ((uVar9 & 0x10) != 0) {
      uVar11 = uVar11 | 0x14;
    }
    uVar11 = uVar11 | uVar9 & 0x20;
    if ((uVar8 & (uVar11 | 0x80000000)) != 0) {
      *param_1 = uVar8 & uVar11;
      *(undefined1 *)(param_2 + 7) = 2;
      *(char *)(param_1 + 1) = (char)(uVar8 >> 0x10);
      *(char *)((long)param_1 + 9) = (char)((uVar8 & 0x80000000) >> 0x1f);
      return;
    }
    lVar6 = *param_2;
    pcVar12 = (char *)(lVar6 + 0x18);
    if (*pcVar12 == '\0') {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
      if (bVar4) {
        *pcVar12 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_009804d4;
    }
    else {
      ClearExclusiveLocal();
LAB_009804d4:
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                (lVar6 + 0x18,param_3,0xffffffff);
    }
    uVar10 = *(ulong *)(*param_2 + 0x10);
    uVar8 = uVar10 & 0x80000000;
    uVar9 = uVar10;
    if (uVar8 != 0) {
      uVar9 = 0x3f;
    }
    if ((uVar9 & uVar11) != 0 || uVar8 != 0) {
      *param_1 = uVar9 & uVar11;
      *(undefined1 *)(param_2 + 7) = 2;
      *(char *)(param_1 + 1) = (char)(uVar10 >> 0x10);
      *(char *)((long)param_1 + 9) = (char)(uVar8 >> 0x1f);
      while (*pcVar12 == '\x01') {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar4) {
          *pcVar12 = '\0';
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return;
        }
      }
      goto LAB_0098064c;
    }
                    /* try { // try from 00980430 to 00980433 has its CatchHandler @ 00980688 */
    auVar15 = (**(code **)*plVar14)(plVar14[1]);
    if (param_2[3] != 0) {
                    /* try { // try from 0098044c to 0098044f has its CatchHandler @ 00980680 */
      (**(code **)(param_2[3] + 0x18))(param_2[4]);
    }
    *(undefined1 (*) [16])(param_2 + 3) = auVar15;
    param_3 = (undefined8 *)(lVar6 + 0x20);
    plVar7 = (long *)*param_3;
    local_68 = plVar1;
    if (plVar7 == plVar1) {
                    /* try { // try from 00980620 to 00980637 has its CatchHandler @ 009806c0 */
      core[bcece726f298455b]::panicking::assert_failed::
      <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::Waiter>>>
                (1,param_3,&local_68,0,param_6,&PTR_s__root__cargo_registry_src_index__00af47e0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x98064c);
      (*pcVar5)();
    }
    param_2[1] = 0;
    param_2[2] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      *plVar7 = (long)plVar1;
    }
    *(long **)(lVar6 + 0x20) = plVar1;
    if (*(long *)(lVar6 + 0x28) == 0) {
      *(long **)(lVar6 + 0x28) = plVar1;
    }
    *(undefined1 *)(param_2 + 7) = 1;
    do {
      if (*pcVar12 != '\x01') goto LAB_009804a0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
      if (bVar4) {
        *pcVar12 = '\0';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  } while( true );
LAB_009804a0:
  ClearExclusiveLocal();
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar12,0);
  param_3 = extraout_x1;
  goto LAB_00980368;
}


// ===== 009806f8  <tokio::task::local::LocalSet_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::LocalSet as core::ops::drop::Drop>::drop */

void __rustcall <tokio::task::local::LocalSet_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *local_18;
  
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01138;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01138);
    puVar3 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    puVar3 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar6);
  }
  if (puVar3 < (undefined8 *)0x2) {
    puVar3 = (undefined8 *)FUN_009966d0(uVar6 & 0xffffffff,puVar3,0);
  }
  if (puVar3 == (undefined8 *)0x0) {
    FUN_0097d9bc(*param_1);
    return;
  }
  puVar4 = (ulong *)*param_1;
  uVar6 = *puVar4;
  *puVar4 = uVar6 + 1;
  if (0xfffffffffffffffe < uVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x980814);
    (*pcVar2)();
  }
  uVar7 = *puVar3;
  uVar1 = *(undefined1 *)(puVar3 + 1);
  *puVar3 = puVar4;
  *(undefined1 *)(puVar3 + 1) = 0;
                    /* try { // try from 00980764 to 00980767 has its CatchHandler @ 00980814 */
  FUN_0097d9bc();
  local_18 = (long *)*puVar3;
  *puVar3 = uVar7;
  if ((local_18 != (long *)0x0) && (lVar5 = *local_18, *local_18 = lVar5 + -1, lVar5 + -1 == 0)) {
    <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(&local_18);
    *(undefined1 *)(puVar3 + 1) = uVar1;
    return;
  }
  *(undefined1 *)(puVar3 + 1) = uVar1;
  return;
}


// ===== 0098082c  <tokio::runtime::io::scheduled_io::Readiness_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::scheduled_io::Readiness as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::io::scheduled_io::Readiness_as_core::ops::drop::Drop>::drop
          (long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  pcVar3 = (char *)(lVar5 + 0x18);
  if (*pcVar3 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *pcVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 != '\0') goto LAB_00980884;
    lVar6 = param_1[1];
    if (lVar6 == 0) goto LAB_009808a8;
LAB_00980864:
    plVar4 = (long *)param_1[2];
    *(long **)(lVar6 + 8) = plVar4;
    if (plVar4 != (long *)0x0) goto LAB_00980870;
LAB_009808c0:
    if (*(long **)(lVar5 + 0x28) != param_1 + 1) goto LAB_009808cc;
    *(long *)(lVar5 + 0x28) = param_1[1];
  }
  else {
    ClearExclusiveLocal();
LAB_00980884:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (lVar5 + 0x18,param_2,0xffffffff);
    lVar6 = param_1[1];
    if (lVar6 != 0) goto LAB_00980864;
LAB_009808a8:
    if (*(long **)(lVar5 + 0x20) != param_1 + 1) goto LAB_009808cc;
    plVar4 = (long *)param_1[2];
    *(long **)(lVar5 + 0x20) = plVar4;
    if (plVar4 == (long *)0x0) goto LAB_009808c0;
LAB_00980870:
    *plVar4 = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
LAB_009808cc:
  do {
    pcVar3 = (char *)(lVar5 + 0x18);
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


// ===== 0098090c  <tokio::task::local::LocalDataEnterGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::local::LocalDataEnterGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::task::local::LocalDataEnterGuard_as_core::ops::drop::Drop>::drop(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *local_28;
  
  plVar1 = (long *)*param_1;
  lVar2 = param_1[1];
  param_1[1] = 0;
  local_28 = (long *)*plVar1;
  *plVar1 = lVar2;
  if ((local_28 != (long *)0x0) && (lVar2 = *local_28, *local_28 = lVar2 + -1, lVar2 + -1 == 0)) {
    <alloc::rc::[6]::alloc::rc::Rc<tokio::task::local::Context>>::drop_slow(&local_28);
    *(char *)(plVar1 + 1) = (char)param_1[2];
    return;
  }
  *(char *)(plVar1 + 1) = (char)param_1[2];
  return;
}


// ===== 00980980  <tokio::runtime::context::runtime::EnterRuntimeGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::context::runtime::EnterRuntimeGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::context::runtime::EnterRuntimeGuard_as_core::ops::drop::Drop>::drop(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  
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
  if (*(char *)((long)pvVar1 + 0x46) != '\x02') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)((long)pvVar1 + 0x46) = 2;
    if ((*(uint *)((long)pvVar1 + 0x38) & 1) == 0) {
      FUN_009c64a0();
    }
    *(undefined4 *)((long)pvVar1 + 0x38) = 1;
    *(undefined8 *)((long)pvVar1 + 0x3c) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: c.runtime.get().is_entered()",0x2e,
             &PTR_s__root__cargo_registry_src_index__00af3790);
}


// ===== 00980a60  <tokio::runtime::scheduler::multi_thread::park::Parker_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::multi_thread::park::Parker as core::clone::Clone>::clone */

void __rustcall
<tokio::runtime::scheduler::multi_thread::park::Parker_as_core::clone::Clone>::clone(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint7 uStack_27;
  
  lVar5 = *param_1;
  plVar6 = *(long **)(lVar5 + 0x10);
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
    uVar8 = *(undefined8 *)(lVar5 + 0x10);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined8 *)FUN_004b25a4(0x30,8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 1;
      *puVar4 = 1;
      puVar4[3] = 0;
      puVar4[2] = uVar8;
      puVar4[5] = (ulong)uStack_27 << 8;
      puVar4[4] = 0;
      return;
    }
                    /* try { // try from 00980adc to 00980aeb has its CatchHandler @ 00980af0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x980af0);
  (*pcVar3)();
}


// ===== 00980b20  FUN_00980b20 =====

void FUN_00980b20(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = (ulong *)*param_1;
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
  if (uVar4 != 1) {
    if (uVar4 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.ref_count() >= 1",0x27,
               &PTR_s__root__cargo_registry_src_index__00af3f10);
  }
                    /* WARNING: Could not recover jumptable at 0x00980b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar3[2] + 0x10))();
  return;
}


// ===== 00980b7c  FUN_00980b7c =====

void FUN_00980b7c(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = (ulong *)*param_1;
  do {
    uVar4 = *puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *puVar3 = uVar4 - 0x80;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (0x7f < uVar4) {
    if (uVar4 < 0xc0) {
                    /* WARNING: Could not recover jumptable at 0x00980bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar3[2] + 0x10))();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: prev.ref_count() >= 2",0x27,
             &PTR_s__root__cargo_registry_src_index__00af3e80);
}


// ===== 00980bd8  <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::unbounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::add_permit */

void __rustcall
<tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
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
      *param_1 = uVar3 - 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (1 < uVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00980c04  <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::unbounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::add_permits */

void __rustcall
<tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permits
          (ulong *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  do {
    uVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar3 + param_2 * -2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_2 <= uVar3 >> 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00980c34  <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::unbounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::is_idle */

bool __rustcall
<tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle
          (ulong *param_1)

{
  return *param_1 < 2;
}


// ===== 00980c44  <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_closed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::unbounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::is_closed */

uint __rustcall
<tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_closed
          (undefined8 *param_1)

{
  return (uint)*param_1 & 1;
}


// ===== 00980c50  FUN_00980c50 =====

undefined1  [16] FUN_00980c50(long param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *****ppppplVar4;
  undefined8 uVar5;
  uint uVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  undefined1 auVar9 [16];
  long ****local_50;
  long ****local_48;
  long ****local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00980e54;
  }
  else {
    ClearExclusiveLocal();
LAB_00980e54:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 00980c8c to 00980c97 has its CatchHandler @ 00980f20 */
  auVar9 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
           ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar9._8_8_;
  if (auVar9._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        ppppplVar4 = (long *****)local_50;
        goto LAB_00980e18;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_00980e1c;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 00980e7c to 00980e87 has its CatchHandler @ 00980ef4 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x00980cf4;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x00980d14;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x00980cf4:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x00980d14:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
  local_28 = (long ****)&local_48;
  local_48 = (long ****)CONCAT44(local_48._4_4_,*param_2);
                    /* try { // try from 00980d2c to 00980d3b has its CatchHandler @ 00980ef4 */
  auVar9 = <mio::sys::unix::sourcefd::SourceFd_as_mio::event::source::Source>::register
                     (&local_28,param_1 + 0x40,local_50 + 0x10,uVar6);
  ppppplVar4 = auVar9._0_8_;
  if (ppppplVar4 == (long *****)0x0) {
    uVar5 = 0;
    goto LAB_00980e1c;
  }
  local_48 = (long ****)ppppplVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00980e90;
  }
  else {
    ClearExclusiveLocal();
LAB_00980e90:
                    /* try { // try from 00980e90 to 00980eaf has its CatchHandler @ 00980eb4 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar9._8_8_,0xffffffff);
  }
  ppppplVar7 = (long *****)(local_50 + 0x10);
  if (*ppppplVar7 == (long ****)0x0) {
    if (*(long ******)(param_1 + 0x28) == ppppplVar7) {
      pppplVar8 = (long ****)local_50[0x11];
      *(long *****)(param_1 + 0x28) = pppplVar8;
      goto joined_r0x00980dcc;
    }
  }
  else {
    pppplVar8 = (long ****)local_50[0x11];
    (*ppppplVar7)[1] = (long ***)pppplVar8;
joined_r0x00980dcc:
    if (pppplVar8 == (long ****)0x0) {
      if (*(long ******)(param_1 + 0x30) != ppppplVar7) goto LAB_00980ddc;
      *(long *****)(param_1 + 0x30) = *ppppplVar7;
    }
    else {
      *pppplVar8 = (long ***)*ppppplVar7;
    }
    *ppppplVar7 = (long ****)0x0;
    local_50[0x11] = (long ***)0x0;
    local_28 = local_50;
    do {
      pppplVar8 = (long ****)*local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = (long ***)((long)pppplVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ****)((long)pppplVar8 + -1) == (long ****)0x0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00980da0 to 00980da7 has its CatchHandler @ 00980ebc */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_00980ddc:
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
  do {
    pppplVar8 = (long ****)*local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = (long ***)((long)pppplVar8 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (pppplVar8 == (long ****)0x1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_00980e18:
  local_50 = (long ****)ppppplVar4;
  uVar5 = 1;
LAB_00980e1c:
  auVar9._8_8_ = local_50;
  auVar9._0_8_ = uVar5;
  return auVar9;
}


// ===== 00980f58  FUN_00980f58 =====

undefined1  [16] FUN_00980f58(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  long *local_48;
  long *local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_0098114c;
  }
  else {
    ClearExclusiveLocal();
LAB_0098114c:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 00980f94 to 00980f9f has its CatchHandler @ 00981218 */
  auVar10 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
            ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar10._8_8_;
  if (auVar10._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        plVar4 = local_50;
        goto LAB_00981110;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_00981114;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 00981174 to 0098117f has its CatchHandler @ 009811ec */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x00980ffc;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x0098101c;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x00980ffc:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x0098101c:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
                    /* try { // try from 00981024 to 00981033 has its CatchHandler @ 009811ec */
  auVar10 = <mio::net::uds::listener::UnixListener_as_mio::event::source::Source>::register
                      (param_2,param_1 + 0x40,local_50 + 0x10,uVar6);
  plVar4 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_00981114;
  }
  local_48 = plVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00981188;
  }
  else {
    ClearExclusiveLocal();
LAB_00981188:
                    /* try { // try from 00981188 to 009811a7 has its CatchHandler @ 009811ac */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar10._8_8_,0xffffffff);
  }
  plVar7 = local_50 + 0x10;
  if (*plVar7 == 0) {
    if (*(long **)(param_1 + 0x28) == plVar7) {
      plVar9 = (long *)local_50[0x11];
      *(long **)(param_1 + 0x28) = plVar9;
      goto joined_r0x009810c4;
    }
  }
  else {
    plVar9 = (long *)local_50[0x11];
    *(long **)(*plVar7 + 8) = plVar9;
joined_r0x009810c4:
    if (plVar9 == (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != plVar7) goto LAB_009810d4;
      *(long *)(param_1 + 0x30) = *plVar7;
    }
    else {
      *plVar9 = *plVar7;
    }
    *plVar7 = 0;
    local_50[0x11] = 0;
    local_28 = local_50;
    do {
      lVar8 = *local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00981098 to 0098109f has its CatchHandler @ 009811b4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_009810d4:
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
  do {
    lVar8 = *local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_00981110:
  local_50 = plVar4;
  uVar5 = 1;
LAB_00981114:
  auVar10._8_8_ = local_50;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


// ===== 00981250  FUN_00981250 =====

undefined1  [16] FUN_00981250(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  long *local_48;
  long *local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00981444;
  }
  else {
    ClearExclusiveLocal();
LAB_00981444:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 0098128c to 00981297 has its CatchHandler @ 00981510 */
  auVar10 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
            ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar10._8_8_;
  if (auVar10._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        plVar4 = local_50;
        goto LAB_00981408;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_0098140c;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 0098146c to 00981477 has its CatchHandler @ 009814e4 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x009812f4;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x00981314;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x009812f4:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x00981314:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
                    /* try { // try from 0098131c to 0098132b has its CatchHandler @ 009814e4 */
  auVar10 = <mio::net::uds::datagram::UnixDatagram_as_mio::event::source::Source>::register
                      (param_2,param_1 + 0x40,local_50 + 0x10,uVar6);
  plVar4 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_0098140c;
  }
  local_48 = plVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00981480;
  }
  else {
    ClearExclusiveLocal();
LAB_00981480:
                    /* try { // try from 00981480 to 0098149f has its CatchHandler @ 009814a4 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar10._8_8_,0xffffffff);
  }
  plVar7 = local_50 + 0x10;
  if (*plVar7 == 0) {
    if (*(long **)(param_1 + 0x28) == plVar7) {
      plVar9 = (long *)local_50[0x11];
      *(long **)(param_1 + 0x28) = plVar9;
      goto joined_r0x009813bc;
    }
  }
  else {
    plVar9 = (long *)local_50[0x11];
    *(long **)(*plVar7 + 8) = plVar9;
joined_r0x009813bc:
    if (plVar9 == (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != plVar7) goto LAB_009813cc;
      *(long *)(param_1 + 0x30) = *plVar7;
    }
    else {
      *plVar9 = *plVar7;
    }
    *plVar7 = 0;
    local_50[0x11] = 0;
    local_28 = local_50;
    do {
      lVar8 = *local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00981390 to 00981397 has its CatchHandler @ 009814ac */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_009813cc:
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
  do {
    lVar8 = *local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_00981408:
  local_50 = plVar4;
  uVar5 = 1;
LAB_0098140c:
  auVar10._8_8_ = local_50;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


// ===== 00981548  FUN_00981548 =====

undefined1  [16] FUN_00981548(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  long *local_48;
  long *local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_0098173c;
  }
  else {
    ClearExclusiveLocal();
LAB_0098173c:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 00981584 to 0098158f has its CatchHandler @ 00981808 */
  auVar10 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
            ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar10._8_8_;
  if (auVar10._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        plVar4 = local_50;
        goto LAB_00981700;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_00981704;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 00981764 to 0098176f has its CatchHandler @ 009817dc */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x009815ec;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x0098160c;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x009815ec:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x0098160c:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
                    /* try { // try from 00981614 to 00981623 has its CatchHandler @ 009817dc */
  auVar10 = <mio::net::uds::listener::UnixListener_as_mio::event::source::Source>::register
                      (param_2,param_1 + 0x40,local_50 + 0x10,uVar6);
  plVar4 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_00981704;
  }
  local_48 = plVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00981778;
  }
  else {
    ClearExclusiveLocal();
LAB_00981778:
                    /* try { // try from 00981778 to 00981797 has its CatchHandler @ 0098179c */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar10._8_8_,0xffffffff);
  }
  plVar7 = local_50 + 0x10;
  if (*plVar7 == 0) {
    if (*(long **)(param_1 + 0x28) == plVar7) {
      plVar9 = (long *)local_50[0x11];
      *(long **)(param_1 + 0x28) = plVar9;
      goto joined_r0x009816b4;
    }
  }
  else {
    plVar9 = (long *)local_50[0x11];
    *(long **)(*plVar7 + 8) = plVar9;
joined_r0x009816b4:
    if (plVar9 == (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != plVar7) goto LAB_009816c4;
      *(long *)(param_1 + 0x30) = *plVar7;
    }
    else {
      *plVar9 = *plVar7;
    }
    *plVar7 = 0;
    local_50[0x11] = 0;
    local_28 = local_50;
    do {
      lVar8 = *local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00981688 to 0098168f has its CatchHandler @ 009817a4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_009816c4:
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
  do {
    lVar8 = *local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_00981700:
  local_50 = plVar4;
  uVar5 = 1;
LAB_00981704:
  auVar10._8_8_ = local_50;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


// ===== 00981840  FUN_00981840 =====

undefined1  [16] FUN_00981840(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  long *local_48;
  long *local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00981a34;
  }
  else {
    ClearExclusiveLocal();
LAB_00981a34:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 0098187c to 00981887 has its CatchHandler @ 00981b00 */
  auVar10 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
            ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar10._8_8_;
  if (auVar10._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        plVar4 = local_50;
        goto LAB_009819f8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_009819fc;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 00981a5c to 00981a67 has its CatchHandler @ 00981ad4 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x009818e4;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x00981904;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x009818e4:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x00981904:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
                    /* try { // try from 0098190c to 0098191b has its CatchHandler @ 00981ad4 */
  auVar10 = <mio::net::uds::datagram::UnixDatagram_as_mio::event::source::Source>::register
                      (param_2,param_1 + 0x40,local_50 + 0x10,uVar6);
  plVar4 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_009819fc;
  }
  local_48 = plVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00981a70;
  }
  else {
    ClearExclusiveLocal();
LAB_00981a70:
                    /* try { // try from 00981a70 to 00981a8f has its CatchHandler @ 00981a94 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar10._8_8_,0xffffffff);
  }
  plVar7 = local_50 + 0x10;
  if (*plVar7 == 0) {
    if (*(long **)(param_1 + 0x28) == plVar7) {
      plVar9 = (long *)local_50[0x11];
      *(long **)(param_1 + 0x28) = plVar9;
      goto joined_r0x009819ac;
    }
  }
  else {
    plVar9 = (long *)local_50[0x11];
    *(long **)(*plVar7 + 8) = plVar9;
joined_r0x009819ac:
    if (plVar9 == (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != plVar7) goto LAB_009819bc;
      *(long *)(param_1 + 0x30) = *plVar7;
    }
    else {
      *plVar9 = *plVar7;
    }
    *plVar7 = 0;
    local_50[0x11] = 0;
    local_28 = local_50;
    do {
      lVar8 = *local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00981980 to 00981987 has its CatchHandler @ 00981a9c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_009819bc:
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
  do {
    lVar8 = *local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_009819f8:
  local_50 = plVar4;
  uVar5 = 1;
LAB_009819fc:
  auVar10._8_8_ = local_50;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


// ===== 00981b38  FUN_00981b38 =====

undefined1  [16] FUN_00981b38(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  long *local_48;
  long *local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00981d2c;
  }
  else {
    ClearExclusiveLocal();
LAB_00981d2c:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 00981b74 to 00981b7f has its CatchHandler @ 00981df8 */
  auVar10 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
            ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar10._8_8_;
  if (auVar10._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        plVar4 = local_50;
        goto LAB_00981cf0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_00981cf4;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 00981d54 to 00981d5f has its CatchHandler @ 00981dcc */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x00981bdc;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x00981bfc;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x00981bdc:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x00981bfc:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
                    /* try { // try from 00981c04 to 00981c13 has its CatchHandler @ 00981dcc */
  auVar10 = <mio::net::uds::datagram::UnixDatagram_as_mio::event::source::Source>::register
                      (param_2,param_1 + 0x40,local_50 + 0x10,uVar6);
  plVar4 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_00981cf4;
  }
  local_48 = plVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00981d68;
  }
  else {
    ClearExclusiveLocal();
LAB_00981d68:
                    /* try { // try from 00981d68 to 00981d87 has its CatchHandler @ 00981d8c */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar10._8_8_,0xffffffff);
  }
  plVar7 = local_50 + 0x10;
  if (*plVar7 == 0) {
    if (*(long **)(param_1 + 0x28) == plVar7) {
      plVar9 = (long *)local_50[0x11];
      *(long **)(param_1 + 0x28) = plVar9;
      goto joined_r0x00981ca4;
    }
  }
  else {
    plVar9 = (long *)local_50[0x11];
    *(long **)(*plVar7 + 8) = plVar9;
joined_r0x00981ca4:
    if (plVar9 == (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != plVar7) goto LAB_00981cb4;
      *(long *)(param_1 + 0x30) = *plVar7;
    }
    else {
      *plVar9 = *plVar7;
    }
    *plVar7 = 0;
    local_50[0x11] = 0;
    local_28 = local_50;
    do {
      lVar8 = *local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00981c78 to 00981c7f has its CatchHandler @ 00981d94 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_00981cb4:
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
  do {
    lVar8 = *local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_00981cf0:
  local_50 = plVar4;
  uVar5 = 1;
LAB_00981cf4:
  auVar10._8_8_ = local_50;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


// ===== 00981e30  FUN_00981e30 =====

undefined1  [16] FUN_00981e30(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  long *local_48;
  long *local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00982024;
  }
  else {
    ClearExclusiveLocal();
LAB_00982024:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 00981e6c to 00981e77 has its CatchHandler @ 009820f0 */
  auVar10 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
            ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar10._8_8_;
  if (auVar10._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        plVar4 = local_50;
        goto LAB_00981fe8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_00981fec;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 0098204c to 00982057 has its CatchHandler @ 009820c4 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x00981ed4;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x00981ef4;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x00981ed4:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x00981ef4:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
                    /* try { // try from 00981efc to 00981f0b has its CatchHandler @ 009820c4 */
  auVar10 = <mio::net::uds::listener::UnixListener_as_mio::event::source::Source>::register
                      (param_2,param_1 + 0x40,local_50 + 0x10,uVar6);
  plVar4 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_00981fec;
  }
  local_48 = plVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00982060;
  }
  else {
    ClearExclusiveLocal();
LAB_00982060:
                    /* try { // try from 00982060 to 0098207f has its CatchHandler @ 00982084 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar10._8_8_,0xffffffff);
  }
  plVar7 = local_50 + 0x10;
  if (*plVar7 == 0) {
    if (*(long **)(param_1 + 0x28) == plVar7) {
      plVar9 = (long *)local_50[0x11];
      *(long **)(param_1 + 0x28) = plVar9;
      goto joined_r0x00981f9c;
    }
  }
  else {
    plVar9 = (long *)local_50[0x11];
    *(long **)(*plVar7 + 8) = plVar9;
joined_r0x00981f9c:
    if (plVar9 == (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != plVar7) goto LAB_00981fac;
      *(long *)(param_1 + 0x30) = *plVar7;
    }
    else {
      *plVar9 = *plVar7;
    }
    *plVar7 = 0;
    local_50[0x11] = 0;
    local_28 = local_50;
    do {
      lVar8 = *local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00981f70 to 00981f77 has its CatchHandler @ 0098208c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_00981fac:
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
  do {
    lVar8 = *local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_00981fe8:
  local_50 = plVar4;
  uVar5 = 1;
LAB_00981fec:
  auVar10._8_8_ = local_50;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


// ===== 00982128  FUN_00982128 =====

undefined1  [16] FUN_00982128(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  long *local_48;
  long *local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_0098231c;
  }
  else {
    ClearExclusiveLocal();
LAB_0098231c:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 00982164 to 0098216f has its CatchHandler @ 009823e8 */
  auVar10 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
            ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar10._8_8_;
  if (auVar10._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        plVar4 = local_50;
        goto LAB_009822e0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_009822e4;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 00982344 to 0098234f has its CatchHandler @ 009823bc */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x009821cc;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x009821ec;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x009821cc:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x009821ec:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
                    /* try { // try from 009821f4 to 00982203 has its CatchHandler @ 009823bc */
  auVar10 = <mio::net::uds::datagram::UnixDatagram_as_mio::event::source::Source>::register
                      (param_2,param_1 + 0x40,local_50 + 0x10,uVar6);
  plVar4 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_009822e4;
  }
  local_48 = plVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00982358;
  }
  else {
    ClearExclusiveLocal();
LAB_00982358:
                    /* try { // try from 00982358 to 00982377 has its CatchHandler @ 0098237c */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar10._8_8_,0xffffffff);
  }
  plVar7 = local_50 + 0x10;
  if (*plVar7 == 0) {
    if (*(long **)(param_1 + 0x28) == plVar7) {
      plVar9 = (long *)local_50[0x11];
      *(long **)(param_1 + 0x28) = plVar9;
      goto joined_r0x00982294;
    }
  }
  else {
    plVar9 = (long *)local_50[0x11];
    *(long **)(*plVar7 + 8) = plVar9;
joined_r0x00982294:
    if (plVar9 == (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != plVar7) goto LAB_009822a4;
      *(long *)(param_1 + 0x30) = *plVar7;
    }
    else {
      *plVar9 = *plVar7;
    }
    *plVar7 = 0;
    local_50[0x11] = 0;
    local_28 = local_50;
    do {
      lVar8 = *local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00982268 to 0098226f has its CatchHandler @ 00982384 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_009822a4:
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
  do {
    lVar8 = *local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_009822e0:
  local_50 = plVar4;
  uVar5 = 1;
LAB_009822e4:
  auVar10._8_8_ = local_50;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


// ===== 00982420  FUN_00982420 =====

undefined1  [16] FUN_00982420(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  long *local_48;
  long *local_28;
  
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00982614;
  }
  else {
    ClearExclusiveLocal();
LAB_00982614:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,param_2,0xffffffff);
  }
                    /* try { // try from 0098245c to 00982467 has its CatchHandler @ 009826e0 */
  auVar10 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
            ::allocate(param_1,param_1 + 0x10);
  local_50 = auVar10._8_8_;
  if (auVar10._0_8_ == 1) {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        plVar4 = local_50;
        goto LAB_009825d8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar5 = 1;
    } while (cVar2 != '\0');
    goto LAB_009825dc;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 0098263c to 00982647 has its CatchHandler @ 009826b4 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto joined_r0x009824c4;
    }
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = 0x10;
      goto joined_r0x009824e4;
    }
    uVar6 = 1;
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
joined_r0x009824c4:
    if ((param_3 >> 4 & 1) != 0) {
      uVar6 = uVar6 | 0x10;
    }
joined_r0x009824e4:
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
                    /* try { // try from 009824ec to 009824fb has its CatchHandler @ 009826b4 */
  auVar10 = <mio::net::uds::datagram::UnixDatagram_as_mio::event::source::Source>::register
                      (param_2,param_1 + 0x40,local_50 + 0x10,uVar6);
  plVar4 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_009825dc;
  }
  local_48 = plVar4;
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00982650;
  }
  else {
    ClearExclusiveLocal();
LAB_00982650:
                    /* try { // try from 00982650 to 0098266f has its CatchHandler @ 00982674 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1 + 8,auVar10._8_8_,0xffffffff);
  }
  plVar7 = local_50 + 0x10;
  if (*plVar7 == 0) {
    if (*(long **)(param_1 + 0x28) == plVar7) {
      plVar9 = (long *)local_50[0x11];
      *(long **)(param_1 + 0x28) = plVar9;
      goto joined_r0x0098258c;
    }
  }
  else {
    plVar9 = (long *)local_50[0x11];
    *(long **)(*plVar7 + 8) = plVar9;
joined_r0x0098258c:
    if (plVar9 == (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != plVar7) goto LAB_0098259c;
      *(long *)(param_1 + 0x30) = *plVar7;
    }
    else {
      *plVar9 = *plVar7;
    }
    *plVar7 = 0;
    local_50[0x11] = 0;
    local_28 = local_50;
    do {
      lVar8 = *local_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
      if (bVar3) {
        *local_50 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00982560 to 00982567 has its CatchHandler @ 0098267c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
                (&local_28);
    }
  }
LAB_0098259c:
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
  do {
    lVar8 = *local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_50);
  }
LAB_009825d8:
  local_50 = plVar4;
  uVar5 = 1;
LAB_009825dc:
  auVar10._8_8_ = local_50;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


// ===== 00982718  FUN_00982718 =====

long FUN_00982718(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined4 local_44;
  long *local_28;
  
  local_44 = *param_3;
  local_28 = (long *)&local_44;
  auVar8 = <mio::sys::unix::sourcefd::SourceFd_as_mio::event::source::Source>::deregister
                     (&local_28,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00982774;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_00982774:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x982818);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 009827a0 to 009827a7 has its CatchHandler @ 00982888 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x00982854;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x00982854:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 009827f0 to 00982813 has its CatchHandler @ 009828e0 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
  }
  return 0;
}


// ===== 009828f8  FUN_009828f8 =====

long FUN_009828f8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long *local_28;
  
  auVar8 = <mio::net::tcp::listener::TcpListener_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00982958;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_00982958:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x9829fc);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 00982984 to 0098298b has its CatchHandler @ 00982a64 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x00982a38;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x00982a38:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 009829d4 to 009829f7 has its CatchHandler @ 00982abc */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
    return 0;
  }
  return 0;
}


// ===== 00982ad4  FUN_00982ad4 =====

long FUN_00982ad4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long *local_28;
  
  auVar8 = <mio::sys::unix::pipe::Receiver_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00982b34;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_00982b34:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x982bd8);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 00982b60 to 00982b67 has its CatchHandler @ 00982c40 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x00982c14;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x00982c14:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 00982bb0 to 00982bd3 has its CatchHandler @ 00982c98 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
    return 0;
  }
  return 0;
}


// ===== 00982cb0  FUN_00982cb0 =====

long FUN_00982cb0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long *local_28;
  
  auVar8 = <mio::net::tcp::listener::TcpListener_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00982d10;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_00982d10:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x982db4);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 00982d3c to 00982d43 has its CatchHandler @ 00982e1c */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x00982df0;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x00982df0:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 00982d8c to 00982daf has its CatchHandler @ 00982e74 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
    return 0;
  }
  return 0;
}


// ===== 00982e8c  FUN_00982e8c =====

long FUN_00982e8c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long *local_28;
  
  auVar8 = <mio::sys::unix::pipe::Receiver_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00982eec;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_00982eec:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x982f90);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 00982f18 to 00982f1f has its CatchHandler @ 00982ff8 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x00982fcc;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x00982fcc:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 00982f68 to 00982f8b has its CatchHandler @ 00983050 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
    return 0;
  }
  return 0;
}


// ===== 00983068  FUN_00983068 =====

long FUN_00983068(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long *local_28;
  
  auVar8 = <mio::sys::unix::pipe::Receiver_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_009830c8;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_009830c8:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x98316c);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 009830f4 to 009830fb has its CatchHandler @ 009831d4 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x009831a8;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x009831a8:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 00983144 to 00983167 has its CatchHandler @ 0098322c */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
    return 0;
  }
  return 0;
}


// ===== 00983244  FUN_00983244 =====

long FUN_00983244(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long *local_28;
  
  auVar8 = <mio::net::tcp::listener::TcpListener_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_009832a4;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_009832a4:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x983348);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 009832d0 to 009832d7 has its CatchHandler @ 009833b0 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x00983384;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x00983384:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 00983320 to 00983343 has its CatchHandler @ 00983408 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
    return 0;
  }
  return 0;
}


// ===== 00983420  FUN_00983420 =====

long FUN_00983420(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long *local_28;
  
  auVar8 = <mio::sys::unix::pipe::Receiver_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00983480;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_00983480:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x983524);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 009834ac to 009834b3 has its CatchHandler @ 0098358c */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x00983560;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x00983560:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 009834fc to 0098351f has its CatchHandler @ 009835e4 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
    return 0;
  }
  return 0;
}


// ===== 009835fc  FUN_009835fc =====

long FUN_009835fc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long *local_28;
  
  auVar8 = <mio::sys::unix::pipe::Receiver_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 8);
  if (auVar8._0_8_ != 0) {
    return auVar8._0_8_;
  }
  plVar1 = param_1 + 1;
  if ((char)*plVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0098365c;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,auVar8._8_8_,0xffffffff);
LAB_0098365c:
  plVar7 = (long *)*param_2;
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x983700);
    (*pcVar5)();
  }
  lVar6 = param_1[4];
  local_28 = plVar7;
  if (lVar6 == param_1[2]) {
                    /* try { // try from 00983688 to 0098368f has its CatchHandler @ 00983768 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_1 + 2);
  }
  lVar2 = lVar6 + 1;
  *(long **)(param_1[3] + lVar6 * 8) = plVar7;
  param_1[4] = lVar2;
  *param_1 = lVar2;
  do {
    if ((char)*plVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x0098373c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined1 *)plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x0098373c:
  if (lVar2 == 0x10) {
    if (bVar4) {
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    else {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 1,0);
      local_28 = (long *)<mio::waker::mio::waker::Waker>::wake((long)param_1 + 0x44);
    }
    if (local_28 != (long *)0x0) {
                    /* try { // try from 009836d8 to 009836fb has its CatchHandler @ 009837c0 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to wake I/O driver",0x19,&local_28,&PTR_FUN_00af39f8,
                 &PTR_s__root__cargo_registry_src_index__00af3af0);
    }
  }
  else if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
    return 0;
  }
  return 0;
}


// ===== 009837d8  FUN_009837d8 =====

int * FUN_009837d8(int *param_1)

{
  uint uVar1;
  
  if (*param_1 != 2) {
    if (param_1[3] != -1) {
      close(param_1[3]);
    }
    if (param_1[4] != -1) {
      close(param_1[4]);
    }
    uVar1 = param_1[5];
    param_1 = (int *)(ulong)uVar1;
    if (uVar1 != 0xffffffff) {
      uVar1 = close(uVar1);
      return (int *)(ulong)uVar1;
    }
  }
  return param_1;
}


// ===== 00983830  FUN_00983830 =====

void FUN_00983830(int param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 0098387c  FUN_0098387c =====

void FUN_0098387c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long local_28;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    uVar5 = param_1[1] & 3;
    if ((1 < uVar5 - 2) && (uVar5 != 0)) {
      local_28 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else {
    plVar1 = plVar4 + 0x28;
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
                    /* try { // try from 009838b0 to 009838b7 has its CatchHandler @ 0098392c */
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar4 + 0x22);
      plVar4 = (long *)*param_1;
    }
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 00983960  FUN_00983960 =====

void FUN_00983960(long *param_1)

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
                    /* try { // try from 009839b4 to 009839b7 has its CatchHandler @ 009839f8 */
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


// ===== 00983a5c  FUN_00983a5c =====

void FUN_00983a5c(long param_1)

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


// ===== 00983aac  FUN_00983aac =====

int FUN_00983aac(long param_1)

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


// ===== 00983b00  FUN_00983b00 =====

void FUN_00983b00(ulong *param_1)

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


// ===== 00983b50  FUN_00983b50 =====

void FUN_00983b50(undefined8 *param_1,undefined8 param_2)

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
      goto joined_r0x00983c14;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar1,param_2,0xffffffff);
  plVar5 = (long *)*param_1;
  plVar6 = (long *)*plVar5;
joined_r0x00983c14:
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
                    /* try { // try from 00983c20 to 00983c23 has its CatchHandler @ 00983c40 */
  core::option::unwrap_failed(ppuVar4);
}


// ===== 00983c78  FUN_00983c78 =====

int FUN_00983c78(long *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  iVar1 = close((int)param_1[3]);
  return iVar1;
}


// ===== 00983cb0  FUN_00983cb0 =====

ulong FUN_00983cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 00983ccc to 00983cdb has its CatchHandler @ 00983d60 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00af3998,param_2,param_3);
  if (iVar1 == 0) {
    if (local_38 != 0) {
      if ((1 < (local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
        local_28 = local_38 - 1;
        local_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
      return 0;
    }
  }
  else if (local_38 == 0) {
                    /* try { // try from 00983d44 to 00983d5b has its CatchHandler @ 00983d60 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00af39c8);
  }
  return local_38;
}


// ===== 00983d78  FUN_00983d78 =====

char * FUN_00983d78(char *param_1)

{
  undefined8 *puVar1;
  int __fd;
  int __fd_00;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  uint __fd_01;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  uint local_80;
  int local_7c;
  ulong local_78;
  undefined1 local_70;
  long local_68;
  
  lVar7 = *(long *)(param_1 + 0x18);
  pcVar6 = param_1;
  if (lVar7 != 0) {
    lVar11 = lVar7 * 0x18;
    uVar10 = lVar7 - 1;
    do {
      lVar11 = lVar11 + -0x18;
      if (*(ulong *)(param_1 + 0x18) <= uVar10) {
                    /* try { // try from 00983ed4 to 00983ee3 has its CatchHandler @ 00983efc */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar10,*(ulong *)(param_1 + 0x18),
                   &PTR_s__root__cargo_registry_src_index__00af39e0);
      }
                    /* try { // try from 00983de0 to 00983e8f has its CatchHandler @ 00983f00 */
      pcVar6 = (char *)<std::process::[T]::std::process::Child>::try_wait
                                 (&local_80,*(long *)(param_1 + 0x10) + lVar11);
      uVar4 = local_80;
      if (((local_80 & 1) != 0) || (local_7c != 0)) {
        if (*(ulong *)(param_1 + 0x18) <= uVar10) {
                    /* try { // try from 00983ec8 to 00983ecf has its CatchHandler @ 00983f08 */
          <alloc::vec::alloc::vec::Vec<_,_>>::swap_remove::assert_failed(uVar10);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x983ee8);
          (*pcVar5)();
        }
        lVar7 = *(ulong *)(param_1 + 0x18) - 1;
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar7 * 0x18);
        *(long *)(param_1 + 0x18) = lVar7;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar11);
        __fd_01 = *(uint *)((long)puVar1 + 0xc);
        __fd = *(int *)(puVar1 + 2);
        __fd_00 = *(int *)((long)puVar1 + 0x14);
        uVar12 = *puVar8;
        uVar9 = puVar8[2];
        puVar1[1] = puVar8[1];
        *puVar1 = uVar12;
        puVar1[2] = uVar9;
        if (__fd_01 != 0xffffffff) {
          __fd_01 = close(__fd_01);
        }
        if (__fd != -1) {
          __fd_01 = close(__fd);
        }
        if (__fd_00 != -1) {
          __fd_01 = close(__fd_00);
        }
        pcVar6 = (char *)(ulong)__fd_01;
        if (((uVar4 != 0) && (1 < (local_78 & 3) - 2)) && ((local_78 & 3) != 0)) {
          local_68 = local_78 - 1;
          local_70 = 3;
          pcVar6 = (char *)<core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0xffffffffffffffff);
  }
  do {
    if (*param_1 != '\x01') {
      ClearExclusiveLocal();
      pcVar6 = (char *)<parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                                 (param_1,0);
      return pcVar6;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return pcVar6;
}


// ===== 00983f4c  <tokio::process::tokio::process::Command>::spawn =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::tokio::process::Command>::spawn */

void __rustcall <tokio::process::tokio::process::Command>::spawn(long *param_1,long param_2)

{
  undefined1 uVar1;
  long local_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_70;
  long lStack_68;
  long local_60;
  long local_50;
  long lStack_48;
  long local_40;
  
  FUN_009c30e0(&local_118);
  if (local_118 == -1) {
    *param_1 = -1;
    param_1[1] = local_110;
    return;
  }
  if (local_118 == 2) {
    local_100 = local_80;
    local_110 = local_90;
    lStack_108 = lStack_88;
  }
  if (local_f8 == 2) {
    uVar1 = *(undefined1 *)(param_2 + 200);
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 200);
    local_70 = local_f0;
    lStack_68 = lStack_e8;
    local_60 = local_e0;
  }
  if (local_d8 != 2) {
    lStack_48 = lStack_c8;
    local_50 = local_d0;
    local_40 = local_c0;
  }
  *param_1 = local_118;
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  param_1[0xd] = lStack_b0;
  param_1[0xc] = local_b8;
  param_1[0xf] = lStack_a0;
  param_1[0xe] = lStack_a8;
  param_1[3] = local_100;
  param_1[4] = local_f8;
  param_1[2] = lStack_108;
  param_1[1] = local_110;
  param_1[0x10] = local_98;
  param_1[6] = lStack_68;
  param_1[5] = local_70;
  param_1[7] = local_60;
  param_1[8] = local_d8;
  param_1[0xb] = local_40;
  param_1[10] = lStack_48;
  param_1[9] = local_50;
  return;
}


// ===== 00984070  <tokio::process::tokio::process::Command>::output =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::tokio::process::Command>::output */

void __rustcall <tokio::process::tokio::process::Command>::output(long *param_1,long param_2)

{
  long extraout_x9;
  long lVar1;
  undefined1 extraout_w10;
  undefined1 uVar2;
  long extraout_x11;
  long lVar3;
  long extraout_x12;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long local_50;
  long lStack_48;
  long local_40;
  
  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::stdout(param_2,2);
  <std::sys::process::unix::common::std::sys::process::unix::common::Command>::stderr(param_2,2);
  FUN_009c30e0(&local_108,param_2);
  lVar1 = extraout_x9;
  lVar3 = extraout_x11;
  uVar2 = extraout_w10;
  if (local_108 == -1) goto LAB_00984108;
  if (local_108 == 2) {
    local_100 = extraout_x12;
    if (local_e8 == 2) goto LAB_009840d4;
LAB_00984178:
    uVar2 = *(undefined1 *)(param_2 + 200);
    local_70 = local_e0;
    lStack_68 = lStack_d8;
    local_60 = local_d0;
  }
  else {
    lStack_78 = lStack_f0;
    local_80 = local_f8;
    if (local_e8 != 2) goto LAB_00984178;
LAB_009840d4:
    uVar2 = *(undefined1 *)(param_2 + 200);
  }
  if (local_c8 != 2) {
    lStack_48 = lStack_b8;
    local_50 = local_c0;
    local_40 = local_b0;
  }
  local_110 = local_88;
  lStack_128 = lStack_a0;
  local_130 = local_a8;
  lStack_118 = lStack_90;
  lStack_120 = lStack_98;
  lVar1 = local_e8;
  lVar3 = local_c8;
LAB_00984108:
  *param_1 = local_108;
  param_1[1] = local_100;
  param_1[4] = lVar1;
  *(undefined1 *)(param_1 + 0x11) = uVar2;
  param_1[3] = lStack_78;
  param_1[2] = local_80;
  param_1[6] = lStack_68;
  param_1[5] = local_70;
  param_1[10] = lStack_48;
  param_1[9] = local_50;
  param_1[7] = local_60;
  param_1[8] = lVar3;
  param_1[0x10] = local_110;
  param_1[0xb] = local_40;
  param_1[0xd] = lStack_128;
  param_1[0xc] = local_130;
  param_1[0xf] = lStack_118;
  param_1[0xe] = lStack_120;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}


// ===== 00984198  <tokio::process::tokio::process::Command>::status =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::tokio::process::Command>::status */

void __rustcall <tokio::process::tokio::process::Command>::status(long *param_1,long param_2)

{
  long extraout_x9;
  long lVar1;
  undefined1 extraout_w10;
  undefined1 uVar2;
  long extraout_x11;
  long lVar3;
  long extraout_x12;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long local_50;
  long lStack_48;
  long local_40;
  
  FUN_009c30e0(&local_108);
  lVar1 = extraout_x9;
  lVar3 = extraout_x11;
  uVar2 = extraout_w10;
  if (local_108 == -1) goto LAB_00984218;
  if (local_108 == 2) {
    local_100 = extraout_x12;
    if (local_e8 == 2) goto LAB_009841e4;
LAB_00984288:
    uVar2 = *(undefined1 *)(param_2 + 200);
    local_70 = local_e0;
    lStack_68 = lStack_d8;
    local_60 = local_d0;
  }
  else {
    lStack_78 = lStack_f0;
    local_80 = local_f8;
    if (local_e8 != 2) goto LAB_00984288;
LAB_009841e4:
    uVar2 = *(undefined1 *)(param_2 + 200);
  }
  if (local_c8 != 2) {
    lStack_48 = lStack_b8;
    local_50 = local_c0;
    local_40 = local_b0;
  }
  local_110 = local_88;
  lStack_128 = lStack_a0;
  local_130 = local_a8;
  lStack_118 = lStack_90;
  lStack_120 = lStack_98;
  lVar1 = local_e8;
  lVar3 = local_c8;
LAB_00984218:
  *param_1 = local_108;
  param_1[1] = local_100;
  param_1[4] = lVar1;
  *(undefined1 *)(param_1 + 0x11) = uVar2;
  param_1[3] = lStack_78;
  param_1[2] = local_80;
  param_1[6] = lStack_68;
  param_1[5] = local_70;
  param_1[10] = lStack_48;
  param_1[9] = local_50;
  param_1[7] = local_60;
  param_1[8] = lVar3;
  param_1[0x10] = local_110;
  param_1[0xb] = local_40;
  param_1[0xd] = lStack_128;
  param_1[0xc] = local_130;
  param_1[0xf] = lStack_118;
  param_1[0xe] = lStack_120;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 009842a8  <tokio::process::tokio::process::Command>::env_clear =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::tokio::process::Command>::env_clear */

undefined8 __rustcall <tokio::process::tokio::process::Command>::env_clear(undefined8 param_1)

{
  <std::process::[i]::std::process::Command>::env_clear();
  return param_1;
}


// ===== 009842cc  <tokio::process::sys::[4]::tokio::process::ChildStderr>::into_owned_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::sys::[4]::tokio::process::ChildStderr>::into_owned_fd */

void __rustcall
<tokio::process::sys::[4]::tokio::process::ChildStderr>::into_owned_fd
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
  *param_1 = 0;
  param_1[1] = local_2c;
  return;
}


// ===== 00984330  FUN_00984330 =====

undefined8 * FUN_00984330(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int local_40;
  int local_3c;
  long local_38;
  undefined4 local_18;
  int local_14;
  
  if ((int)DAT_00b0f708 != 0) {
                    /* try { // try from 0098444c to 0098444f has its CatchHandler @ 00984484 */
    FUN_009bf930();
  }
  local_18 = DAT_00b0f6f4;
                    /* try { // try from 0098436c to 00984377 has its CatchHandler @ 00984484 */
  <std::os::unix::net::listener::std::os::unix::net::listener::UnixListener>::try_clone
            (&local_40,&local_18);
  if (local_40 == 1) {
    *param_1 = -1;
    param_1[1] = local_38;
    lVar4 = *param_2;
  }
  else {
    local_14 = local_3c;
                    /* try { // try from 009843cc to 009843df has its CatchHandler @ 00984464 */
    lVar4 = <mio::net::uds::datagram::UnixDatagram_as_mio::event::source::Source>::register
                      (&local_14,param_3 + 0x40,1,1);
    iVar1 = local_14;
    if (lVar4 == 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar3 = (undefined8 *)FUN_004b25a4(0x10,8);
      if (puVar3 != (undefined8 *)0x0) {
        lVar5 = param_2[1];
        lVar4 = *param_2;
        lVar7 = param_2[3];
        lVar6 = param_2[2];
        param_1[4] = (long)puVar3;
        *(int *)(param_1 + 5) = iVar1;
        param_1[1] = lVar5;
        *param_1 = lVar4;
        param_1[3] = lVar7;
        param_1[2] = lVar6;
        puVar3[1] = 1;
        *puVar3 = 1;
        return puVar3;
      }
                    /* try { // try from 00984454 to 0098445f has its CatchHandler @ 00984498 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x10);
    }
    *param_1 = -1;
    param_1[1] = lVar4;
    close(local_14);
    lVar4 = *param_2;
  }
  if (lVar4 != 0) {
    free((void *)param_2[1]);
  }
  uVar2 = close((int)param_2[3]);
  return (undefined8 *)(ulong)uVar2;
}


// ===== 009844b4  FUN_009844b4 =====

void FUN_009844b4(long param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  long lVar8;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
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
  undefined1 local_58 [16];
  ulong local_48;
  ulong *local_40;
  undefined *local_38;
  ulong uVar9;
  
  auVar12._8_8_ = local_58._8_8_;
  auVar12._0_8_ = local_58._0_8_;
  cVar2 = *(char *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (cVar2 == '\x01') {
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
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
    while( true ) {
      local_58 = auVar12;
      auVar12 = <mio::net::uds::stream::UnixStream_as_alloc::io::read::Read>::read
                          (param_1 + 0x28,&local_e0,0x80);
      uVar9 = auVar12._8_8_;
      local_58 = auVar12;
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) break;
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002a0760,0x21,&PTR_s__root__cargo_registry_src_index__00af3a18);
      }
    }
    auVar6 = auVar12 & (undefined1  [16])0x3;
    uVar10 = uVar9 & 3;
    if (uVar10 < 2) {
      if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
        uVar7 = (uint)*(byte *)(uVar9 + 0x10);
      }
      else {
        uVar7 = (uint)*(byte *)(uVar9 + 0x1f);
      }
    }
    else if (uVar10 == 2) {
                    /* try { // try from 00984548 to 0098455f has its CatchHandler @ 0098465c */
      lVar8 = core::io::error::os_functions::get_os_functions();
      uVar7 = (**(code **)(lVar8 + 8))(uVar9 >> 0x20);
      auVar12 = local_58;
    }
    else {
      uVar7 = auVar12._12_4_;
    }
    local_58 = auVar12;
    if ((uVar7 & 0xff) != 0xd) {
      local_40 = &local_48;
      local_38 = PTR_fmt_00b00cb0;
                    /* try { // try from 00984618 to 0098462f has its CatchHandler @ 0098466c */
      local_48 = uVar9;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002a4d72,&local_40,&PTR_s__root__cargo_registry_src_index__00af3a30);
    }
    if ((1 < uVar10 - 2) && (auVar6 != (undefined1  [16])0x0)) {
      local_38 = (undefined *)(uVar9 - 1);
      local_40 = (ulong *)CONCAT71(local_40._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
    }
    lVar8 = DAT_00b0f6f8;
    lVar5 = DAT_00b0f700;
    if ((int)DAT_00b0f708 != 0) {
      FUN_009bf930();
      lVar8 = DAT_00b0f6f8;
      lVar5 = DAT_00b0f700;
    }
    DAT_00b0f6f8 = lVar8;
    DAT_00b0f700 = lVar5;
    if (lVar5 != 0) {
      lVar11 = 0;
      do {
        pcVar1 = (char *)(lVar8 + lVar11 * 0x18 + 8);
        do {
          cVar2 = *pcVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *pcVar1 = '\0';
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (cVar2 != '\0') {
          FUN_009c6128();
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar5);
    }
  }
  return;
}


// ===== 00984684  FUN_00984684 =====

void FUN_00984684(undefined8 param_1,long param_2)

{
  char *pcVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 *local_58;
  long lStack_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *puStack_30;
  long *local_28;
  
  if (*(int *)(param_2 + 0x44) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,&PTR_s__root__cargo_registry_src_index__00af3ad8);
  }
  pcVar1 = (char *)(param_2 + 8);
  if (*pcVar1 == '\0') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_009846bc;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_2 + 8,param_2,0xffffffff);
LAB_009846bc:
                    /* try { // try from 009846bc to 009846cb has its CatchHandler @ 009847bc */
  FUN_0099d544(&local_60,param_2,param_2 + 0x10);
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 0098479c to 009847a7 has its CatchHandler @ 009847ac */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      break;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\0';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar3 = local_58 + lStack_50;
  local_48 = local_58;
  local_40 = local_58;
  local_38 = local_60;
  puStack_30 = puVar3;
  if (lStack_50 != 0) {
    do {
      puVar7 = local_58 + 1;
      local_28 = (long *)*local_58;
      puVar2 = (ulong *)(local_28 + 0x12);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | 0x80000000;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
                    /* try { // try from 00984738 to 00984743 has its CatchHandler @ 009847f4 */
      local_40 = puVar7;
      FUN_0097f9c8(local_28 + 0x10,0x3f);
      do {
        lVar6 = *local_28;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_28,0x10);
        if (bVar5) {
          *local_28 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 00984760 to 00984767 has its CatchHandler @ 009847ec */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
        drop_slow(&local_28);
      }
      local_58 = puVar7;
    } while (puVar7 != puVar3);
  }
  FUN_009a0290(&local_48);
  return;
}


// ===== 00984830  <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::local_addr */

void __rustcall
<tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::local_addr(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::listener::mio::net::tcp::listener::TcpListener>::local_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3a48);
}


// ===== 00984854  <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::poll_accept =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::poll_accept */

ulong __rustcall
<tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::poll_accept
          (long *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint6 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  uint local_a8;
  int iStack_a4;
  byte local_a0;
  char cStack_9f;
  uint6 uStack_9e;
  long lStack_98;
  long local_90;
  long lStack_88;
  int local_7c;
  undefined1 local_78;
  undefined7 uStack_77;
  long local_70;
  long local_68;
  
  iVar2 = *(int *)(param_2 + 0x18);
  uVar9 = <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
          poll_ready(&local_a8,param_2,param_3,0);
  if (iVar2 == -1) {
    if (cStack_9f != -1) {
      if (cStack_9f != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3a48);
      }
      lVar13 = CONCAT44(iStack_a4,local_a8);
LAB_00984aa8:
      *param_1 = 2;
      param_1[1] = lVar13;
      return uVar9;
    }
  }
  else if (cStack_9f != -1) {
    puVar1 = (ulong *)(*(long *)(param_2 + 0x10) + 0x90);
    do {
      bVar5 = local_a0;
      uVar8 = local_a8;
      lVar13 = CONCAT44(iStack_a4,local_a8);
      if (cStack_9f == '\x02') goto LAB_00984aa8;
      <mio::net::tcp::listener::mio::net::tcp::listener::TcpListener>::accept
                (&local_a8,(int *)(param_2 + 0x18));
      uVar6 = uStack_9e;
      if (local_a8 != 1) {
                    /* try { // try from 00984a0c to 00984a17 has its CatchHandler @ 00984ae8 */
        auVar15 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                            (&PTR_s__root__cargo_registry_src_index__00af4908);
        local_7c = iStack_a4;
                    /* try { // try from 00984a24 to 00984a3b has its CatchHandler @ 00984ae0 */
        uVar9 = FUN_009a4e60(&local_78,&local_7c,3,auVar15._0_8_,auVar15._8_8_,
                             &PTR_s__root__cargo_registry_src_index__00af4908);
        lVar13 = local_70;
        lVar12 = CONCAT71(uStack_77,local_78);
        if (lVar12 == 2) {
          uVar8 = close(local_7c);
          uVar9 = (ulong)uVar8;
        }
        else {
          param_1[2] = local_68;
          *(int *)(param_1 + 3) = local_7c;
          param_1[5] = lStack_98;
          param_1[4] = CONCAT62(uStack_9e,CONCAT11(cStack_9f,local_a0));
          param_1[7] = lStack_88;
          param_1[6] = local_90;
        }
        goto LAB_00984a8c;
      }
      lVar13 = CONCAT62(uStack_9e,CONCAT11(cStack_9f,local_a0));
      bVar4 = local_a0 & 3;
      uVar14 = (ulong)CONCAT11(cStack_9f,local_a0) & 3;
      if (uVar14 < 2) {
        if ((local_a0 & 3) != 0) {
          uVar9 = (ulong)*(byte *)(lVar13 + 0x1f);
LAB_00984964:
          uVar7 = (uint)uVar9;
          goto joined_r0x0098496c;
        }
        uVar9 = (ulong)*(byte *)(lVar13 + 0x10);
        if (*(byte *)(lVar13 + 0x10) != 0xd) goto LAB_00984a58;
      }
      else {
        if (uVar14 == 2) {
                    /* try { // try from 00984948 to 0098495b has its CatchHandler @ 00984afc */
          lVar12 = core::io::error::os_functions::get_os_functions();
          uVar9 = (**(code **)(lVar12 + 8))((ulong)(uVar6 >> 0x10));
          goto LAB_00984964;
        }
        uVar9 = (ulong)(uStack_9e >> 0x10);
        uVar7 = (uint)(uStack_9e >> 0x10);
joined_r0x0098496c:
        if ((uVar7 & 0xff) != 0xd) {
LAB_00984a58:
          lVar12 = 2;
LAB_00984a8c:
          *param_1 = lVar12;
          param_1[1] = lVar13;
          return uVar9;
        }
      }
      uVar9 = *puVar1;
      do {
        if (bVar5 != (byte)(uVar9 >> 0x10)) break;
        uVar10 = *puVar1;
        if (uVar10 == uVar9) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar9 & ((ulong)uVar8 & 0x33 ^ 0xff003f);
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
        uVar9 = uVar10;
      } while (!bVar11);
      if ((1 < uVar14 - 2) && (bVar4 != 0)) {
        local_70 = lVar13 + -1;
        local_78 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_70);
      }
      uVar9 = <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>
              ::poll_ready(&local_a8,param_2,param_3,0);
    } while (cStack_9f != -1);
  }
  *param_1 = -1;
  return uVar9;
}


// ===== 00984b18  FUN_00984b18 =====

ulong FUN_00984b18(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
                    /* try { // try from 00984b34 to 00984b3f has its CatchHandler @ 00984bd0 */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af3a60);
                    /* try { // try from 00984b4c to 00984b63 has its CatchHandler @ 00984bb8 */
  local_14 = param_2;
  uVar2 = FUN_009a4f78(&local_48,&local_14,3,auVar3._0_8_,auVar3._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af3a60);
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


// ===== 00984be4  <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::ttl */

void __rustcall
<tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::ttl(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::listener::mio::net::tcp::listener::TcpListener>::ttl();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3a48);
}


// ===== 00984c08  <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::set_ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::set_ttl */

void __rustcall
<tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::set_ttl(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::listener::mio::net::tcp::listener::TcpListener>::set_ttl();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3a48);
}


// ===== 00984c2c  <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::from_std */

ulong __rustcall
<tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::from_std
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
  
                    /* try { // try from 00984c50 to 00984c5f has its CatchHandler @ 00984d24 */
  local_18 = param_2;
  iVar1 = <std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 00984cdc to 00984cf3 has its CatchHandler @ 00984d24 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 00984c60 to 00984c67 has its CatchHandler @ 00984d10 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_3);
                    /* try { // try from 00984c74 to 00984c87 has its CatchHandler @ 00984cf8 */
  local_14 = param_2;
  uVar3 = FUN_009a4f78(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,param_3);
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


// ===== 00984d38  <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::into_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::into_std */

void __rustcall
<tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::into_std
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
  FUN_0099b278(&local_50,&local_40);
  if (local_50 == 1) {
    *(undefined8 *)(param_1 + 2) = local_48;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  return;
}


// ===== 00984da4  <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::bind_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::bind_addr */

ulong __rustcall
<tokio::net::tcp::listener::tokio::net::tcp::listener::TcpListener>::bind_addr(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  int local_3c;
  int local_38;
  int iStack_34;
  long local_30;
  long local_28;
  
  uVar2 = <mio::net::tcp::listener::mio::net::tcp::listener::TcpListener>::bind(&local_38);
  local_3c = iStack_34;
  if (local_38 == 1) {
    *param_1 = 2;
    param_1[1] = local_30;
    return uVar2;
  }
                    /* try { // try from 00984dec to 00984df7 has its CatchHandler @ 00984e84 */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af3a60);
                    /* try { // try from 00984e04 to 00984e1b has its CatchHandler @ 00984e6c */
  uVar2 = FUN_009a4f78(&local_38,&local_3c,3,auVar3._0_8_,auVar3._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af3a60);
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


// ===== 00984e98  <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::local_addr */

void __rustcall
<tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::local_addr
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
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3a48);
  }
  <mio::net::uds::listener::mio::net::uds::listener::UnixListener>::local_addr(&local_98);
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


// ===== 00984f48  <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::take_error */

void __rustcall
<tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::take_error(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::uds::listener::mio::net::uds::listener::UnixListener>::take_error();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af3a48);
}


// ===== 00984f6c  <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::poll_accept =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::poll_accept */

ulong __rustcall
<tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::poll_accept
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_130;
  int local_128;
  undefined4 local_124;
  long local_120;
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
  undefined8 local_50;
  int local_24;
  
  uVar4 = FUN_009a847c(&local_130,param_2,param_3,0,param_2);
  lVar2 = local_120;
  uVar1 = local_124;
  local_24 = local_128;
  if (local_130 == 1) {
    *param_1 = -1;
    return uVar4;
  }
  if (local_128 != -1) {
    uStack_68 = uStack_d0;
    local_70 = local_d8;
    uStack_58 = uStack_c0;
    local_60 = local_c8;
    local_50 = local_b8;
    uStack_a8 = uStack_110;
    local_b0 = local_118;
    uStack_98 = uStack_100;
    local_a0 = local_108;
    uStack_88 = uStack_f0;
    local_90 = local_f8;
    uStack_78 = uStack_e0;
    local_80 = local_e8;
                    /* try { // try from 00985004 to 0098500f has its CatchHandler @ 00985104 */
    auVar5 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                       (&PTR_s__root__cargo_registry_src_index__00af4950);
                    /* try { // try from 0098501c to 00985033 has its CatchHandler @ 009850ec */
    uVar4 = FUN_009a5090(&local_130,&local_24,3,auVar5._0_8_,auVar5._8_8_,
                         &PTR_s__root__cargo_registry_src_index__00af4950);
    if (local_130 == 2) {
      uVar3 = close(local_24);
      *param_1 = 2;
      param_1[1] = CONCAT44(local_124,local_128);
      return (ulong)uVar3;
    }
    *param_1 = local_130;
    param_1[1] = CONCAT44(local_124,local_128);
    param_1[2] = local_120;
    *(undefined8 *)((long)param_1 + 100) = uStack_78;
    *(undefined8 *)((long)param_1 + 0x5c) = local_80;
    *(undefined8 *)((long)param_1 + 0x74) = uStack_68;
    *(undefined8 *)((long)param_1 + 0x6c) = local_70;
    *(undefined8 *)((long)param_1 + 0x84) = uStack_58;
    *(undefined8 *)((long)param_1 + 0x7c) = local_60;
    *(undefined8 *)((long)param_1 + 0x34) = uStack_a8;
    *(undefined8 *)((long)param_1 + 0x2c) = local_b0;
    *(int *)(param_1 + 3) = local_24;
    *(undefined8 *)((long)param_1 + 0x44) = uStack_98;
    *(undefined8 *)((long)param_1 + 0x3c) = local_a0;
    *(undefined8 *)((long)param_1 + 0x8c) = local_50;
    *(undefined8 *)((long)param_1 + 0x54) = uStack_88;
    *(undefined8 *)((long)param_1 + 0x4c) = local_90;
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(long *)((long)param_1 + 0x24) = lVar2;
    return uVar4;
  }
  *param_1 = 2;
  param_1[1] = local_120;
  return uVar4;
}


// ===== 00985118  FUN_00985118 =====

ulong FUN_00985118(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
                    /* try { // try from 00985134 to 0098513f has its CatchHandler @ 009851d0 */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af3a78);
                    /* try { // try from 0098514c to 00985163 has its CatchHandler @ 009851b8 */
  local_14 = param_2;
  uVar2 = FUN_009a52c0(&local_48,&local_14,3,auVar3._0_8_,auVar3._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af3a78);
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


// ===== 009851e4  <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::from_std */

ulong __rustcall
<tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::from_std
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
  
                    /* try { // try from 00985208 to 00985217 has its CatchHandler @ 009852dc */
  local_18 = param_2;
  iVar1 = <std::sys::fd::unix::FileDesc_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 00985294 to 009852ab has its CatchHandler @ 009852dc */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 00985218 to 0098521f has its CatchHandler @ 009852c8 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_3);
                    /* try { // try from 0098522c to 0098523f has its CatchHandler @ 009852b0 */
  local_14 = param_2;
  uVar3 = FUN_009a52c0(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,param_3);
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


// ===== 009852f0  <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::into_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::into_std */

void __rustcall
<tokio::net::unix::listener::tokio::net::unix::listener::UnixListener>::into_std
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
  FUN_0099b4e0(&local_50,&local_40);
  if (local_50 == 1) {
    *(undefined8 *)(param_1 + 2) = local_48;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  return;
}


// ===== 0098535c  FUN_0098535c =====

ulong FUN_0098535c(undefined8 *param_1,undefined8 param_2)

{
  int __fd;
  int __fd_00;
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  uint local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_24;
  
  uVar3 = <mio::poll::mio::poll::Poll>::new(&local_80);
  if ((int)local_80 == 1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uStack_78;
    return uVar3;
  }
  __fd = local_80._4_4_;
  local_24 = local_80._4_4_;
                    /* try { // try from 009853bc to 009853cb has its CatchHandler @ 00985518 */
  <mio::waker::mio::waker::Waker>::new(&local_80,&local_24,0);
  if ((int)local_80 == 1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uStack_78;
  }
  else {
    __fd_00 = local_80._4_4_;
                    /* try { // try from 009853ec to 009853f7 has its CatchHandler @ 009854fc */
    <mio::poll::[1]::mio::poll::Registry>::try_clone(&local_80,&local_24);
    if ((int)local_80 != 1) {
      uVar1 = local_80._4_4_;
                    /* try { // try from 0098543c to 00985447 has its CatchHandler @ 009854d8 */
      <mio::event::events::mio::event::events::Events>::with_capacity(&local_58,param_2);
      local_64 = local_64 & 0xffffff00;
      local_68 = __fd;
      uStack_78 = uStack_50;
      local_80 = local_58;
      local_70 = local_48;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = FUN_004b25a4(0x80,8);
      if (uVar3 != 0) {
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        param_1[10] = 0;
        param_1[1] = uStack_78;
        *param_1 = local_80;
        param_1[3] = CONCAT44(local_64,local_68);
        param_1[2] = local_70;
        param_1[4] = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        param_1[6] = 0x10;
        param_1[7] = uVar3;
        *(undefined4 *)(param_1 + 0xc) = uVar1;
        *(int *)((long)param_1 + 100) = __fd_00;
        return uVar3;
      }
                    /* try { // try from 009854b4 to 009854bf has its CatchHandler @ 009854c4 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x80);
    }
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uStack_78;
    close(__fd_00);
  }
  uVar2 = close(__fd);
  return (ulong)uVar2;
}


// ===== 0098552c  FUN_0098552c =====

void FUN_0098552c(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  ulong *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *local_50;
  undefined *local_48;
  ulong local_28;
  
  if (*param_2 == 0) goto LAB_00985590;
  plVar1 = param_2 + 1;
  if ((char)*plVar1 == '\0') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(char *)plVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00985778;
  }
  else {
    ClearExclusiveLocal();
LAB_00985778:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_2 + 1,param_2,0xffffffff);
  }
                    /* try { // try from 00985570 to 0098557b has its CatchHandler @ 009857b4 */
  FUN_0099d238(param_2,param_2 + 2);
  do {
    if ((char)*plVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(plVar1,0);
      break;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(char *)plVar1 = '\0';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00985590:
  local_28 = <mio::poll::mio::poll::Poll>::poll(param_1 + 0x18,param_1,param_3,param_4);
  if (local_28 != 0) {
    uVar11 = local_28 & 3;
    if (uVar11 < 2) {
      if (uVar11 == 0) {
        uVar6 = (uint)*(byte *)(local_28 + 0x10);
      }
      else {
        uVar6 = (uint)*(byte *)(local_28 + 0x1f);
      }
    }
    else if (uVar11 == 2) {
                    /* try { // try from 009855d0 to 009855e3 has its CatchHandler @ 009857a4 */
      lVar7 = core::io::error::os_functions::get_os_functions();
      uVar6 = (**(code **)(lVar7 + 8))(local_28 >> 0x20);
    }
    else {
      uVar6 = (uint)(local_28 >> 0x20);
    }
    if ((uVar6 & 0xff) != 0x23) {
      local_50 = &local_28;
      local_48 = PTR_fmt_00b00ca8;
                    /* try { // try from 00985758 to 0098576f has its CatchHandler @ 009857e8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b1c05,&local_50,&PTR_s__root__cargo_registry_src_index__00af3ac0);
    }
    if ((1 < uVar11 - 2) && (uVar11 != 0)) {
      local_48 = (undefined *)(local_28 - 1);
      local_50 = (ulong *)CONCAT71(local_50._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
    }
  }
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      puVar3 = (uint *)(*(long *)(param_1 + 8) + uVar10 * 0x10);
      lVar7 = *(long *)(puVar3 + 2);
      if (lVar7 == 1) {
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      else if (lVar7 != 0) {
        uVar6 = *puVar3;
        bVar5 = (uVar6 & 3) != 0;
        uVar11 = 2;
        if (bVar5) {
          uVar11 = 3;
        }
        uVar9 = (ulong)bVar5;
        if ((uVar6 & 4) != 0) {
          uVar9 = uVar11;
        }
        if ((uVar6 >> 4 & 1) == 0) {
          uVar11 = uVar9 | 4;
          if (((uVar6 ^ 0xffffffff) & 0x2001) != 0) {
            uVar11 = uVar9;
          }
          if ((uVar6 >> 2 & 1) == 0) {
            if (uVar6 == 8) goto LAB_009856ac;
          }
          else if ((uVar6 >> 3 & 1) != 0) goto LAB_009856ac;
        }
        else {
          uVar11 = uVar9 | 4;
LAB_009856ac:
          uVar11 = uVar11 | 8;
        }
        puVar2 = (ulong *)(lVar7 + 0x10);
        uVar9 = *puVar2;
        do {
          uVar8 = *puVar2;
          if (uVar8 == uVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar9 & 0x3f | uVar11 | ((uVar6 & 8) << 2 | (uVar6 >> 1 & 1) << 4) |
                        (ulong)((int)uVar9 + 0x10000) & 0x7fff0000;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
          }
          else {
            bVar5 = false;
            ClearExclusiveLocal();
          }
          uVar9 = uVar8;
        } while (!bVar5);
        FUN_0097f9c8();
        uVar11 = *(ulong *)(param_1 + 0x10);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  return;
}


// ===== 00985800  FUN_00985800 =====

void FUN_00985800(char *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*param_1 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0098582c;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 00985890 to 0098589b has its CatchHandler @ 009858bc */
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1,param_2,0xffffffff);
LAB_0098582c:
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == *(long *)(param_1 + 8)) {
                    /* try { // try from 00985840 to 00985843 has its CatchHandler @ 009858d0 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::process::Child>>::grow_one();
  }
  uVar6 = *param_2;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar5 * 0x18);
  uVar4 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar6;
  puVar3[2] = uVar4;
  *(long *)(param_1 + 0x18) = lVar5 + 1;
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


// ===== 00985910  FUN_00985910 =====

void FUN_00985910(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long local_50;
  undefined8 local_48;
  
  pbVar1 = (byte *)(param_1 + 0x20);
  bVar6 = param_1[0x20];
  do {
    while( true ) {
      if ((bVar6 & 1) != 0) {
        return;
      }
      bVar2 = *pbVar1;
      if (bVar2 == bVar6) break;
      ClearExclusiveLocal();
      bVar6 = bVar2;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar6 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    bVar6 = bVar2;
  } while (cVar3 != '\0');
  plVar11 = (long *)(param_1 + 0x28);
  if (*plVar11 != 0) {
    uVar7 = *(ulong *)(*plVar11 + 0x138) & 0xfffffffffffffffe;
    if (*(ulong *)(param_1 + 0x30) == uVar7) goto LAB_00985a70;
    *(ulong *)(param_1 + 0x30) = uVar7;
    if (*param_1 == '\0') {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00985adc;
    }
    else {
      ClearExclusiveLocal();
LAB_00985adc:
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                (param_1,param_2,0xffffffff);
    }
                    /* try { // try from 009859a4 to 009859ab has its CatchHandler @ 00985b68 */
    FUN_00983d78(param_1);
    goto LAB_00985a70;
  }
  if (*param_1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00985ac8;
  }
  else {
    ClearExclusiveLocal();
LAB_00985ac8:
                    /* try { // try from 00985ac8 to 00985afb has its CatchHandler @ 00985b68 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_1,param_2,0xffffffff);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 009859cc to 009859db has its CatchHandler @ 00985b70 */
    FUN_009bef64(&local_50,0x11,param_2);
    lVar5 = local_50;
    if (local_50 != 0) {
      lVar8 = *plVar11;
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0x140);
        do {
          lVar10 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
                    /* try { // try from 00985a08 to 00985a0f has its CatchHandler @ 00985b08 */
          <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar8 + 0x110);
        }
        plVar9 = (long *)*plVar11;
        do {
          lVar8 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 00985a2c to 00985a33 has its CatchHandler @ 00985b00 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<()>>>::drop_slow(plVar11);
        }
      }
      *(long *)(param_1 + 0x28) = lVar5;
      *(undefined8 *)(param_1 + 0x30) = local_48;
                    /* try { // try from 00985a38 to 00985a3f has its CatchHandler @ 00985b48 */
      FUN_00983d78(param_1);
      if (local_50 == 0) {
                    /* try { // try from 00985a48 to 00985a4f has its CatchHandler @ 00985b44 */
        FUN_0098387c(&local_50);
      }
      goto LAB_00985a70;
    }
                    /* try { // try from 00985a54 to 00985a5b has its CatchHandler @ 00985b70 */
    FUN_0098387c(&local_50);
  }
  do {
    if (*param_1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1,0);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00985a70:
  do {
    if (*pbVar1 != 1) {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pbVar1,0);
      return;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


// ===== 00985bd0  <tokio::runtime::io::driver::[0]::tokio::runtime::io::driver::Handle>::unpark =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::driver::[0]::tokio::runtime::io::driver::Handle>::unpark */

void __rustcall
<tokio::runtime::io::driver::[0]::tokio::runtime::io::driver::Handle>::unpark(long param_1)

{
  long local_8;
  
  local_8 = <mio::waker::mio::waker::Waker>::wake(param_1 + 0x44);
  if (local_8 == 0) {
    return;
  }
                    /* try { // try from 00985bf8 to 00985c1b has its CatchHandler @ 00985c20 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("failed to wake I/O driver",0x19,&local_8,&PTR_FUN_00af39f8,
             &PTR_s__root__cargo_registry_src_index__00af3af0);
}


// ===== 00985c38  <tokio::process::[3]::tokio::process::Child>::start_kill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::[3]::tokio::process::Child>::start_kill */

long __rustcall <tokio::process::[3]::tokio::process::Child>::start_kill(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x60) == -1) {
    lVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x60) == 2) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_0037ce99,0x13,&PTR_s__root__cargo_registry_src_index__00af6260);
    }
    lVar1 = <std::process::[T]::std::process::Child>::kill();
    if (lVar1 == 0) {
      *(undefined1 *)(param_1 + 0x88) = 0;
      return 0;
    }
  }
  return lVar1;
}


// ===== 00985ca0  <tokio::process::[3]::tokio::process::Child>::id =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::[3]::tokio::process::Child>::id */

undefined1  [16] __rustcall
<tokio::process::[3]::tokio::process::Child>::id(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*(int *)(param_1 + 0x60) == -1) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  }
  if (*(int *)(param_1 + 0x60) != 2) {
    auVar2._12_4_ = 0;
    auVar2._8_4_ = *(uint *)(param_1 + 0x68);
    auVar2._0_8_ = 1;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce99,0x13,&PTR_s__root__cargo_registry_src_index__00af6248);
}


// ===== 00985ce8  <tokio::process::[3]::tokio::process::Child>::try_wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::[3]::tokio::process::Child>::try_wait */

void __rustcall
<tokio::process::[3]::tokio::process::Child>::try_wait(undefined8 *param_1,long param_2)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  int local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar2 = DAT_002a1710;
  piVar5 = (int *)(param_2 + 0x60);
  if (*piVar5 == -1) {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 100);
    *param_1 = uVar2;
    return;
  }
  if (*piVar5 != 2) {
    <std::process::[T]::std::process::Child>::try_wait(&local_50,piVar5);
    uVar3 = uStack_48;
    if ((local_50 != 1) && ((uStack_4c & 1) != 0)) {
      *(undefined1 *)(param_2 + 0x88) = 0;
      if (*(int *)(param_2 + 0x60) != -1) {
                    /* try { // try from 00985d54 to 00985d5b has its CatchHandler @ 00985e54 */
        FUN_0098ee80(piVar5);
        if (*piVar5 != 2) {
          if (*(int *)(param_2 + 0x6c) != -1) {
            close(*(int *)(param_2 + 0x6c));
          }
          if (*(int *)(param_2 + 0x70) != -1) {
            close(*(int *)(param_2 + 0x70));
          }
          if (*(int *)(param_2 + 0x74) != -1) {
            close(*(int *)(param_2 + 0x74));
          }
        }
        __ptr = *(void **)(param_2 + 0x78);
        puVar1 = *(undefined8 **)(param_2 + 0x80);
        pcVar4 = (code *)*puVar1;
        if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00985da4 to 00985dab has its CatchHandler @ 00985e2c */
          (*pcVar4)(__ptr);
        }
        if (puVar1[1] != 0) {
          free(__ptr);
        }
      }
      *(undefined4 *)(param_2 + 0x60) = 0xffffffff;
      *(undefined4 *)(param_2 + 100) = uVar3;
    }
    param_1[1] = CONCAT44(uStack_44,uStack_48);
    *param_1 = CONCAT44(uStack_4c,local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ce99,0x13,&PTR_s__root__cargo_registry_src_index__00af6260);
}


// ===== 00985e7c  <tokio::process::[4]::tokio::process::ChildStdin>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::process::[4]::tokio::process::ChildStdin>::from_std */

void __rustcall <tokio::process::[4]::tokio::process::ChildStdin>::from_std(long *param_1)

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


// ===== 00985ec0  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_one */

void __rustcall
<tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_one(undefined8 param_1)

{
  FUN_009862b8(param_1,0);
  return;
}


// ===== 00985ec8  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_last =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_last */

void __rustcall
<tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_last(undefined8 param_1)

{
  FUN_009862b8(param_1,1);
  return;
}


// ===== 00985ed0  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters */

void __rustcall
<tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters
          (ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_2b0;
  undefined1 *local_2a8;
  long local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 *local_288;
  ulong *puStack_280;
  undefined1 local_278;
  long local_270 [66];
  
  puVar2 = param_1 + 1;
  if ((char)*puVar2 == '\0') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *(undefined1 *)puVar2 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      uVar7 = *param_1;
      goto joined_r0x00985f54;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,param_2,0xffffffff);
  uVar7 = *param_1;
  param_2 = extraout_x1;
joined_r0x00985f54:
  if ((uVar7 & 1) == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar5) {
        *param_1 = *param_1 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      if ((char)*puVar2 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar2,0);
        return;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *(undefined1 *)puVar2 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    return;
  }
  *param_1 = (uVar7 & 0xfffffffffffffffc) + 4;
  local_2a8 = (undefined1 *)param_1[2];
  puVar3 = (undefined8 *)param_1[3];
  local_290 = 0;
  local_2a0 = 0;
  local_2b0 = (undefined8 *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (local_2a8 == (undefined1 *)0x0) {
    local_2b0 = &local_2b0;
    local_2a8 = (undefined1 *)&local_2b0;
  }
  else {
    *(undefined8 ***)local_2a8 = &local_2b0;
    if (puVar3 == (undefined8 *)0x0) {
                    /* try { // try from 00986178 to 00986183 has its CatchHandler @ 0098622c */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af47f8);
    }
    puVar3[1] = &local_2b0;
    local_2b0 = puVar3;
  }
  local_278 = 0;
  local_288 = (undefined1 *)&local_2b0;
  puStack_280 = param_1;
  ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af4810;
  local_270[0x40] = 0;
LAB_00985fe8:
  do {
    puVar3 = local_2b0;
    if (0x1f < (ulong)local_270[0x40]) {
      do {
        if ((char)*puVar2 != '\x01') {
          ClearExclusiveLocal();
                    /* try { // try from 00986094 to 009860b3 has its CatchHandler @ 009861dc */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar2,0);
          param_2 = extraout_x1_01;
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *(undefined1 *)puVar2 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar11 = local_270[0x40];
      local_270[0x40] = 0;
      plVar10 = local_270;
      for (lVar11 = lVar11 << 4; lVar11 != 0; lVar11 = lVar11 + -0x10) {
                    /* try { // try from 00986074 to 00986077 has its CatchHandler @ 00986238 */
        (**(code **)(*plVar10 + 8))(plVar10[1]);
        param_2 = extraout_x1_00;
        plVar10 = plVar10 + 2;
      }
      if ((char)*puVar2 == '\0') break;
      ClearExclusiveLocal();
      goto LAB_009860a8;
    }
    if (local_2b0 == (undefined8 *)0x0) goto LAB_0098616c;
    if ((undefined8 **)local_2b0 == &local_2b0) {
      local_278 = 1;
      goto LAB_009860c0;
    }
    puVar8 = (undefined8 *)*local_2b0;
    if (puVar8 == (undefined8 *)0x0) {
      ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af4828;
LAB_0098616c:
                    /* try { // try from 0098616c to 00986173 has its CatchHandler @ 00986254 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(ppuVar9);
    }
    puVar8[1] = &local_2b0;
    lVar12 = local_2b0[3];
    lVar11 = local_2b0[2];
    local_2b0 = puVar8;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    if (lVar11 != 0) {
      if (0x1f < (ulong)local_270[0x40]) {
                    /* try { // try from 00986188 to 00986197 has its CatchHandler @ 009861e8 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (local_270[0x40],0x20,&PTR_s__root__cargo_registry_src_index__00af3b08);
      }
      lVar6 = local_270[0x40] * 2;
      local_270[local_270[0x40] * 2 + 1] = lVar12;
      local_270[lVar6] = lVar11;
      local_270[0x40] = local_270[0x40] + 1;
    }
    puVar3[4] = 2;
  } while( true );
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar5) {
    *(undefined1 *)puVar2 = 1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') {
LAB_009860a8:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (puVar2,param_2,0xffffffff);
    param_2 = extraout_x1_02;
  }
  goto LAB_00985fe8;
  while( true ) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *(undefined1 *)puVar2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_009860c0:
    if ((char)*puVar2 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009861cc to 009861d7 has its CatchHandler @ 009861e8 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar2,0);
      break;
    }
  }
  lVar11 = local_270[0x40];
  local_270[0x40] = 0;
  plVar10 = local_270;
  for (lVar11 = lVar11 << 4; lVar11 != 0; lVar11 = lVar11 + -0x10) {
                    /* try { // try from 009860fc to 009860ff has its CatchHandler @ 00986214 */
    (**(code **)(*plVar10 + 8))(plVar10[1]);
    plVar10 = plVar10 + 2;
  }
  plVar10 = local_270 + 1;
  lVar11 = local_270[0x40] + 1;
  while (lVar11 = lVar11 + -1, lVar11 != 0) {
    plVar1 = plVar10 + -1;
    lVar12 = *plVar10;
    plVar10 = plVar10 + 2;
                    /* try { // try from 00986128 to 0098612b has its CatchHandler @ 009861f0 */
    (**(code **)(*plVar1 + 0x18))(lVar12);
  }
  if (local_2a0 == 0) {
    return;
  }
  (**(code **)(local_2a0 + 0x18))(local_298);
  return;
}


// ===== 009862b8  FUN_009862b8 =====

void FUN_009862b8(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *param_1;
  while ((uVar4 & 1) == 0) {
    while (*param_1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar4 & 0xfffffffffffffffc | 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *param_1;
  }
  puVar1 = param_1 + 1;
  if ((char)*puVar1 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *(char *)puVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00986318;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 1,param_2,0xffffffff);
LAB_00986318:
                    /* try { // try from 0098631c to 0098632b has its CatchHandler @ 009863f0 */
  auVar5 = FUN_00986b20(param_1 + 2,param_1,*param_1,param_2);
  if (auVar5._0_8_ == 0) {
    do {
      if ((char)*puVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar1,0);
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *(char *)puVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return;
  }
  do {
    if ((char)*puVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009863ac to 009863b7 has its CatchHandler @ 009863d8 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(puVar1,0);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *(char *)puVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00986360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar5._0_8_ + 8))(auVar5._8_8_);
  return;
}


