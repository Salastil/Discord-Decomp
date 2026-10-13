// ===== 00a00b88  FUN_00a00b88 =====

long FUN_00a00b88(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012a8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00ba4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00ba8  std::__ndk1::__shared_ptr_pointer<short*,std::__ndk1::shared_ptr<short>::__shared_ptr_default_delete<short,short>,std::__ndk1::allocator<short>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<short*,
   std::__ndk1::shared_ptr<short>::__shared_ptr_default_delete<short, short>,
   std::__ndk1::allocator<short> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<short*,std::__ndk1::shared_ptr<short>::__shared_ptr_default_delete<short,short>,std::__ndk1::allocator<short>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<short*,std::__ndk1::shared_ptr<short>::__shared_ptr_default_delete<short,short>,std::__ndk1::allocator<short>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00bcc  FUN_00a00bcc =====

void FUN_00a00bcc(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00bdc  FUN_00a00bdc =====

long FUN_00a00bdc(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012b0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00bf8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00bfc  std::__ndk1::__shared_ptr_pointer<int*,std::__ndk1::shared_ptr<int>::__shared_ptr_default_delete<int,int>,std::__ndk1::allocator<int>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<int*,
   std::__ndk1::shared_ptr<int>::__shared_ptr_default_delete<int, int>, std::__ndk1::allocator<int>
   >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<int*,std::__ndk1::shared_ptr<int>::__shared_ptr_default_delete<int,int>,std::__ndk1::allocator<int>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<int*,std::__ndk1::shared_ptr<int>::__shared_ptr_default_delete<int,int>,std::__ndk1::allocator<int>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00c20  FUN_00a00c20 =====

void FUN_00a00c20(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00c30  FUN_00a00c30 =====

long FUN_00a00c30(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012b8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00c4c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00c50  std::__ndk1::__shared_ptr_pointer<long*,std::__ndk1::shared_ptr<long>::__shared_ptr_default_delete<long,long>,std::__ndk1::allocator<long>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<long*,
   std::__ndk1::shared_ptr<long>::__shared_ptr_default_delete<long, long>,
   std::__ndk1::allocator<long> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<long*,std::__ndk1::shared_ptr<long>::__shared_ptr_default_delete<long,long>,std::__ndk1::allocator<long>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<long*,std::__ndk1::shared_ptr<long>::__shared_ptr_default_delete<long,long>,std::__ndk1::allocator<long>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00c74  FUN_00a00c74 =====

void FUN_00a00c74(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00c84  FUN_00a00c84 =====

long FUN_00a00c84(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012c0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00ca0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00ca4  std::__ndk1::__shared_ptr_pointer<float*,std::__ndk1::shared_ptr<float>::__shared_ptr_default_delete<float,float>,std::__ndk1::allocator<float>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<float*,
   std::__ndk1::shared_ptr<float>::__shared_ptr_default_delete<float, float>,
   std::__ndk1::allocator<float> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<float*,std::__ndk1::shared_ptr<float>::__shared_ptr_default_delete<float,float>,std::__ndk1::allocator<float>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<float*,std::__ndk1::shared_ptr<float>::__shared_ptr_default_delete<float,float>,std::__ndk1::allocator<float>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00cc8  FUN_00a00cc8 =====

void FUN_00a00cc8(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00cd8  FUN_00a00cd8 =====

long FUN_00a00cd8(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012c8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00cf4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00cf8  std::__ndk1::__shared_ptr_pointer<double*,std::__ndk1::shared_ptr<double>::__shared_ptr_default_delete<double,double>,std::__ndk1::allocator<double>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<double*,
   std::__ndk1::shared_ptr<double>::__shared_ptr_default_delete<double, double>,
   std::__ndk1::allocator<double> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<double*,std::__ndk1::shared_ptr<double>::__shared_ptr_default_delete<double,double>,std::__ndk1::allocator<double>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<double*,std::__ndk1::shared_ptr<double>::__shared_ptr_default_delete<double,double>,std::__ndk1::allocator<double>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00d1c  FUN_00a00d1c =====

void FUN_00a00d1c(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00d2c  FUN_00a00d2c =====

long FUN_00a00d2c(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012d0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00d48  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00d4c  std::__ndk1::__shared_ptr_pointer<bool*,std::__ndk1::shared_ptr<bool>::__shared_ptr_default_delete<bool,bool>,std::__ndk1::allocator<bool>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<bool*,
   std::__ndk1::shared_ptr<bool>::__shared_ptr_default_delete<bool, bool>,
   std::__ndk1::allocator<bool> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<bool*,std::__ndk1::shared_ptr<bool>::__shared_ptr_default_delete<bool,bool>,std::__ndk1::allocator<bool>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<bool*,std::__ndk1::shared_ptr<bool>::__shared_ptr_default_delete<bool,bool>,std::__ndk1::allocator<bool>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00d70  FUN_00a00d70 =====

void FUN_00a00d70(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00d80  FUN_00a00d80 =====

long FUN_00a00d80(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012d8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00d9c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00da0  std::__ndk1::__shared_ptr_pointer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::shared_ptr<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>::__shared_ptr_default_delete<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*, std::__ndk1::shared_ptr<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >::__shared_ptr_default_delete<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::shared_ptr<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>::__shared_ptr_default_delete<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::shared_ptr<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>::__shared_ptr_default_delete<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00dc4  FUN_00a00dc4 =====

void FUN_00a00dc4(long param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x18);
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      operator_delete(*(void **)(pbVar1 + 0x10));
    }
    operator_delete(pbVar1);
    return;
  }
  return;
}


// ===== 00a00e04  FUN_00a00e04 =====

long FUN_00a00e04(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012e0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00e20  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00e24  FUN_00a00e24 =====

void FUN_00a00e24(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *__ptr;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long local_b8;
  undefined1 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  long local_78;
  long lStack_70;
  void *local_68;
  
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  lVar4 = FUN_00a0e034(param_2,&local_a0,0x18);
  if (lVar4 == 0) {
    if (((int)local_a0 == 0x61647a74 && local_a0._4_2_ == 0x6174) && (uStack_98._3_1_ == '\0')) {
      uVar2 = android_tzdata::tzdata::parse_tz_int(&local_a0,0x18,0xc);
      uVar3 = android_tzdata::tzdata::parse_tz_int(&local_a0,0x18,0x10);
      android_tzdata::tzdata::parse_tz_int(&local_a0,0x18,0x14);
      auVar6 = <std::fs::File_as_core::io::seek::Seek>::seek(param_2,0,(ulong)uVar2);
      lVar4 = auVar6._8_8_;
      if (auVar6._0_8_ != 1) {
        lVar1 = (ulong)uVar3 - (ulong)uVar2;
        if (lVar1 < 0) {
          uVar5 = 0;
LAB_00a00f40:
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar5,lVar1);
        }
        if (uVar3 == uVar2) {
          __ptr = &DAT_00000001;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar5 = 1;
          __ptr = (undefined1 *)FUN_004b263c(lVar1,1);
          if (__ptr == (undefined1 *)0x0) goto LAB_00a00f40;
        }
                    /* try { // try from 00a00f78 to 00a00f8b has its CatchHandler @ 00a010bc */
        lVar4 = FUN_00a0e034(param_2,__ptr,lVar1);
        if (lVar4 == 0) {
                    /* try { // try from 00a00fbc to 00a00feb has its CatchHandler @ 00a010cc */
          local_b8 = lVar1;
          puStack_b0 = __ptr;
          local_a8 = lVar1;
          <android_tzdata::tzdata::android_tzdata::tzdata::Index>::find_entry
                    (&local_a0,&local_b8,param_3,param_4);
          if (local_a0 == 0) {
            *param_1 = -1;
            param_1[1] = 3;
          }
          else {
            auVar6 = <std::fs::File_as_core::io::seek::Seek>::seek
                               (param_2,0,local_90 + (ulong)uVar3);
            if (auVar6._0_8_ == 1) {
              *param_1 = -1;
              param_1[1] = auVar6._8_8_;
            }
            else {
              FUN_00a0cea0(&local_78,lStack_88,1,1,1);
              if (local_78 == 1) {
                    /* try { // try from 00a01094 to 00a0109b has its CatchHandler @ 00a010cc */
                    /* WARNING: Subroutine does not return */
                alloc::raw_vec::handle_error(lStack_70,local_68);
              }
                    /* try { // try from 00a01038 to 00a01047 has its CatchHandler @ 00a010a0 */
              lVar4 = FUN_00a0e034(param_2,local_68,lStack_88);
              if (lVar4 == 0) {
                *param_1 = lStack_70;
                param_1[1] = (long)local_68;
                param_1[2] = lStack_88;
              }
              else {
                *param_1 = -1;
                param_1[1] = lVar4;
                if (lStack_70 != 0) {
                  free(local_68);
                }
              }
            }
          }
          if (uVar3 == uVar2) {
            return;
          }
          free(__ptr);
          return;
        }
        if (uVar3 != uVar2) {
          free(__ptr);
        }
      }
      *param_1 = -1;
      param_1[1] = lVar4;
      return;
    }
    lVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x15,&DAT_0037f64a,0x14);
  }
  *param_1 = -1;
  param_1[1] = lVar4;
  return;
}


// ===== 00a010f0  FUN_00a010f0 =====

void FUN_00a010f0(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a01138  FUN_00a01138 =====

void FUN_00a01138(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a01180  FUN_00a01180 =====

void FUN_00a01180(char *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == '\x06') {
    uVar1 = *(ulong *)(param_1 + 8) & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_18 = *(ulong *)(param_1 + 8) - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  return;
}


// ===== 00a011d8  <chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar6 = param_1 >> 3 & 0x3ff;
  if (0x2dc < (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar6,0x2dd,&PTR_s__root__cargo_registry_src_index__00af8b38);
  }
  iVar4 = ((int)(uint)param_1 >> 0xd) * 0xc +
          ((uint)uVar6 + (uint)(byte)(&DAT_0037f65e)[uVar6] >> 6) + -1;
  iVar2 = iVar4 + param_2;
  if (!SCARRY4(iVar4,param_2)) {
    iVar4 = iVar2 % 0xc;
    uVar1 = iVar4 >> 0x1f;
    iVar2 = iVar2 / 0xc + uVar1;
    uVar3 = (iVar2 % 400 >> 0x1f & 400U) + iVar2 % 400;
    if (399 < uVar3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                ((long)(int)uVar3,400,&PTR_s__root__cargo_registry_src_index__00af8b50);
    }
    uStack_30 = _UNK_0029f128;
    local_38 = _DAT_0029f120;
    local_40[1] = 0x1c;
    if ((byte)(&DAT_0037f93b)[(int)uVar3] < 8) {
      local_40[1] = 0x1d;
    }
    local_40[0] = 0x1f;
    uStack_20 = _UNK_002a0558;
    local_28 = _DAT_002a0550;
    uVar1 = (uVar1 & 0xc) + iVar4;
    local_18 = DAT_002a1520;
    uVar5 = ((uint)param_1 >> 3) + (uint)(byte)(&DAT_0037f65e)[uVar6] >> 1 & 0x1f;
    if (local_40[uVar1] <= uVar5) {
      uVar5 = local_40[uVar1];
    }
    if (0xfff80001 < iVar2 - 0x3ffffU) {
      uVar1 = (uVar1 * 0x200 | uVar5 << 4) + 0x200 | (uint)(byte)(&DAT_0037f93b)[(int)uVar3];
      if (""[uVar1 >> 3] != 0) {
        return uVar1 + ""[uVar1 >> 3] * -8 | iVar2 * 0x2000;
      }
    }
  }
  return 0;
}


// ===== 00a01358  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_isoywd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_isoywd */

void __rustcall <chrono::naive::date::chrono::naive::date::NaiveDate>::from_isoywd(void)

{
  int iVar1;
  char *local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  iVar1 = from_isoywd_opt();
  local_30 = "invalid or out-of-range date";
  uStack_28 = 0x1c;
  if (iVar1 != 0) {
    return;
  }
  pcStack_18 = FUN_00a0d340;
  local_20 = (undefined1 *)&local_30;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab692,&local_20,&PTR_s__root__cargo_registry_src_index__00af8db0);
}


// ===== 00a013b0  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_yo_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_yo_opt */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_yo_opt(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((0xfff80001 < param_1 - 0x3ffffU) && (0xfffffe91 < param_2 - 0x16fU)) &&
     (uVar1 = param_2 << 4 | param_1 << 0xd |
              (uint)(byte)(&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400],
     0x16e0 < (uVar1 & 0x1ff8))) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00a01428  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_ymd_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_ymd_opt */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_ymd_opt
          (int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 < 0xd) && (param_3 < 0x20)) {
    if (0xfff80001 < param_1 - 0x3ffffU) {
      uVar1 = param_3 << 4 | param_2 << 9 |
              (uint)(byte)(&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
      if (""[uVar1 >> 3] != 0) {
        return uVar1 + ""[uVar1 >> 3] * -8 | param_1 << 0xd;
      }
    }
    return 0;
  }
  return 0;
}


// ===== 00a014b8  <chrono::naive::date::chrono::naive::date::NaiveDate>::parse_from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::parse_from_str */

ulong __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::parse_from_str
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 local_f0 [2];
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  byte local_18;
  undefined7 uStack_17;
  
  local_48 = 0xff;
  local_30 = 8;
  uStack_28 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_f0[0] = 0;
  local_50 = 0;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_00a06280(&local_20,local_f0,param_1,param_2,&local_40);
  if ((local_20 != 0) && (CONCAT71(uStack_17,local_18) == 0)) {
    uVar1 = <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_date(local_f0);
    return (uVar1 >> 8 & 0xff) << 8 | uVar1 & 0xffffffffffff00ff;
  }
  uVar2 = 5;
  if (CONCAT71(uStack_17,local_18) == 0) {
    uVar2 = 0xffffffff;
  }
  if (local_20 == 0) {
    uVar2 = (uint)local_18;
  }
  return ((ulong)uVar2 & 0xff) << 8 | 1;
}


// ===== 00a015ac  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_isoywd_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_isoywd_opt */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_isoywd_opt
          (int param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = (&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
  uVar5 = (uint)bVar2;
  if (param_2 - 1U < (0x406U >> (ulong)(bVar2 & 0x1f) & 1 | 0x34)) {
    uVar6 = bVar2 & 7;
    uVar1 = param_2 * 7 + (uint)param_3;
    uVar3 = uVar6 + 7;
    if (2 < uVar6) {
      uVar3 = uVar6;
    }
    uVar6 = uVar1 - uVar3;
    if (uVar1 < uVar3 || uVar6 == 0) {
      param_1 = param_1 + -1;
      uVar5 = (uint)(byte)(&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
      uVar6 = (uVar1 - (uVar3 + ((byte)(&DAT_0037f93b)
                                       [(param_1 % 400 >> 0x1f & 400U) + param_1 % 400] >> 3))) +
              0x16e;
    }
    else {
      uVar1 = 0x16e - (bVar2 >> 3);
      uVar3 = uVar6 - uVar1;
      if (uVar1 <= uVar6 && uVar3 != 0) {
        param_1 = param_1 + 1;
        uVar5 = (uint)(byte)(&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
        uVar6 = uVar3;
      }
    }
    bVar4 = uVar6 - 0x16f < 0xfffffe92;
    if ((!bVar4 && 0xfff80000 < param_1 - 0x3ffffU) && (bVar4 || param_1 - 0x3ffffU != 0xfff80001))
    {
      uVar5 = param_1 << 0xd | uVar6 << 4 | uVar5;
      if (0x16e0 < (uVar5 & 0x1ff8)) {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  return 0;
}


// ===== 00a016dc  <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_days =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_days */

undefined8 __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_days
          (undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x1f == 0) {
    uVar1 = add_days();
    return uVar1;
  }
  return 0;
}


// ===== 00a016f0  <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_days =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_days */

undefined8 __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_days
          (undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x1f == 0) {
    uVar1 = add_days(param_1,-(int)param_2);
    return uVar1;
  }
  return 0;
}


// ===== 00a01708  <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_months =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_months */

undefined8 __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_months
          (undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (-1 < param_2) {
      uVar1 = diff_months();
      return uVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a0171c  <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_signed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_signed */

undefined8 __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::checked_add_signed
          (undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 < 0 && 0 < param_3) {
    param_2 = param_2 + 1;
  }
  if (param_2 - 0xa8c000000000U < 0xfffeae7ffffeae81) {
    return 0;
  }
  uVar2 = SUB168(SEXT816(param_2) * SEXT816(0x1845c8a0ce512957),8);
  uVar1 = add_days(param_1,(uVar2 >> 0xd) - ((long)uVar2 >> 0x3f));
  return uVar1;
}


// ===== 00a01770  <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_months =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_months */

undefined8 __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_months
          (undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (-1 < param_2) {
      uVar1 = diff_months(param_1,-param_2);
      return uVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a01788  <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_signed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_signed */

undefined8 __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::checked_sub_signed
          (undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 < 0 && 0 < param_3) {
    param_2 = param_2 + 1;
  }
  if (param_2 - 0xa8c000015180U < 0xfffeae7ffffeae81) {
    return 0;
  }
  uVar2 = SUB168(SEXT816(param_2) * SEXT816(-0x1845c8a0ce512957),8);
  uVar1 = add_days(param_1,(uVar2 >> 0xd) - ((long)uVar2 >> 0x3f));
  return uVar1;
}


// ===== 00a017e0  <chrono::naive::date::chrono::naive::date::NaiveDate>::parse_and_remainder =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::parse_and_remainder */

void __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::parse_and_remainder
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_110 [2];
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  long local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_68 = 0xff;
  local_40 = 8;
  uStack_38 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_110[0] = 0;
  local_70 = 0;
  local_50 = param_4;
  uStack_48 = param_5;
  FUN_00a06280(&local_60,local_110,param_2,param_3,&local_50);
  if (local_60 == 0) {
    *(undefined1 *)(param_1 + 1) = local_58;
    *param_1 = 0;
    return;
  }
  uVar1 = <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_date(local_110);
  if ((uVar1 & 1) != 0) {
    *(char *)(param_1 + 1) = (char)(uVar1 >> 8);
    *param_1 = 0;
    return;
  }
  *(long *)(param_1 + 2) = local_60;
  *(ulong *)(param_1 + 4) = CONCAT71(uStack_57,local_58);
  *param_1 = (int)(uVar1 >> 0x20);
  return;
}


// ===== 00a018f8  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_weekday_of_month =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_weekday_of_month */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_weekday_of_month
          (int param_1,uint param_2,int param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char *local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  if (((param_2 < 0xd) && (param_4 != '\0')) && (0xfff80001 < param_1 - 0x3ffffU)) {
    bVar1 = (&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
    uVar3 = (uint)bVar1 | (param_2 & 0x3fffff) << 9 | 0x10;
    if (""[uVar3 >> 3] != 0) {
      uVar3 = ~(((uVar3 + ""[uVar3 >> 3] * -8 >> 4 & 0x1ff) + (bVar1 & 7)) % 7) + param_3 + 8;
      uVar2 = (uVar3 & 0xff) * 0x25 >> 8;
      uVar3 = (uint)(byte)(param_4 - 1) * 7 +
              (uVar3 + (uVar2 + ((uVar3 - uVar2 & 0xfe) >> 1) >> 2) * -7 & 0xff);
      if (uVar3 < 0x1f) {
        uVar3 = param_2 * 0x200 + uVar3 * 0x10 + 0x10 | (uint)bVar1;
        if (""[uVar3 >> 3] != 0) {
          return uVar3 + ""[uVar3 >> 3] * -8 | param_1 << 0xd;
        }
      }
    }
  }
  local_20 = (undefined1 *)&local_30;
  local_30 = "out-of-range date";
  uStack_28 = 0x11;
  pcStack_18 = FUN_00a0d340;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab692,&local_20,&PTR_s__root__cargo_registry_src_index__00af8db0);
}


// ===== 00a01a4c  <chrono::naive::date::chrono::naive::date::NaiveDate>::signed_duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::signed_duration_since */

undefined1  [16] __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::signed_duration_since
          (uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  
  iVar5 = ((int)param_1 >> 0xd) % 400;
  iVar6 = ((int)param_2 >> 0xd) % 400;
  iVar7 = (int)((ulong)((long)((int)param_2 >> 0xd) * -0x51eb851f) >> 0x20);
  uVar4 = iVar5 >> 0x1f;
  uVar1 = iVar6 >> 0x1f;
  uVar2 = (uVar4 & 400) + iVar5;
  uVar3 = (uVar1 & 400) + iVar6;
  auVar8._0_8_ = (((ulong)(((param_1 >> 4 & 0x1ff) + uVar2 * 0x16d + (uint)(byte)""[uVar2]) - 1) +
                  (long)(int)((uVar4 + ((int)param_1 >> 0xd) / 400 +
                                       ((iVar7 >> 7) - (iVar7 >> 0x1f))) - uVar1) * 0x23ab1) -
                 (ulong)(((param_2 >> 4 & 0x1ff) + uVar3 * 0x16d + (uint)(byte)""[uVar3]) - 1)) *
                 0x15180;
  auVar8._8_8_ = 0;
  return auVar8;
}


// ===== 00a01b0c  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (!SCARRY4(param_1,0x16d)) {
    iVar3 = (param_1 + 0x16d) % 0x23ab1;
    uVar2 = iVar3 >> 0x1f;
    uVar1 = (uVar2 & 0x23ab1) + iVar3;
    uVar5 = (ulong)(uVar1 / 0x16d);
    uVar4 = uVar1 % 0x16d;
    uVar6 = uVar4 - (byte)""[uVar5];
    if (uVar4 < (byte)""[uVar5]) {
      uVar6 = uVar1 / 0x16d - 1;
      uVar5 = (ulong)uVar6;
      if (400 < uVar6) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar5,0x191,&PTR_s__root__cargo_registry_src_index__00af8b98);
      }
      uVar6 = (uVar4 - (byte)""[uVar5]) + 0x16d;
    }
    else if (0x23a4f < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar5,400,&PTR_s__root__cargo_registry_src_index__00af8b50);
    }
    iVar3 = (int)uVar5 + (uVar2 + (param_1 + 0x16d) / 0x23ab1) * 400;
    uVar1 = iVar3 - 0x3ffff;
    if ((0x16d >= uVar6 && 0xfff80000 < uVar1) && (0x16d < uVar6 || uVar1 != 0xfff80001)) {
      uVar6 = iVar3 * 0x2000 + uVar6 * 0x10 + 0x10 | (uint)(byte)(&DAT_0037f93b)[uVar5];
      if (0x16e0 < (uVar6 & 0x1ff8)) {
        uVar6 = 0;
      }
      return uVar6;
    }
  }
  return 0;
}


// ===== 00a01c30  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_weekday_of_month_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_weekday_of_month_opt */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_weekday_of_month_opt
          (int param_1,uint param_2,int param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_2 < 0xd) && (param_4 != '\0')) && (0xfff80001 < param_1 - 0x3ffffU)) {
    bVar1 = (&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
    uVar3 = (uint)bVar1 | (param_2 & 0x3fffff) << 9 | 0x10;
    if (""[uVar3 >> 3] != 0) {
      uVar3 = ~(((uVar3 + ""[uVar3 >> 3] * -8 >> 4 & 0x1ff) + (bVar1 & 7)) % 7) + param_3 + 8;
      uVar2 = (uVar3 & 0xff) * 0x25 >> 8;
      uVar3 = (uint)(byte)(param_4 - 1) * 7 +
              (uVar3 + (uVar2 + ((uVar3 - uVar2 & 0xfe) >> 1) >> 2) * -7 & 0xff);
      if (uVar3 < 0x1f) {
        uVar3 = param_2 * 0x200 + uVar3 * 0x10 + 0x10 | (uint)bVar1;
        if (""[uVar3 >> 3] != 0) {
          return uVar3 + ""[uVar3 >> 3] * -8 | param_1 << 0xd;
        }
      }
    }
  }
  return 0;
}


// ===== 00a01d50  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_yo =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_yo */

void __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_yo(int param_1,int param_2)

{
  char *local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  if (((0xfff80001 < param_1 - 0x3ffffU) && (0xfffffe91 < param_2 - 0x16fU)) &&
     (((param_2 << 4 | (uint)(byte)(&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400])
      & 0x1ff8) < 0x16e1)) {
    return;
  }
  local_20 = (undefined1 *)&local_30;
  local_30 = "invalid or out-of-range date";
  uStack_28 = 0x1c;
  pcStack_18 = FUN_00a0d340;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab692,&local_20,&PTR_s__root__cargo_registry_src_index__00af8db0);
}


// ===== 00a01e04  <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar6 = param_1 >> 4 & 0x1ff;
  uVar8 = uVar6 + param_2;
  if (((!SCARRY4(uVar6,param_2)) && (0 < (int)uVar8)) && (uVar8 <= 0x16e - (param_1 >> 3 & 1))) {
    return param_1 & 0xffffe00f | uVar8 * 0x10;
  }
  iVar3 = ((int)param_1 >> 0xd) % 400;
  uVar1 = iVar3 >> 0x1f;
  uVar8 = (uVar1 & 400) + iVar3;
  iVar5 = uVar6 + uVar8 * 0x16d + (uint)(byte)""[uVar8] + -1;
  iVar3 = iVar5 + param_2;
  if (!SCARRY4(iVar5,param_2)) {
    iVar5 = iVar3 % 0x23ab1;
    uVar2 = iVar5 >> 0x1f;
    uVar6 = (uVar2 & 0x23ab1) + iVar5;
    uVar7 = (ulong)(uVar6 / 0x16d);
    uVar4 = uVar6 % 0x16d;
    uVar8 = uVar4 - (byte)""[uVar7];
    if (uVar4 < (byte)""[uVar7]) {
      uVar8 = uVar6 / 0x16d - 1;
      uVar7 = (ulong)uVar8;
      if (400 < uVar8) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar7,0x191,&PTR_s__root__cargo_registry_src_index__00af8b98);
      }
      uVar8 = (uVar4 - (byte)""[uVar7]) + 0x16d;
    }
    else if (0x23a4f < uVar6) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar7,400,&PTR_s__root__cargo_registry_src_index__00af8b50);
    }
    iVar3 = (int)uVar7 + (uVar1 + ((int)param_1 >> 0xd) / 400 + iVar3 / 0x23ab1 + uVar2) * 400;
    uVar6 = iVar3 - 0x3ffff;
    if ((0x16d >= uVar8 && 0xfff80000 < uVar6) && (0x16d < uVar8 || uVar6 != 0xfff80001)) {
      uVar8 = iVar3 * 0x2000 + uVar8 * 0x10 + 0x10 | (uint)(byte)(&DAT_0037f93b)[uVar7];
      if (0x16e0 < (uVar8 & 0x1ff8)) {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  return 0;
}


// ===== 00a01fa0  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_ymd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::chrono::naive::date::NaiveDate>::from_ymd */

uint __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_ymd
          (int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char *local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  if (((param_2 < 0xd) && (param_3 < 0x20)) && (0xfff80001 < param_1 - 0x3ffffU)) {
    uVar1 = param_3 << 4 | param_2 << 9 |
            (uint)(byte)(&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
    if (""[uVar1 >> 3] != 0) {
      return uVar1 + ""[uVar1 >> 3] * -8 | param_1 << 0xd;
    }
  }
  local_20 = (undefined1 *)&local_30;
  local_30 = "invalid or out-of-range date";
  uStack_28 = 0x1c;
  pcStack_18 = FUN_00a0d340;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab692,&local_20,&PTR_s__root__cargo_registry_src_index__00af8db0);
}


// ===== 00a02064  FUN_00a02064 =====

void FUN_00a02064(undefined1 (*param_1) [12],long param_2,ulong param_3)

{
  ulong *puVar1;
  ushort *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [12];
  ulong local_148;
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
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  int local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulong local_b0;
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
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_2 == 0) {
    std::sys::fs::symlink_metadata(&local_b8,&DAT_0037ffc9,0xe);
    if (CONCAT71(uStack_b7,local_b8) != 1) {
      local_148 = local_b0;
      uStack_f8 = uStack_60;
      local_100 = local_68;
      uStack_e8 = uStack_50;
      uStack_f0 = local_58;
      local_d0 = local_38;
      uStack_d8 = uStack_40;
      local_e0 = local_48;
      uStack_138 = uStack_a0;
      local_140 = local_a8;
      uStack_128 = uStack_90;
      uStack_130 = local_98;
      uStack_118 = uStack_80;
      local_120 = local_88;
      uStack_108 = uStack_70;
      uStack_110 = local_78;
      <std::fs::[m]::std::fs::Metadata>::modified(&local_c8,&local_148);
      auVar12._8_4_ = local_c0;
      auVar12._0_8_ = local_c8;
      if (local_c0 == -1) {
                    /* try { // try from 00a0231c to 00a0231f has its CatchHandler @ 00a0237c */
        auVar12 = <std::time::[5]::std::time::SystemTime>::now();
        if ((1 < (local_c8 & 3) - 2) && ((local_c8 & 3) != 0)) {
          local_b0 = local_c8 - 1;
          local_b8 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_b0);
        }
      }
      *param_1 = auVar12;
      return;
    }
                    /* try { // try from 00a0215c to 00a0215f has its CatchHandler @ 00a02390 */
    auVar12 = <std::time::[5]::std::time::SystemTime>::now();
    *param_1 = auVar12;
    if ((1 < (local_b0 & 3) - 2) && ((local_b0 & 3) != 0)) {
      local_b0 = local_b0 - 1;
      local_b8 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_b0);
    }
    return;
  }
  uVar5 = 0x7465646279746573;
  uVar8 = 0x736f6d6570736575;
  uVar3 = param_3 & 0xfffffffffffffff8;
  uVar7 = 0x6c7967656e657261;
  uVar4 = 0x646f72616e646f6d;
  uVar9 = param_3 & 7;
  if (uVar3 != 0) {
    uVar10 = 0;
    do {
      puVar1 = (ulong *)(param_2 + uVar10);
      uVar8 = uVar8 + uVar4;
      uVar10 = uVar10 + 8;
      uVar4 = uVar8 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
      uVar5 = *puVar1 ^ uVar5;
      uVar6 = uVar5 + uVar7 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
      uVar5 = uVar5 + uVar7 + uVar4;
      uVar4 = uVar5 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
      uVar7 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar8 = uVar6 + (uVar8 >> 0x20 | uVar8 << 0x20);
      uVar5 = uVar8 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
      uVar8 = uVar8 ^ *puVar1;
    } while (uVar10 < uVar3);
  }
  if (uVar9 < 4) {
    uVar6 = 0;
    uVar10 = 0;
    if (uVar9 < 2) goto LAB_00a021d8;
  }
  else {
    uVar10 = (ulong)*(uint *)(param_2 + uVar3);
    uVar6 = 4;
    if (uVar9 < 6) goto LAB_00a021d8;
  }
  lVar11 = uVar6 << 3;
  puVar2 = (ushort *)(param_2 + uVar3 + uVar6);
  uVar6 = uVar6 | 2;
  uVar10 = (ulong)*puVar2 << lVar11 | uVar10;
LAB_00a021d8:
  if (uVar6 < uVar9) {
    uVar10 = (ulong)*(byte *)(param_2 + uVar6 + uVar3) << (uVar6 << 3) | uVar10;
  }
  uVar10 = uVar10 | param_3 << 0x38;
  uVar8 = uVar8 + uVar4;
  uVar4 = uVar8 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar5 = uVar10 ^ uVar5;
  uVar9 = uVar5 + uVar7 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar3 = uVar5 + uVar7 + uVar4;
  uVar4 = uVar3 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar8 = uVar9 + (uVar8 >> 0x20 | uVar8 << 0x20);
  uVar5 = uVar8 ^ (uVar9 >> 0x2b | uVar9 << 0x15);
  uVar8 = (uVar8 ^ uVar10) + uVar4;
  uVar3 = uVar5 + ((uVar3 >> 0x20 | uVar3 << 0x20) ^ 0xff);
  uVar4 = uVar8 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar5 = uVar3 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar3 = uVar4 + uVar3;
  uVar8 = uVar5 + (uVar8 >> 0x20 | uVar8 << 0x20);
  uVar4 = uVar3 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar5 = uVar8 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar8 = uVar4 + uVar8;
  uVar3 = uVar5 + (uVar3 >> 0x20 | uVar3 << 0x20);
  uVar4 = uVar8 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar5 = uVar3 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar3 = uVar4 + uVar3;
  uVar8 = uVar5 + (uVar8 >> 0x20 | uVar8 << 0x20);
  uVar4 = uVar3 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar5 = uVar8 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar3 = uVar5 + (uVar3 >> 0x20 | uVar3 << 0x20);
  uVar8 = uVar4 + uVar8 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar4 = uVar3 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar3 = uVar8 + uVar3;
  *(ulong *)*param_1 =
       (uVar4 >> 0x2b | uVar4 << 0x15) ^ (uVar8 >> 0x2f | uVar8 << 0x11) ^
       (uVar3 >> 0x20 | uVar3 << 0x20) ^ uVar3;
  *(undefined4 *)(*param_1 + 8) = 0xffffffff;
  return;
}


// ===== 00a023a8  FUN_00a023a8 =====

void FUN_00a023a8(uint *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  void *unaff_x26;
  undefined8 unaff_x27;
  undefined1 auVar8 [12];
  undefined1 local_120 [12];
  ulong local_110;
  int iStack_108;
  undefined4 uStack_104;
  ulong local_100;
  uint *puStack_f8;
  void *local_f0;
  undefined5 local_e8;
  byte bStack_e3;
  undefined2 uStack_e2;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  uint *puStack_78;
  void *local_70;
  
  auVar8 = <std::time::[5]::std::time::SystemTime>::now();
  local_120 = auVar8;
  <std::time::[5]::std::time::SystemTime>::duration_since
            (&local_80,local_120,param_2[0xf],(int)param_2[0x10]);
  if (((local_80 & 1) != 0) || (puStack_78 != (uint *)0x0)) {
    std::env::var::inner(&local_100,&DAT_0037ffd7,2);
    if ((local_100 & 1) == 0) {
      unaff_x27 = CONCAT26(uStack_e2,CONCAT15(bStack_e3,local_e8));
      puVar7 = puStack_f8;
      unaff_x26 = local_f0;
    }
    else {
      if ((puStack_f8 != (uint *)0xffffffffffffffff) && (puStack_f8 != (uint *)0x0)) {
        free(local_f0);
      }
      puVar7 = (uint *)0xffffffffffffffff;
    }
    pvVar1 = (void *)0x0;
    if (puVar7 != (uint *)0xffffffffffffffff) {
      pvVar1 = unaff_x26;
    }
                    /* try { // try from 00a02460 to 00a024bb has its CatchHandler @ 00a02774 */
    FUN_00a02064(&local_110,pvVar1,unaff_x27);
    if ((int)param_2[0x12] == -1) {
      if (iStack_108 == -1) goto LAB_00a0249c;
LAB_00a024ac:
      FUN_00a02834(&local_100,pvVar1,unaff_x27);
      if (*param_2 != 0) {
        free((void *)param_2[1]);
      }
      if (param_2[3] != 0) {
        free((void *)param_2[4]);
      }
      if (param_2[6] != 0) {
        free((void *)param_2[7]);
      }
      param_2[0xd] = uStack_98;
      param_2[0xc] = local_a0;
      param_2[9] = uStack_b8;
      param_2[8] = local_c0;
      param_2[0xb] = uStack_a8;
      param_2[10] = uStack_b0;
      param_2[0xe] = local_90;
      param_2[1] = (ulong)puStack_f8;
      *param_2 = local_100;
      param_2[3] = CONCAT26(uStack_e2,CONCAT15(bStack_e3,local_e8));
      param_2[2] = (ulong)local_f0;
      param_2[5] = uStack_d8;
      param_2[4] = local_e0;
      param_2[7] = uStack_c8;
      param_2[6] = uStack_d0;
    }
    else {
      if ((iStack_108 == -1) || ((int)param_2[0x12] != iStack_108)) goto LAB_00a024ac;
LAB_00a0249c:
      if (param_2[0x11] != local_110) goto LAB_00a024ac;
    }
    *(undefined1 (*) [12])(param_2 + 0xf) = auVar8;
    param_2[0x12] = CONCAT44(uStack_104,iStack_108);
    param_2[0x11] = local_110;
    if ((long)puVar7 - 1U < 0xfffffffffffffffe) {
      free(unaff_x26);
    }
  }
  if ((param_4 & 1) == 0) {
    iVar6 = (int)(uint)*param_3 >> 0xd;
    iVar4 = iVar6 + -1;
    if (iVar6 < 1) {
      iVar6 = (1U - iVar6) / 400 + 1;
      iVar4 = iVar4 + iVar6 * 400;
      iVar6 = iVar6 * -0x23ab1;
    }
    else {
      iVar6 = 0;
    }
    FUN_00a132ec(&local_80,param_2,
                 (ulong)*(uint *)((long)param_3 + 4) +
                 (long)(int)(((((uint)*param_3 >> 4 & 0x1ff) + iVar6) - iVar4 / 100) +
                             (iVar4 * 0x5b5 >> 2) + (iVar4 / 100 >> 2) + -0xaf93b) * 0x15180);
    if ((char)local_80 != -1) {
      puStack_f8 = puStack_78;
      local_100 = local_80;
      local_f0 = local_70;
                    /* try { // try from 00a0274c to 00a0276f has its CatchHandler @ 00a0279c */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("unable to select local time typeunsupported evaluation operation",0x20,&local_100,
                 &PTR_FUN_00af8b18,&PTR_s__root__cargo_registry_src_index__00af8b68);
    }
    local_f0._0_4_ = *puStack_78;
    if (0x2a2fe < (uint)local_f0 + 0x1517f) goto LAB_00a026dc;
LAB_00a026b4:
    uVar3 = 0;
    lVar5 = 4;
  }
  else {
    local_80 = *param_3;
    puStack_78 = (uint *)CONCAT44(puStack_78._4_4_,(uint)param_3[1]);
    FUN_00a1351c(&local_100,param_2,&local_80);
    if (bStack_e3 == 0xff) {
      puStack_78 = puStack_f8;
      local_80 = local_100;
      local_70 = local_f0;
                    /* try { // try from 00a02714 to 00a02737 has its CatchHandler @ 00a027b0 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("unable to select local time typeunsupported evaluation operation",0x20,&local_80,
                 &PTR_FUN_00af8b18,&PTR_s__root__cargo_registry_src_index__00af8b80);
    }
    bVar2 = bStack_e3 - 2;
    if (bStack_e3 < 2) {
      bVar2 = 1;
    }
    uVar3 = (uint)bVar2;
    if (uVar3 == 0) {
      local_f0._0_4_ = (uint)local_100;
      if ((uint)local_100 + 0x1517f < 0x2a2ff) goto LAB_00a026b4;
LAB_00a026dc:
      uVar3 = 2;
      goto LAB_00a026e0;
    }
    if (((uVar3 != 1) || (uVar3 = 2, 0x2a2fe < (uint)local_100 + 0x1517f)) ||
       (0x2a2fe < (uint)local_f0 + 0x1517f)) goto LAB_00a026e0;
    param_1[1] = (uint)local_100;
    uVar3 = 1;
    lVar5 = 8;
  }
  *(uint *)((long)param_1 + lVar5) = (uint)local_f0;
LAB_00a026e0:
  *param_1 = uVar3;
  return;
}


// ===== 00a027c8  chrono::naive::date::div_mod_floor =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* chrono::naive::date::div_mod_floor */

undefined1  [16] __rustcall chrono::naive::date::div_mod_floor(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  void *pvVar6;
  void *__ptr;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  long unaff_x23;
  long lVar12;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_130;
  void *pvStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  char cStack_f0;
  undefined7 uStack_ef;
  void *pvStack_e8;
  void *pvStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  void *pvStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  int aiStack_7c [3];
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s__root__cargo_registry_src_index__00af8bb0);
  }
  if ((param_1 != -0x80000000) || (param_2 != 0xffffffff)) {
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = param_1 / (int)param_2;
    }
    uVar1 = param_1 - uVar4 * param_2;
    uVar2 = uVar4 - 1;
    if ((int)param_2 < 1) {
      uVar2 = uVar4 + 1;
    }
    if ((uVar1 & 0x80000000) == 0) {
      uVar2 = uVar4;
    }
    auVar13._4_4_ = 0;
    auVar13._0_4_ = uVar2;
    uVar4 = -param_2;
    if (-1 < (int)param_2) {
      uVar4 = param_2;
    }
    auVar13._8_4_ = (uVar4 & (int)uVar1 >> 0x1f) + uVar1;
    auVar13._12_4_ = 0;
    return auVar13;
  }
  auVar13 = core::panicking::panic_const::panic_const_div_overflow
                      (&PTR_s__root__cargo_registry_src_index__00af8bb0);
  plVar5 = auVar13._0_8_;
  pcStack_68 = FUN_00a02834;
  if (auVar13._8_8_ == 0) {
    puStack_70 = &stack0xfffffffffffffff0;
    auVar14 = FUN_00a12d24(&lStack_f8,"localtime",9);
    lVar12 = lStack_f8;
    if (lStack_f8 != -1) goto LAB_00a02870;
LAB_00a028e8:
    if (((cStack_f0 == '\x06') && (1 < ((ulong)pvStack_e8 & 3) - 2)) &&
       (((ulong)pvStack_e8 & 3) != 0)) {
      pvStack_128 = (void *)((long)pvStack_e8 + -1);
      uStack_130 = CONCAT71(uStack_130._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_128);
    }
    iana_time_zone::platform::get_timezone_inner(&lStack_f8);
    pvVar6 = pvStack_e8;
    lVar9 = lStack_f8;
    if (lStack_f8 == -1) {
      if (((CONCAT71(uStack_ef,cStack_f0) == 1) && (1 < ((ulong)pvStack_e8 & 3) - 2)) &&
         (((ulong)pvStack_e8 & 3) != 0)) {
        pvStack_128 = (void *)((long)pvStack_e8 + -1);
        uStack_130 = CONCAT71(uStack_130._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_128);
      }
    }
    else {
      __ptr = (void *)CONCAT71(uStack_ef,cStack_f0);
      auVar14 = android_tzdata::tzdata::find_file(&uStack_130);
      pvVar11 = pvStack_128;
      pvVar10 = __ptr;
      if ((int)uStack_130 == 1) {
LAB_00a02a30:
        if ((1 < ((ulong)pvVar11 & 3) - 2) && (((ulong)pvVar11 & 3) != 0)) {
          pvStack_128 = (void *)((long)pvVar11 + -1);
          uStack_130 = CONCAT71(uStack_130._1_7_,3);
          auVar14 = <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_128);
        }
        lVar12 = -1;
      }
      else {
        aiStack_7c[0] = uStack_130._4_4_;
        FUN_00a00e24(&lStack_f8,aiStack_7c,__ptr,pvVar6);
        uVar7 = extraout_x1;
        uVar4 = close(aiStack_7c[0]);
        lVar8 = lStack_f8;
        auVar14._4_4_ = 0;
        auVar14._0_4_ = uVar4;
        auVar14._8_8_ = uVar7;
        pvVar6 = (void *)CONCAT71(uStack_ef,cStack_f0);
        pvVar11 = pvVar6;
        if (lStack_f8 == -1) goto LAB_00a02a30;
        FUN_00a0b854(&lStack_f8,pvVar6,pvStack_e8);
        if (lStack_f8 == -1) {
          if (((cStack_f0 == '\x06') && (1 < ((ulong)pvStack_e8 & 3) - 2)) &&
             (((ulong)pvStack_e8 & 3) != 0)) {
            pvStack_128 = (void *)((long)pvStack_e8 + -1);
            uStack_130 = CONCAT71(uStack_130._1_7_,3);
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_128);
          }
        }
        else {
          unaff_x23 = CONCAT71(uStack_ef,cStack_f0);
          unaff_x28 = lStack_d0;
          unaff_x27 = lStack_d8;
          unaff_x26 = lStack_c8;
          unaff_x25 = lStack_c0;
          uStack_130 = lStack_b8;
          pvStack_128 = pvStack_b0;
          lStack_120 = lStack_a8;
          lStack_118 = lStack_a0;
          lStack_110 = lStack_98;
          lStack_108 = lStack_90;
          lStack_100 = lStack_88;
          pvVar10 = pvStack_e8;
          pvVar11 = pvStack_e0;
        }
        auVar14._8_8_ = lVar8;
        auVar14._0_8_ = (ulong)pvVar6;
        lVar12 = lStack_f8;
        if (lVar8 != 0) {
          free(pvVar6);
          auVar14._8_8_ = lVar8;
          auVar14._0_8_ = (ulong)pvVar6;
        }
      }
      if (lVar9 != 0) {
        free(__ptr);
        auVar14._8_8_ = lVar9;
        auVar14._0_8_ = (ulong)__ptr;
      }
      lStack_c0 = unaff_x25;
      lStack_c8 = unaff_x26;
      lStack_d8 = unaff_x27;
      lStack_d0 = unaff_x28;
      if (lVar12 != -1) goto LAB_00a0289c;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    auVar14 = FUN_004b263c(0x10,4);
    lVar3 = _UNK_002a02b8;
    lVar8 = _DAT_002a02b0;
    lVar9 = _UNK_0029fa78;
    lVar12 = _DAT_0029fa70;
    if (auVar14._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(4,0x10);
    }
    *plVar5 = 0;
    plVar5[1] = 8;
    plVar5[7] = 8;
    plVar5[8] = 0;
    plVar5[4] = auVar14._0_8_;
    plVar5[3] = lVar9;
    plVar5[2] = lVar12;
    plVar5[6] = lVar3;
    plVar5[5] = lVar8;
    *(undefined1 *)((long)plVar5 + 0x75) = 0xff;
  }
  else {
    puStack_70 = &stack0xfffffffffffffff0;
    auVar14 = FUN_00a12d24(&lStack_f8);
    lVar12 = lStack_f8;
    if (lStack_f8 == -1) goto LAB_00a028e8;
LAB_00a02870:
    unaff_x23 = CONCAT71(uStack_ef,cStack_f0);
    pvStack_128 = pvStack_b0;
    uStack_130 = lStack_b8;
    lStack_118 = lStack_a0;
    lStack_120 = lStack_a8;
    lStack_100 = lStack_88;
    lStack_108 = lStack_90;
    lStack_110 = lStack_98;
    pvVar10 = pvStack_e8;
    pvVar11 = pvStack_e0;
LAB_00a0289c:
    *plVar5 = lVar12;
    plVar5[1] = unaff_x23;
    plVar5[2] = (long)pvVar10;
    plVar5[3] = (long)pvVar11;
    plVar5[9] = (long)pvStack_128;
    plVar5[8] = uStack_130;
    plVar5[0xb] = lStack_118;
    plVar5[10] = lStack_120;
    plVar5[4] = lStack_d8;
    plVar5[5] = lStack_d0;
    plVar5[6] = lStack_c8;
    plVar5[7] = lStack_c0;
    plVar5[0xd] = lStack_108;
    plVar5[0xc] = lStack_110;
    plVar5[0xe] = lStack_100;
  }
  return auVar14;
}


// ===== 00a02834  FUN_00a02834 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a02834(long *param_1,long param_2)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long unaff_x23;
  long lVar8;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 local_120;
  void *pvStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  char local_e0;
  undefined7 uStack_df;
  void *local_d8;
  void *local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  void *pvStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  int local_6c [3];
  
  if (param_2 == 0) {
    FUN_00a12d24(&local_e8,"localtime",9);
    lVar8 = local_e8;
    if (local_e8 != -1) goto LAB_00a02870;
LAB_00a028e8:
    if (((local_e0 == '\x06') && (1 < ((ulong)local_d8 & 3) - 2)) && (((ulong)local_d8 & 3) != 0)) {
      pvStack_118 = (void *)((long)local_d8 + -1);
      local_120 = CONCAT71(local_120._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_118);
    }
    iana_time_zone::platform::get_timezone_inner(&local_e8);
    pvVar1 = local_d8;
    lVar2 = local_e8;
    if (local_e8 == -1) {
      if (((CONCAT71(uStack_df,local_e0) == 1) && (1 < ((ulong)local_d8 & 3) - 2)) &&
         (((ulong)local_d8 & 3) != 0)) {
        pvStack_118 = (void *)((long)local_d8 + -1);
        local_120 = CONCAT71(local_120._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_118);
      }
    }
    else {
      __ptr = (void *)CONCAT71(uStack_df,local_e0);
                    /* try { // try from 00a02940 to 00a02947 has its CatchHandler @ 00a02b7c */
      android_tzdata::tzdata::find_file(&local_120);
      pvVar7 = pvStack_118;
      pvVar6 = __ptr;
      if ((int)local_120 == 1) {
LAB_00a02a30:
        if ((1 < ((ulong)pvVar7 & 3) - 2) && (((ulong)pvVar7 & 3) != 0)) {
          pvStack_118 = (void *)((long)pvVar7 + -1);
          local_120 = CONCAT71(local_120._1_7_,3);
                    /* try { // try from 00a02a58 to 00a02a5f has its CatchHandler @ 00a02b7c */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_118);
        }
        lVar8 = -1;
      }
      else {
        local_6c[0] = local_120._4_4_;
                    /* try { // try from 00a029ac to 00a029bf has its CatchHandler @ 00a02b68 */
        FUN_00a00e24(&local_e8,local_6c,__ptr,pvVar1);
        close(local_6c[0]);
        lVar3 = local_e8;
        pvVar1 = (void *)CONCAT71(uStack_df,local_e0);
        pvVar7 = pvVar1;
        if (local_e8 == -1) goto LAB_00a02a30;
                    /* try { // try from 00a029dc to 00a029e7 has its CatchHandler @ 00a02b48 */
        FUN_00a0b854(&local_e8,pvVar1,local_d8);
        if (local_e8 == -1) {
          if (((local_e0 == '\x06') && (1 < ((ulong)local_d8 & 3) - 2)) &&
             (((ulong)local_d8 & 3) != 0)) {
            pvStack_118 = (void *)((long)local_d8 + -1);
            local_120 = CONCAT71(local_120._1_7_,3);
                    /* try { // try from 00a02aa0 to 00a02aa7 has its CatchHandler @ 00a02b48 */
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_118);
          }
        }
        else {
          unaff_x23 = CONCAT71(uStack_df,local_e0);
          unaff_x28 = local_c0;
          unaff_x27 = lStack_c8;
          unaff_x26 = lStack_b8;
          unaff_x25 = local_b0;
          local_120 = local_a8;
          pvStack_118 = pvStack_a0;
          lStack_110 = local_98;
          lStack_108 = lStack_90;
          local_100 = local_88;
          lStack_f8 = lStack_80;
          local_f0 = local_78;
          pvVar6 = local_d8;
          pvVar7 = local_d0;
        }
        lVar8 = local_e8;
        if (lVar3 != 0) {
          free(pvVar1);
        }
      }
      if (lVar2 != 0) {
        free(__ptr);
      }
      local_b0 = unaff_x25;
      lStack_b8 = unaff_x26;
      lStack_c8 = unaff_x27;
      local_c0 = unaff_x28;
      if (lVar8 != -1) goto LAB_00a0289c;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar5 = FUN_004b263c(0x10,4);
    lVar4 = _UNK_002a02b8;
    lVar3 = _DAT_002a02b0;
    lVar2 = _UNK_0029fa78;
    lVar8 = _DAT_0029fa70;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(4,0x10);
    }
    *param_1 = 0;
    param_1[1] = 8;
    param_1[7] = 8;
    param_1[8] = 0;
    param_1[4] = lVar5;
    param_1[3] = lVar2;
    param_1[2] = lVar8;
    param_1[6] = lVar4;
    param_1[5] = lVar3;
    *(undefined1 *)((long)param_1 + 0x75) = 0xff;
  }
  else {
    FUN_00a12d24(&local_e8);
    lVar8 = local_e8;
    if (local_e8 == -1) goto LAB_00a028e8;
LAB_00a02870:
    unaff_x23 = CONCAT71(uStack_df,local_e0);
    pvStack_118 = pvStack_a0;
    local_120 = local_a8;
    lStack_108 = lStack_90;
    lStack_110 = local_98;
    local_f0 = local_78;
    lStack_f8 = lStack_80;
    local_100 = local_88;
    pvVar6 = local_d8;
    pvVar7 = local_d0;
LAB_00a0289c:
    *param_1 = lVar8;
    param_1[1] = unaff_x23;
    param_1[2] = (long)pvVar6;
    param_1[3] = (long)pvVar7;
    param_1[9] = (long)pvStack_118;
    param_1[8] = local_120;
    param_1[0xb] = lStack_108;
    param_1[10] = lStack_110;
    param_1[4] = lStack_c8;
    param_1[5] = local_c0;
    param_1[6] = lStack_b8;
    param_1[7] = local_b0;
    param_1[0xd] = lStack_f8;
    param_1[0xc] = local_100;
    param_1[0xe] = local_f0;
  }
  return;
}


// ===== 00a02b9c  <chrono::datetime::serde::ts_nanoseconds_option::OptionNanoSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::serde::ts_nanoseconds_option::OptionNanoSecondsTimestampVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<chrono::datetime::serde::ts_nanoseconds_option::OptionNanoSecondsTimestampVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037ffd9,0x27);
  return;
}


// ===== 00a02bb0  <chrono::naive::datetime::serde::ts_seconds::SecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::serde::ts_seconds::SecondsTimestampVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<chrono::naive::datetime::serde::ts_seconds::SecondsTimestampVisitor_as_serde::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0029f7e0,0x10);
  return;
}


// ===== 00a02bc4  <chrono::naive::datetime::serde::ts_microseconds_option::OptionMicroSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::serde::ts_microseconds_option::OptionMicroSecondsTimestampVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<chrono::naive::datetime::serde::ts_microseconds_option::OptionMicroSecondsTimestampVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,0x380000,0x28);
  return;
}


// ===== 00a02bd8  <chrono::naive::internals::Mdf_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::internals::Mdf as core::fmt::Debug>::fmt */

void __rustcall
<chrono::naive::internals::Mdf_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  undefined1 local_54 [4];
  undefined1 *local_50;
  undefined *puStack_48;
  uint *local_40;
  undefined *puStack_38;
  uint *local_30;
  undefined *puStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_50 = (undefined1 *)&local_60;
  uVar1 = *param_1;
  local_58 = uVar1 & 0xf;
  local_54[0] = (undefined1)local_58;
  local_60 = uVar1 >> 9;
  puStack_48 = PTR_fmt_00b00c40;
  uStack_5c = uVar1 >> 4 & 0x1f;
  local_40 = &uStack_5c;
  puStack_38 = PTR_fmt_00b00c40;
  local_30 = &local_58;
  local_20 = local_54;
  puStack_28 = PTR_fmt_00b00da0;
  puStack_18 = PTR_fmt_00b012f8;
  core::fmt::write(*param_2,param_2[1],&DAT_00380028,&local_50);
  return;
}


// ===== 00a02c58  FUN_00a02c58 =====

void FUN_00a02c58(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00380208 + *(int *)(&DAT_00380208 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_003801d8 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 00a02c84  FUN_00a02c84 =====

void FUN_00a02c84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,"ParseIntErrorEmptyInvalidDigitPosOverflowNegOverflowZeroNotAPowerOfTwo-",0xd,
             "kind",4,&local_18,&DAT_00af8cd0);
  return;
}


// ===== 00a02cd4  <chrono::naive::date::NaiveDate_as_core::ops::arith::Add<chrono::month::Months>>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDate as core::ops::arith::Add<chrono::month::Months>>::add */

void __rustcall
<chrono::naive::date::NaiveDate_as_core::ops::arith::Add<chrono::month::Months>>::add
          (undefined8 param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) &&
     ((param_2 < 0 ||
      (iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months(), iVar1 == 0))))
  {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("`NaiveDate + Months` out of range",0x21,
               &PTR_s__root__cargo_registry_src_index__00af8bd0);
  }
  return;
}


// ===== 00a02d0c  <chrono::naive::date::NaiveDate_as_core::ops::arith::Sub<chrono::month::Months>>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDate as core::ops::arith::Sub<chrono::month::Months>>::sub */

void __rustcall
<chrono::naive::date::NaiveDate_as_core::ops::arith::Sub<chrono::month::Months>>::sub
          (undefined8 param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) &&
     ((param_2 < 0 ||
      (iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months(param_1,-param_2),
      iVar1 == 0)))) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("`NaiveDate - Months` out of range",0x21,
               &PTR_s__root__cargo_registry_src_index__00af8be8);
  }
  return;
}


// ===== 00a02d48  <chrono::naive::date::NaiveDate_as_core::ops::arith::Add<chrono::naive::Days>>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDate as core::ops::arith::Add<chrono::naive::Days>>::add */

void __rustcall
<chrono::naive::date::NaiveDate_as_core::ops::arith::Add<chrono::naive::Days>>::add
          (undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  if ((param_2 >> 0x1f == 0) &&
     (iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(), iVar1 != 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("`NaiveDate + Days` out of rangeFindLocalTimeTypeLocalTimeTypeInvalidSliceInvalidTzFileInvalidTzStringIoOutOfRangeProjectDateTimeSystemTimeTransitionRuleUnsupportedTzFileUnsupportedTzString"
             ,0x1f,&PTR_s__root__cargo_registry_src_index__00af8c00);
}


// ===== 00a02d80  FUN_00a02d80 =====

void FUN_00a02d80(byte *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a02dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00a02db0 + (ulong)(byte)(&DAT_0037f62a)[*param_1] * 4))(param_1,param_2);
  return;
}


// ===== 00a03030  <chrono::naive::date::NaiveDate_as_core::ops::arith::Sub<chrono::naive::Days>>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDate as core::ops::arith::Sub<chrono::naive::Days>>::sub */

void __rustcall
<chrono::naive::date::NaiveDate_as_core::ops::arith::Sub<chrono::naive::Days>>::sub
          (undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  if ((param_2 >> 0x1f == 0) &&
     (iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(param_1,-(int)param_2)
     , iVar1 != 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("`NaiveDate - Days` out of range",0x1f,&PTR_s__root__cargo_registry_src_index__00af8cb8
            );
}


// ===== 00a0306c  <chrono::naive::internals::YearFlags_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::internals::YearFlags as core::fmt::Debug>::fmt */

void __rustcall
<chrono::naive::internals::YearFlags_as_core::fmt::Debug>::fmt
          (undefined1 *param_1,undefined8 *param_2)

{
  undefined1 local_24 [4];
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_24[0] = *param_1;
  switch(local_24[0]) {
  case 0:
    <str_as_core::fmt::Debug>::fmt("FE?",3);
    return;
  case 1:
    <str_as_core::fmt::Debug>::fmt("ED",2);
    return;
  case 2:
    <str_as_core::fmt::Debug>::fmt("DC",2);
    return;
  case 3:
    <str_as_core::fmt::Debug>::fmt("CB",2);
    return;
  case 4:
    <str_as_core::fmt::Debug>::fmt("BA",2);
    return;
  case 5:
    <str_as_core::fmt::Debug>::fmt("AG",2);
    return;
  case 6:
    <str_as_core::fmt::Debug>::fmt("GF",2);
    return;
  case 7:
    <str_as_core::fmt::Debug>::fmt("FE",2);
    return;
  case 8:
    <str_as_core::fmt::Debug>::fmt("F?",2);
    return;
  case 9:
    <str_as_core::fmt::Debug>::fmt("E",1);
    return;
  case 10:
    <str_as_core::fmt::Debug>::fmt("D",1);
    return;
  case 0xb:
    <str_as_core::fmt::Debug>::fmt("C",1);
    return;
  case 0xc:
    <str_as_core::fmt::Debug>::fmt("B",1);
    return;
  case 0xd:
    <str_as_core::fmt::Debug>::fmt("A",1);
    return;
  case 0xe:
    <str_as_core::fmt::Debug>::fmt("G",1);
    return;
  case 0xf:
    <str_as_core::fmt::Debug>::fmt("F",1);
    return;
  default:
    local_20 = local_24;
    puStack_18 = PTR_fmt_00b00c18;
    core::fmt::write(*param_2,param_2[1],&DAT_002ac0fa,&local_20);
    return;
  }
}


// ===== 00a03254  <chrono::offset::local::inner::Cache_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::inner::Cache as core::default::Default>::default */

void __rustcall
<chrono::offset::local::inner::Cache_as_core::default::Default>::default(long *param_1)

{
  long lVar1;
  void *unaff_x21;
  void *pvVar2;
  long unaff_x25;
  undefined1 auVar3 [12];
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  void *local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  std::env::var::inner(&local_c8,&DAT_0037ffd7,2);
  if (local_c8 == 1) {
    if ((lStack_c0 != -1) && (lStack_c0 != 0)) {
      free(local_b8);
    }
    lVar1 = -1;
    pvVar2 = (void *)0x0;
  }
  else {
    lVar1 = lStack_c0;
    unaff_x21 = local_b8;
    pvVar2 = (void *)0x0;
    unaff_x25 = lStack_b0;
    if (lStack_c0 != -1) {
      pvVar2 = local_b8;
    }
  }
                    /* try { // try from 00a032cc to 00a032f7 has its CatchHandler @ 00a03388 */
  auVar3 = <std::time::[5]::std::time::SystemTime>::now();
  FUN_00a02064(&local_d8,pvVar2,unaff_x25);
  FUN_00a02834(&local_c8,pvVar2,unaff_x25);
  param_1[9] = lStack_80;
  param_1[8] = local_88;
  param_1[0xb] = lStack_70;
  param_1[10] = local_78;
  param_1[0xd] = lStack_60;
  param_1[0xc] = local_68;
  param_1[1] = lStack_c0;
  *param_1 = local_c8;
  param_1[3] = lStack_b0;
  param_1[2] = (long)local_b8;
  param_1[0xe] = local_58;
  param_1[0xf] = auVar3._0_8_;
  param_1[5] = lStack_a0;
  param_1[4] = local_a8;
  param_1[7] = lStack_90;
  param_1[6] = local_98;
  param_1[0x12] = lStack_d0;
  param_1[0x11] = local_d8;
  *(int *)(param_1 + 0x10) = auVar3._8_4_;
  if (0xfffffffffffffffd < lVar1 - 1U) {
    return;
  }
  free(unaff_x21);
  return;
}


// ===== 00a033b0  <chrono::naive::date::NaiveDateDaysIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDateDaysIterator as core::iter::traits::iterator::Iterator>::next */

uint __rustcall
<chrono::naive::date::NaiveDateDaysIterator_as_core::iter::traits::iterator::Iterator>::next
          (uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x1ff8) < 0x16d1) {
    *param_1 = (uVar2 & 0x1ff8) + 0x10 | uVar2 & 0xffffe007;
    return uVar2;
  }
  if (((int)uVar2 >> 0xd) - 0x3fffeU < 0xfff80002) {
    return 0;
  }
  iVar1 = ((int)uVar2 >> 0xd) + 1;
  iVar3 = iVar1 % 400;
  *param_1 = (uint)(byte)(&DAT_0037f93b)[(iVar3 >> 0x1f & 400U) + iVar3] | iVar1 * 0x2000 | 0x10;
  return uVar2;
}


// ===== 00a03448  <chrono::naive::date::NaiveDateDaysIterator_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDateDaysIterator as core::iter::traits::iterator::Iterator>::size_hint
    */

void __rustcall
<chrono::naive::date::NaiveDateDaysIterator_as_core::iter::traits::iterator::Iterator>::size_hint
          (long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)*param_2 >> 0xd;
  iVar5 = iVar4 % 400;
  iVar4 = (int)((ulong)((long)iVar4 * -0x51eb851f) >> 0x20);
  uVar1 = iVar5 >> 0x1f;
  uVar2 = (uVar1 & 400) + iVar5;
  lVar3 = ((ulong)((((iVar4 >> 7) - (iVar4 >> 0x1f)) - uVar1) + 0x28f) * 0x23ab1 -
          (ulong)(((*param_2 >> 4 & 0x1ff) + (uint)(byte)""[uVar2] + uVar2 * 0x16d) - 1)) + 0xcc05;
  *param_1 = lVar3;
  param_1[1] = 1;
  param_1[2] = lVar3;
  return;
}


// ===== 00a034d8  <chrono::naive::date::NaiveDateDaysIterator_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDateDaysIterator as
   core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

uint __rustcall
<chrono::naive::date::NaiveDateDaysIterator_as_core::iter::traits::double_ended::DoubleEndedIterator>
::next_back(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar4 = (uVar1 & 0x1ff0) - 0x10;
  if (0xf < (uVar1 & 0x1ff0) && uVar4 != 0) {
    *param_1 = uVar4 | uVar1 & 0xffffe00f;
    return uVar1;
  }
  if (-0x3ffff < (int)uVar1 >> 0xd) {
    iVar3 = ((int)uVar1 >> 0xd) + -1;
    iVar2 = iVar3 % 400;
    if (""[((ulong)(byte)(&DAT_0037f93b)[(iVar2 >> 0x1f & 400U) + iVar2] | 0x19f0) >> 3] != 0) {
      *param_1 = (int)((ulong)(byte)(&DAT_0037f93b)[(iVar2 >> 0x1f & 400U) + iVar2] | 0x19f0) +
                 ""[((ulong)(byte)(&DAT_0037f93b)[(iVar2 >> 0x1f & 400U) + iVar2] | 0x19f0) >> 3] *
                 -8 | iVar3 * 0x2000;
      return uVar1;
    }
  }
  return 0;
}


// ===== 00a03574  <chrono::naive::date::NaiveDateWeeksIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDateWeeksIterator as core::iter::traits::iterator::Iterator>::next */

int __rustcall
<chrono::naive::date::NaiveDateWeeksIterator_as_core::iter::traits::iterator::Iterator>::next
          (int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(iVar1,7);
  if (iVar2 != 0) {
    *param_1 = iVar2;
    return iVar1;
  }
  return 0;
}


// ===== 00a035c0  <chrono::naive::date::NaiveDateWeeksIterator_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDateWeeksIterator as
   core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<chrono::naive::date::NaiveDateWeeksIterator_as_core::iter::traits::iterator::Iterator>::size_hint
          (long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar3 = (int)*param_2 >> 0xd;
  iVar4 = iVar3 % 400;
  iVar3 = (int)((ulong)((long)iVar3 * -0x51eb851f) >> 0x20);
  uVar1 = iVar4 >> 0x1f;
  uVar2 = (uVar1 & 400) + iVar4;
  lVar5 = (long)(((ulong)((((iVar3 >> 7) - (iVar3 >> 0x1f)) - uVar1) + 0x28f) * 0x23ab1 -
                 (ulong)(((*param_2 >> 4 & 0x1ff) + (uint)(byte)""[uVar2] + uVar2 * 0x16d) - 1)) +
                0xcc05) / 7;
  *param_1 = lVar5;
  param_1[1] = 1;
  param_1[2] = lVar5;
  return;
}


// ===== 00a0366c  <chrono::naive::date::NaiveDateWeeksIterator_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDateWeeksIterator as
   core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

int __rustcall
<chrono::naive::date::NaiveDateWeeksIterator_as_core::iter::traits::double_ended::DoubleEndedIterator>
::next_back(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(iVar1,0xfffffff9);
  if (iVar2 != 0) {
    *param_1 = iVar2;
    return iVar1;
  }
  return 0;
}


// ===== 00a036b8  <chrono::naive::date::NaiveDate_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDate as core::fmt::Debug>::fmt */

undefined8 __rustcall
<chrono::naive::date::NaiveDate_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint local_54;
  uint *local_50;
  undefined *puStack_48;
  
  uVar1 = *param_1;
  uVar8 = (ulong)(uVar1 >> 3) & 0x3ff;
  local_54 = (int)uVar1 >> 0xd;
  if (0x2dc < (uint)uVar8) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar8,0x2dd,&PTR_s__root__cargo_registry_src_index__00af8b38);
  }
  bVar2 = (&DAT_0037f65e)[uVar8];
  if (local_54 >> 4 < 0x271) {
    uVar3 = (uVar1 >> 0xf & 0x3fff) / 0x19;
    uVar4 = uVar3 / 10 & 0x1f;
    uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar4 | 0x30);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char
                      (param_2,uVar3 + uVar4 * -10 & 0xff | 0x30);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar1 = (uVar1 >> 0xd) + uVar3 * -100;
    uVar3 = (uVar1 & 0xff) / 10;
    uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar3 | 0x30);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char
                      (param_2,uVar1 + uVar3 * -10 & 0xff | 0x30);
  }
  else {
    local_50 = &local_54;
    puStack_48 = PTR_fmt_00b00d18;
    uVar5 = core::fmt::write(*param_2,param_2[1],&DAT_002a1828,&local_50);
  }
  if (((uVar5 & 1) == 0) &&
     (uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x2d), (uVar5 & 1) == 0
     )) {
    uVar1 = (uint)uVar8 + (uint)bVar2;
    uVar7 = 0x30;
    if (0x27f < uVar1) {
      uVar7 = 0x31;
    }
    uVar8 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar7);
    if ((uVar8 & 1) == 0) {
      uVar3 = uVar1 >> 6;
      if (0x27f < uVar1) {
        uVar3 = (uVar1 >> 6) + 0xf6;
      }
      uVar8 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar3 & 0xff | 0x30);
      if (((uVar8 & 1) == 0) &&
         (uVar8 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x2d),
         (uVar8 & 1) == 0)) {
        uVar1 = uVar1 >> 1 & 0x1f;
        uVar8 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar1 / 10 | 0x30);
        if ((uVar8 & 1) == 0) {
          uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar1 % 10 | 0x30);
          return uVar6;
        }
      }
    }
  }
  return 1;
}


// ===== 00a038a4  <chrono::naive::date::NaiveDate_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDate as core::fmt::Display>::fmt */

void __rustcall <chrono::naive::date::NaiveDate_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b071e0)();
  return;
}


// ===== 00a038a8  <chrono::naive::date::NaiveDate_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDate as core::str::traits::FromStr>::from_str */

ulong __rustcall
<chrono::naive::date::NaiveDate_as_core::str::traits::FromStr>::from_str
          (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 local_d0 [2];
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_28;
  long local_20;
  byte local_18;
  undefined7 uStack_17;
  
  local_28 = 0xff;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_d0[0] = 0;
  local_30 = 0;
  FUN_00a05764(&local_20,local_d0,param_1,param_2,&DAT_00af8cf0,
               &PTR_s__root__cargo_registry_src_index__00af8db0);
  if ((local_20 != 0) && (CONCAT71(uStack_17,local_18) == 0)) {
    uVar1 = <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_date(local_d0);
    return (uVar1 >> 8 & 0xff) << 8 | uVar1 & 0xffffffffffff00ff;
  }
  uVar2 = 5;
  if (CONCAT71(uStack_17,local_18) == 0) {
    uVar2 = 0xffffffff;
  }
  if (local_20 == 0) {
    uVar2 = (uint)local_18;
  }
  return ((ulong)uVar2 & 0xff) << 8 | 1;
}


// ===== 00a03994  <chrono::naive::date::NaiveDate_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::NaiveDate as core::default::Default>::default */

undefined8 __rustcall <chrono::naive::date::NaiveDate_as_core::default::Default>::default(void)

{
  return 0xf6401a;
}


// ===== 00a039a0  FUN_00a039a0 =====

undefined1 * FUN_00a039a0(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  uVar2 = DAT_00b0f7c0;
  if (DAT_00b0f7c0 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b0f7c0);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)DAT_00b0f7c0);
  }
  if (&DAT_00000001 < puVar1) {
    return puVar1;
  }
  puVar1 = (undefined1 *)FUN_00a0dd24(uVar2 & 0xffffffff,puVar1,param_1);
  return puVar1;
}


// ===== 00a03a18  FUN_00a03a18 =====

undefined1  [16] FUN_00a03a18(byte *param_1,long param_2)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  pbVar9 = param_1 + param_2;
  pbVar7 = param_1;
  if (param_2 == 0) {
    pbVar8 = (byte *)0x0;
    pbVar5 = (byte *)0x0;
joined_r0x00a03b14:
    while (pbVar6 = pbVar9, pbVar7 != pbVar6) {
      pbVar9 = pbVar6 + -1;
      bVar1 = *pbVar9;
      uVar10 = (uint)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar9 = pbVar6 + -2;
        bVar2 = *pbVar9;
        if ((char)bVar2 + 0x40 < 0 == SCARRY4((int)(char)bVar2,0x40)) {
          uVar10 = (int)(char)bVar2 & 0x1f;
        }
        else {
          pbVar9 = pbVar6 + -3;
          bVar3 = *pbVar9;
          if ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)) {
            uVar10 = (int)(char)bVar3 & 0xf;
          }
          else {
            pbVar9 = pbVar6 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar9 & 7) << 6;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        uVar10 = (int)(char)bVar1 & 0x3fU | uVar10 << 6;
      }
      if ((0x20 < uVar10) || ((1L << ((ulong)uVar10 & 0x3f) & 0x100003600U) == 0)) {
        auVar12._8_8_ = pbVar6 + (long)(pbVar8 + (-(long)pbVar5 - (long)pbVar7));
        auVar12._0_8_ = param_1 + (long)pbVar5;
        return auVar12;
      }
    }
  }
  else {
    pbVar5 = (byte *)0x0;
    do {
      pbVar6 = pbVar7 + 1;
      uVar10 = (uint)*pbVar7;
      if ((char)*pbVar7 < '\0') {
        if (uVar10 < 0xe0) {
          uVar10 = pbVar7[1] & 0x3f | (uVar10 & 0x1f) << 6;
          pbVar6 = pbVar7 + 2;
          goto LAB_00a03aa0;
        }
        uVar4 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
        if (uVar10 < 0xf0) {
          uVar10 = uVar4 | (uVar10 & 0x1f) << 0xc;
          pbVar8 = pbVar7 + 3 + ((long)pbVar5 - (long)pbVar7);
          pbVar7 = pbVar7 + 3;
        }
        else {
          uVar10 = pbVar7[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12;
          pbVar8 = pbVar7 + 4 + ((long)pbVar5 - (long)pbVar7);
          pbVar7 = pbVar7 + 4;
        }
      }
      else {
LAB_00a03aa0:
        pbVar8 = pbVar6 + ((long)pbVar5 - (long)pbVar7);
        pbVar7 = pbVar6;
      }
      if ((0x20 < uVar10) || ((1L << ((ulong)uVar10 & 0x3f) & 0x100003600U) == 0))
      goto joined_r0x00a03b14;
      pbVar5 = pbVar8;
    } while (pbVar7 != pbVar9);
    pbVar5 = (byte *)0x0;
    pbVar8 = (byte *)0x0;
  }
  auVar11._8_8_ = (long)pbVar8 - (long)pbVar5;
  auVar11._0_8_ = param_1 + (long)pbVar5;
  return auVar11;
}


// ===== 00a03bc4  FUN_00a03bc4 =====

undefined1  [16] FUN_00a03bc4(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  pbVar3 = (byte *)0x0;
  pbVar4 = pbVar3;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_1;
    do {
      pbVar6 = pbVar5 + 1;
      uVar7 = (uint)*pbVar5;
      pbVar4 = pbVar3;
      if ((char)*pbVar5 < '\0') {
        if (uVar7 < 0xe0) {
          uVar7 = pbVar5[1] & 0x3f | (uVar7 & 0x1f) << 6;
          pbVar6 = pbVar5 + 2;
          goto LAB_00a03c80;
        }
        uVar2 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (uVar7 < 0xf0) {
          uVar2 = uVar2 | (uVar7 & 0x1f) << 0xc;
          uVar8 = (ulong)uVar2;
          pbVar6 = pbVar5 + 3;
          if (uVar2 < 0x21 && (1L << (uVar8 & 0x3f) & 0x100003e00U) != 0) break;
        }
        else {
          uVar7 = pbVar5[3] & 0x3f | uVar2 << 6 | (uVar7 & 7) << 0x12;
          uVar8 = (ulong)uVar7;
          pbVar6 = pbVar5 + 4;
          if (uVar7 < 0x21 && (1L << (uVar8 & 0x3f) & 0x100003e00U) != 0) break;
        }
      }
      else {
LAB_00a03c80:
        uVar8 = (ulong)uVar7;
        if (uVar7 < 0x21 && (1L << (uVar8 & 0x3f) & 0x100003e00U) != 0) break;
      }
      uVar7 = (uint)uVar8;
      if (0x84 < uVar7) {
        uVar2 = uVar7 >> 8;
        if (uVar2 < 0x20) {
          if (uVar2 == 0) {
            bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar8 & 0xff];
joined_r0x00a03d0c:
            if ((bVar1 & 1) != 0) break;
          }
          else if ((uVar2 == 0x16) && (uVar7 == 0x1680)) break;
        }
        else {
          if (uVar2 == 0x20) {
            bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar8 & 0xff] >> 1;
            goto joined_r0x00a03d0c;
          }
          if ((uVar2 == 0x30) && (uVar7 == 0x3000)) break;
        }
      }
      pbVar3 = pbVar6 + ((long)pbVar3 - (long)pbVar5);
      pbVar4 = param_2;
      pbVar5 = pbVar6;
    } while (pbVar6 != param_1 + (long)param_2);
  }
  auVar9._8_8_ = (long)param_2 - (long)pbVar4;
  auVar9._0_8_ = param_1 + (long)pbVar4;
  return auVar9;
}


// ===== 00a03d24  FUN_00a03d24 =====

undefined1  [16] FUN_00a03d24(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  
  pbVar4 = (byte *)0x0;
  pbVar5 = pbVar4;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_1;
    do {
      pbVar7 = pbVar6 + 1;
      uVar1 = (uint)*pbVar6;
      if ((char)*pbVar6 < '\0') {
        if (uVar1 < 0xe0) {
          uVar1 = pbVar6[1] & 0x3f | (uVar1 & 0x1f) << 6;
          pbVar7 = pbVar6 + 2;
        }
        else {
          uVar3 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar1 < 0xf0) {
            uVar1 = uVar3 | (uVar1 & 0x1f) << 0xc;
            pbVar7 = pbVar6 + 3;
          }
          else {
            uVar1 = pbVar6[3] & 0x3f | uVar3 << 6 | (uVar1 & 7) << 0x12;
            pbVar7 = pbVar6 + 4;
          }
        }
      }
      if (((uVar1 != 0x20) && (uVar1 != 0x3a)) && (4 < uVar1 - 9)) {
        pbVar5 = pbVar4;
        if (uVar1 < 0x85) break;
        uVar3 = uVar1 >> 8;
        if (uVar3 < 0x20) {
          if (uVar3 == 0) {
            bVar2 = PTR_WHITESPACE_MAP_00b00d70[(ulong)uVar1 & 0xff];
joined_r0x00a03d4c:
            if ((bVar2 & 1) == 0) break;
          }
          else if ((uVar3 != 0x16) || (uVar1 != 0x1680)) break;
        }
        else {
          if (uVar3 == 0x20) {
            bVar2 = (byte)PTR_WHITESPACE_MAP_00b00d70[(ulong)uVar1 & 0xff] >> 1;
            goto joined_r0x00a03d4c;
          }
          if ((uVar3 != 0x30) || (uVar1 != 0x3000)) break;
        }
      }
      pbVar4 = pbVar7 + ((long)pbVar4 - (long)pbVar6);
      pbVar5 = param_2;
      pbVar6 = pbVar7;
    } while (pbVar7 != param_1 + (long)param_2);
  }
  auVar8._8_8_ = (long)param_2 - (long)pbVar5;
  auVar8._0_8_ = param_1 + (long)pbVar5;
  return auVar8;
}


// ===== 00a03e5c  FUN_00a03e5c =====

undefined1  [16] FUN_00a03e5c(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  pbVar3 = (byte *)0x0;
  pbVar4 = pbVar3;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_1;
    do {
      pbVar6 = pbVar5 + 1;
      uVar7 = (uint)*pbVar5;
      uVar8 = (ulong)uVar7;
      if ((char)*pbVar5 < '\0') {
        if (uVar7 < 0xe0) {
          pbVar6 = pbVar5 + 2;
          uVar8 = (ulong)(pbVar5[1] & 0x3f | (uVar7 & 0x1f) << 6);
        }
        else {
          uVar2 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
          if (uVar7 < 0xf0) {
            uVar8 = (ulong)(uVar2 | (uVar7 & 0x1f) << 0xc);
            pbVar6 = pbVar5 + 3;
          }
          else {
            uVar8 = (ulong)(pbVar5[3] & 0x3f | uVar2 << 6 | (uVar7 & 7) << 0x12);
            pbVar6 = pbVar5 + 4;
          }
        }
      }
      uVar7 = (uint)uVar8;
      if ((4 < uVar7 - 9) && (uVar7 != 0x20)) {
        pbVar4 = pbVar3;
        if (uVar7 < 0x85) break;
        uVar2 = uVar7 >> 8;
        if (uVar2 < 0x20) {
          if (uVar2 == 0) {
            bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar8 & 0xff];
joined_r0x00a03f68:
            if ((bVar1 & 1) == 0) break;
          }
          else if ((uVar2 != 0x16) || (uVar7 != 0x1680)) break;
        }
        else {
          if (uVar2 == 0x20) {
            bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar8 & 0xff] >> 1;
            goto joined_r0x00a03f68;
          }
          if ((uVar2 != 0x30) || (uVar7 != 0x3000)) break;
        }
      }
      pbVar3 = pbVar6 + ((long)pbVar3 - (long)pbVar5);
      pbVar4 = param_2;
      pbVar5 = pbVar6;
    } while (pbVar6 != param_1 + (long)param_2);
  }
  auVar9._8_8_ = (long)param_2 - (long)pbVar4;
  auVar9._0_8_ = param_1 + (long)pbVar4;
  return auVar9;
}


// ===== 00a03f80  FUN_00a03f80 =====

void FUN_00a03f80(int *param_1,uint *param_2,undefined8 *param_3,long param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_4 < 0) {
    if (0 < param_5) {
      param_4 = param_4 + 1;
    }
    lVar5 = param_4 * 1000000000;
    if (SUB168(SEXT816(param_4) * SEXT816(1000000000),8) != lVar5 >> 0x3f) goto LAB_00a04014;
    iVar3 = param_5 + -1000000000;
    if (param_5 < 1) {
      iVar3 = param_5;
    }
    uVar4 = lVar5 + iVar3;
    if (SCARRY8(lVar5,(long)iVar3)) goto LAB_00a04014;
  }
  else {
    lVar5 = param_4 * 1000000000;
    if ((SUB168(SEXT816(param_4) * SEXT816(1000000000),8) != lVar5 >> 0x3f) ||
       (uVar4 = lVar5 + param_5, SCARRY8(lVar5,(long)param_5))) goto LAB_00a04014;
  }
  if ((long)uVar4 < 1) {
LAB_00a04014:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return;
  }
  iVar3 = (int)*param_2 >> 0xd;
  iVar8 = iVar3 + -1;
  if (iVar3 < 1) {
    iVar3 = (1U - iVar3) / 400 + 1;
    iVar8 = iVar8 + iVar3 * 400;
    iVar3 = iVar3 * -0x23ab1;
  }
  else {
    iVar3 = 0;
  }
  lVar7 = (ulong)param_2[1] +
          (long)(int)((((*param_2 >> 4 & 0x1ff) + iVar3) - iVar8 / 100) + (iVar8 * 0x5b5 >> 2) +
                      (iVar8 / 100 >> 2) + -0xaf93b) * 0x15180;
  lVar5 = lVar7 - (lVar7 >> 0x3f);
  uVar2 = (ulong)param_2[2] - 1000000000;
  if (-1 < lVar7) {
    uVar2 = (ulong)param_2[2];
  }
  lVar7 = lVar5 * 1000000000;
  if ((SUB168(SEXT816(lVar5) * SEXT816(1000000000),8) != lVar7 >> 0x3f) || (SCARRY8(lVar7,uVar2))) {
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 0;
    return;
  }
  lVar5 = 0;
  if (uVar4 != 0) {
    lVar5 = (long)(lVar7 + uVar2) / (long)uVar4;
  }
  lVar5 = (lVar7 + uVar2) - lVar5 * uVar4;
  if (lVar5 == 0) {
    iVar3 = *(int *)(param_3 + 1);
    *(undefined8 *)param_1 = *param_3;
    param_1[2] = iVar3;
    return;
  }
  uVar2 = 0;
  if (-1 < lVar5) {
    uVar2 = uVar4;
  }
  uVar10 = (ulong)*(uint *)((long)param_3 + 4);
  lVar7 = (uVar4 & lVar5 >> 0x3f) + lVar5;
  lVar5 = uVar2 - lVar5;
  uVar6 = *(uint *)(param_3 + 1);
  if (lVar5 <= lVar7) {
    lVar9 = lVar5 % 1000000000;
    lVar5 = lVar5 / 1000000000 + (lVar9 >> 0x3f);
    lVar7 = lVar9 + 1000000000;
    if (-1 < lVar9) {
      lVar7 = lVar9;
    }
    uVar1 = (uint)(lVar5 < 0 && lVar7 != 0);
    iVar3 = (int)lVar7 + -1000000000;
    if (uVar1 == 0) {
      iVar3 = (int)lVar7;
    }
    lVar5 = lVar5 + (ulong)uVar1;
    if ((int)uVar6 < 1000000000) {
LAB_00a042cc:
      uVar6 = uVar6 + iVar3;
      lVar5 = uVar10 + lVar5;
      if ((int)uVar6 < 0) {
LAB_00a04384:
        lVar5 = lVar5 + -1;
        uVar6 = uVar6 + 1000000000;
      }
      else {
LAB_00a042d8:
        if (999999999 < uVar6) {
          lVar5 = lVar5 + 1;
          uVar6 = uVar6 + 0xc4653600;
        }
      }
      uVar10 = (lVar5 % 0x15180 >> 0x3f & 0x15180U) + lVar5 % 0x15180;
      uVar4 = SUB168(SEXT816((long)(lVar5 - uVar10)) * SEXT816(0x1845c8a0ce512957),8);
      lVar5 = (uVar4 >> 0xd) - ((long)uVar4 >> 0x3f);
    }
    else {
      if ((0 < lVar5) || (0 < iVar3 && 2000000000U - iVar3 <= uVar6)) {
        uVar6 = uVar6 + 0xc4653600;
        goto LAB_00a042cc;
      }
      if (lVar5 < 0) {
        uVar6 = uVar6 + 0xc4653600 + iVar3;
        lVar5 = uVar10 + 1 + lVar5;
        if (-1 < (int)uVar6) goto LAB_00a042d8;
        goto LAB_00a04384;
      }
      lVar5 = 0;
      uVar6 = uVar6 + iVar3;
    }
    iVar8 = (int)uVar10;
    iVar3 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days
                      (*(undefined4 *)param_3,lVar5);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_003802b2,0x26,&PTR_s__root__cargo_registry_src_index__00af8dc8);
    }
    goto LAB_00a043dc;
  }
  lVar9 = SUB168(SEXT816(lVar7) * SEXT816(-0x112e0be826d694b3),8);
  lVar7 = lVar7 % 1000000000;
  lVar5 = lVar7 + 1000000000;
  if (-1 < lVar7) {
    lVar5 = lVar7;
  }
  iVar3 = 0;
  if (lVar5 != 0) {
    iVar3 = 1000000000 - (int)lVar5;
  }
  lVar5 = (((lVar9 >> 0x1a) - (lVar9 >> 0x3f)) - (lVar7 >> 0x3f)) - (ulong)(lVar5 != 0);
  uVar1 = (uint)(0 < iVar3 && lVar5 < 0);
  iVar8 = iVar3 + -1000000000;
  if (uVar1 == 0) {
    iVar8 = iVar3;
  }
  lVar5 = lVar5 + (ulong)uVar1;
  if ((int)uVar6 < 1000000000) {
LAB_00a042a8:
    uVar6 = uVar6 + iVar8;
    lVar5 = uVar10 + lVar5;
    if ((int)uVar6 < 0) {
LAB_00a04300:
      lVar5 = lVar5 + -1;
      uVar6 = uVar6 + 1000000000;
    }
    else {
LAB_00a042b4:
      if (999999999 < uVar6) {
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 + 0xc4653600;
      }
    }
    uVar10 = (lVar5 % 0x15180 >> 0x3f & 0x15180U) + lVar5 % 0x15180;
    uVar4 = SUB168(SEXT816((long)(lVar5 - uVar10)) * SEXT816(0x1845c8a0ce512957),8);
    lVar5 = (uVar4 >> 0xd) - ((long)uVar4 >> 0x3f);
  }
  else {
    if ((0 < lVar5) || (0 < iVar8 && 2000000000U - iVar8 <= uVar6)) {
      uVar6 = uVar6 + 0xc4653600;
      goto LAB_00a042a8;
    }
    if (lVar5 < 0) {
      uVar6 = uVar6 + 0xc4653600 + iVar8;
      lVar5 = uVar10 + 1 + lVar5;
      if (-1 < (int)uVar6) goto LAB_00a042b4;
      goto LAB_00a04300;
    }
    lVar5 = 0;
    uVar6 = uVar6 + iVar8;
  }
  iVar8 = (int)uVar10;
  iVar3 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days
                    (*(undefined4 *)param_3,lVar5);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_003802d8,0x26,&PTR_s__root__cargo_registry_src_index__00af8de0)
    ;
  }
LAB_00a043dc:
  *param_1 = iVar3;
  param_1[1] = iVar8;
  param_1[2] = uVar6;
  return;
}


// ===== 00a0440c  FUN_00a0440c =====

void FUN_00a0440c(int *param_1,uint *param_2,undefined8 *param_3,long param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  if (param_4 < 0) {
    if (0 < param_5) {
      param_4 = param_4 + 1;
    }
    lVar6 = param_4 * 1000000000;
    if (SUB168(SEXT816(param_4) * SEXT816(1000000000),8) != lVar6 >> 0x3f) goto LAB_00a044a0;
    iVar4 = param_5 + -1000000000;
    if (param_5 < 1) {
      iVar4 = param_5;
    }
    lVar7 = lVar6 + iVar4;
    if (SCARRY8(lVar6,(long)iVar4)) goto LAB_00a044a0;
  }
  else {
    lVar6 = param_4 * 1000000000;
    if ((SUB168(SEXT816(param_4) * SEXT816(1000000000),8) != lVar6 >> 0x3f) ||
       (lVar7 = lVar6 + param_5, SCARRY8(lVar6,(long)param_5))) goto LAB_00a044a0;
  }
  if (lVar7 < 1) {
LAB_00a044a0:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return;
  }
  iVar4 = (int)*param_2 >> 0xd;
  iVar11 = iVar4 + -1;
  if (iVar4 < 1) {
    iVar4 = (1U - iVar4) / 400 + 1;
    iVar11 = iVar11 + iVar4 * 400;
    iVar4 = iVar4 * -0x23ab1;
  }
  else {
    iVar4 = 0;
  }
  lVar10 = (ulong)param_2[1] +
           (long)(int)((((*param_2 >> 4 & 0x1ff) + iVar4) - iVar11 / 100) + (iVar11 * 0x5b5 >> 2) +
                       (iVar11 / 100 >> 2) + -0xaf93b) * 0x15180;
  lVar6 = lVar10 - (lVar10 >> 0x3f);
  uVar8 = (ulong)param_2[2] - 1000000000;
  if (-1 < lVar10) {
    uVar8 = (ulong)param_2[2];
  }
  lVar10 = lVar6 * 1000000000;
  if ((SUB168(SEXT816(lVar6) * SEXT816(1000000000),8) != lVar10 >> 0x3f) || (SCARRY8(lVar10,uVar8)))
  {
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 0;
    return;
  }
  lVar6 = 0;
  if (lVar7 != 0) {
    lVar6 = (long)(lVar10 + uVar8) / lVar7;
  }
  lVar6 = (lVar10 + uVar8) - lVar6 * lVar7;
  cVar1 = 0 < lVar6;
  if (lVar6 < 0) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') {
    iVar4 = *(int *)(param_3 + 1);
    *(undefined8 *)param_1 = *param_3;
    param_1[2] = iVar4;
    return;
  }
  if (cVar1 == '\x01') {
    uVar3 = *(undefined4 *)param_3;
    lVar10 = SUB168(SEXT816(lVar6) * SEXT816(-0x112e0be826d694b3),8);
    lVar6 = lVar6 % 1000000000;
    lVar7 = lVar6 + 1000000000;
    if (-1 < lVar6) {
      lVar7 = lVar6;
    }
    iVar4 = 0;
    if (lVar7 != 0) {
      iVar4 = 1000000000 - (int)lVar7;
    }
    lVar6 = (((lVar10 >> 0x1a) - (lVar10 >> 0x3f)) - (lVar6 >> 0x3f)) - (ulong)(lVar7 != 0);
    uVar2 = (uint)(0 < iVar4 && lVar6 < 0);
    uVar8 = (ulong)*(uint *)((long)param_3 + 4);
    uVar9 = *(uint *)(param_3 + 1);
    iVar11 = iVar4 + -1000000000;
    if (uVar2 == 0) {
      iVar11 = iVar4;
    }
    lVar6 = lVar6 + (ulong)uVar2;
    if (999999999 < (int)uVar9) {
      if ((0 < lVar6) || (0 < iVar11 && 2000000000U - iVar11 <= uVar9)) goto LAB_00a04784;
joined_r0x00a04774:
      if (-1 < lVar6) {
        lVar6 = 0;
        uVar9 = uVar9 + iVar11;
        goto LAB_00a047f8;
      }
      uVar9 = uVar9 + 0xc4653600;
      uVar8 = uVar8 + 1;
    }
  }
  else {
    uVar3 = *(undefined4 *)param_3;
    lVar10 = -lVar6;
    if (-1 < lVar6) {
      lVar10 = lVar6;
    }
    lVar12 = SUB168(SEXT816(lVar7 - lVar10) * SEXT816(-0x112e0be826d694b3),8);
    lVar7 = (lVar7 - lVar10) % 1000000000;
    lVar6 = lVar7 + 1000000000;
    if (-1 < lVar7) {
      lVar6 = lVar7;
    }
    iVar4 = 0;
    if (lVar6 != 0) {
      iVar4 = 1000000000 - (int)lVar6;
    }
    lVar6 = (((lVar12 >> 0x1a) - (lVar12 >> 0x3f)) - (lVar7 >> 0x3f)) - (ulong)(lVar6 != 0);
    uVar2 = (uint)(0 < iVar4 && lVar6 < 0);
    uVar8 = (ulong)*(uint *)((long)param_3 + 4);
    uVar9 = *(uint *)(param_3 + 1);
    iVar11 = iVar4 + -1000000000;
    if (uVar2 == 0) {
      iVar11 = iVar4;
    }
    lVar6 = lVar6 + (ulong)uVar2;
    if (999999999 < (int)uVar9) {
      if ((lVar6 < 1) && (iVar11 < 1 || uVar9 < 2000000000U - iVar11)) goto joined_r0x00a04774;
LAB_00a04784:
      uVar9 = uVar9 + 0xc4653600;
    }
  }
  uVar9 = uVar9 + iVar11;
  lVar6 = uVar8 + lVar6;
  if ((int)uVar9 < 0) {
    lVar6 = lVar6 + -1;
    uVar9 = uVar9 + 1000000000;
  }
  else if (999999999 < uVar9) {
    lVar6 = lVar6 + 1;
    uVar9 = uVar9 + 0xc4653600;
  }
  uVar8 = (lVar6 % 0x15180 >> 0x3f & 0x15180U) + lVar6 % 0x15180;
  uVar5 = SUB168(SEXT816((long)(lVar6 - uVar8)) * SEXT816(0x1845c8a0ce512957),8);
  lVar6 = (uVar5 >> 0xd) - ((long)uVar5 >> 0x3f);
LAB_00a047f8:
  iVar4 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(uVar3,lVar6);
  if (iVar4 != 0) {
    *param_1 = iVar4;
    param_1[1] = (int)uVar8;
    param_1[2] = uVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_003802d8,0x26,&PTR_s__root__cargo_registry_src_index__00af8de0);
}


// ===== 00a04830  FUN_00a04830 =====

void FUN_00a04830(int *param_1,uint *param_2,undefined8 *param_3,long param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar4;
  
  if (param_4 < 0) {
    if (0 < param_5) {
      param_4 = param_4 + 1;
    }
    lVar6 = param_4 * 1000000000;
    if (SUB168(SEXT816(param_4) * SEXT816(1000000000),8) != lVar6 >> 0x3f) goto LAB_00a048c4;
    iVar3 = param_5 + -1000000000;
    if (param_5 < 1) {
      iVar3 = param_5;
    }
    lVar7 = lVar6 + iVar3;
    if (SCARRY8(lVar6,(long)iVar3)) goto LAB_00a048c4;
  }
  else {
    lVar6 = param_4 * 1000000000;
    if ((SUB168(SEXT816(param_4) * SEXT816(1000000000),8) != lVar6 >> 0x3f) ||
       (lVar7 = lVar6 + param_5, SCARRY8(lVar6,(long)param_5))) goto LAB_00a048c4;
  }
  if (lVar7 < 1) {
LAB_00a048c4:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return;
  }
  iVar3 = (int)*param_2 >> 0xd;
  iVar10 = iVar3 + -1;
  if (iVar3 < 1) {
    iVar3 = (1U - iVar3) / 400 + 1;
    iVar10 = iVar10 + iVar3 * 400;
    iVar3 = iVar3 * -0x23ab1;
  }
  else {
    iVar3 = 0;
  }
  lVar9 = (ulong)param_2[1] +
          (long)(int)((((*param_2 >> 4 & 0x1ff) + iVar3) - iVar10 / 100) + (iVar10 * 0x5b5 >> 2) +
                      (iVar10 / 100 >> 2) + -0xaf93b) * 0x15180;
  lVar6 = lVar9 - (lVar9 >> 0x3f);
  uVar8 = (ulong)param_2[2] - 1000000000;
  if (-1 < lVar9) {
    uVar8 = (ulong)param_2[2];
  }
  lVar9 = lVar6 * 1000000000;
  if ((SUB168(SEXT816(lVar6) * SEXT816(1000000000),8) != lVar9 >> 0x3f) || (SCARRY8(lVar9,uVar8))) {
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 0;
    return;
  }
  lVar6 = 0;
  if (lVar7 != 0) {
    lVar6 = (long)(lVar9 + uVar8) / lVar7;
  }
  uVar8 = (lVar9 + uVar8) - lVar6 * lVar7;
  cVar1 = 0 < (long)uVar8;
  if ((long)uVar8 < 0) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_3 + 1);
    *(undefined8 *)param_1 = *param_3;
    param_1[2] = iVar3;
    return;
  }
  if (cVar1 == '\x01') {
    uVar4 = *(undefined4 *)param_3;
    lVar9 = (long)(lVar7 - uVar8) % 1000000000;
    lVar6 = (long)(lVar7 - uVar8) / 1000000000 + (lVar9 >> 0x3f);
    lVar7 = lVar9 + 1000000000;
    if (-1 < lVar9) {
      lVar7 = lVar9;
    }
    uVar2 = (uint)(lVar6 < 0 && lVar7 != 0);
    uVar8 = (ulong)*(uint *)((long)param_3 + 4);
    uVar11 = *(uint *)(param_3 + 1);
    iVar3 = (int)lVar7 + -1000000000;
    if (uVar2 == 0) {
      iVar3 = (int)lVar7;
    }
    lVar6 = lVar6 + (ulong)uVar2;
    if (999999999 < (int)uVar11) {
      if ((lVar6 < 1) && (iVar3 < 1 || uVar11 < 2000000000U - iVar3)) {
        if (-1 < lVar6) {
          lVar6 = 0;
          uVar11 = uVar11 + iVar3;
          goto LAB_00a04bd8;
        }
        uVar11 = uVar11 + 0xc4653600;
        uVar8 = uVar8 + 1;
      }
      else {
        uVar11 = uVar11 + 0xc4653600;
      }
    }
    uVar11 = uVar11 + iVar3;
    lVar6 = uVar8 + lVar6;
    if ((int)uVar11 < 0) {
      lVar6 = lVar6 + -1;
      uVar11 = uVar11 + 1000000000;
    }
    else if (999999999 < uVar11) {
      lVar6 = lVar6 + 1;
      uVar11 = uVar11 + 0xc4653600;
    }
  }
  else {
    uVar4 = *(undefined4 *)param_3;
    uVar5 = -uVar8;
    if (-1 < (long)uVar8) {
      uVar5 = uVar8;
    }
    uVar8 = (ulong)*(uint *)((long)param_3 + 4);
    uVar11 = *(uint *)(param_3 + 1);
    iVar3 = (int)(uVar5 % 1000000000);
    if (999999999 < (int)uVar11) {
      if ((uVar5 < 1000000000) && (uVar5 % 1000000000 == 0 || uVar11 < 2000000000U - iVar3)) {
        lVar6 = 0;
        uVar11 = uVar11 + iVar3;
        goto LAB_00a04bd8;
      }
      uVar11 = uVar11 + 0xc4653600;
    }
    uVar11 = uVar11 + iVar3;
    lVar6 = uVar5 / 1000000000 + uVar8;
    if ((int)uVar11 < 0) {
      lVar6 = lVar6 + -1;
      uVar11 = uVar11 + 1000000000;
    }
    else if (999999999 < uVar11) {
      lVar6 = lVar6 + 1;
      uVar11 = uVar11 + 0xc4653600;
    }
  }
  uVar8 = (lVar6 % 0x15180 >> 0x3f & 0x15180U) + lVar6 % 0x15180;
  uVar5 = SUB168(SEXT816((long)(lVar6 - uVar8)) * SEXT816(0x1845c8a0ce512957),8);
  lVar6 = (uVar5 >> 0xd) - ((long)uVar5 >> 0x3f);
LAB_00a04bd8:
  iVar3 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(uVar4,lVar6);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    param_1[1] = (int)uVar8;
    param_1[2] = uVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_003802b2,0x26,&PTR_s__root__cargo_registry_src_index__00af8dc8);
}


// ===== 00a04c10  FUN_00a04c10 =====

void FUN_00a04c10(long *param_1)

{
  void *__ptr;
  long lVar1;
  long *plVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (long *)((long)__ptr + 0x10);
    do {
      if ((((char)plVar2[-2] == '\x01') || ((char)plVar2[-2] == '\x03')) && (*plVar2 != 0)) {
        free((void *)plVar2[-1]);
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a04ca4  FUN_00a04ca4 =====

void FUN_00a04ca4(char *param_1)

{
  if (((*param_1 == '\x01') || (*param_1 == '\x03')) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 00a04cd0  FUN_00a04cd0 =====

void FUN_00a04cd0(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a04d18  FUN_00a04d18 =====

void FUN_00a04d18(long *param_1,undefined8 *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 unaff_x20;
  long lVar10;
  undefined8 unaff_x21;
  char unaff_w25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  char local_164 [4];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char *local_140;
  long local_130;
  undefined8 *local_128;
  long local_120;
  char local_118;
  char cStack_117;
  uint uStack_116;
  undefined2 uStack_112;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char *local_e0;
  uint local_d0;
  undefined2 local_cc;
  char local_c8;
  char cStack_c7;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined2 local_ac;
  uint local_a8;
  undefined2 local_a4;
  uint local_90;
  undefined2 local_8c;
  char local_88;
  char local_87;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uStack_158 = param_2[1];
  local_160 = *param_2;
  uStack_148 = param_2[3];
  uStack_150 = param_2[2];
  local_164[0] = -1;
  local_140 = local_164;
  cVar5 = <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
                    (&local_88,&local_160);
  if (local_88 != -1) {
    if (local_88 == '\x06') {
      uVar3 = unaff_x20;
      uVar4 = unaff_x21;
      cVar7 = '\x06';
    }
    else {
      cVar5 = <chrono::format::chrono::format::Item>::to_owned(&local_100,&local_88);
      uVar3 = unaff_x20;
      uVar4 = unaff_x21;
      cVar7 = local_100._1_1_;
      if ((char)local_100 != -1) {
        do {
          cVar5 = local_100._1_1_;
          uVar4 = uStack_f0;
          uVar3 = uStack_f8;
          local_a8 = *(uint *)((ulong)&local_100 | 2);
          local_a4 = (undefined2)((uint *)((ulong)&local_100 | 2))[1];
          local_118 = (char)local_100;
          cStack_117 = cVar5;
          if ((char)local_100 != -2) goto LAB_00a04da8;
          <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
                    (&local_88,&local_160);
          if (local_88 == -1) goto LAB_00a04dc0;
          if (local_88 == '\x06') {
            cVar7 = '\x06';
            break;
          }
          <chrono::format::chrono::format::Item>::to_owned(&local_100,&local_88);
          cVar7 = local_100._1_1_;
        } while ((char)local_100 != -1);
      }
    }
    local_164[0] = cVar7;
    uStack_f0 = uVar4;
    uStack_f8 = uVar3;
    local_118 = -1;
    cStack_117 = cVar5;
LAB_00a04da8:
    local_c8 = (char)local_a8;
    cStack_c7 = (char)(local_a8 >> 8);
    uStack_c6 = (undefined2)(local_a8 >> 0x10);
    uStack_c4 = local_a4;
    if (local_118 != -1) {
      uStack_116 = local_a8;
      local_8c = local_a4;
      uStack_112 = local_a4;
      uStack_110 = uStack_f8;
      local_108 = uStack_f0;
      local_90 = uStack_116;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar6 = (undefined8 *)FUN_004b25a4(0x60,8);
      if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 00a050b4 to 00a050bf has its CatchHandler @ 00a050c4 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(8,0x60);
      }
      local_130 = 4;
      puVar6[2] = local_108;
      puVar6[1] = uStack_110;
      *puVar6 = CONCAT26(uStack_112,CONCAT42(uStack_116,CONCAT11(cStack_117,local_118)));
      local_e0 = local_140;
      local_120 = 1;
      uStack_f8 = uStack_158;
      local_100 = local_160;
      uStack_e8 = uStack_148;
      uStack_f0 = uStack_150;
      local_128 = puVar6;
      while( true ) {
        pcVar2 = local_e0;
        lVar10 = local_120;
                    /* try { // try from 00a04e94 to 00a04e9f has its CatchHandler @ 00a050f4 */
        <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
                  (&local_a8,&local_100);
        if ((local_a8 & 0xff) == 0xff) break;
        if ((local_a8 & 0xff) == 6) {
          cVar5 = '\x06';
        }
        else {
          do {
                    /* try { // try from 00a04f2c to 00a04f6f has its CatchHandler @ 00a05108 */
            <chrono::format::chrono::format::Item>::to_owned(&local_88,&local_a8);
            uVar4 = uStack_78;
            uVar3 = local_80;
            cVar5 = local_87;
            if (local_88 == -1) goto LAB_00a04eb8;
            local_90 = *(uint *)((ulong)&local_88 | 2);
            local_8c = (undefined2)((uint *)((ulong)&local_88 | 2))[1];
            unaff_x26 = local_80;
            unaff_x27 = uStack_78;
            cVar7 = local_88;
            if (local_88 != -2) goto LAB_00a04ec4;
            <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::
            next(&local_a8,&local_100);
            if ((local_a8 & 0xff) == 0xff) goto LAB_00a04f94;
            unaff_x26 = uVar3;
            unaff_x27 = uVar4;
            unaff_w25 = cVar5;
          } while ((local_a8 & 0xff) != 6);
          cVar5 = '\x06';
        }
LAB_00a04eb8:
        *pcVar2 = cVar5;
        cVar7 = -1;
        cVar5 = unaff_w25;
LAB_00a04ec4:
        local_b0 = local_90;
        local_ac = local_8c;
        if (cVar7 == -1) break;
        local_d0 = local_90;
        local_cc = local_8c;
        *(uint *)((ulong)&local_c8 | 2) = local_90;
        *(undefined2 *)((uint *)((ulong)&local_c8 | 2) + 1) = local_8c;
        local_c8 = cVar7;
        cStack_c7 = cVar5;
        uStack_c0 = unaff_x26;
        local_b8 = unaff_x27;
        if (lVar10 == local_130) {
                    /* try { // try from 00a04f0c to 00a04f23 has its CatchHandler @ 00a050d8 */
          FUN_00a0c45c(&local_130,lVar10,1,8,0x18);
          puVar6 = local_128;
        }
        puVar8 = puVar6 + lVar10 * 3;
        local_120 = lVar10 + 1;
        puVar8[2] = local_b8;
        puVar8[1] = uStack_c0;
        *puVar8 = CONCAT26(uStack_c2,
                           CONCAT24(uStack_c4,CONCAT22(uStack_c6,CONCAT11(cStack_c7,local_c8))));
      }
LAB_00a04f94:
      puVar6 = local_128;
      lVar1 = local_130;
      if (local_164[0] != -1) {
        plVar9 = local_128 + 2;
        *(char *)(param_1 + 1) = local_164[0];
        *param_1 = -1;
        do {
          if ((((char)plVar9[-2] == '\x01') || ((char)plVar9[-2] == '\x03')) && (*plVar9 != 0)) {
            free((void *)plVar9[-1]);
          }
          lVar10 = lVar10 + -1;
          plVar9 = plVar9 + 3;
        } while (lVar10 != 0);
        if (lVar1 == 0) {
          return;
        }
        free(puVar6);
        return;
      }
      goto LAB_00a05080;
    }
  }
LAB_00a04dc0:
  if (local_164[0] != -1) {
    *(char *)(param_1 + 1) = local_164[0];
    *param_1 = -1;
    return;
  }
  local_130 = 0;
  lVar10 = 0;
  local_128 = (undefined8 *)&DAT_00000008;
LAB_00a05080:
  *param_1 = local_130;
  param_1[1] = (long)local_128;
  param_1[2] = lVar10;
  return;
}


// ===== 00a0511c  FUN_00a0511c =====

void FUN_00a0511c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 *__ptr;
  long *plVar3;
  long lVar4;
  long lVar5;
  char local_124 [4];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char *local_100;
  long local_f0;
  undefined8 *local_e8;
  long local_e0;
  char local_d8;
  undefined1 uStack_d7;
  uint uStack_d6;
  undefined2 uStack_d2;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined4 local_98;
  undefined2 local_94;
  char local_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uStack_118 = param_2[1];
  local_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  local_124[0] = -1;
  local_100 = local_124;
  <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
            (&local_c0,&local_120);
  if ((char)local_c0 == -1) {
    local_c0._0_1_ = local_124[0];
    if (local_124[0] != -1) goto LAB_00a052b0;
    local_f0 = 0;
    lVar4 = 0;
    __ptr = (undefined8 *)&DAT_00000008;
  }
  else {
    if ((char)local_c0 == '\x06') {
LAB_00a052b0:
      *(char *)(param_1 + 1) = (char)local_c0;
      *param_1 = -1;
      return;
    }
    local_d8 = (char)local_c0;
    local_78 = local_c0._2_4_;
    uStack_d7 = local_c0._1_1_;
    uStack_d6 = local_c0._2_4_;
    local_74 = local_c0._6_2_;
    uStack_d2 = local_c0._6_2_;
    uStack_d0 = uStack_b8;
    local_c8 = uStack_b0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __ptr = (undefined8 *)FUN_004b25a4(0x60,8);
    if (__ptr == (undefined8 *)0x0) {
                    /* try { // try from 00a05370 to 00a0537b has its CatchHandler @ 00a05380 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x60);
    }
    local_f0 = 4;
    __ptr[2] = local_c8;
    __ptr[1] = uStack_d0;
    *__ptr = CONCAT26(uStack_d2,CONCAT42(uStack_d6,CONCAT11(uStack_d7,local_d8)));
    local_a0 = local_100;
    lVar5 = 0x18;
    uStack_b8 = uStack_118;
    local_c0 = local_120;
    uStack_a8 = uStack_108;
    uStack_b0 = uStack_110;
    local_e0 = 1;
    local_e8 = __ptr;
    while( true ) {
      pcVar2 = local_a0;
      lVar4 = local_e0;
                    /* try { // try from 00a05230 to 00a0523b has its CatchHandler @ 00a053b0 */
      <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
                (&local_78,&local_c0);
      if ((local_78 & 0xff) == 0xff) break;
      if ((local_78 & 0xff) == 6) {
        *pcVar2 = (char)local_78;
        break;
      }
      local_98 = *(undefined4 *)((ulong)&local_78 | 2);
      local_90 = (char)local_78;
      uStack_8f = local_78._1_1_;
      local_94 = *(undefined2 *)((undefined4 *)((ulong)&local_78 | 2) + 1);
      *(undefined4 *)((ulong)&local_90 | 2) = local_98;
      uStack_88 = local_70;
      local_80 = uStack_68;
      *(undefined2 *)((undefined4 *)((ulong)&local_90 | 2) + 1) = local_94;
      if (lVar4 == local_f0) {
                    /* try { // try from 00a05288 to 00a0529f has its CatchHandler @ 00a05394 */
        FUN_00a0c45c(&local_f0,lVar4,1,8,0x18);
        __ptr = local_e8;
      }
      puVar1 = (undefined8 *)((long)__ptr + lVar5);
      local_e0 = lVar4 + 1;
      lVar5 = lVar5 + 0x18;
      puVar1[2] = local_80;
      puVar1[1] = uStack_88;
      *puVar1 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    }
    lVar5 = local_f0;
    if (local_124[0] != -1) {
      *(char *)(param_1 + 1) = local_124[0];
      *param_1 = -1;
      plVar3 = __ptr + 2;
      do {
        if ((((char)plVar3[-2] == '\x01') || ((char)plVar3[-2] == '\x03')) && (*plVar3 != 0)) {
          free((void *)plVar3[-1]);
        }
        lVar4 = lVar4 + -1;
        plVar3 = plVar3 + 3;
      } while (lVar4 != 0);
      if (lVar5 == 0) {
        return;
      }
      free(__ptr);
      return;
    }
  }
  *param_1 = local_f0;
  param_1[1] = (long)__ptr;
  param_1[2] = lVar4;
  return;
}


// ===== 00a053c4  <chrono::offset::local::tz_info::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::tz_info::Error as core::fmt::Display>::fmt */

void __rustcall
<chrono::offset::local::tz_info::Error_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a053ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00a053f0 + (ulong)(byte)(&DAT_00380220)[*param_1] * 4))(param_1,param_2,param_2);
  return;
}


// ===== 00a055a4  <chrono::OutOfRange_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::OutOfRange as core::fmt::Debug>::fmt */

void __rustcall
<chrono::OutOfRange_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a055bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380230,0xc);
  return;
}


// ===== 00a055c0  <chrono::round::RoundingError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::round::RoundingError as core::fmt::Display>::fmt */

void __rustcall
<chrono::round::RoundingError_as_core::fmt::Display>::fmt(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  if (*param_1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00a055f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,&UNK_0038023c,0x29);
    return;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00a055e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,&UNK_00380265,0x26);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a05604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,&UNK_0038028b,0x27);
  return;
}


// ===== 00a05608  FUN_00a05608 =====

undefined ** FUN_00a05608(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long local_58;
  
  if (param_3 != (undefined **)0x0) {
    do {
      auVar6 = <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write
                         (param_1,param_2,param_3);
      ppuVar3 = auVar6._8_8_;
      if (auVar6._0_8_ == 1) {
        ppuVar4 = param_3;
        if (((ulong)ppuVar3 & 3) < 2) {
          if ((auVar6 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
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
                    /* try { // try from 00a056c4 to 00a056d7 has its CatchHandler @ 00a05748 */
          lVar1 = core::io::error::os_functions::get_os_functions();
          uVar2 = (**(code **)(lVar1 + 0x10))((ulong)ppuVar3 >> 0x20);
          if ((uVar2 & 1) == 0) {
            return ppuVar3;
          }
        }
        else {
          uVar5 = auVar6._12_4_ & 0xff;
          if (10 < (ulong)ppuVar3 >> 0x22) {
            uVar5 = 0xff;
          }
          if (uVar5 != 0x23) {
            return ppuVar3;
          }
        }
      }
      else {
        if (ppuVar3 == (undefined **)0x0) {
          return &PTR_DAT_00af8df8;
        }
        ppuVar4 = (undefined **)((long)param_3 - (long)ppuVar3);
        if (param_3 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar3,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8e10);
        }
        param_2 = param_2 + (long)ppuVar3;
      }
      param_3 = ppuVar4;
    } while (ppuVar4 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


// ===== 00a05760  thunk_FUN_00a0e18c =====

ulong thunk_FUN_00a0e18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  iVar1 = core::fmt::write(&uStack_40,&PTR_FUN_00af9640,param_2,param_3);
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
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00af9670);
  }
  return uStack_38;
}


// ===== 00a05764  FUN_00a05764 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00a05764(undefined1 (*param_1) [16],byte *param_2,undefined8 param_3,undefined8 param_4,
                 byte *param_5,byte *param_6)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *__s1;
  undefined *puVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  uint uVar14;
  byte *pbVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined1 *unaff_x24;
  byte *pbVar20;
  undefined1 *unaff_x27;
  undefined1 auVar21 [16];
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined7 uStack_6f;
  uint local_68;
  undefined4 uStack_64;
  
  auVar21._8_8_ = param_4;
  auVar21._0_8_ = param_3;
  __s1 = param_2;
  if (param_5 == param_6) {
LAB_00a060fc:
    *param_1 = auVar21;
    return;
  }
LAB_00a057c4:
  puVar17 = auVar21._8_8_;
  pbVar15 = auVar21._0_8_;
  pbVar20 = param_5 + 0x18;
  bVar6 = *param_5;
  if (bVar6 < 3) {
    if (bVar6 == 0) {
switchD_00a058b0_caseD_2e:
      unaff_x24 = *(undefined1 **)(param_5 + 0x10);
      unaff_x27 = puVar17 + -(long)unaff_x24;
      if (puVar17 < unaff_x24) goto LAB_00a06120;
switchD_00a058b0_caseD_6e:
      __s1 = *(byte **)(param_5 + 8);
switchD_00a058b0_caseD_20:
      uVar4 = memcmp(__s1,pbVar15,(size_t)unaff_x24);
      __s1 = (byte *)(ulong)uVar4;
switchD_00a058b0_caseD_68:
      if ((int)__s1 == 0) {
switchD_00a058b0_caseD_30:
        if ((unaff_x24 == (undefined1 *)0x0) ||
           (puVar11 = puVar17 + -(long)unaff_x24,
           puVar17 < unaff_x24 || puVar11 == (undefined1 *)0x0)) {
LAB_00a057b0:
          auVar21._8_8_ = unaff_x27;
          auVar21._0_8_ = pbVar15 + (long)unaff_x24;
        }
        else {
switchD_00a058b0_caseD_74:
          ppuVar12 = (undefined **)(pbVar15 + (long)unaff_x24);
switchD_00a058b0_caseD_2a:
          if ((char)*(byte *)ppuVar12 + 0x40 < 0 != SCARRY4((int)(char)*(byte *)ppuVar12,0x40)) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (pbVar15,puVar17,unaff_x24,puVar17,
                       &PTR_s__root__cargo_registry_src_index__00af8e28);
          }
switchD_00a058b0_caseD_5c:
          puVar17 = puVar11;
switchD_00a058b0_caseD_36:
          auVar21._8_8_ = puVar17;
          auVar21._0_8_ = ppuVar12;
switchD_00a058b0_caseD_56:
        }
        goto LAB_00a057b8;
      }
    }
    else {
      if (bVar6 != 1) goto LAB_00a05868;
      unaff_x24 = *(undefined1 **)(param_5 + 0x10);
      unaff_x27 = puVar17 + -(long)unaff_x24;
      if (puVar17 < unaff_x24) goto LAB_00a06120;
      uVar4 = memcmp(*(void **)(param_5 + 8),pbVar15,(size_t)unaff_x24);
      __s1 = (byte *)(ulong)uVar4;
      if (uVar4 == 0) {
        if (((unaff_x24 != (undefined1 *)0x0) && (unaff_x24 < puVar17)) &&
           ((char)pbVar15[(long)unaff_x24] + 0x40 < 0 !=
            SCARRY4((int)(char)pbVar15[(long)unaff_x24],0x40))) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar15,puVar17,unaff_x24,puVar17,
                     &PTR_s__root__cargo_registry_src_index__00af8e40);
        }
        goto LAB_00a057b0;
      }
    }
    goto LAB_00a06128;
  }
  if (bVar6 < 5) {
    if (bVar6 != 3) {
                    /* WARNING: Could not recover jumptable at 0x00a0580c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00a05810 + (ulong)*(ushort *)(&BYTE_0038032e + (ulong)param_5[1] * 2) * 4))
                (FUN_00a072ec);
      return;
    }
LAB_00a05868:
    auVar21 = FUN_00a03e5c(pbVar15,puVar17);
    __s1 = auVar21._0_8_;
    goto LAB_00a057b8;
  }
  if (bVar6 != 5) {
    uVar7 = 6;
    goto LAB_00a06154;
  }
  bVar2 = param_5[1];
  puVar11 = (undefined1 *)(ulong)bVar2;
  bVar6 = bVar2 - 4;
  bVar3 = bVar2 == 3;
  if (bVar2 < 4) {
    bVar6 = 0x13;
  }
  ppuVar12 = (undefined **)(ulong)bVar6;
  switch(bVar2) {
  case 4:
    __s1 = (byte *)chrono::format::scan::short_month0(&local_78,pbVar15,puVar17);
    pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
    uVar7 = local_70;
    if (pbVar15 == (byte *)0x0) goto LAB_00a06154;
    puVar11 = (undefined1 *)(ulong)(byte)local_68;
    if ((byte)local_68 < 0xc) {
      ppuVar12 = (undefined **)(ulong)*(uint *)(param_2 + 0x48);
      goto switchD_00a058b0_caseD_42;
    }
    goto LAB_00a06150;
  case 5:
    break;
  case 6:
  case 0x2c:
  case 0x66:
    puVar11 = &local_78;
  case 0x54:
    __s1 = pbVar15;
switchD_00a058b0_caseD_9b:
    __s1 = (byte *)chrono::format::scan::short_weekday(puVar11,__s1);
switchD_00a058b0_caseD_28:
    puVar11 = (undefined1 *)(ulong)(byte)local_68;
    uVar7 = local_78;
    if ((byte)local_68 == 0xff) goto LAB_00a06154;
switchD_00a058b0_caseD_58:
    ppuVar12 = (undefined **)(ulong)param_2[0xa8];
switchD_00a058b0_caseD_3e:
    auVar21._1_7_ = uStack_77;
    auVar21[0] = local_78;
    auVar21._9_7_ = uStack_6f;
    auVar21[8] = local_70;
    bVar3 = (int)ppuVar12 == 0xff;
switchD_00a058b0_caseD_44:
    bVar6 = (byte)puVar11;
    if (!bVar3) {
switchD_00a058b0_caseD_1a:
      bVar6 = (byte)puVar11;
      if ((int)ppuVar12 == (int)puVar11) goto LAB_00a05abc;
      goto LAB_00a06140;
    }
LAB_00a05abc:
    param_2[0xa8] = bVar6;
    goto LAB_00a057b8;
  case 7:
    __s1 = (byte *)chrono::format::scan::short_weekday(&local_78,pbVar15,puVar17);
    puVar11 = (undefined1 *)(ulong)(byte)local_68;
    uVar7 = local_78;
    if ((byte)local_68 == 0xff) goto LAB_00a06154;
    ppuVar12 = &PTR_DAT_00af9380 + (long)puVar11 * 2;
  case 0x45:
    puVar16 = (undefined *)CONCAT71(uStack_77,local_78);
    puVar19 = (undefined *)CONCAT71(uStack_6f,local_70);
    puVar5 = ppuVar12[1];
    if (puVar5 <= puVar19) {
      puVar13 = (undefined *)0x0;
      do {
        if (puVar5 == puVar13) {
          if ((puVar5 <= puVar19 && puVar19 + -(long)puVar5 != (undefined *)0x0) &&
             ((char)puVar5[(long)puVar16] + 0x40 < 0 !=
              SCARRY4((int)(char)puVar5[(long)puVar16],0x40))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (puVar16,puVar19,puVar5,puVar19,
                       &PTR_s__root__cargo_registry_src_index__00af9260);
          }
          puVar16 = puVar16 + (long)puVar5;
          puVar19 = puVar19 + -(long)puVar5;
          break;
        }
        pbVar15 = puVar13 + (long)puVar16;
        pbVar1 = puVar13 + (long)*ppuVar12;
        puVar13 = puVar13 + 1;
        uVar14 = 0x20;
        uVar4 = uVar14;
        if (0x19 < *pbVar15 - 0x41) {
          uVar4 = 0;
        }
        if (0x19 < *pbVar1 - 0x41) {
          uVar14 = 0;
        }
      } while ((uVar4 | *pbVar15) == (uVar14 | *pbVar1));
    }
    auVar21._8_8_ = puVar19;
    auVar21._0_8_ = puVar16;
    if ((param_2[0xa8] != 0xff) && ((uint)param_2[0xa8] != (uint)puVar11)) goto LAB_00a06140;
    param_2[0xa8] = (byte)puVar11;
    goto LAB_00a057b8;
  case 8:
  case 9:
  case 0x90:
  case 0x9d:
    if (puVar17 < (undefined1 *)0x2) goto LAB_00a06120;
  case 0x96:
    puVar11 = (undefined1 *)(ulong)*pbVar15;
switchD_00a058b0_caseD_97:
    uVar4 = (uint)puVar11 | 0x20;
    ppuVar12 = (undefined **)(ulong)uVar4;
    puVar11 = (undefined1 *)(ulong)pbVar15[1];
    bVar3 = uVar4 == 0x61;
switchD_00a058b0_caseD_a0:
    uVar4 = (uint)puVar11 | 0x20;
    puVar11 = (undefined1 *)(ulong)uVar4;
    if (!bVar3) {
switchD_00a058b0_caseD_de:
      if ((int)ppuVar12 == 0x70) {
switchD_00a058b0_caseD_46:
        if ((int)puVar11 == 0x6d) {
          iVar10 = 1;
          iVar9 = *(int *)(param_2 + 0x78);
          goto joined_r0x00a05c2c;
        }
      }
LAB_00a06128:
      uVar7 = 3;
      goto LAB_00a06154;
    }
    if (uVar4 != 0x6d) goto LAB_00a06128;
    iVar10 = 0;
    iVar9 = *(int *)(param_2 + 0x78);
joined_r0x00a05c2c:
    if ((iVar9 == 1) && (*(int *)(param_2 + 0x7c) != iVar10)) goto LAB_00a06140;
    param_2[0x78] = 1;
    param_2[0x79] = 0;
    param_2[0x7a] = 0;
    param_2[0x7b] = 0;
    *(int *)(param_2 + 0x7c) = iVar10;
    if ((puVar17 + -2 != (undefined1 *)0x0) &&
       ((char)pbVar15[2] + 0x40 < 0 != SCARRY4((int)(char)pbVar15[2],0x40))) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (pbVar15,puVar17,2,puVar17,&PTR_s__root__cargo_registry_src_index__00af8e88);
    }
    auVar21._8_8_ = puVar17 + -2;
    auVar21._0_8_ = pbVar15 + 2;
    goto LAB_00a057b8;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x1c:
  case 0x1d:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x5a:
  case 0x5b:
  case 0x9e:
  case 0x9f:
    if (puVar17 == (undefined1 *)0x0) goto LAB_00a057b8;
  case 0x19:
  case 0x1b:
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2b:
  case 0x2d:
  case 0x2f:
  case 0x31:
  case 0x33:
  case 0x35:
  case 0x37:
  case 0x39:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x41:
  case 0x57:
  case 0x59:
  case 0x5d:
  case 0x5f:
  case 0x61:
  case 99:
  case 0x65:
  case 0x67:
  case 0x69:
  case 0x6b:
  case 0x6d:
  case 0x6f:
  case 0x71:
  case 0x73:
  case 0x75:
  case 0x77:
  case 0x79:
  case 0x7b:
  case 0x7d:
  case 0x7f:
    if (*pbVar15 != 0x2e) goto LAB_00a057b8;
    if ((puVar17 + -1 != (undefined1 *)0x0) &&
       ((char)pbVar15[1] + 0x40 < 0 != SCARRY4((int)(char)pbVar15[1],0x40))) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (pbVar15,puVar17,1,puVar17,&PTR_s__root__cargo_registry_src_index__00af8ea0);
    }
    __s1 = (byte *)chrono::format::scan::nanosecond(&local_78,pbVar15 + 1,puVar17 + -1);
    pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
    uVar7 = local_70;
joined_r0x00a06014:
    if (pbVar15 == (byte *)0x0) goto LAB_00a06154;
    puVar11 = (undefined1 *)CONCAT44(uStack_64,local_68);
    ppuVar12 = (undefined **)0xca00;
    local_70 = uVar7;
switchD_00a058b0_caseD_76:
    if (puVar11 < (undefined1 *)(ulong)((uint)ppuVar12 | 0x3b9a0000)) {
      ppuVar12 = (undefined **)(ulong)*(uint *)(param_2 + 0x98);
switchD_00a058b0_caseD_72:
      auVar21._9_7_ = uStack_6f;
      auVar21[8] = local_70;
      auVar21._0_8_ = pbVar15;
switchD_00a058b0_caseD_38:
      uVar8 = SUB84(puVar11,0);
      if ((int)ppuVar12 != 1) {
LAB_00a0591c:
        param_2[0x98] = 1;
        param_2[0x99] = 0;
        param_2[0x9a] = 0;
        param_2[0x9b] = 0;
        *(undefined4 *)(param_2 + 0x9c) = uVar8;
switchD_00a058b0_caseD_5e:
        goto LAB_00a057b8;
      }
      ppuVar12 = (undefined **)(ulong)*(uint *)(param_2 + 0x9c);
switchD_00a058b0_caseD_6c:
      bVar3 = (int)ppuVar12 == (int)puVar11;
switchD_00a058b0_caseD_34:
      uVar8 = SUB84(puVar11,0);
      if (bVar3) goto LAB_00a0591c;
      goto LAB_00a06140;
    }
    goto LAB_00a06150;
  case 0xe:
    __s1 = pbVar15;
  case 0x32:
  case 0x62:
  case 0x86:
  case 0x8c:
  case 0x93:
switchD_00a058b0_caseD_53:
    auVar21 = FUN_00a03bc4(__s1);
    __s1 = auVar21._0_8_;
    goto LAB_00a057b8;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
    __s1 = pbVar15;
  case 0x1e:
    FUN_00a03e5c(__s1);
    puVar11 = &local_78;
switchD_00a058b0_caseD_18:
    __s1 = (byte *)FUN_00a08580(puVar11);
    pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
    if (pbVar15 == (byte *)0x0) {
switchD_00a058b0_caseD_4d:
      uVar7 = local_70;
      goto LAB_00a06154;
    }
switchD_00a058b0_caseD_50:
    auVar21._9_7_ = uStack_6f;
    auVar21[8] = local_70;
    auVar21._0_8_ = pbVar15;
    puVar11 = (undefined1 *)(ulong)local_68;
    bVar3 = *(int *)(param_2 + 0xa0) == 1;
switchD_00a058b0_caseD_26:
    if ((bVar3) && (*(int *)(param_2 + 0xa4) != (int)puVar11)) goto LAB_00a06140;
switchD_00a058b0_caseD_3a:
    param_2[0xa0] = 1;
    param_2[0xa1] = 0;
    param_2[0xa2] = 0;
    param_2[0xa3] = 0;
    *(int *)(param_2 + 0xa4) = (int)puVar11;
    goto LAB_00a057b8;
  case 0x12:
  case 0x14:
    auVar21 = FUN_00a03e5c(pbVar15,puVar17);
    __s1 = (byte *)FUN_00a08580(&local_78,auVar21._0_8_,auVar21._8_8_,1,0,1);
    pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
    uVar7 = local_70;
    goto joined_r0x00a05c10;
  case 0x15:
    puVar11 = &local_78;
  case 0x40:
  case 0x60:
  case 0x80:
  case 0x8b:
  case 0x9a:
    __s1 = param_2;
switchD_00a058b0_caseD_8f:
    __s1 = (byte *)chrono::format::parse::parse_rfc2822(puVar11,__s1);
switchD_00a058b0_caseD_22:
    pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
switchD_00a058b0_caseD_8a:
    uVar7 = local_70;
joined_r0x00a05a7c:
    local_70 = uVar7;
    if (pbVar15 == (byte *)0x0) goto LAB_00a06154;
switchD_00a058b0_caseD_81:
    auVar21._9_7_ = uStack_6f;
    auVar21[8] = local_70;
    auVar21._0_8_ = pbVar15;
switchD_00a058b0_caseD_85:
    goto LAB_00a057b8;
  case 0x16:
  case 0x8d:
    puVar11 = &local_78;
  case 0x24:
  case 0x7a:
  case 0x92:
  case 0x99:
    __s1 = param_2;
switchD_00a058b0_caseD_88:
switchD_00a058b0_caseD_87:
    __s1 = (byte *)chrono::format::parse::parse_rfc3339_relaxed(puVar11,__s1);
switchD_00a058b0_caseD_3c:
    pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
switchD_00a058b0_caseD_4c:
    uVar7 = local_70;
    goto joined_r0x00a05a7c;
  default:
    if (bVar2 < 2) goto switchD_00a058b0_caseD_55;
    if (bVar2 != 2) {
      if (&DAT_00000008 < puVar17) {
        __s1 = (byte *)chrono::format::scan::nanosecond_fixed(&local_78,pbVar15,puVar17,9);
        pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
        uVar7 = local_70;
        goto joined_r0x00a06014;
      }
      goto LAB_00a06120;
    }
    if (puVar17 < &DAT_00000006) goto LAB_00a06120;
    __s1 = (byte *)chrono::format::scan::nanosecond_fixed(&local_78,pbVar15,puVar17,6);
    pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
    uVar7 = local_70;
    goto joined_r0x00a06014;
  case 0x18:
    goto switchD_00a058b0_caseD_18;
  case 0x1a:
    goto switchD_00a058b0_caseD_1a;
  case 0x20:
    goto switchD_00a058b0_caseD_20;
  case 0x22:
  case 0x70:
  case 0x83:
  case 0x8e:
    goto switchD_00a058b0_caseD_22;
  case 0x26:
  case 0x78:
    goto switchD_00a058b0_caseD_26;
  case 0x28:
  case 0x7c:
    goto switchD_00a058b0_caseD_28;
  case 0x2a:
    goto switchD_00a058b0_caseD_2a;
  case 0x2e:
    goto switchD_00a058b0_caseD_2e;
  case 0x30:
    goto switchD_00a058b0_caseD_30;
  case 0x34:
    goto switchD_00a058b0_caseD_34;
  case 0x36:
  case 0x9c:
    goto switchD_00a058b0_caseD_36;
  case 0x38:
    goto switchD_00a058b0_caseD_38;
  case 0x3a:
  case 0x7e:
    goto switchD_00a058b0_caseD_3a;
  case 0x3c:
  case 0x6a:
    goto switchD_00a058b0_caseD_3c;
  case 0x3e:
    goto switchD_00a058b0_caseD_3e;
  case 0x42:
switchD_00a058b0_caseD_42:
    uVar18 = CONCAT71(uStack_6f,local_70);
    iVar9 = (int)puVar11 + 1;
    if (((int)ppuVar12 == 1) && (*(int *)(param_2 + 0x4c) != iVar9)) goto LAB_00a06140;
    goto LAB_00a05bd4;
  case 0x43:
    goto switchD_00a058b0_caseD_43;
  case 0x44:
    goto switchD_00a058b0_caseD_44;
  case 0x46:
  case 0x47:
    goto switchD_00a058b0_caseD_46;
  case 0x4c:
  case 0x84:
    goto switchD_00a058b0_caseD_4c;
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
    goto switchD_00a058b0_caseD_4d;
  case 0x50:
  case 0x52:
  case 100:
    goto switchD_00a058b0_caseD_50;
  case 0x53:
    goto switchD_00a058b0_caseD_53;
  case 0x55:
switchD_00a058b0_caseD_55:
    if (bVar2 != 0) {
      if ((undefined1 *)0x2 < puVar17) {
        __s1 = (byte *)chrono::format::scan::nanosecond_fixed(&local_78,pbVar15,puVar17,3);
        pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
        uVar7 = local_70;
        goto joined_r0x00a06014;
      }
LAB_00a06120:
      uVar7 = 4;
      goto LAB_00a06154;
    }
    auVar21 = FUN_00a03e5c(pbVar15,puVar17);
    __s1 = (byte *)FUN_00a08580(&local_78,auVar21._0_8_,auVar21._8_8_,1,1,1);
    pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
    uVar7 = local_70;
joined_r0x00a05c10:
    local_70 = uVar7;
    if (pbVar15 == (byte *)0x0) goto LAB_00a06154;
    goto switchD_00a058b0_caseD_50;
  case 0x56:
    goto switchD_00a058b0_caseD_56;
  case 0x58:
    goto switchD_00a058b0_caseD_58;
  case 0x5c:
    goto switchD_00a058b0_caseD_5c;
  case 0x5e:
    goto switchD_00a058b0_caseD_5e;
  case 0x68:
    goto switchD_00a058b0_caseD_68;
  case 0x6c:
    goto switchD_00a058b0_caseD_6c;
  case 0x6e:
  case 0x89:
  case 0x91:
  case 0x95:
  case 0x98:
    goto switchD_00a058b0_caseD_6e;
  case 0x72:
    goto switchD_00a058b0_caseD_72;
  case 0x74:
    goto switchD_00a058b0_caseD_74;
  case 0x76:
    goto switchD_00a058b0_caseD_76;
  case 0x81:
  case 0x82:
    goto switchD_00a058b0_caseD_81;
  case 0x85:
    goto switchD_00a058b0_caseD_85;
  case 0x87:
    goto switchD_00a058b0_caseD_87;
  case 0x88:
  case 0x94:
    goto switchD_00a058b0_caseD_88;
  case 0x8a:
    goto switchD_00a058b0_caseD_8a;
  case 0x8f:
    goto switchD_00a058b0_caseD_8f;
  case 0x97:
    goto switchD_00a058b0_caseD_97;
  case 0x9b:
    goto switchD_00a058b0_caseD_9b;
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
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
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
    goto switchD_00a058b0_caseD_a0;
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
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
    goto switchD_00a058b0_caseD_de;
  }
  puVar11 = &local_78;
  __s1 = pbVar15;
switchD_00a058b0_caseD_43:
  __s1 = (byte *)chrono::format::scan::short_or_long_month0(puVar11,__s1,puVar17);
  pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
  uVar7 = local_70;
  if (pbVar15 == (byte *)0x0) {
LAB_00a06154:
    (*param_1)[8] = uVar7;
    *(undefined8 *)*param_1 = 0;
    return;
  }
  if (0xb < (byte)local_68) {
LAB_00a06150:
    uVar7 = 0;
    goto LAB_00a06154;
  }
  uVar18 = CONCAT71(uStack_6f,local_70);
  iVar9 = (local_68 & 0xff) + 1;
  if ((*(int *)(param_2 + 0x48) == 1) && (*(int *)(param_2 + 0x4c) != iVar9)) {
LAB_00a06140:
    uVar7 = 1;
    goto LAB_00a06154;
  }
LAB_00a05bd4:
  auVar21._8_8_ = uVar18;
  auVar21._0_8_ = pbVar15;
  param_2[0x48] = 1;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(int *)(param_2 + 0x4c) = iVar9;
LAB_00a057b8:
  param_5 = pbVar20;
  if (pbVar20 == param_6) goto LAB_00a060fc;
  goto LAB_00a057c4;
}


// ===== 00a06280  FUN_00a06280 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00a06280(undefined1 (*param_1) [16],byte *param_2,byte *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  byte *__s1;
  ulong uVar5;
  undefined1 *__n;
  undefined **ppuVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *unaff_x19;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 unaff_x27;
  byte *pbVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte local_90;
  byte local_8f;
  byte *local_88;
  undefined1 *puStack_80;
  byte local_78;
  undefined7 uStack_77;
  byte local_70;
  undefined7 uStack_6f;
  uint local_68;
  undefined4 uStack_64;
  
  auVar19._8_8_ = param_4;
  auVar19._0_8_ = param_3;
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = unaff_x27;
  uStack_a8 = param_5[1];
  local_b0 = *param_5;
  uStack_98 = param_5[3];
  uStack_a0 = param_5[2];
  auVar17 = <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::
            next(&local_90,&local_b0);
  pbVar1 = local_88;
  __n = puStack_80;
  do {
    if (local_90 == 0xff) {
      *param_1 = auVar19;
      return;
    }
    puVar13 = auVar2._8_8_;
    pbVar15 = auVar2._0_8_;
    auVar19._8_8_ = puVar13;
    auVar19._0_8_ = param_3;
    __s1 = auVar17._0_8_;
    local_88 = pbVar1;
    puStack_80 = __n;
    if (local_90 < 3) {
      if (local_90 == 0) {
        unaff_x19 = puVar13 + -(long)__n;
        __s1 = pbVar1;
        if (puVar13 < __n) goto LAB_00a06ca8;
switchD_00a0642c_caseD_30:
        iVar4 = memcmp(__s1,param_3,(size_t)__n);
        if (iVar4 == 0) {
switchD_00a0642c_caseD_2a:
          if ((__n == (undefined1 *)0x0) ||
             (pbVar10 = puVar13 + -(long)__n, puVar13 < __n || pbVar10 == (byte *)0x0)) {
            auVar19._8_8_ = unaff_x19;
            auVar19._0_8_ = param_3 + (long)__n;
          }
          else {
            pbVar15 = param_3 + (long)__n;
switchD_00a0642c_caseD_36:
            auVar2._8_8_ = pbVar10;
            auVar2._0_8_ = pbVar15;
            if ((char)*pbVar15 + 0x40 < 0 != SCARRY4((int)(char)*pbVar15,0x40)) {
              ppuVar6 = &PTR_s__root__cargo_registry_src_index__00af8e28;
              goto LAB_00a06c94;
            }
switchD_00a0642c_caseD_1e:
            auVar19 = auVar2;
          }
          goto LAB_00a06338;
        }
        goto LAB_00a06cb0;
      }
      if (local_90 == 1) {
        unaff_x19 = puVar13 + -(long)__n;
        if (puVar13 < __n) {
          (*param_1)[8] = 4;
          *(undefined8 *)*param_1 = 0;
LAB_00a06ce8:
          free(pbVar1);
          return;
        }
        iVar4 = memcmp(pbVar1,param_3,(size_t)__n);
        if (iVar4 != 0) {
          (*param_1)[8] = 3;
          *(undefined8 *)*param_1 = 0;
          if (__n == (undefined1 *)0x0) {
            return;
          }
          goto LAB_00a06ce8;
        }
        pbVar15 = param_3 + (long)__n;
        auVar19._8_8_ = unaff_x19;
        auVar19._0_8_ = pbVar15;
        if ((__n == (undefined1 *)0x0) ||
           (auVar18._8_8_ = puVar13 + -(long)__n, auVar18._0_8_ = pbVar15,
           puVar13 < __n || puVar13 + -(long)__n == (undefined1 *)0x0)) {
          auVar18 = auVar19;
          if (__n == (undefined1 *)0x0) goto LAB_00a06338;
        }
        else if ((char)*pbVar15 + 0x40 < 0 != SCARRY4((int)(char)*pbVar15,0x40)) {
          ppuVar6 = &PTR_s__root__cargo_registry_src_index__00af8e40;
          goto LAB_00a06c94;
        }
        goto LAB_00a06328;
      }
switchD_00a0642c_caseD_5e:
      __s1 = param_3;
switchD_00a0642c_caseD_18:
      auVar19 = FUN_00a03e5c(__s1,puVar13);
      goto LAB_00a06338;
    }
    pbVar10 = (byte *)(ulong)local_8f;
    if (local_90 < 5) {
      if (local_90 != 3) {
                    /* WARNING: Could not recover jumptable at 0x00a0639c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_00a063a0 + (ulong)*(ushort *)(&BYTE_0038036c + (long)pbVar10 * 2) * 4))
                  (FUN_00a072ec);
        return;
      }
      auVar18 = FUN_00a03e5c(param_3,puVar13);
      auVar19 = auVar18;
      if (__n != (undefined1 *)0x0) {
LAB_00a06328:
        free(pbVar1);
        auVar19 = auVar18;
      }
      goto LAB_00a06338;
    }
    if (local_90 != 5) {
      bVar7 = 6;
      goto LAB_00a06d10;
    }
    bVar7 = local_8f - 4;
    bVar3 = local_8f == 3;
    if (local_8f < 4) {
      bVar7 = 0x13;
    }
    uVar11 = (uint)bVar7;
    switch(local_8f) {
    case 4:
      chrono::format::scan::short_month0(&local_78,param_3,puVar13);
      lVar16 = CONCAT71(uStack_77,local_78);
      bVar7 = local_70;
      if (lVar16 == 0) goto LAB_00a06d10;
      goto joined_r0x00a06734;
    case 5:
      chrono::format::scan::short_or_long_month0(&local_78,param_3,puVar13);
      lVar16 = CONCAT71(uStack_77,local_78);
      bVar7 = local_70;
      if (lVar16 == 0) goto LAB_00a06d10;
joined_r0x00a06734:
      if (0xb < (byte)local_68) {
LAB_00a06d0c:
        bVar7 = 0;
        goto LAB_00a06d10;
      }
      auVar19._9_7_ = uStack_6f;
      auVar19[8] = local_70;
      auVar19._0_8_ = lVar16;
      if ((*(int *)(param_2 + 0x48) == 1) && (*(int *)(param_2 + 0x4c) != (byte)local_68 + 1))
      goto LAB_00a06cfc;
      param_2[0x48] = 1;
      param_2[0x49] = 0;
      param_2[0x4a] = 0;
      param_2[0x4b] = 0;
      *(uint *)(param_2 + 0x4c) = (byte)local_68 + 1;
      goto LAB_00a06338;
    case 6:
      chrono::format::scan::short_weekday(&local_78,param_3,puVar13);
      bVar7 = local_78;
      if ((local_68 & 0xff) == 0xff) goto LAB_00a06d10;
      auVar19._1_7_ = uStack_77;
      auVar19[0] = local_78;
      auVar19._9_7_ = uStack_6f;
      auVar19[8] = local_70;
      if ((param_2[0xa8] == 0xff) || ((uint)param_2[0xa8] == (local_68 & 0xff))) {
        param_2[0xa8] = (byte)local_68;
        goto LAB_00a06338;
      }
      goto LAB_00a06cfc;
    case 7:
      chrono::format::scan::short_weekday(&local_78,param_3,puVar13);
      bVar7 = local_78;
      if ((local_68 & 0xff) == 0xff) goto LAB_00a06d10;
      lVar16 = CONCAT71(uStack_77,local_78);
      uVar14 = CONCAT71(uStack_6f,local_70);
      uVar5 = *(ulong *)(&DAT_00af9388 + (ulong)(byte)local_68 * 0x10);
      if (uVar5 <= uVar14) {
        uVar12 = 0;
        do {
          if (uVar5 == uVar12) {
            if ((uVar5 <= uVar14 && uVar14 - uVar5 != 0) &&
               (*(char *)(lVar16 + uVar5) + 0x40 < 0 != SCARRY4((int)*(char *)(lVar16 + uVar5),0x40)
               )) {
                    /* try { // try from 00a06d58 to 00a06d6b has its CatchHandler @ 00a06ddc */
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail
                        (lVar16,uVar14,uVar5,uVar14,&PTR_s__root__cargo_registry_src_index__00af9260
                        );
            }
            lVar16 = lVar16 + uVar5;
            uVar14 = uVar14 - uVar5;
            break;
          }
          pbVar1 = (byte *)(lVar16 + uVar12);
          pbVar15 = (&PTR_DAT_00af9380)[(ulong)(byte)local_68 * 2] + uVar12;
          uVar12 = uVar12 + 1;
          uVar8 = 0x20;
          uVar11 = uVar8;
          if (0x19 < *pbVar1 - 0x41) {
            uVar11 = 0;
          }
          if (0x19 < *pbVar15 - 0x41) {
            uVar8 = 0;
          }
        } while ((uVar11 | *pbVar1) == (uVar8 | *pbVar15));
      }
      auVar19._8_8_ = uVar14;
      auVar19._0_8_ = lVar16;
      if ((param_2[0xa8] == 0xff) || ((uint)param_2[0xa8] == (local_68 & 0xff))) {
        param_2[0xa8] = (byte)local_68;
        goto LAB_00a06338;
      }
LAB_00a06cfc:
      bVar7 = 1;
LAB_00a06d10:
      (*param_1)[8] = bVar7;
      *(undefined8 *)*param_1 = 0;
      return;
    case 8:
    case 9:
      if (puVar13 < (undefined1 *)0x2) goto LAB_00a06ca8;
      uVar11 = *param_3 | 0x20;
    case 0xda:
    case 0xdc:
    case 0xde:
    case 0xe0:
    case 0xe2:
    case 0xe4:
    case 0xe6:
    case 0xe8:
    case 0xea:
    case 0xec:
    case 0xee:
    case 0xf0:
    case 0xf2:
    case 0xf4:
    case 0xf6:
    case 0xf8:
    case 0xfa:
    case 0xfc:
    case 0xfe:
      pbVar10 = (byte *)(ulong)param_3[1];
      bVar3 = uVar11 == 0x61;
switchD_00a0642c_caseD_d9:
      uVar8 = (uint)pbVar10 | 0x20;
      if (bVar3) {
        if (uVar8 != 0x6d) goto LAB_00a06cb0;
        iVar9 = 0;
        iVar4 = *(int *)(param_2 + 0x78);
      }
      else {
        if ((uVar11 != 0x70) || (uVar8 != 0x6d)) {
LAB_00a06cb0:
          bVar7 = 3;
          goto LAB_00a06d10;
        }
        iVar9 = 1;
        iVar4 = *(int *)(param_2 + 0x78);
      }
      if ((iVar4 == 1) && (*(int *)(param_2 + 0x7c) != iVar9)) goto LAB_00a06cfc;
      param_2[0x78] = 1;
      param_2[0x79] = 0;
      param_2[0x7a] = 0;
      param_2[0x7b] = 0;
      *(int *)(param_2 + 0x7c) = iVar9;
      if ((puVar13 + -2 != (undefined1 *)0x0) &&
         ((char)param_3[2] + 0x40 < 0 != SCARRY4((int)(char)param_3[2],0x40))) {
        __n = (undefined1 *)0x2;
        ppuVar6 = &PTR_s__root__cargo_registry_src_index__00af8e88;
LAB_00a06c94:
                    /* try { // try from 00a06c94 to 00a06ca3 has its CatchHandler @ 00a06de4 */
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail(param_3,puVar13,__n,puVar13,ppuVar6);
      }
      auVar19._8_8_ = puVar13 + -2;
      auVar19._0_8_ = param_3 + 2;
      goto LAB_00a06338;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x1c:
    case 0x1d:
    case 0x60:
    case 0x61:
      if (puVar13 != (undefined1 *)0x0) goto switchD_00a0642c_caseD_19;
      break;
    case 0xe:
    case 0x46:
      __s1 = param_3;
    case 0x43:
    case 0x44:
      auVar17._8_8_ = puVar13;
      auVar17._0_8_ = __s1;
switchD_00a0642c_caseD_47:
      auVar17 = FUN_00a03bc4(auVar17._0_8_,auVar17._8_8_);
switchD_00a0642c_caseD_28:
      auVar19 = auVar17;
      goto LAB_00a06338;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
      __s1 = param_3;
    case 0x52:
    case 0x5f:
      FUN_00a03e5c(__s1,puVar13);
switchD_00a0642c_caseD_58:
      pbVar10 = &local_78;
switchD_00a0642c_caseD_59:
switchD_00a0642c_caseD_62:
      FUN_00a08580(pbVar10);
switchD_00a0642c_caseD_40:
      bVar7 = local_70;
      if (CONCAT71(uStack_77,local_78) == 0) goto LAB_00a06d10;
      uVar11 = *(uint *)(param_2 + 0xa0);
      auVar2._9_7_ = uStack_6f;
      auVar2[8] = local_70;
      auVar2._0_8_ = CONCAT71(uStack_77,local_78);
switchD_00a0642c_caseD_22:
      pbVar10 = (byte *)(ulong)local_68;
      uVar8 = local_68;
      if (uVar11 == 1) {
switchD_00a0642c_caseD_51:
        uVar11 = *(uint *)(param_2 + 0xa4);
switchD_00a0642c_caseD_32:
        bVar3 = uVar11 == (uint)pbVar10;
switchD_00a0642c_caseD_4c:
        uVar8 = (uint)pbVar10;
        if (!bVar3) goto LAB_00a06cfc;
      }
      param_2[0xa0] = 1;
      param_2[0xa1] = 0;
      param_2[0xa2] = 0;
      param_2[0xa3] = 0;
      *(uint *)(param_2 + 0xa4) = uVar8;
switchD_00a0642c_caseD_24:
      auVar19 = auVar2;
      goto LAB_00a06338;
    case 0x12:
    case 0x14:
    case 0x26:
      auVar17 = FUN_00a03e5c(param_3,puVar13);
      pbVar10 = &local_78;
    case 0x3a:
      FUN_00a08580(pbVar10,auVar17._0_8_,auVar17._8_8_,1,0,1);
      goto switchD_00a0642c_caseD_40;
    case 0x15:
      pbVar10 = &local_78;
      __s1 = param_2;
    case 0x4f:
      auVar17._8_8_ = param_3;
      auVar17._0_8_ = __s1;
switchD_00a0642c_caseD_3c:
switchD_00a0642c_caseD_4a:
      chrono::format::parse::parse_rfc2822(pbVar10,auVar17._0_8_,auVar17._8_8_);
switchD_00a0642c_caseD_49:
      pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
      if (pbVar15 == (byte *)0x0) {
switchD_00a0642c_caseD_2c:
        bVar7 = local_70;
        goto LAB_00a06d10;
      }
LAB_00a06624:
      auVar19._9_7_ = uStack_6f;
      auVar19[8] = local_70;
      auVar19._0_8_ = pbVar15;
      goto LAB_00a06338;
    case 0x16:
      pbVar10 = &local_78;
      __s1 = param_2;
    case 0x5d:
      auVar17._8_8_ = param_3;
      auVar17._0_8_ = __s1;
switchD_00a0642c_caseD_3e:
      chrono::format::parse::parse_rfc3339_relaxed(pbVar10,auVar17._0_8_,auVar17._8_8_,puVar13);
      pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
switchD_00a0642c_caseD_1a:
      bVar7 = local_70;
      if (pbVar15 == (byte *)0x0) goto LAB_00a06d10;
      goto LAB_00a06624;
    default:
      if (local_8f < 2) {
        if (local_8f != 0) {
          if ((undefined1 *)0x2 < puVar13) {
            chrono::format::scan::nanosecond_fixed(&local_78,param_3,puVar13,3);
            goto LAB_00a06460;
          }
          goto LAB_00a06ca8;
        }
        auVar19 = FUN_00a03e5c(param_3,puVar13);
        FUN_00a08580(&local_78,auVar19._0_8_,auVar19._8_8_,1,1,1);
        goto switchD_00a0642c_caseD_40;
      }
      if (local_8f != 2) {
        if (&DAT_00000008 < puVar13) {
          chrono::format::scan::nanosecond_fixed(&local_78,param_3,puVar13,9);
          goto LAB_00a06460;
        }
LAB_00a06ca8:
        bVar7 = 4;
        goto LAB_00a06d10;
      }
      if (puVar13 < &DAT_00000006) goto LAB_00a06ca8;
      chrono::format::scan::nanosecond_fixed(&local_78,param_3,puVar13,6);
LAB_00a06460:
      pbVar15 = (byte *)CONCAT71(uStack_77,local_78);
      bVar7 = local_70;
      if (pbVar15 == (byte *)0x0) goto LAB_00a06d10;
      pbVar10 = (byte *)CONCAT44(uStack_64,local_68);
      uVar11 = 0xca00;
    case 0x38:
      if (pbVar10 < (byte *)(ulong)(uVar11 | 0x3b9a0000)) {
        uVar11 = *(uint *)(param_2 + 0x98);
switchD_00a0642c_caseD_34:
        uVar8 = (uint)pbVar10;
        auVar2._9_7_ = uStack_6f;
        auVar2[8] = local_70;
        auVar2._0_8_ = pbVar15;
        if (uVar11 == 1) {
          uVar11 = *(uint *)(param_2 + 0x9c);
switchD_00a0642c_caseD_2e:
          uVar8 = (uint)pbVar10;
          if (uVar11 != uVar8) goto LAB_00a06cfc;
        }
        param_2[0x98] = 1;
        param_2[0x99] = 0;
        param_2[0x9a] = 0;
        param_2[0x9b] = 0;
        *(uint *)(param_2 + 0x9c) = uVar8;
switchD_00a0642c_caseD_20:
        auVar19 = auVar2;
        goto LAB_00a06338;
      }
      goto LAB_00a06d0c;
    case 0x18:
      goto switchD_00a0642c_caseD_18;
    case 0x19:
    case 0x1b:
    case 0x1f:
    case 0x21:
    case 0x23:
    case 0x25:
    case 0x27:
    case 0x29:
    case 0x2b:
    case 0x2d:
    case 0x2f:
    case 0x31:
    case 0x33:
    case 0x35:
    case 0x37:
    case 0x39:
    case 0x3b:
    case 0x3d:
    case 0x3f:
    case 0x41:
switchD_00a0642c_caseD_19:
      if (*param_3 == 0x2e) {
        if ((puVar13 + -1 != (undefined1 *)0x0) &&
           ((char)param_3[1] + 0x40 < 0 != SCARRY4((int)(char)param_3[1],0x40))) {
          ppuVar6 = &PTR_s__root__cargo_registry_src_index__00af8ea0;
          __n = &DAT_00000001;
          goto LAB_00a06c94;
        }
                    /* try { // try from 00a06454 to 00a06bb3 has its CatchHandler @ 00a06de0 */
        chrono::format::scan::nanosecond(&local_78,param_3 + 1,puVar13 + -1);
        goto LAB_00a06460;
      }
      break;
    case 0x1a:
      goto switchD_00a0642c_caseD_1a;
    case 0x1e:
      goto switchD_00a0642c_caseD_1e;
    case 0x20:
      goto switchD_00a0642c_caseD_20;
    case 0x22:
    case 0x42:
    case 0x4d:
    case 0x5c:
      goto switchD_00a0642c_caseD_22;
    case 0x24:
    case 0x48:
    case 0x4e:
    case 0x55:
      goto switchD_00a0642c_caseD_24;
    case 0x28:
      goto switchD_00a0642c_caseD_28;
    case 0x2a:
      goto switchD_00a0642c_caseD_2a;
    case 0x2c:
      goto switchD_00a0642c_caseD_2c;
    case 0x2e:
      goto switchD_00a0642c_caseD_2e;
    case 0x30:
    case 0x4b:
    case 0x53:
    case 0x57:
    case 0x5a:
      goto switchD_00a0642c_caseD_30;
    case 0x32:
    case 0x45:
    case 0x50:
      goto switchD_00a0642c_caseD_32;
    case 0x34:
      goto switchD_00a0642c_caseD_34;
    case 0x36:
      goto switchD_00a0642c_caseD_36;
    case 0x3c:
    case 0x54:
    case 0x5b:
      goto switchD_00a0642c_caseD_3c;
    case 0x3e:
      goto switchD_00a0642c_caseD_3e;
    case 0x40:
      goto switchD_00a0642c_caseD_40;
    case 0x47:
      goto switchD_00a0642c_caseD_47;
    case 0x49:
      goto switchD_00a0642c_caseD_49;
    case 0x4a:
    case 0x56:
      goto switchD_00a0642c_caseD_4a;
    case 0x4c:
      goto switchD_00a0642c_caseD_4c;
    case 0x51:
      goto switchD_00a0642c_caseD_51;
    case 0x58:
      goto switchD_00a0642c_caseD_58;
    case 0x59:
      goto switchD_00a0642c_caseD_59;
    case 0x5e:
      goto switchD_00a0642c_caseD_5e;
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
      goto switchD_00a0642c_caseD_62;
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
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
      break;
    case 0xd9:
    case 0xdb:
    case 0xdd:
    case 0xdf:
    case 0xe1:
    case 0xe3:
    case 0xe5:
    case 0xe7:
    case 0xe9:
    case 0xeb:
    case 0xed:
    case 0xef:
    case 0xf1:
    case 0xf3:
    case 0xf5:
    case 0xf7:
    case 0xf9:
    case 0xfb:
    case 0xfd:
    case 0xff:
      goto switchD_00a0642c_caseD_d9;
    }
LAB_00a06338:
    param_3 = auVar19._0_8_;
    auVar17 = <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::
              next(&local_90,&local_b0);
    pbVar1 = local_88;
    __n = puStack_80;
    auVar2 = auVar19;
  } while( true );
}


// ===== 00a06e14  FUN_00a06e14 =====

undefined8 FUN_00a06e14(long param_1,long param_2)

{
  int iVar1;
  
  if (0xb < param_2 - 1U) {
    return 0;
  }
  iVar1 = 0;
  if (param_2 != 0xc) {
    iVar1 = (int)param_2;
  }
  if ((*(int *)(param_1 + 0x80) == 1) && (*(int *)(param_1 + 0x84) != iVar1)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(int *)(param_1 + 0x84) = iVar1;
  return 0xff;
}


// ===== 00a06e64  FUN_00a06e64 =====

undefined8 FUN_00a06e64(long param_1,ulong param_2)

{
  if (0x3b < param_2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x88) == 1) && (*(int *)(param_1 + 0x8c) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(int *)(param_1 + 0x8c) = (int)param_2;
  return 0xff;
}


// ===== 00a06ea8  FUN_00a06ea8 =====

undefined8 FUN_00a06ea8(long param_1,ulong param_2)

{
  if (0x3c < param_2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x90) == 1) && (*(int *)(param_1 + 0x94) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(int *)(param_1 + 0x94) = (int)param_2;
  return 0xff;
}


// ===== 00a06eec  FUN_00a06eec =====

undefined8 FUN_00a06eec(long param_1,long param_2)

{
  if (0x34 < param_2 - 1U) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x60) == 1) && (*(int *)(param_1 + 100) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(int *)(param_1 + 100) = (int)param_2;
  return 0xff;
}


// ===== 00a06f34  FUN_00a06f34 =====

undefined8 FUN_00a06f34(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (param_2 != iVar1) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x28) == 1) && (*(int *)(param_1 + 0x2c) != iVar1)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(int *)(param_1 + 0x2c) = iVar1;
  return 0xff;
}


// ===== 00a06f78  FUN_00a06f78 =====

undefined8 FUN_00a06f78(long param_1,long param_2)

{
  if (0x16d < param_2 - 1U) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x68) == 1) && (*(int *)(param_1 + 0x6c) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(int *)(param_1 + 0x6c) = (int)param_2;
  return 0xff;
}


// ===== 00a06fc0  FUN_00a06fc0 =====

undefined8 FUN_00a06fc0(long param_1,long param_2)

{
  if (3 < param_2 - 1U) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x44) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(int *)(param_1 + 0x44) = (int)param_2;
  return 0xff;
}


// ===== 00a07008  FUN_00a07008 =====

undefined8 FUN_00a07008(long *param_1,long param_2)

{
  if ((*param_1 == 1) && (param_1[1] != param_2)) {
    return 1;
  }
  *param_1 = 1;
  param_1[1] = param_2;
  return 0xff;
}


// ===== 00a07038  FUN_00a07038 =====

undefined8 FUN_00a07038(long param_1,ulong param_2)

{
  if (999999999 < param_2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x98) == 1) && (*(int *)(param_1 + 0x9c) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(int *)(param_1 + 0x9c) = (int)param_2;
  return 0xff;
}


// ===== 00a07084  FUN_00a07084 =====

undefined8 FUN_00a07084(long param_1,ulong param_2)

{
  if (param_2 >> 0x1f != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x18) == 1) && (*(int *)(param_1 + 0x1c) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(int *)(param_1 + 0x1c) = (int)param_2;
  return 0xff;
}


// ===== 00a070c8  FUN_00a070c8 =====

undefined8 FUN_00a070c8(long param_1,ulong param_2)

{
  if (99 < param_2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x20) == 1) && (*(int *)(param_1 + 0x24) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(int *)(param_1 + 0x24) = (int)param_2;
  return 0xff;
}


// ===== 00a0710c  FUN_00a0710c =====

undefined8 FUN_00a0710c(long param_1,ulong param_2)

{
  if (0x35 < param_2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) == 1) && (*(int *)(param_1 + 0x5c) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(int *)(param_1 + 0x5c) = (int)param_2;
  return 0xff;
}


// ===== 00a07150  FUN_00a07150 =====

undefined8 FUN_00a07150(long param_1,ulong param_2)

{
  if (0x35 < param_2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x50) == 1) && (*(int *)(param_1 + 0x54) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(int *)(param_1 + 0x54) = (int)param_2;
  return 0xff;
}


// ===== 00a07194  FUN_00a07194 =====

undefined8 FUN_00a07194(long param_1,ulong param_2)

{
  if (param_2 >> 0x1f != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x30) == 1) && (*(int *)(param_1 + 0x34) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(int *)(param_1 + 0x34) = (int)param_2;
  return 0xff;
}


// ===== 00a071d8  FUN_00a071d8 =====

undefined8 FUN_00a071d8(long param_1,ulong param_2)

{
  if (99 < param_2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x38) == 1) && (*(int *)(param_1 + 0x3c) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(int *)(param_1 + 0x3c) = (int)param_2;
  return 0xff;
}


// ===== 00a0721c  FUN_00a0721c =====

undefined8 FUN_00a0721c(long param_1,long param_2)

{
  if (0x1e < param_2 - 1U) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x74) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(int *)(param_1 + 0x74) = (int)param_2;
  return 0xff;
}


// ===== 00a07264  FUN_00a07264 =====

undefined8 FUN_00a07264(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0xc) {
    iVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x78);
  }
  else {
    if (0x17 < param_2) {
      return 0;
    }
    param_2 = (ulong)((int)param_2 - 0xc);
    iVar2 = 1;
    iVar1 = *(int *)(param_1 + 0x78);
  }
  if ((iVar1 != 1) || (*(int *)(param_1 + 0x7c) == iVar2)) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(int *)(param_1 + 0x7c) = iVar2;
    if ((*(int *)(param_1 + 0x80) != 1) || (*(int *)(param_1 + 0x84) == (int)param_2)) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(int *)(param_1 + 0x84) = (int)param_2;
      return 0xff;
    }
  }
  return 1;
}


// ===== 00a072ec  FUN_00a072ec =====

undefined8 FUN_00a072ec(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (param_2 != iVar1) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x10) == 1) && (*(int *)(param_1 + 0x14) != iVar1)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(int *)(param_1 + 0x14) = iVar1;
  return 0xff;
}


// ===== 00a07330  FUN_00a07330 =====

undefined8 FUN_00a07330(long param_1,long param_2)

{
  if (0xb < param_2 - 1U) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x48) == 1) && (*(int *)(param_1 + 0x4c) != (int)param_2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(int *)(param_1 + 0x4c) = (int)param_2;
  return 0xff;
}


// ===== 00a07378  FUN_00a07378 =====

void FUN_00a07378(long *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  if (param_5 < param_4) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&BYTE_00380396,0x1c,&PTR_s__root__cargo_registry_src_index__00af8eb8);
  }
  if (param_3 < param_4) {
    *(undefined1 *)(param_1 + 1) = 4;
    *param_1 = 0;
    return;
  }
  lVar4 = 0;
  uVar3 = 0;
  do {
    if (param_3 == uVar3) break;
    uVar2 = *(byte *)(param_2 + uVar3) - 0x30;
    if (9 < uVar2) {
      if (uVar3 < param_4) {
        *(undefined1 *)(param_1 + 1) = 3;
        *param_1 = 0;
        return;
      }
      lVar5 = param_3 - uVar3;
      if (param_3 < uVar3 || lVar5 == 0) {
        if (lVar5 == 0) goto LAB_00a07478;
      }
      else {
        iVar6 = (int)*(char *)(param_2 + uVar3);
        if (iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41)) {
LAB_00a07478:
          *param_1 = param_2 + uVar3;
          param_1[1] = lVar5;
          param_1[2] = lVar4;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_2,param_3,uVar3,param_3,&PTR_s__root__cargo_registry_src_index__00af8ee8);
    }
    lVar5 = lVar4 * 10;
    if ((SUB168(SEXT816(lVar4) * SEXT816(10),8) != lVar5 >> 0x3f) ||
       (uVar1 = (ulong)(byte)uVar2, lVar4 = lVar5 + uVar1, SCARRY8(lVar5,uVar1))) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return;
    }
    uVar3 = uVar3 + 1;
  } while (param_5 != uVar3);
  uVar3 = param_3;
  if (param_5 <= param_3) {
    uVar3 = param_5;
  }
  if (((param_5 < param_3) && (uVar3 != 0)) &&
     (*(char *)(param_2 + uVar3) + 0x40 < 0 != SCARRY4((int)*(char *)(param_2 + uVar3),0x40))) {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (param_2,param_3,uVar3,param_3,&PTR_s__root__cargo_registry_src_index__00af8ed0);
  }
  *param_1 = param_2 + uVar3;
  param_1[1] = param_3 - uVar3;
  param_1[2] = lVar4;
  return;
}


// ===== 00a074cc  chrono::format::parse::parse_rfc2822 =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::parse::parse_rfc2822 */

void __rustcall
chrono::format::parse::parse_rfc2822
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  long local_68;
  undefined8 local_60;
  char *local_58;
  char local_50;
  undefined7 uStack_4f;
  uint local_48;
  undefined4 uStack_44;
  ulong uVar12;
  
  auVar16 = FUN_00a03e5c(param_3,param_4);
  scan::short_weekday(&local_58);
  if ((local_48 & 0xff) == 0xff) {
    auVar16 = FUN_00a03e5c(auVar16._0_8_,auVar16._8_8_);
joined_r0x00a075e8:
    uVar15 = auVar16._8_8_;
    pbVar7 = auVar16._0_8_;
    if (uVar15 == 0) {
      cVar9 = '\x04';
    }
    else {
      if (9 < *pbVar7 - 0x30) goto LAB_00a075cc;
      uVar11 = (ulong)(*pbVar7 - 0x30) & 0xff;
      if (uVar15 == 1) {
LAB_00a07618:
        uVar13 = 1;
      }
      else {
        bVar2 = pbVar7[1];
        uVar3 = (int)(char)bVar2 - 0x30;
        if (9 < uVar3) {
          if ((char)bVar2 == -0x41 || (char)bVar2 + 0x41 < 0 != SCARRY4((int)(char)bVar2,0x41)) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (pbVar7,uVar15,1,uVar15,&PTR_s__root__cargo_registry_src_index__00af8ee8);
          }
          goto LAB_00a07618;
        }
        uVar11 = uVar11 * 10 + (ulong)(byte)uVar3;
        if ((2 < uVar15) &&
           (iVar10 = (int)(char)pbVar7[2],
           iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar7,uVar15,2,uVar15,&PTR_s__root__cargo_registry_src_index__00af8ed0);
        }
        uVar13 = 2;
      }
      if (0x1e < uVar11 - 1) goto LAB_00a07760;
      if ((*(int *)(param_2 + 0x70) == 1) && (*(int *)(param_2 + 0x74) != (int)uVar11))
      goto LAB_00a07644;
      *(undefined4 *)(param_2 + 0x70) = 1;
      *(int *)(param_2 + 0x74) = (int)uVar11;
      auVar16 = FUN_00a03e5c(pbVar7 + uVar13,uVar15 - uVar13);
      uVar11 = auVar16._8_8_;
      if (uVar15 - uVar13 <= uVar11) {
        bVar8 = uVar15 == uVar13;
LAB_00a07710:
        uVar1 = 3;
        if (bVar8) {
          uVar1 = 4;
        }
        *(undefined1 *)(param_1 + 1) = uVar1;
        goto LAB_00a075f4;
      }
      if (auVar16._0_8_ == 0) {
LAB_00a07964:
        *(char *)(param_1 + 1) = (char)uVar11;
        goto LAB_00a075f4;
      }
      scan::short_month0(&local_58);
      cVar9 = local_50;
      if (local_58 != (char *)0x0) {
        if ((byte)local_48 < 0xc) {
          uVar15 = CONCAT71(uStack_4f,local_50);
          iVar10 = (local_48 & 0xff) + 1;
          if ((*(int *)(param_2 + 0x48) != 1) ||
             (cVar9 = '\x01', *(int *)(param_2 + 0x4c) == iVar10)) {
            *(undefined4 *)(param_2 + 0x48) = 1;
            *(int *)(param_2 + 0x4c) = iVar10;
            auVar16 = FUN_00a03e5c(local_58,uVar15);
            uVar11 = auVar16._8_8_;
            if (uVar11 < uVar15) {
              if (auVar16._0_8_ != 0) {
                FUN_00a07378(&local_58,auVar16._0_8_,uVar11,2,0xffffffffffffffff);
                cVar9 = local_50;
                if (local_58 != (char *)0x0) {
                  uVar15 = CONCAT71(uStack_4f,local_50);
                  uVar13 = CONCAT44(uStack_44,local_48);
                  if (uVar11 - uVar15 == 2) {
                    if (uVar13 < 0x32) {
                      uVar12 = uVar13 + 2000;
                    }
                    else {
                      uVar12 = uVar13 + 0x76c;
                      if (99 < uVar13) {
                        uVar12 = uVar13;
                      }
                    }
                  }
                  else {
                    uVar12 = uVar13;
                    if (uVar11 - uVar15 == 3) {
                      uVar12 = uVar13 + 0x76c;
                    }
                  }
                  iVar10 = (int)uVar12;
                  if (uVar12 != (long)iVar10) goto LAB_00a07760;
                  if ((*(int *)(param_2 + 0x10) == 1) && (*(int *)(param_2 + 0x14) != iVar10))
                  goto LAB_00a07644;
                  *(undefined4 *)(param_2 + 0x10) = 1;
                  *(int *)(param_2 + 0x14) = iVar10;
                  auVar16 = FUN_00a03e5c(local_58,uVar15);
                  uVar11 = auVar16._8_8_;
                  if (uVar11 < uVar15) {
                    if (auVar16._0_8_ != 0) {
                      FUN_00a07378(&local_58,auVar16._0_8_,uVar11,2,2);
                      pcVar14 = local_58;
                      cVar9 = local_50;
                      if (local_58 != (char *)0x0) {
                        uVar5 = CONCAT71(uStack_4f,local_50);
                        cVar9 = FUN_00a07264(param_2,CONCAT44(uStack_44,local_48));
                        if (cVar9 == -1) {
                          auVar16 = FUN_00a03e5c(pcVar14,uVar5);
                          FUN_00a0ac3c(&local_58,auVar16._0_8_,auVar16._8_8_,0x3a);
                          cVar9 = local_50;
                          if (local_58 != (char *)0x0) {
                            auVar16 = FUN_00a03e5c(local_58,CONCAT71(uStack_4f,local_50));
                            FUN_00a07378(&local_58,auVar16._0_8_,auVar16._8_8_,2,2);
                            pcVar14 = local_58;
                            cVar9 = local_50;
                            if (local_58 != (char *)0x0) {
                              if (0x3b < CONCAT44(uStack_44,local_48)) {
LAB_00a07760:
                                *(undefined1 *)(param_1 + 1) = 0;
                                goto LAB_00a075f4;
                              }
                              uVar15 = CONCAT71(uStack_4f,local_50);
                              if ((*(int *)(param_2 + 0x88) == 1) &&
                                 (*(uint *)(param_2 + 0x8c) != local_48)) {
LAB_00a07644:
                                *(undefined1 *)(param_1 + 1) = 1;
                                goto LAB_00a075f4;
                              }
                              *(undefined4 *)(param_2 + 0x88) = 1;
                              *(uint *)(param_2 + 0x8c) = local_48;
                              auVar16 = FUN_00a03e5c(local_58,uVar15);
                              FUN_00a0ac3c(&local_68,auVar16._0_8_,auVar16._8_8_,0x3a);
                              if (local_68 != 0) {
                                FUN_00a07378(&local_58,local_68,local_60,2,2);
                                if (local_58 == (char *)0x0) {
                                  *(char *)(param_1 + 1) = local_50;
                                  goto LAB_00a075f4;
                                }
                                if (0x3c < CONCAT44(uStack_44,local_48)) goto LAB_00a07760;
                                uVar15 = CONCAT71(uStack_4f,local_50);
                                if ((*(int *)(param_2 + 0x90) == 1) &&
                                   (*(uint *)(param_2 + 0x94) != local_48)) goto LAB_00a07644;
                                *(undefined4 *)(param_2 + 0x90) = 1;
                                *(uint *)(param_2 + 0x94) = local_48;
                                pcVar14 = local_58;
                              }
                              auVar16 = FUN_00a03e5c(pcVar14,uVar15);
                              uVar11 = auVar16._8_8_;
                              if (uVar15 <= uVar11) {
                                bVar8 = uVar15 == 0;
                                goto LAB_00a07710;
                              }
                              if (auVar16._0_8_ == 0) goto LAB_00a07964;
                              FUN_00a0a5b0(&local_58);
                              pcVar14 = local_58;
                              cVar9 = local_50;
                              if (local_58 != (char *)0x0) {
                                uVar5 = CONCAT71(uStack_4f,local_50);
                                if ((*(int *)(param_2 + 0xa0) != 1) ||
                                   (cVar9 = '\x01', *(uint *)(param_2 + 0xa4) == local_48)) {
                                  *(undefined4 *)(param_2 + 0xa0) = 1;
                                  *(uint *)(param_2 + 0xa4) = local_48;
                                  FUN_00a09ed8(&local_58,local_58,uVar5);
                                  pcVar6 = local_58;
                                  while (pcVar6 != (char *)0x0) {
                                    uVar5 = CONCAT71(uStack_4f,local_50);
                                    local_58 = pcVar6;
                                    FUN_00a09ed8(&local_58,pcVar6,uVar5);
                                    pcVar14 = pcVar6;
                                    pcVar6 = local_58;
                                  }
                                  *param_1 = pcVar14;
                                  param_1[1] = uVar5;
                                  return;
                                }
                              }
                            }
                          }
                          goto LAB_00a075f0;
                        }
                      }
                      *(char *)(param_1 + 1) = cVar9;
                      goto LAB_00a075f4;
                    }
                  }
                  else {
                    uVar11 = 3;
                    if (uVar15 == 0) {
                      uVar11 = 4;
                    }
                  }
                  *(char *)(param_1 + 1) = (char)uVar11;
                  goto LAB_00a075f4;
                }
                goto LAB_00a075f0;
              }
            }
            else {
              uVar11 = 3;
              if (uVar15 == 0) {
                uVar11 = 4;
              }
            }
            *(char *)(param_1 + 1) = (char)uVar11;
            goto LAB_00a075f4;
          }
        }
        else {
          cVar9 = '\0';
        }
      }
    }
  }
  else {
    lVar4 = CONCAT71(uStack_4f,local_50);
    if ((lVar4 == 0) || (*local_58 != ',')) {
LAB_00a075cc:
      cVar9 = '\x03';
    }
    else {
      if ((lVar4 + -1 != 0) &&
         (iVar10 = (int)local_58[1], iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41)))
      {
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (local_58,lVar4,1,lVar4,&PTR_s__root__cargo_registry_src_index__00af8f00);
      }
      if ((*(byte *)(param_2 + 0xa8) == 0xff) ||
         ((uint)*(byte *)(param_2 + 0xa8) == (local_48 & 0xff))) {
        *(byte *)(param_2 + 0xa8) = (byte)local_48;
        auVar16 = FUN_00a03e5c(local_58 + 1,lVar4 + -1);
        goto joined_r0x00a075e8;
      }
      cVar9 = '\x01';
    }
  }
LAB_00a075f0:
  *(char *)(param_1 + 1) = cVar9;
LAB_00a075f4:
  *param_1 = 0;
  return;
}


// ===== 00a079e4  FUN_00a079e4 =====

void FUN_00a079e4(undefined8 *param_1,long param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined1 uVar8;
  char *local_48;
  char local_40;
  undefined7 uStack_3f;
  int local_38;
  undefined4 uStack_34;
  
  if (param_4 < 4) {
    uVar8 = 4;
LAB_00a07ab0:
    *(undefined1 *)(param_1 + 1) = uVar8;
    *param_1 = 0;
    return;
  }
  if ((((9 < *param_3 - 0x30) || (9 < param_3[1] - 0x30)) || (9 < param_3[2] - 0x30)) ||
     (9 < param_3[3] - 0x30)) {
    uVar8 = 3;
    goto LAB_00a07ab0;
  }
  uVar2 = param_4 - 4;
  if ((uVar2 != 0) &&
     (iVar6 = (int)(char)param_3[4], iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (param_3,param_4,4,param_4,&PTR_s__root__cargo_registry_src_index__00af8ed0);
  }
  iVar6 = (((param_3[1] - 0x30) + (*param_3 - 0x30) * 10 & 0xff) * 10 + (param_3[2] - 0x30 & 0xff))
          * 10 + (param_3[3] - 0x30 & 0xff);
  uVar8 = 1;
  if ((*(int *)(param_2 + 0x10) == 1) && (*(int *)(param_2 + 0x14) != iVar6)) goto LAB_00a07ab0;
  *(undefined4 *)(param_2 + 0x10) = 1;
  *(int *)(param_2 + 0x14) = iVar6;
  if (param_4 != 4) {
    if (param_3[4] != 0x2d) {
LAB_00a07e10:
      uVar8 = 3;
      goto LAB_00a07e14;
    }
    if (uVar2 != 1) {
      iVar6 = (int)(char)param_3[5];
      if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_3 + 4,uVar2,1,uVar2,&PTR_s__root__cargo_registry_src_index__00af9278);
      }
      if (2 < uVar2) {
        uVar1 = (int)(char)param_3[5] - 0x30;
        if ((uVar1 < 10) && (param_3[6] - 0x30 < 10)) {
          lVar7 = param_4 - 5;
          if ((lVar7 != 2) &&
             (iVar6 = (int)(char)param_3[7],
             iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (param_3 + 5,lVar7,2,lVar7,&PTR_s__root__cargo_registry_src_index__00af8ed0);
          }
          lVar7 = ((ulong)(uVar1 * 5) & 0x7f) * 2 + (ulong)(byte)(param_3[6] - 0x30);
          if (0xb < lVar7 - 1U) {
            uVar8 = 0;
            goto LAB_00a07e14;
          }
          uVar8 = 1;
          iVar6 = (int)lVar7;
          if ((*(int *)(param_2 + 0x48) == 1) && (*(int *)(param_2 + 0x4c) != iVar6))
          goto LAB_00a07e14;
          *(undefined4 *)(param_2 + 0x48) = 1;
          *(int *)(param_2 + 0x4c) = iVar6;
          FUN_00a0ac3c(&local_48,param_3 + 7,param_4 - 7,0x2d);
          if ((local_48 == (char *)0x0) ||
             (FUN_00a07378(&local_48,local_48,CONCAT71(uStack_3f,local_40),2,2),
             local_48 == (char *)0x0)) goto LAB_00a07e3c;
          if (0x1e < CONCAT44(uStack_34,local_38) - 1U) {
            uVar8 = 0;
LAB_00a07e5c:
            *(undefined1 *)(param_1 + 1) = uVar8;
            *param_1 = 0;
            return;
          }
          lVar7 = CONCAT71(uStack_3f,local_40);
          uVar8 = 1;
          if ((*(int *)(param_2 + 0x70) == 1) && (*(int *)(param_2 + 0x74) != local_38))
          goto LAB_00a07e5c;
          *(undefined4 *)(param_2 + 0x70) = 1;
          *(int *)(param_2 + 0x74) = local_38;
          if (lVar7 == 0) {
            local_40 = '\x04';
            goto LAB_00a07e3c;
          }
          cVar5 = *local_48;
          if (((cVar5 != ' ') && (cVar5 != 'T')) && (cVar5 != 't')) {
            local_40 = '\x03';
            goto LAB_00a07e3c;
          }
          if ((lVar7 + -1 != 0) && (local_48[1] + 0x40 < 0 != SCARRY4((int)local_48[1],0x40))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (local_48,lVar7,1,lVar7,&PTR_s__root__cargo_registry_src_index__00af8f18);
          }
          FUN_00a07378(&local_48,local_48 + 1,lVar7 + -1,2,2);
          pcVar4 = local_48;
          cVar5 = local_40;
          if (local_48 == (char *)0x0) {
LAB_00a07e84:
            *(char *)(param_1 + 1) = cVar5;
            *param_1 = 0;
            return;
          }
          uVar3 = CONCAT71(uStack_3f,local_40);
          cVar5 = FUN_00a07264(param_2,CONCAT44(uStack_34,local_38));
          if (cVar5 != -1) goto LAB_00a07e84;
          FUN_00a0ac3c(&local_48,pcVar4,uVar3,0x3a);
          if ((local_48 == (char *)0x0) ||
             (FUN_00a07378(&local_48,local_48,CONCAT71(uStack_3f,local_40),2,2),
             local_48 == (char *)0x0)) goto LAB_00a07e3c;
          if (CONCAT44(uStack_34,local_38) < 0x3c) {
            uVar8 = 1;
            if ((*(int *)(param_2 + 0x88) == 1) && (*(int *)(param_2 + 0x8c) != local_38))
            goto LAB_00a07eac;
            *(undefined4 *)(param_2 + 0x88) = 1;
            *(int *)(param_2 + 0x8c) = local_38;
            FUN_00a0ac3c(&local_48,local_48,CONCAT71(uStack_3f,local_40),0x3a);
            if ((local_48 == (char *)0x0) ||
               (FUN_00a07378(&local_48,local_48,CONCAT71(uStack_3f,local_40),2,2),
               local_48 == (char *)0x0)) goto LAB_00a07e3c;
            if (CONCAT44(uStack_34,local_38) < 0x3d) {
              lVar7 = CONCAT71(uStack_3f,local_40);
              uVar8 = 1;
              if ((*(int *)(param_2 + 0x90) == 1) && (*(int *)(param_2 + 0x94) != local_38))
              goto LAB_00a07eac;
              *(undefined4 *)(param_2 + 0x90) = 1;
              *(int *)(param_2 + 0x94) = local_38;
              if ((lVar7 != 0) && (*local_48 == '.')) {
                if ((lVar7 + -1 != 0) &&
                   (iVar6 = (int)local_48[1],
                   iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) {
                    /* WARNING: Subroutine does not return */
                  core::str::slice_error_fail
                            (local_48,lVar7,1,lVar7,&PTR_s__root__cargo_registry_src_index__00af8f30
                            );
                }
                chrono::format::scan::nanosecond(&local_48,local_48 + 1,lVar7 + -1);
                if (local_48 == (char *)0x0) goto LAB_00a07e3c;
                if (999999999 < CONCAT44(uStack_34,local_38)) goto LAB_00a07ea8;
                lVar7 = CONCAT71(uStack_3f,local_40);
                uVar8 = 1;
                if ((*(int *)(param_2 + 0x98) == 1) && (*(int *)(param_2 + 0x9c) != local_38))
                goto LAB_00a07eac;
                *(undefined4 *)(param_2 + 0x98) = 1;
                *(int *)(param_2 + 0x9c) = local_38;
              }
              FUN_00a08220(&local_48,local_48,lVar7,1,0,1);
              if (local_48 != (char *)0x0) {
                if (0x2a288 < local_38 + 0x15144U) {
                  *(undefined1 *)(param_1 + 1) = 0;
                  *param_1 = 0;
                  return;
                }
                if ((*(int *)(param_2 + 0xa0) != 1) || (*(int *)(param_2 + 0xa4) == local_38)) {
                  *param_1 = local_48;
                  param_1[1] = CONCAT71(uStack_3f,local_40);
                  *(undefined4 *)(param_2 + 0xa0) = 1;
                  *(int *)(param_2 + 0xa4) = local_38;
                  return;
                }
                local_40 = '\x01';
              }
LAB_00a07e3c:
              *(char *)(param_1 + 1) = local_40;
              *param_1 = 0;
              return;
            }
          }
LAB_00a07ea8:
          uVar8 = 0;
LAB_00a07eac:
          *(undefined1 *)(param_1 + 1) = uVar8;
          *param_1 = 0;
          return;
        }
        goto LAB_00a07e10;
      }
    }
  }
  uVar8 = 4;
LAB_00a07e14:
  *(undefined1 *)(param_1 + 1) = uVar8;
  *param_1 = 0;
  return;
}


// ===== 00a07f84  chrono::format::parse::parse_rfc3339_relaxed =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::parse::parse_rfc3339_relaxed */

void __rustcall chrono::format::parse::parse_rfc3339_relaxed(long *param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  byte *local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  int local_28;
  
  FUN_00a05764(&local_38);
  if (local_38 != (byte *)0x0) {
    lVar5 = CONCAT71(uStack_2f,local_30);
    if (lVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 0;
      return;
    }
    bVar1 = *local_38;
    if (((bVar1 != 0x20) && (bVar1 != 0x54)) && (bVar1 != 0x74)) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 0;
      return;
    }
    if ((lVar5 + -1 != 0) && ((char)local_38[1] + 0x40 < 0 != SCARRY4((int)(char)local_38[1],0x40)))
    {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (local_38,lVar5,1,lVar5,&PTR_s__root__cargo_registry_src_index__00af8ff0);
    }
    FUN_00a05764(&local_38,param_2,local_38 + 1,lVar5 + -1,&DAT_00af9008,
                 &PTR_s__root__cargo_registry_src_index__00af90e0);
    if (local_38 == (byte *)0x0) goto LAB_00a08114;
    auVar7 = FUN_00a03e5c(local_38,CONCAT71(uStack_2f,local_30));
    uVar3 = auVar7._8_8_;
    pbVar2 = auVar7._0_8_;
    if (2 < uVar3) {
      uVar4 = 0x20;
      uVar6 = uVar4;
      if (0x19 < *pbVar2 - 0x41) {
        uVar6 = 0;
      }
      if ((uVar6 | *pbVar2) == 0x75) {
        if (0x19 < pbVar2[1] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | pbVar2[1]) == 0x74) {
          uVar6 = 0x20;
          if (0x19 < pbVar2[2] - 0x41) {
            uVar6 = 0;
          }
          if ((uVar6 | pbVar2[2]) == 99) {
            lVar5 = uVar3 - 3;
            if ((lVar5 != 0) && ((char)pbVar2[3] + 0x40 < 0 != SCARRY4((int)(char)pbVar2[3],0x40)))
            {
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail
                        (pbVar2,uVar3,3,uVar3,&PTR_s__root__cargo_registry_src_index__00af90e0);
            }
            local_28 = 0;
            local_38 = pbVar2 + 3;
            goto LAB_00a080e0;
          }
        }
      }
    }
    FUN_00a08580(&local_38,pbVar2,uVar3,1,0,1);
    if (local_38 != (byte *)0x0) {
      lVar5 = CONCAT71(uStack_2f,local_30);
LAB_00a080e0:
      if ((*(int *)(param_2 + 0xa0) == 1) && (*(int *)(param_2 + 0xa4) != local_28)) {
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 0;
        return;
      }
      *param_1 = (long)local_38;
      param_1[1] = lVar5;
      *(undefined4 *)(param_2 + 0xa0) = 1;
      *(int *)(param_2 + 0xa4) = local_28;
      return;
    }
  }
LAB_00a08114:
  *(undefined1 *)(param_1 + 1) = local_30;
  *param_1 = 0;
  return;
}


// ===== 00a08190  chrono::format::parse::set_weekday_with_number_from_monday =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::parse::set_weekday_with_number_from_monday */

undefined8 __rustcall
chrono::format::parse::set_weekday_with_number_from_monday(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 - 1;
  if (6 < uVar1) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xa8) != 0xff) && ((uint)*(byte *)(param_1 + 0xa8) != (uint)uVar1)) {
    return 1;
  }
  *(char *)(param_1 + 0xa8) = (char)uVar1;
  return 0xff;
}


// ===== 00a081cc  chrono::format::parse::set_weekday_with_num_days_from_sunday =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::parse::set_weekday_with_num_days_from_sunday */

undefined8 __rustcall
chrono::format::parse::set_weekday_with_num_days_from_sunday(long param_1,ulong param_2)

{
  uint uVar1;
  
  if (6 < param_2) {
    return 0;
  }
  uVar1 = (uint)(0x5040302010006 >> ((param_2 & 7) << 3)) & 7;
  if ((*(byte *)(param_1 + 0xa8) != 0xff) && (*(byte *)(param_1 + 0xa8) != uVar1)) {
    return 1;
  }
  *(char *)(param_1 + 0xa8) = (char)uVar1;
  return 0xff;
}


// ===== 00a08220  FUN_00a08220 =====

void FUN_00a08220(long *param_1,byte *param_2,ulong param_3,ulong param_4,ulong param_5,
                 ulong param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  
  if ((param_3 == 0) || ((param_4 & 1) == 0)) {
    if (param_3 != 0) {
      bVar1 = *param_2;
      goto LAB_00a08274;
    }
  }
  else {
    bVar1 = *param_2;
    if ((bVar1 | 0x20) == 0x7a) {
      if ((1 < param_3) && ((char)param_2[1] + 0x40 < 0 != SCARRY4((int)(char)param_2[1],0x40))) {
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af90f8);
      }
      *param_1 = (long)(param_2 + 1);
      param_1[1] = param_3 - 1;
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
LAB_00a08274:
    uVar6 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if (uVar6 < 0xe0) {
        uVar6 = param_2[1] & 0x3f | (uVar6 & 0x1f) << 6;
        goto joined_r0x00a0837c;
      }
      uVar3 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
      if (uVar6 < 0xf0) {
        uVar6 = uVar3 | (uVar6 & 0x1f) << 0xc;
        goto joined_r0x00a0837c;
      }
      uVar6 = param_2[3] & 0x3f | uVar3 << 6 | (uVar6 & 7) << 0x12;
      if (uVar6 == 0x2b) goto LAB_00a08344;
LAB_00a08280:
      if (uVar6 == 0x2d) {
        if ((param_3 != 1) &&
           (iVar7 = (int)(char)param_2[1], iVar7 == -0x41 || iVar7 + 0x41 < 0 != SCARRY4(iVar7,0x41)
           )) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af9128);
        }
        lVar9 = 1;
        bVar4 = true;
        param_3 = param_3 - 1;
      }
      else {
        if ((uVar6 != 0x2212) || ((param_6 & 1) == 0)) goto LAB_00a084e4;
        if (param_3 < 4) {
          if (param_3 != 3) goto code_r0x00a082b0;
        }
        else {
          iVar7 = (int)(char)param_2[3];
          if (iVar7 == -0x41 || iVar7 + 0x41 < 0 != SCARRY4(iVar7,0x41)) {
code_r0x00a082b0:
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (param_2,param_3,3,param_3,&PTR_s__root__cargo_registry_src_index__00af9140);
          }
        }
        bVar4 = true;
        lVar9 = 3;
        param_3 = param_3 - 3;
      }
    }
    else {
joined_r0x00a0837c:
      if (uVar6 != 0x2b) goto LAB_00a08280;
LAB_00a08344:
      if ((param_3 != 1) &&
         (iVar7 = (int)(char)param_2[1], iVar7 == -0x41 || iVar7 + 0x41 < 0 != SCARRY4(iVar7,0x41)))
      {
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af9110);
      }
      bVar4 = false;
      lVar9 = 1;
      param_3 = param_3 - 1;
    }
    if (1 < param_3) {
      param_2 = param_2 + lVar9;
      bVar1 = *param_2;
      uVar5 = 3;
      if ((9 < bVar1 - 0x30) || (bVar2 = param_2[1], 9 < (bVar2 - 0x30 & 0xff))) goto LAB_00a083dc;
      lVar9 = param_3 - 2;
      if (lVar9 != 0) {
        iVar7 = (int)(char)param_2[2];
        if (iVar7 == -0x41 || iVar7 + 0x41 < 0 != SCARRY4(iVar7,0x41)) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (param_2,param_3,2,param_3,&PTR_s__root__cargo_registry_src_index__00af9158);
        }
        if (param_2[2] != 0x3a) {
LAB_00a084e4:
          *(undefined1 *)(param_1 + 1) = 3;
          *param_1 = 0;
          return;
        }
        pbVar8 = param_2 + 3;
        if (lVar9 == 1) {
          if ((param_5 & 1) != 0) {
            iVar7 = 0;
            lVar9 = 0;
LAB_00a08418:
            *param_1 = (long)pbVar8;
            param_1[1] = lVar9;
            iVar7 = iVar7 + (((uint)bVar2 + (uint)bVar1 * 10) - 0x10 & 0xff) * 0xe10;
            iVar11 = -iVar7;
            if (!bVar4) {
              iVar11 = iVar7;
            }
            *(int *)(param_1 + 2) = iVar11;
            return;
          }
        }
        else {
          iVar7 = (int)(char)*pbVar8;
          if (iVar7 == -0x41 || iVar7 + 0x41 < 0 != SCARRY4(iVar7,0x41)) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (param_2 + 2,lVar9,1,lVar9,&PTR_s__root__cargo_registry_src_index__00af9278);
          }
          uVar10 = param_3 - 3;
          if (1 < uVar10) {
            iVar7 = (int)(char)*pbVar8;
            uVar6 = (uint)param_2[4];
            if (iVar7 - 0x30U < 6) {
              if (uVar6 - 0x30 < 10) {
                if ((uVar10 != 2) &&
                   (iVar11 = (int)(char)param_2[5],
                   iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41))) {
                    /* WARNING: Subroutine does not return */
                  core::str::slice_error_fail
                            (pbVar8,uVar10,2,uVar10,&PTR_s__root__cargo_registry_src_index__00af9170
                            );
                }
                uVar6 = (uVar6 + iVar7 * 10) - 0x10;
                iVar7 = (uVar6 & 0xff) * 0x40 + (uVar6 & 0xff) * -4;
                lVar9 = param_3 - 5;
                pbVar8 = param_2 + 5;
                goto LAB_00a08418;
              }
            }
            else if (((iVar7 - 0x36U & 0xff) < 4) && ((uVar6 - 0x30 & 0xff) < 10)) {
              *(undefined1 *)(param_1 + 1) = 0;
              *param_1 = 0;
              return;
            }
            goto LAB_00a084e4;
          }
        }
      }
    }
  }
  uVar5 = 4;
LAB_00a083dc:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *param_1 = 0;
  return;
}


// ===== 00a08580  FUN_00a08580 =====

void FUN_00a08580(long *param_1,byte *param_2,ulong param_3,ulong param_4,ulong param_5,
                 ulong param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if ((param_3 == 0) || ((param_4 & 1) == 0)) {
    if (param_3 != 0) {
      bVar2 = *param_2;
      goto LAB_00a085ec;
    }
  }
  else {
    bVar2 = *param_2;
    if ((bVar2 | 0x20) == 0x7a) {
      if ((1 < param_3) && ((char)param_2[1] + 0x40 < 0 != SCARRY4((int)(char)param_2[1],0x40))) {
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af90f8);
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *param_1 = (long)(param_2 + 1);
      param_1[1] = param_3 - 1;
      return;
    }
LAB_00a085ec:
    uVar10 = (uint)bVar2;
    if (-1 < (char)bVar2) {
joined_r0x00a08640:
      if (uVar10 == 0x2b) goto LAB_00a086c0;
LAB_00a08644:
      if (uVar10 == 0x2d) {
        if ((param_3 != 1) &&
           (iVar11 = (int)(char)param_2[1],
           iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41))) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af9128);
        }
        lVar12 = 1;
        bVar6 = true;
        param_3 = param_3 - 1;
        if (param_3 < 2) goto LAB_00a0877c;
        goto LAB_00a08710;
      }
      if ((uVar10 == 0x2212) && ((param_6 & 1) != 0)) {
        if (param_3 < 4) {
          if (param_3 != 3) goto code_r0x00a08674;
        }
        else {
          iVar11 = (int)(char)param_2[3];
          if (iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41)) {
code_r0x00a08674:
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (param_2,param_3,3,param_3,&PTR_s__root__cargo_registry_src_index__00af9140);
          }
        }
        bVar6 = true;
        lVar12 = 3;
        param_3 = param_3 - 3;
        goto joined_r0x00a0870c;
      }
LAB_00a08830:
      uVar9 = 3;
      goto LAB_00a08834;
    }
    if (uVar10 < 0xe0) {
      uVar10 = param_2[1] & 0x3f | (uVar10 & 0x1f) << 6;
      goto joined_r0x00a08640;
    }
    uVar5 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
    if (0xef < uVar10) {
      uVar10 = param_2[3] & 0x3f | uVar5 << 6 | (uVar10 & 7) << 0x12;
      goto joined_r0x00a08640;
    }
    uVar10 = uVar5 | (uVar10 & 0x1f) << 0xc;
    if (uVar10 != 0x2b) goto LAB_00a08644;
LAB_00a086c0:
    if ((param_3 != 1) &&
       (iVar11 = (int)(char)param_2[1], iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41)
       )) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af9110);
    }
    bVar6 = false;
    lVar12 = 1;
    param_3 = param_3 - 1;
joined_r0x00a0870c:
    if (1 < param_3) {
LAB_00a08710:
      param_2 = param_2 + lVar12;
      bVar2 = *param_2;
      uVar9 = 3;
      if ((9 < bVar2 - 0x30) || (bVar3 = param_2[1], 9 < (bVar3 - 0x30 & 0xff))) goto LAB_00a08834;
      if ((param_3 - 2 != 0) &&
         (iVar11 = (int)(char)param_2[2],
         iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41))) {
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_2,param_3,2,param_3,&PTR_s__root__cargo_registry_src_index__00af9158);
      }
      auVar13 = FUN_00a03d24(param_2 + 2,param_3 - 2);
      uVar8 = auVar13._8_8_;
      pbVar7 = auVar13._0_8_;
      if (pbVar7 == (byte *)0x0) {
        *(char *)(param_1 + 1) = auVar13[8];
        *param_1 = 0;
        return;
      }
      if (1 < uVar8) {
        bVar4 = *pbVar7;
        uVar10 = (uint)pbVar7[1];
        if (bVar4 - 0x30 < 6) {
          if (uVar10 - 0x30 < 10) {
            lVar12 = uVar8 - 2;
            if ((lVar12 != 0) &&
               (iVar11 = (int)(char)pbVar7[2],
               iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41))) {
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail
                        (pbVar7,uVar8,2,uVar8,&PTR_s__root__cargo_registry_src_index__00af9170);
            }
            pbVar7 = pbVar7 + 2;
            uVar10 = (uVar10 + (uint)bVar4 * 10) - 0x10;
            iVar11 = (uVar10 & 0xff) * 0x40 + (uVar10 & 0xff) * -4;
            goto LAB_00a08858;
          }
        }
        else if (((bVar4 - 0x36 & 0xff) < 4) && ((uVar10 - 0x30 & 0xff) < 10)) {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 0;
          return;
        }
        goto LAB_00a08830;
      }
      if (((param_5 & 1) != 0) && (uVar8 == 0)) {
        iVar11 = 0;
        lVar12 = 0;
LAB_00a08858:
        *param_1 = (long)pbVar7;
        param_1[1] = lVar12;
        iVar11 = iVar11 + (((uint)bVar3 + (uint)bVar2 * 10) - 0x10 & 0xff) * 0xe10;
        iVar1 = -iVar11;
        if (!bVar6) {
          iVar1 = iVar11;
        }
        *(int *)(param_1 + 2) = iVar1;
        return;
      }
    }
  }
LAB_00a0877c:
  uVar9 = 4;
LAB_00a08834:
  *(undefined1 *)(param_1 + 1) = uVar9;
  *param_1 = 0;
  return;
}


// ===== 00a088f8  FUN_00a088f8 =====

bool FUN_00a088f8(long param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint in_w10;
  uint in_w13;
  
  uVar1 = (int)param_2 >> 0xd;
  bVar2 = (int)uVar1 < 0;
  if (bVar2) {
    uVar4 = param_2 >> 3 & 0x3ff;
    uVar3 = (uint)uVar4;
  }
  else {
    in_w13 = uVar1 / 100;
    in_w10 = uVar1 % 100;
    uVar4 = param_2 >> 3 & 0x3ff;
    uVar3 = (uint)uVar4;
  }
  if (0x2dc < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar4,0x2dd,&PTR_s__root__cargo_registry_src_index__00af9188);
  }
  if (((*(uint *)(param_1 + 0x10) & 1) == 0) || (*(uint *)(param_1 + 0x14) == uVar1)) {
    if (*(uint *)(param_1 + 0x18) == 0 && bVar2) {
      if (-1 < (int)uVar1) {
        return false;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        return false;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x18) ^ 1;
      if (*(uint *)(param_1 + 0x1c) == in_w13) {
        uVar1 = 1;
      }
      if (bVar2) {
        return false;
      }
      if ((uVar1 & 1) == 0) {
        return false;
      }
      if ((*(int *)(param_1 + 0x20) == 1) && (*(uint *)(param_1 + 0x24) != in_w10)) {
        return false;
      }
    }
    uVar1 = (int)uVar4 + (uint)(&BYTE_003803b4)[uVar4];
    if ((*(int *)(param_1 + 0x48) != 1) || (*(uint *)(param_1 + 0x4c) == uVar1 >> 6)) {
      if ((*(uint *)(param_1 + 0x70) & 1) == 0) {
        return true;
      }
      return *(uint *)(param_1 + 0x74) == (uVar1 >> 1 & 0x1f);
    }
  }
  return false;
}


// ===== 00a08a14  FUN_00a08a14 =====

uint FUN_00a08a14(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 4 & 0x1ff;
  uVar1 = (uVar3 + (param_2 & 7)) % 7;
  uVar2 = uVar1 + 7;
  if (5 < uVar1) {
    uVar2 = uVar1;
  }
  if (((*(int *)(param_1 + 0x68) != 1) || (*(uint *)(param_1 + 0x6c) == uVar3)) &&
     ((*(int *)(param_1 + 0x50) != 1 ||
      (*(uint *)(param_1 + 0x54) ==
       ((int)(short)(((short)uVar3 - (short)uVar2) + 0xc) / 7 & 0xffffU))))) {
    uVar2 = *(uint *)(param_1 + 0x58) ^ 1;
    if (*(int *)(param_1 + 0x5c) == (int)((ulong)((uVar3 - uVar1) + 6) * 0x24924925 >> 0x20)) {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}


// ===== 00a08ac0  FUN_00a08ac0 =====

bool FUN_00a08ac0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  uint in_w16;
  
  uVar2 = param_2 & 7;
  uVar6 = param_2 >> 4 & 0x1ff;
  uVar9 = uVar2 + 7;
  if (2 < uVar2) {
    uVar9 = uVar2;
  }
  uVar9 = uVar9 + uVar6;
  iVar10 = (int)param_2 >> 0xd;
  if (uVar9 < 7) {
    iVar10 = iVar10 + -1;
    iVar7 = iVar10 % 400;
    uVar9 = 0x406U >> (ulong)((byte)(&DAT_00380893)[(iVar7 >> 0x1f & 400U) + iVar7] & 0x1f) & 1 |
            0x34;
  }
  else {
    uVar9 = uVar9 / 7;
    if ((0x406U >> (ulong)(param_2 & 0xf) & 1 | 0x34) < uVar9) {
      iVar10 = iVar10 + 1;
      uVar9 = 1;
    }
    iVar7 = iVar10 % 400;
  }
  uVar1 = (iVar7 >> 0x1f & 400U) + iVar7;
  lVar8 = (long)(int)uVar1;
  if (399 < uVar1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(lVar8,400,&PTR_s__root__cargo_registry_src_index__00af9480);
  }
  uVar5 = uVar9 << 4 | iVar10 << 10;
  uVar1 = (int)uVar5 >> 10;
  bVar3 = (int)uVar1 < 0;
  if (bVar3) {
    iVar10 = *(int *)(param_1 + 0x28);
    bVar4 = (&DAT_00380893)[lVar8];
  }
  else {
    in_w16 = uVar1 / 100;
    uVar5 = uVar1 % 100;
    iVar10 = *(int *)(param_1 + 0x28);
    bVar4 = (&DAT_00380893)[lVar8];
  }
  if ((iVar10 != 1) || (*(uint *)(param_1 + 0x2c) == uVar1)) {
    if (*(uint *)(param_1 + 0x30) == 0 && bVar3) {
      if (-1 < (int)uVar1) {
        return false;
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        return false;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x30) ^ 1;
      if (*(uint *)(param_1 + 0x34) == in_w16) {
        uVar1 = 1;
      }
      if (bVar3) {
        return false;
      }
      if ((uVar1 & 1) == 0) {
        return false;
      }
      if ((*(int *)(param_1 + 0x38) == 1) && (*(uint *)(param_1 + 0x3c) != uVar5)) {
        return false;
      }
    }
    if ((*(int *)(param_1 + 0x60) != 1) ||
       (*(uint *)(param_1 + 100) == (uVar9 & 0x3f | (uint)(bVar4 >> 4)))) {
      return *(byte *)(param_1 + 0xa8) == 0xff ||
             (uint)*(byte *)(param_1 + 0xa8) == (uVar6 + uVar2) % 7;
    }
  }
  return false;
}


// ===== 00a08cb4  <chrono::format::parsed::chrono::format::parsed::Parsed>::to_datetime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::parsed::chrono::format::parsed::Parsed>::to_datetime */

void __rustcall
<chrono::format::parsed::chrono::format::parsed::Parsed>::to_datetime(int *param_1,uint *param_2)

{
  uint uVar1;
  int local_38;
  undefined8 local_34;
  int local_2c;
  undefined1 local_28;
  
  if (param_2[0x28] == 1) {
    uVar1 = param_2[0x29];
    to_naive_datetime_with_offset(&local_2c,param_2,uVar1);
  }
  else {
    if ((*param_2 & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 0;
      return;
    }
    uVar1 = 0;
    to_naive_datetime_with_offset(&local_2c,param_2,0);
  }
  if (local_2c != 0) {
    if (uVar1 + 0x1517f < 0x2a2ff) {
      <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_offset
                (&local_38,&local_2c,uVar1);
      if (local_38 != 0) {
        param_1[3] = uVar1;
        *(undefined8 *)(param_1 + 1) = local_34;
        *param_1 = local_38;
        return;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0;
      return;
    }
    local_28 = 0;
  }
  *(undefined1 *)(param_1 + 1) = local_28;
  *param_1 = 0;
  return;
}


// ===== 00a08de4  <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_date =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_date */

ulong __rustcall
<chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_date(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_w4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar13 = *(uint *)(param_1 + 0x1c);
  uVar11 = *(uint *)(param_1 + 0x20);
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar15 = *(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x18) == 1) {
    if ((uVar4 & 1) == 0) {
      if (uVar11 == 0) {
        return 0x201;
      }
      if (uVar15 < 100) {
        if ((int)uVar13 < 0) {
          return 0x101;
        }
        iVar3 = (int)((long)(int)uVar13 * 100);
        if (((long)(int)uVar13 * 100 - (long)iVar3 == 0) &&
           (uVar2 = iVar3 + uVar15, !SCARRY4(iVar3,uVar15))) {
          uVar11 = uVar2 & 0xffffff00;
          goto LAB_00a08f1c;
        }
      }
    }
    else {
LAB_00a08e48:
      if ((uVar11 == 0) || (uVar15 < 100)) {
        if ((int)uVar2 < 0) {
          return 0x101;
        }
        uVar4 = *(uint *)(param_1 + 0x18) ^ 1;
        if (uVar13 == uVar2 / 100) {
          uVar4 = 1;
        }
        uVar11 = uVar11 ^ 1;
        if (uVar15 == uVar2 % 100) {
          uVar11 = 1;
        }
        uVar7 = 0x100;
        if ((uVar4 != 1) || (uVar11 == 0)) goto LAB_00a092ac;
        uVar11 = uVar2 & 0x7fffff00;
        goto LAB_00a08f1c;
      }
    }
    goto LAB_00a092a0;
  }
  if (uVar11 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar11 = 1;
      goto LAB_00a08e48;
    }
    if (99 < uVar15) goto LAB_00a092a0;
    iVar3 = 2000;
    if (0x45 < uVar15) {
      iVar3 = 0x76c;
    }
    uVar2 = iVar3 + uVar15;
    uVar11 = uVar2 & 0xf00;
LAB_00a08f1c:
    uVar4 = 1;
    uVar13 = *(uint *)(param_1 + 0x2c);
    uVar12 = *(uint *)(param_1 + 0x30);
    uVar15 = *(uint *)(param_1 + 0x34);
    uVar10 = *(uint *)(param_1 + 0x38);
    uVar14 = *(uint *)(param_1 + 0x28);
    uVar16 = *(uint *)(param_1 + 0x3c);
    if (uVar12 != 1) goto LAB_00a08f38;
LAB_00a08ec4:
    uVar8 = uVar10;
    if ((uVar14 & 1) != 0) goto LAB_00a08f44;
    if (uVar10 == 0) {
      return 0x201;
    }
    if (uVar16 < 100) {
      if ((int)uVar15 < 0) {
        return 0x101;
      }
      iVar3 = (int)((long)(int)uVar15 * 100);
      if (((long)(int)uVar15 * 100 - (long)iVar3 != 0) ||
         (uVar8 = iVar3 + uVar16, SCARRY4(iVar3,uVar16))) goto LAB_00a092a0;
      uVar5 = uVar8 & 0xffffff00;
      goto joined_r0x00a08fe8;
    }
    goto LAB_00a092a0;
  }
  uVar11 = uVar2 & 0xffffff00;
  uVar13 = *(uint *)(param_1 + 0x2c);
  uVar12 = *(uint *)(param_1 + 0x30);
  uVar15 = *(uint *)(param_1 + 0x34);
  uVar10 = *(uint *)(param_1 + 0x38);
  uVar14 = *(uint *)(param_1 + 0x28);
  uVar16 = *(uint *)(param_1 + 0x3c);
  if (uVar12 == 1) goto LAB_00a08ec4;
LAB_00a08f38:
  if (uVar10 == 0) {
    uVar5 = uVar13 & 0xffffff00;
    uVar8 = uVar13;
    uVar9 = uVar14;
    if (uVar4 != 0) goto LAB_00a08fec;
LAB_00a09244:
    if ((((uVar9 & 1) == 0) || (*(int *)(param_1 + 0x60) != 1)) || (*(char *)(param_1 + 0xa8) == -1)
       ) {
      return 0x201;
    }
    uVar2 = <chrono::naive::date::chrono::naive::date::NaiveDate>::from_isoywd_opt
                      (uVar8 & 0xff | uVar5,*(undefined4 *)(param_1 + 100));
    if (uVar2 != 0) {
      uVar17 = (ulong)uVar2;
      iVar3 = FUN_00a088f8(param_1,uVar17);
      if (iVar3 == 0) {
        return 0x101;
      }
      iVar3 = FUN_00a08a14(param_1,uVar17);
      if (iVar3 == 0) {
        return 0x101;
      }
LAB_00a093fc:
      if (*(int *)(param_1 + 0x40) == 1) {
        uVar7 = uVar17 >> 3 & 0x3ff;
        if (0x2dc < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar7,0x2dd,&PTR_s__root__cargo_registry_src_index__00af9188);
        }
        if (*(int *)(param_1 + 0x44) !=
            (((uint)uVar7 + (uint)(&BYTE_003803b4)[uVar7] >> 6) - 1) / 3 + 1) {
          return 0x101;
        }
      }
      return uVar17 << 0x20;
    }
  }
  else {
    if ((uVar14 & 1) == 0) {
      if (99 < uVar16) goto LAB_00a092a0;
      iVar3 = 2000;
      if (0x45 < uVar16) {
        iVar3 = 0x76c;
      }
      uVar8 = iVar3 + uVar16;
      uVar5 = uVar8 & 0xf00;
    }
    else {
      uVar8 = 1;
LAB_00a08f44:
      if ((uVar8 != 0) && (99 < uVar16)) goto LAB_00a092a0;
      if ((int)uVar13 < 0) {
        return 0x101;
      }
      in_w4 = uVar12 ^ 1;
      uVar8 = uVar8 ^ 1;
      uVar5 = in_w4;
      if (uVar15 == uVar13 / 100) {
        uVar5 = 1;
      }
      if (uVar16 == uVar13 % 100) {
        uVar8 = 1;
      }
      uVar7 = 0x100;
      if ((uVar5 != 1) || (uVar8 == 0)) goto LAB_00a092ac;
      uVar5 = uVar13 & 0x7fffff00;
      uVar8 = uVar13;
    }
joined_r0x00a08fe8:
    uVar9 = 1;
    if (uVar4 == 0) goto LAB_00a09244;
LAB_00a08fec:
    uVar11 = uVar2 & 0xff | uVar11;
    if ((*(int *)(param_1 + 0x48) != 1) || ((*(uint *)(param_1 + 0x70) & 1) == 0)) {
      if ((*(uint *)(param_1 + 0x68) & 1) == 0) {
        if (((*(uint *)(param_1 + 0x50) & 1) == 0) || (*(char *)(param_1 + 0xa8) == -1)) {
          if (((*(uint *)(param_1 + 0x58) & 1) == 0) || (*(char *)(param_1 + 0xa8) == -1))
          goto LAB_00a09244;
          uVar17 = FUN_00a0aca8(uVar11,*(undefined4 *)(param_1 + 0x5c),*(char *)(param_1 + 0xa8),0);
        }
        else {
          uVar17 = FUN_00a0aca8(uVar11,*(undefined4 *)(param_1 + 0x54),*(char *)(param_1 + 0xa8),6);
        }
        if ((uVar17 & 1) != 0) {
          return uVar17 & 0xff00 | 1;
        }
        uVar17 = uVar17 >> 0x20;
        iVar3 = FUN_00a088f8(param_1,uVar17);
        if (iVar3 == 0) {
          return 0x101;
        }
        iVar3 = FUN_00a08ac0(param_1,uVar17);
        if (iVar3 == 0) {
          return 0x101;
        }
      }
      else {
        if (uVar11 - 0x3ffff < 0xfff80002) {
          return 1;
        }
        uVar7 = 0;
        if (*(int *)(param_1 + 0x6c) - 0x16fU < 0xfffffe92) goto LAB_00a092ac;
        uVar2 = *(int *)(param_1 + 0x6c) << 4 | uVar11 << 0xd |
                (uint)(byte)(&DAT_0037f93b)[((int)uVar11 % 400 >> 0x1f & 400U) + (int)uVar11 % 400];
        uVar17 = (ulong)uVar2;
        if (0x16e0 < (uVar2 & 0x1ff8)) goto LAB_00a092a0;
        iVar3 = FUN_00a088f8(param_1,uVar2);
        if (iVar3 == 0) {
          return 0x101;
        }
        uVar7 = FUN_00a08ac0(param_1,uVar17);
        if ((uVar7 & 1) == 0) {
          return 0x101;
        }
      }
      uVar7 = FUN_00a08a14(param_1,uVar17);
joined_r0x00a094d4:
      if ((uVar7 & 1) == 0) {
        return 0x101;
      }
      goto LAB_00a093fc;
    }
    if (0xc < *(uint *)(param_1 + 0x4c)) {
      return 1;
    }
    uVar7 = 0;
    if (0x1f < *(uint *)(param_1 + 0x74)) goto LAB_00a092ac;
    if (0xfff80001 < uVar11 - 0x3ffff) {
      uVar2 = *(uint *)(param_1 + 0x74) << 4 | *(uint *)(param_1 + 0x4c) << 9 |
              (uint)(byte)(&DAT_0037f93b)[((int)uVar11 % 400 >> 0x1f & 400U) + (int)uVar11 % 400];
      if (""[uVar2 >> 3] != 0) {
        uVar2 = uVar2 + ""[uVar2 >> 3] * -8;
        uVar4 = (byte)(&DAT_0037f93b)[((int)uVar11 % 400 >> 0x1f & 400U) + (int)uVar11 % 400] & 7;
        uVar5 = uVar2 >> 4 & 0x1ff;
        uVar8 = uVar2 | uVar11 << 0xd;
        uVar17 = (ulong)uVar8;
        uVar11 = uVar4 + 7;
        if (2 < uVar4) {
          uVar11 = uVar4;
        }
        uVar11 = uVar5 + uVar11;
        iVar3 = (int)uVar8 >> 0xd;
        if (uVar11 < 7) {
          iVar3 = iVar3 + -1;
          iVar6 = iVar3 % 400;
          uVar11 = 0x406U >> (ulong)((byte)(&DAT_00380893)[(iVar6 >> 0x1f & 400U) + iVar6] & 0x1f) &
                   1 | 0x34;
        }
        else {
          uVar11 = uVar11 / 7;
          if ((0x406U >> (ulong)(uVar2 & 0xf) & 1 | 0x34) < uVar11) {
            iVar3 = iVar3 + 1;
            uVar11 = 1;
          }
          iVar6 = iVar3 % 400;
        }
        uVar2 = (iVar6 >> 0x1f & 400U) + iVar6;
        if (399 < uVar2) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    ((long)(int)uVar2,400,&PTR_s__root__cargo_registry_src_index__00af9480);
        }
        uVar9 = (int)(uVar11 << 4 | iVar3 << 10) >> 10;
        bVar1 = (int)uVar9 < 0;
        if (!bVar1) {
          in_w4 = (uint)(uVar15 == uVar9 / 100);
          uVar16 = (uint)(uVar16 == uVar9 % 100);
        }
        if ((uVar14 != 0) && (uVar13 != uVar9)) {
          return 0x101;
        }
        if (bVar1 && uVar12 == 0) {
          uVar7 = 0x100;
          if ((uVar10 != 0) || (-1 < (int)uVar9)) goto LAB_00a092ac;
        }
        else {
          uVar7 = 0x100;
          if ((bVar1) || ((((uVar12 ^ 1 | in_w4) & 1) == 0 || (((uVar10 ^ 1 | uVar16) & 1) == 0))))
          goto LAB_00a092ac;
        }
        if ((*(int *)(param_1 + 0x60) == 1) &&
           (*(uint *)(param_1 + 100) !=
            (uVar11 & 0x3f | (uint)((byte)(&DAT_00380893)[(int)uVar2] >> 4)))) {
          return 0x101;
        }
        if ((*(byte *)(param_1 + 0xa8) != 0xff) &&
           ((uint)*(byte *)(param_1 + 0xa8) != (uVar5 + uVar4) % 7)) {
          return 0x101;
        }
        uVar7 = FUN_00a08a14(param_1,uVar8);
        goto joined_r0x00a094d4;
      }
    }
  }
LAB_00a092a0:
  uVar7 = 0;
LAB_00a092ac:
  return uVar7 | 1;
}


// ===== 00a09518  <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_time =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_time */

void __rustcall
<chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_time
          (undefined1 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_2 + 0x78) != 1) goto LAB_00a095b4;
  uVar1 = *(uint *)(param_2 + 0x7c);
  if (1 < uVar1) goto LAB_00a09600;
  if (*(int *)(param_2 + 0x80) != 1) goto LAB_00a095b4;
  uVar2 = *(uint *)(param_2 + 0x84);
  if (0xb < uVar2) goto LAB_00a09600;
  if (*(int *)(param_2 + 0x88) != 1) goto LAB_00a095b4;
  uVar3 = *(uint *)(param_2 + 0x8c);
  if (0x3b < uVar3) goto LAB_00a09600;
  if ((*(uint *)(param_2 + 0x90) & 1) == 0) {
    iVar6 = 0;
    uVar5 = 0;
    if (*(int *)(param_2 + 0x98) == 1) goto LAB_00a095a4;
LAB_00a095e8:
    uVar7 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x94);
    if (uVar5 < 0x3c) {
      iVar6 = 0;
      iVar4 = *(int *)(param_2 + 0x98);
    }
    else {
      if (uVar5 != 0x3c) goto LAB_00a09600;
      uVar5 = 0x3b;
      iVar6 = 1000000000;
      iVar4 = *(int *)(param_2 + 0x98);
    }
    if (iVar4 != 1) goto LAB_00a095e8;
LAB_00a095a4:
    uVar7 = *(uint *)(param_2 + 0x9c);
    if (999999999 < uVar7) goto LAB_00a09600;
    if (*(uint *)(param_2 + 0x90) == 0) {
LAB_00a095b4:
      param_1[1] = 2;
      *param_1 = 1;
      return;
    }
  }
  if ((uVar7 + iVar6 < 1000000000) || (uVar5 == 0x3b)) {
    *param_1 = 0;
    *(uint *)(param_1 + 4) = (uVar2 + uVar1 * 0xc) * 0xe10 + uVar3 * 0x3c + uVar5;
    *(uint *)(param_1 + 8) = uVar7 + iVar6;
    return;
  }
LAB_00a09600:
  param_1[1] = 0;
  *param_1 = 1;
  return;
}


// ===== 00a09638  <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset */

void __rustcall
<chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
          (uint *param_1,uint *param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 local_128;
  long lStack_120;
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
  ulong uStack_c0;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  uint local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  char local_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar10 = to_naive_date();
  uVar13 = param_2[0x1e];
  if (uVar13 != 1) {
LAB_00a09738:
    bVar8 = false;
    uVar11 = 2;
joined_r0x00a097a8:
    if ((uVar10 & 1) != 0) {
      bVar7 = true;
      uVar12 = *param_2;
      goto joined_r0x00a09728;
    }
    if ((*param_2 & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = uVar11;
      goto LAB_00a09914;
    }
    if (!bVar8) {
      lVar17 = *(long *)(param_2 + 2);
      goto LAB_00a097bc;
    }
    goto LAB_00a09908;
  }
  if (1 < param_2[0x1f]) {
LAB_00a097a0:
    uVar11 = 0;
    bVar8 = true;
    goto joined_r0x00a097a8;
  }
  if (param_2[0x20] != 1) goto LAB_00a09738;
  if (0xb < param_2[0x21]) goto LAB_00a097a0;
  if (param_2[0x22] != 1) goto LAB_00a09738;
  if (0x3b < param_2[0x23]) goto LAB_00a097a0;
  bVar8 = false;
  if ((param_2[0x24] & 1) == 0) {
    iVar9 = 0;
    uVar12 = 0;
    if (param_2[0x26] == 1) goto LAB_00a096f8;
LAB_00a096dc:
    uVar16 = 0;
  }
  else {
    uVar12 = param_2[0x25];
    if (uVar12 < 0x3c) {
      iVar9 = 0;
      uVar16 = param_2[0x26];
    }
    else {
      if (uVar12 != 0x3c) goto LAB_00a097a0;
      uVar12 = 0x3b;
      iVar9 = 1000000000;
      uVar16 = param_2[0x26];
    }
    if (uVar16 != 1) goto LAB_00a096dc;
LAB_00a096f8:
    uVar16 = param_2[0x27];
    if (999999999 < uVar16) goto LAB_00a097a0;
    if (param_2[0x24] == 0) goto LAB_00a09738;
  }
  uVar16 = uVar16 + iVar9;
  if ((999999999 < uVar16) && (uVar12 != 0x3b)) goto LAB_00a097a0;
  if ((uVar10 & 1) == 0) {
    uVar13 = (uint)(uVar10 >> 0x20);
    iVar9 = (int)uVar13 >> 0xd;
    iVar15 = iVar9 + -1;
    if (iVar9 < 1) {
      iVar9 = (1U - iVar9) / 400 + 1;
      iVar15 = iVar15 + iVar9 * 400;
      iVar9 = iVar9 * -0x23ab1;
    }
    else {
      iVar9 = 0;
    }
    uVar12 = (param_2[0x21] + param_2[0x1f] * 0xc) * 0xe10 + param_2[0x23] * 0x3c + uVar12;
    if (*(long *)param_2 != 1) {
LAB_00a09b94:
      *param_1 = uVar13;
      param_1[1] = uVar12;
      param_1[2] = uVar16;
      return;
    }
    lVar17 = ((long)(int)((((uVar13 >> 4 & 0x1ff) + iVar9) - iVar15 / 100) + (iVar15 * 0x5b5 >> 2) +
                          (iVar15 / 100 >> 2) + -0xaf93b) * 0x15180 - (long)param_3) + (ulong)uVar12
    ;
    if ((*(long *)(param_2 + 2) == lVar17) ||
       ((999999999 < uVar16 && (*(long *)(param_2 + 2) == lVar17 + 1)))) goto LAB_00a09b94;
    goto LAB_00a0976c;
  }
  bVar7 = false;
  uVar12 = *param_2;
joined_r0x00a09728:
  if ((uVar12 & 1) == 0) {
    uVar11 = (char)(uVar10 >> 8);
    goto LAB_00a09730;
  }
  uVar10 = uVar10 >> 8 & 0xff;
  if ((uVar10 != 0) && ((lVar17 = *(long *)(param_2 + 2), !bVar7 || (!bVar8)))) {
    if (uVar10 == 1) {
LAB_00a0976c:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
LAB_00a097bc:
    lVar1 = lVar17 + param_3;
    if (!SCARRY8(lVar17,(long)param_3)) {
      uVar14 = lVar1 % 0x15180;
      lVar1 = lVar1 / 0x15180 + ((long)uVar14 >> 0x3f);
      uVar10 = uVar14 + 0x15180;
      if (-1 < (long)uVar14) {
        uVar10 = uVar14;
      }
      if ((0xfffffffeffffffff < lVar1 - 0x7ff506c5U) &&
         (iVar9 = <chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt
                            ((int)lVar1 + 0xaf93b), iVar9 != 0)) {
        uStack_110 = *(undefined8 *)(param_2 + 6);
        uVar18 = *(ulong *)(param_2 + 4);
        uStack_100 = *(undefined8 *)(param_2 + 10);
        local_108 = *(undefined8 *)(param_2 + 8);
        uVar11 = (undefined1)(uVar10 >> 0x18);
        local_78 = (uVar10 & 0xff) << 0x20;
        local_78 = CONCAT17(uVar11,(undefined7)local_78);
        local_80 = (undefined1)param_2[0x2a];
        local_84 = param_2[0x29];
        uStack_f0 = *(undefined8 *)(param_2 + 0xe);
        local_f8 = *(undefined8 *)(param_2 + 0xc);
        uStack_e0 = *(undefined8 *)(param_2 + 0x12);
        local_e8 = *(undefined8 *)(param_2 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,iVar9);
        uStack_d0 = *(undefined8 *)(param_2 + 0x16);
        local_d8 = *(undefined8 *)(param_2 + 0x14);
        uVar14 = *(ulong *)(param_2 + 0x1a);
        local_c8 = *(undefined8 *)(param_2 + 0x18);
        local_78._0_7_ = CONCAT25((short)(uVar10 >> 8),(undefined5)local_78);
        local_78 = CONCAT17(uVar11,(undefined7)local_78);
        local_70 = 0;
        uStack_94 = *(undefined8 *)(param_2 + 0x25);
        local_9c = *(ulong *)(param_2 + 0x23);
        local_b8 = *(undefined8 *)(param_2 + 0x1c);
        local_128 = 1;
        uVar12 = param_2[0x1f];
        uVar3 = param_2[0x20];
        uVar16 = param_2[0x21];
        uVar4 = param_2[0x22];
        local_8c = *(undefined8 *)(param_2 + 0x27);
        uVar5 = param_2[0x23];
        uVar6 = local_78._4_4_ % 0x3c;
        lStack_120 = lVar17;
        if (((local_9c & 0x100000000) == 0) || ((uint)uStack_94 != 0x3c)) {
          uVar2 = 0;
          if ((uint)uStack_94 != uVar6) {
            uVar2 = (ushort)(local_9c >> 0x20) & 1;
          }
          uVar11 = 1;
          if (uVar2 == 0) {
            local_9c = 0x100000000;
            uVar10 = (ulong)uStack_94 >> 0x20;
            uStack_94 = CONCAT44((int)uVar10,uVar6);
            goto LAB_00a0998c;
          }
        }
        else {
          if (uVar6 == 0) {
            local_118 = uVar18;
            uStack_c0 = uVar14;
            local_b0 = uVar13;
            local_ac = uVar12;
            local_a8 = uVar3;
            local_a4 = uVar16;
            local_a0 = uVar4;
            <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_signed
                      (&local_6c,&local_78,1,0);
            if (CONCAT22(uStack_6a,CONCAT11(uStack_6b,local_6c)) == 0) {
                    /* WARNING: Subroutine does not return */
              core::option::expect_failed
                        ("`NaiveDateTime - TimeDelta` overflowed",0x26,
                         &PTR_s__root__cargo_registry_src_index__00af91a0);
            }
            local_78 = CONCAT44(uStack_68,CONCAT22(uStack_6a,CONCAT11(uStack_6b,local_6c)));
            local_70 = uStack_64;
          }
          else if (uVar6 != 0x3b) {
            uVar11 = 1;
            goto LAB_00a09730;
          }
LAB_00a0998c:
          if (((uVar18 & 1) == 0) ||
             (uVar11 = 1, (int)(uVar18 >> 0x20) == (int)(uint)local_78 >> 0xd)) {
            uVar6 = (uint)local_78 >> 4 & 0x1ff;
            local_118 = CONCAT44((int)(uint)local_78 >> 0xd,1);
            if (uVar6 - 1 < 0x16e) {
              if (((uVar14 & 1) == 0) || (uVar11 = 1, (uint)(uVar14 >> 0x20) == uVar6)) {
                uStack_c0 = CONCAT44((uint)local_78 >> 4,1) & 0x1ffffffffff;
                local_a4 = local_78._4_4_ / 0xe10;
                if (local_78._4_4_ >> 6 < 0x2a3) {
                  local_ac = 0;
                }
                else {
                  if (0x2a2 < local_78._4_4_ >> 7) goto LAB_00a09adc;
                  local_a4 = local_78._4_4_ / 0xe10 - 0xc;
                  local_ac = 1;
                }
                uVar11 = 1;
                if (((uVar13 == 0) || (uVar12 == local_ac)) &&
                   ((local_b0 = 1, uVar3 == 0 || (uVar16 == local_a4)))) {
                  uVar13 = local_78._4_4_ / 0x3c +
                           ((local_78._4_4_ / 0x3c) * 0x8889 >> 0x15) * -0x3c;
                  local_a8 = 1;
                  if ((uVar4 == 0) || (uVar11 = 1, uVar5 == (uVar13 & 0xffff))) {
                    local_a0 = 1;
                    local_9c = CONCAT44(local_9c._4_4_,uVar13) & 0xffffffff0000ffff;
                    uVar10 = to_naive_date(&local_128);
                    if ((uVar10 & 1) == 0) {
                      to_naive_time(&local_6c,&local_128);
                      uVar11 = uStack_6b;
                      if (local_6c != '\x01') {
                        *param_1 = (uint)(uVar10 >> 0x20);
                        *(ulong *)(param_1 + 1) = CONCAT44(uStack_64,uStack_68);
                        return;
                      }
                    }
                    else {
                      uVar11 = (char)(uVar10 >> 8);
                    }
                  }
                }
              }
            }
            else {
LAB_00a09adc:
              uVar11 = 0;
            }
          }
        }
LAB_00a09730:
        *(undefined1 *)(param_1 + 1) = uVar11;
        goto LAB_00a09914;
      }
    }
  }
LAB_00a09908:
  *(undefined1 *)(param_1 + 1) = 0;
LAB_00a09914:
  *param_1 = 0;
  return;
}


// ===== 00a09bec  chrono::format::scan::nanosecond =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::scan::nanosecond */

void __rustcall chrono::format::scan::nanosecond(long *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 1) = 4;
    *param_1 = 0;
    return;
  }
  if (9 < *param_2 - 0x30) {
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0;
    return;
  }
  uVar3 = (ulong)(*param_2 - 0x30) & 0xff;
  uVar2 = param_3;
  if (param_3 == 1) goto LAB_00a09d90;
  if (param_2[1] - 0x30 < 10) {
    uVar3 = uVar3 * 10 + (ulong)(byte)(param_2[1] - 0x30);
    if (param_3 == 2) goto LAB_00a09d90;
    if (param_2[2] - 0x30 < 10) {
      uVar3 = uVar3 * 10 + (ulong)(byte)(param_2[2] - 0x30);
      if (param_3 == 3) goto LAB_00a09d90;
      if (param_2[3] - 0x30 < 10) {
        uVar3 = uVar3 * 10 + (ulong)(byte)(param_2[3] - 0x30);
        if (param_3 == 4) goto LAB_00a09d90;
        if (param_2[4] - 0x30 < 10) {
          uVar3 = uVar3 * 10 + (ulong)(byte)(param_2[4] - 0x30);
          if (param_3 == 5) goto LAB_00a09d90;
          if (param_2[5] - 0x30 < 10) {
            uVar3 = uVar3 * 10 + (ulong)(byte)(param_2[5] - 0x30);
            if (param_3 == 6) goto LAB_00a09d90;
            if (param_2[6] - 0x30 < 10) {
              uVar3 = uVar3 * 10 + (ulong)(byte)(param_2[6] - 0x30);
              if (param_3 == 7) goto LAB_00a09d90;
              if (param_2[7] - 0x30 < 10) {
                uVar3 = uVar3 * 10 + (ulong)(byte)(param_2[7] - 0x30);
                if (param_3 == 8) goto LAB_00a09d90;
                if (param_2[8] - 0x30 < 10) {
                  uVar3 = uVar3 * 10 + (ulong)(byte)(param_2[8] - 0x30);
                  if ((9 < param_3) &&
                     (iVar4 = (int)(char)param_2[9],
                     iVar4 == -0x41 || iVar4 + 0x41 < 0 != SCARRY4(iVar4,0x41))) {
                    /* WARNING: Subroutine does not return */
                    core::str::slice_error_fail
                              (param_2,param_3,9,param_3,
                               &PTR_s__root__cargo_registry_src_index__00af9290);
                  }
                  uVar2 = 9;
                  goto LAB_00a09d90;
                }
                uVar2 = 8;
              }
              else {
                uVar2 = 7;
              }
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  if ((param_3 <= uVar2) ||
     (iVar4 = (int)(char)param_2[uVar2], iVar4 == -0x41 || iVar4 + 0x41 < 0 != SCARRY4(iVar4,0x41)))
  {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail();
  }
LAB_00a09d90:
  lVar5 = uVar3 * *(long *)(&DAT_003806b8 + uVar2 * 8);
  if (SUB168(SEXT816((long)uVar3) * SEXT816(*(long *)(&DAT_003806b8 + uVar2 * 8)),8) !=
      lVar5 >> 0x3f) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  pbVar8 = param_2 + uVar2;
  pbVar10 = (byte *)0x0;
  do {
    pbVar6 = (byte *)(param_3 - uVar2);
    if (pbVar8 == param_2 + param_3) break;
    pbVar11 = pbVar8 + 1;
    uVar9 = (uint)*pbVar8;
    if ((char)*pbVar8 < '\0') {
      if (uVar9 < 0xe0) {
        uVar9 = pbVar8[1] & 0x3f | (uVar9 & 0x1f) << 6;
        pbVar11 = pbVar8 + 2;
      }
      else {
        uVar1 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
        if (uVar9 < 0xf0) {
          uVar9 = uVar1 | (uVar9 & 0x1f) << 0xc;
          pbVar11 = pbVar8 + 3;
        }
        else {
          uVar9 = pbVar8[3] & 0x3f | uVar1 << 6 | (uVar9 & 7) << 0x12;
          pbVar11 = pbVar8 + 4;
        }
      }
    }
    lVar7 = (long)pbVar10 - (long)pbVar8;
    pbVar6 = pbVar10;
    pbVar8 = pbVar11;
    pbVar10 = pbVar11 + lVar7;
  } while (0xfffffff5 < uVar9 - 0x3a);
  *param_1 = (long)(param_2 + uVar2 + (long)pbVar6);
  param_1[1] = (long)(param_3 - uVar2) - (long)pbVar6;
  param_1[2] = lVar5;
  return;
}


// ===== 00a09ed8  FUN_00a09ed8 =====

void FUN_00a09ed8(long *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long extraout_x9;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_00a03e5c();
  uVar3 = auVar8._8_8_;
  lVar2 = auVar8._0_8_;
  if (uVar3 != 0) {
    lVar7 = 0;
    uVar4 = 1;
    lVar6 = extraout_x9;
    do {
      cVar1 = *(char *)(lVar2 + uVar4 + -1);
      if (lVar7 == 0) {
        if (cVar1 != '(') {
          *(undefined1 *)(param_1 + 1) = 3;
          *param_1 = 0;
          return;
        }
        lVar7 = 1;
        lVar6 = 1;
      }
      else {
        if (lVar7 == 1) {
          if (cVar1 == '(') {
            lVar6 = lVar6 + 1;
          }
          else if (cVar1 == ')') {
            lVar6 = lVar6 + -1;
            if (lVar6 == 0) {
              lVar6 = uVar3 - uVar4;
              if (uVar3 < uVar4 || lVar6 == 0) {
                if (lVar6 == 0) goto LAB_00a09fc0;
              }
              else {
                iVar5 = (int)*(char *)(lVar2 + uVar4);
                if (iVar5 != -0x41 && iVar5 + 0x41 < 0 == SCARRY4(iVar5,0x41)) {
LAB_00a09fc0:
                  *param_1 = lVar2 + uVar4;
                  param_1[1] = lVar6;
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail();
            }
          }
          else if (cVar1 == '\\') {
            lVar7 = 2;
            goto LAB_00a09f08;
          }
        }
        lVar7 = 1;
      }
LAB_00a09f08:
      uVar4 = uVar4 + 1;
    } while (uVar4 - uVar3 != 1);
  }
  *(undefined1 *)(param_1 + 1) = 4;
  *param_1 = 0;
  return;
}


// ===== 00a09fd4  chrono::format::scan::short_month0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::scan::short_month0 */

void __rustcall chrono::format::scan::short_month0(long *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (param_3 < 3) {
    *(undefined1 *)(param_1 + 1) = 4;
    *param_1 = 0;
    return;
  }
  bVar1 = *param_2 | 0x20;
  bVar2 = param_2[1] | 0x20;
  bVar3 = param_2[2] | 0x20;
  if (bVar1 < 0x6d) {
    if (0x65 < bVar1) {
      if (bVar1 == 0x66) {
        if ((bVar2 == 0x65) && (bVar3 == 0x62)) {
          uVar4 = 1;
          goto LAB_00a0a178;
        }
      }
      else if (bVar1 == 0x6a) {
        if (bVar2 == 0x61) {
          if (bVar3 == 0x6e) {
            uVar4 = 0;
            goto LAB_00a0a178;
          }
        }
        else if (bVar2 == 0x75) {
          if (bVar3 == 0x6c) {
            uVar4 = 6;
          }
          else {
            if (bVar3 != 0x6e) goto LAB_00a0a15c;
            uVar4 = 5;
          }
          goto LAB_00a0a178;
        }
      }
      goto LAB_00a0a15c;
    }
    if (bVar1 == 0x61) {
      if (bVar2 == 0x70) {
        if (bVar3 != 0x72) goto LAB_00a0a15c;
        uVar4 = 3;
      }
      else {
        if ((bVar2 != 0x75) || (bVar3 != 0x67)) goto LAB_00a0a15c;
        uVar4 = 7;
      }
    }
    else {
      if (((bVar1 != 100) || (bVar2 != 0x65)) || (bVar3 != 99)) goto LAB_00a0a15c;
      uVar4 = 0xb;
    }
    goto LAB_00a0a178;
  }
  if (bVar1 < 0x6f) {
    if (bVar1 == 0x6d) {
      if (bVar2 == 0x61) {
        if (bVar3 == 0x72) {
          uVar4 = 2;
        }
        else {
          if (bVar3 != 0x79) goto LAB_00a0a15c;
          uVar4 = 4;
        }
        goto LAB_00a0a178;
      }
    }
    else if (((bVar1 == 0x6e) && (bVar2 == 0x6f)) && (bVar3 == 0x76)) {
      uVar4 = 10;
      goto LAB_00a0a178;
    }
LAB_00a0a15c:
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0;
    return;
  }
  if (bVar1 == 0x6f) {
    if ((bVar2 != 99) || (bVar3 != 0x74)) goto LAB_00a0a15c;
    uVar4 = 9;
  }
  else {
    if (((bVar1 != 0x73) || (bVar2 != 0x65)) || (bVar3 != 0x70)) goto LAB_00a0a15c;
    uVar4 = 8;
  }
LAB_00a0a178:
  if ((param_3 - 3 != 0) &&
     (iVar5 = (int)(char)param_2[3], iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41))) {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (param_2,param_3,3,param_3,&PTR_s__root__cargo_registry_src_index__00af91d0);
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  *param_1 = (long)(param_2 + 3);
  param_1[1] = param_3 - 3;
  return;
}


// ===== 00a0a1b8  chrono::format::scan::short_weekday =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::scan::short_weekday */

void __rustcall chrono::format::scan::short_weekday(long *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (param_3 < 3) {
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)(param_1 + 2) = 0xff;
    return;
  }
  bVar1 = *param_2 | 0x20;
  bVar2 = param_2[1] | 0x20;
  bVar3 = param_2[2] | 0x20;
  if (bVar1 < 0x73) {
    if (bVar1 == 0x66) {
      if ((bVar2 != 0x72) || (bVar3 != 0x69)) goto LAB_00a0a2e4;
      uVar4 = 4;
    }
    else {
      if (((bVar1 != 0x6d) || (bVar2 != 0x6f)) || (bVar3 != 0x6e)) {
LAB_00a0a2e4:
        *(undefined1 *)param_1 = 3;
        *(undefined1 *)(param_1 + 2) = 0xff;
        return;
      }
      uVar4 = 0;
    }
  }
  else if (bVar1 == 0x73) {
    if (bVar2 == 0x61) {
      if (bVar3 != 0x74) goto LAB_00a0a2e4;
      uVar4 = 5;
    }
    else {
      if ((bVar2 != 0x75) || (bVar3 != 0x6e)) goto LAB_00a0a2e4;
      uVar4 = 6;
    }
  }
  else if (bVar1 == 0x74) {
    if (bVar2 == 0x68) {
      if (bVar3 != 0x75) goto LAB_00a0a2e4;
      uVar4 = 3;
    }
    else {
      if ((bVar2 != 0x75) || (bVar3 != 0x65)) goto LAB_00a0a2e4;
      uVar4 = 1;
    }
  }
  else {
    if (((bVar1 != 0x77) || (bVar2 != 0x65)) || (bVar3 != 100)) goto LAB_00a0a2e4;
    uVar4 = 2;
  }
  if ((param_3 - 3 != 0) &&
     (iVar5 = (int)(char)param_2[3], iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41))) {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (param_2,param_3,3,param_3,&PTR_s__root__cargo_registry_src_index__00af91e8);
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  *param_1 = (long)(param_2 + 3);
  param_1[1] = param_3 - 3;
  return;
}


// ===== 00a0a314  chrono::format::scan::colon_or_space =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::scan::colon_or_space */

void __rustcall chrono::format::scan::colon_or_space(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_00a03d24();
  *param_1 = auVar1;
  return;
}


// ===== 00a0a338  chrono::format::scan::nanosecond_fixed =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::scan::nanosecond_fixed */

void __rustcall
chrono::format::scan::nanosecond_fixed(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_3 < param_4) {
    *(undefined1 *)(param_1 + 1) = 4;
    *param_1 = 0;
    return;
  }
  lVar5 = 0;
  uVar7 = param_4;
  if (param_4 != 0) {
    uVar4 = 0;
    do {
      if (param_3 == uVar4) break;
      uVar2 = *(byte *)(param_2 + uVar4) - 0x30;
      if (9 < uVar2) {
        if (uVar4 < param_4) {
          *(undefined1 *)(param_1 + 1) = 3;
          *param_1 = 0;
          return;
        }
        if (uVar4 < param_3) {
          iVar3 = (int)*(char *)(param_2 + uVar4);
          uVar7 = uVar4;
          if (iVar3 != -0x41 && iVar3 + 0x41 < 0 == SCARRY4(iVar3,0x41)) goto LAB_00a0a3e0;
        }
        else {
          uVar7 = param_3;
          if (param_3 == uVar4) goto LAB_00a0a3e0;
        }
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_2,param_3,uVar4,param_3,&PTR_s__root__cargo_registry_src_index__00af92a8);
      }
      lVar6 = lVar5 * 10;
      if ((SUB168(SEXT816(lVar5) * SEXT816(10),8) != lVar6 >> 0x3f) ||
         (uVar1 = (ulong)(byte)uVar2, lVar5 = lVar6 + uVar1, SCARRY8(lVar6,uVar1)))
      goto LAB_00a0a474;
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
    if ((param_4 < param_3) &&
       (iVar3 = (int)*(char *)(param_2 + param_4),
       iVar3 == -0x41 || iVar3 + 0x41 < 0 != SCARRY4(iVar3,0x41))) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail();
    }
LAB_00a0a3e0:
    if (9 < param_4) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (param_4,10,&PTR_s__root__cargo_registry_src_index__00af9200);
    }
  }
  lVar6 = lVar5 * *(long *)(&DAT_00380708 + param_4 * 8);
  if (SUB168(SEXT816(lVar5) * SEXT816(*(long *)(&DAT_00380708 + param_4 * 8)),8) == lVar6 >> 0x3f) {
    *param_1 = param_2 + uVar7;
    param_1[1] = param_3 - uVar7;
    param_1[2] = lVar6;
    return;
  }
LAB_00a0a474:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


// ===== 00a0a49c  chrono::format::scan::short_or_long_month0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::scan::short_or_long_month0 */

void __rustcall chrono::format::scan::short_or_long_month0(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  byte local_28;
  
  short_month0(&local_38);
  if (local_38 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = local_30;
    return;
  }
  uVar6 = (ulong)local_28;
  if (0xb < local_28) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar6,0xc,&PTR_s__root__cargo_registry_src_index__00af9218);
  }
  uVar4 = CONCAT71(uStack_2f,local_30);
  uVar5 = *(ulong *)(&DAT_00af92c8 + uVar6 * 0x10);
  if (uVar5 <= uVar4) {
    uVar7 = 0;
    do {
      if (uVar5 == uVar7) {
        if (((local_28 != 4) && (uVar5 < uVar4)) &&
           (*(char *)(local_38 + uVar5) + 0x40 < 0 != SCARRY4((int)*(char *)(local_38 + uVar5),0x40)
           )) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail();
        }
        local_38 = local_38 + uVar5;
        uVar4 = uVar4 - uVar5;
        break;
      }
      pbVar1 = (byte *)(local_38 + uVar7);
      pbVar2 = (&PTR_DAT_00af92c0)[uVar6 * 2] + uVar7;
      uVar7 = uVar7 + 1;
      uVar8 = 0x20;
      uVar3 = uVar8;
      if (0x19 < *pbVar1 - 0x41) {
        uVar3 = 0;
      }
      if (0x19 < *pbVar2 - 0x41) {
        uVar8 = 0;
      }
    } while ((uVar3 | *pbVar1) == (uVar8 | *pbVar2));
  }
  *param_1 = local_38;
  param_1[1] = uVar4;
  *(byte *)(param_1 + 2) = local_28;
  return;
}


// ===== 00a0a5b0  FUN_00a0a5b0 =====

void FUN_00a0a5b0(long *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (param_3 == 0) goto LAB_00a0a8a0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    if ((param_2[uVar6] & 0xffffffdf) - 0x5b < 0xffffffe6) break;
    uVar6 = uVar6 + 1;
    uVar7 = param_3;
  } while (param_3 != uVar6);
  if (uVar7 != 0) {
    lVar4 = param_3 - uVar7;
    if (param_3 < uVar7 || lVar4 == 0) {
      if (lVar4 != 0) goto code_r0x00a0a600;
    }
    else if ((char)param_2[uVar7] + 0x40 < 0 != SCARRY4((int)(char)param_2[uVar7],0x40)) {
code_r0x00a0a600:
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail();
    }
    pbVar1 = param_2 + uVar7;
    if (uVar7 == 1) {
      bVar2 = *param_2;
      uVar8 = 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar8 = 0;
      }
      if ((((uVar8 | bVar2) != 0x7a) && (8 < (bVar2 & 0xffffffdf) - 0x41)) &&
         (0xe < (bVar2 & 0xffffffdf) - 0x4b)) goto LAB_00a0a790;
      goto LAB_00a0a73c;
    }
    if (uVar7 == 2) {
      uVar8 = 0x20;
      if (0x19 < *param_2 - 0x41) {
        uVar8 = 0;
      }
      if ((uVar8 | *param_2) != 0x75) goto LAB_00a0a790;
      bVar2 = param_2[1];
LAB_00a0a700:
      uVar8 = 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar8 = 0;
      }
      if ((uVar8 | bVar2) == 0x74) {
LAB_00a0a73c:
        *param_1 = (long)pbVar1;
        param_1[1] = lVar4;
        *(undefined4 *)(param_1 + 2) = 0;
        return;
      }
    }
    else {
      if (uVar7 != 3) goto LAB_00a0a790;
      uVar8 = 0x20;
      if (0x19 < *param_2 - 0x41) {
        uVar8 = 0;
      }
      uVar8 = uVar8 | *param_2;
      if (uVar8 < 0x67) {
        if (uVar8 == 99) {
          uVar8 = 0x20;
          uVar10 = uVar8;
          if (0x19 < param_2[1] - 0x41) {
            uVar10 = 0;
          }
          uVar10 = uVar10 | param_2[1];
          if (uVar10 == 0x73) {
            if (0x19 < param_2[2] - 0x41) {
              uVar8 = 0;
            }
            uVar8 = uVar8 | param_2[2];
LAB_00a0a9f4:
            if (uVar8 == 0x74) {
              *param_1 = (long)pbVar1;
              param_1[1] = lVar4;
              *(undefined4 *)(param_1 + 2) = 0xffffaba0;
              return;
            }
            goto LAB_00a0a790;
          }
          if (uVar10 != 100) goto LAB_00a0a790;
          uVar8 = 0x20;
          if (0x19 < param_2[2] - 0x41) {
            uVar8 = 0;
          }
          uVar8 = uVar8 | param_2[2];
        }
        else {
          if (uVar8 != 0x65) goto LAB_00a0a790;
          uVar8 = 0x20;
          uVar10 = uVar8;
          if (0x19 < param_2[1] - 0x41) {
            uVar10 = 0;
          }
          uVar10 = uVar10 | param_2[1];
          if (uVar10 != 0x73) {
            if (uVar10 == 100) {
              uVar8 = 0x20;
              if (0x19 < param_2[2] - 0x41) {
                uVar8 = 0;
              }
              if ((uVar8 | param_2[2]) == 0x74) {
                *param_1 = (long)pbVar1;
                param_1[1] = lVar4;
                *(undefined4 *)(param_1 + 2) = 0xffffc7c0;
                return;
              }
            }
            goto LAB_00a0a790;
          }
          if (0x19 < param_2[2] - 0x41) {
            uVar8 = 0;
          }
          uVar8 = uVar8 | param_2[2];
        }
        if (uVar8 == 0x74) {
          *param_1 = (long)pbVar1;
          param_1[1] = lVar4;
          *(undefined4 *)(param_1 + 2) = 0xffffb9b0;
          return;
        }
        goto LAB_00a0a790;
      }
      if (uVar8 == 0x70) {
        uVar10 = 0x20;
        uVar8 = uVar10;
        if (0x19 < param_2[1] - 0x41) {
          uVar8 = 0;
        }
        uVar8 = uVar8 | param_2[1];
        if (uVar8 == 0x73) {
          if (0x19 < param_2[2] - 0x41) {
            uVar10 = 0;
          }
          if ((uVar10 | param_2[2]) == 0x74) {
            *param_1 = (long)pbVar1;
            param_1[1] = lVar4;
            *(undefined4 *)(param_1 + 2) = 0xffff8f80;
            return;
          }
          goto LAB_00a0a790;
        }
        if (uVar8 != 100) goto LAB_00a0a790;
        uVar8 = 0x20;
        if (0x19 < param_2[2] - 0x41) {
          uVar8 = 0;
        }
        uVar8 = uVar8 | param_2[2];
      }
      else {
        if (uVar8 != 0x6d) {
          if (uVar8 != 0x67) goto LAB_00a0a790;
          uVar8 = 0x20;
          if (0x19 < param_2[1] - 0x41) {
            uVar8 = 0;
          }
          if ((uVar8 | param_2[1]) != 0x6d) goto LAB_00a0a790;
          bVar2 = param_2[2];
          goto LAB_00a0a700;
        }
        uVar8 = 0x20;
        uVar10 = uVar8;
        if (0x19 < param_2[1] - 0x41) {
          uVar10 = 0;
        }
        uVar10 = uVar10 | param_2[1];
        if (uVar10 != 0x73) {
          if (uVar10 != 100) goto LAB_00a0a790;
          uVar8 = 0x20;
          if (0x19 < param_2[2] - 0x41) {
            uVar8 = 0;
          }
          uVar8 = uVar8 | param_2[2];
          goto LAB_00a0a9f4;
        }
        if (0x19 < param_2[2] - 0x41) {
          uVar8 = 0;
        }
        uVar8 = uVar8 | param_2[2];
      }
      if (uVar8 == 0x74) {
        *param_1 = (long)pbVar1;
        param_1[1] = lVar4;
        *(undefined4 *)(param_1 + 2) = 0xffff9d90;
        return;
      }
    }
    goto LAB_00a0a790;
  }
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    if (uVar8 < 0xe0) {
      uVar8 = param_2[1] & 0x3f | (uVar8 & 0x1f) << 6;
      goto joined_r0x00a0a778;
    }
    uVar10 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
    if (0xef < uVar8) {
      uVar8 = param_2[3] & 0x3f | uVar10 << 6 | (uVar8 & 7) << 0x12;
      goto joined_r0x00a0a778;
    }
    uVar8 = uVar10 | (uVar8 & 0x1f) << 0xc;
    if (uVar8 != 0x2b) goto LAB_00a0a77c;
LAB_00a0a83c:
    if (param_3 == 1) goto LAB_00a0a8a0;
    bVar2 = param_2[1];
    iVar9 = (int)(char)bVar2;
    if (iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41)) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af9110);
    }
    bVar5 = false;
  }
  else {
joined_r0x00a0a778:
    if (uVar8 == 0x2b) goto LAB_00a0a83c;
LAB_00a0a77c:
    if (uVar8 != 0x2d) goto LAB_00a0a790;
    if (param_3 == 1) goto LAB_00a0a8a0;
    bVar2 = param_2[1];
    iVar9 = (int)(char)bVar2;
    if (iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41)) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af9128);
    }
    bVar5 = true;
  }
  if (2 < param_3) {
    uVar6 = param_3 - 3;
    if ((9 < (int)(char)bVar2 - 0x30U) || (9 < (param_2[2] - 0x30 & 0xff))) {
LAB_00a0a790:
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 0;
      return;
    }
    uVar7 = param_3 - 1;
    if (2 < uVar7) {
      iVar9 = (int)(char)param_2[3];
      if (iVar9 == -0x41 || iVar9 + 0x41 < 0 != SCARRY4(iVar9,0x41)) {
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_2 + 1,uVar7,2,uVar7,&PTR_s__root__cargo_registry_src_index__00af9158);
      }
      if (1 < uVar6) {
        iVar9 = (int)(char)param_2[3];
        uVar8 = (uint)param_2[4];
        if (iVar9 - 0x30U < 6) {
          if (uVar8 - 0x30 < 10) {
            if ((uVar6 != 2) && ((char)param_2[5] + 0x40 < 0 != SCARRY4((int)(char)param_2[5],0x40))
               ) {
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail
                        (param_2 + 3,uVar6,2,uVar6,&PTR_s__root__cargo_registry_src_index__00af9170)
              ;
            }
            iVar3 = (((uint)param_2[2] + (char)bVar2 * 10) - 0x10 & 0xff) * 0xe10 +
                    ((uVar8 + iVar9 * 10) - 0x10 & 0xff) * 0x3c;
            *param_1 = (long)(param_2 + 5);
            param_1[1] = param_3 - 5;
            iVar9 = -iVar3;
            if (!bVar5) {
              iVar9 = iVar3;
            }
            *(int *)(param_1 + 2) = iVar9;
            return;
          }
        }
        else if (((iVar9 - 0x36U & 0xff) < 4) && ((uVar8 - 0x30 & 0xff) < 10)) {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 0;
          return;
        }
        goto LAB_00a0a790;
      }
    }
  }
LAB_00a0a8a0:
  *(undefined1 *)(param_1 + 1) = 4;
  *param_1 = 0;
  return;
}


// ===== 00a0ab4c  chrono::format::scan::short_or_long_weekday =====

/* WARNING: Unknown calling convention: __rustcall */
/* chrono::format::scan::short_or_long_weekday */

void __rustcall chrono::format::scan::short_or_long_weekday(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 local_38;
  undefined7 uStack_37;
  ulong uStack_30;
  byte local_28;
  
  short_weekday(&local_38);
  uVar7 = (ulong)local_28;
  if (uVar7 == 0xff) {
    *(undefined1 *)param_1 = local_38;
    *(byte *)(param_1 + 2) = local_28;
    return;
  }
  lVar5 = CONCAT71(uStack_37,local_38);
  uVar6 = *(ulong *)(&DAT_00af9388 + uVar7 * 0x10);
  if (uVar6 <= uStack_30) {
    uVar8 = 0;
    do {
      if (uVar6 == uVar8) {
        bVar4 = uVar6 <= uStack_30;
        uStack_30 = uStack_30 - uVar6;
        if ((bVar4 && uStack_30 != 0) &&
           (*(char *)(lVar5 + uVar6) + 0x40 < 0 != SCARRY4((int)*(char *)(lVar5 + uVar6),0x40))) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail();
        }
        lVar5 = lVar5 + uVar6;
        break;
      }
      pbVar1 = (byte *)(lVar5 + uVar8);
      pbVar2 = (&PTR_DAT_00af9380)[uVar7 * 2] + uVar8;
      uVar8 = uVar8 + 1;
      uVar9 = 0x20;
      uVar3 = uVar9;
      if (0x19 < *pbVar1 - 0x41) {
        uVar3 = 0;
      }
      if (0x19 < *pbVar2 - 0x41) {
        uVar9 = 0;
      }
    } while ((uVar3 | *pbVar1) == (uVar9 | *pbVar2));
  }
  *param_1 = lVar5;
  param_1[1] = uStack_30;
  *(byte *)(param_1 + 2) = local_28;
  return;
}


// ===== 00a0ac3c  FUN_00a0ac3c =====

void FUN_00a0ac3c(long *param_1,char *param_2,long param_3,char param_4)

{
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 1) = 4;
    *param_1 = 0;
    return;
  }
  if (*param_2 == param_4) {
    if ((param_3 + -1 != 0) && (param_2[1] + 0x40 < 0 != SCARRY4((int)param_2[1],0x40))) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_2,param_3,1,param_3,&PTR_s__root__cargo_registry_src_index__00af9278);
    }
    *param_1 = (long)(param_2 + 1);
    param_1[1] = param_3 + -1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 3;
  *param_1 = 0;
  return;
}


// ===== 00a0aca8  FUN_00a0aca8 =====

ulong FUN_00a0aca8(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = 1;
  if ((param_2 < 0x36) && (0xfff80001 < param_1 - 0x3ffffU)) {
    param_4 = param_4 & 0xff;
    bVar3 = (&DAT_0037f93b)[(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
    uVar1 = ((bVar3 >> 4 | 1) + (bVar3 & 7)) % 7;
    param_3 = param_3 & 0xff;
    uVar5 = param_4 + 7;
    if (uVar1 <= param_4) {
      uVar5 = param_4;
    }
    uVar2 = param_3 + 7;
    if (param_4 <= param_3) {
      uVar2 = param_3;
    }
    uVar1 = ((((uVar2 + param_2 * 7) - param_4) - uVar1) + uVar5) - 6;
    if ((int)uVar1 < 1) {
      return 0x101;
    }
    uVar5 = param_1 << 0xd | bVar3 & 0xf | uVar1 * 0x10;
    bVar4 = 0x16e0 < (uVar5 & 0x1ff8);
    if (0x16e < uVar1 || bVar4) {
      uVar5 = 0;
    }
    uVar6 = (ulong)(0x16e < uVar1 || bVar4) | (ulong)uVar5 << 0x20 | 0x100;
  }
  return uVar6;
}


// ===== 00a0adb4  FUN_00a0adb4 =====

void FUN_00a0adb4(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_38;
  byte *pbStack_30;
  long local_28;
  
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (*(byte *)(*param_2 + lVar6) - 0x3a < 0xfffffff6) {
        lVar8 = lVar3 - lVar6;
        goto LAB_00a0ae10;
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
  }
  lVar8 = 0;
  lVar6 = lVar3;
LAB_00a0ae10:
  *param_2 = *param_2 + lVar6;
  param_2[1] = lVar8;
  param_2[2] = param_2[2] + lVar6;
  core::str::converts::from_utf8(&local_38);
  if (local_38 == 1) {
    *(byte **)(param_1 + 8) = pbStack_30;
    *(long *)(param_1 + 0x10) = local_28;
    *param_1 = 0xf;
    return;
  }
  if (local_28 == 0) {
    uVar4 = 0;
  }
  else {
    if (local_28 == 1) {
      bVar1 = *pbStack_30;
      uVar4 = 1;
      if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_00a0aeb0;
      uVar7 = (ulong)(bVar1 != 0x2b);
      if (bVar1 == 0x2b) {
        pbStack_30 = pbStack_30 + 1;
      }
    }
    else {
      bVar1 = *pbStack_30;
      if (bVar1 == 0x2b) {
        pbStack_30 = pbStack_30 + 1;
      }
      uVar7 = local_28 - (ulong)(bVar1 == 0x2b);
    }
    if (uVar7 < 3) {
      if (uVar7 == 0) {
        uVar5 = 0;
        goto LAB_00a0af54;
      }
      uVar5 = *pbStack_30 - 0x30;
      if (uVar5 < 10) {
        if (uVar7 == 1) {
LAB_00a0af54:
          param_1[1] = (char)uVar5;
          *param_1 = 0xff;
          return;
        }
        if (pbStack_30[1] - 0x30 < 10) {
          uVar5 = (pbStack_30[1] - 0x30) + uVar5 * 10;
          goto LAB_00a0af54;
        }
      }
LAB_00a0aea4:
      uVar4 = 1;
    }
    else {
      uVar5 = 0;
      do {
        if (uVar7 == 0) goto LAB_00a0af54;
        uVar5 = ((uVar5 & 0xff) + (uVar5 & 0xff) * 4) * 2;
        if ((uVar5 & 0xf00) != 0) {
          uVar4 = 1;
          if (*pbStack_30 - 0x30 < 10) {
            uVar4 = 2;
          }
          goto LAB_00a0aeb0;
        }
        uVar2 = *pbStack_30 - 0x30;
        if (9 < uVar2) goto LAB_00a0aea4;
        uVar7 = uVar7 - 1;
        uVar5 = (uVar5 & 0xff) + (uVar2 & 0xff);
        pbStack_30 = pbStack_30 + 1;
      } while (uVar5 >> 8 == 0);
      uVar4 = 2;
    }
  }
LAB_00a0aeb0:
  param_1[1] = uVar4;
  *param_1 = 8;
  return;
}


// ===== 00a0af84  FUN_00a0af84 =====

/* WARNING: Removing unreachable block (ram,0x00a0b20c) */
/* WARNING: Removing unreachable block (ram,0x00a0b134) */

void FUN_00a0af84(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar9;
  long lVar8;
  long lVar10;
  ulong uVar11;
  long local_38;
  byte *pbStack_30;
  ulong local_28;
  
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (*(byte *)(*param_2 + lVar8) - 0x3a < 0xfffffff6) {
        lVar10 = lVar4 - lVar8;
        goto LAB_00a0afe0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
  }
  lVar10 = 0;
  lVar8 = lVar4;
LAB_00a0afe0:
  *param_2 = *param_2 + lVar8;
  param_2[1] = lVar10;
  param_2[2] = param_2[2] + lVar8;
  core::str::converts::from_utf8(&local_38);
  if (local_38 == 1) {
    *(byte **)(param_1 + 8) = pbStack_30;
    *(ulong *)(param_1 + 0x10) = local_28;
    *param_1 = 0xf;
    return;
  }
  if (local_28 != 0) {
    uVar11 = local_28 - 1;
    if (uVar11 == 0) {
      bVar1 = *pbStack_30;
      uVar9 = 1;
      if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_00a0b224;
    }
    else {
      bVar1 = *pbStack_30;
    }
    if (bVar1 == 0x2d) {
      uVar7 = 0;
      if (local_28 < 9) {
        if (uVar11 != 0) {
          uVar9 = 1;
          pbVar5 = pbStack_30 + 1;
          do {
            if (9 < *pbVar5 - 0x30) goto LAB_00a0b224;
            uVar7 = uVar7 * 10 - (*pbVar5 - 0x30);
            uVar11 = uVar11 - 1;
            pbVar5 = pbVar5 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        uVar9 = 1;
        pbStack_30 = pbStack_30 + 1;
        do {
          iVar6 = (int)((long)(int)uVar7 * 10);
          uVar3 = 3;
          if ((long)(int)uVar7 * 10 - (long)iVar6 != 0) goto LAB_00a0b244;
          uVar2 = *pbStack_30 - 0x30;
          if (9 < uVar2) goto LAB_00a0b224;
          uVar7 = iVar6 - uVar2;
          if (SBORROW4(iVar6,uVar2)) {
            uVar9 = 3;
            goto LAB_00a0b224;
          }
          uVar11 = uVar11 - 1;
          pbStack_30 = pbStack_30 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      if (bVar1 == 0x2b) {
        pbStack_30 = pbStack_30 + 1;
        local_28 = uVar11;
      }
      if (local_28 < 8) {
        if (local_28 != 0) {
          uVar7 = *pbStack_30 - 0x30;
          if (uVar7 < 10) {
            if (local_28 == 1) goto LAB_00a0b25c;
            if (pbStack_30[1] - 0x30 < 10) {
              uVar7 = (pbStack_30[1] - 0x30) + uVar7 * 10;
              if (local_28 == 2) goto LAB_00a0b25c;
              if (pbStack_30[2] - 0x30 < 10) {
                uVar7 = (pbStack_30[2] - 0x30) + uVar7 * 10;
                if (local_28 == 3) goto LAB_00a0b25c;
                if (pbStack_30[3] - 0x30 < 10) {
                  uVar7 = (pbStack_30[3] - 0x30) + uVar7 * 10;
                  if (local_28 == 4) goto LAB_00a0b25c;
                  if (pbStack_30[4] - 0x30 < 10) {
                    uVar7 = (pbStack_30[4] - 0x30) + uVar7 * 10;
                    if (local_28 == 5) goto LAB_00a0b25c;
                    if (pbStack_30[5] - 0x30 < 10) {
                      uVar7 = (pbStack_30[5] - 0x30) + uVar7 * 10;
                      if (local_28 == 6) goto LAB_00a0b25c;
                      if (pbStack_30[6] - 0x30 < 10) {
                        uVar7 = (pbStack_30[6] - 0x30) + uVar7 * 10;
                        goto LAB_00a0b25c;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar9 = 1;
          goto LAB_00a0b224;
        }
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        uVar9 = 1;
        do {
          iVar6 = (int)((long)(int)uVar7 * 10);
          uVar3 = 2;
          if ((long)(int)uVar7 * 10 - (long)iVar6 != 0) goto LAB_00a0b244;
          uVar2 = *pbStack_30 - 0x30;
          if (9 < uVar2) goto LAB_00a0b224;
          uVar7 = iVar6 + uVar2;
          if (SCARRY4(iVar6,uVar2)) {
            uVar9 = 2;
            goto LAB_00a0b224;
          }
          local_28 = local_28 - 1;
          pbStack_30 = pbStack_30 + 1;
        } while (local_28 != 0);
      }
    }
LAB_00a0b25c:
    *param_1 = 0xff;
    *(uint *)(param_1 + 4) = uVar7;
    return;
  }
  uVar9 = 0;
LAB_00a0b224:
  *param_1 = 8;
  param_1[1] = uVar9;
  return;
LAB_00a0b244:
  uVar9 = uVar3;
  if (9 < *pbStack_30 - 0x30) {
    uVar9 = 1;
  }
  goto LAB_00a0b224;
}


// ===== 00a0b28c  FUN_00a0b28c =====

/* WARNING: Removing unreachable block (ram,0x00a0b3e0) */

void FUN_00a0b28c(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar5;
  undefined2 uVar6;
  ulong uVar4;
  uint uVar7;
  long lVar8;
  long lVar9;
  long local_38;
  byte *pbStack_30;
  long local_28;
  
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (*(byte *)(*param_2 + lVar8) - 0x3a < 0xfffffff6) {
        lVar9 = lVar3 - lVar8;
        goto LAB_00a0b2e8;
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
  }
  lVar9 = 0;
  lVar8 = lVar3;
LAB_00a0b2e8:
  *param_2 = *param_2 + lVar8;
  param_2[1] = lVar9;
  param_2[2] = param_2[2] + lVar8;
  core::str::converts::from_utf8(&local_38);
  if (local_38 == 1) {
    *(byte **)(param_1 + 8) = pbStack_30;
    *(long *)(param_1 + 0x10) = local_28;
    *param_1 = 0xf;
    return;
  }
  if (local_28 == 0) {
    uVar5 = 0;
    goto LAB_00a0b460;
  }
  if (local_28 == 1) {
    bVar1 = *pbStack_30;
    uVar5 = 1;
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_00a0b460;
    uVar4 = (ulong)(bVar1 != 0x2b);
    if (bVar1 == 0x2b) {
      pbStack_30 = pbStack_30 + 1;
    }
  }
  else {
    uVar4 = local_28 - (ulong)(*pbStack_30 == 0x2b);
    if (*pbStack_30 == 0x2b) {
      pbStack_30 = pbStack_30 + 1;
    }
  }
  if (4 < uVar4) {
    uVar7 = 0;
    do {
      if (uVar4 == 0) goto LAB_00a0b458;
      uVar7 = ((uVar7 & 0xffff) + (uVar7 & 0xffff) * 4) * 2;
      if ((uVar7 & 0xf0000) != 0) {
        uVar5 = 2;
        if (9 < *pbStack_30 - 0x30) {
          uVar5 = 1;
        }
        goto LAB_00a0b460;
      }
      uVar2 = *pbStack_30 - 0x30;
      if (9 < uVar2) goto LAB_00a0b44c;
      uVar4 = uVar4 - 1;
      uVar7 = (uVar7 & 0xffff) + (uVar2 & 0xffff);
      pbStack_30 = pbStack_30 + 1;
    } while (uVar7 >> 0x10 == 0);
    uVar5 = 2;
    goto LAB_00a0b460;
  }
  if (uVar4 != 0) {
    uVar7 = *pbStack_30 - 0x30;
    if (uVar7 < 10) {
      if (uVar4 == 1) goto LAB_00a0b458;
      if (pbStack_30[1] - 0x30 < 10) {
        uVar7 = (pbStack_30[1] - 0x30) + uVar7 * 10;
        if (uVar4 == 2) goto LAB_00a0b458;
        if (pbStack_30[2] - 0x30 < 10) {
          uVar7 = (pbStack_30[2] - 0x30) + uVar7 * 10;
          if (uVar4 == 3) goto LAB_00a0b458;
          if (pbStack_30[3] - 0x30 < 10) {
            uVar6 = (undefined2)(((pbStack_30[3] - 0x30) + uVar7 * 10) * 0x10000 >> 0x10);
            goto LAB_00a0b498;
          }
        }
      }
    }
LAB_00a0b44c:
    uVar5 = 1;
LAB_00a0b460:
    *param_1 = 8;
    param_1[1] = uVar5;
    return;
  }
  uVar7 = 0;
LAB_00a0b458:
  uVar6 = (undefined2)uVar7;
LAB_00a0b498:
  *param_1 = 0xff;
  *(undefined2 *)(param_1 + 2) = uVar6;
  return;
}


// ===== 00a0b4b8  FUN_00a0b4b8 =====

void FUN_00a0b4b8(long *param_1,long *param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char cVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong in_x17;
  ulong uVar29;
  
  uVar23 = param_2[1];
  if (3 < uVar23) {
    piVar21 = (int *)*param_2;
    lVar26 = param_2[2];
    iVar14 = *piVar21;
    *param_2 = (long)(piVar21 + 1);
    param_2[1] = uVar23 - 4;
    param_2[2] = lVar26 + 4;
    if (iVar14 != 0x66695a54) {
      puVar25 = &DAT_003807c5;
      lVar24 = 4;
      in_x17 = 0x14;
      goto LAB_00a0b55c;
    }
    if (uVar23 - 4 != 0) {
      cVar18 = (char)piVar21[1];
      *param_2 = (long)piVar21 + 5;
      param_2[1] = uVar23 - 5;
      param_2[2] = lVar26 + 5;
      if (cVar18 != '\0') {
        if (cVar18 == '3') {
          cVar18 = '\x02';
        }
        else {
          if (cVar18 != '2') {
            puVar25 = &DAT_003807ad;
            lVar24 = 0xd;
            in_x17 = 0x18;
            goto LAB_00a0b55c;
          }
          cVar18 = '\x01';
        }
      }
      if (0xe < uVar23 - 5) {
        *param_2 = (long)(piVar21 + 5);
        param_2[1] = uVar23 - 0x14;
        param_2[2] = lVar26 + 0x14;
        if (3 < uVar23 - 0x14) {
          *param_2 = (long)(piVar21 + 6);
          param_2[1] = uVar23 - 0x18;
          param_2[2] = lVar26 + 0x18;
          if (3 < uVar23 - 0x18) {
            uVar8 = piVar21[5];
            *param_2 = (long)(piVar21 + 7);
            param_2[1] = uVar23 - 0x1c;
            param_2[2] = lVar26 + 0x1c;
            if (3 < uVar23 - 0x1c) {
              uVar9 = piVar21[6];
              *param_2 = (long)(piVar21 + 8);
              param_2[1] = uVar23 - 0x20;
              param_2[2] = lVar26 + 0x20;
              if (3 < uVar23 - 0x20) {
                uVar10 = piVar21[7];
                in_x17 = uVar23 - 0x24;
                *param_2 = (long)(piVar21 + 9);
                param_2[1] = in_x17;
                param_2[2] = lVar26 + 0x24;
                if (3 < in_x17) {
                  uVar11 = piVar21[8];
                  in_x17 = uVar23 - 0x28;
                  *param_2 = (long)(piVar21 + 10);
                  param_2[1] = in_x17;
                  param_2[2] = lVar26 + 0x28;
                  if (3 < in_x17) {
                    uVar12 = piVar21[9];
                    piVar1 = piVar21 + 0xb;
                    uVar23 = uVar23 - 0x2c;
                    puVar25 = &DAT_0038079f;
                    lVar24 = 4;
                    in_x17 = 0xe;
                    *param_2 = (long)piVar1;
                    param_2[1] = uVar23;
                    param_2[2] = lVar26 + 0x2c;
                    if ((uVar12 != 0) && (uVar13 = piVar21[10], uVar13 != 0)) {
                      if (((uVar8 == 0) || (uVar8 == uVar12)) && ((uVar9 == 0 || (uVar9 == uVar12)))
                         ) {
                        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
                        uVar22 = (ulong)(uVar11 >> 0x10 | uVar11 << 0x10);
                        lVar24 = 2;
                        if (param_3 == 0) {
                          lVar24 = 3;
                        }
                        uVar27 = uVar22 << lVar24;
                        lVar24 = 4;
                        if (param_3 == 0) {
                          lVar24 = 8;
                        }
                        uVar19 = uVar23 - uVar27;
                        if (uVar27 <= uVar23) {
                          lVar2 = (long)piVar1 + uVar27;
                          lVar26 = lVar26 + 0x2c + uVar27;
                          uVar23 = uVar19 - uVar22;
                          *param_2 = lVar2;
                          param_2[1] = uVar19;
                          param_2[2] = lVar26;
                          if (uVar22 <= uVar19) {
                            uVar11 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                            uVar29 = (ulong)(uVar11 >> 0x10 | uVar11 << 0x10);
                            lVar3 = lVar2 + uVar22;
                            lVar26 = lVar26 + uVar22;
                            *param_2 = lVar3;
                            param_2[1] = uVar23;
                            param_2[2] = lVar26;
                            uVar16 = uVar29 * 6;
                            uVar19 = uVar23 + uVar29 * -6;
                            if (uVar16 <= uVar23) {
                              uVar11 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                              uVar15 = (ulong)(uVar11 >> 0x10 | uVar11 << 0x10);
                              lVar4 = lVar3 + uVar16;
                              lVar26 = lVar26 + uVar16;
                              uVar23 = uVar19 - uVar15;
                              *param_2 = lVar4;
                              param_2[1] = uVar19;
                              param_2[2] = lVar26;
                              if (uVar15 <= uVar19) {
                                uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
                                uVar28 = (ulong)(uVar10 >> 0x10 | uVar10 << 0x10);
                                lVar5 = lVar4 + uVar15;
                                uVar17 = (lVar24 + 4) * uVar28;
                                *param_2 = lVar5;
                                param_2[1] = uVar23;
                                lVar26 = lVar26 + uVar15;
                                param_2[2] = lVar26;
                                uVar19 = uVar23 - uVar17;
                                if (uVar17 <= uVar23) {
                                  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
                                  uVar20 = (ulong)(uVar9 >> 0x10 | uVar9 << 0x10);
                                  lVar6 = lVar5 + uVar17;
                                  lVar26 = lVar26 + uVar17;
                                  uVar23 = uVar19 - uVar20;
                                  *param_2 = lVar6;
                                  param_2[1] = uVar19;
                                  param_2[2] = lVar26;
                                  if (uVar20 <= uVar19) {
                                    lVar7 = lVar6 + uVar20;
                                    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
                                    uVar19 = (ulong)(uVar8 >> 0x10 | uVar8 << 0x10);
                                    lVar26 = lVar26 + uVar20;
                                    *param_2 = lVar7;
                                    param_2[1] = uVar23;
                                    param_2[2] = lVar26;
                                    if (uVar19 <= uVar23) {
                                      *param_1 = (long)piVar1;
                                      param_1[1] = uVar27;
                                      *param_2 = lVar7 + uVar19;
                                      param_2[1] = uVar23 - uVar19;
                                      param_2[2] = lVar26 + uVar19;
                                      param_1[2] = lVar2;
                                      param_1[3] = uVar22;
                                      param_1[4] = lVar3;
                                      param_1[5] = uVar16;
                                      param_1[6] = lVar4;
                                      param_1[7] = uVar15;
                                      param_1[8] = lVar5;
                                      param_1[9] = uVar17;
                                      param_1[10] = lVar6;
                                      param_1[0xb] = uVar20;
                                      param_1[0xc] = lVar7;
                                      param_1[0xd] = uVar19;
                                      param_1[0xe] = lVar24;
                                      param_1[0xf] = uVar19;
                                      param_1[0x10] = uVar20;
                                      param_1[0x11] = uVar28;
                                      param_1[0x12] = uVar22;
                                      param_1[0x13] = uVar29;
                                      param_1[0x14] = uVar15;
                                      *(char *)(param_1 + 0x15) = cVar18;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        param_1[1] = 0x2500000003;
                        *(undefined1 *)param_1 = 6;
                        *(undefined1 *)(param_1 + 0x15) = 0xff;
                        return;
                      }
                      lVar24 = 4;
                      in_x17 = 0xe;
                    }
                    goto LAB_00a0b55c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar24 = 6;
  puVar25 = (undefined *)0x2500000003;
LAB_00a0b55c:
  *param_1 = lVar24;
  param_1[1] = (long)puVar25;
  param_1[2] = in_x17;
  *(undefined1 *)(param_1 + 0x15) = 0xff;
  return;
}


// ===== 00a0b7fc  FUN_00a0b7fc =====

undefined8 FUN_00a0b7fc(long *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  int iVar2;
  void *__s1;
  
  if ((ulong)param_1[1] < param_3) {
    return 0x2500000003;
  }
  __s1 = (void *)*param_1;
  *param_1 = (long)__s1 + param_3;
  param_1[1] = param_1[1] - param_3;
  param_1[2] = param_1[2] + param_3;
  iVar2 = memcmp(__s1,param_2,param_3);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = 0x1500000003;
  }
  return uVar1;
}


// ===== 00a0b854  FUN_00a0b854 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00a0b854(undefined8 *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  char *pcVar2;
  long *plVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  bool bVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  byte bVar21;
  char *pcVar22;
  char *pcVar23;
  ulong uVar24;
  ulong uVar25;
  uint *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  undefined **ppuVar31;
  uint *puVar32;
  undefined8 uVar33;
  ulong uVar34;
  uint *puVar35;
  ulong uVar36;
  char *pcVar37;
  undefined1 auVar38 [16];
  long local_290;
  long local_250;
  long local_218;
  long local_210;
  undefined8 local_208;
  uint local_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined5 local_1e8;
  undefined3 uStack_1e3;
  undefined5 uStack_1e0;
  undefined3 uStack_1db;
  undefined5 uStack_1d8;
  char cStack_1d3;
  undefined2 uStack_1d2;
  long lStack_1d0;
  ulong local_1c8;
  uint *puStack_1c0;
  ulong local_1b8;
  char *pcStack_1b0;
  long local_1a8;
  char *local_1a0;
  long local_198;
  ulong uStack_190;
  ulong local_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  char local_158;
  ulong local_150;
  undefined1 *puStack_148;
  ulong local_140;
  ulong local_138;
  undefined1 *puStack_130;
  ulong local_128;
  undefined8 local_120 [3];
  ulong local_108;
  undefined1 *puStack_100;
  ulong local_f8;
  undefined1 local_f0 [45];
  char local_c3;
  undefined2 local_c2;
  ulong local_c0;
  undefined1 *puStack_b8;
  ulong local_b0;
  ulong local_90;
  undefined1 *puStack_88;
  ulong local_80;
  
  local_208 = 0;
  local_218 = param_2;
  local_210 = param_3;
  FUN_00a0b4b8(&local_200,&local_218,1);
  puVar26 = (uint *)CONCAT44(uStack_1fc,local_200);
  uVar30 = CONCAT71(uStack_1f7,uStack_1f8);
  lVar27 = CONCAT44(uStack_1ec,local_1f0);
  if (local_158 == -1) {
LAB_00a0b8cc:
    param_1[2] = uVar30;
    param_1[3] = lVar27;
    param_1[1] = puVar26;
LAB_00a0b8d8:
    *param_1 = 0xffffffffffffffff;
    return;
  }
  if (local_158 == '\0') {
    if (local_210 != 0) {
      *(undefined1 *)(param_1 + 1) = 4;
      param_1[2] = &DAT_003807ea;
      param_1[3] = 0x2e;
      goto LAB_00a0b8d8;
    }
    cVar7 = '\0';
    uVar25 = CONCAT35(uStack_1e3,local_1e8);
    puVar35 = (uint *)CONCAT35(uStack_1db,uStack_1e0);
    uVar18 = CONCAT26(uStack_1d2,CONCAT15(cStack_1d3,uStack_1d8));
    local_250 = 0;
    puVar32 = puStack_1c0;
    uVar36 = local_1c8;
    lVar9 = local_1a8;
    pcVar10 = local_1a0;
    lVar11 = local_198;
    uVar24 = local_178;
    uVar20 = local_168;
    lVar12 = lStack_1d0;
    uVar13 = local_1b8;
    pcVar37 = pcStack_1b0;
    uVar14 = uStack_190;
    uVar34 = uStack_170;
    uVar15 = uStack_160;
  }
  else {
    FUN_00a0b4b8(&local_200,&local_218,0);
    puVar26 = (uint *)CONCAT44(uStack_1fc,local_200);
    uVar30 = CONCAT71(uStack_1f7,uStack_1f8);
    lVar27 = CONCAT44(uStack_1ec,local_1f0);
    if (local_158 == -1) goto LAB_00a0b8cc;
    uVar25 = CONCAT35(uStack_1e3,local_1e8);
    puVar35 = (uint *)CONCAT35(uStack_1db,uStack_1e0);
    uVar18 = CONCAT26(uStack_1d2,CONCAT15(cStack_1d3,uStack_1d8));
    puVar32 = puStack_1c0;
    uVar36 = local_1c8;
    lVar9 = local_1a8;
    pcVar10 = local_1a0;
    lVar11 = local_198;
    uVar24 = local_178;
    uVar20 = local_168;
    local_250 = local_218;
    local_290 = local_210;
    lVar12 = lStack_1d0;
    uVar13 = local_1b8;
    pcVar37 = pcStack_1b0;
    uVar14 = uStack_190;
    uVar34 = uStack_170;
    uVar15 = uStack_160;
    cVar7 = local_158;
  }
  uVar33 = 0;
  uVar8 = uVar34 << 4;
  if ((uVar34 >> 0x3c != 0) || (uVar33 = 0, 0x7ffffffffffffff8 < uVar8)) {
LAB_00a0ba8c:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar33,uVar8);
  }
  if (uVar8 == 0) {
    local_150 = 0;
    puStack_148 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar33 = 8;
    puStack_148 = (undefined1 *)FUN_004b25a4(uVar8,8);
    local_150 = uVar34;
    if (puStack_148 == (undefined1 *)0x0) goto LAB_00a0ba8c;
  }
  if (uVar14 == 0) {
                    /* try { // try from 00a0baac to 00a0bac3 has its CatchHandler @ 00a0c2c0 */
    local_140 = 0;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00380784,0x37,&PTR_s__root__cargo_registry_src_index__00af9408);
  }
  local_140 = 0;
  uVar34 = 0;
  if (uVar14 != 0) {
    uVar34 = uVar30 / uVar14;
  }
  if (uVar34 <= uVar25) {
    uVar25 = uVar34;
  }
  if (uVar25 != 0) {
    if (cVar7 == '\0') {
      if (uVar14 < 4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,4,uVar14,&PTR_s__root__cargo_registry_src_index__00af93f0);
      }
      lVar29 = 0;
      do {
        uVar30 = local_140;
        bVar21 = *(byte *)(lVar27 + local_140);
        uVar5 = *puVar26;
        if (local_140 == local_150) {
                    /* try { // try from 00a0bb1c to 00a0bb23 has its CatchHandler @ 00a0c24c */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LeapSecond>>
          ::grow_one(&local_150);
        }
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        local_140 = uVar30 + 1;
        puVar26 = (uint *)((long)puVar26 + uVar14);
        plVar3 = (long *)(puStack_148 + lVar29);
        lVar29 = lVar29 + 0x10;
        *plVar3 = (long)(int)(uVar5 >> 0x10 | uVar5 << 0x10);
        plVar3[1] = (ulong)bVar21;
      } while (local_140 < uVar25);
    }
    else {
      if (uVar14 != 8) {
        *(undefined1 *)(param_1 + 1) = 3;
        param_1[2] = &DAT_003807d9;
        param_1[3] = 0x11;
        *param_1 = 0xffffffffffffffff;
        goto LAB_00a0c060;
      }
      lVar29 = 0;
      do {
        uVar30 = local_140;
        bVar21 = *(byte *)(lVar27 + local_140);
        uVar34 = *(ulong *)(puVar26 + local_140 * 2);
        if (local_140 == local_150) {
                    /* try { // try from 00a0ba80 to 00a0ba87 has its CatchHandler @ 00a0c240 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LeapSecond>>
          ::grow_one(&local_150);
        }
        local_140 = uVar30 + 1;
        uVar30 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
        uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
        puVar1 = (ulong *)(puStack_148 + lVar29);
        lVar29 = lVar29 + 0x10;
        *puVar1 = uVar30 >> 0x20 | uVar30 << 0x20;
        puVar1[1] = (ulong)bVar21;
      } while (local_140 < uVar25);
    }
  }
  uVar33 = 0;
  uVar30 = uVar20 * 0x10;
  if ((uVar20 >> 0x3c != 0) || (0x7ffffffffffffffc < uVar30)) {
LAB_00a0bb70:
                    /* try { // try from 00a0bb70 to 00a0bb7b has its CatchHandler @ 00a0c2c0 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar33,uVar30);
  }
  if (uVar30 == 0) {
    puStack_130 = &DAT_00000004;
    local_138 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar33 = 4;
    puStack_130 = (undefined1 *)FUN_004b25a4(uVar30,4);
    local_138 = uVar20;
    if (puStack_130 == (undefined1 *)0x0) goto LAB_00a0bb70;
  }
  local_128 = 0;
  uVar30 = (uVar18 / 6) * 6;
  if (5 < uVar30) {
    ppuVar31 = &PTR_s__root__cargo_registry_src_index__00af9468;
    puVar28 = (undefined8 *)((ulong)local_120 | 3);
    do {
      uVar5 = *puVar35;
      if ((char)puVar35[1] != '\0') {
        if ((char)puVar35[1] == '\x01') {
          uVar33 = 1;
          goto LAB_00a0bc68;
        }
        puVar19 = &DAT_0038087e;
        *(undefined1 *)(param_1 + 1) = 4;
        uVar33 = 0x15;
LAB_00a0bd58:
        param_1[2] = puVar19;
        param_1[3] = uVar33;
        *param_1 = 0xffffffffffffffff;
        goto LAB_00a0c044;
      }
      uVar33 = 0;
LAB_00a0bc68:
      uVar25 = (ulong)*(byte *)((long)puVar35 + 5);
      if (uVar15 <= uVar25) {
LAB_00a0bd44:
        puVar19 = &DAT_0038085d;
        *(undefined1 *)(param_1 + 1) = 4;
        uVar33 = 0x21;
        goto LAB_00a0bd58;
      }
      uVar30 = uVar30 - 6;
      uVar18 = uVar36;
      if (uVar36 < uVar25) {
LAB_00a0c1b0:
                    /* try { // try from 00a0c1b0 to 00a0c1bf has its CatchHandler @ 00a0c284 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail(uVar25,uVar18,uVar36,ppuVar31);
      }
      if (uVar36 == uVar25) goto LAB_00a0bd44;
      lVar29 = 0;
      puVar35 = (uint *)((long)puVar35 + 6);
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar27 = lVar12;
      while (*(char *)(lVar27 + uVar25) != '\0') {
        lVar29 = lVar29 + -1;
        lVar27 = lVar27 + 1;
        if (uVar25 - uVar36 == lVar29) goto LAB_00a0bd44;
      }
      uVar18 = uVar25 - lVar29;
      if ((uVar18 < uVar25) || (uVar36 < uVar18)) {
        ppuVar31 = &PTR_s__root__cargo_registry_src_index__00af9450;
        goto LAB_00a0c1b0;
      }
      lVar27 = 0;
      if (lVar29 != 0) {
        lVar27 = lVar12 + uVar25;
      }
                    /* try { // try from 00a0bce8 to 00a0bd1f has its CatchHandler @ 00a0c234 */
      FUN_00a13c80(&local_200,uVar5 >> 0x10 | uVar5 << 0x10,uVar33,lVar27,-lVar29);
      uVar25 = local_128;
      if ((char)local_200 != -1) {
        local_120[0] = CONCAT17(uStack_1f8,CONCAT43(uStack_1fc,local_200._1_3_));
        *(char *)(param_1 + 1) = (char)local_200;
        *(ulong *)((long)param_1 + 0x11) = CONCAT17((undefined1)local_1f0,uStack_1f7);
        *(undefined8 *)((long)param_1 + 9) = local_120[0];
        *(undefined4 *)(param_1 + 3) = local_1f0;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_1ec;
        *param_1 = 0xffffffffffffffff;
        goto LAB_00a0c044;
      }
      uVar33 = *(undefined8 *)((ulong)&local_200 | 4);
      puVar28[1] = ((undefined8 *)((ulong)&local_200 | 4))[1];
      *puVar28 = uVar33;
      if (local_128 == local_138) {
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LocalTimeType>>
        ::grow_one(&local_138);
      }
      uVar33 = *puVar28;
      local_128 = uVar25 + 1;
      *(undefined8 *)((long)(puStack_130 + uVar25 * 0x10) + 8) = puVar28[1];
      *(undefined8 *)(puStack_130 + uVar25 * 0x10) = uVar33;
    } while (5 < uVar30);
  }
  uVar33 = 0;
  uVar30 = uVar24 * 0x10;
  if ((uVar24 >> 0x3c != 0) || (0x7ffffffffffffff8 < uVar30)) {
LAB_00a0bc18:
                    /* try { // try from 00a0bc18 to 00a0bc23 has its CatchHandler @ 00a0c284 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar33,uVar30);
  }
  if (uVar30 == 0) {
    uVar24 = 0;
    puStack_100 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar33 = 8;
    puStack_100 = (undefined1 *)FUN_004b25a4(uVar30,8);
    if (puStack_100 == (undefined1 *)0x0) goto LAB_00a0bc18;
  }
  uVar30 = uVar14 + 4;
  local_f8 = 0;
  local_108 = uVar24;
  if (uVar30 == 0) {
                    /* try { // try from 00a0c1e0 to 00a0c22f has its CatchHandler @ 00a0c258 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00380784,0x37,&PTR_s__root__cargo_registry_src_index__00af9420);
  }
  uVar25 = 0;
  if (uVar30 != 0) {
    uVar25 = uVar13 / uVar30;
  }
  uVar25 = uVar25 * uVar30;
  if (uVar25 < uVar30) {
LAB_00a0bd94:
    if (uVar20 != 0) {
      pcVar2 = pcVar37 + lVar9;
      pcVar23 = pcVar10;
      do {
        uVar20 = uVar20 - 1;
        if (pcVar37 == (char *)0x0 || pcVar37 == pcVar2) {
          bVar17 = true;
          pcVar37 = (char *)0x0;
          if (pcVar23 != (char *)0x0 && pcVar23 != pcVar10 + lVar11) goto LAB_00a0bdc0;
LAB_00a0be34:
          pcVar22 = (char *)0x0;
          bVar16 = false;
        }
        else {
          pcVar22 = pcVar37 + 1;
          bVar17 = *pcVar37 == '\0';
          pcVar37 = pcVar22;
          if (pcVar23 == (char *)0x0 || pcVar23 == pcVar10 + lVar11) goto LAB_00a0be34;
LAB_00a0bdc0:
          pcVar22 = pcVar23 + 1;
          bVar16 = *pcVar23 == '\x01';
        }
        bVar21 = 1;
        if ((bVar17 & bVar16) == 0) {
          bVar21 = 2;
        }
        bVar4 = bVar17 & bVar16;
        if (uVar20 != 0) {
          bVar4 = bVar21;
        }
        pcVar23 = pcVar22;
      } while (bVar4 == 2);
      if (bVar4 != 0) {
        *(undefined1 *)(param_1 + 1) = 4;
        param_1[2] = &DAT_00380826;
        param_1[3] = 0x37;
        *param_1 = 0xffffffffffffffff;
        goto joined_r0x00a0c030;
      }
    }
    if (local_250 == 0) {
LAB_00a0c120:
      local_c3 = -1;
LAB_00a0c128:
      local_80 = local_140;
      puStack_88 = puStack_148;
      local_90 = local_150;
      local_1f0 = (undefined4)local_f8;
      uStack_1ec = (undefined4)(local_f8 >> 0x20);
      puStack_b8 = puStack_130;
      local_c0 = local_138;
      local_b0 = local_128;
      uStack_1f8 = SUB81(puStack_100,0);
      uStack_1f7 = (undefined7)((ulong)puStack_100 >> 8);
      local_200 = (uint)local_108;
      uStack_1fc = (undefined4)(local_108 >> 0x20);
      FUN_00a13840(param_1,&local_90,&local_c0,&local_200,local_f0);
      return;
    }
                    /* try { // try from 00a0be48 to 00a0be4f has its CatchHandler @ 00a0c258 */
    core::str::converts::from_utf8(&local_200,local_250,local_290);
    pcVar37 = (char *)CONCAT71(uStack_1f7,uStack_1f8);
    lVar27 = CONCAT44(uStack_1ec,local_1f0);
    if ((local_200 & 1) == 0) {
      if (((lVar27 != 0) && (*pcVar37 == '\n')) && (pcVar37[lVar27 + -1] == '\n')) {
                    /* try { // try from 00a0bfb4 to 00a0c0e3 has its CatchHandler @ 00a0c258 */
        auVar38 = FUN_00a03a18();
        lVar27 = auVar38._8_8_;
        pcVar37 = auVar38._0_8_;
        if (((lVar27 == 0) || (*pcVar37 != ':')) &&
           (uVar30 = FUN_00a0c2e8(pcVar37,lVar27), (uVar30 & 1) == 0)) {
          if (lVar27 == 0) goto LAB_00a0c120;
          FUN_00a13f84(&local_200,pcVar37,lVar27,cVar7 == '\x02');
          if (cStack_1d3 != -1) {
            local_c3 = cStack_1d3;
            local_c2 = uStack_1d2;
            goto LAB_00a0c128;
          }
          param_1[2] = CONCAT71(uStack_1f7,uStack_1f8);
          param_1[1] = CONCAT44(uStack_1fc,local_200);
          param_1[3] = CONCAT44(uStack_1ec,local_1f0);
          *param_1 = 0xffffffffffffffff;
          goto joined_r0x00a0c030;
        }
      }
      *(undefined1 *)(param_1 + 1) = 4;
      param_1[2] = &DAT_00380818;
      param_1[3] = 0xe;
      *param_1 = 0xffffffffffffffff;
    }
    else {
      param_1[2] = pcVar37;
      param_1[3] = lVar27;
      *(undefined1 *)(param_1 + 1) = 0xf;
      *param_1 = 0xffffffffffffffff;
    }
  }
  else {
    if (0xfffffffffffffffb < uVar14) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar14,uVar30,&PTR_s__root__cargo_registry_src_index__00af9438);
    }
    if (cVar7 == '\0') {
      if (uVar14 < 4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,4,uVar14,&PTR_s__root__cargo_registry_src_index__00af93f0);
      }
      lVar27 = 0;
      do {
        uVar18 = local_f8;
        uVar5 = *puVar32;
        uVar6 = *(uint *)((long)puVar32 + uVar14);
        if (local_f8 == local_108) {
                    /* try { // try from 00a0bf88 to 00a0bf8f has its CatchHandler @ 00a0c23c */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LeapSecond>>
          ::grow_one(&local_108);
        }
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar25 = uVar25 - uVar30;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        local_f8 = uVar18 + 1;
        plVar3 = (long *)(puStack_100 + lVar27);
        puVar32 = (uint *)((long)puVar32 + uVar30);
        lVar27 = lVar27 + 0x10;
        *plVar3 = (long)(int)(uVar5 >> 0x10 | uVar5 << 0x10);
        *(uint *)(plVar3 + 1) = uVar6 >> 0x10 | uVar6 << 0x10;
      } while (uVar30 <= uVar25);
      goto LAB_00a0bd94;
    }
    if (uVar14 == 8) {
      lVar27 = 0;
      puVar32 = puVar32 + 2;
      do {
        uVar18 = local_f8;
        uVar36 = *(ulong *)(puVar32 + -2);
        uVar5 = *puVar32;
        if (local_f8 == local_108) {
                    /* try { // try from 00a0beec to 00a0bef3 has its CatchHandler @ 00a0c238 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LeapSecond>>
          ::grow_one(&local_108);
        }
        uVar25 = uVar25 - uVar30;
        uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        local_f8 = uVar18 + 1;
        puVar1 = (ulong *)(puStack_100 + lVar27);
        puVar32 = (uint *)((long)puVar32 + uVar30);
        lVar27 = lVar27 + 0x10;
        *puVar1 = uVar36 >> 0x20 | uVar36 << 0x20;
        *(uint *)(puVar1 + 1) = uVar5 >> 0x10 | uVar5 << 0x10;
      } while (uVar30 <= uVar25);
      goto LAB_00a0bd94;
    }
    *(undefined1 *)(param_1 + 1) = 3;
    param_1[2] = &DAT_003807d9;
    param_1[3] = 0x11;
    *param_1 = 0xffffffffffffffff;
  }
joined_r0x00a0c030:
  if (local_108 != 0) {
    free(puStack_100);
  }
LAB_00a0c044:
  if (local_138 != 0) {
    free(puStack_130);
  }
LAB_00a0c060:
  if (local_150 != 0) {
    free(puStack_148);
  }
  return;
}


// ===== 00a0c2e8  FUN_00a0c2e8 =====

bool FUN_00a0c2e8(char *param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  if (0xf < param_2) {
    lVar3 = core::slice::memchr::memchr_aligned(0);
    return lVar3 == 1;
  }
  if (param_2 != 0) {
    lVar3 = param_2 - 1;
    do {
      bVar2 = *param_1 == '\0';
      if (*param_1 == '\0') {
        return bVar2;
      }
      bVar1 = lVar3 != 0;
      param_1 = param_1 + 1;
      lVar3 = lVar3 + -1;
    } while (bVar1);
    return bVar2;
  }
  return false;
}


// ===== 00a0c350  FUN_00a0c350 =====

void FUN_00a0c350(int *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  iVar4 = *param_2;
  if (iVar4 == 0) {
    local_50 = *param_3;
    iVar1 = param_2[1];
    local_48 = *(undefined4 *)(param_3 + 1);
    <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_offset
              (&local_5c,&local_50,iVar1);
    if (local_5c != 0) {
      iVar4 = 0;
      param_1[1] = local_5c;
      param_1[4] = iVar1;
      *(undefined8 *)(param_1 + 2) = local_58;
      goto LAB_00a0c440;
    }
  }
  else {
    if (iVar4 != 1) goto LAB_00a0c440;
    iVar4 = param_2[1];
    iVar1 = param_2[2];
    local_50 = *param_3;
    local_48 = *(undefined4 *)(param_3 + 1);
    <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_offset
              (&local_5c,&local_50,iVar4);
    uVar3 = local_58;
    iVar2 = local_5c;
    local_50 = *param_3;
    local_48 = *(undefined4 *)(param_3 + 1);
    <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_offset
              (&local_5c,&local_50,iVar1);
    if ((local_5c != 0) && (iVar2 != 0)) {
      param_1[1] = iVar2;
      *(undefined8 *)(param_1 + 2) = uVar3;
      param_1[4] = iVar4;
      param_1[5] = local_5c;
      *(undefined8 *)(param_1 + 6) = local_58;
      iVar4 = 1;
      param_1[8] = iVar1;
      goto LAB_00a0c440;
    }
  }
  iVar4 = 2;
LAB_00a0c440:
  *param_1 = iVar4;
  return;
}


// ===== 00a0c45c  FUN_00a0c45c =====

void FUN_00a0c45c(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

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
  FUN_00a0cdec(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a0c4f4  <chrono::month::chrono::month::Month>::num_days =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::month::chrono::month::Month>::num_days */

undefined1  [16] __rustcall
<chrono::month::chrono::month::Month>::num_days(byte *param_1,int param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((1 << (ulong)(*param_1 & 0x1f) & 0xad5U) != 0) {
    auVar5._8_8_ = 0x1f;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  if ((1 << (ulong)(*param_1 & 0x1f) & 0x528U) != 0) {
    auVar6._8_8_ = 0x1e;
    auVar6._0_8_ = 1;
    return auVar6;
  }
  uVar4 = (ulong)(param_2 - 0x3ffffU);
  if (0xfff80001 < param_2 - 0x3ffffU) {
    bVar1 = (&DAT_0037f93b)[(param_2 % 400 >> 0x1f & 400U) + param_2 % 400];
    uVar4 = (ulong)bVar1;
    if (""[(ulong)(bVar1 >> 3) | 0x82] != 0) {
      uVar3 = 0x1c;
      if (((uint)bVar1 + ""[(ulong)(bVar1 >> 3) | 0x82] * -8 & 8) == 0) {
        uVar3 = 0x1d;
      }
      auVar7._12_4_ = 0;
      auVar7._8_4_ = uVar3;
      auVar7._0_8_ = 1;
      return auVar7;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  return auVar2 << 0x40;
}


// ===== 00a0c5b4  <chrono::naive::time::chrono::naive::time::NaiveTime>::parse_from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::chrono::naive::time::NaiveTime>::parse_from_str */

void __rustcall
<chrono::naive::time::chrono::naive::time::NaiveTime>::parse_from_str
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_100 [2];
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  undefined1 local_28;
  undefined7 uStack_27;
  
  local_58 = 0xff;
  local_40 = 8;
  uStack_38 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_100[0] = 0;
  local_60 = 0;
  local_50 = param_4;
  uStack_48 = param_5;
  FUN_00a06280(&local_30,local_100,param_2,param_3,&local_50);
  if ((local_30 == 0) || (CONCAT71(uStack_27,local_28) != 0)) {
    uVar1 = 5;
    if (CONCAT71(uStack_27,local_28) == 0) {
      uVar1 = 0xff;
    }
    if (local_30 == 0) {
      uVar1 = local_28;
    }
    goto LAB_00a0c75c;
  }
  if (local_88 != 1) {
LAB_00a0c758:
    uVar1 = 2;
LAB_00a0c75c:
    param_1[1] = uVar1;
    *param_1 = 1;
    return;
  }
  if (1 < local_84) goto LAB_00a0c79c;
  if (local_80 != 1) goto LAB_00a0c758;
  if (0xb < local_7c) goto LAB_00a0c79c;
  if (local_78 != 1) goto LAB_00a0c758;
  if (0x3b < local_74) goto LAB_00a0c79c;
  if ((local_70 & 1) == 0) {
    iVar2 = 0;
    local_6c = 0;
    if (local_68 == 1) goto LAB_00a0c700;
LAB_00a0c6cc:
    local_64 = 0;
  }
  else {
    if (local_6c < 0x3c) {
      iVar2 = 0;
    }
    else {
      if (local_6c != 0x3c) goto LAB_00a0c79c;
      local_6c = 0x3b;
      iVar2 = 1000000000;
    }
    if (local_68 != 1) goto LAB_00a0c6cc;
LAB_00a0c700:
    if (999999999 < local_64) goto LAB_00a0c79c;
    if (local_70 == 0) goto LAB_00a0c758;
  }
  if ((local_64 + iVar2 < 1000000000) || (local_6c == 0x3b)) {
    *(uint *)(param_1 + 4) = (local_7c + local_84 * 0xc) * 0xe10 + local_74 * 0x3c + local_6c;
    *(uint *)(param_1 + 8) = local_64 + iVar2;
    *param_1 = 0;
    return;
  }
LAB_00a0c79c:
  param_1[1] = 0;
  *param_1 = 1;
  return;
}


// ===== 00a0c7b8  <chrono::naive::time::chrono::naive::time::NaiveTime>::parse_and_remainder =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::chrono::naive::time::NaiveTime>::parse_and_remainder */

void __rustcall
<chrono::naive::time::chrono::naive::time::NaiveTime>::parse_and_remainder
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_100 [2];
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 local_58;
  long local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_58 = 0xff;
  local_30 = 8;
  uStack_28 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_100[0] = 0;
  local_60 = 0;
  local_40 = param_4;
  uStack_38 = param_5;
  FUN_00a06280(&local_50,local_100,param_2,param_3,&local_40);
  if (local_50 == 0) {
    *(undefined1 *)param_1 = local_48;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (local_88 != 1) {
LAB_00a0c95c:
    uVar1 = 2;
    goto LAB_00a0c98c;
  }
  if (local_84 < 2) {
    if (local_80 != 1) goto LAB_00a0c95c;
    if (0xb < local_7c) goto LAB_00a0c988;
    if (local_78 != 1) goto LAB_00a0c95c;
    if (0x3b < local_74) goto LAB_00a0c988;
    if ((local_70 & 1) == 0) {
      iVar2 = 0;
      local_6c = 0;
      if (local_68 == 1) goto LAB_00a0c904;
LAB_00a0c8cc:
      local_64 = 0;
    }
    else {
      if (local_6c < 0x3c) {
        iVar2 = 0;
      }
      else {
        if (local_6c != 0x3c) goto LAB_00a0c988;
        local_6c = 0x3b;
        iVar2 = 1000000000;
      }
      if (local_68 != 1) goto LAB_00a0c8cc;
LAB_00a0c904:
      if (999999999 < local_64) goto LAB_00a0c988;
      if (local_70 == 0) goto LAB_00a0c95c;
    }
    if ((local_64 + iVar2 < 1000000000) || (local_6c == 0x3b)) {
      *(long *)(param_1 + 2) = local_50;
      *(ulong *)(param_1 + 4) = CONCAT71(uStack_47,local_48);
      *param_1 = (local_7c + local_84 * 0xc) * 0xe10 + local_74 * 0x3c + local_6c;
      param_1[1] = local_64 + iVar2;
      return;
    }
  }
LAB_00a0c988:
  uVar1 = 0;
LAB_00a0c98c:
  *(undefined1 *)param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ===== 00a0c9a4  <chrono::naive::time::chrono::naive::time::NaiveTime>::signed_duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::chrono::naive::time::NaiveTime>::signed_duration_since */

undefined1  [16] __rustcall
<chrono::naive::time::chrono::naive::time::NaiveTime>::signed_duration_since
          (uint param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = -(ulong)(999999999 < param_2 && param_1 < param_3);
  lVar1 = (long)((ulong)param_2 - (ulong)param_4) % 1000000000;
  if (999999999 < param_4 && param_3 < param_1) {
    lVar2 = 1;
  }
  auVar3._8_4_ = ((uint)(lVar1 >> 0x3f) & 1000000000) + (int)lVar1;
  auVar3._0_8_ = (lVar2 - (ulong)param_3) + (ulong)param_1 +
                 (long)((ulong)param_2 - (ulong)param_4) / 1000000000 + (lVar1 >> 0x3f);
  auVar3._12_4_ = 0;
  return auVar3;
}


// ===== 00a0ca18  <chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_add_offset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_add_offset */

void __rustcall
<chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_add_offset
          (int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  iVar4 = (iVar2 + param_3) % 0x15180;
  uVar1 = iVar4 >> 0x1f;
  *param_1 = (uVar1 & 0x15180) + iVar4;
  param_1[1] = iVar3;
  param_1[2] = uVar1 + (iVar2 + param_3) / 0x15180;
  return;
}


// ===== 00a0ca60  <chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_add_signed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_add_signed */

void __rustcall
<chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_add_signed
          (uint *param_1,uint *param_2,long param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = (uint)(param_3 < 0 && 0 < param_4);
  uVar4 = (ulong)*param_2;
  uVar5 = param_2[1];
  iVar3 = param_4 + -1000000000;
  if (uVar2 == 0) {
    iVar3 = param_4;
  }
  param_3 = param_3 + (ulong)uVar2;
  if (999999999 < (int)uVar5) {
    if ((param_3 < 1) && ((iVar3 < 1 || ((int)uVar5 < 2000000000 - iVar3)))) {
      if (-1 < param_3) {
        *param_1 = *param_2;
        param_1[1] = uVar5 + iVar3;
        param_1[2] = 0;
        param_1[3] = 0;
        return;
      }
      uVar5 = uVar5 + 0xc4653600;
      uVar4 = uVar4 + 1;
    }
    else {
      uVar5 = uVar5 + 0xc4653600;
    }
  }
  uVar5 = uVar5 + iVar3;
  param_3 = uVar4 + param_3;
  if ((int)uVar5 < 0) {
    param_3 = param_3 + -1;
    uVar5 = uVar5 + 1000000000;
  }
  else if (999999999 < uVar5) {
    param_3 = param_3 + 1;
    uVar5 = uVar5 + 0xc4653600;
  }
  lVar1 = (param_3 % 0x15180 >> 0x3f & 0x15180U) + param_3 % 0x15180;
  *param_1 = (uint)lVar1;
  param_1[1] = uVar5;
  *(long *)(param_1 + 2) = param_3 - lVar1;
  return;
}


// ===== 00a0cb58  <chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_sub_offset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_sub_offset */

void __rustcall
<chrono::naive::time::chrono::naive::time::NaiveTime>::overflowing_sub_offset
          (int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  iVar4 = (iVar2 - param_3) % 0x15180;
  uVar1 = iVar4 >> 0x1f;
  *param_1 = (uVar1 & 0x15180) + iVar4;
  param_1[1] = iVar3;
  param_1[2] = uVar1 + (iVar2 - param_3) / 0x15180;
  return;
}


// ===== 00a0cba0  <chrono::naive::isoweek::chrono::naive::isoweek::IsoWeek>::from_yof =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::isoweek::chrono::naive::isoweek::IsoWeek>::from_yof */

uint __rustcall
<chrono::naive::isoweek::chrono::naive::isoweek::IsoWeek>::from_yof
          (int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 & 7;
  uVar1 = uVar3 + 7;
  if (2 < uVar3) {
    uVar1 = uVar3;
  }
  if (uVar1 + param_2 < 7) {
    param_1 = param_1 + -1;
    iVar2 = param_1 % 400;
    uVar3 = 0x406U >> (ulong)((byte)(&DAT_00380893)[(iVar2 >> 0x1f & 400U) + iVar2] & 0x1f) & 1 |
            0x34;
  }
  else {
    uVar3 = (uVar1 + param_2) / 7;
    uVar1 = 0x406U >> (ulong)(param_3 & 0x1f) & 1 | 0x34;
    if (uVar1 < uVar3) {
      param_1 = param_1 + 1;
    }
    iVar2 = param_1 % 400;
    if (uVar1 < uVar3) {
      uVar3 = 1;
    }
  }
  uVar1 = (iVar2 >> 0x1f & 400U) + iVar2;
  if (399 < uVar1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              ((long)(int)uVar1,400,&PTR_s__root__cargo_registry_src_index__00af9480);
  }
  return uVar3 << 4 | param_1 << 10 | (uint)(byte)(&DAT_00380893)[(int)uVar1];
}


// ===== 00a0cca0  <chrono::offset::fixed::chrono::offset::fixed::FixedOffset>::east =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::fixed::chrono::offset::fixed::FixedOffset>::east */

void __rustcall <chrono::offset::fixed::chrono::offset::fixed::FixedOffset>::east(int param_1)

{
  if (param_1 + 0x1517fU < 0x2a2ff) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00380a23,0x1f,&PTR_s__root__cargo_registry_src_index__00af9498);
}


// ===== 00a0ccdc  <chrono::offset::fixed::chrono::offset::fixed::FixedOffset>::west =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::fixed::chrono::offset::fixed::FixedOffset>::west */

int __rustcall <chrono::offset::fixed::chrono::offset::fixed::FixedOffset>::west(int param_1)

{
  if (param_1 + 0x1517fU < 0x2a2ff) {
    return -param_1;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00380a42,0x1f,&PTR_s__root__cargo_registry_src_index__00af94b0);
}


// ===== 00a0cd1c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LeapSecond>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LeapSecond>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LeapSecond>>
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
  FUN_00a0cdec(&local_38,*param_1,param_1[1],uVar1,8,0x10);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a0cd84  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LocalTimeType>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LocalTimeType>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<chrono::offset::local::tz_info::timezone::LocalTimeType>>
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
  FUN_00a0cdec(&local_38,*param_1,param_1[1],uVar1,4,0x10);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a0cdec  FUN_00a0cdec =====

void FUN_00a0cdec(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
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
  goto LAB_00a0ce88;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_00a0ce68;
    }
LAB_00a0ce78:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_00a0ce78;
LAB_00a0ce68:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_00a0ce88:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 00a0cea0  FUN_00a0cea0 =====

void FUN_00a0cea0(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_5 = param_5 * param_2,
     0x8000000000000000U - param_4 <= param_5 && param_5 - (0x8000000000000000U - param_4) != 0)) {
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  if (param_5 == 0) {
    param_1[1] = 0;
    param_1[2] = param_4;
    *param_1 = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  if ((param_3 & 1) == 0) {
    lVar3 = FUN_004b25a4(param_5,param_4);
  }
  else {
    lVar3 = FUN_004b263c();
  }
  if (lVar3 != 0) {
    param_1[1] = param_2;
    param_1[2] = lVar3;
    *param_1 = 0;
    return;
  }
  param_1[1] = param_4;
  param_1[2] = param_5;
  *param_1 = 1;
  return;
}


// ===== 00a0cf84  <chrono::format::chrono::format::Item>::to_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::chrono::format::Item>::to_owned */

void __rustcall <chrono::format::chrono::format::Item>::to_owned(undefined8 *param_1,byte *param_2)

{
  void *pvVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  size_t __n;
  undefined8 uVar5;
  
  bVar2 = *param_2;
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      pvVar1 = *(void **)(param_2 + 8);
      __n = *(size_t *)(param_2 + 0x10);
      if (__n == 0) {
        puVar3 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar3 = (undefined1 *)FUN_004b25a4(__n,1);
        if (puVar3 == (undefined1 *)0x0) {
LAB_00a0d03c:
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(1,__n);
        }
      }
      memcpy(puVar3,pvVar1,__n);
      param_1[1] = puVar3;
      param_1[2] = __n;
      *(undefined1 *)param_1 = 1;
      return;
    }
    if (bVar2 != 1) {
      pvVar1 = *(void **)(param_2 + 8);
      __n = *(size_t *)(param_2 + 0x10);
      if (__n == 0) {
        puVar3 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar3 = (undefined1 *)FUN_004b25a4(__n,1);
        if (puVar3 == (undefined1 *)0x0) goto LAB_00a0d03c;
      }
      memcpy(puVar3,pvVar1,__n);
      param_1[1] = puVar3;
      param_1[2] = __n;
      *(undefined1 *)param_1 = 3;
      return;
    }
  }
  else if ((4 < bVar2) && (bVar2 != 5)) {
    *(undefined1 *)param_1 = 6;
    return;
  }
  uVar5 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *param_1 = uVar5;
  param_1[2] = uVar4;
  return;
}


// ===== 00a0d0c8  <chrono::format::InternalNumeric_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::InternalNumeric as core::fmt::Debug>::fmt */

void __rustcall
<chrono::format::InternalNumeric_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a0d0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380a73,0x11);
  return;
}


// ===== 00a0d0e4  <chrono::datetime::serde::SecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::serde::SecondsTimestampVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::datetime::serde::SecondsTimestampVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00380a84,0x1b);
  return;
}


// ===== 00a0d0f8  <chrono::datetime::serde::NanoSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::serde::NanoSecondsTimestampVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::datetime::serde::NanoSecondsTimestampVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00380a9f,0x1f);
  return;
}


// ===== 00a0d10c  <chrono::datetime::serde::MicroSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::serde::MicroSecondsTimestampVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::datetime::serde::MicroSecondsTimestampVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a unix timestamp in microseconds",0x20)
  ;
  return;
}


// ===== 00a0d120  <chrono::datetime::serde::MilliSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::serde::MilliSecondsTimestampVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::datetime::serde::MilliSecondsTimestampVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a unix timestamp in milliseconds",0x20)
  ;
  return;
}


// ===== 00a0d134  <chrono::naive::datetime::serde::ts_seconds_option::OptionSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::serde::ts_seconds_option::OptionSecondsTimestampVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<chrono::naive::datetime::serde::ts_seconds_option::OptionSecondsTimestampVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00380abe,0x23);
  return;
}


// ===== 00a0d148  <chrono::datetime::serde::ts_microseconds_option::OptionMicroSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::serde::ts_microseconds_option::OptionMicroSecondsTimestampVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<chrono::datetime::serde::ts_microseconds_option::OptionMicroSecondsTimestampVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00380ae1,0x28);
  return;
}


// ===== 00a0d15c  <chrono::datetime::serde::ts_milliseconds_option::OptionMilliSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::serde::ts_milliseconds_option::OptionMilliSecondsTimestampVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<chrono::datetime::serde::ts_milliseconds_option::OptionMilliSecondsTimestampVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00380b09,0x28);
  return;
}


// ===== 00a0d170  <chrono::format::ParseError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::ParseError as core::fmt::Display>::fmt */

void __rustcall
<chrono::format::ParseError_as_core::fmt::Display>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (3 < bVar1) {
    if (5 < bVar1) {
      if (bVar1 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00a0d204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002bfe68,0x20);
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00380bdf,0x28,&PTR_s__root__cargo_registry_src_index__00af94c8);
    }
    if (bVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00a0d1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380bbb,0x16);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00a0d24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380bd1,0xe);
    return;
  }
  if (1 < bVar1) {
    if (bVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00a0d1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380b6e,0x2c);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00a0d234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380b9a,0x21);
    return;
  }
  if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a0d19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380b31,0x15);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a0d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380b46,0x28);
  return;
}


// ===== 00a0d270  FUN_00a0d270 =====

void FUN_00a0d270(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a0d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380c4a,0x18);
  return;
}


// ===== 00a0d28c  FUN_00a0d28c =====

void FUN_00a0d28c(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_00380c62,9,&DAT_00380c6b,0xb,*param_1,&DAT_00af94e0,&DAT_00380c76,9,
             &local_18,&DAT_00af9500);
  return;
}


// ===== 00a0d2fc  FUN_00a0d2fc =====

void FUN_00a0d2fc(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 00a0d310  FUN_00a0d310 =====

void FUN_00a0d310(undefined8 *param_1,long param_2)

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


// ===== 00a0d32c  FUN_00a0d32c =====

void FUN_00a0d32c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 00a0d340  FUN_00a0d340 =====

void FUN_00a0d340(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a0d354  <chrono::offset::fixed::FixedOffset_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt */

void __rustcall
<chrono::offset::fixed::FixedOffset_as_core::fmt::Debug>::fmt(int *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  undefined1 *local_50;
  undefined *local_48;
  int *piStack_40;
  undefined *local_38;
  int *piStack_30;
  undefined *local_28;
  int *piStack_20;
  undefined *local_18;
  
  local_50 = (undefined1 *)&local_60;
  iVar4 = *param_1;
  iVar3 = -iVar4;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  uVar2 = iVar3 % 0x3c >> 0x1f;
  iVar1 = uVar2 + iVar3 / 0x3c;
  local_58 = iVar1 % 0x3c;
  local_60 = 0x2d;
  if (-1 < iVar4) {
    local_60 = 0x2b;
  }
  iStack_5c = (uVar2 & 0x3c) + iVar3 % 0x3c;
  uVar2 = local_58 >> 0x1f;
  iStack_54 = uVar2 + iVar1 / 0x3c;
  local_58 = (uVar2 & 0x3c) + local_58;
  piStack_40 = &iStack_54;
  if (iStack_5c != 0) {
    local_48 = PTR_fmt_00b00ee0;
    piStack_30 = &local_58;
    local_38 = PTR_fmt_00b00d18;
    piStack_20 = &iStack_5c;
    local_28 = PTR_fmt_00b00d18;
    local_18 = PTR_fmt_00b00d18;
    local_50 = (undefined1 *)&local_60;
    core::fmt::write(*param_2,param_2[1],&DAT_00380c19,&local_50);
    return;
  }
  local_48 = PTR_fmt_00b00ee0;
  piStack_30 = &local_58;
  local_38 = PTR_fmt_00b00d18;
  local_28 = PTR_fmt_00b00d18;
  core::fmt::write(*param_2,param_2[1],&DAT_00380c07,&local_50);
  return;
}


// ===== 00a0d468  <chrono::month::ParseMonthError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::month::ParseMonthError as core::fmt::Debug>::fmt */

void __rustcall
<chrono::month::ParseMonthError_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a0d480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380c34,0x16);
  return;
}


// ===== 00a0d484  <chrono::weekday::Weekday_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::weekday::Weekday as core::str::traits::FromStr>::from_str */

uint __rustcall <chrono::weekday::Weekday_as_core::str::traits::FromStr>::from_str(void)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong extraout_x1;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long local_28;
  ulong local_20;
  byte local_18;
  
  chrono::format::scan::short_weekday(&local_28);
  uVar6 = (ulong)local_18;
  uVar3 = extraout_x1;
  if (uVar6 != 0xff) {
    uVar4 = *(ulong *)(&DAT_00af9388 + uVar6 * 0x10);
    uVar3 = local_20;
    if (uVar4 <= local_20) {
      uVar7 = 0;
      do {
        if (uVar4 == uVar7) {
          uVar3 = local_20 - uVar4;
          if ((uVar4 <= local_20 && uVar3 != 0) &&
             (*(char *)(local_28 + uVar4) + 0x40 < 0 !=
              SCARRY4((int)*(char *)(local_28 + uVar4),0x40))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail();
          }
          break;
        }
        pbVar1 = (byte *)(local_28 + uVar7);
        pbVar2 = (&PTR_DAT_00af9380)[uVar6 * 2] + uVar7;
        uVar7 = uVar7 + 1;
        uVar8 = 0x20;
        uVar5 = uVar8;
        if (0x19 < *pbVar1 - 0x41) {
          uVar5 = 0;
        }
        if (0x19 < *pbVar2 - 0x41) {
          uVar8 = 0;
        }
      } while ((uVar5 | *pbVar1) == (uVar8 | *pbVar2));
    }
  }
  uVar5 = (uint)local_18;
  if (uVar3 != 0 || uVar5 == 0xff) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// ===== 00a0d558  <chrono::weekday::ParseWeekdayError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::weekday::ParseWeekdayError as core::fmt::Display>::fmt */

void __rustcall
<chrono::weekday::ParseWeekdayError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  code *local_18;
  
  puStack_20 = &local_28;
  local_18 = FUN_00a0d270;
  local_28 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&puStack_20);
  return;
}


// ===== 00a0d598  <chrono::offset::fixed::FixedOffset_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::fixed::FixedOffset as core::fmt::Display>::fmt */

void __rustcall <chrono::offset::fixed::FixedOffset_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b07228)();
  return;
}


// ===== 00a0d59c  <chrono::month::Month_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::month::Month as core::str::traits::FromStr>::from_str */

uint __rustcall <chrono::month::Month_as_core::str::traits::FromStr>::from_str(void)

{
  uint uVar1;
  long local_28;
  long lStack_20;
  byte local_18;
  
  chrono::format::scan::short_or_long_month0(&local_28);
  uVar1 = (uint)local_18;
  if ((0xb < local_18 || lStack_20 != 0) || local_28 == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 00a0d5d8  <chrono::weekday::ParseWeekdayError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::weekday::ParseWeekdayError as core::fmt::Debug>::fmt */

void __rustcall
<chrono::weekday::ParseWeekdayError_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a0d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380c4a,0x18);
  return;
}


// ===== 00a0d5f4  FUN_00a0d5f4 =====

void FUN_00a0d5f4(undefined8 param_1,long param_2)

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


// ===== 00a0d60c  <chrono::weekday::Weekday_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::weekday::Weekday as core::fmt::Display>::fmt */

void __rustcall
<chrono::weekday::Weekday_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,&DAT_00380d20 + *(int *)(&DAT_00380d20 + (ulong)*param_1 * 4),3);
  return;
}


// ===== 00a0d62c  <chrono::naive::isoweek::IsoWeek_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::isoweek::IsoWeek as core::fmt::Debug>::fmt */

void __rustcall
<chrono::naive::isoweek::IsoWeek_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 *param_2)

{
  uint local_38;
  uint uStack_34;
  uint *local_30;
  undefined *local_28;
  uint *puStack_20;
  undefined *local_18;
  
  local_38 = (int)*param_1 >> 10;
  uStack_34 = *param_1 >> 4 & 0x3f;
  local_30 = &local_38;
  puStack_20 = &uStack_34;
  if (local_38 >> 4 < 0x271) {
    local_28 = PTR_fmt_00b00d18;
    local_18 = PTR_fmt_00b00c40;
    core::fmt::write(*param_2,param_2[1],&DAT_00380ca6,&local_30);
    return;
  }
  local_28 = PTR_fmt_00b00d18;
  local_18 = PTR_fmt_00b00c40;
  core::fmt::write(*param_2,param_2[1],&DAT_00380c94,&local_30);
  return;
}


// ===== 00a0d6cc  <chrono::offset::fixed::FixedOffset_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::fixed::FixedOffset as core::str::traits::FromStr>::from_str */

ulong __rustcall
<chrono::offset::fixed::FixedOffset_as_core::str::traits::FromStr>::from_str
          (undefined8 param_1,undefined8 param_2)

{
  long local_28;
  byte local_20;
  uint local_18;
  
  FUN_00a08580(&local_28,param_1,param_2,0,0,1);
  if (local_28 != 0) {
    return (ulong)local_18 << 0x20 | (ulong)(local_18 - 0x15180 < 0xfffd5d01);
  }
  return (ulong)local_20 << 8 | 1;
}


// ===== 00a0d740  <chrono::weekday::weekday_serde::WeekdayVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::weekday::weekday_serde::WeekdayVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::weekday::weekday_serde::WeekdayVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00380cb8,7);
  return;
}


// ===== 00a0d754  <chrono::datetime::serde::DateTimeVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::serde::DateTimeVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::datetime::serde::DateTimeVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00380cbf,0x2a);
  return;
}


// ===== 00a0d768  <chrono::naive::datetime::serde::NaiveDateTimeVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::serde::NaiveDateTimeVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::naive::datetime::serde::NaiveDateTimeVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bfd88,0x20);
  return;
}


// ===== 00a0d77c  <chrono::naive::time::NaiveTime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::NaiveTime as core::fmt::Debug>::fmt */

undefined8 __rustcall
<chrono::naive::time::NaiveTime_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint *local_60;
  undefined *puStack_58;
  uint local_38;
  uint local_34;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = uVar1 % 0x3c;
  if (999999999 < uVar2) {
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 + 0xc4653600;
  }
  if ((uVar1 / 0xe10 & 0xff) < 100) {
    uVar5 = (uVar1 / 0xe10 & 0xff) / 10;
    local_38 = uVar2;
    uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar5 | 0x30);
    if ((((uVar6 & 1) == 0) &&
        (uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char
                           (param_2,uVar1 / 0xe10 + uVar5 * -10 & 0xff | 0x30), (uVar6 & 1) == 0))
       && (uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x3a),
          (uVar6 & 1) == 0)) {
      iVar4 = uVar1 / 0x3c + (uVar1 / 0xe10) * -0x3c;
      uVar1 = (uint)(iVar4 * 0xcd) >> 0xb & 0x1f;
      uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar1 | 0x30);
      if ((((uVar6 & 1) == 0) &&
          (uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char
                             (param_2,iVar4 + uVar1 * -10 & 0xff | 0x30), (uVar6 & 1) == 0)) &&
         ((uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x3a),
          (uVar6 & 1) == 0 &&
          ((uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char
                              (param_2,uVar3 / 10 | 0x30), (uVar6 & 1) == 0 &&
           (uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char
                              (param_2,uVar3 % 10 | 0x30), (uVar6 & 1) == 0)))))) {
        if (uVar2 != 0) {
          if (uVar2 == (uVar2 / 1000000) * 1000000) {
            local_60 = &local_34;
            uVar7 = *param_2;
            uVar8 = param_2[1];
            puVar9 = &DAT_00380ce9;
            local_34 = uVar2 / 1000000;
          }
          else if (uVar2 % 1000 == 0) {
            local_60 = &local_34;
            uVar7 = *param_2;
            uVar8 = param_2[1];
            puVar9 = &DAT_00380cf3;
            local_34 = uVar2 / 1000;
          }
          else {
            local_60 = &local_38;
            puVar9 = &DAT_00380cfd;
            uVar7 = *param_2;
            uVar8 = param_2[1];
          }
          puStack_58 = PTR_fmt_00b00c40;
          uVar7 = core::fmt::write(uVar7,uVar8,puVar9,&local_60);
          return uVar7;
        }
        return 0;
      }
    }
  }
  return 1;
}


// ===== 00a0d9a8  <chrono::naive::time::NaiveTime_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::NaiveTime as core::fmt::Display>::fmt */

void __rustcall <chrono::naive::time::NaiveTime_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b07230)();
  return;
}


// ===== 00a0d9ac  <chrono::naive::time::NaiveTime_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::NaiveTime as core::str::traits::FromStr>::from_str */

void __rustcall
<chrono::naive::time::NaiveTime_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 local_f0 [2];
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  undefined1 local_48;
  long local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  local_48 = 0xff;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_f0[0] = 0;
  local_50 = 0;
  FUN_00a05764(&local_40,local_f0,param_2,param_3,&DAT_00af9520,&DAT_00af9580);
  lVar1 = local_40;
  if (local_40 != 0) {
    uVar2 = CONCAT71(uStack_37,local_38);
    FUN_00a05764(&local_40,local_f0,local_40,uVar2,&DAT_00af9580,
                 &PTR_s__nix_store_8006w282fgsx3273c878b_00af95f8);
    if (local_40 != 0) {
      lVar1 = local_40;
      uVar2 = CONCAT71(uStack_37,local_38);
    }
    FUN_00a05764(&local_40,local_f0,lVar1,uVar2,&DAT_00380d08,&DAT_00380d20);
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar3 = 5;
    if (lVar1 == 0) {
      uVar3 = 0xff;
    }
    if ((local_40 != 0) && (local_38 = uVar3, lVar1 == 0)) {
      if (local_78 == 1) {
        if (local_74 < 2) {
          if (local_70 != 1) goto LAB_00a0dba8;
          if (0xb < local_6c) goto LAB_00a0dbf0;
          if (local_68 != 1) goto LAB_00a0dba8;
          if (0x3b < local_64) goto LAB_00a0dbf0;
          if ((local_60 & 1) == 0) {
            iVar4 = 0;
            local_5c = 0;
            if (local_58 == 1) goto LAB_00a0db4c;
LAB_00a0db28:
            local_54 = 0;
          }
          else {
            if (local_5c < 0x3c) {
              iVar4 = 0;
            }
            else {
              if (local_5c != 0x3c) goto LAB_00a0dbf0;
              local_5c = 0x3b;
              iVar4 = 1000000000;
            }
            if (local_58 != 1) goto LAB_00a0db28;
LAB_00a0db4c:
            if (999999999 < local_54) goto LAB_00a0dbf0;
            if (local_60 == 0) goto LAB_00a0dba8;
          }
          if ((local_54 + iVar4 < 1000000000) || (local_5c == 0x3b)) {
            *(uint *)(param_1 + 4) =
                 (local_6c + local_74 * 0xc) * 0xe10 + local_64 * 0x3c + local_5c;
            *(uint *)(param_1 + 8) = local_54 + iVar4;
            *param_1 = 0;
            return;
          }
        }
LAB_00a0dbf0:
        param_1[1] = 0;
        goto LAB_00a0dbb0;
      }
LAB_00a0dba8:
      local_38 = 2;
    }
  }
  param_1[1] = local_38;
LAB_00a0dbb0:
  *param_1 = 1;
  return;
}


// ===== 00a0dbf8  FUN_00a0dbf8 =====

void FUN_00a0dbf8(int *param_1,undefined8 *param_2,long *param_3,byte *param_4)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  int local_e4;
  undefined8 local_e0;
  long local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  bVar1 = *param_4;
  plVar2 = (long *)(*(code *)*param_2)(0);
  if (plVar2 != (long *)0x0) {
    if (*plVar2 == 0) {
      plVar3 = plVar2 + 1;
      *plVar2 = -1;
      if (*plVar3 == -1) {
                    /* try { // try from 00a0dc50 to 00a0dcbf has its CatchHandler @ 00a0dd14 */
        <chrono::offset::local::inner::Cache_as_core::default::Default>::default(&local_d8);
        plVar2[0xe] = lStack_70;
        plVar2[0xd] = local_78;
        plVar2[0x10] = lStack_60;
        plVar2[0xf] = local_68;
        plVar2[0x12] = lStack_50;
        plVar2[0x11] = local_58;
        plVar2[6] = lStack_b0;
        plVar2[5] = local_b8;
        plVar2[8] = lStack_a0;
        plVar2[7] = local_a8;
        plVar2[0x13] = local_48;
        plVar2[10] = lStack_90;
        plVar2[9] = local_98;
        plVar2[0xc] = lStack_80;
        plVar2[0xb] = local_88;
        plVar2[2] = CONCAT44(uStack_cc,uStack_d0);
        *plVar3 = local_d8;
        plVar2[4] = lStack_c0;
        plVar2[3] = local_c8;
      }
      local_d8 = *param_3;
      uStack_d0 = (undefined4)param_3[1];
      FUN_00a023a8(&local_e4,plVar3,&local_d8,bVar1 & 1);
      *plVar2 = *plVar2 + 1;
      if (local_e4 != -1) {
        *param_1 = local_e4;
        *(undefined8 *)(param_1 + 1) = local_e0;
        return;
      }
    }
    else {
      core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af9688);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af95f8);
}


// ===== 00a0dd24  FUN_00a0dd24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00a0dd24(pthread_key_t param_1,long param_2,long *param_3)

{
  long *__pointer;
  void *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_cc;
  long local_c0;
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
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  lVar3 = _UNK_0029f318;
  lVar2 = _DAT_0029f310;
  if (param_2 == 1) {
    return (long *)0x0;
  }
  if (param_3 != (long *)0x0) {
    lVar1 = *param_3;
    *param_3 = 0;
    if (lVar1 == 1) {
      lStack_58 = param_3[0x10];
      local_60 = param_3[0xf];
      lStack_48 = param_3[0x12];
      local_50 = param_3[0x11];
      lStack_38 = param_3[0x14];
      local_40 = param_3[0x13];
      lStack_68 = param_3[0xe];
      local_70 = param_3[0xd];
      lStack_a8 = param_3[6];
      local_b0 = param_3[5];
      lStack_98 = param_3[8];
      lStack_a0 = param_3[7];
      lStack_b8 = param_3[4];
      local_c0 = param_3[3];
      lStack_88 = param_3[10];
      local_90 = param_3[9];
      lStack_78 = param_3[0xc];
      lStack_80 = param_3[0xb];
      lVar2 = param_3[1];
      lVar3 = param_3[2];
    }
  }
  __pointer = (long *)malloc(0xa8);
  if (__pointer != (long *)0x0) {
    __pointer[0x11] = lStack_48;
    __pointer[0x10] = local_50;
    __pointer[0x13] = lStack_38;
    __pointer[0x12] = local_40;
    __pointer[0x14] = CONCAT44(uStack_cc,param_1);
    __pointer[9] = lStack_88;
    __pointer[8] = local_90;
    __pointer[0xb] = lStack_78;
    __pointer[10] = lStack_80;
    __pointer[0xd] = lStack_68;
    __pointer[0xc] = local_70;
    __pointer[0xf] = lStack_58;
    __pointer[0xe] = local_60;
    __pointer[1] = lVar3;
    *__pointer = lVar2;
    __pointer[3] = lStack_b8;
    __pointer[2] = local_c0;
    __pointer[5] = lStack_a8;
    __pointer[4] = local_b0;
    __pointer[7] = lStack_98;
    __pointer[6] = lStack_a0;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      if (*(long *)((long)__ptr + 8) != -1) {
        if (*(long *)((long)__ptr + 8) != 0) {
          free(*(void **)((long)__ptr + 0x10));
        }
        if (*(long *)((long)__ptr + 0x20) != 0) {
          free(*(void **)((long)__ptr + 0x28));
        }
        if (*(long *)((long)__ptr + 0x38) != 0) {
          free(*(void **)((long)__ptr + 0x40));
        }
      }
      free(__ptr);
    }
    return __pointer;
  }
                    /* try { // try from 00a0deb8 to 00a0dec3 has its CatchHandler @ 00a0dec8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0xa8);
}


// ===== 00a0dedc  FUN_00a0dedc =====

void FUN_00a0dedc(long param_1)

{
  if (*(long *)(param_1 + 8) != -1) {
    if (*(long *)(param_1 + 8) != 0) {
      free(*(void **)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      free(*(void **)(param_1 + 0x28));
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      free(*(void **)(param_1 + 0x40));
      return;
    }
  }
  return;
}


// ===== 00a0df50  FUN_00a0df50 =====

void FUN_00a0df50(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a0df9c  FUN_00a0df9c =====

void FUN_00a0df9c(long param_1)

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


// ===== 00a0dfec  FUN_00a0dfec =====

void FUN_00a0dfec(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00a0e034  FUN_00a0e034 =====

undefined ** FUN_00a0e034(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long local_58;
  
  if (param_3 != (undefined **)0x0) {
    do {
      auVar6 = <std::fs::File_as_alloc::io::read::Read>::read(param_1,param_2,param_3);
      ppuVar3 = auVar6._8_8_;
      if (auVar6._0_8_ == 1) {
        ppuVar4 = param_3;
        if (((ulong)ppuVar3 & 3) < 2) {
          if ((auVar6 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
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
                    /* try { // try from 00a0e0f0 to 00a0e103 has its CatchHandler @ 00a0e174 */
          lVar1 = core::io::error::os_functions::get_os_functions();
          uVar2 = (**(code **)(lVar1 + 0x10))((ulong)ppuVar3 >> 0x20);
          if ((uVar2 & 1) == 0) {
            return ppuVar3;
          }
        }
        else {
          uVar5 = auVar6._12_4_ & 0xff;
          if (10 < (ulong)ppuVar3 >> 0x22) {
            uVar5 = 0xff;
          }
          if (uVar5 != 0x23) {
            return ppuVar3;
          }
        }
      }
      else {
        if (ppuVar3 == (undefined **)0x0) {
          return &PTR_s_failed_to_fill_whole_buffer_00af9628;
        }
        ppuVar4 = (undefined **)((long)param_3 - (long)ppuVar3);
        if (param_3 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar3,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00af9610);
        }
        param_2 = param_2 + (long)ppuVar3;
      }
      param_3 = ppuVar4;
    } while (ppuVar4 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


// ===== 00a0e18c  FUN_00a0e18c =====

ulong FUN_00a0e18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 00a0e1a8 to 00a0e1b7 has its CatchHandler @ 00a0e23c */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00af9640,param_2,param_3);
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
                    /* try { // try from 00a0e220 to 00a0e237 has its CatchHandler @ 00a0e23c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00af9670);
  }
  return local_38;
}


// ===== 00a0e254  FUN_00a0e254 =====

void FUN_00a0e254(void *param_1)

{
  pthread_key_t __key;
  int iVar1;
  
  __key = *(pthread_key_t *)((long)param_1 + 0xa0);
  pthread_setspecific(__key,&DAT_00000001);
  if (*(long *)((long)param_1 + 8) != -1) {
    if (*(long *)((long)param_1 + 8) != 0) {
      free(*(void **)((long)param_1 + 0x10));
    }
    if (*(long *)((long)param_1 + 0x20) != 0) {
      free(*(void **)((long)param_1 + 0x28));
    }
    if (*(long *)((long)param_1 + 0x38) != 0) {
      free(*(void **)((long)param_1 + 0x40));
    }
  }
  free(param_1);
  iVar1 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 00a0e2d8 to 00a0e2db has its CatchHandler @ 00a0e2e8 */
  std::sys::thread_local::guard::key::enable(iVar1);
  return;
}


// ===== 00a0e2f4  <chrono::time_delta::chrono::time_delta::TimeDelta>::checked_mul =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::chrono::time_delta::TimeDelta>::checked_mul */

void __rustcall
<chrono::time_delta::chrono::time_delta::TimeDelta>::checked_mul
          (undefined8 *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = (long)(int)param_2[1] * (long)param_3;
  uVar5 = *param_2 * (long)param_3;
  lVar4 = lVar3 % 1000000000;
  uVar1 = lVar3 / 1000000000 + (lVar4 >> 0x3f);
  uVar2 = uVar5 + uVar1;
  if (!CARRY8(SUB168(SEXT816(*param_2) * SEXT816((long)param_3),8) + ((long)uVar1 >> 0x3f) +
              (ulong)CARRY8(uVar5,uVar1) + -1 + (ulong)(0x7ffffffffffffffe < uVar2),
              (ulong)(1 < uVar2 + 0x8000000000000001))) {
    *param_1 = 0;
    return;
  }
  *(uint *)(param_1 + 2) = ((uint)(lVar4 >> 0x3f) & 1000000000) + (int)lVar4;
  *param_1 = 1;
  param_1[1] = uVar2;
  return;
}


// ===== 00a0e384  <chrono::time_delta::chrono::time_delta::TimeDelta>::to_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::chrono::time_delta::TimeDelta>::to_std */

undefined1  [16] __rustcall
<chrono::time_delta::chrono::time_delta::TimeDelta>::to_std(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4._0_8_ = *param_1;
  if (-1 < auVar4._0_8_) {
    uVar1 = *(uint *)(param_1 + 1);
    if (999999999 < uVar1) {
      uVar2 = (ulong)(uVar1 >> 9) * 0x44b83;
      uVar1 = uVar1 + (uint)(uVar2 >> 0x27) * -1000000000;
      auVar4._0_8_ = auVar4._0_8_ + (uVar2 >> 0x27);
    }
    auVar3._8_4_ = uVar1;
    auVar3._0_8_ = auVar4._0_8_;
    auVar3._12_4_ = 0;
    return auVar3;
  }
  auVar4._8_8_ = 0xffffffff;
  return auVar4;
}


// ===== 00a0e3cc  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::parse_from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::parse_from_str */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::parse_from_str
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 local_100 [2];
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  undefined1 local_28;
  undefined7 uStack_27;
  
  local_58 = 0xff;
  local_40 = 8;
  uStack_38 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_100[0] = 0;
  local_60 = 0;
  local_50 = param_4;
  uStack_48 = param_5;
  FUN_00a06280(&local_30,local_100,param_2,param_3,&local_50);
  if ((local_30 != 0) && (CONCAT71(uStack_27,local_28) == 0)) {
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (param_1,local_100,0);
    return;
  }
  *param_1 = 0;
  uVar1 = 5;
  if (CONCAT71(uStack_27,local_28) == 0) {
    uVar1 = 0xff;
  }
  if (local_30 == 0) {
    uVar1 = local_28;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00a0e4bc  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_days =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_days */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_days
          (int *param_1,undefined4 *param_2,ulong param_3)

{
  int iVar1;
  
  if (param_3 >> 0x1f == 0) {
    iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(*param_2);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    }
    *param_1 = iVar1;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 00a0e50c  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_days =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_days */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_days
          (int *param_1,undefined4 *param_2,ulong param_3)

{
  int iVar1;
  
  if (param_3 >> 0x1f == 0) {
    iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(*param_2,-(int)param_3);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    }
    *param_1 = iVar1;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 00a0e560  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_months =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_months */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_months
          (int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (param_3 != 0) {
    if (param_3 < 0) {
      *param_1 = 0;
      return;
    }
    iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months();
    if (iVar1 == 0) goto LAB_00a0e590;
  }
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
LAB_00a0e590:
  *param_1 = iVar1;
  return;
}


// ===== 00a0e5b0  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_offset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_offset */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_offset
          (uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = *param_2;
  iVar7 = (int)(param_2[1] + param_3) % 0x15180;
  uVar2 = iVar7 >> 0x1f;
  iVar1 = uVar2 + (int)(param_2[1] + param_3) / 0x15180;
  uVar4 = param_2[2];
  iVar3 = (int)uVar8 >> 0xd;
  if (iVar1 == 1) {
    if ((uVar8 & 0x1ff8) < 0x16d1) {
      param_1[2] = uVar4;
      *param_1 = (uVar8 & 0x1ff8) + 0x10 | uVar8 & 0xffffe007;
      param_1[1] = (uVar2 & 0x15180) + iVar7;
      return;
    }
    if (0xfff80001 < iVar3 - 0x3fffeU) {
      iVar1 = (iVar3 + 1) % 400;
      bVar5 = (&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1];
      param_1[2] = uVar4;
      *param_1 = (uint)bVar5 | (iVar3 + 1) * 0x2000 | 0x10;
      param_1[1] = (uVar2 & 0x15180) + iVar7;
      return;
    }
LAB_00a0e6ec:
    *param_1 = 0;
    return;
  }
  if (iVar1 == -1) {
    if ((uVar8 & 0x1ff0) < 0x11) {
      if (-0x3ffff < iVar3) {
        iVar1 = (iVar3 + -1) % 400;
        bVar5 = (&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1];
        cVar6 = ""[((ulong)bVar5 | 0x19f0) >> 3];
        if (cVar6 != 0) {
          param_1[2] = uVar4;
          *param_1 = (int)((ulong)bVar5 | 0x19f0) + cVar6 * -8 | (iVar3 + -1) * 0x2000;
          param_1[1] = (uVar2 & 0x15180) + iVar7;
          return;
        }
      }
      goto LAB_00a0e6ec;
    }
    uVar8 = (uVar8 & 0x1ff0) - 0x10 | uVar8 & 0xffffe00f;
  }
  param_1[2] = uVar4;
  *param_1 = uVar8;
  param_1[1] = (uVar2 & 0x15180) + iVar7;
  return;
}


// ===== 00a0e744  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_signed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_signed */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_add_signed
          (int *param_1,undefined4 *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = (uint)(param_3 < 0 && 0 < param_4);
  uVar4 = (ulong)(uint)param_2[1];
  iVar2 = param_2[2];
  iVar1 = param_4 + -1000000000;
  if (uVar5 == 0) {
    iVar1 = param_4;
  }
  param_3 = param_3 + (ulong)uVar5;
  if (iVar2 < 1000000000) {
joined_r0x00a0e7d0:
    uVar5 = iVar2 + iVar1;
    param_3 = uVar4 + param_3;
    if ((int)uVar5 < 0) {
      param_3 = param_3 + -1;
      uVar5 = uVar5 + 1000000000;
    }
    else if (999999999 < uVar5) {
      param_3 = param_3 + 1;
      uVar5 = uVar5 + 0xc4653600;
    }
    uVar4 = (param_3 % 0x15180 >> 0x3f & 0x15180U) + param_3 % 0x15180;
    param_3 = param_3 - uVar4;
    if ((param_3 + 0xffdf3b645a1cac08U < 0xffbe76c8b4395811) ||
       (param_3 - 0xa8c000000000U < 0xfffeae7ffffeae81)) goto LAB_00a0e8c4;
  }
  else {
    if ((0 < param_3) || ((0 < iVar1 && (2000000000 - iVar1 <= iVar2)))) {
      iVar2 = iVar2 + -1000000000;
      goto joined_r0x00a0e7d0;
    }
    if (param_3 < 0) {
      iVar2 = iVar2 + -1000000000;
      uVar4 = uVar4 + 1;
      goto joined_r0x00a0e7d0;
    }
    param_3 = 0;
    uVar5 = iVar2 + iVar1;
  }
  uVar3 = SUB168(SEXT816(param_3) * SEXT816(0x1845c8a0ce512957),8);
  iVar2 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days
                    (*param_2,(uVar3 >> 0xd) - ((long)uVar3 >> 0x3f));
  if (iVar2 != 0) {
    *param_1 = iVar2;
    param_1[1] = (int)uVar4;
    param_1[2] = uVar5;
    return;
  }
LAB_00a0e8c4:
  *param_1 = 0;
  return;
}


// ===== 00a0e8d8  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_months =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_months */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_months
          (int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (param_3 != 0) {
    if (param_3 < 0) {
      *param_1 = 0;
      return;
    }
    iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months(iVar1,-param_3);
    if (iVar1 == 0) goto LAB_00a0e90c;
  }
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
LAB_00a0e90c:
  *param_1 = iVar1;
  return;
}


// ===== 00a0e92c  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_offset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_offset */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_offset
          (uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = *param_2;
  iVar7 = (int)(param_2[1] - param_3) % 0x15180;
  uVar2 = iVar7 >> 0x1f;
  iVar1 = uVar2 + (int)(param_2[1] - param_3) / 0x15180;
  uVar4 = param_2[2];
  iVar3 = (int)uVar8 >> 0xd;
  if (iVar1 == 1) {
    if ((uVar8 & 0x1ff8) < 0x16d1) {
      param_1[2] = uVar4;
      *param_1 = (uVar8 & 0x1ff8) + 0x10 | uVar8 & 0xffffe007;
      param_1[1] = (uVar2 & 0x15180) + iVar7;
      return;
    }
    if (0xfff80001 < iVar3 - 0x3fffeU) {
      iVar1 = (iVar3 + 1) % 400;
      bVar5 = (&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1];
      param_1[2] = uVar4;
      *param_1 = (uint)bVar5 | (iVar3 + 1) * 0x2000 | 0x10;
      param_1[1] = (uVar2 & 0x15180) + iVar7;
      return;
    }
LAB_00a0ea68:
    *param_1 = 0;
    return;
  }
  if (iVar1 == -1) {
    if ((uVar8 & 0x1ff0) < 0x11) {
      if (-0x3ffff < iVar3) {
        iVar1 = (iVar3 + -1) % 400;
        bVar5 = (&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1];
        cVar6 = ""[((ulong)bVar5 | 0x19f0) >> 3];
        if (cVar6 != 0) {
          param_1[2] = uVar4;
          *param_1 = (int)((ulong)bVar5 | 0x19f0) + cVar6 * -8 | (iVar3 + -1) * 0x2000;
          param_1[1] = (uVar2 & 0x15180) + iVar7;
          return;
        }
      }
      goto LAB_00a0ea68;
    }
    uVar8 = (uVar8 & 0x1ff0) - 0x10 | uVar8 & 0xffffe00f;
  }
  param_1[2] = uVar4;
  *param_1 = uVar8;
  param_1[1] = (uVar2 & 0x15180) + iVar7;
  return;
}


// ===== 00a0eac0  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_signed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_signed */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::checked_sub_signed
          (int *param_1,undefined4 *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  iVar3 = 0;
  if (param_4 != 0) {
    iVar3 = 1000000000 - param_4;
  }
  lVar5 = -param_3 - (ulong)(param_4 != 0);
  uVar7 = (uint)(0 < iVar3 && lVar5 < 0);
  uVar6 = (ulong)(uint)param_2[1];
  iVar2 = param_2[2];
  iVar1 = iVar3 + -1000000000;
  if (uVar7 == 0) {
    iVar1 = iVar3;
  }
  lVar5 = lVar5 + (ulong)uVar7;
  if (iVar2 < 1000000000) {
joined_r0x00a0eb5c:
    uVar7 = iVar2 + iVar1;
    lVar5 = uVar6 + lVar5;
    if ((int)uVar7 < 0) {
      lVar5 = lVar5 + -1;
      uVar7 = uVar7 + 1000000000;
    }
    else if (999999999 < uVar7) {
      lVar5 = lVar5 + 1;
      uVar7 = uVar7 + 0xc4653600;
    }
    uVar6 = (lVar5 % 0x15180 >> 0x3f & 0x15180U) + lVar5 % 0x15180;
    lVar5 = lVar5 - uVar6;
    if ((lVar5 + 0xffdf3b645a1cac08U < 0xffbe76c8b4395811) ||
       (lVar5 - 0xa8c000000000U < 0xfffeae7ffffeae81)) goto LAB_00a0ec50;
  }
  else {
    if ((0 < lVar5) || ((0 < iVar1 && (2000000000 - iVar1 <= iVar2)))) {
      iVar2 = iVar2 + -1000000000;
      goto joined_r0x00a0eb5c;
    }
    if (lVar5 < 0) {
      iVar2 = iVar2 + -1000000000;
      uVar6 = uVar6 + 1;
      goto joined_r0x00a0eb5c;
    }
    lVar5 = 0;
    uVar7 = iVar2 + iVar1;
  }
  uVar4 = SUB168(SEXT816(lVar5) * SEXT816(0x1845c8a0ce512957),8);
  iVar3 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days
                    (*param_2,(uVar4 >> 0xd) - ((long)uVar4 >> 0x3f));
  if (iVar3 != 0) {
    *param_1 = iVar3;
    param_1[1] = (int)uVar6;
    param_1[2] = uVar7;
    return;
  }
LAB_00a0ec50:
  *param_1 = 0;
  return;
}


// ===== 00a0ec64  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::parse_and_remainder =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::parse_and_remainder */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::parse_and_remainder
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 local_110 [2];
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  long local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_68 = 0xff;
  local_40 = 8;
  uStack_38 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_110[0] = 0;
  local_70 = 0;
  local_50 = param_4;
  local_48 = param_5;
  FUN_00a06280(&local_60,local_110,param_2,param_3,&local_50);
  if (local_60 != 0) {
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (&local_50,local_110,0);
    if ((int)local_50 != 0) {
      param_1[2] = local_60;
      param_1[3] = CONCAT71(uStack_57,local_58);
      *param_1 = local_50;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
      return;
    }
    local_58 = local_50._4_1_;
  }
  *(undefined1 *)((long)param_1 + 4) = local_58;
  *(undefined4 *)param_1 = 0;
  return;
}


// ===== 00a0ed70  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::signed_duration_since =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::signed_duration_since */

undefined1  [16] __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::signed_duration_since
          (uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  iVar4 = (int)*param_1 >> 0xd;
  iVar5 = (int)*param_2 >> 0xd;
  lVar13 = (ulong)param_1[2] - (ulong)param_2[2];
  uVar7 = param_2[1];
  uVar8 = param_1[1];
  iVar9 = iVar4 % 400;
  iVar10 = (int)((ulong)((long)iVar5 * -0x51eb851f) >> 0x20);
  iVar5 = iVar5 % 400;
  uVar6 = iVar9 >> 0x1f;
  uVar1 = iVar5 >> 0x1f;
  uVar2 = (uVar6 & 400) + iVar9;
  lVar14 = lVar13 % 1000000000;
  uVar3 = (uVar1 & 400) + iVar5;
  uVar12 = 0;
  if (uVar8 < uVar7) {
    uVar12 = (uint)(999999999 < (ulong)param_1[2]);
  }
  lVar11 = -(ulong)uVar12;
  if (uVar7 < uVar8 && 999999999 < (ulong)param_2[2]) {
    lVar11 = 1;
  }
  auVar15._0_8_ =
       (((lVar14 >> 0x3f) + lVar13 / 1000000000 + (ulong)uVar8) - (ulong)uVar7) + lVar11 +
       (((ulong)(((*param_1 >> 4 & 0x1ff) + (uint)(byte)""[uVar2] + uVar2 * 0x16d) - 1) +
        (long)(int)((uVar6 + iVar4 / 400 + ((iVar10 >> 7) - (iVar10 >> 0x1f))) - uVar1) * 0x23ab1) -
       (ulong)(((*param_2 >> 4 & 0x1ff) + (uint)(byte)""[uVar3] + uVar3 * 0x16d) - 1)) * 0x15180;
  auVar15._8_4_ = ((uint)(lVar14 >> 0x3f) & 1000000000) + (int)lVar14;
  auVar15._12_4_ = 0;
  return auVar15;
}


// ===== 00a0eeb0  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::overflowing_add_offset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::overflowing_add_offset */

void __rustcall
<chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::overflowing_add_offset
          (uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *param_2;
  iVar7 = (int)(param_2[1] + param_3) % 0x15180;
  uVar1 = iVar7 >> 0x1f;
  iVar2 = (int)(param_2[1] + param_3) / 0x15180 + uVar1;
  uVar4 = param_2[2];
  iVar3 = (int)uVar9 >> 0xd;
  if (iVar2 == 1) {
    if (0x16d0 < (uVar9 & 0x1ff8)) {
      if (iVar3 - 0x3fffeU < 0xfff80002) {
        param_1[2] = uVar4;
        *param_1 = 0x7fffe01f;
        param_1[1] = (uVar1 & 0x15180) + iVar7;
        return;
      }
      iVar2 = (iVar3 + 1) % 400;
      bVar5 = (&DAT_0037f93b)[(iVar2 >> 0x1f & 400U) + iVar2];
      param_1[2] = uVar4;
      *param_1 = (uint)bVar5 | (iVar3 + 1) * 0x2000 | 0x10;
      param_1[1] = (uVar1 & 0x15180) + iVar7;
      return;
    }
    uVar8 = (uVar9 & 0x1ff8) + 0x10;
    uVar9 = uVar9 & 0xffffe007;
  }
  else {
    if (iVar2 != -1) goto LAB_00a0ef28;
    uVar8 = (uVar9 & 0x1ff0) - 0x10;
    if ((uVar9 & 0x1ff0) < 0x10 || uVar8 == 0) {
      uVar9 = 0x800016e7;
      if (-0x3ffff < iVar3) {
        iVar2 = (iVar3 + -1) % 400;
        bVar5 = (&DAT_0037f93b)[(iVar2 >> 0x1f & 400U) + iVar2];
        cVar6 = ""[((ulong)bVar5 | 0x19f0) >> 3];
        uVar9 = 0x800016e7;
        if (cVar6 != 0) {
          param_1[2] = uVar4;
          *param_1 = (int)((ulong)bVar5 | 0x19f0) + cVar6 * -8 | (iVar3 + -1) * 0x2000;
          param_1[1] = (uVar1 & 0x15180) + iVar7;
          return;
        }
      }
      goto LAB_00a0ef28;
    }
    uVar9 = uVar9 & 0xffffe00f;
  }
  uVar9 = uVar8 | uVar9;
LAB_00a0ef28:
  param_1[2] = uVar4;
  *param_1 = uVar9;
  param_1[1] = (uVar1 & 0x15180) + iVar7;
  return;
}


// ===== 00a0f048  <chrono::offset::utc::chrono::offset::utc::Utc>::now =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::utc::chrono::offset::utc::Utc>::now */

void __rustcall <chrono::offset::utc::chrono::offset::utc::Utc>::now(int *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long local_68;
  long local_60;
  int local_58;
  undefined1 local_50 [12];
  long local_40;
  int local_38;
  
  local_50 = <std::time::[5]::std::time::SystemTime>::now();
  <std::time::[5]::std::time::SystemTime>::duration_since(&local_68,local_50,0,0);
  if (local_68 == 1) {
    local_40 = local_60;
    local_38 = local_58;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("system time before Unix epoch",0x1d,&local_40,&DAT_00af96e8,
               &PTR_s__root__cargo_registry_src_index__00af9708);
  }
  lVar3 = local_60 % 0x15180;
  lVar1 = local_60 / 0x15180 + (lVar3 >> 0x3f);
  if (0xfffffffeffffffff < lVar1 - 0x7ff506c5U) {
    iVar2 = <chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt
                      ((int)lVar1 + 0xaf93b);
    if (iVar2 != 0) {
      *param_1 = iVar2;
      param_1[1] = ((uint)(lVar3 >> 0x3f) & 0x15180) + (int)lVar3;
      param_1[2] = local_58;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af9720);
}


// ===== 00a0f150  <chrono::offset::utc::chrono::offset::utc::Utc>::today =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::utc::chrono::offset::utc::Utc>::today */

uint __rustcall <chrono::offset::utc::chrono::offset::utc::Utc>::today(void)

{
  int iVar1;
  int iVar2;
  uint local_1c;
  int iStack_18;
  
  now(&local_1c);
  iVar1 = iStack_18 / 0x15180 + (iStack_18 % 0x15180 >> 0x1f);
  iVar2 = (int)local_1c >> 0xd;
  if (iVar1 == 1) {
    if ((local_1c & 0x1ff8) < 0x16d1) {
      return (local_1c & 0x1ff8) + 0x10 | local_1c & 0xffffe007;
    }
    if (0xfff80001 < iVar2 - 0x3fffeU) {
      iVar1 = (iVar2 + 1) % 400;
      return (uint)(byte)(&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1] | (iVar2 + 1) * 0x2000 |
             0x10;
    }
LAB_00a0f2c8:
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("Local time out of range for `NaiveDateTime`",0x2b,
               &PTR_s__root__cargo_registry_src_index__00af96d0);
  }
  if (iVar1 == -1) {
    if ((local_1c & 0x1ff0) < 0x11) {
      if (-0x3ffff < iVar2) {
        iVar1 = (iVar2 + -1) % 400;
        if (""[((ulong)(byte)(&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1] | 0x19f0) >> 3] != 0) {
          return (int)((ulong)(byte)(&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1] | 0x19f0) +
                 ""[((ulong)(byte)(&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1] | 0x19f0) >> 3] *
                 -8 | (iVar2 + -1) * 0x2000;
        }
      }
      goto LAB_00a0f2c8;
    }
    local_1c = (local_1c & 0x1ff0) - 0x10 | local_1c & 0xffffe00f;
  }
  return local_1c;
}


// ===== 00a0f2e0  <chrono::offset::local::chrono::offset::local::Local>::now =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::chrono::offset::local::Local>::now */

void __rustcall <chrono::offset::local::chrono::offset::local::Local>::now(undefined8 *param_1)

{
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined *puStack_28;
  undefined4 local_8;
  undefined4 local_4;
  
  <chrono::offset::utc::chrono::offset::utc::Utc>::now(&local_58);
  local_40 = (undefined4 *)((ulong)local_40 & 0xffffffffffffff00);
  FUN_00a0dbf8(&local_4c,&PTR_FUN_00af8bc8,&local_58,&local_40);
  if (local_4c == 0) {
    *param_1 = local_58;
    *(undefined4 *)(param_1 + 1) = local_50;
    *(undefined4 *)((long)param_1 + 0xc) = local_48;
    return;
  }
  if (local_4c == 1) {
    local_40 = &local_8;
    local_8 = local_48;
    local_4 = uStack_44;
    local_30 = &local_4;
    puStack_38 = PTR_fmt_00b01300;
    puStack_28 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ba643,&local_40,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
}


// ===== 00a0f3a0  <chrono::offset::local::chrono::offset::local::Local>::today =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::chrono::offset::local::Local>::today */

uint __rustcall <chrono::offset::local::chrono::offset::local::Local>::today(void)

{
  int iVar1;
  int iVar2;
  uint local_50;
  int iStack_4c;
  int local_44;
  int local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  int *local_30;
  undefined *puStack_28;
  undefined4 *local_20;
  undefined *puStack_18;
  
  <chrono::offset::utc::chrono::offset::utc::Utc>::now(&local_50);
  local_30 = (int *)((ulong)local_30 & 0xffffffffffffff00);
  FUN_00a0dbf8(&local_44,&PTR_FUN_00af8bc8,&local_50,&local_30);
  if (local_44 != 0) {
    if (local_44 == 1) {
      local_30 = &local_38;
      local_38 = local_40;
      local_34 = uStack_3c;
      local_20 = &local_34;
      puStack_28 = PTR_fmt_00b01300;
      puStack_18 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002ba643,&local_30,&PTR_s__root__cargo_registry_src_index__00af9830);
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
  iVar1 = (iStack_4c + local_40) / 0x15180 + ((iStack_4c + local_40) % 0x15180 >> 0x1f);
  iVar2 = (int)local_50 >> 0xd;
  if (iVar1 != 1) {
    if (iVar1 == -1) {
      if ((local_50 & 0x1ff0) < 0x11) {
        if (-0x3ffff < iVar2) {
          iVar1 = (iVar2 + -1) % 400;
          if (""[((ulong)(byte)(&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1] | 0x19f0) >> 3] != 0)
          {
            return (int)((ulong)(byte)(&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1] | 0x19f0) +
                   ""[((ulong)(byte)(&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1] | 0x19f0) >> 3]
                   * -8 | (iVar2 + -1) * 0x2000;
          }
        }
        goto LAB_00a0f59c;
      }
      local_50 = (local_50 & 0x1ff0) - 0x10 | local_50 & 0xffffe00f;
    }
    return local_50;
  }
  if ((local_50 & 0x1ff8) < 0x16d1) {
    return (local_50 & 0x1ff8) + 0x10 | local_50 & 0xffffe007;
  }
  if (0xfff80001 < iVar2 - 0x3fffeU) {
    iVar1 = (iVar2 + 1) % 400;
    return (uint)(byte)(&DAT_0037f93b)[(iVar1 >> 0x1f & 400U) + iVar1] | (iVar2 + 1) * 0x2000 | 0x10
    ;
  }
LAB_00a0f59c:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("Local time out of range for `NaiveDateTime`",0x2b,
             &PTR_s__root__cargo_registry_src_index__00af96d0);
}


// ===== 00a0f5b4  <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_from_str
    */

void __rustcall
<chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::
parse_from_str(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  ulong local_128 [2];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  int local_88;
  int local_84;
  undefined1 local_80;
  undefined4 local_78;
  int iStack_74;
  undefined1 local_70;
  undefined7 uStack_6f;
  int local_64;
  undefined1 local_60;
  undefined3 local_5f;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  local_80 = 0xff;
  local_58 = (int)param_4;
  uStack_54 = (undefined4)((ulong)param_4 >> 0x20);
  uStack_50 = (undefined4)param_5;
  uStack_4c = (undefined4)((ulong)param_5 >> 0x20);
  uStack_48 = 8;
  uStack_44 = 0;
  uStack_40 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_128[0] = 0;
  local_88 = 0;
  FUN_00a06280(&local_78,local_128,param_2,param_3,&local_58);
  if ((CONCAT44(iStack_74,local_78) == 0) || (CONCAT71(uStack_6f,local_70) != 0)) {
    uStack_54._0_1_ = 5;
    if (CONCAT71(uStack_6f,local_70) == 0) {
      uStack_54._0_1_ = 0xff;
    }
    if (CONCAT44(iStack_74,local_78) == 0) {
      uStack_54._0_1_ = local_70;
    }
    goto LAB_00a0f748;
  }
  iVar1 = local_84;
  if (local_88 == 1) {
LAB_00a0f694:
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (&local_58,local_128,iVar1);
    if (local_58 == 0) goto LAB_00a0f748;
    local_60 = (undefined1)uStack_54;
    local_64 = local_58;
    local_5f = (undefined3)((uint)uStack_54 >> 8);
    uStack_5c = (undefined1)uStack_50;
    uStack_5b = (undefined3)((uint)uStack_50 >> 8);
    if (0x2a2fe < iVar1 + 0x1517fU) {
      uStack_54._0_1_ = 0;
      goto LAB_00a0f748;
    }
    local_78 = 0;
    iStack_74 = iVar1;
    FUN_00a0c350(&local_58,&local_78,&local_64);
    if (local_58 == 0) {
      param_1[1] = CONCAT44(uStack_48,uStack_4c);
      *param_1 = CONCAT44(uStack_50,uStack_54);
      return;
    }
    if (local_58 != 1) {
      uStack_54._0_1_ = 1;
      goto LAB_00a0f748;
    }
  }
  else if ((local_128[0] & 1) != 0) {
    iVar1 = 0;
    goto LAB_00a0f694;
  }
  uStack_54._0_1_ = 2;
LAB_00a0f748:
  *(undefined1 *)((long)param_1 + 4) = (undefined1)uStack_54;
  *(undefined4 *)param_1 = 0;
  return;
}


// ===== 00a0f764  <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_from_rfc2822 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_from_rfc2822
    */

void __rustcall
<chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::
parse_from_rfc2822(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong local_120 [2];
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  int local_80;
  int local_7c;
  undefined1 local_78;
  int local_6c;
  undefined1 local_68;
  undefined3 local_67;
  undefined1 uStack_64;
  undefined3 uStack_63;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_3c;
  int iStack_38;
  
  local_78 = 0xff;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_120[0] = 0;
  local_80 = 0;
  FUN_00a05764(&local_60,local_120,param_2,param_3,&DAT_00380df8,&DAT_00380e10);
  lVar1 = CONCAT44(uStack_5c,local_60);
  if ((lVar1 == 0) || (CONCAT44(uStack_54,uStack_58) != 0)) {
    uStack_5c._0_1_ = 5;
    if (CONCAT44(uStack_54,uStack_58) == 0) {
      uStack_5c._0_1_ = 0xff;
    }
    if (lVar1 == 0) {
      uStack_5c._0_1_ = (undefined1)uStack_58;
    }
    goto LAB_00a0f8f0;
  }
  iVar2 = local_7c;
  if (local_80 == 1) {
LAB_00a0f83c:
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (&local_60,local_120,iVar2);
    if (local_60 == 0) goto LAB_00a0f8f0;
    local_68 = (undefined1)uStack_5c;
    local_6c = local_60;
    local_67 = (undefined3)((uint)uStack_5c >> 8);
    uStack_64 = (undefined1)uStack_58;
    uStack_63 = (undefined3)((uint)uStack_58 >> 8);
    if (0x2a2fe < iVar2 + 0x1517fU) {
      uStack_5c._0_1_ = 0;
      goto LAB_00a0f8f0;
    }
    local_3c = 0;
    iStack_38 = iVar2;
    FUN_00a0c350(&local_60,&local_3c,&local_6c);
    if (local_60 == 0) {
      param_1[1] = CONCAT44(uStack_50,uStack_54);
      *param_1 = CONCAT44(uStack_58,uStack_5c);
      return;
    }
    if (local_60 != 1) {
      uStack_5c._0_1_ = 1;
      goto LAB_00a0f8f0;
    }
  }
  else if ((local_120[0] & 1) != 0) {
    iVar2 = 0;
    goto LAB_00a0f83c;
  }
  uStack_5c._0_1_ = 2;
LAB_00a0f8f0:
  *(undefined1 *)((long)param_1 + 4) = (undefined1)uStack_5c;
  *(undefined4 *)param_1 = 0;
  return;
}


// ===== 00a0f90c  <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_from_rfc3339 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_from_rfc3339
    */

void __rustcall
<chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::
parse_from_rfc3339(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong local_120 [2];
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  int local_80;
  int local_7c;
  undefined1 local_78;
  int local_6c;
  undefined1 local_68;
  undefined3 local_67;
  undefined1 uStack_64;
  undefined3 uStack_63;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_3c;
  int iStack_38;
  
  local_78 = 0xff;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_120[0] = 0;
  local_80 = 0;
  FUN_00a079e4(&local_60,local_120,param_2,param_3);
  if (CONCAT44(uStack_5c,local_60) == 0) {
    uStack_5c._0_1_ = (undefined1)uStack_58;
    goto LAB_00a0f9ac;
  }
  if (CONCAT44(uStack_54,uStack_58) != 0) {
    uStack_5c._0_1_ = 5;
    goto LAB_00a0f9ac;
  }
  iVar1 = local_7c;
  if (local_80 == 1) {
LAB_00a0f9e8:
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (&local_60,local_120,iVar1);
    if (local_60 == 0) goto LAB_00a0f9ac;
    local_68 = (undefined1)uStack_5c;
    local_6c = local_60;
    local_67 = (undefined3)((uint)uStack_5c >> 8);
    uStack_64 = (undefined1)uStack_58;
    uStack_63 = (undefined3)((uint)uStack_58 >> 8);
    if (0x2a2fe < iVar1 + 0x1517fU) {
      uStack_5c._0_1_ = 0;
      goto LAB_00a0f9ac;
    }
    local_3c = 0;
    iStack_38 = iVar1;
    FUN_00a0c350(&local_60,&local_3c,&local_6c);
    if (local_60 == 0) {
      param_1[1] = CONCAT44(uStack_50,uStack_54);
      *param_1 = CONCAT44(uStack_58,uStack_5c);
      return;
    }
    if (local_60 != 1) {
      uStack_5c._0_1_ = 1;
      goto LAB_00a0f9ac;
    }
  }
  else if ((local_120[0] & 1) != 0) {
    iVar1 = 0;
    goto LAB_00a0f9e8;
  }
  uStack_5c._0_1_ = 2;
LAB_00a0f9ac:
  *(undefined1 *)((long)param_1 + 4) = (undefined1)uStack_5c;
  *(undefined4 *)param_1 = 0;
  return;
}


// ===== 00a0faa0  <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_and_remainder =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_and_remainder
    */

void __rustcall
<chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::
parse_and_remainder(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long local_138 [2];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  int local_98;
  int local_94;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined2 uStack_7f;
  undefined5 uStack_7d;
  int local_74;
  undefined1 local_70;
  undefined3 local_6f;
  undefined1 uStack_6c;
  undefined3 uStack_6b;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  local_90 = 0xff;
  local_68 = (int)param_4;
  iStack_64 = (int)((ulong)param_4 >> 0x20);
  uStack_60 = (undefined4)param_5;
  uStack_5c = (undefined4)((ulong)param_5 >> 0x20);
  iStack_58 = 8;
  uStack_54 = 0;
  uStack_50 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_138[0] = 0;
  local_98 = 0;
  FUN_00a06280(&local_88,local_138,param_2,param_3,&local_68);
  lVar1 = CONCAT44(uStack_84,local_88);
  uVar2 = uStack_80;
  if (lVar1 == 0) goto LAB_00a0fc5c;
  iVar3 = local_94;
  if (local_98 == 1) {
LAB_00a0fb74:
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (&local_68,local_138,iVar3);
    uVar2 = (undefined1)iStack_64;
    if (local_68 == 0) goto LAB_00a0fc5c;
    local_70 = (undefined1)iStack_64;
    local_74 = local_68;
    local_6f = (undefined3)((uint)iStack_64 >> 8);
    uStack_6c = (undefined1)uStack_60;
    uStack_6b = (undefined3)((uint)uStack_60 >> 8);
    if (0x2a2fe < iVar3 + 0x1517fU) {
      uVar2 = 0;
      goto LAB_00a0fc5c;
    }
    local_88 = 0;
    uStack_84 = iVar3;
    FUN_00a0c350(&local_68,&local_88,&local_74);
    if (local_68 == 0) {
      local_88 = (undefined4)CONCAT43(uStack_5c,uStack_60._1_3_);
      uStack_84 = CONCAT13((char)iStack_58,(int3)((uint)uStack_5c >> 8));
      uVar2 = (undefined1)uStack_60;
      if (iStack_64 != 0) {
        *param_1 = iStack_64;
        *(undefined1 *)(param_1 + 1) = (undefined1)uStack_60;
        *(ulong *)((long)param_1 + 5) = CONCAT44(uStack_84,local_88);
        param_1[3] = iStack_58;
        *(long *)(param_1 + 4) = lVar1;
        *(ulong *)(param_1 + 6) = CONCAT53(uStack_7d,CONCAT21(uStack_7f,uStack_80));
        return;
      }
      goto LAB_00a0fc5c;
    }
    if (local_68 != 1) {
      uVar2 = 1;
      goto LAB_00a0fc5c;
    }
  }
  else if (local_138[0] == 1) {
    iVar3 = 0;
    goto LAB_00a0fb74;
  }
  uVar2 = 2;
LAB_00a0fc5c:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 0;
  return;
}


// ===== 00a0fc7c  <chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset> as
   core::str::traits::FromStr>::from_str */

void __rustcall
<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>as_core::str::traits::FromStr>::
from_str(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x1;
  int iVar1;
  ulong local_120 [2];
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  int local_80;
  int local_7c;
  undefined1 local_78;
  int local_6c;
  undefined1 local_68;
  undefined3 local_67;
  undefined1 uStack_64;
  undefined3 uStack_63;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_3c;
  int iStack_38;
  
  local_78 = 0xff;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_120[0] = 0;
  local_80 = 0;
  chrono::format::parse::parse_rfc3339_relaxed(&local_60,local_120,param_2,param_3);
  if (CONCAT44(uStack_5c,local_60) == 0) {
    uStack_5c._0_1_ = (undefined1)uStack_58;
    goto LAB_00a0fd20;
  }
  FUN_00a03e5c(CONCAT44(uStack_5c,local_60),CONCAT44(uStack_54,uStack_58));
  if (extraout_x1 != 0) {
    uStack_5c._0_1_ = 5;
    goto LAB_00a0fd20;
  }
  iVar1 = local_7c;
  if (local_80 == 1) {
LAB_00a0fd5c:
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (&local_60,local_120,iVar1);
    if (local_60 == 0) goto LAB_00a0fd20;
    local_68 = (undefined1)uStack_5c;
    local_6c = local_60;
    local_67 = (undefined3)((uint)uStack_5c >> 8);
    uStack_64 = (undefined1)uStack_58;
    uStack_63 = (undefined3)((uint)uStack_58 >> 8);
    if (0x2a2fe < iVar1 + 0x1517fU) {
      uStack_5c._0_1_ = 0;
      goto LAB_00a0fd20;
    }
    local_3c = 0;
    iStack_38 = iVar1;
    FUN_00a0c350(&local_60,&local_3c,&local_6c);
    if (local_60 == 0) {
      param_1[1] = CONCAT44(uStack_50,uStack_54);
      *param_1 = CONCAT44(uStack_58,uStack_5c);
      return;
    }
    if (local_60 != 1) {
      uStack_5c._0_1_ = 1;
      goto LAB_00a0fd20;
    }
  }
  else if ((local_120[0] & 1) != 0) {
    iVar1 = 0;
    goto LAB_00a0fd5c;
  }
  uStack_5c._0_1_ = 2;
LAB_00a0fd20:
  *(undefined1 *)((long)param_1 + 4) = (undefined1)uStack_5c;
  *(undefined4 *)param_1 = 0;
  return;
}


// ===== 00a0fe14  <chrono::naive::datetime::serde::ts_microseconds::MicroSecondsTimestampVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::serde::ts_microseconds::MicroSecondsTimestampVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<chrono::naive::datetime::serde::ts_microseconds::MicroSecondsTimestampVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0029f7e0,0x10);
  return;
}


// ===== 00a0fe28  FUN_00a0fe28 =====

void FUN_00a0fe28(void)

{
  undefined1 uStack_11;
  
  thunk_FUN_00a0e18c(&uStack_11,&DAT_00380e10,0x7b);
  FUN_00a0df50();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a0fe50  FUN_00a0fe50 =====

bool FUN_00a0fe50(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_00a05608(*param_1);
  if (lVar1 != 0) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 00a0fea4 to 00a0feab has its CatchHandler @ 00a0fec8 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


// ===== 00a0fed0  <chrono::time_delta::TimeDelta_as_core::ops::arith::Add>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::TimeDelta as core::ops::arith::Add>::add */

void __rustcall
<chrono::time_delta::TimeDelta_as_core::ops::arith::Add>::add
          (long param_1,int param_2,long param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = param_4 + param_2;
  param_3 = param_3 + param_1;
  if (999999999 < (int)uVar1) {
    param_3 = param_3 + 1;
    uVar1 = uVar1 + 0xc4653600;
  }
  if ((uVar1 < 1000000000) && (0xffbe76c8b439580f < param_3 + 0xffdf3b645a1cac08U)) {
    if (param_3 == 0x20c49ba5e353f7) {
      if (uVar1 < 0x3019d7c1) {
        return;
      }
    }
    else {
      if (192999999 < uVar1) {
        return;
      }
      if (param_3 != -0x20c49ba5e353f8) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00380e4d,0x22,&PTR_s__root__cargo_registry_src_index__00af9738);
}


// ===== 00a0ff94  <chrono::naive::datetime::NaiveDateTime_as_chrono::round::DurationRound>::duration_round =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as chrono::round::DurationRound>::duration_round */

void __rustcall
<chrono::naive::datetime::NaiveDateTime_as_chrono::round::DurationRound>::duration_round
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00a03f80(param_1,param_1,param_2,param_3);
  return;
}


// ===== 00a0ffa4  <chrono::naive::datetime::NaiveDateTime_as_chrono::round::DurationRound>::duration_trunc =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as chrono::round::DurationRound>::duration_trunc */

void __rustcall
<chrono::naive::datetime::NaiveDateTime_as_chrono::round::DurationRound>::duration_trunc
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00a0440c(param_1,param_1,param_2,param_3);
  return;
}


// ===== 00a0ffb4  <chrono::naive::datetime::NaiveDateTime_as_chrono::round::DurationRound>::duration_round_up =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as chrono::round::DurationRound>::duration_round_up */

void __rustcall
<chrono::naive::datetime::NaiveDateTime_as_chrono::round::DurationRound>::duration_round_up
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00a04830(param_1,param_1,param_2,param_3);
  return;
}


// ===== 00a0ffc4  <chrono::time_delta::TimeDelta_as_core::ops::arith::Sub>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::TimeDelta as core::ops::arith::Sub>::sub */

void __rustcall
<chrono::time_delta::TimeDelta_as_core::ops::arith::Sub>::sub
          (long param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 - param_4;
  uVar2 = uVar3;
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 + 1000000000;
  }
  if ((uVar2 < 1000000000) &&
     (lVar1 = (param_1 - param_3) + (long)((int)uVar3 >> 0x1f),
     0xffbe76c8b439580f < lVar1 + 0xffdf3b645a1cac08U)) {
    if (lVar1 == 0x20c49ba5e353f7) {
      if (uVar2 < 0x3019d7c1) {
        return;
      }
    }
    else {
      if (192999999 < uVar2) {
        return;
      }
      if (lVar1 != -0x20c49ba5e353f8) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00380e6f,0x22,&PTR_s__root__cargo_registry_src_index__00af9750);
}


// ===== 00a10080  <chrono::datetime::DateTime<chrono::offset::local::Local>as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::DateTime<chrono::offset::local::Local> as core::default::Default>::default */

void __rustcall
<chrono::datetime::DateTime<chrono::offset::local::Local>as_core::default::Default>::default
          (undefined8 *param_1)

{
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined *puStack_28;
  undefined4 local_8;
  undefined4 local_4;
  
  local_40 = (undefined4 *)((ulong)local_40 & 0xffffffffffffff00);
  FUN_00a0dbf8(&local_4c,&PTR_FUN_00af8bc8,&DAT_00380fcc,&local_40);
  if (local_4c == 0) {
    *param_1 = 0xf6401a;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = local_48;
    return;
  }
  if (local_4c == 1) {
    local_40 = &local_8;
    local_8 = local_48;
    local_4 = uStack_44;
    local_30 = &local_4;
    puStack_38 = PTR_fmt_00b01300;
    puStack_28 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ba643,&local_40,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
}


// ===== 00a1013c  <chrono::offset::utc::Utc_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::utc::Utc as core::fmt::Debug>::fmt */

void __rustcall
<chrono::offset::utc::Utc_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a10154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380e91,1);
  return;
}


// ===== 00a10158  FUN_00a10158 =====

void FUN_00a10158(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1 + 1;
  if (*(char *)*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af9810);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a101b4  FUN_00a101b4 =====

void FUN_00a101b4(undefined8 *param_1)

{
  <core::time::Duration_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00a101bc  FUN_00a101bc =====

void FUN_00a101bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"SystemTimeError",0xf,&local_18,&DAT_00af9a40);
  return;
}


// ===== 00a10200  FUN_00a10200 =====

void FUN_00a10200(undefined8 *param_1)

{
  <core::io::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00a10208  <chrono::time_delta::TimeDelta_as_core::ops::arith::AddAssign>::add_assign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::TimeDelta as core::ops::arith::AddAssign>::add_assign */

void __rustcall
<chrono::time_delta::TimeDelta_as_core::ops::arith::AddAssign>::add_assign
          (long *param_1,long param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (int)param_1[1] + param_3;
  param_2 = *param_1 + param_2;
  if (999999999 < (int)uVar1) {
    param_2 = param_2 + 1;
    uVar1 = uVar1 + 0xc4653600;
  }
  if (uVar1 < 1000000000 && 0xffbe76c8b439580f < param_2 + 0xffdf3b645a1cac08U) {
    if (param_2 == 0x20c49ba5e353f7) {
      if (uVar1 < 0x3019d7c1) {
LAB_00a102ac:
        *param_1 = param_2;
        *(uint *)(param_1 + 1) = uVar1;
        return;
      }
    }
    else if ((192999999 < uVar1) || (param_2 != -0x20c49ba5e353f8)) goto LAB_00a102ac;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00380e4d,0x22,&PTR_s__root__cargo_registry_src_index__00af9768);
}


// ===== 00a102d8  <chrono::offset::utc::Utc_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::utc::Utc as core::fmt::Display>::fmt */

void __rustcall
<chrono::offset::utc::Utc_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a102f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00380e92,3);
  return;
}


// ===== 00a102f4  <chrono::time_delta::TimeDelta_as_core::ops::arith::SubAssign>::sub_assign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::TimeDelta as core::ops::arith::SubAssign>::sub_assign */

void __rustcall
<chrono::time_delta::TimeDelta_as_core::ops::arith::SubAssign>::sub_assign
          (long *param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = (int)param_1[1] - param_3;
  lVar1 = (*param_1 - param_2) + (long)((int)uVar2 >> 0x1f);
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 1000000000;
  }
  if (uVar2 < 1000000000 && 0xffbe76c8b439580f < lVar1 + 0xffdf3b645a1cac08U) {
    if (lVar1 == 0x20c49ba5e353f7) {
      if (uVar2 < 0x3019d7c1) {
LAB_00a10390:
        *param_1 = lVar1;
        *(uint *)(param_1 + 1) = uVar2;
        return;
      }
    }
    else if ((192999999 < uVar2) || (lVar1 != -0x20c49ba5e353f8)) goto LAB_00a10390;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00380e6f,0x22,&PTR_s__root__cargo_registry_src_index__00af9780);
}


// ===== 00a103bc  <chrono::time_delta::TimeDelta_as_core::ops::arith::Mul<i32>>::mul =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::TimeDelta as core::ops::arith::Mul<i32>>::mul */

void __rustcall
<chrono::time_delta::TimeDelta_as_core::ops::arith::Mul<i32>>::mul
          (long param_1,int param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_3 * param_1;
  uVar1 = ((long)param_3 * (long)param_2) / 1000000000 +
          (((long)param_3 * (long)param_2) % 1000000000 >> 0x3f);
  uVar2 = uVar3 + uVar1;
  if (CARRY8(SUB168(SEXT816((long)param_3) * SEXT816(param_1),8) + ((long)uVar1 >> 0x3f) +
             (ulong)CARRY8(uVar3,uVar1) + -1 + (ulong)(0x7ffffffffffffffe < uVar2),
             (ulong)(1 < uVar2 + 0x8000000000000001))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00380e95,0x1c,&PTR_s__root__cargo_registry_src_index__00af9798);
}


// ===== 00a10450  <chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::local::Local>as_core[bcece726f298455b]::convert::From<chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::utc::Utc>>>::from =====

/* <chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::local::Local> as
   core[bcece726f298455b]::convert::From<chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::utc::Utc>>>::from
    */

void <chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::local::Local>as_core[bcece726f298455b]::convert::From<chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::utc::Utc>>>
     ::from(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined *puStack_28;
  
  local_40 = (undefined4 *)((ulong)local_40 & 0xffffffffffffff00);
  FUN_00a0dbf8(&local_54,&PTR_FUN_00af8bc8,param_2,&local_40);
  if (local_54 == 0) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = local_50;
    return;
  }
  if (local_54 == 1) {
    local_40 = &local_48;
    local_48 = local_50;
    local_44 = uStack_4c;
    local_30 = &local_44;
    puStack_38 = PTR_fmt_00b01300;
    puStack_28 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ba643,&local_40,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
}


// ===== 00a1050c  <chrono::time_delta::TimeDelta_as_core::ops::arith::Div<i32>>::div =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::TimeDelta as core::ops::arith::Div<i32>>::div */

undefined1  [16] __rustcall
<chrono::time_delta::TimeDelta_as_core::ops::arith::Div<i32>>::div
          (long param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined *puStack_48;
  undefined4 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00380eb1,0xd,&PTR_s__root__cargo_registry_src_index__00af97b0);
  }
  if ((param_1 == -0x8000000000000000) && (param_3 == -1)) {
    core::panicking::panic_const::panic_const_div_overflow
              (&PTR_s__root__cargo_registry_src_index__00af96a0);
  }
  else if ((param_2 != -0x80000000) || (param_3 != -1)) {
    lVar7 = (long)param_3;
    lVar5 = 0;
    if (lVar7 != 0) {
      lVar5 = param_1 / lVar7;
    }
    iVar4 = 0;
    if (lVar7 != 0) {
      iVar4 = (int)(((param_1 - lVar5 * lVar7) * 1000000000) / lVar7);
    }
    iVar3 = 0;
    if (param_3 != 0) {
      iVar3 = param_2 / param_3;
    }
    uVar1 = iVar3 + iVar4;
    if (-1 < (int)uVar1) {
      if (999999999 < uVar1) {
        lVar5 = lVar5 + 1;
        uVar1 = uVar1 + 0xc4653600;
      }
      auVar8._8_4_ = uVar1;
      auVar8._0_8_ = lVar5;
      auVar8._12_4_ = 0;
      return auVar8;
    }
    auVar9._0_8_ = lVar5 + -1;
    auVar9._8_4_ = uVar1 + 1000000000;
    auVar9._12_4_ = 0;
    return auVar9;
  }
  puVar6 = (undefined8 *)
           core::panicking::panic_const::panic_const_div_overflow
                     (&PTR_s__root__cargo_registry_src_index__00af96b8);
  pcStack_28 = <chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::local::Local>as_core[bcece726f298455b]::convert::From<chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::fixed::FixedOffset>>>
               ::from;
  puStack_50 = (undefined4 *)((ulong)puStack_50 & 0xffffffffffffff00);
  puStack_30 = &stack0xfffffffffffffff0;
  auVar9 = FUN_00a0dbf8(&iStack_64,&PTR_FUN_00af8bc8,puVar6,&puStack_50);
  if (iStack_64 == 0) {
    uVar2 = *(undefined4 *)(puVar6 + 1);
    *extraout_x8 = *puVar6;
    *(undefined4 *)(extraout_x8 + 1) = uVar2;
    *(undefined4 *)((long)extraout_x8 + 0xc) = uStack_60;
    return auVar9;
  }
  if (iStack_64 == 1) {
    puStack_50 = &uStack_58;
    uStack_58 = uStack_60;
    uStack_54 = uStack_5c;
    puStack_40 = &uStack_54;
    puStack_48 = PTR_fmt_00b01300;
    puStack_38 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ba643,&puStack_50,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
}


// ===== 00a105dc  <chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::local::Local>as_core[bcece726f298455b]::convert::From<chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::fixed::FixedOffset>>>::from =====

/* <chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::local::Local> as
   core[bcece726f298455b]::convert::From<chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::fixed::FixedOffset>>>::from
    */

void <chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::local::Local>as_core[bcece726f298455b]::convert::From<chrono[2a5c87c769d27a3a]::datetime::DateTime<chrono[2a5c87c769d27a3a]::offset::fixed::FixedOffset>>>
     ::from(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined *puStack_28;
  
  local_40 = (undefined4 *)((ulong)local_40 & 0xffffffffffffff00);
  FUN_00a0dbf8(&local_54,&PTR_FUN_00af8bc8,param_2,&local_40);
  if (local_54 == 0) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = local_50;
    return;
  }
  if (local_54 == 1) {
    local_40 = &local_48;
    local_48 = local_50;
    local_44 = uStack_4c;
    local_30 = &local_44;
    puStack_38 = PTR_fmt_00b01300;
    puStack_28 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ba643,&local_40,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
}


// ===== 00a10698  <chrono::naive::datetime::NaiveDateTime_as_core::ops::arith::Add<chrono::month::Months>>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as core::ops::arith::Add<chrono::month::Months>>::add */

void __rustcall
<chrono::naive::datetime::NaiveDateTime_as_core::ops::arith::Add<chrono::month::Months>>::add
          (int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if ((param_3 != 0) &&
     ((param_3 < 0 ||
      (iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months(), iVar1 == 0))))
  {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00380ebe,0x25,&PTR_s__root__cargo_registry_src_index__00af97c8)
    ;
  }
  uVar2 = *(undefined8 *)(param_2 + 1);
  *param_1 = iVar1;
  *(undefined8 *)(param_1 + 1) = uVar2;
  return;
}


// ===== 00a106f0  <chrono::time_delta::TimeDelta_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::TimeDelta as core::fmt::Display>::fmt */

undefined8 __rustcall
<chrono::time_delta::TimeDelta_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *local_80;
  uint local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined **local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  uint local_24;
  
  puVar7 = (undefined *)*param_1;
  uVar8 = *(uint *)(param_1 + 1);
  if ((long)puVar7 < 0) {
    bVar2 = uVar8 != 0;
    uVar8 = 1000000000 - uVar8;
    puVar7 = (undefined *)(-(long)puVar7 - (ulong)bVar2);
    local_70 = &DAT_00380ee3;
    if (!bVar2) {
      uVar8 = 0;
    }
    uStack_68 = 1;
  }
  else {
    uStack_68 = 0;
    local_70 = (undefined *)0x1;
  }
  uVar5 = *param_2;
  uVar1 = param_2[1];
  local_60 = &local_70;
  local_58 = FUN_00a0d340;
  local_80 = puVar7;
  local_78 = uVar8;
  uVar3 = core::fmt::write(uVar5,uVar1,&DAT_002af58a,&local_60);
  if ((uVar3 & 1) == 0) {
    if ((uVar8 == 0) && (puVar7 == (undefined *)0x0)) {
      pcVar4 = &DAT_00380ee4;
      uVar5 = 2;
    }
    else {
      local_58 = (code *)PTR_fmt_00b00c58;
      local_60 = &local_80;
      uVar3 = core::fmt::write(uVar5,uVar1,&DAT_002bb30d,&local_60);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      if (0 < (int)local_78) {
        if ((local_78 * -0x33333333 >> 1 | local_78 * -0x80000000) < 0x1999999a) {
          uVar6 = 9;
          uVar3 = (ulong)local_78;
          do {
            uVar6 = uVar6 - 1;
            local_24 = (uint)(uVar3 / 10);
            uVar3 = uVar3 / 10;
          } while ((local_24 * -0x33333333 >> 1 | local_24 * -0x80000000) < 0x1999999a);
          if (uVar6 >> 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      ("Formatting argument out of range",0x41,
                       &PTR_s__root__cargo_registry_src_index__00af97e0);
          }
        }
        else {
          local_24 = local_78;
          uVar6 = 9;
        }
        local_60 = (undefined **)&local_24;
        local_58 = (code *)PTR_fmt_00b00d18;
        uStack_50 = 0;
        local_48 = (undefined2)uVar6;
        uVar3 = core::fmt::write(*param_2,param_2[1],&DAT_00380ee6,&local_60);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
      pcVar4 = "SSource duration value is out of range for the target type";
      uVar5 = 1;
    }
    uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar4,uVar5);
    return uVar5;
  }
  return 1;
}


// ===== 00a108cc  <chrono::time_delta::OutOfRangeError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::time_delta::OutOfRangeError as core::fmt::Display>::fmt */

void __rustcall
<chrono::time_delta::OutOfRangeError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a108e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,"Source duration value is out of range for the target type",0x39);
  return;
}


// ===== 00a108e8  <chrono::datetime::DateTime<chrono::offset::utc::Utc>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::str::traits::FromStr>::from_str */

void __rustcall
<chrono::datetime::DateTime<chrono::offset::utc::Utc>as_core::str::traits::FromStr>::from_str
          (int *param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x1;
  undefined1 uVar1;
  int iVar2;
  long local_128 [2];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  int local_88;
  int local_84;
  undefined1 local_80;
  int local_74;
  undefined1 local_70;
  undefined3 local_6f;
  undefined1 uStack_6c;
  undefined3 uStack_6b;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 local_40;
  int iStack_3c;
  
  local_80 = 0xff;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_128[0] = 0;
  local_88 = 0;
  chrono::format::parse::parse_rfc3339_relaxed(&local_68,local_128,param_2,param_3);
  if (CONCAT44(iStack_64,local_68) == 0) {
    uVar1 = (undefined1)uStack_60;
    goto LAB_00a1098c;
  }
  FUN_00a03e5c(CONCAT44(iStack_64,local_68),CONCAT44(iStack_5c,uStack_60));
  if (extraout_x1 != 0) {
    uVar1 = 5;
    goto LAB_00a1098c;
  }
  iVar2 = local_84;
  if (local_88 == 1) {
LAB_00a109cc:
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (&local_68,local_128,iVar2);
    uVar1 = (undefined1)iStack_64;
    if (local_68 == 0) goto LAB_00a1098c;
    local_70 = (undefined1)iStack_64;
    local_74 = local_68;
    local_6f = (undefined3)((uint)iStack_64 >> 8);
    uStack_6c = (undefined1)uStack_60;
    uStack_6b = (undefined3)((uint)uStack_60 >> 8);
    if (0x2a2fe < iVar2 + 0x1517fU) {
      uVar1 = 0;
      goto LAB_00a1098c;
    }
    local_40 = 0;
    iStack_3c = iVar2;
    FUN_00a0c350(&local_68,&local_40,&local_74);
    if (local_68 == 0) {
      local_40 = (undefined4)CONCAT43(iStack_5c,uStack_60._1_3_);
      uVar1 = (undefined1)uStack_60;
      if (iStack_64 != 0) {
        *param_1 = iStack_64;
        *(undefined1 *)(param_1 + 1) = (undefined1)uStack_60;
        *(undefined4 *)((long)param_1 + 5) = local_40;
        param_1[2] = iStack_5c;
        return;
      }
      goto LAB_00a1098c;
    }
    if (local_68 != 1) {
      uVar1 = 1;
      goto LAB_00a1098c;
    }
  }
  else if (local_128[0] == 1) {
    iVar2 = 0;
    goto LAB_00a109cc;
  }
  uVar1 = 2;
LAB_00a1098c:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 0;
  return;
}


// ===== 00a10ab0  <chrono::datetime::DateTime<chrono::offset::local::Local>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::DateTime<chrono::offset::local::Local> as
   core::str::traits::FromStr>::from_str */

void __rustcall
<chrono::datetime::DateTime<chrono::offset::local::Local>as_core::str::traits::FromStr>::from_str
          (int *param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x1;
  int iVar1;
  undefined1 uVar2;
  undefined4 local_148;
  int *local_138;
  undefined *puStack_130;
  int *local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  int local_98;
  int local_94;
  undefined1 local_90;
  int local_84;
  undefined1 local_80;
  undefined3 local_7f;
  undefined1 uStack_7c;
  undefined3 uStack_7b;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 local_50;
  int local_4c;
  int iStack_48;
  int local_44;
  
  local_90 = 0xff;
  local_128 = (int *)((ulong)local_128 & 0xffffffff00000000);
  local_120 = (undefined *)((ulong)local_120 & 0xffffffff00000000);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_138 = (int *)0x0;
  local_98 = 0;
  chrono::format::parse::parse_rfc3339_relaxed(&local_78,&local_138,param_2,param_3);
  if (CONCAT44(iStack_74,local_78) == 0) {
    uVar2 = (undefined1)uStack_70;
    goto LAB_00a10b58;
  }
  FUN_00a03e5c(CONCAT44(iStack_74,local_78),CONCAT44(uStack_6c,uStack_70));
  if (extraout_x1 != 0) {
    uVar2 = 5;
    goto LAB_00a10b58;
  }
  iVar1 = local_94;
  if (local_98 == 1) {
LAB_00a10b9c:
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (&local_78,&local_138,iVar1);
    uVar2 = (undefined1)iStack_74;
    if (local_78 == 0) goto LAB_00a10b58;
    local_84 = local_78;
    local_80 = (undefined1)iStack_74;
    local_50._0_3_ = (undefined3)((uint)iStack_74 >> 8);
    local_50._3_1_ = (undefined1)uStack_70;
    uStack_7b = (undefined3)((uint)uStack_70 >> 8);
    _local_7f = CONCAT13(local_50._3_1_,(undefined3)local_50);
    if (0x2a2fe < iVar1 + 0x1517fU) {
      uVar2 = 0;
      goto LAB_00a10b58;
    }
    local_50 = 0;
    local_4c = iVar1;
    FUN_00a0c350(&local_78,&local_50,&local_84);
    if (local_78 == 0) {
      uVar2 = (undefined1)uStack_70;
      local_148 = (undefined4)CONCAT43(uStack_6c,uStack_70._1_3_);
      if (iStack_74 != 0) {
        uStack_70 = (undefined4)(CONCAT44(uStack_6c >> 8,local_148) >> 0x18);
        local_78 = iStack_74;
        local_138 = (int *)((ulong)local_138 & 0xffffffffffffff00);
        FUN_00a0dbf8(&local_50,&PTR_FUN_00af8bc8,&local_78,&local_138);
        if (local_50 == 0) {
          *param_1 = iStack_74;
          *(undefined1 *)(param_1 + 1) = uVar2;
          *(undefined4 *)((long)param_1 + 5) = local_148;
          param_1[2] = uStack_6c;
          param_1[3] = local_4c;
          return;
        }
        if (local_50 != 2) {
          local_138 = &local_44;
          local_44 = local_4c;
          local_84 = iStack_48;
          local_128 = &local_84;
          puStack_130 = PTR_fmt_00b01300;
          local_120 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002ba643,&local_138,&PTR_s__root__cargo_registry_src_index__00af9830);
        }
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
      }
      goto LAB_00a10b58;
    }
    if (local_78 != 1) {
      uVar2 = 1;
      goto LAB_00a10b58;
    }
  }
  else if (local_138 == (int *)0x1) {
    iVar1 = 0;
    goto LAB_00a10b9c;
  }
  uVar2 = 2;
LAB_00a10b58:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 0;
  return;
}


// ===== 00a10d20  <chrono::datetime::DateTime<chrono::offset::utc::Utc>as_core::convert::From<std::time::SystemTime>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::DateTime<chrono::offset::utc::Utc> as
   core::convert::From<std::time::SystemTime>>::from */

void __rustcall
<chrono::datetime::DateTime<chrono::offset::utc::Utc>as_core::convert::From<std::time::SystemTime>>
::from(int *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  ulong uStack_40;
  int local_38;
  
  local_58 = param_2;
  local_50 = param_3;
  <std::time::[5]::std::time::SystemTime>::duration_since(&local_48,&local_58,0,0);
  uVar4 = ~uStack_40;
  iVar3 = 1000000000 - local_38;
  if (local_38 == 0) {
    uVar4 = -uStack_40;
    iVar3 = 0;
  }
  iVar2 = local_38;
  if (local_48 == 1) {
    iVar2 = iVar3;
    uStack_40 = uVar4;
  }
  lVar5 = (long)uStack_40 % 0x15180;
  lVar1 = (long)uStack_40 / 0x15180 + (lVar5 >> 0x3f);
  if ((0xfffffffeffffffff < lVar1 - 0x7ff506c5U) &&
     (iVar3 = <chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt
                        ((int)lVar1 + 0xaf93b), iVar3 != 0)) {
    *param_1 = iVar3;
    param_1[1] = ((uint)(lVar5 >> 0x3f) & 0x15180) + (int)lVar5;
    param_1[2] = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af97f8);
}


// ===== 00a10e18  <chrono::datetime::DateTime<chrono::offset::local::Local>as_core::convert::From<std::time::SystemTime>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::datetime::DateTime<chrono::offset::local::Local> as
   core::convert::From<std::time::SystemTime>>::from */

void __rustcall
<chrono::datetime::DateTime<chrono::offset::local::Local>as_core::convert::From<std::time::SystemTime>>
::from(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int local_7c;
  int iStack_78;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 *local_60;
  undefined *puStack_58;
  undefined4 *local_50;
  undefined *puStack_48;
  undefined4 local_28;
  undefined4 local_24;
  
  local_70 = param_2;
  local_68 = param_3;
  <std::time::[5]::std::time::SystemTime>::duration_since(&local_60,&local_70,0,0);
  uVar4 = ~(ulong)puStack_58;
  iVar3 = 1000000000 - (int)local_50;
  if ((int)local_50 == 0) {
    uVar4 = -(long)puStack_58;
    iVar3 = 0;
  }
  iVar2 = (int)local_50;
  if (local_60 == (undefined4 *)0x1) {
    iVar2 = iVar3;
    puStack_58 = (undefined *)uVar4;
  }
  lVar5 = (long)puStack_58 % 0x15180;
  lVar1 = (lVar5 >> 0x3f) + (long)puStack_58 / 0x15180;
  if ((lVar1 - 0x7ff506c5U < 0xffffffff00000000) ||
     (local_7c = <chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt
                           ((int)lVar1 + 0xaf93b), local_7c == 0)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af97f8);
  }
  iStack_78 = ((uint)(lVar5 >> 0x3f) & 0x15180) + (int)lVar5;
  local_60 = (undefined4 *)((ulong)local_60 & 0xffffffffffffff00);
  local_74 = iVar2;
  FUN_00a0dbf8(&local_70,&PTR_FUN_00af8bc8,&local_7c,&local_60);
  if ((int)local_70 == 0) {
    *param_1 = CONCAT44(iStack_78,local_7c);
    *(int *)(param_1 + 1) = local_74;
    *(undefined4 *)((long)param_1 + 0xc) = local_70._4_4_;
    return;
  }
  if ((int)local_70 == 1) {
    local_60 = &local_28;
    local_28 = local_70._4_4_;
    local_24 = local_68;
    local_50 = &local_24;
    puStack_58 = PTR_fmt_00b01300;
    puStack_48 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ba643,&local_60,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
}


// ===== 00a10fac  <chrono::month::month_serde::MonthVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::month::month_serde::MonthVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::month::month_serde::MonthVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Month",5);
  return;
}


// ===== 00a10fc0  <chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_utc_date =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_date */

undefined4 __rustcall
<chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_utc_date
          (undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined *puStack_28;
  undefined4 *local_20;
  undefined *puStack_18;
  
  local_50 = *param_2;
  local_4c = 0;
  uStack_48 = 0;
  local_30 = (undefined4 *)((ulong)local_30 & 0xffffffffffffff00);
  FUN_00a0dbf8(&local_44,&PTR_FUN_00af8bc8,&local_50,&local_30);
  if (local_44 == 0) {
    return local_40;
  }
  if (local_44 == 1) {
    local_30 = &local_38;
    local_38 = local_40;
    local_34 = uStack_3c;
    local_20 = &local_34;
    puStack_28 = PTR_fmt_00b01300;
    puStack_18 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ba643,&local_30,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
}


// ===== 00a11068  <chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_local_date =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_date */

void __rustcall
<chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_local_date
          (undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined1 local_14 [4];
  
  local_20 = *param_2;
  local_1c = 0;
  uStack_18 = 0;
  local_14[0] = 1;
  FUN_00a0dbf8(&PTR_FUN_00af8bc8,&local_20,local_14);
  return;
}


// ===== 00a110a8  <chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_utc_datetime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime */

undefined4 __rustcall
<chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_utc_datetime
          (undefined8 param_1,undefined8 param_2)

{
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined *puStack_28;
  undefined4 *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined4 *)((ulong)local_30 & 0xffffffffffffff00);
  FUN_00a0dbf8(&local_44,&PTR_FUN_00af8bc8,param_2,&local_30);
  if (local_44 == 0) {
    return local_40;
  }
  if (local_44 == 1) {
    local_30 = &local_38;
    local_38 = local_40;
    local_34 = uStack_3c;
    local_20 = &local_34;
    puStack_28 = PTR_fmt_00b01300;
    puStack_18 = PTR_fmt_00b01300;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002ba643,&local_30,&PTR_s__root__cargo_registry_src_index__00af9830);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00380a61,0x25,&PTR_s__root__cargo_registry_src_index__00af9830);
}


// ===== 00a11140  <chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_local_datetime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime */

void __rustcall
<chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_local_datetime
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 local_14 [4];
  
  local_14[0] = 1;
  FUN_00a0dbf8(&PTR_FUN_00af8bc8,param_2,local_14);
  return;
}


// ===== 00a11170  <chrono::naive::date::serde::NaiveDateVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::date::serde::NaiveDateVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::naive::date::serde::NaiveDateVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a formatted date string",0x17);
  return;
}


// ===== 00a11184  <chrono::naive::time::serde::NaiveTimeVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::time::serde::NaiveTimeVisitor as serde::de::Visitor>::expecting */

void __rustcall
<chrono::naive::time::serde::NaiveTimeVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a formatted time string",0x17);
  return;
}


// ===== 00a11198  <chrono::naive::datetime::NaiveDateTime_as_core::ops::arith::Sub<chrono::month::Months>>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as core::ops::arith::Sub<chrono::month::Months>>::sub */

void __rustcall
<chrono::naive::datetime::NaiveDateTime_as_core::ops::arith::Sub<chrono::month::Months>>::sub
          (int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if ((param_3 != 0) &&
     ((param_3 < 0 ||
      (iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::diff_months(iVar1,-param_3),
      iVar1 == 0)))) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("`NaiveDateTime - Months` out of range",0x25,
               &PTR_s__root__cargo_registry_src_index__00af9848);
  }
  uVar2 = *(undefined8 *)(param_2 + 1);
  *param_1 = iVar1;
  *(undefined8 *)(param_1 + 1) = uVar2;
  return;
}


// ===== 00a111f4  <chrono::naive::datetime::NaiveDateTime_as_core::ops::arith::Add<chrono::naive::Days>>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as core::ops::arith::Add<chrono::naive::Days>>::add */

void __rustcall
<chrono::naive::datetime::NaiveDateTime_as_core::ops::arith::Add<chrono::naive::Days>>::add
          (int *param_1,undefined4 *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_3 >> 0x1f == 0) &&
     (iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days(*param_2), iVar1 != 0)
     ) {
    uVar2 = *(undefined8 *)(param_2 + 1);
    *param_1 = iVar1;
    *(undefined8 *)(param_1 + 1) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("`NaiveDateTime + Days` out of range",0x23,
             &PTR_s__root__cargo_registry_src_index__00af9860);
}


// ===== 00a1124c  <chrono::naive::datetime::NaiveDateTime_as_core::ops::arith::Sub<chrono::naive::Days>>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as core::ops::arith::Sub<chrono::naive::Days>>::sub */

void __rustcall
<chrono::naive::datetime::NaiveDateTime_as_core::ops::arith::Sub<chrono::naive::Days>>::sub
          (int *param_1,undefined4 *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_3 >> 0x1f == 0) &&
     (iVar1 = <chrono::naive::date::chrono::naive::date::NaiveDate>::add_days
                        (*param_2,-(int)param_3), iVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_2 + 1);
    *param_1 = iVar1;
    *(undefined8 *)(param_1 + 1) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("`NaiveDateTime - Days` out of rangeT:",0x23,
             &PTR_s__root__cargo_registry_src_index__00af9878);
}


// ===== 00a112a8  <chrono::naive::datetime::NaiveDateTime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as core::fmt::Debug>::fmt */

undefined8 __rustcall
<chrono::naive::datetime::NaiveDateTime_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = <chrono::naive::date::NaiveDate_as_core::fmt::Debug>::fmt();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x54), (uVar1 & 1) == 0
     )) {
    uVar2 = <chrono::naive::time::NaiveTime_as_core::fmt::Debug>::fmt(param_1 + 4,param_2);
    return uVar2;
  }
  return 1;
}


// ===== 00a112f8  <chrono::naive::datetime::NaiveDateTime_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as core::fmt::Display>::fmt */

undefined8 __rustcall
<chrono::naive::datetime::NaiveDateTime_as_core::fmt::Display>::fmt(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = <chrono::naive::date::NaiveDate_as_core::fmt::Debug>::fmt();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x20), (uVar1 & 1) == 0
     )) {
    uVar2 = <chrono::naive::time::NaiveTime_as_core::fmt::Debug>::fmt(param_1 + 4,param_2);
    return uVar2;
  }
  return 1;
}


// ===== 00a11348  <chrono::naive::datetime::NaiveDateTime_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::naive::datetime::NaiveDateTime as core::str::traits::FromStr>::from_str */

void __rustcall
<chrono::naive::datetime::NaiveDateTime_as_core::str::traits::FromStr>::from_str
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 local_e0 [2];
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  long local_30;
  undefined1 local_28;
  undefined7 uStack_27;
  
  local_38 = 0xff;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_e0[0] = 0;
  local_40 = 0;
  FUN_00a05764(&local_30,local_e0,param_2,param_3,&DAT_00af9890,&DAT_00af9a40);
  if ((local_30 != 0) && (CONCAT71(uStack_27,local_28) == 0)) {
    <chrono::format::parsed::chrono::format::parsed::Parsed>::to_naive_datetime_with_offset
              (param_1,local_e0,0);
    return;
  }
  *param_1 = 0;
  uVar1 = 5;
  if (CONCAT71(uStack_27,local_28) == 0) {
    uVar1 = 0xff;
  }
  if (local_30 == 0) {
    uVar1 = local_28;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00a11430  FUN_00a11430 =====

void FUN_00a11430(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"SystemTimeError",0xf,&local_18,&DAT_00af9a40);
  return;
}


// ===== 00a11470  FUN_00a11470 =====

bool FUN_00a11470(undefined8 *param_1,uint param_2)

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
    lVar3 = FUN_00a05608(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_00a11578;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_00a05608(*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_00a11578:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 00a115a8 to 00a115af has its CatchHandler @ 00a115cc */
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
        lVar3 = FUN_00a05608(*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_00a05608(*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_00a11578;
    }
  }
  return lVar3 != 0;
}


// ===== 00a115d4  FUN_00a115d4 =====

void FUN_00a115d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00af9640,param_2,param_3);
  return;
}


// ===== 00a115e8  FUN_00a115e8 =====

undefined1  [16] FUN_00a115e8(long *param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)param_1[1]) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    return auVar5 << 0x40;
  }
  bVar2 = *pbVar1;
  auVar7._9_7_ = 0;
  auVar7[8] = bVar2;
  *param_1 = (long)(pbVar1 + 1);
  if (-1 < (char)bVar2) {
    auVar7._0_8_ = 1;
    return auVar7;
  }
  bVar3 = pbVar1[1];
  *param_1 = (long)(pbVar1 + 2);
  uVar6 = (uint)bVar2;
  if (bVar2 < 0xe0) {
    auVar9._12_4_ = 0;
    auVar9._8_4_ = bVar3 & 0x3f | (uVar6 & 0x1f) << 6;
    auVar9._0_8_ = 1;
    return auVar9;
  }
  bVar2 = pbVar1[2];
  *param_1 = (long)(pbVar1 + 3);
  uVar4 = bVar2 & 0x3f | (bVar3 & 0x3f) << 6;
  if (0xef < uVar6) {
    bVar2 = pbVar1[3];
    *param_1 = (long)(pbVar1 + 4);
    auVar8._12_4_ = 0;
    auVar8._8_4_ = bVar2 & 0x3f | uVar4 << 6 | (uVar6 & 7) << 0x12;
    auVar8._0_8_ = 1;
    return auVar8;
  }
  auVar10._12_4_ = 0;
  auVar10._8_4_ = uVar4 | (uVar6 & 0x1f) << 0xc;
  auVar10._0_8_ = 1;
  return auVar10;
}


// ===== 00a11688  <chrono::format::strftime::chrono::format::strftime::StrftimeItems>::parse_to_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::strftime::chrono::format::strftime::StrftimeItems>::parse_to_owned */

void __rustcall
<chrono::format::strftime::chrono::format::strftime::StrftimeItems>::parse_to_owned
          (long *param_1,undefined8 *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  char unaff_w25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  char acStack_164 [4];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char *pcStack_140;
  long lStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  char cStack_118;
  char cStack_117;
  uint uStack_116;
  undefined2 uStack_112;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  uint uStack_d0;
  undefined2 uStack_cc;
  char cStack_c8;
  char cStack_c7;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint uStack_b0;
  undefined2 uStack_ac;
  uint uStack_a8;
  undefined2 uStack_a4;
  uint uStack_90;
  undefined2 uStack_8c;
  char cStack_88;
  char cStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_158 = param_2[1];
  uStack_160 = *param_2;
  uStack_148 = param_2[3];
  uStack_150 = param_2[2];
  acStack_164[0] = -1;
  pcStack_140 = acStack_164;
  cVar5 = <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
                    (&cStack_88,&uStack_160);
  if (cStack_88 != -1) {
    if (cStack_88 == '\x06') {
      uVar3 = unaff_x20;
      uVar4 = unaff_x21;
      cVar7 = '\x06';
    }
    else {
      cVar5 = <chrono::format::chrono::format::Item>::to_owned(&uStack_100,&cStack_88);
      uVar3 = unaff_x20;
      uVar4 = unaff_x21;
      cVar7 = uStack_100._1_1_;
      if ((char)uStack_100 != -1) {
        do {
          cVar5 = uStack_100._1_1_;
          uVar4 = uStack_f0;
          uVar3 = uStack_f8;
          uStack_a8 = *(uint *)((ulong)&uStack_100 | 2);
          uStack_a4 = (undefined2)((uint *)((ulong)&uStack_100 | 2))[1];
          cStack_118 = (char)uStack_100;
          cStack_117 = cVar5;
          if ((char)uStack_100 != -2) goto LAB_00a04da8;
          <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
                    (&cStack_88,&uStack_160);
          if (cStack_88 == -1) goto LAB_00a04dc0;
          if (cStack_88 == '\x06') {
            cVar7 = '\x06';
            break;
          }
          <chrono::format::chrono::format::Item>::to_owned(&uStack_100,&cStack_88);
          cVar7 = uStack_100._1_1_;
        } while ((char)uStack_100 != -1);
      }
    }
    acStack_164[0] = cVar7;
    uStack_f0 = uVar4;
    uStack_f8 = uVar3;
    cStack_118 = -1;
    cStack_117 = cVar5;
LAB_00a04da8:
    cStack_c8 = (char)uStack_a8;
    cStack_c7 = (char)(uStack_a8 >> 8);
    uStack_c6 = (undefined2)(uStack_a8 >> 0x10);
    uStack_c4 = uStack_a4;
    if (cStack_118 != -1) {
      uStack_116 = uStack_a8;
      uStack_8c = uStack_a4;
      uStack_112 = uStack_a4;
      uStack_110 = uStack_f8;
      uStack_108 = uStack_f0;
      uStack_90 = uStack_116;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar6 = (undefined8 *)FUN_004b25a4(0x60,8);
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(8,0x60);
      }
      lStack_130 = 4;
      puVar6[2] = uStack_108;
      puVar6[1] = uStack_110;
      *puVar6 = CONCAT26(uStack_112,CONCAT42(uStack_116,CONCAT11(cStack_117,cStack_118)));
      pcStack_e0 = pcStack_140;
      lStack_120 = 1;
      uStack_f8 = uStack_158;
      uStack_100 = uStack_160;
      uStack_e8 = uStack_148;
      uStack_f0 = uStack_150;
      puStack_128 = puVar6;
      while( true ) {
        pcVar2 = pcStack_e0;
        lVar10 = lStack_120;
        <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
                  (&uStack_a8,&uStack_100);
        if ((uStack_a8 & 0xff) == 0xff) break;
        if ((uStack_a8 & 0xff) == 6) {
          cVar5 = '\x06';
        }
        else {
          do {
            <chrono::format::chrono::format::Item>::to_owned(&cStack_88,&uStack_a8);
            uVar4 = uStack_78;
            uVar3 = uStack_80;
            cVar5 = cStack_87;
            if (cStack_88 == -1) goto LAB_00a04eb8;
            uStack_90 = *(uint *)((ulong)&cStack_88 | 2);
            uStack_8c = (undefined2)((uint *)((ulong)&cStack_88 | 2))[1];
            unaff_x26 = uStack_80;
            unaff_x27 = uStack_78;
            cVar7 = cStack_88;
            if (cStack_88 != -2) goto LAB_00a04ec4;
            <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::
            next(&uStack_a8,&uStack_100);
            if ((uStack_a8 & 0xff) == 0xff) goto LAB_00a04f94;
            unaff_x26 = uVar3;
            unaff_x27 = uVar4;
            unaff_w25 = cVar5;
          } while ((uStack_a8 & 0xff) != 6);
          cVar5 = '\x06';
        }
LAB_00a04eb8:
        *pcVar2 = cVar5;
        cVar7 = -1;
        cVar5 = unaff_w25;
LAB_00a04ec4:
        uStack_b0 = uStack_90;
        uStack_ac = uStack_8c;
        if (cVar7 == -1) break;
        uStack_d0 = uStack_90;
        uStack_cc = uStack_8c;
        *(uint *)((ulong)&cStack_c8 | 2) = uStack_90;
        *(undefined2 *)((uint *)((ulong)&cStack_c8 | 2) + 1) = uStack_8c;
        cStack_c8 = cVar7;
        cStack_c7 = cVar5;
        uStack_c0 = unaff_x26;
        uStack_b8 = unaff_x27;
        if (lVar10 == lStack_130) {
          FUN_00a0c45c(&lStack_130,lVar10,1,8,0x18);
          puVar6 = puStack_128;
        }
        puVar8 = puVar6 + lVar10 * 3;
        lStack_120 = lVar10 + 1;
        puVar8[2] = uStack_b8;
        puVar8[1] = uStack_c0;
        *puVar8 = CONCAT26(uStack_c2,
                           CONCAT24(uStack_c4,CONCAT22(uStack_c6,CONCAT11(cStack_c7,cStack_c8))));
      }
LAB_00a04f94:
      puVar6 = puStack_128;
      lVar1 = lStack_130;
      if (acStack_164[0] != -1) {
        plVar9 = puStack_128 + 2;
        *(char *)(param_1 + 1) = acStack_164[0];
        *param_1 = -1;
        do {
          if ((((char)plVar9[-2] == '\x01') || ((char)plVar9[-2] == '\x03')) && (*plVar9 != 0)) {
            free((void *)plVar9[-1]);
          }
          lVar10 = lVar10 + -1;
          plVar9 = plVar9 + 3;
        } while (lVar10 != 0);
        if (lVar1 == 0) {
          return;
        }
        free(puVar6);
        return;
      }
      goto LAB_00a05080;
    }
  }
LAB_00a04dc0:
  if (acStack_164[0] != -1) {
    *(char *)(param_1 + 1) = acStack_164[0];
    *param_1 = -1;
    return;
  }
  lStack_130 = 0;
  lVar10 = 0;
  puStack_128 = (undefined8 *)&DAT_00000008;
LAB_00a05080:
  *param_1 = lStack_130;
  param_1[1] = (long)puStack_128;
  param_1[2] = lVar10;
  return;
}


// ===== 00a1168c  <chrono::format::strftime::chrono::format::strftime::StrftimeItems>::parse =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::strftime::chrono::format::strftime::StrftimeItems>::parse */

void __rustcall
<chrono::format::strftime::chrono::format::strftime::StrftimeItems>::parse
          (long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 *__ptr;
  long *plVar3;
  long lVar4;
  long lVar5;
  char acStack_124 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char *pcStack_100;
  long lStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  char cStack_d8;
  undefined1 uStack_d7;
  uint uStack_d6;
  undefined2 uStack_d2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  char cStack_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  acStack_124[0] = -1;
  pcStack_100 = acStack_124;
  <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
            (&uStack_c0,&uStack_120);
  if ((char)uStack_c0 == -1) {
    uStack_c0._0_1_ = acStack_124[0];
    if (acStack_124[0] != -1) goto LAB_00a052b0;
    lStack_f0 = 0;
    lVar4 = 0;
    __ptr = (undefined8 *)&DAT_00000008;
  }
  else {
    if ((char)uStack_c0 == '\x06') {
LAB_00a052b0:
      *(char *)(param_1 + 1) = (char)uStack_c0;
      *param_1 = -1;
      return;
    }
    cStack_d8 = (char)uStack_c0;
    uStack_78 = uStack_c0._2_4_;
    uStack_d7 = uStack_c0._1_1_;
    uStack_d6 = uStack_c0._2_4_;
    uStack_74 = uStack_c0._6_2_;
    uStack_d2 = uStack_c0._6_2_;
    uStack_d0 = uStack_b8;
    uStack_c8 = uStack_b0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __ptr = (undefined8 *)FUN_004b25a4(0x60,8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x60);
    }
    lStack_f0 = 4;
    __ptr[2] = uStack_c8;
    __ptr[1] = uStack_d0;
    *__ptr = CONCAT26(uStack_d2,CONCAT42(uStack_d6,CONCAT11(uStack_d7,cStack_d8)));
    pcStack_a0 = pcStack_100;
    lVar5 = 0x18;
    uStack_b8 = uStack_118;
    uStack_c0 = uStack_120;
    uStack_a8 = uStack_108;
    uStack_b0 = uStack_110;
    lStack_e0 = 1;
    puStack_e8 = __ptr;
    while( true ) {
      pcVar2 = pcStack_a0;
      lVar4 = lStack_e0;
      <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
                (&uStack_78,&uStack_c0);
      if ((uStack_78 & 0xff) == 0xff) break;
      if ((uStack_78 & 0xff) == 6) {
        *pcVar2 = (char)uStack_78;
        break;
      }
      uStack_98 = *(undefined4 *)((ulong)&uStack_78 | 2);
      cStack_90 = (char)uStack_78;
      uStack_8f = uStack_78._1_1_;
      uStack_94 = *(undefined2 *)((undefined4 *)((ulong)&uStack_78 | 2) + 1);
      *(undefined4 *)((ulong)&cStack_90 | 2) = uStack_98;
      uStack_88 = uStack_70;
      uStack_80 = uStack_68;
      *(undefined2 *)((undefined4 *)((ulong)&cStack_90 | 2) + 1) = uStack_94;
      if (lVar4 == lStack_f0) {
        FUN_00a0c45c(&lStack_f0,lVar4,1,8,0x18);
        __ptr = puStack_e8;
      }
      puVar1 = (undefined8 *)((long)__ptr + lVar5);
      lStack_e0 = lVar4 + 1;
      lVar5 = lVar5 + 0x18;
      puVar1[2] = uStack_80;
      puVar1[1] = uStack_88;
      *puVar1 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,cStack_90));
    }
    lVar5 = lStack_f0;
    if (acStack_124[0] != -1) {
      *(char *)(param_1 + 1) = acStack_124[0];
      *param_1 = -1;
      plVar3 = __ptr + 2;
      do {
        if ((((char)plVar3[-2] == '\x01') || ((char)plVar3[-2] == '\x03')) && (*plVar3 != 0)) {
          free((void *)plVar3[-1]);
        }
        lVar4 = lVar4 + -1;
        plVar3 = plVar3 + 3;
      } while (lVar4 != 0);
      if (lVar5 == 0) {
        return;
      }
      free(__ptr);
      return;
    }
  }
  *param_1 = lStack_f0;
  param_1[1] = (long)__ptr;
  param_1[2] = lVar4;
  return;
}


// ===== 00a11690  FUN_00a11690 =====

void FUN_00a11690(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  
  bVar2 = *param_2;
  if (2 < bVar2) {
    if (bVar2 < 5) {
      if (bVar2 == 3) goto LAB_00a116dc;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
    }
    else if (bVar2 == 5) {
      param_1[1] = param_2[1];
      *param_1 = 5;
      return;
    }
    *param_1 = bVar2;
    return;
  }
  if ((bVar2 == 0) || (bVar2 != 1)) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *param_1 = bVar2;
    return;
  }
LAB_00a116dc:
  auVar3 = <alloc::boxed::Box<str>as_core::clone::Clone>::clone(param_2 + 8);
  *(undefined1 (*) [16])(param_1 + 8) = auVar3;
  *param_1 = bVar2;
  return;
}


// ===== 00a11738  <chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::format::strftime::StrftimeItems as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<chrono::format::strftime::StrftimeItems_as_core::iter::traits::iterator::Iterator>::next
          (byte *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  byte *pbVar6;
  undefined1 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *extraout_x9;
  byte *pbVar11;
  byte *extraout_x9_00;
  byte *extraout_x9_01;
  byte *extraout_x9_02;
  byte *extraout_x9_03;
  byte *extraout_x9_04;
  undefined8 uVar12;
  byte *extraout_x9_05;
  byte *extraout_x9_06;
  byte *extraout_x9_07;
  byte bVar13;
  undefined2 uVar14;
  ulong uVar15;
  ulong extraout_x10;
  byte *pbVar16;
  byte *extraout_x11;
  byte *extraout_x11_00;
  byte *extraout_x11_01;
  byte *extraout_x11_02;
  byte *extraout_x11_03;
  byte *extraout_x11_04;
  byte *extraout_x11_05;
  byte *extraout_x11_06;
  byte *extraout_x11_07;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined4 local_88;
  byte local_84;
  undefined1 local_78 [2];
  byte bStack_76;
  undefined4 local_75;
  byte local_71;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  byte *pbStack_58;
  byte *local_50;
  byte *pbStack_48;
  
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_2;
  auVar21._8_8_ = param_3;
  auVar21._0_8_ = param_2;
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_2;
  if (param_2[3] != 0) {
    pbVar9 = (byte *)param_2[2];
    uVar15 = param_2[3] - 1;
    bVar13 = *pbVar9;
    param_2[2] = pbVar9 + 0x18;
    param_2[3] = uVar15;
    if (bVar13 < 3) {
      if ((bVar13 == 0) || (bVar13 != 1)) {
        auVar21 = *(undefined1 (*) [16])(pbVar9 + 8);
        goto LAB_00a11810;
      }
    }
    else {
      if (4 < bVar13) {
        if (bVar13 == 5) {
          uVar15 = (ulong)pbVar9[1];
          auVar21 = auVar4;
        }
        goto LAB_00a11810;
      }
      if (bVar13 != 3) {
        uVar15 = (ulong)pbVar9[1];
        pbVar9 = (byte *)(ulong)pbVar9[2];
        auVar21 = auVar3;
        goto LAB_00a11810;
      }
    }
    auVar21 = <alloc::boxed::Box<str>as_core::clone::Clone>::clone(pbVar9 + 8);
    pbVar9 = extraout_x9;
    uVar15 = extraout_x10;
LAB_00a11810:
    *param_1 = bVar13;
    param_1[1] = (byte)uVar15;
    param_1[2] = (byte)pbVar9;
    *(undefined1 (*) [16])(param_1 + 8) = auVar21;
    return;
  }
  pbVar9 = (byte *)param_2[1];
  if (pbVar9 == (byte *)0x0) goto LAB_00a121c0;
  pbVar10 = (byte *)*param_2;
  uVar17 = (uint)*pbVar10;
  if ((char)*pbVar10 < '\0') {
    if (uVar17 < 0xe0) {
      uVar17 = pbVar10[1] & 0x3f | (uVar17 & 0x1f) << 6;
    }
    else {
      uVar1 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
      if (uVar17 < 0xf0) {
        uVar17 = uVar1 | (uVar17 & 0x1f) << 0xc;
        goto joined_r0x00a117b0;
      }
      uVar17 = pbVar10[3] & 0x3f | uVar1 << 6 | (uVar17 & 7) << 0x12;
    }
    if (uVar17 != 0x20) goto LAB_00a117b4;
LAB_00a11ab0:
    pbVar16 = (byte *)0x0;
    pbVar19 = pbVar10;
    do {
      pbVar18 = pbVar19 + 1;
      uVar17 = (uint)*pbVar19;
      uVar15 = (ulong)uVar17;
      if ((char)*pbVar19 < '\0') {
        if (uVar17 < 0xe0) {
          pbVar18 = pbVar19 + 2;
          uVar15 = (ulong)(pbVar19[1] & 0x3f | (uVar17 & 0x1f) << 6);
        }
        else {
          uVar1 = pbVar19[2] & 0x3f | (pbVar19[1] & 0x3f) << 6;
          if (uVar17 < 0xf0) {
            uVar15 = (ulong)(uVar1 | (uVar17 & 0x1f) << 0xc);
            pbVar18 = pbVar19 + 3;
          }
          else {
            uVar15 = (ulong)(pbVar19[3] & 0x3f | uVar1 << 6 | (uVar17 & 7) << 0x12);
            pbVar18 = pbVar19 + 4;
          }
        }
      }
      uVar17 = (uint)uVar15;
      if ((4 < uVar17 - 9) && (uVar17 != 0x20)) {
        local_68 = pbVar16;
        if (uVar17 < 0x85) break;
        uVar1 = uVar17 >> 8;
        if (uVar1 < 0x20) {
          if (uVar1 == 0) {
            bVar13 = PTR_WHITESPACE_MAP_00b00d70[uVar15 & 0xff];
joined_r0x00a11bb4:
            if ((bVar13 & 1) == 0) break;
          }
          else if ((uVar1 != 0x16) || (uVar17 != 0x1680)) break;
        }
        else {
          if (uVar1 == 0x20) {
            bVar13 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar15 & 0xff] >> 1;
            goto joined_r0x00a11bb4;
          }
          if ((uVar1 != 0x30) || (uVar17 != 0x3000)) break;
        }
      }
      pbVar16 = pbVar18 + ((long)pbVar16 - (long)pbVar19);
      local_68 = pbVar9;
      pbVar19 = pbVar18;
    } while (pbVar18 != pbVar10 + (long)pbVar9);
    if (local_68 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: nextspec > 0",0x1e,
                 &PTR_s__root__cargo_registry_src_index__00afa048);
    }
    pbVar19 = pbVar9 + -(long)local_68;
    if (pbVar9 < local_68 || pbVar19 == (byte *)0x0) {
      if (pbVar19 != (byte *)0x0) goto code_r0x00a11bdc;
    }
    else {
      iVar8 = (int)(char)pbVar10[(long)local_68];
      if (iVar8 == -0x41 || iVar8 + 0x41 < 0 != SCARRY4(iVar8,0x41)) {
code_r0x00a11bdc:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (pbVar10,pbVar9,0,local_68,&PTR_s__root__cargo_registry_src_index__00afa060);
      }
    }
    pbVar18 = pbVar10 + (long)local_68;
    bVar13 = 2;
    local_70 = pbVar10;
    pbVar16 = PTR_WHITESPACE_MAP_00b00d70;
    bStack_76 = 0;
    goto LAB_00a11bfc;
  }
joined_r0x00a117b0:
  if (uVar17 == 0x20) goto LAB_00a11ab0;
LAB_00a117b4:
  pbVar16 = (byte *)(ulong)uVar17;
  if (uVar17 != 0x25) {
    if (4 < uVar17 - 9) {
      if (0x84 < uVar17) {
        uVar1 = uVar17 >> 8;
        if (uVar1 < 0x20) {
          if (uVar1 == 0) {
            bVar13 = PTR_WHITESPACE_MAP_00b00d70[(ulong)pbVar16 & 0xff];
joined_r0x00a11aac:
            if ((bVar13 & 1) != 0) goto LAB_00a11ab0;
          }
          else if ((uVar1 == 0x16) && (uVar17 == 0x1680)) goto LAB_00a11ab0;
        }
        else {
          if (uVar1 == 0x20) {
            bVar13 = (byte)PTR_WHITESPACE_MAP_00b00d70[(ulong)pbVar16 & 0xff] >> 1;
            goto joined_r0x00a11aac;
          }
          if ((uVar1 == 0x30) && (uVar17 == 0x3000)) goto LAB_00a11ab0;
        }
      }
      pbVar16 = (byte *)0x0;
      pbVar19 = pbVar10;
      do {
        pbVar18 = pbVar19 + 1;
        uVar17 = (uint)*pbVar19;
        uVar15 = (ulong)uVar17;
        if ((char)*pbVar19 < '\0') {
          if (uVar17 < 0xe0) {
            pbVar18 = pbVar19 + 2;
            uVar15 = (ulong)(pbVar19[1] & 0x3f | (uVar17 & 0x1f) << 6);
          }
          else {
            uVar1 = pbVar19[2] & 0x3f | (pbVar19[1] & 0x3f) << 6;
            if (uVar17 < 0xf0) {
              uVar15 = (ulong)(uVar1 | (uVar17 & 0x1f) << 0xc);
              pbVar18 = pbVar19 + 3;
            }
            else {
              uVar15 = (ulong)(pbVar19[3] & 0x3f | uVar1 << 6 | (uVar17 & 7) << 0x12);
              pbVar18 = pbVar19 + 4;
            }
          }
        }
        uVar17 = (uint)uVar15;
        local_68 = pbVar16;
        if (uVar17 < 0x21 && (1L << (uVar15 & 0x3f) & 0x100003e00U) != 0) break;
        if (uVar17 < 0x85) {
          if (uVar17 == 0x25) break;
        }
        else {
          uVar1 = uVar17 >> 8;
          if (uVar1 < 0x20) {
            if (uVar1 == 0) {
              bVar13 = PTR_WHITESPACE_MAP_00b00d70[uVar15 & 0xff];
joined_r0x00a119b0:
              if ((bVar13 & 1) != 0) break;
            }
            else if ((uVar1 == 0x16) && (uVar17 == 0x1680)) break;
          }
          else {
            if (uVar1 == 0x20) {
              bVar13 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar15 & 0xff] >> 1;
              goto joined_r0x00a119b0;
            }
            if ((uVar1 == 0x30) && (uVar17 == 0x3000)) break;
          }
        }
        pbVar16 = pbVar18 + ((long)pbVar16 - (long)pbVar19);
        local_68 = pbVar9;
        pbVar19 = pbVar18;
      } while (pbVar18 != pbVar10 + (long)pbVar9);
      if (local_68 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: nextspec > 0",0x1e,
                   &PTR_s__root__cargo_registry_src_index__00afa018);
      }
      pbVar19 = pbVar9 + -(long)local_68;
      if (pbVar9 < local_68 || pbVar19 == (byte *)0x0) {
        if (pbVar19 != (byte *)0x0) goto code_r0x00a11c60;
      }
      else {
        iVar8 = (int)(char)pbVar10[(long)local_68];
        if (iVar8 == -0x41 || iVar8 + 0x41 < 0 != SCARRY4(iVar8,0x41)) {
code_r0x00a11c60:
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar10,pbVar9,0,local_68,&PTR_s__root__cargo_registry_src_index__00afa030);
        }
      }
      bVar13 = 0;
      pbVar18 = pbVar10 + (long)local_68;
      local_70 = pbVar10;
      pbVar16 = &DAT_00000001;
      bStack_76 = 0;
      goto LAB_00a11bfc;
    }
    goto LAB_00a11ab0;
  }
  pbVar6 = pbVar9 + -1;
  pbVar18 = pbVar10 + 1;
  if (pbVar6 == (byte *)0x0) {
    bVar13 = 6;
    local_68 = pbVar6;
    local_70 = pbVar10;
    pbVar19 = (byte *)0x0;
    bStack_76 = 0;
    goto LAB_00a11bfc;
  }
  bVar13 = *pbVar18;
  if ((char)bVar13 + 0x40 < 0 != SCARRY4((int)(char)bVar13,0x40)) {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (pbVar10,pbVar9,1,pbVar9,&PTR_s__root__cargo_registry_src_index__00af9d30);
  }
  uVar17 = (uint)bVar13;
  if ((char)bVar13 < '\0') {
    if (uVar17 < 0xe0) {
      uVar17 = pbVar10[2] & 0x3f | (uVar17 & 0x1f) << 6;
      pbVar16 = (byte *)(ulong)uVar17;
    }
    else {
      uVar1 = pbVar10[3] & 0x3f | (pbVar10[2] & 0x3f) << 6;
      pbVar16 = (byte *)(ulong)(uVar17 & 0x1f);
      if (uVar17 < 0xf0) {
        uVar17 = uVar1 | (uVar17 & 0x1f) << 0xc;
      }
      else {
        uVar17 = pbVar10[4] & 0x3f | uVar1 << 6 | (uVar17 & 7) << 0x12;
      }
    }
    if (uVar17 < 0x80) goto LAB_00a11c90;
    if (uVar17 < 0x800) {
      pbVar10 = (byte *)0x2;
    }
    else {
      pbVar10 = (byte *)0x3;
      if (0xffff < uVar17) {
        pbVar10 = &DAT_00000004;
      }
    }
  }
  else {
LAB_00a11c90:
    pbVar10 = &DAT_00000001;
  }
  pbVar19 = pbVar6 + -(long)pbVar10;
  if (pbVar6 < pbVar10 || pbVar19 == (byte *)0x0) {
    if (pbVar19 != (byte *)0x0) goto code_r0x00a11cac;
  }
  else if ((char)pbVar18[(long)pbVar10] + 0x40 < 0 !=
           SCARRY4((int)(char)pbVar18[(long)pbVar10],0x40)) {
code_r0x00a11cac:
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (pbVar18,pbVar6,pbVar10,pbVar6,&PTR_s__root__cargo_registry_src_index__00af9d48);
  }
  pbVar18 = pbVar18 + (long)pbVar10;
  bVar20 = 0xff;
  if (0x2f < uVar17) {
    if (uVar17 == 0x30) {
      pbVar11 = (byte *)0x0;
      bVar20 = 1;
    }
    else {
      if (uVar17 != 0x5f) goto LAB_00a11e0c;
      pbVar11 = (byte *)0x0;
      bVar20 = 2;
    }
LAB_00a11d18:
    if (pbVar10 + 1 == pbVar9) goto LAB_00a11d24;
    uVar17 = (uint)*pbVar18;
    if ((char)*pbVar18 < '\0') {
      if (uVar17 < 0xe0) {
        uVar17 = pbVar18[1] & 0x3f | (uVar17 & 0x1f) << 6;
      }
      else {
        uVar1 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
        if (uVar17 < 0xf0) {
          uVar17 = uVar1 | (uVar17 & 0x1f) << 0xc;
        }
        else {
          uVar17 = pbVar18[3] & 0x3f | uVar1 << 6 | (uVar17 & 7) << 0x12;
        }
      }
      if (uVar17 < 0x80) goto LAB_00a11db0;
      if (uVar17 < 0x800) {
        pbVar9 = (byte *)0x2;
      }
      else {
        pbVar9 = (byte *)0x3;
        if (0xffff < uVar17) {
          pbVar9 = &DAT_00000004;
        }
      }
    }
    else {
LAB_00a11db0:
      pbVar9 = &DAT_00000001;
    }
    pbVar16 = pbVar19 + -(long)pbVar9;
    if (pbVar19 < pbVar9 || pbVar16 == (byte *)0x0) {
      if (pbVar16 != (byte *)0x0) goto code_r0x00a11dcc;
    }
    else if ((char)pbVar18[(long)pbVar9] + 0x40 < 0 !=
             SCARRY4((int)(char)pbVar18[(long)pbVar9],0x40)) {
code_r0x00a11dcc:
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (pbVar18,pbVar19,pbVar9,pbVar19,&PTR_s__root__cargo_registry_src_index__00af9d60);
    }
    pbVar18 = pbVar18 + (long)pbVar9;
    pbVar19 = pbVar16;
    if ((int)pbVar11 == 0) goto LAB_00a11e0c;
    if (uVar17 != 0x7a) {
      bVar13 = 6;
      local_68 = pbVar6;
      local_70 = pbVar11;
      bStack_76 = 0;
      goto LAB_00a11bfc;
    }
    local_78[1] = 0;
LAB_00a11df8:
    uVar17 = 1;
    pbVar19 = pbVar16;
    bVar13 = 5;
    goto switchD_00a11e34_caseD_1;
  }
  if (uVar17 == 0x23) {
    pbVar11 = &DAT_00000001;
    goto LAB_00a11d18;
  }
  if (uVar17 == 0x2d) {
    pbVar11 = (byte *)0x0;
    bVar20 = 0;
    goto LAB_00a11d18;
  }
LAB_00a11e0c:
  pbVar16 = (byte *)(ulong)(uVar17 - 0x25);
  uVar17 = 1;
  bVar13 = 6;
  switch(pbVar16) {
  case (byte *)0x0:
    pbVar16 = &DAT_00000001;
    bVar13 = 0;
    local_70 = (byte *)0x38109a;
    local_68 = &DAT_00000001;
    uVar17 = 1;
  default:
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x6:
    uVar7 = 0x16;
    goto LAB_00a12170;
  case (byte *)0x9:
    pbStack_58 = pbVar18 + (long)pbVar19;
    local_60 = pbVar18;
    auVar22 = FUN_00a115e8(&local_60);
    uVar17 = auVar22._8_4_;
    pbVar11 = extraout_x9_01;
    pbVar16 = extraout_x11_00;
    if ((auVar22 & (undefined1  [12])0x1) == (undefined1  [12])0x0) goto LAB_00a11d24;
    pbVar9 = pbVar18 + (long)pbVar19;
    if (uVar17 < 0x80) {
      pbVar10 = &DAT_00000001;
    }
    else if (uVar17 < 0x800) {
      pbVar10 = (byte *)0x2;
    }
    else {
      pbVar10 = (byte *)0x3;
      if (0xffff < uVar17) {
        pbVar10 = &DAT_00000004;
      }
    }
    pbVar2 = pbVar19 + -(long)pbVar10;
    if (pbVar19 < pbVar10 || pbVar2 == (byte *)0x0) {
      if (pbVar2 != (byte *)0x0) goto code_r0x00a12410;
    }
    else if ((char)pbVar18[(long)pbVar10] + 0x40 < 0 !=
             SCARRY4((int)(char)pbVar18[(long)pbVar10],0x40)) {
code_r0x00a12410:
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (pbVar18,pbVar19,pbVar10,pbVar19,&PTR_s__root__cargo_registry_src_index__00af9f70);
    }
    pbVar18 = pbVar18 + (long)pbVar10;
    pbVar19 = pbVar2;
    if ((int)uVar17 < 0x39) {
      if (uVar17 == 0x33) {
        local_50 = pbVar18;
        pbStack_48 = pbVar9;
        auVar22 = FUN_00a115e8(&local_50);
        uVar17 = auVar22._8_4_;
        pbVar11 = extraout_x9_06;
        pbVar16 = extraout_x11_06;
        if ((auVar22 & (undefined1  [12])0x1) == (undefined1  [12])0x0) goto LAB_00a11d24;
        if (uVar17 < 0x80) {
          pbVar9 = &DAT_00000001;
        }
        else if (uVar17 < 0x800) {
          pbVar9 = (byte *)0x2;
        }
        else {
          pbVar9 = (byte *)0x3;
          if (0xffff < uVar17) {
            pbVar9 = &DAT_00000004;
          }
        }
        pbVar19 = pbVar2 + -(long)pbVar9;
        if (pbVar2 < pbVar9 || pbVar19 == (byte *)0x0) {
          if (pbVar19 != (byte *)0x0) goto code_r0x00a1266c;
        }
        else if ((char)pbVar18[(long)pbVar9] + 0x40 < 0 !=
                 SCARRY4((int)(char)pbVar18[(long)pbVar9],0x40)) {
code_r0x00a1266c:
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar18,pbVar2,pbVar9,pbVar2,&PTR_s__root__cargo_registry_src_index__00af9f88);
        }
        pbVar18 = pbVar18 + (long)pbVar9;
        if (uVar17 == 0x66) {
          uVar7 = 0xb;
          goto LAB_00a126e4;
        }
LAB_00a126f0:
        uVar7 = 6;
      }
      else {
        if (uVar17 != 0x36) {
LAB_00a12564:
          _local_78 = CONCAT21(stack0xffffffffffffff89,6);
          goto LAB_00a126fc;
        }
        local_50 = pbVar18;
        pbStack_48 = pbVar9;
        auVar22 = FUN_00a115e8(&local_50);
        uVar17 = auVar22._8_4_;
        pbVar11 = extraout_x9_05;
        pbVar16 = extraout_x11_05;
        if ((auVar22 & (undefined1  [12])0x1) == (undefined1  [12])0x0) goto LAB_00a11d24;
        if (uVar17 < 0x80) {
          pbVar9 = &DAT_00000001;
        }
        else if (uVar17 < 0x800) {
          pbVar9 = (byte *)0x2;
        }
        else {
          pbVar9 = (byte *)0x3;
          if (0xffff < uVar17) {
            pbVar9 = &DAT_00000004;
          }
        }
        pbVar19 = pbVar2 + -(long)pbVar9;
        if (pbVar2 < pbVar9 || pbVar19 == (byte *)0x0) {
          if (pbVar19 != (byte *)0x0) goto code_r0x00a1261c;
        }
        else if ((char)pbVar18[(long)pbVar9] + 0x40 < 0 !=
                 SCARRY4((int)(char)pbVar18[(long)pbVar9],0x40)) {
code_r0x00a1261c:
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar18,pbVar2,pbVar9,pbVar2,&PTR_s__root__cargo_registry_src_index__00af9fa0);
        }
        pbVar18 = pbVar18 + (long)pbVar9;
        if (uVar17 != 0x66) goto LAB_00a126f0;
        uVar7 = 0xc;
LAB_00a126e4:
        unique0x1000041f = CONCAT11(bStack_76,uVar7);
        uVar7 = 5;
      }
      _local_78 = CONCAT21(stack0xffffffffffffff89,uVar7);
    }
    else {
      if (uVar17 == 0x39) {
        local_50 = pbVar18;
        pbStack_48 = pbVar9;
        auVar22 = FUN_00a115e8(&local_50);
        uVar17 = auVar22._8_4_;
        pbVar11 = extraout_x9_07;
        pbVar16 = extraout_x11_07;
        if ((auVar22 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
          if (uVar17 < 0x80) {
            pbVar9 = &DAT_00000001;
          }
          else if (uVar17 < 0x800) {
            pbVar9 = (byte *)0x2;
          }
          else {
            pbVar9 = (byte *)0x3;
            if (0xffff < uVar17) {
              pbVar9 = &DAT_00000004;
            }
          }
          pbVar19 = pbVar2 + -(long)pbVar9;
          if (pbVar2 < pbVar9 || pbVar19 == (byte *)0x0) {
            if (pbVar19 != (byte *)0x0) goto code_r0x00a126bc;
          }
          else if ((char)pbVar18[(long)pbVar9] + 0x40 < 0 !=
                   SCARRY4((int)(char)pbVar18[(long)pbVar9],0x40)) {
code_r0x00a126bc:
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (pbVar18,pbVar2,pbVar9,pbVar2,&PTR_s__root__cargo_registry_src_index__00af9fb8
                      );
          }
          pbVar18 = pbVar18 + (long)pbVar9;
          if (uVar17 != 0x66) goto LAB_00a126f0;
          uVar7 = 0xd;
          goto LAB_00a126e4;
        }
        goto LAB_00a11d24;
      }
      if (uVar17 != 0x66) goto LAB_00a12564;
      _local_78 = CONCAT12(bStack_76,0xa05);
    }
LAB_00a126fc:
    uVar17 = 1;
    goto LAB_00a1226c;
  case (byte *)0xe:
    pbStack_48 = pbVar18 + (long)pbVar19;
    local_50 = pbVar18;
    auVar22 = FUN_00a115e8(&local_50);
    uVar17 = auVar22._8_4_;
    pbVar11 = extraout_x9_00;
    pbVar16 = extraout_x11;
    if ((auVar22 & (undefined1  [12])0x1) == (undefined1  [12])0x0) goto LAB_00a11d24;
    if (uVar17 < 0x80) {
      pbVar9 = &DAT_00000001;
    }
    else if (uVar17 < 0x800) {
      pbVar9 = (byte *)0x2;
    }
    else {
      pbVar9 = (byte *)0x3;
      if (0xffff < uVar17) {
        pbVar9 = &DAT_00000004;
      }
    }
    pbVar16 = pbVar19 + -(long)pbVar9;
    if (pbVar19 < pbVar9 || pbVar16 == (byte *)0x0) {
      if (pbVar16 != (byte *)0x0) goto code_r0x00a123c0;
    }
    else if ((char)pbVar18[(long)pbVar9] + 0x40 < 0 !=
             SCARRY4((int)(char)pbVar18[(long)pbVar9],0x40)) {
code_r0x00a123c0:
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (pbVar18,pbVar19,pbVar9,pbVar19,&PTR_s__root__cargo_registry_src_index__00af9fd0);
    }
    pbVar18 = pbVar18 + (long)pbVar9;
    if (uVar17 != 0x66) goto LAB_00a12538;
    uVar7 = 1;
LAB_00a1252c:
    bVar13 = 5;
    local_78 = (undefined1  [2])CONCAT11(uVar7,local_78[0]);
LAB_00a1253c:
    uVar17 = 1;
    pbVar19 = pbVar16;
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x11:
    pbStack_48 = pbVar18 + (long)pbVar19;
    local_50 = pbVar18;
    auVar22 = FUN_00a115e8(&local_50);
    uVar17 = auVar22._8_4_;
    pbVar11 = extraout_x9_02;
    pbVar16 = extraout_x11_01;
    if ((auVar22 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
      if (uVar17 < 0x80) {
        pbVar9 = &DAT_00000001;
      }
      else if (uVar17 < 0x800) {
        pbVar9 = (byte *)0x2;
      }
      else {
        pbVar9 = (byte *)0x3;
        if (0xffff < uVar17) {
          pbVar9 = &DAT_00000004;
        }
      }
      pbVar16 = pbVar19 + -(long)pbVar9;
      if (pbVar19 < pbVar9 || pbVar16 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) goto code_r0x00a124ac;
      }
      else if ((char)pbVar18[(long)pbVar9] + 0x40 < 0 !=
               SCARRY4((int)(char)pbVar18[(long)pbVar9],0x40)) {
code_r0x00a124ac:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (pbVar18,pbVar19,pbVar9,pbVar19,&PTR_s__root__cargo_registry_src_index__00af9fe8);
      }
      pbVar18 = pbVar18 + (long)pbVar9;
      if (uVar17 == 0x66) {
        uVar7 = 2;
        goto LAB_00a1252c;
      }
LAB_00a12538:
      bVar13 = 6;
      goto LAB_00a1253c;
    }
    goto LAB_00a11d24;
  case (byte *)0x14:
    pbStack_48 = pbVar18 + (long)pbVar19;
    local_50 = pbVar18;
    auVar22 = FUN_00a115e8(&local_50);
    uVar17 = auVar22._8_4_;
    pbVar11 = extraout_x9_03;
    pbVar16 = extraout_x11_02;
    if ((auVar22 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
      if (uVar17 < 0x80) {
        pbVar9 = &DAT_00000001;
      }
      else if (uVar17 < 0x800) {
        pbVar9 = (byte *)0x2;
      }
      else {
        pbVar9 = (byte *)0x3;
        if (0xffff < uVar17) {
          pbVar9 = &DAT_00000004;
        }
      }
      pbVar16 = pbVar19 + -(long)pbVar9;
      if (pbVar19 < pbVar9 || pbVar16 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) goto code_r0x00a12504;
      }
      else if ((char)pbVar18[(long)pbVar9] + 0x40 < 0 !=
               SCARRY4((int)(char)pbVar18[(long)pbVar9],0x40)) {
code_r0x00a12504:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (pbVar18,pbVar19,pbVar9,pbVar19,&PTR_s__root__cargo_registry_src_index__00afa000);
      }
      pbVar18 = pbVar18 + (long)pbVar9;
      if (uVar17 == 0x66) {
        uVar7 = 3;
        goto LAB_00a1252c;
      }
      goto LAB_00a12538;
    }
LAB_00a11d24:
    bVar13 = 6;
    local_68 = pbVar6;
    local_70 = pbVar11;
    bStack_76 = 0;
    goto LAB_00a11bfc;
  case (byte *)0x15:
    if (pbVar19 < (byte *)0x3) {
      if (pbVar19 != (byte *)0x0) {
        if (pbVar19 == (byte *)0x2) {
          if (*(short *)pbVar18 != 0x7a3a) goto LAB_00a122a8;
LAB_00a12554:
          pbVar19 = pbVar19 + -2;
          pbVar18 = pbVar18 + 2;
          uVar7 = 0x10;
          goto LAB_00a12170;
        }
        if (*pbVar18 == 0x7a) {
LAB_00a12378:
          pbVar19 = pbVar19 + -1;
          pbVar18 = pbVar18 + 1;
          uVar7 = 0xf;
          goto LAB_00a12170;
        }
      }
    }
    else {
      pbVar16 = (byte *)0x3a3a;
      if (*(short *)pbVar18 == 0x3a3a && pbVar18[2] == 0x7a) {
        pbVar16 = pbVar19 + -3;
        if ((pbVar16 != (byte *)0x0) &&
           (iVar8 = (int)(char)pbVar18[3], iVar8 == -0x41 || iVar8 + 0x41 < 0 != SCARRY4(iVar8,0x41)
           )) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar18,pbVar19,3,pbVar19,&PTR_s__root__cargo_registry_src_index__00af9f58);
        }
        pbVar18 = pbVar18 + 3;
        local_78[1] = 0x11;
        goto LAB_00a11df8;
      }
      if (*(short *)pbVar18 == 0x7a3a) {
        iVar8 = (int)(char)pbVar18[2];
        if (iVar8 == -0x41 || iVar8 + 0x41 < 0 != SCARRY4(iVar8,0x41)) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar18,pbVar19,2,pbVar19,&PTR_s__root__cargo_registry_src_index__00af9f40);
        }
        goto LAB_00a12554;
      }
LAB_00a122a8:
      if (*pbVar18 == 0x7a) {
        if ((char)pbVar18[1] + 0x40 < 0 != SCARRY4((int)(char)pbVar18[1],0x40)) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar18,pbVar19,1,pbVar19,&PTR_s__root__cargo_registry_src_index__00af9f28);
        }
        goto LAB_00a12378;
      }
    }
    uVar17 = 1;
    bVar13 = 6;
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x1c:
    uVar7 = 7;
    goto LAB_00a12170;
  case (byte *)0x1d:
    bVar13 = 5;
    uVar17 = 1;
    local_78 = (undefined1  [2])CONCAT11(5,local_78[0]);
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x1e:
    uVar14 = 0x101;
    break;
  case (byte *)0x1f:
    bVar13 = 4;
    param_2[2] = &DAT_00af9d78;
    param_2[3] = 4;
    pbVar16 = (byte *)0x107;
    uVar17 = 0;
    _local_78 = CONCAT21(0x107,local_78[0]);
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x21:
    param_2[2] = &DAT_00af9dd8;
    param_2[3] = 4;
    uVar14 = 0x100;
    goto LAB_00a120f8;
  case (byte *)0x22:
    uVar14 = 0x103;
    break;
  case (byte *)0x23:
    uVar14 = 0x10f;
    break;
  case (byte *)0x24:
    uVar14 = 0x110;
    break;
  case (byte *)0x28:
    uVar14 = 0x111;
    break;
  case (byte *)0x2b:
    uVar7 = 8;
    goto LAB_00a12170;
  case (byte *)0x2d:
    pbVar16 = (byte *)0x2;
    param_2[2] = &DAT_00af9e38;
    param_2[3] = 2;
    uVar17 = 0;
    _local_78 = CONCAT21(0x10f,local_78[0]);
    goto LAB_00a12194;
  case (byte *)0x2e:
    uVar14 = 0x112;
    break;
  case (byte *)0x2f:
    param_2[2] = &DAT_00af9e68;
    param_2[3] = 4;
    uVar14 = 0x10f;
    goto LAB_00a120f8;
  case (byte *)0x30:
    uVar14 = 0x109;
    break;
  case (byte *)0x31:
    uVar14 = 0x10b;
    break;
  case (byte *)0x32:
    uVar14 = 0x10a;
    break;
  case (byte *)0x33:
    puVar5 = &DAT_00af9b80;
    goto LAB_00a12250;
  case (byte *)0x34:
    uVar14 = 0x100;
    break;
  case (byte *)0x35:
    uVar7 = 0xe;
    goto LAB_00a12170;
  case (byte *)0x3c:
    uVar7 = 6;
    goto LAB_00a12170;
  case (byte *)0x3d:
  case (byte *)0x43:
    uVar7 = 4;
    goto LAB_00a12170;
  case (byte *)0x3e:
    puVar5 = &DAT_00af9c10;
    uVar12 = 0xc;
    goto LAB_00a12258;
  case (byte *)0x3f:
    uVar14 = 0x108;
    break;
  case (byte *)0x40:
    uVar14 = 0x208;
    break;
  case (byte *)0x41:
    uVar14 = 0x113;
    break;
  case (byte *)0x42:
    uVar14 = 0x105;
    break;
  case (byte *)0x45:
    uVar14 = 0x10e;
    break;
  case (byte *)0x46:
    uVar14 = 0x20f;
    break;
  case (byte *)0x47:
    uVar14 = 0x210;
    break;
  case (byte *)0x48:
    uVar14 = 0x107;
    break;
  case (byte *)0x49:
    uVar17 = 1;
    local_70 = (byte *)0x381098;
    local_68 = &DAT_00000001;
    bVar13 = 2;
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x4b:
    uVar7 = 9;
    goto LAB_00a12170;
  case (byte *)0x4c:
    uVar14 = 6;
    break;
  case (byte *)0x4d:
    puVar5 = &DAT_00af9a78;
    uVar12 = 6;
    goto LAB_00a12258;
  case (byte *)0x4e:
    uVar14 = 0x14;
    break;
  case (byte *)0x4f:
    pbVar16 = &DAT_00000001;
    local_70 = (byte *)0x381099;
    local_68 = &DAT_00000001;
    bVar13 = 2;
    uVar17 = 1;
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x50:
    uVar14 = 0xd;
    break;
  case (byte *)0x51:
    param_2[2] = &DAT_00af9ec8;
    param_2[3] = 4;
    uVar14 = 0x208;
LAB_00a120f8:
    pbVar16 = &DAT_00000004;
    uVar17 = 0;
    _local_78 = CONCAT21(uVar14,local_78[0]);
    bVar13 = 4;
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x52:
    uVar14 = 0xc;
    break;
  case (byte *)0x53:
    puVar5 = &DAT_00af9b08;
LAB_00a12250:
    puVar5 = puVar5 + 0x18;
    uVar12 = 4;
LAB_00a12258:
    param_2[2] = puVar5;
    param_2[3] = uVar12;
    FUN_00a11690(local_78);
    uVar17 = 0;
    pbVar16 = extraout_x11_04;
LAB_00a1226c:
    bVar13 = local_78[0];
    goto switchD_00a11e34_caseD_1;
  case (byte *)0x54:
    uVar14 = 0x102;
    break;
  case (byte *)0x55:
    uVar7 = 0x13;
LAB_00a12170:
    local_78 = (undefined1  [2])CONCAT11(uVar7,local_78[0]);
    uVar17 = 1;
    bVar13 = 5;
    goto switchD_00a11e34_caseD_1;
  }
  _local_78 = CONCAT21(uVar14,local_78[0]);
  uVar17 = 1;
LAB_00a12194:
  bVar13 = 4;
switchD_00a11e34_caseD_1:
  if (bVar20 == 0xff) {
    local_88 = local_75;
    pbVar16 = (byte *)(ulong)local_78[1];
    local_84 = local_71;
    if (bVar13 == 0xff) {
LAB_00a121c0:
      *param_1 = 0xff;
      return;
    }
  }
  else {
    uVar17 = uVar17 ^ 1;
    if (bVar13 != 4) {
      uVar17 = 1;
    }
    pbVar9 = (byte *)(ulong)uVar17;
    bStack_76 = bVar20;
    if (uVar17 == 0) {
      pbVar16 = (byte *)(ulong)local_78[1];
      bVar13 = 4;
      local_68 = pbVar6;
      local_70 = pbVar9;
    }
    else {
      if (((bVar13 == 1) || (bVar13 == 3)) && (local_68 != (byte *)0x0)) {
        free(local_70);
        pbVar9 = extraout_x9_04;
        pbVar16 = extraout_x11_03;
      }
      bVar13 = 6;
      local_68 = pbVar6;
      local_70 = pbVar9;
    }
  }
LAB_00a11bfc:
  *param_2 = pbVar18;
  param_2[1] = pbVar19;
  *param_1 = bVar13;
  param_1[1] = (byte)pbVar16;
  param_1[2] = bStack_76;
  *(undefined4 *)(param_1 + 3) = local_88;
  param_1[7] = local_84;
  *(byte **)(param_1 + 8) = local_70;
  *(byte **)(param_1 + 0x10) = local_68;
  return;
}


// ===== 00a12758  FUN_00a12758 =====

void FUN_00a12758(long *param_1)

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


// ===== 00a127c4  FUN_00a127c4 =====

void FUN_00a127c4(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  char *__ptr;
  undefined8 uVar5;
  uint local_80;
  undefined4 local_7c;
  ulong local_78;
  long local_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar4 = <std::path::[16]::std::path::Path>::is_absolute(param_2,param_3);
  if ((uVar4 & 1) != 0) {
    local_70 = 0x1b600000000;
    local_68 = (void *)0x1;
    <std::fs::[j]::std::fs::OpenOptions>::_open(&local_50,&local_70,param_2,param_3);
    if ((local_50 & 1) == 0) {
      *param_1 = 0xff;
      *(undefined4 *)(param_1 + 4) = local_50._4_4_;
      return;
    }
    *param_1 = 6;
    *(undefined8 *)(param_1 + 8) = local_48;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  uVar5 = 0x13;
  __ptr = (char *)FUN_004b25a4(0x13,1);
  uVar2 = s__usr_share_zoneinfo_003810e1._8_8_;
  uVar1 = s__usr_share_zoneinfo_003810e1._0_8_;
  if (__ptr == (char *)0x0) {
LAB_00a12c2c:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,uVar5);
  }
  __ptr[0xf] = 'i';
  __ptr[0x10] = 'n';
  __ptr[0x11] = 'f';
  __ptr[0x12] = 'o';
  *(undefined8 *)(__ptr + 8) = uVar2;
  *(undefined8 *)__ptr = uVar1;
                    /* try { // try from 00a12884 to 00a12897 has its CatchHandler @ 00a12d08 */
  <std::path::[16]::std::path::Path>::_join(&local_70,__ptr,0x13,param_2,param_3);
  pvVar3 = local_68;
  local_50 = 0x1b600000000;
  local_48 = 1;
                    /* try { // try from 00a128a8 to 00a128b7 has its CatchHandler @ 00a12cd4 */
  <std::fs::[j]::std::fs::OpenOptions>::_open(&local_80,&local_50,local_68,uStack_60);
  if (local_70 != 0) {
    free(pvVar3);
  }
  if ((local_80 & 1) != 0) {
    if ((1 < (local_78 & 3) - 2) && ((local_78 & 3) != 0)) {
      local_68 = (void *)(local_78 - 1);
      local_70 = CONCAT71(local_70._1_7_,3);
                    /* try { // try from 00a12904 to 00a12967 has its CatchHandler @ 00a12d08 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
    }
    free(__ptr);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar5 = 0xf;
    __ptr = (char *)FUN_004b25a4(0xf,1);
    if (__ptr == (char *)0x0) goto LAB_00a12c2c;
    uVar1 = CONCAT71(s_zoneinfo_003810fb._1_7_,s_zoneinfo_003810fb[0]);
    *(ulong *)__ptr = CONCAT17(s_zoneinfo_003810fb[0],s__share__003810f4);
    *(undefined8 *)(__ptr + 7) = uVar1;
    <std::path::[16]::std::path::Path>::_join(&local_70,__ptr,0xf,param_2,param_3);
    pvVar3 = local_68;
    local_50 = 0x1b600000000;
    local_48 = 1;
                    /* try { // try from 00a12978 to 00a12987 has its CatchHandler @ 00a12ca0 */
    <std::fs::[j]::std::fs::OpenOptions>::_open(&local_80,&local_50,local_68,uStack_60);
    if (local_70 != 0) {
      free(pvVar3);
    }
    if (local_80 == 1) {
      if ((1 < (local_78 & 3) - 2) && ((local_78 & 3) != 0)) {
        local_68 = (void *)(local_78 - 1);
        local_70 = CONCAT71(local_70._1_7_,3);
                    /* try { // try from 00a129d4 to 00a12a37 has its CatchHandler @ 00a12d08 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      free(__ptr);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar5 = 0xd;
      __ptr = (char *)FUN_004b25a4(0xd,1);
      if (__ptr == (char *)0x0) goto LAB_00a12c2c;
      uVar1 = CONCAT53(s_zoneinfo_00381108._3_5_,s_zoneinfo_00381108._0_3_);
      *(ulong *)__ptr = CONCAT35(s_zoneinfo_00381108._0_3_,s__etc__00381103);
      *(undefined8 *)(__ptr + 5) = uVar1;
      <std::path::[16]::std::path::Path>::_join(&local_70,__ptr,0xd,param_2,param_3);
      pvVar3 = local_68;
      local_50 = 0x1b600000000;
      local_48 = 1;
                    /* try { // try from 00a12a48 to 00a12a57 has its CatchHandler @ 00a12c6c */
      <std::fs::[j]::std::fs::OpenOptions>::_open(&local_80,&local_50,local_68,uStack_60);
      if (local_70 != 0) {
        free(pvVar3);
      }
      if (local_80 == 1) {
        if ((1 < (local_78 & 3) - 2) && ((local_78 & 3) != 0)) {
          local_68 = (void *)(local_78 - 1);
          local_70 = CONCAT71(local_70._1_7_,3);
                    /* try { // try from 00a12aa4 to 00a12b07 has its CatchHandler @ 00a12d08 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        free(__ptr);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar5 = 0x17;
        __ptr = (char *)FUN_004b25a4(0x17,1);
        uVar1 = s__usr_share_lib__00381110._0_8_;
        if (__ptr == (char *)0x0) goto LAB_00a12c2c;
        uVar2 = CONCAT71(s_zoneinfo_0038111f._1_7_,s_zoneinfo_0038111f[0]);
        *(ulong *)(__ptr + 8) = CONCAT17(s_zoneinfo_0038111f[0],s__usr_share_lib__00381110._8_7_);
        *(undefined8 *)__ptr = uVar1;
        *(undefined8 *)(__ptr + 0xf) = uVar2;
        <std::path::[16]::std::path::Path>::_join(&local_70,__ptr,0x17,param_2,param_3);
        pvVar3 = local_68;
        local_50 = 0x1b600000000;
        local_48 = 1;
                    /* try { // try from 00a12b18 to 00a12b27 has its CatchHandler @ 00a12c38 */
        <std::fs::[j]::std::fs::OpenOptions>::_open(&local_80,&local_50,local_68,uStack_60);
        if (local_70 != 0) {
          free(pvVar3);
        }
        if (local_80 == 1) {
          if ((1 < (local_78 & 3) - 2) && ((local_78 & 3) != 0)) {
            local_68 = (void *)(local_78 - 1);
            local_70 = CONCAT71(local_70._1_7_,3);
                    /* try { // try from 00a12b74 to 00a12b7b has its CatchHandler @ 00a12d08 */
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
          free(__ptr);
          *param_1 = 6;
          *(undefined8 *)(param_1 + 8) = 3;
          return;
        }
      }
    }
  }
  *param_1 = 0xff;
  *(undefined4 *)(param_1 + 4) = local_7c;
  free(__ptr);
  return;
}


// ===== 00a12d24  FUN_00a12d24 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00a12d24(undefined8 *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_100;
  undefined8 *puStack_f8;
  long local_f0;
  undefined8 uStack_db;
  long local_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined5 uStack_b8;
  undefined3 local_b3;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  undefined8 uStack_4b;
  char local_43;
  undefined2 local_42;
  int __fd;
  
  if (param_3 == 9) {
    if (*(long *)param_2 == 0x6d69746c61636f6c && param_2[8] == 0x65) {
      puVar4 = (undefined8 *)
               std::fs::read::inner
                         (&local_70,
                          "/etc/localtimetime zone name must have between 3 and 7 charactersinvalid characters in time zone name"
                          ,0xe);
      if (local_70 == -1) {
        param_1[2] = puStack_68;
        *(undefined1 *)(param_1 + 1) = 6;
        *param_1 = 0xffffffffffffffff;
        return puVar4;
      }
                    /* try { // try from 00a12f00 to 00a12f0b has its CatchHandler @ 00a13264 */
      puVar4 = (undefined8 *)FUN_00a0b854(param_1,puStack_68,lStack_60);
      if (local_70 == 0) {
        return puVar4;
      }
      free(puStack_68);
      return puStack_68;
    }
LAB_00a12db8:
    android_tzdata::tzdata::find_file(&local_100);
    puVar4 = puStack_f8;
    if ((int)local_100 != 1) {
      local_88 = CONCAT44(local_88._4_4_,local_100._4_4_);
                    /* try { // try from 00a12ddc to 00a12def has its CatchHandler @ 00a132d4 */
      FUN_00a00e24(&local_70,&local_88,param_2,param_3);
      close((int)local_88);
      puVar4 = puStack_68;
      if (local_70 != -1) {
                    /* try { // try from 00a12e08 to 00a12e13 has its CatchHandler @ 00a13284 */
        puVar4 = (undefined8 *)FUN_00a0b854(param_1,puStack_68,lStack_60);
        if (local_70 == 0) {
          return puVar4;
        }
        free(puStack_68);
        return puStack_68;
      }
    }
    if ((1 < ((ulong)puVar4 & 3) - 2) && (((ulong)puVar4 & 3) != 0)) {
      puStack_f8 = (undefined8 *)((long)puVar4 - 1);
      local_100 = CONCAT71(local_100._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&puStack_f8);
    }
    if (param_3 != 0) {
      pbVar5 = param_2 + 1;
      uVar3 = (uint)*param_2;
      if ((char)*param_2 < '\0') {
        if (uVar3 < 0xe0) {
          uVar3 = param_2[1] & 0x3f | (uVar3 & 0x1f) << 6;
          pbVar5 = param_2 + 2;
        }
        else {
          uVar1 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
          if (uVar3 < 0xf0) {
            uVar3 = uVar1 | (uVar3 & 0x1f) << 0xc;
            pbVar5 = param_2 + 3;
          }
          else {
            pbVar5 = param_2 + 4;
            uVar3 = param_2[3] & 0x3f | uVar1 << 6 | (uVar3 & 7) << 0x12;
          }
        }
      }
      if (uVar3 == 0x3a) {
        puVar4 = (undefined8 *)FUN_00a127c4(&local_70,pbVar5,param_2 + (param_3 - (long)pbVar5));
        uVar2 = local_70._4_4_;
        if ((char)local_70 == -1) {
          lStack_60 = 0;
          local_70 = 0;
          puStack_68 = (undefined8 *)&DAT_00000001;
          local_100 = CONCAT44(local_100._4_4_,uVar2);
                    /* try { // try from 00a12fbc to 00a12fc7 has its CatchHandler @ 00a13240 */
          auVar7 = <std::fs::File_as_alloc::io::read::Read>::read_to_end(&local_100,&local_70);
          if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* try { // try from 00a131f8 to 00a131ff has its CatchHandler @ 00a13240 */
            FUN_00a0b854(param_1,puStack_68,lStack_60);
          }
          else {
            param_1[2] = auVar7._8_8_;
            *(undefined1 *)(param_1 + 1) = 6;
            *param_1 = 0xffffffffffffffff;
          }
          if (local_70 != 0) {
            free(puStack_68);
          }
          __fd = (int)local_100;
          goto LAB_00a13218;
        }
        *(char *)(param_1 + 1) = (char)local_70;
        param_1[3] = lStack_60;
        param_1[2] = puStack_68;
        *(undefined2 *)((long)param_1 + 9) = local_70._1_2_;
        *(undefined1 *)((long)param_1 + 0xb) = local_70._3_1_;
        *(undefined4 *)((long)param_1 + 0xc) = local_70._4_4_;
        goto LAB_00a12d70;
      }
    }
    FUN_00a127c4(&local_100,param_2,param_3);
    if ((char)local_100 == -1) {
      lStack_60 = 0;
      local_70 = 0;
      puStack_68 = (undefined8 *)&DAT_00000001;
      local_88 = CONCAT44(local_88._4_4_,local_100._4_4_);
                    /* try { // try from 00a13024 to 00a1302f has its CatchHandler @ 00a132a4 */
      auVar7 = <std::fs::File_as_alloc::io::read::Read>::read_to_end(&local_88,&local_70);
      if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* try { // try from 00a13128 to 00a1312f has its CatchHandler @ 00a132a4 */
        FUN_00a0b854(param_1,puStack_68,lStack_60);
      }
      else {
        param_1[2] = auVar7._8_8_;
        *(undefined1 *)(param_1 + 1) = 6;
        *param_1 = 0xffffffffffffffff;
      }
      if (local_70 != 0) {
        free(puStack_68);
      }
      __fd = (int)local_88;
LAB_00a13218:
      uVar3 = close(__fd);
      return (undefined8 *)(ulong)uVar3;
    }
    if ((((char)local_100 == '\x06') && (1 < ((ulong)puStack_f8 & 3) - 2)) &&
       (((ulong)puStack_f8 & 3) != 0)) {
      puStack_68 = (undefined8 *)((long)puStack_f8 - 1);
      local_70 = CONCAT71(local_70._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&puStack_68);
    }
    auVar7 = FUN_00a03a18(param_2,param_3);
    puVar4 = (undefined8 *)FUN_00a13f84(&local_70,auVar7._0_8_,auVar7._8_8_,0);
    if (local_43 != -1) {
      local_a0 = 0;
      uStack_98 = 8;
      uStack_db = uStack_4b;
      local_90 = 0;
      local_f0 = lStack_60;
      puStack_c8 = puStack_68;
      local_d0 = local_70;
      uStack_b8 = uStack_58;
      lStack_c0 = lStack_60;
      uStack_ab = (undefined3)uStack_4b;
      uStack_a8 = (undefined5)((ulong)uStack_4b >> 0x18);
      local_b3 = local_53;
      uStack_b0 = uStack_50;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      if (local_43 == '\x02') {
        uVar6 = 0x10;
        plStack_80 = (long *)FUN_004b25a4(0x10,4);
        if (plStack_80 == (long *)0x0) {
LAB_00a13234:
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(4,uVar6);
        }
        local_88 = 1;
        plStack_80[1] = (long)puStack_c8;
        *plStack_80 = local_d0;
      }
      else {
        uVar6 = 0x20;
        plStack_80 = (long *)FUN_004b25a4(0x20,4);
        if (plStack_80 == (long *)0x0) goto LAB_00a13234;
        *(char *)((long)plStack_80 + 0x1d) = local_43;
        plStack_80[1] = CONCAT35(local_b3,uStack_b8);
        *plStack_80 = lStack_c0;
        plStack_80[2] = CONCAT35(uStack_ab,uStack_b0);
        local_88 = 2;
        *(ulong *)((long)plStack_80 + 0x15) = CONCAT53(uStack_a8,uStack_ab);
        *(undefined2 *)((long)plStack_80 + 0x1e) = local_42;
      }
      puStack_68 = puStack_c8;
      local_70 = local_d0;
      lStack_60 = lStack_c0;
      uStack_4b = CONCAT53(uStack_a8,uStack_ab);
      local_100 = 0;
      puStack_f8 = (undefined8 *)0x8;
      local_f0 = 0;
      local_78 = local_88;
      puVar4 = (undefined8 *)FUN_00a13840(param_1,&local_a0,&local_88,&local_100,&local_70);
      return puVar4;
    }
    param_1[2] = puStack_68;
    param_1[1] = local_70;
  }
  else {
    if (param_3 != 0) goto LAB_00a12db8;
    *(undefined1 *)(param_1 + 1) = 5;
    lStack_60 = 0xf;
    param_1[2] = "empty TZ string";
    puVar4 = param_1;
  }
  param_1[3] = lStack_60;
LAB_00a12d70:
  *param_1 = 0xffffffffffffffff;
  return puVar4;
}


// ===== 00a132ec  FUN_00a132ec =====

void FUN_00a132ec(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  char local_38;
  undefined7 uStack_37;
  long lStack_30;
  undefined8 local_28;
  
  uVar1 = *(ulong *)(param_2 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x10);
  if (uVar4 == 0) {
    if (*(char *)(param_2 + 0x75) == -1) {
      if (uVar1 != 0) {
        param_1[1] = *(long *)(param_2 + 0x20);
        *(undefined1 *)param_1 = 0xff;
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00afa090);
    }
LAB_00a133a4:
    FUN_00a14620(&local_38,param_2 + 0x48,param_3);
    if (local_38 == '\a') {
      *(undefined1 *)param_1 = 1;
      param_1[1] = lStack_30;
      param_1[2] = local_28;
      return;
    }
    if (local_38 != -1) {
      param_1[1] = lStack_30;
      *param_1 = CONCAT71(uStack_37,local_38);
      param_1[2] = local_28;
      return;
    }
  }
  else {
    lVar6 = *(long *)(param_2 + 0x40);
    lVar3 = *(long *)(param_2 + 8);
    lVar5 = param_3;
    if (lVar6 != 0) {
      piVar8 = (int *)(*(long *)(param_2 + 0x38) + 8);
      do {
        if (lVar5 < *(long *)(piVar8 + -2)) break;
        lVar5 = param_3 + *piVar8;
        if (SCARRY8(param_3,(long)*piVar8)) {
          *(undefined1 *)param_1 = 1;
          param_1[1] = "out of range operation";
          param_1[2] = 0x16;
          return;
        }
        lVar6 = lVar6 + -1;
        piVar8 = piVar8 + 4;
      } while (lVar6 != 0);
    }
    lVar6 = lVar3 + uVar4 * 0x10;
    if (lVar5 < *(long *)(lVar6 + -0x10)) {
      if (uVar4 == 1) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        uVar2 = uVar4;
        do {
          lVar7 = (uVar2 >> 1) + lVar6;
          uVar2 = uVar2 - (uVar2 >> 1);
          if (*(long *)(lVar3 + lVar7 * 0x10) <= lVar5) {
            lVar6 = lVar7;
          }
        } while (1 < uVar2);
      }
      lVar7 = *(long *)(lVar3 + lVar6 * 0x10);
      if (lVar7 == lVar5) {
        lVar6 = lVar6 + 1;
      }
      else if (lVar7 < lVar5) {
        lVar6 = lVar6 + 1;
      }
      if (lVar6 == 0) {
        uVar4 = 0;
        if (uVar1 == 0) goto code_r0x00a13454;
      }
      else {
        uVar2 = lVar6 - 1;
        if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar2,uVar4,&PTR_s__root__cargo_registry_src_index__00afa0a8);
        }
        uVar4 = *(ulong *)(lVar3 + uVar2 * 0x10 + 8);
        if (uVar1 <= uVar4) {
code_r0x00a13454:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar4,uVar1,&PTR_s__root__cargo_registry_src_index__00afa0c0);
        }
      }
    }
    else {
      if (*(char *)(param_2 + 0x75) != -1) goto LAB_00a133a4;
      uVar4 = *(ulong *)(lVar6 + -8);
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar4,uVar1,&PTR_s__root__cargo_registry_src_index__00afa0d8);
      }
    }
    lStack_30 = *(long *)(param_2 + 0x20) + uVar4 * 0x10;
  }
  param_1[1] = lStack_30;
  *(undefined1 *)param_1 = 0xff;
  return;
}


// ===== 00a1351c  FUN_00a1351c =====

void FUN_00a1351c(uint *param_1,long param_2,uint *param_3)

{
  char cVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 local_50;
  uint local_48;
  char local_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  char local_23;
  undefined2 uStack_22;
  
  puVar5 = *(uint **)(param_2 + 0x20);
  uVar6 = *(ulong *)(param_2 + 0x28);
  iVar15 = (int)*param_3 >> 0xd;
  iVar8 = iVar15 + -1;
  if (iVar15 < 1) {
    iVar15 = (1U - iVar15) / 400 + 1;
    iVar8 = iVar8 + iVar15 * 400;
    iVar15 = iVar15 * -0x23ab1;
  }
  else {
    iVar15 = 0;
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00afa138);
    }
    local_50 = *(undefined8 *)(puVar5 + 1);
    local_48 = puVar5[3];
    uVar13 = *puVar5;
  }
  else {
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00afa108);
    }
    puVar18 = (ulong *)(*(long *)(param_2 + 8) + 8);
    local_50 = *(undefined8 *)(puVar5 + 1);
    lVar17 = *(long *)(param_2 + 0x10) << 4;
    lVar16 = (ulong)param_3[1] +
             (long)(int)((((*param_3 >> 4 & 0x1ff) + iVar15) - iVar8 / 100) + (iVar8 * 0x5b5 >> 2) +
                         (iVar8 / 100 >> 2) + -0xaf93b) * 0x15180;
    local_48 = puVar5[3];
    uVar14 = (ulong)*puVar5;
    do {
      uVar10 = *puVar18;
      if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar10,uVar6,&PTR_s__root__cargo_registry_src_index__00afa120);
      }
      puVar3 = puVar5 + uVar10 * 4;
      uVar9 = (uint)uVar14;
      puVar11 = puVar3 + 1;
      uVar13 = *puVar3;
      uVar14 = (ulong)(int)uVar13;
      lVar2 = puVar18[-1] + (long)(int)uVar9;
      lVar4 = puVar18[-1] + uVar14;
      cVar1 = lVar4 < lVar2;
      if (lVar2 < lVar4) {
        cVar1 = -1;
      }
      if (cVar1 == '\0') {
        if (lVar16 < lVar2) goto LAB_00a13700;
        if (lVar16 == lVar4) {
LAB_00a13764:
          if ((int)uVar9 < (int)uVar13) {
            uVar12 = *(undefined8 *)puVar11;
            uVar7 = puVar3[3];
            *param_1 = uVar9;
            *(undefined8 *)(param_1 + 1) = local_50;
            *(undefined8 *)(param_1 + 5) = uVar12;
            param_1[7] = uVar7;
            param_1[3] = local_48;
            param_1[4] = uVar13;
            return;
          }
          uVar12 = *(undefined8 *)puVar11;
          *param_1 = uVar13;
          *(undefined8 *)(param_1 + 1) = uVar12;
          uVar13 = puVar3[3];
          *(undefined8 *)(param_1 + 5) = local_50;
          param_1[7] = local_48;
          param_1[3] = uVar13;
          param_1[4] = uVar9;
          return;
        }
      }
      else if (cVar1 == '\x01') {
        if (lVar16 < lVar4) {
LAB_00a13700:
          *param_1 = uVar9;
          goto LAB_00a1370c;
        }
        if (lVar16 <= lVar2) goto LAB_00a13764;
      }
      else {
        if (lVar16 <= lVar2) goto LAB_00a13700;
        if (lVar16 < lVar4) {
          *(undefined1 *)((long)param_1 + 0x1d) = 4;
          return;
        }
        if (lVar16 == lVar4) {
          local_50 = *(undefined8 *)puVar11;
          local_48 = puVar3[3];
          goto LAB_00a136f8;
        }
      }
      local_50 = *(undefined8 *)puVar11;
      local_48 = puVar3[3];
      lVar17 = lVar17 + -0x10;
      puVar18 = puVar18 + 2;
    } while (lVar17 != 0);
  }
  if (*(char *)(param_2 + 0x75) != -1) {
    FUN_00a14930(&local_40,param_2 + 0x48);
    if (local_23 != -1) {
      *(undefined8 *)(param_1 + 2) = uStack_38;
      *(ulong *)param_1 = CONCAT71(uStack_3f,local_40);
      *(ulong *)(param_1 + 6) = CONCAT26(uStack_22,CONCAT15(local_23,uStack_28));
      *(undefined8 *)(param_1 + 4) = uStack_30;
      return;
    }
    if (local_40 == '\a') {
      *(undefined1 *)param_1 = 1;
      *(undefined1 *)((long)param_1 + 0x1d) = 0xff;
      *(undefined8 *)(param_1 + 2) = uStack_38;
      *(undefined8 *)(param_1 + 4) = uStack_30;
      return;
    }
    *(undefined8 *)(param_1 + 2) = uStack_38;
    *(ulong *)param_1 = CONCAT71(uStack_3f,local_40);
    *(ulong *)(param_1 + 6) = CONCAT26(uStack_22,CONCAT15(0xff,uStack_28));
    *(undefined8 *)(param_1 + 4) = uStack_30;
    return;
  }
LAB_00a136f8:
  *param_1 = uVar13;
LAB_00a1370c:
  *(undefined8 *)(param_1 + 1) = local_50;
  param_1[3] = local_48;
  *(undefined1 *)((long)param_1 + 0x1d) = 2;
  return;
}


// ===== 00a13840  FUN_00a13840 =====

void FUN_00a13840(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  bool bVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *__ptr;
  long *__ptr_00;
  long lVar21;
  void *__ptr_01;
  long lStack_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  undefined3 uStack_5c;
  char local_58;
  undefined4 local_57;
  undefined3 uStack_53;
  int *local_50;
  long lStack_48;
  
  __ptr = (long *)param_2[1];
  lVar19 = *param_2;
  __ptr_01 = (void *)param_3[1];
  lVar21 = *param_3;
  uVar10 = param_2[2];
  uVar14 = param_3[2];
  __ptr_00 = (long *)param_4[1];
  lVar20 = *param_4;
  uVar7 = param_4[2];
  lStack_90 = param_5[1];
  lStack_98 = *param_5;
  lStack_80 = param_5[3];
  local_88 = param_5[2];
  uStack_70 = param_5[5];
  local_78 = param_5[4];
  if (uVar14 == 0) {
    piVar11 = (int *)"list of local time types must not be empty";
    lVar9 = 0x2a;
    cVar16 = '\v';
    goto LAB_00a13a54;
  }
  if (uVar10 != 0) {
    uVar18 = 1;
    uVar12 = uVar10;
    plVar5 = __ptr;
    do {
      if (uVar14 <= (ulong)plVar5[1]) {
        piVar11 = (int *)"invalid local time type index";
        lVar9 = 0x1d;
        cVar16 = '\v';
        goto LAB_00a13a54;
      }
      if ((uVar18 < uVar10) && (plVar5[2] <= *plVar5)) {
        piVar11 = (int *)"invalid transition";
        lVar9 = 0x12;
        cVar16 = '\v';
        goto LAB_00a13a54;
      }
      uVar12 = uVar12 - 1;
      uVar18 = uVar18 + 1;
      plVar5 = plVar5 + 2;
    } while (uVar12 != 0);
  }
  if (uVar7 != 0) {
    if (-1 < *__ptr_00) {
      iVar4 = (int)__ptr_00[1];
      iVar1 = -iVar4;
      if (-1 < iVar4) {
        iVar1 = iVar4;
      }
      if (iVar1 == 1) {
        uVar18 = 1;
        uVar12 = uVar7;
        plVar5 = __ptr_00;
        do {
          if (uVar18 < uVar7) {
            iVar1 = (int)plVar5[3];
            iVar4 = (int)plVar5[1];
            lVar9 = plVar5[2];
            uVar2 = iVar1 - iVar4 >> 0x1f ^ 0x80000000;
            if (!SBORROW4(iVar1,iVar4)) {
              uVar2 = iVar1 - iVar4;
            }
            uVar3 = -uVar2;
            if (iVar4 <= iVar1) {
              uVar3 = uVar2;
            }
            uVar17 = lVar9 - *plVar5;
            uVar15 = (long)uVar17 >> 0x3f ^ 0x8000000000000000;
            if (!SBORROW8(lVar9,*plVar5)) {
              uVar15 = uVar17;
            }
            piVar11 = (int *)"invalid leap second";
            lVar9 = 0x13;
            cVar16 = '\v';
            if (((long)uVar15 < 0x24e9ff) || (piVar11 = (int *)"invalid leap second", uVar3 != 1))
            goto LAB_00a13a54;
          }
          uVar12 = uVar12 - 1;
          uVar18 = uVar18 + 1;
          plVar5 = plVar5 + 2;
        } while (uVar12 != 0);
        goto LAB_00a139f8;
      }
    }
    piVar11 = (int *)"invalid leap second";
    lVar9 = 0x13;
    cVar16 = '\v';
    goto LAB_00a13a54;
  }
LAB_00a139f8:
  if ((uVar10 == 0) ||
     (uStack_70._5_1_ = (char)((ulong)uStack_70 >> 0x28), bVar6 = uStack_70._5_1_ == -1, bVar6))
  goto LAB_00a13c04;
  uVar18 = __ptr[uVar10 * 2 + -1];
  if (uVar14 <= uVar18) {
    ppuVar8 = &PTR_s__root__cargo_registry_src_index__00afa150;
LAB_00a13c60:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar18,uVar14,ppuVar8);
  }
  lVar9 = __ptr[uVar10 * 2 + -2];
  if (lVar9 != -0x8000000000000000) {
    uVar12 = uVar7;
    uVar15 = uVar7;
    if (uVar7 != 0) {
      uVar12 = 0;
      uVar15 = uVar12;
      uVar17 = uVar7;
      if (uVar7 != 1) {
        do {
          uVar12 = (uVar17 >> 1) + uVar15;
          uVar17 = uVar17 - (uVar17 >> 1);
          if (lVar9 <= __ptr_00[uVar12 * 2]) {
            uVar12 = uVar15;
          }
          uVar15 = uVar12;
        } while (1 < uVar17);
      }
      if (__ptr_00[uVar12 * 2] == lVar9 + -1) {
        uVar15 = 1;
      }
      else {
        uVar15 = 0;
        if (__ptr_00[uVar12 * 2] < lVar9 + -1) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    lVar13 = uVar15 + uVar12;
    if (lVar13 != 0) {
      uVar12 = lVar13 - 1;
      if (uVar7 <= uVar12) {
        ppuVar8 = &PTR_s__root__cargo_registry_src_index__00afa0f0;
        uVar14 = uVar7;
        uVar18 = uVar12;
        goto LAB_00a13c60;
      }
      lVar13 = (long)(int)__ptr_00[uVar12 * 2 + 1];
    }
    if (!SBORROW8(lVar9,lVar13)) {
                    /* try { // try from 00a13b5c to 00a13c67 has its CatchHandler @ 00a13c6c */
      FUN_00a14620(&local_58,&lStack_98,lVar9 - lVar13);
      piVar11 = local_50;
      lVar9 = lStack_48;
      if (local_58 == '\a') {
        cVar16 = '\v';
      }
      else if (local_58 == -1) {
        piVar11 = (int *)((long)__ptr_01 + uVar18 * 0x10);
        if ((*piVar11 == *local_50) &&
           (*(char *)((long)piVar11 + 0xd) == *(char *)((long)local_50 + 0xd))) {
          if ((char)piVar11[1] == '\x01') {
            if (((*(byte *)(local_50 + 1) & 1) != 0) &&
               (*(long *)((long)piVar11 + 5) == *(long *)((long)local_50 + 5))) {
LAB_00a13c04:
              param_1[0xd] = local_78;
              param_1[0xc] = lStack_80;
              param_1[9] = lStack_98;
              param_1[8] = uVar7;
              param_1[0xb] = local_88;
              param_1[10] = lStack_90;
              param_1[0xe] = uStack_70;
              param_1[1] = (long)__ptr;
              *param_1 = lVar19;
              param_1[3] = lVar21;
              param_1[2] = uVar10;
              param_1[5] = uVar14;
              param_1[4] = (long)__ptr_01;
              param_1[7] = (long)__ptr_00;
              param_1[6] = lVar20;
              return;
            }
          }
          else if ((*(byte *)(local_50 + 1) & 1) == 0) goto LAB_00a13c04;
        }
        piVar11 = (int *)"extra transition rule is inconsistent with the last transition";
        lVar9 = 0x3e;
        cVar16 = '\v';
      }
      else {
        local_60 = local_57;
        uStack_5c = uStack_53;
        cVar16 = local_58;
      }
      goto LAB_00a13a54;
    }
  }
  piVar11 = (int *)"out of range operation";
  lVar9 = 0x16;
  cVar16 = '\v';
LAB_00a13a54:
  *(char *)(param_1 + 1) = cVar16;
  param_1[2] = (long)piVar11;
  param_1[3] = lVar9;
  *(undefined4 *)((long)param_1 + 9) = local_60;
  *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_5c,local_60._3_1_);
  *param_1 = -1;
  if (lVar19 != 0) {
    free(__ptr);
  }
  if (lVar21 != 0) {
    free(__ptr_01);
  }
  if (lVar20 != 0) {
    free(__ptr_00);
  }
  return;
}


// ===== 00a13c80  FUN_00a13c80 =====

void FUN_00a13c80(undefined1 *param_1,int param_2,undefined1 param_3,byte *param_4,ulong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_2 == -0x80000000) {
    *param_1 = 2;
    *(char **)(param_1 + 8) = "invalid UTC offset";
    *(undefined8 *)(param_1 + 0x10) = 0x12;
    return;
  }
  if (param_4 == (byte *)0x0) {
    *(int *)(param_1 + 4) = param_2;
    param_1[8] = 0;
    param_1[0x11] = param_3;
    *param_1 = 0xff;
    return;
  }
  if (param_5 - 3 < 5) {
    bVar1 = *param_4;
    if ((((bVar1 - 0x30 < 10) || ((bVar1 & 0xffffffdf) - 0x41 < 0x1a)) || (bVar1 == 0x2d)) ||
       (bVar1 == 0x2b)) {
      bVar2 = param_4[1];
      if (((bVar2 - 0x30 < 10) || ((bVar2 & 0xffffffdf) - 0x41 < 0x1a)) ||
         ((bVar2 == 0x2d || (bVar2 == 0x2b)))) {
        bVar3 = param_4[2];
        if (((bVar3 - 0x30 < 10) || ((bVar3 & 0xffffffdf) - 0x41 < 0x1a)) ||
           ((bVar3 == 0x2d || (bVar3 == 0x2b)))) {
          if (param_5 == 3) {
            bVar8 = 0;
            uVar10 = 0;
            uVar7 = 0;
            uVar6 = 0;
            goto LAB_00a13e54;
          }
          bVar8 = param_4[3];
          uVar6 = (ulong)bVar8;
          if ((((bVar8 - 0x30 < 10) || ((bVar8 & 0xffffffdf) - 0x41 < 0x1a)) || (bVar8 == 0x2d)) ||
             (bVar8 == 0x2b)) {
            if (param_5 == 4) {
              bVar8 = 0;
              uVar10 = 0;
              uVar7 = 0;
              goto LAB_00a13e54;
            }
            bVar8 = param_4[4];
            uVar7 = (ulong)bVar8;
            if (((bVar8 - 0x30 < 10) || ((bVar8 & 0xffffffdf) - 0x41 < 0x1a)) ||
               ((bVar8 == 0x2d || (bVar8 == 0x2b)))) {
              if (param_5 == 5) {
                bVar8 = 0;
                uVar10 = 0;
                goto LAB_00a13e54;
              }
              bVar8 = param_4[5];
              uVar10 = (ulong)bVar8;
              if (((bVar8 - 0x30 < 10) || ((bVar8 & 0xffffffdf) - 0x41 < 0x1a)) ||
                 ((bVar8 == 0x2d || (bVar8 == 0x2b)))) {
                if (param_5 == 6) {
                  bVar8 = 0;
LAB_00a13e54:
                  *(int *)(param_1 + 4) = param_2;
                  param_1[0x10] = bVar8;
                  uVar6 = (ulong)bVar3 << 0x18 | uVar6 << 0x20 | uVar10 << 0x30 | uVar7 << 0x28 |
                          (ulong)bVar2 << 0x10 | (ulong)bVar1 << 8 | param_5;
                  param_1[0x11] = param_3;
                  *(int *)(param_1 + 9) = (int)uVar6;
                  param_1[8] = 1;
                  param_1[0xf] = (char)(uVar6 >> 0x30);
                  *(short *)(param_1 + 0xd) = (short)(uVar6 >> 0x20);
                  *param_1 = 0xff;
                  return;
                }
                bVar8 = param_4[6];
                uVar9 = (uint)bVar8;
                if ((((uVar9 - 0x30 < 10) || ((uVar9 & 0xffffffdf) - 0x41 < 0x1a)) ||
                    (uVar9 == 0x2b)) || (uVar9 == 0x2d)) goto LAB_00a13e54;
              }
            }
          }
        }
      }
    }
    pcVar4 = "invalid characters in time zone name";
    uVar5 = 0x24;
  }
  else {
    pcVar4 = 
    "time zone name must have between 3 and 7 charactersinvalid characters in time zone name";
    uVar5 = 0x33;
  }
  param_1[8] = (char)pcVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *param_1 = 2;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(int *)(param_1 + 9) = (int)((ulong)pcVar4 >> 8);
  return;
}


// ===== 00a13f14  <chrono::offset::local::tz_info::timezone::TimeZoneName_as_core::convert::AsRef<str>>::as_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::tz_info::timezone::TimeZoneName as core::convert::AsRef<str>>::as_ref */

byte * __rustcall
<chrono::offset::local::tz_info::timezone::TimeZoneName_as_core::convert::AsRef<str>>::as_ref
          (byte *param_1)

{
  if (*param_1 - 3 < 5) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable code",0x28,
             &PTR_s__root__cargo_registry_src_index__00afa078);
}


// ===== 00a13f48  <chrono::offset::local::tz_info::timezone::TimeZoneName_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <chrono::offset::local::tz_info::timezone::TimeZoneName as core::fmt::Debug>::fmt */

void __rustcall
<chrono::offset::local::tz_info::timezone::TimeZoneName_as_core::fmt::Debug>::fmt
          (byte *param_1,undefined8 param_2)

{
  if (*param_1 - 3 < 5) {
    <str_as_core::fmt::Debug>::fmt(param_1 + 1,*param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable code",0x28,
             &PTR_s__root__cargo_registry_src_index__00afa078);
}


// ===== 00a13f84  FUN_00a13f84 =====

void FUN_00a13f84(uint *param_1,char *param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint extraout_w11;
  uint extraout_w11_00;
  char *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  char *local_d0;
  long local_c8;
  long local_c0;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined5 uStack_ad;
  uint uStack_a1;
  undefined1 local_90 [24];
  char local_78;
  undefined2 local_77;
  undefined1 uStack_75;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 uStack_68;
  char cStack_67;
  undefined2 uStack_66;
  uint uStack_64;
  
  if (param_3 != 0) {
    if (*param_2 != '<') {
      local_c0 = 0;
      local_d0 = param_2 + param_3;
      do {
        if (((byte)param_2[local_c0] & 0xffffffdf) - 0x5b < 0xffffffe6) {
          local_c8 = param_3 - local_c0;
          param_3 = local_c0;
          pcVar12 = param_2;
          goto joined_r0x00a14074;
        }
        local_c0 = local_c0 + 1;
      } while (param_3 != local_c0);
      local_c8 = 0;
      local_c0 = param_3;
      goto LAB_00a1417c;
    }
    if (param_3 != 1) {
      lVar15 = 0;
      pcVar12 = param_2 + 1;
LAB_00a13fd0:
      if (param_2[lVar15 + 1] != '>') goto code_r0x00a13fe0;
      local_c0 = lVar15 + 2;
      local_c8 = (param_3 - lVar15) + -2;
      param_3 = lVar15;
joined_r0x00a14074:
      local_d0 = param_2 + local_c0;
      param_2 = pcVar12;
      if ((local_c8 == 0) || ((cVar2 = *local_d0, cVar2 != '+' && (cVar2 != '-'))))
      goto LAB_00a1417c;
      local_d0 = local_d0 + 1;
      local_c8 = local_c8 + -1;
      local_c0 = local_c0 + 1;
      iVar16 = 1;
      if (cVar2 == '-') {
        iVar16 = -1;
      }
      FUN_00a15654(&local_78,&local_d0);
      uVar18 = extraout_w11;
      lVar15 = local_c8;
      uVar4 = local_b4;
      uVar5 = local_b2;
      local_b4 = local_77;
      local_b2 = uStack_75;
      goto joined_r0x00a140e4;
    }
LAB_00a13fec:
    uVar11 = 0x2500000003;
LAB_00a13ff8:
    *(undefined1 *)param_1 = 6;
    *(undefined8 *)(param_1 + 2) = uVar11;
    goto LAB_00a14208;
  }
  local_c8 = 0;
  local_d0 = param_2;
  local_c0 = param_3;
LAB_00a1417c:
  iVar16 = 1;
  FUN_00a15654(local_d0,&local_78,&local_d0);
  uVar18 = extraout_w11_00;
  lVar15 = local_c8;
  uVar4 = local_b4;
  uVar5 = local_b2;
  local_b4 = local_77;
  local_b2 = uStack_75;
joined_r0x00a140e4:
  if (local_78 == -1) {
    if (uStack_74 < 0x19) {
      if (uStack_70 < 0x3c) {
        if (uStack_6c < 0x3c) {
          iVar16 = (uStack_74 * 0xe10 + uStack_70 * 0x3c + uStack_6c) * iVar16;
          local_77 = local_b4;
          uStack_75 = local_b2;
          if (lVar15 == 0) {
            local_c8 = lVar15;
            FUN_00a13c80(&local_78,-iVar16,0,param_2,param_3);
            if (local_78 == -1) {
              *(undefined1 *)((long)param_1 + 0x2d) = 2;
              *(ulong *)(param_1 + 2) =
                   CONCAT26(uStack_66,CONCAT15(cStack_67,CONCAT14(uStack_68,uStack_6c)));
              *(ulong *)param_1 = CONCAT44(uStack_70,uStack_74);
              return;
            }
            *(char *)param_1 = local_78;
            uStack_a1 = CONCAT31((int3)(CONCAT22(uStack_66,CONCAT11(cStack_67,uStack_68)) >> 8),
                                 uStack_68);
            uStack_ad = (undefined5)
                        (CONCAT17((undefined1)uStack_70,
                                  CONCAT43(uStack_74,CONCAT12(uStack_75,local_77))) >> 0x18);
            *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
            *(ulong *)((long)param_1 + 1) = CONCAT53(uStack_ad,CONCAT12(uStack_75,local_77));
            param_1[4] = uStack_a1;
            param_1[5] = uStack_64;
            goto LAB_00a14208;
          }
          if (*local_d0 == '<') {
            if (lVar15 != 1) {
              lVar17 = 0;
              do {
                if (local_d0[lVar17 + 1] == '>') {
                  local_c8 = (lVar15 - lVar17) + -2;
                  local_c0 = local_c0 + lVar17 + 2;
                  pcVar12 = local_d0 + 1;
                  lVar15 = lVar17 + 2;
                  goto LAB_00a142fc;
                }
                lVar17 = lVar17 + 1;
              } while (lVar15 + -1 != lVar17);
            }
            goto LAB_00a13fec;
          }
          lVar17 = 0;
          do {
            if (((byte)local_d0[lVar17] & 0xffffffdf) - 0x5b < 0xffffffe6) {
              local_c8 = lVar15 - lVar17;
              goto LAB_00a142b4;
            }
            lVar17 = lVar17 + 1;
          } while (lVar15 != lVar17);
          local_c8 = 0;
          lVar17 = lVar15;
LAB_00a142b4:
          local_c0 = local_c0 + lVar17;
          pcVar12 = local_d0;
          lVar15 = lVar17;
LAB_00a142fc:
          local_d0 = local_d0 + lVar15;
          if (local_c8 == 0) {
LAB_00a143f8:
            pcVar12 = "DST start and end rules must be provided";
            *(undefined1 *)param_1 = 0xe;
            uVar11 = 0x28;
LAB_00a1440c:
            *(char **)(param_1 + 2) = pcVar12;
            *(undefined8 *)(param_1 + 4) = uVar11;
            goto LAB_00a14208;
          }
          if (*local_d0 == ',') {
            uVar18 = iVar16 - 0xe10;
          }
          else {
            FUN_00a15794(&local_78,&local_d0);
            if (local_78 != -1) {
              *(char *)param_1 = local_78;
              *(ulong *)(param_1 + 4) =
                   CONCAT44(uStack_64,CONCAT22(uStack_66,CONCAT11(cStack_67,uStack_68)));
              *(ulong *)(param_1 + 2) = CONCAT44(uStack_6c,uStack_70);
              *(undefined2 *)((long)param_1 + 1) = local_77;
              *(undefined1 *)((long)param_1 + 3) = uStack_75;
              param_1[1] = uStack_74;
              goto LAB_00a14208;
            }
            uVar18 = uStack_74;
            if (local_c8 == 0) goto LAB_00a143f8;
          }
          local_c8 = local_c8 + -1;
          local_c0 = local_c0 + 1;
          if (*local_d0 != ',') {
            uVar11 = 0x1500000003;
            goto LAB_00a13ff8;
          }
          local_d0 = local_d0 + 1;
          FUN_00a150e4(&local_78,&local_d0,param_4);
          uVar8 = uStack_70;
          uVar6 = uStack_74;
          if (local_78 == -1) {
            if (local_c8 == 0) {
              uVar11 = 0x2500000003;
            }
            else {
              local_c8 = local_c8 + -1;
              local_c0 = local_c0 + 1;
              if (*local_d0 == ',') {
                local_d0 = local_d0 + 1;
                FUN_00a150e4(&local_78,&local_d0,param_4);
                uVar9 = uStack_70;
                uVar7 = uStack_74;
                if (local_78 == -1) {
                  if (local_c8 == 0) {
                    FUN_00a13c80(&local_78,-iVar16,0,param_2,param_3);
                    if (local_78 == -1) {
                      uVar11 = CONCAT44(uStack_70,uStack_74);
                      uVar3 = CONCAT26(uStack_66,CONCAT15(cStack_67,CONCAT14(uStack_68,uStack_6c)));
                      FUN_00a13c80(&local_78,-uVar18,1,pcVar12,lVar17);
                      if (local_78 == -1) {
                        uVar18 = -uVar8;
                        if (-1 < (int)uVar8) {
                          uVar18 = uVar8;
                        }
                        uVar10 = 0;
                        uVar1 = -uVar9;
                        if (-1 < (int)uVar9) {
                          uVar1 = uVar9;
                        }
                        pcVar12 = "invalid DST start or end time";
                        uVar13 = 0x1d;
                        uVar14 = 0xc;
                        if ((uVar18 < 0x93a80) && (uVar1 < 0x93a80)) {
                          pcVar12 = (char *)CONCAT44(uVar7,uVar6);
                          if (cStack_67 != '\x02') {
                            *(char **)(param_1 + 2) = pcVar12;
                            *(undefined8 *)(param_1 + 4) = uVar11;
                            *(char *)((long)param_1 + 0x2d) = cStack_67;
                            uVar13 = *(undefined8 *)((ulong)local_90 | 3);
                            uVar11 = *(undefined8 *)((long)((ulong)local_90 | 3) + 5);
                            *param_1 = uVar8;
                            param_1[1] = uVar9;
                            *(undefined2 *)((long)param_1 + 0x2e) = uStack_66;
                            *(undefined8 *)(param_1 + 6) = uVar3;
                            *(undefined8 *)(param_1 + 8) = uVar13;
                            *(undefined8 *)((long)param_1 + 0x25) = uVar11;
                            return;
                          }
                          uVar10 = uVar8 & 0xffffff00;
                          uVar13 = uVar11;
                          uVar14 = uVar8;
                        }
                        *(char **)(param_1 + 2) = pcVar12;
                        *(undefined8 *)(param_1 + 4) = uVar13;
                        *param_1 = uVar10 | uVar14 & 0xff;
                        param_1[1] = uVar9;
                      }
                      else {
                        *(char *)param_1 = local_78;
                        *(ulong *)((long)param_1 + 9) =
                             CONCAT17(uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
                        *(ulong *)((long)param_1 + 1) =
                             CONCAT17((undefined1)uStack_70,
                                      CONCAT43(uStack_74,CONCAT12(uStack_75,local_77)));
                        *(char *)((long)param_1 + 0x11) = cStack_67;
                        *(undefined2 *)((long)param_1 + 0x12) = uStack_66;
                        param_1[5] = uStack_64;
                      }
                    }
                    else {
                      *(char *)param_1 = local_78;
                      *(undefined2 *)((long)param_1 + 1) = local_77;
                      *(undefined1 *)((long)param_1 + 3) = uStack_75;
                      *(ulong *)(param_1 + 3) =
                           CONCAT26(uStack_66,CONCAT15(cStack_67,CONCAT14(uStack_68,uStack_6c)));
                      *(ulong *)(param_1 + 1) = CONCAT44(uStack_70,uStack_74);
                      param_1[5] = uStack_64;
                    }
                    goto LAB_00a14208;
                  }
                  pcVar12 = "remaining data after parsing TZ string";
                  *(undefined1 *)param_1 = 5;
                  uVar11 = 0x26;
                  goto LAB_00a1440c;
                }
                goto LAB_00a14358;
              }
              uVar11 = 0x1500000003;
            }
            *(undefined8 *)(param_1 + 2) = uVar11;
            *(undefined1 *)param_1 = 6;
          }
          else {
LAB_00a14358:
            *(char *)param_1 = local_78;
            *(ulong *)(param_1 + 3) =
                 CONCAT26(uStack_66,CONCAT15(cStack_67,CONCAT14(uStack_68,uStack_6c)));
            param_1[5] = uStack_64;
            *(undefined2 *)((long)param_1 + 1) = local_77;
            *(undefined1 *)((long)param_1 + 3) = uStack_75;
            *(ulong *)(param_1 + 1) = CONCAT44(uStack_70,uStack_74);
          }
          goto LAB_00a14208;
        }
        pcVar12 = "invalid offset second";
      }
      else {
        pcVar12 = "invalid offset minute";
      }
      local_78 = '\x05';
      uVar11 = 0x15;
      uStack_74 = uVar18;
      local_b4 = uVar4;
      local_b2 = uVar5;
    }
    else {
      local_78 = '\x05';
      pcVar12 = "invalid offset hour";
      uVar11 = 0x13;
      uStack_74 = uVar18;
      local_b4 = uVar4;
      local_b2 = uVar5;
    }
  }
  else {
    pcVar12 = (char *)CONCAT44(uStack_6c,uStack_70);
    uVar11 = CONCAT44(uStack_64,CONCAT22(uStack_66,CONCAT11(cStack_67,uStack_68)));
  }
  *(char *)param_1 = local_78;
  param_1[1] = uStack_74;
  *(undefined2 *)((long)param_1 + 1) = local_b4;
  *(undefined1 *)((long)param_1 + 3) = local_b2;
  *(char **)(param_1 + 2) = pcVar12;
  *(undefined8 *)(param_1 + 4) = uVar11;
LAB_00a14208:
  *(undefined1 *)((long)param_1 + 0x2d) = 0xff;
  return;
code_r0x00a13fe0:
  lVar15 = lVar15 + 1;
  if (param_3 + -1 == lVar15) goto LAB_00a13fec;
  goto LAB_00a13fd0;
}


// ===== 00a14620  FUN_00a14620 =====

void FUN_00a14620(undefined1 *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  if (*(char *)((long)param_2 + 0x2d) == '\x02') {
    *(int **)(param_1 + 8) = param_2;
    *param_1 = 0xff;
    return;
  }
  if (SCARRY8(param_3,-0x38bc5d80)) {
    pcVar4 = "out of range operation";
    uVar5 = 0x16;
LAB_00a14824:
    *(char **)(param_1 + 8) = pcVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    *param_1 = 7;
    return;
  }
  lVar2 = ((param_3 + -0x38bc5d80) % 0x15180 >> 0x3f) + (param_3 + -0x38bc5d80) / 0x15180;
  uVar3 = lVar2 % 0x23ab1;
  uVar1 = uVar3 + 0x23ab1;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  uVar7 = uVar1 / 0x8eac;
  if (2 < uVar7) {
    uVar7 = 3;
  }
  lVar6 = uVar1 + uVar7 * -0x8eac;
  iVar8 = (int)((ulong)(lVar6 * 0x166db073) >> 0x20);
  iVar8 = (iVar8 >> 7) - (iVar8 >> 0x1f);
  if (0x17 < iVar8) {
    iVar8 = 0x18;
  }
  lVar6 = lVar6 + (long)iVar8 * -0x5b5;
  iVar9 = (int)lVar6 + (int)((ulong)(lVar6 * -0x4c73064f) >> 0x20);
  iVar9 = (iVar9 >> 8) - (iVar9 >> 0x1f);
  if (2 < iVar9) {
    iVar9 = 3;
  }
  lVar2 = uVar7 * 100 + (lVar2 / 0x23ab1 + ((long)uVar3 >> 0x3f)) * 400 + (long)iVar8 * 4 +
          (long)iVar9;
  if (0x131 < lVar6 + (long)iVar9 * -0x16d) {
    lVar2 = lVar2 + 1;
  }
  uVar1 = lVar2 + 2000;
  iVar8 = (int)uVar1;
  if (uVar1 != (long)iVar8) {
    pcVar4 = "i64 is out of range for i32";
    uVar5 = 0x1b;
    goto LAB_00a14824;
  }
  if (0xfffffffb < lVar2 + 0x800007ceU) {
    *param_1 = 7;
    *(char **)(param_1 + 8) = "out of range date time";
    *(undefined8 *)(param_1 + 0x10) = 0x16;
    return;
  }
  piVar12 = param_2 + 4;
  lVar10 = (long)*param_2 - (long)*piVar12;
  lVar11 = (long)param_2[2] - (long)param_2[8];
  lVar2 = FUN_00a154cc(param_2 + 2,uVar1 & 0xffffffff,lVar10);
  lVar6 = FUN_00a154cc(param_2 + 3,uVar1 & 0xffffffff,lVar11);
  if (lVar6 < lVar2) {
    if (param_3 < lVar6) {
      iVar8 = iVar8 + -1;
      lVar2 = FUN_00a154cc(param_2 + 2,iVar8,lVar10);
      if (param_3 < lVar2) {
LAB_00a148e4:
        lVar2 = FUN_00a154cc(param_2 + 3,iVar8,lVar11);
        goto joined_r0x00a148b4;
      }
    }
    else {
      if (param_3 < lVar2) goto LAB_00a148f8;
      lVar2 = FUN_00a154cc(param_2 + 3,iVar8 + 1,lVar11);
      if (lVar2 <= param_3) {
        iVar8 = iVar8 + 1;
        goto LAB_00a148a8;
      }
    }
  }
  else if (param_3 < lVar2) {
    iVar8 = iVar8 + -1;
    lVar2 = FUN_00a154cc(param_2 + 3,iVar8,lVar11);
    if (lVar2 <= param_3) goto LAB_00a148f8;
LAB_00a148a8:
    lVar2 = FUN_00a154cc(param_2 + 2,iVar8,lVar10);
joined_r0x00a148b4:
    if (param_3 < lVar2) goto LAB_00a148f8;
  }
  else if (lVar6 <= param_3) {
    lVar2 = FUN_00a154cc(param_2 + 2,iVar8 + 1,lVar10);
    if (param_3 < lVar2) goto LAB_00a148f8;
    iVar8 = iVar8 + 1;
    goto LAB_00a148e4;
  }
  piVar12 = param_2 + 8;
LAB_00a148f8:
  *(int **)(param_1 + 8) = piVar12;
  *param_1 = 0xff;
  return;
}


// ===== 00a14930  FUN_00a14930 =====

void FUN_00a14930(undefined8 *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int local_100;
  
  if (*(char *)((long)param_2 + 0x2d) == '\x02') {
    uVar21 = *(undefined8 *)(param_2 + 2);
    uVar20 = *(undefined8 *)param_2;
    uVar23 = *(undefined8 *)((long)param_2 + 0x15);
    uVar22 = *(undefined8 *)((long)param_2 + 0xd);
    *(undefined1 *)((long)param_1 + 0x1d) = 2;
    param_1[1] = uVar21;
    *param_1 = uVar20;
    *(undefined8 *)((long)param_1 + 0x15) = uVar23;
    *(undefined8 *)((long)param_1 + 0xd) = uVar22;
    return;
  }
  uVar3 = *param_3;
  iVar2 = (int)uVar3 >> 0xd;
  iVar17 = iVar2 + -1;
  if (iVar2 < 1) {
    local_100 = (1U - iVar2) / 400 + 1;
    iVar17 = iVar17 + local_100 * 400;
    local_100 = local_100 * -0x23ab1;
  }
  else {
    local_100 = 0;
  }
  uVar4 = param_3[1];
  lVar9 = FUN_00a154cc(param_2 + 2,iVar2,0);
  iVar7 = *param_2;
  lVar10 = FUN_00a154cc(param_2 + 2,iVar2,0);
  piVar18 = param_2 + 4;
  iVar5 = *piVar18;
  piVar16 = param_2 + 8;
  iVar6 = *piVar16;
  lVar11 = FUN_00a154cc(param_2 + 3,iVar2,0);
  iVar8 = param_2[1];
  lVar12 = FUN_00a154cc(param_2 + 3,iVar2,0);
  cVar1 = iVar6 < iVar5;
  if (iVar5 < iVar6) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') {
LAB_00a14bcc:
    uVar21 = *(undefined8 *)(param_2 + 6);
    uVar20 = *(undefined8 *)piVar18;
  }
  else {
    lVar11 = lVar11 + iVar8;
    lVar19 = (ulong)uVar4 +
             (long)(int)((((uVar3 >> 4 & 0x1ff) + local_100) - iVar17 / 100) + (iVar17 * 0x5b5 >> 2)
                         + (iVar17 / 100 >> 2) + -0xaf93b) * 0x15180;
    lVar9 = lVar9 + iVar7;
    lVar10 = (lVar10 + (long)iVar7 + (long)iVar6) - (long)iVar5;
    lVar12 = ((long)iVar5 - (long)iVar6) + (long)iVar8 + lVar12;
    if (cVar1 == '\x01') {
      uVar13 = FUN_00a14c20(param_2 + 2,iVar2);
      uVar14 = FUN_00a14c20(param_2 + 3,iVar2);
      if (uVar13 < uVar14) {
        if (lVar10 <= lVar19) {
          if (lVar19 <= lVar9) {
LAB_00a14c08:
            uVar23 = *(undefined8 *)(param_2 + 6);
            uVar22 = *(undefined8 *)piVar18;
            uVar21 = *(undefined8 *)(param_2 + 10);
            uVar20 = *(undefined8 *)piVar16;
LAB_00a14c14:
            param_1[1] = uVar21;
            *param_1 = uVar20;
            param_1[3] = uVar23;
            param_1[2] = uVar22;
            return;
          }
          if (lVar19 < lVar11) goto LAB_00a14b7c;
          if (lVar19 < lVar12) goto LAB_00a14b68;
        }
        goto LAB_00a14bcc;
      }
      if (lVar11 < lVar19) {
        if (lVar19 < lVar12) {
LAB_00a14b68:
          uVar15 = 4;
          goto LAB_00a14bdc;
        }
        if (lVar19 < lVar10) goto LAB_00a14bcc;
        if (lVar19 <= lVar9) goto LAB_00a14c08;
      }
    }
    else {
      uVar13 = FUN_00a14c20(param_2 + 2,iVar2);
      uVar14 = FUN_00a14c20(param_2 + 3,iVar2);
      if (uVar13 < uVar14) {
        if (lVar9 < lVar19) {
          if (lVar19 < lVar10) goto LAB_00a14b68;
          if (lVar19 < lVar12) goto LAB_00a14b7c;
          if (lVar19 <= lVar11) goto LAB_00a14bb4;
        }
        goto LAB_00a14bcc;
      }
      if (lVar12 <= lVar19) {
        if (lVar19 <= lVar11) {
LAB_00a14bb4:
          uVar21 = *(undefined8 *)(param_2 + 6);
          uVar20 = *(undefined8 *)piVar18;
          uVar23 = *(undefined8 *)(param_2 + 10);
          uVar22 = *(undefined8 *)piVar16;
          goto LAB_00a14c14;
        }
        if ((lVar19 < lVar9) && (lVar12 < lVar19)) goto LAB_00a14bcc;
        if ((lVar9 <= lVar19) && (lVar19 < lVar10)) goto LAB_00a14b68;
      }
    }
LAB_00a14b7c:
    uVar21 = *(undefined8 *)(param_2 + 10);
    uVar20 = *(undefined8 *)piVar16;
  }
  uVar15 = 2;
  param_1[1] = uVar21;
  *param_1 = uVar20;
LAB_00a14bdc:
  *(undefined1 *)((long)param_1 + 0x1d) = uVar15;
  return;
}


// ===== 00a14c20  FUN_00a14c20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a14c20(char *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong local_70 [12];
  
  if (*param_1 == '\0') {
    uVar4 = (ulong)*(ushort *)(param_1 + 2);
    lVar2 = 0;
    if (0xb5 < *(ushort *)(param_1 + 2)) {
      lVar2 = 6;
    }
    lVar1 = lVar2 + 3;
    if ((long)uVar4 <= *(long *)(&DAT_00381340 + (lVar2 + 3) * 8)) {
      lVar1 = lVar2;
    }
    if (*(long *)(&DAT_00381340 + (lVar1 + 1) * 8) < (long)uVar4) {
      lVar1 = lVar1 + 1;
    }
    if (*(long *)(&DAT_00381340 + (lVar1 + 1) * 8) < (long)uVar4) {
      lVar1 = lVar1 + 1;
    }
    uVar3 = (ulong)(*(long *)(&DAT_00381340 + lVar1 * 8) == uVar4 - 1);
    if (*(long *)(&DAT_00381340 + lVar1 * 8) < (long)(uVar4 - 1)) {
      uVar3 = uVar3 + 1;
    }
    uVar4 = (uVar3 + lVar1) - 1;
    if (uVar4 < 0xc) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar4,0xc,&PTR_s__root__cargo_registry_src_index__00afa168);
  }
  if (*param_1 != '\x01') {
    if ((ulong)(byte)param_1[1] - 1 < 0xc) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              ((ulong)(byte)param_1[1] - 1,0xc,&PTR_s__root__cargo_registry_src_index__00afa198);
  }
  uVar4 = (ulong)*(ushort *)(param_1 + 2);
  if ((param_2 * -0x3d70a3d7 + 0x51eb850 >> 4 | param_2 * -0x70000000) < 0xa3d70b) {
    uVar3 = 1;
  }
  else if ((param_2 & 3) == 0) {
    uVar3 = (ulong)(0x28f5c28 < (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000));
  }
  else {
    uVar3 = 0;
  }
  bVar5 = (byte)uVar3;
  local_70[5] = uVar3 + 0x97;
  local_70[6] = uVar3 + 0xb5;
  lVar2 = 0;
  if (uVar3 + 0xb5 <= uVar4) {
    lVar2 = 6;
  }
  local_70[7] = uVar3 | 0xd4;
  local_70[4] = CONCAT17((char)((ulong)_UNK_002a0ef8 >> 0x38),
                         CONCAT16((char)((ulong)_UNK_002a0ef8 >> 0x30),
                                  CONCAT15((char)((ulong)_UNK_002a0ef8 >> 0x28),
                                           CONCAT14((char)((ulong)_UNK_002a0ef8 >> 0x20),
                                                    CONCAT13((char)((ulong)_UNK_002a0ef8 >> 0x18),
                                                             CONCAT12((char)((ulong)_UNK_002a0ef8 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulong)
                                                  _UNK_002a0ef8 >> 8),bVar5 | (byte)_UNK_002a0ef8)))
                                                  ))));
  local_70[3] = CONCAT17((char)((ulong)_DAT_002a0ef0 >> 0x38),
                         CONCAT16((char)((ulong)_DAT_002a0ef0 >> 0x30),
                                  CONCAT15((char)((ulong)_DAT_002a0ef0 >> 0x28),
                                           CONCAT14((char)((ulong)_DAT_002a0ef0 >> 0x20),
                                                    CONCAT13((char)((ulong)_DAT_002a0ef0 >> 0x18),
                                                             CONCAT12((char)((ulong)_DAT_002a0ef0 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulong)
                                                  _DAT_002a0ef0 >> 8),bVar5 | (byte)_DAT_002a0ef0)))
                                                  ))));
  local_70[9] = uVar3 + _UNK_002a0d18;
  local_70[8] = uVar3 + _DAT_002a0d10;
  local_70[0xb] =
       CONCAT17((char)((ulong)_UNK_002a0458 >> 0x38),
                CONCAT16((char)((ulong)_UNK_002a0458 >> 0x30),
                         CONCAT15((char)((ulong)_UNK_002a0458 >> 0x28),
                                  CONCAT14((char)((ulong)_UNK_002a0458 >> 0x20),
                                           CONCAT13((char)((ulong)_UNK_002a0458 >> 0x18),
                                                    CONCAT12((char)((ulong)_UNK_002a0458 >> 0x10),
                                                             CONCAT11((char)((ulong)_UNK_002a0458 >>
                                                                            8),bVar5 | (byte)
                                                  _UNK_002a0458)))))));
  local_70[10] = CONCAT17((char)((ulong)_DAT_002a0450 >> 0x38),
                          CONCAT16((char)((ulong)_DAT_002a0450 >> 0x30),
                                   CONCAT15((char)((ulong)_DAT_002a0450 >> 0x28),
                                            CONCAT14((char)((ulong)_DAT_002a0450 >> 0x20),
                                                     CONCAT13((char)((ulong)_DAT_002a0450 >> 0x18),
                                                              CONCAT12((char)((ulong)_DAT_002a0450
                                                                             >> 0x10),
                                                                       CONCAT11((char)((ulong)
                                                  _DAT_002a0450 >> 8),bVar5 | (byte)_DAT_002a0450)))
                                                  ))));
  local_70[2] = uVar3 + 0x3b;
  local_70[1] = _UNK_002a0f08;
  local_70[0] = _DAT_002a0f00;
  if ((long)local_70[lVar2 + 3] <= (long)uVar4) {
    lVar2 = lVar2 + 3;
  }
  if ((long)local_70[lVar2 + 1] <= (long)uVar4) {
    lVar2 = lVar2 + 1;
  }
  if ((long)local_70[lVar2 + 1] <= (long)uVar4) {
    lVar2 = lVar2 + 1;
  }
  uVar3 = (ulong)(local_70[lVar2] == uVar4);
  if ((long)local_70[lVar2] < (long)uVar4) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (uVar3 + lVar2) - 1;
  if (uVar4 < 0xc) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(uVar4,0xc,&PTR_s__root__cargo_registry_src_index__00afa180);
}


// ===== 00a150e4  FUN_00a150e4 =====

void FUN_00a150e4(char *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  char local_58;
  byte local_57;
  undefined1 uStack_56;
  char cStack_55;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (pcVar5 = (char *)*param_2, pcVar5 == (char *)0x0)) {
LAB_00a15190:
    FUN_00a0b28c(&local_58,param_2);
    if (local_58 != -1) {
LAB_00a151a8:
      *param_1 = local_58;
      *(undefined4 *)(param_1 + 0x14) = uStack_44;
      *(ulong *)(param_1 + 0xc) = CONCAT26(uStack_46,CONCAT24(uStack_48,uStack_4c));
      *(ulong *)(param_1 + 4) = CONCAT26(uStack_4e,CONCAT24(uStack_50,uStack_54));
      param_1[1] = local_57;
      *(ushort *)(param_1 + 2) = CONCAT11(cStack_55,uStack_56);
      return;
    }
    if (0x16d < CONCAT11(cStack_55,uStack_56)) {
LAB_00a151f0:
      *param_1 = '\f';
      *(char **)(param_1 + 8) = "invalid rule day julian day";
      param_1[0x10] = '\x1b';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      return;
    }
    uVar8 = (uint)CONCAT11(cStack_55,uStack_56) << 0x10 | 1;
    lVar4 = param_2[1];
joined_r0x00a1527c:
    local_58 = -1;
    if (lVar4 == 0) goto LAB_00a154a4;
LAB_00a15280:
    if (*(char *)*param_2 != '/') goto LAB_00a154a4;
    *param_2 = (long)((char *)*param_2 + 1);
    param_2[1] = lVar4 + -1;
    param_2[2] = param_2[2] + 1;
    if ((param_3 & 1) == 0) {
      FUN_00a15914(&local_58,param_2);
    }
    else {
      FUN_00a15a34();
    }
    if (local_58 != -1) {
      *param_1 = local_58;
      *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
      *(ushort *)(param_1 + 1) = CONCAT11(uStack_56,local_57);
      param_1[3] = cStack_55;
      *(undefined4 *)(param_1 + 4) = uStack_54;
      return;
    }
  }
  else {
    if (*pcVar5 != 'J') {
      if (*pcVar5 != 'M') goto LAB_00a15190;
      *param_2 = (long)(pcVar5 + 1);
      param_2[1] = lVar4 + -1;
      param_2[2] = param_2[2] + 1;
      FUN_00a0adb4(&local_58,param_2);
      bVar1 = local_57;
      if (local_58 != -1) {
        uVar9 = CONCAT26(uStack_48,CONCAT42(uStack_4c,uStack_4e));
        uVar7 = CONCAT26(uStack_50,CONCAT42(uStack_54,CONCAT11(cStack_55,uStack_56)));
        uVar6 = CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
        *param_1 = local_58;
        param_1[1] = local_57;
LAB_00a15170:
        *(undefined8 *)(param_1 + 10) = uVar9;
        *(undefined8 *)(param_1 + 2) = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        return;
      }
      if (param_2[1] == 0) {
        uVar7 = 0x2500000003;
LAB_00a15380:
        *(undefined8 *)(param_1 + 8) = uVar7;
        *param_1 = '\x06';
        return;
      }
      pcVar5 = (char *)*param_2;
      *param_2 = (long)(pcVar5 + 1);
      param_2[1] = param_2[1] + -1;
      param_2[2] = param_2[2] + 1;
      if (*pcVar5 != '.') {
        uVar7 = 0x1500000003;
        goto LAB_00a15380;
      }
      FUN_00a0adb4(&local_58,param_2);
      bVar2 = local_57;
      if (local_58 != -1) {
        uVar9 = CONCAT26(uStack_48,CONCAT42(uStack_4c,uStack_4e));
        uVar7 = CONCAT26(uStack_50,CONCAT42(uStack_54,CONCAT11(cStack_55,uStack_56)));
        uVar6 = CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
        *param_1 = local_58;
        param_1[1] = local_57;
        goto LAB_00a15170;
      }
      lVar4 = FUN_00a0b7fc(param_2,".",1);
      if (lVar4 != 0) {
        cVar3 = '\x06';
        *(long *)(param_1 + 8) = lVar4;
        goto LAB_00a154b0;
      }
      FUN_00a0adb4(&local_58,param_2);
      if (local_58 != -1) {
        *param_1 = local_58;
        param_1[1] = local_57;
        *(ulong *)(param_1 + 10) = CONCAT26(uStack_48,CONCAT42(uStack_4c,uStack_4e));
        *(ulong *)(param_1 + 2) =
             CONCAT26(uStack_50,CONCAT42(uStack_54,CONCAT11(cStack_55,uStack_56)));
        *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
        return;
      }
      if (0xb < bVar1 - 1) {
        pcVar5 = "invalid rule day month";
        uVar7 = 0x16;
LAB_00a15468:
        *(char **)(param_1 + 8) = pcVar5;
        *(undefined8 *)(param_1 + 0x10) = uVar7;
        *param_1 = '\f';
        return;
      }
      if (4 < bVar2 - 1) {
        pcVar5 = "invalid rule day week";
        uVar7 = 0x15;
        goto LAB_00a15468;
      }
      if (6 < local_57) {
        pcVar5 = "invalid rule day week day";
        uVar7 = 0x19;
        goto LAB_00a15468;
      }
      uVar8 = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | (uint)local_57 << 0x18 | 2;
      lVar4 = param_2[1];
      goto joined_r0x00a1527c;
    }
    *param_2 = (long)(pcVar5 + 1);
    param_2[1] = lVar4 + -1;
    param_2[2] = param_2[2] + 1;
    FUN_00a0b28c(&local_58,param_2);
    if (local_58 != -1) goto LAB_00a151a8;
    if (0x16c < CONCAT11(cStack_55,uStack_56) - 1) goto LAB_00a151f0;
    uVar8 = (uint)CONCAT11(cStack_55,uStack_56) << 0x10;
    lVar4 = param_2[1];
    if (lVar4 != 0) goto LAB_00a15280;
LAB_00a154a4:
    uStack_54 = 0x1c20;
  }
  *(uint *)(param_1 + 4) = uVar8;
  *(undefined4 *)(param_1 + 8) = uStack_54;
  cVar3 = -1;
LAB_00a154b0:
  *param_1 = cVar3;
  return;
}


// ===== 00a154cc  FUN_00a154cc =====

long FUN_00a154cc(undefined8 param_1,uint param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  auVar5 = FUN_00a14c20();
  uVar2 = auVar5._0_8_;
  if ((param_2 * -0x3d70a3d7 + 0x51eb850 >> 4 | param_2 * -0x70000000) < 0xa3d70b) {
    uVar3 = 1;
  }
  else if ((param_2 & 3) == 0) {
    uVar3 = (uint)(0x28f5c28 < (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000));
  }
  else {
    uVar3 = 0;
  }
  lVar4 = (long)(int)param_2 * 0x16d + -0xaf8ca;
  if ((int)param_2 < 0x7b2) {
    uVar1 = 0;
    if (2 < uVar2) {
      uVar1 = uVar3;
    }
    lVar4 = ((lVar4 + (ulong)(2000 - param_2) / 100) -
            ((ulong)(0x7b4 - param_2 >> 2) + (ulong)(2000 - param_2) / 400)) + (ulong)uVar1;
  }
  else {
    uVar1 = 0;
    if (uVar2 < 3) {
      uVar1 = uVar3;
    }
    lVar4 = (((lVar4 + ((long)(int)param_2 - 0x7b0U >> 2)) - (ulong)(param_2 - 0x76c) / 100) +
            (ulong)(param_2 - 0x640) / 400) - (ulong)uVar1;
  }
  uVar2 = uVar2 - 1;
  if (uVar2 < 0xc) {
    return param_3 + (auVar5._8_8_ + lVar4 + *(long *)(&DAT_00381340 + uVar2 * 8) + -1) * 0x15180;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(uVar2,0xc,&PTR_s__root__cargo_registry_src_index__00afa1b0);
}


// ===== 00a15654  FUN_00a15654 =====

void FUN_00a15654(char *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  char local_50;
  undefined2 local_4f;
  char local_4d;
  uint local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_00a0af84(&local_50,param_2);
  uVar1 = local_4c;
  if (local_50 != -1) {
LAB_00a15688:
    *param_1 = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_40;
    *(undefined8 *)(param_1 + 8) = local_48;
    *(undefined2 *)(param_1 + 1) = local_4f;
    param_1[3] = local_4d;
    *(uint *)(param_1 + 4) = local_4c;
    return;
  }
  if (param_2[1] == 0) {
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_00a15770;
  }
  if (*(char *)*param_2 == ':') {
    *param_2 = (char *)*param_2 + 1;
    param_2[1] = param_2[1] + -1;
    param_2[2] = param_2[2] + 1;
    FUN_00a0af84(&local_50,param_2);
    uVar3 = local_4c;
    if (local_50 != -1) goto LAB_00a15688;
    uVar2 = param_2[1];
    if (uVar2 == 0) goto LAB_00a15770;
    if (*(char *)*param_2 == ':') {
      *param_2 = (char *)*param_2 + 1;
      param_2[1] = uVar2 - 1;
      param_2[2] = param_2[2] + 1;
      FUN_00a0af84(&local_50,param_2);
      if (local_50 != -1) goto LAB_00a15688;
      uVar2 = (ulong)local_4c;
      goto LAB_00a15770;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar2 = 0;
LAB_00a15770:
  *(int *)(param_1 + 0xc) = (int)uVar2;
  *(uint *)(param_1 + 4) = uVar1;
  *(uint *)(param_1 + 8) = uVar3;
  *param_1 = -1;
  return;
}


// ===== 00a15794  FUN_00a15794 =====

void FUN_00a15794(char *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_38;
  undefined2 local_37;
  char local_35;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  undefined8 local_28;
  
  if (param_2[1] != 0) {
    cVar1 = *(char *)*param_2;
    if ((cVar1 == '+') || (cVar1 == '-')) {
      *param_2 = (long)((char *)*param_2 + 1);
      param_2[1] = param_2[1] + -1;
      iVar3 = 1;
      if (cVar1 == '-') {
        iVar3 = -1;
      }
      param_2[2] = param_2[2] + 1;
      FUN_00a15654(&local_38);
      goto joined_r0x00a1586c;
    }
  }
  iVar3 = 1;
  FUN_00a15654(&local_38);
joined_r0x00a1586c:
  if (local_38 != -1) {
    *param_1 = local_38;
    *(undefined2 *)(param_1 + 1) = local_37;
    param_1[3] = local_35;
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
    *(uint *)(param_1 + 0xc) = local_2c;
    *(undefined8 *)(param_1 + 0x10) = local_28;
    return;
  }
  if (local_34 < 0x19) {
    if (uStack_30 < 0x3c) {
      if (local_2c < 0x3c) {
        *param_1 = -1;
        *(uint *)(param_1 + 4) = (local_34 * 0xe10 + uStack_30 * 0x3c + local_2c) * iVar3;
        return;
      }
      pcVar2 = "invalid offset second";
    }
    else {
      pcVar2 = "invalid offset minute";
    }
    *param_1 = '\x05';
    *(char **)(param_1 + 8) = pcVar2;
    param_1[0x10] = '\x15';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    return;
  }
  *param_1 = '\x05';
  *(char **)(param_1 + 8) = "invalid offset hour";
  param_1[0x10] = '\x13';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  return;
}


// ===== 00a15914  FUN_00a15914 =====

void FUN_00a15914(char *param_1)

{
  char *pcVar1;
  char local_38;
  undefined2 local_37;
  char local_35;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  undefined8 local_28;
  
  FUN_00a15654(&local_38);
  if (local_38 != -1) {
    *param_1 = local_38;
    *(undefined2 *)(param_1 + 1) = local_37;
    param_1[3] = local_35;
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
    *(uint *)(param_1 + 0xc) = local_2c;
    *(undefined8 *)(param_1 + 0x10) = local_28;
    return;
  }
  if (local_34 < 0x19) {
    if (uStack_30 < 0x3c) {
      if (local_2c < 0x3c) {
        *param_1 = -1;
        *(uint *)(param_1 + 4) = local_34 * 0xe10 + uStack_30 * 0x3c + local_2c;
        return;
      }
      pcVar1 = "invalid day time second";
    }
    else {
      pcVar1 = "invalid day time minute";
    }
    *param_1 = '\x05';
    *(char **)(param_1 + 8) = pcVar1;
    param_1[0x10] = '\x17';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    return;
  }
  *param_1 = '\x05';
  *(char **)(param_1 + 8) = "invalid day time hour";
  param_1[0x10] = '\x15';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  return;
}


// ===== 00a15a34  FUN_00a15a34 =====

void FUN_00a15a34(char *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_38;
  undefined2 local_37;
  char local_35;
  int local_34;
  uint uStack_30;
  uint local_2c;
  undefined8 local_28;
  
  if (param_2[1] != 0) {
    cVar1 = *(char *)*param_2;
    if ((cVar1 == '+') || (cVar1 == '-')) {
      *param_2 = (long)((char *)*param_2 + 1);
      param_2[1] = param_2[1] + -1;
      iVar3 = 1;
      if (cVar1 == '-') {
        iVar3 = -1;
      }
      param_2[2] = param_2[2] + 1;
      FUN_00a15654(&local_38);
      goto joined_r0x00a15b10;
    }
  }
  iVar3 = 1;
  FUN_00a15654(&local_38);
joined_r0x00a15b10:
  if (local_38 != -1) {
    *param_1 = local_38;
    *(undefined2 *)(param_1 + 1) = local_37;
    param_1[3] = local_35;
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
    *(uint *)(param_1 + 0xc) = local_2c;
    *(undefined8 *)(param_1 + 0x10) = local_28;
    return;
  }
  if (local_34 + 0xa7U < 0x14f) {
    if (uStack_30 < 0x3c) {
      if (local_2c < 0x3c) {
        *param_1 = -1;
        *(uint *)(param_1 + 4) = (local_34 * 0xe10 + uStack_30 * 0x3c + local_2c) * iVar3;
        return;
      }
      pcVar2 = "invalid day time second";
    }
    else {
      pcVar2 = "invalid day time minute";
    }
    *param_1 = '\x05';
    *(char **)(param_1 + 8) = pcVar2;
    param_1[0x10] = '\x17';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    return;
  }
  *param_1 = '\x05';
  *(char **)(param_1 + 8) = "invalid day time hour";
  param_1[0x10] = '\x15';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  return;
}


// ===== 00a15bb8  <android_tzdata::tzdata::android_tzdata::tzdata::Index>::find_entry =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <android_tzdata::tzdata::android_tzdata::tzdata::Index>::find_entry */

void __rustcall
<android_tzdata::tzdata::android_tzdata::tzdata::Index>::find_entry
          (undefined8 *param_1,long param_2,void *param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  char *__s1;
  void *__s1_00;
  undefined8 uVar20;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (0x28 < param_4) {
    *param_1 = 0;
    return;
  }
  lVar19 = *(long *)(param_2 + 8);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar18 = *(ulong *)(param_2 + 0x10) / 0x34;
  if (*(ulong *)(param_2 + 0x10) < 0x34) {
    local_98 = &DAT_00000008;
    uVar4 = 0;
    lVar2 = _DAT_0029fd00;
    lVar5 = _UNK_0029fd08;
    lVar6 = _DAT_002a0460;
    lVar7 = _UNK_002a0468;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_98 = (undefined1 *)FUN_004b25a4(uVar18 << 4,8);
    uVar4 = uVar18;
    lVar2 = _DAT_0029fd00;
    lVar5 = _UNK_0029fd08;
    lVar6 = _DAT_002a0460;
    lVar7 = _UNK_002a0468;
    if (local_98 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar18 << 4);
    }
  }
  _DAT_0029fd00 = lVar2;
  _UNK_0029fd08 = lVar5;
  _DAT_002a0460 = lVar6;
  _UNK_002a0468 = lVar7;
  if (0x33 < uVar18 * 0x34) {
    uVar11 = uVar18 * 0x34 - 0x34;
    uVar18 = uVar11 / 0x34;
    if (uVar11 < 0x9c) {
      uVar14 = 0;
      lVar13 = lVar19;
LAB_00a15cf4:
      lVar19 = (uVar18 - uVar14) + 1;
      puVar15 = (undefined8 *)(local_98 + uVar14 * 0x10 + 8);
      do {
        lVar19 = lVar19 + -1;
        puVar15[-1] = lVar13;
        *puVar15 = 0x34;
        lVar13 = lVar13 + 0x34;
        puVar15 = puVar15 + 2;
      } while (lVar19 != 0);
    }
    else {
      uVar9 = uVar18 + 1;
      uVar14 = uVar9 & 0xffffffffffffffc;
      lVar13 = lVar19 + uVar14 * 0x34;
      uVar17 = uVar9 & 0xffffffffffffffc;
      plVar16 = (long *)(local_98 + 0x20);
      do {
        uVar17 = uVar17 - 4;
        plVar16[-4] = lVar19 + lVar2;
        plVar16[-3] = 0x34;
        plVar16[-2] = lVar19 + lVar5;
        plVar16[-1] = 0x34;
        *plVar16 = lVar19 + lVar6;
        plVar16[1] = 0x34;
        plVar16[2] = lVar19 + lVar7;
        plVar16[3] = 0x34;
        plVar16 = plVar16 + 8;
        lVar19 = lVar19 + 0xd0;
      } while (uVar17 != 0);
      if (uVar9 != uVar14) goto LAB_00a15cf4;
    }
    uVar9 = param_4;
    if (uVar11 < 0x34) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      uVar18 = uVar18 + 1;
      do {
        lVar2 = (uVar18 >> 1) + lVar19;
        uVar11 = *(ulong *)((long)(local_98 + lVar2 * 0x10) + 8);
        if (uVar11 < param_4) {
          uVar9 = 0;
          ppuVar10 = &PTR_s__root__cargo_registry_src_index__00afa1e0;
          goto LAB_00a1602c;
        }
        __s1_00 = *(void **)(local_98 + lVar2 * 0x10);
        iVar8 = memcmp(__s1_00,param_3,param_4);
        if (iVar8 == 0) {
          if (uVar11 < 0x28) {
            ppuVar10 = &PTR_s__root__cargo_registry_src_index__00afa1c8;
            param_4 = 0x28;
            goto LAB_00a1602c;
          }
          iVar8 = memcmp((void *)((long)__s1_00 + param_4),(void *)((long)&local_90 + param_4),
                         0x28 - param_4);
        }
        if (iVar8 < 1) {
          lVar19 = lVar2;
        }
        uVar18 = uVar18 - (uVar18 >> 1);
      } while (1 < uVar18);
    }
    uVar11 = *(ulong *)((long)(local_98 + lVar19 * 0x10) + 8);
    if (uVar11 < param_4) {
      ppuVar10 = &PTR_s__root__cargo_registry_src_index__00afa1e0;
      uVar9 = 0;
      goto LAB_00a1602c;
    }
    __s1 = *(char **)(local_98 + lVar19 * 0x10);
    iVar8 = memcmp(__s1,param_3,param_4);
    cVar1 = 0 < iVar8;
    if (iVar8 < 0) {
      cVar1 = -1;
    }
    if (iVar8 == 0) {
      if (uVar11 < 0x28) {
        ppuVar10 = &PTR_s__root__cargo_registry_src_index__00afa1c8;
        param_4 = 0x28;
        goto LAB_00a1602c;
      }
      iVar8 = memcmp(__s1 + param_4,(void *)((long)&local_90 + param_4),0x28 - param_4);
      cVar1 = 0 < iVar8;
      if (iVar8 < 0) {
        cVar1 = -1;
      }
    }
    if (cVar1 == '\0') {
      if (uVar11 < 0x28) {
        ppuVar10 = &PTR_s__root__cargo_registry_src_index__00afa1f8;
        uVar9 = 0;
        param_4 = 0x28;
LAB_00a1602c:
                    /* try { // try from 00a1602c to 00a16037 has its CatchHandler @ 00a161fc */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail(uVar9,param_4,uVar11,ppuVar10);
      }
      if (*__s1 == '\0') {
        uVar12 = 0;
      }
      else if (__s1[1] == '\0') {
        uVar12 = 1;
      }
      else if (__s1[2] == '\0') {
        uVar12 = 2;
      }
      else if (__s1[3] == '\0') {
        uVar12 = 3;
      }
      else if (__s1[4] == '\0') {
        uVar12 = 4;
      }
      else if (__s1[5] == '\0') {
        uVar12 = 5;
      }
      else if (__s1[6] == '\0') {
        uVar12 = 6;
      }
      else if (__s1[7] == '\0') {
        uVar12 = 7;
      }
      else if (__s1[8] == '\0') {
        uVar12 = 8;
      }
      else if (__s1[9] == '\0') {
        uVar12 = 9;
      }
      else if (__s1[10] == '\0') {
        uVar12 = 10;
      }
      else if (__s1[0xb] == '\0') {
        uVar12 = 0xb;
      }
      else if (__s1[0xc] == '\0') {
        uVar12 = 0xc;
      }
      else if (__s1[0xd] == '\0') {
        uVar12 = 0xd;
      }
      else if (__s1[0xe] == '\0') {
        uVar12 = 0xe;
      }
      else if (__s1[0xf] == '\0') {
        uVar12 = 0xf;
      }
      else if (__s1[0x10] == '\0') {
        uVar12 = 0x10;
      }
      else if (__s1[0x11] == '\0') {
        uVar12 = 0x11;
      }
      else if (__s1[0x12] == '\0') {
        uVar12 = 0x12;
      }
      else if (__s1[0x13] == '\0') {
        uVar12 = 0x13;
      }
      else if (__s1[0x14] == '\0') {
        uVar12 = 0x14;
      }
      else if (__s1[0x15] == '\0') {
        uVar12 = 0x15;
      }
      else if (__s1[0x16] == '\0') {
        uVar12 = 0x16;
      }
      else if (__s1[0x17] == '\0') {
        uVar12 = 0x17;
      }
      else if (__s1[0x18] == '\0') {
        uVar12 = 0x18;
      }
      else if (__s1[0x19] == '\0') {
        uVar12 = 0x19;
      }
      else if (__s1[0x1a] == '\0') {
        uVar12 = 0x1a;
      }
      else if (__s1[0x1b] == '\0') {
        uVar12 = 0x1b;
      }
      else if (__s1[0x1c] == '\0') {
        uVar12 = 0x1c;
      }
      else if (__s1[0x1d] == '\0') {
        uVar12 = 0x1d;
      }
      else if (__s1[0x1e] == '\0') {
        uVar12 = 0x1e;
      }
      else if (__s1[0x1f] == '\0') {
        uVar12 = 0x1f;
      }
      else if (__s1[0x20] == '\0') {
        uVar12 = 0x20;
      }
      else if (__s1[0x21] == '\0') {
        uVar12 = 0x21;
      }
      else if (__s1[0x22] == '\0') {
        uVar12 = 0x22;
      }
      else if (__s1[0x23] == '\0') {
        uVar12 = 0x23;
      }
      else if (__s1[0x24] == '\0') {
        uVar12 = 0x24;
      }
      else if (__s1[0x25] == '\0') {
        uVar12 = 0x25;
      }
      else if (__s1[0x26] == '\0') {
        uVar12 = 0x26;
      }
      else {
        uVar12 = 0x27;
        if (__s1[0x27] != '\0') {
          uVar12 = 0x28;
        }
      }
      if (uVar11 < 0x2c) {
        ppuVar10 = &PTR_s__root__cargo_registry_src_index__00afa210;
        uVar9 = 0x28;
        param_4 = 0x2c;
        goto LAB_00a1602c;
      }
      if (uVar11 < 0x30) {
        ppuVar10 = &PTR_s__root__cargo_registry_src_index__00afa210;
        uVar9 = 0x2c;
        param_4 = 0x30;
        goto LAB_00a1602c;
      }
      if (uVar11 < 0x34) {
        ppuVar10 = &PTR_s__root__cargo_registry_src_index__00afa210;
        uVar9 = 0x30;
        param_4 = 0x34;
        goto LAB_00a1602c;
      }
      uVar20 = *(undefined8 *)(__s1 + 0x2c);
      uVar3 = *(uint *)(__s1 + 0x28);
      *param_1 = __s1;
      param_1[1] = uVar12;
      uVar18 = NEON_rev32(uVar20,1);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      param_1[2] = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
      param_1[4] = uVar18 >> 0x20;
      param_1[3] = uVar18 & 0xffffffff;
      goto joined_r0x00a15d7c;
    }
  }
  *param_1 = 0;
joined_r0x00a15d7c:
  if (uVar4 != 0) {
    free(local_98);
  }
  return;
}


// ===== 00a1621c  android_tzdata::tzdata::parse_tz_int =====

/* WARNING: Unknown calling convention: __rustcall */
/* android_tzdata::tzdata::parse_tz_int */

uint __rustcall android_tzdata::tzdata::parse_tz_int(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if ((param_3 < 0xfffffffffffffffc) && (param_3 + 4 <= param_2)) {
    uVar1 = (*(uint *)(param_1 + param_3) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + param_3) & 0xff00ff) << 8;
    return uVar1 >> 0x10 | uVar1 << 0x10;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (param_3,param_3 + 4,param_2,&PTR_s__root__cargo_registry_src_index__00afa210);
}


// ===== 00a1625c  android_tzdata::tzdata::find_file =====

/* WARNING: Unknown calling convention: __rustcall */
/* android_tzdata::tzdata::find_file */

void __rustcall android_tzdata::tzdata::find_file(undefined4 *param_1)

{
  void *pvVar1;
  uint local_b0 [2];
  long local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  long local_90;
  void *pvStack_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_74;
  ulong local_70;
  long local_68;
  void *local_60;
  undefined8 uStack_58;
  long *local_50;
  code *local_48;
  undefined **local_40;
  code *pcStack_38;
  
  std::env::var::inner(local_b0,"ANDROID_DATA",0xc);
  if ((local_b0[0] & 1) == 0) {
    local_50 = &local_90;
    local_80 = local_98;
    local_48 = FUN_00a16514;
    pvStack_88 = pvStack_a0;
    local_90 = local_a8;
    local_40 = &PTR_s__misc_zoneinfo__00afa238;
    pcStack_38 = FUN_00a16500;
                    /* try { // try from 00a162e0 to 00a162f3 has its CatchHandler @ 00a164e0 */
    alloc::fmt::format::format_inner(&local_68,&DAT_002a43fa,&local_50);
    pvVar1 = local_60;
    local_50 = (long *)0x1b600000000;
    local_48 = (code *)0x1;
                    /* try { // try from 00a16304 to 00a16313 has its CatchHandler @ 00a164c4 */
    <std::fs::[j]::std::fs::OpenOptions>::_open(&local_78,&local_50,local_60,uStack_58);
    if (local_68 != 0) {
      free(pvVar1);
    }
    if ((local_78 & 1) != 0) {
      if ((1 < (local_70 & 3) - 2) && ((local_70 & 3) != 0)) {
        local_48 = (code *)(local_70 - 1);
        local_50 = (long *)CONCAT71(local_50._1_7_,3);
                    /* try { // try from 00a16358 to 00a1635f has its CatchHandler @ 00a164e0 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      pvVar1 = pvStack_88;
      if (local_90 != 0) goto LAB_00a1636c;
      goto LAB_00a16374;
    }
LAB_00a16494:
    *param_1 = 0;
    param_1[1] = local_74;
    if (local_90 != 0) {
      free(pvStack_88);
      return;
    }
  }
  else {
    pvVar1 = pvStack_a0;
    if (0 < local_a8) {
LAB_00a1636c:
      free(pvVar1);
    }
LAB_00a16374:
    std::env::var::inner(local_b0,"ANDROID_ROOT",0xc);
    if ((local_b0[0] & 1) == 0) {
      local_50 = &local_90;
      local_80 = local_98;
      local_48 = FUN_00a16514;
      pvStack_88 = pvStack_a0;
      local_90 = local_a8;
      local_40 = &PTR_s__usr_share_zoneinfo__00afa258;
      pcStack_38 = FUN_00a16500;
                    /* try { // try from 00a163d8 to 00a163eb has its CatchHandler @ 00a164e0 */
      alloc::fmt::format::format_inner(&local_68,&DAT_002a43fa,&local_50);
      local_50 = (long *)0x1b600000000;
      local_48 = (code *)0x1;
                    /* try { // try from 00a163fc to 00a1640b has its CatchHandler @ 00a164c4 */
      <std::fs::[j]::std::fs::OpenOptions>::_open(&local_78,&local_50,local_60,uStack_58);
      if (local_68 != 0) {
        free(local_60);
      }
      if (local_78 != 1) goto LAB_00a16494;
      if ((1 < (local_70 & 3) - 2) && ((local_70 & 3) != 0)) {
        local_48 = (code *)(local_70 - 1);
        local_50 = (long *)CONCAT71(local_50._1_7_,3);
                    /* try { // try from 00a16454 to 00a1645b has its CatchHandler @ 00a164e0 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      pvStack_a0 = pvStack_88;
      if (local_90 != 0) goto LAB_00a16468;
    }
    else if (0 < local_a8) {
LAB_00a16468:
      free(pvStack_a0);
    }
    *(undefined8 *)(param_1 + 2) = 3;
    *param_1 = 1;
  }
  return;
}


// ===== 00a16500  FUN_00a16500 =====

void FUN_00a16500(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a16514  FUN_00a16514 =====

void FUN_00a16514(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00a16528  FUN_00a16528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a16528(undefined8 *param_1)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 == '\x01') {
    <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::new
              (&local_30);
    if (DAT_00b10800 != 0) {
                    /* try { // try from 00a1655c to 00a16567 has its CatchHandler @ 00a1659c */
      <android_system_properties::AndroidSystemProperties_as_core::ops::drop::Drop>::drop
                (&DAT_00b10808);
    }
    DAT_00b10800 = 1;
    uRam0000000000b10810 = uStack_28;
    _DAT_00b10808 = local_30;
    uRam0000000000b10820 = uStack_18;
    _DAT_00b10818 = uStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00afa290);
}


// ===== 00a165bc  FUN_00a165bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a165bc(undefined8 *param_1)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 == '\x01') {
    <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::new
              (&local_30);
    if (DAT_00b10800 != 0) {
                    /* try { // try from 00a165f0 to 00a165fb has its CatchHandler @ 00a16630 */
      <android_system_properties::AndroidSystemProperties_as_core::ops::drop::Drop>::drop
                (&DAT_00b10808);
    }
    DAT_00b10800 = 1;
    uRam0000000000b10810 = uStack_28;
    _DAT_00b10808 = local_30;
    uRam0000000000b10820 = uStack_18;
    _DAT_00b10818 = uStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00afa290);
}


// ===== 00a16650  iana_time_zone::platform::get_timezone_inner =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* iana_time_zone::platform::get_timezone_inner */

void __rustcall iana_time_zone::platform::get_timezone_inner(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_4 [4];
  
  if ((int)DAT_00b0f7d0 == 0) {
    if (DAT_00b10800 != 1) goto LAB_00a16710;
  }
  else {
    local_38 = local_4;
    local_4[0] = 1;
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (&DAT_00b0f7d0,0,&local_38,&DAT_00afa268,
               &PTR_s__root__cargo_registry_src_index__00afa2a8);
    if (DAT_00b10800 != 1) goto LAB_00a16710;
  }
  <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::
  get_from_cstr(&local_38,&DAT_00b10808,"persist.sys.timezone",0x15);
  if (local_38 != (undefined1 *)0xffffffffffffffff) {
    param_1[1] = uStack_30;
    *param_1 = local_38;
    param_1[2] = local_28;
    return;
  }
LAB_00a16710:
  uVar1 = _DAT_0029f540;
  param_1[1] = _UNK_0029f548;
  *param_1 = uVar1;
  return;
}


// ===== 00a1672c  <iana_time_zone::GetTimezoneError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <iana_time_zone::GetTimezoneError as core::fmt::Display>::fmt */

void __rustcall
<iana_time_zone::GetTimezoneError_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  if (*param_1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str
              (param_2,"GetTimezoneError::FailedParsingString",0x25);
    return;
  }
  if (*param_1 == 1) {
    <core::io::error::Error_as_core::fmt::Display>::fmt(param_1 + 1);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"OsError",7);
  return;
}


// ===== 00a16770  FUN_00a16770 =====

void FUN_00a16770(size_t *param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  long local_68;
  void *local_60;
  size_t sStack_58;
  void *local_50;
  size_t sStack_48;
  
  sVar1 = strlen(param_3);
  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(&local_68,param_3,sVar1 + 1);
  if (local_68 == 1) {
    sStack_48 = sStack_58;
    local_50 = local_60;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&DAT_00afa2d8,
               &PTR_s__root__cargo_registry_src_index__00afa2c0);
  }
  if (-1 < (long)sStack_58) {
    if (sStack_58 == 0) {
      __dest = &DAT_00000001;
      sVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(sStack_58,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00a16860;
      memcpy(__dest,local_60,sStack_58);
      sVar1 = *param_1;
    }
    if (sVar1 != 0) {
      free((void *)param_1[1]);
    }
    *param_1 = sStack_58;
    param_1[1] = (size_t)__dest;
    param_1[2] = sStack_58;
    return;
  }
  uVar2 = 0;
LAB_00a16860:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,sStack_58);
}


// ===== 00a1686c  <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::get_from_cstr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::get_from_cstr
    */

void __rustcall
<android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::get_from_cstr
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  void *__ptr;
  code *pcVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((*(code **)(param_2 + 0x10) == (code *)0x0) ||
     (pcVar3 = *(code **)(param_2 + 0x18), pcVar3 == (code *)0x0)) {
    pcVar3 = *(code **)(param_2 + 8);
    if (pcVar3 != (code *)0x0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __ptr = (void *)FUN_004b25a4(0x5c,1);
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,0x5c);
      }
      uVar1 = (*pcVar3)(param_3,__ptr);
      if (0 < (int)uVar1) {
        if (0x5c < uVar1) {
                    /* try { // try from 00a169a0 to 00a169b7 has its CatchHandler @ 00a169cc */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: len as usize <= buffer.capacity()",0x33,
                     &PTR_s__root__cargo_registry_src_index__00afa2f8);
        }
                    /* try { // try from 00a16920 to 00a16933 has its CatchHandler @ 00a169c8 */
        core::str::converts::from_utf8(&local_48,__ptr,(ulong)uVar1);
        if (((uint)local_48 & 1) == 0) {
          param_1[2] = (ulong)uVar1;
          *param_1 = 0x5c;
          param_1[1] = __ptr;
          return;
        }
      }
      *param_1 = 0xffffffffffffffff;
      free(__ptr);
      return;
    }
  }
  else {
    lVar2 = (**(code **)(param_2 + 0x10))(param_3);
    if (lVar2 != 0) {
      local_48 = 0;
      uStack_40 = 1;
      local_38 = 0;
      (*pcVar3)(lVar2,FUN_00a16770,&local_48);
      param_1[1] = uStack_40;
      *param_1 = local_48;
      param_1[2] = local_38;
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00a169e8  <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::get */

void __rustcall
<android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::get
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_50;
  undefined1 *puStack_48;
  long local_40;
  
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_50,param_3,param_4);
  if (local_50 < 1) {
    if (local_50 == -1) {
                    /* try { // try from 00a16a54 to 00a16a67 has its CatchHandler @ 00a16a94 */
      get_from_cstr(param_1,param_2,puStack_48);
      *puStack_48 = 0;
      if (local_40 == 0) {
        return;
      }
      free(puStack_48);
      return;
    }
  }
  else {
    free(puStack_48);
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00a16ab8  <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::new */

void __rustcall
<android_system_properties::[0]::android_system_properties::AndroidSystemProperties>::new
          (long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = dlopen("libc.so",4);
  if (lVar1 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  lVar2 = dlsym(lVar1,"__system_property_read_callback");
  lVar3 = dlsym(lVar1,"__system_property_find");
  if ((lVar2 != 0) && (lVar3 != 0)) {
    *param_1 = lVar1;
    param_1[1] = 0;
    param_1[2] = lVar3;
    param_1[3] = lVar2;
    return;
  }
  lVar4 = dlsym(lVar1,"__system_property_get");
  *param_1 = lVar1;
  param_1[1] = lVar4;
  param_1[2] = lVar3;
  param_1[3] = lVar2;
  return;
}


// ===== 00a16b68  <android_system_properties::AndroidSystemProperties_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <android_system_properties::AndroidSystemProperties as core::ops::drop::Drop>::drop */

void __rustcall
<android_system_properties::AndroidSystemProperties_as_core::ops::drop::Drop>::drop(long *param_1)

{
  if (*param_1 != 0) {
    dlclose();
    return;
  }
  return;
}


// ===== 00a16b78  FUN_00a16b78 =====

void FUN_00a16b78(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1 + 1;
  if (*(char *)*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afa350);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a16bd4  FUN_00a16bd4 =====

void FUN_00a16bd4(undefined8 *param_1,long param_2)

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


// ===== 00a16bf0  FUN_00a16bf0 =====

void FUN_00a16bf0(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Utf8Error",9,"valid_up_to",0xb,param_1,&DAT_00afa310,"error_len",9,&local_18,
             &DAT_00afa330);
  return;
}


// ===== 00a16c60  FUN_00a16c60 =====

void FUN_00a16c60(undefined8 param_1,long param_2)

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


// ===== 00a16c78  FUN_00a16c78 =====

void FUN_00a16c78(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00a16c90  <serde::format::serde::format::Buf>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::format::serde::format::Buf>::as_str */

undefined8 __rustcall <serde::format::serde::format::Buf>::as_str(undefined8 *param_1)

{
  if ((ulong)param_1[2] <= (ulong)param_1[1]) {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,param_1[2],param_1[1],&PTR_s__root__cargo_registry_src_index__00afa370);
}


// ===== 00a16cbc  <serde::__private::de::content::serde::__private::de::content::Content>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::de::content::serde::__private::de::content::Content>::as_str */

undefined1  [16] __rustcall
<serde::__private::de::content::serde::__private::de::content::Content>::as_str
          (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  
  bVar1 = *param_1;
  uVar2 = 0;
  if (bVar1 < 0xe) {
    if (bVar1 == 0xc) {
      return *(undefined1 (*) [16])(param_1 + 0x10);
    }
    if (bVar1 == 0xd) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      param_2 = *(undefined8 *)(param_1 + 0x10);
    }
LAB_00a16cf0:
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
  if (bVar1 == 0xe) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    if (bVar1 != 0xf) goto LAB_00a16cf0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  core::str::converts::from_utf8(local_28,uVar2,uVar3);
  uVar2 = 0;
  if (local_28[0] == 0) {
    uVar2 = local_20;
  }
  auVar5._8_8_ = uStack_18;
  auVar5._0_8_ = uVar2;
  return auVar5;
}


// ===== 00a16d4c  serde::__private::de::flat_map_take_entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde::__private::de::flat_map_take_entry */

void __rustcall
serde::__private::de::flat_map_take_entry(byte *param_1,byte *param_2,long param_3,long param_4)

{
  byte bVar1;
  void *__s2;
  size_t __n;
  int iVar2;
  size_t *psVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_58 [2];
  void *local_50;
  size_t sStack_48;
  
  bVar1 = *param_2;
  if (bVar1 != 0xff) {
    if (bVar1 < 0xe) {
      if (bVar1 == 0xc) {
        __s2 = *(void **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 0x18);
      }
      else {
        if (bVar1 != 0xd) goto LAB_00a16d78;
        __s2 = *(void **)(param_2 + 8);
        __n = *(size_t *)(param_2 + 0x10);
      }
    }
    else {
      if (bVar1 == 0xe) {
        core::str::converts::from_utf8
                  (local_58,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
      }
      else {
        if (bVar1 != 0xf) goto LAB_00a16d78;
        core::str::converts::from_utf8
                  (local_58,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      }
      __s2 = local_50;
      __n = sStack_48;
      if ((local_58[0] & 1) != 0) goto LAB_00a16d78;
    }
    if (param_4 != 0) {
      param_4 = param_4 << 4;
      psVar3 = (size_t *)(param_3 + 8);
      do {
        if ((*psVar3 == __n) && (iVar2 = memcmp((void *)psVar3[-1],__s2,__n), iVar2 == 0)) {
          uVar4 = *(undefined8 *)param_2;
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          uVar5 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)param_1 = uVar4;
          *(undefined8 *)(param_1 + 0x18) = uVar6;
          *(undefined8 *)(param_1 + 0x10) = uVar5;
          uVar4 = *(undefined8 *)(param_2 + 0x20);
          uVar6 = *(undefined8 *)(param_2 + 0x38);
          uVar5 = *(undefined8 *)(param_2 + 0x30);
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(param_1 + 0x20) = uVar4;
          *(undefined8 *)(param_1 + 0x38) = uVar6;
          *(undefined8 *)(param_1 + 0x30) = uVar5;
          param_1 = param_2;
          break;
        }
        param_4 = param_4 + -0x10;
        psVar3 = psVar3 + 2;
      } while (param_4 != 0);
    }
  }
LAB_00a16d78:
  *param_1 = 0xff;
  return;
}


// ===== 00a16e74  serde::__private::string::from_utf8_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde::__private::string::from_utf8_lossy */

void __rustcall serde::__private::string::from_utf8_lossy(void)

{
  (*(code *)PTR_from_utf8_lossy_00b02988)();
  return;
}


// ===== 00a16e78  <serde::de::Unexpected_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::Unexpected as core::fmt::Display>::fmt */

void __rustcall <serde::de::Unexpected_as_core::fmt::Display>::fmt(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a16e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00a16ea0 + (ulong)(byte)""[*param_1] * 4))();
  return;
}


// ===== 00a17144  <serde::de::ignored_any::IgnoredAny_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::ignored_any::IgnoredAny as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::ignored_any::IgnoredAny_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"anything at all",0xf);
  return;
}


// ===== 00a17158  <serde::de::impls::UnitVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::UnitVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::UnitVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"unit",4);
  return;
}


// ===== 00a1716c  <serde::__private::ser::Unsupported_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::ser::Unsupported as core::fmt::Display>::fmt */

void __rustcall
<serde::__private::ser::Unsupported_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a17188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00a1718c + (ulong)(byte)(&DAT_003815c1)[*param_1] * 4))(param_2);
  return;
}


// ===== 00a1722c  <serde::de::impls::StringVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::StringVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::StringVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a18c8,8);
  return;
}


// ===== 00a17240  <serde::__private::de::borrow_cow_bytes::CowBytesVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::de::borrow_cow_bytes::CowBytesVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::__private::de::borrow_cow_bytes::CowBytesVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"a byte arrayan optionala sequencea tuplea tuple struct",0xc);
  return;
}


// ===== 00a17254  <<serde::de::impls::range_from::Field_as_serde::de::Deserialize>::deserialize::FieldVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde::de::impls::range_from::Field as serde::de::Deserialize>::deserialize::FieldVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<serde::de::impls::range_from::Field_as_serde::de::Deserialize>::deserialize::FieldVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`start`",7);
  return;
}


// ===== 00a17268  <<serde::de::impls::range::Field_as_serde::de::Deserialize>::deserialize::FieldVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde::de::impls::range::Field as serde::de::Deserialize>::deserialize::FieldVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<serde::de::impls::range::Field_as_serde::de::Deserialize>::deserialize::FieldVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0029fbe0,0x10);
  return;
}


// ===== 00a1727c  <<serde::de::impls::range_to::Field_as_serde::de::Deserialize>::deserialize::FieldVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde::de::impls::range_to::Field as serde::de::Deserialize>::deserialize::FieldVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<serde::de::impls::range_to::Field_as_serde::de::Deserialize>::deserialize::FieldVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`end`",5);
  return;
}


// ===== 00a17290  <<<core[bcece726f298455b]::ops::range::Bound<_>as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<<core[bcece726f298455b]::ops::range::Bound<_> as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<<core[bcece726f298455b]::ops::range::Bound<_>as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"`Unbounded`, `Included` or `Excluded`",0x25);
  return;
}


// ===== 00a172a4  <<<core[bcece726f298455b]::result::Result<_,_>as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<<core[bcece726f298455b]::result::Result<_, _> as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<<core[bcece726f298455b]::result::Result<_,_>as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`Ok` or `Err`",0xd);
  return;
}


// ===== 00a172b8  <<<core[bcece726f298455b]::time::Duration_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<<core[bcece726f298455b]::time::Duration as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<<core[bcece726f298455b]::time::Duration_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`secs` or `nanos`",0x11);
  return;
}


// ===== 00a172cc  <<<std[17aff9129faa4dc5]::time::SystemTime_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<<std[17aff9129faa4dc5]::time::SystemTime as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<<std[17aff9129faa4dc5]::time::SystemTime_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::Field_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"`secs_since_epoch` or `nanos_since_epoch`",0x29);
  return;
}


// ===== 00a172e0  <<u8_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u8 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<u8_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"u8",2);
  return;
}


// ===== 00a172f4  <<core::num::nonzero::NonZero<u16>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u16> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u16>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u16",0xd);
  return;
}


// ===== 00a17308  <<core::num::saturating::Saturating<i128>as_serde::de::Deserialize>::deserialize::SaturatingVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::saturating::Saturating<i128> as
   serde::de::Deserialize>::deserialize::SaturatingVisitor as serde::de::Visitor>::expecting */

void __rustcall
<<core::num::saturating::Saturating<i128>as_serde::de::Deserialize>::deserialize::SaturatingVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"integer with support for saturating semantics",0x2d);
  return;
}


// ===== 00a1731c  <<u16_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u16 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<u16_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"u16",3);
  return;
}


// ===== 00a17330  <<core::num::nonzero::NonZero<u32>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u32> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u32>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u32",0xd);
  return;
}


// ===== 00a17344  <<u32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u32 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<u32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"u32",3);
  return;
}


// ===== 00a17358  <<core::num::nonzero::NonZero<u64>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u64> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u64>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u64",0xd);
  return;
}


// ===== 00a1736c  <<u64_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u64 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<u64_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"u64",3);
  return;
}


// ===== 00a17380  <<core::num::nonzero::NonZero<usize>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<usize> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<usize>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero usize",0xf);
  return;
}


// ===== 00a17394  <<usize_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<usize as serde::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<usize_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"usize",5);
  return;
}


// ===== 00a173a8  <<f32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<f32 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<f32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"f32",3);
  return;
}


// ===== 00a173bc  <<f64_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<f64 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<f64_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"f64",3);
  return;
}


// ===== 00a173d0  <<core::num::nonzero::NonZero<i128>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i128> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i128>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i128",0xe);
  return;
}


// ===== 00a173e4  <<i128_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i128 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<i128_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd25c,4);
  return;
}


// ===== 00a173f8  <<core::num::nonzero::NonZero<u128>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u128> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u128>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u128",0xe);
  return;
}


// ===== 00a1740c  <<u128_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u128 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<u128_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd01c,4);
  return;
}


// ===== 00a17420  <<serde::de::impls::OsStringKind_as_serde::de::Deserialize>::deserialize::KindVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde::de::impls::OsStringKind as serde::de::Deserialize>::deserialize::KindVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<serde::de::impls::OsStringKind_as_serde::de::Deserialize>::deserialize::KindVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`Unix` or `Windows`",0x13);
  return;
}


// ===== 00a17434  <<serde[52fff5c06b43f145]::de::WithDecimalPoint_as_core[bcece726f298455b]::fmt::Display>::fmt::LookForDecimalPoint_as_core[bcece726f298455b]::fmt::Write>::write_char =====

/* <<serde[52fff5c06b43f145]::de::WithDecimalPoint as
   core[bcece726f298455b]::fmt::Display>::fmt::LookForDecimalPoint as
   core[bcece726f298455b]::fmt::Write>::write_char */

void <<serde[52fff5c06b43f145]::de::WithDecimalPoint_as_core[bcece726f298455b]::fmt::Display>::fmt::LookForDecimalPoint_as_core[bcece726f298455b]::fmt::Write>
     ::write_char(undefined8 *param_1,int param_2)

{
  *(byte *)(param_1 + 1) = param_2 == 0x2e | *(byte *)(param_1 + 1);
  <core::fmt::Formatter_as_core::fmt::Write>::write_char(*param_1);
  return;
}


// ===== 00a17454  <<serde[52fff5c06b43f145]::de::WithDecimalPoint_as_core[bcece726f298455b]::fmt::Display>::fmt::LookForDecimalPoint_as_core[bcece726f298455b]::fmt::Write>::write_str =====

/* <<serde[52fff5c06b43f145]::de::WithDecimalPoint as
   core[bcece726f298455b]::fmt::Display>::fmt::LookForDecimalPoint as
   core[bcece726f298455b]::fmt::Write>::write_str */

void <<serde[52fff5c06b43f145]::de::WithDecimalPoint_as_core[bcece726f298455b]::fmt::Display>::fmt::LookForDecimalPoint_as_core[bcece726f298455b]::fmt::Write>
     ::write_str(undefined8 *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      bVar2 = false;
    }
    else {
      pcVar4 = param_2;
      lVar3 = param_3 - 1;
      do {
        bVar2 = *pcVar4 == '.';
        if (bVar2) break;
        bVar1 = lVar3 != 0;
        pcVar4 = pcVar4 + 1;
        lVar3 = lVar3 + -1;
      } while (bVar1);
    }
  }
  else {
    lVar3 = core::slice::memchr::memchr_aligned(0x2e);
    bVar2 = lVar3 == 1;
  }
  *(byte *)(param_1 + 1) = bVar2 | *(byte *)(param_1 + 1);
  <core::fmt::[a]::core::fmt::Formatter>::write_str(*param_1,param_2,param_3);
  return;
}


// ===== 00a174e4  <<core::num::nonzero::NonZero<i8>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i8> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i8>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i8",0xc);
  return;
}


// ===== 00a174f8  <<i8_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i8 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<i8_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"i8",2);
  return;
}


// ===== 00a1750c  <<core::num::nonzero::NonZero<i16>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i16> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i16>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i16",0xd);
  return;
}


// ===== 00a17520  <<i16_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i16 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<i16_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"i16",3);
  return;
}


// ===== 00a17534  <<core::num::nonzero::NonZero<i32>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i32> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i32>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i32",0xd);
  return;
}


// ===== 00a17548  <<i32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i32 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<i32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"i32",3);
  return;
}


// ===== 00a1755c  <<core::num::nonzero::NonZero<i64>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i64> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i64>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i64",0xd);
  return;
}


// ===== 00a17570  <<i64_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i64 as serde::de::Deserialize>::deserialize::PrimitiveVisitor as serde::de::Visitor>::expecting
    */

void __rustcall
<<i64_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"i64",3);
  return;
}


// ===== 00a17584  <<core::num::nonzero::NonZero<isize>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<isize> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<isize>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero isize",0xf);
  return;
}


// ===== 00a17598  <<isize_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<isize as serde::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<isize_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"isize",5);
  return;
}


// ===== 00a175ac  <<core::num::nonzero::NonZero<u8>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u8> as serde::de::Deserialize>::deserialize::NonZeroVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u8>as_serde::de::Deserialize>::deserialize::NonZeroVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u8",0xc);
  return;
}


// ===== 00a175c0  <<<core::net::socket_addr::SocketAddr_as_serde::de::Deserialize>::deserialize::SocketAddrKind_as{backref_28}>::deserialize::KindVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<<core::net::socket_addr::SocketAddr as serde::de::Deserialize>::deserialize::SocketAddrKind as
   {backref 28}>::deserialize::KindVisitor as serde::de::Visitor>::expecting */

void __rustcall
<<<core::net::socket_addr::SocketAddr_as_serde::de::Deserialize>::deserialize::SocketAddrKind_as{backref_28}>::deserialize::KindVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`V4` or `V6`",0xc);
  return;
}


// ===== 00a175d4  <<core::net::ip_addr::IpAddr_as_serde::de::Deserialize>::deserialize::EnumVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::net::ip_addr::IpAddr as serde::de::Deserialize>::deserialize::EnumVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::net::ip_addr::IpAddr_as_serde::de::Deserialize>::deserialize::EnumVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a1a58,8);
  return;
}


// ===== 00a175e8  <<core::net::socket_addr::SocketAddr_as_serde::de::Deserialize>::deserialize::EnumVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::net::socket_addr::SocketAddr as serde::de::Deserialize>::deserialize::EnumVisitor as
   serde::de::Visitor>::expecting */

void __rustcall
<<core::net::socket_addr::SocketAddr_as_serde::de::Deserialize>::deserialize::EnumVisitor_as_serde::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a SocketAddr",0xc);
  return;
}


// ===== 00a175fc  <&str_as_serde::de::Expected>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as serde::de::Expected>::fmt */

void __rustcall <&str_as_serde::de::Expected>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,*param_1,param_1[1]);
  return;
}


// ===== 00a1760c  <serde::de::impls::BoolVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::BoolVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::BoolVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a booleanan integera floata char",9);
  return;
}


// ===== 00a17620  <serde::__private::doc::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::doc::Error as core::fmt::Display>::fmt */

void __rustcall <serde::__private::doc::Error_as_core::fmt::Display>::fmt(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic("not implemented",0xf,&PTR_s__root__cargo_registry_src_index__00afa3f8);
}


// ===== 00a17640  <dyn_Trait<Assoc=X>+serde::de::Expected_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + serde::de::Expected as core::fmt::Display>::fmt */

void __rustcall
<dyn_Trait<Assoc=X>+serde::de::Expected_as_core::fmt::Display>::fmt
          (undefined8 param_1,long param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00a17648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x18))(param_1,param_3);
  return;
}


// ===== 00a1764c  <serde::de::value::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::value::Error as core::fmt::Debug>::fmt */

void __rustcall
<serde::de::value::Error_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"Error",5);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&PTR_FUN_00afa410);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_38);
  return;
}


// ===== 00a176a8  <serde::de::value::ExpectedInMap_as_serde::de::Expected>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::value::ExpectedInMap as serde::de::Expected>::fmt */

void __rustcall
<serde::de::value::ExpectedInMap_as_serde::de::Expected>::fmt(long *param_1,undefined8 *param_2)

{
  long *local_20;
  undefined *puStack_18;
  
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"1 element in map",0x10);
    return;
  }
  puStack_18 = PTR_fmt_00b00c10;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002a5004,&local_20);
  return;
}


// ===== 00a17708  FUN_00a17708 =====

void FUN_00a17708(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a1771c  FUN_00a1771c =====

void FUN_00a1771c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 00a17730  FUN_00a17730 =====

void FUN_00a17730(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a17744  <serde::de::impls::CharVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::CharVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::CharVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a character",0xb);
  return;
}


// ===== 00a17758  <serde::__private::de::content::ContentVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::de::content::ContentVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::__private::de::content::ContentVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"any value",9);
  return;
}


// ===== 00a1776c  <serde::de::impls::StringInPlaceVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::StringInPlaceVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::StringInPlaceVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a18c8,8);
  return;
}


// ===== 00a17780  <serde::de::OneOf_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::OneOf as core::fmt::Display>::fmt */

undefined8 __rustcall
<serde::de::OneOf_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *local_70;
  code *pcStack_68;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  lVar5 = param_1[1];
  if (lVar5 == 1) {
    local_70 = (long *)*param_1;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_002b4931;
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::panicking::begin_panic<&str>
                  ("explicit panic",0xe,&PTR_s__root__cargo_registry_src_index__00afa430);
      }
      uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"one of ",7);
      if ((uVar1 & 1) == 0) {
        lVar6 = *param_1;
        pcStack_68 = FUN_00a1771c;
        local_70 = &local_38;
        local_38 = lVar6;
        uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_002b4931,&local_70);
        if ((uVar1 & 1) == 0) {
          lVar5 = lVar5 * 0x10 + -0x10;
          while( true ) {
            lVar6 = lVar6 + 0x10;
            local_38 = lVar6;
            uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,", ",2);
            if ((uVar1 & 1) != 0) break;
            pcStack_68 = FUN_00a1771c;
            local_70 = &local_38;
            uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_002b4931,&local_70);
            if ((uVar1 & 1) != 0) {
              return 1;
            }
            lVar5 = lVar5 + -0x10;
            if (lVar5 == 0) {
              return 0;
            }
          }
        }
      }
      return 1;
    }
    local_70 = (long *)*param_1;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_002ac16f;
    local_60 = local_70 + 2;
    pcStack_58 = FUN_00a17730;
  }
  pcStack_68 = FUN_00a17730;
  uVar2 = core::fmt::write(uVar2,uVar3,puVar4,&local_70);
  return uVar2;
}


// ===== 00a178ec  <serde::__private::de::content::TagOrContentVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::__private::de::content::TagOrContentVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::__private::de::content::TagOrContentVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_00a17730;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002b807d,&local_20);
  return;
}


// ===== 00a17928  <serde::de::WithDecimalPoint_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::WithDecimalPoint as core::fmt::Display>::fmt */

undefined8 __rustcall
<serde::de::WithDecimalPoint_as_core::fmt::Display>::fmt(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *local_40;
  byte local_38;
  ulong *local_30;
  undefined *puStack_28;
  
  local_30 = param_1;
  if (0x7fefffffffffffff < (*param_1 & 0x7fffffffffffffff)) {
    puStack_28 = PTR_fmt_00b00c80;
    uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_30);
    return uVar1;
  }
  local_38 = 0;
  puStack_28 = PTR_fmt_00b00c80;
  local_40 = param_2;
  uVar2 = core::fmt::write(&local_40,&DAT_00afa448,&DAT_002ab692,&local_30);
  if (((uVar2 & 1) == 0) &&
     (((local_38 & 1) != 0 ||
      (uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,".0",2), (uVar2 & 1) == 0))
     )) {
    return 0;
  }
  return 1;
}


// ===== 00a17a00  <serde::de::impls::StrVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::StrVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::StrVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a borrowed string",0x11);
  return;
}


// ===== 00a17a14  <serde::de::impls::BytesVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::impls::BytesVisitor as serde::de::Visitor>::expecting */

void __rustcall
<serde::de::impls::BytesVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a borrowed byte array",0x15);
  return;
}


// ===== 00a17a28  <serde::de::value::ExpectedInSeq_as_serde::de::Expected>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::de::value::ExpectedInSeq as serde::de::Expected>::fmt */

void __rustcall
<serde::de::value::ExpectedInSeq_as_serde::de::Expected>::fmt(long *param_1,undefined8 *param_2)

{
  long *local_20;
  undefined *puStack_18;
  
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"1 element in sequence",0x15);
    return;
  }
  puStack_18 = PTR_fmt_00b00c10;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab458,&local_20);
  return;
}


// ===== 00a17a88  <serde::format::Buf_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::format::Buf as core::fmt::Write>::write_str */

bool __rustcall
<serde::format::Buf_as_core::fmt::Write>::write_str(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[2];
  uVar3 = param_1[1];
  uVar1 = uVar2 + param_3;
  if (uVar1 <= uVar3) {
    if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar2,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00afa478);
    }
    memcpy((void *)(*param_1 + uVar2),param_2,param_3);
    param_1[2] = uVar1;
  }
  return uVar3 < uVar1;
}


// ===== 00a17af8  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_i8 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i8
          (undefined8 param_1,undefined1 param_2)

{
  undefined1 local_14 [4];
  
  local_14[0] = param_2;
  <i8_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 00a17b24  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_u8 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u8
          (undefined8 param_1,undefined1 param_2)

{
  undefined1 local_14 [4];
  
  local_14[0] = param_2;
  <u8_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 00a17b50  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_f32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_f32 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_f32
          (undefined4 param_1,undefined8 param_2)

{
  undefined4 local_14;
  
  local_14 = param_1;
  <f32_as_core::fmt::Display>::fmt(&local_14,param_2);
  return;
}


// ===== 00a17b78  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_f64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_f64 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_f64
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <f64_as_core::fmt::Display>::fmt(&local_18,param_2);
  return;
}


// ===== 00a17ba0  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_i16 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i16
          (undefined8 param_1,undefined2 param_2)

{
  undefined2 local_14 [2];
  
  local_14[0] = param_2;
  <i16_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 00a17bcc  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_i32 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i32
          (undefined8 param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  <i32_as_core::fmt::Display>::fmt(&local_14,param_1);
  return;
}


// ===== 00a17bf8  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_i64 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_i64
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  <i64_as_core::fmt::Display>::fmt(&local_18,param_1);
  return;
}


// ===== 00a17c24  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_str */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_str
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  <str_as_core::fmt::Display>::fmt(param_2,param_3,param_1);
  return;
}


// ===== 00a17c38  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_u16 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u16
          (undefined8 param_1,undefined2 param_2)

{
  undefined2 local_14 [2];
  
  local_14[0] = param_2;
  <u16_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 00a17c64  <&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde::ser::Serializer>::serialize_u32 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde::ser::Serializer>::serialize_u32
          (undefined8 param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  <u32_as_core::fmt::Display>::fmt(&local_14,param_1);
  return;
}


