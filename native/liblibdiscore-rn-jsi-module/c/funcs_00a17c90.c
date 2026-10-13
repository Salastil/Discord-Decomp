// ===== 00a17c90  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_u64 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u64
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  <usize_as_core::fmt::Display>::fmt(&local_18,param_1);
  return;
}


// ===== 00a17cbc  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_bool =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_bool */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_bool
          (undefined8 param_1,undefined1 param_2)

{
  undefined1 local_14 [4];
  
  local_14[0] = param_2;
  <bool_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 00a17ce8  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_char =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_char */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_char
          (undefined8 param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  <char_as_core::fmt::Display>::fmt(&local_14,param_1);
  return;
}


// ===== 00a17d14  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_i128 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i128
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_4;
  <i128_as_core::fmt::Display>::fmt(&local_20,param_1);
  return;
}


// ===== 00a17d3c  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_u128 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u128
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_4;
  <u128_as_core::fmt::Display>::fmt(&local_20,param_1);
  return;
}


// ===== 00a17d64  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_unit_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_unit_variant */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_unit_variant(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  <str_as_core::fmt::Display>::fmt(in_x4,in_x5,param_1);
  return;
}


// ===== 00a17d74  <serde::__private::doc::Error_as_core::error::Error>::description =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::doc::Error as core::error::Error>::description */

void __rustcall <serde::__private::doc::Error_as_core::error::Error>::description(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic("not implemented",0xf,&PTR_s__root__cargo_registry_src_index__00afa490);
}


// ===== 00a17d94  <<core::time::Duration_as_serde::de::Deserialize>::deserialize::DurationVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::time::Duration as serde::de::Deserialize>::deserialize::DurationVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::time::Duration_as_serde::de::Deserialize>::deserialize::DurationVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct Duration",0xf);
  return;
}


// ===== 00a17da8  <<std::time::SystemTime_as_serde::de::Deserialize>::deserialize::DurationVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<std::time::SystemTime as serde::de::Deserialize>::deserialize::DurationVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<std::time::SystemTime_as_serde::de::Deserialize>::deserialize::DurationVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct SystemTime",0x11);
  return;
}


// ===== 00a17dbc  <serde::__private::de::content::TagOrContentFieldVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::de::content::TagOrContentFieldVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::__private::de::content::TagOrContentFieldVisitor_as_serde::de::Visitor>::expecting
          (long param_1,undefined8 *param_2)

{
  long local_30;
  code *pcStack_28;
  long local_20;
  code *pcStack_18;
  
  local_20 = param_1 + 0x10;
  pcStack_28 = FUN_00a17708;
  pcStack_18 = FUN_00a17708;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002adc08,&local_30);
  return;
}


// ===== 00a17dfc  <serde::de::impls::CStringVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::CStringVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::CStringVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,
             "byte arrayunit valueOption valuenewtype structmapunit variantnewtype varianttuple variantstruct variant"
             ,10);
  return;
}


// ===== 00a17e10  <serde::__private::de::content::TagContentOtherFieldVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::de::content::TagContentOtherFieldVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::__private::de::content::TagContentOtherFieldVisitor_as_serde::de::Visitor>::expecting
          (long param_1,undefined8 *param_2)

{
  long local_30;
  code *pcStack_28;
  long local_20;
  code *pcStack_18;
  
  local_20 = param_1 + 0x10;
  pcStack_28 = FUN_00a17708;
  pcStack_18 = FUN_00a17708;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002b65a6,&local_30);
  return;
}


// ===== 00a17e50  <serde::de::impls::PathVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::PathVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::PathVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a borrowed path",0xf);
  return;
}


// ===== 00a17e64  <serde::de::impls::PathBufVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::PathBufVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::PathBufVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"path string",0xb);
  return;
}


// ===== 00a17e78  <serde::de::impls::OsStringVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::OsStringVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::OsStringVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"os string",9);
  return;
}


// ===== 00a17e8c  <serde::__private::de::content::UntaggedUnitVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::de::content::UntaggedUnitVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::__private::de::content::UntaggedUnitVisitor_as_serde::de::Visitor>::expecting
          (long param_1,undefined8 *param_2)

{
  long local_30;
  code *pcStack_28;
  long local_20;
  code *pcStack_18;
  
  local_20 = param_1 + 0x10;
  pcStack_28 = FUN_00a17730;
  pcStack_18 = FUN_00a17730;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002a33c9,&local_30);
  return;
}


// ===== 00a17ecc  FUN_00a17ecc =====

void FUN_00a17ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00afa448,param_2,param_3);
  return;
}


// ===== 00a17ee0  FUN_00a17ee0 =====

undefined1  [16] FUN_00a17ee0(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pbVar5 = param_1 + param_2;
  pbVar8 = (byte *)0x0;
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      pbVar7 = pbVar6 + 1;
      uVar10 = (uint)*pbVar6;
      uVar11 = (ulong)uVar10;
      if ((char)*pbVar6 < '\0') {
        if (uVar10 < 0xe0) {
          pbVar7 = pbVar6 + 2;
          uVar11 = (ulong)(pbVar6[1] & 0x3f | (uVar10 & 0x1f) << 6);
        }
        else {
          uVar4 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar10 < 0xf0) {
            uVar11 = (ulong)(uVar4 | (uVar10 & 0x1f) << 0xc);
            pbVar7 = pbVar6 + 3;
          }
          else {
            uVar11 = (ulong)(pbVar6[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12);
            pbVar7 = pbVar6 + 4;
          }
        }
      }
      uVar10 = (uint)uVar11;
      pbVar9 = pbVar7 + ((long)pbVar8 - (long)pbVar6);
      if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
        if (uVar10 < 0x85) goto joined_r0x00a18018;
        uVar4 = uVar10 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x00a17ff0:
            if ((bVar1 & 1) == 0) goto joined_r0x00a18018;
          }
          else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x00a18018;
        }
        else {
          if (uVar4 == 0x20) {
            bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
            goto joined_r0x00a17ff0;
          }
          if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x00a18018;
        }
      }
      pbVar6 = pbVar7;
      pbVar8 = pbVar9;
    } while (pbVar7 != pbVar5);
    pbVar8 = (byte *)0x0;
    pbVar9 = (byte *)0x0;
LAB_00a18000:
    auVar12._8_8_ = (long)pbVar9 - (long)pbVar8;
    auVar12._0_8_ = param_1 + (long)pbVar8;
    return auVar12;
  }
  pbVar9 = pbVar8;
  pbVar7 = param_1;
  pbVar8 = (byte *)0x0;
joined_r0x00a18018:
  do {
    do {
      pbVar6 = pbVar5;
      if (pbVar7 == pbVar6) goto LAB_00a18000;
      pbVar5 = pbVar6 + -1;
      bVar1 = *pbVar5;
      uVar11 = (ulong)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar5 = pbVar6 + -2;
        bVar2 = *pbVar5;
        uVar10 = (uint)(char)bVar2;
        if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
          uVar10 = uVar10 & 0x1f;
        }
        else {
          pbVar5 = pbVar6 + -3;
          bVar3 = *pbVar5;
          if ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)) {
            uVar10 = (int)(char)bVar3 & 0xf;
          }
          else {
            pbVar5 = pbVar6 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar5 & 7) << 6;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        uVar11 = (ulong)((int)(char)bVar1 & 0x3fU | uVar10 << 6);
      }
      uVar10 = (uint)uVar11;
    } while ((uVar10 - 9 < 5) || (uVar10 == 0x20));
    if (uVar10 < 0x85) goto LAB_00a18110;
    uVar4 = uVar10 >> 8;
    if (uVar4 < 0x20) {
      if (uVar4 == 0) {
        bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x00a1810c:
        if ((bVar1 & 1) == 0) {
LAB_00a18110:
          auVar13._8_8_ = pbVar6 + (long)(pbVar9 + (-(long)pbVar8 - (long)pbVar7));
          auVar13._0_8_ = param_1 + (long)pbVar8;
          return auVar13;
        }
      }
      else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto LAB_00a18110;
      goto joined_r0x00a18018;
    }
    if (uVar4 == 0x20) {
      bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
      goto joined_r0x00a1810c;
    }
    if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto LAB_00a18110;
  } while( true );
}


// ===== 00a18124  FUN_00a18124 =====

void FUN_00a18124(void)

{
  long extraout_x8;
  
  if ((int)DAT_00b0f870 == 0) {
    return;
  }
  FUN_00a6bd30(&DAT_00b0f838);
  FUN_00a6ba44(extraout_x8 + 0x38);
  return;
}


// ===== 00a18174  FUN_00a18174 =====

void FUN_00a18174(void)

{
  long extraout_x8;
  undefined1 local_20 [16];
  
  if ((int)DAT_00b0f870 == 0) {
    return;
  }
  FUN_00a6bd30();
  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
            (extraout_x8 + 0x38,1,local_20);
  return;
}


// ===== 00a181d8  FUN_00a181d8 =====

void FUN_00a181d8(void)

{
  long extraout_x8;
  
  if ((int)DAT_00b10270 == 0) {
    return;
  }
  FUN_00a6bd30(&DAT_00b10240);
  FUN_00a6ba44(extraout_x8 + 0x30);
  return;
}


// ===== 00a18228  FUN_00a18228 =====

undefined8 FUN_00a18228(void)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *puStack_28;
  undefined8 *local_8;
  
  local_38 = 0;
  if ((int)DAT_00b10298 != 0) {
    puStack_28 = &local_38;
    local_30 = 0xb1029c;
    local_8 = &local_30;
                    /* try { // try from 00a18274 to 00a1828b has its CatchHandler @ 00a18290 */
    uVar1 = FUN_00a6bd30();
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call(uVar1,1,&local_8);
  }
  return local_38;
}


// ===== 00a182a8  <core[bcece726f298455b]::io::error::Error>::new::<core[bcece726f298455b]::num::error::TryFromIntError> =====

/* <core[bcece726f298455b]::io::error::Error>::new::<core[bcece726f298455b]::num::error::TryFromIntError>
    */

void <core[bcece726f298455b]::io::error::Error>::new::
     <core[bcece726f298455b]::num::error::TryFromIntError>(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined1 *)FUN_004b25a4(1,1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&DAT_00afc4c0);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,1);
}


// ===== 00a18300  <alloc::io::error::core::io::error::Error>::new<&str> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<&str> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<&str>
          (undefined4 param_1,void *param_2,size_t param_3)

{
  undefined1 *__dest;
  size_t *psVar1;
  
  if (param_3 == 0) {
    __dest = &DAT_00000001;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)FUN_004b25a4(0x18,8);
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)FUN_004b25a4(0x18,8);
  }
  if (psVar1 != (size_t *)0x0) {
    *psVar1 = param_3;
    psVar1[1] = (size_t)__dest;
    psVar1[2] = param_3;
    alloc::io::error::custom_owner_from_box(param_1,psVar1,&PTR_FUN_00afc558);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* try { // try from 00a1839c to 00a183a7 has its CatchHandler @ 00a183b8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00a183d8  FUN_00a183d8 =====

void FUN_00a183d8(char *param_1)

{
  if (*param_1 == -2) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    *param_1 = -1;
    return;
  }
  FUN_00a1fe14(0xff,0);
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00381fd3,0x1d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa4b0);
}


// ===== 00a18420  FUN_00a18420 =====

void FUN_00a18420(char *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  
  cVar3 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  if (*param_1 == -2) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar1 = *(undefined4 *)(param_2 + 4);
    *param_1 = cVar3;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)(param_1 + 4) = uVar1;
    return;
  }
  if (cVar3 == -2) {
    return;
  }
  FUN_00a1fe14(cVar3);
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00381fd3,0x1d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa4b0);
}


// ===== 00a18488  FUN_00a18488 =====

void FUN_00a18488(long *param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 *unaff_x22;
  long *plVar13;
  ulong unaff_x23;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined1 *puVar20;
  undefined1 *unaff_x28;
  undefined1 *puVar21;
  undefined1 auVar22 [16];
  undefined1 *local_170;
  long *local_158;
  undefined1 *puStack_150;
  long local_148;
  undefined1 *puStack_140;
  long local_138;
  uint uStack_130;
  undefined4 uStack_12c;
  int local_128;
  undefined4 uStack_124;
  undefined1 *local_120;
  undefined1 *local_118;
  long *local_110;
  undefined1 *puStack_108;
  long *local_f0;
  undefined1 *local_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *local_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  ulong local_80;
  undefined1 local_78;
  
  lVar10 = ((undefined8 *)param_2[2])[1];
  uVar5 = *(ulong *)(lVar10 + 0x180);
  puVar20 = *(undefined1 **)(*(long *)*param_2 + 0x40);
  lVar15 = 0xc;
  if (*(char *)(lVar10 + 0x1a1) != '\b') {
    lVar15 = 4;
  }
  puVar16 = (undefined1 *)((*(long *)(lVar10 + 0x188) - uVar5) + lVar15);
  uVar6 = (long)puVar20 - (long)puVar16;
  puVar21 = unaff_x28;
  if ((puVar20 >= puVar16 && uVar6 <= uVar5) && (puVar20 < puVar16 || uVar5 != uVar6)) {
    uVar2 = *(uint *)(lVar10 + 0x1a0);
    unaff_x22 = (undefined1 *)(ulong)uVar2;
    puVar16 = (undefined1 *)(uVar5 - uVar6);
    plVar19 = (long *)(*(long *)(lVar10 + 0x178) + uVar6);
    if ((uVar2 & 0xff00) != 0x300) {
      uVar12 = *(undefined8 *)param_2[2];
      uVar3 = *(undefined1 *)param_2[1];
      puVar14 = *(undefined1 **)param_2[3];
      puStack_140 = puVar16 + (long)puVar20;
      local_148 = *(long *)(lVar10 + 0x1a8) + 0x10;
      local_138 = 0;
      local_158 = plVar19;
      puStack_150 = puVar16;
      uStack_130 = uVar2;
      FUN_00a69f78(&local_f0,&local_158);
      plVar19 = (long *)((ulong)local_f0 & 0xff);
      if ((char)local_f0 != -1) {
        puVar11 = (undefined1 *)0x0;
        uVar5 = (ulong)local_f0 >> 8;
        goto LAB_00a1851c;
      }
      if (local_e8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rust_deps_addr2line_0_27_1_src__00afb2c0);
      }
      if (*(undefined1 **)(local_148 + 0x10) <= local_e8 + -1) {
        uVar5 = *(ulong *)(local_148 + 0x18);
        if (uVar5 != 0) {
          lVar15 = *(long *)(local_148 + 0x20);
          do {
            lVar4 = uVar5 - 0x70;
            lVar8 = (ulong)*(ushort *)(uVar5 + 0x532) << 3;
            uVar6 = 0xffffffffffffffff;
            puVar9 = (undefined8 *)(uVar5 + 0x4d8);
            do {
              uVar7 = (ulong)*(ushort *)(uVar5 + 0x532);
              if (lVar8 == 0) goto LAB_00a187c0;
              lVar4 = lVar4 + 0x70;
              uVar7 = uVar6 + 1;
              lVar8 = lVar8 + -8;
              cVar1 = (undefined1 *)*puVar9 < local_e8;
              if (local_e8 < (undefined1 *)*puVar9) {
                cVar1 = -1;
              }
              uVar6 = uVar7;
              puVar9 = puVar9 + 1;
            } while (cVar1 == '\x01');
            if (cVar1 == '\0') goto LAB_00a185f8;
LAB_00a187c0:
            if (lVar15 == 0) break;
            lVar15 = lVar15 + -1;
            uVar5 = *(ulong *)(uVar5 + uVar7 * 8 + 0x538);
          } while( true );
        }
        puVar11 = (undefined1 *)0x0;
        plVar19 = (long *)0x10;
        goto LAB_00a1851c;
      }
      lVar4 = *(long *)(local_148 + 8) + (long)(local_e8 + -1) * 0x70;
LAB_00a185f8:
      if (*(char *)(lVar4 + 0x6a) == '\x01') {
        local_138 = local_138 + 1;
      }
      auVar22 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
      puVar17 = auVar22._0_8_;
      if (auVar22._8_8_ == 0) {
        puVar21 = (undefined1 *)0x0;
        unaff_x23 = (ulong)puVar14;
      }
      else {
        unaff_x23 = auVar22._8_8_ << 4;
        uVar18 = *(undefined8 *)(lVar10 + 0x1b8);
        puVar21 = (undefined1 *)0x0;
        do {
          puStack_108 = (undefined1 *)puVar17[1];
          local_110 = (long *)*puVar17;
          <gimli::read::unit::[g]::gimli::read::unit::EntriesRaw<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>>
          ::read_attribute(&local_f0,&local_158,&local_110);
          plVar13 = local_e0;
          unaff_x28 = local_e8;
          if (local_f0 == (long *)0xffffffffffffffff) {
LAB_00a18874:
            uVar5 = (ulong)unaff_x28 >> 8;
            puVar11 = (undefined1 *)0x0;
            plVar19 = (long *)((ulong)unaff_x28 & 0xffffffff);
            unaff_x22 = (undefined1 *)plVar13;
            puVar14 = (undefined1 *)unaff_x23;
            local_e8 = (undefined1 *)plVar13;
            goto LAB_00a1851c;
          }
          if ((ushort)local_d0 < 0x47) {
            if ((ushort)local_d0 == 3) {
              if (puVar21 == (undefined1 *)0x0) {
                FUN_00a43f68(&local_110,&local_f0);
                FUN_00a332d8(&local_128,uVar12,uVar2 >> 8,uVar18,&local_110);
                if (local_128 == 0) {
                  local_170 = local_118;
                }
                unaff_x22 = local_170;
                puVar21 = (undefined1 *)0x0;
                if (local_128 == 0) {
                  unaff_x22 = local_170;
                  puVar21 = local_120;
                }
              }
            }
            else if ((ushort)local_d0 == 0x31) goto LAB_00a186dc;
          }
          else if ((ushort)local_d0 == 0x47) {
LAB_00a186dc:
            if (puVar21 == (undefined1 *)0x0) {
              FUN_00a43f68(&local_110,&local_f0);
              FUN_00a229b4(&local_128,local_110,puStack_108,uVar3,uVar12,lVar10,puVar14,0x10);
              unaff_x22 = local_118;
              plVar13 = (long *)local_118;
              puVar21 = local_120;
              unaff_x28 = local_120;
              if (CONCAT44(uStack_124,local_128) == 1) goto LAB_00a18874;
            }
          }
          else if (((ushort)local_d0 == 0x2007) || ((ushort)local_d0 == 0x6e)) {
            FUN_00a43f68(&local_110,&local_f0);
            FUN_00a332d8(&local_128,uVar12,uVar2 >> 8,uVar18,&local_110);
            if (local_128 == 0) {
              unaff_x22 = local_118;
              puVar21 = local_120;
            }
          }
          unaff_x23 = unaff_x23 - 0x10;
          puVar17 = puVar17 + 2;
        } while (unaff_x23 != 0);
      }
      uStack_98 = CONCAT44(uStack_12c,uStack_130);
      local_e0 = (long *)0x0;
      local_d8 = (undefined1 *)0x0;
      puStack_b8 = puStack_150;
      local_c0 = local_158;
      puStack_a8 = puStack_140;
      lStack_b0 = local_148;
      local_a0 = local_138;
      local_f0 = (long *)0x0;
      local_e8 = &DAT_00000008;
      local_d0 = &DAT_00000008;
      local_c8 = (undefined1 *)0x0;
                    /* try { // try from 00a18814 to 00a18827 has its CatchHandler @ 00a18a14 */
      local_90 = uVar12;
      lStack_88 = lVar10;
      local_80 = (ulong)puVar14;
      local_78 = uVar3;
      FUN_00a357ec(&local_110,&local_f0,0,0);
      puVar16 = puStack_108;
      plVar19 = local_110;
      if ((char)local_110 == -1) {
        if (1 < local_c8) {
          if (local_c8 < 0x15) {
            FUN_00a27644();
          }
          else {
                    /* try { // try from 00a189d0 to 00a189d7 has its CatchHandler @ 00a18a14 */
            core[bcece726f298455b]::slice::sort::unstable::ipnsort::
            <addr2line[e17ec0026c2a32fb]::function::InlinedFunctionAddress,<[addr2line[e17ec0026c2a32fb]::function::InlinedFunctionAddress]>::sort_unstable_by<<addr2line[e17ec0026c2a32fb]::function::Function<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                      (local_d0,local_c8,&local_110);
          }
        }
        plVar19 = local_e0;
        puVar11 = local_e8;
        if (local_e0 < local_f0) {
          if (local_e0 == (long *)0x0) {
            free(local_e8);
            puVar11 = &DAT_00000008;
          }
          else {
            lVar15 = (long)local_e0 * 0x30;
            puVar11 = (undefined1 *)FUN_004b2600(local_e8,(long)local_f0 * 0x30,8,lVar15);
            if (puVar11 == (undefined1 *)0x0) {
                    /* try { // try from 00a188e0 to 00a188eb has its CatchHandler @ 00a18a04 */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(8,lVar15);
            }
          }
        }
        puVar14 = local_c8;
        unaff_x28 = puVar21;
        if (local_c8 < local_d8) {
          if (local_c8 == (undefined1 *)0x0) {
            puVar16 = &DAT_00000008;
            free(local_d0);
          }
          else {
            lVar15 = (long)local_c8 << 5;
            puVar16 = (undefined1 *)FUN_004b2600(local_d0,(long)local_d8 << 5,8);
            if (puVar16 == (undefined1 *)0x0) {
                    /* try { // try from 00a18944 to 00a1894f has its CatchHandler @ 00a189dc */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(8,lVar15);
            }
          }
          uVar5 = (ulong)plVar19 >> 8;
          local_e8 = puVar16;
        }
        else {
          uVar5 = (ulong)plVar19 >> 8;
          local_e8 = local_d0;
        }
        goto LAB_00a1851c;
      }
      if (local_f0 != (long *)0x0) {
        free(local_e8);
      }
      if (local_d8 != (undefined1 *)0x0) {
        free(local_d0);
      }
    }
  }
  else {
    plVar19 = (long *)0x35;
    puVar16 = puVar20;
  }
  puVar11 = (undefined1 *)0x0;
  uVar5 = (ulong)plVar19 >> 8;
  puVar14 = (undefined1 *)unaff_x23;
  local_e8 = puVar16;
  unaff_x28 = puVar21;
LAB_00a1851c:
  local_e0 = (long *)((ulong)plVar19 & 0xff | uVar5 << 8);
  if (*param_1 == 1) {
    local_f0 = param_1 + 1;
    local_d8 = local_e8;
    local_e8 = puVar11;
    local_d0 = puVar14;
    local_c8 = puVar20;
    local_c0 = (long *)unaff_x28;
    puStack_b8 = unaff_x22;
    FUN_00a1fe28(&local_f0);
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00381fd3,0x1d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa4b0);
  }
  param_1[2] = (long)local_e0;
  param_1[3] = (long)local_e8;
  *param_1 = 1;
  param_1[1] = (long)puVar11;
  param_1[4] = (long)puVar14;
  param_1[5] = (long)puVar20;
  param_1[6] = (long)unaff_x28;
  param_1[7] = (long)unaff_x22;
  return;
}


// ===== 00a18a54  FUN_00a18a54 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00a18a54(long *param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  bool bVar20;
  ulong *puVar21;
  long lVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  ulong *puVar36;
  long lVar37;
  ulong *puVar38;
  long *plVar39;
  ulong *puVar40;
  long lVar41;
  ulong *puVar42;
  ulong uVar43;
  ulong uVar44;
  ulong *puVar45;
  ulong *puVar46;
  ulong *unaff_x27;
  long lVar47;
  uint uVar48;
  undefined1 auVar49 [16];
  ulong *local_230;
  ulong *local_1f0;
  ulong *local_1e8;
  ulong *local_1d0;
  ulong local_1b8;
  undefined1 *local_188;
  ulong *local_178;
  ulong local_148;
  ulong local_140;
  undefined1 *local_138;
  ulong local_130;
  ulong *local_128;
  ulong *local_120;
  ulong *local_118;
  ulong local_110;
  ulong *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  uint local_e8;
  long local_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *local_c0;
  ulong *puStack_b8;
  ulong *local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  long lStack_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  long local_80;
  
  puVar40 = *(ulong **)(param_3 + 0x180);
  local_140 = 0;
  local_138 = &DAT_00000008;
  local_120 = (ulong *)&DAT_00000008;
  local_118 = (ulong *)0x0;
  local_130 = 0;
  local_128 = (ulong *)0x0;
  lVar41 = 0xc;
  if (*(char *)(param_3 + 0x1a1) != '\b') {
    lVar41 = 4;
  }
  if (puVar40 == (ulong *)0x0) {
    uVar30 = 0x35;
    puVar40 = (ulong *)(*(long *)(param_3 + 0x188) + lVar41);
  }
  else {
    uVar9 = *(uint *)(param_3 + 0x1a0);
    uVar44 = (ulong)uVar9;
    uVar30 = *(ulong *)(param_3 + 0x178);
    if ((uVar9 & 0xff00) != 0x300) {
      puVar6 = *(ulong **)(param_3 + 0x1b0);
      local_f8 = lVar41 + *(long *)(param_3 + 0x188);
      puVar45 = (ulong *)0x0;
      puVar36 = *(ulong **)(param_2 + 0x10);
      puVar7 = *(ulong **)(param_2 + 0x18);
      uVar43 = 0;
      local_100 = *(long *)(param_3 + 0x1a8) + 0x10;
      uVar33 = *(ulong *)(param_3 + 0x1d0);
      puVar5 = *(ulong **)(param_2 + 0xf0);
      uVar8 = *(ulong *)(param_2 + 0xf8);
      local_f0 = 0;
      uVar27 = uVar8 - uVar33;
      puVar38 = (ulong *)((long)puVar5 + uVar33);
      uVar3 = uVar33;
      if ((uVar9 < 0x50000 & *(byte *)(param_2 + 0x120)) == 0) {
        uVar3 = 0;
      }
      uVar31 = (ulong)(uVar9 >> 8) & 0xff;
      uVar10 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
      uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
      uVar23 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar10 = uVar9 >> 0x10;
      puVar32 = *(ulong **)(param_3 + 0x1c0);
      uVar23 = (uint)LZCOUNT(uVar23 >> 0x10 | uVar23 << 0x10);
      uVar34 = (long)puVar7 - (long)puVar32;
      uVar2 = (uVar44 & 0xff) << 8 | 0x14;
      lVar41 = 0x10;
      if (uVar10 < 5) {
        lVar41 = 0;
      }
      local_1f0 = (ulong *)&DAT_00000008;
      lVar4 = 0x18;
      local_110 = uVar30;
      local_108 = puVar40;
      local_e8 = uVar9;
      if (uVar10 < 5) {
        lVar4 = 8;
      }
      do {
        lVar37 = local_f8;
        puVar21 = local_108;
        FUN_00a69f78(&local_c0,&local_110);
        puVar42 = puStack_b8;
        uVar48 = (uint)(byte)local_c0;
        puVar40 = puStack_b8;
        if ((byte)local_c0 != 0xff) {
          uVar44 = (ulong)local_c0 >> 8;
          puVar32 = puVar21;
joined_r0x00a196e4:
          if (local_128 != (ulong *)0x0) {
            free(local_120);
          }
          puVar24 = local_138;
          if (uVar43 != 0) {
            plVar39 = (long *)(local_138 + 0x10);
            do {
              if ((plVar39[-2] != 0) && ((void *)plVar39[-1] != (void *)0x0)) {
                if (*plVar39 != 0) {
                  free((void *)plVar39[-1]);
                }
                if (plVar39[2] != 0) {
                  free((void *)plVar39[1]);
                }
              }
              uVar43 = uVar43 - 1;
              plVar39 = plVar39 + 9;
            } while (uVar43 != 0);
          }
          goto LAB_00a193e8;
        }
        if (puStack_b8 == (ulong *)0x0) {
          local_f0 = local_f0 + -1;
        }
        else {
          if ((undefined1 *)((long)puStack_b8 + -1) < *(undefined1 **)(local_100 + 0x10)) {
            lVar22 = *(long *)(local_100 + 8) + ((long)puStack_b8 + -1) * 0x70;
          }
          else {
            lVar47 = *(long *)(local_100 + 0x18);
            if (lVar47 == 0) {
LAB_00a19494:
              uVar48 = 0x10;
              puVar32 = puVar21;
              goto joined_r0x00a196e4;
            }
            lVar28 = *(long *)(local_100 + 0x20);
            while( true ) {
              lVar22 = lVar47 + -0x70;
              lVar35 = (ulong)*(ushort *)(lVar47 + 0x532) << 3;
              uVar30 = 0xffffffffffffffff;
              puVar25 = (undefined8 *)(lVar47 + 0x4d8);
              do {
                uVar29 = (ulong)*(ushort *)(lVar47 + 0x532);
                if (lVar35 == 0) goto LAB_00a18ca4;
                lVar22 = lVar22 + 0x70;
                uVar29 = uVar30 + 1;
                lVar35 = lVar35 + -8;
                cVar1 = (ulong *)*puVar25 < puStack_b8;
                if (puStack_b8 < (ulong *)*puVar25) {
                  cVar1 = -1;
                }
                uVar30 = uVar29;
                puVar25 = puVar25 + 1;
              } while (cVar1 == '\x01');
              if (cVar1 == '\0') break;
LAB_00a18ca4:
              if (lVar28 == 0) goto LAB_00a19494;
              lVar28 = lVar28 + -1;
              lVar47 = *(long *)(lVar47 + uVar29 * 8 + 0x538);
            }
          }
          if (*(char *)(lVar22 + 0x6a) == '\x01') {
            local_f0 = local_f0 + 1;
          }
          if (*(short *)(lVar22 + 0x68) == 0x2e) {
                    /* try { // try from 00a18c14 to 00a18cbb has its CatchHandler @ 00a197ec */
            auVar49 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
            plVar39 = auVar49._0_8_;
            if (auVar49._8_8_ != 0) {
              lVar47 = auVar49._8_8_ << 4;
              bVar16 = false;
              bVar18 = 0;
              bVar17 = 0;
              bVar19 = 0;
              do {
                puStack_d8 = (ulong *)plVar39[1];
                local_e0 = *plVar39;
                <gimli::read::unit::[g]::gimli::read::unit::EntriesRaw<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>>
                ::read_attribute(&local_c0,&local_110,&local_e0);
                puVar26 = puStack_b8;
                puVar40 = local_b0;
                puVar46 = puVar32;
                if (local_c0 == (ulong *)0xffffffffffffffff) goto LAB_00a19458;
                if ((short)local_a0 == 0x55) {
                  FUN_00a43f68(&local_e0,&local_c0);
                  puVar40 = puStack_d8;
                  uVar30 = uVar3;
                  if (local_e0 == 0x17) goto LAB_00a18ef4;
                  if (local_e0 != 0x19) {
                    bVar16 = false;
                    goto LAB_00a18cf4;
                  }
                  if (uVar8 < uVar33) {
                    uVar48 = 0x11;
                    uVar44 = 0;
                    puVar40 = puVar5;
                  }
                  else {
                    auVar49._8_8_ = 0;
                    auVar49._0_8_ = puStack_d8;
                    auVar13._8_8_ = 0;
                    auVar13._0_8_ = uVar31;
                    if (SUB168(auVar49 * auVar13,8) == 0) {
                      uVar30 = (long)puStack_d8 * uVar31;
                      puVar40 = puVar38;
                      if (uVar30 <= uVar27) {
                        uVar29 = uVar27 - uVar30;
                        puVar42 = (ulong *)((long)puVar38 + uVar30);
                        uVar30 = uVar33;
                        puVar40 = puVar42;
                        if ((uVar9 & 0xff00) == 0x800) {
                          if (7 < uVar29) {
                            puVar40 = (ulong *)(((ulong)(uint)*puVar42 << 8 |
                                                (ulong)*(uint3 *)((long)puVar42 + 4) << 0x28) >> 8 |
                                               (ulong)*(byte *)((long)puVar42 + 7) << 0x38);
LAB_00a18ef4:
                            local_188 = (undefined1 *)((long)puVar40 + uVar30);
                            bVar16 = true;
                            goto LAB_00a18cf4;
                          }
                        }
                        else if (3 < uVar29) {
                          puVar40 = (ulong *)(ulong)(uint)*puVar42;
                          goto LAB_00a18ef4;
                        }
                      }
                      uVar48 = 0x11;
                      uVar44 = 0;
                    }
                    else {
                      uVar48 = 0x32;
joined_r0x00a196e4:
                      uVar44 = 0;
                      puVar40 = puVar42;
                    }
                  }
                  goto joined_r0x00a196e4;
                }
                if ((short)local_a0 == 0x12) {
                  FUN_00a43f68(&local_e0,&local_c0);
                  if (local_e0 == 0) {
                    bVar17 = 1;
                    unaff_x27 = puStack_d8;
                  }
                  else if (local_e0 == 8) {
                    bVar19 = 1;
                    local_1e8 = puStack_d8;
                  }
                  else if (local_e0 == 0xd) {
                    if (puVar7 < puVar32) {
                      local_148 = local_148 & 0xffffffffffffff00 | 0x11;
                      uVar48 = (uint)local_148;
                      local_1d0 = puVar36;
joined_r0x00a19148:
                      uVar48 = uVar48 & 0xff;
                      if (uVar48 == 0xff) {
LAB_00a190c0:
                        bVar17 = 1;
                        unaff_x27 = local_1d0;
                        goto LAB_00a18cf4;
                      }
                    }
                    else {
                      auVar12._8_8_ = 0;
                      auVar12._0_8_ = puStack_d8;
                      auVar15._8_8_ = 0;
                      auVar15._0_8_ = uVar44 & 0xff;
                      if (SUB168(auVar12 * auVar15,8) != 0) {
                        local_148 = local_148 & 0xffffffffffffff00 | 0x32;
                        uVar48 = (uint)local_148;
                        goto joined_r0x00a19148;
                      }
                      uVar30 = (long)puStack_d8 * (uVar44 & 0xff);
                      if (uVar34 < uVar30) {
                        local_148 = local_148 & 0xffffffffffffff00 | 0x11;
                        uVar48 = (uint)local_148;
                        local_1d0 = (ulong *)((long)puVar36 + (long)puVar32);
                        goto joined_r0x00a19148;
                      }
                      if ((uVar9 - 1 & 0xff) < ((uVar9 ^ uVar9 - 1) & 0xff)) {
                        uVar29 = uVar34 - uVar30;
                        puVar42 = (ulong *)((undefined1 *)((long)puVar36 + (long)puVar32) + uVar30);
                        if (1 < uVar23) {
                          if (uVar23 == 2) {
                            if (3 < uVar29) {
                              local_148 = local_148 | 0xff;
                              uVar48 = (uint)local_148;
                              local_1d0 = (ulong *)(ulong)(uint)*puVar42;
                              goto joined_r0x00a19148;
                            }
                          }
                          else {
                            if (uVar23 != 3) goto LAB_00a190a8;
                            if (7 < uVar29) {
                              local_1d0 = (ulong *)(((ulong)(uint)*puVar42 << 8 |
                                                    (ulong)*(uint3 *)((long)puVar42 + 4) << 0x28) >>
                                                    8 | (ulong)*(byte *)((long)puVar42 + 7) << 0x38)
                              ;
                              goto joined_r0x00a190a0;
                            }
                          }
LAB_00a19638:
                          uVar48 = 0x11;
                          goto joined_r0x00a196e4;
                        }
                        if (uVar23 == 0) {
                          if (uVar34 == uVar30) {
                            local_148 = local_148 & 0xffffffffffffff00 | 0x11;
                            uVar48 = (uint)local_148;
                            local_1d0 = puVar42;
                            goto joined_r0x00a19148;
                          }
                          local_1d0 = (ulong *)(ulong)(byte)*puVar42;
                          local_148 = local_148 | 0xff;
                          uVar48 = (uint)local_148;
                          goto joined_r0x00a19198;
                        }
                        if (uVar23 != 1) goto LAB_00a190a8;
                        if (uVar29 < 2) goto LAB_00a19638;
                        local_1d0 = (ulong *)(ulong)(ushort)*puVar42;
joined_r0x00a190a0:
                        uVar48 = 0xff;
                        bVar20 = true;
                        local_148 = local_148 | 0xff;
                      }
                      else {
LAB_00a190a8:
                        local_148 = local_148 & 0xffffffffffff0000 | uVar2;
                        uVar48 = (uint)local_148;
joined_r0x00a19198:
                        uVar48 = uVar48 & 0xff;
                        bVar20 = uVar48 == 0xff;
                      }
                      if (bVar20) goto LAB_00a190c0;
                    }
                    uVar44 = local_148 >> 8;
                    puVar40 = local_1d0;
                    goto joined_r0x00a196e4;
                  }
                }
                else if ((short)local_a0 == 0x11) {
                  FUN_00a43f68(&local_e0,&local_c0);
                  if (local_e0 == 0) {
                    local_178 = puStack_d8;
                    bVar18 = 1;
                  }
                  else if (local_e0 == 0xd) {
                    if (puVar7 < puVar32) {
                      local_1b8 = local_1b8 & 0xffffffffffffff00 | 0x11;
                      local_230 = puVar36;
                    }
                    else {
                      auVar11._8_8_ = 0;
                      auVar11._0_8_ = puStack_d8;
                      auVar14._8_8_ = 0;
                      auVar14._0_8_ = uVar44 & 0xff;
                      if (SUB168(auVar11 * auVar14,8) == 0) {
                        uVar30 = (long)puStack_d8 * (uVar44 & 0xff);
                        if (uVar34 < uVar30) {
                          local_1b8 = local_1b8 & 0xffffffffffffff00 | 0x11;
                          local_230 = (ulong *)((long)puVar36 + (long)puVar32);
                        }
                        else if ((uVar9 - 1 & 0xff) < ((uVar9 ^ uVar9 - 1) & 0xff)) {
                          uVar29 = uVar34 - uVar30;
                          puVar42 = (ulong *)((undefined1 *)((long)puVar36 + (long)puVar32) + uVar30
                                             );
                          if (uVar23 < 2) {
                            if (uVar23 == 0) {
                              if (uVar34 == uVar30) {
                                local_1b8 = local_1b8 & 0xffffffffffffff00 | 0x11;
                                local_230 = puVar42;
                                goto LAB_00a1915c;
                              }
                              local_230 = (ulong *)(ulong)(byte)*puVar42;
                            }
                            else {
                              if (uVar23 != 1) goto LAB_00a1903c;
                              if (uVar29 < 2) goto LAB_00a19638;
                              local_230 = (ulong *)(ulong)(ushort)*puVar42;
                            }
                          }
                          else if (uVar23 == 2) {
                            if (uVar29 < 4) goto LAB_00a19638;
                            local_230 = (ulong *)(ulong)(uint)*puVar42;
                          }
                          else {
                            if (uVar23 != 3) goto LAB_00a1903c;
                            if (uVar29 < 8) goto LAB_00a19638;
                            local_230 = (ulong *)(((ulong)(uint)*puVar42 << 8 |
                                                  (ulong)*(uint3 *)((long)puVar42 + 4) << 0x28) >> 8
                                                 | (ulong)*(byte *)((long)puVar42 + 7) << 0x38);
                          }
                          local_1b8 = local_1b8 | 0xff;
                        }
                        else {
LAB_00a1903c:
                          local_1b8 = local_1b8 & 0xffffffffffff0000 | uVar2;
                        }
                      }
                      else {
                        local_1b8 = local_1b8 & 0xffffffffffffff00 | 0x32;
                      }
                    }
LAB_00a1915c:
                    uVar48 = (uint)local_1b8 & 0xff;
                    if (uVar48 != 0xff) {
                      uVar44 = local_1b8 >> 8;
                      puVar40 = local_230;
                      goto joined_r0x00a196e4;
                    }
                    bVar18 = 1;
                    puVar42 = local_230;
                    local_178 = local_230;
                  }
                }
LAB_00a18cf4:
                lVar47 = lVar47 + -0x10;
                plVar39 = plVar39 + 2;
              } while (lVar47 != 0);
              if (bVar16) {
                puVar24 = *(undefined1 **)(param_2 + 0xe0 + lVar4);
                puVar40 = *(ulong **)(param_2 + 0xe0 + lVar41);
                if (puVar24 < local_188) {
                  uVar48 = 0x11;
                  uVar44 = 0;
                  goto joined_r0x00a196e4;
                }
                bVar16 = false;
                local_a0 = (ulong *)((long)puVar40 + (long)local_188);
                uStack_8c = CONCAT31(uStack_8c._1_3_,4 < uVar10);
                local_c0 = puVar36;
                puStack_b8 = puVar7;
                local_b0 = puVar6;
                puStack_a8 = puVar32;
                lStack_98 = (long)puVar24 - (long)local_188;
                local_90 = uVar9;
                while (FUN_00a4335c(&local_e0,&local_c0), puVar42 = puStack_d0, puVar40 = puStack_d8
                      , local_e0 != 0) {
                  if (local_e0 == 2) {
                    uVar48 = (uint)puStack_d8 & 0xff;
                    if (uVar48 != 0xff) {
                      uVar44 = (ulong)puStack_d8 >> 8 & 0xff | ((ulong)puStack_d8 >> 0x10) << 8;
                      puVar40 = puStack_d0;
                      goto joined_r0x00a196e4;
                    }
                    if (((uint)puStack_d8 >> 8 & 1) == 0) goto LAB_00a18ba0;
                    goto LAB_00a19354;
                  }
                  if (puStack_d8 < puStack_d0) {
                    if (puVar45 == local_128) {
                    /* try { // try from 00a19254 to 00a1925b has its CatchHandler @ 00a197d8 */
                      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>
                      ::grow_one(&local_128);
                      local_1f0 = local_120;
                    }
                    bVar16 = true;
                    puVar26 = local_1f0 + (long)puVar45 * 3;
                    puVar45 = (ulong *)((long)puVar45 + 1);
                    *puVar26 = (ulong)puVar40;
                    puVar26[1] = (ulong)puVar42;
                    puVar26[2] = uVar43;
                    local_118 = puVar45;
                  }
                }
                if (!bVar16) goto LAB_00a18ba0;
LAB_00a19354:
                local_c0 = (ulong *)0x0;
                local_80 = lVar37 - (long)puVar21;
                if (uVar43 == local_140) {
                    /* try { // try from 00a1936c to 00a19373 has its CatchHandler @ 00a197dc */
                  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::Library>>
                  ::grow_one(&local_140);
                }
                puVar25 = (undefined8 *)(local_138 + uVar43 * 0x48);
                uVar43 = uVar43 + 1;
                puVar25[3] = puStack_a8;
                puVar25[2] = local_b0;
                puVar25[5] = lStack_98;
                puVar25[4] = local_a0;
                puVar25[7] = uStack_88;
                puVar25[6] = CONCAT44(uStack_8c,local_90);
                puVar25[8] = local_80;
                puVar25[1] = puStack_b8;
                *puVar25 = local_c0;
                local_130 = uVar43;
              }
              else if ((bool)(bVar18 & bVar17)) {
                if (local_178 < unaff_x27) {
                  puVar40 = unaff_x27;
                  if (puVar45 == local_128) {
                    /* try { // try from 00a192bc to 00a19307 has its CatchHandler @ 00a197ec */
                    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>
                    ::grow_one(&local_128);
LAB_00a1930c:
                    local_1f0 = local_120;
                  }
LAB_00a19310:
                  puVar42 = local_1f0 + (long)puVar45 * 3;
                  puVar45 = (ulong *)((long)puVar45 + 1);
                  *puVar42 = (ulong)local_178;
                  puVar42[1] = (ulong)puVar40;
                  puVar42[2] = uVar43;
                  local_118 = puVar45;
                  goto LAB_00a19354;
                }
              }
              else if (((bool)(bVar18 & bVar19)) &&
                      (puVar40 = (ulong *)((long)local_178 + (long)local_1e8), local_178 < puVar40))
              {
                if (puVar45 == local_128) {
                  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>
                  ::grow_one(&local_128);
                  goto LAB_00a1930c;
                }
                goto LAB_00a19310;
              }
            }
          }
          else {
            auVar49 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
            FUN_00a2368c(&local_c0,&local_110,local_e8,auVar49._0_8_,auVar49._8_8_);
            puVar26 = local_c0;
            puVar40 = puStack_b8;
            puVar46 = puVar21;
            if ((byte)local_c0 != -1) {
LAB_00a19458:
              uVar44 = (ulong)puVar26 >> 8;
              uVar48 = (uint)puVar26 & 0xff;
              puVar32 = puVar46;
              goto joined_r0x00a196e4;
            }
          }
        }
LAB_00a18ba0:
      } while (local_108 != (ulong *)0x0);
      if (&DAT_00000001 < puVar45) {
        if (&DAT_00000014 < puVar45) {
                    /* try { // try from 00a1978c to 00a19793 has its CatchHandler @ 00a19798 */
          core[bcece726f298455b]::slice::sort::unstable::ipnsort::
          <addr2line[e17ec0026c2a32fb]::function::FunctionAddress,<[addr2line[e17ec0026c2a32fb]::function::FunctionAddress]>::sort_unstable_by_key<u64,<addr2line[e17ec0026c2a32fb]::function::Functions<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                    (local_120,puVar45,&local_c0);
        }
        else {
          lVar41 = 0;
          puVar40 = local_120 + 3;
          puVar38 = local_120;
          do {
            puVar36 = puVar40;
            uVar30 = puVar38[3];
            if (uVar30 < *puVar38) {
              puStack_b8 = (ulong *)puVar38[5];
              local_c0 = (ulong *)puVar38[4];
              lVar4 = lVar41;
              do {
                lVar37 = lVar4;
                puVar25 = (undefined8 *)((long)local_120 + lVar37);
                puVar25[4] = puVar25[1];
                puVar25[3] = *puVar25;
                puVar25[5] = puVar25[2];
                puVar40 = local_120;
                if (lVar37 == 0) goto LAB_00a19718;
                lVar4 = lVar37 + -0x18;
              } while (uVar30 < (ulong)puVar25[-3]);
              puVar40 = (ulong *)((long)local_120 + lVar37);
LAB_00a19718:
              *puVar40 = uVar30;
              puVar40[2] = (ulong)puStack_b8;
              puVar40[1] = (ulong)local_c0;
            }
            puVar40 = puVar36 + 3;
            lVar41 = lVar41 + 0x18;
            puVar38 = puVar36;
          } while (puVar40 != local_120 + (long)puVar45 * 3);
        }
      }
      uVar30 = local_130;
      puVar24 = local_138;
      if (local_130 < local_140) {
        if (local_130 == 0) {
          free(local_138);
          puVar24 = &DAT_00000008;
        }
        else {
          lVar41 = local_130 * 0x48;
          puVar24 = (undefined1 *)FUN_004b2600(local_138,local_140 * 0x48,8,lVar41);
          if (puVar24 == (undefined1 *)0x0) {
                    /* try { // try from 00a194e8 to 00a194f3 has its CatchHandler @ 00a197c4 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(8,lVar41);
          }
        }
      }
      puVar40 = local_118;
      puVar45 = local_120;
      if (local_118 < local_128) {
        if (local_118 == (ulong *)0x0) {
          free(local_120);
          puVar45 = (ulong *)&DAT_00000008;
        }
        else {
          lVar41 = (long)local_118 * 0x18;
          puVar45 = (ulong *)FUN_004b2600(local_120,(long)local_128 * 0x18,8,lVar41);
          if (puVar45 == (ulong *)0x0) {
                    /* try { // try from 00a19590 to 00a1959b has its CatchHandler @ 00a1979c */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(8,lVar41);
          }
        }
      }
      lVar41 = *param_1;
      local_b0 = (ulong *)((ulong)((uint)uVar30 & 0xff) | uVar30 & 0xffffffffffffff00);
      puStack_b8 = (ulong *)puVar24;
      puStack_a8 = puVar45;
      local_a0 = puVar40;
      goto joined_r0x00a19418;
    }
  }
  uVar44 = uVar30 >> 8;
  uVar48 = (uint)uVar30 & 0xff;
  puVar24 = &DAT_00000008;
  puVar32 = puVar40;
LAB_00a193e8:
  if (local_140 != 0) {
    free(puVar24);
  }
  lVar41 = *param_1;
  local_b0 = (ulong *)((ulong)uVar48 | uVar44 << 8);
  puStack_b8 = (ulong *)(undefined1 *)0x0;
  puStack_a8 = puVar40;
  local_a0 = puVar32;
joined_r0x00a19418:
  if (lVar41 == 1) {
    local_c0 = (ulong *)(param_1 + 1);
    FUN_00a1fe8c(&local_c0);
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00381fd3,0x1d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa4b0);
  }
  param_1[2] = (long)local_b0;
  param_1[3] = (long)puStack_a8;
  *param_1 = 1;
  param_1[1] = (long)puStack_b8;
  param_1[4] = (long)local_a0;
  return;
}


// ===== 00a19824  FUN_00a19824  [FAILED] =====
/* decompilation failed: Exception while decompiling 00a19824: process: timeout
 */

// ===== 00a1af38  FUN_00a1af38  [FAILED] =====
/* decompilation failed: Exception while decompiling 00a1af38: process: timeout
 */

// ===== 00a1e200  FUN_00a1e200 =====

void FUN_00a1e200(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  short sVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  size_t __n;
  ulong uVar12;
  long lVar13;
  void *__ptr;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = param_2[3];
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x21a);
  uVar5 = uVar14;
  if (param_3 == 1) {
    uVar5 = (ulong)*(ushort *)(param_2[5] + 0x21a);
  }
  if (uVar5 < param_4) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00381fff,0x8e,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa5e8);
  }
  __ptr = (void *)param_2[5];
  uVar12 = (ulong)*(ushort *)((long)__ptr + 0x21a);
  uVar5 = uVar14 + 1 + uVar12;
  if (0xb < uVar5) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0038208d,0x2a,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa600);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  lVar11 = *param_2;
  lVar10 = lVar11 + uVar3 * 0x18;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x21a);
  *(short *)(lVar13 + 0x21a) = (short)uVar5;
  uVar6 = *(undefined8 *)(lVar10 + 0x18);
  __n = (uVar8 + ~uVar3) * 0x18;
  uVar17 = *(undefined8 *)(lVar10 + 0x10);
  uVar16 = *(undefined8 *)(lVar10 + 8);
  lVar7 = param_2[4];
  memmove((void *)(lVar10 + 8),(void *)(lVar10 + 0x20),__n);
  puVar1 = (undefined8 *)(lVar13 + 8 + uVar14 * 0x18);
  lVar15 = (uVar14 + 1) * 0x18;
  puVar1[1] = uVar17;
  *puVar1 = uVar16;
  puVar1[2] = uVar6;
  memcpy((void *)(lVar13 + 8 + lVar15),(void *)((long)__ptr + 8),uVar12 * 0x18);
  uVar17 = *(undefined8 *)(lVar10 + 0x118);
  uVar16 = *(undefined8 *)(lVar10 + 0x110);
  uVar6 = *(undefined8 *)(lVar10 + 0x120);
  memmove((void *)(lVar10 + 0x110),(void *)(lVar10 + 0x128),__n);
  puVar1 = (undefined8 *)(lVar13 + 0x110 + uVar14 * 0x18);
  puVar1[1] = uVar17;
  *puVar1 = uVar16;
  puVar1[2] = uVar6;
  memcpy((void *)(lVar13 + 0x110 + lVar15),(void *)((long)__ptr + 0x110),uVar12 * 0x18);
  lVar10 = lVar11 + (uVar3 + 1) * 8;
  memmove((void *)(lVar10 + 0x220),(void *)(lVar10 + 0x228),(uVar8 + ~uVar3) * 8);
  if (uVar3 + 1 < uVar8) {
    lVar10 = uVar3 + 0x45;
    do {
      sVar4 = (short)lVar10;
      plVar9 = *(long **)(lVar11 + lVar10 * 8);
      lVar10 = lVar10 + 1;
      *plVar9 = lVar11;
      *(short *)(plVar9 + 0x43) = sVar4 + -0x44;
    } while ((1 - uVar8) + lVar10 != 0x45);
  }
  *(short *)(lVar11 + 0x21a) = *(short *)(lVar11 + 0x21a) + -1;
  if (1 < uVar2) {
    lVar10 = uVar12 + 1;
    if (lVar10 != uVar5 - uVar14) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_003821d2,0x28,&DAT_00afab28);
    }
    memcpy((void *)(lVar13 + 0x220 + (uVar14 + 1) * 8),(void *)((long)__ptr + 0x220),lVar10 * 8);
    lVar11 = uVar14 + 0x45;
    do {
      plVar9 = *(long **)(lVar13 + lVar11 * 8);
      sVar4 = (short)lVar11;
      lVar10 = lVar10 + -1;
      lVar11 = lVar11 + 1;
      *plVar9 = lVar13;
      *(short *)(plVar9 + 0x43) = sVar4 + -0x44;
    } while (lVar10 != 0);
  }
  lVar10 = uVar14 + 1;
  free(__ptr);
  if ((param_3 & 1) == 0) {
    lVar10 = 0;
  }
  *param_1 = lVar13;
  param_1[1] = lVar7;
  param_1[2] = lVar10 + param_4;
  return;
}


// ===== 00a1e4b8  FUN_00a1e4b8 =====

undefined8 * FUN_00a1e4b8(pthread_key_t param_1,long param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *__pointer;
  undefined8 *__ptr;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    uVar5 = *(undefined8 *)(param_3 + 2);
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_00a1e4f0;
  }
  uVar5 = 0;
LAB_00a1e4f0:
  __pointer = (undefined8 *)malloc(0x10);
  if (__pointer != (undefined8 *)0x0) {
    *__pointer = uVar5;
    *(pthread_key_t *)(__pointer + 1) = param_1;
    __ptr = (undefined8 *)pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (undefined8 *)0x0) {
      plVar3 = (long *)*__ptr;
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
          <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>
          ::drop_slow(__ptr);
        }
      }
      free(__ptr);
    }
    return __pointer;
  }
                    /* try { // try from 00a1e590 to 00a1e59b has its CatchHandler @ 00a1e5a0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 00a1e5d0  FUN_00a1e5d0 =====

undefined8 * FUN_00a1e5d0(pthread_key_t param_1,long param_2,uint *param_3)

{
  undefined8 *__pointer;
  void *pvVar1;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    uVar2 = *(undefined8 *)(param_3 + 2);
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_00a1e608;
  }
  uVar2 = 0;
LAB_00a1e608:
  __pointer = (undefined8 *)malloc(0x10);
  if (__pointer != (undefined8 *)0x0) {
    *__pointer = uVar2;
    *(pthread_key_t *)(__pointer + 1) = param_1;
    pvVar1 = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (pvVar1 != (void *)0x0) {
      FUN_00a20e24(pvVar1);
    }
    return __pointer;
  }
                    /* try { // try from 00a1e680 to 00a1e68b has its CatchHandler @ 00a1e690 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 00a1e6a8  FUN_00a1e6a8 =====

undefined8 * FUN_00a1e6a8(pthread_key_t param_1,long param_2,uint *param_3)

{
  undefined8 *__pointer;
  void *__ptr;
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    uVar2 = *(undefined8 *)(param_3 + 2);
    uVar1 = (undefined1)param_3[4];
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_00a1e6e4;
  }
  uVar1 = 0;
  uVar2 = 0;
LAB_00a1e6e4:
  __pointer = (undefined8 *)malloc(0x18);
  if (__pointer != (undefined8 *)0x0) {
    *__pointer = uVar2;
    *(undefined1 *)(__pointer + 1) = uVar1;
    *(pthread_key_t *)(__pointer + 2) = param_1;
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


// ===== 00a1e75c  FUN_00a1e75c =====

byte * FUN_00a1e75c(pthread_key_t param_1,long param_2,byte *param_3)

{
  byte bVar1;
  byte *__pointer;
  void *__ptr;
  byte bVar2;
  
  if (param_2 == 1) {
    return (byte *)0x0;
  }
  if (param_3 != (byte *)0x0) {
    bVar1 = *param_3;
    bVar2 = param_3[1];
    *param_3 = 0;
    if ((bVar1 & 1) != 0) goto LAB_00a1e790;
  }
  bVar2 = 0;
LAB_00a1e790:
  __pointer = (byte *)malloc(8);
  if (__pointer != (byte *)0x0) {
    *__pointer = bVar2;
    *(pthread_key_t *)(__pointer + 4) = param_1;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    return __pointer;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(4,8);
}


// ===== 00a1e804  FUN_00a1e804 =====

void FUN_00a1e804(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  size_t sVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong local_180;
  long *local_168;
  long *local_118;
  ulong uStack_110;
  ulong local_108;
  long *local_100;
  ulong uStack_f8;
  ulong local_f0;
  long *plStack_e8;
  ulong local_e0;
  long *plStack_d8;
  ulong local_d0;
  long *local_c8;
  ulong uStack_c0;
  long local_b8;
  long *plStack_b0;
  ulong local_a8;
  long *plStack_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  long local_80;
  
  plVar22 = (long *)*param_2;
  local_180 = param_2[2];
  uVar4 = *(ushort *)((long)plVar22 + 0x21a);
  sVar24 = ((ulong)uVar4 + ~local_180) * 0x18;
  lVar28 = plVar22[local_180 * 3 + 2];
  lVar26 = plVar22[local_180 * 3 + 1];
  lVar20 = plVar22[local_180 * 3 + 3];
  memmove(plVar22 + local_180 * 3 + 1,plVar22 + local_180 * 3 + 4,sVar24);
  lVar29 = plVar22[local_180 * 3 + 0x23];
  lVar27 = plVar22[local_180 * 3 + 0x22];
  lVar10 = plVar22[local_180 * 3 + 0x24];
  memmove(plVar22 + local_180 * 3 + 0x22,plVar22 + local_180 * 3 + 0x25,sVar24);
  uVar6 = uVar4 - 1;
  uVar17 = param_2[1];
  *(ushort *)((long)plVar22 + 0x21a) = uVar6;
  if (4 < uVar6) goto LAB_00a1e9d4;
  plVar13 = (long *)*plVar22;
  if (plVar13 == (long *)0x0) {
LAB_00a1e9ac:
    local_168 = (long *)*plVar22;
  }
  else {
    uVar5 = *(ushort *)(plVar22 + 0x43);
    uVar14 = uVar17 + 1;
    if (uVar5 == 0) {
      if (*(short *)((long)plVar13 + 0x21a) == 0) {
LAB_00a1ecfc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_003829b1,0x7b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb480);
      }
      plStack_a0 = (long *)plVar13[0x45];
      local_b8 = 0;
      plStack_b0 = plVar22;
      if (0xb < (ulong)uVar4 + (ulong)*(ushort *)((long)plStack_a0 + 0x21a)) {
        local_c8 = plVar13;
        uStack_c0 = uVar14;
        local_a8 = uVar17;
        local_98 = uVar17;
        FUN_00a3410c(&local_c8,1);
        goto LAB_00a1e9ac;
      }
      local_c8 = plVar13;
      uStack_c0 = uVar14;
      local_a8 = uVar17;
      local_98 = uVar17;
      FUN_00a1e200(&local_118,&local_c8,0,local_180);
    }
    else {
      local_b8 = (ulong)uVar5 - 1;
      plStack_b0 = (long *)plVar13[(ulong)uVar5 + 0x43];
      plStack_a0 = plVar22;
      if (0xb < (ulong)*(ushort *)((long)plStack_b0 + 0x21a) + (ulong)uVar6 + 1) {
        local_c8 = plVar13;
        uStack_c0 = uVar14;
        local_a8 = uVar17;
        local_98 = uVar17;
        FUN_00a33e88(&local_c8,1);
        local_180 = local_180 + 1;
        goto LAB_00a1e9ac;
      }
                    /* try { // try from 00a1e8fc to 00a1e9a3 has its CatchHandler @ 00a1ed18 */
      local_c8 = plVar13;
      uStack_c0 = uVar14;
      local_a8 = uVar17;
      local_98 = uVar17;
      FUN_00a1e200(&local_118,&local_c8,1,local_180);
    }
    local_168 = (long *)*local_118;
    plVar22 = local_118;
    uVar17 = uStack_110;
    local_180 = local_108;
  }
  if ((local_168 != (long *)0x0) && (uVar4 = *(ushort *)((long)local_168 + 0x21a), uVar4 < 5)) {
    uVar14 = uVar17 + 1;
    local_118 = plVar22;
    uStack_110 = uVar17;
    local_108 = local_180;
    do {
      uVar11 = (ulong)uVar4;
      plVar13 = (long *)*local_168;
      if (plVar13 == (long *)0x0) {
        if (uVar4 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar4 = *(ushort *)(local_168 + 0x43);
      uVar1 = uVar14 + 1;
      if (uVar4 == 0) {
        if (*(short *)((long)plVar13 + 0x21a) == 0) goto LAB_00a1ecfc;
        plStack_a0 = (long *)plVar13[0x45];
        lVar21 = uVar11 + 1;
        local_b8 = 0;
        uVar15 = lVar21 + (ulong)*(ushort *)((long)plStack_a0 + 0x21a);
        local_c8 = plVar13;
        uStack_c0 = uVar1;
        plStack_b0 = local_168;
        local_a8 = uVar14;
        local_98 = uVar14;
        if (0xb < uVar15) {
          FUN_00a3410c(&local_c8,5 - uVar11);
          break;
        }
        uVar18 = 0;
        uVar19 = uVar11;
        plVar23 = local_168;
        uVar11 = (ulong)*(ushort *)((long)plStack_a0 + 0x21a);
        local_168 = plStack_a0;
      }
      else {
        uVar18 = (ulong)uVar4 - 1;
        plVar23 = (long *)plVar13[(ulong)uVar4 + 0x43];
        uVar19 = (ulong)*(ushort *)((long)plVar23 + 0x21a);
        local_100 = plVar13;
        uStack_f8 = uVar1;
        local_f0 = uVar18;
        plStack_e8 = plVar23;
        local_e0 = uVar14;
        plStack_d8 = local_168;
        local_d0 = uVar14;
        if (0xb < uVar11 + uVar19 + 1) {
                    /* try { // try from 00a1eca8 to 00a1ed13 has its CatchHandler @ 00a1ed18 */
          FUN_00a33e88(&local_100,5 - uVar11);
          break;
        }
        lVar21 = uVar19 + 1;
        uVar15 = lVar21 + uVar11;
        if (0xb < uVar15) {
          ppuVar9 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa600;
          puVar7 = &DAT_0038208d;
          uVar8 = 0x2a;
          goto LAB_00a1ecf4;
        }
      }
      uVar25 = (ulong)*(ushort *)((long)plVar13 + 0x21a);
      *(short *)((long)plVar23 + 0x21a) = (short)uVar15;
      iVar16 = (int)uVar18;
      lStack_88 = plVar13[(long)iVar16 * 3 + 2];
      local_90 = plVar13[(long)iVar16 * 3 + 1];
      local_80 = plVar13[(long)iVar16 * 3 + 3];
      sVar24 = (uVar25 + ~uVar18) * 0x18;
      memmove(plVar13 + (long)iVar16 * 3 + 1,plVar13 + (long)iVar16 * 3 + 4,sVar24);
      plVar3 = plVar23 + uVar19 * 3 + 1;
      plVar3[1] = lStack_88;
      *plVar3 = local_90;
      plVar3[2] = local_80;
      memcpy(plVar23 + lVar21 * 3 + 1,local_168 + 1,uVar11 * 0x18);
      lStack_88 = plVar13[(long)iVar16 * 3 + 0x23];
      local_90 = plVar13[(long)iVar16 * 3 + 0x22];
      local_80 = plVar13[(long)iVar16 * 3 + 0x24];
      memmove(plVar13 + (long)iVar16 * 3 + 0x22,plVar13 + (long)iVar16 * 3 + 0x25,sVar24);
      plVar3 = plVar23 + uVar19 * 3 + 0x22;
      plVar3[1] = lStack_88;
      *plVar3 = local_90;
      plVar3[2] = local_80;
      memcpy(plVar23 + lVar21 * 3 + 0x22,local_168 + 0x22,uVar11 * 0x18);
      memmove(plVar13 + uVar18 + 0x45,plVar13 + uVar18 + 0x46,(uVar25 + ~uVar18) * 8);
      uVar14 = uVar18 + 1;
      if (uVar18 + 1 < uVar25) {
        do {
          uVar18 = uVar14 + 1;
          puVar12 = (undefined8 *)plVar13[uVar14 + 0x44];
          *(short *)(puVar12 + 0x43) = (short)uVar14;
          *puVar12 = plVar13;
          uVar14 = uVar18;
        } while (uVar25 != uVar18);
      }
      *(short *)((long)plVar13 + 0x21a) = *(short *)((long)plVar13 + 0x21a) + -1;
      if (1 < uVar1) {
        if (uVar11 + 1 != uVar15 - uVar19) {
          puVar7 = &DAT_003821d2;
          uVar8 = 0x28;
          ppuVar9 = (undefined **)&DAT_00afab28;
LAB_00a1ecf4:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic(puVar7,uVar8,ppuVar9);
        }
        memcpy(plVar23 + lVar21 + 0x44,local_168 + 0x44,(uVar11 + 1) * 8);
        do {
          lVar2 = lVar21 + 1;
          puVar12 = (undefined8 *)plVar23[lVar21 + 0x44];
          *(short *)(puVar12 + 0x43) = (short)lVar21;
          *puVar12 = plVar23;
          lVar21 = lVar2;
        } while (uVar15 + 1 != lVar2);
      }
      free(local_168);
      uVar4 = *(ushort *)((long)plVar13 + 0x21a);
      uVar14 = uVar1;
      local_168 = plVar13;
    } while (uVar4 < 5);
  }
LAB_00a1e9d4:
  param_1[1] = lVar28;
  *param_1 = lVar26;
  param_1[3] = lVar27;
  param_1[2] = lVar20;
  param_1[5] = lVar10;
  param_1[4] = lVar29;
  param_1[6] = (long)plVar22;
  param_1[7] = uVar17;
  param_1[8] = local_180;
  return;
}


// ===== 00a1ed2c  FUN_00a1ed2c =====

void FUN_00a1ed2c(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  size_t sVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong local_180;
  long *local_168;
  long *local_118;
  ulong uStack_110;
  ulong local_108;
  long *local_100;
  ulong uStack_f8;
  ulong local_f0;
  long *plStack_e8;
  ulong local_e0;
  long *plStack_d8;
  ulong local_d0;
  long *local_c8;
  ulong uStack_c0;
  long local_b8;
  long *plStack_b0;
  ulong local_a8;
  long *plStack_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  long local_80;
  
  plVar22 = (long *)*param_2;
  local_180 = param_2[2];
  uVar4 = *(ushort *)((long)plVar22 + 0x21a);
  sVar24 = ((ulong)uVar4 + ~local_180) * 0x18;
  lVar28 = plVar22[local_180 * 3 + 2];
  lVar26 = plVar22[local_180 * 3 + 1];
  lVar20 = plVar22[local_180 * 3 + 3];
  memmove(plVar22 + local_180 * 3 + 1,plVar22 + local_180 * 3 + 4,sVar24);
  lVar29 = plVar22[local_180 * 3 + 0x23];
  lVar27 = plVar22[local_180 * 3 + 0x22];
  lVar10 = plVar22[local_180 * 3 + 0x24];
  memmove(plVar22 + local_180 * 3 + 0x22,plVar22 + local_180 * 3 + 0x25,sVar24);
  uVar6 = uVar4 - 1;
  uVar17 = param_2[1];
  *(ushort *)((long)plVar22 + 0x21a) = uVar6;
  if (4 < uVar6) goto LAB_00a1eefc;
  plVar13 = (long *)*plVar22;
  if (plVar13 == (long *)0x0) {
LAB_00a1eed4:
    local_168 = (long *)*plVar22;
  }
  else {
    uVar5 = *(ushort *)(plVar22 + 0x43);
    uVar14 = uVar17 + 1;
    if (uVar5 == 0) {
      if (*(short *)((long)plVar13 + 0x21a) == 0) {
LAB_00a1f224:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_003829b1,0x7b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb480);
      }
      plStack_a0 = (long *)plVar13[0x45];
      local_b8 = 0;
      plStack_b0 = plVar22;
      if (0xb < (ulong)uVar4 + (ulong)*(ushort *)((long)plStack_a0 + 0x21a)) {
        local_c8 = plVar13;
        uStack_c0 = uVar14;
        local_a8 = uVar17;
        local_98 = uVar17;
        FUN_00a3410c(&local_c8,1);
        goto LAB_00a1eed4;
      }
      local_c8 = plVar13;
      uStack_c0 = uVar14;
      local_a8 = uVar17;
      local_98 = uVar17;
      FUN_00a1e200(&local_118,&local_c8,0,local_180);
    }
    else {
      local_b8 = (ulong)uVar5 - 1;
      plStack_b0 = (long *)plVar13[(ulong)uVar5 + 0x43];
      plStack_a0 = plVar22;
      if (0xb < (ulong)*(ushort *)((long)plStack_b0 + 0x21a) + (ulong)uVar6 + 1) {
        local_c8 = plVar13;
        uStack_c0 = uVar14;
        local_a8 = uVar17;
        local_98 = uVar17;
        FUN_00a33e88(&local_c8,1);
        local_180 = local_180 + 1;
        goto LAB_00a1eed4;
      }
                    /* try { // try from 00a1ee24 to 00a1eecb has its CatchHandler @ 00a1f240 */
      local_c8 = plVar13;
      uStack_c0 = uVar14;
      local_a8 = uVar17;
      local_98 = uVar17;
      FUN_00a1e200(&local_118,&local_c8,1,local_180);
    }
    local_168 = (long *)*local_118;
    plVar22 = local_118;
    uVar17 = uStack_110;
    local_180 = local_108;
  }
  if ((local_168 != (long *)0x0) && (uVar4 = *(ushort *)((long)local_168 + 0x21a), uVar4 < 5)) {
    uVar14 = uVar17 + 1;
    local_118 = plVar22;
    uStack_110 = uVar17;
    local_108 = local_180;
    do {
      uVar11 = (ulong)uVar4;
      plVar13 = (long *)*local_168;
      if (plVar13 == (long *)0x0) {
        if (uVar4 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar4 = *(ushort *)(local_168 + 0x43);
      uVar1 = uVar14 + 1;
      if (uVar4 == 0) {
        if (*(short *)((long)plVar13 + 0x21a) == 0) goto LAB_00a1f224;
        plStack_a0 = (long *)plVar13[0x45];
        lVar21 = uVar11 + 1;
        local_b8 = 0;
        uVar15 = lVar21 + (ulong)*(ushort *)((long)plStack_a0 + 0x21a);
        local_c8 = plVar13;
        uStack_c0 = uVar1;
        plStack_b0 = local_168;
        local_a8 = uVar14;
        local_98 = uVar14;
        if (0xb < uVar15) {
          FUN_00a3410c(&local_c8,5 - uVar11);
          break;
        }
        uVar18 = 0;
        uVar19 = uVar11;
        plVar23 = local_168;
        uVar11 = (ulong)*(ushort *)((long)plStack_a0 + 0x21a);
        local_168 = plStack_a0;
      }
      else {
        uVar18 = (ulong)uVar4 - 1;
        plVar23 = (long *)plVar13[(ulong)uVar4 + 0x43];
        uVar19 = (ulong)*(ushort *)((long)plVar23 + 0x21a);
        local_100 = plVar13;
        uStack_f8 = uVar1;
        local_f0 = uVar18;
        plStack_e8 = plVar23;
        local_e0 = uVar14;
        plStack_d8 = local_168;
        local_d0 = uVar14;
        if (0xb < uVar11 + uVar19 + 1) {
                    /* try { // try from 00a1f1d0 to 00a1f23b has its CatchHandler @ 00a1f240 */
          FUN_00a33e88(&local_100,5 - uVar11);
          break;
        }
        lVar21 = uVar19 + 1;
        uVar15 = lVar21 + uVar11;
        if (0xb < uVar15) {
          ppuVar9 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa600;
          puVar7 = &DAT_0038208d;
          uVar8 = 0x2a;
          goto LAB_00a1f21c;
        }
      }
      uVar25 = (ulong)*(ushort *)((long)plVar13 + 0x21a);
      *(short *)((long)plVar23 + 0x21a) = (short)uVar15;
      iVar16 = (int)uVar18;
      lStack_88 = plVar13[(long)iVar16 * 3 + 2];
      local_90 = plVar13[(long)iVar16 * 3 + 1];
      local_80 = plVar13[(long)iVar16 * 3 + 3];
      sVar24 = (uVar25 + ~uVar18) * 0x18;
      memmove(plVar13 + (long)iVar16 * 3 + 1,plVar13 + (long)iVar16 * 3 + 4,sVar24);
      plVar3 = plVar23 + uVar19 * 3 + 1;
      plVar3[1] = lStack_88;
      *plVar3 = local_90;
      plVar3[2] = local_80;
      memcpy(plVar23 + lVar21 * 3 + 1,local_168 + 1,uVar11 * 0x18);
      lStack_88 = plVar13[(long)iVar16 * 3 + 0x23];
      local_90 = plVar13[(long)iVar16 * 3 + 0x22];
      local_80 = plVar13[(long)iVar16 * 3 + 0x24];
      memmove(plVar13 + (long)iVar16 * 3 + 0x22,plVar13 + (long)iVar16 * 3 + 0x25,sVar24);
      plVar3 = plVar23 + uVar19 * 3 + 0x22;
      plVar3[1] = lStack_88;
      *plVar3 = local_90;
      plVar3[2] = local_80;
      memcpy(plVar23 + lVar21 * 3 + 0x22,local_168 + 0x22,uVar11 * 0x18);
      memmove(plVar13 + uVar18 + 0x45,plVar13 + uVar18 + 0x46,(uVar25 + ~uVar18) * 8);
      uVar14 = uVar18 + 1;
      if (uVar18 + 1 < uVar25) {
        do {
          uVar18 = uVar14 + 1;
          puVar12 = (undefined8 *)plVar13[uVar14 + 0x44];
          *(short *)(puVar12 + 0x43) = (short)uVar14;
          *puVar12 = plVar13;
          uVar14 = uVar18;
        } while (uVar25 != uVar18);
      }
      *(short *)((long)plVar13 + 0x21a) = *(short *)((long)plVar13 + 0x21a) + -1;
      if (1 < uVar1) {
        if (uVar11 + 1 != uVar15 - uVar19) {
          puVar7 = &DAT_003821d2;
          uVar8 = 0x28;
          ppuVar9 = (undefined **)&DAT_00afab28;
LAB_00a1f21c:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic(puVar7,uVar8,ppuVar9);
        }
        memcpy(plVar23 + lVar21 + 0x44,local_168 + 0x44,(uVar11 + 1) * 8);
        do {
          lVar2 = lVar21 + 1;
          puVar12 = (undefined8 *)plVar23[lVar21 + 0x44];
          *(short *)(puVar12 + 0x43) = (short)lVar21;
          *puVar12 = plVar23;
          lVar21 = lVar2;
        } while (uVar15 + 1 != lVar2);
      }
      free(local_168);
      uVar4 = *(ushort *)((long)plVar13 + 0x21a);
      uVar14 = uVar1;
      local_168 = plVar13;
    } while (uVar4 < 5);
  }
LAB_00a1eefc:
  param_1[1] = lVar28;
  *param_1 = lVar26;
  param_1[3] = lVar27;
  param_1[2] = lVar20;
  param_1[5] = lVar10;
  param_1[4] = lVar29;
  param_1[6] = (long)plVar22;
  param_1[7] = uVar17;
  param_1[8] = local_180;
  return;
}


// ===== 00a1f254  FUN_00a1f254 =====

void FUN_00a1f254(ulong *param_1,long *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  ulong uVar9;
  char *pcVar10;
  void *pvVar11;
  char *pcVar12;
  undefined1 uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  uint unaff_w27;
  ulong local_90;
  void *pvStack_88;
  ulong local_80;
  char local_78;
  undefined4 uStack_77;
  undefined3 uStack_73;
  ulong local_70;
  undefined1 local_65;
  
  pbVar4 = (byte *)*param_2;
  if (param_2[1] == 0) {
    param_1[2] = (ulong)pbVar4;
    *(undefined1 *)(param_1 + 1) = 0x11;
    *param_1 = 0xffffffffffffffff;
  }
  else {
    uVar15 = (ulong)*pbVar4;
    *param_2 = (long)(pbVar4 + 1);
    param_2[1] = param_2[1] + -1;
    if (uVar15 == 0) {
      local_80 = 0;
      local_90 = 0;
      pvStack_88 = (void *)0x2;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pvVar11 = (void *)FUN_004b25a4(uVar15 << 2,2);
      if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(2,uVar15 << 2);
      }
      iVar14 = 0;
      lVar16 = 2;
      local_80 = 0;
      local_90 = uVar15;
      pvStack_88 = pvVar11;
      do {
        uVar9 = local_80;
        FUN_00a69f78(&local_78,param_2);
        if (local_78 != -1) {
          *(char *)(param_1 + 1) = local_78;
          param_1[2] = local_70;
          local_65 = (undefined1)((uint)uStack_77 >> 0x18);
          *(undefined4 *)((long)param_1 + 9) = uStack_77;
          *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_73,local_65);
          *param_1 = 0xffffffffffffffff;
          goto joined_r0x00a1f47c;
        }
        uVar3 = local_70;
        if (0xfffe < local_70) {
          uVar3 = 0xffff;
        }
        pcVar12 = (char *)*param_2;
        lVar5 = param_2[1];
        if (local_70 == 1) {
          iVar14 = iVar14 + 1;
        }
        if (lVar5 == 0) {
          uVar13 = 0x11;
LAB_00a1f460:
          param_1[2] = (ulong)pcVar12;
          *(undefined1 *)(param_1 + 1) = uVar13;
          *(short *)((long)param_1 + 10) = (short)unaff_w27;
          *param_1 = 0xffffffffffffffff;
          goto joined_r0x00a1f47c;
        }
        cVar8 = *pcVar12;
        *param_2 = (long)(pcVar12 + 1);
        param_2[1] = lVar5 + -1;
        uVar2 = (int)cVar8;
        if (cVar8 < 0) {
          pcVar10 = pcVar12 + 1;
          if (lVar5 + -1 == 0) {
LAB_00a1f450:
            pcVar12 = pcVar10;
            uVar13 = 0x11;
            goto LAB_00a1f460;
          }
          cVar7 = pcVar12[1];
          uVar2 = (int)cVar8 & 0x7fU | ((int)cVar7 & 0x7fU) << 7;
          *param_2 = (long)(pcVar12 + 2);
          param_2[1] = lVar5 + -2;
          if (cVar7 < 0) {
            pcVar10 = pcVar12 + 2;
            if (lVar5 + -2 == 0) goto LAB_00a1f450;
            bVar6 = pcVar12[2];
            pcVar12 = pcVar12 + 3;
            *param_2 = (long)pcVar12;
            param_2[1] = lVar5 + -3;
            if (3 < bVar6) {
              uVar13 = 6;
              goto LAB_00a1f460;
            }
            uVar2 = uVar2 | (uint)bVar6 << 0xe;
          }
        }
        unaff_w27 = uVar2;
        if (uVar9 == local_90) {
                    /* try { // try from 00a1f364 to 00a1f36b has its CatchHandler @ 00a1f4bc */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::line::FileEntryFormat>>::
          grow_one(&local_90);
          pvVar11 = pvStack_88;
        }
        local_80 = uVar9 + 1;
        puVar1 = (undefined2 *)((long)pvVar11 + lVar16);
        lVar16 = lVar16 + 4;
        puVar1[-1] = (short)uVar3;
        *puVar1 = (short)unaff_w27;
      } while (uVar15 != local_80);
      if (iVar14 == 1) {
        param_1[1] = (ulong)pvStack_88;
        *param_1 = local_90;
        param_1[2] = local_80;
        return;
      }
    }
    *(undefined1 *)(param_1 + 1) = 0x41;
    *param_1 = 0xffffffffffffffff;
joined_r0x00a1f47c:
    if (local_90 != 0) {
      free(pvStack_88);
    }
  }
  return;
}


// ===== 00a1f4e0  FUN_00a1f4e0 =====

void FUN_00a1f4e0(ulong *param_1,byte *param_2)

{
  bool bVar1;
  char *__src;
  ulong uVar2;
  ulong __n;
  ulong uVar3;
  
  __n = (ulong)*param_2 - 5;
  if (*param_2 < 6) {
    __n = 0;
  }
  if ((long)__n < 2) {
    if (__n == 0) {
      __src = *(char **)(param_2 + 0x28);
      __n = *(ulong *)(param_2 + 0x30);
      uVar3 = param_1[2];
      goto joined_r0x00a1f564;
    }
    __src = &DAT_003826b6;
    uVar3 = param_1[2];
joined_r0x00a1f5a8:
    if (uVar3 == 0) goto LAB_00a1f5ac;
LAB_00a1f580:
    bVar1 = *(char *)(param_1[1] + uVar3 + -1) != '/';
    if (__n == 0) goto LAB_00a1f5d8;
LAB_00a1f5b4:
    if (*__src != '/') goto LAB_00a1f5d8;
    uVar3 = 0;
    param_1[2] = 0;
    if (*param_1 < __n) goto LAB_00a1f638;
  }
  else {
    if (__n == 2) {
      __src = &DAT_0038293e;
      __n = 1;
      uVar3 = param_1[2];
    }
    else {
      if (__n != 3) {
        __src = *(char **)(param_2 + 8);
        __n = *(ulong *)(param_2 + 0x10);
        uVar3 = param_1[2];
        goto joined_r0x00a1f5a8;
      }
      __src = &DAT_0038293f;
      __n = 2;
      uVar3 = param_1[2];
    }
joined_r0x00a1f564:
    if (uVar3 != 0) goto LAB_00a1f580;
LAB_00a1f5ac:
    bVar1 = false;
    if (__n != 0) goto LAB_00a1f5b4;
LAB_00a1f5d8:
    uVar2 = *param_1;
    if (bVar1) {
      if (uVar2 == uVar3) {
        FUN_00a29778(param_1,uVar3,1,1,1);
        uVar3 = param_1[2];
        uVar2 = *param_1;
      }
      *(undefined1 *)(param_1[1] + uVar3) = 0x2f;
      uVar3 = uVar3 + 1;
      param_1[2] = uVar3;
    }
    if (uVar2 - uVar3 < __n) {
LAB_00a1f638:
      FUN_00a29778(param_1,uVar3,__n,1,1);
      uVar3 = param_1[2];
    }
    else if (__n == 0) goto LAB_00a1f61c;
  }
  memcpy((void *)(param_1[1] + uVar3),__src,__n);
LAB_00a1f61c:
  param_1[2] = uVar3 + __n;
  return;
}


// ===== 00a1f68c  FUN_00a1f68c =====

void FUN_00a1f68c(void)

{
  undefined1 uStack_11;
  
  FUN_00a6afc8(&uStack_11,&DAT_003820d8,0x7b);
  FUN_00a1ff48();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a1f6b4  std::panicking::begin_panic<&str> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::panicking::begin_panic<&str> */

void __rustcall
std::panicking::begin_panic<&str>(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  puVar3 = (undefined8 *)
           sys::backtrace::
           __rust_end_short_backtrace<std::panicking::begin_panic<&str>::_closure_0_,_>(&local_28);
  plVar4 = (long *)*puVar3;
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<gimli[1de8a57408df84df]::read::dwarf::Dwarf<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>>
    ::drop_slow(puVar3);
  }
  FUN_00a209b0(puVar3 + 1);
  FUN_00a20a80(puVar3[5],puVar3[6]);
  return;
}


// ===== 00a1f6d0  FUN_00a1f6d0 =====

void FUN_00a1f6d0(undefined8 *param_1)

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
                    /* try { // try from 00a1f6fc to 00a1f703 has its CatchHandler @ 00a1f71c */
    <alloc[c1f8e832b0d782c7]::sync::Arc<gimli[1de8a57408df84df]::read::dwarf::Dwarf<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>>
    ::drop_slow(param_1);
  }
                    /* try { // try from 00a1f704 to 00a1f70b has its CatchHandler @ 00a1f72c */
  FUN_00a209b0(param_1 + 1);
  FUN_00a20a80(param_1[5],param_1[6]);
  return;
}


// ===== 00a1f744  FUN_00a1f744 =====

void FUN_00a1f744(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
                    /* try { // try from 00a1f758 to 00a1f763 has its CatchHandler @ 00a1f7a0 */
    <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop(param_1 + 1);
    plVar3 = (long *)param_1[1];
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
        <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow
                  (param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 00a1f7d8  FUN_00a1f7d8 =====

void FUN_00a1f7d8(undefined8 *param_1)

{
  if (((void *)*param_1 != (void *)0x0) && (param_1[1] != 0)) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00a1f7fc  FUN_00a1f7fc =====

void FUN_00a1f7fc(long *param_1)

{
  if (*param_1 != -2) {
    if (param_1[0x14] != 0) {
      free((void *)param_1[0x15]);
    }
    if (param_1[0x17] != 0) {
      free((void *)param_1[0x18]);
    }
    if (param_1[0x1a] != 0) {
      free((void *)param_1[0x1b]);
    }
    if (param_1[0x1d] != 0) {
      free((void *)param_1[0x1e]);
      return;
    }
  }
  return;
}


// ===== 00a1f890  FUN_00a1f890 =====

int FUN_00a1f890(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != -1) {
    iVar1 = close(iVar1);
    return iVar1;
  }
  return iVar1;
}


// ===== 00a1f8a4  FUN_00a1f8a4 =====

void FUN_00a1f8a4(undefined8 *param_1)

{
  undefined1 *__ptr;
  long lVar1;
  
  __ptr = (undefined1 *)*param_1;
  if ((__ptr != (undefined1 *)0x0) && (lVar1 = param_1[1], *__ptr = 0, lVar1 != 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a1f8c8  FUN_00a1f8c8 =====

int * FUN_00a1f8c8(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 3) {
    uVar1 = close(param_1[1]);
    return (int *)(ulong)uVar1;
  }
  return param_1;
}


// ===== 00a1f8e0  FUN_00a1f8e0 =====

void FUN_00a1f8e0(char param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((param_1 == -1) && (param_2 != (void *)0x0)) {
    plVar3 = *(long **)((long)param_2 + 0x1e0);
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
                    /* try { // try from 00a1f91c to 00a1f923 has its CatchHandler @ 00a1f998 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<gimli[1de8a57408df84df]::read::dwarf::Dwarf<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>>
      ::drop_slow((long)param_2 + 0x1e0);
    }
    plVar3 = *(long **)((long)param_2 + 0x1a8);
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
                    /* try { // try from 00a1f940 to 00a1f947 has its CatchHandler @ 00a1f974 */
      <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
                ((long)param_2 + 0x1a8);
    }
    FUN_00a1f7fc((long)param_2 + 0x10);
    free(param_2);
    return;
  }
  return;
}


// ===== 00a1f9c0  FUN_00a1f9c0 =====

void FUN_00a1f9c0(undefined8 *param_1)

{
  void *__ptr;
  long lVar1;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      plVar2 = (long *)((long)__ptr + 0x10);
      do {
        if ((plVar2[-2] != 0) && ((void *)plVar2[-1] != (void *)0x0)) {
          if (*plVar2 != 0) {
            free((void *)plVar2[-1]);
          }
          if (plVar2[2] != 0) {
            free((void *)plVar2[1]);
          }
        }
        lVar1 = lVar1 + -1;
        plVar2 = plVar2 + 9;
      } while (lVar1 != 0);
      free(__ptr);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  return;
}


// ===== 00a1fa98  FUN_00a1fa98 =====

void FUN_00a1fa98(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  
  piVar1 = (int *)param_1[1];
  if (*param_1 == 0) {
    if ((((*(byte *)(param_1 + 2) & 1) == 0) &&
        ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
       (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
      *(undefined1 *)(piVar1 + 2) = 1;
    }
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -0x3fffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if ((((*(byte *)(param_1 + 2) & 1) == 0) &&
        ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
       (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
      *(undefined1 *)(piVar1 + 2) = 1;
    }
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -0x3fffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar5 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 00a1fb78  FUN_00a1fb78 =====

int * FUN_00a1fb78(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  long local_18;
  
  if (*param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 2) & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_18 = *(ulong *)(param_1 + 2) - 1;
      param_1 = (int *)<core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
    return param_1;
  }
  uVar1 = close(param_1[1]);
  return (int *)(ulong)uVar1;
}


// ===== 00a1fbd4  FUN_00a1fbd4 =====

void FUN_00a1fbd4(long param_1,void *param_2)

{
  long local_18;
  
  if (param_1 == -1) {
    if ((1 < ((ulong)param_2 & 3) - 2) && (((ulong)param_2 & 3) != 0)) {
      local_18 = (long)param_2 + -1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else if (param_1 != 0) {
    free(param_2);
    return;
  }
  return;
}


// ===== 00a1fc3c  FUN_00a1fc3c =====

void FUN_00a1fc3c(ulong param_1,int param_2)

{
  long local_18;
  
  if (((param_2 == -1) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    return;
  }
  return;
}


// ===== 00a1fc90  FUN_00a1fc90 =====

void FUN_00a1fc90(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          free((void *)*puVar4);
        }
        lVar2 = lVar2 + -1;
        puVar4 = puVar4 + 3;
      } while (lVar2 != 0);
      free(pvVar1);
    }
    lVar2 = param_1[3];
    if (lVar2 != 0) {
      pvVar1 = (void *)param_1[2];
      plVar3 = (long *)((long)pvVar1 + 8);
      do {
        if (*plVar3 != 0) {
          free((void *)plVar3[-1]);
        }
        lVar2 = lVar2 + -1;
        plVar3 = plVar3 + 4;
      } while (lVar2 != 0);
      free(pvVar1);
      return;
    }
  }
  return;
}


// ===== 00a1fd74  FUN_00a1fd74 =====

void FUN_00a1fd74(short param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 == 2) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a1fdc8  FUN_00a1fdc8 =====

void FUN_00a1fdc8(int param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a1fe14  FUN_00a1fe14 =====

void FUN_00a1fe14(char param_1)

{
  if (param_1 == -2) {
    return;
  }
  FUN_00a1f8e0();
  return;
}


// ===== 00a1fe28  FUN_00a1fe28 =====

void FUN_00a1fe28(long *param_1)

{
  if ((*param_1 != 0) && ((void *)param_1[1] != (void *)0x0)) {
    if (param_1[2] != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[4] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  return;
}


// ===== 00a1fe8c  FUN_00a1fe8c =====

void FUN_00a1fe8c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00a1f9c0(param_1 + 1);
    return;
  }
  return;
}


// ===== 00a1fe9c  FUN_00a1fe9c =====

void FUN_00a1fe9c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00a1fc90(param_1 + 1);
    return;
  }
  return;
}


// ===== 00a1feac  FUN_00a1feac =====

void FUN_00a1feac(long param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 == 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    return;
  }
  return;
}


// ===== 00a1fefc  FUN_00a1fefc =====

void FUN_00a1fefc(long param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a1ff48  FUN_00a1ff48 =====

void FUN_00a1ff48(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a1ff94  FUN_00a1ff94 =====

void FUN_00a1ff94(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
                    /* try { // try from 00a1ffa8 to 00a1ffaf has its CatchHandler @ 00a1ffdc */
  FUN_00a220e0(__ptr,param_1[2]);
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a20000  FUN_00a20000 =====

void FUN_00a20000(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00a20030 to 00a20033 has its CatchHandler @ 00a2007c */
    FUN_00a20870(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x250);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a200c4  FUN_00a200c4 =====

void FUN_00a200c4(long *param_1)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar7 = 0;
    do {
      lVar1 = lVar7 + 1;
      plVar5 = *(long **)((long)__ptr + lVar7 * 0x1f0 + 0x1a8);
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
                    /* try { // try from 00a20138 to 00a2013f has its CatchHandler @ 00a2018c */
        <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
                  ((long)__ptr + lVar7 * 0x1f0 + 0x1a8);
      }
      FUN_00a1f7fc((long)__ptr + lVar7 * 0x1f0 + 0x10);
      lVar7 = lVar1;
    } while (lVar1 != lVar2);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a201dc  FUN_00a201dc =====

void FUN_00a201dc(long *param_1)

{
  void *__ptr;
  long lVar1;
  long *plVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (long *)((long)__ptr + 0x10);
    do {
      if ((plVar2[-2] != 0) && ((void *)plVar2[-1] != (void *)0x0)) {
        if (*plVar2 != 0) {
          free((void *)plVar2[-1]);
        }
        if (plVar2[2] != 0) {
          free((void *)plVar2[1]);
        }
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a20288  FUN_00a20288 =====

void FUN_00a20288(long *param_1)

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


// ===== 00a20308  FUN_00a20308 =====

void FUN_00a20308(long *param_1)

{
  void *__ptr;
  long lVar1;
  long *plVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (long *)((long)__ptr + 8);
    do {
      if (*plVar2 != 0) {
        free((void *)plVar2[-1]);
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 4;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a2038c  FUN_00a2038c =====

void FUN_00a2038c(long *param_1)

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


// ===== 00a2040c  FUN_00a2040c =====

void FUN_00a2040c(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x20);
    do {
      if (puVar2[-4] != 0) {
        free((void *)puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 6;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a204a0  FUN_00a204a0 =====

void FUN_00a204a0(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a204b8  FUN_00a204b8 =====

void FUN_00a204b8(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>::
    drop_slow();
    return;
  }
  return;
}


// ===== 00a204dc  FUN_00a204dc =====

void FUN_00a204dc(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow();
    return;
  }
  return;
}


// ===== 00a20500  FUN_00a20500 =====

void FUN_00a20500(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x110);
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
                    /* try { // try from 00a20530 to 00a20537 has its CatchHandler @ 00a20548 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<gimli[1de8a57408df84df]::read::dwarf::Dwarf<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>>
      ::drop_slow(param_1 + 0x110);
    }
  }
  FUN_00a21a40(param_1 + 0x118);
  return;
}


// ===== 00a20560  FUN_00a20560 =====

void FUN_00a20560(long param_1)

{
                    /* try { // try from 00a20570 to 00a20577 has its CatchHandler @ 00a205a0 */
  <std::sys::fs::unix::DirStream_as_core::ops::drop::Drop>::drop(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a205c0  FUN_00a205c0 =====

void FUN_00a205c0(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00a205e0 to 00a205e7 has its CatchHandler @ 00a20618 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00a20638  FUN_00a20638 =====

void FUN_00a20638(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  pcVar1 = (code *)*puVar2;
  if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00a2065c to 00a20663 has its CatchHandler @ 00a20694 */
    (*pcVar1)(*param_1);
  }
  if (puVar2[1] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00a206b4  FUN_00a206b4 =====

void FUN_00a206b4(undefined8 *param_1)

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
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
    ::drop_slow(param_1);
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar5 = (code *)*puVar1;
  if (pcVar5 != (code *)0x0) {
                    /* try { // try from 00a206f8 to 00a206ff has its CatchHandler @ 00a20730 */
    (*pcVar5)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 00a20764  FUN_00a20764 =====

void FUN_00a20764(void *param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (long *)((long)param_1 + 0x10);
    do {
      if ((plVar1[-2] != 0) && ((void *)plVar1[-1] != (void *)0x0)) {
        if (*plVar1 != 0) {
          free((void *)plVar1[-1]);
        }
        if (plVar1[2] != 0) {
          free((void *)plVar1[1]);
        }
      }
      param_2 = param_2 + -1;
      plVar1 = plVar1 + 9;
    } while (param_2 != 0);
    free(param_1);
    return;
  }
  return;
}


// ===== 00a20800  FUN_00a20800 =====

void FUN_00a20800(void *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((long)param_1 + 8);
    do {
      if (puVar1[-1] != 0) {
        free((void *)*puVar1);
      }
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 3;
    } while (param_2 != 0);
    free(param_1);
    return;
  }
  return;
}


// ===== 00a20870  FUN_00a20870 =====

void FUN_00a20870(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x1a8);
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
                    /* try { // try from 00a2089c to 00a208a3 has its CatchHandler @ 00a208f4 */
    <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
              (param_1 + 0x1a8);
  }
  FUN_00a1f7fc(param_1 + 0x10);
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_00a1fc90(param_1 + 0x200);
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    FUN_00a1f9c0(param_1 + 0x228);
  }
  if (*(char *)(param_1 + 0x1e0) == -2) {
    return;
  }
  FUN_00a1f8e0(*(char *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8));
  return;
}


// ===== 00a20958  FUN_00a20958 =====

void FUN_00a20958(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x1a8);
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
                    /* try { // try from 00a20984 to 00a2098b has its CatchHandler @ 00a2099c */
    <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
              (param_1 + 0x1a8);
  }
  FUN_00a1f7fc(param_1 + 0x10);
  return;
}


// ===== 00a209b0  FUN_00a209b0 =====

void FUN_00a209b0(undefined8 *param_1)

{
  void *__ptr;
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_1[1] != 0) {
    free((void *)*param_1);
  }
  __ptr = (void *)param_1[2];
  lVar1 = param_1[3];
  lVar3 = lVar1 + 1;
  pvVar2 = __ptr;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00a209f8 to 00a209fb has its CatchHandler @ 00a20a40 */
    FUN_00a20870(pvVar2);
    pvVar2 = (void *)((long)pvVar2 + 0x250);
  }
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a20a80  FUN_00a20a80 =====

void FUN_00a20a80(void *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 != 0) {
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 1;
      plVar4 = *(long **)((long)param_1 + lVar6 * 0x1f0 + 0x1a8);
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
                    /* try { // try from 00a20af4 to 00a20afb has its CatchHandler @ 00a20b40 */
        <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
                  ((long)param_1 + lVar6 * 0x1f0 + 0x1a8);
      }
      FUN_00a1f7fc((long)param_1 + lVar6 * 0x1f0 + 0x10);
      lVar6 = lVar1;
    } while (lVar1 != param_2);
    free(param_1);
    return;
  }
  return;
}


// ===== 00a20b88  FUN_00a20b88 =====

void FUN_00a20b88(long *param_1)

{
  if ((*param_1 != 0) && ((void *)param_1[1] != (void *)0x0)) {
    if (param_1[2] != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[4] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  return;
}


// ===== 00a20bec  FUN_00a20bec =====

void FUN_00a20bec(pthread_attr_t *param_1)

{
  undefined8 in_x4;
  int local_14;
  
  local_14 = pthread_attr_destroy(param_1);
  if (local_14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed<i32,i32>
            (0,&local_14,"",0,in_x4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afac50);
}


// ===== 00a20c30  FUN_00a20c30 =====

void FUN_00a20c30(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *(int *)((long)param_1 + 0xc) + -1;
  *(int *)((long)param_1 + 0xc) = iVar4;
  if (iVar4 == 0) {
    piVar1 = (int *)(param_1 + 1);
    *param_1 = 0;
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return;
    }
  }
  return;
}


// ===== 00a20c70  FUN_00a20c70 =====

void FUN_00a20c70(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    free(*(void **)(param_1 + 0xa8));
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    free(*(void **)(param_1 + 0xc0));
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    free(*(void **)(param_1 + 0xd8));
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    free(*(void **)(param_1 + 0xf0));
    return;
  }
  return;
}


// ===== 00a20cf8  FUN_00a20cf8 =====

void FUN_00a20cf8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x1a8);
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
                    /* try { // try from 00a20d24 to 00a20d2b has its CatchHandler @ 00a20d3c */
    <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
              (param_1 + 0x1a8);
  }
  FUN_00a1f7fc(param_1 + 0x10);
  return;
}


// ===== 00a20d50  FUN_00a20d50 =====

void FUN_00a20d50(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x100);
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
                    /* try { // try from 00a20d80 to 00a20d87 has its CatchHandler @ 00a20d98 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<gimli[1de8a57408df84df]::read::dwarf::Dwarf<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>>
      ::drop_slow(param_1 + 0x100);
    }
  }
  FUN_00a21a40(param_1 + 0x108);
  return;
}


// ===== 00a20db0  FUN_00a20db0 =====

void FUN_00a20db0(undefined8 *param_1)

{
                    /* try { // try from 00a20dd0 to 00a20dd3 has its CatchHandler @ 00a20e00 */
  FUN_00a220e0(param_1[1],(ulong)(param_1[3] - param_1[1]) >> 4);
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00a20e24  FUN_00a20e24 =====

void FUN_00a20e24(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00a20e38 to 00a20e3b has its CatchHandler @ 00a20e80 */
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
                    /* try { // try from 00a20e5c to 00a20e63 has its CatchHandler @ 00a20e78 */
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow(param_1);
    }
  }
  free(param_1);
  return;
}


// ===== 00a20eec  FUN_00a20eec =====

void FUN_00a20eec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00a20efc to 00a20eff has its CatchHandler @ 00a20f3c */
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


// ===== 00a20f74  FUN_00a20f74 =====

void FUN_00a20f74(int *param_1,ulong param_2)

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
  syscall(0x62,param_1,0x81,1);
  return;
}


// ===== 00a20ff4  FUN_00a20ff4 =====

void FUN_00a20ff4(uint *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  
  do {
    uVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar1 - 1 & 0xbfffffff) != 0x80000000) {
    return;
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers();
  return;
}


// ===== 00a2101c  FUN_00a2101c =====

void FUN_00a2101c(long *param_1)

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
  FUN_00a4a3c4(local_38,&local_80);
  while (local_38[0] != 0) {
    lVar1 = local_38[0] + local_28 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      free(*(void **)(lVar1 + 0x10));
    }
    if (*(long *)(lVar1 + 0x110) != 0) {
      free(*(void **)(lVar1 + 0x118));
    }
    FUN_00a4a3c4(local_38,&local_80);
  }
  return;
}


// ===== 00a210d4  FUN_00a210d4 =====

void FUN_00a210d4(long *param_1)

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
  FUN_00a4a3c4(local_38,&local_80);
  while (local_38[0] != 0) {
    lVar1 = local_38[0] + local_28 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      free(*(void **)(lVar1 + 0x10));
    }
    if (0 < *(long *)(lVar1 + 0x110)) {
      free(*(void **)(lVar1 + 0x118));
    }
    FUN_00a4a3c4(local_38,&local_80);
  }
  return;
}


// ===== 00a21190  FUN_00a21190 =====

void FUN_00a21190(undefined8 param_1)

{
  long lVar1;
  long local_48 [2];
  long local_38;
  
  FUN_00a4a3c4(local_48,param_1);
  while (local_48[0] != 0) {
    lVar1 = local_48[0] + local_38 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      free(*(void **)(lVar1 + 0x10));
    }
    if (*(long *)(lVar1 + 0x110) != 0) {
      free(*(void **)(lVar1 + 0x118));
    }
    FUN_00a4a3c4(local_48,param_1);
  }
  return;
}


// ===== 00a21220  FUN_00a21220 =====

void FUN_00a21220(long *param_1)

{
  ulong uVar1;
  long local_28;
  
                    /* try { // try from 00a2123c to 00a21277 has its CatchHandler @ 00a2129c */
  if (((((*(byte *)(param_1 + 3) & 1) == 0) && (uVar1 = FUN_00a400a4(param_1), uVar1 != 0)) &&
      (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    local_28 = uVar1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  return;
}


// ===== 00a212bc  FUN_00a212bc =====

int FUN_00a212bc(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    free((void *)*param_1);
  }
  iVar1 = close(*(int *)(param_1 + 5));
  return iVar1;
}


// ===== 00a212f0  FUN_00a212f0 =====

void FUN_00a212f0(long param_1)

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


// ===== 00a21340  FUN_00a21340 =====

void FUN_00a21340(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long local_38 [2];
  long local_28;
  
  while( true ) {
    FUN_00a4a5d4(local_38,param_1);
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


// ===== 00a213b0  FUN_00a213b0 =====

void FUN_00a213b0(long *param_1)

{
  if (0 < *param_1) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a213cc  FUN_00a213cc =====

void FUN_00a213cc(long *param_1)

{
  void *__ptr;
  long local_18;
  
  __ptr = (void *)param_1[1];
  if (*param_1 == -1) {
    if ((1 < ((ulong)__ptr & 3) - 2) && (((ulong)__ptr & 3) != 0)) {
      local_18 = (long)__ptr + -1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a2142c  FUN_00a2142c =====

void FUN_00a2142c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 0x20);
    uVar1 = uVar1 / 0x30;
    do {
      if (puVar2[-4] != 0) {
        free((void *)puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 6;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00a214d8  FUN_00a214d8 =====

void FUN_00a214d8(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a214f0  FUN_00a214f0 =====

int FUN_00a214f0(int *param_1)

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


// ===== 00a21544  FUN_00a21544 =====

int FUN_00a21544(long param_1)

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


// ===== 00a21598  FUN_00a21598 =====

void FUN_00a21598(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  long lVar1;
  long *plVar2;
  
  __ptr = *(void **)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    plVar2 = (long *)((long)__ptr + 0x20);
    do {
      if (0 < *plVar2) {
        free((void *)plVar2[1]);
      }
      if (plVar2[-4] != 2) {
        if (plVar2[-4] == 0) {
          if (plVar2[-3] != 0) {
            __ptr_00 = (void *)plVar2[-2];
            goto LAB_00a215bc;
          }
        }
        else if (plVar2[-3] != 0) {
          __ptr_00 = (void *)plVar2[-2];
LAB_00a215bc:
          free(__ptr_00);
        }
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a21658  FUN_00a21658 =====

void FUN_00a21658(long *param_1)

{
  if (0 < param_1[4]) {
    free((void *)param_1[5]);
  }
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      if (param_1[1] != 0) {
        free((void *)param_1[2]);
        return;
      }
    }
    else if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  return;
}


// ===== 00a216d8  FUN_00a216d8 =====

void FUN_00a216d8(long *param_1)

{
  void *pvVar1;
  void *__ptr;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  pvVar1 = __ptr;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_00a21598(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x38);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a21744  FUN_00a21744 =====

void FUN_00a21744(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a2175c  FUN_00a2175c =====

void FUN_00a2175c(ulong *param_1)

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


// ===== 00a217ac  FUN_00a217ac =====

void FUN_00a217ac(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a217c4  FUN_00a217c4 =====

void FUN_00a217c4(undefined8 *param_1)

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
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
    ::drop_slow();
    return;
  }
  return;
}


// ===== 00a217e8  FUN_00a217e8 =====

void FUN_00a217e8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00a217f8 to 00a217fb has its CatchHandler @ 00a21838 */
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


// ===== 00a21870  FUN_00a21870 =====

void FUN_00a21870(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar4 = (code *)*puVar1;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00a21890 to 00a21897 has its CatchHandler @ 00a218f0 */
    (*pcVar4)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  plVar5 = (long *)param_1[2];
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
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow
                (param_1 + 2);
      return;
    }
  }
  return;
}


// ===== 00a21928  FUN_00a21928 =====

void FUN_00a21928(long *param_1)

{
  void *__ptr;
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
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
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)((long)__ptr + 0x10);
    do {
      if ((puVar3[-2] != 0) && (puVar3[-1] != 0)) {
        free((void *)*puVar3);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 0xe;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
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
  FUN_00a4a7e4(local_48,&local_90);
  while (local_48[0] != 0) {
    plVar1 = (long *)(local_48[0] + local_38 * 0x70);
    if ((*plVar1 != 0) && (plVar1[1] != 0)) {
      free((void *)plVar1[2]);
    }
    FUN_00a4a7e4(local_48,&local_90);
  }
  return;
}


// ===== 00a21a40  FUN_00a21a40 =====

void FUN_00a21a40(long *param_1)

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
    FUN_00a4a5d4(local_38,local_80);
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
                    /* try { // try from 00a21ac8 to 00a21acb has its CatchHandler @ 00a21ae0 */
        <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow();
      }
    }
  }
  return;
}


// ===== 00a21af8  FUN_00a21af8 =====

void FUN_00a21af8(undefined8 *param_1)

{
  undefined1 *__ptr;
  long lVar1;
  
  __ptr = (undefined1 *)*param_1;
  lVar1 = param_1[1];
  *__ptr = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a21b18  FUN_00a21b18 =====

void FUN_00a21b18(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a21b30  FUN_00a21b30 =====

void FUN_00a21b30(ulong param_1)

{
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_003836ca,0x55,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbf08);
}


// ===== 00a21b58  FUN_00a21b58 =====

void FUN_00a21b58(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    free(*(void **)(param_1 + 0x30));
    return;
  }
  return;
}


// ===== 00a21ba8  FUN_00a21ba8 =====

int FUN_00a21ba8(int *param_1)

{
  int iVar1;
  
  iVar1 = close(*param_1);
  return iVar1;
}


// ===== 00a21bb0  FUN_00a21bb0 =====

void FUN_00a21bb0(undefined8 *param_1)

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
                    /* try { // try from 00a21bdc to 00a21be3 has its CatchHandler @ 00a21c0c */
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


// ===== 00a21c2c  FUN_00a21c2c =====

void FUN_00a21c2c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 0x20);
    uVar1 = uVar1 / 0x30;
    do {
      if (puVar2[-4] != 0) {
        free((void *)puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 6;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00a21cd8  FUN_00a21cd8 =====

void FUN_00a21cd8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 8);
    uVar1 = uVar1 / 0x18;
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00a21d70  FUN_00a21d70 =====

void FUN_00a21d70(long *param_1)

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
  FUN_00a4a3c4(local_38,&local_80);
  while (local_38[0] != 0) {
    lVar1 = local_38[0] + local_28 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      free(*(void **)(lVar1 + 0x10));
    }
    if (0 < *(long *)(lVar1 + 0x110)) {
      free(*(void **)(lVar1 + 0x118));
    }
    FUN_00a4a3c4(local_38,&local_80);
  }
  return;
}


// ===== 00a21e2c  FUN_00a21e2c =====

void FUN_00a21e2c(long param_1,void *param_2)

{
  if (param_1 != 0) {
    free(param_2);
    return;
  }
  return;
}


// ===== 00a21e4c  FUN_00a21e4c =====

void FUN_00a21e4c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t *psVar4;
  
  pvVar1 = (void *)param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)((long)pvVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        free((void *)*puVar3);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    psVar4 = (size_t *)((long)pvVar1 + 8);
    do {
      munmap((void *)psVar4[-1],*psVar4);
      lVar2 = lVar2 + -1;
      psVar4 = psVar4 + 2;
    } while (lVar2 != 0);
  }
  if (param_1[3] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00a21f04  FUN_00a21f04 =====

uint * FUN_00a21f04(uint *param_1)

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


// ===== 00a21f7c  FUN_00a21f7c =====

void FUN_00a21f7c(long *param_1)

{
  long lVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_1[2] + -1;
  if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,lVar1,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbf78)
    ;
  }
  __ptr = (undefined8 *)param_1[1];
  if (lVar1 != 0) {
    lVar1 = lVar1 * 8;
    puVar2 = __ptr;
    do {
                    /* try { // try from 00a21fbc to 00a21fbf has its CatchHandler @ 00a22020 */
      auVar3 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_raw(*puVar2);
      *auVar3._0_8_ = 0;
      if (auVar3._8_8_ != 0) {
        free(auVar3._0_8_);
      }
      lVar1 = lVar1 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a2204c  FUN_00a2204c =====

void FUN_00a2204c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  pcVar1 = (code *)*puVar2;
  if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00a22070 to 00a22077 has its CatchHandler @ 00a220a8 */
    (*pcVar1)(*param_1);
  }
  if (puVar2[1] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00a220c8  FUN_00a220c8 =====

void FUN_00a220c8(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a220e0  FUN_00a220e0 =====

void FUN_00a220e0(long param_1,long param_2)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      __ptr = *(void **)(param_1 + -0x18);
      puVar1 = *(undefined8 **)(param_1 + -0x10);
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00a22118 to 00a2211f has its CatchHandler @ 00a22148 */
        (*pcVar2)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 0x10;
    } while (param_2 != 0);
  }
  return;
}


// ===== 00a22188  FUN_00a22188 =====

void FUN_00a22188(long *param_1)

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


// ===== 00a221d4  FUN_00a221d4 =====

void FUN_00a221d4(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  if (0 < param_1[3]) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 00a22224  FUN_00a22224 =====

void FUN_00a22224(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x1f0);
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
                    /* try { // try from 00a22250 to 00a22257 has its CatchHandler @ 00a222a4 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<gimli[1de8a57408df84df]::read::dwarf::Dwarf<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>>
    ::drop_slow(param_1 + 0x1f0);
  }
                    /* try { // try from 00a22258 to 00a2225f has its CatchHandler @ 00a222bc */
  FUN_00a209b0(param_1 + 0x1f8);
                    /* try { // try from 00a22268 to 00a2226b has its CatchHandler @ 00a222b4 */
  FUN_00a20a80(*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220));
  if (*(long *)(param_1 + 8) != 0) {
    free(*(void **)(param_1 + 0x10));
  }
  munmap(*(void **)(param_1 + 0x228),*(size_t *)(param_1 + 0x230));
  FUN_00a21e4c(param_1 + 0x238);
  return;
}


// ===== 00a22308  core::panicking::assert_failed<[u8;4usize],&[u8]> =====

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
  assert_failed_inner(param_1,&local_20,&DAT_00afa848,&uStack_18,&DAT_00afa868,param_4,param_5,
                      param_6);
}


// ===== 00a22340  core::panicking::assert_failed<i32,i32> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<i32, i32> */

void __rustcall core::panicking::assert_failed<i32,i32>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_00a6b9c8(param_1,param_2,&DAT_00afa888);
}


// ===== 00a2235c  core::panicking::assert_failed<i16,i16> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<i16, i16> */

void __rustcall core::panicking::assert_failed<i16,i16>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_00a6b9c8(param_1,param_2,&DAT_00afa8a8);
}


// ===== 00a22378  FUN_00a22378 =====

void FUN_00a22378(size_t *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *__dest;
  ulong uVar3;
  size_t local_d8;
  undefined1 *puStack_d0;
  size_t local_c8;
  long local_c0 [4];
  long local_a0;
  void *pvStack_98;
  size_t local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined1 *local_80;
  size_t local_78;
  size_t local_70;
  undefined1 *puStack_68;
  size_t local_60;
  
  if (*(long *)(param_3 + 0x150) == 0) {
    uVar3 = *(ulong *)(param_4 + 0x50);
    local_d8 = 0;
joined_r0x00a223f8:
    puStack_d0 = &DAT_00000001;
    local_c8 = local_d8;
    if (uVar3 != 0) goto LAB_00a22440;
LAB_00a2251c:
    FUN_00a61fb8(&local_70,param_4);
    FUN_00a332d8(&local_88,param_2,*(undefined1 *)(param_3 + 0x1a1),*(undefined8 *)(param_3 + 0x1b8)
                 ,&local_70);
    puStack_68 = local_80;
    local_60 = local_78;
    if ((local_88 & 1) == 0) {
                    /* try { // try from 00a22564 to 00a2256b has its CatchHandler @ 00a22638 */
      <alloc::string::alloc::string::String>::from_utf8_lossy(&local_a0);
      if (local_a0 != -2) {
                    /* try { // try from 00a225a0 to 00a225ab has its CatchHandler @ 00a22618 */
        addr2line::line::path_push(&local_d8,pvStack_98);
        if (0 < local_a0) {
          free(pvStack_98);
        }
        param_1[1] = (size_t)puStack_d0;
        *param_1 = local_d8;
        param_1[2] = local_c8;
        return;
      }
      param_1[1] = (size_t)pvStack_98;
      param_1[2] = local_90;
      *param_1 = 0xffffffffffffffff;
      goto joined_r0x00a2258c;
    }
  }
  else {
    <alloc::string::alloc::string::String>::from_utf8_lossy
              (&local_70,*(long *)(param_3 + 0x150),*(undefined8 *)(param_3 + 0x158));
    local_c8 = local_60;
    puVar2 = puStack_68;
    if (local_70 == 0xffffffffffffffff) {
      if (local_60 == 0) {
        uVar3 = *(ulong *)(param_4 + 0x50);
        local_d8 = local_60;
        goto joined_r0x00a223f8;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)FUN_004b25a4(local_c8,1);
      if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,local_c8);
      }
      memcpy(__dest,puVar2,local_c8);
      local_d8 = local_c8;
    }
    else {
      local_d8 = local_70;
      __dest = puStack_68;
      if (local_70 == 0xfffffffffffffffe) {
        param_1[1] = (size_t)puStack_68;
        param_1[2] = local_60;
        *param_1 = 0xffffffffffffffff;
        return;
      }
    }
    uVar3 = *(ulong *)(param_4 + 0x50);
    puStack_d0 = __dest;
    if (uVar3 == 0) goto LAB_00a2251c;
LAB_00a22440:
    if (4 < *(ushort *)(param_5 + 0x11a)) {
      if (uVar3 < *(ulong *)(param_5 + 200)) goto LAB_00a2246c;
      goto LAB_00a2251c;
    }
    uVar3 = uVar3 - 1;
    if (*(ulong *)(param_5 + 200) <= uVar3) goto LAB_00a2251c;
LAB_00a2246c:
    FUN_00a61fb8(local_c0,*(long *)(param_5 + 0xc0) + uVar3 * 0x20);
    if (local_c0[0] == -1) goto LAB_00a2251c;
    FUN_00a332d8(&local_70,param_2,*(undefined1 *)(param_3 + 0x1a1),*(undefined8 *)(param_3 + 0x1b8)
                 ,local_c0);
    if (local_70 != 1) {
                    /* try { // try from 00a224b0 to 00a224b7 has its CatchHandler @ 00a22614 */
      <alloc::string::alloc::string::String>::from_utf8_lossy(&local_88);
      puVar2 = local_80;
      lVar1 = CONCAT44(uStack_84,local_88);
      if (lVar1 == -2) {
        param_1[1] = (size_t)local_80;
        param_1[2] = local_78;
        *param_1 = 0xffffffffffffffff;
        goto joined_r0x00a2258c;
      }
                    /* try { // try from 00a224f8 to 00a22503 has its CatchHandler @ 00a225fc */
      addr2line::line::path_push(&local_d8,local_80);
      if (0 < lVar1) {
        free(puVar2);
      }
      goto LAB_00a2251c;
    }
  }
  param_1[1] = (size_t)puStack_68;
  param_1[2] = local_60;
  *param_1 = 0xffffffffffffffff;
joined_r0x00a2258c:
  if (local_d8 != 0) {
    free(puStack_d0);
  }
  return;
}


// ===== 00a22658  FUN_00a22658 =====

void FUN_00a22658(undefined8 *param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 ulong param_5,undefined8 param_6,long param_7)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x28;
  undefined1 auVar11 [16];
  undefined8 local_138;
  long lStack_118;
  ulong local_110;
  long local_108;
  long local_100;
  long local_f8;
  uint local_f0;
  undefined4 local_e8;
  undefined3 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  ulong local_d8;
  undefined8 uStack_d0;
  ushort local_c0;
  uint local_a8 [2];
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  
  local_110 = *(ulong *)(param_4 + 0x180);
  lVar4 = 0xc;
  if (*(char *)(param_4 + 0x1a1) != '\b') {
    lVar4 = 4;
  }
  uVar5 = (*(long *)(param_4 + 0x188) - local_110) + lVar4;
  uVar6 = param_5 - uVar5;
  if (param_5 < uVar5 || local_110 <= uVar6) {
    lStack_118 = 0x35;
    local_110 = param_5;
LAB_00a226d0:
    param_1[1] = lStack_118;
    param_1[2] = local_110;
    *param_1 = 1;
    return;
  }
  uVar2 = *(uint *)(param_4 + 0x1a0);
  local_110 = local_110 - uVar6;
  lStack_118 = *(long *)(param_4 + 0x178) + uVar6;
  if ((uVar2 & 0xff00) == 0x300) goto LAB_00a226d0;
  local_108 = *(long *)(param_4 + 0x1a8) + 0x10;
  local_100 = local_110 + param_5;
  local_f8 = 0;
  local_f0 = uVar2;
  FUN_00a69f78(&local_e0,&lStack_118);
  if ((char)local_e0 == -1) {
    if (local_d8 == 0) {
      param_1[2] = param_5;
      *(undefined1 *)(param_1 + 1) = 0x34;
      goto LAB_00a22758;
    }
    if (local_d8 - 1 < *(ulong *)(local_108 + 0x10)) {
      lVar3 = *(long *)(local_108 + 8) + (local_d8 - 1) * 0x70;
LAB_00a227ac:
      if (*(char *)(lVar3 + 0x6a) == '\x01') {
        local_f8 = local_f8 + 1;
      }
      auVar11 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
      lVar4 = auVar11._0_8_;
      if (auVar11._8_8_ != 0) {
        lVar8 = auVar11._8_8_ << 4;
        uVar9 = *(undefined8 *)(param_4 + 0x1b8);
        lVar3 = 0;
        lVar10 = -1;
        do {
          <gimli::read::unit::[g]::gimli::read::unit::EntriesRaw<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>>
          ::read_attribute(&local_e0,&lStack_118,lVar4);
          if (CONCAT44(uStack_dc,local_e0) == -1) {
            *param_1 = 1;
            param_1[2] = uStack_d0;
            param_1[1] = local_d8;
            return;
          }
          if (local_c0 < 0x47) {
            if (local_c0 == 3) {
              FUN_00a43f68(&local_90,&local_e0);
              FUN_00a332d8(local_a8,param_3,uVar2 >> 8,uVar9,&local_90);
              if (local_a8[0] == 0) {
                lVar3 = local_a0;
                unaff_x28 = uStack_98;
              }
            }
            else if (local_c0 == 0x31) goto LAB_00a227f8;
          }
          else if (local_c0 == 0x47) {
LAB_00a227f8:
            FUN_00a43f68(&local_90,&local_e0);
            local_138 = uStack_88;
            lVar10 = local_90;
          }
          else if ((local_c0 == 0x2007) || (local_c0 == 0x6e)) {
            FUN_00a43f68(&local_90,&local_e0);
            FUN_00a332d8(local_a8,param_3,uVar2 >> 8,uVar9,&local_90);
            if ((local_a8[0] & 1) == 0) {
              param_1[1] = local_a0;
              param_1[2] = uStack_98;
              goto LAB_00a229a0;
            }
          }
          lVar8 = lVar8 + -0x10;
          lVar4 = lVar4 + 0x10;
        } while (lVar8 != 0);
        if (lVar3 != 0) {
          param_1[1] = lVar3;
          param_1[2] = unaff_x28;
          goto LAB_00a229a0;
        }
        if (lVar10 != -1) {
          FUN_00a229b4(param_1,lVar10,local_138,param_2,param_3,param_4,param_6,param_7 + -1);
          return;
        }
      }
      param_1[1] = 0;
LAB_00a229a0:
      *param_1 = 0;
      return;
    }
    lVar4 = *(long *)(local_108 + 0x18);
    if (lVar4 != 0) {
      lVar8 = *(long *)(local_108 + 0x20);
      do {
        lVar3 = lVar4 + -0x70;
        lVar10 = (ulong)*(ushort *)(lVar4 + 0x532) << 3;
        uVar5 = 0xffffffffffffffff;
        puVar7 = (ulong *)(lVar4 + 0x4d8);
        do {
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x532);
          if (lVar10 == 0) goto LAB_00a22930;
          lVar3 = lVar3 + 0x70;
          uVar6 = uVar5 + 1;
          lVar10 = lVar10 + -8;
          cVar1 = *puVar7 < local_d8;
          if (local_d8 < *puVar7) {
            cVar1 = -1;
          }
          uVar5 = uVar6;
          puVar7 = puVar7 + 1;
        } while (cVar1 == '\x01');
        if (cVar1 == '\0') goto LAB_00a227ac;
LAB_00a22930:
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        lVar4 = *(long *)(lVar4 + uVar6 * 8 + 0x538);
      } while( true );
    }
    local_e0._0_1_ = '\x10';
  }
  else {
    local_e8._0_3_ = (undefined3)((uint)local_e0 >> 8);
    local_e8._3_1_ = (undefined1)uStack_dc;
    uStack_e4 = (undefined3)((uint)uStack_dc >> 8);
  }
  *(char *)(param_1 + 1) = (char)local_e0;
  param_1[2] = local_d8;
  *(undefined4 *)((long)param_1 + 9) = local_e8;
  *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_e4,local_e8._3_1_);
LAB_00a22758:
  *param_1 = 1;
  return;
}


// ===== 00a229b4  FUN_00a229b4 =====

void FUN_00a229b4(undefined8 *param_1,long param_2,ulong param_3,undefined4 param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_8 != 0) {
    if (param_2 == 0xe) {
LAB_00a22b14:
      FUN_00a22658(param_1,param_4,param_5,param_6,param_3,param_7,param_8);
      return;
    }
    if (param_2 == 0xf) {
      FUN_00a32fac(local_58,param_7);
      if ((local_58[0] & 1) != 0) {
        param_1[1] = local_50;
        param_1[2] = uStack_48;
        *param_1 = 1;
        return;
      }
      FUN_00a22658(param_1,param_4,param_5,local_50,uStack_48,param_7,param_8);
      return;
    }
    if ((param_2 == 0x10) && (*(long *)(param_5 + 0x100) != 0)) {
      uVar4 = *(ulong *)(param_7 + 0x30);
      if (uVar4 != 0) {
        param_6 = *(long *)(param_7 + 0x28);
        if (uVar4 == 1) {
          lVar3 = 0;
        }
        else {
          lVar3 = 0;
          do {
            lVar2 = (uVar4 >> 1) + lVar3;
            if (*(ulong *)(param_6 + lVar2 * 0x1f0 + 0x1e0) <= param_3) {
              lVar3 = lVar2;
            }
            uVar4 = uVar4 - (uVar4 >> 1);
          } while (1 < uVar4);
        }
        uVar4 = *(ulong *)(param_6 + lVar3 * 0x1f0 + 0x1e0);
        if (uVar4 != param_3) {
          if (uVar4 < param_3) {
            lVar3 = lVar3 + 1;
          }
          if (((lVar3 != 0) &&
              (param_6 = param_6 + lVar3 * 0x1f0, *(char *)(param_6 + -0x4c) == '\t')) &&
             (uVar4 = param_3 - *(ulong *)(param_6 + -0x58), *(ulong *)(param_6 + -0x58) <= param_3)
             ) {
            lVar3 = 0xc;
            if (*(char *)(param_6 + -0x4f) != '\b') {
              lVar3 = 4;
            }
            uVar1 = (*(long *)(param_6 + -0x68) - *(ulong *)(param_6 + -0x70)) + lVar3;
            if (uVar1 <= uVar4 && uVar4 - uVar1 < *(ulong *)(param_6 + -0x70)) {
              param_6 = param_6 + -0x1f0;
              param_5 = *(long *)(param_5 + 0x100) + 0x10;
              param_4 = 1;
              param_3 = uVar4;
              goto LAB_00a22b14;
            }
          }
        }
      }
      param_1[1] = 0x34;
      param_1[2] = param_3;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00a22ba8  std::sys::backtrace::__rust_end_short_backtrace<std::panicking::begin_panic<&str>::{closure#0},!> =====

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
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined4 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_98;
  undefined3 uStack_94;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_00a2a4c0();
  pcStack_18 = __rust_end_short_backtrace<std::alloc::rust_oom::_closure_0_,_>;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00a2bbfc();
  pcStack_28 = __rust_end_short_backtrace<std::panicking::panic_handler::_closure_0_,_>;
  puStack_30 = (undefined1 *)&puStack_20;
  auVar10 = FUN_00a2bd84();
  plVar3 = auVar10._0_8_;
  pcStack_88 = FUN_00a22bcc;
  uStack_94 = 0;
  uStack_98 = 0;
  puStack_90 = (undefined1 *)&puStack_30;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar8 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar9 = (undefined2 *)(param_4 + 2);
    lVar5 = -1;
    lVar4 = -1;
    uStack_f8 = 0;
    uVar1 = 0;
    puStack_90 = (undefined1 *)&puStack_30;
    do {
      FUN_00a22e94(&lStack_c0,auVar10._8_8_,param_3 & 0xffffffff,*puVar9);
      if (lStack_c0 == -1) {
        plVar3[1] = (long)puStack_b8;
        plVar3[2] = lStack_b0;
        *plVar3 = -1;
        return;
      }
      uVar2 = puVar9[-1];
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          puStack_f0 = puStack_b8;
          lStack_e8 = lStack_b0;
          lStack_e0 = lStack_a8;
          lVar5 = lStack_c0;
        }
        else if (uVar2 == 2) {
          if (lStack_c0 < 5) {
            if (lStack_c0 == 2) {
              puVar6 = (undefined4 *)((ulong)puStack_b8 & 0xff);
            }
            else if (lStack_c0 == 3) {
              puVar6 = (undefined4 *)((ulong)puStack_b8 & 0xffff);
            }
            else if (lStack_c0 == 4) {
              puVar6 = (undefined4 *)((ulong)puStack_b8 & 0xffffffff);
            }
          }
          else if (lStack_c0 == 5) {
LAB_00a22e08:
            puVar6 = puStack_b8;
          }
          else if (lStack_c0 == 7) {
            if (-1 < (long)puStack_b8) goto LAB_00a22e08;
          }
          else if (lStack_c0 == 8) goto LAB_00a22e08;
        }
        else if (uVar2 == 3) {
          if (lStack_c0 < 5) {
            if (lStack_c0 == 2) {
              puVar7 = (undefined4 *)((ulong)puStack_b8 & 0xff);
            }
            else if (lStack_c0 == 3) {
              puVar7 = (undefined4 *)((ulong)puStack_b8 & 0xffff);
            }
            else if (lStack_c0 == 4) {
              puVar7 = (undefined4 *)((ulong)puStack_b8 & 0xffffffff);
            }
          }
          else if (lStack_c0 == 5) {
LAB_00a22df4:
            puVar7 = puStack_b8;
          }
          else if (lStack_c0 == 7) {
            if (-1 < (long)puStack_b8) goto LAB_00a22df4;
          }
          else if (lStack_c0 == 8) goto LAB_00a22df4;
        }
      }
      else if (uVar2 == 4) {
        if (lStack_c0 < 5) {
          if (lStack_c0 == 2) {
            puVar8 = (undefined4 *)((ulong)puStack_b8 & 0xff);
          }
          else if (lStack_c0 == 3) {
            puVar8 = (undefined4 *)((ulong)puStack_b8 & 0xffff);
          }
          else if (lStack_c0 == 4) {
            puVar8 = (undefined4 *)((ulong)puStack_b8 & 0xffffffff);
          }
        }
        else if (lStack_c0 == 5) {
LAB_00a22de0:
          puVar8 = puStack_b8;
        }
        else if (lStack_c0 == 7) {
          if (-1 < (long)puStack_b8) goto LAB_00a22de0;
        }
        else if (lStack_c0 == 8) goto LAB_00a22de0;
      }
      else if (uVar2 == 5) {
        if ((lStack_c0 == 1) && (lStack_b0 == 0x10)) {
          uStack_f8 = *(undefined8 *)((long)puStack_b8 + 7);
          uVar1 = *(undefined1 *)((long)puStack_b8 + 0xf);
          uStack_98._0_3_ = (undefined3)*puStack_b8;
          uStack_98._3_1_ = (undefined1)*(undefined4 *)((long)puStack_b8 + 3);
          uStack_94 = (undefined3)((uint)*(undefined4 *)((long)puStack_b8 + 3) >> 8);
        }
      }
      else if (uVar2 == 0x2001) {
        lVar4 = lStack_c0;
        puStack_d8 = puStack_b8;
        lStack_d0 = lStack_b0;
        lStack_c8 = lStack_a8;
      }
      param_5 = param_5 + -4;
      puVar9 = puVar9 + 2;
    } while (param_5 != 0);
    if (lVar5 != -1) {
      plVar3[10] = (long)puVar6;
      plVar3[0xb] = (long)puVar7;
      plVar3[0xc] = (long)puVar8;
      *(undefined4 *)(plVar3 + 8) = uStack_98;
      *(uint *)((long)plVar3 + 0x43) = CONCAT31(uStack_94,uStack_98._3_1_);
      *plVar3 = lVar5;
      plVar3[1] = (long)puStack_f0;
      plVar3[2] = lStack_e8;
      plVar3[3] = lStack_e0;
      plVar3[4] = lVar4;
      plVar3[5] = (long)puStack_d8;
      plVar3[6] = lStack_d0;
      plVar3[7] = lStack_c8;
      *(undefined8 *)((long)plVar3 + 0x47) = uStack_f8;
      *(undefined1 *)((long)plVar3 + 0x4f) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_34_0_src_read_00afa930);
}


// ===== 00a22bb4  std::sys::backtrace::__rust_end_short_backtrace<std::alloc::rust_oom::{closure#0},!> =====

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
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_e8;
  undefined4 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_88;
  undefined3 uStack_84;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_00a2bbfc();
  pcStack_18 = __rust_end_short_backtrace<std::panicking::panic_handler::_closure_0_,_>;
  puStack_20 = &stack0xfffffffffffffff0;
  auVar10 = FUN_00a2bd84();
  plVar3 = auVar10._0_8_;
  pcStack_78 = FUN_00a22bcc;
  uStack_84 = 0;
  uStack_88 = 0;
  puStack_80 = (undefined1 *)&puStack_20;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar8 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar9 = (undefined2 *)(param_4 + 2);
    lVar5 = -1;
    lVar4 = -1;
    uStack_e8 = 0;
    uVar1 = 0;
    puStack_80 = (undefined1 *)&puStack_20;
    do {
      FUN_00a22e94(&lStack_b0,auVar10._8_8_,param_3 & 0xffffffff,*puVar9);
      if (lStack_b0 == -1) {
        plVar3[1] = (long)puStack_a8;
        plVar3[2] = lStack_a0;
        *plVar3 = -1;
        return;
      }
      uVar2 = puVar9[-1];
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          puStack_e0 = puStack_a8;
          lStack_d8 = lStack_a0;
          lStack_d0 = lStack_98;
          lVar5 = lStack_b0;
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
LAB_00a22e08:
            puVar6 = puStack_a8;
          }
          else if (lStack_b0 == 7) {
            if (-1 < (long)puStack_a8) goto LAB_00a22e08;
          }
          else if (lStack_b0 == 8) goto LAB_00a22e08;
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
LAB_00a22df4:
            puVar7 = puStack_a8;
          }
          else if (lStack_b0 == 7) {
            if (-1 < (long)puStack_a8) goto LAB_00a22df4;
          }
          else if (lStack_b0 == 8) goto LAB_00a22df4;
        }
      }
      else if (uVar2 == 4) {
        if (lStack_b0 < 5) {
          if (lStack_b0 == 2) {
            puVar8 = (undefined4 *)((ulong)puStack_a8 & 0xff);
          }
          else if (lStack_b0 == 3) {
            puVar8 = (undefined4 *)((ulong)puStack_a8 & 0xffff);
          }
          else if (lStack_b0 == 4) {
            puVar8 = (undefined4 *)((ulong)puStack_a8 & 0xffffffff);
          }
        }
        else if (lStack_b0 == 5) {
LAB_00a22de0:
          puVar8 = puStack_a8;
        }
        else if (lStack_b0 == 7) {
          if (-1 < (long)puStack_a8) goto LAB_00a22de0;
        }
        else if (lStack_b0 == 8) goto LAB_00a22de0;
      }
      else if (uVar2 == 5) {
        if ((lStack_b0 == 1) && (lStack_a0 == 0x10)) {
          uStack_e8 = *(undefined8 *)((long)puStack_a8 + 7);
          uVar1 = *(undefined1 *)((long)puStack_a8 + 0xf);
          uStack_88._0_3_ = (undefined3)*puStack_a8;
          uStack_88._3_1_ = (undefined1)*(undefined4 *)((long)puStack_a8 + 3);
          uStack_84 = (undefined3)((uint)*(undefined4 *)((long)puStack_a8 + 3) >> 8);
        }
      }
      else if (uVar2 == 0x2001) {
        lVar4 = lStack_b0;
        puStack_c8 = puStack_a8;
        lStack_c0 = lStack_a0;
        lStack_b8 = lStack_98;
      }
      param_5 = param_5 + -4;
      puVar9 = puVar9 + 2;
    } while (param_5 != 0);
    if (lVar5 != -1) {
      plVar3[10] = (long)puVar6;
      plVar3[0xb] = (long)puVar7;
      plVar3[0xc] = (long)puVar8;
      *(undefined4 *)(plVar3 + 8) = uStack_88;
      *(uint *)((long)plVar3 + 0x43) = CONCAT31(uStack_84,uStack_88._3_1_);
      *plVar3 = lVar5;
      plVar3[1] = (long)puStack_e0;
      plVar3[2] = lStack_d8;
      plVar3[3] = lStack_d0;
      plVar3[4] = lVar4;
      plVar3[5] = (long)puStack_c8;
      plVar3[6] = lStack_c0;
      plVar3[7] = lStack_b8;
      *(undefined8 *)((long)plVar3 + 0x47) = uStack_e8;
      *(undefined1 *)((long)plVar3 + 0x4f) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_34_0_src_read_00afa930);
}


// ===== 00a22bc0  std::sys::backtrace::__rust_end_short_backtrace<std::panicking::panic_handler::{closure#0},!> =====

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
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  auVar10 = FUN_00a2bd84();
  plVar3 = auVar10._0_8_;
  pcStack_68 = FUN_00a22bcc;
  uStack_74 = 0;
  uStack_78 = 0;
  puStack_70 = &stack0xfffffffffffffff0;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar8 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar9 = (undefined2 *)(param_4 + 2);
    lVar5 = -1;
    lVar4 = -1;
    uStack_d8 = 0;
    uVar1 = 0;
    puStack_70 = &stack0xfffffffffffffff0;
    do {
      FUN_00a22e94(&lStack_a0,auVar10._8_8_,param_3 & 0xffffffff,*puVar9);
      if (lStack_a0 == -1) {
        plVar3[1] = (long)puStack_98;
        plVar3[2] = lStack_90;
        *plVar3 = -1;
        return;
      }
      uVar2 = puVar9[-1];
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          puStack_d0 = puStack_98;
          lStack_c8 = lStack_90;
          lStack_c0 = lStack_88;
          lVar5 = lStack_a0;
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
LAB_00a22e08:
            puVar6 = puStack_98;
          }
          else if (lStack_a0 == 7) {
            if (-1 < (long)puStack_98) goto LAB_00a22e08;
          }
          else if (lStack_a0 == 8) goto LAB_00a22e08;
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
LAB_00a22df4:
            puVar7 = puStack_98;
          }
          else if (lStack_a0 == 7) {
            if (-1 < (long)puStack_98) goto LAB_00a22df4;
          }
          else if (lStack_a0 == 8) goto LAB_00a22df4;
        }
      }
      else if (uVar2 == 4) {
        if (lStack_a0 < 5) {
          if (lStack_a0 == 2) {
            puVar8 = (undefined4 *)((ulong)puStack_98 & 0xff);
          }
          else if (lStack_a0 == 3) {
            puVar8 = (undefined4 *)((ulong)puStack_98 & 0xffff);
          }
          else if (lStack_a0 == 4) {
            puVar8 = (undefined4 *)((ulong)puStack_98 & 0xffffffff);
          }
        }
        else if (lStack_a0 == 5) {
LAB_00a22de0:
          puVar8 = puStack_98;
        }
        else if (lStack_a0 == 7) {
          if (-1 < (long)puStack_98) goto LAB_00a22de0;
        }
        else if (lStack_a0 == 8) goto LAB_00a22de0;
      }
      else if (uVar2 == 5) {
        if ((lStack_a0 == 1) && (lStack_90 == 0x10)) {
          uStack_d8 = *(undefined8 *)((long)puStack_98 + 7);
          uVar1 = *(undefined1 *)((long)puStack_98 + 0xf);
          uStack_78._0_3_ = (undefined3)*puStack_98;
          uStack_78._3_1_ = (undefined1)*(undefined4 *)((long)puStack_98 + 3);
          uStack_74 = (undefined3)((uint)*(undefined4 *)((long)puStack_98 + 3) >> 8);
        }
      }
      else if (uVar2 == 0x2001) {
        lVar4 = lStack_a0;
        puStack_b8 = puStack_98;
        lStack_b0 = lStack_90;
        lStack_a8 = lStack_88;
      }
      param_5 = param_5 + -4;
      puVar9 = puVar9 + 2;
    } while (param_5 != 0);
    if (lVar5 != -1) {
      plVar3[10] = (long)puVar6;
      plVar3[0xb] = (long)puVar7;
      plVar3[0xc] = (long)puVar8;
      *(undefined4 *)(plVar3 + 8) = uStack_78;
      *(uint *)((long)plVar3 + 0x43) = CONCAT31(uStack_74,uStack_78._3_1_);
      *plVar3 = lVar5;
      plVar3[1] = (long)puStack_d0;
      plVar3[2] = lStack_c8;
      plVar3[3] = lStack_c0;
      plVar3[4] = lVar4;
      plVar3[5] = (long)puStack_b8;
      plVar3[6] = lStack_b0;
      plVar3[7] = lStack_a8;
      *(undefined8 *)((long)plVar3 + 0x47) = uStack_d8;
      *(undefined1 *)((long)plVar3 + 0x4f) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_34_0_src_read_00afa930);
}


// ===== 00a22bcc  FUN_00a22bcc =====

void FUN_00a22bcc(long *param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined8 local_c8;
  undefined4 *local_c0;
  long lStack_b8;
  long local_b0;
  undefined4 *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined4 *puStack_88;
  long local_80;
  long local_78;
  undefined4 uStack_68;
  undefined3 uStack_64;
  
  uStack_64 = 0;
  uStack_68 = 0;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
    puVar8 = (undefined2 *)(param_4 + 2);
    lVar4 = -1;
    lVar3 = -1;
    local_c8 = 0;
    uVar1 = 0;
    do {
      FUN_00a22e94(&local_90,param_2,param_3,*puVar8);
      if (local_90 == -1) {
        param_1[1] = (long)puStack_88;
        param_1[2] = local_80;
        *param_1 = -1;
        return;
      }
      uVar2 = puVar8[-1];
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          local_c0 = puStack_88;
          lStack_b8 = local_80;
          local_b0 = local_78;
          lVar4 = local_90;
        }
        else if (uVar2 == 2) {
          if (local_90 < 5) {
            if (local_90 == 2) {
              puVar5 = (undefined4 *)((ulong)puStack_88 & 0xff);
            }
            else if (local_90 == 3) {
              puVar5 = (undefined4 *)((ulong)puStack_88 & 0xffff);
            }
            else if (local_90 == 4) {
              puVar5 = (undefined4 *)((ulong)puStack_88 & 0xffffffff);
            }
          }
          else if (local_90 == 5) {
LAB_00a22e08:
            puVar5 = puStack_88;
          }
          else if (local_90 == 7) {
            if (-1 < (long)puStack_88) goto LAB_00a22e08;
          }
          else if (local_90 == 8) goto LAB_00a22e08;
        }
        else if (uVar2 == 3) {
          if (local_90 < 5) {
            if (local_90 == 2) {
              puVar6 = (undefined4 *)((ulong)puStack_88 & 0xff);
            }
            else if (local_90 == 3) {
              puVar6 = (undefined4 *)((ulong)puStack_88 & 0xffff);
            }
            else if (local_90 == 4) {
              puVar6 = (undefined4 *)((ulong)puStack_88 & 0xffffffff);
            }
          }
          else if (local_90 == 5) {
LAB_00a22df4:
            puVar6 = puStack_88;
          }
          else if (local_90 == 7) {
            if (-1 < (long)puStack_88) goto LAB_00a22df4;
          }
          else if (local_90 == 8) goto LAB_00a22df4;
        }
      }
      else if (uVar2 == 4) {
        if (local_90 < 5) {
          if (local_90 == 2) {
            puVar7 = (undefined4 *)((ulong)puStack_88 & 0xff);
          }
          else if (local_90 == 3) {
            puVar7 = (undefined4 *)((ulong)puStack_88 & 0xffff);
          }
          else if (local_90 == 4) {
            puVar7 = (undefined4 *)((ulong)puStack_88 & 0xffffffff);
          }
        }
        else if (local_90 == 5) {
LAB_00a22de0:
          puVar7 = puStack_88;
        }
        else if (local_90 == 7) {
          if (-1 < (long)puStack_88) goto LAB_00a22de0;
        }
        else if (local_90 == 8) goto LAB_00a22de0;
      }
      else if (uVar2 == 5) {
        if ((local_90 == 1) && (local_80 == 0x10)) {
          local_c8 = *(undefined8 *)((long)puStack_88 + 7);
          uVar1 = *(undefined1 *)((long)puStack_88 + 0xf);
          uStack_68._0_3_ = (undefined3)*puStack_88;
          uStack_68._3_1_ = (undefined1)*(undefined4 *)((long)puStack_88 + 3);
          uStack_64 = (undefined3)((uint)*(undefined4 *)((long)puStack_88 + 3) >> 8);
        }
      }
      else if (uVar2 == 0x2001) {
        lVar3 = local_90;
        local_a8 = puStack_88;
        local_a0 = local_80;
        local_98 = local_78;
      }
      param_5 = param_5 + -4;
      puVar8 = puVar8 + 2;
    } while (param_5 != 0);
    if (lVar4 != -1) {
      param_1[10] = (long)puVar5;
      param_1[0xb] = (long)puVar6;
      param_1[0xc] = (long)puVar7;
      *(undefined4 *)(param_1 + 8) = uStack_68;
      *(uint *)((long)param_1 + 0x43) = CONCAT31(uStack_64,uStack_68._3_1_);
      *param_1 = lVar4;
      param_1[1] = (long)local_c0;
      param_1[2] = lStack_b8;
      param_1[3] = local_b0;
      param_1[4] = lVar3;
      param_1[5] = (long)local_a8;
      param_1[6] = local_a0;
      param_1[7] = local_98;
      *(undefined8 *)((long)param_1 + 0x47) = local_c8;
      *(undefined1 *)((long)param_1 + 0x4f) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_34_0_src_read_00afa930);
}


// ===== 00a22e94  FUN_00a22e94 =====

void FUN_00a22e94(undefined8 *param_1,long *param_2,uint param_3,short param_4)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  ulong uVar5;
  uint *extraout_x9;
  uint *extraout_x9_00;
  uint *extraout_x9_01;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  uint *local_30;
  undefined1 local_25;
  
  uVar11 = param_3 >> 8 & 0xff;
  switch(param_4) {
  case 3:
    puVar9 = (uint *)*param_2;
    if ((ulong)param_2[1] < 2) {
LAB_00a23194:
      *(undefined1 *)((long)param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 1) = 0x11;
      *(undefined2 *)((long)param_1 + 0xd) = 0;
      *(undefined4 *)((long)param_1 + 9) = 0;
      param_1[2] = puVar9;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    puVar10 = (uint *)((long)puVar9 + 2);
    local_30 = (uint *)(ulong)(ushort)*puVar9;
    puVar9 = (uint *)(param_2[1] - 2);
    lVar12 = (long)puVar9 - (long)local_30;
    *param_2 = (long)puVar10;
    param_2[1] = (long)puVar9;
    if (puVar9 < local_30) goto LAB_00a23514;
    goto LAB_00a231e0;
  case 4:
    puVar9 = (uint *)*param_2;
    if ((ulong)param_2[1] < 4) goto LAB_00a23194;
    puVar10 = puVar9 + 1;
    local_30 = (uint *)(ulong)*puVar9;
    puVar9 = (uint *)(param_2[1] - 4);
    lVar12 = (long)puVar9 - (long)local_30;
    *param_2 = (long)puVar10;
    param_2[1] = (long)puVar9;
    if (puVar9 < local_30) goto LAB_00a23514;
    goto LAB_00a231e0;
  case 5:
    puVar1 = (ushort *)*param_2;
    if ((ulong)param_2[1] < 2) {
      param_1[2] = puVar1;
      *param_1 = 0xffffffffffffffff;
      param_1[1] = 0x11;
      return;
    }
    local_30 = (uint *)(puVar1 + 1);
    uVar3 = *puVar1;
    puVar10 = (uint *)(ulong)uVar3;
    uVar11 = 0;
    uVar5 = 0;
    *param_2 = (long)local_30;
    param_2[1] = param_2[1] - 2;
    uVar8 = (uint)(uVar3 >> 8);
    uVar13 = 3;
    break;
  case 6:
    puVar9 = (uint *)*param_2;
    if (3 < (ulong)param_2[1]) {
      local_30 = puVar9 + 1;
      uVar11 = *puVar9;
      puVar10 = (uint *)(ulong)uVar11;
      uVar5 = 0;
      *param_2 = (long)local_30;
      param_2[1] = param_2[1] - 4;
      uVar13 = 4;
      uVar8 = uVar11 >> 8;
      uVar11 = uVar11 >> 0x10;
      break;
    }
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 1) = 0x11;
    *(undefined2 *)((long)param_1 + 9) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    goto LAB_00a23438;
  case 7:
    puVar9 = (uint *)*param_2;
    if ((ulong)param_2[1] < 8) goto LAB_00a234ac;
    uVar13 = 5;
    *param_2 = (long)(puVar9 + 2);
    param_2[1] = param_2[1] - 8;
    puVar6 = (uint *)((ulong)*puVar9 << 8 | (ulong)(uint3)puVar9[1] << 0x28);
    puVar10 = (uint *)((ulong)puVar6 >> 8 | (ulong)*(byte *)((long)puVar9 + 7) << 0x38);
    goto LAB_00a23160;
  case 8:
    puVar10 = (uint *)*param_2;
    if (param_2[1] != 0) {
      local_30 = (uint *)0x0;
      lVar12 = param_2[1] + -1;
      puVar9 = puVar10;
      do {
        if ((char)*puVar9 == '\0') {
          *param_2 = (long)puVar9 + 1;
          param_2[1] = lVar12;
          uVar13 = 0x20;
          goto LAB_00a23548;
        }
        lVar12 = lVar12 + -1;
        local_30 = (uint *)((long)local_30 + 1);
        puVar9 = (uint *)((long)puVar9 + 1);
      } while (lVar12 != -1);
    }
LAB_00a23514:
    param_1[2] = puVar10;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0x11;
    return;
  case 9:
    FUN_00a69f78(&local_38);
    if (local_38 == -1) {
      puVar10 = (uint *)*param_2;
      if ((uint *)param_2[1] < local_30) goto LAB_00a23514;
      *param_2 = (long)((long)puVar10 + (long)local_30);
      param_2[1] = param_2[1] - (long)local_30;
      uVar5 = (ulong)puVar10 & 0xffffffff00000000;
      uVar13 = 1;
      uVar8 = (uint)((ulong)puVar10 >> 8);
      uVar11 = (uint)((ulong)puVar10 >> 0x10);
      break;
    }
    goto LAB_00a23280;
  case 10:
    pbVar7 = (byte *)*param_2;
    if (param_2[1] == 0) {
      uVar4 = 0x11;
      param_1[2] = pbVar7;
      goto LAB_00a234e4;
    }
    puVar10 = (uint *)(pbVar7 + 1);
    local_30 = (uint *)(ulong)*pbVar7;
    puVar9 = (uint *)(param_2[1] + -1);
    lVar12 = (long)puVar9 - (long)local_30;
    *param_2 = (long)puVar10;
    param_2[1] = (long)puVar9;
    if (puVar9 < local_30) goto LAB_00a23514;
LAB_00a231e0:
    *param_2 = (long)((long)puVar10 + (long)local_30);
    param_2[1] = lVar12;
    uVar13 = 1;
LAB_00a23548:
    uVar5 = (ulong)puVar10 & 0xffffffff00000000;
    uVar8 = (uint)((ulong)puVar10 >> 8);
    uVar11 = (uint)((ulong)puVar10 >> 0x10);
    break;
  case 0xb:
    pbVar7 = (byte *)*param_2;
    if (param_2[1] != 0) {
      local_30 = (uint *)(pbVar7 + 1);
      puVar10 = (uint *)(ulong)*pbVar7;
      uVar8 = 0;
      uVar11 = 0;
      uVar5 = 0;
      *param_2 = (long)local_30;
      param_2[1] = param_2[1] + -1;
      uVar13 = 2;
      break;
    }
    goto LAB_00a23318;
  case 0xc:
    pbVar7 = (byte *)*param_2;
    if (param_2[1] != 0) {
      local_30 = (uint *)(pbVar7 + 1);
      bVar2 = *pbVar7;
      uVar8 = 0;
      uVar11 = 0;
      uVar5 = 0;
      *param_2 = (long)local_30;
      param_2[1] = param_2[1] + -1;
      uVar13 = 10;
      puVar10 = (uint *)(ulong)(bVar2 != 0);
      break;
    }
    goto LAB_00a23318;
  case 0xd:
    FUN_00a69d98(&local_38);
    if (local_38 != -1) goto LAB_00a23280;
    uVar13 = 7;
    puVar6 = extraout_x9_00;
    puVar10 = local_30;
    goto LAB_00a23160;
  case 0xe:
    if (uVar11 == 8) {
      puVar9 = (uint *)*param_2;
      if ((ulong)param_2[1] < 8) goto LAB_00a234ac;
      *param_2 = (long)(puVar9 + 2);
      param_2[1] = param_2[1] - 8;
      local_30 = (uint *)((ulong)*puVar9 << 8 | (ulong)(uint3)puVar9[1] << 0x28);
      puVar10 = (uint *)((ulong)local_30 >> 8 | (ulong)*(byte *)((long)puVar9 + 7) << 0x38);
    }
    else {
      puVar9 = (uint *)*param_2;
      if ((ulong)param_2[1] < 4) goto LAB_00a234ac;
      puVar10 = (uint *)(ulong)*puVar9;
      local_30 = (uint *)(param_2[1] - 4);
      *param_2 = (long)(puVar9 + 1);
      param_2[1] = (long)local_30;
    }
    uVar8 = (uint)((ulong)puVar10 >> 8);
    uVar11 = (uint)((ulong)puVar10 >> 0x10);
    uVar5 = (ulong)puVar10 & 0xffffffff00000000;
    uVar13 = 0x1b;
    break;
  case 0xf:
    FUN_00a69f78(&local_38);
    if (local_38 != -1) goto LAB_00a23280;
    uVar13 = 8;
    puVar6 = extraout_x9_01;
    puVar10 = local_30;
    goto LAB_00a23160;
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
    goto switchD_00a22ecc_caseD_10;
  case 0x17:
    if (uVar11 == 8) {
      puVar9 = (uint *)*param_2;
      if ((ulong)param_2[1] < 8) goto LAB_00a234ac;
      *param_2 = (long)(puVar9 + 2);
      param_2[1] = param_2[1] - 8;
      local_30 = (uint *)((ulong)*puVar9 << 8 | (ulong)(uint3)puVar9[1] << 0x28);
      puVar10 = (uint *)((ulong)local_30 >> 8 | (ulong)*(byte *)((long)puVar9 + 7) << 0x38);
    }
    else {
      puVar9 = (uint *)*param_2;
      if ((ulong)param_2[1] < 4) goto LAB_00a234ac;
      puVar10 = (uint *)(ulong)*puVar9;
      local_30 = (uint *)(param_2[1] - 4);
      *param_2 = (long)(puVar9 + 1);
      param_2[1] = (long)local_30;
    }
    uVar8 = (uint)((ulong)puVar10 >> 8);
    uVar11 = (uint)((ulong)puVar10 >> 0x10);
    uVar5 = (ulong)puVar10 & 0xffffffff00000000;
    uVar13 = 0xb;
    break;
  case 0x1a:
switchD_00a22ecc_caseD_1a:
    FUN_00a69f78(&local_38);
    if (local_38 != -1) {
LAB_00a23280:
      *(char *)(param_1 + 1) = local_38;
      param_1[2] = local_30;
      local_25 = (undefined1)((uint)uStack_37 >> 0x18);
      *(undefined4 *)((long)param_1 + 9) = uStack_37;
      *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_33,local_25);
      *param_1 = 0xffffffffffffffff;
      return;
    }
    uVar13 = 0x1e;
    puVar6 = extraout_x9;
    puVar10 = local_30;
LAB_00a23160:
    local_30 = puVar6;
    uVar8 = (uint)((ulong)puVar10 >> 8);
    uVar11 = (uint)((ulong)puVar10 >> 0x10);
    uVar5 = (ulong)puVar10 & 0xffffffff00000000;
    break;
  case 0x1d:
switchD_00a22ecc_caseD_1d:
    if (uVar11 == 8) {
      puVar9 = (uint *)*param_2;
      if ((ulong)param_2[1] < 8) {
LAB_00a234ac:
        *(undefined1 *)((long)param_1 + 0xf) = 0;
        *(undefined1 *)(param_1 + 1) = 0x11;
        *(undefined2 *)((long)param_1 + 0xd) = 0;
        *(undefined4 *)((long)param_1 + 9) = 0;
        param_1[2] = puVar9;
        *param_1 = 0xffffffffffffffff;
        return;
      }
      *param_2 = (long)(puVar9 + 2);
      param_2[1] = param_2[1] - 8;
      local_30 = (uint *)((ulong)*puVar9 << 8 | (ulong)(uint3)puVar9[1] << 0x28);
      puVar10 = (uint *)((ulong)local_30 >> 8 | (ulong)*(byte *)((long)puVar9 + 7) << 0x38);
    }
    else {
      puVar9 = (uint *)*param_2;
      if ((ulong)param_2[1] < 4) goto LAB_00a234ac;
      puVar10 = (uint *)(ulong)*puVar9;
      local_30 = (uint *)(param_2[1] - 4);
      *param_2 = (long)(puVar9 + 1);
      param_2[1] = (long)local_30;
    }
    uVar8 = (uint)((ulong)puVar10 >> 8);
    uVar11 = (uint)((ulong)puVar10 >> 0x10);
    uVar5 = (ulong)puVar10 & 0xffffffff00000000;
    uVar13 = 0x1c;
    break;
  case 0x1e:
    puVar10 = (uint *)*param_2;
    if ((ulong)param_2[1] < 0x10) goto LAB_00a23514;
    uVar8 = (uint)((ulong)puVar10 >> 8);
    uVar11 = (uint)((ulong)puVar10 >> 0x10);
    *param_2 = (long)(puVar10 + 4);
    param_2[1] = param_2[1] - 0x10;
    uVar5 = (ulong)puVar10 & 0xffffffff00000000;
    uVar13 = 1;
    local_30 = (uint *)&DAT_00000010;
    break;
  case 0x1f:
    if (uVar11 == 8) {
      puVar9 = (uint *)*param_2;
      if ((ulong)param_2[1] < 8) goto LAB_00a234ac;
      *param_2 = (long)(puVar9 + 2);
      param_2[1] = param_2[1] - 8;
      local_30 = (uint *)((ulong)*puVar9 << 8 | (ulong)(uint3)puVar9[1] << 0x28);
      puVar10 = (uint *)((ulong)local_30 >> 8 | (ulong)*(byte *)((long)puVar9 + 7) << 0x38);
    }
    else {
      puVar9 = (uint *)*param_2;
      if ((ulong)param_2[1] < 4) goto LAB_00a234ac;
      puVar10 = (uint *)(ulong)*puVar9;
      local_30 = (uint *)(param_2[1] - 4);
      *param_2 = (long)(puVar9 + 1);
      param_2[1] = (long)local_30;
    }
    uVar8 = (uint)((ulong)puVar10 >> 8);
    uVar11 = (uint)((ulong)puVar10 >> 0x10);
    uVar5 = (ulong)puVar10 & 0xffffffff00000000;
    uVar13 = 0x1f;
    break;
  case 0x25:
    pbVar7 = (byte *)*param_2;
    if (param_2[1] != 0) {
      lVar12 = param_2[1] + -1;
      local_30 = (uint *)(pbVar7 + 1);
      puVar10 = (uint *)(ulong)*pbVar7;
      uVar8 = 0;
      uVar11 = 0;
LAB_00a23308:
      *param_2 = (long)local_30;
LAB_00a2330c:
      uVar5 = 0;
      param_2[1] = lVar12;
      uVar13 = 0x1e;
      break;
    }
LAB_00a23318:
    uVar4 = 0x11;
    param_1[2] = pbVar7;
LAB_00a234e4:
    *(undefined1 *)(param_1 + 1) = uVar4;
    *param_1 = 0xffffffffffffffff;
    return;
  case 0x26:
    puVar9 = (uint *)*param_2;
    if (1 < (ulong)param_2[1]) {
      local_30 = (uint *)((long)puVar9 + 2);
      uVar8 = *puVar9;
      puVar10 = (uint *)(ulong)(ushort)uVar8;
      uVar11 = 0;
      lVar12 = param_2[1] - 2;
      *param_2 = (long)local_30;
      uVar8 = (uint)(ushort)((ushort)uVar8 >> 8);
      goto LAB_00a2330c;
    }
    goto LAB_00a23224;
  case 0x27:
    puVar9 = (uint *)*param_2;
    if (2 < (ulong)param_2[1]) {
      uVar5 = 0;
      *param_2 = (long)puVar9 + 3;
      param_2[1] = param_2[1] - 3;
      uVar13 = 0x1e;
      uVar11 = (uint)*(byte *)((long)puVar9 + 2);
      local_30 = (uint *)(ulong)(ushort)*puVar9;
      puVar10 = (uint *)(ulong)(uint3)*puVar9;
      uVar8 = (uint)(uint3)((uint3)*puVar9 >> 8);
      break;
    }
    goto LAB_00a23224;
  case 0x28:
    puVar9 = (uint *)*param_2;
    if (3 < (ulong)param_2[1]) {
      local_30 = puVar9 + 1;
      uVar11 = *puVar9;
      puVar10 = (uint *)(ulong)uVar11;
      lVar12 = param_2[1] - 4;
      uVar8 = uVar11 >> 8;
      uVar11 = uVar11 >> 0x10;
      goto LAB_00a23308;
    }
LAB_00a23224:
    *(undefined1 *)((long)param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 1) = 0x11;
    *(undefined2 *)((long)param_1 + 0xd) = 0;
    *(undefined4 *)((long)param_1 + 9) = 0;
LAB_00a23438:
    param_1[2] = puVar9;
    *param_1 = 0xffffffffffffffff;
    return;
  default:
    if (param_4 == 0x1f02) goto switchD_00a22ecc_caseD_1a;
    if (param_4 == 0x1f21) goto switchD_00a22ecc_caseD_1d;
    goto switchD_00a22ecc_caseD_10;
  }
  param_1[2] = local_30;
  *param_1 = uVar13;
  param_1[1] = uVar5 | ((uint)puVar10 & 0xff | (uVar8 & 0xff) << 8 | uVar11 << 0x10);
  return;
switchD_00a22ecc_caseD_10:
  uVar4 = 0xc;
  *(short *)((long)param_1 + 10) = param_4;
  goto LAB_00a234e4;
}


// ===== 00a2359c  FUN_00a2359c =====

void FUN_00a2359c(long *param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined2 *puVar2;
  long unaff_x26;
  long lVar3;
  long lVar4;
  long local_a0;
  long lStack_98;
  long local_70 [3];
  long local_58;
  
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar2 = (undefined2 *)(param_4 + 2);
    lVar1 = -1;
    do {
      FUN_00a22e94(local_70,param_2,param_3,*puVar2);
      lVar4 = ((long *)((ulong)local_70 | 8))[1];
      lVar3 = *(long *)((ulong)local_70 | 8);
      if (local_70[0] == -1) {
        *param_1 = -1;
        goto LAB_00a23660;
      }
      if (puVar2[-1] == 1) {
        lVar1 = local_70[0];
        unaff_x26 = local_58;
        local_a0 = lVar3;
        lStack_98 = lVar4;
      }
      param_5 = param_5 + -4;
      puVar2 = puVar2 + 2;
    } while (param_5 != 0);
    if (lVar1 != -1) {
      *param_1 = lVar1;
      param_1[3] = unaff_x26;
      lVar3 = local_a0;
      lVar4 = lStack_98;
LAB_00a23660:
      param_1[2] = lVar4;
      param_1[1] = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_gimli_0_34_0_src_read_00afa948);
}


// ===== 00a2368c  FUN_00a2368c =====

/* WARNING: Removing unreachable block (ram,0x00a237cc) */
/* WARNING: Removing unreachable block (ram,0x00a237dc) */

void FUN_00a2368c(ulong *param_1,long *param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint *local_90;
  uint local_84;
  ulong local_80;
  char local_78;
  undefined4 uStack_77;
  undefined3 uStack_73;
  ulong local_70;
  undefined1 local_65;
  
  if (param_5 == 0) goto LAB_00a23a38;
  uVar16 = (uint)(param_3 >> 8) & 0xffffff;
  local_80 = 0;
  lVar1 = param_4 + param_5 * 0x10;
  uVar12 = 0;
  uVar3 = (uint)param_3;
  if (((uint)param_3 & 0xffff0000) != 0x20000) {
    uVar3 = uVar16;
  }
LAB_00a236f0:
  uVar14 = *(ushort *)(param_4 + 10);
  puVar9 = (uint *)*param_2;
  uVar10 = param_2[1];
  uVar15 = 1;
  switch((uint)uVar14) {
  case 1:
switchD_00a23714_caseD_1:
    uVar15 = (uint)param_3;
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
switchD_00a23714_caseD_2:
    if (uVar12 != 0) {
      bVar7 = uVar10 < uVar12;
      uVar10 = uVar10 - uVar12;
      if (bVar7) goto LAB_00a23a24;
      puVar9 = (uint *)((long)puVar9 + uVar12);
      *param_2 = (long)puVar9;
      param_2[1] = uVar10;
    }
    uVar15 = uVar14 - 3;
    switch(uVar15) {
    case 0:
switchD_00a23760_caseD_0:
      if (uVar10 < 2) {
LAB_00a23aa4:
        *(undefined1 *)((long)param_1 + 7) = 0;
        *(undefined1 *)param_1 = 0x11;
        *(undefined2 *)((long)param_1 + 5) = 0;
        *(undefined4 *)((long)param_1 + 1) = 0;
        param_1[1] = (ulong)puVar9;
        return;
      }
      puVar13 = (uint *)((long)puVar9 + 2);
      uVar12 = (ulong)(ushort)*puVar9;
      lVar11 = uVar10 - 2;
      goto LAB_00a23900;
    case 1:
switchD_00a23760_caseD_1:
      if (uVar10 < 4) goto LAB_00a23aa4;
      puVar13 = puVar9 + 1;
      uVar12 = (ulong)*puVar9;
      lVar11 = uVar10 - 4;
LAB_00a23900:
      *param_2 = (long)puVar13;
      param_2[1] = lVar11;
      break;
    case 2:
    case 3:
    case 4:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x14:
    case 0x16:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
      goto switchD_00a23760_caseD_2;
    case 5:
switchD_00a23760_caseD_5:
      if (uVar10 == 0) {
LAB_00a23a60:
        *param_1 = (ulong)local_90 & 0xffffffffffffff00 | 0x11;
        param_1[1] = (ulong)puVar9;
        return;
      }
      uVar12 = 0;
      while (*(char *)((long)puVar9 + uVar12) != '\0') {
        uVar12 = uVar12 + 1;
        if (uVar10 == uVar12) goto LAB_00a23a60;
      }
      *param_2 = (long)puVar9 + uVar12 + 1;
      param_2[1] = ~uVar12 + uVar10;
      uVar12 = 0;
      local_90 = puVar9;
      break;
    case 6:
    case 0x15:
switchD_00a23760_caseD_6:
      param_3 = param_3 & 0xffffffff;
      FUN_00a69f78(&local_78);
      uVar12 = local_70;
      if (local_78 != -1) {
        *(char *)param_1 = local_78;
        local_65 = (undefined1)((uint)uStack_77 >> 0x18);
        *(undefined4 *)((long)param_1 + 1) = uStack_77;
        param_1[1] = local_70;
        *(uint *)((long)param_1 + 4) = CONCAT31(uStack_73,local_65);
        return;
      }
      break;
    case 7:
switchD_00a23760_caseD_7:
      if (uVar10 == 0) {
        *(char *)((long)param_1 + 1) = (char)local_80;
        goto LAB_00a23a24;
      }
      local_80 = (ulong)(byte)*puVar9;
      *param_2 = (long)puVar9 + 1;
      param_2[1] = uVar10 - 1;
      uVar12 = local_80;
      break;
    case 10:
    case 0xc:
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x1f:
    case 0x20:
switchD_00a23760_caseD_a:
      if (uVar10 == 0) {
        *(char *)((long)param_1 + 1) = (char)uVar15;
        goto LAB_00a23a24;
      }
      *param_2 = (long)puVar9 + 1;
      param_2[1] = -(1 - uVar10);
      uVar12 = 0;
      break;
    case 0x13:
      if (uVar10 == 0) {
        uVar8 = 0x11;
        goto LAB_00a23b0c;
      }
      uVar12 = uVar10 - 1;
      puVar13 = (uint *)((long)puVar9 + 1);
      cVar6 = (char)*puVar9;
      *param_2 = (long)puVar13;
      param_2[1] = uVar12;
      uVar15 = (int)cVar6;
      if (cVar6 < 0) {
        if (uVar12 == 0) {
LAB_00a23b04:
          puVar9 = puVar13;
          uVar8 = 0x11;
LAB_00a23b0c:
          *(undefined1 *)param_1 = uVar8;
          *(undefined2 *)((long)param_1 + 2) = (undefined2)local_84;
          param_1[1] = (ulong)puVar9;
          return;
        }
        cVar5 = *(char *)((long)puVar9 + 1);
        puVar13 = (uint *)((long)puVar9 + 2);
        uVar12 = uVar10 - 2;
        uVar15 = (int)cVar6 & 0x7fU | ((int)cVar5 & 0x7fU) << 7;
        *param_2 = (long)puVar13;
        param_2[1] = uVar12;
        if (cVar5 < 0) {
          if (uVar12 == 0) goto LAB_00a23b04;
          bVar4 = *(byte *)((long)puVar9 + 2);
          *param_2 = (long)puVar9 + 3;
          param_2[1] = uVar10 - 3;
          if (3 < bVar4) {
            uVar8 = 6;
            goto LAB_00a23b0c;
          }
          puVar13 = (uint *)((long)puVar9 + 3);
          uVar12 = uVar10 - 3;
          uVar15 = uVar15 | (uint)bVar4 << 0xe;
        }
      }
LAB_00a23830:
      local_84 = uVar15;
      uVar10 = uVar12;
      puVar9 = puVar13;
      uVar2 = local_84 & 0xffff;
      if (uVar2 - 1 < 0x2c) {
        uVar15 = (uint)(&switchD_00a23858::switchdataD_003819e7)[uVar2 - 1] * 4 + 0xa23764;
        switch(uVar2) {
        case 1:
          uVar12 = 0;
          goto switchD_00a23714_caseD_1;
        case 2:
          goto switchD_00a23858_caseD_2;
        case 3:
          goto switchD_00a23760_caseD_0;
        case 4:
          goto switchD_00a23760_caseD_1;
        case 5:
        case 0x12:
        case 0x26:
        case 0x2a:
          uVar12 = 0;
          goto switchD_00a23714_caseD_5;
        case 6:
        case 0x13:
        case 0x1c:
        case 0x28:
        case 0x2c:
          uVar12 = 0;
          goto switchD_00a23714_caseD_6;
        case 7:
        case 0x14:
        case 0x20:
        case 0x24:
          uVar12 = 0;
          goto switchD_00a23714_caseD_7;
        case 8:
          goto switchD_00a23760_caseD_5;
        case 9:
        case 0x18:
          goto switchD_00a23760_caseD_6;
        case 10:
          goto switchD_00a23760_caseD_7;
        case 0xb:
        case 0xc:
        case 0x11:
        case 0x25:
        case 0x29:
          uVar12 = 0;
          uVar15 = 1;
          goto switchD_00a23714_caseD_b;
        default:
          goto switchD_00a23760_caseD_a;
        case 0xe:
        case 0x17:
        case 0x1d:
        case 0x1f:
          goto switchD_00a23858_caseD_e;
        case 0x10:
          uVar12 = 0;
          goto switchD_00a23714_caseD_10;
        case 0x16:
          goto switchD_00a23858_caseD_16;
        case 0x19:
        case 0x21:
          uVar12 = 0;
          goto switchD_00a23714_caseD_19;
        case 0x1e:
          uVar12 = 0;
          goto switchD_00a23714_caseD_1e;
        case 0x27:
        case 0x2b:
          uVar12 = 0;
          goto switchD_00a23714_caseD_27;
        }
      }
      uVar15 = uVar2 - 0x1f01;
      if (uVar15 < 2) goto switchD_00a23760_caseD_a;
      if (uVar2 - 0x1f20 < 2) {
switchD_00a23858_caseD_e:
        uVar12 = 0;
        goto switchD_00a23714_caseD_e;
      }
switchD_00a23858_caseD_2:
      uVar14 = (ushort)local_84;
      goto switchD_00a23760_caseD_2;
    default:
      uVar15 = uVar14 - 0x1f01;
      if (uVar15 < 2) goto switchD_00a23760_caseD_a;
switchD_00a23760_caseD_2:
      uVar8 = 0xc;
      *(ushort *)((long)param_1 + 2) = uVar14;
      goto LAB_00a23a3c;
    }
    goto LAB_00a239f0;
  case 5:
  case 0x12:
  case 0x26:
  case 0x2a:
switchD_00a23714_caseD_5:
    uVar15 = 2;
    break;
  case 6:
  case 0x13:
  case 0x1c:
  case 0x28:
  case 0x2c:
switchD_00a23714_caseD_6:
    uVar15 = 4;
    break;
  case 7:
  case 0x14:
  case 0x20:
  case 0x24:
switchD_00a23714_caseD_7:
    uVar15 = 8;
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
    goto switchD_00a23714_caseD_e;
  case 0x10:
switchD_00a23714_caseD_10:
    uVar15 = uVar3;
    break;
  case 0x19:
  case 0x21:
switchD_00a23714_caseD_19:
    uVar15 = 0;
    break;
  case 0x1e:
switchD_00a23714_caseD_1e:
    uVar15 = 0x10;
    break;
  case 0x27:
  case 0x2b:
switchD_00a23714_caseD_27:
    uVar15 = 3;
    break;
  default:
    if (1 < uVar14 - 0x1f20) goto switchD_00a23714_caseD_2;
switchD_00a23714_caseD_e:
    uVar15 = uVar16;
  }
switchD_00a23714_caseD_b:
  uVar12 = uVar12 + (uVar15 & 0xff);
LAB_00a239f0:
  param_4 = param_4 + 0x10;
  if (param_4 == lVar1) goto code_r0x00a239fc;
  goto LAB_00a236f0;
switchD_00a23858_caseD_16:
  if (uVar10 == 0) {
    local_84._0_2_ = 0x16;
    uVar8 = 0x11;
    goto LAB_00a23b0c;
  }
  uVar12 = uVar10 - 1;
  puVar13 = (uint *)((long)puVar9 + 1);
  cVar6 = (char)*puVar9;
  *param_2 = (long)puVar13;
  param_2[1] = uVar12;
  uVar15 = (int)cVar6;
  if (cVar6 < 0) {
    if (uVar12 != 0) {
      cVar5 = *(char *)((long)puVar9 + 1);
      puVar13 = (uint *)((long)puVar9 + 2);
      uVar12 = uVar10 - 2;
      uVar15 = (int)cVar6 & 0x7fU | ((int)cVar5 & 0x7fU) << 7;
      *param_2 = (long)puVar13;
      param_2[1] = uVar12;
      if (-1 < cVar5) goto LAB_00a23830;
      if (uVar12 != 0) {
        bVar4 = *(byte *)((long)puVar9 + 2);
        *param_2 = (long)puVar9 + 3;
        param_2[1] = uVar10 - 3;
        if (3 < bVar4) {
          uVar8 = 6;
          local_84._0_2_ = 0x16;
          goto LAB_00a23b0c;
        }
        puVar13 = (uint *)((long)puVar9 + 3);
        uVar12 = uVar10 - 3;
        uVar15 = uVar15 | (uint)bVar4 << 0xe;
        goto LAB_00a23830;
      }
    }
    local_84._0_2_ = 0x16;
    goto LAB_00a23b04;
  }
  goto LAB_00a23830;
code_r0x00a239fc:
  if (uVar12 != 0) {
    puVar9 = (uint *)*param_2;
    if ((ulong)param_2[1] < uVar12) {
LAB_00a23a24:
      *(undefined1 *)param_1 = 0x11;
      param_1[1] = (ulong)puVar9;
      return;
    }
    *param_2 = (long)puVar9 + uVar12;
    param_2[1] = param_2[1] - uVar12;
  }
LAB_00a23a38:
  uVar8 = 0xff;
LAB_00a23a3c:
  *(undefined1 *)param_1 = uVar8;
  return;
}


// ===== 00a23b34  FUN_00a23b34 =====

undefined1  [16] FUN_00a23b34(int param_1,ulong *param_2,ulong param_3,ulong param_4)

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
      if (param_4 == 0) goto joined_r0x00a23bc0;
    }
    else {
      uVar11 = 0x2000;
    }
  }
  else {
    uVar11 = 0x2000;
joined_r0x00a23bc0:
    if (uVar12 - uVar6 < 0x20) {
      auVar13 = FUN_00a29804(param_1,param_2);
      if (auVar13._0_8_ == 1) {
        return auVar13;
      }
      if (auVar13._8_8_ == 0) {
        return ZEXT816(0) << 0x40;
      }
      uVar7 = param_2[2];
      uVar8 = *param_2;
      uVar10 = uVar8;
      if (uVar7 != uVar8) goto LAB_00a23c48;
      goto LAB_00a23c1c;
    }
  }
  uVar7 = uVar6;
  uVar10 = uVar12;
  uVar8 = uVar12;
  if (uVar6 != uVar12) goto LAB_00a23c48;
LAB_00a23c1c:
  do {
    uVar10 = uVar8;
    if (uVar8 == uVar12) {
      auVar13 = FUN_00a29804(param_1,param_2);
      if (auVar13._0_8_ == 1) {
        return auVar13;
      }
      uVar7 = param_2[2];
      if (auVar13._8_8_ == 0) {
        sVar3 = 0;
LAB_00a23dac:
        auVar1._8_8_ = uVar7 - uVar6;
        auVar1._0_8_ = sVar3;
        return auVar1;
      }
      uVar10 = *param_2;
    }
LAB_00a23c48:
    do {
      if (uVar7 == uVar10) {
        uVar8 = uVar10 + 0x20;
        if (uVar10 + 0x20 <= uVar10 * 2) {
          uVar8 = uVar10 * 2;
        }
        FUN_00a3856c(&local_78,uVar10,param_2[1],uVar8,1,1);
        if (local_78 == 1) {
          uVar10 = 0x2600000003;
LAB_00a23d80:
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
          if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
          }
          uVar10 = (long)iVar2 << 0x20 | 2;
          local_78 = uVar10;
                    /* try { // try from 00a23ce0 to 00a23cef has its CatchHandler @ 00a23dc4 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
          if (iVar2 == 0) {
            param_2[2] = uVar7;
            goto LAB_00a23d80;
          }
          sVar3 = read(param_1,(void *)(uVar9 + uVar7),__nbytes);
        } while (sVar3 == -1);
        uVar7 = sVar3 + uVar7;
        param_2[2] = uVar7;
        if (sVar3 == 0) {
          sVar3 = 0;
          goto LAB_00a23dac;
        }
      }
      else {
        uVar7 = sVar3 + uVar7;
        param_2[2] = uVar7;
        if (sVar3 == 0) goto LAB_00a23dac;
      }
      if ((param_3 & 1) == 0) {
        uVar11 = 0xffffffffffffffff;
      }
      uVar10 = uVar8;
    } while (uVar7 != uVar8);
  } while( true );
}


// ===== 00a23ddc  FUN_00a23ddc =====

undefined1  [16] FUN_00a23ddc(ulong *param_1,ulong param_2,ulong param_3)

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
      if (param_3 == 0) goto joined_r0x00a23e64;
    }
    else {
      uVar9 = 0x2000;
    }
  }
  else {
    uVar9 = 0x2000;
joined_r0x00a23e64:
    if (uVar10 - uVar11 < 0x20) {
      auVar13 = FUN_00a2997c(param_1);
      if (auVar13._0_8_ == 1) {
        return auVar13;
      }
      if (auVar13._8_8_ == 0) {
        return ZEXT816(0) << 0x40;
      }
      uVar12 = param_1[2];
      uVar6 = *param_1;
      uVar8 = uVar6;
      if (uVar12 != uVar6) goto LAB_00a23ef4;
      goto LAB_00a23ecc;
    }
  }
  uVar8 = uVar10;
  uVar6 = uVar10;
  uVar12 = uVar11;
  if (uVar11 != uVar10) goto LAB_00a23ef4;
LAB_00a23ecc:
  do {
    uVar8 = uVar6;
    if (uVar6 == uVar10) {
      auVar13 = FUN_00a2997c(param_1);
      if (auVar13._0_8_ == 1) {
        return auVar13;
      }
      uVar12 = param_1[2];
      if (auVar13._8_8_ == 0) {
        sVar3 = 0;
LAB_00a2404c:
        auVar1._8_8_ = uVar12 - uVar11;
        auVar1._0_8_ = sVar3;
        return auVar1;
      }
      uVar8 = *param_1;
    }
LAB_00a23ef4:
    do {
      if (uVar12 == uVar8) {
        uVar6 = uVar8 + 0x20;
        if (uVar8 + 0x20 <= uVar8 * 2) {
          uVar6 = uVar8 * 2;
        }
        FUN_00a3856c(&local_78,uVar8,param_1[1],uVar6,1,1);
        if (local_78 == 1) {
          uVar8 = 0x2600000003;
LAB_00a24020:
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
          if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
          }
          uVar8 = (long)iVar2 << 0x20 | 2;
          local_78 = uVar8;
                    /* try { // try from 00a23f84 to 00a23f93 has its CatchHandler @ 00a24064 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
          if (iVar2 == 0) {
            param_1[2] = uVar12;
            goto LAB_00a24020;
          }
          sVar3 = read(0,(void *)(uVar7 + uVar12),__nbytes);
        } while (sVar3 == -1);
        uVar12 = sVar3 + uVar12;
        param_1[2] = uVar12;
        if (sVar3 == 0) {
          sVar3 = 0;
          goto LAB_00a2404c;
        }
      }
      else {
        uVar12 = sVar3 + uVar12;
        param_1[2] = uVar12;
        if (sVar3 == 0) goto LAB_00a2404c;
      }
      if ((param_2 & 1) == 0) {
        uVar9 = 0xffffffffffffffff;
      }
      uVar8 = uVar6;
    } while (uVar12 != uVar6);
  } while( true );
}


// ===== 00a2407c  FUN_00a2407c =====

undefined1  [16] FUN_00a2407c(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4)

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
      if (param_4 == 0) goto joined_r0x00a24108;
    }
    else {
      uVar12 = 0x2000;
    }
  }
  else {
    uVar12 = 0x2000;
joined_r0x00a24108:
    if (uVar13 - uVar7 < 0x20) {
      auVar14 = FUN_00a29af4(param_1,param_2);
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
      if (uVar8 != uVar9) goto LAB_00a241a0;
      goto LAB_00a24174;
    }
  }
  piVar6 = (int *)*param_1;
  uVar8 = uVar7;
  uVar11 = uVar13;
  uVar9 = uVar13;
  if (uVar7 != uVar13) goto LAB_00a241a0;
LAB_00a24174:
  do {
    uVar11 = uVar9;
    if (uVar9 == uVar13) {
      auVar14 = FUN_00a29af4(param_1,param_2);
      if (auVar14._0_8_ == 1) {
        return auVar14;
      }
      uVar8 = param_2[2];
      if (auVar14._8_8_ == 0) {
        sVar3 = 0;
LAB_00a24304:
        auVar1._8_8_ = uVar8 - uVar7;
        auVar1._0_8_ = sVar3;
        return auVar1;
      }
      uVar11 = *param_2;
    }
LAB_00a241a0:
    do {
      if (uVar8 == uVar11) {
        uVar9 = uVar11 + 0x20;
        if (uVar11 + 0x20 <= uVar11 * 2) {
          uVar9 = uVar11 * 2;
        }
        FUN_00a3856c(&local_78,uVar11,param_2[1],uVar9,1,1);
        if (local_78 == 1) {
          uVar11 = 0x2600000003;
LAB_00a242d8:
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
          if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
          }
          uVar11 = (long)iVar2 << 0x20 | 2;
          local_78 = uVar11;
                    /* try { // try from 00a24238 to 00a24247 has its CatchHandler @ 00a2431c */
          lVar5 = core::io::error::os_functions::get_os_functions();
          iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
          if (iVar2 == 0) {
            param_2[2] = uVar8;
            goto LAB_00a242d8;
          }
          sVar3 = read(*piVar6,(void *)(uVar10 + uVar8),__nbytes);
        } while (sVar3 == -1);
        uVar8 = sVar3 + uVar8;
        param_2[2] = uVar8;
        if (sVar3 == 0) {
          sVar3 = 0;
          goto LAB_00a24304;
        }
      }
      else {
        uVar8 = sVar3 + uVar8;
        param_2[2] = uVar8;
        if (sVar3 == 0) goto LAB_00a24304;
      }
      if ((param_3 & 1) == 0) {
        uVar12 = 0xffffffffffffffff;
      }
      uVar11 = uVar9;
    } while (uVar8 != uVar9);
  } while( true );
}


// ===== 00a24334  FUN_00a24334 =====

undefined1  [16] FUN_00a24334(undefined8 *param_1,uint param_2,long *param_3)

{
  void *__buf;
  size_t __nbytes;
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long local_68;
  
  __buf = (void *)*param_1;
  __nbytes = param_1[1];
  puVar9 = param_1 + 2;
  uVar8 = *puVar9;
  uVar1 = *(undefined1 *)(param_1 + 4);
  uVar11 = param_1[3];
  uVar13 = 0;
  if (0x7ffffffffffffffe < __nbytes) {
    __nbytes = 0x7fffffffffffffff;
  }
  do {
    uVar10 = uVar11 - uVar8;
    uVar12 = uVar11;
    if (uVar11 < uVar8 || uVar10 == 0) goto LAB_00a243f4;
    while (uVar6 = uVar10, __buf == (void *)0x0) {
      uVar6 = uVar10 & 3;
      if (1 < uVar6) goto LAB_00a24464;
      if (uVar6 == 0) {
        if (*(char *)(uVar10 + 0x10) == '#') goto LAB_00a243a8;
LAB_00a2460c:
        uVar5 = 1;
        goto LAB_00a24610;
      }
      if (*(char *)(uVar10 + 0x1f) != '#') goto LAB_00a2460c;
      local_68 = uVar10 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      uVar10 = uVar11 - uVar8;
      if (uVar11 < uVar8 || uVar10 == 0) {
LAB_00a243f4:
        do {
          uVar11 = read(0,__buf,__nbytes);
          if (uVar11 != 0xffffffffffffffff) {
LAB_00a244c8:
            uVar8 = 0;
            param_1[2] = 0;
            param_1[3] = uVar11;
            *(undefined1 *)(param_1 + 4) = uVar1;
            uVar6 = uVar11;
            uVar12 = uVar11;
            goto LAB_00a244e0;
          }
          piVar3 = (int *)__errno();
          iVar2 = *piVar3;
          if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
          }
          if (iVar2 == 9) {
            uVar11 = 0;
            goto LAB_00a244c8;
          }
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = (long)iVar2 << 0x20 | 2;
          uVar8 = 0;
          *puVar9 = 0;
          param_1[3] = 0;
          *(undefined1 *)(param_1 + 4) = uVar1;
          uVar6 = 2;
LAB_00a24464:
          if (uVar6 == 2) {
                    /* try { // try from 00a2446c to 00a2447f has its CatchHandler @ 00a24654 */
            lVar4 = core::io::error::os_functions::get_os_functions();
            iVar2 = (**(code **)(lVar4 + 0x10))(uVar10 >> 0x20);
            if (iVar2 == 0) goto LAB_00a2460c;
          }
          else {
            uVar7 = (uint)(uVar10 >> 0x20);
            if (10 < uVar10 >> 0x22) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 & 0xff) != 0x23) goto LAB_00a2460c;
          }
LAB_00a243a8:
          uVar10 = uVar11 - uVar8;
        } while (uVar11 < uVar8 || uVar10 == 0);
      }
    }
LAB_00a244e0:
    if (uVar6 < 0x10) {
      uVar10 = 0;
      if (uVar6 == 0) {
        lVar4 = 0;
      }
      else {
        do {
          if ((uint)*(byte *)((long)__buf + uVar10 + uVar8) == (param_2 & 0xff)) {
            auVar15._8_8_ = uVar10;
            auVar15._0_8_ = 1;
            goto LAB_00a2456c;
          }
          uVar10 = uVar10 + 1;
        } while (uVar6 != uVar10);
        lVar4 = 0;
      }
    }
    else {
      auVar15 = core::slice::memchr::memchr_aligned(param_2,(long)__buf + uVar8,uVar6);
      lVar4 = auVar15._0_8_;
      if (lVar4 == 1) {
LAB_00a2456c:
        uVar10 = auVar15._8_8_;
        lVar4 = auVar15._0_8_;
        if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar10,uVar6,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa9a8);
        }
        uVar6 = uVar10 + 1;
      }
    }
    lVar14 = param_3[2];
    if ((ulong)(*param_3 - lVar14) < uVar6) {
      FUN_00a29778(param_3,lVar14,uVar6,1,1);
      lVar14 = param_3[2];
LAB_00a24590:
      memcpy((void *)(param_3[1] + lVar14),(void *)((long)__buf + uVar8),uVar6);
    }
    else if (uVar6 != 0) goto LAB_00a24590;
    uVar10 = uVar8 + uVar6;
    uVar8 = uVar11;
    if (uVar10 <= uVar11) {
      uVar8 = uVar10;
    }
    param_3[2] = lVar14 + uVar6;
    *puVar9 = uVar8;
    uVar10 = uVar6 + uVar13;
    uVar11 = uVar12;
    uVar13 = uVar10;
    if (((uint)(uVar6 != 0) & ((uint)lVar4 ^ 1)) == 0) {
      uVar5 = 0;
LAB_00a24610:
      auVar16._8_8_ = uVar10;
      auVar16._0_8_ = uVar5;
      return auVar16;
    }
  } while( true );
}


// ===== 00a24670  FUN_00a24670 =====

int FUN_00a24670(undefined8 *param_1)

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
  lVar5 = DAT_00b10278;
  if (DAT_00b10278 == 0) {
    lVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b10278);
  }
  iVar3 = pthread_setspecific((pthread_key_t)lVar5,&DAT_00000001);
  return iVar3;
}


// ===== 00a24708  FUN_00a24708 =====

int FUN_00a24708(undefined8 *param_1)

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
  lVar5 = DAT_00b10278;
  if (DAT_00b10278 == 0) {
    lVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b10278);
  }
  iVar3 = pthread_setspecific((pthread_key_t)lVar5,&DAT_00000001);
  return iVar3;
}


// ===== 00a247a0  FUN_00a247a0 =====

int FUN_00a247a0(long param_1)

{
  pthread_key_t __key;
  int iVar1;
  long lVar2;
  
  __key = *(pthread_key_t *)(param_1 + 8);
  pthread_setspecific(__key,&DAT_00000001);
                    /* try { // try from 00a247c0 to 00a247ff has its CatchHandler @ 00a24804 */
  FUN_00a20e24(param_1);
  pthread_setspecific(__key,(void *)0x0);
  lVar2 = DAT_00b10278;
  if (DAT_00b10278 == 0) {
    lVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b10278);
  }
  iVar1 = pthread_setspecific((pthread_key_t)lVar2,&DAT_00000001);
  return iVar1;
}


// ===== 00a24810  FUN_00a24810 =====

int FUN_00a24810(void *param_1)

{
  pthread_key_t __key;
  int iVar1;
  long lVar2;
  
  __key = *(pthread_key_t *)((long)param_1 + 0x10);
  pthread_setspecific(__key,&DAT_00000001);
  free(param_1);
  pthread_setspecific(__key,(void *)0x0);
  lVar2 = DAT_00b10278;
  if (DAT_00b10278 == 0) {
    lVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b10278);
  }
  iVar1 = pthread_setspecific((pthread_key_t)lVar2,&DAT_00000001);
  return iVar1;
}


// ===== 00a24880  FUN_00a24880 =====

int FUN_00a24880(void *param_1)

{
  pthread_key_t __key;
  int iVar1;
  long lVar2;
  
  __key = *(pthread_key_t *)((long)param_1 + 4);
  pthread_setspecific(__key,&DAT_00000001);
  free(param_1);
  pthread_setspecific(__key,(void *)0x0);
  lVar2 = DAT_00b10278;
  if (DAT_00b10278 == 0) {
    lVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b10278);
  }
  iVar1 = pthread_setspecific((pthread_key_t)lVar2,&DAT_00000001);
  return iVar1;
}


// ===== 00a248f0  FUN_00a248f0 =====

void FUN_00a248f0(undefined4 *param_1,int param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2496c  FUN_00a2496c =====

void FUN_00a2496c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  uVar1 = <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
                    (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 00a249c0 to 00a249cb has its CatchHandler @ 00a249f8 */
    FUN_00a2c9c0(param_1,uVar1,local_48);
    *local_48 = 0;
  }
  else {
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = &PTR_DAT_00afab10;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    free(local_48);
  }
  return;
}


// ===== 00a24a1c  FUN_00a24a1c =====

void FUN_00a24a1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 00a24a74 to 00a24a87 has its CatchHandler @ 00a24ab4 */
    (*param_4)(param_1,1,local_48,lStack_40);
    *local_48 = 0;
  }
  else {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = &PTR_DAT_00afab10;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    free(local_48);
  }
  return;
}


// ===== 00a24ad8  FUN_00a24ad8 =====

void FUN_00a24ad8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  long local_60;
  undefined1 *local_58;
  long lStack_50;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_60,param_2,param_3);
  if (local_60 == -1) {
                    /* try { // try from 00a24b3c to 00a24b4f has its CatchHandler @ 00a24b80 */
    (*param_5)(param_1,param_4,local_58,lStack_50);
    *local_58 = 0;
  }
  else {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00afab10;
    *param_1 = 1;
    lStack_50 = local_60;
  }
  if (lStack_50 != 0) {
    free(local_58);
  }
  return;
}


// ===== 00a24ba4  FUN_00a24ba4 =====

void FUN_00a24ba4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 00a24bfc to 00a24c0f has its CatchHandler @ 00a24c3c */
    (*param_4)(param_1,1,local_48,lStack_40);
    *local_48 = 0;
  }
  else {
    *param_1 = 1;
    param_1[1] = &PTR_DAT_00afab10;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    free(local_48);
  }
  return;
}


// ===== 00a24c60  FUN_00a24c60 =====

void FUN_00a24c60(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 00a24cbc to 00a24ccb has its CatchHandler @ 00a24cf8 */
    FUN_00a2b490(param_1,param_4,local_48);
    *local_48 = 0;
  }
  else {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00afab10;
    *param_1 = 1;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    free(local_48);
  }
  return;
}


// ===== 00a24d1c  FUN_00a24d1c =====

void FUN_00a24d1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_2,param_3);
  if (local_50 == -1) {
                    /* try { // try from 00a24d74 to 00a24d83 has its CatchHandler @ 00a24db0 */
    FUN_00a2ce98(param_1,param_4,local_48);
    *local_48 = 0;
  }
  else {
    *param_1 = 1;
    param_1[1] = &PTR_DAT_00afab10;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    free(local_48);
  }
  return;
}


// ===== 00a24dd4  FUN_00a24dd4 =====

undefined1  [16] FUN_00a24dd4(void)

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
      free(local_38);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = pDVar3;
      return auVar1 << 0x40;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = pDVar3;
    return auVar2 << 0x40;
  }
  if (local_40 != 0) {
    free(local_38);
    auVar4._8_8_ = &PTR_DAT_00afab10;
    auVar4._0_8_ = 1;
    return auVar4;
  }
  auVar5._8_8_ = &PTR_DAT_00afab10;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a24ea8  FUN_00a24ea8 =====

void FUN_00a24ea8(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

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
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00afab10;
    *param_1 = 1;
    lStack_40 = local_50;
  }
  if (lStack_40 != 0) {
    free(local_48);
  }
  return;
}


// ===== 00a24f38  FUN_00a24f38 =====

undefined ** FUN_00a24f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined **ppuVar1;
  long local_50;
  undefined1 *local_48;
  long lStack_40;
  
  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50);
  if (local_50 == -1) {
                    /* try { // try from 00a24f98 to 00a24fa7 has its CatchHandler @ 00a24fdc */
    ppuVar1 = (undefined **)(*param_4)(param_3,local_48,lStack_40);
    *local_48 = 0;
    if (lStack_40 != 0) {
      free(local_48);
      return ppuVar1;
    }
  }
  else {
    if (local_50 != 0) {
      free(local_48);
    }
    ppuVar1 = &PTR_DAT_00afab10;
  }
  return ppuVar1;
}


// ===== 00a25000  core[bcece726f298455b]::slice::sort::unstable::ipnsort::<addr2line[e17ec0026c2a32fb]::line::LineSequence,<[addr2line[e17ec0026c2a32fb]::line::LineSequence]>::sort_unstable_by_key<u64,<addr2line[e17ec0026c2a32fb]::line::Lines>::parse<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>::{closure#1}>::{closure#0}> =====

/* core[bcece726f298455b]::slice::sort::unstable::ipnsort::<addr2line[e17ec0026c2a32fb]::line::LineSequence,
   <[addr2line[e17ec0026c2a32fb]::line::LineSequence]>::sort_unstable_by_key<u64,
   <addr2line[e17ec0026c2a32fb]::line::Lines>::parse<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>
    */

void core[bcece726f298455b]::slice::sort::unstable::ipnsort::
     <addr2line[e17ec0026c2a32fb]::line::LineSequence,<[addr2line[e17ec0026c2a32fb]::line::LineSequence]>::sort_unstable_by_key<u64,<addr2line[e17ec0026c2a32fb]::line::Lines>::parse<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
               (long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_2 < 2) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    if (param_2 != 2) {
      uVar3 = 2;
      puVar5 = (ulong *)(param_1 + 0x50);
      uVar6 = uVar1;
      do {
        uVar7 = *puVar5;
        if (uVar6 <= uVar7) goto LAB_00a2505c;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 4;
        uVar6 = uVar7;
      } while (param_2 != uVar3);
      goto LAB_00a250a4;
    }
  }
  else if (param_2 != 2) {
    uVar3 = 2;
    puVar5 = (ulong *)(param_1 + 0x50);
    uVar6 = uVar1;
    do {
      uVar7 = *puVar5;
      if (uVar7 < uVar6) goto LAB_00a2505c;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 4;
      uVar6 = uVar7;
    } while (param_2 != uVar3);
    goto LAB_00a250a4;
  }
  uVar3 = 2;
LAB_00a2505c:
  if (uVar3 != param_2) {
    FUN_00a27d1c(param_1,param_2,0,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,param_3);
    return;
  }
LAB_00a250a4:
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    uVar1 = param_2 >> 1;
    puVar2 = (undefined8 *)(param_1 + 0x10);
    puVar4 = (undefined8 *)(param_1 + param_2 * 0x20 + -0x10);
    do {
      uVar8 = puVar4[-2];
      uVar14 = puVar4[1];
      uVar13 = *puVar4;
      uVar1 = uVar1 - 1;
      uVar10 = puVar2[-1];
      uVar9 = puVar2[-2];
      uVar12 = puVar2[1];
      uVar11 = *puVar2;
      puVar2[-1] = puVar4[-1];
      puVar2[-2] = uVar8;
      puVar4[-1] = uVar10;
      puVar4[-2] = uVar9;
      puVar2[1] = uVar14;
      *puVar2 = uVar13;
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
      puVar2 = puVar2 + 4;
      puVar4 = puVar4 + -4;
    } while (uVar1 != 0);
  }
  return;
}


// ===== 00a250e0  core[bcece726f298455b]::slice::sort::unstable::ipnsort::<addr2line[e17ec0026c2a32fb]::unit::UnitRange,<[addr2line[e17ec0026c2a32fb]::unit::UnitRange]>::sort_unstable_by_key<(u64,usize),<addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}> =====

/* core[bcece726f298455b]::slice::sort::unstable::ipnsort::<addr2line[e17ec0026c2a32fb]::unit::UnitRange,
   <[addr2line[e17ec0026c2a32fb]::unit::UnitRange]>::sort_unstable_by_key<(u64, usize),
   <addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}>
    */

void core[bcece726f298455b]::slice::sort::unstable::ipnsort::
     <addr2line[e17ec0026c2a32fb]::unit::UnitRange,<[addr2line[e17ec0026c2a32fb]::unit::UnitRange]>::sort_unstable_by_key<(u64,usize),<addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
               (long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_2 < 2) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar9 = *(ulong *)(param_1 + 0x30);
  bVar3 = uVar9 < *(ulong *)(param_1 + 0x10);
  if (uVar5 != *(ulong *)(param_1 + 8)) {
    bVar3 = uVar5 < *(ulong *)(param_1 + 8);
  }
  if (bVar3) {
    if (param_2 != 2) {
      puVar10 = (ulong *)(param_1 + 0x50);
      uVar6 = 2;
      do {
        uVar1 = puVar10[-1];
        uVar2 = *puVar10;
        bVar4 = uVar2 < uVar9;
        if (uVar1 != uVar5) {
          bVar4 = uVar1 < uVar5;
        }
        if (!bVar4) goto LAB_00a25164;
        uVar6 = uVar6 + 1;
        puVar10 = puVar10 + 4;
        uVar5 = uVar1;
        uVar9 = uVar2;
      } while (param_2 != uVar6);
      goto LAB_00a251c0;
    }
  }
  else if (param_2 != 2) {
    puVar10 = (ulong *)(param_1 + 0x50);
    uVar6 = 2;
    do {
      uVar1 = puVar10[-1];
      uVar2 = *puVar10;
      bVar4 = uVar2 < uVar9;
      if (uVar1 != uVar5) {
        bVar4 = uVar1 < uVar5;
      }
      if (bVar4) goto LAB_00a25164;
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 4;
      uVar5 = uVar1;
      uVar9 = uVar2;
    } while (param_2 != uVar6);
    goto LAB_00a251c0;
  }
  uVar6 = 2;
LAB_00a25164:
  if (uVar6 != param_2) {
    FUN_00a2807c(param_1,param_2,0,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,param_3);
    return;
  }
LAB_00a251c0:
  if (bVar3) {
    uVar5 = param_2 >> 1;
    puVar7 = (undefined8 *)(param_1 + 0x10);
    puVar8 = (undefined8 *)(param_1 + param_2 * 0x20 + -0x10);
    do {
      uVar11 = puVar8[-2];
      uVar17 = puVar8[1];
      uVar16 = *puVar8;
      uVar5 = uVar5 - 1;
      uVar13 = puVar7[-1];
      uVar12 = puVar7[-2];
      uVar15 = puVar7[1];
      uVar14 = *puVar7;
      puVar7[-1] = puVar8[-1];
      puVar7[-2] = uVar11;
      puVar8[-1] = uVar13;
      puVar8[-2] = uVar12;
      puVar7[1] = uVar17;
      *puVar7 = uVar16;
      puVar8[1] = uVar15;
      *puVar8 = uVar14;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + -4;
    } while (uVar5 != 0);
  }
  return;
}


// ===== 00a251f8  core[bcece726f298455b]::slice::sort::unstable::ipnsort::<addr2line[e17ec0026c2a32fb]::function::FunctionAddress,<[addr2line[e17ec0026c2a32fb]::function::FunctionAddress]>::sort_unstable_by_key<u64,<addr2line[e17ec0026c2a32fb]::function::Functions<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}> =====

/* core[bcece726f298455b]::slice::sort::unstable::ipnsort::<addr2line[e17ec0026c2a32fb]::function::FunctionAddress,
   <[addr2line[e17ec0026c2a32fb]::function::FunctionAddress]>::sort_unstable_by_key<u64,
   <addr2line[e17ec0026c2a32fb]::function::Functions<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}>
    */

void core[bcece726f298455b]::slice::sort::unstable::ipnsort::
     <addr2line[e17ec0026c2a32fb]::function::FunctionAddress,<[addr2line[e17ec0026c2a32fb]::function::FunctionAddress]>::sort_unstable_by_key<u64,<addr2line[e17ec0026c2a32fb]::function::Functions<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
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
        if (uVar5 <= uVar6) goto LAB_00a25254;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 3;
        uVar5 = uVar6;
      } while (param_2 != uVar3);
      goto LAB_00a2529c;
    }
  }
  else if (param_2 != 2) {
    uVar3 = 2;
    puVar2 = param_1 + 6;
    uVar5 = uVar1;
    do {
      uVar6 = *puVar2;
      if (uVar6 < uVar5) goto LAB_00a25254;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 3;
      uVar5 = uVar6;
    } while (param_2 != uVar3);
    goto LAB_00a2529c;
  }
  uVar3 = 2;
LAB_00a25254:
  if (uVar3 != param_2) {
    FUN_00a28430(param_1,param_2,0,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,param_3);
    return;
  }
LAB_00a2529c:
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


// ===== 00a252e4  core[bcece726f298455b]::slice::sort::unstable::ipnsort::<addr2line[e17ec0026c2a32fb]::function::InlinedFunctionAddress,<[addr2line[e17ec0026c2a32fb]::function::InlinedFunctionAddress]>::sort_unstable_by<<addr2line[e17ec0026c2a32fb]::function::Function<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> =====

/* core[bcece726f298455b]::slice::sort::unstable::ipnsort::<addr2line[e17ec0026c2a32fb]::function::InlinedFunctionAddress,
   <[addr2line[e17ec0026c2a32fb]::function::InlinedFunctionAddress]>::sort_unstable_by<<addr2line[e17ec0026c2a32fb]::function::Function<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void core[bcece726f298455b]::slice::sort::unstable::ipnsort::
     <addr2line[e17ec0026c2a32fb]::function::InlinedFunctionAddress,<[addr2line[e17ec0026c2a32fb]::function::InlinedFunctionAddress]>::sort_unstable_by<<addr2line[e17ec0026c2a32fb]::function::Function<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
               (ulong *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_2 < 2) {
    return;
  }
  uVar4 = param_1[6];
  if ((uVar4 < param_1[2]) || ((uVar4 <= param_1[2] && (param_1[4] < *param_1)))) {
    if (param_2 == 2) {
      bVar1 = true;
      goto LAB_00a253b4;
    }
    uVar2 = 2;
    puVar5 = param_1 + 10;
    do {
      uVar7 = *puVar5;
      if ((uVar4 <= uVar7) && ((uVar3 = uVar2, uVar4 < uVar7 || (puVar5[-6] <= puVar5[-2])))) break;
      uVar2 = uVar2 + 1;
      uVar3 = param_2;
      uVar4 = uVar7;
      puVar5 = puVar5 + 4;
    } while (param_2 != uVar2);
    bVar1 = true;
  }
  else {
    if (param_2 == 2) {
      bVar1 = false;
      goto LAB_00a253b4;
    }
    uVar3 = 2;
    uVar2 = param_1[4];
    puVar5 = param_1 + 10;
    while( true ) {
      uVar7 = *puVar5;
      if ((uVar7 < uVar4) || ((uVar7 <= uVar4 && (puVar5[-2] < uVar2)))) break;
      uVar3 = uVar3 + 1;
      uVar4 = uVar7;
      uVar2 = puVar5[-2];
      puVar5 = puVar5 + 4;
      if (param_2 == uVar3) {
        return;
      }
    }
    bVar1 = false;
  }
  if (uVar3 != param_2) {
    FUN_00a28830(param_1,param_2,0,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,param_3);
    return;
  }
LAB_00a253b4:
  if (bVar1) {
    uVar4 = param_2 >> 1;
    puVar5 = param_1 + 2;
    puVar6 = param_1 + param_2 * 4 + -2;
    do {
      uVar2 = puVar6[-2];
      uVar11 = puVar6[1];
      uVar10 = *puVar6;
      uVar4 = uVar4 - 1;
      uVar3 = puVar5[-1];
      uVar7 = puVar5[-2];
      uVar9 = puVar5[1];
      uVar8 = *puVar5;
      puVar5[-1] = puVar6[-1];
      puVar5[-2] = uVar2;
      puVar6[-1] = uVar3;
      puVar6[-2] = uVar7;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      puVar6[1] = uVar9;
      *puVar6 = uVar8;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + -4;
    } while (uVar4 != 0);
  }
  return;
}


// ===== 00a25458  core[bcece726f298455b]::slice::sort::unstable::ipnsort::<std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}> =====

/* core[bcece726f298455b]::slice::sort::unstable::ipnsort::<std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::ParsedSym,
   <[std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,
   <std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>
    */

void core[bcece726f298455b]::slice::sort::unstable::ipnsort::
     <std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[17aff9129faa4dc5]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
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
        if (uVar5 <= uVar6) goto LAB_00a254b4;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 3;
        uVar5 = uVar6;
      } while (param_2 != uVar3);
      goto LAB_00a254fc;
    }
  }
  else if (param_2 != 2) {
    uVar3 = 2;
    puVar2 = param_1 + 6;
    uVar5 = uVar1;
    do {
      uVar6 = *puVar2;
      if (uVar6 < uVar5) goto LAB_00a254b4;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 3;
      uVar5 = uVar6;
    } while (param_2 != uVar3);
    goto LAB_00a254fc;
  }
  uVar3 = 2;
LAB_00a254b4:
  if (uVar3 != param_2) {
    FUN_00a28c54(param_1,param_2,0,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,param_3);
    return;
  }
LAB_00a254fc:
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


// ===== 00a25544  core[bcece726f298455b]::slice::sort::unstable::ipnsort::<(gimli[1de8a57408df84df]::common::DebugInfoOffset,gimli[1de8a57408df84df]::common::DebugArangesOffset),<[(gimli[1de8a57408df84df]::common::DebugInfoOffset,gimli[1de8a57408df84df]::common::DebugArangesOffset)]>::sort_unstable_by_key<gimli[1de8a57408df84df]::common::DebugInfoOffset,<addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> =====

/* core[bcece726f298455b]::slice::sort::unstable::ipnsort::<(gimli[1de8a57408df84df]::common::DebugInfoOffset,
   gimli[1de8a57408df84df]::common::DebugArangesOffset),
   <[(gimli[1de8a57408df84df]::common::DebugInfoOffset,
   gimli[1de8a57408df84df]::common::DebugArangesOffset)]>::sort_unstable_by_key<gimli[1de8a57408df84df]::common::DebugInfoOffset,
   <addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void core[bcece726f298455b]::slice::sort::unstable::ipnsort::
     <(gimli[1de8a57408df84df]::common::DebugInfoOffset,gimli[1de8a57408df84df]::common::DebugArangesOffset),<[(gimli[1de8a57408df84df]::common::DebugInfoOffset,gimli[1de8a57408df84df]::common::DebugArangesOffset)]>::sort_unstable_by_key<gimli[1de8a57408df84df]::common::DebugInfoOffset,<addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
               (ulong *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 < 2) {
    return;
  }
  uVar1 = param_1[2];
  if (uVar1 < *param_1) {
    if (param_2 != 2) {
      uVar3 = 2;
      puVar4 = param_1 + 4;
      uVar6 = uVar1;
      do {
        uVar5 = *puVar4;
        if (uVar6 <= uVar5) goto LAB_00a255a0;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 2;
        uVar6 = uVar5;
      } while (param_2 != uVar3);
      goto LAB_00a255e8;
    }
  }
  else if (param_2 != 2) {
    uVar3 = 2;
    puVar4 = param_1 + 4;
    uVar6 = uVar1;
    do {
      uVar5 = *puVar4;
      if (uVar5 < uVar6) goto LAB_00a255a0;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      uVar6 = uVar5;
    } while (param_2 != uVar3);
    goto LAB_00a255e8;
  }
  uVar3 = 2;
LAB_00a255a0:
  if (uVar3 != param_2) {
    FUN_00a29054(param_1,param_2,0,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,param_3);
    return;
  }
LAB_00a255e8:
  if (uVar1 < *param_1) {
    uVar1 = param_2 >> 1;
    puVar4 = param_1 + param_2 * 2;
    do {
      puVar2 = puVar4 + -2;
      uVar3 = *puVar2;
      uVar5 = param_1[1];
      uVar6 = *param_1;
      uVar1 = uVar1 - 1;
      param_1[1] = puVar4[-1];
      *param_1 = uVar3;
      puVar4[-1] = uVar5;
      *puVar2 = uVar6;
      param_1 = param_1 + 2;
      puVar4 = puVar2;
    } while (uVar1 != 0);
  }
  return;
}


// ===== 00a25620  FUN_00a25620 =====

long FUN_00a25620(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar4 = param_4 * 0x80;
    lVar1 = param_4 * 0xe0;
    param_1 = FUN_00a25620(param_1,param_1 + lVar4,param_1 + lVar1,param_4);
    param_2 = FUN_00a25620(param_2,param_2 + lVar4,param_2 + lVar1,param_4);
    param_3 = FUN_00a25620(param_3,param_3 + lVar4,param_3 + lVar1,param_4);
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


// ===== 00a256ec  FUN_00a256ec =====

long FUN_00a256ec(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar7 = param_4 * 0x80;
    lVar4 = param_4 * 0xe0;
    param_1 = FUN_00a256ec(param_1,param_1 + lVar7,param_1 + lVar4,param_4);
    param_2 = FUN_00a256ec(param_2,param_2 + lVar7,param_2 + lVar4,param_4);
    param_3 = FUN_00a256ec(param_3,param_3 + lVar7,param_3 + lVar4,param_4);
  }
  uVar1 = *(ulong *)(param_2 + 8);
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_3 + 8);
  bVar5 = *(ulong *)(param_1 + 0x10) < *(ulong *)(param_2 + 0x10);
  if (uVar2 != uVar1) {
    bVar5 = uVar2 < uVar1;
  }
  bVar6 = *(ulong *)(param_1 + 0x10) < *(ulong *)(param_3 + 0x10);
  if (uVar2 != uVar3) {
    bVar6 = uVar2 < uVar3;
  }
  if (bVar5 == bVar6) {
    bVar6 = *(ulong *)(param_2 + 0x10) < *(ulong *)(param_3 + 0x10);
    if (uVar1 != uVar3) {
      bVar6 = uVar1 < uVar3;
    }
    param_1 = param_3;
    if (bVar5 == bVar6) {
      param_1 = param_2;
    }
  }
  return param_1;
}


// ===== 00a257d8  FUN_00a257d8 =====

ulong * FUN_00a257d8(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_00a257d8(param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15,param_4
                                   );
    param_2 = (ulong *)FUN_00a257d8(param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4
                                   );
    param_3 = (ulong *)FUN_00a257d8(param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4
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


// ===== 00a258a8  FUN_00a258a8 =====

ulong * FUN_00a258a8(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

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
    param_1 = (ulong *)FUN_00a258a8(param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c,
                                    param_4);
    param_2 = (ulong *)FUN_00a258a8(param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,
                                    param_4);
    param_3 = (ulong *)FUN_00a258a8(param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,
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
      goto LAB_00a2598c;
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
LAB_00a2598c:
  if (bVar6 == (uVar2 < uVar4 || uVar2 <= uVar4 && uVar3 < uVar5)) {
    param_3 = param_2;
  }
  return param_3;
}


// ===== 00a259d4  FUN_00a259d4 =====

ulong * FUN_00a259d4(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_00a259d4(param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15,param_4
                                   );
    param_2 = (ulong *)FUN_00a259d4(param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4
                                   );
    param_3 = (ulong *)FUN_00a259d4(param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4
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


// ===== 00a25aa4  FUN_00a25aa4 =====

ulong * FUN_00a25aa4(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_00a25aa4(param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe,param_4);
    param_2 = (ulong *)FUN_00a25aa4(param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (ulong *)FUN_00a25aa4(param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
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


// ===== 00a25b70  FUN_00a25b70 =====

void FUN_00a25b70(ulong *param_1,ulong *param_2)

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
    if (uVar11 <= uVar8) goto LAB_00a25b94;
LAB_00a25be8:
    puVar12 = param_1 + 0xc;
    lVar9 = 2;
  }
  else {
    uVar6 = (ulong)(param_1[6] <= param_1[2] && param_1[4] < *param_1);
    uVar8 = param_1[0xe];
    uVar11 = param_1[10];
    if (uVar8 < uVar11) goto LAB_00a25be8;
LAB_00a25b94:
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
    if (uVar8 <= uVar6) goto LAB_00a25c28;
LAB_00a25c94:
    if (!bVar5) {
      puVar13 = puVar12;
      puVar14 = puVar1;
    }
    uVar8 = puVar13[2];
    puVar10 = param_1;
    if (uVar6 < uVar8) goto LAB_00a25cc8;
  }
  else {
    bVar5 = puVar12[2] <= puVar1[2] && *puVar12 < *puVar1;
    uVar6 = param_1[2];
    uVar8 = puVar7[2];
    bVar4 = bVar5;
    if (uVar6 < uVar8) goto LAB_00a25c94;
LAB_00a25c28:
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
    if (uVar6 < uVar8) goto LAB_00a25cc8;
  }
  puVar10 = param_1;
  if (uVar8 < uVar6 || *puVar13 <= *param_1) {
    puVar10 = puVar13;
    puVar13 = param_1;
  }
LAB_00a25cc8:
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


// ===== 00a25cec  FUN_00a25cec =====

void FUN_00a25cec(ulong *param_1,ulong *param_2,ulong *param_3)

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


// ===== 00a25fa8  FUN_00a25fa8  [FAILED] =====
/* decompilation failed: Exception while decompiling 00a25fa8: process: timeout
 */

// ===== 00a2639c  FUN_00a2639c  [FAILED] =====
/* decompilation failed: Exception while decompiling 00a2639c: process: timeout
 */

// ===== 00a268c0  FUN_00a268c0  [FAILED] =====
/* decompilation failed: Exception while decompiling 00a268c0: process: timeout
 */

// ===== 00a26d64  FUN_00a26d64  [FAILED] =====
/* decompilation failed: Exception while decompiling 00a26d64: process: timeout
 */

// ===== 00a2710c  FUN_00a2710c  [FAILED] =====
/* decompilation failed: Exception while decompiling 00a2710c: process: timeout
 */

// ===== 00a275b0  FUN_00a275b0 =====

void FUN_00a275b0(undefined8 *param_1,long param_2)

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
        if (lVar8 == 0) goto LAB_00a275cc;
        lVar2 = lVar8 + -0x20;
      } while (uVar4 < (ulong)puVar1[-2]);
      puVar7 = (undefined8 *)((long)param_1 + lVar8);
LAB_00a275cc:
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


// ===== 00a27644  FUN_00a27644 =====

void FUN_00a27644(ulong *param_1,long param_2)

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


// ===== 00a27704  core::slice::sort::unstable::heapsort::heapsort<addr2line::line::LineSequence,<core::slice::[{backref_15}]>::sort_unstable_by_key<u64,<{backref_23}::{backref_23}::Lines>::parse<gimli::read::endian_slice::EndianSlice<{backref_50}::endianity::LittleEndian>>::{closure#0}>::{closure#0}> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::unstable::heapsort::heapsort<addr2line::line::LineSequence,
   <core::slice::[{backref 15}]>::sort_unstable_by_key<u64, <{backref 23}::{backref
   23}::Lines>::parse<gimli::read::endian_slice::EndianSlice<{backref
   50}::endianity::LittleEndian>>::{closure#0}>::{closure#0}> */

void __rustcall
core::slice::sort::unstable::heapsort::
heapsort<addr2line::line::LineSequence,<core::slice::[_backref_15_]>::sort_unstable_by_key<u64,<_backref_23_::_backref_23_::Lines>::parse<gimli::read::endian_slice::EndianSlice<_backref_50_::endianity::LittleEndian>>::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar2 = param_2 + (param_2 >> 1);
  do {
    do {
      if (uVar2 == 0) {
        return;
      }
      uVar2 = uVar2 - 1;
      uVar3 = uVar2 - param_2;
      if (uVar2 < param_2) {
        puVar8 = param_1 + uVar2 * 4;
        uVar15 = param_1[1];
        uVar14 = *param_1;
        uVar13 = param_1[3];
        uVar12 = param_1[2];
        uVar3 = 0;
        uVar9 = *puVar8;
        uVar11 = puVar8[3];
        uVar10 = puVar8[2];
        param_1[1] = puVar8[1];
        *param_1 = uVar9;
        param_1[3] = uVar11;
        param_1[2] = uVar10;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8[3] = uVar13;
        puVar8[2] = uVar12;
      }
      uVar5 = (uVar3 & 0x3fffffffffffffff) << 1 | 1;
      uVar1 = param_2;
      if (uVar2 <= param_2) {
        uVar1 = uVar2;
      }
    } while (uVar1 <= uVar5);
    do {
      uVar4 = uVar3 * 2 + 2;
      if ((uVar4 < uVar1) && ((ulong)param_1[uVar5 * 4 + 2] < (ulong)param_1[uVar4 * 4 + 2])) {
        puVar8 = param_1 + uVar3 * 4;
        puVar7 = param_1 + (uVar5 + 1) * 4;
        uVar4 = puVar8[2];
        uVar6 = puVar7[2];
        uVar3 = uVar5 + 1;
        if (uVar6 <= uVar4) break;
      }
      else {
        puVar8 = param_1 + uVar3 * 4;
        puVar7 = param_1 + uVar5 * 4;
        uVar4 = puVar8[2];
        uVar6 = puVar7[2];
        uVar3 = uVar5;
        if (uVar6 <= uVar4) break;
      }
      uVar9 = puVar7[3];
      uVar10 = puVar8[3];
      uVar12 = puVar7[1];
      uVar11 = *puVar7;
      uVar14 = puVar8[1];
      uVar13 = *puVar8;
      puVar8[2] = uVar6;
      puVar8[3] = uVar9;
      uVar5 = (uVar3 & 0x3fffffffffffffff) << 1 | 1;
      puVar8[1] = uVar12;
      *puVar8 = uVar11;
      puVar7[2] = uVar4;
      puVar7[3] = uVar10;
      puVar7[1] = uVar14;
      *puVar7 = uVar13;
    } while (uVar5 < uVar1);
  } while( true );
}


// ===== 00a277f8  core[bcece726f298455b]::slice::sort::unstable::heapsort::heapsort::<addr2line[e17ec0026c2a32fb]::unit::UnitRange,<[addr2line[e17ec0026c2a32fb]::unit::UnitRange]>::sort_unstable_by_key<(u64,usize),<addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}> =====

/* core[bcece726f298455b]::slice::sort::unstable::heapsort::heapsort::<addr2line[e17ec0026c2a32fb]::unit::UnitRange,
   <[addr2line[e17ec0026c2a32fb]::unit::UnitRange]>::sort_unstable_by_key<(u64, usize),
   <addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}>
    */

void core[bcece726f298455b]::slice::sort::unstable::heapsort::heapsort::
     <addr2line[e17ec0026c2a32fb]::unit::UnitRange,<[addr2line[e17ec0026c2a32fb]::unit::UnitRange]>::sort_unstable_by_key<(u64,usize),<addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
               (undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar8 = param_2 + (param_2 >> 1);
  do {
    do {
      if (uVar8 == 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      uVar9 = uVar8 - param_2;
      if (uVar8 < param_2) {
        puVar2 = param_1 + uVar8 * 4;
        uVar16 = param_1[1];
        uVar15 = *param_1;
        uVar14 = param_1[3];
        uVar13 = param_1[2];
        uVar9 = 0;
        uVar7 = *puVar2;
        uVar12 = puVar2[3];
        uVar11 = puVar2[2];
        param_1[1] = puVar2[1];
        *param_1 = uVar7;
        param_1[3] = uVar12;
        param_1[2] = uVar11;
        puVar2[1] = uVar16;
        *puVar2 = uVar15;
        puVar2[3] = uVar14;
        puVar2[2] = uVar13;
      }
      uVar10 = (uVar9 & 0x3fffffffffffffff) << 1 | 1;
      uVar4 = param_2;
      if (uVar8 <= param_2) {
        uVar4 = uVar8;
      }
    } while (uVar4 <= uVar10);
    do {
      uVar1 = uVar9 * 2 + 2;
      if (uVar1 < uVar4) {
        bVar6 = (ulong)param_1[uVar10 * 4 + 2] < (ulong)param_1[uVar1 * 4 + 2];
        if (param_1[uVar10 * 4 + 1] != param_1[uVar1 * 4 + 1]) {
          bVar6 = (ulong)param_1[uVar10 * 4 + 1] < (ulong)param_1[uVar1 * 4 + 1];
        }
        uVar10 = uVar10 + bVar6;
      }
      puVar2 = param_1 + uVar9 * 4;
      puVar3 = param_1 + uVar10 * 4;
      uVar9 = puVar3[1];
      uVar5 = puVar3[2];
      uVar1 = puVar2[1];
      bVar6 = (ulong)puVar2[2] < uVar5;
      if (uVar1 != uVar9) {
        bVar6 = uVar1 < uVar9;
      }
      if (!bVar6) break;
      uVar7 = *puVar2;
      puVar3[2] = puVar2[2];
      *puVar2 = *puVar3;
      puVar2[1] = uVar9;
      uVar12 = puVar3[3];
      uVar11 = puVar2[3];
      *puVar3 = uVar7;
      puVar3[1] = uVar1;
      uVar1 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      puVar2[2] = uVar5;
      puVar2[3] = uVar12;
      puVar3[3] = uVar11;
      uVar9 = uVar10;
      uVar10 = uVar1;
    } while (uVar1 < uVar4);
  } while( true );
}


// ===== 00a278f8  core::slice::sort::unstable::heapsort::heapsort<addr2line::function::FunctionAddress,<core::slice::[{backref_15}]>::sort_unstable_by_key<u64,<{backref_23}::[0]::{backref_23}::Functions<gimli::read::endian_slice::EndianSlice<{backref_56}::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::unstable::heapsort::heapsort<addr2line::function::FunctionAddress,
   <core::slice::[{backref 15}]>::sort_unstable_by_key<u64, <{backref 23}::[0]::{backref
   23}::Functions<gimli::read::endian_slice::EndianSlice<{backref
   56}::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> */

void __rustcall
core::slice::sort::unstable::heapsort::
heapsort<addr2line::function::FunctionAddress,<core::slice::[_backref_15_]>::sort_unstable_by_key<u64,<_backref_23_::[0]::_backref_23_::Functions<gimli::read::endian_slice::EndianSlice<_backref_56_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
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


// ===== 00a279fc  core::slice::sort::unstable::heapsort::heapsort<addr2line::function::InlinedFunctionAddress,<core::slice::[{backref_15}]>::sort_unstable_by<<{backref_23}::[1]::{backref_23}::Function<gimli::read::endian_slice::EndianSlice<{backref_57}::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::unstable::heapsort::heapsort<addr2line::function::InlinedFunctionAddress,
   <core::slice::[{backref 15}]>::sort_unstable_by<<{backref 23}::[1]::{backref
   23}::Function<gimli::read::endian_slice::EndianSlice<{backref
   57}::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> */

void __rustcall
core::slice::sort::unstable::heapsort::
heapsort<addr2line::function::InlinedFunctionAddress,<core::slice::[_backref_15_]>::sort_unstable_by<<_backref_23_::[1]::_backref_23_::Function<gimli::read::endian_slice::EndianSlice<_backref_57_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar4 = param_2 + (param_2 >> 1);
  do {
    do {
      if (uVar4 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar5 = uVar4 - param_2;
      if (uVar4 < param_2) {
        puVar1 = param_1 + uVar4 * 4;
        uVar19 = param_1[1];
        uVar18 = *param_1;
        uVar17 = param_1[3];
        uVar16 = param_1[2];
        uVar5 = 0;
        uVar13 = *puVar1;
        uVar15 = puVar1[3];
        uVar14 = puVar1[2];
        param_1[1] = puVar1[1];
        *param_1 = uVar13;
        param_1[3] = uVar15;
        param_1[2] = uVar14;
        puVar1[1] = uVar19;
        *puVar1 = uVar18;
        puVar1[3] = uVar17;
        puVar1[2] = uVar16;
      }
      uVar3 = (uVar5 & 0x3fffffffffffffff) << 1 | 1;
      uVar2 = param_2;
      if (uVar4 <= param_2) {
        uVar2 = uVar4;
      }
    } while (uVar2 <= uVar3);
    do {
      uVar7 = uVar5 * 2 + 2;
      if (uVar7 < uVar2) {
        uVar9 = (param_1 + uVar3 * 4)[2];
        uVar10 = (param_1 + uVar7 * 4)[2];
        if (uVar9 < uVar10) {
          uVar7 = 1;
        }
        else {
          uVar7 = (ulong)(uVar9 <= uVar10 && (ulong)param_1[uVar3 * 4] < (ulong)param_1[uVar7 * 4]);
        }
        uVar3 = uVar7 + uVar3;
        puVar6 = param_1 + uVar5 * 4;
        puVar8 = param_1 + uVar3 * 4;
        uVar9 = puVar6[2];
        uVar7 = puVar8[2];
        if (uVar9 < uVar7) goto LAB_00a27a58;
LAB_00a27b18:
        if (uVar7 < uVar9) break;
        uVar11 = *puVar8;
        uVar10 = *puVar6;
        uVar5 = uVar3;
        if (uVar11 <= uVar10) break;
      }
      else {
        puVar6 = param_1 + uVar5 * 4;
        puVar8 = param_1 + uVar3 * 4;
        uVar9 = puVar6[2];
        uVar7 = puVar8[2];
        if (uVar7 <= uVar9) goto LAB_00a27b18;
LAB_00a27a58:
        uVar10 = *puVar6;
        uVar11 = *puVar8;
        uVar5 = uVar3;
      }
      uVar12 = puVar8[1];
      uVar3 = puVar6[1];
      puVar8[2] = uVar9;
      *puVar6 = uVar11;
      puVar6[1] = uVar12;
      uVar11 = puVar8[3];
      uVar9 = puVar6[3];
      *puVar8 = uVar10;
      puVar8[1] = uVar3;
      uVar3 = (uVar5 & 0x3fffffffffffffff) << 1 | 1;
      puVar6[2] = uVar7;
      puVar6[3] = uVar11;
      puVar8[3] = uVar9;
    } while (uVar3 < uVar2);
  } while( true );
}


// ===== 00a27b34  core::slice::sort::unstable::heapsort::heapsort<std::backtrace_rs::symbolize::gimli::elf::ParsedSym,<core::slice::[{backref_15}]>::sort_unstable_by_key<u64,<{backref_23}::{backref_23}::Object>::parse::{closure#0}>::{closure#0}> =====

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


// ===== 00a27c38  core::slice::sort::unstable::heapsort::heapsort<(gimli::common::DebugInfoOffset,{backref_24}::DebugArangesOffset),<core::slice::[{backref_15}]>::sort_unstable_by_key<{backref_16},<addr2line::unit::{backref_52}::ResUnits<{backref_26}::read::endian_slice::EndianSlice<{backref_26}::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::unstable::heapsort::heapsort<(gimli::common::DebugInfoOffset, {backref
   24}::DebugArangesOffset), <core::slice::[{backref 15}]>::sort_unstable_by_key<{backref 16},
   <addr2line::unit::{backref 52}::ResUnits<{backref 26}::read::endian_slice::EndianSlice<{backref
   26}::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}> */

void __rustcall
core::slice::sort::unstable::heapsort::
heapsort<(gimli::common::DebugInfoOffset,_backref_24_::DebugArangesOffset),<core::slice::[_backref_15_]>::sort_unstable_by_key<_backref_16_,<addr2line::unit::_backref_52_::ResUnits<_backref_26_::read::endian_slice::EndianSlice<_backref_26_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar2 = param_2 + (param_2 >> 1);
  do {
    do {
      if (uVar2 == 0) {
        return;
      }
      uVar2 = uVar2 - 1;
      uVar3 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar3 = 0;
        uVar13 = param_1[1];
        uVar12 = *param_1;
        uVar11 = param_1[uVar2 * 2];
        param_1[1] = (param_1 + uVar2 * 2)[1];
        *param_1 = uVar11;
        (param_1 + uVar2 * 2)[1] = uVar13;
        param_1[uVar2 * 2] = uVar12;
      }
      uVar5 = (uVar3 & 0x3fffffffffffffff) << 1 | 1;
      uVar1 = param_2;
      if (uVar2 <= param_2) {
        uVar1 = uVar2;
      }
    } while (uVar1 <= uVar5);
    do {
      uVar6 = uVar3 * 2 + 2;
      if ((uVar6 < uVar1) && ((ulong)param_1[uVar5 * 2] < (ulong)param_1[uVar6 * 2])) {
        puVar7 = param_1 + uVar3 * 2;
        puVar4 = param_1 + (uVar5 + 1) * 2;
        uVar6 = *puVar7;
        uVar8 = *puVar4;
        uVar3 = uVar5 + 1;
        if (uVar8 <= uVar6) break;
      }
      else {
        puVar7 = param_1 + uVar3 * 2;
        puVar4 = param_1 + uVar5 * 2;
        uVar6 = *puVar7;
        uVar8 = *puVar4;
        uVar3 = uVar5;
        if (uVar8 <= uVar6) break;
      }
      uVar9 = puVar4[1];
      uVar10 = puVar7[1];
      uVar5 = (uVar3 & 0x3fffffffffffffff) << 1 | 1;
      *puVar7 = uVar8;
      puVar7[1] = uVar9;
      *puVar4 = uVar6;
      puVar4[1] = uVar10;
    } while (uVar5 < uVar1);
  } while( true );
}


// ===== 00a27d1c  FUN_00a27d1c =====

void FUN_00a27d1c(undefined8 *param_1,ulong param_2,undefined8 *param_3,int param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar13 = param_1;
  if (0x20 < param_2) {
    do {
      while( true ) {
        if (param_4 == 0) {
          core::slice::sort::unstable::heapsort::
          heapsort<addr2line::line::LineSequence,<core::slice::[_backref_15_]>::sort_unstable_by_key<u64,<_backref_23_::_backref_23_::Lines>::parse<gimli::read::endian_slice::EndianSlice<_backref_50_::endianity::LittleEndian>>::_closure_0_>::_closure_0_>
                    (puVar13,param_2);
          return;
        }
        if (0x3f < param_2) break;
        uVar3 = puVar13[2];
        uVar5 = (puVar13 + (param_2 >> 3) * 0x10)[2];
        uVar6 = (puVar13 + (param_2 >> 3) * 0x1c)[2];
        puVar7 = puVar13 + (param_2 >> 3) * 0x1c;
        if (uVar3 < uVar5 == uVar5 < uVar6) {
          puVar7 = puVar13 + (param_2 >> 3) * 0x10;
        }
        puVar1 = puVar13;
        if (uVar3 < uVar5 == uVar3 < uVar6) {
          puVar1 = puVar7;
        }
        lVar10 = param_2 << 5;
        lVar4 = (long)puVar1 - (long)puVar13;
        if (param_3 != (undefined8 *)0x0) goto LAB_00a27e44;
LAB_00a27e58:
        uVar18 = puVar13[1];
        uVar17 = *puVar13;
        uVar16 = puVar13[3];
        uVar14 = puVar13[2];
        puVar7 = (undefined8 *)((long)puVar13 + lVar4);
        uVar3 = 0;
        uVar20 = puVar7[1];
        uVar19 = *puVar7;
        uVar15 = puVar7[2];
        puVar13[3] = puVar7[3];
        puVar13[2] = uVar15;
        puVar13[1] = uVar20;
        *puVar13 = uVar19;
        puVar7[1] = uVar18;
        *puVar7 = uVar17;
        puVar7[3] = uVar16;
        puVar7[2] = uVar14;
        uVar5 = puVar13[2];
        uStack_68 = puVar13[5];
        local_70 = puVar13[4];
        uStack_58 = puVar13[7];
        local_60 = puVar13[6];
        puVar7 = puVar13 + 8;
        lVar4 = lVar10 + -0x40;
        lVar12 = lVar10 + -0x60;
        do {
          lVar9 = lVar12;
          lVar11 = lVar4;
          puVar1 = puVar13 + uVar3 * 4 + 4;
          uVar14 = *puVar1;
          uVar16 = puVar1[3];
          uVar15 = puVar1[2];
          if ((ulong)puVar7[2] < uVar5) {
            uVar3 = uVar3 + 1;
          }
          puVar7[-3] = puVar1[1];
          puVar7[-4] = uVar14;
          puVar7[-1] = uVar16;
          puVar7[-2] = uVar15;
          puVar8 = puVar7 + 4;
          uVar14 = *puVar7;
          uVar16 = puVar7[3];
          uVar15 = puVar7[2];
          puVar1[1] = puVar7[1];
          *puVar1 = uVar14;
          puVar1[3] = uVar16;
          puVar1[2] = uVar15;
          puVar7 = puVar8;
          lVar4 = lVar11 + -0x20;
          lVar12 = lVar9 + -0x20;
        } while (puVar8 < (undefined8 *)((long)puVar13 + lVar10));
        do {
          puVar7 = &local_70;
          if (lVar9 != 0) {
            puVar7 = puVar8;
          }
          puVar1 = puVar13 + uVar3 * 4 + 4;
          uVar6 = puVar7[2];
          uVar16 = *puVar1;
          uVar15 = puVar1[3];
          uVar14 = puVar1[2];
          puVar8[-3] = puVar1[1];
          puVar8[-4] = uVar16;
          puVar8[-1] = uVar15;
          puVar8[-2] = uVar14;
          uVar16 = *puVar7;
          uVar15 = puVar7[3];
          uVar14 = puVar7[2];
          puVar1[1] = puVar7[1];
          *puVar1 = uVar16;
          puVar1[3] = uVar15;
          puVar1[2] = uVar14;
          if (uVar6 < uVar5) {
            uVar3 = uVar3 + 1;
          }
          lVar11 = lVar11 + -0x20;
          puVar8 = puVar8 + 4;
          lVar9 = lVar9 + -0x20;
        } while (lVar11 != 0);
        if (param_2 <= uVar3) {
LAB_00a28078:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xa2807c);
          (*pcVar2)();
        }
        uStack_68 = puVar13[1];
        local_70 = *puVar13;
        uStack_58 = puVar13[3];
        local_60 = puVar13[2];
        puVar7 = puVar13 + uVar3 * 4;
        param_1 = puVar7 + 4;
        uVar16 = puVar7[1];
        uVar15 = *puVar7;
        uVar14 = puVar7[2];
        param_2 = param_2 + ~uVar3;
        puVar13[3] = puVar7[3];
        puVar13[2] = uVar14;
        puVar13[1] = uVar16;
        *puVar13 = uVar15;
        puVar7[1] = uStack_68;
        *puVar7 = local_70;
        puVar7[3] = uStack_58;
        puVar7[2] = local_60;
        FUN_00a27d1c(puVar13,uVar3,param_3,param_4 + -1,param_5);
        puVar13 = param_1;
        param_3 = puVar7;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto LAB_00a27d48;
      }
      lVar4 = FUN_00a25620(puVar13);
      lVar10 = param_2 << 5;
      lVar4 = lVar4 - (long)puVar13;
      if (param_3 == (undefined8 *)0x0) goto LAB_00a27e58;
LAB_00a27e44:
      lVar10 = param_2 * 0x20;
      puVar7 = (undefined8 *)((long)puVar13 + lVar4);
      if ((ulong)param_3[2] < (ulong)puVar7[2]) goto LAB_00a27e58;
      uVar18 = puVar13[1];
      uVar17 = *puVar13;
      uVar16 = puVar13[3];
      uVar14 = puVar13[2];
      uVar3 = 0;
      uVar20 = puVar7[1];
      uVar19 = *puVar7;
      uVar15 = puVar7[2];
      puVar13[3] = puVar7[3];
      puVar13[2] = uVar15;
      puVar13[1] = uVar20;
      *puVar13 = uVar19;
      puVar7[1] = uVar18;
      *puVar7 = uVar17;
      puVar7[3] = uVar16;
      puVar7[2] = uVar14;
      uVar5 = puVar13[2];
      uStack_68 = puVar13[5];
      local_70 = puVar13[4];
      uStack_58 = puVar13[7];
      local_60 = puVar13[6];
      puVar7 = puVar13 + 8;
      lVar4 = lVar10 + -0x40;
      lVar10 = lVar10 + -0x60;
      do {
        lVar11 = lVar10;
        lVar12 = lVar4;
        puVar1 = puVar13 + uVar3 * 4 + 4;
        uVar14 = *puVar1;
        uVar16 = puVar1[3];
        uVar15 = puVar1[2];
        if ((ulong)puVar7[2] <= uVar5) {
          uVar3 = uVar3 + 1;
        }
        puVar7[-3] = puVar1[1];
        puVar7[-4] = uVar14;
        puVar7[-1] = uVar16;
        puVar7[-2] = uVar15;
        puVar8 = puVar7 + 4;
        uVar14 = *puVar7;
        uVar16 = puVar7[3];
        uVar15 = puVar7[2];
        puVar1[1] = puVar7[1];
        *puVar1 = uVar14;
        puVar1[3] = uVar16;
        puVar1[2] = uVar15;
        puVar7 = puVar8;
        lVar4 = lVar12 + -0x20;
        lVar10 = lVar11 + -0x20;
      } while (puVar8 < puVar13 + param_2 * 4);
      do {
        puVar7 = &local_70;
        if (lVar11 != 0) {
          puVar7 = puVar8;
        }
        puVar1 = puVar13 + uVar3 * 4 + 4;
        uVar6 = puVar7[2];
        uVar16 = *puVar1;
        uVar15 = puVar1[3];
        uVar14 = puVar1[2];
        puVar8[-3] = puVar1[1];
        puVar8[-4] = uVar16;
        puVar8[-1] = uVar15;
        puVar8[-2] = uVar14;
        uVar16 = *puVar7;
        uVar15 = puVar7[3];
        uVar14 = puVar7[2];
        puVar1[1] = puVar7[1];
        *puVar1 = uVar16;
        puVar1[3] = uVar15;
        puVar1[2] = uVar14;
        if (uVar6 <= uVar5) {
          uVar3 = uVar3 + 1;
        }
        lVar12 = lVar12 + -0x20;
        puVar8 = puVar8 + 4;
        lVar11 = lVar11 + -0x20;
      } while (lVar12 != 0);
      if (param_2 <= uVar3) goto LAB_00a28078;
      uStack_68 = puVar13[1];
      local_70 = *puVar13;
      uStack_58 = puVar13[3];
      local_60 = puVar13[2];
      puVar7 = puVar13 + uVar3 * 4;
      param_3 = (undefined8 *)0x0;
      param_2 = param_2 - (uVar3 + 1);
      uVar16 = puVar7[1];
      uVar15 = *puVar7;
      uVar14 = puVar7[2];
      puVar13[3] = puVar7[3];
      puVar13[2] = uVar14;
      puVar13[1] = uVar16;
      *puVar13 = uVar15;
      param_1 = puVar13 + (uVar3 + 1) * 4;
      puVar7[1] = uStack_68;
      *puVar7 = local_70;
      puVar7[3] = uStack_58;
      puVar7[2] = local_60;
      puVar13 = param_1;
      param_4 = param_4 + -1;
    } while (0x20 < param_2);
  }
LAB_00a27d48:
  FUN_00a25fa8(param_1,param_2);
  return;
}


// ===== 00a2807c  FUN_00a2807c =====

void FUN_00a2807c(undefined8 *param_1,ulong param_2,undefined8 *param_3,int param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar17 = param_1;
  if (0x20 < param_2) {
    do {
      while( true ) {
        if (param_4 == 0) {
          core[bcece726f298455b]::slice::sort::unstable::heapsort::heapsort::
          <addr2line[e17ec0026c2a32fb]::unit::UnitRange,<[addr2line[e17ec0026c2a32fb]::unit::UnitRange]>::sort_unstable_by_key<(u64,usize),<addr2line[e17ec0026c2a32fb]::unit::ResUnits<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
                    (puVar17,param_2);
          return;
        }
        puVar12 = puVar17 + (param_2 >> 3) * 0x1c;
        puVar11 = puVar17 + (param_2 >> 3) * 0x10;
        if (0x3f < param_2) break;
        uVar9 = puVar11[1];
        uVar1 = puVar17[1];
        uVar2 = puVar12[1];
        bVar7 = (ulong)puVar17[2] < (ulong)puVar11[2];
        if (uVar1 != uVar9) {
          bVar7 = uVar1 < uVar9;
        }
        bVar6 = (ulong)puVar17[2] < (ulong)puVar12[2];
        if (uVar1 != uVar2) {
          bVar6 = uVar1 < uVar2;
        }
        puVar8 = puVar17;
        if (bVar7 == bVar6) {
          bVar6 = (ulong)puVar11[2] < (ulong)puVar12[2];
          if (uVar9 != uVar2) {
            bVar6 = uVar9 < uVar2;
          }
          puVar8 = puVar12;
          if (bVar7 == bVar6) {
            puVar8 = puVar11;
          }
        }
        lVar13 = param_2 << 5;
        lVar10 = (long)puVar8 - (long)puVar17;
        if (param_3 != (undefined8 *)0x0) goto LAB_00a281cc;
LAB_00a281f0:
        uVar22 = puVar17[1];
        uVar21 = *puVar17;
        uVar20 = puVar17[3];
        uVar18 = puVar17[2];
        puVar11 = (undefined8 *)((long)puVar17 + lVar10);
        uVar9 = 0;
        uVar24 = puVar11[1];
        uVar23 = *puVar11;
        uVar19 = puVar11[2];
        puVar17[3] = puVar11[3];
        puVar17[2] = uVar19;
        puVar17[1] = uVar24;
        *puVar17 = uVar23;
        puVar11[1] = uVar22;
        *puVar11 = uVar21;
        puVar11[3] = uVar20;
        puVar11[2] = uVar18;
        uVar1 = puVar17[1];
        uVar2 = puVar17[2];
        uStack_78 = puVar17[5];
        local_80 = puVar17[4];
        uStack_68 = puVar17[7];
        local_70 = puVar17[6];
        puVar11 = puVar17 + 8;
        lVar10 = lVar13 + -0x40;
        lVar16 = lVar13 + -0x60;
        do {
          lVar14 = lVar16;
          lVar15 = lVar10;
          puVar8 = puVar17 + uVar9 * 4 + 4;
          uVar18 = *puVar8;
          uVar20 = puVar8[3];
          uVar19 = puVar8[2];
          puVar11[-3] = puVar8[1];
          puVar11[-4] = uVar18;
          puVar11[-1] = uVar20;
          puVar11[-2] = uVar19;
          puVar12 = puVar11 + 4;
          uVar18 = *puVar11;
          uVar20 = puVar11[3];
          uVar19 = puVar11[2];
          bVar7 = (ulong)puVar11[2] < uVar2;
          if (puVar11[1] != uVar1) {
            bVar7 = (ulong)puVar11[1] < uVar1;
          }
          uVar9 = uVar9 + bVar7;
          puVar8[1] = puVar11[1];
          *puVar8 = uVar18;
          puVar8[3] = uVar20;
          puVar8[2] = uVar19;
          puVar11 = puVar12;
          lVar10 = lVar15 + -0x20;
          lVar16 = lVar14 + -0x20;
        } while (puVar12 < (undefined8 *)((long)puVar17 + lVar13));
        do {
          puVar11 = puVar17 + uVar9 * 4 + 4;
          bVar7 = lVar14 != 0;
          lVar14 = lVar14 + -0x20;
          puVar8 = &local_80;
          if (bVar7) {
            puVar8 = puVar12;
          }
          uVar20 = *puVar11;
          uVar19 = puVar11[3];
          uVar18 = puVar11[2];
          uVar3 = puVar8[1];
          uVar4 = puVar8[2];
          puVar12[-3] = puVar11[1];
          puVar12[-4] = uVar20;
          puVar12[-1] = uVar19;
          puVar12[-2] = uVar18;
          puVar12 = puVar12 + 4;
          uVar20 = *puVar8;
          uVar19 = puVar8[3];
          uVar18 = puVar8[2];
          bVar7 = uVar4 < uVar2;
          if (uVar3 != uVar1) {
            bVar7 = uVar3 < uVar1;
          }
          lVar15 = lVar15 + -0x20;
          puVar11[1] = puVar8[1];
          *puVar11 = uVar20;
          puVar11[3] = uVar19;
          puVar11[2] = uVar18;
          uVar9 = uVar9 + bVar7;
        } while (lVar15 != 0);
        if (param_2 <= uVar9) {
LAB_00a28404:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xa28408);
          (*pcVar5)();
        }
        uStack_78 = puVar17[1];
        local_80 = *puVar17;
        uStack_68 = puVar17[3];
        local_70 = puVar17[2];
        puVar11 = puVar17 + uVar9 * 4;
        param_1 = puVar11 + 4;
        uVar20 = puVar11[1];
        uVar19 = *puVar11;
        uVar18 = puVar11[2];
        param_2 = param_2 + ~uVar9;
        puVar17[3] = puVar11[3];
        puVar17[2] = uVar18;
        puVar17[1] = uVar20;
        *puVar17 = uVar19;
        puVar11[1] = uStack_78;
        *puVar11 = local_80;
        puVar11[3] = uStack_68;
        puVar11[2] = local_70;
        FUN_00a2807c(puVar17,uVar9,param_3,param_4 + -1,param_5);
        puVar17 = param_1;
        param_3 = puVar11;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto LAB_00a280ac;
      }
      lVar10 = FUN_00a256ec(puVar17);
      lVar13 = param_2 << 5;
      lVar10 = lVar10 - (long)puVar17;
      if (param_3 == (undefined8 *)0x0) goto LAB_00a281f0;
LAB_00a281cc:
      lVar13 = param_2 * 0x20;
      puVar11 = (undefined8 *)((long)puVar17 + lVar10);
      bVar7 = (ulong)param_3[2] < (ulong)puVar11[2];
      if (param_3[1] != puVar11[1]) {
        bVar7 = (ulong)param_3[1] < (ulong)puVar11[1];
      }
      if (bVar7) goto LAB_00a281f0;
      uVar22 = puVar17[1];
      uVar21 = *puVar17;
      uVar20 = puVar17[3];
      uVar18 = puVar17[2];
      uVar9 = 0;
      uVar24 = puVar11[1];
      uVar23 = *puVar11;
      uVar19 = puVar11[2];
      puVar17[3] = puVar11[3];
      puVar17[2] = uVar19;
      puVar17[1] = uVar24;
      *puVar17 = uVar23;
      puVar11[1] = uVar22;
      *puVar11 = uVar21;
      puVar11[3] = uVar20;
      puVar11[2] = uVar18;
      uVar1 = puVar17[1];
      uVar2 = puVar17[2];
      uStack_78 = puVar17[5];
      local_80 = puVar17[4];
      uStack_68 = puVar17[7];
      local_70 = puVar17[6];
      puVar11 = puVar17 + 8;
      lVar10 = lVar13 + -0x40;
      lVar13 = lVar13 + -0x60;
      do {
        lVar15 = lVar13;
        lVar16 = lVar10;
        puVar8 = puVar17 + uVar9 * 4 + 4;
        uVar18 = *puVar8;
        uVar20 = puVar8[3];
        uVar19 = puVar8[2];
        puVar11[-3] = puVar8[1];
        puVar11[-4] = uVar18;
        puVar11[-1] = uVar20;
        puVar11[-2] = uVar19;
        puVar12 = puVar11 + 4;
        uVar18 = *puVar11;
        uVar20 = puVar11[3];
        uVar19 = puVar11[2];
        bVar7 = (ulong)puVar11[2] <= uVar2;
        if (uVar1 != puVar11[1]) {
          bVar7 = (ulong)puVar11[1] <= uVar1;
        }
        uVar9 = uVar9 + bVar7;
        puVar8[1] = puVar11[1];
        *puVar8 = uVar18;
        puVar8[3] = uVar20;
        puVar8[2] = uVar19;
        puVar11 = puVar12;
        lVar10 = lVar16 + -0x20;
        lVar13 = lVar15 + -0x20;
      } while (puVar12 < puVar17 + param_2 * 4);
      do {
        puVar11 = puVar17 + uVar9 * 4 + 4;
        bVar7 = lVar15 != 0;
        lVar15 = lVar15 + -0x20;
        puVar8 = &local_80;
        if (bVar7) {
          puVar8 = puVar12;
        }
        uVar20 = *puVar11;
        uVar19 = puVar11[3];
        uVar18 = puVar11[2];
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        puVar12[-3] = puVar11[1];
        puVar12[-4] = uVar20;
        puVar12[-1] = uVar19;
        puVar12[-2] = uVar18;
        puVar12 = puVar12 + 4;
        uVar20 = *puVar8;
        uVar19 = puVar8[3];
        uVar18 = puVar8[2];
        bVar7 = uVar4 <= uVar2;
        if (uVar1 != uVar3) {
          bVar7 = uVar3 <= uVar1;
        }
        lVar16 = lVar16 + -0x20;
        puVar11[1] = puVar8[1];
        *puVar11 = uVar20;
        puVar11[3] = uVar19;
        puVar11[2] = uVar18;
        uVar9 = uVar9 + bVar7;
      } while (lVar16 != 0);
      if (param_2 <= uVar9) goto LAB_00a28404;
      uStack_78 = puVar17[1];
      local_80 = *puVar17;
      uStack_68 = puVar17[3];
      local_70 = puVar17[2];
      puVar11 = puVar17 + uVar9 * 4;
      param_3 = (undefined8 *)0x0;
      param_2 = param_2 - (uVar9 + 1);
      uVar20 = puVar11[1];
      uVar19 = *puVar11;
      uVar18 = puVar11[2];
      puVar17[3] = puVar11[3];
      puVar17[2] = uVar18;
      puVar17[1] = uVar20;
      *puVar17 = uVar19;
      param_1 = puVar17 + (uVar9 + 1) * 4;
      puVar11[1] = uStack_78;
      *puVar11 = local_80;
      puVar11[3] = uStack_68;
      puVar11[2] = local_70;
      puVar17 = param_1;
      param_4 = param_4 + -1;
    } while (0x20 < param_2);
  }
LAB_00a280ac:
  FUN_00a2639c(param_1,param_2);
  return;
}


// ===== 00a28430  FUN_00a28430 =====

void FUN_00a28430(ulong *param_1,ulong param_2,ulong *param_3,int param_4,undefined8 param_5)

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
          heapsort<addr2line::function::FunctionAddress,<core::slice::[_backref_15_]>::sort_unstable_by_key<u64,<_backref_23_::[0]::_backref_23_::Functions<gimli::read::endian_slice::EndianSlice<_backref_56_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
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
        if (param_3 != (ulong *)0x0) goto LAB_00a28578;
LAB_00a2858c:
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
LAB_00a2882c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xa28830);
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
        FUN_00a28430(puVar12,uVar3,param_3,param_4 + -1,param_5);
        puVar12 = param_1;
        param_3 = puVar7;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto LAB_00a28460;
      }
      lVar4 = FUN_00a257d8(puVar12);
      lVar4 = lVar4 - (long)puVar12;
      if (param_3 == (ulong *)0x0) goto LAB_00a2858c;
LAB_00a28578:
      puVar7 = (ulong *)((long)puVar12 + lVar4);
      if (*param_3 < *puVar7) goto LAB_00a2858c;
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
      if (param_2 <= uVar3) goto LAB_00a2882c;
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
LAB_00a28460:
  FUN_00a268c0(param_1,param_2);
  return;
}


// ===== 00a28830  FUN_00a28830 =====

void FUN_00a28830(ulong *param_1,ulong param_2,ulong *param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  puVar14 = param_1;
  if (0x20 < param_2) {
    do {
      if (param_4 == 0) {
        core::slice::sort::unstable::heapsort::
        heapsort<addr2line::function::InlinedFunctionAddress,<core::slice::[_backref_15_]>::sort_unstable_by<<_backref_23_::[1]::_backref_23_::Function<gimli::read::endian_slice::EndianSlice<_backref_57_::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                  (puVar14,param_2);
        return;
      }
      puVar4 = puVar14 + (param_2 >> 3) * 0x1c;
      puVar15 = puVar14 + (param_2 >> 3) * 0x10;
      if (param_2 < 0x40) {
        uVar12 = puVar14[2];
        uVar5 = puVar15[2];
        uVar9 = *puVar14;
        puVar3 = puVar14;
        if (uVar5 <= uVar12) {
          uVar6 = puVar4[2];
          uVar7 = *puVar4;
          bVar8 = (uVar5 > uVar12 || uVar12 == uVar5) && uVar9 < *puVar15;
          if (uVar6 <= uVar12) {
            if (bVar8 == ((uVar6 > uVar12 || uVar12 == uVar6) && uVar9 < uVar7)) goto LAB_00a28930;
          }
          else if (bVar8) goto LAB_00a2892c;
        }
        else {
          uVar6 = puVar4[2];
          uVar7 = *puVar4;
          if ((uVar12 < uVar6) || ((uVar12 <= uVar6 && (uVar9 < uVar7)))) {
LAB_00a2892c:
            bVar8 = true;
LAB_00a28930:
            puVar3 = puVar4;
            if (bVar8 == (uVar5 < uVar6 || uVar5 <= uVar6 && *puVar15 < uVar7)) {
              puVar3 = puVar15;
            }
          }
        }
      }
      else {
        puVar3 = (ulong *)FUN_00a258a8(puVar14);
      }
      lVar10 = param_2 * 0x20;
      param_4 = param_4 + -1;
      if (param_3 == (ulong *)0x0) {
LAB_00a28a80:
        uVar16 = puVar14[1];
        uVar7 = *puVar14;
        uVar6 = puVar14[3];
        uVar9 = puVar14[2];
        puVar15 = (ulong *)((long)puVar14 + ((long)puVar3 - (long)puVar14));
        uVar5 = 0;
        uVar18 = puVar15[1];
        uVar17 = *puVar15;
        uVar12 = puVar15[2];
        puVar14[3] = puVar15[3];
        puVar14[2] = uVar12;
        puVar14[1] = uVar18;
        *puVar14 = uVar17;
        puVar15[1] = uVar16;
        *puVar15 = uVar7;
        puVar15[3] = uVar6;
        puVar15[2] = uVar9;
        uVar9 = puVar14[2];
        uVar12 = *puVar14;
        uStack_78 = puVar14[5];
        local_80 = puVar14[4];
        uStack_68 = puVar14[7];
        local_70 = puVar14[6];
        puVar15 = puVar14 + 8;
        lVar1 = lVar10 + -0x40;
        lVar10 = lVar10 + -0x60;
        do {
          lVar11 = lVar10;
          lVar13 = lVar1;
          uVar6 = puVar15[2];
          if (uVar9 <= uVar6) {
            uVar6 = (ulong)((uVar9 > uVar6 || uVar6 == uVar9) && *puVar15 < uVar12);
          }
          else {
            uVar6 = 1;
          }
          puVar4 = puVar14 + uVar5 * 4 + 4;
          uVar5 = uVar6 + uVar5;
          uVar16 = *puVar4;
          uVar7 = puVar4[3];
          uVar6 = puVar4[2];
          puVar15[-3] = puVar4[1];
          puVar15[-4] = uVar16;
          puVar15[-1] = uVar7;
          puVar15[-2] = uVar6;
          puVar3 = puVar15 + 4;
          uVar16 = *puVar15;
          uVar7 = puVar15[3];
          uVar6 = puVar15[2];
          puVar4[1] = puVar15[1];
          *puVar4 = uVar16;
          puVar4[3] = uVar7;
          puVar4[2] = uVar6;
          puVar15 = puVar3;
          lVar1 = lVar13 + -0x20;
          lVar10 = lVar11 + -0x20;
        } while (puVar3 < puVar14 + param_2 * 4);
        do {
          puVar15 = &local_80;
          if (lVar11 != 0) {
            puVar15 = puVar3;
          }
          uVar6 = puVar15[2];
          if (uVar9 <= uVar6) {
            uVar6 = (ulong)((uVar9 > uVar6 || uVar6 == uVar9) && *puVar15 < uVar12);
          }
          else {
            uVar6 = 1;
          }
          puVar4 = puVar14 + uVar5 * 4 + 4;
          lVar13 = lVar13 + -0x20;
          uVar5 = uVar6 + uVar5;
          lVar11 = lVar11 + -0x20;
          uVar16 = *puVar4;
          uVar7 = puVar4[3];
          uVar6 = puVar4[2];
          puVar3[-3] = puVar4[1];
          puVar3[-4] = uVar16;
          puVar3[-1] = uVar7;
          puVar3[-2] = uVar6;
          uVar16 = *puVar15;
          uVar7 = puVar15[3];
          uVar6 = puVar15[2];
          puVar4[1] = puVar15[1];
          *puVar4 = uVar16;
          puVar4[3] = uVar7;
          puVar4[2] = uVar6;
          puVar3 = puVar3 + 4;
        } while (lVar13 != 0);
        if (param_2 <= uVar5) {
LAB_00a28c50:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xa28c54);
          (*pcVar2)();
        }
        uStack_78 = puVar14[1];
        local_80 = *puVar14;
        uStack_68 = puVar14[3];
        local_70 = puVar14[2];
        puVar15 = puVar14 + uVar5 * 4;
        uVar9 = ~uVar5;
        param_1 = puVar15 + 4;
        uVar7 = puVar15[1];
        uVar6 = *puVar15;
        uVar12 = puVar15[2];
        puVar14[3] = puVar15[3];
        puVar14[2] = uVar12;
        puVar14[1] = uVar7;
        *puVar14 = uVar6;
        puVar15[1] = uStack_78;
        *puVar15 = local_80;
        puVar15[3] = uStack_68;
        puVar15[2] = local_70;
        FUN_00a28830(puVar14,uVar5,param_3,param_4,param_5);
      }
      else {
        puVar15 = (ulong *)((long)puVar14 + ((long)puVar3 - (long)puVar14));
        if ((param_3[2] < puVar15[2]) || (param_3[2] <= puVar15[2] && *param_3 < *puVar15))
        goto LAB_00a28a80;
        uVar16 = puVar14[1];
        uVar7 = *puVar14;
        uVar6 = puVar14[3];
        uVar9 = puVar14[2];
        uVar5 = 0;
        uVar18 = puVar15[1];
        uVar17 = *puVar15;
        uVar12 = puVar15[2];
        puVar14[3] = puVar15[3];
        puVar14[2] = uVar12;
        puVar14[1] = uVar18;
        *puVar14 = uVar17;
        puVar15[1] = uVar16;
        *puVar15 = uVar7;
        puVar15[3] = uVar6;
        puVar15[2] = uVar9;
        uVar9 = puVar14[2];
        uVar12 = *puVar14;
        uStack_78 = puVar14[5];
        local_80 = puVar14[4];
        uStack_68 = puVar14[7];
        local_70 = puVar14[6];
        puVar15 = puVar14 + 8;
        lVar1 = lVar10 + -0x40;
        lVar10 = lVar10 + -0x60;
        do {
          lVar11 = lVar10;
          lVar13 = lVar1;
          if (uVar9 < puVar15[2]) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)(puVar15[2] < uVar9 || *puVar15 <= uVar12);
          }
          puVar4 = puVar14 + uVar5 * 4 + 4;
          uVar5 = uVar6 + uVar5;
          uVar16 = *puVar4;
          uVar7 = puVar4[3];
          uVar6 = puVar4[2];
          puVar15[-3] = puVar4[1];
          puVar15[-4] = uVar16;
          puVar15[-1] = uVar7;
          puVar15[-2] = uVar6;
          puVar3 = puVar15 + 4;
          uVar16 = *puVar15;
          uVar7 = puVar15[3];
          uVar6 = puVar15[2];
          puVar4[1] = puVar15[1];
          *puVar4 = uVar16;
          puVar4[3] = uVar7;
          puVar4[2] = uVar6;
          puVar15 = puVar3;
          lVar1 = lVar13 + -0x20;
          lVar10 = lVar11 + -0x20;
        } while (puVar3 < puVar14 + param_2 * 4);
        do {
          puVar15 = &local_80;
          if (lVar11 != 0) {
            puVar15 = puVar3;
          }
          if (uVar9 < puVar15[2]) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)(puVar15[2] < uVar9 || *puVar15 <= uVar12);
          }
          puVar4 = puVar14 + uVar5 * 4 + 4;
          lVar13 = lVar13 + -0x20;
          uVar5 = uVar6 + uVar5;
          lVar11 = lVar11 + -0x20;
          uVar16 = *puVar4;
          uVar7 = puVar4[3];
          uVar6 = puVar4[2];
          puVar3[-3] = puVar4[1];
          puVar3[-4] = uVar16;
          puVar3[-1] = uVar7;
          puVar3[-2] = uVar6;
          uVar16 = *puVar15;
          uVar7 = puVar15[3];
          uVar6 = puVar15[2];
          puVar4[1] = puVar15[1];
          *puVar4 = uVar16;
          puVar4[3] = uVar7;
          puVar4[2] = uVar6;
          puVar3 = puVar3 + 4;
        } while (lVar13 != 0);
        if (param_2 <= uVar5) goto LAB_00a28c50;
        uStack_78 = puVar14[1];
        local_80 = *puVar14;
        uStack_68 = puVar14[3];
        local_70 = puVar14[2];
        puVar4 = puVar14 + uVar5 * 4;
        puVar15 = (ulong *)0x0;
        uVar9 = -(uVar5 + 1);
        uVar7 = puVar4[1];
        uVar6 = *puVar4;
        uVar12 = puVar4[2];
        puVar14[3] = puVar4[3];
        puVar14[2] = uVar12;
        puVar14[1] = uVar7;
        *puVar14 = uVar6;
        param_1 = puVar14 + (uVar5 + 1) * 4;
        puVar4[1] = uStack_78;
        *puVar4 = local_80;
        puVar4[3] = uStack_68;
        puVar4[2] = local_70;
      }
      param_2 = param_2 + uVar9;
      puVar14 = param_1;
      param_3 = puVar15;
    } while (0x20 < param_2);
  }
  FUN_00a26d64(param_1,param_2);
  return;
}


// ===== 00a28c54  FUN_00a28c54 =====

void FUN_00a28c54(ulong *param_1,ulong param_2,ulong *param_3,int param_4,undefined8 param_5)

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
        if (param_3 != (ulong *)0x0) goto LAB_00a28d9c;
LAB_00a28db0:
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
LAB_00a29050:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xa29054);
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
        FUN_00a28c54(puVar12,uVar3,param_3,param_4 + -1,param_5);
        puVar12 = param_1;
        param_3 = puVar7;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) goto LAB_00a28c84;
      }
      lVar4 = FUN_00a259d4(puVar12);
      lVar4 = lVar4 - (long)puVar12;
      if (param_3 == (ulong *)0x0) goto LAB_00a28db0;
LAB_00a28d9c:
      puVar7 = (ulong *)((long)puVar12 + lVar4);
      if (*param_3 < *puVar7) goto LAB_00a28db0;
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
      if (param_2 <= uVar3) goto LAB_00a29050;
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
LAB_00a28c84:
  FUN_00a2710c(param_1,param_2);
  return;
}


// ===== 00a29054  FUN_00a29054  [FAILED] =====
/* decompilation failed: Exception while decompiling 00a29054: process: timeout
 */

// ===== 00a29778  FUN_00a29778 =====

void FUN_00a29778(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

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
  FUN_00a3856c(&local_38,*param_1,param_1[1],uVar1,param_4);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a29804  FUN_00a29804 =====

undefined1  [16] FUN_00a29804(int param_1,long *param_2)

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
    puVar1 = PTR_PTR_00b01168;
    uVar5 = 1;
    do {
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      __n = (long)iVar2 << 0x20 | 2;
      local_70 = 1;
      uStack_68 = __n;
                    /* try { // try from 00a298f0 to 00a298ff has its CatchHandler @ 00a29964 */
      lVar4 = core::io::error::os_functions::get_os_functions();
      iVar2 = (**(code **)(lVar4 + 0x10))(iVar2);
      if (iVar2 == 0) goto LAB_00a2988c;
      __n = read(param_1,&local_90,0x20);
    } while (__n == 0xffffffffffffffff);
  }
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab40);
  }
  lVar4 = param_2[2];
  if ((ulong)(*param_2 - lVar4) < __n) {
    FUN_00a29778(param_2,lVar4,__n,1,1);
    lVar4 = param_2[2];
  }
  else if (__n == 0) goto LAB_00a29880;
  memcpy((void *)(param_2[1] + lVar4),&local_90,__n);
LAB_00a29880:
  uVar5 = 0;
  param_2[2] = lVar4 + __n;
LAB_00a2988c:
  auVar6._8_8_ = __n;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


// ===== 00a2997c  FUN_00a2997c =====

undefined1  [16] FUN_00a2997c(long *param_1)

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
    puVar1 = PTR_PTR_00b01168;
    uVar4 = 1;
    do {
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      __n = (long)iVar2 << 0x20 | 2;
      local_70 = 1;
      uStack_68 = __n;
                    /* try { // try from 00a29a68 to 00a29a77 has its CatchHandler @ 00a29adc */
      lVar5 = core::io::error::os_functions::get_os_functions();
      iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
      if (iVar2 == 0) goto LAB_00a29a04;
      __n = read(0,&local_90,0x20);
    } while (__n == 0xffffffffffffffff);
  }
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab40);
  }
  lVar5 = param_1[2];
  if ((ulong)(*param_1 - lVar5) < __n) {
    FUN_00a29778(param_1,lVar5,__n,1,1);
    lVar5 = param_1[2];
  }
  else if (__n == 0) goto LAB_00a299f8;
  memcpy((void *)(param_1[1] + lVar5),&local_90,__n);
LAB_00a299f8:
  uVar4 = 0;
  param_1[2] = lVar5 + __n;
LAB_00a29a04:
  auVar6._8_8_ = __n;
  auVar6._0_8_ = uVar4;
  return auVar6;
}


// ===== 00a29af4  FUN_00a29af4 =====

undefined1  [16] FUN_00a29af4(undefined8 *param_1,long *param_2)

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
    puVar1 = PTR_PTR_00b01168;
    uVar4 = 1;
    do {
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      __n = (long)iVar2 << 0x20 | 2;
      local_70 = 1;
      uStack_68 = __n;
                    /* try { // try from 00a29be4 to 00a29bf3 has its CatchHandler @ 00a29c58 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
      if (iVar2 == 0) goto LAB_00a29b80;
      __n = read(*piVar6,&local_90,0x20);
    } while (__n == 0xffffffffffffffff);
  }
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab40);
  }
  lVar5 = param_2[2];
  if ((ulong)(*param_2 - lVar5) < __n) {
    FUN_00a29778(param_2,lVar5,__n,1,1);
    lVar5 = param_2[2];
  }
  else if (__n == 0) goto LAB_00a29b74;
  memcpy((void *)(param_2[1] + lVar5),&local_90,__n);
LAB_00a29b74:
  uVar4 = 0;
  param_2[2] = lVar5 + __n;
LAB_00a29b80:
  auVar7._8_8_ = __n;
  auVar7._0_8_ = uVar4;
  return auVar7;
}


// ===== 00a29c70  FUN_00a29c70 =====

undefined1  [16] FUN_00a29c70(undefined8 *param_1,long *param_2)

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
    puVar1 = PTR_PTR_00b01168;
    uVar4 = 1;
    do {
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      __n = (long)iVar2 << 0x20 | 2;
      local_70 = 1;
      uStack_68 = __n;
                    /* try { // try from 00a29d60 to 00a29d6f has its CatchHandler @ 00a29dd4 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      iVar2 = (**(code **)(lVar5 + 0x10))(iVar2);
      if (iVar2 == 0) goto LAB_00a29cfc;
      __n = read(*piVar6,&local_90,0x20);
    } while (__n == 0xffffffffffffffff);
  }
  if (0x20 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,0x20,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab40);
  }
  lVar5 = param_2[2];
  if ((ulong)(*param_2 - lVar5) < __n) {
    FUN_00a29778(param_2,lVar5,__n,1,1);
    lVar5 = param_2[2];
  }
  else if (__n == 0) goto LAB_00a29cf0;
  memcpy((void *)(param_2[1] + lVar5),&local_90,__n);
LAB_00a29cf0:
  uVar4 = 0;
  param_2[2] = lVar5 + __n;
LAB_00a29cfc:
  auVar7._8_8_ = __n;
  auVar7._0_8_ = uVar4;
  return auVar7;
}


// ===== 00a29dec  FUN_00a29dec =====

void FUN_00a29dec(size_t *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 1;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(param_3,1);
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


// ===== 00a29e6c  FUN_00a29e6c =====

void FUN_00a29e6c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab58);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(0x400,1);
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


// ===== 00a29ed4  FUN_00a29ed4 =====

void FUN_00a29ed4(undefined8 *param_1)

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
  core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab58);
}


// ===== 00a29f14  FUN_00a29f14 =====

void FUN_00a29f14(undefined8 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab58);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(0x2000,1);
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


// ===== 00a29f80  FUN_00a29f80 =====

void FUN_00a29f80(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  int local_1d8;
  undefined4 local_1d4;
  undefined **local_1d0;
  undefined8 local_1c8;
  long local_1c0 [47];
  long local_48;
  undefined8 local_40;
  
  plVar3 = (long *)*param_1;
  puVar1 = (undefined4 *)*plVar3;
  puVar2 = (ulong *)plVar3[1];
  *plVar3 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab58);
  }
  local_1f0 = 0x1b600000000;
  uStack_1e8 = 1;
  local_1c8 = DAT_003823a9;
  local_1c0[0] = CONCAT35(local_1c0[0]._5_3_,0x6d6f646e);
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(&local_48,&local_1c8,0xd);
  if (local_48 == 1) {
    ppuVar5 = &PTR_DAT_00afab10;
    uVar4 = *puVar2;
  }
  else {
    FUN_00a4725c(&local_1d8,local_40,&local_1f0);
    if (local_1d8 != 1) {
      *puVar1 = local_1d4;
      return;
    }
    uVar4 = *puVar2;
    ppuVar5 = local_1d0;
  }
  if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
    local_1c0[0] = uVar4 - 1;
    uVar4 = (ulong)local_1c8 >> 8;
    local_1c8 = CONCAT71((int7)uVar4,3);
                    /* try { // try from 00a2a054 to 00a2a05b has its CatchHandler @ 00a2a0a4 */
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_1c0);
  }
  *puVar2 = (ulong)ppuVar5;
  *param_2 = 2;
  return;
}


// ===== 00a2a0ac  FUN_00a2a0ac =====

void FUN_00a2a0ac(undefined8 *param_1,long param_2)

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
    core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab58);
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
    if (DAT_00b108a0 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_00b108a0);
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a2a234;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb108a0,0x10);
    if (bVar3) {
      DAT_00b108a0 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a2a234:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    uVar6 = 0;
  }
  else {
                    /* try { // try from 00a2a238 to 00a2a23b has its CatchHandler @ 00a2a254 */
    uVar6 = std::panicking::panic_count::is_zero_slow_path();
    uVar6 = uVar6 ^ 1;
  }
  if (lVar13 != 0) {
    puVar9 = puVar12;
    do {
      lVar7 = *(long *)(puVar9 + 2);
      local_70 = puVar9 + 8;
      if ((*puVar9 & 1) == 0) {
        lVar7 = FUN_00ab2734();
      }
      lVar1 = 0;
      if (lVar7 != 0) {
        lVar1 = lVar7 + -1;
      }
                    /* try { // try from 00a2a164 to 00a2a16f has its CatchHandler @ 00a2a268 */
      FUN_00a1af38(lVar1,&local_70,&DAT_00afa8f0);
      puVar9 = puVar9 + 0xe;
    } while (puVar9 != puVar12 + lVar13 * 0xe);
  }
  local_70 = puVar11;
  puStack_68 = puVar12;
  local_60 = lVar13;
  uStack_58 = uVar14;
  if ((((uVar6 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
    DAT_00b108a4 = 1;
  }
  do {
    iVar5 = DAT_00b108a0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb108a0,0x10);
    if (bVar3) {
      DAT_00b108a0 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 2) {
    syscall(0x62,&DAT_00b108a0,0x81,1);
  }
  puVar10[1] = puStack_68;
  *puVar10 = local_70;
  puVar10[3] = uStack_58;
  puVar10[2] = local_60;
  return;
}


// ===== 00a2a290  FUN_00a2a290 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2a290(undefined8 *param_1)

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
    core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab70);
  }
  local_14[0] = 0;
  if (((int)DAT_00b0f870 != 0) && (FUN_00a18174(local_14), (local_14[0] & 1) != 0)) {
    return;
  }
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 != (void *)0x0) goto LAB_00a2a2ec;
LAB_00a2a348:
    pvVar5 = (void *)FUN_00a2cdf8();
    if (pvVar5 != DAT_00b0f838) {
LAB_00a2a368:
      do {
        if (DAT_00b0f840 != 0) {
          ClearExclusiveLocal();
          return;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0xb0f840,0x10);
        if (bVar2) {
          DAT_00b0f840 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DAT_00b0f844 = 1;
      DAT_00b0f838 = pvVar5;
      goto LAB_00a2a380;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar5 == (void *)0x0) goto LAB_00a2a348;
LAB_00a2a2ec:
    if (pvVar5 != DAT_00b0f838) goto LAB_00a2a368;
  }
  if (DAT_00b0f844 == -1) {
    return;
  }
  DAT_00b0f844 = DAT_00b0f844 + 1;
LAB_00a2a380:
  if (DAT_00b0f848 != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb798);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xa2a454);
    (*pcVar4)();
  }
  DAT_00b0f848 = -1;
                    /* try { // try from 00a2a3b8 to 00a2a3bb has its CatchHandler @ 00a2a46c */
  FUN_00a21220(&DAT_00b0f850);
  lRam0000000000b0f868 = (ulong)uStack_37 << 8;
  DAT_00b0f848 = DAT_00b0f848 + 1;
  DAT_00b0f844 = DAT_00b0f844 + -1;
  uRam0000000000b0f858 = 1;
  _DAT_00b0f850 = 0;
  _DAT_00b0f860 = 0;
  if (DAT_00b0f844 == 0) {
    DAT_00b0f838 = (void *)0x0;
    do {
      iVar3 = DAT_00b0f840;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb0f840,0x10);
      if (bVar2) {
        DAT_00b0f840 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 2) {
      syscall(0x62,&DAT_00b0f840,0x81,1);
      return;
    }
  }
  return;
}


// ===== 00a2a4c0  FUN_00a2a4c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2a4c0(undefined8 *param_1)

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
  auVar13 = std::panicking::panic_with_hook(&local_20,&DAT_00afaba0,param_1[2],1,0);
  puVar6 = DAT_00b108b8;
  puVar8 = auVar13._0_8_;
  pcStack_68 = FUN_00a2a4f0;
  puStack_70 = &stack0xfffffffffffffff0;
  if (auVar13._8_8_ == (long *)0x0) {
    if (DAT_00b108b8 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      lVar12 = extraout_x9;
    }
    else {
      lVar12 = DAT_00b108d8;
      if (DAT_00b108d8 == 0) {
        lVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(&DAT_00b108d8);
      }
      puVar9 = (undefined *)pthread_getspecific((pthread_key_t)lVar12);
      puVar11 = &UNK_002bd108;
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
      puVar11 = DAT_00b108b8;
      if (DAT_00b108b8 != (undefined *)0x0) {
        puVar1 = (undefined8 *)(lVar12 + 0x10);
        puVar11 = &UNK_002bd108;
        lVar12 = 4;
        if (DAT_00b108b8 != (undefined *)*puVar1) {
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
  puStack_2e8 = &DAT_00382264;
  if (puVar11 != (undefined *)0x0) {
    puStack_2e8 = puVar11;
  }
  lStack_2e0 = 9;
  if (puVar11 != (undefined *)0x0) {
    lStack_2e0 = lVar12;
  }
  if (PTR_gettid_00b01310 == (undefined *)0x0) {
    lVar12 = syscall(0xb2);
    iVar7 = (int)lVar12;
  }
  else {
    iVar7 = gettid();
  }
  puVar6 = PTR_fmt_00b00c60;
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
  pcStack_a8 = FUN_00a5be48;
  plStack_a0 = &lStack_2d8;
  uStack_b8 = _UNK_002a0258;
  uStack_c0 = _s__002a0250;
  pcStack_88 = FUN_00a5bde4;
  pcStack_78 = FUN_00a5be48;
  puStack_98 = PTR_fmt_00b00c60;
  uStack_90 = uVar2;
  uStack_80 = uVar4;
  uVar10 = FUN_00a6a2b0(&puStack_c8,&DAT_002a5d6f,&ppuStack_b0);
  if (uVar10 == 0) {
    if (0x200 < uStack_b8) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_b8,0x200,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afabd8);
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
    pcStack_a8 = FUN_00a5be48;
    plStack_a0 = &lStack_2d8;
    puStack_98 = puVar6;
    pcStack_88 = FUN_00a5bde4;
    pcStack_78 = FUN_00a5be48;
    uStack_90 = uVar2;
    uStack_80 = uVar4;
    uVar10 = (**(code **)(lVar5 + 0x48))(uVar3,&DAT_002a5d6f,&ppuStack_b0);
  }
  if (((uVar10 != 0) && (1 < (uVar10 & 3) - 2)) && ((uVar10 & 3) != 0)) {
    pcStack_a8 = (code *)(uVar10 - 1);
    ppuStack_b0._1_7_ = (undefined7)((ulong)ppuStack_b0 >> 8);
    ppuStack_b0 = (undefined **)CONCAT71(ppuStack_b0._1_7_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pcStack_a8);
  }
  return;
}


// ===== 00a2a4f0  FUN_00a2a4f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2a4f0(undefined8 *param_1,long *param_2)

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
  
  puVar5 = DAT_00b108b8;
  if (param_2 == (long *)0x0) {
    if (DAT_00b108b8 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      lVar10 = DAT_00b108d8;
      if (DAT_00b108d8 == 0) {
        lVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(&DAT_00b108d8);
      }
      puVar7 = (undefined *)pthread_getspecific((pthread_key_t)lVar10);
      puVar11 = &UNK_002bd108;
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
      puVar11 = DAT_00b108b8;
      if (DAT_00b108b8 != (undefined *)0x0) {
        puVar1 = (undefined8 *)(in_x9 + 0x10);
        puVar11 = &UNK_002bd108;
        in_x9 = 4;
        if (DAT_00b108b8 != (undefined *)*puVar1) {
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
  local_2c8 = &DAT_00382264;
  if (puVar11 != (undefined *)0x0) {
    local_2c8 = puVar11;
  }
  lStack_2c0 = 9;
  if (puVar11 != (undefined *)0x0) {
    lStack_2c0 = in_x9;
  }
  if (PTR_gettid_00b01310 == (undefined *)0x0) {
    lVar8 = syscall(0xb2);
    iVar6 = (int)lVar8;
  }
  else {
    iVar6 = gettid();
  }
  puVar5 = PTR_fmt_00b00c60;
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
  local_88 = FUN_00a5be48;
  local_80 = &local_2b8;
  uStack_98 = _UNK_002a0258;
  local_a0 = _s__002a0250;
  pcStack_68 = FUN_00a5bde4;
  pcStack_58 = FUN_00a5be48;
  puStack_78 = PTR_fmt_00b00c60;
  local_70 = uVar2;
  local_60 = uVar4;
  uVar9 = FUN_00a6a2b0(&local_a8,&DAT_002a5d6f,&local_90);
  if (uVar9 == 0) {
    if (0x200 < uStack_98) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_98,0x200,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afabd8);
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
    local_88 = FUN_00a5be48;
    local_80 = &local_2b8;
    puStack_78 = puVar5;
    pcStack_68 = FUN_00a5bde4;
    pcStack_58 = FUN_00a5be48;
    local_70 = uVar2;
    local_60 = uVar4;
    uVar9 = (**(code **)(lVar10 + 0x48))(uVar3,&DAT_002a5d6f,&local_90);
  }
  if (((uVar9 != 0) && (1 < (uVar9 & 3) - 2)) && ((uVar9 & 3) != 0)) {
    local_88 = (code *)(uVar9 - 1);
    local_90._1_7_ = (undefined7)((ulong)local_90 >> 8);
    local_90 = (undefined **)CONCAT71(local_90._1_7_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_88);
  }
  return;
}


// ===== 00a2a780  FUN_00a2a780 =====

void FUN_00a2a780(void)

{
  undefined1 uStack_11;
  
  FUN_00a6afc8(&uStack_11,&DAT_00382222,0x85);
  FUN_00a1ff48();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a2a7a8  FUN_00a2a7a8 =====

ulong FUN_00a2a7a8(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = renameat(*(int *)*param_1,(char *)param_1[1],*(int *)param_1[3],param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2a840  FUN_00a2a840 =====

ulong FUN_00a2a840(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = rename((char *)*param_1,param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2a8c4  FUN_00a2a8c4 =====

ulong FUN_00a2a8c4(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = symlink((char *)*param_1,param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2a948  FUN_00a2a948 =====

ulong FUN_00a2a948(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = linkat(-100,(char *)*param_1,-100,param_2,0);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2a9e0  FUN_00a2a9e0 =====

void FUN_00a2a9e0(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  byte *pbVar8;
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
  
  pcVar1 = (char *)param_1[1];
  *(undefined1 *)*param_1 = 1;
  if ((*pcVar1 == '\0') &&
     (<std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name(&local_a8,param_2),
     local_a8 != (long *)0xffffffffffffffff)) {
    if (local_a8 == (long *)0x2) {
      core::str::converts::from_utf8(&local_58,local_68,uStack_60);
      local_88 = local_50;
      local_80 = local_48;
      if (((ulong)local_58 & 1) == 0) {
LAB_00a2abb4:
        uVar4 = FUN_00a68d04(&DAT_0038226d,0x1a,local_88,local_80);
        pbVar8 = (byte *)param_1[2];
        if ((uVar4 & 1) != 0) {
          *pbVar8 = 1;
          return;
        }
        if ((*pbVar8 & 1) != 0) {
          iVar3 = FUN_00a68d04(&DAT_00382287,0x1c,local_88,local_80);
          if (iVar3 != 0) {
            *pbVar8 = 0;
            return;
          }
          if ((*pbVar8 & 1) != 0) goto LAB_00a2aa14;
        }
        *(long *)param_1[3] = *(long *)param_1[3] + 1;
      }
    }
    else if (local_88 != 0) goto LAB_00a2abb4;
  }
LAB_00a2aa14:
  if ((*(byte *)param_1[2] & 1) == 0) {
    return;
  }
  plVar6 = (long *)param_1[3];
  lVar5 = *plVar6;
  if (lVar5 != 0) {
    pbVar8 = (byte *)param_1[4];
    if ((*pbVar8 & 1) == 0) {
      local_58 = &UNK_003822a3;
      local_50 = (ulong)(lVar5 != 1);
      if (lVar5 == 1) {
        local_58 = (undefined *)0x1;
      }
      puStack_a0 = PTR_fmt_00b00c10;
      local_98 = &local_58;
      pcStack_90 = FUN_00a5be48;
      local_a8 = plVar6;
      core::fmt::write(**(undefined8 **)param_1[5],(*(undefined8 **)param_1[5])[1],&DAT_002b4937,
                       &local_a8);
    }
    *pbVar8 = 0;
    *plVar6 = 0;
  }
  local_b8[0] = param_1[5];
  uVar7 = *(undefined8 *)((uint *)param_1[7] + 2);
  local_b8[1] = 0;
  if ((*(uint *)param_1[7] & 1) == 0) {
    uVar7 = FUN_00ab2734(uVar7);
  }
                    /* try { // try from 00a2aab4 to 00a2aabf has its CatchHandler @ 00a2ac50 */
  <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name(&local_a8,param_2);
  iVar3 = *param_2;
  if (iVar3 == 2) {
LAB_00a2ab4c:
    local_58 = (undefined *)0x2;
  }
  else {
    if (iVar3 == -1) {
      iVar3 = 0;
      local_58 = (undefined *)0x2;
      goto LAB_00a2ab64;
    }
    if (*(ulong *)(param_2 + 4) == 0) goto LAB_00a2ab4c;
    local_48 = *(undefined8 *)(param_2 + 6);
    local_58 = (undefined *)0x0;
    local_50 = *(ulong *)(param_2 + 4);
  }
  if (iVar3 == 2) {
    iVar3 = 0;
  }
LAB_00a2ab64:
                    /* try { // try from 00a2ab64 to 00a2ab77 has its CatchHandler @ 00a2ac50 */
  uVar2 = FUN_00a3c7b4(local_b8,uVar7,&local_a8,&local_58,iVar3);
  *(undefined1 *)param_1[6] = uVar2;
  *(long *)(local_b8[0] + 0x18) = *(long *)(local_b8[0] + 0x18) + 1;
  return;
}


// ===== 00a2ac64  FUN_00a2ac64 =====

void FUN_00a2ac64(undefined8 *param_1,int *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined1 *__dest;
  long *plVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar4;
  long lVar5;
  undefined1 *unaff_x22;
  void *unaff_x23;
  void *__n;
  undefined1 *unaff_x24;
  void *__src;
  long local_a0;
  void *pvStack_98;
  undefined1 *local_90;
  void *pvStack_88;
  size_t local_80;
  undefined1 *puStack_78;
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
      unaff_x22 = &DAT_00000001;
      iVar1 = *param_2;
      local_60 = unaff_x23;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      unaff_x22 = (undefined1 *)FUN_004b25a4(local_58,1);
      if (unaff_x22 == (undefined1 *)0x0) {
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
      local_90 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 00a2ae48 to 00a2ae53 has its CatchHandler @ 00a2ae58 */
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
  puStack_78 = unaff_x22;
  local_70 = sVar2;
  if (lVar5 == *plVar4) {
                    /* try { // try from 00a2ade4 to 00a2adeb has its CatchHandler @ 00a2ae80 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::Library>>::
    grow_one(plVar4);
  }
  plVar3 = (long *)(plVar4[1] + lVar5 * 0x48);
  plVar3[3] = (long)pvStack_88;
  plVar3[2] = (long)local_90;
  plVar3[5] = (long)puStack_78;
  plVar3[4] = local_80;
  plVar3[8] = (long)local_60;
  plVar3[7] = CONCAT44(iStack_64,iStack_68);
  plVar3[6] = local_70;
  plVar3[1] = (long)pvStack_98;
  *plVar3 = local_a0;
  plVar4[2] = lVar5 + 1;
  return;
}


// ===== 00a2ae94  FUN_00a2ae94 =====

ulong FUN_00a2ae94(undefined8 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (DAT_00b10878 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
    if (bVar2) {
      DAT_00b10878 = 0x3fffffff;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a2b06c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
            (&DAT_00b10878);
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a2b06c:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar3;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path();
    uVar5 = uVar5 ^ 1;
  }
  cVar1 = DAT_00b10880;
  iVar4 = setenv((char *)*param_1,param_2,1);
  if (iVar4 == -1) {
    piVar6 = (int *)__errno();
    iVar4 = *piVar6;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    uVar8 = (long)iVar4 << 0x20 | 2;
  }
  else {
    uVar8 = 0;
  }
  if (cVar1 == '\0') {
    if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      DAT_00b10880 = '\x01';
    }
    do {
      iVar4 = DAT_00b10878;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00b10878 = DAT_00b10878 + -0x3fffffff;
      }
    } while (cVar1 != '\0');
  }
  else {
    if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      DAT_00b10880 = '\x01';
    }
    do {
      iVar4 = DAT_00b10878;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00b10878 = DAT_00b10878 + -0x3fffffff;
      }
    } while (cVar1 != '\0');
  }
  if (iVar4 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (&DAT_00b10878);
    return uVar8;
  }
  return uVar8;
}


// ===== 00a2b0a8  FUN_00a2b0a8 =====

void FUN_00a2b0a8(long *param_1,long *param_2,char *param_3)

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
    goto LAB_00a2b3c0;
  }
  lVar16 = *param_2;
  if (*(long *)(lVar16 + 0x220) == 1) {
    plVar13 = (long *)(lVar16 + 0x228);
    if (*plVar13 == 0) goto LAB_00a2b294;
LAB_00a2b0ec:
    plVar10 = (long *)plVar13[3];
    uVar17 = param_2[2];
    plVar12 = plVar13;
  }
  else {
    plVar13 = (long *)FUN_00a18a54(lVar16 + 0x220,lVar9,lVar3);
    if (*plVar13 != 0) goto LAB_00a2b0ec;
LAB_00a2b294:
    plVar12 = (long *)plVar13[2];
    if ((char)plVar13[1] != -1) {
      uVar5 = *(undefined4 *)((long)plVar13 + 9);
      uVar4 = *(undefined4 *)((long)plVar13 + 0xc);
      *(char *)(param_1 + 2) = (char)plVar13[1];
      param_1[3] = (long)plVar12;
      *(undefined4 *)((long)param_1 + 0x11) = uVar5;
      *(undefined4 *)((long)param_1 + 0x14) = uVar4;
      goto LAB_00a2b3c0;
    }
    plVar10 = (long *)plVar12[3];
    uVar17 = param_2[2];
  }
  if (plVar10 == (long *)0x0) {
LAB_00a2b120:
    pplVar7 = (long **)CONCAT44(local_60._4_4_,(int)local_60);
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = (long *)0x0;
    if (plVar10 != (long *)&DAT_00000001) {
      plVar13 = (long *)0x0;
      plVar15 = plVar10;
      do {
        plVar2 = (long *)(((ulong)plVar15 >> 1) + (long)plVar13);
        if (*(ulong *)(plVar12[2] + (long)plVar2 * 0x18) <= uVar17) {
          plVar13 = plVar2;
        }
        plVar15 = (long *)((long)plVar15 - ((ulong)plVar15 >> 1));
      } while (&DAT_00000001 < plVar15);
    }
    puVar14 = (ulong *)(plVar12[2] + (long)plVar13 * 0x18);
    if (uVar17 < *puVar14 || puVar14[1] <= uVar17) goto LAB_00a2b120;
    if (plVar10 <= plVar13) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (plVar13,plVar10,&PTR_s__rust_deps_addr2line_0_27_1_src__00afabf0);
    }
    uVar11 = puVar14[2];
    if ((ulong)plVar12[1] <= uVar11) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar11,plVar12[1],&PTR_s__rust_deps_addr2line_0_27_1_src__00afac08);
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
      plVar13 = (long *)FUN_00a18488(local_78,&local_60);
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
        goto LAB_00a2b3c0;
      }
    }
  }
  local_60._4_4_ = (undefined4)((ulong)pplVar7 >> 0x20);
  if (*(long *)(lVar16 + 0x10) == -2) {
    local_48 = plVar10;
    pplVar7 = (long **)CONCAT44(local_60._4_4_,2);
    pcVar8 = uStack_58;
    plVar10 = uStack_50;
    goto LAB_00a2b1f0;
  }
  local_60 = pplVar7;
  if (*(long *)(lVar16 + 0x1f8) == 1) {
    plVar10 = (long *)(lVar16 + 0x200);
    plVar12 = plVar10;
    if (*plVar10 != 0) goto LAB_00a2b1cc;
LAB_00a2b308:
    plVar10 = (long *)plVar12[2];
    if ((char)plVar12[1] == -1) goto LAB_00a2b1cc;
    uStack_58._0_4_ = CONCAT31((int3)*(undefined4 *)((long)plVar12 + 9),(char)plVar12[1]);
    uStack_58 = (char *)CONCAT44(*(undefined4 *)((long)plVar12 + 0xc),(undefined4)uStack_58);
  }
  else {
    plVar10 = (long *)FUN_00a19824(lVar16 + 0x1f8,*(long *)param_2[1] + 0x10,lVar16,lVar16 + 0x10);
    plVar12 = plVar10;
    if (*plVar10 == 0) goto LAB_00a2b308;
LAB_00a2b1cc:
    <addr2line::line::addr2line::line::Lines>::find_location(&local_60,plVar10,uVar17);
    pplVar7 = local_60;
    plVar10 = uStack_50;
    pcVar8 = uStack_58;
    if ((int)local_60 != -1) {
LAB_00a2b1f0:
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
LAB_00a2b3c0:
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 00a2b404  FUN_00a2b404 =====

ulong FUN_00a2b404(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = unlinkat(*(int *)*param_1,param_2,0);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2b490  FUN_00a2b490 =====

void FUN_00a2b490(undefined4 *param_1,undefined8 *param_2,char *param_3)

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
  
  puVar8 = PTR_PTR_00b01168;
  puVar11 = (uint *)*param_2;
  bVar12 = *(byte *)((long)puVar11 + 10);
  if ((puVar11[2] & 1) == 0) {
    if ((*(byte *)((long)puVar11 + 9) & 1) != 0) {
      if ((bVar12 & 1) == 0) {
        uVar10 = 1;
        goto LAB_00a2b4e0;
      }
LAB_00a2b50c:
      uVar10 = 0x401;
      bVar13 = *(byte *)((long)puVar11 + 0xb);
      bVar12 = *(byte *)((long)puVar11 + 0xd);
      uVar14 = 0x401;
      if (bVar13 == 1) goto LAB_00a2b520;
      goto LAB_00a2b544;
    }
    if ((bVar12 & 1) != 0) goto LAB_00a2b50c;
    if ((((puVar11[3] & 1) == 0) && ((*(byte *)((long)puVar11 + 0xd) & 1) == 0)) &&
       ((*(byte *)((long)puVar11 + 0xb) & 1) == 0)) {
      puVar8 = &DAT_00382a5b;
      uVar4 = 0x3a;
    }
    else {
      puVar8 = &DAT_00382a95;
      uVar4 = 0x3d;
    }
    uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,puVar8,uVar4);
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    if ((*(byte *)((long)puVar11 + 9) & 1) == 0) {
      if ((bVar12 & 1) != 0) goto LAB_00a2b4f0;
      if ((((*(byte *)((long)puVar11 + 0xb) & 1) != 0) || ((puVar11[3] & 1) != 0)) ||
         ((*(byte *)((long)puVar11 + 0xd) & 1) != 0)) goto LAB_00a2b524;
      uVar10 = 0;
      uVar14 = 0;
    }
    else {
      if ((bVar12 & 1) == 0) {
        uVar10 = 2;
LAB_00a2b4e0:
        bVar12 = *(byte *)((long)puVar11 + 0xd);
        bVar13 = *(byte *)((long)puVar11 + 0xb);
      }
      else {
LAB_00a2b4f0:
        uVar10 = 0x402;
        bVar13 = *(byte *)((long)puVar11 + 0xb);
        bVar12 = *(byte *)((long)puVar11 + 0xd);
        uVar14 = 0x402;
        if (bVar13 != 1) goto LAB_00a2b544;
LAB_00a2b520:
        uVar10 = uVar14;
        if ((bVar12 & 1) == 0) {
LAB_00a2b524:
          uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_00382a95,0x3d);
          uVar9 = 1;
          *(undefined8 *)(param_1 + 2) = uVar4;
          goto LAB_00a2b674;
        }
      }
LAB_00a2b544:
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
        goto LAB_00a2b674;
      }
      piVar5 = (int *)__errno();
      iVar3 = *piVar5;
      if (*(undefined ***)puVar8 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
                    /* try { // try from 00a2b5c8 to 00a2b5d7 has its CatchHandler @ 00a2b690 */
      lVar6 = core::io::error::os_functions::get_os_functions();
      uVar7 = (**(code **)(lVar6 + 0x10))(iVar3);
    } while ((uVar7 & 1) != 0);
    *(ulong *)(param_1 + 2) = (long)iVar3 << 0x20 | 2;
  }
  uVar9 = 1;
LAB_00a2b674:
  *param_1 = uVar9;
  return;
}


// ===== 00a2b6b0  FUN_00a2b6b0 =====

undefined ** FUN_00a2b6b0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  ulong __n;
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int *piVar4;
  int *local_1f8;
  char *pcStack_1f0;
  undefined8 local_1e8;
  int *piStack_1e0;
  undefined1 auStack_1d8 [384];
  uint local_58 [2];
  char *local_50;
  
  __n = param_1[1];
  piVar2 = (int *)param_1[2];
  piVar4 = (int *)param_1[3];
  local_1f8 = piVar2;
  pcStack_1f0 = param_2;
  local_1e8 = param_3;
  piStack_1e0 = piVar4;
  if (0x17f < __n) {
    ppuVar3 = (undefined **)FUN_00a24f38((void *)*param_1,__n,&local_1f8,FUN_00a2a7a8);
    return ppuVar3;
  }
  memcpy(auStack_1d8,(void *)*param_1,__n);
  auStack_1d8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_58,auStack_1d8,__n + 1)
  ;
  if ((local_58[0] & 1) != 0) {
    return &PTR_DAT_00afab10;
  }
  iVar1 = renameat(*piVar2,param_2,*piVar4,local_50);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 00a2b7f0  FUN_00a2b7f0 =====

void FUN_00a2b7f0(undefined4 *param_1,undefined8 *param_2,char *param_3)

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
  
  puVar8 = PTR_PTR_00b01168;
  puVar11 = *(uint **)param_2[1];
  bVar12 = *(byte *)((long)puVar11 + 10);
  if ((puVar11[2] & 1) == 0) {
    if ((*(byte *)((long)puVar11 + 9) & 1) != 0) {
      if ((bVar12 & 1) == 0) {
        uVar10 = 1;
        goto LAB_00a2b844;
      }
LAB_00a2b870:
      uVar10 = 0x401;
      bVar13 = *(byte *)((long)puVar11 + 0xb);
      bVar12 = *(byte *)((long)puVar11 + 0xd);
      uVar14 = 0x401;
      if (bVar13 == 1) goto LAB_00a2b884;
      goto LAB_00a2b8a8;
    }
    if ((bVar12 & 1) != 0) goto LAB_00a2b870;
    if ((((puVar11[3] & 1) == 0) && ((*(byte *)((long)puVar11 + 0xd) & 1) == 0)) &&
       ((*(byte *)((long)puVar11 + 0xb) & 1) == 0)) {
      puVar8 = &DAT_00382a5b;
      uVar4 = 0x3a;
    }
    else {
      puVar8 = &DAT_00382a95;
      uVar4 = 0x3d;
    }
    uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,puVar8,uVar4);
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    if ((*(byte *)((long)puVar11 + 9) & 1) == 0) {
      if ((bVar12 & 1) != 0) goto LAB_00a2b854;
      if ((((*(byte *)((long)puVar11 + 0xb) & 1) != 0) || ((puVar11[3] & 1) != 0)) ||
         ((*(byte *)((long)puVar11 + 0xd) & 1) != 0)) goto LAB_00a2b888;
      uVar10 = 0;
      uVar14 = 0;
    }
    else {
      if ((bVar12 & 1) == 0) {
        uVar10 = 2;
LAB_00a2b844:
        bVar12 = *(byte *)((long)puVar11 + 0xd);
        bVar13 = *(byte *)((long)puVar11 + 0xb);
      }
      else {
LAB_00a2b854:
        uVar10 = 0x402;
        bVar13 = *(byte *)((long)puVar11 + 0xb);
        bVar12 = *(byte *)((long)puVar11 + 0xd);
        uVar14 = 0x402;
        if (bVar13 != 1) goto LAB_00a2b8a8;
LAB_00a2b884:
        uVar10 = uVar14;
        if ((bVar12 & 1) == 0) {
LAB_00a2b888:
          uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,&DAT_00382a95,0x3d);
          uVar9 = 1;
          *(undefined8 *)(param_1 + 2) = uVar4;
          goto LAB_00a2b9dc;
        }
      }
LAB_00a2b8a8:
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
        goto LAB_00a2b9dc;
      }
      piVar5 = (int *)__errno();
      iVar3 = *piVar5;
      if (*(undefined ***)puVar8 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
                    /* try { // try from 00a2b930 to 00a2b93f has its CatchHandler @ 00a2b9f8 */
      lVar6 = core::io::error::os_functions::get_os_functions();
      uVar7 = (**(code **)(lVar6 + 0x10))(iVar3);
    } while ((uVar7 & 1) != 0);
    *(ulong *)(param_1 + 2) = (long)iVar3 << 0x20 | 2;
  }
  uVar9 = 1;
LAB_00a2b9dc:
  *param_1 = uVar9;
  return;
}


// ===== 00a2ba18  FUN_00a2ba18 =====

undefined8 FUN_00a2ba18(undefined8 *param_1,long *param_2)

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
    lVar2 = FUN_00ab2734(lVar1);
    lVar3 = FUN_00ab6430(lVar1);
    FUN_00ab2734(lVar1);
    lVar4 = FUN_00ab6340();
  }
  lVar9 = plVar8[2];
  if (lVar9 == *plVar8) {
                    /* try { // try from 00a2baa4 to 00a2baab has its CatchHandler @ 00a2bb4c */
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
    FUN_00ab2734(lVar1);
    lVar7 = FUN_00ab6340();
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


// ===== 00a2bb60  FUN_00a2bb60 =====

void FUN_00a2bb60(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_00a4725c(param_1,param_3,*param_2);
  return;
}


// ===== 00a2bb6c  FUN_00a2bb6c =====

ulong FUN_00a2bb6c(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mkdir(param_2,*(__mode_t *)*param_1);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2bbfc  FUN_00a2bbfc =====

void FUN_00a2bbfc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_default_alloc_error_hook_00b01320;
  if (*(code **)PTR_HOOK_00b01318 != (code *)0x0) {
    pcVar1 = *(code **)PTR_HOOK_00b01318;
  }
  (*pcVar1)(*param_1,param_1[1]);
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a2bc30  FUN_00a2bc30 =====

void FUN_00a2bc30(long *param_1,undefined8 param_2,long param_3)

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
  lVar4 = *(long *)PTR_CURRENT_00b01328;
  local_50 = param_2;
  lStack_48 = param_3;
  if (lVar4 == 0) {
                    /* try { // try from 00a2bd60 to 00a2bd6b has its CatchHandler @ 00a2bd70 */
    lVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR_CURRENT_00b01328);
  }
  pvVar5 = pthread_getspecific((pthread_key_t)lVar4);
  if (pvVar5 < (void *)0x3) {
    FUN_00a2a4f0(&local_60,0);
  }
  else {
    local_28 = (long)pvVar5 + -0x10;
                    /* try { // try from 00a2bc90 to 00a2bd43 has its CatchHandler @ 00a2bd70 */
    FUN_00a2a4f0(&local_60,&local_28);
  }
  cVar1 = *(char *)param_1[2];
  if (cVar1 == '\0') {
    local_28 = (ulong)local_28._1_7_ << 8;
    local_60 = &local_28;
    puStack_58 = PTR_fmt_00b01330;
    FUN_00a6bc5c();
    (*extraout_x10)();
  }
  else if (cVar1 == '\x01') {
    local_60 = &local_28;
    local_28 = CONCAT71(local_28._1_7_,1);
    puStack_58 = PTR_fmt_00b01330;
    FUN_00a6bc5c(*(undefined8 *)(param_3 + 0x48));
    (*extraout_x8)();
  }
  else {
    if (cVar1 == -1) goto LAB_00a2bd44;
    do {
      cVar3 = DAT_00b0f7d0._4_1_;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb0f7d4,0x10);
      if (bVar2) {
        DAT_00b0f7d0._4_1_ = '\0';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (cVar3 == '\0') goto LAB_00a2bd44;
    (**(code **)(param_3 + 0x48))(param_2,&DAT_0038235b,0x9d);
  }
  FUN_00a1ff48();
LAB_00a2bd44:
  FUN_00a6b948();
  return;
}


// ===== 00a2bd84  FUN_00a2bd84 =====

void FUN_00a2bd84(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_40;
  void *local_38;
  long *local_28;
  
  uVar3 = ((long *)*param_1)[1];
  if ((uVar3 & 1) == 0) {
    local_40 = -1;
    local_28 = param_1;
                    /* try { // try from 00a2bdb8 to 00a2bdc7 has its CatchHandler @ 00a2bdf4 */
    std::panicking::panic_with_hook
              (&local_40,&PTR_FUN_00aface8,param_1[1],*(undefined1 *)(param_1[2] + 0x10),
               *(undefined1 *)(param_1[2] + 0x11));
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xa2bdcc);
    (*pcVar1)();
  }
  local_38 = (void *)(uVar3 >> 1);
  local_40 = *(long *)*param_1;
  uVar2 = std::panicking::panic_with_hook
                    (&local_40,&DAT_00afacb0,param_1[1],*(undefined1 *)(param_1[2] + 0x10),
                     *(undefined1 *)(param_1[2] + 0x11));
                    /* catch() { ... } // from try @ 00a2bdb8 with catch @ 00a2bdf4 */
  if (0 < local_40) {
    free(local_38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar2);
}


// ===== 00a2be1c  FUN_00a2be1c =====

ulong FUN_00a2be1c(undefined8 *param_1,char *param_2)

{
  __mode_t __mode;
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_00b01168;
  __mode = *(__mode_t *)*param_1;
  do {
    iVar2 = chmod(param_2,__mode);
    if (iVar2 != -1) {
      return 0;
    }
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)puVar1 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
                    /* try { // try from 00a2be74 to 00a2be83 has its CatchHandler @ 00a2becc */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar5 & 1) != 0);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a2beec  FUN_00a2beec =====

undefined ** FUN_00a2beec(long *param_1,char *param_2)

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
  if (PTR_utimensat_00b01338 == (undefined *)0x0) {
    return &PTR_DAT_00afb528;
  }
  iVar2 = utimensat(-100,param_2,&local_30,0x100);
  if (iVar2 != -1) {
    return (undefined **)0x0;
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (undefined **)((long)iVar2 << 0x20 | 2);
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (undefined **)((long)iVar2 << 0x20 | 2);
}


// ===== 00a2bfdc  FUN_00a2bfdc =====

ulong FUN_00a2bfdc(undefined8 *param_1,char *param_2)

{
  __mode_t __mode;
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_00b01168;
  __mode = *(__mode_t *)*param_1;
  do {
    iVar2 = fchmodat(-100,param_2,__mode,0);
    if (iVar2 != -1) {
      return 0;
    }
    piVar3 = (int *)__errno();
    iVar2 = *piVar3;
    if (*(undefined ***)puVar1 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
                    /* try { // try from 00a2c03c to 00a2c04b has its CatchHandler @ 00a2c094 */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar5 & 1) != 0);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a2c0b4  FUN_00a2c0b4 =====

undefined ** FUN_00a2c0b4(undefined8 *param_1,char *param_2,undefined8 param_3)

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
    ppuVar3 = (undefined **)FUN_00a24f38((void *)*param_1,__n,&local_1d8,FUN_00a2a840);
    return ppuVar3;
  }
  memcpy(auStack_1c8,(void *)*param_1,__n);
  auStack_1c8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_48,auStack_1c8,__n + 1)
  ;
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00afab10;
  }
  iVar1 = rename(param_2,local_40);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 00a2c1cc  FUN_00a2c1cc =====

undefined ** FUN_00a2c1cc(undefined8 *param_1,char *param_2,undefined8 param_3)

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
    ppuVar3 = (undefined **)FUN_00a24f38((void *)*param_1,__n,&local_1d8,FUN_00a2a8c4);
    return ppuVar3;
  }
  memcpy(auStack_1c8,(void *)*param_1,__n);
  auStack_1c8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_48,auStack_1c8,__n + 1)
  ;
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00afab10;
  }
  iVar1 = symlink(param_2,local_40);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 00a2c2e4  FUN_00a2c2e4 =====

undefined ** FUN_00a2c2e4(undefined8 *param_1,char *param_2,undefined8 param_3)

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
    ppuVar3 = (undefined **)FUN_00a24f38((void *)*param_1,__n,&local_1d8,FUN_00a2a948);
    return ppuVar3;
  }
  memcpy(auStack_1c8,(void *)*param_1,__n);
  auStack_1c8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_48,auStack_1c8,__n + 1)
  ;
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00afab10;
  }
  iVar1 = linkat(-100,param_2,-100,local_40,0);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 00a2c408  FUN_00a2c408 =====

undefined ** FUN_00a2c408(long *param_1,char *param_2)

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
  if (PTR_utimensat_00b01338 == (undefined *)0x0) {
    return &PTR_DAT_00afb528;
  }
  iVar2 = utimensat(-100,param_2,&local_30,0);
  if (iVar2 != -1) {
    return (undefined **)0x0;
  }
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (undefined **)((long)iVar2 << 0x20 | 2);
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (undefined **)((long)iVar2 << 0x20 | 2);
}


// ===== 00a2c4f8  FUN_00a2c4f8 =====

void FUN_00a2c4f8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if (*param_1 != -1) {
    plVar1 = param_1;
  }
  FUN_00a4eb58(param_2,param_3,(char)param_1[3],plVar1);
  return;
}


// ===== 00a2c518  FUN_00a2c518 =====

byte FUN_00a2c518(undefined8 *param_1,uint *param_2)

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
      lVar6 = FUN_00ab2734(lVar7);
    }
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = lVar6 + -1;
    }
    FUN_00a1af38(lVar1,&local_a8,&DAT_00afa8c8);
    if ((local_24[0] & 1) == 0) {
      if ((*pbVar8 & 1) != 0) {
        local_b8[1] = 0;
        local_b8[0] = lVar3;
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_00ab2734(lVar7);
        }
        local_a8 = (byte *)0xffffffffffffffff;
        local_58[0] = 2;
                    /* try { // try from 00a2c5f0 to 00a2c60b has its CatchHandler @ 00a2c654 */
        bVar5 = FUN_00a3c7b4(local_b8,lVar7,&local_a8,local_58,0,in_x5,0,in_x7,pbVar8,uVar9);
        *pbVar2 = bVar5;
        *(long *)(local_b8[0] + 0x18) = *(long *)(local_b8[0] + 0x18) + 1;
      }
    }
    *(long *)param_1[1] = *(long *)param_1[1] + 1;
    bVar5 = *pbVar2 ^ 1;
  }
  return bVar5 & 1;
}


// ===== 00a2c668  FUN_00a2c668 =====

undefined8 FUN_00a2c668(long *param_1,long param_2,uint param_3,uint param_4)

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


// ===== 00a2c76c  FUN_00a2c76c =====

void FUN_00a2c76c(undefined8 *param_1)

{
  FUN_00ab62fc(*(undefined8 *)*param_1);
  return;
}


// ===== 00a2c778  FUN_00a2c778 =====

void FUN_00a2c778(undefined8 *param_1)

{
  FUN_00ab62b8(*(undefined8 *)*param_1);
  return;
}


// ===== 00a2c784  FUN_00a2c784 =====

ulong FUN_00a2c784(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = chown(param_2,*(__uid_t *)*param_1,*(__gid_t *)param_1[1]);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2c818  FUN_00a2c818 =====

ulong FUN_00a2c818(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = chroot(param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2c89c  FUN_00a2c89c =====

ulong FUN_00a2c89c(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = lchown(param_2,*(__uid_t *)*param_1,*(__gid_t *)param_1[1]);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2c930  FUN_00a2c930 =====

ulong FUN_00a2c930(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mkfifo(param_2,*(__mode_t *)*param_1);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2c9c0  FUN_00a2c9c0 =====

/* WARNING: Removing unreachable block (ram,0x00a2ca68) */

void FUN_00a2c9c0(size_t *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *__s;
  size_t __n;
  undefined1 *__dest;
  
  if (DAT_00b10878 < 0x3ffffffe) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b10878 = DAT_00b10878 + 1;
    }
    if (cVar1 == '\0') {
      __s = getenv(param_3);
      goto joined_r0x00a2ca90;
    }
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
            (&DAT_00b10878);
  __s = getenv(param_3);
joined_r0x00a2ca90:
  if (__s == (char *)0x0) {
    *param_1 = 0xffffffffffffffff;
  }
  else {
    __n = strlen(__s);
    if (__n == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 00a2caec to 00a2caf7 has its CatchHandler @ 00a2cafc */
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
    uVar3 = DAT_00b10878 - 1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b10878 = uVar3;
    }
  } while (cVar1 != '\0');
  if ((uVar3 & 0xbfffffff) == 0x80000000) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (&DAT_00b10878);
    return;
  }
  return;
}


// ===== 00a2cb3c  FUN_00a2cb3c =====

undefined ** FUN_00a2cb3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    ppuVar1 = (undefined **)FUN_00a24f38((void *)*param_1,__n,&local_1d8,FUN_00a2ae94);
    return ppuVar1;
  }
  memcpy(auStack_1c8,(void *)*param_1,__n);
  auStack_1c8[__n] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_48,auStack_1c8,__n + 1)
  ;
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00afab10;
  }
  ppuVar1 = (undefined **)FUN_00a2ae94(&local_1d8,local_40);
  return ppuVar1;
}


// ===== 00a2cbf8  FUN_00a2cbf8 =====

ulong FUN_00a2cbf8(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (DAT_00b10878 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
    if (bVar2) {
      DAT_00b10878 = 0x3fffffff;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a2cdc4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
            (&DAT_00b10878);
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar3 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a2cdc4:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar3;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path();
    uVar5 = uVar5 ^ 1;
  }
  cVar1 = DAT_00b10880;
  iVar4 = unsetenv(param_2);
  if (iVar4 == -1) {
    piVar6 = (int *)__errno();
    iVar4 = *piVar6;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    uVar8 = (long)iVar4 << 0x20 | 2;
  }
  else {
    uVar8 = 0;
  }
  if (cVar1 == '\0') {
    if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      DAT_00b10880 = '\x01';
    }
    do {
      iVar4 = DAT_00b10878;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00b10878 = DAT_00b10878 + -0x3fffffff;
      }
    } while (cVar1 != '\0');
  }
  else {
    if ((((uVar5 & 1) == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      DAT_00b10880 = '\x01';
    }
    do {
      iVar4 = DAT_00b10878;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00b10878 = DAT_00b10878 + -0x3fffffff;
      }
    } while (cVar1 != '\0');
  }
  if (iVar4 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (&DAT_00b10878);
    return uVar8;
  }
  return uVar8;
}


// ===== 00a2cdf8  FUN_00a2cdf8 =====

void * FUN_00a2cdf8(void)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  pthread_key_t __key;
  void *pvVar4;
  void *unaff_x19;
  
  pvVar4 = DAT_00b108d0;
  do {
    while( true ) {
      pvVar3 = DAT_00b108d0;
      if (pvVar4 == (void *)0xffffffffffffffff) {
        FUN_00a5501c();
        goto LAB_00a2ce74;
      }
      if (DAT_00b108d0 == pvVar4) break;
      ClearExclusiveLocal();
      pvVar4 = pvVar3;
    }
    unaff_x19 = (void *)((long)pvVar4 + 1);
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb108d0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b108d0 = unaff_x19;
    }
    pvVar4 = pvVar3;
  } while (cVar1 != '\0');
  if (DAT_00b108d8 != 0) {
    pthread_setspecific((pthread_key_t)DAT_00b108d8,unaff_x19);
    return unaff_x19;
  }
LAB_00a2ce74:
  __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init
                    (&DAT_00b108d8);
  pthread_setspecific(__key,unaff_x19);
  return unaff_x19;
}


// ===== 00a2ce98  FUN_00a2ce98 =====

void FUN_00a2ce98(undefined8 *param_1,undefined8 *param_2,char *param_3)

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
  void *local_68;
  long local_58;
  void *pvStack_50;
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
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      uVar5 = (long)iVar2 << 0x20 | 2;
    }
    else {
      __s = gai_strerror(iVar2);
      sVar4 = strlen(__s);
      <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(&local_70,__s,sVar4 + 1);
      pcStack_38 = FUN_00a64ee0;
                    /* try { // try from 00a2cf74 to 00a2cf87 has its CatchHandler @ 00a2d014 */
      local_40 = &local_70;
      alloc::fmt::format::format_inner(&local_58,&DAT_002b4a23,&local_40);
                    /* try { // try from 00a2cf90 to 00a2cf9b has its CatchHandler @ 00a2cff8 */
      uVar5 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2b,pvStack_50,local_48);
      if (local_58 != 0) {
        free(pvStack_50);
      }
      if (0 < local_70) {
        free(local_68);
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


// ===== 00a2d038  FUN_00a2d038 =====

undefined8 FUN_00a2d038(ulong *param_1,long param_2,char *param_3,ulong param_4)

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
  undefined8 uStack_1f8;
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
    if (*param_3 == '/') goto LAB_00a2d0d0;
    uVar4 = *param_1;
    uVar9 = 0;
  }
  else if (*param_3 == '/') {
LAB_00a2d0d0:
    uVar4 = *param_1;
    uVar9 = 0;
    param_1[2] = 0;
  }
  else {
    uVar4 = *param_1;
    uVar6 = param_1[1];
    if (*(char *)(uVar6 + uVar9 + -1) != '/') {
      if (uVar4 == uVar9) {
        FUN_00a29778(param_1,uVar9,1,1,1);
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
    FUN_00a29778(param_1,uVar9,param_4,1,1);
    uVar9 = param_1[2];
  }
  memcpy((void *)(param_1[1] + uVar9),param_3,param_4);
  param_1[2] = uVar9 + param_4;
  *(undefined8 *)(param_2 + 0x10) = 0;
  __n = (undefined **)param_1[2];
  local_200 = 0x1b600000000;
  uStack_1f8 = 1;
  if (__n < (undefined **)0x180) {
    local_1e0 = (undefined1 *)&local_200;
    memcpy(&local_1d8,(void *)param_1[1],(size_t)__n);
    *(undefined1 *)((long)local_1d0 + (long)(__n + -1)) = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_58,&local_1d8,(long)__n + 1);
    if (CONCAT44(uStack_54,local_58) != 1) {
      FUN_00a4725c(&local_1f0,local_50,&local_200);
      goto joined_r0x00a2d3e4;
    }
    local_1e8 = &PTR_DAT_00afab10;
    local_1f0 = 1;
  }
  else {
    local_1e0 = (undefined1 *)&local_200;
    FUN_00a24ad8(&local_1f0,(void *)param_1[1],__n,&local_1e0,FUN_00a2bb60);
joined_r0x00a2d3e4:
    if (local_1f0 != 1) {
      uVar9 = (ulong)local_1ec;
      iVar7 = 0;
      goto LAB_00a2d1ac;
    }
  }
  iVar7 = 1;
  local_50 = local_1e8;
  __n = local_1e8;
LAB_00a2d1ac:
  local_58 = iVar7;
                    /* try { // try from 00a2d1b0 to 00a2d1b7 has its CatchHandler @ 00a2d428 */
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
                    /* try { // try from 00a2d208 to 00a2d24b has its CatchHandler @ 00a2d410 */
    local_1f0 = iVar8;
    auVar10 = <&std::fs::File_as_alloc::io::read::Read>::read_to_string(&local_1d8,param_2);
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
      auVar10 = FUN_00a17ee0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
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


// ===== 00a2d440  FUN_00a2d440 =====

void FUN_00a2d440(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  std::panicking::begin_panic<&str>
            (param_1,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afadc8);
}


// ===== 00a2d454  FUN_00a2d454 =====

void FUN_00a2d454(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab58);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(0x400,1);
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


// ===== 00a2d4bc  FUN_00a2d4bc =====

void FUN_00a2d4bc(undefined8 *param_1)

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
  core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab58);
}


// ===== 00a2d4fc  FUN_00a2d4fc =====

void FUN_00a2d4fc(undefined8 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afab58);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(0x2000,1);
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


// ===== 00a2d568  FUN_00a2d568 =====

void FUN_00a2d568(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_00a29f80(&local_18);
  return;
}


// ===== 00a2d590  FUN_00a2d590 =====

void FUN_00a2d590(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_00a2a0ac(&local_18);
  return;
}


// ===== 00a2d5b8  FUN_00a2d5b8 =====

void FUN_00a2d5b8(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_00a2a290(&local_18);
  return;
}


// ===== 00a2d5e0  thunk_FUN_00a2a9e0 =====

void thunk_FUN_00a2a9e0(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  byte *pbVar8;
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
  
  pcVar1 = (char *)param_1[1];
  *(undefined1 *)*param_1 = 1;
  if ((*pcVar1 == '\0') &&
     (<std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name
                (&plStack_a8,param_2), plStack_a8 != (long *)0xffffffffffffffff)) {
    if (plStack_a8 == (long *)0x2) {
      core::str::converts::from_utf8(&puStack_58,uStack_68,uStack_60);
      uStack_88 = uStack_50;
      uStack_80 = uStack_48;
      if (((ulong)puStack_58 & 1) == 0) {
LAB_00a2abb4:
        uVar4 = FUN_00a68d04(&DAT_0038226d,0x1a,uStack_88,uStack_80);
        pbVar8 = (byte *)param_1[2];
        if ((uVar4 & 1) != 0) {
          *pbVar8 = 1;
          return;
        }
        if ((*pbVar8 & 1) != 0) {
          iVar3 = FUN_00a68d04(&DAT_00382287,0x1c,uStack_88,uStack_80);
          if (iVar3 != 0) {
            *pbVar8 = 0;
            return;
          }
          if ((*pbVar8 & 1) != 0) goto LAB_00a2aa14;
        }
        *(long *)param_1[3] = *(long *)param_1[3] + 1;
      }
    }
    else if (uStack_88 != 0) goto LAB_00a2abb4;
  }
LAB_00a2aa14:
  if ((*(byte *)param_1[2] & 1) == 0) {
    return;
  }
  plVar6 = (long *)param_1[3];
  lVar5 = *plVar6;
  if (lVar5 != 0) {
    pbVar8 = (byte *)param_1[4];
    if ((*pbVar8 & 1) == 0) {
      puStack_58 = &UNK_003822a3;
      uStack_50 = (ulong)(lVar5 != 1);
      if (lVar5 == 1) {
        puStack_58 = (undefined *)0x1;
      }
      puStack_a0 = PTR_fmt_00b00c10;
      ppuStack_98 = &puStack_58;
      pcStack_90 = FUN_00a5be48;
      plStack_a8 = plVar6;
      core::fmt::write(**(undefined8 **)param_1[5],(*(undefined8 **)param_1[5])[1],&DAT_002b4937,
                       &plStack_a8);
    }
    *pbVar8 = 0;
    *plVar6 = 0;
  }
  alStack_b8[0] = param_1[5];
  uVar7 = *(undefined8 *)((uint *)param_1[7] + 2);
  alStack_b8[1] = 0;
  if ((*(uint *)param_1[7] & 1) == 0) {
    uVar7 = FUN_00ab2734(uVar7);
  }
  <std::backtrace_rs::symbolize::std::backtrace_rs::symbolize::Symbol>::name(&plStack_a8,param_2);
  iVar3 = *param_2;
  if (iVar3 == 2) {
LAB_00a2ab4c:
    puStack_58 = (undefined *)0x2;
  }
  else {
    if (iVar3 == -1) {
      iVar3 = 0;
      puStack_58 = (undefined *)0x2;
      goto LAB_00a2ab64;
    }
    if (*(ulong *)(param_2 + 4) == 0) goto LAB_00a2ab4c;
    uStack_48 = *(undefined8 *)(param_2 + 6);
    puStack_58 = (undefined *)0x0;
    uStack_50 = *(ulong *)(param_2 + 4);
  }
  if (iVar3 == 2) {
    iVar3 = 0;
  }
LAB_00a2ab64:
  uVar2 = FUN_00a3c7b4(alStack_b8,uVar7,&plStack_a8,&puStack_58,iVar3);
  *(undefined1 *)param_1[6] = uVar2;
  *(long *)(alStack_b8[0] + 0x18) = *(long *)(alStack_b8[0] + 0x18) + 1;
  return;
}


// ===== 00a2d5e4  FUN_00a2d5e4 =====

void FUN_00a2d5e4(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  FUN_00a2ac64(&local_18);
  return;
}


// ===== 00a2d60c  FUN_00a2d60c =====

undefined8 FUN_00a2d60c(void)

{
  FUN_00a2ba18();
  return 1;
}


// ===== 00a2d624  FUN_00a2d624 =====

ulong FUN_00a2d624(long *param_1,undefined8 param_2,undefined8 *param_3)

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
                    /* try { // try from 00a2d668 to 00a2d673 has its CatchHandler @ 00a2d6ac */
  uVar2 = FUN_00a4eb58(param_2,&local_48,(char)param_1[3],plVar1);
  if (0 < lVar3) {
    uVar2 = uVar2 & 0xffffffff;
    free((void *)param_1[1]);
  }
  return uVar2;
}


// ===== 00a2d6d0  thunk_FUN_00a2c518 =====

byte thunk_FUN_00a2c518(undefined8 *param_1,uint *param_2)

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
      lVar6 = FUN_00ab2734(lVar7);
    }
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = lVar6 + -1;
    }
    FUN_00a1af38(lVar1,&pbStack_a8,&DAT_00afa8c8);
    if ((abStack_24[0] & 1) == 0) {
      if ((*pbVar8 & 1) != 0) {
        alStack_b8[1] = 0;
        alStack_b8[0] = lVar3;
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_00ab2734(lVar7);
        }
        pbStack_a8 = (byte *)0xffffffffffffffff;
        auStack_58[0] = 2;
        bVar5 = FUN_00a3c7b4(alStack_b8,lVar7,&pbStack_a8,auStack_58,0,in_x5,0,in_x7,pbVar8,uVar9);
        *pbVar2 = bVar5;
        *(long *)(alStack_b8[0] + 0x18) = *(long *)(alStack_b8[0] + 0x18) + 1;
      }
    }
    *(long *)param_1[1] = *(long *)param_1[1] + 1;
    bVar5 = *pbVar2 ^ 1;
  }
  return bVar5 & 1;
}


// ===== 00a2d6d4  FUN_00a2d6d4 =====

void FUN_00a2d6d4(undefined8 *param_1)

{
  FUN_00ab62fc(*(undefined8 *)*param_1);
  return;
}


// ===== 00a2d6e0  FUN_00a2d6e0 =====

void FUN_00a2d6e0(undefined8 *param_1)

{
  FUN_00ab62b8(*(undefined8 *)*param_1);
  return;
}


// ===== 00a2d6ec  FUN_00a2d6ec =====

ulong FUN_00a2d6ec(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  void *__ptr;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  long local_28;
  
  lVar3 = *param_1;
  uStack_40 = param_3[1];
  local_48 = *param_3;
  local_38 = param_3[2];
  plVar1 = (long *)0x0;
  if (lVar3 != -1) {
    plVar1 = param_1;
  }
                    /* try { // try from 00a2d72c to 00a2d737 has its CatchHandler @ 00a2d7b8 */
  uVar2 = FUN_00a4eb58(param_2,&local_48,(char)param_1[3],plVar1);
  __ptr = (void *)param_1[1];
  if (lVar3 == -1) {
    if ((1 < ((ulong)__ptr & 3) - 2) && (((ulong)__ptr & 3) != 0)) {
      local_28 = (long)__ptr + -1;
      local_30 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      return uVar2 & 0xffffffff;
    }
  }
  else if (lVar3 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    free(__ptr);
  }
  return uVar2;
}


// ===== 00a2d7d0  FUN_00a2d7d0 =====

void FUN_00a2d7d0(undefined8 param_1,undefined8 param_2)

{
  std::panicking::default_hook(param_2);
  return;
}


// ===== 00a2d7d8  __rustc::rust_panic =====

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
  puStack_20 = PTR_fmt_00b00c40;
  FUN_00a6afc8(&uStack_11,&DAT_002b2a25,&local_28);
  FUN_00a1ff48();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a2d818  __rustc::__rdl_alloc =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rdl_alloc */

void * __rustcall __rustc::__rdl_alloc(size_t param_1,size_t param_2)

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


// ===== 00a2d870  __rustc::__rust_abort =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_abort */

void __rustcall __rustc::__rust_abort(void)

{
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a2d87c  __rustc::__rdl_dealloc =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rdl_dealloc */

void __rustcall __rustc::__rdl_dealloc(void)

{
  (*(code *)PTR_free_00b016f0)();
  return;
}


// ===== 00a2d880  __rustc::__rdl_realloc =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rdl_realloc */

void * __rustcall __rustc::__rdl_realloc(void *param_1,ulong param_2,size_t param_3,size_t param_4)

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


// ===== 00a2d92c  __rustc::__rust_drop_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_drop_panic */

void __rustcall __rustc::__rust_drop_panic(undefined8 param_1)

{
  ulong uVar1;
  long local_18;
  
                    /* try { // try from 00a2d938 to 00a2d97b has its CatchHandler @ 00a2d980 */
  uVar1 = FUN_00a6aea4(param_1,&DAT_003823e1,0x3c);
  if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    local_18 = uVar1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a2d984  __rustc::rust_begin_unwind =====

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
  pcStack_48 = __rdl_alloc_zeroed;
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


// ===== 00a2d9a4  __rustc::__rdl_alloc_zeroed =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rdl_alloc_zeroed */

void * __rustcall __rustc::__rdl_alloc_zeroed(size_t param_1,size_t param_2)

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


// ===== 00a2da34  __rustc::__rust_foreign_exception =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_foreign_exception */

void __rustcall __rustc::__rust_foreign_exception(undefined8 param_1)

{
  ulong uVar1;
  long local_18;
  
                    /* try { // try from 00a2da40 to 00a2da83 has its CatchHandler @ 00a2da88 */
  uVar1 = FUN_00a6aea4(param_1,&DAT_0038241d,0x44);
  if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    local_18 = uVar1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a2da8c  __rustc::__rust_alloc_error_handler =====

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
      if (bVar2) goto LAB_00a2daf4;
      uVar1 = uVar1 + 0xc4653600;
    }
    auVar7._8_4_ = uVar1;
    auVar7._0_8_ = lVar3;
    auVar7._12_4_ = 0;
    return auVar7;
  }
LAB_00a2daf4:
  auVar6._8_8_ = 0xffffffff;
  auVar6._0_8_ = lVar3;
  return auVar6;
}


// ===== 00a2daa4  <std::time::[5]::std::time::SystemTime>::checked_add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::[5]::std::time::SystemTime>::checked_add */

undefined1  [16] __rustcall
<std::time::[5]::std::time::SystemTime>::checked_add(long *param_1,long param_2,int param_3)

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
      if (bVar2) goto LAB_00a2daf4;
      uVar1 = uVar1 + 0xc4653600;
    }
    auVar4._8_4_ = uVar1;
    auVar4._0_8_ = lVar3;
    auVar4._12_4_ = 0;
    return auVar4;
  }
LAB_00a2daf4:
  auVar5._8_8_ = 0xffffffff;
  auVar5._0_8_ = lVar3;
  return auVar5;
}


// ===== 00a2dafc  <std::time::[5]::std::time::SystemTime>::checked_sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::[5]::std::time::SystemTime>::checked_sub */

undefined1  [16] __rustcall
<std::time::[5]::std::time::SystemTime>::checked_sub(long *param_1,long param_2,int param_3)

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


// ===== 00a2db4c  <std::time::std::time::Instant>::duration_since =====

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
  FUN_00a312f4(local_28,param_1,&local_38);
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


// ===== 00a2db98  <std::time::std::time::Instant>::checked_duration_since =====

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
  FUN_00a312f4(local_28,param_1,&local_38);
  if (local_28[0] != 0) {
    local_18 = 0xffffffff;
  }
  auVar1._8_4_ = local_18;
  auVar1._0_8_ = local_20;
  auVar1._12_4_ = 0;
  return auVar1;
}


// ===== 00a2dbe0  <std::time::std::time::Instant>::now =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::std::time::Instant>::now */

void __rustcall <std::time::std::time::Instant>::now(void)

{
  FUN_00a313e4(1);
  return;
}


// ===== 00a2dbe8  <std::time::std::time::Instant>::elapsed =====

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
  
  local_58 = FUN_00a313e4(1);
  local_48 = *param_1;
  local_40 = *(undefined4 *)(param_1 + 1);
  FUN_00a312f4(local_38,local_58,&local_48);
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


// ===== 00a2dc54  FUN_00a2dc54 =====

void FUN_00a2dc54(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 *__ptr;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *unaff_x26;
  ulong uVar15;
  ulong unaff_x28;
  long local_138;
  long *local_130;
  long *local_120;
  undefined8 uStack_118;
  long *local_110;
  long *plStack_108;
  long *local_100;
  long *plStack_f8;
  long *local_f0;
  long *plStack_e8;
  long *local_e0;
  long *plStack_d8;
  undefined8 local_d0;
  uint local_c8;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long lStack_a8;
  
  cVar4 = (char)param_2[0x3c];
  if (cVar4 == -2) {
    if (*param_2 == 1) {
      lVar10 = param_2[0x2a];
      if (lVar10 != 0) {
        local_130 = (long *)param_2[0x2b];
      }
      uVar2 = *(uint *)(param_2 + 0x34);
      uVar11 = (ulong)uVar2;
      lVar13 = param_2[1];
      local_f0 = (long *)param_2[0x2f];
      plStack_e8 = (long *)param_2[0x30];
      local_e0 = (long *)(param_2[0x35] + 0x10);
      local_110 = (long *)0x0;
      plStack_108 = (long *)0x0;
      lVar8 = 0xc;
      if ((uVar2 & 0xff00) != 0x800) {
        lVar8 = 4;
      }
      local_100 = (long *)0x0;
      plStack_d8 = (long *)(lVar8 + param_2[0x31]);
      local_d0 = 0;
      local_120 = (long *)0x0;
      uStack_118 = &DAT_00000010;
      plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffffff000000);
                    /* try { // try from 00a2dd08 to 00a2dd13 has its CatchHandler @ 00a2e004 */
      local_c8 = uVar2;
      FUN_00a4592c(&local_c0,&local_120);
      __ptr = uStack_118;
      uVar15 = (ulong)local_c0 & 0xff;
      if ((char)local_c0 == -1) {
        if ((short)plStack_f8 != 0) {
          if (uVar2 < 0x50000) {
            puVar7 = uStack_118 + -0x30;
            local_138 = (long)local_110 * 0x30;
            do {
              if (local_138 == 0) goto LAB_00a2de04;
              psVar1 = (short *)(puVar7 + 0x50);
              puVar7 = puVar7 + 0x30;
              local_138 = local_138 + -0x30;
            } while (*psVar1 != 0x2130);
          }
          else {
            puVar7 = uStack_118 + -0x30;
            local_138 = (long)local_110 * 0x30;
            do {
              if (local_138 == 0) goto LAB_00a2de04;
              psVar1 = (short *)(puVar7 + 0x50);
              puVar7 = puVar7 + 0x30;
              local_138 = local_138 + -0x30;
            } while (*psVar1 != 0x76);
          }
          FUN_00a43f68(&local_c0);
          unaff_x28 = (ulong)plStack_b8 >> 0x10;
          uVar15 = (ulong)plStack_b8 & 0xff;
          uVar11 = (ulong)plStack_b8 >> 8 & 0xff;
          plVar14 = local_c0;
          local_138 = lStack_a8;
          unaff_x26 = local_b0;
          goto joined_r0x00a2de10;
        }
        uVar15 = 0x3e;
      }
      else {
        unaff_x28 = (ulong)local_c0 >> 0x10;
        uVar11 = (ulong)local_c0 >> 8 & 0xff;
        unaff_x26 = plStack_b8;
      }
      if (local_120 != (long *)0x0) {
        plVar14 = (long *)0xfffffffffffffffe;
        goto LAB_00a2de14;
      }
      goto LAB_00a2de2c;
    }
    FUN_00a183d8(param_2 + 0x3c);
    cVar4 = (char)param_2[0x3c];
  }
  if (cVar4 == -1) {
    plStack_108 = (long *)param_2[0x3d];
    if (plStack_108 == (long *)0x0) {
      uVar9 = 0;
      local_110 = (long *)(*param_4 + 0x10);
      plStack_108 = param_2;
    }
    else {
      uVar9 = 2;
      local_110 = (long *)(plStack_108[0x3c] + 0x10);
    }
  }
  else {
    local_110 = (long *)param_2[0x3c];
    uVar9 = 0xff;
    plStack_108 = (long *)param_2[0x3d];
  }
  uStack_118 = (undefined1 *)CONCAT71(uStack_118._1_7_,uVar9);
  goto LAB_00a2dfbc;
LAB_00a2de04:
  plVar14 = (long *)0xffffffffffffffff;
joined_r0x00a2de10:
  if (local_120 != (long *)0x0) {
LAB_00a2de14:
    free(__ptr);
  }
  if (plVar14 != (long *)0xfffffffffffffffe) {
    uStack_118 = (undefined1 *)((uVar11 & 0xff) << 8);
    plVar12 = (long *)*param_4;
    uVar3 = (undefined2)(unaff_x28 >> 0x20);
    uStack_118 = (undefined1 *)CONCAT26(uVar3,(undefined6)uStack_118);
    uStack_118 = (undefined1 *)CONCAT71(uStack_118._1_7_,(char)uVar15);
    uStack_118._0_6_ = CONCAT42((int)unaff_x28,(undefined2)uStack_118);
    uStack_118 = (undefined1 *)CONCAT26(uVar3,(undefined6)uStack_118);
    plStack_108 = (long *)local_138;
    local_120 = plVar14;
    if (plVar14 == (long *)0xffffffffffffffff) {
      plStack_b8 = (long *)0x0;
      local_b0 = unaff_x26;
    }
    else {
      local_110 = unaff_x26;
      FUN_00a332d8(&local_c0,plVar12 + 2,*(undefined1 *)((long)param_2 + 0x1a1),param_2[0x37],
                   &local_120);
      if (local_c0 == (long *)0x1) goto LAB_00a2de38;
    }
    do {
      lVar8 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0xa2e004);
      (*pcVar6)();
    }
    plStack_108 = local_130;
    local_120 = plVar12;
    uStack_118 = (undefined1 *)lVar13;
    local_110 = (long *)lVar10;
    local_100 = plStack_b8;
    plStack_f8 = local_b0;
    local_f0 = param_2;
    plStack_e8 = param_4;
    local_e0 = param_2;
    plStack_d8 = param_2;
    if (plVar12 != (long *)0x0) {
      param_1[0xc] = param_3;
      param_1[1] = lVar13;
      *param_1 = plVar12;
      param_1[3] = local_130;
      param_1[2] = lVar10;
      param_1[9] = param_2;
      param_1[8] = param_2;
      param_1[0xb] = param_4;
      param_1[10] = param_2;
      param_1[5] = local_b0;
      param_1[4] = plStack_b8;
      param_1[7] = param_4;
      param_1[6] = param_2;
      return;
    }
    goto LAB_00a2dfc8;
  }
LAB_00a2de2c:
  plStack_b8 = (long *)(uVar15 | (uVar11 & 0xff) << 8 | unaff_x28 << 0x10);
LAB_00a2de38:
  if ((char)param_2[0x3c] == -2) {
    local_c0 = plStack_b8;
    FUN_00a18420(param_2 + 0x3c,&local_c0);
    if ((char)param_2[0x3c] == -1) goto LAB_00a2de50;
LAB_00a2dfac:
    local_110 = (long *)param_2[0x3c];
    plStack_108 = (long *)param_2[0x3d];
    uVar9 = 0xff;
  }
  else {
    if ((char)param_2[0x3c] != -1) goto LAB_00a2dfac;
LAB_00a2de50:
    plStack_108 = (long *)param_2[0x3d];
    if (plStack_108 == (long *)0x0) {
      uVar9 = 0;
      local_110 = (long *)(*param_4 + 0x10);
      plStack_108 = param_2;
    }
    else {
      uVar9 = 2;
      local_110 = (long *)(plStack_108[0x3c] + 0x10);
    }
  }
  uStack_118 = (undefined1 *)CONCAT71(uStack_118._1_7_,uVar9);
LAB_00a2dfbc:
  local_120 = (long *)0x0;
LAB_00a2dfc8:
  local_c0 = param_2;
  plStack_b8 = param_4;
  local_b0 = (long *)param_3;
  FUN_00a2b0a8(param_1 + 1,&local_c0,&uStack_118);
  *param_1 = 0;
  return;
}


// ===== 00a2e02c  <std::ffi::os_str::std::ffi::os_str::OsString>::into_boxed_os_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::std::ffi::os_str::OsString>::into_boxed_os_str */

undefined1  [16] __rustcall
<std::ffi::os_str::std::ffi::os_str::OsString>::into_boxed_os_str(ulong *param_1)

{
  void *__ptr;
  ulong uVar1;
  undefined1 auVar2 [16];
  
  __ptr = *(void **)*(undefined1 (*) [16])(param_1 + 1);
  uVar1 = param_1[2];
  if (*param_1 <= uVar1) {
    return *(undefined1 (*) [16])(param_1 + 1);
  }
  if (uVar1 != 0) {
    auVar2._0_8_ = FUN_004b2600(__ptr,*param_1,1,uVar1);
    if (auVar2._0_8_ != 0) {
      auVar2._8_8_ = uVar1;
      return auVar2;
    }
                    /* try { // try from 00a2e0bc to 00a2e0c7 has its CatchHandler @ 00a2e0cc */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,uVar1);
  }
  free(__ptr);
  return ZEXT816(1);
}


// ===== 00a2e0e8  <std::net::tcp::std::net::tcp::TcpStream>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::local_addr */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::local_addr(undefined8 param_1,undefined4 *param_2)

{
  FUN_00a37af8(param_1,*param_2);
  return;
}


// ===== 00a2e0f4  <std::net::tcp::std::net::tcp::TcpStream>::set_linger =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2e1a4  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::take_error */

undefined1  [16] __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::take_error(int *param_1)

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
    if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
      auVar5._8_8_ = (long)iVar2 << 0x20 | 2;
      auVar5._0_8_ = 1;
      return auVar5;
    }
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    auVar6._8_8_ = (long)iVar2 << 0x20 | 2;
    auVar6._0_8_ = 1;
    return auVar6;
  }
  lVar4 = (long)local_8[0];
  if (local_8[0] != 0) {
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = lVar4 << 0x20 | 2;
    return auVar1 << 0x40;
  }
  return ZEXT816(0);
}


// ===== 00a2e298  <std::net::tcp::std::net::tcp::TcpStream>::set_nodelay =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2e330  <std::net::tcp::std::net::tcp::TcpStream>::read_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::read_timeout */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::read_timeout(undefined8 param_1,undefined4 *param_2)

{
  FUN_00a32d88(param_1,*param_2,0x14);
  return;
}


// ===== 00a2e340  <std::net::tcp::std::net::tcp::TcpStream>::set_keepalive =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2e3d8  <std::net::tcp::std::net::tcp::TcpStream>::write_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::write_timeout */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::write_timeout(undefined8 param_1,undefined4 *param_2)

{
  FUN_00a32d88(param_1,*param_2,0x15);
  return;
}


// ===== 00a2e3e8  <std::net::tcp::std::net::tcp::TcpStream>::connect_timeout =====

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
        goto LAB_00a2e4cc;
      }
LAB_00a2e534:
      piVar16 = (int *)__errno();
      iVar13 = *piVar16;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      ppuVar22 = (undefined **)((long)iVar13 << 0x20 | 2);
      goto LAB_00a2e654;
    }
LAB_00a2e504:
    puVar15 = (uint *)__errno();
    uVar14 = *puVar15;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      puVar15 = (uint *)core::io::error::os_functions::set_functions::set_functions_inner
                                  (&PTR_FUN_00afaaf8);
    }
    ppuVar22 = (undefined **)((ulong)uVar14 << 0x20 | 2);
  }
  else {
    __fd = socket(2,0x80001,0);
    if (__fd == -1) goto LAB_00a2e504;
    local_a8._0_4_ = 1;
    iVar13 = ioctl(__fd,0x5421,local_a8);
    if (iVar13 == -1) goto LAB_00a2e534;
    local_a0 = (undefined *)0x0;
    uStack_98 = 0;
    uVar3 = param_2[3];
    psVar21 = param_2 + 1;
    __len = 0x10;
    local_a8._0_2_ = 2;
    local_90 = extraout_w9;
LAB_00a2e4cc:
    local_a8._2_2_ = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
    local_a8._4_4_ = *(undefined4 *)psVar21;
    iVar13 = connect(__fd,(sockaddr *)local_a8,__len);
    if (iVar13 == -1) {
      piVar16 = (int *)__errno();
      iVar13 = *piVar16;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
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
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
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
                    /* try { // try from 00a2e648 to 00a2e64f has its CatchHandler @ 00a2e8d0 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_a0);
      }
    }
    else {
      if (!bVar4) {
LAB_00a2e844:
        puVar15 = (uint *)(ulong)uVar14;
        uVar19 = 0;
        param_1[1] = __fd;
        goto LAB_00a2e664;
      }
      ppuVar22 = unaff_x25;
      if (((1 < ((ulong)unaff_x25 & 3)) &&
          (local_80 = auVar24, local_70 = auVar8, ((ulong)unaff_x25 & 3) == 2)) &&
         (local_80 = auVar25, local_70 = auVar9, (ulong)unaff_x25 >> 0x20 == 0x73)) {
        local_88.events = 4;
        local_88.revents = 0;
        local_88.fd = __fd;
        if ((param_3 == (undefined *)0x0) && (param_4 == 0)) {
          ppuVar22 = &PTR_DAT_00afb098;
          local_80 = auVar5;
          local_70 = auVar10;
        }
        else {
                    /* try { // try from 00a2e688 to 00a2e693 has its CatchHandler @ 00a2e8f8 */
          auVar24 = FUN_00a313e4(1);
LAB_00a2e6a4:
          do {
                    /* try { // try from 00a2e6a4 to 00a2e6cf has its CatchHandler @ 00a2e8f4 */
            auVar25 = FUN_00a313e4(1);
            local_70 = auVar24;
            local_80 = auVar25;
            FUN_00a312f4(local_a8,local_80,local_70);
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
              ppuVar22 = (undefined **)&UNK_00afb0e0;
              goto LAB_00a2e654;
            }
            uVar20 = (long)param_3 - (long)puVar1;
            if (param_3 < puVar1) {
LAB_00a2e8b4:
                    /* WARNING: Subroutine does not return */
              core::option::expect_failed
                        (&DAT_003826d6,0x23,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb0b0);
            }
            if (param_4 < uVar14) {
              if (uVar20 == 0) goto LAB_00a2e8b4;
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
                          (&DAT_00382461,0x19,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afade0);
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
            uVar14 = ::poll(&local_88,1,(int)uVar20);
            if (uVar14 == 0xffffffff) {
              piVar16 = (int *)__errno();
              iVar13 = *piVar16;
              if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
                core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8)
                ;
              }
              ppuVar22 = (undefined **)((long)iVar13 << 0x20 | 2);
              local_a8 = (undefined1  [8])ppuVar22;
                    /* try { // try from 00a2e7e0 to 00a2e7ef has its CatchHandler @ 00a2e8e4 */
              lVar17 = core::io::error::os_functions::get_os_functions();
              uVar20 = (**(code **)(lVar17 + 0x10))(iVar13);
              if ((uVar20 & 1) == 0) goto LAB_00a2e654;
              goto LAB_00a2e6a4;
            }
          } while (uVar14 == 0);
          if ((local_88._4_4_ & 0x180000) == 0) goto LAB_00a2e844;
                    /* try { // try from 00a2e820 to 00a2e827 has its CatchHandler @ 00a2e8f8 */
          auVar23 = FUN_00a329c0(__fd);
          ppuVar18 = auVar23._8_8_;
          ppuVar22 = ppuVar18;
          if (((auVar23 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (ppuVar22 = (undefined **)&UNK_00afb0c8, ppuVar18 != (undefined **)0x0)) {
            ppuVar22 = ppuVar18;
          }
        }
      }
    }
LAB_00a2e654:
    uVar14 = close(__fd);
    puVar15 = (uint *)(ulong)uVar14;
  }
  *(undefined ***)(param_1 + 2) = ppuVar22;
  uVar19 = 1;
LAB_00a2e664:
  *param_1 = uVar19;
  return puVar15;
}


// ===== 00a2e91c  <std::net::udp::std::net::udp::UdpSocket>::set_nonblocking =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::set_nonblocking */

ulong __rustcall
<std::net::udp::std::net::udp::UdpSocket>::set_nonblocking(int *param_1,undefined4 param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2e9ac  <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::set_read_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::set_read_timeout */

undefined ** __rustcall
<std::os::unix::net::datagram::std::os::unix::net::datagram::UnixDatagram>::set_read_timeout
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
        return &PTR_DAT_00afb098;
      }
    }
    else if (param_2 < 0) {
      param_2 = 0x7fffffffffffffff;
      uStack_28 = (ulong)param_3 / 1000;
      goto LAB_00a2ea04;
    }
    uVar3 = param_3 / 1000;
    if (param_3 < 1000 && param_2 == 0) {
      uVar3 = 1;
    }
    uStack_28 = (ulong)uVar3;
  }
LAB_00a2ea04:
  local_30 = param_2;
  iVar1 = setsockopt(*param_1,1,0x14,&local_30,0x10);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (undefined **)((long)iVar1 << 0x20 | 2);
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 00a2eab8  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::set_write_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::set_write_timeout */

undefined ** __rustcall
<std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::set_write_timeout
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
        return &PTR_DAT_00afb098;
      }
    }
    else if (param_2 < 0) {
      param_2 = 0x7fffffffffffffff;
      uStack_28 = (ulong)param_3 / 1000;
      goto LAB_00a2eb10;
    }
    uVar3 = param_3 / 1000;
    if (param_3 < 1000 && param_2 == 0) {
      uVar3 = 1;
    }
    uStack_28 = (ulong)uVar3;
  }
LAB_00a2eb10:
  local_30 = param_2;
  iVar1 = setsockopt(*param_1,1,0x15,&local_30,0x10);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (undefined **)((long)iVar1 << 0x20 | 2);
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 00a2ebc4  <std::net::tcp::std::net::tcp::TcpStream>::ttl =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2ec74  <std::net::tcp::std::net::tcp::TcpStream>::peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::peek */

undefined1  [16] __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::peek(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = recv(*param_1,param_2,param_3,2);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 00a2ed08  <std::net::tcp::std::net::tcp::TcpStream>::linger =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *param_1 = (long)iVar1 << 0x20 | 2;
  *(undefined4 *)(param_1 + 1) = 0xfffffffe;
  return;
}


// ===== 00a2edc8  <std::net::tcp::std::net::tcp::TcpStream>::nodelay =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2ee84  <std::net::tcp::std::net::tcp::TcpStream>::set_ttl =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2ef1c  <std::os::unix::net::stream::std::os::unix::net::stream::UnixStream>::shutdown =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2efa4  <std::net::tcp::std::net::tcp::TcpStream>::keepalive =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2f060  <std::net::tcp::std::net::tcp::TcpStream>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::std::net::tcp::TcpStream>::peer_addr */

void __rustcall
<std::net::tcp::std::net::tcp::TcpStream>::peer_addr(undefined8 param_1,undefined4 *param_2)

{
  FUN_00a37c90(param_1,*param_2);
  return;
}


// ===== 00a2f06c  <std::net::tcp::[7]::std::net::tcp::TcpListener>::try_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::[7]::std::net::tcp::TcpListener>::try_clone */

void __rustcall
<std::net::tcp::[7]::std::net::tcp::TcpListener>::try_clone(undefined4 *param_1,int *param_2)

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2f0f8  <std::net::udp::std::net::udp::UdpSocket>::set_broadcast =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2f190  <std::net::udp::std::net::udp::UdpSocket>::multicast_ttl_v4 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2f240  <std::net::udp::std::net::udp::UdpSocket>::join_multicast_v4 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2f2e4  <std::net::udp::std::net::udp::UdpSocket>::join_multicast_v6 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2f394  <std::net::udp::std::net::udp::UdpSocket>::multicast_loop_v4 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2f450  <std::net::udp::std::net::udp::UdpSocket>::multicast_loop_v6 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2f50c  <std::net::udp::std::net::udp::UdpSocket>::leave_multicast_v4 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2f5b0  <std::net::udp::std::net::udp::UdpSocket>::leave_multicast_v6 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2f660  <std::net::udp::std::net::udp::UdpSocket>::set_multicast_ttl_v4 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2f6f8  <std::net::udp::std::net::udp::UdpSocket>::set_multicast_loop_v4 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2f790  <std::net::udp::std::net::udp::UdpSocket>::set_multicast_loop_v6 =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a2f828  <std::net::tcp::TcpStream_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<std::net::tcp::TcpStream_as_alloc::io::read::Read>::read(int *param_1,void *param_2,size_t param_3)

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 00a2f8bc  <std::net::tcp::TcpStream_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::net::tcp::TcpStream_as_core::io::write::Write>::write
          (int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = send(*param_1,param_2,param_3,0x4000);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a2f948  <std::net::udp::std::net::udp::UdpSocket>::broadcast =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 8) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a2fa04  <std::net::udp::std::net::udp::UdpSocket>::peek_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::peek_from */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::peek_from
          (undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a32ab0(param_1,*param_2,param_3,param_4,2);
  return;
}


// ===== 00a2fa20  <std::net::udp::std::net::udp::UdpSocket>::peer_addr =====

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
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
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
    core::panicking::panic(&DAT_00383128,0x35,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbb28);
  }
  if (local_c0.sa_family != 2) {
    *(undefined ***)(param_1 + 4) = &PTR_s_invalid_argument_00afbb40;
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
  core::panicking::panic(&DAT_003830f4,0x34,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbb10);
}


// ===== 00a2fbb4  <std::net::udp::std::net::udp::UdpSocket>::recv_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::std::net::udp::UdpSocket>::recv_from */

void __rustcall
<std::net::udp::std::net::udp::UdpSocket>::recv_from
          (undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a32ab0(param_1,*param_2,param_3,param_4,0);
  return;
}


// ===== 00a2fbd0  <std::thread::id::std::thread::id::ThreadId>::new =====

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
  
  lVar8 = DAT_00b108d0;
  while (lVar6 = DAT_00b108d0, lVar8 != -1) {
    if (DAT_00b108d0 == lVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0xb108d0,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        DAT_00b108d0 = lVar8 + 1;
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
  auVar9 = FUN_00a5501c();
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


// ===== 00a2fc28  <std::thread::scoped::std::thread::scoped::ScopeData>::decrement_num_running_threads =====

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


// ===== 00a2fc80  <std::thread::scoped::std::thread::scoped::ScopeData>::increment_num_running_threads =====

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
  uVar4 = FUN_00a2fcac();
  decrement_num_running_threads(uVar4,0);
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_003824ae,0x51,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaed0);
}


// ===== 00a2fcac  FUN_00a2fcac =====

void FUN_00a2fcac(undefined8 param_1)

{
  <std::thread::scoped::std::thread::scoped::ScopeData>::decrement_num_running_threads(param_1,0);
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_003824ae,0x51,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaed0);
}


// ===== 00a2fcd4  <std::thread::builder::std::thread::builder::Builder>::name =====

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
  
  if (0 < (long)param_2[2]) {
    free((void *)param_2[3]);
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


// ===== 00a2fd3c  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_buf_at =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a2fdf0  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end =====

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
    auVar11 = FUN_00a29c70(&local_80,param_2);
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
      auVar11 = FUN_00a29c70(&local_80,param_2);
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
      FUN_00a3856c(&local_78,uVar5,param_2[1],uVar6,1,1);
      if (local_78 == 1) {
        uVar5 = 0x2600000003;
LAB_00a2ffbc:
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
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        uVar5 = (long)iVar2 << 0x20 | 2;
        local_78 = uVar5;
                    /* try { // try from 00a2ff34 to 00a2ff43 has its CatchHandler @ 00a30008 */
        lVar3 = core::io::error::os_functions::get_os_functions();
        iVar2 = (**(code **)(lVar3 + 0x10))(iVar2);
        if (iVar2 == 0) {
          param_2[2] = uVar10;
          goto LAB_00a2ffbc;
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


// ===== 00a30020  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_cloexec =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a300a8  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_vectored =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a3013c  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_vectored =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a301d0  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::set_nonblocking =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a302a0  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_vectored_at =====

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
  if (PTR_preadv_00b01340 == (undefined *)0x0) {
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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a30374  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_vectored_at =====

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
  if (PTR_pwritev_00b01348 == (undefined *)0x0) {
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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a30448  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a304d0  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a30558  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_at =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a305e0  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_buf =====

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
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a30690  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write_at =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a30718  <std::sync::mpmc::context::std::sync::mpmc::context::Context>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpmc::context::std::sync::mpmc::context::Context>::new */

void __rustcall <std::sync::mpmc::context::std::sync::mpmc::context::Context>::new(void)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  void *pvStack_28;
  
  uVar1 = std::thread::current::current_or_unnamed();
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01350;
  local_50 = uVar1;
  if (uVar4 == 0) {
                    /* try { // try from 00a307bc to 00a307fb has its CatchHandler @ 00a30800 */
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01350);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar4);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar4);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00a1e75c(uVar4 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 != (void *)0x0) {
    uStack_38 = 0;
    local_30 = 0;
    uStack_48 = 1;
    local_50 = 1;
    local_40 = uVar1;
    pvStack_28 = pvVar2;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar3 = (undefined8 *)FUN_004b25a4(0x30,8);
    if (puVar3 == (undefined8 *)0x0) {
                    /* try { // try from 00a307a4 to 00a307b7 has its CatchHandler @ 00a30820 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(&local_50,8,0x30);
    }
    puVar3[1] = uStack_48;
    *puVar3 = local_50;
    puVar3[3] = uStack_38;
    puVar3[2] = local_40;
    puVar3[5] = pvStack_28;
    puVar3[4] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::thread::local::panic_access_error(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa630);
}


// ===== 00a3084c  <std::sync::poison::condvar::std::sync::poison::condvar::Condvar>::notify_all =====

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


// ===== 00a30870  <std::sync::poison::condvar::std::sync::poison::condvar::Condvar>::notify_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::poison::condvar::std::sync::poison::condvar::Condvar>::notify_one */

void __rustcall
<std::sync::poison::condvar::std::sync::poison::condvar::Condvar>::notify_one(int *param_1)

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


// ===== 00a30894  FUN_00a30894 =====

void FUN_00a30894(long *param_1,char *param_2,undefined2 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *local_d0;
  undefined1 *local_c8;
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
    local_c8 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar2 = (undefined1 *)FUN_004b25a4(param_3,1);
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(puVar2,param_2,(size_t)param_3);
    local_46 = *param_2 == '/';
    local_c8 = puVar2;
    local_c0 = param_3;
  }
  local_70 = (char *)CONCAT71(local_70._1_7_,0xff);
  local_48 = 0x201;
                    /* try { // try from 00a30924 to 00a3092f has its CatchHandler @ 00a30ba8 */
  local_d0 = local_c0;
  local_80 = param_2;
  local_78 = param_3;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_b8,&local_80);
  if (((local_b8[0] == -1) || (local_b8[0] != '\t')) ||
     ((lVar7 = lStack_a8, lStack_a8 == 2 && (*local_b0 == 0x2e2e)))) {
LAB_00a30998:
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pcVar3 = (char *)0x3;
    puVar5 = (undefined2 *)FUN_004b25a4(3,1);
    if (puVar5 == (undefined2 *)0x0) {
LAB_00a30b38:
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
      if (lVar6 == 0) goto LAB_00a30998;
      lVar7 = lVar6 + -1;
    } while (*(char *)((long)local_b0 + lVar6 + -1) != '.');
    if (lVar7 == 0) goto LAB_00a30998;
    pcVar3 = (char *)((lStack_a8 + -1) - lVar7);
    if (lStack_a8 + -1 == lVar7) {
      puVar5 = (undefined2 *)&DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar5 = (undefined2 *)FUN_004b25a4(pcVar3,1);
      if (puVar5 == (undefined2 *)0x0) goto LAB_00a30b38;
      memcpy(puVar5,(void *)((long)local_b0 + lVar6),(size_t)pcVar3);
    }
                    /* try { // try from 00a30af4 to 00a30b0b has its CatchHandler @ 00a30b54 */
    local_80 = pcVar3;
    local_78 = puVar5;
    local_70 = pcVar3;
    FUN_00a29778(&local_80,pcVar3,4,1,1);
    builtin_strncpy((char *)((long)local_78 + (long)local_70),".dwp",4);
    pcVar3 = local_70 + 4;
    pcVar4 = local_80;
    puVar5 = local_78;
  }
                    /* try { // try from 00a309cc to 00a309d7 has its CatchHandler @ 00a30b80 */
  <std::path::[r]::std::path::PathBuf>::_set_extension(&local_d0,puVar5,pcVar3);
  if (pcVar4 != (char *)0x0) {
    free(puVar5);
  }
  puVar2 = local_c8;
                    /* try { // try from 00a309f0 to 00a309fb has its CatchHandler @ 00a30ba8 */
  FUN_00a50dc4(&local_80,local_c8,local_c0);
  pcVar3 = local_70;
  puVar5 = local_78;
  if (local_80 == &DAT_00000001) {
    uVar8 = *(ulong *)(param_4 + 0x28);
    if (uVar8 == *(ulong *)(param_4 + 0x18)) {
                    /* try { // try from 00a30a20 to 00a30a23 has its CatchHandler @ 00a30b68 */
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
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf00);
      }
    }
    lVar7 = *(long *)(param_4 + 0x20) + (uVar8 + 1) * 0x10;
                    /* try { // try from 00a30a60 to 00a30a67 has its CatchHandler @ 00a30ba8 */
    FUN_00a40300(param_1,*(undefined8 *)(lVar7 + -0x10),*(undefined8 *)(lVar7 + -8));
    if (*param_1 != -1) goto joined_r0x00a30aa0;
  }
  *param_1 = -1;
joined_r0x00a30aa0:
  if (local_d0 != (undefined2 *)0x0) {
    free(puVar2);
    return;
  }
  return;
}


// ===== 00a30bcc  FUN_00a30bcc =====

undefined1  [16] FUN_00a30bcc(ulong *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (param_2 < 0) {
    uVar5 = 0;
LAB_00a30bec:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar5,param_2);
  }
  uVar4 = param_1[2];
  if (param_2 == 0) {
    lVar2 = 1;
    uVar6 = uVar4;
    if (uVar4 != *param_1) goto LAB_00a30c50;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar5 = 1;
    lVar2 = FUN_004b263c(param_2,1);
    if (lVar2 == 0) goto LAB_00a30bec;
    uVar6 = param_1[2];
    if (uVar6 != *param_1) goto LAB_00a30c50;
  }
                    /* try { // try from 00a30c48 to 00a30c4f has its CatchHandler @ 00a30ca8 */
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one
            (param_1);
LAB_00a30c50:
  uVar1 = uVar6 + 1;
  plVar3 = (long *)(param_1[1] + uVar6 * 0x18);
  param_1[2] = uVar1;
  *plVar3 = param_2;
  plVar3[1] = lVar2;
  plVar3[2] = param_2;
  if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar4,uVar1,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf18);
  }
  return *(undefined1 (*) [16])(param_1[1] + uVar4 * 0x18 + 8);
}


// ===== 00a30cc8  <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::from_parts =====

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
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00afaf30;
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


// ===== 00a30d2c  <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::is_unnamed =====

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
                  (1,uVar1,0x6c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf48);
      }
    }
    else {
      uVar2 = (ulong)*param_1 - 3;
      if (0x6c < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar2,0x6c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf60);
      }
    }
  }
  return uVar1 == 0;
}


// ===== 00a30d98  <std::os::unix::net::addr::std::os::unix::net::addr::SocketAddr>::as_pathname =====

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
                (0,uVar1,0x6c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf60);
    }
    if (0x6c < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (1,uVar1,0x6c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf48);
    }
  }
  return (char *)0x0;
}


// ===== 00a30e04  <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init =====

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
LAB_00a30e88:
    FUN_00a6afc8(&uStack_21,&DAT_003830b3,0x5f);
    FUN_00a1ff48();
                    /* WARNING: Subroutine does not return */
    std::process::abort();
  }
  __key = local_2c;
  if (local_2c == 0) {
    local_28 = 0;
    iVar3 = pthread_key_create(&local_28,(__destr_function *)param_1[1]);
    __key = local_28;
    if (iVar3 != 0) goto LAB_00a30e88;
    pthread_key_delete(0);
    if (__key == 0) {
      FUN_00a6afc8(&uStack_21,&DAT_0038255e,0x9b);
      FUN_00a1ff48();
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


// ===== 00a30ec8  <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::remove_file =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::remove_file */

undefined ** __rustcall
<std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::remove_file
          (int *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int *local_1d0;
  undefined1 auStack_1c8 [384];
  uint local_48 [2];
  char *local_40;
  
  local_1d0 = param_1;
  if (0x17f < param_3) {
    ppuVar3 = (undefined **)FUN_00a24f38(param_2,param_3,&local_1d0,FUN_00a2b404);
    return ppuVar3;
  }
  memcpy(auStack_1c8,param_2,param_3);
  auStack_1c8[param_3] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (local_48,auStack_1c8,param_3 + 1);
  if ((local_48[0] & 1) != 0) {
    return &PTR_DAT_00afab10;
  }
  iVar1 = unlinkat(*param_1,local_40,0);
  if (iVar1 != -1) {
    return (undefined **)0x0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  return (undefined **)((long)iVar1 << 0x20 | 2);
}


// ===== 00a30fe4  <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::open =====

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
    FUN_00a24c60(param_1,param_2,param_3,&local_1d0);
    return;
  }
  memcpy(auStack_1c8,param_2,param_3);
  auStack_1c8[param_3] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (&local_48,auStack_1c8,param_3 + 1);
  if (local_48 == 1) {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00afab10;
    *param_1 = 1;
    return;
  }
  FUN_00a2b490(param_1,&local_1d0,local_40);
  return;
}


// ===== 00a310b0  <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::rename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::rename */

undefined ** __rustcall
<std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::rename
          (int *param_1,int *param_2,ulong param_3,int *param_4,int *param_5,ulong param_6)

{
  int iVar1;
  undefined **ppuVar2;
  int *piVar3;
  int **ppiVar4;
  code *pcVar5;
  int *local_3c0;
  ulong uStack_3b8;
  int *local_3b0;
  int *piStack_3a8;
  undefined1 auStack_3a0 [384];
  uint local_220 [2];
  char *local_218;
  undefined8 uStack_210;
  int *local_208;
  char *pcStack_200;
  undefined8 local_1f8;
  int *piStack_1f0;
  undefined1 auStack_1e8 [384];
  uint local_68 [2];
  char *local_60;
  
  ppiVar4 = &local_3c0;
  local_3c0 = param_5;
  uStack_3b8 = param_6;
  local_3b0 = param_1;
  piStack_3a8 = param_4;
  if (param_3 < 0x180) {
    memcpy(auStack_3a0,param_2,param_3);
    auStack_3a0[param_3] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (local_220,auStack_3a0,param_3 + 1);
    if ((local_220[0] & 1) == 0) {
      pcStack_200 = local_218;
      local_1f8 = uStack_210;
      local_208 = param_1;
      piStack_1f0 = param_4;
      if (0x17f < param_6) {
        pcVar5 = FUN_00a2a7a8;
        ppiVar4 = &local_208;
        param_2 = param_5;
        param_3 = param_6;
        goto LAB_00a31204;
      }
      memcpy(auStack_1e8,param_5,param_6);
      auStack_1e8[param_6] = 0;
      <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                (local_68,auStack_1e8,param_6 + 1);
      if ((local_68[0] & 1) == 0) {
        iVar1 = renameat(*param_1,local_218,*param_4,local_60);
        if (iVar1 != -1) {
          return (undefined **)0x0;
        }
        piVar3 = (int *)__errno();
        iVar1 = *piVar3;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        return (undefined **)((long)iVar1 << 0x20 | 2);
      }
    }
    ppuVar2 = &PTR_DAT_00afab10;
  }
  else {
    pcVar5 = FUN_00a2b6b0;
LAB_00a31204:
    ppuVar2 = (undefined **)FUN_00a24f38(param_2,param_3,ppiVar4,pcVar5);
  }
  return ppuVar2;
}


// ===== 00a3121c  <std::sys::fs::unix::dir::std::sys::fs::unix::dir::Dir>::open_file =====

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
    FUN_00a24ad8(param_1,param_3,param_4,&uStack_1d8,FUN_00a2b7f0);
    return;
  }
  local_1d0 = (undefined1 *)&local_1e0;
  memcpy(auStack_1c8,param_3,param_4);
  auStack_1c8[param_4] = 0;
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
            (&local_48,auStack_1c8,param_4 + 1);
  if (local_48 == 1) {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_00afab10;
    *param_1 = 1;
    return;
  }
  FUN_00a2b7f0(param_1,&uStack_1d8,local_40);
  return;
}


// ===== 00a312f4  FUN_00a312f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a312f4(undefined8 *param_1,ulong *param_2,ulong *param_3)

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
                  (&DAT_00382461,0x19,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afade0);
      }
      lVar17 = lVar17 + 1;
      uVar15 = uVar15 + 0xc4653600;
    }
    *(uint *)(param_1 + 2) = uVar15;
    *param_1 = 0;
    param_1[1] = lVar17;
    return;
  }
  FUN_00a312f4(local_40,param_3,param_2);
  bVar20 = (byte)_DAT_002a02b0;
  uVar16 = (ulong)_DAT_002a02b0 >> 8;
  uVar18 = (ulong)_DAT_002a02b0 >> 0x10;
  uVar19 = (ulong)_DAT_002a02b0 >> 0x18;
  uVar4 = (ulong)_DAT_002a02b0 >> 0x20;
  uVar5 = (ulong)_DAT_002a02b0 >> 0x28;
  uVar6 = (ulong)_DAT_002a02b0 >> 0x30;
  uVar7 = (ulong)_DAT_002a02b0 >> 0x38;
  bVar21 = (byte)_UNK_002a02b8;
  uVar8 = (ulong)_UNK_002a02b8 >> 8;
  uVar9 = (ulong)_UNK_002a02b8 >> 0x10;
  uVar10 = (ulong)_UNK_002a02b8 >> 0x18;
  uVar11 = (ulong)_UNK_002a02b8 >> 0x20;
  uVar12 = (ulong)_UNK_002a02b8 >> 0x28;
  uVar13 = (ulong)_UNK_002a02b8 >> 0x30;
  uVar14 = (ulong)_UNK_002a02b8 >> 0x38;
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


// ===== 00a313e4  FUN_00a313e4 =====

__time_t FUN_00a313e4(clockid_t param_1)

{
  int iVar1;
  int *piVar2;
  timespec local_30;
  undefined **local_8;
  
  iVar1 = clock_gettime(param_1,&local_30);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    local_8 = (undefined **)((long)iVar1 << 0x20 | 2);
                    /* try { // try from 00a31490 to 00a314b3 has its CatchHandler @ 00a314c8 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_00382483,0x2b,&local_8,&PTR_FUN_00afae38,
               &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf90);
  }
  if ((ulong)local_30.tv_nsec < 1000000000) {
    return local_30.tv_sec;
  }
  local_8 = &PTR_DAT_00afaf78;
                    /* try { // try from 00a31438 to 00a3145b has its CatchHandler @ 00a314dc */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_00382483,0x2b,&local_8,&PTR_FUN_00afae38,
             &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afafa8);
}


// ===== 00a314f4  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended =====

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


// ===== 00a3160c  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake */

void __rustcall
<std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(undefined8 param_1)

{
  syscall(0x62,param_1,0x81,1);
  return;
}


// ===== 00a31620  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended =====

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
LAB_00a31680:
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
                  (&DAT_003825bc,0x49,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afafc0);
      }
      uVar8 = uVar6;
      if ((uVar6 >> 0x1e & 1) == 0) {
        uVar8 = uVar6 | 0x40000000;
        do {
          if (*param_1 != uVar6) {
            ClearExclusiveLocal();
            uVar6 = *param_1;
            goto LAB_00a31680;
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


// ===== 00a317c0  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended =====

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
LAB_00a31818:
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
              goto LAB_00a31818;
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


// ===== 00a31938  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers =====

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
    core::panicking::panic(&DAT_003825e0,0x24,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afafd8);
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
LAB_00a31a24:
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
LAB_00a31a54:
    ClearExclusiveLocal();
    return;
  }
  if (param_2 == 0xc0000000) {
    do {
      if (*param_1 != 0xc0000000) goto LAB_00a31a54;
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
    if (lVar4 < 1) goto LAB_00a31a24;
  }
  return;
}


// ===== 00a31a64  <std::sys::sync::condvar::futex::std::sys::sync::condvar::futex::Condvar>::wait_timeout =====

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
    auVar10 = FUN_00a313e4(1);
    lVar6 = auVar10._0_8_ + param_3;
    if (param_3 < 0 == SCARRY8(auVar10._0_8_,param_3)) {
      uVar9 = auVar10._8_4_ + param_4;
      if (999999999 < uVar9) {
        bVar5 = SCARRY8(lVar6,1);
        lVar6 = lVar6 + 1;
        if (bVar5) goto LAB_00a31b24;
        uVar9 = uVar9 + 0xc4653600;
      }
      uStack_48 = (ulong)uVar9;
      bVar5 = true;
      lStack_50 = lVar6;
      goto LAB_00a31b28;
    }
  }
LAB_00a31b24:
  bVar5 = false;
LAB_00a31b28:
  do {
    if (*param_1 != uVar2) goto LAB_00a31b8c;
    plVar1 = &lStack_50;
    if (!bVar5) {
      plVar1 = (long *)0x0;
    }
    lVar6 = syscall(0x62,param_1,0x89,(ulong)uVar2,plVar1,0,0xffffffff);
    if (-1 < lVar6) goto LAB_00a31b8c;
    piVar7 = (int *)__errno();
  } while (*piVar7 == 4);
  if (*piVar7 == 0x6e) {
    uVar8 = 0;
  }
  else {
LAB_00a31b8c:
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


// ===== 00a31a68  FUN_00a31a68 =====

undefined8 FUN_00a31a68(uint *param_1,int *param_2,long param_3,int param_4)

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
    auVar10 = FUN_00a313e4(1);
    lVar6 = auVar10._0_8_ + param_3;
    if (param_3 < 0 == SCARRY8(auVar10._0_8_,param_3)) {
      uVar9 = auVar10._8_4_ + param_4;
      if (999999999 < uVar9) {
        bVar5 = SCARRY8(lVar6,1);
        lVar6 = lVar6 + 1;
        if (bVar5) goto LAB_00a31b24;
        uVar9 = uVar9 + 0xc4653600;
      }
      uStack_48 = (ulong)uVar9;
      bVar5 = true;
      local_50 = lVar6;
      goto LAB_00a31b28;
    }
  }
LAB_00a31b24:
  bVar5 = false;
LAB_00a31b28:
  do {
    if (*param_1 != uVar2) goto LAB_00a31b8c;
    plVar1 = &local_50;
    if (!bVar5) {
      plVar1 = (long *)0x0;
    }
    lVar6 = syscall(0x62,param_1,0x89,(ulong)uVar2,plVar1,0,0xffffffff);
    if (-1 < lVar6) goto LAB_00a31b8c;
    piVar7 = (int *)__errno();
  } while (*piVar7 == 4);
  if (*piVar7 == 0x6e) {
    uVar8 = 0;
  }
  else {
LAB_00a31b8c:
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


// ===== 00a31be8  <std::sys::sync::condvar::futex::std::sys::sync::condvar::futex::Condvar>::wait =====

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


// ===== 00a31cd0  FUN_00a31cd0 =====

/* WARNING: Removing unreachable block (ram,0x00a32230) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00a31cd0(undefined8 *param_1,long param_2,undefined4 param_3)

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
  
  uVar10 = FUN_00a420e4(local_108);
  if ((*(byte *)(param_2 + 0xc0) & 1) != 0) {
    param_1[1] = &PTR_DAT_00afaff0;
    *(undefined4 *)param_1 = 2;
    goto joined_r0x00a31d90;
  }
                    /* try { // try from 00a31d58 to 00a31d6b has its CatchHandler @ 00a323d4 */
  uVar10 = FUN_00a42cb4(&local_c8,param_2,param_3);
  if ((int)local_c8 == 1) {
    param_1[1] = CONCAT44(uStack_bc,_Stack_c0);
    *(undefined4 *)param_1 = 2;
    goto joined_r0x00a31d90;
  }
  local_e0 = local_b8;
  uStack_dc = uStack_b4;
  uVar8 = local_c8._4_4_;
  uStack_d8 = uStack_b0;
  local_d0 = local_a8;
  local_ec = local_c8._4_4_;
  _Stack_e8 = _Stack_c0;
  uStack_e4 = uStack_bc;
                    /* try { // try from 00a31db8 to 00a31dbf has its CatchHandler @ 00a323cc */
  std::sys::pipe::unix::pipe(&local_c8);
  __fd = _Stack_c0;
  if ((int)local_c8 == 1) {
    param_1[1] = CONCAT44(uStack_bc,_Stack_c0);
    *(undefined4 *)param_1 = 2;
    if (local_e0 < 2) {
      if ((uint)uStack_d8 < 2) goto LAB_00a31df4;
LAB_00a31f84:
      close(uStack_d8._4_4_);
      uVar15 = local_d0;
    }
    else {
      close(uStack_dc);
      if (1 < (uint)uStack_d8) goto LAB_00a31f84;
LAB_00a31df4:
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
    if (DAT_00b10878 < 0x3ffffffe) {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
      if (bVar5) {
        cVar3 = ExclusiveMonitorsStatus();
        DAT_00b10878 = DAT_00b10878 + 1;
      }
      if (cVar3 != '\0') goto code_r0x00a32238;
    }
    else {
code_r0x00a32238:
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
                (&DAT_00b10878);
    }
    _Var9 = fork();
    puVar13 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
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
                    /* try { // try from 00a32274 to 00a3227f has its CatchHandler @ 00a323bc */
        local_78 = FUN_00a32438(param_2,&local_e0,plVar1);
        uVar8 = 0x16000000;
        if ((1 < (local_78 & 3)) && ((local_78 & 3) == 2)) {
          uVar8 = (uint)(local_78 >> 0x20);
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
        }
        local_c8 = (ulong *)CONCAT44((int)_s_NOEX_002a1320,uVar8);
                    /* try { // try from 00a322b0 to 00a322c7 has its CatchHandler @ 00a323ac */
        lVar12 = <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::write(&local_a0,&local_c8,8);
        if (lVar12 != 0) {
                    /* try { // try from 00a32320 to 00a32337 has its CatchHandler @ 00a323ac */
          uVar15 = FUN_00a1fefc();
          FUN_00a6aea4(uVar15,&DAT_00382623,0x4e);
          FUN_00a1ff48();
                    /* WARNING: Subroutine does not return */
          std::process::abort();
        }
        FUN_00a1fefc();
        _exit(1);
LAB_00a322d0:
                    /* try { // try from 00a322d0 to 00a32313 has its CatchHandler @ 00a323fc */
        FUN_00a41fd4(&local_c8,&local_9c);
        if ((int)local_c8 == 0) {
          FUN_00a1fdc8(0,CONCAT44(uStack_bc,_Stack_c0));
          ppuVar16 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb050;
          puVar13 = &DAT_00382698;
          uVar15 = 0x3d;
          goto LAB_00a32358;
        }
                    /* try { // try from 00a3233c to 00a3235b has its CatchHandler @ 00a323fc */
        FUN_00a1fdc8(1,CONCAT44(uStack_bc,_Stack_c0));
        ppuVar16 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb038;
      }
      else {
        do {
          uVar8 = DAT_00b10878 - 1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
          if (bVar5) {
            cVar3 = ExclusiveMonitorsStatus();
            DAT_00b10878 = uVar8;
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0xbfffffff) == 0x80000000) {
          <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
          wake_writer_or_readers(&DAT_00b10878);
        }
        close(__fd);
        local_9c = 0;
        local_90 = 0;
        local_94 = _Var9;
        uVar10 = read(iVar6,&local_90,8);
        if (uVar10 == 0xffffffffffffffff) {
          piVar11 = (int *)__errno();
          puVar13 = PTR_PTR_00b01168;
          do {
            iVar2 = *piVar11;
            if (*(undefined ***)puVar13 != &PTR_FUN_00afaaf8) {
                    /* try { // try from 00a3213c to 00a32143 has its CatchHandler @ 00a323a8 */
              core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
            }
            uVar17 = (long)iVar2 << 0x20 | 2;
            local_88 = 1;
            uStack_80 = uVar17;
                    /* try { // try from 00a3210c to 00a3211b has its CatchHandler @ 00a323ec */
            lVar12 = core::io::error::os_functions::get_os_functions();
            uVar10 = (**(code **)(lVar12 + 0x10))(iVar2);
            if ((uVar10 & 1) == 0) {
                    /* try { // try from 00a321c4 to 00a3222b has its CatchHandler @ 00a323dc */
              local_78 = uVar17;
              FUN_00a41fd4(&local_c8,&local_9c);
              if ((int)local_c8 == 0) {
                FUN_00a1fdc8(0,CONCAT44(uStack_bc,_Stack_c0));
                local_c8 = &local_78;
                ppuVar16 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb080;
                puVar14 = &local_c8;
                puVar13 = &DAT_002b04d1;
                _Stack_c0 = (__pid_t)PTR_fmt_00b00ca8;
                uStack_bc = (uint)((ulong)PTR_fmt_00b00ca8 >> 0x20);
              }
              else {
                FUN_00a1fdc8(1,CONCAT44(uStack_bc,_Stack_c0));
                ppuVar16 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb068;
                puVar13 = &DAT_00382671;
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
          goto joined_r0x00a320c8;
        }
        if (uVar10 != 8) goto LAB_00a322d0;
        local_78 = (ulong)&local_90 | 4;
        uStack_70 = 4;
        if (local_90._4_4_ != 0x58454f4e) {
          _Stack_c0 = 0xa64c24;
          uStack_bc = 0;
                    /* try { // try from 00a32184 to 00a321bb has its CatchHandler @ 00a323fc */
          local_c8 = &local_90;
          core::panicking::assert_failed<[u8_4usize],&[u8]>
                    (0,&DAT_002bd1fc,&local_78,&DAT_002b2abc,&local_c8,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb020);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0xa32360);
          (*pcVar7)();
        }
        uVar8 = (uint)local_90;
                    /* try { // try from 00a31f10 to 00a31f1b has its CatchHandler @ 00a323fc */
        FUN_00a41fd4(&local_c8,&local_9c);
        if ((int)local_c8 == 0) {
          if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
          }
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          bVar5 = true;
          *(undefined4 *)param_1 = 2;
          param_1[1] = (ulong)(uVar8 >> 0x10 | uVar8 << 0x10) << 0x20 | 2;
          uVar8 = close(iVar6);
          goto joined_r0x00a320c8;
        }
        FUN_00a1fdc8(1,CONCAT44(uStack_bc,_Stack_c0));
        ppuVar16 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb008;
      }
      puVar13 = &DAT_00382671;
      uVar15 = 0x4f;
LAB_00a32358:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(puVar13,uVar15,ppuVar16);
    }
    piVar11 = (int *)__errno();
    iVar2 = *piVar11;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    *(undefined4 *)param_1 = 2;
    param_1[1] = (long)iVar2 << 0x20 | 2;
    do {
      uVar8 = DAT_00b10878 - 1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0xb10878,0x10);
      if (bVar5) {
        cVar3 = ExclusiveMonitorsStatus();
        DAT_00b10878 = uVar8;
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0xbfffffff) == 0x80000000) {
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
                (&DAT_00b10878);
    }
    close(__fd);
    bVar5 = true;
    uVar8 = close(iVar6);
joined_r0x00a320c8:
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
    if (!bVar5) goto joined_r0x00a31d90;
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
joined_r0x00a31d90:
  if (local_108[0] != -1) {
    uVar10 = FUN_00a21f7c(local_108);
  }
  return uVar10;
}


// ===== 00a32438  FUN_00a32438 =====

_union_1457 FUN_00a32438(long param_1,uint *param_2,long param_3)

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
  
  puVar3 = PTR_PTR_00b01168;
  uVar1 = *param_2;
  uVar13 = (ulong)uVar1;
  if (uVar1 == 0) {
LAB_00a324cc:
    if (param_2[2] == 0) {
LAB_00a32524:
      if (param_2[4] == 0) {
LAB_00a32588:
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
                if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                  core::io::error::os_functions::set_functions::set_functions_inner
                            (&PTR_FUN_00afaaf8);
                }
                local_90.sa_handler = (__sighandler_t)((long)iVar5 << 0x20 | 2);
                _Var10.sa_handler = local_90.sa_handler;
                if (iVar5 != 1) goto LAB_00a327fc;
                    /* try { // try from 00a32608 to 00a326e3 has its CatchHandler @ 00a32938 */
                FUN_00a2175c(&local_90);
              }
              iVar5 = setuid(__uid);
              if (iVar5 == -1) {
                piVar7 = (int *)__errno();
                lVar11 = (long)*piVar7;
                if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                  core::io::error::os_functions::set_functions::set_functions_inner
                            (&PTR_FUN_00afaaf8);
                }
                goto LAB_00a327f4;
              }
            }
            if ((*(char **)(param_1 + 0xa0) == (char *)0x0) ||
               (iVar5 = chroot(*(char **)(param_1 + 0xa0)), iVar5 != -1)) {
              if ((*(char **)(param_1 + 0x90) == (char *)0x0) ||
                 (iVar5 = chdir(*(char **)(param_1 + 0x90)), iVar5 != -1)) {
                if (((*(uint *)(param_1 + 0x40) & 1) == 0) ||
                   (iVar5 = setpgid(0,*(__pid_t *)(param_1 + 0x44)), iVar5 != -1)) {
                  if ((*(char *)(param_1 + 0xc1) != '\x01') || (_Var6 = setsid(), _Var6 != -1)) {
                    if (DAT_00b108b0 == '\0') {
                      local_90.sa_handler = (__sighandler_t)0x0;
                      uStack_78 = 0;
                      uStack_80 = 0;
                      uStack_88 = 0;
                      iVar5 = sigaction(0xd,(sigaction *)&local_90,(sigaction *)0x0);
                      FUN_00a248f0(local_70,iVar5);
                      _Var10 = local_68;
                      if (local_70[0] == 1) goto LAB_00a327fc;
                    }
                    lVar11 = *(long *)(param_1 + 0x28) << 4;
                    puVar12 = *(undefined8 **)(param_1 + 0x20);
                    do {
                      puVar4 = PTR_environ_00b01358;
                      if (lVar11 == 0) {
                        if (param_3 != 0) {
                          uVar13 = *(ulong *)PTR_environ_00b01358;
                          *(undefined8 *)PTR_environ_00b01358 = *(undefined8 *)(param_3 + 8);
                        }
                        iVar5 = execvp(*(char **)(param_1 + 0x80),*(char ***)(param_1 + 8));
                        piVar7 = (int *)__errno(iVar5);
                        iVar5 = *piVar7;
                        if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                          core::io::error::os_functions::set_functions::set_functions_inner
                                    (&PTR_FUN_00afaaf8);
                        }
                        if (param_3 != 0) {
                          *(ulong *)puVar4 = uVar13;
                        }
                        FUN_00a21f04(param_2);
                        return (_union_1457)((long)iVar5 << 0x20 | 2);
                      }
                    /* try { // try from 00a326fc to 00a326ff has its CatchHandler @ 00a3294c */
                      _Var10.sa_handler = (__sighandler_t)(**(code **)(puVar12[1] + 0x20))(*puVar12)
                      ;
                      lVar11 = lVar11 + -0x10;
                      puVar12 = puVar12 + 2;
                    } while (_Var10.sa_handler == (__sighandler_t)0x0);
                    goto LAB_00a327fc;
                  }
                  piVar7 = (int *)__errno();
                  lVar11 = (long)*piVar7;
                  if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                    core::io::error::os_functions::set_functions::set_functions_inner
                              (&PTR_FUN_00afaaf8);
                  }
                }
                else {
                  piVar7 = (int *)__errno();
                  lVar11 = (long)*piVar7;
                  if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                    core::io::error::os_functions::set_functions::set_functions_inner
                              (&PTR_FUN_00afaaf8);
                  }
                }
              }
              else {
                piVar7 = (int *)__errno();
                lVar11 = (long)*piVar7;
                if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                  core::io::error::os_functions::set_functions::set_functions_inner
                            (&PTR_FUN_00afaaf8);
                }
              }
            }
            else {
              piVar7 = (int *)__errno();
              lVar11 = (long)*piVar7;
              if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8)
                ;
              }
            }
          }
          else {
            piVar7 = (int *)__errno();
            lVar11 = (long)*piVar7;
            if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
              core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
            }
          }
        }
        else {
          piVar7 = (int *)__errno();
          lVar11 = (long)*piVar7;
          if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
          }
        }
LAB_00a327f4:
        _Var10.sa_handler = (__sighandler_t)(lVar11 << 0x20 | 2);
        goto LAB_00a327fc;
      }
      uVar2 = param_2[5];
      do {
        iVar5 = dup2(uVar2,2);
        if (iVar5 != -1) goto LAB_00a32588;
        piVar7 = (int *)__errno();
        iVar5 = *piVar7;
        lVar11 = (long)iVar5;
        if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                    /* try { // try from 00a32570 to 00a32577 has its CatchHandler @ 00a328fc */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
                    /* try { // try from 00a32558 to 00a32567 has its CatchHandler @ 00a32960 */
        lVar8 = core::io::error::os_functions::get_os_functions();
        uVar9 = (**(code **)(lVar8 + 0x10))(iVar5);
      } while ((uVar9 & 1) != 0);
    }
    else {
      uVar2 = param_2[3];
      do {
        iVar5 = dup2(uVar2,1);
        if (iVar5 != -1) goto LAB_00a32524;
        piVar7 = (int *)__errno();
        iVar5 = *piVar7;
        lVar11 = (long)iVar5;
        if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                    /* try { // try from 00a32518 to 00a3251f has its CatchHandler @ 00a32910 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
                    /* try { // try from 00a32500 to 00a3250f has its CatchHandler @ 00a3297c */
        lVar8 = core::io::error::os_functions::get_os_functions();
        uVar9 = (**(code **)(lVar8 + 0x10))(iVar5);
      } while ((uVar9 & 1) != 0);
    }
  }
  else {
    uVar2 = param_2[1];
    do {
      iVar5 = dup2(uVar2,0);
      if (iVar5 != -1) goto LAB_00a324cc;
      piVar7 = (int *)__errno();
      iVar5 = *piVar7;
      lVar11 = (long)iVar5;
      if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
                    /* try { // try from 00a324c0 to 00a324c7 has its CatchHandler @ 00a32924 */
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
                    /* try { // try from 00a324a8 to 00a324b7 has its CatchHandler @ 00a32998 */
      lVar8 = core::io::error::os_functions::get_os_functions();
      uVar9 = (**(code **)(lVar8 + 0x10))(iVar5);
    } while ((uVar9 & 1) != 0);
  }
  _Var10.sa_handler = (__sighandler_t)(lVar11 << 0x20 | 2);
LAB_00a327fc:
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


// ===== 00a329c0  FUN_00a329c0 =====

undefined1  [16] FUN_00a329c0(int param_1)

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
    if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
      auVar5._8_8_ = (long)iVar2 << 0x20 | 2;
      auVar5._0_8_ = 1;
      return auVar5;
    }
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    auVar6._8_8_ = (long)iVar2 << 0x20 | 2;
    auVar6._0_8_ = 1;
    return auVar6;
  }
  lVar4 = (long)local_8[0];
  if (local_8[0] != 0) {
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = lVar4 << 0x20 | 2;
    return auVar1 << 0x40;
  }
  return ZEXT816(0);
}


// ===== 00a32ab0  FUN_00a32ab0 =====

void FUN_00a32ab0(ulong *param_1,int param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined4 extraout_w11;
  undefined2 uVar6;
  ushort extraout_w13;
  ushort uVar7;
  ulong extraout_x14;
  undefined4 extraout_w15;
  undefined1 local_a8 [20];
  undefined4 local_94;
  undefined4 uStack_90;
  socklen_t local_24;
  
  local_24 = 0x80;
  uVar2 = recvfrom(param_2,param_3,param_4,param_5,(sockaddr *)local_a8,&local_24);
  if (uVar2 == 0xffffffffffffffff) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    ppuVar4 = (undefined **)((long)iVar1 << 0x20 | 2);
LAB_00a32bbc:
    *param_1 = (ulong)ppuVar4;
    *(undefined2 *)(param_1 + 1) = 2;
    return;
  }
  if (local_a8._0_2_ == 10) {
    if (local_24 < 0x1c) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00383128,0x35,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbb28);
    }
    uVar5 = (uint)(ushort)local_a8._8_2_ << 0x10;
    uVar7 = (ushort)local_a8._2_2_ >> 8 | (ushort)(((ushort)local_a8._2_2_ & 0xff00ff) << 8);
    uVar6 = 1;
  }
  else {
    if (local_a8._0_2_ != 2) {
      ppuVar4 = &PTR_s_invalid_argument_00afbb40;
      goto LAB_00a32bbc;
    }
    if (local_24 < 0x10) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_003830f4,0x34,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbb10);
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
  *param_1 = uVar2;
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


// ===== 00a32c18  <std::sys::net::connection::socket::unix::std::sys::net::connection::socket::unix::Socket>::new =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a32ca0  FUN_00a32ca0 =====

void FUN_00a32ca0(undefined4 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  puVar3 = PTR_PTR_00b01168;
  uVar1 = *param_2;
  do {
    lVar4 = syscall(0xf2,(ulong)uVar1,param_3,param_4,0x80000);
    if ((int)lVar4 != -1) {
      uVar7 = 0;
      param_1[1] = (int)lVar4;
      goto LAB_00a32d4c;
    }
    piVar5 = (int *)__errno();
    iVar2 = *piVar5;
    if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
                    /* try { // try from 00a32d0c to 00a32d1b has its CatchHandler @ 00a32d68 */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar6 = (**(code **)(lVar4 + 0x10))(iVar2);
  } while ((uVar6 & 1) != 0);
  *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
  uVar7 = 1;
LAB_00a32d4c:
  *param_1 = uVar7;
  return;
}


// ===== 00a32d88  FUN_00a32d88 =====

void FUN_00a32d88(ulong *param_1,int param_2,int param_3)

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
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
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
                  (&DAT_00382461,0x19,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afade0);
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


// ===== 00a32ea8  FUN_00a32ea8 =====

void FUN_00a32ea8(undefined4 *param_1,uint param_2)

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
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
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
                    /* try { // try from 00a32f7c to 00a32f93 has its CatchHandler @ 00a32f98 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_002a1150,8,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc050);
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_002a1150,8,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc050);
}


// ===== 00a32fac  FUN_00a32fac =====

void FUN_00a32fac(undefined8 *param_1,long param_2,ulong param_3,char param_4)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_4 == '\0') {
    uVar6 = *(ulong *)(param_2 + 0x20);
    if (uVar6 == 0) goto LAB_00a33090;
    lVar4 = *(long *)(param_2 + 0x18);
    if (uVar6 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      do {
        lVar2 = (uVar6 >> 1) + lVar5;
        if (*(ulong *)(lVar4 + lVar2 * 0x250 + 0x1f0) <= param_3) {
          lVar5 = lVar2;
        }
        uVar6 = uVar6 - (uVar6 >> 1);
      } while (1 < uVar6);
    }
    uVar6 = *(ulong *)(lVar4 + lVar5 * 0x250 + 0x1f0);
    if (uVar6 == param_3) goto LAB_00a33090;
    if (uVar6 < param_3) {
      lVar5 = lVar5 + 1;
    }
    if (lVar5 == 0) goto LAB_00a33090;
    lVar4 = lVar4 + lVar5 * 0x250;
    lVar5 = lVar4 + -0x250;
    cVar3 = *(char *)(lVar4 + -0xac);
  }
  else {
    if ((param_4 != '\x01') || (uVar6 = *(ulong *)(param_2 + 0x30), uVar6 == 0)) goto LAB_00a33090;
    lVar4 = *(long *)(param_2 + 0x28);
    if (uVar6 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      do {
        lVar2 = (uVar6 >> 1) + lVar5;
        if (*(ulong *)(lVar4 + lVar2 * 0x1f0 + 0x1e0) <= param_3) {
          lVar5 = lVar2;
        }
        uVar6 = uVar6 - (uVar6 >> 1);
      } while (1 < uVar6);
    }
    uVar6 = *(ulong *)(lVar4 + lVar5 * 0x1f0 + 0x1e0);
    if (uVar6 == param_3) goto LAB_00a33090;
    if (uVar6 < param_3) {
      lVar5 = lVar5 + 1;
    }
    if (lVar5 == 0) goto LAB_00a33090;
    lVar4 = lVar4 + lVar5 * 0x1f0;
    lVar5 = lVar4 + -0x1f0;
    cVar3 = *(char *)(lVar4 + -0x4c);
  }
  if ((cVar3 == '\t') &&
     (uVar6 = param_3 - *(ulong *)(lVar5 + 0x198), *(ulong *)(lVar5 + 0x198) <= param_3)) {
    lVar4 = 0xc;
    if (*(char *)(lVar5 + 0x1a1) != '\b') {
      lVar4 = 4;
    }
    uVar1 = (*(long *)(lVar5 + 0x188) - *(ulong *)(lVar5 + 0x180)) + lVar4;
    if (uVar1 <= uVar6 && uVar6 - uVar1 < *(ulong *)(lVar5 + 0x180)) {
      param_1[1] = lVar5;
      param_1[2] = uVar6;
      *param_1 = 0;
      return;
    }
  }
LAB_00a33090:
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 1) = 0x34;
  *param_1 = 1;
  return;
}


// ===== 00a33124  <std::sync::barrier::[0]::std::sync::barrier::Barrier>::wait =====

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
      if (uVar8 < uVar7) goto LAB_00a33220;
      goto LAB_00a33170;
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
LAB_00a33220:
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
          if (lVar9 != *(long *)(param_1 + 4)) goto LAB_00a331a0;
          goto LAB_00a33220;
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
LAB_00a33170:
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
LAB_00a331a0:
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


// ===== 00a332d8  FUN_00a332d8 =====

void FUN_00a332d8(undefined8 *param_1,long param_2,byte param_3,ulong param_4,long *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  
  lVar4 = *param_5;
  if (lVar4 < 0x1e) {
    if (lVar4 == 0x1b) {
      lVar4 = *(long *)(param_2 + 0x90);
      uVar5 = *(ulong *)(param_2 + 0x98);
      uVar7 = param_5[1];
      if ((uVar7 <= uVar5) && (lVar4 = lVar4 + uVar7, uVar5 != uVar7)) {
        lVar8 = 0;
        do {
          if (*(char *)(lVar4 + lVar8) == '\0') goto LAB_00a3343c;
          lVar8 = lVar8 + 1;
        } while (uVar5 - uVar7 != lVar8);
      }
    }
    else {
      if ((lVar4 != 0x1c) || (lVar8 = *(long *)(param_2 + 0x100), lVar8 == 0)) goto LAB_00a33358;
      lVar4 = *(long *)(lVar8 + 0xa0);
      uVar5 = *(ulong *)(lVar8 + 0xa8);
      uVar7 = param_5[1];
      if ((uVar7 <= uVar5) && (lVar4 = lVar4 + uVar7, uVar5 != uVar7)) {
        lVar8 = 0;
        do {
          if (*(char *)(lVar4 + lVar8) == '\0') goto LAB_00a3343c;
          lVar8 = lVar8 + 1;
        } while (uVar5 - uVar7 != lVar8);
      }
    }
LAB_00a33424:
    *(undefined1 *)(param_1 + 1) = 0x11;
    param_1[2] = lVar4;
    *param_1 = 1;
    return;
  }
  if (lVar4 != 0x1e) {
    if (lVar4 != 0x1f) {
      if (lVar4 == 0x20) {
        lVar4 = param_5[2];
        param_1[1] = param_5[1];
        param_1[2] = lVar4;
        *param_1 = 0;
        return;
      }
LAB_00a33358:
      *(undefined1 *)(param_1 + 1) = 0x42;
      *param_1 = 1;
      return;
    }
    lVar4 = *(long *)(param_2 + 0x50);
    uVar5 = *(ulong *)(param_2 + 0x58);
    uVar7 = param_5[1];
    if ((uVar7 <= uVar5) && (lVar4 = lVar4 + uVar7, uVar5 != uVar7)) {
      lVar8 = 0;
      do {
        if (*(char *)(lVar4 + lVar8) == '\0') {
LAB_00a3343c:
          param_1[1] = lVar4;
          param_1[2] = lVar8;
          *param_1 = 0;
          return;
        }
        lVar8 = lVar8 + 1;
      } while (uVar5 - uVar7 != lVar8);
    }
    goto LAB_00a33424;
  }
  puVar6 = *(uint **)(param_2 + 0xa0);
  uVar5 = *(ulong *)(param_2 + 0xa8) - param_4;
  if (param_4 <= *(ulong *)(param_2 + 0xa8)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_5[1];
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT71(0,param_3);
    if (SUB168(auVar1 * auVar2,8) != 0) {
      uVar3 = 0x32;
      goto LAB_00a333a0;
    }
    uVar7 = param_5[1] * CONCAT71(0,param_3);
    puVar6 = (uint *)((long)puVar6 + param_4);
    if (uVar7 <= uVar5) {
      uVar5 = uVar5 - uVar7;
      puVar6 = (uint *)((long)puVar6 + uVar7);
      if (param_3 == 8) {
        if (7 < uVar5) {
          uVar5 = ((ulong)*puVar6 << 8 | (ulong)(uint3)puVar6[1] << 0x28) >> 8 |
                  (ulong)*(byte *)((long)puVar6 + 7) << 0x38;
LAB_00a33494:
          lVar4 = *(long *)(param_2 + 0x90);
          uVar7 = *(ulong *)(param_2 + 0x98);
          if (uVar7 < uVar5) {
            *(undefined1 *)(param_1 + 1) = 0x11;
            param_1[2] = lVar4;
            *param_1 = 1;
            return;
          }
          lVar4 = lVar4 + uVar5;
          if (uVar7 != uVar5) {
            lVar8 = 0;
            do {
              if (*(char *)(lVar4 + lVar8) == '\0') {
                param_1[1] = lVar4;
                param_1[2] = lVar8;
                *param_1 = 0;
                return;
              }
              lVar8 = lVar8 + 1;
            } while (uVar7 - uVar5 != lVar8);
          }
          *(undefined1 *)(param_1 + 1) = 0x11;
          param_1[2] = lVar4;
          *param_1 = 1;
          return;
        }
      }
      else if (3 < uVar5) {
        uVar5 = (ulong)*puVar6;
        goto LAB_00a33494;
      }
    }
  }
  uVar3 = 0x11;
LAB_00a333a0:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((long)param_1 + 0xf) = 0;
  *(undefined2 *)((long)param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 9) = 0;
  param_1[2] = puVar6;
  *param_1 = 1;
  return;
}


// ===== 00a33504  <std::os::fd::owned::[0]::std::os::fd::owned::BorrowedFd>::try_clone_to_owned =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  *param_1 = 1;
  return;
}


// ===== 00a33590  <std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::new =====

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
                    /* try { // try from 00a336ec to 00a3370b has its CatchHandler @ 00a33784 */
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<i32,i32>
              (0,&local_18,"",0,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb1a0);
  }
  if (param_1 < 0x4001) {
    param_1 = 0x4000;
  }
  local_18._0_4_ = pthread_attr_setstacksize(&pStack_68,param_1);
  if ((int)local_18 != 0) {
    if ((int)local_18 != 0x16) {
                    /* try { // try from 00a33714 to 00a33733 has its CatchHandler @ 00a33770 */
                    /* WARNING: Subroutine does not return */
      core::panicking::assert_failed<i32,i32>
                (0,&local_18,&DAT_002bcf98,0,param_5,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb188);
    }
    lVar3 = sysconf(0x27);
    iVar1 = pthread_attr_setstacksize(&pStack_68,(param_1 + lVar3) - 1 & -lVar3);
    if (iVar1 != 0) {
      iVar1 = pthread_attr_destroy(&pStack_68);
      local_18 = (undefined *)CONCAT44(local_18._4_4_,iVar1);
      if (iVar1 != 0) {
                    /* try { // try from 00a33738 to 00a33757 has its CatchHandler @ 00a33784 */
                    /* WARNING: Subroutine does not return */
        core::panicking::assert_failed<i32,i32>
                  (0,&local_18,"",0,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afac50);
      }
      FUN_00a206b4(param_2);
      puVar4 = &UNK_00afb170;
      uVar5 = 1;
      goto LAB_00a33698;
    }
  }
  local_18 = (undefined *)0x0;
  uVar2 = pthread_create((pthread_t *)&local_18,&pStack_68,FUN_00a5503c,param_2);
  puVar4 = local_18;
  if (uVar2 == 0) {
    uVar5 = 0;
    iVar1 = pthread_attr_destroy(&pStack_68);
    local_18 = (undefined *)CONCAT44(local_18._4_4_,iVar1);
  }
  else {
                    /* try { // try from 00a33650 to 00a3365f has its CatchHandler @ 00a33770 */
    FUN_00a206b4(param_2);
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    puVar4 = (undefined *)((ulong)uVar2 << 0x20 | 2);
    uVar5 = 1;
    iVar1 = pthread_attr_destroy(&pStack_68);
    local_18 = (undefined *)CONCAT44(local_18._4_4_,iVar1);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<i32,i32>
              (0,&local_18,"",0,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afac50);
  }
LAB_00a33698:
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


// ===== 00a3379c  <std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::join =====

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
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  local_30 = &local_8;
  local_8 = (ulong)uVar1 << 0x20 | 2;
  puStack_28 = PTR_fmt_00b00cb0;
                    /* try { // try from 00a33800 to 00a33817 has its CatchHandler @ 00a33838 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002aceee,&local_30,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb1b8);
}


// ===== 00a33850  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call =====

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
      if (!bVar4 && (uVar10 & 3) != 0) goto LAB_00a33a24;
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
LAB_00a33a24:
          if (uVar7 != 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt(&DAT_00382739,0x55,param_5);
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
              goto LAB_00a33968;
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
        if (!bVar4) goto LAB_00a33944;
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
LAB_00a33968:
        local_58 = (ulong)CONCAT31(local_58._5_3_,bVar4) << 0x20;
                    /* try { // try from 00a33974 to 00a3397f has its CatchHandler @ 00a33afc */
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
LAB_00a33944:
    uVar10 = (ulong)uVar9;
  } while( true );
}


// ===== 00a33b30  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::wait */

void __rustcall
<std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::wait
          (ulong *param_1,ulong param_2,undefined8 param_3)

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
LAB_00a33c1c:
    uVar7 = (uint)uVar8;
    uVar5 = uVar7 & 3;
    if ((uVar8 & 3) == 0) {
      return;
    }
    if (uVar5 == 2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&DAT_00382739,0x55,param_3);
    }
    if ((uVar7 >> 2 & 1) == 0) goto code_r0x00a33c30;
    goto LAB_00a33c60;
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
      if (bVar2) goto LAB_00a33bb4;
    }
    else {
LAB_00a33bb4:
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
code_r0x00a33c30:
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
LAB_00a33c60:
    do {
      if (((uint)*param_1 != uVar7) ||
         (lVar3 = syscall(0x62,param_1,0x89,(ulong)uVar7,0,0,0xffffffff), -1 < lVar3)) break;
      piVar4 = (int *)__errno();
    } while (*piVar4 == 4);
    uVar8 = *param_1;
  }
  goto LAB_00a33c1c;
}


// ===== 00a33cd0  FUN_00a33cd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a33cd0(undefined8 *param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 local_40;
  ulong local_38;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar2 = DAT_002a1710;
  if (param_2 < 2) {
    if (param_2 == 0) {
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
      return;
    }
    local_40 = 0x1b600000000;
    local_38 = (ulong)CONCAT11((char)param_4,(char)param_4) ^ 0x100;
    FUN_00a4725c(&local_30,"/dev/null",&local_40);
    uVar2 = _s__002a1688;
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
      uVar2 = _s__002a1688;
      if (iVar3 != -1) {
        *(int *)(param_1 + 1) = iVar3;
        *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
        *param_1 = uVar2;
        return;
      }
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      uVar5 = (long)iVar3 << 0x20 | 2;
      goto LAB_00a33e08;
    }
    std::sys::pipe::unix::pipe(&local_30);
    uVar2 = _s__002a1688;
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
LAB_00a33e08:
  param_1[1] = uVar5;
  *(undefined4 *)param_1 = 1;
  return;
}


// ===== 00a33e88  FUN_00a33e88 =====

void FUN_00a33e88(long *param_1,ulong param_2)

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
    core::panicking::panic(&DAT_00382763,0x33,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb1d0);
  }
  lVar13 = param_1[3];
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x21a);
  lVar5 = uVar14 - param_2;
  if (uVar14 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00382796,0x27,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb1e8);
  }
  *(short *)(lVar13 + 0x21a) = (short)lVar5;
  *(short *)(lVar11 + 0x21a) = (short)(param_2 + uVar12);
  memmove((void *)(lVar11 + 8 + param_2 * 0x18),(void *)(lVar11 + 8),uVar12 * 0x18);
  memmove((void *)(lVar11 + 0x110 + param_2 * 0x18),(void *)(lVar11 + 0x110),uVar12 * 0x18);
  lVar1 = lVar5 + 1;
  if (uVar14 - lVar1 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_003821d2,0x28,&DAT_00afab28);
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
    if (lVar5 != 0) goto LAB_00a340f4;
  }
  else {
    if (lVar5 == 0) {
LAB_00a340f4:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_003821fa,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb200);
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


// ===== 00a3410c  FUN_00a3410c =====

void FUN_00a3410c(long *param_1,ulong param_2)

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
    core::panicking::panic(&DAT_003827bd,0x32,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb218);
  }
  lVar11 = param_1[5];
  lVar3 = *(ushort *)(lVar11 + 0x21a) - param_2;
  if (*(ushort *)(lVar11 + 0x21a) < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_003827ef,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb230);
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
    if (param_1[6] != 0) goto LAB_00a343a4;
  }
  else {
    if (param_1[6] == 0) {
LAB_00a343a4:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_003821fa,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb248);
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


// ===== 00a343bc  <std::path::[16]::std::path::Path>::_ends_with =====

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
LAB_00a34530:
      return cVar1 != '\x02';
    }
    if (local_78[0] == -1) goto LAB_00a34530;
    iVar2 = FUN_00a5a3a0(&local_120,local_e8);
    if (iVar2 == 0) {
      cVar1 = '\x02';
      goto LAB_00a34530;
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


// ===== 00a34554  <std::path::[16]::std::path::Path>::components =====

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


// ===== 00a34588  <std::path::[16]::std::path::Path>::is_symlink =====

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


// ===== 00a34604  <std::path::[16]::std::path::Path>::file_prefix =====

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
      goto LAB_00a34680;
    }
    psVar4 = local_80 + 1;
  }
  else {
    if (uStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail(1,0,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb5b8);
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
              (0,lVar3,uStack_78,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb5a0);
  }
  if (uStack_78 < lVar3 + 1U) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (lVar3 + 1U,uStack_78,uStack_78,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb588);
  }
LAB_00a34680:
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = local_80;
  return auVar5;
}


// ===== 00a34744  <std::path::[16]::std::path::Path>::is_absolute =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::[16]::std::path::Path>::is_absolute */

bool __rustcall <std::path::[16]::std::path::Path>::is_absolute(char *param_1,long param_2)

{
  if (param_2 != 0) {
    return *param_1 == '/';
  }
  return false;
}


// ===== 00a34760  <std::path::[16]::std::path::Path>::to_path_buf =====

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
  __dest = (void *)FUN_004b25a4(param_3,1);
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


// ===== 00a347e4  <std::path::[16]::std::path::Path>::_starts_with =====

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
LAB_00a34958:
      return cVar1 != '\x02';
    }
    if (local_78[0] == -1) goto LAB_00a34958;
    iVar2 = FUN_00a5a3a0(&local_120,local_e8);
    if (iVar2 == 0) {
      cVar1 = '\x02';
      goto LAB_00a34958;
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


// ===== 00a3497c  <std::path::[16]::std::path::Path>::_strip_prefix =====

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
    if (local_98[0] == -1) goto LAB_00a34b04;
    iVar2 = FUN_00a5a3a0(&local_140,&local_108);
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
LAB_00a34b04:
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


// ===== 00a34b98  <std::path::[16]::std::path::Path>::into_path_buf =====

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


