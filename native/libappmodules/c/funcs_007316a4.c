// ===== 007316a4  <core[188d2c0002da36d0]::io::error::Error_as_core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::ffi::c_str::NulError>>::from =====

/* <core[188d2c0002da36d0]::io::error::Error as
   core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::ffi::c_str::NulError>>::from */

undefined **
<core[188d2c0002da36d0]::io::error::Error_as_core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::ffi::c_str::NulError>>
::from(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
  }
  return &PTR_s_data_provided_contains_a_nul_byt_0097b3e8;
}


// ===== 007316d0  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as <alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl */

void __rustcall
<&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
          (long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_58;
  void *pvStack_50;
  ulong local_48;
  
  lVar1 = param_3 + 1;
  if (lVar1 < 0) {
    uVar4 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar4 = 1;
    __dest = (void *)__rustc::__rust_alloc(lVar1,1);
    if (__dest != (void *)0x0) {
      if (param_3 == 0) {
        uVar3 = 0;
        lVar2 = 0;
      }
      else {
        memcpy(__dest,param_2,param_3);
        if (param_3 < 0x10) {
          uVar3 = 0;
          lVar2 = 1;
          do {
            if (*(char *)((long)param_2 + uVar3) == '\0') goto LAB_00731778;
            uVar3 = uVar3 + 1;
          } while (param_3 != uVar3);
          lVar2 = 0;
          uVar3 = param_3;
        }
        else {
                    /* try { // try from 00731768 to 00731777 has its CatchHandler @ 007317e4 */
          auVar5 = core::slice::memchr::memchr_aligned(0,param_2,param_3);
          uVar3 = auVar5._8_8_;
          lVar2 = auVar5._0_8_;
        }
      }
LAB_00731778:
      if (lVar2 == 1) {
        *param_1 = lVar1;
        param_1[1] = (long)__dest;
        param_1[2] = param_3;
        param_1[3] = uVar3;
        return;
      }
      local_58 = lVar1;
      pvStack_50 = __dest;
      local_48 = param_3;
      auVar5 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked(&local_58);
      *(undefined1 (*) [16])(param_1 + 1) = auVar5;
      *param_1 = -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,lVar1);
}


// ===== 00731800  <<alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send>as_core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::string::String>>::from::StringError_as_core[188d2c0002da36d0]::fmt::Display>::fmt =====

/* <<alloc[cc0d62b833a55794]::boxed::Box<dyn core[188d2c0002da36d0]::error::Error +
   core[188d2c0002da36d0]::marker::Sync + core[188d2c0002da36d0]::marker::Send> as
   core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::string::String>>::from::StringError
   as core[188d2c0002da36d0]::fmt::Display>::fmt */

void <<alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send>as_core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::string::String>>::from::StringError_as_core[188d2c0002da36d0]::fmt::Display>
     ::fmt(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00731814  FUN_00731814 =====

void FUN_00731814(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"LayoutErrordata provided is not nul terminated",0xb);
  return;
}


// ===== 00731828  <alloc::boxed::Box<str>as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<str> as core::clone::Clone>::clone */

undefined1  [16] __rustcall
<alloc::boxed::Box<str>as_core::clone::Clone>::clone(undefined8 *param_1)

{
  void *__src;
  size_t __n;
  void *__dest;
  undefined1 auVar1 [16];
  
  __src = (void *)*param_1;
  __n = param_1[1];
  if (__n == 0) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(__n,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,__n);
    }
  }
  memcpy(__dest,__src,__n);
  auVar1._8_8_ = __n;
  auVar1._0_8_ = __dest;
  return auVar1;
}


// ===== 00731890  <alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error>as_core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::string::String>>::from =====

/* <alloc[cc0d62b833a55794]::boxed::Box<dyn core[188d2c0002da36d0]::error::Error> as
   core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::string::String>>::from */

void <alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error>as_core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::string::String>>
     ::from(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)__rustc::__rust_alloc(0x18,8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    return;
  }
                    /* try { // try from 007318dc to 007318e7 has its CatchHandler @ 007318ec */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 0073190c  <alloc::borrow::Cow<str>as_core::ops::arith::AddAssign<&str>>::add_assign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::borrow::Cow<str> as core::ops::arith::AddAssign<&str>>::add_assign */

void __rustcall
<alloc::borrow::Cow<str>as_core::ops::arith::AddAssign<&str>>::add_assign
          (ulong *param_1,void *param_2,ulong param_3)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  void *__src;
  undefined8 uVar4;
  ulong local_68;
  ulong uStack_60;
  size_t local_58;
  
  __n = param_1[2];
  if (__n == 0) {
    if (0 < (long)*param_1) {
      __rustc::__rust_dealloc(param_1[1],*param_1,1);
    }
    *param_1 = 0xffffffffffffffff;
    param_1[1] = (ulong)param_2;
    goto LAB_00731a8c;
  }
  if (param_3 == 0) {
    return;
  }
  uVar2 = *param_1;
  if (*param_1 == 0xffffffffffffffff) {
    uVar2 = __n + param_3;
    if ((long)uVar2 < 0) {
      uVar4 = 0;
LAB_00731ac8:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar4,uVar2);
    }
    pvVar3 = (void *)param_1[1];
    local_68 = uVar2;
    if (uVar2 == 0) {
      uStack_60 = 1;
      if (__n == 0) goto LAB_00731984;
LAB_00731a44:
                    /* try { // try from 00731a44 to 00731a53 has its CatchHandler @ 00731ae0 */
      local_58 = 0;
      FUN_0072b438(&local_68,0,__n);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 1;
      uStack_60 = __rustc::__rust_alloc(uVar2,1);
      if (uStack_60 == 0) goto LAB_00731ac8;
      if (uVar2 < __n) goto LAB_00731a44;
LAB_00731984:
      local_58 = 0;
    }
    sVar1 = local_58;
    memcpy((void *)(uStack_60 + local_58),pvVar3,__n);
    __n = sVar1 + __n;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[2] = __n;
    uVar2 = *param_1;
    local_58 = __n;
    if (*param_1 == 0xffffffffffffffff) {
      if (__n == 0) {
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 1;
      }
      else {
        __src = (void *)param_1[1];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pvVar3 = (void *)__rustc::__rust_alloc(__n,1);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,__n);
        }
        memcpy(pvVar3,__src,__n);
        *param_1 = __n;
        param_1[1] = (ulong)pvVar3;
        uVar2 = __n;
        if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("internal error: entered unreachable code",0x28,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b248);
        }
      }
    }
  }
  if (uVar2 - __n < param_3) {
    FUN_0072b438(param_1,__n,param_3);
    __n = param_1[2];
  }
  memcpy((void *)(param_1[1] + __n),param_2,param_3);
  param_3 = __n + param_3;
LAB_00731a8c:
  param_1[2] = param_3;
  return;
}


// ===== 00731b00  <[&str]as_alloc::string::SpecExtendStr>::spec_extend_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[&str] as alloc::string::SpecExtendStr>::spec_extend_into */

void __rustcall
<[&str]as_alloc::string::SpecExtendStr>::spec_extend_into
          (undefined8 *param_1,long param_2,long *param_3)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar7;
  void *__dest;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
    lVar7 = param_3[2];
  }
  else {
    lVar1 = param_2 * 2;
    uVar4 = 0;
    puVar3 = param_1 + 1;
    do {
      bVar2 = CARRY8(uVar4,*puVar3);
      uVar4 = uVar4 + *puVar3;
      if (bVar2) {
        uVar4 = 0xffffffffffffffff;
      }
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 2;
    } while (param_2 != 0);
    lVar7 = param_3[2];
    if ((ulong)(*param_3 - lVar7) < uVar4) {
      FUN_0072b438(param_3,lVar7,uVar4);
      lVar7 = param_3[2];
    }
    __dest = (void *)(param_3[1] + lVar7);
    puVar5 = param_1;
    do {
      puVar6 = puVar5 + 2;
      __n = puVar5[1];
      memcpy(__dest,(void *)*puVar5,__n);
      __dest = (void *)((long)__dest + __n);
      puVar5 = puVar6;
    } while (puVar6 != param_1 + lVar1);
  }
  param_3[2] = uVar4 + lVar7;
  return;
}


// ===== 00731bcc  <alloc::borrow::Cow<str>as_core::ops::arith::AddAssign>::add_assign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::borrow::Cow<str> as core::ops::arith::AddAssign>::add_assign */

void __rustcall
<alloc::borrow::Cow<str>as_core::ops::arith::AddAssign>::add_assign(ulong *param_1,ulong *param_2)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  void *__src;
  void *pvVar5;
  undefined8 uVar6;
  ulong local_68;
  ulong uStack_60;
  size_t local_58;
  
  __n = param_1[2];
  if (__n == 0) {
    if (0 < (long)*param_1) {
      __rustc::__rust_dealloc(param_1[1],*param_1,1);
    }
    uVar3 = *param_2;
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = uVar4;
    return;
  }
  uVar4 = param_2[2];
  if (uVar4 == 0) goto LAB_00731d6c;
  uVar3 = *param_1;
  if (uVar3 == 0xffffffffffffffff) {
    uVar3 = uVar4 + __n;
    if ((long)uVar3 < 0) {
      uVar6 = 0;
      goto LAB_00731dd4;
    }
    pvVar5 = (void *)param_1[1];
    if (uVar3 == 0) {
      uStack_60 = 1;
      if (__n == 0) goto LAB_00731c78;
LAB_00731d1c:
                    /* try { // try from 00731d1c to 00731d2b has its CatchHandler @ 00731de4 */
      local_58 = 0;
      local_68 = uVar3;
      FUN_0072b438(&local_68,0,__n);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 1;
      uVar2 = __rustc::__rust_alloc(uVar3,1);
      if (uVar2 == 0) goto LAB_00731dd4;
      uStack_60 = uVar2;
      if (uVar3 < __n) goto LAB_00731d1c;
LAB_00731c78:
      local_58 = 0;
      local_68 = uVar3;
    }
    sVar1 = local_58;
    memcpy((void *)(uStack_60 + local_58),pvVar5,__n);
    __n = sVar1 + __n;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[2] = __n;
    uVar3 = *param_1;
    local_58 = __n;
    if (*param_1 == 0xffffffffffffffff) {
      if (__n == 0) {
        uVar3 = 0;
        *param_1 = 0;
        param_1[1] = 1;
      }
      else {
        __src = (void *)param_1[1];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar6 = 1;
        pvVar5 = (void *)__rustc::__rust_alloc(__n,1);
        uVar3 = __n;
        if (pvVar5 == (void *)0x0) {
LAB_00731dd4:
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar6,uVar3);
        }
        memcpy(pvVar5,__src,__n);
        *param_1 = __n;
        param_1[1] = (ulong)pvVar5;
        if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00731cec to 00731d03 has its CatchHandler @ 00731e20 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("internal error: entered unreachable code",0x28,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b248);
        }
      }
    }
  }
  pvVar5 = (void *)param_2[1];
  if (uVar3 - __n < uVar4) {
                    /* try { // try from 00731db8 to 00731ddf has its CatchHandler @ 00731e20 */
    FUN_0072b438(param_1,__n,uVar4);
    __n = param_1[2];
  }
  memcpy((void *)(param_1[1] + __n),pvVar5,uVar4);
  param_1[2] = __n + uVar4;
LAB_00731d6c:
  if ((long)*param_2 < 1) {
    return;
  }
  __rustc::__rust_dealloc(param_2[1],*param_2,1);
  return;
}


// ===== 00731e44  <alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error>as_core[188d2c0002da36d0]::convert::From<&str>>::from =====

/* <alloc[cc0d62b833a55794]::boxed::Box<dyn core[188d2c0002da36d0]::error::Error> as
   core[188d2c0002da36d0]::convert::From<&str>>::from */

void <alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error>as_core[188d2c0002da36d0]::convert::From<&str>>
     ::from(void *param_1,size_t param_2)

{
  void *__dest;
  size_t *psVar1;
  
  if (param_2 == 0) {
    __dest = (void *)0x1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)__rustc::__rust_alloc(0x18,8);
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(param_2,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_2);
    }
    memcpy(__dest,param_1,param_2);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)__rustc::__rust_alloc(0x18,8);
  }
  if (psVar1 != (size_t *)0x0) {
    *psVar1 = param_2;
    psVar1[1] = (size_t)__dest;
    psVar1[2] = param_2;
    return;
  }
                    /* try { // try from 00731ed0 to 00731edb has its CatchHandler @ 00731eec */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00731f0c  <alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send>as_core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::borrow::Cow<str>>>::from =====

/* <alloc[cc0d62b833a55794]::boxed::Box<dyn core[188d2c0002da36d0]::error::Error +
   core[188d2c0002da36d0]::marker::Sync + core[188d2c0002da36d0]::marker::Send> as
   core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::borrow::Cow<str>>>::from */

void <alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send>as_core[188d2c0002da36d0]::convert::From<alloc[cc0d62b833a55794]::borrow::Cow<str>>>
     ::from(size_t *param_1)

{
  void *__src;
  void *__dest;
  size_t *psVar1;
  size_t __n;
  size_t sVar2;
  
  __src = (void *)param_1[1];
  __n = param_1[2];
  __dest = __src;
  sVar2 = *param_1;
  if (*param_1 == 0xffffffffffffffff) {
    if (__n == 0) {
      sVar2 = 0;
      __dest = (void *)0x1;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)__rustc::__rust_alloc(0x18,8);
      goto joined_r0x00731fa8;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(__n,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,__src,__n);
    sVar2 = __n;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  psVar1 = (size_t *)__rustc::__rust_alloc(0x18,8);
joined_r0x00731fa8:
  if (psVar1 != (size_t *)0x0) {
    *psVar1 = sVar2;
    psVar1[1] = (size_t)__dest;
    psVar1[2] = __n;
    return;
  }
                    /* try { // try from 00731fac to 00731fb7 has its CatchHandler @ 00731fc8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00731fe8  <&alloc::string::String_as_core::str::pattern::Pattern>::into_searcher =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&alloc::string::String as core::str::pattern::Pattern>::into_searcher */

void __rustcall
<&alloc::string::String_as_core::str::pattern::Pattern>::into_searcher
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
            (param_2,param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00731ffc  <alloc::boxed::Box<core::ffi::c_str::CStr>as{backref_17}::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<core::ffi::c_str::CStr> as {backref 17}::default::Default>::default */

undefined1  [16] __rustcall
<alloc::boxed::Box<core::ffi::c_str::CStr>as{backref_17}::default::Default>::default(void)

{
  undefined1 auVar1 [16];
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar1._0_8_ = __rustc::__rust_alloc(1,1);
  if (auVar1._0_8_ != 0) {
                    /* try { // try from 0073201c to 00732033 has its CatchHandler @ 00732054 */
    <core::ffi::c_str::CStr_as_core::clone::CloneToUninit>::clone_to_uninit
              (&DAT_003675a8,1,auVar1._0_8_);
    auVar1._8_8_ = 1;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,1);
}


// ===== 00732070  <alloc::ffi::c_str::NulError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::NulError as core::fmt::Display>::fmt */

void __rustcall
<alloc::ffi::c_str::NulError_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
  long local_20;
  undefined *puStack_18;
  
  local_20 = param_1 + 0x18;
  puStack_18 = PTR_fmt_0099f458;
  core::fmt::write(*param_2,param_2[1],&DAT_0036f084,&local_20);
  return;
}


// ===== 007320ac  <alloc::ffi::c_str::FromVecWithNulError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::FromVecWithNulError as core::fmt::Display>::fmt */

void __rustcall
<alloc::ffi::c_str::FromVecWithNulError_as_core::fmt::Display>::fmt
          (uint *param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  undefined *local_18;
  
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007320c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,"data provided is not nul terminated",0x23);
    return;
  }
  local_28 = *(undefined8 *)(param_1 + 2);
  puStack_20 = &local_28;
  local_18 = PTR_fmt_0099f458;
  core::fmt::write(*param_2,param_2[1],&DAT_0036bde0,&puStack_20);
  return;
}


// ===== 00732110  <alloc::ffi::c_str::IntoStringError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::IntoStringError as core::fmt::Display>::fmt */

void __rustcall
<alloc::ffi::c_str::IntoStringError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt("C string contained non-utf8 bytes",0x21,param_2);
  return;
}


// ===== 00732124  <core::ffi::c_str::CStr_as_alloc::borrow::ToOwned>::clone_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::CStr as alloc::borrow::ToOwned>::clone_into */

void __rustcall
<core::ffi::c_str::CStr_as_alloc::borrow::ToOwned>::clone_into
          (void *param_1,size_t param_2,long *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong local_68;
  long local_60;
  long local_58;
  
  uVar4 = param_3[1];
  if (uVar4 == param_2) {
    memcpy((void *)*param_3,param_1,param_2);
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined1 *)__rustc::__rust_alloc(1,1);
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(1,1);
  }
  lVar5 = *param_3;
  *puVar2 = 0;
  *param_3 = (long)puVar2;
  param_3[1] = 1;
  local_58 = 0;
  local_68 = uVar4;
  local_60 = lVar5;
  if (uVar4 < param_2) {
                    /* try { // try from 0073226c to 0073227b has its CatchHandler @ 00732288 */
    FUN_0072b438(&local_68,0,param_2);
  }
  else {
    lVar3 = 0;
    if (param_2 == 0) goto LAB_007321d8;
  }
  lVar3 = local_58;
  lVar5 = local_60;
  uVar4 = local_68;
  memcpy((void *)(local_60 + local_58),param_1,param_2);
LAB_007321d8:
  uVar1 = lVar3 + param_2;
  if (uVar1 < uVar4) {
    if (uVar1 == 0) {
      __rustc::__rust_dealloc(lVar5,uVar4,1);
      lVar5 = 1;
    }
    else {
      lVar5 = __rustc::__rust_realloc(lVar5,uVar4,1,uVar1);
      if (lVar5 == 0) {
                    /* try { // try from 00732204 to 0073220f has its CatchHandler @ 0073229c */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,uVar1);
      }
    }
  }
  __rustc::__rust_dealloc(puVar2,1,1);
  *param_3 = lVar5;
  param_3[1] = uVar1;
  return;
}


// ===== 007322b8  FUN_007322b8 =====

void FUN_007322b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_0097b368,param_2,param_3);
  return;
}


// ===== 007322cc  FUN_007322cc =====

undefined1  [16] FUN_007322cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 007322dc  FUN_007322dc =====

undefined8 FUN_007322dc(void)

{
  return 0;
}


// ===== 007322e4  FUN_007322e4 =====

void FUN_007322e4(void)

{
  return;
}


// ===== 007322e8  FUN_007322e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007322e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00371ed0;
  param_1[1] = _UNK_00371ed8;
  *param_1 = uVar1;
  return;
}


// ===== 007322fc  FUN_007322fc =====

void FUN_007322fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000010;
  undefined1 *puStack0000000000000020;
  
  puStack0000000000000020 = &stack0x00000008;
  uStack0000000000000010 = param_1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(param_2,&stack0x00000010);
}


// ===== 00732310  core[188d2c0002da36d0]::panicking::assert_failed::<core[188d2c0002da36d0]::option::Option<usize>,core[188d2c0002da36d0]::option::Option<usize>> =====

/* core[188d2c0002da36d0]::panicking::assert_failed::<core[188d2c0002da36d0]::option::Option<usize>,
   core[188d2c0002da36d0]::option::Option<usize>> */

void core[188d2c0002da36d0]::panicking::assert_failed::
     <core[188d2c0002da36d0]::option::Option<usize>,core[188d2c0002da36d0]::option::Option<usize>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_00751428(param_1,param_2,&DAT_0097b478);
}


// ===== 0073232c  core::panicking::assert_failed<usize,usize> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<usize, usize> */

void __rustcall core::panicking::assert_failed<usize,usize>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_00751428(param_1,param_2,&DAT_0097b498);
}


// ===== 00732348  core::panicking::assert_failed<u64,u64> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<u64, u64> */

void __rustcall core::panicking::assert_failed<u64,u64>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_00751428(param_1,param_2,&DAT_0097b4b8);
}


// ===== 00732364  FUN_00732364 =====

void FUN_00732364(uint param_1,undefined8 param_2,int param_3,ushort param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  ulong uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 local_4f0 [128];
  undefined2 local_f0;
  undefined6 uStack_ee;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  ulong local_d0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  short local_58;
  undefined1 local_56;
  
  uVar9 = 2;
  uVar12 = (ulong)param_4;
  local_4f0[0] = 0;
  bVar5 = (param_1 & 0x3ff) == 0;
  uVar8 = 2;
  if (!bVar5) {
    uVar8 = 3;
  }
  uVar10 = param_1 >> 10 & 0x1f;
  uVar1 = (param_1 & 0x3ff) << 1;
  if (uVar10 != 0) {
    uVar1 = param_1 & 0x3ff | 0x400;
  }
  local_70 = (ulong)uVar1;
  if ((param_1 & 0x7c00) != 0) {
    uVar8 = 4;
  }
  uVar2 = (uint)bVar5;
  if ((param_1 & 0x7c00) != 0x7c00) {
    uVar2 = uVar8;
  }
  local_60 = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar9 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar9 = 4;
  }
  else if (uVar2 == 3) {
    uVar10 = uVar10 - 0x19;
    uVar9 = uVar1 & 1 ^ 1;
    local_60 = 1;
  }
  else {
    uVar6 = local_70 << 1;
    bVar5 = uVar1 != 0x400;
    uVar9 = uVar1 & 1 ^ 1;
    local_70 = 0x1000;
    if (bVar5) {
      local_70 = uVar6;
    }
    iVar11 = -0x1b;
    if (bVar5) {
      iVar11 = -0x1a;
    }
    local_60 = 1;
    if (!bVar5) {
      local_60 = 2;
    }
    uVar10 = iVar11 + uVar10;
  }
  uVar8 = (uint)(short)param_1;
  uStack_68 = 1;
  local_58 = (short)uVar10;
  local_56 = (undefined1)uVar9;
  if (uVar9 < 2) {
    pcVar13 = "-+";
    uVar6 = (ulong)(uVar8 >> 0xf & 1);
    pcVar4 = pcVar13;
    if (-1 < (int)uVar8) {
      pcVar13 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar13 = pcVar4;
    }
    lVar3 = -0xc;
    if ((uVar10 & 0x8000) == 0) {
      lVar3 = 5;
    }
    if (0xfa < (ulong)(lVar3 * local_58) >> 6) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= maxlen",0x25,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b580);
    }
    iVar11 = (int)(short)param_4;
    uVar14 = (ulong)(lVar3 * local_58) >> 4;
    sVar7 = -0x8000;
    if (iVar11 != -1 && iVar11 + 1 < 0 == SCARRY4(iVar11,1)) {
      sVar7 = -param_4;
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_f0,&local_70,local_4f0,uVar14 + 0x15);
    if (CONCAT62(uStack_ee,local_f0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,&local_70,local_4f0,uVar14 + 0x15,(int)sVar7);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_ee,local_f0);
      local_80._0_2_ = (undefined2)local_e0;
      pcStack_88 = pcStack_e8;
    }
    if ((int)sVar7 < (int)(short)local_80._0_2_) {
      local_80 = core::num::imp::flt2dec::digits_to_dec_str
                           (local_90,pcStack_88,(long)(short)local_80._0_2_,uVar12,&local_f0,4);
    }
    else {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar12;
      }
    }
  }
  else if ((uVar9 - 2 & 0xff) == 0) {
    local_f0 = 2;
    uVar6 = 0;
    pcStack_e8 = "NaN";
    local_e0 = 3;
    pcVar13 = (char *)0x1;
    local_80._8_8_ = 1;
    local_80._0_8_ = &local_f0;
  }
  else {
    pcVar13 = "-+";
    uVar6 = (ulong)(uVar8 >> 0xf & 1);
    pcVar4 = pcVar13;
    if (-1 < (int)uVar8) {
      pcVar13 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar13 = pcVar4;
    }
    if ((uVar9 - 2 & 0xff) == 2) {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar12;
      }
    }
    else {
      local_f0 = 2;
      pcStack_e8 = "inf";
      local_e0 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_f0;
    }
  }
  local_90 = pcVar13;
  pcStack_88 = (char *)uVar6;
  FUN_00739c78(param_2,&local_90);
  return;
}


// ===== 007326a8  FUN_007326a8 =====

void FUN_007326a8(ulong param_1,undefined8 param_2,int param_3,ushort param_4)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  ulong uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 local_4f0 [128];
  undefined2 local_f0;
  undefined6 uStack_ee;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  ulong local_d0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  short local_58;
  undefined1 local_56;
  
  uVar8 = 2;
  local_4f0[0] = 0;
  uVar11 = (ulong)param_4;
  uVar5 = param_1 & 0xfffffffffffff;
  uVar7 = 2;
  if (uVar5 != 0) {
    uVar7 = 3;
  }
  uVar9 = (uint)(param_1 >> 0x34) & 0x7ff;
  local_70 = (param_1 & 0xfffffffffffff) << 1;
  if ((param_1 >> 0x34 & 0x7ff) != 0) {
    local_70 = uVar5 | 0x10000000000000;
  }
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar7 = 4;
  }
  uVar1 = (uint)(uVar5 == 0);
  if ((param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    uVar1 = uVar7;
  }
  local_60 = (ulong)uVar1;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      uVar8 = 3;
    }
  }
  else if (uVar1 == 2) {
    uVar8 = 4;
  }
  else {
    uVar8 = (uint)local_70 & 1;
    if (uVar1 == 3) {
      uVar9 = uVar9 - 0x433;
      uVar8 = uVar8 ^ 1;
      local_60 = 1;
    }
    else {
      uVar5 = local_70 << 1;
      uVar8 = uVar8 ^ 1;
      bVar4 = local_70 != 0x10000000000000;
      local_70 = 0x40000000000000;
      if (bVar4) {
        local_70 = uVar5;
      }
      iVar10 = -0x435;
      if (bVar4) {
        iVar10 = -0x434;
      }
      local_60 = 1;
      if (!bVar4) {
        local_60 = 2;
      }
      uVar9 = iVar10 + uVar9;
    }
  }
  uStack_68 = 1;
  local_58 = (short)uVar9;
  local_56 = (undefined1)uVar8;
  if (uVar8 < 2) {
    pcVar12 = "-+";
    uVar5 = param_1 >> 0x3f;
    pcVar3 = pcVar12;
    if (-1 < (long)param_1) {
      pcVar12 = (char *)0x1;
      pcVar3 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
      pcVar12 = pcVar3;
    }
    lVar2 = -0xc;
    if ((uVar9 & 0x8000) == 0) {
      lVar2 = 5;
    }
    if (0xfa < (ulong)(lVar2 * local_58) >> 6) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= maxlen",0x25,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b580);
    }
    iVar10 = (int)(short)param_4;
    uVar13 = (ulong)(lVar2 * local_58) >> 4;
    sVar6 = -0x8000;
    if (iVar10 != -1 && iVar10 + 1 < 0 == SCARRY4(iVar10,1)) {
      sVar6 = -param_4;
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_f0,&local_70,local_4f0,uVar13 + 0x15);
    if (CONCAT62(uStack_ee,local_f0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,&local_70,local_4f0,uVar13 + 0x15,(int)sVar6);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_ee,local_f0);
      local_80._0_2_ = (undefined2)local_e0;
      pcStack_88 = pcStack_e8;
    }
    if ((int)sVar6 < (int)(short)local_80._0_2_) {
      local_80 = core::num::imp::flt2dec::digits_to_dec_str
                           (local_90,pcStack_88,(long)(short)local_80._0_2_,uVar11,&local_f0,4);
    }
    else {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar11;
      }
    }
  }
  else if ((uVar8 - 2 & 0xff) == 0) {
    local_f0 = 2;
    uVar5 = 0;
    pcStack_e8 = "NaN";
    local_e0 = 3;
    pcVar12 = (char *)0x1;
    local_80._8_8_ = 1;
    local_80._0_8_ = &local_f0;
  }
  else {
    pcVar12 = "-+";
    uVar5 = param_1 >> 0x3f;
    pcVar3 = pcVar12;
    if (-1 < (long)param_1) {
      pcVar12 = (char *)0x1;
      pcVar3 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
      pcVar12 = pcVar3;
    }
    if ((uVar8 - 2 & 0xff) == 2) {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar11;
      }
    }
    else {
      local_f0 = 2;
      pcStack_e8 = "inf";
      local_e0 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_f0;
    }
  }
  local_90 = pcVar12;
  pcStack_88 = (char *)uVar5;
  FUN_00739c78(param_2,&local_90);
  return;
}


// ===== 007329e8  FUN_007329e8 =====

void FUN_007329e8(uint param_1,undefined8 param_2,int param_3,ushort param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  ulong uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 local_4f0 [128];
  undefined2 local_f0;
  undefined6 uStack_ee;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  ulong local_d0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  short local_58;
  undefined1 local_56;
  
  uVar9 = 2;
  uVar12 = (ulong)param_4;
  local_4f0[0] = 0;
  bVar5 = (param_1 & 0x7fffff) == 0;
  uVar8 = 2;
  if (!bVar5) {
    uVar8 = 3;
  }
  uVar10 = param_1 >> 0x17 & 0xff;
  uVar1 = (param_1 & 0x7fffff) << 1;
  if (uVar10 != 0) {
    uVar1 = param_1 & 0x7fffff | 0x800000;
  }
  local_70 = (ulong)uVar1;
  if ((param_1 & 0x7f800000) != 0) {
    uVar8 = 4;
  }
  uVar2 = (uint)bVar5;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar2 = uVar8;
  }
  local_60 = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar9 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar9 = 4;
  }
  else if (uVar2 == 3) {
    uVar10 = uVar10 - 0x96;
    uVar9 = uVar1 & 1 ^ 1;
    local_60 = 1;
  }
  else {
    uVar6 = local_70 << 1;
    bVar5 = uVar1 != 0x800000;
    iVar11 = -0x98;
    if (bVar5) {
      iVar11 = -0x97;
    }
    local_70 = 0x2000000;
    if (bVar5) {
      local_70 = uVar6;
    }
    local_60 = 1;
    if (!bVar5) {
      local_60 = 2;
    }
    uVar10 = iVar11 + uVar10;
    uVar9 = uVar1 & 1 ^ 1;
  }
  uStack_68 = 1;
  local_58 = (short)uVar10;
  local_56 = (undefined1)uVar9;
  if (uVar9 < 2) {
    pcVar13 = "-+";
    uVar6 = (ulong)(param_1 >> 0x1f);
    pcVar4 = pcVar13;
    if (-1 < (int)param_1) {
      pcVar13 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar13 = pcVar4;
    }
    lVar3 = -0xc;
    if ((uVar10 & 0x8000) == 0) {
      lVar3 = 5;
    }
    if (0xfa < (ulong)(lVar3 * local_58) >> 6) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= maxlen",0x25,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b580);
    }
    iVar11 = (int)(short)param_4;
    uVar14 = (ulong)(lVar3 * local_58) >> 4;
    sVar7 = -0x8000;
    if (iVar11 != -1 && iVar11 + 1 < 0 == SCARRY4(iVar11,1)) {
      sVar7 = -param_4;
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_f0,&local_70,local_4f0,uVar14 + 0x15);
    if (CONCAT62(uStack_ee,local_f0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,&local_70,local_4f0,uVar14 + 0x15,(int)sVar7);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_ee,local_f0);
      local_80._0_2_ = (undefined2)local_e0;
      pcStack_88 = pcStack_e8;
    }
    if ((int)sVar7 < (int)(short)local_80._0_2_) {
      local_80 = core::num::imp::flt2dec::digits_to_dec_str
                           (local_90,pcStack_88,(long)(short)local_80._0_2_,uVar12,&local_f0,4);
    }
    else {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar12;
      }
    }
  }
  else if ((uVar9 - 2 & 0xff) == 0) {
    local_f0 = 2;
    uVar6 = 0;
    pcStack_e8 = "NaN";
    local_e0 = 3;
    pcVar13 = (char *)0x1;
    local_80._8_8_ = 1;
    local_80._0_8_ = &local_f0;
  }
  else {
    pcVar13 = "-+";
    uVar6 = (ulong)(param_1 >> 0x1f);
    pcVar4 = pcVar13;
    if (-1 < (int)param_1) {
      pcVar13 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar13 = pcVar4;
    }
    if ((uVar9 - 2 & 0xff) == 2) {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar12;
      }
    }
    else {
      local_f0 = 2;
      pcStack_e8 = "inf";
      local_e0 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_f0;
    }
  }
  local_90 = pcVar13;
  pcStack_88 = (char *)uVar6;
  FUN_00739c78(param_2,&local_90);
  return;
}


// ===== 00732d24  FUN_00732d24 =====

void FUN_00732d24(uint param_1,undefined8 param_2,int param_3,short param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  char *pcVar9;
  undefined1 auStack_f1 [17];
  undefined2 local_e0;
  undefined6 uStack_de;
  char *pcStack_d8;
  ulong local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  char *local_80;
  char *pcStack_78;
  undefined1 local_70 [16];
  ulong local_60 [3];
  short local_48;
  undefined1 local_46;
  
  uVar7 = 2;
  bVar4 = (param_1 & 0x3ff) == 0;
  uVar6 = 2;
  if (!bVar4) {
    uVar6 = 3;
  }
  uVar2 = param_1 >> 10 & 0x1f;
  local_48 = (short)uVar2;
  uVar3 = (param_1 & 0x3ff) << 1;
  if (uVar2 != 0) {
    uVar3 = param_1 & 0x3ff | 0x400;
  }
  local_60[0] = (ulong)uVar3;
  if ((param_1 & 0x7c00) != 0) {
    uVar6 = 4;
  }
  uVar2 = (uint)bVar4;
  if ((param_1 & 0x7c00) != 0x7c00) {
    uVar2 = uVar6;
  }
  local_60[2] = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar7 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar7 = 4;
  }
  else if (uVar2 == 3) {
    local_48 = local_48 + -0x19;
    uVar7 = uVar3 & 1 ^ 1;
    local_60[2] = 1;
  }
  else {
    uVar5 = local_60[0] << 1;
    bVar4 = uVar3 != 0x400;
    uVar7 = uVar3 & 1 ^ 1;
    local_60[0] = 0x1000;
    if (bVar4) {
      local_60[0] = uVar5;
    }
    sVar8 = -0x1b;
    if (bVar4) {
      sVar8 = -0x1a;
    }
    local_60[2] = 1;
    if (!bVar4) {
      local_60[2] = 2;
    }
    local_48 = sVar8 + local_48;
  }
  uVar6 = (uint)(short)param_1;
  local_60[1] = 1;
  local_46 = (undefined1)uVar7;
  if (uVar7 < 2) {
    pcVar1 = "-+";
    uVar5 = (ulong)(uVar6 >> 0xf & 1);
    pcVar9 = pcVar1;
    if (-1 < (int)uVar6) {
      pcVar1 = (char *)0x1;
      pcVar9 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
    }
    if (param_3 == 0) {
      pcVar9 = pcVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_e0,local_60,auStack_f1,0x11);
    if (CONCAT62(uStack_de,local_e0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest(&local_80,local_60,auStack_f1,0x11)
      ;
    }
    else {
      local_80 = (char *)CONCAT62(uStack_de,local_e0);
      pcStack_78 = pcStack_d8;
      local_70._0_8_ = local_d0;
    }
    local_70 = core::num::imp::flt2dec::digits_to_dec_str
                         (local_80,pcStack_78,local_70._0_8_ & 0xffff,param_4,&local_e0,4);
  }
  else if ((uVar7 - 2 & 0xff) == 0) {
    local_e0 = 2;
    uVar5 = 0;
    pcStack_d8 = "NaN";
    local_d0 = 3;
    pcVar9 = (char *)0x1;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
  else {
    pcVar9 = "-+";
    uVar5 = (ulong)(uVar6 >> 0xf & 1);
    pcVar1 = pcVar9;
    if (-1 < (int)uVar6) {
      pcVar9 = (char *)0x1;
      pcVar1 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
      pcVar9 = pcVar1;
    }
    if ((uVar7 - 2 & 0xff) == 2) {
      local_e0 = 2;
      if (param_4 != 0) {
        pcStack_d8 = "0.";
        local_d0 = 2;
        local_70._8_8_ = 2;
        local_70._0_8_ = &local_e0;
        local_c8 = 0;
        local_c0 = 1;
        goto LAB_00732f84;
      }
      pcStack_d8 = "0";
      local_d0 = 1;
    }
    else {
      pcStack_d8 = "inf";
      local_d0 = 3;
    }
    local_e0 = 2;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
LAB_00732f84:
  local_80 = pcVar9;
  pcStack_78 = (char *)uVar5;
  FUN_00739c78(param_2,&local_80);
  return;
}


// ===== 00732fac  FUN_00732fac =====

void FUN_00732fac(ulong param_1,undefined8 param_2,int param_3,short param_4)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  char *pcVar8;
  undefined1 auStack_f1 [17];
  undefined2 local_e0;
  undefined6 uStack_de;
  char *pcStack_d8;
  ulong local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  char *local_80;
  char *pcStack_78;
  undefined1 local_70 [16];
  ulong local_60 [3];
  ushort local_48;
  undefined1 local_46;
  
  uVar6 = 2;
  uVar4 = param_1 & 0xfffffffffffff;
  uVar5 = 2;
  if (uVar4 != 0) {
    uVar5 = 3;
  }
  local_48 = (ushort)(param_1 >> 0x34) & 0x7ff;
  local_60[0] = (param_1 & 0xfffffffffffff) << 1;
  if ((param_1 >> 0x34 & 0x7ff) != 0) {
    local_60[0] = uVar4 | 0x10000000000000;
  }
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar5 = 4;
  }
  uVar2 = (uint)(uVar4 == 0);
  if ((param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    uVar2 = uVar5;
  }
  local_60[2] = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar6 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar6 = 4;
  }
  else {
    uVar6 = (uint)local_60[0] & 1;
    if (uVar2 == 3) {
      local_48 = local_48 - 0x433;
      uVar6 = uVar6 ^ 1;
      local_60[2] = 1;
    }
    else {
      uVar4 = local_60[0] << 1;
      uVar6 = uVar6 ^ 1;
      bVar3 = local_60[0] != 0x10000000000000;
      local_60[0] = 0x40000000000000;
      if (bVar3) {
        local_60[0] = uVar4;
      }
      sVar7 = -0x435;
      if (bVar3) {
        sVar7 = -0x434;
      }
      local_60[2] = 1;
      if (!bVar3) {
        local_60[2] = 2;
      }
      local_48 = sVar7 + local_48;
    }
  }
  local_60[1] = 1;
  local_46 = (undefined1)uVar6;
  if (uVar6 < 2) {
    pcVar1 = "-+";
    uVar4 = param_1 >> 0x3f;
    pcVar8 = pcVar1;
    if (-1 < (long)param_1) {
      pcVar1 = (char *)0x1;
      pcVar8 = "+";
    }
    if (param_3 != 0) {
      uVar4 = 1;
    }
    if (param_3 == 0) {
      pcVar8 = pcVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_e0,local_60,auStack_f1,0x11);
    if (CONCAT62(uStack_de,local_e0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest(&local_80,local_60,auStack_f1,0x11)
      ;
    }
    else {
      local_80 = (char *)CONCAT62(uStack_de,local_e0);
      pcStack_78 = pcStack_d8;
      local_70._0_8_ = local_d0;
    }
    local_70 = core::num::imp::flt2dec::digits_to_dec_str
                         (local_80,pcStack_78,local_70._0_8_ & 0xffff,param_4,&local_e0,4);
  }
  else if ((uVar6 - 2 & 0xff) == 0) {
    local_e0 = 2;
    uVar4 = 0;
    pcStack_d8 = "NaN";
    local_d0 = 3;
    pcVar8 = (char *)0x1;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
  else {
    pcVar8 = "-+";
    uVar4 = param_1 >> 0x3f;
    pcVar1 = pcVar8;
    if (-1 < (long)param_1) {
      pcVar8 = (char *)0x1;
      pcVar1 = "+";
    }
    if (param_3 != 0) {
      uVar4 = 1;
      pcVar8 = pcVar1;
    }
    if ((uVar6 - 2 & 0xff) == 2) {
      local_e0 = 2;
      if (param_4 != 0) {
        pcStack_d8 = "0.";
        local_d0 = 2;
        local_70._8_8_ = 2;
        local_70._0_8_ = &local_e0;
        local_c8 = 0;
        local_c0 = 1;
        goto LAB_00733208;
      }
      pcStack_d8 = "0";
      local_d0 = 1;
    }
    else {
      pcStack_d8 = "inf";
      local_d0 = 3;
    }
    local_e0 = 2;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
LAB_00733208:
  local_80 = pcVar8;
  pcStack_78 = (char *)uVar4;
  FUN_00739c78(param_2,&local_80);
  return;
}


// ===== 00733230  FUN_00733230 =====

void FUN_00733230(uint param_1,undefined8 param_2,int param_3,short param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  char *pcVar9;
  undefined1 auStack_f1 [17];
  undefined2 local_e0;
  undefined6 uStack_de;
  char *pcStack_d8;
  ulong local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  char *local_80;
  char *pcStack_78;
  undefined1 local_70 [16];
  ulong local_60 [3];
  short local_48;
  undefined1 local_46;
  
  uVar7 = 2;
  bVar4 = (param_1 & 0x7fffff) == 0;
  uVar6 = 2;
  if (!bVar4) {
    uVar6 = 3;
  }
  uVar2 = param_1 >> 0x17 & 0xff;
  local_48 = (short)uVar2;
  uVar3 = (param_1 & 0x7fffff) << 1;
  if (uVar2 != 0) {
    uVar3 = param_1 & 0x7fffff | 0x800000;
  }
  local_60[0] = (ulong)uVar3;
  if ((param_1 & 0x7f800000) != 0) {
    uVar6 = 4;
  }
  uVar2 = (uint)bVar4;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar2 = uVar6;
  }
  local_60[2] = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar7 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar7 = 4;
  }
  else if (uVar2 == 3) {
    local_48 = local_48 + -0x96;
    uVar7 = uVar3 & 1 ^ 1;
    local_60[2] = 1;
  }
  else {
    uVar5 = local_60[0] << 1;
    bVar4 = uVar3 != 0x800000;
    sVar8 = -0x98;
    if (bVar4) {
      sVar8 = -0x97;
    }
    local_60[0] = 0x2000000;
    if (bVar4) {
      local_60[0] = uVar5;
    }
    local_60[2] = 1;
    if (!bVar4) {
      local_60[2] = 2;
    }
    local_48 = sVar8 + local_48;
    uVar7 = uVar3 & 1 ^ 1;
  }
  local_60[1] = 1;
  local_46 = (undefined1)uVar7;
  if (uVar7 < 2) {
    pcVar1 = "-+";
    uVar5 = (ulong)(param_1 >> 0x1f);
    pcVar9 = pcVar1;
    if (-1 < (int)param_1) {
      pcVar1 = (char *)0x1;
      pcVar9 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
    }
    if (param_3 == 0) {
      pcVar9 = pcVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_e0,local_60,auStack_f1,0x11);
    if (CONCAT62(uStack_de,local_e0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest(&local_80,local_60,auStack_f1,0x11)
      ;
    }
    else {
      local_80 = (char *)CONCAT62(uStack_de,local_e0);
      pcStack_78 = pcStack_d8;
      local_70._0_8_ = local_d0;
    }
    local_70 = core::num::imp::flt2dec::digits_to_dec_str
                         (local_80,pcStack_78,local_70._0_8_ & 0xffff,param_4,&local_e0,4);
  }
  else if ((uVar7 - 2 & 0xff) == 0) {
    local_e0 = 2;
    uVar5 = 0;
    pcStack_d8 = "NaN";
    local_d0 = 3;
    pcVar9 = (char *)0x1;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
  else {
    pcVar9 = "-+";
    uVar5 = (ulong)(param_1 >> 0x1f);
    pcVar1 = pcVar9;
    if (-1 < (int)param_1) {
      pcVar9 = (char *)0x1;
      pcVar1 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
      pcVar9 = pcVar1;
    }
    if ((uVar7 - 2 & 0xff) == 2) {
      local_e0 = 2;
      if (param_4 != 0) {
        pcStack_d8 = "0.";
        local_d0 = 2;
        local_70._8_8_ = 2;
        local_70._0_8_ = &local_e0;
        local_c8 = 0;
        local_c0 = 1;
        goto LAB_00733488;
      }
      pcStack_d8 = "0";
      local_d0 = 1;
    }
    else {
      pcStack_d8 = "inf";
      local_d0 = 3;
    }
    local_e0 = 2;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
LAB_00733488:
  local_80 = pcVar9;
  pcStack_78 = (char *)uVar5;
  FUN_00739c78(param_2,&local_80);
  return;
}


// ===== 007334b0  FUN_007334b0 =====

void FUN_007334b0(uint param_1,undefined8 param_2,int param_3,ushort param_4,int param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 local_520 [128];
  undefined2 local_120;
  undefined6 uStack_11e;
  char *pcStack_118;
  ulong local_110;
  undefined2 local_108;
  ulong local_100;
  undefined2 local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70 [3];
  short local_58;
  undefined1 local_56;
  
  uVar9 = 2;
  uVar12 = (ulong)param_4;
  local_520[0] = 0;
  bVar6 = (param_1 & 0x3ff) == 0;
  uVar8 = 2;
  if (!bVar6) {
    uVar8 = 3;
  }
  uVar10 = param_1 >> 10 & 0x1f;
  uVar2 = (param_1 & 0x3ff) << 1;
  if (uVar10 != 0) {
    uVar2 = param_1 & 0x3ff | 0x400;
  }
  local_70[0] = (ulong)uVar2;
  if ((param_1 & 0x7c00) != 0) {
    uVar8 = 4;
  }
  uVar3 = (uint)bVar6;
  if ((param_1 & 0x7c00) != 0x7c00) {
    uVar3 = uVar8;
  }
  local_70[2] = (ulong)uVar3;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      uVar9 = 3;
    }
  }
  else if (uVar3 == 2) {
    uVar9 = 4;
  }
  else if (uVar3 == 3) {
    uVar10 = uVar10 - 0x19;
    uVar9 = uVar2 & 1 ^ 1;
    local_70[2] = 1;
  }
  else {
    uVar7 = local_70[0] << 1;
    bVar6 = uVar2 != 0x400;
    uVar9 = uVar2 & 1 ^ 1;
    local_70[0] = 0x1000;
    if (bVar6) {
      local_70[0] = uVar7;
    }
    iVar11 = -0x1b;
    if (bVar6) {
      iVar11 = -0x1a;
    }
    local_70[2] = 1;
    if (!bVar6) {
      local_70[2] = 2;
    }
    uVar10 = iVar11 + uVar10;
  }
  uVar8 = (uint)(short)param_1;
  local_70[1] = 1;
  local_58 = (short)uVar10;
  local_56 = (undefined1)uVar9;
  if (uVar9 < 2) {
    pcVar13 = "-+";
    uVar7 = (ulong)(uVar8 >> 0xf & 1);
    pcVar5 = pcVar13;
    if (-1 < (int)uVar8) {
      pcVar13 = (char *)0x1;
      pcVar5 = "+";
    }
    if (param_3 != 0) {
      uVar7 = 1;
      pcVar13 = pcVar5;
    }
    lVar4 = -0xc;
    if ((uVar10 & 0x8000) == 0) {
      lVar4 = 5;
    }
    uVar1 = ((ulong)(lVar4 * local_58) >> 4) + 0x15;
    if (uVar12 < uVar1) {
      uVar1 = uVar12 + 1;
    }
    if (0x400 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= sig_digits",0x29,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b568);
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_120,local_70,local_520,uVar1,0x8000);
    if (CONCAT62(uStack_11e,local_120) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,local_70,local_520,uVar1,0x8000);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_11e,local_120);
      pcStack_88 = pcStack_118;
      local_80._0_8_ = local_110;
    }
    local_80 = core::num::imp::flt2dec::digits_to_exp_str
                         (local_90,pcStack_88,local_80._0_8_ & 0xffff,uVar12,param_5,&local_120,6);
    goto LAB_0073378c;
  }
  if ((uVar9 - 2 & 0xff) == 0) {
    uVar7 = 0;
    pcStack_118 = "NaN";
    pcVar13 = (char *)0x1;
  }
  else {
    pcVar13 = "-+";
    uVar7 = (ulong)(uVar8 >> 0xf & 1);
    pcVar5 = pcVar13;
    if (-1 < (int)uVar8) {
      pcVar13 = (char *)0x1;
      pcVar5 = "+";
    }
    if (param_3 != 0) {
      uVar7 = 1;
      pcVar13 = pcVar5;
    }
    if ((uVar9 - 2 & 0xff) != 2) {
      local_120 = 2;
      pcStack_118 = "inf";
      local_110 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_120;
      goto LAB_0073378c;
    }
    if (param_4 != 0) {
      pcStack_118 = "0.";
      local_110 = 2;
      local_e8 = "E0";
      if (param_5 == 0) {
        local_e8 = "e0E0";
      }
      local_120 = 2;
      local_108 = 0;
      local_f0 = 2;
      uStack_e0 = 2;
      local_80._8_8_ = 3;
      local_80._0_8_ = &local_120;
      local_100 = uVar12;
      goto LAB_0073378c;
    }
    pcStack_118 = "0E0e0E0";
    if (param_5 == 0) {
      pcStack_118 = "0e00E0e0E0";
    }
  }
  local_110 = 3;
  local_120 = 2;
  local_80._8_8_ = 1;
  local_80._0_8_ = &local_120;
LAB_0073378c:
  local_90 = pcVar13;
  pcStack_88 = (char *)uVar7;
  FUN_00739c78(param_2,&local_90);
  return;
}


// ===== 007337d0  FUN_007337d0 =====

void FUN_007337d0(ulong param_1,undefined8 param_2,int param_3,ushort param_4,int param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 local_520 [128];
  undefined2 local_120;
  undefined6 uStack_11e;
  char *pcStack_118;
  ulong local_110;
  undefined2 local_108;
  ulong local_100;
  undefined2 local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70 [3];
  short local_58;
  undefined1 local_56;
  
  uVar8 = 2;
  uVar11 = (ulong)param_4;
  local_520[0] = 0;
  uVar6 = param_1 & 0xfffffffffffff;
  uVar7 = 2;
  if (uVar6 != 0) {
    uVar7 = 3;
  }
  uVar9 = (uint)(param_1 >> 0x34) & 0x7ff;
  local_70[0] = (param_1 & 0xfffffffffffff) << 1;
  if ((param_1 >> 0x34 & 0x7ff) != 0) {
    local_70[0] = uVar6 | 0x10000000000000;
  }
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar7 = 4;
  }
  uVar2 = (uint)(uVar6 == 0);
  if ((param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    uVar2 = uVar7;
  }
  local_70[2] = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar8 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar8 = 4;
  }
  else {
    uVar8 = (uint)local_70[0] & 1;
    if (uVar2 == 3) {
      uVar9 = uVar9 - 0x433;
      uVar8 = uVar8 ^ 1;
      local_70[2] = 1;
    }
    else {
      uVar6 = local_70[0] << 1;
      uVar8 = uVar8 ^ 1;
      bVar5 = local_70[0] != 0x10000000000000;
      local_70[0] = 0x40000000000000;
      if (bVar5) {
        local_70[0] = uVar6;
      }
      iVar10 = -0x435;
      if (bVar5) {
        iVar10 = -0x434;
      }
      local_70[2] = 1;
      if (!bVar5) {
        local_70[2] = 2;
      }
      uVar9 = iVar10 + uVar9;
    }
  }
  local_70[1] = 1;
  local_58 = (short)uVar9;
  local_56 = (undefined1)uVar8;
  if (uVar8 < 2) {
    pcVar12 = "-+";
    uVar6 = param_1 >> 0x3f;
    pcVar4 = pcVar12;
    if (-1 < (long)param_1) {
      pcVar12 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar12 = pcVar4;
    }
    lVar3 = -0xc;
    if ((uVar9 & 0x8000) == 0) {
      lVar3 = 5;
    }
    uVar1 = ((ulong)(lVar3 * local_58) >> 4) + 0x15;
    if (uVar11 < uVar1) {
      uVar1 = uVar11 + 1;
    }
    if (0x400 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= sig_digits",0x29,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b568);
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_120,local_70,local_520,uVar1,0x8000);
    if (CONCAT62(uStack_11e,local_120) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,local_70,local_520,uVar1,0x8000);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_11e,local_120);
      pcStack_88 = pcStack_118;
      local_80._0_8_ = local_110;
    }
    local_80 = core::num::imp::flt2dec::digits_to_exp_str
                         (local_90,pcStack_88,local_80._0_8_ & 0xffff,uVar11,param_5,&local_120,6);
    goto LAB_00733aa8;
  }
  if ((uVar8 - 2 & 0xff) == 0) {
    uVar6 = 0;
    pcStack_118 = "NaN";
    pcVar12 = (char *)0x1;
  }
  else {
    pcVar12 = "-+";
    uVar6 = param_1 >> 0x3f;
    pcVar4 = pcVar12;
    if (-1 < (long)param_1) {
      pcVar12 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar12 = pcVar4;
    }
    if ((uVar8 - 2 & 0xff) != 2) {
      local_120 = 2;
      pcStack_118 = "inf";
      local_110 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_120;
      goto LAB_00733aa8;
    }
    if (param_4 != 0) {
      pcStack_118 = "0.";
      local_110 = 2;
      local_e8 = "E0";
      if (param_5 == 0) {
        local_e8 = "e0E0";
      }
      local_120 = 2;
      local_108 = 0;
      local_f0 = 2;
      uStack_e0 = 2;
      local_80._8_8_ = 3;
      local_80._0_8_ = &local_120;
      local_100 = uVar11;
      goto LAB_00733aa8;
    }
    pcStack_118 = "0E0e0E0";
    if (param_5 == 0) {
      pcStack_118 = "0e00E0e0E0";
    }
  }
  local_110 = 3;
  local_120 = 2;
  local_80._8_8_ = 1;
  local_80._0_8_ = &local_120;
LAB_00733aa8:
  local_90 = pcVar12;
  pcStack_88 = (char *)uVar6;
  FUN_00739c78(param_2,&local_90);
  return;
}


// ===== 00733aec  FUN_00733aec =====

void FUN_00733aec(uint param_1,undefined8 param_2,int param_3,ushort param_4,int param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 local_520 [128];
  undefined2 local_120;
  undefined6 uStack_11e;
  char *pcStack_118;
  ulong local_110;
  undefined2 local_108;
  ulong local_100;
  undefined2 local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70 [3];
  short local_58;
  undefined1 local_56;
  
  uVar9 = 2;
  uVar12 = (ulong)param_4;
  local_520[0] = 0;
  bVar6 = (param_1 & 0x7fffff) == 0;
  uVar8 = 2;
  if (!bVar6) {
    uVar8 = 3;
  }
  uVar10 = param_1 >> 0x17 & 0xff;
  uVar2 = (param_1 & 0x7fffff) << 1;
  if (uVar10 != 0) {
    uVar2 = param_1 & 0x7fffff | 0x800000;
  }
  local_70[0] = (ulong)uVar2;
  if ((param_1 & 0x7f800000) != 0) {
    uVar8 = 4;
  }
  uVar3 = (uint)bVar6;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar3 = uVar8;
  }
  local_70[2] = (ulong)uVar3;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      uVar9 = 3;
    }
  }
  else if (uVar3 == 2) {
    uVar9 = 4;
  }
  else if (uVar3 == 3) {
    uVar10 = uVar10 - 0x96;
    uVar9 = uVar2 & 1 ^ 1;
    local_70[2] = 1;
  }
  else {
    uVar7 = local_70[0] << 1;
    bVar6 = uVar2 != 0x800000;
    iVar11 = -0x98;
    if (bVar6) {
      iVar11 = -0x97;
    }
    local_70[0] = 0x2000000;
    if (bVar6) {
      local_70[0] = uVar7;
    }
    local_70[2] = 1;
    if (!bVar6) {
      local_70[2] = 2;
    }
    uVar10 = iVar11 + uVar10;
    uVar9 = uVar2 & 1 ^ 1;
  }
  local_70[1] = 1;
  local_58 = (short)uVar10;
  local_56 = (undefined1)uVar9;
  if (uVar9 < 2) {
    pcVar13 = "-+";
    uVar7 = (ulong)(param_1 >> 0x1f);
    pcVar5 = pcVar13;
    if (-1 < (int)param_1) {
      pcVar13 = (char *)0x1;
      pcVar5 = "+";
    }
    if (param_3 != 0) {
      uVar7 = 1;
      pcVar13 = pcVar5;
    }
    lVar4 = -0xc;
    if ((uVar10 & 0x8000) == 0) {
      lVar4 = 5;
    }
    uVar1 = ((ulong)(lVar4 * local_58) >> 4) + 0x15;
    if (uVar12 < uVar1) {
      uVar1 = uVar12 + 1;
    }
    if (0x400 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= sig_digits",0x29,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b568);
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_120,local_70,local_520,uVar1,0x8000);
    if (CONCAT62(uStack_11e,local_120) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,local_70,local_520,uVar1,0x8000);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_11e,local_120);
      pcStack_88 = pcStack_118;
      local_80._0_8_ = local_110;
    }
    local_80 = core::num::imp::flt2dec::digits_to_exp_str
                         (local_90,pcStack_88,local_80._0_8_ & 0xffff,uVar12,param_5,&local_120,6);
    goto LAB_00733dc0;
  }
  if ((uVar9 - 2 & 0xff) == 0) {
    uVar7 = 0;
    pcStack_118 = "NaN";
    pcVar13 = (char *)0x1;
  }
  else {
    pcVar13 = "-+";
    uVar7 = (ulong)(param_1 >> 0x1f);
    pcVar5 = pcVar13;
    if (-1 < (int)param_1) {
      pcVar13 = (char *)0x1;
      pcVar5 = "+";
    }
    if (param_3 != 0) {
      uVar7 = 1;
      pcVar13 = pcVar5;
    }
    if ((uVar9 - 2 & 0xff) != 2) {
      local_120 = 2;
      pcStack_118 = "inf";
      local_110 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_120;
      goto LAB_00733dc0;
    }
    if (param_4 != 0) {
      pcStack_118 = "0.";
      local_110 = 2;
      local_e8 = "E0";
      if (param_5 == 0) {
        local_e8 = "e0E0";
      }
      local_120 = 2;
      local_108 = 0;
      local_f0 = 2;
      uStack_e0 = 2;
      local_80._8_8_ = 3;
      local_80._0_8_ = &local_120;
      local_100 = uVar12;
      goto LAB_00733dc0;
    }
    pcStack_118 = "0E0e0E0";
    if (param_5 == 0) {
      pcStack_118 = "0e00E0e0E0";
    }
  }
  local_110 = 3;
  local_120 = 2;
  local_80._8_8_ = 1;
  local_80._0_8_ = &local_120;
LAB_00733dc0:
  local_90 = pcVar13;
  pcStack_88 = (char *)uVar7;
  FUN_00739c78(param_2,&local_90);
  return;
}


// ===== 00733e04  FUN_00733e04 =====

void FUN_00733e04(uint param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  short sVar14;
  byte *pbVar15;
  undefined1 auStack_141 [17];
  undefined2 local_130 [4];
  byte *local_128;
  undefined8 uStack_120;
  undefined2 local_118 [4];
  undefined *local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  byte *local_f8;
  long lStack_f0;
  undefined2 local_e8 [36];
  byte *local_a0;
  ulong uStack_98;
  undefined2 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  short local_68;
  undefined1 local_66;
  byte *local_60;
  long lStack_58;
  short local_50;
  
  uVar11 = 2;
  bVar8 = (param_1 & 0x3ff) == 0;
  uVar10 = 2;
  if (!bVar8) {
    uVar10 = 3;
  }
  uVar2 = param_1 >> 10 & 0x1f;
  local_68 = (short)uVar2;
  uVar4 = (param_1 & 0x3ff) << 1;
  if (uVar2 != 0) {
    uVar4 = param_1 & 0x3ff | 0x400;
  }
  local_80 = (ulong)uVar4;
  if ((param_1 & 0x7c00) != 0) {
    uVar10 = 4;
  }
  uVar2 = (uint)bVar8;
  if ((param_1 & 0x7c00) != 0x7c00) {
    uVar2 = uVar10;
  }
  local_70 = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar11 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar11 = 4;
  }
  else if (uVar2 == 3) {
    local_68 = local_68 + -0x19;
    uVar11 = uVar4 & 1 ^ 1;
    local_70 = 1;
  }
  else {
    uVar9 = local_80 << 1;
    bVar8 = uVar4 != 0x400;
    uVar11 = uVar4 & 1 ^ 1;
    local_80 = 0x1000;
    if (bVar8) {
      local_80 = uVar9;
    }
    sVar14 = -0x1b;
    if (bVar8) {
      sVar14 = -0x1a;
    }
    local_70 = 1;
    if (!bVar8) {
      local_70 = 2;
    }
    local_68 = sVar14 + local_68;
  }
  uVar10 = (uint)(short)param_1;
  uStack_78 = 1;
  local_66 = (undefined1)uVar11;
  if (uVar11 < 2) {
    pbVar1 = (byte *)0x46693f;
    uVar9 = (ulong)(uVar10 >> 0xf & 1);
    pbVar15 = pbVar1;
    if (-1 < (int)uVar10) {
      pbVar1 = (byte *)0x1;
      pbVar15 = (byte *)0x466940;
    }
    if (param_3 != 0) {
      uVar9 = 1;
    }
    if (param_3 == 0) {
      pbVar15 = pbVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_a0,&local_80,auStack_141,0x11);
    local_128 = local_a0;
    if (local_a0 == (byte *)0x0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest
                (&local_60,&local_80,auStack_141,0x11);
      local_128 = local_60;
      uStack_98 = lStack_58;
      local_90._0_2_ = local_50;
    }
    if (uStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: !buf.is_empty()",0x21,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bae8);
    }
    if (*local_128 < 0x31) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf[0] > b\'0\'eEe-E-",0x1f,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bb00);
    }
    uStack_120 = 1;
    if (uStack_98 + -1 == 0) {
      puVar13 = local_118;
      uStack_88 = 3;
    }
    else {
      local_f8 = local_128 + 1;
      local_118[0] = 2;
      puVar13 = local_e8;
      local_110 = &DAT_0046716e;
      uStack_108 = 1;
      local_100 = 2;
      uStack_88 = 5;
      lStack_f0 = uStack_98 + -1;
    }
    pcVar6 = "Ee-E-";
    pcVar7 = "E-";
    if (param_4 == 0) {
      pcVar6 = "eEe-E-";
      pcVar7 = "e-E-";
    }
    iVar12 = (int)(short)local_90;
    if (0 < iVar12) {
      pcVar7 = pcVar6;
    }
    *puVar13 = 2;
    uVar3 = 1;
    if (iVar12 < 1) {
      uVar3 = 2;
    }
    *(char **)(puVar13 + 4) = pcVar7;
    *(undefined8 *)(puVar13 + 8) = uVar3;
    iVar5 = iVar12 + -1;
    if (iVar12 + -1 < 0) {
      iVar5 = 1 - (short)local_90;
    }
    puVar13[0xc] = 1;
    puVar13[0xd] = (short)iVar5;
  }
  else {
    if ((uVar11 - 2 & 0xff) == 0) {
      uVar9 = 0;
      local_128 = (byte *)0x466941;
      pbVar15 = (byte *)0x1;
    }
    else {
      pbVar15 = (byte *)0x46693f;
      uVar9 = (ulong)(uVar10 >> 0xf & 1);
      pbVar1 = pbVar15;
      if (-1 < (int)uVar10) {
        pbVar15 = (byte *)0x1;
        pbVar1 = (byte *)0x466940;
      }
      if (param_3 != 0) {
        uVar9 = 1;
        pbVar15 = pbVar1;
      }
      if ((uVar11 - 2 & 0xff) != 2) {
        uStack_88 = 1;
        local_128 = (byte *)0x466944;
        uStack_120 = 3;
        goto LAB_007340fc;
      }
      local_128 = (byte *)0x46696f;
      if (param_4 == 0) {
        local_128 = (byte *)0x46696c;
      }
    }
    uStack_120 = 3;
    uStack_88 = 1;
  }
LAB_007340fc:
  local_130[0] = 2;
  local_90 = local_130;
  local_a0 = pbVar15;
  uStack_98 = uVar9;
  FUN_00739c78(param_2,&local_a0);
  return;
}


// ===== 00734140  FUN_00734140 =====

void FUN_00734140(ulong param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  short sVar13;
  byte *pbVar14;
  undefined1 auStack_141 [17];
  undefined2 local_130 [4];
  byte *local_128;
  undefined8 uStack_120;
  undefined2 local_118 [4];
  undefined *local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  byte *local_f8;
  long lStack_f0;
  undefined2 local_e8 [36];
  byte *local_a0;
  ulong uStack_98;
  undefined2 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  ushort local_68;
  undefined1 local_66;
  byte *local_60;
  long lStack_58;
  short local_50;
  
  uVar10 = 2;
  uVar8 = param_1 & 0xfffffffffffff;
  uVar9 = 2;
  if (uVar8 != 0) {
    uVar9 = 3;
  }
  local_68 = (ushort)(param_1 >> 0x34) & 0x7ff;
  local_80 = (param_1 & 0xfffffffffffff) << 1;
  if ((param_1 >> 0x34 & 0x7ff) != 0) {
    local_80 = uVar8 | 0x10000000000000;
  }
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar9 = 4;
  }
  uVar3 = (uint)(uVar8 == 0);
  if ((param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    uVar3 = uVar9;
  }
  local_70 = (ulong)uVar3;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      uVar10 = 3;
    }
  }
  else if (uVar3 == 2) {
    uVar10 = 4;
  }
  else {
    uVar10 = (uint)local_80 & 1;
    if (uVar3 == 3) {
      local_68 = local_68 - 0x433;
      uVar10 = uVar10 ^ 1;
      local_70 = 1;
    }
    else {
      uVar8 = local_80 << 1;
      uVar10 = uVar10 ^ 1;
      bVar7 = local_80 != 0x10000000000000;
      local_80 = 0x40000000000000;
      if (bVar7) {
        local_80 = uVar8;
      }
      sVar13 = -0x435;
      if (bVar7) {
        sVar13 = -0x434;
      }
      local_70 = 1;
      if (!bVar7) {
        local_70 = 2;
      }
      local_68 = sVar13 + local_68;
    }
  }
  uStack_78 = 1;
  local_66 = (undefined1)uVar10;
  if (uVar10 < 2) {
    pbVar1 = (byte *)0x46693f;
    uVar8 = param_1 >> 0x3f;
    pbVar14 = pbVar1;
    if (-1 < (long)param_1) {
      pbVar1 = (byte *)0x1;
      pbVar14 = (byte *)0x466940;
    }
    if (param_3 != 0) {
      uVar8 = 1;
    }
    if (param_3 == 0) {
      pbVar14 = pbVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_a0,&local_80,auStack_141,0x11);
    local_128 = local_a0;
    if (local_a0 == (byte *)0x0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest
                (&local_60,&local_80,auStack_141,0x11);
      local_128 = local_60;
      uStack_98 = lStack_58;
      local_90._0_2_ = local_50;
    }
    if (uStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: !buf.is_empty()",0x21,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bae8);
    }
    if (*local_128 < 0x31) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf[0] > b\'0\'eEe-E-",0x1f,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bb00);
    }
    uStack_120 = 1;
    if (uStack_98 + -1 == 0) {
      puVar12 = local_118;
      uStack_88 = 3;
    }
    else {
      local_f8 = local_128 + 1;
      local_118[0] = 2;
      puVar12 = local_e8;
      local_110 = &DAT_0046716e;
      uStack_108 = 1;
      local_100 = 2;
      uStack_88 = 5;
      lStack_f0 = uStack_98 + -1;
    }
    pcVar5 = "Ee-E-";
    pcVar6 = "E-";
    if (param_4 == 0) {
      pcVar5 = "eEe-E-";
      pcVar6 = "e-E-";
    }
    iVar11 = (int)(short)local_90;
    if (0 < iVar11) {
      pcVar6 = pcVar5;
    }
    *puVar12 = 2;
    uVar2 = 1;
    if (iVar11 < 1) {
      uVar2 = 2;
    }
    *(char **)(puVar12 + 4) = pcVar6;
    *(undefined8 *)(puVar12 + 8) = uVar2;
    iVar4 = iVar11 + -1;
    if (iVar11 + -1 < 0) {
      iVar4 = 1 - (short)local_90;
    }
    puVar12[0xc] = 1;
    puVar12[0xd] = (short)iVar4;
  }
  else {
    if ((uVar10 - 2 & 0xff) == 0) {
      uVar8 = 0;
      local_128 = (byte *)0x466941;
      pbVar14 = (byte *)0x1;
    }
    else {
      pbVar14 = (byte *)0x46693f;
      uVar8 = param_1 >> 0x3f;
      pbVar1 = pbVar14;
      if (-1 < (long)param_1) {
        pbVar14 = (byte *)0x1;
        pbVar1 = (byte *)0x466940;
      }
      if (param_3 != 0) {
        uVar8 = 1;
        pbVar14 = pbVar1;
      }
      if ((uVar10 - 2 & 0xff) != 2) {
        uStack_88 = 1;
        local_128 = (byte *)0x466944;
        uStack_120 = 3;
        goto LAB_00734434;
      }
      local_128 = (byte *)0x46696f;
      if (param_4 == 0) {
        local_128 = (byte *)0x46696c;
      }
    }
    uStack_120 = 3;
    uStack_88 = 1;
  }
LAB_00734434:
  local_130[0] = 2;
  local_90 = local_130;
  local_a0 = pbVar14;
  uStack_98 = uVar8;
  FUN_00739c78(param_2,&local_a0);
  return;
}


// ===== 00734478  FUN_00734478 =====

void FUN_00734478(uint param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  short sVar14;
  byte *pbVar15;
  undefined1 auStack_141 [17];
  undefined2 local_130 [4];
  byte *local_128;
  undefined8 uStack_120;
  undefined2 local_118 [4];
  undefined *local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  byte *local_f8;
  long lStack_f0;
  undefined2 local_e8 [36];
  byte *local_a0;
  ulong uStack_98;
  undefined2 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  short local_68;
  undefined1 local_66;
  byte *local_60;
  long lStack_58;
  short local_50;
  
  uVar11 = 2;
  bVar8 = (param_1 & 0x7fffff) == 0;
  uVar10 = 2;
  if (!bVar8) {
    uVar10 = 3;
  }
  uVar2 = param_1 >> 0x17 & 0xff;
  local_68 = (short)uVar2;
  uVar4 = (param_1 & 0x7fffff) << 1;
  if (uVar2 != 0) {
    uVar4 = param_1 & 0x7fffff | 0x800000;
  }
  local_80 = (ulong)uVar4;
  if ((param_1 & 0x7f800000) != 0) {
    uVar10 = 4;
  }
  uVar2 = (uint)bVar8;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar2 = uVar10;
  }
  local_70 = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar11 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar11 = 4;
  }
  else if (uVar2 == 3) {
    local_68 = local_68 + -0x96;
    uVar11 = uVar4 & 1 ^ 1;
    local_70 = 1;
  }
  else {
    uVar9 = local_80 << 1;
    bVar8 = uVar4 != 0x800000;
    sVar14 = -0x98;
    if (bVar8) {
      sVar14 = -0x97;
    }
    local_80 = 0x2000000;
    if (bVar8) {
      local_80 = uVar9;
    }
    local_70 = 1;
    if (!bVar8) {
      local_70 = 2;
    }
    local_68 = sVar14 + local_68;
    uVar11 = uVar4 & 1 ^ 1;
  }
  uStack_78 = 1;
  local_66 = (undefined1)uVar11;
  if (uVar11 < 2) {
    pbVar1 = (byte *)0x46693f;
    uVar9 = (ulong)(param_1 >> 0x1f);
    pbVar15 = pbVar1;
    if (-1 < (int)param_1) {
      pbVar1 = (byte *)0x1;
      pbVar15 = (byte *)0x466940;
    }
    if (param_3 != 0) {
      uVar9 = 1;
    }
    if (param_3 == 0) {
      pbVar15 = pbVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_a0,&local_80,auStack_141,0x11);
    local_128 = local_a0;
    if (local_a0 == (byte *)0x0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest
                (&local_60,&local_80,auStack_141,0x11);
      local_128 = local_60;
      uStack_98 = lStack_58;
      local_90._0_2_ = local_50;
    }
    if (uStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: !buf.is_empty()",0x21,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bae8);
    }
    if (*local_128 < 0x31) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf[0] > b\'0\'eEe-E-",0x1f,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bb00);
    }
    uStack_120 = 1;
    if (uStack_98 + -1 == 0) {
      puVar13 = local_118;
      uStack_88 = 3;
    }
    else {
      local_f8 = local_128 + 1;
      local_118[0] = 2;
      puVar13 = local_e8;
      local_110 = &DAT_0046716e;
      uStack_108 = 1;
      local_100 = 2;
      uStack_88 = 5;
      lStack_f0 = uStack_98 + -1;
    }
    pcVar6 = "Ee-E-";
    pcVar7 = "E-";
    if (param_4 == 0) {
      pcVar6 = "eEe-E-";
      pcVar7 = "e-E-";
    }
    iVar12 = (int)(short)local_90;
    if (0 < iVar12) {
      pcVar7 = pcVar6;
    }
    *puVar13 = 2;
    uVar3 = 1;
    if (iVar12 < 1) {
      uVar3 = 2;
    }
    *(char **)(puVar13 + 4) = pcVar7;
    *(undefined8 *)(puVar13 + 8) = uVar3;
    iVar5 = iVar12 + -1;
    if (iVar12 + -1 < 0) {
      iVar5 = 1 - (short)local_90;
    }
    puVar13[0xc] = 1;
    puVar13[0xd] = (short)iVar5;
  }
  else {
    if ((uVar11 - 2 & 0xff) == 0) {
      uVar9 = 0;
      local_128 = (byte *)0x466941;
      pbVar15 = (byte *)0x1;
    }
    else {
      pbVar15 = (byte *)0x46693f;
      uVar9 = (ulong)(param_1 >> 0x1f);
      pbVar1 = pbVar15;
      if (-1 < (int)param_1) {
        pbVar15 = (byte *)0x1;
        pbVar1 = (byte *)0x466940;
      }
      if (param_3 != 0) {
        uVar9 = 1;
        pbVar15 = pbVar1;
      }
      if ((uVar11 - 2 & 0xff) != 2) {
        uStack_88 = 1;
        local_128 = (byte *)0x466944;
        uStack_120 = 3;
        goto LAB_00734768;
      }
      local_128 = (byte *)0x46696f;
      if (param_4 == 0) {
        local_128 = (byte *)0x46696c;
      }
    }
    uStack_120 = 3;
    uStack_88 = 1;
  }
LAB_00734768:
  local_130[0] = 2;
  local_90 = local_130;
  local_a0 = pbVar15;
  uStack_98 = uVar9;
  FUN_00739c78(param_2,&local_a0);
  return;
}


// ===== 007347ac  FUN_007347ac =====

undefined1  [16] FUN_007347ac(long param_1,long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((param_1 + 0x1b < 0 != SCARRY8(param_1,0x1b)) || (param_2 == 0)) {
LAB_00734850:
    return ZEXT816(0);
  }
  if (param_1 < 5) {
    uVar12 = param_2 << (LZCOUNT(param_2) & 0x3fU);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1560);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12;
    uVar10 = SUB168(auVar2 * auVar4,8);
    uVar8 = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1560) * uVar12;
    if ((((uVar10 ^ 0xffffffffffffffff) & 0x7ffffffffffff) == 0) &&
       (auVar3._8_8_ = 0,
       auVar3._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1568),
       auVar5._8_8_ = 0, auVar5._0_8_ = uVar12, uVar12 = SUB168(auVar3 * auVar5,8),
       bVar6 = CARRY8(uVar12,uVar8), uVar8 = uVar12 + uVar8, bVar6)) {
      uVar10 = uVar10 + 1;
    }
    uVar12 = -((long)uVar10 >> 0x3f) + 0x33;
    iVar9 = ((int)-((long)uVar10 >> 0x3f) - (int)LZCOUNT(param_2)) +
            ((int)param_1 * 0x3526a >> 0x10);
    uVar11 = uVar10 >> (uVar12 & 0x3f);
    uVar1 = iVar9 + 0x3f;
    if (iVar9 + 0x4d < 0 != SCARRY4(uVar1,0xe)) {
      if (0xffffffb2 < uVar1) {
        uVar11 = uVar11 >> ((ulong)(-uVar1 - 0xe) & 0x3f);
        auVar14._4_4_ = 0;
        auVar14._0_4_ = (uint)((int)(uVar11 & 1) + (int)uVar11) >> 1;
        auVar14[8] = 0x7ff < (uVar11 & 1) + uVar11;
        auVar14._9_7_ = 0;
        return auVar14;
      }
      goto LAB_00734850;
    }
    bVar6 = uVar11 << (uVar12 & 0x3f) == uVar10;
    bVar7 = (uVar11 & 3) == 1;
    uVar10 = uVar11 & 0xfffc;
    if ((((!bVar6 || !bVar7) || uVar8 >= 2) || param_1 == -0x17) ||
        ((bVar6 && bVar7) && uVar8 < 2) && param_1 + 0x17 < 0 != SCARRY8(param_1,0x17)) {
      uVar10 = uVar11;
    }
    uVar10 = (uVar10 & 1) + uVar10;
    iVar9 = 0xf;
    if (0xfff < uVar10) {
      iVar9 = 0x10;
    }
    if (iVar9 + uVar1 < 0x1f) {
      uVar8 = 0;
      if (uVar10 < 0x1000) {
        uVar8 = uVar10 >> 1 & 0xfffffffffffffbff;
      }
      auVar13._8_4_ = iVar9 + uVar1;
      auVar13._0_8_ = uVar8;
      auVar13._12_4_ = 0;
      return auVar13;
    }
  }
  return ZEXT816(0x1f) << 0x40;
}


// ===== 007348d8  FUN_007348d8 =====

undefined1  [16] FUN_007348d8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((param_1 + 0x156 < 0 != SCARRY8(param_1,0x156)) || (param_2 == 0)) {
LAB_0073499c:
    return ZEXT816(0);
  }
  if (param_1 < 0x135) {
    uVar12 = param_2 << (LZCOUNT(param_2) & 0x3fU);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1560);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    uVar10 = SUB168(auVar4 * auVar6,8);
    uVar9 = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1560) * uVar12;
    if (((~SUB164(auVar4 * auVar6,8) & 0x1ff) == 0) &&
       (auVar5._8_8_ = 0,
       auVar5._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1568),
       auVar7._8_8_ = 0, auVar7._0_8_ = uVar12, uVar12 = SUB168(auVar5 * auVar7,8),
       bVar8 = CARRY8(uVar12,uVar9), uVar9 = uVar12 + uVar9, bVar8)) {
      uVar10 = uVar10 + 1;
    }
    if ((0x52 < param_1 + 0x1bU) && (uVar9 == 0xffffffffffffffff)) {
      return ZEXT816(0xffffffff) << 0x40;
    }
    lVar2 = -((long)uVar10 >> 0x3f) + 9;
    iVar11 = ((int)-((long)uVar10 >> 0x3f) - (int)LZCOUNT(param_2)) +
             ((int)param_1 * 0x3526a >> 0x10);
    uVar12 = uVar10 >> lVar2;
    uVar1 = iVar11 + 0x3f;
    if (iVar11 + 0x43d < 0 != SCARRY4(uVar1,0x3fe)) {
      if (0xfffffbc2 < uVar1) {
        uVar12 = uVar12 >> ((ulong)(-uVar1 - 0x3fe) & 0x3f);
        uVar12 = (uVar12 & 1) + uVar12;
        auVar14._0_8_ = uVar12 >> 1;
        auVar14[8] = (uVar12 & 0x1e0000000000000) != 0;
        auVar14._9_7_ = 0;
        return auVar14;
      }
      goto LAB_0073499c;
    }
    uVar3 = uVar12 & 0xfffffffffffffc;
    if (((uVar12 << lVar2 != uVar10 || (uVar12 & 3) != 1) || 1 < uVar9) || 0x1b < param_1 + 4U) {
      uVar3 = uVar12;
    }
    uVar3 = (uVar3 & 1) + uVar3;
    uVar9 = uVar3 >> 0x36;
    iVar11 = 0x3ff;
    if (uVar9 != 0) {
      iVar11 = 0x400;
    }
    if (iVar11 + uVar1 < 0x7ff) {
      uVar10 = 0;
      if (uVar9 == 0) {
        uVar10 = uVar3 >> 1 & 0xffefffffffffffff;
      }
      auVar13._8_4_ = iVar11 + uVar1;
      auVar13._0_8_ = uVar10;
      auVar13._12_4_ = 0;
      return auVar13;
    }
  }
  return ZEXT816(0x7ff) << 0x40;
}


// ===== 00734a24  FUN_00734a24 =====

undefined1  [16] FUN_00734a24(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((param_1 + 0x41 < 0 != SCARRY8(param_1,0x41)) || (param_2 == 0)) {
LAB_00734ae8:
    return ZEXT816(0);
  }
  if (param_1 < 0x27) {
    uVar11 = param_2 << (LZCOUNT(param_2) & 0x3fU);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1560);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    uVar9 = SUB168(auVar2 * auVar4,8);
    uVar8 = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1560) * uVar11;
    if ((((uVar9 ^ 0xffffffffffffffff) & 0x3fffffffff) == 0) &&
       (auVar3._8_8_ = 0,
       auVar3._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_0099f828 + param_1 * 0x10 + 0x1568),
       auVar5._8_8_ = 0, auVar5._0_8_ = uVar11, uVar11 = SUB168(auVar3 * auVar5,8),
       bVar6 = CARRY8(uVar11,uVar8), uVar8 = uVar11 + uVar8, bVar6)) {
      uVar9 = uVar9 + 1;
    }
    if ((param_1 == -0x1c || param_1 + 0x1c < 0 != SCARRY8(param_1,0x1c)) &&
       (uVar8 == 0xffffffffffffffff)) {
      return ZEXT816(0xffffffff) << 0x40;
    }
    uVar12 = uVar9 >> 0x3f | 0x26;
    iVar10 = (-(int)LZCOUNT(param_2) - (int)((long)uVar9 >> 0x3f)) +
             ((int)param_1 * 0x3526a >> 0x10);
    uVar11 = uVar9 >> uVar12;
    uVar7 = iVar10 + 0x3f;
    if (iVar10 + 0xbd < 0 != SCARRY4(uVar7,0x7e)) {
      if (0xffffff42 < uVar7) {
        uVar7 = (uint)(uVar11 >> ((ulong)(-uVar7 - 0x7e) & 0x3f));
        uVar7 = (uVar7 & 1) + uVar7;
        auVar14._4_4_ = 0;
        auVar14._0_4_ = uVar7 >> 1;
        auVar14[8] = (uVar7 & 0x7000000) != 0;
        auVar14._9_7_ = 0;
        return auVar14;
      }
      goto LAB_00734ae8;
    }
    uVar1 = uVar11 & 0x3fffffc;
    if (((uVar11 << uVar12 != uVar9 || (uVar11 & 3) != 1) || 1 < uVar8) || 0x1b < param_1 + 0x11U) {
      uVar1 = uVar11;
    }
    uVar1 = (uVar1 & 1) + uVar1;
    uVar8 = uVar1 >> 0x19;
    iVar10 = 0x7f;
    if (uVar8 != 0) {
      iVar10 = 0x80;
    }
    if (iVar10 + uVar7 < 0xff) {
      uVar9 = 0;
      if (uVar8 == 0) {
        uVar9 = uVar1 >> 1 & 0x37fffff;
      }
      auVar13._8_4_ = iVar10 + uVar7;
      auVar13._0_8_ = uVar9;
      auVar13._12_4_ = 0;
      return auVar13;
    }
  }
  return ZEXT816(0xff) << 0x40;
}


// ===== 00734b74  FUN_00734b74 =====

undefined8 FUN_00734b74(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_60;
  ulong uStack_58;
  undefined1 *local_50;
  code *pcStack_48;
  undefined1 *local_40;
  undefined *local_38;
  
  if (*(long *)*param_1 == 1) {
    local_60 = ((long *)*param_1)[1];
    local_50 = (undefined1 *)param_1[1];
    pcStack_48 = FUN_00746ec0;
    uVar3 = *param_2;
    uVar1 = param_2[1];
    local_38 = PTR_fmt_0099f540;
    local_40 = (undefined1 *)&local_60;
    uVar2 = core::fmt::write(uVar3,uVar1,&DAT_00366099,&local_50);
    uVar4 = uStack_58;
  }
  else {
    local_50 = (undefined1 *)param_1[1];
    uVar3 = *param_2;
    uVar1 = param_2[1];
    pcStack_48 = FUN_00746ec0;
    uVar2 = core::fmt::write(uVar3,uVar1,&DAT_0036609c,&local_50);
    uVar4 = uStack_58;
  }
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uStack_58 = *(ulong *)param_1[2];
  if (uStack_58 != 0) {
    if (9 < uStack_58) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_58,9,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b658);
    }
    local_60 = param_1[3];
    if ((*(byte *)((long)param_2 + 0x13) >> 4 & 1) == 0) {
      uVar4 = *(ulong *)param_1[4];
      if (uVar4 >> 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037b778,0x41,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b640);
      }
    }
    else {
      uVar4 = (ulong)*(ushort *)((long)param_2 + 0x16);
    }
    pcStack_48 = FUN_00746ec0;
    local_40 = (undefined1 *)0x0;
    uVar2 = (ulong)local_38 >> 0x10;
    local_38 = (undefined *)CONCAT62((int6)uVar2,(short)uVar4);
    local_50 = (undefined1 *)&local_60;
    uVar2 = core::fmt::write(uVar3,uVar1,&DAT_00466ab2,&local_50);
    uVar4 = uStack_58;
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  uStack_58 = uVar4;
  local_50 = (undefined1 *)param_1[5];
  pcStack_48 = FUN_00746ec0;
  uVar3 = core::fmt::write(uVar3,uVar1,&DAT_00368e80,&local_50);
  return uVar3;
}


// ===== 00734d08  <core::str::str>::escape_debug =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::escape_debug */

void __rustcall <core::str::str>::escape_debug(long *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uVar3 = 0;
    pbVar4 = param_2;
  }
  else {
    pbVar4 = param_2 + 1;
    uVar2 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      if (uVar2 < 0xe0) {
        uVar2 = param_2[1] & 0x3f | (uVar2 & 0x1f) << 6;
        pbVar4 = param_2 + 2;
      }
      else {
        uVar1 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar2 < 0xf0) {
          uVar2 = uVar1 | (uVar2 & 0x1f) << 0xc;
          pbVar4 = param_2 + 3;
        }
        else {
          pbVar4 = param_2 + 4;
          uVar2 = param_2[3] & 0x3f | uVar1 << 6 | (uVar2 & 7) << 0x12;
        }
      }
    }
    FUN_00735594(&local_40,uVar2,0x10101);
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)pbVar4;
  param_1[1] = (long)(param_2 + param_3);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)((long)param_1 + 0x6c) = uStack_38;
  *(undefined8 *)((long)param_1 + 100) = local_40;
  return;
}


// ===== 00734dec  <core::str::str>::substr_range =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::substr_range */

void __rustcall
<core::str::str>::substr_range
          (undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_4 - param_2;
  uVar1 = 0;
  if ((uVar2 <= param_3) && (uVar2 + param_5 <= param_3)) {
    uVar1 = 1;
    param_1[1] = uVar2;
    param_1[2] = uVar2 + param_5;
  }
  *param_1 = uVar1;
  return;
}


// ===== 00734e18  <core::str::str>::from_utf8_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::from_utf8_mut */

void __rustcall <core::str::str>::from_utf8_mut(void)

{
  (*(code *)PTR_from_utf8_mut_009a1ed0)();
  return;
}


// ===== 00734e1c  <core::str::str>::split_at_mut_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::split_at_mut_unchecked */

void __rustcall
<core::str::str>::split_at_mut_unchecked(long *param_1,long param_2,long param_3,long param_4)

{
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[2] = param_2 + param_4;
  param_1[3] = param_3 - param_4;
  return;
}


// ===== 00734e30  <core::str::str>::from_utf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::from_utf8 */

void __rustcall <core::str::str>::from_utf8(void)

{
  (*(code *)PTR_from_utf8_009a0658)();
  return;
}


// ===== 00734e34  FUN_00734e34 =====

/* WARNING: Removing unreachable block (ram,0x00734eb8) */

ulong FUN_00734e34(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong in_x17;
  
  pbVar1 = (byte *)*param_1;
  lVar2 = param_1[1];
  if (lVar2 == 0) goto LAB_00735198;
  pbVar9 = pbVar1 + 1;
  uVar6 = *pbVar1 - 0x30;
  if ((9 < uVar6) || (lVar10 = lVar2 + -1, lVar10 == 0)) goto LAB_00735198;
  if (pbVar1[1] - 0x30 < 10) {
    uVar7 = (pbVar1[1] - 0x30) + uVar6 * 10;
    lVar10 = lVar2 + -2;
    if (lVar10 == 0) {
LAB_00734ebc:
      lVar10 = 0;
      pbVar9 = pbVar1 + lVar2;
    }
    else if (pbVar1[2] - 0x30 < 10) {
      uVar7 = (pbVar1[2] - 0x30) + uVar7 * 10;
      lVar10 = lVar2 + -3;
      if (lVar10 == 0) goto LAB_00734ebc;
      pbVar9 = pbVar1 + 3;
      if (*pbVar9 - 0x30 < 10) goto LAB_00735198;
    }
    else {
      pbVar9 = pbVar1 + 2;
    }
    if ((uVar6 == 0) || (uVar6 = uVar7, 0xff < uVar7)) goto LAB_00735198;
  }
  if (lVar10 == 0) goto LAB_00735198;
  uVar7 = (uint)*pbVar9;
  if (*pbVar9 != 0x2e) goto LAB_00735198;
  uVar12 = lVar10 - 1;
  if ((uVar12 == 0) || (uVar7 = pbVar9[1] - 0x30, 9 < uVar7)) {
LAB_00734fc0:
    bVar4 = false;
    pbVar11 = pbVar9 + 1;
    uVar13 = uVar12;
    uVar8 = uVar7;
  }
  else {
    if (lVar10 - 2U == 0) goto LAB_00735198;
    uVar8 = pbVar9[2] - 0x30;
    in_x17 = (ulong)uVar8;
    if (uVar8 < 10) {
      uVar8 = uVar8 + uVar7 * 10;
      in_x17 = lVar10 - 3;
      if (in_x17 == 0) {
LAB_00734f94:
        in_x17 = 0;
        pbVar11 = pbVar9 + lVar10;
      }
      else if (pbVar9[3] - 0x30 < 10) {
        uVar8 = (pbVar9[3] - 0x30) + uVar8 * 10;
        in_x17 = lVar10 - 4;
        if (in_x17 == 0) goto LAB_00734f94;
        pbVar11 = pbVar9 + 4;
        if (*pbVar11 - 0x30 < 10) goto LAB_00734fc0;
      }
      else {
        pbVar11 = pbVar9 + 3;
      }
      if (uVar7 == 0) goto LAB_00734fc0;
      bVar4 = uVar8 < 0x100;
      uVar13 = in_x17;
      if (!bVar4) {
        pbVar11 = pbVar9 + 1;
        uVar13 = uVar12;
      }
    }
    else {
      bVar4 = true;
      pbVar11 = pbVar9 + 2;
      uVar13 = lVar10 - 2U;
      uVar8 = uVar7;
    }
  }
  if ((!bVar4) || (uVar13 == 0)) goto LAB_00735198;
  uVar7 = (uint)*pbVar11;
  if (*pbVar11 != 0x2e) goto LAB_00735198;
  uVar12 = uVar13 - 1;
  if ((uVar12 == 0) || (uVar7 = pbVar11[1] - 0x30, 9 < uVar7)) {
LAB_00735090:
    bVar4 = false;
    pbVar9 = pbVar11 + 1;
    uVar5 = uVar12;
  }
  else {
    in_x17 = uVar13 - 2;
    if (in_x17 == 0) goto LAB_00735198;
    if (pbVar11[2] - 0x30 < 10) {
      uVar14 = (pbVar11[2] - 0x30) + uVar7 * 10;
      in_x17 = (ulong)uVar14;
      uVar5 = uVar13 - 3;
      if (uVar5 == 0) {
LAB_00735064:
        uVar5 = 0;
        pbVar9 = pbVar11 + uVar13;
      }
      else if (pbVar11[3] - 0x30 < 10) {
        in_x17 = (ulong)((pbVar11[3] - 0x30) + uVar14 * 10);
        uVar5 = uVar13 - 4;
        if (uVar5 == 0) goto LAB_00735064;
        pbVar9 = pbVar11 + 4;
        if (*pbVar9 - 0x30 < 10) goto LAB_00735090;
      }
      else {
        pbVar9 = pbVar11 + 3;
      }
      if (uVar7 == 0) goto LAB_00735090;
      uVar7 = (uint)in_x17;
      bVar4 = uVar7 < 0x100;
      if (!bVar4) {
        pbVar9 = pbVar11 + 1;
        uVar5 = uVar12;
      }
    }
    else {
      bVar4 = true;
      pbVar9 = pbVar11 + 2;
      uVar5 = in_x17;
    }
  }
  uVar14 = (uint)in_x17;
  if (((!bVar4) || (uVar5 == 0)) || (*pbVar9 != 0x2e)) goto LAB_00735198;
  if (uVar5 - 1 == 0) {
LAB_0073516c:
    bVar4 = false;
LAB_00735170:
    *param_1 = (long)(pbVar9 + 1);
    param_1[1] = uVar5 - 1;
  }
  else {
    uVar14 = (uint)pbVar9[1];
    uVar3 = pbVar9[1] - 0x30;
    if (9 < uVar3) goto LAB_0073516c;
    uVar14 = uVar3;
    if (uVar5 - 2 != 0) {
      if (9 < pbVar9[2] - 0x30) {
        *param_1 = (long)(pbVar9 + 2);
        param_1[1] = uVar5 - 2;
        bVar4 = true;
        goto LAB_00735174;
      }
      lVar10 = uVar5 - 3;
      uVar14 = (pbVar9[2] - 0x30) + uVar3 * 10;
      if (lVar10 == 0) {
LAB_00735144:
        lVar10 = 0;
        pbVar11 = pbVar9 + uVar5;
      }
      else if (pbVar9[3] - 0x30 < 10) {
        uVar14 = (pbVar9[3] - 0x30) + uVar14 * 10;
        lVar10 = uVar5 - 4;
        if (lVar10 == 0) goto LAB_00735144;
        pbVar11 = pbVar9 + 4;
        if (*pbVar11 - 0x30 < 10) goto LAB_0073516c;
      }
      else {
        pbVar11 = pbVar9 + 3;
      }
      *param_1 = (long)pbVar11;
      param_1[1] = lVar10;
      if (uVar3 == 0) goto LAB_0073516c;
      bVar4 = uVar14 < 0x100;
      if (bVar4) goto LAB_00735174;
      goto LAB_00735170;
    }
    *param_1 = (long)(pbVar9 + 2);
    param_1[1] = 0;
    bVar4 = true;
  }
LAB_00735174:
  if (bVar4) {
    return (ulong)((uVar7 & 0xff) << 0x10 | uVar14 << 0x18 | (uVar8 & 0xff) << 8 | uVar6 & 0xff) <<
           8 | 1;
  }
LAB_00735198:
  *param_1 = (long)pbVar1;
  param_1[1] = lVar2;
  return (long)pbVar1 << 8;
}


// ===== 007351a8  FUN_007351a8 =====

void FUN_007351a8(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined6 uStack_40;
  undefined2 local_3a;
  undefined6 uStack_38;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  local_50 = 0;
  uStack_48 = 0;
  auVar7 = FUN_007437ec(param_2,&local_50,8);
  if (auVar7._0_8_ == 8) {
LAB_007351e4:
    auVar7._8_8_ = uStack_48;
    auVar7._0_8_ = local_50;
    *param_1 = 1;
    auVar7 = NEON_rev16(auVar7,1);
    *(long *)(param_1 + 9) = auVar7._8_8_;
    *(long *)(param_1 + 1) = auVar7._0_8_;
    return;
  }
  if (((((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
       (lVar5 = param_2[1], lVar5 != 0)) && (pcVar6 = (char *)*param_2, *pcVar6 == ':')) &&
     (lVar5 != 1)) {
    cVar3 = pcVar6[1];
    *param_2 = (long)(pcVar6 + 2);
    param_2[1] = lVar5 + -2;
    if (cVar3 == ':') {
      uStack_38 = 0;
      uVar4 = 7 - auVar7._0_8_;
      uStack_40 = 0;
      local_3a = 0;
      if (7 < uVar4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar4,7,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b5f8);
      }
      uVar4 = FUN_007437ec(param_2,&uStack_40);
      if (8 < uVar4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (8 - uVar4,8,8,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b5e0);
      }
      if (uVar4 == 8) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail(0,8,7,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b5c8)
        ;
      }
      memcpy((void *)((long)&local_50 + (8 - uVar4) * 2),&uStack_40,uVar4 << 1);
      goto LAB_007351e4;
    }
  }
  *param_1 = 0;
  *param_2 = lVar1;
  param_2[1] = lVar2;
  return;
}


// ===== 007352fc  FUN_007352fc =====

void FUN_007352fc(undefined4 *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  char cVar13;
  undefined2 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  char local_54;
  undefined8 local_53;
  undefined8 uStack_4b;
  
  pcVar1 = (char *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    cVar13 = *pcVar1;
    *param_2 = (long)(pcVar1 + 1);
    param_2[1] = lVar2 + -1;
    if (((cVar13 != '[') || (FUN_007351a8(&local_54), local_54 != '\x01')) ||
       (lVar9 = param_2[1], lVar9 == 0)) goto LAB_007353e4;
    pcVar12 = (char *)*param_2;
    uVar7 = 0;
    cVar13 = *pcVar12;
    lVar10 = lVar9;
    if ((lVar9 + -1 != 0) && (cVar13 == '%')) {
      uVar7 = (byte)pcVar12[1] - 0x30;
      if (9 < uVar7) {
        *param_2 = (long)(pcVar12 + 1);
        param_2[1] = lVar9 + -1;
        goto LAB_007353e4;
      }
      lVar16 = 2;
      do {
        lVar10 = lVar9 - lVar16;
        lVar4 = lVar9;
        if ((lVar10 == 0) || (uVar15 = (byte)pcVar12[lVar16] - 0x30, lVar4 = lVar16, 9 < uVar15)) {
          pcVar12 = pcVar12 + lVar4;
          bVar5 = true;
          goto LAB_0073541c;
        }
        uVar17 = (ulong)uVar7;
        uVar8 = (uint)(uVar17 * 10);
        uVar7 = uVar15 + uVar8;
      } while (((uVar17 * 10 & 0xffffffff00000000) == 0) &&
              (lVar16 = lVar16 + 1, !CARRY4(uVar15,uVar8)));
      bVar5 = false;
      lVar10 = lVar9;
LAB_0073541c:
      if (lVar10 == 0) goto LAB_007353e4;
      cVar13 = *pcVar12;
      if (!bVar5) {
        uVar7 = 0;
      }
    }
    uVar17 = lVar10 - 1;
    *param_2 = (long)(pcVar12 + 1);
    param_2[1] = uVar17;
    if (cVar13 != ']') goto LAB_007353e4;
    uVar15 = 0x5d;
    if (uVar17 != 0) {
      bVar6 = uVar17 != 1;
      uVar17 = 0;
      bVar5 = false;
      if (bVar6) {
        uVar15 = (uint)(byte)pcVar12[1];
        if (uVar15 == 0x3a) {
          uVar15 = (byte)pcVar12[2] - 0x30;
          if (9 < uVar15) goto LAB_007353e4;
          lVar9 = lVar10 + -3;
          pbVar18 = (byte *)(pcVar12 + 3);
          do {
            pbVar11 = (byte *)(pcVar12 + lVar10);
            if ((lVar9 == 0) || (bVar3 = *pbVar18, pbVar11 = pbVar18, 9 < bVar3 - 0x30)) {
              *param_2 = (long)pbVar11;
              param_2[1] = lVar9;
              bVar5 = true;
              break;
            }
            uVar17 = 0;
            bVar5 = false;
            uVar15 = ((uVar15 & 0xffff) + (uVar15 & 0xffff) * 4) * 2;
            if ((uVar15 & 0xf0000) != 0) goto LAB_007354c0;
            lVar9 = lVar9 + -1;
            pbVar18 = pbVar18 + 1;
            uVar15 = (uVar15 & 0xfffe) + (bVar3 - 0x30 & 0xffff);
          } while (uVar15 >> 0x10 == 0);
        }
        uVar14 = (undefined2)uVar15;
        if (!bVar5) goto LAB_007353e4;
        goto LAB_007354dc;
      }
    }
LAB_007354c0:
    uVar14 = (undefined2)uVar15;
    if ((uVar17 & 1) != 0) {
LAB_007354dc:
      param_1[5] = 0;
      param_1[6] = uVar7;
      *(undefined2 *)(param_1 + 7) = uVar14;
      *(undefined8 *)(param_1 + 3) = uStack_4b;
      *(undefined8 *)(param_1 + 1) = local_53;
      *param_1 = 1;
      return;
    }
  }
LAB_007353e4:
  *param_1 = 0;
  *param_2 = (long)pcVar1;
  param_2[1] = lVar2;
  return;
}


// ===== 00735508  FUN_00735508 =====

uint FUN_00735508(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x378) {
    return 1;
  }
  if (param_1 < 0x3fffe) {
    uVar1 = core::unicode::unicode_data::cn_planes_0_3::lookup_slow(param_1);
    return uVar1 ^ 1;
  }
  uVar1 = 1;
  if ((((param_1 != 0xe0001) && (0x5f < param_1 - 0xe0020)) && (0xef < param_1 - 0xe0100)) &&
     (0xfffd < param_1 - 0xf0000)) {
    uVar1 = (uint)(param_1 - 0x100000 < 0xfffe);
  }
  return uVar1;
}


// ===== 00735594  FUN_00735594 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00735594(uint *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_3e [2];
  undefined2 local_3c;
  undefined1 uStack_3a;
  char cStack_39;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  undefined2 local_34;
  
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 0xd) {
    if (uVar1 == 0) {
      *(undefined2 *)param_1 = 0x305c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
    if (uVar1 == 9) {
      *(undefined2 *)param_1 = 0x745c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
    if (uVar1 == 10) {
      *(undefined2 *)param_1 = 0x6e5c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
  }
  else if ((int)uVar1 < 0x27) {
    if (uVar1 == 0xd) {
      *(undefined2 *)param_1 = 0x725c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
    if (uVar1 == 0x22) {
      if (0xffff < (param_3 & 0xffffff)) {
        *(undefined2 *)param_1 = 0x225c;
        *(undefined8 *)((long)param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined1 *)((long)param_1 + 0xd) = 2;
        return;
      }
      goto LAB_00735794;
    }
  }
  else {
    if (uVar1 == 0x27) {
      if ((param_3 >> 8 & 1) != 0) {
        *(undefined2 *)param_1 = 0x275c;
        *(undefined8 *)((long)param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined1 *)((long)param_1 + 0xd) = 2;
        return;
      }
      goto LAB_00735794;
    }
    if (uVar1 == 0x5c) {
      *(undefined2 *)param_1 = 0x5c5c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
  }
  if (uVar1 - 0x20 < 0x5f) {
LAB_00735794:
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 3) = 0x80;
    *(undefined1 *)((long)param_1 + 0xd) = 0x81;
    return;
  }
  auVar6._0_4_ = uVar1 + (int)_s__00372a30;
  auVar6._4_4_ = uVar1 + (int)((ulong)_s__00372a30 >> 0x20);
  auVar6._8_4_ = uVar1 + (int)_UNK_00372a38;
  auVar6._12_4_ = uVar1 + (int)((ulong)_UNK_00372a38 >> 0x20);
  auVar7._8_4_ = _UNK_00371888;
  auVar7._0_8_ = _DAT_00371880;
  auVar7._12_4_ = _UNK_0037188c;
  auVar7 = NEON_cmhi(auVar7,auVar6,4);
  uVar5 = NEON_umaxv(auVar7,4);
  if ((((uVar5 & 1) == 0) && (uVar1 != 0x20)) && (0xfffd < uVar1 - 0x100000)) {
    if (uVar1 < 0x85) {
LAB_0073580c:
      uVar4 = FUN_00735508(param_2 & 0xffffffff);
      if ((uVar4 & 1) != 0) {
        *param_1 = uVar1;
        uVar3 = 0x81;
        cVar2 = -0x80;
        goto LAB_00735754;
      }
    }
    else {
      uVar4 = FUN_007403b0(param_2 & 0xffffffff);
      if ((uVar4 & 1) == 0) {
        if ((uVar1 < 0x300) || ((param_3 & 1) == 0)) {
          if (uVar1 < 0xad) goto LAB_0073580c;
        }
        else {
          uVar4 = core::unicode::unicode_data::grapheme_extend::lookup_slow(param_2 & 0xffffffff);
          if ((uVar4 & 1) != 0) goto LAB_007356ac;
        }
        uVar4 = core::unicode::unicode_data::default_ignorable_code_point::lookup_slow
                          (param_2 & 0xffffffff);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = core::unicode::unicode_data::cf::lookup_slow(param_2 & 0xffffffff),
           (uVar4 & 1) == 0)) goto LAB_0073580c;
      }
    }
  }
LAB_007356ac:
  uStack_3a = 0;
  cStack_39 = "0123456789abcdef"[(param_2 & 0xffffffff) >> 0x14];
  cStack_38 = "0123456789abcdef"[param_2 >> 0x10 & 0xf];
  cStack_37 = "0123456789abcdef"[param_2 >> 0xc & 0xf];
  local_3c = 0;
  cStack_36 = "0123456789abcdef"[param_2 >> 8 & 0xf];
  uVar4 = (ulong)LZCOUNT(uVar1 | 1) >> 2;
  cStack_35 = "0123456789abcdef"[param_2 >> 4 & 0xf];
  local_34._0_1_ = "0123456789abcdef"[param_2 & 0xf];
  cVar2 = (char)uVar4 + -2;
  auStack_3e[uVar4] = 0x5c;
  auStack_3e[uVar4 + 1] = 0x75;
  *(undefined1 *)((long)&local_3c + uVar4) = 0x7b;
  local_34 = CONCAT11(0x7d,(char)local_34);
  *(ulong *)param_1 =
       CONCAT17(cStack_35,
                CONCAT16(cStack_36,
                         CONCAT15(cStack_37,
                                  CONCAT14(cStack_38,
                                           CONCAT13(cStack_39,CONCAT12(uStack_3a,local_3c))))));
  uVar3 = 10;
  *(undefined2 *)(param_1 + 2) = local_34;
LAB_00735754:
  *(char *)(param_1 + 3) = cVar2;
  *(undefined1 *)((long)param_1 + 0xd) = uVar3;
  return;
}


// ===== 007358c4  <core::num::imp::fmt::core::num::imp::fmt::Part>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::fmt::core::num::imp::fmt::Part>::len */

ulong __rustcall <core::num::imp::fmt::core::num::imp::fmt::Part>::len(short *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    return *(ulong *)(param_1 + 4);
  }
  if (*param_1 == 1) {
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      uVar2 = (uint)uVar1;
      return (ulong)(((uVar1 + 0x5fff6 & uVar2 + 0x7ff9c ^ uVar2 + 0xdfc18 & uVar2 + 0x7d8f0) >>
                     0x11) + 1);
    }
    return 1;
  }
  return *(ulong *)(param_1 + 8);
}


// ===== 0073592c  <core::num::imp::fmt::core::num::imp::fmt::Part>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::fmt::core::num::imp::fmt::Part>::write */

undefined1  [16] __rustcall
<core::num::imp::fmt::core::num::imp::fmt::Part>::write(short *param_1,void *param_2,ulong param_3)

{
  short sVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  sVar1 = *param_1;
  if (sVar1 == 0) {
    uVar4 = *(ulong *)(param_1 + 4);
joined_r0x0073599c:
    if (param_3 < uVar4) {
LAB_007359a0:
      uVar3 = 0;
      goto LAB_007359a4;
    }
  }
  else {
    if (sVar1 != 1) {
      uVar4 = *(ulong *)(param_1 + 8);
      goto joined_r0x0073599c;
    }
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      uVar6 = (uint)uVar2;
      uVar4 = (ulong)(((uVar2 + 0x5fff6 & uVar6 + 0x7ff9c ^ uVar6 + 0xdfc18 & uVar6 + 0x7d8f0) >>
                      0x11) + 1);
      goto joined_r0x0073599c;
    }
    uVar4 = 1;
    if (param_3 == 0) goto LAB_007359a0;
  }
  if (sVar1 == 0) {
    uVar5 = *(ulong *)(param_1 + 4);
    if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar5,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b690);
    }
    if (uVar5 != 0) {
      memset(param_2,0x30,uVar5);
      auVar8._8_8_ = uVar4;
      auVar8._0_8_ = 1;
      return auVar8;
    }
  }
  else if (sVar1 == 1) {
    if (uVar4 != 0) {
      uVar3 = 1;
      uVar5 = uVar4;
      uVar6 = (uint)(ushort)param_1[1];
      do {
        *(byte *)((long)param_2 + (uVar5 - 1)) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        uVar5 = uVar5 - 1;
        uVar6 = uVar6 / 10;
      } while (uVar5 != 0);
LAB_007359a4:
      auVar7._8_8_ = uVar4;
      auVar7._0_8_ = uVar3;
      return auVar7;
    }
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar5,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6a8);
    }
    memcpy(param_2,*(void **)(param_1 + 4),uVar5);
  }
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = 1;
  return auVar9;
}


// ===== 00735ab4  <core::num::imp::diy_float::core::num::imp::diy_float::Fp>::normalize_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::diy_float::core::num::imp::diy_float::Fp>::normalize_to */

undefined1  [16] __rustcall
<core::num::imp::diy_float::core::num::imp::diy_float::Fp>::normalize_to
          (ulong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  long lVar10;
  ulong *puVar11;
  byte *pbVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined2 uStack_44;
  byte abStack_42 [2];
  undefined1 *puStack_40;
  code *pcStack_38;
  ulong local_28;
  undefined2 local_20;
  ulong local_18;
  
  local_20 = (undefined2)param_2;
  local_28 = param_1;
  if (((uint)(param_2 - param_3) >> 0xf & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00466ae7,0x1d,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6c0);
  }
  uVar17 = (ulong)(uint)(int)(short)(param_2 - param_3);
  uVar15 = param_1 << (uVar17 & 0x3f);
  local_18 = uVar15 >> (uVar17 & 0x3f);
  if (local_18 == param_1) {
    auVar23._8_4_ = param_3;
    auVar23._0_8_ = uVar15;
    auVar23._12_4_ = 0;
    return auVar23;
  }
  puVar13 = &local_28;
  puVar11 = (ulong *)core::panicking::assert_failed<u64,u64>
                               (0,&local_18,puVar13,0,param_5,
                                &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6d8);
  pcStack_38 = <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::bit_length;
  auVar22._8_8_ = *puVar11;
  puStack_40 = &stack0xfffffffffffffff0;
  if (3 < auVar22._8_8_) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,auVar22._8_8_,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
  if (auVar22._8_8_ == 0) {
LAB_00735b88:
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar22._8_8_;
    return auVar9 << 0x40;
  }
  if (*(char *)((long)puVar11 + auVar22._8_8_ + 7) == '\0') {
    if (auVar22._8_8_ + 7 == 8) goto LAB_00735b88;
    if (*(char *)((long)puVar11 + auVar22._8_8_ + 6) == '\0') {
      if (auVar22._8_8_ + 6 == 8) goto LAB_00735b88;
      if (*(char *)((long)puVar11 + auVar22._8_8_ + 5) == '\0') {
        if (auVar22._8_8_ + 5 == 8) goto LAB_00735b88;
        uVar15 = auVar22._8_8_ | 0xfffffffffffffffc;
      }
      else {
        uVar15 = auVar22._8_8_ - 3;
      }
    }
    else {
      uVar15 = auVar22._8_8_ - 2;
    }
  }
  else {
    uVar15 = auVar22._8_8_ - 1;
  }
  bVar7 = *(byte *)((long)puVar11 + uVar15 + 8);
  if (bVar7 != 0) {
    auVar22._0_8_ = (ulong)((uint)LZCOUNT((uint)bVar7 << 0x18) ^ 7) + uVar15 * 8 + 1;
    return auVar22;
  }
  auVar23 = core::num::imp::int_log10::panic_for_nonpositive_argument
                      (&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  pbVar12 = auVar23._8_8_;
  auVar24._0_8_ = auVar23._0_8_;
  puVar11 = (ulong *)*auVar24._0_8_;
  abStack_42[0] = 0;
  uStack_44 = 0;
  if (puVar11 < puVar13) {
    if (puVar11 < &DAT_00000004) {
      puVar18 = auVar24._0_8_ + 1;
      pbVar1 = (byte *)((long)puVar18 + (long)puVar11);
      puVar19 = (undefined1 *)0x0;
      lVar20 = 0;
      while( true ) {
        lVar21 = 0;
        do {
          if ((byte *)((long)puVar18 + lVar21) == pbVar1) goto LAB_00735e64;
          bVar7 = *(byte *)((long)puVar18 + lVar21);
          lVar21 = lVar21 + 1;
        } while (bVar7 == 0);
        lVar2 = lVar20 + lVar21;
        uVar15 = lVar2 - 1;
        if (2 < uVar15) break;
        lVar10 = lVar21 + lVar20 + -0x44;
        uVar8 = (uint)abStack_42[lVar10 + 0x41] + (uint)*pbVar12 * (uint)bVar7;
        uVar14 = uVar8 >> 8 & 0xff;
        abStack_42[lVar10 + 0x41] = (byte)uVar8;
        if (puVar13 != (ulong *)0x1) {
          if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (lVar20 + lVar21,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
          }
          uVar8 = uVar14 + abStack_42[lVar21 + lVar20 + -0x44 + 0x42] +
                  (uint)pbVar12[1] * (uint)bVar7;
          abStack_42[lVar21 + lVar20 + -0x44 + 0x42] = (byte)uVar8;
          uVar14 = uVar8 >> 8 & 0xff;
          if (puVar13 != (ulong *)&DAT_00000002) {
            if (uVar15 != 0) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (lVar20 + lVar21 + 1,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
            }
            lVar10 = lVar21 + lVar20 + -0x44;
            uVar8 = uVar14 + abStack_42[lVar10 + 0x43] + (uint)pbVar12[2] * (uint)bVar7;
            abStack_42[lVar10 + 0x43] = (byte)uVar8;
            if (puVar13 != (ulong *)0x3) {
              uVar15 = 3;
              break;
            }
            uVar14 = uVar8 >> 8 & 0xff;
          }
        }
        puVar11 = puVar13;
        if (uVar14 != 0) {
          if ((undefined1 *)0x2 < (undefined1 *)((long)puVar13 + lVar21 + lVar20 + -1)) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      ((undefined1 *)((long)puVar13 + lVar21 + lVar20 + -1),3,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
          }
          *(byte *)((long)puVar13 + (long)(abStack_42 + lVar21 + lVar20 + -3)) = (byte)uVar14;
          puVar11 = (ulong *)((long)puVar13 + 1);
        }
        puVar18 = (undefined8 *)((long)puVar18 + lVar21);
        puVar16 = (undefined1 *)((long)puVar11 + lVar21 + lVar20 + -1);
        lVar20 = lVar2;
        if (puVar19 <= puVar16) {
          puVar19 = puVar16;
        }
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar15,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0)
      ;
    }
  }
  else if (puVar11 < &DAT_00000004) {
    pbVar1 = pbVar12 + (long)puVar13;
    if (puVar11 == (ulong *)0x0) {
      puVar16 = (undefined1 *)0x0;
      puVar19 = (undefined1 *)0x0;
      while (pbVar12 != pbVar1) {
        puVar3 = puVar19;
        if (puVar19 <= puVar16) {
          puVar3 = puVar16;
        }
        if (*pbVar12 == 0) {
          puVar3 = puVar19;
        }
        puVar16 = puVar16 + 1;
        puVar19 = puVar3;
        pbVar12 = pbVar12 + 1;
      }
LAB_00735e64:
      *(undefined2 *)(auVar24._0_8_ + 1) = uStack_44;
      *(byte *)((long)auVar24._0_8_ + 10) = abStack_42[0];
      *auVar24._0_8_ = puVar19;
      auVar24._8_8_ = pbVar12;
      return auVar24;
    }
    bVar7 = *(byte *)(auVar24._0_8_ + 1);
    bVar4 = *(byte *)((long)auVar24._0_8_ + 9);
    bVar5 = *(byte *)((long)auVar24._0_8_ + 10);
    puVar19 = (undefined1 *)0x0;
    lVar20 = 0;
    while( true ) {
      lVar21 = 0;
      do {
        if (pbVar12 + lVar21 == pbVar1) goto LAB_00735e64;
        bVar6 = pbVar12[lVar21];
        lVar21 = lVar21 + 1;
      } while (bVar6 == 0);
      lVar2 = lVar20 + lVar21;
      uVar15 = lVar2 - 1;
      if (2 < uVar15) break;
      lVar10 = lVar21 + lVar20 + -0x44;
      uVar8 = (uint)abStack_42[lVar10 + 0x41] + (uint)bVar7 * (uint)bVar6;
      uVar14 = uVar8 >> 8 & 0xff;
      abStack_42[lVar10 + 0x41] = (byte)uVar8;
      if (puVar11 != (ulong *)0x1) {
        if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (lVar20 + lVar21,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
        }
        uVar8 = uVar14 + abStack_42[lVar21 + lVar20 + -0x44 + 0x42] + (uint)bVar4 * (uint)bVar6;
        abStack_42[lVar21 + lVar20 + -0x44 + 0x42] = (byte)uVar8;
        uVar14 = uVar8 >> 8 & 0xff;
        if (puVar11 != (ulong *)&DAT_00000002) {
          if (uVar15 != 0) {
            uVar15 = lVar20 + lVar21 + 1;
            break;
          }
          lVar10 = lVar21 + lVar20 + -0x44;
          uVar8 = uVar14 + abStack_42[lVar10 + 0x43] + (uint)bVar5 * (uint)bVar6;
          uVar14 = uVar8 >> 8 & 0xff;
          abStack_42[lVar10 + 0x43] = (byte)uVar8;
        }
      }
      puVar13 = puVar11;
      if (uVar14 != 0) {
        if ((undefined1 *)0x2 < (undefined1 *)((long)puVar11 + lVar21 + lVar20 + -1)) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    ((undefined1 *)((long)puVar11 + lVar21 + lVar20 + -1),3,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
        }
        *(byte *)((long)puVar11 + (long)(abStack_42 + lVar21 + lVar20 + -3)) = (byte)uVar14;
        puVar13 = (ulong *)((long)puVar11 + 1);
      }
      pbVar12 = pbVar12 + lVar21;
      puVar16 = (undefined1 *)((long)puVar13 + lVar21 + lVar20 + -1);
      lVar20 = lVar2;
      if (puVar19 <= puVar16) {
        puVar19 = puVar16;
      }
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar15,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,puVar11,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0)
  ;
}


// ===== 00735b30  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::bit_length =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::bit_length */

ulong * __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::bit_length
          (ulong *param_1,undefined8 param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined2 uStack_14;
  byte abStack_12 [2];
  
  uVar10 = *param_1;
  if (3 < uVar10) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar10,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
  if (uVar10 == 0) {
    return (ulong *)0x0;
  }
  if (*(char *)((long)param_1 + uVar10 + 7) == '\0') {
    if (uVar10 + 7 == 8) {
      return (ulong *)0x0;
    }
    if (*(char *)((long)param_1 + uVar10 + 6) == '\0') {
      if (uVar10 + 6 == 8) {
        return (ulong *)0x0;
      }
      if (*(char *)((long)param_1 + uVar10 + 5) == '\0') {
        if (uVar10 + 5 == 8) {
          return (ulong *)0x0;
        }
        uVar10 = uVar10 | 0xfffffffffffffffc;
      }
      else {
        uVar10 = uVar10 - 3;
      }
    }
    else {
      uVar10 = uVar10 - 2;
    }
  }
  else {
    uVar10 = uVar10 - 1;
  }
  bVar5 = *(byte *)((long)param_1 + uVar10 + 8);
  if (bVar5 != 0) {
    return (ulong *)((ulong)((uint)LZCOUNT((uint)bVar5 << 0x18) ^ 7) + uVar10 * 8 + 1);
  }
  auVar18 = core::num::imp::int_log10::panic_for_nonpositive_argument
                      (&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  pbVar11 = auVar18._8_8_;
  puVar9 = auVar18._0_8_;
  uVar10 = *puVar9;
  abStack_12[0] = 0;
  uStack_14 = 0;
  if (uVar10 < param_3) {
    if (uVar10 < 4) {
      puVar13 = puVar9 + 1;
      pbVar1 = (byte *)((long)puVar13 + uVar10);
      uVar15 = 0;
      lVar16 = 0;
      while( true ) {
        lVar17 = 0;
        do {
          if ((byte *)((long)puVar13 + lVar17) == pbVar1) goto LAB_00735e64;
          bVar5 = *(byte *)((long)puVar13 + lVar17);
          lVar17 = lVar17 + 1;
        } while (bVar5 == 0);
        lVar2 = lVar16 + lVar17;
        uVar10 = lVar2 - 1;
        if (2 < uVar10) break;
        lVar7 = lVar17 + lVar16 + -0x14;
        uVar6 = (uint)abStack_12[lVar7 + 0x11] + (uint)*pbVar11 * (uint)bVar5;
        uVar12 = uVar6 >> 8 & 0xff;
        abStack_12[lVar7 + 0x11] = (byte)uVar6;
        if (param_3 != 1) {
          if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (lVar16 + lVar17,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
          }
          uVar6 = uVar12 + abStack_12[lVar17 + lVar16 + -0x14 + 0x12] +
                  (uint)pbVar11[1] * (uint)bVar5;
          abStack_12[lVar17 + lVar16 + -0x14 + 0x12] = (byte)uVar6;
          uVar12 = uVar6 >> 8 & 0xff;
          if (param_3 != 2) {
            if (uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (lVar16 + lVar17 + 1,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
            }
            lVar7 = lVar17 + lVar16 + -0x14;
            uVar6 = uVar12 + abStack_12[lVar7 + 0x13] + (uint)pbVar11[2] * (uint)bVar5;
            abStack_12[lVar7 + 0x13] = (byte)uVar6;
            if (param_3 != 3) {
              uVar10 = 3;
              break;
            }
            uVar12 = uVar6 >> 8 & 0xff;
          }
        }
        uVar10 = param_3;
        if (uVar12 != 0) {
          if (2 < (param_3 - 1) + lVar16 + lVar17) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (param_3 + lVar16 + lVar17 + -1,3,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
          }
          abStack_12[lVar17 + lVar16 + param_3 + -3] = (byte)uVar12;
          uVar10 = param_3 + 1;
        }
        puVar13 = (ulong *)((long)puVar13 + lVar17);
        uVar10 = (lVar16 + uVar10 + lVar17) - 1;
        lVar16 = lVar2;
        if (uVar15 <= uVar10) {
          uVar15 = uVar10;
        }
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar10,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0)
      ;
    }
  }
  else if (uVar10 < 4) {
    pbVar1 = pbVar11 + param_3;
    if (uVar10 == 0) {
      uVar10 = 0;
      uVar15 = 0;
      while (pbVar11 != pbVar1) {
        uVar8 = uVar15;
        if (uVar15 <= uVar10) {
          uVar8 = uVar10;
        }
        if (*pbVar11 == 0) {
          uVar8 = uVar15;
        }
        uVar10 = uVar10 + 1;
        uVar15 = uVar8;
        pbVar11 = pbVar11 + 1;
      }
LAB_00735e64:
      *(undefined2 *)(puVar9 + 1) = uStack_14;
      *(byte *)((long)puVar9 + 10) = abStack_12[0];
      *puVar9 = uVar15;
      return puVar9;
    }
    uVar8 = puVar9[1];
    bVar5 = *(byte *)((long)puVar9 + 9);
    bVar3 = *(byte *)((long)puVar9 + 10);
    uVar15 = 0;
    lVar16 = 0;
    while( true ) {
      lVar17 = 0;
      do {
        if (pbVar11 + lVar17 == pbVar1) goto LAB_00735e64;
        bVar4 = pbVar11[lVar17];
        lVar17 = lVar17 + 1;
      } while (bVar4 == 0);
      lVar2 = lVar16 + lVar17;
      uVar14 = lVar2 - 1;
      if (2 < uVar14) break;
      lVar7 = lVar17 + lVar16 + -0x14;
      uVar6 = (uint)abStack_12[lVar7 + 0x11] + (uint)(byte)uVar8 * (uint)bVar4;
      uVar12 = uVar6 >> 8 & 0xff;
      abStack_12[lVar7 + 0x11] = (byte)uVar6;
      if (uVar10 != 1) {
        if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (lVar16 + lVar17,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
        }
        uVar6 = uVar12 + abStack_12[lVar17 + lVar16 + -0x14 + 0x12] + (uint)bVar5 * (uint)bVar4;
        abStack_12[lVar17 + lVar16 + -0x14 + 0x12] = (byte)uVar6;
        uVar12 = uVar6 >> 8 & 0xff;
        if (uVar10 != 2) {
          if (uVar14 != 0) {
            uVar14 = lVar16 + lVar17 + 1;
            break;
          }
          lVar7 = lVar17 + lVar16 + -0x14;
          uVar6 = uVar12 + abStack_12[lVar7 + 0x13] + (uint)bVar3 * (uint)bVar4;
          uVar12 = uVar6 >> 8 & 0xff;
          abStack_12[lVar7 + 0x13] = (byte)uVar6;
        }
      }
      uVar14 = uVar10;
      if (uVar12 != 0) {
        if (2 < (uVar10 - 1) + lVar16 + lVar17) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar10 + lVar16 + lVar17 + -1,3,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
        }
        abStack_12[lVar17 + lVar16 + uVar10 + -3] = (byte)uVar12;
        uVar14 = uVar10 + 1;
      }
      pbVar11 = pbVar11 + lVar17;
      uVar14 = (lVar16 + uVar14 + lVar17) - 1;
      lVar16 = lVar2;
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar14,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar10,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
}


// ===== 00735bf4  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_digits */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_digits
          (ulong *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined2 local_4;
  byte local_2 [2];
  
  uVar11 = *param_1;
  local_2[0] = 0;
  local_4 = 0;
  if (uVar11 < param_3) {
    if (uVar11 < 4) {
      puVar12 = param_1 + 1;
      pbVar1 = (byte *)((long)puVar12 + uVar11);
      uVar14 = 0;
      lVar15 = 0;
      while( true ) {
        lVar16 = 0;
        do {
          if ((byte *)((long)puVar12 + lVar16) == pbVar1) goto LAB_00735e64;
          bVar3 = *(byte *)((long)puVar12 + lVar16);
          lVar16 = lVar16 + 1;
        } while (bVar3 == 0);
        lVar2 = lVar15 + lVar16;
        uVar11 = lVar2 - 1;
        if (2 < uVar11) break;
        lVar7 = lVar16 + lVar15 + -4;
        uVar6 = (uint)local_2[lVar7 + 1] + (uint)*param_2 * (uint)bVar3;
        uVar10 = uVar6 >> 8 & 0xff;
        local_2[lVar7 + 1] = (byte)uVar6;
        if (param_3 != 1) {
          if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (lVar15 + lVar16,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
          }
          uVar6 = uVar10 + local_2[lVar16 + lVar15 + -4 + 2] + (uint)param_2[1] * (uint)bVar3;
          local_2[lVar16 + lVar15 + -4 + 2] = (byte)uVar6;
          uVar10 = uVar6 >> 8 & 0xff;
          if (param_3 != 2) {
            if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (lVar15 + lVar16 + 1,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
            }
            lVar7 = lVar16 + lVar15 + -4;
            uVar6 = uVar10 + local_2[lVar7 + 3] + (uint)param_2[2] * (uint)bVar3;
            local_2[lVar7 + 3] = (byte)uVar6;
            if (param_3 != 3) {
              uVar11 = 3;
              break;
            }
            uVar10 = uVar6 >> 8 & 0xff;
          }
        }
        uVar11 = param_3;
        if (uVar10 != 0) {
          if (2 < (param_3 - 1) + lVar15 + lVar16) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (param_3 + lVar15 + lVar16 + -1,3,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
          }
          local_2[lVar16 + lVar15 + param_3 + -3] = (byte)uVar10;
          uVar11 = param_3 + 1;
        }
        puVar12 = (ulong *)((long)puVar12 + lVar16);
        uVar11 = (lVar15 + uVar11 + lVar16) - 1;
        lVar15 = lVar2;
        if (uVar14 <= uVar11) {
          uVar14 = uVar11;
        }
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar11,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0)
      ;
    }
  }
  else if (uVar11 < 4) {
    pbVar1 = param_2 + param_3;
    if (uVar11 == 0) {
      uVar14 = 0;
      uVar11 = 0;
      if (param_2 != pbVar1) {
        do {
          pbVar9 = param_2 + 1;
          uVar8 = uVar14;
          if (uVar14 <= uVar11) {
            uVar8 = uVar11;
          }
          if (*param_2 == 0) {
            uVar8 = uVar14;
          }
          uVar14 = uVar8;
          uVar11 = uVar11 + 1;
          param_2 = pbVar9;
        } while (pbVar9 != pbVar1);
      }
LAB_00735e64:
      *(undefined2 *)(param_1 + 1) = local_4;
      *(byte *)((long)param_1 + 10) = local_2[0];
      *param_1 = uVar14;
      return;
    }
    uVar8 = param_1[1];
    bVar3 = *(byte *)((long)param_1 + 9);
    bVar4 = *(byte *)((long)param_1 + 10);
    uVar14 = 0;
    lVar15 = 0;
    while( true ) {
      lVar16 = 0;
      do {
        if (param_2 + lVar16 == pbVar1) goto LAB_00735e64;
        bVar5 = param_2[lVar16];
        lVar16 = lVar16 + 1;
      } while (bVar5 == 0);
      lVar2 = lVar15 + lVar16;
      uVar13 = lVar2 - 1;
      if (2 < uVar13) break;
      lVar7 = lVar16 + lVar15 + -4;
      uVar6 = (uint)local_2[lVar7 + 1] + (uint)(byte)uVar8 * (uint)bVar5;
      uVar10 = uVar6 >> 8 & 0xff;
      local_2[lVar7 + 1] = (byte)uVar6;
      if (uVar11 != 1) {
        if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (lVar15 + lVar16,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
        }
        uVar6 = uVar10 + local_2[lVar16 + lVar15 + -4 + 2] + (uint)bVar3 * (uint)bVar5;
        local_2[lVar16 + lVar15 + -4 + 2] = (byte)uVar6;
        uVar10 = uVar6 >> 8 & 0xff;
        if (uVar11 != 2) {
          if (uVar13 != 0) {
            uVar13 = lVar15 + lVar16 + 1;
            break;
          }
          lVar7 = lVar16 + lVar15 + -4;
          uVar6 = uVar10 + local_2[lVar7 + 3] + (uint)bVar4 * (uint)bVar5;
          uVar10 = uVar6 >> 8 & 0xff;
          local_2[lVar7 + 3] = (byte)uVar6;
        }
      }
      uVar13 = uVar11;
      if (uVar10 != 0) {
        if (2 < (uVar11 - 1) + lVar15 + lVar16) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar11 + lVar15 + lVar16 + -1,3,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
        }
        local_2[lVar16 + lVar15 + uVar11 + -3] = (byte)uVar10;
        uVar13 = uVar11 + 1;
      }
      param_2 = param_2 + lVar16;
      uVar13 = (lVar15 + uVar13 + lVar16) - 1;
      lVar15 = lVar2;
      if (uVar14 <= uVar13) {
        uVar14 = uVar13;
      }
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar13,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar11,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
}


// ===== 00735f54  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::div_rem_small =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::div_rem_small */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::div_rem_small
          (ulong *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  if ((param_2 & 0xff) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00466b04,0x1b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
  uVar8 = *param_1;
  if (uVar8 < 4) {
    if (uVar8 != 0) {
      lVar1 = uVar8 + 7;
      uVar2 = param_2 & 0xff;
      bVar3 = *(byte *)((long)param_1 + lVar1);
      uVar6 = 0;
      if ((param_2 & 0xff) != 0) {
        uVar6 = bVar3 / uVar2;
      }
      *(char *)((long)param_1 + lVar1) = (char)uVar6;
      if (lVar1 != 8) {
        lVar1 = uVar8 + 6;
        bVar4 = *(byte *)((long)param_1 + lVar1);
        uVar6 = ((uint)bVar3 - uVar6 * param_2) * 0x100;
        uVar7 = 0;
        if ((param_2 & 0xff) != 0) {
          uVar7 = ((uint)bVar4 | uVar6 & 0xffff) / uVar2;
        }
        *(char *)((long)param_1 + lVar1) = (char)uVar7;
        if (lVar1 != 8) {
          uVar5 = 0;
          if ((param_2 & 0xff) != 0) {
            uVar5 = (undefined1)
                    (((uint)*(byte *)((long)param_1 + uVar8 + 5) |
                     ((bVar4 | uVar6) - uVar7 * uVar2) * 0x100 & 0xffff) / uVar2);
          }
          *(undefined1 *)((long)param_1 + uVar8 + 5) = uVar5;
        }
      }
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar8,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
}


// ===== 00736020  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::add */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::add
          (ulong *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  uVar4 = *param_2;
  if (*param_2 <= *param_1) {
    uVar4 = *param_1;
  }
  if (uVar4 < 4) {
    if (uVar4 != 0) {
      uVar6 = 0;
      puVar5 = param_2 + 1;
      puVar7 = param_1 + 1;
      uVar8 = uVar4;
      do {
        uVar1 = (uint)(byte)*puVar5 + (uint)(byte)*puVar7;
        uVar3 = uVar1 & 0xff;
        uVar2 = uVar3 + uVar6;
        uVar6 = uVar2 >> 8;
        *(char *)puVar7 = (char)uVar2;
        if (uVar3 != uVar1) {
          uVar6 = 1;
        }
        uVar8 = uVar8 - 1;
        puVar5 = (ulong *)((long)puVar5 + 1);
        puVar7 = (ulong *)((long)puVar7 + 1);
      } while (uVar8 != 0);
      if (uVar6 != 0) {
        if (uVar4 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(3,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
        }
        *(undefined1 *)((long)(param_1 + 1) + uVar4) = 1;
        uVar4 = uVar4 + 1;
      }
    }
    *param_1 = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar4,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
}


// ===== 007360d4  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::sub */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::sub
          (ulong *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar4 = *param_2;
  if (*param_2 <= *param_1) {
    uVar4 = *param_1;
  }
  if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,uVar4,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0)
    ;
  }
  if (uVar4 != 0) {
    uVar7 = 1;
    puVar5 = param_2 + 1;
    puVar6 = param_1 + 1;
    uVar8 = uVar4;
    do {
      uVar1 = (uint)(byte)*puVar6 + ((byte)*puVar5 ^ 0xff);
      uVar3 = uVar1 & 0xff;
      uVar2 = uVar3 + uVar7;
      uVar7 = uVar2 >> 8;
      *(char *)puVar6 = (char)uVar2;
      if (uVar3 != uVar1) {
        uVar7 = 1;
      }
      uVar8 = uVar8 - 1;
      puVar5 = (ulong *)((long)puVar5 + 1);
      puVar6 = (ulong *)((long)puVar6 + 1);
    } while (uVar8 != 0);
    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00466b1f,0x1a,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
    }
  }
  *param_1 = uVar4;
  return;
}


// ===== 0073617c  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::digits */

ulong * __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::digits(ulong *param_1)

{
  if (*param_1 < 4) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*param_1,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
}


// ===== 007361a8  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::is_zero =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::is_zero */

byte __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::is_zero(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,uVar1,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0)
    ;
  }
  if (uVar1 == 0) {
    return 1;
  }
  if ((char)param_1[1] == '\0') {
    if (uVar1 == 1) {
      return 1;
    }
    if (*(char *)((long)param_1 + 9) == '\0') {
      if (uVar1 == 2) {
        return 1;
      }
      if (*(char *)((long)param_1 + 10) == '\0') {
        return -(uVar1 == 3) & 1;
      }
    }
  }
  return 0;
}


// ===== 00736220  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow2 */

ulong * __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow2
          (ulong *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  ulong __n;
  undefined1 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if (0x17 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00466b39,0x1c,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
  uVar13 = *param_1;
  __n = param_2 >> 3;
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    do {
      if (3 < uVar13) goto LAB_00736454;
      uVar3 = __n + uVar4;
      if (2 < uVar3) goto LAB_00736440;
      uVar3 = uVar4 - 1;
      *(undefined1 *)((long)param_1 + uVar4 + __n + 8) = *(undefined1 *)((long)param_1 + uVar4 + 8);
      uVar4 = uVar3;
    } while (uVar3 != 0xffffffffffffffff);
  }
  param_2 = param_2 & 7;
  if (__n != 0) {
    memset(param_1 + 1,0,__n);
  }
  uVar4 = uVar13 + __n;
  if (param_2 == 0) {
    *param_1 = uVar4;
    return param_1;
  }
  uVar3 = uVar4 - 1;
  if (2 < uVar3) {
LAB_00736440:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar3,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
  uVar1 = 8 - (int)param_2;
  bVar2 = *(byte *)((long)param_1 + uVar4 + 7) >> (ulong)(uVar1 & 0x1f);
  uVar3 = uVar13 + __n;
  if (bVar2 != 0) {
    if (2 < uVar4) {
LAB_00736454:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar4,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
    }
    *(byte *)((long)param_1 + uVar4 + 8) = bVar2;
    uVar3 = uVar4 + 1;
  }
  if (uVar4 <= __n + 1) goto LAB_007363fc;
  uVar6 = uVar13 - 1;
  if (7 < uVar6) {
    uVar12 = (undefined1)param_2;
    uVar5 = (undefined1)uVar1;
    if (uVar6 < 0x20) {
      uVar7 = 0;
    }
    else {
      auVar15[1] = uVar5;
      auVar15[0] = uVar5;
      auVar15[2] = uVar5;
      auVar15[3] = uVar5;
      auVar15[4] = uVar5;
      auVar15[5] = uVar5;
      auVar15[6] = uVar5;
      auVar15[7] = uVar5;
      auVar15[8] = uVar5;
      auVar15[9] = uVar5;
      auVar15[10] = uVar5;
      auVar15[0xb] = uVar5;
      auVar15[0xc] = uVar5;
      auVar15[0xd] = uVar5;
      auVar15[0xe] = uVar5;
      auVar15[0xf] = uVar5;
      uVar7 = uVar6 & 0xffffffffffffffe0;
      pauVar10 = (undefined1 (*) [16])((long)param_1 + uVar13 + __n + -9);
      uVar9 = uVar6 & 0xffffffffffffffe0;
      auVar15 = NEON_neg(auVar15,1);
      do {
        uVar9 = uVar9 - 0x20;
        auVar19 = NEON_ushl(*pauVar10,auVar15,1);
        auVar17[1] = uVar12;
        auVar17[0] = uVar12;
        auVar17[2] = uVar12;
        auVar17[3] = uVar12;
        auVar17[4] = uVar12;
        auVar17[5] = uVar12;
        auVar17[6] = uVar12;
        auVar17[7] = uVar12;
        auVar17[8] = uVar12;
        auVar17[9] = uVar12;
        auVar17[10] = uVar12;
        auVar17[0xb] = uVar12;
        auVar17[0xc] = uVar12;
        auVar17[0xd] = uVar12;
        auVar17[0xe] = uVar12;
        auVar17[0xf] = uVar12;
        auVar17 = NEON_ushl(*(undefined1 (*) [16])(*pauVar10 + 1),auVar17,1);
        auVar21 = NEON_ushl(pauVar10[-1],auVar15,1);
        auVar20[1] = uVar12;
        auVar20[0] = uVar12;
        auVar20[2] = uVar12;
        auVar20[3] = uVar12;
        auVar20[4] = uVar12;
        auVar20[5] = uVar12;
        auVar20[6] = uVar12;
        auVar20[7] = uVar12;
        auVar20[8] = uVar12;
        auVar20[9] = uVar12;
        auVar20[10] = uVar12;
        auVar20[0xb] = uVar12;
        auVar20[0xc] = uVar12;
        auVar20[0xd] = uVar12;
        auVar20[0xe] = uVar12;
        auVar20[0xf] = uVar12;
        auVar20 = NEON_ushl(*(undefined1 (*) [16])(pauVar10[-1] + 1),auVar20,1);
        pauVar10[1][1] = auVar19[8] | auVar17[8];
        pauVar10[1][2] = auVar19[9] | auVar17[9];
        pauVar10[1][3] = auVar19[10] | auVar17[10];
        pauVar10[1][4] = auVar19[0xb] | auVar17[0xb];
        pauVar10[1][5] = auVar19[0xc] | auVar17[0xc];
        pauVar10[1][6] = auVar19[0xd] | auVar17[0xd];
        pauVar10[1][7] = auVar19[0xe] | auVar17[0xe];
        pauVar10[1][8] = auVar19[0xf] | auVar17[0xf];
        (*pauVar10)[1] = auVar19[0] | auVar17[0];
        (*pauVar10)[2] = auVar19[1] | auVar17[1];
        (*pauVar10)[3] = auVar19[2] | auVar17[2];
        (*pauVar10)[4] = auVar19[3] | auVar17[3];
        (*pauVar10)[5] = auVar19[4] | auVar17[4];
        (*pauVar10)[6] = auVar19[5] | auVar17[5];
        (*pauVar10)[7] = auVar19[6] | auVar17[6];
        (*pauVar10)[8] = auVar19[7] | auVar17[7];
        (*pauVar10)[1] = auVar21[8] | auVar20[8];
        (*pauVar10)[2] = auVar21[9] | auVar20[9];
        (*pauVar10)[3] = auVar21[10] | auVar20[10];
        (*pauVar10)[4] = auVar21[0xb] | auVar20[0xb];
        (*pauVar10)[5] = auVar21[0xc] | auVar20[0xc];
        (*pauVar10)[6] = auVar21[0xd] | auVar20[0xd];
        (*pauVar10)[7] = auVar21[0xe] | auVar20[0xe];
        (*pauVar10)[8] = auVar21[0xf] | auVar20[0xf];
        pauVar10[-1][1] = auVar21[0] | auVar20[0];
        pauVar10[-1][2] = auVar21[1] | auVar20[1];
        pauVar10[-1][3] = auVar21[2] | auVar20[2];
        pauVar10[-1][4] = auVar21[3] | auVar20[3];
        pauVar10[-1][5] = auVar21[4] | auVar20[4];
        pauVar10[-1][6] = auVar21[5] | auVar20[5];
        pauVar10[-1][7] = auVar21[6] | auVar20[6];
        pauVar10[-1][8] = auVar21[7] | auVar20[7];
        pauVar10 = pauVar10 + -2;
      } while (uVar9 != 0);
      if (uVar6 == uVar7) goto LAB_007363fc;
      if ((uVar6 & 0x18) == 0) {
        uVar4 = uVar4 - uVar7;
        goto LAB_007363d4;
      }
    }
    uVar9 = uVar6 & 0xfffffffffffffff8;
    lVar8 = uVar7 - uVar9;
    uVar14 = NEON_neg(CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,
                                                  CONCAT12(uVar5,CONCAT11(uVar5,uVar5))))))),1);
    puVar11 = (undefined8 *)((long)param_1 + ((uVar13 + __n) - uVar7));
    do {
      lVar8 = lVar8 + 8;
      uVar18 = NEON_ushl(*(undefined8 *)((long)puVar11 + -1),uVar14,1);
      uVar16 = NEON_ushl(*puVar11,CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,
                                                  CONCAT13(uVar12,CONCAT12(uVar12,CONCAT11(uVar12,
                                                  uVar12))))))),1);
      *puVar11 = CONCAT17((byte)((ulong)uVar18 >> 0x38) | (byte)((ulong)uVar16 >> 0x38),
                          CONCAT16((byte)((ulong)uVar18 >> 0x30) | (byte)((ulong)uVar16 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar18 >> 0x28) |
                                            (byte)((ulong)uVar16 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar18 >> 0x20) |
                                                     (byte)((ulong)uVar16 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar18 >> 0x18) |
                                                              (byte)((ulong)uVar16 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar18 >> 0x10)
                                                                       | (byte)((ulong)uVar16 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar18
                                                                                      >> 8) |
                                                                                (byte)((ulong)uVar16
                                                                                      >> 8),
                                                                                (byte)uVar18 |
                                                                                (byte)uVar16)))))));
      puVar11 = puVar11 + -1;
    } while (lVar8 != 0);
    uVar4 = uVar4 - uVar9;
    if (uVar6 == uVar9) goto LAB_007363fc;
  }
LAB_007363d4:
  do {
    uVar13 = uVar4 - 1;
    *(byte *)((long)param_1 + uVar4 + 7) =
         *(byte *)((long)param_1 + uVar4 + 6) >> (ulong)(uVar1 & 0x1f) |
         *(char *)((long)param_1 + uVar4 + 7) << param_2;
    uVar4 = uVar13;
  } while (__n + 1 < uVar13);
LAB_007363fc:
  *(char *)((long)param_1 + __n + 8) = *(char *)((long)param_1 + __n + 8) << param_2;
  *param_1 = uVar3;
  return param_1;
}


// ===== 00736464  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow5 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow5 */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow5
          (ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if (2 < param_2) {
    puVar3 = param_1 + 1;
    uVar2 = *param_1;
    do {
      if (3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar2,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
      }
      if (uVar2 != 0) {
        uVar1 = (uint)(byte)*puVar3 * 0x7d;
        uVar5 = uVar1 >> 8;
        *(byte *)puVar3 = (byte)uVar1;
        if (uVar2 != 1) {
          uVar1 = uVar5 + (uint)*(byte *)((long)param_1 + 9) * 0x7d;
          uVar5 = uVar1 >> 8;
          *(char *)((long)param_1 + 9) = (char)uVar1;
          if (uVar2 != 2) {
            uVar1 = uVar5 + (uint)*(byte *)((long)param_1 + 10) * 0x7d;
            uVar5 = uVar1 >> 8;
            *(char *)((long)param_1 + 10) = (char)uVar1;
          }
        }
        if (uVar5 != 0) {
          if (uVar2 == 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (3,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
          }
          *(byte *)((long)puVar3 + uVar2) = (byte)uVar5;
          uVar2 = uVar2 + 1;
        }
      }
      param_2 = param_2 - 3;
      *param_1 = uVar2;
    } while (2 < param_2);
  }
  if (param_2 == 0) {
    iVar4 = 1;
    uVar2 = *param_1;
  }
  else {
    auVar7._8_8_ = param_2 - 1;
    auVar7._0_8_ = param_2 - 1;
    auVar7 = NEON_cmhi(_DAT_003718b0,auVar7,8);
    uVar6 = NEON_bsl(CONCAT44(auVar7._8_4_,auVar7._0_4_),0x100000001,0x500000005,1);
    iVar4 = (int)uVar6 * (int)((ulong)uVar6 >> 0x20);
    uVar2 = *param_1;
  }
  if (uVar2 < 4) {
    if (uVar2 != 0) {
      puVar3 = param_1 + 1;
      uVar1 = (uint)(byte)*puVar3 * iVar4;
      uVar5 = uVar1 >> 8;
      *(byte *)puVar3 = (byte)uVar1;
      if (uVar2 != 1) {
        uVar1 = uVar5 + (uint)*(byte *)((long)param_1 + 9) * iVar4;
        uVar5 = uVar1 >> 8;
        *(char *)((long)param_1 + 9) = (char)uVar1;
        if (uVar2 != 2) {
          uVar1 = uVar5 + (uint)*(byte *)((long)param_1 + 10) * iVar4;
          uVar5 = uVar1 >> 8;
          *(char *)((long)param_1 + 10) = (char)uVar1;
        }
      }
      if (uVar5 != 0) {
        if (uVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(3,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
        }
        *(byte *)((long)puVar3 + uVar2) = (byte)uVar5;
        uVar2 = uVar2 + 1;
      }
    }
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar2,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
}


// ===== 00736600  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_small =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_small */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_small
          (ulong *param_1,uint param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,uVar4,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0)
    ;
  }
  if (uVar4 != 0) {
    puVar1 = param_1 + 1;
    param_2 = param_2 & 0xff;
    uVar3 = (byte)*puVar1 * param_2;
    uVar2 = uVar3 >> 8;
    *(byte *)puVar1 = (byte)uVar3;
    uVar3 = uVar2;
    if (uVar4 != 1) {
      uVar2 = uVar2 + *(byte *)((long)param_1 + 9) * param_2;
      uVar3 = uVar2 >> 8;
      *(char *)((long)param_1 + 9) = (char)uVar2;
      if (uVar4 != 2) {
        uVar2 = uVar3 + *(byte *)((long)param_1 + 10) * param_2;
        uVar3 = uVar2 >> 8;
        *(char *)((long)param_1 + 10) = (char)uVar2;
      }
      uVar2 = uVar2 >> 8 & 0xff;
    }
    if (uVar3 != 0) {
      if (uVar4 != 3) {
        *(byte *)((long)puVar1 + uVar4) = (byte)uVar2;
        *param_1 = uVar4 + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(3,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
    }
  }
  *param_1 = uVar4;
  return;
}


// ===== 007366d0  FUN_007366d0 =====

long FUN_007366d0(undefined *param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
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
  bool bVar18;
  long lVar19;
  undefined1 uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  undefined *puVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  
  if (param_1 == (undefined *)0x0 && param_2 == 0) {
    lVar19 = param_4 - 1;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(lVar19,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b708)
      ;
    }
    uVar20 = 0x30;
    goto LAB_007369e0;
  }
  if (param_2 != 0 || CARRY8(param_2 - 1,(ulong)((undefined *)0x2386f26fc0ffff < param_1))) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_1;
    uVar26 = SUB168(auVar8 * ZEXT816(0xd30baf9a1e626a6d),8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_2;
    uVar23 = SUB168(auVar9 * ZEXT816(0xd30baf9a1e626a6d),8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_1;
    uVar27 = SUB168(auVar10 * ZEXT816(0x39a5652fb1137856),8);
    if (CARRY8(param_2 * -0x2cf45065e19d9593,uVar26)) {
      uVar23 = uVar23 + 1;
    }
    bVar18 = CARRY8((long)param_1 * 0x39a5652fb1137856,param_2 * -0x2cf45065e19d9593 + uVar26);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2;
    uVar26 = uVar23 + uVar27 + (ulong)bVar18;
    uVar23 = SUB168(auVar11 * ZEXT816(0x39a5652fb1137856),8) +
             (ulong)(CARRY8(uVar23,uVar27) || CARRY8(uVar23 + uVar27,(ulong)bVar18)) +
             (ulong)CARRY8(param_2 * 0x39a5652fb1137856,uVar26);
    if (param_4 < 0x24) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x23,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b4f0);
    }
    puVar24 = (undefined *)(param_2 * 0x39a5652fb1137856 + uVar26 >> 0x33 | uVar23 * 0x2000);
    param_1 = param_1 + (long)puVar24 * -10000000000000000;
    iVar25 = (int)((ulong)param_1 / 10000);
    uVar21 = (int)param_1 + iVar25 * -10000;
    uVar4 = (uVar21 >> 2 & 0x3fff) / 0x19;
    lVar19 = (ulong)uVar4 * 2;
    *(undefined *)(param_3 + 0x23) = (&DAT_004670a6)[lVar19];
    if (param_4 == 0x24) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x24,0x24,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b508);
    }
    *(undefined *)(param_3 + 0x24) = (&DAT_004670a7)[lVar19];
    if (param_4 < 0x26) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x25,0x25,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b520);
    }
    lVar19 = (ulong)(ushort)((short)uVar21 + (short)uVar4 * -100) * 2;
    *(undefined *)(param_3 + 0x25) = (&DAT_004670a6)[lVar19];
    if (param_4 == 0x26) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x26,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b538);
    }
    *(undefined *)(param_3 + 0x26) = (&DAT_004670a7)[lVar19];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)param_1 / 100000000;
    iVar25 = iVar25 + ((uint)(((ulong)param_1 / 10000) / 10000) & 0x7fffffff) * -10000;
    uVar5 = (int)((ulong)param_1 / 100000000) +
            SUB164(auVar12 * ZEXT816(0x68db8bac710cc),8) * -10000;
    uVar4 = (uint)(iVar25 * 0x147b) >> 0x13;
    uVar21 = (uVar5 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_3 + 0x1f) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar4 * 2);
    uVar2 = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar21 * 2);
    *(undefined2 *)(param_3 + 0x21) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(iVar25 + uVar4 * -100) & 0xffff) * 2);
    *(undefined2 *)(param_3 + 0x1b) = uVar2;
    uVar26 = (ulong)param_1 / 50000000000000 & 0x7fffe;
    *(undefined2 *)(param_3 + 0x1d) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar5 + uVar21 * -100) & 0xffff) * 2);
    if ((undefined *)0x2386f26fc0ffff < param_1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar26,200,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b4d8);
    }
    uVar23 = uVar23 >> 0x33;
    *(undefined2 *)(param_3 + 0x17) = *(undefined2 *)(&DAT_004670a6 + uVar26);
    *(undefined2 *)(param_3 + 0x19) =
         *(undefined2 *)
          (&DAT_004670a6 +
          ((ulong)((int)((ulong)param_1 / 1000000000000) +
                  (((uint)((ulong)param_1 / 4000000000000) & 0x3fff) / 0x19) * -100) & 0xffff) * 2);
    if (uVar23 != 0 || CARRY8(uVar23 - 1,(ulong)((undefined *)0x2386f26fc0ffff < puVar24))) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar23;
      lVar19 = SUB168(auVar13 * ZEXT816(0xd30baf9a1e626a6d),8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = puVar24;
      uVar26 = SUB168(auVar14 * ZEXT816(0xd30baf9a1e626a6d),8);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = puVar24;
      if (CARRY8(uVar23 * -0x2cf45065e19d9593,uVar26)) {
        lVar19 = lVar19 + 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar23;
      lVar22 = SUB168(auVar16 * ZEXT816(0x39a5652fb1137856),8);
      uVar26 = lVar19 + SUB168(auVar15 * ZEXT816(0x39a5652fb1137856),8) +
               (ulong)CARRY8((long)puVar24 * 0x39a5652fb1137856,
                             uVar23 * -0x2cf45065e19d9593 + uVar26);
      if (CARRY8(uVar23 * 0x39a5652fb1137856,uVar26)) {
        lVar22 = lVar22 + 1;
      }
      param_1 = (undefined *)(uVar23 * 0x39a5652fb1137856 + uVar26 >> 0x33 | lVar22 << 0xd);
      puVar24 = puVar24 + (long)param_1 * -10000000000000000;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)puVar24 / 100000000;
      iVar25 = (int)((ulong)puVar24 / 10000);
      uVar6 = (int)puVar24 + iVar25 * -10000;
      uVar7 = (int)((ulong)puVar24 / 100000000) +
              SUB164(auVar17 * ZEXT816(0x68db8bac710cc),8) * -10000;
      iVar25 = iVar25 + ((uint)(((ulong)puVar24 / 10000) / 10000) & 0x7fffffff) * -10000;
      uVar4 = (uVar6 >> 2 & 0x3fff) / 0x19;
      uVar21 = (uint)(iVar25 * 0x147b) >> 0x13;
      uVar5 = (uVar7 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_3 + 0x13) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar4 * 2);
      uVar2 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar6 + uVar4 * -100) & 0xffff) * 2);
      uVar3 = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar5 * 2);
      *(undefined2 *)(param_3 + 0xf) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar21 * 2);
      *(undefined2 *)(param_3 + 0x15) = uVar2;
      uVar2 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(iVar25 + uVar21 * -100) & 0xffff) * 2);
      *(undefined2 *)(param_3 + 0xb) = uVar3;
      uVar3 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar7 + uVar5 * -100) & 0xffff) * 2);
      uVar23 = (ulong)puVar24 / 50000000000000 & 0x7fffe;
      *(undefined2 *)(param_3 + 0x11) = uVar2;
      *(undefined2 *)(param_3 + 0xd) = uVar3;
      if ((undefined *)0x2386f26fc0ffff < puVar24) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar23,200,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b4d8);
      }
      *(undefined2 *)(param_3 + 7) = *(undefined2 *)(&DAT_004670a6 + uVar23);
      lVar19 = 7;
      *(undefined2 *)(param_3 + 9) =
           *(undefined2 *)
            (&DAT_004670a6 +
            ((ulong)((int)((ulong)puVar24 / 1000000000000) +
                    (((uint)((ulong)puVar24 / 4000000000000) & 0x3fff) / 0x19) * -100) & 0xffff) * 2
            );
    }
    else {
      lVar19 = 0x17;
      param_1 = puVar24;
    }
    if ((undefined *)0x3e7 < param_1) goto LAB_00736930;
  }
  else {
    lVar19 = 0x27;
    if ((undefined *)0x3e7 < param_1) {
LAB_00736930:
      puVar24 = param_1;
      do {
        puVar1 = (undefined2 *)(param_3 + -2 + lVar19);
        lVar19 = lVar19 + -4;
        param_1 = (undefined *)((ulong)puVar24 / 10000);
        uVar21 = (int)puVar24 + (int)param_1 * -10000;
        uVar4 = (uVar21 >> 2 & 0x3fff) / 0x19;
        puVar1[-1] = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar4 * 2);
        *puVar1 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar21 + uVar4 * -100) & 0xffff) * 2);
        bVar18 = &UNK_0098967f < puVar24;
        puVar24 = param_1;
      } while (bVar18);
    }
  }
  if ((undefined *)0x9 < param_1) {
    uVar21 = (uint)param_1;
    lVar19 = lVar19 + -2;
    uVar4 = (uVar21 >> 2 & 0x3fff) / 0x19;
    param_1 = (undefined *)(ulong)uVar4;
    *(undefined2 *)(param_3 + lVar19) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar21 + uVar4 * -100) & 0xffff) * 2);
  }
  if (param_1 == (undefined *)0x0) {
    return lVar19;
  }
  lVar19 = lVar19 + -1;
  uVar20 = (&DAT_004670a7)[(long)param_1 * 2];
LAB_007369e0:
  *(undefined1 *)(param_3 + lVar19) = uVar20;
  return lVar19;
}


// ===== 00736bb8  <core::fmt::num::[0]::u128>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::[0]::u128>::format_into */

undefined1  [16] __rustcall
<core::fmt::num::[0]::u128>::format_into(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_007366d0();
  auVar2._8_8_ = 0x27 - lVar1;
  auVar2._0_8_ = param_3 + lVar1;
  return auVar2;
}


// ===== 00736be8  <core::fmt::num::[0]::u128>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::[0]::u128>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::[0]::u128>::_fmt(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_007366d0();
  auVar2._8_8_ = param_4 - lVar1;
  auVar2._0_8_ = param_3 + lVar1;
  return auVar2;
}


// ===== 00736c14  <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom */

long __rustcall <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom(long param_1)

{
  return param_1 + 1;
}


// ===== 00736c1c  <core::fmt::num::imp::[0]::u8>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[0]::u8>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::imp::[0]::u8>::_fmt(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar3 = (ulong)param_1;
  lVar2 = param_3;
  if (9 < (param_1 & 0xff)) {
    uVar1 = (param_1 & 0xff) * 0x29 >> 0xc;
    uVar3 = (ulong)uVar1;
    lVar2 = param_3 + -2;
    *(undefined2 *)(param_2 + lVar2) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(param_1 + uVar1 * -100) & 0xff) * 2);
  }
  if (((param_1 & 0xff) != 0) && ((uVar3 & 0xff) == 0)) {
    auVar4._8_8_ = param_3 - lVar2;
    auVar4._0_8_ = param_2 + lVar2;
    return auVar4;
  }
  lVar2 = lVar2 + -1;
  *(undefined *)(param_2 + lVar2) = (&DAT_004670a7)[(uVar3 & 0x7f) * 2];
  auVar5._8_8_ = param_3 - lVar2;
  auVar5._0_8_ = param_2 + lVar2;
  return auVar5;
}


// ===== 00736ca0  <core::io::io_slice::[1]::core::io::io_slice::IoSliceMut>::into_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::io_slice::[1]::core::io::io_slice::IoSliceMut>::into_slice */

void __rustcall <core::io::io_slice::[1]::core::io::io_slice::IoSliceMut>::into_slice(void)

{
  return;
}


// ===== 00736ca4  <core::fmt::num::[1]::i128>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::[1]::i128>::format_into */

undefined1  [16] __rustcall
<core::fmt::num::[1]::i128>::format_into(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar2 = (long)param_2 >> 0x3f;
  lVar1 = FUN_007366d0((param_1 ^ uVar2) - uVar2,
                       (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2)),param_3 + 1,0x27);
  if (-1 < (long)param_2) {
    auVar3._8_8_ = 0x28 - (lVar1 + 1);
    auVar3._0_8_ = param_3 + lVar1 + 1;
    return auVar3;
  }
  *(undefined1 *)(param_3 + lVar1) = 0x2d;
  auVar4._8_8_ = 0x28 - lVar1;
  auVar4._0_8_ = param_3 + lVar1;
  return auVar4;
}


// ===== 00736d18  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive */

void __rustcall
<core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive
          (undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
LAB_00736d34:
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a5b;
    uVar5 = 7;
  }
  else if (*(char *)((long)puVar7 + 0x12) < '\0') {
    uStack_38 = puVar7[1];
    local_40 = *puVar7;
    local_24[0] = 1;
    local_30 = local_24;
    iVar2 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_40,&DAT_00466a68,3);
    if (iVar2 != 0) goto LAB_00736d34;
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a6b;
    uVar5 = 1;
  }
  else {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a62;
    uVar5 = 6;
  }
  uVar1 = (**(code **)(lVar6 + 0x18))(uVar3,puVar4,uVar5);
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00736de4  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field */

undefined8 * __rustcall
<core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          )

{
  undefined8 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined1 local_34 [4];
  
  uVar4 = 1;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar7 = (undefined8 *)*param_1;
    bVar3 = *(byte *)((long)param_1 + 9);
    if (*(char *)((long)puVar7 + 0x12) < '\0') {
      if (((bVar3 & 1) != 0) ||
         (uVar6 = (**(code **)(puVar7[1] + 0x18))(*puVar7,&DAT_004669de,3), (uVar6 & 1) == 0)) {
        uStack_78 = puVar7[1];
        local_80 = *puVar7;
        local_70 = local_34;
        uStack_58 = puVar7[2];
        local_34[0] = 1;
        local_60 = &DAT_0097b768;
        local_68 = (undefined1 *)&local_80;
        uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                          (&local_80,param_2,param_3);
        if (((uVar6 & 1) == 0) &&
           ((uVar6 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                               (&local_80,&DAT_004669dc,2), (uVar6 & 1) == 0 &&
            (iVar5 = (**(code **)(param_5 + 0x18))(param_4,&local_68), iVar5 == 0)))) {
          uVar4 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
          goto LAB_00736f48;
        }
      }
    }
    else {
      uVar1 = 2;
      if (bVar3 == 0) {
        uVar1 = 3;
      }
      puVar2 = &DAT_004669da;
      if (bVar3 == 0) {
        puVar2 = &DAT_004669d7;
      }
      uVar6 = (**(code **)(puVar7[1] + 0x18))(*puVar7,puVar2,uVar1);
      if ((((uVar6 & 1) == 0) &&
          (uVar6 = (**(code **)(puVar7[1] + 0x18))(*puVar7,param_2,param_3), (uVar6 & 1) == 0)) &&
         (uVar6 = (**(code **)(puVar7[1] + 0x18))(*puVar7,&DAT_004669dc,2), (uVar6 & 1) == 0)) {
        uVar4 = (**(code **)(param_5 + 0x18))(param_4,puVar7);
        goto LAB_00736f48;
      }
    }
    uVar4 = 1;
  }
LAB_00736f48:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return param_1;
}


// ===== 00736f8c  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish */

void __rustcall
<core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((*(byte *)((long)param_1 + 9) & 1) != 0) {
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      puVar5 = (undefined8 *)*param_1;
      if (*(char *)((long)puVar5 + 0x12) < '\0') {
        uVar2 = *puVar5;
        lVar6 = puVar5[1];
        puVar3 = &DAT_00466a6b;
        uVar4 = 1;
      }
      else {
        uVar2 = *puVar5;
        lVar6 = puVar5[1];
        puVar3 = &DAT_00466b55;
        uVar4 = 2;
      }
      uVar1 = (**(code **)(lVar6 + 0x18))(uVar2,puVar3,uVar4);
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 1) = uVar1;
  }
  return;
}


// ===== 00737004  <core::net::parser::[1]::core::net::ip_addr::Ipv4Addr>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[1]::core::net::ip_addr::Ipv4Addr>::parse_ascii */

ulong __rustcall
<core::net::parser::[1]::core::net::ip_addr::Ipv4Addr>::parse_ascii
          (undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long in_x10;
  undefined8 local_20;
  ulong local_18;
  
  if (0xf < param_2) {
    return in_x10 << 0x10 | 0x101;
  }
  local_20 = param_1;
  local_18 = param_2;
  uVar2 = FUN_00734e34(&local_20);
  uVar1 = (uint)(local_18 == 0) & (uint)uVar2;
  if (uVar1 == 0) {
    uVar2 = 0x100;
  }
  return (uVar2 >> 0x10 & 0xffffff) << 0x10 | (uVar2 >> 8 & 0xff) << 8 | (ulong)(uVar1 ^ 1);
}


// ===== 00737078  <core::fmt::num::imp::[1]::i8>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[1]::i8>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[1]::i8>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((param_1 >> 7 & 1) == 0) {
    uVar1 = param_1 & 0xff;
    if (uVar1 < 10) {
      lVar3 = 4;
      uVar4 = (ulong)param_1;
    }
    else {
      uVar4 = (ulong)(99 < uVar1);
      uVar2 = param_1 * 2;
      if (99 < uVar1) {
        uVar2 = param_1 * 2 + 0x38;
      }
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_004670a6 + ((ulong)uVar2 & 0xfe));
      lVar3 = 2;
    }
    if (((param_1 & 0xff) != 0) && ((uVar4 & 0xff) == 0)) {
      auVar5._8_8_ = 4 - lVar3;
      auVar5._0_8_ = param_2 + lVar3;
      return auVar5;
    }
    lVar3 = lVar3 + -1;
    *(undefined *)(param_2 + lVar3) = (&DAT_004670a7)[(uVar4 & 0x7f) * 2];
    auVar6._8_8_ = 4 - lVar3;
    auVar6._0_8_ = param_2 + lVar3;
    return auVar6;
  }
  uVar2 = -param_1;
  uVar4 = (ulong)uVar2;
  uVar1 = uVar2 & 0xff;
  if (uVar1 < 10) {
    lVar3 = 3;
  }
  else {
    if (99 < uVar1) {
      uVar2 = -param_1 - 100;
    }
    lVar3 = 1;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_004670a6 + ((ulong)uVar2 & 0xff) * 2);
    uVar4 = 1;
    if (99 >= uVar1) goto LAB_0073717c;
  }
  *(undefined *)(param_2 + lVar3) = (&DAT_004670a7)[(uVar4 & 0x7f) * 2];
  lVar3 = lVar3 + -1;
LAB_0073717c:
  *(undefined1 *)(param_2 + lVar3) = 0x2d;
  auVar7._8_8_ = 4 - lVar3;
  auVar7._0_8_ = param_2 + lVar3;
  return auVar7;
}


// ===== 00737198  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish_non_exhaustive */

void __rustcall
<core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish_non_exhaustive(long *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
LAB_007371b4:
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  if (*param_1 == 0) {
    uVar4 = *puVar1;
    lVar7 = puVar1[1];
    puVar5 = &DAT_003795ac;
    uVar6 = 4;
  }
  else if (*(char *)((long)puVar1 + 0x12) < '\0') {
    uStack_38 = puVar1[1];
    local_40 = *puVar1;
    local_24[0] = 1;
    local_30 = local_24;
    iVar3 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_40,&DAT_00466a68,3);
    if (iVar3 != 0) goto LAB_007371b4;
    uVar4 = *puVar1;
    lVar7 = puVar1[1];
    puVar5 = &DAT_00466a71;
    uVar6 = 1;
  }
  else {
    uVar4 = *puVar1;
    lVar7 = puVar1[1];
    puVar5 = &DAT_00466a6c;
    uVar6 = 5;
  }
  uVar2 = (**(code **)(lVar7 + 0x18))(uVar4,puVar5,uVar6);
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


// ===== 00737260  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field */

long * __rustcall
<core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
          (long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 local_5c [4];
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  lVar7 = *param_1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    puVar6 = (undefined8 *)param_1[1];
    if (-1 < *(char *)((long)puVar6 + 0x12)) {
      uVar3 = 1;
      uVar1 = 1;
      puVar2 = &DAT_004669e3;
      if (lVar7 != 0) {
        uVar1 = 2;
        puVar2 = &DAT_004669da;
      }
      uVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6,puVar2,uVar1);
      if ((uVar5 & 1) == 0) {
        uVar3 = (**(code **)(param_3 + 0x18))(param_2,puVar6);
      }
      goto LAB_00737370;
    }
    if ((lVar7 != 0) ||
       (uVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6,&DAT_004669e4,2), (uVar5 & 1) == 0)) {
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      local_70 = local_5c;
      uStack_48 = puVar6[2];
      local_5c[0] = 1;
      local_50 = &DAT_0097b768;
      local_58 = (undefined1 *)&local_80;
      iVar4 = (**(code **)(param_3 + 0x18))(param_2,&local_58);
      if (iVar4 == 0) {
        uVar3 = (**(code **)(local_50 + 0x18))(local_58,&DAT_004669e1,2);
        goto LAB_00737370;
      }
    }
  }
  uVar3 = 1;
LAB_00737370:
  *(undefined1 *)(param_1 + 2) = uVar3;
  *param_1 = lVar7 + 1;
  return param_1;
}


// ===== 00737398  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish */

uint __rustcall <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 0) {
    return (uint)*(byte *)(param_1 + 2);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    puVar3 = (undefined8 *)param_1[1];
    if (((*param_1 == 1) && ((*(byte *)((long)param_1 + 0x11) & 1) != 0)) &&
       (-1 < *(char *)((long)puVar3 + 0x12))) {
      uVar2 = 1;
      iVar1 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&DAT_00466a72,1);
      if (iVar1 != 0) goto LAB_00737434;
    }
    uVar2 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&DAT_00466a71,1);
  }
  else {
    uVar2 = 1;
  }
LAB_00737434:
  *(char *)(param_1 + 2) = (char)uVar2;
  return uVar2;
}


// ===== 0073744c  <core::mem::type_info::[2]::core::any::TypeId>::size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::type_info::[2]::core::any::TypeId>::size */

void __rustcall <core::mem::type_info::[2]::core::any::TypeId>::size(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00466e8f,99,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b8d8);
}


// ===== 0073746c  <core::mem::type_info::[2]::core::any::TypeId>::field =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::type_info::[2]::core::any::TypeId>::field */

void __rustcall <core::mem::type_info::[2]::core::any::TypeId>::field(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00466ef5,0x65,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b908);
}


// ===== 0073748c  <core::mem::type_info::[2]::core::any::TypeId>::fields =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::type_info::[2]::core::any::TypeId>::fields */

void __rustcall <core::mem::type_info::[2]::core::any::TypeId>::fields(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00466e5c,0x67,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b8c0);
}


// ===== 007374ac  <core::mem::type_info::[2]::core::any::TypeId>::variants =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::type_info::[2]::core::any::TypeId>::variants */

void __rustcall <core::mem::type_info::[2]::core::any::TypeId>::variants(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00466ec0,0x6b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b8f0);
}


// ===== 007374cc  <core::fmt::num::imp::[2]::u8>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[2]::u8>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[2]::u8>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((param_1 & 0xff) < 10) {
    lVar2 = 3;
    uVar3 = (ulong)param_1;
  }
  else {
    uVar1 = (param_1 & 0xff) * 0x29 >> 0xc;
    uVar3 = (ulong)uVar1;
    *(undefined2 *)(param_2 + 1) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(param_1 + uVar1 * -100) & 0xff) * 2);
    lVar2 = 1;
  }
  if (((param_1 & 0xff) != 0) && ((uVar3 & 0xff) == 0)) {
    auVar4._8_8_ = 3 - lVar2;
    auVar4._0_8_ = param_2 + lVar2;
    return auVar4;
  }
  lVar2 = lVar2 + -1;
  *(undefined *)(param_2 + lVar2) = (&DAT_004670a7)[(uVar3 & 0x7f) * 2];
  auVar5._8_8_ = 3 - lVar2;
  auVar5._0_8_ = param_2 + lVar2;
  return auVar5;
}


// ===== 00737564  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::bit_length =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::bit_length */

undefined8 * __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::bit_length
          (long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  uVar4 = *(ulong *)(param_1 + 0xa0);
  if (0x28 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar4,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  uVar9 = ~(uVar4 << 5);
  piVar11 = (int *)(param_1 + uVar4 * 4);
  lVar13 = uVar4 * -4;
  do {
    if (lVar13 == 0) {
      return (undefined8 *)0x0;
    }
    piVar11 = piVar11 + -1;
    lVar13 = lVar13 + 4;
    uVar9 = uVar9 + 0x20;
  } while (*piVar11 == 0);
  if (*piVar11 != 0) {
    return (undefined8 *)(((uint)LZCOUNT(*piVar11) ^ 0x1f) - uVar9);
  }
  auVar18 = core::num::imp::int_log10::panic_for_nonpositive_argument
                      (&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  piVar11 = auVar18._8_8_;
  puVar3 = auVar18._0_8_;
  puStack_30 = &stack0xfffffffffffffff0;
  pcStack_28 = mul_digits;
  uVar4 = puVar3[0x14];
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (uVar4 < param_3) {
    if (uVar4 < 0x29) {
      uVar12 = 0;
      uVar9 = 0;
      puVar14 = puVar3;
      do {
        puVar5 = &uStack_d4 + uVar12;
        lVar13 = 0;
        uVar1 = uVar12;
        puVar15 = puVar14;
        do {
          uVar10 = uVar1;
          if (puVar15 == (undefined8 *)((long)puVar3 + uVar4 * 4)) goto LAB_00737810;
          uVar2 = *(uint *)((long)puVar14 + lVar13 * 4);
          puVar15 = (undefined8 *)((long)puVar15 + 4);
          lVar13 = lVar13 + 1;
          puVar5 = puVar5 + 1;
          uVar1 = uVar10 + 1;
        } while (uVar2 == 0);
        lVar8 = 0;
        uVar6 = 0;
        uVar1 = uVar12 + lVar13;
        do {
          if (0x27 < uVar10) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar10,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          uVar10 = uVar10 + 1;
          uVar7 = uVar6 + *(uint *)((long)puVar5 + lVar8) +
                  (ulong)*(uint *)((long)piVar11 + lVar8) * (ulong)uVar2;
          *(int *)((long)puVar5 + lVar8) = (int)uVar7;
          lVar8 = lVar8 + 4;
          uVar6 = uVar7 >> 0x20;
        } while (param_3 * 4 - lVar8 != 0);
        uVar10 = param_3;
        if (uVar6 != 0) {
          if (0x27 < (param_3 - 1) + uVar12 + lVar13) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (param_3 + uVar12 + lVar13 + -1,0x28,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          (&uStack_d4)[param_3 + uVar12 + lVar13] = (int)(uVar7 >> 0x20);
          uVar10 = param_3 + 1;
        }
        uVar10 = (uVar12 + uVar10 + lVar13) - 1;
        uVar12 = uVar1;
        puVar14 = puVar15;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
      } while( true );
    }
  }
  else if (uVar4 < 0x29) {
    if (uVar4 != 0) {
      uVar9 = 0;
      uVar12 = 0;
      piVar16 = piVar11;
      do {
        puVar5 = &uStack_d4 + uVar12;
        lVar13 = 0;
        uVar1 = uVar12;
        piVar17 = piVar16;
        do {
          uVar10 = uVar1;
          if (piVar17 == piVar11 + param_3) goto LAB_00737810;
          uVar2 = piVar16[lVar13];
          piVar17 = piVar17 + 1;
          lVar13 = lVar13 + 1;
          puVar5 = puVar5 + 1;
          uVar1 = uVar10 + 1;
        } while (uVar2 == 0);
        lVar8 = 0;
        uVar6 = 0;
        uVar1 = uVar12 + lVar13;
        do {
          if (0x27 < uVar10) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar10,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          uVar10 = uVar10 + 1;
          uVar7 = uVar6 + *(uint *)((long)puVar5 + lVar8) +
                  (ulong)*(uint *)((long)puVar3 + lVar8) * (ulong)uVar2;
          *(int *)((long)puVar5 + lVar8) = (int)uVar7;
          lVar8 = lVar8 + 4;
          uVar6 = uVar7 >> 0x20;
        } while (uVar4 * 4 - lVar8 != 0);
        uVar10 = uVar4;
        if (uVar6 != 0) {
          if (0x27 < (uVar4 - 1) + uVar12 + lVar13) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar4 + uVar12 + lVar13 + -1,0x28,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          (&uStack_d4)[uVar4 + uVar12 + lVar13] = (int)(uVar7 >> 0x20);
          uVar10 = uVar4 + 1;
        }
        uVar10 = (uVar12 + uVar10 + lVar13) - 1;
        uVar12 = uVar1;
        piVar16 = piVar17;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
      } while( true );
    }
    uVar4 = 0;
    uVar9 = 0;
    piVar16 = piVar11;
    while (piVar16 != piVar11 + param_3) {
      uVar12 = uVar9;
      if (uVar9 <= uVar4) {
        uVar12 = uVar4;
      }
      if (*piVar16 == 0) {
        uVar12 = uVar9;
      }
      uVar4 = uVar4 + 1;
      uVar9 = uVar12;
      piVar16 = piVar16 + 1;
    }
LAB_00737810:
    puVar3[0xd] = uStack_68;
    puVar3[0xc] = uStack_70;
    puVar3[0xf] = uStack_58;
    puVar3[0xe] = uStack_60;
    puVar3[0x11] = uStack_48;
    puVar3[0x10] = uStack_50;
    puVar3[0x13] = uStack_38;
    puVar3[0x12] = uStack_40;
    puVar3[5] = uStack_a8;
    puVar3[4] = uStack_b0;
    puVar3[7] = uStack_98;
    puVar3[6] = uStack_a0;
    puVar3[9] = uStack_88;
    puVar3[8] = uStack_90;
    puVar3[0xb] = uStack_78;
    puVar3[10] = uStack_80;
    puVar3[1] = uStack_c8;
    *puVar3 = uStack_d0;
    puVar3[3] = uStack_b8;
    puVar3[2] = uStack_c0;
    puVar3[0x14] = uVar9;
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar4,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
}


// ===== 007375e4  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
          (undefined8 *param_1,int *param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  undefined4 uStack_c4;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar8 = param_1[0x14];
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
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (uVar8 < param_3) {
    if (uVar8 < 0x29) {
      uVar10 = 0;
      uVar11 = 0;
      puVar12 = param_1;
      do {
        puVar4 = &uStack_c4 + uVar10;
        lVar14 = 0;
        uVar1 = uVar10;
        puVar13 = puVar12;
        do {
          uVar9 = uVar1;
          if (puVar13 == (undefined8 *)((long)param_1 + uVar8 * 4)) goto LAB_00737810;
          uVar3 = *(uint *)((long)puVar12 + lVar14 * 4);
          puVar13 = (undefined8 *)((long)puVar13 + 4);
          lVar14 = lVar14 + 1;
          puVar4 = puVar4 + 1;
          uVar1 = uVar9 + 1;
        } while (uVar3 == 0);
        lVar7 = 0;
        uVar5 = 0;
        uVar1 = uVar10 + lVar14;
        do {
          if (0x27 < uVar9) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar9,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          uVar9 = uVar9 + 1;
          uVar6 = uVar5 + *(uint *)((long)puVar4 + lVar7) +
                  (ulong)*(uint *)((long)param_2 + lVar7) * (ulong)uVar3;
          *(int *)((long)puVar4 + lVar7) = (int)uVar6;
          lVar7 = lVar7 + 4;
          uVar5 = uVar6 >> 0x20;
        } while (param_3 * 4 - lVar7 != 0);
        uVar9 = param_3;
        if (uVar5 != 0) {
          if (0x27 < (param_3 - 1) + uVar10 + lVar14) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (param_3 + uVar10 + lVar14 + -1,0x28,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          (&uStack_c4)[param_3 + uVar10 + lVar14] = (int)(uVar6 >> 0x20);
          uVar9 = param_3 + 1;
        }
        uVar9 = (uVar10 + uVar9 + lVar14) - 1;
        uVar10 = uVar1;
        puVar12 = puVar13;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
      } while( true );
    }
  }
  else if (uVar8 < 0x29) {
    piVar2 = param_2 + param_3;
    if (uVar8 != 0) {
      uVar11 = 0;
      uVar10 = 0;
      do {
        puVar4 = &uStack_c4 + uVar10;
        lVar14 = 0;
        uVar1 = uVar10;
        piVar15 = param_2;
        do {
          uVar9 = uVar1;
          if (piVar15 == piVar2) goto LAB_00737810;
          uVar3 = param_2[lVar14];
          piVar15 = piVar15 + 1;
          lVar14 = lVar14 + 1;
          puVar4 = puVar4 + 1;
          uVar1 = uVar9 + 1;
        } while (uVar3 == 0);
        lVar7 = 0;
        uVar5 = 0;
        uVar1 = uVar10 + lVar14;
        do {
          if (0x27 < uVar9) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar9,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          uVar9 = uVar9 + 1;
          uVar6 = uVar5 + *(uint *)((long)puVar4 + lVar7) +
                  (ulong)*(uint *)((long)param_1 + lVar7) * (ulong)uVar3;
          *(int *)((long)puVar4 + lVar7) = (int)uVar6;
          lVar7 = lVar7 + 4;
          uVar5 = uVar6 >> 0x20;
        } while (uVar8 * 4 - lVar7 != 0);
        uVar9 = uVar8;
        if (uVar5 != 0) {
          if (0x27 < (uVar8 - 1) + uVar10 + lVar14) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar8 + uVar10 + lVar14 + -1,0x28,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          (&uStack_c4)[uVar8 + uVar10 + lVar14] = (int)(uVar6 >> 0x20);
          uVar9 = uVar8 + 1;
        }
        uVar9 = (uVar10 + uVar9 + lVar14) - 1;
        uVar10 = uVar1;
        param_2 = piVar15;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
      } while( true );
    }
    uVar11 = 0;
    uVar8 = 0;
    if (param_2 != piVar2) {
      do {
        piVar15 = param_2 + 1;
        uVar10 = uVar11;
        if (uVar11 <= uVar8) {
          uVar10 = uVar8;
        }
        if (*param_2 == 0) {
          uVar10 = uVar11;
        }
        uVar11 = uVar10;
        uVar8 = uVar8 + 1;
        param_2 = piVar15;
      } while (piVar15 != piVar2);
    }
LAB_00737810:
    param_1[0xd] = uStack_58;
    param_1[0xc] = local_60;
    param_1[0xf] = uStack_48;
    param_1[0xe] = uStack_50;
    param_1[0x11] = uStack_38;
    param_1[0x10] = local_40;
    param_1[0x13] = uStack_28;
    param_1[0x12] = uStack_30;
    param_1[5] = uStack_98;
    param_1[4] = local_a0;
    param_1[7] = uStack_88;
    param_1[6] = uStack_90;
    param_1[9] = uStack_78;
    param_1[8] = local_80;
    param_1[0xb] = uStack_68;
    param_1[10] = uStack_70;
    param_1[1] = uStack_b8;
    *param_1 = local_c0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
    param_1[0x14] = uVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar8,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
}


// ===== 007378c4  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::div_rem_small =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::div_rem_small */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::div_rem_small
          (long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00466b04,0x1b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  uVar2 = *(ulong *)(param_1 + 0xa0);
  if (uVar2 < 0x29) {
    if (uVar2 != 0) {
      uVar4 = (ulong)param_2;
      lVar3 = uVar2 << 2;
      lVar1 = 0;
      do {
        uVar5 = (ulong)*(uint *)(param_1 + -4 + lVar3) | lVar1 << 0x20;
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar5 / uVar4;
        }
        *(int *)(param_1 + -4 + lVar3) = (int)uVar2;
        lVar3 = lVar3 + -4;
        lVar1 = uVar5 - uVar2 * uVar4;
      } while (lVar3 != 0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar2,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
}


// ===== 00737954  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::add */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::add(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar5 = *(ulong *)(param_2 + 0x28);
  if (*(ulong *)(param_2 + 0x28) <= *(ulong *)(param_1 + 0x28)) {
    uVar5 = *(ulong *)(param_1 + 0x28);
  }
  if (uVar5 < 0x29) {
    if (uVar5 != 0) {
      puVar6 = param_1;
      uVar7 = uVar5;
      bVar4 = false;
      do {
        uVar2 = *puVar6;
        uVar3 = *param_2;
        bVar1 = CARRY4(uVar3 + uVar2,(uint)bVar4);
        uVar7 = uVar7 - 1;
        *puVar6 = uVar2 + uVar3 + (uint)bVar4;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 1;
        bVar4 = CARRY4(uVar3,uVar2) || bVar1;
      } while (uVar7 != 0);
      if (CARRY4(uVar3,uVar2) || bVar1) {
        if (uVar5 == 0x28) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (0x28,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
        }
        param_1[uVar5] = 1;
        uVar5 = uVar5 + 1;
      }
    }
    *(ulong *)(param_1 + 0x28) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar5,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
}


// ===== 007379f4  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::sub */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::sub(uint *param_1,uint *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  if (*(ulong *)(param_2 + 0x28) <= *(ulong *)(param_1 + 0x28)) {
    uVar2 = *(ulong *)(param_1 + 0x28);
  }
  if (0x28 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  if (uVar2 != 0) {
    puVar6 = param_1;
    uVar7 = uVar2;
    bVar5 = true;
    do {
      uVar3 = *puVar6;
      uVar4 = ~*param_2;
      bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar5);
      uVar7 = uVar7 - 1;
      *puVar6 = uVar4 + uVar3 + (uint)bVar5;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
      bVar5 = CARRY4(uVar3,uVar4) || bVar1;
    } while (uVar7 != 0);
    if (!CARRY4(uVar3,uVar4) && !bVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00466b1f,0x1a,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
    }
  }
  *(ulong *)(param_1 + 0x28) = uVar2;
  return;
}


// ===== 00737a8c  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::digits */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::digits(long param_1)

{
  if (*(ulong *)(param_1 + 0xa0) < 0x29) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(ulong *)(param_1 + 0xa0),0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
}


// ===== 00737ab8  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::is_zero =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::is_zero */

bool __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::is_zero(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (0x28 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar3,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  lVar2 = uVar3 << 2;
  do {
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    lVar2 = lVar4 + -4;
  } while (iVar1 == 0);
  return lVar4 == 0;
}


// ===== 00737b08  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2 */

void * __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2
          (void *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (0x4ff < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00466b57,0x1d,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  uVar3 = *(ulong *)((long)param_1 + 0xa0);
  uVar9 = param_2 >> 5;
  if (uVar3 != 0) {
    uVar8 = uVar3;
    do {
      uVar2 = uVar8 - 1;
      if (0x28 < uVar3) goto LAB_00737cd4;
      if (0x27 < (uVar9 - 1) + uVar8) {
        uVar2 = (uVar9 + uVar8) - 1;
        goto LAB_00737cd4;
      }
      *(undefined4 *)((long)param_1 + uVar8 * 4 + uVar9 * 4 + -4) =
           *(undefined4 *)((long)param_1 + uVar8 * 4 + -4);
      uVar8 = uVar2;
    } while (uVar2 != 0);
  }
  param_2 = param_2 & 0x1f;
  if (uVar9 != 0) {
    memset(param_1,0,uVar9 << 2);
  }
  lVar5 = *(long *)((long)param_1 + 0xa0);
  uVar2 = lVar5 + uVar9;
  if (param_2 == 0) {
    *(ulong *)((long)param_1 + 0xa0) = uVar2;
    return param_1;
  }
  uVar3 = uVar2 - 1;
  if (0x27 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar3,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738)
    ;
  }
  iVar10 = (int)param_2;
  uVar1 = *(uint *)((long)param_1 + uVar3 * 4) >> (ulong)(-iVar10 & 0x1f);
  lVar4 = lVar5 + uVar9;
  if (uVar1 != 0) {
    if (0x27 < uVar2) {
LAB_00737cd4:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar2,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
    }
    *(uint *)((long)param_1 + uVar2 * 4) = uVar1;
    lVar4 = uVar2 + 1;
  }
  if (uVar9 + 1 < uVar2) {
    uVar3 = lVar5 - 1;
    uVar1 = 0x20 - iVar10;
    if (7 < uVar3) {
      auVar11._4_4_ = uVar1;
      auVar11._0_4_ = uVar1;
      auVar11._8_4_ = uVar1;
      auVar11._12_4_ = uVar1;
      lVar5 = uVar2 * 4;
      uVar8 = uVar3 & 0xfffffffffffffff8;
      uVar2 = uVar2 - (uVar3 & 0xfffffffffffffff8);
      pauVar7 = (undefined1 (*) [16])((long)param_1 + lVar5 + -0x10);
      auVar11 = NEON_neg(auVar11,4);
      do {
        uVar8 = uVar8 - 8;
        auVar13 = NEON_ushl(*(undefined1 (*) [16])(pauVar7[-1] + 0xc),auVar11,4);
        auVar12._4_4_ = iVar10;
        auVar12._0_4_ = iVar10;
        auVar12._8_4_ = iVar10;
        auVar12._12_4_ = iVar10;
        auVar12 = NEON_ushl(*pauVar7,auVar12,4);
        auVar15 = NEON_ushl(*(undefined1 (*) [16])(pauVar7[-2] + 0xc),auVar11,4);
        auVar14._4_4_ = iVar10;
        auVar14._0_4_ = iVar10;
        auVar14._8_4_ = iVar10;
        auVar14._12_4_ = iVar10;
        auVar14 = NEON_ushl(pauVar7[-1],auVar14,4);
        (*pauVar7)[0] = auVar15[8] | auVar14[8];
        (*pauVar7)[1] = auVar15[9] | auVar14[9];
        (*pauVar7)[2] = auVar15[10] | auVar14[10];
        (*pauVar7)[3] = auVar15[0xb] | auVar14[0xb];
        (*pauVar7)[4] = auVar15[0xc] | auVar14[0xc];
        (*pauVar7)[5] = auVar15[0xd] | auVar14[0xd];
        (*pauVar7)[6] = auVar15[0xe] | auVar14[0xe];
        (*pauVar7)[7] = auVar15[0xf] | auVar14[0xf];
        pauVar7[-1][0] = auVar15[0] | auVar14[0];
        pauVar7[-1][1] = auVar15[1] | auVar14[1];
        pauVar7[-1][2] = auVar15[2] | auVar14[2];
        pauVar7[-1][3] = auVar15[3] | auVar14[3];
        pauVar7[-1][4] = auVar15[4] | auVar14[4];
        pauVar7[-1][5] = auVar15[5] | auVar14[5];
        pauVar7[-1][6] = auVar15[6] | auVar14[6];
        pauVar7[-1][7] = auVar15[7] | auVar14[7];
        pauVar7[1][0] = auVar13[8] | auVar12[8];
        pauVar7[1][1] = auVar13[9] | auVar12[9];
        pauVar7[1][2] = auVar13[10] | auVar12[10];
        pauVar7[1][3] = auVar13[0xb] | auVar12[0xb];
        pauVar7[1][4] = auVar13[0xc] | auVar12[0xc];
        pauVar7[1][5] = auVar13[0xd] | auVar12[0xd];
        pauVar7[1][6] = auVar13[0xe] | auVar12[0xe];
        pauVar7[1][7] = auVar13[0xf] | auVar12[0xf];
        (*pauVar7)[0] = auVar13[0] | auVar12[0];
        (*pauVar7)[1] = auVar13[1] | auVar12[1];
        (*pauVar7)[2] = auVar13[2] | auVar12[2];
        (*pauVar7)[3] = auVar13[3] | auVar12[3];
        (*pauVar7)[4] = auVar13[4] | auVar12[4];
        (*pauVar7)[5] = auVar13[5] | auVar12[5];
        (*pauVar7)[6] = auVar13[6] | auVar12[6];
        (*pauVar7)[7] = auVar13[7] | auVar12[7];
        pauVar7 = pauVar7 + -2;
      } while (uVar8 != 0);
      if (uVar3 == (uVar3 & 0xfffffffffffffff8)) goto LAB_00737c74;
    }
    lVar5 = uVar2 - 2;
    puVar6 = (uint *)((long)param_1 + uVar2 * 4 + -4);
    do {
      uVar3 = lVar5 + 1;
      lVar5 = lVar5 + -1;
      *puVar6 = puVar6[-1] >> (ulong)(uVar1 & 0x1f) | *puVar6 << param_2;
      puVar6 = puVar6 + -1;
    } while (uVar9 + 1 < uVar3);
  }
LAB_00737c74:
  *(int *)((long)param_1 + uVar9 * 4) = *(int *)((long)param_1 + uVar9 * 4) << param_2;
  *(long *)((long)param_1 + 0xa0) = lVar4;
  return param_1;
}


// ===== 00737cf8  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow5 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow5 */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow5
          (uint *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (0xc < param_2) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    do {
      if (0x28 < uVar4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar4,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
      }
      if (uVar4 != 0) {
        lVar6 = uVar4 << 2;
        uVar5 = 0;
        puVar7 = param_1;
        do {
          lVar6 = lVar6 + -4;
          uVar9 = uVar5 + (ulong)*puVar7 * 0x48c27395;
          uVar5 = uVar9 >> 0x20;
          *puVar7 = (uint)uVar9;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
        if (uVar5 != 0) {
          if (uVar4 == 0x28) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (0x28,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          param_1[uVar4] = (uint)(uVar9 >> 0x20);
          uVar4 = uVar4 + 1;
        }
      }
      param_2 = param_2 - 0xd;
      *(ulong *)(param_1 + 0x28) = uVar4;
    } while (0xc < param_2);
  }
  if (param_2 == 0) {
    uVar4 = 1;
  }
  else {
    auVar10._8_8_ = param_2 - 1;
    auVar10._0_8_ = param_2 - 1;
    uVar3 = (int)param_2 + 3U & 0x1c;
    if (uVar3 == 4) {
      auVar12._8_4_ = 5;
      auVar12._0_8_ = 0x500000005;
      auVar12._12_4_ = 5;
      uVar13 = 1;
      uVar14 = 1;
      uVar15 = 1;
      uVar16 = 1;
      bVar2 = 0;
    }
    else if (uVar3 == 8) {
      auVar12._8_4_ = 0x19;
      auVar12._0_8_ = 0x1900000019;
      auVar12._12_4_ = 0x19;
      uVar13 = 5;
      uVar14 = 5;
      uVar15 = 5;
      uVar16 = 5;
      bVar2 = 4;
    }
    else {
      auVar12._8_4_ = 0x7d;
      auVar12._0_8_ = 0x7d0000007d;
      auVar12._12_4_ = 0x7d;
      uVar13 = 0x19;
      uVar14 = 0x19;
      uVar15 = 0x19;
      uVar16 = 0x19;
      bVar2 = 8;
    }
    auVar17[0] = bVar2 | (byte)_DAT_00372470;
    auVar17[1] = (char)((ulong)_DAT_00372470 >> 8);
    auVar17[2] = (char)((ulong)_DAT_00372470 >> 0x10);
    auVar17[3] = (char)((ulong)_DAT_00372470 >> 0x18);
    auVar17[4] = (char)((ulong)_DAT_00372470 >> 0x20);
    auVar17[5] = (char)((ulong)_DAT_00372470 >> 0x28);
    auVar17[6] = (char)((ulong)_DAT_00372470 >> 0x30);
    auVar17[7] = (char)((ulong)_DAT_00372470 >> 0x38);
    auVar17[8] = bVar2 | (byte)_UNK_00372478;
    auVar17[9] = (char)((ulong)_UNK_00372478 >> 8);
    auVar17[10] = (char)((ulong)_UNK_00372478 >> 0x10);
    auVar17[0xb] = (char)((ulong)_UNK_00372478 >> 0x18);
    auVar17[0xc] = (char)((ulong)_UNK_00372478 >> 0x20);
    auVar17[0xd] = (char)((ulong)_UNK_00372478 >> 0x28);
    auVar17[0xe] = (char)((ulong)_UNK_00372478 >> 0x30);
    auVar17[0xf] = (char)((ulong)_UNK_00372478 >> 0x38);
    auVar18 = NEON_cmhi(auVar17,auVar10,8);
    auVar1[1] = (char)((ulong)_DAT_003718b0 >> 8);
    auVar1[0] = bVar2 | (byte)_DAT_003718b0;
    auVar1[2] = (char)((ulong)_DAT_003718b0 >> 0x10);
    auVar1[3] = (char)((ulong)_DAT_003718b0 >> 0x18);
    auVar1[4] = (char)((ulong)_DAT_003718b0 >> 0x20);
    auVar1[5] = (char)((ulong)_DAT_003718b0 >> 0x28);
    auVar1[6] = (char)((ulong)_DAT_003718b0 >> 0x30);
    auVar1[7] = (char)((ulong)_DAT_003718b0 >> 0x38);
    auVar1[8] = bVar2 | (byte)_UNK_003718b8;
    auVar1[9] = (char)((ulong)_UNK_003718b8 >> 8);
    auVar1[10] = (char)((ulong)_UNK_003718b8 >> 0x10);
    auVar1[0xb] = (char)((ulong)_UNK_003718b8 >> 0x18);
    auVar1[0xc] = (char)((ulong)_UNK_003718b8 >> 0x20);
    auVar1[0xd] = (char)((ulong)_UNK_003718b8 >> 0x28);
    auVar1[0xe] = (char)((ulong)_UNK_003718b8 >> 0x30);
    auVar1[0xf] = (char)((ulong)_UNK_003718b8 >> 0x38);
    auVar10 = NEON_cmhi(auVar1,auVar10,8);
    auVar11._0_4_ = auVar10._0_4_;
    auVar11._4_4_ = auVar10._8_4_;
    auVar11._8_4_ = auVar18._0_4_;
    auVar11._12_4_ = auVar18._8_4_;
    auVar18._4_4_ = uVar14;
    auVar18._0_4_ = uVar13;
    auVar18._8_4_ = uVar15;
    auVar18._12_4_ = uVar16;
    auVar10 = NEON_bsl(auVar11,auVar18,auVar12,1);
    auVar12 = NEON_ext(auVar10,auVar10,8,1);
    uVar4 = (ulong)(uint)(auVar10._0_4_ * auVar12._0_4_ * auVar10._4_4_ * auVar12._4_4_);
  }
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (uVar5 < 0x29) {
    if (uVar5 != 0) {
      lVar6 = uVar5 << 2;
      uVar9 = 0;
      puVar7 = param_1;
      do {
        lVar6 = lVar6 + -4;
        uVar8 = uVar9 + uVar4 * *puVar7;
        uVar9 = uVar8 >> 0x20;
        *puVar7 = (uint)uVar8;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
      if (uVar9 != 0) {
        if (uVar5 == 0x28) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (0x28,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
        }
        param_1[uVar5] = (uint)(uVar8 >> 0x20);
        uVar5 = uVar5 + 1;
      }
    }
    *(ulong *)(param_1 + 0x28) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar5,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
}


// ===== 00737eac  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_small =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_small */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_small
          (uint *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (0x28 < uVar1) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar1,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  if (uVar1 != 0) {
    lVar3 = uVar1 << 2;
    uVar2 = 0;
    puVar4 = param_1;
    do {
      lVar3 = lVar3 + -4;
      uVar5 = uVar2 + (ulong)*puVar4 * (ulong)param_2;
      uVar2 = uVar5 >> 0x20;
      *puVar4 = (uint)uVar5;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
    if (uVar2 != 0) {
      if (uVar1 == 0x28) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (0x28,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
      }
      param_1[uVar1] = (uint)(uVar5 >> 0x20);
      uVar1 = uVar1 + 1;
    }
  }
  *(ulong *)(param_1 + 0x28) = uVar1;
  return;
}


// ===== 00737f38  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul */

void __rustcall
<core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
          (undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        if (*(char *)(param_2 + uVar3) == '\0') goto LAB_00738000;
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
    }
    goto LAB_00737ff0;
  }
  uVar2 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  if (uVar2 == 0) {
LAB_00737f74:
    do {
      uVar3 = *(ulong *)(param_2 + uVar2);
      uVar1 = ((ulong *)(param_2 + uVar2))[1];
      if ((((0x101010101010100 - uVar3 | uVar3) & (0x101010101010100 - uVar1 | uVar1) ^
           0xffffffffffffffff) & 0x8080808080808080) != 0) break;
      uVar2 = uVar2 + 0x10;
    } while (uVar2 <= param_3 - 0x10);
  }
  else {
    uVar3 = 0;
    do {
      if (*(char *)(param_2 + uVar3) == '\0') goto LAB_00738000;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
    if (uVar2 <= param_3 - 0x10) goto LAB_00737f74;
  }
  for (; param_3 != uVar2; uVar2 = uVar2 + 1) {
    uVar3 = uVar2;
    if (*(char *)(param_2 + uVar2) == '\0') {
LAB_00738000:
      if (uVar3 + 1 != param_3) {
        param_1[1] = 0;
        param_1[2] = uVar3;
        *param_1 = 1;
        return;
      }
      param_1[1] = param_2;
      param_1[2] = param_3;
      *param_1 = 0;
      return;
    }
  }
LAB_00737ff0:
  *param_1 = 1;
  param_1[1] = 1;
  return;
}


// ===== 00738028  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_until_nul =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_until_nul */

undefined1  [16] __rustcall
<core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_until_nul(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < 0x10) {
    if (param_2 != 0) {
      uVar4 = 0;
      do {
        if (*(char *)(param_1 + uVar4) == '\0') goto LAB_007380f4;
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2 + 1;
    return auVar2 << 0x40;
  }
  uVar4 = (param_1 + 7U & 0xfffffffffffffff8) - param_1;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if (*(char *)(param_1 + uVar5) == '\0') {
        auVar7._8_8_ = uVar5 + 1;
        auVar7._0_8_ = param_1;
        return auVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    if (param_2 - 0x10 < uVar4) goto LAB_007380e0;
  }
  do {
    uVar5 = *(ulong *)(param_1 + uVar4);
    uVar1 = ((ulong *)(param_1 + uVar4))[1];
    if ((((0x101010101010100 - uVar5 | uVar5) & (0x101010101010100 - uVar1 | uVar1) ^
         0xffffffffffffffff) & 0x8080808080808080) != 0) break;
    uVar4 = uVar4 + 0x10;
  } while (uVar4 <= param_2 - 0x10);
LAB_007380e0:
  while( true ) {
    if (param_2 == uVar4) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2 + 1;
      return auVar3 << 0x40;
    }
    if (*(char *)(param_1 + uVar4) == '\0') break;
    uVar4 = uVar4 + 1;
  }
LAB_007380f4:
  auVar6._8_8_ = uVar4 + 1;
  auVar6._0_8_ = param_1;
  return auVar6;
}


// ===== 00738104  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str */

void __rustcall
<core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(undefined8 param_1,long param_2)

{
  core::str::converts::from_utf8(param_1,param_2 + -1);
  return;
}


// ===== 0073810c  <core::net::parser::[3]::core::net::ip_addr::Ipv6Addr>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[3]::core::net::ip_addr::Ipv6Addr>::parse_ascii */

void __rustcall
<core::net::parser::[3]::core::net::ip_addr::Ipv6Addr>::parse_ascii
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_48;
  long local_40;
  byte local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  
  local_48 = param_2;
  local_40 = param_3;
  FUN_007351a8(&local_34,&local_48);
  if ((local_40 == 0) && ((local_34 & 1) != 0)) {
    *(undefined8 *)(param_1 + 9) = uStack_2b;
    *(undefined8 *)(param_1 + 1) = local_33;
    *param_1 = 0;
    return;
  }
  param_1[1] = 2;
  *param_1 = 1;
  return;
}


// ===== 0073817c  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::finish_non_exhaustive */

void __rustcall
<core::fmt::builders::[4]::core::fmt::builders::DebugSet>::finish_non_exhaustive
          (undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
LAB_00738198:
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a73;
    uVar5 = 3;
  }
  else if (*(char *)((long)puVar7 + 0x12) < '\0') {
    uStack_38 = puVar7[1];
    local_40 = *puVar7;
    local_24[0] = 1;
    local_30 = local_24;
    iVar2 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_40,&DAT_00466a68,3);
    if (iVar2 != 0) goto LAB_00738198;
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a6b;
    uVar5 = 1;
  }
  else {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a76;
    uVar5 = 5;
  }
  uVar1 = (**(code **)(lVar6 + 0x18))(uVar3,puVar4,uVar5);
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00738248  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry */

undefined8 * __rustcall
<core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 local_5c [4];
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar1 = 1;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar4 = (undefined8 *)*param_1;
    if (*(char *)((long)puVar4 + 0x12) < '\0') {
      if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
        uVar1 = 1;
        uVar3 = (**(code **)(puVar4[1] + 0x18))(*puVar4,&DAT_004669e6,1);
        if ((uVar3 & 1) != 0) goto LAB_00738358;
      }
      uStack_78 = puVar4[1];
      local_80 = *puVar4;
      local_70 = local_5c;
      uStack_48 = puVar4[2];
      local_5c[0] = 1;
      local_50 = &DAT_0097b768;
      local_58 = (undefined1 *)&local_80;
      iVar2 = (**(code **)(param_3 + 0x18))(param_2,&local_58);
      if (iVar2 == 0) {
        uVar1 = (**(code **)(local_50 + 0x18))(local_58,&DAT_004669e1,2);
        goto LAB_00738358;
      }
    }
    else if (((*(byte *)((long)param_1 + 9) & 1) == 0) ||
            (uVar3 = (**(code **)(puVar4[1] + 0x18))(*puVar4,&DAT_004669da,2), (uVar3 & 1) == 0)) {
      uVar1 = (**(code **)(param_3 + 0x18))(param_2,puVar4);
      goto LAB_00738358;
    }
    uVar1 = 1;
  }
LAB_00738358:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return param_1;
}


// ===== 0073837c  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::finish */

void __rustcall
<core::fmt::builders::[4]::core::fmt::builders::DebugSet>::finish(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  uVar1 = (**(code **)(((undefined8 *)*param_1)[1] + 0x18))(*(undefined8 *)*param_1,&DAT_00466a6b,1)
  ;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 007383d4  <core::mem::type_info::[4]::core::mem::type_info::FieldId>::type_id =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::type_info::[4]::core::mem::type_info::FieldId>::type_id */

void __rustcall <core::mem::type_info::[4]::core::mem::type_info::FieldId>::type_id(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00466f27,0x6b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b920);
}


// ===== 007383f4  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish_non_exhaustive */

undefined8 __rustcall
<core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish_non_exhaustive
          (undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_4 [4];
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return 1;
  }
  puVar3 = (undefined8 *)*param_1;
  if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00738478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&UNK_00466a7b,3);
    return uVar2;
  }
  if (-1 < *(char *)((long)puVar3 + 0x12)) {
                    /* WARNING: Could not recover jumptable at 0x00738454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&UNK_00466a7e,5);
    return uVar2;
  }
  uStack_38 = puVar3[1];
  local_40 = *puVar3;
  local_4[0] = 1;
  local_30 = local_4;
  iVar1 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                    (&local_40,&DAT_00466a68,3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&DAT_00466a83,1);
  return uVar2;
}


// ===== 007384e8  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish */

void __rustcall
<core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  uVar1 = (**(code **)(((undefined8 *)*param_1)[1] + 0x18))(*(undefined8 *)*param_1,&DAT_00466a83,1)
  ;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00738540  <core::net::parser::[5]::core::net::socket_addr::SocketAddrV4>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[5]::core::net::socket_addr::SocketAddrV4>::parse_ascii */

ulong __rustcall
<core::net::parser::[5]::core::net::socket_addr::SocketAddrV4>::parse_ascii
          (byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong extraout_x10;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  uVar4 = FUN_00734e34(&local_30);
  if ((uVar4 & 1) == 0) {
    bVar3 = false;
    uVar6 = 0;
    goto LAB_00738614;
  }
  uVar5 = extraout_x10;
  if (local_28 == 0) {
LAB_007385e0:
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if ((local_28 != 1) && (uVar5 = (ulong)*local_30, *local_30 == 0x3a)) {
      uVar5 = (ulong)(local_30[1] - 0x30);
      if (local_30[1] - 0x30 < 10) {
        lVar7 = 2;
        do {
          if ((local_28 - lVar7 == 0) || (pbVar1 = local_30 + lVar7, 9 < *pbVar1 - 0x30)) {
            bVar3 = true;
            local_28 = local_28 - lVar7;
            goto LAB_007385fc;
          }
          uVar2 = (((uint)uVar5 & 0xffff) + (uint)(ushort)uVar5 * 4) * 2;
          uVar5 = (ulong)uVar2;
          if ((uVar2 & 0xf0000) != 0) break;
          lVar7 = lVar7 + 1;
          uVar2 = (uVar2 & 0xfffe) + (*pbVar1 - 0x30 & 0xffff);
          uVar5 = (ulong)uVar2;
        } while ((uVar2 & 0xffff0000) == 0);
      }
      goto LAB_007385e0;
    }
  }
LAB_007385fc:
  if (bVar3) {
    param_2 = local_28;
  }
  uVar6 = 0;
  if (bVar3) {
    uVar6 = (uVar4 >> 8 & 0xffffffff) << 0x10 | uVar5 << 0x30;
  }
LAB_00738614:
  uVar6 = uVar6 | 0x400;
  if (!(bool)(param_2 == 0 & bVar3)) {
    uVar6 = 0x401;
  }
  return uVar6;
}


// ===== 00738640  <core::fmt::num::imp::[5]::u16>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[5]::u16>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::imp::[5]::u16>::_fmt(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((param_1 & 0xffff) < 1000) {
    lVar4 = param_3;
    uVar3 = param_1;
    if ((param_1 & 0xffff) < 10) goto LAB_007386f0;
    uVar3 = (param_1 >> 2 & 0x3fff) / 0x19;
    puVar5 = &DAT_004670a6 + (ulong)(ushort)((short)param_1 + (short)uVar3 * -100) * 2;
    lVar4 = param_3 + -2;
    *(undefined *)(param_2 + lVar4) = *puVar5;
  }
  else {
    uVar3 = (param_1 >> 4 & 0xfff) / 0x271;
    uVar2 = param_1 + uVar3 * -10000;
    uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
    puVar5 = &DAT_004670a6 + (ulong)(ushort)((short)uVar2 + (short)uVar1 * -100) * 2;
    lVar4 = param_3 + -4;
    *(undefined2 *)(param_2 + lVar4) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar1 * 2);
    *(undefined *)(param_2 + param_3 + -2) = *puVar5;
  }
  *(undefined *)(param_2 + param_3 + -1) = puVar5[1];
LAB_007386f0:
  if (((param_1 & 0xffff) != 0) && ((uVar3 & 0xffff) == 0)) {
    auVar6._8_8_ = param_3 - lVar4;
    auVar6._0_8_ = param_2 + lVar4;
    return auVar6;
  }
  lVar4 = lVar4 + -1;
  *(undefined *)(param_2 + lVar4) = (&DAT_004670a7)[(uVar3 & 0xf) << 1];
  auVar7._8_8_ = param_3 - lVar4;
  auVar7._0_8_ = param_2 + lVar4;
  return auVar7;
}


// ===== 0073873c  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish_non_exhaustive */

void __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish_non_exhaustive
          (undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
LAB_00738758:
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00466a84,0x5d,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b610);
  }
  puVar7 = (undefined8 *)*param_1;
  if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a73;
    uVar5 = 3;
  }
  else if (*(char *)((long)puVar7 + 0x12) < '\0') {
    uStack_38 = puVar7[1];
    local_40 = *puVar7;
    local_24[0] = 1;
    local_30 = local_24;
    iVar2 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_40,&DAT_00466a68,3);
    if (iVar2 != 0) goto LAB_00738758;
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a6b;
    uVar5 = 1;
  }
  else {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00466a76;
    uVar5 = 5;
  }
  uVar1 = (**(code **)(lVar6 + 0x18))(uVar3,puVar4,uVar5);
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00738828  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::key =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::key */

undefined8 * __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugMap>::key
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_00466a15,0x8d,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b5b0);
    }
    puVar2 = (undefined8 *)*param_1;
    if (*(char *)((long)puVar2 + 0x12) < '\0') {
      if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
        uVar3 = 1;
        uVar1 = (**(code **)(puVar2[1] + 0x18))(*puVar2,&DAT_004669e6,1);
        if ((uVar1 & 1) != 0) goto LAB_00738850;
      }
      local_60 = (undefined1 *)((long)param_1 + 0xb);
      *local_60 = 1;
      uStack_48 = puVar2[2];
      uStack_68 = puVar2[1];
      local_70 = *puVar2;
      local_50 = &DAT_0097b768;
      local_58 = (undefined1 *)&local_70;
      uVar1 = (**(code **)(param_3 + 0x18))(param_2,&local_58);
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)(local_50 + 0x18))(local_58,&DAT_004669dc,2);
        goto joined_r0x0073897c;
      }
    }
    else if ((((*(byte *)((long)param_1 + 9) & 1) == 0) ||
             (uVar1 = (**(code **)(puVar2[1] + 0x18))(*puVar2,&DAT_004669da,2), (uVar1 & 1) == 0))
            && (uVar1 = (**(code **)(param_3 + 0x18))(param_2,puVar2), (uVar1 & 1) == 0)) {
      uVar1 = (**(code **)(puVar2[1] + 0x18))(*puVar2,&DAT_004669dc,2);
joined_r0x0073897c:
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
        *(undefined1 *)((long)param_1 + 10) = 1;
        goto LAB_00738850;
      }
    }
  }
  uVar3 = 1;
LAB_00738850:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return param_1;
}


// ===== 007389a8  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry */

long * __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 *local_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  lVar1 = key();
  uVar4 = 1;
  if ((*(byte *)(lVar1 + 8) & 1) != 0) goto LAB_00738a68;
  if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_004669e7,0x5d,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b598);
  }
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((long)puVar3 + 0x12) < '\0') {
    uStack_38 = puVar3[2];
    uStack_58 = puVar3[1];
    local_60 = *puVar3;
    local_50 = (long)param_1 + 0xb;
    local_40 = &DAT_0097b768;
    local_48 = (undefined1 *)&local_60;
    uVar2 = (**(code **)(param_5 + 0x18))(param_4,&local_48);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(local_40 + 0x18))(local_48,&DAT_004669e1,2);
      goto joined_r0x00738a54;
    }
  }
  else {
    uVar2 = (**(code **)(param_5 + 0x18))(param_4);
joined_r0x00738a54:
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      *(undefined1 *)((long)param_1 + 10) = 0;
      goto LAB_00738a68;
    }
  }
  uVar4 = 1;
LAB_00738a68:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return param_1;
}


// ===== 00738aa0  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::value */

long * __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugMap>::value
          (long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 *local_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  local_38 = (undefined1 *)&local_50;
  uVar2 = 1;
  if ((*(byte *)(param_1 + 1) & 1) != 0) goto LAB_00738b54;
  if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_004669e7,0x5d,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b598);
  }
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((long)puVar3 + 0x12) < '\0') {
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    uStack_28 = puVar3[2];
    local_40 = (long)param_1 + 0xb;
    local_30 = &DAT_0097b768;
    uVar1 = (**(code **)(param_3 + 0x18))(param_2,&local_38);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(local_30 + 0x18))(local_38,&DAT_004669e1,2);
      goto joined_r0x00738b40;
    }
  }
  else {
    uVar1 = (**(code **)(param_3 + 0x18))(param_2,puVar3);
joined_r0x00738b40:
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      *(undefined1 *)((long)param_1 + 10) = 0;
      goto LAB_00738b54;
    }
  }
  uVar2 = 1;
LAB_00738b54:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return param_1;
}


// ===== 00738b88  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish */

void __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (*(char *)((long)param_1 + 10) != '\x01') {
    uVar1 = (**(code **)(((undefined8 *)*param_1)[1] + 0x18))
                      (*(undefined8 *)*param_1,&DAT_00466a6b,1);
    *(undefined1 *)(param_1 + 1) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00466a84,0x5d,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b628);
}


// ===== 00738c04  <core::fmt::num::imp::[6]::i16>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[6]::i16>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[6]::i16>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((param_1 >> 0xf & 1) == 0) {
    if ((param_1 & 0xffff) < 1000) {
      if ((param_1 & 0xffff) < 10) {
        lVar4 = 6;
        uVar1 = param_1;
      }
      else {
        uVar1 = (param_1 >> 2 & 0x3fff) / 0x19;
        lVar4 = 4;
        *(undefined2 *)(param_2 + 4) =
             *(undefined2 *)(&DAT_004670a6 + ((ulong)(param_1 + uVar1 * -100) & 0xffff) * 2);
      }
    }
    else {
      uVar1 = (param_1 >> 4 & 0xfff) / 0x271;
      uVar3 = param_1 + uVar1 * -10000;
      uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar2 * 2);
      lVar4 = 2;
      *(undefined2 *)(param_2 + 4) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
    }
    if (((param_1 & 0xffff) != 0) && ((uVar1 & 0xffff) == 0)) {
      auVar5._8_8_ = 6 - lVar4;
      auVar5._0_8_ = param_2 + lVar4;
      return auVar5;
    }
    lVar4 = lVar4 + -1;
    *(undefined *)(param_2 + lVar4) = (&DAT_004670a7)[(uVar1 & 0xf) << 1];
    auVar6._8_8_ = 6 - lVar4;
    auVar6._0_8_ = param_2 + lVar4;
    return auVar6;
  }
  param_1 = -param_1;
  if ((param_1 & 0xffff) < 1000) {
    if (9 < (param_1 & 0xffff)) {
      uVar1 = (param_1 >> 2 & 0x3fff) / 0x19;
      lVar4 = 4;
      *(undefined2 *)(param_2 + 4) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(param_1 + uVar1 * -100) & 0xffff) * 2);
      param_1 = uVar1;
      goto joined_r0x00738d54;
    }
    lVar4 = 6;
  }
  else {
    uVar1 = (param_1 >> 4 & 0xfff) / 0x271;
    param_1 = param_1 + uVar1 * -10000;
    uVar2 = (param_1 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar2 * 2);
    lVar4 = 2;
    *(undefined2 *)(param_2 + 4) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(param_1 + uVar2 * -100) & 0xffff) * 2);
    param_1 = uVar1;
joined_r0x00738d54:
    if (param_1 == 0) goto LAB_00738dd4;
  }
  lVar4 = lVar4 + -1;
  *(undefined *)(param_2 + lVar4) = (&DAT_004670a7)[(param_1 & 0xf) << 1];
LAB_00738dd4:
  lVar4 = lVar4 + -1;
  *(undefined1 *)(param_2 + lVar4) = 0x2d;
  auVar7._8_8_ = 6 - lVar4;
  auVar7._0_8_ = param_2 + lVar4;
  return auVar7;
}


// ===== 00738df4  <core::net::parser::[7]::core::net::socket_addr::SocketAddrV6>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[7]::core::net::socket_addr::SocketAddrV6>::parse_ascii */

void __rustcall
<core::net::parser::[7]::core::net::socket_addr::SocketAddrV6>::parse_ascii
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


// ===== 00738e6c  <core::fmt::num::imp::[7]::u16>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[7]::u16>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[7]::u16>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((param_1 & 0xffff) < 1000) {
    if ((param_1 & 0xffff) < 10) {
      lVar4 = 5;
      uVar1 = param_1;
    }
    else {
      uVar1 = (param_1 >> 2 & 0x3fff) / 0x19;
      lVar4 = 3;
      *(undefined2 *)(param_2 + 3) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(param_1 + uVar1 * -100) & 0xffff) * 2);
    }
  }
  else {
    uVar1 = (param_1 >> 4 & 0xfff) / 0x271;
    uVar3 = param_1 + uVar1 * -10000;
    uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar2 * 2);
    lVar4 = 1;
    *(undefined2 *)(param_2 + 3) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
  }
  if (((param_1 & 0xffff) != 0) && ((uVar1 & 0xffff) == 0)) {
    auVar5._8_8_ = 5 - lVar4;
    auVar5._0_8_ = param_2 + lVar4;
    return auVar5;
  }
  lVar4 = lVar4 + -1;
  *(undefined *)(param_2 + lVar4) = (&DAT_004670a7)[(uVar1 & 0xf) << 1];
  auVar6._8_8_ = 5 - lVar4;
  auVar6._0_8_ = param_2 + lVar4;
  return auVar6;
}


// ===== 00738f64  <core::any::[8]::core::any::TypeId>::trait_info_of_trait_type_id =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::any::[8]::core::any::TypeId>::trait_info_of_trait_type_id */

void __rustcall <core::any::[8]::core::any::TypeId>::trait_info_of_trait_type_id(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00466e8f,99,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b8d8);
}


// ===== 00738f84  <core::net::parser::[9]::core::net::socket_addr::SocketAddr>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[9]::core::net::socket_addr::SocketAddr>::parse_ascii */

void __rustcall
<core::net::parser::[9]::core::net::socket_addr::SocketAddr>::parse_ascii
          (undefined2 *param_1,char *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  uint uVar4;
  byte *pbVar5;
  char *local_80;
  long local_78;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  ulong local_38;
  
  local_80 = param_2;
  local_78 = param_3;
  uVar2 = FUN_00734e34(&local_80);
  if (((((uVar2 & 1) != 0) && (local_78 != 0)) && (local_78 != 1)) &&
     ((*local_80 == ':' && (uVar4 = (byte)local_80[1] - 0x30, uVar4 < 10)))) {
    local_78 = local_78 + -2;
    pbVar5 = (byte *)(local_80 + 2);
    do {
      if (local_78 == 0) {
LAB_00739058:
        if (local_78 != 0) goto LAB_00739100;
        uVar2 = uVar2 >> 8 & 0xffffffff | (ulong)(uVar4 & 0xffff) << 0x20;
        uVar3 = 0;
        goto LAB_007390c8;
      }
      if (9 < *pbVar5 - 0x30) goto LAB_00739058;
      uVar4 = ((uVar4 & 0xffff) + (uVar4 & 0xffff) * 4) * 2;
      if ((uVar4 & 0xf0000) != 0) break;
      local_78 = local_78 + -1;
      uVar4 = (uVar4 & 0xfffe) + (*pbVar5 - 0x30 & 0xffff);
      pbVar5 = pbVar5 + 1;
    } while ((uVar4 & 0xffff0000) == 0);
  }
  local_80 = param_2;
  local_78 = param_3;
  FUN_007352fc(&local_50,&local_80);
  uVar1 = uStack_48;
  if (((int)local_50 != 1) || (local_78 != 0)) {
LAB_00739100:
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 2;
    return;
  }
  uVar2 = (local_50 >> 0x20) << 0x10;
  uStack_48 = local_40;
  local_50 = uVar1;
  local_40 = local_38;
  uVar3 = 1;
LAB_007390c8:
  *param_1 = uVar3;
  *(int *)(param_1 + 1) = (int)uVar2;
  *(ulong *)(param_1 + 8) = uStack_48;
  *(ulong *)(param_1 + 4) = local_50;
  *(ulong *)(param_1 + 0xc) = local_40;
  param_1[3] = (short)(uVar2 >> 0x20);
  return;
}


// ===== 00739124  <core::fmt::core::fmt::FormattingOptions>::get_fill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::core::fmt::FormattingOptions>::get_fill */

uint __rustcall <core::fmt::core::fmt::FormattingOptions>::get_fill(uint *param_1)

{
  return *param_1 & 0x1fffff;
}


// ===== 00739130  <core::fmt::builders::core::fmt::builders::PadAdapter>::wrap =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::core::fmt::builders::PadAdapter>::wrap */

void __rustcall
<core::fmt::builders::core::fmt::builders::PadAdapter>::wrap
          (long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  lVar1 = param_2[2];
  param_3[2] = param_4;
  param_3[1] = uVar3;
  *param_3 = uVar2;
  *param_1 = (long)param_3;
  param_1[1] = (long)&DAT_0097b768;
  param_1[2] = lVar1;
  return;
}


// ===== 00739154  <core::net::parser::core::net::ip_addr::IpAddr>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::core::net::ip_addr::IpAddr>::parse_ascii */

void __rustcall
<core::net::parser::core::net::ip_addr::IpAddr>::parse_ascii
          (undefined2 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 local_58;
  long local_50;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  undefined4 local_30;
  undefined1 uStack_2c;
  undefined4 local_2b;
  
  local_58 = param_2;
  local_50 = param_3;
  uVar1 = FUN_00734e34(&local_58);
  if ((uVar1 & 1) == 0) {
    FUN_007351a8(&local_38,&local_58);
    uVar2 = uStack_37;
    if (local_38 == '\x01') {
      if (local_50 == 0) {
        local_38 = (char)uStack_33;
        uStack_37 = (undefined4)(CONCAT43(local_30,uStack_33) >> 8);
        uStack_33 = (undefined3)(CONCAT17(uStack_2c,CONCAT43(local_30,uStack_33)) >> 0x28);
        uVar3 = 1;
        local_30 = local_2b;
        goto LAB_007391d4;
      }
    }
  }
  else if (local_50 == 0) {
    uVar2 = (undefined4)(uVar1 >> 8);
    uVar3 = 0;
LAB_007391d4:
    *(undefined1 *)param_1 = uVar3;
    *(undefined4 *)((long)param_1 + 1) = uVar2;
    *(ulong *)((long)param_1 + 5) = CONCAT35(uStack_33,CONCAT41(uStack_37,local_38));
    *(undefined4 *)((long)param_1 + 0xd) = local_30;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 00739218  <core::num::imp::fmt::core::num::imp::fmt::Formatted>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::fmt::core::num::imp::fmt::Formatted>::len */

void __rustcall <core::num::imp::fmt::core::num::imp::fmt::Formatted>::len(long param_1)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(param_1 + 0x18);
  uVar3 = *(ulong *)(param_1 + 8);
  if (lVar4 != 0) {
    puVar5 = (ulong *)(*(long *)(param_1 + 0x10) + 8);
    do {
      if ((short)puVar5[-1] == 0) {
        uVar7 = *puVar5;
      }
      else if ((short)puVar5[-1] == 1) {
        uVar1 = *(ushort *)((long)puVar5 + -6);
        if (uVar1 == 0) {
          uVar7 = 1;
        }
        else {
          uVar6 = (uint)uVar1;
          uVar7 = (ulong)(((uVar1 + 0x5fff6 & uVar6 + 0x7ff9c ^ uVar6 + 0xdfc18 & uVar6 + 0x7d8f0)
                          >> 0x11) + 1);
        }
      }
      else {
        uVar7 = puVar5[1];
      }
      bVar2 = CARRY8(uVar3,uVar7);
      uVar3 = uVar3 + uVar7;
      puVar5 = puVar5 + 3;
      if (bVar2) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


// ===== 007392c0  <core::num::imp::fmt::core::num::imp::fmt::Formatted>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::fmt::core::num::imp::fmt::Formatted>::write */

undefined1  [16] __rustcall
<core::num::imp::fmt::core::num::imp::fmt::Formatted>::write
          (undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong __n;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  __n = param_1[1];
  if (param_3 < __n) {
LAB_007392e0:
    uVar1 = 0;
  }
  else {
    memcpy(param_2,(void *)*param_1,__n);
    if (param_1[3] == 0) {
      uVar1 = 1;
    }
    else {
      lVar2 = param_1[2];
      uVar1 = 1;
      lVar3 = param_1[3] * 0x18;
      do {
        if (param_3 < __n) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (__n,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b798);
        }
        auVar4 = <core::num::imp::fmt::core::num::imp::fmt::Part>::write
                           (lVar2,(long)param_2 + __n,param_3 - __n);
        if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_007392e0;
        lVar3 = lVar3 + -0x18;
        lVar2 = lVar2 + 0x18;
        __n = auVar4._8_8_ + __n;
      } while (lVar3 != 0);
    }
  }
  auVar4._8_8_ = __n;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


// ===== 00739380  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::left_shift =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::left_shift
    */

void __rustcall
<core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::left_shift
          (ulong *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    lVar5 = (param_2 & 0x3f) * 2;
    uVar8 = (ulong)*(ushort *)(&DAT_00468e00 + lVar5) & 0x7ff;
    uVar6 = (ulong)(*(ushort *)(&DAT_00468e00 + lVar5) >> 0xb);
    lVar9 = -0x51c;
    do {
      if (((uVar8 - ((ulong)*(ushort *)(&DAT_00468e02 + lVar5) & 0x7ff)) + lVar9 == -0x51c) ||
         (-lVar9 == uVar8)) goto LAB_00739424;
      if (lVar9 - uVar4 == -0x51c) {
        uVar6 = uVar6 - 1;
        goto LAB_00739424;
      }
      if (lVar9 == -0x21c) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (0x300,0x300,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bc60);
      }
      lVar1 = uVar8 + lVar9;
      bVar2 = *(byte *)((long)param_1 + lVar9 + 0x524);
      lVar9 = lVar9 + 1;
    } while (bVar2 == (&UNK_0046939e)[lVar1]);
    uVar6 = uVar6 - (bVar2 < (byte)(&UNK_0046939e)[lVar1]);
LAB_00739424:
    uVar8 = 0;
    lVar5 = uVar4 - 1;
    do {
      if (0x300 < lVar5 + 1U) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (lVar5,0x300,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b7c8);
      }
      uVar4 = ((ulong)*(byte *)((long)param_1 + lVar5 + 8) << (param_2 & 0x3f)) + uVar8;
      uVar8 = uVar4 / 10;
      if (uVar6 + lVar5 < 0x300) {
        *(char *)((long)param_1 + lVar5 + uVar6 + 8) = (char)(uVar4 % 10);
      }
      else if (uVar4 % 10 != 0) {
        *(undefined1 *)((long)param_1 + 0x30c) = 1;
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != -1);
    if (9 < uVar4) {
      puVar7 = (undefined1 *)((long)param_1 + uVar6 + 7);
      uVar4 = uVar6;
      do {
        uVar4 = uVar4 - 1;
        if (uVar4 < 0x300) {
          *puVar7 = (char)(uVar8 % 10);
        }
        else if (uVar8 % 10 != 0) {
          *(undefined1 *)((long)param_1 + 0x30c) = 1;
        }
        bVar3 = 9 < uVar8;
        puVar7 = puVar7 + -1;
        uVar8 = uVar8 / 10;
      } while (bVar3);
    }
    uVar4 = *param_1 + uVar6;
    *(int *)(param_1 + 0x61) = (int)param_1[0x61] + (int)uVar6;
    uVar6 = uVar4;
    if (0x2ff < uVar4) {
      uVar6 = 0x300;
    }
    *param_1 = uVar6;
    while (uVar4 != 0) {
      uVar4 = uVar6 - 1;
      if (0x300 < uVar6) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar4,0x300,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b7b0);
      }
      if (*(char *)((long)param_1 + uVar6 + 7) != '\0') {
        return;
      }
      *param_1 = uVar4;
      uVar6 = uVar4;
    }
  }
  return;
}


// ===== 0073958c  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::right_shift =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::right_shift
    */

void __rustcall
<core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::
right_shift(ulong *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar6 = 0;
  uVar8 = *param_1;
  param_2 = param_2 & 0x3f;
  uVar7 = 0;
  while (uVar8 != uVar7) {
    if (uVar7 == 0x300) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x300,0x300,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b7e0);
    }
    uVar5 = uVar7 + 1;
    uVar6 = (ulong)*(byte *)((long)param_1 + uVar7 + 8) + uVar6 * 10;
    uVar7 = uVar5;
    if (uVar6 >> param_2 != 0) goto LAB_007395fc;
  }
  uVar5 = uVar8;
  if (uVar6 == 0) {
    return;
  }
  for (; uVar6 >> param_2 == 0; uVar6 = uVar6 * 10) {
    uVar5 = uVar5 + 1;
  }
LAB_007395fc:
  iVar3 = (int)param_1[0x61] - (int)uVar5;
  iVar1 = iVar3 + 1;
  *(int *)(param_1 + 0x61) = iVar1;
  if (iVar3 + 0x800 < 0 != SCARRY4(iVar1,0x7ff)) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x61) = 0;
    *(undefined1 *)((long)param_1 + 0x30c) = 0;
    return;
  }
  uVar7 = uVar8 - uVar5;
  if (uVar8 < uVar5 || uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    lVar10 = -uVar5;
    lVar2 = uVar5 + 8;
    if (0x2ff < uVar5) {
      uVar5 = 0x300;
    }
    lVar9 = uVar5 - 0x300;
    puVar4 = param_1;
    do {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (-lVar10,0x300,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b7f8);
      }
      uVar5 = uVar6 >> param_2;
      uVar6 = (ulong)*(byte *)((long)puVar4 + lVar2) + (uVar6 & ~(-1L << param_2)) * 10;
      lVar10 = lVar10 + -1;
      lVar9 = lVar9 + 1;
      *(char *)(puVar4 + 1) = (char)uVar5;
      puVar4 = (ulong *)((long)puVar4 + 1);
    } while (-lVar10 != uVar8);
  }
  for (; uVar8 = uVar7, uVar6 != 0; uVar6 = (uVar6 & ~(-1L << param_2)) * 10) {
    if (uVar7 < 0x300) {
      *(char *)((long)param_1 + uVar7 + 8) = (char)(uVar6 >> param_2);
      uVar7 = uVar7 + 1;
    }
    else if ((uVar6 >> param_2 & 0xff) != 0) {
      *(undefined1 *)((long)param_1 + 0x30c) = 1;
    }
  }
  while( true ) {
    *param_1 = uVar8;
    if (uVar8 == 0) {
      return;
    }
    if (0x300 < uVar7) break;
    lVar2 = uVar8 + 7;
    uVar8 = uVar8 - 1;
    if (*(char *)((long)param_1 + lVar2) != '\0') {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar8 - 1,0x300,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b7b0);
}


// ===== 00739740  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::round =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::round
    */

long __rustcall
<core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::round
          (ulong *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *param_1;
  if (uVar5 != 0) {
    uVar1 = (uint)param_1[0x61];
    uVar4 = (ulong)uVar1;
    if (-1 < (int)uVar1) {
      if (0x12 < uVar1) {
        return -1;
      }
      lVar3 = 0;
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          lVar3 = lVar3 * 10;
          if (uVar6 < uVar5) {
            lVar3 = lVar3 + (ulong)*(byte *)((long)param_1 + uVar6 + 8);
          }
          uVar6 = uVar6 + 1;
        } while (uVar4 != uVar6);
      }
      if (uVar4 < uVar5) {
        bVar2 = *(byte *)((long)param_1 + uVar4 + 8);
        if ((uVar4 + 1 == uVar5) && (bVar2 == 5)) {
          if ((*(byte *)((long)param_1 + 0x30c) & 1) == 0) {
            if (uVar1 == 0) {
              return lVar3;
            }
            if ((*(byte *)((long)param_1 + uVar4 + 7) & 1) == 0) {
              return lVar3;
            }
          }
        }
        else if (bVar2 < 5) {
          return lVar3;
        }
        lVar3 = lVar3 + 1;
      }
      return lVar3;
    }
  }
  return 0;
}


// ===== 007397f4  <core::fmt::[a]::core::fmt::Formatter>::debug_list =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_list */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_list(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00467170,1);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


// ===== 00739838  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2);
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(bool *)((long)param_1 + 0x11) = param_4 == 0;
  return;
}


// ===== 00739884  <core::fmt::[a]::core::fmt::Formatter>::debug_struct =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


// ===== 007398bc  <core::fmt::[a]::core::fmt::Formatter>::pad_integral =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::pad_integral */

ulong __rustcall
<core::fmt::[a]::core::fmt::Formatter>::pad_integral
          (undefined8 *param_1,int param_2,undefined8 *param_3,ulong param_4,undefined8 param_5,
          long param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint3 uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  
  uVar15 = *(uint *)(param_1 + 2);
  uVar9 = (ulong)(uVar15 >> 0x15) & 1;
  uVar7 = 0x2b;
  if ((uVar15 & 0x200000) == 0) {
    uVar7 = 0xffffffff;
  }
  uVar1 = uVar7;
  if (param_2 == 0) {
    uVar9 = 1;
    uVar1 = 0x2d;
  }
  uVar9 = uVar9 + param_6;
  if ((uVar15 >> 0x17 & 1) == 0) {
    param_3 = (undefined8 *)0x0;
    uVar14 = (ulong)*(ushort *)((long)param_1 + 0x14);
    if (uVar14 <= uVar9) goto LAB_0073992c;
LAB_00739af0:
    if ((uVar15 >> 0x18 & 1) == 0) {
      uVar12 = uVar15 >> 0x1d & 3;
      uVar2 = (int)uVar14 - (int)uVar9;
      uVar17 = uVar2;
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          uVar17 = 0;
        }
      }
      else if (uVar12 == 2) {
        uVar17 = uVar2 >> 1 & 0x7fff;
      }
      uVar18 = *param_1;
      lVar5 = param_1[1];
      uVar12 = 0;
      do {
        if ((uVar17 & 0xffff) <= (uVar12 & 0xffff)) {
          uVar9 = FUN_00743bd0(uVar18,lVar5,uVar1,param_3,param_4);
          if (((uVar9 & 1) == 0) &&
             (uVar9 = (**(code **)(lVar5 + 0x18))(uVar18,param_5,param_6), (uVar9 & 1) == 0)) {
            uVar13 = 0;
            goto LAB_00739c4c;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        uVar9 = (**(code **)(lVar5 + 0x20))(uVar18,uVar15 & 0x1fffff);
      } while ((uVar9 & 1) == 0);
    }
    else {
      lVar5 = param_1[1];
      uVar18 = param_1[2];
      uVar16 = *param_1;
      *(uint *)(param_1 + 2) = (uint)uVar18 & 0x9fe00000 | 0x20000030;
      uVar6 = FUN_00743bd0(uVar16,lVar5,uVar1,param_3,param_4);
      if ((uVar6 & 1) == 0) {
        uVar15 = 0;
        do {
          if (((int)uVar14 - (int)uVar9 & 0xffffU) <= (uVar15 & 0xffff)) {
            uVar9 = (**(code **)(lVar5 + 0x18))(uVar16,param_5,param_6);
            if ((uVar9 & 1) == 0) {
              uVar12 = 0;
              param_1[2] = uVar18;
              goto LAB_00739c20;
            }
            break;
          }
          uVar15 = uVar15 + 1;
          uVar6 = (**(code **)(lVar5 + 0x20))(uVar16,0x30);
        } while ((uVar6 & 1) == 0);
      }
    }
  }
  else {
    if (param_4 < 0x20) {
      if (param_4 == 0) {
        lVar5 = 0;
      }
      else {
        if (param_4 < 8) {
          uVar14 = 0;
          lVar5 = 0;
        }
        else {
          uVar14 = param_4 & 0x18;
          uVar18 = NEON_cmgt(*param_3,0xbfbfbfbfbfbfbfbf,1);
          uVar3 = CONCAT12((char)((ulong)uVar18 >> 8),(short)uVar18) & 0xff00ff;
          uVar6 = (ulong)((byte)((ulong)uVar18 >> 0x30) & 1);
          uVar19 = (ulong)((byte)((ulong)uVar18 >> 0x38) & 1);
          uVar22 = (ulong)((byte)((ulong)uVar18 >> 0x20) & 1);
          uVar23 = (ulong)((byte)((ulong)uVar18 >> 0x28) & 1);
          uVar20 = (ulong)((byte)((ulong)uVar18 >> 0x10) & 1);
          uVar21 = (ulong)((byte)((ulong)uVar18 >> 0x18) & 1);
          uVar24 = (ulong)((byte)uVar3 & 1);
          uVar25 = (ulong)((byte)(uVar3 >> 0x10) & 1);
          if (uVar14 != 8) {
            uVar18 = NEON_cmgt(param_3[1],0xbfbfbfbfbfbfbfbf,1);
            uVar3 = CONCAT12((char)((ulong)uVar18 >> 8),(short)uVar18) & 0xff00ff;
            uVar6 = uVar6 + ((byte)((ulong)uVar18 >> 0x30) & 1);
            uVar19 = uVar19 + ((byte)((ulong)uVar18 >> 0x38) & 1);
            uVar20 = uVar20 + ((byte)((ulong)uVar18 >> 0x10) & 1);
            uVar21 = uVar21 + ((byte)((ulong)uVar18 >> 0x18) & 1);
            uVar24 = uVar24 + ((byte)uVar3 & 1);
            uVar25 = uVar25 + ((byte)(uVar3 >> 0x10) & 1);
            uVar22 = uVar22 + ((byte)((ulong)uVar18 >> 0x20) & 1);
            uVar23 = uVar23 + ((byte)((ulong)uVar18 >> 0x28) & 1);
            if (uVar14 != 0x10) {
              uVar18 = NEON_cmgt(param_3[2],0xbfbfbfbfbfbfbfbf,1);
              uVar3 = CONCAT12((char)((ulong)uVar18 >> 8),(short)uVar18) & 0xff00ff;
              uVar6 = uVar6 + ((byte)((ulong)uVar18 >> 0x30) & 1);
              uVar19 = uVar19 + ((byte)((ulong)uVar18 >> 0x38) & 1);
              uVar20 = uVar20 + ((byte)((ulong)uVar18 >> 0x10) & 1);
              uVar21 = uVar21 + ((byte)((ulong)uVar18 >> 0x18) & 1);
              uVar24 = uVar24 + ((byte)uVar3 & 1);
              uVar25 = uVar25 + ((byte)(uVar3 >> 0x10) & 1);
              uVar22 = uVar22 + ((byte)((ulong)uVar18 >> 0x20) & 1);
              uVar23 = uVar23 + ((byte)((ulong)uVar18 >> 0x28) & 1);
            }
          }
          lVar5 = uVar24 + uVar22 + uVar20 + uVar6 + uVar25 + uVar23 + uVar21 + uVar19;
          if (param_4 == uVar14) goto LAB_00739ae0;
        }
        lVar10 = param_4 - uVar14;
        pcVar8 = (char *)((long)param_3 + uVar14);
        do {
          iVar11 = (int)*pcVar8;
          if (iVar11 != -0x41 && iVar11 + 0x41 < 0 == SCARRY4(iVar11,0x41)) {
            lVar5 = lVar5 + 1;
          }
          lVar10 = lVar10 + -1;
          pcVar8 = pcVar8 + 1;
        } while (lVar10 != 0);
      }
    }
    else {
      lVar5 = core::str::count::do_count_chars(uVar7,param_3,param_4);
    }
LAB_00739ae0:
    uVar9 = lVar5 + uVar9;
    uVar14 = (ulong)*(ushort *)((long)param_1 + 0x14);
    if (uVar9 < uVar14) goto LAB_00739af0;
LAB_0073992c:
    uVar18 = *param_1;
    lVar5 = param_1[1];
    uVar9 = FUN_00743bd0(uVar18,lVar5,uVar1,param_3,param_4);
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00739978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(lVar5 + 0x18))(uVar18,param_5,param_6);
      return uVar9;
    }
  }
  uVar12 = 1;
LAB_00739c20:
  return (ulong)uVar12;
  while( true ) {
    uVar13 = uVar13 + 1;
    uVar9 = (**(code **)(lVar5 + 0x20))(uVar18,uVar15 & 0x1fffff);
    if ((uVar9 & 1) != 0) break;
LAB_00739c4c:
    bVar4 = (uVar2 - uVar17 & 0xffff) <= (uVar13 & 0xffff);
    uVar12 = (uint)!bVar4;
    if (bVar4) break;
  }
  goto LAB_00739c20;
}


// ===== 00739c78  FUN_00739c78 =====

ulong FUN_00739c78(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 local_70;
  ulong uStack_68;
  long local_60;
  long lStack_58;
  
  uVar3 = *(ushort *)((long)param_1 + 0x14);
  uVar10 = (uint)uVar3;
  if (uVar3 == 0) {
    uVar6 = FUN_00739eac(*param_1,param_1[1]);
    return uVar6;
  }
  local_70 = *param_2;
  uVar6 = param_2[1];
  uVar13 = param_1[2];
  lVar1 = param_2[2];
  lVar11 = param_2[3];
  uVar12 = (uint)uVar13;
  uStack_68 = uVar6;
  local_60 = lVar1;
  lStack_58 = lVar11;
  if ((uVar12 >> 0x18 & 1) != 0) {
    uVar9 = (**(code **)(param_1[1] + 0x18))(*param_1,local_70,uVar6);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
    local_70 = 1;
    uVar10 = 0;
    if ((uint)(ushort)uVar6 <= (uint)uVar3) {
      uVar10 = (uint)uVar3 - (uint)(ushort)uVar6;
    }
    uVar12 = uVar12 & 0x9fe00000 | 0x20000030;
    *(uint *)(param_1 + 2) = uVar12;
    uStack_68 = 0;
  }
  uVar6 = uStack_68;
  if (lVar11 != 0) {
    puVar7 = (ulong *)(lVar1 + 8);
    do {
      if ((short)puVar7[-1] == 0) {
        uVar9 = *puVar7;
      }
      else if ((short)puVar7[-1] == 1) {
        uVar3 = *(ushort *)((long)puVar7 + -6);
        if (uVar3 == 0) {
          uVar9 = 1;
        }
        else {
          uVar8 = (uint)uVar3;
          uVar9 = (ulong)(((uVar3 + 0x5fff6 & uVar8 + 0x7ff9c ^ uVar8 + 0xdfc18 & uVar8 + 0x7d8f0)
                          >> 0x11) + 1);
        }
      }
      else {
        uVar9 = puVar7[1];
      }
      bVar4 = CARRY8(uVar6,uVar9);
      uVar6 = uVar6 + uVar9;
      puVar7 = puVar7 + 3;
      if (bVar4) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((ushort)uVar10 <= uVar6) {
    uVar6 = FUN_00739eac(*param_1,param_1[1],&local_70);
    param_1[2] = uVar13;
    return uVar6 & 0xffffffff;
  }
  uVar8 = uVar12 >> 0x1d & 3;
  uVar10 = uVar10 - (int)uVar6;
  uVar14 = uVar10;
  if (uVar8 < 2) {
    if (uVar8 == 0) {
      uVar14 = 0;
    }
  }
  else if (uVar8 == 2) {
    uVar14 = uVar10 >> 1 & 0x7fff;
  }
  uVar2 = *param_1;
  lVar1 = param_1[1];
  uVar8 = 0;
  while ((uVar8 & 0xffff) < (uVar14 & 0xffff)) {
    uVar8 = uVar8 + 1;
    uVar6 = (**(code **)(lVar1 + 0x20))(uVar2,uVar12 & 0x1fffff);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  uVar6 = FUN_00739eac(uVar2,lVar1,&local_70);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar8 = 0;
  do {
    bVar4 = (uVar10 - uVar14 & 0xffff) <= (uVar8 & 0xffff);
    if (bVar4) break;
    uVar8 = uVar8 + 1;
    iVar5 = (**(code **)(lVar1 + 0x20))(uVar2,uVar12 & 0x1fffff);
  } while (iVar5 == 0);
  param_1[2] = uVar13;
  return (ulong)!bVar4;
}


// ===== 00739eac  FUN_00739eac =====

undefined8 FUN_00739eac(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  short *psVar8;
  long lVar9;
  short *psVar10;
  code *pcVar12;
  byte abStack_70 [8];
  undefined4 local_68;
  undefined1 local_64;
  short *psVar11;
  
  if ((param_3[1] == 0) ||
     (uVar4 = (**(code **)(param_2 + 0x18))(param_1,*param_3), (uVar4 & 1) == 0)) {
    lVar9 = param_3[3];
    if (lVar9 != 0) {
      psVar8 = (short *)param_3[2];
      psVar10 = psVar8;
      do {
        psVar11 = psVar10 + 0xc;
        if (*psVar10 == 0) {
          uVar4 = *(ulong *)(psVar10 + 4);
          if (uVar4 < 0x41) {
            if (uVar4 == 0) goto LAB_00739f40;
          }
          else {
            pcVar12 = *(code **)(param_2 + 0x18);
            do {
              uVar6 = (*pcVar12)(param_1,&DAT_00466b74,0x40);
              if ((uVar6 & 1) != 0) goto LAB_00739ef4;
              uVar4 = uVar4 - 0x40;
            } while (0x40 < uVar4);
          }
          uVar4 = (**(code **)(param_2 + 0x18))(param_1,&DAT_00466b74,uVar4);
joined_r0x0073a0f4:
          if ((uVar4 & 1) != 0) goto LAB_00739ef4;
        }
        else {
          if (*psVar10 != 1) {
            uVar4 = (**(code **)(param_2 + 0x18))
                              (param_1,*(undefined8 *)(psVar10 + 4),*(undefined8 *)(psVar10 + 8));
            goto joined_r0x0073a0f4;
          }
          uVar1 = psVar10[1];
          uVar7 = (uint)uVar1;
          local_64 = 0;
          local_68 = 0;
          uVar4 = (ulong)(((uVar1 + 0x5fff6 & uVar1 + 0x7ff9c ^ uVar7 + 0xdfc18 & uVar7 + 0x7d8f0)
                          >> 0x11) + 1);
          if (uVar7 == 0) {
            uVar4 = 1;
          }
          cVar2 = (char)(uVar7 / 10);
          abStack_70[uVar4 + 7] = (char)uVar1 + cVar2 * -10 | 0x30;
          if ((((uVar4 != 1) &&
               (abStack_70[uVar4 + 6] = cVar2 + (char)((uVar7 / 10) / 10) * -10 | 0x30, uVar4 != 2))
              && (uVar7 = (uVar1 >> 2) / 0x19,
                 abStack_70[uVar4 + 5] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30, uVar4 != 3))
             && (((uVar7 = (uVar1 >> 3) / 0x7d,
                  abStack_70[uVar4 + 4] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30, uVar4 != 4
                  && (abStack_70[uVar4 + 3] = (byte)((uVar1 >> 4) / 0x271) | 0x30, uVar4 != 5)) &&
                 ((abStack_70[uVar4 + 2] = 0x30, uVar4 != 6 &&
                  (abStack_70[uVar4 + 1] = 0x30, uVar4 != 7)))))) {
            abStack_70[uVar4] = 0x30;
          }
          iVar3 = (**(code **)(param_2 + 0x18))(param_1,&local_68);
          if (iVar3 != 0) goto LAB_00739ef4;
        }
LAB_00739f40:
        psVar10 = psVar11;
      } while (psVar11 != psVar8 + lVar9 * 0xc);
    }
    uVar5 = 0;
  }
  else {
LAB_00739ef4:
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 0073a120  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
          (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_80;
  long lStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined1 local_34 [4];
  
  uVar4 = *param_1;
  lVar1 = param_1[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar5)(uVar4);
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar3 = (*pcVar5)(uVar4,&DAT_004669e4,2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      local_70 = local_34;
      uStack_58 = param_1[2];
      local_34[0] = 1;
      local_60 = &DAT_0097b768;
      local_80 = uVar4;
      lStack_78 = lVar1;
      local_68 = (undefined1 *)&local_80;
      iVar2 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
    }
    else {
      uVar3 = (*pcVar5)(uVar4,&DAT_004669e3,1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar3 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar3 & 1) == 0) {
      if (((param_3 == 0) && (-1 < *(char *)((long)param_1 + 0x12))) &&
         (iVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_00466a72,1), iVar2 != 0)) {
        return 1;
      }
      uVar4 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_00466a71,1);
      return uVar4;
    }
  }
  return 1;
}


// ===== 0073a288  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined1 local_34 [4];
  
  uVar3 = *param_1;
  pcVar4 = *(code **)(param_1[1] + 0x18);
  uVar2 = (*pcVar4)(uVar3);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar2 = (*pcVar4)(uVar3,&DAT_004669e4,2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uStack_78 = param_1[1];
      local_80 = *param_1;
      local_70 = local_34;
      uStack_58 = param_1[2];
      local_34[0] = 1;
      local_60 = &DAT_0097b768;
      local_68 = (undefined1 *)&local_80;
      iVar1 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
    }
    else {
      uVar2 = (*pcVar4)(uVar3,&DAT_004669e3,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_78 = param_1[1];
        local_80 = *param_1;
        local_70 = local_34;
        uStack_58 = param_1[2];
        local_34[0] = 1;
        local_60 = &DAT_0097b768;
        local_68 = (undefined1 *)&local_80;
        iVar1 = (**(code **)(param_7 + 0x18))(param_6,&local_68);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (**(code **)(param_7 + 0x18))(param_6,param_1);
      }
      if ((uVar2 & 1) == 0) {
        uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_00466a71,1);
        return uVar3;
      }
    }
  }
  return 1;
}


// ===== 0073a460  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field3_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field3_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field3_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 local_6c [4];
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar3 = *param_1;
  pcVar4 = *(code **)(param_1[1] + 0x18);
  uVar2 = (*pcVar4)(uVar3);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar2 = (*pcVar4)(uVar3,&DAT_004669e4,2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uStack_88 = param_1[1];
      local_90 = *param_1;
      local_80 = local_6c;
      uStack_58 = param_1[2];
      local_6c[0] = 1;
      local_60 = &DAT_0097b768;
      local_68 = (undefined1 *)&local_90;
      iVar1 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
    }
    else {
      uVar2 = (*pcVar4)(uVar3,&DAT_004669e3,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_88 = param_1[1];
        local_90 = *param_1;
        local_80 = local_6c;
        uStack_58 = param_1[2];
        local_6c[0] = 1;
        local_60 = &DAT_0097b768;
        local_68 = (undefined1 *)&local_90;
        iVar1 = (**(code **)(param_7 + 0x18))(param_6,&local_68);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (**(code **)(param_7 + 0x18))(param_6,param_1);
      }
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x12) < '\0') {
          uStack_88 = param_1[1];
          local_90 = *param_1;
          local_80 = local_6c;
          uStack_58 = param_1[2];
          local_6c[0] = 1;
          local_60 = &DAT_0097b768;
          local_68 = (undefined1 *)&local_90;
          iVar1 = (**(code **)(param_9 + 0x18))(param_8,&local_68);
          if (iVar1 != 0) {
            return 1;
          }
          uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
        }
        else {
          uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          uVar2 = (**(code **)(param_9 + 0x18))(param_8,param_1);
        }
        if ((uVar2 & 1) == 0) {
          uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_00466a71,1);
          return uVar3;
        }
      }
    }
  }
  return 1;
}


// ===== 0073a6dc  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field4_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field4_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field4_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10,
          long param_11)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 local_6c [4];
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar3 = *param_1;
  pcVar4 = *(code **)(param_1[1] + 0x18);
  uVar2 = (*pcVar4)(uVar3);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar2 = (*pcVar4)(uVar3,&DAT_004669e4,2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uStack_88 = param_1[1];
      local_90 = *param_1;
      local_80 = local_6c;
      uStack_58 = param_1[2];
      local_6c[0] = 1;
      local_60 = &DAT_0097b768;
      local_68 = (undefined1 *)&local_90;
      iVar1 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
    }
    else {
      uVar2 = (*pcVar4)(uVar3,&DAT_004669e3,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_88 = param_1[1];
        local_90 = *param_1;
        local_80 = local_6c;
        uStack_58 = param_1[2];
        local_6c[0] = 1;
        local_60 = &DAT_0097b768;
        local_68 = (undefined1 *)&local_90;
        iVar1 = (**(code **)(param_7 + 0x18))(param_6,&local_68);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (**(code **)(param_7 + 0x18))(param_6,param_1);
      }
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x12) < '\0') {
          uStack_88 = param_1[1];
          local_90 = *param_1;
          local_80 = local_6c;
          uStack_58 = param_1[2];
          local_6c[0] = 1;
          local_60 = &DAT_0097b768;
          local_68 = (undefined1 *)&local_90;
          iVar1 = (**(code **)(param_9 + 0x18))(param_8,&local_68);
          if (iVar1 != 0) {
            return 1;
          }
          uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
        }
        else {
          uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          uVar2 = (**(code **)(param_9 + 0x18))(param_8,param_1);
        }
        if ((uVar2 & 1) == 0) {
          if (*(char *)((long)param_1 + 0x12) < '\0') {
            uStack_88 = param_1[1];
            local_90 = *param_1;
            local_80 = local_6c;
            uStack_58 = param_1[2];
            local_6c[0] = 1;
            local_60 = &DAT_0097b768;
            local_68 = (undefined1 *)&local_90;
            iVar1 = (**(code **)(param_11 + 0x18))(param_10,&local_68);
            if (iVar1 != 0) {
              return 1;
            }
            uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
          }
          else {
            uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            uVar2 = (**(code **)(param_11 + 0x18))(param_10,param_1);
          }
          if ((uVar2 & 1) == 0) {
            uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_00466a71,1);
            return uVar3;
          }
        }
      }
    }
  }
  return 1;
}


// ===== 0073a9f8  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field5_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field5_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field5_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10,
          long param_11,undefined8 param_12,long param_13)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 local_6c [4];
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar3 = *param_1;
  pcVar4 = *(code **)(param_1[1] + 0x18);
  uVar2 = (*pcVar4)(uVar3);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar2 = (*pcVar4)(uVar3,&DAT_004669e4,2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uStack_88 = param_1[1];
      local_90 = *param_1;
      local_80 = local_6c;
      uStack_58 = param_1[2];
      local_6c[0] = 1;
      local_60 = &DAT_0097b768;
      local_68 = (undefined1 *)&local_90;
      iVar1 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
    }
    else {
      uVar2 = (*pcVar4)(uVar3,&DAT_004669e3,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_88 = param_1[1];
        local_90 = *param_1;
        local_80 = local_6c;
        uStack_58 = param_1[2];
        local_6c[0] = 1;
        local_60 = &DAT_0097b768;
        local_68 = (undefined1 *)&local_90;
        iVar1 = (**(code **)(param_7 + 0x18))(param_6,&local_68);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (**(code **)(param_7 + 0x18))(param_6,param_1);
      }
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x12) < '\0') {
          uStack_88 = param_1[1];
          local_90 = *param_1;
          local_80 = local_6c;
          uStack_58 = param_1[2];
          local_6c[0] = 1;
          local_60 = &DAT_0097b768;
          local_68 = (undefined1 *)&local_90;
          iVar1 = (**(code **)(param_9 + 0x18))(param_8,&local_68);
          if (iVar1 != 0) {
            return 1;
          }
          uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
        }
        else {
          uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          uVar2 = (**(code **)(param_9 + 0x18))(param_8,param_1);
        }
        if ((uVar2 & 1) == 0) {
          if (*(char *)((long)param_1 + 0x12) < '\0') {
            uStack_88 = param_1[1];
            local_90 = *param_1;
            local_80 = local_6c;
            uStack_58 = param_1[2];
            local_6c[0] = 1;
            local_60 = &DAT_0097b768;
            local_68 = (undefined1 *)&local_90;
            iVar1 = (**(code **)(param_11 + 0x18))(param_10,&local_68);
            if (iVar1 != 0) {
              return 1;
            }
            uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
          }
          else {
            uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            uVar2 = (**(code **)(param_11 + 0x18))(param_10,param_1);
          }
          if ((uVar2 & 1) == 0) {
            if (*(char *)((long)param_1 + 0x12) < '\0') {
              uStack_88 = param_1[1];
              local_90 = *param_1;
              local_80 = local_6c;
              uStack_58 = param_1[2];
              local_6c[0] = 1;
              local_60 = &DAT_0097b768;
              local_68 = (undefined1 *)&local_90;
              iVar1 = (**(code **)(param_13 + 0x18))(param_12,&local_68);
              if (iVar1 != 0) {
                return 1;
              }
              uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_004669e1,2);
            }
            else {
              uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
              if ((uVar2 & 1) != 0) {
                return 1;
              }
              uVar2 = (**(code **)(param_13 + 0x18))(param_12,param_1);
            }
            if ((uVar2 & 1) == 0) {
              uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_00466a71,1);
              return uVar3;
            }
          }
        }
      }
    }
  }
  return 1;
}


// ===== 0073adb4  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_fields_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_fields_finish */

ulong __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_fields_finish
          (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 local_7c [4];
  undefined1 *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar1 = *param_1;
  pcVar5 = *(code **)(param_1[1] + 0x18);
  uVar3 = (*pcVar5)(uVar1);
  if (param_5 == 0) {
    return uVar3;
  }
  if ((uVar3 & 1) == 0) {
    if (-1 < *(char *)((long)param_1 + 0x12)) {
      uVar4 = (*pcVar5)(uVar1,&DAT_004669e3,1);
      uVar3 = 1;
      if ((uVar4 & 1) == 0) {
        uVar3 = (**(code **)(param_4[1] + 0x18))(*param_4,param_1);
      }
      goto LAB_0073aeb8;
    }
    uVar4 = (*pcVar5)(uVar1,&DAT_004669e4,2);
    uVar3 = 1;
    if ((uVar4 & 1) != 0) goto LAB_0073aeb8;
    local_90 = local_7c;
    local_7c[0] = 1;
    uStack_98 = param_1[1];
    local_a0 = *param_1;
    uStack_68 = param_1[2];
    local_70 = &DAT_0097b768;
    local_78 = (undefined1 *)&local_a0;
    uVar3 = (**(code **)(param_4[1] + 0x18))(*param_4,&local_78);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(local_70 + 0x18))(local_78,&DAT_004669e1,2);
      goto LAB_0073aeb8;
    }
  }
  uVar3 = 1;
LAB_0073aeb8:
  if (param_5 != 1) {
    plVar6 = param_4 + 3;
    lVar7 = param_5 * 0x10 + -0x10;
    do {
      while ((uVar3 & 1) != 0) {
LAB_0073aef8:
        uVar3 = 1;
joined_r0x0073af04:
        plVar6 = plVar6 + 2;
        lVar7 = lVar7 + -0x10;
        if (lVar7 == 0) goto LAB_0073aec0;
      }
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_68 = param_1[2];
        uStack_98 = param_1[1];
        local_a0 = *param_1;
        local_7c[0] = 1;
        local_70 = &DAT_0097b768;
        local_90 = local_7c;
        local_78 = (undefined1 *)&local_a0;
        iVar2 = (**(code **)(*plVar6 + 0x18))(plVar6[-1],&local_78);
        if (iVar2 != 0) goto LAB_0073aef8;
        uVar3 = (**(code **)(local_70 + 0x18))(local_78,&DAT_004669e1,2);
        goto joined_r0x0073af04;
      }
      uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_004669da,2);
      if ((uVar3 & 1) != 0) goto LAB_0073aef8;
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6[-1],param_1);
      lVar7 = lVar7 + -0x10;
      plVar6 = plVar6 + 2;
    } while (lVar7 != 0);
  }
LAB_0073aec0:
  if ((uVar3 & 1) == 0) {
    if ((((param_3 == 0) && (param_5 == 1)) && (-1 < *(char *)((long)param_1 + 0x12))) &&
       (iVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_00466a72,1), iVar2 != 0)) {
      return 1;
    }
    uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_00466a71,1);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0073b014  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_50;
  byte local_48;
  byte local_47;
  
  local_48 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_47 = 0;
  local_50 = param_1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_50,param_4,param_5,param_6,param_7);
  bVar1 = local_47 | local_48;
  if ((local_47 == 1) && ((local_48 & 1) == 0)) {
    if (*(char *)((long)local_50 + 0x12) < '\0') {
      uVar2 = *local_50;
      lVar5 = local_50[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_50;
      lVar5 = local_50[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0073b0dc  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_70;
  byte local_68;
  byte local_67;
  
  local_68 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_67 = 0;
  local_70 = param_1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_70,param_4,param_5,param_6,param_7);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_70,param_8,param_9,param_10,param_11);
  bVar1 = local_67 | local_68;
  if ((local_67 == 1) && ((local_68 & 1) == 0)) {
    if (*(char *)((long)local_70 + 0x12) < '\0') {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0073b1d8  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_70;
  byte local_68;
  byte local_67;
  
  local_68 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_67 = 0;
  local_70 = param_1;
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (&local_70,param_4,param_5,param_6,param_7);
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_8,param_9,param_10,param_11);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar2,param_12,param_13,param_14,param_15);
  bVar1 = local_67 | local_68;
  if ((local_67 == 1) && ((local_68 & 1) == 0)) {
    if (*(char *)((long)local_70 + 0x12) < '\0') {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0073b2f8  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
          undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_70;
  byte local_68;
  byte local_67;
  
  local_68 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_67 = 0;
  local_70 = param_1;
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (&local_70,param_4,param_5,param_6,param_7);
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_8,param_9,param_10,param_11);
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_12,param_13,param_14,param_15);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar2,param_16,param_17,param_18,param_19);
  bVar1 = local_67 | local_68;
  if ((local_67 == 1) && ((local_68 & 1) == 0)) {
    if (*(char *)((long)local_70 + 0x12) < '\0') {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0073b438  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
          undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
          undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_78;
  byte local_70;
  byte local_6f;
  
  local_70 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_6f = 0;
  local_78 = param_1;
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (&local_78,param_4,param_5,param_6,param_7);
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_8,param_9,param_10,param_11);
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_12,param_13,param_14,param_15);
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_16,param_17,param_18,param_19);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar2,param_20,param_21,param_22,param_23);
  bVar1 = local_6f | local_70;
  if ((local_6f == 1) && ((local_70 & 1) == 0)) {
    if (*(char *)((long)local_78 + 0x12) < '\0') {
      uVar2 = *local_78;
      lVar5 = local_78[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_78;
      lVar5 = local_78[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0073b59c  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
          undefined8 *param_5,long param_6,undefined8 *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_48;
  undefined8 *local_40;
  byte local_38;
  byte local_37;
  
  local_48 = param_5;
  local_40 = param_7;
  if (param_5 == param_7) {
    local_38 = (**(code **)(param_1[1] + 0x18))(*param_1);
    local_37 = 0;
    bVar1 = local_38;
    if (param_5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)(param_4 + 8);
      local_40 = param_1;
      do {
        <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                  (&local_40,puVar6[-1],*puVar6,param_6,&DAT_0097b810);
        param_5 = (undefined8 *)((long)param_5 + -1);
        puVar6 = puVar6 + 2;
        param_6 = param_6 + 0x10;
      } while (param_5 != (undefined8 *)0x0);
      bVar1 = local_37 | local_38;
      if ((local_37 == 1) && ((local_38 & 1) == 0)) {
        if (*(char *)((long)local_40 + 0x12) < '\0') {
          uVar2 = *local_40;
          lVar5 = local_40[1];
          puVar3 = &DAT_00466a6b;
          uVar4 = 1;
        }
        else {
          uVar2 = *local_40;
          lVar5 = local_40[1];
          puVar3 = &DAT_00466b55;
          uVar4 = 2;
        }
        bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
      }
    }
    return bVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed<usize,usize>
            (0,&local_48,&local_40,0,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b830);
}


// ===== 0073b69c  <core::fmt::[a]::core::fmt::Formatter>::pad =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::pad */

ulong __rustcall
<core::fmt::[a]::core::fmt::Formatter>::pad(undefined8 *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint3 uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 0x18000000) == 0) goto LAB_0073b8e0;
  if ((uVar1 >> 0x1c & 1) == 0) {
    if (param_3 < (byte *)0x20) {
      if (param_3 == (byte *)0x0) {
        uVar7 = 0;
      }
      else {
        if (param_3 < (byte *)0x8) {
          pbVar8 = (byte *)0x0;
          uVar7 = 0;
        }
        else {
          pbVar8 = (byte *)((ulong)param_3 & 0x18);
          uVar15 = NEON_cmgt(*(undefined8 *)param_2,0xbfbfbfbfbfbfbfbf,1);
          uVar4 = CONCAT12((char)((ulong)uVar15 >> 8),(short)uVar15) & 0xff00ff;
          uVar7 = (ulong)((byte)((ulong)uVar15 >> 0x30) & 1);
          uVar6 = (ulong)((byte)((ulong)uVar15 >> 0x38) & 1);
          uVar18 = (ulong)((byte)((ulong)uVar15 >> 0x20) & 1);
          uVar19 = (ulong)((byte)((ulong)uVar15 >> 0x28) & 1);
          uVar16 = (ulong)((byte)((ulong)uVar15 >> 0x10) & 1);
          uVar17 = (ulong)((byte)((ulong)uVar15 >> 0x18) & 1);
          uVar20 = (ulong)((byte)uVar4 & 1);
          uVar21 = (ulong)((byte)(uVar4 >> 0x10) & 1);
          if (pbVar8 != (byte *)0x8) {
            uVar15 = NEON_cmgt(*(undefined8 *)(param_2 + 8),0xbfbfbfbfbfbfbfbf,1);
            uVar4 = CONCAT12((char)((ulong)uVar15 >> 8),(short)uVar15) & 0xff00ff;
            uVar7 = uVar7 + ((byte)((ulong)uVar15 >> 0x30) & 1);
            uVar6 = uVar6 + ((byte)((ulong)uVar15 >> 0x38) & 1);
            uVar16 = uVar16 + ((byte)((ulong)uVar15 >> 0x10) & 1);
            uVar17 = uVar17 + ((byte)((ulong)uVar15 >> 0x18) & 1);
            uVar20 = uVar20 + ((byte)uVar4 & 1);
            uVar21 = uVar21 + ((byte)(uVar4 >> 0x10) & 1);
            uVar18 = uVar18 + ((byte)((ulong)uVar15 >> 0x20) & 1);
            uVar19 = uVar19 + ((byte)((ulong)uVar15 >> 0x28) & 1);
            if (pbVar8 != (byte *)0x10) {
              uVar15 = NEON_cmgt(*(undefined8 *)(param_2 + 0x10),0xbfbfbfbfbfbfbfbf,1);
              uVar4 = CONCAT12((char)((ulong)uVar15 >> 8),(short)uVar15) & 0xff00ff;
              uVar7 = uVar7 + ((byte)((ulong)uVar15 >> 0x30) & 1);
              uVar6 = uVar6 + ((byte)((ulong)uVar15 >> 0x38) & 1);
              uVar16 = uVar16 + ((byte)((ulong)uVar15 >> 0x10) & 1);
              uVar17 = uVar17 + ((byte)((ulong)uVar15 >> 0x18) & 1);
              uVar20 = uVar20 + ((byte)uVar4 & 1);
              uVar21 = uVar21 + ((byte)(uVar4 >> 0x10) & 1);
              uVar18 = uVar18 + ((byte)((ulong)uVar15 >> 0x20) & 1);
              uVar19 = uVar19 + ((byte)((ulong)uVar15 >> 0x28) & 1);
            }
          }
          uVar7 = uVar20 + uVar18 + uVar16 + uVar7 + uVar21 + uVar19 + uVar17 + uVar6;
          if (param_3 == pbVar8) goto LAB_0073b8b4;
        }
        lVar9 = (long)param_3 - (long)pbVar8;
        pbVar8 = param_2 + (long)pbVar8;
        do {
          iVar10 = (int)(char)*pbVar8;
          if (iVar10 != -0x41 && iVar10 + 0x41 < 0 == SCARRY4(iVar10,0x41)) {
            uVar7 = uVar7 + 1;
          }
          lVar9 = lVar9 + -1;
          pbVar8 = pbVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    else {
      uVar7 = core::str::count::do_count_chars(param_2,param_3);
    }
  }
  else {
    uVar7 = (ulong)*(ushort *)((long)param_1 + 0x16);
    if (uVar7 == 0) {
      param_3 = (byte *)0x0;
      uVar7 = 0;
    }
    else {
      pbVar8 = param_2 + (long)param_3;
      param_3 = (byte *)0x0;
      uVar6 = uVar7;
      pbVar11 = param_2;
      do {
        if (pbVar11 == pbVar8) break;
        pbVar12 = pbVar11 + 1;
        bVar2 = *pbVar11;
        if ((char)bVar2 < '\0') {
          if (bVar2 < 0xe0) {
            pbVar12 = pbVar11 + 2;
          }
          else {
            lVar9 = 3;
            if (0xef < bVar2) {
              lVar9 = 4;
            }
            pbVar12 = pbVar11 + lVar9;
          }
        }
        uVar6 = uVar6 - 1;
        param_3 = pbVar12 + ((long)param_3 - (long)pbVar11);
        pbVar11 = pbVar12;
      } while (uVar6 != 0);
      uVar7 = uVar7 - uVar6;
    }
  }
LAB_0073b8b4:
  if (uVar7 < *(ushort *)((long)param_1 + 0x14)) {
    uVar14 = uVar1 >> 0x1d & 3;
    uVar13 = 0;
    uVar3 = (uint)*(ushort *)((long)param_1 + 0x14) - (int)uVar7;
    if (uVar14 < 2) {
      if (uVar14 != 0) {
        uVar13 = uVar3;
      }
    }
    else if (uVar14 == 2) {
      uVar13 = uVar3 >> 1 & 0x7fff;
    }
    uVar15 = *param_1;
    lVar9 = param_1[1];
    uVar14 = 0;
    do {
      if ((uVar13 & 0xffff) <= (uVar14 & 0xffff)) {
        uVar7 = (**(code **)(lVar9 + 0x18))(uVar15,param_2,param_3);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        uVar14 = 0;
        do {
          bVar5 = (uVar3 - uVar13 & 0xffff) <= (uVar14 & 0xffff);
          uVar7 = (ulong)!bVar5;
          if (bVar5) {
            return uVar7;
          }
          uVar14 = uVar14 + 1;
          uVar6 = (**(code **)(lVar9 + 0x20))(uVar15,uVar1 & 0x1fffff);
        } while ((uVar6 & 1) == 0);
        return uVar7;
      }
      uVar14 = uVar14 + 1;
      uVar7 = (**(code **)(lVar9 + 0x20))(uVar15,uVar1 & 0x1fffff);
    } while ((uVar7 & 1) == 0);
    return 1;
  }
LAB_0073b8e0:
                    /* WARNING: Could not recover jumptable at 0x0073b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1[1] + 0x18))(*param_1,param_2,param_3);
  return uVar7;
}


// ===== 0073b9b0  <core::fmt::[a]::core::fmt::Formatter>::fill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::fill */

uint __rustcall <core::fmt::[a]::core::fmt::Formatter>::fill(long param_1)

{
  return *(uint *)(param_1 + 0x10) & 0x1fffff;
}


// ===== 0073b9bc  <core::fmt::[a]::core::fmt::Formatter>::debug_map =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_map */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_map(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046716f,1);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined2 *)((long)param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0xb) = 1;
  return;
}


// ===== 0073ba10  <core::fmt::[a]::core::fmt::Formatter>::debug_set =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_set */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_set(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046716f,1);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


// ===== 0073ba54  <core::fmt::[a]::core::fmt::Formatter>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::write_str */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::write_str(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0073ba5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 0073ba60  <core::fmt::num::imp::[a]::u32>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[a]::u32>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::imp::[a]::u32>::_fmt(uint param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar3 = param_3;
  uVar4 = param_1;
  if (999 < param_1) {
    uVar6 = (ulong)param_1;
    do {
      puVar1 = (undefined2 *)(param_2 + -2 + lVar3);
      uVar7 = (uint)uVar6;
      lVar3 = lVar3 + -4;
      uVar4 = (uint)(uVar6 / 10000);
      uVar2 = uVar7 + (int)(uVar6 / 10000) * -10000;
      uVar5 = (uVar2 >> 2 & 0x3fff) / 0x19;
      puVar1[-1] = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar5 * 2);
      *puVar1 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar2 + uVar5 * -100) & 0xffff) * 2);
      uVar6 = uVar6 / 10000;
    } while (9999999 < uVar7);
  }
  uVar5 = uVar4;
  if (9 < uVar4) {
    lVar3 = lVar3 + -2;
    uVar5 = (uVar4 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_2 + lVar3) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar4 + uVar5 * -100) & 0xffff) * 2);
  }
  if ((param_1 != 0) && (uVar5 == 0)) {
    auVar8._8_8_ = param_3 - lVar3;
    auVar8._0_8_ = param_2 + lVar3;
    return auVar8;
  }
  lVar3 = lVar3 + -1;
  *(undefined *)(param_2 + lVar3) = (&DAT_004670a7)[(uVar5 & 0xf) << 1];
  auVar9._8_8_ = param_3 - lVar3;
  auVar9._0_8_ = param_2 + lVar3;
  return auVar9;
}


// ===== 0073bb54  <core::fmt::num::imp::[b]::i32>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[b]::i32>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[b]::i32>::format_into(uint param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    if (param_1 < 1000) {
      lVar4 = 0xb;
      if (param_1 < 10) goto LAB_0073bd28;
    }
    else {
      uVar5 = (ulong)param_1;
      lVar1 = 0;
      do {
        lVar4 = lVar1;
        uVar3 = uVar5;
        param_1 = (uint)(uVar3 / 10000);
        uVar2 = (uint)(uVar3 / 10000);
        uVar8 = (uint)uVar3 + uVar2 * -10000;
        uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
        *(undefined2 *)(param_2 + lVar4 + 7) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar6 * 2);
        *(undefined2 *)(param_2 + lVar4 + 9) =
             *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
        uVar5 = uVar3 / 10000;
        lVar1 = lVar4 + -4;
      } while (9999999 < (uint)uVar3);
      lVar4 = lVar4 + 7;
      if (uVar2 < 9 || (int)(uVar3 / 10000) == 9) goto LAB_0073bd28;
    }
    lVar4 = lVar4 + -2;
    uVar6 = (param_1 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_2 + lVar4) =
         *(undefined2 *)(&DAT_004670a6 + ((ulong)(param_1 + uVar6 * -100) & 0xffff) * 2);
    param_1 = uVar6;
LAB_0073bd28:
    if (param_1 != 0) {
      lVar4 = lVar4 + -1;
      *(undefined *)(param_2 + lVar4) = (&DAT_004670a7)[(param_1 & 0xf) << 1];
    }
    uVar5 = lVar4 - 1;
    if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar5,0xb,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b720);
    }
    *(undefined1 *)(param_2 + uVar5) = 0x2d;
    auVar11._8_8_ = 0xb - uVar5;
    auVar11._0_8_ = param_2 + uVar5;
    return auVar11;
  }
  if (param_1 < 1000) {
    lVar4 = 0xb;
    uVar8 = param_1;
    uVar6 = param_1;
    if (param_1 < 10) goto LAB_0073bca4;
  }
  else {
    lVar1 = 0;
    uVar5 = (ulong)param_1;
    do {
      uVar3 = uVar5;
      lVar4 = lVar1;
      uVar6 = (uint)(uVar3 / 10000);
      uVar7 = (uint)(uVar3 / 10000);
      uVar2 = (uint)uVar3 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_2 + lVar4 + 7) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar8 * 2);
      *(undefined2 *)(param_2 + lVar4 + 9) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar1 = lVar4 + -4;
      uVar5 = uVar3 / 10000;
    } while (9999999 < (uint)uVar3);
    lVar4 = lVar4 + 7;
    uVar8 = (uint)(uVar3 / 10000);
    if (uVar7 < 9 || (int)(uVar3 / 10000) == 9) goto LAB_0073bca4;
  }
  lVar4 = lVar4 + -2;
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)(param_2 + lVar4) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
LAB_0073bca4:
  if ((param_1 != 0) && (uVar6 == 0)) {
    auVar9._8_8_ = 0xb - lVar4;
    auVar9._0_8_ = param_2 + lVar4;
    return auVar9;
  }
  lVar4 = lVar4 + -1;
  *(undefined *)(param_2 + lVar4) = (&DAT_004670a7)[(uVar6 & 0xf) << 1];
  auVar10._8_8_ = 0xb - lVar4;
  auVar10._0_8_ = param_2 + lVar4;
  return auVar10;
}


// ===== 0073bd8c  <core::fmt::num::imp::[c]::u32>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[c]::u32>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[c]::u32>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 1000) {
    lVar8 = 10;
    uVar6 = param_1;
    uVar4 = param_1;
    if (param_1 < 10) goto LAB_0073be50;
  }
  else {
    uVar2 = (ulong)param_1;
    lVar3 = 0;
    do {
      lVar8 = lVar3;
      uVar7 = uVar2;
      uVar4 = (uint)(uVar7 / 10000);
      uVar5 = (uint)(uVar7 / 10000);
      uVar1 = (uint)uVar7 + uVar5 * -10000;
      uVar6 = (uVar1 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_2 + lVar8 + 6) = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar6 * 2);
      *(undefined2 *)(param_2 + lVar8 + 8) =
           *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar1 + uVar6 * -100) & 0xffff) * 2);
      uVar2 = uVar7 / 10000;
      lVar3 = lVar8 + -4;
    } while (9999999 < (uint)uVar7);
    lVar8 = lVar8 + 6;
    uVar6 = (uint)(uVar7 / 10000);
    if (uVar5 < 9 || (int)(uVar7 / 10000) == 9) goto LAB_0073be50;
  }
  lVar8 = lVar8 + -2;
  uVar4 = (uVar6 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)(param_2 + lVar8) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar6 + uVar4 * -100) & 0xffff) * 2);
LAB_0073be50:
  if ((param_1 != 0) && (uVar4 == 0)) {
    auVar9._8_8_ = 10 - lVar8;
    auVar9._0_8_ = param_2 + lVar8;
    return auVar9;
  }
  lVar8 = lVar8 + -1;
  *(undefined *)(param_2 + lVar8) = (&DAT_004670a7)[(uVar4 & 0xf) << 1];
  auVar10._8_8_ = 10 - lVar8;
  auVar10._0_8_ = param_2 + lVar8;
  return auVar10;
}


// ===== 0073be94  FUN_0073be94 =====

ulong FUN_0073be94(undefined *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 < (undefined *)0x3e8) {
    puVar8 = param_1;
    if (param_1 < (undefined *)0xa) goto LAB_0073bfc0;
  }
  else {
    lVar9 = 0;
    lVar10 = param_2 + -2;
    puVar6 = param_1;
    do {
      uVar7 = (param_3 + lVar9) - 4;
      if (param_3 <= uVar7) {
LAB_0073bffc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar7,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b720);
      }
      puVar8 = (undefined *)((ulong)puVar6 / 10000);
      uVar5 = (int)puVar6 + (int)puVar8 * -10000;
      uVar4 = (uVar5 >> 2 & 0x3fff) / 0x19;
      lVar2 = (ulong)uVar4 * 2;
      *(undefined *)(lVar10 + param_3 + -2) = (&DAT_004670a6)[lVar2];
      if (param_3 <= (param_3 + lVar9) - 3) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (param_3 + lVar9 + -3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b720);
      }
      uVar7 = (param_3 + lVar9) - 2;
      *(undefined *)(lVar10 + param_3 + -1) = (&DAT_004670a7)[lVar2];
      if (param_3 <= uVar7) goto LAB_0073bffc;
      lVar2 = (ulong)(ushort)((short)uVar5 + (short)uVar4 * -100) * 2;
      *(undefined *)(lVar10 + param_3) = (&DAT_004670a6)[lVar2];
      if (param_3 <= (param_3 + lVar9) - 1) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (param_3 + lVar9 + -1,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b720);
      }
      lVar3 = lVar10 + param_3;
      lVar9 = lVar9 + -4;
      lVar10 = lVar10 + -4;
      *(undefined *)(lVar3 + 1) = (&DAT_004670a7)[lVar2];
      bVar1 = &UNK_0098967f < puVar6;
      puVar6 = puVar8;
    } while (bVar1);
    param_3 = param_3 + lVar9;
    if (puVar8 < (undefined *)0xa) goto LAB_0073bfc0;
  }
  param_3 = param_3 - 2;
  uVar4 = ((uint)puVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)(param_2 + param_3) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)((uint)puVar8 + uVar4 * -100) & 0xffff) * 2);
  puVar8 = (undefined *)(ulong)uVar4;
LAB_0073bfc0:
  if ((param_1 != (undefined *)0x0) && (puVar8 == (undefined *)0x0)) {
    return param_3;
  }
  *(undefined *)(param_2 + (param_3 - 1)) = (&DAT_004670a7)[((ulong)puVar8 & 0xf) * 2];
  return param_3 - 1;
}


// ===== 0073c04c  <core::fmt::num::imp::[f]::u64>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[f]::u64>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::imp::[f]::u64>::_fmt(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_0073be94();
  auVar2._8_8_ = param_3 - lVar1;
  auVar2._0_8_ = param_2 + lVar1;
  return auVar2;
}


// ===== 0073c078  <core::fmt::num::imp::[l]::isize>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[l]::isize>::format_into */

undefined1  [16] __rustcall
<core::fmt::num::imp::[l]::isize>::format_into(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (-1 < param_1) {
    lVar1 = FUN_0073be94(param_1,param_2,0x14);
    auVar3._8_8_ = 0x14 - lVar1;
    auVar3._0_8_ = param_2 + lVar1;
    return auVar3;
  }
  lVar1 = FUN_0073be94(-param_1,param_2,0x14);
  uVar2 = lVar1 - 1;
  if (uVar2 < 0x14) {
    *(undefined1 *)(param_2 + uVar2) = 0x2d;
    auVar4._8_8_ = 0x14 - uVar2;
    auVar4._0_8_ = param_2 + uVar2;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(uVar2,0x14,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b720);
}


// ===== 0073c0fc  <core::fmt::num::imp::[m]::usize>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[m]::usize>::format_into */

undefined1  [16] __rustcall
<core::fmt::num::imp::[m]::usize>::format_into(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_0073be94(param_1,param_2,0x14);
  auVar2._8_8_ = 0x14 - lVar1;
  auVar2._0_8_ = param_2 + lVar1;
  return auVar2;
}


// ===== 0073c12c  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new */

void __rustcall
<core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5)

{
  byte *pbVar1;
  long lVar2;
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
  undefined1 auVar38 [13];
  undefined1 auVar39 [13];
  undefined1 auVar40 [13];
  undefined1 auVar41 [13];
  undefined1 auVar42 [13];
  undefined1 auVar43 [13];
  undefined1 auVar44 [13];
  undefined1 auVar45 [13];
  undefined1 auVar46 [13];
  undefined1 auVar47 [13];
  undefined1 auVar48 [13];
  undefined1 auVar49 [13];
  undefined1 auVar50 [13];
  undefined1 auVar51 [13];
  undefined1 auVar52 [13];
  undefined1 auVar53 [13];
  byte *pbVar54;
  byte *pbVar55;
  byte *pbVar56;
  byte *pbVar57;
  byte *pbVar58;
  byte *pbVar59;
  byte *pbVar60;
  byte *pbVar61;
  byte *pbVar62;
  byte *pbVar63;
  byte *pbVar64;
  byte *pbVar65;
  byte *pbVar66;
  byte *pbVar67;
  byte *pbVar68;
  byte *pbVar69;
  byte *pbVar70;
  byte *pbVar71;
  byte *pbVar72;
  byte *pbVar73;
  byte *pbVar74;
  byte *pbVar75;
  byte *pbVar76;
  byte *pbVar77;
  byte *pbVar78;
  byte *pbVar79;
  bool bVar80;
  int iVar81;
  ulong uVar82;
  ulong __n;
  byte *pbVar83;
  ulong uVar84;
  long lVar85;
  undefined8 uVar86;
  ulong uVar87;
  long lVar88;
  long lVar89;
  undefined4 *puVar90;
  ulong uVar91;
  ulong uVar92;
  ulong uVar93;
  ulong uVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  undefined8 uVar136;
  byte bVar143;
  byte bVar144;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  undefined4 uVar145;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  byte bVar164;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  byte bVar183;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  undefined8 uVar184;
  byte bVar191;
  byte bVar192;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  undefined8 uVar193;
  byte bVar200;
  byte bVar201;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  undefined8 uVar202;
  byte bVar209;
  byte bVar210;
  byte bVar212;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  undefined8 uVar211;
  byte bVar218;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  byte bVar229;
  byte bVar231;
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  undefined8 uVar230;
  byte bVar237;
  byte bVar238;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar244;
  byte bVar245;
  undefined8 uVar239;
  byte bVar246;
  byte bVar247;
  byte bVar249;
  byte bVar250;
  byte bVar251;
  byte bVar252;
  byte bVar253;
  byte bVar254;
  undefined8 uVar248;
  byte bVar255;
  byte bVar256;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  byte bVar262;
  byte bVar263;
  undefined8 uVar257;
  byte bVar264;
  byte bVar265;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  byte bVar271;
  byte bVar272;
  undefined8 uVar266;
  byte bVar273;
  byte bVar274;
  byte bVar276;
  byte bVar277;
  byte bVar278;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  undefined8 uVar275;
  byte bVar282;
  byte bVar283;
  byte bVar285;
  byte bVar286;
  byte bVar287;
  byte bVar288;
  byte bVar289;
  byte bVar290;
  undefined8 uVar284;
  byte bVar291;
  byte bVar292;
  byte bVar294;
  byte bVar295;
  byte bVar296;
  byte bVar297;
  byte bVar298;
  byte bVar299;
  undefined8 uVar293;
  byte bVar300;
  byte bVar301;
  byte bVar303;
  byte bVar304;
  byte bVar305;
  byte bVar306;
  byte bVar307;
  byte bVar308;
  undefined8 uVar302;
  byte bVar309;
  byte bVar310;
  byte bVar312;
  byte bVar313;
  byte bVar314;
  byte bVar315;
  byte bVar316;
  byte bVar317;
  undefined8 uVar311;
  byte bVar318;
  byte bVar319;
  byte bVar321;
  byte bVar322;
  byte bVar323;
  byte bVar324;
  byte bVar325;
  byte bVar326;
  undefined8 uVar320;
  byte bVar327;
  byte bVar328;
  byte bVar330;
  byte bVar331;
  byte bVar332;
  byte bVar333;
  byte bVar334;
  byte bVar335;
  undefined8 uVar329;
  byte bVar336;
  byte bVar337;
  byte bVar339;
  byte bVar340;
  byte bVar341;
  byte bVar342;
  byte bVar343;
  byte bVar344;
  undefined8 uVar338;
  byte bVar345;
  byte bVar346;
  byte bVar348;
  byte bVar349;
  byte bVar350;
  byte bVar351;
  byte bVar352;
  byte bVar353;
  undefined8 uVar347;
  byte bVar354;
  byte bVar355;
  byte bVar357;
  byte bVar358;
  byte bVar359;
  byte bVar360;
  byte bVar361;
  byte bVar362;
  undefined8 uVar356;
  byte bVar363;
  byte bVar364;
  byte bVar366;
  byte bVar367;
  byte bVar368;
  byte bVar369;
  byte bVar370;
  byte bVar371;
  undefined8 uVar365;
  byte bVar372;
  byte bVar373;
  byte bVar375;
  byte bVar376;
  byte bVar377;
  byte bVar378;
  byte bVar379;
  byte bVar380;
  undefined8 uVar374;
  byte bVar381;
  byte bVar382;
  byte bVar384;
  byte bVar385;
  byte bVar386;
  byte bVar387;
  byte bVar388;
  byte bVar389;
  undefined8 uVar383;
  byte bVar390;
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  ulong uVar393;
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  ulong uVar409;
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  
  if (param_5 == 0) {
    param_1[9] = param_2;
    param_1[10] = param_3;
    param_1[0xb] = param_4;
    param_1[0xc] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_3;
    *(undefined2 *)(param_1 + 3) = 0x101;
    *(undefined1 *)((long)param_1 + 0x1a) = 0;
    return;
  }
  lVar85 = param_5 - 1;
  if (lVar85 == 0) {
    __n = 0;
    uVar87 = 0;
    uVar84 = 1;
    uVar92 = 1;
  }
  else {
    __n = 0;
    uVar91 = 1;
    uVar84 = 1;
    lVar88 = 0;
    uVar87 = 1;
    do {
      uVar93 = __n + lVar88;
      if (param_5 <= uVar93) goto LAB_0073c9d4;
      if (*(byte *)((long)param_4 + uVar91) < *(byte *)((long)param_4 + uVar93)) {
        lVar89 = 0;
        uVar93 = uVar87 + lVar88 + 1;
        uVar84 = uVar93 - __n;
      }
      else if (*(byte *)((long)param_4 + uVar91) == *(byte *)((long)param_4 + uVar93)) {
        bVar80 = lVar88 + 1U == uVar84;
        lVar2 = 0;
        if (bVar80) {
          lVar2 = lVar88 + 1;
        }
        lVar89 = 0;
        if (!bVar80) {
          lVar89 = lVar88 + 1;
        }
        uVar93 = lVar2 + uVar87;
      }
      else {
        uVar93 = uVar87 + 1;
        lVar89 = 0;
        uVar84 = 1;
        __n = uVar87;
      }
      uVar91 = uVar93 + lVar89;
      lVar88 = lVar89;
      uVar87 = uVar93;
    } while (uVar91 < param_5);
    uVar87 = 0;
    uVar91 = 1;
    uVar92 = 1;
    lVar88 = 0;
    uVar82 = 1;
    do {
      uVar93 = uVar87 + lVar88;
      if (param_5 <= uVar93) {
LAB_0073c9d4:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar93,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b848);
      }
      if (*(byte *)((long)param_4 + uVar93) < *(byte *)((long)param_4 + uVar91)) {
        lVar89 = 0;
        uVar93 = uVar82 + lVar88 + 1;
        uVar92 = uVar93 - uVar87;
      }
      else if (*(byte *)((long)param_4 + uVar91) == *(byte *)((long)param_4 + uVar93)) {
        bVar80 = lVar88 + 1U == uVar92;
        lVar2 = 0;
        if (bVar80) {
          lVar2 = lVar88 + 1;
        }
        lVar89 = 0;
        if (!bVar80) {
          lVar89 = lVar88 + 1;
        }
        uVar93 = lVar2 + uVar82;
      }
      else {
        uVar93 = uVar82 + 1;
        lVar89 = 0;
        uVar92 = 1;
        uVar87 = uVar82;
      }
      uVar91 = uVar93 + lVar89;
      lVar88 = lVar89;
      uVar82 = uVar93;
    } while (uVar91 < param_5);
  }
  if (__n <= uVar87) {
    uVar84 = uVar92;
    __n = uVar87;
  }
  if (param_5 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b8a8);
  }
  if ((CARRY8(uVar84,__n)) || (param_5 < uVar84 + __n)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar84,uVar84 + __n,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b890);
  }
  iVar81 = memcmp(param_4,(void *)((long)param_4 + uVar84),__n);
  if (iVar81 == 0) {
    uVar91 = 0;
    uVar93 = 1;
    lVar88 = 0;
    uVar87 = 1;
    do {
      if (param_5 <= uVar87 + lVar88) break;
      uVar82 = (param_5 - lVar88) + ~uVar87;
      if (param_5 <= uVar82) goto LAB_0073c9e4;
      uVar92 = lVar85 - (lVar88 + uVar91);
      if (param_5 <= uVar92) goto LAB_0073c9f4;
      if (*(byte *)((long)param_4 + uVar82) < *(byte *)((long)param_4 + uVar92)) {
        lVar89 = 0;
        uVar82 = lVar88 + uVar87 + 1;
        uVar93 = uVar82 - uVar91;
      }
      else if (*(byte *)((long)param_4 + uVar82) == *(byte *)((long)param_4 + uVar92)) {
        bVar80 = lVar88 + 1U == uVar93;
        lVar2 = 0;
        if (bVar80) {
          lVar2 = lVar88 + 1;
        }
        lVar89 = 0;
        if (!bVar80) {
          lVar89 = lVar88 + 1;
        }
        uVar82 = lVar2 + uVar87;
      }
      else {
        lVar89 = 0;
        uVar82 = uVar87 + 1;
        uVar93 = 1;
        uVar91 = uVar87;
      }
      lVar88 = lVar89;
      uVar87 = uVar82;
    } while (uVar93 != uVar84);
    uVar87 = 0;
    uVar94 = 1;
    lVar88 = 0;
    uVar93 = 1;
    do {
      if (param_5 <= uVar93 + lVar88) break;
      uVar82 = (param_5 - lVar88) + ~uVar93;
      if (param_5 <= uVar82) {
LAB_0073c9e4:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar82,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b860);
      }
      uVar92 = lVar85 - (lVar88 + uVar87);
      if (param_5 <= uVar92) {
LAB_0073c9f4:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar92,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b878);
      }
      if (*(byte *)((long)param_4 + uVar92) < *(byte *)((long)param_4 + uVar82)) {
        lVar89 = 0;
        uVar82 = lVar88 + uVar93 + 1;
        uVar94 = uVar82 - uVar87;
      }
      else if (*(byte *)((long)param_4 + uVar82) == *(byte *)((long)param_4 + uVar92)) {
        bVar80 = lVar88 + 1U == uVar94;
        lVar2 = 0;
        if (bVar80) {
          lVar2 = lVar88 + 1;
        }
        lVar89 = 0;
        if (!bVar80) {
          lVar89 = lVar88 + 1;
        }
        uVar82 = lVar2 + uVar93;
      }
      else {
        lVar89 = 0;
        uVar82 = uVar93 + 1;
        uVar94 = 1;
        uVar87 = uVar93;
      }
      lVar88 = lVar89;
      uVar93 = uVar82;
    } while (uVar94 != uVar84);
    if (uVar87 <= uVar91) {
      uVar87 = uVar91;
    }
    uVar87 = param_5 - uVar87;
    if (uVar84 == 0) {
      uVar91 = 0;
    }
    else {
      if (uVar84 < 4) {
        uVar93 = 0;
        uVar91 = 0;
      }
      else {
        if (uVar84 < 0x20) {
          uVar91 = 0;
          uVar82 = 0;
        }
        else {
          bVar95 = 0;
          bVar96 = 0;
          bVar97 = 0;
          bVar98 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar102 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar107 = 0;
          bVar108 = 0;
          bVar109 = 0;
          bVar110 = 0;
          uVar86 = 0;
          uVar136 = 0;
          uVar202 = 0;
          uVar211 = 0;
          bVar111 = 0;
          bVar112 = 0;
          bVar113 = 0;
          bVar114 = 0;
          bVar115 = 0;
          bVar116 = 0;
          bVar117 = 0;
          bVar118 = 0;
          bVar119 = 0;
          bVar120 = 0;
          bVar121 = 0;
          bVar122 = 0;
          bVar123 = 0;
          bVar124 = 0;
          bVar125 = 0;
          bVar126 = 0;
          uVar266 = 0;
          uVar275 = 0;
          pbVar83 = (byte *)((long)param_4 + 0x10);
          bVar164 = 0;
          bVar168 = 0;
          bVar169 = 0;
          bVar170 = 0;
          bVar171 = 0;
          bVar172 = 0;
          bVar173 = 0;
          bVar174 = 0;
          bVar175 = 0;
          bVar176 = 0;
          bVar177 = 0;
          bVar178 = 0;
          bVar179 = 0;
          bVar180 = 0;
          bVar181 = 0;
          bVar182 = 0;
          uVar184 = 0;
          uVar193 = 0;
          uVar91 = uVar84 & 0xffffffffffffffe0;
          bVar144 = 0;
          bVar149 = 0;
          bVar150 = 0;
          bVar151 = 0;
          bVar152 = 0;
          bVar153 = 0;
          bVar154 = 0;
          bVar155 = 0;
          bVar156 = 0;
          bVar157 = 0;
          bVar158 = 0;
          bVar159 = 0;
          bVar160 = 0;
          bVar161 = 0;
          bVar162 = 0;
          bVar163 = 0;
          uVar338 = 0;
          uVar347 = 0;
          uVar248 = 0;
          uVar257 = 0;
          uVar230 = 0;
          uVar239 = 0;
          uVar356 = 0;
          uVar365 = 0;
          uVar302 = 0;
          uVar311 = 0;
          uVar320 = 0;
          uVar329 = 0;
          uVar284 = 0;
          uVar293 = 0;
          uVar374 = 0;
          uVar383 = 0;
          uVar93 = uVar84 & 0xffffffffffffffe0;
          do {
            pbVar1 = pbVar83 + -0x10;
            bVar127 = pbVar83[-0xf];
            pbVar54 = pbVar83 + -0xe;
            pbVar55 = pbVar83 + -0xd;
            pbVar56 = pbVar83 + -0xc;
            pbVar57 = pbVar83 + -0xb;
            pbVar58 = pbVar83 + -10;
            pbVar59 = pbVar83 + -9;
            pbVar60 = pbVar83 + -8;
            bVar128 = pbVar83[-7];
            pbVar61 = pbVar83 + -6;
            pbVar62 = pbVar83 + -5;
            pbVar63 = pbVar83 + -4;
            pbVar64 = pbVar83 + -3;
            pbVar65 = pbVar83 + -2;
            pbVar66 = pbVar83 + -1;
            bVar129 = *pbVar83;
            bVar130 = pbVar83[1];
            pbVar67 = pbVar83 + 2;
            pbVar68 = pbVar83 + 3;
            pbVar69 = pbVar83 + 4;
            pbVar70 = pbVar83 + 5;
            pbVar71 = pbVar83 + 6;
            pbVar72 = pbVar83 + 7;
            pbVar73 = pbVar83 + 8;
            bVar131 = pbVar83[9];
            pbVar74 = pbVar83 + 10;
            pbVar75 = pbVar83 + 0xb;
            pbVar76 = pbVar83 + 0xc;
            pbVar77 = pbVar83 + 0xd;
            pbVar78 = pbVar83 + 0xe;
            pbVar79 = pbVar83 + 0xf;
            uVar91 = uVar91 - 0x20;
            pbVar83 = pbVar83 + 0x20;
            uVar92 = CONCAT35(0,CONCAT14(*pbVar64,(uint)(*pbVar63 & 0x3f)) & 0x3fffffffff);
            auVar42[8] = *pbVar65 & 0x3f;
            auVar42._0_8_ = uVar92;
            auVar42._9_3_ = 0;
            auVar42[0xc] = *pbVar66 & 0x3f;
            uVar82 = CONCAT26(0,(uint6)(CONCAT14(bVar128,(uint)(CONCAT12(bVar128,(ushort)(*pbVar60 &
                                                                                         0x3f)) &
                                                               0x3fffff)) & 0x3fffffffff) &
                                0xffff0000ffff);
            auVar50[8] = *pbVar61 & 0x3f;
            auVar50._0_8_ = uVar82;
            auVar50._9_3_ = 0;
            auVar50[0xc] = *pbVar62 & 0x3f;
            uVar393 = CONCAT35(0,CONCAT14(*pbVar57,(uint)(*pbVar56 & 0x3f)) & 0x3fffffffff);
            auVar43[8] = *pbVar58 & 0x3f;
            auVar43._0_8_ = uVar393;
            auVar43._9_3_ = 0;
            auVar43[0xc] = *pbVar59 & 0x3f;
            uVar94 = CONCAT26(0,(uint6)(CONCAT14(bVar127,(uint)(CONCAT12(bVar127,(ushort)(*pbVar1 &
                                                                                         0x3f)) &
                                                               0x3fffff)) & 0x3fffffffff) &
                                0xffff0000ffff);
            auVar51[8] = *pbVar54 & 0x3f;
            auVar51._0_8_ = uVar94;
            auVar51._9_3_ = 0;
            auVar51[0xc] = *pbVar55 & 0x3f;
            auVar414._0_8_ = (ulong)auVar42._8_5_ & 0xffffffff;
            auVar414._8_5_ = auVar42._8_5_ >> 0x20;
            auVar414._13_3_ = 0;
            auVar406._0_8_ = uVar92 & 0xffffffff;
            auVar406[8] = *pbVar64 & 0x3f;
            auVar406._9_7_ = 0;
            auVar221._0_8_ = (ulong)auVar50._8_5_ & 0xffffffff;
            auVar221._8_5_ = auVar50._8_5_ >> 0x20;
            auVar221._13_3_ = 0;
            auVar227._0_8_ = (ulong)auVar43._8_5_ & 0xffffffff;
            auVar227._8_5_ = auVar43._8_5_ >> 0x20;
            auVar227._13_3_ = 0;
            auVar399._0_8_ = uVar82 & 0xffffffff;
            auVar399[8] = bVar128 & 0x3f;
            auVar399._9_7_ = 0;
            auVar420._0_8_ = uVar393 & 0xffffffff;
            auVar420[8] = *pbVar57 & 0x3f;
            auVar420._9_7_ = 0;
            auVar147._8_8_ = 1;
            auVar147._0_8_ = 1;
            auVar405 = NEON_ushl(auVar147,auVar406,8);
            auVar166._8_8_ = 1;
            auVar166._0_8_ = 1;
            auVar413 = NEON_ushl(auVar166,auVar414,8);
            auVar397._8_8_ = 1;
            auVar397._0_8_ = 1;
            auVar147 = NEON_ushl(auVar397,auVar221,8);
            auVar402._8_8_ = 1;
            auVar402._0_8_ = 1;
            auVar166 = NEON_ushl(auVar402,auVar227,8);
            auVar411._8_8_ = 1;
            auVar411._0_8_ = 1;
            auVar402 = NEON_ushl(auVar411,auVar420,8);
            auVar417._8_8_ = 1;
            auVar417._0_8_ = 1;
            auVar397 = NEON_ushl(auVar417,auVar399,8);
            bVar144 = auVar405[0] | bVar144;
            bVar149 = auVar405[1] | bVar149;
            bVar150 = auVar405[2] | bVar150;
            bVar151 = auVar405[3] | bVar151;
            bVar152 = auVar405[4] | bVar152;
            bVar153 = auVar405[5] | bVar153;
            bVar154 = auVar405[6] | bVar154;
            bVar155 = auVar405[7] | bVar155;
            bVar156 = auVar405[8] | bVar156;
            bVar157 = auVar405[9] | bVar157;
            bVar158 = auVar405[10] | bVar158;
            bVar159 = auVar405[0xb] | bVar159;
            bVar160 = auVar405[0xc] | bVar160;
            bVar161 = auVar405[0xd] | bVar161;
            bVar162 = auVar405[0xe] | bVar162;
            bVar163 = auVar405[0xf] | bVar163;
            auVar407._0_8_ = (ulong)auVar51._8_5_ & 0xffffffff;
            auVar407._8_5_ = auVar51._8_5_ >> 0x20;
            auVar407._13_3_ = 0;
            bVar337 = auVar413[0] | (byte)uVar338;
            bVar339 = auVar413[1] | (byte)((ulong)uVar338 >> 8);
            bVar340 = auVar413[2] | (byte)((ulong)uVar338 >> 0x10);
            bVar341 = auVar413[3] | (byte)((ulong)uVar338 >> 0x18);
            bVar342 = auVar413[4] | (byte)((ulong)uVar338 >> 0x20);
            bVar343 = auVar413[5] | (byte)((ulong)uVar338 >> 0x28);
            bVar344 = auVar413[6] | (byte)((ulong)uVar338 >> 0x30);
            bVar345 = auVar413[7] | (byte)((ulong)uVar338 >> 0x38);
            uVar338 = CONCAT17(bVar345,CONCAT16(bVar344,CONCAT15(bVar343,CONCAT14(bVar342,CONCAT13(
                                                  bVar341,CONCAT12(bVar340,CONCAT11(bVar339,bVar337)
                                                                  ))))));
            bVar346 = auVar413[8] | (byte)uVar347;
            bVar348 = auVar413[9] | (byte)((ulong)uVar347 >> 8);
            bVar349 = auVar413[10] | (byte)((ulong)uVar347 >> 0x10);
            bVar350 = auVar413[0xb] | (byte)((ulong)uVar347 >> 0x18);
            bVar351 = auVar413[0xc] | (byte)((ulong)uVar347 >> 0x20);
            bVar352 = auVar413[0xd] | (byte)((ulong)uVar347 >> 0x28);
            bVar353 = auVar413[0xe] | (byte)((ulong)uVar347 >> 0x30);
            bVar354 = auVar413[0xf] | (byte)((ulong)uVar347 >> 0x38);
            uVar347 = CONCAT17(bVar354,CONCAT16(bVar353,CONCAT15(bVar352,CONCAT14(bVar351,CONCAT13(
                                                  bVar350,CONCAT12(bVar349,CONCAT11(bVar348,bVar346)
                                                                  ))))));
            uVar409 = CONCAT35(0,CONCAT14(*pbVar77,(uint)(*pbVar76 & 0x3f)) & 0x3fffffffff);
            auVar44[8] = *pbVar78 & 0x3f;
            auVar44._0_8_ = uVar409;
            auVar44._9_3_ = 0;
            auVar44[0xc] = *pbVar79 & 0x3f;
            uVar92 = CONCAT26(0,(uint6)(CONCAT14(bVar131,(uint)(CONCAT12(bVar131,(ushort)(*pbVar73 &
                                                                                         0x3f)) &
                                                               0x3fffff)) & 0x3fffffffff) &
                                0xffff0000ffff);
            auVar52[8] = *pbVar74 & 0x3f;
            auVar52._0_8_ = uVar92;
            auVar52._9_3_ = 0;
            auVar52[0xc] = *pbVar75 & 0x3f;
            bVar183 = auVar147[0] | (byte)uVar184;
            bVar185 = auVar147[1] | (byte)((ulong)uVar184 >> 8);
            bVar186 = auVar147[2] | (byte)((ulong)uVar184 >> 0x10);
            bVar187 = auVar147[3] | (byte)((ulong)uVar184 >> 0x18);
            bVar188 = auVar147[4] | (byte)((ulong)uVar184 >> 0x20);
            bVar189 = auVar147[5] | (byte)((ulong)uVar184 >> 0x28);
            bVar190 = auVar147[6] | (byte)((ulong)uVar184 >> 0x30);
            bVar191 = auVar147[7] | (byte)((ulong)uVar184 >> 0x38);
            uVar184 = CONCAT17(bVar191,CONCAT16(bVar190,CONCAT15(bVar189,CONCAT14(bVar188,CONCAT13(
                                                  bVar187,CONCAT12(bVar186,CONCAT11(bVar185,bVar183)
                                                                  ))))));
            bVar192 = auVar147[8] | (byte)uVar193;
            bVar194 = auVar147[9] | (byte)((ulong)uVar193 >> 8);
            bVar195 = auVar147[10] | (byte)((ulong)uVar193 >> 0x10);
            bVar196 = auVar147[0xb] | (byte)((ulong)uVar193 >> 0x18);
            bVar197 = auVar147[0xc] | (byte)((ulong)uVar193 >> 0x20);
            bVar198 = auVar147[0xd] | (byte)((ulong)uVar193 >> 0x28);
            bVar199 = auVar147[0xe] | (byte)((ulong)uVar193 >> 0x30);
            bVar200 = auVar147[0xf] | (byte)((ulong)uVar193 >> 0x38);
            uVar193 = CONCAT17(bVar200,CONCAT16(bVar199,CONCAT15(bVar198,CONCAT14(bVar197,CONCAT13(
                                                  bVar196,CONCAT12(bVar195,CONCAT11(bVar194,bVar192)
                                                                  ))))));
            uVar82 = CONCAT35(0,CONCAT14(*pbVar70,(uint)(*pbVar69 & 0x3f)) & 0x3fffffffff);
            auVar45[8] = *pbVar71 & 0x3f;
            auVar45._0_8_ = uVar82;
            auVar45._9_3_ = 0;
            auVar45[0xc] = *pbVar72 & 0x3f;
            uVar393 = CONCAT26(0,(uint6)(CONCAT14(bVar130,(uint)(CONCAT12(bVar130,(ushort)(bVar129 &
                                                                                          0x3f)) &
                                                                0x3fffff)) & 0x3fffffffff) &
                                 0xffff0000ffff);
            auVar53[8] = *pbVar67 & 0x3f;
            auVar53._0_8_ = uVar393;
            auVar53._9_3_ = 0;
            auVar53[0xc] = *pbVar68 & 0x3f;
            auVar392._0_8_ = uVar94 & 0xffffffff;
            auVar392[8] = bVar127 & 0x3f;
            auVar392._9_7_ = 0;
            auVar405._8_8_ = 1;
            auVar405._0_8_ = 1;
            auVar147 = NEON_ushl(auVar405,auVar407,8);
            bVar265 = auVar166[0] | (byte)uVar266;
            bVar267 = auVar166[1] | (byte)((ulong)uVar266 >> 8);
            bVar268 = auVar166[2] | (byte)((ulong)uVar266 >> 0x10);
            bVar269 = auVar166[3] | (byte)((ulong)uVar266 >> 0x18);
            bVar270 = auVar166[4] | (byte)((ulong)uVar266 >> 0x20);
            bVar271 = auVar166[5] | (byte)((ulong)uVar266 >> 0x28);
            bVar272 = auVar166[6] | (byte)((ulong)uVar266 >> 0x30);
            bVar273 = auVar166[7] | (byte)((ulong)uVar266 >> 0x38);
            uVar266 = CONCAT17(bVar273,CONCAT16(bVar272,CONCAT15(bVar271,CONCAT14(bVar270,CONCAT13(
                                                  bVar269,CONCAT12(bVar268,CONCAT11(bVar267,bVar265)
                                                                  ))))));
            bVar274 = auVar166[8] | (byte)uVar275;
            bVar276 = auVar166[9] | (byte)((ulong)uVar275 >> 8);
            bVar277 = auVar166[10] | (byte)((ulong)uVar275 >> 0x10);
            bVar278 = auVar166[0xb] | (byte)((ulong)uVar275 >> 0x18);
            bVar279 = auVar166[0xc] | (byte)((ulong)uVar275 >> 0x20);
            bVar280 = auVar166[0xd] | (byte)((ulong)uVar275 >> 0x28);
            bVar281 = auVar166[0xe] | (byte)((ulong)uVar275 >> 0x30);
            bVar282 = auVar166[0xf] | (byte)((ulong)uVar275 >> 0x38);
            uVar275 = CONCAT17(bVar282,CONCAT16(bVar281,CONCAT15(bVar280,CONCAT14(bVar279,CONCAT13(
                                                  bVar278,CONCAT12(bVar277,CONCAT11(bVar276,bVar274)
                                                                  ))))));
            bVar164 = auVar397[0] | bVar164;
            bVar168 = auVar397[1] | bVar168;
            bVar169 = auVar397[2] | bVar169;
            bVar170 = auVar397[3] | bVar170;
            bVar171 = auVar397[4] | bVar171;
            bVar172 = auVar397[5] | bVar172;
            bVar173 = auVar397[6] | bVar173;
            bVar174 = auVar397[7] | bVar174;
            bVar175 = auVar397[8] | bVar175;
            bVar176 = auVar397[9] | bVar176;
            bVar177 = auVar397[10] | bVar177;
            bVar178 = auVar397[0xb] | bVar178;
            bVar179 = auVar397[0xc] | bVar179;
            bVar180 = auVar397[0xd] | bVar180;
            bVar181 = auVar397[0xe] | bVar181;
            bVar182 = auVar397[0xf] | bVar182;
            auVar228._0_8_ = (ulong)auVar44._8_5_ & 0xffffffff;
            auVar228._8_5_ = auVar44._8_5_ >> 0x20;
            auVar228._13_3_ = 0;
            auVar415._0_8_ = uVar409 & 0xffffffff;
            auVar415[8] = *pbVar77 & 0x3f;
            auVar415._9_7_ = 0;
            auVar400._0_8_ = (ulong)auVar52._8_5_ & 0xffffffff;
            auVar400._8_5_ = auVar52._8_5_ >> 0x20;
            auVar400._13_3_ = 0;
            bVar111 = auVar402[0] | bVar111;
            bVar112 = auVar402[1] | bVar112;
            bVar113 = auVar402[2] | bVar113;
            bVar114 = auVar402[3] | bVar114;
            bVar115 = auVar402[4] | bVar115;
            bVar116 = auVar402[5] | bVar116;
            bVar117 = auVar402[6] | bVar117;
            bVar118 = auVar402[7] | bVar118;
            bVar119 = auVar402[8] | bVar119;
            bVar120 = auVar402[9] | bVar120;
            bVar121 = auVar402[10] | bVar121;
            bVar122 = auVar402[0xb] | bVar122;
            bVar123 = auVar402[0xc] | bVar123;
            bVar124 = auVar402[0xd] | bVar124;
            bVar125 = auVar402[0xe] | bVar125;
            bVar126 = auVar402[0xf] | bVar126;
            auVar421._0_8_ = (ulong)auVar45._8_5_ & 0xffffffff;
            auVar421._8_5_ = auVar45._8_5_ >> 0x20;
            auVar421._13_3_ = 0;
            auVar224._0_8_ = uVar92 & 0xffffffff;
            auVar224[8] = bVar131 & 0x3f;
            auVar224._9_7_ = 0;
            auVar222._0_8_ = uVar82 & 0xffffffff;
            auVar222[8] = *pbVar70 & 0x3f;
            auVar222._9_7_ = 0;
            bVar201 = auVar147[0] | (byte)uVar202;
            bVar203 = auVar147[1] | (byte)((ulong)uVar202 >> 8);
            bVar204 = auVar147[2] | (byte)((ulong)uVar202 >> 0x10);
            bVar205 = auVar147[3] | (byte)((ulong)uVar202 >> 0x18);
            bVar206 = auVar147[4] | (byte)((ulong)uVar202 >> 0x20);
            bVar207 = auVar147[5] | (byte)((ulong)uVar202 >> 0x28);
            bVar208 = auVar147[6] | (byte)((ulong)uVar202 >> 0x30);
            bVar209 = auVar147[7] | (byte)((ulong)uVar202 >> 0x38);
            uVar202 = CONCAT17(bVar209,CONCAT16(bVar208,CONCAT15(bVar207,CONCAT14(bVar206,CONCAT13(
                                                  bVar205,CONCAT12(bVar204,CONCAT11(bVar203,bVar201)
                                                                  ))))));
            bVar210 = auVar147[8] | (byte)uVar211;
            bVar212 = auVar147[9] | (byte)((ulong)uVar211 >> 8);
            bVar213 = auVar147[10] | (byte)((ulong)uVar211 >> 0x10);
            bVar214 = auVar147[0xb] | (byte)((ulong)uVar211 >> 0x18);
            bVar215 = auVar147[0xc] | (byte)((ulong)uVar211 >> 0x20);
            bVar216 = auVar147[0xd] | (byte)((ulong)uVar211 >> 0x28);
            bVar217 = auVar147[0xe] | (byte)((ulong)uVar211 >> 0x30);
            bVar218 = auVar147[0xf] | (byte)((ulong)uVar211 >> 0x38);
            uVar211 = CONCAT17(bVar218,CONCAT16(bVar217,CONCAT15(bVar216,CONCAT14(bVar215,CONCAT13(
                                                  bVar214,CONCAT12(bVar213,CONCAT11(bVar212,bVar210)
                                                                  ))))));
            auVar408._0_8_ = (ulong)auVar53._8_5_ & 0xffffffff;
            auVar408._8_5_ = auVar53._8_5_ >> 0x20;
            auVar408._13_3_ = 0;
            auVar395._0_8_ = uVar393 & 0xffffffff;
            auVar395[8] = bVar130 & 0x3f;
            auVar395._9_7_ = 0;
            auVar413._8_8_ = 1;
            auVar413._0_8_ = 1;
            auVar402 = NEON_ushl(auVar413,auVar392,8);
            auVar419._8_8_ = 1;
            auVar419._0_8_ = 1;
            auVar413 = NEON_ushl(auVar419,auVar415,8);
            auVar31._8_8_ = 1;
            auVar31._0_8_ = 1;
            auVar397 = NEON_ushl(auVar31,auVar228,8);
            auVar32._8_8_ = 1;
            auVar32._0_8_ = 1;
            auVar166 = NEON_ushl(auVar32,auVar224,8);
            auVar33._8_8_ = 1;
            auVar33._0_8_ = 1;
            auVar419 = NEON_ushl(auVar33,auVar421,8);
            auVar34._8_8_ = 1;
            auVar34._0_8_ = 1;
            auVar417 = NEON_ushl(auVar34,auVar400,8);
            auVar35._8_8_ = 1;
            auVar35._0_8_ = 1;
            auVar405 = NEON_ushl(auVar35,auVar408,8);
            auVar36._8_8_ = 1;
            auVar36._0_8_ = 1;
            auVar147 = NEON_ushl(auVar36,auVar222,8);
            auVar37._8_8_ = 1;
            auVar37._0_8_ = 1;
            auVar411 = NEON_ushl(auVar37,auVar395,8);
            bVar127 = auVar402[0] | (byte)uVar86;
            bVar128 = auVar402[1] | (byte)((ulong)uVar86 >> 8);
            bVar129 = auVar402[2] | (byte)((ulong)uVar86 >> 0x10);
            bVar130 = auVar402[3] | (byte)((ulong)uVar86 >> 0x18);
            bVar131 = auVar402[4] | (byte)((ulong)uVar86 >> 0x20);
            bVar132 = auVar402[5] | (byte)((ulong)uVar86 >> 0x28);
            bVar133 = auVar402[6] | (byte)((ulong)uVar86 >> 0x30);
            bVar134 = auVar402[7] | (byte)((ulong)uVar86 >> 0x38);
            uVar86 = CONCAT17(bVar134,CONCAT16(bVar133,CONCAT15(bVar132,CONCAT14(bVar131,CONCAT13(
                                                  bVar130,CONCAT12(bVar129,CONCAT11(bVar128,bVar127)
                                                                  ))))));
            bVar135 = auVar402[8] | (byte)uVar136;
            bVar137 = auVar402[9] | (byte)((ulong)uVar136 >> 8);
            bVar138 = auVar402[10] | (byte)((ulong)uVar136 >> 0x10);
            bVar139 = auVar402[0xb] | (byte)((ulong)uVar136 >> 0x18);
            bVar140 = auVar402[0xc] | (byte)((ulong)uVar136 >> 0x20);
            bVar141 = auVar402[0xd] | (byte)((ulong)uVar136 >> 0x28);
            bVar142 = auVar402[0xe] | (byte)((ulong)uVar136 >> 0x30);
            bVar143 = auVar402[0xf] | (byte)((ulong)uVar136 >> 0x38);
            uVar136 = CONCAT17(bVar143,CONCAT16(bVar142,CONCAT15(bVar141,CONCAT14(bVar140,CONCAT13(
                                                  bVar139,CONCAT12(bVar138,CONCAT11(bVar137,bVar135)
                                                                  ))))));
            bVar283 = auVar413[0] | (byte)uVar284;
            bVar285 = auVar413[1] | (byte)((ulong)uVar284 >> 8);
            bVar286 = auVar413[2] | (byte)((ulong)uVar284 >> 0x10);
            bVar287 = auVar413[3] | (byte)((ulong)uVar284 >> 0x18);
            bVar288 = auVar413[4] | (byte)((ulong)uVar284 >> 0x20);
            bVar289 = auVar413[5] | (byte)((ulong)uVar284 >> 0x28);
            bVar290 = auVar413[6] | (byte)((ulong)uVar284 >> 0x30);
            bVar291 = auVar413[7] | (byte)((ulong)uVar284 >> 0x38);
            uVar284 = CONCAT17(bVar291,CONCAT16(bVar290,CONCAT15(bVar289,CONCAT14(bVar288,CONCAT13(
                                                  bVar287,CONCAT12(bVar286,CONCAT11(bVar285,bVar283)
                                                                  ))))));
            bVar292 = auVar413[8] | (byte)uVar293;
            bVar294 = auVar413[9] | (byte)((ulong)uVar293 >> 8);
            bVar295 = auVar413[10] | (byte)((ulong)uVar293 >> 0x10);
            bVar296 = auVar413[0xb] | (byte)((ulong)uVar293 >> 0x18);
            bVar297 = auVar413[0xc] | (byte)((ulong)uVar293 >> 0x20);
            bVar298 = auVar413[0xd] | (byte)((ulong)uVar293 >> 0x28);
            bVar299 = auVar413[0xe] | (byte)((ulong)uVar293 >> 0x30);
            bVar300 = auVar413[0xf] | (byte)((ulong)uVar293 >> 0x38);
            uVar293 = CONCAT17(bVar300,CONCAT16(bVar299,CONCAT15(bVar298,CONCAT14(bVar297,CONCAT13(
                                                  bVar296,CONCAT12(bVar295,CONCAT11(bVar294,bVar292)
                                                                  ))))));
            bVar373 = auVar397[0] | (byte)uVar374;
            bVar375 = auVar397[1] | (byte)((ulong)uVar374 >> 8);
            bVar376 = auVar397[2] | (byte)((ulong)uVar374 >> 0x10);
            bVar377 = auVar397[3] | (byte)((ulong)uVar374 >> 0x18);
            bVar378 = auVar397[4] | (byte)((ulong)uVar374 >> 0x20);
            bVar379 = auVar397[5] | (byte)((ulong)uVar374 >> 0x28);
            bVar380 = auVar397[6] | (byte)((ulong)uVar374 >> 0x30);
            bVar381 = auVar397[7] | (byte)((ulong)uVar374 >> 0x38);
            uVar374 = CONCAT17(bVar381,CONCAT16(bVar380,CONCAT15(bVar379,CONCAT14(bVar378,CONCAT13(
                                                  bVar377,CONCAT12(bVar376,CONCAT11(bVar375,bVar373)
                                                                  ))))));
            bVar382 = auVar397[8] | (byte)uVar383;
            bVar384 = auVar397[9] | (byte)((ulong)uVar383 >> 8);
            bVar385 = auVar397[10] | (byte)((ulong)uVar383 >> 0x10);
            bVar386 = auVar397[0xb] | (byte)((ulong)uVar383 >> 0x18);
            bVar387 = auVar397[0xc] | (byte)((ulong)uVar383 >> 0x20);
            bVar388 = auVar397[0xd] | (byte)((ulong)uVar383 >> 0x28);
            bVar389 = auVar397[0xe] | (byte)((ulong)uVar383 >> 0x30);
            bVar390 = auVar397[0xf] | (byte)((ulong)uVar383 >> 0x38);
            uVar383 = CONCAT17(bVar390,CONCAT16(bVar389,CONCAT15(bVar388,CONCAT14(bVar387,CONCAT13(
                                                  bVar386,CONCAT12(bVar385,CONCAT11(bVar384,bVar382)
                                                                  ))))));
            bVar355 = auVar419[0] | (byte)uVar356;
            bVar357 = auVar419[1] | (byte)((ulong)uVar356 >> 8);
            bVar358 = auVar419[2] | (byte)((ulong)uVar356 >> 0x10);
            bVar359 = auVar419[3] | (byte)((ulong)uVar356 >> 0x18);
            bVar360 = auVar419[4] | (byte)((ulong)uVar356 >> 0x20);
            bVar361 = auVar419[5] | (byte)((ulong)uVar356 >> 0x28);
            bVar362 = auVar419[6] | (byte)((ulong)uVar356 >> 0x30);
            bVar363 = auVar419[7] | (byte)((ulong)uVar356 >> 0x38);
            uVar356 = CONCAT17(bVar363,CONCAT16(bVar362,CONCAT15(bVar361,CONCAT14(bVar360,CONCAT13(
                                                  bVar359,CONCAT12(bVar358,CONCAT11(bVar357,bVar355)
                                                                  ))))));
            bVar364 = auVar419[8] | (byte)uVar365;
            bVar366 = auVar419[9] | (byte)((ulong)uVar365 >> 8);
            bVar367 = auVar419[10] | (byte)((ulong)uVar365 >> 0x10);
            bVar368 = auVar419[0xb] | (byte)((ulong)uVar365 >> 0x18);
            bVar369 = auVar419[0xc] | (byte)((ulong)uVar365 >> 0x20);
            bVar370 = auVar419[0xd] | (byte)((ulong)uVar365 >> 0x28);
            bVar371 = auVar419[0xe] | (byte)((ulong)uVar365 >> 0x30);
            bVar372 = auVar419[0xf] | (byte)((ulong)uVar365 >> 0x38);
            uVar365 = CONCAT17(bVar372,CONCAT16(bVar371,CONCAT15(bVar370,CONCAT14(bVar369,CONCAT13(
                                                  bVar368,CONCAT12(bVar367,CONCAT11(bVar366,bVar364)
                                                                  ))))));
            bVar301 = auVar166[0] | (byte)uVar302;
            bVar303 = auVar166[1] | (byte)((ulong)uVar302 >> 8);
            bVar304 = auVar166[2] | (byte)((ulong)uVar302 >> 0x10);
            bVar305 = auVar166[3] | (byte)((ulong)uVar302 >> 0x18);
            bVar306 = auVar166[4] | (byte)((ulong)uVar302 >> 0x20);
            bVar307 = auVar166[5] | (byte)((ulong)uVar302 >> 0x28);
            bVar308 = auVar166[6] | (byte)((ulong)uVar302 >> 0x30);
            bVar309 = auVar166[7] | (byte)((ulong)uVar302 >> 0x38);
            uVar302 = CONCAT17(bVar309,CONCAT16(bVar308,CONCAT15(bVar307,CONCAT14(bVar306,CONCAT13(
                                                  bVar305,CONCAT12(bVar304,CONCAT11(bVar303,bVar301)
                                                                  ))))));
            bVar310 = auVar166[8] | (byte)uVar311;
            bVar312 = auVar166[9] | (byte)((ulong)uVar311 >> 8);
            bVar313 = auVar166[10] | (byte)((ulong)uVar311 >> 0x10);
            bVar314 = auVar166[0xb] | (byte)((ulong)uVar311 >> 0x18);
            bVar315 = auVar166[0xc] | (byte)((ulong)uVar311 >> 0x20);
            bVar316 = auVar166[0xd] | (byte)((ulong)uVar311 >> 0x28);
            bVar317 = auVar166[0xe] | (byte)((ulong)uVar311 >> 0x30);
            bVar318 = auVar166[0xf] | (byte)((ulong)uVar311 >> 0x38);
            uVar311 = CONCAT17(bVar318,CONCAT16(bVar317,CONCAT15(bVar316,CONCAT14(bVar315,CONCAT13(
                                                  bVar314,CONCAT12(bVar313,CONCAT11(bVar312,bVar310)
                                                                  ))))));
            bVar319 = auVar417[0] | (byte)uVar320;
            bVar321 = auVar417[1] | (byte)((ulong)uVar320 >> 8);
            bVar322 = auVar417[2] | (byte)((ulong)uVar320 >> 0x10);
            bVar323 = auVar417[3] | (byte)((ulong)uVar320 >> 0x18);
            bVar324 = auVar417[4] | (byte)((ulong)uVar320 >> 0x20);
            bVar325 = auVar417[5] | (byte)((ulong)uVar320 >> 0x28);
            bVar326 = auVar417[6] | (byte)((ulong)uVar320 >> 0x30);
            bVar327 = auVar417[7] | (byte)((ulong)uVar320 >> 0x38);
            uVar320 = CONCAT17(bVar327,CONCAT16(bVar326,CONCAT15(bVar325,CONCAT14(bVar324,CONCAT13(
                                                  bVar323,CONCAT12(bVar322,CONCAT11(bVar321,bVar319)
                                                                  ))))));
            bVar328 = auVar417[8] | (byte)uVar329;
            bVar330 = auVar417[9] | (byte)((ulong)uVar329 >> 8);
            bVar331 = auVar417[10] | (byte)((ulong)uVar329 >> 0x10);
            bVar332 = auVar417[0xb] | (byte)((ulong)uVar329 >> 0x18);
            bVar333 = auVar417[0xc] | (byte)((ulong)uVar329 >> 0x20);
            bVar334 = auVar417[0xd] | (byte)((ulong)uVar329 >> 0x28);
            bVar335 = auVar417[0xe] | (byte)((ulong)uVar329 >> 0x30);
            bVar336 = auVar417[0xf] | (byte)((ulong)uVar329 >> 0x38);
            uVar329 = CONCAT17(bVar336,CONCAT16(bVar335,CONCAT15(bVar334,CONCAT14(bVar333,CONCAT13(
                                                  bVar332,CONCAT12(bVar331,CONCAT11(bVar330,bVar328)
                                                                  ))))));
            bVar229 = auVar147[0] | (byte)uVar230;
            bVar231 = auVar147[1] | (byte)((ulong)uVar230 >> 8);
            bVar232 = auVar147[2] | (byte)((ulong)uVar230 >> 0x10);
            bVar233 = auVar147[3] | (byte)((ulong)uVar230 >> 0x18);
            bVar234 = auVar147[4] | (byte)((ulong)uVar230 >> 0x20);
            bVar235 = auVar147[5] | (byte)((ulong)uVar230 >> 0x28);
            bVar236 = auVar147[6] | (byte)((ulong)uVar230 >> 0x30);
            bVar237 = auVar147[7] | (byte)((ulong)uVar230 >> 0x38);
            uVar230 = CONCAT17(bVar237,CONCAT16(bVar236,CONCAT15(bVar235,CONCAT14(bVar234,CONCAT13(
                                                  bVar233,CONCAT12(bVar232,CONCAT11(bVar231,bVar229)
                                                                  ))))));
            bVar238 = auVar147[8] | (byte)uVar239;
            bVar240 = auVar147[9] | (byte)((ulong)uVar239 >> 8);
            bVar241 = auVar147[10] | (byte)((ulong)uVar239 >> 0x10);
            bVar242 = auVar147[0xb] | (byte)((ulong)uVar239 >> 0x18);
            bVar243 = auVar147[0xc] | (byte)((ulong)uVar239 >> 0x20);
            bVar244 = auVar147[0xd] | (byte)((ulong)uVar239 >> 0x28);
            bVar245 = auVar147[0xe] | (byte)((ulong)uVar239 >> 0x30);
            bVar246 = auVar147[0xf] | (byte)((ulong)uVar239 >> 0x38);
            uVar239 = CONCAT17(bVar246,CONCAT16(bVar245,CONCAT15(bVar244,CONCAT14(bVar243,CONCAT13(
                                                  bVar242,CONCAT12(bVar241,CONCAT11(bVar240,bVar238)
                                                                  ))))));
            bVar95 = auVar405[0] | bVar95;
            bVar96 = auVar405[1] | bVar96;
            bVar97 = auVar405[2] | bVar97;
            bVar98 = auVar405[3] | bVar98;
            bVar99 = auVar405[4] | bVar99;
            bVar100 = auVar405[5] | bVar100;
            bVar101 = auVar405[6] | bVar101;
            bVar102 = auVar405[7] | bVar102;
            bVar103 = auVar405[8] | bVar103;
            bVar104 = auVar405[9] | bVar104;
            bVar105 = auVar405[10] | bVar105;
            bVar106 = auVar405[0xb] | bVar106;
            bVar107 = auVar405[0xc] | bVar107;
            bVar108 = auVar405[0xd] | bVar108;
            bVar109 = auVar405[0xe] | bVar109;
            bVar110 = auVar405[0xf] | bVar110;
            bVar247 = auVar411[0] | (byte)uVar248;
            bVar249 = auVar411[1] | (byte)((ulong)uVar248 >> 8);
            bVar250 = auVar411[2] | (byte)((ulong)uVar248 >> 0x10);
            bVar251 = auVar411[3] | (byte)((ulong)uVar248 >> 0x18);
            bVar252 = auVar411[4] | (byte)((ulong)uVar248 >> 0x20);
            bVar253 = auVar411[5] | (byte)((ulong)uVar248 >> 0x28);
            bVar254 = auVar411[6] | (byte)((ulong)uVar248 >> 0x30);
            bVar255 = auVar411[7] | (byte)((ulong)uVar248 >> 0x38);
            uVar248 = CONCAT17(bVar255,CONCAT16(bVar254,CONCAT15(bVar253,CONCAT14(bVar252,CONCAT13(
                                                  bVar251,CONCAT12(bVar250,CONCAT11(bVar249,bVar247)
                                                                  ))))));
            bVar256 = auVar411[8] | (byte)uVar257;
            bVar258 = auVar411[9] | (byte)((ulong)uVar257 >> 8);
            bVar259 = auVar411[10] | (byte)((ulong)uVar257 >> 0x10);
            bVar260 = auVar411[0xb] | (byte)((ulong)uVar257 >> 0x18);
            bVar261 = auVar411[0xc] | (byte)((ulong)uVar257 >> 0x20);
            bVar262 = auVar411[0xd] | (byte)((ulong)uVar257 >> 0x28);
            bVar263 = auVar411[0xe] | (byte)((ulong)uVar257 >> 0x30);
            bVar264 = auVar411[0xf] | (byte)((ulong)uVar257 >> 0x38);
            uVar257 = CONCAT17(bVar264,CONCAT16(bVar263,CONCAT15(bVar262,CONCAT14(bVar261,CONCAT13(
                                                  bVar260,CONCAT12(bVar259,CONCAT11(bVar258,bVar256)
                                                                  ))))));
          } while (uVar91 != 0);
          bVar95 = bVar247 | bVar127 | bVar301 | bVar164 | bVar229 | bVar111 | bVar283 | bVar144 |
                   bVar95 | bVar201 | bVar319 | bVar183 | bVar355 | bVar265 | bVar373 | bVar337;
          bVar96 = bVar249 | bVar128 | bVar303 | bVar168 | bVar231 | bVar112 | bVar285 | bVar149 |
                   bVar96 | bVar203 | bVar321 | bVar185 | bVar357 | bVar267 | bVar375 | bVar339;
          bVar97 = bVar250 | bVar129 | bVar304 | bVar169 | bVar232 | bVar113 | bVar286 | bVar150 |
                   bVar97 | bVar204 | bVar322 | bVar186 | bVar358 | bVar268 | bVar376 | bVar340;
          bVar98 = bVar251 | bVar130 | bVar305 | bVar170 | bVar233 | bVar114 | bVar287 | bVar151 |
                   bVar98 | bVar205 | bVar323 | bVar187 | bVar359 | bVar269 | bVar377 | bVar341;
          bVar99 = bVar252 | bVar131 | bVar306 | bVar171 | bVar234 | bVar115 | bVar288 | bVar152 |
                   bVar99 | bVar206 | bVar324 | bVar188 | bVar360 | bVar270 | bVar378 | bVar342;
          bVar100 = bVar253 | bVar132 | bVar307 | bVar172 | bVar235 | bVar116 | bVar289 | bVar153 |
                    bVar100 | bVar207 | bVar325 | bVar189 | bVar361 | bVar271 | bVar379 | bVar343;
          bVar101 = bVar254 | bVar133 | bVar308 | bVar173 | bVar236 | bVar117 | bVar290 | bVar154 |
                    bVar101 | bVar208 | bVar326 | bVar190 | bVar362 | bVar272 | bVar380 | bVar344;
          bVar102 = bVar255 | bVar134 | bVar309 | bVar174 | bVar237 | bVar118 | bVar291 | bVar155 |
                    bVar102 | bVar209 | bVar327 | bVar191 | bVar363 | bVar273 | bVar381 | bVar345;
          bVar103 = bVar256 | bVar135 | bVar310 | bVar175 | bVar238 | bVar119 | bVar292 | bVar156 |
                    bVar103 | bVar210 | bVar328 | bVar192 | bVar364 | bVar274 | bVar382 | bVar346;
          bVar104 = bVar258 | bVar137 | bVar312 | bVar176 | bVar240 | bVar120 | bVar294 | bVar157 |
                    bVar104 | bVar212 | bVar330 | bVar194 | bVar366 | bVar276 | bVar384 | bVar348;
          bVar105 = bVar259 | bVar138 | bVar313 | bVar177 | bVar241 | bVar121 | bVar295 | bVar158 |
                    bVar105 | bVar213 | bVar331 | bVar195 | bVar367 | bVar277 | bVar385 | bVar349;
          bVar106 = bVar260 | bVar139 | bVar314 | bVar178 | bVar242 | bVar122 | bVar296 | bVar159 |
                    bVar106 | bVar214 | bVar332 | bVar196 | bVar368 | bVar278 | bVar386 | bVar350;
          bVar107 = bVar261 | bVar140 | bVar315 | bVar179 | bVar243 | bVar123 | bVar297 | bVar160 |
                    bVar107 | bVar215 | bVar333 | bVar197 | bVar369 | bVar279 | bVar387 | bVar351;
          bVar108 = bVar262 | bVar141 | bVar316 | bVar180 | bVar244 | bVar124 | bVar298 | bVar161 |
                    bVar108 | bVar216 | bVar334 | bVar198 | bVar370 | bVar280 | bVar388 | bVar352;
          bVar109 = bVar263 | bVar142 | bVar317 | bVar181 | bVar245 | bVar125 | bVar299 | bVar162 |
                    bVar109 | bVar217 | bVar335 | bVar199 | bVar371 | bVar281 | bVar389 | bVar353;
          bVar110 = bVar264 | bVar143 | bVar318 | bVar182 | bVar246 | bVar126 | bVar300 | bVar163 |
                    bVar110 | bVar218 | bVar336 | bVar200 | bVar372 | bVar282 | bVar390 | bVar354;
          auVar9[1] = bVar96;
          auVar9[0] = bVar95;
          auVar9[2] = bVar97;
          auVar9[3] = bVar98;
          auVar9[4] = bVar99;
          auVar9[5] = bVar100;
          auVar9[6] = bVar101;
          auVar9[7] = bVar102;
          auVar9[8] = bVar103;
          auVar9[9] = bVar104;
          auVar9[10] = bVar105;
          auVar9[0xb] = bVar106;
          auVar9[0xc] = bVar107;
          auVar9[0xd] = bVar108;
          auVar9[0xe] = bVar109;
          auVar9[0xf] = bVar110;
          auVar10[1] = bVar96;
          auVar10[0] = bVar95;
          auVar10[2] = bVar97;
          auVar10[3] = bVar98;
          auVar10[4] = bVar99;
          auVar10[5] = bVar100;
          auVar10[6] = bVar101;
          auVar10[7] = bVar102;
          auVar10[8] = bVar103;
          auVar10[9] = bVar104;
          auVar10[10] = bVar105;
          auVar10[0xb] = bVar106;
          auVar10[0xc] = bVar107;
          auVar10[0xd] = bVar108;
          auVar10[0xe] = bVar109;
          auVar10[0xf] = bVar110;
          auVar147 = NEON_ext(auVar9,auVar10,8,1);
          uVar91 = CONCAT17(bVar102 | auVar147[7],
                            CONCAT16(bVar101 | auVar147[6],
                                     CONCAT15(bVar100 | auVar147[5],
                                              CONCAT14(bVar99 | auVar147[4],
                                                       CONCAT13(bVar98 | auVar147[3],
                                                                CONCAT12(bVar97 | auVar147[2],
                                                                         CONCAT11(bVar96 | auVar147[
                                                  1],bVar95 | auVar147[0])))))));
          if (uVar84 == uVar93) goto LAB_0073c960;
          uVar82 = uVar93;
          if ((uVar84 & 0x1c) == 0) goto LAB_0073c944;
        }
        bVar103 = 0;
        bVar104 = 0;
        bVar105 = 0;
        bVar106 = 0;
        bVar107 = 0;
        bVar108 = 0;
        bVar109 = 0;
        bVar110 = 0;
        bVar111 = 0;
        bVar112 = 0;
        bVar113 = 0;
        bVar114 = 0;
        bVar115 = 0;
        bVar116 = 0;
        bVar117 = 0;
        bVar118 = 0;
        bVar119 = 0;
        bVar120 = 0;
        bVar121 = 0;
        bVar122 = 0;
        bVar123 = 0;
        bVar124 = 0;
        bVar125 = 0;
        bVar126 = 0;
        bVar95 = (byte)uVar91;
        bVar96 = (byte)(uVar91 >> 8);
        bVar97 = (byte)(uVar91 >> 0x10);
        bVar98 = (byte)(uVar91 >> 0x18);
        bVar99 = (byte)(uVar91 >> 0x20);
        bVar100 = (byte)(uVar91 >> 0x28);
        bVar101 = (byte)(uVar91 >> 0x30);
        bVar102 = (byte)(uVar91 >> 0x38);
        uVar93 = uVar84 & 0xfffffffffffffffc;
        lVar85 = uVar82 - uVar93;
        puVar90 = (undefined4 *)((long)param_4 + uVar82);
        do {
          uVar145 = *puVar90;
          lVar85 = lVar85 + 4;
          uVar91 = (ulong)CONCAT16((char)((uint)uVar145 >> 0x18),
                                   (uint6)CONCAT14((char)((uint)uVar145 >> 0x10),
                                                   (uint)CONCAT12((char)((uint)uVar145 >> 8),
                                                                  (ushort)(byte)uVar145)));
          uVar82 = uVar91 & 0xff3fff3fff3fff3f;
          auVar148._0_8_ = uVar91 & 0xff3f;
          auVar167._0_8_ = uVar82 >> 0x20 & 0xff;
          auVar167[8] = (char)(uVar82 >> 0x30);
          auVar167._9_7_ = 0;
          auVar148[8] = (char)(uVar82 >> 0x10);
          auVar148._9_7_ = 0;
          auVar13[8] = 1;
          auVar13._0_8_ = 1;
          auVar13._9_7_ = 0;
          auVar147 = NEON_ushl(auVar13,auVar148,8);
          auVar14[8] = 1;
          auVar14._0_8_ = 1;
          auVar14._9_7_ = 0;
          auVar166 = NEON_ushl(auVar14,auVar167,8);
          bVar111 = auVar166[0] | bVar111;
          bVar112 = auVar166[1] | bVar112;
          bVar113 = auVar166[2] | bVar113;
          bVar114 = auVar166[3] | bVar114;
          bVar115 = auVar166[4] | bVar115;
          bVar116 = auVar166[5] | bVar116;
          bVar117 = auVar166[6] | bVar117;
          bVar118 = auVar166[7] | bVar118;
          bVar119 = auVar166[8] | bVar119;
          bVar120 = auVar166[9] | bVar120;
          bVar121 = auVar166[10] | bVar121;
          bVar122 = auVar166[0xb] | bVar122;
          bVar123 = auVar166[0xc] | bVar123;
          bVar124 = auVar166[0xd] | bVar124;
          bVar125 = auVar166[0xe] | bVar125;
          bVar126 = auVar166[0xf] | bVar126;
          bVar95 = auVar147[0] | bVar95;
          bVar96 = auVar147[1] | bVar96;
          bVar97 = auVar147[2] | bVar97;
          bVar98 = auVar147[3] | bVar98;
          bVar99 = auVar147[4] | bVar99;
          bVar100 = auVar147[5] | bVar100;
          bVar101 = auVar147[6] | bVar101;
          bVar102 = auVar147[7] | bVar102;
          bVar103 = auVar147[8] | bVar103;
          bVar104 = auVar147[9] | bVar104;
          bVar105 = auVar147[10] | bVar105;
          bVar106 = auVar147[0xb] | bVar106;
          bVar107 = auVar147[0xc] | bVar107;
          bVar108 = auVar147[0xd] | bVar108;
          bVar109 = auVar147[0xe] | bVar109;
          bVar110 = auVar147[0xf] | bVar110;
          puVar90 = puVar90 + 1;
        } while (lVar85 != 0);
        bVar95 = bVar95 | bVar111;
        bVar96 = bVar96 | bVar112;
        bVar97 = bVar97 | bVar113;
        bVar98 = bVar98 | bVar114;
        bVar99 = bVar99 | bVar115;
        bVar100 = bVar100 | bVar116;
        bVar101 = bVar101 | bVar117;
        bVar102 = bVar102 | bVar118;
        auVar7[1] = bVar96;
        auVar7[0] = bVar95;
        auVar7[2] = bVar97;
        auVar7[3] = bVar98;
        auVar7[4] = bVar99;
        auVar7[5] = bVar100;
        auVar7[6] = bVar101;
        auVar7[7] = bVar102;
        auVar7[8] = bVar103 | bVar119;
        auVar7[9] = bVar104 | bVar120;
        auVar7[10] = bVar105 | bVar121;
        auVar7[0xb] = bVar106 | bVar122;
        auVar7[0xc] = bVar107 | bVar123;
        auVar7[0xd] = bVar108 | bVar124;
        auVar7[0xe] = bVar109 | bVar125;
        auVar7[0xf] = bVar110 | bVar126;
        auVar8[1] = bVar96;
        auVar8[0] = bVar95;
        auVar8[2] = bVar97;
        auVar8[3] = bVar98;
        auVar8[4] = bVar99;
        auVar8[5] = bVar100;
        auVar8[6] = bVar101;
        auVar8[7] = bVar102;
        auVar8[8] = bVar103 | bVar119;
        auVar8[9] = bVar104 | bVar120;
        auVar8[10] = bVar105 | bVar121;
        auVar8[0xb] = bVar106 | bVar122;
        auVar8[0xc] = bVar107 | bVar123;
        auVar8[0xd] = bVar108 | bVar124;
        auVar8[0xe] = bVar109 | bVar125;
        auVar8[0xf] = bVar110 | bVar126;
        auVar147 = NEON_ext(auVar7,auVar8,8,1);
        uVar91 = CONCAT17(bVar102 | auVar147[7],
                          CONCAT16(bVar101 | auVar147[6],
                                   CONCAT15(bVar100 | auVar147[5],
                                            CONCAT14(bVar99 | auVar147[4],
                                                     CONCAT13(bVar98 | auVar147[3],
                                                              CONCAT12(bVar97 | auVar147[2],
                                                                       CONCAT11(bVar96 | auVar147[1]
                                                                                ,bVar95 | auVar147[0
                                                  ])))))));
        if (uVar84 == uVar93) goto LAB_0073c960;
      }
LAB_0073c944:
      do {
        pbVar83 = (byte *)((long)param_4 + uVar93);
        uVar93 = uVar93 + 1;
        uVar91 = 1L << ((ulong)*pbVar83 & 0x3f) | uVar91;
      } while (uVar84 != uVar93);
    }
LAB_0073c960:
    uVar86 = 0;
    uVar93 = param_5;
    goto LAB_0073c964;
  }
  if (param_5 < 4) {
    uVar87 = 0;
    uVar91 = 0;
LAB_0073c6b4:
    lVar85 = param_5 - uVar87;
    pbVar83 = (byte *)((long)param_4 + uVar87);
    do {
      lVar85 = lVar85 + -1;
      uVar91 = 1L << ((ulong)*pbVar83 & 0x3f) | uVar91;
      pbVar83 = pbVar83 + 1;
    } while (lVar85 != 0);
  }
  else if (param_5 < 0x20) {
    uVar91 = 0;
    uVar84 = 0;
LAB_0073c63c:
    bVar103 = 0;
    bVar104 = 0;
    bVar105 = 0;
    bVar106 = 0;
    bVar107 = 0;
    bVar108 = 0;
    bVar109 = 0;
    bVar110 = 0;
    bVar111 = 0;
    bVar112 = 0;
    bVar113 = 0;
    bVar114 = 0;
    bVar115 = 0;
    bVar116 = 0;
    bVar117 = 0;
    bVar118 = 0;
    bVar119 = 0;
    bVar120 = 0;
    bVar121 = 0;
    bVar122 = 0;
    bVar123 = 0;
    bVar124 = 0;
    bVar125 = 0;
    bVar126 = 0;
    uVar87 = param_5 & 0xfffffffffffffffc;
    lVar85 = uVar84 - uVar87;
    bVar95 = (byte)uVar91;
    bVar96 = (byte)(uVar91 >> 8);
    bVar97 = (byte)(uVar91 >> 0x10);
    bVar98 = (byte)(uVar91 >> 0x18);
    bVar99 = (byte)(uVar91 >> 0x20);
    bVar100 = (byte)(uVar91 >> 0x28);
    bVar101 = (byte)(uVar91 >> 0x30);
    bVar102 = (byte)(uVar91 >> 0x38);
    puVar90 = (undefined4 *)((long)param_4 + uVar84);
    do {
      uVar145 = *puVar90;
      lVar85 = lVar85 + 4;
      uVar84 = (ulong)CONCAT16((char)((uint)uVar145 >> 0x18),
                               (uint6)CONCAT14((char)((uint)uVar145 >> 0x10),
                                               (uint)CONCAT12((char)((uint)uVar145 >> 8),
                                                              (ushort)(byte)uVar145)));
      uVar91 = uVar84 & 0xff3fff3fff3fff3f;
      auVar146._0_8_ = uVar84 & 0xff3f;
      auVar165._0_8_ = uVar91 >> 0x20 & 0xff;
      auVar165[8] = (char)(uVar91 >> 0x30);
      auVar165._9_7_ = 0;
      auVar146[8] = (char)(uVar91 >> 0x10);
      auVar146._9_7_ = 0;
      auVar11[8] = 1;
      auVar11._0_8_ = 1;
      auVar11._9_7_ = 0;
      auVar147 = NEON_ushl(auVar11,auVar146,8);
      auVar12[8] = 1;
      auVar12._0_8_ = 1;
      auVar12._9_7_ = 0;
      auVar166 = NEON_ushl(auVar12,auVar165,8);
      bVar111 = auVar166[0] | bVar111;
      bVar112 = auVar166[1] | bVar112;
      bVar113 = auVar166[2] | bVar113;
      bVar114 = auVar166[3] | bVar114;
      bVar115 = auVar166[4] | bVar115;
      bVar116 = auVar166[5] | bVar116;
      bVar117 = auVar166[6] | bVar117;
      bVar118 = auVar166[7] | bVar118;
      bVar119 = auVar166[8] | bVar119;
      bVar120 = auVar166[9] | bVar120;
      bVar121 = auVar166[10] | bVar121;
      bVar122 = auVar166[0xb] | bVar122;
      bVar123 = auVar166[0xc] | bVar123;
      bVar124 = auVar166[0xd] | bVar124;
      bVar125 = auVar166[0xe] | bVar125;
      bVar126 = auVar166[0xf] | bVar126;
      bVar95 = auVar147[0] | bVar95;
      bVar96 = auVar147[1] | bVar96;
      bVar97 = auVar147[2] | bVar97;
      bVar98 = auVar147[3] | bVar98;
      bVar99 = auVar147[4] | bVar99;
      bVar100 = auVar147[5] | bVar100;
      bVar101 = auVar147[6] | bVar101;
      bVar102 = auVar147[7] | bVar102;
      bVar103 = auVar147[8] | bVar103;
      bVar104 = auVar147[9] | bVar104;
      bVar105 = auVar147[10] | bVar105;
      bVar106 = auVar147[0xb] | bVar106;
      bVar107 = auVar147[0xc] | bVar107;
      bVar108 = auVar147[0xd] | bVar108;
      bVar109 = auVar147[0xe] | bVar109;
      bVar110 = auVar147[0xf] | bVar110;
      puVar90 = puVar90 + 1;
    } while (lVar85 != 0);
    bVar95 = bVar95 | bVar111;
    bVar96 = bVar96 | bVar112;
    bVar97 = bVar97 | bVar113;
    bVar98 = bVar98 | bVar114;
    bVar99 = bVar99 | bVar115;
    bVar100 = bVar100 | bVar116;
    bVar101 = bVar101 | bVar117;
    bVar102 = bVar102 | bVar118;
    auVar3[1] = bVar96;
    auVar3[0] = bVar95;
    auVar3[2] = bVar97;
    auVar3[3] = bVar98;
    auVar3[4] = bVar99;
    auVar3[5] = bVar100;
    auVar3[6] = bVar101;
    auVar3[7] = bVar102;
    auVar3[8] = bVar103 | bVar119;
    auVar3[9] = bVar104 | bVar120;
    auVar3[10] = bVar105 | bVar121;
    auVar3[0xb] = bVar106 | bVar122;
    auVar3[0xc] = bVar107 | bVar123;
    auVar3[0xd] = bVar108 | bVar124;
    auVar3[0xe] = bVar109 | bVar125;
    auVar3[0xf] = bVar110 | bVar126;
    auVar4[1] = bVar96;
    auVar4[0] = bVar95;
    auVar4[2] = bVar97;
    auVar4[3] = bVar98;
    auVar4[4] = bVar99;
    auVar4[5] = bVar100;
    auVar4[6] = bVar101;
    auVar4[7] = bVar102;
    auVar4[8] = bVar103 | bVar119;
    auVar4[9] = bVar104 | bVar120;
    auVar4[10] = bVar105 | bVar121;
    auVar4[0xb] = bVar106 | bVar122;
    auVar4[0xc] = bVar107 | bVar123;
    auVar4[0xd] = bVar108 | bVar124;
    auVar4[0xe] = bVar109 | bVar125;
    auVar4[0xf] = bVar110 | bVar126;
    auVar147 = NEON_ext(auVar3,auVar4,8,1);
    uVar91 = CONCAT17(bVar102 | auVar147[7],
                      CONCAT16(bVar101 | auVar147[6],
                               CONCAT15(bVar100 | auVar147[5],
                                        CONCAT14(bVar99 | auVar147[4],
                                                 CONCAT13(bVar98 | auVar147[3],
                                                          CONCAT12(bVar97 | auVar147[2],
                                                                   CONCAT11(bVar96 | auVar147[1],
                                                                            bVar95 | auVar147[0]))))
                                       )));
    if (param_5 != uVar87) goto LAB_0073c6b4;
  }
  else {
    bVar95 = 0;
    bVar96 = 0;
    bVar97 = 0;
    bVar98 = 0;
    bVar99 = 0;
    bVar100 = 0;
    bVar101 = 0;
    bVar102 = 0;
    bVar103 = 0;
    bVar104 = 0;
    bVar105 = 0;
    bVar106 = 0;
    bVar107 = 0;
    bVar108 = 0;
    bVar109 = 0;
    bVar110 = 0;
    uVar86 = 0;
    uVar136 = 0;
    uVar202 = 0;
    uVar211 = 0;
    bVar111 = 0;
    bVar112 = 0;
    bVar113 = 0;
    bVar114 = 0;
    bVar115 = 0;
    bVar116 = 0;
    bVar117 = 0;
    bVar118 = 0;
    bVar119 = 0;
    bVar120 = 0;
    bVar121 = 0;
    bVar122 = 0;
    bVar123 = 0;
    bVar124 = 0;
    bVar125 = 0;
    bVar126 = 0;
    uVar266 = 0;
    uVar275 = 0;
    pbVar83 = (byte *)((long)param_4 + 0x10);
    bVar164 = 0;
    bVar168 = 0;
    bVar169 = 0;
    bVar170 = 0;
    bVar171 = 0;
    bVar172 = 0;
    bVar173 = 0;
    bVar174 = 0;
    bVar175 = 0;
    bVar176 = 0;
    bVar177 = 0;
    bVar178 = 0;
    bVar179 = 0;
    bVar180 = 0;
    bVar181 = 0;
    bVar182 = 0;
    uVar184 = 0;
    uVar193 = 0;
    uVar84 = param_5 & 0xffffffffffffffe0;
    bVar144 = 0;
    bVar149 = 0;
    bVar150 = 0;
    bVar151 = 0;
    bVar152 = 0;
    bVar153 = 0;
    bVar154 = 0;
    bVar155 = 0;
    bVar156 = 0;
    bVar157 = 0;
    bVar158 = 0;
    bVar159 = 0;
    bVar160 = 0;
    bVar161 = 0;
    bVar162 = 0;
    bVar163 = 0;
    uVar338 = 0;
    uVar347 = 0;
    uVar248 = 0;
    uVar257 = 0;
    uVar230 = 0;
    uVar239 = 0;
    uVar356 = 0;
    uVar365 = 0;
    uVar302 = 0;
    uVar311 = 0;
    uVar320 = 0;
    uVar329 = 0;
    uVar284 = 0;
    uVar293 = 0;
    uVar374 = 0;
    uVar383 = 0;
    uVar87 = param_5 & 0xffffffffffffffe0;
    do {
      pbVar1 = pbVar83 + -0x10;
      bVar127 = pbVar83[-0xf];
      pbVar54 = pbVar83 + -0xe;
      pbVar55 = pbVar83 + -0xd;
      pbVar56 = pbVar83 + -0xc;
      pbVar57 = pbVar83 + -0xb;
      pbVar58 = pbVar83 + -10;
      pbVar59 = pbVar83 + -9;
      pbVar60 = pbVar83 + -8;
      bVar128 = pbVar83[-7];
      pbVar61 = pbVar83 + -6;
      pbVar62 = pbVar83 + -5;
      pbVar63 = pbVar83 + -4;
      pbVar64 = pbVar83 + -3;
      pbVar65 = pbVar83 + -2;
      pbVar66 = pbVar83 + -1;
      bVar129 = *pbVar83;
      bVar130 = pbVar83[1];
      pbVar67 = pbVar83 + 2;
      pbVar68 = pbVar83 + 3;
      pbVar69 = pbVar83 + 4;
      pbVar70 = pbVar83 + 5;
      pbVar71 = pbVar83 + 6;
      pbVar72 = pbVar83 + 7;
      pbVar73 = pbVar83 + 8;
      bVar131 = pbVar83[9];
      pbVar74 = pbVar83 + 10;
      pbVar75 = pbVar83 + 0xb;
      pbVar76 = pbVar83 + 0xc;
      pbVar77 = pbVar83 + 0xd;
      pbVar78 = pbVar83 + 0xe;
      pbVar79 = pbVar83 + 0xf;
      uVar84 = uVar84 - 0x20;
      pbVar83 = pbVar83 + 0x20;
      uVar93 = CONCAT35(0,CONCAT14(*pbVar64,(uint)(*pbVar63 & 0x3f)) & 0x3fffffffff);
      auVar38[8] = *pbVar65 & 0x3f;
      auVar38._0_8_ = uVar93;
      auVar38._9_3_ = 0;
      auVar38[0xc] = *pbVar66 & 0x3f;
      uVar91 = CONCAT26(0,(uint6)(CONCAT14(bVar128,(uint)(CONCAT12(bVar128,(ushort)(*pbVar60 & 0x3f)
                                                                  ) & 0x3fffff)) & 0x3fffffffff) &
                          0xffff0000ffff);
      auVar46[8] = *pbVar61 & 0x3f;
      auVar46._0_8_ = uVar91;
      auVar46._9_3_ = 0;
      auVar46[0xc] = *pbVar62 & 0x3f;
      uVar92 = CONCAT35(0,CONCAT14(*pbVar57,(uint)(*pbVar56 & 0x3f)) & 0x3fffffffff);
      auVar39[8] = *pbVar58 & 0x3f;
      auVar39._0_8_ = uVar92;
      auVar39._9_3_ = 0;
      auVar39[0xc] = *pbVar59 & 0x3f;
      uVar82 = CONCAT26(0,(uint6)(CONCAT14(bVar127,(uint)(CONCAT12(bVar127,(ushort)(*pbVar1 & 0x3f))
                                                         & 0x3fffff)) & 0x3fffffffff) &
                          0xffff0000ffff);
      auVar47[8] = *pbVar54 & 0x3f;
      auVar47._0_8_ = uVar82;
      auVar47._9_3_ = 0;
      auVar47[0xc] = *pbVar55 & 0x3f;
      auVar410._0_8_ = (ulong)auVar38._8_5_ & 0xffffffff;
      auVar410._8_5_ = auVar38._8_5_ >> 0x20;
      auVar410._13_3_ = 0;
      auVar401._0_8_ = uVar93 & 0xffffffff;
      auVar401[8] = *pbVar64 & 0x3f;
      auVar401._9_7_ = 0;
      auVar219._0_8_ = (ulong)auVar46._8_5_ & 0xffffffff;
      auVar219._8_5_ = auVar46._8_5_ >> 0x20;
      auVar219._13_3_ = 0;
      auVar225._0_8_ = (ulong)auVar39._8_5_ & 0xffffffff;
      auVar225._8_5_ = auVar39._8_5_ >> 0x20;
      auVar225._13_3_ = 0;
      auVar396._0_8_ = uVar91 & 0xffffffff;
      auVar396[8] = bVar128 & 0x3f;
      auVar396._9_7_ = 0;
      auVar416._0_8_ = uVar92 & 0xffffffff;
      auVar416[8] = *pbVar57 & 0x3f;
      auVar416._9_7_ = 0;
      auVar15._8_8_ = 1;
      auVar15._0_8_ = 1;
      auVar402 = NEON_ushl(auVar15,auVar401,8);
      auVar16._8_8_ = 1;
      auVar16._0_8_ = 1;
      auVar411 = NEON_ushl(auVar16,auVar410,8);
      auVar17._8_8_ = 1;
      auVar17._0_8_ = 1;
      auVar147 = NEON_ushl(auVar17,auVar219,8);
      auVar18._8_8_ = 1;
      auVar18._0_8_ = 1;
      auVar166 = NEON_ushl(auVar18,auVar225,8);
      auVar19._8_8_ = 1;
      auVar19._0_8_ = 1;
      auVar417 = NEON_ushl(auVar19,auVar416,8);
      auVar20._8_8_ = 1;
      auVar20._0_8_ = 1;
      auVar397 = NEON_ushl(auVar20,auVar396,8);
      bVar144 = auVar402[0] | bVar144;
      bVar149 = auVar402[1] | bVar149;
      bVar150 = auVar402[2] | bVar150;
      bVar151 = auVar402[3] | bVar151;
      bVar152 = auVar402[4] | bVar152;
      bVar153 = auVar402[5] | bVar153;
      bVar154 = auVar402[6] | bVar154;
      bVar155 = auVar402[7] | bVar155;
      bVar156 = auVar402[8] | bVar156;
      bVar157 = auVar402[9] | bVar157;
      bVar158 = auVar402[10] | bVar158;
      bVar159 = auVar402[0xb] | bVar159;
      bVar160 = auVar402[0xc] | bVar160;
      bVar161 = auVar402[0xd] | bVar161;
      bVar162 = auVar402[0xe] | bVar162;
      bVar163 = auVar402[0xf] | bVar163;
      auVar403._0_8_ = (ulong)auVar47._8_5_ & 0xffffffff;
      auVar403._8_5_ = auVar47._8_5_ >> 0x20;
      auVar403._13_3_ = 0;
      bVar337 = auVar411[0] | (byte)uVar338;
      bVar339 = auVar411[1] | (byte)((ulong)uVar338 >> 8);
      bVar340 = auVar411[2] | (byte)((ulong)uVar338 >> 0x10);
      bVar341 = auVar411[3] | (byte)((ulong)uVar338 >> 0x18);
      bVar342 = auVar411[4] | (byte)((ulong)uVar338 >> 0x20);
      bVar343 = auVar411[5] | (byte)((ulong)uVar338 >> 0x28);
      bVar344 = auVar411[6] | (byte)((ulong)uVar338 >> 0x30);
      bVar345 = auVar411[7] | (byte)((ulong)uVar338 >> 0x38);
      uVar338 = CONCAT17(bVar345,CONCAT16(bVar344,CONCAT15(bVar343,CONCAT14(bVar342,CONCAT13(bVar341
                                                  ,CONCAT12(bVar340,CONCAT11(bVar339,bVar337)))))));
      bVar346 = auVar411[8] | (byte)uVar347;
      bVar348 = auVar411[9] | (byte)((ulong)uVar347 >> 8);
      bVar349 = auVar411[10] | (byte)((ulong)uVar347 >> 0x10);
      bVar350 = auVar411[0xb] | (byte)((ulong)uVar347 >> 0x18);
      bVar351 = auVar411[0xc] | (byte)((ulong)uVar347 >> 0x20);
      bVar352 = auVar411[0xd] | (byte)((ulong)uVar347 >> 0x28);
      bVar353 = auVar411[0xe] | (byte)((ulong)uVar347 >> 0x30);
      bVar354 = auVar411[0xf] | (byte)((ulong)uVar347 >> 0x38);
      uVar347 = CONCAT17(bVar354,CONCAT16(bVar353,CONCAT15(bVar352,CONCAT14(bVar351,CONCAT13(bVar350
                                                  ,CONCAT12(bVar349,CONCAT11(bVar348,bVar346)))))));
      uVar94 = CONCAT35(0,CONCAT14(*pbVar77,(uint)(*pbVar76 & 0x3f)) & 0x3fffffffff);
      auVar40[8] = *pbVar78 & 0x3f;
      auVar40._0_8_ = uVar94;
      auVar40._9_3_ = 0;
      auVar40[0xc] = *pbVar79 & 0x3f;
      uVar93 = CONCAT26(0,(uint6)(CONCAT14(bVar131,(uint)(CONCAT12(bVar131,(ushort)(*pbVar73 & 0x3f)
                                                                  ) & 0x3fffff)) & 0x3fffffffff) &
                          0xffff0000ffff);
      auVar48[8] = *pbVar74 & 0x3f;
      auVar48._0_8_ = uVar93;
      auVar48._9_3_ = 0;
      auVar48[0xc] = *pbVar75 & 0x3f;
      bVar183 = auVar147[0] | (byte)uVar184;
      bVar185 = auVar147[1] | (byte)((ulong)uVar184 >> 8);
      bVar186 = auVar147[2] | (byte)((ulong)uVar184 >> 0x10);
      bVar187 = auVar147[3] | (byte)((ulong)uVar184 >> 0x18);
      bVar188 = auVar147[4] | (byte)((ulong)uVar184 >> 0x20);
      bVar189 = auVar147[5] | (byte)((ulong)uVar184 >> 0x28);
      bVar190 = auVar147[6] | (byte)((ulong)uVar184 >> 0x30);
      bVar191 = auVar147[7] | (byte)((ulong)uVar184 >> 0x38);
      uVar184 = CONCAT17(bVar191,CONCAT16(bVar190,CONCAT15(bVar189,CONCAT14(bVar188,CONCAT13(bVar187
                                                  ,CONCAT12(bVar186,CONCAT11(bVar185,bVar183)))))));
      bVar192 = auVar147[8] | (byte)uVar193;
      bVar194 = auVar147[9] | (byte)((ulong)uVar193 >> 8);
      bVar195 = auVar147[10] | (byte)((ulong)uVar193 >> 0x10);
      bVar196 = auVar147[0xb] | (byte)((ulong)uVar193 >> 0x18);
      bVar197 = auVar147[0xc] | (byte)((ulong)uVar193 >> 0x20);
      bVar198 = auVar147[0xd] | (byte)((ulong)uVar193 >> 0x28);
      bVar199 = auVar147[0xe] | (byte)((ulong)uVar193 >> 0x30);
      bVar200 = auVar147[0xf] | (byte)((ulong)uVar193 >> 0x38);
      uVar193 = CONCAT17(bVar200,CONCAT16(bVar199,CONCAT15(bVar198,CONCAT14(bVar197,CONCAT13(bVar196
                                                  ,CONCAT12(bVar195,CONCAT11(bVar194,bVar192)))))));
      uVar91 = CONCAT35(0,CONCAT14(*pbVar70,(uint)(*pbVar69 & 0x3f)) & 0x3fffffffff);
      auVar41[8] = *pbVar71 & 0x3f;
      auVar41._0_8_ = uVar91;
      auVar41._9_3_ = 0;
      auVar41[0xc] = *pbVar72 & 0x3f;
      uVar92 = CONCAT26(0,(uint6)(CONCAT14(bVar130,(uint)(CONCAT12(bVar130,(ushort)(bVar129 & 0x3f))
                                                         & 0x3fffff)) & 0x3fffffffff) &
                          0xffff0000ffff);
      auVar49[8] = *pbVar67 & 0x3f;
      auVar49._0_8_ = uVar92;
      auVar49._9_3_ = 0;
      auVar49[0xc] = *pbVar68 & 0x3f;
      auVar391._0_8_ = uVar82 & 0xffffffff;
      auVar391[8] = bVar127 & 0x3f;
      auVar391._9_7_ = 0;
      auVar21._8_8_ = 1;
      auVar21._0_8_ = 1;
      auVar147 = NEON_ushl(auVar21,auVar403,8);
      bVar265 = auVar166[0] | (byte)uVar266;
      bVar267 = auVar166[1] | (byte)((ulong)uVar266 >> 8);
      bVar268 = auVar166[2] | (byte)((ulong)uVar266 >> 0x10);
      bVar269 = auVar166[3] | (byte)((ulong)uVar266 >> 0x18);
      bVar270 = auVar166[4] | (byte)((ulong)uVar266 >> 0x20);
      bVar271 = auVar166[5] | (byte)((ulong)uVar266 >> 0x28);
      bVar272 = auVar166[6] | (byte)((ulong)uVar266 >> 0x30);
      bVar273 = auVar166[7] | (byte)((ulong)uVar266 >> 0x38);
      uVar266 = CONCAT17(bVar273,CONCAT16(bVar272,CONCAT15(bVar271,CONCAT14(bVar270,CONCAT13(bVar269
                                                  ,CONCAT12(bVar268,CONCAT11(bVar267,bVar265)))))));
      bVar274 = auVar166[8] | (byte)uVar275;
      bVar276 = auVar166[9] | (byte)((ulong)uVar275 >> 8);
      bVar277 = auVar166[10] | (byte)((ulong)uVar275 >> 0x10);
      bVar278 = auVar166[0xb] | (byte)((ulong)uVar275 >> 0x18);
      bVar279 = auVar166[0xc] | (byte)((ulong)uVar275 >> 0x20);
      bVar280 = auVar166[0xd] | (byte)((ulong)uVar275 >> 0x28);
      bVar281 = auVar166[0xe] | (byte)((ulong)uVar275 >> 0x30);
      bVar282 = auVar166[0xf] | (byte)((ulong)uVar275 >> 0x38);
      uVar275 = CONCAT17(bVar282,CONCAT16(bVar281,CONCAT15(bVar280,CONCAT14(bVar279,CONCAT13(bVar278
                                                  ,CONCAT12(bVar277,CONCAT11(bVar276,bVar274)))))));
      bVar164 = auVar397[0] | bVar164;
      bVar168 = auVar397[1] | bVar168;
      bVar169 = auVar397[2] | bVar169;
      bVar170 = auVar397[3] | bVar170;
      bVar171 = auVar397[4] | bVar171;
      bVar172 = auVar397[5] | bVar172;
      bVar173 = auVar397[6] | bVar173;
      bVar174 = auVar397[7] | bVar174;
      bVar175 = auVar397[8] | bVar175;
      bVar176 = auVar397[9] | bVar176;
      bVar177 = auVar397[10] | bVar177;
      bVar178 = auVar397[0xb] | bVar178;
      bVar179 = auVar397[0xc] | bVar179;
      bVar180 = auVar397[0xd] | bVar180;
      bVar181 = auVar397[0xe] | bVar181;
      bVar182 = auVar397[0xf] | bVar182;
      auVar226._0_8_ = (ulong)auVar40._8_5_ & 0xffffffff;
      auVar226._8_5_ = auVar40._8_5_ >> 0x20;
      auVar226._13_3_ = 0;
      auVar412._0_8_ = uVar94 & 0xffffffff;
      auVar412[8] = *pbVar77 & 0x3f;
      auVar412._9_7_ = 0;
      auVar398._0_8_ = (ulong)auVar48._8_5_ & 0xffffffff;
      auVar398._8_5_ = auVar48._8_5_ >> 0x20;
      auVar398._13_3_ = 0;
      bVar111 = auVar417[0] | bVar111;
      bVar112 = auVar417[1] | bVar112;
      bVar113 = auVar417[2] | bVar113;
      bVar114 = auVar417[3] | bVar114;
      bVar115 = auVar417[4] | bVar115;
      bVar116 = auVar417[5] | bVar116;
      bVar117 = auVar417[6] | bVar117;
      bVar118 = auVar417[7] | bVar118;
      bVar119 = auVar417[8] | bVar119;
      bVar120 = auVar417[9] | bVar120;
      bVar121 = auVar417[10] | bVar121;
      bVar122 = auVar417[0xb] | bVar122;
      bVar123 = auVar417[0xc] | bVar123;
      bVar124 = auVar417[0xd] | bVar124;
      bVar125 = auVar417[0xe] | bVar125;
      bVar126 = auVar417[0xf] | bVar126;
      auVar418._0_8_ = (ulong)auVar41._8_5_ & 0xffffffff;
      auVar418._8_5_ = auVar41._8_5_ >> 0x20;
      auVar418._13_3_ = 0;
      auVar223._0_8_ = uVar93 & 0xffffffff;
      auVar223[8] = bVar131 & 0x3f;
      auVar223._9_7_ = 0;
      auVar220._0_8_ = uVar91 & 0xffffffff;
      auVar220[8] = *pbVar70 & 0x3f;
      auVar220._9_7_ = 0;
      bVar201 = auVar147[0] | (byte)uVar202;
      bVar203 = auVar147[1] | (byte)((ulong)uVar202 >> 8);
      bVar204 = auVar147[2] | (byte)((ulong)uVar202 >> 0x10);
      bVar205 = auVar147[3] | (byte)((ulong)uVar202 >> 0x18);
      bVar206 = auVar147[4] | (byte)((ulong)uVar202 >> 0x20);
      bVar207 = auVar147[5] | (byte)((ulong)uVar202 >> 0x28);
      bVar208 = auVar147[6] | (byte)((ulong)uVar202 >> 0x30);
      bVar209 = auVar147[7] | (byte)((ulong)uVar202 >> 0x38);
      uVar202 = CONCAT17(bVar209,CONCAT16(bVar208,CONCAT15(bVar207,CONCAT14(bVar206,CONCAT13(bVar205
                                                  ,CONCAT12(bVar204,CONCAT11(bVar203,bVar201)))))));
      bVar210 = auVar147[8] | (byte)uVar211;
      bVar212 = auVar147[9] | (byte)((ulong)uVar211 >> 8);
      bVar213 = auVar147[10] | (byte)((ulong)uVar211 >> 0x10);
      bVar214 = auVar147[0xb] | (byte)((ulong)uVar211 >> 0x18);
      bVar215 = auVar147[0xc] | (byte)((ulong)uVar211 >> 0x20);
      bVar216 = auVar147[0xd] | (byte)((ulong)uVar211 >> 0x28);
      bVar217 = auVar147[0xe] | (byte)((ulong)uVar211 >> 0x30);
      bVar218 = auVar147[0xf] | (byte)((ulong)uVar211 >> 0x38);
      uVar211 = CONCAT17(bVar218,CONCAT16(bVar217,CONCAT15(bVar216,CONCAT14(bVar215,CONCAT13(bVar214
                                                  ,CONCAT12(bVar213,CONCAT11(bVar212,bVar210)))))));
      auVar404._0_8_ = (ulong)auVar49._8_5_ & 0xffffffff;
      auVar404._8_5_ = auVar49._8_5_ >> 0x20;
      auVar404._13_3_ = 0;
      auVar394._0_8_ = uVar92 & 0xffffffff;
      auVar394[8] = bVar130 & 0x3f;
      auVar394._9_7_ = 0;
      auVar22._8_8_ = 1;
      auVar22._0_8_ = 1;
      auVar402 = NEON_ushl(auVar22,auVar391,8);
      auVar23._8_8_ = 1;
      auVar23._0_8_ = 1;
      auVar413 = NEON_ushl(auVar23,auVar412,8);
      auVar24._8_8_ = 1;
      auVar24._0_8_ = 1;
      auVar397 = NEON_ushl(auVar24,auVar226,8);
      auVar25._8_8_ = 1;
      auVar25._0_8_ = 1;
      auVar166 = NEON_ushl(auVar25,auVar223,8);
      auVar26._8_8_ = 1;
      auVar26._0_8_ = 1;
      auVar419 = NEON_ushl(auVar26,auVar418,8);
      auVar27._8_8_ = 1;
      auVar27._0_8_ = 1;
      auVar417 = NEON_ushl(auVar27,auVar398,8);
      auVar28._8_8_ = 1;
      auVar28._0_8_ = 1;
      auVar405 = NEON_ushl(auVar28,auVar404,8);
      auVar29._8_8_ = 1;
      auVar29._0_8_ = 1;
      auVar147 = NEON_ushl(auVar29,auVar220,8);
      auVar30._8_8_ = 1;
      auVar30._0_8_ = 1;
      auVar411 = NEON_ushl(auVar30,auVar394,8);
      bVar127 = auVar402[0] | (byte)uVar86;
      bVar128 = auVar402[1] | (byte)((ulong)uVar86 >> 8);
      bVar129 = auVar402[2] | (byte)((ulong)uVar86 >> 0x10);
      bVar130 = auVar402[3] | (byte)((ulong)uVar86 >> 0x18);
      bVar131 = auVar402[4] | (byte)((ulong)uVar86 >> 0x20);
      bVar132 = auVar402[5] | (byte)((ulong)uVar86 >> 0x28);
      bVar133 = auVar402[6] | (byte)((ulong)uVar86 >> 0x30);
      bVar134 = auVar402[7] | (byte)((ulong)uVar86 >> 0x38);
      uVar86 = CONCAT17(bVar134,CONCAT16(bVar133,CONCAT15(bVar132,CONCAT14(bVar131,CONCAT13(bVar130,
                                                  CONCAT12(bVar129,CONCAT11(bVar128,bVar127)))))));
      bVar135 = auVar402[8] | (byte)uVar136;
      bVar137 = auVar402[9] | (byte)((ulong)uVar136 >> 8);
      bVar138 = auVar402[10] | (byte)((ulong)uVar136 >> 0x10);
      bVar139 = auVar402[0xb] | (byte)((ulong)uVar136 >> 0x18);
      bVar140 = auVar402[0xc] | (byte)((ulong)uVar136 >> 0x20);
      bVar141 = auVar402[0xd] | (byte)((ulong)uVar136 >> 0x28);
      bVar142 = auVar402[0xe] | (byte)((ulong)uVar136 >> 0x30);
      bVar143 = auVar402[0xf] | (byte)((ulong)uVar136 >> 0x38);
      uVar136 = CONCAT17(bVar143,CONCAT16(bVar142,CONCAT15(bVar141,CONCAT14(bVar140,CONCAT13(bVar139
                                                  ,CONCAT12(bVar138,CONCAT11(bVar137,bVar135)))))));
      bVar283 = auVar413[0] | (byte)uVar284;
      bVar285 = auVar413[1] | (byte)((ulong)uVar284 >> 8);
      bVar286 = auVar413[2] | (byte)((ulong)uVar284 >> 0x10);
      bVar287 = auVar413[3] | (byte)((ulong)uVar284 >> 0x18);
      bVar288 = auVar413[4] | (byte)((ulong)uVar284 >> 0x20);
      bVar289 = auVar413[5] | (byte)((ulong)uVar284 >> 0x28);
      bVar290 = auVar413[6] | (byte)((ulong)uVar284 >> 0x30);
      bVar291 = auVar413[7] | (byte)((ulong)uVar284 >> 0x38);
      uVar284 = CONCAT17(bVar291,CONCAT16(bVar290,CONCAT15(bVar289,CONCAT14(bVar288,CONCAT13(bVar287
                                                  ,CONCAT12(bVar286,CONCAT11(bVar285,bVar283)))))));
      bVar292 = auVar413[8] | (byte)uVar293;
      bVar294 = auVar413[9] | (byte)((ulong)uVar293 >> 8);
      bVar295 = auVar413[10] | (byte)((ulong)uVar293 >> 0x10);
      bVar296 = auVar413[0xb] | (byte)((ulong)uVar293 >> 0x18);
      bVar297 = auVar413[0xc] | (byte)((ulong)uVar293 >> 0x20);
      bVar298 = auVar413[0xd] | (byte)((ulong)uVar293 >> 0x28);
      bVar299 = auVar413[0xe] | (byte)((ulong)uVar293 >> 0x30);
      bVar300 = auVar413[0xf] | (byte)((ulong)uVar293 >> 0x38);
      uVar293 = CONCAT17(bVar300,CONCAT16(bVar299,CONCAT15(bVar298,CONCAT14(bVar297,CONCAT13(bVar296
                                                  ,CONCAT12(bVar295,CONCAT11(bVar294,bVar292)))))));
      bVar373 = auVar397[0] | (byte)uVar374;
      bVar375 = auVar397[1] | (byte)((ulong)uVar374 >> 8);
      bVar376 = auVar397[2] | (byte)((ulong)uVar374 >> 0x10);
      bVar377 = auVar397[3] | (byte)((ulong)uVar374 >> 0x18);
      bVar378 = auVar397[4] | (byte)((ulong)uVar374 >> 0x20);
      bVar379 = auVar397[5] | (byte)((ulong)uVar374 >> 0x28);
      bVar380 = auVar397[6] | (byte)((ulong)uVar374 >> 0x30);
      bVar381 = auVar397[7] | (byte)((ulong)uVar374 >> 0x38);
      uVar374 = CONCAT17(bVar381,CONCAT16(bVar380,CONCAT15(bVar379,CONCAT14(bVar378,CONCAT13(bVar377
                                                  ,CONCAT12(bVar376,CONCAT11(bVar375,bVar373)))))));
      bVar382 = auVar397[8] | (byte)uVar383;
      bVar384 = auVar397[9] | (byte)((ulong)uVar383 >> 8);
      bVar385 = auVar397[10] | (byte)((ulong)uVar383 >> 0x10);
      bVar386 = auVar397[0xb] | (byte)((ulong)uVar383 >> 0x18);
      bVar387 = auVar397[0xc] | (byte)((ulong)uVar383 >> 0x20);
      bVar388 = auVar397[0xd] | (byte)((ulong)uVar383 >> 0x28);
      bVar389 = auVar397[0xe] | (byte)((ulong)uVar383 >> 0x30);
      bVar390 = auVar397[0xf] | (byte)((ulong)uVar383 >> 0x38);
      uVar383 = CONCAT17(bVar390,CONCAT16(bVar389,CONCAT15(bVar388,CONCAT14(bVar387,CONCAT13(bVar386
                                                  ,CONCAT12(bVar385,CONCAT11(bVar384,bVar382)))))));
      bVar355 = auVar419[0] | (byte)uVar356;
      bVar357 = auVar419[1] | (byte)((ulong)uVar356 >> 8);
      bVar358 = auVar419[2] | (byte)((ulong)uVar356 >> 0x10);
      bVar359 = auVar419[3] | (byte)((ulong)uVar356 >> 0x18);
      bVar360 = auVar419[4] | (byte)((ulong)uVar356 >> 0x20);
      bVar361 = auVar419[5] | (byte)((ulong)uVar356 >> 0x28);
      bVar362 = auVar419[6] | (byte)((ulong)uVar356 >> 0x30);
      bVar363 = auVar419[7] | (byte)((ulong)uVar356 >> 0x38);
      uVar356 = CONCAT17(bVar363,CONCAT16(bVar362,CONCAT15(bVar361,CONCAT14(bVar360,CONCAT13(bVar359
                                                  ,CONCAT12(bVar358,CONCAT11(bVar357,bVar355)))))));
      bVar364 = auVar419[8] | (byte)uVar365;
      bVar366 = auVar419[9] | (byte)((ulong)uVar365 >> 8);
      bVar367 = auVar419[10] | (byte)((ulong)uVar365 >> 0x10);
      bVar368 = auVar419[0xb] | (byte)((ulong)uVar365 >> 0x18);
      bVar369 = auVar419[0xc] | (byte)((ulong)uVar365 >> 0x20);
      bVar370 = auVar419[0xd] | (byte)((ulong)uVar365 >> 0x28);
      bVar371 = auVar419[0xe] | (byte)((ulong)uVar365 >> 0x30);
      bVar372 = auVar419[0xf] | (byte)((ulong)uVar365 >> 0x38);
      uVar365 = CONCAT17(bVar372,CONCAT16(bVar371,CONCAT15(bVar370,CONCAT14(bVar369,CONCAT13(bVar368
                                                  ,CONCAT12(bVar367,CONCAT11(bVar366,bVar364)))))));
      bVar301 = auVar166[0] | (byte)uVar302;
      bVar303 = auVar166[1] | (byte)((ulong)uVar302 >> 8);
      bVar304 = auVar166[2] | (byte)((ulong)uVar302 >> 0x10);
      bVar305 = auVar166[3] | (byte)((ulong)uVar302 >> 0x18);
      bVar306 = auVar166[4] | (byte)((ulong)uVar302 >> 0x20);
      bVar307 = auVar166[5] | (byte)((ulong)uVar302 >> 0x28);
      bVar308 = auVar166[6] | (byte)((ulong)uVar302 >> 0x30);
      bVar309 = auVar166[7] | (byte)((ulong)uVar302 >> 0x38);
      uVar302 = CONCAT17(bVar309,CONCAT16(bVar308,CONCAT15(bVar307,CONCAT14(bVar306,CONCAT13(bVar305
                                                  ,CONCAT12(bVar304,CONCAT11(bVar303,bVar301)))))));
      bVar310 = auVar166[8] | (byte)uVar311;
      bVar312 = auVar166[9] | (byte)((ulong)uVar311 >> 8);
      bVar313 = auVar166[10] | (byte)((ulong)uVar311 >> 0x10);
      bVar314 = auVar166[0xb] | (byte)((ulong)uVar311 >> 0x18);
      bVar315 = auVar166[0xc] | (byte)((ulong)uVar311 >> 0x20);
      bVar316 = auVar166[0xd] | (byte)((ulong)uVar311 >> 0x28);
      bVar317 = auVar166[0xe] | (byte)((ulong)uVar311 >> 0x30);
      bVar318 = auVar166[0xf] | (byte)((ulong)uVar311 >> 0x38);
      uVar311 = CONCAT17(bVar318,CONCAT16(bVar317,CONCAT15(bVar316,CONCAT14(bVar315,CONCAT13(bVar314
                                                  ,CONCAT12(bVar313,CONCAT11(bVar312,bVar310)))))));
      bVar319 = auVar417[0] | (byte)uVar320;
      bVar321 = auVar417[1] | (byte)((ulong)uVar320 >> 8);
      bVar322 = auVar417[2] | (byte)((ulong)uVar320 >> 0x10);
      bVar323 = auVar417[3] | (byte)((ulong)uVar320 >> 0x18);
      bVar324 = auVar417[4] | (byte)((ulong)uVar320 >> 0x20);
      bVar325 = auVar417[5] | (byte)((ulong)uVar320 >> 0x28);
      bVar326 = auVar417[6] | (byte)((ulong)uVar320 >> 0x30);
      bVar327 = auVar417[7] | (byte)((ulong)uVar320 >> 0x38);
      uVar320 = CONCAT17(bVar327,CONCAT16(bVar326,CONCAT15(bVar325,CONCAT14(bVar324,CONCAT13(bVar323
                                                  ,CONCAT12(bVar322,CONCAT11(bVar321,bVar319)))))));
      bVar328 = auVar417[8] | (byte)uVar329;
      bVar330 = auVar417[9] | (byte)((ulong)uVar329 >> 8);
      bVar331 = auVar417[10] | (byte)((ulong)uVar329 >> 0x10);
      bVar332 = auVar417[0xb] | (byte)((ulong)uVar329 >> 0x18);
      bVar333 = auVar417[0xc] | (byte)((ulong)uVar329 >> 0x20);
      bVar334 = auVar417[0xd] | (byte)((ulong)uVar329 >> 0x28);
      bVar335 = auVar417[0xe] | (byte)((ulong)uVar329 >> 0x30);
      bVar336 = auVar417[0xf] | (byte)((ulong)uVar329 >> 0x38);
      uVar329 = CONCAT17(bVar336,CONCAT16(bVar335,CONCAT15(bVar334,CONCAT14(bVar333,CONCAT13(bVar332
                                                  ,CONCAT12(bVar331,CONCAT11(bVar330,bVar328)))))));
      bVar229 = auVar147[0] | (byte)uVar230;
      bVar231 = auVar147[1] | (byte)((ulong)uVar230 >> 8);
      bVar232 = auVar147[2] | (byte)((ulong)uVar230 >> 0x10);
      bVar233 = auVar147[3] | (byte)((ulong)uVar230 >> 0x18);
      bVar234 = auVar147[4] | (byte)((ulong)uVar230 >> 0x20);
      bVar235 = auVar147[5] | (byte)((ulong)uVar230 >> 0x28);
      bVar236 = auVar147[6] | (byte)((ulong)uVar230 >> 0x30);
      bVar237 = auVar147[7] | (byte)((ulong)uVar230 >> 0x38);
      uVar230 = CONCAT17(bVar237,CONCAT16(bVar236,CONCAT15(bVar235,CONCAT14(bVar234,CONCAT13(bVar233
                                                  ,CONCAT12(bVar232,CONCAT11(bVar231,bVar229)))))));
      bVar238 = auVar147[8] | (byte)uVar239;
      bVar240 = auVar147[9] | (byte)((ulong)uVar239 >> 8);
      bVar241 = auVar147[10] | (byte)((ulong)uVar239 >> 0x10);
      bVar242 = auVar147[0xb] | (byte)((ulong)uVar239 >> 0x18);
      bVar243 = auVar147[0xc] | (byte)((ulong)uVar239 >> 0x20);
      bVar244 = auVar147[0xd] | (byte)((ulong)uVar239 >> 0x28);
      bVar245 = auVar147[0xe] | (byte)((ulong)uVar239 >> 0x30);
      bVar246 = auVar147[0xf] | (byte)((ulong)uVar239 >> 0x38);
      uVar239 = CONCAT17(bVar246,CONCAT16(bVar245,CONCAT15(bVar244,CONCAT14(bVar243,CONCAT13(bVar242
                                                  ,CONCAT12(bVar241,CONCAT11(bVar240,bVar238)))))));
      bVar95 = auVar405[0] | bVar95;
      bVar96 = auVar405[1] | bVar96;
      bVar97 = auVar405[2] | bVar97;
      bVar98 = auVar405[3] | bVar98;
      bVar99 = auVar405[4] | bVar99;
      bVar100 = auVar405[5] | bVar100;
      bVar101 = auVar405[6] | bVar101;
      bVar102 = auVar405[7] | bVar102;
      bVar103 = auVar405[8] | bVar103;
      bVar104 = auVar405[9] | bVar104;
      bVar105 = auVar405[10] | bVar105;
      bVar106 = auVar405[0xb] | bVar106;
      bVar107 = auVar405[0xc] | bVar107;
      bVar108 = auVar405[0xd] | bVar108;
      bVar109 = auVar405[0xe] | bVar109;
      bVar110 = auVar405[0xf] | bVar110;
      bVar247 = auVar411[0] | (byte)uVar248;
      bVar249 = auVar411[1] | (byte)((ulong)uVar248 >> 8);
      bVar250 = auVar411[2] | (byte)((ulong)uVar248 >> 0x10);
      bVar251 = auVar411[3] | (byte)((ulong)uVar248 >> 0x18);
      bVar252 = auVar411[4] | (byte)((ulong)uVar248 >> 0x20);
      bVar253 = auVar411[5] | (byte)((ulong)uVar248 >> 0x28);
      bVar254 = auVar411[6] | (byte)((ulong)uVar248 >> 0x30);
      bVar255 = auVar411[7] | (byte)((ulong)uVar248 >> 0x38);
      uVar248 = CONCAT17(bVar255,CONCAT16(bVar254,CONCAT15(bVar253,CONCAT14(bVar252,CONCAT13(bVar251
                                                  ,CONCAT12(bVar250,CONCAT11(bVar249,bVar247)))))));
      bVar256 = auVar411[8] | (byte)uVar257;
      bVar258 = auVar411[9] | (byte)((ulong)uVar257 >> 8);
      bVar259 = auVar411[10] | (byte)((ulong)uVar257 >> 0x10);
      bVar260 = auVar411[0xb] | (byte)((ulong)uVar257 >> 0x18);
      bVar261 = auVar411[0xc] | (byte)((ulong)uVar257 >> 0x20);
      bVar262 = auVar411[0xd] | (byte)((ulong)uVar257 >> 0x28);
      bVar263 = auVar411[0xe] | (byte)((ulong)uVar257 >> 0x30);
      bVar264 = auVar411[0xf] | (byte)((ulong)uVar257 >> 0x38);
      uVar257 = CONCAT17(bVar264,CONCAT16(bVar263,CONCAT15(bVar262,CONCAT14(bVar261,CONCAT13(bVar260
                                                  ,CONCAT12(bVar259,CONCAT11(bVar258,bVar256)))))));
    } while (uVar84 != 0);
    bVar95 = bVar247 | bVar127 | bVar301 | bVar164 | bVar229 | bVar111 | bVar283 | bVar144 |
             bVar95 | bVar201 | bVar319 | bVar183 | bVar355 | bVar265 | bVar373 | bVar337;
    bVar96 = bVar249 | bVar128 | bVar303 | bVar168 | bVar231 | bVar112 | bVar285 | bVar149 |
             bVar96 | bVar203 | bVar321 | bVar185 | bVar357 | bVar267 | bVar375 | bVar339;
    bVar97 = bVar250 | bVar129 | bVar304 | bVar169 | bVar232 | bVar113 | bVar286 | bVar150 |
             bVar97 | bVar204 | bVar322 | bVar186 | bVar358 | bVar268 | bVar376 | bVar340;
    bVar98 = bVar251 | bVar130 | bVar305 | bVar170 | bVar233 | bVar114 | bVar287 | bVar151 |
             bVar98 | bVar205 | bVar323 | bVar187 | bVar359 | bVar269 | bVar377 | bVar341;
    bVar99 = bVar252 | bVar131 | bVar306 | bVar171 | bVar234 | bVar115 | bVar288 | bVar152 |
             bVar99 | bVar206 | bVar324 | bVar188 | bVar360 | bVar270 | bVar378 | bVar342;
    bVar100 = bVar253 | bVar132 | bVar307 | bVar172 | bVar235 | bVar116 | bVar289 | bVar153 |
              bVar100 | bVar207 | bVar325 | bVar189 | bVar361 | bVar271 | bVar379 | bVar343;
    bVar101 = bVar254 | bVar133 | bVar308 | bVar173 | bVar236 | bVar117 | bVar290 | bVar154 |
              bVar101 | bVar208 | bVar326 | bVar190 | bVar362 | bVar272 | bVar380 | bVar344;
    bVar102 = bVar255 | bVar134 | bVar309 | bVar174 | bVar237 | bVar118 | bVar291 | bVar155 |
              bVar102 | bVar209 | bVar327 | bVar191 | bVar363 | bVar273 | bVar381 | bVar345;
    bVar103 = bVar256 | bVar135 | bVar310 | bVar175 | bVar238 | bVar119 | bVar292 | bVar156 |
              bVar103 | bVar210 | bVar328 | bVar192 | bVar364 | bVar274 | bVar382 | bVar346;
    bVar104 = bVar258 | bVar137 | bVar312 | bVar176 | bVar240 | bVar120 | bVar294 | bVar157 |
              bVar104 | bVar212 | bVar330 | bVar194 | bVar366 | bVar276 | bVar384 | bVar348;
    bVar105 = bVar259 | bVar138 | bVar313 | bVar177 | bVar241 | bVar121 | bVar295 | bVar158 |
              bVar105 | bVar213 | bVar331 | bVar195 | bVar367 | bVar277 | bVar385 | bVar349;
    bVar106 = bVar260 | bVar139 | bVar314 | bVar178 | bVar242 | bVar122 | bVar296 | bVar159 |
              bVar106 | bVar214 | bVar332 | bVar196 | bVar368 | bVar278 | bVar386 | bVar350;
    bVar107 = bVar261 | bVar140 | bVar315 | bVar179 | bVar243 | bVar123 | bVar297 | bVar160 |
              bVar107 | bVar215 | bVar333 | bVar197 | bVar369 | bVar279 | bVar387 | bVar351;
    bVar108 = bVar262 | bVar141 | bVar316 | bVar180 | bVar244 | bVar124 | bVar298 | bVar161 |
              bVar108 | bVar216 | bVar334 | bVar198 | bVar370 | bVar280 | bVar388 | bVar352;
    bVar109 = bVar263 | bVar142 | bVar317 | bVar181 | bVar245 | bVar125 | bVar299 | bVar162 |
              bVar109 | bVar217 | bVar335 | bVar199 | bVar371 | bVar281 | bVar389 | bVar353;
    bVar110 = bVar264 | bVar143 | bVar318 | bVar182 | bVar246 | bVar126 | bVar300 | bVar163 |
              bVar110 | bVar218 | bVar336 | bVar200 | bVar372 | bVar282 | bVar390 | bVar354;
    auVar5[1] = bVar96;
    auVar5[0] = bVar95;
    auVar5[2] = bVar97;
    auVar5[3] = bVar98;
    auVar5[4] = bVar99;
    auVar5[5] = bVar100;
    auVar5[6] = bVar101;
    auVar5[7] = bVar102;
    auVar5[8] = bVar103;
    auVar5[9] = bVar104;
    auVar5[10] = bVar105;
    auVar5[0xb] = bVar106;
    auVar5[0xc] = bVar107;
    auVar5[0xd] = bVar108;
    auVar5[0xe] = bVar109;
    auVar5[0xf] = bVar110;
    auVar6[1] = bVar96;
    auVar6[0] = bVar95;
    auVar6[2] = bVar97;
    auVar6[3] = bVar98;
    auVar6[4] = bVar99;
    auVar6[5] = bVar100;
    auVar6[6] = bVar101;
    auVar6[7] = bVar102;
    auVar6[8] = bVar103;
    auVar6[9] = bVar104;
    auVar6[10] = bVar105;
    auVar6[0xb] = bVar106;
    auVar6[0xc] = bVar107;
    auVar6[0xd] = bVar108;
    auVar6[0xe] = bVar109;
    auVar6[0xf] = bVar110;
    auVar147 = NEON_ext(auVar5,auVar6,8,1);
    uVar91 = CONCAT17(bVar102 | auVar147[7],
                      CONCAT16(bVar101 | auVar147[6],
                               CONCAT15(bVar100 | auVar147[5],
                                        CONCAT14(bVar99 | auVar147[4],
                                                 CONCAT13(bVar98 | auVar147[3],
                                                          CONCAT12(bVar97 | auVar147[2],
                                                                   CONCAT11(bVar96 | auVar147[1],
                                                                            bVar95 | auVar147[0]))))
                                       )));
    if (param_5 != uVar87) {
      uVar84 = uVar87;
      if ((param_5 & 0x1c) == 0) goto LAB_0073c6b4;
      goto LAB_0073c63c;
    }
  }
  uVar86 = 0xffffffffffffffff;
  uVar84 = param_5 - __n;
  if (param_5 - __n <= __n) {
    uVar84 = __n;
  }
  uVar84 = uVar84 + 1;
  uVar87 = __n;
  uVar93 = 0xffffffffffffffff;
LAB_0073c964:
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  *param_1 = 1;
  param_1[1] = __n;
  param_1[2] = uVar87;
  param_1[3] = uVar84;
  param_1[4] = uVar91;
  param_1[5] = 0;
  param_1[6] = param_3;
  param_1[7] = uVar86;
  param_1[8] = uVar93;
  param_1[9] = param_2;
  return;
}


// ===== 0073ca08  core::fmt::pointer_fmt_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::fmt::pointer_fmt_inner */

void __rustcall core::fmt::pointer_fmt_inner(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  char local_21;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = (uint)uVar5;
  if ((uVar4 >> 0x17 & 1) != 0) {
    if ((uVar4 >> 0x1b & 1) == 0) {
      uVar4 = uVar4 | 0x9000000;
      *(undefined2 *)(param_2 + 0x14) = 0x12;
    }
    else {
      uVar4 = uVar4 | 0x1000000;
    }
  }
  *(uint *)(param_2 + 0x10) = uVar4 | 0x800000;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar3 = param_1 & 0xf;
    param_1 = param_1 >> 4;
    (&local_21)[lVar2] = "0123456789abcdef"[uVar3];
    lVar1 = lVar2 + -1;
  } while (param_1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_21 + lVar2,-(lVar2 + -1));
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  return;
}


// ===== 0073cab8  core::fmt::wide_pointer_fmt_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::fmt::wide_pointer_fmt_inner */

byte __rustcall
core::fmt::wide_pointer_fmt_inner
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 *local_a0;
  byte local_98;
  byte local_97;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_51;
  undefined1 local_34 [4];
  
  uVar10 = *param_4;
  pcVar11 = *(code **)(param_4[1] + 0x18);
  uVar3 = (*pcVar11)(uVar10,&DAT_00466f5c,7);
  local_98 = 1;
  local_a0 = param_4;
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_4 + 0x12) < '\0') {
      uVar3 = (*pcVar11)(uVar10,&DAT_004669de,3);
      local_98 = 1;
      if ((uVar3 & 1) != 0) goto LAB_0073cc94;
      uStack_88 = param_4[1];
      local_90 = *param_4;
      local_80 = local_34;
      uVar9 = param_4[2];
      local_34[0] = 1;
      local_78 = &local_90;
      local_70 = &DAT_0097b768;
      local_68 = uVar9;
      uVar3 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                        (&local_90,&DAT_003769d8,4);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                            (&local_90,&DAT_004669dc,2), (uVar3 & 1) == 0)) {
        uVar8 = (uint)uVar9;
        if ((uVar8 >> 0x17 & 1) != 0) {
          if ((uVar8 >> 0x1b & 1) == 0) {
            uVar9 = (ulong)(uVar8 | 0x9000000);
            local_68 = CONCAT26(local_68._6_2_,0x1200000000);
          }
          else {
            uVar9 = (ulong)(uVar8 | 0x1000000);
          }
        }
        local_68 = CONCAT44(local_68._4_4_,(int)uVar9) | 0x800000;
        lVar7 = 0;
        do {
          lVar6 = lVar7;
          uVar3 = param_1 & 0xf;
          param_1 = param_1 >> 4;
          (&local_51)[lVar6] = "0123456789abcdef"[uVar3];
          lVar7 = lVar6 + -1;
        } while (param_1 != 0);
        iVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                          (&local_78,1,"0x",2,&local_51 + lVar6,-(lVar6 + -1));
        if (iVar2 == 0) {
          local_98 = (**(code **)(local_70 + 0x18))(local_78,&DAT_004669e1,2);
          goto LAB_0073cc94;
        }
      }
    }
    else {
      uVar3 = (*pcVar11)(uVar10,&DAT_004669d7,3);
      if ((((uVar3 & 1) == 0) &&
          (uVar3 = (**(code **)(param_4[1] + 0x18))(*param_4,&DAT_003769d8,4), (uVar3 & 1) == 0)) &&
         (uVar3 = (**(code **)(param_4[1] + 0x18))(*param_4,&DAT_004669dc,2), (uVar3 & 1) == 0)) {
        uVar10 = param_4[2];
        uVar8 = (uint)uVar10;
        if ((uVar8 >> 0x17 & 1) != 0) {
          if ((uVar8 >> 0x1b & 1) == 0) {
            uVar8 = uVar8 | 0x9000000;
            *(undefined2 *)((long)param_4 + 0x14) = 0x12;
          }
          else {
            uVar8 = uVar8 | 0x1000000;
          }
        }
        *(uint *)(param_4 + 2) = uVar8 | 0x800000;
        lVar7 = 0;
        do {
          lVar6 = lVar7;
          uVar3 = param_1 & 0xf;
          param_1 = param_1 >> 4;
          *(char *)((long)&local_70 + lVar6 + 7) = "0123456789abcdef"[uVar3];
          lVar7 = lVar6 + -1;
        } while (param_1 != 0);
        local_98 = <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                             (param_4,1,"0x",2,(long)&local_70 + lVar6 + 7,-(lVar6 + -1));
        param_4[2] = uVar10;
        goto LAB_0073cc94;
      }
    }
    local_98 = 1;
  }
LAB_0073cc94:
  local_97 = 1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_a0,"metadata",8,param_2,param_3);
  bVar1 = local_97 | local_98;
  if ((local_97 == 1) && ((local_98 & 1) == 0)) {
    if (*(char *)((long)local_a0 + 0x12) < '\0') {
      uVar10 = *local_a0;
      lVar7 = local_a0[1];
      puVar4 = &DAT_00466a6b;
      uVar5 = 1;
    }
    else {
      uVar10 = *local_a0;
      lVar7 = local_a0[1];
      puVar4 = &DAT_00466b55;
      uVar5 = 2;
    }
    bVar1 = (**(code **)(lVar7 + 0x18))(uVar10,puVar4,uVar5);
  }
  return bVar1 & 1;
}


// ===== 0073cdac  core::fmt::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::fmt::write */

undefined8 __rustcall
core::fmt::write(undefined8 param_1,long param_2,ushort *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  if ((param_4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0073cf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(param_2 + 0x18))(param_1,param_3,param_4 >> 1);
    return uVar5;
  }
  bVar2 = (byte)*param_3;
  if (bVar2 != 0) {
    pcVar10 = *(code **)(param_2 + 0x18);
    uVar11 = 0;
    do {
      puVar9 = (ushort *)((long)param_3 + 1);
      if ((char)bVar2 < '\0') {
        if (bVar2 == 0x80) {
          uVar3 = *(ushort *)((long)param_3 + 1);
          uVar4 = (*pcVar10)(param_1,(byte *)((long)param_3 + 3),(ulong)uVar3);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          param_3 = (ushort *)((byte *)((long)param_3 + 3) + uVar3);
        }
        else {
          local_68 = param_1;
          local_60 = param_2;
          if (bVar2 == 0xc0) {
            puVar1 = (undefined8 *)(param_4 + uVar11 * 0x10);
            local_58 = 0x60000020;
            uVar4 = (*(code *)puVar1[1])(*puVar1,&local_68);
            param_3 = puVar9;
          }
          else {
            if ((bVar2 & 1) == 0) {
              uVar6 = 0x60000020;
              if ((bVar2 >> 1 & 1) == 0) goto LAB_0073ceac;
LAB_0073ce68:
              puVar8 = puVar9 + 1;
              uVar4 = (ulong)*puVar9;
              puVar9 = puVar8;
              if ((bVar2 >> 2 & 1) == 0) goto LAB_0073ceb4;
LAB_0073ce70:
              param_3 = puVar9 + 1;
              uVar7 = (ulong)*puVar9;
            }
            else {
              uVar6 = *(undefined4 *)((long)param_3 + 1);
              puVar9 = (ushort *)((long)param_3 + 5);
              if ((bVar2 >> 1 & 1) != 0) goto LAB_0073ce68;
LAB_0073ceac:
              uVar4 = 0;
              if ((bVar2 >> 2 & 1) != 0) goto LAB_0073ce70;
LAB_0073ceb4:
              uVar7 = 0;
              param_3 = puVar9;
            }
            if ((bVar2 >> 3 & 1) != 0) {
              uVar11 = (ulong)*param_3;
              param_3 = param_3 + 1;
            }
            if ((bVar2 >> 4 & 1) != 0) {
              uVar4 = (ulong)*(ushort *)(param_4 + uVar4 * 0x10 + 8);
            }
            if ((bVar2 >> 5 & 1) != 0) {
              uVar7 = (ulong)*(ushort *)(param_4 + uVar7 * 0x10 + 8);
            }
            puVar1 = (undefined8 *)(param_4 + uVar11 * 0x10);
            local_58 = CONCAT26((short)uVar7,CONCAT24((short)uVar4,uVar6));
            uVar4 = (*(code *)puVar1[1])(*puVar1,&local_68);
          }
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar4 = (*pcVar10)(param_1,puVar9,(ulong)bVar2);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        param_3 = (ushort *)((long)puVar9 + (ulong)bVar2);
      }
      bVar2 = (byte)*param_3;
    } while (bVar2 != 0);
  }
  return 0;
}


// ===== 0073cf60  core::num::from_ascii_radix_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::from_ascii_radix_panic */

void __rustcall core::num::from_ascii_radix_panic(undefined4 param_1,undefined8 param_2)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined *puStack_18;
  
  local_20 = &local_24;
  puStack_18 = PTR_fmt_0099f518;
  local_24 = param_1;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_0036dc40,&local_20,param_2);
}


// ===== 0073cf94  core::str::slice_error_fail =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::slice_error_fail */

void __rustcall core::str::slice_error_fail(void)

{
  undefined8 in_x4;
  
  slice_error_fail_rt();
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00466f63,0x2d,in_x4);
}


// ===== 0073cfa0  core::str::slice_error_fail_ct =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::slice_error_fail_ct */

void __rustcall core::str::slice_error_fail_ct(void)

{
  undefined8 in_x4;
  
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00466f63,0x2d,in_x4);
}


// ===== 0073cfbc  core::str::slice_error_fail_rt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::slice_error_fail_rt */

void __rustcall
core::str::slice_error_fail_rt
          (long param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ulong *puVar7;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong local_58;
  ulong uStack_50;
  uint local_44;
  ulong *local_40;
  undefined *local_38;
  ulong *local_30;
  undefined *local_28;
  ulong *puStack_20;
  code *local_18;
  
  local_40 = &local_70;
  puVar7 = &local_70;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_2;
  if (param_2 < param_3) {
    puVar5 = &DAT_0036d61f;
  }
  else {
    if (param_4 <= param_2) {
      if (param_4 < param_3) {
        local_38 = PTR_fmt_0099f540;
        local_30 = &uStack_68;
        local_28 = PTR_fmt_0099f540;
                    /* WARNING: Subroutine does not return */
        panicking::panic_fmt(&DAT_00368459,&local_40,param_5);
      }
      if (((param_3 != 0) && (param_3 < param_2)) &&
         (iVar6 = (int)*(char *)(param_1 + param_3),
         iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) {
        iVar6 = (int)*(char *)(param_1 + (param_3 - 1));
        local_58 = param_3 - 1;
        if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
          iVar6 = (int)*(char *)(param_1 + (param_3 - 2));
          local_58 = param_3 - 2;
          if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
            local_58 = param_3 - 3;
          }
        }
        uVar2 = param_3;
        if (param_3 <= param_2) {
          uVar2 = param_2;
        }
        uVar3 = param_2;
        if (param_2 <= param_3 + 1) {
          uVar3 = param_3 + 1;
        }
        do {
          if (uVar2 == param_3) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b938);
          }
          iVar6 = (int)*(char *)(param_1 + param_3);
          uStack_50 = param_3;
        } while ((iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) &&
                (param_3 = param_3 + 1, uStack_50 = uVar3, param_3 < param_2));
        if (((uStack_50 < local_58) || (param_2 < uStack_50)) ||
           ((local_58 != param_2 &&
            (((local_58 != 0 &&
              (iVar6 = (int)*(char *)(param_1 + local_58),
              iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) ||
             ((uStack_50 != param_2 &&
              (iVar6 = (int)*(char *)(param_1 + uStack_50),
              iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))))))))) {
                    /* WARNING: Subroutine does not return */
          slice_error_fail(param_1,param_2,local_58,uStack_50);
        }
        if (local_58 != uStack_50) {
          pbVar1 = (byte *)(param_1 + local_58);
          local_44 = (uint)*pbVar1;
          if ((char)*pbVar1 < '\0') {
            if (local_44 < 0xe0) {
              local_44 = pbVar1[1] & 0x3f | (local_44 & 0x1f) << 6;
            }
            else {
              uVar4 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
              if (local_44 < 0xf0) {
                local_44 = uVar4 | (local_44 & 0x1f) << 0xc;
              }
              else {
                local_44 = pbVar1[3] & 0x3f | uVar4 << 6 | (local_44 & 7) << 0x12;
              }
            }
          }
          local_30 = (ulong *)&local_44;
          puStack_20 = &local_58;
          local_38 = PTR_fmt_0099f540;
          local_28 = PTR_fmt_0099f658;
          local_18 = FUN_0074db8c;
          local_40 = &local_70;
                    /* WARNING: Subroutine does not return */
          panicking::panic_fmt(&DAT_00366728,&local_40,param_5);
        }
LAB_0073d1d8:
                    /* WARNING: Subroutine does not return */
        option::unwrap_failed(param_5);
      }
      if (((param_4 != 0) && (param_4 < param_2)) &&
         (iVar6 = (int)*(char *)(param_1 + param_4),
         iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) {
        iVar6 = (int)*(char *)(param_1 + (param_4 - 1));
        local_58 = param_4 - 1;
        if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
          iVar6 = (int)*(char *)(param_1 + (param_4 - 2));
          local_58 = param_4 - 2;
          if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
            local_58 = param_4 - 3;
          }
        }
        uVar2 = param_4;
        if (param_4 <= param_2) {
          uVar2 = param_2;
        }
        uVar3 = param_2;
        if (param_2 <= param_4 + 1) {
          uVar3 = param_4 + 1;
        }
        do {
          if (uVar2 == param_4) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b938);
          }
          iVar6 = (int)*(char *)(param_1 + param_4);
          uStack_50 = param_4;
        } while ((iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) &&
                (param_4 = param_4 + 1, uStack_50 = uVar3, param_4 < param_2));
        if (((uStack_50 < local_58) || (param_2 < uStack_50)) ||
           ((local_58 != param_2 &&
            (((local_58 != 0 &&
              (iVar6 = (int)*(char *)(param_1 + local_58),
              iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) ||
             ((uStack_50 != param_2 &&
              (iVar6 = (int)*(char *)(param_1 + uStack_50),
              iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))))))))) {
                    /* WARNING: Subroutine does not return */
          slice_error_fail();
        }
        if (local_58 != uStack_50) {
          pbVar1 = (byte *)(param_1 + local_58);
          local_44 = (uint)*pbVar1;
          if ((char)*pbVar1 < '\0') {
            if (local_44 < 0xe0) {
              local_44 = pbVar1[1] & 0x3f | (local_44 & 0x1f) << 6;
            }
            else {
              uVar4 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
              if (local_44 < 0xf0) {
                local_44 = uVar4 | (local_44 & 0x1f) << 0xc;
              }
              else {
                local_44 = pbVar1[3] & 0x3f | uVar4 << 6 | (local_44 & 7) << 0x12;
              }
            }
          }
          local_40 = &uStack_68;
          local_30 = (ulong *)&local_44;
          puStack_20 = &local_58;
          local_38 = PTR_fmt_0099f540;
          local_28 = PTR_fmt_0099f658;
          local_18 = FUN_0074db8c;
                    /* WARNING: Subroutine does not return */
          panicking::panic_fmt(&DAT_0036677a,&local_40,param_5);
        }
        goto LAB_0073d1d8;
      }
    }
    puVar7 = &uStack_68;
    puVar5 = &DAT_0036fdf3;
  }
  local_38 = PTR_fmt_0099f540;
  local_30 = &local_60;
  local_28 = PTR_fmt_0099f540;
  local_40 = puVar7;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(puVar5,&local_40,param_5);
}


// ===== 0073d354  core::cell::panic_already_borrowed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::cell::panic_already_borrowed */

void __rustcall core::cell::panic_already_borrowed(undefined8 param_1)

{
  undefined1 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_28 = &uStack_11;
  puStack_20 = PTR_fmt_0099f830;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00368e80,&local_28,param_1);
}


// ===== 0073d384  core::cell::panic_already_mutably_borrowed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::cell::panic_already_mutably_borrowed */

void __rustcall core::cell::panic_already_mutably_borrowed(undefined8 param_1)

{
  undefined1 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_28 = &uStack_11;
  puStack_20 = PTR_fmt_0099f838;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00368e80,&local_28,param_1);
}


// ===== 0073d3b4  core::wtf8::slice_error_fail =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::wtf8::slice_error_fail */

void __rustcall core::wtf8::slice_error_fail(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong *local_30;
  undefined *puStack_28;
  ulong *local_20;
  undefined *puStack_18;
  
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  if (param_2 < param_3) {
    local_30 = &local_48;
    puStack_28 = PTR_fmt_0099f540;
    local_20 = &local_38;
    puStack_18 = PTR_fmt_0099f540;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_0036d61f,&local_30,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b9b0);
  }
  if (param_2 < param_4) {
    local_30 = &uStack_40;
    puStack_28 = PTR_fmt_0099f540;
    local_20 = &local_38;
    puStack_18 = PTR_fmt_0099f540;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_0036fdf3,&local_30,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b998);
  }
  if (param_4 < param_3) {
    local_30 = &local_48;
    puStack_28 = PTR_fmt_0099f540;
    local_20 = &uStack_40;
    puStack_18 = PTR_fmt_0099f540;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_00368459,&local_30,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b980);
  }
  if (((param_3 != 0) && (param_3 < param_2)) &&
     (iVar1 = (int)*(char *)(param_1 + param_3),
     iVar1 == -0x41 || iVar1 + 0x41 < 0 != SCARRY4(iVar1,0x41))) {
    local_30 = &local_48;
    puStack_28 = PTR_fmt_0099f540;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_00367139,&local_30,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b950);
  }
  local_30 = &uStack_40;
  puStack_28 = PTR_fmt_0099f540;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00367139,&local_30,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b968);
}


// ===== 0073d4d8  core::ascii::escape_default =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::ascii::escape_default */

ulong __rustcall core::ascii::escape_default(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(byte)(&DAT_004667f0)[param_1 & 0xff] & 0x7f;
  if (-1 < (char)(&DAT_004667f0)[param_1 & 0xff]) {
    return uVar1 | 0x10000000000;
  }
  if ((int)uVar1 != 0) {
    return uVar1 << 8 | 0x2000000005c;
  }
  return (ulong)(byte)"0123456789abcdef"[param_1 & 0xf] << 0x18 |
         (ulong)(byte)"0123456789abcdef"[param_1 >> 4 & 0xf] << 0x10 | 0x4000000785c;
}


// ===== 0073d54c  core::option::expect_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::option::expect_failed */

void __rustcall core::option::expect_failed(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  pcStack_18 = FUN_00746ec0;
  local_30 = param_1;
  uStack_28 = param_2;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00368e80,&local_20);
}


// ===== 0073d57c  core::option::unwrap_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::option::unwrap_failed */

void __rustcall core::option::unwrap_failed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic(&DAT_00466f79,0x2b,param_1);
}


// ===== 0073d598  core::result::unwrap_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::result::unwrap_failed */

void __rustcall
core::result::unwrap_failed
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  code *local_28;
  undefined8 *puStack_20;
  code *local_18;
  
  puStack_30 = (undefined1 *)&local_50;
  puStack_20 = &uStack_40;
  local_28 = FUN_00746ec0;
  local_18 = FUN_00746c3c;
  local_50 = param_1;
  local_48 = param_2;
  uStack_40 = param_3;
  local_38 = param_4;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00364c66,&puStack_30,param_5);
}


// ===== 0073d5e4  core::panicking::panic_nounwind =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_nounwind */

void __rustcall core::panicking::panic_nounwind(undefined8 param_1,long param_2)

{
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(param_1,param_2 << 1 | 1,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b9c8);
}


// ===== 0073d604  core::panicking::const_panic_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::const_panic_fmt */

void __rustcall core::panicking::const_panic_fmt(undefined8 param_1,ulong param_2)

{
  undefined8 local_30;
  ulong uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  uStack_28 = param_2 >> 1;
  pcStack_18 = FUN_00746ec0;
  local_30 = param_1;
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00368e80,&local_20,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b9e0);
}


// ===== 0073d640  core::panicking::panic_in_cleanup =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_in_cleanup */

void __rustcall core::panicking::panic_in_cleanup(void)

{
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  auStack_50 = panic_nounwind_nobacktrace(&DAT_00466fa4,0x24);
  puStack_30 = auStack_50;
  pcStack_18 = panic_bounds_check;
  puStack_40 = (undefined8 *)(auStack_50 + 8);
  puStack_38 = PTR_fmt_0099f540;
  puStack_28 = PTR_fmt_0099f540;
  puStack_20 = &stack0xfffffffffffffff0;
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_0036a531,&puStack_40);
}


// ===== 0073d658  core::panicking::panic_bounds_check =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_bounds_check */

void __rustcall core::panicking::panic_bounds_check(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined *puStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_40;
  local_30 = &uStack_38;
  puStack_28 = PTR_fmt_0099f540;
  puStack_18 = PTR_fmt_0099f540;
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_0036a531,&local_30);
}


// ===== 0073d690  core::panicking::panic_nounwind_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_nounwind_fmt */

void __rustcall
core::panicking::panic_nounwind_fmt
          (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined1 local_17;
  
  local_28 = &local_38;
  local_18 = 0;
                    /* try { // try from 0073d6b0 to 0073d6b7 has its CatchHandler @ 0073d6bc */
  local_38 = param_1;
  uStack_30 = param_2;
  uStack_20 = param_4;
  local_17 = param_3;
  __rustc::rust_begin_unwind(&local_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x73d6bc);
  (*pcVar1)();
}


// ===== 0073d6c0  core::panicking::assert_failed_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed_inner */

void __rustcall
core::panicking::assert_failed_inner
          (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined **local_50;
  code *pcStack_48;
  long *local_40;
  code *pcStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_40 = &local_90;
  local_30 = &local_90;
  local_70 = &DAT_0046ccc8 + *(int *)(&DAT_0046ccc8 + (param_1 & 0xff) * 4);
  uStack_68 = *(undefined8 *)(&DAT_0046ccd8 + (param_1 & 0xff) * 8);
  if (param_6 == 0) {
    puVar1 = &DAT_003660b3;
    pcStack_38 = FUN_00746c3c;
    local_30 = &local_80;
  }
  else {
    puVar1 = &DAT_00365493;
    local_40 = &local_60;
    pcStack_38 = (code *)PTR_fmt_0099f840;
    local_20 = &local_80;
    pcStack_18 = FUN_00746c3c;
    local_60 = param_6;
    uStack_58 = param_7;
  }
  local_50 = &local_70;
  pcStack_28 = FUN_00746c3c;
  pcStack_48 = FUN_00746ec0;
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = param_4;
  uStack_78 = param_5;
                    /* WARNING: Subroutine does not return */
  panic_fmt(puVar1,&local_50,param_8);
}


// ===== 0073d780  core::panicking::panic_cannot_unwind =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_cannot_unwind */

void __rustcall core::panicking::panic_cannot_unwind(void)

{
  undefined1 auVar1 [16];
  
  auVar1 = panic_nounwind(&DAT_00466fd3,0x26);
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(auVar1._0_8_,auVar1._8_8_ << 1 | 1,1,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097b9f8);
}


// ===== 0073d798  core::panicking::panic_nounwind_nobacktrace =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_nounwind_nobacktrace */

void __rustcall core::panicking::panic_nounwind_nobacktrace(undefined8 param_1,long param_2)

{
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(param_1,param_2 << 1 | 1,1,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b9f8);
}


// ===== 0073d7b8  core::panicking::panic_null_pointer_dereference =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_null_pointer_dereference */

void __rustcall core::panicking::panic_null_pointer_dereference(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(&DAT_00466ff9,0x43,0,param_1);
}


// ===== 0073d7d8  core::panicking::panic_invalid_enum_construction =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_invalid_enum_construction */

void __rustcall
core::panicking::panic_invalid_enum_construction
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_30;
  puStack_18 = PTR_fmt_0099f6c8;
  local_30 = param_1;
  uStack_28 = param_2;
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(&DAT_0046701a,&local_20,0,param_3);
}


// ===== 0073d810  core::panicking::panic_misaligned_pointer_dereference =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_misaligned_pointer_dereference */

void __rustcall
core::panicking::panic_misaligned_pointer_dereference
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined8 *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_40;
  puStack_28 = PTR_fmt_0099f510;
  local_20 = &uStack_38;
  puStack_18 = PTR_fmt_0099f510;
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(&DAT_00467053,&local_30,0,param_3);
}


// ===== 0073d850  core::panicking::panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic */

void __rustcall core::panicking::panic(undefined8 param_1,long param_2)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(param_1,param_2 << 1 | 1);
}


// ===== 0073d864  core::panicking::panic_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_fmt */

void __rustcall
core::panicking::panic_fmt
          (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
          undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined4 uStack_140;
  char acStack_13c [44];
  undefined2 auStack_110 [4];
  char *pcStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  long lStack_f0;
  undefined2 uStack_e0;
  char *pcStack_d8;
  long lStack_d0;
  char *pcStack_c8;
  ulong uStack_c0;
  undefined2 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  ulong uStack_20;
  undefined2 local_18;
  
  local_28 = &local_38;
  local_18 = 1;
  local_38 = param_1;
  uStack_30 = param_2;
  uStack_20 = param_3;
  lVar11 = __rustc::rust_begin_unwind(&local_28);
  auVar27._8_8_ = param_4;
  auVar27._0_8_ = param_3;
  pcStack_98 = FUN_0073d88c;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar10 = *(uint *)(lVar11 + 0x10);
joined_r0x0073d98c:
    uVar26 = (ulong)uVar10;
    if ((uVar10 >> 0x1c & 1) != 0) goto LAB_0073db48;
LAB_0073d990:
    uVar14 = param_3 >> 1 | param_4 << 0x3f;
    lVar24 = 0;
    uVar25 = uVar14 + (param_4 >> 1);
    if (CARRY8(uVar14,param_4 >> 1)) {
      uVar25 = uVar25 + 1;
    }
    if ((uVar12 == 0) || (uVar14 = uVar12, (param_3 & 1) != 0 || uVar25 % 5 != 0))
    goto LAB_0073dc70;
    do {
      uVar20 = param_3 >> 1 | param_4 << 0x3f;
      param_4 = param_4 >> 1;
      uVar25 = uVar20 + param_4;
      if (CARRY8(uVar20,param_4)) {
        uVar25 = uVar25 + 1;
      }
      uVar21 = uVar20 - uVar25 % 5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar21;
      param_3 = uVar21 * -0x3333333333333333;
      uVar20 = SUB168(auVar4 * ZEXT816(0xcccccccccccccccd),8) + uVar21 * -0x3333333333333334 +
               (param_4 - (uVar20 < uVar25 % 5)) * -0x3333333333333333;
      uVar21 = param_3 >> 1 | uVar20 << 0x3f;
      uVar25 = uVar21 + (uVar20 >> 1);
      if (CARRY8(uVar21,uVar20 >> 1)) {
        uVar25 = uVar25 + 1;
      }
      uVar14 = uVar14 - 1;
    } while ((uVar14 != 0) && (param_4 = uVar20, (param_3 & 1) == 0 && uVar25 % 5 == 0));
LAB_0073da40:
    auVar27._8_8_ = uVar20;
    auVar27._0_8_ = param_3;
    uVar21 = uVar12;
joined_r0x0073e0e4:
    uVar12 = uVar14;
    lVar24 = 0;
    if (uVar12 == 0) {
LAB_0073dc7c:
      acStack_13c[0] = (char)param_3;
      lVar15 = 1;
      goto LAB_0073dc80;
    }
  }
  else {
    if (0xfffffb11d292bea4 < ~param_4 ||
        CARRY8(~param_4 + 0x4ee2d6d415b,(ulong)(param_3 < 0x85acef8100000000))) {
      uVar12 = FUN_00751444(param_3,param_4,10000000000000000,0);
      bVar1 = CARRY8(~(param_4 + (param_3 >= 10000000000000000)),
                     (ulong)(param_3 < 10000000000000000));
      if (bVar1) {
        uVar12 = param_3;
      }
      iVar18 = 0x10;
      if (bVar1) {
        iVar18 = 0;
      }
      uVar26 = uVar12 / 10000000000;
      if (uVar12 < 10000000000) {
        uVar26 = uVar12;
      }
      uVar10 = 10;
      if (uVar12 < 10000000000) {
        uVar10 = 0;
      }
      if (0xc34 < uVar26 >> 5) {
        uVar10 = uVar10 | 5;
        uVar26 = (uVar26 >> 5) / 0xc35;
      }
      iVar19 = (int)uVar26;
      uVar12 = (ulong)(uVar10 + iVar18 +
                      ((iVar19 + 0x5fff6U & iVar19 + 0x7ff9cU ^
                       iVar19 + 0xdfc18U & iVar19 + 0x7d8f0U) >> 0x11));
      uVar10 = *(uint *)(lVar11 + 0x10);
      goto joined_r0x0073d98c;
    }
    uVar12 = FUN_00751444(param_3,param_4,0x85acef8100000000,0x4ee2d6d415b);
    uVar17 = (uint)(uVar12 >> 5) & 0x7ffffff;
    uVar10 = (uint)(uVar12 * 0x53e2d7 >> 0x27);
    if (uVar17 < 0xc35) {
      uVar10 = (uint)uVar12;
    }
    iVar18 = 0x25;
    if (uVar17 < 0xc35) {
      iVar18 = 0x20;
    }
    uVar12 = (ulong)(iVar18 + ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^
                               uVar10 + 0xdfc18 & uVar10 + 0x7d8f0) >> 0x11));
    uVar26 = (ulong)*(uint *)(lVar11 + 0x10);
    if ((*(uint *)(lVar11 + 0x10) >> 0x1c & 1) == 0) goto LAB_0073d990;
LAB_0073db48:
    uVar3 = *(ushort *)(lVar11 + 0x16);
    uVar14 = (ulong)uVar3;
    uVar25 = uVar12 - uVar14;
    if (uVar14 <= uVar12 && uVar25 != 0) {
      uVar10 = (uint)uVar25;
      if ((uVar25 & 1) == 0) {
        uVar23 = 1;
LAB_0073dd8c:
        if ((uVar10 >> 1 & 1) != 0) {
          uVar21 = 0;
          uVar23 = uVar23 * 100;
          if ((uVar10 & 0xfffe) == 2) goto LAB_0073de3c;
        }
        if ((uVar10 >> 2 & 1) != 0) {
          uVar21 = 0;
          uVar23 = uVar23 * 10000;
          if ((uVar10 & 0xfffc) == 4) goto LAB_0073de3c;
        }
        if ((uVar10 >> 3 & 1) != 0) {
          uVar21 = 0;
          uVar23 = uVar23 * 100000000;
          if ((uVar10 & 0xfff8) == 8) goto LAB_0073de3c;
        }
        uVar21 = 0;
        if ((uVar10 >> 4 & 1) != 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar23;
          uVar21 = SUB168(auVar5 * ZEXT816(10000000000000000),8);
          uVar23 = uVar23 * 10000000000000000;
          if ((uVar10 & 0xfff0) == 0x10) goto LAB_0073de3c;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar23;
        lVar24 = uVar23 * 0x4ee2d6d415b;
        uVar23 = uVar23 * -0x7a53107f00000000;
        uVar21 = SUB168(auVar6 * ZEXT816(0x85acef8100000000),8) + lVar24 +
                 uVar21 * -0x7a53107f00000000;
      }
      else {
        uVar21 = 0;
        uVar23 = 10;
        if (uVar25 != 1) goto LAB_0073dd8c;
      }
LAB_0073de3c:
      auVar27 = FUN_00751444(param_3,param_4,uVar23,uVar21);
      uVar20 = auVar27._8_8_;
      uVar13 = auVar27._0_8_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar13;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar23;
      uVar22 = uVar21 >> 1;
      uVar16 = uVar23 >> 1 | uVar21 << 0x3f;
      uVar25 = param_3 - uVar13 * uVar23;
      param_4 = param_4 - (SUB168(auVar7 * auVar9,8) + uVar13 * uVar21 + uVar20 * uVar23 +
                          (ulong)(param_3 < uVar13 * uVar23));
      uVar21 = uVar12;
      param_3 = uVar13;
      if (CARRY8(param_4,~uVar22) || CARRY8(param_4 + ~uVar22,(ulong)(uVar16 <= uVar25))) {
        if (CARRY8(uVar22,~param_4) || CARRY8(uVar22 + ~param_4,(ulong)(uVar25 <= uVar16))) {
          param_3 = (uVar13 & 1) + uVar13;
          if (CARRY8(uVar13 & 1,uVar13)) {
            uVar20 = uVar20 + 1;
          }
          if ((auVar27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0073da40;
        }
        else {
          param_3 = uVar13 + 1;
          if (uVar13 == 0xffffffffffffffff) {
            uVar20 = uVar20 + 1;
          }
        }
        auVar27._8_8_ = uVar20;
        auVar27._0_8_ = param_3;
        if (param_3 == 0 && uVar20 == 0) {
          param_3 = 0;
          auVar27 = ZEXT816(0);
        }
        else if (0xfffffb11d292bea4 < ~uVar20 ||
                 CARRY8(~uVar20 + 0x4ee2d6d415b,(ulong)(param_3 < 0x85acef8100000000))) {
          uVar25 = FUN_00751444(param_3,uVar20,10000000000000000,0);
          bVar1 = CARRY8(~(uVar20 + (param_3 >= 10000000000000000)),
                         (ulong)(param_3 < 10000000000000000));
          if (bVar1) {
            uVar25 = param_3;
          }
          iVar18 = 0x10;
          if (bVar1) {
            iVar18 = 0;
          }
          uVar23 = uVar25 / 10000000000;
          if (uVar25 < 10000000000) {
            uVar23 = uVar25;
          }
          uVar10 = 10;
          if (uVar25 < 10000000000) {
            uVar10 = 0;
          }
          if (0xc34 < uVar23 >> 5) {
            uVar10 = uVar10 | 5;
            uVar23 = (uVar23 >> 5) / 0xc35;
          }
          iVar19 = (int)uVar23;
          if ((uint)uVar3 <
              uVar10 + iVar18 +
              ((iVar19 + 0x5fff6U & iVar19 + 0x7ff9cU ^ iVar19 + 0xdfc18U & iVar19 + 0x7d8f0U) >>
              0x11)) goto LAB_0073e094;
        }
        else {
          uVar25 = FUN_00751444(param_3,uVar20,0x85acef8100000000,0x4ee2d6d415b);
          uVar17 = (uint)(uVar25 >> 5) & 0x7ffffff;
          uVar10 = (uint)(uVar25 * 0x53e2d7 >> 0x27);
          if (uVar17 < 0xc35) {
            uVar10 = (uint)uVar25;
          }
          iVar18 = 0x25;
          if (uVar17 < 0xc35) {
            iVar18 = 0x20;
          }
          if ((uint)uVar3 <
              iVar18 + ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^ uVar10 + 0xdfc18 & uVar10 + 0x7d8f0)
                       >> 0x11)) {
LAB_0073e094:
            uVar21 = param_3 >> 1 | uVar20 << 0x3f;
            uVar20 = uVar20 >> 1;
            uVar25 = uVar21 + uVar20;
            if (CARRY8(uVar21,uVar20)) {
              uVar25 = uVar25 + 1;
            }
            uVar23 = uVar21 - uVar25 % 5;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar23;
            auVar27._8_8_ =
                 SUB168(auVar8 * ZEXT816(0xcccccccccccccccd),8) + uVar23 * -0x3333333333333334 +
                 (uVar20 - (uVar21 < uVar25 % 5)) * -0x3333333333333333;
            auVar27._0_8_ = uVar23 * -0x3333333333333333;
            uVar21 = uVar12 + 1;
            param_3 = uVar23 * -0x3333333333333333;
          }
        }
      }
      goto joined_r0x0073e0e4;
    }
    lVar24 = uVar14 - uVar12;
LAB_0073dc70:
    uVar21 = uVar12;
    if (uVar12 == 0 && lVar24 == 0) goto LAB_0073dc7c;
  }
  lVar15 = auVar27._0_8_;
  acStack_13c[1] = 0x2e;
  if (1 < uVar12) {
    uStack_140 = param_6;
    auVar27 = FUN_00751444(lVar15,auVar27._8_8_,100,0);
    uVar25 = uVar12;
    if (0x2a < uVar12) {
LAB_0073e0f0:
                    /* WARNING: Subroutine does not return */
      panic_bounds_check(uVar25,0x2b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba10);
    }
    lVar15 = (lVar15 + auVar27._0_8_ * -100) * 2;
    acStack_13c[uVar12] = (&DAT_004670a6)[lVar15];
    if (uVar12 == 0x2a) {
                    /* WARNING: Subroutine does not return */
      panic_bounds_check(uVar12 + 1,0x2b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba10);
    }
    acStack_13c[uVar12 + 1] = (&DAT_004670a7)[lVar15];
    uVar14 = uVar12;
    lVar15 = auVar27._0_8_;
    param_6 = uStack_140;
    if (3 < uVar12) {
      do {
        lVar15 = auVar27._0_8_;
        uVar25 = uVar14 - 2;
        if (0x2a < uVar25) goto LAB_0073e0f0;
        auVar27 = FUN_00751444(lVar15,auVar27._8_8_,100,0);
        uVar20 = uVar14 - 1;
        *(undefined2 *)(acStack_13c + (uVar14 - 2)) =
             *(undefined2 *)(&DAT_004670a6 + (lVar15 + auVar27._0_8_ * -100) * 2);
        uVar14 = uVar25;
        lVar15 = auVar27._0_8_;
        param_6 = uStack_140;
      } while (4 < uVar20);
    }
  }
  acStack_13c[0] = (char)lVar15;
  if ((uVar12 & 1) != 0) {
    uVar20 = SUB168(auVar27 >> 1,0);
    uVar25 = SUB168(auVar27 >> 1,8);
    uVar14 = uVar20 + uVar25;
    if (CARRY8(uVar20,uVar25)) {
      uVar14 = uVar14 + 1;
    }
    cVar2 = ((char)(uVar14 / 5) * '\x05' - (char)uVar14) + (char)(auVar27._0_8_ >> 1);
    acStack_13c[0] = cVar2 * -0x33;
    acStack_13c[2] = auVar27[0] + cVar2 * -2 | 0x30;
  }
  lVar15 = uVar12 + 2;
  uStack_140 = param_6;
LAB_0073dc80:
  acStack_13c[0] = acStack_13c[0] + '0';
  acStack_13c[lVar15] = (char)param_6;
  if (uVar21 < 10) {
    acStack_13c[lVar15 + 1] = (byte)uVar21 | 0x30;
    lStack_d0 = 2;
  }
  else {
    cVar2 = (&DAT_004670a6)[uVar21 * 2];
    acStack_13c[lVar15 + 2] = (&DAT_004670a7)[uVar21 * 2];
    acStack_13c[lVar15 + 1] = cVar2;
    lStack_d0 = 3;
  }
  if (lVar24 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (lVar11,param_5 & 0xffffffff,1,0,acStack_13c,lVar15 + lStack_d0);
  }
  else {
    pcStack_108 = acStack_13c;
    uStack_c0 = uVar26 >> 0x15 & 1;
    auStack_110[0] = 2;
    uStack_e0 = 2;
    pcStack_c8 = "+";
    if ((uVar26 & 0x200000) == 0) {
      pcStack_c8 = (char *)0x1;
    }
    uStack_f8 = 0;
    if ((int)param_5 == 0) {
      uStack_c0 = 1;
      pcStack_c8 = "-+";
    }
    puStack_b8 = auStack_110;
    uStack_b0 = 3;
    lStack_100 = lVar15;
    lStack_f0 = lVar24;
    pcStack_d8 = acStack_13c + lVar15;
    FUN_00739c78(lVar11,&pcStack_c8);
  }
  return;
}


// ===== 0073d88c  FUN_0073d88c =====

void FUN_0073d88c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,int param_5,
                 undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  undefined4 local_100;
  char local_fc [44];
  undefined2 local_d0 [4];
  char *local_c8;
  long lStack_c0;
  undefined2 local_b8;
  long local_b0;
  undefined2 local_a0;
  char *local_98;
  long lStack_90;
  char *local_88;
  ulong uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  
  auVar26._8_8_ = param_4;
  auVar26._0_8_ = param_3;
  if (param_3 == 0 && param_4 == 0) {
    uVar11 = 0;
    uVar10 = *(uint *)(param_1 + 0x10);
joined_r0x0073d98c:
    uVar25 = (ulong)uVar10;
    if ((uVar10 >> 0x1c & 1) != 0) goto LAB_0073db48;
LAB_0073d990:
    uVar13 = param_3 >> 1 | param_4 << 0x3f;
    lVar23 = 0;
    uVar24 = uVar13 + (param_4 >> 1);
    if (CARRY8(uVar13,param_4 >> 1)) {
      uVar24 = uVar24 + 1;
    }
    if ((uVar11 == 0) || (uVar13 = uVar11, (param_3 & 1) != 0 || uVar24 % 5 != 0))
    goto LAB_0073dc70;
    do {
      uVar19 = param_3 >> 1 | param_4 << 0x3f;
      param_4 = param_4 >> 1;
      uVar24 = uVar19 + param_4;
      if (CARRY8(uVar19,param_4)) {
        uVar24 = uVar24 + 1;
      }
      uVar20 = uVar19 - uVar24 % 5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar20;
      param_3 = uVar20 * -0x3333333333333333;
      uVar19 = SUB168(auVar4 * ZEXT816(0xcccccccccccccccd),8) + uVar20 * -0x3333333333333334 +
               (param_4 - (uVar19 < uVar24 % 5)) * -0x3333333333333333;
      uVar20 = param_3 >> 1 | uVar19 << 0x3f;
      uVar24 = uVar20 + (uVar19 >> 1);
      if (CARRY8(uVar20,uVar19 >> 1)) {
        uVar24 = uVar24 + 1;
      }
      uVar13 = uVar13 - 1;
    } while ((uVar13 != 0) && (param_4 = uVar19, (param_3 & 1) == 0 && uVar24 % 5 == 0));
LAB_0073da40:
    auVar26._8_8_ = uVar19;
    auVar26._0_8_ = param_3;
    uVar20 = uVar11;
joined_r0x0073e0e4:
    uVar11 = uVar13;
    lVar23 = 0;
    if (uVar11 == 0) {
LAB_0073dc7c:
      local_fc[0] = (char)param_3;
      lVar14 = 1;
      goto LAB_0073dc80;
    }
  }
  else {
    if (0xfffffb11d292bea4 < ~param_4 ||
        CARRY8(~param_4 + 0x4ee2d6d415b,(ulong)(param_3 < 0x85acef8100000000))) {
      uVar11 = FUN_00751444(param_3,param_4,10000000000000000,0);
      bVar1 = CARRY8(~(param_4 + (param_3 >= 10000000000000000)),
                     (ulong)(param_3 < 10000000000000000));
      if (bVar1) {
        uVar11 = param_3;
      }
      iVar17 = 0x10;
      if (bVar1) {
        iVar17 = 0;
      }
      uVar25 = uVar11 / 10000000000;
      if (uVar11 < 10000000000) {
        uVar25 = uVar11;
      }
      uVar10 = 10;
      if (uVar11 < 10000000000) {
        uVar10 = 0;
      }
      if (0xc34 < uVar25 >> 5) {
        uVar10 = uVar10 | 5;
        uVar25 = (uVar25 >> 5) / 0xc35;
      }
      iVar18 = (int)uVar25;
      uVar11 = (ulong)(uVar10 + iVar17 +
                      ((iVar18 + 0x5fff6U & iVar18 + 0x7ff9cU ^
                       iVar18 + 0xdfc18U & iVar18 + 0x7d8f0U) >> 0x11));
      uVar10 = *(uint *)(param_1 + 0x10);
      goto joined_r0x0073d98c;
    }
    uVar11 = FUN_00751444(param_3,param_4,0x85acef8100000000,0x4ee2d6d415b);
    uVar16 = (uint)(uVar11 >> 5) & 0x7ffffff;
    uVar10 = (uint)(uVar11 * 0x53e2d7 >> 0x27);
    if (uVar16 < 0xc35) {
      uVar10 = (uint)uVar11;
    }
    iVar17 = 0x25;
    if (uVar16 < 0xc35) {
      iVar17 = 0x20;
    }
    uVar11 = (ulong)(iVar17 + ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^
                               uVar10 + 0xdfc18 & uVar10 + 0x7d8f0) >> 0x11));
    uVar25 = (ulong)*(uint *)(param_1 + 0x10);
    if ((*(uint *)(param_1 + 0x10) >> 0x1c & 1) == 0) goto LAB_0073d990;
LAB_0073db48:
    uVar3 = *(ushort *)(param_1 + 0x16);
    uVar13 = (ulong)uVar3;
    uVar24 = uVar11 - uVar13;
    if (uVar13 <= uVar11 && uVar24 != 0) {
      uVar10 = (uint)uVar24;
      if ((uVar24 & 1) == 0) {
        uVar22 = 1;
LAB_0073dd8c:
        if ((uVar10 >> 1 & 1) != 0) {
          uVar20 = 0;
          uVar22 = uVar22 * 100;
          if ((uVar10 & 0xfffe) == 2) goto LAB_0073de3c;
        }
        if ((uVar10 >> 2 & 1) != 0) {
          uVar20 = 0;
          uVar22 = uVar22 * 10000;
          if ((uVar10 & 0xfffc) == 4) goto LAB_0073de3c;
        }
        if ((uVar10 >> 3 & 1) != 0) {
          uVar20 = 0;
          uVar22 = uVar22 * 100000000;
          if ((uVar10 & 0xfff8) == 8) goto LAB_0073de3c;
        }
        uVar20 = 0;
        if ((uVar10 >> 4 & 1) != 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar22;
          uVar20 = SUB168(auVar5 * ZEXT816(10000000000000000),8);
          uVar22 = uVar22 * 10000000000000000;
          if ((uVar10 & 0xfff0) == 0x10) goto LAB_0073de3c;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar22;
        lVar23 = uVar22 * 0x4ee2d6d415b;
        uVar22 = uVar22 * -0x7a53107f00000000;
        uVar20 = SUB168(auVar6 * ZEXT816(0x85acef8100000000),8) + lVar23 +
                 uVar20 * -0x7a53107f00000000;
      }
      else {
        uVar20 = 0;
        uVar22 = 10;
        if (uVar24 != 1) goto LAB_0073dd8c;
      }
LAB_0073de3c:
      auVar26 = FUN_00751444(param_3,param_4,uVar22,uVar20);
      uVar19 = auVar26._8_8_;
      uVar12 = auVar26._0_8_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar22;
      uVar21 = uVar20 >> 1;
      uVar15 = uVar22 >> 1 | uVar20 << 0x3f;
      uVar24 = param_3 - uVar12 * uVar22;
      param_4 = param_4 - (SUB168(auVar7 * auVar9,8) + uVar12 * uVar20 + uVar19 * uVar22 +
                          (ulong)(param_3 < uVar12 * uVar22));
      uVar20 = uVar11;
      param_3 = uVar12;
      if (CARRY8(param_4,~uVar21) || CARRY8(param_4 + ~uVar21,(ulong)(uVar15 <= uVar24))) {
        if (CARRY8(uVar21,~param_4) || CARRY8(uVar21 + ~param_4,(ulong)(uVar24 <= uVar15))) {
          param_3 = (uVar12 & 1) + uVar12;
          if (CARRY8(uVar12 & 1,uVar12)) {
            uVar19 = uVar19 + 1;
          }
          if ((auVar26 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0073da40;
        }
        else {
          param_3 = uVar12 + 1;
          if (uVar12 == 0xffffffffffffffff) {
            uVar19 = uVar19 + 1;
          }
        }
        auVar26._8_8_ = uVar19;
        auVar26._0_8_ = param_3;
        if (param_3 == 0 && uVar19 == 0) {
          param_3 = 0;
          auVar26 = ZEXT816(0);
        }
        else if (0xfffffb11d292bea4 < ~uVar19 ||
                 CARRY8(~uVar19 + 0x4ee2d6d415b,(ulong)(param_3 < 0x85acef8100000000))) {
          uVar24 = FUN_00751444(param_3,uVar19,10000000000000000,0);
          bVar1 = CARRY8(~(uVar19 + (param_3 >= 10000000000000000)),
                         (ulong)(param_3 < 10000000000000000));
          if (bVar1) {
            uVar24 = param_3;
          }
          iVar17 = 0x10;
          if (bVar1) {
            iVar17 = 0;
          }
          uVar22 = uVar24 / 10000000000;
          if (uVar24 < 10000000000) {
            uVar22 = uVar24;
          }
          uVar10 = 10;
          if (uVar24 < 10000000000) {
            uVar10 = 0;
          }
          if (0xc34 < uVar22 >> 5) {
            uVar10 = uVar10 | 5;
            uVar22 = (uVar22 >> 5) / 0xc35;
          }
          iVar18 = (int)uVar22;
          if ((uint)uVar3 <
              uVar10 + iVar17 +
              ((iVar18 + 0x5fff6U & iVar18 + 0x7ff9cU ^ iVar18 + 0xdfc18U & iVar18 + 0x7d8f0U) >>
              0x11)) goto LAB_0073e094;
        }
        else {
          uVar24 = FUN_00751444(param_3,uVar19,0x85acef8100000000,0x4ee2d6d415b);
          uVar16 = (uint)(uVar24 >> 5) & 0x7ffffff;
          uVar10 = (uint)(uVar24 * 0x53e2d7 >> 0x27);
          if (uVar16 < 0xc35) {
            uVar10 = (uint)uVar24;
          }
          iVar17 = 0x25;
          if (uVar16 < 0xc35) {
            iVar17 = 0x20;
          }
          if ((uint)uVar3 <
              iVar17 + ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^ uVar10 + 0xdfc18 & uVar10 + 0x7d8f0)
                       >> 0x11)) {
LAB_0073e094:
            uVar20 = param_3 >> 1 | uVar19 << 0x3f;
            uVar19 = uVar19 >> 1;
            uVar24 = uVar20 + uVar19;
            if (CARRY8(uVar20,uVar19)) {
              uVar24 = uVar24 + 1;
            }
            uVar22 = uVar20 - uVar24 % 5;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar22;
            auVar26._8_8_ =
                 SUB168(auVar8 * ZEXT816(0xcccccccccccccccd),8) + uVar22 * -0x3333333333333334 +
                 (uVar19 - (uVar20 < uVar24 % 5)) * -0x3333333333333333;
            auVar26._0_8_ = uVar22 * -0x3333333333333333;
            uVar20 = uVar11 + 1;
            param_3 = uVar22 * -0x3333333333333333;
          }
        }
      }
      goto joined_r0x0073e0e4;
    }
    lVar23 = uVar13 - uVar11;
LAB_0073dc70:
    uVar20 = uVar11;
    if (uVar11 == 0 && lVar23 == 0) goto LAB_0073dc7c;
  }
  lVar14 = auVar26._0_8_;
  local_fc[1] = 0x2e;
  if (1 < uVar11) {
    local_100 = param_6;
    auVar26 = FUN_00751444(lVar14,auVar26._8_8_,100,0);
    uVar24 = uVar11;
    if (0x2a < uVar11) {
LAB_0073e0f0:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar24,0x2b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba10);
    }
    lVar14 = (lVar14 + auVar26._0_8_ * -100) * 2;
    local_fc[uVar11] = (&DAT_004670a6)[lVar14];
    if (uVar11 == 0x2a) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar11 + 1,0x2b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba10);
    }
    local_fc[uVar11 + 1] = (&DAT_004670a7)[lVar14];
    uVar13 = uVar11;
    lVar14 = auVar26._0_8_;
    param_6 = local_100;
    if (3 < uVar11) {
      do {
        lVar14 = auVar26._0_8_;
        uVar24 = uVar13 - 2;
        if (0x2a < uVar24) goto LAB_0073e0f0;
        auVar26 = FUN_00751444(lVar14,auVar26._8_8_,100,0);
        uVar19 = uVar13 - 1;
        *(undefined2 *)(local_fc + (uVar13 - 2)) =
             *(undefined2 *)(&DAT_004670a6 + (lVar14 + auVar26._0_8_ * -100) * 2);
        uVar13 = uVar24;
        lVar14 = auVar26._0_8_;
        param_6 = local_100;
      } while (4 < uVar19);
    }
  }
  local_fc[0] = (char)lVar14;
  if ((uVar11 & 1) != 0) {
    uVar19 = SUB168(auVar26 >> 1,0);
    uVar24 = SUB168(auVar26 >> 1,8);
    uVar13 = uVar19 + uVar24;
    if (CARRY8(uVar19,uVar24)) {
      uVar13 = uVar13 + 1;
    }
    cVar2 = ((char)(uVar13 / 5) * '\x05' - (char)uVar13) + (char)(auVar26._0_8_ >> 1);
    local_fc[0] = cVar2 * -0x33;
    local_fc[2] = auVar26[0] + cVar2 * -2 | 0x30;
  }
  lVar14 = uVar11 + 2;
  local_100 = param_6;
LAB_0073dc80:
  local_fc[0] = local_fc[0] + '0';
  local_fc[lVar14] = (char)param_6;
  if (uVar20 < 10) {
    local_fc[lVar14 + 1] = (byte)uVar20 | 0x30;
    lStack_90 = 2;
  }
  else {
    cVar2 = (&DAT_004670a6)[uVar20 * 2];
    local_fc[lVar14 + 2] = (&DAT_004670a7)[uVar20 * 2];
    local_fc[lVar14 + 1] = cVar2;
    lStack_90 = 3;
  }
  if (lVar23 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_1,param_5,1,0,local_fc,lVar14 + lStack_90);
  }
  else {
    local_c8 = local_fc;
    uStack_80 = uVar25 >> 0x15 & 1;
    local_d0[0] = 2;
    local_a0 = 2;
    local_88 = "+";
    if ((uVar25 & 0x200000) == 0) {
      local_88 = (char *)0x1;
    }
    local_b8 = 0;
    if (param_5 == 0) {
      uStack_80 = 1;
      local_88 = "-+";
    }
    local_78 = local_d0;
    uStack_70 = 3;
    lStack_c0 = lVar14;
    local_b0 = lVar23;
    local_98 = local_fc + lVar14;
    FUN_00739c78(param_1,&local_88);
  }
  return;
}


// ===== 0073e114  core::str::count::do_count_chars =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::count::do_count_chars */

long __rustcall core::str::count::do_count_chars(char *param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  uint3 uVar5;
  uint3 uVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  byte bVar23;
  long lVar22;
  byte bVar25;
  long lVar24;
  byte bVar26;
  byte bVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  ulong uVar46;
  byte bVar49;
  ulong uVar47;
  long lVar48;
  ulong uVar50;
  byte bVar54;
  ulong uVar51;
  long lVar52;
  long lVar53;
  ulong uVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  undefined8 uVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  long lVar63;
  ulong uVar65;
  long lVar66;
  ulong uVar68;
  byte bVar70;
  long lVar69;
  ulong uVar71;
  byte bVar73;
  long lVar72;
  ulong uVar74;
  byte bVar76;
  byte bVar77;
  long lVar75;
  ulong uVar78;
  byte bVar80;
  byte bVar81;
  long lVar79;
  ulong uVar82;
  byte bVar84;
  long lVar83;
  ulong uVar85;
  byte bVar87;
  long lVar86;
  ulong uVar88;
  byte bVar90;
  long lVar89;
  ulong uVar91;
  byte bVar93;
  long lVar92;
  long lVar94;
  long lVar95;
  byte bVar97;
  long lVar96;
  byte bVar99;
  long lVar98;
  byte bVar102;
  ulong uVar100;
  long lVar101;
  byte bVar105;
  ulong uVar103;
  long lVar104;
  byte bVar108;
  ulong uVar106;
  long lVar107;
  byte bVar111;
  ulong uVar109;
  long lVar110;
  byte bVar114;
  ulong uVar112;
  long lVar113;
  byte bVar117;
  ulong uVar115;
  long lVar116;
  ulong uVar118;
  ulong uVar119;
  byte bVar121;
  undefined1 auVar120 [16];
  undefined1 auVar122 [16];
  ulong uVar123;
  ulong uVar124;
  ulong uVar125;
  ulong uVar126;
  ulong uVar127;
  ulong uVar128;
  ulong uVar129;
  ulong uVar131;
  byte bVar64;
  byte bVar67;
  byte bVar130;
  byte bVar132;
  
  pcVar17 = (char *)((ulong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar16 = (long)pcVar17 - (long)param_1;
  uVar15 = param_2 - uVar16;
  if ((uVar16 <= param_2) && (uVar11 = uVar15 >> 3, uVar11 != 0)) {
    uVar13 = uVar15 & 7;
    lVar9 = 0;
    if (pcVar17 != param_1) {
      lVar14 = (long)param_1 - (long)pcVar17;
      pcVar17 = param_1;
      do {
        iVar12 = (int)*pcVar17;
        if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
          lVar9 = lVar9 + 1;
        }
        bVar7 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        pcVar17 = pcVar17 + 1;
      } while (bVar7);
    }
    if (uVar13 == 0) {
      uVar15 = 0;
    }
    else {
      pcVar17 = (char *)((long)(param_1 + uVar16) + (uVar15 & 0x7ffffffffffffff8));
      iVar12 = (int)*pcVar17;
      uVar15 = (ulong)(iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41));
      if (uVar13 != 1) {
        iVar12 = (int)pcVar17[1];
        if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
          uVar15 = uVar15 + 1;
        }
        if (uVar13 != 2) {
          iVar12 = (int)pcVar17[2];
          if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
            uVar15 = uVar15 + 1;
          }
          if (uVar13 != 3) {
            iVar12 = (int)pcVar17[3];
            if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
              uVar15 = uVar15 + 1;
            }
            if (uVar13 != 4) {
              iVar12 = (int)pcVar17[4];
              if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
                uVar15 = uVar15 + 1;
              }
              if (uVar13 != 5) {
                iVar12 = (int)pcVar17[5];
                if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
                  uVar15 = uVar15 + 1;
                }
                if ((uVar13 != 6) &&
                   (iVar12 = (int)pcVar17[6],
                   iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41))) {
                  uVar15 = uVar15 + 1;
                }
              }
            }
          }
        }
      }
    }
    lVar9 = uVar15 + lVar9;
    puVar19 = (ulong *)(param_1 + uVar16);
    do {
      puVar18 = puVar19;
      if (uVar11 == 0) {
        return lVar9;
      }
      uVar15 = uVar11;
      if (0xbf < uVar11) {
        uVar15 = 0xc0;
      }
      uVar16 = uVar15 * 8 & 0x7e0;
      if (uVar16 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar15 * 8 - 0x20;
        if (uVar13 < 0x60) {
          uVar13 = 0;
          puVar19 = puVar18;
        }
        else {
          lVar14 = 0;
          lVar20 = 0;
          lVar22 = 0;
          lVar24 = 0;
          uVar3 = (uVar13 >> 5) + 1;
          uVar13 = uVar3 & 0xffffffffffffffc;
          puVar19 = puVar18 + (uVar3 & 0xffffffffffffffc) * 4;
          puVar8 = puVar18 + 8;
          do {
            uVar68 = *puVar8;
            uVar74 = puVar8[1];
            uVar82 = puVar8[2];
            uVar88 = puVar8[3];
            uVar71 = puVar8[4];
            uVar78 = puVar8[5];
            uVar85 = puVar8[6];
            uVar91 = puVar8[7];
            uVar13 = uVar13 - 4;
            uVar4 = puVar8[-8];
            bVar23 = (byte)(uVar4 >> 0x38);
            uVar46 = puVar8[-7];
            uVar55 = puVar8[-6];
            uVar51 = puVar8[-5];
            uVar21 = puVar8[-4];
            bVar25 = (byte)(uVar21 >> 0x38);
            uVar50 = puVar8[-3];
            uVar47 = puVar8[-2];
            uVar60 = puVar8[-1];
            bVar70 = (byte)(uVar68 >> 0x38);
            bVar64 = ~bVar70;
            uVar62 = CONCAT17(bVar64,CONCAT16(~(byte)(uVar68 >> 0x30),
                                              CONCAT15(~(byte)(uVar68 >> 0x28),
                                                       CONCAT14(~(byte)(uVar68 >> 0x20),
                                                                CONCAT13(~(byte)(uVar68 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar68 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar68 >> 8),~(byte)uVar68)))))));
            bVar73 = (byte)(uVar71 >> 0x38);
            bVar67 = ~bVar73;
            uVar65 = CONCAT17(bVar67,CONCAT16(~(byte)(uVar71 >> 0x30),
                                              CONCAT15(~(byte)(uVar71 >> 0x28),
                                                       CONCAT14(~(byte)(uVar71 >> 0x20),
                                                                CONCAT13(~(byte)(uVar71 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar71 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar71 >> 8),~(byte)uVar71)))))));
            bVar76 = (byte)(uVar74 >> 0x38);
            bVar97 = ~bVar76;
            bVar80 = (byte)(uVar78 >> 0x38);
            bVar99 = ~bVar80;
            bVar84 = (byte)(uVar82 >> 0x38);
            bVar121 = ~bVar84;
            auVar122._0_8_ =
                 CONCAT17(bVar121,CONCAT16(~(byte)(uVar82 >> 0x30),
                                           CONCAT15(~(byte)(uVar82 >> 0x28),
                                                    CONCAT14(~(byte)(uVar82 >> 0x20),
                                                             CONCAT13(~(byte)(uVar82 >> 0x18),
                                                                      CONCAT12(~(byte)(uVar82 >>
                                                                                      0x10),
                                                                               CONCAT11(~(byte)(
                                                  uVar82 >> 8),~(byte)uVar82)))))));
            auVar122[8] = ~(byte)uVar85;
            auVar122[9] = ~(byte)(uVar85 >> 8);
            auVar122[10] = ~(byte)(uVar85 >> 0x10);
            auVar122[0xb] = ~(byte)(uVar85 >> 0x18);
            auVar122[0xc] = ~(byte)(uVar85 >> 0x20);
            auVar122[0xd] = ~(byte)(uVar85 >> 0x28);
            auVar122[0xe] = ~(byte)(uVar85 >> 0x30);
            bVar87 = (byte)(uVar85 >> 0x38);
            auVar122[0xf] = ~bVar87;
            bVar102 = ~bVar23;
            bVar105 = ~bVar25;
            bVar26 = (byte)(uVar46 >> 0x38);
            bVar108 = ~bVar26;
            bVar27 = (byte)(uVar50 >> 0x38);
            bVar111 = ~bVar27;
            bVar35 = (byte)(uVar55 >> 0x38);
            bVar114 = ~bVar35;
            bVar44 = (byte)(uVar47 >> 0x38);
            bVar117 = ~bVar44;
            uVar68 = uVar68 >> 6;
            uVar71 = uVar71 >> 6;
            uVar118 = uVar74 >> 6;
            uVar119 = uVar78 >> 6;
            uVar82 = uVar82 >> 6;
            uVar85 = uVar85 >> 6;
            uVar123 = uVar4 >> 6;
            uVar124 = uVar21 >> 6;
            uVar125 = uVar46 >> 6;
            uVar126 = uVar50 >> 6;
            uVar127 = uVar55 >> 6;
            uVar128 = uVar47 >> 6;
            uVar100 = CONCAT17(bVar102,CONCAT16(~(byte)(uVar4 >> 0x30),
                                                CONCAT15(~(byte)(uVar4 >> 0x28),
                                                         CONCAT14(~(byte)(uVar4 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar4 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar4 >>
                                                                                           0x10),
                                                                                    CONCAT11(~(byte)
                                                  (uVar4 >> 8),~(byte)uVar4))))))) >> 7;
            uVar103 = CONCAT17(bVar105,CONCAT16(~(byte)(uVar21 >> 0x30),
                                                CONCAT15(~(byte)(uVar21 >> 0x28),
                                                         CONCAT14(~(byte)(uVar21 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar21 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar21 
                                                  >> 0x10),CONCAT11(~(byte)(uVar21 >> 8),
                                                                    ~(byte)uVar21))))))) >> 7;
            uVar106 = CONCAT17(bVar108,CONCAT16(~(byte)(uVar46 >> 0x30),
                                                CONCAT15(~(byte)(uVar46 >> 0x28),
                                                         CONCAT14(~(byte)(uVar46 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar46 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar46 
                                                  >> 0x10),CONCAT11(~(byte)(uVar46 >> 8),
                                                                    ~(byte)uVar46))))))) >> 7;
            uVar109 = CONCAT17(bVar111,CONCAT16(~(byte)(uVar50 >> 0x30),
                                                CONCAT15(~(byte)(uVar50 >> 0x28),
                                                         CONCAT14(~(byte)(uVar50 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar50 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar50 
                                                  >> 0x10),CONCAT11(~(byte)(uVar50 >> 8),
                                                                    ~(byte)uVar50))))))) >> 7;
            uVar112 = CONCAT17(bVar114,CONCAT16(~(byte)(uVar55 >> 0x30),
                                                CONCAT15(~(byte)(uVar55 >> 0x28),
                                                         CONCAT14(~(byte)(uVar55 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar55 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar55 
                                                  >> 0x10),CONCAT11(~(byte)(uVar55 >> 8),
                                                                    ~(byte)uVar55))))))) >> 7;
            uVar115 = CONCAT17(bVar117,CONCAT16(~(byte)(uVar47 >> 0x30),
                                                CONCAT15(~(byte)(uVar47 >> 0x28),
                                                         CONCAT14(~(byte)(uVar47 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar47 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar47 
                                                  >> 0x10),CONCAT11(~(byte)(uVar47 >> 8),
                                                                    ~(byte)uVar47))))))) >> 7;
            uVar55 = CONCAT17(bVar97,CONCAT16(~(byte)(uVar74 >> 0x30),
                                              CONCAT15(~(byte)(uVar74 >> 0x28),
                                                       CONCAT14(~(byte)(uVar74 >> 0x20),
                                                                CONCAT13(~(byte)(uVar74 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar74 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar74 >> 8),~(byte)uVar74))))))) >> 7;
            uVar47 = CONCAT17(bVar99,CONCAT16(~(byte)(uVar78 >> 0x30),
                                              CONCAT15(~(byte)(uVar78 >> 0x28),
                                                       CONCAT14(~(byte)(uVar78 >> 0x20),
                                                                CONCAT13(~(byte)(uVar78 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar78 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar78 >> 8),~(byte)uVar78))))))) >> 7;
            uVar74 = auVar122._0_8_ >> 7;
            uVar78 = auVar122._8_8_ >> 7;
            bVar90 = (byte)(uVar88 >> 0x38);
            bVar130 = ~bVar90;
            uVar129 = CONCAT17(bVar130,CONCAT16(~(byte)(uVar88 >> 0x30),
                                                CONCAT15(~(byte)(uVar88 >> 0x28),
                                                         CONCAT14(~(byte)(uVar88 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar88 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar88 
                                                  >> 0x10),CONCAT11(~(byte)(uVar88 >> 8),
                                                                    ~(byte)uVar88)))))));
            bVar93 = (byte)(uVar91 >> 0x38);
            bVar132 = ~bVar93;
            uVar131 = CONCAT17(bVar132,CONCAT16(~(byte)(uVar91 >> 0x30),
                                                CONCAT15(~(byte)(uVar91 >> 0x28),
                                                         CONCAT14(~(byte)(uVar91 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar91 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar91 
                                                  >> 0x10),CONCAT11(~(byte)(uVar91 >> 8),
                                                                    ~(byte)uVar91)))))));
            uVar88 = uVar88 >> 6;
            uVar91 = uVar91 >> 6;
            bVar49 = (byte)(uVar51 >> 0x38);
            bVar77 = ~bVar49;
            bVar54 = (byte)(uVar60 >> 0x38);
            bVar81 = ~bVar54;
            uVar4 = uVar51 >> 6;
            uVar21 = uVar60 >> 6;
            uVar46 = CONCAT17(bVar77,CONCAT16(~(byte)(uVar51 >> 0x30),
                                              CONCAT15(~(byte)(uVar51 >> 0x28),
                                                       CONCAT14(~(byte)(uVar51 >> 0x20),
                                                                CONCAT13(~(byte)(uVar51 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar51 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar51 >> 8),~(byte)uVar51))))))) >> 7;
            uVar50 = CONCAT17(bVar81,CONCAT16(~(byte)(uVar60 >> 0x30),
                                              CONCAT15(~(byte)(uVar60 >> 0x28),
                                                       CONCAT14(~(byte)(uVar60 >> 0x20),
                                                                CONCAT13(~(byte)(uVar60 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar60 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar60 >> 8),~(byte)uVar60))))))) >> 7;
            lVar14 = (CONCAT17(bVar77 >> 7 | bVar49 >> 6,
                               CONCAT16((byte)(uVar46 >> 0x30) | (byte)(uVar4 >> 0x30),
                                        CONCAT15((byte)(uVar46 >> 0x28) | (byte)(uVar4 >> 0x28),
                                                 CONCAT14((byte)(uVar46 >> 0x20) |
                                                          (byte)(uVar4 >> 0x20),
                                                          CONCAT13((byte)(uVar46 >> 0x18) |
                                                                   (byte)(uVar4 >> 0x18),
                                                                   CONCAT12((byte)(uVar46 >> 0x10) |
                                                                            (byte)(uVar4 >> 0x10),
                                                                            CONCAT11((byte)(uVar46 
                                                  >> 8) | (byte)(uVar4 >> 8),
                                                  (byte)uVar46 | (byte)uVar4))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar114 >> 7 | bVar35 >> 6,
                               CONCAT16((byte)(uVar112 >> 0x30) | (byte)(uVar127 >> 0x30),
                                        CONCAT15((byte)(uVar112 >> 0x28) | (byte)(uVar127 >> 0x28),
                                                 CONCAT14((byte)(uVar112 >> 0x20) |
                                                          (byte)(uVar127 >> 0x20),
                                                          CONCAT13((byte)(uVar112 >> 0x18) |
                                                                   (byte)(uVar127 >> 0x18),
                                                                   CONCAT12((byte)(uVar112 >> 0x10)
                                                                            | (byte)(uVar127 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar112 
                                                  >> 8) | (byte)(uVar127 >> 8),
                                                  (byte)uVar112 | (byte)uVar127))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar108 >> 7 | bVar26 >> 6,
                               CONCAT16((byte)(uVar106 >> 0x30) | (byte)(uVar125 >> 0x30),
                                        CONCAT15((byte)(uVar106 >> 0x28) | (byte)(uVar125 >> 0x28),
                                                 CONCAT14((byte)(uVar106 >> 0x20) |
                                                          (byte)(uVar125 >> 0x20),
                                                          CONCAT13((byte)(uVar106 >> 0x18) |
                                                                   (byte)(uVar125 >> 0x18),
                                                                   CONCAT12((byte)(uVar106 >> 0x10)
                                                                            | (byte)(uVar125 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar106 
                                                  >> 8) | (byte)(uVar125 >> 8),
                                                  (byte)uVar106 | (byte)uVar125))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar102 >> 7 | bVar23 >> 6,
                               CONCAT16((byte)(uVar100 >> 0x30) | (byte)(uVar123 >> 0x30),
                                        CONCAT15((byte)(uVar100 >> 0x28) | (byte)(uVar123 >> 0x28),
                                                 CONCAT14((byte)(uVar100 >> 0x20) |
                                                          (byte)(uVar123 >> 0x20),
                                                          CONCAT13((byte)(uVar100 >> 0x18) |
                                                                   (byte)(uVar123 >> 0x18),
                                                                   CONCAT12((byte)(uVar100 >> 0x10)
                                                                            | (byte)(uVar123 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar100 
                                                  >> 8) | (byte)(uVar123 >> 8),
                                                  (byte)uVar100 | (byte)uVar123))))))) &
                     0x101010101010101) + lVar14;
            lVar20 = (CONCAT17(bVar81 >> 7 | bVar54 >> 6,
                               CONCAT16((byte)(uVar50 >> 0x30) | (byte)(uVar21 >> 0x30),
                                        CONCAT15((byte)(uVar50 >> 0x28) | (byte)(uVar21 >> 0x28),
                                                 CONCAT14((byte)(uVar50 >> 0x20) |
                                                          (byte)(uVar21 >> 0x20),
                                                          CONCAT13((byte)(uVar50 >> 0x18) |
                                                                   (byte)(uVar21 >> 0x18),
                                                                   CONCAT12((byte)(uVar50 >> 0x10) |
                                                                            (byte)(uVar21 >> 0x10),
                                                                            CONCAT11((byte)(uVar50 
                                                  >> 8) | (byte)(uVar21 >> 8),
                                                  (byte)uVar50 | (byte)uVar21))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar117 >> 7 | bVar44 >> 6,
                               CONCAT16((byte)(uVar115 >> 0x30) | (byte)(uVar128 >> 0x30),
                                        CONCAT15((byte)(uVar115 >> 0x28) | (byte)(uVar128 >> 0x28),
                                                 CONCAT14((byte)(uVar115 >> 0x20) |
                                                          (byte)(uVar128 >> 0x20),
                                                          CONCAT13((byte)(uVar115 >> 0x18) |
                                                                   (byte)(uVar128 >> 0x18),
                                                                   CONCAT12((byte)(uVar115 >> 0x10)
                                                                            | (byte)(uVar128 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar115 
                                                  >> 8) | (byte)(uVar128 >> 8),
                                                  (byte)uVar115 | (byte)uVar128))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar111 >> 7 | bVar27 >> 6,
                               CONCAT16((byte)(uVar109 >> 0x30) | (byte)(uVar126 >> 0x30),
                                        CONCAT15((byte)(uVar109 >> 0x28) | (byte)(uVar126 >> 0x28),
                                                 CONCAT14((byte)(uVar109 >> 0x20) |
                                                          (byte)(uVar126 >> 0x20),
                                                          CONCAT13((byte)(uVar109 >> 0x18) |
                                                                   (byte)(uVar126 >> 0x18),
                                                                   CONCAT12((byte)(uVar109 >> 0x10)
                                                                            | (byte)(uVar126 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar109 
                                                  >> 8) | (byte)(uVar126 >> 8),
                                                  (byte)uVar109 | (byte)uVar126))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar105 >> 7 | bVar25 >> 6,
                               CONCAT16((byte)(uVar103 >> 0x30) | (byte)(uVar124 >> 0x30),
                                        CONCAT15((byte)(uVar103 >> 0x28) | (byte)(uVar124 >> 0x28),
                                                 CONCAT14((byte)(uVar103 >> 0x20) |
                                                          (byte)(uVar124 >> 0x20),
                                                          CONCAT13((byte)(uVar103 >> 0x18) |
                                                                   (byte)(uVar124 >> 0x18),
                                                                   CONCAT12((byte)(uVar103 >> 0x10)
                                                                            | (byte)(uVar124 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar103 
                                                  >> 8) | (byte)(uVar124 >> 8),
                                                  (byte)uVar103 | (byte)uVar124))))))) &
                     0x101010101010101) + lVar20;
            lVar22 = (CONCAT17(bVar130 >> 7 | bVar90 >> 6,
                               CONCAT16((byte)(ushort)(uVar129 >> 0x37) | (byte)(uVar88 >> 0x30),
                                        CONCAT15((byte)(uint3)(uVar129 >> 0x2f) |
                                                 (byte)(uVar88 >> 0x28),
                                                 CONCAT14((byte)(uint)(uVar129 >> 0x27) |
                                                          (byte)(uVar88 >> 0x20),
                                                          CONCAT13((byte)(uint5)(uVar129 >> 0x1f) |
                                                                   (byte)(uVar88 >> 0x18),
                                                                   CONCAT12((byte)(uint6)(uVar129 >>
                                                                                         0x17) |
                                                                            (byte)(uVar88 >> 0x10),
                                                                            CONCAT11((byte)(uint7)(
                                                  uVar129 >> 0xf) | (byte)(uVar88 >> 8),
                                                  (byte)(uVar129 >> 7) | (byte)uVar88))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar121 >> 7 | bVar84 >> 6,
                               CONCAT16((byte)(uVar74 >> 0x30) | (byte)(uVar82 >> 0x30),
                                        CONCAT15((byte)(uVar74 >> 0x28) | (byte)(uVar82 >> 0x28),
                                                 CONCAT14((byte)(uVar74 >> 0x20) |
                                                          (byte)(uVar82 >> 0x20),
                                                          CONCAT13((byte)(uVar74 >> 0x18) |
                                                                   (byte)(uVar82 >> 0x18),
                                                                   CONCAT12((byte)(uVar74 >> 0x10) |
                                                                            (byte)(uVar82 >> 0x10),
                                                                            CONCAT11((byte)(uVar74 
                                                  >> 8) | (byte)(uVar82 >> 8),
                                                  (byte)uVar74 | (byte)uVar82))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar97 >> 7 | bVar76 >> 6,
                               CONCAT16((byte)(uVar55 >> 0x30) | (byte)(uVar118 >> 0x30),
                                        CONCAT15((byte)(uVar55 >> 0x28) | (byte)(uVar118 >> 0x28),
                                                 CONCAT14((byte)(uVar55 >> 0x20) |
                                                          (byte)(uVar118 >> 0x20),
                                                          CONCAT13((byte)(uVar55 >> 0x18) |
                                                                   (byte)(uVar118 >> 0x18),
                                                                   CONCAT12((byte)(uVar55 >> 0x10) |
                                                                            (byte)(uVar118 >> 0x10),
                                                                            CONCAT11((byte)(uVar55 
                                                  >> 8) | (byte)(uVar118 >> 8),
                                                  (byte)uVar55 | (byte)uVar118))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar64 >> 7 | bVar70 >> 6,
                               CONCAT16((byte)(ushort)(uVar62 >> 0x37) | (byte)(uVar68 >> 0x30),
                                        CONCAT15((byte)(uint3)(uVar62 >> 0x2f) |
                                                 (byte)(uVar68 >> 0x28),
                                                 CONCAT14((byte)(uint)(uVar62 >> 0x27) |
                                                          (byte)(uVar68 >> 0x20),
                                                          CONCAT13((byte)(uint5)(uVar62 >> 0x1f) |
                                                                   (byte)(uVar68 >> 0x18),
                                                                   CONCAT12((byte)(uint6)(uVar62 >>
                                                                                         0x17) |
                                                                            (byte)(uVar68 >> 0x10),
                                                                            CONCAT11((byte)(uint7)(
                                                  uVar62 >> 0xf) | (byte)(uVar68 >> 8),
                                                  (byte)(uVar62 >> 7) | (byte)uVar68))))))) &
                     0x101010101010101) + lVar22;
            lVar24 = (CONCAT17(bVar132 >> 7 | bVar93 >> 6,
                               CONCAT16((byte)(ushort)(uVar131 >> 0x37) | (byte)(uVar91 >> 0x30),
                                        CONCAT15((byte)(uint3)(uVar131 >> 0x2f) |
                                                 (byte)(uVar91 >> 0x28),
                                                 CONCAT14((byte)(uint)(uVar131 >> 0x27) |
                                                          (byte)(uVar91 >> 0x20),
                                                          CONCAT13((byte)(uint5)(uVar131 >> 0x1f) |
                                                                   (byte)(uVar91 >> 0x18),
                                                                   CONCAT12((byte)(uint6)(uVar131 >>
                                                                                         0x17) |
                                                                            (byte)(uVar91 >> 0x10),
                                                                            CONCAT11((byte)(uint7)(
                                                  uVar131 >> 0xf) | (byte)(uVar91 >> 8),
                                                  (byte)(uVar131 >> 7) | (byte)uVar91))))))) &
                     0x101010101010101) +
                     (CONCAT17(auVar122[0xf] >> 7 | bVar87 >> 6,
                               CONCAT16((byte)(uVar78 >> 0x30) | (byte)(uVar85 >> 0x30),
                                        CONCAT15((byte)(uVar78 >> 0x28) | (byte)(uVar85 >> 0x28),
                                                 CONCAT14((byte)(uVar78 >> 0x20) |
                                                          (byte)(uVar85 >> 0x20),
                                                          CONCAT13((byte)(uVar78 >> 0x18) |
                                                                   (byte)(uVar85 >> 0x18),
                                                                   CONCAT12((byte)(uVar78 >> 0x10) |
                                                                            (byte)(uVar85 >> 0x10),
                                                                            CONCAT11((byte)(uVar78 
                                                  >> 8) | (byte)(uVar85 >> 8),
                                                  (byte)uVar78 | (byte)uVar85))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar99 >> 7 | bVar80 >> 6,
                               CONCAT16((byte)(uVar47 >> 0x30) | (byte)(uVar119 >> 0x30),
                                        CONCAT15((byte)(uVar47 >> 0x28) | (byte)(uVar119 >> 0x28),
                                                 CONCAT14((byte)(uVar47 >> 0x20) |
                                                          (byte)(uVar119 >> 0x20),
                                                          CONCAT13((byte)(uVar47 >> 0x18) |
                                                                   (byte)(uVar119 >> 0x18),
                                                                   CONCAT12((byte)(uVar47 >> 0x10) |
                                                                            (byte)(uVar119 >> 0x10),
                                                                            CONCAT11((byte)(uVar47 
                                                  >> 8) | (byte)(uVar119 >> 8),
                                                  (byte)uVar47 | (byte)uVar119))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar67 >> 7 | bVar73 >> 6,
                               CONCAT16((byte)(ushort)(uVar65 >> 0x37) | (byte)(uVar71 >> 0x30),
                                        CONCAT15((byte)(uint3)(uVar65 >> 0x2f) |
                                                 (byte)(uVar71 >> 0x28),
                                                 CONCAT14((byte)(uint)(uVar65 >> 0x27) |
                                                          (byte)(uVar71 >> 0x20),
                                                          CONCAT13((byte)(uint5)(uVar65 >> 0x1f) |
                                                                   (byte)(uVar71 >> 0x18),
                                                                   CONCAT12((byte)(uint6)(uVar65 >>
                                                                                         0x17) |
                                                                            (byte)(uVar71 >> 0x10),
                                                                            CONCAT11((byte)(uint7)(
                                                  uVar65 >> 0xf) | (byte)(uVar71 >> 8),
                                                  (byte)(uVar65 >> 7) | (byte)uVar71))))))) &
                     0x101010101010101) + lVar24;
            puVar8 = puVar8 + 0x10;
          } while (uVar13 != 0);
          uVar13 = lVar22 + lVar14 + lVar24 + lVar20;
          if (uVar3 == (uVar3 & 0xffffffffffffffc)) goto LAB_0073e244;
        }
        do {
          puVar8 = puVar19 + 4;
          uVar55 = puVar19[1];
          uVar50 = *puVar19;
          uVar46 = puVar19[3];
          uVar21 = puVar19[2];
          bVar23 = (byte)(uVar21 >> 0x38);
          bVar35 = ~bVar23;
          bVar25 = (byte)(uVar46 >> 0x38);
          bVar44 = ~bVar25;
          bVar26 = (byte)(uVar50 >> 0x38);
          bVar49 = ~bVar26;
          bVar27 = (byte)(uVar55 >> 0x38);
          bVar54 = ~bVar27;
          uVar3 = CONCAT17(bVar35,CONCAT16(~(byte)(uVar21 >> 0x30),
                                           CONCAT15(~(byte)(uVar21 >> 0x28),
                                                    CONCAT14(~(byte)(uVar21 >> 0x20),
                                                             CONCAT13(~(byte)(uVar21 >> 0x18),
                                                                      CONCAT12(~(byte)(uVar21 >>
                                                                                      0x10),
                                                                               CONCAT11(~(byte)(
                                                  uVar21 >> 8),~(byte)uVar21))))))) >> 7;
          uVar4 = CONCAT17(bVar44,CONCAT16(~(byte)(uVar46 >> 0x30),
                                           CONCAT15(~(byte)(uVar46 >> 0x28),
                                                    CONCAT14(~(byte)(uVar46 >> 0x20),
                                                             CONCAT13(~(byte)(uVar46 >> 0x18),
                                                                      CONCAT12(~(byte)(uVar46 >>
                                                                                      0x10),
                                                                               CONCAT11(~(byte)(
                                                  uVar46 >> 8),~(byte)uVar46))))))) >> 7;
          uVar47 = CONCAT17(bVar49,CONCAT16(~(byte)(uVar50 >> 0x30),
                                            CONCAT15(~(byte)(uVar50 >> 0x28),
                                                     CONCAT14(~(byte)(uVar50 >> 0x20),
                                                              CONCAT13(~(byte)(uVar50 >> 0x18),
                                                                       CONCAT12(~(byte)(uVar50 >>
                                                                                       0x10),
                                                                                CONCAT11(~(byte)(
                                                  uVar50 >> 8),~(byte)uVar50))))))) >> 7;
          uVar51 = CONCAT17(bVar54,CONCAT16(~(byte)(uVar55 >> 0x30),
                                            CONCAT15(~(byte)(uVar55 >> 0x28),
                                                     CONCAT14(~(byte)(uVar55 >> 0x20),
                                                              CONCAT13(~(byte)(uVar55 >> 0x18),
                                                                       CONCAT12(~(byte)(uVar55 >>
                                                                                       0x10),
                                                                                CONCAT11(~(byte)(
                                                  uVar55 >> 8),~(byte)uVar55))))))) >> 7;
          uVar13 = (CONCAT17(bVar49 >> 7 | bVar26 >> 6,
                             CONCAT16((byte)(uVar47 >> 0x30) | (byte)(ushort)(uVar50 >> 0x36),
                                      CONCAT15((byte)(uVar47 >> 0x28) |
                                               (byte)(uint3)(uVar50 >> 0x2e),
                                               CONCAT14((byte)(uVar47 >> 0x20) |
                                                        (byte)(uint)(uVar50 >> 0x26),
                                                        CONCAT13((byte)(uVar47 >> 0x18) |
                                                                 (byte)(uint5)(uVar50 >> 0x1e),
                                                                 CONCAT12((byte)(uVar47 >> 0x10) |
                                                                          (byte)(uint6)(uVar50 >>
                                                                                       0x16),
                                                                          CONCAT11((byte)(uVar47 >>
                                                                                         8) |
                                                                                   (byte)(uint7)(
                                                  uVar50 >> 0xe),(byte)uVar47 | (byte)(uVar50 >> 6))
                                                  )))))) & 0x101010101010101) +
                   (CONCAT17(bVar35 >> 7 | bVar23 >> 6,
                             CONCAT16((byte)(uVar3 >> 0x30) | (byte)(ushort)(uVar21 >> 0x36),
                                      CONCAT15((byte)(uVar3 >> 0x28) | (byte)(uint3)(uVar21 >> 0x2e)
                                               ,CONCAT14((byte)(uVar3 >> 0x20) |
                                                         (byte)(uint)(uVar21 >> 0x26),
                                                         CONCAT13((byte)(uVar3 >> 0x18) |
                                                                  (byte)(uint5)(uVar21 >> 0x1e),
                                                                  CONCAT12((byte)(uVar3 >> 0x10) |
                                                                           (byte)(uint6)(uVar21 >>
                                                                                        0x16),
                                                                           CONCAT11((byte)(uVar3 >> 
                                                  8) | (byte)(uint7)(uVar21 >> 0xe),
                                                  (byte)uVar3 | (byte)(uVar21 >> 6)))))))) &
                   0x101010101010101) +
                   (CONCAT17(bVar54 >> 7 | bVar27 >> 6,
                             CONCAT16((byte)(uVar51 >> 0x30) | (byte)(ushort)(uVar55 >> 0x36),
                                      CONCAT15((byte)(uVar51 >> 0x28) |
                                               (byte)(uint3)(uVar55 >> 0x2e),
                                               CONCAT14((byte)(uVar51 >> 0x20) |
                                                        (byte)(uint)(uVar55 >> 0x26),
                                                        CONCAT13((byte)(uVar51 >> 0x18) |
                                                                 (byte)(uint5)(uVar55 >> 0x1e),
                                                                 CONCAT12((byte)(uVar51 >> 0x10) |
                                                                          (byte)(uint6)(uVar55 >>
                                                                                       0x16),
                                                                          CONCAT11((byte)(uVar51 >>
                                                                                         8) |
                                                                                   (byte)(uint7)(
                                                  uVar55 >> 0xe),(byte)uVar51 | (byte)(uVar55 >> 6))
                                                  )))))) & 0x101010101010101) +
                   (CONCAT17(bVar44 >> 7 | bVar25 >> 6,
                             CONCAT16((byte)(uVar4 >> 0x30) | (byte)(ushort)(uVar46 >> 0x36),
                                      CONCAT15((byte)(uVar4 >> 0x28) | (byte)(uint3)(uVar46 >> 0x2e)
                                               ,CONCAT14((byte)(uVar4 >> 0x20) |
                                                         (byte)(uint)(uVar46 >> 0x26),
                                                         CONCAT13((byte)(uVar4 >> 0x18) |
                                                                  (byte)(uint5)(uVar46 >> 0x1e),
                                                                  CONCAT12((byte)(uVar4 >> 0x10) |
                                                                           (byte)(uint6)(uVar46 >>
                                                                                        0x16),
                                                                           CONCAT11((byte)(uVar4 >> 
                                                  8) | (byte)(uint7)(uVar46 >> 0xe),
                                                  (byte)uVar4 | (byte)(uVar46 >> 6)))))))) &
                   0x101010101010101) + uVar13;
          puVar19 = puVar8;
        } while (puVar8 != (ulong *)((long)puVar18 + uVar16));
      }
LAB_0073e244:
      uVar11 = uVar11 - uVar15;
      uVar16 = uVar15 & 3;
      lVar9 = lVar9 + (((uVar13 >> 8 & 0xff00ff00ff00ff) + (uVar13 & 0xff00ff00ff00ff)) *
                       0x1000100010001 >> 0x30);
      puVar19 = puVar18 + uVar15;
      if (uVar16 != 0) {
        puVar18 = puVar18 + (uVar15 & 0xfc);
        uVar15 = (~*puVar18 >> 7 | *puVar18 >> 6) & 0x101010101010101;
        if ((uVar16 != 1) &&
           (uVar15 = ((~puVar18[1] >> 7 | puVar18[1] >> 6) & 0x101010101010101) + uVar15,
           uVar16 != 2)) {
          uVar15 = ((~puVar18[2] >> 7 | puVar18[2] >> 6) & 0x101010101010101) + uVar15;
        }
        return lVar9 + (((uVar15 >> 8 & 0xff00ff00ff00ff) + (uVar15 & 0xff00ff00ff00ff)) *
                        0x1000100010001 >> 0x30);
      }
    } while( true );
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    uVar16 = 0;
    lVar9 = 0;
  }
  else {
    if (param_2 < 0x20) {
      lVar9 = 0;
      uVar15 = 0;
    }
    else {
      lVar9 = 0;
      lVar14 = 0;
      lVar24 = 0;
      lVar48 = 0;
      lVar63 = 0;
      lVar66 = 0;
      lVar20 = 0;
      lVar22 = 0;
      lVar83 = 0;
      lVar86 = 0;
      uVar16 = param_2 & 0xffffffffffffffe0;
      lVar56 = 0;
      lVar57 = 0;
      lVar58 = 0;
      lVar61 = 0;
      uVar15 = param_2 & 0xffffffffffffffe0;
      lVar53 = 0;
      lVar52 = 0;
      lVar101 = 0;
      lVar104 = 0;
      lVar75 = 0;
      lVar79 = 0;
      lVar69 = 0;
      lVar72 = 0;
      lVar107 = 0;
      lVar110 = 0;
      lVar94 = 0;
      lVar95 = 0;
      lVar96 = 0;
      lVar98 = 0;
      lVar89 = 0;
      lVar92 = 0;
      lVar113 = 0;
      lVar116 = 0;
      pauVar10 = (undefined1 (*) [16])(param_1 + 0x10);
      do {
        pauVar1 = pauVar10 + -1;
        auVar122 = *pauVar10;
        uVar15 = uVar15 - 0x20;
        pauVar10 = pauVar10 + 2;
        auVar120[8] = 0xbf;
        auVar120._0_8_ = 0xbfbfbfbfbfbfbfbf;
        auVar120[9] = 0xbf;
        auVar120[10] = 0xbf;
        auVar120[0xb] = 0xbf;
        auVar120[0xc] = 0xbf;
        auVar120[0xd] = 0xbf;
        auVar120[0xe] = 0xbf;
        auVar120[0xf] = 0xbf;
        auVar120 = NEON_cmgt(*pauVar1,auVar120,1);
        auVar2[8] = 0xbf;
        auVar2._0_8_ = 0xbfbfbfbfbfbfbfbf;
        auVar2[9] = 0xbf;
        auVar2[10] = 0xbf;
        auVar2[0xb] = 0xbf;
        auVar2[0xc] = 0xbf;
        auVar2[0xd] = 0xbf;
        auVar2[0xe] = 0xbf;
        auVar2[0xf] = 0xbf;
        auVar122 = NEON_cmgt(auVar122,auVar2,1);
        uVar5 = CONCAT12(auVar120[9],auVar120._8_2_) & 0xff00ff;
        uVar6 = CONCAT12(auVar122[9],auVar122._8_2_) & 0xff00ff;
        lVar53 = lVar53 + (ulong)(auVar120[0xc] & 1);
        lVar52 = lVar52 + (ulong)(auVar120[0xd] & 1);
        lVar101 = lVar101 + (ulong)(auVar120[0xe] & 1);
        lVar104 = lVar104 + (ulong)(auVar120[0xf] & 1);
        lVar58 = lVar58 + (ulong)(auVar120[10] & 1);
        lVar61 = lVar61 + (ulong)(auVar120[0xb] & 1);
        lVar83 = lVar83 + (ulong)(auVar120[6] & 1);
        lVar86 = lVar86 + (ulong)(auVar120[7] & 1);
        lVar56 = lVar56 + (ulong)((byte)uVar5 & 1);
        lVar57 = lVar57 + (ulong)((byte)(uVar5 >> 0x10) & 1);
        lVar20 = lVar20 + (ulong)(auVar120[4] & 1);
        lVar22 = lVar22 + (ulong)(auVar120[5] & 1);
        lVar63 = lVar63 + (ulong)(auVar120[2] & 1);
        lVar66 = lVar66 + (ulong)(auVar120[3] & 1);
        lVar24 = lVar24 + (ulong)(auVar120[0] & 1);
        lVar48 = lVar48 + (ulong)(auVar120[1] & 1);
        lVar94 = lVar94 + (ulong)((byte)uVar6 & 1);
        lVar95 = lVar95 + (ulong)((byte)(uVar6 >> 0x10) & 1);
        lVar113 = lVar113 + (ulong)(auVar122[0xe] & 1);
        lVar116 = lVar116 + (ulong)(auVar122[0xf] & 1);
        lVar89 = lVar89 + (ulong)(auVar122[0xc] & 1);
        lVar92 = lVar92 + (ulong)(auVar122[0xd] & 1);
        lVar107 = lVar107 + (ulong)(auVar122[6] & 1);
        lVar110 = lVar110 + (ulong)(auVar122[7] & 1);
        lVar96 = lVar96 + (ulong)(auVar122[10] & 1);
        lVar98 = lVar98 + (ulong)(auVar122[0xb] & 1);
        lVar9 = lVar9 + (ulong)(auVar122[2] & 1);
        lVar14 = lVar14 + (ulong)(auVar122[3] & 1);
        lVar75 = lVar75 + (ulong)(auVar122[0] & 1);
        lVar79 = lVar79 + (ulong)(auVar122[1] & 1);
        lVar69 = lVar69 + (ulong)(auVar122[4] & 1);
        lVar72 = lVar72 + (ulong)(auVar122[5] & 1);
      } while (uVar15 != 0);
      lVar9 = lVar75 + lVar24 + lVar94 + lVar56 + lVar69 + lVar20 + lVar89 + lVar53 +
              lVar9 + lVar63 + lVar96 + lVar58 + lVar107 + lVar83 + lVar113 + lVar101 +
              lVar79 + lVar48 + lVar95 + lVar57 + lVar72 + lVar22 + lVar92 + lVar52 +
              lVar14 + lVar66 + lVar98 + lVar61 + lVar110 + lVar86 + lVar116 + lVar104;
      if (param_2 == uVar16) {
        return lVar9;
      }
      uVar15 = uVar16;
      if ((param_2 & 0x18) == 0) goto LAB_0073e6e0;
    }
    lVar20 = 0;
    lVar22 = 0;
    lVar24 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar45 = 0;
    uVar16 = param_2 & 0xfffffffffffffff8;
    lVar48 = 0;
    lVar53 = 0;
    lVar14 = uVar15 - uVar16;
    pcVar17 = param_1 + uVar15;
    do {
      lVar14 = lVar14 + 8;
      uVar59 = NEON_cmgt(*(undefined8 *)pcVar17,0xbfbfbfbfbfbfbfbf,1);
      uVar5 = CONCAT12((char)((ulong)uVar59 >> 8),(short)uVar59) & 0xff00ff;
      lVar48 = lVar48 + (ulong)((byte)((ulong)uVar59 >> 0x30) & 1);
      lVar53 = lVar53 + (ulong)((byte)((ulong)uVar59 >> 0x38) & 1);
      lVar52 = CONCAT17(uVar36,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,CONCAT13(uVar31,
                                                  CONCAT12(uVar30,CONCAT11(uVar29,uVar28))))))) +
               (ulong)((byte)((ulong)uVar59 >> 0x10) & 1);
      uVar28 = (undefined1)lVar52;
      uVar29 = (undefined1)((ulong)lVar52 >> 8);
      uVar30 = (undefined1)((ulong)lVar52 >> 0x10);
      uVar31 = (undefined1)((ulong)lVar52 >> 0x18);
      uVar32 = (undefined1)((ulong)lVar52 >> 0x20);
      uVar33 = (undefined1)((ulong)lVar52 >> 0x28);
      uVar34 = (undefined1)((ulong)lVar52 >> 0x30);
      uVar36 = (undefined1)((ulong)lVar52 >> 0x38);
      lVar56 = CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13(uVar40,
                                                  CONCAT12(uVar39,CONCAT11(uVar38,uVar37))))))) +
               (ulong)((byte)((ulong)uVar59 >> 0x18) & 1);
      uVar37 = (undefined1)lVar56;
      uVar38 = (undefined1)((ulong)lVar56 >> 8);
      uVar39 = (undefined1)((ulong)lVar56 >> 0x10);
      uVar40 = (undefined1)((ulong)lVar56 >> 0x18);
      uVar41 = (undefined1)((ulong)lVar56 >> 0x20);
      uVar42 = (undefined1)((ulong)lVar56 >> 0x28);
      uVar43 = (undefined1)((ulong)lVar56 >> 0x30);
      uVar45 = (undefined1)((ulong)lVar56 >> 0x38);
      lVar9 = lVar9 + (ulong)((byte)uVar5 & 1);
      lVar20 = lVar20 + (ulong)((byte)(uVar5 >> 0x10) & 1);
      lVar22 = lVar22 + (ulong)((byte)((ulong)uVar59 >> 0x20) & 1);
      lVar24 = lVar24 + (ulong)((byte)((ulong)uVar59 >> 0x28) & 1);
      pcVar17 = pcVar17 + 8;
    } while (lVar14 != 0);
    lVar9 = lVar9 + lVar22 + lVar52 + lVar48 + lVar20 + lVar24 + lVar56 + lVar53;
    if (param_2 == uVar16) {
      return lVar9;
    }
  }
LAB_0073e6e0:
  lVar14 = param_2 - uVar16;
  pcVar17 = param_1 + uVar16;
  do {
    iVar12 = (int)*pcVar17;
    if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
      lVar9 = lVar9 + 1;
    }
    lVar14 = lVar14 + -1;
    pcVar17 = pcVar17 + 1;
  } while (lVar14 != 0);
  return lVar9;
}


// ===== 0073e700  core::str::count::char_count_general_case =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::count::char_count_general_case */

long __rustcall core::str::count::char_count_general_case(long param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  uint3 uVar3;
  uint3 uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    uVar7 = 0;
    lVar5 = 0;
  }
  else {
    if (param_2 < 0x20) {
      lVar5 = 0;
      uVar12 = 0;
    }
    else {
      lVar5 = 0;
      lVar10 = 0;
      lVar15 = 0;
      lVar32 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar13 = 0;
      lVar14 = 0;
      lVar46 = 0;
      lVar47 = 0;
      uVar7 = param_2 & 0x7fffffffffffffe0;
      lVar35 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar39 = 0;
      uVar12 = param_2 & 0x7fffffffffffffe0;
      lVar34 = 0;
      lVar33 = 0;
      lVar54 = 0;
      lVar55 = 0;
      lVar44 = 0;
      lVar45 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar56 = 0;
      lVar57 = 0;
      lVar50 = 0;
      lVar51 = 0;
      lVar52 = 0;
      lVar53 = 0;
      lVar48 = 0;
      lVar49 = 0;
      lVar58 = 0;
      lVar59 = 0;
      pauVar6 = (undefined1 (*) [16])(param_1 + 0x10);
      do {
        pauVar1 = pauVar6 + -1;
        auVar2 = *pauVar6;
        uVar12 = uVar12 - 0x20;
        pauVar6 = pauVar6 + 2;
        auVar60[8] = 0xbf;
        auVar60._0_8_ = 0xbfbfbfbfbfbfbfbf;
        auVar60[9] = 0xbf;
        auVar60[10] = 0xbf;
        auVar60[0xb] = 0xbf;
        auVar60[0xc] = 0xbf;
        auVar60[0xd] = 0xbf;
        auVar60[0xe] = 0xbf;
        auVar60[0xf] = 0xbf;
        auVar60 = NEON_cmgt(*pauVar1,auVar60,1);
        auVar61[8] = 0xbf;
        auVar61._0_8_ = 0xbfbfbfbfbfbfbfbf;
        auVar61[9] = 0xbf;
        auVar61[10] = 0xbf;
        auVar61[0xb] = 0xbf;
        auVar61[0xc] = 0xbf;
        auVar61[0xd] = 0xbf;
        auVar61[0xe] = 0xbf;
        auVar61[0xf] = 0xbf;
        auVar61 = NEON_cmgt(auVar2,auVar61,1);
        uVar3 = CONCAT12(auVar60[9],auVar60._8_2_) & 0xff00ff;
        uVar4 = CONCAT12(auVar61[9],auVar61._8_2_) & 0xff00ff;
        lVar34 = lVar34 + (ulong)(auVar60[0xc] & 1);
        lVar33 = lVar33 + (ulong)(auVar60[0xd] & 1);
        lVar54 = lVar54 + (ulong)(auVar60[0xe] & 1);
        lVar55 = lVar55 + (ulong)(auVar60[0xf] & 1);
        lVar37 = lVar37 + (ulong)(auVar60[10] & 1);
        lVar39 = lVar39 + (ulong)(auVar60[0xb] & 1);
        lVar46 = lVar46 + (ulong)(auVar60[6] & 1);
        lVar47 = lVar47 + (ulong)(auVar60[7] & 1);
        lVar35 = lVar35 + (ulong)((byte)uVar3 & 1);
        lVar36 = lVar36 + (ulong)((byte)(uVar3 >> 0x10) & 1);
        lVar13 = lVar13 + (ulong)(auVar60[4] & 1);
        lVar14 = lVar14 + (ulong)(auVar60[5] & 1);
        lVar40 = lVar40 + (ulong)(auVar60[2] & 1);
        lVar41 = lVar41 + (ulong)(auVar60[3] & 1);
        lVar15 = lVar15 + (ulong)(auVar60[0] & 1);
        lVar32 = lVar32 + (ulong)(auVar60[1] & 1);
        lVar50 = lVar50 + (ulong)((byte)uVar4 & 1);
        lVar51 = lVar51 + (ulong)((byte)(uVar4 >> 0x10) & 1);
        lVar58 = lVar58 + (ulong)(auVar61[0xe] & 1);
        lVar59 = lVar59 + (ulong)(auVar61[0xf] & 1);
        lVar48 = lVar48 + (ulong)(auVar61[0xc] & 1);
        lVar49 = lVar49 + (ulong)(auVar61[0xd] & 1);
        lVar56 = lVar56 + (ulong)(auVar61[6] & 1);
        lVar57 = lVar57 + (ulong)(auVar61[7] & 1);
        lVar52 = lVar52 + (ulong)(auVar61[10] & 1);
        lVar53 = lVar53 + (ulong)(auVar61[0xb] & 1);
        lVar5 = lVar5 + (ulong)(auVar61[2] & 1);
        lVar10 = lVar10 + (ulong)(auVar61[3] & 1);
        lVar44 = lVar44 + (ulong)(auVar61[0] & 1);
        lVar45 = lVar45 + (ulong)(auVar61[1] & 1);
        lVar42 = lVar42 + (ulong)(auVar61[4] & 1);
        lVar43 = lVar43 + (ulong)(auVar61[5] & 1);
      } while (uVar12 != 0);
      lVar5 = lVar44 + lVar15 + lVar50 + lVar35 + lVar42 + lVar13 + lVar48 + lVar34 +
              lVar5 + lVar40 + lVar52 + lVar37 + lVar56 + lVar46 + lVar58 + lVar54 +
              lVar45 + lVar32 + lVar51 + lVar36 + lVar43 + lVar14 + lVar49 + lVar33 +
              lVar10 + lVar41 + lVar53 + lVar39 + lVar57 + lVar47 + lVar59 + lVar55;
      if (param_2 == uVar7) {
        return lVar5;
      }
      uVar12 = uVar7;
      if ((param_2 & 0x18) == 0) goto LAB_0073e988;
    }
    lVar13 = 0;
    lVar14 = 0;
    lVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar7 = param_2 & 0x7ffffffffffffff8;
    lVar32 = 0;
    lVar34 = 0;
    lVar10 = uVar12 - uVar7;
    puVar9 = (undefined8 *)(param_1 + uVar12);
    do {
      lVar10 = lVar10 + 8;
      uVar38 = NEON_cmgt(*puVar9,0xbfbfbfbfbfbfbfbf,1);
      uVar3 = CONCAT12((char)((ulong)uVar38 >> 8),(short)uVar38) & 0xff00ff;
      lVar32 = lVar32 + (ulong)((byte)((ulong)uVar38 >> 0x30) & 1);
      lVar34 = lVar34 + (ulong)((byte)((ulong)uVar38 >> 0x38) & 1);
      lVar33 = CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19,
                                                  CONCAT12(uVar18,CONCAT11(uVar17,uVar16))))))) +
               (ulong)((byte)((ulong)uVar38 >> 0x10) & 1);
      uVar16 = (undefined1)lVar33;
      uVar17 = (undefined1)((ulong)lVar33 >> 8);
      uVar18 = (undefined1)((ulong)lVar33 >> 0x10);
      uVar19 = (undefined1)((ulong)lVar33 >> 0x18);
      uVar20 = (undefined1)((ulong)lVar33 >> 0x20);
      uVar21 = (undefined1)((ulong)lVar33 >> 0x28);
      uVar22 = (undefined1)((ulong)lVar33 >> 0x30);
      uVar23 = (undefined1)((ulong)lVar33 >> 0x38);
      lVar35 = CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13(uVar27,
                                                  CONCAT12(uVar26,CONCAT11(uVar25,uVar24))))))) +
               (ulong)((byte)((ulong)uVar38 >> 0x18) & 1);
      uVar24 = (undefined1)lVar35;
      uVar25 = (undefined1)((ulong)lVar35 >> 8);
      uVar26 = (undefined1)((ulong)lVar35 >> 0x10);
      uVar27 = (undefined1)((ulong)lVar35 >> 0x18);
      uVar28 = (undefined1)((ulong)lVar35 >> 0x20);
      uVar29 = (undefined1)((ulong)lVar35 >> 0x28);
      uVar30 = (undefined1)((ulong)lVar35 >> 0x30);
      uVar31 = (undefined1)((ulong)lVar35 >> 0x38);
      lVar5 = lVar5 + (ulong)((byte)uVar3 & 1);
      lVar13 = lVar13 + (ulong)((byte)(uVar3 >> 0x10) & 1);
      lVar14 = lVar14 + (ulong)((byte)((ulong)uVar38 >> 0x20) & 1);
      lVar15 = lVar15 + (ulong)((byte)((ulong)uVar38 >> 0x28) & 1);
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
    lVar5 = lVar5 + lVar14 + lVar33 + lVar32 + lVar13 + lVar15 + lVar35 + lVar34;
    if (param_2 == uVar7) {
      return lVar5;
    }
  }
LAB_0073e988:
  lVar10 = param_2 - uVar7;
  pcVar8 = (char *)(param_1 + uVar7);
  do {
    iVar11 = (int)*pcVar8;
    if (iVar11 != -0x41 && iVar11 + 0x41 < 0 == SCARRY4(iVar11,0x41)) {
      lVar5 = lVar5 + 1;
    }
    lVar10 = lVar10 + -1;
    pcVar8 = pcVar8 + 1;
  } while (lVar10 != 0);
  return lVar5;
}


// ===== 0073e9b4  core::str::converts::from_utf8_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::converts::from_utf8_mut */

void __rustcall core::str::converts::from_utf8_mut(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar1 = 0;
  if (0xe < param_3) {
    uVar1 = param_3 - 0xf;
  }
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar3 = *(byte *)(param_2 + uVar4);
      if ((char)bVar3 < '\0') {
        uVar8 = (ulong)bVar3;
        cVar2 = (&DAT_00467171)[bVar3];
        uVar6 = (uint)bVar3;
        if (cVar2 == '\x04') {
          if (param_3 <= uVar4 + 1) {
LAB_0073ebcc:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 0;
            *(char *)((long)param_1 + 0x11) = (char)uVar8;
            *param_1 = 1;
            return;
          }
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar6 == 0xf0) {
            if (0x2f < bVar3 - 0x90) goto LAB_0073ebe8;
          }
          else {
            iVar7 = (int)(char)bVar3;
            if (uVar6 == 0xf4) {
              if (iVar7 != -0x71 && iVar7 + 0x71 < 0 == SCARRY4(iVar7,0x71)) goto LAB_0073ebe8;
            }
            else {
              uVar5 = 1;
              if (2 < uVar6 - 0xf1) goto LAB_0073ebe8;
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_0073eba8;
            }
          }
          uVar8 = uVar4 + 2;
          if (param_3 <= uVar8) goto LAB_0073ebcc;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) goto LAB_0073eba0;
          uVar8 = uVar4 + 3;
          if (param_3 <= uVar8) goto LAB_0073ebcc;
          if (*(char *)(param_2 + uVar8) + 0x40 < 0 == SCARRY4((int)*(char *)(param_2 + uVar8),0x40)
             ) {
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = 3;
            *param_1 = 1;
            return;
          }
        }
        else if (cVar2 == '\x03') {
          if (param_3 <= uVar4 + 1) goto LAB_0073ebcc;
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar6 == 0xe0) {
            if ((bVar3 & 0xe0) != 0xa0) goto LAB_0073ebe8;
          }
          else {
            iVar7 = (int)(char)bVar3;
            if (uVar6 == 0xed) {
              if (iVar7 != -0x61 && iVar7 + 0x61 < 0 == SCARRY4(iVar7,0x61)) goto LAB_0073ebe8;
            }
            else if (uVar6 - 0xe1 < 0xc) {
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_0073ebe8;
            }
            else {
              uVar5 = 1;
              if ((uVar6 & 0xfe) != 0xee) goto LAB_0073ebe8;
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_0073eba8;
            }
          }
          uVar8 = uVar4 + 2;
          if (param_3 <= uVar8) goto LAB_0073ebcc;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) {
LAB_0073eba0:
            uVar5 = 2;
LAB_0073eba8:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = uVar5;
            *param_1 = 1;
            return;
          }
        }
        else {
          if (cVar2 != '\x02') {
LAB_0073ebe8:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = 1;
            *param_1 = 1;
            return;
          }
          uVar8 = uVar4 + 1;
          if (param_3 <= uVar8) goto LAB_0073ebcc;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) goto LAB_0073ebe8;
        }
        uVar4 = uVar8 + 1;
      }
      else if ((-(int)uVar4 - (int)param_2 & 7U) == 0) {
        while ((uVar4 < uVar1 &&
               (((((ulong *)(param_2 + uVar4))[1] | *(ulong *)(param_2 + uVar4)) &
                0x8080808080808080) == 0))) {
          uVar4 = uVar4 + 0x10;
        }
        if (uVar4 < param_3) {
          while (-1 < *(char *)(param_2 + uVar4)) {
            uVar4 = uVar4 + 1;
            if (param_3 == uVar4) goto LAB_0073ebc0;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
    } while (uVar4 < param_3);
  }
LAB_0073ebc0:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0;
  return;
}


// ===== 0073ec24  core::str::converts::from_utf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::converts::from_utf8 */

void __rustcall core::str::converts::from_utf8(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar1 = 0;
  if (0xe < param_3) {
    uVar1 = param_3 - 0xf;
  }
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar3 = *(byte *)(param_2 + uVar4);
      if ((char)bVar3 < '\0') {
        uVar8 = (ulong)bVar3;
        cVar2 = (&DAT_00467171)[bVar3];
        uVar6 = (uint)bVar3;
        if (cVar2 == '\x04') {
          if (param_3 <= uVar4 + 1) {
LAB_0073ee3c:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 0;
            *(char *)((long)param_1 + 0x11) = (char)uVar8;
            *param_1 = 1;
            return;
          }
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar6 == 0xf0) {
            if (0x2f < bVar3 - 0x90) goto LAB_0073ee58;
          }
          else {
            iVar7 = (int)(char)bVar3;
            if (uVar6 == 0xf4) {
              if (iVar7 != -0x71 && iVar7 + 0x71 < 0 == SCARRY4(iVar7,0x71)) goto LAB_0073ee58;
            }
            else {
              uVar5 = 1;
              if (2 < uVar6 - 0xf1) goto LAB_0073ee58;
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_0073ee18;
            }
          }
          uVar8 = uVar4 + 2;
          if (param_3 <= uVar8) goto LAB_0073ee3c;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) goto LAB_0073ee10;
          uVar8 = uVar4 + 3;
          if (param_3 <= uVar8) goto LAB_0073ee3c;
          if (*(char *)(param_2 + uVar8) + 0x40 < 0 == SCARRY4((int)*(char *)(param_2 + uVar8),0x40)
             ) {
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = 3;
            *param_1 = 1;
            return;
          }
        }
        else if (cVar2 == '\x03') {
          if (param_3 <= uVar4 + 1) goto LAB_0073ee3c;
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar6 == 0xe0) {
            if ((bVar3 & 0xe0) != 0xa0) goto LAB_0073ee58;
          }
          else {
            iVar7 = (int)(char)bVar3;
            if (uVar6 == 0xed) {
              if (iVar7 != -0x61 && iVar7 + 0x61 < 0 == SCARRY4(iVar7,0x61)) goto LAB_0073ee58;
            }
            else if (uVar6 - 0xe1 < 0xc) {
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_0073ee58;
            }
            else {
              uVar5 = 1;
              if ((uVar6 & 0xfe) != 0xee) goto LAB_0073ee58;
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_0073ee18;
            }
          }
          uVar8 = uVar4 + 2;
          if (param_3 <= uVar8) goto LAB_0073ee3c;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) {
LAB_0073ee10:
            uVar5 = 2;
LAB_0073ee18:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = uVar5;
            *param_1 = 1;
            return;
          }
        }
        else {
          if (cVar2 != '\x02') {
LAB_0073ee58:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = 1;
            *param_1 = 1;
            return;
          }
          uVar8 = uVar4 + 1;
          if (param_3 <= uVar8) goto LAB_0073ee3c;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) goto LAB_0073ee58;
        }
        uVar4 = uVar8 + 1;
      }
      else if ((-(int)uVar4 - (int)param_2 & 7U) == 0) {
        while ((uVar4 < uVar1 &&
               (((((ulong *)(param_2 + uVar4))[1] | *(ulong *)(param_2 + uVar4)) &
                0x8080808080808080) == 0))) {
          uVar4 = uVar4 + 0x10;
        }
        if (uVar4 < param_3) {
          while (-1 < *(char *)(param_2 + uVar4)) {
            uVar4 = uVar4 + 1;
            if (param_3 == uVar4) goto LAB_0073ee30;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
    } while (uVar4 < param_3);
  }
LAB_0073ee30:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0;
  return;
}


// ===== 0073ee94  core::cell::lazy::panic_poisoned =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::cell::lazy::panic_poisoned */

void __rustcall core::cell::lazy::panic_poisoned(void)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt
            ("LazyCell instance has previously been poisoned",0x5d,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba28);
}


// ===== 0073eeb4  core::slice::index::slice_index_fail =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::index::slice_index_fail */

void __rustcall
core::slice::index::slice_index_fail(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong local_40;
  ulong uStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  ulong *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_40;
  local_40 = param_1;
  uStack_38 = param_3;
  if (param_3 < param_1) {
    puStack_28 = PTR_fmt_0099f540;
    local_20 = &uStack_38;
    puStack_18 = PTR_fmt_0099f540;
    local_30 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_0036d65c,&local_30,param_4);
  }
  if ((param_2 <= param_3) && (param_2 < param_1)) {
    puStack_28 = PTR_fmt_0099f540;
    local_20 = &uStack_38;
    puStack_18 = PTR_fmt_0099f540;
    uStack_38 = param_2;
    local_30 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_00369b20,&local_30,param_4);
  }
  puStack_28 = PTR_fmt_0099f540;
  local_20 = &uStack_38;
  puStack_18 = PTR_fmt_0099f540;
  local_40 = param_2;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_0036c8cf,&local_30,param_4);
}


// ===== 0073ef68  core::slice::memchr::memchr_aligned =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::memchr::memchr_aligned */

undefined1  [16] __rustcall
core::slice::memchr::memchr_aligned(uint param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  param_1 = param_1 & 0xff;
  uVar2 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    if (uVar2 <= param_3) {
      uVar3 = uVar2;
    }
    if (param_3 != 0) {
      uVar2 = 0;
      uVar1 = 1;
      do {
        if (*(byte *)(param_2 + uVar2) == param_1) goto LAB_0073f03c;
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
    uVar2 = uVar3;
    if (param_3 - 0x10 < uVar3) goto LAB_0073f014;
  }
  do {
    uVar5 = *(ulong *)(param_2 + uVar3) ^ (ulong)param_1 * 0x101010101010101;
    uVar4 = ((ulong *)(param_2 + uVar3))[1] ^ (ulong)param_1 * 0x101010101010101;
    uVar2 = uVar3;
    if ((((0x101010101010100 - uVar5 | uVar5) & (0x101010101010100 - uVar4 | uVar4) ^
         0xffffffffffffffff) & 0x8080808080808080) != 0) break;
    uVar3 = uVar3 + 0x10;
    uVar2 = uVar3;
  } while (uVar3 <= param_3 - 0x10);
LAB_0073f014:
  if (param_3 != uVar2) {
    uVar1 = 1;
    do {
      if (*(byte *)(param_2 + uVar2) == param_1) goto LAB_0073f03c;
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  uVar1 = 0;
LAB_0073f03c:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}


// ===== 0073f044  core::slice::memchr::memrchr =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::memchr::memrchr */

undefined1  [16] __rustcall core::slice::memchr::memrchr(uint param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar3 = (int)param_3;
  auVar10._8_8_ = (param_2 + 7 & 0xfffffffffffffff8) - param_2;
  uVar2 = param_3;
  uVar5 = param_3;
  if ((auVar10._8_8_ <= param_3) &&
     (uVar4 = (ulong)(uint)(iVar3 - (int)auVar10._8_8_) & 0xf, uVar2 = param_3 - uVar4,
     uVar5 = auVar10._8_8_, param_3 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail(uVar2,param_3,iVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba58);
  }
  pbVar7 = (byte *)(param_3 + param_2);
  lVar6 = 0;
  param_1 = param_1 & 0xff;
  while (pbVar7 = pbVar7 + -1, param_3 - uVar2 != lVar6) {
    lVar6 = lVar6 + 1;
    if (*pbVar7 == param_1) {
      auVar9._8_8_ = param_3 - lVar6;
      auVar9._0_8_ = 1;
      return auVar9;
    }
  }
  do {
    auVar10._8_8_ = uVar2;
    if (auVar10._8_8_ <= uVar5) break;
    uVar8 = *(ulong *)(param_2 + auVar10._8_8_ + -0x10) ^ (ulong)param_1 * 0x101010101010101;
    uVar4 = *(ulong *)(param_2 + auVar10._8_8_ + -8) ^ (ulong)param_1 * 0x101010101010101;
    uVar2 = auVar10._8_8_ - 0x10;
  } while ((((0x101010101010100 - uVar8 | uVar8) & (0x101010101010100 - uVar4 | uVar4) ^
            0xffffffffffffffff) & 0x8080808080808080) == 0);
  if (param_3 < auVar10._8_8_) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail(0,auVar10._8_8_,iVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba40);
  }
  lVar6 = param_2 - 1;
  do {
    if (auVar10._8_8_ == 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      return auVar1 << 0x40;
    }
    pbVar7 = (byte *)(lVar6 + auVar10._8_8_);
    auVar10._8_8_ = auVar10._8_8_ - 1;
    param_2 = auVar10._8_8_;
  } while (*pbVar7 != param_1);
  auVar10._0_8_ = 1;
  return auVar10;
}


// ===== 0073f16c  core::panicking::panic_const::panic_const_div_by_zero =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_div_by_zero */

void __rustcall core::panicking::panic_const::panic_const_div_by_zero(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to divide by zero",0x33,param_1);
}


// ===== 0073f188  core::panicking::panic_const::panic_const_gen_fn_none =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_gen_fn_none */

void __rustcall core::panicking::panic_const::panic_const_gen_fn_none(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`gen fn` should just keep returning `None` after completion",0x77,param_1);
}


// ===== 0073f1a4  core::panicking::panic_const::panic_const_rem_by_zero =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_rem_by_zero */

void __rustcall core::panicking::panic_const::panic_const_rem_by_zero(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to calculate the remainder with a divisor of zero",0x73,param_1);
}


// ===== 0073f1c0  core::panicking::panic_const::panic_const_add_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_add_overflow */

void __rustcall core::panicking::panic_const::panic_const_add_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to add with overflow",0x39,param_1);
}


// ===== 0073f1dc  core::panicking::panic_const::panic_const_div_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_div_overflow */

void __rustcall core::panicking::panic_const::panic_const_div_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to divide with overflow",0x3f,param_1);
}


// ===== 0073f1f8  core::panicking::panic_const::panic_const_mul_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_mul_overflow */

void __rustcall core::panicking::panic_const::panic_const_mul_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to multiply with overflow",0x43,param_1);
}


// ===== 0073f214  core::panicking::panic_const::panic_const_neg_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_neg_overflow */

void __rustcall core::panicking::panic_const::panic_const_neg_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to negate with overflow",0x3f,param_1);
}


// ===== 0073f230  core::panicking::panic_const::panic_const_rem_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_rem_overflow */

void __rustcall core::panicking::panic_const::panic_const_rem_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to calculate the remainder with overflow",0x61,param_1);
}


// ===== 0073f24c  core::panicking::panic_const::panic_const_shl_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_shl_overflow */

void __rustcall core::panicking::panic_const::panic_const_shl_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to shift left with overflow",0x47,param_1);
}


// ===== 0073f268  core::panicking::panic_const::panic_const_shr_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_shr_overflow */

void __rustcall core::panicking::panic_const::panic_const_shr_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to shift right with overflow",0x49,param_1);
}


// ===== 0073f284  core::panicking::panic_const::panic_const_sub_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_sub_overflow */

void __rustcall core::panicking::panic_const::panic_const_sub_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("attempt to subtract with overflow",0x43,param_1);
}


// ===== 0073f2a0  core::panicking::panic_const::panic_const_async_fn_resumed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_fn_resumed */

void __rustcall core::panicking::panic_const::panic_const_async_fn_resumed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`async fn` resumed after completion",0x47,param_1);
}


// ===== 0073f2bc  core::panicking::panic_const::panic_const_gen_fn_none_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_gen_fn_none_drop */

void __rustcall core::panicking::panic_const::panic_const_gen_fn_none_drop(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`gen fn` resumed after async drop",0x43,param_1);
}


// ===== 0073f2d8  core::panicking::panic_const::panic_const_coroutine_resumed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_coroutine_resumed */

void __rustcall core::panicking::panic_const::panic_const_coroutine_resumed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("coroutine resumed after completion",0x45,param_1);
}


// ===== 0073f2f4  core::panicking::panic_const::panic_const_gen_fn_none_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_gen_fn_none_panic */

void __rustcall core::panicking::panic_const::panic_const_gen_fn_none_panic(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`gen fn` should just keep returning `None` after panicking",0x75,param_1);
}


// ===== 0073f310  core::panicking::panic_const::panic_const_async_gen_fn_resumed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_gen_fn_resumed */

void __rustcall core::panicking::panic_const::panic_const_async_gen_fn_resumed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`async gen fn` resumed after completion",0x4f,param_1);
}


// ===== 0073f32c  core::panicking::panic_const::panic_const_async_fn_resumed_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_fn_resumed_drop */

void __rustcall core::panicking::panic_const::panic_const_async_fn_resumed_drop(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`async fn` resumed after async drop",0x47,param_1);
}


// ===== 0073f348  core::panicking::panic_const::panic_const_async_fn_resumed_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_fn_resumed_panic */

void __rustcall core::panicking::panic_const::panic_const_async_fn_resumed_panic(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`async fn` resumed after panicking",0x45,param_1);
}


// ===== 0073f364  core::panicking::panic_const::panic_const_coroutine_resumed_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_coroutine_resumed_drop */

void __rustcall core::panicking::panic_const::panic_const_coroutine_resumed_drop(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("coroutine resumed after async drop",0x45,param_1);
}


// ===== 0073f380  core::panicking::panic_const::panic_const_coroutine_resumed_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_coroutine_resumed_panic */

void __rustcall
core::panicking::panic_const::panic_const_coroutine_resumed_panic(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("coroutine resumed after panicking",0x43,param_1);
}


// ===== 0073f39c  core::panicking::panic_const::panic_const_async_gen_fn_resumed_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_gen_fn_resumed_drop */

void __rustcall
core::panicking::panic_const::panic_const_async_gen_fn_resumed_drop(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`async gen fn` resumed after async drop",0x4f,param_1);
}


// ===== 0073f3b8  core::panicking::panic_const::panic_const_async_gen_fn_resumed_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_gen_fn_resumed_panic */

void __rustcall
core::panicking::panic_const::panic_const_async_gen_fn_resumed_panic(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt("`async gen fn` resumed after panicking",0x4d,param_1);
}


// ===== 0073f3d4  core::io::error::os_functions::get_os_functions =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::io::error::os_functions::get_os_functions */

undefined8 __rustcall core::io::error::os_functions::get_os_functions(void)

{
  return *(undefined8 *)PTR_PTR_0099f738;
}


// ===== 0073f3e4  FUN_0073f3e4 =====

void FUN_0073f3e4(long param_1,ulong param_2,int param_3,char param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 uStack_92;
  char local_90 [24];
  undefined2 local_78 [4];
  char *local_70;
  long lStack_68;
  undefined2 local_60;
  long local_58;
  undefined2 local_48;
  char *local_40;
  long lStack_38;
  char *local_30;
  ulong uStack_28;
  undefined2 *local_20;
  undefined8 uStack_18;
  
  if (param_2 == 0) {
    uVar5 = 0;
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    if ((*(uint *)(param_1 + 0x10) >> 0x1c & 1) == 0) goto LAB_0073f48c;
LAB_0073f4f4:
    uVar14 = (ulong)*(ushort *)(param_1 + 0x16);
    uVar8 = uVar5 - uVar14;
    if (uVar14 <= uVar5 && uVar8 != 0) {
      uVar3 = (uint)uVar8;
      if ((uVar8 & 1) == 0) {
        uVar13 = 1;
LAB_0073f530:
        if (((((uVar3 >> 1 & 1) == 0) || (uVar13 = uVar13 * 100, (uVar3 & 0xfffe) != 2)) &&
            (((uVar3 >> 2 & 1) == 0 || (uVar13 = uVar13 * 10000, (uVar3 & 0xfffc) != 4)))) &&
           (((uVar3 >> 3 & 1) == 0 || (uVar13 = uVar13 * 100000000, (uVar3 & 0xfff8) != 8)))) {
          uVar13 = uVar13 * 10000000000000000;
        }
      }
      else {
        uVar13 = 10;
        if (uVar8 != 1) goto LAB_0073f530;
      }
      uVar1 = 0;
      if (uVar13 != 0) {
        uVar1 = param_2 / uVar13;
      }
      uVar11 = param_2 - uVar1 * uVar13;
      uVar8 = uVar5;
      param_2 = uVar1;
      if (uVar13 >> 1 <= uVar11) {
        if (uVar13 >> 1 < uVar11) {
          param_2 = uVar1 + 1;
        }
        else {
          param_2 = (uVar1 & 1) + uVar1;
          if ((uVar1 & 1) == 0) goto joined_r0x0073f684;
        }
        if (param_2 != 0) {
          uVar13 = param_2 / 10000000000;
          if (param_2 < 10000000000) {
            uVar13 = param_2;
          }
          uVar3 = 10;
          if (param_2 < 10000000000) {
            uVar3 = 0;
          }
          if (0xc34 < uVar13 >> 5) {
            uVar3 = uVar3 | 5;
            uVar13 = (uVar13 >> 5) / 0xc35;
          }
          iVar4 = (int)uVar13;
          if ((uint)*(ushort *)(param_1 + 0x16) <
              uVar3 + ((iVar4 + 0x5fff6U & iVar4 + 0x7ff9cU ^ iVar4 + 0xdfc18U & iVar4 + 0x7d8f0U)
                      >> 0x11)) {
            param_2 = param_2 / 10;
            uVar8 = uVar5 + 1;
          }
        }
      }
      goto joined_r0x0073f684;
    }
    lVar10 = uVar14 - uVar5;
LAB_0073f510:
    uVar8 = uVar5;
    if (uVar5 == 0 && lVar10 == 0) goto LAB_0073f51c;
  }
  else {
    uVar5 = param_2 / 10000000000;
    if (param_2 < 10000000000) {
      uVar5 = param_2;
    }
    uVar3 = 10;
    if (param_2 < 10000000000) {
      uVar3 = 0;
    }
    if (0xc34 < uVar5 >> 5) {
      uVar3 = uVar3 | 5;
      uVar5 = (uVar5 >> 5) / 0xc35;
    }
    iVar4 = (int)uVar5;
    uVar5 = (ulong)(uVar3 + ((iVar4 + 0x5fff6U & iVar4 + 0x7ff9cU ^
                             iVar4 + 0xdfc18U & iVar4 + 0x7d8f0U) >> 0x11));
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    if ((*(uint *)(param_1 + 0x10) >> 0x1c & 1) != 0) goto LAB_0073f4f4;
LAB_0073f48c:
    lVar10 = 0;
    if ((uVar5 == 0) || (uVar14 = uVar5, param_2 % 10 != 0)) goto LAB_0073f510;
    do {
      uVar14 = uVar14 - 1;
      param_2 = param_2 / 10;
      uVar8 = uVar5;
      if (uVar14 == 0) break;
    } while (param_2 % 10 == 0);
joined_r0x0073f684:
    uVar5 = uVar14;
    lVar10 = 0;
    if (uVar5 == 0) {
LAB_0073f51c:
      lVar6 = 1;
      goto LAB_0073f774;
    }
  }
  local_90[1] = 0x2e;
  uVar14 = param_2;
  if (1 < uVar5) {
    uVar13 = uVar5;
    if (0x17 < uVar5) {
LAB_0073f888:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar13,0x18,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba88);
    }
    uVar14 = param_2 / 100;
    lVar6 = (param_2 % 100) * 2;
    local_90[uVar5] = (&DAT_004670a6)[lVar6];
    if (uVar5 == 0x17) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar5 + 1,0x18,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba88);
    }
    local_90[uVar5 + 1] = (&DAT_004670a7)[lVar6];
    uVar1 = uVar5;
    if (3 < uVar5) {
      do {
        uVar13 = uVar1 - 2;
        if (0x17 < uVar13) goto LAB_0073f888;
        uVar11 = uVar1 - 1;
        uVar2 = uVar14 / 100;
        *(undefined2 *)((long)&uStack_92 + uVar1) =
             *(undefined2 *)(&DAT_004670a6 + (uVar14 % 100) * 2);
        uVar14 = uVar2;
        uVar1 = uVar13;
      } while (4 < uVar11);
    }
  }
  lVar6 = uVar5 + 2;
  param_2 = uVar14;
  if ((uVar5 & 1) != 0) {
    lVar6 = uVar5 + 2;
    param_2 = uVar14 / 10;
    local_90[2] = (char)uVar14 + (char)param_2 * -10 | 0x30;
  }
LAB_0073f774:
  local_90[0] = (char)param_2 + '0';
  local_90[lVar6] = param_4;
  if (uVar8 < 10) {
    bVar12 = (byte)uVar8 | 0x30;
    lVar9 = 2;
  }
  else {
    bVar12 = (&DAT_004670a6)[uVar8 * 2];
    lVar9 = 3;
    local_90[lVar6 + 2] = (&DAT_004670a7)[uVar8 * 2];
  }
  local_90[lVar6 + 1] = bVar12;
  if (0x18 < (ulong)(lVar6 + lVar9)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,lVar6 + lVar9,0x18,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097ba88);
  }
  if (lVar10 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_1,param_3,1,0,local_90);
    return;
  }
  local_30 = "+";
  if ((uVar7 & 0x200000) == 0) {
    local_30 = (char *)0x1;
  }
  uStack_28 = uVar7 >> 0x15 & 1;
  local_78[0] = 2;
  if (param_3 == 0) {
    uStack_28 = 1;
    local_30 = "-+";
  }
  local_60 = 0;
  local_20 = local_78;
  local_48 = 2;
  uStack_18 = 3;
  local_70 = local_90;
  lStack_68 = lVar6;
  local_58 = lVar10;
  local_40 = local_90 + lVar6;
  lStack_38 = lVar9;
  FUN_00739c78(param_1,&local_30);
  return;
}


// ===== 0073f8b0  core::num::imp::overflow_panic::cast_integer =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::cast_integer */

void __rustcall core::num::imp::overflow_panic::cast_integer(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to cast integer with overflow",0x4b,param_1);
}


// ===== 0073f8cc  core::num::imp::overflow_panic::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::add */

void __rustcall core::num::imp::overflow_panic::add(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to add with overflow",0x39,param_1);
}


// ===== 0073f8e8  core::num::imp::overflow_panic::mul =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::mul */

void __rustcall core::num::imp::overflow_panic::mul(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to multiply with overflow",0x43,param_1);
}


// ===== 0073f904  core::num::imp::overflow_panic::neg =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::neg */

void __rustcall core::num::imp::overflow_panic::neg(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to negate with overflow",0x3f,param_1);
}


// ===== 0073f920  core::num::imp::overflow_panic::pow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::pow */

void __rustcall core::num::imp::overflow_panic::pow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to exponentiate with overflow",0x4b,param_1);
}


// ===== 0073f93c  core::num::imp::overflow_panic::rem =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::rem */

void __rustcall core::num::imp::overflow_panic::rem(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to calculate the remainder with overflow",0x61,param_1);
}


// ===== 0073f958  core::num::imp::overflow_panic::shl =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::shl */

void __rustcall core::num::imp::overflow_panic::shl(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to shift left with overflow",0x47,param_1);
}


// ===== 0073f974  core::num::imp::overflow_panic::shr =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::shr */

void __rustcall core::num::imp::overflow_panic::shr(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to shift right with overflow",0x49,param_1);
}


// ===== 0073f990  core::num::imp::overflow_panic::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::sub */

void __rustcall core::num::imp::overflow_panic::sub(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("attempt to subtract with overflow",0x43,param_1);
}


// ===== 0073f9ac  core::num::imp::flt2dec::digits_to_dec_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::digits_to_dec_str */

undefined1  [16] __rustcall
core::num::imp::flt2dec::digits_to_dec_str
          (byte *param_1,ulong param_2,ushort param_3,ulong param_4,undefined2 *param_5,
          ulong param_6)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: !buf.is_empty()",0x21,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097baa0);
  }
  if (*param_1 < 0x31) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: buf[0] > b\'0\'eEe-E-",0x1f,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bab8);
  }
  if (param_6 < 4) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: parts.len() >= 4",0x22,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bad0);
  }
  *param_5 = 2;
  if ((short)param_3 < 1) {
    param_5[0x18] = 2;
    *(char **)(param_5 + 4) = "0.";
    *(undefined8 *)(param_5 + 8) = 2;
    uVar1 = param_4 - param_2;
    param_5[0xc] = 0;
    uVar4 = -(long)(short)param_3;
    *(byte **)(param_5 + 0x1c) = param_1;
    *(ulong *)(param_5 + 0x20) = param_2;
    *(ulong *)(param_5 + 0x10) = uVar4;
    if ((param_2 <= param_4 && uVar1 != 0) && (uVar4 < uVar1)) {
      param_5[0x24] = 0;
      *(ulong *)(param_5 + 0x28) = uVar1 + (long)(short)param_3;
      auVar5._8_8_ = 4;
      auVar5._0_8_ = param_5;
      return auVar5;
    }
  }
  else {
    uVar4 = (ulong)param_3;
    *(byte **)(param_5 + 4) = param_1;
    uVar1 = param_2 - uVar4;
    if (param_2 < uVar4 || uVar1 == 0) {
      *(ulong *)(param_5 + 8) = param_2;
      uVar3 = 2;
      param_5[0xc] = 0;
      *(ulong *)(param_5 + 0x10) = uVar4 - param_2;
      if (param_4 != 0) {
        param_5[0x18] = 2;
        *(undefined **)(param_5 + 0x1c) = &DAT_0046716e;
        *(undefined8 *)(param_5 + 0x20) = 1;
        goto LAB_0073fab0;
      }
      goto LAB_0073fa78;
    }
    *(ulong *)(param_5 + 8) = uVar4;
    bVar2 = uVar1 <= param_4;
    param_4 = param_4 - uVar1;
    param_5[0xc] = 2;
    *(undefined **)(param_5 + 0x10) = &DAT_0046716e;
    *(undefined8 *)(param_5 + 0x14) = 1;
    param_5[0x18] = 2;
    *(byte **)(param_5 + 0x1c) = param_1 + uVar4;
    *(ulong *)(param_5 + 0x20) = uVar1;
    if (bVar2 && param_4 != 0) {
LAB_0073fab0:
      param_5[0x24] = 0;
      *(ulong *)(param_5 + 0x28) = param_4;
      auVar7._8_8_ = 4;
      auVar7._0_8_ = param_5;
      return auVar7;
    }
  }
  uVar3 = 3;
LAB_0073fa78:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_5;
  return auVar6;
}


// ===== 0073fb10  core::num::imp::flt2dec::digits_to_exp_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::digits_to_exp_str */

undefined1  [16] __rustcall
core::num::imp::flt2dec::digits_to_exp_str
          (byte *param_1,long param_2,short param_3,ulong param_4,int param_5,undefined2 *param_6,
          ulong param_7)

{
  char *pcVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined1 auVar6 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: !buf.is_empty()",0x21,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bae8);
  }
  if (*param_1 < 0x31) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: buf[0] > b\'0\'eEe-E-",0x1f,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bb00);
  }
  if (param_7 < 6) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: parts.len() >= 60e00E0e0E0",0x22,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bb18);
  }
  uVar2 = param_2 - 1;
  *param_6 = 2;
  *(byte **)(param_6 + 4) = param_1;
  *(undefined8 *)(param_6 + 8) = 1;
  if (uVar2 == 0) {
    lVar4 = 1;
    if (param_4 == 0) goto LAB_0073fbe0;
    lVar4 = 2;
    param_6[0xc] = 2;
    *(undefined **)(param_6 + 0x10) = &DAT_0046716e;
    *(undefined8 *)(param_6 + 0x14) = 1;
    if (param_4 == 0) goto LAB_0073fbe0;
  }
  else {
    param_6[0xc] = 2;
    lVar4 = 3;
    *(undefined **)(param_6 + 0x10) = &DAT_0046716e;
    *(undefined8 *)(param_6 + 0x14) = 1;
    bVar3 = param_4 < uVar2;
    param_4 = param_4 - uVar2;
    param_6[0x18] = 2;
    *(byte **)(param_6 + 0x1c) = param_1 + 1;
    *(ulong *)(param_6 + 0x20) = uVar2;
    if (bVar3 || param_4 == 0) goto LAB_0073fbe0;
  }
  param_6[lVar4 * 0xc] = 0;
  *(ulong *)(param_6 + lVar4 * 0xc + 4) = param_4;
  lVar4 = lVar4 + 1;
LAB_0073fbe0:
  if (param_3 < 1) {
    puVar5 = param_6 + lVar4 * 0xc;
    pcVar1 = "E-";
    if (param_5 == 0) {
      pcVar1 = "e-E-";
    }
    *puVar5 = 2;
    *(char **)(puVar5 + 4) = pcVar1;
    *(undefined8 *)(puVar5 + 8) = 2;
    param_3 = 1 - param_3;
  }
  else {
    puVar5 = param_6 + lVar4 * 0xc;
    pcVar1 = "Ee-E-";
    if (param_5 == 0) {
      pcVar1 = "eEe-E-";
    }
    *puVar5 = 2;
    *(char **)(puVar5 + 4) = pcVar1;
    *(undefined8 *)(puVar5 + 8) = 1;
    param_3 = param_3 + -1;
  }
  param_6[lVar4 * 0xc + 0xc] = 1;
  param_6[lVar4 * 0xc + 0xd] = param_3;
  auVar6._8_8_ = lVar4 + 2;
  auVar6._0_8_ = param_6;
  return auVar6;
}


// ===== 0073fcc4  core::num::imp::flt2dec::round_up =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::round_up */

bool __rustcall core::num::imp::flt2dec::round_up(undefined1 *param_1,long param_2)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  do {
    lVar1 = param_2 + uVar2;
    if (lVar1 == 0) {
      if (param_2 == 0) {
        return true;
      }
      *param_1 = 0x31;
      __n = param_2 - 1;
      lVar3 = 1;
      goto LAB_0073fd28;
    }
    lVar3 = uVar2 + param_2;
    uVar2 = uVar2 - 1;
  } while (param_1[lVar3 + -1] == '9');
  param_2 = param_2 + uVar2;
  __n = ~uVar2;
  lVar3 = param_2 + 1;
  param_1[param_2] = param_1[param_2] + '\x01';
LAB_0073fd28:
  memset(param_1 + lVar3,0x30,__n);
  return lVar1 == 0;
}


// ===== 0073fd64  core::num::imp::int_sqrt::panic_for_negative_argument =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::int_sqrt::panic_for_negative_argument */

void __rustcall core::num::imp::int_sqrt::panic_for_negative_argument(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("argument of integer square root cannot be negative",0x65,param_1);
}


// ===== 0073fd80  core::num::imp::int_log10::panic_for_nonpositive_argument =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::int_log10::panic_for_nonpositive_argument */

void __rustcall core::num::imp::int_log10::panic_for_nonpositive_argument(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt("argument of integer logarithm must be posit",0x5d,param_1);
}


// ===== 0073fd9c  core::unicode::unicode_data::alphabetic::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::alphabetic::lookup_slow */

uint __rustcall core::unicode::unicode_data::alphabetic::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  lVar1 = 0;
  if (0x16a38 < param_1) {
    lVar1 = 0x19;
  }
  if ((uint)(*(int *)(&DAT_004676cc + (lVar1 + 0xd) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 0xd;
  }
  if ((uint)(*(int *)(&DAT_004676cc + (lVar1 + 6) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 6;
  }
  if ((uint)(*(int *)(&DAT_004676cc + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_004676cc + (lVar1 + 2) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 2;
  }
  if ((uint)(*(int *)(&DAT_004676cc + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_004676cc + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_004676cc + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_004676cc + lVar1) >> 0x15);
  if (uVar4 < 0x32) {
    uVar5 = (ulong)(*(uint *)(&DAT_004676d0 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x0073fe68;
    }
  }
  else {
    uVar5 = 0x5ef;
  }
  uVar2 = *(uint *)("ive" + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x0073fe68:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_004651b4)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 0073fea4  core::unicode::unicode_data::conversions::to_casefold =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::conversions::to_casefold */

void __rustcall core::unicode::unicode_data::conversions::to_casefold(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int local_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  
  if (param_2 < 0xb5) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar4 = param_2 | 0x20;
    if (0x19 < param_2 - 0x41) {
      uVar4 = param_2;
    }
    *param_1 = uVar4;
  }
  else {
    FUN_00740074(&local_58,param_2,&PTR_DAT_0097bb30);
    if (local_58 != -1) {
      *(ulong *)param_1 = CONCAT44(uStack_54,local_58);
      param_1[2] = local_50;
      return;
    }
    FUN_00740074(&local_4c,param_2,&PTR_DAT_0097bbf0);
    uVar6 = local_44;
    uVar4 = uStack_48;
    bVar5 = local_4c != 0xffffffff;
    if (bVar5) {
      param_2 = local_4c;
    }
    uVar1 = 0;
    if (bVar5) {
      uVar1 = local_44;
    }
    uVar2 = 0;
    if (bVar5) {
      uVar2 = uStack_48;
    }
    if (param_2 < 0xc0) {
      param_1[1] = 0;
      param_1[2] = 0;
      uVar3 = param_2 | 0x20;
      if (0x19 < param_2 - 0x41) {
        uVar3 = param_2;
      }
      *param_1 = uVar3;
    }
    else {
      FUN_00740074(&local_4c,param_2,&PTR_DAT_0097bb70);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = param_2;
      if (local_4c != 0xffffffff) {
        *(ulong *)param_1 = CONCAT44(uStack_48,local_4c);
        param_1[2] = local_44;
      }
    }
    if (uVar2 != 0) {
      if (uVar2 < 0xc0) {
        uVar4 = uVar2 | 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar4 = uVar2;
        }
        param_1[1] = uVar4;
      }
      else {
        FUN_00740074(&local_4c,uVar2,&PTR_DAT_0097bb70);
        if (local_4c != 0xffffffff) {
          uVar4 = local_4c;
        }
        param_1[1] = uVar4;
      }
      if (uVar1 != 0) {
        if (uVar1 < 0xc0) {
          uVar6 = uVar1 | 0x20;
          if (0x19 < uVar1 - 0x41) {
            uVar6 = uVar1;
          }
        }
        else {
          FUN_00740074(&local_4c,uVar1,&PTR_DAT_0097bb70);
          if (local_4c != 0xffffffff) {
            uVar6 = local_4c;
          }
        }
        param_1[2] = uVar6;
        return;
      }
    }
  }
  return;
}


// ===== 00740074  FUN_00740074 =====

void FUN_00740074(uint *param_1,uint param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 < 0x20000) {
    plVar1 = (long *)(param_3 + (ulong)(param_2 >> 0x10) * 0x20);
    uVar6 = plVar1[1];
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          lVar2 = (uVar6 >> 1) + lVar7;
          if ((uint)*(ushort *)(*plVar1 + lVar2 * 6) <= (param_2 & 0xffff)) {
            lVar7 = lVar2;
          }
          uVar6 = uVar6 - (uVar6 >> 1);
        } while (1 < uVar6);
      }
      puVar5 = (ushort *)(*plVar1 + lVar7 * 6);
      uVar4 = *puVar5;
      if ((((uint)uVar4 <= (param_2 & 0xffff)) &&
          ((param_2 & 0xffff) <= ((uint)uVar4 + (uint)(byte)puVar5[1] & 0xffff))) &&
         (((uVar4 ^ param_2) & (uint)*(byte *)((long)puVar5 + 3) & 1) == 0)) {
        uVar4 = puVar5[2];
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = param_2 & 0x10000 | uVar4 + param_2 & 0xffff;
        return;
      }
    }
    uVar6 = plVar1[3];
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          lVar2 = (uVar6 >> 1) + lVar7;
          uVar6 = uVar6 - (uVar6 >> 1);
          if ((uint)*(ushort *)(plVar1[2] + lVar2 * 8) <= (param_2 & 0xffff)) {
            lVar7 = lVar2;
          }
        } while (1 < uVar6);
      }
      puVar5 = (ushort *)(plVar1[2] + lVar7 * 8);
      if ((uint)*puVar5 == (param_2 & 0xffff)) {
        uVar3 = *(uint *)(puVar5 + 1);
        param_2 = param_2 & 0x10000;
        param_1[2] = param_2 | puVar5[3];
        *param_1 = param_2 | uVar3 & 0xffff;
        param_1[1] = param_2 | uVar3 >> 0x10;
        return;
      }
    }
  }
  *param_1 = 0xffffffff;
  return;
}


// ===== 007401b0  core::unicode::unicode_data::conversions::to_lower =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::conversions::to_lower */

void __rustcall core::unicode::unicode_data::conversions::to_lower(uint *param_1,uint param_2)

{
  uint uVar1;
  int local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  if (param_2 < 0xc0) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = param_2 | 0x20;
    if (0x19 < param_2 - 0x41) {
      uVar1 = param_2;
    }
    *param_1 = uVar1;
  }
  else {
    FUN_00740074(&local_2c,param_2,&PTR_DAT_0097bb70);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = param_2;
    if (local_2c != -1) {
      *(ulong *)param_1 = CONCAT44(uStack_28,local_2c);
      param_1[2] = local_24;
      return;
    }
  }
  return;
}


// ===== 00740240  core::unicode::unicode_data::conversions::to_title =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::conversions::to_title */

void __rustcall core::unicode::unicode_data::conversions::to_title(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined8 local_38;
  uint local_30;
  int local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  if (param_2 < 0xb5) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = param_2 & 0x5f;
    if (0x19 < param_2 - 0x61) {
      uVar1 = param_2;
    }
    *param_1 = uVar1;
  }
  else {
    FUN_00740074(&local_2c,param_2,&PTR_DAT_0097bbb0);
    if (local_2c == -1) {
      FUN_00740074(&local_38,param_2,&PTR_DAT_0097bbf0);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = param_2;
      local_2c = (int)local_38;
    }
    else {
      local_38 = CONCAT44(uStack_28,local_2c);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = param_2;
      local_30 = local_24;
    }
    if (local_2c != -1) {
      *(undefined8 *)param_1 = local_38;
      param_1[2] = local_30;
      return;
    }
  }
  return;
}


// ===== 0074031c  core::unicode::unicode_data::conversions::to_upper =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::conversions::to_upper */

void __rustcall core::unicode::unicode_data::conversions::to_upper(uint *param_1,uint param_2)

{
  uint uVar1;
  int local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  if (param_2 < 0xb5) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = param_2 & 0x5f;
    if (0x19 < param_2 - 0x61) {
      uVar1 = param_2;
    }
    *param_1 = uVar1;
  }
  else {
    FUN_00740074(&local_2c,param_2,&PTR_DAT_0097bbf0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = param_2;
    if (local_2c != -1) {
      *(ulong *)param_1 = CONCAT44(uStack_28,local_2c);
      param_1[2] = local_24;
      return;
    }
  }
  return;
}


// ===== 007403b0  FUN_007403b0 =====

bool FUN_007403b0(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_1 >> 8) & 0xffffff;
  uVar2 = (uint)param_1;
  if (uVar3 < 0x20) {
    bVar1 = (uVar2 & 0xff) == 0x85 || (uVar2 & 0xff) == 0xa0;
    if ((param_1 & 0xffffff00) != 0) {
      bVar1 = uVar3 == 0x16 && uVar2 == 0x1680;
    }
    return bVar1;
  }
  if (uVar3 != 0x20) {
    if (uVar3 == 0x30) {
      return uVar2 == 0x3000;
    }
    return false;
  }
  return (bool)((byte)PTR_WHITESPACE_MAP_0099f420[param_1 & 0xff] >> 1 & 1);
}


// ===== 0074042c  core::unicode::unicode_data::cn_planes_0_3::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::cn_planes_0_3::lookup_slow */

uint __rustcall core::unicode::unicode_data::cn_planes_0_3::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  lVar1 = 0;
  if (0x1b2fb < param_1) {
    lVar1 = 0x1b;
  }
  if ((uint)(*(int *)(&DAT_00468524 + (lVar1 + 0xd) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 0xd;
  }
  if ((uint)(*(int *)(&DAT_00468524 + (lVar1 + 7) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 7;
  }
  if ((uint)(*(int *)(&DAT_00468524 + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_00468524 + (lVar1 + 2) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 2;
  }
  if ((uint)(*(int *)(&DAT_00468524 + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_00468524 + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_00468524 + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_00468524 + lVar1) >> 0x15);
  if (uVar4 < 0x35) {
    uVar5 = (ulong)(*(uint *)(&DAT_00468528 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x007404f8;
    }
  }
  else {
    uVar5 = 0x5b5;
  }
  uVar2 = *(uint *)(&DAT_00468520 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x007404f8:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_004658a3)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00740534  core::unicode::unicode_data::case_ignorable::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::case_ignorable::lookup_slow */

uint __rustcall core::unicode::unicode_data::case_ignorable::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  uVar3 = 0;
  if (0x11ef2 < param_1) {
    uVar3 = 0x12;
  }
  if ((uint)(*(int *)(&DAT_004685fc + (uVar3 | 9) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 9;
  }
  if ((uint)(*(int *)(&DAT_004685fc + (uVar3 | 4) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 4;
  }
  if ((uint)(*(int *)(&DAT_004685fc + (uVar3 + 2) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 2;
  }
  if ((uint)(*(int *)(&DAT_004685fc + (uVar3 + 1) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 1;
  }
  if ((uint)(*(int *)(&DAT_004685fc + (uVar3 + 1) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_004685fc + uVar3 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_004685fc + uVar3 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + uVar3;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_004685fc + lVar1) >> 0x15);
  if (uVar4 < 0x23) {
    uVar5 = (ulong)(*(uint *)(&DAT_00468600 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00740604;
    }
  }
  else {
    uVar5 = 0x397;
  }
  uVar2 = *(uint *)(&DAT_004685f8 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00740604:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_00465e58)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00740640  core::unicode::unicode_data::grapheme_extend::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::grapheme_extend::lookup_slow */

uint __rustcall core::unicode::unicode_data::grapheme_extend::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  uVar3 = 0;
  if (0x10eaa < param_1) {
    uVar3 = 0x10;
  }
  if ((uint)(*(int *)(&DAT_0046868c + (uVar3 | 8) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 8;
  }
  if ((uint)(*(int *)(&DAT_0046868c + (uVar3 | 4) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 4;
  }
  if ((uint)(*(int *)(&DAT_0046868c + (uVar3 | 2) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 2;
  }
  if ((uint)(*(int *)(&DAT_0046868c + (uVar3 + 1) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 1;
  }
  if ((uint)(*(int *)(&DAT_0046868c + (uVar3 + 1) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_0046868c + uVar3 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_0046868c + uVar3 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + uVar3;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_0046868c + lVar1) >> 0x15);
  if (uVar4 < 0x20) {
    uVar5 = (ulong)(*(uint *)(&DAT_00468690 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x0074070c;
    }
  }
  else {
    uVar5 = 0x2ff;
  }
  uVar2 = *(uint *)(&DAT_00468688 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x0074070c:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_004661ef)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00740748  core::unicode::unicode_data::n::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::n::lookup_slow */

uint __rustcall core::unicode::unicode_data::n::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  lVar1 = 0;
  if (0x1144f < param_1) {
    lVar1 = 0x15;
  }
  if ((uint)(*(int *)(&DAT_00468710 + (lVar1 + 0xb) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 0xb;
  }
  if ((uint)(*(int *)(&DAT_00468710 + (lVar1 + 5) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 5;
  }
  if ((uint)(*(int *)(&DAT_00468710 + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_00468710 + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  if ((uint)(*(int *)(&DAT_00468710 + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_00468710 + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_00468710 + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_00468710 + lVar1) >> 0x15);
  if (uVar4 < 0x2a) {
    uVar5 = (ulong)(*(uint *)(&DAT_00468714 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00740814;
    }
  }
  else {
    uVar5 = 0x123;
  }
  uVar2 = *(uint *)(&DAT_0046870c + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00740814:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_004664ee)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00740850  core::unicode::unicode_data::default_ignorable_code_point::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::default_ignorable_code_point::lookup_slow */

uint __rustcall
core::unicode::unicode_data::default_ignorable_code_point::lookup_slow(ulong param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = (int)param_1 * 0x800;
  lVar1 = 0;
  if (0x7e < ((uint)(param_1 >> 9) & 0x7fffff)) {
    lVar1 = 6;
  }
  if ((uint)(*(int *)(&DAT_004687bc + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_004687bc + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  if ((uint)(*(int *)(&DAT_004687bc + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_004687bc + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_004687bc + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_004687bc + lVar1) >> 0x15);
  if (uVar4 < 0xb) {
    uVar5 = (ulong)(*(uint *)(&DAT_004687c0 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x007408f8;
    }
  }
  else {
    uVar5 = 0x23;
  }
  uVar2 = *(uint *)(&DAT_004687b8 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x007408f8:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_00466611)[uVar3];
      if ((int)param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00740934  core::unicode::unicode_data::cf::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::cf::lookup_slow */

uint __rustcall core::unicode::unicode_data::cf::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  lVar1 = 0;
  if (0x110bc < param_1) {
    lVar1 = 5;
  }
  if ((uint)(*(int *)(&DAT_004687ec + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_004687ec + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  if ((uint)(*(int *)(&DAT_004687ec + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_004687ec + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_004687ec + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_004687ec + lVar1) >> 0x15);
  if (uVar4 < 10) {
    uVar5 = (ulong)(*(uint *)(&DAT_004687f0 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x007409e0;
    }
  }
  else {
    uVar5 = 0x2b;
  }
  uVar2 = *(uint *)(&DAT_004687e8 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x007409e0:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_00466634)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00740a1c  core::unicode::unicode_data::lt::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::lt::lookup_slow */

uint __rustcall core::unicode::unicode_data::lt::lookup_slow(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = (uint)(param_1 >> 3) & 0x1fffffff;
  uVar3 = (int)param_1 * 0x800;
  uVar4 = 1;
  if (0x3f0 < uVar5) {
    uVar4 = 2;
  }
  uVar2 = (ulong)(0x3f0 < uVar5);
  if ((uint)(*(int *)(&DAT_00468818 + uVar4 * 4) << 0xb) <= uVar3) {
    uVar2 = uVar4;
  }
  lVar1 = uVar2 * 4;
  if ((uint)(*(int *)(&DAT_00468818 + lVar1) << 0xb) < uVar3) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(&DAT_00468818 + lVar1) << 0xb == uVar3) {
    uVar2 = uVar2 + 1;
  }
  lVar1 = uVar2 * 4;
  uVar4 = (ulong)(*(uint *)(&DAT_00468818 + lVar1) >> 0x15);
  if (uVar2 < 2) {
    uVar6 = (ulong)(*(uint *)(&DAT_0046881c + lVar1) >> 0x15);
    if (uVar2 == 0) {
      lVar1 = uVar6 + ~uVar4;
      uVar3 = 0;
      goto joined_r0x00740aa0;
    }
  }
  else {
    uVar6 = 0x15;
  }
  uVar3 = *(uint *)(&DAT_00468814 + lVar1) & 0x1fffff;
  lVar1 = uVar6 + ~uVar4;
joined_r0x00740aa0:
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + (byte)(&DAT_0046665f)[uVar4];
      if ((int)param_1 - uVar3 < uVar5) break;
      uVar4 = uVar4 + 1;
    } while (uVar6 - 1 != uVar4);
  }
  return (uint)uVar4 & 1;
}


// ===== 00740adc  core::unicode::unicode_data::lowercase::lookup =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::lowercase::lookup */

uint __rustcall core::unicode::unicode_data::lowercase::lookup(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (uint)param_1;
  if (0x1eb55 < uVar2 - 0xaa) {
    return 0;
  }
  bVar1 = PTR_BITSET_INDEX_CHUNKS_0099f850
          [((ulong)(uVar2 >> 6) & 0xf) +
           (ulong)(byte)PTR_BITSET_CHUNKS_MAP_0099f848[uVar2 >> 10] * 0x10];
  if (bVar1 < 0x39) {
    return (uint)(*(ulong *)(PTR_BITSET_CANONICAL_0099f858 + (ulong)bVar1 * 8) >> (param_1 & 0x3f))
           & 1;
  }
  uVar3 = (ulong)bVar1 - 0x39;
  if (0x4e < bVar1) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar3,0x16,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b550);
  }
  uVar4 = 1L << (uVar3 & 0x3f);
  bVar1 = (PTR_BITSET_MAPPING_0099f860 + uVar3 * 2)[1];
  uVar3 = *(ulong *)(PTR_BITSET_CANONICAL_0099f858 +
                    (ulong)(byte)PTR_BITSET_MAPPING_0099f860[uVar3 * 2] * 8);
  if ((uVar4 & 0x1f3ffe) == 0) {
    uVar3 = ~uVar3;
  }
  if ((uVar4 & 0x2cc001) != 0) {
    uVar4 = (ulong)-(uint)bVar1 & 0x3f;
    return (uint)((uVar3 >> uVar4 | uVar3 << 0x40 - uVar4) >> (param_1 & 0x3f)) & 1;
  }
  return (uint)((uVar3 >> ((ulong)bVar1 & 0x3f)) >> (param_1 & 0x3f)) & 1;
}


// ===== 00740bd4  core::unicode::unicode_data::uppercase::lookup =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::uppercase::lookup */

uint __rustcall core::unicode::unicode_data::uppercase::lookup(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (uint)param_1;
  if (0x7cc < uVar2 - 0xc0 >> 6) {
    return 0;
  }
  bVar1 = PTR_BITSET_INDEX_CHUNKS_0099f870
          [((ulong)(uVar2 >> 6) & 0xf) +
           (ulong)(byte)PTR_BITSET_CHUNKS_MAP_0099f868[uVar2 >> 10] * 0x10];
  if (bVar1 < 0x2c) {
    return (uint)(*(ulong *)(PTR_BITSET_CANONICAL_0099f878 + (ulong)bVar1 * 8) >> (param_1 & 0x3f))
           & 1;
  }
  uVar3 = (ulong)bVar1 - 0x2c;
  if (0x44 < bVar1) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar3,0x19,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b550);
  }
  uVar4 = 1L << (uVar3 & 0x3f);
  bVar1 = (PTR_BITSET_MAPPING_0099f880 + uVar3 * 2)[1];
  uVar3 = *(ulong *)(PTR_BITSET_CANONICAL_0099f878 +
                    (ulong)(byte)PTR_BITSET_MAPPING_0099f880[uVar3 * 2] * 8);
  if ((uVar4 & 0x1ffc3fd) == 0) {
    uVar3 = ~uVar3;
  }
  if ((uVar4 & 0x40fc02) != 0) {
    uVar4 = (ulong)-(uint)bVar1 & 0x3f;
    return (uint)((uVar3 >> uVar4 | uVar3 << 0x40 - uVar4) >> (param_1 & 0x3f)) & 1;
  }
  return (uint)((uVar3 >> ((ulong)bVar1 & 0x3f)) >> (param_1 & 0x3f)) & 1;
}


// ===== 00740ccc  core::num::imp::dec2flt::decimal_seq::parse_decimal_seq =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::dec2flt::decimal_seq::parse_decimal_seq */

void __rustcall
core::num::imp::dec2flt::decimal_seq::parse_decimal_seq(void *param_1,long param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong local_350;
  ulong local_348 [96];
  int local_48;
  undefined1 local_44;
  
  memset(&local_350,0,0x30d);
  uVar8 = 0;
  uVar9 = param_3;
  if (param_3 != 0) {
    do {
      uVar10 = *(byte *)(param_2 + uVar8) - 0x30;
      if (uVar10 != 0) {
        if (uVar10 < 10) {
          local_350 = 0;
          goto LAB_00740d4c;
        }
        pbVar12 = (byte *)(param_2 + uVar8);
        uVar7 = param_3 - uVar8;
        local_350 = 0;
        uVar9 = local_350;
        if (*(byte *)(param_2 + uVar8) != 0x2e) goto joined_r0x00740e70;
        uVar9 = ~uVar8 + param_3;
        pbVar15 = (byte *)(param_2 + uVar8 + 1);
        goto LAB_00740dd8;
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (param_3 != uVar8);
    uVar8 = 0;
  }
  goto LAB_00741058;
  while( true ) {
    local_350 = uVar5 + 1;
    uVar16 = (uint)*(byte *)(param_2 + uVar5 + uVar8 + 1);
    uVar10 = uVar16 - 0x30;
    if (9 < uVar10) break;
LAB_00740d4c:
    uVar5 = local_350;
    if (uVar5 < 0x300) {
      *(char *)((long)local_348 + uVar5) = (char)uVar10;
    }
    if (~uVar8 + param_3 == uVar5) {
      uVar7 = 0;
      pbVar12 = (byte *)(uVar5 + 1 + param_2 + uVar8);
      goto LAB_00740e1c;
    }
  }
  uVar7 = uVar9 - local_350;
  pbVar12 = (byte *)(param_2 + uVar8 + local_350);
  if (uVar16 == 0x2e) {
    uVar9 = ~local_350 + uVar9;
    pbVar15 = pbVar12 + 1;
    uVar5 = local_350;
    uVar8 = uVar9;
    if (local_350 != 0) {
joined_r0x00740ebc:
      do {
        uVar7 = uVar8;
        if (uVar7 < 8) goto LAB_00740f24;
        uVar13 = uVar5 + 8;
        if ((0x2ff < uVar13) ||
           (uVar8 = *(long *)pbVar15 + 0xcfcfcfcfcfcfcfd0,
           ((*(long *)pbVar15 + 0x4646464646464646U | uVar8) & 0x8080808080808080) != 0))
        goto LAB_00740f28;
        if (0x300 < uVar5) {
                    /* WARNING: Subroutine does not return */
          slice::index::slice_index_fail
                    (uVar5,0x300,0x300,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bc30);
        }
        *(ulong *)((long)local_348 + uVar5) = uVar8;
        pbVar15 = pbVar15 + 8;
        uVar5 = uVar13;
        uVar8 = uVar7 - 8;
        local_350 = uVar13;
      } while( true );
    }
LAB_00740dd8:
    if (uVar9 == 0) {
      uVar5 = 0;
      uVar7 = 0;
    }
    else {
      pbVar12 = pbVar12 + uVar7;
      uVar7 = uVar9;
      do {
        if (*pbVar15 != 0x30) {
          uVar5 = 0;
          uVar8 = uVar7;
          goto joined_r0x00740ebc;
        }
        uVar7 = uVar7 - 1;
        pbVar15 = pbVar15 + 1;
      } while (uVar7 != 0);
      uVar5 = 0;
      pbVar15 = pbVar12;
    }
    goto LAB_00740fa0;
  }
LAB_00740e1c:
  uVar5 = uVar5 + 1;
  local_350 = uVar5;
  if (uVar5 == 0) goto LAB_00740fb0;
LAB_00740e20:
  lVar17 = param_3 - uVar7;
  if (param_3 < uVar7) {
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail
              (0,lVar17,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bc48);
  }
  if (param_3 == uVar7) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    do {
      cVar3 = *(char *)(param_2 + -1 + lVar17);
      if (cVar3 != '.') {
        if (cVar3 != '0') break;
        lVar14 = lVar14 + 1;
      }
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  local_350 = uVar5 - lVar14;
  local_48 = local_48 + (int)lVar14 + (int)local_350;
  uVar9 = local_350;
  if (0x300 < local_350) {
    local_44 = 1;
    local_350 = 0x300;
    uVar9 = 0x300;
  }
  goto joined_r0x00740e70;
LAB_00740f24:
  if (uVar7 != 0) {
LAB_00740f28:
    uVar10 = *pbVar15 - 0x30;
    local_350 = uVar5;
    if (uVar10 < 10) {
      lVar14 = uVar7 - 1;
      lVar17 = 0;
      do {
        lVar18 = lVar17;
        if (uVar5 + lVar18 < 0x300) {
          *(char *)((long)local_348 + lVar18 + uVar5) = (char)uVar10;
        }
        if (lVar14 == lVar18) {
          uVar7 = 0;
          break;
        }
        uVar7 = uVar7 - 1;
        uVar10 = pbVar15[lVar18 + 1] - 0x30;
        lVar17 = lVar18 + 1;
      } while (uVar10 < 10);
      pbVar15 = pbVar15 + lVar18 + 1;
      uVar5 = uVar5 + lVar18 + 1;
      local_350 = uVar5;
    }
  }
LAB_00740fa0:
  local_48 = (int)uVar7 - (int)uVar9;
  pbVar12 = pbVar15;
  if (uVar5 != 0) goto LAB_00740e20;
LAB_00740fb0:
  uVar9 = 0;
joined_r0x00740e70:
  uVar8 = uVar9;
  if ((uVar7 != 0) && (pbVar15 = pbVar12 + 1, (*pbVar12 | 0x20) == 0x65)) {
    lVar17 = uVar7 - 1;
    if (lVar17 == 0) {
      iVar11 = 0;
    }
    else {
      bVar2 = *pbVar15;
      if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
        lVar17 = uVar7 - 2;
        if (lVar17 != 0) {
          pbVar15 = pbVar12 + 2;
          goto LAB_00740ff4;
        }
        iVar6 = 0;
      }
      else {
LAB_00740ff4:
        iVar6 = 0;
        iVar11 = 0;
        do {
          if (9 < *pbVar15 - 0x30) break;
          lVar17 = lVar17 + -1;
          iVar1 = iVar11 * 10 + (*pbVar15 - 0x30 & 0xff);
          iVar4 = iVar1;
          if (0xffff < iVar11) {
            iVar1 = iVar11;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          pbVar15 = pbVar15 + 1;
          iVar11 = iVar1;
        } while (lVar17 != 0);
      }
      iVar11 = -iVar6;
      if (bVar2 != 0x2d) {
        iVar11 = iVar6;
      }
    }
    local_48 = local_48 + iVar11;
  }
  if (uVar8 < 0x13) {
LAB_00741058:
    memset((void *)((long)local_348 + uVar8),0,0x13 - uVar8);
  }
  memcpy(param_1,&local_350,0x310);
  return;
}


// ===== 007410c0  core::num::imp::dec2flt::parse::parse_number =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::dec2flt::parse::parse_number */

void __rustcall
core::num::imp::dec2flt::parse::parse_number(long *param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  
  pbVar19 = param_2;
  uVar11 = param_3;
  if (param_3 < 8) {
    uVar9 = 0;
    if (param_3 != 0) goto LAB_00741170;
  }
  else {
    uVar9 = 0;
    do {
      uVar13 = *(long *)pbVar19 + 0xcfcfcfcfcfcfcfd0;
      if (((*(long *)pbVar19 + 0x4646464646464646U | uVar13) & 0x8080808080808080) != 0)
      goto LAB_00741170;
      uVar11 = uVar11 - 8;
      pbVar19 = pbVar19 + 8;
      uVar13 = uVar13 * 10 + (uVar13 >> 8);
      uVar9 = uVar9 * 100000000 +
              ((uVar13 & 0xff000000ff) * 0xf424000000064 +
               (uVar13 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20);
    } while (7 < uVar11);
    if (uVar11 != 0) {
LAB_00741170:
      uVar13 = 0;
      do {
        uVar5 = pbVar19[uVar13] - 0x30;
        if (9 < uVar5) {
          pbVar17 = pbVar19 + uVar13;
          lVar10 = uVar11 - uVar13;
          if (pbVar19[uVar13] != 0x2e) {
            lVar12 = 0;
            uVar18 = uVar11 - uVar13;
            uVar13 = uVar13 + (param_3 - uVar11);
            goto joined_r0x0074135c;
          }
          pbVar19 = pbVar17 + 1;
          uVar18 = ~uVar13 + uVar11;
          if (lVar10 < 9) goto LAB_00741268;
          goto LAB_0074121c;
        }
        uVar13 = uVar13 + 1;
        uVar9 = uVar9 * 10 + (ulong)(byte)uVar5;
      } while (uVar11 != uVar13);
    }
  }
  if (param_3 == 0) {
LAB_00741484:
    *(undefined1 *)((long)param_1 + 0x11) = 2;
    return;
  }
  lVar10 = 0;
  lVar14 = 0;
  lVar12 = 0;
  bVar7 = true;
  uVar13 = param_3;
  goto LAB_007411b4;
  while( true ) {
    uVar18 = uVar18 - 8;
    pbVar19 = pbVar19 + 8;
    uVar2 = uVar2 * 10 + (uVar2 >> 8);
    uVar9 = uVar9 * 100000000 +
            ((uVar2 & 0xff000000ff) * 0xf424000000064 +
             (uVar2 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20);
    if (uVar18 < 8) break;
LAB_0074121c:
    uVar2 = *(long *)pbVar19 + 0xcfcfcfcfcfcfcfd0;
    if (((*(long *)pbVar19 + 0x4646464646464646U | uVar2) & 0x8080808080808080) != 0)
    goto LAB_0074126c;
  }
LAB_00741268:
  pbVar17 = pbVar19;
  if (uVar18 != 0) {
LAB_0074126c:
    pbVar3 = pbVar19 + uVar18;
    do {
      bVar4 = *pbVar19;
      pbVar17 = pbVar19;
      if (9 < bVar4 - 0x30) break;
      uVar18 = uVar18 - 1;
      pbVar19 = pbVar19 + 1;
      uVar9 = uVar9 * 10 + (ulong)(byte)(bVar4 - 0x30);
      pbVar17 = pbVar3;
    } while (uVar18 != 0);
  }
  lVar12 = (uVar18 - uVar11) + uVar13 + 1;
  uVar13 = (~uVar13 - uVar18) + uVar13 + param_3;
joined_r0x0074135c:
  if (uVar13 == 0) goto LAB_00741484;
  if (uVar18 == 0) {
    lVar14 = 0;
    bVar7 = true;
  }
  else if ((*pbVar17 | 0x20) == 0x65) {
    lVar15 = uVar18 - 1;
    if (lVar15 == 0) goto LAB_007414e4;
    pbVar19 = pbVar17 + 1;
    bVar4 = *pbVar19;
    if ((bVar4 == 0x2d) || (uVar5 = (uint)bVar4, bVar4 == 0x2b)) {
      lVar15 = uVar18 - 2;
      if (lVar15 == 0) goto LAB_007414e4;
      pbVar19 = pbVar17 + 2;
      uVar5 = (uint)*pbVar19;
    }
    if (9 < uVar5 - 0x30) {
      *(undefined1 *)((long)param_1 + 0x11) = 2;
      return;
    }
    lVar16 = 0;
    lVar14 = 0;
    do {
      if (9 < *pbVar19 - 0x30) break;
      lVar15 = lVar15 + -1;
      lVar1 = lVar14 * 10 + (ulong)(byte)(*pbVar19 - 0x30);
      lVar6 = lVar1;
      if (0xffff < lVar14) {
        lVar1 = lVar14;
        lVar6 = lVar16;
      }
      lVar16 = lVar6;
      lVar14 = lVar1;
      pbVar19 = pbVar19 + 1;
    } while (lVar15 != 0);
    lVar14 = -lVar16;
    if (bVar4 != 0x2d) {
      lVar14 = lVar16;
    }
    bVar7 = lVar15 == 0;
    lVar12 = lVar14 + lVar12;
  }
  else {
    bVar7 = false;
    lVar14 = 0;
  }
LAB_007411b4:
  if ((long)uVar13 < 0x14) {
    bVar8 = false;
  }
  else {
    if (param_3 == 0) {
LAB_00741510:
                    /* WARNING: Subroutine does not return */
      slice::index::slice_index_fail(1,0,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bc78);
    }
    lVar15 = uVar13 - 0x13;
    uVar11 = param_3;
    pbVar19 = param_2;
    do {
      bVar4 = *pbVar19;
      if ((bVar4 != 0x2e) && (bVar4 != 0x30)) break;
      uVar11 = uVar11 - 1;
      pbVar19 = pbVar19 + 1;
      uVar5 = 0;
      if (0x2e < bVar4) {
        uVar5 = bVar4 - 0x2f;
      }
      lVar15 = lVar15 - (ulong)uVar5;
    } while (uVar11 != 0);
    if (0 < lVar15) {
      uVar9 = 0;
      lVar12 = -param_3;
      do {
        lVar16 = lVar12;
        bVar4 = *param_2;
        lVar12 = lVar16;
        if (9 < bVar4 - 0x30) goto joined_r0x00741408;
        lVar12 = lVar16 + 1;
        param_2 = param_2 + 1;
        uVar9 = uVar9 * 10 + (ulong)(byte)(bVar4 - 0x30);
      } while (uVar9 < 1000000000000000000 && lVar16 != -1);
      if (uVar9 < 1000000000000000000) {
        if (lVar16 == -1) goto LAB_00741510;
joined_r0x00741408:
        lVar12 = -1 - lVar12;
        lVar16 = lVar12;
        if (lVar12 == 0) {
          lVar10 = 0;
        }
        else {
          do {
            param_2 = param_2 + 1;
            if (9 < *param_2 - 0x30) {
              lVar10 = lVar16 - lVar12;
              goto LAB_007414c0;
            }
            uVar9 = uVar9 * 10 + (ulong)(byte)(*param_2 - 0x30);
            lVar10 = lVar16 + -1;
            bVar8 = lVar16 != 1;
            lVar16 = lVar10;
          } while (uVar9 < 1000000000000000000 && bVar8);
          lVar10 = lVar10 - lVar12;
        }
      }
      else {
        lVar10 = -lVar12 - lVar10;
      }
LAB_007414c0:
      lVar12 = lVar10 + lVar14;
    }
    bVar8 = 0 < lVar15;
  }
  if (bVar7) {
    *param_1 = lVar12;
    param_1[1] = uVar9;
    *(undefined1 *)(param_1 + 2) = 0;
    *(bool *)((long)param_1 + 0x11) = bVar8;
    return;
  }
LAB_007414e4:
  *(undefined1 *)((long)param_1 + 0x11) = 2;
  return;
}


// ===== 00741528  core::slice::sort::shared::smallsort::panic_on_ord_violation =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::shared::smallsort::panic_on_ord_violation */

void __rustcall core::slice::sort::shared::smallsort::panic_on_ord_violation(void)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt
            ("user-provided comparison function does not correctly implement a total order",0x99,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bc90);
}


// ===== 00741548  core::slice::sort::stable::drift::sqrt_approx =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::stable::drift::sqrt_approx */

ulong __rustcall core::slice::sort::stable::drift::sqrt_approx(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)LZCOUNT(param_1 | 1) ^ 0x3f;
  uVar2 = (ulong)((uVar1 & 1) + (uVar1 >> 1));
  return (1L << (uVar2 & 0x3f)) + (param_1 >> (uVar2 & 0x3f)) >> 1;
}


// ===== 00741574  core::num::imp::flt2dec::strategy::grisu::format_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::grisu::format_exact */

void __rustcall
core::num::imp::flt2dec::strategy::grisu::format_exact
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
          )

{
  long local_58;
  long lStack_50;
  long local_48;
  
  format_exact_opt(&local_58);
  if (local_58 != 0) {
    param_1[1] = lStack_50;
    *param_1 = local_58;
    param_1[2] = local_48;
    return;
  }
  dragon::format_exact(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ===== 00741604  core::num::imp::flt2dec::strategy::grisu::format_shortest =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::grisu::format_shortest */

void __rustcall
core::num::imp::flt2dec::strategy::grisu::format_shortest
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_48;
  long lStack_40;
  long local_38;
  
  format_shortest_opt(&local_48);
  if (local_48 != 0) {
    param_1[1] = lStack_40;
    *param_1 = local_48;
    param_1[2] = local_38;
    return;
  }
  dragon::format_shortest(param_1,param_2,param_3,param_4);
  return;
}


// ===== 00741680  core::num::imp::flt2dec::strategy::grisu::format_exact_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::grisu::format_exact_opt */

void __rustcall
core::num::imp::flt2dec::strategy::grisu::format_exact_opt
          (undefined8 *param_1,ulong *param_2,long param_3,ulong param_4,undefined4 param_5)

{
  short sVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *extraout_x8;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  
  uVar14 = *param_2;
  if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant > 0",0x1c,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bca8);
  }
  if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant < (1 << 61)",0x24,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bcc0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: !buf.is_empty()",0x21,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bcd8);
  }
  iVar12 = (uint)(ushort)param_2[3] - (int)LZCOUNT(uVar14);
  uVar5 = ((short)(-0x60 - (short)iVar12) * 0x50 + 0x153b0) / 0x84e;
  if (0x50 < uVar5) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check
              ((long)(int)uVar5,0x51,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bcf0);
  }
  uVar14 = uVar14 << (LZCOUNT(uVar14) & 0x3fU);
  puVar2 = (ulong *)(PTR_CACHED_POW10_0099f888 + (long)(int)uVar5 * 0x10);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *puVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar14;
  uVar5 = (-0x40 - iVar12) - (uint)(ushort)puVar2[1];
  uVar19 = (ulong)uVar5;
  uVar14 = SUB168(auVar6 * auVar7,8) - ((long)(*puVar2 * uVar14) >> 0x3f);
  lVar15 = 1L << (uVar19 & 0x3f);
  uVar16 = lVar15 - 1;
  uVar18 = uVar14 >> (uVar19 & 0x3f);
  uVar13 = uVar16 & uVar14;
  uVar17 = (uint)uVar18;
  if ((uVar13 == 0) && ((10 < param_4 || (uVar17 < *(uint *)("e()" + param_4 * 4))))) {
LAB_007417ec:
    *param_1 = 0;
    return;
  }
  sVar1 = (short)param_5;
  if (((uint)(uVar18 >> 4) & 0xfffffff) < 0x271) {
    uVar20 = 10;
    if (uVar17 < 10) {
      uVar20 = 1;
    }
    uVar9 = 100;
    if (999 < uVar17) {
      uVar9 = 1000;
    }
    uVar11 = 2;
    if (999 < uVar17) {
      uVar11 = 3;
    }
    if (99 < uVar17) {
      uVar20 = uVar9;
    }
    uVar21 = (ulong)uVar20;
    uVar9 = (uint)(9 < uVar17);
    if (99 < uVar17) {
      uVar9 = uVar11;
    }
    iVar12 = (int)(short)(((short)uVar9 - *(short *)((long)puVar2 + 10)) + 1);
    if (sVar1 < iVar12) {
LAB_00741890:
      uVar14 = 0;
      uVar4 = (long)(short)((short)iVar12 - sVar1);
      if (param_4 <= (ulong)((long)iVar12 - (long)sVar1)) {
        uVar4 = param_4;
      }
      do {
        if (param_4 == uVar14) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (param_4,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bd20);
        }
        uVar17 = 0;
        uVar20 = (uint)uVar21;
        if (uVar20 != 0) {
          uVar17 = (uint)uVar18 / uVar20;
        }
        uVar18 = (ulong)((uint)uVar18 - uVar17 * uVar20);
        *(char *)(param_3 + uVar14) = (char)uVar17 + '0';
        if (uVar4 - 1 == uVar14) goto LAB_0074190c;
        if (uVar9 == uVar14) {
          uVar14 = uVar14 + 1;
          uVar18 = 1;
          while (uVar18 >> ((uVar5 & 0xffff) - 1 & 0x3f) == 0) {
            if (param_4 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              panicking::panic_bounds_check
                        (uVar14,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bd38);
            }
            uVar21 = uVar13 * 10;
            uVar18 = uVar18 * 10;
            uVar13 = uVar21 & uVar16;
            *(char *)(param_3 + uVar14) = (char)(uVar21 >> (uVar19 & 0x3f)) + '0';
            uVar14 = uVar14 + 1;
            if (uVar4 == uVar14) {
              FUN_00743ca0(param_1);
              return;
            }
          }
          goto LAB_007417ec;
        }
        uVar14 = uVar14 + 1;
        uVar21 = uVar21 / 10;
      } while (9 < uVar20);
      panicking::panic_const::panic_const_div_by_zero
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bd08);
      param_1 = extraout_x8;
LAB_0074190c:
      FUN_00743ca0(param_1);
      return;
    }
  }
  else {
    bVar8 = 0xc34 < uVar17 >> 5;
    uVar20 = 10000;
    if (bVar8) {
      uVar20 = 100000;
    }
    uVar9 = 4;
    if (bVar8) {
      uVar9 = 5;
    }
    uVar11 = 1000000;
    if (9999999 < uVar17) {
      uVar11 = 10000000;
    }
    uVar10 = 6;
    if (9999999 < uVar17) {
      uVar10 = 7;
    }
    uVar3 = 100000000;
    if (999999999 < uVar17) {
      uVar3 = 1000000000;
    }
    uVar22 = 8;
    if (999999999 < uVar17) {
      uVar22 = 9;
    }
    if (99999999 < uVar17) {
      uVar10 = uVar22;
      uVar11 = uVar3;
    }
    if (999999 < uVar17) {
      uVar20 = uVar11;
    }
    uVar21 = (ulong)uVar20;
    if (999999 < uVar17) {
      uVar9 = uVar10;
    }
    iVar12 = (int)(short)(((short)uVar9 - *(short *)((long)puVar2 + 10)) + 1);
    if (sVar1 < iVar12) goto LAB_00741890;
  }
  FUN_00743ca0(param_1,param_3,param_4,0,iVar12,param_5,uVar14 / 10,uVar21 << (uVar19 & 0x3f),lVar15
              );
  return;
}


// ===== 00741a28  core::num::imp::flt2dec::strategy::grisu::format_shortest_opt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::grisu::format_shortest_opt */

void __rustcall
core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
          (long *param_1,ulong *param_2,long param_3,ulong param_4,undefined8 param_5,
          undefined8 param_6)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *extraout_x8;
  short sVar16;
  short extraout_w9;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong extraout_x10;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong extraout_x12;
  ulong extraout_x13;
  long lVar26;
  long extraout_x14;
  long lVar27;
  long extraout_x15;
  long lVar28;
  long extraout_x17;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  int iVar34;
  uint uVar35;
  long lVar36;
  undefined1 auVar37 [16];
  ulong local_70;
  ushort local_68;
  ulong local_48;
  
  uVar24 = *param_2;
  if (uVar24 != 0) {
    uVar19 = param_2[1];
    if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.minus > 0",0x1d,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bd68);
    }
    uVar17 = param_2[2];
    if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.plus > 0",0x1c,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bd80);
    }
    uVar18 = uVar17 + uVar24;
    if (CARRY8(uVar17,uVar24)) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.mant.checked_add(d.plus).is_som",0x36,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097be28);
    }
    local_70 = uVar24 - uVar19;
    if (uVar24 < uVar19) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097be10);
    }
    if (param_4 < 0x11) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: buf.len() >= MAX_SIG_DIGITS-+",0x2d,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bd98);
    }
    if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      panicking::panic("assertion failed: d.mant + d.plus < (1 << 61)",0x2d,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bdb0);
    }
    uVar17 = LZCOUNT(uVar18);
    local_68 = (ushort)param_2[3];
    uVar19 = local_70 << (uVar17 & 0x3f);
    local_48 = uVar19 >> (uVar17 & 0x3f);
    if (local_48 == local_70) {
      uVar21 = uVar24 << (uVar17 & 0x3f);
      local_48 = uVar21 >> (uVar17 & 0x3f);
      local_70 = uVar24;
      if (local_48 == uVar24) {
        iVar34 = (uint)local_68 - (int)uVar17;
        uVar32 = ((short)(-0x60 - (short)iVar34) * 0x50 + 0x153b0) / 0x84e;
        if (0x50 < uVar32) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    ((long)(int)uVar32,0x51,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bcf0);
        }
        uVar18 = uVar18 << (uVar17 & 0x3f);
        puVar1 = (ulong *)(PTR_CACHED_POW10_0099f888 + (long)(int)uVar32 * 0x10);
        uVar17 = *puVar1;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar17;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar18;
        lVar26 = SUB168(auVar37 * auVar7,8);
        lVar27 = -((long)(uVar17 * uVar18) >> 0x3f);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar17;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar19;
        lVar28 = SUB168(auVar5 * auVar8,8);
        uVar24 = lVar26 + lVar27 + 1;
        uVar32 = -(uint)(ushort)puVar1[1] - iVar34;
        uVar33 = uVar24 >> ((ulong)uVar32 & 0x3f);
        lVar14 = (long)(uVar17 * uVar19) >> 0x3f;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar17;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar21;
        lVar13 = SUB168(auVar6 * auVar9,8);
        uVar22 = 1L << ((ulong)uVar32 & 0x3f);
        uVar18 = (ulong)(uVar32 & 0x3f);
        lVar15 = -((long)(uVar17 * uVar21) >> 0x3f);
        uVar17 = uVar22 - 1;
        uVar19 = uVar24 & uVar17;
        uVar32 = (uint)uVar33;
        if (((uint)(uVar33 >> 4) & 0xfffffff) < 0x271) {
          uVar23 = 10;
          if (uVar32 < 10) {
            uVar23 = 1;
          }
          uVar12 = 100;
          if (999 < uVar32) {
            uVar12 = 1000;
          }
          uVar30 = 2;
          if (999 < uVar32) {
            uVar30 = 3;
          }
          if (99 < uVar32) {
            uVar23 = uVar12;
          }
          uVar12 = (uint)(9 < uVar32);
          if (99 < uVar32) {
            uVar12 = uVar30;
          }
        }
        else {
          bVar10 = 0xc34 < uVar32 >> 5;
          uVar23 = 10000;
          if (bVar10) {
            uVar23 = 100000;
          }
          uVar12 = 4;
          if (bVar10) {
            uVar12 = 5;
          }
          uVar30 = 1000000;
          if (9999999 < uVar32) {
            uVar30 = 10000000;
          }
          uVar29 = 6;
          if (9999999 < uVar32) {
            uVar29 = 7;
          }
          uVar3 = 100000000;
          if (999999999 < uVar32) {
            uVar3 = 1000000000;
          }
          uVar35 = 8;
          if (999999999 < uVar32) {
            uVar35 = 9;
          }
          if (99999999 < uVar32) {
            uVar29 = uVar35;
            uVar30 = uVar3;
          }
          if (999999 < uVar32) {
            uVar12 = uVar29;
            uVar23 = uVar30;
          }
        }
        uVar25 = 0;
        lVar2 = lVar15 + lVar13;
        uVar21 = (lVar14 - lVar28) + uVar24 + 1;
        sVar16 = ((short)uVar12 - *(short *)((long)puVar1 + 10)) + 1;
        do {
          if (param_4 == uVar25) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (param_4,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bde0);
          }
          uVar32 = 0;
          if (uVar23 != 0) {
            uVar32 = (uint)uVar33 / uVar23;
          }
          uVar33 = (ulong)((uint)uVar33 - uVar32 * uVar23);
          iVar34 = uVar32 + 0x30;
          *(char *)(param_3 + uVar25) = (char)iVar34;
          lVar36 = uVar33 << uVar18;
          uVar31 = lVar36 + uVar19;
          uVar4 = uVar21 - uVar31;
          if (uVar31 < uVar21) goto LAB_00741ca4;
          if (uVar12 == uVar25) {
            lVar26 = 1;
            uVar21 = uVar21 & uVar17;
            do {
              uVar31 = uVar21;
              uVar33 = uVar25;
              lVar27 = lVar26;
              uVar25 = uVar33 + 1;
              if (param_4 <= uVar25) {
                    /* WARNING: Subroutine does not return */
                panicking::panic_bounds_check
                          (uVar25,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bdf8);
              }
              uVar20 = uVar19 * 10;
              uVar21 = uVar31 * 10;
              lVar26 = lVar27 * 10;
              uVar19 = uVar20 & uVar17;
              uVar4 = uVar21 - uVar19;
              iVar34 = (int)(uVar20 >> uVar18) + 0x30;
              *(char *)(param_3 + uVar33 + 1) = (char)iVar34;
            } while (uVar21 < uVar19 || uVar4 == 0);
            bVar10 = uVar4 < uVar22;
            lVar28 = lVar26 * (uVar24 - lVar2);
            uVar18 = lVar28 + lVar27 * -10;
            uVar24 = lVar28 + lVar26;
            uVar17 = uVar18 - uVar19;
            if ((uVar18 < uVar19 || uVar17 == 0) || uVar4 < uVar22) {
LAB_00741e44:
              uVar17 = uVar24 - uVar19;
              if (uVar19 <= uVar24 && uVar17 != 0) {
LAB_00741e4c:
                if ((!bVar10) &&
                   ((uVar19 + uVar22 < uVar24 || ((uVar19 + uVar22) - uVar24 <= uVar17))))
                goto LAB_00741ec0;
              }
            }
            else {
              uVar31 = uVar31 * 10 - (uVar22 + uVar19);
              while ((uVar4 = uVar19 + uVar22, uVar4 < uVar18 ||
                     ((uVar22 - uVar18) + uVar19 <= uVar17))) {
                bVar10 = uVar31 < uVar22;
                iVar34 = iVar34 + -1;
                *(char *)(param_3 + uVar25) = (char)iVar34;
                uVar19 = uVar4;
                if ((uVar18 <= uVar4) ||
                   (bVar11 = uVar31 < uVar22, uVar17 = uVar17 - uVar22, uVar31 = uVar31 - uVar22,
                   bVar11)) goto LAB_00741e44;
              }
              bVar10 = false;
              uVar17 = uVar24 - uVar19;
              if (uVar19 <= uVar24 && uVar17 != 0) goto LAB_00741e4c;
            }
            if (((ulong)(lVar27 * 0x14) < uVar19 || lVar27 * 0x14 - uVar19 == 0) &&
               (uVar19 <= uVar21 + lVar27 * -0x28)) {
              lVar26 = uVar33 + 2;
              goto LAB_00741ecc;
            }
            goto LAB_00741ec0;
          }
          bVar10 = 9 < uVar23;
          uVar25 = uVar25 + 1;
          uVar31 = (ulong)uVar23 / 10;
          uVar23 = uVar23 / 10;
        } while (bVar10);
        auVar37 = panicking::panic_const::panic_const_div_by_zero
                            (&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bdc8);
        param_3 = auVar37._8_8_;
        uVar21 = auVar37._0_8_;
        param_1 = extraout_x8;
        uVar19 = extraout_x10;
        uVar25 = extraout_x12;
        uVar24 = extraout_x13;
        lVar26 = extraout_x14;
        lVar27 = extraout_x15;
        lVar28 = extraout_x17;
        sVar16 = extraout_w9;
LAB_00741ca4:
        uVar17 = (ulong)uVar23 << (uVar18 & 0x3f);
        uVar18 = (uVar24 - lVar2) - 1;
        uVar24 = (uVar24 - lVar2) + 1;
        bVar10 = uVar4 < uVar17;
        if (uVar31 < uVar18 && uVar17 <= uVar4) {
          uVar33 = (((lVar27 + lVar26) - lVar2) - uVar19) - lVar36;
          uVar22 = (((uVar19 + uVar17 + lVar15 + lVar13) - lVar27) - lVar26) + lVar36;
          uVar19 = ((((lVar27 + lVar26 + lVar14) - lVar28) - (uVar19 + uVar17)) - lVar36) + 2;
          do {
            uVar4 = uVar31 + uVar17;
            if ((uVar18 <= uVar4) && (uVar33 < uVar22)) {
              bVar10 = false;
              uVar19 = uVar24 - uVar31;
              if (uVar24 < uVar31 || uVar19 == 0) goto LAB_00741e78;
              goto LAB_00741d58;
            }
            bVar10 = uVar19 < uVar17;
            iVar34 = iVar34 + -1;
            *(char *)(param_3 + uVar25) = (char)iVar34;
            uVar31 = uVar4;
            if (uVar18 <= uVar4) break;
            uVar33 = uVar33 - uVar17;
            bVar11 = uVar17 <= uVar19;
            uVar22 = uVar22 + uVar17;
            uVar19 = uVar19 - uVar17;
          } while (bVar11);
        }
        uVar19 = uVar24 - uVar31;
        if (uVar31 <= uVar24 && uVar19 != 0) {
LAB_00741d58:
          if ((!bVar10) && ((uVar31 + uVar17 < uVar24 || ((uVar31 + uVar17) - uVar24 <= uVar19))))
          goto LAB_00741ec0;
        }
LAB_00741e78:
        if ((1 < uVar31) && (uVar31 <= uVar21 - 4)) {
          lVar26 = uVar25 + 1;
LAB_00741ecc:
          *param_1 = param_3;
          param_1[1] = lVar26;
          *(short *)(param_1 + 2) = sVar16;
          return;
        }
LAB_00741ec0:
        *param_1 = 0;
        return;
      }
    }
    panicking::assert_failed<u64,u64>
              (0,&local_48,&local_70,0,param_6,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6d8);
  }
                    /* WARNING: Subroutine does not return */
  panicking::panic("assertion failed: d.mant > 0",0x1c,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bd50);
}


// ===== 00741ff4  core::num::imp::flt2dec::strategy::dragon::format_exact =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::dragon::format_exact */

void __rustcall
core::num::imp::flt2dec::strategy::dragon::format_exact
          (undefined8 *param_1,ulong *param_2,undefined1 *param_3,ulong param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  size_t sVar11;
  uint *puVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  size_t __n;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  short sVar25;
  short sVar26;
  undefined1 uVar27;
  ulong uVar28;
  uint local_3d4 [41];
  undefined8 local_330;
  uint local_328 [38];
  undefined8 uStack_290;
  undefined8 local_288;
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
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong local_1e0;
  uint uStack_1d4;
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
  ulong local_130;
  uint local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  
  uVar17 = *param_2;
  if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant > 0",0x1c,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097be40);
  }
  if (param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.minus > 0",0x1d,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097be58);
  }
  if (param_2[2] == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.plus > 0",0x1c,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097be70);
  }
  if (CARRY8(uVar17,param_2[2])) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant.checked_add(d.plus).is_som",0x36,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bf18);
  }
  if (uVar17 < param_2[1]) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bf00);
  }
  sVar25 = (short)param_2[3];
  local_3d4[1] = (uint)uVar17;
  local_3d4[2] = (uint)(uVar17 >> 0x20);
  local_330 = 1;
  if (uVar17 >> 0x20 != 0) {
    local_330 = 2;
  }
  local_3d4[0x27] = 0;
  local_3d4[0x28] = 0;
  local_3d4[5] = 0;
  local_3d4[6] = 0;
  local_3d4[3] = 0;
  local_3d4[4] = 0;
  uVar17 = (long)((int)sVar25 - (int)LZCOUNT(uVar17 - 1)) * 0x4d104d42 + 0x1344135080;
  local_3d4[9] = 0;
  local_3d4[10] = 0;
  local_3d4[7] = 0;
  local_3d4[8] = 0;
  local_3d4[0xd] = 0;
  local_3d4[0xe] = 0;
  local_3d4[0xb] = 0;
  local_3d4[0xc] = 0;
  local_3d4[0x11] = 0;
  local_3d4[0x12] = 0;
  local_3d4[0xf] = 0;
  local_3d4[0x10] = 0;
  local_3d4[0x15] = 0;
  local_3d4[0x16] = 0;
  local_3d4[0x13] = 0;
  local_3d4[0x14] = 0;
  local_3d4[0x19] = 0;
  local_3d4[0x1a] = 0;
  local_3d4[0x17] = 0;
  local_3d4[0x18] = 0;
  local_3d4[0x1d] = 0;
  local_3d4[0x1e] = 0;
  local_3d4[0x1b] = 0;
  local_3d4[0x1c] = 0;
  local_3d4[0x21] = 0;
  local_3d4[0x22] = 0;
  local_3d4[0x1f] = 0;
  local_3d4[0x20] = 0;
  local_3d4[0x25] = 0;
  local_3d4[0x26] = 0;
  local_3d4[0x23] = 0;
  local_3d4[0x24] = 0;
  uStack_290 = 0;
  local_328[0x25] = 0;
  local_328[0x23] = 0;
  local_328[0x24] = 0;
  local_328[0x21] = 0;
  local_328[0x22] = 0;
  local_328[0x1f] = 0;
  local_328[0x20] = 0;
  local_328[0x1d] = 0;
  local_328[0x1e] = 0;
  local_328[0x1b] = 0;
  local_328[0x1c] = 0;
  local_328[0x19] = 0;
  local_328[0x1a] = 0;
  local_328[0x17] = 0;
  local_328[0x18] = 0;
  local_328[0x15] = 0;
  local_328[0x16] = 0;
  local_328[0x13] = 0;
  local_328[0x14] = 0;
  local_328[0x11] = 0;
  local_328[0x12] = 0;
  local_328[0xf] = 0;
  local_328[0x10] = 0;
  local_328[0xd] = 0;
  local_328[0xe] = 0;
  local_328[0xb] = 0;
  local_328[0xc] = 0;
  local_328[9] = 0;
  local_328[10] = 0;
  local_328[7] = 0;
  local_328[8] = 0;
  local_328[5] = 0;
  local_328[6] = 0;
  local_328[3] = 0;
  local_328[4] = 0;
  local_328[1] = 0;
  local_328[2] = 0;
  local_288 = 1;
  local_328[0] = 1;
  sVar26 = (short)(uVar17 >> 0x20);
  if (sVar25 < 0) {
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2
              (local_328,(long)-sVar25);
    if ((uVar17 >> 0x2f & 1) == 0) goto LAB_007420fc;
LAB_00742120:
    puVar12 = local_3d4 + 1;
    uVar17 = (ulong)(uint)-(int)(uVar17 >> 0x20) & 0xffff;
  }
  else {
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_3d4 + 1);
    if ((uVar17 >> 0x2f & 1) != 0) goto LAB_00742120;
LAB_007420fc:
    uVar17 = uVar17 >> 0x20 & 0x7fff;
    puVar12 = local_328;
  }
  mul_pow10(puVar12,uVar17);
  uVar28 = local_288;
  uVar17 = local_330;
  uStack_98 = CONCAT44(local_328[0x23],local_328[0x22]);
  local_a0 = CONCAT44(local_328[0x21],local_328[0x20]);
  uStack_88 = uStack_290;
  uStack_90 = CONCAT44(local_328[0x25],local_328[0x24]);
  local_80 = local_288;
  uStack_a8 = CONCAT44(local_328[0x1f],local_328[0x1e]);
  local_b0 = CONCAT44(local_328[0x1d],local_328[0x1c]);
  uStack_e8 = CONCAT44(local_328[0xf],local_328[0xe]);
  local_f0 = CONCAT44(local_328[0xd],local_328[0xc]);
  uStack_d8 = CONCAT44(local_328[0x13],local_328[0x12]);
  local_e0 = CONCAT44(local_328[0x11],local_328[0x10]);
  uStack_c8 = CONCAT44(local_328[0x17],local_328[0x16]);
  local_d0 = CONCAT44(local_328[0x15],local_328[0x14]);
  uStack_b8 = CONCAT44(local_328[0x1b],local_328[0x1a]);
  local_c0 = CONCAT44(local_328[0x19],local_328[0x18]);
  uStack_118 = CONCAT44(local_328[3],local_328[2]);
  local_120 = CONCAT44(local_328[1],local_328[0]);
  uStack_108 = CONCAT44(local_328[7],local_328[6]);
  uStack_110 = CONCAT44(local_328[5],local_328[4]);
  uStack_f8 = CONCAT44(local_328[0xb],local_328[10]);
  local_100 = CONCAT44(local_328[9],local_328[8]);
  uVar14 = param_4;
  if (9 < param_4) {
    do {
      uVar23 = local_80;
      if (0x28 < local_80) goto LAB_007428c0;
      if (local_80 != 0) {
        lVar22 = local_80 << 2;
        uVar23 = 0;
        do {
          uVar23 = (ulong)*(uint *)((long)&local_124 + lVar22) | uVar23 << 0x20;
          *(int *)((long)&local_124 + lVar22) = (int)(uVar23 / 1000000000);
          lVar22 = lVar22 + -4;
          uVar23 = uVar23 % 1000000000;
        } while (lVar22 != 0);
      }
      uVar14 = uVar14 - 9;
    } while (9 < uVar14);
  }
  uVar15 = (ulong)(uint)(*(int *)(&DAT_0046c2c4 + uVar14 * 4) << 1);
  if (*(int *)(&DAT_0046c2c4 + uVar14 * 4) << 1 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic(&DAT_00466b04,0x1b,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  uVar23 = local_80;
  if (0x28 < local_80) goto LAB_007428c0;
  uVar14 = local_330;
  if (local_80 == 0) {
    if (local_330 == 0) {
      uVar14 = 0;
    }
  }
  else {
    lVar22 = local_80 << 2;
    lVar18 = 0;
    do {
      uVar19 = (ulong)*(uint *)((long)&local_124 + lVar22) | lVar18 << 0x20;
      uVar23 = 0;
      if (uVar15 != 0) {
        uVar23 = uVar19 / uVar15;
      }
      *(int *)((long)&local_124 + lVar22) = (int)uVar23;
      lVar22 = lVar22 + -4;
      lVar18 = uVar19 - uVar23 * uVar15;
    } while (lVar22 != 0);
    if (local_330 <= local_80) {
      uVar14 = local_80;
    }
  }
  if (0x28 < uVar14) {
LAB_007428d4:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar14,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  if (uVar14 != 0) {
    puVar12 = local_3d4;
    puVar16 = (uint *)&local_120;
    uVar23 = uVar14;
    bVar1 = false;
    do {
      puVar12 = (uint *)((long)puVar12 + 4);
      uVar6 = *puVar16;
      uVar7 = *puVar12;
      bVar4 = CARRY4(uVar7 + uVar6,(uint)bVar1);
      uVar23 = uVar23 - 1;
      *puVar16 = uVar6 + uVar7 + (uint)bVar1;
      puVar16 = puVar16 + 1;
      bVar1 = CARRY4(uVar7,uVar6) || bVar4;
    } while (uVar23 != 0);
    if (CARRY4(uVar7,uVar6) || bVar4) {
      if (uVar14 == 0x28) goto LAB_007429f0;
      *(undefined4 *)((long)&local_120 + uVar14 * 4) = 1;
      uVar14 = uVar14 + 1;
    }
  }
  local_80 = uVar14;
  uVar23 = local_288;
  if (local_288 <= uVar14) {
    uVar23 = uVar14;
  }
  if (0x28 < uVar23) {
LAB_007428ec:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar23,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  lVar22 = uVar23 << 2;
  do {
    sVar25 = (short)param_5;
    if (lVar22 == 0) goto LAB_0074270c;
    puVar12 = (uint *)((long)&local_124 + lVar22);
    uVar6 = *(uint *)((long)local_328 + lVar22 + -4);
    lVar22 = lVar22 + -4;
  } while (*puVar12 == uVar6);
  if (*puVar12 < uVar6) {
    if (local_330 != 0) {
      lVar22 = local_330 << 2;
      uVar14 = 0;
      puVar12 = local_3d4;
      do {
        puVar12 = (uint *)((long)puVar12 + 4);
        lVar22 = lVar22 + -4;
        uVar23 = uVar14 + (ulong)*puVar12 * 10;
        uVar14 = uVar23 >> 0x20;
        *puVar12 = (uint)uVar23;
      } while (lVar22 != 0);
      if (uVar14 != 0) {
        if (uVar17 == 0x28) {
LAB_00742a28:
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (0x28,uVar17,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
        }
        local_3d4[uVar17 + 1] = (int)(uVar23 >> 0x20);
        uVar17 = uVar17 + 1;
      }
    }
    local_330 = uVar17;
    if (sVar26 < sVar25) goto LAB_0074271c;
LAB_00742358:
    uVar15 = (long)(short)(sVar26 - sVar25);
    if (param_4 <= (ulong)((long)sVar26 - (long)sVar25)) {
      uVar15 = param_4;
    }
    if (uVar15 == 0) goto LAB_00742720;
    uStack_1f8 = CONCAT44(local_328[0x23],local_328[0x22]);
    local_200 = CONCAT44(local_328[0x21],local_328[0x20]);
    uStack_1f0 = CONCAT44(local_328[0x25],local_328[0x24]);
    uStack_1e8 = uStack_290;
    uStack_238 = CONCAT44(local_328[0x13],local_328[0x12]);
    local_240 = CONCAT44(local_328[0x11],local_328[0x10]);
    uStack_228 = CONCAT44(local_328[0x17],local_328[0x16]);
    uStack_230 = CONCAT44(local_328[0x15],local_328[0x14]);
    local_1e0 = local_288;
    uStack_218 = CONCAT44(local_328[0x1b],local_328[0x1a]);
    local_220 = CONCAT44(local_328[0x19],local_328[0x18]);
    uStack_208 = CONCAT44(local_328[0x1f],local_328[0x1e]);
    uStack_210 = CONCAT44(local_328[0x1d],local_328[0x1c]);
    uStack_278 = CONCAT44(local_328[3],local_328[2]);
    local_280 = CONCAT44(local_328[1],local_328[0]);
    uStack_268 = CONCAT44(local_328[7],local_328[6]);
    uStack_270 = CONCAT44(local_328[5],local_328[4]);
    uStack_258 = CONCAT44(local_328[0xb],local_328[10]);
    local_260 = CONCAT44(local_328[9],local_328[8]);
    uStack_248 = CONCAT44(local_328[0xf],local_328[0xe]);
    uStack_250 = CONCAT44(local_328[0xd],local_328[0xc]);
    local_3d4[0] = param_5;
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_280,1);
    uStack_148 = CONCAT44(local_328[0x23],local_328[0x22]);
    local_150 = CONCAT44(local_328[0x21],local_328[0x20]);
    uStack_140 = CONCAT44(local_328[0x25],local_328[0x24]);
    uStack_138 = uStack_290;
    uStack_188 = CONCAT44(local_328[0x13],local_328[0x12]);
    local_190 = CONCAT44(local_328[0x11],local_328[0x10]);
    uStack_178 = CONCAT44(local_328[0x17],local_328[0x16]);
    uStack_180 = CONCAT44(local_328[0x15],local_328[0x14]);
    local_130 = local_288;
    uStack_168 = CONCAT44(local_328[0x1b],local_328[0x1a]);
    local_170 = CONCAT44(local_328[0x19],local_328[0x18]);
    uStack_158 = CONCAT44(local_328[0x1f],local_328[0x1e]);
    uStack_160 = CONCAT44(local_328[0x1d],local_328[0x1c]);
    uStack_1c8 = CONCAT44(local_328[3],local_328[2]);
    local_1d0 = CONCAT44(local_328[1],local_328[0]);
    uStack_1b8 = CONCAT44(local_328[7],local_328[6]);
    uStack_1c0 = CONCAT44(local_328[5],local_328[4]);
    uStack_1a8 = CONCAT44(local_328[0xb],local_328[10]);
    local_1b0 = CONCAT44(local_328[9],local_328[8]);
    uStack_198 = CONCAT44(local_328[0xf],local_328[0xe]);
    uStack_1a0 = CONCAT44(local_328[0xd],local_328[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_1d0,2);
    uStack_98 = CONCAT44(local_328[0x23],local_328[0x22]);
    local_a0 = CONCAT44(local_328[0x21],local_328[0x20]);
    uStack_90 = CONCAT44(local_328[0x25],local_328[0x24]);
    uStack_88 = uStack_290;
    uStack_d8 = CONCAT44(local_328[0x13],local_328[0x12]);
    local_e0 = CONCAT44(local_328[0x11],local_328[0x10]);
    uStack_c8 = CONCAT44(local_328[0x17],local_328[0x16]);
    local_d0 = CONCAT44(local_328[0x15],local_328[0x14]);
    local_80 = local_288;
    uStack_b8 = CONCAT44(local_328[0x1b],local_328[0x1a]);
    local_c0 = CONCAT44(local_328[0x19],local_328[0x18]);
    uStack_a8 = CONCAT44(local_328[0x1f],local_328[0x1e]);
    local_b0 = CONCAT44(local_328[0x1d],local_328[0x1c]);
    uStack_118 = CONCAT44(local_328[3],local_328[2]);
    local_120 = CONCAT44(local_328[1],local_328[0]);
    uStack_108 = CONCAT44(local_328[7],local_328[6]);
    uStack_110 = CONCAT44(local_328[5],local_328[4]);
    uStack_f8 = CONCAT44(local_328[0xb],local_328[10]);
    local_100 = CONCAT44(local_328[9],local_328[8]);
    uStack_e8 = CONCAT44(local_328[0xf],local_328[0xe]);
    local_f0 = CONCAT44(local_328[0xd],local_328[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_120,3);
    uVar10 = local_80;
    uVar9 = local_130;
    uVar19 = local_1e0;
    uVar24 = 0;
    do {
      uVar23 = local_330;
      if (0x28 < local_330) goto LAB_007428c0;
      lVar22 = 0;
      uVar5 = uVar24 + 1;
      do {
        if (local_330 * 4 - lVar22 == 0) {
          if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
            slice::index::slice_index_fail
                      (uVar24,uVar15,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bee8);
          }
          if (uVar15 - uVar24 != 0) {
            memset(param_3 + uVar24,0x30,uVar15 - uVar24);
          }
          goto LAB_00742898;
        }
        uVar8 = lVar22 + 4;
        lVar22 = lVar22 + 4;
      } while (*(int *)((long)local_3d4 + uVar8) == 0);
      uVar14 = uVar10;
      if (uVar10 <= local_330) {
        uVar14 = local_330;
      }
      if (0x28 < uVar14) goto LAB_007428d4;
      lVar22 = uVar14 << 2;
      do {
        if (lVar22 == 0) goto LAB_007424d8;
        puVar16 = (uint *)((long)&local_124 + lVar22);
        puVar12 = (uint *)((long)local_3d4 + lVar22);
        lVar22 = lVar22 + -4;
      } while (*puVar12 == *puVar16);
      if (*puVar12 < *puVar16) {
        bVar13 = 0;
      }
      else {
LAB_007424d8:
        puVar12 = local_3d4;
        uVar17 = uVar14;
        puVar16 = (uint *)&local_120;
        bVar1 = true;
        do {
          puVar12 = (uint *)((long)puVar12 + 4);
          uVar6 = *puVar12;
          uVar7 = ~*puVar16;
          bVar4 = CARRY4(uVar6 + uVar7,(uint)bVar1);
          uVar17 = uVar17 - 1;
          *puVar12 = uVar7 + uVar6 + (uint)bVar1;
          puVar16 = puVar16 + 1;
          bVar1 = CARRY4(uVar6,uVar7) || bVar4;
        } while (uVar17 != 0);
        if (!CARRY4(uVar6,uVar7) && !bVar4) goto LAB_007429ac;
        bVar13 = 8;
        local_330 = uVar14;
      }
      uVar14 = uVar9;
      if (uVar9 <= local_330) {
        uVar14 = local_330;
      }
      if (0x28 < uVar14) goto LAB_007428d4;
      lVar22 = uVar14 << 2;
      do {
        if (lVar22 == 0) goto LAB_0074255c;
        puVar16 = (uint *)((long)&uStack_1d4 + lVar22);
        puVar12 = (uint *)((long)local_3d4 + lVar22);
        lVar22 = lVar22 + -4;
      } while (*puVar12 == *puVar16);
      if (*puVar16 <= *puVar12) {
LAB_0074255c:
        if (uVar14 != 0) {
          puVar12 = local_3d4;
          uVar17 = uVar14;
          puVar16 = (uint *)&local_1d0;
          bVar1 = true;
          do {
            puVar12 = (uint *)((long)puVar12 + 4);
            uVar6 = *puVar12;
            uVar7 = ~*puVar16;
            bVar4 = CARRY4(uVar6 + uVar7,(uint)bVar1);
            uVar17 = uVar17 - 1;
            *puVar12 = uVar7 + uVar6 + (uint)bVar1;
            puVar16 = puVar16 + 1;
            bVar1 = CARRY4(uVar6,uVar7) || bVar4;
          } while (uVar17 != 0);
          if (!CARRY4(uVar6,uVar7) && !bVar4) goto LAB_007429ac;
        }
        bVar13 = bVar13 | 4;
        local_330 = uVar14;
      }
      uVar23 = uVar19;
      if (uVar19 <= local_330) {
        uVar23 = local_330;
      }
      if (0x28 < uVar23) goto LAB_007428ec;
      lVar22 = uVar23 << 2;
      do {
        if (lVar22 == 0) goto LAB_007425e0;
        uVar6 = *(uint *)((long)&local_288 + lVar22 + 4);
        puVar12 = (uint *)((long)local_3d4 + lVar22);
        lVar22 = lVar22 + -4;
      } while (*puVar12 == uVar6);
      if (uVar6 <= *puVar12) {
LAB_007425e0:
        if (uVar23 != 0) {
          puVar12 = local_3d4;
          uVar17 = uVar23;
          puVar16 = (uint *)&local_280;
          bVar1 = true;
          do {
            puVar12 = (uint *)((long)puVar12 + 4);
            uVar6 = *puVar12;
            uVar7 = ~*puVar16;
            bVar4 = CARRY4(uVar6 + uVar7,(uint)bVar1);
            uVar17 = uVar17 - 1;
            *puVar12 = uVar7 + uVar6 + (uint)bVar1;
            puVar16 = puVar16 + 1;
            bVar1 = CARRY4(uVar6,uVar7) || bVar4;
          } while (uVar17 != 0);
          if (!CARRY4(uVar6,uVar7) && !bVar4) goto LAB_007429ac;
        }
        bVar13 = bVar13 + 2;
        local_330 = uVar23;
      }
      uVar23 = uVar28;
      if (uVar28 <= local_330) {
        uVar23 = local_330;
      }
      if (0x28 < uVar23) goto LAB_007428c0;
      lVar22 = uVar23 << 2;
      do {
        if (lVar22 == 0) goto LAB_00742660;
        puVar12 = (uint *)((long)local_3d4 + lVar22);
        uVar6 = *(uint *)((long)local_328 + lVar22 + -4);
        lVar22 = lVar22 + -4;
      } while (*puVar12 == uVar6);
      if (uVar6 <= *puVar12) {
LAB_00742660:
        if (uVar23 != 0) {
          puVar12 = local_3d4;
          uVar17 = uVar23;
          puVar16 = local_328;
          bVar1 = true;
          do {
            puVar12 = (uint *)((long)puVar12 + 4);
            uVar6 = *puVar12;
            uVar7 = ~*puVar16;
            bVar4 = CARRY4(uVar6 + uVar7,(uint)bVar1);
            uVar17 = uVar17 - 1;
            *puVar12 = uVar7 + uVar6 + (uint)bVar1;
            puVar16 = puVar16 + 1;
            bVar1 = CARRY4(uVar6,uVar7) || bVar4;
          } while (uVar17 != 0);
          if (!CARRY4(uVar6,uVar7) && !bVar4) {
LAB_007429ac:
                    /* WARNING: Subroutine does not return */
            panicking::panic(&DAT_00466b1f,0x1a,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
        }
        bVar13 = bVar13 + 1;
        local_330 = uVar23;
      }
      uVar17 = local_330;
      if (uVar24 == param_4) {
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check
                  (param_4,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bed0);
      }
      param_3[uVar24] = bVar13 + 0x30;
      if (local_330 != 0) {
        lVar22 = local_330 << 2;
        uVar14 = 0;
        puVar12 = local_3d4;
        do {
          puVar12 = (uint *)((long)puVar12 + 4);
          lVar22 = lVar22 + -4;
          uVar23 = uVar14 + (ulong)*puVar12 * 10;
          uVar14 = uVar23 >> 0x20;
          *puVar12 = (uint)uVar23;
        } while (lVar22 != 0);
        if (uVar14 != 0) {
          if (uVar17 == 0x28) goto LAB_00742a28;
          local_3d4[uVar17 + 1] = (int)(uVar23 >> 0x20);
          uVar17 = uVar17 + 1;
        }
      }
      local_330 = uVar17;
      uVar24 = uVar5;
    } while (uVar5 != uVar15);
    bVar1 = false;
    param_5 = local_3d4[0];
  }
  else {
LAB_0074270c:
    sVar26 = sVar26 + 1;
    if (sVar25 <= sVar26) goto LAB_00742358;
LAB_0074271c:
    uVar15 = 0;
LAB_00742720:
    bVar1 = true;
  }
  if (uVar28 != 0) {
    lVar22 = uVar28 << 2;
    uVar17 = 0;
    puVar12 = local_328;
    do {
      lVar22 = lVar22 + -4;
      uVar14 = (ulong)*puVar12 * 5 + uVar17;
      uVar17 = uVar14 >> 0x20;
      *puVar12 = (uint)uVar14;
      puVar12 = puVar12 + 1;
    } while (lVar22 != 0);
    if (uVar17 != 0) {
      if (uVar28 == 0x28) {
LAB_007429f0:
                    /* WARNING: Subroutine does not return */
        panicking::panic_bounds_check(0x28,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
      }
      local_328[uVar28] = (uint)(uVar14 >> 0x20);
      uVar28 = uVar28 + 1;
    }
  }
  local_288 = uVar28;
  uVar23 = uVar28;
  if (uVar28 <= local_330) {
    uVar23 = local_330;
  }
  if (0x28 < uVar23) {
LAB_007428c0:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar23,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  lVar22 = uVar23 << 2;
  do {
    if (lVar22 == 0) goto LAB_007427c4;
    uVar6 = *(uint *)((long)local_3d4 + lVar22);
    uVar7 = *(uint *)((long)local_328 + lVar22 + -4);
    lVar22 = lVar22 + -4;
  } while (uVar6 == uVar7);
  cVar2 = uVar7 <= uVar6 && uVar6 != uVar7;
  if (uVar7 > uVar6) {
    cVar2 = -1;
  }
  if (cVar2 == '\0') {
LAB_007427c4:
    if (bVar1) {
      uVar15 = 0;
      goto LAB_00742898;
    }
    uVar17 = uVar15 - 1;
    if (param_4 <= uVar17) {
                    /* WARNING: Subroutine does not return */
      panicking::panic_bounds_check(uVar17,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097be88)
      ;
    }
    if ((param_3[uVar17] & 1) != 0) goto LAB_00742804;
  }
  else if (cVar2 == '\x01') {
LAB_00742804:
    if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
      slice::index::slice_index_fail
                (0,uVar15,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bea0);
    }
    sVar11 = 0;
    puVar20 = param_3;
    do {
      __n = sVar11;
      if (uVar15 == __n) {
        uVar27 = 0x31;
        if (!bVar1) {
          *param_3 = 0x31;
          uVar27 = 0x30;
          memset(param_3 + 1,0x30,uVar15 - 1);
        }
        sVar25 = sVar26 + 1;
        bVar1 = (short)param_5 <= sVar26;
        sVar26 = sVar25;
        if ((bVar1) && (uVar15 < param_4)) {
          param_3[uVar15] = uVar27;
          uVar15 = uVar15 + 1;
        }
        goto LAB_00742890;
      }
      puVar21 = puVar20 + -1;
      pcVar3 = puVar20 + (uVar15 - 1);
      sVar11 = __n + 1;
      puVar20 = puVar21;
    } while (*pcVar3 == '9');
    pcVar3 = puVar21 + uVar15;
    *pcVar3 = *pcVar3 + '\x01';
    memset(pcVar3 + 1,0x30,__n);
  }
LAB_00742890:
  if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail
              (0,uVar15,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097beb8);
  }
LAB_00742898:
  *param_1 = param_3;
  param_1[1] = uVar15;
  *(short *)(param_1 + 2) = sVar26;
  return;
}


// ===== 00742a38  core::num::imp::flt2dec::strategy::dragon::format_shortest =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::dragon::format_shortest */

void __rustcall
core::num::imp::flt2dec::strategy::dragon::format_shortest
          (undefined8 *param_1,ulong *param_2,undefined1 *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  bool bVar11;
  uint uVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  long lVar22;
  size_t __n;
  ulong uVar23;
  short local_5e0;
  undefined8 local_5d8;
  uint local_5d0 [2];
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_530;
  uint local_528 [2];
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  ulong local_488;
  uint local_480 [2];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  uint local_3d8 [38];
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong local_290;
  uint uStack_284;
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
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong local_1e0;
  uint uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_130;
  uint uStack_124;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  
  uVar16 = *param_2;
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant > 0",0x1c,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bf30);
  }
  uVar15 = param_2[1];
  if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.minus > 0",0x1d,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bf48);
  }
  uVar14 = param_2[2];
  if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.plus > 0",0x1c,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bf60);
  }
  if (CARRY8(uVar14,uVar16)) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant.checked_add(d.plus).is_som",0x36,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bff0);
  }
  if (uVar16 < uVar15) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bfd8);
  }
  if (param_4 < 0x11) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: buf.len() >= MAX_SIG_DIGITS-+",0x2d,
                     &PTR_s__rustc_48a229ceaefd4985c50990b14_0097bf78);
  }
  local_480[0] = (uint)uVar14;
  sVar6 = (short)param_2[3];
  lVar22 = (long)sVar6;
  local_5d0[0] = (uint)uVar16;
  local_5d0[1] = (uint)(uVar16 >> 0x20);
  local_530 = 1;
  if (uVar16 >> 0x20 != 0) {
    local_530 = 2;
  }
  cVar5 = *(char *)((long)param_2 + 0x1a);
  local_538 = 0;
  uStack_540 = 0;
  local_548 = 0;
  local_528[0] = (uint)uVar15;
  local_528[1] = (uint)(uVar15 >> 0x20);
  uStack_4c8 = 0;
  local_4d0 = 0;
  uStack_4b8 = 0;
  local_4c0 = 0;
  uStack_4a8 = 0;
  local_4b0 = 0;
  uStack_498 = 0;
  local_4a0 = 0;
  uStack_470 = 0;
  local_478 = 0;
  uStack_460 = 0;
  uStack_468 = 0;
  uStack_450 = 0;
  local_458 = 0;
  uStack_440 = 0;
  uStack_448 = 0;
  uStack_430 = 0;
  local_438 = 0;
  uStack_420 = 0;
  local_428 = 0;
  uStack_410 = 0;
  local_418 = 0;
  uStack_400 = 0;
  local_408 = 0;
  uStack_3f0 = 0;
  local_3f8 = 0;
  uStack_518 = 0;
  local_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uVar16 = (long)((int)sVar6 - (int)LZCOUNT(uVar14 + uVar16 + -1)) * 0x4d104d42 + 0x1344135080;
  uStack_4f8 = 0;
  local_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  local_4e0 = 0;
  local_488 = 1;
  if (uVar15 >> 0x20 != 0) {
    local_488 = 2;
  }
  local_490 = 0;
  local_3e0 = 1;
  if (uVar14 >> 0x20 != 0) {
    local_3e0 = 2;
  }
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5b0 = 0;
  local_5b8 = 0;
  uStack_5a0 = 0;
  local_5a8 = 0;
  uStack_590 = 0;
  local_598 = 0;
  uStack_580 = 0;
  local_588 = 0;
  uStack_570 = 0;
  local_578 = 0;
  uStack_560 = 0;
  local_568 = 0;
  uStack_550 = 0;
  local_558 = 0;
  local_3e8 = 0;
  local_480[1] = (uint)(uVar14 >> 0x20);
  uStack_340 = 0;
  local_3d8[0x25] = 0;
  local_3d8[0x23] = 0;
  local_3d8[0x24] = 0;
  local_3d8[0x21] = 0;
  local_3d8[0x22] = 0;
  local_3d8[0x1f] = 0;
  local_3d8[0x20] = 0;
  local_3d8[0x1d] = 0;
  local_3d8[0x1e] = 0;
  local_3d8[0x1b] = 0;
  local_3d8[0x1c] = 0;
  local_3d8[0x19] = 0;
  local_3d8[0x1a] = 0;
  local_3d8[0x17] = 0;
  local_3d8[0x18] = 0;
  local_3d8[0x15] = 0;
  local_3d8[0x16] = 0;
  local_3d8[0x13] = 0;
  local_3d8[0x14] = 0;
  local_3d8[0x11] = 0;
  local_3d8[0x12] = 0;
  local_3d8[0xf] = 0;
  local_3d8[0x10] = 0;
  local_3d8[0xd] = 0;
  local_3d8[0xe] = 0;
  local_3d8[0xb] = 0;
  local_3d8[0xc] = 0;
  local_3d8[9] = 0;
  local_3d8[10] = 0;
  local_3d8[7] = 0;
  local_3d8[8] = 0;
  local_3d8[5] = 0;
  local_3d8[6] = 0;
  local_3d8[3] = 0;
  local_3d8[4] = 0;
  local_3d8[1] = 0;
  local_3d8[2] = 0;
  local_338 = 1;
  local_3d8[0] = 1;
  local_5e0 = (short)(uVar16 >> 0x20);
  if (lVar22 < 0) {
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2
              (local_3d8,(long)-sVar6);
    if ((uVar16 >> 0x2f & 1) != 0) goto LAB_00742bfc;
LAB_00742bd8:
    uVar16 = uVar16 >> 0x20 & 0x7fff;
    puVar9 = local_3d8;
  }
  else {
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_5d0,lVar22);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_528,lVar22);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_480,lVar22);
    if ((uVar16 >> 0x2f & 1) == 0) goto LAB_00742bd8;
LAB_00742bfc:
    uVar16 = (ulong)(uint)-(int)(uVar16 >> 0x20);
    mul_pow10(local_5d0,uVar16 & 0xffff);
    mul_pow10(local_528,uVar16 & 0xffff);
    puVar9 = local_480;
    uVar16 = uVar16 & 0xffff;
  }
  mul_pow10(puVar9,uVar16);
  uVar14 = local_338;
  uVar8 = local_3e0;
  uVar15 = local_530;
  local_80 = local_530;
  uStack_98 = local_548;
  local_a0 = uStack_550;
  uStack_88 = local_538;
  uStack_90 = uStack_540;
  uVar16 = local_3e0;
  if (local_3e0 <= local_530) {
    uVar16 = local_530;
  }
  uStack_d8 = local_588;
  local_e0 = uStack_590;
  uStack_c8 = local_578;
  uStack_d0 = uStack_580;
  uStack_b8 = local_568;
  local_c0 = uStack_570;
  uStack_a8 = local_558;
  uStack_b0 = uStack_560;
  uStack_118 = uStack_5c8;
  local_120 = CONCAT44(local_5d0[1],local_5d0[0]);
  uStack_108 = local_5b8;
  uStack_110 = uStack_5c0;
  uStack_f8 = local_5a8;
  local_100 = uStack_5b0;
  uStack_e8 = local_598;
  uStack_f0 = uStack_5a0;
  if (0x28 < uVar16) {
LAB_007434b0:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar16,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  local_5d8 = param_1;
  if (uVar16 != 0) {
    puVar9 = local_480;
    puVar17 = (uint *)&local_120;
    uVar18 = uVar16;
    bVar11 = false;
    do {
      uVar3 = *puVar17;
      uVar4 = *puVar9;
      bVar1 = CARRY4(uVar4 + uVar3,(uint)bVar11);
      uVar18 = uVar18 - 1;
      *puVar17 = uVar3 + uVar4 + (uint)bVar11;
      puVar9 = puVar9 + 1;
      puVar17 = puVar17 + 1;
      bVar11 = CARRY4(uVar4,uVar3) || bVar1;
    } while (uVar18 != 0);
    if (CARRY4(uVar4,uVar3) || bVar1) {
      if (uVar16 == 0x28) goto LAB_007435c4;
      *(undefined4 *)((long)&local_120 + uVar16 * 4) = 1;
      uVar16 = uVar16 + 1;
    }
  }
  local_80 = uVar16;
  if (uVar16 <= local_338) {
    uVar16 = local_338;
  }
  if (uVar16 < 0x29) {
    uVar16 = uVar16 << 2;
    do {
      if (uVar16 == 0) goto LAB_00742d0c;
      uVar4 = *(uint *)((long)&uStack_124 + uVar16);
      uVar3 = *(uint *)((long)local_3d8 + (uVar16 - 4));
      uVar16 = uVar16 - 4;
    } while (uVar3 == uVar4);
    uVar12 = (uint)(uVar4 <= uVar3 && uVar3 != uVar4);
    if (uVar4 > uVar3) {
      uVar12 = 0xffffffff;
    }
    uVar16 = (ulong)uVar12;
LAB_00742d0c:
    if ((char)uVar16 < cVar5) {
      local_5e0 = local_5e0 + 1;
    }
    else {
      uVar16 = local_530;
      if (0x28 < local_530) goto LAB_007434b0;
      if (local_530 != 0) {
        lVar22 = local_530 << 2;
        uVar16 = 0;
        puVar9 = local_5d0;
        do {
          lVar22 = lVar22 + -4;
          uVar18 = uVar16 + (ulong)*puVar9 * 10;
          uVar16 = uVar18 >> 0x20;
          *puVar9 = (uint)uVar18;
          puVar9 = puVar9 + 1;
        } while (lVar22 != 0);
        if (uVar16 != 0) {
          uVar16 = uVar15;
          if (uVar15 == 0x28) {
LAB_007435c4:
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (0x28,uVar16,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          local_5d0[uVar15] = (uint)(uVar18 >> 0x20);
          uVar15 = uVar15 + 1;
        }
      }
      uVar16 = local_488;
      local_530 = uVar15;
      if (0x28 < local_488) goto LAB_00743498;
      if (local_488 != 0) {
        lVar22 = local_488 << 2;
        uVar15 = 0;
        puVar9 = local_528;
        do {
          lVar22 = lVar22 + -4;
          uVar18 = uVar15 + (ulong)*puVar9 * 10;
          uVar15 = uVar18 >> 0x20;
          *puVar9 = (uint)uVar18;
          puVar9 = puVar9 + 1;
        } while (lVar22 != 0);
        if (uVar15 != 0) {
          if (uVar16 == 0x28) goto LAB_0074359c;
          local_528[uVar16] = (uint)(uVar18 >> 0x20);
          uVar16 = uVar16 + 1;
        }
      }
      local_488 = uVar16;
      if (uVar8 != 0) {
        lVar22 = uVar8 << 2;
        uVar16 = 0;
        puVar9 = local_480;
        do {
          lVar22 = lVar22 + -4;
          uVar15 = uVar16 + (ulong)*puVar9 * 10;
          uVar16 = uVar15 >> 0x20;
          *puVar9 = (uint)uVar15;
          puVar9 = puVar9 + 1;
        } while (lVar22 != 0);
        if (uVar16 != 0) {
          if (uVar8 == 0x28) {
LAB_0074359c:
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (0x28,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          local_480[uVar8] = (uint)(uVar15 >> 0x20);
          uVar8 = uVar8 + 1;
        }
      }
    }
    local_3e0 = uVar8;
    uStack_2a8 = CONCAT44(local_3d8[0x23],local_3d8[0x22]);
    local_2b0 = CONCAT44(local_3d8[0x21],local_3d8[0x20]);
    uStack_2a0 = CONCAT44(local_3d8[0x25],local_3d8[0x24]);
    uStack_298 = uStack_340;
    uStack_2e8 = CONCAT44(local_3d8[0x13],local_3d8[0x12]);
    local_2f0 = CONCAT44(local_3d8[0x11],local_3d8[0x10]);
    uStack_2d8 = CONCAT44(local_3d8[0x17],local_3d8[0x16]);
    uStack_2e0 = CONCAT44(local_3d8[0x15],local_3d8[0x14]);
    local_290 = local_338;
    uStack_2c8 = CONCAT44(local_3d8[0x1b],local_3d8[0x1a]);
    local_2d0 = CONCAT44(local_3d8[0x19],local_3d8[0x18]);
    uStack_2b8 = CONCAT44(local_3d8[0x1f],local_3d8[0x1e]);
    uStack_2c0 = CONCAT44(local_3d8[0x1d],local_3d8[0x1c]);
    uStack_328 = CONCAT44(local_3d8[3],local_3d8[2]);
    local_330 = CONCAT44(local_3d8[1],local_3d8[0]);
    uStack_318 = CONCAT44(local_3d8[7],local_3d8[6]);
    uStack_320 = CONCAT44(local_3d8[5],local_3d8[4]);
    uStack_308 = CONCAT44(local_3d8[0xb],local_3d8[10]);
    local_310 = CONCAT44(local_3d8[9],local_3d8[8]);
    uStack_2f8 = CONCAT44(local_3d8[0xf],local_3d8[0xe]);
    uStack_300 = CONCAT44(local_3d8[0xd],local_3d8[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_330,1);
    uStack_1f8 = CONCAT44(local_3d8[0x23],local_3d8[0x22]);
    local_200 = CONCAT44(local_3d8[0x21],local_3d8[0x20]);
    uStack_1f0 = CONCAT44(local_3d8[0x25],local_3d8[0x24]);
    uStack_1e8 = uStack_340;
    uStack_238 = CONCAT44(local_3d8[0x13],local_3d8[0x12]);
    local_240 = CONCAT44(local_3d8[0x11],local_3d8[0x10]);
    uStack_228 = CONCAT44(local_3d8[0x17],local_3d8[0x16]);
    uStack_230 = CONCAT44(local_3d8[0x15],local_3d8[0x14]);
    local_1e0 = local_338;
    uStack_218 = CONCAT44(local_3d8[0x1b],local_3d8[0x1a]);
    local_220 = CONCAT44(local_3d8[0x19],local_3d8[0x18]);
    uStack_208 = CONCAT44(local_3d8[0x1f],local_3d8[0x1e]);
    uStack_210 = CONCAT44(local_3d8[0x1d],local_3d8[0x1c]);
    uStack_278 = CONCAT44(local_3d8[3],local_3d8[2]);
    local_280 = CONCAT44(local_3d8[1],local_3d8[0]);
    uStack_268 = CONCAT44(local_3d8[7],local_3d8[6]);
    uStack_270 = CONCAT44(local_3d8[5],local_3d8[4]);
    uStack_258 = CONCAT44(local_3d8[0xb],local_3d8[10]);
    local_260 = CONCAT44(local_3d8[9],local_3d8[8]);
    uStack_248 = CONCAT44(local_3d8[0xf],local_3d8[0xe]);
    uStack_250 = CONCAT44(local_3d8[0xd],local_3d8[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_280,2);
    uStack_148 = CONCAT44(local_3d8[0x23],local_3d8[0x22]);
    local_150 = CONCAT44(local_3d8[0x21],local_3d8[0x20]);
    local_140 = CONCAT44(local_3d8[0x25],local_3d8[0x24]);
    uStack_138 = uStack_340;
    uStack_188 = CONCAT44(local_3d8[0x13],local_3d8[0x12]);
    local_190 = CONCAT44(local_3d8[0x11],local_3d8[0x10]);
    uStack_178 = CONCAT44(local_3d8[0x17],local_3d8[0x16]);
    local_180 = CONCAT44(local_3d8[0x15],local_3d8[0x14]);
    local_130 = local_338;
    uStack_168 = CONCAT44(local_3d8[0x1b],local_3d8[0x1a]);
    local_170 = CONCAT44(local_3d8[0x19],local_3d8[0x18]);
    uStack_158 = CONCAT44(local_3d8[0x1f],local_3d8[0x1e]);
    local_160 = CONCAT44(local_3d8[0x1d],local_3d8[0x1c]);
    uStack_1c8 = CONCAT44(local_3d8[3],local_3d8[2]);
    local_1d0 = CONCAT44(local_3d8[1],local_3d8[0]);
    uStack_1b8 = CONCAT44(local_3d8[7],local_3d8[6]);
    local_1c0 = CONCAT44(local_3d8[5],local_3d8[4]);
    uStack_1a8 = CONCAT44(local_3d8[0xb],local_3d8[10]);
    local_1b0 = CONCAT44(local_3d8[9],local_3d8[8]);
    uStack_198 = CONCAT44(local_3d8[0xf],local_3d8[0xe]);
    local_1a0 = CONCAT44(local_3d8[0xd],local_3d8[0xc]);
    <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(&local_1d0,3);
    uVar18 = local_130;
    uVar8 = local_1e0;
    uVar15 = local_290;
    uVar16 = local_130;
    if (local_130 <= local_530) {
      uVar16 = local_530;
    }
    if (uVar16 < 0x29) {
      __n = 0;
      do {
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) goto LAB_00742f84;
          puVar9 = (uint *)((long)&uStack_1d4 + lVar22);
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == *puVar9);
        if (uVar3 < *puVar9) {
          bVar13 = 0;
        }
        else {
LAB_00742f84:
          if (uVar16 != 0) {
            puVar9 = (uint *)&local_1d0;
            puVar17 = local_5d0;
            uVar10 = uVar16;
            bVar11 = true;
            do {
              uVar3 = *puVar17;
              uVar4 = ~*puVar9;
              bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar11);
              uVar10 = uVar10 - 1;
              *puVar17 = uVar4 + uVar3 + (uint)bVar11;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
              bVar11 = CARRY4(uVar3,uVar4) || bVar1;
            } while (uVar10 != 0);
            if (!CARRY4(uVar3,uVar4) && !bVar1) goto LAB_007434f4;
          }
          bVar13 = 8;
          local_530 = uVar16;
        }
        uVar16 = uVar8;
        if (uVar8 <= local_530) {
          uVar16 = local_530;
        }
        if (0x28 < uVar16) goto LAB_007434b0;
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) goto LAB_00743008;
          puVar9 = (uint *)((long)&uStack_284 + lVar22);
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == *puVar9);
        if (*puVar9 <= uVar3) {
LAB_00743008:
          if (uVar16 != 0) {
            puVar9 = (uint *)&local_280;
            puVar17 = local_5d0;
            uVar10 = uVar16;
            bVar11 = true;
            do {
              uVar3 = *puVar17;
              uVar4 = ~*puVar9;
              bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar11);
              uVar10 = uVar10 - 1;
              *puVar17 = uVar4 + uVar3 + (uint)bVar11;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
              bVar11 = CARRY4(uVar3,uVar4) || bVar1;
            } while (uVar10 != 0);
            if (!CARRY4(uVar3,uVar4) && !bVar1) goto LAB_007434f4;
          }
          bVar13 = bVar13 | 4;
          local_530 = uVar16;
        }
        uVar16 = uVar15;
        if (uVar15 <= local_530) {
          uVar16 = local_530;
        }
        if (0x28 < uVar16) break;
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) goto LAB_0074308c;
          uVar4 = *(uint *)((long)&local_338 + lVar22 + 4);
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == uVar4);
        if (uVar4 <= uVar3) {
LAB_0074308c:
          if (uVar16 != 0) {
            puVar9 = (uint *)&local_330;
            puVar17 = local_5d0;
            uVar10 = uVar16;
            bVar11 = true;
            do {
              uVar3 = *puVar17;
              uVar4 = ~*puVar9;
              bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar11);
              uVar10 = uVar10 - 1;
              *puVar17 = uVar4 + uVar3 + (uint)bVar11;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
              bVar11 = CARRY4(uVar3,uVar4) || bVar1;
            } while (uVar10 != 0);
            if (!CARRY4(uVar3,uVar4) && !bVar1) goto LAB_007434f4;
          }
          bVar13 = bVar13 + 2;
          local_530 = uVar16;
        }
        uVar16 = uVar14;
        if (uVar14 <= local_530) {
          uVar16 = local_530;
        }
        if (0x28 < uVar16) {
                    /* WARNING: Subroutine does not return */
          slice::index::slice_index_fail
                    (0,uVar16,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
        }
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) goto LAB_00743114;
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          uVar4 = *(uint *)((long)local_3d8 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == uVar4);
        if (uVar4 <= uVar3) {
LAB_00743114:
          if (uVar16 != 0) {
            puVar9 = local_3d8;
            puVar17 = local_5d0;
            uVar10 = uVar16;
            bVar11 = true;
            do {
              uVar3 = *puVar17;
              uVar4 = ~*puVar9;
              bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar11);
              uVar10 = uVar10 - 1;
              *puVar17 = uVar4 + uVar3 + (uint)bVar11;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
              bVar11 = CARRY4(uVar3,uVar4) || bVar1;
            } while (uVar10 != 0);
            if (!CARRY4(uVar3,uVar4) && !bVar1) {
LAB_007434f4:
                    /* WARNING: Subroutine does not return */
              panicking::panic(&DAT_00466b1f,0x1a,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
            }
          }
          bVar13 = bVar13 + 1;
          local_530 = uVar16;
        }
        uVar23 = local_3e0;
        uVar20 = local_488;
        uVar10 = local_530;
        if (__n == param_4) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (param_4,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bf90);
        }
        param_3[__n] = bVar13 + 0x30;
        uVar16 = local_488;
        if (local_488 <= local_530) {
          uVar16 = local_530;
        }
        if (0x28 < uVar16) break;
        uVar2 = __n + 1;
        lVar22 = uVar16 << 2;
        do {
          if (lVar22 == 0) {
            cVar21 = '\0';
            goto LAB_007431b4;
          }
          uVar4 = *(uint *)((long)local_528 + lVar22 + -4);
          uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
          lVar22 = lVar22 + -4;
        } while (uVar3 == uVar4);
        cVar21 = uVar4 <= uVar3 && uVar3 != uVar4;
        if (uVar4 > uVar3) {
          cVar21 = -1;
        }
LAB_007431b4:
        local_80 = local_530;
        uStack_98 = local_548;
        local_a0 = uStack_550;
        uStack_88 = local_538;
        uStack_90 = uStack_540;
        uVar16 = local_3e0;
        if (local_3e0 <= local_530) {
          uVar16 = local_530;
        }
        uStack_d8 = local_588;
        local_e0 = uStack_590;
        uStack_c8 = local_578;
        uStack_d0 = uStack_580;
        uStack_b8 = local_568;
        local_c0 = uStack_570;
        uStack_a8 = local_558;
        uStack_b0 = uStack_560;
        uStack_118 = uStack_5c8;
        local_120 = CONCAT44(local_5d0[1],local_5d0[0]);
        uStack_108 = local_5b8;
        uStack_110 = uStack_5c0;
        uStack_f8 = local_5a8;
        local_100 = uStack_5b0;
        uStack_e8 = local_598;
        uStack_f0 = uStack_5a0;
        if (0x28 < uVar16) goto LAB_007434b0;
        if (uVar16 != 0) {
          uVar19 = uVar16;
          puVar9 = local_480;
          puVar17 = (uint *)&local_120;
          bVar11 = false;
          do {
            uVar3 = *puVar17;
            uVar4 = *puVar9;
            bVar1 = CARRY4(uVar4 + uVar3,(uint)bVar11);
            uVar19 = uVar19 - 1;
            *puVar17 = uVar3 + uVar4 + (uint)bVar11;
            puVar9 = puVar9 + 1;
            puVar17 = puVar17 + 1;
            bVar11 = CARRY4(uVar4,uVar3) || bVar1;
          } while (uVar19 != 0);
          if (CARRY4(uVar4,uVar3) || bVar1) {
            if (uVar16 == 0x28) goto LAB_007435c4;
            *(undefined4 *)((long)&local_120 + uVar16 * 4) = 1;
            uVar16 = uVar16 + 1;
          }
        }
        local_80 = uVar16;
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        if (0x28 < uVar16) {
                    /* WARNING: Subroutine does not return */
          slice::index::slice_index_fail
                    (0,uVar16,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
        }
        uVar16 = uVar16 << 2;
        do {
          if (uVar16 == 0) goto LAB_00743284;
          uVar3 = *(uint *)((long)local_3d8 + (uVar16 - 4));
          uVar4 = *(uint *)((long)&uStack_124 + uVar16);
          uVar16 = uVar16 - 4;
        } while (uVar3 == uVar4);
        uVar12 = (uint)(uVar4 <= uVar3 && uVar3 != uVar4);
        if (uVar4 > uVar3) {
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulong)uVar12;
LAB_00743284:
        if (cVar21 < cVar5) {
          puVar7 = local_5d8;
          if (cVar5 <= (char)uVar16) goto joined_r0x007433bc;
          <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(local_5d0,1);
          if (uVar14 <= local_530) {
            uVar14 = local_530;
          }
          uVar16 = uVar14;
          if (0x28 < uVar14) goto LAB_007434b0;
          lVar22 = uVar14 << 2;
          goto LAB_00743398;
        }
        if ((char)uVar16 < cVar5) goto LAB_007433c4;
        if (local_530 != 0) {
          lVar22 = local_530 << 2;
          uVar16 = 0;
          puVar9 = local_5d0;
          do {
            lVar22 = lVar22 + -4;
            uVar19 = uVar16 + (ulong)*puVar9 * 10;
            uVar16 = uVar19 >> 0x20;
            *puVar9 = (uint)uVar19;
            puVar9 = puVar9 + 1;
          } while (lVar22 != 0);
          if (uVar16 != 0) {
            if (uVar10 == 0x28) goto LAB_0074359c;
            local_5d0[uVar10] = (uint)(uVar19 >> 0x20);
            uVar10 = uVar10 + 1;
          }
        }
        local_530 = uVar10;
        if (uVar20 != 0) {
          lVar22 = uVar20 << 2;
          uVar16 = 0;
          puVar9 = local_528;
          do {
            lVar22 = lVar22 + -4;
            uVar19 = uVar16 + (ulong)*puVar9 * 10;
            uVar16 = uVar19 >> 0x20;
            *puVar9 = (uint)uVar19;
            puVar9 = puVar9 + 1;
          } while (lVar22 != 0);
          if (uVar16 != 0) {
            if (uVar20 == 0x28) goto LAB_0074359c;
            local_528[uVar20] = (uint)(uVar19 >> 0x20);
            uVar20 = uVar20 + 1;
          }
        }
        local_488 = uVar20;
        if (uVar23 != 0) {
          lVar22 = uVar23 << 2;
          uVar16 = 0;
          puVar9 = local_480;
          do {
            lVar22 = lVar22 + -4;
            uVar20 = uVar16 + (ulong)*puVar9 * 10;
            uVar16 = uVar20 >> 0x20;
            *puVar9 = (uint)uVar20;
            puVar9 = puVar9 + 1;
          } while (lVar22 != 0);
          if (uVar16 != 0) {
            if (uVar23 == 0x28) goto LAB_0074359c;
            local_480[uVar23] = (uint)(uVar20 >> 0x20);
            uVar23 = uVar23 + 1;
          }
        }
        local_3e0 = uVar23;
        uVar16 = uVar18;
        if (uVar18 <= uVar10) {
          uVar16 = uVar10;
        }
        __n = uVar2;
      } while (uVar16 < 0x29);
    }
  }
LAB_00743498:
                    /* WARNING: Subroutine does not return */
  slice::index::slice_index_fail(0,uVar16,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  while( true ) {
    uVar3 = *(uint *)((long)local_5d0 + lVar22 + -4);
    uVar4 = *(uint *)((long)local_3d8 + lVar22 + -4);
    lVar22 = lVar22 + -4;
    if (uVar3 != uVar4) break;
LAB_00743398:
    if (lVar22 == 0) goto LAB_007433c4;
  }
  puVar7 = local_5d8;
  if (uVar4 <= uVar3) {
LAB_007433c4:
    puVar7 = local_5d8;
    uVar16 = 0;
    do {
      if (__n + uVar16 == -1) {
        *param_3 = 0x31;
        memset(param_3 + 1,0x30,__n);
        if (param_4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_bounds_check
                    (uVar2,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bfa8);
        }
        param_3[uVar2] = 0x30;
        uVar2 = __n + 2;
        local_5e0 = local_5e0 + 1;
        goto joined_r0x007433bc;
      }
      lVar22 = uVar16 + __n;
      uVar16 = uVar16 - 1;
    } while (param_3[lVar22] == '9');
    lVar22 = uVar16 + __n;
    param_3[lVar22 + 1] = param_3[lVar22 + 1] + '\x01';
    memset(param_3 + lVar22 + 2,0x30,~uVar16);
  }
joined_r0x007433bc:
  if (uVar2 <= param_4) {
    *puVar7 = param_3;
    puVar7[1] = uVar2;
    *(short *)(puVar7 + 2) = local_5e0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  slice::index::slice_index_fail(0,uVar2,param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097bfc0);
}


// ===== 007435e8  core::num::imp::flt2dec::strategy::dragon::mul_pow10 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::strategy::dragon::mul_pow10 */

void __rustcall core::num::imp::flt2dec::strategy::dragon::mul_pow10(uint *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  if (param_2 < 8) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    if (uVar1 < 0x29) {
      if (uVar1 != 0) {
        lVar3 = uVar1 << 2;
        uVar7 = *(uint *)(&DAT_0046c2c4 + param_2 * 4);
        uVar2 = 0;
        puVar4 = param_1;
        do {
          lVar3 = lVar3 + -4;
          uVar5 = uVar2 + (ulong)*puVar4 * (ulong)uVar7;
          uVar2 = uVar5 >> 0x20;
          *puVar4 = (uint)uVar5;
          puVar4 = puVar4 + 1;
        } while (lVar3 != 0);
        if (uVar2 != 0) {
          if (uVar1 == 0x28) {
LAB_007437c0:
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (0x28,uVar1,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
          }
          param_1[uVar1] = (uint)(uVar5 >> 0x20);
          uVar1 = uVar1 + 1;
        }
      }
      *(ulong *)(param_1 + 0x28) = uVar1;
      return;
    }
LAB_007437ac:
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail(0,uVar1,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
  }
  uVar2 = param_2 & 7;
  if (uVar2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    if (0x28 < uVar1) goto LAB_007437ac;
    if (uVar1 != 0) {
      uVar5 = 0;
      uVar7 = *(uint *)(&DAT_0046c2c4 + uVar2 * 4);
      lVar3 = uVar1 << 2;
      puVar4 = param_1;
      do {
        lVar3 = lVar3 + -4;
        uVar6 = uVar5 + (ulong)*puVar4 * (ulong)(uVar7 >> uVar2);
        uVar5 = uVar6 >> 0x20;
        *puVar4 = (uint)uVar6;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      if (uVar5 != 0) {
        if (uVar1 == 0x28) goto LAB_007437c0;
        param_1[uVar1] = (uint)(uVar6 >> 0x20);
        uVar1 = uVar1 + 1;
      }
    }
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  uVar7 = (uint)param_2;
  if ((uVar7 >> 3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    if (0x28 < uVar1) goto LAB_007437ac;
    if (uVar1 != 0) {
      lVar3 = uVar1 << 2;
      uVar2 = 0;
      puVar4 = param_1;
      do {
        lVar3 = lVar3 + -4;
        uVar5 = uVar2 + (ulong)*puVar4 * 0x5f5e1;
        uVar2 = uVar5 >> 0x20;
        *puVar4 = (uint)uVar5;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      if (uVar2 != 0) {
        if (uVar1 == 0x28) goto LAB_007437c0;
        param_1[uVar1] = (uint)(uVar5 >> 0x20);
        uVar1 = uVar1 + 1;
      }
    }
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_0046c2ec,2);
  }
  if ((uVar7 >> 5 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_0046c2f4,3);
  }
  if ((uVar7 >> 6 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_0046c300,5);
  }
  if ((uVar7 >> 7 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_0046c314,10);
  }
  if ((uVar7 >> 8 & 1) != 0) {
    param_1 = (uint *)<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
                                (param_1,&DAT_0046c33c,0x13);
  }
  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2(param_1,param_2);
  return;
}


// ===== 007437d0  <core::slice::[_]>::align_to_offsets::gcd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::[_]>::align_to_offsets::gcd */

void __rustcall <core::slice::[_]>::align_to_offsets::gcd(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    do {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = param_1 / param_2;
      }
      uVar1 = param_1 - uVar1 * param_2;
      param_1 = param_2;
      param_2 = uVar1;
    } while (uVar1 != 0);
  }
  return;
}


// ===== 007437ec  FUN_007437ec =====

undefined1  [16] FUN_007437ec(long *param_1,undefined2 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  if (param_3 == 0) {
    return ZEXT816(0) << 0x40;
  }
  pbVar8 = (byte *)*param_1;
  lVar11 = param_1[1];
  if (param_3 != 1) {
    uVar2 = FUN_00734e34(param_1);
    if ((uVar2 & 1) != 0) {
      uVar6 = (uint)(uVar2 >> 8);
      uVar5 = (uint)(uVar2 >> 0x18);
      uVar2 = 0;
LAB_0074383c:
      uVar4 = 1;
      (param_2 + uVar2)[1] = (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff) << 8);
      param_2[uVar2] = (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
      param_3 = uVar2 + 2;
      goto LAB_00743bb4;
    }
    *param_1 = (long)pbVar8;
    param_1[1] = lVar11;
  }
  if (lVar11 != 0) {
    pbVar10 = pbVar8 + 1;
    bVar1 = *pbVar8;
    uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
    if (bVar1 < 0x3a) {
      uVar5 = bVar1 - 0x30;
    }
    if (uVar5 < 0x10) {
      lVar9 = lVar11 + -1;
      if (lVar9 != 0) {
        bVar1 = pbVar8[1];
        uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
        if (bVar1 < 0x3a) {
          uVar6 = bVar1 - 0x30;
        }
        if (uVar6 < 0x10) {
          uVar5 = uVar6 | uVar5 << 4;
          lVar9 = lVar11 + -2;
          if (lVar9 == 0) {
LAB_00743b70:
            lVar9 = 0;
            pbVar10 = pbVar8 + lVar11;
          }
          else {
            bVar1 = pbVar8[2];
            uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
            if (bVar1 < 0x3a) {
              uVar6 = bVar1 - 0x30;
            }
            if (uVar6 < 0x10) {
              uVar5 = uVar6 | uVar5 << 4;
              lVar9 = lVar11 + -3;
              if (lVar9 == 0) goto LAB_00743b70;
              bVar1 = pbVar8[3];
              uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
              if (bVar1 < 0x3a) {
                uVar6 = bVar1 - 0x30;
              }
              if (uVar6 < 0x10) {
                uVar5 = uVar6 | uVar5 << 4;
                lVar9 = lVar11 + -4;
                if (lVar9 == 0) goto LAB_00743b70;
                pbVar10 = pbVar8 + 4;
                bVar1 = *pbVar10;
                uVar6 = (bVar1 - 0x41 & 0xffffffde) + 10;
                if (bVar1 < 0x3a) {
                  uVar6 = bVar1 - 0x30;
                }
                if (uVar6 < 0x10) goto LAB_00743ba8;
              }
              else {
                pbVar10 = pbVar8 + 3;
              }
            }
            else {
              pbVar10 = pbVar8 + 2;
            }
          }
        }
      }
      *param_1 = (long)pbVar10;
      param_1[1] = lVar9;
      *param_2 = (short)uVar5;
      if (param_3 == 1) {
        uVar4 = 0;
        param_3 = 1;
      }
      else {
        uVar2 = 1;
        lVar11 = param_3 * 2 + -2;
        do {
          if (uVar2 < param_3 - 1) {
            if (lVar9 != 0) {
              bVar1 = *pbVar10;
              *param_1 = (long)(pbVar10 + 1);
              param_1[1] = lVar9 + -1;
              if ((bVar1 == 0x3a) && (uVar3 = FUN_00734e34(param_1), (uVar3 & 1) != 0)) {
                uVar6 = (uint)(uVar3 >> 8);
                uVar5 = (uint)(uVar3 >> 0x18) & 0xffff;
                goto LAB_0074383c;
              }
            }
            *param_1 = (long)pbVar10;
            param_1[1] = lVar9;
          }
          if (lVar9 == 0) {
LAB_00743b64:
            uVar4 = 0;
            *param_1 = (long)pbVar10;
            param_1[1] = lVar9;
            param_3 = uVar2;
            goto LAB_00743bb4;
          }
          bVar1 = *pbVar10;
          *param_1 = (long)(pbVar10 + 1);
          param_1[1] = lVar9 + -1;
          if ((bVar1 != 0x3a) || (lVar9 + -1 == 0)) goto LAB_00743b64;
          bVar1 = pbVar10[1];
          uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          if (bVar1 < 0x3a) {
            uVar5 = bVar1 - 0x30;
          }
          if (0xf < uVar5) goto LAB_00743b64;
          lVar7 = lVar9 + -2;
          pbVar8 = pbVar10 + 2;
          if (lVar7 != 0) {
            bVar1 = pbVar10[2];
            uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
            if (bVar1 < 0x3a) {
              uVar6 = bVar1 - 0x30;
            }
            if (uVar6 < 0x10) {
              uVar5 = uVar6 | uVar5 << 4;
              lVar7 = lVar9 + -3;
              if (lVar7 == 0) {
LAB_00743b0c:
                lVar7 = 0;
                pbVar8 = pbVar10 + lVar9;
              }
              else {
                bVar1 = pbVar10[3];
                uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
                if (bVar1 < 0x3a) {
                  uVar6 = bVar1 - 0x30;
                }
                if (uVar6 < 0x10) {
                  uVar5 = uVar6 | uVar5 << 4;
                  lVar7 = lVar9 + -4;
                  if (lVar7 == 0) goto LAB_00743b0c;
                  bVar1 = pbVar10[4];
                  uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
                  if (bVar1 < 0x3a) {
                    uVar6 = bVar1 - 0x30;
                  }
                  if (uVar6 < 0x10) {
                    uVar5 = uVar6 | uVar5 << 4;
                    lVar7 = lVar9 + -5;
                    if (lVar7 == 0) goto LAB_00743b0c;
                    pbVar8 = pbVar10 + 5;
                    bVar1 = *pbVar8;
                    uVar6 = (bVar1 - 0x41 & 0xffffffde) + 10;
                    if (bVar1 < 0x3a) {
                      uVar6 = bVar1 - 0x30;
                    }
                    if (uVar6 < 0x10) goto LAB_00743b64;
                  }
                  else {
                    pbVar8 = pbVar10 + 4;
                  }
                }
                else {
                  pbVar8 = pbVar10 + 3;
                }
              }
            }
          }
          *param_1 = (long)pbVar8;
          param_1[1] = lVar7;
          param_2[uVar2] = (short)uVar5;
          lVar11 = lVar11 + -2;
          uVar2 = uVar2 + 1;
          lVar9 = lVar7;
          pbVar10 = pbVar8;
        } while (lVar11 != 0);
        uVar4 = 0;
      }
      goto LAB_00743bb4;
    }
  }
LAB_00743ba8:
  uVar4 = 0;
  *param_1 = (long)pbVar8;
  param_1[1] = lVar11;
  param_3 = 0;
LAB_00743bb4:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = param_3;
  return auVar12;
}


// ===== 00743bd0  FUN_00743bd0 =====

undefined8 FUN_00743bd0(undefined8 param_1,long param_2,int param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_3 != -1) && (uVar1 = (**(code **)(param_2 + 0x20))(param_1,param_3), (uVar1 & 1) != 0))
  {
    return 1;
  }
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00743c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2 + 0x18))(param_1,param_4,param_5);
    return uVar2;
  }
  return 0;
}


// ===== 00743c58  core::slice::copy_from_slice_impl::len_mismatch_fail =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::copy_from_slice_impl::len_mismatch_fail */

void __rustcall
core::slice::copy_from_slice_impl::len_mismatch_fail(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined8 *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_40;
  puStack_28 = PTR_fmt_0099f540;
  local_20 = &uStack_38;
  puStack_18 = PTR_fmt_0099f540;
  local_40 = param_2;
  uStack_38 = param_1;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_003684d1,&local_30);
}


// ===== 00743c90  core::io::error::os_functions::set_functions::set_functions_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::io::error::os_functions::set_functions::set_functions_inner */

void __rustcall
core::io::error::os_functions::set_functions::set_functions_inner(undefined8 param_1)

{
  *(undefined8 *)PTR_PTR_0099f738 = param_1;
  return;
}


// ===== 00743ca0  FUN_00743ca0 =====

void FUN_00743ca0(undefined8 *param_1,undefined1 *param_2,ulong param_3,ulong param_4,short param_5,
                 short param_6,ulong param_7,ulong param_8,ulong param_9)

{
  char *pcVar1;
  ulong uVar2;
  size_t sVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  size_t __n;
  undefined1 uVar6;
  
  if ((param_9 < param_8) && (param_9 < param_8 - param_9)) {
    if ((param_7 < param_8 - param_7) && (param_9 << 1 <= param_8 + param_7 * -2)) {
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,param_4,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c078);
      }
      *param_1 = param_2;
      param_1[1] = param_4;
      *(short *)(param_1 + 2) = param_5;
      return;
    }
    uVar2 = param_7 - param_9;
    if ((param_9 <= param_7 && uVar2 != 0) && (param_8 - uVar2 <= uVar2)) {
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,param_4,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c060);
      }
      puVar4 = param_2;
      sVar3 = 0;
      do {
        __n = sVar3;
        if (param_4 == __n) {
          uVar6 = 0x31;
          if (param_4 != 0) {
            *param_2 = 0x31;
            uVar6 = 0x30;
            memset(param_2 + 1,0x30,param_4 - 1);
          }
          param_5 = param_5 + 1;
          if ((param_6 < param_5) && (param_4 < param_3)) {
            param_2[param_4] = uVar6;
            param_4 = param_4 + 1;
          }
          goto LAB_00743e3c;
        }
        puVar5 = puVar4 + -1;
        pcVar1 = puVar4 + (param_4 - 1);
        puVar4 = puVar5;
        sVar3 = __n + 1;
      } while (*pcVar1 == '9');
      pcVar1 = puVar5 + param_4;
      *pcVar1 = *pcVar1 + '\x01';
      memset(pcVar1 + 1,0x30,__n);
LAB_00743e3c:
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,param_4,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c048);
      }
      *param_1 = param_2;
      param_1[1] = param_4;
      *(short *)(param_1 + 2) = param_5;
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00743ea4  FUN_00743ea4 =====

undefined4 FUN_00743ea4(undefined8 param_1,long param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  ulong local_70;
  undefined8 uStack_68;
  
  uVar7 = 0;
  uVar6 = 0;
  bVar4 = false;
  pbVar1 = param_3 + param_4;
  local_8c = 0;
  do {
    if ((bVar4) && (uVar6 < uVar7)) {
      uVar8 = uVar6 + 1;
      uStack_94._0_5_ = CONCAT14((char)uVar8,(undefined4)uStack_94);
      if (uVar7 < 0x81) goto LAB_00744018;
LAB_00743f00:
      uVar6 = uVar8;
      uVar5 = local_9c & 0xffffffff;
    }
    else {
      if (param_3 == pbVar1) {
        return 0;
      }
      bVar2 = *param_3;
      pbVar3 = param_3;
      while( true ) {
        uVar6 = (uint)bVar2;
        param_3 = pbVar3 + 1;
        if ((char)bVar2 < '\0') {
          if (uVar6 < 0xe0) {
            uVar6 = pbVar3[1] & 0x3f | (uVar6 & 0x1f) << 6;
            param_3 = pbVar3 + 2;
          }
          else {
            uVar7 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
            if (uVar6 < 0xf0) {
              uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
              param_3 = pbVar3 + 3;
            }
            else {
              param_3 = pbVar3 + 4;
              uVar6 = pbVar3[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
            }
          }
        }
        FUN_00735594(&local_70,uVar6,0x10001);
        local_9c = local_70;
        uStack_94._4_1_ = (byte)((ulong)uStack_68 >> 0x20);
        uVar6 = (uint)uStack_94._4_1_;
        uStack_94._5_1_ = (byte)((ulong)uStack_68 >> 0x28);
        uVar7 = (uint)uStack_94._5_1_;
        if (uVar6 < uVar7) break;
        if (param_3 == pbVar1) {
          return 0;
        }
        bVar2 = *param_3;
        pbVar3 = param_3;
        uStack_94 = uStack_68;
      }
      uVar8 = uVar6 + 1;
      uStack_94._5_3_ = (undefined3)((ulong)uStack_68 >> 0x28);
      uStack_94._0_4_ = (undefined4)uStack_68;
      uStack_94._0_5_ = CONCAT14((char)uVar8,(undefined4)uStack_94);
      if (0x80 < uVar7) goto LAB_00743f00;
LAB_00744018:
      uVar5 = (ulong)*(byte *)((long)&local_9c + (ulong)uVar6);
      uVar6 = uVar8;
    }
    uVar5 = (**(code **)(param_2 + 0x20))(param_1,uVar5);
    bVar4 = true;
    if ((uVar5 & 1) != 0) {
      return 1;
    }
  } while( true );
}


// ===== 00744044  FUN_00744044 =====

ulong FUN_00744044(undefined8 *param_1,ulong param_2,uint param_3,uint param_4,undefined8 param_5,
                  long param_6,char *param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *extraout_x1;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 local_c8;
  long lStack_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_a0;
  ulong local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  ulong *local_70;
  undefined8 *puStack_68;
  ulong *local_60;
  char **ppcStack_58;
  ulong local_38;
  
  uVar3 = *(uint *)(param_1 + 2);
  local_a0 = 0x30;
  local_a8 = 0x3030303030303030;
  local_c8 = param_5;
  lStack_c0 = param_6;
  local_b8 = param_7;
  local_b0 = param_8;
  if (param_3 == 0) {
    uVar9 = (ulong)*(ushort *)((long)param_1 + 0x16);
    local_98 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = (ulong)*(ushort *)((long)param_1 + 0x16);
    local_98 = 9;
    if ((uVar3 & 0x10000000) != 0) {
      local_98 = uVar9;
    }
    uVar7 = uVar9;
    if (local_98 == 0) {
      if (param_3 < param_4 * 5) {
        uVar7 = 0;
      }
      else {
        uVar13 = param_2 & 0xffffffff;
        if (param_3 == param_4 * 5) {
LAB_00744280:
          if ((uVar13 & 1) == 0) goto LAB_007442d0;
        }
LAB_00744284:
        uVar13 = uVar9;
        if (local_98 != 0) {
          do {
            uVar10 = uVar13 - 1;
            bVar4 = *(byte *)((long)&local_b0 + uVar13 + 7);
            cVar11 = '0';
            if (bVar4 < 0x39) {
              cVar11 = bVar4 + 1;
            }
            *(char *)((long)&local_b0 + uVar13 + 7) = cVar11;
          } while ((0x38 < bVar4) && (uVar13 = uVar10, uVar10 != 0));
          if (bVar4 < 0x39) goto LAB_007442d0;
        }
        if (param_2 == 0xffffffffffffffff) {
          local_90 = 0;
          bVar5 = false;
          goto LAB_007442dc;
        }
        param_2 = param_2 + 1;
      }
    }
    else {
      uVar8 = 0;
      if (param_4 != 0) {
        uVar8 = param_3 / param_4;
      }
      param_3 = param_3 - uVar8 * param_4;
      cVar11 = (char)uVar8 + '0';
      local_a8 = CONCAT71(0x30303030303030,cVar11);
      if (param_3 == 0) {
        local_98 = 1;
        uVar7 = 1;
      }
      else {
        uVar8 = param_4 / 10;
        if (local_98 == 1) {
LAB_00744214:
          if (uVar8 * 5 <= param_3) {
            uVar13 = (ulong)*(byte *)((long)&local_b0 + local_98 + 7);
            if (param_3 == uVar8 * 5) goto LAB_00744280;
            goto LAB_00744284;
          }
        }
        else {
          if (param_4 < 10) {
LAB_007445d0:
            core::panicking::panic_const::panic_const_div_by_zero
                      (&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c090);
                    /* WARNING: Could not recover jumptable at 0x007445f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (**(code **)(extraout_x1[1] + 0x18))(*extraout_x1,&UNK_0046c38b,6);
            return uVar7;
          }
          uVar8 = 0;
          if (param_4 / 10 != 0) {
            uVar8 = param_3 / (param_4 / 10);
          }
          param_3 = param_3 - uVar8 * (param_4 / 10);
          local_a8._0_2_ = CONCAT11((char)uVar8 + '0',cVar11);
          local_a8 = CONCAT62(0x303030303030,(undefined2)local_a8);
          if (param_3 == 0) {
            local_98 = 2;
            uVar7 = 2;
          }
          else {
            uVar8 = param_4 / 100;
            if (local_98 == 2) goto LAB_00744214;
            if (param_4 < 100) goto LAB_007445d0;
            uVar8 = 0;
            if (param_4 / 100 != 0) {
              uVar8 = param_3 / (param_4 / 100);
            }
            param_3 = param_3 - uVar8 * (param_4 / 100);
            local_a8._0_3_ = CONCAT12((char)uVar8 + '0',(undefined2)local_a8);
            local_a8 = CONCAT53(0x3030303030,(undefined3)local_a8);
            if (param_3 == 0) {
              local_98 = 3;
              uVar7 = 3;
            }
            else {
              uVar8 = param_4 / 1000;
              if (local_98 == 3) goto LAB_00744214;
              if (param_4 < 1000) goto LAB_007445d0;
              uVar8 = 0;
              if (param_4 / 1000 != 0) {
                uVar8 = param_3 / (param_4 / 1000);
              }
              param_3 = param_3 - uVar8 * (param_4 / 1000);
              local_a8._0_4_ = CONCAT13((char)uVar8 + '0',(undefined3)local_a8);
              local_a8 = CONCAT44(0x30303030,(undefined4)local_a8);
              if (param_3 == 0) {
                local_98 = 4;
                uVar7 = 4;
              }
              else {
                uVar8 = param_4 / 10000;
                if (local_98 == 4) goto LAB_00744214;
                if (param_4 >> 4 < 0x271) goto LAB_007445d0;
                uVar8 = 0;
                if (param_4 / 10000 != 0) {
                  uVar8 = param_3 / (param_4 / 10000);
                }
                param_3 = param_3 - uVar8 * (param_4 / 10000);
                local_a8._0_5_ = CONCAT14((char)uVar8 + '0',(undefined4)local_a8);
                local_a8 = CONCAT35(0x303030,(undefined5)local_a8);
                if (param_3 == 0) {
                  local_98 = 5;
                  uVar7 = 5;
                }
                else {
                  uVar12 = param_4 >> 5;
                  uVar8 = uVar12 / 0xc35;
                  if (local_98 == 5) goto LAB_00744214;
                  if (uVar12 < 0xc35) goto LAB_007445d0;
                  uVar8 = 0;
                  if (uVar12 / 0xc35 != 0) {
                    uVar8 = (param_3 & 0xffff) / (uVar12 / 0xc35);
                  }
                  param_3 = (param_3 & 0xffff) - uVar8 * (uVar12 / 0xc35);
                  local_a8._0_6_ = CONCAT15((char)uVar8 + '0',(undefined5)local_a8);
                  local_a8 = CONCAT26(0x3030,(undefined6)local_a8);
                  if (param_3 == 0) {
                    local_98 = 6;
                    uVar7 = 6;
                  }
                  else {
                    uVar8 = 1000000;
                    if (local_98 == 6) {
LAB_00744210:
                      uVar8 = param_4 / uVar8;
                      param_3 = param_3 & 0xffff;
                      goto LAB_00744214;
                    }
                    if (param_4 < 1000000) goto LAB_007445d0;
                    uVar8 = 0;
                    if (param_4 / 1000000 != 0) {
                      uVar8 = (param_3 & 0xffff) / (param_4 / 1000000);
                    }
                    param_3 = (param_3 & 0xffff) - uVar8 * (param_4 / 1000000);
                    local_a8._0_7_ = CONCAT16((char)uVar8 + '0',(undefined6)local_a8);
                    local_a8 = CONCAT17(0x30,(undefined7)local_a8);
                    if (param_3 == 0) {
                      local_98 = 7;
                      uVar7 = 7;
                    }
                    else {
                      uVar8 = 10000000;
                      if (local_98 == 7) goto LAB_00744210;
                      if (param_4 < 10000000) goto LAB_007445d0;
                      param_3 = param_3 & 0xff;
                      uVar12 = (uint)((ulong)param_4 / 10000000);
                      uVar8 = 0;
                      if (uVar12 != 0) {
                        uVar8 = param_3 / (param_4 / 10000000);
                      }
                      cVar11 = '\0';
                      if (((ulong)param_4 / 10000000 & 0xff) != 0) {
                        cVar11 = (char)(param_3 / (uVar12 & 0xff));
                      }
                      param_3 = param_3 - uVar8 * (param_4 / 10000000);
                      local_a8 = CONCAT17(cVar11 + '0',(undefined7)local_a8);
                      if (param_3 == 0) {
                        local_98 = 8;
                        uVar7 = 8;
                      }
                      else {
                        uVar8 = (uint)(99999999 < param_4);
                        if (local_98 == 8) goto LAB_00744214;
                        if (param_4 < 100000000) goto LAB_007445d0;
                        local_a0 = (byte)param_3 | 0x30;
                        local_98 = 9;
                        uVar7 = 9;
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
LAB_007442d0:
  local_90 = 1;
  bVar5 = true;
  local_88 = param_2;
LAB_007442dc:
  uVar8 = (uint)uVar9;
  local_80 = &local_90;
  if (8 < uVar8) {
    uVar8 = 9;
  }
  puStack_78 = &local_c8;
  local_38 = uVar7;
  if ((uVar3 & 0x10000000) != 0) {
    local_38 = (ulong)uVar8;
  }
  local_70 = &local_38;
  puStack_68 = &local_a8;
  local_60 = &local_98;
  ppcStack_58 = &local_b8;
  if ((uVar3 >> 0x1b & 1) != 0) {
    iVar6 = (int)*param_7;
    uVar13 = (ulong)(iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41));
    if (param_8 != 1) {
      iVar6 = (int)param_7[1];
      if (iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41)) {
        uVar13 = uVar13 + 1;
      }
      if ((param_8 != 2) &&
         (iVar6 = (int)param_7[2], iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41))) {
        uVar13 = uVar13 + 1;
      }
    }
    if (bVar5) {
      if (param_2 == 0) {
        uVar10 = 1;
      }
      else {
        uVar10 = param_2 / 10000000000;
        if (param_2 < 10000000000) {
          uVar10 = param_2;
        }
        uVar8 = 10;
        if (param_2 < 10000000000) {
          uVar8 = 0;
        }
        if (0xc34 < uVar10 >> 5) {
          uVar8 = uVar8 | 5;
          uVar10 = (uVar10 >> 5) / 0xc35;
        }
        iVar6 = (int)uVar10;
        uVar10 = (ulong)(uVar8 + ((iVar6 + 0x5fff6U & iVar6 + 0x7ff9cU ^
                                  iVar6 + 0xdfc18U & iVar6 + 0x7d8f0U) >> 0x11) + 1);
      }
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar3 & 0x10000000) != 0) {
      uVar7 = uVar9;
    }
    lVar1 = 0;
    if (local_38 != 0) {
      lVar1 = uVar7 + 1;
    }
    uVar7 = uVar13 + param_6 + uVar10 + lVar1;
    if (uVar7 < *(ushort *)((long)param_1 + 0x14)) {
      uVar12 = uVar3 >> 0x1d & 3;
      uVar14 = 0;
      uVar8 = (uint)*(ushort *)((long)param_1 + 0x14) - (int)uVar7;
      if (uVar12 < 2) {
        if (uVar12 != 0) {
          uVar14 = uVar8;
        }
      }
      else if (uVar12 == 2) {
        uVar14 = uVar8 >> 1 & 0x7fff;
      }
      uVar2 = *param_1;
      lVar1 = param_1[1];
      uVar12 = 0;
      do {
        if ((uVar14 & 0xffff) <= (uVar12 & 0xffff)) {
          uVar7 = FUN_00734b74(&local_80,param_1);
          if ((uVar7 & 1) != 0) {
            return 1;
          }
          uVar12 = 0;
          do {
            bVar5 = (uVar8 - uVar14 & 0xffff) <= (uVar12 & 0xffff);
            uVar7 = (ulong)!bVar5;
            if (bVar5) {
              return uVar7;
            }
            uVar12 = uVar12 + 1;
            iVar6 = (**(code **)(lVar1 + 0x20))(uVar2,uVar3 & 0x1fffff);
          } while (iVar6 == 0);
          return uVar7;
        }
        uVar12 = uVar12 + 1;
        uVar7 = (**(code **)(lVar1 + 0x20))(uVar2,uVar3 & 0x1fffff);
      } while ((uVar7 & 1) == 0);
      return 1;
    }
  }
  uVar7 = FUN_00734b74(&local_80,param_1);
  return uVar7 & 0xffffffff;
}


// ===== 007445dc  <core::ffi::c_void_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_void as core::fmt::Debug>::fmt */

void __rustcall <core::ffi::c_void_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007445f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0046c38b,6);
  return;
}


// ===== 007445f8  <char_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <char as core::pat::RangePattern>::sub_one */

void __rustcall <char_as_core::pat::RangePattern>::sub_one(int param_1,undefined8 param_2)

{
  if (0xffef07ff < (param_1 - 1U ^ 0xd800) - 0x110000) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c391,0x4f,param_2);
}


// ===== 00744638  <core::io::util::Repeat_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::util::Repeat as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::io::util::Repeat_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_0046c3b8,6);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00744694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00466a5b,7);
  return uVar2;
}


// ===== 00744698  <core::io::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Error as core::fmt::Debug>::fmt */

void __rustcall <core::io::error::Error_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a1f60)();
  return;
}


// ===== 0074469c  <core::ffi::c_str::FromBytesWithNulError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::FromBytesWithNulError as core::fmt::Display>::fmt */

void __rustcall
<core::ffi::c_str::FromBytesWithNulError_as_core::fmt::Display>::fmt
          (uint *param_1,undefined8 *param_2)

{
  uint *local_28;
  uint **ppuStack_20;
  code *local_18;
  
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007446b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0046c3be,0x23);
    return;
  }
  local_28 = param_1 + 2;
  ppuStack_20 = &local_28;
  local_18 = FUN_00746ed0;
  core::fmt::write(*param_2,param_2[1],&DAT_0036b6e7,&ppuStack_20);
  return;
}


// ===== 00744700  <core::ffi::va_list::VaList_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::va_list::VaList as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::ffi::va_list::VaList_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  long local_28;
  
  uVar4 = *param_2;
  lVar1 = param_2[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar5)(uVar4,&DAT_0046c3e1,6);
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_2 + 0x12) < '\0') {
      uVar3 = (*pcVar5)(uVar4,&DAT_004669e4,2);
      if ((uVar3 & 1) == 0) {
        uStack_48 = param_2[2];
        local_68 = local_5c;
        local_50 = &DAT_0097b768;
        local_28 = param_1 + 0x1c;
        local_58 = &local_78;
        local_5c[0] = 1;
        local_78 = uVar4;
        lStack_70 = lVar1;
        iVar2 = <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
                          (&local_58,"VaListInner",0xb,"stack",5,param_1,&DAT_0097c378,"gr_top",6,
                           param_1 + 8,&DAT_0097c378,"vr_top",6,param_1 + 0x10,&DAT_0097c378,
                           "gr_offs",7,param_1 + 0x18,&DAT_0097c128,"vr_offs",7,&local_28,
                           &DAT_0097c398);
        if ((iVar2 == 0) &&
           (uVar3 = (**(code **)(local_50 + 0x18))(local_58,&DAT_004669e1,2), (uVar3 & 1) == 0))
        goto LAB_00744934;
      }
    }
    else {
      uVar3 = (*pcVar5)(uVar4,&DAT_004669e3,1);
      if ((uVar3 & 1) == 0) {
        local_58 = (undefined8 *)(param_1 + 0x1c);
        uVar3 = <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
                          (param_2,"VaListInner",0xb,"stack",5,param_1,&DAT_0097c378,"gr_top",6,
                           param_1 + 8,&DAT_0097c378,"vr_top",6,param_1 + 0x10,&DAT_0097c378,
                           "gr_offs",7,param_1 + 0x18,&DAT_0097c128,"vr_offs",7,&local_58,
                           &DAT_0097c398);
        if ((uVar3 & 1) == 0) {
          uVar4 = *param_2;
          pcVar5 = *(code **)(param_2[1] + 0x18);
LAB_00744934:
          uVar4 = (*pcVar5)(uVar4,&DAT_00466a71,1);
          return uVar4;
        }
      }
    }
  }
  return 1;
}


// ===== 00744960  <u128_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::Display>::fmt */

void __rustcall <u128_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_57 [39];
  
  lVar1 = FUN_007366d0(*param_1,param_1[1],auStack_57,0x27);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_57 + lVar1,0x27 - lVar1);
  return;
}


// ===== 007449c4  <core::ops::range::RangeFull_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeFull as core::fmt::Debug>::fmt */

void __rustcall
<core::ops::range::RangeFull_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007449dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046c3e7,2);
  return;
}


// ===== 007449e0  <u8_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as core::fmt::Display>::fmt */

void __rustcall <u8_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_14 [2];
  undefined2 local_12;
  
  uVar2 = (uint)*param_1;
  uVar3 = (uint)*param_1;
  if (uVar2 < 10) {
    lVar1 = 3;
  }
  else {
    uVar2 = uVar3 * 0x29 >> 0xc;
    local_12 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar2 * -100) & 0xff) * 2);
    lVar1 = 1;
  }
  if ((uVar3 == 0) || (uVar2 != 0)) {
    auStack_14[lVar1] = (&DAT_004670a7)[((ulong)uVar2 & 0x7f) * 2];
    lVar1 = lVar1 + -1;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_14 + lVar1 + 1,3 - lVar1);
  return;
}


// ===== 00744a84  <core::panicking::assert_matches_failed::Pattern_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::panicking::assert_matches_failed::Pattern as core::fmt::Debug>::fmt */

void __rustcall
<core::panicking::assert_matches_failed::Pattern_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00744a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,*param_1,param_1[1]);
  return;
}


// ===== 00744a98  <<core[188d2c0002da36d0]::field::FieldRepresentingType<_,_,_>as_core[188d2c0002da36d0]::fmt::Debug>::fmt::Member_as_core[188d2c0002da36d0]::fmt::Display>::fmt =====

/* <<core[188d2c0002da36d0]::field::FieldRepresentingType<_, _, _> as
   core[188d2c0002da36d0]::fmt::Debug>::fmt::Member as core[188d2c0002da36d0]::fmt::Display>::fmt */

void <<core[188d2c0002da36d0]::field::FieldRepresentingType<_,_,_>as_core[188d2c0002da36d0]::fmt::Debug>::fmt::Member_as_core[188d2c0002da36d0]::fmt::Display>
     ::fmt(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*param_1,param_1[1]);
    return;
  }
  <u32_as_core::fmt::Display>::fmt();
  return;
}


// ===== 00744ab4  <<core[188d2c0002da36d0]::wtf8::EncodeWide_as_core[188d2c0002da36d0]::fmt::Debug>::fmt::CodeUnit_as_core[188d2c0002da36d0]::fmt::Debug>::fmt =====

/* <<core[188d2c0002da36d0]::wtf8::EncodeWide as core[188d2c0002da36d0]::fmt::Debug>::fmt::CodeUnit
   as core[188d2c0002da36d0]::fmt::Debug>::fmt */

void <<core[188d2c0002da36d0]::wtf8::EncodeWide_as_core[188d2c0002da36d0]::fmt::Debug>::fmt::CodeUnit_as_core[188d2c0002da36d0]::fmt::Debug>
     ::fmt(uint *param_1,undefined8 *param_2)

{
  uint local_24;
  uint *local_20;
  undefined *puStack_18;
  
  local_24 = (uint)(ushort)*param_1;
  if ((local_24 ^ 0xffefd800) < 0xffef0800) {
    puStack_18 = PTR_fmt_0099f538;
    local_20 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_0046c3e9,&local_20);
    return;
  }
  local_20 = &local_24;
  puStack_18 = PTR_fmt_0099f658;
  core::fmt::write(*param_2,param_2[1],&DAT_00368e80,&local_20);
  return;
}


// ===== 00744b44  <dyn_Trait<Assoc=X>+core::any::Any_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + core::any::Any as core::fmt::Debug>::fmt */

undefined8 __rustcall
<dyn_Trait<Assoc=X>+core::any::Any_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_3;
  UNRECOVERED_JUMPTABLE = *(code **)(param_3[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_0046c3f4,3);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00744ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00466a5b,7);
  return uVar2;
}


// ===== 00744ba4  <core::io::io_slice::IoSlice_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::io_slice::IoSlice as core::fmt::Debug>::fmt */

void __rustcall
<core::io::io_slice::IoSlice_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_00750900(*param_1,param_1[1],param_2);
  return;
}


// ===== 00744bb8  <core::ffi::c_str::FromBytesUntilNulError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::FromBytesUntilNulError as core::fmt::Display>::fmt */

void __rustcall
<core::ffi::c_str::FromBytesUntilNulError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00744bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0046c3f7,0x24);
  return;
}


// ===== 00744bd4  <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_char =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::PadAdapter as core::fmt::Write>::write_char */

undefined8 __rustcall
<core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_char(undefined8 *param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[1];
  pbVar2 = (byte *)param_1[2];
  uVar4 = *param_1;
  if ((*pbVar2 & 1) != 0) {
    iVar3 = (**(code **)(lVar1 + 0x18))(uVar4,"    ",4);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *pbVar2 = param_2 == 10;
                    /* WARNING: Could not recover jumptable at 0x00744c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(lVar1 + 0x20))(uVar4);
  return uVar4;
}


// ===== 00744c54  <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::PadAdapter as core::fmt::Write>::write_str */

undefined8 __rustcall
<core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
          (undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  pbVar11 = (byte *)param_1[2];
  uVar15 = 0;
  uVar2 = *param_1;
  lVar4 = param_1[1];
  bVar6 = false;
  uVar14 = 0;
  do {
    if (bVar6) {
      return 0;
    }
    do {
      uVar7 = uVar15;
      uVar15 = uVar7;
      if (param_3 < uVar7) {
LAB_00744e18:
        if (param_3 == uVar14) {
          return 0;
        }
        bVar6 = true;
        bVar5 = *pbVar11;
        uVar7 = uVar14;
        uVar9 = param_3;
        goto joined_r0x00744e38;
      }
      uVar9 = param_3 - uVar7;
      lVar1 = param_2 + uVar7;
      uVar15 = param_3;
      if (0xf < uVar9) {
        uVar10 = (lVar1 + 7U & 0xfffffffffffffff8) - lVar1;
        if (uVar10 == 0) goto LAB_00744d7c;
        uVar12 = 0;
        do {
          if (*(char *)(lVar1 + uVar12) == '\n') goto LAB_00744dd8;
          uVar12 = uVar12 + 1;
        } while (uVar10 != uVar12);
        for (; uVar12 = uVar10, uVar10 <= uVar9 - 0x10; uVar10 = uVar10 + 0x10) {
LAB_00744d7c:
          uVar3 = *(ulong *)(lVar1 + uVar10);
          uVar13 = ((ulong *)(lVar1 + uVar10))[1] ^ 0xa0a0a0a0a0a0a0a;
          uVar12 = uVar10;
          if ((((0x101010101010100 - (uVar3 ^ 0xa0a0a0a0a0a0a0a) | uVar3) &
                (0x101010101010100 - uVar13 | uVar13) ^ 0xffffffffffffffff) & 0x8080808080808080) !=
              0) break;
        }
        do {
          if (uVar9 == uVar12) goto LAB_00744e18;
          if (*(char *)(lVar1 + uVar12) == '\n') goto LAB_00744dd8;
          uVar12 = uVar12 + 1;
        } while( true );
      }
      if (param_3 == uVar7) goto LAB_00744e18;
      uVar12 = 0;
      while (*(char *)(lVar1 + uVar12) != '\n') {
        uVar12 = uVar12 + 1;
        if (uVar9 == uVar12) goto LAB_00744e18;
      }
LAB_00744dd8:
      uVar15 = uVar7 + uVar12 + 1;
    } while ((param_3 <= uVar7 + uVar12) || (*(char *)(param_2 + uVar7 + uVar12) != '\n'));
    bVar6 = false;
    bVar5 = *pbVar11;
    uVar7 = uVar15;
    uVar9 = uVar15;
joined_r0x00744e38:
    if (((bVar5 & 1) != 0) &&
       (uVar10 = (**(code **)(lVar4 + 0x18))(uVar2,"    ",4), (uVar10 & 1) != 0)) {
      return 1;
    }
    if (uVar9 == uVar14) {
      bVar8 = false;
    }
    else {
      bVar8 = *(char *)(param_2 + uVar9 + -1) == '\n';
    }
    *pbVar11 = bVar8;
    uVar9 = (**(code **)(lVar4 + 0x18))(uVar2,param_2 + uVar14,uVar9 - uVar14);
    uVar14 = uVar7;
    if ((uVar9 & 1) != 0) {
      return 1;
    }
  } while( true );
}


// ===== 00744e94  <core::net::ip_addr::IpAddr_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::IpAddr as core::str::traits::FromStr>::from_str */

void __rustcall
<core::net::ip_addr::IpAddr_as_core::str::traits::FromStr>::from_str
          (undefined2 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 local_58;
  long local_50;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  undefined4 local_30;
  undefined1 uStack_2c;
  undefined4 local_2b;
  
  local_58 = param_2;
  local_50 = param_3;
  uVar1 = FUN_00734e34(&local_58);
  if ((uVar1 & 1) == 0) {
    FUN_007351a8(&local_38,&local_58);
    uVar2 = uStack_37;
    if (local_38 == '\x01') {
      if (local_50 == 0) {
        local_38 = (char)uStack_33;
        uStack_37 = (undefined4)(CONCAT43(local_30,uStack_33) >> 8);
        uStack_33 = (undefined3)(CONCAT17(uStack_2c,CONCAT43(local_30,uStack_33)) >> 0x28);
        uVar3 = 1;
        local_30 = local_2b;
        goto LAB_00744f14;
      }
    }
  }
  else if (local_50 == 0) {
    uVar2 = (undefined4)(uVar1 >> 8);
    uVar3 = 0;
LAB_00744f14:
    *(undefined1 *)param_1 = uVar3;
    *(undefined4 *)((long)param_1 + 1) = uVar2;
    *(ulong *)((long)param_1 + 5) = CONCAT35(uStack_33,CONCAT41(uStack_37,local_38));
    *(undefined4 *)((long)param_1 + 0xd) = local_30;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 00744f58  <f16_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <f16 as core::str::traits::FromStr>::from_str */

uint __rustcall
<f16_as_core::str::traits::FromStr>::from_str(float2 param_1,ulong *param_2,long param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  uint3 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  float2 fVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined8 local_370;
  byte local_368;
  undefined7 uStack_367;
  byte local_35f;
  uint local_68;
  byte local_64;
  
  if (param_3 == 0) {
    return (uint)(ushort)param_1 << 0x10 | 1;
  }
  cVar1 = (char)*param_2;
  if ((cVar1 == '-') || (cVar1 == '+')) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      uVar11 = 1;
      uVar9 = 0x100;
      goto LAB_007451f4;
    }
    param_2 = (ulong *)((long)param_2 + 1);
  }
  param_1 = (float2)core::num::imp::dec2flt::parse::parse_number(&local_370);
  uVar8 = local_370;
  if (local_35f == 2) {
    fVar13 = _s__004651b0;
    if (param_3 == 3) {
      uVar5 = (uint3)*param_2 & 0xdfdfdf;
      if ((uVar5 != 0x464e49) && (fVar13 = DAT_004651b2, uVar5 != 0x4e414e)) {
LAB_007450d4:
        uVar11 = 1;
        uVar9 = 0x100;
        goto LAB_007451f4;
      }
    }
    else if ((param_3 != 8) || ((*param_2 & 0xdfdfdfdfdfdfdfdf) != 0x5954494e49464e49))
    goto LAB_007450d4;
    uVar9 = 0x100;
    param_1 = -fVar13;
  }
  else {
    uVar6 = CONCAT71(uStack_367,local_368);
    if (((local_370 - 8 < 0xfffffffffffffff4) || (0x800 < uVar6)) || ((local_35f & 1) != 0)) {
      auVar15 = FUN_007347ac(local_370,uVar6);
      iVar7 = auVar15._8_4_;
      if (((local_35f & 1) == 0) || (auVar14 = FUN_007347ac(uVar8,uVar6 + 1), auVar15 == auVar14)) {
joined_r0x0074508c:
        if (iVar7 < 0) goto LAB_00745164;
      }
      else {
LAB_00745164:
        core::num::imp::dec2flt::decimal_seq::parse_decimal_seq(&local_370,param_2,param_3);
        auVar15 = ZEXT812(0);
        if ((local_370 != 0) &&
           (auVar15 = ZEXT812(0), (int)(local_68 + 0x144) < 0 == SCARRY4(local_68,0x144))) {
          if ((int)local_68 < 0x136) {
            iVar7 = 0;
            while (uVar8 = (ulong)local_68, 0 < (int)local_68) {
              if (local_68 < 0x13) {
                uVar11 = (uint)(byte)""[uVar8];
              }
              else {
                uVar11 = 0x3c;
              }
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::right_shift(&local_370,uVar11);
              if (local_68 == 0xfffff800 || (int)(local_68 + 0x800) < 0 != SCARRY4(local_68,0x800))
              {
                auVar15 = ZEXT812(0);
                goto LAB_007451a0;
              }
              iVar7 = iVar7 + uVar11;
            }
            do {
              if ((int)uVar8 == 0) {
                if (4 < local_368) break;
                uVar11 = 1;
                if (local_368 < 2) {
                  uVar11 = 2;
                }
              }
              else {
                uVar11 = -(int)uVar8;
                if (uVar11 < 0x13) {
                  uVar11 = (uint)(byte)""[uVar11];
                }
                else {
                  uVar11 = 0x3c;
                }
              }
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::left_shift(&local_370,uVar11);
              uVar8 = (ulong)local_68;
              if (0x7ff < (int)local_68) goto LAB_00745198;
              iVar7 = iVar7 - uVar11;
            } while ((int)local_68 < 1);
            iVar12 = iVar7 + -1;
            if (iVar12 == -0xf || iVar7 + 0xe < 0 != SCARRY4(iVar12,0xf)) {
              do {
                uVar11 = -iVar12 - 0xe;
                if (0x3b < uVar11) {
                  uVar11 = 0x3c;
                }
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::right_shift(&local_370,uVar11);
                iVar12 = uVar11 + iVar12;
              } while (iVar12 + 0xe < 0 != SCARRY4(iVar12,0xe));
            }
            if (iVar12 + 0xf < 0x1f) {
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::left_shift(&local_370,0xb);
              if ((local_370 == 0) || (uVar8 = (ulong)local_68, (int)local_68 < 0)) {
                auVar14._4_8_ = 0;
                auVar14._0_4_ = iVar12 + 0xe;
                auVar15 = auVar14 << 0x40;
                goto LAB_007451a0;
              }
              if (local_68 < 0x13) {
                uVar6 = 0;
                if (local_68 != 0) {
                  uVar10 = 0;
                  do {
                    uVar6 = uVar6 * 10;
                    if (uVar10 < local_370) {
                      uVar6 = uVar6 + (&local_368)[uVar10];
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar8 != uVar10);
                }
                if (uVar8 < local_370) {
                  if ((uVar8 + 1 == local_370) && ((&local_368)[uVar8] == 5)) {
                    if (((local_64 & 1) != 0) ||
                       ((local_68 != 0 && ((*(byte *)((long)&local_370 + uVar8 + 7) & 1) != 0)))) {
LAB_007453cc:
                      uVar6 = uVar6 + 1;
                    }
                  }
                  else if (4 < (&local_368)[uVar8]) goto LAB_007453cc;
                }
                if (0x7ff < uVar6) goto LAB_007453d8;
              }
              else {
LAB_007453d8:
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::right_shift(&local_370,1);
                uVar6 = <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                        ::round(&local_370);
                if (0x1e < iVar12 + 0x10) goto LAB_00745198;
                iVar12 = iVar12 + 1;
              }
              iVar7 = 0xe;
              if (0x3ff < uVar6) {
                iVar7 = 0xf;
              }
              auVar15._8_4_ = iVar7 + iVar12;
              auVar15._0_8_ = uVar6 & 0x3ff;
              goto LAB_007451a0;
            }
          }
LAB_00745198:
          auVar15 = ZEXT412(0x1f) << 0x40;
        }
      }
LAB_007451a0:
      fVar13 = (float2)(auVar15._0_2_ | (ushort)(auVar15._8_4_ << 10));
      uVar9 = 0;
      param_1 = -fVar13;
    }
    else {
      if ((long)local_370 < 5) {
        if ((long)local_370 < 0) {
          fVar4 = (float)uVar6 / (float)*(float2 *)("" + local_370 * -2);
        }
        else {
          fVar4 = (float)*(float2 *)("" + local_370 * 2) * (float)uVar6;
        }
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar6;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulong *)(core::unicode::unicode_data::uppercase::BITSET_CHUNKS_MAP +
                                 local_370 * 8 + 0x61);
        if ((SUB168(auVar2 * auVar3,8) != 0) ||
           (uVar8 = uVar6 * *(ulong *)(core::unicode::unicode_data::uppercase::BITSET_CHUNKS_MAP +
                                      local_370 * 8 + 0x61), 0x800 < uVar8)) {
          auVar15 = FUN_007347ac(local_370,uVar6);
          iVar7 = auVar15._8_4_;
          goto joined_r0x0074508c;
        }
        fVar4 = (float)uVar8 * 10000.0;
      }
      fVar13 = (float2)fVar4;
      param_1 = -fVar13;
      uVar9 = 0x100;
    }
  }
  uVar11 = 0;
  if (cVar1 != '-') {
    param_1 = fVar13;
  }
LAB_007451f4:
  return uVar9 | (uint)(ushort)param_1 << 0x10 | uVar11;
}


// ===== 00745414  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::lossy::Debug as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::str::lossy::Debug_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  undefined *puVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  code *pcVar20;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte *local_a0;
  byte *local_98;
  undefined1 *puStack_90;
  long local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined4 uStack_78;
  byte bStack_74;
  byte bStack_73;
  undefined2 uStack_72;
  undefined1 *local_70;
  undefined *puStack_68;
  byte *pbVar14;
  
  uVar9 = *param_2;
  lVar2 = param_2[1];
  pcVar20 = *(code **)(lVar2 + 0x20);
  uVar8 = (*pcVar20)(uVar9,0x22);
  if ((uVar8 & 1) == 0) {
    local_b0 = *param_1;
    uStack_a8 = param_1[1];
    <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
              (&local_a0,&local_b0);
    puVar15 = PTR_fmt_0099f4f8;
    pbVar6 = local_a0;
    pbVar7 = local_98;
    puVar5 = puStack_90;
    lVar3 = local_88;
    while (pbVar6 != (byte *)0x0) {
      pbVar18 = (byte *)0x0;
      local_a0 = pbVar6;
      local_98 = pbVar7;
      puStack_90 = puVar5;
      local_88 = lVar3;
      if (pbVar7 != (byte *)0x0) {
        pbVar17 = (byte *)0x0;
        pbVar14 = pbVar6;
        do {
          while( true ) {
            pbVar13 = pbVar14 + 1;
            uVar19 = (uint)*pbVar14;
            if ((char)*pbVar14 < '\0') {
              if (uVar19 < 0xe0) {
                uVar19 = pbVar14[1] & 0x3f | (uVar19 & 0x1f) << 6;
                pbVar13 = pbVar14 + 2;
              }
              else {
                uVar16 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
                if (uVar19 < 0xf0) {
                  uVar19 = uVar16 | (uVar19 & 0x1f) << 0xc;
                  pbVar13 = pbVar14 + 3;
                }
                else {
                  pbVar13 = pbVar14 + 4;
                  uVar19 = pbVar14[3] & 0x3f | uVar16 << 6 | (uVar19 & 7) << 0x12;
                }
              }
            }
            FUN_00735594(&local_80,uVar19,0x10001);
            if ((byte)(bStack_73 - bStack_74) != '\x01') break;
            pbVar17 = pbVar13 + ((long)pbVar17 - (long)pbVar14);
            pbVar14 = pbVar13;
            if (pbVar13 == pbVar6 + (long)pbVar7) goto LAB_007456a8;
          }
          if (((pbVar7 < pbVar17) || (pbVar17 < pbVar18)) ||
             ((pbVar18 != pbVar7 &&
              (((pbVar18 != (byte *)0x0 &&
                (iVar11 = (int)(char)pbVar6[(long)pbVar18],
                iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41))) ||
               ((pbVar17 != pbVar7 &&
                (iVar11 = (int)(char)pbVar6[(long)pbVar17],
                iVar11 == -0x41 || iVar11 + 0x41 < 0 != SCARRY4(iVar11,0x41))))))))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (pbVar6,pbVar7,pbVar18,pbVar17,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_0097c0c0);
          }
          uVar8 = (**(code **)(lVar2 + 0x18))
                            (uVar9,pbVar6 + (long)pbVar18,(long)pbVar17 - (long)pbVar18);
          if ((uVar8 & 1) != 0) goto LAB_00745450;
          puStack_68 = (undefined *)
                       CONCAT26(uStack_72,CONCAT15(bStack_73,CONCAT14(bStack_74,uStack_78)));
          puVar4 = (undefined1 *)CONCAT71(uStack_7f,local_80);
          local_70 = puVar4;
          uVar8 = (ulong)bStack_74;
          uVar16 = (uint)bStack_73;
          if (bStack_73 < 0x81) {
            uVar1 = (uint)bStack_74;
            if ((uint)bStack_74 < (uint)bStack_73 || bStack_74 == uVar16) {
              uVar1 = uVar16;
            }
            while (uVar1 != uVar8) {
              puVar4 = (undefined1 *)((long)&local_70 + uVar8);
              uVar8 = uVar8 + 1;
              uVar10 = (*pcVar20)(uVar9,*puVar4);
              if ((uVar10 & 1) != 0) goto LAB_00745450;
            }
          }
          else {
            while ((byte)uVar8 < uVar16) {
              uVar8 = (ulong)((int)uVar8 + 1);
              uVar10 = (*pcVar20)(uVar9,(ulong)puVar4 & 0xffffffff);
              if ((uVar10 & 1) != 0) goto LAB_00745450;
            }
          }
          if (uVar19 < 0x80) {
            lVar12 = 1;
          }
          else if (uVar19 < 0x800) {
            lVar12 = 2;
          }
          else {
            lVar12 = 3;
            if (0xffff < uVar19) {
              lVar12 = 4;
            }
          }
          pbVar18 = pbVar17 + lVar12;
          pbVar17 = pbVar13 + ((long)pbVar17 - (long)pbVar14);
          pbVar14 = pbVar13;
        } while (pbVar13 != pbVar6 + (long)pbVar7);
LAB_007456a8:
        puVar15 = PTR_fmt_0099f4f8;
        if (pbVar18 != (byte *)0x0) {
          if (pbVar18 < pbVar7) {
            if ((char)pbVar6[(long)pbVar18] + 0x40 < 0 !=
                SCARRY4((int)(char)pbVar6[(long)pbVar18],0x40)) {
LAB_00745798:
                    /* WARNING: Subroutine does not return */
              core::str::slice_error_fail
                        (pbVar6,pbVar7,pbVar18,pbVar7,
                         &PTR_s__rustc_48a229ceaefd4985c50990b14_0097c0a8);
            }
          }
          else if (pbVar18 != pbVar7) goto LAB_00745798;
        }
      }
      uVar8 = (**(code **)(lVar2 + 0x18))(uVar9,pbVar6 + (long)pbVar18,(long)pbVar7 - (long)pbVar18)
      ;
      if ((uVar8 & 1) != 0) goto LAB_00745450;
      for (; lVar3 != 0; lVar3 = lVar3 + -1) {
        local_80 = *puVar5;
        local_70 = &local_80;
        puStack_68 = puVar15;
        uVar8 = core::fmt::write(uVar9,lVar2,&DAT_0046c41b,&local_70);
        if ((uVar8 & 1) != 0) goto LAB_00745450;
        puVar5 = puVar5 + 1;
      }
      <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                (&local_a0,&local_b0);
      pbVar6 = local_a0;
      pbVar7 = local_98;
      puVar5 = puStack_90;
      lVar3 = local_88;
    }
    uVar9 = (*pcVar20)(uVar9,0x22);
  }
  else {
LAB_00745450:
    uVar9 = 1;
  }
  return uVar9;
}


// ===== 007457b0  <core::alloc::layout::LayoutError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::alloc::layout::LayoutError as core::fmt::Display>::fmt */

void __rustcall
<core::alloc::layout::LayoutError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007457c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"invalid parameters to Layout::from_size_align",0x2d);
  return;
}


// ===== 007457cc  <core::ascii::ascii_char::AsciiChar_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ascii::ascii_char::AsciiChar as core::fmt::Display>::fmt */

void __rustcall
<core::ascii::ascii_char::AsciiChar_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,param_1,1);
  return;
}


// ===== 007457e0  <core::slice::ascii::EscapeAscii_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::ascii::EscapeAscii as
   core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

undefined1  [16] __rustcall
<core::slice::ascii::EscapeAscii_as_core::iter::traits::double_ended::DoubleEndedIterator>::
next_back(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (*param_1 == 0) {
    if (*(int *)((long)param_1 + 0x1c) == 1) {
      uVar6 = (uint)*(byte *)((long)param_1 + 0x25);
      if (*(byte *)((long)param_1 + 0x24) < *(byte *)((long)param_1 + 0x25)) goto LAB_007458ec;
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
    }
  }
  else {
    if (*(int *)((long)param_1 + 0x1c) == 1) {
      uVar6 = (uint)*(byte *)((long)param_1 + 0x25);
      if (*(byte *)((long)param_1 + 0x24) < *(byte *)((long)param_1 + 0x25)) goto LAB_007458ec;
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
    }
    if (*param_1 != param_1[1]) {
      pbVar3 = (byte *)(param_1[1] + -1);
      bVar1 = *pbVar3;
      param_1[1] = (long)pbVar3;
      uVar4 = (ulong)(byte)(&DAT_004667f0)[bVar1] & 0x7f;
      if ((char)(&DAT_004667f0)[bVar1] < '\0') {
        if ((int)uVar4 == 0) {
          uVar4 = (ulong)(byte)"0123456789abcdef"[(ulong)bVar1 & 0xf] << 0x18 |
                  (ulong)(byte)"0123456789abcdef"[bVar1 >> 4] << 0x10 | 0x785c;
          uVar5 = 0x40000000000;
        }
        else {
          uVar4 = uVar4 << 8 | 0x5c;
          uVar5 = 0x20000000000;
        }
      }
      else {
        uVar5 = 0x10000000000;
      }
      uVar6 = (uint)(uVar5 >> 0x28);
      *(undefined4 *)((long)param_1 + 0x1c) = 1;
      param_1[4] = uVar4 | uVar5;
LAB_007458ec:
      *(char *)((long)param_1 + 0x25) = (char)(uVar6 - 1);
      auVar8._9_7_ = 0;
      auVar8[8] = *(byte *)((long)param_1 + ((ulong)(uVar6 - 1) & 0xff) + 0x20);
      auVar8._0_8_ = 1;
      return auVar8;
    }
  }
  if ((int)param_1[2] == 1) {
    if (*(byte *)(param_1 + 3) < *(byte *)((long)param_1 + 0x19)) {
      bVar1 = *(byte *)((long)param_1 + 0x19) - 1;
      *(byte *)((long)param_1 + 0x19) = bVar1;
      auVar7._9_7_ = 0;
      auVar7[8] = *(byte *)((long)param_1 + (ulong)bVar1 + 0x14);
      auVar7._0_8_ = 1;
      return auVar7;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 00745908  <i128_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::LowerExp>::fmt */

void __rustcall <i128_as_core::fmt::LowerExp>::fmt(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (long)uVar1 >> 0x3f;
  FUN_0073d88c(param_2,param_2,(*param_1 ^ uVar2) - uVar2,
               (uVar1 ^ uVar2) - (uVar2 + ((*param_1 ^ uVar2) < uVar2)),(uint)(uVar1 >> 0x3f) ^ 1,
               0x65);
  return;
}


// ===== 00745934  <u128_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::LowerExp>::fmt */

void __rustcall <u128_as_core::fmt::LowerExp>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_0073d88c(param_2,param_2,*param_1,param_1[1],1,0x65);
  return;
}


// ===== 00745948  <i128_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as core::fmt::UpperExp>::fmt */

void __rustcall <i128_as_core::fmt::UpperExp>::fmt(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (long)uVar1 >> 0x3f;
  FUN_0073d88c(param_2,param_2,(*param_1 ^ uVar2) - uVar2,
               (uVar1 ^ uVar2) - (uVar2 + ((*param_1 ^ uVar2) < uVar2)),(uint)(uVar1 >> 0x3f) ^ 1,
               0x45);
  return;
}


// ===== 00745974  <core::num::niche_types::NonZeroI8Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI8Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI8Inner_as_core::fmt::Debug>::fmt(undefined1 *param_1)

{
  FUN_0074c7b4(*param_1);
  return;
}


// ===== 0074597c  <core::num::nonzero::NonZero<u64>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u64> as core::str::traits::FromStr>::from_str */

void __rustcall
<core::num::nonzero::NonZero<u64>as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_3 == 1) {
    bVar1 = *param_2;
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    bVar1 = *param_2;
  }
  if (bVar1 == 0x2b) {
    param_2 = param_2 + 1;
  }
  uVar5 = param_3 - (ulong)(bVar1 == 0x2b);
  if (uVar5 < 0x11) {
    if (uVar5 == 0) goto LAB_00745a7c;
    uVar6 = 0;
    do {
      if (9 < *param_2 - 0x30) {
LAB_00745a68:
        param_1[1] = 1;
        *param_1 = 1;
        return;
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 * 10 + (ulong)(*param_2 - 0x30);
      param_2 = param_2 + 1;
    } while (uVar5 != 0);
  }
  else {
    uVar6 = 0;
    while (uVar5 != 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      if (SUB168(auVar3 * ZEXT816(10),8) != 0) {
        uVar4 = 1;
        if (*param_2 - 0x30 < 10) {
          uVar4 = 2;
        }
        param_1[1] = uVar4;
        *param_1 = 1;
        return;
      }
      uVar2 = *param_2 - 0x30;
      if (9 < uVar2) goto LAB_00745a68;
      uVar5 = uVar5 - 1;
      uVar7 = uVar6 * 10;
      uVar6 = uVar7 + uVar2;
      param_2 = param_2 + 1;
      if (CARRY8(uVar7,(ulong)uVar2)) {
        param_1[1] = 2;
        *param_1 = 1;
        return;
      }
    }
  }
  if (uVar6 != 0) {
    *(ulong *)(param_1 + 8) = uVar6;
    *param_1 = 0;
    return;
  }
LAB_00745a7c:
  param_1[1] = 4;
  *param_1 = 1;
  return;
}


// ===== 00745ab0  <u128_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as core::fmt::UpperExp>::fmt */

void __rustcall <u128_as_core::fmt::UpperExp>::fmt(undefined8 *param_1,undefined8 param_2)

{
  FUN_0073d88c(param_2,param_2,*param_1,param_1[1],1,0x45);
  return;
}


// ===== 00745ac4  <core::sync::atomic::Atomic<i128>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<i128> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<i128>as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  
  do {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = uVar1;
      param_1[1] = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_0074d00c(uVar1,uVar2,param_2);
  return;
}


// ===== 00745adc  <core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr_as_core[188d2c0002da36d0]::ops::bit::BitAndAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr>>::bitand_assign =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr as
   core[188d2c0002da36d0]::ops::bit::BitAndAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr>>::bitand_assign
    */

void <core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr_as_core[188d2c0002da36d0]::ops::bit::BitAndAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr>>
     ::bitand_assign(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  
  uVar1 = *param_2;
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = uVar1;
  auVar3 = NEON_ushl(auVar3,_s__00372690,4);
  uVar1 = *param_1;
  uVar4 = (undefined1)((uint)uVar1 >> 0x18);
  uVar2 = CONCAT17(uVar4,CONCAT16(uVar4,(uint6)CONCAT14((char)((uint)uVar1 >> 0x10),
                                                        (uint)CONCAT12((char)((uint)uVar1 >> 8),
                                                                       (ushort)(byte)uVar1)))) &
          CONCAT26(auVar3._12_2_,CONCAT24(auVar3._8_2_,CONCAT22(auVar3._4_2_,auVar3._0_2_)));
  *param_1 = CONCAT13((char)(uVar2 >> 0x30),
                      CONCAT12((char)(uVar2 >> 0x20),CONCAT11((char)(uVar2 >> 0x10),(char)uVar2)));
  return;
}


// ===== 00745b08  <core::sync::atomic::Atomic<u128>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<u128> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<u128>as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  
  do {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = uVar1;
      param_1[1] = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_0074d804(uVar1,uVar2,param_2);
  return;
}


// ===== 00745b20  <core::num::nonzero::NonZero<u128>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u128> as core::str::traits::FromStr>::from_str */

void __rustcall
<core::num::nonzero::NonZero<u128>as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_3 == 1) {
    bVar2 = *param_2;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    bVar2 = *param_2;
  }
  if (bVar2 == 0x2b) {
    param_2 = param_2 + 1;
  }
  uVar8 = param_3 - (ulong)(bVar2 == 0x2b);
  if (uVar8 < 0x21) {
    if (uVar8 == 0) goto LAB_00745c74;
    uVar9 = 0;
    uVar11 = 0;
    do {
      uVar13 = *param_2 - 0x30;
      if (9 < uVar13) {
LAB_00745c60:
        param_1[1] = 1;
        *param_1 = 1;
        return;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      uVar8 = uVar8 - 1;
      uVar12 = uVar9 * 10;
      uVar9 = uVar12 + uVar13;
      uVar11 = SUB168(auVar3 * ZEXT816(10),8) + uVar11 * 10 + (ulong)CARRY8(uVar12,(ulong)uVar13);
      param_2 = param_2 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar9 = 0;
    uVar11 = 0;
    while (uVar8 != 0) {
      if (uVar11 == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        uVar12 = SUB168(auVar4 * ZEXT816(10),8);
        uVar13 = (uint)*param_2;
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar11;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar9;
        uVar10 = SUB168(auVar6 * ZEXT816(10),8);
        uVar12 = uVar10 + uVar11 * 10;
        uVar13 = (uint)*param_2;
        if (CARRY8(uVar10,uVar11 * 10) || SUB168(auVar5 * ZEXT816(10),8) != 0) {
          uVar7 = 1;
          if (uVar13 - 0x30 < 10) {
            uVar7 = 2;
          }
          param_1[1] = uVar7;
          *param_1 = 1;
          return;
        }
      }
      uVar10 = uVar9 * 10;
      param_2 = param_2 + 1;
      uVar13 = uVar13 - 0x30;
      if (9 < uVar13) goto LAB_00745c60;
      uVar1 = (ulong)uVar13;
      uVar9 = uVar10 + uVar1;
      uVar8 = uVar8 - 1;
      uVar11 = uVar12 + CARRY8(uVar10,uVar1);
      if (CARRY8(uVar12,(ulong)CARRY8(uVar10,uVar1))) {
        param_1[1] = 2;
        *param_1 = 1;
        return;
      }
    }
  }
  if (uVar9 != 0 || uVar11 != 0) {
    *(ulong *)(param_1 + 0x10) = uVar9;
    *(ulong *)(param_1 + 0x18) = uVar11;
    *param_1 = 0;
    return;
  }
LAB_00745c74:
  param_1[1] = 4;
  *param_1 = 1;
  return;
}


// ===== 00745ca8  <core::num::nonzero::NonZero<i128>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i128> as core::str::traits::FromStr>::from_str */

void __rustcall
<core::num::nonzero::NonZero<i128>as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte *pbVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  uVar13 = param_3 - 1;
  if (uVar13 == 0) {
    bVar2 = *param_2;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    bVar2 = *param_2;
  }
  if (bVar2 == 0x2d) {
    if (param_3 < 0x21) {
      if (uVar13 == 0) goto LAB_00745edc;
      uVar10 = 0;
      lVar12 = 0;
      pbVar8 = param_2 + 1;
      do {
        uVar3 = *pbVar8 - 0x30;
        if (9 < uVar3) goto LAB_00745ec8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar10;
        uVar13 = uVar13 - 1;
        uVar11 = uVar10 * 10;
        uVar10 = uVar11 - uVar3;
        lVar12 = (SUB168(auVar5 * ZEXT816(10),8) + lVar12 * 10) - (ulong)(uVar11 < uVar3);
        pbVar8 = pbVar8 + 1;
      } while (uVar13 != 0);
    }
    else {
      uVar10 = 0;
      lVar12 = 0;
      param_2 = param_2 + 1;
      do {
        if (lVar12 == (long)uVar10 >> 0x3f) {
          lVar14 = SUB168(SEXT816((long)uVar10) * SEXT816(10),8);
        }
        else {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar10;
          uVar11 = SUB168(auVar7 * ZEXT816(10),8);
          lVar15 = SUB168(SEXT816(lVar12) * SEXT816(10),8);
          lVar14 = uVar11 + lVar12 * 10;
          if (CARRY8(uVar11,lVar12 * 10)) {
            lVar15 = lVar15 + 1;
          }
          if (lVar15 != lVar14 >> 0x3f || lVar14 >> 0x3f != lVar15 >> 0x3f) {
            uVar9 = 3;
            goto LAB_00745f10;
          }
        }
        uVar11 = uVar10 * 10;
        uVar3 = *param_2 - 0x30;
        if (9 < uVar3) goto LAB_00745ec8;
        uVar1 = (ulong)uVar3;
        uVar10 = uVar11 - uVar1;
        lVar12 = lVar14 - (ulong)(uVar1 > uVar11);
        if (SCARRY8(lVar14,-1) != SCARRY8(lVar14 + -1,(ulong)(uVar1 <= uVar11))) {
          param_1[1] = 3;
          *param_1 = 1;
          return;
        }
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
      } while (uVar13 != 0);
    }
  }
  else {
    if (bVar2 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = uVar13;
    }
    if (param_3 < 0x20) {
      if (param_3 == 0) goto LAB_00745edc;
      uVar10 = 0;
      lVar12 = 0;
      do {
        uVar3 = *param_2 - 0x30;
        if (9 < uVar3) {
LAB_00745ec8:
          param_1[1] = 1;
          *param_1 = 1;
          return;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar10;
        param_3 = param_3 - 1;
        uVar13 = uVar10 * 10;
        uVar10 = uVar13 + uVar3;
        lVar12 = SUB168(auVar4 * ZEXT816(10),8) + lVar12 * 10 + (ulong)CARRY8(uVar13,(ulong)uVar3);
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    else {
      uVar10 = 0;
      lVar12 = 0;
      do {
        if (lVar12 == (long)uVar10 >> 0x3f) {
          lVar14 = SUB168(SEXT816((long)uVar10) * SEXT816(10),8);
        }
        else {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar10;
          uVar13 = SUB168(auVar6 * ZEXT816(10),8);
          lVar15 = SUB168(SEXT816(lVar12) * SEXT816(10),8);
          lVar14 = uVar13 + lVar12 * 10;
          if (CARRY8(uVar13,lVar12 * 10)) {
            lVar15 = lVar15 + 1;
          }
          if (lVar15 != lVar14 >> 0x3f || lVar14 >> 0x3f != lVar15 >> 0x3f) {
            uVar9 = 2;
LAB_00745f10:
            if (9 < *param_2 - 0x30) {
              uVar9 = 1;
            }
            param_1[1] = uVar9;
            *param_1 = 1;
            return;
          }
        }
        uVar13 = uVar10 * 10;
        uVar3 = *param_2 - 0x30;
        if (9 < uVar3) goto LAB_00745ec8;
        uVar11 = (ulong)uVar3;
        uVar10 = uVar13 + uVar11;
        lVar12 = lVar14 + (ulong)CARRY8(uVar13,uVar11);
        if (SCARRY8(lVar14,0) != SCARRY8(lVar14,(ulong)CARRY8(uVar13,uVar11))) {
          param_1[1] = 2;
          *param_1 = 1;
          return;
        }
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  if (uVar10 != 0 || lVar12 != 0) {
    *(ulong *)(param_1 + 0x10) = uVar10;
    *(long *)(param_1 + 0x18) = lVar12;
    *param_1 = 0;
    return;
  }
LAB_00745edc:
  param_1[1] = 4;
  *param_1 = 1;
  return;
}


// ===== 00745f44  <core::num::niche_types::UsizeNoHighBit_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::UsizeNoHighBit as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::UsizeNoHighBit_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_0074d704(*param_1);
  return;
}


// ===== 00745f4c  <core::num::nonzero::NonZero<i64>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i64> as core::str::traits::FromStr>::from_str */

void __rustcall
<core::num::nonzero::NonZero<i64>as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  uVar5 = param_3 - 1;
  if (uVar5 == 0) {
    bVar1 = *param_2;
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    bVar1 = *param_2;
  }
  if (bVar1 == 0x2d) {
    if (param_3 < 0x11) {
      if (uVar5 == 0) goto LAB_007460c0;
      lVar6 = 0;
      pbVar3 = param_2 + 1;
      do {
        if (9 < *pbVar3 - 0x30) goto LAB_007460ac;
        uVar5 = uVar5 - 1;
        lVar6 = lVar6 * 10 - (ulong)(*pbVar3 - 0x30);
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
    }
    else {
      lVar6 = 0;
      param_2 = param_2 + 1;
      do {
        lVar7 = lVar6 * 10;
        if (SUB168(SEXT816(lVar6) * SEXT816(10),8) != lVar7 >> 0x3f) {
          uVar4 = 3;
          goto LAB_007460f4;
        }
        uVar2 = *param_2 - 0x30;
        if (9 < uVar2) goto LAB_007460ac;
        lVar6 = lVar7 - (ulong)uVar2;
        if (SBORROW8(lVar7,(ulong)uVar2)) {
          param_1[1] = 3;
          *param_1 = 1;
          return;
        }
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (bVar1 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = uVar5;
    }
    if (param_3 < 0x10) {
      if (param_3 == 0) goto LAB_007460c0;
      lVar6 = 0;
      do {
        if (9 < *param_2 - 0x30) {
LAB_007460ac:
          param_1[1] = 1;
          *param_1 = 1;
          return;
        }
        param_3 = param_3 - 1;
        lVar6 = lVar6 * 10 + (ulong)(*param_2 - 0x30);
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = lVar6 * 10;
        if (SUB168(SEXT816(lVar6) * SEXT816(10),8) != lVar7 >> 0x3f) {
          uVar4 = 2;
LAB_007460f4:
          if (9 < *param_2 - 0x30) {
            uVar4 = 1;
          }
          param_1[1] = uVar4;
          *param_1 = 1;
          return;
        }
        uVar2 = *param_2 - 0x30;
        if (9 < uVar2) goto LAB_007460ac;
        lVar6 = lVar7 + (ulong)uVar2;
        if (SCARRY8(lVar7,(ulong)uVar2)) {
          param_1[1] = 2;
          *param_1 = 1;
          return;
        }
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  if (lVar6 != 0) {
    *(long *)(param_1 + 8) = lVar6;
    *param_1 = 0;
    return;
  }
LAB_007460c0:
  param_1[1] = 4;
  *param_1 = 1;
  return;
}


// ===== 00746128  <core::num::niche_types::NonZeroUsizeInner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroUsizeInner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroUsizeInner_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_0074d704(*param_1);
  return;
}


// ===== 00746130  <core::num::niche_types::NonZeroI64Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI64Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI64Inner_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_0074cd28(*param_1);
  return;
}


// ===== 00746138  <core::wtf8::Wtf8_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::wtf8::Wtf8 as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::wtf8::Wtf8_as_core::fmt::Debug>::fmt(long param_1,ulong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  ushort local_74 [2];
  ushort *local_70;
  undefined *puStack_68;
  
  uVar8 = *param_3;
  lVar3 = param_3[1];
  pcVar13 = *(code **)(lVar3 + 0x20);
  uVar6 = (*pcVar13)(uVar8,0x22);
  puVar5 = PTR_fmt_0099f530;
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar6 = 0;
  pbVar2 = (byte *)(param_1 + param_2);
LAB_00746198:
  uVar7 = param_2;
  if (uVar6 == param_2) {
LAB_007462d0:
    uVar6 = FUN_00743ea4(uVar8,lVar3,param_1 + uVar7,param_2 - uVar7);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    uVar8 = (*pcVar13)(uVar8,0x22);
    return uVar8;
  }
  pbVar9 = (byte *)(param_1 + uVar6);
  uVar12 = uVar6;
  do {
    pbVar10 = pbVar9 + 1;
    bVar4 = *pbVar9;
    uVar7 = uVar6;
    if ((char)bVar4 < '\0') {
      if (bVar4 < 0xe0) {
        pbVar1 = pbVar9 + 2;
        lVar11 = 2;
        pbVar9 = pbVar10;
        if (pbVar10 != pbVar2) {
          pbVar9 = pbVar1;
        }
      }
      else if (bVar4 == 0xed) {
        if ((pbVar10 == pbVar2) || (pbVar9 + 2 == pbVar2)) goto LAB_007462d0;
        if (0x9f < pbVar9[1]) break;
        lVar11 = 3;
        pbVar9 = pbVar9 + 3;
      }
      else {
        if (pbVar10 != pbVar2) {
          pbVar10 = pbVar9 + 2;
        }
        if (pbVar10 != pbVar2) {
          pbVar10 = pbVar10 + 1;
        }
        pbVar9 = pbVar10;
        if (bVar4 < 0xf0) {
          lVar11 = 3;
        }
        else {
          lVar11 = 4;
          if (pbVar10 != pbVar2) {
            pbVar9 = pbVar10 + 1;
          }
        }
      }
    }
    else {
      lVar11 = 1;
      pbVar9 = pbVar10;
    }
    uVar12 = lVar11 + uVar12;
    if (pbVar9 == pbVar2) goto LAB_007462d0;
  } while( true );
  local_74[0] = pbVar9[2] & 0x3f | (ushort)((pbVar9[1] & 0x1f) << 6) | 0xd800;
  if ((uVar12 < uVar6) || (param_2 < uVar12)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar6,uVar12,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c0d8);
  }
  uVar6 = FUN_00743ea4(uVar8,lVar3,param_1 + uVar6,uVar12 - uVar6);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  puStack_68 = puVar5;
  local_70 = local_74;
  uVar6 = core::fmt::write(uVar8,lVar3,&DAT_0036c275,&local_70);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  uVar6 = uVar12 + 3;
  if (param_2 < uVar6) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar6,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b750);
  }
  goto LAB_00746198;
}


// ===== 00746330  <core::ffi::c_str::CStr_as_core::clone::CloneToUninit>::clone_to_uninit =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::CStr as core::clone::CloneToUninit>::clone_to_uninit */

void __rustcall
<core::ffi::c_str::CStr_as_core::clone::CloneToUninit>::clone_to_uninit
          (void *param_1,size_t param_2,void *param_3)

{
  memcpy(param_3,param_1,param_2);
  return;
}


// ===== 00746344  <core::ffi::c_str::CStr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::CStr as core::fmt::Debug>::fmt */

void __rustcall <core::ffi::c_str::CStr_as_core::fmt::Debug>::fmt(undefined8 param_1,long param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Debug>::fmt(param_1,param_2 + -1);
  return;
}


// ===== 0074634c  <core::mem::transmutability::Assume_as_core::ops::arith::Sub>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::transmutability::Assume as core::ops::arith::Sub>::sub */

uint __rustcall
<core::mem::transmutability::Assume_as_core::ops::arith::Sub>::sub(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & (param_2 ^ 0xffffffff);
  uVar1 = uVar2 & 0x10000;
  if ((param_1 & 0x1000000) != 0) {
    uVar1 = (uVar1 | param_2 & 0x1000000) ^ 0x1000000;
  }
  return uVar2 & 0x101 | uVar1;
}


// ===== 00746378  <f32_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::str::traits::FromStr>::from_str */

ulong __rustcall
<f32_as_core::str::traits::FromStr>::from_str(float param_1,ulong *param_2,long param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint3 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined8 local_370;
  byte local_368;
  undefined7 uStack_367;
  byte local_35f;
  uint local_68;
  byte local_64;
  
  if (param_3 == 0) {
    return (ulong)(uint)param_1 << 0x20 | 1;
  }
  cVar1 = (char)*param_2;
  if ((cVar1 == '-') || (cVar1 == '+')) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      uVar6 = 1;
      uVar7 = 0x100;
      goto LAB_007465f4;
    }
    param_2 = (ulong *)((long)param_2 + 1);
  }
  param_1 = (float)core::num::imp::dec2flt::parse::parse_number(&local_370,param_2,param_3);
  uVar6 = local_370;
  if (local_35f == 2) {
    if (param_3 == 3) {
      uVar4 = (uint3)*param_2 & 0xdfdfdf;
      if (uVar4 == 0x464e49) goto LAB_007464fc;
      if (uVar4 != 0x4e414e) goto LAB_007464f0;
      fVar11 = NAN;
    }
    else {
      if ((param_3 != 8) || ((*param_2 & 0xdfdfdfdfdfdfdfdf) != 0x5954494e49464e49)) {
LAB_007464f0:
        uVar6 = 1;
        uVar7 = 0x100;
        goto LAB_007465f4;
      }
LAB_007464fc:
      fVar11 = INFINITY;
    }
    uVar7 = 0x100;
    param_1 = -fVar11;
  }
  else {
    uVar7 = CONCAT71(uStack_367,local_368);
    if (((local_370 - 0x12 < 0xffffffffffffffe4) || (0x1000000 < uVar7)) || ((local_35f & 1) != 0))
    {
      auVar13 = FUN_00734a24(local_370,uVar7);
      iVar5 = auVar13._8_4_;
      if (((local_35f & 1) == 0) || (iVar5 < 0)) {
joined_r0x00746518:
        if (iVar5 < 0) {
LAB_0074657c:
          core::num::imp::dec2flt::decimal_seq::parse_decimal_seq(&local_370,param_2,param_3);
          auVar13 = ZEXT812(0);
          if ((local_370 != 0) &&
             (auVar13 = ZEXT812(0), (int)(local_68 + 0x144) < 0 == SCARRY4(local_68,0x144))) {
            if ((int)local_68 < 0x136) {
              iVar5 = 0;
              while (uVar6 = (ulong)local_68, 0 < (int)local_68) {
                if (local_68 < 0x13) {
                  uVar9 = (uint)(byte)""[uVar6];
                }
                else {
                  uVar9 = 0x3c;
                }
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::right_shift(&local_370,uVar9);
                if (local_68 == 0xfffff800 || (int)(local_68 + 0x800) < 0 != SCARRY4(local_68,0x800)
                   ) {
                  auVar13 = ZEXT812(0);
                  goto LAB_007465b8;
                }
                iVar5 = iVar5 + uVar9;
              }
              do {
                if ((int)uVar6 == 0) {
                  if (4 < local_368) break;
                  uVar9 = 1;
                  if (local_368 < 2) {
                    uVar9 = 2;
                  }
                }
                else {
                  uVar9 = -(int)uVar6;
                  if (uVar9 < 0x13) {
                    uVar9 = (uint)(byte)""[uVar9];
                  }
                  else {
                    uVar9 = 0x3c;
                  }
                }
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::left_shift(&local_370,uVar9);
                uVar6 = (ulong)local_68;
                if (0x7ff < (int)local_68) goto LAB_007465b0;
                iVar5 = iVar5 - uVar9;
              } while ((int)local_68 < 1);
              uVar9 = iVar5 - 1;
              if (uVar9 == 0xffffff81 || iVar5 + 0x7e < 0 != SCARRY4(uVar9,0x7f)) {
                do {
                  uVar10 = -uVar9 - 0x7e;
                  if (0x3b < uVar10) {
                    uVar10 = 0x3c;
                  }
                  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                  ::right_shift(&local_370,uVar10);
                  uVar9 = uVar10 + uVar9;
                } while (uVar9 < 0xffffff82);
              }
              if ((int)(uVar9 + 0x7f) < 0xff) {
                <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                ::left_shift(&local_370,0x18);
                if ((local_370 == 0) || (uVar6 = (ulong)local_68, (int)local_68 < 0)) {
                  auVar12._4_8_ = 0;
                  auVar12._0_4_ = uVar9 + 0x7e;
                  auVar13 = auVar12 << 0x40;
                  goto LAB_007465b8;
                }
                if (local_68 < 0x13) {
                  uVar7 = 0;
                  if (local_68 != 0) {
                    uVar8 = 0;
                    do {
                      uVar7 = uVar7 * 10;
                      if (uVar8 < local_370) {
                        uVar7 = uVar7 + (&local_368)[uVar8];
                      }
                      uVar8 = uVar8 + 1;
                    } while (uVar6 != uVar8);
                  }
                  if (uVar6 < local_370) {
                    if ((uVar6 + 1 == local_370) && ((&local_368)[uVar6] == 5)) {
                      if (((local_64 & 1) != 0) ||
                         ((local_68 != 0 && ((*(byte *)((long)&local_370 + uVar6 + 7) & 1) != 0))))
                      {
LAB_007467cc:
                        uVar7 = uVar7 + 1;
                      }
                    }
                    else if (4 < (&local_368)[uVar6]) goto LAB_007467cc;
                  }
                  if (uVar7 >> 0x18 != 0) goto LAB_007467d8;
                }
                else {
LAB_007467d8:
                  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                  ::right_shift(&local_370,1);
                  uVar7 = <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                          ::round(&local_370);
                  if (0xfe < (int)(uVar9 + 0x80)) goto LAB_007465b0;
                  uVar9 = uVar9 + 1;
                }
                iVar5 = 0x7e;
                if (0x7fffff < uVar7) {
                  iVar5 = 0x7f;
                }
                auVar13._8_4_ = iVar5 + uVar9;
                auVar13._0_8_ = uVar7 & 0x7fffff;
                goto LAB_007465b8;
              }
            }
LAB_007465b0:
            auVar13 = ZEXT412(0xff) << 0x40;
          }
        }
      }
      else {
        auVar12 = FUN_00734a24(uVar6,uVar7 + 1);
        if (auVar13 != auVar12) goto LAB_0074657c;
      }
LAB_007465b8:
      fVar11 = (float)(auVar13._0_4_ | auVar13._8_4_ << 0x17);
      uVar7 = 0;
      param_1 = -fVar11;
    }
    else {
      if ((long)local_370 < 0xb) {
        if ((long)local_370 < 0) {
          fVar11 = (float)uVar7 / *(float *)("" + local_370 * -4);
        }
        else {
          fVar11 = *(float *)("" + local_370 * 4) * (float)uVar7;
        }
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulong *)(core::unicode::unicode_data::uppercase::BITSET_CHUNKS_MAP +
                                 local_370 * 8 + 0x31);
        if ((SUB168(auVar2 * auVar3,8) != 0) ||
           (uVar6 = uVar7 * *(ulong *)(core::unicode::unicode_data::uppercase::BITSET_CHUNKS_MAP +
                                      local_370 * 8 + 0x31), 0x1000000 < uVar6)) {
          auVar13 = FUN_00734a24(local_370,uVar7);
          iVar5 = auVar13._8_4_;
          goto joined_r0x00746518;
        }
        fVar11 = (float)uVar6 * 1e+10;
      }
      param_1 = -fVar11;
      uVar7 = 0x100;
    }
  }
  uVar6 = 0;
  if (cVar1 != '-') {
    param_1 = fVar11;
  }
LAB_007465f4:
  return uVar7 | (ulong)(uint)param_1 << 0x20 | uVar6;
}


// ===== 00746814  <core::str::error::ParseBoolError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::error::ParseBoolError as core::fmt::Display>::fmt */

void __rustcall
<core::str::error::ParseBoolError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0046c558,0x29);
  return;
}


// ===== 00746828  <core::char::decode::DecodeUtf16Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::decode::DecodeUtf16Error as core::fmt::Display>::fmt */

void __rustcall
<core::char::decode::DecodeUtf16Error_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_0099f530;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0036f100,&local_20);
  return;
}


// ===== 00746864  <core::task::wake::Context_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::task::wake::Context as core::fmt::Debug>::fmt */

byte __rustcall
<core::task::wake::Context_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_30;
  byte local_28;
  byte local_27;
  
  local_28 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046c581,7);
  local_27 = 0;
  local_30 = param_2;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_30,&DAT_0046c588,5,param_1,&DAT_0097c0f0);
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


// ===== 00746928  <core::ascii::ascii_char::AsciiChar_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ascii::ascii_char::AsciiChar as core::fmt::Debug>::fmt */

void __rustcall
<core::ascii::ascii_char::AsciiChar_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  byte local_17;
  undefined1 local_16;
  char local_15;
  char local_14;
  char local_13;
  
  local_17 = *param_1;
  if (local_17 < 0xd) {
    if (local_17 == 0) {
      local_16 = 0x30;
LAB_007469a0:
      local_14 = '\0';
      local_15 = '\'';
      uVar1 = 4;
      local_17 = 0x5c;
      local_13 = local_14;
      goto LAB_00746a44;
    }
    if (local_17 == 9) {
      local_16 = 0x74;
    }
    else {
      if (local_17 != 10) {
LAB_007469bc:
        if ((local_17 < 0x20) || (local_17 == 0x7f)) {
          local_16 = 0x78;
          uVar1 = 6;
          local_15 = "0123456789abcdef"[local_17 >> 4];
          local_14 = "0123456789abcdef"[(ulong)local_17 & 0xf];
          local_17 = 0x5c;
          local_13 = '\'';
        }
        else {
          local_13 = '\0';
          local_14 = '\0';
          local_15 = '\0';
          local_16 = 0x27;
          uVar1 = 3;
        }
        goto LAB_00746a44;
      }
      local_16 = 0x6e;
    }
  }
  else {
    if (local_17 != 0xd) {
      if (local_17 == 0x27) {
        local_13 = '\0';
        local_14 = '\0';
        local_17 = 0x5c;
        local_15 = '\'';
        uVar1 = 4;
        local_16 = 0x27;
        goto LAB_00746a44;
      }
      if (local_17 != 0x5c) goto LAB_007469bc;
      local_16 = 0x5c;
      goto LAB_007469a0;
    }
    local_16 = 0x72;
  }
  local_14 = '\0';
  local_13 = '\0';
  local_17 = 0x5c;
  local_15 = '\'';
  uVar1 = 4;
LAB_00746a44:
  local_18 = 0x27;
  (**(code **)(param_2[1] + 0x18))(*param_2,&local_18,uVar1);
  return;
}


// ===== 00746a88  <core::panic::location::Location_as_core::cmp::PartialOrd>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::panic::location::Location as core::cmp::PartialOrd>::partial_cmp */

uint __rustcall
<core::panic::location::Location_as_core::cmp::PartialOrd>::partial_cmp
          (undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_2[1];
  uVar3 = param_1[1];
  __n = uVar3;
  if (uVar2 <= uVar3) {
    __n = uVar2;
  }
  iVar4 = memcmp((void *)*param_1,(void *)*param_2,__n);
  lVar1 = uVar3 - uVar2;
  if (iVar4 != 0) {
    lVar1 = (long)iVar4;
  }
  uVar5 = (uint)(0 < lVar1);
  if (lVar1 < 0) {
    uVar5 = 0xffffffff;
  }
  if ((lVar1 == 0) &&
     (uVar5 = (uint)(*(uint *)(param_2 + 2) < *(uint *)(param_1 + 2)),
     *(uint *)(param_1 + 2) < *(uint *)(param_2 + 2))) {
    uVar5 = 0xffffffff;
  }
  if ((uVar5 & 0xff) == 0) {
    uVar5 = (uint)(*(uint *)((long)param_2 + 0x14) < *(uint *)((long)param_1 + 0x14));
    if (*(uint *)((long)param_1 + 0x14) < *(uint *)((long)param_2 + 0x14)) {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  return uVar5;
}


// ===== 00746b28  <core::marker::variance::PhantomCovariantLifetime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::marker::variance::PhantomCovariantLifetime as core::fmt::Debug>::fmt */

void __rustcall
<core::marker::variance::PhantomCovariantLifetime_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00746b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0046c58d,0x18);
  return;
}


// ===== 00746b44  <core::num::imp::bignum::tests::Big8x3_as_core::cmp::PartialOrd>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::Big8x3 as core::cmp::PartialOrd>::partial_cmp */

uint __rustcall
<core::num::imp::bignum::tests::Big8x3_as_core::cmp::PartialOrd>::partial_cmp
          (ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
  uVar2 = *param_2;
  if (*param_2 <= *param_1) {
    uVar2 = *param_1;
  }
  if (uVar2 < 4) {
    if (uVar2 == 0) {
      return 0;
    }
    lVar1 = uVar2 + 7;
    bVar4 = *(byte *)((long)param_1 + lVar1);
    bVar5 = *(byte *)((long)param_2 + lVar1);
    if (bVar4 == bVar5) {
      if (lVar1 == 8) {
        return 0;
      }
      lVar1 = uVar2 + 6;
      bVar4 = *(byte *)((long)param_1 + lVar1);
      bVar5 = *(byte *)((long)param_2 + lVar1);
      if (bVar4 == bVar5) {
        if (lVar1 == 8) {
          return 0;
        }
        lVar1 = uVar2 + 5;
        bVar4 = *(byte *)((long)param_1 + lVar1);
        bVar5 = *(byte *)((long)param_2 + lVar1);
        if (bVar4 == bVar5) {
          if (lVar1 == 8) {
            return 0;
          }
          bVar4 = *(byte *)((long)param_1 + (uVar2 | 4));
          bVar5 = *(byte *)((long)param_2 + (uVar2 | 4));
        }
      }
    }
    uVar3 = (uint)(bVar5 < bVar4);
    if (bVar4 < bVar5) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar2,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
}


// ===== 00746bf8  <core::num::niche_types::NonZeroI16Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI16Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI16Inner_as_core::fmt::Debug>::fmt(undefined2 *param_1)

{
  FUN_0074ca98(*param_1);
  return;
}


// ===== 00746c00  <core::sync::atomic::Atomic<isize>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<isize> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<isize>as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_0074cd28(*param_1);
  return;
}


// ===== 00746c08  <core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr_as_core[188d2c0002da36d0]::ops::bit::BitOrAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr>>::bitor_assign =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr as
   core[188d2c0002da36d0]::ops::bit::BitOrAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr>>::bitor_assign
    */

void <core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr_as_core[188d2c0002da36d0]::ops::bit::BitOrAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv4Addr>>
     ::bitor_assign(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *param_2;
  auVar2._4_4_ = uVar1;
  auVar2._0_4_ = uVar1;
  auVar2._8_4_ = uVar1;
  auVar2._12_4_ = uVar1;
  auVar2 = NEON_ushl(auVar2,_s__00372690,4);
  uVar1 = *param_1;
  *param_1 = CONCAT13((byte)((uint)uVar1 >> 0x18) | auVar2[0xc],
                      CONCAT12((byte)((uint)uVar1 >> 0x10) | auVar2[8],
                               CONCAT11((byte)((uint)uVar1 >> 8) | auVar2[4],(byte)uVar1 | auVar2[0]
                                       )));
  return;
}


// ===== 00746c34  <core::sync::atomic::Atomic<usize>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<usize> as core::fmt::Debug>::fmt */

void __rustcall <core::sync::atomic::Atomic<usize>as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_0074d704(*param_1);
  return;
}


// ===== 00746c3c  FUN_00746c3c =====

void FUN_00746c3c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00746c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 00746c48  FUN_00746c48 =====

undefined8 FUN_00746c48(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined1 local_24 [4];
  
  plVar6 = (long *)*param_1;
  if (*plVar6 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00746cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00378aa0,4);
    return uVar4;
  }
  uVar4 = *param_2;
  lVar1 = param_2[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar5)(uVar4,&DAT_00377930,4);
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_2 + 0x12) < '\0') {
      uVar3 = (*pcVar5)(uVar4,&DAT_004669e4,2);
      if ((uVar3 & 1) == 0) {
        local_24[0] = 1;
        local_60 = local_24;
        uStack_48 = param_2[2];
        local_50 = &DAT_0097b768;
        local_70 = uVar4;
        lStack_68 = lVar1;
        local_58 = (undefined1 *)&local_70;
        iVar2 = FUN_0074d704(plVar6[1],&local_58);
        if ((iVar2 == 0) &&
           (uVar3 = (**(code **)(local_50 + 0x18))(local_58,&DAT_004669e1,2), (uVar3 & 1) == 0))
        goto LAB_00746d94;
      }
    }
    else {
      uVar3 = (*pcVar5)(uVar4,&DAT_004669e3,1);
      if (((uVar3 & 1) == 0) && (uVar3 = FUN_0074d704(plVar6[1],param_2), (uVar3 & 1) == 0)) {
        uVar4 = *param_2;
        pcVar5 = *(code **)(param_2[1] + 0x18);
LAB_00746d94:
        uVar4 = (*pcVar5)(uVar4,&DAT_00466a71,1);
        return uVar4;
      }
    }
  }
  return 1;
}


// ===== 00746dc0  FUN_00746dc0 =====

void FUN_00746dc0(undefined8 *param_1)

{
  <core::task::wake::Waker_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00746dc8  FUN_00746dc8 =====

void FUN_00746dc8(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00746ddc  FUN_00746ddc =====

void FUN_00746ddc(undefined8 *param_1)

{
  FUN_0074d704(*(undefined8 *)*param_1);
  return;
}


// ===== 00746de8  FUN_00746de8 =====

void FUN_00746de8(undefined8 *param_1,long param_2)

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
    uVar1 = *(uint *)*param_1;
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
    uVar1 = *(uint *)*param_1;
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


// ===== 00746eb0  FUN_00746eb0 =====

void FUN_00746eb0(undefined8 *param_1)

{
  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 00746eb8  FUN_00746eb8 =====

void FUN_00746eb8(undefined8 *param_1)

{
  <core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 00746ec0  FUN_00746ec0 =====

void FUN_00746ec0(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*param_1,param_1[1]);
  return;
}


// ===== 00746ed0  FUN_00746ed0 =====

void FUN_00746ed0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_44 [20];
  
  lVar1 = FUN_0073be94(*(undefined8 *)*param_1,auStack_44,0x14);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_44 + lVar1,0x14 - lVar1);
  return;
}


// ===== 00746f34  <core::num::niche_types::NonZeroI32Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI32Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI32Inner_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

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


// ===== 00747000  <core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr_as_core[188d2c0002da36d0]::ops::bit::BitAndAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr>>::bitand_assign =====

/* <core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr as
   core[188d2c0002da36d0]::ops::bit::BitAndAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr>>::bitand_assign
    */

void <core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr_as_core[188d2c0002da36d0]::ops::bit::BitAndAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr>>
     ::bitand_assign(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = CONCAT17((byte)((ulong)uVar4 >> 0x38) & (byte)((ulong)uVar2 >> 0x38),
                        CONCAT16((byte)((ulong)uVar4 >> 0x30) & (byte)((ulong)uVar2 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar4 >> 0x28) &
                                          (byte)((ulong)uVar2 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar4 >> 0x20) &
                                                   (byte)((ulong)uVar2 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                            (byte)((ulong)uVar2 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar4 >> 0x10) &
                                                                     (byte)((ulong)uVar2 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar4 >>
                                                                                    8) &
                                                                              (byte)((ulong)uVar2 >>
                                                                                    8),(byte)uVar4 &
                                                                                       (byte)uVar2))
                                                           )))));
  *param_1 = CONCAT17((byte)((ulong)uVar3 >> 0x38) & (byte)((ulong)uVar1 >> 0x38),
                      CONCAT16((byte)((ulong)uVar3 >> 0x30) & (byte)((ulong)uVar1 >> 0x30),
                               CONCAT15((byte)((ulong)uVar3 >> 0x28) & (byte)((ulong)uVar1 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar3 >> 0x20) &
                                                 (byte)((ulong)uVar1 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar3 >> 0x18) &
                                                          (byte)((ulong)uVar1 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar3 >> 0x10) &
                                                                   (byte)((ulong)uVar1 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar3 >> 8
                                                                                  ) & (byte)((ulong)
                                                  uVar1 >> 8),(byte)uVar3 & (byte)uVar1)))))));
  return;
}


// ===== 00747014  <core::num::nonzero::NonZero<i8>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i8> as core::str::traits::FromStr>::from_str */

bool __rustcall
<core::num::nonzero::NonZero<i8>as_core::str::traits::FromStr>::from_str
          (byte *param_1,ulong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    return true;
  }
  uVar7 = param_2 - 1;
  if (uVar7 == 0) {
    bVar2 = *param_1;
    if (bVar2 == 0x2b) {
      return true;
    }
    if (bVar2 == 0x2d) {
      return true;
    }
  }
  else {
    bVar2 = *param_1;
  }
  if (bVar2 == 0x2d) {
    if (2 < param_2) {
      uVar6 = 0;
      pbVar5 = param_1 + 1;
      do {
        iVar3 = ((int)(char)uVar6 + (char)uVar6 * 4) * 2;
        cVar1 = (char)iVar3;
        if (iVar3 != cVar1) {
          return true;
        }
        if (9 < *pbVar5 - 0x30) {
          return true;
        }
        uVar6 = (int)cVar1 - (int)(char)(*pbVar5 - 0x30);
        if ((int)(char)uVar6 != uVar6) {
          return true;
        }
        uVar7 = uVar7 - 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar7 != 0);
      goto LAB_0074718c;
    }
    if (uVar7 != 0) {
      uVar6 = param_1[1] - 0x30;
      if (9 < uVar6) {
        return true;
      }
      uVar6 = -uVar6;
      goto LAB_0074718c;
    }
  }
  else {
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar7;
    }
    if (1 < param_2) {
      uVar6 = 0;
      do {
        iVar3 = ((int)(char)uVar6 + (char)uVar6 * 4) * 2;
        cVar1 = (char)iVar3;
        if (iVar3 != cVar1) {
          return true;
        }
        if (9 < *param_1 - 0x30) {
          return true;
        }
        uVar6 = (int)cVar1 + (int)(char)(*param_1 - 0x30);
        if ((int)(char)uVar6 != uVar6) {
          return true;
        }
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
      goto LAB_0074718c;
    }
    if (param_2 != 0) {
      uVar4 = *param_1 - 0x30;
      uVar6 = uVar4;
      if (9 < uVar4) {
        uVar6 = 1;
      }
      return (uVar6 & 0xff) == 0 || 9 < uVar4;
    }
  }
  uVar6 = 0;
LAB_0074718c:
  return (uVar6 & 0xff) == 0;
}


// ===== 00747220  FUN_00747220 =====

void FUN_00747220(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char local_11;
  
  uVar3 = (ulong)*(ushort *)*param_1;
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


// ===== 00747298  <core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr_as_core[188d2c0002da36d0]::ops::bit::BitOrAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr>>::bitor_assign =====

/* <core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr as
   core[188d2c0002da36d0]::ops::bit::BitOrAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr>>::bitor_assign
    */

void <core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr_as_core[188d2c0002da36d0]::ops::bit::BitOrAssign<&core[188d2c0002da36d0]::net::ip_addr::Ipv6Addr>>
     ::bitor_assign(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = CONCAT17((byte)((ulong)uVar4 >> 0x38) | (byte)((ulong)uVar2 >> 0x38),
                        CONCAT16((byte)((ulong)uVar4 >> 0x30) | (byte)((ulong)uVar2 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar4 >> 0x28) |
                                          (byte)((ulong)uVar2 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar4 >> 0x20) |
                                                   (byte)((ulong)uVar2 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar4 >> 0x18) |
                                                            (byte)((ulong)uVar2 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar4 >> 0x10) |
                                                                     (byte)((ulong)uVar2 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar4 >>
                                                                                    8) |
                                                                              (byte)((ulong)uVar2 >>
                                                                                    8),(byte)uVar4 |
                                                                                       (byte)uVar2))
                                                           )))));
  *param_1 = CONCAT17((byte)((ulong)uVar3 >> 0x38) | (byte)((ulong)uVar1 >> 0x38),
                      CONCAT16((byte)((ulong)uVar3 >> 0x30) | (byte)((ulong)uVar1 >> 0x30),
                               CONCAT15((byte)((ulong)uVar3 >> 0x28) | (byte)((ulong)uVar1 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar3 >> 0x20) |
                                                 (byte)((ulong)uVar1 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar3 >> 0x18) |
                                                          (byte)((ulong)uVar1 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar3 >> 0x10) |
                                                                   (byte)((ulong)uVar1 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar3 >> 8
                                                                                  ) | (byte)((ulong)
                                                  uVar1 >> 8),(byte)uVar3 | (byte)uVar1)))))));
  return;
}


// ===== 007472ac  <core::num::nonzero::NonZero<i16>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i16> as core::str::traits::FromStr>::from_str */

uint __rustcall
<core::num::nonzero::NonZero<i16>as_core::str::traits::FromStr>::from_str
          (byte *param_1,ulong param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    uVar4 = 1;
    goto LAB_00747430;
  }
  uVar5 = param_2 - 1;
  if (uVar5 == 0) {
    bVar6 = *param_1;
    uVar4 = 0x101;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) goto LAB_00747430;
    if (bVar6 == 0x2d) goto LAB_0074735c;
LAB_007472d8:
    if (bVar6 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar5;
    }
    if (param_2 < 4) {
      if (param_2 == 0) {
        uVar4 = 0;
        goto LAB_00747430;
      }
      uVar4 = *param_1 - 0x30;
      if (uVar4 < 10) {
        if (param_2 == 1) goto LAB_0074741c;
        if (param_1[1] - 0x30 < 10) {
          uVar4 = (param_1[1] - 0x30) + uVar4 * 10;
          if (param_2 == 2) goto LAB_0074741c;
          if (param_1[2] - 0x30 < 10) {
            uVar4 = ((param_1[2] - 0x30) + uVar4 * 10) * 0x10000;
            goto LAB_00747430;
          }
        }
      }
LAB_00747424:
      uVar4 = 0x101;
      goto LAB_00747430;
    }
    uVar4 = 0;
    do {
      iVar3 = ((int)(short)uVar4 + (short)uVar4 * 4) * 2;
      sVar1 = (short)iVar3;
      if (iVar3 != sVar1) {
        uVar4 = 0x201;
LAB_00747474:
        if (9 < *param_1 - 0x30) {
          uVar4 = 0x101;
        }
        goto LAB_00747430;
      }
      if (9 < *param_1 - 0x30) goto LAB_00747424;
      uVar4 = (*param_1 - 0x30) + (int)sVar1;
      if ((int)(short)uVar4 != uVar4) {
        uVar4 = 0x201;
        goto LAB_00747430;
      }
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  else {
    bVar6 = *param_1;
    if (bVar6 != 0x2d) goto LAB_007472d8;
LAB_0074735c:
    param_1 = param_1 + 1;
    uVar4 = 0;
    if (param_2 < 5) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (9 < *param_1 - 0x30) goto LAB_00747424;
        uVar4 = uVar4 * 10 - (*param_1 - 0x30);
        param_1 = param_1 + 1;
      }
    }
    else {
      do {
        iVar3 = ((int)(short)uVar4 + (short)uVar4 * 4) * 2;
        sVar1 = (short)iVar3;
        if (iVar3 != sVar1) {
          uVar4 = 0x301;
          goto LAB_00747474;
        }
        if (9 < *param_1 - 0x30) goto LAB_00747424;
        uVar4 = (int)sVar1 - (*param_1 - 0x30);
        if ((int)(short)uVar4 != uVar4) {
          uVar4 = 0x301;
          goto LAB_00747430;
        }
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
    }
  }
LAB_0074741c:
  uVar4 = uVar4 << 0x10;
LAB_00747430:
  uVar7 = 0x400;
  if (uVar4 >= 0x10000) {
    uVar7 = 0;
  }
  uVar2 = uVar4 & 0xff00;
  if ((uVar4 & 1) == 0) {
    uVar2 = uVar7;
  }
  return uVar2 | uVar4 & 0xffff0000 | (uint)(uVar4 < 0x10000) | uVar4 & 1;
}


// ===== 00747494  <core::num::nonzero::NonZero<i32>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i32> as core::str::traits::FromStr>::from_str */

ulong __rustcall
<core::num::nonzero::NonZero<i32>as_core::str::traits::FromStr>::from_str
          (byte *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    uVar9 = 0;
    bVar3 = true;
    goto LAB_00747684;
  }
  uVar10 = param_2 - 1;
  if (uVar10 == 0) {
    bVar6 = *param_1;
    uVar9 = 0x101;
    bVar3 = true;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) goto LAB_00747684;
    if (bVar6 == 0x2d) goto LAB_007475b4;
LAB_007474c0:
    if (bVar6 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = uVar10;
    }
    if (param_2 < 8) {
      if (param_2 == 0) {
        uVar9 = 0;
        bVar3 = false;
        goto LAB_00747684;
      }
      uVar8 = *param_1 - 0x30;
      if (uVar8 < 10) {
        if (param_2 == 1) goto LAB_0074766c;
        if (param_1[1] - 0x30 < 10) {
          uVar8 = (param_1[1] - 0x30) + uVar8 * 10;
          if (param_2 == 2) goto LAB_0074766c;
          if (param_1[2] - 0x30 < 10) {
            uVar8 = (param_1[2] - 0x30) + uVar8 * 10;
            if (param_2 == 3) goto LAB_0074766c;
            if (param_1[3] - 0x30 < 10) {
              uVar8 = (param_1[3] - 0x30) + uVar8 * 10;
              if (param_2 == 4) goto LAB_0074766c;
              if (param_1[4] - 0x30 < 10) {
                uVar8 = (param_1[4] - 0x30) + uVar8 * 10;
                if (param_2 == 5) goto LAB_0074766c;
                if (param_1[5] - 0x30 < 10) {
                  uVar8 = (param_1[5] - 0x30) + uVar8 * 10;
                  if (param_2 == 6) goto LAB_0074766c;
                  if (param_1[6] - 0x30 < 10) {
                    uVar9 = (ulong)((param_1[6] - 0x30) + uVar8 * 10) << 0x20;
                    bVar3 = false;
                    goto LAB_00747684;
                  }
                }
              }
            }
          }
        }
      }
      uVar9 = 0x101;
      bVar3 = true;
      goto LAB_00747684;
    }
    uVar8 = 0;
    uVar9 = 0x101;
    bVar3 = true;
    do {
      iVar7 = (int)((long)(int)uVar8 * 10);
      uVar1 = 0x201;
      if ((long)(int)uVar8 * 10 - (long)iVar7 != 0) goto LAB_007476b8;
      uVar2 = *param_1 - 0x30;
      if (9 < uVar2) goto LAB_00747684;
      uVar8 = iVar7 + uVar2;
      if (SCARRY4(iVar7,uVar2)) {
        uVar9 = 0x201;
        bVar3 = true;
        goto LAB_00747684;
      }
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  else {
    bVar6 = *param_1;
    if (bVar6 != 0x2d) goto LAB_007474c0;
LAB_007475b4:
    uVar8 = 0;
    if (param_2 < 9) {
      if (uVar10 != 0) {
        uVar9 = 0x101;
        bVar3 = true;
        pbVar5 = param_1 + 1;
        do {
          if (9 < *pbVar5 - 0x30) goto LAB_00747684;
          uVar8 = uVar8 * 10 - (*pbVar5 - 0x30);
          uVar10 = uVar10 - 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar10 != 0);
      }
    }
    else {
      uVar9 = 0x101;
      bVar3 = true;
      param_1 = param_1 + 1;
      do {
        iVar7 = (int)((long)(int)uVar8 * 10);
        uVar1 = 0x301;
        if ((long)(int)uVar8 * 10 - (long)iVar7 != 0) goto LAB_007476b8;
        uVar2 = *param_1 - 0x30;
        if (9 < uVar2) goto LAB_00747684;
        uVar8 = iVar7 - uVar2;
        if (SBORROW4(iVar7,uVar2)) {
          uVar9 = 0x301;
          bVar3 = true;
          goto LAB_00747684;
        }
        uVar10 = uVar10 - 1;
        param_1 = param_1 + 1;
      } while (uVar10 != 0);
    }
  }
LAB_0074766c:
  uVar9 = (ulong)uVar8 << 0x20;
  bVar3 = false;
LAB_00747684:
  bVar4 = uVar9 >> 0x20 == 0;
  uVar10 = 0x400;
  if (!bVar4) {
    uVar10 = 0;
  }
  uVar1 = uVar9 & 0xff00;
  if (!bVar3) {
    uVar1 = uVar10;
  }
  return uVar1 | uVar9 & 0xffffffff00000000 | (ulong)(byte)(bVar4 | bVar3);
LAB_007476b8:
  uVar9 = uVar1;
  if (9 < *param_1 - 0x30) {
    uVar9 = 0x101;
  }
  bVar3 = true;
  goto LAB_00747684;
}


// ===== 007476e0  <core::num::niche_types::NonZeroI128Inner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroI128Inner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::NonZeroI128Inner_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  FUN_0074d00c(*param_1,param_1[1],param_2);
  return;
}


// ===== 007476f0  <core::str::iter::EscapeDebug_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::EscapeDebug as core::fmt::Display>::fmt */

bool __rustcall
<core::str::iter::EscapeDebug_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte in_w8;
  ulong uVar8;
  byte in_w9;
  int iVar9;
  int in_w14;
  byte in_w15;
  int in_w16;
  char cVar10;
  int unaff_w22;
  byte unaff_w23;
  uint uVar11;
  byte unaff_w24;
  code *pcVar12;
  uint unaff_w26;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ulong unaff_x27;
  uint uVar16;
  ulong unaff_x28;
  uint local_154;
  byte *local_148;
  byte *local_140;
  byte local_134;
  ulong local_11c;
  undefined4 local_114;
  byte local_110;
  byte local_10f;
  int local_10c;
  ulong local_108;
  undefined4 local_100;
  byte local_fc;
  byte local_fb;
  int local_f8;
  ulong local_f4;
  undefined4 uStack_ec;
  byte bStack_e8;
  byte bStack_e7;
  int local_e4;
  ulong local_e0;
  undefined4 local_d8;
  byte local_d4;
  byte local_d3;
  int local_d0;
  ulong local_cc;
  undefined4 uStack_c4;
  byte bStack_c0;
  byte bStack_bf;
  ulong local_b8;
  undefined4 local_b0;
  ulong local_a8;
  undefined4 local_a0;
  ulong local_98;
  undefined4 local_90;
  ulong local_88;
  undefined4 local_80;
  ulong local_78;
  undefined4 local_70;
  
  iVar9 = *(int *)(param_1 + 7);
  if (iVar9 == 2) {
    iVar9 = *(int *)(param_1 + 2);
    local_f8 = 2;
joined_r0x007477d8:
    if (iVar9 == 2) goto LAB_0074772c;
LAB_007477dc:
    local_140 = (byte *)param_1[1];
    if (iVar9 != 1) {
      iVar5 = *(int *)((long)param_1 + 0x24);
      local_148 = (byte *)*param_1;
    }
    else {
      unaff_x28 = (ulong)*(byte *)(param_1 + 4);
      local_88 = *(ulong *)((long)param_1 + 0x14);
      local_154 = (uint)*(byte *)((long)param_1 + 0x21);
      local_80 = *(undefined4 *)((long)param_1 + 0x1c);
      iVar5 = *(int *)((long)param_1 + 0x24);
      local_148 = (byte *)*param_1;
    }
    cVar10 = iVar9 == 1;
    if (iVar5 == 1) {
      in_w14 = 1;
      unaff_w24 = *(byte *)((long)param_1 + 0x34);
      local_134 = *(byte *)((long)param_1 + 0x35);
      local_78 = param_1[5];
      local_70 = *(undefined4 *)(param_1 + 6);
    }
    else {
      in_w14 = 0;
    }
  }
  else {
    unaff_w22 = *(int *)(param_1 + 0xc);
    if (unaff_w22 == 1) {
      in_w9 = *(byte *)(param_1 + 0xe);
      in_w8 = *(byte *)((long)param_1 + 0x71);
      local_98 = *(ulong *)((long)param_1 + 100);
      local_90 = *(undefined4 *)((long)param_1 + 0x6c);
      if (iVar9 == 1) goto LAB_0074778c;
LAB_00747760:
      local_f8 = 0;
      iVar9 = *(int *)((long)param_1 + 0x4c);
    }
    else {
      if (iVar9 != 1) goto LAB_00747760;
LAB_0074778c:
      unaff_x27 = (ulong)*(byte *)(param_1 + 9);
      unaff_w26 = (uint)*(byte *)((long)param_1 + 0x49);
      local_b8 = *(ulong *)((long)param_1 + 0x3c);
      local_f8 = 1;
      local_b0 = *(undefined4 *)((long)param_1 + 0x44);
      iVar9 = *(int *)((long)param_1 + 0x4c);
    }
    if (iVar9 == 1) {
      in_w16 = 1;
      unaff_w23 = *(byte *)((long)param_1 + 0x5c);
      in_w15 = *(byte *)((long)param_1 + 0x5d);
      local_a8 = param_1[10];
      local_a0 = *(undefined4 *)(param_1 + 0xb);
      iVar9 = *(int *)(param_1 + 2);
      goto joined_r0x007477d8;
    }
    in_w16 = 0;
    iVar9 = *(int *)(param_1 + 2);
    if (iVar9 != 2) goto LAB_007477dc;
LAB_0074772c:
    cVar10 = '\x02';
  }
  uVar8 = local_b8;
  local_f4 = local_b8;
  uStack_ec = local_b0;
  local_d8 = local_a0;
  local_cc = local_98;
  uStack_c4 = local_90;
  local_114 = local_80;
  local_11c = local_88;
  local_e0 = local_a8;
  local_108 = local_78;
  local_100 = local_70;
  local_110 = (byte)unaff_x28;
  local_10f = (byte)local_154;
  local_10c = in_w14;
  local_fc = unaff_w24;
  local_fb = local_134;
  uVar11 = (uint)unaff_x27;
  bStack_e8 = (byte)unaff_x27;
  bStack_e7 = (byte)unaff_w26;
  local_e4 = in_w16;
  local_d4 = unaff_w23;
  local_d3 = in_w15;
  local_d0 = unaff_w22;
  bStack_c0 = in_w9;
  bStack_bf = in_w8;
  if (local_f8 != 2) {
    if (local_f8 == 1) {
      uVar15 = unaff_w26 & 0xff;
      if (uVar15 < 0x81) {
        uVar16 = uVar11 & 0xff;
        uVar13 = uVar16;
        if (uVar16 <= uVar15) {
          uVar13 = uVar15;
        }
        if (uVar16 < uVar15) {
          uVar8 = unaff_x27 & 0xff;
          uVar3 = *param_2;
          pcVar12 = *(code **)(param_2[1] + 0x20);
          do {
            uVar6 = (*pcVar12)(uVar3,*(undefined1 *)((long)&local_f4 + uVar8));
            if ((uVar6 & 1) != 0) {
              return true;
            }
            uVar8 = uVar8 + 1;
            uVar11 = uVar13;
          } while (uVar13 != uVar8);
        }
      }
      else if ((uVar11 & 0xff) < (unaff_w26 & 0xff)) {
        uVar3 = *param_2;
        pcVar12 = *(code **)(param_2[1] + 0x20);
        do {
          uVar6 = (*pcVar12)(uVar3,uVar8 & 0xffffffff);
          if ((uVar6 & 1) != 0) {
            return true;
          }
          uVar15 = (int)unaff_x27 + 1;
          unaff_x27 = (ulong)uVar15;
          uVar11 = unaff_w26;
        } while ((uVar15 & 0xff) < (unaff_w26 & 0xff));
      }
      bStack_e8 = (byte)uVar11;
    }
    uVar8 = local_cc;
    if ((unaff_w22 != 2) && (unaff_w22 == 1)) {
      bStack_e7 = bStack_bf;
      bStack_e8 = bStack_c0;
      uStack_ec = uStack_c4;
      local_f4 = local_cc;
      uVar6 = (ulong)bStack_c0;
      uVar11 = (uint)bStack_bf;
      uVar15 = (uint)bStack_bf;
      if (uVar11 < 0x81) {
        uVar13 = (uint)bStack_c0;
        uVar16 = (uint)bStack_c0;
        if (uVar13 < uVar11 || uVar13 == uVar15) {
          uVar16 = uVar15;
        }
        uVar8 = uVar6;
        if (uVar13 < uVar11) {
          uVar3 = *param_2;
          pcVar12 = *(code **)(param_2[1] + 0x20);
          do {
            uVar8 = (*pcVar12)(uVar3,*(undefined1 *)((long)&local_f4 + uVar6));
            if ((uVar8 & 1) != 0) {
              return true;
            }
            uVar6 = uVar6 + 1;
            uVar8 = (ulong)uVar16;
          } while (uVar16 != uVar6);
        }
        bStack_e8 = (byte)uVar8;
      }
      else {
        uVar3 = *param_2;
        lVar4 = param_2[1];
        while ((byte)uVar6 < uVar15) {
          uVar6 = (ulong)((int)uVar6 + 1);
          uVar7 = (**(code **)(lVar4 + 0x20))(uVar3,uVar8 & 0xffffffff);
          if ((uVar7 & 1) != 0) {
            return true;
          }
        }
      }
    }
    uVar8 = local_e0;
    if (in_w16 == 1) {
      uVar11 = (uint)in_w15;
      if (uVar11 < 0x81) {
        uVar3 = *param_2;
        lVar4 = param_2[1];
        uVar8 = (ulong)unaff_w23;
        uVar15 = (uint)unaff_w23;
        if (unaff_w23 <= uVar11) {
          uVar15 = uVar11;
        }
        do {
          if (uVar15 == uVar8) goto LAB_00747af8;
          puVar2 = (undefined1 *)((long)&local_e0 + uVar8);
          uVar8 = uVar8 + 1;
          uVar6 = (**(code **)(lVar4 + 0x20))(uVar3,*puVar2);
        } while ((uVar6 & 1) == 0);
      }
      else {
        uVar3 = *param_2;
        lVar4 = param_2[1];
        do {
          if (in_w15 <= unaff_w23) goto LAB_00747af8;
          unaff_w23 = unaff_w23 + 1;
          uVar6 = (**(code **)(lVar4 + 0x20))(uVar3,uVar8 & 0xffffffff);
        } while ((uVar6 & 1) == 0);
      }
      return true;
    }
  }
LAB_00747af8:
  uVar8 = local_11c;
  if (cVar10 == '\x02') {
    return false;
  }
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (cVar10 != '\x01') goto LAB_00747ba0;
  uVar11 = local_154 & 0xff;
  if (uVar11 < 0x81) {
    uVar15 = (uint)unaff_x28 & 0xff;
    uVar16 = uVar15;
    if (uVar15 <= uVar11) {
      uVar16 = uVar11;
    }
    if (uVar11 <= uVar15) goto LAB_00747b98;
    pcVar12 = *(code **)(lVar4 + 0x20);
    unaff_x28 = unaff_x28 & 0xff;
    do {
      uVar8 = (*pcVar12)(uVar3,*(undefined1 *)((long)&local_11c + unaff_x28));
      if ((uVar8 & 1) != 0) {
        return true;
      }
      unaff_x28 = unaff_x28 + 1;
    } while (uVar16 != unaff_x28);
  }
  else if (((uint)unaff_x28 & 0xff) < (local_154 & 0xff)) {
    pcVar12 = *(code **)(lVar4 + 0x20);
    do {
      uVar11 = (int)unaff_x28 + 1;
      unaff_x28 = (ulong)uVar11;
      uVar6 = (*pcVar12)(uVar3,uVar8 & 0xffffffff);
      if ((uVar6 & 1) != 0) {
        return true;
      }
    } while ((uVar11 & 0xff) < (local_154 & 0xff));
  }
  else {
LAB_00747b98:
    unaff_x28 = (ulong)local_110;
  }
  local_110 = (byte)unaff_x28;
LAB_00747ba0:
  if (local_148 == (byte *)0x0) {
LAB_00747bb0:
    uVar8 = local_108;
    if (in_w14 != 1) {
      return false;
    }
    uVar11 = (uint)local_134;
    if (0x80 < uVar11) {
      do {
        bVar1 = local_134 > unaff_w24;
        if (local_134 <= unaff_w24) {
          return bVar1;
        }
        unaff_w24 = unaff_w24 + 1;
        uVar6 = (**(code **)(lVar4 + 0x20))(uVar3,uVar8 & 0xffffffff);
      } while ((uVar6 & 1) == 0);
      return bVar1;
    }
    uVar8 = (ulong)unaff_w24;
    uVar15 = (uint)unaff_w24;
    if (unaff_w24 <= uVar11) {
      uVar15 = uVar11;
    }
    do {
      bVar1 = uVar15 != uVar8;
      if (uVar15 == uVar8) {
        return bVar1;
      }
      puVar2 = (undefined1 *)((long)&local_108 + uVar8);
      uVar8 = uVar8 + 1;
      uVar6 = (**(code **)(lVar4 + 0x20))(uVar3,*puVar2);
    } while ((uVar6 & 1) == 0);
    return bVar1;
  }
joined_r0x00747bac:
  pbVar14 = local_148;
  if (local_148 != local_140) {
    do {
      local_148 = pbVar14 + 1;
      uVar11 = (uint)*pbVar14;
      if ((char)*pbVar14 < '\0') {
        if (uVar11 < 0xe0) {
          uVar11 = pbVar14[1] & 0x3f | (uVar11 & 0x1f) << 6;
          local_148 = pbVar14 + 2;
        }
        else {
          uVar15 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
          if (uVar11 < 0xf0) {
            uVar11 = uVar15 | (uVar11 & 0x1f) << 0xc;
            local_148 = pbVar14 + 3;
          }
          else {
            local_148 = pbVar14 + 4;
            uVar11 = pbVar14[3] & 0x3f | uVar15 << 6 | (uVar11 & 7) << 0x12;
          }
        }
      }
      FUN_00735594(&local_11c,uVar11,0x10100);
      uVar6 = local_11c;
      uVar8 = (ulong)local_110;
      uVar11 = (uint)local_10f;
      uVar15 = (uint)local_10f;
      uVar16 = (uint)local_110;
      if (uVar11 < 0x81) {
        uVar13 = uVar16;
        if (uVar16 < uVar11 || uVar16 == uVar15) {
          uVar13 = uVar15;
        }
        if (uVar16 >= uVar11) goto LAB_00747d0c;
        pcVar12 = *(code **)(lVar4 + 0x20);
        do {
          uVar6 = (*pcVar12)(uVar3,*(undefined1 *)((long)&local_11c + uVar8));
          if ((uVar6 & 1) != 0) {
            return true;
          }
          uVar8 = uVar8 + 1;
        } while (uVar13 != uVar8);
      }
      else {
        if (uVar15 <= uVar16) goto LAB_00747d0c;
        pcVar12 = *(code **)(lVar4 + 0x20);
        do {
          uVar11 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar11;
          uVar7 = (*pcVar12)(uVar3,uVar6 & 0xffffffff);
          if ((uVar7 & 1) != 0) {
            return true;
          }
        } while ((uVar11 & 0xff) < uVar15);
      }
      local_110 = (byte)uVar8;
      pbVar14 = local_148;
      if (local_148 == local_140) break;
    } while( true );
  }
  goto LAB_00747bb0;
LAB_00747d0c:
  goto joined_r0x00747bac;
}


// ===== 00747d98  <core::str::iter::EscapeDefault_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::EscapeDefault as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::str::iter::EscapeDefault_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  byte in_w13;
  byte in_w14;
  byte unaff_w22;
  ulong uVar14;
  byte *pbVar15;
  code *pcVar16;
  uint uVar17;
  undefined1 local_a4 [2];
  undefined6 uStack_a2;
  undefined2 local_9c;
  undefined2 uStack_9a;
  char local_98;
  byte local_97;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  byte local_84;
  byte local_83;
  undefined8 local_80;
  undefined4 local_78;
  char acStack_72 [6];
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  char local_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  
  uVar12 = *(uint *)(param_1 + 2);
  uVar10 = (ulong)uVar12;
  pbVar15 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if (uVar12 != 1) {
    iVar8 = *(int *)((long)param_1 + 0x24);
  }
  else {
    uVar10 = (ulong)*(byte *)(param_1 + 4);
    unaff_w22 = *(byte *)((long)param_1 + 0x21);
    local_80 = *(undefined8 *)((long)param_1 + 0x14);
    local_78 = *(undefined4 *)((long)param_1 + 0x1c);
    iVar8 = *(int *)((long)param_1 + 0x24);
  }
  if (iVar8 == 1) {
    lVar13 = param_1[5];
    uVar6 = (undefined4)param_1[6];
    in_w14 = *(byte *)((long)param_1 + 0x34);
    in_w13 = *(byte *)((long)param_1 + 0x35);
    acStack_72[2] = (char)lVar13;
    acStack_72[3] = (char)((ulong)lVar13 >> 8);
    acStack_72[4] = (char)((ulong)lVar13 >> 0x10);
    acStack_72[5] = (char)((ulong)lVar13 >> 0x18);
    cStack_6c = (char)((ulong)lVar13 >> 0x20);
    cStack_6b = (char)((ulong)lVar13 >> 0x28);
    cStack_6a = (char)((ulong)lVar13 >> 0x30);
    cStack_69 = (char)((ulong)lVar13 >> 0x38);
    local_68 = (char)uVar6;
    uStack_67 = (undefined1)((uint)uVar6 >> 8);
    uStack_66 = (undefined2)((uint)uVar6 >> 0x10);
  }
  uVar17 = (uint)(iVar8 == 1);
  local_a4[0] = (char)local_80;
  local_a4[1] = (char)((ulong)local_80 >> 8);
  uStack_a2 = (undefined6)((ulong)local_80 >> 0x10);
  local_9c = (undefined2)local_78;
  uStack_9a = (undefined2)((uint)local_78 >> 0x10);
  local_88 = CONCAT22(uStack_66,CONCAT11(uStack_67,local_68));
  local_90 = CONCAT17(cStack_69,
                      CONCAT16(cStack_6a,
                               CONCAT15(cStack_6b,
                                        CONCAT14(cStack_6c,
                                                 CONCAT13(acStack_72[5],
                                                          CONCAT12(acStack_72[4],
                                                                   CONCAT11(acStack_72[3],
                                                                            acStack_72[2])))))));
  local_98 = (char)uVar10;
  local_97 = unaff_w22;
  local_94 = uVar17;
  local_84 = in_w14;
  local_83 = in_w13;
  if (uVar12 == 1) {
    uVar12 = (uint)unaff_w22;
    uVar2 = (uint)uVar10 & 0xff;
    uVar3 = uVar2;
    if (uVar2 <= uVar12) {
      uVar3 = uVar12;
    }
    uVar9 = (uint)uVar10;
    if (uVar2 < uVar12) {
      uVar10 = uVar10 & 0xff;
      uVar4 = *param_2;
      pcVar16 = *(code **)(param_2[1] + 0x20);
      do {
        iVar8 = (*pcVar16)(uVar4,local_a4[uVar10]);
        if (iVar8 != 0) {
          local_98 = (char)uVar10 + '\x01';
          if (uVar10 < unaff_w22) {
            return 1;
          }
          goto LAB_00747ec0;
        }
        uVar10 = uVar10 + 1;
        uVar9 = uVar3;
      } while (uVar3 != uVar10);
    }
    local_98 = (char)uVar9;
  }
LAB_00747ec0:
  if ((pbVar15 != (byte *)0x0) && (pbVar15 != pbVar5)) {
    uVar4 = *param_2;
    pcVar16 = *(code **)(param_2[1] + 0x20);
    do {
      uVar12 = (uint)*pbVar15;
      pbVar1 = pbVar15 + 1;
      if ((char)*pbVar15 < '\0') {
        if (uVar12 < 0xe0) {
          uVar12 = pbVar15[1] & 0x3f | (uVar12 & 0x1f) << 6;
          pbVar1 = pbVar15 + 2;
          goto joined_r0x00748038;
        }
        uVar2 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
        if (uVar12 < 0xf0) {
          uVar12 = uVar2 | (uVar12 & 0x1f) << 0xc;
          pbVar1 = pbVar15 + 3;
          goto joined_r0x00748038;
        }
        pbVar1 = pbVar15 + 3;
        pbVar15 = pbVar15 + 4;
        uVar12 = *pbVar1 & 0x3f | uVar2 << 6 | (uVar12 & 7) << 0x12;
        uVar10 = (ulong)uVar12;
        if (uVar12 < 0x22) goto LAB_00747f10;
LAB_00747f9c:
        iVar8 = (int)uVar10;
        if (((iVar8 == 0x22) || (iVar8 == 0x27)) || (iVar8 == 0x5c)) {
LAB_00747fc0:
          uVar12 = 0;
          uVar14 = 2;
          uVar11 = 0;
          local_a4[0] = 0x5c;
          local_a4[1] = (char)uVar10;
        }
        else {
LAB_00747fe0:
          if ((uint)uVar10 - 0x20 < 0x5f) {
            bVar7 = (&DAT_004667f0)[uVar10];
            if ((char)bVar7 < '\0') {
              if ((bVar7 & 0x7f) != 0) {
                uVar10 = (ulong)(bVar7 & 0x7f);
                goto LAB_00747fc0;
              }
              uVar12 = 0;
              uVar14 = 4;
              uVar11 = (ulong)CONCAT11("0123456789abcdef"[uVar10 & 0xf],
                                       "0123456789abcdef"[uVar10 >> 4]);
              local_a4[0] = 0x5c;
              local_a4[1] = 0x78;
            }
            else {
              uVar11 = 0;
              uVar12 = 0;
              uVar14 = 1;
              local_a4[0] = (char)(bVar7 & 0x7f);
              local_a4[1] = 0;
            }
          }
          else {
            acStack_72[4] = 0;
            acStack_72[2] = 0;
            acStack_72[3] = 0;
            uVar14 = 10;
            cStack_6c = "0123456789abcdef"[uVar10 >> 0x10 & 0xf];
            cStack_6b = "0123456789abcdef"[uVar10 >> 0xc & 0xf];
            acStack_72[5] = "0123456789abcdef"[uVar10 >> 0x14];
            uVar11 = (ulong)LZCOUNT((uint)uVar10 | 1) >> 2;
            cStack_6a = "0123456789abcdef"[uVar10 >> 8 & 0xf];
            cStack_69 = "0123456789abcdef"[uVar10 >> 4 & 0xf];
            uVar12 = (int)uVar11 - 2;
            local_68 = "0123456789abcdef"[uVar10 & 0xf];
            uStack_67 = 0x7d;
            acStack_72[uVar11] = '\\';
            acStack_72[uVar11 + 1] = 'u';
            acStack_72[uVar11 + 2] = '{';
            uVar11 = CONCAT17(uStack_67,
                              CONCAT16(local_68,CONCAT15(cStack_69,
                                                         CONCAT14(cStack_6a,
                                                                  CONCAT13(cStack_6b,
                                                                           CONCAT12(cStack_6c,
                                                                                    CONCAT11(
                                                  acStack_72[5],acStack_72[4])))))));
            local_a4[0] = acStack_72[2];
            local_a4[1] = acStack_72[3];
          }
        }
      }
      else {
joined_r0x00748038:
        pbVar15 = pbVar1;
        uVar10 = (ulong)uVar12;
        if (0x21 < uVar12) goto LAB_00747f9c;
LAB_00747f10:
        iVar8 = (int)uVar10;
        if (iVar8 != 9) {
          if (iVar8 == 10) {
            uVar11 = 0;
            uVar12 = 0;
            uVar14 = 2;
            local_a4[0] = 0x5c;
            local_a4[1] = 0x6e;
            goto LAB_007480e4;
          }
          if (iVar8 == 0xd) {
            uVar11 = 0;
            uVar12 = 0;
            uVar14 = 2;
            local_a4[0] = 0x5c;
            local_a4[1] = 0x72;
            goto LAB_007480e4;
          }
          goto LAB_00747fe0;
        }
        uVar11 = 0;
        uVar12 = 0;
        uVar14 = 2;
        local_a4[0] = 0x5c;
        local_a4[1] = 0x74;
      }
LAB_007480e4:
      uVar10 = (ulong)(int)uVar12;
      if (uVar12 <= (uint)uVar14) {
        uVar12 = (uint)uVar14;
      }
      uStack_a2 = (undefined6)uVar11;
      local_9c = (undefined2)(uVar11 >> 0x30);
      do {
        iVar8 = (*pcVar16)(uVar4,local_a4[uVar10]);
        if (iVar8 != 0) {
          local_98 = (char)uVar10 + '\x01';
          if (uVar10 < uVar14) {
            return 1;
          }
          goto joined_r0x00747ef0;
        }
        uVar10 = uVar10 + 1;
      } while (((ulong)uVar12 & 0xff) != uVar10);
      local_98 = (char)uVar12;
joined_r0x00747ef0:
    } while (pbVar15 != pbVar5);
  }
  if (uVar17 != 0) {
    uVar12 = (uint)in_w13;
    uVar17 = (uint)in_w14;
    uVar2 = uVar17;
    if (uVar17 <= uVar12) {
      uVar2 = uVar12;
    }
    if (uVar17 < uVar12) {
      uVar10 = (ulong)in_w14;
      uVar4 = *param_2;
      pcVar16 = *(code **)(param_2[1] + 0x20);
      do {
        iVar8 = (*pcVar16)(uVar4,*(undefined1 *)((long)&local_90 + uVar10));
        if (iVar8 != 0) {
          if (in_w13 <= uVar10) {
            return 0;
          }
          return 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
  }
  return 0;
}


// ===== 00748218  <core::num::niche_types::U32NotAllOnes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::U32NotAllOnes as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::U32NotAllOnes_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

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
LAB_00748324:
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
    goto LAB_00748324;
  }
  if (uVar1 < 1000) {
    lVar4 = 10;
    uVar8 = uVar1;
    uVar6 = uVar1;
    if (uVar1 < 10) goto LAB_00748398;
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
    if (uVar7 < 9 || (int)(uVar9 / 10000) == 9) goto LAB_00748398;
  }
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_1c + lVar4) =
       *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_00748398:
  if ((uVar1 == 0) || (lVar5 = lVar4, uVar6 != 0)) {
    lVar5 = lVar4 + -1;
    *(undefined *)((long)&uStack_1c + lVar4 + 1) = (&DAT_004670a7)[(uVar6 & 0xf) << 1];
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_2,1,1,0,auStack_1a + lVar5,10 - lVar5);
  return;
}


// ===== 007483e8  <core::str::iter::EscapeUnicode_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::iter::EscapeUnicode as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::str::iter::EscapeUnicode_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte in_w12;
  byte unaff_w22;
  byte *pbVar10;
  byte unaff_w24;
  ulong uVar11;
  uint uVar12;
  code *pcVar13;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  char local_a0;
  byte local_9f;
  uint local_9c;
  long local_98;
  undefined4 local_90;
  byte local_8c;
  byte local_8b;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 uStack_6a;
  char cStack_69;
  char cStack_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  undefined2 local_64;
  
  uVar12 = *(uint *)(param_1 + 2);
  uVar8 = (ulong)uVar12;
  pbVar10 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if (uVar12 != 1) {
    iVar6 = *(int *)((long)param_1 + 0x24);
  }
  else {
    uVar8 = (ulong)*(byte *)(param_1 + 4);
    unaff_w22 = *(byte *)((long)param_1 + 0x21);
    local_88 = *(undefined8 *)((long)param_1 + 0x14);
    local_80 = *(undefined4 *)((long)param_1 + 0x1c);
    iVar6 = *(int *)((long)param_1 + 0x24);
  }
  local_b0 = (uint)(uVar12 == 1);
  if (iVar6 == 1) {
    in_w12 = *(byte *)((long)param_1 + 0x34);
    unaff_w24 = *(byte *)((long)param_1 + 0x35);
    local_78 = param_1[5];
    local_70 = (int)param_1[6];
  }
  uVar12 = (uint)(iVar6 == 1);
  local_ac = local_88;
  local_a4 = local_80;
  local_98 = local_78;
  local_a0 = (char)uVar8;
  local_9f = unaff_w22;
  local_9c = uVar12;
  local_90 = local_70;
  local_8c = in_w12;
  local_8b = unaff_w24;
  if (local_b0 != 0) {
    uVar1 = (uint)unaff_w22;
    uVar2 = (uint)uVar8 & 0xff;
    uVar3 = uVar2;
    if (uVar2 <= uVar1) {
      uVar3 = uVar1;
    }
    uVar7 = (uint)uVar8;
    if (uVar2 < uVar1) {
      uVar4 = *param_2;
      uVar8 = uVar8 & 0xff;
      pcVar13 = *(code **)(param_2[1] + 0x20);
      do {
        iVar6 = (*pcVar13)(uVar4,*(undefined1 *)((long)&local_ac + uVar8));
        if (iVar6 != 0) {
          local_a0 = (char)uVar8 + '\x01';
          if (uVar8 < unaff_w22) {
            return 1;
          }
          goto LAB_00748518;
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar3;
      } while (uVar3 != uVar8);
    }
    local_a0 = (char)uVar7;
  }
LAB_00748518:
  if ((pbVar10 != (byte *)0x0) && (pbVar10 != pbVar5)) {
    uVar4 = *param_2;
    pcVar13 = *(code **)(param_2[1] + 0x20);
    do {
      pbVar9 = pbVar10 + 1;
      uVar1 = (uint)*pbVar10;
      uVar8 = (ulong)uVar1;
      if ((char)*pbVar10 < '\0') {
        if (uVar1 < 0xe0) {
          pbVar9 = pbVar10 + 2;
          uVar8 = (ulong)(pbVar10[1] & 0x3f | (uVar1 & 0x1f) << 6);
        }
        else {
          uVar2 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
          if (uVar1 < 0xf0) {
            uVar8 = (ulong)(uVar2 | (uVar1 & 0x1f) << 0xc);
            pbVar9 = pbVar10 + 3;
          }
          else {
            pbVar9 = pbVar10 + 4;
            uVar8 = (ulong)(pbVar10[3] & 0x3f | uVar2 << 6 | (uVar1 & 7) << 0x12);
          }
        }
      }
      uStack_6a = 0;
      local_6c = 0;
      cStack_68 = "0123456789abcdef"[uVar8 >> 0x10 & 0xf];
      cStack_67 = "0123456789abcdef"[uVar8 >> 0xc & 0xf];
      cStack_69 = "0123456789abcdef"[uVar8 >> 0x14];
      uVar11 = (ulong)LZCOUNT((uint)uVar8 | 1) >> 2;
      cStack_66 = "0123456789abcdef"[uVar8 >> 8 & 0xf];
      local_64 = CONCAT11(0x7d,"0123456789abcdef"[uVar8 & 0xf]);
      cStack_65 = "0123456789abcdef"[uVar8 >> 4 & 0xf];
      *(undefined1 *)((long)&local_70 + uVar11 + 2) = 0x5c;
      *(undefined1 *)((long)&local_70 + uVar11 + 3) = 0x75;
      *(undefined1 *)((long)&local_6c + uVar11) = 0x7b;
      local_ac = CONCAT17(cStack_65,
                          CONCAT16(cStack_66,
                                   CONCAT15(cStack_67,
                                            CONCAT14(cStack_68,
                                                     CONCAT13(cStack_69,CONCAT12(uStack_6a,local_6c)
                                                             )))));
      local_a4 = CONCAT22(local_a4._2_2_,local_64);
      do {
        uVar8 = (*pcVar13)(uVar4,*(undefined1 *)((long)&local_b0 + uVar11 + 2));
        if ((uVar8 & 1) != 0) {
          return 1;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0xc);
      local_a0 = '\n';
      pbVar10 = pbVar9;
    } while (pbVar9 != pbVar5);
  }
  if (uVar12 != 0) {
    uVar12 = (uint)unaff_w24;
    uVar1 = (uint)in_w12;
    uVar2 = uVar1;
    if (uVar1 <= uVar12) {
      uVar2 = uVar12;
    }
    if (uVar1 < uVar12) {
      uVar4 = *param_2;
      uVar8 = (ulong)in_w12;
      pcVar13 = *(code **)(param_2[1] + 0x20);
      do {
        iVar6 = (*pcVar13)(uVar4,*(undefined1 *)((long)&local_98 + uVar8));
        if (iVar6 != 0) {
          if (unaff_w24 <= uVar8) {
            return 0;
          }
          return 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
  }
  return 0;
}


// ===== 0074873c  <core::num::niche_types::NonZeroCharInner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::NonZeroCharInner as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::num::niche_types::NonZeroCharInner_as_core::fmt::Debug>::fmt
          (undefined4 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 local_40 [3];
  byte local_34;
  byte local_33;
  
  uVar4 = *param_2;
  lVar1 = param_2[1];
  uVar2 = *param_1;
  pcVar5 = *(code **)(lVar1 + 0x20);
  uVar3 = (*pcVar5)(uVar4,0x27);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  FUN_00735594(local_40,uVar2,0x101);
  if ((ulong)local_33 < 0x81) {
    uVar3 = (**(code **)(lVar1 + 0x18))
                      (uVar4,(long)local_40 + (ulong)local_34,(ulong)local_33 - (ulong)local_34);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar3 = (*pcVar5)(uVar4,local_40[0]);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  uVar4 = (*pcVar5)(uVar4,0x27);
  return uVar4;
}


// ===== 00748820  <core::bstr::ByteStr_as_core::fmt::Debug>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::bstr::ByteStr as core::fmt::Debug>::fmt */

undefined4 __rustcall
<core::bstr::ByteStr_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  long lVar7;
  byte *pbVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  code *pcVar13;
  undefined8 local_c8;
  undefined8 uStack_c0;
  byte *local_b8;
  long local_b0;
  undefined8 *******pppppppuStack_a8;
  long local_a0;
  undefined8 *******local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 local_7c;
  undefined8 *******local_70;
  undefined *local_68;
  
  uVar3 = *param_3;
  lVar4 = param_3[1];
  uVar9 = 1;
  pcVar13 = *(code **)(lVar4 + 0x18);
  uVar10 = (*pcVar13)(uVar3,&DAT_0046c5a5,1);
  if ((uVar10 & 1) == 0) {
    local_c8 = param_1;
    uStack_c0 = param_2;
    <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
              (&local_b8,&local_c8);
    if (local_b8 != (byte *)0x0) {
      do {
        lVar7 = local_a0;
        pppppppuVar6 = pppppppuStack_a8;
        pbVar1 = local_b8 + local_b0;
        pbVar12 = local_b8;
        if (local_b0 != 0) {
          do {
            uVar2 = (uint)*pbVar12;
            pbVar8 = pbVar12 + 1;
            if ((char)*pbVar12 < '\0') {
              if (uVar2 < 0xe0) {
                uVar2 = pbVar12[1] & 0x3f | (uVar2 & 0x1f) << 6;
                pbVar8 = pbVar12 + 2;
                goto joined_r0x00748970;
              }
              uVar5 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
              if (0xef < uVar2) {
                uVar2 = pbVar12[3] & 0x3f | uVar5 << 6 | (uVar2 & 7) << 0x12;
                pbVar8 = pbVar12 + 4;
                goto joined_r0x00748970;
              }
              uVar2 = uVar5 | (uVar2 & 0x1f) << 0xc;
              pbVar12 = pbVar12 + 3;
              if (uVar2 != 0) goto LAB_00748998;
LAB_007488fc:
              uVar10 = (*pcVar13)(uVar3,&DAT_0046c5a6,2);
            }
            else {
joined_r0x00748970:
              pbVar12 = pbVar8;
              if (uVar2 == 0) goto LAB_007488fc;
LAB_00748998:
              uVar10 = (ulong)uVar2;
              if (uVar2 < 0x80) {
                uVar11 = (ulong)(byte)(&DAT_004667f0)[uVar10] & 0x7f;
                if ((char)(&DAT_004667f0)[uVar10] < '\0') {
                  if ((int)uVar11 == 0) {
                    uVar11 = (ulong)(byte)"0123456789abcdef"[uVar10 & 0xf] << 0x18 |
                             (ulong)(byte)"0123456789abcdef"[uVar2 >> 4] << 0x10 | 0x785c;
                    uVar10 = 0x40000000000;
                  }
                  else {
                    uVar11 = uVar11 << 8 | 0x5c;
                    uVar10 = 0x20000000000;
                  }
                }
                else {
                  uVar10 = 0x10000000000;
                }
                local_70 = (undefined8 *******)(uVar11 | uVar10);
                local_90 = (code *)PTR_fmt_0099f898;
              }
              else {
                FUN_00735594(&local_70,uVar10,0x10101);
                local_90 = FUN_0074e940;
              }
              local_98 = &local_70;
              uVar10 = core::fmt::write(uVar3,lVar4,&DAT_00368e80,&local_98);
            }
            if ((uVar10 & 1) != 0) {
              return 1;
            }
          } while (pbVar12 != pbVar1);
        }
        local_90 = (code *)((long)pppppppuVar6 + lVar7);
        local_88 = 0;
        local_98 = pppppppuVar6;
        local_70 = &local_98;
        local_7c = 0;
        local_68 = PTR_fmt_0099f890;
        uVar10 = core::fmt::write(uVar3,lVar4,&DAT_00368e80,&local_70);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                  (&local_b8,&local_c8);
      } while (local_b8 != (byte *)0x0);
    }
    uVar9 = (*pcVar13)(uVar3,&DAT_0046c5a5,1);
  }
  return uVar9;
}


// ===== 00748a98  <core::char::EscapeUnicode_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::EscapeUnicode as core::fmt::Display>::fmt */

void __rustcall
<core::char::EscapeUnicode_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00748ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,param_1 + (ulong)*(byte *)(param_1 + 0xc),
             (ulong)*(byte *)(param_1 + 0xd) - (ulong)*(byte *)(param_1 + 0xc));
  return;
}


// ===== 00748ab8  <core::wtf8::Wtf8_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::wtf8::Wtf8 as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::wtf8::Wtf8_as_core::fmt::Display>::fmt(long param_1,ulong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = *param_3;
  lVar3 = param_3[1];
  uVar5 = 0;
  pbVar2 = (byte *)(param_1 + param_2);
LAB_00748ae0:
  uVar6 = param_2;
  if (uVar5 == param_2) {
LAB_00748c18:
    if (uVar6 == 0) {
      uVar7 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_3,param_1,param_2 - uVar6);
      return uVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x00748c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(lVar3 + 0x18))(uVar7,param_1 + uVar6,param_2 - uVar6);
    return uVar7;
  }
  pbVar8 = (byte *)(param_1 + uVar5);
  uVar11 = uVar5;
  do {
    pbVar9 = pbVar8 + 1;
    bVar4 = *pbVar8;
    uVar6 = uVar5;
    if ((char)bVar4 < '\0') {
      if (bVar4 < 0xe0) {
        pbVar1 = pbVar8 + 2;
        lVar10 = 2;
        pbVar8 = pbVar9;
        if (pbVar9 != pbVar2) {
          pbVar8 = pbVar1;
        }
      }
      else if (bVar4 == 0xed) {
        if ((pbVar9 == pbVar2) || (pbVar8 + 2 == pbVar2)) goto LAB_00748c18;
        if (0x9f < pbVar8[1]) break;
        lVar10 = 3;
        pbVar8 = pbVar8 + 3;
      }
      else {
        if (pbVar9 != pbVar2) {
          pbVar9 = pbVar8 + 2;
        }
        if (pbVar9 != pbVar2) {
          pbVar9 = pbVar9 + 1;
        }
        pbVar8 = pbVar9;
        if (bVar4 < 0xf0) {
          lVar10 = 3;
        }
        else {
          lVar10 = 4;
          if (pbVar9 != pbVar2) {
            pbVar8 = pbVar9 + 1;
          }
        }
      }
    }
    else {
      lVar10 = 1;
      pbVar8 = pbVar9;
    }
    uVar11 = lVar10 + uVar11;
    if (pbVar8 == pbVar2) goto LAB_00748c18;
  } while( true );
  if ((uVar11 < uVar5) || (param_2 < uVar11)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar5,uVar11,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c110);
  }
  uVar5 = (**(code **)(lVar3 + 0x18))(uVar7,param_1 + uVar5,uVar11 - uVar5);
  if (((uVar5 & 1) != 0) || (uVar5 = (**(code **)(lVar3 + 0x20))(uVar7,0xfffd), (uVar5 & 1) != 0)) {
    return 1;
  }
  uVar5 = uVar11 + 3;
  if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar5,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b750);
  }
  goto LAB_00748ae0;
}


// ===== 00748c9c  <core::io::error::repr::Repr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::repr::Repr as core::fmt::Debug>::fmt */

ulong __rustcall
<core::io::error::repr::Repr_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  uint local_50;
  undefined1 local_4c [4];
  undefined1 *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined1 **local_30;
  
  uVar9 = *param_1;
  uVar7 = uVar9 & 3;
  if (uVar7 < 2) {
    if (uVar7 != 0) {
      uVar7 = <core::io::error::Custom_as_core::fmt::Debug>::fmt(uVar9 - 1,param_2);
      return uVar7;
    }
    bVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046c5b1,5);
    uStack_38._0_2_ = (ushort)bVar1;
    local_40 = param_2;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (&local_40,&DAT_00376fb4,4,uVar9 + 0x10,&DAT_0097c148);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (&local_40,&DAT_0046c5aa,7,uVar9,&DAT_0097c188);
    bVar1 = uStack_38._1_1_ | (byte)uStack_38;
  }
  else {
    uVar2 = (uint)(uVar9 >> 0x20);
    if (uVar7 != 2) {
      uVar2 = uVar2 & 0xff;
      if (0x2a < uVar9 >> 0x20) {
        uVar2 = 0xff;
      }
      uVar7 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00376fb0,4);
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      if (*(char *)((long)param_2 + 0x12) < '\0') {
        uVar7 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_004669e4,2);
        uVar3 = 1;
        if ((uVar7 & 1) != 0) goto LAB_00748f54;
        uStack_38 = param_2[1];
        local_40 = (undefined8 *)*param_2;
        local_48 = (undefined1 *)CONCAT71(local_48._1_7_,1);
        local_30 = &local_48;
        iVar4 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                          (&local_40,(&PTR_s_NotFound_0097c570)[uVar2],
                           *(undefined8 *)(&DAT_0046ced8 + (ulong)uVar2 * 8));
        if (iVar4 != 0) {
          return 1;
        }
        uVar7 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                          (&local_40,&DAT_004669e1,2);
      }
      else {
        uVar7 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_004669e3,1);
        uVar3 = 1;
        if ((uVar7 & 1) != 0) goto LAB_00748f54;
        uVar7 = (**(code **)(param_2[1] + 0x18))
                          (*param_2,(&PTR_s_NotFound_0097c570)[uVar2],
                           *(undefined8 *)(&DAT_0046ced8 + (ulong)uVar2 * 8));
      }
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      uVar5 = *param_2;
      puVar6 = &DAT_00466a71;
      pcVar8 = *(code **)(param_2[1] + 0x18);
      goto LAB_00748f14;
    }
    local_50 = uVar2;
    bVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046c5a8,2);
    uStack_38._0_2_ = (ushort)bVar1;
    local_40 = param_2;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (&local_40,&DAT_003767d8,4,&local_50,&DAT_0097c128);
    local_4c[0] = (**(code **)(*(long *)PTR_PTR_0099f738 + 8))(local_50);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (&local_40,&DAT_00376fb4,4,local_4c,&DAT_0097c148);
    local_48 = (undefined1 *)&local_50;
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (&local_40,&DAT_0046c5aa,7,&local_48,&DAT_0097c168);
    bVar1 = uStack_38._1_1_ | (byte)uStack_38;
  }
  uVar3 = (uint)bVar1;
  if ((uStack_38._1_1_ != 1) || ((uStack_38 & 1) != 0)) {
LAB_00748f54:
    return (ulong)(uVar3 & 1);
  }
  if (-1 < *(char *)((long)local_40 + 0x12)) {
    uVar2 = (**(code **)(local_40[1] + 0x18))(*local_40,&DAT_00466b55,2);
    return (ulong)(uVar2 & 1);
  }
  uVar5 = *local_40;
  puVar6 = &DAT_00466a6b;
  pcVar8 = *(code **)(local_40[1] + 0x18);
LAB_00748f14:
  uVar2 = (*pcVar8)(uVar5,puVar6,1);
  return (ulong)(uVar2 & 1);
}


// ===== 00748fcc  <u64_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as core::fmt::Binary>::fmt */

void __rustcall <u64_as_core::fmt::Binary>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_0046c5b6)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074903c  <f32_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::fmt::Debug>::fmt */

void __rustcall <f32_as_core::fmt::Debug>::fmt(float *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  fVar3 = *param_1;
  if ((uVar1 >> 0x1c & 1) != 0) {
    FUN_007329e8(param_2,uVar1 >> 0x15 & 1,*(undefined2 *)(param_2 + 0x16));
    return;
  }
  fVar4 = ABS(fVar3);
  bVar2 = true;
  if ((fVar4 < 0.0001) && (bVar2 = false, !NAN(fVar3))) {
    bVar2 = fVar3 == 0.0;
  }
  if ((fVar4 < 1e+16 != NAN(fVar4)) && (bVar2)) {
    FUN_00733230(param_2,uVar1 >> 0x15 & 1,1);
    return;
  }
  FUN_00734478(param_2,uVar1 >> 0x15 & 1,0);
  return;
}


// ===== 007490b4  <core::net::ip_addr::Ipv4Addr_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv4Addr as core::str::traits::FromStr>::from_str */

ulong __rustcall
<core::net::ip_addr::Ipv4Addr_as_core::str::traits::FromStr>::from_str
          (undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long in_x10;
  undefined8 local_20;
  ulong local_18;
  
  if (0xf < param_2) {
    return in_x10 << 0x10 | 0x101;
  }
  local_20 = param_1;
  local_18 = param_2;
  uVar2 = FUN_00734e34(&local_20);
  uVar1 = (uint)(local_18 == 0) & (uint)uVar2;
  if (uVar1 == 0) {
    uVar2 = 0x100;
  }
  return (uVar2 >> 0x10 & 0xffffff) << 0x10 | (uVar2 >> 8 & 0xff) << 8 | (ulong)(uVar1 ^ 1);
}


// ===== 00749128  <core::net::ip_addr::IpAddr_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::IpAddr as core::fmt::Display>::fmt */

void __rustcall <core::net::ip_addr::IpAddr_as_core::fmt::Display>::fmt(char *param_1)

{
  if (*param_1 == '\x01') {
    <core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt();
    return;
  }
  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt(param_1 + 1);
  return;
}


// ===== 0074913c  <f64_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::str::traits::FromStr>::from_str */

void __rustcall
<f64_as_core::str::traits::FromStr>::from_str(undefined2 *param_1,ulong *param_2,long param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint3 uVar3;
  ulong uVar4;
  int iVar5;
  double dVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 local_370;
  byte local_368;
  undefined7 uStack_367;
  byte local_35f;
  uint local_68;
  byte local_64;
  
  if (param_3 == 0) {
    *param_1 = 1;
    return;
  }
  cVar1 = (char)*param_2;
  if ((cVar1 == '-') || (cVar1 == '+')) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      *param_1 = 0x101;
      return;
    }
    param_2 = (ulong *)((long)param_2 + 1);
  }
  core::num::imp::dec2flt::parse::parse_number(&local_370,param_2,param_3);
  uVar7 = local_370;
  if (local_35f == 2) {
    if (param_3 == 3) {
      uVar3 = (uint3)*param_2 & 0xdfdfdf;
      if (uVar3 != 0x464e49) {
        if (uVar3 == 0x4e414e) {
          dVar6 = NAN;
          goto LAB_00749370;
        }
        goto LAB_007492b0;
      }
    }
    else if ((param_3 != 8) || ((*param_2 & 0xdfdfdfdfdfdfdfdf) != 0x5954494e49464e49)) {
LAB_007492b0:
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 1;
      return;
    }
    dVar6 = INFINITY;
    goto LAB_00749370;
  }
  uVar4 = CONCAT71(uStack_367,local_368);
  if (((local_370 - 0x26 < 0xffffffffffffffc4) || (0x20000000000000 < uVar4)) ||
     ((local_35f & 1) != 0)) {
    auVar13 = FUN_007348d8(local_370,uVar4);
    uVar9 = auVar13._0_8_;
    uVar10 = auVar13._8_8_ & 0xffffffff;
    iVar5 = auVar13._8_4_;
    if (((local_35f & 1) == 0) || (iVar5 < 0)) goto joined_r0x007492c8;
    auVar14 = FUN_007348d8(uVar7,uVar4 + 1);
    if (auVar14 != auVar13._0_12_) goto LAB_0074932c;
  }
  else {
    if ((long)local_370 < 0x17) {
      if ((long)local_370 < 0) {
        dVar6 = (double)uVar4 / *(double *)(&DAT_0046c458 + local_370 * -8);
      }
      else {
        dVar6 = *(double *)(&DAT_0046c458 + local_370 * 8) * (double)uVar4;
      }
      goto LAB_00749370;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar4;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(core::unicode::unicode_data::lowercase::BITSET_CHUNKS_MAP +
                             local_370 * 8 + 0x4c);
    if ((SUB168(auVar13 * auVar2,8) == 0) &&
       (uVar7 = uVar4 * *(ulong *)(core::unicode::unicode_data::lowercase::BITSET_CHUNKS_MAP +
                                  local_370 * 8 + 0x4c), uVar7 < 0x20000000000001)) {
      dVar6 = (double)uVar7 * DAT_00373590;
      goto LAB_00749370;
    }
    auVar13 = FUN_007348d8(local_370,uVar4);
    uVar9 = auVar13._0_8_;
    uVar10 = auVar13._8_8_ & 0xffffffff;
    iVar5 = auVar13._8_4_;
joined_r0x007492c8:
    if (iVar5 < 0) {
LAB_0074932c:
      core::num::imp::dec2flt::decimal_seq::parse_decimal_seq(&local_370,param_2,param_3);
      uVar9 = 0;
      uVar10 = 0;
      if ((local_370 != 0) && ((int)(local_68 + 0x144) < 0 == SCARRY4(local_68,0x144))) {
        if ((int)local_68 < 0x136) {
          iVar5 = 0;
          while (uVar7 = (ulong)local_68, 0 < (int)local_68) {
            if (local_68 < 0x13) {
              uVar8 = (uint)(byte)""[uVar7];
            }
            else {
              uVar8 = 0x3c;
            }
            <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
            ::right_shift(&local_370,uVar8);
            if (local_68 == 0xfffff800 || (int)(local_68 + 0x800) < 0 != SCARRY4(local_68,0x800)) {
              uVar10 = 0;
              uVar9 = 0;
              goto LAB_00749368;
            }
            iVar5 = iVar5 + uVar8;
          }
          do {
            if ((int)uVar7 == 0) {
              if (4 < local_368) break;
              uVar8 = 1;
              if (local_368 < 2) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = -(int)uVar7;
              if (uVar8 < 0x13) {
                uVar8 = (uint)(byte)""[uVar8];
              }
              else {
                uVar8 = 0x3c;
              }
            }
            <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
            ::left_shift(&local_370,uVar8);
            uVar7 = (ulong)local_68;
            if (0x7ff < (int)local_68) goto LAB_00749360;
            iVar5 = iVar5 - uVar8;
          } while ((int)local_68 < 1);
          uVar8 = iVar5 - 1;
          if (uVar8 == 0xfffffc01 || iVar5 + 0x3fe < 0 != SCARRY4(uVar8,0x3ff)) {
            do {
              uVar11 = -uVar8 - 0x3fe;
              if (0x3b < uVar11) {
                uVar11 = 0x3c;
              }
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::right_shift(&local_370,uVar11);
              uVar8 = uVar11 + uVar8;
            } while (uVar8 < 0xfffffc02);
          }
          if ((int)(uVar8 + 0x3ff) < 0x7ff) {
            <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
            ::left_shift(&local_370,0x35);
            if ((local_370 == 0) || (uVar7 = (ulong)local_68, (int)local_68 < 0)) {
              uVar9 = 0;
              uVar10 = (ulong)(uVar8 + 0x3fe);
              goto LAB_00749368;
            }
            if (local_68 < 0x13) {
              uVar4 = 0;
              if (local_68 != 0) {
                uVar10 = 0;
                do {
                  uVar4 = uVar4 * 10;
                  if (uVar10 < local_370) {
                    uVar4 = uVar4 + (&local_368)[uVar10];
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar7 != uVar10);
              }
              if (uVar7 < local_370) {
                if ((uVar7 + 1 == local_370) && ((&local_368)[uVar7] == 5)) {
                  if (((local_64 & 1) != 0) ||
                     ((local_68 != 0 && ((*(byte *)((long)&local_370 + uVar7 + 7) & 1) != 0)))) {
LAB_00749560:
                    uVar4 = uVar4 + 1;
                  }
                }
                else if (4 < (&local_368)[uVar7]) goto LAB_00749560;
              }
              if (uVar4 >> 0x35 != 0) goto LAB_0074956c;
            }
            else {
LAB_0074956c:
              <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
              ::right_shift(&local_370,1);
              uVar4 = <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>
                      ::round(&local_370);
              if (0x7fe < (int)(uVar8 + 0x400)) goto LAB_00749360;
              uVar8 = uVar8 + 1;
            }
            uVar9 = uVar4 & 0xfffffffffffff;
            iVar5 = 0x3fe;
            if (uVar4 >> 0x34 != 0) {
              iVar5 = 0x3ff;
            }
            uVar10 = (ulong)(iVar5 + uVar8);
            goto LAB_00749368;
          }
        }
LAB_00749360:
        uVar9 = 0;
        uVar10 = 0x7ff;
      }
    }
  }
LAB_00749368:
  dVar6 = (double)(uVar9 | uVar10 << 0x34);
LAB_00749370:
  *(undefined1 *)param_1 = 0;
  dVar12 = -dVar6;
  if (cVar1 != '-') {
    dVar12 = dVar6;
  }
  *(double *)(param_1 + 4) = dVar12;
  return;
}


// ===== 007495ac  <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
          (long *param_1,long *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  
  uVar5 = param_2[1];
  if (uVar5 == 0) {
    *param_1 = 0;
    return;
  }
  lVar4 = *param_2;
  uVar6 = 0;
  do {
    bVar3 = *(byte *)(lVar4 + uVar6);
    uVar7 = uVar6 + 1;
    if ((char)bVar3 < '\0') {
      cVar2 = (&DAT_00467171)[bVar3];
      uVar8 = (uint)bVar3;
      if (cVar2 == '\x04') {
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_003675a8;
        }
        bVar3 = *pbVar1;
        if (uVar8 == 0xf0) {
          if (0x2f < bVar3 - 0x90) break;
        }
        else if (uVar8 == 0xf4) {
          iVar9 = (int)(char)bVar3;
          if (iVar9 != -0x71 && iVar9 + 0x71 < 0 == SCARRY4(iVar9,0x71)) break;
        }
        else if ((2 < uVar8 - 0xf1) || ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)))
        break;
        uVar7 = uVar6 + 2;
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_003675a8;
        }
        iVar9 = (int)(char)*pbVar1;
        if (iVar9 != -0x41 && iVar9 + 0x41 < 0 == SCARRY4(iVar9,0x41)) break;
        uVar7 = uVar6 + 3;
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_003675a8;
        }
        iVar9 = (int)(char)*pbVar1;
        if (iVar9 != -0x41 && iVar9 + 0x41 < 0 == SCARRY4(iVar9,0x41)) break;
        uVar7 = uVar6 + 4;
      }
      else if (cVar2 == '\x03') {
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_003675a8;
        }
        if (uVar8 == 0xe0) {
          if ((*pbVar1 & 0xe0) != 0xa0) break;
        }
        else {
          iVar9 = (int)(char)*pbVar1;
          if (uVar8 == 0xed) {
            if (iVar9 != -0x61 && iVar9 + 0x61 < 0 == SCARRY4(iVar9,0x61)) break;
          }
          else if (((0xb < uVar8 - 0xe1) && ((uVar8 & 0xfe) != 0xee)) ||
                  (iVar9 + 0x40 < 0 == SCARRY4(iVar9,0x40))) break;
        }
        uVar7 = uVar6 + 2;
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_003675a8;
        }
        if ((char)*pbVar1 + 0x40 < 0 == SCARRY4((int)(char)*pbVar1,0x40)) break;
        uVar7 = uVar6 + 3;
      }
      else {
        if (cVar2 != '\x02') break;
        pbVar1 = (byte *)(lVar4 + uVar7);
        if (uVar5 <= uVar7) {
          pbVar1 = &DAT_003675a8;
        }
        if ((char)*pbVar1 + 0x40 < 0 == SCARRY4((int)(char)*pbVar1,0x40)) break;
        uVar7 = uVar6 + 2;
      }
    }
    uVar6 = uVar7;
    uVar7 = uVar6;
  } while (uVar6 < uVar5);
  *param_1 = lVar4;
  param_1[1] = uVar6;
  *param_2 = lVar4 + uVar7;
  param_2[1] = uVar5 - uVar7;
  param_1[2] = lVar4 + uVar6;
  param_1[3] = uVar7 - uVar6;
  return;
}


// ===== 0074976c  <core::slice::ascii::EscapeAscii_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::ascii::EscapeAscii as core::fmt::Display>::fmt */

undefined8 __rustcall
<core::slice::ascii::EscapeAscii_as_core::fmt::Display>::fmt
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong local_68;
  
  if (*(int *)(param_1 + 2) == 1) {
    local_68 = (ulong)*(uint6 *)((long)param_1 + 0x14);
    iVar5 = *(int *)((long)param_1 + 0x1c);
    pbVar11 = (byte *)*param_1;
    lVar3 = param_1[1];
  }
  else {
    local_68 = 0;
    iVar5 = *(int *)((long)param_1 + 0x1c);
    pbVar11 = (byte *)*param_1;
    lVar3 = param_1[1];
  }
  if (iVar5 == 1) {
    uVar12 = (ulong)*(uint6 *)(param_1 + 4);
  }
  else {
    uVar12 = 0;
  }
  uVar10 = local_68 >> 0x20 & 0xff;
  uVar2 = *param_2;
  lVar4 = param_2[1];
  if (pbVar11 == (byte *)0x0) {
    lVar3 = 1;
    pbVar11 = (byte *)0x1;
  }
  uVar9 = (uint)uVar10;
  uVar7 = (uint)(local_68 >> 0x20);
  uVar13 = lVar3 - (long)pbVar11;
  if (uVar9 <= uVar7 >> 8) {
    uVar9 = uVar7 >> 8;
  }
  while (uVar9 != uVar10) {
    puVar1 = (undefined1 *)((long)&local_68 + uVar10);
    uVar10 = uVar10 + 1;
    uVar8 = (**(code **)(lVar4 + 0x20))(uVar2,*puVar1);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
  }
  if (uVar13 != 0) {
    pcVar14 = *(code **)(lVar4 + 0x18);
    do {
      uVar10 = 0;
      do {
        uVar8 = uVar10;
        if ((pbVar11[uVar10] - 0x7f < 0xffffffa1) ||
           (uVar9 = pbVar11[uVar10] - 0x22,
           uVar9 < 0x3b && (1L << ((ulong)uVar9 & 0x3f) & 0x400000000000021U) != 0)) break;
        uVar10 = uVar10 + 1;
        uVar8 = uVar13;
      } while (uVar13 != uVar10);
      uVar10 = (*pcVar14)(uVar2,pbVar11,uVar8);
      if ((uVar10 & 1) != 0) {
        return 1;
      }
      if (uVar13 == uVar8) break;
      bVar6 = pbVar11[uVar8];
      local_68 = (ulong)(byte)(&DAT_004667f0)[bVar6] & 0x7f;
      if ((char)(&DAT_004667f0)[bVar6] < '\0') {
        if ((int)local_68 == 0) {
          local_68 = (ulong)(byte)"0123456789abcdef"[(ulong)bVar6 & 0xf] << 0x18 |
                     (ulong)(byte)"0123456789abcdef"[bVar6 >> 4] << 0x10 | 0x785c;
          uVar10 = 0x40000000000;
        }
        else {
          local_68 = local_68 << 8 | 0x5c;
          uVar10 = 0x20000000000;
        }
      }
      else {
        uVar10 = 0x10000000000;
      }
      local_68 = local_68 | uVar10;
      uVar10 = (*pcVar14)(uVar2,&local_68,uVar10 >> 0x28);
      if ((uVar10 & 1) != 0) {
        return 1;
      }
      pbVar11 = pbVar11 + uVar8 + 1;
      uVar13 = uVar13 + ~uVar8;
    } while (uVar13 != 0);
  }
  uVar10 = uVar12 >> 0x20 & 0xff;
  local_68 = uVar12;
  uVar9 = (uint)uVar10;
  uVar7 = (uint)(uVar12 >> 0x20);
  if (uVar9 <= uVar7 >> 8) {
    uVar9 = uVar7 >> 8;
  }
  do {
    if (uVar9 == uVar10) {
      return 0;
    }
    puVar1 = (undefined1 *)((long)&local_68 + uVar10);
    uVar10 = uVar10 + 1;
    uVar12 = (**(code **)(lVar4 + 0x20))(uVar2,*puVar1);
  } while ((uVar12 & 1) == 0);
  return 1;
}


// ===== 007499a8  <core::num::imp::bignum::tests::Big8x3_as_core::cmp::Ord>::cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::Big8x3 as core::cmp::Ord>::cmp */

uint __rustcall
<core::num::imp::bignum::tests::Big8x3_as_core::cmp::Ord>::cmp(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
  uVar2 = *param_2;
  if (*param_2 <= *param_1) {
    uVar2 = *param_1;
  }
  if (uVar2 < 4) {
    if (uVar2 == 0) {
      return 0;
    }
    lVar1 = uVar2 + 7;
    bVar4 = *(byte *)((long)param_1 + lVar1);
    bVar5 = *(byte *)((long)param_2 + lVar1);
    if (bVar4 == bVar5) {
      if (lVar1 == 8) {
        return 0;
      }
      lVar1 = uVar2 + 6;
      bVar4 = *(byte *)((long)param_1 + lVar1);
      bVar5 = *(byte *)((long)param_2 + lVar1);
      if (bVar4 == bVar5) {
        if (lVar1 == 8) {
          return 0;
        }
        lVar1 = uVar2 + 5;
        bVar4 = *(byte *)((long)param_1 + lVar1);
        bVar5 = *(byte *)((long)param_2 + lVar1);
        if (bVar4 == bVar5) {
          if (lVar1 == 8) {
            return 0;
          }
          bVar4 = *(byte *)((long)param_1 + (uVar2 | 4));
          bVar5 = *(byte *)((long)param_2 + (uVar2 | 4));
        }
      }
    }
    uVar3 = (uint)(bVar5 < bVar4);
    if (bVar4 < bVar5) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar2,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
}


// ===== 00749a5c  <core::num::niche_types::I32NotAllOnes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::I32NotAllOnes as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::I32NotAllOnes_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

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


// ===== 00749b28  <core::num::niche_types::U64NotAllOnes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::U64NotAllOnes as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::U64NotAllOnes_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_0074d704(*param_1);
  return;
}


// ===== 00749b30  <core::num::niche_types::I64NotAllOnes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::I64NotAllOnes as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::I64NotAllOnes_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  FUN_0074cd28(*param_1);
  return;
}


// ===== 00749b38  <core::num::niche_types::CodePointInner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::niche_types::CodePointInner as core::fmt::Debug>::fmt */

void __rustcall
<core::num::niche_types::CodePointInner_as_core::fmt::Debug>::fmt(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 uStack_1c;
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar4 = (ulong)uVar1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      if (uVar1 < 1000) {
        lVar5 = 10;
        uVar7 = uVar1;
      }
      else {
        uVar7 = (uint)((ulong)uVar1 * 0x1a36e3 >> 0x22);
        uVar3 = uVar1 + uVar7 * -10000;
        uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
        local_14 = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar2 * 2);
        local_12 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
        lVar5 = 6;
      }
      if (9 < uVar7) {
        uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
        *(undefined2 *)((long)&uStack_1c + lVar5) =
             *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
        lVar5 = lVar5 + -2;
        uVar7 = uVar2;
      }
      if ((uVar1 == 0) || (lVar6 = lVar5, uVar7 != 0)) {
        lVar6 = lVar5 + -1;
        *(undefined *)((long)&uStack_1c + lVar5 + 1) = (&DAT_004670a7)[(uVar7 & 0xf) << 1];
      }
      <core::fmt::[a]::core::fmt::Formatter>::pad_integral
                (param_2,1,1,0,auStack_1a + lVar6,10 - lVar6);
      return;
    }
    lVar5 = 0;
    do {
      uVar8 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      lVar6 = lVar5 + -1;
      *(char *)((long)&local_14 + lVar5 + 1) = "0123456789ABCDEF"[uVar8];
      lVar5 = lVar6;
    } while ((int)uVar4 != 0);
  }
  else {
    lVar5 = 0;
    do {
      uVar8 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      lVar6 = lVar5 + -1;
      *(char *)((long)&local_14 + lVar5 + 1) = "0123456789abcdef"[uVar8];
      lVar5 = lVar6;
    } while ((int)uVar4 != 0);
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,(long)&local_12 + lVar6,-lVar6);
  return;
}


// ===== 00749ce0  <core::bstr::ByteStr_as_core::fmt::Display>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::bstr::ByteStr as core::fmt::Display>::fmt */

bool __rustcall
<core::bstr::ByteStr_as_core::fmt::Display>::fmt
          (undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  uint3 uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  code *pcVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 local_a0;
  byte *pbStack_98;
  byte *local_90;
  ulong local_88;
  long local_78;
  
  uVar3 = *(uint *)(param_3 + 2);
  if ((uVar3 >> 0x1b & 1) == 0) {
LAB_00749ec4:
    if ((uVar3 >> 0x1c & 1) == 0) {
      uVar23 = *param_3;
      lVar2 = param_3[1];
      local_a0 = param_1;
      pbStack_98 = param_2;
      <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                (&local_90,&local_a0);
      if (local_90 != (byte *)0x0) {
        pcVar17 = *(code **)(lVar2 + 0x18);
        do {
          lVar2 = local_78;
          uVar19 = (*pcVar17)(uVar23,local_90,local_88);
          if ((uVar19 & 1) != 0) {
            return true;
          }
          if ((lVar2 != 0) && (uVar19 = (*pcVar17)(uVar23,&DAT_0046c388,3), (uVar19 & 1) != 0)) {
            return true;
          }
          <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                    (&local_90,&local_a0);
        } while (local_90 != (byte *)0x0);
      }
      return false;
    }
    uVar19 = 0;
  }
  else {
    uVar4 = *(ushort *)((long)param_3 + 0x14);
    uVar19 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_00749ec4;
    if ((uVar3 >> 0x1c & 1) == 0) {
      local_a0 = param_1;
      pbStack_98 = param_2;
      <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                (&local_90,&local_a0);
      if (local_90 == (byte *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          lVar2 = local_78;
          if (local_88 < 0x20) {
            if (local_88 == 0) {
              lVar11 = 0;
            }
            else {
              if (local_88 < 8) {
                uVar13 = 0;
                lVar11 = 0;
              }
              else {
                uVar13 = local_88 & 0x18;
                uVar23 = NEON_cmgt(*(undefined8 *)local_90,0xbfbfbfbfbfbfbfbf,1);
                uVar6 = CONCAT12((char)((ulong)uVar23 >> 8),(short)uVar23) & 0xff00ff;
                uVar24 = (ulong)((byte)((ulong)uVar23 >> 0x30) & 1);
                uVar25 = (ulong)((byte)((ulong)uVar23 >> 0x38) & 1);
                uVar28 = (ulong)((byte)((ulong)uVar23 >> 0x20) & 1);
                uVar29 = (ulong)((byte)((ulong)uVar23 >> 0x28) & 1);
                uVar26 = (ulong)((byte)((ulong)uVar23 >> 0x10) & 1);
                uVar27 = (ulong)((byte)((ulong)uVar23 >> 0x18) & 1);
                uVar30 = (ulong)((byte)uVar6 & 1);
                uVar31 = (ulong)((byte)(uVar6 >> 0x10) & 1);
                if (uVar13 != 8) {
                  uVar23 = NEON_cmgt(*(undefined8 *)(local_90 + 8),0xbfbfbfbfbfbfbfbf,1);
                  uVar6 = CONCAT12((char)((ulong)uVar23 >> 8),(short)uVar23) & 0xff00ff;
                  uVar24 = uVar24 + ((byte)((ulong)uVar23 >> 0x30) & 1);
                  uVar25 = uVar25 + ((byte)((ulong)uVar23 >> 0x38) & 1);
                  uVar26 = uVar26 + ((byte)((ulong)uVar23 >> 0x10) & 1);
                  uVar27 = uVar27 + ((byte)((ulong)uVar23 >> 0x18) & 1);
                  uVar30 = uVar30 + ((byte)uVar6 & 1);
                  uVar31 = uVar31 + ((byte)(uVar6 >> 0x10) & 1);
                  uVar28 = uVar28 + ((byte)((ulong)uVar23 >> 0x20) & 1);
                  uVar29 = uVar29 + ((byte)((ulong)uVar23 >> 0x28) & 1);
                  if (uVar13 != 0x10) {
                    uVar23 = NEON_cmgt(*(undefined8 *)(local_90 + 0x10),0xbfbfbfbfbfbfbfbf,1);
                    uVar6 = CONCAT12((char)((ulong)uVar23 >> 8),(short)uVar23) & 0xff00ff;
                    uVar24 = uVar24 + ((byte)((ulong)uVar23 >> 0x30) & 1);
                    uVar25 = uVar25 + ((byte)((ulong)uVar23 >> 0x38) & 1);
                    uVar26 = uVar26 + ((byte)((ulong)uVar23 >> 0x10) & 1);
                    uVar27 = uVar27 + ((byte)((ulong)uVar23 >> 0x18) & 1);
                    uVar30 = uVar30 + ((byte)uVar6 & 1);
                    uVar31 = uVar31 + ((byte)(uVar6 >> 0x10) & 1);
                    uVar28 = uVar28 + ((byte)((ulong)uVar23 >> 0x20) & 1);
                    uVar29 = uVar29 + ((byte)((ulong)uVar23 >> 0x28) & 1);
                  }
                }
                lVar11 = uVar30 + uVar28 + uVar26 + uVar24 + uVar31 + uVar29 + uVar27 + uVar25;
                if (local_88 == uVar13) goto LAB_00749d5c;
              }
              lVar14 = local_88 - uVar13;
              pbVar18 = local_90 + uVar13;
              do {
                iVar10 = (int)(char)*pbVar18;
                if (iVar10 != -0x41 && iVar10 + 0x41 < 0 == SCARRY4(iVar10,0x41)) {
                  lVar11 = lVar11 + 1;
                }
                lVar14 = lVar14 + -1;
                pbVar18 = pbVar18 + 1;
              } while (lVar14 != 0);
            }
          }
          else {
            lVar11 = core::str::count::do_count_chars();
          }
LAB_00749d5c:
          if (lVar2 != 0) {
            uVar21 = uVar21 + 1;
          }
          uVar21 = uVar21 + lVar11;
          <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                    (&local_90,&local_a0);
        } while (local_90 != (byte *)0x0);
      }
      uVar8 = 0;
      if (uVar21 <= uVar19) {
        uVar8 = (uint)uVar4 - (int)uVar21;
      }
      goto joined_r0x0074a0b0;
    }
  }
  uVar4 = *(ushort *)((long)param_3 + 0x16);
  uVar21 = (ulong)uVar4;
  iVar10 = (int)uVar19;
  if (uVar21 == 0) {
    param_2 = (byte *)0x0;
    param_1 = 1;
    uVar8 = iVar10 - (uint)uVar4;
  }
  else {
    local_a0 = param_1;
    pbStack_98 = param_2;
    <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
              (&local_90,&local_a0);
    if (local_90 == (byte *)0x0) {
      uVar13 = 0;
    }
    else {
      pbVar18 = (byte *)0x0;
      uVar13 = 0;
      uVar24 = uVar21;
LAB_00749f6c:
      do {
        uVar25 = 0;
        pbVar15 = (byte *)0x0;
        pbVar12 = local_90;
        while (pbVar12 != local_90 + local_88) {
          pbVar16 = pbVar12 + 1;
          bVar5 = *pbVar12;
          if ((char)bVar5 < '\0') {
            if (bVar5 < 0xe0) {
              pbVar16 = pbVar12 + 2;
            }
            else {
              lVar2 = 3;
              if (0xef < bVar5) {
                lVar2 = 4;
              }
              pbVar16 = pbVar12 + lVar2;
            }
          }
          uVar25 = uVar25 + 1;
          pbVar15 = pbVar16 + ((long)pbVar15 - (long)pbVar12);
          pbVar12 = pbVar16;
          if (uVar24 == uVar25) goto LAB_0074a064;
        }
        if (uVar24 - uVar25 == 0) {
LAB_0074a064:
          pbVar15 = pbVar15 + (long)pbVar18;
          if (param_2 < pbVar15) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,pbVar15,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c1c0);
          }
          param_2 = pbVar15;
          uVar8 = 0;
          if (uVar21 <= uVar19) {
            uVar8 = iVar10 - (uint)uVar4;
          }
          goto joined_r0x0074a0b0;
        }
        pbVar18 = pbVar18 + local_88;
        uVar13 = uVar13 + uVar25;
        if (local_78 == 0) {
          <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                    (&local_90,&local_a0);
          uVar24 = uVar24 - uVar25;
          if (local_90 == (byte *)0x0) break;
          goto LAB_00749f6c;
        }
        pbVar18 = pbVar18 + local_78;
        if (uVar24 - 1 == uVar25) {
          if (param_2 < pbVar18) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,pbVar18,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c1a8);
          }
          param_2 = pbVar18;
          uVar8 = 0;
          if (uVar21 <= uVar19) {
            uVar8 = iVar10 - (uint)uVar4;
          }
          goto joined_r0x0074a0b0;
        }
        uVar13 = uVar13 + 1;
        <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                  (&local_90,&local_a0);
        uVar24 = ~uVar25 + uVar24;
      } while (local_90 != (byte *)0x0);
    }
    uVar8 = 0;
    if (uVar13 <= uVar19) {
      uVar8 = iVar10 - (int)uVar13;
    }
  }
joined_r0x0074a0b0:
  uVar7 = uVar3 >> 0x1d & 3;
  if ((uint)uVar7 < 2) {
    uVar20 = 0;
    if (uVar7 != 0) {
      uVar20 = uVar8;
    }
  }
  else {
    uVar20 = 0;
    if (uVar7 == 2) {
      uVar20 = uVar8 >> 1 & 0x7fff;
    }
  }
  uVar23 = *param_3;
  lVar2 = param_3[1];
  uVar22 = 0;
  while ((uVar22 & 0xffff) < (uVar20 & 0xffff)) {
    uVar22 = uVar22 + 1;
    uVar19 = (**(code **)(lVar2 + 0x20))(uVar23,uVar3 & 0x1fffff);
    if ((uVar19 & 1) != 0) {
      return true;
    }
  }
  local_a0 = param_1;
  pbStack_98 = param_2;
  <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
            (&local_90,&local_a0);
  if (local_90 != (byte *)0x0) {
    pcVar17 = *(code **)(lVar2 + 0x18);
    do {
      lVar11 = local_78;
      uVar19 = (*pcVar17)(uVar23,local_90,local_88);
      if (((uVar19 & 1) != 0) ||
         ((lVar11 != 0 && (uVar19 = (*pcVar17)(uVar23,&DAT_0046c388,3), (uVar19 & 1) != 0)))) {
        return true;
      }
      <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
                (&local_90,&local_a0);
    } while (local_90 != (byte *)0x0);
  }
  uVar22 = 0;
  do {
    bVar9 = (uVar8 - uVar20 & 0xffff) <= (uVar22 & 0xffff);
    bVar1 = !bVar9;
    if (bVar9) {
      return bVar1;
    }
    uVar22 = uVar22 + 1;
    iVar10 = (**(code **)(lVar2 + 0x20))(uVar23,uVar3 & 0x1fffff);
  } while (iVar10 == 0);
  return bVar1;
}


// ===== 0074a228  <core::ascii::EscapeDefault_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ascii::EscapeDefault as core::fmt::Display>::fmt */

void __rustcall
<core::ascii::EscapeDefault_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0074a244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,param_1 + (ulong)*(byte *)(param_1 + 4),
             (ulong)*(byte *)(param_1 + 5) - (ulong)*(byte *)(param_1 + 4));
  return;
}


// ===== 0074a248  <core::io::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Error as core::fmt::Display>::fmt */

void __rustcall
<core::io::error::Error_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint local_3c;
  uint *local_38;
  undefined4 **ppuStack_30;
  code *local_28;
  uint *local_20;
  undefined *puStack_18;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = (ulong)param_1 & 3;
  if (1 < uVar1) {
    local_3c = (uint)((ulong)param_1 >> 0x20);
    if (uVar1 == 2) {
      local_38 = &local_3c;
      ppuStack_30 = &local_38;
      local_28 = FUN_0074b640;
      puStack_18 = PTR_fmt_0099f688;
      local_20 = local_38;
      core::fmt::write(*param_2,param_2[1],&DAT_0036954b,&ppuStack_30);
      return;
    }
    local_3c = local_3c & 0xff;
    if (0x2a < (ulong)param_1 >> 0x20) {
      local_3c = 0xff;
    }
                    /* WARNING: Could not recover jumptable at 0x0074a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))
              (*param_2,(&PTR_s_entity_not_found_0097c418)[local_3c],
               *(undefined8 *)(&DAT_0046cd80 + (ulong)local_3c * 8));
    return;
  }
  if (uVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*param_1,param_1[1]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074a2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)((long)param_1 + 7) + 0x20))(*(undefined8 *)((long)param_1 + -1));
  return;
}


// ===== 0074a314  <isize_as_core::fmt::Binary>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as core::fmt::Binary>::fmt */

void __rustcall <isize_as_core::fmt::Binary>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    (&local_11)[lVar2] = (&DAT_0046c5b6)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c5b8,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074a384  <f32_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::fmt::Display>::fmt */

void __rustcall <f32_as_core::fmt::Display>::fmt(undefined4 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00733230(param_2,uVar1,0);
    return;
  }
  FUN_007329e8(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16));
  return;
}


// ===== 0074a3b0  <core::mem::type_info::FieldId_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::mem::type_info::FieldId as core::fmt::Debug>::fmt */

void __rustcall
<core::mem::type_info::FieldId_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = *param_1;
  local_28 = param_1[1];
  puStack_18 = PTR_fmt_0099f6c8;
  core::fmt::write(*param_2,param_2[1],&DAT_0046c5ba,&local_20);
  return;
}


// ===== 0074a3f8  <core::net::ip_addr::IpAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::IpAddr as core::fmt::Debug>::fmt */

void __rustcall <core::net::ip_addr::IpAddr_as_core::fmt::Debug>::fmt(char *param_1)

{
  if (*param_1 == '\x01') {
    <core::net::ip_addr::Ipv6Addr_as_core::fmt::Display>::fmt();
    return;
  }
  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt(param_1 + 1);
  return;
}


// ===== 0074a40c  <core::panic::location::Location_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::panic::location::Location as core::fmt::Debug>::fmt */

byte __rustcall
<core::panic::location::Location_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_40;
  byte local_38;
  byte local_37;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_003736a0,8);
  local_30 = *param_1;
  uStack_28 = param_1[1];
  local_37 = 0;
  local_40 = param_2;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_40,&DAT_00379908,4,&local_30,&DAT_0097c188);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_40,&DAT_00378c80,4,param_1 + 2,&DAT_0097c1d8);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_40,&DAT_0046c5cd,6,(long)param_1 + 0x14,&DAT_0097c1d8);
  bVar1 = local_37 | local_38;
  if ((local_37 == 1) && ((local_38 & 1) == 0)) {
    if (*(char *)((long)local_40 + 0x12) < '\0') {
      uVar2 = *local_40;
      lVar5 = local_40[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_40;
      lVar5 = local_40[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0074a518  <core::slice::ascii::EscapeAscii_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::ascii::EscapeAscii as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::slice::ascii::EscapeAscii_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_0046c5d3,0xb);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0074a574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00466a5b,7);
  return uVar2;
}


// ===== 0074a578  <u16_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::fmt::Display>::fmt */

void __rustcall <u16_as_core::fmt::Display>::fmt(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auStack_16 [2];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  if (uVar1 < 1000) {
    if (uVar1 < 10) {
      lVar4 = 5;
      uVar5 = (uint)uVar1;
      goto joined_r0x0074a628;
    }
    uVar5 = (uVar1 >> 2) / 0x19;
    lVar4 = 3;
    local_12 = *(undefined2 *)(&DAT_004670a6 + ((ulong)((uint)uVar1 + uVar5 * -100) & 0xffff) * 2);
    if (uVar1 != 0) goto LAB_0074a62c;
  }
  else {
    uVar5 = (uVar1 >> 4) / 0x271;
    uVar3 = (uint)uVar1 + uVar5 * -10000;
    uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
    local_14 = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar2 * 2);
    lVar4 = 1;
    local_12 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
joined_r0x0074a628:
    if (uVar1 != 0) {
LAB_0074a62c:
      if (uVar5 == 0) goto LAB_0074a648;
    }
  }
  auStack_16[lVar4] = (&DAT_004670a7)[(uVar5 & 0xf) << 1];
  lVar4 = lVar4 + -1;
LAB_0074a648:
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,1,0,auStack_16 + lVar4 + 1,5 - lVar4);
  return;
}


// ===== 0074a678  <i8_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as core::pat::RangePattern>::sub_one */

void __rustcall <i8_as_core::pat::RangePattern>::sub_one(char param_1,undefined8 param_2)

{
  if ((int)(char)(param_1 + -1) == param_1 + -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59,param_2);
}


// ===== 0074a6ac  <core::ascii::EscapeDefault_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ascii::EscapeDefault as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::ascii::EscapeDefault_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_0046c60a,0xd);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0074a708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00466a5b,7);
  return uVar2;
}


// ===== 0074a70c  <core::error::Request_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::error::Request as core::fmt::Debug>::fmt */

undefined8 __rustcall
<core::error::Request_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_3;
  UNRECOVERED_JUMPTABLE = *(code **)(param_3[1] + 0x18);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_0046c617,7);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0074a768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00466a5b,7);
  return uVar2;
}


// ===== 0074a76c  <core::io::error::Error_as_core::error::Error>::cause =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Error as core::error::Error>::cause */

undefined8 __rustcall <core::io::error::Error_as_core::error::Error>::cause(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 3) - 2 < 2 || (uVar2 & 3) == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)(uVar2 + 7) + 0x48))(*(undefined8 *)(uVar2 - 1));
  return uVar1;
}


// ===== 0074a7ac  <core::io::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::Error as core::error::Error>::source */

undefined8 __rustcall <core::io::error::Error_as_core::error::Error>::source(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 3) - 2 < 2 || (uVar2 & 3) == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)(uVar2 + 7) + 0x30))(*(undefined8 *)(uVar2 - 1));
  return uVar1;
}


// ===== 0074a7ec  <usize_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as core::fmt::Octal>::fmt */

void __rustcall <usize_as_core::fmt::Octal>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_00374588)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074a85c  <f32_as_core::fmt::LowerExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::fmt::LowerExp>::fmt */

void __rustcall <f32_as_core::fmt::LowerExp>::fmt(undefined4 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00734478(param_2,uVar1,0);
    return;
  }
  FUN_00733aec(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),0);
  return;
}


// ===== 0074a88c  <core::net::socket_addr::SocketAddr_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt */

void __rustcall <core::net::socket_addr::SocketAddr_as_core::fmt::Display>::fmt(short *param_1)

{
  if (*param_1 == 1) {
    <core::net::socket_addr::SocketAddrV6_as_core::fmt::Display>::fmt(param_1 + 2);
    return;
  }
  <core::net::socket_addr::SocketAddrV4_as_core::fmt::Display>::fmt(param_1 + 1);
  return;
}


// ===== 0074a8a8  <core::net::ip_addr::Ipv6Addr_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv6Addr as core::str::traits::FromStr>::from_str */

void __rustcall
<core::net::ip_addr::Ipv6Addr_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_48;
  long local_40;
  byte local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  
  local_48 = param_2;
  local_40 = param_3;
  FUN_007351a8(&local_34,&local_48);
  if ((local_40 == 0) && ((local_34 & 1) != 0)) {
    *(undefined8 *)(param_1 + 9) = uStack_2b;
    *(undefined8 *)(param_1 + 1) = local_33;
    *param_1 = 0;
    return;
  }
  param_1[1] = 2;
  *param_1 = 1;
  return;
}


// ===== 0074a918  <core::num::error::ParseIntError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::error::ParseIntError as core::fmt::Display>::fmt */

void __rustcall
<core::num::error::ParseIntError_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,&DAT_0046cd20 + *(int *)(&DAT_0046cd20 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_0046ccf0 + (ulong)*param_1 * 8));
  return;
}


// ===== 0074a940  <core::str::lossy::Utf8Chunks_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::lossy::Utf8Chunks as core::fmt::Debug>::fmt */

byte __rustcall
<core::str::lossy::Utf8Chunks_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_40;
  byte local_38;
  byte local_37;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0046c6f1,10);
  local_30 = *param_1;
  uStack_28 = param_1[1];
  local_37 = 0;
  local_40 = param_2;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (&local_40,&DAT_0046c6fb,6,&local_30,&DAT_0097c1f8);
  bVar1 = local_37 | local_38;
  if ((local_37 == 1) && ((local_38 & 1) == 0)) {
    if (*(char *)((long)local_40 + 0x12) < '\0') {
      uVar2 = *local_40;
      lVar5 = local_40[1];
      puVar3 = &DAT_00466a6b;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_40;
      lVar5 = local_40[1];
      puVar3 = &DAT_00466b55;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 0074aa0c  <i16_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::fmt::Display>::fmt */

void __rustcall <i16_as_core::fmt::Display>::fmt(short *param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_16 [2];
  undefined2 local_14;
  undefined2 local_12;
  
  sVar1 = *param_1;
  uVar5 = (uint)sVar1;
  uVar4 = -(int)sVar1;
  if (-1 < sVar1) {
    uVar4 = uVar5;
  }
  if (uVar4 < 1000) {
    if ((uVar4 & 0xffff) < 10) {
      lVar6 = 5;
      uVar2 = uVar4;
    }
    else {
      uVar2 = (uVar4 >> 2 & 0x3fff) / 0x19;
      lVar6 = 3;
      local_12 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar4 + uVar2 * -100) & 0xffff) * 2);
    }
  }
  else {
    uVar2 = (uVar4 >> 4 & 0xfff) / 0x271;
    uVar4 = uVar4 + uVar2 * -10000;
    uVar3 = (uVar4 >> 2 & 0x3fff) / 0x19;
    local_14 = *(undefined2 *)(&DAT_004670a6 + (ulong)uVar3 * 2);
    lVar6 = 1;
    local_12 = *(undefined2 *)(&DAT_004670a6 + ((ulong)(uVar4 + uVar3 * -100) & 0xffff) * 2);
  }
  if ((uVar5 == 0) || ((uVar2 & 0xffff) != 0)) {
    auStack_16[lVar6] = (&DAT_004670a7)[(uVar2 & 0xf) << 1];
    lVar6 = lVar6 + -1;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,uVar5 >> 0xf & 1 ^ 1,1,0,auStack_16 + lVar6 + 1,5 - lVar6);
  return;
}


// ===== 0074ab24  <i16_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as core::pat::RangePattern>::sub_one */

void __rustcall <i16_as_core::pat::RangePattern>::sub_one(short param_1,undefined8 param_2)

{
  if ((int)(short)(param_1 + -1) == param_1 + -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59,param_2);
}


// ===== 0074ab58  <isize_as_core::fmt::Octal>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as core::fmt::Octal>::fmt */

void __rustcall <isize_as_core::fmt::Octal>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_11;
  
  uVar3 = *param_1;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    (&local_11)[lVar2] = (&DAT_00374588)[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,&DAT_0046c61e,2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074abc8  <f32_as_core::fmt::UpperExp>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as core::fmt::UpperExp>::fmt */

void __rustcall <f32_as_core::fmt::UpperExp>::fmt(undefined4 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00734478(param_2,uVar1,1);
    return;
  }
  FUN_00733aec(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16),1);
  return;
}


// ===== 0074abf8  <core::net::socket_addr::SocketAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddr as core::fmt::Debug>::fmt */

void __rustcall <core::net::socket_addr::SocketAddr_as_core::fmt::Debug>::fmt(short *param_1)

{
  if (*param_1 == 1) {
    <core::net::socket_addr::SocketAddrV6_as_core::fmt::Display>::fmt(param_1 + 2);
    return;
  }
  <core::net::socket_addr::SocketAddrV4_as_core::fmt::Display>::fmt(param_1 + 1);
  return;
}


// ===== 0074ac14  <core::marker::variance::PhantomContravariantLifetime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::marker::variance::PhantomContravariantLifetime as core::fmt::Debug>::fmt */

void __rustcall
<core::marker::variance::PhantomContravariantLifetime_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0074ac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0046c701,0x1c);
  return;
}


// ===== 0074ac30  <core::num::imp::bignum::Big32x40_as_core::cmp::PartialOrd>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::Big32x40 as core::cmp::PartialOrd>::partial_cmp */

uint __rustcall
<core::num::imp::bignum::Big32x40_as_core::cmp::PartialOrd>::partial_cmp(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_2 + 0xa0);
  if (*(ulong *)(param_2 + 0xa0) <= *(ulong *)(param_1 + 0xa0)) {
    uVar1 = *(ulong *)(param_1 + 0xa0);
  }
  if (uVar1 < 0x29) {
    lVar5 = uVar1 << 2;
    do {
      if (lVar5 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + -4 + lVar5);
      uVar3 = *(uint *)(param_2 + -4 + lVar5);
      lVar5 = lVar5 + -4;
    } while (uVar2 == uVar3);
    uVar4 = (uint)(uVar3 <= uVar2 && uVar2 != uVar3);
    if (uVar3 > uVar2) {
      uVar4 = 0xffffffff;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar1,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
}


// ===== 0074aca0  <core::num::imp::bignum::tests::Big8x3_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::Big8x3 as core::fmt::Debug>::fmt */

ulong __rustcall
<core::num::imp::bignum::tests::Big8x3_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  
  puVar3 = PTR_fmt_0099f4f0;
  uVar6 = *param_1;
  uVar5 = uVar6 - (uVar6 != 0);
  if (2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar5,3,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b6f0);
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_60 = (undefined1 *)((long)param_1 + uVar5 + 8);
  local_58 = PTR_fmt_0099f4f0;
  uVar4 = core::fmt::write(uVar1,uVar2,&DAT_0046c71d,&local_60);
  if ((uVar4 & 1) == 0) {
    if (uVar6 < 2) {
      return 0;
    }
    local_60 = local_64;
    local_64[0] = *(undefined1 *)((long)param_1 + uVar5 + 7);
    local_58 = puVar3;
    uStack_50 = 0;
    local_48 = 2;
    uVar6 = core::fmt::write(uVar1,uVar2,&DAT_0046c723,&local_60);
    if (((uVar6 & 1) == 0) && (uVar5 + 7 != 8)) {
      local_60 = local_64;
      local_64[0] = *(undefined1 *)((long)param_1 + uVar5 + 6);
      local_58 = puVar3;
      uStack_50 = 0;
      local_48 = 2;
      uVar5 = core::fmt::write(uVar1,uVar2,&DAT_0046c723,&local_60);
      return uVar5;
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 0074adf0  <i32_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as core::pat::RangePattern>::sub_one */

int __rustcall <i32_as_core::pat::RangePattern>::sub_one(int param_1,undefined8 param_2)

{
  if (!SBORROW4(param_1,1)) {
    return param_1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59,param_2);
}


// ===== 0074ae18  <u64_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as core::fmt::LowerHex>::fmt */

void __rustcall <u64_as_core::fmt::LowerHex>::fmt(ulong *param_1,undefined8 param_2)

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
    (&local_11)[lVar2] = "0123456789abcdef"[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074ae88  <f64_as_core::fmt::Debug>::fmt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::fmt::Debug>::fmt */

void __rustcall <f64_as_core::fmt::Debug>::fmt(double *param_1,long param_2)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 >> 0x1c & 1) != 0) {
    FUN_007326a8(param_2,uVar1 >> 0x15 & 1,*(undefined2 *)(param_2 + 0x16));
    return;
  }
  dVar2 = ABS(*param_1);
  if ((dVar2 < _s__00374580 != (NAN(dVar2) || NAN(_s__00374580))) &&
     (DAT_00375ee8 <= dVar2 || *param_1 == 0.0)) {
    FUN_00732fac(param_2,uVar1 >> 0x15 & 1,1);
    return;
  }
  FUN_00734140(param_2,uVar1 >> 0x15 & 1,0);
  return;
}


// ===== 0074aef8  <core::net::socket_addr::SocketAddrV4_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV4 as core::fmt::Display>::fmt */

void __rustcall
<core::net::socket_addr::SocketAddrV4_as_core::fmt::Display>::fmt(ulong param_1,undefined8 *param_2)

{
  int iVar1;
  ulong local_78;
  undefined1 auStack_70 [24];
  ulong local_58;
  undefined2 local_4c [2];
  ulong *local_48;
  code *pcStack_40;
  long *local_38;
  undefined *puStack_30;
  undefined1 uStack_21;
  
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) == 0) {
    local_48 = &local_78;
    local_58 = CONCAT62(local_58._2_6_,*(undefined2 *)(param_1 + 4));
    local_38 = (long *)&local_58;
    pcStack_40 = FUN_00746eb0;
    puStack_30 = PTR_fmt_0099f528;
    local_78 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_00366572,&local_48);
    return;
  }
  local_4c[0] = *(undefined2 *)(param_1 + 4);
  local_48 = &local_58;
  local_78 = 0;
  pcStack_40 = FUN_00746eb0;
  local_38 = (long *)local_4c;
  puStack_30 = PTR_fmt_0099f528;
  local_58 = param_1;
  iVar1 = core::fmt::write(&local_78,&DAT_0097c218,&DAT_00366572,&local_48);
  if (iVar1 == 0) {
    if (local_78 < 0x16) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,auStack_70);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,local_78,0x15,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c260);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_00466abc,0x2b,&uStack_21,&DAT_0097b670,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_0097c248);
}


// ===== 0074b020  <core::net::socket_addr::SocketAddrV4_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::socket_addr::SocketAddrV4 as core::str::traits::FromStr>::from_str */

ulong __rustcall
<core::net::socket_addr::SocketAddrV4_as_core::str::traits::FromStr>::from_str
          (byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong extraout_x10;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  uVar4 = FUN_00734e34(&local_30);
  if ((uVar4 & 1) == 0) {
    bVar3 = false;
    uVar6 = 0;
    goto LAB_0074b0f4;
  }
  uVar5 = extraout_x10;
  if (local_28 == 0) {
LAB_0074b0c0:
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if ((local_28 != 1) && (uVar5 = (ulong)*local_30, *local_30 == 0x3a)) {
      uVar5 = (ulong)(local_30[1] - 0x30);
      if (local_30[1] - 0x30 < 10) {
        lVar7 = 2;
        do {
          if ((local_28 - lVar7 == 0) || (pbVar1 = local_30 + lVar7, 9 < *pbVar1 - 0x30)) {
            bVar3 = true;
            local_28 = local_28 - lVar7;
            goto LAB_0074b0dc;
          }
          uVar2 = (((uint)uVar5 & 0xffff) + (uint)(ushort)uVar5 * 4) * 2;
          uVar5 = (ulong)uVar2;
          if ((uVar2 & 0xf0000) != 0) break;
          lVar7 = lVar7 + 1;
          uVar2 = (uVar2 & 0xfffe) + (*pbVar1 - 0x30 & 0xffff);
          uVar5 = (ulong)uVar2;
        } while ((uVar2 & 0xffff0000) == 0);
      }
      goto LAB_0074b0c0;
    }
  }
LAB_0074b0dc:
  if (bVar3) {
    param_2 = local_28;
  }
  uVar6 = 0;
  if (bVar3) {
    uVar6 = (uVar4 >> 8 & 0xffffffff) << 0x10 | uVar5 << 0x30;
  }
LAB_0074b0f4:
  uVar6 = uVar6 | 0x400;
  if (!(bool)(param_2 == 0 & bVar3)) {
    uVar6 = 0x401;
  }
  return uVar6;
}


// ===== 0074b120  <core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::ip_addr::Ipv4Addr as core::fmt::Display>::fmt */

void __rustcall
<core::net::ip_addr::Ipv4Addr_as_core::fmt::Display>::fmt(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 local_84;
  ulong local_80;
  undefined1 auStack_78 [16];
  undefined4 *local_68;
  undefined *puStack_60;
  ulong local_58;
  undefined *puStack_50;
  ulong local_48;
  undefined *puStack_40;
  ulong local_38;
  undefined *puStack_30;
  undefined1 uStack_21;
  
  local_84 = *param_1;
  if ((*(byte *)((long)param_2 + 0x13) & 0x18) == 0) {
    local_68 = &local_84;
    local_58 = (ulong)local_68 | 1;
    puStack_60 = PTR_fmt_0099f4e8;
    puStack_50 = PTR_fmt_0099f4e8;
    local_48 = (ulong)local_68 | 2;
    local_38 = (ulong)local_68 | 3;
    puStack_40 = PTR_fmt_0099f4e8;
    puStack_30 = PTR_fmt_0099f4e8;
    core::fmt::write(*param_2,param_2[1],&DAT_0036c906,&local_68);
    return;
  }
  local_80 = 0;
  local_68 = &local_84;
  local_58 = (ulong)local_68 | 1;
  puStack_60 = PTR_fmt_0099f4e8;
  puStack_50 = PTR_fmt_0099f4e8;
  local_48 = (ulong)local_68 | 2;
  local_38 = (ulong)local_68 | 3;
  puStack_40 = PTR_fmt_0099f4e8;
  puStack_30 = PTR_fmt_0099f4e8;
  iVar1 = core::fmt::write(&local_80,&DAT_0097c278,&DAT_0036c906,&local_68);
  if (iVar1 == 0) {
    if (local_80 < 0x10) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,auStack_78);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,local_80,0xf,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097c260);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_00466abc,0x2b,&uStack_21,&DAT_0097b670,
             &PTR_s__rustc_48a229ceaefd4985c50990b14_0097c2a8);
}


// ===== 0074b248  <core::char::convert::ParseCharError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::char::convert::ParseCharError as core::fmt::Display>::fmt */

void __rustcall
<core::char::convert::ParseCharError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"too many characters in string",0x1d);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"cannot parse char from empty string",0x23);
  return;
}


// ===== 0074b278  <core::sync::atomic::Atomic<bool>as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::sync::atomic::Atomic<bool> as core::fmt::Debug>::fmt */

void __rustcall
<core::sync::atomic::Atomic<bool>as_core::fmt::Debug>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 != '\0') {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00377e48,4);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"false",5);
  return;
}


// ===== 0074b2a4  <core::num::imp::bignum::Big32x40_as_core::cmp::Ord>::cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::Big32x40 as core::cmp::Ord>::cmp */

uint __rustcall <core::num::imp::bignum::Big32x40_as_core::cmp::Ord>::cmp(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_2 + 0xa0);
  if (*(ulong *)(param_2 + 0xa0) <= *(ulong *)(param_1 + 0xa0)) {
    uVar1 = *(ulong *)(param_1 + 0xa0);
  }
  if (uVar1 < 0x29) {
    lVar5 = uVar1 << 2;
    do {
      if (lVar5 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + -4 + lVar5);
      uVar3 = *(uint *)(param_2 + -4 + lVar5);
      lVar5 = lVar5 + -4;
    } while (uVar2 == uVar3);
    uVar4 = (uint)(uVar3 <= uVar2 && uVar2 != uVar3);
    if (uVar3 > uVar2) {
      uVar4 = 0xffffffff;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar1,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_0097b738);
}


// ===== 0074b314  <core::fmt::Arguments_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Arguments as core::fmt::Debug>::fmt */

void __rustcall
<core::fmt::Arguments_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  core::fmt::write(*param_2,param_2[1],*param_1,param_1[1]);
  return;
}


// ===== 0074b324  <isize_as_core::pat::RangePattern>::sub_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as core::pat::RangePattern>::sub_one */

long __rustcall <isize_as_core::pat::RangePattern>::sub_one(long param_1,undefined8 param_2)

{
  if (!SBORROW8(param_1,1)) {
    return param_1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0046c5de,0x59,param_2);
}


// ===== 0074b34c  <i64_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as core::fmt::LowerHex>::fmt */

void __rustcall <i64_as_core::fmt::LowerHex>::fmt(ulong *param_1,undefined8 param_2)

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
    (&local_11)[lVar2] = "0123456789abcdef"[uVar4];
    lVar1 = lVar2 + -1;
  } while (uVar3 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_11 + lVar2,-(lVar2 + -1));
  return;
}


// ===== 0074b3bc  <f64_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as core::fmt::Display>::fmt */

void __rustcall <f64_as_core::fmt::Display>::fmt(undefined8 *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 0x15 & 1;
  if ((*(uint *)(param_2 + 0x10) >> 0x1c & 1) == 0) {
    FUN_00732fac(param_2,uVar1,0);
    return;
  }
  FUN_007326a8(*param_1,param_2,uVar1,*(undefined2 *)(param_2 + 0x16));
  return;
}


