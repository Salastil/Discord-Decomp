// ===== 001aebdc  std::__ndk1::ios_base::pword =====

/* std::__ndk1::ios_base::pword(int) */

undefined8 * __thiscall std::__ndk1::ios_base::pword(ios_base *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar1 = (long)param_1 + 1;
  if (*(ulong *)(this + 0x80) < uVar1) {
    uVar2 = uVar1;
    if (uVar1 <= (ulong)(*(long *)(this + 0x68) << 1)) {
      uVar2 = *(long *)(this + 0x68) << 1;
    }
    if (0xffffffffffffffe < uVar1) {
      uVar2 = 0x1fffffffffffffff;
    }
    pvVar4 = realloc(*(void **)(this + 0x70),uVar2 << 3);
    if (pvVar4 == (void *)0x0) {
      uVar3 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar3 | 1;
      if ((*(uint *)(this + 0x24) & (uVar3 | 1)) == 0) {
        DAT_00214d50 = 0;
        return &DAT_00214d50;
      }
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
    uVar5 = *(ulong *)(this + 0x78);
    *(void **)(this + 0x70) = pvVar4;
    if ((long)uVar5 < (long)uVar2) {
      puVar6 = (undefined8 *)((long)pvVar4 + uVar5 * 8);
      do {
        puVar7 = puVar6 + 1;
        *puVar6 = 0;
        pvVar4 = *(void **)(this + 0x70);
        puVar6 = puVar7;
      } while (puVar7 < (undefined8 *)((long)pvVar4 + uVar2 * 8));
    }
    *(ulong *)(this + 0x80) = uVar2;
  }
  else {
    pvVar4 = *(void **)(this + 0x70);
    uVar5 = *(ulong *)(this + 0x78);
  }
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  *(ulong *)(this + 0x78) = uVar1;
  return (undefined8 *)((long)pvVar4 + (long)param_1 * 8);
}


// ===== 001aecb4  std::__ndk1::ios_base::register_callback =====

/* std::__ndk1::ios_base::register_callback(void (*)(std::__ndk1::ios_base::event,
   std::__ndk1::ios_base&, int), int) */

void __thiscall
std::__ndk1::ios_base::register_callback
          (ios_base *this,_func_void_event_ios_base_ptr_int *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x48);
  uVar4 = lVar6 + 1;
  if (*(ulong *)(this + 0x50) < uVar4) {
    uVar5 = *(ulong *)(this + 0x50) << 1;
    uVar1 = uVar4;
    if (uVar4 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0xffffffffffffffe < uVar4) {
      uVar1 = 0x1fffffffffffffff;
    }
    pvVar3 = realloc(*(void **)(this + 0x38),uVar1 << 3);
    if (pvVar3 == (void *)0x0) {
      uVar2 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar2 | 1;
      if ((*(uint *)(this + 0x24) & (uVar2 | 1)) != 0) goto LAB_001aed80;
    }
    *(void **)(this + 0x38) = pvVar3;
    pvVar3 = realloc(*(void **)(this + 0x40),uVar1 << 2);
    if (pvVar3 == (void *)0x0) {
      uVar2 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar2 | 1;
      if ((*(uint *)(this + 0x24) & (uVar2 | 1)) != 0) {
LAB_001aed80:
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
    lVar6 = *(long *)(this + 0x48);
    *(void **)(this + 0x40) = pvVar3;
    *(ulong *)(this + 0x50) = uVar1;
    uVar4 = lVar6 + 1;
  }
  *(_func_void_event_ios_base_ptr_int **)(*(long *)(this + 0x38) + lVar6 * 8) = param_1;
  *(int *)(*(long *)(this + 0x40) + lVar6 * 4) = param_2;
  *(ulong *)(this + 0x48) = uVar4;
  return;
}


// ===== 001aed8c  std::__ndk1::ios_base::~ios_base =====

/* std::__ndk1::ios_base::~ios_base() */

void __thiscall std::__ndk1::ios_base::~ios_base(ios_base *this)

{
  ~ios_base(this);
  operator_delete(this);
  return;
}


// ===== 001aedb0  std::__ndk1::ios_base::clear =====

/* std::__ndk1::ios_base::clear(unsigned int) */

void __thiscall std::__ndk1::ios_base::clear(ios_base *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(long *)(this + 0x28) == 0 | param_1;
  *(uint *)(this + 0x20) = uVar1;
  if ((*(uint *)(this + 0x24) & uVar1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001aedec  FUN_001aedec =====

void FUN_001aedec(undefined8 param_1)

{
  int iVar1;
  system_error *psVar2;
  
  psVar2 = (system_error *)__cxa_allocate_exception(0x20);
  if (((DAT_00214d38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214d38), iVar1 != 0)) {
    std::__ndk1::error_category::error_category((error_category *)&DAT_00214d30);
    DAT_00214d30 = &PTR__error_category_00209c00;
    __cxa_atexit(PTR__error_category_0020f8f8,&DAT_00214d30,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00214d38);
  }
                    /* try { // try from 001aee6c to 001aee83 has its CatchHandler @ 001aeeac */
  std::__ndk1::system_error::system_error(psVar2,1,&DAT_00214d30,param_1);
  *(undefined **)psVar2 = PTR_vtable_0020f900 + 0x10;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(psVar2,PTR_PTR_0020f910,PTR__failure_0020f918);
}


// ===== 001aeec0  std::__ndk1::ios_base::init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::ios_base::init(void*) */

void __thiscall std::__ndk1::ios_base::init(ios_base *this,void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_001462d0;
  *(undefined8 *)(this + 0x18) = _UNK_001462d8;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 8) = 0x1002;
  *(void **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(uint *)(this + 0x20) = (uint)(param_1 == (void *)0x0);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  locale::locale((locale *)(this + 0x30));
  return;
}


// ===== 001aef08  std::__ndk1::ios_base::move =====

/* std::__ndk1::ios_base::move(std::__ndk1::ios_base&) */

void __thiscall std::__ndk1::ios_base::move(ios_base *this,ios_base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = 0;
  locale::locale((locale *)(this + 0x30),(locale *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined8 *)(this + 0x58) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x78) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


// ===== 001aef90  std::__ndk1::ios_base::swap =====

/* std::__ndk1::ios_base::swap(std::__ndk1::ios_base&) */

void __thiscall std::__ndk1::ios_base::swap(ios_base *this,ios_base *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  locale alStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar3 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar1 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  locale::locale(alStack_50,(locale *)(this + 0x30));
  locale::operator=((locale *)(this + 0x30),(locale *)(param_1 + 0x30));
  locale::operator=((locale *)(param_1 + 0x30),alStack_50);
  locale::~locale(alStack_50);
  uVar3 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(this + 0x48);
  uVar4 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(this + 0x58);
  uVar4 = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(this + 0x70);
  uVar4 = *(undefined8 *)(this + 0x68);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  uVar3 = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af0dc  std::__ndk1::ios_base::sync_with_stdio =====

/* std::__ndk1::ios_base::sync_with_stdio(bool) */

undefined1 std::__ndk1::ios_base::sync_with_stdio(bool param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_00214a40;
  DAT_00214a40 = param_1;
  return uVar1;
}


// ===== 001af0f4  FUN_001af0f4 =====

void FUN_001af0f4(error_category *param_1)

{
  std::__ndk1::error_category::~error_category(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001af118  std::uncaught_exception =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exception() */

bool std::uncaught_exception(void)

{
  int iVar1;
  
  iVar1 = __cxa_uncaught_exceptions();
  return 0 < iVar1;
}


// ===== 001af134  std::uncaught_exceptions =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exceptions() */

void std::uncaught_exceptions(void)

{
  (*(code *)PTR___cxa_uncaught_exceptions_00210208)();
  return;
}


// ===== 001af138  std::exception_ptr::~exception_ptr =====

/* std::exception_ptr::~exception_ptr() */

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
  __cxa_decrement_exception_refcount(*(undefined8 *)this);
  return;
}


// ===== 001af140  std::exception_ptr::exception_ptr =====

/* std::exception_ptr::exception_ptr(std::exception_ptr const&) */

void __thiscall std::exception_ptr::exception_ptr(exception_ptr *this,exception_ptr *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)this = uVar1;
  __cxa_increment_exception_refcount(uVar1);
  return;
}


// ===== 001af150  std::exception_ptr::operator= =====

/* std::exception_ptr::TEMPNAMEPLACEHOLDERVALUE(std::exception_ptr const&) */

exception_ptr * __thiscall std::exception_ptr::operator=(exception_ptr *this,exception_ptr *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    __cxa_increment_exception_refcount();
    __cxa_decrement_exception_refcount(*(undefined8 *)this);
    *(undefined8 *)this = *(undefined8 *)param_1;
  }
  return this;
}


// ===== 001af198  std::nested_exception::nested_exception =====

/* std::nested_exception::nested_exception() */

void __thiscall std::nested_exception::nested_exception(nested_exception *this)

{
  undefined8 uVar1;
  
  *(undefined **)this = PTR_vtable_0020f920 + 0x10;
  uVar1 = __cxa_current_primary_exception();
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


// ===== 001af1cc  std::current_exception =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::current_exception() */

void std::current_exception(void)

{
  undefined8 uVar1;
  undefined8 *in_x8;
  
  uVar1 = __cxa_current_primary_exception();
  *in_x8 = uVar1;
  return;
}


// ===== 001af1f0  std::nested_exception::~nested_exception =====

/* std::nested_exception::~nested_exception() */

void __thiscall std::nested_exception::~nested_exception(nested_exception *this)

{
  *(undefined **)this = PTR_vtable_0020f920 + 0x10;
  __cxa_decrement_exception_refcount(*(undefined8 *)(this + 8));
  return;
}


// ===== 001af20c  std::nested_exception::~nested_exception =====

/* std::nested_exception::~nested_exception() */

void __thiscall std::nested_exception::~nested_exception(nested_exception *this)

{
  *(undefined **)this = PTR_vtable_0020f920 + 0x10;
  __cxa_decrement_exception_refcount(*(undefined8 *)(this + 8));
  operator_delete(this);
  return;
}


// ===== 001af244  std::nested_exception::rethrow_nested =====

/* std::nested_exception::rethrow_nested() const */

void __thiscall std::nested_exception::rethrow_nested(nested_exception *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  
  lVar3 = *(long *)(this + 8);
  __cxa_decrement_exception_refcount(0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  uVar2 = *(undefined8 *)(this + 8);
  local_28 = uVar2;
  __cxa_increment_exception_refcount(uVar2);
                    /* try { // try from 001af27c to 001af283 has its CatchHandler @ 001af284 */
  uVar1 = rethrow_exception(&local_28);
                    /* catch() { ... } // from try @ 001af27c with catch @ 001af284 */
  __cxa_decrement_exception_refcount(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar1);
}


// ===== 001af298  std::rethrow_exception =====

/* std::rethrow_exception(std::exception_ptr) */

void std::rethrow_exception(undefined8 *param_1)

{
  __cxa_rethrow_primary_exception(*param_1);
                    /* WARNING: Subroutine does not return */
  terminate();
}


// ===== 001af2ac  std::__ndk1::collate<char>::~collate =====

/* std::__ndk1::collate<char>::~collate() */

void __thiscall std::__ndk1::collate<char>::~collate(collate<char> *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 001af2b0  std::__ndk1::collate<char>::~collate =====

/* std::__ndk1::collate<char>::~collate() */

void __thiscall std::__ndk1::collate<char>::~collate(collate<char> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001af2d4  std::__ndk1::collate<char>::do_compare =====

/* std::__ndk1::collate<char>::do_compare(char const*, char const*, char const*, char const*) const
    */

ulong __thiscall
std::__ndk1::collate<char>::do_compare
          (collate<char> *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  if (param_3 != param_4) {
    do {
      if (param_2 == param_1) {
        return 0xffffffff;
      }
      if ((byte)*param_1 < (byte)*param_3) {
        return 0xffffffff;
      }
      if ((byte)*param_3 < (byte)*param_1) {
        return 1;
      }
      param_3 = (char *)((byte *)param_3 + 1);
      param_1 = (char *)((byte *)param_1 + 1);
    } while (param_4 != param_3);
  }
  return (ulong)(param_1 != param_2);
}


// ===== 001af328  std::__ndk1::collate<char>::do_transform =====

/* std::__ndk1::collate<char>::do_transform(char const*, char const*) const */

char * std::__ndk1::collate<char>::do_transform(char *param_1,char *param_2)

{
  char *pcVar1;
  char *in_x2;
  ulong *in_x8;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = (long)in_x2 - (long)param_2;
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    pcVar5 = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar7 << 1);
  }
  else {
    uVar6 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pcVar5 = (char *)operator_new(uVar6);
    in_x8[1] = uVar7;
    in_x8[2] = (ulong)pcVar5;
    *in_x8 = uVar6 | 1;
    param_1 = pcVar5;
  }
  if (param_2 != in_x2) {
    pcVar4 = pcVar5;
    if (0x1f < uVar7) {
      uVar3 = uVar7 & 0xffffffffffffffe0;
      pcVar4 = pcVar5 + 0x10;
      pcVar5 = pcVar5 + uVar3;
      pcVar2 = param_2 + 0x10;
      uVar6 = uVar3;
      do {
        pcVar1 = pcVar2 + -8;
        uVar8 = *(undefined8 *)(pcVar2 + -0x10);
        uVar10 = *(undefined8 *)(pcVar2 + 8);
        uVar9 = *(undefined8 *)pcVar2;
        uVar6 = uVar6 - 0x20;
        pcVar2 = pcVar2 + 0x20;
        *(undefined8 *)(pcVar4 + -8) = *(undefined8 *)pcVar1;
        *(undefined8 *)(pcVar4 + -0x10) = uVar8;
        *(undefined8 *)(pcVar4 + 8) = uVar10;
        *(undefined8 *)pcVar4 = uVar9;
        pcVar4 = pcVar4 + 0x20;
      } while (uVar6 != 0);
      param_2 = param_2 + uVar3;
      pcVar4 = pcVar5;
      if (uVar7 == uVar3) goto LAB_001af3f0;
    }
    do {
      pcVar2 = param_2 + 1;
      pcVar5 = pcVar4 + 1;
      *pcVar4 = *param_2;
      param_2 = pcVar2;
      pcVar4 = pcVar5;
    } while (in_x2 != pcVar2);
  }
LAB_001af3f0:
  *pcVar5 = '\0';
  return param_1;
}


// ===== 001af410  std::__ndk1::collate<char>::do_hash =====

/* std::__ndk1::collate<char>::do_hash(char const*, char const*) const */

ulong __thiscall
std::__ndk1::collate<char>::do_hash(collate<char> *this,char *param_1,char *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  
  if (param_1 != param_2) {
    uVar1 = 0;
    do {
      pbVar2 = (byte *)param_1 + 1;
      uVar1 = (ulong)(byte)*param_1 + uVar1 * 0x10;
      uVar3 = uVar1 & 0xf000000000000000;
      uVar1 = (uVar3 | uVar3 >> 0x38) ^ uVar1;
      param_1 = (char *)pbVar2;
    } while ((byte *)param_2 != pbVar2);
    return uVar1;
  }
  return 0;
}


// ===== 001af444  std::__ndk1::collate<wchar_t>::~collate =====

/* std::__ndk1::collate<wchar_t>::~collate() */

void __thiscall std::__ndk1::collate<wchar_t>::~collate(collate<wchar_t> *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 001af448  std::__ndk1::collate<wchar_t>::~collate =====

/* std::__ndk1::collate<wchar_t>::~collate() */

void __thiscall std::__ndk1::collate<wchar_t>::~collate(collate<wchar_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001af46c  std::__ndk1::collate<wchar_t>::do_compare =====

/* std::__ndk1::collate<wchar_t>::do_compare(wchar_t const*, wchar_t const*, wchar_t const*, wchar_t
   const*) const */

ulong __thiscall
std::__ndk1::collate<wchar_t>::do_compare
          (collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  if (param_3 != param_4) {
    do {
      if (param_2 == param_1) {
        return 0xffffffff;
      }
      if ((uint)*param_1 < (uint)*param_3) {
        return 0xffffffff;
      }
      if ((uint)*param_3 < (uint)*param_1) {
        return 1;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_4 != param_3);
  }
  return (ulong)(param_1 != param_2);
}


// ===== 001af4c0  std::__ndk1::collate<wchar_t>::do_transform =====

/* std::__ndk1::collate<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

wchar_t * std::__ndk1::collate<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t *in_x2;
  ulong *in_x8;
  ulong uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = (long)in_x2 - (long)param_2;
  uVar7 = (long)uVar6 >> 2;
  if (0x3fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 5) {
    pwVar5 = (wchar_t *)((long)in_x8 + 4);
    *(byte *)in_x8 = (byte)(uVar6 >> 1) & 0xfe;
  }
  else {
    if (uVar7 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar2 = uVar7 + 4 & 0xfffffffffffffffc;
    pwVar5 = (wchar_t *)operator_new(uVar2 << 2);
    in_x8[1] = uVar7;
    in_x8[2] = (ulong)pwVar5;
    *in_x8 = uVar2 | 1;
    param_1 = pwVar5;
  }
  if (param_2 != in_x2) {
    pwVar3 = pwVar5;
    if (0x1b < uVar6 - 4) {
      uVar6 = (uVar6 - 4 >> 2) + 1;
      uVar2 = uVar6 & 0x7ffffffffffffff8;
      pwVar3 = pwVar5 + 4;
      pwVar5 = pwVar5 + uVar2;
      pwVar4 = param_2 + 4;
      uVar7 = uVar2;
      do {
        pwVar1 = pwVar4 + -2;
        uVar8 = *(undefined8 *)(pwVar4 + -4);
        uVar10 = *(undefined8 *)(pwVar4 + 2);
        uVar9 = *(undefined8 *)pwVar4;
        uVar7 = uVar7 - 8;
        pwVar4 = pwVar4 + 8;
        *(undefined8 *)(pwVar3 + -2) = *(undefined8 *)pwVar1;
        *(undefined8 *)(pwVar3 + -4) = uVar8;
        *(undefined8 *)(pwVar3 + 2) = uVar10;
        *(undefined8 *)pwVar3 = uVar9;
        pwVar3 = pwVar3 + 8;
      } while (uVar7 != 0);
      param_2 = param_2 + uVar2;
      pwVar3 = pwVar5;
      if (uVar6 == uVar2) goto LAB_001af5ac;
    }
    do {
      pwVar4 = param_2 + 1;
      pwVar5 = pwVar3 + 1;
      *pwVar3 = *param_2;
      param_2 = pwVar4;
      pwVar3 = pwVar5;
    } while (in_x2 != pwVar4);
  }
LAB_001af5ac:
  *pwVar5 = L'\0';
  return param_1;
}


// ===== 001af5d8  std::__ndk1::collate<wchar_t>::do_hash =====

/* std::__ndk1::collate<wchar_t>::do_hash(wchar_t const*, wchar_t const*) const */

ulong __thiscall
std::__ndk1::collate<wchar_t>::do_hash(collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  ulong uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  
  if (param_1 != param_2) {
    uVar1 = 0;
    do {
      pwVar2 = param_1 + 1;
      uVar1 = (ulong)(uint)*param_1 + uVar1 * 0x10;
      uVar3 = uVar1 & 0xf000000000000000;
      uVar1 = (uVar3 | uVar3 >> 0x38) ^ uVar1;
      param_1 = pwVar2;
    } while (param_2 != pwVar2);
    return uVar1;
  }
  return 0;
}


// ===== 001af60c  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, bool&) const */

undefined8 __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,undefined1 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  __shared_count *local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined **local_90;
  undefined *local_88;
  undefined *puStack_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_a0 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_88 = (undefined *)0xffffffffffffffff;
    uVar4 = (**(code **)(*(long *)this + 0x20))(this,param_2,param_3,param_4,param_5,&local_88);
    local_a0 = uVar4;
    if (local_88 == (undefined *)0x1) {
      *param_6 = 1;
    }
    else if (local_88 == (undefined *)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
  }
  else {
    ios_base::getloc();
    puVar3 = PTR___init_0020f928;
    puVar2 = PTR_id_0020f840;
    local_78 = (void *)0x0;
    local_88 = PTR_id_0020f840;
    puStack_80 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020f840 != -1) {
      local_90 = &local_88;
      local_98 = &local_90;
                    /* try { // try from 001af6d4 to 001af6eb has its CatchHandler @ 001af868 */
      __call_once((ulong *)PTR_id_0020f840,&local_98,FUN_001db064);
    }
    if (((ulong)(*(long *)(local_a8 + 0x18) - *(long *)(local_a8 + 0x10) >> 3) <=
         (long)*(int *)(puVar2 + 8) - 1U) ||
       (lVar6 = *(long *)(*(long *)(local_a8 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
       lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001af858 to 001af85b has its CatchHandler @ 001af868 */
      FUN_0017cb1c();
    }
    __shared_count::__release_shared(local_a8);
    ios_base::getloc();
    puVar2 = PTR_id_0020f930;
    local_78 = (void *)0x0;
    local_88 = PTR_id_0020f930;
    puStack_80 = puVar3;
    if (*(long *)PTR_id_0020f930 != -1) {
      local_90 = &local_88;
      local_98 = &local_90;
                    /* try { // try from 001af74c to 001af763 has its CatchHandler @ 001af864 */
      __call_once((ulong *)PTR_id_0020f930,&local_98,FUN_001db064);
    }
    if (((ulong)(*(long *)(local_a8 + 0x18) - *(long *)(local_a8 + 0x10) >> 3) <=
         (long)*(int *)(puVar2 + 8) - 1U) ||
       (plVar7 = *(long **)(*(long *)(local_a8 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
       plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001af85c to 001af85f has its CatchHandler @ 001af864 */
      FUN_0017cb1c();
    }
    __shared_count::__release_shared(local_a8);
                    /* try { // try from 001af794 to 001af7a3 has its CatchHandler @ 001af8c0 */
    (**(code **)(*plVar7 + 0x30))(&local_88,plVar7);
                    /* try { // try from 001af7b0 to 001af7b7 has its CatchHandler @ 001af8a4 */
    (**(code **)(*plVar7 + 0x38))(local_70,plVar7);
                    /* try { // try from 001af7c0 to 001af7db has its CatchHandler @ 001af880 */
    ppuVar5 = (undefined **)FUN_001af8c4(&local_a0,param_3,&local_88,&local_58,lVar6,param_5,1);
    uVar4 = local_a0;
    *param_6 = ppuVar5 == &local_88;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (((ulong)local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af8c4  FUN_001af8c4 =====

byte * FUN_001af8c4(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  char *__ptr;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  ulong __size;
  long *plVar15;
  long local_f0;
  char acStack_d4 [100];
  long local_70;
  
  lVar3 = tpidr_el0;
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  local_70 = *(long *)(lVar3 + 0x28);
  if (__size < 0x65) {
    __ptr = (char *)0x0;
    pcVar14 = acStack_d4;
  }
  else {
    __ptr = (char *)malloc(__size);
    pcVar14 = __ptr;
    if (__ptr == (char *)0x0) {
                    /* try { // try from 001afd38 to 001afd3b has its CatchHandler @ 001afd3c */
      std::__throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 001afd38 with catch @ 001afd3c */
      FUN_00200e50();
    }
  }
  if (param_3 == param_4) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    pbVar10 = param_3;
    pcVar11 = pcVar14;
    do {
      if ((*pbVar10 & 1) == 0) {
        if (*pbVar10 >> 1 != 0) goto LAB_001af964;
LAB_001af988:
        __size = __size - 1;
        local_f0 = local_f0 + 1;
        *pcVar11 = '\x02';
      }
      else {
        if (*(long *)(pbVar10 + 8) == 0) goto LAB_001af988;
LAB_001af964:
        *pcVar11 = '\x01';
      }
      pbVar10 = pbVar10 + 0x18;
      pcVar11 = pcVar11 + 1;
    } while (param_4 != pbVar10);
  }
  uVar1 = 0;
  while( true ) {
    uVar12 = uVar1;
    plVar15 = (long *)*param_1;
    if ((plVar15 != (long *)0x0) && (plVar15[3] == plVar15[4])) {
                    /* try { // try from 001afa18 to 001afa47 has its CatchHandler @ 001afd4c */
      iVar7 = (**(code **)(*plVar15 + 0x48))(plVar15);
      if (iVar7 == -1) {
        plVar15 = (long *)0x0;
        *param_1 = 0;
      }
      else {
        plVar15 = (long *)*param_1;
      }
    }
    plVar13 = plVar15;
    if ((param_2 != (long *)0x0) && (param_2[3] == param_2[4])) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar2 = (long *)0x0;
      if (iVar7 != -1) {
        plVar2 = param_2;
      }
      plVar13 = (long *)*param_1;
      param_2 = plVar2;
    }
    if ((__size == 0) || ((plVar15 == (long *)0x0) == (param_2 == (long *)0x0))) break;
    if ((byte *)plVar13[3] == (byte *)plVar13[4]) {
                    /* try { // try from 001afa98 to 001afa9f has its CatchHandler @ 001afd50 */
      uVar6 = (**(code **)(*plVar13 + 0x48))(plVar13);
    }
    else {
      uVar6 = (uint)*(byte *)plVar13[3];
    }
    if ((param_7 & 1) == 0) {
                    /* try { // try from 001af9c4 to 001af9cf has its CatchHandler @ 001afd50 */
      uVar6 = (**(code **)(*param_5 + 0x18))(param_5,uVar6);
    }
    uVar1 = uVar12 + 1;
    if (param_3 != param_4) {
      bVar4 = false;
      pcVar11 = pcVar14;
      pbVar10 = param_3;
      do {
        if (*pcVar11 == '\x01') {
          if ((*pbVar10 & 1) == 0) {
            pbVar8 = pbVar10 + 1;
          }
          else {
            pbVar8 = *(byte **)(pbVar10 + 0x10);
          }
          bVar5 = pbVar8[uVar12];
          if ((param_7 & 1) == 0) {
                    /* try { // try from 001afb24 to 001afb2f has its CatchHandler @ 001afd48 */
            bVar5 = (**(code **)(*param_5 + 0x18))(param_5);
          }
          if ((uVar6 & 0xff) == (uint)bVar5) {
            if ((*pbVar10 & 1) == 0) {
              uVar9 = (ulong)(*pbVar10 >> 1);
            }
            else {
              uVar9 = *(ulong *)(pbVar10 + 8);
            }
            if (uVar9 == uVar1) {
              *pcVar11 = '\x02';
              __size = __size - 1;
              local_f0 = local_f0 + 1;
            }
            bVar4 = true;
          }
          else {
            __size = __size - 1;
            *pcVar11 = '\0';
          }
        }
        pbVar10 = pbVar10 + 0x18;
        pcVar11 = pcVar11 + 1;
      } while (param_4 != pbVar10);
      if (bVar4) {
        plVar15 = (long *)*param_1;
        if (plVar15[3] == plVar15[4]) {
                    /* try { // try from 001afbbc to 001afbbf has its CatchHandler @ 001afd40 */
          (**(code **)(*plVar15 + 0x50))();
        }
        else {
          plVar15[3] = plVar15[3] + 1;
        }
        pbVar10 = param_3;
        pcVar11 = pcVar14;
        if (1 < local_f0 + __size) {
          do {
            if (*pcVar11 == '\x02') {
              if ((*pbVar10 & 1) == 0) {
                uVar12 = (ulong)(*pbVar10 >> 1);
              }
              else {
                uVar12 = *(ulong *)(pbVar10 + 8);
              }
              if (uVar12 != uVar1) {
                local_f0 = local_f0 + -1;
                *pcVar11 = '\0';
              }
            }
            pbVar10 = pbVar10 + 0x18;
            pcVar11 = pcVar11 + 1;
          } while (param_4 != pbVar10);
        }
      }
    }
  }
  if ((plVar13 == (long *)0x0) || (plVar13[3] != plVar13[4])) {
joined_r0x001afc34:
    if (param_2 == (long *)0x0) goto LAB_001afd28;
LAB_001afc38:
                    /* try { // try from 001afc4c to 001afcff has its CatchHandler @ 001afd44 */
    if ((param_2[3] == param_2[4]) && (iVar7 = (**(code **)(*param_2 + 0x48))(param_2), iVar7 == -1)
       ) goto LAB_001afd28;
    if (plVar13 == (long *)0x0) goto LAB_001afc70;
  }
  else {
    iVar7 = (**(code **)(*plVar13 + 0x48))(plVar13);
    if (iVar7 == -1) {
      plVar13 = (long *)0x0;
      *param_1 = 0;
      goto joined_r0x001afc34;
    }
    plVar13 = (long *)*param_1;
    if (param_2 != (long *)0x0) goto LAB_001afc38;
LAB_001afd28:
    if (plVar13 != (long *)0x0) goto LAB_001afc70;
  }
  *param_6 = *param_6 | 2;
LAB_001afc70:
  if (param_3 != param_4) {
    do {
      if (*pcVar14 == '\x02') goto joined_r0x001afce8;
      param_3 = param_3 + 0x18;
      pcVar14 = pcVar14 + 1;
    } while (param_4 != param_3);
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x001afce8:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


// ===== 001afd6c  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, long&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_signed<long>_00210250)();
  return;
}


// ===== 001afd70  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_signed<long> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_signed<long>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, unsigned int&, long&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_signed<long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_174;
  uint *local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  basic_string_conflict local_148 [8];
  ulong local_140;
  void *local_138;
  char local_130 [4];
  uint local_12c [40];
  ios_base aiStack_8c [28];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar6 = 8;
  }
  else if (uVar1 == 8) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 10;
  }
  __num_get<char>::__stage2_int_prep(param_4,aiStack_8c,local_130,(char *)param_4);
  local_160 = 0;
  local_158 = 0;
  local_150 = (char *)0x0;
                    /* try { // try from 001afe0c to 001afe1f has its CatchHandler @ 001b00c8 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  local_170 = local_12c;
  pcVar10 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    pcVar10 = local_150;
  }
  local_174 = 0;
  local_168 = pcVar10;
LAB_001afe54:
  plVar8 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001afeb0;
LAB_001afe68:
                    /* try { // try from 001afe7c to 001afea3 has its CatchHandler @ 001b00d4 */
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_001afeb0;
    if (plVar8 != (long *)0x0) goto LAB_001aff94;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar8 = (long *)0x0;
    if (iVar5 != -1) {
      plVar8 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001afe68;
LAB_001afeb0:
    param_3 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_001aff94;
  }
  uVar11 = local_158;
  if ((local_160 & 1) == 0) {
    uVar11 = local_160 >> 1 & 0x7f;
  }
  if (local_168 == pcVar10 + uVar11) {
                    /* try { // try from 001afee0 to 001aff0f has its CatchHandler @ 001b00d0 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_160 & 1) != 0) {
      uVar2 = (local_160 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_160 | 1);
    if ((local_160 & 1) != 0) {
      pcVar10 = local_150;
    }
    local_168 = pcVar10 + uVar11;
  }
  if ((char *)plVar8[3] == (char *)plVar8[4]) {
                    /* try { // try from 001aff44 to 001aff8f has its CatchHandler @ 001b00d4 */
    cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
  }
  else {
    cVar4 = *(char *)plVar8[3];
  }
  iVar5 = __num_get<char>::__stage2_int_loop
                    (cVar4,iVar6,pcVar10,&local_168,&local_174,local_130[0],local_148,local_12c,
                     &local_170,(char *)aiStack_8c);
  if (iVar5 != 0) goto LAB_001aff94;
  param_2 = plVar8;
  if (plVar8[3] == plVar8[4]) {
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else {
    plVar8[3] = plVar8[3] + 1;
  }
  goto LAB_001afe54;
LAB_001aff94:
  uVar11 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar11 = local_140;
  }
  if ((uVar11 != 0) && ((long)local_170 - (long)local_12c < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 001affd4 to 001b00af has its CatchHandler @ 001b00cc */
  uVar7 = FUN_001db154(pcVar10,local_168,param_5,iVar6);
  *param_6 = uVar7;
  __check_grouping(local_148,local_12c,local_170,param_5);
  plVar9 = plVar8;
  if ((plVar8 == (long *)0x0) || (plVar8[3] != plVar8[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b0014;
LAB_001b00bc:
    if (plVar9 != (long *)0x0) goto LAB_001b0048;
  }
  else {
    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar9 = (long *)0x0;
    if (iVar6 != -1) {
      plVar9 = plVar8;
    }
    if (param_3 == (long *)0x0) goto LAB_001b00bc;
LAB_001b0014:
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_001b00bc;
    if (plVar9 == (long *)0x0) goto LAB_001b0048;
  }
  *param_5 = *param_5 | 2;
LAB_001b0048:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}


// ===== 001b0110  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, long long&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_signed<long_long>_00210270)();
  return;
}


// ===== 001b0114  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_signed<long_long> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_signed<long long>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, long long&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_signed<long_long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_174;
  uint *local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  basic_string_conflict local_148 [8];
  ulong local_140;
  void *local_138;
  char local_130 [4];
  uint local_12c [40];
  ios_base aiStack_8c [28];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar6 = 8;
  }
  else if (uVar1 == 8) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 10;
  }
  __num_get<char>::__stage2_int_prep(param_4,aiStack_8c,local_130,(char *)param_4);
  local_160 = 0;
  local_158 = 0;
  local_150 = (char *)0x0;
                    /* try { // try from 001b01b0 to 001b01c3 has its CatchHandler @ 001b046c */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  local_170 = local_12c;
  pcVar10 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    pcVar10 = local_150;
  }
  local_174 = 0;
  local_168 = pcVar10;
LAB_001b01f8:
  plVar8 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b0254;
LAB_001b020c:
                    /* try { // try from 001b0220 to 001b0247 has its CatchHandler @ 001b0478 */
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_001b0254;
    if (plVar8 != (long *)0x0) goto LAB_001b0338;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar8 = (long *)0x0;
    if (iVar5 != -1) {
      plVar8 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b020c;
LAB_001b0254:
    param_3 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_001b0338;
  }
  uVar11 = local_158;
  if ((local_160 & 1) == 0) {
    uVar11 = local_160 >> 1 & 0x7f;
  }
  if (local_168 == pcVar10 + uVar11) {
                    /* try { // try from 001b0284 to 001b02b3 has its CatchHandler @ 001b0474 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_160 & 1) != 0) {
      uVar2 = (local_160 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_160 | 1);
    if ((local_160 & 1) != 0) {
      pcVar10 = local_150;
    }
    local_168 = pcVar10 + uVar11;
  }
  if ((char *)plVar8[3] == (char *)plVar8[4]) {
                    /* try { // try from 001b02e8 to 001b0333 has its CatchHandler @ 001b0478 */
    cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
  }
  else {
    cVar4 = *(char *)plVar8[3];
  }
  iVar5 = __num_get<char>::__stage2_int_loop
                    (cVar4,iVar6,pcVar10,&local_168,&local_174,local_130[0],local_148,local_12c,
                     &local_170,(char *)aiStack_8c);
  if (iVar5 != 0) goto LAB_001b0338;
  param_2 = plVar8;
  if (plVar8[3] == plVar8[4]) {
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else {
    plVar8[3] = plVar8[3] + 1;
  }
  goto LAB_001b01f8;
LAB_001b0338:
  uVar11 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar11 = local_140;
  }
  if ((uVar11 != 0) && ((long)local_170 - (long)local_12c < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 001b0378 to 001b0453 has its CatchHandler @ 001b0470 */
  uVar7 = FUN_001db29c(pcVar10,local_168,param_5,iVar6);
  *param_6 = uVar7;
  __check_grouping(local_148,local_12c,local_170,param_5);
  plVar9 = plVar8;
  if ((plVar8 == (long *)0x0) || (plVar8[3] != plVar8[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b03b8;
LAB_001b0460:
    if (plVar9 != (long *)0x0) goto LAB_001b03ec;
  }
  else {
    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar9 = (long *)0x0;
    if (iVar6 != -1) {
      plVar9 = plVar8;
    }
    if (param_3 == (long *)0x0) goto LAB_001b0460;
LAB_001b03b8:
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_001b0460;
    if (plVar9 == (long *)0x0) goto LAB_001b03ec;
  }
  *param_5 = *param_5 | 2;
LAB_001b03ec:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}


// ===== 001b04b4  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, unsigned short&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_short>_00210278)();
  return;
}


// ===== 001b04b8  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_unsigned<unsigned_short> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_unsigned<unsigned short>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned short&) const
    */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_short>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined2 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_174;
  uint *local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  basic_string_conflict local_148 [8];
  ulong local_140;
  void *local_138;
  char local_130 [4];
  uint local_12c [40];
  ios_base aiStack_8c [28];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar7 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar7 = 8;
  }
  else if (uVar1 == 8) {
    iVar7 = 0x10;
  }
  else {
    iVar7 = 10;
  }
  __num_get<char>::__stage2_int_prep(param_4,aiStack_8c,local_130,(char *)param_4);
  local_160 = 0;
  local_158 = 0;
  local_150 = (char *)0x0;
                    /* try { // try from 001b0554 to 001b0567 has its CatchHandler @ 001b0810 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  local_170 = local_12c;
  pcVar10 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    pcVar10 = local_150;
  }
  local_174 = 0;
  local_168 = pcVar10;
LAB_001b059c:
  plVar8 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b05f8;
LAB_001b05b0:
                    /* try { // try from 001b05c4 to 001b05eb has its CatchHandler @ 001b081c */
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_001b05f8;
    if (plVar8 != (long *)0x0) goto LAB_001b06dc;
  }
  else {
    iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar8 = (long *)0x0;
    if (iVar6 != -1) {
      plVar8 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b05b0;
LAB_001b05f8:
    param_3 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_001b06dc;
  }
  uVar11 = local_158;
  if ((local_160 & 1) == 0) {
    uVar11 = local_160 >> 1 & 0x7f;
  }
  if (local_168 == pcVar10 + uVar11) {
                    /* try { // try from 001b0628 to 001b0657 has its CatchHandler @ 001b0818 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_160 & 1) != 0) {
      uVar2 = (local_160 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_160 | 1);
    if ((local_160 & 1) != 0) {
      pcVar10 = local_150;
    }
    local_168 = pcVar10 + uVar11;
  }
  if ((char *)plVar8[3] == (char *)plVar8[4]) {
                    /* try { // try from 001b068c to 001b06d7 has its CatchHandler @ 001b081c */
    cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
  }
  else {
    cVar4 = *(char *)plVar8[3];
  }
  iVar6 = __num_get<char>::__stage2_int_loop
                    (cVar4,iVar7,pcVar10,&local_168,&local_174,local_130[0],local_148,local_12c,
                     &local_170,(char *)aiStack_8c);
  if (iVar6 != 0) goto LAB_001b06dc;
  param_2 = plVar8;
  if (plVar8[3] == plVar8[4]) {
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else {
    plVar8[3] = plVar8[3] + 1;
  }
  goto LAB_001b059c;
LAB_001b06dc:
  uVar11 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar11 = local_140;
  }
  if ((uVar11 != 0) && ((long)local_170 - (long)local_12c < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 001b071c to 001b07f7 has its CatchHandler @ 001b0814 */
  uVar5 = FUN_001db3e4(pcVar10,local_168,param_5,iVar7);
  *param_6 = uVar5;
  __check_grouping(local_148,local_12c,local_170,param_5);
  plVar9 = plVar8;
  if ((plVar8 == (long *)0x0) || (plVar8[3] != plVar8[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b075c;
LAB_001b0804:
    if (plVar9 != (long *)0x0) goto LAB_001b0790;
  }
  else {
    iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar9 = (long *)0x0;
    if (iVar7 != -1) {
      plVar9 = plVar8;
    }
    if (param_3 == (long *)0x0) goto LAB_001b0804;
LAB_001b075c:
    if ((param_3[3] == param_3[4]) && (iVar7 = (**(code **)(*param_3 + 0x48))(param_3), iVar7 == -1)
       ) goto LAB_001b0804;
    if (plVar9 == (long *)0x0) goto LAB_001b0790;
  }
  *param_5 = *param_5 | 2;
LAB_001b0790:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}


// ===== 001b0858  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, unsigned int&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_int>_00210280)();
  return;
}


// ===== 001b085c  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_unsigned<unsigned_int> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_unsigned<unsigned int>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned int&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_int>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined4 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_174;
  uint *local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  basic_string_conflict local_148 [8];
  ulong local_140;
  void *local_138;
  char local_130 [4];
  uint local_12c [40];
  ios_base aiStack_8c [28];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar7 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar7 = 8;
  }
  else if (uVar1 == 8) {
    iVar7 = 0x10;
  }
  else {
    iVar7 = 10;
  }
  __num_get<char>::__stage2_int_prep(param_4,aiStack_8c,local_130,(char *)param_4);
  local_160 = 0;
  local_158 = 0;
  local_150 = (char *)0x0;
                    /* try { // try from 001b08f8 to 001b090b has its CatchHandler @ 001b0bb4 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  local_170 = local_12c;
  pcVar10 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    pcVar10 = local_150;
  }
  local_174 = 0;
  local_168 = pcVar10;
LAB_001b0940:
  plVar8 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b099c;
LAB_001b0954:
                    /* try { // try from 001b0968 to 001b098f has its CatchHandler @ 001b0bc0 */
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_001b099c;
    if (plVar8 != (long *)0x0) goto LAB_001b0a80;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar8 = (long *)0x0;
    if (iVar5 != -1) {
      plVar8 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b0954;
LAB_001b099c:
    param_3 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_001b0a80;
  }
  uVar11 = local_158;
  if ((local_160 & 1) == 0) {
    uVar11 = local_160 >> 1 & 0x7f;
  }
  if (local_168 == pcVar10 + uVar11) {
                    /* try { // try from 001b09cc to 001b09fb has its CatchHandler @ 001b0bbc */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_160 & 1) != 0) {
      uVar2 = (local_160 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_160 | 1);
    if ((local_160 & 1) != 0) {
      pcVar10 = local_150;
    }
    local_168 = pcVar10 + uVar11;
  }
  if ((char *)plVar8[3] == (char *)plVar8[4]) {
                    /* try { // try from 001b0a30 to 001b0a7b has its CatchHandler @ 001b0bc0 */
    cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
  }
  else {
    cVar4 = *(char *)plVar8[3];
  }
  iVar5 = __num_get<char>::__stage2_int_loop
                    (cVar4,iVar7,pcVar10,&local_168,&local_174,local_130[0],local_148,local_12c,
                     &local_170,(char *)aiStack_8c);
  if (iVar5 != 0) goto LAB_001b0a80;
  param_2 = plVar8;
  if (plVar8[3] == plVar8[4]) {
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else {
    plVar8[3] = plVar8[3] + 1;
  }
  goto LAB_001b0940;
LAB_001b0a80:
  uVar11 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar11 = local_140;
  }
  if ((uVar11 != 0) && ((long)local_170 - (long)local_12c < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 001b0ac0 to 001b0b9b has its CatchHandler @ 001b0bb8 */
  uVar6 = FUN_001db560(pcVar10,local_168,param_5,iVar7);
  *param_6 = uVar6;
  __check_grouping(local_148,local_12c,local_170,param_5);
  plVar9 = plVar8;
  if ((plVar8 == (long *)0x0) || (plVar8[3] != plVar8[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b0b00;
LAB_001b0ba8:
    if (plVar9 != (long *)0x0) goto LAB_001b0b34;
  }
  else {
    iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar9 = (long *)0x0;
    if (iVar7 != -1) {
      plVar9 = plVar8;
    }
    if (param_3 == (long *)0x0) goto LAB_001b0ba8;
LAB_001b0b00:
    if ((param_3[3] == param_3[4]) && (iVar7 = (**(code **)(*param_3 + 0x48))(param_3), iVar7 == -1)
       ) goto LAB_001b0ba8;
    if (plVar9 == (long *)0x0) goto LAB_001b0b34;
  }
  *param_5 = *param_5 | 2;
LAB_001b0b34:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}


// ===== 001b0bfc  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, unsigned long&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_long>_00210288)();
  return;
}


// ===== 001b0c00  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_unsigned<unsigned_long> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_unsigned<unsigned long>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned long&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_174;
  uint *local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  basic_string_conflict local_148 [8];
  ulong local_140;
  void *local_138;
  char local_130 [4];
  uint local_12c [40];
  ios_base aiStack_8c [28];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar6 = 8;
  }
  else if (uVar1 == 8) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 10;
  }
  __num_get<char>::__stage2_int_prep(param_4,aiStack_8c,local_130,(char *)param_4);
  local_160 = 0;
  local_158 = 0;
  local_150 = (char *)0x0;
                    /* try { // try from 001b0c9c to 001b0caf has its CatchHandler @ 001b0f58 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  local_170 = local_12c;
  pcVar10 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    pcVar10 = local_150;
  }
  local_174 = 0;
  local_168 = pcVar10;
LAB_001b0ce4:
  plVar8 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b0d40;
LAB_001b0cf8:
                    /* try { // try from 001b0d0c to 001b0d33 has its CatchHandler @ 001b0f64 */
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_001b0d40;
    if (plVar8 != (long *)0x0) goto LAB_001b0e24;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar8 = (long *)0x0;
    if (iVar5 != -1) {
      plVar8 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b0cf8;
LAB_001b0d40:
    param_3 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_001b0e24;
  }
  uVar11 = local_158;
  if ((local_160 & 1) == 0) {
    uVar11 = local_160 >> 1 & 0x7f;
  }
  if (local_168 == pcVar10 + uVar11) {
                    /* try { // try from 001b0d70 to 001b0d9f has its CatchHandler @ 001b0f60 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_160 & 1) != 0) {
      uVar2 = (local_160 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_160 | 1);
    if ((local_160 & 1) != 0) {
      pcVar10 = local_150;
    }
    local_168 = pcVar10 + uVar11;
  }
  if ((char *)plVar8[3] == (char *)plVar8[4]) {
                    /* try { // try from 001b0dd4 to 001b0e1f has its CatchHandler @ 001b0f64 */
    cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
  }
  else {
    cVar4 = *(char *)plVar8[3];
  }
  iVar5 = __num_get<char>::__stage2_int_loop
                    (cVar4,iVar6,pcVar10,&local_168,&local_174,local_130[0],local_148,local_12c,
                     &local_170,(char *)aiStack_8c);
  if (iVar5 != 0) goto LAB_001b0e24;
  param_2 = plVar8;
  if (plVar8[3] == plVar8[4]) {
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else {
    plVar8[3] = plVar8[3] + 1;
  }
  goto LAB_001b0ce4;
LAB_001b0e24:
  uVar11 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar11 = local_140;
  }
  if ((uVar11 != 0) && ((long)local_170 - (long)local_12c < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 001b0e64 to 001b0f3f has its CatchHandler @ 001b0f5c */
  uVar7 = FUN_001db6dc(pcVar10,local_168,param_5,iVar6);
  *param_6 = uVar7;
  __check_grouping(local_148,local_12c,local_170,param_5);
  plVar9 = plVar8;
  if ((plVar8 == (long *)0x0) || (plVar8[3] != plVar8[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b0ea4;
LAB_001b0f4c:
    if (plVar9 != (long *)0x0) goto LAB_001b0ed8;
  }
  else {
    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar9 = (long *)0x0;
    if (iVar6 != -1) {
      plVar9 = plVar8;
    }
    if (param_3 == (long *)0x0) goto LAB_001b0f4c;
LAB_001b0ea4:
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_001b0f4c;
    if (plVar9 == (long *)0x0) goto LAB_001b0ed8;
  }
  *param_5 = *param_5 | 2;
LAB_001b0ed8:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}


// ===== 001b0fa0  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, unsigned long long&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_long_long>_00210290)();
  return;
}


// ===== 001b0fa4  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_unsigned<unsigned_long_long> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_unsigned<unsigned long long>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned long long&)
   const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_long_long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_174;
  uint *local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  basic_string_conflict local_148 [8];
  ulong local_140;
  void *local_138;
  char local_130 [4];
  uint local_12c [40];
  ios_base aiStack_8c [28];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar6 = 8;
  }
  else if (uVar1 == 8) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 10;
  }
  __num_get<char>::__stage2_int_prep(param_4,aiStack_8c,local_130,(char *)param_4);
  local_160 = 0;
  local_158 = 0;
  local_150 = (char *)0x0;
                    /* try { // try from 001b1040 to 001b1053 has its CatchHandler @ 001b12fc */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  local_170 = local_12c;
  pcVar10 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    pcVar10 = local_150;
  }
  local_174 = 0;
  local_168 = pcVar10;
LAB_001b1088:
  plVar8 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b10e4;
LAB_001b109c:
                    /* try { // try from 001b10b0 to 001b10d7 has its CatchHandler @ 001b1308 */
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_001b10e4;
    if (plVar8 != (long *)0x0) goto LAB_001b11c8;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar8 = (long *)0x0;
    if (iVar5 != -1) {
      plVar8 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b109c;
LAB_001b10e4:
    param_3 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_001b11c8;
  }
  uVar11 = local_158;
  if ((local_160 & 1) == 0) {
    uVar11 = local_160 >> 1 & 0x7f;
  }
  if (local_168 == pcVar10 + uVar11) {
                    /* try { // try from 001b1114 to 001b1143 has its CatchHandler @ 001b1304 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_160 & 1) != 0) {
      uVar2 = (local_160 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_160 | 1);
    if ((local_160 & 1) != 0) {
      pcVar10 = local_150;
    }
    local_168 = pcVar10 + uVar11;
  }
  if ((char *)plVar8[3] == (char *)plVar8[4]) {
                    /* try { // try from 001b1178 to 001b11c3 has its CatchHandler @ 001b1308 */
    cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
  }
  else {
    cVar4 = *(char *)plVar8[3];
  }
  iVar5 = __num_get<char>::__stage2_int_loop
                    (cVar4,iVar6,pcVar10,&local_168,&local_174,local_130[0],local_148,local_12c,
                     &local_170,(char *)aiStack_8c);
  if (iVar5 != 0) goto LAB_001b11c8;
  param_2 = plVar8;
  if (plVar8[3] == plVar8[4]) {
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else {
    plVar8[3] = plVar8[3] + 1;
  }
  goto LAB_001b1088;
LAB_001b11c8:
  uVar11 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar11 = local_140;
  }
  if ((uVar11 != 0) && ((long)local_170 - (long)local_12c < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 001b1208 to 001b12e3 has its CatchHandler @ 001b1300 */
  uVar7 = FUN_001db848(pcVar10,local_168,param_5,iVar6);
  *param_6 = uVar7;
  __check_grouping(local_148,local_12c,local_170,param_5);
  plVar9 = plVar8;
  if ((plVar8 == (long *)0x0) || (plVar8[3] != plVar8[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b1248;
LAB_001b12f0:
    if (plVar9 != (long *)0x0) goto LAB_001b127c;
  }
  else {
    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar9 = (long *)0x0;
    if (iVar6 != -1) {
      plVar9 = plVar8;
    }
    if (param_3 == (long *)0x0) goto LAB_001b12f0;
LAB_001b1248:
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_001b12f0;
    if (plVar9 == (long *)0x0) goto LAB_001b127c;
  }
  *param_5 = *param_5 | 2;
LAB_001b127c:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}


// ===== 001b1344  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, float&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_floating_point<float>_00210298)();
  return;
}


// ===== 001b1348  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_floating_point<float> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_floating_point<float>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, float&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_floating_point<float>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined4 *param_6)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  undefined4 uVar9;
  char local_184 [4];
  bool local_180 [4];
  uint local_17c;
  uint *local_178;
  char *local_170;
  ulong local_168;
  ulong local_160;
  char *local_158;
  basic_string_conflict local_150 [8];
  ulong local_148;
  void *local_140;
  char local_138 [4];
  char local_134 [4];
  uint local_130 [40];
  ios_base aiStack_90 [32];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __num_get<char>::__stage2_float_prep(param_4,aiStack_90,local_134,local_138,(char *)param_5);
  local_168 = 0;
  local_160 = 0;
  local_158 = (char *)0x0;
                    /* try { // try from 001b13a8 to 001b13bb has its CatchHandler @ 001b1684 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_168,0x16,'\0');
  pcVar8 = (char *)((ulong)&local_168 | 1);
  if ((local_168 & 1) != 0) {
    pcVar8 = local_158;
  }
  local_17c = 0;
  local_180[0] = true;
  local_184[0] = 'E';
  local_178 = local_130;
  local_170 = pcVar8;
LAB_001b1404:
  plVar5 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b1460;
LAB_001b1418:
                    /* try { // try from 001b142c to 001b1453 has its CatchHandler @ 001b1690 */
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_001b1460;
    if (plVar5 != (long *)0x0) goto LAB_001b1548;
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar5 = (long *)0x0;
    if (iVar4 != -1) {
      plVar5 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b1418;
LAB_001b1460:
    param_3 = (long *)0x0;
    if (plVar5 == (long *)0x0) goto LAB_001b1548;
  }
  uVar7 = local_160;
  if ((local_168 & 1) == 0) {
    uVar7 = local_168 >> 1 & 0x7f;
  }
  if (local_170 == pcVar8 + uVar7) {
                    /* try { // try from 001b1490 to 001b14bf has its CatchHandler @ 001b168c */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_168,uVar7 << 1,'\0');
    uVar1 = 0x16;
    if ((local_168 & 1) != 0) {
      uVar1 = (local_168 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_168,uVar1,'\0');
    pcVar8 = (char *)((ulong)&local_168 | 1);
    if ((local_168 & 1) != 0) {
      pcVar8 = local_158;
    }
    local_170 = pcVar8 + uVar7;
  }
  if ((char *)plVar5[3] == (char *)plVar5[4]) {
                    /* try { // try from 001b14f4 to 001b1543 has its CatchHandler @ 001b1690 */
    cVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  else {
    cVar3 = *(char *)plVar5[3];
  }
  iVar4 = __num_get<char>::__stage2_float_loop
                    (cVar3,local_180,local_184,pcVar8,&local_170,local_134[0],local_138[0],local_150
                     ,local_130,&local_178,&local_17c,(char *)aiStack_90);
  if (iVar4 != 0) goto LAB_001b1548;
  param_2 = plVar5;
  if (plVar5[3] == plVar5[4]) {
    (**(code **)(*plVar5 + 0x50))(plVar5);
  }
  else {
    plVar5[3] = plVar5[3] + 1;
  }
  goto LAB_001b1404;
LAB_001b1548:
  uVar7 = (ulong)((byte)local_150[0] >> 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar7 = local_148;
  }
  if (((local_180[0] != false) && (uVar7 != 0)) && ((long)local_178 - (long)local_130 < 0xa0)) {
    *local_178 = local_17c;
    local_178 = local_178 + 1;
  }
                    /* try { // try from 001b1594 to 001b166b has its CatchHandler @ 001b1688 */
  uVar9 = FUN_001db9b4(pcVar8,local_170,param_5);
  *param_6 = uVar9;
  __check_grouping(local_150,local_130,local_178,param_5);
  plVar6 = plVar5;
  if ((plVar5 == (long *)0x0) || (plVar5[3] != plVar5[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b15d0;
LAB_001b1678:
    if (plVar6 != (long *)0x0) goto LAB_001b1604;
  }
  else {
    iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
    plVar6 = (long *)0x0;
    if (iVar4 != -1) {
      plVar6 = plVar5;
    }
    if (param_3 == (long *)0x0) goto LAB_001b1678;
LAB_001b15d0:
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_001b1678;
    if (plVar6 == (long *)0x0) goto LAB_001b1604;
  }
  *param_5 = *param_5 | 2;
LAB_001b1604:
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}


// ===== 001b16cc  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, double&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_floating_point<double>_002102b0)();
  return;
}


// ===== 001b16d0  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_floating_point<double> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_floating_point<double>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, double&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_floating_point<double>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  char local_184 [4];
  bool local_180 [4];
  uint local_17c;
  uint *local_178;
  char *local_170;
  ulong local_168;
  ulong local_160;
  char *local_158;
  basic_string_conflict local_150 [8];
  ulong local_148;
  void *local_140;
  char local_138 [4];
  char local_134 [4];
  uint local_130 [40];
  ios_base aiStack_90 [32];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __num_get<char>::__stage2_float_prep(param_4,aiStack_90,local_134,local_138,(char *)param_5);
  local_168 = 0;
  local_160 = 0;
  local_158 = (char *)0x0;
                    /* try { // try from 001b1730 to 001b1743 has its CatchHandler @ 001b1a0c */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_168,0x16,'\0');
  pcVar8 = (char *)((ulong)&local_168 | 1);
  if ((local_168 & 1) != 0) {
    pcVar8 = local_158;
  }
  local_17c = 0;
  local_180[0] = true;
  local_184[0] = 'E';
  local_178 = local_130;
  local_170 = pcVar8;
LAB_001b178c:
  plVar5 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b17e8;
LAB_001b17a0:
                    /* try { // try from 001b17b4 to 001b17db has its CatchHandler @ 001b1a18 */
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_001b17e8;
    if (plVar5 != (long *)0x0) goto LAB_001b18d0;
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar5 = (long *)0x0;
    if (iVar4 != -1) {
      plVar5 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b17a0;
LAB_001b17e8:
    param_3 = (long *)0x0;
    if (plVar5 == (long *)0x0) goto LAB_001b18d0;
  }
  uVar7 = local_160;
  if ((local_168 & 1) == 0) {
    uVar7 = local_168 >> 1 & 0x7f;
  }
  if (local_170 == pcVar8 + uVar7) {
                    /* try { // try from 001b1818 to 001b1847 has its CatchHandler @ 001b1a14 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_168,uVar7 << 1,'\0');
    uVar1 = 0x16;
    if ((local_168 & 1) != 0) {
      uVar1 = (local_168 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_168,uVar1,'\0');
    pcVar8 = (char *)((ulong)&local_168 | 1);
    if ((local_168 & 1) != 0) {
      pcVar8 = local_158;
    }
    local_170 = pcVar8 + uVar7;
  }
  if ((char *)plVar5[3] == (char *)plVar5[4]) {
                    /* try { // try from 001b187c to 001b18cb has its CatchHandler @ 001b1a18 */
    cVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  else {
    cVar3 = *(char *)plVar5[3];
  }
  iVar4 = __num_get<char>::__stage2_float_loop
                    (cVar3,local_180,local_184,pcVar8,&local_170,local_134[0],local_138[0],local_150
                     ,local_130,&local_178,&local_17c,(char *)aiStack_90);
  if (iVar4 != 0) goto LAB_001b18d0;
  param_2 = plVar5;
  if (plVar5[3] == plVar5[4]) {
    (**(code **)(*plVar5 + 0x50))(plVar5);
  }
  else {
    plVar5[3] = plVar5[3] + 1;
  }
  goto LAB_001b178c;
LAB_001b18d0:
  uVar7 = (ulong)((byte)local_150[0] >> 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar7 = local_148;
  }
  if (((local_180[0] != false) && (uVar7 != 0)) && ((long)local_178 - (long)local_130 < 0xa0)) {
    *local_178 = local_17c;
    local_178 = local_178 + 1;
  }
                    /* try { // try from 001b191c to 001b19f3 has its CatchHandler @ 001b1a10 */
  uVar9 = FUN_001dbad8(pcVar8,local_170,param_5);
  *param_6 = uVar9;
  __check_grouping(local_150,local_130,local_178,param_5);
  plVar6 = plVar5;
  if ((plVar5 == (long *)0x0) || (plVar5[3] != plVar5[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b1958;
LAB_001b1a00:
    if (plVar6 != (long *)0x0) goto LAB_001b198c;
  }
  else {
    iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
    plVar6 = (long *)0x0;
    if (iVar4 != -1) {
      plVar6 = plVar5;
    }
    if (param_3 == (long *)0x0) goto LAB_001b1a00;
LAB_001b1958:
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_001b1a00;
    if (plVar6 == (long *)0x0) goto LAB_001b198c;
  }
  *param_5 = *param_5 | 2;
LAB_001b198c:
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}


// ===== 001b1a54  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, long double&) const */

void std::__ndk1::
     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (void)

{
  (*(code *)PTR___do_get_floating_point<long_double>_002102b8)();
  return;
}


// ===== 001b1a58  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_floating_point<long_double> =====

/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_floating_point<long double>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, long double&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_floating_point<long_double>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined1 (*param_6) [16])

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  char local_184 [4];
  bool local_180 [4];
  uint local_17c;
  uint *local_178;
  char *local_170;
  ulong local_168;
  ulong local_160;
  char *local_158;
  basic_string_conflict local_150 [8];
  ulong local_148;
  void *local_140;
  char local_138 [4];
  char local_134 [4];
  uint local_130 [40];
  ios_base aiStack_90 [32];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __num_get<char>::__stage2_float_prep(param_4,aiStack_90,local_134,local_138,(char *)param_5);
  local_168 = 0;
  local_160 = 0;
  local_158 = (char *)0x0;
                    /* try { // try from 001b1ab8 to 001b1acb has its CatchHandler @ 001b1d94 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_168,0x16,'\0');
  pcVar8 = (char *)((ulong)&local_168 | 1);
  if ((local_168 & 1) != 0) {
    pcVar8 = local_158;
  }
  local_17c = 0;
  local_180[0] = true;
  local_184[0] = 'E';
  local_178 = local_130;
  local_170 = pcVar8;
LAB_001b1b14:
  plVar5 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b1b70;
LAB_001b1b28:
                    /* try { // try from 001b1b3c to 001b1b63 has its CatchHandler @ 001b1da0 */
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_001b1b70;
    if (plVar5 != (long *)0x0) goto LAB_001b1c58;
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar5 = (long *)0x0;
    if (iVar4 != -1) {
      plVar5 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b1b28;
LAB_001b1b70:
    param_3 = (long *)0x0;
    if (plVar5 == (long *)0x0) goto LAB_001b1c58;
  }
  uVar7 = local_160;
  if ((local_168 & 1) == 0) {
    uVar7 = local_168 >> 1 & 0x7f;
  }
  if (local_170 == pcVar8 + uVar7) {
                    /* try { // try from 001b1ba0 to 001b1bcf has its CatchHandler @ 001b1d9c */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_168,uVar7 << 1,'\0');
    uVar1 = 0x16;
    if ((local_168 & 1) != 0) {
      uVar1 = (local_168 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_168,uVar1,'\0');
    pcVar8 = (char *)((ulong)&local_168 | 1);
    if ((local_168 & 1) != 0) {
      pcVar8 = local_158;
    }
    local_170 = pcVar8 + uVar7;
  }
  if ((char *)plVar5[3] == (char *)plVar5[4]) {
                    /* try { // try from 001b1c04 to 001b1c53 has its CatchHandler @ 001b1da0 */
    cVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  else {
    cVar3 = *(char *)plVar5[3];
  }
  iVar4 = __num_get<char>::__stage2_float_loop
                    (cVar3,local_180,local_184,pcVar8,&local_170,local_134[0],local_138[0],local_150
                     ,local_130,&local_178,&local_17c,(char *)aiStack_90);
  if (iVar4 != 0) goto LAB_001b1c58;
  param_2 = plVar5;
  if (plVar5[3] == plVar5[4]) {
    (**(code **)(*plVar5 + 0x50))(plVar5);
  }
  else {
    plVar5[3] = plVar5[3] + 1;
  }
  goto LAB_001b1b14;
LAB_001b1c58:
  uVar7 = (ulong)((byte)local_150[0] >> 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar7 = local_148;
  }
  if (((local_180[0] != false) && (uVar7 != 0)) && ((long)local_178 - (long)local_130 < 0xa0)) {
    *local_178 = local_17c;
    local_178 = local_178 + 1;
  }
                    /* try { // try from 001b1ca4 to 001b1d7b has its CatchHandler @ 001b1d98 */
  auVar9 = FUN_001dbbfc(pcVar8,local_170,param_5);
  *param_6 = auVar9;
  __check_grouping(local_150,local_130,local_178,param_5);
  plVar6 = plVar5;
  if ((plVar5 == (long *)0x0) || (plVar5[3] != plVar5[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b1ce0;
LAB_001b1d88:
    if (plVar6 != (long *)0x0) goto LAB_001b1d14;
  }
  else {
    iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
    plVar6 = (long *)0x0;
    if (iVar4 != -1) {
      plVar6 = plVar5;
    }
    if (param_3 == (long *)0x0) goto LAB_001b1d88;
LAB_001b1ce0:
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_001b1d88;
    if (plVar6 == (long *)0x0) goto LAB_001b1d14;
  }
  *param_5 = *param_5 | 2;
LAB_001b1d14:
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}


// ===== 001b1ddc  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, void*&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
      undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  __shared_count *p_Var5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  uint local_174;
  undefined **local_170;
  ulong local_168;
  undefined ***local_160;
  __shared_count *local_158;
  ulong local_150 [2];
  void *local_140;
  undefined ***local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  char acStack_8c [28];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_150[0] = 0;
  local_150[1] = 0;
  local_140 = (void *)0x0;
                    /* try { // try from 001b1e24 to 001b1e2b has its CatchHandler @ 001b21e4 */
  ios_base::getloc();
  p_Var5 = local_158;
  puVar4 = PTR_id_0020f840;
  local_120 = 0;
  local_130 = PTR_id_0020f840;
  puStack_128 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_170 = &local_130;
    local_138 = &local_170;
                    /* try { // try from 001b1e64 to 001b1eb7 has its CatchHandler @ 001b21f4 */
    __call_once((ulong *)PTR_id_0020f840,&local_138,FUN_001db064);
  }
  lVar2 = *(long *)(p_Var5 + 0x10);
  if (((ulong)(*(long *)(p_Var5 + 0x18) - lVar2 >> 3) <= (long)*(int *)(puVar4 + 8) - 1U) ||
     (plVar8 = *(long **)(lVar2 + ((long)*(int *)(puVar4 + 8) - 1U) * 8), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b21c4 to 001b21c7 has its CatchHandler @ 001b21f4 */
    FUN_0017cb1c();
  }
  (**(code **)(*plVar8 + 0x40))(plVar8,PTR___src_0020f938,PTR___src_0020f938 + 0x1a,acStack_8c);
  __shared_count::__release_shared(local_158);
  local_170 = (undefined **)0x0;
  local_168 = 0;
  local_160 = (undefined ***)0x0;
                    /* try { // try from 001b1ed0 to 001b1ee3 has its CatchHandler @ 001b21e0 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170,0x16,'\0');
  pppuVar12 = (undefined ***)((ulong)&local_170 | 1);
  local_158 = (__shared_count *)&local_130;
  pppuVar11 = pppuVar12;
  if (((ulong)local_170 & 1) != 0) {
    pppuVar11 = local_160;
  }
  local_174 = 0;
  local_138 = pppuVar11;
LAB_001b1f20:
  plVar8 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_001b1f7c;
LAB_001b1f34:
                    /* try { // try from 001b1f48 to 001b1f6f has its CatchHandler @ 001b2218 */
    if ((param_3[3] == param_3[4]) && (iVar7 = (**(code **)(*param_3 + 0x48))(param_3), iVar7 == -1)
       ) goto LAB_001b1f7c;
    if (plVar8 != (long *)0x0) goto LAB_001b2060;
  }
  else {
    iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar8 = (long *)0x0;
    if (iVar7 != -1) {
      plVar8 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_001b1f34;
LAB_001b1f7c:
    param_3 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_001b2060;
  }
  uVar10 = local_168;
  if (((ulong)local_170 & 1) == 0) {
    uVar10 = (ulong)local_170 >> 1 & 0x7f;
  }
  if (local_138 == (undefined ***)((long)pppuVar11 + uVar10)) {
                    /* try { // try from 001b1fac to 001b1fdb has its CatchHandler @ 001b2214 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_170,uVar10 << 1,'\0');
    uVar1 = 0x16;
    if (((ulong)local_170 & 1) != 0) {
      uVar1 = ((ulong)local_170 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_170,uVar1,'\0');
    pppuVar11 = pppuVar12;
    if (((ulong)local_170 & 1) != 0) {
      pppuVar11 = local_160;
    }
    local_138 = (undefined ***)((long)pppuVar11 + uVar10);
  }
  if ((char *)plVar8[3] == (char *)plVar8[4]) {
                    /* try { // try from 001b2010 to 001b205b has its CatchHandler @ 001b2218 */
    cVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
  }
  else {
    cVar6 = *(char *)plVar8[3];
  }
  iVar7 = __num_get<char>::__stage2_int_loop
                    (cVar6,0x10,(char *)pppuVar11,(char **)&local_138,&local_174,'\0',
                     (basic_string_conflict *)local_150,(uint *)&local_130,(uint **)&local_158,
                     acStack_8c);
  if (iVar7 != 0) goto LAB_001b2060;
  param_2 = plVar8;
  if (plVar8[3] == plVar8[4]) {
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else {
    plVar8[3] = plVar8[3] + 1;
  }
  goto LAB_001b1f20;
LAB_001b2060:
                    /* try { // try from 001b2068 to 001b2173 has its CatchHandler @ 001b2210 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170,(long)local_138 - (long)pppuVar11,'\0');
  if (((ulong)local_170 & 1) != 0) {
    pppuVar12 = local_160;
  }
  if (((DAT_00214ea0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00214ea0), iVar7 != 0)) {
                    /* try { // try from 001b2198 to 001b21ab has its CatchHandler @ 001b21cc */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar7 = __libcpp_sscanf_l((char *)pppuVar12,(__locale_t *)DAT_00214e98,"%p",param_6);
  if (iVar7 != 1) {
    *param_5 = 4;
  }
  plVar9 = plVar8;
  if ((plVar8 == (long *)0x0) || (plVar8[3] != plVar8[4])) {
    if (param_3 != (long *)0x0) goto LAB_001b20d8;
LAB_001b2180:
    if (plVar9 != (long *)0x0) goto LAB_001b210c;
  }
  else {
    iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar9 = (long *)0x0;
    if (iVar7 != -1) {
      plVar9 = plVar8;
    }
    if (param_3 == (long *)0x0) goto LAB_001b2180;
LAB_001b20d8:
    if ((param_3[3] == param_3[4]) && (iVar7 = (**(code **)(*param_3 + 0x48))(param_3), iVar7 == -1)
       ) goto LAB_001b2180;
    if (plVar9 == (long *)0x0) goto LAB_001b210c;
  }
  *param_5 = *param_5 | 2;
LAB_001b210c:
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}


// ===== 001b2254  std::__ndk1::__num_get<char>::__stage2_int_loop =====

/* std::__ndk1::__num_get<char>::__stage2_int_loop(char, int, char*, char*&, unsigned int&, char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int*, unsigned int*&, char*) */

undefined8
std::__ndk1::__num_get<char>::__stage2_int_loop
          (char param_1,int param_2,char *param_3,char **param_4,uint *param_5,char param_6,
          basic_string_conflict *param_7,uint *param_8,uint **param_9,char *param_10)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  long lVar8;
  
  puVar3 = PTR___src_0020f938;
  pcVar5 = *param_4;
  if (pcVar5 == param_3) {
    if (param_10[0x18] == param_1) {
      cVar4 = '+';
LAB_001b22f4:
      *param_4 = param_3 + 1;
      *param_3 = cVar4;
      *param_5 = 0;
      return 0;
    }
    if (param_10[0x19] == param_1) {
      cVar4 = '-';
      goto LAB_001b22f4;
    }
  }
  uVar1 = (ulong)((byte)*param_7 >> 1);
  if (((byte)*param_7 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + 8);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    puVar6 = *param_9;
    if ((long)puVar6 - (long)param_8 < 0xa0) {
      uVar2 = *param_5;
      *param_9 = puVar6 + 1;
      *puVar6 = uVar2;
      *param_5 = 0;
      return 0;
    }
    return 0;
  }
  pcVar7 = param_10 + 0x1a;
  if (*param_10 == param_1) {
    lVar8 = 0;
LAB_001b2504:
    pcVar7 = param_10 + lVar8;
  }
  else {
    if (param_10[1] == param_1) {
      lVar8 = 1;
      goto LAB_001b2504;
    }
    if (param_10[2] == param_1) {
      lVar8 = 2;
      goto LAB_001b2504;
    }
    if (param_10[3] == param_1) {
      lVar8 = 3;
      goto LAB_001b2504;
    }
    if (param_10[4] == param_1) {
      lVar8 = 4;
      goto LAB_001b2504;
    }
    if (param_10[5] == param_1) {
      lVar8 = 5;
      goto LAB_001b2504;
    }
    if (param_10[6] == param_1) {
      lVar8 = 6;
      goto LAB_001b2504;
    }
    if (param_10[7] == param_1) {
      lVar8 = 7;
      goto LAB_001b2504;
    }
    if (param_10[8] == param_1) {
      lVar8 = 8;
      goto LAB_001b2504;
    }
    if (param_10[9] == param_1) {
      lVar8 = 9;
      goto LAB_001b2504;
    }
    if (param_10[10] == param_1) {
      lVar8 = 10;
      goto LAB_001b2504;
    }
    if (param_10[0xb] == param_1) {
      lVar8 = 0xb;
      goto LAB_001b2504;
    }
    if (param_10[0xc] == param_1) {
      lVar8 = 0xc;
      goto LAB_001b2504;
    }
    if (param_10[0xd] == param_1) {
      lVar8 = 0xd;
      goto LAB_001b2504;
    }
    if (param_10[0xe] == param_1) {
      lVar8 = 0xe;
      goto LAB_001b2504;
    }
    if (param_10[0xf] == param_1) {
      lVar8 = 0xf;
      goto LAB_001b2504;
    }
    if (param_10[0x10] == param_1) {
      lVar8 = 0x10;
      goto LAB_001b2504;
    }
    if (param_10[0x11] == param_1) {
      lVar8 = 0x11;
      goto LAB_001b2504;
    }
    if (param_10[0x12] == param_1) {
      lVar8 = 0x12;
      goto LAB_001b2504;
    }
    if (param_10[0x13] == param_1) {
      lVar8 = 0x13;
      goto LAB_001b2504;
    }
    if (param_10[0x14] == param_1) {
      lVar8 = 0x14;
      goto LAB_001b2504;
    }
    if (param_10[0x15] == param_1) {
      lVar8 = 0x15;
      goto LAB_001b2504;
    }
    if (param_10[0x16] == param_1) {
      lVar8 = 0x16;
      goto LAB_001b2504;
    }
    if (param_10[0x17] == param_1) {
      lVar8 = 0x17;
      goto LAB_001b2504;
    }
    if (param_10[0x18] == param_1) {
      lVar8 = 0x18;
      goto LAB_001b2504;
    }
    if (param_10[0x19] == param_1) {
      lVar8 = 0x19;
      goto LAB_001b2504;
    }
  }
  lVar8 = (long)pcVar7 - (long)param_10;
  if (lVar8 < 0x18) {
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        if (0x15 < lVar8) {
          if (pcVar5 == param_3) {
            return 0xffffffff;
          }
          if (2 < (long)pcVar5 - (long)param_3) {
            return 0xffffffff;
          }
          if (pcVar5[-1] != '0') {
            return 0xffffffff;
          }
          *param_5 = 0;
          cVar4 = puVar3[lVar8];
          *param_4 = pcVar5 + 1;
          *pcVar5 = cVar4;
          return 0;
        }
        goto LAB_001b2548;
      }
      if (param_2 != 10) goto LAB_001b2548;
    }
    if (lVar8 < (long)(ulong)(uint)param_2) {
LAB_001b2548:
      cVar4 = PTR___src_0020f938[lVar8];
      *param_4 = pcVar5 + 1;
      *pcVar5 = cVar4;
      *param_5 = *param_5 + 1;
      return 0;
    }
  }
  return 0xffffffff;
}


// ===== 001b25b4  std::__ndk1::__libcpp_sscanf_l =====

/* std::__ndk1::__libcpp_sscanf_l(char const*, __locale_t*, char const*, ...) */

int std::__ndk1::__libcpp_sscanf_l(char *param_1,__locale_t *param_2,char *param_3,...)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_b8 = in_x3;
  uStack_b0 = in_x4;
  local_a8 = in_x5;
  uStack_a0 = in_x6;
  local_98 = in_x7;
  __dataset = uselocale((__locale_t)param_2);
  uStack_78 = 0xffffff80ffffffd8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_90;
  puStack_80 = auStack_c0;
  iVar2 = vsscanf(param_1,param_3,&local_90);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001b2654 to 001b265b has its CatchHandler @ 001b268c */
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b2690  std::__ndk1::__cloc =====

/* std::__ndk1::__cloc() */

__locale_t std::__ndk1::__cloc(void)

{
  int iVar1;
  
  if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001b26d0 to 001b26e3 has its CatchHandler @ 001b26f8 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  return DAT_00214e98;
}


// ===== 001b2710  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, bool&) const */

undefined8 __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get
          (num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,
          undefined1 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  __shared_count *local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined **local_90;
  undefined *local_88;
  undefined *puStack_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_a0 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_88 = (undefined *)0xffffffffffffffff;
    uVar4 = (**(code **)(*(long *)this + 0x20))(this,param_2,param_3,param_4,param_5,&local_88);
    local_a0 = uVar4;
    if (local_88 == (undefined *)0x1) {
      *param_6 = 1;
    }
    else if (local_88 == (undefined *)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
  }
  else {
    ios_base::getloc();
    puVar3 = PTR___init_0020f928;
    puVar2 = PTR_id_0020f8b8;
    local_78 = (void *)0x0;
    local_88 = PTR_id_0020f8b8;
    puStack_80 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020f8b8 != -1) {
      local_90 = &local_88;
      local_98 = &local_90;
                    /* try { // try from 001b27d8 to 001b27ef has its CatchHandler @ 001b296c */
      __call_once((ulong *)PTR_id_0020f8b8,&local_98,FUN_001db064);
    }
    if (((ulong)(*(long *)(local_a8 + 0x18) - *(long *)(local_a8 + 0x10) >> 3) <=
         (long)*(int *)(puVar2 + 8) - 1U) ||
       (lVar6 = *(long *)(*(long *)(local_a8 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
       lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b295c to 001b295f has its CatchHandler @ 001b296c */
      FUN_0017cb1c();
    }
    __shared_count::__release_shared(local_a8);
    ios_base::getloc();
    puVar2 = PTR_id_0020f940;
    local_78 = (void *)0x0;
    local_88 = PTR_id_0020f940;
    puStack_80 = puVar3;
    if (*(long *)PTR_id_0020f940 != -1) {
      local_90 = &local_88;
      local_98 = &local_90;
                    /* try { // try from 001b2850 to 001b2867 has its CatchHandler @ 001b2968 */
      __call_once((ulong *)PTR_id_0020f940,&local_98,FUN_001db064);
    }
    if (((ulong)(*(long *)(local_a8 + 0x18) - *(long *)(local_a8 + 0x10) >> 3) <=
         (long)*(int *)(puVar2 + 8) - 1U) ||
       (plVar7 = *(long **)(*(long *)(local_a8 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
       plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b2960 to 001b2963 has its CatchHandler @ 001b2968 */
      FUN_0017cb1c();
    }
    __shared_count::__release_shared(local_a8);
                    /* try { // try from 001b2898 to 001b28a7 has its CatchHandler @ 001b29c4 */
    (**(code **)(*plVar7 + 0x30))(&local_88,plVar7);
                    /* try { // try from 001b28b4 to 001b28bb has its CatchHandler @ 001b29a8 */
    (**(code **)(*plVar7 + 0x38))(local_70,plVar7);
                    /* try { // try from 001b28c4 to 001b28df has its CatchHandler @ 001b2984 */
    ppuVar5 = (undefined **)FUN_001b29c8(&local_a0,param_3,&local_88,&local_58,lVar6,param_5,1);
    uVar4 = local_a0;
    *param_6 = ppuVar5 == &local_88;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (((ulong)local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b29c8  FUN_001b29c8 =====

byte * FUN_001b29c8(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char *__ptr;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  char *pcVar14;
  ulong __size;
  long local_e0;
  char acStack_cc [100];
  long local_68;
  
  lVar1 = tpidr_el0;
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  local_68 = *(long *)(lVar1 + 0x28);
  if (__size < 0x65) {
    __ptr = (char *)0x0;
    pcVar14 = acStack_cc;
  }
  else {
    __ptr = (char *)malloc(__size);
    pcVar14 = __ptr;
    if (__ptr == (char *)0x0) {
                    /* try { // try from 001b2e34 to 001b2e37 has its CatchHandler @ 001b2e38 */
      std::__throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 001b2e34 with catch @ 001b2e38 */
      FUN_00200e50();
    }
  }
  if (param_3 == param_4) {
    local_e0 = 0;
  }
  else {
    local_e0 = 0;
    pbVar11 = param_3;
    pcVar12 = pcVar14;
    do {
      if ((*pbVar11 & 1) == 0) {
        if (*pbVar11 >> 1 != 0) goto LAB_001b2a98;
LAB_001b2a60:
        __size = __size - 1;
        local_e0 = local_e0 + 1;
        *pcVar12 = '\x02';
      }
      else {
        if (*(long *)(pbVar11 + 8) == 0) goto LAB_001b2a60;
LAB_001b2a98:
        *pcVar12 = '\x01';
      }
      pbVar11 = pbVar11 + 0x18;
      pcVar12 = pcVar12 + 1;
    } while (param_4 != pbVar11);
  }
  uVar13 = 0;
  do {
    plVar8 = (long *)*param_1;
    if (plVar8 == (long *)0x0) {
LAB_001b2b28:
      bVar4 = true;
      bVar2 = true;
      if (param_2 == (long *)0x0) goto LAB_001b2b14;
LAB_001b2b30:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        plVar8 = (long *)*param_1;
      }
      else {
        iVar7 = *(int *)param_2[3];
      }
      bVar5 = iVar7 == -1;
      plVar3 = (long *)0x0;
      if (!bVar5) {
        plVar3 = param_2;
      }
    }
    else {
      if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001b2af8 to 001b2b53 has its CatchHandler @ 001b2e48 */
        iVar7 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        iVar7 = *(int *)plVar8[3];
      }
      if (iVar7 == -1) {
        plVar8 = (long *)0x0;
        *param_1 = 0;
        goto LAB_001b2b28;
      }
      plVar8 = (long *)*param_1;
      bVar4 = plVar8 == (long *)0x0;
      bVar2 = bVar4;
      if (param_2 != (long *)0x0) goto LAB_001b2b30;
LAB_001b2b14:
      bVar5 = true;
      plVar3 = param_2;
      bVar4 = bVar2;
    }
    param_2 = plVar3;
    if ((__size == 0) || (!(bool)(bVar4 ^ bVar5))) break;
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001b2b98 to 001b2bbb has its CatchHandler @ 001b2e4c */
      iVar7 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    if ((param_7 & 1) == 0) {
      iVar7 = (**(code **)(*param_5 + 0x38))(param_5,iVar7);
    }
    uVar13 = uVar13 + 1;
    if (param_3 != param_4) {
      bVar4 = false;
      pcVar12 = pcVar14;
      pbVar11 = param_3;
      do {
        if (*pcVar12 == '\x01') {
          if ((*pbVar11 & 1) == 0) {
            pbVar9 = pbVar11 + 4;
          }
          else {
            pbVar9 = *(byte **)(pbVar11 + 0x10);
          }
          iVar6 = *(int *)(pbVar9 + uVar13 * 4 + -4);
          if ((param_7 & 1) == 0) {
                    /* try { // try from 001b2c24 to 001b2c2b has its CatchHandler @ 001b2e44 */
            iVar6 = (**(code **)(*param_5 + 0x38))();
          }
          if (iVar7 == iVar6) {
            if ((*pbVar11 & 1) == 0) {
              uVar10 = (ulong)(*pbVar11 >> 1);
            }
            else {
              uVar10 = *(ulong *)(pbVar11 + 8);
            }
            if (uVar10 == uVar13) {
              *pcVar12 = '\x02';
              __size = __size - 1;
              local_e0 = local_e0 + 1;
            }
            bVar4 = true;
          }
          else {
            __size = __size - 1;
            *pcVar12 = '\0';
          }
        }
        pbVar11 = pbVar11 + 0x18;
        pcVar12 = pcVar12 + 1;
      } while (param_4 != pbVar11);
      if (bVar4) {
        plVar8 = (long *)*param_1;
        if (plVar8[3] == plVar8[4]) {
                    /* try { // try from 001b2cb0 to 001b2cb3 has its CatchHandler @ 001b2e3c */
          (**(code **)(*plVar8 + 0x50))();
        }
        else {
          plVar8[3] = plVar8[3] + 4;
        }
        pbVar11 = param_3;
        pcVar12 = pcVar14;
        if (1 < local_e0 + __size) {
          do {
            if (*pcVar12 == '\x02') {
              if ((*pbVar11 & 1) == 0) {
                uVar10 = (ulong)(*pbVar11 >> 1);
              }
              else {
                uVar10 = *(ulong *)(pbVar11 + 8);
              }
              if (uVar10 != uVar13) {
                local_e0 = local_e0 + -1;
                *pcVar12 = '\0';
              }
            }
            pbVar11 = pbVar11 + 0x18;
            pcVar12 = pcVar12 + 1;
          } while (param_4 != pbVar11);
        }
      }
    }
  } while( true );
  if (plVar8 == (long *)0x0) {
LAB_001b2d64:
    bVar4 = true;
    if (param_2 == (long *)0x0) goto LAB_001b2d54;
LAB_001b2d6c:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    if (bVar4 != (iVar7 == -1)) goto LAB_001b2db4;
  }
  else {
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001b2d38 to 001b2d8f has its CatchHandler @ 001b2e40 */
      iVar7 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    if (iVar7 == -1) {
      *param_1 = 0;
      goto LAB_001b2d64;
    }
    bVar4 = *param_1 == 0;
    if (param_2 != (long *)0x0) goto LAB_001b2d6c;
LAB_001b2d54:
    if (!bVar4) goto LAB_001b2db4;
  }
  *param_6 = *param_6 | 2;
LAB_001b2db4:
  if (param_3 != param_4) {
    do {
      if (*pcVar14 == '\x02') goto joined_r0x001b2e28;
      param_3 = param_3 + 0x18;
      pcVar14 = pcVar14 + 1;
    } while (param_4 != param_3);
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x001b2e28:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


// ===== 001b2e68  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long&) const */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_signed<long>_002102e8)();
  return;
}


// ===== 001b2e6c  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_signed<long> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >
   >::__do_get_signed<long>(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_signed<long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  wchar_t wVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_1c4;
  uint *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string_conflict local_198 [8];
  ulong local_190;
  void *local_188;
  wchar_t local_17c;
  uint local_178 [40];
  ios_base aiStack_d8 [104];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar8 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar8 = 8;
  }
  else if (uVar1 == 8) {
    iVar8 = 0x10;
  }
  else {
    iVar8 = 10;
  }
  __num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d8,&local_17c,(wchar_t *)param_4);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (char *)0x0;
                    /* try { // try from 001b2f04 to 001b2f17 has its CatchHandler @ 001b31f8 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,0x16,'\0');
  local_1c0 = local_178;
  pcVar10 = (char *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pcVar10 = local_1a0;
  }
  local_1c4 = 0;
  local_1b8 = pcVar10;
LAB_001b2f4c:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b2f90;
LAB_001b2fc4:
    param_3 = (long *)0x0;
    if (bVar5) goto LAB_001b30a8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b2f78 to 001b2fb3 has its CatchHandler @ 001b3204 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar5 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b2fc4;
LAB_001b2f90:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (iVar7 == -1) goto LAB_001b2fc4;
    if (!bVar5) goto LAB_001b30a8;
  }
  uVar11 = local_1a8;
  if ((local_1b0 & 1) == 0) {
    uVar11 = local_1b0 >> 1 & 0x7f;
  }
  if (local_1b8 == pcVar10 + uVar11) {
                    /* try { // try from 001b2ff4 to 001b3023 has its CatchHandler @ 001b3200 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_1b0 & 1) != 0) {
      uVar2 = (local_1b0 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      pcVar10 = local_1a0;
    }
    local_1b8 = pcVar10 + uVar11;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b3058 to 001b30a3 has its CatchHandler @ 001b3204 */
    wVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar6 = *(wchar_t *)param_2[3];
  }
  iVar7 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar6,iVar8,pcVar10,&local_1b8,&local_1c4,local_17c,local_198,local_178,
                     &local_1c0,(wchar_t *)aiStack_d8);
  if (iVar7 != 0) goto LAB_001b30a8;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b2f4c;
LAB_001b30a8:
  uVar11 = (ulong)((byte)local_198[0] >> 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar11 = local_190;
  }
  if ((uVar11 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 001b30e8 to 001b317f has its CatchHandler @ 001b31fc */
  uVar9 = FUN_001db154(pcVar10,local_1b8,param_5,iVar8);
  *param_6 = uVar9;
  __check_grouping(local_198,local_178,local_1c0,param_5);
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b315c;
LAB_001b3134:
    if (!bVar5) goto LAB_001b319c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar5 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b3134;
LAB_001b315c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar8 == -1)) goto LAB_001b319c;
  }
  *param_5 = *param_5 | 2;
LAB_001b319c:
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (((byte)local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b3240  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long long&) const */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_signed<long_long>_00210300)();
  return;
}


// ===== 001b3244  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_signed<long_long> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get_signed<long
   long>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::ios_base&, unsigned int&, long long&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_signed<long_long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  wchar_t wVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_1c4;
  uint *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string_conflict local_198 [8];
  ulong local_190;
  void *local_188;
  wchar_t local_17c;
  uint local_178 [40];
  ios_base aiStack_d8 [104];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar8 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar8 = 8;
  }
  else if (uVar1 == 8) {
    iVar8 = 0x10;
  }
  else {
    iVar8 = 10;
  }
  __num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d8,&local_17c,(wchar_t *)param_4);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (char *)0x0;
                    /* try { // try from 001b32dc to 001b32ef has its CatchHandler @ 001b35d0 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,0x16,'\0');
  local_1c0 = local_178;
  pcVar10 = (char *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pcVar10 = local_1a0;
  }
  local_1c4 = 0;
  local_1b8 = pcVar10;
LAB_001b3324:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b3368;
LAB_001b339c:
    param_3 = (long *)0x0;
    if (bVar5) goto LAB_001b3480;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b3350 to 001b338b has its CatchHandler @ 001b35dc */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar5 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b339c;
LAB_001b3368:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (iVar7 == -1) goto LAB_001b339c;
    if (!bVar5) goto LAB_001b3480;
  }
  uVar11 = local_1a8;
  if ((local_1b0 & 1) == 0) {
    uVar11 = local_1b0 >> 1 & 0x7f;
  }
  if (local_1b8 == pcVar10 + uVar11) {
                    /* try { // try from 001b33cc to 001b33fb has its CatchHandler @ 001b35d8 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_1b0 & 1) != 0) {
      uVar2 = (local_1b0 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      pcVar10 = local_1a0;
    }
    local_1b8 = pcVar10 + uVar11;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b3430 to 001b347b has its CatchHandler @ 001b35dc */
    wVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar6 = *(wchar_t *)param_2[3];
  }
  iVar7 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar6,iVar8,pcVar10,&local_1b8,&local_1c4,local_17c,local_198,local_178,
                     &local_1c0,(wchar_t *)aiStack_d8);
  if (iVar7 != 0) goto LAB_001b3480;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b3324;
LAB_001b3480:
  uVar11 = (ulong)((byte)local_198[0] >> 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar11 = local_190;
  }
  if ((uVar11 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 001b34c0 to 001b3557 has its CatchHandler @ 001b35d4 */
  uVar9 = FUN_001db29c(pcVar10,local_1b8,param_5,iVar8);
  *param_6 = uVar9;
  __check_grouping(local_198,local_178,local_1c0,param_5);
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b3534;
LAB_001b350c:
    if (!bVar5) goto LAB_001b3574;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar5 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b350c;
LAB_001b3534:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar8 == -1)) goto LAB_001b3574;
  }
  *param_5 = *param_5 | 2;
LAB_001b3574:
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (((byte)local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b3618  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned short&)
   const */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_short>_00210308)();
  return;
}


// ===== 001b361c  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_unsigned<unsigned_short> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned
   short>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::ios_base&, unsigned int&, unsigned short&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_unsigned<unsigned_short>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,uint *param_5,
          undefined2 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  undefined2 uVar6;
  wchar_t wVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_1c4;
  uint *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string_conflict local_198 [8];
  ulong local_190;
  void *local_188;
  wchar_t local_17c;
  uint local_178 [40];
  ios_base aiStack_d8 [104];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar9 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar9 = 8;
  }
  else if (uVar1 == 8) {
    iVar9 = 0x10;
  }
  else {
    iVar9 = 10;
  }
  __num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d8,&local_17c,(wchar_t *)param_4);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (char *)0x0;
                    /* try { // try from 001b36b4 to 001b36c7 has its CatchHandler @ 001b39a8 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,0x16,'\0');
  local_1c0 = local_178;
  pcVar10 = (char *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pcVar10 = local_1a0;
  }
  local_1c4 = 0;
  local_1b8 = pcVar10;
LAB_001b36fc:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b3740;
LAB_001b3774:
    param_3 = (long *)0x0;
    if (bVar5) goto LAB_001b3858;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b3728 to 001b3763 has its CatchHandler @ 001b39b4 */
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar5 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b3774;
LAB_001b3740:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (iVar8 == -1) goto LAB_001b3774;
    if (!bVar5) goto LAB_001b3858;
  }
  uVar11 = local_1a8;
  if ((local_1b0 & 1) == 0) {
    uVar11 = local_1b0 >> 1 & 0x7f;
  }
  if (local_1b8 == pcVar10 + uVar11) {
                    /* try { // try from 001b37a4 to 001b37d3 has its CatchHandler @ 001b39b0 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_1b0 & 1) != 0) {
      uVar2 = (local_1b0 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      pcVar10 = local_1a0;
    }
    local_1b8 = pcVar10 + uVar11;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b3808 to 001b3853 has its CatchHandler @ 001b39b4 */
    wVar7 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar7 = *(wchar_t *)param_2[3];
  }
  iVar8 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar7,iVar9,pcVar10,&local_1b8,&local_1c4,local_17c,local_198,local_178,
                     &local_1c0,(wchar_t *)aiStack_d8);
  if (iVar8 != 0) goto LAB_001b3858;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b36fc;
LAB_001b3858:
  uVar11 = (ulong)((byte)local_198[0] >> 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar11 = local_190;
  }
  if ((uVar11 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 001b3898 to 001b392f has its CatchHandler @ 001b39ac */
  uVar6 = FUN_001db3e4(pcVar10,local_1b8,param_5,iVar9);
  *param_6 = uVar6;
  __check_grouping(local_198,local_178,local_1c0,param_5);
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b390c;
LAB_001b38e4:
    if (!bVar5) goto LAB_001b394c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar9 = *(int *)param_2[3];
    }
    bVar5 = iVar9 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b38e4;
LAB_001b390c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar9 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar9 == -1)) goto LAB_001b394c;
  }
  *param_5 = *param_5 | 2;
LAB_001b394c:
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (((byte)local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b39f0  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned int&) const
    */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_int>_00210310)();
  return;
}


// ===== 001b39f4  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_unsigned<unsigned_int> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned
   int>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::ios_base&, unsigned int&, unsigned int&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_unsigned<unsigned_int>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,uint *param_5,
          undefined4 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  wchar_t wVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_1c4;
  uint *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string_conflict local_198 [8];
  ulong local_190;
  void *local_188;
  wchar_t local_17c;
  uint local_178 [40];
  ios_base aiStack_d8 [104];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar9 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar9 = 8;
  }
  else if (uVar1 == 8) {
    iVar9 = 0x10;
  }
  else {
    iVar9 = 10;
  }
  __num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d8,&local_17c,(wchar_t *)param_4);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (char *)0x0;
                    /* try { // try from 001b3a8c to 001b3a9f has its CatchHandler @ 001b3d80 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,0x16,'\0');
  local_1c0 = local_178;
  pcVar10 = (char *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pcVar10 = local_1a0;
  }
  local_1c4 = 0;
  local_1b8 = pcVar10;
LAB_001b3ad4:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b3b18;
LAB_001b3b4c:
    param_3 = (long *)0x0;
    if (bVar5) goto LAB_001b3c30;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b3b00 to 001b3b3b has its CatchHandler @ 001b3d8c */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar5 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b3b4c;
LAB_001b3b18:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (iVar7 == -1) goto LAB_001b3b4c;
    if (!bVar5) goto LAB_001b3c30;
  }
  uVar11 = local_1a8;
  if ((local_1b0 & 1) == 0) {
    uVar11 = local_1b0 >> 1 & 0x7f;
  }
  if (local_1b8 == pcVar10 + uVar11) {
                    /* try { // try from 001b3b7c to 001b3bab has its CatchHandler @ 001b3d88 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_1b0 & 1) != 0) {
      uVar2 = (local_1b0 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      pcVar10 = local_1a0;
    }
    local_1b8 = pcVar10 + uVar11;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b3be0 to 001b3c2b has its CatchHandler @ 001b3d8c */
    wVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar6 = *(wchar_t *)param_2[3];
  }
  iVar7 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar6,iVar9,pcVar10,&local_1b8,&local_1c4,local_17c,local_198,local_178,
                     &local_1c0,(wchar_t *)aiStack_d8);
  if (iVar7 != 0) goto LAB_001b3c30;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b3ad4;
LAB_001b3c30:
  uVar11 = (ulong)((byte)local_198[0] >> 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar11 = local_190;
  }
  if ((uVar11 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 001b3c70 to 001b3d07 has its CatchHandler @ 001b3d84 */
  uVar8 = FUN_001db560(pcVar10,local_1b8,param_5,iVar9);
  *param_6 = uVar8;
  __check_grouping(local_198,local_178,local_1c0,param_5);
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b3ce4;
LAB_001b3cbc:
    if (!bVar5) goto LAB_001b3d24;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar9 = *(int *)param_2[3];
    }
    bVar5 = iVar9 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b3cbc;
LAB_001b3ce4:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar9 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar9 == -1)) goto LAB_001b3d24;
  }
  *param_5 = *param_5 | 2;
LAB_001b3d24:
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (((byte)local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b3dc8  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned long&) const
    */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_long>_00210318)();
  return;
}


// ===== 001b3dcc  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_unsigned<unsigned_long> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned
   long>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::ios_base&, unsigned int&, unsigned long&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_unsigned<unsigned_long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  wchar_t wVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_1c4;
  uint *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string_conflict local_198 [8];
  ulong local_190;
  void *local_188;
  wchar_t local_17c;
  uint local_178 [40];
  ios_base aiStack_d8 [104];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar8 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar8 = 8;
  }
  else if (uVar1 == 8) {
    iVar8 = 0x10;
  }
  else {
    iVar8 = 10;
  }
  __num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d8,&local_17c,(wchar_t *)param_4);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (char *)0x0;
                    /* try { // try from 001b3e64 to 001b3e77 has its CatchHandler @ 001b4158 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,0x16,'\0');
  local_1c0 = local_178;
  pcVar10 = (char *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pcVar10 = local_1a0;
  }
  local_1c4 = 0;
  local_1b8 = pcVar10;
LAB_001b3eac:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b3ef0;
LAB_001b3f24:
    param_3 = (long *)0x0;
    if (bVar5) goto LAB_001b4008;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b3ed8 to 001b3f13 has its CatchHandler @ 001b4164 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar5 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b3f24;
LAB_001b3ef0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (iVar7 == -1) goto LAB_001b3f24;
    if (!bVar5) goto LAB_001b4008;
  }
  uVar11 = local_1a8;
  if ((local_1b0 & 1) == 0) {
    uVar11 = local_1b0 >> 1 & 0x7f;
  }
  if (local_1b8 == pcVar10 + uVar11) {
                    /* try { // try from 001b3f54 to 001b3f83 has its CatchHandler @ 001b4160 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_1b0 & 1) != 0) {
      uVar2 = (local_1b0 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      pcVar10 = local_1a0;
    }
    local_1b8 = pcVar10 + uVar11;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b3fb8 to 001b4003 has its CatchHandler @ 001b4164 */
    wVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar6 = *(wchar_t *)param_2[3];
  }
  iVar7 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar6,iVar8,pcVar10,&local_1b8,&local_1c4,local_17c,local_198,local_178,
                     &local_1c0,(wchar_t *)aiStack_d8);
  if (iVar7 != 0) goto LAB_001b4008;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b3eac;
LAB_001b4008:
  uVar11 = (ulong)((byte)local_198[0] >> 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar11 = local_190;
  }
  if ((uVar11 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 001b4048 to 001b40df has its CatchHandler @ 001b415c */
  uVar9 = FUN_001db6dc(pcVar10,local_1b8,param_5,iVar8);
  *param_6 = uVar9;
  __check_grouping(local_198,local_178,local_1c0,param_5);
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b40bc;
LAB_001b4094:
    if (!bVar5) goto LAB_001b40fc;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar5 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b4094;
LAB_001b40bc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar8 == -1)) goto LAB_001b40fc;
  }
  *param_5 = *param_5 | 2;
LAB_001b40fc:
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (((byte)local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b41a0  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned long long&)
   const */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_long_long>_00210320)();
  return;
}


// ===== 001b41a4  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_unsigned<unsigned_long_long> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned long
   long>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::ios_base&, unsigned int&, unsigned long long&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_unsigned<unsigned_long_long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  wchar_t wVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_1c4;
  uint *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string_conflict local_198 [8];
  ulong local_190;
  void *local_188;
  wchar_t local_17c;
  uint local_178 [40];
  ios_base aiStack_d8 [104];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar8 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar8 = 8;
  }
  else if (uVar1 == 8) {
    iVar8 = 0x10;
  }
  else {
    iVar8 = 10;
  }
  __num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d8,&local_17c,(wchar_t *)param_4);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (char *)0x0;
                    /* try { // try from 001b423c to 001b424f has its CatchHandler @ 001b4530 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,0x16,'\0');
  local_1c0 = local_178;
  pcVar10 = (char *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pcVar10 = local_1a0;
  }
  local_1c4 = 0;
  local_1b8 = pcVar10;
LAB_001b4284:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b42c8;
LAB_001b42fc:
    param_3 = (long *)0x0;
    if (bVar5) goto LAB_001b43e0;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b42b0 to 001b42eb has its CatchHandler @ 001b453c */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar5 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b42fc;
LAB_001b42c8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (iVar7 == -1) goto LAB_001b42fc;
    if (!bVar5) goto LAB_001b43e0;
  }
  uVar11 = local_1a8;
  if ((local_1b0 & 1) == 0) {
    uVar11 = local_1b0 >> 1 & 0x7f;
  }
  if (local_1b8 == pcVar10 + uVar11) {
                    /* try { // try from 001b432c to 001b435b has its CatchHandler @ 001b4538 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar11 << 1,'\0');
    uVar2 = 0x16;
    if ((local_1b0 & 1) != 0) {
      uVar2 = (local_1b0 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar2,'\0');
    pcVar10 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      pcVar10 = local_1a0;
    }
    local_1b8 = pcVar10 + uVar11;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b4390 to 001b43db has its CatchHandler @ 001b453c */
    wVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar6 = *(wchar_t *)param_2[3];
  }
  iVar7 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar6,iVar8,pcVar10,&local_1b8,&local_1c4,local_17c,local_198,local_178,
                     &local_1c0,(wchar_t *)aiStack_d8);
  if (iVar7 != 0) goto LAB_001b43e0;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b4284;
LAB_001b43e0:
  uVar11 = (ulong)((byte)local_198[0] >> 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar11 = local_190;
  }
  if ((uVar11 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 001b4420 to 001b44b7 has its CatchHandler @ 001b4534 */
  uVar9 = FUN_001db848(pcVar10,local_1b8,param_5,iVar8);
  *param_6 = uVar9;
  __check_grouping(local_198,local_178,local_1c0,param_5);
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_001b4494;
LAB_001b446c:
    if (!bVar5) goto LAB_001b44d4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar5 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_001b446c;
LAB_001b4494:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar8 == -1)) goto LAB_001b44d4;
  }
  *param_5 = *param_5 | 2;
LAB_001b44d4:
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (((byte)local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b4578  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, float&) const */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_floating_point<float>_00210328)();
  return;
}


// ===== 001b457c  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_floating_point<float> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >
   >::__do_get_floating_point<float>(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, float&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_floating_point<float>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,
          wchar_t *param_5,undefined4 *param_6)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  wchar_t wVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  undefined4 uVar9;
  char local_1e4 [4];
  bool local_1e0 [4];
  uint local_1dc;
  uint *local_1d8;
  char *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  char *local_1b8;
  basic_string_conflict local_1b0 [8];
  ulong local_1a8;
  void *local_1a0;
  wchar_t local_198;
  wchar_t wStack_194;
  uint local_190 [40];
  ios_base aiStack_f0 [128];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  __num_get<wchar_t>::__stage2_float_prep(param_4,aiStack_f0,&wStack_194,&local_198,param_5);
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = (char *)0x0;
                    /* try { // try from 001b45dc to 001b45ef has its CatchHandler @ 001b48f0 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1c8,0x16,'\0');
  pcVar8 = (char *)((ulong)&local_1c8 | 1);
  if ((local_1c8 & 1) != 0) {
    pcVar8 = local_1b8;
  }
  local_1dc = 0;
  local_1e0[0] = true;
  local_1e4[0] = 'E';
  local_1d8 = local_190;
  local_1d0 = pcVar8;
LAB_001b4638:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_001b467c;
LAB_001b46b0:
    param_3 = (long *)0x0;
    if (bVar4) goto LAB_001b4794;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b4664 to 001b469f has its CatchHandler @ 001b48fc */
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar2 = (long *)0x0;
    if (!bVar4) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_001b46b0;
LAB_001b467c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (iVar6 == -1) goto LAB_001b46b0;
    if (!bVar4) goto LAB_001b4794;
  }
  uVar7 = local_1c0;
  if ((local_1c8 & 1) == 0) {
    uVar7 = local_1c8 >> 1 & 0x7f;
  }
  if (local_1d0 == pcVar8 + uVar7) {
                    /* try { // try from 001b46e0 to 001b470f has its CatchHandler @ 001b48f8 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c8,uVar7 << 1,'\0');
    uVar1 = 0x16;
    if ((local_1c8 & 1) != 0) {
      uVar1 = (local_1c8 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c8,uVar1,'\0');
    pcVar8 = (char *)((ulong)&local_1c8 | 1);
    if ((local_1c8 & 1) != 0) {
      pcVar8 = local_1b8;
    }
    local_1d0 = pcVar8 + uVar7;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b4744 to 001b478f has its CatchHandler @ 001b48fc */
    wVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar5 = *(wchar_t *)param_2[3];
  }
  iVar6 = __num_get<wchar_t>::__stage2_float_loop
                    (wVar5,local_1e0,local_1e4,pcVar8,&local_1d0,wStack_194,local_198,local_1b0,
                     local_190,&local_1d8,&local_1dc,(wchar_t *)aiStack_f0);
  if (iVar6 != 0) goto LAB_001b4794;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b4638;
LAB_001b4794:
  uVar7 = (ulong)((byte)local_1b0[0] >> 1);
  if (((byte)local_1b0[0] & 1) != 0) {
    uVar7 = local_1a8;
  }
  if (((local_1e0[0] != false) && (uVar7 != 0)) && ((long)local_1d8 - (long)local_190 < 0xa0)) {
    *local_1d8 = local_1dc;
    local_1d8 = local_1d8 + 1;
  }
                    /* try { // try from 001b47e0 to 001b4877 has its CatchHandler @ 001b48f4 */
  uVar9 = FUN_001db9b4(pcVar8,local_1d0,param_5);
  *param_6 = uVar9;
  __check_grouping(local_1b0,local_190,local_1d8,(uint *)param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_001b4854;
LAB_001b4828:
    if (!bVar4) goto LAB_001b4898;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar2 = (long *)0x0;
    if (!bVar4) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_001b4828;
LAB_001b4854:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar6 == -1)) goto LAB_001b4898;
  }
  *param_5 = *param_5 | 2;
LAB_001b4898:
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if (((byte)local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b4938  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, double&) const */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_floating_point<double>_00210340)();
  return;
}


// ===== 001b493c  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_floating_point<double> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >
   >::__do_get_floating_point<double>(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, double&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_floating_point<double>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,
          wchar_t *param_5,undefined8 *param_6)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  wchar_t wVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  char local_1e4 [4];
  bool local_1e0 [4];
  uint local_1dc;
  uint *local_1d8;
  char *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  char *local_1b8;
  basic_string_conflict local_1b0 [8];
  ulong local_1a8;
  void *local_1a0;
  wchar_t local_198;
  wchar_t wStack_194;
  uint local_190 [40];
  ios_base aiStack_f0 [128];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  __num_get<wchar_t>::__stage2_float_prep(param_4,aiStack_f0,&wStack_194,&local_198,param_5);
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = (char *)0x0;
                    /* try { // try from 001b499c to 001b49af has its CatchHandler @ 001b4cb0 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1c8,0x16,'\0');
  pcVar8 = (char *)((ulong)&local_1c8 | 1);
  if ((local_1c8 & 1) != 0) {
    pcVar8 = local_1b8;
  }
  local_1dc = 0;
  local_1e0[0] = true;
  local_1e4[0] = 'E';
  local_1d8 = local_190;
  local_1d0 = pcVar8;
LAB_001b49f8:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_001b4a3c;
LAB_001b4a70:
    param_3 = (long *)0x0;
    if (bVar4) goto LAB_001b4b54;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b4a24 to 001b4a5f has its CatchHandler @ 001b4cbc */
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar2 = (long *)0x0;
    if (!bVar4) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_001b4a70;
LAB_001b4a3c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (iVar6 == -1) goto LAB_001b4a70;
    if (!bVar4) goto LAB_001b4b54;
  }
  uVar7 = local_1c0;
  if ((local_1c8 & 1) == 0) {
    uVar7 = local_1c8 >> 1 & 0x7f;
  }
  if (local_1d0 == pcVar8 + uVar7) {
                    /* try { // try from 001b4aa0 to 001b4acf has its CatchHandler @ 001b4cb8 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c8,uVar7 << 1,'\0');
    uVar1 = 0x16;
    if ((local_1c8 & 1) != 0) {
      uVar1 = (local_1c8 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c8,uVar1,'\0');
    pcVar8 = (char *)((ulong)&local_1c8 | 1);
    if ((local_1c8 & 1) != 0) {
      pcVar8 = local_1b8;
    }
    local_1d0 = pcVar8 + uVar7;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b4b04 to 001b4b4f has its CatchHandler @ 001b4cbc */
    wVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar5 = *(wchar_t *)param_2[3];
  }
  iVar6 = __num_get<wchar_t>::__stage2_float_loop
                    (wVar5,local_1e0,local_1e4,pcVar8,&local_1d0,wStack_194,local_198,local_1b0,
                     local_190,&local_1d8,&local_1dc,(wchar_t *)aiStack_f0);
  if (iVar6 != 0) goto LAB_001b4b54;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b49f8;
LAB_001b4b54:
  uVar7 = (ulong)((byte)local_1b0[0] >> 1);
  if (((byte)local_1b0[0] & 1) != 0) {
    uVar7 = local_1a8;
  }
  if (((local_1e0[0] != false) && (uVar7 != 0)) && ((long)local_1d8 - (long)local_190 < 0xa0)) {
    *local_1d8 = local_1dc;
    local_1d8 = local_1d8 + 1;
  }
                    /* try { // try from 001b4ba0 to 001b4c37 has its CatchHandler @ 001b4cb4 */
  uVar9 = FUN_001dbad8(pcVar8,local_1d0,param_5);
  *param_6 = uVar9;
  __check_grouping(local_1b0,local_190,local_1d8,(uint *)param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_001b4c14;
LAB_001b4be8:
    if (!bVar4) goto LAB_001b4c58;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar2 = (long *)0x0;
    if (!bVar4) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_001b4be8;
LAB_001b4c14:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar6 == -1)) goto LAB_001b4c58;
  }
  *param_5 = *param_5 | 2;
LAB_001b4c58:
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if (((byte)local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b4cf8  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long double&) const
    */

void std::__ndk1::
     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(void)

{
  (*(code *)PTR___do_get_floating_point<long_double>_00210348)();
  return;
}


// ===== 001b4cfc  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get_floating_point<long_double> =====

/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get_floating_point<long
   double>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::ios_base&, unsigned int&, long double&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_floating_point<long_double>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,
          wchar_t *param_5,undefined1 (*param_6) [16])

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  wchar_t wVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  char local_1e4 [4];
  bool local_1e0 [4];
  uint local_1dc;
  uint *local_1d8;
  char *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  char *local_1b8;
  basic_string_conflict local_1b0 [8];
  ulong local_1a8;
  void *local_1a0;
  wchar_t local_198;
  wchar_t wStack_194;
  uint local_190 [40];
  ios_base aiStack_f0 [128];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  __num_get<wchar_t>::__stage2_float_prep(param_4,aiStack_f0,&wStack_194,&local_198,param_5);
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = (char *)0x0;
                    /* try { // try from 001b4d5c to 001b4d6f has its CatchHandler @ 001b5070 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1c8,0x16,'\0');
  pcVar8 = (char *)((ulong)&local_1c8 | 1);
  if ((local_1c8 & 1) != 0) {
    pcVar8 = local_1b8;
  }
  local_1dc = 0;
  local_1e0[0] = true;
  local_1e4[0] = 'E';
  local_1d8 = local_190;
  local_1d0 = pcVar8;
LAB_001b4db8:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_001b4dfc;
LAB_001b4e30:
    param_3 = (long *)0x0;
    if (bVar4) goto LAB_001b4f14;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b4de4 to 001b4e1f has its CatchHandler @ 001b507c */
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar2 = (long *)0x0;
    if (!bVar4) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_001b4e30;
LAB_001b4dfc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (iVar6 == -1) goto LAB_001b4e30;
    if (!bVar4) goto LAB_001b4f14;
  }
  uVar7 = local_1c0;
  if ((local_1c8 & 1) == 0) {
    uVar7 = local_1c8 >> 1 & 0x7f;
  }
  if (local_1d0 == pcVar8 + uVar7) {
                    /* try { // try from 001b4e60 to 001b4e8f has its CatchHandler @ 001b5078 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c8,uVar7 << 1,'\0');
    uVar1 = 0x16;
    if ((local_1c8 & 1) != 0) {
      uVar1 = (local_1c8 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c8,uVar1,'\0');
    pcVar8 = (char *)((ulong)&local_1c8 | 1);
    if ((local_1c8 & 1) != 0) {
      pcVar8 = local_1b8;
    }
    local_1d0 = pcVar8 + uVar7;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b4ec4 to 001b4f0f has its CatchHandler @ 001b507c */
    wVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar5 = *(wchar_t *)param_2[3];
  }
  iVar6 = __num_get<wchar_t>::__stage2_float_loop
                    (wVar5,local_1e0,local_1e4,pcVar8,&local_1d0,wStack_194,local_198,local_1b0,
                     local_190,&local_1d8,&local_1dc,(wchar_t *)aiStack_f0);
  if (iVar6 != 0) goto LAB_001b4f14;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b4db8;
LAB_001b4f14:
  uVar7 = (ulong)((byte)local_1b0[0] >> 1);
  if (((byte)local_1b0[0] & 1) != 0) {
    uVar7 = local_1a8;
  }
  if (((local_1e0[0] != false) && (uVar7 != 0)) && ((long)local_1d8 - (long)local_190 < 0xa0)) {
    *local_1d8 = local_1dc;
    local_1d8 = local_1d8 + 1;
  }
                    /* try { // try from 001b4f60 to 001b4ff7 has its CatchHandler @ 001b5074 */
  auVar9 = FUN_001dbbfc(pcVar8,local_1d0,param_5);
  *param_6 = auVar9;
  __check_grouping(local_1b0,local_190,local_1d8,(uint *)param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_001b4fd4;
LAB_001b4fa8:
    if (!bVar4) goto LAB_001b5018;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar2 = (long *)0x0;
    if (!bVar4) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_001b4fa8;
LAB_001b4fd4:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar6 == -1)) goto LAB_001b5018;
  }
  *param_5 = *param_5 | 2;
LAB_001b5018:
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if (((byte)local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b50b8  std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, void*&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get
          (undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
          undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  __shared_count *p_Var5;
  bool bVar6;
  wchar_t wVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  uint local_1bc;
  undefined **local_1b8;
  ulong local_1b0;
  undefined ***local_1a8;
  __shared_count *local_1a0;
  ulong local_198 [2];
  void *local_188;
  undefined ***local_180;
  undefined *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  wchar_t awStack_d8 [26];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_198[0] = 0;
  local_198[1] = 0;
  local_188 = (void *)0x0;
                    /* try { // try from 001b5100 to 001b5107 has its CatchHandler @ 001b54ec */
  ios_base::getloc();
  p_Var5 = local_1a0;
  puVar4 = PTR_id_0020f8b8;
  local_168 = 0;
  local_178 = PTR_id_0020f8b8;
  puStack_170 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_1b8 = &local_178;
    local_180 = &local_1b8;
                    /* try { // try from 001b5140 to 001b5193 has its CatchHandler @ 001b54fc */
    __call_once((ulong *)PTR_id_0020f8b8,&local_180,FUN_001db064);
  }
  lVar2 = *(long *)(p_Var5 + 0x10);
  if (((ulong)(*(long *)(p_Var5 + 0x18) - lVar2 >> 3) <= (long)*(int *)(puVar4 + 8) - 1U) ||
     (plVar9 = *(long **)(lVar2 + ((long)*(int *)(puVar4 + 8) - 1U) * 8), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b54cc to 001b54cf has its CatchHandler @ 001b54fc */
    FUN_0017cb1c();
  }
  (**(code **)(*plVar9 + 0x60))(plVar9,PTR___src_0020f938,PTR___src_0020f938 + 0x1a,awStack_d8);
  __shared_count::__release_shared(local_1a0);
  local_1b8 = (undefined **)0x0;
  local_1b0 = 0;
  local_1a8 = (undefined ***)0x0;
                    /* try { // try from 001b51a4 to 001b51b7 has its CatchHandler @ 001b54e8 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b8,0x16,'\0');
  pppuVar12 = (undefined ***)((ulong)&local_1b8 | 1);
  local_1a0 = (__shared_count *)&local_178;
  pppuVar11 = pppuVar12;
  if (((ulong)local_1b8 & 1) != 0) {
    pppuVar11 = local_1a8;
  }
  local_1bc = 0;
  local_180 = pppuVar11;
LAB_001b51f4:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_001b5238;
LAB_001b526c:
    param_3 = (long *)0x0;
    if (bVar6) goto LAB_001b5350;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 001b5220 to 001b525b has its CatchHandler @ 001b5520 */
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar6 = iVar8 == -1;
    plVar9 = (long *)0x0;
    if (!bVar6) {
      plVar9 = param_2;
    }
    param_2 = plVar9;
    if (param_3 == (long *)0x0) goto LAB_001b526c;
LAB_001b5238:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (iVar8 == -1) goto LAB_001b526c;
    if (!bVar6) goto LAB_001b5350;
  }
  uVar10 = local_1b0;
  if (((ulong)local_1b8 & 1) == 0) {
    uVar10 = (ulong)local_1b8 >> 1 & 0x7f;
  }
  if (local_180 == (undefined ***)((long)pppuVar11 + uVar10)) {
                    /* try { // try from 001b529c to 001b52cb has its CatchHandler @ 001b551c */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b8,uVar10 << 1,'\0');
    uVar1 = 0x16;
    if (((ulong)local_1b8 & 1) != 0) {
      uVar1 = ((ulong)local_1b8 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b8,uVar1,'\0');
    pppuVar11 = pppuVar12;
    if (((ulong)local_1b8 & 1) != 0) {
      pppuVar11 = local_1a8;
    }
    local_180 = (undefined ***)((long)pppuVar11 + uVar10);
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 001b5300 to 001b534b has its CatchHandler @ 001b5520 */
    wVar7 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar7 = *(wchar_t *)param_2[3];
  }
  iVar8 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar7,0x10,(char *)pppuVar11,(char **)&local_180,&local_1bc,L'\0',
                     (basic_string_conflict *)local_198,(uint *)&local_178,(uint **)&local_1a0,
                     awStack_d8);
  if (iVar8 != 0) goto LAB_001b5350;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_001b51f4;
LAB_001b5350:
                    /* try { // try from 001b5358 to 001b541f has its CatchHandler @ 001b5518 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b8,(long)local_180 - (long)pppuVar11,'\0');
  if (((ulong)local_1b8 & 1) != 0) {
    pppuVar12 = local_1a8;
  }
  if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001b54a4 to 001b54b7 has its CatchHandler @ 001b54d4 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar8 = __libcpp_sscanf_l((char *)pppuVar12,(__locale_t *)DAT_00214e98,"%p",param_6);
  if (iVar8 != 1) {
    *param_5 = 4;
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_001b53fc;
LAB_001b53d4:
    if (!bVar6) goto LAB_001b5440;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar6 = iVar8 == -1;
    plVar9 = (long *)0x0;
    if (!bVar6) {
      plVar9 = param_2;
    }
    param_2 = plVar9;
    if (param_3 == (long *)0x0) goto LAB_001b53d4;
LAB_001b53fc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar8 == -1)) goto LAB_001b5440;
  }
  *param_5 = *param_5 | 2;
LAB_001b5440:
  if (((ulong)local_1b8 & 1) != 0) {
    operator_delete(local_1a8);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001b555c  std::__ndk1::__num_get<wchar_t>::__stage2_int_loop =====

/* std::__ndk1::__num_get<wchar_t>::__stage2_int_loop(wchar_t, int, char*, char*&, unsigned int&,
   wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, wchar_t*) */

undefined8
std::__ndk1::__num_get<wchar_t>::__stage2_int_loop
          (wchar_t param_1,int param_2,char *param_3,char **param_4,uint *param_5,wchar_t param_6,
          basic_string_conflict *param_7,uint *param_8,uint **param_9,wchar_t *param_10)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  char *pcVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  wchar_t *pwVar9;
  
  puVar3 = PTR___src_0020f938;
  pcVar5 = *param_4;
  if (pcVar5 == param_3) {
    if (param_10[0x18] == param_1) {
      cVar4 = '+';
LAB_001b55f8:
      *param_4 = param_3 + 1;
      *param_3 = cVar4;
      *param_5 = 0;
      return 0;
    }
    if (param_10[0x19] == param_1) {
      cVar4 = '-';
      goto LAB_001b55f8;
    }
  }
  uVar1 = (ulong)((byte)*param_7 >> 1);
  if (((byte)*param_7 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + 8);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    puVar6 = *param_9;
    if ((long)puVar6 - (long)param_8 < 0xa0) {
      uVar2 = *param_5;
      *param_9 = puVar6 + 1;
      *puVar6 = uVar2;
      *param_5 = 0;
      return 0;
    }
    return 0;
  }
  pwVar9 = param_10 + 0x1a;
  if (*param_10 == param_1) {
    lVar8 = 0;
LAB_001b5808:
    pwVar9 = param_10 + lVar8;
  }
  else {
    if (param_10[1] == param_1) {
      lVar8 = 1;
      goto LAB_001b5808;
    }
    if (param_10[2] == param_1) {
      lVar8 = 2;
      goto LAB_001b5808;
    }
    if (param_10[3] == param_1) {
      lVar8 = 3;
      goto LAB_001b5808;
    }
    if (param_10[4] == param_1) {
      lVar8 = 4;
      goto LAB_001b5808;
    }
    if (param_10[5] == param_1) {
      lVar8 = 5;
      goto LAB_001b5808;
    }
    if (param_10[6] == param_1) {
      lVar8 = 6;
      goto LAB_001b5808;
    }
    if (param_10[7] == param_1) {
      lVar8 = 7;
      goto LAB_001b5808;
    }
    if (param_10[8] == param_1) {
      lVar8 = 8;
      goto LAB_001b5808;
    }
    if (param_10[9] == param_1) {
      lVar8 = 9;
      goto LAB_001b5808;
    }
    if (param_10[10] == param_1) {
      lVar8 = 10;
      goto LAB_001b5808;
    }
    if (param_10[0xb] == param_1) {
      lVar8 = 0xb;
      goto LAB_001b5808;
    }
    if (param_10[0xc] == param_1) {
      lVar8 = 0xc;
      goto LAB_001b5808;
    }
    if (param_10[0xd] == param_1) {
      lVar8 = 0xd;
      goto LAB_001b5808;
    }
    if (param_10[0xe] == param_1) {
      lVar8 = 0xe;
      goto LAB_001b5808;
    }
    if (param_10[0xf] == param_1) {
      lVar8 = 0xf;
      goto LAB_001b5808;
    }
    if (param_10[0x10] == param_1) {
      lVar8 = 0x10;
      goto LAB_001b5808;
    }
    if (param_10[0x11] == param_1) {
      lVar8 = 0x11;
      goto LAB_001b5808;
    }
    if (param_10[0x12] == param_1) {
      lVar8 = 0x12;
      goto LAB_001b5808;
    }
    if (param_10[0x13] == param_1) {
      lVar8 = 0x13;
      goto LAB_001b5808;
    }
    if (param_10[0x14] == param_1) {
      lVar8 = 0x14;
      goto LAB_001b5808;
    }
    if (param_10[0x15] == param_1) {
      lVar8 = 0x15;
      goto LAB_001b5808;
    }
    if (param_10[0x16] == param_1) {
      lVar8 = 0x16;
      goto LAB_001b5808;
    }
    if (param_10[0x17] == param_1) {
      lVar8 = 0x17;
      goto LAB_001b5808;
    }
    if (param_10[0x18] == param_1) {
      lVar8 = 0x18;
      goto LAB_001b5808;
    }
    if (param_10[0x19] == param_1) {
      lVar8 = 0x19;
      goto LAB_001b5808;
    }
  }
  lVar8 = (long)pwVar9 - (long)param_10;
  if (lVar8 < 0x5d) {
    lVar7 = lVar8 >> 2;
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        if (0x57 < lVar8) {
          if (pcVar5 == param_3) {
            return 0xffffffff;
          }
          if (2 < (long)pcVar5 - (long)param_3) {
            return 0xffffffff;
          }
          if (pcVar5[-1] != '0') {
            return 0xffffffff;
          }
          *param_5 = 0;
          cVar4 = puVar3[lVar7];
          *param_4 = pcVar5 + 1;
          *pcVar5 = cVar4;
          return 0;
        }
        goto LAB_001b5850;
      }
      if (param_2 != 10) goto LAB_001b5850;
    }
    if (lVar7 < (long)(ulong)(uint)param_2) {
LAB_001b5850:
      cVar4 = PTR___src_0020f938[lVar7];
      *param_4 = pcVar5 + 1;
      *pcVar5 = cVar4;
      *param_5 = *param_5 + 1;
      return 0;
    }
  }
  return 0xffffffff;
}


// ===== 001b58bc  std::__ndk1::__num_get<char>::__stage2_float_prep =====

/* std::__ndk1::__num_get<char>::__stage2_float_prep(std::__ndk1::ios_base&, char*, char&, char&) */

void __thiscall
std::__ndk1::__num_get<char>::__stage2_float_prep
          (__num_get<char> *this,ios_base *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long *plVar5;
  __shared_count *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  puVar3 = PTR___init_0020f928;
  puVar2 = PTR_id_0020f840;
  local_70 = 0;
  local_80 = PTR_id_0020f840;
  puStack_78 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001b5930 to 001b5983 has its CatchHandler @ 001b5a64 */
    __call_once((ulong *)PTR_id_0020f840,&local_68,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar5 = *(long **)(*(long *)(local_88 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b5a58 to 001b5a5b has its CatchHandler @ 001b5a64 */
    FUN_0017cb1c();
  }
  (**(code **)(*plVar5 + 0x40))(plVar5,PTR___src_0020f938,PTR___src_0020f938 + 0x20,param_1);
  puVar2 = PTR_id_0020f930;
  local_70 = 0;
  local_80 = PTR_id_0020f930;
  puStack_78 = puVar3;
  if (*(long *)PTR_id_0020f930 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001b59b0 to 001b5a23 has its CatchHandler @ 001b5a68 */
    __call_once((ulong *)PTR_id_0020f930,&local_68,FUN_001db064);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(local_88 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 != (long *)0x0)) {
    cVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
    *param_2 = cVar4;
    cVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_3 = cVar4;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    __shared_count::__release_shared(local_88);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b5a5c to 001b5a5f has its CatchHandler @ 001b5a68 */
  FUN_0017cb1c();
}


// ===== 001b5a7c  std::__ndk1::__num_get<char>::__stage2_float_loop =====

/* std::__ndk1::__num_get<char>::__stage2_float_loop(char, bool&, char&, char*, char*&, char, char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int*, unsigned int*&, unsigned int&, char*) */

undefined8
std::__ndk1::__num_get<char>::__stage2_float_loop
          (char param_1,bool *param_2,char *param_3,char *param_4,char **param_5,char param_6,
          char param_7,basic_string_conflict *param_8,uint *param_9,uint **param_10,uint *param_11,
          char *param_12)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  uint *puVar6;
  long lVar7;
  
  if (param_1 == param_6) {
    if (*param_2 == false) {
      return 0xffffffff;
    }
    *param_2 = false;
    pcVar5 = *param_5;
    *param_5 = pcVar5 + 1;
    *pcVar5 = '.';
    uVar1 = (ulong)((byte)*param_8 >> 1);
    if (((byte)*param_8 & 1) != 0) {
      uVar1 = *(ulong *)(param_8 + 8);
    }
    if ((uVar1 != 0) && (puVar6 = *param_10, (long)puVar6 - (long)param_9 < 0xa0)) {
      uVar2 = *param_11;
      *param_10 = puVar6 + 1;
      *puVar6 = uVar2;
      return 0;
    }
    return 0;
  }
  if (param_1 == param_7) {
    uVar1 = (ulong)((byte)*param_8 >> 1);
    if (((byte)*param_8 & 1) != 0) {
      uVar1 = *(ulong *)(param_8 + 8);
    }
    if (uVar1 != 0) {
      if (*param_2 == false) {
        return 0xffffffff;
      }
      puVar6 = *param_10;
      if (0x9f < (long)puVar6 - (long)param_9) {
        return 0;
      }
      uVar2 = *param_11;
      *param_10 = puVar6 + 1;
      *puVar6 = uVar2;
      *param_11 = 0;
      return 0;
    }
  }
  pcVar5 = param_12 + 0x20;
  if (*param_12 == param_1) {
    lVar7 = 0;
  }
  else if (param_12[1] == param_1) {
    lVar7 = 1;
  }
  else if (param_12[2] == param_1) {
    lVar7 = 2;
  }
  else if (param_12[3] == param_1) {
    lVar7 = 3;
  }
  else if (param_12[4] == param_1) {
    lVar7 = 4;
  }
  else if (param_12[5] == param_1) {
    lVar7 = 5;
  }
  else if (param_12[6] == param_1) {
    lVar7 = 6;
  }
  else if (param_12[7] == param_1) {
    lVar7 = 7;
  }
  else if (param_12[8] == param_1) {
    lVar7 = 8;
  }
  else if (param_12[9] == param_1) {
    lVar7 = 9;
  }
  else if (param_12[10] == param_1) {
    lVar7 = 10;
  }
  else if (param_12[0xb] == param_1) {
    lVar7 = 0xb;
  }
  else if (param_12[0xc] == param_1) {
    lVar7 = 0xc;
  }
  else if (param_12[0xd] == param_1) {
    lVar7 = 0xd;
  }
  else if (param_12[0xe] == param_1) {
    lVar7 = 0xe;
  }
  else if (param_12[0xf] == param_1) {
    lVar7 = 0xf;
  }
  else if (param_12[0x10] == param_1) {
    lVar7 = 0x10;
  }
  else if (param_12[0x11] == param_1) {
    lVar7 = 0x11;
  }
  else if (param_12[0x12] == param_1) {
    lVar7 = 0x12;
  }
  else if (param_12[0x13] == param_1) {
    lVar7 = 0x13;
  }
  else if (param_12[0x14] == param_1) {
    lVar7 = 0x14;
  }
  else if (param_12[0x15] == param_1) {
    lVar7 = 0x15;
  }
  else if (param_12[0x16] == param_1) {
    lVar7 = 0x16;
  }
  else if (param_12[0x17] == param_1) {
    lVar7 = 0x17;
  }
  else if (param_12[0x18] == param_1) {
    lVar7 = 0x18;
  }
  else if (param_12[0x19] == param_1) {
    lVar7 = 0x19;
  }
  else if (param_12[0x1a] == param_1) {
    lVar7 = 0x1a;
  }
  else if (param_12[0x1b] == param_1) {
    lVar7 = 0x1b;
  }
  else if (param_12[0x1c] == param_1) {
    lVar7 = 0x1c;
  }
  else if (param_12[0x1d] == param_1) {
    lVar7 = 0x1d;
  }
  else if (param_12[0x1e] == param_1) {
    lVar7 = 0x1e;
  }
  else {
    if (param_12[0x1f] != param_1) goto LAB_001b5dd4;
    lVar7 = 0x1f;
  }
  pcVar5 = param_12 + lVar7;
LAB_001b5dd4:
  lVar7 = (long)pcVar5 - (long)param_12;
  if (0x1f < lVar7) {
    return 0xffffffff;
  }
  bVar3 = PTR___src_0020f938[lVar7];
  if (lVar7 - 0x16U < 2) {
    *param_3 = 'P';
    pbVar4 = (byte *)*param_5;
  }
  else {
    if (1 < lVar7 - 0x18U) {
      if (((bVar3 & 0x5f) == *param_3) && (*param_3 = bVar3 & 0x5f | 0x80, *param_2 != false)) {
        *param_2 = false;
        uVar1 = (ulong)((byte)*param_8 >> 1);
        if (((byte)*param_8 & 1) != 0) {
          uVar1 = *(ulong *)(param_8 + 8);
        }
        if ((uVar1 != 0) && (puVar6 = *param_10, (long)puVar6 - (long)param_9 < 0xa0)) {
          uVar2 = *param_11;
          *param_10 = puVar6 + 1;
          *puVar6 = uVar2;
        }
      }
      pbVar4 = (byte *)*param_5;
      *param_5 = (char *)(pbVar4 + 1);
      *pbVar4 = bVar3;
      if (lVar7 < 0x16) {
        *param_11 = *param_11 + 1;
      }
      return 0;
    }
    pbVar4 = (byte *)*param_5;
    if ((pbVar4 != (byte *)param_4) && ((pbVar4[-1] & 0x5f) != (*param_3 & 0x7fU))) {
      return 0xffffffff;
    }
  }
  *param_5 = (char *)(pbVar4 + 1);
  *pbVar4 = bVar3;
  return 0;
}


// ===== 001b5ee4  std::__ndk1::__num_get<char>::__stage2_int_prep =====

/* std::__ndk1::__num_get<char>::__stage2_int_prep(std::__ndk1::ios_base&, char*, char&) */

void __thiscall
std::__ndk1::__num_get<char>::__stage2_int_prep
          (__num_get<char> *this,ios_base *param_1,char *param_2,char *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long *plVar5;
  __shared_count *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  puVar3 = PTR___init_0020f928;
  puVar2 = PTR_id_0020f840;
  local_70 = 0;
  local_80 = PTR_id_0020f840;
  puStack_78 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001b5f54 to 001b5fa7 has its CatchHandler @ 001b6074 */
    __call_once((ulong *)PTR_id_0020f840,&local_68,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar5 = *(long **)(*(long *)(local_88 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b6068 to 001b606b has its CatchHandler @ 001b6074 */
    FUN_0017cb1c();
  }
  (**(code **)(*plVar5 + 0x40))(plVar5,PTR___src_0020f938,PTR___src_0020f938 + 0x1a,param_1);
  puVar2 = PTR_id_0020f930;
  local_70 = 0;
  local_80 = PTR_id_0020f930;
  puStack_78 = puVar3;
  if (*(long *)PTR_id_0020f930 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001b5fd4 to 001b6033 has its CatchHandler @ 001b6078 */
    __call_once((ulong *)PTR_id_0020f930,&local_68,FUN_001db064);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(local_88 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 != (long *)0x0)) {
    cVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_2 = cVar4;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    __shared_count::__release_shared(local_88);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b606c to 001b606f has its CatchHandler @ 001b6078 */
  FUN_0017cb1c();
}


// ===== 001b608c  std::__ndk1::__num_get<wchar_t>::__stage2_float_prep =====

/* std::__ndk1::__num_get<wchar_t>::__stage2_float_prep(std::__ndk1::ios_base&, wchar_t*, wchar_t&,
   wchar_t&) */

void __thiscall
std::__ndk1::__num_get<wchar_t>::__stage2_float_prep
          (__num_get<wchar_t> *this,ios_base *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  wchar_t wVar4;
  long *plVar5;
  __shared_count *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  puVar3 = PTR___init_0020f928;
  puVar2 = PTR_id_0020f8b8;
  local_70 = 0;
  local_80 = PTR_id_0020f8b8;
  puStack_78 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001b6100 to 001b6153 has its CatchHandler @ 001b6234 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_68,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar5 = *(long **)(*(long *)(local_88 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b6228 to 001b622b has its CatchHandler @ 001b6234 */
    FUN_0017cb1c();
  }
  (**(code **)(*plVar5 + 0x60))(plVar5,PTR___src_0020f938,PTR___src_0020f938 + 0x20,param_1);
  puVar2 = PTR_id_0020f940;
  local_70 = 0;
  local_80 = PTR_id_0020f940;
  puStack_78 = puVar3;
  if (*(long *)PTR_id_0020f940 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001b6180 to 001b61f3 has its CatchHandler @ 001b6238 */
    __call_once((ulong *)PTR_id_0020f940,&local_68,FUN_001db064);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(local_88 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 != (long *)0x0)) {
    wVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
    *param_2 = wVar4;
    wVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_3 = wVar4;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    __shared_count::__release_shared(local_88);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b622c to 001b622f has its CatchHandler @ 001b6238 */
  FUN_0017cb1c();
}


// ===== 001b624c  std::__ndk1::__num_get<wchar_t>::__stage2_float_loop =====

/* std::__ndk1::__num_get<wchar_t>::__stage2_float_loop(wchar_t, bool&, char&, char*, char*&,
   wchar_t, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, unsigned int&, wchar_t*) */

undefined8
std::__ndk1::__num_get<wchar_t>::__stage2_float_loop
          (wchar_t param_1,bool *param_2,char *param_3,char *param_4,char **param_5,wchar_t param_6,
          wchar_t param_7,basic_string_conflict *param_8,uint *param_9,uint **param_10,
          uint *param_11,wchar_t *param_12)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  uint *puVar5;
  long lVar6;
  wchar_t *pwVar7;
  ulong uVar8;
  
  if (param_1 == param_6) {
    if (*param_2 == false) {
      return 0xffffffff;
    }
    *param_2 = false;
    pcVar4 = *param_5;
    *param_5 = pcVar4 + 1;
    *pcVar4 = '.';
    uVar8 = (ulong)((byte)*param_8 >> 1);
    if (((byte)*param_8 & 1) != 0) {
      uVar8 = *(ulong *)(param_8 + 8);
    }
    if ((uVar8 != 0) && (puVar5 = *param_10, (long)puVar5 - (long)param_9 < 0xa0)) {
      uVar1 = *param_11;
      *param_10 = puVar5 + 1;
      *puVar5 = uVar1;
      return 0;
    }
    return 0;
  }
  if (param_1 == param_7) {
    uVar8 = (ulong)((byte)*param_8 >> 1);
    if (((byte)*param_8 & 1) != 0) {
      uVar8 = *(ulong *)(param_8 + 8);
    }
    if (uVar8 != 0) {
      if (*param_2 == false) {
        return 0xffffffff;
      }
      puVar5 = *param_10;
      if (0x9f < (long)puVar5 - (long)param_9) {
        return 0;
      }
      uVar1 = *param_11;
      *param_10 = puVar5 + 1;
      *puVar5 = uVar1;
      *param_11 = 0;
      return 0;
    }
  }
  pwVar7 = param_12 + 0x20;
  if (*param_12 == param_1) {
    lVar6 = 0;
  }
  else if (param_12[1] == param_1) {
    lVar6 = 1;
  }
  else if (param_12[2] == param_1) {
    lVar6 = 2;
  }
  else if (param_12[3] == param_1) {
    lVar6 = 3;
  }
  else if (param_12[4] == param_1) {
    lVar6 = 4;
  }
  else if (param_12[5] == param_1) {
    lVar6 = 5;
  }
  else if (param_12[6] == param_1) {
    lVar6 = 6;
  }
  else if (param_12[7] == param_1) {
    lVar6 = 7;
  }
  else if (param_12[8] == param_1) {
    lVar6 = 8;
  }
  else if (param_12[9] == param_1) {
    lVar6 = 9;
  }
  else if (param_12[10] == param_1) {
    lVar6 = 10;
  }
  else if (param_12[0xb] == param_1) {
    lVar6 = 0xb;
  }
  else if (param_12[0xc] == param_1) {
    lVar6 = 0xc;
  }
  else if (param_12[0xd] == param_1) {
    lVar6 = 0xd;
  }
  else if (param_12[0xe] == param_1) {
    lVar6 = 0xe;
  }
  else if (param_12[0xf] == param_1) {
    lVar6 = 0xf;
  }
  else if (param_12[0x10] == param_1) {
    lVar6 = 0x10;
  }
  else if (param_12[0x11] == param_1) {
    lVar6 = 0x11;
  }
  else if (param_12[0x12] == param_1) {
    lVar6 = 0x12;
  }
  else if (param_12[0x13] == param_1) {
    lVar6 = 0x13;
  }
  else if (param_12[0x14] == param_1) {
    lVar6 = 0x14;
  }
  else if (param_12[0x15] == param_1) {
    lVar6 = 0x15;
  }
  else if (param_12[0x16] == param_1) {
    lVar6 = 0x16;
  }
  else if (param_12[0x17] == param_1) {
    lVar6 = 0x17;
  }
  else if (param_12[0x18] == param_1) {
    lVar6 = 0x18;
  }
  else if (param_12[0x19] == param_1) {
    lVar6 = 0x19;
  }
  else if (param_12[0x1a] == param_1) {
    lVar6 = 0x1a;
  }
  else if (param_12[0x1b] == param_1) {
    lVar6 = 0x1b;
  }
  else if (param_12[0x1c] == param_1) {
    lVar6 = 0x1c;
  }
  else if (param_12[0x1d] == param_1) {
    lVar6 = 0x1d;
  }
  else if (param_12[0x1e] == param_1) {
    lVar6 = 0x1e;
  }
  else {
    if (param_12[0x1f] != param_1) goto LAB_001b65a0;
    lVar6 = 0x1f;
  }
  pwVar7 = param_12 + lVar6;
LAB_001b65a0:
  lVar6 = (long)pwVar7 - (long)param_12;
  if (0x7c < lVar6) {
    return 0xffffffff;
  }
  bVar2 = PTR___src_0020f938[lVar6 >> 2];
  uVar8 = lVar6 - 0x58U >> 2 | lVar6 << 0x3e;
  if (uVar8 < 2) {
    *param_3 = 'P';
  }
  else {
    if (uVar8 - 2 < 2) {
      pbVar3 = (byte *)*param_5;
      if ((pbVar3 != (byte *)param_4) && ((pbVar3[-1] & 0x5f) != (*param_3 & 0x7fU))) {
        return 0xffffffff;
      }
      *param_5 = (char *)(pbVar3 + 1);
      *pbVar3 = bVar2;
      return 0;
    }
    if (((bVar2 & 0x5f) == *param_3) && (*param_3 = bVar2 & 0x5f | 0x80, *param_2 != false)) {
      *param_2 = false;
      uVar8 = (ulong)((byte)*param_8 >> 1);
      if (((byte)*param_8 & 1) != 0) {
        uVar8 = *(ulong *)(param_8 + 8);
      }
      if ((uVar8 != 0) && (puVar5 = *param_10, (long)puVar5 - (long)param_9 < 0xa0)) {
        uVar1 = *param_11;
        *param_10 = puVar5 + 1;
        *puVar5 = uVar1;
      }
    }
  }
  pbVar3 = (byte *)*param_5;
  *param_5 = (char *)(pbVar3 + 1);
  *pbVar3 = bVar2;
  if (lVar6 < 0x55) {
    *param_11 = *param_11 + 1;
  }
  return 0;
}


// ===== 001b66b0  std::__ndk1::__num_get<wchar_t>::__stage2_int_prep =====

/* std::__ndk1::__num_get<wchar_t>::__stage2_int_prep(std::__ndk1::ios_base&, wchar_t*, wchar_t&) */

void __thiscall
std::__ndk1::__num_get<wchar_t>::__stage2_int_prep
          (__num_get<wchar_t> *this,ios_base *param_1,wchar_t *param_2,wchar_t *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  wchar_t wVar4;
  long *plVar5;
  __shared_count *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  puVar3 = PTR___init_0020f928;
  puVar2 = PTR_id_0020f8b8;
  local_70 = 0;
  local_80 = PTR_id_0020f8b8;
  puStack_78 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001b6720 to 001b6773 has its CatchHandler @ 001b6840 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_68,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar5 = *(long **)(*(long *)(local_88 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b6834 to 001b6837 has its CatchHandler @ 001b6840 */
    FUN_0017cb1c();
  }
  (**(code **)(*plVar5 + 0x60))(plVar5,PTR___src_0020f938,PTR___src_0020f938 + 0x1a,param_1);
  puVar2 = PTR_id_0020f940;
  local_70 = 0;
  local_80 = PTR_id_0020f940;
  puStack_78 = puVar3;
  if (*(long *)PTR_id_0020f940 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001b67a0 to 001b67ff has its CatchHandler @ 001b6844 */
    __call_once((ulong *)PTR_id_0020f940,&local_68,FUN_001db064);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(local_88 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 != (long *)0x0)) {
    wVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_2 = wVar4;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    __shared_count::__release_shared(local_88);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b6838 to 001b683b has its CatchHandler @ 001b6844 */
  FUN_0017cb1c();
}


// ===== 001b6858  std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, bool) const */

long * __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 *puVar8;
  __shared_count *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined1 *local_60;
  undefined8 **local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    plVar6 = (long *)(**(code **)(*(long *)this + 0x30))(this,param_2,param_3,param_4,param_5 & 1);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return plVar6;
    }
LAB_001b6a14:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ios_base::getloc();
  puVar4 = PTR_id_0020f930;
  local_60 = (undefined1 *)0x0;
  local_70 = PTR_id_0020f930;
  local_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f930 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 001b68f4 to 001b690b has its CatchHandler @ 001b6a18 */
    __call_once((ulong *)PTR_id_0020f930,&local_58,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_78 + 0x18) - *(long *)(local_78 + 0x10) >> 3) <=
       (long)*(int *)(puVar4 + 8) - 1U) ||
     (plVar6 = *(long **)(*(long *)(local_78 + 0x10) + ((long)*(int *)(puVar4 + 8) - 1U) * 8),
     plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b6a10 to 001b6a13 has its CatchHandler @ 001b6a18 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_78);
  if ((param_5 & 1) == 0) {
    pcVar7 = *(code **)(*plVar6 + 0x38);
  }
  else {
    pcVar7 = *(code **)(*plVar6 + 0x30);
  }
  (*pcVar7)(&local_70,plVar6);
  puVar8 = (undefined1 *)((ulong)&local_70 | 1);
  if (((ulong)local_70 & 1) != 0) {
    puVar8 = local_60;
  }
LAB_001b6984:
  if (((byte)local_70 & 1) == 0) {
    if (puVar8 == (undefined1 *)((long)&local_70 + (ulong)((byte)local_70 >> 1) + 1))
    goto LAB_001b69e4;
  }
  else if (puVar8 == local_60 + (long)local_68) {
    operator_delete(local_60);
LAB_001b69e4:
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return param_2;
    }
    goto LAB_001b6a14;
  }
  plVar6 = param_2;
  if (param_2 != (long *)0x0) {
    puVar1 = (undefined1 *)param_2[6];
    uVar2 = *puVar8;
    if (puVar1 == (undefined1 *)param_2[7]) {
                    /* try { // try from 001b69cc to 001b69d3 has its CatchHandler @ 001b6a30 */
      iVar5 = (**(code **)(*param_2 + 0x68))(param_2);
      plVar6 = (long *)0x0;
      if (iVar5 != -1) {
        plVar6 = param_2;
      }
    }
    else {
      param_2[6] = (long)(puVar1 + 1);
      *puVar1 = uVar2;
    }
  }
  param_2 = plVar6;
  puVar8 = puVar8 + 1;
  goto LAB_001b6984;
}


// ===== 001b6a4c  std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, long) const */

void __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  char acStack_c0 [48];
  char acStack_90 [8];
  __shared_count *local_88;
  char *local_80;
  char *pcStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_6c = 0;
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined1 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *puVar7 = 0x23;
    puVar7 = puVar7 + 1;
  }
  *puVar7 = 0x6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 100;
  }
  puVar7[1] = uVar8;
  uVar1 = ((ulong)(*(uint *)(param_3 + 8) >> 9) & 1) + 0x17;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = acStack_90 + lVar5;
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b6c5c to 001b6c6f has its CatchHandler @ 001b6c88 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_00214e98,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = acStack_90 + lVar5 + 1;
    }
    else if (((1 < iVar6) && (cVar3 == '0')) && ((byte)(acStack_90[lVar5 + 1] | 0x20U) == 0x78)) {
      pcVar10 = acStack_90 + lVar5 + 2;
    }
  }
  ios_base::getloc();
                    /* try { // try from 001b6bd8 to 001b6bf7 has its CatchHandler @ 001b6ca0 */
  __num_put<char>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,acStack_c0 + lVar5,&pcStack_78,&local_80,
             (locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_00190c20(param_2,acStack_c0 + lVar5,pcStack_78,local_80,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b6cb8  std::__ndk1::__num_put_base::__format_int =====

/* std::__ndk1::__num_put_base::__format_int(char*, char const*, bool, unsigned int) */

void std::__ndk1::__num_put_base::__format_int
               (char *param_1,char *param_2,bool param_3,uint param_4)

{
  char *pcVar1;
  char cVar3;
  char *pcVar4;
  char *pcVar2;
  
  if ((param_4 >> 0xb & 1) != 0) {
    *param_1 = '+';
    param_1 = param_1 + 1;
  }
  if ((param_4 >> 9 & 1) == 0) {
    cVar3 = *param_2;
    pcVar1 = param_1;
  }
  else {
    pcVar1 = param_1 + 1;
    *param_1 = '#';
    cVar3 = *param_2;
  }
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    pcVar4 = param_2 + 1;
    do {
      pcVar1 = pcVar2 + 1;
      *pcVar2 = cVar3;
      cVar3 = *pcVar4;
      pcVar2 = pcVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
  }
  if ((param_4 & 0x4a) != 0x40) {
    if ((param_4 & 0x4a) == 8) {
      cVar3 = 'x';
      if ((param_4 & 0x4000) != 0) {
        cVar3 = 'X';
      }
      *pcVar1 = cVar3;
      return;
    }
    cVar3 = 'd';
    if (!param_3) {
      cVar3 = 'u';
    }
    *pcVar1 = cVar3;
    return;
  }
  *pcVar1 = 'o';
  return;
}


// ===== 001b6d4c  std::__ndk1::__libcpp_snprintf_l =====

/* std::__ndk1::__libcpp_snprintf_l(char*, unsigned long, __locale_t*, char const*, ...) */

undefined4
std::__ndk1::__libcpp_snprintf_l(char *param_1,ulong param_2,__locale_t *param_3,char *param_4,...)

{
  long lVar1;
  undefined4 uVar2;
  __locale_t __dataset;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b0 = in_x4;
  uStack_a8 = in_x5;
  local_a0 = in_x6;
  uStack_98 = in_x7;
  __dataset = uselocale((__locale_t)param_3);
  uStack_58 = 0xffffff80ffffffe0;
                    /* try { // try from 001b6dcc to 001b6de7 has its CatchHandler @ 001b6e2c */
  local_70 = (undefined1 *)register0x00000008;
  puStack_68 = &stack0xffffffffffffff70;
  puStack_60 = &local_b0;
  uVar2 = __vsnprintf_chk(param_1,param_2,0,0xffffffffffffffff,param_4,&local_70);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001b6df0 to 001b6df7 has its CatchHandler @ 001b6e28 */
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b6e48  std::__ndk1::__num_put_base::__identify_padding =====

/* std::__ndk1::__num_put_base::__identify_padding(char*, char*, std::__ndk1::ios_base const&) */

char * std::__ndk1::__num_put_base::__identify_padding
                 (char *param_1,char *param_2,ios_base *param_3)

{
  char cVar1;
  
  if ((*(uint *)(param_3 + 8) & 0xb0) == 0x20) {
    return param_2;
  }
  if ((*(uint *)(param_3 + 8) & 0xb0) == 0x10) {
    cVar1 = *param_1;
    if ((cVar1 == '-') || (cVar1 == '+')) {
      return param_1 + 1;
    }
    if ((1 < (long)param_2 - (long)param_1) &&
       ((cVar1 == '0' && ((byte)(param_1[1] | 0x20U) == 0x78)))) {
      param_1 = param_1 + 2;
    }
  }
  return param_1;
}


// ===== 001b6eb4  std::__ndk1::__num_put<char>::__widen_and_group_int =====

/* std::__ndk1::__num_put<char>::__widen_and_group_int(char*, char*, char*, char*, char*&, char*&,
   std::__ndk1::locale const&) */

void std::__ndk1::__num_put<char>::__widen_and_group_int
               (char *param_1,char *param_2,char *param_3,char *param_4,char **param_5,
               char **param_6,locale *param_7)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  undefined8 local_90;
  undefined *local_88;
  void *local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  long local_68;
  
  puVar2 = PTR___init_0020f928;
  puVar12 = PTR_id_0020f840;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)param_7;
  local_80 = (void *)0x0;
  local_90 = PTR_id_0020f840;
  local_88 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)PTR_id_0020f840,&local_78,FUN_001db064);
  }
  puVar6 = PTR_id_0020f930;
  lVar3 = *(long *)(lVar16 + 0x10);
  if (((long)*(int *)(puVar12 + 8) - 1U < (ulong)(*(long *)(lVar16 + 0x18) - lVar3 >> 3)) &&
     (plVar17 = *(long **)(lVar3 + ((long)*(int *)(puVar12 + 8) - 1U) * 8), plVar17 != (long *)0x0))
  {
    lVar16 = *(long *)param_7;
    local_80 = (void *)0x0;
    local_90 = PTR_id_0020f930;
    local_88 = puVar2;
    if (*(long *)PTR_id_0020f930 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      __call_once((ulong *)PTR_id_0020f930,&local_78,FUN_001db064);
    }
    lVar3 = *(long *)(lVar16 + 0x10);
    if (((long)*(int *)(puVar6 + 8) - 1U < (ulong)(*(long *)(lVar16 + 0x18) - lVar3 >> 3)) &&
       (plVar18 = *(long **)(lVar3 + ((long)*(int *)(puVar6 + 8) - 1U) * 8), plVar18 != (long *)0x0)
       ) {
      (**(code **)(*plVar18 + 0x28))(&local_90,plVar18);
      puVar12 = (undefined *)((ulong)local_90 >> 1 & 0x7f);
      if (((ulong)local_90 & 1) != 0) {
        puVar12 = local_88;
      }
      if (puVar12 == (undefined *)0x0) {
                    /* try { // try from 001b7208 to 001b721b has its CatchHandler @ 001b7298 */
        (**(code **)(*plVar17 + 0x40))(plVar17,param_1,param_3,param_4);
        pcVar9 = param_4 + ((long)param_3 - (long)param_1);
        *param_6 = pcVar9;
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar13 = param_1, *param_1 == '+')) {
                    /* try { // try from 001b701c to 001b7097 has its CatchHandler @ 001b72a0 */
          cVar7 = (**(code **)(*plVar17 + 0x38))(plVar17);
          pcVar9 = *param_6;
          pcVar13 = param_1 + 1;
          *param_6 = pcVar9 + 1;
          *pcVar9 = cVar7;
        }
        if (((1 < (long)param_3 - (long)pcVar13) && (*pcVar13 == '0')) &&
           ((byte)(pcVar13[1] | 0x20U) == 0x78)) {
          cVar7 = (**(code **)(*plVar17 + 0x38))(plVar17,0x30);
          pcVar9 = *param_6;
          *param_6 = pcVar9 + 1;
          *pcVar9 = cVar7;
          cVar7 = (**(code **)(*plVar17 + 0x38))(plVar17,pcVar13[1]);
          pcVar9 = *param_6;
          pcVar13 = pcVar13 + 2;
          *param_6 = pcVar9 + 1;
          *pcVar9 = cVar7;
        }
        if ((pcVar13 != param_3) && (pcVar10 = param_3 + -1, pcVar9 = pcVar13, pcVar13 < pcVar10)) {
          do {
            pcVar14 = pcVar9 + 1;
            cVar7 = *pcVar9;
            *pcVar9 = *pcVar10;
            pcVar11 = pcVar10 + -1;
            *pcVar10 = cVar7;
            pcVar10 = pcVar11;
            pcVar9 = pcVar14;
          } while (pcVar14 < pcVar11);
        }
                    /* try { // try from 001b70ec to 001b70f3 has its CatchHandler @ 001b729c */
        cVar7 = (**(code **)(*plVar18 + 0x20))(plVar18);
        if (pcVar13 < param_3) {
          uVar15 = 0;
          uVar19 = 0;
          pcVar9 = pcVar13;
          do {
            puVar12 = (undefined *)(ulong)uVar15;
            if (((ulong)local_90 & 1) == 0) {
              bVar4 = puVar12[(long)&local_90 + 1];
            }
            else {
              bVar4 = *(byte *)((long)local_80 + (long)puVar12);
            }
            if ((bVar4 != 0) && (uVar19 == bVar4)) {
              pcVar10 = *param_6;
              uVar19 = 0;
              *param_6 = pcVar10 + 1;
              *pcVar10 = cVar7;
              puVar2 = (undefined *)((ulong)local_90 >> 1 & 0x7f);
              if (((ulong)local_90 & 1) != 0) {
                puVar2 = local_88;
              }
              if (puVar12 < puVar2 + -1) {
                uVar15 = uVar15 + 1;
              }
            }
                    /* try { // try from 001b7180 to 001b7187 has its CatchHandler @ 001b72a4 */
            cVar8 = (**(code **)(*plVar17 + 0x38))(plVar17,*pcVar9);
            pcVar10 = *param_6;
            pcVar9 = pcVar9 + 1;
            uVar19 = uVar19 + 1;
            *param_6 = pcVar10 + 1;
            *pcVar10 = cVar8;
          } while (param_3 != pcVar9);
        }
        pcVar10 = *param_6;
        pcVar9 = param_4 + ((long)pcVar13 - (long)param_1);
        if ((pcVar9 != pcVar10) && (bVar1 = pcVar9 < pcVar10 + -1, pcVar9 = pcVar10, bVar1)) {
          pcVar10 = pcVar10 + -1;
          pcVar9 = param_4 + ((long)pcVar13 - (long)param_1);
          do {
            pcVar11 = pcVar9 + 1;
            cVar7 = *pcVar9;
            *pcVar9 = *pcVar10;
            pcVar13 = pcVar10 + -1;
            *pcVar10 = cVar7;
            pcVar10 = pcVar13;
            pcVar9 = pcVar11;
          } while (pcVar11 < pcVar13);
          pcVar9 = *param_6;
        }
      }
      if (param_2 != param_3) {
        pcVar9 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pcVar9;
      if (((ulong)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0017cb1c();
}


// ===== 001b72c0  std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, long long) const */

void __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  char acStack_c0 [48];
  char acStack_90 [8];
  __shared_count *local_88;
  char *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined2 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined2 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *(undefined1 *)puVar7 = 0x23;
    puVar7 = (undefined2 *)((long)puVar7 + 1);
  }
  *puVar7 = 0x6c6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 100;
  }
  *(undefined1 *)(puVar7 + 1) = uVar8;
  uVar1 = ((ulong)(*(uint *)(param_3 + 8) >> 9) & 1) + 0x17;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = acStack_90 + lVar5;
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b74cc to 001b74df has its CatchHandler @ 001b74f8 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_00214e98,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = acStack_90 + lVar5 + 1;
    }
    else if (((1 < iVar6) && (cVar3 == '0')) && ((byte)(acStack_90[lVar5 + 1] | 0x20U) == 0x78)) {
      pcVar10 = acStack_90 + lVar5 + 2;
    }
  }
  ios_base::getloc();
                    /* try { // try from 001b7448 to 001b7467 has its CatchHandler @ 001b7510 */
  __num_put<char>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,acStack_c0 + lVar5,&pcStack_78,&local_80,
             (locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_00190c20(param_2,acStack_c0 + lVar5,pcStack_78,local_80,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b7528  std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, unsigned long) const */

void __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  char acStack_90 [8];
  __shared_count *local_88;
  char *local_80;
  char *pcStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_6c = 0;
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined1 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *puVar7 = 0x23;
    puVar7 = puVar7 + 1;
  }
  *puVar7 = 0x6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 0x75;
  }
  puVar7[1] = uVar8;
  uVar11 = (ulong)(*(uint *)(param_3 + 8) >> 9) & 1;
  uVar1 = uVar11 + 0x17;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = acStack_90 + lVar5;
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b7754 to 001b7767 has its CatchHandler @ 001b7780 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_00214e98,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = acStack_90 + lVar5 + 1;
    }
    else if (((1 < iVar6) && (cVar3 == '0')) && ((byte)(acStack_90[lVar5 + 1] | 0x20U) == 0x78)) {
      pcVar10 = acStack_90 + lVar5 + 2;
    }
  }
  ios_base::getloc();
                    /* try { // try from 001b76d0 to 001b76ef has its CatchHandler @ 001b7798 */
  __num_put<char>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,
             pcVar9 + -((ulong)(((uint)uVar11 | 0x16) * 2 - 1) + 0xf & 0x1fffffff0),&pcStack_78,
             &local_80,(locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_00190c20(param_2,pcVar9 + -((ulong)(((uint)uVar11 | 0x16) * 2 - 1) + 0xf & 0x1fffffff0),
               pcStack_78,local_80,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b77b0  std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, unsigned long long) const */

void __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  char acStack_90 [8];
  __shared_count *local_88;
  char *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined2 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined2 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *(undefined1 *)puVar7 = 0x23;
    puVar7 = (undefined2 *)((long)puVar7 + 1);
  }
  *puVar7 = 0x6c6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 0x75;
  }
  *(undefined1 *)(puVar7 + 1) = uVar8;
  uVar11 = (ulong)(*(uint *)(param_3 + 8) >> 9) & 1;
  uVar1 = uVar11 + 0x17;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = acStack_90 + lVar5;
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b79d8 to 001b79eb has its CatchHandler @ 001b7a04 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_00214e98,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = acStack_90 + lVar5 + 1;
    }
    else if (((1 < iVar6) && (cVar3 == '0')) && ((byte)(acStack_90[lVar5 + 1] | 0x20U) == 0x78)) {
      pcVar10 = acStack_90 + lVar5 + 2;
    }
  }
  ios_base::getloc();
                    /* try { // try from 001b7954 to 001b7973 has its CatchHandler @ 001b7a1c */
  __num_put<char>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,
             pcVar9 + -((ulong)(((uint)uVar11 | 0x16) * 2 - 1) + 0xf & 0x1fffffff0),&pcStack_78,
             &local_80,(locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_00190c20(param_2,pcVar9 + -((ulong)(((uint)uVar11 | 0x16) * 2 - 1) + 0xf & 0x1fffffff0),
               pcStack_78,local_80,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b7a34  std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, double) const */

undefined8 __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  char *__ptr;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  char *__ptr_00;
  char *pcVar12;
  char *pcVar13;
  __shared_count *local_100;
  char *local_f8;
  char *pcStack_f0;
  char *local_e8;
  undefined8 local_e0;
  char acStack_d4 [60];
  char local_98 [32];
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  local_e0 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&local_e0 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&local_e0 | 2);
    local_e0 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)((long)puVar10 + 1);
  }
  uVar2 = uVar3 & 0x104;
  if (uVar2 == 0x104) {
    bVar6 = false;
    if ((uVar3 >> 0xe & 1) == 0) {
      *(undefined1 *)puVar10 = 0x61;
    }
    else {
      *(undefined1 *)puVar10 = 0x41;
    }
  }
  else {
    *puVar10 = 0x2a2e;
    if (uVar2 == 0x100) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x65;
      }
      else {
        uVar11 = 0x45;
      }
    }
    else if (uVar2 == 4) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x66;
      }
      else {
        uVar11 = 0x46;
      }
    }
    else if ((uVar3 >> 0xe & 1) == 0) {
      uVar11 = 0x67;
    }
    else {
      uVar11 = 0x47;
    }
    bVar6 = true;
    *(undefined1 *)(puVar10 + 1) = uVar11;
  }
  local_e8 = local_98;
  if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001b7d34 to 001b7d47 has its CatchHandler @ 001b7de4 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  if (bVar6) {
    iVar8 = __libcpp_snprintf_l(local_98,0x1e,(__locale_t *)DAT_00214e98,(char *)&local_e0,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
    if (iVar8 < 0x1e) goto LAB_001b7be0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001b7d6c to 001b7d7f has its CatchHandler @ 001b7de0 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
                    /* try { // try from 001b7b88 to 001b7b97 has its CatchHandler @ 001b7dfc */
    iVar8 = __libcpp_asprintf_l(&local_e8,(__locale_t *)DAT_00214e98,(char *)&local_e0,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
LAB_001b7bd4:
    __ptr_00 = local_e8;
    if (local_e8 == (char *)0x0) {
      iVar8 = __throw_bad_alloc();
      goto LAB_001b7be0;
    }
  }
  else {
    iVar8 = __libcpp_snprintf_l(local_98,0x1e,(__locale_t *)DAT_00214e98,(char *)&local_e0,param_1);
    if (0x1d < iVar8) {
      if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001b7da4 to 001b7db7 has its CatchHandler @ 001b7ddc */
        DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_00214ea0);
      }
                    /* try { // try from 001b7bc4 to 001b7bdf has its CatchHandler @ 001b7dfc */
      iVar8 = __libcpp_asprintf_l(&local_e8,(__locale_t *)DAT_00214e98,(char *)&local_e0,param_1);
      goto LAB_001b7bd4;
    }
LAB_001b7be0:
    __ptr_00 = (char *)0x0;
  }
  pcVar7 = local_e8;
  pcVar1 = local_e8 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_e8, uVar3 == 0x10)) {
    cVar4 = *local_e8;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_e8 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(local_e8[1] | 0x20U) == 0x78)) {
      pcVar12 = local_e8 + 2;
    }
  }
  if (local_e8 != local_98) {
    __ptr = (char *)malloc((long)iVar8 << 1);
    pcVar13 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_001b7c84;
                    /* try { // try from 001b7c78 to 001b7c7b has its CatchHandler @ 001b7dd0 */
    __throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar13 = acStack_d4;
LAB_001b7c84:
                    /* try { // try from 001b7c84 to 001b7c8f has its CatchHandler @ 001b7e18 */
  ios_base::getloc();
                    /* try { // try from 001b7c90 to 001b7caf has its CatchHandler @ 001b7e04 */
  __num_put<char>::__widen_and_group_float
            (pcVar7,pcVar12,pcVar1,pcVar13,&pcStack_f0,&local_f8,(locale *)&local_100);
  __shared_count::__release_shared(local_100);
                    /* try { // try from 001b7cbc to 001b7ccf has its CatchHandler @ 001b7e00 */
  uVar9 = FUN_00190c20(param_3,pcVar13,pcStack_f0,local_f8,param_4,param_5);
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b7e48  std::__ndk1::__num_put_base::__format_float =====

/* std::__ndk1::__num_put_base::__format_float(char*, char const*, unsigned int) */

bool std::__ndk1::__num_put_base::__format_float(char *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  
  pcVar3 = param_1;
  if ((param_3 >> 0xb & 1) != 0) {
    pcVar3 = param_1 + 1;
    *param_1 = '+';
  }
  pcVar4 = pcVar3;
  if ((param_3 >> 10 & 1) != 0) {
    pcVar4 = pcVar3 + 1;
    *pcVar3 = '#';
  }
  uVar1 = param_3 & 0x104;
  if (uVar1 != 0x104) {
    pcVar4[0] = '.';
    pcVar4[1] = '*';
    cVar6 = *param_2;
    pcVar4 = pcVar4 + 2;
  }
  else {
    cVar6 = *param_2;
  }
  if (cVar6 != '\0') {
    pcVar3 = pcVar4;
    pcVar7 = param_2 + 1;
    do {
      pcVar4 = pcVar3 + 1;
      *pcVar3 = cVar6;
      cVar6 = *pcVar7;
      pcVar3 = pcVar4;
      pcVar7 = pcVar7 + 1;
    } while (cVar6 != '\0');
  }
  if (uVar1 == 0x100) {
    bVar2 = (param_3 & 0x4000) == 0;
    cVar5 = 'E';
    cVar6 = 'e';
  }
  else if (uVar1 == 4) {
    bVar2 = (param_3 & 0x4000) == 0;
    cVar5 = 'F';
    cVar6 = 'f';
  }
  else if (uVar1 == 0x104) {
    bVar2 = (param_3 & 0x4000) == 0;
    cVar5 = 'A';
    cVar6 = 'a';
  }
  else {
    bVar2 = (param_3 & 0x4000) == 0;
    cVar5 = 'G';
    cVar6 = 'g';
  }
  if (!bVar2) {
    cVar6 = cVar5;
  }
  *pcVar4 = cVar6;
  return uVar1 != 0x104;
}


// ===== 001b7f08  std::__ndk1::__libcpp_asprintf_l =====

/* std::__ndk1::__libcpp_asprintf_l(char**, __locale_t*, char const*, ...) */

int std::__ndk1::__libcpp_asprintf_l(char **param_1,__locale_t *param_2,char *param_3,...)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_b8 = in_x3;
  uStack_b0 = in_x4;
  local_a8 = in_x5;
  uStack_a0 = in_x6;
  local_98 = in_x7;
  __dataset = uselocale((__locale_t)param_2);
  uStack_78 = 0xffffff80ffffffd8;
                    /* try { // try from 001b7f90 to 001b7f9f has its CatchHandler @ 001b7fe4 */
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_90;
  puStack_80 = auStack_c0;
  iVar2 = vasprintf(param_1,param_3,&local_90);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001b7fa8 to 001b7faf has its CatchHandler @ 001b7fe0 */
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b8000  std::__ndk1::__num_put<char>::__widen_and_group_float =====

/* std::__ndk1::__num_put<char>::__widen_and_group_float(char*, char*, char*, char*, char*&, char*&,
   std::__ndk1::locale const&) */

void std::__ndk1::__num_put<char>::__widen_and_group_float
               (char *param_1,char *param_2,char *param_3,char *param_4,char **param_5,
               char **param_6,locale *param_7)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined *puVar13;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 local_90;
  undefined *local_88;
  void *local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  long local_68;
  
  puVar1 = PTR___init_0020f928;
  puVar13 = PTR_id_0020f840;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar20 = *(long *)param_7;
  local_80 = (void *)0x0;
  local_90 = PTR_id_0020f840;
  local_88 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)PTR_id_0020f840,&local_78,FUN_001db064);
  }
  puVar6 = PTR_id_0020f930;
  lVar2 = *(long *)(lVar20 + 0x10);
  if (((long)*(int *)(puVar13 + 8) - 1U < (ulong)(*(long *)(lVar20 + 0x18) - lVar2 >> 3)) &&
     (plVar21 = *(long **)(lVar2 + ((long)*(int *)(puVar13 + 8) - 1U) * 8), plVar21 != (long *)0x0))
  {
    lVar20 = *(long *)param_7;
    local_80 = (void *)0x0;
    local_90 = PTR_id_0020f930;
    local_88 = puVar1;
    if (*(long *)PTR_id_0020f930 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      __call_once((ulong *)PTR_id_0020f930,&local_78,FUN_001db064);
    }
    lVar2 = *(long *)(lVar20 + 0x10);
    if (((long)*(int *)(puVar6 + 8) - 1U < (ulong)(*(long *)(lVar20 + 0x18) - lVar2 >> 3)) &&
       (plVar18 = *(long **)(lVar2 + ((long)*(int *)(puVar6 + 8) - 1U) * 8), plVar18 != (long *)0x0)
       ) {
      (**(code **)(*plVar18 + 0x28))(&local_90,plVar18);
      *param_6 = param_4;
      if ((*param_1 == '-') || (pbVar22 = (byte *)param_1, *param_1 == '+')) {
                    /* try { // try from 001b815c to 001b8163 has its CatchHandler @ 001b85ac */
        cVar7 = (**(code **)(*plVar21 + 0x38))(plVar21);
        pcVar10 = *param_6;
        pbVar22 = (byte *)(param_1 + 1);
        *param_6 = pcVar10 + 1;
        *pcVar10 = cVar7;
      }
      if ((((long)param_3 - (long)pbVar22 < 2) || (*pbVar22 != 0x30)) ||
         ((pbVar22[1] | 0x20) != 0x78)) {
        pbVar23 = pbVar22;
        pbVar24 = pbVar22;
        if (pbVar22 < param_3) {
          do {
            bVar3 = *pbVar23;
            if (((DAT_00214ea0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_00214ea0), iVar9 != 0)) {
                    /* try { // try from 001b82bc to 001b82cf has its CatchHandler @ 001b8594 */
              DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              __cxa_guard_release(&DAT_00214ea0);
            }
                    /* try { // try from 001b8294 to 001b829b has its CatchHandler @ 001b85b8 */
            iVar9 = isdigit_l((uint)bVar3,DAT_00214e98);
            pbVar24 = pbVar23;
          } while ((iVar9 != 0) &&
                  (pbVar23 = pbVar23 + 1, pbVar24 = (byte *)param_3, (byte *)param_3 != pbVar23));
        }
      }
      else {
                    /* try { // try from 001b81b0 to 001b81df has its CatchHandler @ 001b85b4 */
        cVar7 = (**(code **)(*plVar21 + 0x38))(plVar21,0x30);
        pcVar10 = *param_6;
        *param_6 = pcVar10 + 1;
        *pcVar10 = cVar7;
        cVar7 = (**(code **)(*plVar21 + 0x38))(plVar21,pbVar22[1]);
        pcVar10 = *param_6;
        pbVar22 = pbVar22 + 2;
        *param_6 = pcVar10 + 1;
        *pcVar10 = cVar7;
        pbVar23 = pbVar22;
        pbVar24 = pbVar22;
        if (pbVar22 < param_3) {
          do {
            bVar3 = *pbVar23;
            if (((DAT_00214ea0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_00214ea0), iVar9 != 0)) {
                    /* try { // try from 001b8244 to 001b8257 has its CatchHandler @ 001b8590 */
              DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              __cxa_guard_release(&DAT_00214ea0);
            }
                    /* try { // try from 001b821c to 001b8223 has its CatchHandler @ 001b85b0 */
            iVar9 = isxdigit_l((uint)bVar3,DAT_00214e98);
            pbVar24 = pbVar23;
          } while ((iVar9 != 0) &&
                  (pbVar23 = pbVar23 + 1, pbVar24 = (byte *)param_3, (byte *)param_3 != pbVar23));
        }
      }
      puVar13 = (undefined *)((ulong)local_90 >> 1 & 0x7f);
      if (((ulong)local_90 & 1) != 0) {
        puVar13 = local_88;
      }
      if (puVar13 == (undefined *)0x0) {
                    /* try { // try from 001b8470 to 001b847f has its CatchHandler @ 001b85b4 */
        (**(code **)(*plVar21 + 0x40))(plVar21,pbVar22,pbVar24,*param_6);
        *param_6 = *param_6 + ((long)pbVar24 - (long)pbVar22);
      }
      else {
        if ((pbVar22 != pbVar24) && (pbVar11 = pbVar24 + -1, pbVar23 = pbVar22, pbVar22 < pbVar11))
        {
          do {
            pbVar15 = pbVar23 + 1;
            bVar3 = *pbVar23;
            *pbVar23 = *pbVar11;
            pbVar12 = pbVar11 + -1;
            *pbVar11 = bVar3;
            pbVar11 = pbVar12;
            pbVar23 = pbVar15;
          } while (pbVar15 < pbVar12);
        }
                    /* try { // try from 001b8350 to 001b8357 has its CatchHandler @ 001b85a8 */
        cVar7 = (**(code **)(*plVar18 + 0x20))(plVar18);
        if (pbVar22 < pbVar24) {
          uVar19 = 0;
          uVar17 = 0;
          pbVar23 = pbVar22;
          do {
            puVar13 = (undefined *)(ulong)uVar19;
            if (((ulong)local_90 & 1) == 0) {
              bVar3 = puVar13[(long)&local_90 + 1];
            }
            else {
              bVar3 = *(byte *)((long)local_80 + (long)puVar13);
            }
            if ((bVar3 != 0) && (uVar17 == bVar3)) {
              pcVar10 = *param_6;
              uVar17 = 0;
              *param_6 = pcVar10 + 1;
              *pcVar10 = cVar7;
              puVar1 = (undefined *)((ulong)local_90 >> 1 & 0x7f);
              if (((ulong)local_90 & 1) != 0) {
                puVar1 = local_88;
              }
              if (puVar13 < puVar1 + -1) {
                uVar19 = uVar19 + 1;
              }
            }
                    /* try { // try from 001b83e4 to 001b83eb has its CatchHandler @ 001b85c0 */
            cVar8 = (**(code **)(*plVar21 + 0x38))(plVar21,*pbVar23);
            pcVar10 = *param_6;
            pbVar23 = pbVar23 + 1;
            uVar17 = uVar17 + 1;
            *param_6 = pcVar10 + 1;
            *pcVar10 = cVar8;
          } while (pbVar24 != pbVar23);
        }
        if ((param_4 + ((long)pbVar22 - (long)param_1) != *param_6) &&
           (pcVar10 = *param_6 + -1, param_4 + ((long)pbVar22 - (long)param_1) < pcVar10)) {
          pcVar5 = param_4 + ((long)pbVar22 - (long)param_1);
          do {
            pcVar16 = pcVar5 + 1;
            cVar7 = *pcVar5;
            *pcVar5 = *pcVar10;
            pcVar14 = pcVar10 + -1;
            *pcVar10 = cVar7;
            pcVar10 = pcVar14;
            pcVar5 = pcVar16;
          } while (pcVar16 < pcVar14);
        }
      }
      pbVar22 = pbVar24;
      if (pbVar24 < param_3) {
        do {
          if (*pbVar24 == 0x2e) {
                    /* try { // try from 001b84e4 to 001b851b has its CatchHandler @ 001b85b4 */
            cVar7 = (**(code **)(*plVar18 + 0x18))(plVar18);
            pcVar10 = *param_6;
            *param_6 = pcVar10 + 1;
            *pcVar10 = cVar7;
            pbVar22 = pbVar24 + 1;
            break;
          }
                    /* try { // try from 001b84b0 to 001b84b7 has its CatchHandler @ 001b85bc */
          cVar7 = (**(code **)(*plVar21 + 0x38))(plVar21);
          pcVar10 = *param_6;
          pbVar24 = pbVar24 + 1;
          *param_6 = pcVar10 + 1;
          *pcVar10 = cVar7;
          pbVar22 = (byte *)param_3;
        } while ((byte *)param_3 != pbVar24);
      }
      (**(code **)(*plVar21 + 0x40))(plVar21,pbVar22,param_3,*param_6);
      pcVar10 = *param_6;
      *param_6 = pcVar10 + ((long)param_3 - (long)pbVar22);
      pcVar10 = pcVar10 + ((long)param_3 - (long)pbVar22);
      if (param_2 != param_3) {
        pcVar10 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pcVar10;
      if (((ulong)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0017cb1c();
}


// ===== 001b85dc  std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, long double) const */

undefined8 __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  char *__ptr;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  char *__ptr_00;
  char *pcVar12;
  char *pcVar13;
  __shared_count *local_f0;
  char *local_e8;
  char *pcStack_e0;
  char *local_d8;
  undefined8 local_d0;
  char acStack_c4 [60];
  char local_88 [32];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_d0 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&local_d0 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&local_d0 | 2);
    local_d0 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)((long)puVar10 + 1);
  }
  uVar2 = uVar3 & 0x104;
  if (uVar2 == 0x104) {
    bVar6 = false;
    *(undefined1 *)puVar10 = 0x4c;
    if ((uVar3 >> 0xe & 1) == 0) {
      *(undefined1 *)((long)puVar10 + 1) = 0x61;
    }
    else {
      *(undefined1 *)((long)puVar10 + 1) = 0x41;
    }
  }
  else {
    *puVar10 = 0x2a2e;
    *(undefined1 *)(puVar10 + 1) = 0x4c;
    if (uVar2 == 0x100) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x65;
      }
      else {
        uVar11 = 0x45;
      }
    }
    else if (uVar2 == 4) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x66;
      }
      else {
        uVar11 = 0x46;
      }
    }
    else if ((uVar3 >> 0xe & 1) == 0) {
      uVar11 = 0x67;
    }
    else {
      uVar11 = 0x47;
    }
    bVar6 = true;
    *(undefined1 *)((long)puVar10 + 3) = uVar11;
  }
  local_d8 = local_88;
  if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001b88e4 to 001b88f7 has its CatchHandler @ 001b8994 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  if (bVar6) {
    iVar8 = __libcpp_snprintf_l(local_88,0x1e,(__locale_t *)DAT_00214e98,(char *)&local_d0,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
    if (iVar8 < 0x1e) goto LAB_001b8794;
    if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001b891c to 001b892f has its CatchHandler @ 001b8990 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
                    /* try { // try from 001b873c to 001b874b has its CatchHandler @ 001b89ac */
    iVar8 = __libcpp_asprintf_l(&local_d8,(__locale_t *)DAT_00214e98,(char *)&local_d0,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
LAB_001b8788:
    __ptr_00 = local_d8;
    if (local_d8 == (char *)0x0) {
      iVar8 = __throw_bad_alloc();
      goto LAB_001b8794;
    }
  }
  else {
    iVar8 = __libcpp_snprintf_l(local_88,0x1e,(__locale_t *)DAT_00214e98,(char *)&local_d0,param_1);
    if (0x1d < iVar8) {
      if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001b8954 to 001b8967 has its CatchHandler @ 001b898c */
        DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_00214ea0);
      }
                    /* try { // try from 001b8778 to 001b8793 has its CatchHandler @ 001b89ac */
      iVar8 = __libcpp_asprintf_l(&local_d8,(__locale_t *)DAT_00214e98,(char *)&local_d0,param_1);
      goto LAB_001b8788;
    }
LAB_001b8794:
    __ptr_00 = (char *)0x0;
  }
  pcVar7 = local_d8;
  pcVar1 = local_d8 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_d8, uVar3 == 0x10)) {
    cVar4 = *local_d8;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_d8 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(local_d8[1] | 0x20U) == 0x78)) {
      pcVar12 = local_d8 + 2;
    }
  }
  if (local_d8 != local_88) {
    __ptr = (char *)malloc((long)iVar8 << 1);
    pcVar13 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_001b8838;
                    /* try { // try from 001b882c to 001b882f has its CatchHandler @ 001b8980 */
    __throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar13 = acStack_c4;
LAB_001b8838:
                    /* try { // try from 001b8838 to 001b8843 has its CatchHandler @ 001b89c8 */
  ios_base::getloc();
                    /* try { // try from 001b8844 to 001b8863 has its CatchHandler @ 001b89b4 */
  __num_put<char>::__widen_and_group_float
            (pcVar7,pcVar12,pcVar1,pcVar13,&pcStack_e0,&local_e8,(locale *)&local_f0);
  __shared_count::__release_shared(local_f0);
                    /* try { // try from 001b8870 to 001b8883 has its CatchHandler @ 001b89b0 */
  uVar9 = FUN_00190c20(param_3,pcVar13,pcStack_e0,local_e8,param_4,param_5);
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b89f8  std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, void const*) const */

void __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  __shared_count *local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined **local_b8;
  char local_ac [8];
  char acStack_a4 [40];
  char local_7c [20];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_ac[4] = '\0';
  local_ac[5] = '\0';
  local_ac[0] = '%';
  local_ac[1] = 'p';
  local_ac[2] = '\0';
  local_ac[3] = '\0';
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b8bf4 to 001b8c07 has its CatchHandler @ 001b8c24 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(local_7c,0x14,(__locale_t *)DAT_00214e98,local_ac,param_5);
  pcVar1 = local_7c + iVar6;
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar8 = pcVar1;
  if (uVar2 == 0x20) goto LAB_001b8ae8;
  if (uVar2 == 0x10) {
    if ((local_7c[0] == '-') || (local_7c[0] == '+')) {
      pcVar8 = (char *)((ulong)local_7c | 1);
      goto LAB_001b8ae8;
    }
    if ((1 < iVar6) && ((local_7c[0] == '0' && ((byte)(local_7c[1] | 0x20U) == 0x78)))) {
      pcVar8 = (char *)((ulong)local_7c | 2);
      goto LAB_001b8ae8;
    }
  }
  pcVar8 = local_7c;
LAB_001b8ae8:
  ios_base::getloc();
  puVar5 = PTR_id_0020f840;
  local_c8 = 0;
  local_d8 = PTR_id_0020f840;
  puStack_d0 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_b8 = &local_d8;
    local_c0 = &local_b8;
                    /* try { // try from 001b8b28 to 001b8b3f has its CatchHandler @ 001b8c3c */
    __call_once((ulong *)PTR_id_0020f840,&local_c0,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_e0 + 0x18) - *(long *)(local_e0 + 0x10) >> 3) <=
       (long)*(int *)(puVar5 + 8) - 1U) ||
     (plVar7 = *(long **)(*(long *)(local_e0 + 0x10) + ((long)*(int *)(puVar5 + 8) - 1U) * 8),
     plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b8c1c to 001b8c1f has its CatchHandler @ 001b8c3c */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_e0);
  (**(code **)(*plVar7 + 0x40))(plVar7,local_7c,pcVar1,acStack_a4);
  pcVar3 = acStack_a4 + iVar6;
  if (pcVar8 != pcVar1) {
    pcVar3 = pcVar8 + (long)(acStack_a4 + -(long)local_7c);
  }
  FUN_00190c20(param_2,acStack_a4,pcVar3,acStack_a4 + iVar6,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b8c54  std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, bool) const */

long * __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  int *piVar8;
  __shared_count *local_78;
  undefined8 local_70;
  undefined *local_68;
  int *local_60;
  undefined8 **local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    plVar5 = (long *)(**(code **)(*(long *)this + 0x30))(this,param_2,param_3,param_4,param_5 & 1);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return plVar5;
    }
LAB_001b8e14:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ios_base::getloc();
  puVar3 = PTR_id_0020f940;
  local_60 = (int *)0x0;
  local_70 = PTR_id_0020f940;
  local_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f940 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 001b8cf0 to 001b8d07 has its CatchHandler @ 001b8e18 */
    __call_once((ulong *)PTR_id_0020f940,&local_58,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_78 + 0x18) - *(long *)(local_78 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar5 = *(long **)(*(long *)(local_78 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001b8e10 to 001b8e13 has its CatchHandler @ 001b8e18 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_78);
  if ((param_5 & 1) == 0) {
    pcVar7 = *(code **)(*plVar5 + 0x38);
  }
  else {
    pcVar7 = *(code **)(*plVar5 + 0x30);
  }
  (*pcVar7)(&local_70,plVar5);
  uVar6 = (ulong)local_70 & 0xff;
  piVar8 = (int *)((ulong)&local_70 | 4);
  if (((ulong)local_70 & 1) != 0) {
    piVar8 = local_60;
  }
LAB_001b8d88:
  if ((uVar6 & 1) == 0) {
    if (piVar8 == (int *)((long)&local_70 + (uVar6 >> 1) * 4 + 4)) goto LAB_001b8de4;
  }
  else if (piVar8 == local_60 + (long)local_68) {
    operator_delete(local_60);
LAB_001b8de4:
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return param_2;
    }
    goto LAB_001b8e14;
  }
  plVar5 = param_2;
  if (param_2 != (long *)0x0) {
    piVar1 = (int *)param_2[6];
    iVar4 = *piVar8;
    if (piVar1 == (int *)param_2[7]) {
                    /* try { // try from 001b8dd0 to 001b8ddb has its CatchHandler @ 001b8e30 */
      iVar4 = (**(code **)(*param_2 + 0x68))(param_2);
    }
    else {
      param_2[6] = (long)(piVar1 + 1);
      *piVar1 = iVar4;
    }
    uVar6 = (ulong)local_70 & 0xff;
    plVar5 = (long *)0x0;
    if (iVar4 != -1) {
      plVar5 = param_2;
    }
  }
  param_2 = plVar5;
  piVar8 = piVar8 + 1;
  goto LAB_001b8d88;
}


// ===== 001b8e4c  std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, long) const */

void __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined4 uStack_90;
  __shared_count *local_88;
  wchar_t *local_80;
  wchar_t *pwStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_6c = 0;
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined1 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *puVar7 = 0x23;
    puVar7 = puVar7 + 1;
  }
  *puVar7 = 0x6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 100;
  }
  puVar7[1] = uVar8;
  uVar11 = (ulong)(*(uint *)(param_3 + 8) >> 9) & 1;
  uVar1 = uVar11 + 0x17;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = (char *)((long)&uStack_90 + lVar5);
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b906c to 001b907f has its CatchHandler @ 001b9098 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_00214e98,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = (char *)((long)&uStack_90 + lVar5 + 1);
    }
    else if (((1 < iVar6) && (cVar3 == '0')) &&
            ((*(byte *)((long)&uStack_90 + lVar5 + 1) | 0x20) == 0x78)) {
      pcVar10 = (char *)((long)&uStack_90 + lVar5 + 2);
    }
  }
  ios_base::getloc();
                    /* try { // try from 001b8fe8 to 001b9007 has its CatchHandler @ 001b90b0 */
  __num_put<wchar_t>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,
             (wchar_t *)(pcVar9 + -((ulong)((int)uVar11 * 8 + 0xbb) & 0xf0)),&pwStack_78,&local_80,
             (locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_001b94c8(param_2,pcVar9 + -((ulong)((int)uVar11 * 8 + 0xbb) & 0xf0),pwStack_78,local_80,
               param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b90c8  std::__ndk1::__num_put<wchar_t>::__widen_and_group_int =====

/* std::__ndk1::__num_put<wchar_t>::__widen_and_group_int(char*, char*, char*, wchar_t*, wchar_t*&,
   wchar_t*&, std::__ndk1::locale const&) */

void std::__ndk1::__num_put<wchar_t>::__widen_and_group_int
               (char *param_1,char *param_2,char *param_3,wchar_t *param_4,wchar_t **param_5,
               wchar_t **param_6,locale *param_7)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  undefined *puVar6;
  wchar_t wVar7;
  wchar_t wVar8;
  wchar_t *pwVar9;
  char *pcVar10;
  char *pcVar11;
  undefined *puVar12;
  wchar_t *pwVar13;
  char *pcVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  uint uVar17;
  long lVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  char *pcVar23;
  undefined8 local_90;
  undefined *local_88;
  void *local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  long local_68;
  
  puVar1 = PTR___init_0020f928;
  puVar12 = PTR_id_0020f8b8;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar18 = *(long *)param_7;
  local_80 = (void *)0x0;
  local_90 = PTR_id_0020f8b8;
  local_88 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)PTR_id_0020f8b8,&local_78,FUN_001db064);
  }
  puVar6 = PTR_id_0020f940;
  lVar2 = *(long *)(lVar18 + 0x10);
  if (((long)*(int *)(puVar12 + 8) - 1U < (ulong)(*(long *)(lVar18 + 0x18) - lVar2 >> 3)) &&
     (plVar20 = *(long **)(lVar2 + ((long)*(int *)(puVar12 + 8) - 1U) * 8), plVar20 != (long *)0x0))
  {
    lVar18 = *(long *)param_7;
    local_80 = (void *)0x0;
    local_90 = PTR_id_0020f940;
    local_88 = puVar1;
    if (*(long *)PTR_id_0020f940 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      __call_once((ulong *)PTR_id_0020f940,&local_78,FUN_001db064);
    }
    lVar2 = *(long *)(lVar18 + 0x10);
    if (((long)*(int *)(puVar6 + 8) - 1U < (ulong)(*(long *)(lVar18 + 0x18) - lVar2 >> 3)) &&
       (plVar21 = *(long **)(lVar2 + ((long)*(int *)(puVar6 + 8) - 1U) * 8), plVar21 != (long *)0x0)
       ) {
      (**(code **)(*plVar21 + 0x28))(&local_90,plVar21);
      puVar12 = (undefined *)((ulong)local_90 >> 1 & 0x7f);
      if (((ulong)local_90 & 1) != 0) {
        puVar12 = local_88;
      }
      if (puVar12 == (undefined *)0x0) {
                    /* try { // try from 001b93d0 to 001b93e3 has its CatchHandler @ 001b94a0 */
        (**(code **)(*plVar20 + 0x60))(plVar20,param_1,param_3,param_4);
        *param_6 = param_4 + ((long)param_3 - (long)param_1);
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar19 = param_1, *param_1 == '+')) {
                    /* try { // try from 001b9230 to 001b92ab has its CatchHandler @ 001b94a8 */
          wVar7 = (**(code **)(*plVar20 + 0x58))(plVar20);
          pwVar9 = *param_6;
          pcVar19 = param_1 + 1;
          *param_6 = pwVar9 + 1;
          *pwVar9 = wVar7;
        }
        if (((1 < (long)param_3 - (long)pcVar19) && (*pcVar19 == '0')) &&
           ((byte)(pcVar19[1] | 0x20U) == 0x78)) {
          wVar7 = (**(code **)(*plVar20 + 0x58))(plVar20,0x30);
          pwVar9 = *param_6;
          *param_6 = pwVar9 + 1;
          *pwVar9 = wVar7;
          wVar7 = (**(code **)(*plVar20 + 0x58))(plVar20,pcVar19[1]);
          pwVar9 = *param_6;
          pcVar19 = pcVar19 + 2;
          *param_6 = pwVar9 + 1;
          *pwVar9 = wVar7;
        }
        if ((pcVar19 != param_3) && (pcVar10 = param_3 + -1, pcVar23 = pcVar19, pcVar19 < pcVar10))
        {
          do {
            pcVar14 = pcVar23 + 1;
            cVar4 = *pcVar23;
            *pcVar23 = *pcVar10;
            pcVar11 = pcVar10 + -1;
            *pcVar10 = cVar4;
            pcVar10 = pcVar11;
            pcVar23 = pcVar14;
          } while (pcVar14 < pcVar11);
        }
                    /* try { // try from 001b92fc to 001b9303 has its CatchHandler @ 001b94a4 */
        wVar7 = (**(code **)(*plVar21 + 0x20))(plVar21);
        if (pcVar19 < param_3) {
          uVar17 = 0;
          uVar22 = 0;
          pcVar23 = pcVar19;
          do {
            puVar12 = (undefined *)(ulong)uVar17;
            if (((ulong)local_90 & 1) == 0) {
              bVar3 = puVar12[(long)&local_90 + 1];
            }
            else {
              bVar3 = *(byte *)((long)local_80 + (long)puVar12);
            }
            if ((bVar3 != 0) && (uVar22 == bVar3)) {
              pwVar9 = *param_6;
              uVar22 = 0;
              *param_6 = pwVar9 + 1;
              *pwVar9 = wVar7;
              puVar1 = (undefined *)((ulong)local_90 >> 1 & 0x7f);
              if (((ulong)local_90 & 1) != 0) {
                puVar1 = local_88;
              }
              if (puVar12 < puVar1 + -1) {
                uVar17 = uVar17 + 1;
              }
            }
                    /* try { // try from 001b9394 to 001b939b has its CatchHandler @ 001b94ac */
            wVar8 = (**(code **)(*plVar20 + 0x58))(plVar20,*pcVar23);
            pwVar15 = *param_6;
            pcVar23 = pcVar23 + 1;
            uVar22 = uVar22 + 1;
            pwVar9 = pwVar15 + 1;
            *param_6 = pwVar9;
            *pwVar15 = wVar8;
          } while (param_3 != pcVar23);
        }
        else {
          pwVar9 = *param_6;
        }
        if ((param_4 + ((long)pcVar19 - (long)param_1) != pwVar9) &&
           (param_4 + ((long)pcVar19 - (long)param_1) < pwVar9 + -1)) {
          pwVar15 = pwVar9 + -1;
          pwVar9 = param_4 + ((long)pcVar19 - (long)param_1);
          do {
            pwVar16 = pwVar9 + 1;
            wVar7 = *pwVar9;
            *pwVar9 = *pwVar15;
            pwVar13 = pwVar15 + -1;
            *pwVar15 = wVar7;
            pwVar15 = pwVar13;
            pwVar9 = pwVar16;
          } while (pwVar16 < pwVar13);
        }
      }
      pwVar9 = *param_6;
      if (param_2 != param_3) {
        pwVar9 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pwVar9;
      if (((ulong)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0017cb1c();
}


// ===== 001b94c8  FUN_001b94c8 =====

long * FUN_001b94c8(long *param_1,long param_2,long param_3,long param_4,long param_5,
                   wchar_t param_6)

{
  ulong __n;
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  wchar_t *pwVar5;
  ulong local_80;
  ulong local_78;
  wchar_t *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_001b963c;
  lVar3 = param_4 - param_2 >> 2;
  __n = *(long *)(param_5 + 0x18) - lVar3;
  if (__n == 0 || *(long *)(param_5 + 0x18) < lVar3) {
    __n = 0;
  }
  if ((param_3 - param_2 < 1) ||
     (lVar4 = param_3 - param_2 >> 2, lVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4),
     lVar3 == lVar4)) {
    if (0 < (long)__n) {
      if (0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 5) {
        pwVar5 = (wchar_t *)((ulong)&local_80 | 4);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      }
      else {
        if ((__n + 4 >> 0x3e & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        uVar2 = __n + 4 & 0x7ffffffffffffffc;
        pwVar5 = (wchar_t *)operator_new(uVar2 << 2);
        local_80 = uVar2 | 1;
        local_78 = __n;
        local_70 = pwVar5;
      }
                    /* try { // try from 001b95a4 to 001b95b3 has its CatchHandler @ 001b96a4 */
      wmemset(pwVar5,param_6,__n);
      pwVar5[__n] = L'\0';
      pwVar5 = (wchar_t *)((ulong)&local_80 | 4);
      if ((local_80 & 1) != 0) {
        pwVar5 = local_70;
      }
                    /* try { // try from 001b95d8 to 001b95e3 has its CatchHandler @ 001b9688 */
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1,pwVar5,__n);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (uVar2 != __n) goto LAB_001b9638;
    }
    if ((param_4 - param_3 < 1) ||
       (lVar4 = param_4 - param_3 >> 2,
       lVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_3,lVar4), lVar3 == lVar4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_001b963c;
    }
  }
LAB_001b9638:
  param_1 = (long *)0x0;
LAB_001b963c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b96a8  std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, long long) const */

void __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined4 uStack_90;
  __shared_count *local_88;
  wchar_t *local_80;
  wchar_t *pwStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined2 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined2 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *(undefined1 *)puVar7 = 0x23;
    puVar7 = (undefined2 *)((long)puVar7 + 1);
  }
  *puVar7 = 0x6c6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 100;
  }
  *(undefined1 *)(puVar7 + 1) = uVar8;
  uVar11 = (ulong)(*(uint *)(param_3 + 8) >> 9) & 1;
  uVar1 = uVar11 + 0x17;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = (char *)((long)&uStack_90 + lVar5);
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b98c4 to 001b98d7 has its CatchHandler @ 001b98f0 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_00214e98,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = (char *)((long)&uStack_90 + lVar5 + 1);
    }
    else if (((1 < iVar6) && (cVar3 == '0')) &&
            ((*(byte *)((long)&uStack_90 + lVar5 + 1) | 0x20) == 0x78)) {
      pcVar10 = (char *)((long)&uStack_90 + lVar5 + 2);
    }
  }
  ios_base::getloc();
                    /* try { // try from 001b9840 to 001b985f has its CatchHandler @ 001b9908 */
  __num_put<wchar_t>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,
             (wchar_t *)(pcVar9 + -((ulong)((int)uVar11 * 8 + 0xbb) & 0xf0)),&pwStack_78,&local_80,
             (locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_001b94c8(param_2,pcVar9 + -((ulong)((int)uVar11 * 8 + 0xbb) & 0xf0),pwStack_78,local_80,
               param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b9920  std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, unsigned long) const */

void __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined4 uStack_90;
  __shared_count *local_88;
  wchar_t *local_80;
  wchar_t *pwStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_6c = 0;
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined1 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *puVar7 = 0x23;
    puVar7 = puVar7 + 1;
  }
  *puVar7 = 0x6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 0x75;
  }
  puVar7[1] = uVar8;
  uVar11 = (ulong)(*(uint *)(param_3 + 8) >> 9) & 1;
  uVar1 = uVar11 + 0x17;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = (char *)((long)&uStack_90 + lVar5);
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b9b50 to 001b9b63 has its CatchHandler @ 001b9b7c */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_00214e98,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = (char *)((long)&uStack_90 + lVar5 + 1);
    }
    else if (((1 < iVar6) && (cVar3 == '0')) &&
            ((*(byte *)((long)&uStack_90 + lVar5 + 1) | 0x20) == 0x78)) {
      pcVar10 = (char *)((long)&uStack_90 + lVar5 + 2);
    }
  }
  ios_base::getloc();
                    /* try { // try from 001b9acc to 001b9aeb has its CatchHandler @ 001b9b94 */
  __num_put<wchar_t>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,
             (wchar_t *)(pcVar9 + -((ulong)(((uint)uVar11 | 0x16) * 2 - 1) * 4 + 0xf & 0x7fffffff0))
             ,&pwStack_78,&local_80,(locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_001b94c8(param_2,pcVar9 + -((ulong)(((uint)uVar11 | 0x16) * 2 - 1) * 4 + 0xf & 0x7fffffff0),
               pwStack_78,local_80,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b9bac  std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, unsigned long long) const
    */

void __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined4 uStack_90;
  __shared_count *local_88;
  wchar_t *local_80;
  wchar_t *pwStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined2 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined2 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *(undefined1 *)puVar7 = 0x23;
    puVar7 = (undefined2 *)((long)puVar7 + 1);
  }
  *puVar7 = 0x6c6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 0x75;
  }
  *(undefined1 *)(puVar7 + 1) = uVar8;
  uVar11 = (ulong)(*(uint *)(param_3 + 8) >> 9) & 1;
  uVar1 = uVar11 + 0x17;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = (char *)((long)&uStack_90 + lVar5);
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001b9dd8 to 001b9deb has its CatchHandler @ 001b9e04 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_00214e98,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = (char *)((long)&uStack_90 + lVar5 + 1);
    }
    else if (((1 < iVar6) && (cVar3 == '0')) &&
            ((*(byte *)((long)&uStack_90 + lVar5 + 1) | 0x20) == 0x78)) {
      pcVar10 = (char *)((long)&uStack_90 + lVar5 + 2);
    }
  }
  ios_base::getloc();
                    /* try { // try from 001b9d54 to 001b9d73 has its CatchHandler @ 001b9e1c */
  __num_put<wchar_t>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,
             (wchar_t *)(pcVar9 + -((ulong)(((uint)uVar11 | 0x16) * 2 - 1) * 4 + 0xf & 0x7fffffff0))
             ,&pwStack_78,&local_80,(locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_001b94c8(param_2,pcVar9 + -((ulong)(((uint)uVar11 | 0x16) * 2 - 1) * 4 + 0xf & 0x7fffffff0),
               pwStack_78,local_80,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b9e34  std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, double) const */

undefined8 __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  wchar_t *__ptr;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  char *__ptr_00;
  char *pcVar12;
  wchar_t *pwVar13;
  __shared_count *local_1b0;
  wchar_t *local_1a8;
  wchar_t *pwStack_1a0;
  char *local_198;
  undefined8 local_190;
  wchar_t awStack_184 [57];
  char local_a0 [32];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  local_190 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&local_190 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&local_190 | 2);
    local_190 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)((long)puVar10 + 1);
  }
  uVar2 = uVar3 & 0x104;
  if (uVar2 == 0x104) {
    bVar6 = false;
    if ((uVar3 >> 0xe & 1) == 0) {
      *(undefined1 *)puVar10 = 0x61;
    }
    else {
      *(undefined1 *)puVar10 = 0x41;
    }
  }
  else {
    *puVar10 = 0x2a2e;
    if (uVar2 == 0x100) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x65;
      }
      else {
        uVar11 = 0x45;
      }
    }
    else if (uVar2 == 4) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x66;
      }
      else {
        uVar11 = 0x46;
      }
    }
    else if ((uVar3 >> 0xe & 1) == 0) {
      uVar11 = 0x67;
    }
    else {
      uVar11 = 0x47;
    }
    bVar6 = true;
    *(undefined1 *)(puVar10 + 1) = uVar11;
  }
  local_198 = local_a0;
  if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001ba134 to 001ba147 has its CatchHandler @ 001ba1e8 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  if (bVar6) {
    iVar8 = __libcpp_snprintf_l(local_a0,0x1e,(__locale_t *)DAT_00214e98,(char *)&local_190,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
    if (0x1d < iVar8) {
      if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001ba16c to 001ba17f has its CatchHandler @ 001ba1e4 */
        DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_00214ea0);
      }
                    /* try { // try from 001b9f88 to 001b9f97 has its CatchHandler @ 001ba200 */
      iVar8 = __libcpp_asprintf_l(&local_198,(__locale_t *)DAT_00214e98,(char *)&local_190,param_1,
                                  (ulong)*(uint *)(param_4 + 0x10));
LAB_001b9fd4:
      __ptr_00 = local_198;
      if (local_198 != (char *)0x0) goto LAB_001b9fe4;
      iVar8 = __throw_bad_alloc();
    }
  }
  else {
    iVar8 = __libcpp_snprintf_l(local_a0,0x1e,(__locale_t *)DAT_00214e98,(char *)&local_190,param_1)
    ;
    if (0x1d < iVar8) {
      if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001ba1a4 to 001ba1b7 has its CatchHandler @ 001ba1e0 */
        DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_00214ea0);
      }
                    /* try { // try from 001b9fc4 to 001b9fdf has its CatchHandler @ 001ba200 */
      iVar8 = __libcpp_asprintf_l(&local_198,(__locale_t *)DAT_00214e98,(char *)&local_190,param_1);
      goto LAB_001b9fd4;
    }
  }
  __ptr_00 = (char *)0x0;
LAB_001b9fe4:
  pcVar7 = local_198;
  pcVar1 = local_198 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_198, uVar3 == 0x10)) {
    cVar4 = *local_198;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_198 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(local_198[1] | 0x20U) == 0x78)) {
      pcVar12 = local_198 + 2;
    }
  }
  if (local_198 == local_a0) {
    __ptr = (wchar_t *)0x0;
    pwVar13 = awStack_184;
  }
  else {
    __ptr = (wchar_t *)malloc((long)iVar8 << 3);
    pwVar13 = __ptr;
    if (__ptr == (wchar_t *)0x0) {
                    /* try { // try from 001ba1d0 to 001ba1d3 has its CatchHandler @ 001ba1d4 */
      uVar9 = __throw_bad_alloc();
                    /* catch() { ... } // from try @ 001ba1d0 with catch @ 001ba1d4 */
      if (__ptr_00 != (char *)0x0) {
        free(__ptr_00);
                    /* WARNING: Subroutine does not return */
        FUN_00200e50(uVar9);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar9);
    }
  }
                    /* try { // try from 001ba084 to 001ba08f has its CatchHandler @ 001ba21c */
  ios_base::getloc();
                    /* try { // try from 001ba090 to 001ba0af has its CatchHandler @ 001ba208 */
  __num_put<wchar_t>::__widen_and_group_float
            (pcVar7,pcVar12,pcVar1,pwVar13,&pwStack_1a0,&local_1a8,(locale *)&local_1b0);
  __shared_count::__release_shared(local_1b0);
                    /* try { // try from 001ba0bc to 001ba0cf has its CatchHandler @ 001ba204 */
  uVar9 = FUN_001b94c8(param_3,pwVar13,pwStack_1a0,local_1a8,param_4,param_5);
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ba24c  std::__ndk1::__num_put<wchar_t>::__widen_and_group_float =====

/* std::__ndk1::__num_put<wchar_t>::__widen_and_group_float(char*, char*, char*, wchar_t*,
   wchar_t*&, wchar_t*&, std::__ndk1::locale const&) */

void std::__ndk1::__num_put<wchar_t>::__widen_and_group_float
               (char *param_1,char *param_2,char *param_3,wchar_t *param_4,wchar_t **param_5,
               wchar_t **param_6,locale *param_7)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  wchar_t wVar6;
  int iVar7;
  wchar_t wVar8;
  wchar_t *pwVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined *puVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  byte *pbVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 local_90;
  undefined *local_88;
  void *local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  long local_68;
  
  puVar1 = PTR___init_0020f928;
  puVar12 = PTR_id_0020f8b8;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar19 = *(long *)param_7;
  local_80 = (void *)0x0;
  local_90 = PTR_id_0020f8b8;
  local_88 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)PTR_id_0020f8b8,&local_78,FUN_001db064);
  }
  puVar5 = PTR_id_0020f940;
  lVar2 = *(long *)(lVar19 + 0x10);
  if (((long)*(int *)(puVar12 + 8) - 1U < (ulong)(*(long *)(lVar19 + 0x18) - lVar2 >> 3)) &&
     (plVar21 = *(long **)(lVar2 + ((long)*(int *)(puVar12 + 8) - 1U) * 8), plVar21 != (long *)0x0))
  {
    lVar19 = *(long *)param_7;
    local_80 = (void *)0x0;
    local_90 = PTR_id_0020f940;
    local_88 = puVar1;
    if (*(long *)PTR_id_0020f940 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      __call_once((ulong *)PTR_id_0020f940,&local_78,FUN_001db064);
    }
    lVar2 = *(long *)(lVar19 + 0x10);
    if (((long)*(int *)(puVar5 + 8) - 1U < (ulong)(*(long *)(lVar19 + 0x18) - lVar2 >> 3)) &&
       (plVar20 = *(long **)(lVar2 + ((long)*(int *)(puVar5 + 8) - 1U) * 8), plVar20 != (long *)0x0)
       ) {
      (**(code **)(*plVar20 + 0x28))(&local_90,plVar20);
      *param_6 = param_4;
      if ((*param_1 == '-') || (pbVar22 = (byte *)param_1, *param_1 == '+')) {
                    /* try { // try from 001ba3a8 to 001ba3af has its CatchHandler @ 001ba800 */
        wVar6 = (**(code **)(*plVar21 + 0x58))(plVar21);
        pwVar9 = *param_6;
        pbVar22 = (byte *)(param_1 + 1);
        *param_6 = pwVar9 + 1;
        *pwVar9 = wVar6;
      }
      if ((((long)param_3 - (long)pbVar22 < 2) || (*pbVar22 != 0x30)) ||
         ((pbVar22[1] | 0x20) != 0x78)) {
        pbVar24 = pbVar22;
        pbVar23 = pbVar22;
        if (pbVar22 < param_3) {
          do {
            bVar3 = *pbVar23;
            if (((DAT_00214ea0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_00214ea0), iVar7 != 0)) {
                    /* try { // try from 001ba50c to 001ba51f has its CatchHandler @ 001ba7e8 */
              DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              __cxa_guard_release(&DAT_00214ea0);
            }
                    /* try { // try from 001ba4e4 to 001ba4eb has its CatchHandler @ 001ba80c */
            iVar7 = isdigit_l((uint)bVar3,DAT_00214e98);
            pbVar24 = pbVar23;
          } while ((iVar7 != 0) &&
                  (pbVar23 = pbVar23 + 1, pbVar24 = (byte *)param_3, (byte *)param_3 != pbVar23));
        }
      }
      else {
                    /* try { // try from 001ba3f8 to 001ba427 has its CatchHandler @ 001ba808 */
        wVar6 = (**(code **)(*plVar21 + 0x58))(plVar21,0x30);
        pwVar9 = *param_6;
        *param_6 = pwVar9 + 1;
        *pwVar9 = wVar6;
        wVar6 = (**(code **)(*plVar21 + 0x58))(plVar21,pbVar22[1]);
        pwVar9 = *param_6;
        pbVar22 = pbVar22 + 2;
        *param_6 = pwVar9 + 1;
        *pwVar9 = wVar6;
        pbVar24 = pbVar22;
        pbVar23 = pbVar22;
        if (pbVar22 < param_3) {
          do {
            bVar3 = *pbVar23;
            if (((DAT_00214ea0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_00214ea0), iVar7 != 0)) {
                    /* try { // try from 001ba498 to 001ba4a7 has its CatchHandler @ 001ba7e4 */
              DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              __cxa_guard_release(&DAT_00214ea0);
            }
                    /* try { // try from 001ba470 to 001ba477 has its CatchHandler @ 001ba804 */
            iVar7 = isxdigit_l((uint)bVar3,DAT_00214e98);
            pbVar24 = pbVar23;
          } while ((iVar7 != 0) &&
                  (pbVar23 = pbVar23 + 1, pbVar24 = (byte *)param_3, (byte *)param_3 != pbVar23));
        }
      }
      puVar12 = (undefined *)((ulong)local_90 >> 1 & 0x7f);
      if (((ulong)local_90 & 1) != 0) {
        puVar12 = local_88;
      }
      if (puVar12 == (undefined *)0x0) {
                    /* try { // try from 001ba66c to 001ba67b has its CatchHandler @ 001ba808 */
        (**(code **)(*plVar21 + 0x60))(plVar21,pbVar22,pbVar24,*param_6);
        *param_6 = *param_6 + ((long)pbVar24 - (long)pbVar22);
      }
      else {
        if ((pbVar22 != pbVar24) && (pbVar10 = pbVar24 + -1, pbVar23 = pbVar22, pbVar22 < pbVar10))
        {
          do {
            pbVar15 = pbVar23 + 1;
            bVar3 = *pbVar23;
            *pbVar23 = *pbVar10;
            pbVar11 = pbVar10 + -1;
            *pbVar10 = bVar3;
            pbVar10 = pbVar11;
            pbVar23 = pbVar15;
          } while (pbVar15 < pbVar11);
        }
                    /* try { // try from 001ba598 to 001ba5a3 has its CatchHandler @ 001ba7fc */
        wVar6 = (**(code **)(*plVar20 + 0x20))(plVar20);
        if (pbVar22 < pbVar24) {
          uVar18 = 0;
          uVar17 = 0;
          pbVar23 = pbVar22;
          do {
            puVar12 = (undefined *)(ulong)uVar18;
            if (((ulong)local_90 & 1) == 0) {
              bVar3 = puVar12[(long)&local_90 + 1];
            }
            else {
              bVar3 = *(byte *)((long)local_80 + (long)puVar12);
            }
            if ((bVar3 != 0) && (uVar17 == bVar3)) {
              pwVar9 = *param_6;
              uVar17 = 0;
              *param_6 = pwVar9 + 1;
              *pwVar9 = wVar6;
              puVar1 = (undefined *)((ulong)local_90 >> 1 & 0x7f);
              if (((ulong)local_90 & 1) != 0) {
                puVar1 = local_88;
              }
              if (puVar12 < puVar1 + -1) {
                uVar18 = uVar18 + 1;
              }
            }
                    /* try { // try from 001ba630 to 001ba637 has its CatchHandler @ 001ba814 */
            wVar8 = (**(code **)(*plVar21 + 0x58))(plVar21,*pbVar23);
            pwVar13 = *param_6;
            pbVar23 = pbVar23 + 1;
            uVar17 = uVar17 + 1;
            pwVar9 = pwVar13 + 1;
            *param_6 = pwVar9;
            *pwVar13 = wVar8;
          } while (pbVar24 != pbVar23);
        }
        else {
          pwVar9 = *param_6;
        }
        if ((param_4 + ((long)pbVar22 - (long)param_1) != pwVar9) &&
           (param_4 + ((long)pbVar22 - (long)param_1) < pwVar9 + -1)) {
          pwVar13 = pwVar9 + -1;
          pwVar9 = param_4 + ((long)pbVar22 - (long)param_1);
          do {
            pwVar16 = pwVar9 + 1;
            wVar6 = *pwVar9;
            *pwVar9 = *pwVar13;
            pwVar14 = pwVar13 + -1;
            *pwVar13 = wVar6;
            pwVar13 = pwVar14;
            pwVar9 = pwVar16;
          } while (pwVar16 < pwVar14);
        }
      }
      pbVar22 = pbVar24;
      if (pbVar24 < param_3) {
        do {
          if (*pbVar24 == 0x2e) {
                    /* try { // try from 001ba728 to 001ba75b has its CatchHandler @ 001ba808 */
            wVar6 = (**(code **)(*plVar20 + 0x18))(plVar20);
            pwVar9 = *param_6;
            *param_6 = pwVar9 + 1;
            *pwVar9 = wVar6;
            pbVar22 = pbVar24 + 1;
            break;
          }
                    /* try { // try from 001ba6f4 to 001ba6fb has its CatchHandler @ 001ba810 */
          wVar6 = (**(code **)(*plVar21 + 0x58))(plVar21);
          pwVar9 = *param_6;
          pbVar24 = pbVar24 + 1;
          *param_6 = pwVar9 + 1;
          *pwVar9 = wVar6;
          pbVar22 = (byte *)param_3;
        } while ((byte *)param_3 != pbVar24);
      }
      (**(code **)(*plVar21 + 0x60))(plVar21,pbVar22,param_3);
      pwVar9 = *param_6;
      *param_6 = pwVar9 + ((long)param_3 - (long)pbVar22);
      pwVar9 = pwVar9 + ((long)param_3 - (long)pbVar22);
      if (param_2 != param_3) {
        pwVar9 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pwVar9;
      if (((ulong)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0017cb1c();
}


// ===== 001ba830  std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, long double) const */

undefined8 __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  wchar_t *__ptr;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  char *__ptr_00;
  char *pcVar12;
  wchar_t *pwVar13;
  __shared_count *local_1a0;
  wchar_t *local_198;
  wchar_t *pwStack_190;
  char *local_188;
  undefined8 local_180;
  wchar_t awStack_174 [57];
  char local_90 [32];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_180 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&local_180 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&local_180 | 2);
    local_180 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)((long)puVar10 + 1);
  }
  uVar2 = uVar3 & 0x104;
  if (uVar2 == 0x104) {
    bVar6 = false;
    *(undefined1 *)puVar10 = 0x4c;
    if ((uVar3 >> 0xe & 1) == 0) {
      *(undefined1 *)((long)puVar10 + 1) = 0x61;
    }
    else {
      *(undefined1 *)((long)puVar10 + 1) = 0x41;
    }
  }
  else {
    *puVar10 = 0x2a2e;
    *(undefined1 *)(puVar10 + 1) = 0x4c;
    if (uVar2 == 0x100) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x65;
      }
      else {
        uVar11 = 0x45;
      }
    }
    else if (uVar2 == 4) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x66;
      }
      else {
        uVar11 = 0x46;
      }
    }
    else if ((uVar3 >> 0xe & 1) == 0) {
      uVar11 = 0x67;
    }
    else {
      uVar11 = 0x47;
    }
    bVar6 = true;
    *(undefined1 *)((long)puVar10 + 3) = uVar11;
  }
  local_188 = local_90;
  if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001bab38 to 001bab4b has its CatchHandler @ 001babec */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  if (bVar6) {
    iVar8 = __libcpp_snprintf_l(local_90,0x1e,(__locale_t *)DAT_00214e98,(char *)&local_180,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
    if (0x1d < iVar8) {
      if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001bab70 to 001bab83 has its CatchHandler @ 001babe8 */
        DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_00214ea0);
      }
                    /* try { // try from 001ba990 to 001ba99f has its CatchHandler @ 001bac04 */
      iVar8 = __libcpp_asprintf_l(&local_188,(__locale_t *)DAT_00214e98,(char *)&local_180,param_1,
                                  (ulong)*(uint *)(param_4 + 0x10));
LAB_001ba9dc:
      __ptr_00 = local_188;
      if (local_188 != (char *)0x0) goto LAB_001ba9ec;
      iVar8 = __throw_bad_alloc();
    }
  }
  else {
    iVar8 = __libcpp_snprintf_l(local_90,0x1e,(__locale_t *)DAT_00214e98,(char *)&local_180,param_1)
    ;
    if (0x1d < iVar8) {
      if (((DAT_00214ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00214ea0), iVar8 != 0)) {
                    /* try { // try from 001baba8 to 001babbb has its CatchHandler @ 001babe4 */
        DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_00214ea0);
      }
                    /* try { // try from 001ba9cc to 001ba9e7 has its CatchHandler @ 001bac04 */
      iVar8 = __libcpp_asprintf_l(&local_188,(__locale_t *)DAT_00214e98,(char *)&local_180,param_1);
      goto LAB_001ba9dc;
    }
  }
  __ptr_00 = (char *)0x0;
LAB_001ba9ec:
  pcVar7 = local_188;
  pcVar1 = local_188 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_188, uVar3 == 0x10)) {
    cVar4 = *local_188;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_188 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(local_188[1] | 0x20U) == 0x78)) {
      pcVar12 = local_188 + 2;
    }
  }
  if (local_188 == local_90) {
    __ptr = (wchar_t *)0x0;
    pwVar13 = awStack_174;
  }
  else {
    __ptr = (wchar_t *)malloc((long)iVar8 << 3);
    pwVar13 = __ptr;
    if (__ptr == (wchar_t *)0x0) {
                    /* try { // try from 001babd4 to 001babd7 has its CatchHandler @ 001babd8 */
      uVar9 = __throw_bad_alloc();
                    /* catch() { ... } // from try @ 001babd4 with catch @ 001babd8 */
      if (__ptr_00 != (char *)0x0) {
        free(__ptr_00);
                    /* WARNING: Subroutine does not return */
        FUN_00200e50(uVar9);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar9);
    }
  }
                    /* try { // try from 001baa8c to 001baa97 has its CatchHandler @ 001bac20 */
  ios_base::getloc();
                    /* try { // try from 001baa98 to 001baab7 has its CatchHandler @ 001bac0c */
  __num_put<wchar_t>::__widen_and_group_float
            (pcVar7,pcVar12,pcVar1,pwVar13,&pwStack_190,&local_198,(locale *)&local_1a0);
  __shared_count::__release_shared(local_1a0);
                    /* try { // try from 001baac4 to 001baad7 has its CatchHandler @ 001bac08 */
  uVar9 = FUN_001b94c8(param_3,pwVar13,pwStack_190,local_198,param_4,param_5);
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001bac50  std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, void const*) const */

void __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  char *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  __shared_count *local_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined ***local_130;
  undefined **local_128;
  char local_120 [8];
  undefined1 auStack_118 [148];
  char local_84 [20];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_120[4] = '\0';
  local_120[5] = '\0';
  local_120[0] = '%';
  local_120[1] = 'p';
  local_120[2] = '\0';
  local_120[3] = '\0';
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001bae4c to 001bae5f has its CatchHandler @ 001bae7c */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  iVar6 = __libcpp_snprintf_l(local_84,0x14,(__locale_t *)DAT_00214e98,local_120,param_5);
  pcVar1 = local_84 + iVar6;
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar8 = pcVar1;
  if (uVar2 == 0x20) goto LAB_001bad40;
  if (uVar2 == 0x10) {
    if ((local_84[0] == '-') || (local_84[0] == '+')) {
      pcVar8 = (char *)((ulong)local_84 | 1);
      goto LAB_001bad40;
    }
    if ((1 < iVar6) && ((local_84[0] == '0' && ((byte)(local_84[1] | 0x20U) == 0x78)))) {
      pcVar8 = (char *)((ulong)local_84 | 2);
      goto LAB_001bad40;
    }
  }
  pcVar8 = local_84;
LAB_001bad40:
  ios_base::getloc();
  puVar5 = PTR_id_0020f8b8;
  local_138 = 0;
  local_148 = PTR_id_0020f8b8;
  puStack_140 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_128 = &local_148;
    local_130 = &local_128;
                    /* try { // try from 001bad80 to 001bad97 has its CatchHandler @ 001bae94 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_130,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_150 + 0x18) - *(long *)(local_150 + 0x10) >> 3) <=
       (long)*(int *)(puVar5 + 8) - 1U) ||
     (plVar7 = *(long **)(*(long *)(local_150 + 0x10) + ((long)*(int *)(puVar5 + 8) - 1U) * 8),
     plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bae74 to 001bae77 has its CatchHandler @ 001bae94 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_150);
  (**(code **)(*plVar7 + 0x60))(plVar7,local_84,pcVar1,auStack_118);
  puVar3 = auStack_118 + (long)iVar6 * 4;
  if (pcVar8 != pcVar1) {
    puVar3 = auStack_118 + ((long)pcVar8 - (long)local_84) * 4;
  }
  FUN_001b94c8(param_2,auStack_118,puVar3,auStack_118 + (long)iVar6 * 4,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001baeac  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::get =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*, char const*, char const*) const */

long * __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
get(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
   long *param_2,long *param_3,undefined8 param_4,uint *param_5,undefined8 param_6,byte *param_7,
   byte *param_8)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  __shared_count *local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  puVar2 = PTR_id_0020f840;
  local_80 = 0;
  local_90 = PTR_id_0020f840;
  puStack_88 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001baf38 to 001baf4f has its CatchHandler @ 001bb370 */
    __call_once((ulong *)PTR_id_0020f840,&local_78,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar12 = *(long **)(*(long *)(local_98 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bb368 to 001bb36b has its CatchHandler @ 001bb370 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_98);
  *param_5 = 0;
  if (param_7 != param_8) {
    do {
      plVar11 = param_2;
      if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
        if (param_3 != (long *)0x0) goto LAB_001bafb4;
LAB_001baffc:
        param_3 = (long *)0x0;
        param_2 = plVar11;
      }
      else {
        iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
        plVar11 = (long *)0x0;
        if (iVar8 != -1) {
          plVar11 = param_2;
        }
        if (param_3 == (long *)0x0) goto LAB_001baffc;
LAB_001bafb4:
        param_2 = plVar11;
        if ((param_3[3] == param_3[4]) &&
           (iVar8 = (**(code **)(*param_3 + 0x48))(param_3), iVar8 == -1)) goto LAB_001baffc;
      }
      if (param_2 != (long *)0x0) {
LAB_001bb2ac:
        *param_5 = 4;
        break;
      }
      cVar3 = (**(code **)(*plVar12 + 0x48))(plVar12,*param_7,0);
      if (cVar3 == '%') {
        pbVar10 = param_7 + 1;
        if (pbVar10 == param_8) goto LAB_001bb2ac;
        uVar6 = (**(code **)(*plVar12 + 0x48))(plVar12,*pbVar10,0);
        if (((uVar6 & 0xff) == 0x45) || ((uVar6 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_001bb2ac;
          uVar7 = (**(code **)(*plVar12 + 0x48))(plVar12,param_7[2],0);
          lVar13 = 2;
          uVar9 = uVar6;
        }
        else {
          uVar9 = 0;
          lVar13 = 1;
          uVar7 = uVar6;
        }
        param_2 = (long *)(**(code **)(*(long *)this + 0x48))
                                    (this,0,param_3,param_4,param_5,param_6,uVar7,uVar9);
        param_7 = pbVar10 + lVar13;
      }
      else if (((char)*param_7 < '\0') ||
              (pbVar10 = param_7, (*(ulong *)(plVar12[2] + (ulong)*param_7 * 8) & 1) == 0)) {
        if (pbRam0000000000000018 == pbRam0000000000000020) {
          uVar6 = (**(code **)(lRam0000000000000000 + 0x48))(0);
        }
        else {
          uVar6 = (uint)*pbRam0000000000000018;
        }
        cVar3 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar6);
        cVar4 = (**(code **)(*plVar12 + 0x18))(plVar12,*param_7);
        if (cVar3 == cVar4) {
          if (pbRam0000000000000018 == pbRam0000000000000020) {
            (**(code **)(lRam0000000000000000 + 0x50))(0);
          }
          else {
            pbRam0000000000000018 = pbRam0000000000000018 + 1;
          }
          param_7 = param_7 + 1;
        }
        else {
          *param_5 = 4;
        }
      }
      else {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar14 = param_8;
          if (param_8 == pbVar10) goto LAB_001bb1fc;
          param_7 = param_7 + 1;
          pbVar14 = param_7;
          if ((char)*pbVar10 < '\0') goto LAB_001bb1fc;
          plVar11 = param_2;
        } while ((*(ulong *)(plVar12[2] + (ulong)*pbVar10 * 8) & 1) != 0);
        while( true ) {
          param_2 = plVar11;
          pbVar14 = pbVar10;
          if ((plVar11 != (long *)0x0) && (plVar11[3] == plVar11[4])) {
            iVar8 = (**(code **)(*plVar11 + 0x48))(plVar11);
            param_2 = (long *)0x0;
            if (iVar8 != -1) {
              param_2 = plVar11;
            }
          }
LAB_001bb1fc:
          if ((param_3 == (long *)0x0) ||
             ((param_3[3] == param_3[4] &&
              (iVar8 = (**(code **)(*param_3 + 0x48))(param_3), iVar8 == -1)))) {
            param_3 = (long *)0x0;
          }
          param_7 = pbVar14;
          if (param_2 == (long *)0x0) break;
          if ((byte *)param_2[3] == (byte *)param_2[4]) {
            bVar5 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            bVar5 = *(byte *)param_2[3];
          }
          if (((char)bVar5 < '\0') || ((*(ulong *)(plVar12[2] + (ulong)bVar5 * 8) & 1) == 0)) break;
          pbVar10 = pbVar14;
          plVar11 = param_2;
          if (param_2[3] == param_2[4]) {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          else {
            param_2[3] = param_2[3] + 1;
          }
        }
      }
      if ((param_7 == param_8) || (*param_5 != 0)) break;
    } while( true );
  }
  plVar12 = param_2;
  if (param_2 == (long *)0x0) {
joined_r0x001bb2d4:
    param_2 = plVar12;
    if (param_3 == (long *)0x0) goto LAB_001bb360;
LAB_001bb2f8:
    if ((param_3[3] == param_3[4]) && (iVar8 = (**(code **)(*param_3 + 0x48))(param_3), iVar8 == -1)
       ) goto LAB_001bb360;
    if (param_2 == (long *)0x0) goto LAB_001bb32c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar12 = (long *)0x0;
      if (iVar8 != -1) {
        plVar12 = param_2;
      }
      goto joined_r0x001bb2d4;
    }
    if (param_3 != (long *)0x0) goto LAB_001bb2f8;
LAB_001bb360:
    if (param_2 != (long *)0x0) goto LAB_001bb32c;
  }
  *param_5 = *param_5 | 2;
LAB_001bb32c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001bb388  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_date_order =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_date_order() const */

undefined8
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_date_order(void)

{
  return 2;
}


// ===== 001bb390  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get_time =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get_time(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*) const */

void std::__ndk1::
     time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
     do_get_time(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  get();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001bb3f4  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get_date =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get_date(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get_date(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
            *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
           undefined8 param_6)

{
  ulong uVar1;
  byte *pbVar2;
  bool bVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(**(code **)(*(long *)(this + 0x10) + 0x28))();
  pbVar2 = *(byte **)(pbVar4 + 0x10);
  bVar3 = (*pbVar4 & 1) == 0;
  if (bVar3) {
    pbVar2 = pbVar4 + 1;
  }
  uVar1 = (ulong)(*pbVar4 >> 1);
  if (!bVar3) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  get(this,param_2,param_3,param_4,param_5,param_6,pbVar2,pbVar2 + uVar1);
  return;
}


// ===== 001bb474  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get_weekday =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get_weekday(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get_weekday(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
               *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              long param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  __shared_count *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  ios_base::getloc();
  puVar3 = PTR_id_0020f840;
  local_70 = 0;
  local_80 = PTR_id_0020f840;
  puStack_78 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001bb4f0 to 001bb507 has its CatchHandler @ 001bb5e4 */
    __call_once((ulong *)PTR_id_0020f840,&local_68,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (lVar5 = *(long *)(*(long *)(local_90 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bb5dc to 001bb5df has its CatchHandler @ 001bb5e4 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_90);
  lVar4 = (*(code *)**(undefined8 **)(this + 0x10))(this + 0x10);
  lVar5 = FUN_001af8c4(&local_88,param_3,lVar4,lVar4 + 0x150,lVar5,param_5,0);
  if (lVar5 - lVar4 < 0x150) {
    lVar5 = (lVar5 - lVar4 >> 3) * -0x5555555555555555;
    auVar1 = SEXT816(lVar5) * SEXT816(0x4924924924924925);
    *(int *)(param_6 + 0x18) =
         (int)lVar5 + ((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * -7;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_88);
}


// ===== 001bb5fc  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_weekdayname =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_weekdayname(int&, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_weekdayname(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                  *this,int *param_1,undefined8 param_2,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  
  lVar2 = (*(code *)**(undefined8 **)(this + 0x10))();
  lVar3 = FUN_001af8c4(param_2,param_4,lVar2,lVar2 + 0x150,param_6,param_5,0);
  if (lVar3 - lVar2 < 0x150) {
    lVar2 = (lVar3 - lVar2 >> 3) * -0x5555555555555555;
    auVar1 = SEXT816(lVar2) * SEXT816(0x4924924924924925);
    *param_1 = (int)lVar2 + ((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * -7;
  }
  return;
}


// ===== 001bb6b0  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get_monthname =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get_monthname(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get_monthname(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                 *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  __shared_count *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_88 = param_2;
  ios_base::getloc();
  puVar2 = PTR_id_0020f840;
  local_70 = 0;
  local_80 = PTR_id_0020f840;
  puStack_78 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001bb72c to 001bb743 has its CatchHandler @ 001bb81c */
    __call_once((ulong *)PTR_id_0020f840,&local_68,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (lVar4 = *(long *)(*(long *)(local_90 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bb814 to 001bb817 has its CatchHandler @ 001bb81c */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_90);
  lVar3 = (**(code **)(*(long *)(this + 0x10) + 8))(this + 0x10);
  lVar4 = FUN_001af8c4(&local_88,param_3,lVar3,lVar3 + 0x240,lVar4,param_5,0);
  if (lVar4 - lVar3 < 0x240) {
    lVar4 = (lVar4 - lVar3 >> 3) * -0x5555555555555555;
    *(int *)(param_6 + 0x10) =
         (int)lVar4 +
         ((int)((ulong)(lVar4 / 6 + (lVar4 >> 0x3f)) >> 1) -
         (SUB164(SEXT816(lVar4) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_88);
}


// ===== 001bb834  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_monthname =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_monthname(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_monthname(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                *this,int *param_1,undefined8 param_2,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*(long *)(this + 0x10) + 8))();
  lVar2 = FUN_001af8c4(param_2,param_4,lVar1,lVar1 + 0x240,param_6,param_5,0);
  if (lVar2 - lVar1 < 0x240) {
    lVar1 = (lVar2 - lVar1 >> 3) * -0x5555555555555555;
    *param_1 = (int)lVar1 +
               ((int)((ulong)(lVar1 / 6 + (lVar1 >> 0x3f)) >> 1) -
               (SUB164(SEXT816(lVar1) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
  }
  return;
}


// ===== 001bb8e4  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get_year =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get_year(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get_year(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           byte *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  __shared_count *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined **local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_78 = param_2;
  ios_base::getloc();
  puVar4 = PTR_id_0020f840;
  local_60 = 0;
  local_70 = PTR_id_0020f840;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 001bb958 to 001bb96f has its CatchHandler @ 001bba0c */
    __call_once((ulong *)PTR_id_0020f840,&local_58,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)*(int *)(puVar4 + 8) - 1U) ||
     (lVar6 = *(long *)(*(long *)(local_80 + 0x10) + ((long)*(int *)(puVar4 + 8) - 1U) * 8),
     lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bba04 to 001bba07 has its CatchHandler @ 001bba0c */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_80);
  iVar5 = FUN_001bc81c(&local_78,param_3,param_5,lVar6,4);
  if ((*param_5 >> 2 & 1) == 0) {
    iVar1 = iVar5 + 0x76c;
    if (99 < iVar5) {
      iVar1 = iVar5;
    }
    iVar2 = iVar5 + 2000;
    if (0x44 < iVar5) {
      iVar2 = iVar1;
    }
    *(int *)(param_6 + 0x14) = iVar2 + -0x76c;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78);
}


// ===== 001bba24  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_year =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_year(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_year(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,byte *param_5,
          undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_001bc81c(param_2,param_4,param_5,param_6,4);
  if ((*param_5 >> 2 & 1) == 0) {
    iVar1 = iVar3 + 0x76c;
    if (99 < iVar3) {
      iVar1 = iVar3;
    }
    iVar2 = iVar3 + 2000;
    if (0x44 < iVar3) {
      iVar2 = iVar1;
    }
    *param_1 = iVar2 + -0x76c;
  }
  return;
}


// ===== 001bba84  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*, char, char) const */

void std::__ndk1::
     time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
               (time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
               int *param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  __shared_count *local_a0;
  undefined8 local_98;
  undefined4 **local_90;
  undefined4 *local_88;
  undefined4 local_80;
  char cStack_7c;
  undefined2 uStack_7b;
  char cStack_79;
  undefined3 uStack_78;
  undefined5 uStack_75;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *param_5 = 0;
  local_98 = param_2;
  ios_base::getloc();
  puVar5 = PTR_id_0020f840;
  local_70 = 0;
  local_80 = SUB84(PTR_id_0020f840,0);
  cStack_7c = (char)((ulong)PTR_id_0020f840 >> 0x20);
  uStack_7b = (undefined2)((ulong)PTR_id_0020f840 >> 0x28);
  cStack_79 = (char)((ulong)PTR_id_0020f840 >> 0x38);
  uStack_78 = SUB83(PTR___init_0020f928,0);
  uStack_75 = (undefined5)((ulong)PTR___init_0020f928 >> 0x18);
  if (*(long *)PTR_id_0020f840 != -1) {
    local_88 = &local_80;
    local_90 = &local_88;
                    /* try { // try from 001bbb10 to 001bbb27 has its CatchHandler @ 001bc0ac */
    __call_once((ulong *)PTR_id_0020f840,&local_90,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_a0 + 0x18) - *(long *)(local_a0 + 0x10) >> 3) <=
       (long)*(int *)(puVar5 + 8) - 1U) ||
     (lVar15 = *(long *)(*(long *)(local_a0 + 0x10) + ((long)*(int *)(puVar5 + 8) - 1U) * 8),
     lVar15 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bc0a4 to 001bc0a7 has its CatchHandler @ 001bc0ac */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_a0);
  switch(param_7) {
  case 0x25:
    __get_percent(param_1,&local_98,param_3,param_5,lVar15);
    uVar8 = local_98;
    goto LAB_001bc01c;
  default:
    goto switchD_001bbb74_caseD_26;
  case 0x41:
  case 0x61:
    lVar7 = (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10);
    lVar15 = FUN_001af8c4(&local_98,param_3,lVar7,lVar7 + 0x150,lVar15,param_5,0);
    uVar8 = local_98;
    if (lVar15 - lVar7 < 0x150) {
      lVar15 = (lVar15 - lVar7 >> 3) * -0x5555555555555555;
      auVar3 = SEXT816(lVar15) * SEXT816(0x4924924924924925);
      param_6[6] = (int)lVar15 + ((int)(auVar3._8_8_ >> 1) - (auVar3._12_4_ >> 0x1f)) * -7;
    }
    goto LAB_001bc01c;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar7 = (**(code **)(*(long *)(param_1 + 0x10) + 8))(param_1 + 0x10);
    lVar15 = FUN_001af8c4(&local_98,param_3,lVar7,lVar7 + 0x240,lVar15,param_5,0);
    uVar8 = local_98;
    if (lVar15 - lVar7 < 0x240) {
      lVar15 = (lVar15 - lVar7 >> 3) * -0x5555555555555555;
      param_6[4] = (int)lVar15 +
                   ((int)((ulong)(lVar15 / 6 + (lVar15 >> 0x3f)) >> 1) -
                   (SUB164(SEXT816(lVar15) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    goto LAB_001bc01c;
  case 0x44:
    uVar8 = 0x79252f64252f6d25;
    goto LAB_001bbe64;
  case 0x46:
    uVar8 = 0x64252d6d252d5925;
    goto LAB_001bbe64;
  case 0x48:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,2);
    uVar11 = *param_5;
    if (iVar6 < 0x18) {
LAB_001bbec0:
      if ((uVar11 >> 2 & 1) == 0) {
        param_6[2] = iVar6;
        uVar8 = local_98;
        goto LAB_001bc01c;
      }
    }
    break;
  case 0x49:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,2);
    uVar11 = *param_5;
    if (iVar6 - 1U < 0xc) goto LAB_001bbec0;
    break;
  case 0x4d:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,2);
    uVar11 = *param_5;
    if ((iVar6 < 0x3c) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[1] = iVar6;
      uVar8 = local_98;
      goto LAB_001bc01c;
    }
    break;
  case 0x52:
    cStack_7c = 'M';
    local_80 = 0x253a4825;
    pbVar9 = (byte *)&uStack_7b;
    goto LAB_001bbe74;
  case 0x53:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,2);
    uVar11 = *param_5;
    if ((iVar6 < 0x3d) && ((uVar11 >> 2 & 1) == 0)) {
      *param_6 = iVar6;
      uVar8 = local_98;
      goto LAB_001bc01c;
    }
    break;
  case 0x54:
    uVar8 = 0x53253a4d253a4825;
LAB_001bbe64:
    local_80 = (undefined4)uVar8;
    cStack_7c = (char)((ulong)uVar8 >> 0x20);
    uStack_7b = (undefined2)((ulong)uVar8 >> 0x28);
    cStack_79 = (char)((ulong)uVar8 >> 0x38);
    pbVar9 = (byte *)&uStack_78;
LAB_001bbe74:
    pbVar10 = (byte *)&local_80;
LAB_001bbe78:
    local_98 = get(param_1,local_98,param_3,param_4,param_5,param_6,pbVar10,pbVar9);
    uVar8 = local_98;
    goto LAB_001bc01c;
  case 0x58:
    pcVar12 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
    goto LAB_001bbddc;
  case 0x59:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,4);
    uVar8 = local_98;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      param_6[5] = iVar6 + -0x76c;
    }
    goto LAB_001bc01c;
  case 99:
    pcVar12 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
LAB_001bbddc:
    pbVar9 = (byte *)(*pcVar12)();
    uVar13 = *(ulong *)(pbVar9 + 8);
    pbVar10 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar10 = pbVar9 + 1;
      uVar13 = (ulong)(*pbVar9 >> 1);
    }
    pbVar9 = pbVar10 + uVar13;
    goto LAB_001bbe78;
  case 100:
  case 0x65:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,2);
    uVar11 = *param_5;
    if ((iVar6 - 1U < 0x1f) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[3] = iVar6;
      uVar8 = local_98;
      goto LAB_001bc01c;
    }
    break;
  case 0x6a:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,3);
    uVar11 = *param_5;
    if ((iVar6 < 0x16e) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[7] = iVar6;
      uVar8 = local_98;
      goto LAB_001bc01c;
    }
    break;
  case 0x6d:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,2);
    uVar11 = *param_5;
    if ((iVar6 < 0xd) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[4] = iVar6 + -1;
      uVar8 = local_98;
      goto LAB_001bc01c;
    }
    break;
  case 0x6e:
  case 0x74:
    __get_white_space(param_1,&local_98,param_3,param_5,lVar15);
    uVar8 = local_98;
    goto LAB_001bc01c;
  case 0x70:
    pbVar9 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      uVar13 = (ulong)(*pbVar9 >> 1);
    }
    else {
      uVar13 = *(ulong *)(pbVar9 + 8);
    }
    if ((pbVar9[0x18] & 1) == 0) {
      uVar14 = (ulong)(pbVar9[0x18] >> 1);
    }
    else {
      uVar14 = *(ulong *)(pbVar9 + 0x20);
    }
    if (uVar13 + uVar14 != 0) {
      pbVar10 = (byte *)FUN_001af8c4(&local_98,param_3,pbVar9,pbVar9 + 0x30,lVar15,param_5,0);
      iVar6 = param_6[2];
      uVar8 = local_98;
      if ((iVar6 == 0xc) && (pbVar10 == pbVar9)) {
        param_6[2] = 0;
      }
      else if ((iVar6 < 0xc) && ((long)pbVar10 - (long)pbVar9 == 0x18)) {
        param_6[2] = iVar6 + 0xc;
      }
      goto LAB_001bc01c;
    }
    goto switchD_001bbb74_caseD_26;
  case 0x72:
    local_80 = (undefined4)s__I__M__S__p_H__M_00147911._0_8_;
    cStack_7c = SUB81(s__I__M__S__p_H__M_00147911._0_8_,4);
    uStack_7b = SUB82(s__I__M__S__p_H__M_00147911._0_8_,5);
    uStack_78 = 0x702520;
    cStack_79 = SUB81(s__I__M__S__p_H__M_00147911._0_8_,7);
    pbVar9 = (byte *)&uStack_75;
    goto LAB_001bbe74;
  case 0x77:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,1);
    uVar11 = *param_5;
    if ((iVar6 < 7) && ((uVar11 >> 2 & 1) == 0)) {
      param_6[6] = iVar6;
      uVar8 = local_98;
      goto LAB_001bc01c;
    }
    break;
  case 0x78:
    uVar8 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_98,param_3,param_4,param_5,param_6)
    ;
    goto LAB_001bc01c;
  case 0x79:
    iVar6 = FUN_001bc81c(&local_98,param_3,param_5,lVar15,4);
    uVar8 = local_98;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      iVar1 = iVar6 + 0x76c;
      if (99 < iVar6) {
        iVar1 = iVar6;
      }
      iVar2 = iVar6 + 2000;
      if (0x44 < iVar6) {
        iVar2 = iVar1;
      }
      param_6[5] = iVar2 + -0x76c;
    }
    goto LAB_001bc01c;
  }
LAB_001bc010:
  *param_5 = uVar11 | 4;
  uVar8 = local_98;
LAB_001bc01c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
switchD_001bbb74_caseD_26:
  uVar11 = *param_5;
  goto LAB_001bc010;
}


// ===== 001bc0c4  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_day =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_day(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_day(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
         undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,2);
  if ((iVar1 - 1U < 0x1f) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bc120  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_hour =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_hour(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_hour(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
          undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,2);
  if ((iVar1 < 0x18) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bc178  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_12_hour =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_12_hour(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_12_hour(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5
             ,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,2);
  if ((iVar1 - 1U < 0xc) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bc1d4  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_day_year_num =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_day_year_num(int&, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_day_year_num(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,
                  uint *param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,3);
  if ((iVar1 < 0x16e) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bc22c  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_month =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_month(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_month(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
           undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,2);
  if ((iVar1 < 0xd) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1 + -1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bc288  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_minute =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_minute(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_minute(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
            undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,2);
  if ((iVar1 < 0x3c) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bc2e0  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_white_space =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_white_space(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_white_space(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  while( true ) {
    if ((plVar3 != (long *)0x0) && (plVar3[3] == plVar3[4])) {
      iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if (iVar2 == -1) {
        plVar3 = (long *)0x0;
        *param_1 = 0;
      }
      else {
        plVar3 = (long *)*param_1;
      }
    }
    if ((param_3 == (long *)0x0) ||
       ((param_3[3] == param_3[4] && (iVar2 = (**(code **)(*param_3 + 0x48))(param_3), iVar2 == -1))
       )) {
      param_3 = (long *)0x0;
    }
    if (plVar3 == (long *)0x0) break;
    plVar3 = (long *)*param_1;
    if ((byte *)plVar3[3] == (byte *)plVar3[4]) {
      bVar1 = (**(code **)(*plVar3 + 0x48))();
    }
    else {
      bVar1 = *(byte *)plVar3[3];
    }
    if (((char)bVar1 < '\0') ||
       ((*(ulong *)(*(long *)(param_5 + 0x10) + (ulong)bVar1 * 8) & 1) == 0)) break;
    plVar3 = (long *)*param_1;
    if (plVar3[3] == plVar3[4]) {
      (**(code **)(*plVar3 + 0x50))();
      plVar3 = (long *)*param_1;
    }
    else {
      plVar3[3] = plVar3[3] + 1;
      plVar3 = (long *)*param_1;
    }
  }
  plVar3 = (long *)*param_1;
  if ((plVar3 != (long *)0x0) && (plVar3[3] == plVar3[4])) {
    iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if (iVar2 == -1) {
      plVar3 = (long *)0x0;
      *param_1 = 0;
    }
    else {
      plVar3 = (long *)*param_1;
    }
  }
  if ((param_3 == (long *)0x0) ||
     ((param_3[3] == param_3[4] && (iVar2 = (**(code **)(*param_3 + 0x48))(param_3), iVar2 == -1))))
  {
    if (plVar3 != (long *)0x0) {
      return;
    }
  }
  else if (plVar3 == (long *)0x0) {
    return;
  }
  *param_4 = *param_4 | 2;
  return;
}


// ===== 001bc488  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_am_pm =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_am_pm(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_am_pm(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
            *this,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
           undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  pbVar3 = (byte *)(**(code **)(*(long *)(this + 0x10) + 0x10))();
  if ((*pbVar3 & 1) == 0) {
    uVar5 = (ulong)(*pbVar3 >> 1);
    bVar2 = pbVar3[0x18];
  }
  else {
    uVar5 = *(ulong *)(pbVar3 + 8);
    bVar2 = pbVar3[0x18];
  }
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(pbVar3 + 0x20);
  }
  if (uVar5 + uVar6 == 0) {
    *param_5 = *param_5 | 4;
  }
  else {
    pbVar4 = (byte *)FUN_001af8c4(param_2,param_4,pbVar3,pbVar3 + 0x30,param_6,param_5,0);
    iVar1 = *param_1;
    if ((iVar1 == 0xc) && (pbVar4 == pbVar3)) {
      *param_1 = 0;
    }
    else if ((iVar1 < 0xc) && ((long)pbVar4 - (long)pbVar3 == 0x18)) {
      *param_1 = iVar1 + 0xc;
    }
  }
  return;
}


// ===== 001bc570  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_second =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_second(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_second(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
            undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,2);
  if ((iVar1 < 0x3d) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bc5c8  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_weekday =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_weekday(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_weekday(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5
             ,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,1);
  if ((iVar1 < 7) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bc620  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_year4 =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_year4(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_year4(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,byte *param_5,
           undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001bc81c(param_2,param_4,param_5,param_6,4);
  if ((*param_5 >> 2 & 1) == 0) {
    *param_1 = iVar1 + -0x76c;
  }
  return;
}


// ===== 001bc668  std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_percent =====

/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_percent(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_percent(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if ((plVar4 == (long *)0x0) || (plVar4[3] != plVar4[4])) {
LAB_001bc6bc:
    if (param_3 == (long *)0x0) goto LAB_001bc6f8;
LAB_001bc6c0:
    if ((param_3[3] == param_3[4]) && (iVar2 = (**(code **)(*param_3 + 0x48))(param_3), iVar2 == -1)
       ) goto LAB_001bc6f8;
    if (plVar4 != (long *)0x0) goto LAB_001bc718;
  }
  else {
    iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if (iVar2 != -1) {
      plVar4 = (long *)*param_1;
      goto LAB_001bc6bc;
    }
    plVar4 = (long *)0x0;
    *param_1 = 0;
    if (param_3 != (long *)0x0) goto LAB_001bc6c0;
LAB_001bc6f8:
    if (plVar4 == (long *)0x0) {
LAB_001bc718:
      uVar3 = *param_4 | 6;
      goto LAB_001bc804;
    }
    param_3 = (long *)0x0;
  }
  plVar4 = (long *)*param_1;
  if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
    uVar3 = (**(code **)(*plVar4 + 0x48))();
  }
  else {
    uVar3 = (uint)*(byte *)plVar4[3];
  }
  cVar1 = (**(code **)(*param_5 + 0x48))(param_5,uVar3,0);
  if (cVar1 != '%') {
    uVar3 = *param_4 | 4;
    goto LAB_001bc804;
  }
  plVar4 = (long *)*param_1;
  if (plVar4[3] == plVar4[4]) {
    (**(code **)(*plVar4 + 0x50))(plVar4);
    plVar4 = (long *)*param_1;
    if (plVar4 != (long *)0x0) goto LAB_001bc794;
LAB_001bc7bc:
    if (param_3 == (long *)0x0) goto LAB_001bc7f8;
LAB_001bc7c0:
    if ((param_3[3] == param_3[4]) && (iVar2 = (**(code **)(*param_3 + 0x48))(param_3), iVar2 == -1)
       ) goto LAB_001bc7f8;
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar4[3] = plVar4[3] + 1;
LAB_001bc794:
    if (plVar4[3] != plVar4[4]) goto LAB_001bc7bc;
    iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if (iVar2 != -1) {
      plVar4 = (long *)*param_1;
      goto LAB_001bc7bc;
    }
    plVar4 = (long *)0x0;
    *param_1 = 0;
    if (param_3 != (long *)0x0) goto LAB_001bc7c0;
LAB_001bc7f8:
    if (plVar4 != (long *)0x0) {
      return;
    }
  }
  uVar3 = *param_4 | 2;
LAB_001bc804:
  *param_4 = uVar3;
  return;
}


// ===== 001bc81c  FUN_001bc81c =====

int FUN_001bc81c(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if ((plVar6 == (long *)0x0) || (plVar6[3] != plVar6[4])) {
joined_r0x001bc8bc:
    if (param_2 == (long *)0x0) goto LAB_001bc8c0;
LAB_001bc864:
    if ((param_2[3] == param_2[4]) && (iVar2 = (**(code **)(*param_2 + 0x48))(param_2), iVar2 == -1)
       ) goto LAB_001bc8c0;
    if (plVar6 != (long *)0x0) goto LAB_001bc8e8;
  }
  else {
    iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
    if (iVar2 == -1) {
      plVar6 = (long *)0x0;
      *param_1 = 0;
      goto joined_r0x001bc8bc;
    }
    plVar6 = (long *)*param_1;
    if (param_2 != (long *)0x0) goto LAB_001bc864;
LAB_001bc8c0:
    if (plVar6 == (long *)0x0) {
LAB_001bc8e8:
      iVar2 = 0;
      uVar4 = *param_3 | 6;
      goto LAB_001bc92c;
    }
    param_2 = (long *)0x0;
  }
  plVar6 = (long *)*param_1;
  if ((byte *)plVar6[3] == (byte *)plVar6[4]) {
    uVar4 = (**(code **)(*plVar6 + 0x48))();
    bVar1 = (byte)uVar4;
  }
  else {
    bVar1 = *(byte *)plVar6[3];
    uVar4 = (uint)bVar1;
  }
  if (((char)bVar1 < '\0') ||
     (((uint)*(undefined8 *)(param_4[2] + (ulong)(uVar4 & 0xff) * 8) >> 6 & 1) == 0)) {
    iVar2 = 0;
    uVar4 = *param_3 | 4;
  }
  else {
    uVar4 = (**(code **)(*param_4 + 0x48))(param_4,uVar4,0);
    plVar6 = (long *)*param_1;
    uVar4 = uVar4 & 0xff;
    if (plVar6[3] == plVar6[4]) {
      (**(code **)(*plVar6 + 0x50))();
    }
    else {
      plVar6[3] = plVar6[3] + 1;
    }
    plVar6 = (long *)*param_1;
    while( true ) {
      if ((plVar6 != (long *)0x0) && (plVar6[3] == plVar6[4])) {
        iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
        if (iVar2 == -1) {
          plVar6 = (long *)0x0;
          *param_1 = 0;
        }
        else {
          plVar6 = (long *)*param_1;
        }
      }
      iVar2 = uVar4 - 0x30;
      plVar5 = param_2;
      plVar7 = plVar6;
      if ((param_2 != (long *)0x0) && (param_2[3] == param_2[4])) {
        iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
        plVar7 = (long *)*param_1;
        plVar5 = (long *)0x0;
        if (iVar3 != -1) {
          plVar5 = param_2;
        }
      }
      if ((param_5 < 2) || ((plVar6 == (long *)0x0) == (plVar5 == (long *)0x0))) break;
      if ((byte *)plVar7[3] == (byte *)plVar7[4]) {
        uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
        bVar1 = (byte)uVar4;
      }
      else {
        bVar1 = *(byte *)plVar7[3];
        uVar4 = (uint)bVar1;
      }
      if ((char)bVar1 < '\0') {
        return iVar2;
      }
      if (((uint)*(undefined8 *)(param_4[2] + (ulong)(uVar4 & 0xff) * 8) >> 6 & 1) == 0) {
        return iVar2;
      }
      param_5 = param_5 + -1;
      bVar1 = (**(code **)(*param_4 + 0x48))(param_4,uVar4,0);
      plVar6 = (long *)*param_1;
      uVar4 = iVar2 * 10 + (uint)bVar1;
      param_2 = plVar5;
      if (plVar6[3] == plVar6[4]) {
        (**(code **)(*plVar6 + 0x50))();
        plVar6 = (long *)*param_1;
      }
      else {
        plVar6[3] = plVar6[3] + 1;
        plVar6 = (long *)*param_1;
      }
    }
    if ((plVar7 != (long *)0x0) && (plVar7[3] == plVar7[4])) {
      iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
      if (iVar3 == -1) {
        plVar7 = (long *)0x0;
        *param_1 = 0;
      }
      else {
        plVar7 = (long *)*param_1;
      }
    }
    if ((plVar5 == (long *)0x0) ||
       ((plVar5[3] == plVar5[4] && (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 == -1)))) {
      if (plVar7 != (long *)0x0) {
        return iVar2;
      }
    }
    else if (plVar7 == (long *)0x0) {
      return iVar2;
    }
    uVar4 = *param_3 | 2;
  }
LAB_001bc92c:
  *param_3 = uVar4;
  return iVar2;
}


// ===== 001bcb50  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::get =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*, wchar_t const*,
   wchar_t const*) const */

long * __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::get
          (time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,long *param_3,undefined8 param_4,uint *param_5,undefined8 param_6,
          undefined4 *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  __shared_count *local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ios_base::getloc();
  puVar3 = PTR_id_0020f8b8;
  local_80 = 0;
  local_90 = PTR_id_0020f8b8;
  puStack_88 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001bcbdc to 001bcbf3 has its CatchHandler @ 001bd04c */
    __call_once((ulong *)PTR_id_0020f8b8,&local_78,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar14 = *(long **)(*(long *)(local_98 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     plVar14 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bd044 to 001bd047 has its CatchHandler @ 001bd04c */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_98);
  *param_5 = 0;
  if (param_7 != param_8) {
    while (param_2 == (long *)0x0) {
      bVar4 = true;
      if (param_3 != (long *)0x0) goto LAB_001bcc70;
LAB_001bcc48:
      if (bVar4) goto LAB_001bcf78;
LAB_001bcca8:
      cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14,*param_7,0);
      if (cVar5 == '%') {
        puVar1 = param_7 + 1;
        if (puVar1 == param_8) goto LAB_001bcf78;
        uVar6 = (**(code **)(*plVar14 + 0x68))(plVar14,*puVar1,0);
        if (((uVar6 & 0xff) == 0x45) || ((uVar6 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_001bcf78;
          uVar7 = (**(code **)(*plVar14 + 0x68))(plVar14,param_7[2],0);
          lVar15 = 2;
          uVar12 = uVar6;
        }
        else {
          uVar12 = 0;
          lVar15 = 1;
          uVar7 = uVar6;
        }
        param_2 = (long *)(**(code **)(*(long *)this + 0x48))
                                    (this,param_2,param_3,param_4,param_5,param_6,uVar7,uVar12);
        param_7 = puVar1 + lVar15;
      }
      else {
        uVar11 = (**(code **)(*plVar14 + 0x18))(plVar14,1,*param_7);
        if ((uVar11 & 1) == 0) {
          if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
            uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            uVar8 = *(undefined4 *)param_2[3];
          }
          iVar10 = (**(code **)(*plVar14 + 0x38))(plVar14,uVar8);
          iVar9 = (**(code **)(*plVar14 + 0x38))(plVar14,*param_7);
          if (iVar10 == iVar9) {
            if (param_2[3] == param_2[4]) {
              (**(code **)(*param_2 + 0x50))(param_2);
            }
            else {
              param_2[3] = param_2[3] + 4;
            }
            param_7 = param_7 + 1;
          }
          else {
            *param_5 = 4;
          }
        }
        else {
          do {
            param_7 = param_7 + 1;
            puVar1 = param_8;
            if (param_8 == param_7) break;
            uVar11 = (**(code **)(*plVar14 + 0x18))(plVar14,1,*param_7);
            puVar1 = param_7;
          } while ((uVar11 & 1) != 0);
          plVar13 = param_2;
          param_7 = puVar1;
          if (param_2 != (long *)0x0) goto LAB_001bce04;
LAB_001bce48:
          bVar4 = true;
          if (param_3 == (long *)0x0) goto LAB_001bce88;
          while( true ) {
            if ((int *)param_3[3] == (int *)param_3[4]) {
              iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
            }
            else {
              iVar10 = *(int *)param_3[3];
            }
            if (iVar10 == -1) goto LAB_001bce88;
            if (!bVar4) break;
            while( true ) {
              if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
                uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              else {
                uVar8 = *(undefined4 *)param_2[3];
              }
              uVar11 = (**(code **)(*plVar14 + 0x18))(plVar14,1,uVar8);
              if ((uVar11 & 1) == 0) goto joined_r0x001bcf70;
              if (param_2[3] == param_2[4]) {
                (**(code **)(*param_2 + 0x50))(param_2);
              }
              else {
                param_2[3] = param_2[3] + 4;
              }
              plVar13 = param_2;
              if (param_2 == (long *)0x0) goto LAB_001bce48;
LAB_001bce04:
              if ((int *)plVar13[3] == (int *)plVar13[4]) {
                iVar10 = (**(code **)(*plVar13 + 0x48))(plVar13);
              }
              else {
                iVar10 = *(int *)plVar13[3];
              }
              bVar4 = iVar10 == -1;
              param_2 = (long *)0x0;
              if (!bVar4) {
                param_2 = plVar13;
              }
              if (param_3 != (long *)0x0) break;
LAB_001bce88:
              param_3 = (long *)0x0;
              if (bVar4) goto joined_r0x001bcf70;
            }
          }
        }
      }
joined_r0x001bcf70:
      if ((param_7 == param_8) || (*param_5 != 0)) goto LAB_001bcf80;
    }
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar10 = *(int *)param_2[3];
    }
    bVar4 = iVar10 == -1;
    plVar13 = (long *)0x0;
    if (!bVar4) {
      plVar13 = param_2;
    }
    param_2 = plVar13;
    if (param_3 == (long *)0x0) goto LAB_001bcc48;
LAB_001bcc70:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar10 = *(int *)param_3[3];
    }
    plVar13 = (long *)0x0;
    if (iVar10 != -1) {
      plVar13 = param_3;
    }
    param_3 = plVar13;
    if (bVar4 != (iVar10 == -1)) goto LAB_001bcca8;
LAB_001bcf78:
    *param_5 = 4;
  }
LAB_001bcf80:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_001bcfcc;
LAB_001bcfa0:
    if (!bVar4) goto LAB_001bd010;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar10 = *(int *)param_2[3];
    }
    bVar4 = iVar10 == -1;
    plVar14 = (long *)0x0;
    if (!bVar4) {
      plVar14 = param_2;
    }
    param_2 = plVar14;
    if (param_3 == (long *)0x0) goto LAB_001bcfa0;
LAB_001bcfcc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar10 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar10 == -1)) goto LAB_001bd010;
  }
  *param_5 = *param_5 | 2;
LAB_001bd010:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001bd064  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_date_order =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_date_order() const */

undefined8
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_date_order(void)

{
  return 2;
}


// ===== 001bd06c  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get_time =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_time(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

void std::__ndk1::
     time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get_time(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  get();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001bd0cc  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get_date =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_date(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get_date(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
            *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
           undefined8 param_6)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(**(code **)(*(long *)(this + 0x10) + 0x28))();
  uVar1 = (ulong)(*pbVar3 >> 1);
  pbVar2 = pbVar3 + 4;
  if ((*pbVar3 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar3 + 8);
    pbVar2 = *(byte **)(pbVar3 + 0x10);
  }
  get(this,param_2,param_3,param_4,param_5,param_6,pbVar2,pbVar2 + uVar1 * 4);
  return;
}


// ===== 001bd150  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get_weekday =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_weekday(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get_weekday(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
               *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              long param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  __shared_count *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  ios_base::getloc();
  puVar3 = PTR_id_0020f8b8;
  local_70 = 0;
  local_80 = PTR_id_0020f8b8;
  puStack_78 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001bd1cc to 001bd1e3 has its CatchHandler @ 001bd2c0 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_68,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (lVar5 = *(long *)(*(long *)(local_90 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bd2b8 to 001bd2bb has its CatchHandler @ 001bd2c0 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_90);
  lVar4 = (*(code *)**(undefined8 **)(this + 0x10))(this + 0x10);
  lVar5 = FUN_001b29c8(&local_88,param_3,lVar4,lVar4 + 0x150,lVar5,param_5,0);
  if (lVar5 - lVar4 < 0x150) {
    lVar5 = (lVar5 - lVar4 >> 3) * -0x5555555555555555;
    auVar1 = SEXT816(lVar5) * SEXT816(0x4924924924924925);
    *(int *)(param_6 + 0x18) =
         (int)lVar5 + ((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * -7;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_88);
}


// ===== 001bd2d8  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_weekdayname =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_weekdayname(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_weekdayname(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                  *this,int *param_1,undefined8 param_2,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  
  lVar2 = (*(code *)**(undefined8 **)(this + 0x10))();
  lVar3 = FUN_001b29c8(param_2,param_4,lVar2,lVar2 + 0x150,param_6,param_5,0);
  if (lVar3 - lVar2 < 0x150) {
    lVar2 = (lVar3 - lVar2 >> 3) * -0x5555555555555555;
    auVar1 = SEXT816(lVar2) * SEXT816(0x4924924924924925);
    *param_1 = (int)lVar2 + ((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * -7;
  }
  return;
}


// ===== 001bd38c  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get_monthname =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_monthname(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get_monthname(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                 *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  __shared_count *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_88 = param_2;
  ios_base::getloc();
  puVar2 = PTR_id_0020f8b8;
  local_70 = 0;
  local_80 = PTR_id_0020f8b8;
  puStack_78 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 001bd408 to 001bd41f has its CatchHandler @ 001bd4f8 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_68,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10) >> 3) <=
       (long)*(int *)(puVar2 + 8) - 1U) ||
     (lVar4 = *(long *)(*(long *)(local_90 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bd4f0 to 001bd4f3 has its CatchHandler @ 001bd4f8 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_90);
  lVar3 = (**(code **)(*(long *)(this + 0x10) + 8))(this + 0x10);
  lVar4 = FUN_001b29c8(&local_88,param_3,lVar3,lVar3 + 0x240,lVar4,param_5,0);
  if (lVar4 - lVar3 < 0x240) {
    lVar4 = (lVar4 - lVar3 >> 3) * -0x5555555555555555;
    *(int *)(param_6 + 0x10) =
         (int)lVar4 +
         ((int)((ulong)(lVar4 / 6 + (lVar4 >> 0x3f)) >> 1) -
         (SUB164(SEXT816(lVar4) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_88);
}


// ===== 001bd510  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_monthname =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_monthname(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_monthname(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                *this,int *param_1,undefined8 param_2,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*(long *)(this + 0x10) + 8))();
  lVar2 = FUN_001b29c8(param_2,param_4,lVar1,lVar1 + 0x240,param_6,param_5,0);
  if (lVar2 - lVar1 < 0x240) {
    lVar1 = (lVar2 - lVar1 >> 3) * -0x5555555555555555;
    *param_1 = (int)lVar1 +
               ((int)((ulong)(lVar1 / 6 + (lVar1 >> 0x3f)) >> 1) -
               (SUB164(SEXT816(lVar1) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
  }
  return;
}


// ===== 001bd5c0  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get_year =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_year(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get_year(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           byte *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  __shared_count *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined **local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_78 = param_2;
  ios_base::getloc();
  puVar4 = PTR_id_0020f8b8;
  local_60 = 0;
  local_70 = PTR_id_0020f8b8;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 001bd634 to 001bd64b has its CatchHandler @ 001bd6e8 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_58,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)*(int *)(puVar4 + 8) - 1U) ||
     (lVar6 = *(long *)(*(long *)(local_80 + 0x10) + ((long)*(int *)(puVar4 + 8) - 1U) * 8),
     lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bd6e0 to 001bd6e3 has its CatchHandler @ 001bd6e8 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_80);
  iVar5 = FUN_001be558(&local_78,param_3,param_5,lVar6,4);
  if ((*param_5 >> 2 & 1) == 0) {
    iVar1 = iVar5 + 0x76c;
    if (99 < iVar5) {
      iVar1 = iVar5;
    }
    iVar2 = iVar5 + 2000;
    if (0x44 < iVar5) {
      iVar2 = iVar1;
    }
    *(int *)(param_6 + 0x14) = iVar2 + -0x76c;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78);
}


// ===== 001bd700  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_year =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_year(int&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_year(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,byte *param_5,
          undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_001be558(param_2,param_4,param_5,param_6,4);
  if ((*param_5 >> 2 & 1) == 0) {
    iVar1 = iVar3 + 0x76c;
    if (99 < iVar3) {
      iVar1 = iVar3;
    }
    iVar2 = iVar3 + 2000;
    if (0x44 < iVar3) {
      iVar2 = iVar1;
    }
    *param_1 = iVar2 + -0x76c;
  }
  return;
}


// ===== 001bd760  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*, char, char)
   const */

void std::__ndk1::
     time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
     do_get(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
            *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
           int *param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined **ppuVar11;
  uint uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  __shared_count *local_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  undefined **local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  byte abStack_74 [12];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *param_5 = 0;
  local_b8 = param_2;
  ios_base::getloc();
  puVar5 = PTR_id_0020f8b8;
  local_90 = 0;
  local_a0 = PTR_id_0020f8b8;
  puStack_98 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_a8 = &local_a0;
    local_b0 = &local_a8;
                    /* try { // try from 001bd7ec to 001bd803 has its CatchHandler @ 001bdd78 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_b0,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_c0 + 0x18) - *(long *)(local_c0 + 0x10) >> 3) <=
       (long)*(int *)(puVar5 + 8) - 1U) ||
     (lVar17 = *(long *)(*(long *)(local_c0 + 0x10) + ((long)*(int *)(puVar5 + 8) - 1U) * 8),
     lVar17 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bdd70 to 001bdd73 has its CatchHandler @ 001bdd78 */
    FUN_0017cb1c();
  }
  __shared_count::__release_shared(local_c0);
  switch(param_7) {
  case 0x25:
    __get_percent(param_1,&local_b8,param_3,param_5,lVar17);
    uVar8 = local_b8;
    goto LAB_001bdce8;
  default:
    goto switchD_001bd850_caseD_26;
  case 0x41:
  case 0x61:
    lVar7 = (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10);
    lVar17 = FUN_001b29c8(&local_b8,param_3,lVar7,lVar7 + 0x150,lVar17,param_5,0);
    uVar8 = local_b8;
    if (lVar17 - lVar7 < 0x150) {
      lVar17 = (lVar17 - lVar7 >> 3) * -0x5555555555555555;
      auVar3 = SEXT816(lVar17) * SEXT816(0x4924924924924925);
      param_6[6] = (int)lVar17 + ((int)(auVar3._8_8_ >> 1) - (auVar3._12_4_ >> 0x1f)) * -7;
    }
    goto LAB_001bdce8;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar7 = (**(code **)(*(long *)(param_1 + 0x10) + 8))(param_1 + 0x10);
    lVar17 = FUN_001b29c8(&local_b8,param_3,lVar7,lVar7 + 0x240,lVar17,param_5,0);
    uVar8 = local_b8;
    if (lVar17 - lVar7 < 0x240) {
      lVar17 = (lVar17 - lVar7 >> 3) * -0x5555555555555555;
      param_6[4] = (int)lVar17 +
                   ((int)((ulong)(lVar17 / 6 + (lVar17 >> 0x3f)) >> 1) -
                   (SUB164(SEXT816(lVar17) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    goto LAB_001bdce8;
  case 0x44:
    puVar13 = (undefined8 *)&DAT_00146188;
    goto LAB_001bdb2c;
  case 0x46:
    puVar13 = (undefined8 *)&DAT_001461c8;
    goto LAB_001bdb2c;
  case 0x48:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,2);
    uVar12 = *param_5;
    if (iVar6 < 0x18) {
LAB_001bdb8c:
      if ((uVar12 >> 2 & 1) == 0) {
        param_6[2] = iVar6;
        uVar8 = local_b8;
        goto LAB_001bdce8;
      }
    }
    break;
  case 0x49:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,2);
    uVar12 = *param_5;
    if (iVar6 - 1U < 0xc) goto LAB_001bdb8c;
    break;
  case 0x4d:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,2);
    uVar12 = *param_5;
    if ((iVar6 < 0x3c) && ((uVar12 >> 2 & 1) == 0)) {
      param_6[1] = iVar6;
      uVar8 = local_b8;
      goto LAB_001bdce8;
    }
    break;
  case 0x52:
    puStack_98 = _UNK_00147958;
    local_a0 = _DAT_00147950;
    local_90 = CONCAT44(local_90._4_4_,DAT_00147960);
    pbVar9 = (byte *)((long)&local_90 + 4);
    goto LAB_001bdb40;
  case 0x53:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,2);
    uVar12 = *param_5;
    if ((iVar6 < 0x3d) && ((uVar12 >> 2 & 1) == 0)) {
      *param_6 = iVar6;
      uVar8 = local_b8;
      goto LAB_001bdce8;
    }
    break;
  case 0x54:
    puVar13 = (undefined8 *)&DAT_00146168;
LAB_001bdb2c:
    puStack_98 = (undefined *)puVar13[1];
    local_a0 = (undefined *)*puVar13;
    local_90 = puVar13[2];
    pbVar9 = (byte *)&uStack_80;
    uStack_88 = (undefined4)puVar13[3];
    local_84 = (undefined4)((ulong)puVar13[3] >> 0x20);
LAB_001bdb40:
    ppuVar11 = &local_a0;
LAB_001bdb44:
    local_b8 = get(param_1,local_b8,param_3,param_4,param_5,param_6,ppuVar11,pbVar9);
    uVar8 = local_b8;
    goto LAB_001bdce8;
  case 0x58:
    pcVar14 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
    goto LAB_001bdaa8;
  case 0x59:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,4);
    uVar8 = local_b8;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      param_6[5] = iVar6 + -0x76c;
    }
    goto LAB_001bdce8;
  case 99:
    pcVar14 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
LAB_001bdaa8:
    pbVar9 = (byte *)(*pcVar14)();
    uVar15 = (ulong)(*pbVar9 >> 1);
    ppuVar11 = (undefined **)(pbVar9 + 4);
    if ((*pbVar9 & 1) != 0) {
      uVar15 = *(ulong *)(pbVar9 + 8);
      ppuVar11 = *(undefined ***)(pbVar9 + 0x10);
    }
    pbVar9 = (byte *)((long)ppuVar11 + uVar15 * 4);
    goto LAB_001bdb44;
  case 100:
  case 0x65:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,2);
    uVar12 = *param_5;
    if ((iVar6 - 1U < 0x1f) && ((uVar12 >> 2 & 1) == 0)) {
      param_6[3] = iVar6;
      uVar8 = local_b8;
      goto LAB_001bdce8;
    }
    break;
  case 0x6a:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,3);
    uVar12 = *param_5;
    if ((iVar6 < 0x16e) && ((uVar12 >> 2 & 1) == 0)) {
      param_6[7] = iVar6;
      uVar8 = local_b8;
      goto LAB_001bdce8;
    }
    break;
  case 0x6d:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,2);
    uVar12 = *param_5;
    if ((iVar6 < 0xd) && ((uVar12 >> 2 & 1) == 0)) {
      param_6[4] = iVar6 + -1;
      uVar8 = local_b8;
      goto LAB_001bdce8;
    }
    break;
  case 0x6e:
  case 0x74:
    __get_white_space(param_1,&local_b8,param_3,param_5,lVar17);
    uVar8 = local_b8;
    goto LAB_001bdce8;
  case 0x70:
    pbVar9 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      uVar15 = (ulong)(*pbVar9 >> 1);
    }
    else {
      uVar15 = *(ulong *)(pbVar9 + 8);
    }
    if ((pbVar9[0x18] & 1) == 0) {
      uVar16 = (ulong)(pbVar9[0x18] >> 1);
    }
    else {
      uVar16 = *(ulong *)(pbVar9 + 0x20);
    }
    if (uVar15 + uVar16 != 0) {
      pbVar10 = (byte *)FUN_001b29c8(&local_b8,param_3,pbVar9,pbVar9 + 0x30,lVar17,param_5,0);
      iVar6 = param_6[2];
      uVar8 = local_b8;
      if ((iVar6 == 0xc) && (pbVar10 == pbVar9)) {
        param_6[2] = 0;
      }
      else if ((iVar6 < 0xc) && ((long)pbVar10 - (long)pbVar9 == 0x18)) {
        param_6[2] = iVar6 + 0xc;
      }
      goto LAB_001bdce8;
    }
    goto switchD_001bd850_caseD_26;
  case 0x72:
    puStack_98 = _UNK_0014792c;
    local_a0 = _DAT_00147924;
    uStack_88 = _UNK_0014793c;
    local_90 = _DAT_00147934;
    uStack_7c = _UNK_00147948;
    local_84 = _DAT_00147940;
    uStack_80 = _UNK_00147944;
    pbVar9 = abStack_74;
    goto LAB_001bdb40;
  case 0x77:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,1);
    uVar12 = *param_5;
    if ((iVar6 < 7) && ((uVar12 >> 2 & 1) == 0)) {
      param_6[6] = iVar6;
      uVar8 = local_b8;
      goto LAB_001bdce8;
    }
    break;
  case 0x78:
    uVar8 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_b8,param_3,param_4,param_5,param_6)
    ;
    goto LAB_001bdce8;
  case 0x79:
    iVar6 = FUN_001be558(&local_b8,param_3,param_5,lVar17,4);
    uVar8 = local_b8;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      iVar1 = iVar6 + 0x76c;
      if (99 < iVar6) {
        iVar1 = iVar6;
      }
      iVar2 = iVar6 + 2000;
      if (0x44 < iVar6) {
        iVar2 = iVar1;
      }
      param_6[5] = iVar2 + -0x76c;
    }
    goto LAB_001bdce8;
  }
LAB_001bdcdc:
  *param_5 = uVar12 | 4;
  uVar8 = local_b8;
LAB_001bdce8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
switchD_001bd850_caseD_26:
  uVar12 = *param_5;
  goto LAB_001bdcdc;
}


// ===== 001bdd90  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_day =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_day(int&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_day(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
         undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,2);
  if ((iVar1 - 1U < 0x1f) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bddec  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_hour =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_hour(int&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_hour(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
          undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,2);
  if ((iVar1 < 0x18) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bde44  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_12_hour =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_12_hour(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_12_hour(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5
             ,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,2);
  if ((iVar1 - 1U < 0xc) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bdea0  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_day_year_num =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_day_year_num(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_day_year_num(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,
                  uint *param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,3);
  if ((iVar1 < 0x16e) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bdef8  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_month =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_month(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_month(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
           undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,2);
  if ((iVar1 < 0xd) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1 + -1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bdf54  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_minute =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_minute(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_minute(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
            undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,2);
  if ((iVar1 < 0x3c) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001bdfac  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_white_space =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >
   >::__get_white_space(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t>
   >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_white_space(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) goto LAB_001bdfec;
LAB_001be030:
  bVar1 = true;
  if (param_3 == (long *)0x0) goto LAB_001be070;
  while( true ) {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar3 = *(int *)param_3[3];
    }
    if (iVar3 == -1) goto LAB_001be070;
    if (!bVar1) break;
    while( true ) {
      plVar4 = (long *)*param_1;
      if ((undefined4 *)plVar4[3] == (undefined4 *)plVar4[4]) {
        uVar2 = (**(code **)(*plVar4 + 0x48))();
      }
      else {
        uVar2 = *(undefined4 *)plVar4[3];
      }
      uVar5 = (**(code **)(*param_5 + 0x18))(param_5,1,uVar2);
      if ((uVar5 & 1) == 0) goto LAB_001be0e0;
      plVar4 = (long *)*param_1;
      if (plVar4[3] == plVar4[4]) {
        (**(code **)(*plVar4 + 0x50))();
        plVar4 = (long *)*param_1;
      }
      else {
        plVar4[3] = plVar4[3] + 4;
        plVar4 = (long *)*param_1;
      }
      if (plVar4 == (long *)0x0) goto LAB_001be030;
LAB_001bdfec:
      if ((int *)plVar4[3] == (int *)plVar4[4]) {
        iVar3 = (**(code **)(*plVar4 + 0x48))();
      }
      else {
        iVar3 = *(int *)plVar4[3];
      }
      if (iVar3 == -1) {
        *param_1 = 0;
        goto LAB_001be030;
      }
      bVar1 = *param_1 == 0;
      if (param_3 != (long *)0x0) break;
LAB_001be070:
      param_3 = (long *)0x0;
      if (bVar1) goto LAB_001be0e0;
    }
  }
LAB_001be0e0:
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    if ((int *)plVar4[3] == (int *)plVar4[4]) {
      iVar3 = (**(code **)(*plVar4 + 0x48))();
    }
    else {
      iVar3 = *(int *)plVar4[3];
    }
    if (iVar3 != -1) {
      bVar1 = *param_1 == 0;
      goto joined_r0x001be134;
    }
    *param_1 = 0;
  }
  bVar1 = true;
joined_r0x001be134:
  if (param_3 == (long *)0x0) {
    if (!bVar1) {
      return;
    }
  }
  else {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar3 = *(int *)param_3[3];
    }
    if (bVar1 != (iVar3 == -1)) {
      return;
    }
  }
  *param_4 = *param_4 | 2;
  return;
}


// ===== 001be18c  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_am_pm =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_am_pm(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_am_pm(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
            *this,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
           undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  pbVar3 = (byte *)(**(code **)(*(long *)(this + 0x10) + 0x10))();
  if ((*pbVar3 & 1) == 0) {
    uVar5 = (ulong)(*pbVar3 >> 1);
    bVar2 = pbVar3[0x18];
  }
  else {
    uVar5 = *(ulong *)(pbVar3 + 8);
    bVar2 = pbVar3[0x18];
  }
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(pbVar3 + 0x20);
  }
  if (uVar5 + uVar6 == 0) {
    *param_5 = *param_5 | 4;
  }
  else {
    pbVar4 = (byte *)FUN_001b29c8(param_2,param_4,pbVar3,pbVar3 + 0x30,param_6,param_5,0);
    iVar1 = *param_1;
    if ((iVar1 == 0xc) && (pbVar4 == pbVar3)) {
      *param_1 = 0;
    }
    else if ((iVar1 < 0xc) && ((long)pbVar4 - (long)pbVar3 == 0x18)) {
      *param_1 = iVar1 + 0xc;
    }
  }
  return;
}


// ===== 001be274  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_second =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_second(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_second(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
            undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,2);
  if ((iVar1 < 0x3d) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001be2cc  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_weekday =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_weekday(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_weekday(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5
             ,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,1);
  if ((iVar1 < 7) && ((*param_5 >> 2 & 1) == 0)) {
    *param_1 = iVar1;
  }
  else {
    *param_5 = *param_5 | 4;
  }
  return;
}


// ===== 001be324  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_year4 =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_year4(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_year4(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,byte *param_5,
           undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_001be558(param_2,param_4,param_5,param_6,4);
  if ((*param_5 >> 2 & 1) == 0) {
    *param_1 = iVar1 + -0x76c;
  }
  return;
}


// ===== 001be36c  std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_percent =====

/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_percent(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_percent(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
LAB_001be3e4:
    bVar1 = true;
    if (param_3 != (long *)0x0) goto LAB_001be3ec;
LAB_001be3c0:
    if (bVar1) goto LAB_001be43c;
    plVar5 = (long *)0x0;
  }
  else {
    if ((int *)plVar5[3] == (int *)plVar5[4]) {
      iVar4 = (**(code **)(*plVar5 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar5[3];
    }
    if (iVar4 == -1) {
      *param_1 = 0;
      goto LAB_001be3e4;
    }
    bVar1 = *param_1 == 0;
    if (param_3 == (long *)0x0) goto LAB_001be3c0;
LAB_001be3ec:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    plVar5 = (long *)0x0;
    if (iVar4 != -1) {
      plVar5 = param_3;
    }
    if (bVar1 == (iVar4 == -1)) {
LAB_001be43c:
      uVar7 = *param_4 | 6;
      goto LAB_001be540;
    }
  }
  plVar6 = (long *)*param_1;
  if ((undefined4 *)plVar6[3] == (undefined4 *)plVar6[4]) {
    uVar3 = (**(code **)(*plVar6 + 0x48))();
  }
  else {
    uVar3 = *(undefined4 *)plVar6[3];
  }
  cVar2 = (**(code **)(*param_5 + 0x68))(param_5,uVar3,0);
  if (cVar2 != '%') {
    uVar7 = *param_4 | 4;
    goto LAB_001be540;
  }
  plVar6 = (long *)*param_1;
  if (plVar6[3] == plVar6[4]) {
    (**(code **)(*plVar6 + 0x50))();
    plVar6 = (long *)*param_1;
    if (plVar6 != (long *)0x0) goto LAB_001be4b4;
LAB_001be508:
    bVar1 = true;
    if (plVar5 == (long *)0x0) goto LAB_001be510;
LAB_001be4dc:
    if ((int *)plVar5[3] == (int *)plVar5[4]) {
      iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
    }
    else {
      iVar4 = *(int *)plVar5[3];
    }
    if (bVar1 != (iVar4 == -1)) {
      return;
    }
  }
  else {
    plVar6[3] = plVar6[3] + 4;
LAB_001be4b4:
    if ((int *)plVar6[3] == (int *)plVar6[4]) {
      iVar4 = (**(code **)(*plVar6 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar6[3];
    }
    if (iVar4 == -1) {
      *param_1 = 0;
      goto LAB_001be508;
    }
    bVar1 = *param_1 == 0;
    if (plVar5 != (long *)0x0) goto LAB_001be4dc;
LAB_001be510:
    if (!bVar1) {
      return;
    }
  }
  uVar7 = *param_4 | 2;
LAB_001be540:
  *param_4 = uVar7;
  return;
}


// ===== 001be558  FUN_001be558 =====

int FUN_001be558(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
LAB_001be5d8:
    bVar2 = true;
    if (param_2 != (long *)0x0) goto LAB_001be5e0;
LAB_001be5b4:
    if (bVar2) goto LAB_001be630;
    plVar9 = (long *)0x0;
  }
  else {
    if ((int *)plVar9[3] == (int *)plVar9[4]) {
      iVar6 = (**(code **)(*plVar9 + 0x48))();
    }
    else {
      iVar6 = *(int *)plVar9[3];
    }
    if (iVar6 == -1) {
      *param_1 = 0;
      goto LAB_001be5d8;
    }
    bVar2 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_001be5b4;
LAB_001be5e0:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    plVar9 = (long *)0x0;
    if (iVar6 != -1) {
      plVar9 = param_2;
    }
    if (bVar2 == (iVar6 == -1)) {
LAB_001be630:
      iVar6 = 0;
      uVar5 = *param_3 | 6;
      goto LAB_001be8bc;
    }
  }
  plVar10 = (long *)*param_1;
  if ((undefined4 *)plVar10[3] == (undefined4 *)plVar10[4]) {
    uVar7 = (**(code **)(*plVar10 + 0x48))();
  }
  else {
    uVar7 = *(undefined4 *)plVar10[3];
  }
  uVar11 = (**(code **)(*param_4 + 0x18))(param_4,0x40,uVar7);
  if ((uVar11 & 1) != 0) {
    uVar5 = (**(code **)(*param_4 + 0x68))(param_4,uVar7,0);
    plVar10 = (long *)*param_1;
    uVar5 = uVar5 & 0xff;
    if (plVar10[3] == plVar10[4]) {
      (**(code **)(*plVar10 + 0x50))();
    }
    else {
      plVar10[3] = plVar10[3] + 4;
    }
    plVar10 = (long *)*param_1;
    if (plVar10 != (long *)0x0) goto LAB_001be6e4;
LAB_001be744:
    plVar10 = (long *)0x0;
    bVar2 = true;
    iVar6 = uVar5 - 0x30;
    if (plVar9 == (long *)0x0) goto LAB_001be710;
LAB_001be750:
    if ((int *)plVar9[3] == (int *)plVar9[4]) {
      iVar8 = (**(code **)(*plVar9 + 0x48))(plVar9);
      plVar10 = (long *)*param_1;
    }
    else {
      iVar8 = *(int *)plVar9[3];
    }
    bVar3 = iVar8 == -1;
    plVar1 = (long *)0x0;
    if (!bVar3) {
      plVar1 = plVar9;
    }
    do {
      plVar9 = plVar1;
      if ((param_5 < 2) || (!(bool)(bVar2 ^ bVar3))) {
        if (plVar10 == (long *)0x0) {
LAB_001be878:
          bVar2 = true;
          if (plVar9 != (long *)0x0) goto LAB_001be880;
LAB_001be854:
          if (!bVar2) {
            return iVar6;
          }
        }
        else {
          if ((int *)plVar10[3] == (int *)plVar10[4]) {
            iVar8 = (**(code **)(*plVar10 + 0x48))(plVar10);
          }
          else {
            iVar8 = *(int *)plVar10[3];
          }
          if (iVar8 == -1) {
            *param_1 = 0;
            goto LAB_001be878;
          }
          bVar2 = *param_1 == 0;
          if (plVar9 == (long *)0x0) goto LAB_001be854;
LAB_001be880:
          if ((int *)plVar9[3] == (int *)plVar9[4]) {
            iVar8 = (**(code **)(*plVar9 + 0x48))(plVar9);
          }
          else {
            iVar8 = *(int *)plVar9[3];
          }
          if (bVar2 != (iVar8 == -1)) {
            return iVar6;
          }
        }
        uVar5 = *param_3 | 2;
        goto LAB_001be8bc;
      }
      if ((undefined4 *)plVar10[3] == (undefined4 *)plVar10[4]) {
        uVar7 = (**(code **)(*plVar10 + 0x48))(plVar10);
      }
      else {
        uVar7 = *(undefined4 *)plVar10[3];
      }
      uVar11 = (**(code **)(*param_4 + 0x18))(param_4,0x40,uVar7);
      if ((uVar11 & 1) == 0) {
        return iVar6;
      }
      param_5 = param_5 + -1;
      bVar4 = (**(code **)(*param_4 + 0x68))(param_4,uVar7,0);
      plVar10 = (long *)*param_1;
      uVar5 = iVar6 * 10 + (uint)bVar4;
      if (plVar10[3] == plVar10[4]) {
        (**(code **)(*plVar10 + 0x50))();
        plVar10 = (long *)*param_1;
      }
      else {
        plVar10[3] = plVar10[3] + 4;
        plVar10 = (long *)*param_1;
      }
      if (plVar10 == (long *)0x0) goto LAB_001be744;
LAB_001be6e4:
      if ((int *)plVar10[3] == (int *)plVar10[4]) {
        iVar6 = (**(code **)(*plVar10 + 0x48))();
      }
      else {
        iVar6 = *(int *)plVar10[3];
      }
      if (iVar6 == -1) {
        *param_1 = 0;
        goto LAB_001be744;
      }
      plVar10 = (long *)*param_1;
      bVar2 = plVar10 == (long *)0x0;
      iVar6 = uVar5 - 0x30;
      if (plVar9 != (long *)0x0) goto LAB_001be750;
LAB_001be710:
      bVar3 = true;
      plVar1 = plVar9;
    } while( true );
  }
  iVar6 = 0;
  uVar5 = *param_3 | 4;
LAB_001be8bc:
  *param_3 = uVar5;
  return iVar6;
}


// ===== 001be8dc  std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::put =====

/* std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, tm const*, char const*, char const*) const */

long * __thiscall
std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
put(time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
   long *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,undefined1 *param_6,
   undefined1 *param_7)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  ulong uVar12;
  __shared_count *local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ios_base::getloc();
  puVar3 = PTR_id_0020f840;
  local_80 = 0;
  local_90 = PTR_id_0020f840;
  puStack_88 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001be964 to 001be97b has its CatchHandler @ 001bebc0 */
    __call_once((ulong *)PTR_id_0020f840,&local_78,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar11 = *(long **)(*(long *)(local_98 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bebb8 to 001bebbb has its CatchHandler @ 001bebc0 */
    FUN_0017cb1c();
  }
  plVar5 = (long *)__shared_count::__release_shared(local_98);
LAB_001be9c4:
  plVar9 = param_2;
  if (param_6 == param_7) {
LAB_001beb5c:
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return plVar9;
    }
LAB_001bebbc:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5);
  }
  plVar5 = (long *)(**(code **)(*plVar11 + 0x48))(plVar11,*param_6,0);
  if (((uint)plVar5 & 0xff) == 0x25) {
    puVar10 = param_6 + 1;
    if (puVar10 == param_7) {
      if (param_2 != (long *)0x0) {
        puVar8 = (undefined1 *)param_2[6];
        uVar7 = *param_6;
        if (puVar8 == (undefined1 *)param_2[7]) {
          iVar4 = (**(code **)(*param_2 + 0x68))(param_2);
          plVar5 = (long *)0x0;
          if (iVar4 != -1) {
            plVar5 = param_2;
          }
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return plVar5;
          }
          goto LAB_001bebbc;
        }
LAB_001beb50:
        param_2[6] = (long)(puVar8 + 1);
        *puVar8 = uVar7;
      }
      goto LAB_001beb5c;
    }
    plVar5 = (long *)(**(code **)(*plVar11 + 0x48))(plVar11,*puVar10,0);
    uVar1 = (uint)plVar5 & 0xff;
    if ((uVar1 == 0x4f) || (uVar1 == 0x45)) {
      puVar8 = param_6 + 2;
      if (puVar8 == param_7) {
        if (param_2 == (long *)0x0) goto LAB_001beb5c;
        puVar8 = (undefined1 *)param_2[6];
        uVar7 = *param_6;
        if (puVar8 == (undefined1 *)param_2[7]) {
          plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
          if ((int)plVar5 == -1) {
            plVar9 = (long *)0x0;
            goto LAB_001beb5c;
          }
        }
        else {
          param_2[6] = (long)(puVar8 + 1);
          *puVar8 = uVar7;
        }
        puVar8 = (undefined1 *)param_2[6];
        uVar7 = *puVar10;
        if (puVar8 != (undefined1 *)param_2[7]) goto LAB_001beb50;
        plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
        plVar9 = (long *)0x0;
        if ((int)plVar5 != -1) {
          plVar9 = param_2;
        }
        goto LAB_001beb5c;
      }
      uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11,*puVar8,0);
      uVar6 = uVar6 & 0xffffffff;
      puVar10 = puVar8;
      uVar12 = (ulong)plVar5 & 0xffffffff;
    }
    else {
      uVar12 = 0;
      uVar6 = (ulong)plVar5 & 0xffffffff;
    }
    plVar5 = (long *)(**(code **)(*(long *)this + 0x18))
                               (this,param_2,param_3,param_4,param_5,uVar6,uVar12);
    param_6 = puVar10 + 1;
    param_2 = plVar5;
    goto LAB_001be9c4;
  }
  if (param_2 != (long *)0x0) {
    puVar10 = (undefined1 *)param_2[6];
    uVar7 = *param_6;
    if (puVar10 != (undefined1 *)param_2[7]) {
      param_2[6] = (long)(puVar10 + 1);
      *puVar10 = uVar7;
      param_6 = param_6 + 1;
      goto LAB_001be9c4;
    }
    plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
    plVar9 = (long *)0x0;
    if ((int)plVar5 != -1) {
      plVar9 = param_2;
    }
  }
  param_6 = param_6 + 1;
  param_2 = plVar9;
  goto LAB_001be9c4;
}


// ===== 001bebd8  std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, tm const*, char, char) const */

long * __thiscall
std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      long *param_2,undefined8 param_3,undefined8 param_4,tm *param_5,char param_6,char param_7)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  char *pcVar7;
  char local_a0;
  char local_9f;
  char local_9e;
  undefined1 local_9d;
  char local_9c [100];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_a0 = '%';
  local_9d = 0;
  local_9f = param_6;
  local_9e = param_7;
  if (param_7 != '\0') {
    local_9f = param_7;
    local_9e = param_6;
  }
  sVar5 = strftime_l(local_9c,100,&local_a0,param_5,*(__locale_t *)(this + 0x10));
  if (sVar5 != 0) {
    pcVar7 = local_9c;
    plVar6 = param_2;
    do {
      param_2 = plVar6;
      if (plVar6 != (long *)0x0) {
        pcVar1 = (char *)plVar6[6];
        cVar2 = *pcVar7;
        if (pcVar1 == (char *)plVar6[7]) {
          iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
          param_2 = (long *)0x0;
          if (iVar4 != -1) {
            param_2 = plVar6;
          }
        }
        else {
          plVar6[6] = (long)(pcVar1 + 1);
          *pcVar1 = cVar2;
        }
      }
      sVar5 = sVar5 - 1;
      pcVar7 = pcVar7 + 1;
      plVar6 = param_2;
    } while (sVar5 != 0);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001becbc  std::__ndk1::__time_put::__do_put =====

/* std::__ndk1::__time_put::__do_put(char*, char*&, tm const*, char, char) const */

void __thiscall
std::__ndk1::__time_put::__do_put
          (__time_put *this,char *param_1,char **param_2,tm *param_3,char param_4,char param_5)

{
  long lVar1;
  size_t sVar2;
  char local_3c;
  char local_3b;
  char local_3a;
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = '%';
  local_39 = 0;
  local_3b = param_4;
  local_3a = param_5;
  if (param_5 != '\0') {
    local_3b = param_5;
    local_3a = param_4;
  }
  sVar2 = strftime_l(param_1,(long)*param_2 - (long)param_1,&local_3c,param_3,*(__locale_t *)this);
  *param_2 = param_1 + sVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001bed50  std::__ndk1::time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::put =====

/* std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, tm const*, wchar_t const*,
   wchar_t const*) const */

long * __thiscall
std::__ndk1::
time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::put
          (time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,int *param_6
          ,int *param_7)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  __shared_count *local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined **local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ios_base::getloc();
  puVar4 = PTR_id_0020f8b8;
  local_80 = 0;
  local_90 = PTR_id_0020f8b8;
  puStack_88 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001bedd8 to 001bedef has its CatchHandler @ 001bf060 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_78,FUN_001db064);
  }
  if (((ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3) <=
       (long)*(int *)(puVar4 + 8) - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_98 + 0x10) + ((long)*(int *)(puVar4 + 8) - 1U) * 8),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bf05c to 001bf05f has its CatchHandler @ 001bf060 */
    FUN_0017cb1c();
  }
  plVar6 = (long *)__shared_count::__release_shared(local_98);
  plVar8 = param_2;
  if (param_6 != param_7) {
    do {
      while (plVar6 = (long *)(**(code **)(*plVar10 + 0x68))(plVar10,*param_6,0), param_2 = plVar8,
            ((uint)plVar6 & 0xff) == 0x25) {
        piVar9 = param_6 + 1;
        if (piVar9 == param_7) {
          if (plVar8 != (long *)0x0) {
            piVar9 = (int *)plVar8[6];
            iVar5 = *param_6;
            if (piVar9 == (int *)plVar8[7]) {
              iVar5 = (**(code **)(*plVar8 + 0x68))(plVar8);
            }
            else {
              plVar8[6] = (long)(piVar9 + 1);
              *piVar9 = iVar5;
            }
            plVar6 = (long *)0x0;
            if (iVar5 != -1) {
              plVar6 = plVar8;
            }
            if (*(long *)(lVar3 + 0x28) == local_68) {
              return plVar6;
            }
            goto LAB_001bf014;
          }
          goto LAB_001bef40;
        }
        plVar6 = (long *)(**(code **)(*plVar10 + 0x68))(plVar10,*piVar9,0);
        uVar1 = (uint)plVar6 & 0xff;
        if ((uVar1 == 0x4f) || (uVar1 == 0x45)) {
          piVar2 = param_6 + 2;
          if (piVar2 == param_7) {
            if (plVar8 != (long *)0x0) {
              piVar2 = (int *)plVar8[6];
              iVar5 = *param_6;
              if (piVar2 == (int *)plVar8[7]) {
                plVar6 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8);
                iVar5 = (int)plVar6;
              }
              else {
                plVar8[6] = (long)(piVar2 + 1);
                *piVar2 = iVar5;
              }
              if (iVar5 == -1) {
                param_2 = (long *)0x0;
              }
              else {
                piVar2 = (int *)plVar8[6];
                iVar5 = *piVar9;
                if (piVar2 == (int *)plVar8[7]) {
                  plVar6 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8);
                  iVar5 = (int)plVar6;
                }
                else {
                  plVar8[6] = (long)(piVar2 + 1);
                  *piVar2 = iVar5;
                }
                param_2 = (long *)0x0;
                if (iVar5 != -1) {
                  param_2 = plVar8;
                }
              }
            }
            goto LAB_001bef40;
          }
          uVar7 = (**(code **)(*plVar10 + 0x68))(plVar10,*piVar2,0);
          uVar7 = uVar7 & 0xffffffff;
          piVar9 = piVar2;
          uVar11 = (ulong)plVar6 & 0xffffffff;
        }
        else {
          uVar11 = 0;
          uVar7 = (ulong)plVar6 & 0xffffffff;
        }
        plVar6 = (long *)(**(code **)(*(long *)this + 0x18))
                                   (this,plVar8,param_3,param_4,param_5,uVar7,uVar11);
        param_6 = piVar9 + 1;
        param_2 = plVar6;
        plVar8 = plVar6;
        if (param_6 == param_7) goto LAB_001bef40;
      }
      if (plVar8 != (long *)0x0) {
        piVar9 = (int *)plVar8[6];
        iVar5 = *param_6;
        if (piVar9 == (int *)plVar8[7]) {
          plVar6 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8);
          iVar5 = (int)plVar6;
        }
        else {
          plVar8[6] = (long)(piVar9 + 1);
          *piVar9 = iVar5;
        }
        param_2 = (long *)0x0;
        if (iVar5 != -1) {
          param_2 = plVar8;
        }
      }
      param_6 = param_6 + 1;
      plVar8 = param_2;
    } while (param_6 != param_7);
  }
LAB_001bef40:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return param_2;
  }
LAB_001bf014:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


// ===== 001bf078  std::__ndk1::time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, tm const*, char, char)
   const */

long * __thiscall
std::__ndk1::
time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
       *this,long *param_2,undefined8 param_3,undefined8 param_4,tm *param_5,char param_6,
      char param_7)

{
  wchar_t *pwVar1;
  long lVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  long *plVar5;
  wchar_t *pwVar6;
  wchar_t *local_1e0;
  wchar_t local_1d8 [100];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_1e0 = (wchar_t *)&local_48;
  __time_put::__do_put((__time_put *)(this + 0x10),local_1d8,&local_1e0,param_5,param_6,param_7);
  pwVar3 = local_1e0;
  if (local_1d8 != local_1e0) {
    pwVar6 = local_1d8;
    plVar5 = param_2;
    do {
      param_2 = plVar5;
      if (plVar5 != (long *)0x0) {
        pwVar1 = (wchar_t *)plVar5[6];
        wVar4 = *pwVar6;
        if (pwVar1 == (wchar_t *)plVar5[7]) {
          wVar4 = (**(code **)(*plVar5 + 0x68))(plVar5);
        }
        else {
          plVar5[6] = (long)(pwVar1 + 1);
          *pwVar1 = wVar4;
        }
        param_2 = (long *)0x0;
        if (wVar4 != L'\xffffffff') {
          param_2 = plVar5;
        }
      }
      pwVar6 = pwVar6 + 1;
      plVar5 = param_2;
    } while (pwVar3 != pwVar6);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 001bf158  std::__ndk1::__time_put::__do_put =====

/* std::__ndk1::__time_put::__do_put(wchar_t*, wchar_t*&, tm const*, char, char) const */

void __thiscall
std::__ndk1::__time_put::__do_put
          (__time_put *this,wchar_t *param_1,wchar_t **param_2,tm *param_3,char param_4,char param_5
          )

{
  long lVar1;
  mbstate_t mVar2;
  __locale_t __dataset;
  size_t sVar3;
  wchar_t *pwVar4;
  char *local_c0;
  mbstate_t local_b8;
  char acStack_ac [100];
  long local_48;
  
  mVar2 = local_b8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b8.__count._0_2_ = CONCAT11(param_4,0x25);
  local_b8.__count._0_3_ = CONCAT12(param_5,(undefined2)local_b8.__count);
  local_b8.__value = mVar2.__value;
  local_b8.__count = (int)(uint3)local_b8.__count;
  mVar2 = local_b8;
  if (param_5 != '\0') {
    local_b8.__count._1_1_ = param_5;
    local_b8.__count._0_1_ = 0x25;
    local_b8._3_5_ = mVar2._3_5_;
    local_b8.__count._2_1_ = param_4;
  }
  strftime_l(acStack_ac,100,(char *)&local_b8,param_3,*(__locale_t *)this);
  local_b8.__count = 0;
  local_b8.__value = (_union_27)0x0;
  pwVar4 = *param_2;
  local_c0 = acStack_ac;
  __dataset = uselocale(*(__locale_t *)this);
                    /* try { // try from 001bf1e0 to 001bf1f3 has its CatchHandler @ 001bf250 */
  sVar3 = mbsrtowcs(param_1,&local_c0,(long)pwVar4 - (long)param_1 >> 2,&local_b8);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001bf1fc to 001bf203 has its CatchHandler @ 001bf24c */
    uselocale(__dataset);
  }
  if (sVar3 == 0xffffffffffffffff) {
    __throw_runtime_error("locale not supported");
  }
  else {
    *param_2 = param_1 + sVar3;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001bf26c  std::__ndk1::moneypunct<char,false>::do_decimal_point =====

/* std::__ndk1::moneypunct<char, false>::do_decimal_point() const */

undefined8 std::__ndk1::moneypunct<char,false>::do_decimal_point(void)

{
  return 0xff;
}


// ===== 001bf274  std::__ndk1::moneypunct<char,false>::do_thousands_sep =====

/* std::__ndk1::moneypunct<char, false>::do_thousands_sep() const */

undefined8 std::__ndk1::moneypunct<char,false>::do_thousands_sep(void)

{
  return 0xff;
}


// ===== 001bf27c  std::__ndk1::moneypunct<char,false>::do_grouping =====

/* std::__ndk1::moneypunct<char, false>::do_grouping() const */

void __thiscall std::__ndk1::moneypunct<char,false>::do_grouping(moneypunct<char,false> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf288  std::__ndk1::moneypunct<char,false>::do_curr_symbol =====

/* std::__ndk1::moneypunct<char, false>::do_curr_symbol() const */

void __thiscall std::__ndk1::moneypunct<char,false>::do_curr_symbol(moneypunct<char,false> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf294  std::__ndk1::moneypunct<char,false>::do_positive_sign =====

/* std::__ndk1::moneypunct<char, false>::do_positive_sign() const */

void __thiscall std::__ndk1::moneypunct<char,false>::do_positive_sign(moneypunct<char,false> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf2a0  std::__ndk1::moneypunct<char,false>::do_negative_sign =====

/* std::__ndk1::moneypunct<char, false>::do_negative_sign() const */

void __thiscall std::__ndk1::moneypunct<char,false>::do_negative_sign(moneypunct<char,false> *this)

{
  undefined2 *in_x8;
  
  *in_x8 = 0x2d02;
  *(undefined1 *)(in_x8 + 1) = 0;
  return;
}


// ===== 001bf2b0  std::__ndk1::moneypunct<char,false>::do_frac_digits =====

/* std::__ndk1::moneypunct<char, false>::do_frac_digits() const */

undefined8 std::__ndk1::moneypunct<char,false>::do_frac_digits(void)

{
  return 0;
}


// ===== 001bf2b8  std::__ndk1::moneypunct<char,false>::do_pos_format =====

/* std::__ndk1::moneypunct<char, false>::do_pos_format() const */

undefined8 std::__ndk1::moneypunct<char,false>::do_pos_format(void)

{
  return 0x4000302;
}


// ===== 001bf2c4  std::__ndk1::moneypunct<char,false>::do_neg_format =====

/* std::__ndk1::moneypunct<char, false>::do_neg_format() const */

undefined8 std::__ndk1::moneypunct<char,false>::do_neg_format(void)

{
  return 0x4000302;
}


// ===== 001bf2d0  std::__ndk1::moneypunct<char,true>::do_decimal_point =====

/* std::__ndk1::moneypunct<char, true>::do_decimal_point() const */

undefined8 std::__ndk1::moneypunct<char,true>::do_decimal_point(void)

{
  return 0xff;
}


// ===== 001bf2d8  std::__ndk1::moneypunct<char,true>::do_thousands_sep =====

/* std::__ndk1::moneypunct<char, true>::do_thousands_sep() const */

undefined8 std::__ndk1::moneypunct<char,true>::do_thousands_sep(void)

{
  return 0xff;
}


// ===== 001bf2e0  std::__ndk1::moneypunct<char,true>::do_grouping =====

/* std::__ndk1::moneypunct<char, true>::do_grouping() const */

void __thiscall std::__ndk1::moneypunct<char,true>::do_grouping(moneypunct<char,true> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf2ec  std::__ndk1::moneypunct<char,true>::do_curr_symbol =====

/* std::__ndk1::moneypunct<char, true>::do_curr_symbol() const */

void __thiscall std::__ndk1::moneypunct<char,true>::do_curr_symbol(moneypunct<char,true> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf2f8  std::__ndk1::moneypunct<char,true>::do_positive_sign =====

/* std::__ndk1::moneypunct<char, true>::do_positive_sign() const */

void __thiscall std::__ndk1::moneypunct<char,true>::do_positive_sign(moneypunct<char,true> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf304  std::__ndk1::moneypunct<char,true>::do_negative_sign =====

/* std::__ndk1::moneypunct<char, true>::do_negative_sign() const */

void __thiscall std::__ndk1::moneypunct<char,true>::do_negative_sign(moneypunct<char,true> *this)

{
  undefined2 *in_x8;
  
  *in_x8 = 0x2d02;
  *(undefined1 *)(in_x8 + 1) = 0;
  return;
}


// ===== 001bf314  std::__ndk1::moneypunct<char,true>::do_frac_digits =====

/* std::__ndk1::moneypunct<char, true>::do_frac_digits() const */

undefined8 std::__ndk1::moneypunct<char,true>::do_frac_digits(void)

{
  return 0;
}


// ===== 001bf31c  std::__ndk1::moneypunct<char,true>::do_pos_format =====

/* std::__ndk1::moneypunct<char, true>::do_pos_format() const */

undefined8 std::__ndk1::moneypunct<char,true>::do_pos_format(void)

{
  return 0x4000302;
}


// ===== 001bf328  std::__ndk1::moneypunct<char,true>::do_neg_format =====

/* std::__ndk1::moneypunct<char, true>::do_neg_format() const */

undefined8 std::__ndk1::moneypunct<char,true>::do_neg_format(void)

{
  return 0x4000302;
}


// ===== 001bf334  std::__ndk1::moneypunct<wchar_t,false>::do_decimal_point =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_decimal_point() const */

undefined8 std::__ndk1::moneypunct<wchar_t,false>::do_decimal_point(void)

{
  return 0xffffffff;
}


// ===== 001bf33c  std::__ndk1::moneypunct<wchar_t,false>::do_thousands_sep =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_thousands_sep() const */

undefined8 std::__ndk1::moneypunct<wchar_t,false>::do_thousands_sep(void)

{
  return 0xffffffff;
}


// ===== 001bf344  std::__ndk1::moneypunct<wchar_t,false>::do_grouping =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_grouping() const */

void __thiscall std::__ndk1::moneypunct<wchar_t,false>::do_grouping(moneypunct<wchar_t,false> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf350  std::__ndk1::moneypunct<wchar_t,false>::do_curr_symbol =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_curr_symbol() const */

void __thiscall
std::__ndk1::moneypunct<wchar_t,false>::do_curr_symbol(moneypunct<wchar_t,false> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf35c  std::__ndk1::moneypunct<wchar_t,false>::do_positive_sign =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_positive_sign() const */

void __thiscall
std::__ndk1::moneypunct<wchar_t,false>::do_positive_sign(moneypunct<wchar_t,false> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf368  std::__ndk1::moneypunct<wchar_t,false>::do_negative_sign =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_negative_sign() const */

void __thiscall
std::__ndk1::moneypunct<wchar_t,false>::do_negative_sign(moneypunct<wchar_t,false> *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 2;
                    /* try { // try from 001bf384 to 001bf38f has its CatchHandler @ 001bf3a0 */
  wmemset((wchar_t *)(in_x8 + 4),L'-',1);
  *(undefined4 *)(in_x8 + 8) = 0;
  return;
}


// ===== 001bf3a4  std::__ndk1::moneypunct<wchar_t,false>::do_frac_digits =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_frac_digits() const */

undefined8 std::__ndk1::moneypunct<wchar_t,false>::do_frac_digits(void)

{
  return 0;
}


// ===== 001bf3ac  std::__ndk1::moneypunct<wchar_t,false>::do_pos_format =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_pos_format() const */

undefined8 std::__ndk1::moneypunct<wchar_t,false>::do_pos_format(void)

{
  return 0x4000302;
}


// ===== 001bf3b8  std::__ndk1::moneypunct<wchar_t,false>::do_neg_format =====

/* std::__ndk1::moneypunct<wchar_t, false>::do_neg_format() const */

undefined8 std::__ndk1::moneypunct<wchar_t,false>::do_neg_format(void)

{
  return 0x4000302;
}


// ===== 001bf3c4  std::__ndk1::moneypunct<wchar_t,true>::do_decimal_point =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_decimal_point() const */

undefined8 std::__ndk1::moneypunct<wchar_t,true>::do_decimal_point(void)

{
  return 0xffffffff;
}


// ===== 001bf3cc  std::__ndk1::moneypunct<wchar_t,true>::do_thousands_sep =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_thousands_sep() const */

undefined8 std::__ndk1::moneypunct<wchar_t,true>::do_thousands_sep(void)

{
  return 0xffffffff;
}


// ===== 001bf3d4  std::__ndk1::moneypunct<wchar_t,true>::do_grouping =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_grouping() const */

void __thiscall std::__ndk1::moneypunct<wchar_t,true>::do_grouping(moneypunct<wchar_t,true> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf3e0  std::__ndk1::moneypunct<wchar_t,true>::do_curr_symbol =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_curr_symbol() const */

void __thiscall
std::__ndk1::moneypunct<wchar_t,true>::do_curr_symbol(moneypunct<wchar_t,true> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf3ec  std::__ndk1::moneypunct<wchar_t,true>::do_positive_sign =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_positive_sign() const */

void __thiscall
std::__ndk1::moneypunct<wchar_t,true>::do_positive_sign(moneypunct<wchar_t,true> *this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001bf3f8  std::__ndk1::moneypunct<wchar_t,true>::do_negative_sign =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_negative_sign() const */

void __thiscall
std::__ndk1::moneypunct<wchar_t,true>::do_negative_sign(moneypunct<wchar_t,true> *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 2;
                    /* try { // try from 001bf414 to 001bf41f has its CatchHandler @ 001bf430 */
  wmemset((wchar_t *)(in_x8 + 4),L'-',1);
  *(undefined4 *)(in_x8 + 8) = 0;
  return;
}


// ===== 001bf434  std::__ndk1::moneypunct<wchar_t,true>::do_frac_digits =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_frac_digits() const */

undefined8 std::__ndk1::moneypunct<wchar_t,true>::do_frac_digits(void)

{
  return 0;
}


// ===== 001bf43c  std::__ndk1::moneypunct<wchar_t,true>::do_pos_format =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_pos_format() const */

undefined8 std::__ndk1::moneypunct<wchar_t,true>::do_pos_format(void)

{
  return 0x4000302;
}


// ===== 001bf448  std::__ndk1::moneypunct<wchar_t,true>::do_neg_format =====

/* std::__ndk1::moneypunct<wchar_t, true>::do_neg_format() const */

undefined8 std::__ndk1::moneypunct<wchar_t,true>::do_neg_format(void)

{
  return 0x4000302;
}


// ===== 001bf454  std::__ndk1::moneypunct_byname<char,false>::do_decimal_point =====

/* std::__ndk1::moneypunct_byname<char, false>::do_decimal_point() const */

moneypunct_byname<char,false> __thiscall
std::__ndk1::moneypunct_byname<char,false>::do_decimal_point(moneypunct_byname<char,false> *this)

{
  return this[0x10];
}


// ===== 001bf45c  std::__ndk1::moneypunct_byname<char,false>::do_thousands_sep =====

/* std::__ndk1::moneypunct_byname<char, false>::do_thousands_sep() const */

moneypunct_byname<char,false> __thiscall
std::__ndk1::moneypunct_byname<char,false>::do_thousands_sep(moneypunct_byname<char,false> *this)

{
  return this[0x11];
}


// ===== 001bf464  std::__ndk1::moneypunct_byname<char,false>::do_grouping =====

/* std::__ndk1::moneypunct_byname<char, false>::do_grouping() const */

void std::__ndk1::moneypunct_byname<char,false>::do_grouping(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x18));
  return;
}


// ===== 001bf470  std::__ndk1::moneypunct_byname<char,false>::do_curr_symbol =====

/* std::__ndk1::moneypunct_byname<char, false>::do_curr_symbol() const */

void std::__ndk1::moneypunct_byname<char,false>::do_curr_symbol(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x30));
  return;
}


// ===== 001bf47c  std::__ndk1::moneypunct_byname<char,false>::do_positive_sign =====

/* std::__ndk1::moneypunct_byname<char, false>::do_positive_sign() const */

void std::__ndk1::moneypunct_byname<char,false>::do_positive_sign(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x48));
  return;
}


// ===== 001bf488  std::__ndk1::moneypunct_byname<char,false>::do_negative_sign =====

/* std::__ndk1::moneypunct_byname<char, false>::do_negative_sign() const */

void std::__ndk1::moneypunct_byname<char,false>::do_negative_sign(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x60));
  return;
}


// ===== 001bf494  std::__ndk1::moneypunct_byname<char,false>::do_frac_digits =====

/* std::__ndk1::moneypunct_byname<char, false>::do_frac_digits() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<char,false>::do_frac_digits(moneypunct_byname<char,false> *this)

{
  return *(undefined4 *)(this + 0x78);
}


// ===== 001bf49c  std::__ndk1::moneypunct_byname<char,false>::do_pos_format =====

/* std::__ndk1::moneypunct_byname<char, false>::do_pos_format() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<char,false>::do_pos_format(moneypunct_byname<char,false> *this)

{
  return *(undefined4 *)(this + 0x7c);
}


// ===== 001bf4a4  std::__ndk1::moneypunct_byname<char,false>::do_neg_format =====

/* std::__ndk1::moneypunct_byname<char, false>::do_neg_format() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<char,false>::do_neg_format(moneypunct_byname<char,false> *this)

{
  return *(undefined4 *)(this + 0x80);
}


// ===== 001bf4ac  std::__ndk1::moneypunct_byname<char,true>::do_decimal_point =====

/* std::__ndk1::moneypunct_byname<char, true>::do_decimal_point() const */

moneypunct_byname<char,true> __thiscall
std::__ndk1::moneypunct_byname<char,true>::do_decimal_point(moneypunct_byname<char,true> *this)

{
  return this[0x10];
}


// ===== 001bf4b4  std::__ndk1::moneypunct_byname<char,true>::do_thousands_sep =====

/* std::__ndk1::moneypunct_byname<char, true>::do_thousands_sep() const */

moneypunct_byname<char,true> __thiscall
std::__ndk1::moneypunct_byname<char,true>::do_thousands_sep(moneypunct_byname<char,true> *this)

{
  return this[0x11];
}


// ===== 001bf4bc  std::__ndk1::moneypunct_byname<char,true>::do_grouping =====

/* std::__ndk1::moneypunct_byname<char, true>::do_grouping() const */

void std::__ndk1::moneypunct_byname<char,true>::do_grouping(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x18));
  return;
}


// ===== 001bf4c8  std::__ndk1::moneypunct_byname<char,true>::do_curr_symbol =====

/* std::__ndk1::moneypunct_byname<char, true>::do_curr_symbol() const */

void std::__ndk1::moneypunct_byname<char,true>::do_curr_symbol(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x30));
  return;
}


// ===== 001bf4d4  std::__ndk1::moneypunct_byname<char,true>::do_positive_sign =====

/* std::__ndk1::moneypunct_byname<char, true>::do_positive_sign() const */

void std::__ndk1::moneypunct_byname<char,true>::do_positive_sign(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x48));
  return;
}


// ===== 001bf4e0  std::__ndk1::moneypunct_byname<char,true>::do_negative_sign =====

/* std::__ndk1::moneypunct_byname<char, true>::do_negative_sign() const */

void std::__ndk1::moneypunct_byname<char,true>::do_negative_sign(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x60));
  return;
}


// ===== 001bf4ec  std::__ndk1::moneypunct_byname<char,true>::do_frac_digits =====

/* std::__ndk1::moneypunct_byname<char, true>::do_frac_digits() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<char,true>::do_frac_digits(moneypunct_byname<char,true> *this)

{
  return *(undefined4 *)(this + 0x78);
}


// ===== 001bf4f4  std::__ndk1::moneypunct_byname<char,true>::do_pos_format =====

/* std::__ndk1::moneypunct_byname<char, true>::do_pos_format() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<char,true>::do_pos_format(moneypunct_byname<char,true> *this)

{
  return *(undefined4 *)(this + 0x7c);
}


// ===== 001bf4fc  std::__ndk1::moneypunct_byname<char,true>::do_neg_format =====

/* std::__ndk1::moneypunct_byname<char, true>::do_neg_format() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<char,true>::do_neg_format(moneypunct_byname<char,true> *this)

{
  return *(undefined4 *)(this + 0x80);
}


// ===== 001bf504  std::__ndk1::moneypunct_byname<wchar_t,false>::do_decimal_point =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_decimal_point() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,false>::do_decimal_point
          (moneypunct_byname<wchar_t,false> *this)

{
  return *(undefined4 *)(this + 0x10);
}


// ===== 001bf50c  std::__ndk1::moneypunct_byname<wchar_t,false>::do_thousands_sep =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_thousands_sep() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,false>::do_thousands_sep
          (moneypunct_byname<wchar_t,false> *this)

{
  return *(undefined4 *)(this + 0x14);
}


// ===== 001bf514  std::__ndk1::moneypunct_byname<wchar_t,false>::do_grouping =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_grouping() const */

void std::__ndk1::moneypunct_byname<wchar_t,false>::do_grouping(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x18));
  return;
}


// ===== 001bf520  std::__ndk1::moneypunct_byname<wchar_t,false>::do_curr_symbol =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_curr_symbol() const */

void std::__ndk1::moneypunct_byname<wchar_t,false>::do_curr_symbol(void)

{
  long in_x0;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string(in_x8,(basic_string_conflict *)(in_x0 + 0x30));
  return;
}


// ===== 001bf52c  std::__ndk1::moneypunct_byname<wchar_t,false>::do_positive_sign =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_positive_sign() const */

void std::__ndk1::moneypunct_byname<wchar_t,false>::do_positive_sign(void)

{
  long in_x0;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string(in_x8,(basic_string_conflict *)(in_x0 + 0x48));
  return;
}


// ===== 001bf538  std::__ndk1::moneypunct_byname<wchar_t,false>::do_negative_sign =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_negative_sign() const */

void std::__ndk1::moneypunct_byname<wchar_t,false>::do_negative_sign(void)

{
  long in_x0;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string(in_x8,(basic_string_conflict *)(in_x0 + 0x60));
  return;
}


// ===== 001bf544  std::__ndk1::moneypunct_byname<wchar_t,false>::do_frac_digits =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_frac_digits() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,false>::do_frac_digits
          (moneypunct_byname<wchar_t,false> *this)

{
  return *(undefined4 *)(this + 0x78);
}


// ===== 001bf54c  std::__ndk1::moneypunct_byname<wchar_t,false>::do_pos_format =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_pos_format() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,false>::do_pos_format(moneypunct_byname<wchar_t,false> *this)

{
  return *(undefined4 *)(this + 0x7c);
}


// ===== 001bf554  std::__ndk1::moneypunct_byname<wchar_t,false>::do_neg_format =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::do_neg_format() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,false>::do_neg_format(moneypunct_byname<wchar_t,false> *this)

{
  return *(undefined4 *)(this + 0x80);
}


// ===== 001bf55c  std::__ndk1::moneypunct_byname<wchar_t,true>::do_decimal_point =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_decimal_point() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::do_decimal_point
          (moneypunct_byname<wchar_t,true> *this)

{
  return *(undefined4 *)(this + 0x10);
}


// ===== 001bf564  std::__ndk1::moneypunct_byname<wchar_t,true>::do_thousands_sep =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_thousands_sep() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::do_thousands_sep
          (moneypunct_byname<wchar_t,true> *this)

{
  return *(undefined4 *)(this + 0x14);
}


// ===== 001bf56c  std::__ndk1::moneypunct_byname<wchar_t,true>::do_grouping =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_grouping() const */

void std::__ndk1::moneypunct_byname<wchar_t,true>::do_grouping(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x18));
  return;
}


// ===== 001bf578  std::__ndk1::moneypunct_byname<wchar_t,true>::do_curr_symbol =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_curr_symbol() const */

void std::__ndk1::moneypunct_byname<wchar_t,true>::do_curr_symbol(void)

{
  long in_x0;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string(in_x8,(basic_string_conflict *)(in_x0 + 0x30));
  return;
}


// ===== 001bf584  std::__ndk1::moneypunct_byname<wchar_t,true>::do_positive_sign =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_positive_sign() const */

void std::__ndk1::moneypunct_byname<wchar_t,true>::do_positive_sign(void)

{
  long in_x0;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string(in_x8,(basic_string_conflict *)(in_x0 + 0x48));
  return;
}


// ===== 001bf590  std::__ndk1::moneypunct_byname<wchar_t,true>::do_negative_sign =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_negative_sign() const */

void std::__ndk1::moneypunct_byname<wchar_t,true>::do_negative_sign(void)

{
  long in_x0;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string(in_x8,(basic_string_conflict *)(in_x0 + 0x60));
  return;
}


// ===== 001bf59c  std::__ndk1::moneypunct_byname<wchar_t,true>::do_frac_digits =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_frac_digits() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::do_frac_digits(moneypunct_byname<wchar_t,true> *this)

{
  return *(undefined4 *)(this + 0x78);
}


// ===== 001bf5a4  std::__ndk1::moneypunct_byname<wchar_t,true>::do_pos_format =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_pos_format() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::do_pos_format(moneypunct_byname<wchar_t,true> *this)

{
  return *(undefined4 *)(this + 0x7c);
}


// ===== 001bf5ac  std::__ndk1::moneypunct_byname<wchar_t,true>::do_neg_format =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::do_neg_format() const */

undefined4 __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::do_neg_format(moneypunct_byname<wchar_t,true> *this)

{
  return *(undefined4 *)(this + 0x80);
}


// ===== 001bf5b4  std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, unsigned int&, long double&)
   const */

long * __thiscall
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      undefined8 param_7)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  __shared_count *p_Var5;
  int iVar6;
  ulong uVar7;
  undefined **__ptr;
  undefined8 uVar8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  char *pcVar12;
  long *plVar13;
  char local_184 [4];
  __shared_count *local_180;
  char *local_178;
  char *local_170;
  code *local_168;
  long *local_160;
  undefined *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  undefined8 local_f0;
  char local_e8;
  char local_e7;
  char acStack_e6 [6];
  undefined7 local_e0;
  undefined4 uStack_d9;
  char local_d4 [100];
  long local_70 [2];
  
  lVar3 = tpidr_el0;
  local_70[0] = *(long *)(lVar3 + 0x28);
  local_170 = local_d4;
  local_168 = (code *)PTR___do_nothing_0020f948;
  local_160 = param_2;
                    /* try { // try from 001bf608 to 001bf613 has its CatchHandler @ 001bf97c */
  ios_base::getloc();
  p_Var5 = local_180;
  puVar4 = PTR_id_0020f840;
  local_148 = 0;
  local_158 = PTR_id_0020f840;
  puStack_150 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_f0 = &local_e0;
    local_e0 = SUB87(&local_158,0);
    uStack_d9._0_1_ = (char)((ulong)&local_158 >> 0x38);
                    /* try { // try from 001bf650 to 001bf667 has its CatchHandler @ 001bf978 */
    __call_once((ulong *)PTR_id_0020f840,&local_f0,FUN_001db064);
  }
  lVar1 = *(long *)(p_Var5 + 0x10);
  if (((ulong)(*(long *)(p_Var5 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar4 + 8) - 1U) ||
     (plVar13 = *(long **)(lVar1 + ((long)*(int *)(puVar4 + 8) - 1U) * 8), plVar13 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001bf944 to 001bf947 has its CatchHandler @ 001bf978 */
    FUN_0017cb1c();
  }
  local_184[0] = '\0';
                    /* try { // try from 001bf694 to 001bf6c3 has its CatchHandler @ 001bf988 */
  uVar7 = __do_get(&local_160,param_3,param_4 & 1,&local_180,*(undefined4 *)(param_5 + 8),param_6,
                   local_184,plVar13,&local_170,&local_178,local_70);
  if ((uVar7 & 1) != 0) {
    local_e0 = (undefined7)s_0123456789_00144ef2._0_8_;
    uStack_d9._0_1_ = SUB81(s_0123456789_00144ef2._0_8_,7);
    uStack_d9 = CONCAT31(0x3938,(char)uStack_d9);
                    /* try { // try from 001bf6f4 to 001bf703 has its CatchHandler @ 001bf970 */
    (**(code **)(*plVar13 + 0x40))(plVar13,&local_e0,(long)&uStack_d9 + 3,&local_f0);
    pcVar12 = local_170;
    pcVar9 = local_178;
    if ((long)local_178 - (long)local_170 < 99) {
      __ptr = (undefined **)0x0;
      ppuVar10 = &local_158;
    }
    else {
      __ptr = (undefined **)malloc(((long)local_178 - (long)local_170) + 2);
      ppuVar10 = __ptr;
      if (__ptr == (undefined **)0x0) goto LAB_001bf958;
    }
    if (local_184[0] != '\0') {
      *(undefined1 *)ppuVar10 = 0x2d;
      ppuVar10 = (undefined **)((long)ppuVar10 + 1);
    }
    if (pcVar12 < pcVar9) {
      ppuVar11 = ppuVar10;
      do {
        cVar2 = *pcVar12;
        if ((char)local_f0 == cVar2) {
          pcVar9 = (char *)&local_f0;
        }
        else {
          pcVar9 = (char *)((ulong)&local_f0 | 1);
          if (((((local_f0._1_1_ != cVar2) &&
                (pcVar9 = (char *)((ulong)&local_f0 | 2), local_f0._2_1_ != cVar2)) &&
               (pcVar9 = (char *)((ulong)&local_f0 | 3), local_f0._3_1_ != cVar2)) &&
              (((pcVar9 = (char *)((long)&local_f0 + 4), local_f0._4_1_ != cVar2 &&
                (pcVar9 = (char *)((long)&local_f0 + 5), local_f0._5_1_ != cVar2)) &&
               ((pcVar9 = (char *)((long)&local_f0 + 6), local_f0._6_1_ != cVar2 &&
                ((pcVar9 = (char *)((long)&local_f0 + 7), local_f0._7_1_ != cVar2 &&
                 (pcVar9 = &local_e8, local_e8 != cVar2)))))))) &&
             (pcVar9 = &local_e7, local_e7 != cVar2)) {
            pcVar9 = acStack_e6;
          }
        }
        pcVar12 = pcVar12 + 1;
        ppuVar10 = (undefined **)((long)ppuVar11 + 1);
        *(char *)ppuVar11 = pcVar9[(long)&local_e0 - (long)&local_f0];
        ppuVar11 = ppuVar10;
      } while (pcVar12 < local_178);
    }
    *(undefined1 *)ppuVar10 = 0;
    iVar6 = sscanf((char *)&local_158,"%Lf",param_7);
    if (iVar6 != 1) {
                    /* try { // try from 001bf94c to 001bf95b has its CatchHandler @ 001bf95c */
      __throw_runtime_error("money_get error");
LAB_001bf958:
      uVar8 = __throw_bad_alloc();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001bf94c with catch @ 001bf95c
                        */
      if (__ptr != (undefined **)0x0) {
        free(__ptr);
      }
      __shared_count::__release_shared(local_180);
      pcVar12 = local_170;
      local_170 = (char *)0x0;
      if (pcVar12 != (char *)0x0) {
                    /* try { // try from 001bf9a4 to 001bf9a7 has its CatchHandler @ 001bf9b0 */
        (*local_168)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar8);
    }
    if (__ptr != (undefined **)0x0) {
      free(__ptr);
    }
  }
                    /* try { // try from 001bf890 to 001bf8c3 has its CatchHandler @ 001bf988 */
  if (((local_160 == (long *)0x0) || (local_160[3] != local_160[4])) ||
     (iVar6 = (**(code **)(*local_160 + 0x48))(local_160), iVar6 != -1)) {
    plVar13 = local_160;
    if (param_3 != (long *)0x0) goto LAB_001bf8a8;
LAB_001bf93c:
    if (plVar13 != (long *)0x0) goto LAB_001bf8dc;
  }
  else {
    plVar13 = (long *)0x0;
    local_160 = (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_001bf93c;
LAB_001bf8a8:
    plVar13 = local_160;
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_001bf93c;
    if (plVar13 == (long *)0x0) goto LAB_001bf8dc;
  }
  *param_6 = *param_6 | 2;
LAB_001bf8dc:
  plVar13 = local_160;
  __shared_count::__release_shared(local_180);
  pcVar12 = local_170;
  local_170 = (char *)0x0;
  if (pcVar12 != (char *)0x0) {
                    /* try { // try from 001bf8f8 to 001bf8fb has its CatchHandler @ 001bf974 */
    (*local_168)();
  }
  if (*(long *)(lVar3 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar13;
}


// ===== 001bf9b4  std::__ndk1::__do_nothing =====

/* std::__ndk1::__do_nothing(void*) */

void std::__ndk1::__do_nothing(void *param_1)

{
  return;
}


// ===== 001bf9b8  std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::__do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::locale const&, unsigned int, unsigned int&,
   bool&, std::__ndk1::ctype<char> const&, std::__ndk1::unique_ptr<char, void (*)(void*)>&, char*&,
   char*) */

undefined4
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get(long *param_1,long *param_2,byte param_3,locale *param_4,uint param_5,uint *param_6,
        undefined1 *param_7,long param_8,long *param_9,long *param_10,byte *param_11)

{
  ulong uVar1;
  char *pcVar2;
  basic_string_conflict bVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  void *pvVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  uint *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  size_t sVar17;
  uint *puVar18;
  uint *puVar19;
  byte *pbVar20;
  char *pcVar21;
  char *pcVar22;
  uint *puVar23;
  bool bVar24;
  byte *pbVar25;
  long lVar26;
  void *pvVar27;
  uint uVar28;
  byte *pbVar29;
  byte *pbVar30;
  undefined4 uVar31;
  ulong uVar32;
  uint *puVar33;
  long *plVar34;
  code *pcVar35;
  ulong *local_2d0;
  byte *local_2a0;
  uint *local_298;
  int local_28c;
  undefined8 local_288;
  ulong local_280;
  void *local_278;
  ulong local_270;
  ulong local_268;
  char *local_260;
  ulong local_258;
  ulong local_250;
  char *local_248;
  ulong local_240;
  ulong local_238;
  byte *local_230;
  ulong local_228;
  ulong local_220;
  byte *local_218;
  byte local_210 [4];
  char local_20c [4];
  pattern local_208 [3];
  char local_205;
  uint local_204 [101];
  long local_70 [2];
  
  lVar4 = tpidr_el0;
  local_70[0] = *(long *)(lVar4 + 0x28);
  local_228 = 0;
  local_220 = 0;
  local_218 = (byte *)0x0;
  local_240 = 0;
  local_238 = 0;
  local_230 = (byte *)0x0;
  local_258 = 0;
  local_250 = 0;
  local_248 = (char *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_260 = (char *)0x0;
  local_288 = 0;
  local_280 = 0;
  local_278 = (void *)0x0;
                    /* try { // try from 001bfa2c to 001bfa63 has its CatchHandler @ 001c0b3c */
  __money_get<char>::__gather_info
            ((bool)(param_3 & 1),param_4,local_208,local_20c,(char *)local_210,
             (basic_string_conflict *)&local_228,(basic_string_conflict *)&local_240,
             (basic_string_conflict *)&local_258,(basic_string_conflict *)&local_270,&local_28c);
  pcVar35 = (code *)PTR___do_nothing_0020f948;
  pbVar15 = (byte *)((ulong)&local_240 | 1);
  local_2a0 = param_11;
  local_2d0 = (ulong *)0x0;
  pcVar10 = (char *)((ulong)&local_270 | 1);
  puVar8 = local_204 + 1;
  local_298 = (uint *)local_70;
  uVar32 = 0;
  puVar33 = local_204 + 1;
  *param_10 = *param_9;
LAB_001bfaf4:
  plVar34 = (long *)*param_1;
  if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x001bfb08:
    if (param_2 == (long *)0x0) goto LAB_001bfb68;
LAB_001bfb0c:
                    /* try { // try from 001bfb20 to 001bfb47 has its CatchHandler @ 001c0b60 */
    if ((param_2[3] == param_2[4]) && (iVar7 = (**(code **)(*param_2 + 0x48))(param_2), iVar7 == -1)
       ) goto LAB_001bfb68;
    if (plVar34 != (long *)0x0) goto LAB_001c0804;
  }
  else {
    iVar7 = (**(code **)(*plVar34 + 0x48))(plVar34);
    if (iVar7 == -1) {
      plVar34 = (long *)0x0;
      *param_1 = 0;
      goto joined_r0x001bfb08;
    }
    plVar34 = (long *)*param_1;
    if (param_2 != (long *)0x0) goto LAB_001bfb0c;
LAB_001bfb68:
    param_2 = (long *)0x0;
    if (plVar34 == (long *)0x0) goto LAB_001c0804;
  }
  puVar13 = local_2d0;
  switch(local_208[uVar32]) {
  case (pattern)0x0:
    if (uVar32 != 3) goto LAB_001c001c;
    goto LAB_001c0804;
  case (pattern)0x1:
    if (uVar32 != 3) {
      plVar34 = (long *)*param_1;
      if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
                    /* try { // try from 001bffb0 to 001bffb3 has its CatchHandler @ 001c0b60 */
        bVar6 = (**(code **)(*plVar34 + 0x48))();
      }
      else {
        bVar6 = *(byte *)plVar34[3];
      }
      if ((-1 < (char)bVar6) &&
         ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)bVar6 * 8) & 1) != 0)) {
        plVar34 = (long *)*param_1;
        pcVar21 = (char *)plVar34[3];
        if (pcVar21 == (char *)plVar34[4]) {
                    /* try { // try from 001bfff4 to 001c0003 has its CatchHandler @ 001c0b54 */
          cVar5 = (**(code **)(*plVar34 + 0x50))();
        }
        else {
          plVar34[3] = (long)(pcVar21 + 1);
          cVar5 = *pcVar21;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_288,cVar5);
LAB_001c001c:
        do {
          plVar34 = (long *)*param_1;
          if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x001c0030:
            if (param_2 == (long *)0x0) goto LAB_001c0090;
LAB_001c0034:
                    /* try { // try from 001c0048 to 001c00bb has its CatchHandler @ 001c0b78 */
            if ((param_2[3] == param_2[4]) &&
               (iVar7 = (**(code **)(*param_2 + 0x48))(param_2), iVar7 == -1)) goto LAB_001c0090;
            if (plVar34 != (long *)0x0) goto switchD_001bfb94_default;
          }
          else {
            iVar7 = (**(code **)(*plVar34 + 0x48))(plVar34);
            if (iVar7 == -1) {
              plVar34 = (long *)0x0;
              *param_1 = 0;
              goto joined_r0x001c0030;
            }
            plVar34 = (long *)*param_1;
            if (param_2 != (long *)0x0) goto LAB_001c0034;
LAB_001c0090:
            param_2 = (long *)0x0;
            if (plVar34 == (long *)0x0) goto switchD_001bfb94_default;
          }
          plVar34 = (long *)*param_1;
          if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
            bVar6 = (**(code **)(*plVar34 + 0x48))();
          }
          else {
            bVar6 = *(byte *)plVar34[3];
          }
          if (((char)bVar6 < '\0') ||
             ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)bVar6 * 8) & 1) == 0))
          goto switchD_001bfb94_default;
          plVar34 = (long *)*param_1;
          pcVar21 = (char *)plVar34[3];
          if (pcVar21 == (char *)plVar34[4]) {
                    /* try { // try from 001c00ec to 001c00f3 has its CatchHandler @ 001c0b7c */
            cVar5 = (**(code **)(*plVar34 + 0x50))();
          }
          else {
            plVar34[3] = (long)(pcVar21 + 1);
            cVar5 = *pcVar21;
          }
                    /* try { // try from 001c0014 to 001c001b has its CatchHandler @ 001c0b7c */
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_288,cVar5);
        } while( true );
      }
      goto LAB_001c0a64;
    }
    goto LAB_001c0804;
  case (pattern)0x2:
    if (((1 < uVar32) && (local_2d0 == (ulong *)0x0)) &&
       (((uint)(uVar32 == 2 && local_205 != '\0') | param_5 >> 9 & 1) != 1)) {
      local_2d0 = (ulong *)0x0;
      puVar13 = local_2d0;
      break;
    }
    pbVar30 = pbVar15;
    if ((local_240 & 1) != 0) {
      pbVar30 = local_230;
    }
    pbVar29 = pbVar30;
    if ((uVar32 != 0) && ((byte)local_208[(int)uVar32 - 1] < 2)) {
      uVar11 = (ulong)((byte)local_240._0_1_ >> 1);
      if ((local_240 & 1) != 0) {
        uVar11 = local_238;
      }
      pbVar16 = pbVar30;
      if ((uVar11 != 0) && (bVar6 = *pbVar30, -1 < (char)bVar6)) {
        pbVar20 = pbVar30 + uVar11;
        do {
          pbVar25 = pbVar16 + 1;
          uVar11 = uVar11 - 1;
          if (((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)bVar6 * 8) & 1) == 0) ||
             (pbVar16 = pbVar20, uVar11 == 0)) break;
          bVar6 = *pbVar25;
          pbVar16 = pbVar25;
        } while (-1 < (char)bVar6);
      }
      uVar11 = (long)pbVar16 - (long)pbVar30;
      if ((local_288 & 1) == 0) {
        uVar12 = local_288 >> 1 & 0x7f;
        if (uVar11 <= uVar12) {
          lVar26 = (long)&local_288 + uVar12 + 1;
          pvVar27 = (void *)((ulong)&local_288 | 1);
LAB_001c0164:
          pbVar25 = pbVar30;
          for (pbVar20 = (byte *)(lVar26 - uVar11);
              (pbVar29 = pbVar16, pbVar20 != (byte *)((long)pvVar27 + uVar12) &&
              (pbVar29 = pbVar30, *pbVar20 == *pbVar25)); pbVar20 = pbVar20 + 1) {
            pbVar25 = pbVar25 + 1;
          }
        }
      }
      else if (uVar11 <= local_280) {
        lVar26 = (long)local_278 + local_280;
        uVar12 = local_280;
        pvVar27 = local_278;
        goto LAB_001c0164;
      }
    }
    uVar11 = (ulong)((byte)local_240._0_1_ >> 1);
    if ((local_240 & 1) != 0) {
      uVar11 = local_238;
    }
    if (pbVar30 + uVar11 != pbVar29) {
      do {
        plVar34 = (long *)*param_1;
        if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x001c023c:
          if (param_2 == (long *)0x0) goto LAB_001c029c;
LAB_001c0240:
                    /* try { // try from 001c0254 to 001c02c7 has its CatchHandler @ 001c0b64 */
          if ((param_2[3] == param_2[4]) &&
             (iVar7 = (**(code **)(*param_2 + 0x48))(param_2), iVar7 == -1)) goto LAB_001c029c;
          if (plVar34 != (long *)0x0) break;
        }
        else {
          iVar7 = (**(code **)(*plVar34 + 0x48))(plVar34);
          if (iVar7 == -1) {
            plVar34 = (long *)0x0;
            *param_1 = 0;
            goto joined_r0x001c023c;
          }
          plVar34 = (long *)*param_1;
          if (param_2 != (long *)0x0) goto LAB_001c0240;
LAB_001c029c:
          param_2 = (long *)0x0;
          if (plVar34 == (long *)0x0) break;
        }
        plVar34 = (long *)*param_1;
        if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
          bVar6 = (**(code **)(*plVar34 + 0x48))();
        }
        else {
          bVar6 = *(byte *)plVar34[3];
        }
        if (*pbVar29 != bVar6) break;
        plVar34 = (long *)*param_1;
        if (plVar34[3] == plVar34[4]) {
                    /* try { // try from 001c02ec to 001c02ef has its CatchHandler @ 001c0b58 */
          (**(code **)(*plVar34 + 0x50))();
        }
        else {
          plVar34[3] = plVar34[3] + 1;
        }
        pbVar29 = pbVar29 + 1;
        uVar11 = local_240 >> 1 & 0x7f;
        pbVar30 = pbVar15;
        if ((local_240 & 1) != 0) {
          uVar11 = local_238;
          pbVar30 = local_230;
        }
      } while (pbVar29 != pbVar30 + uVar11);
    }
    if ((param_5 >> 9 & 1) != 0) {
      uVar11 = local_240 >> 1 & 0x7f;
      pbVar30 = pbVar15;
      if ((local_240 & 1) != 0) {
        uVar11 = local_238;
        pbVar30 = local_230;
      }
      if (pbVar29 != pbVar30 + uVar11) goto LAB_001c0a64;
    }
    break;
  case (pattern)0x3:
    uVar12 = local_258 & 0xff;
    bVar6 = (byte)local_258._0_1_ & 1;
    uVar11 = (ulong)((byte)local_258._0_1_ >> 1);
    if ((local_258 & 1) != 0) {
      uVar11 = local_250;
    }
    uVar1 = (ulong)((byte)local_270._0_1_ >> 1);
    if ((local_270 & 1) != 0) {
      uVar1 = local_268;
    }
    if (uVar11 + uVar1 != 0) {
      if (uVar11 == 0) {
        plVar34 = (long *)*param_1;
        if ((char *)plVar34[3] == (char *)plVar34[4]) {
          cVar5 = (**(code **)(*plVar34 + 0x48))();
        }
        else {
          cVar5 = *(char *)plVar34[3];
        }
        pcVar21 = pcVar10;
        if (((byte)local_270._0_1_ & 1) != 0) {
          pcVar21 = local_260;
        }
        if (*pcVar21 != cVar5) break;
        plVar34 = (long *)*param_1;
        if (plVar34[3] == plVar34[4]) {
          (**(code **)(*plVar34 + 0x50))();
          bVar3 = local_270._0_1_;
        }
        else {
          plVar34[3] = plVar34[3] + 1;
          bVar3 = local_270._0_1_;
        }
        *param_7 = 1;
        uVar11 = (ulong)((byte)bVar3 >> 1);
        if (((byte)bVar3 & 1) != 0) {
          uVar11 = local_268;
        }
LAB_001c07b0:
        puVar13 = &local_270;
      }
      else {
        plVar34 = (long *)*param_1;
        pcVar21 = (char *)plVar34[3];
        pcVar22 = (char *)plVar34[4];
        if (uVar1 == 0) {
          if (pcVar21 == pcVar22) {
                    /* try { // try from 001c06a0 to 001c07d3 has its CatchHandler @ 001c0b60 */
            cVar5 = (**(code **)(*plVar34 + 0x48))();
            uVar12 = local_258 & 0xff;
            bVar6 = (byte)local_258._0_1_ & 1;
          }
          else {
            cVar5 = *pcVar21;
          }
          pcVar21 = (char *)((ulong)&local_258 | 1);
          if (bVar6 != 0) {
            pcVar21 = local_248;
          }
          if (*pcVar21 != cVar5) {
            *param_7 = 1;
            break;
          }
          plVar34 = (long *)*param_1;
          pcVar21 = (char *)plVar34[3];
          if (pcVar21 != (char *)plVar34[4]) goto LAB_001c06dc;
          (**(code **)(*plVar34 + 0x50))();
LAB_001c07d4:
          uVar12 = local_258 & 0xff;
          bVar6 = (byte)local_258._0_1_ & 1;
        }
        else {
          if (pcVar21 == pcVar22) {
                    /* try { // try from 001c030c to 001c036b has its CatchHandler @ 001c0b60 */
            cVar5 = (**(code **)(*plVar34 + 0x48))();
            plVar34 = (long *)*param_1;
            uVar12 = local_258 & 0xff;
            pcVar21 = (char *)plVar34[3];
            pcVar22 = (char *)plVar34[4];
            bVar6 = (byte)local_258._0_1_ & 1;
          }
          else {
            cVar5 = *pcVar21;
          }
          pcVar2 = (char *)((ulong)&local_258 | 1);
          if (bVar6 != 0) {
            pcVar2 = local_248;
          }
          if (*pcVar2 != cVar5) {
            if (pcVar21 == pcVar22) {
              cVar5 = (**(code **)(*plVar34 + 0x48))();
            }
            else {
              cVar5 = *pcVar21;
            }
            pcVar21 = pcVar10;
            if ((local_270 & 1) != 0) {
              pcVar21 = local_260;
            }
            if (*pcVar21 == cVar5) {
              plVar34 = (long *)*param_1;
              if (plVar34[3] == plVar34[4]) {
                (**(code **)(*plVar34 + 0x50))();
              }
              else {
                plVar34[3] = plVar34[3] + 1;
              }
              *param_7 = 1;
              uVar11 = (ulong)((byte)local_270._0_1_ >> 1);
              if (((byte)local_270._0_1_ & 1) != 0) {
                uVar11 = local_268;
              }
              goto LAB_001c07b0;
            }
            goto LAB_001c0a64;
          }
          if (pcVar21 == pcVar22) {
            (**(code **)(*plVar34 + 0x50))();
            goto LAB_001c07d4;
          }
LAB_001c06dc:
          plVar34[3] = (long)(pcVar21 + 1);
        }
        uVar11 = uVar12 >> 1;
        if (bVar6 != 0) {
          uVar11 = local_250;
        }
        puVar13 = &local_258;
      }
      if (uVar11 < 2) {
        puVar13 = local_2d0;
      }
    }
    break;
  case (pattern)0x4:
    uVar28 = 0;
    puVar23 = puVar33;
    puVar18 = puVar8;
LAB_001bfbb4:
    plVar34 = (long *)*param_1;
    if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x001bfbc8:
      if (param_2 == (long *)0x0) goto LAB_001bfc28;
LAB_001bfbcc:
                    /* try { // try from 001bfbe0 to 001bfc07 has its CatchHandler @ 001c0b70 */
      if ((param_2[3] == param_2[4]) &&
         (iVar7 = (**(code **)(*param_2 + 0x48))(param_2), iVar7 == -1)) goto LAB_001bfc28;
      if (plVar34 != (long *)0x0) goto LAB_001bff50;
    }
    else {
      iVar7 = (**(code **)(*plVar34 + 0x48))(plVar34);
      if (iVar7 == -1) {
        plVar34 = (long *)0x0;
        *param_1 = 0;
        goto joined_r0x001bfbc8;
      }
      plVar34 = (long *)*param_1;
      if (param_2 != (long *)0x0) goto LAB_001bfbcc;
LAB_001bfc28:
      param_2 = (long *)0x0;
      if (plVar34 == (long *)0x0) goto LAB_001bff50;
    }
    plVar34 = (long *)*param_1;
    if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
                    /* try { // try from 001bfc58 to 001bfc5b has its CatchHandler @ 001c0b6c */
      bVar6 = (**(code **)(*plVar34 + 0x48))();
      if ((char)bVar6 < '\0') goto LAB_001bfc78;
LAB_001bfc68:
      if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + (ulong)bVar6 * 8) >> 6 & 1) == 0)
      goto LAB_001bfc78;
      pbVar30 = (byte *)*param_10;
      if (pbVar30 == local_2a0) {
        pvVar27 = (void *)*param_9;
        uVar11 = (long)local_2a0 - (long)pvVar27;
        sVar17 = uVar11 * 2;
        if (uVar11 == 0) {
          sVar17 = 1;
        }
        if (0x7ffffffffffffffe < uVar11) {
          sVar17 = 0xffffffffffffffff;
        }
        if ((undefined *)param_9[1] == PTR___do_nothing_0020f948) {
          pvVar9 = malloc(sVar17);
        }
        else {
          pvVar9 = realloc(pvVar27,sVar17);
        }
        if (pvVar9 != (void *)0x0) {
          pbVar30 = (byte *)((long)pvVar9 + ((long)pbVar30 - (long)pvVar27));
          *param_9 = (long)pvVar9;
          param_9[1] = (long)PTR_free_0020f950;
          *param_10 = (long)pbVar30;
          local_2a0 = (byte *)(*param_9 + sVar17);
          goto LAB_001bfdd8;
        }
        goto LAB_001c0b14;
      }
LAB_001bfdd8:
      *param_10 = (long)(pbVar30 + 1);
      *pbVar30 = bVar6;
      uVar28 = uVar28 + 1;
    }
    else {
      bVar6 = *(byte *)plVar34[3];
      if (-1 < (char)bVar6) goto LAB_001bfc68;
LAB_001bfc78:
      uVar11 = local_228 >> 1 & 0x7f;
      if ((local_228 & 1) != 0) {
        uVar11 = local_220;
      }
      if (((local_210[0] != bVar6) || (uVar28 == 0)) || (uVar11 == 0)) goto LAB_001bff50;
      puVar8 = puVar18;
      if (puVar23 == local_298) {
        uVar11 = (long)local_298 - (long)puVar18;
        sVar17 = 4;
        if (uVar11 != 0) {
          sVar17 = uVar11 * 2;
        }
        if (0x7ffffffffffffffe < uVar11) {
          sVar17 = 0xffffffffffffffff;
        }
        if (pcVar35 == (code *)PTR___do_nothing_0020f948) {
          puVar8 = (uint *)malloc(sVar17);
          pcVar35 = (code *)PTR_free_0020f950;
        }
        else {
          puVar8 = (uint *)realloc(puVar18,sVar17);
          pcVar35 = (code *)PTR_free_0020f950;
        }
        PTR_free_0020f950 = pcVar35;
        if (puVar8 == (uint *)0x0) {
                    /* try { // try from 001c0b0c to 001c0b17 has its CatchHandler @ 001c0b30 */
          __throw_bad_alloc();
LAB_001c0b14:
          __throw_bad_alloc();
          goto LAB_001c0b18;
        }
        puVar23 = (uint *)((long)puVar8 + ((long)puVar23 - (long)puVar18));
        local_298 = (uint *)((long)puVar8 + (sVar17 & 0xfffffffffffffffc));
      }
      *puVar23 = uVar28;
      uVar28 = 0;
      puVar23 = puVar23 + 1;
      puVar18 = puVar8;
    }
    plVar34 = (long *)*param_1;
    if (plVar34[3] == plVar34[4]) {
                    /* try { // try from 001bfe18 to 001bfe1b has its CatchHandler @ 001c0b70 */
      (**(code **)(*plVar34 + 0x50))();
    }
    else {
      plVar34[3] = plVar34[3] + 1;
    }
    goto LAB_001bfbb4;
  }
switchD_001bfb94_default:
  local_2d0 = puVar13;
  uVar32 = uVar32 + 1;
  if (uVar32 == 4) goto LAB_001c0804;
  goto LAB_001bfaf4;
LAB_001bff50:
  puVar33 = puVar23;
  puVar8 = puVar18;
  if ((puVar18 != puVar23) && (uVar28 != 0)) {
    if (puVar23 == local_298) {
      uVar11 = (long)local_298 - (long)puVar18;
      sVar17 = 4;
      if (uVar11 != 0) {
        sVar17 = uVar11 * 2;
      }
      if (0x7ffffffffffffffe < uVar11) {
        sVar17 = 0xffffffffffffffff;
      }
      if (pcVar35 == (code *)PTR___do_nothing_0020f948) {
        puVar8 = (uint *)malloc(sVar17);
        pcVar35 = (code *)PTR_free_0020f950;
      }
      else {
        puVar8 = (uint *)realloc(puVar18,sVar17);
        pcVar35 = (code *)PTR_free_0020f950;
      }
      PTR_free_0020f950 = pcVar35;
      if (puVar8 == (uint *)0x0) {
LAB_001c0b18:
                    /* try { // try from 001c0b18 to 001c0b27 has its CatchHandler @ 001c0b2c */
        __throw_bad_alloc();
LAB_001c0b20:
        __throw_bad_alloc();
        goto LAB_001c0b28;
      }
      puVar23 = (uint *)((long)puVar8 + ((long)puVar23 - (long)puVar18));
      local_298 = (uint *)((long)puVar8 + (sVar17 & 0xfffffffffffffffc));
    }
    puVar33 = puVar23 + 1;
    *puVar23 = uVar28;
  }
  if (0 < local_28c) {
    plVar34 = (long *)*param_1;
    if ((plVar34 != (long *)0x0) && (plVar34[3] == plVar34[4])) {
      iVar7 = (**(code **)(*plVar34 + 0x48))(plVar34);
      if (iVar7 == -1) {
        plVar34 = (long *)0x0;
        *param_1 = 0;
      }
      else {
        plVar34 = (long *)*param_1;
      }
    }
                    /* try { // try from 001c0418 to 001c04bf has its CatchHandler @ 001c0b38 */
    if ((param_2 == (long *)0x0) ||
       ((param_2[3] == param_2[4] && (iVar7 = (**(code **)(*param_2 + 0x48))(param_2), iVar7 == -1))
       )) {
      if (plVar34 == (long *)0x0) goto LAB_001c0a64;
      param_2 = (long *)0x0;
    }
    else if (plVar34 != (long *)0x0) goto LAB_001c0a64;
    plVar34 = (long *)*param_1;
    if ((char *)plVar34[3] == (char *)plVar34[4]) {
      cVar5 = (**(code **)(*plVar34 + 0x48))();
    }
    else {
      cVar5 = *(char *)plVar34[3];
    }
    if (local_20c[0] == cVar5) {
      plVar34 = (long *)*param_1;
      if (plVar34[3] == plVar34[4]) {
        (**(code **)(*plVar34 + 0x50))();
      }
      else {
        plVar34[3] = plVar34[3] + 1;
      }
joined_r0x001c04c8:
      if (0 < local_28c) {
        do {
          plVar34 = (long *)*param_1;
          if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x001c04f4:
            if (param_2 == (long *)0x0) goto LAB_001c0554;
LAB_001c04f8:
                    /* try { // try from 001c050c to 001c0687 has its CatchHandler @ 001c0b68 */
            if ((param_2[3] == param_2[4]) &&
               (iVar7 = (**(code **)(*param_2 + 0x48))(param_2), iVar7 == -1)) goto LAB_001c0554;
            if (plVar34 != (long *)0x0) goto LAB_001c0a64;
          }
          else {
            iVar7 = (**(code **)(*plVar34 + 0x48))(plVar34);
            if (iVar7 == -1) {
              plVar34 = (long *)0x0;
              *param_1 = 0;
              goto joined_r0x001c04f4;
            }
            plVar34 = (long *)*param_1;
            if (param_2 != (long *)0x0) goto LAB_001c04f8;
LAB_001c0554:
            if (plVar34 == (long *)0x0) goto LAB_001c0a64;
            param_2 = (long *)0x0;
          }
          plVar34 = (long *)*param_1;
          if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
            bVar6 = (**(code **)(*plVar34 + 0x48))();
          }
          else {
            bVar6 = *(byte *)plVar34[3];
          }
          if (((char)bVar6 < '\0') ||
             (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + (ulong)bVar6 * 8) >> 6 & 1) == 0))
          goto LAB_001c0a64;
          pbVar30 = (byte *)*param_10;
          if (pbVar30 == local_2a0) {
            pvVar27 = (void *)*param_9;
            uVar11 = (long)local_2a0 - (long)pvVar27;
            sVar17 = uVar11 * 2;
            if (uVar11 == 0) {
              sVar17 = 1;
            }
            if (0x7ffffffffffffffe < uVar11) {
              sVar17 = 0xffffffffffffffff;
            }
            if ((undefined *)param_9[1] == PTR___do_nothing_0020f948) {
              pvVar9 = malloc(sVar17);
            }
            else {
              pvVar9 = realloc(pvVar27,sVar17);
            }
            if (pvVar9 == (void *)0x0) goto LAB_001c0b20;
            pbVar30 = (byte *)((long)pvVar9 + ((long)pbVar30 - (long)pvVar27));
            *param_9 = (long)pvVar9;
            param_9[1] = (long)PTR_free_0020f950;
            *param_10 = (long)pbVar30;
            local_2a0 = (byte *)(*param_9 + sVar17);
          }
          plVar34 = (long *)*param_1;
          if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
            bVar6 = (**(code **)(*plVar34 + 0x48))();
            pbVar30 = (byte *)*param_10;
          }
          else {
            bVar6 = *(byte *)plVar34[3];
          }
          *param_10 = (long)(pbVar30 + 1);
          *pbVar30 = bVar6;
          local_28c = local_28c + -1;
          plVar34 = (long *)*param_1;
          if (plVar34[3] != plVar34[4]) goto LAB_001c04d0;
          (**(code **)(*plVar34 + 0x50))();
          if (local_28c < 1) break;
        } while( true );
      }
      goto LAB_001bfad4;
    }
    goto LAB_001c0a64;
  }
LAB_001bfad4:
  if (*param_10 == *param_9) goto LAB_001c0a64;
  goto switchD_001bfb94_default;
LAB_001c04d0:
  plVar34[3] = plVar34[3] + 1;
  goto joined_r0x001c04c8;
LAB_001c0804:
  if (local_2d0 != (ulong *)0x0) {
    uVar32 = 1;
LAB_001c0820:
    if (((byte)*local_2d0 & 1) == 0) {
      uVar11 = (ulong)(byte)((byte)*local_2d0 >> 1);
    }
    else {
      uVar11 = local_2d0[1];
    }
    if (uVar11 <= uVar32) goto LAB_001c0928;
    plVar34 = (long *)*param_1;
    if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x001c085c:
      if (param_2 == (long *)0x0) goto LAB_001c08bc;
LAB_001c0860:
                    /* try { // try from 001c0874 to 001c0923 has its CatchHandler @ 001c0b5c */
      if ((param_2[3] == param_2[4]) &&
         (iVar7 = (**(code **)(*param_2 + 0x48))(param_2), iVar7 == -1)) goto LAB_001c08bc;
      if (plVar34 != (long *)0x0) goto LAB_001c0a64;
    }
    else {
      iVar7 = (**(code **)(*plVar34 + 0x48))(plVar34);
      if (iVar7 == -1) {
        plVar34 = (long *)0x0;
        *param_1 = 0;
        goto joined_r0x001c085c;
      }
      plVar34 = (long *)*param_1;
      if (param_2 != (long *)0x0) goto LAB_001c0860;
LAB_001c08bc:
      if (plVar34 == (long *)0x0) goto LAB_001c0a64;
      param_2 = (long *)0x0;
    }
    plVar34 = (long *)*param_1;
    if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
      bVar6 = (**(code **)(*plVar34 + 0x48))();
    }
    else {
      bVar6 = *(byte *)plVar34[3];
    }
    pbVar15 = (byte *)((long)local_2d0 + 1);
    if ((*local_2d0 & 1) != 0) {
      pbVar15 = (byte *)local_2d0[2];
    }
    if (pbVar15[uVar32] != bVar6) goto LAB_001c0a64;
    plVar34 = (long *)*param_1;
    uVar32 = (ulong)((int)uVar32 + 1);
    if (plVar34[3] == plVar34[4]) {
      (**(code **)(*plVar34 + 0x50))();
    }
    else {
      plVar34[3] = plVar34[3] + 1;
    }
    goto LAB_001c0820;
  }
LAB_001c0928:
  if (puVar8 != puVar33) {
    uVar32 = (ulong)((byte)local_228._0_1_ >> 1);
    if ((local_228 & 1) != 0) {
      uVar32 = local_220;
    }
    if ((4 < (long)puVar33 - (long)puVar8) && (uVar32 != 0)) {
      puVar33 = puVar33 + -1;
      puVar18 = puVar33;
      puVar23 = puVar8;
      if (puVar8 < puVar33) {
        do {
          puVar14 = puVar23 + 1;
          uVar28 = *puVar23;
          *puVar23 = *puVar18;
          puVar19 = puVar18 + -1;
          *puVar18 = uVar28;
          puVar18 = puVar19;
          puVar23 = puVar14;
        } while (puVar14 < puVar19);
      }
      pbVar15 = (byte *)((ulong)&local_228 | 1);
      if ((local_228 & 1) != 0) {
        pbVar15 = local_218;
      }
      bVar6 = *pbVar15;
      bVar24 = 1 < (byte)(bVar6 + 1);
      if (puVar8 < puVar33) {
        pbVar30 = pbVar15;
        puVar23 = puVar8;
        uVar32 = (ulong)((byte)local_228._0_1_ >> 1);
        if ((local_228 & 1) != 0) {
          uVar32 = local_220;
        }
        do {
          if ((bVar24) && (*puVar23 != (uint)bVar6)) goto LAB_001c0a64;
          if (1 < (long)(pbVar15 + (uVar32 - (long)pbVar30))) {
            pbVar30 = pbVar30 + 1;
          }
          bVar6 = *pbVar30;
          puVar23 = puVar23 + 1;
          bVar24 = 1 < (byte)(bVar6 + 1);
        } while (puVar23 < puVar33);
      }
      if ((bVar24) && ((uint)bVar6 <= *puVar33 - 1)) {
LAB_001c0a64:
        uVar31 = 0;
        *param_6 = *param_6 | 4;
        goto joined_r0x001c0a38;
      }
    }
  }
  uVar31 = 1;
joined_r0x001c0a38:
  if ((local_288 & 1) != 0) {
    operator_delete(local_278);
  }
  if ((local_270 & 1) != 0) {
    operator_delete(local_260);
  }
  if ((local_258 & 1) != 0) {
    operator_delete(local_248);
  }
  if ((local_240 & 1) != 0) {
    operator_delete(local_230);
  }
  if ((local_228 & 1) != 0) {
    operator_delete(local_218);
  }
  if (puVar8 != (uint *)0x0) {
                    /* try { // try from 001c0acc to 001c0ad3 has its CatchHandler @ 001c0b34 */
    (*pcVar35)(puVar8);
  }
  if (*(long *)(lVar4 + 0x28) == local_70[0]) {
    return uVar31;
  }
LAB_001c0b28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c0c20  std::__ndk1::__throw_runtime_error =====

/* std::__ndk1::__throw_runtime_error(char const*) */

void std::__ndk1::__throw_runtime_error(char *param_1)

{
  runtime_error *this;
  
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001c0c3c to 001c0c43 has its CatchHandler @ 001c0c5c */
  runtime_error::runtime_error(this,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_0020f958,PTR__underflow_error_0020f960);
}


// ===== 001c0c70  std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get =====

/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, unsigned int&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
   const */

long * __thiscall
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  __shared_count *p_Var4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  __shared_count *local_120;
  char *local_118;
  char *local_110;
  code *local_108;
  long *local_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined ***local_e0;
  undefined **local_d8;
  char local_cc [100];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_110 = local_cc;
  local_108 = (code *)PTR___do_nothing_0020f948;
  local_100 = param_2;
                    /* try { // try from 001c0cc4 to 001c0ccf has its CatchHandler @ 001c0f08 */
  ios_base::getloc();
  p_Var4 = local_120;
  puVar3 = PTR_id_0020f840;
  local_e8 = 0;
  local_f8 = PTR_id_0020f840;
  puStack_f0 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_d8 = &local_f8;
    local_e0 = &local_d8;
                    /* try { // try from 001c0d04 to 001c0d1b has its CatchHandler @ 001c0f04 */
    __call_once((ulong *)PTR_id_0020f840,&local_e0,FUN_001db064);
  }
  lVar1 = *(long *)(p_Var4 + 0x10);
  if (((ulong)(*(long *)(p_Var4 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar11 = *(long **)(lVar1 + ((long)*(int *)(puVar3 + 8) - 1U) * 8), plVar11 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001c0ef0 to 001c0ef3 has its CatchHandler @ 001c0f04 */
    FUN_0017cb1c();
  }
  local_f8 = (undefined *)((ulong)local_f8 & 0xffffffffffffff00);
                    /* try { // try from 001c0d48 to 001c0dc7 has its CatchHandler @ 001c0f14 */
  uVar7 = __do_get(&local_100,param_3,param_4 & 1,&local_120,*(undefined4 *)(param_5 + 8),param_6,
                   &local_f8,plVar11,&local_110,&local_118,&local_68);
  if ((uVar7 & 1) != 0) {
    if (((byte)*param_7 & 1) == 0) {
      *(undefined2 *)param_7 = 0;
    }
    else {
      **(undefined1 **)(param_7 + 0x10) = 0;
      *(undefined8 *)(param_7 + 8) = 0;
    }
    if ((char)local_f8 != '\0') {
      cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,0x2d);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                (param_7,cVar5);
    }
                    /* try { // try from 001c0dd0 to 001c0ddb has its CatchHandler @ 001c0efc */
    cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,0x30);
    pcVar10 = local_118 + -1;
    pcVar9 = local_110;
    if (local_110 < pcVar10) {
      pcVar8 = local_110;
      if (pcVar10 <= local_110 + 1) {
        pcVar10 = local_110 + 1;
      }
      do {
        pcVar9 = pcVar8;
        if (*pcVar8 != cVar5) break;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar10;
      } while (pcVar10 != pcVar8);
    }
                    /* try { // try from 001c0e14 to 001c0e1f has its CatchHandler @ 001c0ef8 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __append_forward_unsafe<char*>(param_7,pcVar9,local_118);
  }
                    /* try { // try from 001c0e3c to 001c0e6f has its CatchHandler @ 001c0f14 */
  if (((local_100 == (long *)0x0) || (local_100[3] != local_100[4])) ||
     (iVar6 = (**(code **)(*local_100 + 0x48))(local_100), iVar6 != -1)) {
    plVar11 = local_100;
    if (param_3 != (long *)0x0) goto LAB_001c0e54;
LAB_001c0ee8:
    if (plVar11 != (long *)0x0) goto LAB_001c0e88;
  }
  else {
    plVar11 = (long *)0x0;
    local_100 = (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_001c0ee8;
LAB_001c0e54:
    plVar11 = local_100;
    if ((param_3[3] == param_3[4]) && (iVar6 = (**(code **)(*param_3 + 0x48))(param_3), iVar6 == -1)
       ) goto LAB_001c0ee8;
    if (plVar11 == (long *)0x0) goto LAB_001c0e88;
  }
  *param_6 = *param_6 | 2;
LAB_001c0e88:
  plVar11 = local_100;
  __shared_count::__release_shared(local_120);
  pcVar10 = local_110;
  local_110 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
                    /* try { // try from 001c0ea4 to 001c0ea7 has its CatchHandler @ 001c0f00 */
    (*local_108)();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return plVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c0f40  std::__ndk1::__money_get<char>::__gather_info =====

/* std::__ndk1::__money_get<char>::__gather_info(bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */

void std::__ndk1::__money_get<char>::__gather_info
               (bool param_1,locale *param_2,pattern *param_3,char *param_4,char *param_5,
               basic_string_conflict *param_6,basic_string_conflict *param_7,
               basic_string_conflict *param_8,basic_string_conflict *param_9,int *param_10)

{
  long lVar1;
  ulong *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  ulong ***local_78;
  ulong **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)param_2;
  if (param_1) {
    lVar6 = *(long *)PTR_id_0020f968;
    puVar2 = (ulong *)PTR_id_0020f968;
  }
  else {
    lVar6 = *(long *)PTR_id_0020f970;
    puVar2 = (ulong *)PTR_id_0020f970;
  }
  puStack_88 = PTR___init_0020f928;
  local_80 = 0;
  local_90 = puVar2;
  if (lVar6 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    local_80 = 0;
    __call_once(puVar2,&local_78,FUN_001db064);
  }
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (long)(int)puVar2[1] - 1;
  if (((ulong)(*(long *)(lVar8 + 0x18) - lVar6 >> 3) <= uVar7) ||
     (plVar9 = *(long **)(lVar6 + uVar7 * 8), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0017cb1c();
  }
  uVar4 = (**(code **)(*plVar9 + 0x58))(plVar9);
  *(undefined4 *)param_3 = uVar4;
  (**(code **)(*plVar9 + 0x40))(&local_90,plVar9);
  if (((byte)*param_9 & 1) != 0) {
    operator_delete(*(void **)(param_9 + 0x10));
  }
  *(undefined8 *)(param_9 + 0x10) = local_80;
  *(undefined **)(param_9 + 8) = puStack_88;
  *(ulong **)param_9 = local_90;
  (**(code **)(*plVar9 + 0x38))(&local_90,plVar9);
  if (((byte)*param_8 & 1) != 0) {
    operator_delete(*(void **)(param_8 + 0x10));
  }
  *(undefined8 *)(param_8 + 0x10) = local_80;
  *(undefined **)(param_8 + 8) = puStack_88;
  *(ulong **)param_8 = local_90;
  cVar3 = (**(code **)(*plVar9 + 0x18))(plVar9);
  *param_4 = cVar3;
  cVar3 = (**(code **)(*plVar9 + 0x20))(plVar9);
  *param_5 = cVar3;
  (**(code **)(*plVar9 + 0x28))(&local_90,plVar9);
  if (((byte)*param_6 & 1) != 0) {
    operator_delete(*(void **)(param_6 + 0x10));
  }
  *(undefined8 *)(param_6 + 0x10) = local_80;
  *(undefined **)(param_6 + 8) = puStack_88;
  *(ulong **)param_6 = local_90;
  (**(code **)(*plVar9 + 0x30))(&local_90,plVar9);
  if (((byte)*param_7 & 1) != 0) {
    operator_delete(*(void **)(param_7 + 0x10));
  }
  *(undefined8 *)(param_7 + 0x10) = local_80;
  *(undefined **)(param_7 + 8) = puStack_88;
  *(ulong **)param_7 = local_90;
  iVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
  *param_10 = iVar5;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c1198  std::__ndk1::__check_grouping =====

/* std::__ndk1::__check_grouping(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*, unsigned int&) */

void std::__ndk1::__check_grouping
               (basic_string_conflict *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  basic_string_conflict bVar3;
  bool bVar4;
  uint *puVar5;
  basic_string_conflict *pbVar6;
  uint *puVar7;
  basic_string_conflict *pbVar8;
  ulong uVar9;
  byte bVar10;
  
  bVar3 = *param_1;
  uVar9 = (ulong)(byte)bVar3;
  bVar10 = (byte)bVar3 & 1;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((uVar1 != 0) && (4 < (long)param_3 - (long)param_2)) {
    if ((param_2 != param_3) && (param_2 < param_3 + -1)) {
      puVar7 = param_2 + 1;
      puVar5 = param_3 + -1;
      do {
        uVar2 = puVar7[-1];
        puVar7[-1] = *puVar5;
        *puVar5 = uVar2;
        bVar4 = puVar7 < puVar5 + -1;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + -1;
      } while (bVar4);
      uVar9 = (ulong)(byte)*param_1;
      bVar10 = (byte)*param_1 & 1;
    }
    pbVar6 = *(basic_string_conflict **)(param_1 + 0x10);
    if (bVar10 == 0) {
      pbVar6 = param_1 + 1;
    }
    bVar3 = *pbVar6;
    puVar7 = param_3 + -1;
    bVar4 = 1 < (byte)((char)bVar3 + 1U);
    if (param_2 < puVar7) {
      pbVar8 = pbVar6;
      uVar1 = uVar9 >> 1;
      if (bVar10 != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
      }
      do {
        if ((bVar4) && (*param_2 != (uint)(byte)bVar3)) goto LAB_001c1290;
        if (1 < (long)(pbVar6 + (uVar1 - (long)pbVar8))) {
          pbVar8 = pbVar8 + 1;
        }
        bVar3 = *pbVar8;
        param_2 = param_2 + 1;
        bVar4 = 1 < (byte)((char)bVar3 + 1U);
      } while (param_2 < puVar7);
    }
    if ((bVar4) && ((uint)(byte)bVar3 <= *puVar7 - 1)) {
LAB_001c1290:
      *param_4 = 4;
    }
  }
  return;
}


// ===== 001c129c  std::__ndk1::money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, unsigned int&, long double&)
   const */

long * __thiscall
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  __shared_count *p_Var4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined **__ptr;
  undefined8 uVar8;
  int *piVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  int *piVar12;
  long *plVar13;
  char local_2cc [4];
  __shared_count *local_2c8;
  int *local_2c0;
  int *local_2b8;
  code *local_2b0;
  long *local_2a8;
  undefined *local_2a0;
  undefined *puStack_298;
  undefined8 local_290;
  undefined8 local_238;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined7 local_210;
  undefined4 uStack_209;
  int local_200 [100];
  long local_70 [2];
  
  lVar2 = tpidr_el0;
  local_70[0] = *(long *)(lVar2 + 0x28);
  local_2b8 = local_200;
  local_2b0 = (code *)PTR___do_nothing_0020f948;
  local_2a8 = param_2;
                    /* try { // try from 001c12f0 to 001c12fb has its CatchHandler @ 001c1680 */
  ios_base::getloc();
  p_Var4 = local_2c8;
  puVar3 = PTR_id_0020f8b8;
  local_290 = 0;
  local_2a0 = PTR_id_0020f8b8;
  puStack_298 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_238 = &local_2a0;
    local_210 = SUB87(&local_238,0);
    uStack_209._0_1_ = (char)((ulong)&local_238 >> 0x38);
                    /* try { // try from 001c1334 to 001c134b has its CatchHandler @ 001c167c */
    __call_once((ulong *)PTR_id_0020f8b8,&local_210,FUN_001db064);
  }
  lVar1 = *(long *)(p_Var4 + 0x10);
  if (((ulong)(*(long *)(p_Var4 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar13 = *(long **)(lVar1 + ((long)*(int *)(puVar3 + 8) - 1U) * 8), plVar13 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001c1648 to 001c164b has its CatchHandler @ 001c167c */
    FUN_0017cb1c();
  }
  local_2cc[0] = '\0';
                    /* try { // try from 001c1378 to 001c13a7 has its CatchHandler @ 001c168c */
  uVar7 = __do_get(&local_2a8,param_3,param_4 & 1,&local_2c8,*(undefined4 *)(param_5 + 8),param_6,
                   local_2cc,plVar13,&local_2b8,&local_2c0,local_70);
  if ((uVar7 & 1) != 0) {
    local_210 = (undefined7)s_0123456789_00144ef2._0_8_;
    uStack_209._0_1_ = SUB81(s_0123456789_00144ef2._0_8_,7);
    uStack_209 = CONCAT31(0x3938,(char)uStack_209);
                    /* try { // try from 001c13d8 to 001c13e7 has its CatchHandler @ 001c1674 */
    (**(code **)(*plVar13 + 0x60))(plVar13,&local_210,(long)&uStack_209 + 3,&local_238);
    piVar12 = local_2b8;
    piVar9 = local_2c0;
    if ((long)local_2c0 - (long)local_2b8 < 0x189) {
      __ptr = (undefined **)0x0;
      ppuVar10 = &local_2a0;
    }
    else {
      __ptr = (undefined **)malloc(((ulong)((long)local_2c0 - (long)local_2b8) >> 2) + 2);
      ppuVar10 = __ptr;
      if (__ptr == (undefined **)0x0) goto LAB_001c165c;
    }
    if (local_2cc[0] != '\0') {
      *(undefined1 *)ppuVar10 = 0x2d;
      ppuVar10 = (undefined **)((long)ppuVar10 + 1);
    }
    if (piVar12 < piVar9) {
      ppuVar11 = ppuVar10;
      do {
        iVar6 = *piVar12;
        if ((int)local_238 == iVar6) {
          piVar9 = (int *)&local_238;
        }
        else {
          piVar9 = (int *)((long)&local_238 + 4);
          if ((((((local_238._4_4_ != iVar6) && (piVar9 = &local_230, local_230 != iVar6)) &&
                (piVar9 = &local_22c, local_22c != iVar6)) &&
               ((piVar9 = &local_228, local_228 != iVar6 &&
                (piVar9 = &local_224, local_224 != iVar6)))) &&
              ((piVar9 = &local_220, local_220 != iVar6 &&
               ((piVar9 = &local_21c, local_21c != iVar6 &&
                (piVar9 = &local_218, local_218 != iVar6)))))) &&
             (piVar9 = &local_214, local_214 != iVar6)) {
            piVar9 = (int *)&local_210;
          }
        }
        piVar12 = piVar12 + 1;
        ppuVar10 = (undefined **)((long)ppuVar11 + 1);
        *(undefined1 *)ppuVar11 =
             *(undefined1 *)((long)&local_210 + ((long)piVar9 - (long)&local_238 >> 2));
        ppuVar11 = ppuVar10;
      } while (piVar12 < local_2c0);
    }
    *(undefined1 *)ppuVar10 = 0;
    iVar6 = sscanf((char *)&local_2a0,"%Lf",param_7);
    if (iVar6 != 1) {
                    /* try { // try from 001c1650 to 001c165f has its CatchHandler @ 001c1660 */
      __throw_runtime_error("money_get error");
LAB_001c165c:
      uVar8 = __throw_bad_alloc();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001c1650 with catch @ 001c1660
                        */
      if (__ptr != (undefined **)0x0) {
        free(__ptr);
      }
      __shared_count::__release_shared(local_2c8);
      piVar12 = local_2b8;
      local_2b8 = (int *)0x0;
      if (piVar12 != (int *)0x0) {
                    /* try { // try from 001c16a8 to 001c16ab has its CatchHandler @ 001c16b4 */
        (*local_2b0)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar8);
    }
    if (__ptr != (undefined **)0x0) {
      free(__ptr);
    }
  }
  if (local_2a8 == (long *)0x0) {
LAB_001c15ac:
    bVar5 = true;
    if (param_3 == (long *)0x0) goto LAB_001c15a0;
LAB_001c15b4:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar6 == -1)) goto LAB_001c15f4;
  }
  else {
    if ((int *)local_2a8[3] == (int *)local_2a8[4]) {
                    /* try { // try from 001c1584 to 001c15d7 has its CatchHandler @ 001c168c */
      iVar6 = (**(code **)(*local_2a8 + 0x48))();
    }
    else {
      iVar6 = *(int *)local_2a8[3];
    }
    if (iVar6 == -1) {
      local_2a8 = (long *)0x0;
      goto LAB_001c15ac;
    }
    bVar5 = local_2a8 == (long *)0x0;
    if (param_3 != (long *)0x0) goto LAB_001c15b4;
LAB_001c15a0:
    if (!bVar5) goto LAB_001c15f4;
  }
  *param_6 = *param_6 | 2;
LAB_001c15f4:
  plVar13 = local_2a8;
  __shared_count::__release_shared(local_2c8);
  piVar12 = local_2b8;
  local_2b8 = (int *)0x0;
  if (piVar12 != (int *)0x0) {
                    /* try { // try from 001c1610 to 001c1613 has its CatchHandler @ 001c1678 */
    (*local_2b0)();
  }
  if (*(long *)(lVar2 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar13;
}


// ===== 001c16b8  std::__ndk1::money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::locale const&, unsigned int, unsigned
   int&, bool&, std::__ndk1::ctype<wchar_t> const&, std::__ndk1::unique_ptr<wchar_t, void
   (*)(void*)>&, wchar_t*&, wchar_t*) */

undefined4
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get(long *param_1,long *param_2,byte param_3,locale *param_4,uint param_5,uint *param_6,
        undefined1 *param_7,long *param_8,long *param_9,long *param_10,wchar_t *param_11)

{
  size_t sVar1;
  basic_string_conflict bVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  wchar_t wVar6;
  int iVar7;
  long *plVar8;
  void *pvVar9;
  uint *puVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  byte bVar14;
  ulong uVar15;
  ulong *puVar16;
  uint *puVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  byte *pbVar21;
  int *piVar22;
  ulong uVar23;
  int *piVar24;
  int *piVar25;
  void *pvVar26;
  uint *puVar27;
  void *pvVar28;
  long lVar29;
  bool bVar30;
  uint uVar31;
  wchar_t *pwVar32;
  ulong uVar33;
  int *piVar34;
  ulong *local_2c8;
  code *local_2b8;
  uint *local_2a8;
  uint *local_298;
  int local_28c;
  undefined8 local_288;
  ulong local_280;
  void *local_278;
  ulong local_270;
  ulong local_268;
  int *local_260;
  ulong local_258;
  ulong local_250;
  int *local_248;
  ulong local_240;
  ulong local_238;
  int *local_230;
  ulong local_228;
  ulong local_220;
  byte *local_218;
  wchar_t local_210;
  wchar_t local_20c;
  pattern local_208 [3];
  char local_205;
  uint local_204 [101];
  long local_70 [2];
  
  lVar3 = tpidr_el0;
  local_70[0] = *(long *)(lVar3 + 0x28);
  local_228 = 0;
  local_220 = 0;
  local_218 = (byte *)0x0;
  local_240 = 0;
  local_238 = 0;
  local_230 = (int *)0x0;
  local_258 = 0;
  local_250 = 0;
  local_248 = (int *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_260 = (int *)0x0;
  local_288 = 0;
  local_280 = 0;
  local_278 = (void *)0x0;
                    /* try { // try from 001c172c to 001c1763 has its CatchHandler @ 001c28f8 */
  __money_get<wchar_t>::__gather_info
            ((bool)(param_3 & 1),param_4,local_208,&local_20c,&local_210,
             (basic_string_conflict *)&local_228,(basic_string_conflict *)&local_240,
             (basic_string_conflict *)&local_258,(basic_string_conflict *)&local_270,&local_28c);
  piVar18 = (int *)((ulong)&local_240 | 4);
  piVar22 = (int *)((ulong)&local_270 | 4);
  local_2c8 = (ulong *)0x0;
  local_2a8 = local_204 + 1;
  local_298 = (uint *)local_70;
  uVar33 = 0;
  puVar10 = local_204 + 1;
  local_2b8 = (code *)PTR___do_nothing_0020f948;
  *param_10 = *param_9;
LAB_001c17f8:
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
LAB_001c1840:
    bVar4 = true;
    if (param_2 == (long *)0x0) goto LAB_001c187c;
LAB_001c1848:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    if (iVar7 == -1) goto LAB_001c187c;
    if (!bVar4) goto LAB_001c2580;
  }
  else {
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001c181c to 001c186b has its CatchHandler @ 001c2924 */
      iVar7 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    if (iVar7 == -1) {
      *param_1 = 0;
      goto LAB_001c1840;
    }
    bVar4 = *param_1 == 0;
    if (param_2 != (long *)0x0) goto LAB_001c1848;
LAB_001c187c:
    param_2 = (long *)0x0;
    if (bVar4) goto LAB_001c2580;
  }
  puVar16 = local_2c8;
  switch(local_208[uVar33]) {
  case (pattern)0x0:
    if (uVar33 != 3) {
LAB_001c1d2c:
      do {
        plVar8 = (long *)*param_1;
        if (plVar8 == (long *)0x0) {
LAB_001c1d74:
          bVar4 = true;
          if (param_2 == (long *)0x0) goto LAB_001c1db0;
LAB_001c1d7c:
          if ((int *)param_2[3] == (int *)param_2[4]) {
            iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            iVar7 = *(int *)param_2[3];
          }
          if (iVar7 == -1) goto LAB_001c1db0;
          if (!bVar4) goto switchD_001c18a8_default;
        }
        else {
          if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001c1d50 to 001c1df3 has its CatchHandler @ 001c2938 */
            iVar7 = (**(code **)(*plVar8 + 0x48))();
          }
          else {
            iVar7 = *(int *)plVar8[3];
          }
          if (iVar7 == -1) {
            *param_1 = 0;
            goto LAB_001c1d74;
          }
          bVar4 = *param_1 == 0;
          if (param_2 != (long *)0x0) goto LAB_001c1d7c;
LAB_001c1db0:
          param_2 = (long *)0x0;
          if (bVar4) goto switchD_001c18a8_default;
        }
        plVar8 = (long *)*param_1;
        if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
          uVar5 = (**(code **)(*plVar8 + 0x48))();
        }
        else {
          uVar5 = *(undefined4 *)plVar8[3];
        }
        uVar12 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar5);
        if ((uVar12 & 1) == 0) goto switchD_001c18a8_default;
        plVar8 = (long *)*param_1;
        pwVar32 = (wchar_t *)plVar8[3];
        if (pwVar32 == (wchar_t *)plVar8[4]) {
                    /* try { // try from 001c1e10 to 001c1e17 has its CatchHandler @ 001c2934 */
          wVar6 = (**(code **)(*plVar8 + 0x50))();
        }
        else {
          plVar8[3] = (long)(pwVar32 + 1);
          wVar6 = *pwVar32;
        }
                    /* try { // try from 001c1d24 to 001c1d2b has its CatchHandler @ 001c2934 */
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)&local_288,wVar6);
      } while( true );
    }
    goto LAB_001c2580;
  case (pattern)0x1:
    if (uVar33 != 3) {
      plVar8 = (long *)*param_1;
      if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
                    /* try { // try from 001c1cbc to 001c1cd7 has its CatchHandler @ 001c2924 */
        uVar5 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        uVar5 = *(undefined4 *)plVar8[3];
      }
      uVar12 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar5);
      if ((uVar12 & 1) != 0) {
        plVar8 = (long *)*param_1;
        pwVar32 = (wchar_t *)plVar8[3];
        if (pwVar32 == (wchar_t *)plVar8[4]) {
                    /* try { // try from 001c1d04 to 001c1d13 has its CatchHandler @ 001c2910 */
          wVar6 = (**(code **)(*plVar8 + 0x50))();
        }
        else {
          plVar8[3] = (long)(pwVar32 + 1);
          wVar6 = *pwVar32;
        }
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)&local_288,wVar6);
        goto LAB_001c1d2c;
      }
      goto LAB_001c26c0;
    }
    goto LAB_001c2580;
  case (pattern)0x2:
    if (((uVar33 < 2) || (local_2c8 != (ulong *)0x0)) ||
       (((uint)(uVar33 == 2 && local_205 != '\0') | param_5 >> 9 & 1) == 1)) {
      uVar12 = local_240 & 0xff;
      bVar14 = (byte)local_240._0_1_ & 1;
      piVar24 = piVar18;
      if ((local_240 & 1) != 0) {
        piVar24 = local_230;
      }
      piVar25 = piVar24;
      if ((uVar33 != 0) && ((byte)local_208[(int)uVar33 - 1] < 2)) {
        uVar15 = (ulong)((byte)local_240._0_1_ >> 1);
        if ((local_240 & 1) != 0) {
          uVar15 = local_238;
        }
        piVar34 = piVar24;
        if (uVar15 != 0) {
          do {
                    /* try { // try from 001c1ba0 to 001c1bab has its CatchHandler @ 001c2918 */
            uVar12 = (**(code **)(*param_8 + 0x18))(param_8,1,*piVar24);
            if ((uVar12 & 1) == 0) {
              uVar12 = local_240 & 0xff;
              bVar14 = (byte)local_240._0_1_ & 1;
              piVar34 = piVar24;
              break;
            }
            uVar12 = local_240 & 0xff;
            piVar24 = piVar24 + 1;
            bVar14 = (byte)local_240._0_1_ & 1;
            uVar15 = (ulong)((byte)local_240._0_1_ >> 1);
            piVar25 = piVar18;
            if ((local_240 & 1) != 0) {
              uVar15 = local_238;
              piVar25 = local_230;
            }
            piVar34 = piVar24;
          } while (piVar24 != piVar25 + uVar15);
        }
        piVar24 = piVar18;
        if (bVar14 != 0) {
          piVar24 = local_230;
        }
        uVar15 = (long)piVar34 - (long)piVar24 >> 2;
        piVar25 = piVar24;
        if ((local_288 & 1) == 0) {
          uVar23 = local_288 >> 1 & 0x7f;
          if (uVar15 <= uVar23) {
            pvVar28 = (void *)((long)&local_288 + uVar23 * 4 + 4);
            pvVar9 = (void *)((ulong)&local_288 | 4);
LAB_001c23dc:
            pvVar26 = (void *)((long)pvVar28 + uVar15 * -4);
            piVar25 = piVar34;
            if (pvVar26 != (void *)((long)pvVar9 + uVar23 * 4)) {
              lVar29 = 0;
              do {
                piVar25 = piVar24;
                if (*(int *)((long)pvVar26 + lVar29) != *(int *)((long)piVar24 + lVar29)) break;
                lVar29 = lVar29 + 4;
                piVar25 = piVar34;
              } while ((long)pvVar9 + ((uVar23 + uVar15) * 4 - (long)pvVar28) != lVar29);
            }
          }
        }
        else if (uVar15 <= local_280) {
          pvVar28 = (void *)((long)local_278 + local_280 * 4);
          uVar23 = local_280;
          pvVar9 = local_278;
          goto LAB_001c23dc;
        }
      }
      uVar12 = uVar12 >> 1;
      if (bVar14 != 0) {
        uVar12 = local_238;
      }
      if (piVar24 + uVar12 != piVar25) {
        do {
          plVar8 = (long *)*param_1;
          if (plVar8 == (long *)0x0) {
LAB_001c1f74:
            bVar4 = true;
            if (param_2 == (long *)0x0) goto LAB_001c1fb0;
LAB_001c1f7c:
            if ((int *)param_2[3] == (int *)param_2[4]) {
              iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            else {
              iVar7 = *(int *)param_2[3];
            }
            if (iVar7 == -1) goto LAB_001c1fb0;
            if (!bVar4) break;
          }
          else {
            if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001c1f50 to 001c1fdb has its CatchHandler @ 001c2920 */
              iVar7 = (**(code **)(*plVar8 + 0x48))();
            }
            else {
              iVar7 = *(int *)plVar8[3];
            }
            if (iVar7 == -1) {
              *param_1 = 0;
              goto LAB_001c1f74;
            }
            bVar4 = *param_1 == 0;
            if (param_2 != (long *)0x0) goto LAB_001c1f7c;
LAB_001c1fb0:
            param_2 = (long *)0x0;
            if (bVar4) break;
          }
          plVar8 = (long *)*param_1;
          if ((int *)plVar8[3] == (int *)plVar8[4]) {
            iVar7 = (**(code **)(*plVar8 + 0x48))();
          }
          else {
            iVar7 = *(int *)plVar8[3];
          }
          if (iVar7 != *piVar25) break;
          plVar8 = (long *)*param_1;
          if (plVar8[3] == plVar8[4]) {
                    /* try { // try from 001c2000 to 001c2003 has its CatchHandler @ 001c2914 */
            (**(code **)(*plVar8 + 0x50))();
          }
          else {
            plVar8[3] = plVar8[3] + 4;
          }
          piVar25 = piVar25 + 1;
          uVar12 = local_240 >> 1 & 0x7f;
          piVar24 = piVar18;
          if ((local_240 & 1) != 0) {
            uVar12 = local_238;
            piVar24 = local_230;
          }
        } while (piVar25 != piVar24 + uVar12);
      }
      if ((param_5 >> 9 & 1) != 0) {
        uVar12 = local_240 >> 1 & 0x7f;
        piVar24 = piVar18;
        if ((local_240 & 1) != 0) {
          uVar12 = local_238;
          piVar24 = local_230;
        }
        if (piVar25 != piVar24 + uVar12) goto LAB_001c26c0;
      }
    }
    else {
      local_2c8 = (ulong *)0x0;
      puVar16 = local_2c8;
    }
    break;
  case (pattern)0x3:
    uVar15 = local_258 & 0xff;
    bVar14 = (byte)local_258._0_1_ & 1;
    uVar12 = (ulong)((byte)local_258._0_1_ >> 1);
    if ((local_258 & 1) != 0) {
      uVar12 = local_250;
    }
    uVar23 = (ulong)((byte)local_270._0_1_ >> 1);
    if ((local_270 & 1) != 0) {
      uVar23 = local_268;
    }
    if (uVar12 + uVar23 != 0) {
      if (uVar12 == 0) {
        plVar8 = (long *)*param_1;
        if ((int *)plVar8[3] == (int *)plVar8[4]) {
          iVar7 = (**(code **)(*plVar8 + 0x48))();
        }
        else {
          iVar7 = *(int *)plVar8[3];
        }
        piVar24 = piVar22;
        if (((byte)local_270._0_1_ & 1) != 0) {
          piVar24 = local_260;
        }
        if (iVar7 != *piVar24) break;
        plVar8 = (long *)*param_1;
        if (plVar8[3] == plVar8[4]) {
          (**(code **)(*plVar8 + 0x50))();
          bVar2 = local_270._0_1_;
        }
        else {
          plVar8[3] = plVar8[3] + 4;
          bVar2 = local_270._0_1_;
        }
        *param_7 = 1;
        uVar12 = (ulong)((byte)bVar2 >> 1);
        if (((byte)bVar2 & 1) != 0) {
          uVar12 = local_268;
        }
LAB_001c2534:
        puVar16 = &local_270;
      }
      else {
        plVar8 = (long *)*param_1;
        piVar24 = (int *)plVar8[3];
        piVar25 = (int *)plVar8[4];
        if (uVar23 == 0) {
          if (piVar24 == piVar25) {
                    /* try { // try from 001c2424 to 001c254f has its CatchHandler @ 001c2924 */
            iVar7 = (**(code **)(*plVar8 + 0x48))();
            uVar15 = local_258 & 0xff;
            bVar14 = (byte)local_258._0_1_ & 1;
          }
          else {
            iVar7 = *piVar24;
          }
          piVar24 = (int *)((ulong)&local_258 | 4);
          if (bVar14 != 0) {
            piVar24 = local_248;
          }
          if (iVar7 != *piVar24) {
            *param_7 = 1;
            break;
          }
          plVar8 = (long *)*param_1;
          piVar24 = (int *)plVar8[3];
          if (piVar24 == (int *)plVar8[4]) {
            (**(code **)(*plVar8 + 0x50))();
            goto LAB_001c2550;
          }
LAB_001c2460:
          plVar8[3] = (long)(piVar24 + 1);
        }
        else {
          if (piVar24 == piVar25) {
                    /* try { // try from 001c2010 to 001c206f has its CatchHandler @ 001c2924 */
            iVar7 = (**(code **)(*plVar8 + 0x48))();
            plVar8 = (long *)*param_1;
            uVar15 = local_258 & 0xff;
            piVar24 = (int *)plVar8[3];
            piVar25 = (int *)plVar8[4];
            bVar14 = (byte)local_258._0_1_ & 1;
          }
          else {
            iVar7 = *piVar24;
          }
          piVar34 = (int *)((ulong)&local_258 | 4);
          if (bVar14 != 0) {
            piVar34 = local_248;
          }
          if (iVar7 != *piVar34) {
            if (piVar24 == piVar25) {
              iVar7 = (**(code **)(*plVar8 + 0x48))();
            }
            else {
              iVar7 = *piVar24;
            }
            piVar24 = piVar22;
            if ((local_270 & 1) != 0) {
              piVar24 = local_260;
            }
            if (iVar7 != *piVar24) goto LAB_001c26c0;
            plVar8 = (long *)*param_1;
            if (plVar8[3] == plVar8[4]) {
              (**(code **)(*plVar8 + 0x50))();
            }
            else {
              plVar8[3] = plVar8[3] + 4;
            }
            *param_7 = 1;
            uVar12 = (ulong)((byte)local_270._0_1_ >> 1);
            if (((byte)local_270._0_1_ & 1) != 0) {
              uVar12 = local_268;
            }
            goto LAB_001c2534;
          }
          if (piVar24 != piVar25) goto LAB_001c2460;
          (**(code **)(*plVar8 + 0x50))();
LAB_001c2550:
          uVar15 = local_258 & 0xff;
          bVar14 = (byte)local_258._0_1_ & 1;
        }
        uVar12 = uVar15 >> 1;
        if (bVar14 != 0) {
          uVar12 = local_250;
        }
        puVar16 = &local_258;
      }
      if (uVar12 < 2) {
        puVar16 = local_2c8;
      }
    }
    break;
  case (pattern)0x4:
    uVar31 = 0;
    puVar27 = puVar10;
LAB_001c18c8:
    plVar8 = (long *)*param_1;
    if (plVar8 == (long *)0x0) {
LAB_001c1910:
      bVar4 = true;
      if (param_2 == (long *)0x0) goto LAB_001c194c;
LAB_001c1918:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar7 = *(int *)param_2[3];
      }
      if (iVar7 == -1) goto LAB_001c194c;
      if (!bVar4) goto LAB_001c1c50;
    }
    else {
      if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001c18ec to 001c193b has its CatchHandler @ 001c292c */
        iVar7 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        iVar7 = *(int *)plVar8[3];
      }
      if (iVar7 == -1) {
        *param_1 = 0;
        goto LAB_001c1910;
      }
      bVar4 = *param_1 == 0;
      if (param_2 != (long *)0x0) goto LAB_001c1918;
LAB_001c194c:
      param_2 = (long *)0x0;
      if (bVar4) goto LAB_001c1c50;
    }
    plVar8 = (long *)*param_1;
    if ((wchar_t *)plVar8[3] == (wchar_t *)plVar8[4]) {
                    /* try { // try from 001c1974 to 001c1993 has its CatchHandler @ 001c2930 */
      wVar6 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      wVar6 = *(wchar_t *)plVar8[3];
    }
    uVar12 = (**(code **)(*param_8 + 0x18))(param_8,0x40,wVar6);
    if ((uVar12 & 1) == 0) {
      uVar12 = local_228 >> 1 & 0x7f;
      if ((local_228 & 1) != 0) {
        uVar12 = local_220;
      }
      if (((wVar6 != local_210) || (uVar31 == 0)) || (uVar12 == 0)) goto LAB_001c1c50;
      if (puVar27 == local_298) {
        uVar12 = (long)local_298 - (long)local_2a8;
        sVar1 = 4;
        if (uVar12 != 0) {
          sVar1 = uVar12 * 2;
        }
        if (0x7ffffffffffffffe < uVar12) {
          sVar1 = 0xffffffffffffffff;
        }
        if (local_2b8 == (code *)PTR___do_nothing_0020f948) {
          puVar10 = (uint *)malloc(sVar1);
        }
        else {
          puVar10 = (uint *)realloc(local_2a8,sVar1);
        }
        if (puVar10 == (uint *)0x0) {
                    /* try { // try from 001c28cc to 001c28d3 has its CatchHandler @ 001c28ec */
          __throw_bad_alloc();
          goto LAB_001c28d0;
        }
        puVar27 = (uint *)((long)puVar10 + ((long)puVar27 - (long)local_2a8));
        local_298 = (uint *)((long)puVar10 + (sVar1 & 0xfffffffffffffffc));
        local_2b8 = (code *)PTR_free_0020f950;
        local_2a8 = puVar10;
      }
      puVar10 = puVar27 + 1;
      *puVar27 = uVar31;
      uVar31 = 0;
    }
    else {
      pwVar32 = (wchar_t *)*param_10;
      if (pwVar32 == param_11) {
        pvVar28 = (void *)*param_9;
        uVar12 = (long)param_11 - (long)pvVar28;
        sVar1 = 4;
        if (uVar12 != 0) {
          sVar1 = uVar12 * 2;
        }
        if (0x7ffffffffffffffe < uVar12) {
          sVar1 = 0xffffffffffffffff;
        }
        if ((undefined *)param_9[1] == PTR___do_nothing_0020f948) {
          pvVar9 = malloc(sVar1);
        }
        else {
          pvVar9 = realloc(pvVar28,sVar1);
        }
        if (pvVar9 == (void *)0x0) {
LAB_001c28d0:
          __throw_bad_alloc();
          goto LAB_001c28d4;
        }
        pwVar32 = (wchar_t *)((long)pvVar9 + ((long)pwVar32 - (long)pvVar28));
        *param_9 = (long)pvVar9;
        param_9[1] = (long)PTR_free_0020f950;
        *param_10 = (long)pwVar32;
        param_11 = (wchar_t *)(*param_9 + (sVar1 & 0xfffffffffffffffc));
      }
      *param_10 = (long)(pwVar32 + 1);
      *pwVar32 = wVar6;
      uVar31 = uVar31 + 1;
      puVar10 = puVar27;
    }
    plVar8 = (long *)*param_1;
    puVar27 = puVar10;
    if (plVar8[3] == plVar8[4]) {
                    /* try { // try from 001c1b14 to 001c1b17 has its CatchHandler @ 001c292c */
      (**(code **)(*plVar8 + 0x50))();
    }
    else {
      plVar8[3] = plVar8[3] + 4;
    }
    goto LAB_001c18c8;
  }
switchD_001c18a8_default:
  local_2c8 = puVar16;
  uVar33 = uVar33 + 1;
  if (uVar33 == 4) goto LAB_001c2580;
  goto LAB_001c17f8;
LAB_001c1c50:
  puVar10 = puVar27;
  if ((local_2a8 != puVar27) && (uVar31 != 0)) {
    if (puVar27 == local_298) {
      uVar12 = (long)local_298 - (long)local_2a8;
      sVar1 = 4;
      if (uVar12 != 0) {
        sVar1 = uVar12 * 2;
      }
      if (0x7ffffffffffffffe < uVar12) {
        sVar1 = 0xffffffffffffffff;
      }
      if (local_2b8 == (code *)PTR___do_nothing_0020f948) {
        puVar10 = (uint *)malloc(sVar1);
      }
      else {
        puVar10 = (uint *)realloc(local_2a8,sVar1);
      }
      if (puVar10 == (uint *)0x0) {
LAB_001c28d4:
                    /* try { // try from 001c28d4 to 001c28e3 has its CatchHandler @ 001c28e8 */
        __throw_bad_alloc();
LAB_001c28dc:
        __throw_bad_alloc();
        goto LAB_001c28e4;
      }
      puVar27 = (uint *)((long)puVar10 + ((long)puVar27 - (long)local_2a8));
      local_298 = (uint *)((long)puVar10 + (sVar1 & 0xfffffffffffffffc));
      local_2b8 = (code *)PTR_free_0020f950;
      local_2a8 = puVar10;
    }
    puVar10 = puVar27 + 1;
    *puVar27 = uVar31;
  }
  if (local_28c < 1) {
LAB_001c17d8:
    if (*param_10 != *param_9) goto switchD_001c18a8_default;
    goto LAB_001c26c0;
  }
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
LAB_001c2140:
    bVar30 = true;
    bVar4 = true;
    if (param_2 == (long *)0x0) goto LAB_001c2130;
LAB_001c2148:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    plVar8 = (long *)0x0;
    if (iVar7 != -1) {
      plVar8 = param_2;
    }
    if (!(bool)(bVar30 ^ iVar7 == -1)) goto LAB_001c26c0;
  }
  else {
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001c2114 to 001c21db has its CatchHandler @ 001c28f4 */
      iVar7 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    if (iVar7 == -1) {
      *param_1 = 0;
      goto LAB_001c2140;
    }
    bVar4 = *param_1 == 0;
    bVar30 = bVar4;
    if (param_2 != (long *)0x0) goto LAB_001c2148;
LAB_001c2130:
    if (bVar4) goto LAB_001c26c0;
    plVar8 = (long *)0x0;
  }
  plVar11 = (long *)*param_1;
  if ((wchar_t *)plVar11[3] == (wchar_t *)plVar11[4]) {
    wVar6 = (**(code **)(*plVar11 + 0x48))();
  }
  else {
    wVar6 = *(wchar_t *)plVar11[3];
  }
  if (wVar6 == local_20c) {
    plVar11 = (long *)*param_1;
    param_2 = plVar8;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 4;
    }
joined_r0x001c21e4:
    plVar8 = param_2;
    if (0 < local_28c) {
      do {
        plVar11 = (long *)*param_1;
        if (plVar11 == (long *)0x0) {
LAB_001c224c:
          bVar30 = true;
          bVar4 = true;
          if (plVar8 == (long *)0x0) goto LAB_001c223c;
LAB_001c2254:
          if ((int *)plVar8[3] == (int *)plVar8[4]) {
            iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
          }
          else {
            iVar7 = *(int *)plVar8[3];
          }
          param_2 = (long *)0x0;
          if (iVar7 != -1) {
            param_2 = plVar8;
          }
          if (!(bool)(bVar30 ^ iVar7 == -1)) goto LAB_001c26c0;
        }
        else {
          if ((int *)plVar11[3] == (int *)plVar11[4]) {
                    /* try { // try from 001c2220 to 001c23c3 has its CatchHandler @ 001c2928 */
            iVar7 = (**(code **)(*plVar11 + 0x48))();
          }
          else {
            iVar7 = *(int *)plVar11[3];
          }
          if (iVar7 == -1) {
            *param_1 = 0;
            goto LAB_001c224c;
          }
          bVar4 = *param_1 == 0;
          bVar30 = bVar4;
          if (plVar8 != (long *)0x0) goto LAB_001c2254;
LAB_001c223c:
          if (bVar4) goto LAB_001c26c0;
          param_2 = (long *)0x0;
        }
        plVar8 = (long *)*param_1;
        if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
          uVar5 = (**(code **)(*plVar8 + 0x48))();
        }
        else {
          uVar5 = *(undefined4 *)plVar8[3];
        }
        uVar12 = (**(code **)(*param_8 + 0x18))(param_8,0x40,uVar5);
        if ((uVar12 & 1) == 0) goto LAB_001c26c0;
        pwVar32 = (wchar_t *)*param_10;
        if (pwVar32 == param_11) {
          pvVar28 = (void *)*param_9;
          uVar12 = (long)param_11 - (long)pvVar28;
          sVar1 = 4;
          if (uVar12 != 0) {
            sVar1 = uVar12 * 2;
          }
          if (0x7ffffffffffffffe < uVar12) {
            sVar1 = 0xffffffffffffffff;
          }
          if ((undefined *)param_9[1] == PTR___do_nothing_0020f948) {
            pvVar9 = malloc(sVar1);
          }
          else {
            pvVar9 = realloc(pvVar28,sVar1);
          }
          if (pvVar9 == (void *)0x0) goto LAB_001c28dc;
          pwVar32 = (wchar_t *)((long)pvVar9 + ((long)pwVar32 - (long)pvVar28));
          *param_9 = (long)pvVar9;
          param_9[1] = (long)PTR_free_0020f950;
          *param_10 = (long)pwVar32;
          param_11 = (wchar_t *)(*param_9 + (sVar1 & 0xfffffffffffffffc));
        }
        plVar8 = (long *)*param_1;
        if ((wchar_t *)plVar8[3] == (wchar_t *)plVar8[4]) {
          wVar6 = (**(code **)(*plVar8 + 0x48))();
          pwVar32 = (wchar_t *)*param_10;
        }
        else {
          wVar6 = *(wchar_t *)plVar8[3];
        }
        *param_10 = (long)(pwVar32 + 1);
        *pwVar32 = wVar6;
        local_28c = local_28c + -1;
        plVar8 = (long *)*param_1;
        if (plVar8[3] == plVar8[4]) goto code_r0x001c23b8;
        plVar8[3] = plVar8[3] + 4;
        plVar8 = param_2;
        if (local_28c < 1) break;
      } while( true );
    }
    goto LAB_001c17d8;
  }
LAB_001c26c0:
  uVar5 = 0;
  *param_6 = *param_6 | 4;
  goto joined_r0x001c26dc;
code_r0x001c23b8:
  (**(code **)(*plVar8 + 0x50))();
  goto joined_r0x001c21e4;
LAB_001c2580:
  if (local_2c8 != (ulong *)0x0) {
    uVar33 = 1;
LAB_001c25a0:
    if (((byte)*local_2c8 & 1) == 0) {
      uVar12 = (ulong)(byte)((byte)*local_2c8 >> 1);
    }
    else {
      uVar12 = local_2c8[1];
    }
    if (uVar12 <= uVar33) goto LAB_001c2730;
    plVar8 = (long *)*param_1;
    if (plVar8 == (long *)0x0) {
LAB_001c2618:
      bVar30 = true;
      bVar4 = true;
      if (param_2 == (long *)0x0) goto LAB_001c2608;
LAB_001c2620:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar7 = *(int *)param_2[3];
      }
      plVar8 = (long *)0x0;
      if (iVar7 != -1) {
        plVar8 = param_2;
      }
      if (!(bool)(bVar30 ^ iVar7 == -1)) goto LAB_001c2848;
    }
    else {
      if ((int *)plVar8[3] == (int *)plVar8[4]) {
                    /* try { // try from 001c25ec to 001c26bb has its CatchHandler @ 001c291c */
        iVar7 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        iVar7 = *(int *)plVar8[3];
      }
      if (iVar7 == -1) {
        *param_1 = 0;
        goto LAB_001c2618;
      }
      bVar4 = *param_1 == 0;
      bVar30 = bVar4;
      if (param_2 != (long *)0x0) goto LAB_001c2620;
LAB_001c2608:
      if (bVar4) goto LAB_001c2848;
      plVar8 = (long *)0x0;
    }
    plVar11 = (long *)*param_1;
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar7 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar11[3];
    }
    pbVar13 = (byte *)((long)local_2c8 + 4);
    if ((*local_2c8 & 1) != 0) {
      pbVar13 = (byte *)local_2c8[2];
    }
    if (iVar7 != *(int *)(pbVar13 + uVar33 * 4)) goto LAB_001c2848;
    plVar11 = (long *)*param_1;
    uVar33 = (ulong)((int)uVar33 + 1);
    param_2 = plVar8;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 4;
    }
    goto LAB_001c25a0;
  }
LAB_001c2730:
  if (local_2a8 != puVar10) {
    uVar5 = 1;
    uVar33 = (ulong)((byte)local_228._0_1_ >> 1);
    if ((local_228 & 1) != 0) {
      uVar33 = local_220;
    }
    if (((long)puVar10 - (long)local_2a8 < 5) || (uVar33 == 0)) goto joined_r0x001c26dc;
    puVar10 = puVar10 + -1;
    puVar19 = puVar10;
    puVar27 = local_2a8;
    if (local_2a8 < puVar10) {
      do {
        puVar17 = puVar27 + 1;
        uVar31 = *puVar27;
        *puVar27 = *puVar19;
        puVar20 = puVar19 + -1;
        *puVar19 = uVar31;
        puVar19 = puVar20;
        puVar27 = puVar17;
      } while (puVar17 < puVar20);
    }
    pbVar13 = (byte *)((ulong)&local_228 | 1);
    if ((local_228 & 1) != 0) {
      pbVar13 = local_218;
    }
    bVar14 = *pbVar13;
    bVar4 = 1 < (byte)(bVar14 + 1);
    if (local_2a8 < puVar10) {
      pbVar21 = pbVar13;
      puVar27 = local_2a8;
      uVar33 = (ulong)((byte)local_228._0_1_ >> 1);
      if ((local_228 & 1) != 0) {
        uVar33 = local_220;
      }
      do {
        if ((bVar4) && (*puVar27 != (uint)bVar14)) goto LAB_001c2848;
        if (1 < (long)(pbVar13 + (uVar33 - (long)pbVar21))) {
          pbVar21 = pbVar21 + 1;
        }
        bVar14 = *pbVar21;
        puVar27 = puVar27 + 1;
        bVar4 = 1 < (byte)(bVar14 + 1);
      } while (puVar27 < puVar10);
    }
    if ((bVar4) && ((uint)bVar14 <= *puVar10 - 1)) {
LAB_001c2848:
      uVar5 = 0;
      *param_6 = *param_6 | 4;
      goto joined_r0x001c26dc;
    }
  }
  uVar5 = 1;
joined_r0x001c26dc:
  if ((local_288 & 1) != 0) {
    operator_delete(local_278);
  }
  if ((local_270 & 1) != 0) {
    operator_delete(local_260);
  }
  if ((local_258 & 1) != 0) {
    operator_delete(local_248);
  }
  if ((local_240 & 1) != 0) {
    operator_delete(local_230);
  }
  if ((local_228 & 1) != 0) {
    operator_delete(local_218);
  }
  if (local_2a8 != (uint *)0x0) {
                    /* try { // try from 001c2888 to 001c2893 has its CatchHandler @ 001c28f0 */
    (*local_2b8)(local_2a8);
  }
  if (*(long *)(lVar3 + 0x28) == local_70[0]) {
    return uVar5;
  }
LAB_001c28e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c29d4  std::__ndk1::money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get =====

/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, unsigned int&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&) const */

long * __thiscall
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
      *param_7)

{
  long lVar1;
  long lVar2;
  wchar_t *pwVar3;
  undefined *puVar4;
  __shared_count *p_Var5;
  bool bVar6;
  wchar_t wVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  __shared_count *local_248;
  wchar_t *local_240;
  wchar_t *local_238;
  code *local_230;
  long *local_228;
  undefined *local_220;
  undefined *puStack_218;
  undefined8 local_210;
  undefined ***local_208;
  undefined **local_200;
  wchar_t local_1f8 [100];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_238 = local_1f8;
  local_230 = (code *)PTR___do_nothing_0020f948;
  local_228 = param_2;
                    /* try { // try from 001c2a28 to 001c2a33 has its CatchHandler @ 001c2c78 */
  ios_base::getloc();
  p_Var5 = local_248;
  puVar4 = PTR_id_0020f8b8;
  local_210 = 0;
  local_220 = PTR_id_0020f8b8;
  puStack_218 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_200 = &local_220;
    local_208 = &local_200;
                    /* try { // try from 001c2a68 to 001c2a7f has its CatchHandler @ 001c2c74 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_208,FUN_001db064);
  }
  lVar1 = *(long *)(p_Var5 + 0x10);
  if (((ulong)(*(long *)(p_Var5 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar4 + 8) - 1U) ||
     (plVar10 = *(long **)(lVar1 + ((long)*(int *)(puVar4 + 8) - 1U) * 8), plVar10 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001c2c60 to 001c2c63 has its CatchHandler @ 001c2c74 */
    FUN_0017cb1c();
  }
  local_220 = (undefined *)((ulong)local_220 & 0xffffffffffffff00);
                    /* try { // try from 001c2aac to 001c2b2f has its CatchHandler @ 001c2c84 */
  uVar9 = __do_get(&local_228,param_3,param_4 & 1,&local_248,*(undefined4 *)(param_5 + 8),param_6,
                   &local_220,plVar10,&local_238,&local_240,&local_68);
  if ((uVar9 & 1) != 0) {
    if (((byte)*param_7 & 1) == 0) {
      *(undefined4 *)(param_7 + 4) = 0;
      *param_7 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  )0x0;
    }
    else {
      **(undefined4 **)(param_7 + 0x10) = 0;
      *(undefined8 *)(param_7 + 8) = 0;
    }
    if ((char)local_220 != '\0') {
      wVar7 = (**(code **)(*plVar10 + 0x58))(plVar10,0x2d);
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      push_back(param_7,wVar7);
    }
                    /* try { // try from 001c2b38 to 001c2b43 has its CatchHandler @ 001c2c6c */
    wVar7 = (**(code **)(*plVar10 + 0x58))(plVar10,0x30);
    for (pwVar3 = local_238; (pwVar3 < local_240 + -1 && (*pwVar3 == wVar7)); pwVar3 = pwVar3 + 1) {
    }
                    /* try { // try from 001c2b6c to 001c2b77 has its CatchHandler @ 001c2c68 */
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __append_forward_unsafe<wchar_t*>(param_7,pwVar3,local_240);
  }
  if (local_228 == (long *)0x0) {
LAB_001c2bc4:
    bVar6 = true;
    if (param_3 == (long *)0x0) goto LAB_001c2bb8;
LAB_001c2bcc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar8 == -1)) goto LAB_001c2c0c;
  }
  else {
    if ((int *)local_228[3] == (int *)local_228[4]) {
                    /* try { // try from 001c2b9c to 001c2bef has its CatchHandler @ 001c2c84 */
      iVar8 = (**(code **)(*local_228 + 0x48))();
    }
    else {
      iVar8 = *(int *)local_228[3];
    }
    if (iVar8 == -1) {
      local_228 = (long *)0x0;
      goto LAB_001c2bc4;
    }
    bVar6 = local_228 == (long *)0x0;
    if (param_3 != (long *)0x0) goto LAB_001c2bcc;
LAB_001c2bb8:
    if (!bVar6) goto LAB_001c2c0c;
  }
  *param_6 = *param_6 | 2;
LAB_001c2c0c:
  plVar10 = local_228;
  __shared_count::__release_shared(local_248);
  pwVar3 = local_238;
  local_238 = (wchar_t *)0x0;
  if (pwVar3 != (wchar_t *)0x0) {
                    /* try { // try from 001c2c28 to 001c2c2b has its CatchHandler @ 001c2c70 */
    (*local_230)();
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar10;
}


// ===== 001c2cb0  std::__ndk1::__money_get<wchar_t>::__gather_info =====

/* std::__ndk1::__money_get<wchar_t>::__gather_info(bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, int&) */

void std::__ndk1::__money_get<wchar_t>::__gather_info
               (bool param_1,locale *param_2,pattern *param_3,wchar_t *param_4,wchar_t *param_5,
               basic_string_conflict *param_6,basic_string_conflict *param_7,
               basic_string_conflict *param_8,basic_string_conflict *param_9,int *param_10)

{
  long lVar1;
  ulong *puVar2;
  undefined4 uVar3;
  wchar_t wVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  ulong ***local_78;
  ulong **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)param_2;
  if (param_1) {
    lVar6 = *(long *)PTR_id_0020f978;
    puVar2 = (ulong *)PTR_id_0020f978;
  }
  else {
    lVar6 = *(long *)PTR_id_0020f980;
    puVar2 = (ulong *)PTR_id_0020f980;
  }
  puStack_88 = PTR___init_0020f928;
  local_80 = 0;
  local_90 = puVar2;
  if (lVar6 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    local_80 = 0;
    __call_once(puVar2,&local_78,FUN_001db064);
  }
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (long)(int)puVar2[1] - 1;
  if (((ulong)(*(long *)(lVar8 + 0x18) - lVar6 >> 3) <= uVar7) ||
     (plVar9 = *(long **)(lVar6 + uVar7 * 8), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0017cb1c();
  }
  uVar3 = (**(code **)(*plVar9 + 0x58))(plVar9);
  *(undefined4 *)param_3 = uVar3;
  (**(code **)(*plVar9 + 0x40))(&local_90,plVar9);
  if (((byte)*param_9 & 1) != 0) {
    operator_delete(*(void **)(param_9 + 0x10));
  }
  *(undefined8 *)(param_9 + 0x10) = local_80;
  *(undefined **)(param_9 + 8) = puStack_88;
  *(ulong **)param_9 = local_90;
  (**(code **)(*plVar9 + 0x38))(&local_90,plVar9);
  if (((byte)*param_8 & 1) != 0) {
    operator_delete(*(void **)(param_8 + 0x10));
  }
  *(undefined8 *)(param_8 + 0x10) = local_80;
  *(undefined **)(param_8 + 8) = puStack_88;
  *(ulong **)param_8 = local_90;
  wVar4 = (**(code **)(*plVar9 + 0x18))(plVar9);
  *param_4 = wVar4;
  wVar4 = (**(code **)(*plVar9 + 0x20))(plVar9);
  *param_5 = wVar4;
  (**(code **)(*plVar9 + 0x28))(&local_90,plVar9);
  if (((byte)*param_6 & 1) != 0) {
    operator_delete(*(void **)(param_6 + 0x10));
  }
  *(undefined8 *)(param_6 + 0x10) = local_80;
  *(undefined **)(param_6 + 8) = puStack_88;
  *(ulong **)param_6 = local_90;
  (**(code **)(*plVar9 + 0x30))(&local_90,plVar9);
  if (((byte)*param_7 & 1) != 0) {
    operator_delete(*(void **)(param_7 + 0x10));
  }
  *(undefined8 *)(param_7 + 0x10) = local_80;
  *(undefined **)(param_7 + 8) = puStack_88;
  *(ulong **)param_7 = local_90;
  iVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
  *param_10 = iVar5;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c2f08  std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char, long double) const */

undefined8 __thiscall
std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(char *param_1,undefined8 param_2,undefined8 param_3,byte param_4,long param_5,
      undefined4 param_6)

{
  size_t __size;
  long lVar1;
  undefined *puVar2;
  __shared_count *p_Var3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *__ptr;
  undefined **unaff_x23;
  size_t __size_00;
  undefined **ppuVar12;
  ctype *pcVar13;
  char *local_230;
  char *local_220;
  char *pcStack_218;
  int local_20c;
  ulong local_208;
  ulong local_200;
  void *local_1f8;
  undefined ***local_1f0;
  ulong local_1e8;
  void *local_1e0;
  undefined **local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  char local_1c0 [4];
  char local_1bc [4];
  __shared_count *local_1b8;
  char *local_1b0;
  pattern apStack_1a8 [8];
  undefined *local_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  char acStack_138 [100];
  char local_d4 [100];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_1b0 = local_d4;
  uVar5 = FUN_001c33b0(local_d4,100);
  if (uVar5 < 100) {
    __ptr = (char *)0x0;
    pcVar7 = acStack_138;
    __size_00 = (size_t)(int)uVar5;
    local_230 = (char *)0x0;
LAB_001c2fcc:
                    /* try { // try from 001c2fcc to 001c2fdb has its CatchHandler @ 001c330c */
    ios_base::getloc();
    p_Var3 = local_1b8;
    puVar2 = PTR_id_0020f840;
    local_190 = 0;
    local_1a0 = PTR_id_0020f840;
    puStack_198 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020f840 != -1) {
      local_1d8 = &local_1a0;
      local_1f0 = &local_1d8;
                    /* try { // try from 001c3014 to 001c3067 has its CatchHandler @ 001c3314 */
      __call_once((ulong *)PTR_id_0020f840,&local_1f0,FUN_001db064);
    }
    lVar11 = *(long *)(p_Var3 + 0x10);
    if (((ulong)(*(long *)(p_Var3 + 0x18) - lVar11 >> 3) <= (long)*(int *)(puVar2 + 8) - 1U) ||
       (pcVar13 = *(ctype **)(lVar11 + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
       pcVar13 == (ctype *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001c32b8 to 001c32bb has its CatchHandler @ 001c3314 */
      FUN_0017cb1c();
    }
    (**(code **)(*(long *)pcVar13 + 0x40))(pcVar13,local_1b0,local_1b0 + __size_00,pcVar7);
    if (__size_00 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *local_1b0 == '-';
    }
    local_1d8 = (undefined **)0x0;
    uStack_1d0 = 0;
    local_1c8 = (void *)0x0;
    local_1f0 = (undefined ***)0x0;
    local_1e8 = 0;
    local_1e0 = (void *)0x0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = (void *)0x0;
                    /* try { // try from 001c309c to 001c30cb has its CatchHandler @ 001c32fc */
    __money_put<char>::__gather_info
              ((bool)(param_4 & 1),bVar4,(locale *)&local_1b8,apStack_1a8,local_1bc,local_1c0,
               (basic_string_conflict *)&local_1d8,(basic_string_conflict *)&local_1f0,
               (basic_string_conflict *)&local_208,&local_20c);
    if (local_20c < (int)__size_00) {
      uVar9 = (ulong)((byte)local_208._0_1_ >> 1);
      if ((local_208 & 1) != 0) {
        uVar9 = local_200;
      }
      uVar10 = (ulong)((byte)local_1f0._0_1_ >> 1);
      if (((ulong)local_1f0 & 1) != 0) {
        uVar10 = local_1e8;
      }
      lVar11 = (__size_00 * 2 - (long)local_20c) + 1;
    }
    else {
      uVar9 = (ulong)((byte)local_208._0_1_ >> 1);
      if ((local_208 & 1) != 0) {
        uVar9 = local_200;
      }
      uVar10 = (ulong)((byte)local_1f0._0_1_ >> 1);
      if (((ulong)local_1f0 & 1) != 0) {
        uVar10 = local_1e8;
      }
      lVar11 = (long)local_20c + 2;
    }
    __size = lVar11 + uVar9 + uVar10;
    if (__size < 0x65) {
      unaff_x23 = (undefined **)0x0;
      ppuVar12 = &local_1a0;
    }
    else {
      unaff_x23 = (undefined **)malloc(__size);
      ppuVar12 = unaff_x23;
      if (unaff_x23 == (undefined **)0x0) goto LAB_001c32cc;
    }
                    /* try { // try from 001c3178 to 001c31d3 has its CatchHandler @ 001c331c */
    __money_put<char>::__format
              ((char *)ppuVar12,&pcStack_218,&local_220,*(uint *)(param_5 + 8),pcVar7,
               pcVar7 + __size_00,pcVar13,bVar4,apStack_1a8,local_1bc[0],local_1c0[0],
               (basic_string_conflict *)&local_1d8,(basic_string_conflict *)&local_1f0,
               (basic_string_conflict *)&local_208,local_20c);
    uVar8 = FUN_00190c20(param_3,ppuVar12,pcStack_218,local_220,param_5,param_6);
    if (unaff_x23 != (undefined **)0x0) {
      free(unaff_x23);
    }
    if ((local_208 & 1) != 0) {
      operator_delete(local_1f8);
    }
    if (((ulong)local_1f0 & 1) != 0) {
      operator_delete(local_1e0);
    }
    if (((ulong)local_1d8 & 1) != 0) {
      operator_delete(local_1c8);
    }
    __shared_count::__release_shared(local_1b8);
    if (local_230 != (char *)0x0) {
      free(local_230);
    }
    if (__ptr != (char *)0x0) {
      free(__ptr);
    }
    if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar8;
  }
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001c3290 to 001c32a3 has its CatchHandler @ 001c32d4 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
                    /* try { // try from 001c2f7c to 001c2f97 has its CatchHandler @ 001c32f0 */
  iVar6 = __libcpp_asprintf_l(&local_1b0,(__locale_t *)DAT_00214e98,"%.0Lf",param_1);
  __ptr = local_1b0;
  if (local_1b0 == (char *)0x0) {
                    /* try { // try from 001c32c0 to 001c32cb has its CatchHandler @ 001c32f0 */
    __throw_bad_alloc();
  }
  else {
    __size_00 = (size_t)iVar6;
    pcVar7 = (char *)malloc(__size_00);
    local_230 = pcVar7;
    if (pcVar7 != (char *)0x0) goto LAB_001c2fcc;
  }
  __throw_bad_alloc();
  local_230 = param_1;
LAB_001c32cc:
                    /* try { // try from 001c32cc to 001c32cf has its CatchHandler @ 001c32d0 */
  uVar8 = __throw_bad_alloc();
                    /* catch() { ... } // from try @ 001c32cc with catch @ 001c32d0 */
                    /* catch() { ... } // from try @ 001c3178 with catch @ 001c331c */
  if (unaff_x23 != (undefined **)0x0) {
    free(unaff_x23);
  }
  if ((local_208 & 1) != 0) {
    operator_delete(local_1f8);
  }
  if (((ulong)local_1f0 & 1) != 0) {
    operator_delete(local_1e0);
  }
  if (((ulong)local_1d8 & 1) != 0) {
    operator_delete(local_1c8);
  }
  __shared_count::__release_shared(local_1b8);
  if (local_230 != (char *)0x0) {
    free(local_230);
  }
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar8);
  }
  free(__ptr);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar8);
}


// ===== 001c33b0  FUN_001c33b0 =====

void FUN_001c33b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_6;
  uStack_88 = param_7;
  local_80 = param_8;
  uStack_78 = param_9;
  local_70 = (undefined1 *)register0x00000008;
  __vsnprintf_chk(param_2,100,0,param_3,"%.0Lf",&local_70,param_8,param_9,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c3454  std::__ndk1::__money_put<char>::__gather_info =====

/* std::__ndk1::__money_put<char>::__gather_info(bool, bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */

void std::__ndk1::__money_put<char>::__gather_info
               (bool param_1,bool param_2,locale *param_3,pattern *param_4,char *param_5,
               char *param_6,basic_string_conflict *param_7,basic_string_conflict *param_8,
               basic_string_conflict *param_9,int *param_10)

{
  long lVar1;
  ulong *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  ulong *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  ulong ***local_78;
  ulong **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)param_3;
  if (param_1) {
    lVar6 = *(long *)PTR_id_0020f968;
    puVar2 = (ulong *)PTR_id_0020f968;
  }
  else {
    lVar6 = *(long *)PTR_id_0020f970;
    puVar2 = (ulong *)PTR_id_0020f970;
  }
  puStack_88 = PTR___init_0020f928;
  local_80 = 0;
  local_90 = puVar2;
  if (lVar6 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    local_80 = 0;
    __call_once(puVar2,&local_78,FUN_001db064);
  }
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar7 = (long)(int)puVar2[1] - 1;
  if (((ulong)(*(long *)(lVar9 + 0x18) - lVar6 >> 3) <= uVar7) ||
     (plVar10 = *(long **)(lVar6 + uVar7 * 8), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0017cb1c();
  }
  if (param_2) {
    uVar4 = (**(code **)(*plVar10 + 0x58))(plVar10);
    *(undefined4 *)param_4 = uVar4;
    pcVar8 = *(code **)(*plVar10 + 0x40);
  }
  else {
    uVar4 = (**(code **)(*plVar10 + 0x50))(plVar10);
    *(undefined4 *)param_4 = uVar4;
    pcVar8 = *(code **)(*plVar10 + 0x38);
  }
  (*pcVar8)(&local_90,plVar10);
  if (((byte)*param_9 & 1) != 0) {
    operator_delete(*(void **)(param_9 + 0x10));
  }
  *(undefined8 *)(param_9 + 0x10) = local_80;
  *(undefined **)(param_9 + 8) = puStack_88;
  *(ulong **)param_9 = local_90;
  cVar3 = (**(code **)(*plVar10 + 0x18))(plVar10);
  *param_5 = cVar3;
  cVar3 = (**(code **)(*plVar10 + 0x20))(plVar10);
  *param_6 = cVar3;
  (**(code **)(*plVar10 + 0x28))(&local_90,plVar10);
  if (((byte)*param_7 & 1) != 0) {
    operator_delete(*(void **)(param_7 + 0x10));
  }
  *(undefined8 *)(param_7 + 0x10) = local_80;
  *(undefined **)(param_7 + 8) = puStack_88;
  *(ulong **)param_7 = local_90;
  (**(code **)(*plVar10 + 0x30))(&local_90,plVar10);
  if (((byte)*param_8 & 1) != 0) {
    operator_delete(*(void **)(param_8 + 0x10));
  }
  *(undefined8 *)(param_8 + 0x10) = local_80;
  *(undefined **)(param_8 + 8) = puStack_88;
  *(ulong **)param_8 = local_90;
  iVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
  *param_10 = iVar5;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c3698  std::__ndk1::__money_put<char>::__format =====

/* std::__ndk1::__money_put<char>::__format(char*, char*&, char*&, unsigned int, char const*, char
   const*, std::__ndk1::ctype<char> const&, bool, std::__ndk1::money_base::pattern const&, char,
   char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

void std::__ndk1::__money_put<char>::__format
               (char *param_1,char **param_2,char **param_3,uint param_4,char *param_5,char *param_6
               ,ctype *param_7,bool param_8,pattern *param_9,char param_10,char param_11,
               basic_string_conflict *param_12,basic_string_conflict *param_13,
               basic_string_conflict *param_14,int param_15)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  basic_string_conflict bVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  basic_string_conflict *pbVar8;
  ulong uVar9;
  basic_string_conflict *pbVar10;
  byte *pbVar11;
  basic_string_conflict *pbVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  size_t __n;
  byte *pbVar19;
  byte *pbVar20;
  
  pbVar12 = param_14 + 1;
  iVar5 = param_15 + -1;
  lVar15 = 0;
  bVar1 = iVar5 != 0 && 0 < param_15;
  *param_3 = param_1;
  do {
    switch(param_9[lVar15]) {
    case (pattern)0x0:
      *param_2 = *param_3;
      break;
    case (pattern)0x1:
      *param_2 = *param_3;
      cVar6 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x20);
      pcVar16 = *param_3;
      *param_3 = pcVar16 + 1;
      *pcVar16 = cVar6;
      break;
    case (pattern)0x2:
      bVar4 = *param_13;
      if (((byte)bVar4 & 1) == 0) {
        if (((param_4 >> 9 & 1) != 0) && (1 < (byte)bVar4)) {
          __n = (size_t)((byte)bVar4 >> 1);
          pcVar16 = *param_3;
          pbVar8 = param_13 + 1;
joined_r0x001c38ec:
          if (__n != 0) {
            memmove(pcVar16,pbVar8,__n);
          }
          *param_3 = pcVar16 + __n;
        }
      }
      else if (((param_4 >> 9 & 1) != 0) && (__n = *(size_t *)(param_13 + 8), __n != 0)) {
        pcVar16 = *param_3;
        pbVar8 = *(basic_string_conflict **)(param_13 + 0x10);
        goto joined_r0x001c38ec;
      }
      break;
    case (pattern)0x3:
      if (((byte)*param_14 & 1) == 0) {
        pbVar8 = pbVar12;
        if (1 < (byte)*param_14) {
LAB_001c3918:
          pbVar10 = (basic_string_conflict *)*param_3;
          bVar4 = *pbVar8;
          *param_3 = (char *)(pbVar10 + 1);
          *pbVar10 = bVar4;
        }
      }
      else if (*(long *)(param_14 + 8) != 0) {
        pbVar8 = *(basic_string_conflict **)(param_14 + 0x10);
        goto LAB_001c3918;
      }
      break;
    case (pattern)0x4:
      pbVar19 = (byte *)*param_3;
      if (param_8) {
        param_5 = (char *)((byte *)param_5 + 1);
      }
      pbVar14 = (byte *)param_5;
      if (param_5 < param_6) {
        pbVar20 = (byte *)param_5;
        do {
          pbVar14 = pbVar20;
          if (((char)*pbVar20 < '\0') ||
             (((uint)*(undefined8 *)(*(long *)(param_7 + 0x10) + (ulong)*pbVar20 * 8) >> 6 & 1) == 0
             )) break;
          pbVar20 = pbVar20 + 1;
          pbVar14 = (byte *)param_6;
        } while ((byte *)param_6 != pbVar20);
      }
      if (param_15 < 1) {
        if (pbVar14 == (byte *)param_5) goto LAB_001c393c;
LAB_001c3a0c:
        if (((byte)*param_12 & 1) == 0) {
          pbVar8 = param_12 + 1;
          if ((byte)*param_12 < 2) goto LAB_001c3a38;
LAB_001c3a30:
          uVar7 = (uint)(byte)*pbVar8;
        }
        else {
          if (*(long *)(param_12 + 8) != 0) {
            pbVar8 = *(basic_string_conflict **)(param_12 + 0x10);
            goto LAB_001c3a30;
          }
LAB_001c3a38:
          uVar7 = 0xffffffff;
        }
        uVar9 = 0;
        uVar13 = 0;
        do {
          if (uVar13 == uVar7) {
            pcVar16 = *param_3;
            uVar13 = (int)uVar9 + 1;
            uVar9 = (ulong)uVar13;
            *param_3 = pcVar16 + 1;
            *pcVar16 = param_11;
            if (((byte)*param_12 & 1) == 0) {
              if (uVar13 < (byte)*param_12 >> 1) {
                bVar4 = param_12[uVar9 + 1];
joined_r0x001c3ac4:
                uVar7 = (uint)(byte)bVar4;
                if (uVar7 == 0xff) {
                  uVar13 = 0;
                  uVar7 = 0xffffffff;
                  goto LAB_001c3a4c;
                }
              }
            }
            else if (uVar9 < *(ulong *)(param_12 + 8)) {
              bVar4 = *(basic_string_conflict *)(*(long *)(param_12 + 0x10) + uVar9);
              goto joined_r0x001c3ac4;
            }
            uVar13 = 0;
          }
LAB_001c3a4c:
          pbVar14 = pbVar14 + -1;
          bVar3 = *pbVar14;
          pbVar20 = (byte *)*param_3;
          uVar13 = uVar13 + 1;
          *param_3 = (char *)(pbVar20 + 1);
          *pbVar20 = bVar3;
        } while ((byte *)param_5 != pbVar14);
      }
      else {
        pbVar20 = pbVar14;
        iVar18 = param_15;
        if (param_5 < pbVar14) {
          pbVar20 = pbVar14 + -1;
          bVar3 = *pbVar20;
          *param_3 = (char *)(pbVar19 + 1);
          *pbVar19 = bVar3;
          iVar18 = iVar5;
          if (param_15 < 2) {
            if (bVar1) goto LAB_001c39a8;
          }
          else {
            bVar2 = bVar1;
            if (param_5 < pbVar20) {
              pbVar14 = pbVar14 + -2;
              iVar17 = iVar5;
              do {
                pbVar20 = pbVar14;
                pbVar14 = (byte *)*param_3;
                bVar3 = *pbVar20;
                iVar18 = iVar17 + -1;
                bVar2 = iVar18 != 0 && 0 < iVar17;
                *param_3 = (char *)(pbVar14 + 1);
                *pbVar14 = bVar3;
                if (iVar17 < 2) break;
                pbVar14 = pbVar20 + -1;
                iVar17 = iVar18;
              } while (param_5 < pbVar20);
            }
            if (bVar2) goto LAB_001c39a8;
          }
          cVar6 = '\0';
        }
        else {
LAB_001c39a8:
          cVar6 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x30);
        }
        pcVar16 = *param_3;
        *param_3 = pcVar16 + 1;
        if (0 < iVar18) {
          iVar18 = iVar18 + 1;
          do {
            *pcVar16 = cVar6;
            pcVar16 = *param_3;
            iVar18 = iVar18 + -1;
            *param_3 = pcVar16 + 1;
          } while (1 < iVar18);
        }
        *pcVar16 = param_10;
        pbVar14 = pbVar20;
        if (pbVar20 != (byte *)param_5) goto LAB_001c3a0c;
LAB_001c393c:
        cVar6 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x30);
        pcVar16 = *param_3;
        *param_3 = pcVar16 + 1;
        *pcVar16 = cVar6;
      }
      if ((pbVar19 != (byte *)*param_3) && (pbVar14 = (byte *)(*param_3 + -1), pbVar19 < pbVar14)) {
        do {
          pbVar11 = pbVar19 + 1;
          bVar3 = *pbVar19;
          *pbVar19 = *pbVar14;
          pbVar20 = pbVar14 + -1;
          *pbVar14 = bVar3;
          pbVar14 = pbVar20;
          pbVar19 = pbVar11;
        } while (pbVar11 < pbVar20);
      }
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
  bVar4 = *param_14;
  if (((byte)bVar4 & 1) == 0) {
    if ((byte)bVar4 < 4) goto LAB_001c3b40;
    pbVar8 = param_14 + 2;
    uVar9 = (ulong)((byte)bVar4 >> 1);
  }
  else {
    uVar9 = *(ulong *)(param_14 + 8);
    if (uVar9 < 2) goto LAB_001c3b40;
    pbVar12 = *(basic_string_conflict **)(param_14 + 0x10);
    pbVar8 = pbVar12 + 1;
  }
  pcVar16 = *param_3;
  pbVar12 = pbVar12 + (uVar9 - (long)pbVar8);
  if (pbVar12 != (basic_string_conflict *)0x0) {
    memmove(pcVar16,pbVar8,(size_t)pbVar12);
  }
  *param_3 = pcVar16 + (long)pbVar12;
LAB_001c3b40:
  if ((param_4 & 0xb0) != 0x10) {
    if ((param_4 & 0xb0) == 0x20) {
      param_1 = *param_3;
    }
    *param_2 = param_1;
  }
  return;
}


// ===== 001c3b8c  std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put =====

/* WARNING: Removing unreachable block (ram,0x001c3f40) */
/* WARNING: Removing unreachable block (ram,0x001c3f50) */
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined8 __thiscall
std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,undefined4 param_5,
      byte *param_6)

{
  size_t __size;
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  __shared_count *p_Var4;
  bool bVar5;
  byte bVar6;
  undefined **__ptr;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ctype *pcVar14;
  undefined **ppuVar15;
  char *local_150;
  char *pcStack_148;
  int local_13c;
  ulong local_138;
  ulong local_130;
  void *local_128;
  undefined ***local_120;
  ulong local_118;
  void *local_110;
  undefined **local_108;
  undefined8 uStack_100;
  void *local_f8;
  char local_f0 [4];
  char local_ec [4];
  __shared_count *local_e8;
  pattern apStack_e0 [8];
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  ios_base::getloc();
  p_Var4 = local_e8;
  puVar3 = PTR_id_0020f840;
  local_c8 = 0;
  local_d8 = PTR_id_0020f840;
  puStack_d0 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_108 = &local_d8;
    local_120 = &local_108;
                    /* try { // try from 001c3c10 to 001c3c27 has its CatchHandler @ 001c3ed0 */
    __call_once((ulong *)PTR_id_0020f840,&local_120,FUN_001db064);
  }
  lVar13 = *(long *)(p_Var4 + 0x10);
  if (((ulong)(*(long *)(p_Var4 + 0x18) - lVar13 >> 3) <= (long)*(int *)(puVar3 + 8) - 1U) ||
     (pcVar14 = *(ctype **)(lVar13 + ((long)*(int *)(puVar3 + 8) - 1U) * 8), pcVar14 == (ctype *)0x0
     )) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001c3eb8 to 001c3ebb has its CatchHandler @ 001c3ed0 */
    FUN_0017cb1c();
  }
  if ((*param_6 & 1) == 0) {
    if (*param_6 < 2) {
LAB_001c3c90:
      bVar5 = false;
      goto LAB_001c3c94;
    }
    pbVar9 = param_6 + 1;
  }
  else {
    if (*(long *)(param_6 + 8) == 0) goto LAB_001c3c90;
    pbVar9 = *(byte **)(param_6 + 0x10);
  }
  bVar1 = *pbVar9;
                    /* try { // try from 001c3c78 to 001c3c83 has its CatchHandler @ 001c3ec8 */
  bVar6 = (**(code **)(*(long *)pcVar14 + 0x38))(pcVar14,0x2d);
  bVar5 = bVar1 == bVar6;
LAB_001c3c94:
  local_108 = (undefined **)0x0;
  uStack_100 = 0;
  local_f8 = (void *)0x0;
  local_120 = (undefined ***)0x0;
  local_118 = 0;
  local_110 = (void *)0x0;
  local_138 = 0;
  local_130 = 0;
  local_128 = (void *)0x0;
                    /* try { // try from 001c3cac to 001c3cdb has its CatchHandler @ 001c3ed8 */
  __money_put<char>::__gather_info
            ((bool)(param_3 & 1),bVar5,(locale *)&local_e8,apStack_e0,local_ec,local_f0,
             (basic_string_conflict *)&local_108,(basic_string_conflict *)&local_120,
             (basic_string_conflict *)&local_138,&local_13c);
  bVar1 = *param_6;
  if ((bVar1 & 1) == 0) {
    uVar10 = (ulong)(bVar1 >> 1);
    uVar8 = (uint)(bVar1 >> 1);
  }
  else {
    uVar10 = *(ulong *)(param_6 + 8);
    uVar8 = (uint)uVar10;
  }
  if (local_13c < (int)uVar8) {
    uVar11 = (ulong)((byte)local_138._0_1_ >> 1);
    if ((local_138 & 1) != 0) {
      uVar11 = local_130;
    }
    uVar12 = (ulong)((byte)local_120._0_1_ >> 1);
    if (((ulong)local_120 & 1) != 0) {
      uVar12 = local_118;
    }
    lVar13 = (uVar10 * 2 - (long)local_13c) + 1;
  }
  else {
    uVar11 = (ulong)((byte)local_138._0_1_ >> 1);
    if ((local_138 & 1) != 0) {
      uVar11 = local_130;
    }
    uVar12 = (ulong)((byte)local_120._0_1_ >> 1);
    if (((ulong)local_120 & 1) != 0) {
      uVar12 = local_118;
    }
    lVar13 = (long)local_13c + 2;
  }
  __size = lVar13 + uVar11 + uVar12;
  if (__size < 0x65) {
    __ptr = (undefined **)0x0;
    ppuVar15 = &local_d8;
  }
  else {
    __ptr = (undefined **)malloc(__size);
    ppuVar15 = __ptr;
    if (__ptr == (undefined **)0x0) {
                    /* try { // try from 001c3ec0 to 001c3ec3 has its CatchHandler @ 001c3ec4 */
      uVar7 = __throw_bad_alloc();
                    /* catch() { ... } // from try @ 001c3dcc with catch @ 001c3f08 */
                    /* catch() { ... } // from try @ 001c3ec0 with catch @ 001c3ec4 */
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if (((ulong)local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      if (((ulong)local_108 & 1) != 0) {
        operator_delete(local_f8);
      }
      __shared_count::__release_shared(local_e8);
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar7);
    }
  }
  uVar10 = *(ulong *)(param_6 + 8);
  pbVar9 = *(byte **)(param_6 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar9 = param_6 + 1;
    uVar10 = (ulong)(bVar1 >> 1);
  }
                    /* try { // try from 001c3dcc to 001c3e23 has its CatchHandler @ 001c3f08 */
  __money_put<char>::__format
            ((char *)ppuVar15,&pcStack_148,&local_150,*(uint *)(param_4 + 8),(char *)pbVar9,
             (char *)(pbVar9 + uVar10),pcVar14,bVar5,apStack_e0,local_ec[0],local_f0[0],
             (basic_string_conflict *)&local_108,(basic_string_conflict *)&local_120,
             (basic_string_conflict *)&local_138,local_13c);
  uVar7 = FUN_00190c20(param_2,ppuVar15,pcStack_148,local_150,param_4,param_5);
  if (__ptr != (undefined **)0x0) {
    free(__ptr);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if (((ulong)local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if (((ulong)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  __shared_count::__release_shared(local_e8);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


// ===== 001c3f54  std::__ndk1::money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t, long double) const */

undefined8 __thiscall
std::__ndk1::
money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(char *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
      undefined4 param_6)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *p_Var3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined **__ptr;
  ctype *pcVar13;
  wchar_t *__ptr_00;
  undefined **ppuVar14;
  wchar_t *local_498;
  char *local_490;
  wchar_t *local_478;
  wchar_t *pwStack_470;
  int local_464;
  ulong local_460;
  ulong local_458;
  void *local_450;
  undefined ***local_448;
  ulong local_440;
  void *local_438;
  undefined **local_430;
  undefined8 uStack_428;
  void *local_420;
  wchar_t local_418;
  wchar_t wStack_414;
  __shared_count *local_410;
  char *local_408;
  pattern apStack_400 [8];
  undefined *local_3f8;
  undefined *puStack_3f0;
  undefined8 local_3e8;
  wchar_t awStack_264 [100];
  char local_d4 [100];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_408 = local_d4;
  __ptr = (undefined **)(param_4 & 0xffffffff);
  uVar5 = FUN_001c33b0(local_d4,100);
  if (uVar5 < 100) {
    local_490 = (char *)0x0;
    pwVar7 = awStack_264;
    lVar12 = (long)(int)uVar5;
    __ptr_00 = (wchar_t *)0x0;
LAB_001c4018:
                    /* try { // try from 001c4018 to 001c4027 has its CatchHandler @ 001c4358 */
    ios_base::getloc();
    p_Var3 = local_410;
    puVar2 = PTR_id_0020f8b8;
    local_3e8 = 0;
    local_3f8 = PTR_id_0020f8b8;
    puStack_3f0 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020f8b8 != -1) {
      local_430 = &local_3f8;
      local_448 = &local_430;
                    /* try { // try from 001c4060 to 001c40b3 has its CatchHandler @ 001c4360 */
      __call_once((ulong *)PTR_id_0020f8b8,&local_448,FUN_001db064);
    }
    lVar11 = *(long *)(p_Var3 + 0x10);
    if (((ulong)(*(long *)(p_Var3 + 0x18) - lVar11 >> 3) <= (long)*(int *)(puVar2 + 8) - 1U) ||
       (pcVar13 = *(ctype **)(lVar11 + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
       pcVar13 == (ctype *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001c4308 to 001c430b has its CatchHandler @ 001c4360 */
      FUN_0017cb1c();
    }
    (**(code **)(*(long *)pcVar13 + 0x60))(pcVar13,local_408,local_408 + lVar12,pwVar7);
    if (lVar12 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *local_408 == '-';
    }
    local_430 = (undefined **)0x0;
    uStack_428 = 0;
    local_420 = (void *)0x0;
    local_448 = (undefined ***)0x0;
    local_440 = 0;
    local_438 = (void *)0x0;
    local_460 = 0;
    local_458 = 0;
    local_450 = (void *)0x0;
                    /* try { // try from 001c40e8 to 001c4117 has its CatchHandler @ 001c4348 */
    __money_put<wchar_t>::__gather_info
              ((bool)((byte)param_4 & 1),bVar4,(locale *)&local_410,apStack_400,&wStack_414,
               &local_418,(basic_string_conflict *)&local_430,(basic_string_conflict *)&local_448,
               (basic_string_conflict *)&local_460,&local_464);
    if (local_464 < (int)lVar12) {
      uVar9 = (ulong)((byte)local_460._0_1_ >> 1);
      if ((local_460 & 1) != 0) {
        uVar9 = local_458;
      }
      uVar10 = (ulong)((byte)local_448._0_1_ >> 1);
      if (((ulong)local_448 & 1) != 0) {
        uVar10 = local_440;
      }
      lVar11 = (lVar12 * 2 - (long)local_464) + 1;
    }
    else {
      uVar9 = (ulong)((byte)local_460._0_1_ >> 1);
      if ((local_460 & 1) != 0) {
        uVar9 = local_458;
      }
      uVar10 = (ulong)((byte)local_448._0_1_ >> 1);
      if (((ulong)local_448 & 1) != 0) {
        uVar10 = local_440;
      }
      lVar11 = (long)local_464 + 2;
    }
    uVar10 = lVar11 + uVar9 + uVar10;
    if (uVar10 < 0x65) {
      __ptr = (undefined **)0x0;
      ppuVar14 = &local_3f8;
    }
    else {
      __ptr = (undefined **)malloc(uVar10 * 4);
      ppuVar14 = __ptr;
      local_498 = __ptr_00;
      if (__ptr == (undefined **)0x0) goto LAB_001c431c;
    }
                    /* try { // try from 001c41c8 to 001c4223 has its CatchHandler @ 001c4368 */
    __money_put<wchar_t>::__format
              ((wchar_t *)ppuVar14,&pwStack_470,&local_478,*(uint *)(param_5 + 8),pwVar7,
               pwVar7 + lVar12,pcVar13,bVar4,apStack_400,wStack_414,local_418,
               (basic_string_conflict *)&local_430,(basic_string_conflict *)&local_448,
               (basic_string_conflict *)&local_460,local_464);
    uVar8 = FUN_001b94c8(param_3,ppuVar14,pwStack_470,local_478,param_5,param_6);
    if (__ptr != (undefined **)0x0) {
      free(__ptr);
    }
    if ((local_460 & 1) != 0) {
      operator_delete(local_450);
    }
    if (((ulong)local_448 & 1) != 0) {
      operator_delete(local_438);
    }
    if (((ulong)local_430 & 1) != 0) {
      operator_delete(local_420);
    }
    __shared_count::__release_shared(local_410);
    if (__ptr_00 != (wchar_t *)0x0) {
      free(__ptr_00);
    }
    if (local_490 != (char *)0x0) {
      free(local_490);
    }
    if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar8;
  }
  if (((DAT_00214ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00214ea0), iVar6 != 0)) {
                    /* try { // try from 001c42e0 to 001c42f3 has its CatchHandler @ 001c4324 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
                    /* try { // try from 001c3fc8 to 001c3fe3 has its CatchHandler @ 001c433c */
  iVar6 = __libcpp_asprintf_l(&local_408,(__locale_t *)DAT_00214e98,"%.0Lf",param_1);
  local_490 = local_408;
  if (local_408 == (char *)0x0) {
                    /* try { // try from 001c4310 to 001c431b has its CatchHandler @ 001c433c */
    __throw_bad_alloc();
  }
  else {
    lVar12 = (long)iVar6;
    pwVar7 = (wchar_t *)malloc(lVar12 << 2);
    __ptr_00 = pwVar7;
    if (pwVar7 != (wchar_t *)0x0) goto LAB_001c4018;
  }
  __throw_bad_alloc();
  local_490 = param_1;
LAB_001c431c:
                    /* try { // try from 001c431c to 001c431f has its CatchHandler @ 001c4320 */
  uVar8 = __throw_bad_alloc();
                    /* catch() { ... } // from try @ 001c431c with catch @ 001c4320 */
                    /* catch() { ... } // from try @ 001c41c8 with catch @ 001c4368 */
  if (__ptr != (undefined **)0x0) {
    free(__ptr);
  }
  if ((local_460 & 1) != 0) {
    operator_delete(local_450);
  }
  if (((ulong)local_448 & 1) != 0) {
    operator_delete(local_438);
  }
  if (((ulong)local_430 & 1) != 0) {
    operator_delete(local_420);
  }
  __shared_count::__release_shared(local_410);
  if (local_498 != (wchar_t *)0x0) {
    free(local_498);
  }
  if (local_490 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar8);
  }
  free(local_490);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar8);
}


// ===== 001c4404  std::__ndk1::__money_put<wchar_t>::__gather_info =====

/* std::__ndk1::__money_put<wchar_t>::__gather_info(bool, bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, int&) */

void std::__ndk1::__money_put<wchar_t>::__gather_info
               (bool param_1,bool param_2,locale *param_3,pattern *param_4,wchar_t *param_5,
               wchar_t *param_6,basic_string_conflict *param_7,basic_string_conflict *param_8,
               basic_string_conflict *param_9,int *param_10)

{
  long lVar1;
  ulong *puVar2;
  undefined4 uVar3;
  wchar_t wVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  ulong *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  ulong ***local_78;
  ulong **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)param_3;
  if (param_1) {
    lVar6 = *(long *)PTR_id_0020f978;
    puVar2 = (ulong *)PTR_id_0020f978;
  }
  else {
    lVar6 = *(long *)PTR_id_0020f980;
    puVar2 = (ulong *)PTR_id_0020f980;
  }
  puStack_88 = PTR___init_0020f928;
  local_80 = 0;
  local_90 = puVar2;
  if (lVar6 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    local_80 = 0;
    __call_once(puVar2,&local_78,FUN_001db064);
  }
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar7 = (long)(int)puVar2[1] - 1;
  if (((ulong)(*(long *)(lVar9 + 0x18) - lVar6 >> 3) <= uVar7) ||
     (plVar10 = *(long **)(lVar6 + uVar7 * 8), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0017cb1c();
  }
  if (param_2) {
    uVar3 = (**(code **)(*plVar10 + 0x58))(plVar10);
    *(undefined4 *)param_4 = uVar3;
    pcVar8 = *(code **)(*plVar10 + 0x40);
  }
  else {
    uVar3 = (**(code **)(*plVar10 + 0x50))(plVar10);
    *(undefined4 *)param_4 = uVar3;
    pcVar8 = *(code **)(*plVar10 + 0x38);
  }
  (*pcVar8)(&local_90,plVar10);
  if (((byte)*param_9 & 1) != 0) {
    operator_delete(*(void **)(param_9 + 0x10));
  }
  *(undefined8 *)(param_9 + 0x10) = local_80;
  *(undefined **)(param_9 + 8) = puStack_88;
  *(ulong **)param_9 = local_90;
  wVar4 = (**(code **)(*plVar10 + 0x18))(plVar10);
  *param_5 = wVar4;
  wVar4 = (**(code **)(*plVar10 + 0x20))(plVar10);
  *param_6 = wVar4;
  (**(code **)(*plVar10 + 0x28))(&local_90,plVar10);
  if (((byte)*param_7 & 1) != 0) {
    operator_delete(*(void **)(param_7 + 0x10));
  }
  *(undefined8 *)(param_7 + 0x10) = local_80;
  *(undefined **)(param_7 + 8) = puStack_88;
  *(ulong **)param_7 = local_90;
  (**(code **)(*plVar10 + 0x30))(&local_90,plVar10);
  if (((byte)*param_8 & 1) != 0) {
    operator_delete(*(void **)(param_8 + 0x10));
  }
  *(undefined8 *)(param_8 + 0x10) = local_80;
  *(undefined **)(param_8 + 8) = puStack_88;
  *(ulong **)param_8 = local_90;
  iVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
  *param_10 = iVar5;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c4648  std::__ndk1::__money_put<wchar_t>::__format =====

/* std::__ndk1::__money_put<wchar_t>::__format(wchar_t*, wchar_t*&, wchar_t*&, unsigned int, wchar_t
   const*, wchar_t const*, std::__ndk1::ctype<wchar_t> const&, bool,
   std::__ndk1::money_base::pattern const&, wchar_t, wchar_t, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, int) */

void std::__ndk1::__money_put<wchar_t>::__format
               (wchar_t *param_1,wchar_t **param_2,wchar_t **param_3,uint param_4,wchar_t *param_5,
               wchar_t *param_6,ctype *param_7,bool param_8,pattern *param_9,wchar_t param_10,
               wchar_t param_11,basic_string_conflict *param_12,basic_string_conflict *param_13,
               basic_string_conflict *param_14,int param_15)

{
  basic_string_conflict bVar1;
  size_t __n;
  wchar_t wVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  basic_string_conflict *pbVar6;
  ulong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  wchar_t *pwVar14;
  int iVar15;
  int iVar16;
  basic_string_conflict *local_a0;
  
  lVar13 = 0;
  *param_3 = param_1;
  local_a0 = param_14 + 4;
  do {
    switch(param_9[lVar13]) {
    case (pattern)0x0:
      *param_2 = *param_3;
      break;
    case (pattern)0x1:
      *param_2 = *param_3;
      wVar2 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x20);
      pwVar14 = *param_3;
      *param_3 = pwVar14 + 1;
      *pwVar14 = wVar2;
      break;
    case (pattern)0x2:
      bVar1 = *param_13;
      if (((byte)bVar1 & 1) == 0) {
        if (((param_4 >> 9 & 1) != 0) && (1 < (byte)bVar1)) {
          uVar7 = (ulong)((byte)bVar1 >> 1);
          pbVar6 = param_13 + 4;
LAB_001c4844:
          pwVar14 = *param_3;
          if (uVar7 * 4 != 0) {
            memmove(pwVar14,pbVar6,uVar7 * 4);
          }
          *param_3 = pwVar14 + uVar7;
        }
      }
      else if (((param_4 >> 9 & 1) != 0) && (uVar7 = *(ulong *)(param_13 + 8), uVar7 != 0)) {
        pbVar6 = *(basic_string_conflict **)(param_13 + 0x10);
        goto LAB_001c4844;
      }
      break;
    case (pattern)0x3:
      if (((byte)*param_14 & 1) == 0) {
        pbVar6 = local_a0;
        if (1 < (byte)*param_14) {
LAB_001c488c:
          pwVar14 = *param_3;
          wVar2 = *(wchar_t *)pbVar6;
          *param_3 = pwVar14 + 1;
          *pwVar14 = wVar2;
        }
      }
      else if (*(long *)(param_14 + 8) != 0) {
        pbVar6 = *(basic_string_conflict **)(param_14 + 0x10);
        goto LAB_001c488c;
      }
      break;
    case (pattern)0x4:
      pwVar4 = *param_3;
      pwVar14 = param_5 + 1;
      pwVar5 = param_5 + 1;
      if (!param_8) {
        pwVar14 = param_5;
        pwVar5 = param_5;
      }
      while ((param_5 = pwVar5, pwVar14 < param_6 &&
             (uVar7 = (**(code **)(*(long *)param_7 + 0x18))(param_7,0x40,*pwVar14),
             (uVar7 & 1) != 0))) {
        pwVar14 = pwVar14 + 1;
        pwVar5 = param_5;
      }
      if (0 < param_15) {
        iVar16 = param_15;
        if (param_5 < pwVar14) {
          pwVar5 = *param_3;
          do {
            iVar15 = iVar16;
            pwVar14 = pwVar14 + -1;
            iVar16 = iVar15 + -1;
            pwVar8 = pwVar5 + 1;
            *pwVar5 = *pwVar14;
            if (iVar15 < 2) break;
            pwVar5 = pwVar8;
          } while (param_5 < pwVar14);
          *param_3 = pwVar8;
          if (1 < iVar15) goto LAB_001c48a8;
          wVar2 = L'\0';
        }
        else {
LAB_001c48a8:
          wVar2 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x30);
        }
        pwVar8 = *param_3;
        pwVar5 = pwVar8 + 1;
        *param_3 = pwVar5;
        if (0 < iVar16) {
          pwVar9 = pwVar8;
          if (iVar16 - 1U < 7) {
LAB_001c492c:
            iVar16 = iVar16 + 1;
            do {
              pwVar8 = pwVar5;
              iVar16 = iVar16 + -1;
              *pwVar9 = wVar2;
              pwVar5 = pwVar8 + 1;
              pwVar9 = pwVar8;
            } while (1 < iVar16);
          }
          else {
            uVar7 = (ulong)(iVar16 - 1U) + 1;
            uVar11 = uVar7 & 0x1fffffff8;
            iVar16 = iVar16 - (int)uVar11;
            pwVar5 = pwVar5 + uVar11;
            pwVar9 = pwVar8 + 4;
            uVar12 = uVar11;
            do {
              *(ulong *)(pwVar9 + -2) = CONCAT44(wVar2,wVar2);
              *(ulong *)(pwVar9 + -4) = CONCAT44(wVar2,wVar2);
              *(ulong *)(pwVar9 + 2) = CONCAT44(wVar2,wVar2);
              *(ulong *)pwVar9 = CONCAT44(wVar2,wVar2);
              uVar12 = uVar12 - 8;
              pwVar9 = pwVar9 + 8;
            } while (uVar12 != 0);
            pwVar9 = pwVar8 + uVar11;
            if (uVar7 != uVar11) goto LAB_001c492c;
            pwVar8 = pwVar8 + uVar11;
          }
          *param_3 = pwVar5;
        }
        *pwVar8 = param_10;
      }
      if (pwVar14 == param_5) {
        wVar2 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x30);
        pwVar14 = *param_3;
        pwVar5 = pwVar14 + 1;
        *param_3 = pwVar5;
        *pwVar14 = wVar2;
      }
      else {
        if (((byte)*param_12 & 1) == 0) {
          pbVar6 = param_12 + 1;
          if (1 < (byte)*param_12) goto LAB_001c4a10;
LAB_001c4a18:
          uVar3 = 0xffffffff;
        }
        else {
          if (*(long *)(param_12 + 8) == 0) goto LAB_001c4a18;
          pbVar6 = *(basic_string_conflict **)(param_12 + 0x10);
LAB_001c4a10:
          uVar3 = (uint)(byte)*pbVar6;
        }
        uVar7 = 0;
        uVar10 = 0;
        do {
          pwVar8 = *param_3;
          if (uVar10 == uVar3) {
            pwVar5 = pwVar8 + 1;
            *param_3 = pwVar5;
            *pwVar8 = param_11;
            uVar10 = (int)uVar7 + 1;
            uVar7 = (ulong)uVar10;
            pwVar8 = pwVar5;
            if (((byte)*param_12 & 1) == 0) {
              if (uVar10 < (byte)*param_12 >> 1) {
                bVar1 = param_12[uVar7 + 1];
joined_r0x001c4aa0:
                uVar3 = (uint)(byte)bVar1;
                if (uVar3 == 0xff) {
                  uVar10 = 0;
                  uVar3 = 0xffffffff;
                  goto LAB_001c4a2c;
                }
              }
            }
            else if (uVar7 < *(ulong *)(param_12 + 8)) {
              bVar1 = *(basic_string_conflict *)(*(long *)(param_12 + 0x10) + uVar7);
              goto joined_r0x001c4aa0;
            }
            uVar10 = 0;
          }
LAB_001c4a2c:
          pwVar14 = pwVar14 + -1;
          wVar2 = *pwVar14;
          pwVar5 = pwVar8 + 1;
          uVar10 = uVar10 + 1;
          *param_3 = pwVar5;
          *pwVar8 = wVar2;
        } while (param_5 != pwVar14);
      }
      if ((pwVar4 != pwVar5) && (pwVar5 = pwVar5 + -1, pwVar4 < pwVar5)) {
        do {
          pwVar8 = pwVar4 + 1;
          wVar2 = *pwVar4;
          *pwVar4 = *pwVar5;
          pwVar14 = pwVar5 + -1;
          *pwVar5 = wVar2;
          pwVar5 = pwVar14;
          pwVar4 = pwVar8;
        } while (pwVar8 < pwVar14);
      }
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 4);
  bVar1 = *param_14;
  if (((byte)bVar1 & 1) == 0) {
    if ((byte)bVar1 < 4) goto LAB_001c4b10;
    uVar7 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_14 + 8);
    if (uVar7 < 2) goto LAB_001c4b10;
    local_a0 = *(basic_string_conflict **)(param_14 + 0x10);
  }
  pwVar14 = *param_3;
  __n = uVar7 * 4 - 4;
  if (__n != 0) {
    memmove(pwVar14,local_a0 + 4,__n);
  }
  *param_3 = pwVar14 + (uVar7 - 1);
LAB_001c4b10:
  if ((param_4 & 0xb0) != 0x10) {
    if ((param_4 & 0xb0) == 0x20) {
      param_1 = *param_3;
    }
    *param_2 = param_1;
  }
  return;
}


// ===== 001c4b5c  std::__ndk1::money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put =====

/* WARNING: Removing unreachable block (ram,0x001c4f14) */
/* WARNING: Removing unreachable block (ram,0x001c4f24) */
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&) const */

undefined8 __thiscall
std::__ndk1::
money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,undefined4 param_5,
      byte *param_6)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  wchar_t *pwVar4;
  undefined *puVar5;
  __shared_count *p_Var6;
  bool bVar7;
  int iVar8;
  undefined **__ptr;
  undefined8 uVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ctype *pcVar16;
  undefined **ppuVar17;
  wchar_t *local_278;
  wchar_t *pwStack_270;
  int local_264;
  ulong local_260;
  ulong local_258;
  void *local_250;
  undefined ***local_248;
  ulong local_240;
  void *local_238;
  undefined **local_230;
  undefined8 uStack_228;
  void *local_220;
  wchar_t local_218;
  wchar_t wStack_214;
  __shared_count *local_210;
  pattern apStack_208 [8];
  undefined *local_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  ios_base::getloc();
  p_Var6 = local_210;
  puVar5 = PTR_id_0020f8b8;
  local_1f0 = 0;
  local_200 = PTR_id_0020f8b8;
  puStack_1f8 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_230 = &local_200;
    local_248 = &local_230;
                    /* try { // try from 001c4be0 to 001c4bf7 has its CatchHandler @ 001c4ea4 */
    __call_once((ulong *)PTR_id_0020f8b8,&local_248,FUN_001db064);
  }
  lVar15 = *(long *)(p_Var6 + 0x10);
  if (((ulong)(*(long *)(p_Var6 + 0x18) - lVar15 >> 3) <= (long)*(int *)(puVar5 + 8) - 1U) ||
     (pcVar16 = *(ctype **)(lVar15 + ((long)*(int *)(puVar5 + 8) - 1U) * 8), pcVar16 == (ctype *)0x0
     )) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001c4e8c to 001c4e8f has its CatchHandler @ 001c4ea4 */
    FUN_0017cb1c();
  }
  if ((*param_6 & 1) == 0) {
    if (*param_6 < 2) {
LAB_001c4c60:
      bVar7 = false;
      goto LAB_001c4c64;
    }
    pbVar11 = param_6 + 4;
  }
  else {
    if (*(long *)(param_6 + 8) == 0) goto LAB_001c4c60;
    pbVar11 = *(byte **)(param_6 + 0x10);
  }
  iVar1 = *(int *)pbVar11;
                    /* try { // try from 001c4c48 to 001c4c53 has its CatchHandler @ 001c4e9c */
  iVar8 = (**(code **)(*(long *)pcVar16 + 0x58))(pcVar16,0x2d);
  bVar7 = iVar1 == iVar8;
LAB_001c4c64:
  local_230 = (undefined **)0x0;
  uStack_228 = 0;
  local_220 = (void *)0x0;
  local_248 = (undefined ***)0x0;
  local_240 = 0;
  local_238 = (void *)0x0;
  local_260 = 0;
  local_258 = 0;
  local_250 = (void *)0x0;
                    /* try { // try from 001c4c7c to 001c4cab has its CatchHandler @ 001c4eac */
  __money_put<wchar_t>::__gather_info
            ((bool)(param_3 & 1),bVar7,(locale *)&local_210,apStack_208,&wStack_214,&local_218,
             (basic_string_conflict *)&local_230,(basic_string_conflict *)&local_248,
             (basic_string_conflict *)&local_260,&local_264);
  bVar2 = *param_6;
  if ((bVar2 & 1) == 0) {
    uVar12 = (ulong)(bVar2 >> 1);
    uVar10 = (uint)(bVar2 >> 1);
  }
  else {
    uVar12 = *(ulong *)(param_6 + 8);
    uVar10 = (uint)uVar12;
  }
  if (local_264 < (int)uVar10) {
    uVar13 = (ulong)((byte)local_260._0_1_ >> 1);
    if ((local_260 & 1) != 0) {
      uVar13 = local_258;
    }
    uVar14 = (ulong)((byte)local_248._0_1_ >> 1);
    if (((ulong)local_248 & 1) != 0) {
      uVar14 = local_240;
    }
    lVar15 = (uVar12 * 2 - (long)local_264) + 1;
  }
  else {
    uVar13 = (ulong)((byte)local_260._0_1_ >> 1);
    if ((local_260 & 1) != 0) {
      uVar13 = local_258;
    }
    uVar14 = (ulong)((byte)local_248._0_1_ >> 1);
    if (((ulong)local_248 & 1) != 0) {
      uVar14 = local_240;
    }
    lVar15 = (long)local_264 + 2;
  }
  uVar14 = lVar15 + uVar13 + uVar14;
  if (uVar14 < 0x65) {
    __ptr = (undefined **)0x0;
    ppuVar17 = &local_200;
  }
  else {
    __ptr = (undefined **)malloc(uVar14 * 4);
    ppuVar17 = __ptr;
    if (__ptr == (undefined **)0x0) {
                    /* try { // try from 001c4e94 to 001c4e97 has its CatchHandler @ 001c4e98 */
      uVar9 = __throw_bad_alloc();
                    /* catch() { ... } // from try @ 001c4da0 with catch @ 001c4edc */
                    /* catch() { ... } // from try @ 001c4e94 with catch @ 001c4e98 */
      if ((local_260 & 1) != 0) {
        operator_delete(local_250);
      }
      if (((ulong)local_248 & 1) != 0) {
        operator_delete(local_238);
      }
      if (((ulong)local_230 & 1) != 0) {
        operator_delete(local_220);
      }
      __shared_count::__release_shared(local_210);
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar9);
    }
  }
  uVar12 = (ulong)(bVar2 >> 1);
  pwVar4 = (wchar_t *)(param_6 + 4);
  if ((bVar2 & 1) != 0) {
    uVar12 = *(ulong *)(param_6 + 8);
    pwVar4 = *(wchar_t **)(param_6 + 0x10);
  }
                    /* try { // try from 001c4da0 to 001c4df7 has its CatchHandler @ 001c4edc */
  __money_put<wchar_t>::__format
            ((wchar_t *)ppuVar17,&pwStack_270,&local_278,*(uint *)(param_4 + 8),pwVar4,
             pwVar4 + uVar12,pcVar16,bVar7,apStack_208,wStack_214,local_218,
             (basic_string_conflict *)&local_230,(basic_string_conflict *)&local_248,
             (basic_string_conflict *)&local_260,local_264);
  uVar9 = FUN_001b94c8(param_2,ppuVar17,pwStack_270,local_278,param_4,param_5);
  if (__ptr != (undefined **)0x0) {
    free(__ptr);
  }
  if ((local_260 & 1) != 0) {
    operator_delete(local_250);
  }
  if (((ulong)local_248 & 1) != 0) {
    operator_delete(local_238);
  }
  if (((ulong)local_230 & 1) != 0) {
    operator_delete(local_220);
  }
  __shared_count::__release_shared(local_210);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


// ===== 001c4f28  std::__ndk1::messages<char>::do_open =====

/* std::__ndk1::messages<char>::do_open(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::locale
   const&) const */

undefined8 std::__ndk1::messages<char>::do_open(basic_string_conflict *param_1,locale *param_2)

{
  return 0xffffffffffffffff;
}


// ===== 001c4f30  std::__ndk1::messages<char>::do_get =====

/* std::__ndk1::messages<char>::do_get(long, int, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void std::__ndk1::messages<char>::do_get
               (long param_1,int param_2,int param_3,basic_string_conflict *param_4)

{
  basic_string_conflict *in_x4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,in_x4);
  return;
}


// ===== 001c4f3c  std::__ndk1::messages<char>::do_close =====

/* std::__ndk1::messages<char>::do_close(long) const */

void std::__ndk1::messages<char>::do_close(long param_1)

{
  return;
}


// ===== 001c4f40  std::__ndk1::messages<wchar_t>::do_open =====

/* std::__ndk1::messages<wchar_t>::do_open(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::locale
   const&) const */

undefined8 std::__ndk1::messages<wchar_t>::do_open(basic_string_conflict *param_1,locale *param_2)

{
  return 0xffffffffffffffff;
}


// ===== 001c4f48  std::__ndk1::messages<wchar_t>::do_get =====

/* std::__ndk1::messages<wchar_t>::do_get(long, int, int, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) const */

void std::__ndk1::messages<wchar_t>::do_get
               (long param_1,int param_2,int param_3,basic_string_conflict *param_4)

{
  basic_string_conflict *in_x4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string(in_x8,in_x4);
  return;
}


// ===== 001c4f54  std::__ndk1::messages<wchar_t>::do_close =====

/* std::__ndk1::messages<wchar_t>::do_close(long) const */

void std::__ndk1::messages<wchar_t>::do_close(long param_1)

{
  return;
}


// ===== 001c4f58  std::__ndk1::codecvt_byname<char,char,mbstate_t>::~codecvt_byname =====

/* std::__ndk1::codecvt_byname<char, char, mbstate_t>::~codecvt_byname() */

void __thiscall
std::__ndk1::codecvt_byname<char,char,mbstate_t>::~codecvt_byname
          (codecvt_byname<char,char,mbstate_t> *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 001c4f5c  std::__ndk1::codecvt_byname<char,char,mbstate_t>::~codecvt_byname =====

/* std::__ndk1::codecvt_byname<char, char, mbstate_t>::~codecvt_byname() */

void __thiscall
std::__ndk1::codecvt_byname<char,char,mbstate_t>::~codecvt_byname
          (codecvt_byname<char,char,mbstate_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001c4f80  std::__ndk1::codecvt_byname<wchar_t,char,mbstate_t>::~codecvt_byname =====

/* std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t>::~codecvt_byname() */

void __thiscall
std::__ndk1::codecvt_byname<wchar_t,char,mbstate_t>::~codecvt_byname
          (codecvt_byname<wchar_t,char,mbstate_t> *this)

{
  (*(code *)PTR__codecvt_00210460)();
  return;
}


// ===== 001c4f84  std::__ndk1::codecvt_byname<wchar_t,char,mbstate_t>::~codecvt_byname =====

/* std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t>::~codecvt_byname() */

void __thiscall
std::__ndk1::codecvt_byname<wchar_t,char,mbstate_t>::~codecvt_byname
          (codecvt_byname<wchar_t,char,mbstate_t> *this)

{
  codecvt<wchar_t,char,mbstate_t>::~codecvt((codecvt<wchar_t,char,mbstate_t> *)this);
  operator_delete(this);
  return;
}


// ===== 001c4fa8  std::__ndk1::codecvt_byname<char16_t,char,mbstate_t>::~codecvt_byname =====

/* std::__ndk1::codecvt_byname<char16_t, char, mbstate_t>::~codecvt_byname() */

void __thiscall
std::__ndk1::codecvt_byname<char16_t,char,mbstate_t>::~codecvt_byname
          (codecvt_byname<char16_t,char,mbstate_t> *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 001c4fac  std::__ndk1::codecvt_byname<char16_t,char,mbstate_t>::~codecvt_byname =====

/* std::__ndk1::codecvt_byname<char16_t, char, mbstate_t>::~codecvt_byname() */

void __thiscall
std::__ndk1::codecvt_byname<char16_t,char,mbstate_t>::~codecvt_byname
          (codecvt_byname<char16_t,char,mbstate_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001c4fd0  std::__ndk1::codecvt_byname<char32_t,char,mbstate_t>::~codecvt_byname =====

/* std::__ndk1::codecvt_byname<char32_t, char, mbstate_t>::~codecvt_byname() */

void __thiscall
std::__ndk1::codecvt_byname<char32_t,char,mbstate_t>::~codecvt_byname
          (codecvt_byname<char32_t,char,mbstate_t> *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 001c4fd4  std::__ndk1::codecvt_byname<char32_t,char,mbstate_t>::~codecvt_byname =====

/* std::__ndk1::codecvt_byname<char32_t, char, mbstate_t>::~codecvt_byname() */

void __thiscall
std::__ndk1::codecvt_byname<char32_t,char,mbstate_t>::~codecvt_byname
          (codecvt_byname<char32_t,char,mbstate_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001c4ff8  FUN_001c4ff8 =====

void FUN_001c4ff8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  __shared_count *p_Var6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00209c90;
  param_1[1] = param_2 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar10 = param_1 + 2;
  *plVar10 = (long)(param_1 + 6);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[4] = param_1 + 0x22;
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
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  plVar12 = param_1 + 3;
  *plVar12 = *plVar10;
  puVar3 = PTR_vtable_0020f988;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  puVar2 = PTR_id_0020f990;
  DAT_00215870 = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar3 = PTR___init_0020f928;
  DAT_00215878 = 0;
  local_80 = 0;
  local_90 = puVar2;
  puStack_88 = PTR___init_0020f928;
  if (*(long *)puVar2 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c50dc to 001c50f3 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f990,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215870);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5130 to 001c5137 has its CatchHandler @ 001c6a14 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215870;
  puVar2 = PTR_id_0020f9a0;
  DAT_00215880 = PTR_vtable_0020f998 + 0x10;
  local_90 = PTR_id_0020f9a0;
  puStack_88 = puVar3;
  DAT_00215888 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f9a0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c51a0 to 001c51b7 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f9a0,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215880);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c51f4 to 001c51fb has its CatchHandler @ 001c6a00 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215880;
  puVar2 = PTR_id_0020f840;
  DAT_002158a0 = &DAT_001479e8;
  DAT_00215890 = PTR_vtable_0020f9a8 + 0x10;
  DAT_002158a8 = 0;
  DAT_00215898 = 0;
  local_90 = PTR_id_0020f840;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5274 to 001c528b has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f840,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215890);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c52c8 to 001c52cf has its CatchHandler @ 001c69ec */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215890;
  puVar2 = PTR_id_0020f8b8;
  DAT_002158b0 = PTR_vtable_0020f9b0 + 0x10;
  local_90 = PTR_id_0020f8b8;
  puStack_88 = puVar3;
  DAT_002158b8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5338 to 001c534f has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f8b8,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002158b0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c538c to 001c5393 has its CatchHandler @ 001c69d8 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002158b0;
  puVar2 = PTR_id_0020f818;
  DAT_002158c0 = PTR_vtable_0020f9b8 + 0x10;
  local_90 = PTR_id_0020f818;
  puStack_88 = puVar3;
  DAT_002158c8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f818 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c53fc to 001c5413 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f818,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002158c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5450 to 001c5457 has its CatchHandler @ 001c69c4 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002158c0;
  DAT_002158d0 = PTR_vtable_0020f9c0 + 0x10;
  DAT_002158d8 = 0;
  if (((DAT_00214ea0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_00214ea0), iVar5 != 0)) {
                    /* try { // try from 001c66fc to 001c670f has its CatchHandler @ 001c67d8 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  puVar2 = PTR_id_0020f9c8;
  DAT_002158e0 = DAT_00214e98;
  local_80 = 0;
  local_90 = PTR_id_0020f9c8;
  puStack_88 = puVar3;
  if (*(long *)PTR_id_0020f9c8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c54e4 to 001c54fb has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f9c8,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002158d0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5538 to 001c553f has its CatchHandler @ 001c69b0 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002158d0;
  puVar2 = PTR_id_0020f9d8;
  DAT_002158f0 = PTR_vtable_0020f9d0 + 0x10;
  local_90 = PTR_id_0020f9d8;
  puStack_88 = puVar3;
  DAT_002158f8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f9d8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c55a8 to 001c55bf has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f9d8,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002158f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c55fc to 001c5603 has its CatchHandler @ 001c699c */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002158f0;
  puVar2 = PTR_id_0020f9e8;
  DAT_00215900 = PTR_vtable_0020f9e0 + 0x10;
  local_90 = PTR_id_0020f9e8;
  puStack_88 = puVar3;
  DAT_00215908 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f9e8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c566c to 001c5683 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f9e8,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215900);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c56c0 to 001c56c7 has its CatchHandler @ 001c6988 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215900;
  puVar2 = PTR_id_0020f930;
  DAT_00215920 = 0x2c2e;
  DAT_00215910 = PTR_vtable_0020f9f0 + 0x10;
  DAT_00215930 = 0;
  DAT_00215938 = 0;
  DAT_00215928 = 0;
  local_90 = PTR_id_0020f930;
  puStack_88 = puVar3;
  DAT_00215918 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f930 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5740 to 001c5757 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f930,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215910);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5794 to 001c579b has its CatchHandler @ 001c6974 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215910;
  puVar2 = PTR_id_0020f940;
  DAT_00215940 = PTR_vtable_0020f9f8 + 0x10;
  DAT_00215960 = 0;
  DAT_00215968 = 0;
  DAT_00215958 = 0;
  local_90 = PTR_id_0020f940;
  puStack_88 = puVar3;
  DAT_00215948 = 0;
  DAT_00215950 = DAT_00146348;
  local_80 = 0;
  if (*(long *)PTR_id_0020f940 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5818 to 001c582f has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f940,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215940);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c586c to 001c5873 has its CatchHandler @ 001c6960 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215940;
  puVar2 = PTR_id_0020f8a8;
  DAT_00215970 = PTR_vtable_0020fa00 + 0x10;
  local_90 = PTR_id_0020f8a8;
  puStack_88 = puVar3;
  DAT_00215978 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f8a8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c58dc to 001c58f3 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f8a8,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215970);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5930 to 001c5937 has its CatchHandler @ 001c694c */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215970;
  puVar2 = PTR_id_0020f8c0;
  DAT_00215980 = PTR_vtable_0020fa08 + 0x10;
  local_90 = PTR_id_0020f8c0;
  puStack_88 = puVar3;
  DAT_00215988 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f8c0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c59a0 to 001c59b7 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f8c0,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215980);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c59f4 to 001c59fb has its CatchHandler @ 001c6938 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215980;
  puVar2 = PTR_id_0020f8d0;
  DAT_00215990 = PTR_vtable_0020fa10 + 0x10;
  local_90 = PTR_id_0020f8d0;
  puStack_88 = puVar3;
  DAT_00215998 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f8d0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5a64 to 001c5a7b has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f8d0,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215990);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5ab8 to 001c5abf has its CatchHandler @ 001c6924 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215990;
  puVar2 = PTR_id_0020f8e0;
  DAT_002159a0 = PTR_vtable_0020fa18 + 0x10;
  local_90 = PTR_id_0020f8e0;
  puStack_88 = puVar3;
  DAT_002159a8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f8e0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5b28 to 001c5b3f has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f8e0,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002159a0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5b7c to 001c5b83 has its CatchHandler @ 001c6910 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002159a0;
  puVar2 = PTR_id_0020f970;
  DAT_002159b0 = PTR_vtable_0020fa20 + 0x10;
  local_90 = PTR_id_0020f970;
  puStack_88 = puVar3;
  DAT_002159b8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f970 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5bec to 001c5c03 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f970,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002159b0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5c40 to 001c5c47 has its CatchHandler @ 001c68fc */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002159b0;
  puVar2 = PTR_id_0020f968;
  DAT_002159c0 = PTR_vtable_0020fa28 + 0x10;
  local_90 = PTR_id_0020f968;
  puStack_88 = puVar3;
  DAT_002159c8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f968 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5cb0 to 001c5cc7 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f968,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002159c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5d04 to 001c5d0b has its CatchHandler @ 001c68e8 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002159c0;
  puVar2 = PTR_id_0020f980;
  DAT_002159d0 = PTR_vtable_0020fa30 + 0x10;
  local_90 = PTR_id_0020f980;
  puStack_88 = puVar3;
  DAT_002159d8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f980 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5d74 to 001c5d8b has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f980,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002159d0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5dc8 to 001c5dcf has its CatchHandler @ 001c68d4 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002159d0;
  puVar2 = PTR_id_0020f978;
  DAT_002159e0 = PTR_vtable_0020fa38 + 0x10;
  local_90 = PTR_id_0020f978;
  puStack_88 = puVar3;
  DAT_002159e8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020f978 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5e38 to 001c5e4f has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020f978,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002159e0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5e8c to 001c5e93 has its CatchHandler @ 001c68c0 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002159e0;
  puVar2 = PTR_id_0020fa48;
  DAT_002159f0 = PTR_vtable_0020fa40 + 0x10;
  local_90 = PTR_id_0020fa48;
  puStack_88 = puVar3;
  DAT_002159f8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020fa48 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5efc to 001c5f13 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fa48,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_002159f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c5f50 to 001c5f57 has its CatchHandler @ 001c68ac */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_002159f0;
  puVar2 = PTR_id_0020fa58;
  DAT_00215a00 = PTR_vtable_0020fa50 + 0x10;
  local_90 = PTR_id_0020fa58;
  puStack_88 = puVar3;
  DAT_00215a08 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020fa58 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c5fc0 to 001c5fd7 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fa58,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215a00);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c6014 to 001c601b has its CatchHandler @ 001c6898 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215a00;
  puVar2 = PTR_id_0020fa68;
  DAT_00215a10 = PTR_vtable_0020fa60 + 0x10;
  local_90 = PTR_id_0020fa68;
  puStack_88 = puVar3;
  DAT_00215a18 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020fa68 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c6084 to 001c609b has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fa68,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215a10);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c60d8 to 001c60df has its CatchHandler @ 001c6884 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215a10;
  puVar2 = PTR_id_0020fa78;
  DAT_00215a20 = PTR_vtable_0020fa70 + 0x10;
  local_90 = PTR_id_0020fa78;
  puStack_88 = puVar3;
  DAT_00215a28 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020fa78 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c6148 to 001c615f has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fa78,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215a20);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c619c to 001c61a3 has its CatchHandler @ 001c6870 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215a20;
  puVar2 = PTR_id_0020fa88;
  DAT_00215a30 = PTR_vtable_0020fa80 + 0x10;
  DAT_00215a40 = PTR_vtable_0020fa80 + 0x70;
  local_90 = PTR_id_0020fa88;
  puStack_88 = puVar3;
  DAT_00215a38 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020fa88 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c6214 to 001c622b has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fa88,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215a30);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c6268 to 001c626f has its CatchHandler @ 001c685c */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215a30;
  puVar2 = PTR_id_0020fa98;
  DAT_00215a50 = PTR_vtable_0020fa90 + 0x10;
  DAT_00215a60 = PTR_vtable_0020fa90 + 0x70;
  local_90 = PTR_id_0020fa98;
  puStack_88 = puVar3;
  DAT_00215a58 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020fa98 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c62e0 to 001c62f7 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fa98,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215a50);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c6334 to 001c633b has its CatchHandler @ 001c6848 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215a50;
  puVar2 = PTR_vtable_0020faa0;
  DAT_00215a70 = PTR_vtable_0020faa0 + 0x10;
  DAT_00215a78 = 0;
  if (((DAT_00214ea0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_00214ea0), iVar5 != 0)) {
                    /* try { // try from 001c6734 to 001c6747 has its CatchHandler @ 001c67b8 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  puVar4 = PTR_id_0020fab0;
  DAT_00215a80 = DAT_00214e98;
  DAT_00215a70 = PTR_vtable_0020faa8 + 0x10;
  local_90 = PTR_id_0020fab0;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)PTR_id_0020fab0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c63cc to 001c63e3 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fab0,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar4 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215a70);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c6420 to 001c6427 has its CatchHandler @ 001c6834 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215a70;
  DAT_00215a90 = puVar2 + 0x10;
  DAT_00215a98 = 0;
  if (((DAT_00214ea0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_00214ea0), iVar5 != 0)) {
                    /* try { // try from 001c676c to 001c677f has its CatchHandler @ 001c6798 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  puVar2 = PTR_id_0020fac0;
  DAT_00215aa0 = DAT_00214e98;
  DAT_00215a90 = PTR_vtable_0020fab8 + 0x10;
  local_90 = PTR_id_0020fac0;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)PTR_id_0020fac0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c64b0 to 001c64c7 has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fac0,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215a90);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c6504 to 001c650b has its CatchHandler @ 001c6820 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215a90;
  puVar2 = PTR_id_0020fad0;
  DAT_00215ab0 = PTR_vtable_0020fac8 + 0x10;
  local_90 = PTR_id_0020fad0;
  puStack_88 = puVar3;
  DAT_00215ab8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020fad0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c6574 to 001c658b has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fad0,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215ab0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c65c8 to 001c65cf has its CatchHandler @ 001c680c */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215ab0;
  puVar2 = PTR_id_0020fae0;
  DAT_00215ac0 = PTR_vtable_0020fad8 + 0x10;
  local_90 = PTR_id_0020fae0;
  puStack_88 = puVar3;
  DAT_00215ac8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_0020fae0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 001c6638 to 001c664f has its CatchHandler @ 001c6a28 */
    std::__ndk1::__call_once((ulong *)PTR_id_0020fae0,&local_78,FUN_001db064);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_00215ac0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001c668c to 001c6693 has its CatchHandler @ 001c67f8 */
      FUN_001daf1c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_00215ac0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c6a70  FUN_001c6a70 =====

void FUN_001c6a70(undefined8 *param_1,basic_string_conflict *param_2,long param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  undefined *puVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  collate_byname<char> *this_00;
  collate_byname<wchar_t> *this_01;
  ctype_byname<char> *this_02;
  ctype_byname<wchar_t> *this_03;
  long *plVar5;
  codecvt<wchar_t,char,mbstate_t> *this_04;
  numpunct_byname<char> *this_05;
  numpunct_byname<wchar_t> *this_06;
  void *pvVar6;
  __shared_count *this_07;
  long lVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  *param_1 = &PTR_FUN_00209c90;
  param_1[1] = param_3 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[2] = param_1 + 6;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x22) = 1;
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
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[3] = param_1 + 0x22;
  param_1[4] = param_1 + 0x22;
                    /* try { // try from 001c6ae0 to 001c6ae7 has its CatchHandler @ 001c7038 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(this,param_2);
  if (((DAT_00214eb8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00214eb8), iVar4 != 0)) {
                    /* try { // try from 001c6f44 to 001c6f57 has its CatchHandler @ 001c6f7c */
    FUN_001c4ff8(&DAT_00215ad0,1);
    DAT_00214ea8 = (undefined8 *)&DAT_00215ad0;
    DAT_00214eb0 = &DAT_00214ea8;
    __cxa_guard_release(&DAT_00214eb8);
  }
  if (DAT_00214ea8 != param_1) {
                    /* try { // try from 001c6b0c to 001c6b27 has its CatchHandler @ 001c706c */
    FUN_001dad98(param_1 + 2,DAT_00214ea8[2],DAT_00214ea8[3]);
  }
  lVar9 = param_1[2];
  lVar7 = param_1[3];
  if (lVar7 != lVar9) {
    uVar10 = 0;
    uVar11 = 1;
    do {
      this_07 = *(__shared_count **)(lVar9 + uVar10 * 8);
      if (this_07 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this_07);
        lVar9 = param_1[2];
        lVar7 = param_1[3];
      }
      bVar3 = uVar11 < (ulong)(lVar7 - lVar9 >> 3);
      uVar10 = uVar11;
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (bVar3);
  }
  this_00 = (collate_byname<char> *)operator_new(0x18);
                    /* try { // try from 001c6b2c to 001c6b37 has its CatchHandler @ 001c7024 */
  std::__ndk1::collate_byname<char>::collate_byname(this_00,(basic_string_conflict *)this,0);
                    /* try { // try from 001c6b38 to 001c6b4b has its CatchHandler @ 001c706c */
  FUN_001c7164(param_1,this_00);
  this_01 = (collate_byname<wchar_t> *)operator_new(0x18);
                    /* try { // try from 001c6b50 to 001c6b5b has its CatchHandler @ 001c7020 */
  std::__ndk1::collate_byname<wchar_t>::collate_byname(this_01,(basic_string_conflict *)this,0);
                    /* try { // try from 001c6b5c to 001c6b6f has its CatchHandler @ 001c706c */
  FUN_001c7288(param_1,this_01);
  this_02 = (ctype_byname<char> *)operator_new(0x28);
                    /* try { // try from 001c6b74 to 001c6b7f has its CatchHandler @ 001c701c */
  std::__ndk1::ctype_byname<char>::ctype_byname(this_02,(basic_string_conflict *)this,0);
                    /* try { // try from 001c6b80 to 001c6b93 has its CatchHandler @ 001c706c */
  FUN_001c73ac(param_1,this_02);
  this_03 = (ctype_byname<wchar_t> *)operator_new(0x18);
                    /* try { // try from 001c6b98 to 001c6ba3 has its CatchHandler @ 001c7018 */
  std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_03,(basic_string_conflict *)this,0);
                    /* try { // try from 001c6ba4 to 001c6bdf has its CatchHandler @ 001c706c */
  FUN_001c74d0(param_1,this_03);
  plVar5 = (long *)operator_new(0x10);
  *plVar5 = (long)(PTR_vtable_0020fae8 + 0x10);
  plVar5[1] = -1;
  FUN_001c75f4(param_1);
  this_04 = (codecvt<wchar_t,char,mbstate_t> *)operator_new(0x18);
  pcVar8 = (char *)param_1[0x26];
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    pcVar8 = (char *)((long)param_1 + 0x121);
  }
                    /* try { // try from 001c6bf4 to 001c6bfb has its CatchHandler @ 001c7008 */
  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_04,pcVar8,0);
  *(undefined **)this_04 = PTR_vtable_0020faf0 + 0x10;
                    /* try { // try from 001c6c0c to 001c6c6f has its CatchHandler @ 001c706c */
  FUN_001c7718(param_1,this_04);
  plVar5 = (long *)operator_new(0x10);
  *plVar5 = (long)(PTR_vtable_0020faf8 + 0x10);
  plVar5[1] = -1;
  FUN_001c783c(param_1);
  plVar5 = (long *)operator_new(0x10);
  *plVar5 = (long)(PTR_vtable_0020fb00 + 0x10);
  plVar5[1] = -1;
  FUN_001c7960(param_1);
  this_05 = (numpunct_byname<char> *)operator_new(0x30);
  *(undefined8 *)(this_05 + 0x20) = 0;
  *(undefined8 *)(this_05 + 0x28) = 0;
  *(undefined8 *)(this_05 + 0x18) = 0;
  puVar1 = PTR_vtable_0020fb08;
  *(undefined2 *)(this_05 + 0x10) = 0x2c2e;
  *(undefined **)this_05 = puVar1 + 0x10;
  *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
  pcVar8 = (char *)((long)param_1 + 0x121);
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    pcVar8 = (char *)param_1[0x26];
  }
                    /* try { // try from 001c6cac to 001c6caf has its CatchHandler @ 001c6fcc */
  std::__ndk1::numpunct_byname<char>::__init(this_05,pcVar8);
                    /* try { // try from 001c6cb0 to 001c6cc3 has its CatchHandler @ 001c706c */
  FUN_001c7a84(param_1,this_05);
  this_06 = (numpunct_byname<wchar_t> *)operator_new(0x30);
  *(undefined8 *)(this_06 + 0x20) = 0;
  *(undefined8 *)(this_06 + 0x28) = 0;
  uVar2 = DAT_00146348;
  *(undefined8 *)(this_06 + 0x18) = 0;
  puVar1 = PTR_vtable_0020fb10;
  *(undefined8 *)(this_06 + 0x10) = uVar2;
  *(undefined **)this_06 = puVar1 + 0x10;
  *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
  pcVar8 = (char *)((long)param_1 + 0x121);
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    pcVar8 = (char *)param_1[0x26];
  }
                    /* try { // try from 001c6d00 to 001c6d03 has its CatchHandler @ 001c6fb8 */
  std::__ndk1::numpunct_byname<wchar_t>::__init(this_06,pcVar8);
                    /* try { // try from 001c6d04 to 001c6d17 has its CatchHandler @ 001c706c */
  FUN_001c7ba8(param_1,this_06);
  pvVar6 = operator_new(0x88);
                    /* try { // try from 001c6d1c to 001c6d27 has its CatchHandler @ 001c6fb4 */
  FUN_001c7df0(pvVar6,this,0);
                    /* try { // try from 001c6d28 to 001c6d3b has its CatchHandler @ 001c706c */
  FUN_001c7ccc(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
                    /* try { // try from 001c6d40 to 001c6d4b has its CatchHandler @ 001c6fb0 */
  FUN_001c7ff0(pvVar6,this,0);
                    /* try { // try from 001c6d4c to 001c6d5f has its CatchHandler @ 001c706c */
  FUN_001c7ecc(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
                    /* try { // try from 001c6d64 to 001c6d6f has its CatchHandler @ 001c6fac */
  FUN_001c81f0(pvVar6,this,0);
                    /* try { // try from 001c6d70 to 001c6d83 has its CatchHandler @ 001c706c */
  FUN_001c80cc(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
                    /* try { // try from 001c6d88 to 001c6d93 has its CatchHandler @ 001c6fa8 */
  FUN_001c83f0(pvVar6,this,0);
                    /* try { // try from 001c6d94 to 001c6da7 has its CatchHandler @ 001c706c */
  FUN_001c82cc(param_1,pvVar6);
  plVar5 = (long *)operator_new(0x440);
  puVar1 = PTR_vtable_0020fa80 + 0x70;
  *plVar5 = (long)(PTR_vtable_0020fa80 + 0x10);
  plVar5[1] = -1;
  plVar5[2] = (long)puVar1;
                    /* try { // try from 001c6dcc to 001c6dd3 has its CatchHandler @ 001c6fa0 */
  std::__ndk1::__time_get_storage<char>::__time_get_storage
            ((__time_get_storage<char> *)(plVar5 + 3),(basic_string_conflict *)this);
  puVar1 = PTR_vtable_0020fb18 + 0xa8;
  *plVar5 = (long)(PTR_vtable_0020fb18 + 0x10);
  plVar5[2] = (long)puVar1;
                    /* try { // try from 001c6dec to 001c6dff has its CatchHandler @ 001c706c */
  FUN_001c84cc(param_1,plVar5);
  plVar5 = (long *)operator_new(0x440);
  puVar1 = PTR_vtable_0020fa90 + 0x70;
  *plVar5 = (long)(PTR_vtable_0020fa90 + 0x10);
  plVar5[1] = -1;
  plVar5[2] = (long)puVar1;
                    /* try { // try from 001c6e24 to 001c6e2b has its CatchHandler @ 001c6f98 */
  std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
            ((__time_get_storage<wchar_t> *)(plVar5 + 3),(basic_string_conflict *)this);
  puVar1 = PTR_vtable_0020fb20 + 0xa8;
  *plVar5 = (long)(PTR_vtable_0020fb20 + 0x10);
  plVar5[2] = (long)puVar1;
                    /* try { // try from 001c6e44 to 001c6e57 has its CatchHandler @ 001c706c */
  FUN_001c85f0(param_1,plVar5);
  pvVar6 = operator_new(0x18);
                    /* try { // try from 001c6e5c to 001c6e67 has its CatchHandler @ 001c6f94 */
  FUN_001c8838(pvVar6,this,0);
                    /* try { // try from 001c6e68 to 001c6e7b has its CatchHandler @ 001c706c */
  FUN_001c8714(param_1,pvVar6);
  pvVar6 = operator_new(0x18);
                    /* try { // try from 001c6e80 to 001c6e8b has its CatchHandler @ 001c6f90 */
  FUN_001c8a3c(pvVar6,this,0);
                    /* try { // try from 001c6e8c to 001c6ee7 has its CatchHandler @ 001c706c */
  FUN_001c8918(param_1,pvVar6);
  plVar5 = (long *)operator_new(0x10);
  *plVar5 = (long)(PTR_vtable_0020fb28 + 0x10);
  plVar5[1] = -1;
  FUN_001c8b1c(param_1);
  plVar5 = (long *)operator_new(0x10);
  *plVar5 = (long)(PTR_vtable_0020fb30 + 0x10);
  plVar5[1] = -1;
  FUN_001c8c40(param_1);
  return;
}


// ===== 001c70d4  std::__ndk1::locale::classic =====

/* std::__ndk1::locale::classic() */

undefined8 * std::__ndk1::locale::classic(void)

{
  int iVar1;
  
  if (((DAT_00214eb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214eb8), iVar1 != 0)) {
                    /* try { // try from 001c7114 to 001c7127 has its CatchHandler @ 001c714c */
    FUN_001c4ff8(&DAT_00215ad0,1);
    DAT_00214ea8 = &DAT_00215ad0;
    DAT_00214eb0 = &DAT_00214ea8;
    __cxa_guard_release(&DAT_00214eb8);
  }
  return DAT_00214eb0;
}


// ===== 001c7164  FUN_001c7164 =====

void FUN_001c7164(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f990;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f990;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f990 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f990,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c7214 to 001c721b has its CatchHandler @ 001c7270 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c7288  FUN_001c7288 =====

void FUN_001c7288(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f9a0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f9a0;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f9a0 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f9a0,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c7338 to 001c733f has its CatchHandler @ 001c7394 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c73ac  FUN_001c73ac =====

void FUN_001c73ac(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f840;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f840;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f840 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f840,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c745c to 001c7463 has its CatchHandler @ 001c74b8 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c74d0  FUN_001c74d0 =====

void FUN_001c74d0(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f8b8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f8b8;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f8b8 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f8b8,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c7580 to 001c7587 has its CatchHandler @ 001c75dc */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c75f4  FUN_001c75f4 =====

void FUN_001c75f4(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f818;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f818;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f818 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f818,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c76a4 to 001c76ab has its CatchHandler @ 001c7700 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c7718  FUN_001c7718 =====

void FUN_001c7718(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f9c8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f9c8;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f9c8 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f9c8,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c77c8 to 001c77cf has its CatchHandler @ 001c7824 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c783c  FUN_001c783c =====

void FUN_001c783c(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f9d8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f9d8;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f9d8 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f9d8,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c78ec to 001c78f3 has its CatchHandler @ 001c7948 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c7960  FUN_001c7960 =====

void FUN_001c7960(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f9e8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f9e8;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f9e8 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f9e8,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c7a10 to 001c7a17 has its CatchHandler @ 001c7a6c */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c7a84  FUN_001c7a84 =====

void FUN_001c7a84(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f930;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f930;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f930 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f930,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c7b34 to 001c7b3b has its CatchHandler @ 001c7b90 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c7ba8  FUN_001c7ba8 =====

void FUN_001c7ba8(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f940;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f940;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f940 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f940,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c7c58 to 001c7c5f has its CatchHandler @ 001c7cb4 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c7ccc  FUN_001c7ccc =====

void FUN_001c7ccc(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f970;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f970;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f970 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f970,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c7d7c to 001c7d83 has its CatchHandler @ 001c7dd8 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c7df0  FUN_001c7df0 =====

void FUN_001c7df0(moneypunct_byname<char,false> *param_1,byte *param_2,long param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  
  puVar1 = PTR_vtable_0020fb38 + 0x10;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined **)param_1 = puVar1;
  *(long *)(param_1 + 8) = param_3 + -1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
                    /* try { // try from 001c7e48 to 001c7e4b has its CatchHandler @ 001c7e5c */
  std::__ndk1::moneypunct_byname<char,false>::init(param_1,(char *)pbVar2);
  return;
}


// ===== 001c7ecc  FUN_001c7ecc =====

void FUN_001c7ecc(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f968;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f968;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f968 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f968,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c7f7c to 001c7f83 has its CatchHandler @ 001c7fd8 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c7ff0  FUN_001c7ff0 =====

void FUN_001c7ff0(moneypunct_byname<char,true> *param_1,byte *param_2,long param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  
  puVar1 = PTR_vtable_0020fb40 + 0x10;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined **)param_1 = puVar1;
  *(long *)(param_1 + 8) = param_3 + -1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
                    /* try { // try from 001c8048 to 001c804b has its CatchHandler @ 001c805c */
  std::__ndk1::moneypunct_byname<char,true>::init(param_1,(char *)pbVar2);
  return;
}


// ===== 001c80cc  FUN_001c80cc =====

void FUN_001c80cc(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f980;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f980;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f980 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f980,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c817c to 001c8183 has its CatchHandler @ 001c81d8 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c81f0  FUN_001c81f0 =====

void FUN_001c81f0(moneypunct_byname<wchar_t,false> *param_1,byte *param_2,long param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  
  puVar1 = PTR_vtable_0020fb48 + 0x10;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined **)param_1 = puVar1;
  *(long *)(param_1 + 8) = param_3 + -1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
                    /* try { // try from 001c8248 to 001c824b has its CatchHandler @ 001c825c */
  std::__ndk1::moneypunct_byname<wchar_t,false>::init(param_1,(char *)pbVar2);
  return;
}


// ===== 001c82cc  FUN_001c82cc =====

void FUN_001c82cc(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020f978;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020f978;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020f978 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020f978,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c837c to 001c8383 has its CatchHandler @ 001c83d8 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c83f0  FUN_001c83f0 =====

void FUN_001c83f0(moneypunct_byname<wchar_t,true> *param_1,byte *param_2,long param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  
  puVar1 = PTR_vtable_0020fb50 + 0x10;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined **)param_1 = puVar1;
  *(long *)(param_1 + 8) = param_3 + -1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
                    /* try { // try from 001c8448 to 001c844b has its CatchHandler @ 001c845c */
  std::__ndk1::moneypunct_byname<wchar_t,true>::init(param_1,(char *)pbVar2);
  return;
}


// ===== 001c84cc  FUN_001c84cc =====

void FUN_001c84cc(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020fa88;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020fa88;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020fa88 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020fa88,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c857c to 001c8583 has its CatchHandler @ 001c85d8 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c85f0  FUN_001c85f0 =====

void FUN_001c85f0(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020fa98;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020fa98;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020fa98 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020fa98,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c86a0 to 001c86a7 has its CatchHandler @ 001c86fc */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c8714  FUN_001c8714 =====

void FUN_001c8714(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020fab0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020fab0;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020fab0 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020fab0,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c87c4 to 001c87cb has its CatchHandler @ 001c8820 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c8838  FUN_001c8838 =====

void FUN_001c8838(long *param_1,byte *param_2,long param_3)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  byte *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_vtable_0020faa0 + 0x10);
  param_1[1] = param_3 + -1;
  __locale = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __locale = param_2 + 1;
  }
                    /* try { // try from 001c8884 to 001c88df has its CatchHandler @ 001c8904 */
  pbVar3 = (basic_string_conflict *)0x0;
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  param_1[2] = (long)p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
    std::__ndk1::operator+
              ((__ndk1 *)"time_put_byname failed to construct for ",(char *)param_2,pbVar3);
                    /* try { // try from 001c88e0 to 001c88e7 has its CatchHandler @ 001c88ec */
    FUN_001cbd58(auStack_50);
  }
  else {
    *param_1 = (long)(PTR_vtable_0020fb58 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c8918  FUN_001c8918 =====

void FUN_001c8918(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020fac0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020fac0;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020fac0 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020fac0,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c89c8 to 001c89cf has its CatchHandler @ 001c8a24 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c8a3c  FUN_001c8a3c =====

void FUN_001c8a3c(long *param_1,byte *param_2,long param_3)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  byte *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_vtable_0020faa0 + 0x10);
  param_1[1] = param_3 + -1;
  __locale = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __locale = param_2 + 1;
  }
                    /* try { // try from 001c8a88 to 001c8ae3 has its CatchHandler @ 001c8b08 */
  pbVar3 = (basic_string_conflict *)0x0;
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  param_1[2] = (long)p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
    std::__ndk1::operator+
              ((__ndk1 *)"time_put_byname failed to construct for ",(char *)param_2,pbVar3);
                    /* try { // try from 001c8ae4 to 001c8aeb has its CatchHandler @ 001c8af0 */
    FUN_001cbd58(auStack_50);
  }
  else {
    *param_1 = (long)(PTR_vtable_0020fb60 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c8b1c  FUN_001c8b1c =====

void FUN_001c8b1c(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020fad0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020fad0;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020fad0 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020fad0,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c8bcc to 001c8bd3 has its CatchHandler @ 001c8c28 */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c8c40  FUN_001c8c40 =====

void FUN_001c8c40(long param_1,__shared_count *param_2)

{
  long lVar1;
  undefined *puVar2;
  __shared_count *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_id_0020fae0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_70 = PTR_id_0020fae0;
  puStack_68 = PTR___init_0020f928;
  if (*(long *)PTR_id_0020fae0 != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_0020fae0,&local_58,FUN_001db064);
  }
  uVar3 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar3 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar4 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      if (uVar3 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar4 + uVar3 * 8;
      }
    }
    else {
                    /* try { // try from 001c8cf0 to 001c8cf7 has its CatchHandler @ 001c8d4c */
      FUN_001daf1c(plVar6,uVar3 - uVar5);
      lVar4 = *plVar6;
    }
  }
  this = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar4 = *plVar6;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001c8d64  FUN_001c8d64 =====

void FUN_001c8d64(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *__s;
  __shared_count *this;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_00209c90;
  param_1[1] = 0xffffffffffffffff;
  lVar4 = param_2[2];
  lVar3 = param_2[3];
  param_1[2] = 0;
  uVar2 = lVar3 - lVar4 >> 3;
  if (uVar2 < 0x1d) {
    uVar2 = 0x1c;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (uVar2 >> 0x3d == 0) {
    if (uVar2 < 0x1d) {
      __s = param_1 + 6;
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
    else {
                    /* try { // try from 001c8ddc to 001c8de3 has its CatchHandler @ 001c8e80 */
      __s = (undefined8 *)operator_new(uVar2 * 8);
    }
    param_1[2] = __s;
    param_1[4] = __s + uVar2;
    memset(__s,0,uVar2 * 8);
    param_1[3] = __s + uVar2;
                    /* try { // try from 001c8e08 to 001c8e0f has its CatchHandler @ 001c8ebc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 0x24),(basic_string_conflict *)(param_2 + 0x24));
    if (param_1 != param_2) {
                    /* try { // try from 001c8e1c to 001c8e23 has its CatchHandler @ 001c8ea4 */
      FUN_001dad98(param_1 + 2,param_2[2],param_2[3]);
    }
    lVar4 = param_1[2];
    lVar3 = param_1[3];
    if (lVar3 != lVar4) {
      uVar2 = 0;
      uVar5 = 1;
      do {
        this = *(__shared_count **)(lVar4 + uVar2 * 8);
        if (this != (__shared_count *)0x0) {
          std::__ndk1::__shared_count::__add_shared(this);
          lVar4 = param_1[2];
          lVar3 = param_1[3];
        }
        bVar1 = uVar5 < (ulong)(lVar3 - lVar4 >> 3);
        uVar2 = uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (bVar1);
    }
    return;
  }
                    /* try { // try from 001c8e78 to 001c8e7f has its CatchHandler @ 001c8e80 */
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


// ===== 001c8ef4  FUN_001c8ef4 =====

void FUN_001c8ef4(undefined8 *param_1,undefined8 *param_2,basic_string_conflict *param_3,
                 uint param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  bool bVar3;
  collate_byname<char> *this;
  collate_byname<wchar_t> *this_00;
  ctype_byname<char> *this_01;
  ctype_byname<wchar_t> *this_02;
  long *plVar4;
  codecvt<wchar_t,char,mbstate_t> *this_03;
  void *pvVar5;
  numpunct_byname<char> *this_04;
  numpunct_byname<wchar_t> *this_05;
  __shared_count *this_06;
  long lVar6;
  basic_string_conflict *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = &PTR_FUN_00209c90;
  param_1[1] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[2] = param_1 + 6;
  *(undefined1 *)(param_1 + 0x22) = 1;
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
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[3] = param_1 + 0x22;
  param_1[4] = param_1 + 0x22;
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  if (param_1 != param_2) {
                    /* try { // try from 001c8f80 to 001c8f8b has its CatchHandler @ 001c944c */
    FUN_001dad98(param_1 + 2,param_2[2],param_2[3]);
  }
  lVar8 = param_1[2];
  lVar6 = param_1[3];
  if (lVar6 != lVar8) {
    uVar9 = 0;
    uVar10 = 1;
    do {
      this_06 = *(__shared_count **)(lVar8 + uVar9 * 8);
      if (this_06 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this_06);
        lVar8 = param_1[2];
        lVar6 = param_1[3];
      }
      bVar3 = uVar10 < (ulong)(lVar6 - lVar8 >> 3);
      uVar9 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (bVar3);
  }
  if ((param_4 >> 3 & 1) != 0) {
                    /* try { // try from 001c8f9c to 001c8fa3 has its CatchHandler @ 001c9490 */
    this = (collate_byname<char> *)operator_new(0x18);
                    /* try { // try from 001c8fa8 to 001c8fb3 has its CatchHandler @ 001c943c */
    std::__ndk1::collate_byname<char>::collate_byname(this,param_3,0);
                    /* try { // try from 001c8fb4 to 001c8fc7 has its CatchHandler @ 001c9490 */
    FUN_001c7164(param_1,this);
    this_00 = (collate_byname<wchar_t> *)operator_new(0x18);
                    /* try { // try from 001c8fcc to 001c8fd7 has its CatchHandler @ 001c9434 */
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_00,param_3,0);
                    /* try { // try from 001c8fd8 to 001c8fef has its CatchHandler @ 001c9490 */
    FUN_001c7288(param_1,this_00);
  }
  if ((param_4 & 1) != 0) {
    this_01 = (ctype_byname<char> *)operator_new(0x28);
                    /* try { // try from 001c8ff4 to 001c8fff has its CatchHandler @ 001c9438 */
    std::__ndk1::ctype_byname<char>::ctype_byname(this_01,param_3,0);
                    /* try { // try from 001c9000 to 001c9013 has its CatchHandler @ 001c9490 */
    FUN_001c73ac(param_1,this_01);
    this_02 = (ctype_byname<wchar_t> *)operator_new(0x18);
                    /* try { // try from 001c9018 to 001c9023 has its CatchHandler @ 001c9430 */
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_02,param_3,0);
                    /* try { // try from 001c9024 to 001c905f has its CatchHandler @ 001c9490 */
    FUN_001c74d0(param_1,this_02);
    plVar4 = (long *)operator_new(0x10);
    *plVar4 = (long)(PTR_vtable_0020fae8 + 0x10);
    plVar4[1] = -1;
    FUN_001c75f4(param_1);
    this_03 = (codecvt<wchar_t,char,mbstate_t> *)operator_new(0x18);
    pbVar7 = *(basic_string_conflict **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar7 = param_3 + 1;
    }
                    /* try { // try from 001c9074 to 001c907b has its CatchHandler @ 001c9428 */
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_03,(char *)pbVar7,0);
    *(undefined **)this_03 = PTR_vtable_0020faf0 + 0x10;
                    /* try { // try from 001c908c to 001c90f3 has its CatchHandler @ 001c9490 */
    FUN_001c7718(param_1,this_03);
    plVar4 = (long *)operator_new(0x10);
    *plVar4 = (long)(PTR_vtable_0020faf8 + 0x10);
    plVar4[1] = -1;
    FUN_001c783c(param_1);
    plVar4 = (long *)operator_new(0x10);
    *plVar4 = (long)(PTR_vtable_0020fb00 + 0x10);
    plVar4[1] = -1;
    FUN_001c7960(param_1);
  }
  if ((param_4 >> 4 & 1) != 0) {
    pvVar5 = operator_new(0x88);
                    /* try { // try from 001c90f8 to 001c9103 has its CatchHandler @ 001c942c */
    FUN_001c7df0(pvVar5,param_3,0);
                    /* try { // try from 001c9104 to 001c9117 has its CatchHandler @ 001c9490 */
    FUN_001c7ccc(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
                    /* try { // try from 001c911c to 001c9127 has its CatchHandler @ 001c9424 */
    FUN_001c7ff0(pvVar5,param_3,0);
                    /* try { // try from 001c9128 to 001c913b has its CatchHandler @ 001c9490 */
    FUN_001c7ecc(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
                    /* try { // try from 001c9140 to 001c914b has its CatchHandler @ 001c93f0 */
    FUN_001c81f0(pvVar5,param_3,0);
                    /* try { // try from 001c914c to 001c915f has its CatchHandler @ 001c9490 */
    FUN_001c80cc(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
                    /* try { // try from 001c9164 to 001c916f has its CatchHandler @ 001c93d4 */
    FUN_001c83f0(pvVar5,param_3,0);
                    /* try { // try from 001c9170 to 001c9187 has its CatchHandler @ 001c9490 */
    FUN_001c82cc(param_1,pvVar5);
  }
  if ((param_4 >> 1 & 1) != 0) {
    this_04 = (numpunct_byname<char> *)operator_new(0x30);
    *(undefined8 *)(this_04 + 0x20) = 0;
    *(undefined8 *)(this_04 + 0x28) = 0;
    *(undefined8 *)(this_04 + 0x18) = 0;
    puVar1 = PTR_vtable_0020fb08;
    *(undefined2 *)(this_04 + 0x10) = 0x2c2e;
    *(undefined **)this_04 = puVar1 + 0x10;
    *(undefined8 *)(this_04 + 8) = 0xffffffffffffffff;
    pbVar7 = *(basic_string_conflict **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar7 = param_3 + 1;
    }
                    /* try { // try from 001c91c0 to 001c91c3 has its CatchHandler @ 001c93f4 */
    std::__ndk1::numpunct_byname<char>::__init(this_04,(char *)pbVar7);
                    /* try { // try from 001c91c4 to 001c91d7 has its CatchHandler @ 001c9490 */
    FUN_001c7a84(param_1,this_04);
    this_05 = (numpunct_byname<wchar_t> *)operator_new(0x30);
    *(undefined8 *)(this_05 + 0x20) = 0;
    *(undefined8 *)(this_05 + 0x28) = 0;
    uVar2 = DAT_00146348;
    *(undefined8 *)(this_05 + 0x18) = 0;
    puVar1 = PTR_vtable_0020fb10;
    *(undefined8 *)(this_05 + 0x10) = uVar2;
    *(undefined **)this_05 = puVar1 + 0x10;
    *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
    pbVar7 = param_3 + 1;
    if (((byte)*param_3 & 1) != 0) {
      pbVar7 = *(basic_string_conflict **)(param_3 + 0x10);
    }
                    /* try { // try from 001c9218 to 001c921b has its CatchHandler @ 001c93d8 */
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_05,(char *)pbVar7);
                    /* try { // try from 001c921c to 001c9233 has its CatchHandler @ 001c9490 */
    FUN_001c7ba8(param_1,this_05);
  }
  if ((param_4 >> 2 & 1) != 0) {
    plVar4 = (long *)operator_new(0x440);
    puVar1 = PTR_vtable_0020fa80 + 0x70;
    *plVar4 = (long)(PTR_vtable_0020fa80 + 0x10);
    plVar4[1] = -1;
    plVar4[2] = (long)puVar1;
                    /* try { // try from 001c9258 to 001c925f has its CatchHandler @ 001c93e8 */
    std::__ndk1::__time_get_storage<char>::__time_get_storage
              ((__time_get_storage<char> *)(plVar4 + 3),param_3);
    puVar1 = PTR_vtable_0020fb18 + 0xa8;
    *plVar4 = (long)(PTR_vtable_0020fb18 + 0x10);
    plVar4[2] = (long)puVar1;
                    /* try { // try from 001c9278 to 001c928b has its CatchHandler @ 001c9490 */
    FUN_001c84cc(param_1,plVar4);
    plVar4 = (long *)operator_new(0x440);
    puVar1 = PTR_vtable_0020fa90 + 0x70;
    *plVar4 = (long)(PTR_vtable_0020fa90 + 0x10);
    plVar4[1] = -1;
    plVar4[2] = (long)puVar1;
                    /* try { // try from 001c92b0 to 001c92b7 has its CatchHandler @ 001c93cc */
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
              ((__time_get_storage<wchar_t> *)(plVar4 + 3),param_3);
    puVar1 = PTR_vtable_0020fb20 + 0xa8;
    *plVar4 = (long)(PTR_vtable_0020fb20 + 0x10);
    plVar4[2] = (long)puVar1;
                    /* try { // try from 001c92d0 to 001c92e3 has its CatchHandler @ 001c9490 */
    FUN_001c85f0(param_1,plVar4);
    pvVar5 = operator_new(0x18);
                    /* try { // try from 001c92e8 to 001c92f3 has its CatchHandler @ 001c93c8 */
    FUN_001c8838(pvVar5,param_3,0);
                    /* try { // try from 001c92f4 to 001c9307 has its CatchHandler @ 001c9490 */
    FUN_001c8714(param_1,pvVar5);
    pvVar5 = operator_new(0x18);
                    /* try { // try from 001c930c to 001c9317 has its CatchHandler @ 001c93c4 */
    FUN_001c8a3c(pvVar5,param_3,0);
                    /* try { // try from 001c9318 to 001c9377 has its CatchHandler @ 001c9490 */
    FUN_001c8918(param_1,pvVar5);
  }
  if ((param_4 >> 5 & 1) != 0) {
    plVar4 = (long *)operator_new(0x10);
    *plVar4 = (long)(PTR_vtable_0020fb28 + 0x10);
    plVar4[1] = -1;
    FUN_001c8b1c(param_1);
    plVar4 = (long *)operator_new(0x10);
    *plVar4 = (long)(PTR_vtable_0020fb30 + 0x10);
    plVar4[1] = -1;
    FUN_001c8c40(param_1);
  }
  return;
}


// ===== 001c94e8  FUN_001c94e8 =====

void FUN_001c94e8(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  __shared_count *p_Var5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  __shared_count *p_Var11;
  ulong uVar12;
  long *plVar13;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00209c90;
  param_1[1] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar10 = param_1 + 2;
  *plVar10 = (long)(param_1 + 6);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[4] = param_1 + 0x22;
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
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  plVar13 = param_1 + 3;
  *plVar13 = (long)(param_1 + 0x22);
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  if (param_1 != param_2) {
                    /* try { // try from 001c9594 to 001c959f has its CatchHandler @ 001cabec */
    FUN_001dad98(plVar10,param_2[2],param_2[3]);
  }
  lVar6 = *plVar13;
  lVar7 = *plVar10;
  if (lVar6 != lVar7) {
    uVar8 = 0;
    uVar12 = 1;
    do {
      p_Var11 = *(__shared_count **)(lVar7 + uVar8 * 8);
      if (p_Var11 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(p_Var11);
        lVar6 = *plVar13;
        lVar7 = *plVar10;
      }
      bVar4 = uVar12 < (ulong)(lVar6 - lVar7 >> 3);
      uVar8 = uVar12;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (bVar4);
  }
  puVar3 = PTR_id_0020f990;
  puVar2 = PTR___init_0020f928;
  if ((param_4 >> 3 & 1) != 0) {
    local_80 = 0;
    local_90 = PTR_id_0020f990;
    puStack_88 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020f990 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c95e4 to 001c95fb has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f990,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001caaf0 to 001cab57 has its CatchHandler @ 001cac34 */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9648 to 001c964f has its CatchHandler @ 001cabdc */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f9a0;
    local_80 = 0;
    local_90 = PTR_id_0020f9a0;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f9a0 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c96d8 to 001c96ef has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f9a0,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c973c to 001c9743 has its CatchHandler @ 001cabd8 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
  }
  puVar3 = PTR___init_0020f928;
  puVar2 = PTR_id_0020f840;
  if ((param_4 & 1) != 0) {
    local_80 = 0;
    local_90 = PTR_id_0020f840;
    puStack_88 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020f840 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c97a0 to 001c97b7 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f840,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9804 to 001c980b has its CatchHandler @ 001cabd4 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar2 = PTR_id_0020f8b8;
    local_80 = 0;
    local_90 = PTR_id_0020f8b8;
    puStack_88 = puVar3;
    if (*(long *)PTR_id_0020f8b8 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c985c to 001c9873 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f8b8,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c98c0 to 001c98c7 has its CatchHandler @ 001cabd0 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar2 = PTR_id_0020f818;
    local_80 = 0;
    local_90 = PTR_id_0020f818;
    puStack_88 = puVar3;
    if (*(long *)PTR_id_0020f818 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9918 to 001c992f has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f818,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c997c to 001c9983 has its CatchHandler @ 001cabcc */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar2 = PTR_id_0020f9d8;
    local_80 = 0;
    local_90 = PTR_id_0020f9d8;
    puStack_88 = puVar3;
    if (*(long *)PTR_id_0020f9d8 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c99d4 to 001c99eb has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f9d8,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9a38 to 001c9a3f has its CatchHandler @ 001cabc8 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar2 = PTR_id_0020f9e8;
    local_80 = 0;
    local_90 = PTR_id_0020f9e8;
    puStack_88 = puVar3;
    if (*(long *)PTR_id_0020f9e8 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9a90 to 001c9aa7 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f9e8,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9af4 to 001c9afb has its CatchHandler @ 001cabbc */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar2 = PTR_id_0020f9c8;
    local_80 = 0;
    local_90 = PTR_id_0020f9c8;
    puStack_88 = puVar3;
    if (*(long *)PTR_id_0020f9c8 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9b4c to 001c9b63 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f9c8,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9bb0 to 001c9bb7 has its CatchHandler @ 001cabb8 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
  }
  puVar3 = PTR_id_0020f970;
  puVar2 = PTR___init_0020f928;
  if ((param_4 >> 4 & 1) != 0) {
    local_80 = 0;
    local_90 = PTR_id_0020f970;
    puStack_88 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020f970 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9c14 to 001c9c2b has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f970,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9c78 to 001c9c7f has its CatchHandler @ 001cabc4 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f968;
    local_80 = 0;
    local_90 = PTR_id_0020f968;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f968 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9cd0 to 001c9ce7 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f968,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9d34 to 001c9d3b has its CatchHandler @ 001cabc0 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f980;
    local_80 = 0;
    local_90 = PTR_id_0020f980;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f980 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9d8c to 001c9da3 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f980,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9df0 to 001c9df7 has its CatchHandler @ 001cabb4 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f978;
    local_80 = 0;
    local_90 = PTR_id_0020f978;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f978 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9e48 to 001c9e5f has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f978,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9eac to 001c9eb3 has its CatchHandler @ 001cabb0 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020fa48;
    local_80 = 0;
    local_90 = PTR_id_0020fa48;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020fa48 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9f04 to 001c9f1b has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fa48,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001c9f68 to 001c9f6f has its CatchHandler @ 001caba8 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020fa58;
    local_80 = 0;
    local_90 = PTR_id_0020fa58;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020fa58 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001c9fc0 to 001c9fd7 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fa58,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca024 to 001ca02b has its CatchHandler @ 001caba0 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020fa68;
    local_80 = 0;
    local_90 = PTR_id_0020fa68;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020fa68 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca07c to 001ca093 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fa68,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca0e0 to 001ca0e7 has its CatchHandler @ 001cab9c */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020fa78;
    local_80 = 0;
    local_90 = PTR_id_0020fa78;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020fa78 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca138 to 001ca14f has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fa78,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca19c to 001ca1a3 has its CatchHandler @ 001cab94 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
  }
  puVar3 = PTR_id_0020f930;
  puVar2 = PTR___init_0020f928;
  if ((param_4 >> 1 & 1) != 0) {
    local_80 = 0;
    local_90 = PTR_id_0020f930;
    puStack_88 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020f930 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca200 to 001ca217 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f930,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca264 to 001ca26b has its CatchHandler @ 001cabac */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f940;
    local_80 = 0;
    local_90 = PTR_id_0020f940;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f940 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca2bc to 001ca2d3 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f940,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca320 to 001ca327 has its CatchHandler @ 001caba4 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f8a8;
    local_80 = 0;
    local_90 = PTR_id_0020f8a8;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f8a8 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca378 to 001ca38f has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f8a8,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca3dc to 001ca3e3 has its CatchHandler @ 001cab98 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f8c0;
    local_80 = 0;
    local_90 = PTR_id_0020f8c0;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f8c0 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca434 to 001ca44b has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f8c0,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca498 to 001ca49f has its CatchHandler @ 001cab90 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f8d0;
    local_80 = 0;
    local_90 = PTR_id_0020f8d0;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f8d0 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca4f0 to 001ca507 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f8d0,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca554 to 001ca55b has its CatchHandler @ 001cab88 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020f8e0;
    local_80 = 0;
    local_90 = PTR_id_0020f8e0;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020f8e0 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca5ac to 001ca5c3 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020f8e0,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca610 to 001ca617 has its CatchHandler @ 001cab80 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
  }
  puVar3 = PTR_id_0020fa88;
  puVar2 = PTR___init_0020f928;
  if ((param_4 >> 2 & 1) != 0) {
    local_80 = 0;
    local_90 = PTR_id_0020fa88;
    puStack_88 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020fa88 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca674 to 001ca68b has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fa88,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca6d8 to 001ca6df has its CatchHandler @ 001cab8c */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020fa98;
    local_80 = 0;
    local_90 = PTR_id_0020fa98;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020fa98 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca730 to 001ca747 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fa98,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca794 to 001ca79b has its CatchHandler @ 001cab84 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020fab0;
    local_80 = 0;
    local_90 = PTR_id_0020fab0;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020fab0 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca7ec to 001ca803 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fab0,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca850 to 001ca857 has its CatchHandler @ 001cab7c */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020fac0;
    local_80 = 0;
    local_90 = PTR_id_0020fac0;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020fac0 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca8a8 to 001ca8bf has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fac0,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001cab5c to 001cab63 has its CatchHandler @ 001cac34 */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca90c to 001ca913 has its CatchHandler @ 001cab64 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
  }
  puVar3 = PTR_id_0020fad0;
  puVar2 = PTR___init_0020f928;
  if ((param_4 >> 5 & 1) != 0) {
    local_80 = 0;
    local_90 = PTR_id_0020fad0;
    puStack_88 = PTR___init_0020f928;
    if (*(long *)PTR_id_0020fad0 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001ca970 to 001ca987 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fad0,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001ca9d4 to 001ca9db has its CatchHandler @ 001cab6c */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
    puVar3 = PTR_id_0020fae0;
    local_80 = 0;
    local_90 = PTR_id_0020fae0;
    puStack_88 = puVar2;
    if (*(long *)PTR_id_0020fae0 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
                    /* try { // try from 001caa2c to 001caa43 has its CatchHandler @ 001cac34 */
      std::__ndk1::__call_once((ulong *)PTR_id_0020fae0,&local_78,FUN_001db064);
    }
    uVar8 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar8 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var11 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var11 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0017cb1c();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var11);
    lVar6 = *plVar10;
    uVar9 = *plVar13 - lVar6 >> 3;
    if (uVar9 <= uVar12) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar13 = lVar6 + uVar8 * 8;
        }
      }
      else {
                    /* try { // try from 001caa90 to 001caa97 has its CatchHandler @ 001cab68 */
        FUN_001daf1c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar12 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(__shared_count **)(lVar6 + uVar12 * 8) = p_Var11;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cac94  FUN_001cac94 =====

void FUN_001cac94(undefined8 *param_1,undefined8 *param_2,__shared_count *param_3,ulong param_4)

{
  bool bVar1;
  undefined8 *__s;
  __shared_count *p_Var2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_00209c90;
  param_1[1] = 0xffffffffffffffff;
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  plVar6 = param_1 + 2;
  *plVar6 = 0;
  lVar3 = lVar4 - lVar3 >> 3;
  uVar5 = 0x1c;
  if (0x1c < lVar3 + 1U) {
    uVar5 = lVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (uVar5 >> 0x3d != 0) {
                    /* try { // try from 001cae3c to 001cae43 has its CatchHandler @ 001cae58 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  if (uVar5 < 0x1d) {
    __s = param_1 + 6;
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  else {
                    /* try { // try from 001cad1c to 001cad23 has its CatchHandler @ 001cae58 */
    __s = (undefined8 *)operator_new(uVar5 * 8);
  }
  param_1[2] = __s;
  param_1[4] = __s + uVar5;
  memset(__s,0,uVar5 * 8);
  param_1[3] = __s + uVar5;
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  std::__ndk1::__shared_count::__add_shared(param_3);
  if (param_1 != param_2) {
                    /* try { // try from 001cad60 to 001cad67 has its CatchHandler @ 001cae7c */
    FUN_001dad98(plVar6,param_2[2],param_2[3]);
  }
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  if (lVar4 != lVar3) {
    uVar5 = 0;
    uVar7 = 1;
    do {
      p_Var2 = *(__shared_count **)(*plVar6 + uVar5 * 8);
      if (p_Var2 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(p_Var2);
        lVar3 = param_2[2];
        lVar4 = param_2[3];
      }
      bVar1 = uVar7 < (ulong)(lVar4 - lVar3 >> 3);
      uVar5 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
  }
  std::__ndk1::__shared_count::__add_shared(param_3);
  lVar3 = param_1[2];
  uVar5 = param_1[3] - lVar3 >> 3;
  if (uVar5 <= param_4) {
    uVar7 = param_4 + 1;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      if (uVar7 < uVar5) {
        param_1[3] = lVar3 + uVar7 * 8;
      }
    }
    else {
                    /* try { // try from 001cad9c to 001cada3 has its CatchHandler @ 001cae44 */
      FUN_001daf1c(plVar6,uVar7 - uVar5);
      lVar3 = *plVar6;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + param_4 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *plVar6;
  }
  *(__shared_count **)(lVar3 + param_4 * 8) = param_3;
  if (param_3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(param_3);
    return;
  }
  return;
}


// ===== 001caed0  FUN_001caed0 =====

void FUN_001caed0(long param_1,__shared_count *param_2,ulong param_3)

{
  ulong uVar1;
  __shared_count *this;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar4 = (long *)(param_1 + 0x10);
  lVar2 = *plVar4;
  uVar3 = *(long *)(param_1 + 0x18) - lVar2 >> 3;
  if (uVar3 <= param_3) {
    uVar1 = param_3 + 1;
    if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
      if (uVar1 < uVar3) {
        *(ulong *)(param_1 + 0x18) = lVar2 + uVar1 * 8;
      }
    }
    else {
                    /* try { // try from 001caf1c to 001caf23 has its CatchHandler @ 001caf5c */
      FUN_001daf1c(plVar4,uVar1 - uVar3);
      lVar2 = *plVar4;
    }
  }
  this = *(__shared_count **)(lVar2 + param_3 * 8);
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar2 = *plVar4;
  }
  *(__shared_count **)(lVar2 + param_3 * 8) = param_2;
  return;
}


// ===== 001caf74  FUN_001caf74 =====

void FUN_001caf74(__shared_count *param_1)

{
  bool bVar1;
  __shared_count *p_Var2;
  ulong uVar3;
  __shared_count *p_Var4;
  ulong uVar5;
  
  p_Var2 = *(__shared_count **)(param_1 + 0x10);
  p_Var4 = *(__shared_count **)(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_00209c90;
  if (p_Var4 != p_Var2) {
    uVar3 = 0;
    uVar5 = 1;
    do {
      if (*(__shared_count **)(p_Var2 + uVar3 * 8) != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__release_shared(*(__shared_count **)(p_Var2 + uVar3 * 8));
        p_Var2 = *(__shared_count **)(param_1 + 0x10);
        p_Var4 = *(__shared_count **)(param_1 + 0x18);
      }
      bVar1 = uVar5 < (ulong)((long)p_Var4 - (long)p_Var2 >> 3);
      uVar3 = uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar1);
  }
  if (((byte)param_1[0x120] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x130));
    p_Var2 = *(__shared_count **)(param_1 + 0x10);
  }
  if (p_Var2 != (__shared_count *)0x0) {
    *(__shared_count **)(param_1 + 0x18) = p_Var2;
    if (p_Var2 == param_1 + 0x30) {
      param_1[0x110] = (__shared_count)0x0;
    }
    else {
      operator_delete(p_Var2);
    }
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001cb018  FUN_001cb018 =====

void FUN_001cb018(void *param_1)

{
  FUN_001caf74();
  operator_delete(param_1);
  return;
}


// ===== 001cb03c  FUN_001cb03c =====

void FUN_001cb03c(long param_1,ulong param_2)

{
  if ((param_2 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + param_2 * 8) != 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0017cb1c();
}


// ===== 001cb068  FUN_001cb068 =====

void FUN_001cb068(void)

{
  FUN_001c4ff8(&DAT_00215ad0,1);
  DAT_00214ea8 = &DAT_00215ad0;
  return;
}


// ===== 001cb0a0  FUN_001cb0a0 =====

undefined8 * FUN_001cb0a0(void)

{
  int iVar1;
  
  if (((DAT_00214eb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214eb8), iVar1 != 0)) {
                    /* try { // try from 001cb0f4 to 001cb107 has its CatchHandler @ 001cb12c */
    FUN_001c4ff8(&DAT_00215ad0,1);
    DAT_00214ea8 = (__shared_count *)&DAT_00215ad0;
    DAT_00214eb0 = &DAT_00214ea8;
    __cxa_guard_release(&DAT_00214eb8);
  }
  DAT_00214ec0 = DAT_00214ea8;
  std::__ndk1::__shared_count::__add_shared(DAT_00214ea8);
  return &DAT_00214ec0;
}


// ===== 001cb144  std::__ndk1::locale::__global =====

/* std::__ndk1::locale::__global() */

undefined8 * std::__ndk1::locale::__global(void)

{
  int iVar1;
  
  if (((DAT_00214ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ed0), iVar1 != 0)) {
    if (((DAT_00214eb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214eb8), iVar1 != 0)) {
                    /* try { // try from 001cb1d8 to 001cb1eb has its CatchHandler @ 001cb210 */
      FUN_001c4ff8(&DAT_00215ad0,1);
      DAT_00214ea8 = (__shared_count *)&DAT_00215ad0;
      DAT_00214eb0 = &DAT_00214ea8;
      __cxa_guard_release(&DAT_00214eb8);
    }
    DAT_00214ec0 = DAT_00214ea8;
    __shared_count::__add_shared(DAT_00214ea8);
    DAT_00214ec8 = &DAT_00214ec0;
    __cxa_guard_release(&DAT_00214ed0);
  }
  return DAT_00214ec8;
}


// ===== 001cb234  std::__ndk1::locale::locale =====

/* std::__ndk1::locale::locale() */

void __thiscall std::__ndk1::locale::locale(locale *this)

{
  undefined8 *puVar1;
  __shared_count *this_00;
  
                    /* try { // try from 001cb244 to 001cb247 has its CatchHandler @ 001cb25c */
  puVar1 = (undefined8 *)__global();
  this_00 = (__shared_count *)*puVar1;
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}


// ===== 001cb260  std::__ndk1::locale::locale =====

/* std::__ndk1::locale::locale(std::__ndk1::locale const&) */

void __thiscall std::__ndk1::locale::locale(locale *this,locale *param_1)

{
  __shared_count *this_00;
  
  this_00 = *(__shared_count **)param_1;
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}


// ===== 001cb270  std::__ndk1::locale::~locale =====

/* std::__ndk1::locale::~locale() */

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  __shared_count::__release_shared(*(__shared_count **)this);
  return;
}


// ===== 001cb278  std::__ndk1::locale::operator= =====

/* std::__ndk1::locale::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::locale const&) */

locale * __thiscall std::__ndk1::locale::operator=(locale *this,locale *param_1)

{
  __shared_count::__add_shared(*(__shared_count **)param_1);
  __shared_count::__release_shared(*(__shared_count **)this);
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}


// ===== 001cb2b8  std::__ndk1::locale::locale =====

/* std::__ndk1::locale::locale(char const*) */

void __thiscall std::__ndk1::locale::locale(locale *this,char *param_1)

{
  long lVar1;
  __shared_count *this_00;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 == (char *)0x0) {
                    /* try { // try from 001cb3b8 to 001cb3c3 has its CatchHandler @ 001cb3d0 */
    __throw_runtime_error("locale constructed with null");
LAB_001cb3c4:
                    /* try { // try from 001cb3c4 to 001cb3cb has its CatchHandler @ 001cb3d4 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  this_00 = (__shared_count *)operator_new(0x140);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) goto LAB_001cb3c4;
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001cb35c;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001cb334 to 001cb33b has its CatchHandler @ 001cb3d4 */
    __dest = operator_new(uVar2);
    local_70 = uVar2 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_001cb35c:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001cb360 to 001cb36f has its CatchHandler @ 001cb3dc */
  FUN_001c6a70(this_00,&local_70,0);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001cb400  std::__ndk1::locale::locale =====

/* std::__ndk1::locale::locale(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::locale::locale(locale *this,basic_string_conflict *param_1)

{
  __shared_count *this_00;
  
  this_00 = (__shared_count *)operator_new(0x140);
                    /* try { // try from 001cb424 to 001cb42f has its CatchHandler @ 001cb448 */
  FUN_001c6a70(this_00,param_1,0);
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}


// ===== 001cb45c  std::__ndk1::locale::locale =====

/* std::__ndk1::locale::locale(std::__ndk1::locale const&, char const*, int) */

void __thiscall std::__ndk1::locale::locale(locale *this,locale *param_1,char *param_2,int param_3)

{
  long lVar1;
  __shared_count *this_00;
  size_t __n;
  undefined8 uVar2;
  void *__dest;
  ulong uVar3;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2 == (char *)0x0) {
                    /* try { // try from 001cb574 to 001cb57f has its CatchHandler @ 001cb58c */
    __throw_runtime_error("locale constructed with null");
LAB_001cb580:
                    /* try { // try from 001cb580 to 001cb587 has its CatchHandler @ 001cb590 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  this_00 = (__shared_count *)operator_new(0x140);
  uVar2 = *(undefined8 *)param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) goto LAB_001cb580;
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001cb510;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001cb4e8 to 001cb4ef has its CatchHandler @ 001cb590 */
    __dest = operator_new(uVar3);
    local_80 = uVar3 | 1;
    local_78 = __n;
    local_70 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_001cb510:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001cb514 to 001cb527 has its CatchHandler @ 001cb598 */
  FUN_001c8ef4(this_00,uVar2,&local_80,param_3);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001cb5bc  std::__ndk1::locale::locale =====

/* std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

void __thiscall
std::__ndk1::locale::locale(locale *this,locale *param_1,basic_string_conflict *param_2,int param_3)

{
  __shared_count *this_00;
  
  this_00 = (__shared_count *)operator_new(0x140);
                    /* try { // try from 001cb5ec to 001cb5f7 has its CatchHandler @ 001cb610 */
  FUN_001c8ef4(this_00,*(undefined8 *)param_1,param_2,param_3);
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}


// ===== 001cb624  std::__ndk1::locale::locale =====

/* std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1::locale const&, int) */

void __thiscall
std::__ndk1::locale::locale(locale *this,locale *param_1,locale *param_2,int param_3)

{
  __shared_count *this_00;
  
  this_00 = (__shared_count *)operator_new(0x140);
                    /* try { // try from 001cb658 to 001cb65f has its CatchHandler @ 001cb678 */
  FUN_001c94e8(this_00,*(undefined8 *)param_1,*(undefined8 *)param_2,param_3);
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}


// ===== 001cb68c  std::__ndk1::locale::name =====

/* std::__ndk1::locale::name() const */

void std::__ndk1::locale::name(void)

{
  long *in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(*in_x0 + 0x120));
  return;
}


// ===== 001cb69c  std::__ndk1::locale::__install_ctor =====

/* std::__ndk1::locale::__install_ctor(std::__ndk1::locale const&, std::__ndk1::locale::facet*,
   long) */

void __thiscall
std::__ndk1::locale::__install_ctor(locale *this,locale *param_1,facet *param_2,long param_3)

{
  __shared_count *this_00;
  
  if (param_2 == (facet *)0x0) {
    this_00 = *(__shared_count **)param_1;
  }
  else {
    this_00 = (__shared_count *)operator_new(0x140);
                    /* try { // try from 001cb6d0 to 001cb6db has its CatchHandler @ 001cb6fc */
    FUN_001cac94(this_00,*(undefined8 *)param_1,param_2,param_3);
  }
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}


// ===== 001cb710  std::__ndk1::locale::global =====

/* std::__ndk1::locale::global(std::__ndk1::locale const&) */

void __thiscall std::__ndk1::locale::global(locale *this,locale *param_1)

{
  ulong uVar1;
  char *__locale;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *in_x8;
  long lVar6;
  __shared_count *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)__global();
  this_00 = (__shared_count *)*plVar5;
  *in_x8 = this_00;
  __shared_count::__add_shared(this_00);
  __shared_count::__add_shared(*(__shared_count **)this);
  __shared_count::__release_shared((__shared_count *)*plVar5);
  lVar6 = *(long *)this;
  *plVar5 = lVar6;
                    /* try { // try from 001cb770 to 001cb777 has its CatchHandler @ 001cb870 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (local_60,(basic_string_conflict *)(lVar6 + 0x120));
  uVar1 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    uVar1 = local_58;
  }
  if (uVar1 == 1) {
                    /* try { // try from 001cb794 to 001cb7af has its CatchHandler @ 001cb86c */
    iVar4 = basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      (local_60,0,0xffffffffffffffff,"*",1);
    bVar3 = iVar4 != 0;
  }
  else {
    bVar3 = true;
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (bVar3) {
                    /* try { // try from 001cb7ec to 001cb7f7 has its CatchHandler @ 001cb868 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
              (local_60,(basic_string_conflict *)(*plVar5 + 0x120));
    __locale = (char *)((ulong)local_60 | 1);
    if (((byte)local_60[0] & 1) != 0) {
      __locale = local_50;
    }
                    /* try { // try from 001cb80c to 001cb813 has its CatchHandler @ 001cb850 */
    setlocale(6,__locale);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cb884  std::__ndk1::locale::has_facet =====

/* std::__ndk1::locale::has_facet(std::__ndk1::locale::id&) const */

void __thiscall std::__ndk1::locale::has_facet(locale *this,id *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  id *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined1 **local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)this;
  puStack_58 = PTR___init_0020f928;
  local_50 = 0;
  local_60 = param_1;
  if (*(long *)param_1 != -1) {
    local_48 = &local_40;
    local_40 = (undefined1 *)&local_60;
    __call_once((ulong *)param_1,&local_48,FUN_001db064);
  }
  lVar1 = *(long *)(lVar4 + 0x10);
  if ((long)*(int *)(param_1 + 8) - 1U < (ulong)(*(long *)(lVar4 + 0x18) - lVar1 >> 3)) {
    bVar3 = *(long *)(lVar1 + ((long)*(int *)(param_1 + 8) - 1U) * 8) != 0;
  }
  else {
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


// ===== 001cb940  std::__ndk1::locale::id::__get =====

/* std::__ndk1::locale::id::__get() */

long __thiscall std::__ndk1::locale::id::__get(id *this)

{
  long lVar1;
  id *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined1 **local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puStack_48 = PTR___init_0020f928;
  local_40 = 0;
  local_50 = this;
  if (*(long *)this != -1) {
    local_38 = &local_30;
    local_30 = (undefined1 *)&local_50;
    __call_once((ulong *)this,&local_38,FUN_001db064);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (long)*(int *)(this + 8) + -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cb9cc  std::__ndk1::locale::use_facet =====

/* std::__ndk1::locale::use_facet(std::__ndk1::locale::id&) const */

void __thiscall std::__ndk1::locale::use_facet(locale *this,id *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  id *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined1 **local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)this;
  puStack_58 = PTR___init_0020f928;
  local_50 = 0;
  local_60 = param_1;
  if (*(long *)param_1 != -1) {
    local_48 = &local_40;
    local_40 = (undefined1 *)&local_60;
    __call_once((ulong *)param_1,&local_48,FUN_001db064);
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  if (((long)*(int *)(param_1 + 8) - 1U < (ulong)(*(long *)(lVar3 + 0x18) - lVar1 >> 3)) &&
     (*(long *)(lVar1 + ((long)*(int *)(param_1 + 8) - 1U) * 8) != 0)) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0017cb1c();
}


// ===== 001cba80  std::__ndk1::locale::operator== =====

/* std::__ndk1::locale::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::locale const&) const */

ulong __thiscall std::__ndk1::locale::operator==(locale *this,locale *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *__s1;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  char *__s2;
  size_t sVar10;
  
  lVar8 = *(long *)this;
  lVar9 = *(long *)param_1;
  if (lVar8 != lVar9) {
    bVar3 = *(byte *)(lVar8 + 0x120);
    sVar10 = *(size_t *)(lVar8 + 0x128);
    sVar7 = (size_t)(bVar3 >> 1);
    sVar2 = sVar7;
    if ((bVar3 & 1) != 0) {
      sVar2 = sVar10;
    }
    if (sVar2 == 1) {
                    /* try { // try from 001cbac4 to 001cbadb has its CatchHandler @ 001cbb90 */
      uVar6 = basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(lVar8 + 0x120),0,0xffffffffffffffff,"*",1);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      lVar8 = *(long *)this;
      lVar9 = *(long *)param_1;
      bVar3 = *(byte *)(lVar8 + 0x120);
      sVar10 = *(size_t *)(lVar8 + 0x128);
      sVar7 = (size_t)(bVar3 >> 1);
    }
    bVar4 = *(byte *)(lVar9 + 0x120);
    sVar2 = sVar7;
    if ((bVar3 & 1) != 0) {
      sVar2 = sVar10;
    }
    sVar10 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar10 = *(size_t *)(lVar9 + 0x128);
    }
    if (sVar2 != sVar10) {
      return 0;
    }
    __s2 = *(char **)(lVar9 + 0x130);
    pcVar1 = (char *)(lVar8 + 0x121);
    __s1 = pcVar1;
    if ((bVar3 & 1) != 0) {
      __s1 = *(char **)(lVar8 + 0x130);
    }
    if ((bVar4 & 1) == 0) {
      __s2 = (char *)(lVar9 + 0x121);
    }
    if ((bVar3 & 1) == 0) {
      while (sVar2 != 0) {
        if (*pcVar1 != *__s2) {
          return 0;
        }
        pcVar1 = pcVar1 + 1;
        __s2 = __s2 + 1;
        sVar7 = sVar7 - 1;
        sVar2 = sVar7;
      }
    }
    else if (sVar2 != 0) {
      iVar5 = memcmp(__s1,__s2,sVar2);
      return (ulong)(iVar5 == 0);
    }
  }
  return 1;
}


// ===== 001cbb94  std::__ndk1::locale::facet::~facet =====

/* std::__ndk1::locale::facet::~facet() */

void __thiscall std::__ndk1::locale::facet::~facet(facet *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001cbbb8  std::__ndk1::locale::facet::__on_zero_shared =====

/* std::__ndk1::locale::facet::__on_zero_shared() */

void __thiscall std::__ndk1::locale::facet::__on_zero_shared(facet *this)

{
  if (this != (facet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001cbbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}


// ===== 001cbbcc  std::__ndk1::locale::id::__init =====

/* std::__ndk1::locale::id::__init() */

void __thiscall std::__ndk1::locale::id::__init(id *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  
  puVar4 = PTR___next_id_0020fb68;
  do {
    iVar1 = *(int *)puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *(int *)puVar4 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(int *)(this + 8) = iVar1 + 1;
  return;
}


// ===== 001cbbec  std::__ndk1::collate_byname<char>::collate_byname =====

/* std::__ndk1::collate_byname<char>::collate_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::collate_byname<char>::collate_byname
          (collate_byname<char> *this,char *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0020fb70 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
                    /* try { // try from 001cbc2c to 001cbc37 has its CatchHandler @ 001cbd44 */
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)(this + 0x10) = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 001cbc78 to 001cbc7f has its CatchHandler @ 001cbd40 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001cbcd8;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001cbcb0 to 001cbcb7 has its CatchHandler @ 001cbd40 */
    __dest = operator_new(uVar5);
    local_78 = uVar5 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_001cbcd8:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001cbcdc to 001cbcef has its CatchHandler @ 001cbd28 */
  puVar3 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_78,0,
                           "collate_byname<char>::collate_byname failed to construct for ");
  local_50 = (void *)puVar3[2];
  uStack_58 = puVar3[1];
  local_60 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 001cbd08 to 001cbd0f has its CatchHandler @ 001cbd10 */
  uVar4 = FUN_001cbd58(&local_60);
                    /* catch() { ... } // from try @ 001cbd08 with catch @ 001cbd10 */
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  __shared_count::~__shared_count((__shared_count *)this);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar4);
}


// ===== 001cbd58  FUN_001cbd58 =====

void FUN_001cbd58(basic_string_conflict *param_1)

{
  runtime_error *this;
  
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001cbd74 to 001cbd7b has its CatchHandler @ 001cbd94 */
  std::runtime_error::runtime_error(this,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_0020f958,PTR__underflow_error_0020f960);
}


// ===== 001cbda8  std::__ndk1::collate_byname<char>::collate_byname =====

/* std::__ndk1::collate_byname<char>::collate_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::collate_byname<char>::collate_byname
          (collate_byname<char> *this,basic_string_conflict *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  basic_string_conflict *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0020fb70 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
  __locale = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
                    /* try { // try from 001cbdf4 to 001cbdff has its CatchHandler @ 001cbe68 */
  pbVar3 = (basic_string_conflict *)0x0;
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)(this + 0x10) = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
                    /* try { // try from 001cbe2c to 001cbe3f has its CatchHandler @ 001cbe64 */
    operator+((__ndk1 *)"collate_byname<char>::collate_byname failed to construct for ",
              (char *)param_1,pbVar3);
                    /* try { // try from 001cbe40 to 001cbe47 has its CatchHandler @ 001cbe4c */
    FUN_001cbd58(auStack_50);
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cbe7c  std::__ndk1::collate_byname<char>::~collate_byname =====

/* std::__ndk1::collate_byname<char>::~collate_byname() */

void __thiscall std::__ndk1::collate_byname<char>::~collate_byname(collate_byname<char> *this)

{
  *(undefined **)this = PTR_vtable_0020fb70 + 0x10;
                    /* try { // try from 001cbea0 to 001cbea3 has its CatchHandler @ 001cbeb4 */
  freelocale(*(__locale_t *)(this + 0x10));
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001cbec8  std::__ndk1::collate_byname<char>::~collate_byname =====

/* std::__ndk1::collate_byname<char>::~collate_byname() */

void __thiscall std::__ndk1::collate_byname<char>::~collate_byname(collate_byname<char> *this)

{
  *(undefined **)this = PTR_vtable_0020fb70 + 0x10;
                    /* try { // try from 001cbeec to 001cbeef has its CatchHandler @ 001cbf08 */
  freelocale(*(__locale_t *)(this + 0x10));
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001cbf1c  std::__ndk1::collate_byname<char>::do_compare =====

/* std::__ndk1::collate_byname<char>::do_compare(char const*, char const*, char const*, char const*)
   const */

void __thiscall
std::__ndk1::collate_byname<char>::do_compare
          (collate_byname<char> *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_88;
  ulong local_80;
  char *local_78;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar14 = (long)param_2 - (long)param_1;
  if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar14 << 1));
    pcVar4 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar13 = uVar14 + 0x10 & 0xfffffffffffffff0;
    pcVar4 = (char *)operator_new(uVar13);
    local_70 = uVar13 | 1;
    local_68 = uVar14;
    local_60 = pcVar4;
  }
  if (param_1 != param_2) {
    pcVar5 = pcVar4;
    if (0x1f < uVar14) {
      uVar9 = uVar14 & 0xffffffffffffffe0;
      pcVar5 = pcVar4 + 0x10;
      pcVar4 = pcVar4 + uVar9;
      pcVar7 = param_1 + 0x10;
      uVar13 = uVar9;
      do {
        pcVar6 = pcVar7 + -8;
        uVar15 = *(undefined8 *)(pcVar7 + -0x10);
        uVar17 = *(undefined8 *)(pcVar7 + 8);
        uVar16 = *(undefined8 *)pcVar7;
        uVar13 = uVar13 - 0x20;
        pcVar7 = pcVar7 + 0x20;
        *(undefined8 *)(pcVar5 + -8) = *(undefined8 *)pcVar6;
        *(undefined8 *)(pcVar5 + -0x10) = uVar15;
        *(undefined8 *)(pcVar5 + 8) = uVar17;
        *(undefined8 *)pcVar5 = uVar16;
        pcVar5 = pcVar5 + 0x20;
      } while (uVar13 != 0);
      pcVar5 = pcVar4;
      param_1 = param_1 + uVar9;
      if (uVar14 == uVar9) goto LAB_001cc004;
    }
    do {
      pcVar7 = param_1 + 1;
      pcVar4 = pcVar5 + 1;
      *pcVar5 = *param_1;
      pcVar5 = pcVar4;
      param_1 = pcVar7;
    } while (param_2 != pcVar7);
  }
LAB_001cc004:
  uVar14 = (long)param_4 - (long)param_3;
  *pcVar4 = '\0';
  if (0xffffffffffffffef < uVar14) {
                    /* try { // try from 001cc14c to 001cc153 has its CatchHandler @ 001cc158 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 0x17) {
    uVar13 = local_88 >> 8;
    local_88 = CONCAT71((int7)uVar13,(char)((int)uVar14 << 1));
    pcVar4 = (char *)((ulong)&local_88 | 1);
    uVar13 = local_88;
    pcVar5 = local_78;
    uVar9 = local_70;
    pcVar7 = local_60;
  }
  else {
    uVar13 = uVar14 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001cc040 to 001cc047 has its CatchHandler @ 001cc158 */
    pcVar4 = (char *)operator_new(uVar13);
    local_80 = uVar14;
    uVar13 = uVar13 | 1;
    pcVar5 = pcVar4;
    uVar9 = local_70;
    pcVar7 = local_60;
  }
  if (param_3 != param_4) {
    pcVar6 = pcVar4;
    if (0x1f < uVar14) {
      uVar10 = uVar14 & 0xffffffffffffffe0;
      pcVar6 = pcVar4 + 0x10;
      pcVar4 = pcVar4 + uVar10;
      pcVar8 = param_3 + 0x10;
      uVar12 = uVar10;
      do {
        pcVar2 = pcVar8 + -8;
        uVar15 = *(undefined8 *)(pcVar8 + -0x10);
        uVar17 = *(undefined8 *)(pcVar8 + 8);
        uVar16 = *(undefined8 *)pcVar8;
        uVar12 = uVar12 - 0x20;
        pcVar8 = pcVar8 + 0x20;
        *(undefined8 *)(pcVar6 + -8) = *(undefined8 *)pcVar2;
        *(undefined8 *)(pcVar6 + -0x10) = uVar15;
        *(undefined8 *)(pcVar6 + 8) = uVar17;
        *(undefined8 *)pcVar6 = uVar16;
        pcVar6 = pcVar6 + 0x20;
      } while (uVar12 != 0);
      pcVar6 = pcVar4;
      param_3 = param_3 + uVar10;
      if (uVar14 == uVar10) goto LAB_001cc0b4;
    }
    do {
      pcVar8 = param_3 + 1;
      pcVar4 = pcVar6 + 1;
      *pcVar6 = *param_3;
      pcVar6 = pcVar4;
      param_3 = pcVar8;
    } while (param_4 != pcVar8);
  }
LAB_001cc0b4:
  *pcVar4 = '\0';
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((uVar9 & 1) != 0) {
    pcVar4 = pcVar7;
  }
  pcVar6 = (char *)((ulong)&local_88 | 1);
  if ((uVar13 & 1) != 0) {
    pcVar6 = pcVar5;
  }
  local_88 = uVar13;
  local_78 = pcVar5;
  local_70 = uVar9;
  local_60 = pcVar7;
  iVar3 = strcoll_l(pcVar4,pcVar6,*(__locale_t *)(this + 0x10));
  if ((uVar13 & 1) != 0) {
    operator_delete(pcVar5);
  }
  if ((uVar9 & 1) != 0) {
    operator_delete(pcVar7);
  }
  uVar11 = (uint)(iVar3 != 0);
  if (iVar3 < 0) {
    uVar11 = 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


// ===== 001cc174  std::__ndk1::collate_byname<char>::do_transform =====

/* std::__ndk1::collate_byname<char>::do_transform(char const*, char const*) const */

void std::__ndk1::collate_byname<char>::do_transform(char *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  size_t __n;
  char *in_x2;
  ulong *in_x8;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar9 = (long)in_x2 - (long)param_2;
  if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar9 << 1));
    pcVar3 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
    pcVar3 = (char *)operator_new(uVar8);
    local_70 = uVar8 | 1;
    local_68 = uVar9;
    local_60 = pcVar3;
  }
  if (param_2 != in_x2) {
    pcVar4 = pcVar3;
    if (0x1f < uVar9) {
      uVar6 = uVar9 & 0xffffffffffffffe0;
      pcVar4 = pcVar3 + 0x10;
      pcVar3 = pcVar3 + uVar6;
      pcVar5 = param_2 + 0x10;
      uVar8 = uVar6;
      do {
        pcVar2 = pcVar5 + -8;
        uVar10 = *(undefined8 *)(pcVar5 + -0x10);
        uVar12 = *(undefined8 *)(pcVar5 + 8);
        uVar11 = *(undefined8 *)pcVar5;
        uVar8 = uVar8 - 0x20;
        pcVar5 = pcVar5 + 0x20;
        *(undefined8 *)(pcVar4 + -8) = *(undefined8 *)pcVar2;
        *(undefined8 *)(pcVar4 + -0x10) = uVar10;
        *(undefined8 *)(pcVar4 + 8) = uVar12;
        *(undefined8 *)pcVar4 = uVar11;
        pcVar4 = pcVar4 + 0x20;
      } while (uVar8 != 0);
      pcVar4 = pcVar3;
      param_2 = param_2 + uVar6;
      if (uVar9 == uVar6) goto LAB_001cc258;
    }
    do {
      pcVar5 = param_2 + 1;
      pcVar3 = pcVar4 + 1;
      *pcVar4 = *param_2;
      pcVar4 = pcVar3;
      param_2 = pcVar5;
    } while (in_x2 != pcVar5);
  }
LAB_001cc258:
  *pcVar3 = '\0';
  pcVar3 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar3 = local_60;
  }
                    /* try { // try from 001cc278 to 001cc2bb has its CatchHandler @ 001cc394 */
  __n = strxfrm_l((char *)0x0,pcVar3,0,*(__locale_t *)(param_1 + 0x10));
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 001cc358 to 001cc35f has its CatchHandler @ 001cc394 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pbVar7 = (byte *)((long)in_x8 + 1);
    *(byte *)in_x8 = (byte)((int)__n << 1);
    if (__n == 0) goto LAB_001cc2dc;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    pbVar7 = (byte *)operator_new(uVar9);
    in_x8[1] = __n;
    in_x8[2] = (ulong)pbVar7;
    *in_x8 = uVar9 | 1;
  }
  memset(pbVar7,0,__n);
LAB_001cc2dc:
  pbVar7[__n] = 0;
  uVar9 = in_x8[1];
  pbVar7 = (byte *)in_x8[2];
  pcVar3 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar3 = local_60;
  }
  if (((byte)*in_x8 & 1) == 0) {
    pbVar7 = (byte *)((long)in_x8 + 1);
    uVar9 = (ulong)(byte)((byte)*in_x8 >> 1);
  }
                    /* try { // try from 001cc310 to 001cc313 has its CatchHandler @ 001cc364 */
  strxfrm_l((char *)pbVar7,pcVar3,uVar9 + 1,*(__locale_t *)(param_1 + 0x10));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001cc3b0  std::__ndk1::collate_byname<wchar_t>::collate_byname =====

/* std::__ndk1::collate_byname<wchar_t>::collate_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::collate_byname<wchar_t>::collate_byname
          (collate_byname<wchar_t> *this,char *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0020fb78 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
                    /* try { // try from 001cc3f0 to 001cc3fb has its CatchHandler @ 001cc508 */
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)(this + 0x10) = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 001cc43c to 001cc443 has its CatchHandler @ 001cc504 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001cc49c;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001cc474 to 001cc47b has its CatchHandler @ 001cc504 */
    __dest = operator_new(uVar5);
    local_78 = uVar5 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_001cc49c:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001cc4a0 to 001cc4b3 has its CatchHandler @ 001cc4ec */
  puVar3 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_78,0,
                           "collate_byname<wchar_t>::collate_byname(size_t refs) failed to construct for "
                          );
  local_50 = (void *)puVar3[2];
  uStack_58 = puVar3[1];
  local_60 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 001cc4cc to 001cc4d3 has its CatchHandler @ 001cc4d4 */
  uVar4 = FUN_001cbd58(&local_60);
                    /* catch() { ... } // from try @ 001cc4cc with catch @ 001cc4d4 */
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  __shared_count::~__shared_count((__shared_count *)this);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar4);
}


// ===== 001cc51c  std::__ndk1::collate_byname<wchar_t>::collate_byname =====

/* std::__ndk1::collate_byname<wchar_t>::collate_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::collate_byname<wchar_t>::collate_byname
          (collate_byname<wchar_t> *this,basic_string_conflict *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  basic_string_conflict *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0020fb78 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
  __locale = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
                    /* try { // try from 001cc568 to 001cc573 has its CatchHandler @ 001cc5dc */
  pbVar3 = (basic_string_conflict *)0x0;
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)(this + 0x10) = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
                    /* try { // try from 001cc5a0 to 001cc5b3 has its CatchHandler @ 001cc5d8 */
    operator+((__ndk1 *)
              "collate_byname<wchar_t>::collate_byname(size_t refs) failed to construct for ",
              (char *)param_1,pbVar3);
                    /* try { // try from 001cc5b4 to 001cc5bb has its CatchHandler @ 001cc5c0 */
    FUN_001cbd58(auStack_50);
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cc5f0  std::__ndk1::collate_byname<wchar_t>::~collate_byname =====

/* std::__ndk1::collate_byname<wchar_t>::~collate_byname() */

void __thiscall std::__ndk1::collate_byname<wchar_t>::~collate_byname(collate_byname<wchar_t> *this)

{
  *(undefined **)this = PTR_vtable_0020fb78 + 0x10;
                    /* try { // try from 001cc614 to 001cc617 has its CatchHandler @ 001cc628 */
  freelocale(*(__locale_t *)(this + 0x10));
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001cc63c  std::__ndk1::collate_byname<wchar_t>::~collate_byname =====

/* std::__ndk1::collate_byname<wchar_t>::~collate_byname() */

void __thiscall std::__ndk1::collate_byname<wchar_t>::~collate_byname(collate_byname<wchar_t> *this)

{
  *(undefined **)this = PTR_vtable_0020fb78 + 0x10;
                    /* try { // try from 001cc660 to 001cc663 has its CatchHandler @ 001cc67c */
  freelocale(*(__locale_t *)(this + 0x10));
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001cc690  std::__ndk1::collate_byname<wchar_t>::do_compare =====

/* std::__ndk1::collate_byname<wchar_t>::do_compare(wchar_t const*, wchar_t const*, wchar_t const*,
   wchar_t const*) const */

void __thiscall
std::__ndk1::collate_byname<wchar_t>::do_compare
          (collate_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  long lVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  ulong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_98;
  ulong local_90;
  wchar_t *local_88;
  ulong local_80;
  ulong local_78;
  wchar_t *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar13 = (long)param_2 - (long)param_1;
  uVar14 = (long)uVar13 >> 2;
  if (0x3fffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 5) {
    local_80 = CONCAT71(local_80._1_7_,(char)(uVar13 >> 1)) & 0xfffffffffffffffe;
    pwVar4 = (wchar_t *)((ulong)&local_80 | 4);
  }
  else {
    if (uVar14 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar12 = uVar14 + 4 & 0xfffffffffffffffc;
    pwVar4 = (wchar_t *)operator_new(uVar12 << 2);
    local_80 = uVar12 | 1;
    local_78 = uVar14;
    local_70 = pwVar4;
  }
  if (param_1 != param_2) {
    pwVar5 = pwVar4;
    if (0x1b < uVar13 - 4) {
      uVar13 = (uVar13 - 4 >> 2) + 1;
      uVar12 = uVar13 & 0x7ffffffffffffff8;
      pwVar5 = pwVar4 + 4;
      pwVar4 = pwVar4 + uVar12;
      pwVar9 = param_1 + 4;
      uVar14 = uVar12;
      do {
        pwVar6 = pwVar9 + -2;
        uVar15 = *(undefined8 *)(pwVar9 + -4);
        uVar17 = *(undefined8 *)(pwVar9 + 2);
        uVar16 = *(undefined8 *)pwVar9;
        uVar14 = uVar14 - 8;
        pwVar9 = pwVar9 + 8;
        *(undefined8 *)(pwVar5 + -2) = *(undefined8 *)pwVar6;
        *(undefined8 *)(pwVar5 + -4) = uVar15;
        *(undefined8 *)(pwVar5 + 2) = uVar17;
        *(undefined8 *)pwVar5 = uVar16;
        pwVar5 = pwVar5 + 8;
      } while (uVar14 != 0);
      pwVar5 = pwVar4;
      param_1 = param_1 + uVar12;
      if (uVar13 == uVar12) goto LAB_001cc7a4;
    }
    do {
      pwVar9 = param_1 + 1;
      pwVar4 = pwVar5 + 1;
      *pwVar5 = *param_1;
      pwVar5 = pwVar4;
      param_1 = pwVar9;
    } while (param_2 != pwVar9);
  }
LAB_001cc7a4:
  uVar13 = (long)param_4 - (long)param_3;
  uVar14 = (long)uVar13 >> 2;
  *pwVar4 = L'\0';
  if (0x3fffffffffffffef < uVar14) {
                    /* try { // try from 001cc910 to 001cc917 has its CatchHandler @ 001cc934 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 5) {
    local_98._1_7_ = (undefined7)(local_98 >> 8);
    local_98 = CONCAT71(local_98._1_7_,(char)(uVar13 >> 1)) & 0xfffffffffffffffe;
    pwVar4 = (wchar_t *)((ulong)&local_98 | 4);
    uVar14 = local_98;
    pwVar5 = local_88;
    uVar12 = local_80;
    pwVar9 = local_70;
  }
  else {
    if (uVar14 + 4 >> 0x3e != 0) {
                    /* try { // try from 001cc928 to 001cc933 has its CatchHandler @ 001cc934 */
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar12 = uVar14 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 001cc7f4 to 001cc7f7 has its CatchHandler @ 001cc934 */
    pwVar4 = (wchar_t *)operator_new(uVar12 << 2);
    local_90 = uVar14;
    uVar14 = uVar12 | 1;
    pwVar5 = pwVar4;
    uVar12 = local_80;
    pwVar9 = local_70;
  }
  if (param_3 != param_4) {
    pwVar6 = pwVar4;
    if (0x1b < uVar13 - 4) {
      uVar13 = (uVar13 - 4 >> 2) + 1;
      uVar8 = uVar13 & 0x7ffffffffffffff8;
      pwVar6 = pwVar4 + 4;
      pwVar4 = pwVar4 + uVar8;
      pwVar10 = param_3 + 4;
      uVar11 = uVar8;
      do {
        pwVar2 = pwVar10 + -2;
        uVar15 = *(undefined8 *)(pwVar10 + -4);
        uVar17 = *(undefined8 *)(pwVar10 + 2);
        uVar16 = *(undefined8 *)pwVar10;
        uVar11 = uVar11 - 8;
        pwVar10 = pwVar10 + 8;
        *(undefined8 *)(pwVar6 + -2) = *(undefined8 *)pwVar2;
        *(undefined8 *)(pwVar6 + -4) = uVar15;
        *(undefined8 *)(pwVar6 + 2) = uVar17;
        *(undefined8 *)pwVar6 = uVar16;
        pwVar6 = pwVar6 + 8;
      } while (uVar11 != 0);
      pwVar6 = pwVar4;
      param_3 = param_3 + uVar8;
      if (uVar13 == uVar8) goto LAB_001cc874;
    }
    do {
      pwVar10 = param_3 + 1;
      pwVar4 = pwVar6 + 1;
      *pwVar6 = *param_3;
      pwVar6 = pwVar4;
      param_3 = pwVar10;
    } while (param_4 != pwVar10);
  }
LAB_001cc874:
  *pwVar4 = L'\0';
  pwVar4 = (wchar_t *)((ulong)&local_80 | 4);
  if ((uVar12 & 1) != 0) {
    pwVar4 = pwVar9;
  }
  pwVar6 = (wchar_t *)((ulong)&local_98 | 4);
  if ((uVar14 & 1) != 0) {
    pwVar6 = pwVar5;
  }
  local_98 = uVar14;
  local_88 = pwVar5;
  local_80 = uVar12;
  local_70 = pwVar9;
  iVar3 = wcscoll_l(pwVar4,pwVar6,*(__locale_t *)(this + 0x10));
  if ((uVar14 & 1) != 0) {
    operator_delete(pwVar5);
  }
  if ((uVar12 & 1) != 0) {
    operator_delete(pwVar9);
  }
  uVar7 = (uint)(iVar3 != 0);
  if (iVar3 < 0) {
    uVar7 = 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 001cc950  std::__ndk1::collate_byname<wchar_t>::do_transform =====

/* std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

void std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  size_t __n;
  wchar_t *in_x2;
  ulong *in_x8;
  ulong uVar5;
  wchar_t *pwVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_80;
  ulong local_78;
  wchar_t *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar7 = (long)in_x2 - (long)param_2;
  uVar8 = (long)uVar7 >> 2;
  if (0x3fffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar8 < 5) {
    local_80 = CONCAT71(local_80._1_7_,(char)(uVar7 >> 1)) & 0xfffffffffffffffe;
    pwVar3 = (wchar_t *)((ulong)&local_80 | 4);
  }
  else {
    if (uVar8 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar5 = uVar8 + 4 & 0xfffffffffffffffc;
    pwVar3 = (wchar_t *)operator_new(uVar5 << 2);
    local_80 = uVar5 | 1;
    local_78 = uVar8;
    local_70 = pwVar3;
  }
  if (param_2 != in_x2) {
    pwVar4 = pwVar3;
    if (0x1b < uVar7 - 4) {
      uVar7 = (uVar7 - 4 >> 2) + 1;
      uVar5 = uVar7 & 0x7ffffffffffffff8;
      pwVar4 = pwVar3 + 4;
      pwVar3 = pwVar3 + uVar5;
      pwVar6 = param_2 + 4;
      uVar8 = uVar5;
      do {
        pwVar2 = pwVar6 + -2;
        uVar9 = *(undefined8 *)(pwVar6 + -4);
        uVar11 = *(undefined8 *)(pwVar6 + 2);
        uVar10 = *(undefined8 *)pwVar6;
        uVar8 = uVar8 - 8;
        pwVar6 = pwVar6 + 8;
        *(undefined8 *)(pwVar4 + -2) = *(undefined8 *)pwVar2;
        *(undefined8 *)(pwVar4 + -4) = uVar9;
        *(undefined8 *)(pwVar4 + 2) = uVar11;
        *(undefined8 *)pwVar4 = uVar10;
        pwVar4 = pwVar4 + 8;
      } while (uVar8 != 0);
      pwVar4 = pwVar3;
      param_2 = param_2 + uVar5;
      if (uVar7 == uVar5) goto LAB_001cca60;
    }
    do {
      pwVar6 = param_2 + 1;
      pwVar3 = pwVar4 + 1;
      *pwVar4 = *param_2;
      pwVar4 = pwVar3;
      param_2 = pwVar6;
    } while (in_x2 != pwVar6);
  }
LAB_001cca60:
  *pwVar3 = L'\0';
  pwVar3 = (wchar_t *)((ulong)&local_80 | 4);
  if ((local_80 & 1) != 0) {
    pwVar3 = local_70;
  }
                    /* try { // try from 001cca80 to 001ccacb has its CatchHandler @ 001ccbc8 */
  __n = wcsxfrm_l((wchar_t *)0x0,pwVar3,0,*(__locale_t *)(param_1 + 4));
  if (0x3fffffffffffffef < __n) {
                    /* try { // try from 001ccb70 to 001ccb77 has its CatchHandler @ 001ccbc8 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 5) {
    pwVar3 = (wchar_t *)((long)in_x8 + 4);
    *(byte *)in_x8 = (byte)((int)__n << 1);
    if (__n == 0) goto LAB_001ccaec;
  }
  else {
    if (__n + 4 >> 0x3e != 0) {
                    /* try { // try from 001ccb88 to 001ccb93 has its CatchHandler @ 001ccbc8 */
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar7 = __n + 4 & 0xfffffffffffffffc;
    pwVar3 = (wchar_t *)operator_new(uVar7 << 2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)pwVar3;
    *in_x8 = uVar7 | 1;
  }
                    /* try { // try from 001ccadc to 001ccaeb has its CatchHandler @ 001ccb94 */
  wmemset(pwVar3,L'\0',__n);
LAB_001ccaec:
  pwVar3[__n] = L'\0';
  pwVar3 = (wchar_t *)((ulong)&local_80 | 4);
  if ((local_80 & 1) != 0) {
    pwVar3 = local_70;
  }
  uVar7 = (ulong)(byte)((byte)*in_x8 >> 1);
  pwVar4 = (wchar_t *)((long)in_x8 + 4);
  if (((byte)*in_x8 & 1) != 0) {
    uVar7 = in_x8[1];
    pwVar4 = (wchar_t *)in_x8[2];
  }
                    /* try { // try from 001ccb24 to 001ccb27 has its CatchHandler @ 001ccb98 */
  wcsxfrm_l(pwVar4,pwVar3,uVar7 + 1,*(__locale_t *)(param_1 + 4));
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001ccbe4  std::__ndk1::ctype<wchar_t>::~ctype =====

/* std::__ndk1::ctype<wchar_t>::~ctype() */

void __thiscall std::__ndk1::ctype<wchar_t>::~ctype(ctype<wchar_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001ccc08  std::__ndk1::ctype<wchar_t>::do_is =====

/* std::__ndk1::ctype<wchar_t>::do_is(unsigned long, wchar_t) const */

bool __thiscall
std::__ndk1::ctype<wchar_t>::do_is(ctype<wchar_t> *this,ulong param_1,wchar_t param_2)

{
  if (0x7f < (uint)param_2) {
    return false;
  }
  return (*(ulong *)(&DAT_001479e8 + (ulong)(uint)param_2 * 8) & param_1) != 0;
}


// ===== 001ccc30  std::__ndk1::ctype<char>::classic_table =====

/* std::__ndk1::ctype<char>::classic_table() */

undefined * std::__ndk1::ctype<char>::classic_table(void)

{
  return &DAT_001479e8;
}


// ===== 001ccc3c  std::__ndk1::ctype<wchar_t>::do_is =====

/* std::__ndk1::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned long*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_is
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ulong *param_3)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 != param_2) {
    do {
      if ((uint)*pwVar1 < 0x80) {
        uVar2 = *(ulong *)(&DAT_001479e8 + (ulong)(uint)*pwVar1 * 8);
      }
      else {
        uVar2 = 0;
      }
      pwVar1 = pwVar1 + 1;
      *param_3 = uVar2;
      param_1 = param_2;
      param_3 = param_3 + 1;
    } while (param_2 != pwVar1);
  }
  return param_1;
}


// ===== 001ccc84  std::__ndk1::ctype<wchar_t>::do_scan_is =====

/* std::__ndk1::ctype<wchar_t>::do_scan_is(unsigned long, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_scan_is
          (ctype<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  if (param_2 != param_3) {
    while ((0x7f < (uint)*param_2 ||
           ((*(ulong *)(&DAT_001479e8 + (ulong)(uint)*param_2 * 8) & param_1) == 0))) {
      param_2 = param_2 + 1;
      if (param_3 == param_2) {
        return param_3;
      }
    }
  }
  return param_2;
}


// ===== 001ccccc  std::__ndk1::ctype<wchar_t>::do_scan_not =====

/* std::__ndk1::ctype<wchar_t>::do_scan_not(unsigned long, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_scan_not
          (ctype<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (0x7f < (uint)*pwVar1) {
        return pwVar1;
      }
      if ((*(ulong *)(&DAT_001479e8 + (ulong)(uint)*pwVar1 * 8) & param_1) == 0) {
        return pwVar1;
      }
      pwVar1 = pwVar1 + 1;
      param_2 = param_3;
    } while (param_3 != pwVar1);
  }
  return param_2;
}


// ===== 001ccd0c  std::__ndk1::ctype<wchar_t>::do_toupper =====

/* std::__ndk1::ctype<wchar_t>::do_toupper(wchar_t) const */

wchar_t __thiscall std::__ndk1::ctype<wchar_t>::do_toupper(ctype<wchar_t> *this,wchar_t param_1)

{
  int iVar1;
  
  if ((uint)param_1 < 0x80) {
    if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001ccd74 to 001ccd87 has its CatchHandler @ 001ccd9c */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    iVar1 = iswlower_l(param_1,DAT_00214e98);
    if (iVar1 != 0) {
      param_1 = param_1 + L'\xffffffe0';
    }
  }
  return param_1;
}


// ===== 001ccdb4  std::__ndk1::ctype<wchar_t>::do_toupper =====

/* std::__ndk1::ctype<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_toupper(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  
  pwVar3 = param_1;
  if (param_1 != param_2) {
    do {
      wVar4 = *pwVar3;
      if ((uint)wVar4 < 0x80) {
        if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001cce44 to 001cce53 has its CatchHandler @ 001cce74 */
          DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_00214ea0);
        }
        iVar1 = islower_l(wVar4,DAT_00214e98);
        wVar4 = *pwVar3;
        if (iVar1 != 0) {
          wVar4 = *pwVar3 + L'\xffffffe0';
        }
      }
      pwVar2 = pwVar3 + 1;
      *pwVar3 = wVar4;
      param_1 = param_2;
      pwVar3 = pwVar2;
    } while (param_2 != pwVar2);
  }
  return param_1;
}


// ===== 001cce8c  std::__ndk1::ctype<wchar_t>::do_tolower =====

/* std::__ndk1::ctype<wchar_t>::do_tolower(wchar_t) const */

wchar_t __thiscall std::__ndk1::ctype<wchar_t>::do_tolower(ctype<wchar_t> *this,wchar_t param_1)

{
  int iVar1;
  
  if ((uint)param_1 < 0x80) {
    if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001ccef4 to 001ccf07 has its CatchHandler @ 001ccf1c */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    iVar1 = isupper_l(param_1,DAT_00214e98);
    if (iVar1 != 0) {
      param_1 = param_1 + L' ';
    }
  }
  return param_1;
}


// ===== 001ccf34  std::__ndk1::ctype<wchar_t>::do_tolower =====

/* std::__ndk1::ctype<wchar_t>::do_tolower(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_tolower(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  
  pwVar3 = param_1;
  if (param_1 != param_2) {
    do {
      wVar4 = *pwVar3;
      if ((uint)wVar4 < 0x80) {
        if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001ccfc4 to 001ccfd3 has its CatchHandler @ 001ccff4 */
          DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_00214ea0);
        }
        iVar1 = isupper_l(wVar4,DAT_00214e98);
        wVar4 = *pwVar3;
        if (iVar1 != 0) {
          wVar4 = *pwVar3 + L' ';
        }
      }
      pwVar2 = pwVar3 + 1;
      *pwVar3 = wVar4;
      param_1 = param_2;
      pwVar3 = pwVar2;
    } while (param_2 != pwVar2);
  }
  return param_1;
}


// ===== 001cd00c  std::__ndk1::ctype<wchar_t>::do_widen =====

/* std::__ndk1::ctype<wchar_t>::do_widen(char) const */

char __thiscall std::__ndk1::ctype<wchar_t>::do_widen(ctype<wchar_t> *this,char param_1)

{
  return param_1;
}


// ===== 001cd014  std::__ndk1::ctype<wchar_t>::do_widen =====

/* std::__ndk1::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */

char * __thiscall
std::__ndk1::ctype<wchar_t>::do_widen
          (ctype<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)param_1;
  if (param_1 != param_2) {
    do {
      pbVar1 = pbVar2 + 1;
      *param_3 = (uint)*pbVar2;
      param_1 = param_2;
      pbVar2 = pbVar1;
      param_3 = param_3 + 1;
    } while ((byte *)param_2 != pbVar1);
  }
  return param_1;
}


// ===== 001cd038  std::__ndk1::ctype<wchar_t>::do_narrow =====

/* std::__ndk1::ctype<wchar_t>::do_narrow(wchar_t, char) const */

wchar_t __thiscall
std::__ndk1::ctype<wchar_t>::do_narrow(ctype<wchar_t> *this,wchar_t param_1,char param_2)

{
  wchar_t wVar1;
  
  wVar1 = (uint)(byte)param_2;
  if ((uint)param_1 < 0x80) {
    wVar1 = param_1;
  }
  return wVar1;
}


// ===== 001cd044  std::__ndk1::ctype<wchar_t>::do_narrow =====

/* std::__ndk1::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_narrow
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  wchar_t wVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  unkbyte9 Var8;
  wchar_t *pwVar9;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  wchar_t *pwVar10;
  
  if (param_1 != param_2) {
    uVar11 = (long)param_2 + (-4 - (long)param_1);
    pwVar9 = param_1;
    if ((0x1b < uVar11) &&
       ((uVar11 = (uVar11 >> 2) + 1, param_1 + uVar11 <= param_4 || (param_4 + uVar11 <= param_1))))
    {
      uVar12 = uVar11 & 0x7ffffffffffffff8;
      pwVar9 = param_1 + 4;
      pcVar13 = param_4 + 4;
      uVar14 = uVar12;
      do {
        pwVar10 = pwVar9 + -4;
        uVar6 = *(undefined8 *)(pwVar9 + -2);
        uVar15 = (undefined1)((ulong)uVar6 >> 8);
        uVar16 = (undefined1)((ulong)uVar6 >> 0x20);
        uVar17 = (undefined1)((ulong)uVar6 >> 0x28);
        uVar3 = *(undefined8 *)pwVar10;
        uVar7 = *(undefined8 *)(pwVar9 + 2);
        uVar18 = (undefined1)((ulong)uVar7 >> 8);
        uVar19 = (undefined1)((ulong)uVar7 >> 0x20);
        uVar20 = (undefined1)((ulong)uVar7 >> 0x28);
        uVar5 = *(undefined8 *)pwVar9;
        Var8 = *(unkbyte9 *)pwVar9;
        pwVar9 = pwVar9 + 8;
        uVar14 = uVar14 - 8;
        auVar21._8_4_ = 0x7f;
        auVar21._0_8_ = 0x7f0000007f;
        auVar21._12_4_ = 0x7f;
        auVar2[9] = uVar15;
        auVar2._0_9_ = *(unkbyte9 *)pwVar10;
        auVar2[10] = (char)((ulong)uVar6 >> 0x10);
        auVar2[0xb] = (char)((ulong)uVar6 >> 0x18);
        auVar2[0xc] = uVar16;
        auVar2[0xd] = uVar17;
        auVar2[0xe] = (char)((ulong)uVar6 >> 0x30);
        auVar2[0xf] = (char)((ulong)uVar6 >> 0x38);
        auVar21 = NEON_cmhi(auVar2,auVar21,4);
        auVar22._8_4_ = 0x7f;
        auVar22._0_8_ = 0x7f0000007f;
        auVar22._12_4_ = 0x7f;
        auVar4[9] = uVar18;
        auVar4._0_9_ = Var8;
        auVar4[10] = (char)((ulong)uVar7 >> 0x10);
        auVar4[0xb] = (char)((ulong)uVar7 >> 0x18);
        auVar4[0xc] = uVar19;
        auVar4[0xd] = uVar20;
        auVar4[0xe] = (char)((ulong)uVar7 >> 0x30);
        auVar4[0xf] = (char)((ulong)uVar7 >> 0x38);
        auVar22 = NEON_cmhi(auVar4,auVar22,4);
        uVar3 = NEON_bit(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14((char)uVar6,
                                                                                  CONCAT13((char)((
                                                  ulong)uVar3 >> 0x28),
                                                  CONCAT12((char)((ulong)uVar3 >> 0x20),(short)uVar3
                                                          )))))),
                         (ulong)CONCAT16(param_3,(uint6)CONCAT14(param_3,(uint)CONCAT12(param_3,(
                                                  ushort)(byte)param_3))),
                         CONCAT26(auVar21._12_2_,
                                  CONCAT24(auVar21._8_2_,CONCAT22(auVar21._4_2_,auVar21._0_2_))),1);
        uVar6 = NEON_bit(CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14((char)uVar7,
                                                                                  CONCAT13((char)((
                                                  ulong)uVar5 >> 0x28),
                                                  CONCAT12((char)((ulong)uVar5 >> 0x20),(short)uVar5
                                                          )))))),
                         (ulong)CONCAT16(param_3,(uint6)CONCAT14(param_3,(uint)CONCAT12(param_3,(
                                                  ushort)(byte)param_3))),
                         CONCAT26(auVar22._12_2_,
                                  CONCAT24(auVar22._8_2_,CONCAT22(auVar22._4_2_,auVar22._0_2_))),1);
        *(ulong *)(pcVar13 + -4) =
             CONCAT17((char)((ulong)uVar6 >> 0x30),
                      CONCAT16((char)((ulong)uVar6 >> 0x20),
                               CONCAT15((char)((ulong)uVar6 >> 0x10),
                                        CONCAT14((char)uVar6,
                                                 CONCAT13((char)((ulong)uVar3 >> 0x30),
                                                          CONCAT12((char)((ulong)uVar3 >> 0x20),
                                                                   CONCAT11((char)((ulong)uVar3 >>
                                                                                  0x10),(char)uVar3)
                                                                  ))))));
        pcVar13 = pcVar13 + 8;
      } while (uVar14 != 0);
      pwVar9 = param_1 + uVar12;
      param_4 = param_4 + uVar12;
      if (uVar11 == uVar12) {
        return param_2;
      }
    }
    do {
      pwVar10 = pwVar9 + 1;
      wVar1 = (uint)(byte)param_3;
      if ((uint)*pwVar9 < 0x80) {
        wVar1 = *pwVar9;
      }
      *param_4 = (char)wVar1;
      pwVar9 = pwVar10;
      param_1 = param_2;
      param_4 = param_4 + 1;
    } while (param_2 != pwVar10);
  }
  return param_1;
}


// ===== 001cd10c  std::__ndk1::ctype<char>::ctype =====

/* std::__ndk1::ctype<char>::ctype(unsigned long const*, bool, unsigned long) */

void __thiscall
std::__ndk1::ctype<char>::ctype(ctype<char> *this,ulong *param_1,bool param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0020f9a8;
  *(ulong *)(this + 8) = param_3 - 1;
  *(ulong **)(this + 0x10) = param_1;
  *(undefined **)this = puVar1 + 0x10;
  this[0x18] = (ctype<char>)param_2;
  if (param_1 != (ulong *)0x0) {
    return;
  }
  *(undefined **)(this + 0x10) = &DAT_001479e8;
  return;
}


// ===== 001cd144  std::__ndk1::ctype<char>::~ctype =====

/* std::__ndk1::ctype<char>::~ctype() */

void __thiscall std::__ndk1::ctype<char>::~ctype(ctype<char> *this)

{
  *(undefined **)this = PTR_vtable_0020f9a8 + 0x10;
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (ctype<char>)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001cd188  std::__ndk1::ctype<char>::~ctype =====

/* std::__ndk1::ctype<char>::~ctype() */

void __thiscall std::__ndk1::ctype<char>::~ctype(ctype<char> *this)

{
  *(undefined **)this = PTR_vtable_0020f9a8 + 0x10;
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (ctype<char>)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001cd1d4  std::__ndk1::ctype<char>::do_toupper =====

/* std::__ndk1::ctype<char>::do_toupper(char) const */

uint __thiscall std::__ndk1::ctype<char>::do_toupper(ctype<char> *this,char param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(byte)param_1;
  if (-1 < param_1) {
    if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001cd23c to 001cd24f has its CatchHandler @ 001cd264 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    iVar1 = islower_l((uint)(byte)param_1,DAT_00214e98);
    uVar2 = (uint)(byte)param_1;
    if (iVar1 != 0) {
      uVar2 = (byte)param_1 - 0x20;
    }
  }
  return uVar2;
}


// ===== 001cd27c  std::__ndk1::ctype<char>::do_toupper =====

/* std::__ndk1::ctype<char>::do_toupper(char*, char const*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_toupper(ctype<char> *this,char *param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = (byte *)param_1;
  if (param_1 != param_2) {
    do {
      bVar4 = *pbVar3;
      if (-1 < (char)bVar4) {
        if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001cd308 to 001cd317 has its CatchHandler @ 001cd338 */
          DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_00214ea0);
        }
        iVar1 = islower_l((uint)bVar4,DAT_00214e98);
        bVar4 = *pbVar3;
        if (iVar1 != 0) {
          bVar4 = *pbVar3 - 0x20;
        }
      }
      pbVar2 = pbVar3 + 1;
      *pbVar3 = bVar4;
      param_1 = param_2;
      pbVar3 = pbVar2;
    } while ((byte *)param_2 != pbVar2);
  }
  return param_1;
}


// ===== 001cd350  std::__ndk1::ctype<char>::do_tolower =====

/* std::__ndk1::ctype<char>::do_tolower(char) const */

uint __thiscall std::__ndk1::ctype<char>::do_tolower(ctype<char> *this,char param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(byte)param_1;
  if (-1 < param_1) {
    if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001cd3b8 to 001cd3cb has its CatchHandler @ 001cd3e0 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    iVar1 = isupper_l((uint)(byte)param_1,DAT_00214e98);
    uVar2 = (uint)(byte)param_1;
    if (iVar1 != 0) {
      uVar2 = (byte)param_1 + 0x20;
    }
  }
  return uVar2;
}


// ===== 001cd3f8  std::__ndk1::ctype<char>::do_tolower =====

/* std::__ndk1::ctype<char>::do_tolower(char*, char const*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_tolower(ctype<char> *this,char *param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = (byte *)param_1;
  if (param_1 != param_2) {
    do {
      bVar4 = *pbVar3;
      if (-1 < (char)bVar4) {
        if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001cd484 to 001cd493 has its CatchHandler @ 001cd4b4 */
          DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_00214ea0);
        }
        iVar1 = isupper_l((uint)bVar4,DAT_00214e98);
        bVar4 = *pbVar3;
        if (iVar1 != 0) {
          bVar4 = *pbVar3 + 0x20;
        }
      }
      pbVar2 = pbVar3 + 1;
      *pbVar3 = bVar4;
      param_1 = param_2;
      pbVar3 = pbVar2;
    } while ((byte *)param_2 != pbVar2);
  }
  return param_1;
}


// ===== 001cd4cc  std::__ndk1::ctype<char>::do_widen =====

/* std::__ndk1::ctype<char>::do_widen(char) const */

char __thiscall std::__ndk1::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  return param_1;
}


// ===== 001cd4d4  std::__ndk1::ctype<char>::do_widen =====

/* std::__ndk1::ctype<char>::do_widen(char const*, char const*, char*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_widen(ctype<char> *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pcVar3 = param_1;
  if (param_1 != param_2) {
    uVar4 = (long)param_2 - (long)param_1;
    if ((0x1f < uVar4) && ((param_2 <= param_3 || (param_3 + uVar4 <= param_1)))) {
      uVar5 = uVar4 & 0xffffffffffffffe0;
      pcVar3 = param_1 + 0x10;
      param_1 = param_1 + uVar5;
      pcVar2 = param_3 + 0x10;
      uVar6 = uVar5;
      do {
        pcVar1 = pcVar3 + -8;
        uVar7 = *(undefined8 *)(pcVar3 + -0x10);
        uVar9 = *(undefined8 *)(pcVar3 + 8);
        uVar8 = *(undefined8 *)pcVar3;
        pcVar3 = pcVar3 + 0x20;
        uVar6 = uVar6 - 0x20;
        *(undefined8 *)(pcVar2 + -8) = *(undefined8 *)pcVar1;
        *(undefined8 *)(pcVar2 + -0x10) = uVar7;
        *(undefined8 *)(pcVar2 + 8) = uVar9;
        *(undefined8 *)pcVar2 = uVar8;
        pcVar2 = pcVar2 + 0x20;
      } while (uVar6 != 0);
      param_3 = param_3 + uVar5;
      if (uVar4 == uVar5) {
        return param_2;
      }
    }
    do {
      pcVar2 = param_1 + 1;
      *param_3 = *param_1;
      param_1 = pcVar2;
      pcVar3 = param_2;
      param_3 = param_3 + 1;
    } while (param_2 != pcVar2);
  }
  return pcVar3;
}


// ===== 001cd560  std::__ndk1::ctype<char>::do_narrow =====

/* std::__ndk1::ctype<char>::do_narrow(char, char) const */

char __thiscall std::__ndk1::ctype<char>::do_narrow(ctype<char> *this,char param_1,char param_2)

{
  if (-1 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}


// ===== 001cd570  std::__ndk1::ctype<char>::do_narrow =====

/* std::__ndk1::ctype<char>::do_narrow(char const*, char const*, char, char*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_narrow
          (ctype<char> *this,char *param_1,char *param_2,char param_3,char *param_4)

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_1 != param_2) {
    uVar5 = (long)param_2 - (long)param_1;
    pcVar3 = param_1;
    if ((0xf < uVar5) && ((param_2 <= param_4 || (param_4 + uVar5 <= param_1)))) {
      uVar6 = uVar5 & 0xfffffffffffffff0;
      pauVar2 = (undefined1 (*) [16])param_1;
      pcVar3 = param_4;
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 - 0x10;
        auVar9 = NEON_cmlt(*pauVar2,0,1);
        auVar8[1] = param_3;
        auVar8[0] = param_3;
        auVar8[2] = param_3;
        auVar8[3] = param_3;
        auVar8[4] = param_3;
        auVar8[5] = param_3;
        auVar8[6] = param_3;
        auVar8[7] = param_3;
        auVar8[8] = param_3;
        auVar8[9] = param_3;
        auVar8[10] = param_3;
        auVar8[0xb] = param_3;
        auVar8[0xc] = param_3;
        auVar8[0xd] = param_3;
        auVar8[0xe] = param_3;
        auVar8[0xf] = param_3;
        auVar8 = NEON_bit(*pauVar2,auVar8,auVar9,1);
        *(long *)(pcVar3 + 8) = auVar8._8_8_;
        *(long *)pcVar3 = auVar8._0_8_;
        pauVar2 = pauVar2 + 1;
        pcVar3 = pcVar3 + 0x10;
      } while (uVar7 != 0);
      param_4 = param_4 + uVar6;
      pcVar3 = param_1 + uVar6;
      if (uVar5 == uVar6) {
        return param_2;
      }
    }
    do {
      pcVar4 = pcVar3 + 1;
      cVar1 = param_3;
      if (-1 < *pcVar3) {
        cVar1 = *pcVar3;
      }
      *param_4 = cVar1;
      param_1 = param_2;
      param_4 = param_4 + 1;
      pcVar3 = pcVar4;
    } while (param_2 != pcVar4);
  }
  return param_1;
}


// ===== 001cd5fc  std::__ndk1::ctype_byname<char>::ctype_byname =====

/* std::__ndk1::ctype_byname<char>::ctype_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::ctype_byname<char>::ctype_byname(ctype_byname<char> *this,char *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  __locale_t p_Var3;
  size_t __n;
  ulong *puVar4;
  undefined8 uVar5;
  void *__dest;
  ulong uVar6;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_vtable_0020fb80 + 0x10;
  this[0x18] = (ctype_byname<char>)0x0;
  *(ulong *)(this + 8) = param_2 - 1;
  *(undefined **)(this + 0x10) = &DAT_001479e8;
  *(undefined **)this = puVar1;
                    /* try { // try from 001cd64c to 001cd657 has its CatchHandler @ 001cd764 */
  p_Var3 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)(this + 0x20) = p_Var3;
  if (p_Var3 != (__locale_t)0x0) {
    if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 001cd698 to 001cd69f has its CatchHandler @ 001cd760 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001cd6f8;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001cd6d0 to 001cd6d7 has its CatchHandler @ 001cd760 */
    __dest = operator_new(uVar6);
    local_78 = uVar6 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_001cd6f8:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001cd6fc to 001cd70f has its CatchHandler @ 001cd748 */
  puVar4 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_78,0,
                           "ctype_byname<char>::ctype_byname failed to construct for ");
  local_50 = (void *)puVar4[2];
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 001cd728 to 001cd72f has its CatchHandler @ 001cd730 */
  uVar5 = FUN_001cbd58(&local_60);
                    /* catch() { ... } // from try @ 001cd728 with catch @ 001cd730 */
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  *(undefined **)this = PTR_vtable_0020f9a8 + 0x10;
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (ctype_byname<char>)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  __shared_count::~__shared_count((__shared_count *)this);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar5);
}


// ===== 001cd79c  std::__ndk1::ctype_byname<char>::ctype_byname =====

/* std::__ndk1::ctype_byname<char>::ctype_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::ctype_byname<char>::ctype_byname
          (ctype_byname<char> *this,basic_string_conflict *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  __locale_t p_Var3;
  basic_string_conflict *pbVar4;
  basic_string_conflict *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)(this + 0x10) = &DAT_001479e8;
  puVar2 = PTR_vtable_0020fb80;
  this[0x18] = (ctype_byname<char>)0x0;
  *(undefined **)this = puVar2 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
  __locale = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
                    /* try { // try from 001cd7f8 to 001cd803 has its CatchHandler @ 001cd86c */
  pbVar4 = (basic_string_conflict *)0x0;
  p_Var3 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)(this + 0x20) = p_Var3;
  if (p_Var3 == (__locale_t)0x0) {
                    /* try { // try from 001cd830 to 001cd843 has its CatchHandler @ 001cd868 */
    operator+((__ndk1 *)"ctype_byname<char>::ctype_byname failed to construct for ",(char *)param_1,
              pbVar4);
                    /* try { // try from 001cd844 to 001cd84b has its CatchHandler @ 001cd850 */
    FUN_001cbd58(auStack_50);
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cd8a4  std::__ndk1::ctype_byname<char>::~ctype_byname =====

/* std::__ndk1::ctype_byname<char>::~ctype_byname() */

void __thiscall std::__ndk1::ctype_byname<char>::~ctype_byname(ctype_byname<char> *this)

{
  *(undefined **)this = PTR_vtable_0020fb80 + 0x10;
                    /* try { // try from 001cd8c8 to 001cd8cb has its CatchHandler @ 001cd908 */
  freelocale(*(__locale_t *)(this + 0x20));
  *(undefined **)this = PTR_vtable_0020f9a8 + 0x10;
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (ctype_byname<char>)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001cd91c  std::__ndk1::ctype_byname<char>::do_toupper =====

/* std::__ndk1::ctype_byname<char>::do_toupper(char) const */

int __thiscall std::__ndk1::ctype_byname<char>::do_toupper(ctype_byname<char> *this,char param_1)

{
  int iVar1;
  
  iVar1 = toupper_l((uint)(byte)param_1,*(__locale_t *)(this + 0x20));
  return iVar1;
}


// ===== 001cd93c  std::__ndk1::ctype_byname<char>::do_toupper =====

/* std::__ndk1::ctype_byname<char>::do_toupper(char*, char const*) const */

char * __thiscall
std::__ndk1::ctype_byname<char>::do_toupper(ctype_byname<char> *this,char *param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)param_1;
  if (param_1 != param_2) {
    do {
      iVar1 = toupper_l((uint)*pbVar2,*(__locale_t *)(this + 0x20));
      pbVar3 = pbVar2 + 1;
      *pbVar2 = (byte)iVar1;
      param_1 = param_2;
      pbVar2 = pbVar3;
    } while ((byte *)param_2 != pbVar3);
  }
  return param_1;
}


// ===== 001cd990  std::__ndk1::ctype_byname<char>::do_tolower =====

/* std::__ndk1::ctype_byname<char>::do_tolower(char) const */

int __thiscall std::__ndk1::ctype_byname<char>::do_tolower(ctype_byname<char> *this,char param_1)

{
  int iVar1;
  
  iVar1 = tolower_l((uint)(byte)param_1,*(__locale_t *)(this + 0x20));
  return iVar1;
}


// ===== 001cd9b0  std::__ndk1::ctype_byname<char>::do_tolower =====

/* std::__ndk1::ctype_byname<char>::do_tolower(char*, char const*) const */

char * __thiscall
std::__ndk1::ctype_byname<char>::do_tolower(ctype_byname<char> *this,char *param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)param_1;
  if (param_1 != param_2) {
    do {
      iVar1 = tolower_l((uint)*pbVar2,*(__locale_t *)(this + 0x20));
      pbVar3 = pbVar2 + 1;
      *pbVar2 = (byte)iVar1;
      param_1 = param_2;
      pbVar2 = pbVar3;
    } while ((byte *)param_2 != pbVar3);
  }
  return param_1;
}


// ===== 001cda04  std::__ndk1::ctype_byname<wchar_t>::ctype_byname =====

/* std::__ndk1::ctype_byname<wchar_t>::ctype_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::ctype_byname<wchar_t>::ctype_byname
          (ctype_byname<wchar_t> *this,char *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0020fb88 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
                    /* try { // try from 001cda44 to 001cda4f has its CatchHandler @ 001cdb5c */
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)(this + 0x10) = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 001cda90 to 001cda97 has its CatchHandler @ 001cdb58 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001cdaf0;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001cdac8 to 001cdacf has its CatchHandler @ 001cdb58 */
    __dest = operator_new(uVar5);
    local_78 = uVar5 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_001cdaf0:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001cdaf4 to 001cdb07 has its CatchHandler @ 001cdb40 */
  puVar3 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_78,0,
                           "ctype_byname<wchar_t>::ctype_byname failed to construct for ");
  local_50 = (void *)puVar3[2];
  uStack_58 = puVar3[1];
  local_60 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 001cdb20 to 001cdb27 has its CatchHandler @ 001cdb28 */
  uVar4 = FUN_001cbd58(&local_60);
                    /* catch() { ... } // from try @ 001cdb20 with catch @ 001cdb28 */
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  __shared_count::~__shared_count((__shared_count *)this);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar4);
}


// ===== 001cdb70  std::__ndk1::ctype_byname<wchar_t>::ctype_byname =====

/* std::__ndk1::ctype_byname<wchar_t>::ctype_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::ctype_byname<wchar_t>::ctype_byname
          (ctype_byname<wchar_t> *this,basic_string_conflict *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  basic_string_conflict *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0020fb88 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
  __locale = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
                    /* try { // try from 001cdbbc to 001cdbc7 has its CatchHandler @ 001cdc30 */
  pbVar3 = (basic_string_conflict *)0x0;
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)(this + 0x10) = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
                    /* try { // try from 001cdbf4 to 001cdc07 has its CatchHandler @ 001cdc2c */
    operator+((__ndk1 *)"ctype_byname<wchar_t>::ctype_byname failed to construct for ",
              (char *)param_1,pbVar3);
                    /* try { // try from 001cdc08 to 001cdc0f has its CatchHandler @ 001cdc14 */
    FUN_001cbd58(auStack_50);
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cdc44  std::__ndk1::ctype_byname<wchar_t>::~ctype_byname =====

/* std::__ndk1::ctype_byname<wchar_t>::~ctype_byname() */

void __thiscall std::__ndk1::ctype_byname<wchar_t>::~ctype_byname(ctype_byname<wchar_t> *this)

{
  *(undefined **)this = PTR_vtable_0020fb88 + 0x10;
                    /* try { // try from 001cdc68 to 001cdc6b has its CatchHandler @ 001cdc84 */
  freelocale(*(__locale_t *)(this + 0x10));
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001cdc98  std::__ndk1::ctype_byname<wchar_t>::do_is =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::ctype_byname<wchar_t>::do_is(unsigned long, wchar_t) const */

bool __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_is(ctype_byname<wchar_t> *this,ulong param_1,wchar_t param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    uVar1 = false;
  }
  else {
    iVar2 = iswspace_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = iVar2 != 0;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    iVar2 = iswprint_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    iVar2 = iswcntrl_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    iVar2 = iswupper_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    iVar2 = iswlower_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    iVar2 = iswalpha_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    iVar2 = iswdigit_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 7 & 1) != 0) {
    iVar2 = iswpunct_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    iVar2 = iswxdigit_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    iVar2 = iswblank_l(param_2,*(__locale_t *)(this + 0x10));
    uVar1 = uVar1 | iVar2 != 0;
  }
  return (bool)uVar1;
}


// ===== 001cde08  std::__ndk1::ctype_byname<wchar_t>::do_is =====

/* std::__ndk1::ctype_byname<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned long*) const
    */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_is
          (ctype_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ulong *param_3)

{
  wchar_t __wc;
  int iVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  
  pwVar3 = param_1;
  if (param_1 != param_2) {
    do {
      __wc = *pwVar3;
      if ((uint)__wc < 0x80) {
        uVar2 = *(ulong *)(&DAT_001479e8 + (ulong)(uint)__wc * 8);
LAB_001cde44:
        *param_3 = uVar2;
      }
      else {
        *param_3 = 0;
        iVar1 = iswspace_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 1;
        }
        iVar1 = iswprint_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 2;
        }
        iVar1 = iswcntrl_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 4;
        }
        iVar1 = iswupper_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 8;
        }
        iVar1 = iswlower_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 0x10;
        }
        iVar1 = iswalpha_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 0x20;
        }
        iVar1 = iswdigit_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 0x40;
        }
        iVar1 = iswpunct_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 0x80;
        }
        iVar1 = iswxdigit_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          *param_3 = *param_3 | 0x100;
        }
        iVar1 = iswblank_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 != 0) {
          uVar2 = *param_3 | 0x200;
          goto LAB_001cde44;
        }
      }
      pwVar3 = pwVar3 + 1;
      param_3 = param_3 + 1;
      param_1 = param_2;
    } while (param_2 != pwVar3);
  }
  return param_1;
}


// ===== 001cdf9c  std::__ndk1::ctype_byname<wchar_t>::do_scan_is =====

/* std::__ndk1::ctype_byname<wchar_t>::do_scan_is(unsigned long, wchar_t const*, wchar_t const*)
   const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_scan_is
          (ctype_byname<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t __wc;
  int iVar1;
  uint uVar2;
  
  if (param_2 != param_3) {
    while( true ) {
      __wc = *param_2;
      uVar2 = (uint)param_1;
      if ((((((param_1 & 1) != 0) &&
            (iVar1 = iswspace_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) ||
           (((uVar2 >> 1 & 1) != 0 &&
            (iVar1 = iswprint_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)))) ||
          (((uVar2 >> 2 & 1) != 0 &&
           (iVar1 = iswcntrl_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)))) ||
         (((uVar2 >> 3 & 1) != 0 &&
          (iVar1 = iswupper_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)))) break;
      if (((uVar2 >> 4 & 1) != 0) &&
         (iVar1 = iswlower_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 5 & 1) != 0) &&
         (iVar1 = iswalpha_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 6 & 1) != 0) &&
         (iVar1 = iswdigit_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 7 & 1) != 0) &&
         (iVar1 = iswpunct_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 8 & 1) != 0) &&
         (iVar1 = iswxdigit_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 9 & 1) != 0) &&
         (iVar1 = iswblank_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      param_2 = param_2 + 1;
      if (param_3 == param_2) {
        return param_3;
      }
    }
  }
  return param_2;
}


// ===== 001ce0c4  std::__ndk1::ctype_byname<wchar_t>::do_scan_not =====

/* std::__ndk1::ctype_byname<wchar_t>::do_scan_not(unsigned long, wchar_t const*, wchar_t const*)
   const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_scan_not
          (ctype_byname<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t __wc;
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  pwVar2 = param_2;
  if (param_2 != param_3) {
    do {
      __wc = *pwVar2;
      uVar3 = (uint)param_1;
      if (((((((param_1 & 1) == 0) ||
             (iVar1 = iswspace_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)) &&
            (((uVar3 >> 1 & 1) == 0 ||
             (iVar1 = iswprint_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)))) &&
           (((uVar3 >> 2 & 1) == 0 ||
            (iVar1 = iswcntrl_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)))) &&
          (((uVar3 >> 3 & 1) == 0 ||
           (iVar1 = iswupper_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)))) &&
         ((((((uVar3 >> 4 & 1) == 0 ||
             (iVar1 = iswlower_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)) &&
            (((uVar3 >> 5 & 1) == 0 ||
             (iVar1 = iswalpha_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)))) &&
           (((uVar3 >> 6 & 1) == 0 ||
            (iVar1 = iswdigit_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)))) &&
          ((((uVar3 >> 7 & 1) == 0 ||
            (iVar1 = iswpunct_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)) &&
           (((uVar3 >> 8 & 1) == 0 ||
            (iVar1 = iswxdigit_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 == 0)))))))) {
        if ((uVar3 >> 9 & 1) == 0) {
          return pwVar2;
        }
        iVar1 = iswblank_l(__wc,*(__locale_t *)(this + 0x10));
        if (iVar1 == 0) {
          return pwVar2;
        }
      }
      pwVar2 = pwVar2 + 1;
      param_2 = param_3;
    } while (param_3 != pwVar2);
  }
  return param_2;
}


// ===== 001ce1ec  std::__ndk1::ctype_byname<wchar_t>::do_toupper =====

/* std::__ndk1::ctype_byname<wchar_t>::do_toupper(wchar_t) const */

wint_t __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_toupper(ctype_byname<wchar_t> *this,wchar_t param_1)

{
  wint_t wVar1;
  
  wVar1 = towupper_l(param_1,*(__locale_t *)(this + 0x10));
  return wVar1;
}


// ===== 001ce1fc  std::__ndk1::ctype_byname<wchar_t>::do_toupper =====

/* std::__ndk1::ctype_byname<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_toupper
          (ctype_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = param_1;
  if (param_1 != param_2) {
    do {
      wVar1 = towupper_l(*pwVar2,*(__locale_t *)(this + 0x10));
      pwVar3 = pwVar2 + 1;
      *pwVar2 = wVar1;
      param_1 = param_2;
      pwVar2 = pwVar3;
    } while (param_2 != pwVar3);
  }
  return param_1;
}


// ===== 001ce250  std::__ndk1::ctype_byname<wchar_t>::do_tolower =====

/* std::__ndk1::ctype_byname<wchar_t>::do_tolower(wchar_t) const */

wint_t __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_tolower(ctype_byname<wchar_t> *this,wchar_t param_1)

{
  wint_t wVar1;
  
  wVar1 = towlower_l(param_1,*(__locale_t *)(this + 0x10));
  return wVar1;
}


// ===== 001ce260  std::__ndk1::ctype_byname<wchar_t>::do_tolower =====

/* std::__ndk1::ctype_byname<wchar_t>::do_tolower(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_tolower
          (ctype_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = param_1;
  if (param_1 != param_2) {
    do {
      wVar1 = towlower_l(*pwVar2,*(__locale_t *)(this + 0x10));
      pwVar3 = pwVar2 + 1;
      *pwVar2 = wVar1;
      param_1 = param_2;
      pwVar2 = pwVar3;
    } while (param_2 != pwVar3);
  }
  return param_1;
}


// ===== 001ce2b4  std::__ndk1::ctype_byname<wchar_t>::do_widen =====

/* std::__ndk1::ctype_byname<wchar_t>::do_widen(char) const */

wint_t __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_widen(ctype_byname<wchar_t> *this,char param_1)

{
  wint_t wVar1;
  __locale_t __dataset;
  
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001ce2d0 to 001ce2d7 has its CatchHandler @ 001ce2fc */
  wVar1 = btowc((uint)(byte)param_1);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001ce2e0 to 001ce2e7 has its CatchHandler @ 001ce2f8 */
    uselocale(__dataset);
  }
  return wVar1;
}


// ===== 001ce318  std::__ndk1::ctype_byname<wchar_t>::do_widen =====

/* std::__ndk1::ctype_byname<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */

char * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_widen
          (ctype_byname<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  byte bVar1;
  wchar_t wVar2;
  __locale_t __dataset;
  byte *pbVar3;
  
  pbVar3 = (byte *)param_1;
  if (param_1 != param_2) {
    do {
      bVar1 = *pbVar3;
      __dataset = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001ce368 to 001ce36f has its CatchHandler @ 001ce3a4 */
      wVar2 = btowc((uint)bVar1);
      if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001ce378 to 001ce37f has its CatchHandler @ 001ce3a0 */
        uselocale(__dataset);
      }
      pbVar3 = pbVar3 + 1;
      *param_3 = wVar2;
      param_1 = param_2;
      param_3 = param_3 + 1;
    } while ((byte *)param_2 != pbVar3);
  }
  return param_1;
}


// ===== 001ce3c0  std::__ndk1::ctype_byname<wchar_t>::do_narrow =====

/* std::__ndk1::ctype_byname<wchar_t>::do_narrow(wchar_t, char) const */

uint __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_narrow
          (ctype_byname<wchar_t> *this,wchar_t param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  __locale_t __dataset;
  
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001ce3e4 to 001ce3eb has its CatchHandler @ 001ce418 */
  uVar2 = wctob(param_1);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001ce3f4 to 001ce3fb has its CatchHandler @ 001ce414 */
    uselocale(__dataset);
  }
  uVar1 = (uint)(byte)param_2;
  if (uVar2 != 0xffffffff) {
    uVar1 = uVar2;
  }
  return uVar1;
}


// ===== 001ce434  std::__ndk1::ctype_byname<wchar_t>::do_narrow =====

/* std::__ndk1::ctype_byname<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const
    */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_narrow
          (ctype_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  uint uVar1;
  wchar_t __c;
  uint uVar2;
  __locale_t __dataset;
  wchar_t *pwVar3;
  
  pwVar3 = param_1;
  if (param_1 != param_2) {
    do {
      __c = *pwVar3;
      __dataset = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001ce494 to 001ce49b has its CatchHandler @ 001ce4d4 */
      uVar2 = wctob(__c);
      if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001ce4a4 to 001ce4ab has its CatchHandler @ 001ce4d0 */
        uselocale(__dataset);
      }
      pwVar3 = pwVar3 + 1;
      uVar1 = (uint)(byte)param_3;
      if (uVar2 != 0xffffffff) {
        uVar1 = uVar2;
      }
      *param_4 = (char)uVar1;
      param_1 = param_2;
      param_4 = param_4 + 1;
    } while (param_2 != pwVar3);
  }
  return param_1;
}


// ===== 001ce4f0  std::__ndk1::codecvt<char,char,mbstate_t>::~codecvt =====

/* std::__ndk1::codecvt<char, char, mbstate_t>::~codecvt() */

void __thiscall
std::__ndk1::codecvt<char,char,mbstate_t>::~codecvt(codecvt<char,char,mbstate_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001ce514  std::__ndk1::codecvt<char,char,mbstate_t>::do_out =====

/* std::__ndk1::codecvt<char, char, mbstate_t>::do_out(mbstate_t&, char const*, char const*, char
   const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::codecvt<char,char,mbstate_t>::do_out
          (codecvt<char,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,char *param_5,char *param_6,char **param_7)

{
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}


// ===== 001ce524  std::__ndk1::codecvt<char,char,mbstate_t>::do_in =====

/* std::__ndk1::codecvt<char, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::codecvt<char,char,mbstate_t>::do_in
          (codecvt<char,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,char *param_5,char *param_6,char **param_7)

{
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}


// ===== 001ce534  std::__ndk1::codecvt<char,char,mbstate_t>::do_unshift =====

/* std::__ndk1::codecvt<char, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::codecvt<char,char,mbstate_t>::do_unshift
          (codecvt<char,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001ce540  std::__ndk1::codecvt<char,char,mbstate_t>::do_encoding =====

/* std::__ndk1::codecvt<char, char, mbstate_t>::do_encoding() const */

undefined8 std::__ndk1::codecvt<char,char,mbstate_t>::do_encoding(void)

{
  return 1;
}


// ===== 001ce548  std::__ndk1::codecvt<char,char,mbstate_t>::do_always_noconv =====

/* std::__ndk1::codecvt<char, char, mbstate_t>::do_always_noconv() const */

undefined8 std::__ndk1::codecvt<char,char,mbstate_t>::do_always_noconv(void)

{
  return 1;
}


// ===== 001ce550  std::__ndk1::codecvt<char,char,mbstate_t>::do_length =====

/* std::__ndk1::codecvt<char, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

undefined4 __thiscall
std::__ndk1::codecvt<char,char,mbstate_t>::do_length
          (codecvt<char,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  undefined4 uVar1;
  
  uVar1 = (int)((long)param_3 - (long)param_2);
  if (param_4 <= (ulong)((long)param_3 - (long)param_2)) {
    uVar1 = (int)param_4;
  }
  return uVar1;
}


// ===== 001ce560  std::__ndk1::codecvt<char,char,mbstate_t>::do_max_length =====

/* std::__ndk1::codecvt<char, char, mbstate_t>::do_max_length() const */

undefined8 std::__ndk1::codecvt<char,char,mbstate_t>::do_max_length(void)

{
  return 1;
}


// ===== 001ce568  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(unsigned long) */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt
          (codecvt<wchar_t,char,mbstate_t> *this,ulong param_1)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_0020f9c0 + 0x10;
  *(ulong *)(this + 8) = param_1 - 1;
  if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001ce5c4 to 001ce5d7 has its CatchHandler @ 001ce5ec */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  *(__locale_t *)(this + 0x10) = DAT_00214e98;
  return;
}


// ===== 001ce60c  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(char const*, unsigned long) */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt
          (codecvt<wchar_t,char,mbstate_t> *this,char *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0020f9c0 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
                    /* try { // try from 001ce64c to 001ce657 has its CatchHandler @ 001ce764 */
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)(this + 0x10) = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 001ce698 to 001ce69f has its CatchHandler @ 001ce760 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001ce6f8;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001ce6d0 to 001ce6d7 has its CatchHandler @ 001ce760 */
    __dest = operator_new(uVar5);
    local_78 = uVar5 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_001ce6f8:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001ce6fc to 001ce70f has its CatchHandler @ 001ce748 */
  puVar3 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_78,0,
                           "codecvt_byname<wchar_t, char, mbstate_t>::codecvt_byname failed to construct for "
                          );
  local_50 = (void *)puVar3[2];
  uStack_58 = puVar3[1];
  local_60 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 001ce728 to 001ce72f has its CatchHandler @ 001ce730 */
  uVar4 = FUN_001cbd58(&local_60);
                    /* catch() { ... } // from try @ 001ce728 with catch @ 001ce730 */
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  __shared_count::~__shared_count((__shared_count *)this);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar4);
}


// ===== 001ce778  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::~codecvt =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::~codecvt() */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::~codecvt(codecvt<wchar_t,char,mbstate_t> *this)

{
  ~codecvt(this);
  operator_delete(this);
  return;
}


// ===== 001ce79c  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_out =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_out(mbstate_t&, wchar_t const*, wchar_t
   const*, wchar_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_out
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,wchar_t *param_2,
          wchar_t *param_3,wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar_t __wc;
  char cVar1;
  long lVar2;
  wchar_t *pwVar3;
  undefined1 uVar4;
  __locale_t p_Var5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  wchar_t *pwVar9;
  mbstate_t local_78;
  char local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pwVar9 = param_2;
  pwVar3 = param_2;
  if (param_2 != param_3) {
    do {
      pwVar9 = pwVar3;
      if (*pwVar9 == L'\0') break;
      pwVar3 = pwVar9 + 1;
      pwVar9 = param_3;
    } while (param_3 != pwVar3);
  }
  *param_7 = param_5;
  *param_4 = param_2;
  if ((param_5 != param_6) && (param_2 != param_3)) {
    do {
      local_78 = *param_1;
      p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001ce864 to 001ce87b has its CatchHandler @ 001ceac0 */
      sVar6 = wcsnrtombs(param_5,param_4,(long)pwVar9 - (long)param_2 >> 2,
                         (long)param_6 - (long)param_5,param_1);
      if (p_Var5 != (__locale_t)0x0) {
                    /* try { // try from 001ce884 to 001ce88b has its CatchHandler @ 001ceabc */
        uselocale(p_Var5);
      }
      if (sVar6 == 0) {
LAB_001ce9b0:
        uVar4 = 1;
        goto LAB_001ce9c8;
      }
      if (sVar6 == 0xffffffffffffffff) {
        *param_7 = param_5;
        if (param_2 != *param_4) goto LAB_001cea18;
        goto LAB_001cea70;
      }
      param_5 = *param_7 + sVar6;
      *param_7 = param_5;
      if (param_5 == param_6) {
        param_2 = *param_4;
        break;
      }
      if (pwVar9 == param_3) {
        param_2 = *param_4;
        pwVar9 = param_3;
      }
      else {
        p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001ce8c8 to 001ce8d7 has its CatchHandler @ 001ceaa4 */
        sVar6 = wcrtomb(local_6c,L'\0',param_1);
        if (p_Var5 != (__locale_t)0x0) {
                    /* try { // try from 001ce8e0 to 001ce8e7 has its CatchHandler @ 001ceaa0 */
          uselocale(p_Var5);
        }
        if (sVar6 == 0xffffffffffffffff) {
          uVar4 = 2;
          goto LAB_001ce9c8;
        }
        pcVar7 = *param_7;
        if ((ulong)((long)param_6 - (long)pcVar7) < sVar6) goto LAB_001ce9b0;
        if (sVar6 != 0) {
          *param_7 = pcVar7 + 1;
          *pcVar7 = local_6c[0];
          pcVar7 = (char *)((ulong)local_6c | 1);
          while (sVar6 = sVar6 - 1, sVar6 != 0) {
            pcVar8 = *param_7;
            cVar1 = *pcVar7;
            *param_7 = pcVar8 + 1;
            *pcVar8 = cVar1;
            pcVar7 = pcVar7 + 1;
          }
        }
        param_2 = *param_4 + 1;
        *param_4 = param_2;
        for (pwVar3 = param_2;
            (pwVar9 = param_3, pwVar3 != param_3 && (pwVar9 = pwVar3, *pwVar3 != L'\0'));
            pwVar3 = pwVar3 + 1) {
        }
        param_5 = *param_7;
      }
      if ((param_5 == param_6) || (param_2 == param_3)) break;
    } while( true );
  }
  uVar4 = param_2 != param_3;
  goto LAB_001ce9c8;
  while( true ) {
    param_2 = param_2 + 1;
    param_5 = *param_7 + sVar6;
    *param_7 = param_5;
    if (param_2 == *param_4) break;
LAB_001cea18:
    __wc = *param_2;
    p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001cea28 to 001cea37 has its CatchHandler @ 001cea88 */
    sVar6 = wcrtomb(param_5,__wc,&local_78);
    if (p_Var5 != (__locale_t)0x0) {
                    /* try { // try from 001cea40 to 001cea47 has its CatchHandler @ 001cea84 */
      uselocale(p_Var5);
    }
    if (sVar6 == 0xffffffffffffffff) break;
  }
LAB_001cea70:
  uVar4 = 2;
  *param_4 = param_2;
LAB_001ce9c8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


