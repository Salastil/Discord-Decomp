// ===== 009f0488  jsi_sys::ffi::Object_getNativeState =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_getNativeState */

void __rustcall jsi_sys::ffi::Object_getNativeState(undefined8 param_1,IRuntime *param_2)

{
                    /* try { // try from 009f0494 to 009f049f has its CatchHandler @ 009f04a8 */
  facebook::jsi::Object::getNativeState<jsi_sys::ffi::RustNativeStateHolder>(param_2);
  return;
}


// ===== 009f04ac  facebook::jsi::Object::getNativeState<jsi_sys::ffi::RustNativeStateHolder> =====

/* std::__ndk1::shared_ptr<jsi_sys::ffi::RustNativeStateHolder>
   facebook::jsi::Object::getNativeState<jsi_sys::ffi::RustNativeStateHolder>(facebook::jsi::IRuntime&)
   const */

ulong facebook::jsi::Object::getNativeState<jsi_sys::ffi::RustNativeStateHolder>(IRuntime *param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *in_x1;
  long *in_x8;
  uint uVar6;
  undefined1 auVar7 [16];
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  IRuntime *pIStack_60;
  long local_50;
  long *local_48;
  
  uVar3 = (**(code **)(*in_x1 + 0x158))();
  if ((uVar3 & 1) != 0) {
    (**(code **)(*in_x1 + 0x160))(&local_50);
    if (local_50 == 0) {
      bVar1 = false;
      plVar5 = local_48;
    }
    else {
      lVar4 = __dynamic_cast(local_50,PTR_typeinfo_00b00be8,PTR_typeinfo_00b011f8,0);
      plVar2 = local_48;
      if (lVar4 == 0) {
        bVar1 = false;
        plVar5 = local_48;
      }
      else {
        if (local_48 != (long *)0x0) {
          bVar1 = true;
          FUN_00ab1cb0(1,local_48 + 1);
          lVar4 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1);
          plVar5 = local_48;
          if (lVar4 != 0) goto joined_r0x009f05b4;
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        bVar1 = true;
        plVar5 = local_48;
      }
    }
joined_r0x009f05b4:
    local_48 = plVar5;
    if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00ab1ce0(0xffffffffffffffff,plVar5 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (bVar1) {
      uVar3 = (**(code **)(*in_x1 + 0x160))(&local_50);
      *in_x8 = local_50;
      in_x8[1] = (long)local_48;
      if (((local_48 != (long *)0x0) &&
          (uVar3 = FUN_00ab1cb0(1,local_48 + 1), local_48 != (long *)0x0)) &&
         (uVar3 = FUN_00ab1ce0(0xffffffffffffffff,local_48 + 1), uVar3 == 0)) {
        (**(code **)(*local_48 + 0x10))(local_48);
        uVar3 = std::__ndk1::__shared_weak_count::__release_weak();
        return uVar3;
      }
      return uVar3;
    }
  }
  auVar7 = __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi-inl.h"
                     ,0x119,
                     "std::shared_ptr<T> facebook::jsi::Object::getNativeState(IRuntime &) const [T = jsi_sys::ffi::RustNativeStateHolder]"
                     ,"hasNativeState<T>(runtime)");
  plVar5 = auVar7._0_8_;
  pcStack_68 = jsi_sys::ffi::Object_hasNativeState;
  puStack_70 = &stack0xffffffffffffffc0;
  pIStack_60 = param_1;
  uVar3 = (**(code **)(*plVar5 + 0x158))();
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
    goto LAB_009f0724;
  }
  (**(code **)(*plVar5 + 0x160))(&lStack_80,plVar5,auVar7._8_8_);
  if (lStack_80 == 0) {
    uVar6 = 0;
    plVar5 = plStack_78;
  }
  else {
    lVar4 = __dynamic_cast(lStack_80,PTR_typeinfo_00b00be8,PTR_typeinfo_00b011f8,0);
    plVar2 = plStack_78;
    if (lVar4 == 0) {
      uVar6 = 0;
      plVar5 = plStack_78;
    }
    else {
      if (plStack_78 != (long *)0x0) {
        uVar6 = 1;
        FUN_00ab1cb0(1,plStack_78 + 1);
        lVar4 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1);
        plVar5 = plStack_78;
        if (lVar4 != 0) goto joined_r0x009f0740;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      uVar6 = 1;
      plVar5 = plStack_78;
    }
  }
joined_r0x009f0740:
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00ab1ce0(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
    return (ulong)uVar6;
  }
LAB_009f0724:
  return (ulong)uVar6;
}


// ===== 009f066c  jsi_sys::ffi::Object_hasNativeState =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_hasNativeState */

undefined4 __rustcall jsi_sys::ffi::Object_hasNativeState(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  long local_30;
  long *local_28;
  
                    /* try { // try from 009f068c to 009f06ab has its CatchHandler @ 009f0790 */
  uVar3 = (**(code **)(*param_1 + 0x158))();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x160))(&local_30,param_1,param_2);
  if (local_30 == 0) {
    uVar5 = 0;
    plVar1 = local_28;
  }
  else {
    lVar4 = __dynamic_cast(local_30,PTR_typeinfo_00b00be8,PTR_typeinfo_00b011f8,0);
    plVar2 = local_28;
    if (lVar4 == 0) {
      uVar5 = 0;
      plVar1 = local_28;
    }
    else {
      if (local_28 != (long *)0x0) {
        uVar5 = 1;
        FUN_00ab1cb0(1,local_28 + 1);
        lVar4 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1);
        plVar1 = local_28;
        if (lVar4 != 0) goto joined_r0x009f0740;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      uVar5 = 1;
      plVar1 = local_28;
    }
  }
joined_r0x009f0740:
  if ((plVar1 != (long *)0x0) && (lVar4 = FUN_00ab1ce0(0xffffffffffffffff,plVar1 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return uVar5;
  }
  return uVar5;
}


// ===== 009f0794  jsi_sys::ffi::Value_tryGetNativeState =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_tryGetNativeState */

void __rustcall
jsi_sys::ffi::Value_tryGetNativeState(undefined8 *param_1,long *param_2,int *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *local_48;
  long local_40;
  long *local_38;
  
  if (*param_3 != 7) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
                    /* try { // try from 009f07c8 to 009f07ff has its CatchHandler @ 009f091c */
  local_48 = (undefined8 *)(**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 2));
  uVar4 = (**(code **)(*param_2 + 0x158))(param_2,&local_48);
  if ((uVar4 & 1) != 0) {
    (**(code **)(*param_2 + 0x160))(&local_40,param_2,&local_48);
    if (local_40 == 0) {
      bVar1 = false;
      plVar2 = local_38;
    }
    else {
      lVar5 = __dynamic_cast(local_40,PTR_typeinfo_00b00be8,PTR_typeinfo_00b011f8,0);
      plVar3 = local_38;
      if (lVar5 == 0) {
        bVar1 = false;
        plVar2 = local_38;
      }
      else {
        if (local_38 != (long *)0x0) {
          bVar1 = true;
          FUN_00ab1cb0(1,local_38 + 1);
          lVar5 = FUN_00ab1ce0(0xffffffffffffffff,plVar3 + 1);
          plVar2 = local_38;
          if (lVar5 != 0) goto joined_r0x009f08cc;
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        bVar1 = true;
        plVar2 = local_38;
      }
    }
joined_r0x009f08cc:
    if ((plVar2 != (long *)0x0) && (lVar5 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (bVar1) {
                    /* try { // try from 009f08d4 to 009f08e3 has its CatchHandler @ 009f091c */
      facebook::jsi::Object::getNativeState<jsi_sys::ffi::RustNativeStateHolder>
                ((IRuntime *)&local_48);
      goto joined_r0x009f0914;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
joined_r0x009f0914:
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  return;
}


// ===== 009f0920  std::__ndk1::__shared_ptr_emplace<jsi_sys::ffi::RustNativeStateHolder,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<jsi_sys::ffi::RustNativeStateHolder,
   std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<jsi_sys::ffi::RustNativeStateHolder,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<jsi_sys::ffi::RustNativeStateHolder,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>
           *this)

{
  *(undefined **)this = PTR_vtable_00b011e8 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}


// ===== 009f0934  std::__ndk1::__shared_ptr_emplace<jsi_sys::ffi::RustNativeStateHolder,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<jsi_sys::ffi::RustNativeStateHolder,
   std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<jsi_sys::ffi::RustNativeStateHolder,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<jsi_sys::ffi::RustNativeStateHolder,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>
           *this)

{
  *(undefined **)this = PTR_vtable_00b011e8 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 009f0968  FUN_009f0968 =====

void FUN_009f0968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f0970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 009f0974  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 009f0978  jsi_sys::ffi::RustNativeStateHolder::~RustNativeStateHolder =====

/* jsi_sys::ffi::RustNativeStateHolder::~RustNativeStateHolder() */

void __thiscall
jsi_sys::ffi::RustNativeStateHolder::~RustNativeStateHolder(RustNativeStateHolder *this)

{
  *(undefined **)this = PTR_vtable_00b011f0 + 0x10;
  BoxDynRustNativeState::~BoxDynRustNativeState((BoxDynRustNativeState *)(this + 8));
  facebook::jsi::NativeState::~NativeState((NativeState *)this);
  return;
}


// ===== 009f09ac  jsi_sys::ffi::RustNativeStateHolder::~RustNativeStateHolder =====

/* jsi_sys::ffi::RustNativeStateHolder::~RustNativeStateHolder() */

void __thiscall
jsi_sys::ffi::RustNativeStateHolder::~RustNativeStateHolder(RustNativeStateHolder *this)

{
  *(undefined **)this = PTR_vtable_00b011f0 + 0x10;
  BoxDynRustNativeState::~BoxDynRustNativeState((BoxDynRustNativeState *)(this + 8));
  facebook::jsi::NativeState::~NativeState((NativeState *)this);
  operator_delete(this);
  return;
}


// ===== 009f09e8  jsi_sys::ffi::StringBuffer_new =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::StringBuffer_new */

void __rustcall
jsi_sys::ffi::StringBuffer_new(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long local_88;
  long lStack_80;
  long local_78;
  undefined *local_70;
  ulong local_68;
  long lStack_60;
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  rust::cxxbridge1::Str::operator_cast_to_basic_string((Str *)&local_50);
  puVar2 = PTR_vtable_00b01200;
  lStack_60 = lStack_80;
  local_68 = local_88;
  puVar1 = PTR_vtable_00b01200 + 0x10;
  local_58 = (void *)local_78;
  local_70 = puVar1;
                    /* try { // try from 009f0a38 to 009f0a3f has its CatchHandler @ 009f0b08 */
  plVar4 = (long *)operator_new(0x38);
  puVar3 = PTR_vtable_00b01208;
  plVar4[2] = 0;
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[3] = (long)puVar1;
  plVar4[5] = lStack_60;
  plVar4[4] = local_68;
  plVar4[6] = (long)local_58;
  *param_1 = plVar4 + 3;
  param_1[1] = plVar4;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = (void *)0x0;
  FUN_00ab1cb0(1,plVar6);
  lVar5 = FUN_00ab1ce0(0xffffffffffffffff,plVar6);
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_70 = puVar2 + 0x10;
  if ((local_68 & 1) != 0) {
    local_70 = puVar2 + 0x10;
    operator_delete(local_58);
  }
  facebook::jsi::Buffer::~Buffer((Buffer *)&local_70);
  return;
}


// ===== 009f0b1c  facebook::jsi::StringBuffer::~StringBuffer =====

/* facebook::jsi::StringBuffer::~StringBuffer() */

void __thiscall facebook::jsi::StringBuffer::~StringBuffer(StringBuffer *this)

{
  *(undefined **)this = PTR_vtable_00b01200 + 0x10;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  facebook::jsi::Buffer::~Buffer((Buffer *)this);
  return;
}


// ===== 009f0b60  jsi_sys::ffi::Runtime_global =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Runtime_global */

void __rustcall jsi_sys::ffi::Runtime_global(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
                    /* try { // try from 009f0b78 to 009f0b87 has its CatchHandler @ 009f0ba0 */
  (**(code **)(*param_2 + 0x30))(&local_8);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = local_8;
  *param_1 = puVar1;
  return;
}


// ===== 009f0ba4  jsi_sys::ffi::Runtime_evaluateJavaScript =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Runtime_evaluateJavaScript */

void __rustcall
jsi_sys::ffi::Runtime_evaluateJavaScript
          (undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  Value *this;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  long *local_48;
  Value aVStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_50 = *param_3;
  local_48 = (long *)param_3[1];
  local_30 = param_4;
  uStack_28 = param_5;
  if (local_48 != (long *)0x0) {
    FUN_00ab1cb0(1,local_48 + 1);
  }
                    /* try { // try from 009f0bd8 to 009f0bff has its CatchHandler @ 009f0c70 */
  rust::cxxbridge1::Str::operator_cast_to_basic_string((Str *)&local_30);
  (**(code **)(*param_2 + 8))(aVStack_40,param_2,&local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  plVar1 = local_48;
  if ((local_48 != (long *)0x0) &&
     (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,local_48 + 1), lVar2 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 009f0c40 to 009f0c47 has its CatchHandler @ 009f0c70 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_40);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 009f0c74  jsi_sys::ffi::String_fromUtf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::String_fromUtf8 */

void __rustcall jsi_sys::ffi::String_fromUtf8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  
  uVar1 = rust::cxxbridge1::Str::data();
  uVar2 = rust::cxxbridge1::Str::length();
                    /* try { // try from 009f0cb4 to 009f0ccb has its CatchHandler @ 009f0cec */
  (**(code **)(*param_2 + 0x110))(&local_18,param_2,uVar1,uVar2);
  puVar3 = (undefined8 *)operator_new(8);
  *puVar3 = local_18;
  *param_1 = puVar3;
  return;
}


// ===== 009f0cf0  jsi_sys::ffi::String_utf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::String_utf8 */

void __rustcall jsi_sys::ffi::String_utf8(String *param_1,long *param_2)

{
  basic_string local_38 [16];
  void *local_28;
  
                    /* try { // try from 009f0d0c to 009f0d1f has its CatchHandler @ 009f0d40 */
  (**(code **)(*param_2 + 0x120))(local_38);
  rust::cxxbridge1::String::String(param_1,local_38);
  if (((byte)local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return;
}


// ===== 009f0d44  jsi_sys::ffi::String_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::String_strictEquals */

uint __rustcall jsi_sys::ffi::String_strictEquals(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f0d54 to 009f0d57 has its CatchHandler @ 009f0d64 */
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  return uVar1 & 1;
}


// ===== 009f0d68  jsi_sys::ffi::String_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::String_clone */

void __rustcall jsi_sys::ffi::String_clone(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 6;
                    /* try { // try from 009f0d90 to 009f0d93 has its CatchHandler @ 009f0dc8 */
  uVar1 = (**(code **)(*param_2 + 0x80))(param_2,*param_3);
  local_28 = 0;
                    /* try { // try from 009f0d9c to 009f0da3 has its CatchHandler @ 009f0dc4 */
  puVar2 = (undefined8 *)operator_new(8);
  *puVar2 = uVar1;
  *param_1 = puVar2;
  facebook::jsi::Value::~Value((Value *)local_30);
  return;
}


// ===== 009f0ddc  jsi_sys::ffi::Object_new =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_new */

void __rustcall jsi_sys::ffi::Object_new(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  
                    /* try { // try from 009f0df4 to 009f0dfb has its CatchHandler @ 009f0e44 */
  puVar1 = (undefined8 *)operator_new(8);
                    /* try { // try from 009f0e08 to 009f0e13 has its CatchHandler @ 009f0e30 */
  (**(code **)(*param_2 + 0x130))(&local_18,param_2);
  *puVar1 = local_18;
  *param_1 = puVar1;
  return;
}


// ===== 009f0e48  jsi_sys::ffi::Object_setProperty =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_setProperty */

void __rustcall jsi_sys::ffi::Object_setProperty(long *param_1)

{
                    /* try { // try from 009f0e5c to 009f0e5f has its CatchHandler @ 009f0e68 */
  (**(code **)(*param_1 + 0x1b0))();
  return;
}


// ===== 009f0e6c  jsi_sys::ffi::Object_getProperty =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_getProperty */

void __rustcall jsi_sys::ffi::Object_getProperty(undefined8 *param_1,long *param_2)

{
  Value *this;
  Value aVStack_30 [16];
  
                    /* try { // try from 009f0e88 to 009f0e97 has its CatchHandler @ 009f0ec0 */
  (**(code **)(*param_2 + 0x180))(aVStack_30);
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_30);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_30);
  return;
}


// ===== 009f0ec4  jsi_sys::ffi::Object_hasProperty =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_hasProperty */

uint __rustcall jsi_sys::ffi::Object_hasProperty(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f0ed4 to 009f0ed7 has its CatchHandler @ 009f0ee4 */
  uVar1 = (**(code **)(*param_1 + 0x198))();
  return uVar1 & 1;
}


// ===== 009f0ee8  jsi_sys::ffi::Object_copyPropertyFrom =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_copyPropertyFrom */

uint __rustcall
jsi_sys::ffi::Object_copyPropertyFrom
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  Value aVStack_50 [16];
  
                    /* try { // try from 009f0f18 to 009f0f63 has its CatchHandler @ 009f0f88 */
  uVar1 = (**(code **)(*param_1 + 0x198))(param_1,param_3,param_2);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x180))(aVStack_50,param_1,param_3,param_2);
    (**(code **)(*param_1 + 0x1b0))(param_1,param_4,param_2,aVStack_50);
    facebook::jsi::Value::~Value(aVStack_50);
  }
  return uVar1 & 1;
}


// ===== 009f0f8c  jsi_sys::ffi::Object_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_strictEquals */

uint __rustcall jsi_sys::ffi::Object_strictEquals(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f0f9c to 009f0f9f has its CatchHandler @ 009f0fac */
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  return uVar1 & 1;
}


// ===== 009f0fb0  jsi_sys::ffi::Object_intoFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_intoFunction */

void __rustcall
jsi_sys::ffi::Object_intoFunction(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
                    /* try { // try from 009f0fc8 to 009f0fdb has its CatchHandler @ 009f0ff4 */
  facebook::jsi::Object::asFunction((IRuntime *)*param_3);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = local_8;
  *param_1 = puVar1;
  return;
}


// ===== 009f0ff8  jsi_sys::ffi::Object_asFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_asFunction */

void __rustcall
jsi_sys::ffi::Object_asFunction(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 009f101c to 009f107b has its CatchHandler @ 009f107c */
  uVar1 = (**(code **)(*param_2 + 0x200))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_2 + 0x88))(param_2,*param_3);
    puVar3 = (undefined8 *)operator_new(8);
    *puVar3 = uVar2;
    *param_1 = puVar3;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi-inl.h"
            ,0xdf,"Function facebook::jsi::Object::getFunction(IRuntime &) const &",
            "runtime.isFunction(*this)");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f101c with catch @ 009f107c
                        */
  FUN_00ab7c24();
}


// ===== 009f1080  jsi_sys::ffi::Object_isFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_isFunction */

uint __rustcall jsi_sys::ffi::Object_isFunction(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f1090 to 009f1093 has its CatchHandler @ 009f10a0 */
  uVar1 = (**(code **)(*param_1 + 0x200))();
  return uVar1 & 1;
}


// ===== 009f10a4  jsi_sys::ffi::Object_isArray =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_isArray */

uint __rustcall jsi_sys::ffi::Object_isArray(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f10b4 to 009f10b7 has its CatchHandler @ 009f10c4 */
  uVar1 = (**(code **)(*param_1 + 0x1e0))();
  return uVar1 & 1;
}


// ===== 009f10c8  jsi_sys::ffi::Object_asArray =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_asArray */

void __rustcall jsi_sys::ffi::Object_asArray(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 009f10ec to 009f114b has its CatchHandler @ 009f114c */
  uVar1 = (**(code **)(*param_2 + 0x1e0))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_2 + 0x88))(param_2,*param_3);
    puVar3 = (undefined8 *)operator_new(8);
    *puVar3 = uVar2;
    *param_1 = puVar3;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi-inl.h"
            ,0xb9,"Array facebook::jsi::Object::getArray(IRuntime &) const &",
            "runtime.isArray(*this)");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f10ec with catch @ 009f114c
                        */
  FUN_00ab7c24();
}


// ===== 009f1150  jsi_sys::ffi::Object_getArray =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_getArray */

void __rustcall jsi_sys::ffi::Object_getArray(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  param_3 = (undefined8 *)*param_3;
                    /* try { // try from 009f1170 to 009f11c3 has its CatchHandler @ 009f11c4 */
  uVar1 = (**(code **)(*param_2 + 0x1e0))(param_2,param_3);
  if ((uVar1 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = 0;
    puVar2 = (undefined8 *)operator_new(8);
    *puVar2 = uVar3;
    *param_1 = puVar2;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi-inl.h"
            ,0xbf,"Array facebook::jsi::Object::getArray(IRuntime &) &&","runtime.isArray(*this)");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1170 with catch @ 009f11c4
                        */
  FUN_00ab7c24();
}


// ===== 009f11c8  jsi_sys::ffi::Object_getPropertyAsObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_getPropertyAsObject */

void __rustcall jsi_sys::ffi::Object_getPropertyAsObject(undefined8 *param_1,IRuntime *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  JSError *this;
  int local_40 [2];
  undefined8 local_38;
  
                    /* try { // try from 009f11ec to 009f11f3 has its CatchHandler @ 009f12cc */
  (**(code **)(*(long *)param_2 + 0x180))(local_40);
  if (local_40[0] == 7) {
                    /* try { // try from 009f120c to 009f1213 has its CatchHandler @ 009f12b8 */
    uVar1 = (**(code **)(*(long *)param_2 + 0x88))(param_2,local_38);
                    /* try { // try from 009f1214 to 009f121f has its CatchHandler @ 009f1294 */
    puVar2 = (undefined8 *)operator_new(8);
    *puVar2 = uVar1;
    *param_1 = puVar2;
    facebook::jsi::Value::~Value((Value *)local_40);
    return;
  }
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 009f1250 to 009f125f has its CatchHandler @ 009f1280 */
  facebook::jsi::JSError::JSError(this,param_2,"property is not an Object");
                    /* try { // try from 009f1260 to 009f1277 has its CatchHandler @ 009f127c */
  uVar1 = __cxa_throw(this,PTR_typeinfo_00b00bd8,PTR__JSError_00b00be0);
                    /* catch() { ... } // from try @ 009f12fc with catch @ 009f1310 */
                    /* try { // try from 009f1314 to 009f1317 has its CatchHandler @ 009f1320 */
  __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar1);
}


// ===== 009f1324  facebook::jsi::JSError::JSError =====

/* facebook::jsi::JSError::JSError(facebook::jsi::IRuntime&, char const*) */

void __thiscall facebook::jsi::JSError::JSError(JSError *this,IRuntime *param_1,char *param_2)

{
  size_t __n;
  undefined8 uVar1;
  void *__dest;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
    uVar1 = FUN_009f4964(&local_58);
                    /* catch() { ... } // from try @ 009f13ac with catch @ 009f13ec */
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530(uVar1);
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_58 | 1);
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_009f13a8;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_58 = (__n | 0xf) + 2;
    local_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_009f13a8:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 009f13ac to 009f13bb has its CatchHandler @ 009f13ec */
  facebook::jsi::JSError::JSError(this,param_1,&local_58);
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}


// ===== 009f1408  jsi_sys::ffi::Object_getPropertyAsFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_getPropertyAsFunction */

void __rustcall jsi_sys::ffi::Object_getPropertyAsFunction(undefined8 *param_1,IRuntime *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  JSError *pJVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  int local_40 [2];
  undefined8 local_38;
  undefined8 *local_18;
  
                    /* try { // try from 009f142c to 009f1433 has its CatchHandler @ 009f15a8 */
  (**(code **)(*(long *)param_2 + 0x180))(local_40);
  if (local_40[0] == 7) {
                    /* try { // try from 009f144c to 009f1453 has its CatchHandler @ 009f159c */
    local_18 = (undefined8 *)(**(code **)(*(long *)param_2 + 0x88))(param_2,local_38);
                    /* try { // try from 009f1460 to 009f146b has its CatchHandler @ 009f15b4 */
    uVar2 = (**(code **)(*(long *)param_2 + 0x200))(param_2,&local_18);
    if ((uVar2 & 1) == 0) {
      pJVar4 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 009f1500 to 009f150f has its CatchHandler @ 009f154c */
      facebook::jsi::JSError::JSError(pJVar4,param_2,"property is not a Function");
                    /* try { // try from 009f1510 to 009f1527 has its CatchHandler @ 009f15b4 */
      uVar6 = __cxa_throw(pJVar4,PTR_typeinfo_00b00bd8,PTR__JSError_00b00be0);
    }
    else {
                    /* try { // try from 009f1478 to 009f1483 has its CatchHandler @ 009f15b8 */
      uVar2 = (**(code **)(*(long *)param_2 + 0x200))(param_2,&local_18);
      puVar1 = local_18;
      if ((uVar2 & 1) != 0) {
        local_18 = (undefined8 *)0x0;
                    /* try { // try from 009f1490 to 009f1497 has its CatchHandler @ 009f1578 */
        puVar3 = (undefined8 *)operator_new(8);
        *puVar3 = puVar1;
        *param_1 = puVar3;
        facebook::jsi::Value::~Value((Value *)local_40);
        return;
      }
                    /* try { // try from 009f152c to 009f154b has its CatchHandler @ 009f15b8 */
      auVar7 = __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi-inl.h"
                         ,0xe4,"Function facebook::jsi::Object::getFunction(IRuntime &) &&",
                         "runtime.isFunction(*this)");
      uVar6 = auVar7._0_8_;
                    /* catch(type#1 @ 00b12280) { ... } // from try @ 009f1500 with catch @ 009f154c
                        */
      __cxa_free_exception();
      if (local_18 != (undefined8 *)0x0) {
        (**(code **)*local_18)();
      }
      facebook::jsi::Value::~Value((Value *)local_40);
      if (auVar7._8_4_ != 1) goto LAB_009f1620;
      __cxa_begin_catch(uVar6);
      plVar5 = (long *)__cxa_allocate_exception(8);
      *plVar5 = (long)(PTR_vtable_00b01210 + 0x10);
                    /* try { // try from 009f1604 to 009f1617 has its CatchHandler @ 009f1618 */
      uVar6 = __cxa_throw(plVar5,PTR_typeinfo_00b00b78,PTR__exception_00b01218);
    }
  }
  else {
    pJVar4 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 009f14c8 to 009f14d7 has its CatchHandler @ 009f1564 */
    facebook::jsi::JSError::JSError(pJVar4,param_2,"property is not an Object");
                    /* try { // try from 009f14d8 to 009f14ef has its CatchHandler @ 009f1560 */
    uVar6 = __cxa_throw(pJVar4,PTR_typeinfo_00b00bd8,PTR__JSError_00b00be0);
  }
                    /* catch() { ... } // from try @ 009f1604 with catch @ 009f1618 */
                    /* try { // try from 009f161c to 009f161f has its CatchHandler @ 009f1628 */
  __cxa_end_catch();
LAB_009f1620:
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar6);
}


// ===== 009f162c  jsi_sys::ffi::Object_getPropertyAsNumber =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_getPropertyAsNumber */

undefined1  [16] __rustcall jsi_sys::ffi::Object_getPropertyAsNumber(IRuntime *param_1)

{
  JSError *this;
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int local_40 [4];
  
                    /* try { // try from 009f1650 to 009f1657 has its CatchHandler @ 009f16e0 */
  (**(code **)(*(long *)param_1 + 0x180))(local_40);
  if (local_40[0] == 3) {
                    /* try { // try from 009f1664 to 009f166b has its CatchHandler @ 009f16ec */
    auVar2._0_8_ = facebook::jsi::Value::asNumber();
    facebook::jsi::Value::~Value((Value *)local_40);
    auVar2._8_8_ = 0;
    return auVar2;
  }
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 009f16a0 to 009f16af has its CatchHandler @ 009f16cc */
  facebook::jsi::JSError::JSError(this,param_1,"property is not a Number");
                    /* try { // try from 009f16b0 to 009f16c7 has its CatchHandler @ 009f16ec */
  uVar1 = __cxa_throw(this,PTR_typeinfo_00b00bd8,PTR__JSError_00b00be0);
                    /* catch() { ... } // from try @ 009f1724 with catch @ 009f1738 */
                    /* try { // try from 009f173c to 009f173f has its CatchHandler @ 009f1748 */
  __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar1);
}


// ===== 009f174c  jsi_sys::ffi::Object_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_clone */

void __rustcall jsi_sys::ffi::Object_clone(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 7;
                    /* try { // try from 009f1774 to 009f1777 has its CatchHandler @ 009f17ac */
  uVar1 = (**(code **)(*param_2 + 0x88))(param_2,*param_3);
  local_28 = 0;
                    /* try { // try from 009f1780 to 009f1787 has its CatchHandler @ 009f17a8 */
  puVar2 = (undefined8 *)operator_new(8);
  *puVar2 = uVar1;
  *param_1 = puVar2;
  facebook::jsi::Value::~Value((Value *)local_30);
  return;
}


// ===== 009f17c0  jsi_sys::ffi::PropNameID_forUtf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::PropNameID_forUtf8 */

void __rustcall jsi_sys::ffi::PropNameID_forUtf8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  
  uVar1 = rust::cxxbridge1::Str::data();
  uVar2 = rust::cxxbridge1::Str::length();
                    /* try { // try from 009f1800 to 009f1817 has its CatchHandler @ 009f1838 */
  (**(code **)(*param_2 + 0xa0))(&local_18,param_2,uVar1,uVar2);
  puVar3 = (undefined8 *)operator_new(8);
  *puVar3 = local_18;
  *param_1 = puVar3;
  return;
}


// ===== 009f183c  jsi_sys::ffi::PropNameID_forString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::PropNameID_forString */

void __rustcall jsi_sys::ffi::PropNameID_forString(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
                    /* try { // try from 009f1854 to 009f1863 has its CatchHandler @ 009f187c */
  (**(code **)(*param_2 + 0xb0))(&local_8);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = local_8;
  *param_1 = puVar1;
  return;
}


// ===== 009f1880  jsi_sys::ffi::PropNameID_forSymbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::PropNameID_forSymbol */

void __rustcall jsi_sys::ffi::PropNameID_forSymbol(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
                    /* try { // try from 009f1898 to 009f18a7 has its CatchHandler @ 009f18c0 */
  (**(code **)(*param_2 + 0xb8))(&local_8);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = local_8;
  *param_1 = puVar1;
  return;
}


// ===== 009f18c4  jsi_sys::ffi::PropNameID_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::PropNameID_clone */

void __rustcall
jsi_sys::ffi::PropNameID_clone(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 009f18e0 to 009f18e7 has its CatchHandler @ 009f192c */
  puVar1 = (undefined8 *)operator_new(8);
                    /* try { // try from 009f18f8 to 009f18ff has its CatchHandler @ 009f1918 */
  uVar2 = (**(code **)(*param_2 + 0x90))(param_2,*param_3);
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}


// ===== 009f1930  jsi_sys::ffi::Value_undefined =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_undefined */

void __rustcall jsi_sys::ffi::Value_undefined(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *puVar1 = 0;
  *param_1 = puVar1;
  return;
}


// ===== 009f195c  jsi_sys::ffi::Value_null =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_null */

void __rustcall jsi_sys::ffi::Value_null(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *puVar1 = 1;
  *param_1 = puVar1;
  return;
}


// ===== 009f198c  jsi_sys::ffi::Value_fromInt =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_fromInt */

void __rustcall jsi_sys::ffi::Value_fromInt(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *puVar1 = 3;
  *(double *)(puVar1 + 2) = (double)param_2;
  *param_1 = puVar1;
  return;
}


// ===== 009f19c8  jsi_sys::ffi::Value_fromBool =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_fromBool */

void __rustcall jsi_sys::ffi::Value_fromBool(undefined8 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *(undefined1 *)(puVar1 + 2) = param_2;
  *puVar1 = 2;
  *param_1 = puVar1;
  return;
}


// ===== 009f1a00  jsi_sys::ffi::Value_fromDouble =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_fromDouble */

void __rustcall jsi_sys::ffi::Value_fromDouble(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *(undefined8 *)(puVar1 + 2) = param_2;
  *puVar1 = 3;
  *param_1 = puVar1;
  return;
}


// ===== 009f1a40  jsi_sys::ffi::Value_fromString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_fromString */

void __rustcall
jsi_sys::ffi::Value_fromString(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_3 = (undefined8 *)*param_3;
  puVar1 = (undefined4 *)operator_new(0x10);
  lVar3 = *param_2;
  uVar2 = *param_3;
  *puVar1 = 6;
                    /* try { // try from 009f1a7c to 009f1a83 has its CatchHandler @ 009f1a9c */
  uVar2 = (**(code **)(lVar3 + 0x80))(param_2,uVar2);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *param_1 = puVar1;
  return;
}


// ===== 009f1ab8  jsi_sys::ffi::Value_fromObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_fromObject */

void __rustcall
jsi_sys::ffi::Value_fromObject(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_3 = (undefined8 *)*param_3;
  puVar1 = (undefined4 *)operator_new(0x10);
  lVar3 = *param_2;
  uVar2 = *param_3;
  *puVar1 = 7;
                    /* try { // try from 009f1af4 to 009f1afb has its CatchHandler @ 009f1b14 */
  uVar2 = (**(code **)(lVar3 + 0x88))(param_2,uVar2);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *param_1 = puVar1;
  return;
}


// ===== 009f1b30  jsi_sys::ffi::Value_fromBigInt =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_fromBigInt */

void __rustcall
jsi_sys::ffi::Value_fromBigInt(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_3 = (undefined8 *)*param_3;
  puVar1 = (undefined4 *)operator_new(0x10);
  lVar3 = *param_2;
  uVar2 = *param_3;
  *puVar1 = 5;
                    /* try { // try from 009f1b6c to 009f1b73 has its CatchHandler @ 009f1b8c */
  uVar2 = (**(code **)(lVar3 + 0x78))(param_2,uVar2);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *param_1 = puVar1;
  return;
}


// ===== 009f1ba8  jsi_sys::ffi::Value_fromSymbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_fromSymbol */

void __rustcall
jsi_sys::ffi::Value_fromSymbol(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_3 = (undefined8 *)*param_3;
  puVar1 = (undefined4 *)operator_new(0x10);
  lVar3 = *param_2;
  uVar2 = *param_3;
  *puVar1 = 4;
                    /* try { // try from 009f1be4 to 009f1beb has its CatchHandler @ 009f1c04 */
  uVar2 = (**(code **)(lVar3 + 0x70))(param_2,uVar2);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *param_1 = puVar1;
  return;
}


// ===== 009f1c20  jsi_sys::ffi::Value_getString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_getString */

void __rustcall
jsi_sys::ffi::Value_getString(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)*param_3;
  if (*piVar2 == 6) {
    uVar3 = *(undefined8 *)(piVar2 + 2);
    piVar2[2] = 0;
    piVar2[3] = 0;
                    /* try { // try from 009f1c48 to 009f1c83 has its CatchHandler @ 009f1c84 */
    puVar1 = (undefined8 *)operator_new(8);
    *puVar1 = uVar3;
    *param_1 = puVar1;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x7ca,"String facebook::jsi::Value::getString(IRuntime &) &&","isString()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1c48 with catch @ 009f1c84
                        */
  FUN_00ab7c24();
}


// ===== 009f1c88  jsi_sys::ffi::Value_getObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_getObject */

void __rustcall
jsi_sys::ffi::Value_getObject(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)*param_3;
  if (*piVar2 == 7) {
    uVar3 = *(undefined8 *)(piVar2 + 2);
    piVar2[2] = 0;
    piVar2[3] = 0;
                    /* try { // try from 009f1cb0 to 009f1ceb has its CatchHandler @ 009f1cec */
    puVar1 = (undefined8 *)operator_new(8);
    *puVar1 = uVar3;
    *param_1 = puVar1;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x7de,"Object facebook::jsi::Value::getObject(IRuntime &) &&","isObject()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1cb0 with catch @ 009f1cec
                        */
  FUN_00ab7c24();
}


// ===== 009f1cf0  jsi_sys::ffi::Value_getBigInt =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_getBigInt */

void __rustcall
jsi_sys::ffi::Value_getBigInt(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)*param_3;
  if (*piVar2 == 5) {
    uVar3 = *(undefined8 *)(piVar2 + 2);
    piVar2[2] = 0;
    piVar2[3] = 0;
                    /* try { // try from 009f1d18 to 009f1d53 has its CatchHandler @ 009f1d54 */
    puVar1 = (undefined8 *)operator_new(8);
    *puVar1 = uVar3;
    *param_1 = puVar1;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x7b6,"BigInt facebook::jsi::Value::getBigInt(IRuntime &) &&","isBigInt()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1d18 with catch @ 009f1d54
                        */
  FUN_00ab7c24();
}


// ===== 009f1d58  jsi_sys::ffi::Value_getSymbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_getSymbol */

void __rustcall
jsi_sys::ffi::Value_getSymbol(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)*param_3;
  if (*piVar2 == 4) {
    uVar3 = *(undefined8 *)(piVar2 + 2);
    piVar2[2] = 0;
    piVar2[3] = 0;
                    /* try { // try from 009f1d80 to 009f1dbb has its CatchHandler @ 009f1dbc */
    puVar1 = (undefined8 *)operator_new(8);
    *puVar1 = uVar3;
    *param_1 = puVar1;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x7a2,"Symbol facebook::jsi::Value::getSymbol(IRuntime &) &&","isSymbol()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1d80 with catch @ 009f1dbc
                        */
  FUN_00ab7c24();
}


// ===== 009f1dc0  jsi_sys::ffi::Value_asString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_asString */

void __rustcall jsi_sys::ffi::Value_asString(undefined8 *param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_3 == 6) {
                    /* try { // try from 009f1de8 to 009f1e2b has its CatchHandler @ 009f1e2c */
    uVar1 = (**(code **)(*param_2 + 0x80))(param_2,*(undefined8 *)(param_3 + 2));
    puVar2 = (undefined8 *)operator_new(8);
    *puVar2 = uVar1;
    *param_1 = puVar2;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x7c3,"String facebook::jsi::Value::getString(IRuntime &) const &","isString()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1de8 with catch @ 009f1e2c
                        */
  FUN_00ab7c24();
}


// ===== 009f1e30  jsi_sys::ffi::Value_asObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_asObject */

void __rustcall jsi_sys::ffi::Value_asObject(undefined8 *param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_3 == 7) {
                    /* try { // try from 009f1e58 to 009f1e9b has its CatchHandler @ 009f1e9c */
    uVar1 = (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 2));
    puVar2 = (undefined8 *)operator_new(8);
    *puVar2 = uVar1;
    *param_1 = puVar2;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x7d7,"Object facebook::jsi::Value::getObject(IRuntime &) const &","isObject()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1e58 with catch @ 009f1e9c
                        */
  FUN_00ab7c24();
}


// ===== 009f1ea0  jsi_sys::ffi::Value_asBigInt =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_asBigInt */

void __rustcall jsi_sys::ffi::Value_asBigInt(undefined8 *param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_3 == 5) {
                    /* try { // try from 009f1ec8 to 009f1f0b has its CatchHandler @ 009f1f0c */
    uVar1 = (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_3 + 2));
    puVar2 = (undefined8 *)operator_new(8);
    *puVar2 = uVar1;
    *param_1 = puVar2;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x7af,"BigInt facebook::jsi::Value::getBigInt(IRuntime &) const &","isBigInt()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1ec8 with catch @ 009f1f0c
                        */
  FUN_00ab7c24();
}


// ===== 009f1f10  jsi_sys::ffi::Value_asSymbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_asSymbol */

void __rustcall jsi_sys::ffi::Value_asSymbol(undefined8 *param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_3 == 4) {
                    /* try { // try from 009f1f38 to 009f1f7b has its CatchHandler @ 009f1f7c */
    uVar1 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(param_3 + 2));
    puVar2 = (undefined8 *)operator_new(8);
    *puVar2 = uVar1;
    *param_1 = puVar2;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x79b,"Symbol facebook::jsi::Value::getSymbol(IRuntime &) const &","isSymbol()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f1f38 with catch @ 009f1f7c
                        */
  FUN_00ab7c24();
}


// ===== 009f1f80  jsi_sys::ffi::Value_toString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_toString */

void __rustcall
jsi_sys::ffi::Value_toString(undefined8 *param_1,undefined8 param_2,IRuntime *param_3)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
                    /* try { // try from 009f1f94 to 009f1fab has its CatchHandler @ 009f1fc4 */
  facebook::jsi::Value::toString(param_3);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = local_8;
  *param_1 = puVar1;
  return;
}


// ===== 009f1fc8  jsi_sys::ffi::Value_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_clone */

void __rustcall jsi_sys::ffi::Value_clone(undefined8 *param_1,IRuntime *param_2,Value *param_3)

{
  Value *this;
  
                    /* try { // try from 009f1fe4 to 009f1feb has its CatchHandler @ 009f2024 */
  this = (Value *)operator_new(0x10);
                    /* try { // try from 009f1fec to 009f1ffb has its CatchHandler @ 009f2010 */
  facebook::jsi::Value::Value(this,param_2,param_3);
  *param_1 = this;
  return;
}


// ===== 009f2028  jsi_sys::ffi::Value_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Value_strictEquals */

uint __rustcall jsi_sys::ffi::Value_strictEquals(void)

{
  uint uVar1;
  
                    /* try { // try from 009f2030 to 009f2033 has its CatchHandler @ 009f2040 */
  uVar1 = facebook::jsi::Value::facebook::jsi::Value::strictEquals();
  return uVar1 & 1;
}


// ===== 009f2044  jsi_sys::ffi::BigInt_fromI64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_fromI64 */

void __rustcall jsi_sys::ffi::BigInt_fromI64(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
                    /* try { // try from 009f205c to 009f206b has its CatchHandler @ 009f2084 */
  (**(code **)(*param_2 + 0xd8))(&local_8);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = local_8;
  *param_1 = puVar1;
  return;
}


// ===== 009f2088  jsi_sys::ffi::BigInt_fromU64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_fromU64 */

void __rustcall jsi_sys::ffi::BigInt_fromU64(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
                    /* try { // try from 009f20a0 to 009f20af has its CatchHandler @ 009f20c8 */
  (**(code **)(*param_2 + 0xe0))(&local_8);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = local_8;
  *param_1 = puVar1;
  return;
}


// ===== 009f20cc  jsi_sys::ffi::BigInt_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_clone */

void __rustcall jsi_sys::ffi::BigInt_clone(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 5;
                    /* try { // try from 009f20f4 to 009f20f7 has its CatchHandler @ 009f212c */
  uVar1 = (**(code **)(*param_2 + 0x78))(param_2,*param_3);
  local_28 = 0;
                    /* try { // try from 009f2100 to 009f2107 has its CatchHandler @ 009f2128 */
  puVar2 = (undefined8 *)operator_new(8);
  *puVar2 = uVar1;
  *param_1 = puVar2;
  facebook::jsi::Value::~Value((Value *)local_30);
  return;
}


// ===== 009f2140  jsi_sys::ffi::BigInt_toString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_toString */

void __rustcall jsi_sys::ffi::BigInt_toString(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
                    /* try { // try from 009f2158 to 009f2167 has its CatchHandler @ 009f2180 */
  (**(code **)(*param_2 + 0x100))(&local_8);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = local_8;
  *param_1 = puVar1;
  return;
}


// ===== 009f2184  jsi_sys::ffi::BigInt_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_strictEquals */

uint __rustcall jsi_sys::ffi::BigInt_strictEquals(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f2194 to 009f2197 has its CatchHandler @ 009f21a4 */
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  return uVar1 & 1;
}


// ===== 009f21a8  jsi_sys::ffi::BigInt_isInt64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_isInt64 */

uint __rustcall jsi_sys::ffi::BigInt_isInt64(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f21b8 to 009f21bb has its CatchHandler @ 009f21c8 */
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  return uVar1 & 1;
}


// ===== 009f21cc  jsi_sys::ffi::BigInt_getInt64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_getInt64 */

void __rustcall jsi_sys::ffi::BigInt_getInt64(long *param_1)

{
                    /* try { // try from 009f21dc to 009f21df has its CatchHandler @ 009f21e8 */
  (**(code **)(*param_1 + 0xf8))();
  return;
}


// ===== 009f21ec  jsi_sys::ffi::BigInt_isUint64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_isUint64 */

uint __rustcall jsi_sys::ffi::BigInt_isUint64(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f21fc to 009f21ff has its CatchHandler @ 009f220c */
  uVar1 = (**(code **)(*param_1 + 0xf0))();
  return uVar1 & 1;
}


// ===== 009f2210  jsi_sys::ffi::BigInt_getUint64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::BigInt_getUint64 */

void __rustcall jsi_sys::ffi::BigInt_getUint64(long *param_1)

{
                    /* try { // try from 009f2220 to 009f2223 has its CatchHandler @ 009f222c */
  (**(code **)(*param_1 + 0xf8))();
  return;
}


// ===== 009f2230  jsi_sys::ffi::Symbol_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Symbol_strictEquals */

uint __rustcall jsi_sys::ffi::Symbol_strictEquals(long *param_1)

{
  uint uVar1;
  
                    /* try { // try from 009f2240 to 009f2243 has its CatchHandler @ 009f2250 */
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  return uVar1 & 1;
}


// ===== 009f2254  jsi_sys::ffi::Symbol_toString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Symbol_toString */

void __rustcall jsi_sys::ffi::Symbol_toString(String *param_1,long *param_2)

{
  basic_string local_38 [16];
  void *local_28;
  
                    /* try { // try from 009f2270 to 009f2283 has its CatchHandler @ 009f22a4 */
  (**(code **)(*param_2 + 0xd0))(local_38);
  rust::cxxbridge1::String::String(param_1,local_38);
  if (((byte)local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return;
}


// ===== 009f22a8  jsi_sys::ffi::Symbol_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Symbol_clone */

void __rustcall jsi_sys::ffi::Symbol_clone(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 4;
                    /* try { // try from 009f22d0 to 009f22d3 has its CatchHandler @ 009f2308 */
  uVar1 = (**(code **)(*param_2 + 0x70))(param_2,*param_3);
  local_28 = 0;
                    /* try { // try from 009f22dc to 009f22e3 has its CatchHandler @ 009f2304 */
  puVar2 = (undefined8 *)operator_new(8);
  *puVar2 = uVar1;
  *param_1 = puVar2;
  facebook::jsi::Value::~Value((Value *)local_30);
  return;
}


// ===== 009f231c  jsi_sys::ffi::Array_withLength =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Array_withLength */

void __rustcall jsi_sys::ffi::Array_withLength(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_38;
  
                    /* try { // try from 009f233c to 009f2343 has its CatchHandler @ 009f2394 */
  puVar1 = (undefined8 *)operator_new(8);
                    /* try { // try from 009f2350 to 009f235f has its CatchHandler @ 009f2380 */
  (**(code **)(*param_2 + 0x230))(&local_38,param_2,param_3);
  *puVar1 = local_38;
  *param_1 = puVar1;
  return;
}


// ===== 009f2398  jsi_sys::ffi::Array_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Array_size */

void __rustcall jsi_sys::ffi::Array_size(long *param_1)

{
                    /* try { // try from 009f23a8 to 009f23ab has its CatchHandler @ 009f23b4 */
  (**(code **)(*param_1 + 0x240))();
  return;
}


// ===== 009f23b8  jsi_sys::ffi::Array_getValueAtIndex =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Array_getValueAtIndex */

void __rustcall jsi_sys::ffi::Array_getValueAtIndex(undefined8 *param_1,long *param_2)

{
  Value *this;
  Value aVStack_30 [16];
  
                    /* try { // try from 009f23d4 to 009f23e3 has its CatchHandler @ 009f240c */
  (**(code **)(*param_2 + 0x260))(aVStack_30);
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_30);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_30);
  return;
}


// ===== 009f2410  jsi_sys::ffi::Array_setValueAtIndex =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Array_setValueAtIndex */

void __rustcall jsi_sys::ffi::Array_setValueAtIndex(long *param_1)

{
                    /* try { // try from 009f2424 to 009f2427 has its CatchHandler @ 009f2430 */
  (**(code **)(*param_1 + 0x268))();
  return;
}


// ===== 009f2434  jsi_sys::ffi::Array_intoValue =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Array_intoValue */

void __rustcall jsi_sys::ffi::Array_intoValue(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_3 = (undefined8 *)*param_3;
                    /* try { // try from 009f2450 to 009f2457 has its CatchHandler @ 009f24ac */
  puVar1 = (undefined4 *)operator_new(0x10);
  lVar3 = *param_2;
  uVar2 = *param_3;
  *puVar1 = 7;
                    /* try { // try from 009f2470 to 009f2477 has its CatchHandler @ 009f2490 */
  uVar2 = (**(code **)(lVar3 + 0x88))(param_2,uVar2);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *param_1 = puVar1;
  return;
}


// ===== 009f24b0  jsi_sys::ffi::Array_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Array_clone */

void __rustcall jsi_sys::ffi::Array_clone(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 7;
                    /* try { // try from 009f24dc to 009f24df has its CatchHandler @ 009f2550 */
  local_38 = (**(code **)(*param_2 + 0x88))(param_2,*param_3);
  local_28 = 0;
                    /* try { // try from 009f24f0 to 009f254f has its CatchHandler @ 009f2564 */
  uVar1 = (**(code **)(*param_2 + 0x1e0))(param_2,&local_38);
  uVar3 = local_38;
  if ((uVar1 & 1) != 0) {
    local_38 = 0;
    puVar2 = (undefined8 *)operator_new(8);
    *puVar2 = uVar3;
    *param_1 = puVar2;
    facebook::jsi::Value::~Value((Value *)local_30);
    return;
  }
  uVar3 = __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi-inl.h"
                    ,0xbf,"Array facebook::jsi::Object::getArray(IRuntime &) &&",
                    "runtime.isArray(*this)");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f24dc with catch @ 009f2550
                        */
  facebook::jsi::Value::~Value((Value *)local_30);
                    /* WARNING: Subroutine does not return */
  FUN_00ab7c24(uVar3);
}


// ===== 009f2568  jsi_sys::ffi::Function_intoValue =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_intoValue */

void __rustcall
jsi_sys::ffi::Function_intoValue(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_3 = (undefined8 *)*param_3;
                    /* try { // try from 009f2584 to 009f258b has its CatchHandler @ 009f25e0 */
  puVar1 = (undefined4 *)operator_new(0x10);
  lVar3 = *param_2;
  uVar2 = *param_3;
  *puVar1 = 7;
                    /* try { // try from 009f25a4 to 009f25ab has its CatchHandler @ 009f25c4 */
  uVar2 = (**(code **)(lVar3 + 0x88))(param_2,uVar2);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *param_1 = puVar1;
  return;
}


// ===== 009f25e4  jsi_sys::ffi::Function_asValue =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_asValue */

void __rustcall
jsi_sys::ffi::Function_asValue(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 009f2600 to 009f2607 has its CatchHandler @ 009f265c */
  puVar1 = (undefined4 *)operator_new(0x10);
  lVar3 = *param_2;
  uVar2 = *param_3;
  *puVar1 = 7;
                    /* try { // try from 009f2620 to 009f2627 has its CatchHandler @ 009f2640 */
  uVar2 = (**(code **)(lVar3 + 0x88))(param_2,uVar2);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *param_1 = puVar1;
  return;
}


// ===== 009f2660  jsi_sys::ffi::Function_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_clone */

void __rustcall jsi_sys::ffi::Function_clone(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 009f2684 to 009f26e3 has its CatchHandler @ 009f26e4 */
  uVar1 = (**(code **)(*param_2 + 0x200))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_2 + 0x88))(param_2,*param_3);
    puVar3 = (undefined8 *)operator_new(8);
    *puVar3 = uVar2;
    *param_1 = puVar3;
    return;
  }
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi-inl.h"
            ,0xdf,"Function facebook::jsi::Object::getFunction(IRuntime &) const &",
            "runtime.isFunction(*this)");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f2684 with catch @ 009f26e4
                        */
  FUN_00ab7c24();
}


// ===== 009f26e8  jsi_sys::ffi::Function_callWithThis0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callWithThis0 */

void __rustcall
jsi_sys::ffi::Function_callWithThis0
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  Value *this;
  Value aVStack_50 [16];
  undefined4 local_40 [2];
  undefined8 local_38;
  
  local_40[0] = 7;
                    /* try { // try from 009f271c to 009f271f has its CatchHandler @ 009f27a8 */
  local_38 = (**(code **)(*param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 009f272c to 009f2747 has its CatchHandler @ 009f2794 */
  (**(code **)(*param_2 + 0x280))(aVStack_50,param_2,param_3,local_40,0,0);
  facebook::jsi::Value::~Value((Value *)local_40);
                    /* try { // try from 009f2750 to 009f2757 has its CatchHandler @ 009f2784 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_50);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_50);
  return;
}


// ===== 009f2808  jsi_sys::ffi::Function_call0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_call0 */

void __rustcall jsi_sys::ffi::Function_call0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  Value *this;
  Value aVStack_40 [16];
  undefined4 local_30 [4];
  
  local_30[0] = 0;
                    /* try { // try from 009f2828 to 009f283b has its CatchHandler @ 009f2884 */
  (**(code **)(*param_2 + 0x280))(aVStack_40,param_2,param_3,local_30,0,0);
  facebook::jsi::Value::~Value((Value *)local_30);
                    /* try { // try from 009f2844 to 009f284b has its CatchHandler @ 009f2874 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_40);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 009f28e4  jsi_sys::ffi::Function_callWithThis1 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callWithThis1 */

void __rustcall
jsi_sys::ffi::Function_callWithThis1
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,undefined8 *param_4,
          Value *param_5)

{
  Value *this;
  Value aVStack_60 [16];
  Value aVStack_50 [16];
  undefined4 local_40 [2];
  undefined8 local_38;
  
                    /* try { // try from 009f2908 to 009f2917 has its CatchHandler @ 009f29e0 */
  facebook::jsi::Value::Value(aVStack_60,param_2,param_5);
  local_40[0] = 7;
                    /* try { // try from 009f292c to 009f2933 has its CatchHandler @ 009f29c4 */
  local_38 = (**(code **)(*(long *)param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 009f2940 to 009f295b has its CatchHandler @ 009f29b0 */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_50,param_2,param_3,local_40,aVStack_60,1);
  facebook::jsi::Value::~Value((Value *)local_40);
  facebook::jsi::Value::~Value(aVStack_60);
                    /* try { // try from 009f296c to 009f2973 has its CatchHandler @ 009f29a0 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_50);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_50);
  return;
}


// ===== 009f2a38  jsi_sys::ffi::Function_call1 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_call1 */

void __rustcall
jsi_sys::ffi::Function_call1
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4)

{
  Value *this;
  Value aVStack_60 [16];
  Value aVStack_50 [16];
  undefined4 local_40 [4];
  
                    /* try { // try from 009f2a58 to 009f2a63 has its CatchHandler @ 009f2afc */
  facebook::jsi::Value::Value(aVStack_60,param_2,param_4);
  local_40[0] = 0;
                    /* try { // try from 009f2a70 to 009f2a8b has its CatchHandler @ 009f2ae0 */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_50,param_2,param_3,local_40,aVStack_60,1);
  facebook::jsi::Value::~Value((Value *)local_40);
  facebook::jsi::Value::~Value(aVStack_60);
                    /* try { // try from 009f2a9c to 009f2aa3 has its CatchHandler @ 009f2ad0 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_50);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_50);
  return;
}


// ===== 009f2b54  jsi_sys::ffi::Function_callWithThis2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callWithThis2 */

void __rustcall
jsi_sys::ffi::Function_callWithThis2
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,undefined8 *param_4,
          Value *param_5,Value *param_6)

{
  Value *this;
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  Value aVStack_60 [16];
  undefined4 local_50 [2];
  undefined8 local_48;
  
                    /* try { // try from 009f2b80 to 009f2b93 has its CatchHandler @ 009f2c94 */
  facebook::jsi::Value::Value(aVStack_80,param_2,param_5);
                    /* try { // try from 009f2b94 to 009f2ba3 has its CatchHandler @ 009f2c80 */
  facebook::jsi::Value::Value(aVStack_70,param_2,param_6);
  local_50[0] = 7;
                    /* try { // try from 009f2bb8 to 009f2bbf has its CatchHandler @ 009f2c60 */
  local_48 = (**(code **)(*(long *)param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 009f2bcc to 009f2beb has its CatchHandler @ 009f2c4c */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_60,param_2,param_3,local_50,aVStack_80,2);
  facebook::jsi::Value::~Value((Value *)local_50);
  facebook::jsi::Value::~Value(aVStack_70);
  facebook::jsi::Value::~Value(aVStack_80);
                    /* try { // try from 009f2c04 to 009f2c0b has its CatchHandler @ 009f2c3c */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_60);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_60);
  return;
}


// ===== 009f2cec  jsi_sys::ffi::Function_call2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_call2 */

void __rustcall
jsi_sys::ffi::Function_call2
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5)

{
  Value *this;
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  Value aVStack_60 [16];
  undefined4 local_50 [4];
  
                    /* try { // try from 009f2d14 to 009f2d23 has its CatchHandler @ 009f2df0 */
  facebook::jsi::Value::Value(aVStack_80,param_2,param_4);
                    /* try { // try from 009f2d24 to 009f2d33 has its CatchHandler @ 009f2ddc */
  facebook::jsi::Value::Value(aVStack_70,param_2,param_5);
  local_50[0] = 0;
                    /* try { // try from 009f2d40 to 009f2d5f has its CatchHandler @ 009f2dc0 */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_60,param_2,param_3,local_50,aVStack_80,2);
  facebook::jsi::Value::~Value((Value *)local_50);
  facebook::jsi::Value::~Value(aVStack_70);
  facebook::jsi::Value::~Value(aVStack_80);
                    /* try { // try from 009f2d78 to 009f2d7f has its CatchHandler @ 009f2db0 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_60);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_60);
  return;
}


// ===== 009f2e48  jsi_sys::ffi::Function_callWithThis3 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callWithThis3 */

void __rustcall
jsi_sys::ffi::Function_callWithThis3
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,undefined8 *param_4,
          Value *param_5,Value *param_6,Value *param_7)

{
  Value *this;
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  undefined4 local_60 [2];
  undefined8 local_58;
  
                    /* try { // try from 009f2e7c to 009f2e8f has its CatchHandler @ 009f2fb4 */
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_5);
                    /* try { // try from 009f2e94 to 009f2ebb has its CatchHandler @ 009f2fc0 */
  facebook::jsi::Value::Value(aVStack_90,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_80,param_2,param_7);
  local_60[0] = 7;
                    /* try { // try from 009f2ed0 to 009f2ed7 has its CatchHandler @ 009f2f84 */
  local_58 = (**(code **)(*(long *)param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 009f2ee4 to 009f2f03 has its CatchHandler @ 009f2f70 */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_70,param_2,param_3,local_60,aVStack_a0,3);
  facebook::jsi::Value::~Value((Value *)local_60);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
                    /* try { // try from 009f2f24 to 009f2f2b has its CatchHandler @ 009f2f60 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_70);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_70);
  return;
}


// ===== 009f3030  jsi_sys::ffi::Function_call3 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_call3 */

void __rustcall
jsi_sys::ffi::Function_call3
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5,
          Value *param_6)

{
  Value *this;
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  Value aVStack_60 [16];
  undefined4 local_50 [4];
  
                    /* try { // try from 009f305c to 009f306b has its CatchHandler @ 009f3158 */
  facebook::jsi::Value::Value(aVStack_90,param_2,param_4);
                    /* try { // try from 009f3070 to 009f3097 has its CatchHandler @ 009f3164 */
  facebook::jsi::Value::Value(aVStack_80,param_2,param_5);
  facebook::jsi::Value::Value(aVStack_70,param_2,param_6);
  local_50[0] = 0;
                    /* try { // try from 009f30a4 to 009f30c3 has its CatchHandler @ 009f312c */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_60,param_2,param_3,local_50,aVStack_90,3);
  facebook::jsi::Value::~Value((Value *)local_50);
  facebook::jsi::Value::~Value(aVStack_70);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
                    /* try { // try from 009f30e4 to 009f30eb has its CatchHandler @ 009f311c */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_60);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_60);
  return;
}


// ===== 009f31d4  jsi_sys::ffi::Function_callWithThis4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callWithThis4 */

void __rustcall
jsi_sys::ffi::Function_callWithThis4
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,undefined8 *param_4,
          Value *param_5,Value *param_6,Value *param_7,Value *param_8)

{
  Value *this;
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  undefined4 local_60 [2];
  undefined8 local_58;
  
                    /* try { // try from 009f320c to 009f321f has its CatchHandler @ 009f3368 */
  facebook::jsi::Value::Value(aVStack_b0,param_2,param_5);
                    /* try { // try from 009f3224 to 009f325f has its CatchHandler @ 009f3374 */
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_90,param_2,param_7);
  facebook::jsi::Value::Value(aVStack_80,param_2,param_8);
  local_60[0] = 7;
                    /* try { // try from 009f3274 to 009f327b has its CatchHandler @ 009f3330 */
  local_58 = (**(code **)(*(long *)param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 009f3288 to 009f32a7 has its CatchHandler @ 009f331c */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_70,param_2,param_3,local_60,aVStack_b0,4);
  facebook::jsi::Value::~Value((Value *)local_60);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
                    /* try { // try from 009f32d0 to 009f32d7 has its CatchHandler @ 009f330c */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_70);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_70);
  return;
}


// ===== 009f33e4  jsi_sys::ffi::Function_call4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_call4 */

void __rustcall
jsi_sys::ffi::Function_call4
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5,
          Value *param_6,Value *param_7)

{
  Value *this;
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  undefined4 local_60 [4];
  
                    /* try { // try from 009f3418 to 009f3427 has its CatchHandler @ 009f353c */
  facebook::jsi::Value::Value(aVStack_b0,param_2,param_4);
                    /* try { // try from 009f342c to 009f3467 has its CatchHandler @ 009f3548 */
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_5);
  facebook::jsi::Value::Value(aVStack_90,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_80,param_2,param_7);
  local_60[0] = 0;
                    /* try { // try from 009f3474 to 009f3493 has its CatchHandler @ 009f3508 */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_70,param_2,param_3,local_60,aVStack_b0,4);
  facebook::jsi::Value::~Value((Value *)local_60);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
                    /* try { // try from 009f34bc to 009f34c3 has its CatchHandler @ 009f34f8 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_70);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_70);
  return;
}


// ===== 009f35b8  jsi_sys::ffi::Function_callWithThis5 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callWithThis5 */

void __rustcall
jsi_sys::ffi::Function_callWithThis5
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,undefined8 *param_4,
          Value *param_5,Value *param_6,Value *param_7,Value *param_8,Value *param_9)

{
  Value *this;
  Value aVStack_d0 [16];
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  undefined4 local_70 [2];
  undefined8 local_68;
  
                    /* try { // try from 009f35f8 to 009f360b has its CatchHandler @ 009f3780 */
  facebook::jsi::Value::Value(aVStack_d0,param_2,param_5);
                    /* try { // try from 009f3610 to 009f3663 has its CatchHandler @ 009f378c */
  facebook::jsi::Value::Value(aVStack_c0,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_b0,param_2,param_7);
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_8);
  facebook::jsi::Value::Value(aVStack_90,param_2,param_9);
  local_70[0] = 7;
                    /* try { // try from 009f3678 to 009f367f has its CatchHandler @ 009f3740 */
  local_68 = (**(code **)(*(long *)param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 009f368c to 009f36ab has its CatchHandler @ 009f372c */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_80,param_2,param_3,local_70,aVStack_d0,5);
  facebook::jsi::Value::~Value((Value *)local_70);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
  facebook::jsi::Value::~Value(aVStack_c0);
  facebook::jsi::Value::~Value(aVStack_d0);
                    /* try { // try from 009f36dc to 009f36e3 has its CatchHandler @ 009f371c */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_80);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_80);
  return;
}


// ===== 009f37fc  jsi_sys::ffi::Function_call5 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_call5 */

void __rustcall
jsi_sys::ffi::Function_call5
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5,
          Value *param_6,Value *param_7,Value *param_8)

{
  Value *this;
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  undefined4 local_60 [4];
  
                    /* try { // try from 009f3834 to 009f3843 has its CatchHandler @ 009f3980 */
  facebook::jsi::Value::Value(aVStack_c0,param_2,param_4);
                    /* try { // try from 009f3848 to 009f389b has its CatchHandler @ 009f398c */
  facebook::jsi::Value::Value(aVStack_b0,param_2,param_5);
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_90,param_2,param_7);
  facebook::jsi::Value::Value(aVStack_80,param_2,param_8);
  local_60[0] = 0;
                    /* try { // try from 009f38a8 to 009f38c7 has its CatchHandler @ 009f3944 */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_70,param_2,param_3,local_60,aVStack_c0,5);
  facebook::jsi::Value::~Value((Value *)local_60);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
  facebook::jsi::Value::~Value(aVStack_c0);
                    /* try { // try from 009f38f8 to 009f38ff has its CatchHandler @ 009f3934 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_70);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_70);
  return;
}


// ===== 009f39fc  jsi_sys::ffi::Function_callWithThis6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callWithThis6 */

void __rustcall
jsi_sys::ffi::Function_callWithThis6
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,undefined8 *param_4,
          Value *param_5,Value *param_6,Value *param_7,Value *param_8,Value *param_9,Value *param_10
          )

{
  Value *this;
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  undefined4 local_70 [2];
  undefined8 local_68;
  
                    /* try { // try from 009f3a3c to 009f3a4f has its CatchHandler @ 009f3be8 */
  facebook::jsi::Value::Value(aVStack_e0,param_2,param_5);
                    /* try { // try from 009f3a54 to 009f3abb has its CatchHandler @ 009f3bf4 */
  facebook::jsi::Value::Value(aVStack_d0,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_c0,param_2,param_7);
  facebook::jsi::Value::Value(aVStack_b0,param_2,param_8);
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_9);
  facebook::jsi::Value::Value(aVStack_90,param_2,param_10);
  local_70[0] = 7;
                    /* try { // try from 009f3ad0 to 009f3ad7 has its CatchHandler @ 009f3ba0 */
  local_68 = (**(code **)(*(long *)param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 009f3ae4 to 009f3b03 has its CatchHandler @ 009f3b8c */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_80,param_2,param_3,local_70,aVStack_e0,6);
  facebook::jsi::Value::~Value((Value *)local_70);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
  facebook::jsi::Value::~Value(aVStack_c0);
  facebook::jsi::Value::~Value(aVStack_d0);
  facebook::jsi::Value::~Value(aVStack_e0);
                    /* try { // try from 009f3b3c to 009f3b43 has its CatchHandler @ 009f3b7c */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_80);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_80);
  return;
}


// ===== 009f3c64  jsi_sys::ffi::Function_callAsConstructor0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callAsConstructor0 */

void __rustcall
jsi_sys::ffi::Function_callAsConstructor0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  Value *this;
  Value aVStack_30 [16];
  
                    /* try { // try from 009f3c80 to 009f3c8f has its CatchHandler @ 009f3cd4 */
  (**(code **)(*param_2 + 0x288))(aVStack_30,param_2,param_3,0,0);
                    /* try { // try from 009f3c90 to 009f3c97 has its CatchHandler @ 009f3cc0 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_30);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_30);
  return;
}


// ===== 009f3d2c  jsi_sys::ffi::Function_callAsConstructor1 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callAsConstructor1 */

void __rustcall
jsi_sys::ffi::Function_callAsConstructor1
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4)

{
  Value *this;
  Value aVStack_50 [16];
  Value aVStack_40 [16];
  
                    /* try { // try from 009f3d4c to 009f3d57 has its CatchHandler @ 009f3dd8 */
  facebook::jsi::Value::Value(aVStack_50,param_2,param_4);
                    /* try { // try from 009f3d60 to 009f3d77 has its CatchHandler @ 009f3dc4 */
  (**(code **)(*(long *)param_2 + 0x288))(aVStack_40,param_2,param_3,aVStack_50,1);
  facebook::jsi::Value::~Value(aVStack_50);
                    /* try { // try from 009f3d80 to 009f3d87 has its CatchHandler @ 009f3db4 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_40);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 009f3e30  jsi_sys::ffi::Function_callAsConstructor2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callAsConstructor2 */

void __rustcall
jsi_sys::ffi::Function_callAsConstructor2
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5)

{
  Value *this;
  Value aVStack_70 [16];
  Value aVStack_60 [16];
  Value aVStack_50 [16];
  
                    /* try { // try from 009f3e58 to 009f3e67 has its CatchHandler @ 009f3f1c */
  facebook::jsi::Value::Value(aVStack_70,param_2,param_4);
                    /* try { // try from 009f3e68 to 009f3e77 has its CatchHandler @ 009f3f08 */
  facebook::jsi::Value::Value(aVStack_60,param_2,param_5);
                    /* try { // try from 009f3e80 to 009f3e9b has its CatchHandler @ 009f3ef4 */
  (**(code **)(*(long *)param_2 + 0x288))(aVStack_50,param_2,param_3,aVStack_70,2);
  facebook::jsi::Value::~Value(aVStack_60);
  facebook::jsi::Value::~Value(aVStack_70);
                    /* try { // try from 009f3eac to 009f3eb3 has its CatchHandler @ 009f3ee4 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_50);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_50);
  return;
}


// ===== 009f3f74  jsi_sys::ffi::Function_callAsConstructor3 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callAsConstructor3 */

void __rustcall
jsi_sys::ffi::Function_callAsConstructor3
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5,
          Value *param_6)

{
  Value *this;
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  Value aVStack_60 [16];
  Value aVStack_50 [16];
  
                    /* try { // try from 009f3fa0 to 009f3faf has its CatchHandler @ 009f4084 */
  facebook::jsi::Value::Value(aVStack_80,param_2,param_4);
                    /* try { // try from 009f3fb4 to 009f3fdb has its CatchHandler @ 009f4090 */
  facebook::jsi::Value::Value(aVStack_70,param_2,param_5);
  facebook::jsi::Value::Value(aVStack_60,param_2,param_6);
                    /* try { // try from 009f3fe4 to 009f3fff has its CatchHandler @ 009f4060 */
  (**(code **)(*(long *)param_2 + 0x288))(aVStack_50,param_2,param_3,aVStack_80,3);
  facebook::jsi::Value::~Value(aVStack_60);
  facebook::jsi::Value::~Value(aVStack_70);
  facebook::jsi::Value::~Value(aVStack_80);
                    /* try { // try from 009f4018 to 009f401f has its CatchHandler @ 009f4050 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_50);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_50);
  return;
}


// ===== 009f4100  jsi_sys::ffi::Function_callAsConstructor4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callAsConstructor4 */

void __rustcall
jsi_sys::ffi::Function_callAsConstructor4
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5,
          Value *param_6,Value *param_7)

{
  Value *this;
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  Value aVStack_60 [16];
  
                    /* try { // try from 009f4134 to 009f4143 has its CatchHandler @ 009f4240 */
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_4);
                    /* try { // try from 009f4148 to 009f4183 has its CatchHandler @ 009f424c */
  facebook::jsi::Value::Value(aVStack_90,param_2,param_5);
  facebook::jsi::Value::Value(aVStack_80,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_70,param_2,param_7);
                    /* try { // try from 009f418c to 009f41a7 has its CatchHandler @ 009f4214 */
  (**(code **)(*(long *)param_2 + 0x288))(aVStack_60,param_2,param_3,aVStack_a0,4);
  facebook::jsi::Value::~Value(aVStack_70);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
                    /* try { // try from 009f41c8 to 009f41cf has its CatchHandler @ 009f4204 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_60);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_60);
  return;
}


// ===== 009f42bc  jsi_sys::ffi::Function_callAsConstructor5 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callAsConstructor5 */

void __rustcall
jsi_sys::ffi::Function_callAsConstructor5
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5,
          Value *param_6,Value *param_7,Value *param_8)

{
  Value *this;
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  Value aVStack_60 [16];
  
                    /* try { // try from 009f42f4 to 009f4303 has its CatchHandler @ 009f4428 */
  facebook::jsi::Value::Value(aVStack_b0,param_2,param_4);
                    /* try { // try from 009f4308 to 009f435b has its CatchHandler @ 009f4434 */
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_5);
  facebook::jsi::Value::Value(aVStack_90,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_80,param_2,param_7);
  facebook::jsi::Value::Value(aVStack_70,param_2,param_8);
                    /* try { // try from 009f4364 to 009f437f has its CatchHandler @ 009f43f4 */
  (**(code **)(*(long *)param_2 + 0x288))(aVStack_60,param_2,param_3,aVStack_b0,5);
  facebook::jsi::Value::~Value(aVStack_70);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
                    /* try { // try from 009f43a8 to 009f43af has its CatchHandler @ 009f43e4 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_60);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_60);
  return;
}


// ===== 009f44a4  jsi_sys::ffi::Function_callAsConstructor6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_callAsConstructor6 */

void __rustcall
jsi_sys::ffi::Function_callAsConstructor6
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5,
          Value *param_6,Value *param_7,Value *param_8,Value *param_9)

{
  Value *this;
  Value aVStack_d0 [16];
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  
                    /* try { // try from 009f44e4 to 009f44f3 has its CatchHandler @ 009f4640 */
  facebook::jsi::Value::Value(aVStack_d0,param_2,param_4);
                    /* try { // try from 009f44f8 to 009f455f has its CatchHandler @ 009f464c */
  facebook::jsi::Value::Value(aVStack_c0,param_2,param_5);
  facebook::jsi::Value::Value(aVStack_b0,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_7);
  facebook::jsi::Value::Value(aVStack_90,param_2,param_8);
  facebook::jsi::Value::Value(aVStack_80,param_2,param_9);
                    /* try { // try from 009f4568 to 009f4583 has its CatchHandler @ 009f4604 */
  (**(code **)(*(long *)param_2 + 0x288))(aVStack_70,param_2,param_3,aVStack_d0,6);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
  facebook::jsi::Value::~Value(aVStack_c0);
  facebook::jsi::Value::~Value(aVStack_d0);
                    /* try { // try from 009f45b4 to 009f45bb has its CatchHandler @ 009f45f4 */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_70);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_70);
  return;
}


// ===== 009f46bc  jsi_sys::ffi::Function_call6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_call6 */

void __rustcall
jsi_sys::ffi::Function_call6
          (undefined8 *param_1,IRuntime *param_2,undefined8 param_3,Value *param_4,Value *param_5,
          Value *param_6,Value *param_7,Value *param_8,Value *param_9)

{
  Value *this;
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  undefined4 local_70 [4];
  
                    /* try { // try from 009f46fc to 009f470b has its CatchHandler @ 009f4870 */
  facebook::jsi::Value::Value(aVStack_e0,param_2,param_4);
                    /* try { // try from 009f4710 to 009f4777 has its CatchHandler @ 009f487c */
  facebook::jsi::Value::Value(aVStack_d0,param_2,param_5);
  facebook::jsi::Value::Value(aVStack_c0,param_2,param_6);
  facebook::jsi::Value::Value(aVStack_b0,param_2,param_7);
  facebook::jsi::Value::Value(aVStack_a0,param_2,param_8);
  facebook::jsi::Value::Value(aVStack_90,param_2,param_9);
  local_70[0] = 0;
                    /* try { // try from 009f4784 to 009f47a3 has its CatchHandler @ 009f482c */
  (**(code **)(*(long *)param_2 + 0x280))(aVStack_80,param_2,param_3,local_70,aVStack_e0,6);
  facebook::jsi::Value::~Value((Value *)local_70);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
  facebook::jsi::Value::~Value(aVStack_c0);
  facebook::jsi::Value::~Value(aVStack_d0);
  facebook::jsi::Value::~Value(aVStack_e0);
                    /* try { // try from 009f47dc to 009f47e3 has its CatchHandler @ 009f481c */
  this = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(this,aVStack_80);
  *param_1 = this;
  facebook::jsi::Value::~Value(aVStack_80);
  return;
}


// ===== 009f48ec  facebook::jsi::StringBuffer::~StringBuffer =====

/* facebook::jsi::StringBuffer::~StringBuffer() */

void __thiscall facebook::jsi::StringBuffer::~StringBuffer(StringBuffer *this)

{
  *(undefined **)this = PTR_vtable_00b01200 + 0x10;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  facebook::jsi::Buffer::~Buffer((Buffer *)this);
  operator_delete(this);
  return;
}


// ===== 009f4934  facebook::jsi::StringBuffer::size =====

/* facebook::jsi::StringBuffer::size() const */

ulong __thiscall facebook::jsi::StringBuffer::size(StringBuffer *this)

{
  ulong uVar1;
  
  uVar1 = (ulong)((byte)this[8] >> 1);
  if (((byte)this[8] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x10);
  }
  return uVar1;
}


// ===== 009f494c  facebook::jsi::StringBuffer::data =====

/* facebook::jsi::StringBuffer::data() const */

StringBuffer * __thiscall facebook::jsi::StringBuffer::data(StringBuffer *this)

{
  StringBuffer *pSVar1;
  
  pSVar1 = this + 9;
  if (((byte)this[8] & 1) != 0) {
    pSVar1 = *(StringBuffer **)(this + 0x18);
  }
  return pSVar1;
}


// ===== 009f4964  FUN_009f4964 =====

void FUN_009f4964(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("basic_string");
}


// ===== 009f4978  FUN_009f4978 =====

void FUN_009f4978(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 009f4994 to 009f499b has its CatchHandler @ 009f49b4 */
  FUN_009f49c8(uVar1,param_1);
  uVar2 = __cxa_throw(uVar1,PTR_typeinfo_00b00b80,PTR__length_error_00b00b88);
                    /* catch() { ... } // from try @ 009f4994 with catch @ 009f49b4 */
  __cxa_free_exception(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar2);
}


// ===== 009f49c8  FUN_009f49c8 =====

void FUN_009f49c8(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_00b00b90 + 0x10;
  return;
}


// ===== 009f49f8  std::__ndk1::__shared_ptr_emplace<facebook::jsi::StringBuffer,std::__ndk1::allocator<facebook::jsi::StringBuffer>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<facebook::jsi::StringBuffer,
   std::__ndk1::allocator<facebook::jsi::StringBuffer> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<facebook::jsi::StringBuffer,std::__ndk1::allocator<facebook::jsi::StringBuffer>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<facebook::jsi::StringBuffer,std::__ndk1::allocator<facebook::jsi::StringBuffer>>
           *this)

{
  *(undefined **)this = PTR_vtable_00b01208 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}


// ===== 009f4a0c  std::__ndk1::__shared_ptr_emplace<facebook::jsi::StringBuffer,std::__ndk1::allocator<facebook::jsi::StringBuffer>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<facebook::jsi::StringBuffer,
   std::__ndk1::allocator<facebook::jsi::StringBuffer> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<facebook::jsi::StringBuffer,std::__ndk1::allocator<facebook::jsi::StringBuffer>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<facebook::jsi::StringBuffer,std::__ndk1::allocator<facebook::jsi::StringBuffer>>
           *this)

{
  *(undefined **)this = PTR_vtable_00b01208 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 009f4a40  FUN_009f4a40 =====

void FUN_009f4a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f4a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 009f4a4c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 009f4a50  FUN_009f4a50 =====

void FUN_009f4a50(void *param_1)

{
  int iVar1;
  
  if (*(long *)((long)param_1 + 8) == 2) {
    iVar1 = *(int *)((long)param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_009f4aa8;
      if (iVar1 != 3) {
                    /* try { // try from 009f4ad4 to 009f4aeb has its CatchHandler @ 009f4af0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c((long)param_1 + 0x10);
    if (*(long *)((long)param_1 + 0x10) != 0) {
      free(*(void **)((long)param_1 + 0x18));
    }
  }
LAB_009f4aa8:
  if (*(long *)((long)param_1 + 0x38) != 0) {
    free(*(void **)((long)param_1 + 0x40));
  }
  free(param_1);
  return;
}


// ===== 009f4b20  FUN_009f4b20 =====

void FUN_009f4b20(void *param_1)

{
  int iVar1;
  
  if (*(long *)((long)param_1 + 8) == 2) {
    iVar1 = *(int *)((long)param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_009f4b78;
      if (iVar1 != 3) {
                    /* try { // try from 009f4b90 to 009f4ba7 has its CatchHandler @ 009f4bac */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c((long)param_1 + 0x10);
    if (*(long *)((long)param_1 + 0x10) != 0) {
      free(*(void **)((long)param_1 + 0x18));
    }
  }
LAB_009f4b78:
  free(param_1);
  return;
}


// ===== 009f4bc8  FUN_009f4bc8 =====

void FUN_009f4bc8(void *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  
  if (*(long *)((long)param_1 + 8) == 2) {
    iVar2 = *(int *)((long)param_1 + 0x30);
    if (iVar2 != 0) {
      if (iVar2 == 2) goto LAB_009f4c24;
      if (iVar2 != 3) {
                    /* try { // try from 009f4c68 to 009f4c7f has its CatchHandler @ 009f4cb8 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c((long)param_1 + 0x10);
    if (*(long *)((long)param_1 + 0x10) != 0) {
      free(*(void **)((long)param_1 + 0x18));
    }
  }
LAB_009f4c24:
  __ptr = *(void **)((long)param_1 + 0x38);
  puVar1 = *(undefined8 **)((long)param_1 + 0x40);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 009f4c30 to 009f4c37 has its CatchHandler @ 009f4c84 */
    (*pcVar3)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 009f4ce0  FUN_009f4ce0 =====

void FUN_009f4ce0(void *param_1)

{
  int iVar1;
  
  if (*(long *)((long)param_1 + 8) == 2) {
    iVar1 = *(int *)((long)param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_009f4d38;
      if (iVar1 != 3) {
                    /* try { // try from 009f4d50 to 009f4d67 has its CatchHandler @ 009f4d6c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c((long)param_1 + 0x10);
    if (*(long *)((long)param_1 + 0x10) != 0) {
      free(*(void **)((long)param_1 + 0x18));
    }
  }
LAB_009f4d38:
  free(param_1);
  return;
}


// ===== 009f4d88  FUN_009f4d88 =====

void FUN_009f4d88(void *param_1)

{
  int iVar1;
  
  if (*(long *)((long)param_1 + 8) == 2) {
    iVar1 = *(int *)((long)param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_009f4de0;
      if (iVar1 != 3) {
                    /* try { // try from 009f4df8 to 009f4e0f has its CatchHandler @ 009f4e14 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c((long)param_1 + 0x10);
    if (*(long *)((long)param_1 + 0x10) != 0) {
      free(*(void **)((long)param_1 + 0x18));
    }
  }
LAB_009f4de0:
  free(param_1);
  return;
}


// ===== 009f4e30  FUN_009f4e30 =====

undefined1  [16] FUN_009f4e30(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  uVar5 = *(undefined8 *)((long)param_1 + 0x48);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar6._0_8_ = (undefined8 *)FUN_004b25a4(0x18,8);
  if (auVar6._0_8_ == (undefined8 *)0x0) {
                    /* try { // try from 009f4ee8 to 009f4ef3 has its CatchHandler @ 009f4f30 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  lVar4 = *(long *)((long)param_1 + 8);
  *auVar6._0_8_ = uVar1;
  auVar6._0_8_[1] = uVar2;
  auVar6._0_8_[2] = uVar5;
  if (lVar4 == 2) {
    iVar3 = *(int *)((long)param_1 + 0x30);
    if (iVar3 != 0) {
      if (iVar3 == 2) goto LAB_009f4eb8;
      if (iVar3 != 3) {
                    /* try { // try from 009f4ef8 to 009f4f0f has its CatchHandler @ 009f4f14 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c((long)param_1 + 0x10);
    if (*(long *)((long)param_1 + 0x10) != 0) {
      free(*(void **)((long)param_1 + 0x18));
    }
  }
LAB_009f4eb8:
  free(param_1);
  auVar6._8_8_ = &PTR_FUN_00af8028;
  return auVar6;
}


// ===== 009f4f78  FUN_009f4f78 =====

undefined1  [16] FUN_009f4f78(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (undefined8 *)FUN_004b25a4(0x10,8);
  if (auVar5._0_8_ == (undefined8 *)0x0) {
                    /* try { // try from 009f5020 to 009f502b has its CatchHandler @ 009f5068 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  lVar4 = *(long *)((long)param_1 + 8);
  *auVar5._0_8_ = uVar1;
  auVar5._0_8_[1] = uVar2;
  if (lVar4 == 2) {
    iVar3 = *(int *)((long)param_1 + 0x30);
    if (iVar3 != 0) {
      if (iVar3 == 2) goto LAB_009f4ff4;
      if (iVar3 != 3) {
                    /* try { // try from 009f5030 to 009f5047 has its CatchHandler @ 009f504c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c((long)param_1 + 0x10);
    if (*(long *)((long)param_1 + 0x10) != 0) {
      free(*(void **)((long)param_1 + 0x18));
    }
  }
LAB_009f4ff4:
  free(param_1);
  auVar5._8_8_ = &UNK_00af80a0;
  return auVar5;
}


// ===== 009f509c  FUN_009f509c =====

undefined1  [16] FUN_009f509c(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (undefined8 *)FUN_004b25a4(0x10,8);
  if (auVar5._0_8_ == (undefined8 *)0x0) {
                    /* try { // try from 009f5150 to 009f515b has its CatchHandler @ 009f5198 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  lVar4 = *(long *)((long)param_1 + 8);
  *auVar5._0_8_ = uVar1;
  auVar5._0_8_[1] = uVar2;
  if (lVar4 == 2) {
    iVar3 = *(int *)((long)param_1 + 0x30);
    if (iVar3 != 0) {
      if (iVar3 == 2) goto LAB_009f5120;
      if (iVar3 != 3) {
                    /* try { // try from 009f5160 to 009f5177 has its CatchHandler @ 009f517c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c((long)param_1 + 0x10);
    if (*(long *)((long)param_1 + 0x10) != 0) {
      free(*(void **)((long)param_1 + 0x18));
    }
  }
LAB_009f5120:
  free(param_1);
  auVar5._8_8_ = &PTR_FUN_00af8118;
  return auVar5;
}


// ===== 009f51d8  FUN_009f51d8 =====

void FUN_009f51d8(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009f51f0  FUN_009f51f0 =====

void FUN_009f51f0(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 009f5208 to 009f520f has its CatchHandler @ 009f5238 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009f525c  FUN_009f525c =====

void FUN_009f525c(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009f5274  FUN_009f5274 =====

void FUN_009f5274(ulong *param_1,ulong param_2,ulong param_3)

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
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  FUN_009f58c0(&local_38,*param_1,param_1[1],uVar1,1,1);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009f52f4  <anyhow::fmt::anyhow::error::ErrorImpl>::debug =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::fmt::anyhow::error::ErrorImpl>::debug */

undefined8 __rustcall
<anyhow::fmt::anyhow::error::ErrorImpl>::debug(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_d0 [16];
  undefined8 **local_c0;
  undefined **ppuStack_b8;
  long *local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [16];
  ulong local_90;
  undefined8 *local_80;
  code *pcStack_78;
  ulong local_70;
  undefined1 uStack_61;
  
  local_d0 = (**(code **)(*param_1 + 8))();
  lVar4 = local_d0._8_8_;
  uVar3 = local_d0._0_8_;
  if (*(char *)((long)param_2 + 0x12) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x009f53e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar4 + 0x18))(uVar3,param_2);
    return uVar3;
  }
  ppuStack_b8 = (undefined **)<anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt;
  local_c0 = (undefined8 **)local_d0;
  uVar2 = core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_c0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  auVar7 = (**(code **)(lVar4 + 0x30))(uVar3);
  if (auVar7._0_8_ != 0) {
    uVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0037eb95,0xc);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar4 = (**(code **)(auVar7._8_8_ + 0x30))(auVar7._0_8_);
    pcVar6 = (code *)0x0;
    do {
      auVar8 = (**(code **)(auVar7._8_8_ + 0x30))(auVar7._0_8_);
      local_a0 = auVar7;
      uVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0037eba1,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      local_80 = (undefined8 *)local_a0;
      local_a8 = 0;
      pcStack_78 = <anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt;
      local_c0 = (undefined8 **)(ulong)(lVar4 != 0);
      ppuStack_b8 = (undefined **)pcVar6;
      local_b0 = param_2;
      uVar2 = core::fmt::write(&local_c0,&DAT_00af8170,&DAT_002ab692,&local_80);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      pcVar6 = pcVar6 + 1;
      auVar7 = auVar8;
    } while (auVar8._0_8_ != 0);
  }
  plVar5 = param_1 + 1;
  lVar4 = *plVar5;
  if (lVar4 == -1) {
    auVar7 = (**(code **)(*param_1 + 8))(param_1);
    local_b0 = (long *)0x0;
    ppuStack_b8 = (undefined **)_UNK_0029f9b8;
    local_c0 = _DAT_0029f9b0;
    (**(code **)(auVar7._8_8_ + 0x50))(auVar7._0_8_,&local_c0,&DAT_0037ecd0);
    if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_0037ebe6,0x18,&PTR_s__root__cargo_registry_src_index__00af81f0);
    }
    lVar4 = *local_b0;
    plVar5 = local_b0;
  }
  if (lVar4 != 2) {
    return 0;
  }
  local_80 = (undefined8 *)0x0;
  pcStack_78 = (code *)&DAT_00000001;
  local_70 = 0;
  local_b0 = (long *)0x60000020;
  local_c0 = &local_80;
  ppuStack_b8 = &PTR_FUN_00af8208;
                    /* try { // try from 009f5518 to 009f551f has its CatchHandler @ 009f5694 */
  iVar1 = <std::backtrace::Backtrace_as_core::fmt::Display>::fmt(plVar5,&local_c0);
  if (iVar1 != 0) {
                    /* try { // try from 009f5658 to 009f567b has its CatchHandler @ 009f5694 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0037ebfe,0x37,&uStack_61,&DAT_00af81d0,
               &PTR_s__nix_store_8006w282fgsx3273c878b_00af8238);
  }
  local_a0._8_8_ = pcStack_78;
  local_a0._0_8_ = local_80;
  local_90 = local_70;
                    /* try { // try from 009f553c to 009f5607 has its CatchHandler @ 009f5680 */
  uVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0037eba2,2);
  if ((uVar2 & 1) == 0) {
    if ((local_90 < 0x10) ||
       (*(long *)local_a0._8_8_ != 0x6162206b63617473 ||
        *(long *)(local_a0._8_8_ + 8) != 0x3a65636172746b63)) {
      uVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0037eba4,0x11);
      if ((uVar2 & 1) != 0) goto LAB_009f560c;
    }
    else {
      FUN_009f6794(local_a0,0,1,&DAT_0037ebb5,1,&PTR_s__root__cargo_registry_src_index__00af81a0);
    }
    FUN_009f68f0(local_a0._8_8_,local_90);
    FUN_009f5808(local_a0);
    ppuStack_b8 = (undefined **)FUN_009f6374;
    local_c0 = (undefined8 **)local_a0;
    uVar2 = core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_c0);
    if ((uVar2 & 1) == 0) {
      if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
        free((void *)local_a0._8_8_);
      }
      return 0;
    }
  }
LAB_009f560c:
  if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
    free((void *)local_a0._8_8_);
  }
  return 1;
}


// ===== 009f56b4  FUN_009f56b4 =====

undefined8 FUN_009f56b4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x1;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 local_80 [16];
  undefined1 *local_70;
  code *pcStack_68;
  
  local_80 = (**(code **)(*param_1 + 8))();
  uVar1 = *param_2;
  uVar2 = param_2[1];
  pcStack_68 = <anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt;
  local_70 = local_80;
  uVar4 = core::fmt::write(uVar1,uVar2,&DAT_002ab692,&local_70);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (*(char *)((long)param_2 + 0x12) < '\0') {
    (**(code **)(*param_1 + 8))(param_1);
    auVar5 = (**(code **)(extraout_x1 + 0x30))();
    if (auVar5._0_8_ == 0) {
      return 0;
    }
    auVar6 = (**(code **)(auVar5._8_8_ + 0x30))();
    pcStack_68 = <anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt;
    local_70 = local_80;
    local_80 = auVar5;
    uVar4 = core::fmt::write(uVar1,uVar2,&DAT_002a22e0,&local_70);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    while( true ) {
      if (auVar6._0_8_ == 0) break;
      auVar5 = (**(code **)(auVar6._8_8_ + 0x30))(auVar6._0_8_);
      pcStack_68 = <anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt;
      local_70 = local_80;
      local_80 = auVar6;
      iVar3 = core::fmt::write(uVar1,uVar2,&DAT_002a22e0,&local_70);
      auVar6 = auVar5;
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ===== 009f5808  FUN_009f5808 =====

void FUN_009f5808(long param_1,ulong param_2)

{
  int iVar1;
  
  if (param_2 <= *(ulong *)(param_1 + 0x10)) {
    if ((param_2 != 0) && (param_2 < *(ulong *)(param_1 + 0x10))) {
      iVar1 = (int)*(char *)(*(long *)(param_1 + 8) + param_2);
      if (iVar1 == -0x41 || iVar1 + 0x41 < 0 != SCARRY4(iVar1,0x41)) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_0037ebb6,0x30,&PTR_s__root__cargo_registry_src_index__00af81b8);
      }
    }
    *(ulong *)(param_1 + 0x10) = param_2;
  }
  return;
}


// ===== 009f5858  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+core::error::Error>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn Trait<Assoc = X> +
   core::error::Error>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+core::error::Error>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_009f58c0(&local_38,*param_1,param_1[1],uVar1,8,0x10);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009f58c0  FUN_009f58c0 =====

void FUN_009f58c0(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
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
  goto LAB_009f595c;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_009f593c;
    }
LAB_009f594c:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_009f594c;
LAB_009f593c:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_009f595c:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 009f5974  <anyhow::error::[6]::anyhow::error::ErrorImpl>::error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::[6]::anyhow::error::ErrorImpl>::error */

void __rustcall <anyhow::error::[6]::anyhow::error::ErrorImpl>::error(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f597c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 009f5980  <anyhow::error::[6]::anyhow::error::ErrorImpl>::provide =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::[6]::anyhow::error::ErrorImpl>::provide */

void __rustcall
<anyhow::error::[6]::anyhow::error::ErrorImpl>::provide
          (long *param_1,long *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  if (((param_1[1] != -1) && (param_2[1] == 0x6d715e66196e7088 && *param_2 == -0x4f81bd8cd413ce0b))
     && (param_2[2] == 0)) {
    param_2[2] = (long)(param_1 + 1);
  }
  auVar1 = (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x009f5a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar1._8_8_ + 0x50))(auVar1._0_8_,param_2,param_3);
  return;
}


// ===== 009f5a04  FUN_009f5a04 =====

void FUN_009f5a04(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  size_t __n;
  ulong uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (*param_1 != param_1[1]) {
    *param_1 = param_1[1];
  }
  __n = param_1[4];
  *param_1 = 1;
  param_1[1] = 1;
  if (__n == 0) {
    plVar15 = (long *)param_1[2];
    puVar18 = (undefined1 *)param_1[5];
    puVar2 = (undefined1 *)param_1[6];
    lVar11 = plVar15[2];
    uVar7 = (long)puVar2 - (long)puVar18;
    if ((ulong)(*plVar15 - lVar11) < uVar7) {
      FUN_009f5274(plVar15,lVar11,(long)puVar2 - (long)puVar18);
      lVar11 = plVar15[2];
    }
    if (puVar18 == puVar2) goto LAB_009f5bb4;
    lVar9 = plVar15[1];
    if ((uVar7 < 0x20) || (lVar1 = lVar11 + lVar9, (ulong)(lVar1 - (long)puVar18) < 0x20)) {
LAB_009f5b9c:
      do {
        puVar6 = puVar18 + 1;
        *(undefined1 *)(lVar9 + lVar11) = *puVar18;
        lVar11 = lVar11 + 1;
        puVar18 = puVar6;
      } while (puVar6 != puVar2);
    }
    else {
      uVar16 = uVar7 & 0xffffffffffffffe0;
      puVar12 = (undefined8 *)(lVar1 + 0x10);
      puVar13 = (undefined8 *)(puVar18 + 0x10);
      lVar11 = lVar11 + uVar16;
      puVar18 = puVar18 + uVar16;
      uVar8 = uVar7 & 0xffffffffffffffe0;
      do {
        puVar4 = puVar13 + -1;
        uVar19 = puVar13[-2];
        uVar21 = puVar13[1];
        uVar20 = *puVar13;
        uVar8 = uVar8 - 0x20;
        puVar13 = puVar13 + 4;
        puVar12[-1] = *puVar4;
        puVar12[-2] = uVar19;
        puVar12[1] = uVar21;
        *puVar12 = uVar20;
        puVar12 = puVar12 + 4;
      } while (uVar8 != 0);
      if (uVar7 != uVar16) goto LAB_009f5b9c;
    }
    param_1[5] = (long)puVar18;
LAB_009f5bb4:
    plVar15[2] = lVar11;
    return;
  }
  plVar15 = (long *)param_1[2];
  uVar8 = param_1[3];
  puVar18 = (undefined1 *)param_1[5];
  puVar2 = (undefined1 *)param_1[6];
  uVar7 = plVar15[2];
  puVar6 = puVar18;
  if (uVar7 < uVar8) {
    do {
      if (puVar6 == puVar2) {
        return;
      }
      lVar11 = plVar15[1];
      puVar18 = puVar6 + 1;
      uVar3 = *puVar6;
      param_1[5] = (long)puVar18;
      *(undefined1 *)(lVar11 + uVar7) = uVar3;
      uVar7 = uVar7 + 1;
      plVar15[2] = plVar15[2] + 1;
      puVar6 = puVar18;
    } while (uVar8 != uVar7);
  }
  uVar16 = (long)puVar2 - (long)puVar18;
  uVar7 = uVar8;
  if (uVar16 != 0) {
    if (*plVar15 - (uVar8 + __n) < uVar16) {
      FUN_009f5274(plVar15,uVar8 + __n,uVar16);
    }
    uVar7 = uVar16 + uVar8;
    memmove((void *)(plVar15[1] + uVar7),(void *)(plVar15[1] + uVar8),__n);
    uVar8 = plVar15[2];
    param_1[3] = uVar7;
    puVar6 = puVar18;
    if (uVar8 < uVar7) {
      do {
        if (puVar6 == puVar2) {
          return;
        }
        lVar11 = plVar15[1];
        puVar18 = puVar6 + 1;
        uVar3 = *puVar6;
        uVar16 = uVar16 - 1;
        param_1[5] = (long)puVar18;
        *(undefined1 *)(lVar11 + uVar8) = uVar3;
        uVar8 = uVar8 + 1;
        plVar15[2] = plVar15[2] + 1;
        puVar6 = puVar18;
      } while (uVar7 != uVar8);
    }
    if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(0,uVar16);
    }
  }
  uVar8 = (long)puVar2 - (long)puVar18;
  if (uVar8 == 0) {
    puVar6 = &DAT_00000001;
    goto LAB_009f5ce8;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar6 = (undefined1 *)FUN_004b25a4(uVar16,1);
  if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,uVar16);
  }
  uVar17 = 0;
  if ((uVar8 < 0x20) || ((ulong)((long)puVar6 - (long)puVar18) < 0x20)) {
LAB_009f5c4c:
    do {
      puVar10 = puVar18 + 1;
      puVar6[uVar17] = *puVar18;
      uVar17 = uVar17 + 1;
      puVar18 = puVar10;
    } while (puVar10 != puVar2);
  }
  else {
    uVar17 = uVar8 & 0xffffffffffffffe0;
    puVar12 = (undefined8 *)(puVar6 + 0x10);
    puVar13 = (undefined8 *)(puVar18 + 0x10);
    puVar10 = puVar18 + uVar17;
    uVar14 = uVar8 & 0xffffffffffffffe0;
    do {
      puVar4 = puVar13 + -1;
      uVar19 = puVar13[-2];
      uVar21 = puVar13[1];
      uVar20 = *puVar13;
      uVar14 = uVar14 - 0x20;
      puVar13 = puVar13 + 4;
      puVar12[-1] = *puVar4;
      puVar12[-2] = uVar19;
      puVar12[1] = uVar21;
      *puVar12 = uVar20;
      puVar12 = puVar12 + 4;
    } while (uVar14 != 0);
    puVar18 = puVar10;
    if (uVar8 != uVar17) goto LAB_009f5c4c;
  }
  lVar11 = *plVar15;
  param_1[5] = (long)puVar10;
  if (lVar11 - (uVar7 + __n) <= uVar17 - 1) {
                    /* try { // try from 009f5d44 to 009f5d53 has its CatchHandler @ 009f5d64 */
    FUN_009f5274(plVar15,uVar7 + __n,uVar17);
  }
  uVar14 = uVar7 + uVar17;
  memmove((void *)(plVar15[1] + uVar14),(void *)(plVar15[1] + uVar7),__n);
  uVar8 = plVar15[2];
  param_1[3] = uVar14;
  if (uVar8 < uVar14) {
    lVar11 = 0;
    do {
      *(undefined1 *)(plVar15[1] + uVar8) = puVar6[lVar11];
      plVar15[2] = plVar15[2] + 1;
      if ((uVar17 - 1) + uVar7 == uVar8) break;
      bVar5 = uVar17 - 1 != lVar11;
      lVar11 = lVar11 + 1;
      uVar8 = uVar8 + 1;
    } while (bVar5);
  }
LAB_009f5ce8:
  if (uVar16 == 0) {
    return;
  }
  free(puVar6);
  return;
}


// ===== 009f5d84  FUN_009f5d84 =====

void FUN_009f5d84(undefined8 *param_1)

{
  long lVar1;
  size_t __n;
  long lVar2;
  
  __n = param_1[4];
  *param_1 = 1;
  param_1[1] = 1;
  if (__n != 0) {
    lVar1 = param_1[2];
    lVar2 = *(long *)(lVar1 + 0x10);
    if (param_1[3] != lVar2) {
      memmove((void *)(*(long *)(lVar1 + 8) + lVar2),(void *)(*(long *)(lVar1 + 8) + param_1[3]),__n
             );
    }
    *(size_t *)(lVar1 + 0x10) = lVar2 + __n;
    return;
  }
  return;
}


// ===== 009f5df8  FUN_009f5df8 =====

void FUN_009f5df8(long *param_1)

{
  long extraout_x1;
  
  (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x009f5e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1 + 0x30))();
  return;
}


// ===== 009f5e18  FUN_009f5e18 =====

void FUN_009f5e18(long *param_1,long *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  if (((param_1[1] != -1) && (param_2[1] == 0x6d715e66196e7088 && *param_2 == -0x4f81bd8cd413ce0b))
     && (param_2[2] == 0)) {
    param_2[2] = (long)(param_1 + 1);
  }
  auVar1 = (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x009f5e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar1._8_8_ + 0x50))(auVar1._0_8_,param_2,param_3);
  return;
}


// ===== 009f5e9c  <anyhow::fmt::anyhow::error::ErrorImpl>::debug =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::fmt::anyhow::error::ErrorImpl>::debug(void)

{
  (*(code *)PTR_debug_00b01908)();
  return;
}


// ===== 009f5ea0  FUN_009f5ea0 =====

void FUN_009f5ea0(long *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x009f5ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar1._8_8_ + 0x20))(auVar1._0_8_,param_2);
  return;
}


// ===== 009f5ed0  FUN_009f5ed0 =====

void FUN_009f5ed0(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037ec35,5);
  return;
}


// ===== 009f5ee4  FUN_009f5ee4 =====

undefined8 FUN_009f5ee4(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1[2];
  if (param_2 < 0x80) {
    uVar6 = 1;
  }
  else if (param_2 < 0x800) {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
    if (0xffff < param_2) {
      uVar6 = 4;
    }
  }
  if ((ulong)(*param_1 - lVar5) < uVar6) {
    FUN_009f5274(param_1,lVar5,uVar6);
    lVar4 = param_1[1];
  }
  else {
    lVar4 = param_1[1];
  }
  pbVar3 = (byte *)(lVar4 + lVar5);
  if (param_2 < 0x80) {
    *pbVar3 = (byte)param_2;
  }
  else {
    bVar1 = (byte)param_2 & 0x3f | 0x80;
    if (param_2 < 0x800) {
      pbVar3[1] = bVar1;
      *pbVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar2 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar3[1] = bVar2;
        pbVar3[2] = bVar1;
        *pbVar3 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar3[2] = bVar2;
        pbVar3[3] = bVar1;
        pbVar3[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar3 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = uVar6 + lVar5;
  return 0;
}


// ===== 009f6000  FUN_009f6000 =====

undefined8 FUN_009f6000(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_009f5274(param_1,lVar1,param_3);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_009f6040;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_009f6040:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 009f607c  FUN_009f607c =====

uint FUN_009f607c(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  ulong local_78;
  ulong *puStack_70;
  undefined *local_68;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  bVar8 = (byte)param_1[3];
  uVar10 = 0;
  lVar9 = 0;
  lVar7 = 0;
  uVar12 = 0;
  do {
    uVar11 = uVar12;
    if (uVar11 != 0) break;
    do {
      uVar4 = uVar10;
      if (param_3 < uVar10) {
LAB_009f6200:
        uVar12 = 1;
        uVar5 = param_3;
        uVar10 = uVar4;
        lVar3 = lVar7;
        goto joined_r0x009f61e0;
      }
      uVar4 = param_3;
      if (param_3 - uVar10 < 0x10) {
        uVar5 = 0;
        if (param_3 == uVar10) goto LAB_009f6200;
        while (*(char *)(param_2 + uVar10 + uVar5) != '\n') {
          uVar5 = uVar5 + 1;
          if (param_3 - uVar10 == uVar5) goto LAB_009f6200;
        }
      }
      else {
        auVar13 = core::slice::memchr::memchr_aligned(10,param_2 + uVar10,param_3 - uVar10);
        uVar5 = auVar13._8_8_;
        if (auVar13._0_8_ != 1) goto LAB_009f6200;
      }
      uVar5 = uVar5 + uVar10;
      uVar10 = uVar5 + 1;
    } while ((param_3 <= uVar5) || (*(char *)(param_2 + uVar5) != '\n'));
    uVar12 = 0;
    lVar3 = uVar5 + 1;
joined_r0x009f61e0:
    if ((bVar8 & 1) == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      if ((uVar1 & 1) == 0) {
LAB_009f6244:
        uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(puVar6,&DAT_002bd1ec,4);
        goto joined_r0x009f6258;
      }
      puStack_70 = &local_78;
      local_68 = PTR_fmt_00b00c10;
      local_78 = uVar2;
      uVar4 = core::fmt::write(*puVar6,puVar6[1],&DAT_0037ec3a,&puStack_70);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    else if (lVar9 != 0) {
      uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(puVar6,10);
      if ((uVar4 & 1) != 0) break;
      if (uVar1 == 0) goto LAB_009f6244;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(puVar6,"       ",7);
joined_r0x009f6258:
      if ((uVar4 & 1) != 0) break;
    }
    lVar9 = lVar9 + 1;
    uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(puVar6,param_2 + lVar7,uVar5 - lVar7);
    bVar8 = 1;
    lVar7 = lVar3;
  } while ((uVar4 & 1) == 0);
  return uVar11 ^ 1;
}


// ===== 009f628c  FUN_009f628c =====

void FUN_009f628c(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar2 = 0;
    do {
      lVar4 = lVar3 + lVar2 * 0x38;
      __ptr = *(void **)(lVar4 + 0x28);
      lVar5 = *(long *)(lVar4 + 0x30);
      if (lVar5 != 0) {
        plVar6 = (long *)((long)__ptr + 0x20);
        do {
          if (0 < *plVar6) {
            free((void *)plVar6[1]);
          }
          if (plVar6[-4] != 2) {
            if (plVar6[-4] == 0) {
              if (plVar6[-3] != 0) {
                __ptr_00 = (void *)plVar6[-2];
                goto LAB_009f62dc;
              }
            }
            else if (plVar6[-3] != 0) {
              __ptr_00 = (void *)plVar6[-2];
LAB_009f62dc:
              free(__ptr_00);
            }
          }
          lVar5 = lVar5 + -1;
          plVar6 = plVar6 + 9;
        } while (lVar5 != 0);
      }
      if (*(long *)(lVar4 + 0x20) != 0) {
        free(__ptr);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != lVar1);
  }
  return;
}


// ===== 009f6374  FUN_009f6374 =====

void FUN_009f6374(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 009f6388  FUN_009f6388 =====

void FUN_009f6388(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint local_14;
  
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    FUN_009f607c(param_1,&local_14,1);
    return;
  }
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x800) {
    local_14 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
    FUN_009f607c(param_1,&local_14,2);
    return;
  }
  bVar1 = (byte)(param_2 >> 6);
  if (param_2 >> 0x10 == 0) {
    local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
    local_14 = CONCAT31(CONCAT12(uVar2,(short)local_14) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
               0x8000e0;
    FUN_009f607c(param_1,&local_14,3);
    return;
  }
  local_14 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),(char)(param_2 >> 0x12)
                     ) & 0x3f3f3fff | 0x808080f0;
  FUN_009f607c(param_1,&local_14,4);
  return;
}


// ===== 009f6468  FUN_009f6468 =====

void FUN_009f6468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00af8170,param_2,param_3);
  return;
}


// ===== 009f647c  FUN_009f647c =====

void FUN_009f647c(long *param_1)

{
  long extraout_x1;
  
  (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x009f6498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1 + 0x30))();
  return;
}


// ===== 009f649c  FUN_009f649c =====

undefined1  [16] FUN_009f649c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 009f64ac  FUN_009f64ac =====

undefined8 FUN_009f64ac(void)

{
  return 0;
}


// ===== 009f64b4  FUN_009f64b4 =====

void FUN_009f64b4(void)

{
  return;
}


// ===== 009f64b8  FUN_009f64b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f64b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f2e0;
  param_1[1] = _UNK_0029f2e8;
  *param_1 = uVar1;
  return;
}


// ===== 009f64cc  FUN_009f64cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f64cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fe90;
  param_1[1] = _UNK_0029fe98;
  *param_1 = uVar1;
  return;
}


// ===== 009f64e0  FUN_009f64e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f64e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f660;
  param_1[1] = _UNK_0029f668;
  *param_1 = uVar1;
  return;
}


// ===== 009f64f4  FUN_009f64f4 =====

void FUN_009f64f4(undefined8 param_1)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
                    /* try { // try from 009f6510 to 009f6517 has its CatchHandler @ 009f6548 */
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_60);
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  local_70 = local_40;
  FUN_009f65a8(param_1,&local_90);
  return;
}


// ===== 009f6568  FUN_009f6568 =====

void FUN_009f6568(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(auStack_50);
  FUN_009f664c(param_1,param_2,auStack_50);
  return;
}


// ===== 009f65a8  FUN_009f65a8 =====

void FUN_009f65a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00af8250;
    return;
  }
                    /* try { // try from 009f6624 to 009f662f has its CatchHandler @ 009f6634 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 009f664c  FUN_009f664c =====

void FUN_009f664c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00af8280;
    return;
  }
                    /* try { // try from 009f66bc to 009f66c7 has its CatchHandler @ 009f66cc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 009f66f4  FUN_009f66f4 =====

void FUN_009f66f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00af8580;
    return;
  }
                    /* try { // try from 009f676c to 009f6777 has its CatchHandler @ 009f677c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 009f6794  FUN_009f6794 =====

void FUN_009f6794(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  int iVar4;
  long local_68;
  long lStack_60;
  long local_58;
  ulong local_50;
  size_t local_48;
  long local_40;
  long lStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  local_48 = uVar3 - param_3;
  if (uVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,param_3,uVar3,&PTR_s__nix_store_8006w282fgsx3273c878b_00af85e0);
  }
  if (param_2 <= param_3) {
    lStack_60 = *(long *)(param_1 + 8);
    if (((param_2 != 0) && (param_2 < uVar3)) &&
       (iVar4 = (int)*(char *)(lStack_60 + param_2),
       iVar4 == -0x41 || iVar4 + 0x41 < 0 != SCARRY4(iVar4,0x41))) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt("start of range should be a character boundary",0x5b,param_6);
    }
    if (((param_3 != 0) && (param_3 < uVar3)) &&
       (iVar4 = (int)*(char *)(lStack_60 + param_3),
       iVar4 == -0x41 || iVar4 + 0x41 < 0 != SCARRY4(iVar4,0x41))) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt("end of range should be a character boundary",0x57,param_6);
    }
    if (param_2 <= param_3) {
      local_68 = lStack_60 + param_2;
      lStack_60 = lStack_60 + param_3;
      lStack_38 = param_4 + param_5;
      *(ulong *)(param_1 + 0x10) = param_2;
                    /* try { // try from 009f6818 to 009f681f has its CatchHandler @ 009f68dc */
      local_58 = param_1;
      local_50 = param_3;
      local_40 = param_4;
      FUN_009f5a04(&local_68);
      sVar2 = local_48;
      lVar1 = local_58;
      if (local_48 != 0) {
        uVar3 = *(ulong *)(local_58 + 0x10);
        if (local_50 != uVar3) {
          memmove((void *)(*(long *)(local_58 + 8) + uVar3),
                  (void *)(*(long *)(local_58 + 8) + local_50),local_48);
        }
        *(ulong *)(lVar1 + 0x10) = uVar3 + sVar2;
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (param_2,param_3,uVar3,&PTR_s__nix_store_8006w282fgsx3273c878b_00af85f8);
}


// ===== 009f68f0  FUN_009f68f0 =====

void FUN_009f68f0(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    return;
  }
  pbVar5 = param_1 + param_2;
  do {
    pbVar6 = pbVar5 + -1;
    bVar1 = *pbVar6;
    uVar8 = (ulong)(char)bVar1;
    if ((char)bVar1 < 0) {
      pbVar6 = pbVar5 + -2;
      bVar2 = *pbVar6;
      uVar7 = (uint)(char)bVar2;
      if ((int)(uVar7 + 0x40) < 0 == SCARRY4(uVar7,0x40)) {
        uVar7 = uVar7 & 0x1f;
      }
      else {
        pbVar6 = pbVar5 + -3;
        bVar3 = *pbVar6;
        if ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)) {
          uVar7 = (int)(char)bVar3 & 0xf;
        }
        else {
          pbVar6 = pbVar5 + -4;
          uVar7 = bVar3 & 0x3f | (*pbVar6 & 7) << 6;
        }
        uVar7 = bVar2 & 0x3f | uVar7 << 6;
      }
      uVar8 = (ulong)((int)(char)bVar1 & 0x3fU | uVar7 << 6);
    }
    uVar7 = (uint)uVar8;
    if ((4 < uVar7 - 9) && (uVar7 != 0x20)) {
      if (uVar7 < 0x85) {
        return;
      }
      uVar4 = uVar7 >> 8;
      if (uVar4 < 0x20) {
        if (uVar4 == 0) {
          bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar8 & 0xff];
joined_r0x009f69e8:
          if ((bVar1 & 1) == 0) {
            return;
          }
        }
        else {
          if (uVar4 != 0x16) {
            return;
          }
          if (uVar7 != 0x1680) {
            return;
          }
        }
      }
      else {
        if (uVar4 == 0x20) {
          bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar8 & 0xff] >> 1;
          goto joined_r0x009f69e8;
        }
        if (uVar4 != 0x30) {
          return;
        }
        if (uVar7 != 0x3000) {
          return;
        }
      }
    }
    pbVar5 = pbVar6;
    if (param_1 == pbVar6) {
      return;
    }
  } while( true );
}


// ===== 009f69fc  FUN_009f69fc =====

undefined1  [16] FUN_009f69fc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00af82d0;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 009f6a0c  FUN_009f6a0c =====

undefined1  [16] FUN_009f6a0c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00af8348;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 009f6a1c  FUN_009f6a1c =====

undefined1  [16] FUN_009f6a1c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00af83c0;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 009f6a2c  FUN_009f6a2c =====

void FUN_009f6a2c(void)

{
  return;
}


// ===== 009f6a38  FUN_009f6a38 =====

void FUN_009f6a38(void)

{
  return;
}


// ===== 009f6a44  FUN_009f6a44 =====

void FUN_009f6a44(void)

{
  return;
}


// ===== 009f6a50  FUN_009f6a50 =====

long FUN_009f6a50(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != 0x3ad56f82f34515f9 || param_2[1] != -0x2b488e32e528b816) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 009f6a90  FUN_009f6a90 =====

long FUN_009f6a90(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x119351643378db84 || param_2[1] != 0x16fa802d90bf615b) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 009f6ad0  FUN_009f6ad0 =====

long FUN_009f6ad0(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x4609fd23a01609a4 || param_2[1] != 0x24c161f26c70c1f1) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 009f6b10  FUN_009f6b10 =====

void FUN_009f6b10(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_009f6b68;
      if (iVar1 != 3) {
                    /* try { // try from 009f6b90 to 009f6ba7 has its CatchHandler @ 009f6bac */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      free(*(void **)(param_1 + 0x18));
    }
  }
LAB_009f6b68:
  if (*(long *)(param_1 + 0x38) != 0) {
    free(*(void **)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 009f6bcc  FUN_009f6bcc =====

void FUN_009f6bcc(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        return;
      }
      if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      free(*(void **)(param_1 + 0x18));
      return;
    }
  }
  return;
}


// ===== 009f6c50  FUN_009f6c50 =====

void FUN_009f6c50(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 != 0) {
      if (iVar2 == 2) goto LAB_009f6ca8;
      if (iVar2 != 3) {
                    /* try { // try from 009f6ce4 to 009f6cfb has its CatchHandler @ 009f6d24 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
      }
    }
    FUN_009f628c(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      free(*(void **)(param_1 + 0x18));
    }
  }
LAB_009f6ca8:
  __ptr = *(void **)(param_1 + 0x38);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 009f6cb4 to 009f6cbb has its CatchHandler @ 009f6d00 */
    (*pcVar3)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009f6d3c  FUN_009f6d3c =====

void FUN_009f6d3c(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009f6d54  FUN_009f6d54 =====

void FUN_009f6d54(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 009f6d74 to 009f6d7b has its CatchHandler @ 009f6dac */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 009f6dcc  FUN_009f6dcc =====

void FUN_009f6dcc(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 009f6de4 to 009f6deb has its CatchHandler @ 009f6e14 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009f6e38  <anyhow::error::anyhow::Error>::from_boxed =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::from_boxed */

void __rustcall <anyhow::error::anyhow::Error>::from_boxed(undefined8 param_1,long param_2)

{
  undefined8 local_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0;
  uStack_58 = _UNK_0029f9b8;
  local_60 = _DAT_0029f9b0;
                    /* try { // try from 009f6e6c to 009f6e8b has its CatchHandler @ 009f6ecc */
  (**(code **)(param_2 + 0x50))(param_1,&local_60,&DAT_0037ecd0);
  if (local_50 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_60);
    uStack_68 = uStack_38;
    local_70 = local_40;
    uStack_88 = uStack_58;
    local_90 = local_60;
    uStack_78 = uStack_48;
    lStack_80 = local_50;
  }
  else {
    local_90 = 0xffffffffffffffff;
  }
  FUN_009f66f4(param_1,param_2,&local_90);
  return;
}


// ===== 009f6ee8  <anyhow::error::anyhow::Error>::root_cause =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::root_cause */

undefined1  [16] __rustcall <anyhow::error::anyhow::Error>::root_cause(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = (**(code **)(*(long *)*param_1 + 8))();
  do {
    auVar1 = auVar2;
    auVar2 = (**(code **)(auVar1._8_8_ + 0x30))();
  } while (auVar2._0_8_ != 0);
  return auVar1;
}


// ===== 009f6f2c  <anyhow::error::anyhow::Error>::thiserror_provide =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::thiserror_provide */

void __rustcall
<anyhow::error::anyhow::Error>::thiserror_provide(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  param_1 = (long *)*param_1;
  plVar1 = param_1 + 1;
  if (((*plVar1 != -1) && (param_2[1] == 0x6d715e66196e7088 && *param_2 == -0x4f81bd8cd413ce0b)) &&
     (param_2[2] == 0)) {
    param_2[2] = (long)plVar1;
  }
  auVar2 = (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x009f6fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar2._8_8_ + 0x50))(auVar2._0_8_,param_2,param_3);
  return;
}


// ===== 009f6fb4  <anyhow::error::anyhow::Error>::into_boxed_dyn_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::into_boxed_dyn_error */

void __rustcall <anyhow::error::anyhow::Error>::into_boxed_dyn_error(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f6fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 009f6fc0  <anyhow::error::anyhow::Error>::reallocate_into_boxed_dyn_error_without_backtrace =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::reallocate_into_boxed_dyn_error_without_backtrace */

void __rustcall
<anyhow::error::anyhow::Error>::reallocate_into_boxed_dyn_error_without_backtrace(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f6fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 009f6fcc  <anyhow::error::anyhow::Error>::chain =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::chain */

void __rustcall <anyhow::error::anyhow::Error>::chain(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)(*(long *)*param_2 + 8))();
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 1) = auVar1;
  return;
}


// ===== 009f7000  <anyhow::error::anyhow::Error>::provide =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::provide */

void __rustcall
<anyhow::error::anyhow::Error>::provide(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  param_1 = (long *)*param_1;
  plVar1 = param_1 + 1;
  if (((*plVar1 != -1) && (param_2[1] == 0x6d715e66196e7088 && *param_2 == -0x4f81bd8cd413ce0b)) &&
     (param_2[2] == 0)) {
    param_2[2] = (long)plVar1;
  }
  auVar2 = (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x009f7084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar2._8_8_ + 0x50))(auVar2._0_8_,param_2,param_3);
  return;
}


// ===== 009f7088  <anyhow::error::anyhow::Error>::backtrace =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::backtrace */

void __rustcall <anyhow::error::anyhow::Error>::backtrace(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  param_1 = (long *)*param_1;
  if (param_1[1] == -1) {
    auVar1 = (**(code **)(*param_1 + 8))(param_1);
    local_20 = 0;
    uStack_28 = _UNK_0029f9b8;
    local_30 = _DAT_0029f9b0;
    (**(code **)(auVar1._8_8_ + 0x50))(auVar1._0_8_,&local_30,&DAT_0037ecd0);
    if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_0037ebe6,0x18,&PTR_s__root__cargo_registry_src_index__00af81f0);
    }
  }
  return;
}


// ===== 009f710c  anyhow::ensure::render =====

/* WARNING: Unknown calling convention: __rustcall */
/* anyhow::ensure::render */

void __rustcall
anyhow::ensure::render
          (void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined *puVar1;
  ulong __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [40];
  ulong local_b0;
  undefined8 *local_a8;
  undefined *puStack_a0;
  ulong local_80;
  undefined8 *local_78;
  undefined *puStack_70;
  ulong local_68;
  long local_60;
  ulong local_58;
  
  puVar1 = PTR_fmt_00b01220;
  local_a8 = &local_f8;
  local_b0 = 0;
  puStack_a0 = PTR_fmt_00b01220;
  local_f8 = param_3;
  uStack_f0 = param_4;
  local_e8 = param_5;
  uStack_e0 = param_6;
  uVar2 = core::fmt::write(auStack_d8,&DAT_00af85b0,&DAT_002ab692,&local_a8);
  if ((uVar2 & 1) != 0) {
LAB_009f72f4:
    FUN_009f6568(param_1,param_2);
    return;
  }
  local_78 = &local_e8;
  local_80 = 0;
  puStack_70 = puVar1;
  uVar3 = core::fmt::write(&local_a8,&DAT_00af85b0,&DAT_002ab692,&local_78);
  __n = local_80;
  uVar2 = local_b0;
  if ((uVar3 & 1) != 0) goto LAB_009f72f4;
  uVar3 = param_2 + local_b0 + local_80 + 7;
  if ((long)uVar3 < 0) {
    uVar6 = 0;
LAB_009f71b4:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,uVar3);
  }
  if (uVar3 == 0) {
    lVar5 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    lVar5 = FUN_004b25a4(uVar3,1);
    if (lVar5 == 0) goto LAB_009f71b4;
  }
  local_58 = 0;
  local_68 = uVar3;
  local_60 = lVar5;
  if (uVar3 < param_2) {
                    /* try { // try from 009f7304 to 009f7393 has its CatchHandler @ 009f739c */
    FUN_009f5274(&local_68,0,param_2);
LAB_009f7204:
    uVar4 = local_58;
    lVar5 = local_60;
    uVar3 = local_68;
    memcpy((void *)(local_60 + local_58),param_1,param_2);
  }
  else {
    uVar4 = 0;
    if (param_2 != 0) goto LAB_009f7204;
  }
  local_58 = uVar4 + param_2;
  if (uVar3 - local_58 < 2) {
    FUN_009f5274(&local_68,local_58,2);
    lVar5 = local_60;
  }
  *(undefined2 *)(lVar5 + local_58) = 0x2820;
  uVar3 = local_58 + 2;
  local_58 = uVar3;
  if (local_68 - uVar3 < uVar2) {
    FUN_009f5274(&local_68,uVar3,uVar2);
LAB_009f7250:
    uVar3 = local_58;
    uVar4 = local_68;
    memcpy((void *)(local_60 + local_58),auStack_d8,uVar2);
  }
  else {
    uVar4 = local_68;
    if (uVar2 != 0) goto LAB_009f7250;
  }
  local_58 = uVar3 + uVar2;
  if (uVar4 - local_58 < 4) {
    FUN_009f5274(&local_68,local_58,4);
    uVar4 = local_68;
  }
  uVar2 = local_58 + 4;
  *(undefined4 *)(local_60 + local_58) = 0x20737620;
  local_58 = uVar2;
  if (uVar4 - uVar2 < __n) {
    FUN_009f5274(&local_68,uVar2,__n);
    uVar4 = local_68;
  }
  else {
    lVar5 = local_60;
    if (__n == 0) goto LAB_009f72b0;
  }
  uVar2 = local_58;
  lVar5 = local_60;
  memcpy((void *)(local_60 + local_58),&local_a8,__n);
LAB_009f72b0:
  uVar2 = uVar2 + __n;
  if (uVar4 == uVar2) {
    local_58 = uVar2;
    FUN_009f5274(&local_68,uVar4,1);
    lVar5 = local_60;
  }
  *(undefined1 *)(lVar5 + uVar2) = 0x29;
  local_58 = uVar2 + 1;
  FUN_009f64f4(&local_68);
  return;
}


// ===== 009f73bc  anyhow::nightly::request_ref_backtrace =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* anyhow::nightly::request_ref_backtrace */

undefined8 __rustcall anyhow::nightly::request_ref_backtrace(undefined8 param_1,long param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0;
  uStack_28 = _UNK_0029f9b8;
  local_30 = _DAT_0029f9b0;
  (**(code **)(param_2 + 0x50))(param_1,&local_30,&DAT_0037ecd0);
  return local_20;
}


// ===== 009f7400  FUN_009f7400 =====

void FUN_009f7400(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 009f7414  FUN_009f7414 =====

void FUN_009f7414(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 009f7428  <anyhow::Chain_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Chain as core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

undefined1  [16] __rustcall
<anyhow::Chain_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong extraout_x1;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long local_58;
  long local_50;
  long local_48;
  
  if (*param_1 == 0) {
    auVar6 = *(undefined1 (*) [16])(param_1 + 1);
    local_58 = 0;
    local_50 = 8;
    local_48 = 0;
    if (*(long *)*(undefined1 (*) [16])(param_1 + 1) == 0) {
      local_58 = 0;
      uVar2 = 0;
      local_50 = 8;
      puVar4 = (undefined8 *)&DAT_00000008;
    }
    else {
      do {
                    /* try { // try from 009f74bc to 009f74e3 has its CatchHandler @ 009f7550 */
        auVar5 = (**(code **)(auVar6._8_8_ + 0x30))(auVar6._0_8_);
        lVar1 = local_48;
        param_2 = auVar5._8_8_;
        if (local_48 == local_58) {
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+core::error::Error>>::
          grow_one(&local_58);
          param_2 = extraout_x1;
        }
        local_48 = lVar1 + 1;
        *(undefined1 (*) [16])(local_50 + lVar1 * 0x10) = auVar6;
        auVar6 = auVar5;
      } while (auVar5._0_8_ != 0);
      puVar4 = (undefined8 *)(local_50 + local_48 * 0x10);
      if (local_48 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = puVar4[-2];
        param_2 = puVar4[-1];
        puVar4 = puVar4 + -2;
      }
    }
    *param_1 = local_50;
    param_1[1] = local_50;
    param_1[2] = local_58;
    param_1[3] = (long)puVar4;
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = uVar2;
    return auVar6;
  }
  if (param_1[1] == param_1[3]) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    return auVar5 << 0x40;
  }
  pauVar3 = (undefined1 (*) [16])(param_1[3] + -0x10);
  auVar6 = *pauVar3;
  param_1[3] = (long)pauVar3;
  return auVar6;
}


// ===== 009f7574  <anyhow::Error_as_core::ops::deref::DerefMut>::deref_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Error as core::ops::deref::DerefMut>::deref_mut */

void __rustcall <anyhow::Error_as_core::ops::deref::DerefMut>::deref_mut(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f7580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}


// ===== 009f7584  FUN_009f7584 =====

void FUN_009f7584(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[4];
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      return;
    }
    if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0037ece8,0x79,&PTR_s__nix_store_8006w282fgsx3273c878b_00af8610);
    }
  }
  FUN_009f628c(param_1);
  if (*param_1 == 0) {
    return;
  }
  free((void *)param_1[1]);
  return;
}


// ===== 009f75fc  <anyhow::Chain_as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Chain as core::iter::traits::exact_size::ExactSizeIterator>::len */

ulong __rustcall
<anyhow::Chain_as_core::iter::traits::exact_size::ExactSizeIterator>::len(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      return 0;
    }
    lVar1 = param_1[2];
    uVar2 = 0;
    do {
      auVar3 = (**(code **)(lVar1 + 0x30))();
      lVar1 = auVar3._8_8_;
      uVar2 = uVar2 + 1;
    } while (auVar3._0_8_ != 0);
  }
  else {
    uVar2 = (ulong)(param_1[3] - param_1[1]) >> 4;
  }
  return uVar2;
}


// ===== 009f7664  <anyhow::ensure::Buf_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::ensure::Buf as core::fmt::Write>::write_str */

undefined8 __rustcall
<anyhow::ensure::Buf_as_core::fmt::Write>::write_str(long param_1,void *param_2,size_t param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  sVar2 = 0;
  do {
    if (param_3 == sVar2) {
      if (0x28U - *(long *)(param_1 + 0x28) < param_3) {
        return 1;
      }
      memcpy((void *)(param_1 + *(long *)(param_1 + 0x28)),param_2,param_3);
      *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
      return 0;
    }
    pcVar1 = (char *)((long)param_2 + sVar2);
    if (*pcVar1 == '\n') {
      return 1;
    }
    sVar2 = sVar2 + 1;
  } while (*pcVar1 != ' ');
  return 1;
}


// ===== 009f76e0  <anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::wrapper::BoxedError as core::fmt::Display>::fmt */

void __rustcall <anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f76e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 009f76ec  <anyhow::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Error as core::fmt::Display>::fmt */

void __rustcall <anyhow::Error_as_core::fmt::Display>::fmt(undefined8 *param_1)

{
  FUN_009f56b4(*param_1);
  return;
}


// ===== 009f76f4  <anyhow::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Error as core::fmt::Debug>::fmt */

void __rustcall <anyhow::Error_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  <anyhow::fmt::anyhow::error::ErrorImpl>::debug(*param_1);
  return;
}


// ===== 009f76fc  <anyhow::Error_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Error as core::ops::drop::Drop>::drop */

void __rustcall <anyhow::Error_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f7708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)*param_1)();
  return;
}


// ===== 009f770c  <anyhow::wrapper::BoxedError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::wrapper::BoxedError as core::fmt::Debug>::fmt */

void __rustcall <anyhow::wrapper::BoxedError_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f7714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 009f7718  <anyhow[66ce4f23143367e5]::context::Quoted<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>::write_str =====

/* <anyhow[66ce4f23143367e5]::context::Quoted<&mut core[bcece726f298455b]::fmt::Formatter> as
   core[bcece726f298455b]::fmt::Write>::write_str */

void <anyhow[66ce4f23143367e5]::context::Quoted<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>
     ::write_str(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [120];
  
  <core::str::str>::escape_debug(auStack_98,param_2,param_3);
  <core::str::iter::EscapeDebug_as_core::fmt::Display>::fmt(auStack_98,*param_1);
  return;
}


// ===== 009f7758  <anyhow::wrapper::BoxedError_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::wrapper::BoxedError as core::error::Error>::source */

void __rustcall <anyhow::wrapper::BoxedError_as_core::error::Error>::source(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f7760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x30))(*param_1);
  return;
}


// ===== 009f7764  <anyhow::wrapper::BoxedError_as_core::error::Error>::provide =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::wrapper::BoxedError as core::error::Error>::provide */

void __rustcall <anyhow::wrapper::BoxedError_as_core::error::Error>::provide(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x50))(*param_1);
  return;
}


// ===== 009f7770  FUN_009f7770 =====

undefined8 FUN_009f7770(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar7) {
      FUN_009f5274(param_1,lVar7,1);
    }
    *(byte *)(param_1[1] + lVar7) = (byte)param_2;
    lVar6 = 1;
  }
  else {
    uVar2 = 3;
    if (0xffff < param_2) {
      uVar2 = 4;
    }
    uVar3 = 2;
    if (0x7ff < param_2) {
      uVar3 = uVar2;
    }
    if ((ulong)(*param_1 - lVar7) < uVar3) {
      FUN_009f5274(param_1,lVar7);
    }
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    pbVar1 = (byte *)(param_1[1] + lVar7);
    if (param_2 < 0x800) {
      pbVar1[1] = bVar4;
      lVar6 = 2;
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
        lVar6 = 3;
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
        lVar6 = 4;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = lVar6 + lVar7;
  return 0;
}


// ===== 009f78a4  FUN_009f78a4 =====

undefined8 FUN_009f78a4(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_009f5274(param_1,lVar1,param_3);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_009f78e4;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_009f78e4:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 009f7920  <anyhow::Chain_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Chain as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<anyhow::Chain_as_core::iter::traits::iterator::Iterator>::next(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulong unaff_x19;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (*param_1 == 0) {
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      lVar3 = param_1[2];
      auVar5 = (**(code **)(lVar3 + 0x30))(lVar4);
      *(undefined1 (*) [16])(param_1 + 1) = auVar5;
      auVar5._8_8_ = lVar3;
      auVar5._0_8_ = lVar4;
      return auVar5;
    }
  }
  else {
    pauVar2 = (undefined1 (*) [16])param_1[1];
    if (pauVar2 != (undefined1 (*) [16])param_1[3]) {
      auVar5 = *pauVar2;
      param_1[1] = (long)(pauVar2 + 1);
      return auVar5;
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_x19;
  return auVar1 << 0x40;
}


// ===== 009f79c0  <anyhow::Chain_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Chain as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<anyhow::Chain_as_core::iter::traits::iterator::Iterator>::size_hint(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (*param_2 == 0) {
    if (param_2[1] == 0) {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      return;
    }
    lVar1 = param_2[2];
    uVar2 = 0;
    do {
      auVar3 = (**(code **)(lVar1 + 0x30))();
      lVar1 = auVar3._8_8_;
      uVar2 = uVar2 + 1;
    } while (auVar3._0_8_ != 0);
  }
  else {
    uVar2 = (ulong)(param_2[3] - param_2[1]) >> 4;
  }
  *param_1 = uVar2;
  param_1[1] = 1;
  param_1[2] = uVar2;
  return;
}


// ===== 009f7a38  FUN_009f7a38 =====

void FUN_009f7a38(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 009f7a4c  FUN_009f7a4c =====

void FUN_009f7a4c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 009f7a60  <alloc::boxed::Box<dyn_Trait<Assoc=X>+core::error::Error>as{backref_28}::convert::From<anyhow::Error>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<dyn Trait<Assoc = X> + core::error::Error> as {backref
   28}::convert::From<anyhow::Error>>::from */

void __rustcall
<alloc::boxed::Box<dyn_Trait<Assoc=X>+core::error::Error>as{backref_28}::convert::From<anyhow::Error>>
::from(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f7a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 009f7a6c  <anyhow[66ce4f23143367e5]::Error_as_core[bcece726f298455b]::convert::AsRef<dyn_core[bcece726f298455b]::error::Error>>::as_ref =====

/* <anyhow[66ce4f23143367e5]::Error as core[bcece726f298455b]::convert::AsRef<dyn
   core[bcece726f298455b]::error::Error>>::as_ref */

void <anyhow[66ce4f23143367e5]::Error_as_core[bcece726f298455b]::convert::AsRef<dyn_core[bcece726f298455b]::error::Error>>
     ::as_ref(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f7a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}


// ===== 009f7a7c  FUN_009f7a7c =====

undefined1  [16] FUN_009f7a7c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &DAT_0037ed24;
  return auVar1;
}


// ===== 009f7a8c  FUN_009f7a8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f7a8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f5a0;
  param_1[1] = _UNK_0029f5a8;
  *param_1 = uVar1;
  return;
}


// ===== 009f7aa0  FUN_009f7aa0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f7aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f090;
  param_1[1] = _UNK_0029f098;
  *param_1 = uVar1;
  return;
}


// ===== 009f7ab4  FUN_009f7ab4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f7ab4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0770;
  param_1[1] = _UNK_002a0778;
  *param_1 = uVar1;
  return;
}


// ===== 009f7ac8  FUN_009f7ac8 =====

undefined1  [16] FUN_009f7ac8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &DAT_0037ed24;
  return auVar1;
}


// ===== 009f7ad8  FUN_009f7ad8 =====

undefined8 FUN_009f7ad8(void)

{
  return 0;
}


// ===== 009f7ae0  FUN_009f7ae0 =====

void FUN_009f7ae0(void)

{
  return;
}


// ===== 009f7ae4  FUN_009f7ae4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f7ae4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f2e0;
  param_1[1] = _UNK_0029f2e8;
  *param_1 = uVar1;
  return;
}


// ===== 009f7af8  FUN_009f7af8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f7af8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fe90;
  param_1[1] = _UNK_0029fe98;
  *param_1 = uVar1;
  return;
}


// ===== 009f7b0c  FUN_009f7b0c =====

undefined8 FUN_009f7b0c(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  ulong __n;
  uint local_24;
  
  puVar4 = (uint *)&stack0xffffffffffffffe0;
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    puVar4 = (uint *)((ulong)&local_24 | 1);
    local_24 = param_2 & 0xff;
    __n = 1;
  }
  else {
    if (param_2 < 0x800) {
      puVar4 = (uint *)((ulong)&local_24 | 2);
      local_24 = (uint)(bVar1 & 0xffff3f | 0x80) << 8;
      __n = 2;
      bVar6 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar2 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_24._0_2_ = (bVar2 & 0xff3f | 0x80) << 8;
        puVar4 = (uint *)((ulong)&local_24 | 3);
        local_24 = CONCAT12(bVar1,(short)local_24) & 0xff3fffff | 0x800000;
        __n = 3;
        bVar6 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        __n = 4;
        bVar6 = (byte)(param_2 >> 0x12) | 0xf0;
        local_24 = (uint)(CONCAT21(CONCAT11(bVar1,bVar2),(char)(param_2 >> 0xc)) & 0x3f3f3f |
                         0x808080) << 8;
      }
    }
    local_24 = CONCAT31(local_24._1_3_,bVar6);
  }
  puVar5 = &local_24;
  do {
    if (puVar5 == puVar4) {
      if (0x28U - *(long *)(param_1 + 0x28) < __n) {
        return 1;
      }
      memcpy((void *)(param_1 + *(long *)(param_1 + 0x28)),&local_24,__n);
      *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
      return 0;
    }
    uVar3 = *puVar5;
    if ((char)uVar3 == '\n') {
      return 1;
    }
    puVar5 = (uint *)((long)puVar5 + 1);
  } while ((char)uVar3 != ' ');
  return 1;
}


// ===== 009f7c38  FUN_009f7c38 =====

void FUN_009f7c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00af85b0,param_2,param_3);
  return;
}


// ===== 009f7c4c  FUN_009f7c4c =====

void FUN_009f7c4c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009f7c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x30))(*param_1);
  return;
}


// ===== 009f7c58  FUN_009f7c58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f7c58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f660;
  param_1[1] = _UNK_0029f668;
  *param_1 = uVar1;
  return;
}


// ===== 009f7c6c  FUN_009f7c6c =====

void FUN_009f7c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00af8628,param_2,param_3);
  return;
}


// ===== 009f7c80  FUN_009f7c80 =====

void FUN_009f7c80(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ushort *puVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  ushort uVar13;
  uint uVar14;
  ulong uVar15;
  
  puVar3 = (ushort *)param_1[1];
  uVar12 = (ulong)*(ushort *)((long)param_1 + 0x12);
  uVar13 = *(ushort *)(param_1 + 2);
  puVar10 = (ushort *)*param_1;
  do {
    if ((uVar13 & 1) == 0) {
      if (puVar10 == puVar3) {
        return;
      }
      puVar11 = puVar10 + 1;
      uVar15 = (ulong)*puVar10;
      if ((*puVar10 & 0xf800) == 0xd800) goto LAB_009f7cf0;
LAB_009f7d3c:
      lVar9 = param_2[2];
      lVar7 = *param_2;
      if (0x7f < (uint)uVar15) {
        uVar13 = 0;
        goto LAB_009f7d80;
      }
      if (lVar7 == lVar9) {
        FUN_009f8ff8(param_2,lVar9,1,1,1);
      }
      uVar13 = 0;
      *(char *)(param_2[1] + lVar9) = (char)uVar15;
      lVar7 = 1;
    }
    else {
      puVar11 = puVar10;
      uVar15 = uVar12;
      if (((uint)uVar12 & 0xf800) != 0xd800) goto LAB_009f7d3c;
LAB_009f7cf0:
      if (((uint)(uVar15 >> 10) < 0x37) && (puVar11 != puVar3)) {
        uVar4 = *puVar11;
        if (uVar4 - 0xe000 < 0xfffffc00) {
          uVar15 = 0xfffd;
          uVar13 = 1;
          puVar11 = puVar11 + 1;
          uVar12 = (ulong)uVar4;
        }
        else {
          uVar13 = 0;
          uVar15 = (ulong)((uint)((ulong)((uint)uVar15 & 0x3ff) * 0x4000000 + 0x100000000 >> 0x10) |
                          uVar4 & 0x3ff);
          puVar11 = puVar11 + 1;
        }
      }
      else {
        uVar13 = 0;
        uVar15 = 0xfffd;
      }
      lVar9 = param_2[2];
      lVar7 = *param_2;
LAB_009f7d80:
      uVar14 = (uint)uVar15;
      uVar1 = 3;
      if (0xffff < uVar14) {
        uVar1 = 4;
      }
      uVar2 = 2;
      if (0x7ff < uVar14) {
        uVar2 = uVar1;
      }
      if ((ulong)(lVar7 - lVar9) < uVar2) {
        FUN_009f8ff8(param_2,lVar9,uVar2,1,1);
        bVar6 = (byte)uVar15 & 0x3f | 0x80;
        pbVar8 = (byte *)(param_2[1] + lVar9);
        if (0x7ff < uVar14) goto LAB_009f7db4;
LAB_009f7cc0:
        pbVar8[1] = bVar6;
        lVar7 = 2;
        bVar6 = (byte)(uVar15 >> 6) | 0xc0;
      }
      else {
        bVar6 = (byte)uVar15 & 0x3f | 0x80;
        pbVar8 = (byte *)(param_2[1] + lVar9);
        if (uVar14 < 0x800) goto LAB_009f7cc0;
LAB_009f7db4:
        bVar5 = (byte)(uVar14 >> 6) & 0x3f | 0x80;
        if (uVar14 >> 0x10 != 0) {
          pbVar8[2] = bVar5;
          pbVar8[3] = bVar6;
          lVar7 = 4;
          *pbVar8 = (byte)(uVar14 >> 0x12) | 0xf0;
          pbVar8[1] = (byte)(uVar14 >> 0xc) & 0x3f | 0x80;
          goto LAB_009f7cd4;
        }
        pbVar8[1] = bVar5;
        pbVar8[2] = bVar6;
        lVar7 = 3;
        bVar6 = (byte)(uVar14 >> 0xc) | 0xe0;
      }
      *pbVar8 = bVar6;
    }
LAB_009f7cd4:
    param_2[2] = lVar7 + lVar9;
    puVar10 = puVar11;
  } while( true );
}


// ===== 009f7e98  <cxx::string::cxx::string::CxxString>::push_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::push_bytes */

void __rustcall <cxx::string::cxx::string::CxxString>::push_bytes(void)

{
  (*(code *)PTR_cxxbridge1_cxx_string_push_00b06290)();
  return;
}


// ===== 009f7e9c  <cxx::string::cxx::string::CxxString>::to_string_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::to_string_lossy */

void __rustcall
<cxx::string::cxx::string::CxxString>::to_string_lossy(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = cxxbridge1_cxx_string_data();
  uVar2 = cxxbridge1_cxx_string_length(param_2);
  <alloc::string::alloc::string::String>::from_utf8_lossy(param_1,uVar1,uVar2);
  return;
}


// ===== 009f7ee0  <cxx::string::cxx::string::CxxString>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::len */

void __rustcall <cxx::string::cxx::string::CxxString>::len(void)

{
  (*(code *)PTR_cxxbridge1_cxx_string_length_00b062a0)();
  return;
}


// ===== 009f7ee4  <cxx::string::cxx::string::CxxString>::clear =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::clear */

void __rustcall <cxx::string::cxx::string::CxxString>::clear(void)

{
  (*(code *)PTR_cxxbridge1_cxx_string_clear_00b062a8)();
  return;
}


// ===== 009f7ee8  <cxx::string::cxx::string::CxxString>::as_ptr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::as_ptr */

void __rustcall <cxx::string::cxx::string::CxxString>::as_ptr(void)

{
  (*(code *)PTR_cxxbridge1_cxx_string_data_00b06298)();
  return;
}


// ===== 009f7eec  <cxx::string::cxx::string::CxxString>::to_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::to_str */

void __rustcall <cxx::string::cxx::string::CxxString>::to_str(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = cxxbridge1_cxx_string_data();
  uVar2 = cxxbridge1_cxx_string_length(param_2);
  core::str::converts::from_utf8(param_1,uVar1,uVar2);
  return;
}


// ===== 009f7f30  <cxx::string::cxx::string::CxxString>::reserve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::reserve */

void __rustcall <cxx::string::cxx::string::CxxString>::reserve(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = cxxbridge1_cxx_string_length();
  if (!CARRY8(uVar1,param_2)) {
    cxxbridge1_cxx_string_reserve_total(param_1,uVar1 + param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037ed4c,0x1b,&PTR_s__root__cargo_registry_src_index__00af8658);
}


// ===== 009f7f78  <cxx::string::cxx::string::CxxString>::as_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::as_bytes */

undefined1  [16] __rustcall <cxx::string::cxx::string::CxxString>::as_bytes(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_8_ = cxxbridge1_cxx_string_data();
  uVar1 = cxxbridge1_cxx_string_length(param_1);
  auVar2._8_8_ = uVar1;
  return auVar2;
}


// ===== 009f7fac  <cxx::string::cxx::string::CxxString>::as_c_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::as_c_str */

undefined1  [16] __rustcall <cxx::string::cxx::string::CxxString>::as_c_str(void)

{
  size_t sVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_8_ = (char *)cxxbridge1_cxx_string_data();
  sVar1 = strlen(auVar2._0_8_);
  auVar2._8_8_ = sVar1 + 1;
  return auVar2;
}


// ===== 009f7fdc  <cxx::string::cxx::string::CxxString>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::is_empty */

bool __rustcall <cxx::string::cxx::string::CxxString>::is_empty(void)

{
  long lVar1;
  
  lVar1 = cxxbridge1_cxx_string_length();
  return lVar1 == 0;
}


// ===== 009f7ff8  <cxx::string::cxx::string::CxxString>::push_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::cxx::string::CxxString>::push_str */

void __rustcall <cxx::string::cxx::string::CxxString>::push_str(void)

{
  (*(code *)PTR_cxxbridge1_cxx_string_push_00b06290)();
  return;
}


// ===== 009f7ffc  cxx::result::to_c_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* cxx::result::to_c_error */

void __rustcall cxx::result::to_c_error(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  __ptr = (void *)param_2[1];
  lVar1 = param_2[2];
  uVar2 = cxxbridge1_error(__ptr,lVar1);
  lVar3 = *param_2;
  *param_1 = uVar2;
  param_1[1] = lVar1;
  if (lVar3 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009f8058  <cxx::unwind::Guard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::unwind::Guard as core::ops::drop::Drop>::drop */

void __rustcall <cxx::unwind::Guard_as_core::ops::drop::Drop>::drop(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_009f9a1c;
  local_20 = param_1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a4372,&local_20,&PTR_s__root__cargo_registry_src_index__00af8670);
}


// ===== 009f8088  <cxx::exception::Exception_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::exception::Exception as core::fmt::Display>::fmt */

void __rustcall
<cxx::exception::Exception_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,*param_1,param_1[1]);
  return;
}


// ===== 009f8098  <cxx::string::CxxString_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as core::fmt::Debug>::fmt */

void __rustcall
<cxx::string::CxxString_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = cxxbridge1_cxx_string_data();
  uVar2 = cxxbridge1_cxx_string_length(param_1);
  FUN_009f91c4(uVar1,uVar2,param_2);
  return;
}


// ===== 009f80dc  <cxx::string::CxxString_as_core::cmp::PartialEq>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as core::cmp::PartialEq>::eq */

bool __rustcall
<cxx::string::CxxString_as_core::cmp::PartialEq>::eq(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  void *__s1;
  size_t __n;
  void *__s2;
  size_t sVar2;
  
  __s1 = (void *)cxxbridge1_cxx_string_data();
  __n = cxxbridge1_cxx_string_length(param_1);
  __s2 = (void *)cxxbridge1_cxx_string_data(param_2);
  sVar2 = cxxbridge1_cxx_string_length(param_2);
  if (__n == sVar2) {
    iVar1 = memcmp(__s1,__s2,__n);
    return iVar1 == 0;
  }
  return false;
}


// ===== 009f8160  <str_as_core::cmp::PartialEq<cxx::string::CxxString>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as core::cmp::PartialEq<cxx::string::CxxString>>::eq */

bool __rustcall
<str_as_core::cmp::PartialEq<cxx::string::CxxString>>::eq
          (void *param_1,size_t param_2,undefined8 param_3)

{
  int iVar1;
  void *__s2;
  size_t sVar2;
  
  __s2 = (void *)cxxbridge1_cxx_string_data(param_3);
  sVar2 = cxxbridge1_cxx_string_length(param_3);
  if (param_2 == sVar2) {
    iVar1 = memcmp(param_1,__s2,param_2);
    return iVar1 == 0;
  }
  return false;
}


// ===== 009f81d4  <cxx::string::CxxString_as_core::cmp::PartialEq<str>>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as core::cmp::PartialEq<str>>::eq */

bool __rustcall
<cxx::string::CxxString_as_core::cmp::PartialEq<str>>::eq
          (undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *__s1;
  size_t sVar2;
  
  __s1 = (void *)cxxbridge1_cxx_string_data();
  sVar2 = cxxbridge1_cxx_string_length(param_1);
  if (sVar2 == param_3) {
    iVar1 = memcmp(__s1,param_2,param_3);
    return iVar1 == 0;
  }
  return false;
}


// ===== 009f8244  <bool_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::shared_ptr::SharedPtrTarget>::__typename */

void __rustcall <bool_as_cxx::shared_ptr::SharedPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,"bool",4);
  return;
}


// ===== 009f8254  <bool_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <bool_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_bool_downgrade_00b062c0)();
  return;
}


// ===== 009f8258  <bool_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <bool_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_bool_drop_00b062c8)();
  return;
}


// ===== 009f825c  <bool_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <bool_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_bool_null_00b062d0)();
  return;
}


// ===== 009f8260  <bool_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <bool_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_bool_clone_00b062d8)();
  return;
}


// ===== 009f8264  <bool_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <bool_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_bool_upgrade_00b062e0)();
  return;
}


// ===== 009f8268  <cxx::string::CxxString_as_core::cmp::PartialOrd>::partial_cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as core::cmp::PartialOrd>::partial_cmp */

uint __rustcall
<cxx::string::CxxString_as_core::cmp::PartialOrd>::partial_cmp
          (undefined8 param_1,undefined8 param_2)

{
  size_t __n;
  long lVar1;
  int iVar2;
  void *__s1;
  ulong uVar3;
  void *__s2;
  ulong uVar4;
  uint uVar5;
  
  __s1 = (void *)cxxbridge1_cxx_string_data();
  uVar3 = cxxbridge1_cxx_string_length(param_1);
  __s2 = (void *)cxxbridge1_cxx_string_data(param_2);
  uVar4 = cxxbridge1_cxx_string_length(param_2);
  __n = uVar3;
  if (uVar4 <= uVar3) {
    __n = uVar4;
  }
  iVar2 = memcmp(__s1,__s2,__n);
  lVar1 = uVar3 - uVar4;
  if (iVar2 != 0) {
    lVar1 = (long)iVar2;
  }
  uVar5 = (uint)(0 < lVar1);
  if (lVar1 < 0) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// ===== 009f82e4  <u8_as_cxx::weak_ptr::WeakPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::weak_ptr::WeakPtrTarget>::__typename */

void __rustcall <u8_as_cxx::weak_ptr::WeakPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed67,2);
  return;
}


// ===== 009f82f4  <u8_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <u8_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u8_downgrade_00b062e8)();
  return;
}


// ===== 009f82f8  <u8_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <u8_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u8_drop_00b062f0)();
  return;
}


// ===== 009f82fc  <u8_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <u8_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u8_null_00b062f8)();
  return;
}


// ===== 009f8300  <u8_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <u8_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u8_clone_00b06300)();
  return;
}


// ===== 009f8304  <u8_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <u8_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u8_upgrade_00b06308)();
  return;
}


// ===== 009f8308  <cxx::string::CxxString_as_core::cmp::Ord>::cmp =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as core::cmp::Ord>::cmp */

uint __rustcall
<cxx::string::CxxString_as_core::cmp::Ord>::cmp(undefined8 param_1,undefined8 param_2)

{
  size_t __n;
  long lVar1;
  int iVar2;
  void *__s1;
  ulong uVar3;
  void *__s2;
  ulong uVar4;
  uint uVar5;
  
  __s1 = (void *)cxxbridge1_cxx_string_data();
  uVar3 = cxxbridge1_cxx_string_length(param_1);
  __s2 = (void *)cxxbridge1_cxx_string_data(param_2);
  uVar4 = cxxbridge1_cxx_string_length(param_2);
  __n = uVar3;
  if (uVar4 <= uVar3) {
    __n = uVar4;
  }
  iVar2 = memcmp(__s1,__s2,__n);
  lVar1 = uVar3 - uVar4;
  if (iVar2 != 0) {
    lVar1 = (long)iVar2;
  }
  uVar5 = (uint)(0 < lVar1);
  if (lVar1 < 0) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// ===== 009f8384  <u16_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::shared_ptr::SharedPtrTarget>::__typename */

void __rustcall <u16_as_cxx::shared_ptr::SharedPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed69,3);
  return;
}


// ===== 009f8394  <u16_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <u16_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u16_downgrade_00b06310)();
  return;
}


// ===== 009f8398  <u16_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <u16_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u16_drop_00b06318)();
  return;
}


// ===== 009f839c  <u16_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <u16_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u16_null_00b06320)();
  return;
}


// ===== 009f83a0  <u16_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <u16_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u16_clone_00b06328)();
  return;
}


// ===== 009f83a4  <u16_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <u16_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u16_upgrade_00b06330)();
  return;
}


// ===== 009f83a8  <u32_as_cxx::weak_ptr::WeakPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::weak_ptr::WeakPtrTarget>::__typename */

void __rustcall <u32_as_cxx::weak_ptr::WeakPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed6c,3);
  return;
}


// ===== 009f83b8  <u32_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <u32_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u32_downgrade_00b06338)();
  return;
}


// ===== 009f83bc  <u32_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <u32_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u32_drop_00b06340)();
  return;
}


// ===== 009f83c0  <u32_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <u32_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u32_null_00b06348)();
  return;
}


// ===== 009f83c4  <u32_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <u32_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u32_clone_00b06350)();
  return;
}


// ===== 009f83c8  <u32_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <u32_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u32_upgrade_00b06358)();
  return;
}


// ===== 009f83cc  <core::pin::Pin<&mut_cxx::string::CxxString>as{backref_11}::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::pin::Pin<&mut cxx::string::CxxString> as {backref 11}::fmt::Write>::write_str */

undefined8 __rustcall
<core::pin::Pin<&mut_cxx::string::CxxString>as{backref_11}::fmt::Write>::write_str
          (undefined8 *param_1)

{
  cxxbridge1_cxx_string_push(*param_1);
  return 0;
}


// ===== 009f83e8  <u64_as_cxx::weak_ptr::WeakPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::weak_ptr::WeakPtrTarget>::__typename */

void __rustcall <u64_as_cxx::weak_ptr::WeakPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed6f,3);
  return;
}


// ===== 009f83f8  <u64_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <u64_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u64_downgrade_00b06360)();
  return;
}


// ===== 009f83fc  <u64_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <u64_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u64_drop_00b06368)();
  return;
}


// ===== 009f8400  <u64_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <u64_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u64_null_00b06370)();
  return;
}


// ===== 009f8404  <u64_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <u64_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u64_clone_00b06378)();
  return;
}


// ===== 009f8408  <u64_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <u64_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_u64_upgrade_00b06380)();
  return;
}


// ===== 009f840c  <core::pin::Pin<&mut_cxx::string::CxxString>as{backref_11}::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::pin::Pin<&mut cxx::string::CxxString> as {backref 11}::io::write::Write>::write */

undefined1  [16] __rustcall
<core::pin::Pin<&mut_cxx::string::CxxString>as{backref_11}::io::write::Write>::write
          (undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  
  cxxbridge1_cxx_string_push(*param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}


// ===== 009f8438  <usize_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::shared_ptr::SharedPtrTarget>::__typename */

void __rustcall <usize_as_cxx::shared_ptr::SharedPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed72,5);
  return;
}


// ===== 009f8448  <usize_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <usize_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_usize_downgrade_00b06388)();
  return;
}


// ===== 009f844c  <usize_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <usize_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_usize_drop_00b06390)();
  return;
}


// ===== 009f8450  <usize_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <usize_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_usize_null_00b06398)();
  return;
}


// ===== 009f8454  <usize_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <usize_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_usize_clone_00b063a0)();
  return;
}


// ===== 009f8458  <usize_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <usize_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_usize_upgrade_00b063a8)();
  return;
}


// ===== 009f845c  <cxx::rust_string::RustString_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::rust_string::RustString as core::ops::drop::Drop>::drop */

void __rustcall <cxx::rust_string::RustString_as_core::ops::drop::Drop>::drop(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009f8474  <cxx::string::CxxString_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as core::fmt::Display>::fmt */

void __rustcall
<cxx::string::CxxString_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = cxxbridge1_cxx_string_data();
  uVar2 = cxxbridge1_cxx_string_length(param_1);
  FUN_009f9894(uVar1,uVar2,param_2);
  return;
}


// ===== 009f84b8  <i8_as_cxx::weak_ptr::WeakPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::weak_ptr::WeakPtrTarget>::__typename */

void __rustcall <i8_as_cxx::weak_ptr::WeakPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed77,2);
  return;
}


// ===== 009f84c8  <i8_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <i8_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i8_downgrade_00b063b0)();
  return;
}


// ===== 009f84cc  <i8_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <i8_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i8_drop_00b063b8)();
  return;
}


// ===== 009f84d0  <i8_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <i8_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i8_null_00b063c0)();
  return;
}


// ===== 009f84d4  <i8_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <i8_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i8_clone_00b063c8)();
  return;
}


// ===== 009f84d8  <i8_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <i8_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i8_upgrade_00b063d0)();
  return;
}


// ===== 009f84dc  <cxx::string::StackString_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::StackString as core::ops::drop::Drop>::drop */

void __rustcall <cxx::string::StackString_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_cxxbridge1_cxx_string_destroy_00b063d8)();
  return;
}


// ===== 009f84e0  <i16_as_cxx::weak_ptr::WeakPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::weak_ptr::WeakPtrTarget>::__typename */

void __rustcall <i16_as_cxx::weak_ptr::WeakPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed79,3);
  return;
}


// ===== 009f84f0  <i16_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <i16_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i16_downgrade_00b063e0)();
  return;
}


// ===== 009f84f4  <i16_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <i16_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i16_drop_00b063e8)();
  return;
}


// ===== 009f84f8  <i16_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <i16_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i16_null_00b063f0)();
  return;
}


// ===== 009f84fc  <i16_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <i16_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i16_clone_00b063f8)();
  return;
}


// ===== 009f8500  <i16_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <i16_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i16_upgrade_00b06400)();
  return;
}


// ===== 009f8504  <i32_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::shared_ptr::SharedPtrTarget>::__typename */

void __rustcall <i32_as_cxx::shared_ptr::SharedPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed7c,3);
  return;
}


// ===== 009f8514  <i32_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <i32_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i32_downgrade_00b06408)();
  return;
}


// ===== 009f8518  <i32_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <i32_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i32_drop_00b06410)();
  return;
}


// ===== 009f851c  <i32_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <i32_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i32_null_00b06418)();
  return;
}


// ===== 009f8520  <i32_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <i32_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i32_clone_00b06420)();
  return;
}


// ===== 009f8524  <i32_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <i32_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i32_upgrade_00b06428)();
  return;
}


// ===== 009f8528  <bool_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <bool_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_bool_get_00b06430)();
  return;
}


// ===== 009f852c  <bool_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<bool_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined1 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)cxxbridge1_std_shared_ptr_bool_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f8554  <bool_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <bool_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_bool_raw_00b06440)();
  return;
}


// ===== 009f8558  <bool_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <bool_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_bool_drop_00b06448)();
  return;
}


// ===== 009f855c  <bool_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <bool_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_bool_null_00b06450)();
  return;
}


// ===== 009f8560  <bool_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <bool_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_bool_clone_00b06458)();
  return;
}


// ===== 009f8564  <i64_as_cxx::weak_ptr::WeakPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as cxx::weak_ptr::WeakPtrTarget>::__typename */

void __rustcall <i64_as_cxx::weak_ptr::WeakPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed7f,3);
  return;
}


// ===== 009f8574  <i64_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <i64_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i64_downgrade_00b06460)();
  return;
}


// ===== 009f8578  <i64_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <i64_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i64_drop_00b06468)();
  return;
}


// ===== 009f857c  <i64_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <i64_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i64_null_00b06470)();
  return;
}


// ===== 009f8580  <i64_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <i64_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i64_clone_00b06478)();
  return;
}


// ===== 009f8584  <i64_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <i64_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_i64_upgrade_00b06480)();
  return;
}


// ===== 009f8588  <u8_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <u8_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u8_get_00b06488)();
  return;
}


// ===== 009f858c  <u8_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<u8_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined1 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)cxxbridge1_std_shared_ptr_u8_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f85b4  <u8_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <u8_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u8_raw_00b06498)();
  return;
}


// ===== 009f85b8  <u8_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <u8_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u8_drop_00b064a0)();
  return;
}


// ===== 009f85bc  <u8_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <u8_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u8_null_00b064a8)();
  return;
}


// ===== 009f85c0  <u8_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <u8_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u8_clone_00b064b0)();
  return;
}


// ===== 009f85c4  <isize_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as cxx::shared_ptr::SharedPtrTarget>::__typename */

void __rustcall <isize_as_cxx::shared_ptr::SharedPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed82,5);
  return;
}


// ===== 009f85d4  <isize_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <isize_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_isize_downgrade_00b064b8)();
  return;
}


// ===== 009f85d8  <isize_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <isize_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_isize_drop_00b064c0)();
  return;
}


// ===== 009f85dc  <isize_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <isize_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_isize_null_00b064c8)();
  return;
}


// ===== 009f85e0  <isize_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <isize_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_isize_clone_00b064d0)();
  return;
}


// ===== 009f85e4  <isize_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <isize as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <isize_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_isize_upgrade_00b064d8)();
  return;
}


// ===== 009f85e8  <u16_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <u16_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u16_get_00b064e0)();
  return;
}


// ===== 009f85ec  <u16_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<u16_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined2 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)cxxbridge1_std_shared_ptr_u16_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f8614  <u16_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <u16_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u16_raw_00b064f0)();
  return;
}


// ===== 009f8618  <u16_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <u16_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u16_drop_00b064f8)();
  return;
}


// ===== 009f861c  <u16_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <u16_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u16_null_00b06500)();
  return;
}


// ===== 009f8620  <u16_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <u16_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u16_clone_00b06508)();
  return;
}


// ===== 009f8624  <cxx::string::CxxString_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::shared_ptr::SharedPtrTarget>::__typename */

void __rustcall
<cxx::string::CxxString_as_cxx::shared_ptr::SharedPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed87,9);
  return;
}


// ===== 009f8634  <cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__get(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_std_string_get(&local_18);
  return;
}


// ===== 009f8658  <cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__raw(undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_std_string_raw(&local_18,param_1);
  return local_18;
}


// ===== 009f8680  <cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__drop(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_std_string_drop(&local_18);
  return;
}


// ===== 009f86a4  <cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall <cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_std_string_null(&local_18);
  return local_18;
}


// ===== 009f86c8  <cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<cxx::string::CxxString_as_cxx::unique_ptr::UniquePtrTarget>::__release(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_std_string_release(&local_18);
  return;
}


// ===== 009f86ec  <f32_as_cxx::weak_ptr::WeakPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as cxx::weak_ptr::WeakPtrTarget>::__typename */

void __rustcall <f32_as_cxx::weak_ptr::WeakPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed90,3);
  return;
}


// ===== 009f86fc  <f32_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <f32_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f32_downgrade_00b06538)();
  return;
}


// ===== 009f8700  <f32_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <f32_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f32_drop_00b06540)();
  return;
}


// ===== 009f8704  <f32_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <f32_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f32_null_00b06548)();
  return;
}


// ===== 009f8708  <f32_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <f32_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f32_clone_00b06550)();
  return;
}


// ===== 009f870c  <f32_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <f32_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f32_upgrade_00b06558)();
  return;
}


// ===== 009f8710  <u32_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <u32_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u32_get_00b06560)();
  return;
}


// ===== 009f8714  <u32_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<u32_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)cxxbridge1_std_shared_ptr_u32_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f873c  <u32_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <u32_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u32_raw_00b06570)();
  return;
}


// ===== 009f8740  <u32_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <u32_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u32_drop_00b06578)();
  return;
}


// ===== 009f8744  <u32_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <u32_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u32_null_00b06580)();
  return;
}


// ===== 009f8748  <u32_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <u32_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u32_clone_00b06588)();
  return;
}


// ===== 009f874c  <f64_as_cxx::weak_ptr::WeakPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as cxx::weak_ptr::WeakPtrTarget>::__typename */

void __rustcall <f64_as_cxx::weak_ptr::WeakPtrTarget>::__typename(undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037ed93,3);
  return;
}


// ===== 009f875c  <f64_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <f64_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f64_downgrade_00b06590)();
  return;
}


// ===== 009f8760  <f64_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <f64_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f64_drop_00b06598)();
  return;
}


// ===== 009f8764  <f64_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <f64_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f64_null_00b065a0)();
  return;
}


// ===== 009f8768  <f64_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <f64_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f64_clone_00b065a8)();
  return;
}


// ===== 009f876c  <f64_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <f64_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_f64_upgrade_00b065b0)();
  return;
}


// ===== 009f8770  <u64_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <u64_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u64_get_00b065b8)();
  return;
}


// ===== 009f8774  <u64_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<u64_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)cxxbridge1_std_shared_ptr_u64_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f879c  <u64_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <u64_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u64_raw_00b065c8)();
  return;
}


// ===== 009f87a0  <u64_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <u64_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u64_drop_00b065d0)();
  return;
}


// ===== 009f87a4  <u64_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <u64_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u64_null_00b065d8)();
  return;
}


// ===== 009f87a8  <u64_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <u64_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_u64_clone_00b065e0)();
  return;
}


// ===== 009f87ac  <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::weak_ptr::WeakPtrTarget>::__downgrade */

void __rustcall <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__downgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_string_downgrade_00b065e8)();
  return;
}


// ===== 009f87b0  <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::weak_ptr::WeakPtrTarget>::__drop */

void __rustcall <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_string_drop_00b065f0)();
  return;
}


// ===== 009f87b4  <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::weak_ptr::WeakPtrTarget>::__null */

void __rustcall <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_string_null_00b065f8)();
  return;
}


// ===== 009f87b8  <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::weak_ptr::WeakPtrTarget>::__clone */

void __rustcall <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_string_clone_00b06600)();
  return;
}


// ===== 009f87bc  <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::weak_ptr::WeakPtrTarget>::__upgrade */

void __rustcall <cxx::string::CxxString_as_cxx::weak_ptr::WeakPtrTarget>::__upgrade(void)

{
  (*(code *)PTR_cxxbridge1_std_weak_ptr_string_upgrade_00b06608)();
  return;
}


// ===== 009f87c0  <usize_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <usize_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_usize_get_00b06610)();
  return;
}


// ===== 009f87c4  <usize_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<usize_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)cxxbridge1_std_shared_ptr_usize_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f87ec  <usize_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <usize_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_usize_raw_00b06620)();
  return;
}


// ===== 009f87f0  <usize_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <usize_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_usize_drop_00b06628)();
  return;
}


// ===== 009f87f4  <usize_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <usize_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_usize_null_00b06630)();
  return;
}


// ===== 009f87f8  <usize_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <usize_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_usize_clone_00b06638)();
  return;
}


// ===== 009f87fc  <i8_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <i8_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i8_get_00b06640)();
  return;
}


// ===== 009f8800  <i8_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<i8_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined1 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)cxxbridge1_std_shared_ptr_i8_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f8828  <i8_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <i8_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i8_raw_00b06650)();
  return;
}


// ===== 009f882c  <i8_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <i8_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i8_drop_00b06658)();
  return;
}


// ===== 009f8830  <i8_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <i8_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i8_null_00b06660)();
  return;
}


// ===== 009f8834  <i8_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <i8_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i8_clone_00b06668)();
  return;
}


// ===== 009f8838  <i16_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <i16_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i16_get_00b06670)();
  return;
}


// ===== 009f883c  <i16_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<i16_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined2 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)cxxbridge1_std_shared_ptr_i16_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f8864  <i16_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <i16_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i16_raw_00b06680)();
  return;
}


// ===== 009f8868  <i16_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <i16_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i16_drop_00b06688)();
  return;
}


// ===== 009f886c  <i16_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <i16_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i16_null_00b06690)();
  return;
}


// ===== 009f8870  <i16_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <i16_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i16_clone_00b06698)();
  return;
}


// ===== 009f8874  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__vector_new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__vector_new */

void __rustcall <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__vector_new(void)

{
  (*(code *)PTR_cxxbridge1_std_vector_string_new_00b066a0)();
  return;
}


// ===== 009f8878  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__vector_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__vector_size */

void __rustcall <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__vector_size(void)

{
  (*(code *)PTR_cxxbridge1_std_vector_string_size_00b066a8)();
  return;
}


// ===== 009f887c  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__get_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__get_unchecked */

void __rustcall <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__get_unchecked(void)

{
  (*(code *)PTR_cxxbridge1_std_vector_string_get_unchecked_00b066b0)();
  return;
}


// ===== 009f8880  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__unique_ptr_get */

void __rustcall
<cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_get(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_std_vector_string_get(&local_18);
  return;
}


// ===== 009f88a4  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__unique_ptr_raw */

undefined8 __rustcall
<cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_raw(undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_std_vector_string_raw(&local_18,param_1);
  return local_18;
}


// ===== 009f88cc  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__unique_ptr_drop */

void __rustcall
<cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_drop(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_std_vector_string_drop(&local_18);
  return;
}


// ===== 009f88f0  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__unique_ptr_null */

undefined8 __rustcall
<cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_std_vector_string_null(&local_18);
  return local_18;
}


// ===== 009f8914  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__vector_capacity =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__vector_capacity */

void __rustcall <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__vector_capacity(void)

{
  (*(code *)PTR_cxxbridge1_std_vector_string_capacity_00b066d8)();
  return;
}


// ===== 009f8918  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__unique_ptr_release */

void __rustcall
<cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__unique_ptr_release(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_std_vector_string_release(&local_18);
  return;
}


// ===== 009f893c  <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__reserve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <cxx::string::CxxString as cxx::cxx_vector::VectorElement>::__reserve */

void __rustcall <cxx::string::CxxString_as_cxx::cxx_vector::VectorElement>::__reserve(void)

{
  (*(code *)PTR_cxxbridge1_std_vector_string_reserve_00b066e8)();
  return;
}


// ===== 009f8940  <i32_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <i32_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i32_get_00b066f0)();
  return;
}


// ===== 009f8944  <i32_as_cxx::shared_ptr::SharedPtrTarget>::__new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::shared_ptr::SharedPtrTarget>::__new */

void __rustcall
<i32_as_cxx::shared_ptr::SharedPtrTarget>::__new(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)cxxbridge1_std_shared_ptr_i32_uninit(param_2);
  *puVar1 = param_1;
  return;
}


// ===== 009f896c  <i32_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall <i32_as_cxx::shared_ptr::SharedPtrTarget>::__raw(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i32_raw_00b06700)();
  return;
}


// ===== 009f8970  <i32_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <i32_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i32_drop_00b06708)();
  return;
}


// ===== 009f8974  <i32_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <i32_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i32_null_00b06710)();
  return;
}


// ===== 009f8978  <i32_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <i32_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i32_clone_00b06718)();
  return;
}


// ===== 009f897c  <i64_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <i64_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_std_shared_ptr_i64_get_00b06720)();
  return;
}


