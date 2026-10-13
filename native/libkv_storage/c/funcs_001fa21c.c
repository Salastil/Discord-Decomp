// ===== 001fa21c  FUN_001fa21c =====

void FUN_001fa21c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00309e28;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_002223f0(1,lVar2 + 8);
  }
  return;
}


// ===== 001fa250  FUN_001fa250 =====

void FUN_001fa250(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fa2a0  FUN_001fa2a0 =====

void FUN_001fa2a0(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001fa2f0  FUN_001fa2f0 =====

void FUN_001fa2f0(undefined4 *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)PTR_values_0030d7a8;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)uVar1;
  return;
}


// ===== 001fa310  FUN_001fa310 =====

long FUN_001fa310(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7discord9frontends3jsi10JsFunction4fromIZNS1_6JsHost6createERN8facebook3jsi7RuntimeENSt6__ndk18weak_ptrINS5_5react11CallInvokerEEEE3$_6EENS6_8FunctionES8_T_EUlS8_RKNS6_5ValueEPSI_mE_"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001fa32c  FUN_001fa32c =====

pointer_____offset_0x10___ * FUN_001fa32c(void)

{
  return &PTR_vtable_00309e88;
}


// ===== 001fa338  FUN_001fa338 =====

void FUN_001fa338(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fa388  FUN_001fa388 =====

void FUN_001fa388(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00309ea8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fa3e4  FUN_001fa3e4 =====

void FUN_001fa3e4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00309ea8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001fa440  FUN_001fa440 =====

undefined8 * FUN_001fa440(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar3 = &PTR_FUN_00309ea8;
  puVar3[1] = uVar1;
  puVar3[2] = lVar2;
  if (lVar2 != 0) {
    FUN_002223f0(1,lVar2 + 8);
  }
  return puVar3;
}


// ===== 001fa490  FUN_001fa490 =====

void FUN_001fa490(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00309ea8;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_002223f0(1,lVar2 + 8);
  }
  return;
}


// ===== 001fa4c4  FUN_001fa4c4 =====

void FUN_001fa4c4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fa514  FUN_001fa514 =====

void FUN_001fa514(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001fa564  FUN_001fa564 =====

void FUN_001fa564(undefined4 *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)PTR_entries_0030d7b0;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)uVar1;
  return;
}


// ===== 001fa584  FUN_001fa584 =====

long FUN_001fa584(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7discord9frontends3jsi10JsFunction4fromIZNS1_6JsHost6createERN8facebook3jsi7RuntimeENSt6__ndk18weak_ptrINS5_5react11CallInvokerEEEE3$_7EENS6_8FunctionES8_T_EUlS8_RKNS6_5ValueEPSI_mE_"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001fa5a0  FUN_001fa5a0 =====

pointer_____offset_0x10___ * FUN_001fa5a0(void)

{
  return &PTR_vtable_00309f08;
}


// ===== 001fa5ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fa5b0  FUN_001fa5b0 =====

void FUN_001fa5b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00309f28;
  puVar1[1] = uVar2;
  return;
}


// ===== 001fa5e4  FUN_001fa5e4 =====

void FUN_001fa5e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00309f28;
  param_2[1] = uVar1;
  return;
}


// ===== 001fa5f8  FUN_001fa5f8 =====

void FUN_001fa5f8(void)

{
  return;
}


// ===== 001fa5fc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fa600  FUN_001fa600 =====

void FUN_001fa600(long param_1,undefined8 *param_2)

{
  uint uVar1;
  JsHost *pJVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_458 [456];
  uint local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_248 [456];
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_31;
  
  uVar1 = *(uint *)(param_2 + 0x3c);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  local_458[0] = 0;
  local_290 = 0xffffffff;
  if (uVar1 != 0xffffffff) {
                    /* try { // try from 001fa654 to 001fa663 has its CatchHandler @ 001fa738 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_variant<discord_None,discord_api_Cell,boost_container_small_vector<discord_api_Cell,1ul,void,void>,discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_map<discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_less<discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_pair<discord_raw_RawValue_const,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>>>>,std___ndk1_vector<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>,discord_Error>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_variant<discord_None,discord_api_Cell,boost_container_s___1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>,discord_Error>&&>_00309a68
              )[uVar1])(&local_260,local_458,param_2 + 3);
    uVar1 = *(uint *)(param_2 + 0x3c);
    local_290 = uVar1;
  }
  pJVar2 = *(JsHost **)(param_1 + 8);
  uStack_280 = param_2[0x3e];
  local_288 = param_2[0x3d];
  uStack_270 = param_2[0x40];
  uStack_278 = param_2[0x3f];
  local_248[0] = 0;
  local_80 = 0xffffffff;
  local_260 = uVar3;
  uStack_258 = uVar4;
  if (uVar1 != 0xffffffff) {
                    /* try { // try from 001fa6a0 to 001fa6af has its CatchHandler @ 001fa734 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_variant<discord_None,discord_api_Cell,boost_container_small_vector<discord_api_Cell,1ul,void,void>,discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_map<discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_less<discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_pair<discord_raw_RawValue_const,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>>>>,std___ndk1_vector<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>,discord_Error>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_variant<discord_None,discord_api_Cell,boost_container_s___1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>,discord_Error>&&>_00309a68
              )[uVar1])(&uStack_31,local_248,local_458);
    local_80 = local_290;
  }
  uStack_70 = uStack_280;
  local_78 = local_288;
  uStack_60 = uStack_270;
  uStack_68 = uStack_278;
                    /* try { // try from 001fa6c4 to 001fa6cf has its CatchHandler @ 001fa73c */
  discord::frontends::jsi::JsHost::handle_response(pJVar2,&local_260);
  if (local_80 != 0xffffffff) {
                    /* try { // try from 001fa6e8 to 001fa6f3 has its CatchHandler @ 001fa730 */
    (*(code *)(&PTR_FUN_00309838)[local_80])(&uStack_31,local_248);
  }
  if (local_290 != 0xffffffff) {
                    /* try { // try from 001fa704 to 001fa70f has its CatchHandler @ 001fa72c */
    (*(code *)(&PTR_FUN_00309838)[local_290])(&local_260,local_458);
  }
  return;
}


// ===== 001fa758  FUN_001fa758 =====

long FUN_001fa758(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7discord9frontends3jsi6JsHostC1ERN8facebook3jsi7RuntimeENSt6__ndk110shared_ptrINS_3api4HostEEENS7_8weak_ptrINS3_5react11CallInvokerEEEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001fa774  FUN_001fa774 =====

pointer_____offset_0x10___ * FUN_001fa774(void)

{
  return &PTR_vtable_00309f88;
}


// ===== 001fa780  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fa784  FUN_001fa784 =====

void FUN_001fa784(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00309fa8;
  puVar1[1] = uVar2;
  return;
}


// ===== 001fa7b8  FUN_001fa7b8 =====

void FUN_001fa7b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00309fa8;
  param_2[1] = uVar1;
  return;
}


// ===== 001fa7cc  FUN_001fa7cc =====

void FUN_001fa7cc(void)

{
  return;
}


// ===== 001fa7d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fa7d4  FUN_001fa7d4 =====

void FUN_001fa7d4(long param_1,undefined8 *param_2)

{
  discord::frontends::jsi::JsHost::handle_status(*(undefined8 *)(param_1 + 8),*param_2,param_2[1]);
  return;
}


// ===== 001fa7e4  FUN_001fa7e4 =====

long FUN_001fa7e4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7discord9frontends3jsi6JsHostC1ERN8facebook3jsi7RuntimeENSt6__ndk110shared_ptrINS_3api4HostEEENS7_8weak_ptrINS3_5react11CallInvokerEEEE3$_1"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001fa800  FUN_001fa800 =====

pointer_____offset_0x10___ * FUN_001fa800(void)

{
  return &PTR_vtable_0030a008;
}


// ===== 001fa80c  FUN_001fa80c =====

void FUN_001fa80c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0030a028;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001fa81c  FUN_001fa81c =====

void FUN_001fa81c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0030a028;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fa84c  FUN_001fa84c =====

void FUN_001fa84c(long param_1)

{
  undefined1 uStack_1;
  
  if (*(uint *)(param_1 + 0x200) != 0xffffffff) {
                    /* try { // try from 001fa874 to 001fa87f has its CatchHandler @ 001fa894 */
    (*(code *)(&PTR_FUN_00309838)[*(uint *)(param_1 + 0x200)])(&uStack_1,param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x200) = 0xffffffff;
  return;
}


// ===== 001fa898  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fa89c  FUN_001fa89c =====

void FUN_001fa89c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0030a078;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fa8f8  FUN_001fa8f8 =====

void FUN_001fa8f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0030a078;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001fa954  FUN_001fa954 =====

undefined8 * FUN_001fa954(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar3 = &PTR_FUN_0030a078;
  puVar3[1] = uVar1;
  puVar3[2] = lVar2;
  if (lVar2 != 0) {
    FUN_002223f0(1,lVar2 + 8);
  }
  return puVar3;
}


// ===== 001fa9a4  FUN_001fa9a4 =====

void FUN_001fa9a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0030a078;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_002223f0(1,lVar2 + 8);
  }
  return;
}


// ===== 001fa9d8  FUN_001fa9d8 =====

void FUN_001fa9d8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001faa28  FUN_001faa28 =====

void FUN_001faa28(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001faa78  FUN_001faa78 =====

void FUN_001faa78(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Response **ppRVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  Value aVStack_4e0 [16];
  Value aVStack_4d0 [16];
  Value aVStack_4c0 [16];
  undefined1 auStack_4b0 [520];
  uint local_2a8;
  Response *local_2a0;
  ulong uStack_298;
  undefined1 local_288 [456];
  uint local_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long local_90;
  long *local_88;
  ulong *local_80 [2];
  Value aVStack_70 [16];
  ulong local_60 [2];
  
  puVar8 = *(ulong **)(param_1 + 8);
  uVar6 = *puVar8;
  if (*(long *)(uVar6 + 0x58) != 0) {
    plVar1 = (long *)std::__ndk1::__shared_weak_count::lock();
    if (plVar1 != (long *)0x0) {
      lVar5 = *(long *)(uVar6 + 0x50);
      local_90 = lVar5;
      local_88 = plVar1;
      if (lVar5 != 0) {
        uStack_298 = puVar8[2];
        local_2a0 = (Response *)puVar8[1];
        local_288[0] = 0;
        local_c0 = 0xffffffff;
        if ((uint)puVar8[0x3d] != 0xffffffff) {
                    /* try { // try from 001faaf0 to 001faaff has its CatchHandler @ 001fac98 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_variant<discord_None,discord_api_Cell,boost_container_small_vector<discord_api_Cell,1ul,void,void>,discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_map<discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_less<discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_pair<discord_raw_RawValue_const,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>>>>,std___ndk1_vector<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>,discord_Error>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<std___ndk1_variant<discord_None,discord_api_Cell,boost_container_s___llocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>,discord_Error>const&>_0030a0d8
                    )[(uint)puVar8[0x3d]])(auStack_4b0,local_288,puVar8 + 4);
          local_c0 = (uint)puVar8[0x3d];
        }
        uStack_b0 = puVar8[0x3f];
        local_b8 = puVar8[0x3e];
        uStack_a0 = puVar8[0x41];
        uStack_a8 = puVar8[0x40];
                    /* try { // try from 001fab18 to 001fab27 has its CatchHandler @ 001face0 */
        ppRVar4 = &local_2a0;
        discord::frontends::jsi::JsHost::transform_response(uVar6,local_2a0);
        lVar2 = std::__ndk1::chrono::steady_clock::now();
        local_60[0] = puVar8[0x42];
        if (local_2a8 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001fac8c to 001fac8f has its CatchHandler @ 001face8 */
          FUN_001b3508();
        }
        local_80[0] = local_60;
                    /* try { // try from 001fab58 to 001fab67 has its CatchHandler @ 001face8 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_api_Response,discord_frontends_jsi_JsResponse>(facebook_jsi_Runtime&,std___ndk1_variant<discord_api_Response,discord_frontends_jsi_JsResponse>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_api_Response,discord_frontends_jsi_JsResponse>const&>_0030a1f0
                  )[local_2a8])(aVStack_4c0,local_80,auStack_4b0);
        lVar3 = std::__ndk1::chrono::steady_clock::now();
        local_80[0] = (ulong *)(lVar3 - lVar2);
                    /* try { // try from 001fab78 to 001fab8b has its CatchHandler @ 001facd0 */
        discord::frontends::jsi::codec::Serialize::to_jsi<unsigned_long>
                  ((Serialize *)puVar8[0x42],(Runtime *)local_80,(ulong *)ppRVar4);
        plVar7 = (long *)puVar8[0x42];
        facebook::jsi::Value::Value((Value *)local_80,aVStack_4c0);
        facebook::jsi::Value::Value(aVStack_70,aVStack_4d0);
        local_60[0] = local_60[0] & 0xffffffff00000000;
                    /* try { // try from 001fabb4 to 001fabcf has its CatchHandler @ 001faca8 */
        (**(code **)(*plVar7 + 0x280))(aVStack_4e0,plVar7,lVar5,local_60,local_80,2);
        facebook::jsi::Value::~Value((Value *)local_60);
        facebook::jsi::Value::~Value(aVStack_70);
        facebook::jsi::Value::~Value((Value *)local_80);
        facebook::jsi::Value::~Value(aVStack_4e0);
        facebook::jsi::Value::~Value(aVStack_4d0);
        facebook::jsi::Value::~Value(aVStack_4c0);
        if (local_2a8 != 0xffffffff) {
                    /* try { // try from 001fac18 to 001fac23 has its CatchHandler @ 001fac94 */
          (*(code *)(&PTR_FUN_0030a200)[local_2a8])(local_80,auStack_4b0);
        }
        if (local_c0 != 0xffffffff) {
                    /* try { // try from 001fac3c to 001fac47 has its CatchHandler @ 001fac90 */
          (*(code *)(&PTR_FUN_00309838)[local_c0])(auStack_4b0,local_288);
        }
      }
      lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar1 + 1);
      if (lVar5 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


// ===== 001fad0c  FUN_001fad0c =====

long FUN_001fad0c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "N7discord8FunctionIZNS_9frontends3jsi6JsHost15handle_responseENS_3api8ResponseEE3$_0EE") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001fad28  FUN_001fad28 =====

pointer_____offset_0x10___ * FUN_001fad28(void)

{
  return &PTR_vtable_0030a210;
}


// ===== 001fad34  FUN_001fad34 =====

void FUN_001fad34(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0030a230;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001fad44  FUN_001fad44 =====

void FUN_001fad44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0030a230;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fad74  FUN_001fad74 =====

void FUN_001fad74(void)

{
  return;
}


// ===== 001fad78  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fad7c  FUN_001fad7c =====

void FUN_001fad7c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0030a280;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fadd8  FUN_001fadd8 =====

void FUN_001fadd8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0030a280;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001fae34  FUN_001fae34 =====

undefined8 * FUN_001fae34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar3 = &PTR_FUN_0030a280;
  puVar3[1] = uVar1;
  puVar3[2] = lVar2;
  if (lVar2 != 0) {
    FUN_002223f0(1,lVar2 + 8);
  }
  return puVar3;
}


// ===== 001fae84  FUN_001fae84 =====

void FUN_001fae84(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0030a280;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_002223f0(1,lVar2 + 8);
  }
  return;
}


// ===== 001faeb8  FUN_001faeb8 =====

void FUN_001faeb8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001faf08  FUN_001faf08 =====

void FUN_001faf08(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001faf58  FUN_001faf58 =====

void FUN_001faf58(long param_1)

{
  long *plVar1;
  long lVar2;
  Runtime *pRVar3;
  long *plVar4;
  Value aVStack_80 [16];
  Value aVStack_70 [16];
  long local_60;
  long *local_58;
  Value aVStack_50 [16];
  undefined4 local_40 [4];
  
  plVar4 = *(long **)(param_1 + 8);
  lVar2 = *plVar4;
  if (*(long *)(lVar2 + 0x48) != 0) {
    plVar1 = (long *)std::__ndk1::__shared_weak_count::lock();
    if (plVar1 != (long *)0x0) {
      lVar2 = *(long *)(lVar2 + 0x40);
      local_60 = lVar2;
      local_58 = plVar1;
      if (lVar2 != 0) {
        pRVar3 = (Runtime *)plVar4[3];
                    /* try { // try from 001faf9c to 001fafab has its CatchHandler @ 001fb05c */
        discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::DatabaseStatus>
                  (pRVar3,(DatabaseStatus *)(plVar4 + 1));
        facebook::jsi::Value::Value(aVStack_50,aVStack_80);
        local_40[0] = 0;
                    /* try { // try from 001fafc4 to 001fafdf has its CatchHandler @ 001fb03c */
        (**(code **)(*(long *)pRVar3 + 0x280))(aVStack_70,pRVar3,lVar2,local_40,aVStack_50,1);
        facebook::jsi::Value::~Value((Value *)local_40);
        facebook::jsi::Value::~Value(aVStack_50);
        facebook::jsi::Value::~Value(aVStack_70);
        facebook::jsi::Value::~Value(aVStack_80);
      }
      lVar2 = FUN_00222ae0(0xffffffffffffffff,plVar1 + 1);
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


// ===== 001fb070  FUN_001fb070 =====

long FUN_001fb070(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "N7discord8FunctionIZNS_9frontends3jsi6JsHost13handle_statusENS_3api14DatabaseStatusEE3$_0EE")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001fb08c  FUN_001fb08c =====

pointer_____offset_0x10___ * FUN_001fb08c(void)

{
  return &PTR_vtable_0030a2e0;
}


// ===== 001fb098  facebook::jsi::Object::setProperty<facebook::jsi::Object> =====

/* void facebook::jsi::Object::setProperty<facebook::jsi::Object>(facebook::jsi::IRuntime&, char
   const*, facebook::jsi::Object&&) const */

void __thiscall
facebook::jsi::Object::setProperty<facebook::jsi::Object>
          (Object *this,IRuntime *param_1,char *param_2,Object *param_3)

{
  size_t sVar1;
  undefined8 *local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  sVar1 = strlen(param_2);
  (**(code **)(*(long *)param_1 + 0x108))(&local_48,param_1,param_2,sVar1);
  local_40[0] = 7;
                    /* try { // try from 001fb0f4 to 001fb0fb has its CatchHandler @ 001fb15c */
  local_38 = (**(code **)(*(long *)param_1 + 0x88))(param_1,*(undefined8 *)param_3);
                    /* try { // try from 001fb108 to 001fb11b has its CatchHandler @ 001fb14c */
  (**(code **)(*(long *)param_1 + 0x1b8))(param_1,this,&local_48,local_40);
  facebook::jsi::Value::~Value((Value *)local_40);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  return;
}


// ===== 001fb184  FUN_001fb184 =====

void FUN_001fb184(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fb1d4  FUN_001fb1d4 =====

void FUN_001fb1d4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fb224  discord::api::Host::Callbacks::~Callbacks =====

/* discord::api::Host::Callbacks::~Callbacks() */

void __thiscall discord::api::Host::Callbacks::~Callbacks(Callbacks *this)

{
  Callbacks *pCVar1;
  long lVar2;
  Callbacks *pCVar3;
  
  pCVar1 = *(Callbacks **)(this + 0x50);
  pCVar3 = this + 0x30;
  if (pCVar1 == pCVar3) {
    lVar2 = 4;
  }
  else {
    if (pCVar1 == (Callbacks *)0x0) goto LAB_001fb264;
    lVar2 = 5;
    pCVar3 = pCVar1;
  }
  (**(code **)(*(long *)pCVar3 + lVar2 * 8))();
LAB_001fb264:
  pCVar3 = *(Callbacks **)(this + 0x20);
  if (pCVar3 == this) {
    lVar2 = 4;
  }
  else {
    if (pCVar3 == (Callbacks *)0x0) {
      return;
    }
    lVar2 = 5;
    this = pCVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x001fb298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + lVar2 * 8))(this);
  return;
}


// ===== 001fb2a8  discord::frontends::jsi::JsBase::~JsBase =====

/* discord::frontends::jsi::JsBase::~JsBase() */

void __thiscall discord::frontends::jsi::JsBase::~JsBase(JsBase *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fb2f8  FUN_001fb2f8 =====

void FUN_001fb2f8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fb348  std::__ndk1::__shared_ptr_emplace<discord::frontends::jsi::JsHost,std::__ndk1::allocator<discord::frontends::jsi::JsHost>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<discord::frontends::jsi::JsHost,
   std::__ndk1::allocator<discord::frontends::jsi::JsHost> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<discord::frontends::jsi::JsHost,std::__ndk1::allocator<discord::frontends::jsi::JsHost>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<discord::frontends::jsi::JsHost,std::__ndk1::allocator<discord::frontends::jsi::JsHost>>
           *this)

{
  *(undefined **)this = PTR_vtable_0030d790 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}


// ===== 001fb35c  std::__ndk1::__shared_ptr_emplace<discord::frontends::jsi::JsHost,std::__ndk1::allocator<discord::frontends::jsi::JsHost>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<discord::frontends::jsi::JsHost,
   std::__ndk1::allocator<discord::frontends::jsi::JsHost> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<discord::frontends::jsi::JsHost,std::__ndk1::allocator<discord::frontends::jsi::JsHost>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<discord::frontends::jsi::JsHost,std::__ndk1::allocator<discord::frontends::jsi::JsHost>>
           *this)

{
  *(undefined **)this = PTR_vtable_0030d790 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 001fb390  FUN_001fb390 =====

void FUN_001fb390(long param_1)

{
  undefined1 uStack_11;
  
  FUN_001fb488(&uStack_11,param_1 + 0x18);
  return;
}


// ===== 001fb3b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fb3bc  std::__ndk1::allocator<discord::frontends::jsi::JsHost>::construct[abi:ne180000]<discord::frontends::jsi::JsHost,facebook::jsi::Runtime&,std::__ndk1::shared_ptr<discord::api::Host>&,std::__ndk1::weak_ptr<facebook::react::CallInvoker>> =====

/* void 
   std::__ndk1::allocator<discord::frontends::jsi::JsHost>::construct[abi:ne180000]<discord::frontends::jsi::JsHost,
   facebook::jsi::Runtime&, std::__ndk1::shared_ptr<discord::api::Host>&,
   std::__ndk1::weak_ptr<facebook::react::CallInvoker> >(discord::frontends::jsi::JsHost*,
   facebook::jsi::Runtime&, std::__ndk1::shared_ptr<discord::api::Host>&,
   std::__ndk1::weak_ptr<facebook::react::CallInvoker>&&) */

void __thiscall
std::__ndk1::allocator<discord::frontends::jsi::JsHost>::
construct_abi_ne180000_<discord::frontends::jsi::JsHost,facebook::jsi::Runtime&,std::__ndk1::shared_ptr<discord::api::Host>&,std::__ndk1::weak_ptr<facebook::react::CallInvoker>>
          (allocator<discord::frontends::jsi::JsHost> *this,JsHost *param_1,Runtime *param_2,
          shared_ptr *param_3,weak_ptr *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_40 = *(undefined8 *)param_3;
  local_38 = *(long **)(param_3 + 8);
  if (local_38 != (long *)0x0) {
    FUN_002223f0(1,local_38 + 1);
  }
  lStack_48 = *(long *)(param_4 + 8);
  local_50 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)(param_4 + 8) = 0;
                    /* try { // try from 001fb400 to 001fb413 has its CatchHandler @ 001fb464 */
  discord::frontends::jsi::JsHost::JsHost(param_1,param_2,&local_40,&local_50);
  if (lStack_48 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_38;
  if ((local_38 != (long *)0x0) &&
     (lVar2 = FUN_00222ae0(0xffffffffffffffff,local_38 + 1), lVar2 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  return;
}


// ===== 001fb488  FUN_001fb488 =====

void FUN_001fb488(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  FUN_001fb570(param_2 + 0x70,*(undefined8 *)(param_2 + 0x78));
  if (*(long *)(param_2 + 0x68) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_2 + 0x18));
  plVar2 = *(long **)(param_2 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fb514  std::__ndk1::__shared_ptr_pointer<discord::frontends::jsi::GcCollection::CleanupRaii*,std::__ndk1::shared_ptr<facebook::jsi::HostObject>::__shared_ptr_default_delete<facebook::jsi::HostObject,discord::frontends::jsi::GcCollection::CleanupRaii>,std::__ndk1::allocator<discord::frontends::jsi::GcCollection::CleanupRaii>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<discord::frontends::jsi::GcCollection::CleanupRaii*,
   std::__ndk1::shared_ptr<facebook::jsi::HostObject>::__shared_ptr_default_delete<facebook::jsi::HostObject,
   discord::frontends::jsi::GcCollection::CleanupRaii>,
   std::__ndk1::allocator<discord::frontends::jsi::GcCollection::CleanupRaii>
   >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<discord::frontends::jsi::GcCollection::CleanupRaii*,std::__ndk1::shared_ptr<facebook::jsi::HostObject>::__shared_ptr_default_delete<facebook::jsi::HostObject,discord::frontends::jsi::GcCollection::CleanupRaii>,std::__ndk1::allocator<discord::frontends::jsi::GcCollection::CleanupRaii>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<discord::frontends::jsi::GcCollection::CleanupRaii*,std::__ndk1::shared_ptr<facebook::jsi::HostObject>::__shared_ptr_default_delete<facebook::jsi::HostObject,discord::frontends::jsi::GcCollection::CleanupRaii>,std::__ndk1::allocator<discord::frontends::jsi::GcCollection::CleanupRaii>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 001fb538  FUN_001fb538 =====

void FUN_001fb538(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001fb548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 001fb550  FUN_001fb550 =====

long FUN_001fb550(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0030d7b8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001fb56c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fb570  FUN_001fb570 =====

void FUN_001fb570(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_001fb570(param_1,*param_2);
    FUN_001fb570(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      operator_delete((void *)param_2[7]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 001fb5c0  FUN_001fb5c0 =====

void FUN_001fb5c0(void)

{
  return;
}


// ===== 001fb5c4  FUN_001fb5c4 =====

void FUN_001fb5c4(void)

{
  return;
}


// ===== 001fb5c8  std::__ndk1::__shared_ptr_emplace<facebook::jsi::Function,std::__ndk1::allocator<facebook::jsi::Function>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<facebook::jsi::Function,
   std::__ndk1::allocator<facebook::jsi::Function> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<facebook::jsi::Function,std::__ndk1::allocator<facebook::jsi::Function>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<facebook::jsi::Function,std::__ndk1::allocator<facebook::jsi::Function>>
           *this)

{
  *(undefined **)this = PTR_vtable_0030d7a0 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}


// ===== 001fb5dc  std::__ndk1::__shared_ptr_emplace<facebook::jsi::Function,std::__ndk1::allocator<facebook::jsi::Function>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<facebook::jsi::Function,
   std::__ndk1::allocator<facebook::jsi::Function> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<facebook::jsi::Function,std::__ndk1::allocator<facebook::jsi::Function>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<facebook::jsi::Function,std::__ndk1::allocator<facebook::jsi::Function>>
           *this)

{
  *(undefined **)this = PTR_vtable_0030d7a0 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 001fb610  FUN_001fb610 =====

void FUN_001fb610(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001fb620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
  return;
}


// ===== 001fb628  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 001fb62c  FUN_001fb62c =====

void FUN_001fb62c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001fb67c  std::__ndk1::__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>::__emplace_unique_key_args<unsigned_long,unsigned_long&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&> =====

/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<unsigned long, std::__ndk1::__value_type<unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__emplace_unique_key_args<unsigned long, unsigned long&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&>(unsigned long const&, unsigned
   long&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::
__emplace_unique_key_args<unsigned_long,unsigned_long&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
          (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *this,ulong *param_1,ulong *param_2,basic_string *param_3)

{
  basic_string bVar1;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var2;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var3;
  undefined8 uVar4;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  p_Var6 = this + 8;
  p_Var5 = p_Var6;
  if (*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        **)p_Var6 !=
      (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
       *)0x0) {
    p_Var2 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               **)p_Var6;
    do {
      while (p_Var3 = p_Var2, p_Var6 = p_Var3, *(ulong *)(p_Var3 + 0x20) <= *param_1) {
        if (*param_1 <= *(ulong *)(p_Var3 + 0x20)) {
          uVar4 = 0;
          goto LAB_001fb77c;
        }
        p_Var2 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   **)(p_Var3 + 8);
        if (*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              **)(p_Var3 + 8) ==
            (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)0x0) {
          p_Var5 = p_Var3 + 8;
          goto LAB_001fb6f0;
        }
      }
      p_Var2 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 **)p_Var3;
      p_Var5 = p_Var3;
    } while (*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               **)p_Var3 !=
             (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              *)0x0);
  }
LAB_001fb6f0:
  p_Var3 = (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            *)operator_new(0x40);
  bVar1 = *param_3;
  *(ulong *)(p_Var3 + 0x20) = *param_2;
  if (((byte)bVar1 & 1) == 0) {
    uVar7 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(p_Var3 + 0x30) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(p_Var3 + 0x28) = uVar7;
    *(undefined8 *)(p_Var3 + 0x38) = uVar4;
  }
  else {
                    /* try { // try from 001fb72c to 001fb733 has its CatchHandler @ 001fb79c */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (p_Var3 + 0x28),*(char **)(param_3 + 0x10),*(ulong *)(param_3 + 8));
  }
  *(undefined8 *)p_Var3 = 0;
  *(undefined8 *)(p_Var3 + 8) = 0;
  *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    **)(p_Var3 + 0x10) = p_Var6;
  *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    **)p_Var5 = p_Var3;
  p_Var6 = p_Var3;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    p_Var6 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               **)p_Var5;
  }
  FUN_001b97e8(*(undefined8 *)(this + 8),p_Var6);
  uVar4 = 1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
LAB_001fb77c:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = p_Var3;
  return auVar8;
}


// ===== 001fb7b0  FUN_001fb7b0 =====

void FUN_001fb7b0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)pvVar1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar1 + 0x38));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001fb800  FUN_001fb800 =====

void FUN_001fb800(long param_1)

{
  undefined1 uStack_1;
  
  if (*(uint *)(param_1 + 0x208) != 0xffffffff) {
                    /* try { // try from 001fb828 to 001fb833 has its CatchHandler @ 001fb848 */
    (*(code *)(&PTR_FUN_0030a200)[*(uint *)(param_1 + 0x208)])(&uStack_1,param_1);
  }
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  return;
}


// ===== 001fb84c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response,discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::api::Response,discord::frontends::jsi::JsResponse>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::api::Response,discord::frontends::jsi::JsResponse>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response,
   discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,
   std::__ndk1::variant<discord::api::Response, discord::frontends::jsi::JsResponse>
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Response, discord::frontends::jsi::JsResponse>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response,
   discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,
   std::__ndk1::variant<discord::api::Response, discord::frontends::jsi::JsResponse>
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Response, discord::frontends::jsi::JsResponse> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response,discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::api::Response,discord::frontends::jsi::JsResponse>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::api::Response,discord::frontends::jsi::JsResponse>const&>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response>
                     ((Runtime *)**(undefined8 **)param_1,(Response *)param_2);
  return p_Var1;
}


// ===== 001fb858  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response,discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::api::Response,discord::frontends::jsi::JsResponse>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::api::Response,discord::frontends::jsi::JsResponse>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response,
   discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,
   std::__ndk1::variant<discord::api::Response, discord::frontends::jsi::JsResponse>
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Response, discord::frontends::jsi::JsResponse>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response,
   discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,
   std::__ndk1::variant<discord::api::Response, discord::frontends::jsi::JsResponse>
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Response, discord::frontends::jsi::JsResponse> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response,discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::api::Response,discord::frontends::jsi::JsResponse>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::api::Response,discord::frontends::jsi::JsResponse>const&>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<discord::frontends::jsi::JsResponse>
                     ((Runtime *)**(undefined8 **)param_1,(JsResponse *)param_2);
  return p_Var1;
}


// ===== 001fb864  FUN_001fb864 =====

void FUN_001fb864(undefined8 param_1,long param_2)

{
  undefined1 uStack_1;
  
  if (*(uint *)(param_2 + 0x1e0) != 0xffffffff) {
                    /* try { // try from 001fb88c to 001fb897 has its CatchHandler @ 001fb8ac */
    (*(code *)(&PTR_FUN_00309838)[*(uint *)(param_2 + 0x1e0)])(&uStack_1,param_2 + 0x18);
  }
  *(undefined4 *)(param_2 + 0x1e0) = 0xffffffff;
  return;
}


// ===== 001fb8b0  FUN_001fb8b0 =====

void FUN_001fb8b0(undefined8 param_1,long param_2)

{
  facebook::jsi::Value::~Value((Value *)(param_2 + 0x10));
  return;
}


// ===== 001fb8b8  std::__ndk1::__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>::__erase_unique<unsigned_long> =====

/* unsigned long std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<unsigned long, std::__ndk1::__value_type<unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__erase_unique<unsigned
   long>(unsigned long const&) */

ulong __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::__erase_unique<unsigned_long>
          (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *this,ulong *param_1)

{
  bool bVar1;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var2;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var3;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var6;
  
  p_Var3 = this + 8;
  p_Var2 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             **)p_Var3;
  if (p_Var2 != (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)0x0) {
    p_Var5 = p_Var3;
    p_Var6 = p_Var2;
    do {
      p_Var4 = p_Var6 + 8;
      if (*param_1 <= *(ulong *)(p_Var6 + 0x20)) {
        p_Var5 = p_Var6;
        p_Var4 = p_Var6;
      }
      p_Var6 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 **)p_Var4;
    } while (p_Var6 != (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)0x0);
    if ((p_Var5 == p_Var3) || (*param_1 < *(ulong *)(p_Var5 + 0x20))) {
      p_Var2 = (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)0x0;
    }
    else {
      p_Var3 = p_Var5;
      p_Var6 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 **)(p_Var5 + 8);
      if (*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            **)(p_Var5 + 8) ==
          (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *)0x0) {
        do {
          p_Var4 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     **)(p_Var3 + 0x10);
          bVar1 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    **)p_Var4 != p_Var3;
          p_Var3 = p_Var4;
        } while (bVar1);
      }
      else {
        do {
          p_Var4 = p_Var6;
          p_Var6 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     **)p_Var4;
        } while (*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   **)p_Var4 !=
                 (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  *)0x0);
      }
      if (*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            **)this == p_Var5) {
        *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          **)this = p_Var4;
      }
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      FUN_001ea6e0(p_Var2,p_Var5);
      if (((byte)p_Var5[0x28] & 1) != 0) {
        operator_delete(*(void **)(p_Var5 + 0x38));
      }
      operator_delete(p_Var5);
      p_Var2 = (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)0x1;
    }
  }
  return (ulong)p_Var2;
}


// ===== 001fb998  discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Value> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, facebook::jsi::Value>),
   facebook::jsi::Value>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Value>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Value>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  Value *in_x8;
  
  facebook::jsi::Value::Value(in_x8,(IRuntime *)this,(Value *)param_1);
  return;
}


// ===== 001fb9a8  discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Object> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, facebook::jsi::Object>),
   facebook::jsi::Object>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Object>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Object>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(int *)param_1 == 7) {
    facebook::jsi::Value::asObject((IRuntime *)param_1);
    return;
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fb9f8 to 001fba0b has its CatchHandler @ 001fbab4 */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fba0c to 001fba1f has its CatchHandler @ 001fba9c */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 001fba3c to 001fba67 has its CatchHandler @ 001fba68 */
  facebook::jsi::JSError::JSError(pJVar1,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fbac8  discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Function> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, facebook::jsi::Function>),
   facebook::jsi::Function>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Function>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Function>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  JSError *pJVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_18;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
                    /* try { // try from 001fbaf8 to 001fbb17 has its CatchHandler @ 001fbc1c */
  uVar1 = (**(code **)(*(long *)this + 0x200))(this,&local_18);
  if ((uVar1 & 1) != 0) {
    facebook::jsi::Object::asFunction((IRuntime *)&local_18);
    if (local_18 != (undefined8 *)0x0) {
      (**(code **)*local_18)();
    }
    return;
  }
  pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fbb54 to 001fbb63 has its CatchHandler @ 001fbc0c */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fbb64 to 001fbb77 has its CatchHandler @ 001fbbf4 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 001fbb94 to 001fbbbf has its CatchHandler @ 001fbbc0 */
  facebook::jsi::JSError::JSError(pJVar2,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar2,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fbc3c  discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Array> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, facebook::jsi::Array>),
   facebook::jsi::Array>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Array>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::Array>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  JSError *pJVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_18;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
                    /* try { // try from 001fbc6c to 001fbc8b has its CatchHandler @ 001fbd90 */
  uVar1 = (**(code **)(*(long *)this + 0x1e0))(this,&local_18);
  if ((uVar1 & 1) != 0) {
    facebook::jsi::Object::asArray((IRuntime *)&local_18);
    if (local_18 != (undefined8 *)0x0) {
      (**(code **)*local_18)();
    }
    return;
  }
  pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fbcc8 to 001fbcd7 has its CatchHandler @ 001fbd80 */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fbcd8 to 001fbceb has its CatchHandler @ 001fbd68 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 001fbd08 to 001fbd33 has its CatchHandler @ 001fbd34 */
  facebook::jsi::JSError::JSError(pJVar2,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar2,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fbdb0  discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::String> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, facebook::jsi::String>),
   facebook::jsi::String>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::String>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::String>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(int *)param_1 == 6) {
    facebook::jsi::Value::asString((IRuntime *)param_1);
    return;
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fbe00 to 001fbe13 has its CatchHandler @ 001fbebc */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fbe14 to 001fbe27 has its CatchHandler @ 001fbea4 */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 001fbe44 to 001fbe6f has its CatchHandler @ 001fbe70 */
  facebook::jsi::JSError::JSError(pJVar1,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fbed0  discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::ArrayBuffer> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   facebook::jsi::ArrayBuffer>), facebook::jsi::ArrayBuffer>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::ArrayBuffer>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<facebook::jsi::ArrayBuffer>
               (Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  JSError *pJVar3;
  undefined8 *puVar4;
  Value *in_x2;
  undefined8 *in_x8;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_18;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 001fbf00 to 001fbf23 has its CatchHandler @ 001fc028 */
  uVar1 = (**(code **)(*(long *)param_1 + 0x1e8))(param_1,&local_18);
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*(long *)param_1 + 0x88))(param_1,local_18);
    *in_x8 = uVar2;
    if (local_18 != (undefined8 *)0x0) {
      (**(code **)*local_18)();
    }
    return;
  }
  pJVar3 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fbf60 to 001fbf6f has its CatchHandler @ 001fc018 */
  inspect_value_string((jsi *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 001fbf70 to 001fbf83 has its CatchHandler @ 001fc000 */
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar4[2];
  uStack_48 = puVar4[1];
  local_50 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 001fbfa0 to 001fbfcb has its CatchHandler @ 001fbfcc */
  facebook::jsi::JSError::JSError(pJVar3,param_1,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar3,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fc048  discord::frontends::jsi::codec::Deserialize::from_throwing<bool> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, bool>), bool>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<bool>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

Runtime __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<bool>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(int *)param_1 == 2) {
    return param_1[8];
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fc094 to 001fc0a7 has its CatchHandler @ 001fc150 */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fc0a8 to 001fc0bb has its CatchHandler @ 001fc138 */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 001fc0d8 to 001fc103 has its CatchHandler @ 001fc104 */
  facebook::jsi::JSError::JSError(pJVar1,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fc164  discord::frontends::jsi::codec::Deserialize::from_throwing<double> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, double>), double>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<double>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<double>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(int *)param_1 == 3) {
    facebook::jsi::Value::asNumber();
    return;
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fc1b0 to 001fc1c3 has its CatchHandler @ 001fc26c */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fc1c4 to 001fc1d7 has its CatchHandler @ 001fc254 */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 001fc1f4 to 001fc21f has its CatchHandler @ 001fc220 */
  facebook::jsi::JSError::JSError(pJVar1,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fc280  discord::frontends::jsi::codec::Deserialize::from_throwing<unsigned_long> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, unsigned long>), unsigned
   long>::type discord::frontends::jsi::codec::Deserialize::from_throwing<unsigned
   long>(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

long __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<unsigned_long>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((*(int *)param_1 == 3) &&
     (dVar3 = (double)facebook::jsi::Value::asNumber(), (double)(long)dVar3 == dVar3)) {
    dVar4 = ABS(dVar3);
    if ((dVar4 < INFINITY) || (dVar4 != INFINITY && dVar4 < INFINITY == NAN(dVar4))) {
      return (long)dVar3;
    }
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fc2e4 to 001fc2ef has its CatchHandler @ 001fc3b0 */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fc2f0 to 001fc303 has its CatchHandler @ 001fc398 */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 001fc320 to 001fc34b has its CatchHandler @ 001fc364 */
  facebook::jsi::JSError::JSError(pJVar1,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fc3c4  discord::frontends::jsi::codec::Deserialize::from_throwing<long> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, long>), long>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<long>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

long __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<long>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((*(int *)param_1 == 3) &&
     (dVar3 = (double)facebook::jsi::Value::asNumber(), (double)(long)dVar3 == dVar3)) {
    dVar4 = ABS(dVar3);
    if ((dVar4 < INFINITY) || (dVar4 != INFINITY && dVar4 < INFINITY == NAN(dVar4))) {
      return (long)dVar3;
    }
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fc428 to 001fc433 has its CatchHandler @ 001fc4f4 */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fc434 to 001fc447 has its CatchHandler @ 001fc4dc */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 001fc464 to 001fc48f has its CatchHandler @ 001fc4a8 */
  facebook::jsi::JSError::JSError(pJVar1,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fc508  discord::frontends::jsi::codec::Deserialize::from_throwing<unsigned_int> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, unsigned int>), unsigned
   int>::type discord::frontends::jsi::codec::Deserialize::from_throwing<unsigned
   int>(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

int __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<unsigned_int>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((*(int *)param_1 == 3) &&
     (dVar3 = (double)facebook::jsi::Value::asNumber(), (double)(long)dVar3 == dVar3)) {
    dVar4 = ABS(dVar3);
    if ((dVar4 < INFINITY) || (dVar4 != INFINITY && dVar4 < INFINITY == NAN(dVar4))) {
      return (int)dVar3;
    }
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fc56c to 001fc577 has its CatchHandler @ 001fc638 */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fc578 to 001fc58b has its CatchHandler @ 001fc620 */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 001fc5a8 to 001fc5d3 has its CatchHandler @ 001fc5ec */
  facebook::jsi::JSError::JSError(pJVar1,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fc64c  discord::frontends::jsi::codec::Deserialize::from_throwing<int> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, int>), int>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<int>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

int __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<int>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((*(int *)param_1 == 3) &&
     (dVar3 = (double)facebook::jsi::Value::asNumber(), (double)(long)dVar3 == dVar3)) {
    dVar4 = ABS(dVar3);
    if ((dVar4 < INFINITY) || (dVar4 != INFINITY && dVar4 < INFINITY == NAN(dVar4))) {
      return (int)dVar3;
    }
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fc6b0 to 001fc6bb has its CatchHandler @ 001fc77c */
  inspect_value_string((jsi *)this,param_1,param_2);
                    /* try { // try from 001fc6bc to 001fc6cf has its CatchHandler @ 001fc764 */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)auStack_68,(char *)0x0);
  local_40 = puVar2[2];
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 001fc6ec to 001fc717 has its CatchHandler @ 001fc730 */
  facebook::jsi::JSError::JSError(pJVar1,this,&local_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fc790  discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >), std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > >::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (Runtime *param_1,Value *param_2)

{
  Value *in_x2;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::String>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 001fc7b8 to 001fc7c7 has its CatchHandler @ 001fc7ec */
  (**(code **)(*(long *)param_1 + 0x120))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
  return;
}


// ===== 001fc810  discord::frontends::jsi::codec::Deserialize::from_throwing<boost::container::small_vector<unsigned_char,8ul,void,void>> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   boost::container::small_vector<unsigned char, 8ul, void, void> >),
   boost::container::small_vector<unsigned char, 8ul, void, void> >::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<boost::container::small_vector<unsigned
   char, 8ul, void, void> >(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::
from_throwing<boost::container::small_vector<unsigned_char,8ul,void,void>>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  long lVar1;
  long lVar2;
  uchar *puVar3;
  long lVar4;
  long *in_x8;
  undefined8 *local_18;
  
  from_throwing<facebook::jsi::ArrayBuffer>((Runtime *)this,(Value *)param_1);
                    /* try { // try from 001fc838 to 001fc843 has its CatchHandler @ 001fc8cc */
  puVar3 = (uchar *)(**(code **)(*(long *)this + 0x250))(this,&local_18);
                    /* try { // try from 001fc850 to 001fc85b has its CatchHandler @ 001fc8c8 */
  lVar4 = (**(code **)(*(long *)this + 0x248))(this,&local_18);
  lVar2 = _UNK_001776c8;
  lVar1 = ram0x001776c0;
  *in_x8 = (long)(in_x8 + 3);
  in_x8[2] = lVar2;
  in_x8[1] = lVar1;
                    /* try { // try from 001fc870 to 001fc883 has its CatchHandler @ 001fc8a8 */
  boost::container::
  vector<unsigned_char,boost::container::small_vector_allocator<unsigned_char,boost::container::new_allocator<void>,void>,void>
  ::assign<unsigned_char*>((uchar *)in_x8,puVar3,(type *)(puVar3 + lVar4));
  if (local_18 != (undefined8 *)0x0) {
    (**(code **)*local_18)();
  }
  return;
}


// ===== 001fc8ec  discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >),
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> > >(facebook::jsi::Runtime&, facebook::jsi::Value const&)
    */

void __thiscall
discord::frontends::jsi::codec::Deserialize::
from_throwing<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  void *__src;
  ulong __n;
  void *__dest;
  undefined8 uVar1;
  undefined8 *in_x8;
  undefined8 *local_38;
  
  from_throwing<facebook::jsi::ArrayBuffer>((Runtime *)this,(Value *)param_1);
                    /* try { // try from 001fc918 to 001fc923 has its CatchHandler @ 001fc9a8 */
  __src = (void *)(**(code **)(*(long *)this + 0x250))(this,&local_38);
                    /* try { // try from 001fc930 to 001fc93b has its CatchHandler @ 001fc9a4 */
  __n = (**(code **)(*(long *)this + 0x248))(this,&local_38);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 001fc99c to 001fc9a3 has its CatchHandler @ 001fc9b8 */
      uVar1 = FUN_001b39a0();
                    /* catch() { ... } // from try @ 001fc930 with catch @ 001fc9a4 */
                    /* catch() { ... } // from try @ 001fc918 with catch @ 001fc9a8 */
      if (local_38 != (undefined8 *)0x0) {
        (**(code **)*local_38)();
                    /* WARNING: Subroutine does not return */
        FUN_00222c44(uVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00222c44(uVar1);
    }
                    /* try { // try from 001fc950 to 001fc957 has its CatchHandler @ 001fc9b8 */
    __dest = operator_new(__n);
    *in_x8 = __dest;
    in_x8[2] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    in_x8[1] = (long)__dest + __n;
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fc9fc  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsObject> =====

/* WARNING: Removing unreachable block (ram,0x001fca4c) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::frontends::jsi::JsObject>), discord::frontends::jsi::JsObject>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsObject>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsObject>
               (Runtime *param_1,Value *param_2)

{
  Value *in_x2;
  undefined8 local_8;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 001fca24 to 001fca2f has its CatchHandler @ 001fca68 */
  JsObject::JsObject();
  if (local_8 != (undefined8 *)0x0) {
    (**(code **)*local_8)();
  }
  return;
}


// ===== 001fcab0  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::raw::RawValue> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, discord::raw::RawValue>),
   discord::raw::RawValue>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::raw::RawValue>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::raw::RawValue>
               (Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  Value *in_x2;
  undefined1 auStack_1d8 [24];
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  RawObject local_190 [8];
  undefined1 local_188 [24];
  uint local_170;
  uint local_168;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  uint local_120;
  RawObject local_110 [8];
  ulong local_108;
  ulong uStack_100;
  uint local_f0;
  undefined1 local_e0 [32];
  uint local_c0;
  uint local_b8;
  undefined8 local_a8 [5];
  uint local_80;
  Value local_70 [40];
  uint local_48;
  undefined1 uStack_21;
  
  local_48 = *(uint *)param_2;
  if ((int)local_48 < 3) {
    if (local_48 < 2) {
      raw::RawValue::RawValue();
      return;
    }
    if (local_48 != 2) {
LAB_001fcdec:
      pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 001fce00 to 001fce17 has its CatchHandler @ 001fced0 */
      inspect_value_string((jsi *)param_1,(Runtime *)param_2,in_x2);
      uStack_158 = (ulong)((byte)local_110[0] >> 1);
      local_160 = (ulong)local_110 | 1;
      if (((byte)local_110[0] & 1) != 0) {
        uStack_158 = local_108;
        local_160 = uStack_100;
      }
                    /* try { // try from 001fce38 to 001fce53 has its CatchHandler @ 001fceb8 */
      fmt::v9::vformat(auStack_1d8,"{} cannot be used here",0x16,0xd,&local_160);
                    /* try { // try from 001fce58 to 001fce83 has its CatchHandler @ 001fce84 */
      facebook::jsi::JSError::JSError(pJVar1,param_1,auStack_1d8);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
    }
    local_70[0] = param_2[8];
                    /* try { // try from 001fcc48 to 001fcc53 has its CatchHandler @ 001fcf48 */
    raw::RawValue::RawValue();
    if (local_48 != 0xffffffff) {
                    /* try { // try from 001fcc6c to 001fcc77 has its CatchHandler @ 001fcf00 */
      (*(code *)(&PTR_FUN_0030a400)[local_48])(local_110,local_70);
    }
  }
  else if (local_48 == 3) {
    local_a8[0] = facebook::jsi::Value::asNumber();
    local_80 = 5;
                    /* try { // try from 001fcda4 to 001fcdaf has its CatchHandler @ 001fcf3c */
    raw::RawValue::RawValue();
    if (local_80 != 0xffffffff) {
                    /* try { // try from 001fcdc8 to 001fcdd3 has its CatchHandler @ 001fcefc */
      (*(code *)(&PTR_FUN_0030a400)[local_80])(local_110,local_a8);
    }
  }
  else {
    if (local_48 == 6) {
      from_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                (param_1,param_2);
      local_130 = local_150;
      uStack_138 = uStack_158;
      local_140 = local_160;
      uStack_158 = 0;
      local_150 = (void *)0x0;
      local_160 = 0;
      local_120 = 0;
                    /* try { // try from 001fcca0 to 001fccab has its CatchHandler @ 001fcf5c */
      raw::RawBytes::RawBytes((RawBytes *)local_110,&local_140);
      local_e0[0] = 0;
      local_c0 = 0xffffffff;
      if (local_f0 != 0xffffffff) {
                    /* try { // try from 001fccd4 to 001fcce3 has its CatchHandler @ 001fcf04 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<un___d___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>&&>_0030a458
                  )[local_f0])(&uStack_21,local_e0,local_110);
        local_c0 = local_f0;
      }
      local_b8 = 6;
                    /* try { // try from 001fccf4 to 001fccff has its CatchHandler @ 001fcf0c */
      raw::RawValue::RawValue();
      if (local_b8 != 0xffffffff) {
                    /* try { // try from 001fcd18 to 001fcd23 has its CatchHandler @ 001fcef4 */
        (*(code *)(&PTR_FUN_0030a400)[local_b8])(&uStack_21,local_e0);
      }
      local_b8 = 0xffffffff;
      if (local_f0 != 0xffffffff) {
                    /* try { // try from 001fcd44 to 001fcd4f has its CatchHandler @ 001fceec */
        (*(code *)(&PTR_FUN_0030a440)[local_f0])(&uStack_21,local_110);
      }
      local_f0 = 0xffffffff;
      if (local_120 != 0xffffffff) {
                    /* try { // try from 001fcd64 to 001fcd6f has its CatchHandler @ 001fcee4 */
        (*(code *)(&PTR_FUN_0030a440)[local_120])(&uStack_21,&local_140);
      }
      local_120 = 0xffffffff;
    }
    else {
      if (local_48 != 7) goto LAB_001fcdec;
      JsJson::to_json(param_1,param_2);
      local_1b0 = local_150;
      uStack_1b8 = uStack_158;
      local_1c0 = local_160;
      uStack_158 = 0;
      local_150 = (void *)0x0;
      local_160 = 0;
      local_1a8 = 1;
                    /* try { // try from 001fcb38 to 001fcb47 has its CatchHandler @ 001fcf6c */
      raw::RawObject::RawObject(local_110,0,&local_1c0);
      local_188[0] = 0;
      local_190[0] = local_110[0];
      local_170 = 0xffffffff;
      if (local_f0 != 0xffffffff) {
                    /* try { // try from 001fcb7c to 001fcb8b has its CatchHandler @ 001fcf08 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>&&>_0030a480
                  )[local_f0])(&uStack_21,local_188,&local_108);
        local_170 = local_f0;
      }
      local_168 = 7;
                    /* try { // try from 001fcb9c to 001fcba7 has its CatchHandler @ 001fcf24 */
      raw::RawValue::RawValue();
      if (local_168 != 0xffffffff) {
                    /* try { // try from 001fcbc0 to 001fcbcb has its CatchHandler @ 001fcef8 */
        (*(code *)(&PTR_FUN_0030a400)[local_168])(&uStack_21,local_190);
      }
      local_168 = 0xffffffff;
      if (local_f0 != 0xffffffff) {
                    /* try { // try from 001fcbf0 to 001fcbfb has its CatchHandler @ 001fcef0 */
        (*(code *)(&PTR_FUN_0030a470)[local_f0])(&uStack_21,&local_108);
      }
      local_f0 = 0xffffffff;
      if (local_1a8 != 0xffffffff) {
                    /* try { // try from 001fcc10 to 001fcc1b has its CatchHandler @ 001fcee8 */
        (*(code *)(&PTR_FUN_0030a470)[local_1a8])(&uStack_21,&local_1c0);
      }
      local_1a8 = 0xffffffff;
    }
    if ((local_160 & 1) != 0) {
      operator_delete(local_150);
    }
  }
  return;
}


// ===== 001fcf98  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Key> =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, discord::api::Key>),
   discord::api::Key>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Key>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Key>
               (Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  JSError *pJVar2;
  Value *in_x2;
  ulong uVar3;
  uint *puVar4;
  undefined1 local_370 [40];
  uint local_348;
  undefined1 local_338 [40];
  uint local_310;
  undefined1 local_300 [40];
  uint local_2d8;
  undefined1 local_2c8 [40];
  uint local_2a0;
  undefined1 local_290 [40];
  uint local_268;
  undefined1 local_258 [40];
  uint local_230;
  Value aVStack_228 [16];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [40];
  uint local_1e8;
  ulong local_1e0 [6];
  uint local_1b0 [2];
  RawValue aRStack_1a8 [8];
  undefined1 auStack_1a0 [40];
  uint local_178;
  RawValue aRStack_170 [8];
  undefined1 auStack_168 [40];
  uint local_140;
  RawValue aRStack_138 [8];
  undefined1 auStack_130 [40];
  uint local_108;
  RawValue aRStack_100 [8];
  undefined1 auStack_f8 [40];
  uint local_d0;
  RawValue aRStack_c8 [8];
  undefined1 auStack_c0 [40];
  uint local_98;
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  uint *local_70 [2];
  
  from_throwing<facebook::jsi::Array>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 001fcfd0 to 001fcfdb has its CatchHandler @ 001fd56c */
  uVar1 = (**(code **)(*(long *)param_1 + 0x240))(param_1,&local_78);
  if (6 < uVar1) {
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
    local_1e0[1] = 0;
                    /* try { // try from 001fd47c to 001fd497 has its CatchHandler @ 001fd4ec */
    local_1e0[0] = uVar1;
    fmt::v9::vformat(auStack_90,"a key cannot have more than 5 elements (elements: {})",0x35,4,
                     local_1e0);
                    /* try { // try from 001fd49c to 001fd4c7 has its CatchHandler @ 001fd4c8 */
    facebook::jsi::JSError::JSError(pJVar2,param_1,auStack_90);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pJVar2,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
  }
                    /* try { // try from 001fcfe8 to 001fcff3 has its CatchHandler @ 001fd564 */
  raw::RawValue::RawValue((RawValue *)local_1e0);
                    /* try { // try from 001fcff8 to 001fd037 has its CatchHandler @ 001fd57c */
  raw::RawValue::RawValue(aRStack_1a8);
  raw::RawValue::RawValue(aRStack_170);
  raw::RawValue::RawValue(aRStack_138);
  raw::RawValue::RawValue(aRStack_100);
  raw::RawValue::RawValue(aRStack_c8);
  if (uVar1 != 0) {
    uVar3 = 0;
    puVar4 = local_1b0;
    do {
                    /* try { // try from 001fd088 to 001fd09b has its CatchHandler @ 001fd5a4 */
      (**(code **)(*(long *)param_1 + 0x260))(aVStack_228,param_1,&local_78,uVar3);
                    /* try { // try from 001fd09c to 001fd0ab has its CatchHandler @ 001fd5ac */
      from_throwing<discord::raw::RawValue>(param_1,aVStack_228);
      if (*puVar4 == 0xffffffff) {
        if (local_1e8 != 0xffffffff) goto LAB_001fd0e4;
      }
      else {
        if (local_1e8 == 0xffffffff) {
                    /* try { // try from 001fd0cc to 001fd0d3 has its CatchHandler @ 001fd578 */
          (*(code *)(&PTR_FUN_0030a400)[*puVar4])(local_70);
          *puVar4 = 0xffffffff;
        }
        else {
LAB_001fd0e4:
                    /* try { // try from 001fd0ec to 001fd0f7 has its CatchHandler @ 001fd5a0 */
          local_70[0] = puVar4 + -10;
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a490
                    )[local_1e8])(local_70,puVar4 + -10,auStack_210);
        }
        if (local_1e8 != 0xffffffff) {
                    /* try { // try from 001fd108 to 001fd113 has its CatchHandler @ 001fd59c */
          (*(code *)(&PTR_FUN_0030a400)[local_1e8])(local_70,auStack_210);
        }
      }
      local_1e8 = 0xffffffff;
      facebook::jsi::Value::~Value(aVStack_228);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0xe;
    } while (uVar1 != uVar3);
  }
  local_258[0] = 0;
  local_230 = 0xffffffff;
  if (local_1b0[0] != 0xffffffff) {
                    /* try { // try from 001fd144 to 001fd153 has its CatchHandler @ 001fd528 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[local_1b0[0]])(auStack_218,local_258,local_1e0 + 1);
    local_230 = local_1b0[0];
  }
  local_290[0] = 0;
  local_268 = 0xffffffff;
  if (local_178 != 0xffffffff) {
                    /* try { // try from 001fd17c to 001fd18b has its CatchHandler @ 001fd524 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[local_178])(auStack_218,local_290,auStack_1a0);
    local_268 = local_178;
  }
  local_2c8[0] = 0;
  local_2a0 = 0xffffffff;
  if (local_140 != 0xffffffff) {
                    /* try { // try from 001fd1b8 to 001fd1c7 has its CatchHandler @ 001fd520 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[local_140])(auStack_218,local_2c8,auStack_168);
    local_2a0 = local_140;
  }
  local_300[0] = 0;
  local_2d8 = 0xffffffff;
  if (local_108 != 0xffffffff) {
                    /* try { // try from 001fd1f0 to 001fd1ff has its CatchHandler @ 001fd51c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[local_108])(auStack_218,local_300,auStack_130);
    local_2d8 = local_108;
  }
  local_338[0] = 0;
  local_310 = 0xffffffff;
  if (local_d0 != 0xffffffff) {
                    /* try { // try from 001fd22c to 001fd23b has its CatchHandler @ 001fd518 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[local_d0])(auStack_218,local_338,auStack_f8);
    local_310 = local_d0;
  }
  local_370[0] = 0;
  local_348 = 0xffffffff;
  if (local_98 != 0xffffffff) {
                    /* try { // try from 001fd264 to 001fd273 has its CatchHandler @ 001fd514 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[local_98])(auStack_218,local_370,auStack_c0);
    local_348 = local_98;
  }
                    /* try { // try from 001fd27c to 001fd29b has its CatchHandler @ 001fd52c */
  api::Key::Key();
  if (local_348 != 0xffffffff) {
                    /* try { // try from 001fd2ac to 001fd2b7 has its CatchHandler @ 001fd510 */
    (*(code *)(&PTR_FUN_0030a400)[local_348])(auStack_218,local_370);
  }
  local_348 = 0xffffffff;
  if (local_310 != 0xffffffff) {
                    /* try { // try from 001fd2d0 to 001fd2db has its CatchHandler @ 001fd50c */
    (*(code *)(&PTR_FUN_0030a400)[local_310])(auStack_218,local_338);
  }
  local_310 = 0xffffffff;
  if (local_2d8 != 0xffffffff) {
                    /* try { // try from 001fd2f0 to 001fd2fb has its CatchHandler @ 001fd508 */
    (*(code *)(&PTR_FUN_0030a400)[local_2d8])(auStack_218,local_300);
  }
  local_2d8 = 0xffffffff;
  if (local_2a0 != 0xffffffff) {
                    /* try { // try from 001fd310 to 001fd31b has its CatchHandler @ 001fd504 */
    (*(code *)(&PTR_FUN_0030a400)[local_2a0])(auStack_218,local_2c8);
  }
  local_2a0 = 0xffffffff;
  if (local_268 != 0xffffffff) {
                    /* try { // try from 001fd330 to 001fd33b has its CatchHandler @ 001fd500 */
    (*(code *)(&PTR_FUN_0030a400)[local_268])(auStack_218,local_290);
  }
  local_268 = 0xffffffff;
  if (local_230 != 0xffffffff) {
                    /* try { // try from 001fd350 to 001fd35b has its CatchHandler @ 001fd4fc */
    (*(code *)(&PTR_FUN_0030a400)[local_230])(auStack_218,local_258);
  }
  local_230 = 0xffffffff;
  if (local_98 != 0xffffffff) {
                    /* try { // try from 001fd374 to 001fd437 has its CatchHandler @ 001fd574 */
    (*(code *)(&PTR_FUN_0030a400)[local_98])(auStack_218,auStack_c0);
  }
  local_98 = 0xffffffff;
  if (local_d0 != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[local_d0])(auStack_218,auStack_f8);
  }
  local_d0 = 0xffffffff;
  if (local_108 != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[local_108])(auStack_218,auStack_130);
  }
  local_108 = 0xffffffff;
  if (local_140 != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[local_140])(auStack_218,auStack_168);
  }
  local_140 = 0xffffffff;
  if (local_178 != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[local_178])(auStack_218,auStack_1a0);
  }
  local_178 = 0xffffffff;
  if (local_1b0[0] != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[local_1b0[0]])(auStack_218,local_1e0 + 1);
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)();
  }
  return;
}


// ===== 001fd5dc  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::KeyRange> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, discord::api::KeyRange>),
   discord::api::KeyRange>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::KeyRange>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::KeyRange>
               (Runtime *param_1,Value *param_2)

{
  Value aVStack_50 [16];
  Value aVStack_40 [16];
  
  from_array_throwing<std::__ndk1::array<facebook::jsi::Value,2ul>>(param_1,param_2);
                    /* try { // try from 001fd604 to 001fd613 has its CatchHandler @ 001fd658 */
  from_throwing<discord::api::Key>(param_1,aVStack_50);
                    /* try { // try from 001fd614 to 001fd623 has its CatchHandler @ 001fd648 */
  from_throwing<discord::api::Key>(param_1,aVStack_40);
  facebook::jsi::Value::~Value(aVStack_40);
  facebook::jsi::Value::~Value(aVStack_50);
  return;
}


// ===== 001fd678  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::TableId> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, discord::api::TableId>),
   discord::api::TableId>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::TableId>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

undefined8
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::TableId>
          (Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  long *plVar2;
  JSError *pJVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  byte local_58 [8];
  ulong local_50;
  long *local_48;
  long *local_40;
  ulong uStack_38;
  
  from_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (param_1,param_2);
  uVar1 = (ulong)(local_58[0] >> 1);
  if ((local_58[0] & 1) != 0) {
    uVar1 = local_50;
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      plVar2 = local_48;
    }
    if (*plVar2 == 0x65686361635f766b) {
      uVar4 = 3;
    }
    else {
      if (*plVar2 != 0x736567617373656d) goto LAB_001fd7a4;
      uVar4 = 4;
    }
joined_r0x001fd778:
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    return uVar4;
  }
  if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      plVar2 = local_48;
    }
    if ((int)*plVar2 == 0x6174656d) {
      uVar4 = 1;
      goto joined_r0x001fd778;
    }
  }
  else if (uVar1 == 2) {
    plVar2 = (long *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      plVar2 = local_48;
    }
    if ((short)*plVar2 == 0x766b) {
      uVar4 = 2;
      goto joined_r0x001fd778;
    }
  }
LAB_001fd7a4:
  pJVar3 = (JSError *)__cxa_allocate_exception(0x60);
  uStack_38 = (ulong)(local_58[0] >> 1);
  local_40 = (long *)((ulong)local_58 | 1);
  if ((local_58[0] & 1) != 0) {
    uStack_38 = local_50;
    local_40 = local_48;
  }
                    /* try { // try from 001fd7d4 to 001fd7ef has its CatchHandler @ 001fd844 */
  fmt::v9::vformat(auStack_70,"unknown table: {}",0x11,0xd,&local_40);
                    /* try { // try from 001fd7f4 to 001fd81f has its CatchHandler @ 001fd820 */
  facebook::jsi::JSError::JSError(pJVar3,param_1,auStack_70);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar3,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 001fd868  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Ordering> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, discord::api::Ordering>),
   discord::api::Ordering>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Ordering>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Ordering>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  uint uVar1;
  JSError *pJVar2;
  undefined1 auStack_58 [24];
  ulong local_40 [2];
  
  uVar1 = from_throwing<unsigned_int>(this,param_1,param_2);
  if ((uVar1 != 0) && (uVar1 != 1)) {
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
    local_40[1] = 0;
                    /* try { // try from 001fd8bc to 001fd8d7 has its CatchHandler @ 001fd92c */
    local_40[0] = (ulong)uVar1;
    fmt::v9::vformat(auStack_58,"unknown ordering: {}",0x14,2,local_40);
                    /* try { // try from 001fd8dc to 001fd907 has its CatchHandler @ 001fd908 */
    facebook::jsi::JSError::JSError(pJVar2,this,auStack_58);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pJVar2,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
  }
  return;
}


// ===== 001fd940  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Cell> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional, discord::api::Cell>),
   discord::api::Cell>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Cell>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Cell>
               (Runtime *param_1,Value *param_2)

{
  (*(code *)PTR_from_jsi_0030ec40)();
  return;
}


// ===== 001fd944  discord::frontends::jsi::codec::Deserialize::from_throwing<boost::container::small_vector<discord::api::Cell,1ul,void,void>> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void> >),
   boost::container::small_vector<discord::api::Cell, 1ul, void, void> >::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<boost::container::small_vector<discord::api::Cell,
   1ul, void, void> >(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<boost::container::small_vector<discord::api::Cell,1ul,void,void>>
               (Runtime *param_1,Value *param_2)

{
  (*(code *)
    PTR_from_list_throwing<boost_container_small_vector<discord_api_Cell,1ul,void,void>>_0030eed0)()
  ;
  return;
}


// ===== 001fd948  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsHostCallbacks> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::frontends::jsi::JsHostCallbacks>), discord::frontends::jsi::JsHostCallbacks>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsHostCallbacks>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsHostCallbacks>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fd974 to 001fd97f has its CatchHandler @ 001fda3c */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fd9a8 to 001fd9bf has its CatchHandler @ 001fda1c */
  JsObject::get_throwing<facebook::jsi::Function,char_const*>((Runtime *)&local_38,(char *)this);
                    /* try { // try from 001fd9c0 to 001fd9d7 has its CatchHandler @ 001fd9fc */
  JsObject::get_throwing<facebook::jsi::Function,char_const*>((Runtime *)&local_38,(char *)this);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fda64  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::CreateHandle> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::CreateHandle>), discord::api::Operation::CreateHandle>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::CreateHandle>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::CreateHandle>(Runtime *param_1,Value *param_2)

{
  bool bVar1;
  Value *in_x2;
  long in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fda90 to 001fda9b has its CatchHandler @ 001fdb58 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fdac4 to 001fdadb has its CatchHandler @ 001fdb38 */
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001fdadc to 001fdaef has its CatchHandler @ 001fdb20 */
  bVar1 = JsObject::get_throwing<bool,char_const*>((Runtime *)&local_38,(char *)param_1);
  *(bool *)(in_x8 + 0x18) = bVar1;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fdb80  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::CloseHandle> =====

/* WARNING: Removing unreachable block (ram,0x001fdbd0) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::CloseHandle>), discord::api::Operation::CloseHandle>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::CloseHandle>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

ulong __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::CloseHandle>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_8;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
  local_28 = local_8;
                    /* try { // try from 001fdba8 to 001fdbb3 has its CatchHandler @ 001fdc44 */
  JsObject::JsObject((JsObject *)&local_30,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fdbdc to 001fdbef has its CatchHandler @ 001fdc20 */
  uVar1 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_30,(char *)this);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30);
  }
  return uVar1;
}


// ===== 001fdc7c  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteDatabase> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::DeleteDatabase>), discord::api::Operation::DeleteDatabase>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteDatabase>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteDatabase>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fdca8 to 001fdcb3 has its CatchHandler @ 001fdd3c */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fdcdc to 001fdcf3 has its CatchHandler @ 001fdd18 */
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_38,(char *)this);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fdd74  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::ListDatabases> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::ListDatabases>), discord::api::Operation::ListDatabases>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::ListDatabases>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::ListDatabases>(Runtime *param_1,Value *param_2)

{
  return;
}


// ===== 001fdd78  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetState> =====

/* WARNING: Removing unreachable block (ram,0x001fddc8) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::GetState>), discord::api::Operation::GetState>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetState>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

ulong __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetState>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_8;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
  local_28 = local_8;
                    /* try { // try from 001fdda0 to 001fddab has its CatchHandler @ 001fde3c */
  JsObject::JsObject((JsObject *)&local_30,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fddd4 to 001fdde7 has its CatchHandler @ 001fde18 */
  uVar1 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_30,(char *)this);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30);
  }
  return uVar1;
}


// ===== 001fde74  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Disable> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::Disable>), discord::api::Operation::Disable>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Disable>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Disable>
               (Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fdea0 to 001fdeab has its CatchHandler @ 001fdf28 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fded4 to 001fdf03 has its CatchHandler @ 001fdf60 */
  uVar1 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar1;
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fdf8c  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Execute> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::Execute>), discord::api::Operation::Execute>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Execute>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Execute>
               (Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fdfb8 to 001fdfc3 has its CatchHandler @ 001fe040 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fdfec to 001fe01b has its CatchHandler @ 001fe078 */
  uVar1 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar1;
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fe0a4  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Transaction> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::Transaction>), discord::api::Operation::Transaction>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Transaction>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::Transaction>(Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fe0d0 to 001fe0db has its CatchHandler @ 001fe158 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fe104 to 001fe133 has its CatchHandler @ 001fe190 */
  uVar1 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar1;
  JsObject::
  get_list_throwing<std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>,char_const*>
            ((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fe1bc  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaGetOne> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MetaGetOne>), discord::api::Operation::MetaGetOne>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaGetOne>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaGetOne>
               (Runtime *param_1,Value *param_2)

{
  Value *in_x2;
  undefined8 *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fe1e8 to 001fe1f3 has its CatchHandler @ 001fe280 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
  *in_x8 = 0;
                    /* try { // try from 001fe220 to 001fe237 has its CatchHandler @ 001fe25c */
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fe2b8  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaGetAll> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MetaGetAll>), discord::api::Operation::MetaGetAll>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaGetAll>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaGetAll>
               (Runtime *param_1,Value *param_2)

{
  undefined8 *in_x8;
  
  in_x8[1] = 0;
  *in_x8 = 0;
  in_x8[3] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 001fe2c4  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaPut> =====

/* WARNING: Removing unreachable block (ram,0x001fe31c) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MetaPut>), discord::api::Operation::MetaPut>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaPut>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaPut>
               (Runtime *param_1,Value *param_2)

{
  Value *in_x2;
  undefined8 *in_x8;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_18;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_38 = local_18;
                    /* try { // try from 001fe2f4 to 001fe2ff has its CatchHandler @ 001fe3c0 */
  JsObject::JsObject((JsObject *)&local_40,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  *in_x8 = 0;
                    /* try { // try from 001fe330 to 001fe347 has its CatchHandler @ 001fe3a0 */
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_40,(char *)param_1);
                    /* try { // try from 001fe348 to 001fe35f has its CatchHandler @ 001fe388 */
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_40,(char *)param_1);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  return;
}


// ===== 001fe3e8  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaDelete> =====

/* WARNING: Removing unreachable block (ram,0x001fe440) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MetaDelete>), discord::api::Operation::MetaDelete>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaDelete>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MetaDelete>
               (Runtime *param_1,Value *param_2)

{
  Value *in_x2;
  undefined8 *in_x8;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_18;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_38 = local_18;
                    /* try { // try from 001fe418 to 001fe423 has its CatchHandler @ 001fe4d4 */
  JsObject::JsObject((JsObject *)&local_40,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  *in_x8 = 0;
                    /* try { // try from 001fe454 to 001fe46b has its CatchHandler @ 001fe4b4 */
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_40,(char *)param_1);
                    /* try { // try from 001fe46c to 001fe473 has its CatchHandler @ 001fe49c */
  raw::RawValue::RawValue((RawValue *)(in_x8 + 4));
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  return;
}


// ===== 001fe4fc  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetMany> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::GetMany>), discord::api::Operation::GetMany>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetMany>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetMany>
               (Runtime *param_1,Value *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  Value *in_x2;
  ulong *in_x8;
  undefined1 auVar4 [16];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fe528 to 001fe533 has its CatchHandler @ 001fe5fc */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fe55c to 001fe5a3 has its CatchHandler @ 001fe634 */
  uVar3 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar3;
  uVar2 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar2;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001fe5a4 to 001fe5cf has its CatchHandler @ 001fe624 */
  uVar1 = JsObject::get_throwing<std::__ndk1::optional<discord::api::Ordering>,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined2 *)(in_x8 + 0x2c) = uVar1;
  auVar4 = JsObject::get_throwing<std::__ndk1::optional<unsigned_long>,char_const*>
                     ((Runtime *)&local_38,(char *)param_1);
  *(undefined1 (*) [16])(in_x8 + 0x2d) = auVar4;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38);
  }
  return;
}


// ===== 001fe654  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetRange> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::GetRange>), discord::api::Operation::GetRange>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetRange>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetRange>
               (Runtime *param_1,Value *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  Value *in_x2;
  ulong *in_x8;
  undefined1 auVar4 [16];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fe680 to 001fe68b has its CatchHandler @ 001fe758 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fe6b4 to 001fe6fb has its CatchHandler @ 001fe798 */
  uVar3 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar3;
  uVar2 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar2;
  JsObject::get_throwing<discord::api::KeyRange,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001fe6fc to 001fe727 has its CatchHandler @ 001fe780 */
  uVar1 = JsObject::get_throwing<std::__ndk1::optional<discord::api::Ordering>,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined2 *)(in_x8 + 0x56) = uVar1;
  auVar4 = JsObject::get_throwing<std::__ndk1::optional<unsigned_long>,char_const*>
                     ((Runtime *)&local_38,(char *)param_1);
  *(undefined1 (*) [16])(in_x8 + 0x57) = auVar4;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38);
  }
  return;
}


// ===== 001fe7b8  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetKvEntries> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::GetKvEntries>), discord::api::Operation::GetKvEntries>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetKvEntries>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::GetKvEntries>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fe7e4 to 001fe7ef has its CatchHandler @ 001fe884 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fe818 to 001fe85f has its CatchHandler @ 001fe8bc */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fe8e8  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetMapEntries> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::GetMapEntries>), discord::api::Operation::GetMapEntries>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetMapEntries>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::GetMapEntries>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fe914 to 001fe91f has its CatchHandler @ 001fe9b4 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fe948 to 001fe98f has its CatchHandler @ 001fe9ec */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fea18  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetChildIds> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::GetChildIds>), discord::api::Operation::GetChildIds>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetChildIds>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::GetChildIds>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fea44 to 001fea4f has its CatchHandler @ 001feae4 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fea78 to 001feabf has its CatchHandler @ 001feb1c */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001feb48  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetParentId> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::GetParentId>), discord::api::Operation::GetParentId>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::GetParentId>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::GetParentId>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001feb74 to 001feb7f has its CatchHandler @ 001fec14 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001feba8 to 001febef has its CatchHandler @ 001fec4c */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fec78  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::PutOne> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::PutOne>), discord::api::Operation::PutOne>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::PutOne>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::PutOne>
               (Runtime *param_1,Value *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001feca4 to 001fecaf has its CatchHandler @ 001fed74 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fecd8 to 001fed1f has its CatchHandler @ 001fed9c */
  uVar3 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar3;
  uVar2 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar2;
  JsObject::get_throwing<discord::api::Cell,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001fed20 to 001fed33 has its CatchHandler @ 001fed64 */
  bVar1 = JsObject::get_throwing<bool,char_const*>((Runtime *)&local_38,(char *)param_1);
  *(bool *)(in_x8 + 0x36) = bVar1;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fedbc  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::PutMany> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::PutMany>), discord::api::Operation::PutMany>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::PutMany>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::PutMany>
               (Runtime *param_1,Value *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fede8 to 001fedf3 has its CatchHandler @ 001feeb8 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fee1c to 001fee63 has its CatchHandler @ 001feee0 */
  uVar3 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar3;
  uVar2 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar2;
  JsObject::
  get_list_throwing<std::__ndk1::vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>,char_const*>
            ((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001fee64 to 001fee77 has its CatchHandler @ 001feea8 */
  bVar1 = JsObject::get_throwing<bool,char_const*>((Runtime *)&local_38,(char *)param_1);
  *(bool *)(in_x8 + 5) = bVar1;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001fef00  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteMany> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::DeleteMany>), discord::api::Operation::DeleteMany>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteMany>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteMany>
               (Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001fef2c to 001fef37 has its CatchHandler @ 001fefcc */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001fef60 to 001fefa7 has its CatchHandler @ 001ff004 */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001ff030  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteAllExcept> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::DeleteAllExcept>), discord::api::Operation::DeleteAllExcept>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteAllExcept>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::DeleteAllExcept>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_40 [2];
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_28 = local_40[0];
  local_40[0] = (undefined8 *)0x0;
                    /* try { // try from 001ff05c to 001ff067 has its CatchHandler @ 001ff14c */
  JsObject::JsObject((JsObject *)&local_30,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
  if (local_40[0] != (undefined8 *)0x0) {
    (**(code **)*local_40[0])();
  }
                    /* try { // try from 001ff090 to 001ff0d7 has its CatchHandler @ 001ff174 */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_30,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_30,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_30,(char *)param_1);
                    /* try { // try from 001ff0d8 to 001ff0ef has its CatchHandler @ 001ff13c */
  JsObject::get_throwing<facebook::jsi::Value,char_const*>((Runtime *)&local_30,(char *)param_1);
                    /* try { // try from 001ff0f0 to 001ff0ff has its CatchHandler @ 001ff12c */
  from_list_throwing<std::__ndk1::vector<discord::raw::RawValue,std::__ndk1::allocator<discord::raw::RawValue>>>
            (param_1,(Value *)local_40);
  facebook::jsi::Value::~Value((Value *)local_40);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  return;
}


// ===== 001ff194  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteRange> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::DeleteRange>), discord::api::Operation::DeleteRange>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteRange>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::DeleteRange>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001ff1c0 to 001ff1cb has its CatchHandler @ 001ff260 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ff1f4 to 001ff23b has its CatchHandler @ 001ff298 */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::KeyRange,char_const*>((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001ff2c4  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteGeneration> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::DeleteGeneration>), discord::api::Operation::DeleteGeneration>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::DeleteGeneration>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::DeleteGeneration>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001ff2f0 to 001ff2fb has its CatchHandler @ 001ff3e0 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ff324 to 001ff36b has its CatchHandler @ 001ff408 */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001ff36c to 001ff383 has its CatchHandler @ 001ff3d0 */
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001ff384 to 001ff39b has its CatchHandler @ 001ff3c0 */
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001ff428  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesGetLatest> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MessagesGetLatest>), discord::api::Operation::MessagesGetLatest>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesGetLatest>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::MessagesGetLatest>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001ff454 to 001ff45f has its CatchHandler @ 001ff4f4 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ff488 to 001ff4cf has its CatchHandler @ 001ff52c */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001ff558  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesTrimOrphans> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MessagesTrimOrphans>),
   discord::api::Operation::MessagesTrimOrphans>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesTrimOrphans>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::MessagesTrimOrphans>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001ff584 to 001ff58f has its CatchHandler @ 001ff64c */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ff5b8 to 001ff5ff has its CatchHandler @ 001ff674 */
  uVar2 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar2;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001ff600 to 001ff617 has its CatchHandler @ 001ff63c */
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_38,(char *)param_1);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001ff694  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesTrimChannel> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MessagesTrimChannel>),
   discord::api::Operation::MessagesTrimChannel>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesTrimChannel>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::MessagesTrimChannel>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001ff6c0 to 001ff6cb has its CatchHandler @ 001ff78c */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ff6f4 to 001ff73b has its CatchHandler @ 001ff7b4 */
  uVar3 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar3;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::api::Key,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001ff73c to 001ff74f has its CatchHandler @ 001ff77c */
  uVar2 = JsObject::get_throwing<unsigned_int,char_const*>((Runtime *)&local_38,(char *)param_1);
  *(uint *)(in_x8 + 0x2c) = uVar2;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001ff7d4  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesTrimChannelsIn> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MessagesTrimChannelsIn>),
   discord::api::Operation::MessagesTrimChannelsIn>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesTrimChannelsIn>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::MessagesTrimChannelsIn>(Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001ff800 to 001ff80b has its CatchHandler @ 001ff8f4 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ff834 to 001ff87b has its CatchHandler @ 001ff91c */
  uVar3 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar3;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001ff87c to 001ff893 has its CatchHandler @ 001ff8e4 */
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001ff894 to 001ff8a7 has its CatchHandler @ 001ff8d4 */
  uVar2 = JsObject::get_throwing<unsigned_int,char_const*>((Runtime *)&local_38,(char *)param_1);
  *(uint *)(in_x8 + 0x10) = uVar2;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001ff93c  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesTrimChannelsNotIn> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::MessagesTrimChannelsNotIn>),
   discord::api::Operation::MessagesTrimChannelsNotIn>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::MessagesTrimChannelsNotIn>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<discord::api::Operation::MessagesTrimChannelsNotIn>
               (Runtime *param_1,Value *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  Value *in_x2;
  ulong *in_x8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001ff968 to 001ff973 has its CatchHandler @ 001ffa5c */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ff99c to 001ff9e3 has its CatchHandler @ 001ffa84 */
  uVar3 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_38,(char *)param_1);
  *in_x8 = uVar3;
  uVar1 = JsObject::get_throwing<discord::api::TableId,char_const*>
                    ((Runtime *)&local_38,(char *)param_1);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001ff9e4 to 001ff9fb has its CatchHandler @ 001ffa4c */
  JsObject::get_throwing<discord::raw::RawValue,char_const*>((Runtime *)&local_38,(char *)param_1);
                    /* try { // try from 001ff9fc to 001ffa0f has its CatchHandler @ 001ffa3c */
  uVar2 = JsObject::get_throwing<unsigned_int,char_const*>((Runtime *)&local_38,(char *)param_1);
  *(uint *)(in_x8 + 0x10) = uVar2;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 001ffaa4  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Flush> =====

/* WARNING: Removing unreachable block (ram,0x001ffaf4) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::Flush>), discord::api::Operation::Flush>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Flush>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

ulong __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Flush>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_8;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
  local_28 = local_8;
                    /* try { // try from 001ffacc to 001ffad7 has its CatchHandler @ 001ffb68 */
  JsObject::JsObject((JsObject *)&local_30,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ffb00 to 001ffb13 has its CatchHandler @ 001ffb44 */
  uVar1 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_30,(char *)this);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30);
  }
  return uVar1;
}


// ===== 001ffba0  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Optimize> =====

/* WARNING: Removing unreachable block (ram,0x001ffbf0) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::Optimize>), discord::api::Operation::Optimize>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Optimize>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

bool __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Optimize>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  bool bVar1;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_8;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
  local_28 = local_8;
                    /* try { // try from 001ffbc8 to 001ffbd3 has its CatchHandler @ 001ffc60 */
  JsObject::JsObject((JsObject *)&local_30,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ffbfc to 001ffc0f has its CatchHandler @ 001ffc3c */
  bVar1 = JsObject::get_throwing<bool,char_const*>((Runtime *)&local_30,(char *)this);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  return bVar1;
}


// ===== 001ffc98  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Vacuum> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::Vacuum>), discord::api::Operation::Vacuum>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Vacuum>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

undefined1  [16] __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::Vacuum>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
  local_30 = local_28;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 001ffcc0 to 001ffccb has its CatchHandler @ 001ffd50 */
  JsObject::JsObject((JsObject *)&local_38,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)();
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ffcf4 to 001ffd1f has its CatchHandler @ 001ffd88 */
  auVar2._0_8_ = JsObject::get_throwing<unsigned_long,char_const*>
                           ((Runtime *)&local_38,(char *)this);
  bVar1 = JsObject::get_throwing<bool,char_const*>((Runtime *)&local_38,(char *)this);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  auVar2[8] = bVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}


// ===== 001ffdb4  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::FsInfo> =====

/* WARNING: Removing unreachable block (ram,0x001ffe04) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::api::Operation::FsInfo>), discord::api::Operation::FsInfo>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::FsInfo>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

ulong __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::api::Operation::FsInfo>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_8;
  
  from_throwing<facebook::jsi::Object>(this,param_1,param_2);
  local_28 = local_8;
                    /* try { // try from 001ffddc to 001ffde7 has its CatchHandler @ 001ffe78 */
  JsObject::JsObject((JsObject *)&local_30,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 001ffe10 to 001ffe23 has its CatchHandler @ 001ffe54 */
  uVar1 = JsObject::get_throwing<unsigned_long,char_const*>((Runtime *)&local_30,(char *)this);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30);
  }
  return uVar1;
}


// ===== 001ffeb0  discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::variant<discord::api::Operation::CreateHandle,discord::api::Operation::CloseHandle,discord::api::Operation::DeleteDatabase,discord::api::Operation::ListDatabases,discord::api::Operation::Optimize,discord::api::Operation::GetState,discord::api::Operation::Disable,discord::api::Operation::Execute,discord::api::Operation::Transaction,discord::api::Operation::Vacuum,discord::api::Operation::FsInfo,discord::api::Operation::MetaGetOne,discord::api::Operation::MetaGetAll,discord::api::Operation::MetaPut,discord::api::Operation::MetaDelete,discord::api::Operation::GetMany,discord::api::Operation::GetRange,discord::api::Operation::GetKvEntries,discord::api::Operation::GetMapEntries,discord::api::Operation::GetChildIds,discord::api::Operation::GetParentId,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   std::__ndk1::variant<discord::api::Operation::CreateHandle, discord::api::Operation::CloseHandle,
   discord::api::Operation::DeleteDatabase, discord::api::Operation::ListDatabases,
   discord::api::Operation::Optimize, discord::api::Operation::GetState,
   discord::api::Operation::Disable, discord::api::Operation::Execute,
   discord::api::Operation::Transaction, discord::api::Operation::Vacuum,
   discord::api::Operation::FsInfo, discord::api::Operation::MetaGetOne,
   discord::api::Operation::MetaGetAll, discord::api::Operation::MetaPut,
   discord::api::Operation::MetaDelete, discord::api::Operation::GetMany,
   discord::api::Operation::GetRange, discord::api::Operation::GetKvEntries,
   discord::api::Operation::GetMapEntries, discord::api::Operation::GetChildIds,
   discord::api::Operation::GetParentId, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >),
   std::__ndk1::variant<discord::api::Operation::CreateHandle, discord::api::Operation::CloseHandle,
   discord::api::Operation::DeleteDatabase, discord::api::Operation::ListDatabases,
   discord::api::Operation::Optimize, discord::api::Operation::GetState,
   discord::api::Operation::Disable, discord::api::Operation::Execute,
   discord::api::Operation::Transaction, discord::api::Operation::Vacuum,
   discord::api::Operation::FsInfo, discord::api::Operation::MetaGetOne,
   discord::api::Operation::MetaGetAll, discord::api::Operation::MetaPut,
   discord::api::Operation::MetaDelete, discord::api::Operation::GetMany,
   discord::api::Operation::GetRange, discord::api::Operation::GetKvEntries,
   discord::api::Operation::GetMapEntries, discord::api::Operation::GetChildIds,
   discord::api::Operation::GetParentId, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::variant<discord::api::Operation::CreateHandle,
   discord::api::Operation::CloseHandle, discord::api::Operation::DeleteDatabase,
   discord::api::Operation::ListDatabases, discord::api::Operation::Optimize,
   discord::api::Operation::GetState, discord::api::Operation::Disable,
   discord::api::Operation::Execute, discord::api::Operation::Transaction,
   discord::api::Operation::Vacuum, discord::api::Operation::FsInfo,
   discord::api::Operation::MetaGetOne, discord::api::Operation::MetaGetAll,
   discord::api::Operation::MetaPut, discord::api::Operation::MetaDelete,
   discord::api::Operation::GetMany, discord::api::Operation::GetRange,
   discord::api::Operation::GetKvEntries, discord::api::Operation::GetMapEntries,
   discord::api::Operation::GetChildIds, discord::api::Operation::GetParentId,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<std::__ndk1::variant<discord::api::Operation::CreateHandle,discord::api::Operation::CloseHandle,discord::api::Operation::DeleteDatabase,discord::api::Operation::ListDatabases,discord::api::Operation::Optimize,discord::api::Operation::GetState,discord::api::Operation::Disable,discord::api::Operation::Execute,discord::api::Operation::Transaction,discord::api::Operation::Vacuum,discord::api::Operation::FsInfo,discord::api::Operation::MetaGetOne,discord::api::Operation::MetaGetAll,discord::api::Operation::MetaPut,discord::api::Operation::MetaDelete,discord::api::Operation::GetMany,discord::api::Operation::GetRange,discord::api::Operation::GetKvEntries,discord::api::Operation::GetMapEntries,discord::api::Operation::GetChildIds,discord::api::Operation::GetParentId,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>
               (Runtime *param_1,Value *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  JSError *pJVar5;
  Value *in_x2;
  Value *pVVar6;
  undefined4 uVar7;
  undefined1 (*in_x8) [16];
  undefined1 auVar8 [16];
  undefined1 auStack_338 [24];
  undefined8 *local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined8 *local_58;
  ulong local_50;
  long *local_48;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_58 = local_320;
  local_320 = (undefined8 *)0x0;
                    /* try { // try from 001ffee8 to 001ffef3 has its CatchHandler @ 00200870 */
  JsObject::JsObject((JsObject *)&local_28,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)();
  }
  if (local_320 != (undefined8 *)0x0) {
    (**(code **)*local_320)();
  }
                    /* try { // try from 001fff1c to 001fff33 has its CatchHandler @ 00200850 */
  pVVar6 = (Value *)&DAT_00175616;
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_28,(char *)param_1);
  uVar4 = (ulong)local_58 >> 1 & 0x7f;
  if (((ulong)local_58 & 1) != 0) {
    uVar4 = local_50;
  }
  if ((long)uVar4 < 10) {
    if (uVar4 == 8) {
      plVar1 = (long *)((ulong)&local_58 | 1);
      if (((ulong)local_58 & 1) != 0) {
        plVar1 = local_48;
      }
      if (*plVar1 != 0x65746174732e6264) goto LAB_00200108;
                    /* try { // try from 00200064 to 0020006f has its CatchHandler @ 00200828 */
      uVar3 = from_throwing<discord::api::Operation::GetState>
                        ((Deserialize *)param_1,(Runtime *)param_2,pVVar6);
      *(undefined8 *)*in_x8 = uVar3;
      uVar7 = 5;
    }
    else {
      if (uVar4 == 9) {
        plVar1 = (long *)((ulong)&local_58 | 1);
        if (((ulong)local_58 & 1) != 0) {
          plVar1 = local_48;
        }
        if (*plVar1 == 0x75756361762e6264 && (char)plVar1[1] == 'm') {
                    /* try { // try from 001fff9c to 001fffa7 has its CatchHandler @ 00200830 */
          auVar8 = from_throwing<discord::api::Operation::Vacuum>
                             ((Deserialize *)param_1,(Runtime *)param_2,pVVar6);
          uVar7 = 9;
          *in_x8 = auVar8;
          goto LAB_0020016c;
        }
      }
LAB_00200108:
      uVar4 = FUN_0020187c(&local_58,"meta.get");
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 0020011c to 0020012b has its CatchHandler @ 00200838 */
        from_throwing<discord::api::Operation::MetaGetOne>(param_1,param_2);
        uVar3 = CONCAT44(uStack_314,local_318);
        *(undefined8 **)*in_x8 = local_320;
        uVar7 = 0xb;
        goto LAB_00200140;
      }
      uVar4 = FUN_0020187c(&local_58,"meta.get_all");
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_0020187c(&local_58,"meta.put");
        if ((uVar4 & 1) != 0) {
                    /* try { // try from 002001c0 to 002001cf has its CatchHandler @ 00200834 */
          from_throwing<discord::api::Operation::MetaPut>(param_1,param_2);
          _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISH_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESH_Lm13ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                    ();
          api::Operation::MetaPut::~MetaPut((MetaPut *)&local_320);
          goto LAB_00200170;
        }
        uVar4 = FUN_0020187c(&local_58,"meta.delete");
        if ((uVar4 & 1) != 0) {
                    /* try { // try from 002001fc to 0020020b has its CatchHandler @ 0020081c */
          from_throwing<discord::api::Operation::MetaDelete>(param_1,param_2);
          _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISI_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESI_Lm14ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                    ();
          api::Operation::MetaDelete::~MetaDelete((MetaDelete *)&local_320);
          goto LAB_00200170;
        }
        uVar4 = FUN_0020187c(&local_58,"kv.get_many");
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_0020187c(&local_58,"kv.get_range");
          if ((uVar4 & 1) == 0) {
            uVar4 = FUN_0020187c(&local_58,"kv.get_kv_entries");
            if ((uVar4 & 1) == 0) {
              uVar4 = FUN_0020187c(&local_58,"kv.get_map_entries");
              if ((uVar4 & 1) == 0) {
                uVar4 = FUN_0020187c(&local_58,"kv.get_child_ids");
                if ((uVar4 & 1) == 0) {
                  uVar4 = FUN_0020187c(&local_58,"kv.get_parent_id");
                  if ((uVar4 & 1) == 0) {
                    uVar4 = FUN_0020187c(&local_58,"kv.put_one");
                    if ((uVar4 & 1) != 0) {
                    /* try { // try from 0020047c to 0020048b has its CatchHandler @ 002007fc */
                      from_throwing<discord::api::Operation::PutOne>(param_1,param_2);
                      _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISP_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESP_Lm21ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                                ();
                      api::Operation::PutOne::~PutOne((PutOne *)&local_320);
                      goto LAB_00200170;
                    }
                    uVar4 = FUN_0020187c(&local_58,"kv.put_many");
                    if ((uVar4 & 1) != 0) {
                    /* try { // try from 002004b8 to 002004c7 has its CatchHandler @ 002007f8 */
                      from_throwing<discord::api::Operation::PutMany>(param_1,param_2);
                      uVar2 = local_308;
                      uVar3 = uStack_310;
                      uStack_310 = 0;
                      local_308 = 0;
                      *(undefined8 **)*in_x8 = local_320;
                      *(undefined4 *)(*in_x8 + 8) = local_318;
                      *(undefined8 *)in_x8[2] = local_300;
                      *(undefined8 *)(in_x8[1] + 8) = uVar2;
                      *(undefined8 *)in_x8[1] = uVar3;
                      in_x8[2][8] = local_2f8;
                      local_300 = 0;
                      *(undefined4 *)(in_x8[0x2c] + 8) = 0x16;
                      api::Operation::PutMany::~PutMany((PutMany *)&local_320);
                      goto LAB_00200170;
                    }
                    uVar4 = FUN_0020187c(&local_58,"kv.delete_many");
                    if ((uVar4 & 1) == 0) {
                      uVar4 = FUN_0020187c(&local_58,"kv.delete_all_except");
                      if ((uVar4 & 1) != 0) {
                    /* try { // try from 0020056c to 0020057b has its CatchHandler @ 002007f0 */
                        from_throwing<discord::api::Operation::DeleteAllExcept>(param_1,param_2);
                        _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISS_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESS_Lm24ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                                  ();
                        api::Operation::DeleteAllExcept::~DeleteAllExcept
                                  ((DeleteAllExcept *)&local_320);
                        goto LAB_00200170;
                      }
                      uVar4 = FUN_0020187c(&local_58,"kv.delete_range");
                      if ((uVar4 & 1) == 0) {
                        uVar4 = FUN_0020187c(&local_58,"kv.delete_generation");
                        if ((uVar4 & 1) != 0) {
                    /* try { // try from 002005e0 to 002005ef has its CatchHandler @ 002007e8 */
                          from_throwing<discord::api::Operation::DeleteGeneration>(param_1,param_2);
                          _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISU_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESU_Lm26ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                                    ();
                          api::Operation::DeleteGeneration::~DeleteGeneration
                                    ((DeleteGeneration *)&local_320);
                          goto LAB_00200170;
                        }
                        uVar4 = FUN_0020187c(&local_58,"messages.get_latest");
                        if ((uVar4 & 1) != 0) {
                    /* try { // try from 0020061c to 0020062b has its CatchHandler @ 002007e4 */
                          from_throwing<discord::api::Operation::MessagesGetLatest>(param_1,param_2)
                          ;
                          _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISV_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESV_Lm27ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                                    ();
                          api::Operation::MessagesGetLatest::~MessagesGetLatest
                                    ((MessagesGetLatest *)&local_320);
                          goto LAB_00200170;
                        }
                        uVar4 = FUN_0020187c(&local_58,"messages.trim_orphans");
                        if ((uVar4 & 1) != 0) {
                    /* try { // try from 00200658 to 00200667 has its CatchHandler @ 002007e0 */
                          from_throwing<discord::api::Operation::MessagesTrimOrphans>
                                    (param_1,param_2);
                          _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISW_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESW_Lm28ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                                    ();
                          api::Operation::MessagesTrimOrphans::~MessagesTrimOrphans
                                    ((MessagesTrimOrphans *)&local_320);
                          goto LAB_00200170;
                        }
                        uVar4 = FUN_0020187c(&local_58,"messages.trim_channel");
                        if ((uVar4 & 1) == 0) {
                          uVar4 = FUN_0020187c(&local_58,"messages.trim_channels_in");
                          if ((uVar4 & 1) == 0) {
                            uVar4 = FUN_0020187c(&local_58,"messages.trim_channels_not_in");
                            if ((uVar4 & 1) == 0) {
                              pJVar5 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0020075c to 0020076f has its CatchHandler @ 002007c4 */
                              std::__ndk1::operator+
                                        ("unknown operation type: ",(basic_string *)&local_58);
                    /* try { // try from 00200774 to 0020079f has its CatchHandler @ 002007a0 */
                              facebook::jsi::JSError::JSError(pJVar5,param_1,auStack_338);
                    /* WARNING: Subroutine does not return */
                              __cxa_throw(pJVar5,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
                            }
                    /* try { // try from 00200728 to 00200737 has its CatchHandler @ 002007d4 */
                            from_throwing<discord::api::Operation::MessagesTrimChannelsNotIn>
                                      (param_1,param_2);
                            _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISZ_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESZ_Lm31ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                                      ();
                            api::Operation::MessagesTrimChannelsNotIn::~MessagesTrimChannelsNotIn
                                      ((MessagesTrimChannelsNotIn *)&local_320);
                          }
                          else {
                    /* try { // try from 002006ec to 002006fb has its CatchHandler @ 002007d8 */
                            from_throwing<discord::api::Operation::MessagesTrimChannelsIn>
                                      (param_1,param_2);
                            _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISY_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESY_Lm30ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                                      ();
                            api::Operation::MessagesTrimChannelsIn::~MessagesTrimChannelsIn
                                      ((MessagesTrimChannelsIn *)&local_320);
                          }
                          goto LAB_00200170;
                        }
                    /* try { // try from 00200694 to 002006a7 has its CatchHandler @ 002007dc */
                        from_throwing<discord::api::Operation::MessagesTrimChannel>(param_1,param_2)
                        ;
                        *(undefined8 **)*in_x8 = local_320;
                        *(undefined4 *)(*in_x8 + 8) = local_318;
                        api::Key::Key((Key *)(in_x8 + 1),(Key *)&uStack_310);
                        *(undefined4 *)(in_x8[0x2c] + 8) = 0x1d;
                        *(undefined4 *)in_x8[0x16] = local_1c0;
                        goto LAB_0020045c;
                      }
                    /* try { // try from 002005a8 to 002005bb has its CatchHandler @ 002007ec */
                      from_throwing<discord::api::Operation::DeleteRange>(param_1,param_2);
                      _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000IST_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0EST_Lm25ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                                ();
                      goto LAB_00200320;
                    }
                    /* try { // try from 00200520 to 00200533 has its CatchHandler @ 002007f4 */
                    from_throwing<discord::api::Operation::DeleteMany>(param_1,param_2);
                    *(undefined8 **)*in_x8 = local_320;
                    *(undefined4 *)(*in_x8 + 8) = local_318;
                    api::Key::Key((Key *)(in_x8 + 1),(Key *)&uStack_310);
                    uVar7 = 0x17;
                  }
                  else {
                    /* try { // try from 00200424 to 00200437 has its CatchHandler @ 00200800 */
                    from_throwing<discord::api::Operation::GetParentId>(param_1,param_2);
                    *(undefined8 **)*in_x8 = local_320;
                    *(undefined4 *)(*in_x8 + 8) = local_318;
                    api::Key::Key((Key *)(in_x8 + 1),(Key *)&uStack_310);
                    uVar7 = 0x14;
                  }
                }
                else {
                    /* try { // try from 002003d8 to 002003eb has its CatchHandler @ 00200804 */
                  from_throwing<discord::api::Operation::GetChildIds>(param_1,param_2);
                  *(undefined8 **)*in_x8 = local_320;
                  *(undefined4 *)(*in_x8 + 8) = local_318;
                  api::Key::Key((Key *)(in_x8 + 1),(Key *)&uStack_310);
                  uVar7 = 0x13;
                }
              }
              else {
                    /* try { // try from 0020038c to 0020039f has its CatchHandler @ 00200808 */
                from_throwing<discord::api::Operation::GetMapEntries>(param_1,param_2);
                *(undefined8 **)*in_x8 = local_320;
                *(undefined4 *)(*in_x8 + 8) = local_318;
                api::Key::Key((Key *)(in_x8 + 1),(Key *)&uStack_310);
                uVar7 = 0x12;
              }
            }
            else {
                    /* try { // try from 00200340 to 00200353 has its CatchHandler @ 0020080c */
              from_throwing<discord::api::Operation::GetKvEntries>(param_1,param_2);
              *(undefined8 **)*in_x8 = local_320;
              *(undefined4 *)(*in_x8 + 8) = local_318;
              api::Key::Key((Key *)(in_x8 + 1),(Key *)&uStack_310);
              uVar7 = 0x11;
            }
            *(undefined4 *)(in_x8[0x2c] + 8) = uVar7;
          }
          else {
                    /* try { // try from 00200300 to 00200313 has its CatchHandler @ 00200810 */
            from_throwing<discord::api::Operation::GetRange>(param_1,param_2);
            _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISK_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESK_Lm16ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
                      ();
LAB_00200320:
            api::Key::~Key((Key *)&local_1c0);
          }
        }
        else {
                    /* try { // try from 00200288 to 0020029b has its CatchHandler @ 00200814 */
          from_throwing<discord::api::Operation::GetMany>(param_1,param_2);
          *(undefined8 **)*in_x8 = local_320;
          *(undefined4 *)(*in_x8 + 8) = local_318;
          api::Key::Key((Key *)(in_x8 + 1),(Key *)&uStack_310);
          *(undefined4 *)(in_x8[0x2c] + 8) = 0xf;
          *(undefined8 *)(in_x8[0x16] + 8) = uStack_1b8;
          *(ulong *)in_x8[0x16] = CONCAT44(uStack_1bc,local_1c0);
          in_x8[0x17][0] = local_1b0;
        }
LAB_0020045c:
        api::Key::~Key((Key *)&uStack_310);
        goto LAB_00200170;
      }
      uVar7 = 0xc;
      *(undefined8 *)(*in_x8 + 8) = 0;
      *(undefined8 *)*in_x8 = 0;
      *(undefined8 *)(in_x8[1] + 8) = 0;
      *(undefined8 *)in_x8[1] = 0;
    }
  }
  else {
    if (uVar4 != 10) {
      if (uVar4 == 0xe) {
        plVar1 = (long *)((ulong)&local_58 | 1);
        if (((ulong)local_58 & 1) != 0) {
          plVar1 = local_48;
        }
        if (*plVar1 == 0x736e6172742e6264 && *(long *)((long)plVar1 + 6) == 0x6e6f69746361736e) {
                    /* try { // try from 0020000c to 0020001b has its CatchHandler @ 0020082c */
          from_throwing<discord::api::Operation::Transaction>(param_1,param_2);
          uVar3 = CONCAT44(uStack_314,local_318);
          *(undefined8 **)*in_x8 = local_320;
          uVar7 = 8;
          goto LAB_00200140;
        }
      }
      goto LAB_00200108;
    }
    plVar1 = (long *)((ulong)&local_58 | 1);
    if (((ulong)local_58 & 1) != 0) {
      plVar1 = local_48;
    }
    if (*plVar1 == 0x62617369642e6264 && (short)plVar1[1] == 0x656c) {
                    /* try { // try from 00200224 to 00200233 has its CatchHandler @ 00200824 */
      from_throwing<discord::api::Operation::Disable>(param_1,param_2);
      uVar3 = CONCAT44(uStack_314,local_318);
      *(undefined8 **)*in_x8 = local_320;
      uVar7 = 6;
    }
    else {
      if (*plVar1 != 0x75636578652e6264 || (short)plVar1[1] != 0x6574) {
        if (*plVar1 == 0x6e695f73662e6264 && (short)plVar1[1] == 0x6f66) {
                    /* try { // try from 002002d4 to 002002df has its CatchHandler @ 00200818 */
          uVar3 = from_throwing<discord::api::Operation::FsInfo>
                            ((Deserialize *)param_1,(Runtime *)param_2,pVVar6);
          *(undefined8 *)*in_x8 = uVar3;
          uVar7 = 10;
          goto LAB_0020016c;
        }
        goto LAB_00200108;
      }
                    /* try { // try from 0020024c to 0020025b has its CatchHandler @ 00200820 */
      from_throwing<discord::api::Operation::Execute>(param_1,param_2);
      uVar3 = CONCAT44(uStack_314,local_318);
      *(undefined8 **)*in_x8 = local_320;
      uVar7 = 7;
    }
LAB_00200140:
    *(undefined8 *)in_x8[1] = uStack_310;
    *(undefined8 *)(*in_x8 + 8) = uVar3;
    *(undefined8 *)(in_x8[1] + 8) = local_308;
  }
LAB_0020016c:
  *(undefined4 *)(in_x8[0x2c] + 8) = uVar7;
LAB_00200170:
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
  return;
}


// ===== 00200898  discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>> =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   std::__ndk1::variant<discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >),
   std::__ndk1::variant<discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>
               (Runtime *param_1,Value *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  JSError *pJVar4;
  Value *in_x2;
  undefined4 uVar5;
  undefined8 *in_x8;
  undefined1 auStack_328 [24];
  undefined8 *local_310;
  ulong local_308;
  undefined8 uStack_300;
  void *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [40];
  uint local_2c0;
  undefined4 local_1b0 [2];
  undefined1 auStack_1a8 [40];
  uint local_180;
  long *local_178;
  long local_170;
  long local_168;
  undefined1 local_160;
  undefined8 *local_60;
  ulong local_58;
  long *local_50;
  undefined8 *local_48;
  undefined1 uStack_21;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  local_60 = local_310;
  local_310 = (undefined8 *)0x0;
                    /* try { // try from 002008d0 to 002008db has its CatchHandler @ 00201114 */
  JsObject::JsObject((JsObject *)&local_48,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (local_310 != (undefined8 *)0x0) {
    (**(code **)*local_310)();
  }
                    /* try { // try from 00200904 to 0020091b has its CatchHandler @ 002010f4 */
  JsObject::
  get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            ((Runtime *)&local_48,(char *)param_1);
  uVar3 = (ulong)local_60 >> 1 & 0x7f;
  if (((ulong)local_60 & 1) != 0) {
    uVar3 = local_58;
  }
  if ((long)uVar3 < 0xb) {
    if (uVar3 == 8) {
      plVar1 = (long *)((ulong)&local_60 | 1);
      if (((ulong)local_60 & 1) != 0) {
        plVar1 = local_50;
      }
      if (*plVar1 == 0x7475702e6174656d) {
                    /* try { // try from 00200b14 to 00200b23 has its CatchHandler @ 002010c8 */
        from_throwing<discord::api::Operation::MetaPut>(param_1,param_2);
        uVar2 = uStack_300;
        uVar3 = local_308;
        local_308 = 0;
        uStack_300 = 0;
        *in_x8 = local_310;
        in_x8[3] = local_2f8;
        in_x8[2] = uVar2;
        in_x8[1] = uVar3;
        local_2f8 = (void *)0x0;
        *(undefined4 *)(in_x8 + 10) = 0xffffffff;
        *(undefined1 *)(in_x8 + 5) = 0;
        if (local_2c0 == 0xffffffff) {
          uVar5 = 2;
LAB_00200ecc:
          local_2f8 = (void *)0x0;
          uStack_300 = 0;
          local_308 = 0;
          *(undefined4 *)(in_x8 + 0x56) = uVar5;
        }
        else {
                    /* try { // try from 00200b70 to 00200b7b has its CatchHandler @ 002010b8 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                    )[local_2c0])(&uStack_21,in_x8 + 5,local_2e8);
          *(undefined4 *)(in_x8 + 0x56) = 2;
          *(uint *)(in_x8 + 10) = local_2c0;
          if (local_2c0 != 0xffffffff) {
                    /* try { // try from 00200ba0 to 00200bab has its CatchHandler @ 002010a4 */
            (*(code *)(&PTR_FUN_0030a400)[local_2c0])(&uStack_21,local_2e8);
          }
        }
LAB_00200ed0:
        local_2c0 = 0xffffffff;
        if ((local_308 & 1) != 0) {
          operator_delete(local_2f8);
        }
        goto joined_r0x00200cfc;
      }
    }
    else if (uVar3 == 10) {
      plVar1 = (long *)((ulong)&local_60 | 1);
      if (((ulong)local_60 & 1) != 0) {
        plVar1 = local_50;
      }
      if (*plVar1 == 0x75636578652e6264 && (short)plVar1[1] == 0x6574) {
                    /* try { // try from 00200d48 to 00200d57 has its CatchHandler @ 002010cc */
        from_throwing<discord::api::Operation::Execute>(param_1,param_2);
        *(undefined4 *)(in_x8 + 0x56) = 0;
        *in_x8 = local_310;
        in_x8[2] = uStack_300;
        in_x8[1] = local_308;
        in_x8[3] = local_2f8;
        goto joined_r0x00200cfc;
      }
      if (*plVar1 == 0x6f5f7475702e766b && (short)plVar1[1] == 0x656e) {
                    /* try { // try from 002009ac to 002009bf has its CatchHandler @ 002010c0 */
        from_throwing<discord::api::Operation::PutOne>(param_1,param_2);
        *in_x8 = local_310;
        *(undefined4 *)(in_x8 + 1) = (undefined4)local_308;
        api::Key::Key((Key *)(in_x8 + 2),(Key *)&uStack_300);
        *(undefined1 *)(in_x8 + 0x2d) = 0;
        *(undefined4 *)(in_x8 + 0x32) = 0xffffffff;
        if (local_180 != 0xffffffff) {
                    /* try { // try from 00200a04 to 00200a13 has its CatchHandler @ 002010ac */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                    )[local_180])(&uStack_21,in_x8 + 0x2d,auStack_1a8);
          *(uint *)(in_x8 + 0x32) = local_180;
        }
        in_x8[0x33] = local_178;
        in_x8[0x34] = local_170;
        in_x8[0x35] = local_168;
        if (local_168 == 0) {
          in_x8[0x33] = in_x8 + 0x34;
        }
        else {
          local_178 = &local_170;
          *(undefined8 **)(local_170 + 0x10) = in_x8 + 0x34;
          local_170 = 0;
          local_168 = 0;
        }
        *(undefined4 *)(in_x8 + 0x56) = 3;
        *(undefined1 *)(in_x8 + 0x36) = local_160;
        FUN_001b553c(&local_178,local_170);
        if (local_180 != 0xffffffff) {
                    /* try { // try from 00200fa4 to 00200faf has its CatchHandler @ 002010a8 */
          (*(code *)(&PTR_FUN_0030a400)[local_180])(&uStack_21,auStack_1a8);
        }
        local_180 = 0xffffffff;
        goto LAB_00200fb8;
      }
    }
LAB_00200c2c:
    uVar3 = FUN_0020187c(&local_60,"kv.delete_all_except");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00200c40 to 00200c4f has its CatchHandler @ 002010dc */
      from_throwing<discord::api::Operation::DeleteAllExcept>(param_1,param_2);
      _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISA_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESA_Lm6ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
                ();
      api::Operation::DeleteAllExcept::~DeleteAllExcept((DeleteAllExcept *)&local_310);
      goto joined_r0x00200cfc;
    }
    uVar3 = FUN_0020187c(&local_60,"kv.delete_range");
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_0020187c(&local_60,"kv.delete_generation");
      if ((uVar3 & 1) != 0) {
                    /* try { // try from 00200cd4 to 00200ce3 has its CatchHandler @ 002010d4 */
        from_throwing<discord::api::Operation::DeleteGeneration>(param_1,param_2);
        _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISC_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESC_Lm8ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
                  ();
        api::Operation::DeleteGeneration::~DeleteGeneration((DeleteGeneration *)&local_310);
        goto joined_r0x00200cfc;
      }
      uVar3 = FUN_0020187c(&local_60,"messages.trim_orphans");
      if ((uVar3 & 1) != 0) {
                    /* try { // try from 00200d18 to 00200d27 has its CatchHandler @ 002010b0 */
        from_throwing<discord::api::Operation::MessagesTrimOrphans>(param_1,param_2);
        _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISE_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESE_Lm10ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
                  ();
        api::Operation::MessagesTrimOrphans::~MessagesTrimOrphans((MessagesTrimOrphans *)&local_310)
        ;
        goto joined_r0x00200cfc;
      }
      uVar3 = FUN_0020187c(&local_60,"messages.trim_channel");
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_0020187c(&local_60,"messages.trim_channels_in");
        if ((uVar3 & 1) == 0) {
          uVar3 = FUN_0020187c(&local_60,"messages.trim_channels_not_in");
          if ((uVar3 & 1) == 0) {
            pJVar4 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0020101c to 0020102f has its CatchHandler @ 00201084 */
            std::__ndk1::operator+("unknown operation type: ",(basic_string *)&local_60);
                    /* try { // try from 00201034 to 0020105f has its CatchHandler @ 00201060 */
            facebook::jsi::JSError::JSError(pJVar4,param_1,auStack_328);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pJVar4,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
          }
                    /* try { // try from 00200fe0 to 00200fef has its CatchHandler @ 00201094 */
          from_throwing<discord::api::Operation::MessagesTrimChannelsNotIn>(param_1,param_2);
          _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISH_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESH_Lm13ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
                    ();
          api::Operation::MessagesTrimChannelsNotIn::~MessagesTrimChannelsNotIn
                    ((MessagesTrimChannelsNotIn *)&local_310);
        }
        else {
                    /* try { // try from 00200f3c to 00200f4b has its CatchHandler @ 00201098 */
          from_throwing<discord::api::Operation::MessagesTrimChannelsIn>(param_1,param_2);
          _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISG_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESG_Lm12ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
                    ();
          api::Operation::MessagesTrimChannelsIn::~MessagesTrimChannelsIn
                    ((MessagesTrimChannelsIn *)&local_310);
        }
        goto joined_r0x00200cfc;
      }
                    /* try { // try from 00200e7c to 00200e8f has its CatchHandler @ 0020109c */
      from_throwing<discord::api::Operation::MessagesTrimChannel>(param_1,param_2);
      *in_x8 = local_310;
      *(undefined4 *)(in_x8 + 1) = (undefined4)local_308;
      api::Key::Key((Key *)(in_x8 + 2),(Key *)&uStack_300);
      *(undefined4 *)(in_x8 + 0x56) = 0xb;
      *(undefined4 *)(in_x8 + 0x2c) = local_1b0[0];
    }
    else {
                    /* try { // try from 00200c94 to 00200ca7 has its CatchHandler @ 002010d8 */
      from_throwing<discord::api::Operation::DeleteRange>(param_1,param_2);
      _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISB_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESB_Lm7ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
                ();
      api::Key::~Key((Key *)local_1b0);
    }
  }
  else {
    if (uVar3 == 0xb) {
      plVar1 = (long *)((ulong)&local_60 | 1);
      if (((ulong)local_60 & 1) != 0) {
        plVar1 = local_50;
      }
      if (*plVar1 == 0x6c65642e6174656d && *(long *)((long)plVar1 + 3) == 0x6574656c65642e61) {
                    /* try { // try from 00200d80 to 00200d8f has its CatchHandler @ 002010c4 */
        from_throwing<discord::api::Operation::MetaDelete>(param_1,param_2);
        uVar2 = uStack_300;
        uVar3 = local_308;
        local_308 = 0;
        uStack_300 = 0;
        *in_x8 = local_310;
        in_x8[3] = local_2f8;
        in_x8[2] = uVar2;
        in_x8[1] = uVar3;
        local_2f8 = (void *)0x0;
        *(undefined4 *)(in_x8 + 10) = 0xffffffff;
        *(undefined1 *)(in_x8 + 5) = 0;
        if (local_2c0 == 0xffffffff) {
          uVar5 = 1;
          goto LAB_00200ecc;
        }
                    /* try { // try from 00200ddc to 00200de7 has its CatchHandler @ 002010b4 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                  )[local_2c0])(&uStack_21,in_x8 + 5,local_2e8);
        *(undefined4 *)(in_x8 + 0x56) = 1;
        *(uint *)(in_x8 + 10) = local_2c0;
        if (local_2c0 != 0xffffffff) {
                    /* try { // try from 00200e0c to 00200e17 has its CatchHandler @ 002010a0 */
          (*(code *)(&PTR_FUN_0030a400)[local_2c0])(&uStack_21,local_2e8);
        }
        goto LAB_00200ed0;
      }
      if (*plVar1 == 0x6d5f7475702e766b && *(long *)((long)plVar1 + 3) == 0x796e616d5f747570) {
                    /* try { // try from 00200e1c to 00200e2b has its CatchHandler @ 002010bc */
        from_throwing<discord::api::Operation::PutMany>(param_1,param_2);
        *in_x8 = local_310;
        *(undefined4 *)(in_x8 + 1) = (undefined4)local_308;
        in_x8[4] = local_2f0;
        in_x8[3] = local_2f8;
        in_x8[2] = uStack_300;
        *(undefined1 *)(in_x8 + 5) = local_2e8[0];
        *(undefined4 *)(in_x8 + 0x56) = 4;
        goto joined_r0x00200cfc;
      }
      goto LAB_00200c2c;
    }
    if (uVar3 != 0xe) goto LAB_00200c2c;
    plVar1 = (long *)((ulong)&local_60 | 1);
    if (((ulong)local_60 & 1) != 0) {
      plVar1 = local_50;
    }
    if (*plVar1 != 0x74656c65642e766b || *(long *)((long)plVar1 + 6) != 0x796e616d5f657465)
    goto LAB_00200c2c;
                    /* try { // try from 00200aa8 to 00200abb has its CatchHandler @ 002010d0 */
    from_throwing<discord::api::Operation::DeleteMany>(param_1,param_2);
    *in_x8 = local_310;
    *(undefined4 *)(in_x8 + 1) = (undefined4)local_308;
    api::Key::Key((Key *)(in_x8 + 2),(Key *)&uStack_300);
    *(undefined4 *)(in_x8 + 0x56) = 5;
  }
LAB_00200fb8:
  api::Key::~Key((Key *)&uStack_300);
joined_r0x00200cfc:
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  return;
}


// ===== 0020113c  discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsOptions> =====

/* WARNING: Removing unreachable block (ram,0x002011a0) */
/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   discord::frontends::jsi::JsOptions>), discord::frontends::jsi::JsOptions>::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsOptions>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

bool __thiscall
discord::frontends::jsi::codec::Deserialize::from_throwing<discord::frontends::jsi::JsOptions>
          (Deserialize *this,Runtime *param_1,Value *param_2)

{
  bool bVar1;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_8;
  
  if (*(uint *)param_1 < 2) {
    bVar1 = false;
  }
  else {
    from_throwing<facebook::jsi::Object>(this,param_1,param_2);
    local_28 = local_8;
                    /* try { // try from 00201178 to 00201183 has its CatchHandler @ 00201218 */
    JsObject::JsObject((JsObject *)&local_30,&local_28);
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)();
    }
                    /* try { // try from 002011ac to 002011bf has its CatchHandler @ 002011f4 */
    bVar1 = JsObject::get_throwing<bool,char_const*>((Runtime *)&local_30,(char *)this);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30);
    }
  }
  return bVar1;
}


// ===== 00201250  discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,discord::raw::RawValue>>>> =====

/* std::__ndk1::enable_if<!(is_specialization_of_v<std::__ndk1::optional,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, discord::raw::RawValue,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, discord::raw::RawValue> > >
   >), std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, discord::raw::RawValue,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, discord::raw::RawValue> > >
   >::type
   discord::frontends::jsi::codec::Deserialize::from_throwing<std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, discord::raw::RawValue,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_throwing<std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,discord::raw::RawValue>>>>
               (Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  Value *in_x2;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>>>
  *in_x8;
  long lVar6;
  undefined8 *local_100;
  undefined1 auStack_f8 [40];
  uint local_d0;
  Value aVStack_c8 [16];
  basic_string local_b8 [8];
  ulong local_b0;
  int *local_a8;
  int local_a0 [4];
  undefined8 *local_90;
  undefined8 *local_88;
  __tree_node_base *local_80 [3];
  __tree_end_node *local_68;
  
  from_throwing<facebook::jsi::Object>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>>>
    **)in_x8 = in_x8 + 8;
                    /* try { // try from 00201290 to 0020129f has its CatchHandler @ 002014d4 */
  JsEnum::keys(param_1,(Object *)&local_88);
                    /* try { // try from 002012a8 to 002012b3 has its CatchHandler @ 002014d0 */
  lVar3 = (**(code **)(*(long *)param_1 + 0x240))(param_1,&local_90);
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
                    /* try { // try from 002012fc to 0020130f has its CatchHandler @ 00201548 */
      (**(code **)(*(long *)param_1 + 0x260))(local_a0,param_1,&local_90,lVar6);
      if (local_a0[0] == 6) {
                    /* try { // try from 0020131c to 0020132b has its CatchHandler @ 002014e8 */
        from_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  (param_1,(Value *)local_a0);
                    /* try { // try from 0020132c to 0020133b has its CatchHandler @ 00201510 */
        facebook::jsi::Value::asString((IRuntime *)local_a0);
                    /* try { // try from 00201344 to 00201357 has its CatchHandler @ 002014f0 */
        (**(code **)(*(long *)param_1 + 0x188))(aVStack_c8,param_1,&local_88,&local_100);
        if (local_100 != (undefined8 *)0x0) {
          (**(code **)*local_100)();
        }
        uVar1 = (ulong)((byte)local_b8[0] >> 1);
        if (((byte)local_b8[0] & 1) != 0) {
          uVar1 = local_b0;
        }
        if (uVar1 == 4) {
          piVar2 = (int *)((ulong)local_b8 | 1);
          if (((byte)local_b8[0] & 1) != 0) {
            piVar2 = local_a8;
          }
          if (*piVar2 != 0x61746164) goto LAB_002013d4;
        }
        else {
          if (uVar1 == 3) {
            piVar2 = (int *)((ulong)local_b8 | 1);
            if (((byte)local_b8[0] & 1) != 0) {
              piVar2 = local_a8;
            }
            if ((short)*piVar2 == 0x656b && *(char *)((long)piVar2 + 2) == 'y') goto LAB_0020146c;
          }
LAB_002013d4:
                    /* try { // try from 002013d4 to 002013e3 has its CatchHandler @ 002014e0 */
          from_throwing<discord::raw::RawValue>(param_1,aVStack_c8);
                    /* try { // try from 002013e4 to 00201413 has its CatchHandler @ 00201518 */
          pp_Var4 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>>>
                    ::
                    __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              (in_x8,&local_68,local_b8);
          if (*pp_Var4 == (__tree_node_base *)0x0) {
            std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>>>
            ::
            __construct_node<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,discord::raw::RawValue>
                      ((basic_string *)in_x8,local_b8);
            *(undefined8 *)local_80[0] = 0;
            *(undefined8 *)(local_80[0] + 8) = 0;
            *(__tree_end_node **)(local_80[0] + 0x10) = local_68;
            *pp_Var4 = local_80[0];
            p_Var5 = local_80[0];
            if (**(long **)in_x8 != 0) {
              *(long *)in_x8 = **(long **)in_x8;
              p_Var5 = *pp_Var4;
            }
            FUN_001b97e8(*(undefined8 *)(in_x8 + 8),p_Var5);
            *(long *)(in_x8 + 0x10) = *(long *)(in_x8 + 0x10) + 1;
          }
          if (local_d0 != 0xffffffff) {
                    /* try { // try from 00201460 to 0020146b has its CatchHandler @ 002014dc */
            (*(code *)(&PTR_FUN_0030a400)[local_d0])(local_80,auStack_f8);
          }
        }
LAB_0020146c:
        facebook::jsi::Value::~Value(aVStack_c8);
        if (((byte)local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
      }
      facebook::jsi::Value::~Value((Value *)local_a0);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
  }
  if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)();
  }
  if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)();
  }
  return;
}


// ===== 00201588  std::__ndk1::array<discord::raw::RawValue,6ul>::~array =====

/* std::__ndk1::array<discord::raw::RawValue, 6ul>::~array() */

void __thiscall
std::__ndk1::array<discord::raw::RawValue,6ul>::~array(array<discord::raw::RawValue,6ul> *this)

{
  undefined1 uStack_11;
  
  if (*(uint *)(this + 0x148) != 0xffffffff) {
                    /* try { // try from 002015b4 to 00201663 has its CatchHandler @ 00201678 */
    (*(code *)(&PTR_FUN_0030a400)[*(uint *)(this + 0x148)])(&uStack_11,this + 0x120);
  }
  *(undefined4 *)(this + 0x148) = 0xffffffff;
  if (*(uint *)(this + 0x110) != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[*(uint *)(this + 0x110)])(&uStack_11,this + 0xe8);
  }
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  if (*(uint *)(this + 0xd8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[*(uint *)(this + 0xd8)])(&uStack_11,this + 0xb0);
  }
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  if (*(uint *)(this + 0xa0) != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[*(uint *)(this + 0xa0)])(&uStack_11,this + 0x78);
  }
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  if (*(uint *)(this + 0x68) != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[*(uint *)(this + 0x68)])(&uStack_11,this + 0x40);
  }
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  if (*(uint *)(this + 0x30) != 0xffffffff) {
    (*(code *)(&PTR_FUN_0030a400)[*(uint *)(this + 0x30)])(&uStack_11,this + 8);
  }
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  return;
}


// ===== 0020167c  discord::frontends::jsi::codec::Deserialize::from_array_throwing<std::__ndk1::array<facebook::jsi::Value,2ul>> =====

/* std::__ndk1::array<facebook::jsi::Value, 2ul>
   discord::frontends::jsi::codec::Deserialize::from_array_throwing<std::__ndk1::array<facebook::jsi::Value,
   2ul> >(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_array_throwing<std::__ndk1::array<facebook::jsi::Value,2ul>>
               (Runtime *param_1,Value *param_2)

{
  JSError *pJVar1;
  Value *in_x2;
  Value *pVVar2;
  Value *in_x8;
  long lVar3;
  Value *this;
  Runtime aRStack_88 [16];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 *local_28;
  
  from_throwing<facebook::jsi::Array>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
  lVar3 = *(long *)param_1;
  this = in_x8 + 0x10;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
                    /* try { // try from 002016bc to 002016c7 has its CatchHandler @ 00201838 */
  local_50 = (**(code **)(lVar3 + 0x240))(param_1,&local_28);
  if (local_50 == 2) {
                    /* try { // try from 002016d8 to 002016eb has its CatchHandler @ 0020184c */
    pVVar2 = (Value *)0x0;
    (**(code **)(*(long *)param_1 + 0x260))(aRStack_88,param_1,&local_28);
                    /* try { // try from 002016ec to 002016fb has its CatchHandler @ 0020183c */
    from_throwing<facebook::jsi::Value>((Deserialize *)param_1,aRStack_88,pVVar2);
    facebook::jsi::Value::~Value(in_x8);
    facebook::jsi::Value::Value(in_x8,(Value *)&local_60);
    facebook::jsi::Value::~Value((Value *)&local_60);
    facebook::jsi::Value::~Value((Value *)aRStack_88);
                    /* try { // try from 00201728 to 0020173b has its CatchHandler @ 0020184c */
    pVVar2 = (Value *)0x1;
    (**(code **)(*(long *)param_1 + 0x260))(aRStack_88,param_1,&local_28);
                    /* try { // try from 0020173c to 0020174b has its CatchHandler @ 0020183c */
    from_throwing<facebook::jsi::Value>((Deserialize *)param_1,aRStack_88,pVVar2);
    facebook::jsi::Value::~Value(this);
    facebook::jsi::Value::Value(this,(Value *)&local_60);
    facebook::jsi::Value::~Value((Value *)&local_60);
    facebook::jsi::Value::~Value((Value *)aRStack_88);
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)();
    }
    return;
  }
  pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
  uStack_48 = 0;
  local_60 = 2;
  uStack_58 = 0;
                    /* try { // try from 002017b8 to 002017d3 has its CatchHandler @ 00201828 */
  fmt::v9::vformat(auStack_78,
                   "expected a static array, but received wrong number of elements (expected: {}, received: {})"
                   ,0x5b,0x44,&local_60);
                    /* try { // try from 002017d8 to 00201803 has its CatchHandler @ 00201804 */
  facebook::jsi::JSError::JSError(pJVar1,param_1,auStack_78);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 0020187c  FUN_0020187c =====

bool FUN_0020187c(byte *param_1,char *param_2)

{
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  size_t __n;
  byte *__s1;
  
  __n = strlen(param_2);
  bVar2 = *param_1;
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (__n == sVar1) {
    if (__n == 0xffffffffffffffff) {
                    /* try { // try from 002018f0 to 002018f7 has its CatchHandler @ 002018f8 */
      FUN_00203328(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 002018f0 with catch @ 002018f8
                        */
      FUN_001b1960();
    }
    __s1 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    iVar4 = memcmp(__s1,param_2,__n);
    bVar3 = iVar4 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// ===== 002018fc  discord::frontends::jsi::codec::Deserialize::from_list_throwing<boost::container::small_vector<discord::api::Cell,1ul,void,void>> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* boost::container::small_vector<discord::api::Cell, 1ul, void, void>
   discord::frontends::jsi::codec::Deserialize::from_list_throwing<boost::container::small_vector<discord::api::Cell,
   1ul, void, void> >(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_list_throwing<boost::container::small_vector<discord::api::Cell,1ul,void,void>>
               (Runtime *param_1,Value *param_2)

{
  long lVar1;
  Value *pVVar2;
  Value *in_x2;
  Value *pVVar3;
  long *in_x8;
  long lVar4;
  long lVar5;
  Value *pVVar6;
  Value aVStack_228 [16];
  Key aKStack_218 [344];
  undefined1 auStack_c0 [40];
  uint local_98;
  long *local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>
  avStack_70 [16];
  
  from_throwing<facebook::jsi::Array>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 00201934 to 0020193f has its CatchHandler @ 00201b60 */
  pVVar2 = (Value *)(**(code **)(*(long *)param_1 + 0x240))(param_1,&local_78);
  lVar1 = _UNK_001776f8;
  lVar4 = _DAT_001776f0;
  *in_x8 = (long)(in_x8 + 3);
  in_x8[2] = lVar1;
  in_x8[1] = lVar4;
  if (pVVar2 < (Value *)0x2) {
    if (pVVar2 == (Value *)0x0) goto LAB_00201b10;
  }
  else {
    if ((Value *)0x4ec4ec4ec4ec4e < pVVar2) {
                    /* try { // try from 00201b44 to 00201b4f has its CatchHandler @ 00201b84 */
                    /* WARNING: Subroutine does not return */
      boost::container::throw_length_error("get_next_capacity, allocator\'s max size reached");
    }
                    /* try { // try from 00201980 to 002019a7 has its CatchHandler @ 00201b84 */
    operator_new((long)pVVar2 * 0x1a0);
    boost::container::
    vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>
    ::
    priv_insert_forward_range_new_allocation<boost::container::dtl::insert_range_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,boost::move_iterator<discord::api::Cell*>>>
              ();
  }
  pVVar6 = (Value *)0x0;
  do {
                    /* try { // try from 002019f0 to 00201a03 has its CatchHandler @ 00201b70 */
    pVVar3 = pVVar6;
    (**(code **)(*(long *)param_1 + 0x260))(aVStack_228,param_1,&local_78);
                    /* try { // try from 00201a04 to 00201a13 has its CatchHandler @ 00201b74 */
    JsCell::from_jsi((JsCell *)param_1,(Runtime *)aVStack_228,pVVar3);
    lVar4 = *in_x8;
    lVar1 = in_x8[1];
    if (lVar1 == in_x8[2]) {
                    /* try { // try from 00201af4 to 00201b0b has its CatchHandler @ 00201b50 */
      boost::container::
      vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>
      ::
      priv_insert_forward_range_no_capacity<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell>>
                (avStack_70);
    }
    else {
      api::Key::Key((Key *)(lVar4 + lVar1 * 0x1a0),aKStack_218);
      lVar5 = lVar4 + lVar1 * 0x1a0;
      *(undefined1 *)(lVar5 + 0x158) = 0;
      *(undefined4 *)(lVar5 + 0x180) = 0xffffffff;
      if (local_98 != 0xffffffff) {
                    /* try { // try from 00201a5c to 00201a6b has its CatchHandler @ 00201b68 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                  )[local_98])(avStack_70,lVar5 + 0x158,auStack_c0);
        *(uint *)(lVar5 + 0x180) = local_98;
      }
      lVar4 = lVar4 + lVar1 * 0x1a0;
      *(long **)(lVar4 + 0x188) = local_90;
      *(long *)(lVar4 + 400) = local_88;
      *(long *)(lVar4 + 0x198) = local_80;
      if (local_80 == 0) {
        *(long *)(lVar4 + 0x188) = lVar4 + 400;
      }
      else {
        *(long *)(local_88 + 0x10) = lVar4 + 400;
        local_88 = 0;
        local_80 = 0;
        local_90 = &local_88;
      }
      in_x8[1] = in_x8[1] + 1;
    }
    FUN_001b553c(&local_90,local_88);
    if (local_98 != 0xffffffff) {
                    /* try { // try from 00201ae4 to 00201aef has its CatchHandler @ 00201b6c */
      (*(code *)(&PTR_FUN_0030a400)[local_98])(avStack_70,auStack_c0);
    }
    local_98 = 0xffffffff;
    api::Key::~Key(aKStack_218);
    facebook::jsi::Value::~Value(aVStack_228);
    pVVar6 = pVVar6 + 1;
  } while (pVVar2 != pVVar6);
LAB_00201b10:
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)();
  }
  return;
}


// ===== 00201bac  discord::frontends::jsi::JsObject::get_throwing<facebook::jsi::Function,char_const*> =====

/* facebook::jsi::Function discord::frontends::jsi::JsObject::get_throwing<facebook::jsi::Function,
   char const*>(facebook::jsi::Runtime&, char const*) */

void discord::frontends::jsi::JsObject::get_throwing<facebook::jsi::Function,char_const*>
               (Runtime *param_1,char *param_2)

{
  Value *pVVar1;
  Value aVStack_40 [16];
  undefined8 *local_18;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00201bdc to 00201bef has its CatchHandler @ 00201c44 */
  pVVar1 = (Value *)&local_18;
  (**(code **)(*(long *)param_2 + 0x180))(aVStack_40,param_2,param_1);
  if (local_18 != (undefined8 *)0x0) {
    (**(code **)*local_18)();
  }
                    /* try { // try from 00201c04 to 00201c13 has its CatchHandler @ 00201c30 */
  codec::Deserialize::from_throwing<facebook::jsi::Function>
            ((Deserialize *)param_2,(Runtime *)aVStack_40,pVVar1);
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 00201c68  discord::frontends::jsi::JsObject::get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*> =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   discord::frontends::jsi::JsObject::get_throwing<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, char
   const*>(facebook::jsi::Runtime&, char const*) */

void discord::frontends::jsi::JsObject::
     get_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
               (Runtime *param_1,char *param_2)

{
  Value aVStack_40 [16];
  undefined8 *local_18;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00201c98 to 00201cab has its CatchHandler @ 00201d00 */
  (**(code **)(*(long *)param_2 + 0x180))(aVStack_40,param_2,param_1,&local_18);
  if (local_18 != (undefined8 *)0x0) {
    (**(code **)*local_18)();
  }
                    /* try { // try from 00201cc0 to 00201ccf has its CatchHandler @ 00201cec */
  codec::Deserialize::
  from_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            ((Runtime *)param_2,aVStack_40);
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 00201d24  discord::frontends::jsi::JsObject::get_throwing<bool,char_const*> =====

/* bool discord::frontends::jsi::JsObject::get_throwing<bool, char const*>(facebook::jsi::Runtime&,
   char const*) */

bool discord::frontends::jsi::JsObject::get_throwing<bool,char_const*>
               (Runtime *param_1,char *param_2)

{
  byte bVar1;
  Value *pVVar2;
  Runtime aRStack_38 [16];
  undefined8 *local_28;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00201d4c to 00201d5f has its CatchHandler @ 00201db4 */
  pVVar2 = (Value *)&local_28;
  (**(code **)(*(long *)param_2 + 0x180))(aRStack_38,param_2,param_1);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 00201d74 to 00201d7f has its CatchHandler @ 00201da0 */
  bVar1 = codec::Deserialize::from_throwing<bool>((Deserialize *)param_2,aRStack_38,pVVar2);
  facebook::jsi::Value::~Value((Value *)aRStack_38);
  return (bool)(bVar1 & 1);
}


// ===== 00201dd8  discord::frontends::jsi::JsObject::get_throwing<unsigned_long,char_const*> =====

/* unsigned long discord::frontends::jsi::JsObject::get_throwing<unsigned long, char
   const*>(facebook::jsi::Runtime&, char const*) */

ulong discord::frontends::jsi::JsObject::get_throwing<unsigned_long,char_const*>
                (Runtime *param_1,char *param_2)

{
  ulong uVar1;
  Value *pVVar2;
  Runtime aRStack_38 [16];
  undefined8 *local_28;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00201e00 to 00201e13 has its CatchHandler @ 00201e68 */
  pVVar2 = (Value *)&local_28;
  (**(code **)(*(long *)param_2 + 0x180))(aRStack_38,param_2,param_1);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 00201e28 to 00201e33 has its CatchHandler @ 00201e54 */
  uVar1 = codec::Deserialize::from_throwing<unsigned_long>((Deserialize *)param_2,aRStack_38,pVVar2)
  ;
  facebook::jsi::Value::~Value((Value *)aRStack_38);
  return uVar1;
}


// ===== 00201e8c  discord::frontends::jsi::JsObject::get_list_throwing<std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>,char_const*> =====

/* std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> > >
   discord::frontends::jsi::JsObject::get_list_throwing<std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> > >, char const*>(facebook::jsi::Runtime&,
   char const*) */

void discord::frontends::jsi::JsObject::
     get_list_throwing<std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>,char_const*>
               (Runtime *param_1,char *param_2)

{
  Value aVStack_40 [16];
  undefined8 *local_18;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00201ebc to 00201ecf has its CatchHandler @ 00201f24 */
  (**(code **)(*(long *)param_2 + 0x180))(aVStack_40,param_2,param_1,&local_18);
  if (local_18 != (undefined8 *)0x0) {
    (**(code **)*local_18)();
  }
                    /* try { // try from 00201ee4 to 00201ef3 has its CatchHandler @ 00201f10 */
  codec::Deserialize::
  from_list_throwing<std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>>
            ((Runtime *)param_2,aVStack_40);
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 00201f48  discord::frontends::jsi::JsObject::get_throwing<discord::api::TableId,char_const*> =====

/* discord::api::TableId discord::frontends::jsi::JsObject::get_throwing<discord::api::TableId, char
   const*>(facebook::jsi::Runtime&, char const*) */

undefined4
discord::frontends::jsi::JsObject::get_throwing<discord::api::TableId,char_const*>
          (Runtime *param_1,char *param_2)

{
  undefined4 uVar1;
  Value aVStack_38 [16];
  undefined8 *local_28;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00201f70 to 00201f83 has its CatchHandler @ 00201fd8 */
  (**(code **)(*(long *)param_2 + 0x180))(aVStack_38,param_2,param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 00201f98 to 00201fa3 has its CatchHandler @ 00201fc4 */
  uVar1 = codec::Deserialize::from_throwing<discord::api::TableId>((Runtime *)param_2,aVStack_38);
  facebook::jsi::Value::~Value(aVStack_38);
  return uVar1;
}


// ===== 00201ffc  discord::frontends::jsi::JsObject::get_throwing<std::__ndk1::optional<discord::api::Ordering>,char_const*> =====

/* std::__ndk1::optional<discord::api::Ordering>
   discord::frontends::jsi::JsObject::get_throwing<std::__ndk1::optional<discord::api::Ordering>,
   char const*>(facebook::jsi::Runtime&, char const*) */

uint discord::frontends::jsi::JsObject::
     get_throwing<std::__ndk1::optional<discord::api::Ordering>,char_const*>
               (Runtime *param_1,char *param_2)

{
  uint uVar1;
  Value *pVVar2;
  uint local_38 [4];
  undefined8 *local_28;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00202024 to 00202037 has its CatchHandler @ 002020ac */
  pVVar2 = (Value *)&local_28;
  (**(code **)(*(long *)param_2 + 0x180))(local_38,param_2,param_1);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
  if (1 < local_38[0]) {
                    /* try { // try from 00202064 to 0020206f has its CatchHandler @ 00202098 */
    uVar1 = codec::Deserialize::from_throwing<discord::api::Ordering>
                      ((Deserialize *)param_2,(Runtime *)local_38,pVVar2);
  }
  else {
    uVar1 = 0;
  }
  facebook::jsi::Value::~Value((Value *)local_38);
  return uVar1 & 0xff | (uint)(1 < local_38[0]) << 8;
}


// ===== 002020d0  discord::frontends::jsi::JsObject::get_throwing<std::__ndk1::optional<unsigned_long>,char_const*> =====

/* std::__ndk1::optional<unsigned long>
   discord::frontends::jsi::JsObject::get_throwing<std::__ndk1::optional<unsigned long>, char
   const*>(facebook::jsi::Runtime&, char const*) */

undefined1  [16]
discord::frontends::jsi::JsObject::get_throwing<std::__ndk1::optional<unsigned_long>,char_const*>
          (Runtime *param_1,char *param_2)

{
  Value *pVVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint local_38 [4];
  undefined8 *local_28;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 002020f8 to 0020210b has its CatchHandler @ 00202180 */
  pVVar1 = (Value *)&local_28;
  (**(code **)(*(long *)param_2 + 0x180))(local_38,param_2,param_1);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
  if (1 < local_38[0]) {
                    /* try { // try from 00202138 to 00202143 has its CatchHandler @ 0020216c */
    uVar2 = codec::Deserialize::from_throwing<unsigned_long>
                      ((Deserialize *)param_2,(Runtime *)local_38,pVVar1);
  }
  else {
    uVar2 = 0;
  }
  facebook::jsi::Value::~Value((Value *)local_38);
  auVar3[8] = 1 < local_38[0];
  auVar3._0_8_ = uVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}


// ===== 002021a4  discord::frontends::jsi::JsObject::get_throwing<discord::api::KeyRange,char_const*> =====

/* discord::api::KeyRange discord::frontends::jsi::JsObject::get_throwing<discord::api::KeyRange,
   char const*>(facebook::jsi::Runtime&, char const*) */

void discord::frontends::jsi::JsObject::get_throwing<discord::api::KeyRange,char_const*>
               (Runtime *param_1,char *param_2)

{
  Value aVStack_40 [16];
  undefined8 *local_18;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 002021d4 to 002021e7 has its CatchHandler @ 0020223c */
  (**(code **)(*(long *)param_2 + 0x180))(aVStack_40,param_2,param_1,&local_18);
  if (local_18 != (undefined8 *)0x0) {
    (**(code **)*local_18)();
  }
                    /* try { // try from 002021fc to 0020220b has its CatchHandler @ 00202228 */
  codec::Deserialize::from_throwing<discord::api::KeyRange>((Runtime *)param_2,aVStack_40);
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 00202260  discord::frontends::jsi::JsObject::get_throwing<discord::api::Cell,char_const*> =====

/* discord::api::Cell discord::frontends::jsi::JsObject::get_throwing<discord::api::Cell, char
   const*>(facebook::jsi::Runtime&, char const*) */

void discord::frontends::jsi::JsObject::get_throwing<discord::api::Cell,char_const*>
               (Runtime *param_1,char *param_2)

{
  Value *pVVar1;
  Value aVStack_40 [16];
  undefined8 *local_18;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00202290 to 002022a3 has its CatchHandler @ 002022f8 */
  pVVar1 = (Value *)&local_18;
  (**(code **)(*(long *)param_2 + 0x180))(aVStack_40,param_2,param_1);
  if (local_18 != (undefined8 *)0x0) {
    (**(code **)*local_18)();
  }
                    /* try { // try from 002022b8 to 002022c7 has its CatchHandler @ 002022e4 */
  JsCell::from_jsi((JsCell *)param_2,(Runtime *)aVStack_40,pVVar1);
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 0020231c  discord::frontends::jsi::JsObject::get_list_throwing<std::__ndk1::vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>,char_const*> =====

/* std::__ndk1::vector<discord::api::Cell, std::__ndk1::allocator<discord::api::Cell> >
   discord::frontends::jsi::JsObject::get_list_throwing<std::__ndk1::vector<discord::api::Cell,
   std::__ndk1::allocator<discord::api::Cell> >, char const*>(facebook::jsi::Runtime&, char const*)
    */

void discord::frontends::jsi::JsObject::
     get_list_throwing<std::__ndk1::vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>,char_const*>
               (Runtime *param_1,char *param_2)

{
  Value aVStack_40 [16];
  undefined8 *local_18;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 0020234c to 0020235f has its CatchHandler @ 002023b4 */
  (**(code **)(*(long *)param_2 + 0x180))(aVStack_40,param_2,param_1,&local_18);
  if (local_18 != (undefined8 *)0x0) {
    (**(code **)*local_18)();
  }
                    /* try { // try from 00202374 to 00202383 has its CatchHandler @ 002023a0 */
  codec::Deserialize::
  from_list_throwing<std::__ndk1::vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>>
            ((Runtime *)param_2,aVStack_40);
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 002023d8  FUN_002023d8 =====

void FUN_002023d8(undefined8 *param_1)

{
  Key *pKVar1;
  Key *pKVar2;
  Key *pKVar3;
  undefined1 uStack_41;
  
  pKVar2 = (Key *)*param_1;
  if (pKVar2 != (Key *)0x0) {
    pKVar3 = (Key *)param_1[1];
    pKVar1 = pKVar2;
    if (pKVar3 != pKVar2) {
      do {
        FUN_001b553c(pKVar3 + -0x18,*(undefined8 *)(pKVar3 + -0x10));
        if (*(uint *)(pKVar3 + -0x20) != 0xffffffff) {
                    /* try { // try from 00202458 to 0020245f has its CatchHandler @ 00202488 */
          (*(code *)(&PTR_FUN_0030a400)[*(uint *)(pKVar3 + -0x20)])(&uStack_41,pKVar3 + -0x48);
        }
        pKVar1 = pKVar3 + -0x1a0;
        *(undefined4 *)(pKVar3 + -0x20) = 0xffffffff;
        discord::api::Key::~Key(pKVar1);
        pKVar3 = pKVar1;
      } while (pKVar1 != pKVar2);
      pKVar1 = (Key *)*param_1;
    }
    param_1[1] = pKVar2;
    operator_delete(pKVar1);
  }
  return;
}


// ===== 0020248c  discord::frontends::jsi::codec::Deserialize::from_list_throwing<std::__ndk1::vector<discord::raw::RawValue,std::__ndk1::allocator<discord::raw::RawValue>>> =====

/* std::__ndk1::vector<discord::raw::RawValue, std::__ndk1::allocator<discord::raw::RawValue> >
   discord::frontends::jsi::codec::Deserialize::from_list_throwing<std::__ndk1::vector<discord::raw::RawValue,
   std::__ndk1::allocator<discord::raw::RawValue> > >(facebook::jsi::Runtime&, facebook::jsi::Value
   const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_list_throwing<std::__ndk1::vector<discord::raw::RawValue,std::__ndk1::allocator<discord::raw::RawValue>>>
               (Runtime *param_1,Value *param_2)

{
  ulong uVar1;
  long lVar2;
  RawValue *pRVar3;
  Value *in_x2;
  vector<discord::raw::RawValue,std::__ndk1::allocator<discord::raw::RawValue>> *in_x8;
  ulong uVar4;
  long lVar5;
  Value aVStack_b0 [16];
  RawValue aRStack_a0 [8];
  undefined1 auStack_98 [40];
  uint local_70;
  undefined8 *local_68;
  undefined1 uStack_41;
  
  from_throwing<facebook::jsi::Array>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 002024c4 to 002024cf has its CatchHandler @ 00202608 */
  lVar2 = (**(code **)(*(long *)param_1 + 0x240))(param_1,&local_68);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
                    /* try { // try from 002024dc to 002024e7 has its CatchHandler @ 00202604 */
  FUN_00204764();
  if (lVar2 != 0) {
    lVar5 = 0;
    do {
                    /* try { // try from 0020252c to 0020253f has its CatchHandler @ 00202628 */
      (**(code **)(*(long *)param_1 + 0x260))(aVStack_b0,param_1,&local_68,lVar5);
                    /* try { // try from 00202540 to 0020254f has its CatchHandler @ 00202630 */
      from_throwing<discord::raw::RawValue>(param_1,aVStack_b0);
      uVar1 = *(ulong *)(in_x8 + 8);
      if (uVar1 < *(ulong *)(in_x8 + 0x10)) {
        *(undefined1 *)(uVar1 + 8) = 0;
        *(undefined4 *)(uVar1 + 0x30) = 0xffffffff;
        if (local_70 == 0xffffffff) {
          uVar4 = 0xffffffff;
          pRVar3 = (RawValue *)(uVar1 + 0x38);
        }
        else {
                    /* try { // try from 00202578 to 00202583 has its CatchHandler @ 00202610 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                    )[local_70])(&uStack_41,(undefined1 *)(uVar1 + 8),auStack_98);
          uVar4 = (ulong)local_70;
          pRVar3 = (RawValue *)(uVar1 + 0x38);
          *(uint *)(uVar1 + 0x30) = local_70;
        }
      }
      else {
                    /* try { // try from 00202594 to 0020259f has its CatchHandler @ 00202614 */
        pRVar3 = std::__ndk1::
                 vector<discord::raw::RawValue,std::__ndk1::allocator<discord::raw::RawValue>>::
                 __push_back_slow_path<discord::raw::RawValue>(in_x8,aRStack_a0);
        uVar4 = (ulong)local_70;
      }
      *(RawValue **)(in_x8 + 8) = pRVar3;
      if (uVar4 != 0xffffffff) {
                    /* try { // try from 002025c0 to 002025cb has its CatchHandler @ 00202624 */
        (*(code *)(&PTR_FUN_0030a400)[uVar4])(&uStack_41,auStack_98);
      }
      local_70 = 0xffffffff;
      facebook::jsi::Value::~Value(aVStack_b0);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
  }
  if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)();
  }
  return;
}


// ===== 00202660  discord::frontends::jsi::JsObject::get_throwing<facebook::jsi::Value,char_const*> =====

/* facebook::jsi::Value discord::frontends::jsi::JsObject::get_throwing<facebook::jsi::Value, char
   const*>(facebook::jsi::Runtime&, char const*) */

void discord::frontends::jsi::JsObject::get_throwing<facebook::jsi::Value,char_const*>
               (Runtime *param_1,char *param_2)

{
  Value *pVVar1;
  Value aVStack_40 [16];
  undefined8 *local_18;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00202690 to 002026a3 has its CatchHandler @ 002026f8 */
  pVVar1 = (Value *)&local_18;
  (**(code **)(*(long *)param_2 + 0x180))(aVStack_40,param_2,param_1);
  if (local_18 != (undefined8 *)0x0) {
    (**(code **)*local_18)();
  }
                    /* try { // try from 002026b8 to 002026c7 has its CatchHandler @ 002026e4 */
  codec::Deserialize::from_throwing<facebook::jsi::Value>
            ((Deserialize *)param_2,(Runtime *)aVStack_40,pVVar1);
  facebook::jsi::Value::~Value(aVStack_40);
  return;
}


// ===== 0020271c  discord::frontends::jsi::JsObject::get_throwing<unsigned_int,char_const*> =====

/* unsigned int discord::frontends::jsi::JsObject::get_throwing<unsigned int, char
   const*>(facebook::jsi::Runtime&, char const*) */

uint discord::frontends::jsi::JsObject::get_throwing<unsigned_int,char_const*>
               (Runtime *param_1,char *param_2)

{
  uint uVar1;
  Value *pVVar2;
  Runtime aRStack_38 [16];
  undefined8 *local_28;
  
  into_property_name(param_1,param_2);
                    /* try { // try from 00202744 to 00202757 has its CatchHandler @ 002027ac */
  pVVar2 = (Value *)&local_28;
  (**(code **)(*(long *)param_2 + 0x180))(aRStack_38,param_2,param_1);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)();
  }
                    /* try { // try from 0020276c to 00202777 has its CatchHandler @ 00202798 */
  uVar1 = codec::Deserialize::from_throwing<unsigned_int>((Deserialize *)param_2,aRStack_38,pVVar2);
  facebook::jsi::Value::~Value((Value *)aRStack_38);
  return uVar1;
}


// ===== 002027d0  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISH_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESH_Lm13ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISH_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESH_Lm13ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  if (*(uint *)(param_2 + 10) != 0xffffffff) {
                    /* try { // try from 00202830 to 0020283b has its CatchHandler @ 0020285c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 10)])(&uStack_21,param_1 + 5,param_2 + 5);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  }
  *(undefined4 *)(param_1 + 0x59) = 0xd;
  return;
}


// ===== 00202860  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISI_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESI_Lm14ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISI_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESI_Lm14ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  if (*(uint *)(param_2 + 10) != 0xffffffff) {
                    /* try { // try from 002028c0 to 002028cb has its CatchHandler @ 002028ec */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 10)])(&uStack_21,param_1 + 5,param_2 + 5);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  }
  *(undefined4 *)(param_1 + 0x59) = 0xe;
  return;
}


// ===== 002028f0  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISK_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESK_Lm16ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISK_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESK_Lm16ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  discord::api::Key::Key((Key *)(param_1 + 2),(Key *)(param_2 + 2));
  discord::api::Key::Key((Key *)(param_1 + 0x2c),(Key *)(param_2 + 0x2c));
  uVar2 = param_2[0x57];
  uVar1 = param_2[0x56];
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  param_1[0x57] = uVar2;
  param_1[0x56] = uVar1;
  *(undefined4 *)(param_1 + 0x59) = 0x10;
  return;
}


// ===== 00202948  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISP_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESP_Lm21ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISP_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESP_Lm21ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uStack_21;
  
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  discord::api::Key::Key((Key *)(param_1 + 2),(Key *)(param_2 + 2));
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  if (*(uint *)(param_2 + 0x32) != 0xffffffff) {
                    /* try { // try from 00202998 to 002029a7 has its CatchHandler @ 00202a08 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0x32)])(&uStack_21,param_1 + 0x2d,param_2 + 0x2d);
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  }
  param_1[0x33] = param_2[0x33];
  lVar1 = param_2[0x34];
  param_1[0x34] = lVar1;
  lVar3 = param_2[0x35];
  param_1[0x35] = lVar3;
  if (lVar3 == 0) {
    param_1[0x33] = param_1 + 0x34;
  }
  else {
    *(undefined8 **)(lVar1 + 0x10) = param_1 + 0x34;
    param_2[0x33] = param_2 + 0x34;
    param_2[0x34] = 0;
    param_2[0x35] = 0;
  }
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x59) = 0x15;
  return;
}


// ===== 00202a0c  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISS_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESS_Lm24ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISS_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESS_Lm24ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  discord::api::Key::Key((Key *)(param_1 + 2),(Key *)(param_2 + 2));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  uVar1 = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2c] = uVar1;
  param_1[0x2e] = param_2[0x2e];
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x18;
  return;
}


// ===== 00202a68  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000IST_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0EST_Lm25ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000IST_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0EST_Lm25ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  discord::api::Key::Key((Key *)(param_1 + 2),(Key *)(param_2 + 2));
  discord::api::Key::Key((Key *)(param_1 + 0x2c),(Key *)(param_2 + 0x2c));
  *(undefined4 *)(param_1 + 0x59) = 0x19;
  return;
}


// ===== 00202ab0  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISU_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESU_Lm26ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISU_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESU_Lm26ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  discord::api::Key::Key((Key *)(param_1 + 2),(Key *)(param_2 + 2));
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  if (*(uint *)(param_2 + 0x32) != 0xffffffff) {
                    /* try { // try from 00202b00 to 00202b0f has its CatchHandler @ 00202b50 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0x32)])(&uStack_21,param_1 + 0x2d,param_2 + 0x2d);
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  }
  uVar2 = param_2[0x34];
  uVar1 = param_2[0x33];
  param_1[0x35] = param_2[0x35];
  param_1[0x34] = uVar2;
  param_1[0x33] = uVar1;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x1a;
  return;
}


// ===== 00202b54  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISV_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESV_Lm27ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISV_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESV_Lm27ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = uVar2;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
                    /* try { // try from 00202ba4 to 00202baf has its CatchHandler @ 00202bd0 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 8)])(&uStack_21,param_1 + 3,param_2 + 3);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x59) = 0x1b;
  return;
}


// ===== 00202bd4  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISW_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESW_Lm28ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISW_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESW_Lm28ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = uVar2;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
                    /* try { // try from 00202c28 to 00202c33 has its CatchHandler @ 00202c8c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 8)])(&uStack_32,param_1 + 3,param_2 + 3);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  if (*(uint *)(param_2 + 0xf) != 0xffffffff) {
                    /* try { // try from 00202c58 to 00202c63 has its CatchHandler @ 00202c88 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0xf)])(&uStack_31,param_1 + 10,param_2 + 10);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  }
  *(undefined4 *)(param_1 + 0x59) = 0x1c;
  return;
}


// ===== 00202c90  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISY_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESY_Lm30ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISY_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESY_Lm30ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = uVar2;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
                    /* try { // try from 00202ce4 to 00202cef has its CatchHandler @ 00202d50 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 8)])(&uStack_32,param_1 + 3,param_2 + 3);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  if (*(uint *)(param_2 + 0xf) != 0xffffffff) {
                    /* try { // try from 00202d14 to 00202d1f has its CatchHandler @ 00202d4c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0xf)])(&uStack_31,param_1 + 10,param_2 + 10);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x59) = 0x1e;
  return;
}


// ===== 00202d54  _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISZ_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESZ_Lm31ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation12CreateHandleENS3_11CloseHandleENS3_14DeleteDatabaseENS3_13ListDatabasesENS3_8OptimizeENS3_8GetStateENS3_7DisableENS3_7ExecuteENS3_11TransactionENS3_6VacuumENS3_6FsInfoENS3_10MetaGetOneENS3_10MetaGetAllENS3_7MetaPutENS3_10MetaDeleteENS3_7GetManyENS3_8GetRangeENS3_12GetKvEntriesENS3_13GetMapEntriesENS3_11GetChildIdsENS3_11GetParentIdENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISZ_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES10_EEiE4typeELi0ETnNS12_IXntsr17__is_inplace_typeIS14_EE5valueEiE4typeELi0ETnNS12_IXntsr18__is_inplace_indexIS14_EE5valueEiE4typeELi0ESZ_Lm31ETnNS12_IX18is_constructible_vIT3_S13_EEiE4typeELi0EEEOS13_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = uVar2;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
                    /* try { // try from 00202da8 to 00202db3 has its CatchHandler @ 00202e14 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 8)])(&uStack_32,param_1 + 3,param_2 + 3);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  if (*(uint *)(param_2 + 0xf) != 0xffffffff) {
                    /* try { // try from 00202dd8 to 00202de3 has its CatchHandler @ 00202e10 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0xf)])(&uStack_31,param_1 + 10,param_2 + 10);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x59) = 0x1f;
  return;
}


// ===== 00202e18  _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISA_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESA_Lm6ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISA_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESA_Lm6ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  discord::api::Key::Key((Key *)(param_1 + 2),(Key *)(param_2 + 2));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  uVar1 = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2c] = uVar1;
  param_1[0x2e] = param_2[0x2e];
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x56) = 6;
  return;
}


// ===== 00202e74  _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISB_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESB_Lm7ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISB_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESB_Lm7ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  discord::api::Key::Key((Key *)(param_1 + 2),(Key *)(param_2 + 2));
  discord::api::Key::Key((Key *)(param_1 + 0x2c),(Key *)(param_2 + 0x2c));
  *(undefined4 *)(param_1 + 0x56) = 7;
  return;
}


// ===== 00202ebc  _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISC_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESC_Lm8ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISC_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESC_Lm8ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  discord::api::Key::Key((Key *)(param_1 + 2),(Key *)(param_2 + 2));
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  if (*(uint *)(param_2 + 0x32) != 0xffffffff) {
                    /* try { // try from 00202f0c to 00202f1b has its CatchHandler @ 00202f5c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0x32)])(&uStack_21,param_1 + 0x2d,param_2 + 0x2d);
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  }
  uVar2 = param_2[0x34];
  uVar1 = param_2[0x33];
  param_1[0x35] = param_2[0x35];
  param_1[0x34] = uVar2;
  param_1[0x33] = uVar1;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_1 + 0x56) = 8;
  return;
}


// ===== 00202f60  _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISE_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESE_Lm10ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISE_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESE_Lm10ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = uVar2;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
                    /* try { // try from 00202fb4 to 00202fbf has its CatchHandler @ 00203018 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 8)])(&uStack_32,param_1 + 3,param_2 + 3);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  if (*(uint *)(param_2 + 0xf) != 0xffffffff) {
                    /* try { // try from 00202fe4 to 00202fef has its CatchHandler @ 00203014 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0xf)])(&uStack_31,param_1 + 10,param_2 + 10);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  }
  *(undefined4 *)(param_1 + 0x56) = 10;
  return;
}


// ===== 0020301c  _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISG_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESG_Lm12ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISG_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESG_Lm12ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = uVar2;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
                    /* try { // try from 00203070 to 0020307b has its CatchHandler @ 002030dc */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 8)])(&uStack_32,param_1 + 3,param_2 + 3);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  if (*(uint *)(param_2 + 0xf) != 0xffffffff) {
                    /* try { // try from 002030a0 to 002030ab has its CatchHandler @ 002030d8 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0xf)])(&uStack_31,param_1 + 10,param_2 + 10);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x56) = 0xc;
  return;
}


// ===== 002030e0  _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISH_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESH_Lm13ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_ =====

void _ZNSt6__ndk17variantIJN7discord3api9Operation7ExecuteENS3_10MetaDeleteENS3_7MetaPutENS3_6PutOneENS3_7PutManyENS3_10DeleteManyENS3_15DeleteAllExceptENS3_11DeleteRangeENS3_16DeleteGenerationENS3_17MessagesGetLatestENS3_19MessagesTrimOrphansENS3_19MessagesTrimChannelENS3_22MessagesTrimChannelsInENS3_25MessagesTrimChannelsNotInEEEC2B8ne180000ISH_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ESI_EEiE4typeELi0ETnNSK_IXntsr17__is_inplace_typeISM_EE5valueEiE4typeELi0ETnNSK_IXntsr18__is_inplace_indexISM_EE5valueEiE4typeELi0ESH_Lm13ETnNSK_IX18is_constructible_vIT3_SL_EEiE4typeELi0EEEOSL_
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = uVar2;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
                    /* try { // try from 00203134 to 0020313f has its CatchHandler @ 002031a0 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 8)])(&uStack_32,param_1 + 3,param_2 + 3);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  if (*(uint *)(param_2 + 0xf) != 0xffffffff) {
                    /* try { // try from 00203164 to 0020316f has its CatchHandler @ 0020319c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[*(uint *)(param_2 + 0xf)])(&uStack_31,param_1 + 10,param_2 + 10);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x56) = 0xd;
  return;
}


// ===== 002031a4  FUN_002031a4 =====

void FUN_002031a4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 uStack_41;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[1];
    pvVar1 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        pvVar1 = (void *)((long)pvVar3 + -0x2b8);
        if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0020320c to 00203217 has its CatchHandler @ 00203240 */
          (*(code *)(&PTR_FUN_0030a538)[*(uint *)((long)pvVar3 + -8)])(&uStack_41,pvVar1);
        }
        *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
        pvVar3 = pvVar1;
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar2;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00203244  FUN_00203244 =====

void FUN_00203244(long param_1)

{
  undefined1 uStack_1;
  
  if (*(uint *)(param_1 + 0x2b0) != 0xffffffff) {
                    /* try { // try from 0020326c to 00203277 has its CatchHandler @ 0020328c */
    (*(code *)(&PTR_FUN_0030a538)[*(uint *)(param_1 + 0x2b0)])(&uStack_1,param_1);
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0xffffffff;
  return;
}


// ===== 00203290  FUN_00203290 =====

void FUN_00203290(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 uStack_21;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[1];
    pvVar1 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 002032f8 to 002032ff has its CatchHandler @ 00203324 */
          (*(code *)(&PTR_FUN_0030a400)[*(uint *)((long)pvVar3 + -8)])
                    (&uStack_21,(long)pvVar3 + -0x30);
        }
        pvVar1 = (void *)((long)pvVar3 + -0x38);
        *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
        pvVar3 = pvVar1;
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar2;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00203328  FUN_00203328 =====

void FUN_00203328(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0020333c("basic_string");
}


// ===== 0020333c  FUN_0020333c =====

void FUN_0020333c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00203358 to 0020335f has its CatchHandler @ 00203378 */
  FUN_0020338c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_0030d7c0,PTR__out_of_range_0030d7c8);
}


// ===== 0020338c  FUN_0020338c =====

void FUN_0020338c(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_0030d7d0 + 0x10;
  return;
}


// ===== 002033bc  discord::frontends::jsi::codec::Deserialize::from_list_throwing<std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>> =====

/* std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> > >
   discord::frontends::jsi::codec::Deserialize::from_list_throwing<std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> > > >(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_list_throwing<std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>>
               (Runtime *param_1,Value *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  Value *in_x2;
  vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>
  *in_x8;
  ulong uVar4;
  long lVar5;
  Value aVStack_330 [16];
  undefined1 auStack_320 [688];
  uint local_70;
  undefined8 *local_68;
  undefined1 uStack_41;
  
  from_throwing<facebook::jsi::Array>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 002033f4 to 002033ff has its CatchHandler @ 00203534 */
  lVar2 = (**(code **)(*(long *)param_1 + 0x240))(param_1,&local_68);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
                    /* try { // try from 0020340c to 00203417 has its CatchHandler @ 00203530 */
  FUN_0020358c();
  if (lVar2 != 0) {
    lVar5 = 0;
    do {
                    /* try { // try from 00203458 to 0020346b has its CatchHandler @ 00203554 */
      (**(code **)(*(long *)param_1 + 0x260))(aVStack_330,param_1,&local_68,lVar5);
                    /* try { // try from 0020346c to 0020347b has its CatchHandler @ 0020355c */
      from_throwing<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>
                (param_1,aVStack_330);
      puVar1 = *(undefined1 **)(in_x8 + 8);
      if (puVar1 < *(undefined1 **)(in_x8 + 0x10)) {
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 0x2b0) = 0xffffffff;
        if (local_70 == 0xffffffff) {
          uVar4 = 0xffffffff;
          puVar3 = puVar1 + 0x2b8;
        }
        else {
                    /* try { // try from 002034a0 to 002034af has its CatchHandler @ 0020353c */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_api_Operation_Execute,discord_api_Operation_MetaDelete,discord_api_Operation_MetaPut,discord_api_Operation_PutOne,discord_api_Operation_PutMany,discord_api_Operation_DeleteMany,discord_api_Operation_DeleteAllExcept,discord_api_Operation_DeleteRange,discord_api_Operation_DeleteGeneration,discord_api_Operation_MessagesGetLatest,discord_api_Operation_MessagesTrimOrphans,discord_api_Operation_MessagesTrimChannel,discord_api_Operation_MessagesTrimChannelsIn,discord_api_Operation_MessagesTrimChannelsNotIn>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_api_Operation_Execute,discord_api_Operation_MetaDelete,discord_api_Operation_MetaPut,discord_api_Operation_PutOne,discord_api_Operation_PutMany,discord_api_Operation_DeleteMany,discord_api___scord_api_Operation_MessagesTrimChannelsIn,discord_api_Operation_MessagesTrimChannelsNotIn>&&>_0030a5a8
                    )[local_70])(&uStack_41,puVar1,auStack_320);
          uVar4 = (ulong)local_70;
          puVar3 = puVar1 + 0x2b8;
          *(uint *)(puVar1 + 0x2b0) = local_70;
        }
      }
      else {
                    /* try { // try from 002034c0 to 002034cb has its CatchHandler @ 00203540 */
        puVar3 = std::__ndk1::
                 vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>
                 ::
                 __push_back_slow_path<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>
                           (in_x8,auStack_320);
        uVar4 = (ulong)local_70;
      }
      *(undefined1 **)(in_x8 + 8) = puVar3;
      if (uVar4 != 0xffffffff) {
                    /* try { // try from 002034ec to 002034f7 has its CatchHandler @ 00203550 */
        (*(code *)(&PTR_FUN_0030a538)[uVar4])(&uStack_41,auStack_320);
      }
      local_70 = 0xffffffff;
      facebook::jsi::Value::~Value(aVStack_330);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
  }
  if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)();
  }
  return;
}


// ===== 0020358c  FUN_0020358c =====

void FUN_0020358c(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  pvVar6 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar6 >> 3) * 0x66fd0eb66fd0eb67) < param_2) {
    if (0x5e293205e29320 < param_2) {
      FUN_00203724(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 002036c4 with catch @ 0020371c
                        */
      FUN_001b1960();
    }
    lVar7 = param_1[1];
    pvVar5 = operator_new(param_2 * 0x2b8);
    pvVar1 = (void *)((long)pvVar5 + param_2 * 0x2b8);
    lVar2 = (long)pvVar5 + (lVar7 - (long)pvVar6);
    if (lVar7 - (long)pvVar6 == 0) {
      *param_1 = lVar2;
      param_1[1] = lVar2;
      param_1[2] = (long)pvVar1;
    }
    else {
      lVar8 = 0;
      do {
        lVar3 = lVar2 + lVar8;
        lVar4 = lVar7 + lVar8;
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        *(undefined1 *)(lVar3 + -0x2b8) = 0;
        if (*(uint *)(lVar4 + -8) != 0xffffffff) {
                    /* try { // try from 00203664 to 0020366b has its CatchHandler @ 00203720 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_api_Operation_Execute,discord_api_Operation_MetaDelete,discord_api_Operation_MetaPut,discord_api_Operation_PutOne,discord_api_Operation_PutMany,discord_api_Operation_DeleteMany,discord_api_Operation_DeleteAllExcept,discord_api_Operation_DeleteRange,discord_api_Operation_DeleteGeneration,discord_api_Operation_MessagesGetLatest,discord_api_Operation_MessagesTrimOrphans,discord_api_Operation_MessagesTrimChannel,discord_api_Operation_MessagesTrimChannelsIn,discord_api_Operation_MessagesTrimChannelsNotIn>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_api_Operation_Execute,discord_api_Operation_MetaDelete,discord_api_Operation_MetaPut,discord_api_Operation_PutOne,discord_api_Operation_PutMany,discord_api_Operation_DeleteMany,discord_api___scord_api_Operation_MessagesTrimChannelsIn,discord_api_Operation_MessagesTrimChannelsNotIn>&&>_0030a5a8
                    )[*(uint *)(lVar4 + -8)])
                    (&uStack_62,(undefined1 *)(lVar3 + -0x2b8),lVar4 + -0x2b8);
          *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(lVar4 + -8);
        }
        lVar8 = lVar8 + -0x2b8;
      } while ((void *)(lVar7 + lVar8) != pvVar6);
      pvVar5 = (void *)*param_1;
      pvVar6 = (void *)param_1[1];
      *param_1 = lVar2 + lVar8;
      param_1[1] = lVar2;
      param_1[2] = (long)pvVar1;
      pvVar1 = pvVar6;
      while (pvVar1 != pvVar5) {
        if (*(uint *)((long)pvVar1 + -8) != 0xffffffff) {
                    /* try { // try from 002036c4 to 002036cf has its CatchHandler @ 0020371c */
          (*(code *)(&PTR_FUN_0030a538)[*(uint *)((long)pvVar1 + -8)])
                    (&uStack_61,(void *)((long)pvVar1 + -0x2b8));
        }
        *(undefined4 *)((long)pvVar1 + -8) = 0xffffffff;
        pvVar6 = pvVar5;
        pvVar1 = (void *)((long)pvVar1 + -0x2b8);
      }
    }
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  return;
}


// ===== 00203724  FUN_00203724 =====

void FUN_00203724(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001b1984("vector");
}


// ===== 00203738  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  return (_func_decltype_auto *)param_1;
}


// ===== 0020375c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  param_2[0x28] = (__base)0x0;
  *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
  if (*(uint *)(param_3 + 0x50) != 0xffffffff) {
                    /* try { // try from 002037b8 to 002037c3 has its CatchHandler @ 002037dc */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x50)])(&uStack_21,param_2 + 0x28,param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
  }
  return (_func_decltype_auto *)param_1;
}


// ===== 002037e0  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  param_2[0x28] = (__base)0x0;
  *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
  if (*(uint *)(param_3 + 0x50) != 0xffffffff) {
                    /* try { // try from 0020383c to 00203847 has its CatchHandler @ 00203860 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x50)])(&uStack_21,param_2 + 0x28,param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
  }
  return (_func_decltype_auto *)param_1;
}


// ===== 00203864  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,
   3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,3ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uStack_21;
  
  uVar3 = *(undefined8 *)param_3;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar3;
  p_Var1 = (_func_decltype_auto *)
           discord::api::Key::Key((Key *)(param_2 + 0x10),(Key *)(param_3 + 0x10));
  param_2[0x168] = (__base)0x0;
  *(undefined4 *)(param_2 + 400) = 0xffffffff;
  if (*(uint *)(param_3 + 400) != 0xffffffff) {
                    /* try { // try from 002038bc to 002038cb has its CatchHandler @ 00203924 */
    p_Var1 = (_func_decltype_auto *)
             (*(code *)(&
                       PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                       )[*(uint *)(param_3 + 400)])(&uStack_21,param_2 + 0x168,param_3 + 0x168);
    *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_3 + 400);
  }
  *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
  lVar2 = *(long *)(param_3 + 0x1a0);
  *(long *)(param_2 + 0x1a0) = lVar2;
  lVar4 = *(long *)(param_3 + 0x1a8);
  *(long *)(param_2 + 0x1a8) = lVar4;
  if (lVar4 == 0) {
    *(__base **)(param_2 + 0x198) = param_2 + 0x1a0;
  }
  else {
    *(__base **)(lVar2 + 0x10) = param_2 + 0x1a0;
    *(__base **)(param_3 + 0x198) = param_3 + 0x1a0;
    *(undefined8 *)(param_3 + 0x1a0) = 0;
    *(undefined8 *)(param_3 + 0x1a8) = 0;
  }
  param_2[0x1b0] = param_3[0x1b0];
  return p_Var1;
}


// ===== 00203928  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,
   4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,4ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined8 *)param_2 = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  param_2[0x28] = param_3[0x28];
  return (_func_decltype_auto *)param_1;
}


// ===== 00203964  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,
   5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,5ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_3;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar2;
  p_Var1 = (_func_decltype_auto *)
           discord::api::Key::Key((Key *)(param_2 + 0x10),(Key *)(param_3 + 0x10));
  return p_Var1;
}


// ===== 00203984  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,
   6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,6ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_3;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar2;
  p_Var1 = (_func_decltype_auto *)
           discord::api::Key::Key((Key *)(param_2 + 0x10),(Key *)(param_3 + 0x10));
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x160);
  *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
  *(undefined8 *)(param_2 + 0x160) = uVar2;
  *(undefined8 *)(param_2 + 0x170) = *(undefined8 *)(param_3 + 0x170);
  *(undefined8 *)(param_3 + 0x160) = 0;
  *(undefined8 *)(param_3 + 0x168) = 0;
  *(undefined8 *)(param_3 + 0x170) = 0;
  return p_Var1;
}


// ===== 002039e0  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<7ul,7ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<7ul,
   7ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<7ul,7ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_3;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar2;
  discord::api::Key::Key((Key *)(param_2 + 0x10),(Key *)(param_3 + 0x10));
  p_Var1 = (_func_decltype_auto *)
           discord::api::Key::Key((Key *)(param_2 + 0x160),(Key *)(param_3 + 0x160));
  return p_Var1;
}


// ===== 00203a24  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<8ul,8ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<8ul,
   8ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<8ul,8ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uStack_21;
  
  uVar2 = *(undefined8 *)param_3;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar2;
  p_Var1 = (_func_decltype_auto *)
           discord::api::Key::Key((Key *)(param_2 + 0x10),(Key *)(param_3 + 0x10));
  param_2[0x168] = (__base)0x0;
  *(undefined4 *)(param_2 + 400) = 0xffffffff;
  if (*(uint *)(param_3 + 400) != 0xffffffff) {
                    /* try { // try from 00203a7c to 00203a8b has its CatchHandler @ 00203ac4 */
    p_Var1 = (_func_decltype_auto *)
             (*(code *)(&
                       PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                       )[*(uint *)(param_3 + 400)])(&uStack_21,param_2 + 0x168,param_3 + 0x168);
    *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_3 + 400);
  }
  uVar3 = *(undefined8 *)(param_3 + 0x1a0);
  uVar2 = *(undefined8 *)(param_3 + 0x198);
  *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a0) = uVar3;
  *(undefined8 *)(param_2 + 0x198) = uVar2;
  *(undefined8 *)(param_3 + 0x1a0) = 0;
  *(undefined8 *)(param_3 + 0x1a8) = 0;
  *(undefined8 *)(param_3 + 0x198) = 0;
  return p_Var1;
}


// ===== 00203ac8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<9ul,9ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<9ul,
   9ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<9ul,9ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined8 *)param_3;
  param_2[0x18] = (__base)0x0;
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined8 *)param_2 = uVar2;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  if (*(uint *)(param_3 + 0x40) != 0xffffffff) {
                    /* try { // try from 00203b14 to 00203b1f has its CatchHandler @ 00203b38 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x40)])(&uStack_21,param_2 + 0x18,param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  }
  return (_func_decltype_auto *)param_1;
}


// ===== 00203b3c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<10ul,10ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<10ul,
   10ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<10ul,10ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined8 *)param_3;
  param_2[0x18] = (__base)0x0;
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined8 *)param_2 = uVar2;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  if (*(uint *)(param_3 + 0x40) != 0xffffffff) {
                    /* try { // try from 00203b8c to 00203b97 has its CatchHandler @ 00203be8 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x40)])(&uStack_32,param_2 + 0x18,param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  }
  param_2[0x50] = (__base)0x0;
  *(undefined4 *)(param_2 + 0x78) = 0xffffffff;
  if (*(uint *)(param_3 + 0x78) != 0xffffffff) {
                    /* try { // try from 00203bbc to 00203bc7 has its CatchHandler @ 00203be4 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x78)])(&uStack_31,param_2 + 0x50,param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
  }
  return (_func_decltype_auto *)param_1;
}


// ===== 00203bec  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<11ul,11ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<11ul,
   11ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<11ul,11ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_3;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar2;
  p_Var1 = (_func_decltype_auto *)
           discord::api::Key::Key((Key *)(param_2 + 0x10),(Key *)(param_3 + 0x10));
  *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_3 + 0x160);
  return p_Var1;
}


// ===== 00203c30  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<12ul,12ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<12ul,
   12ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<12ul,12ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined8 *)param_3;
  param_2[0x18] = (__base)0x0;
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined8 *)param_2 = uVar2;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  if (*(uint *)(param_3 + 0x40) != 0xffffffff) {
                    /* try { // try from 00203c80 to 00203c8b has its CatchHandler @ 00203ce4 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x40)])(&uStack_32,param_2 + 0x18,param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  }
  param_2[0x50] = (__base)0x0;
  *(undefined4 *)(param_2 + 0x78) = 0xffffffff;
  if (*(uint *)(param_3 + 0x78) != 0xffffffff) {
                    /* try { // try from 00203cb0 to 00203cbb has its CatchHandler @ 00203ce0 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x78)])(&uStack_31,param_2 + 0x50,param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
  }
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_3 + 0x80);
  return (_func_decltype_auto *)param_1;
}


// ===== 00203ce8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<13ul,13ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api...scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<13ul,
   13ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<13ul,13ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api___scord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined8 *)param_3;
  param_2[0x18] = (__base)0x0;
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined8 *)param_2 = uVar2;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  if (*(uint *)(param_3 + 0x40) != 0xffffffff) {
                    /* try { // try from 00203d38 to 00203d43 has its CatchHandler @ 00203d9c */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x40)])(&uStack_32,param_2 + 0x18,param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  }
  param_2[0x50] = (__base)0x0;
  *(undefined4 *)(param_2 + 0x78) = 0xffffffff;
  if (*(uint *)(param_3 + 0x78) != 0xffffffff) {
                    /* try { // try from 00203d68 to 00203d73 has its CatchHandler @ 00203d98 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                        )[*(uint *)(param_3 + 0x78)])(&uStack_31,param_2 + 0x50,param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
  }
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_3 + 0x80);
  return (_func_decltype_auto *)param_1;
}


// ===== 00203da0  std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>::__push_back_slow_path<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>> =====

/* std::__ndk1::variant<discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>*
   std::__ndk1::vector<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>,
   std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn> >
   >::__push_back_slow_path<std::__ndk1::variant<discord::api::Operation::Execute,
   discord::api::Operation::MetaDelete, discord::api::Operation::MetaPut,
   discord::api::Operation::PutOne, discord::api::Operation::PutMany,
   discord::api::Operation::DeleteMany, discord::api::Operation::DeleteAllExcept,
   discord::api::Operation::DeleteRange, discord::api::Operation::DeleteGeneration,
   discord::api::Operation::MessagesGetLatest, discord::api::Operation::MessagesTrimOrphans,
   discord::api::Operation::MessagesTrimChannel, discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>
   >(std::__ndk1::variant<discord::api::Operation::Execute, discord::api::Operation::MetaDelete,
   discord::api::Operation::MetaPut, discord::api::Operation::PutOne,
   discord::api::Operation::PutMany, discord::api::Operation::DeleteMany,
   discord::api::Operation::DeleteAllExcept, discord::api::Operation::DeleteRange,
   discord::api::Operation::DeleteGeneration, discord::api::Operation::MessagesGetLatest,
   discord::api::Operation::MessagesTrimOrphans, discord::api::Operation::MessagesTrimChannel,
   discord::api::Operation::MessagesTrimChannelsIn,
   discord::api::Operation::MessagesTrimChannelsNotIn>&&) */

variant * __thiscall
std::__ndk1::
vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>
::
__push_back_slow_path<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>
          (vector<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>,std::__ndk1::allocator<std::__ndk1::variant<discord::api::Operation::Execute,discord::api::Operation::MetaDelete,discord::api::Operation::MetaPut,discord::api::Operation::PutOne,discord::api::Operation::PutMany,discord::api::Operation::DeleteMany,discord::api::Operation::DeleteAllExcept,discord::api::Operation::DeleteRange,discord::api::Operation::DeleteGeneration,discord::api::Operation::MessagesGetLatest,discord::api::Operation::MessagesTrimOrphans,discord::api::Operation::MessagesTrimChannel,discord::api::Operation::MessagesTrimChannelsIn,discord::api::Operation::MessagesTrimChannelsNotIn>>>
           *this,variant *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  undefined1 *puVar9;
  void *pvVar10;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  pvVar8 = *(void **)this;
  pvVar10 = *(void **)(this + 8);
  lVar5 = (long)pvVar10 - (long)pvVar8 >> 3;
  uVar1 = lVar5 * 0x66fd0eb66fd0eb67 + 1;
  if (0x5e293205e29320 < uVar1) {
    FUN_00203724(this);
LAB_00203fc0:
                    /* WARNING: Subroutine does not return */
    FUN_001b8a1c();
  }
  lVar6 = *(long *)(this + 0x10) - (long)pvVar8 >> 3;
  uVar7 = lVar6 * -0x3205e293205e2932;
  if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
    uVar7 = uVar1;
  }
  if (0x2f149902f1498f < (ulong)(lVar6 * 0x66fd0eb66fd0eb67)) {
    uVar7 = 0x5e293205e29320;
  }
  if (uVar7 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x5e293205e29320 < uVar7) goto LAB_00203fc0;
    pvVar4 = operator_new(uVar7 * 0x2b8);
  }
  uVar3 = *(uint *)(param_1 + 0x2b0);
  puVar9 = (undefined1 *)((long)pvVar4 + lVar5 * 8);
  *puVar9 = 0;
  *(undefined4 *)(puVar9 + 0x2b0) = 0xffffffff;
  if (uVar3 != 0xffffffff) {
                    /* try { // try from 00203e88 to 00203e97 has its CatchHandler @ 00203fc4 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_api_Operation_Execute,discord_api_Operation_MetaDelete,discord_api_Operation_MetaPut,discord_api_Operation_PutOne,discord_api_Operation_PutMany,discord_api_Operation_DeleteMany,discord_api_Operation_DeleteAllExcept,discord_api_Operation_DeleteRange,discord_api_Operation_DeleteGeneration,discord_api_Operation_MessagesGetLatest,discord_api_Operation_MessagesTrimOrphans,discord_api_Operation_MessagesTrimChannel,discord_api_Operation_MessagesTrimChannelsIn,discord_api_Operation_MessagesTrimChannelsNotIn>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_api_Operation_Execute,discord_api_Operation_MetaDelete,discord_api_Operation_MetaPut,discord_api_Operation_PutOne,discord_api_Operation_PutMany,discord_api_Operation_DeleteMany,discord_api___scord_api_Operation_MessagesTrimChannelsIn,discord_api_Operation_MessagesTrimChannelsNotIn>&&>_0030a5a8
              )[uVar3])(&uStack_63,puVar9,param_1);
    pvVar8 = *(void **)this;
    pvVar10 = *(void **)(this + 8);
    *(undefined4 *)(puVar9 + 0x2b0) = *(undefined4 *)(param_1 + 0x2b0);
  }
  pvVar4 = (void *)((long)pvVar4 + uVar7 * 0x2b8);
  puVar2 = puVar9 + 0x2b8;
  if (pvVar10 == pvVar8) {
    *(undefined1 **)this = puVar9;
    *(undefined1 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    lVar5 = 0;
    do {
      *(undefined4 *)(puVar9 + lVar5 + -8) = 0xffffffff;
      puVar9[lVar5 + -0x2b8] = 0;
      uVar3 = *(uint *)((long)pvVar10 + lVar5 + -8);
      if (uVar3 != 0xffffffff) {
                    /* try { // try from 00203f00 to 00203f07 has its CatchHandler @ 00203fcc */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_api_Operation_Execute,discord_api_Operation_MetaDelete,discord_api_Operation_MetaPut,discord_api_Operation_PutOne,discord_api_Operation_PutMany,discord_api_Operation_DeleteMany,discord_api_Operation_DeleteAllExcept,discord_api_Operation_DeleteRange,discord_api_Operation_DeleteGeneration,discord_api_Operation_MessagesGetLatest,discord_api_Operation_MessagesTrimOrphans,discord_api_Operation_MessagesTrimChannel,discord_api_Operation_MessagesTrimChannelsIn,discord_api_Operation_MessagesTrimChannelsNotIn>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_api_Operation_Execute,discord_api_Operation_MetaDelete,discord_api_Operation_MetaPut,discord_api_Operation_PutOne,discord_api_Operation_PutMany,discord_api_Operation_DeleteMany,discord_api___scord_api_Operation_MessagesTrimChannelsIn,discord_api_Operation_MessagesTrimChannelsNotIn>&&>_0030a5a8
                  )[uVar3])(&uStack_62,puVar9 + lVar5 + -0x2b8,(long)pvVar10 + lVar5 + -0x2b8);
        *(undefined4 *)(puVar9 + lVar5 + -8) = *(undefined4 *)((long)pvVar10 + lVar5 + -8);
      }
      lVar5 = lVar5 + -0x2b8;
    } while ((void *)((long)pvVar10 + lVar5) != pvVar8);
    pvVar10 = *(void **)this;
    pvVar8 = *(void **)(this + 8);
    *(void **)(this + 0x10) = pvVar4;
    *(undefined1 **)this = puVar9 + lVar5;
    *(undefined1 **)(this + 8) = puVar2;
    pvVar4 = pvVar8;
    while (pvVar4 != pvVar10) {
      if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 00203f64 to 00203f6f has its CatchHandler @ 00203fc8 */
        (*(code *)(&PTR_FUN_0030a538)[*(uint *)((long)pvVar4 + -8)])
                  (&uStack_61,(void *)((long)pvVar4 + -0x2b8));
      }
      *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
      pvVar8 = pvVar10;
      pvVar4 = (void *)((long)pvVar4 + -0x2b8);
    }
  }
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  return puVar2;
}


// ===== 00203fd0  discord::frontends::jsi::codec::Deserialize::from_list_throwing<std::__ndk1::vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>> =====

/* std::__ndk1::vector<discord::api::Cell, std::__ndk1::allocator<discord::api::Cell> >
   discord::frontends::jsi::codec::Deserialize::from_list_throwing<std::__ndk1::vector<discord::api::Cell,
   std::__ndk1::allocator<discord::api::Cell> > >(facebook::jsi::Runtime&, facebook::jsi::Value
   const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_list_throwing<std::__ndk1::vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>>
               (Runtime *param_1,Value *param_2)

{
  Value *pVVar1;
  Key *pKVar2;
  Value *in_x2;
  Value *pVVar3;
  vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>> *in_x8;
  Value *pVVar4;
  Value aVStack_228 [16];
  Key aKStack_218 [344];
  undefined1 auStack_c0 [40];
  uint local_98;
  long *local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  undefined1 auStack_69 [9];
  
  from_throwing<facebook::jsi::Array>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 00204008 to 00204013 has its CatchHandler @ 0020419c */
  pVVar1 = (Value *)(**(code **)(*(long *)param_1 + 0x240))(param_1,&local_78);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
                    /* try { // try from 00204020 to 0020402b has its CatchHandler @ 00204198 */
  FUN_002041f4();
  if (pVVar1 != (Value *)0x0) {
    pVVar4 = (Value *)0x0;
    do {
                    /* try { // try from 0020407c to 0020408f has its CatchHandler @ 002041bc */
      pVVar3 = pVVar4;
      (**(code **)(*(long *)param_1 + 0x260))(aVStack_228,param_1,&local_78);
                    /* try { // try from 00204090 to 0020409f has its CatchHandler @ 002041c4 */
      JsCell::from_jsi((JsCell *)param_1,(Runtime *)aVStack_228,pVVar3);
      pKVar2 = *(Key **)(in_x8 + 8);
      if (pKVar2 < *(Key **)(in_x8 + 0x10)) {
        api::Key::Key(pKVar2,aKStack_218);
        pKVar2[0x158] = (Key)0x0;
        *(undefined4 *)(pKVar2 + 0x180) = 0xffffffff;
        if (local_98 != 0xffffffff) {
                    /* try { // try from 002040d0 to 002040df has its CatchHandler @ 002041a4 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                    )[local_98])(auStack_69,pKVar2 + 0x158,auStack_c0);
          *(uint *)(pKVar2 + 0x180) = local_98;
        }
        *(long **)(pKVar2 + 0x188) = local_90;
        *(long *)(pKVar2 + 400) = local_88;
        *(long *)(pKVar2 + 0x198) = local_80;
        if (local_80 == 0) {
          *(Key **)(pKVar2 + 0x188) = pKVar2 + 400;
          pKVar2 = pKVar2 + 0x1a0;
        }
        else {
          *(Key **)(local_88 + 0x10) = pKVar2 + 400;
          pKVar2 = pKVar2 + 0x1a0;
          local_88 = 0;
          local_80 = 0;
          local_90 = &local_88;
        }
      }
      else {
                    /* try { // try from 0020411c to 00204127 has its CatchHandler @ 002041a8 */
        pKVar2 = (Key *)std::__ndk1::
                        vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>::
                        __push_back_slow_path<discord::api::Cell>(in_x8,(Cell *)aKStack_218);
      }
      *(Key **)(in_x8 + 8) = pKVar2;
      FUN_001b553c(&local_90,local_88);
      if (local_98 != 0xffffffff) {
                    /* try { // try from 00204154 to 0020415f has its CatchHandler @ 002041b8 */
        (*(code *)(&PTR_FUN_0030a400)[local_98])(auStack_69,auStack_c0);
      }
      local_98 = 0xffffffff;
      api::Key::~Key(aKStack_218);
      facebook::jsi::Value::~Value(aVStack_228);
      pVVar4 = pVVar4 + 1;
    } while (pVVar1 != pVVar4);
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)();
  }
  return;
}


// ===== 002041f4  FUN_002041f4 =====

void FUN_002041f4(long *param_1,ulong param_2)

{
  Key *pKVar1;
  Key *pKVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *local_68;
  Key *local_60;
  Key *local_58;
  void *pvStack_50;
  long *local_48;
  undefined1 uStack_21;
  
  lVar4 = *param_1;
  local_48 = param_1 + 2;
  if ((ulong)((*local_48 - lVar4 >> 5) * 0x4ec4ec4ec4ec4ec5) < param_2) {
    if (0x9d89d89d89d89d < param_2) {
      uVar3 = FUN_00204338();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00204284 with catch @ 00204320
                        */
      FUN_00204484(&local_68);
                    /* WARNING: Subroutine does not return */
      FUN_00222c44(uVar3);
    }
    lVar5 = param_1[1];
    local_68 = operator_new(param_2 * 0x1a0);
    local_60 = (Key *)((long)local_68 + (lVar5 - lVar4));
    pvStack_50 = (void *)((long)local_68 + param_2 * 0x1a0);
                    /* try { // try from 00204284 to 0020428f has its CatchHandler @ 00204320 */
    local_58 = local_60;
    FUN_0020434c(param_1,&local_68);
    pKVar2 = local_60;
    pKVar1 = local_58;
    while (pKVar1 != pKVar2) {
      local_58 = pKVar1 + -0x1a0;
      FUN_001b553c(pKVar1 + -0x18,*(undefined8 *)(pKVar1 + -0x10));
      if (*(uint *)(pKVar1 + -0x20) != 0xffffffff) {
                    /* try { // try from 002042ec to 002042f3 has its CatchHandler @ 00204334 */
        (*(code *)(&PTR_FUN_0030a400)[*(uint *)(pKVar1 + -0x20)])(&uStack_21,pKVar1 + -0x48);
      }
      *(undefined4 *)(pKVar1 + -0x20) = 0xffffffff;
      discord::api::Key::~Key(pKVar1 + -0x1a0);
      pKVar1 = local_58;
    }
    if (local_68 != (void *)0x0) {
      local_58 = pKVar1;
      operator_delete(local_68);
    }
  }
  return;
}


// ===== 00204338  FUN_00204338 =====

void FUN_00204338(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001b1984("vector");
}


// ===== 0020434c  FUN_0020434c =====

void FUN_0020434c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uStack_61;
  
  lVar5 = *param_1;
  lVar3 = param_1[1];
  lVar9 = param_2[1];
  if (lVar3 != lVar5) {
    lVar10 = 0;
    do {
      lVar1 = lVar9 + lVar10;
      lVar2 = lVar3 + lVar10;
      discord::api::Key::Key((Key *)(lVar1 + -0x1a0),(Key *)(lVar2 + -0x1a0));
      *(undefined4 *)(lVar1 + -0x20) = 0xffffffff;
      *(undefined1 *)(lVar1 + -0x48) = 0;
      if (*(uint *)(lVar2 + -0x20) != 0xffffffff) {
                    /* try { // try from 002043e8 to 002043ef has its CatchHandler @ 00204480 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                  )[*(uint *)(lVar2 + -0x20)])
                  (&uStack_61,(undefined1 *)(lVar1 + -0x48),lVar2 + -0x48);
        *(undefined4 *)(lVar1 + -0x20) = *(undefined4 *)(lVar2 + -0x20);
      }
      *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
      plVar4 = (long *)(lVar2 + -0x10);
      lVar7 = *plVar4;
      plVar6 = (long *)(lVar1 + -0x10);
      *plVar6 = lVar7;
      lVar8 = *(long *)(lVar2 + -8);
      *(long *)(lVar1 + -8) = lVar8;
      if (lVar8 == 0) {
        *(long **)(lVar1 + -0x18) = plVar6;
      }
      else {
        *(long **)(lVar7 + 0x10) = plVar6;
        *(long **)(lVar2 + -0x18) = plVar4;
        *plVar4 = 0;
        *(undefined8 *)(lVar2 + -8) = 0;
      }
      lVar10 = lVar10 + -0x1a0;
    } while (lVar3 + lVar10 != lVar5);
    lVar9 = lVar9 + lVar10;
  }
  param_2[1] = lVar9;
  lVar5 = *param_1;
  *param_1 = lVar9;
  param_2[1] = lVar5;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return;
}


// ===== 00204484  FUN_00204484 =====

void FUN_00204484(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uStack_41;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    uVar2 = *(undefined8 *)(lVar3 + -0x10);
    param_1[2] = (Key *)(lVar3 + -0x1a0);
    FUN_001b553c(lVar3 + -0x18,uVar2);
    if (*(uint *)(lVar3 + -0x20) != 0xffffffff) {
                    /* try { // try from 002044fc to 00204503 has its CatchHandler @ 0020452c */
      (*(code *)(&PTR_FUN_0030a400)[*(uint *)(lVar3 + -0x20)])(&uStack_41,lVar3 + -0x48);
    }
    *(undefined4 *)(lVar3 + -0x20) = 0xffffffff;
    discord::api::Key::~Key((Key *)(lVar3 + -0x1a0));
    lVar3 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
  }
  return;
}


// ===== 00204530  std::__ndk1::vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>::__push_back_slow_path<discord::api::Cell> =====

/* discord::api::Cell* std::__ndk1::vector<discord::api::Cell,
   std::__ndk1::allocator<discord::api::Cell>
   >::__push_back_slow_path<discord::api::Cell>(discord::api::Cell&&) */

Cell * __thiscall
std::__ndk1::vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>>::
__push_back_slow_path<discord::api::Cell>
          (vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>> *this,Cell *param_1
          )

{
  ulong uVar1;
  uint uVar2;
  Key *pKVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  Cell *pCVar8;
  Key *pKVar9;
  long lVar10;
  long lVar11;
  void *local_70;
  Key *local_68;
  Key *local_60;
  void *pvStack_58;
  vector<discord::api::Cell,std::__ndk1::allocator<discord::api::Cell>> *local_50;
  undefined1 uStack_41;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar5 * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar1 < 0x9d89d89d89d89e) {
    local_50 = this + 0x10;
    lVar6 = *(long *)local_50 - *(long *)this >> 5;
    uVar7 = lVar6 * -0x6276276276276276;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x4ec4ec4ec4ec4d < (ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5)) {
      uVar7 = 0x9d89d89d89d89d;
    }
    if (uVar7 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x9d89d89d89d89d < uVar7) goto LAB_00204744;
      pvVar4 = operator_new(uVar7 * 0x1a0);
    }
    pKVar9 = (Key *)((long)pvVar4 + lVar5 * 0x20);
    pvStack_58 = (void *)((long)pvVar4 + uVar7 * 0x1a0);
    local_70 = pvVar4;
    local_68 = pKVar9;
    local_60 = pKVar9;
    discord::api::Key::Key(pKVar9,(Key *)param_1);
    uVar2 = *(uint *)(param_1 + 0x180);
    pKVar9[0x158] = (Key)0x0;
    *(undefined4 *)(pKVar9 + 0x180) = 0xffffffff;
    if (uVar2 != 0xffffffff) {
                    /* try { // try from 00204630 to 0020463f has its CatchHandler @ 00204748 */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                )[uVar2])(&uStack_41,pKVar9 + 0x158,param_1 + 0x158);
      *(undefined4 *)(pKVar9 + 0x180) = *(undefined4 *)(param_1 + 0x180);
    }
    lVar11 = *(long *)(param_1 + 0x198);
    lVar10 = *(long *)(param_1 + 400);
    *(undefined8 *)((long)pvVar4 + lVar5 * 0x20 + 0x188) = *(undefined8 *)(param_1 + 0x188);
    lVar6 = (long)pvVar4 + lVar5 * 0x20 + 400;
    *(long *)((long)pvVar4 + lVar5 * 0x20 + 0x198) = lVar11;
    *(long *)((long)pvVar4 + lVar5 * 0x20 + 400) = lVar10;
    if (lVar11 == 0) {
      *(long *)((long)pvVar4 + lVar5 * 0x20 + 0x188) = lVar6;
    }
    else {
      *(long *)(lVar10 + 0x10) = lVar6;
      *(Cell **)(param_1 + 0x188) = param_1 + 400;
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
    local_60 = local_60 + 0x1a0;
                    /* try { // try from 0020469c to 002046a7 has its CatchHandler @ 0020474c */
    FUN_0020434c(this,&local_70);
    pKVar3 = local_68;
    pCVar8 = *(Cell **)(this + 8);
    pKVar9 = local_60;
    while (pKVar9 != pKVar3) {
      local_60 = pKVar9 + -0x1a0;
      FUN_001b553c(pKVar9 + -0x18,*(undefined8 *)(pKVar9 + -0x10));
      if (*(uint *)(pKVar9 + -0x20) != 0xffffffff) {
                    /* try { // try from 00204708 to 0020470f has its CatchHandler @ 00204760 */
        (*(code *)(&PTR_FUN_0030a400)[*(uint *)(pKVar9 + -0x20)])(&uStack_41,pKVar9 + -0x48);
      }
      *(undefined4 *)(pKVar9 + -0x20) = 0xffffffff;
      discord::api::Key::~Key(pKVar9 + -0x1a0);
      pKVar9 = local_60;
    }
    if (local_70 != (void *)0x0) {
      local_60 = pKVar9;
      operator_delete(local_70);
    }
    return pCVar8;
  }
  FUN_00204338(this);
LAB_00204744:
                    /* WARNING: Subroutine does not return */
  FUN_001b8a1c();
}


// ===== 00204764  FUN_00204764 =====

void FUN_00204764(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  pvVar7 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar7 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if (0x492492492492492 < param_2) {
      FUN_002048fc(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 002048a0 with catch @ 002048f4
                        */
      FUN_001b1960();
    }
    lVar8 = param_1[1];
    pvVar5 = operator_new(param_2 * 0x38);
    pvVar1 = (void *)((long)pvVar5 + param_2 * 0x38);
    lVar2 = (long)pvVar5 + (lVar8 - (long)pvVar7);
    if (lVar8 - (long)pvVar7 == 0) {
      *param_1 = lVar2;
      param_1[1] = lVar2;
      param_1[2] = (long)pvVar1;
    }
    else {
      lVar9 = 0;
      do {
        lVar3 = lVar2 + lVar9;
        lVar4 = lVar8 + lVar9;
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        *(undefined1 *)(lVar3 + -0x30) = 0;
        if (*(uint *)(lVar4 + -8) != 0xffffffff) {
                    /* try { // try from 0020483c to 00204843 has its CatchHandler @ 002048f8 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                    )[*(uint *)(lVar4 + -8)])
                    (&uStack_62,(undefined1 *)(lVar3 + -0x30),lVar4 + -0x30);
          *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(lVar4 + -8);
        }
        lVar9 = lVar9 + -0x38;
      } while ((void *)(lVar8 + lVar9) != pvVar7);
      pvVar5 = (void *)*param_1;
      pvVar6 = (void *)param_1[1];
      *param_1 = lVar2 + lVar9;
      param_1[1] = lVar2;
      param_1[2] = (long)pvVar1;
      pvVar7 = pvVar6;
      for (; pvVar6 != pvVar5; pvVar6 = (void *)((long)pvVar6 + -0x38)) {
        if (*(uint *)((long)pvVar6 + -8) != 0xffffffff) {
                    /* try { // try from 002048a0 to 002048a7 has its CatchHandler @ 002048f4 */
          (*(code *)(&PTR_FUN_0030a400)[*(uint *)((long)pvVar6 + -8)])
                    (&uStack_61,(long)pvVar6 + -0x30);
        }
        *(undefined4 *)((long)pvVar6 + -8) = 0xffffffff;
        pvVar7 = pvVar5;
      }
    }
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  return;
}


// ===== 002048fc  FUN_002048fc =====

void FUN_002048fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001b1984("vector");
}


// ===== 00204910  std::__ndk1::vector<discord::raw::RawValue,std::__ndk1::allocator<discord::raw::RawValue>>::__push_back_slow_path<discord::raw::RawValue> =====

/* discord::raw::RawValue* std::__ndk1::vector<discord::raw::RawValue,
   std::__ndk1::allocator<discord::raw::RawValue>
   >::__push_back_slow_path<discord::raw::RawValue>(discord::raw::RawValue&&) */

RawValue * __thiscall
std::__ndk1::vector<discord::raw::RawValue,std::__ndk1::allocator<discord::raw::RawValue>>::
__push_back_slow_path<discord::raw::RawValue>
          (vector<discord::raw::RawValue,std::__ndk1::allocator<discord::raw::RawValue>> *this,
          RawValue *param_1)

{
  ulong uVar1;
  RawValue *pRVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  pvVar10 = *(void **)this;
  pvVar11 = *(void **)(this + 8);
  lVar6 = (long)pvVar11 - (long)pvVar10 >> 3;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
    FUN_002048fc(this);
LAB_00204b30:
                    /* WARNING: Subroutine does not return */
    FUN_001b8a1c();
  }
  lVar8 = *(long *)(this + 0x10) - (long)pvVar10 >> 3;
  uVar9 = lVar8 * -0x2492492492492492;
  if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
    uVar9 = uVar1;
  }
  if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
    uVar9 = 0x492492492492492;
  }
  if (uVar9 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x492492492492492 < uVar9) goto LAB_00204b30;
    pvVar4 = operator_new(uVar9 * 0x38);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  pvVar12 = (void *)((long)pvVar4 + lVar6 * 8);
  *(undefined4 *)((long)pvVar12 + 0x30) = 0xffffffff;
  *(undefined1 *)((long)pvVar12 + 8) = 0;
  if (uVar3 != 0xffffffff) {
                    /* try { // try from 002049fc to 00204a07 has its CatchHandler @ 00204b34 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[uVar3])(&uStack_63,(undefined1 *)((long)pvVar12 + 8),param_1 + 8);
    pvVar10 = *(void **)this;
    pvVar11 = *(void **)(this + 8);
    *(undefined4 *)((long)pvVar12 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  }
  pvVar4 = (void *)((long)pvVar4 + uVar9 * 0x38);
  pRVar2 = (RawValue *)((long)pvVar12 + 0x38);
  if (pvVar11 == pvVar10) {
    *(void **)this = pvVar12;
    *(RawValue **)(this + 8) = pRVar2;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    lVar6 = 0;
    do {
      *(undefined4 *)((long)pvVar12 + lVar6 + -8) = 0xffffffff;
      puVar5 = (undefined1 *)((long)pvVar12 + lVar6 + -0x30);
      *puVar5 = 0;
      uVar3 = *(uint *)((long)pvVar11 + lVar6 + -8);
      if (uVar3 != 0xffffffff) {
                    /* try { // try from 00204a70 to 00204a77 has its CatchHandler @ 00204b3c */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
                  )[uVar3])(&uStack_62,puVar5,(long)pvVar11 + lVar6 + -0x30);
        *(undefined4 *)((long)pvVar12 + lVar6 + -8) = *(undefined4 *)((long)pvVar11 + lVar6 + -8);
      }
      lVar6 = lVar6 + -0x38;
    } while ((void *)((long)pvVar11 + lVar6) != pvVar10);
    pvVar11 = *(void **)this;
    pvVar7 = *(void **)(this + 8);
    *(void **)(this + 0x10) = pvVar4;
    *(long *)this = (long)pvVar12 + lVar6;
    *(RawValue **)(this + 8) = pRVar2;
    pvVar10 = pvVar7;
    for (; pvVar7 != pvVar11; pvVar7 = (void *)((long)pvVar7 + -0x38)) {
      if (*(uint *)((long)pvVar7 + -8) != 0xffffffff) {
                    /* try { // try from 00204ad8 to 00204adf has its CatchHandler @ 00204b38 */
        (*(code *)(&PTR_FUN_0030a400)[*(uint *)((long)pvVar7 + -8)])
                  (&uStack_61,(long)pvVar7 + -0x30);
      }
      *(undefined4 *)((long)pvVar7 + -8) = 0xffffffff;
      pvVar10 = pvVar11;
    }
  }
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  return pRVar2;
}


// ===== 00204b40  std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>>>::__construct_node<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,discord::raw::RawValue> =====

/* std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, discord::raw::RawValue>, void*>,
   std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, discord::raw::RawValue>, void*> >
   > > std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, discord::raw::RawValue>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, discord::raw::RawValue>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, discord::raw::RawValue> >
   >::__construct_node<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, discord::raw::RawValue>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, discord::raw::RawValue&&) */

void std::__ndk1::
     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,discord::raw::RawValue>>>
     ::
     __construct_node<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,discord::raw::RawValue>
               (basic_string *param_1,RawValue *param_2)

{
  uint uVar1;
  byte bVar2;
  void *pvVar3;
  long in_x2;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_21;
  
  pvVar3 = operator_new(0x70);
  bVar2 = *param_2;
  *in_x8 = pvVar3;
  in_x8[1] = param_1 + 8;
  *(undefined1 *)(in_x8 + 2) = 0;
  if ((bVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)((long)pvVar3 + 0x28) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)((long)pvVar3 + 0x20) = uVar5;
    *(undefined8 *)((long)pvVar3 + 0x30) = uVar4;
  }
  else {
                    /* try { // try from 00204b98 to 00204b9f has its CatchHandler @ 00204bf8 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               ((long)pvVar3 + 0x20),*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  uVar1 = *(uint *)(in_x2 + 0x30);
  *(undefined1 *)((long)pvVar3 + 0x40) = 0;
  *(undefined4 *)((long)pvVar3 + 0x68) = 0xffffffff;
  if (uVar1 != 0xffffffff) {
                    /* try { // try from 00204bc8 to 00204bd3 has its CatchHandler @ 00204c0c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a4f8
              )[uVar1])(&uStack_21,(undefined1 *)((long)pvVar3 + 0x40),in_x2 + 8);
    *(undefined4 *)((long)pvVar3 + 0x68) = *(undefined4 *)(in_x2 + 0x30);
  }
  *(undefined1 *)(in_x8 + 2) = 1;
  return;
}


// ===== 00204c10  discord::frontends::jsi::codec::Serialize::response_body =====

/* discord::frontends::jsi::codec::Serialize::response_body(facebook::jsi::Runtime&,
   discord::api::Response const&) */

void discord::frontends::jsi::codec::Serialize::response_body(Runtime *param_1,Response *param_2)

{
  JSError *pJVar1;
  undefined1 auStack_50 [24];
  Runtime *local_38;
  Runtime **local_18;
  
  if (*(int *)(param_2 + 0x1e0) == 0) {
    local_38 = param_1;
    if (*(uint *)(param_2 + 0x1d8) != 0xffffffff) {
      local_18 = &local_38;
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_None,discord_api_Cell,boost_container_small_vector<discord_api_Cell,1ul,void,void>,discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_map<discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_less<discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_pair<discord_raw_RawValue_const,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>>>>,std___ndk1_vector<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>(facebook_jsi_Runtime&,std___ndk1_variant<discord_None,discord_api_Cell,boost_container_small_vector<discord_api_Cell,1ul,void,void>,discord_raw_RawValue,boost_container_small_ve___>,std___ndk1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>const_>_0030a618
                )[*(uint *)(param_2 + 0x1d8)])(&local_18,param_2 + 0x20);
      return;
    }
  }
  else if (*(int *)(param_2 + 0x1e0) == 1) {
    pJVar1 = (JSError *)__cxa_allocate_exception(0x60);
    if (*(int *)(param_2 + 0x1e0) == 1) {
                    /* try { // try from 00204c98 to 00204ca3 has its CatchHandler @ 00204d04 */
      Error::to_string();
                    /* try { // try from 00204ca8 to 00204cd3 has its CatchHandler @ 00204cdc */
      facebook::jsi::JSError::JSError(pJVar1,param_1,auStack_50);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar1,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00204cd8 to 00204cdb has its CatchHandler @ 00204d04 */
    FUN_001b3508();
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 00204d18  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve...>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve___>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const_>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<discord::None>
                     ((Runtime *)**(undefined8 **)param_1,(None *)param_2);
  return p_Var1;
}


// ===== 00204d24  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve...>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve___>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const_>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Cell>
                     ((Runtime *)**(undefined8 **)param_1,(Cell *)param_2);
  return p_Var1;
}


// ===== 00204d30  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve...>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve___>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const_>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::
           to_jsi<boost::container::small_vector<discord::api::Cell,1ul,void,void>>
                     ((Runtime *)**(undefined8 **)param_1,(small_vector *)param_2);
  return p_Var1;
}


// ===== 00204d3c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve...>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve___>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const_>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawValue>
                     ((Runtime *)**(undefined8 **)param_1,param_2);
  return p_Var1;
}


// ===== 00204d48  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve...>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve___>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const_>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::
           to_jsi<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>
                     ((Runtime *)**(undefined8 **)param_1,(small_vector *)param_2);
  return p_Var1;
}


// ===== 00204d54  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve...>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve___>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const_>
          (__dispatcher<5ul> *this,__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::
           to_jsi<std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>>
                     ((Serialize *)**(undefined8 **)this,(Runtime *)param_1,param_2);
  return p_Var1;
}


// ===== 00204d60  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve...>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   >(facebook::jsi::Runtime&, std::__ndk1::variant<discord::None, discord::api::Cell,
   boost::container::small_vector<discord::api::Cell, 1ul, void, void>, discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, discord::None,
   discord::api::Cell, boost::container::small_vector<discord::api::Cell, 1ul, void, void>,
   discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::map<discord::raw::RawValue, boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void>, std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > > >
   const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::None,discord::api::Cell,boost::container::small_vector<discord::api::Cell,1ul,void,void>,discord::raw::RawValue,boost::container::small_ve___>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>const_>
          (__dispatcher<6ul> *this,__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::
           to_jsi<std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>
                     ((Serialize *)**(undefined8 **)this,(Runtime *)param_1,(vector *)param_2);
  return p_Var1;
}


// ===== 00204d6c  discord::frontends::jsi::codec::Serialize::to_jsi<facebook::jsi::Value> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<facebook::jsi::Value>(facebook::jsi::Runtime&,
   facebook::jsi::Value const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<facebook::jsi::Value>
          (Serialize *this,Runtime *param_1,Value *param_2)

{
  Value *in_x8;
  
  facebook::jsi::Value::Value(in_x8,(IRuntime *)this,(Value *)param_1);
  return;
}


// ===== 00204d7c  discord::frontends::jsi::codec::Serialize::to_jsi<bool> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<bool>(facebook::jsi::Runtime&, bool const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<bool>
          (Serialize *this,Runtime *param_1,bool *param_2)

{
  Runtime RVar1;
  undefined4 *in_x8;
  
  RVar1 = *param_1;
  *in_x8 = 2;
  *(Runtime *)(in_x8 + 2) = RVar1;
  return;
}


// ===== 00204d90  discord::frontends::jsi::codec::Serialize::to_jsi<double> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<double>(facebook::jsi::Runtime&, double const&)
    */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<double>
          (Serialize *this,Runtime *param_1,double *param_2)

{
  undefined4 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *in_x8 = 3;
  *(undefined8 *)(in_x8 + 2) = uVar1;
  return;
}


// ===== 00204da4  discord::frontends::jsi::codec::Serialize::to_jsi<unsigned_long> =====

/* facebook::jsi::Value discord::frontends::jsi::codec::Serialize::to_jsi<unsigned
   long>(facebook::jsi::Runtime&, unsigned long const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<unsigned_long>
          (Serialize *this,Runtime *param_1,ulong *param_2)

{
  JSError *this_00;
  undefined4 *in_x8;
  ulong uVar1;
  
  uVar1 = *(ulong *)param_1;
  if (uVar1 >> 0x35 == 0) {
    *in_x8 = 3;
    *(double *)(in_x8 + 2) = (double)uVar1;
    return;
  }
  this_00 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00204de8 to 00204df7 has its CatchHandler @ 00204e10 */
  facebook::jsi::JSError::JSError
            (this_00,(IRuntime *)this,
             "discord\'s build of hermes is old and does not support bigint at this time");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00204e24  discord::frontends::jsi::codec::Serialize::to_jsi<long> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<long>(facebook::jsi::Runtime&, long const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<long>
          (Serialize *this,Runtime *param_1,long *param_2)

{
  JSError *this_00;
  undefined4 *in_x8;
  ulong uVar1;
  
  uVar1 = *(ulong *)param_1;
  if (uVar1 >> 0x35 == 0) {
    *in_x8 = 3;
    *(double *)(in_x8 + 2) = (double)(long)uVar1;
    return;
  }
  this_00 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00204e68 to 00204e77 has its CatchHandler @ 00204e90 */
  facebook::jsi::JSError::JSError
            (this_00,(IRuntime *)this,
             "discord\'s build of hermes is old and does not support bigint at this time");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00204ea4  discord::frontends::jsi::codec::Serialize::to_jsi<unsigned_int> =====

/* facebook::jsi::Value discord::frontends::jsi::codec::Serialize::to_jsi<unsigned
   int>(facebook::jsi::Runtime&, unsigned int const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<unsigned_int>
          (Serialize *this,Runtime *param_1,uint *param_2)

{
  undefined4 *in_x8;
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)param_1;
  *in_x8 = 3;
  uVar2 = NEON_ucvtf((ulong)uVar1);
  *(undefined8 *)(in_x8 + 2) = uVar2;
  return;
}


// ===== 00204ebc  discord::frontends::jsi::codec::Serialize::to_jsi<int> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<int>(facebook::jsi::Runtime&, int const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<int>
          (Serialize *this,Runtime *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_x8;
  
  iVar1 = *(int *)param_1;
  *in_x8 = 3;
  *(double *)(in_x8 + 2) = (double)iVar1;
  return;
}


// ===== 00204ed4  discord::frontends::jsi::codec::Serialize::to_jsi<char_const*> =====

/* facebook::jsi::Value discord::frontends::jsi::codec::Serialize::to_jsi<char
   const*>(facebook::jsi::Runtime&, char const* const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<char_const*>
          (Serialize *this,Runtime *param_1,char **param_2)

{
  size_t sVar1;
  undefined4 *in_x8;
  char *__s;
  undefined8 local_18;
  
  __s = *(char **)param_1;
  sVar1 = strlen(__s);
  (**(code **)(*(long *)this + 0x110))(&local_18,this,__s,sVar1);
  *in_x8 = 6;
  *(undefined8 *)(in_x8 + 2) = local_18;
  return;
}


// ===== 00204f34  discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(facebook::jsi::Runtime&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::
to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (Serialize *this,Runtime *param_1,basic_string *param_2)

{
  ulong uVar1;
  Runtime *pRVar2;
  undefined4 *in_x8;
  undefined8 local_8;
  
  uVar1 = *(ulong *)(param_1 + 8);
  pRVar2 = *(Runtime **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pRVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  (**(code **)(*(long *)this + 0x110))(&local_8,this,pRVar2,uVar1);
  *in_x8 = 6;
  *(undefined8 *)(in_x8 + 2) = local_8;
  return;
}


// ===== 00204f88  discord::frontends::jsi::codec::Serialize::to_jsi<discord::StaticString> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::StaticString>(facebook::jsi::Runtime&,
   discord::StaticString const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<discord::StaticString>
          (Serialize *this,Runtime *param_1,StaticString *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *in_x8;
  undefined8 local_38;
  
  uVar1 = StaticString::data((StaticString *)param_1);
  uVar2 = StaticString::size((StaticString *)param_1);
  (**(code **)(*(long *)this + 0x110))(&local_38,this,uVar1,uVar2);
  *in_x8 = 6;
  *(undefined8 *)(in_x8 + 2) = local_38;
  return;
}


// ===== 00204ffc  discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> > >(facebook::jsi::Runtime&, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> > const&) */

void discord::frontends::jsi::codec::Serialize::
     to_jsi<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>
               (Runtime *param_1,vector *param_2)

{
  JSError *this;
  
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00205018 to 00205027 has its CatchHandler @ 00205040 */
  facebook::jsi::JSError::JSError
            (this,(IRuntime *)param_1,
             "discord\'s build of hermes is old and does not support buffers at this time");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00205054  discord::frontends::jsi::codec::Serialize::to_jsi<boost::container::small_vector<unsigned_char,8ul,void,void>> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<boost::container::small_vector<unsigned char,
   8ul, void, void> >(facebook::jsi::Runtime&, boost::container::small_vector<unsigned char, 8ul,
   void, void> const&) */

void discord::frontends::jsi::codec::Serialize::
     to_jsi<boost::container::small_vector<unsigned_char,8ul,void,void>>
               (Runtime *param_1,small_vector *param_2)

{
  JSError *this;
  
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00205070 to 0020507f has its CatchHandler @ 00205098 */
  facebook::jsi::JSError::JSError
            (this,(IRuntime *)param_1,
             "discord\'s build of hermes is old and does not support buffers at this time");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 002050ac  discord::frontends::jsi::codec::Serialize::to_jsi<discord::Error> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::Error>(facebook::jsi::Runtime&,
   discord::Error const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<discord::Error>
          (Serialize *this,Runtime *param_1,Error *param_2)

{
  Runtime local_38 [16];
  void *local_28;
  
  Error::to_string();
                    /* try { // try from 002050d0 to 002050df has its CatchHandler @ 00205100 */
  to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (this,local_38,(basic_string *)param_2);
  if (((byte)local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return;
}


// ===== 0020511c  discord::frontends::jsi::codec::Serialize::to_jsi<discord::None> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::None>(facebook::jsi::Runtime&,
   discord::None const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::None>
               (Runtime *param_1,None *param_2)

{
  undefined4 *in_x8;
  
  *in_x8 = 1;
  return;
}


// ===== 00205128  discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden>(facebook::jsi::Runtime&,
   discord::raw::Hidden const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden>
               (Runtime *param_1,Hidden *param_2)

{
  undefined4 *in_x8;
  
  *in_x8 = 0;
  return;
}


// ===== 00205130  discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawValue> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawValue>(facebook::jsi::Runtime&,
   discord::raw::RawValue const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawValue>
               (Runtime *param_1,RawValue *param_2)

{
  long lVar1;
  Runtime *local_30;
  undefined1 *local_28;
  
  lVar1 = raw::RawValue::variant();
  local_30 = param_1;
  if (*(uint *)(lVar1 + 0x30) != 0xffffffff) {
    local_28 = (undefined1 *)&local_30;
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
              )[*(uint *)(lVar1 + 0x30)])(&local_28,lVar1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020519c  discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawBytes> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawBytes>(facebook::jsi::Runtime&,
   discord::raw::RawBytes const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawBytes>
               (Runtime *param_1,RawBytes *param_2)

{
  long lVar1;
  Runtime *local_30;
  undefined1 *local_28;
  
  lVar1 = raw::RawBytes::variant();
  local_30 = param_1;
  if (*(uint *)(lVar1 + 0x20) != 0xffffffff) {
    local_28 = (undefined1 *)&local_30;
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>(facebook_jsi_Runtime&,std___ndk1_variant<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&>_0030a690
              )[*(uint *)(lVar1 + 0x20)])(&local_28,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 00205204  discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawObject> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawObject>(facebook::jsi::Runtime&,
   discord::raw::RawObject const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawObject>
               (Runtime *param_1,RawObject *param_2)

{
  char cVar1;
  undefined8 uVar2;
  String *pSVar3;
  JSError *this;
  undefined8 *local_38;
  
  cVar1 = raw::RawObject::type(param_2);
  if (cVar1 == '\0') {
    uVar2 = raw::RawObject::data(param_2);
    pSVar3 = (String *)raw::RawObject::size(param_2);
    (**(code **)(*(long *)param_1 + 0x110))(&local_38,param_1,uVar2);
                    /* try { // try from 00205264 to 00205273 has its CatchHandler @ 0020530c */
    JsJson::from_json((JsJson *)param_1,(Runtime *)&local_38,pSVar3);
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)();
    }
    return;
  }
  if (cVar1 == '\x01') {
    this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002052b0 to 002052bf has its CatchHandler @ 002052f8 */
    facebook::jsi::JSError::JSError(this,(IRuntime *)param_1,"hson is not supported at this time");
  }
  else {
    this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002052cc to 002052db has its CatchHandler @ 002052f4 */
    facebook::jsi::JSError::JSError(this,(IRuntime *)param_1,"unknown value type");
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00205338  discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Key> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Key>(facebook::jsi::Runtime&,
   discord::api::Key const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Key>
          (Serialize *this,Runtime *param_1,Key *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 *in_x8;
  ulong uVar3;
  Value *pVVar4;
  Value aVStack_d0 [16];
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Serialize *local_70;
  Serialize *local_68;
  
  pVVar4 = aVStack_d0;
  lVar2 = raw::RawValue::variant();
  local_70 = this;
  if (*(uint *)(lVar2 + 0x30) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_001b3508();
  }
  local_68 = (Serialize *)&local_70;
  (*(code *)(&
            PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
            )[*(uint *)(lVar2 + 0x30)])(aVStack_d0,&local_68,lVar2 + 8);
                    /* try { // try from 002053ac to 00205503 has its CatchHandler @ 00205604 */
  lVar2 = raw::RawValue::variant();
  if (*(uint *)(lVar2 + 0x30) == 0xffffffff) {
    local_70 = this;
                    /* try { // try from 002055d0 to 002055f3 has its CatchHandler @ 00205604 */
                    /* WARNING: Subroutine does not return */
    FUN_001b3508();
  }
  local_68 = (Serialize *)&local_70;
  local_70 = this;
  (*(code *)(&
            PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
            )[*(uint *)(lVar2 + 0x30)])(aVStack_c0,&local_68,lVar2 + 8);
  lVar2 = raw::RawValue::variant();
  if (*(uint *)(lVar2 + 0x30) == 0xffffffff) {
    local_70 = this;
                    /* WARNING: Subroutine does not return */
    FUN_001b3508();
  }
  local_68 = (Serialize *)&local_70;
  local_70 = this;
  (*(code *)(&
            PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
            )[*(uint *)(lVar2 + 0x30)])(aVStack_b0,&local_68,lVar2 + 8);
  lVar2 = raw::RawValue::variant();
  if (*(uint *)(lVar2 + 0x30) == 0xffffffff) {
    local_70 = this;
                    /* WARNING: Subroutine does not return */
    FUN_001b3508();
  }
  local_68 = (Serialize *)&local_70;
  local_70 = this;
  (*(code *)(&
            PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
            )[*(uint *)(lVar2 + 0x30)])(aVStack_a0,&local_68,lVar2 + 8);
  lVar2 = raw::RawValue::variant();
  if (*(uint *)(lVar2 + 0x30) == 0xffffffff) {
    local_70 = this;
                    /* WARNING: Subroutine does not return */
    FUN_001b3508();
  }
  local_68 = (Serialize *)&local_70;
  local_70 = this;
  (*(code *)(&
            PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
            )[*(uint *)(lVar2 + 0x30)])(aVStack_90,&local_68,lVar2 + 8);
  lVar2 = raw::RawValue::variant();
  if (*(uint *)(lVar2 + 0x30) == 0xffffffff) {
    local_70 = this;
                    /* WARNING: Subroutine does not return */
    FUN_001b3508();
  }
  local_68 = (Serialize *)&local_70;
  local_70 = this;
  (*(code *)(&
            PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
            )[*(uint *)(lVar2 + 0x30)])(aVStack_80,&local_68,lVar2 + 8);
                    /* try { // try from 00205504 to 0020550b has its CatchHandler @ 002055fc */
  uVar1 = api::Key::length((Key *)param_1);
                    /* try { // try from 0020551c to 0020552b has its CatchHandler @ 002055f4 */
  (**(code **)(*(long *)this + 0x230))(&local_68,this,(ulong)uVar1);
  local_70 = local_68;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
                    /* try { // try from 00205548 to 0020555b has its CatchHandler @ 00205620 */
      (**(code **)(*(long *)this + 0x268))(this,&local_70,uVar3,pVVar4);
      uVar3 = uVar3 + 1;
      pVVar4 = pVVar4 + 0x10;
    } while (uVar1 != uVar3);
  }
  *(Serialize **)(in_x8 + 2) = local_70;
  *in_x8 = 7;
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a0);
  facebook::jsi::Value::~Value(aVStack_b0);
  facebook::jsi::Value::~Value(aVStack_c0);
  facebook::jsi::Value::~Value(aVStack_d0);
  return;
}


// ===== 0020564c  discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Cell> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Cell>(facebook::jsi::Runtime&,
   discord::api::Cell const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Cell>
               (Runtime *param_1,Cell *param_2)

{
  (*(code *)PTR_to_jsi_0030ec90)();
  return;
}


// ===== 00205650  discord::frontends::jsi::codec::Serialize::to_jsi<boost::container::small_vector<discord::api::Cell,1ul,void,void>> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<boost::container::small_vector<discord::api::Cell,
   1ul, void, void> >(facebook::jsi::Runtime&, boost::container::small_vector<discord::api::Cell,
   1ul, void, void> const&) */

void discord::frontends::jsi::codec::Serialize::
     to_jsi<boost::container::small_vector<discord::api::Cell,1ul,void,void>>
               (Runtime *param_1,small_vector *param_2)

{
  (*(code *)PTR_to_list_jsi<discord_api_Cell>_0030f188)();
  return;
}


// ===== 00205654  discord::frontends::jsi::codec::Serialize::to_jsi<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void> >(facebook::jsi::Runtime&,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> const&) */

void discord::frontends::jsi::codec::Serialize::
     to_jsi<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>
               (Runtime *param_1,small_vector *param_2)

{
  long lVar1;
  small_vector *in_x2;
  Value *in_x8;
  long lVar2;
  long lVar3;
  undefined8 local_98 [2];
  char local_88;
  undefined8 local_80;
  undefined8 *local_78;
  Runtime *local_70;
  Runtime **local_68;
  
  SerializeRawValues::to_jsi<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>
            ((SerializeRawValues *)param_1,(Runtime *)param_2,in_x2);
  if (local_88 == '\0') {
    (**(code **)(*(long *)param_1 + 0x230))(&local_78,param_1,*(undefined8 *)(param_2 + 8));
    if (*(long *)(param_2 + 8) != 0) {
      lVar2 = 0;
      lVar3 = *(long *)(param_2 + 8) * 0x38;
      do {
                    /* try { // try from 002056fc to 0020572f has its CatchHandler @ 00205780 */
        lVar1 = raw::RawValue::variant();
        local_70 = param_1;
        if (*(uint *)(lVar1 + 0x30) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00205768 to 0020576b has its CatchHandler @ 00205780 */
          FUN_001b3508();
        }
        local_68 = &local_70;
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
                  )[*(uint *)(lVar1 + 0x30)])(local_98,&local_68,lVar1 + 8);
                    /* try { // try from 00205738 to 0020574b has its CatchHandler @ 00205770 */
        (**(code **)(*(long *)param_1 + 0x268))(param_1,&local_78,lVar2,local_98);
        facebook::jsi::Value::~Value((Value *)local_98);
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != 0);
      if (lVar2 != *(long *)(param_2 + 8)) {
                    /* try { // try from 00205808 to 00205817 has its CatchHandler @ 002058cc */
        (**(code **)(*(long *)param_1 + 0x230))(local_98,param_1,lVar2);
        local_80 = local_98[0];
        if (lVar2 != 0) {
          lVar3 = 0;
          do {
                    /* try { // try from 00205830 to 00205843 has its CatchHandler @ 002058d4 */
            (**(code **)(*(long *)param_1 + 0x260))(local_98,param_1,&local_78,lVar3);
                    /* try { // try from 0020584c to 0020585f has its CatchHandler @ 002058dc */
            (**(code **)(*(long *)param_1 + 0x268))(param_1,&local_80,lVar3,local_98);
            facebook::jsi::Value::~Value((Value *)local_98);
            lVar3 = lVar3 + 1;
          } while (lVar2 != lVar3);
        }
        *(undefined8 *)(in_x8 + 8) = local_80;
        *(undefined4 *)in_x8 = 7;
        if (local_78 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*local_78)();
        return;
      }
    }
    *(undefined4 *)in_x8 = 7;
    *(undefined8 **)(in_x8 + 8) = local_78;
  }
  else {
    facebook::jsi::Value::Value(in_x8,(Value *)local_98);
    if (local_88 != '\0') {
      facebook::jsi::Value::~Value((Value *)local_98);
    }
  }
  return;
}


// ===== 00205918  discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::map<discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > >
   >(facebook::jsi::Runtime&, std::__ndk1::map<discord::raw::RawValue,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void>,
   std::__ndk1::less<discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue const,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> > > > const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::
to_jsi<std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>>
          (Serialize *this,Runtime *param_1,map *param_2)

{
  Runtime *pRVar1;
  bool bVar2;
  long lVar3;
  undefined4 *in_x8;
  long lVar4;
  Runtime *pRVar5;
  Runtime *pRVar6;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  Serialize *local_70;
  Serialize **local_68;
  
  (**(code **)(*(long *)this + 0x230))(&local_90,this,*(undefined8 *)(param_1 + 0x10));
  pRVar5 = *(Runtime **)param_1;
  if (pRVar5 == param_1 + 8) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
                    /* try { // try from 0020599c to 002059ab has its CatchHandler @ 00205acc */
      (**(code **)(*(long *)this + 0x230))(&local_78,this,2);
                    /* try { // try from 002059ac to 002059df has its CatchHandler @ 00205ad0 */
      lVar3 = raw::RawValue::variant();
      local_70 = this;
      if (*(uint *)(lVar3 + 0x30) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00205a9c to 00205a9f has its CatchHandler @ 00205ad0 */
        FUN_001b3508();
      }
      local_68 = &local_70;
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
                )[*(uint *)(lVar3 + 0x30)])(local_88,&local_68,lVar3 + 8);
                    /* try { // try from 002059e8 to 002059fb has its CatchHandler @ 00205abc */
      (**(code **)(*(long *)this + 0x268))(this,&local_78,0,local_88);
      facebook::jsi::Value::~Value((Value *)local_88);
                    /* try { // try from 00205a04 to 00205a13 has its CatchHandler @ 00205ab8 */
      to_jsi<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>
                ((Runtime *)this,(small_vector *)(pRVar5 + 0x58));
                    /* try { // try from 00205a1c to 00205a2f has its CatchHandler @ 00205ab4 */
      (**(code **)(*(long *)this + 0x268))(this,&local_78,1,local_88);
      facebook::jsi::Value::~Value((Value *)local_88);
      local_a0 = CONCAT44(local_a0._4_4_,7);
      local_98 = local_78;
                    /* try { // try from 00205a4c to 00205a5f has its CatchHandler @ 00205aa4 */
      (**(code **)(*(long *)this + 0x268))(this,&local_90,lVar4,&local_a0);
      facebook::jsi::Value::~Value((Value *)&local_a0);
      lVar4 = lVar4 + 1;
      pRVar1 = *(Runtime **)(pRVar5 + 8);
      pRVar6 = pRVar5;
      if (*(Runtime **)(pRVar5 + 8) == (Runtime *)0x0) {
        do {
          pRVar5 = *(Runtime **)(pRVar6 + 0x10);
          bVar2 = *(Runtime **)pRVar5 != pRVar6;
          pRVar6 = pRVar5;
        } while (bVar2);
      }
      else {
        do {
          pRVar5 = pRVar1;
          pRVar1 = *(Runtime **)pRVar5;
        } while (*(Runtime **)pRVar5 != (Runtime *)0x0);
      }
    } while (pRVar5 != param_1 + 8);
  }
  if (lVar4 == *(long *)(param_1 + 0x10)) {
    *in_x8 = 7;
    *(undefined8 **)(in_x8 + 2) = local_90;
  }
  else {
                    /* try { // try from 00205b70 to 00205b7f has its CatchHandler @ 00205c34 */
    (**(code **)(*(long *)this + 0x230))(local_88,this,lVar4);
    local_a0 = local_88[0];
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
                    /* try { // try from 00205b98 to 00205bab has its CatchHandler @ 00205c3c */
        (**(code **)(*(long *)this + 0x260))(local_88,this,&local_90,lVar3);
                    /* try { // try from 00205bb4 to 00205bc7 has its CatchHandler @ 00205c44 */
        (**(code **)(*(long *)this + 0x268))(this,&local_a0,lVar3,local_88);
        facebook::jsi::Value::~Value((Value *)local_88);
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(undefined8 *)(in_x8 + 2) = local_a0;
    *in_x8 = 7;
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)();
    }
  }
  return;
}


// ===== 00205c80  discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,
   discord::raw::RawValue>, std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,
   discord::raw::RawValue> > > >(facebook::jsi::Runtime&,
   std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue>,
   std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue, discord::raw::RawValue> > >
   const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::
to_jsi<std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>>
          (Serialize *this,Runtime *param_1,vector *param_2)

{
  long lVar1;
  undefined4 *in_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  Serialize *local_80;
  Serialize **local_78;
  Serialize *local_70;
  Serialize **local_68;
  
  (**(code **)(*(long *)this + 0x230))
            (&local_a0,this,(*(long *)(param_1 + 8) - *(long *)param_1 >> 4) * 0x6db6db6db6db6db7);
  lVar3 = *(long *)param_1;
  lVar4 = *(long *)(param_1 + 8);
  if (lVar3 == lVar4) {
    lVar2 = 0;
    lVar4 = lVar3;
  }
  else {
    lVar2 = 0;
    do {
                    /* try { // try from 00205d08 to 00205d17 has its CatchHandler @ 00205e40 */
      (**(code **)(*(long *)this + 0x230))(&local_88,this,2);
                    /* try { // try from 00205d18 to 00205d4b has its CatchHandler @ 00205e48 */
      lVar1 = raw::RawValue::variant();
      local_80 = this;
      if (*(uint *)(lVar1 + 0x30) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00205e0c to 00205e0f has its CatchHandler @ 00205e48 */
        FUN_001b3508();
      }
      local_78 = &local_80;
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
                )[*(uint *)(lVar1 + 0x30)])(local_98,&local_78,lVar1 + 8);
                    /* try { // try from 00205d54 to 00205d67 has its CatchHandler @ 00205e30 */
      (**(code **)(*(long *)this + 0x268))(this,&local_88,0,local_98);
      facebook::jsi::Value::~Value((Value *)local_98);
                    /* try { // try from 00205d70 to 00205da3 has its CatchHandler @ 00205e44 */
      lVar1 = raw::RawValue::variant();
      local_70 = this;
      if (*(uint *)(lVar1 + 0x30) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00205e14 to 00205e17 has its CatchHandler @ 00205e44 */
        FUN_001b3508();
      }
      local_68 = &local_70;
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>(facebook_jsi_Runtime&,std___ndk1_variant<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030a650
                )[*(uint *)(lVar1 + 0x30)])(local_98,&local_68,lVar1 + 8);
                    /* try { // try from 00205dac to 00205dbf has its CatchHandler @ 00205e2c */
      (**(code **)(*(long *)this + 0x268))(this,&local_88,1,local_98);
      facebook::jsi::Value::~Value((Value *)local_98);
      local_b0 = CONCAT44(local_b0._4_4_,7);
      local_a8 = local_88;
                    /* try { // try from 00205ddc to 00205def has its CatchHandler @ 00205e1c */
      (**(code **)(*(long *)this + 0x268))(this,&local_a0,lVar2,&local_b0);
      facebook::jsi::Value::~Value((Value *)&local_b0);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != lVar4);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)param_1;
  }
  if (lVar2 == (lVar3 - lVar4 >> 4) * 0x6db6db6db6db6db7) {
    *in_x8 = 7;
    *(undefined8 **)(in_x8 + 2) = local_a0;
  }
  else {
                    /* try { // try from 00205f10 to 00205f1f has its CatchHandler @ 00205fd4 */
    (**(code **)(*(long *)this + 0x230))(local_98,this,lVar2);
    local_b0 = local_98[0];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
                    /* try { // try from 00205f38 to 00205f4b has its CatchHandler @ 00205fdc */
        (**(code **)(*(long *)this + 0x260))(local_98,this,&local_a0,lVar3);
                    /* try { // try from 00205f54 to 00205f67 has its CatchHandler @ 00205fe4 */
        (**(code **)(*(long *)this + 0x268))(this,&local_b0,lVar3,local_98);
        facebook::jsi::Value::~Value((Value *)local_98);
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(in_x8 + 2) = local_b0;
    *in_x8 = 7;
    if (local_a0 != (undefined8 *)0x0) {
      (**(code **)*local_a0)();
    }
  }
  return;
}


// ===== 00206020  discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Timings> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Timings>(facebook::jsi::Runtime&,
   discord::api::Timings const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Timings>
               (Runtime *param_1,Timings *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *in_x2;
  undefined8 local_110;
  Value aVStack_108 [16];
  undefined8 local_f8;
  Value aVStack_f0 [16];
  undefined8 local_e0;
  Value aVStack_d8 [16];
  undefined8 local_c8;
  Value aVStack_c0 [16];
  char *local_b0;
  Value aVStack_a8 [16];
  char *local_98;
  Value aVStack_90 [16];
  char *local_80;
  Value aVStack_78 [16];
  char *local_68;
  Value aVStack_60 [16];
  
  local_c8 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  to_jsi<unsigned_long>((Serialize *)param_1,(Runtime *)&local_c8,in_x2);
  local_b0 = "queueTimeNanoseconds";
  facebook::jsi::Value::Value(aVStack_a8,aVStack_c0);
                    /* try { // try from 00206080 to 0020608f has its CatchHandler @ 002061ec */
  local_e0 = uVar2;
  to_jsi<unsigned_long>((Serialize *)param_1,(Runtime *)&local_e0,in_x2);
  local_98 = "executionTimeNanoseconds";
  facebook::jsi::Value::Value(aVStack_90,aVStack_d8);
                    /* try { // try from 002060b0 to 002060bf has its CatchHandler @ 002061cc */
  local_f8 = uVar1;
  to_jsi<unsigned_long>((Serialize *)param_1,(Runtime *)&local_f8,in_x2);
  local_80 = "materializationTimeNanoseconds";
  facebook::jsi::Value::Value(aVStack_78,aVStack_f0);
  local_110 = uVar3;
                    /* try { // try from 002060e0 to 002060ef has its CatchHandler @ 002061b4 */
  to_jsi<unsigned_long>((Serialize *)param_1,(Runtime *)&local_110,in_x2);
  local_68 = "totalTimeNanoseconds";
  facebook::jsi::Value::Value(aVStack_60,aVStack_108);
                    /* try { // try from 00206108 to 0020611b has its CatchHandler @ 0020617c */
  create_object(param_1,&local_b0,4);
  facebook::jsi::Value::~Value(aVStack_60);
  facebook::jsi::Value::~Value(aVStack_78);
  facebook::jsi::Value::~Value(aVStack_90);
  facebook::jsi::Value::~Value(aVStack_a8);
  facebook::jsi::Value::~Value(aVStack_108);
  facebook::jsi::Value::~Value(aVStack_f0);
  facebook::jsi::Value::~Value(aVStack_d8);
  facebook::jsi::Value::~Value(aVStack_c0);
  return;
}


// ===== 0020621c  discord::frontends::jsi::codec::Serialize::to_jsi<discord::frontends::jsi::JsResponse> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::frontends::jsi::JsResponse>(facebook::jsi::Runtime&,
   discord::frontends::jsi::JsResponse const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::frontends::jsi::JsResponse>
               (Runtime *param_1,JsResponse *param_2)

{
  bool *in_x2;
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  undefined *local_a0;
  Value aVStack_98 [16];
  undefined *local_88;
  Value aVStack_80 [16];
  undefined *local_70;
  Value aVStack_68 [16];
  char *local_58;
  Value aVStack_50 [16];
  
  to_jsi<unsigned_long>((Serialize *)param_1,(Runtime *)param_2,(ulong *)in_x2);
  local_a0 = &DAT_0017265f;
  facebook::jsi::Value::Value(aVStack_98,aVStack_b0);
                    /* try { // try from 00206268 to 00206277 has its CatchHandler @ 002063c8 */
  to_jsi<bool>((Serialize *)param_1,(Runtime *)(param_2 + 8),in_x2);
  local_88 = &DAT_00175b3c;
  facebook::jsi::Value::Value(aVStack_80,aVStack_c0);
                    /* try { // try from 00206294 to 002062a3 has its CatchHandler @ 002063a8 */
  facebook::jsi::Value::Value(aVStack_d0,(IRuntime *)param_1,(Value *)(param_2 + 0x10));
  local_70 = &DAT_00175973;
  facebook::jsi::Value::Value(aVStack_68,aVStack_d0);
                    /* try { // try from 002062c0 to 002062cf has its CatchHandler @ 00206390 */
  to_jsi<discord::api::Timings>(param_1,(Timings *)(param_2 + 0x20));
  local_58 = "timings";
  facebook::jsi::Value::Value(aVStack_50,aVStack_e0);
                    /* try { // try from 002062e8 to 002062fb has its CatchHandler @ 00206358 */
  create_object(param_1,&local_a0,4);
  facebook::jsi::Value::~Value(aVStack_50);
  facebook::jsi::Value::~Value(aVStack_68);
  facebook::jsi::Value::~Value(aVStack_80);
  facebook::jsi::Value::~Value(aVStack_98);
  facebook::jsi::Value::~Value(aVStack_e0);
  facebook::jsi::Value::~Value(aVStack_d0);
  facebook::jsi::Value::~Value(aVStack_c0);
  facebook::jsi::Value::~Value(aVStack_b0);
  return;
}


// ===== 002063f8  discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response>(facebook::jsi::Runtime&,
   discord::api::Response const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::Response>
               (Runtime *param_1,Response *param_2)

{
  Value *in_x2;
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  Runtime *local_c0 [2];
  Runtime **local_b0;
  Value aVStack_a8 [8];
  void *local_a0;
  undefined *local_98;
  Value aVStack_90 [16];
  undefined *local_80;
  Value aVStack_78 [16];
  char *local_68;
  Value aVStack_60 [16];
  Runtime aRStack_50 [16];
  Runtime local_24 [4];
  
  if (*(int *)(param_2 + 0x1e0) == 1) {
    Error::to_string();
                    /* try { // try from 00206470 to 0020647f has its CatchHandler @ 002065e0 */
    to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((Serialize *)param_1,(Runtime *)&local_b0,(basic_string *)in_x2);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
LAB_00206490:
    if (param_2[8] == (Response)0x0) {
      local_c0[0] = (Runtime *)CONCAT44(local_c0[0]._4_4_,1);
    }
    else {
                    /* try { // try from 00206498 to 002064a7 has its CatchHandler @ 002065fc */
      to_jsi<unsigned_long>((Serialize *)param_1,(Runtime *)param_2,(ulong *)in_x2);
    }
    local_b0 = (Runtime **)&DAT_0017265f;
    facebook::jsi::Value::Value(aVStack_a8,(Value *)local_c0);
    local_24[0] = (Runtime)(*(int *)(param_2 + 0x1e0) == 0);
                    /* try { // try from 002064e4 to 002064f3 has its CatchHandler @ 00206674 */
    to_jsi<bool>((Serialize *)param_1,local_24,(bool *)in_x2);
    local_98 = &DAT_00175b3c;
    facebook::jsi::Value::Value(aVStack_90,aVStack_d0);
                    /* try { // try from 00206510 to 0020651f has its CatchHandler @ 00206654 */
    to_jsi<facebook::jsi::Value>((Serialize *)param_1,aRStack_50,in_x2);
    local_80 = &DAT_00175973;
    facebook::jsi::Value::Value(aVStack_78,aVStack_e0);
                    /* try { // try from 0020653c to 0020654b has its CatchHandler @ 0020663c */
    to_jsi<discord::api::Timings>(param_1,(Timings *)(param_2 + 0x1e8));
    local_68 = "timings";
    facebook::jsi::Value::Value(aVStack_60,aVStack_f0);
                    /* try { // try from 00206564 to 00206577 has its CatchHandler @ 00206604 */
    create_object(param_1,&local_b0,4);
    facebook::jsi::Value::~Value(aVStack_60);
    facebook::jsi::Value::~Value(aVStack_78);
    facebook::jsi::Value::~Value(aVStack_90);
    facebook::jsi::Value::~Value(aVStack_a8);
    facebook::jsi::Value::~Value(aVStack_f0);
    facebook::jsi::Value::~Value(aVStack_e0);
    facebook::jsi::Value::~Value(aVStack_d0);
    facebook::jsi::Value::~Value((Value *)local_c0);
    facebook::jsi::Value::~Value((Value *)aRStack_50);
    return;
  }
  if (*(int *)(param_2 + 0x1e0) == 0) {
    local_c0[0] = param_1;
    if (*(uint *)(param_2 + 0x1d8) != 0xffffffff) {
      local_b0 = local_c0;
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<discord_None,discord_api_Cell,boost_container_small_vector<discord_api_Cell,1ul,void,void>,discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_map<discord_raw_RawValue,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>,std___ndk1_less<discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_pair<discord_raw_RawValue_const,boost_container_small_vector<discord_raw_RawValue,1ul,void,void>>>>,std___ndk1_vector<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>,std___ndk1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>(facebook_jsi_Runtime&,std___ndk1_variant<discord_None,discord_api_Cell,boost_container_small_vector<discord_api_Cell,1ul,void,void>,discord_raw_RawValue,boost_container_small_ve___>,std___ndk1_allocator<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>>>const_>_0030a6a8
                )[*(uint *)(param_2 + 0x1d8)])(aRStack_50,&local_b0,param_2 + 0x20);
      goto LAB_00206490;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 002066ac  discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::DatabaseState> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::DatabaseState>(facebook::jsi::Runtime&,
   discord::api::DatabaseState const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::DatabaseState>
          (Serialize *this,Runtime *param_1,DatabaseState *param_2)

{
  uint local_14;
  
  local_14 = (uint)(byte)*param_1;
  to_jsi<unsigned_int>(this,(Runtime *)&local_14,(uint *)param_2);
  return;
}


// ===== 002066d4  discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::DatabaseStatus> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::DatabaseStatus>(facebook::jsi::Runtime&,
   discord::api::DatabaseStatus const&) */

void discord::frontends::jsi::codec::Serialize::to_jsi<discord::api::DatabaseStatus>
               (Runtime *param_1,DatabaseStatus *param_2)

{
  ulong *in_x2;
  Value aVStack_88 [16];
  Value aVStack_78 [16];
  char *local_68;
  Value aVStack_60 [16];
  char *local_50;
  Value aVStack_48 [20];
  uint local_34;
  
  to_jsi<unsigned_long>((Serialize *)param_1,(Runtime *)param_2,in_x2);
  local_68 = "handle";
  facebook::jsi::Value::Value(aVStack_60,aVStack_78);
  local_34 = (uint)(byte)param_2[8];
                    /* try { // try from 00206720 to 0020672f has its CatchHandler @ 002067bc */
  to_jsi<unsigned_int>((Serialize *)param_1,(Runtime *)&local_34,(uint *)in_x2);
  local_50 = "state";
  facebook::jsi::Value::Value(aVStack_48,aVStack_88);
                    /* try { // try from 00206748 to 0020675b has its CatchHandler @ 00206794 */
  create_object(param_1,&local_68,2);
  facebook::jsi::Value::~Value(aVStack_48);
  facebook::jsi::Value::~Value(aVStack_60);
  facebook::jsi::Value::~Value(aVStack_88);
  facebook::jsi::Value::~Value(aVStack_78);
  return;
}


// ===== 002067d8  std::__ndk1::array<facebook::jsi::Value,6ul>::~array =====

/* std::__ndk1::array<facebook::jsi::Value, 6ul>::~array() */

void __thiscall
std::__ndk1::array<facebook::jsi::Value,6ul>::~array(array<facebook::jsi::Value,6ul> *this)

{
  facebook::jsi::Value::~Value((Value *)(this + 0x50));
  facebook::jsi::Value::~Value((Value *)(this + 0x40));
  facebook::jsi::Value::~Value((Value *)(this + 0x30));
  facebook::jsi::Value::~Value((Value *)(this + 0x20));
  facebook::jsi::Value::~Value((Value *)(this + 0x10));
  facebook::jsi::Value::~Value((Value *)this);
  return;
}


// ===== 00206820  discord::frontends::jsi::codec::Serialize::to_list_jsi<discord::api::Cell> =====

/* facebook::jsi::Value
   discord::frontends::jsi::codec::Serialize::to_list_jsi<discord::api::Cell>(facebook::jsi::Runtime&,
   boost::container::small_vector_base<discord::api::Cell, void, void> const&) */

void __thiscall
discord::frontends::jsi::codec::Serialize::to_list_jsi<discord::api::Cell>
          (Serialize *this,Runtime *param_1,small_vector_base *param_2)

{
  undefined4 *in_x8;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_58 [2];
  undefined8 local_48;
  
  lVar1 = *(long *)(param_1 + 8);
  (**(code **)(*(long *)this + 0x230))(local_58,this,lVar1);
  local_48 = local_58[0];
  if (lVar1 != 0) {
    lVar3 = 0;
    lVar2 = 0;
    do {
                    /* try { // try from 00206874 to 00206883 has its CatchHandler @ 002068e0 */
      JsCell::to_jsi((Runtime *)this,(Cell *)(*(long *)param_1 + lVar3));
                    /* try { // try from 0020688c to 0020689f has its CatchHandler @ 002068e8 */
      (**(code **)(*(long *)this + 0x268))(this,&local_48,lVar2,local_58);
      facebook::jsi::Value::~Value((Value *)local_58);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x1a0;
      local_58[0] = local_48;
    } while (lVar1 != lVar2);
  }
  *(undefined8 *)(in_x8 + 2) = local_58[0];
  *in_x8 = 7;
  return;
}


// ===== 00206910  discord::frontends::jsi::codec::SerializeRawValues::to_jsi<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>> =====

/* std::__ndk1::optional<facebook::jsi::Value>
   discord::frontends::jsi::codec::SerializeRawValues::to_jsi<boost::container::small_vector<discord::raw::RawValue,
   1ul, void, void> >(facebook::jsi::Runtime&,
   boost::container::small_vector<discord::raw::RawValue, 1ul, void, void> const&) */

void __thiscall
discord::frontends::jsi::codec::SerializeRawValues::
to_jsi<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>
          (SerializeRawValues *this,Runtime *param_1,small_vector *param_2)

{
  long lVar1;
  String *pSVar2;
  Value *in_x8;
  undefined4 local_70 [2];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  void *local_50;
  void *local_48;
  char local_38;
  undefined8 *local_18;
  
  raw::RawJsonValues::
  json_string<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>
            ((RawJsonValues *)param_1,(small_vector *)param_1);
  if (local_38 == '\0') {
    *in_x8 = (Value)0x0;
    in_x8[0x10] = (Value)0x0;
  }
  else {
    pSVar2 = (String *)((long)local_48 - (long)local_50);
                    /* try { // try from 00206954 to 0020695f has its CatchHandler @ 00206aec */
    (**(code **)(*(long *)this + 0x110))(&local_18,this);
                    /* try { // try from 00206960 to 0020696f has its CatchHandler @ 00206acc */
    JsJson::from_json((JsJson *)this,(Runtime *)&local_18,pSVar2);
                    /* try { // try from 00206970 to 0020697f has its CatchHandler @ 00206ab8 */
    facebook::jsi::Value::asObject((IRuntime *)local_70);
                    /* try { // try from 00206980 to 0020698f has its CatchHandler @ 00206a94 */
    facebook::jsi::Object::asArray((IRuntime *)&local_60);
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)();
    }
    facebook::jsi::Value::~Value((Value *)local_70);
                    /* try { // try from 002069b4 to 002069bf has its CatchHandler @ 00206a70 */
    lVar1 = (**(code **)(*(long *)this + 0x240))(this,&local_58);
    if (lVar1 == *(long *)(param_1 + 8)) {
      local_70[0] = 7;
      local_68 = local_58;
      local_58 = (undefined8 *)0x0;
      facebook::jsi::Value::Value(in_x8,(Value *)local_70);
      in_x8[0x10] = (Value)0x1;
      facebook::jsi::Value::~Value((Value *)local_70);
    }
    else {
      *in_x8 = (Value)0x0;
      in_x8[0x10] = (Value)0x0;
    }
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)();
    }
    if (local_18 != (undefined8 *)0x0) {
      (**(code **)*local_18)();
    }
  }
  if ((local_38 != '\0') && (local_50 != (void *)0x0)) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  return;
}


// ===== 00206b38  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&>
          (__value_visitor *param_1,__base *param_2)

{
  undefined4 *in_x8;
  
  *in_x8 = 0;
  return (_func_decltype_auto *)param_1;
}


// ===== 00206b40  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&>
          (__value_visitor *param_1,__base *param_2)

{
  undefined4 *in_x8;
  
  *in_x8 = 1;
  return (_func_decltype_auto *)param_1;
}


// ===== 00206b4c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&>
          (__dispatcher<2ul> *this,__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<bool>
                     ((Serialize *)**(undefined8 **)this,(Runtime *)param_1,(bool *)param_2);
  return p_Var1;
}


// ===== 00206b58  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&>
          (__dispatcher<3ul> *this,__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<unsigned_long>
                     ((Serialize *)**(undefined8 **)this,(Runtime *)param_1,(ulong *)param_2);
  return p_Var1;
}


// ===== 00206b64  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&>
          (__dispatcher<4ul> *this,__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<long>
                     ((Serialize *)**(undefined8 **)this,(Runtime *)param_1,(long *)param_2);
  return p_Var1;
}


// ===== 00206b70  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&>
          (__dispatcher<5ul> *this,__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<double>
                     ((Serialize *)**(undefined8 **)this,(Runtime *)param_1,(double *)param_2);
  return p_Var1;
}


// ===== 00206b7c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&>
          (__value_visitor *param_1,__base *param_2)

{
  long lVar1;
  _func_decltype_auto *p_Var2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined1 *local_28;
  
  uVar3 = **(undefined8 **)param_1;
  lVar1 = discord::raw::RawBytes::variant();
  local_30 = uVar3;
  if (*(uint *)(lVar1 + 0x20) != 0xffffffff) {
    local_28 = (undefined1 *)&local_30;
    p_Var2 = (_func_decltype_auto *)
             (*(code *)(&
                       PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<discord_frontends_jsi_codec_Serialize_to_jsi<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>(facebook_jsi_Runtime&,std___ndk1_variant<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&>_0030a690
                       )[*(uint *)(lVar1 + 0x20)])(&local_28,lVar1);
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 00206be8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<7ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<7ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject>(facebook::jsi::Runtime&, std::__ndk1::variant<discord::raw::Hidden,
   discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   discord::raw::Hidden, discord::None, bool, unsigned long, long, double, discord::raw::RawBytes,
   discord::raw::RawObject> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<7ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>(facebook::jsi::Runtime&,std::__ndk1::variant<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>const&>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::to_jsi<discord::raw::RawObject>
                     ((Runtime *)**(undefined8 **)param_1,(RawObject *)param_2);
  return p_Var1;
}


// ===== 00206bf4  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> >(facebook::jsi::Runtime&, std::__ndk1::variant<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> > const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> >(facebook::jsi::Runtime&, std::__ndk1::variant<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> > const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&>
          (__dispatcher<0ul> *this,__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::
           to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((Serialize *)**(undefined8 **)this,(Runtime *)param_1,(basic_string *)param_2)
  ;
  return p_Var1;
}


// ===== 00206c00  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> >(facebook::jsi::Runtime&, std::__ndk1::variant<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> > const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> >(facebook::jsi::Runtime&, std::__ndk1::variant<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> > const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::
           to_jsi<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>
                     ((Runtime *)**(undefined8 **)param_1,(vector *)param_2);
  return p_Var1;
}


// ===== 00206c0c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> >(facebook::jsi::Runtime&, std::__ndk1::variant<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> > const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> >(facebook::jsi::Runtime&, std::__ndk1::variant<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> > const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<discord::frontends::jsi::codec::Serialize::to_jsi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&>
          (__value_visitor *param_1,__base *param_2)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)
           discord::frontends::jsi::codec::Serialize::
           to_jsi<boost::container::small_vector<unsigned_char,8ul,void,void>>
                     ((Runtime *)**(undefined8 **)param_1,(small_vector *)param_2);
  return p_Var1;
}


// ===== 00206c18  discord::frontends::jsi::create_object =====

/* discord::frontends::jsi::create_object(facebook::jsi::Runtime&,
   std::initializer_list<std::__ndk1::tuple<char const*, facebook::jsi::Value> >) */

void discord::frontends::jsi::create_object
               (undefined4 *param_1_00,IRuntime *param_1,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 local_38;
  
  (**(code **)(*(long *)param_1 + 0x130))(&local_38);
  local_40 = local_38;
  if (param_4 != 0) {
    puVar1 = param_3 + param_4 * 3;
    do {
                    /* try { // try from 00206c64 to 00206c73 has its CatchHandler @ 00206ca4 */
      facebook::jsi::Object::setProperty<facebook::jsi::Value_const&>
                ((Object *)&local_40,param_1,(char *)*param_3,(Value *)(param_3 + 1));
      param_3 = param_3 + 3;
      local_38 = local_40;
    } while (param_3 != puVar1);
  }
  *(undefined8 *)(param_1_00 + 2) = local_38;
  *param_1_00 = 7;
  return;
}


// ===== 00206cc8  discord::frontends::jsi::inspect_value =====

/* discord::frontends::jsi::inspect_value(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

char * discord::frontends::jsi::inspect_value(Runtime *param_1,Value *param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *local_28;
  
  iVar1 = *(int *)param_2;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      return "undefined";
    }
    if (iVar1 == 1) {
      return "null";
    }
    if (iVar1 == 2) {
      return "bool";
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 3) {
      return "number";
    }
    if (iVar1 == 4) {
      return "symbol";
    }
  }
  else {
    if (iVar1 == 6) {
      return "string";
    }
    if (iVar1 == 7) {
      facebook::jsi::Value::asObject((IRuntime *)param_2);
                    /* try { // try from 00206d54 to 00206e0b has its CatchHandler @ 00206e54 */
      uVar2 = (**(code **)(*(long *)param_1 + 0x1e0))(param_1,&local_28);
      if ((uVar2 & 1) == 0) {
        uVar2 = (**(code **)(*(long *)param_1 + 0x1e8))(param_1,&local_28);
        if ((uVar2 & 1) == 0) {
          uVar2 = (**(code **)(*(long *)param_1 + 0x200))(param_1,&local_28);
          if ((uVar2 & 1) == 0) {
            uVar2 = (**(code **)(*(long *)param_1 + 0x208))(param_1,&local_28);
            pcVar3 = "host_object";
            if ((uVar2 & 1) == 0) {
              pcVar3 = "object";
            }
          }
          else {
            pcVar3 = "function";
          }
        }
        else {
          pcVar3 = "array_buffer";
        }
      }
      else {
        pcVar3 = "array";
      }
      if (local_28 == (undefined8 *)0x0) {
        return pcVar3;
      }
      (**(code **)*local_28)(local_28);
      return pcVar3;
    }
  }
  return "unknown";
}


// ===== 00206e78  discord::frontends::jsi::inspect_value_string =====

/* discord::frontends::jsi::inspect_value_string(facebook::jsi::Runtime&, facebook::jsi::Value
   const&) */

void __thiscall
discord::frontends::jsi::inspect_value_string(jsi *this,Runtime *param_1,Value *param_2)

{
  char *__s;
  size_t __n;
  long *in_x8;
  void *__dest;
  
  __s = (char *)inspect_value((Runtime *)this,(Value *)param_1);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_001b1970();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00206ee8;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    in_x8[1] = __n;
    in_x8[2] = (long)__dest;
    *in_x8 = (__n | 0xf) + 2;
  }
  memmove(__dest,__s,__n);
LAB_00206ee8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00206f04  facebook::jsi::Object::setProperty<facebook::jsi::Value_const&> =====

/* void facebook::jsi::Object::setProperty<facebook::jsi::Value const&>(facebook::jsi::IRuntime&,
   char const*, facebook::jsi::Value const&) const */

void __thiscall
facebook::jsi::Object::setProperty<facebook::jsi::Value_const&>
          (Object *this,IRuntime *param_1,char *param_2,Value *param_3)

{
  size_t sVar1;
  undefined8 *local_48;
  Value aVStack_40 [16];
  
  sVar1 = strlen(param_2);
  (**(code **)(*(long *)param_1 + 0x108))(&local_48,param_1,param_2,sVar1);
                    /* try { // try from 00206f4c to 00206f5b has its CatchHandler @ 00206fb8 */
  facebook::jsi::Value::Value(aVStack_40,param_1,param_3);
                    /* try { // try from 00206f64 to 00206f77 has its CatchHandler @ 00206fa8 */
  (**(code **)(*(long *)param_1 + 0x1b8))(param_1,this,&local_48,aVStack_40);
  facebook::jsi::Value::~Value(aVStack_40);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  return;
}


// ===== 00206fd8  discord::frontends::jsi::JsEnum::c_keys =====

/* discord::frontends::jsi::JsEnum::c_keys(facebook::jsi::Runtime&, facebook::jsi::Object const&) */

void discord::frontends::jsi::JsEnum::c_keys(Runtime *param_1,Object *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  Impl *pIVar4;
  long lVar5;
  JSError *this;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *local_a0 [2];
  undefined8 *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  puVar2 = PTR_object_keys__0030d7d8;
  if ((*(long *)(PTR_object_keys__0030d7d8 + 8) == 0) ||
     (*(long *)(*(long *)(PTR_object_keys__0030d7d8 + 8) + 8) == -1)) {
    (**(code **)(*(long *)param_1 + 0x30))(local_a0,param_1);
                    /* try { // try from 00207030 to 00207047 has its CatchHandler @ 00207338 */
    facebook::jsi::Object::getPropertyAsObject((IRuntime *)local_a0,(char *)param_1);
                    /* try { // try from 00207048 to 0020705f has its CatchHandler @ 00207314 */
    facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_90,(char *)param_1);
                    /* try { // try from 00207060 to 00207067 has its CatchHandler @ 002072dc */
    plVar3 = (long *)operator_new(0x20);
    plVar3[2] = 0;
    puVar1 = PTR_vtable_0030d7a0;
    plVar7 = plVar3 + 3;
    *plVar7 = (long)local_70;
    local_70 = (undefined8 *)0x0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    local_80 = plVar7;
    local_78 = plVar3;
                    /* try { // try from 00207094 to 00207097 has its CatchHandler @ 002072cc */
    pIVar4 = (Impl *)GcCollection::Impl::instance();
    local_60 = plVar7;
    local_58 = plVar3;
    FUN_002223f0(1,plVar3 + 1);
                    /* try { // try from 002070ac to 002070b7 has its CatchHandler @ 002072bc */
    GcCollection::Impl::add(pIVar4,&local_60);
    plVar3 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_58 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar7 = local_78;
    plVar3 = local_80;
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      FUN_002223f0(1,plVar7 + 2);
    }
    lVar5 = *(long *)(puVar2 + 8);
    *(long **)puVar2 = plVar3;
    *(long **)(puVar2 + 8) = plVar7;
    if (lVar5 != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar3 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)();
    }
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)();
    }
    if (local_a0[0] != (undefined8 *)0x0) {
      (**(code **)*local_a0[0])();
    }
    if (*(long *)(puVar2 + 8) == 0) goto LAB_00207288;
  }
  plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
  local_88 = plVar3;
  if (plVar3 != (long *)0x0) {
    puVar6 = *(undefined8 **)puVar2;
    local_90 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      local_70 = (undefined8 *)CONCAT44(local_70._4_4_,7);
                    /* try { // try from 002071e0 to 002071e7 has its CatchHandler @ 0020737c */
      local_68 = (**(code **)(*(long *)param_1 + 0x88))(param_1,*(undefined8 *)param_2);
      local_60 = (long *)((ulong)local_60 & 0xffffffff00000000);
                    /* try { // try from 002071f8 to 00207213 has its CatchHandler @ 00207364 */
      (**(code **)(*(long *)param_1 + 0x280))(local_a0,param_1,puVar6,&local_60,&local_70,1);
      facebook::jsi::Value::~Value((Value *)&local_60);
      facebook::jsi::Value::~Value((Value *)&local_70);
                    /* try { // try from 00207224 to 00207233 has its CatchHandler @ 00207358 */
      codec::Deserialize::
      from_list_throwing<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                (param_1,(Value *)local_a0);
      facebook::jsi::Value::~Value((Value *)local_a0);
    }
    lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar3 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (puVar6 != (undefined8 *)0x0) {
      return;
    }
  }
LAB_00207288:
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00207294 to 002072a3 has its CatchHandler @ 00207398 */
  facebook::jsi::JSError::JSError(this,(IRuntime *)param_1,"Object.keys() was not available.");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 002073ac  discord::frontends::jsi::JsEnum::keys =====

/* discord::frontends::jsi::JsEnum::keys(facebook::jsi::Runtime&, facebook::jsi::Object const&) */

void discord::frontends::jsi::JsEnum::keys(Runtime *param_1,Object *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  Impl *pIVar4;
  long lVar5;
  JSError *this;
  Value *pVVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *local_a0 [2];
  undefined8 *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  puVar2 = PTR_object_keys__0030d7d8;
  if ((*(long *)(PTR_object_keys__0030d7d8 + 8) == 0) ||
     (*(long *)(*(long *)(PTR_object_keys__0030d7d8 + 8) + 8) == -1)) {
    (**(code **)(*(long *)param_1 + 0x30))(local_a0,param_1);
                    /* try { // try from 00207404 to 0020741b has its CatchHandler @ 0020770c */
    facebook::jsi::Object::getPropertyAsObject((IRuntime *)local_a0,(char *)param_1);
                    /* try { // try from 0020741c to 00207433 has its CatchHandler @ 002076e8 */
    facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_90,(char *)param_1);
                    /* try { // try from 00207434 to 0020743b has its CatchHandler @ 002076b0 */
    plVar3 = (long *)operator_new(0x20);
    plVar3[2] = 0;
    puVar1 = PTR_vtable_0030d7a0;
    plVar8 = plVar3 + 3;
    *plVar8 = (long)local_70;
    local_70 = (undefined8 *)0x0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    local_80 = plVar8;
    local_78 = plVar3;
                    /* try { // try from 00207468 to 0020746b has its CatchHandler @ 002076a0 */
    pIVar4 = (Impl *)GcCollection::Impl::instance();
    local_60 = plVar8;
    local_58 = plVar3;
    FUN_002223f0(1,plVar3 + 1);
                    /* try { // try from 00207480 to 0020748b has its CatchHandler @ 00207690 */
    GcCollection::Impl::add(pIVar4,&local_60);
    plVar3 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_58 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar8 = local_78;
    plVar3 = local_80;
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_002223f0(1,plVar8 + 2);
    }
    lVar5 = *(long *)(puVar2 + 8);
    *(long **)puVar2 = plVar3;
    *(long **)(puVar2 + 8) = plVar8;
    if (lVar5 != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar3 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)();
    }
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)();
    }
    if (local_a0[0] != (undefined8 *)0x0) {
      (**(code **)*local_a0[0])();
    }
    if (*(long *)(puVar2 + 8) == 0) goto LAB_0020765c;
  }
  plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
  local_88 = plVar3;
  if (plVar3 != (long *)0x0) {
    puVar7 = *(undefined8 **)puVar2;
    local_90 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      local_70 = (undefined8 *)CONCAT44(local_70._4_4_,7);
                    /* try { // try from 002075b4 to 002075bb has its CatchHandler @ 00207750 */
      local_68 = (**(code **)(*(long *)param_1 + 0x88))(param_1,*(undefined8 *)param_2);
      local_60 = (long *)((ulong)local_60 & 0xffffffff00000000);
                    /* try { // try from 002075cc to 002075e7 has its CatchHandler @ 00207738 */
      pVVar6 = (Value *)&local_60;
      (**(code **)(*(long *)param_1 + 0x280))(local_a0,param_1,puVar7,pVVar6,&local_70,1);
      facebook::jsi::Value::~Value((Value *)&local_60);
      facebook::jsi::Value::~Value((Value *)&local_70);
                    /* try { // try from 002075f8 to 00207607 has its CatchHandler @ 0020772c */
      codec::Deserialize::from_throwing<facebook::jsi::Array>
                ((Deserialize *)param_1,(Runtime *)local_a0,pVVar6);
      facebook::jsi::Value::~Value((Value *)local_a0);
    }
    lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar3 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (puVar7 != (undefined8 *)0x0) {
      return;
    }
  }
LAB_0020765c:
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00207668 to 00207677 has its CatchHandler @ 0020776c */
  facebook::jsi::JSError::JSError(this,(IRuntime *)param_1,"Object.keys() was not available.");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00207780  discord::frontends::jsi::JsEnum::values =====

/* discord::frontends::jsi::JsEnum::values(facebook::jsi::Runtime&, facebook::jsi::Object const&) */

void discord::frontends::jsi::JsEnum::values(Runtime *param_1,Object *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  Impl *pIVar4;
  long lVar5;
  JSError *this;
  Value *pVVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *local_a0 [2];
  undefined8 *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  puVar2 = PTR_object_values__0030d7e0;
  if ((*(long *)(PTR_object_values__0030d7e0 + 8) == 0) ||
     (*(long *)(*(long *)(PTR_object_values__0030d7e0 + 8) + 8) == -1)) {
    (**(code **)(*(long *)param_1 + 0x30))(local_a0,param_1);
                    /* try { // try from 002077d8 to 002077ef has its CatchHandler @ 00207ae0 */
    facebook::jsi::Object::getPropertyAsObject((IRuntime *)local_a0,(char *)param_1);
                    /* try { // try from 002077f0 to 00207807 has its CatchHandler @ 00207abc */
    facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_90,(char *)param_1);
                    /* try { // try from 00207808 to 0020780f has its CatchHandler @ 00207a84 */
    plVar3 = (long *)operator_new(0x20);
    plVar3[2] = 0;
    puVar1 = PTR_vtable_0030d7a0;
    plVar8 = plVar3 + 3;
    *plVar8 = (long)local_70;
    local_70 = (undefined8 *)0x0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    local_80 = plVar8;
    local_78 = plVar3;
                    /* try { // try from 0020783c to 0020783f has its CatchHandler @ 00207a74 */
    pIVar4 = (Impl *)GcCollection::Impl::instance();
    local_60 = plVar8;
    local_58 = plVar3;
    FUN_002223f0(1,plVar3 + 1);
                    /* try { // try from 00207854 to 0020785f has its CatchHandler @ 00207a64 */
    GcCollection::Impl::add(pIVar4,&local_60);
    plVar3 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_58 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar8 = local_78;
    plVar3 = local_80;
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_002223f0(1,plVar8 + 2);
    }
    lVar5 = *(long *)(puVar2 + 8);
    *(long **)puVar2 = plVar3;
    *(long **)(puVar2 + 8) = plVar8;
    if (lVar5 != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar3 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)();
    }
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)();
    }
    if (local_a0[0] != (undefined8 *)0x0) {
      (**(code **)*local_a0[0])();
    }
    if (*(long *)(puVar2 + 8) == 0) goto LAB_00207a30;
  }
  plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
  local_88 = plVar3;
  if (plVar3 != (long *)0x0) {
    puVar7 = *(undefined8 **)puVar2;
    local_90 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      local_70 = (undefined8 *)CONCAT44(local_70._4_4_,7);
                    /* try { // try from 00207988 to 0020798f has its CatchHandler @ 00207b24 */
      local_68 = (**(code **)(*(long *)param_1 + 0x88))(param_1,*(undefined8 *)param_2);
      local_60 = (long *)((ulong)local_60 & 0xffffffff00000000);
                    /* try { // try from 002079a0 to 002079bb has its CatchHandler @ 00207b0c */
      pVVar6 = (Value *)&local_60;
      (**(code **)(*(long *)param_1 + 0x280))(local_a0,param_1,puVar7,pVVar6,&local_70,1);
      facebook::jsi::Value::~Value((Value *)&local_60);
      facebook::jsi::Value::~Value((Value *)&local_70);
                    /* try { // try from 002079cc to 002079db has its CatchHandler @ 00207b00 */
      codec::Deserialize::from_throwing<facebook::jsi::Array>
                ((Deserialize *)param_1,(Runtime *)local_a0,pVVar6);
      facebook::jsi::Value::~Value((Value *)local_a0);
    }
    lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar3 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (puVar7 != (undefined8 *)0x0) {
      return;
    }
  }
LAB_00207a30:
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00207a3c to 00207a4b has its CatchHandler @ 00207b40 */
  facebook::jsi::JSError::JSError(this,(IRuntime *)param_1,"Object.values() was not available.");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00207b54  FUN_00207b54 =====

void FUN_00207b54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00207b64  discord::frontends::jsi::codec::Deserialize::from_list_throwing<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>> =====

/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   discord::frontends::jsi::codec::Deserialize::from_list_throwing<std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > >(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

void discord::frontends::jsi::codec::Deserialize::
     from_list_throwing<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               (Runtime *param_1,Value *param_2)

{
  ulong *puVar1;
  long lVar2;
  basic_string *pbVar3;
  Value *in_x2;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *in_x8;
  long lVar4;
  Value aVStack_60 [16];
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  undefined8 *local_38;
  
  from_throwing<facebook::jsi::Array>((Deserialize *)param_1,(Runtime *)param_2,in_x2);
                    /* try { // try from 00207b90 to 00207b9b has its CatchHandler @ 00207c78 */
  lVar2 = (**(code **)(*(long *)param_1 + 0x240))(param_1,&local_38);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
                    /* try { // try from 00207ba8 to 00207bb3 has its CatchHandler @ 00207c74 */
  FUN_00207cd0();
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
                    /* try { // try from 00207bf8 to 00207c0b has its CatchHandler @ 00207c98 */
      (**(code **)(*(long *)param_1 + 0x260))(aVStack_60,param_1,&local_38,lVar4);
                    /* try { // try from 00207c0c to 00207c1b has its CatchHandler @ 00207ca0 */
      from_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                (param_1,aVStack_60);
      puVar1 = *(ulong **)(in_x8 + 8);
      if (puVar1 < *(ulong **)(in_x8 + 0x10)) {
        puVar1[2] = (ulong)local_40;
        puVar1[1] = uStack_48;
        *puVar1 = local_50;
        uStack_48 = 0;
        local_40 = (void *)0x0;
        local_50 = 0;
        *(ulong **)(in_x8 + 8) = puVar1 + 3;
      }
      else {
                    /* try { // try from 00207c28 to 00207c33 has its CatchHandler @ 00207c80 */
        pbVar3 = std::__ndk1::
                 vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                 ::
                 __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           (in_x8,(basic_string *)&local_50);
        *(basic_string **)(in_x8 + 8) = pbVar3;
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
      }
      facebook::jsi::Value::~Value(aVStack_60);
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)();
  }
  return;
}


// ===== 00207cd0  FUN_00207cd0 =====

byte * FUN_00207cd0(byte *param_1,ulong param_2)

{
  ulong uVar1;
  byte *pbVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  pbVar13 = *(byte **)param_1;
  if ((ulong)((*(long *)(param_1 + 0x10) - (long)pbVar13 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      auVar18 = FUN_001b5650(param_1);
      puVar5 = auVar18._8_8_;
      plVar3 = auVar18._0_8_;
      lVar6 = plVar3[1] - *plVar3 >> 3;
      uVar1 = lVar6 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar1) {
        FUN_001b5650(plVar3);
LAB_00207f58:
                    /* WARNING: Subroutine does not return */
        FUN_001b8a1c();
      }
      lVar9 = plVar3[2] - *plVar3 >> 3;
      uVar11 = lVar9 * 0x5555555555555556;
      if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
        uVar11 = uVar1;
      }
      if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
        uVar11 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar11 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_00207f58;
        pvVar4 = operator_new(uVar11 * 0x18);
      }
      uVar12 = puVar5[2];
      uVar17 = puVar5[1];
      uVar16 = *puVar5;
      puVar7 = (undefined8 *)((long)pvVar4 + lVar6 * 8);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      pvVar4 = (void *)((long)pvVar4 + uVar11 * 0x18);
      pbVar14 = (byte *)*plVar3;
      pbVar8 = (byte *)plVar3[1];
      pbVar13 = (byte *)(puVar7 + 3);
      puVar7[1] = uVar17;
      *puVar7 = uVar16;
      puVar7[2] = uVar12;
      if (pbVar8 == pbVar14) {
        *plVar3 = (long)puVar7;
        plVar3[1] = (long)pbVar13;
        plVar3[2] = (long)pvVar4;
      }
      else {
        do {
          uVar16 = *(undefined8 *)(pbVar8 + -0x10);
          uVar12 = *(undefined8 *)(pbVar8 + -0x18);
          puVar7[-1] = *(undefined8 *)(pbVar8 + -8);
          pbVar15 = pbVar8 + -0x18;
          puVar7[-2] = uVar16;
          puVar7[-3] = uVar12;
          puVar7 = puVar7 + -3;
          pbVar8[-0x10] = 0;
          pbVar8[-0xf] = 0;
          pbVar8[-0xe] = 0;
          pbVar8[-0xd] = 0;
          pbVar8[-0xc] = 0;
          pbVar8[-0xb] = 0;
          pbVar8[-10] = 0;
          pbVar8[-9] = 0;
          pbVar8[-8] = 0;
          pbVar8[-7] = 0;
          pbVar8[-6] = 0;
          pbVar8[-5] = 0;
          pbVar8[-4] = 0;
          pbVar8[-3] = 0;
          pbVar8[-2] = 0;
          pbVar8[-1] = 0;
          pbVar8[-0x18] = 0;
          pbVar8[-0x17] = 0;
          pbVar8[-0x16] = 0;
          pbVar8[-0x15] = 0;
          pbVar8[-0x14] = 0;
          pbVar8[-0x13] = 0;
          pbVar8[-0x12] = 0;
          pbVar8[-0x11] = 0;
          pbVar8 = pbVar15;
        } while (pbVar15 != pbVar14);
        pbVar14 = (byte *)*plVar3;
        pbVar8 = (byte *)plVar3[1];
        *plVar3 = (long)puVar7;
        plVar3[1] = (long)pbVar13;
        plVar3[2] = (long)pvVar4;
        pbVar15 = pbVar8;
        while (pbVar2 = pbVar15, pbVar2 != pbVar14) {
          pbVar15 = pbVar2 + -0x18;
          pbVar8 = pbVar14;
          if ((*pbVar15 & 1) != 0) {
            operator_delete(*(void **)(pbVar2 + -8));
          }
        }
      }
      if (pbVar8 != (byte *)0x0) {
        operator_delete(pbVar8);
      }
      return pbVar13;
    }
    pbVar15 = *(byte **)(param_1 + 8);
    pbVar2 = (byte *)operator_new(param_2 * 0x18);
    pbVar14 = pbVar2 + ((long)pbVar15 - (long)pbVar13);
    pbVar8 = pbVar14;
    if ((long)pbVar15 - (long)pbVar13 == 0) {
      *(byte **)param_1 = pbVar14;
      *(byte **)(param_1 + 8) = pbVar14;
      *(byte **)(param_1 + 0x10) = pbVar2 + param_2 * 0x18;
      param_1 = pbVar2;
    }
    else {
      do {
        uVar16 = *(undefined8 *)(pbVar15 + -0x10);
        uVar12 = *(undefined8 *)(pbVar15 + -0x18);
        *(undefined8 *)(pbVar8 + -8) = *(undefined8 *)(pbVar15 + -8);
        pbVar10 = pbVar15 + -0x18;
        *(undefined8 *)(pbVar8 + -0x10) = uVar16;
        *(undefined8 *)(pbVar8 + -0x18) = uVar12;
        pbVar8 = pbVar8 + -0x18;
        pbVar15[-0x10] = 0;
        pbVar15[-0xf] = 0;
        pbVar15[-0xe] = 0;
        pbVar15[-0xd] = 0;
        pbVar15[-0xc] = 0;
        pbVar15[-0xb] = 0;
        pbVar15[-10] = 0;
        pbVar15[-9] = 0;
        pbVar15[-8] = 0;
        pbVar15[-7] = 0;
        pbVar15[-6] = 0;
        pbVar15[-5] = 0;
        pbVar15[-4] = 0;
        pbVar15[-3] = 0;
        pbVar15[-2] = 0;
        pbVar15[-1] = 0;
        pbVar15[-0x18] = 0;
        pbVar15[-0x17] = 0;
        pbVar15[-0x16] = 0;
        pbVar15[-0x15] = 0;
        pbVar15[-0x14] = 0;
        pbVar15[-0x13] = 0;
        pbVar15[-0x12] = 0;
        pbVar15[-0x11] = 0;
        pbVar15 = pbVar10;
      } while (pbVar10 != pbVar13);
      pbVar15 = *(byte **)param_1;
      pbVar13 = *(byte **)(param_1 + 8);
      *(byte **)param_1 = pbVar8;
      *(byte **)(param_1 + 8) = pbVar14;
      *(byte **)(param_1 + 0x10) = pbVar2 + param_2 * 0x18;
      pbVar14 = pbVar13;
      param_1 = pbVar2;
      while (pbVar8 = pbVar14, pbVar8 != pbVar15) {
        pbVar14 = pbVar8 + -0x18;
        pbVar13 = pbVar15;
        if ((*pbVar14 & 1) != 0) {
          param_1 = *(byte **)(pbVar8 + -8);
          operator_delete(param_1);
        }
      }
    }
    if (pbVar13 != (byte *)0x0) {
      operator_delete(pbVar13);
      return pbVar13;
    }
  }
  return param_1;
}


// ===== 00207dec  std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>::__push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>> =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&) */

basic_string * __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  void *pvVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    FUN_001b5650(this);
LAB_00207f58:
                    /* WARNING: Subroutine does not return */
    FUN_001b8a1c();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * 0x5555555555555556;
  if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
    uVar10 = uVar1;
  }
  if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
    uVar10 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar10 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar10) goto LAB_00207f58;
    pvVar5 = operator_new(uVar10 * 0x18);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar13 = *(undefined8 *)param_1;
  puVar8 = (undefined8 *)((long)pvVar5 + lVar7 * 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  pvVar5 = (void *)((long)pvVar5 + uVar10 * 0x18);
  pbVar3 = *(byte **)this;
  pbVar6 = *(byte **)(this + 8);
  pbVar2 = (basic_string *)(puVar8 + 3);
  puVar8[1] = uVar14;
  *puVar8 = uVar13;
  puVar8[2] = uVar11;
  if (pbVar6 == pbVar3) {
    *(undefined8 **)this = puVar8;
    *(basic_string **)(this + 8) = pbVar2;
    *(void **)(this + 0x10) = pvVar5;
  }
  else {
    do {
      uVar13 = *(undefined8 *)(pbVar6 + -0x10);
      uVar11 = *(undefined8 *)(pbVar6 + -0x18);
      puVar8[-1] = *(undefined8 *)(pbVar6 + -8);
      pbVar12 = pbVar6 + -0x18;
      puVar8[-2] = uVar13;
      puVar8[-3] = uVar11;
      puVar8 = puVar8 + -3;
      pbVar6[-0x10] = 0;
      pbVar6[-0xf] = 0;
      pbVar6[-0xe] = 0;
      pbVar6[-0xd] = 0;
      pbVar6[-0xc] = 0;
      pbVar6[-0xb] = 0;
      pbVar6[-10] = 0;
      pbVar6[-9] = 0;
      pbVar6[-8] = 0;
      pbVar6[-7] = 0;
      pbVar6[-6] = 0;
      pbVar6[-5] = 0;
      pbVar6[-4] = 0;
      pbVar6[-3] = 0;
      pbVar6[-2] = 0;
      pbVar6[-1] = 0;
      pbVar6[-0x18] = 0;
      pbVar6[-0x17] = 0;
      pbVar6[-0x16] = 0;
      pbVar6[-0x15] = 0;
      pbVar6[-0x14] = 0;
      pbVar6[-0x13] = 0;
      pbVar6[-0x12] = 0;
      pbVar6[-0x11] = 0;
      pbVar6 = pbVar12;
    } while (pbVar12 != pbVar3);
    pbVar3 = *(byte **)this;
    pbVar6 = *(byte **)(this + 8);
    *(undefined8 **)this = puVar8;
    *(basic_string **)(this + 8) = pbVar2;
    *(void **)(this + 0x10) = pvVar5;
    pbVar12 = pbVar6;
    while (pbVar4 = pbVar12, pbVar4 != pbVar3) {
      pbVar12 = pbVar4 + -0x18;
      pbVar6 = pbVar3;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
  }
  if (pbVar6 != (byte *)0x0) {
    operator_delete(pbVar6);
  }
  return pbVar2;
}


// ===== 00207f5c  _INIT_8 =====

void _INIT_8(void)

{
  __cxa_atexit(FUN_00207b54,PTR_object_keys__0030d7d8,&PTR_LOOP_00306650);
  __cxa_atexit(FUN_00207b54,PTR_object_values__0030d7e0,&PTR_LOOP_00306650);
  return;
}


// ===== 00207fa8  discord::frontends::jsi::JsJson::from_json =====

/* discord::frontends::jsi::JsJson::from_json(facebook::jsi::Runtime&, facebook::jsi::String const&)
    */

void __thiscall
discord::frontends::jsi::JsJson::from_json(JsJson *this,Runtime *param_1,String *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  Impl *pIVar4;
  long lVar5;
  JSError *this_00;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  undefined8 *local_38;
  
  puVar2 = PTR_json_parse__0030d7e8;
  if ((*(long *)(PTR_json_parse__0030d7e8 + 8) == 0) ||
     (*(long *)(*(long *)(PTR_json_parse__0030d7e8 + 8) + 8) == -1)) {
    (**(code **)(*(long *)this + 0x30))(&local_38,this);
                    /* try { // try from 00208000 to 00208017 has its CatchHandler @ 002082f0 */
    facebook::jsi::Object::getPropertyAsObject((IRuntime *)&local_38,(char *)this);
                    /* try { // try from 00208018 to 0020802f has its CatchHandler @ 002082cc */
    facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_90,(char *)this);
                    /* try { // try from 00208030 to 00208037 has its CatchHandler @ 00208294 */
    plVar3 = (long *)operator_new(0x20);
    plVar3[2] = 0;
    puVar1 = PTR_vtable_0030d7a0;
    plVar7 = plVar3 + 3;
    *plVar7 = (long)local_70;
    local_70 = (undefined8 *)0x0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    local_80 = plVar7;
    local_78 = plVar3;
                    /* try { // try from 00208064 to 00208067 has its CatchHandler @ 00208284 */
    pIVar4 = (Impl *)GcCollection::Impl::instance();
    local_60 = plVar7;
    local_58 = plVar3;
    FUN_002223f0(1,plVar3 + 1);
                    /* try { // try from 0020807c to 00208087 has its CatchHandler @ 00208274 */
    GcCollection::Impl::add(pIVar4,&local_60);
    plVar3 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_58 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar7 = local_78;
    plVar3 = local_80;
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      FUN_002223f0(1,plVar7 + 2);
    }
    lVar5 = *(long *)(puVar2 + 8);
    *(long **)puVar2 = plVar3;
    *(long **)(puVar2 + 8) = plVar7;
    if (lVar5 != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar3 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)();
    }
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)();
    }
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)();
    }
    if (*(long *)(puVar2 + 8) == 0) goto LAB_00208240;
  }
  plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
  local_88 = plVar3;
  if (plVar3 != (long *)0x0) {
    puVar6 = *(undefined8 **)puVar2;
    local_90 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      local_70 = (undefined8 *)CONCAT44(local_70._4_4_,6);
                    /* try { // try from 002081b0 to 002081b7 has its CatchHandler @ 00208328 */
      local_68 = (**(code **)(*(long *)this + 0x80))(this,*(undefined8 *)param_1);
      local_60 = (long *)((ulong)local_60 & 0xffffffff00000000);
                    /* try { // try from 002081c8 to 002081e3 has its CatchHandler @ 00208310 */
      (**(code **)(*(long *)this + 0x280))(this,puVar6,&local_60,&local_70,1);
      facebook::jsi::Value::~Value((Value *)&local_60);
      facebook::jsi::Value::~Value((Value *)&local_70);
    }
    lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar3 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (puVar6 != (undefined8 *)0x0) {
      return;
    }
  }
LAB_00208240:
  this_00 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0020824c to 0020825b has its CatchHandler @ 00208344 */
  facebook::jsi::JSError::JSError(this_00,(IRuntime *)this,"JSON.parse() was not available.");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00208358  discord::frontends::jsi::JsJson::to_json =====

/* discord::frontends::jsi::JsJson::to_json(facebook::jsi::Runtime&, facebook::jsi::Value const&) */

void discord::frontends::jsi::JsJson::to_json(Runtime *param_1,Value *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  Impl *pIVar4;
  long lVar5;
  JSError *this;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *local_a0 [2];
  undefined8 *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70 [2];
  long *local_60;
  long *local_58;
  
  puVar2 = PTR_json_stringify__0030d7f0;
  if ((*(long *)(PTR_json_stringify__0030d7f0 + 8) == 0) ||
     (*(long *)(*(long *)(PTR_json_stringify__0030d7f0 + 8) + 8) == -1)) {
    (**(code **)(*(long *)param_1 + 0x30))(local_a0,param_1);
                    /* try { // try from 002083b0 to 002083c7 has its CatchHandler @ 002086a8 */
    facebook::jsi::Object::getPropertyAsObject((IRuntime *)local_a0,(char *)param_1);
                    /* try { // try from 002083c8 to 002083df has its CatchHandler @ 00208684 */
    facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_90,(char *)param_1);
                    /* try { // try from 002083e0 to 002083e7 has its CatchHandler @ 0020864c */
    plVar3 = (long *)operator_new(0x20);
    plVar3[2] = 0;
    puVar1 = PTR_vtable_0030d7a0;
    plVar7 = plVar3 + 3;
    *plVar7 = (long)local_70[0];
    local_70[0] = (undefined8 *)0x0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    local_80 = plVar7;
    local_78 = plVar3;
                    /* try { // try from 00208414 to 00208417 has its CatchHandler @ 0020863c */
    pIVar4 = (Impl *)GcCollection::Impl::instance();
    local_60 = plVar7;
    local_58 = plVar3;
    FUN_002223f0(1,plVar3 + 1);
                    /* try { // try from 0020842c to 00208437 has its CatchHandler @ 0020862c */
    GcCollection::Impl::add(pIVar4,&local_60);
    plVar3 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_58 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar7 = local_78;
    plVar3 = local_80;
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      FUN_002223f0(1,plVar7 + 2);
    }
    lVar5 = *(long *)(puVar2 + 8);
    *(long **)puVar2 = plVar3;
    *(long **)(puVar2 + 8) = plVar7;
    if (lVar5 != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar3 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_70[0] != (undefined8 *)0x0) {
      (**(code **)*local_70[0])();
    }
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)();
    }
    if (local_a0[0] != (undefined8 *)0x0) {
      (**(code **)*local_a0[0])();
    }
    if (*(long *)(puVar2 + 8) == 0) goto LAB_002085f8;
  }
  plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
  local_88 = plVar3;
  if (plVar3 != (long *)0x0) {
    puVar6 = *(undefined8 **)puVar2;
    local_90 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 0020854c to 0020855b has its CatchHandler @ 002086ec */
      facebook::jsi::Value::Value((Value *)local_70,(IRuntime *)param_1,param_2);
      local_60 = (long *)((ulong)local_60 & 0xffffffff00000000);
                    /* try { // try from 00208568 to 00208583 has its CatchHandler @ 002086d4 */
      (**(code **)(*(long *)param_1 + 0x280))(local_a0,param_1,puVar6,&local_60,local_70,1);
      facebook::jsi::Value::~Value((Value *)&local_60);
      facebook::jsi::Value::~Value((Value *)local_70);
                    /* try { // try from 00208594 to 002085a3 has its CatchHandler @ 002086c8 */
      codec::Deserialize::
      from_throwing<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                (param_1,(Value *)local_a0);
      facebook::jsi::Value::~Value((Value *)local_a0);
    }
    lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar3 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (puVar6 != (undefined8 *)0x0) {
      return;
    }
  }
LAB_002085f8:
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00208604 to 00208613 has its CatchHandler @ 00208700 */
  facebook::jsi::JSError::JSError(this,(IRuntime *)param_1,"JSON.stringify() was not available.");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00208714  _INIT_9 =====

void _INIT_9(void)

{
  __cxa_atexit(FUN_00207b54,PTR_json_parse__0030d7e8,&PTR_LOOP_00306650);
  __cxa_atexit(FUN_00207b54,PTR_json_stringify__0030d7f0,&PTR_LOOP_00306650);
  return;
}


// ===== 00208760  discord::frontends::jsi::JsObject::JsObject =====

/* discord::frontends::jsi::JsObject::JsObject(facebook::jsi::Object) */

void __thiscall discord::frontends::jsi::JsObject::JsObject(JsObject *this,undefined8 *param_2)

{
  *(undefined8 *)this = *param_2;
  *param_2 = 0;
  return;
}


// ===== 00208770  discord::frontends::jsi::JsObject::into_property_name =====

/* discord::frontends::jsi::JsObject::into_property_name(facebook::jsi::Runtime&, char const*) */

void discord::frontends::jsi::JsObject::into_property_name(Runtime *param_1,char *param_2)

{
  char *in_x2;
  
  strlen(in_x2);
                    /* WARNING: Could not recover jumptable at 0x002087b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0xa0))(param_2);
  return;
}


// ===== 002087bc  discord::frontends::jsi::JsObject::into_property_name =====

/* discord::frontends::jsi::JsObject::into_property_name(facebook::jsi::Runtime&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
discord::frontends::jsi::JsObject::into_property_name
          (JsObject *this,Runtime *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)((byte)*param_2 >> 1);
  }
                    /* WARNING: Could not recover jumptable at 0x002087e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xa0))(param_1,pbVar2,uVar1);
  return;
}


// ===== 002087e4  discord::frontends::jsi::JsObject::into_property_name =====

/* discord::frontends::jsi::JsObject::into_property_name(facebook::jsi::Runtime&,
   facebook::jsi::String const&) */

void __thiscall
discord::frontends::jsi::JsObject::into_property_name
          (JsObject *this,Runtime *param_1,String *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x002087f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,param_2);
  return;
}


// ===== 002087f8  discord::frontends::jsi::JsObject::into_property_name =====

/* discord::frontends::jsi::JsObject::into_property_name(facebook::jsi::Runtime&,
   facebook::jsi::PropNameID) */

void discord::frontends::jsi::JsObject::into_property_name
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  *param_4 = 0;
  *param_1 = uVar1;
  return;
}


// ===== 00208808  discord::frontends::jsi::KvClassicModule::activate =====

/* discord::frontends::jsi::KvClassicModule::activate(facebook::jsi::Runtime&,
   std::__ndk1::shared_ptr<facebook::react::CallInvoker>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void discord::frontends::jsi::KvClassicModule::activate
               (long *param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  Impl *pIVar4;
  long lVar5;
  undefined8 local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 local_70;
  long *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38;
  
  uStack_58 = param_3[1];
  local_60 = *param_3;
  local_50 = (void *)param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
                    /* try { // try from 0020883c to 00208843 has its CatchHandler @ 00208a78 */
  uVar3 = api::SingletonHost::initialize(&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((uVar3 & 1) != 0) {
    uVar1 = *param_2;
    plVar2 = (long *)param_2[1];
    local_70 = uVar1;
    local_68 = plVar2;
    if (plVar2 != (long *)0x0) {
      FUN_002223f0(1,plVar2 + 1);
    }
                    /* try { // try from 00208874 to 00208877 has its CatchHandler @ 00208a64 */
    pIVar4 = (Impl *)GcCollection::Impl::instance();
    local_48 = uVar1;
    local_40 = plVar2;
    if (plVar2 != (long *)0x0) {
      FUN_002223f0(1,plVar2 + 1);
    }
                    /* try { // try from 00208894 to 0020889b has its CatchHandler @ 00208a54 */
    GcCollection::Impl::add(pIVar4,&local_48);
    plVar2 = local_40;
    if ((local_40 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_40 + 1), lVar5 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar2 = local_68;
    local_70 = 0;
    local_68 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (lVar5 = FUN_00222ae0(0xffffffffffffffff,plVar2 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar2 = local_68;
    if ((local_68 != (long *)0x0) &&
       (lVar5 = FUN_00222ae0(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    (**(code **)(*param_1 + 0x30))(&local_78,param_1);
    local_88 = *param_2;
    local_80 = param_2[1];
    if (local_80 != 0) {
      FUN_002223f0(1,local_80 + 0x10);
    }
                    /* try { // try from 0020895c to 0020896b has its CatchHandler @ 00208a28 */
    JsHost::create((JsHost *)&local_48,param_1,&local_88);
                    /* try { // try from 00208974 to 0020898b has its CatchHandler @ 00208a18 */
    (**(code **)(*param_1 + 0x108))(&local_38,param_1,"__KvStorage",0xb);
                    /* try { // try from 00208994 to 002089a7 has its CatchHandler @ 002089f8 */
    (**(code **)(*param_1 + 0x1b8))(param_1,&local_78,&local_38,&local_48);
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)();
    }
    facebook::jsi::Value::~Value((Value *)&local_48);
    if (local_80 != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)();
    }
  }
  return;
}


// ===== 00208a9c  discord::frontends::jsi::KvClassicModule::deactivate =====

/* discord::frontends::jsi::KvClassicModule::deactivate() */

void discord::frontends::jsi::KvClassicModule::deactivate(void)

{
  (*(code *)PTR_deinitialize_0030eb18)();
  return;
}


// ===== 00208aa0  discord::frontends::jsi::GcCollection::remove =====

/* discord::frontends::jsi::GcCollection::remove(void const*) */

void discord::frontends::jsi::GcCollection::remove(void *param_1)

{
  int iVar1;
  
  if (((DAT_003165f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_003165f0), iVar1 != 0)) {
                    /* try { // try from 00208ae8 to 00208af3 has its CatchHandler @ 00208b20 */
    Impl::Impl((Impl *)&DAT_003165a0);
    __cxa_atexit(PTR__Impl_0030d7f8,&DAT_003165a0,&PTR_LOOP_00306650);
    __cxa_guard_release(&DAT_003165f0);
  }
  Impl::remove((Impl *)&DAT_003165a0,param_1);
  return;
}


// ===== 00208b38  discord::frontends::jsi::GcCollection::Impl::instance =====

/* discord::frontends::jsi::GcCollection::Impl::instance() */

undefined * discord::frontends::jsi::GcCollection::Impl::instance(void)

{
  int iVar1;
  
  if (((DAT_003165f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_003165f0), iVar1 != 0)) {
                    /* try { // try from 00208b78 to 00208b83 has its CatchHandler @ 00208bb0 */
    Impl((Impl *)&DAT_003165a0);
    __cxa_atexit(PTR__Impl_0030d7f8,&DAT_003165a0,&PTR_LOOP_00306650);
    __cxa_guard_release(&DAT_003165f0);
  }
  return &DAT_003165a0;
}


// ===== 00208bc8  discord::frontends::jsi::GcCollection::Impl::remove =====

/* discord::frontends::jsi::GcCollection::Impl::remove(void const*) */

void __thiscall discord::frontends::jsi::GcCollection::Impl::remove(Impl *this,void *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *local_48 [2];
  char local_38;
  
  std::__ndk1::mutex::lock();
  plVar3 = *(long **)(this + 0x38);
  do {
    if (plVar3 == (long *)0x0) {
LAB_00208c60:
      std::__ndk1::mutex::unlock();
      return;
    }
    if ((void *)plVar3[2] == param_1) {
      FUN_00209570(local_48,this + 0x28);
      pvVar1 = local_48[0];
      local_48[0] = (void *)0x0;
      if (pvVar1 != (void *)0x0) {
        if (((local_38 != '\0') && (plVar3 = *(long **)((long)pvVar1 + 0x18), plVar3 != (long *)0x0)
            ) && (lVar2 = FUN_00222ae0(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        operator_delete(pvVar1);
      }
      goto LAB_00208c60;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}


// ===== 00208c7c  discord::frontends::jsi::GcCollection::clear =====

/* discord::frontends::jsi::GcCollection::clear() */

void discord::frontends::jsi::GcCollection::clear(void)

{
  int iVar1;
  
  if (((DAT_003165f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_003165f0), iVar1 != 0)) {
                    /* try { // try from 00208cbc to 00208cc7 has its CatchHandler @ 00208cf4 */
    Impl::Impl((Impl *)&DAT_003165a0);
    __cxa_atexit(PTR__Impl_0030d7f8,&DAT_003165a0,&PTR_LOOP_00306650);
    __cxa_guard_release(&DAT_003165f0);
  }
  Impl::clear((Impl *)&DAT_003165a0);
  return;
}


// ===== 00208d0c  discord::frontends::jsi::GcCollection::Impl::clear =====

/* discord::frontends::jsi::GcCollection::Impl::clear() */

void __thiscall discord::frontends::jsi::GcCollection::Impl::clear(Impl *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  std::__ndk1::mutex::lock();
  if (*(long *)(this + 0x40) != 0) {
    puVar1 = (undefined8 *)*(void **)(this + 0x38);
    while (puVar1 != (undefined8 *)0x0) {
      plVar4 = (long *)puVar1[3];
      pvVar5 = (void *)*puVar1;
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00222ae0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar5;
    }
    lVar2 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 00208db8  discord::frontends::jsi::GcCollection::size =====

/* discord::frontends::jsi::GcCollection::size() */

undefined8 discord::frontends::jsi::GcCollection::size(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if (((DAT_003165f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_003165f0), iVar2 != 0)) {
                    /* try { // try from 00208e10 to 00208e1b has its CatchHandler @ 00208e48 */
    Impl::Impl((Impl *)&DAT_003165a0);
    __cxa_atexit(PTR__Impl_0030d7f8,&DAT_003165a0,&PTR_LOOP_00306650);
    __cxa_guard_release(&DAT_003165f0);
  }
  std::__ndk1::mutex::lock();
  uVar1 = DAT_003165e0;
  std::__ndk1::mutex::unlock();
  return uVar1;
}


// ===== 00208e60  discord::frontends::jsi::GcCollection::Impl::size =====

/* discord::frontends::jsi::GcCollection::Impl::size() */

undefined8 __thiscall discord::frontends::jsi::GcCollection::Impl::size(Impl *this)

{
  undefined8 uVar1;
  
  std::__ndk1::mutex::lock();
  uVar1 = *(undefined8 *)(this + 0x40);
  std::__ndk1::mutex::unlock();
  return uVar1;
}


// ===== 00208e90  discord::frontends::jsi::GcCollection::Impl::Impl =====

/* discord::frontends::jsi::GcCollection::Impl::Impl() */

void __thiscall discord::frontends::jsi::GcCollection::Impl::Impl(Impl *this)

{
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


// ===== 00208eac  discord::frontends::jsi::GcCollection::Impl::add =====

/* discord::frontends::jsi::GcCollection::Impl::add(std::__ndk1::shared_ptr<void>) */

void __thiscall discord::frontends::jsi::GcCollection::Impl::add(Impl *this,shared_ptr *param_2)

{
  std::__ndk1::mutex::lock();
                    /* try { // try from 00208ec4 to 00208ed3 has its CatchHandler @ 00208ee4 */
  std::__ndk1::
  __hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
  ::__emplace_unique_key_args<std::__ndk1::shared_ptr<void>,std::__ndk1::shared_ptr<void>const&>
            ((__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
              *)(this + 0x28),param_2,param_2);
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 00208ef8  discord::frontends::jsi::GcCollection::CleanupRaii::CleanupRaii =====

/* discord::frontends::jsi::GcCollection::CleanupRaii::CleanupRaii() */

void __thiscall discord::frontends::jsi::GcCollection::CleanupRaii::CleanupRaii(CleanupRaii *this)

{
  NativeState::NativeState((NativeState *)this);
  *(undefined **)this = PTR_vtable_0030d800 + 0x10;
  return;
}


// ===== 00208f28  discord::frontends::jsi::GcCollection::CleanupRaii::~CleanupRaii =====

/* discord::frontends::jsi::GcCollection::CleanupRaii::~CleanupRaii() */

void __thiscall discord::frontends::jsi::GcCollection::CleanupRaii::~CleanupRaii(CleanupRaii *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_0030d800 + 0x10;
  if (((DAT_003165f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_003165f0), iVar1 != 0)) {
                    /* try { // try from 00208f84 to 00208f8f has its CatchHandler @ 00208fbc */
    Impl::Impl((Impl *)&DAT_003165a0);
    __cxa_atexit(PTR__Impl_0030d7f8,&DAT_003165a0,&PTR_LOOP_00306650);
    __cxa_guard_release(&DAT_003165f0);
  }
                    /* try { // try from 00208f58 to 00208f63 has its CatchHandler @ 00208fd4 */
  Impl::clear((Impl *)&DAT_003165a0);
  NativeState::~NativeState((NativeState *)this);
  return;
}


// ===== 00208fd8  discord::frontends::jsi::GcCollection::CleanupRaii::~CleanupRaii =====

/* discord::frontends::jsi::GcCollection::CleanupRaii::~CleanupRaii() */

void __thiscall discord::frontends::jsi::GcCollection::CleanupRaii::~CleanupRaii(CleanupRaii *this)

{
  ~CleanupRaii(this);
  operator_delete(this);
  return;
}


// ===== 00208ffc  discord::frontends::jsi::GcCollection::Impl::~Impl =====

/* discord::frontends::jsi::GcCollection::Impl::~Impl() */

void __thiscall discord::frontends::jsi::GcCollection::Impl::~Impl(Impl *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)*(void **)(this + 0x38);
  while (puVar1 != (undefined8 *)0x0) {
    plVar4 = (long *)puVar1[3];
    pvVar2 = (void *)*puVar1;
    if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00222ae0(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  std::__ndk1::mutex::~mutex((mutex *)this);
  return;
}


// ===== 00209084  std::__ndk1::__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>::__emplace_unique_key_args<std::__ndk1::shared_ptr<void>,std::__ndk1::shared_ptr<void>const&> =====

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::shared_ptr<void>,
   void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::shared_ptr<void>,
   std::__ndk1::hash<std::__ndk1::shared_ptr<void> >,
   std::__ndk1::equal_to<std::__ndk1::shared_ptr<void> >,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<void> >
   >::__emplace_unique_key_args<std::__ndk1::shared_ptr<void>, std::__ndk1::shared_ptr<void>
   const&>(std::__ndk1::shared_ptr<void> const&, std::__ndk1::shared_ptr<void> const&) */

undefined1  [16] __thiscall
std::__ndk1::
__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
::__emplace_unique_key_args<std::__ndk1::shared_ptr<void>,std::__ndk1::shared_ptr<void>const&>
          (__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
           *this,shared_ptr *param_1,shared_ptr *param_2)

{
  __hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
  *p_Var1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  uVar4 = *(ulong *)param_1;
  uVar12 = *(ulong *)(this + 8);
  uVar8 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar8 = (uVar4 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  if (uVar12 != 0) {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar3 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar3 < 2) {
      unaff_x25 = uVar8 & uVar12 - 1;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar12 <= uVar8) {
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar8 / uVar12;
        }
        unaff_x25 = uVar8 - uVar10 * uVar12;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)this + unaff_x25 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar9, plVar11 != (long *)0x0)) {
      do {
        uVar10 = plVar11[1];
        if (uVar10 == uVar8) {
          if (plVar11[2] == uVar4) {
            uVar14 = 0;
            goto LAB_00209374;
          }
        }
        else {
          if (uVar3 < 2) {
            uVar10 = uVar10 & uVar12 - 1;
          }
          else if (uVar12 <= uVar10) {
            uVar2 = 0;
            if (uVar12 != 0) {
              uVar2 = uVar10 / uVar12;
            }
            uVar10 = uVar10 - uVar2 * uVar12;
          }
          if (uVar10 != unaff_x25) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  p_Var1 = this + 0x10;
  plVar11 = (long *)operator_new(0x20);
  lVar7 = *(long *)param_2;
  lVar6 = *(long *)(param_2 + 8);
  *plVar11 = 0;
  plVar11[1] = uVar8;
  plVar11[2] = lVar7;
  plVar11[3] = lVar6;
  if (lVar6 != 0) {
    FUN_002223f0(1,lVar6 + 8);
  }
  if ((uVar12 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar12 < (float)(*(long *)(this + 0x18) + 1))) {
    if (uVar12 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar4 = uVar4 | uVar12 << 1;
    uVar12 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar4 <= uVar12) {
      uVar4 = uVar12;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
                    /* try { // try from 00209234 to 002092bf has its CatchHandler @ 00209394 */
      uVar4 = std::__ndk1::__next_prime(uVar4);
    }
    uVar12 = *(ulong *)(this + 8);
    if (uVar12 < uVar4) {
LAB_0020924c:
      __do_rehash<true>(this,uVar4);
    }
    else if (uVar4 < uVar12) {
      uVar3 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar12 < 3) {
LAB_002092bc:
        uVar3 = std::__ndk1::__next_prime(uVar3);
      }
      else {
        uVar14 = NEON_cnt(uVar12,1);
        uVar13 = NEON_uaddlv(uVar14,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13)) goto LAB_002092bc;
        if (1 < uVar3) {
          uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
        }
      }
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
      if (uVar4 < uVar12) goto LAB_0020924c;
    }
    uVar12 = *(ulong *)(this + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x25 = uVar12 - 1 & uVar8;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar12 <= uVar8) {
        uVar4 = 0;
        if (uVar12 != 0) {
          uVar4 = uVar8 / uVar12;
        }
        unaff_x25 = uVar8 - uVar4 * uVar12;
      }
    }
  }
  lVar7 = *(long *)this;
  plVar5 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    lVar6 = *(long *)p_Var1;
    *(long **)p_Var1 = plVar11;
    *plVar11 = lVar6;
    *(__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
      **)(lVar7 + unaff_x25 * 8) = p_Var1;
    if (*plVar11 == 0) goto LAB_00209364;
    uVar4 = *(ulong *)(*plVar11 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar4 = uVar4 & uVar12 - 1;
    }
    else if (uVar12 <= uVar4) {
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar8 = uVar4 / uVar12;
      }
      uVar4 = uVar4 - uVar8 * uVar12;
    }
    plVar5 = (long *)(*(long *)this + uVar4 * 8);
  }
  else {
    *plVar11 = *plVar5;
  }
  *plVar5 = (long)plVar11;
LAB_00209364:
  uVar14 = 1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00209374:
  auVar15._8_8_ = uVar14;
  auVar15._0_8_ = plVar11;
  return auVar15;
}


// ===== 002093a8  FUN_002093a8 =====

void FUN_002093a8(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
    if (((*(char *)(param_1 + 2) != '\0') &&
        (plVar3 = *(long **)((long)pvVar2 + 0x18), plVar3 != (long *)0x0)) &&
       (lVar1 = FUN_00222ae0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00209414  std::__ndk1::__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>::__do_rehash<true> =====

/* void std::__ndk1::__hash_table<std::__ndk1::shared_ptr<void>,
   std::__ndk1::hash<std::__ndk1::shared_ptr<void> >,
   std::__ndk1::equal_to<std::__ndk1::shared_ptr<void> >,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<void> > >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
::__do_rehash<true>(__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
                    *this,ulong param_1)

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
  
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001b8a1c();
    }
    pvVar2 = operator_new(param_1 << 3);
    pvVar3 = *(void **)this;
    *(void **)this = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
    plVar5 = *(long **)(this + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_1,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_1 - 1;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
      }
      *(__hash_table<std::__ndk1::shared_ptr<void>,std::__ndk1::hash<std::__ndk1::shared_ptr<void>>,std::__ndk1::equal_to<std::__ndk1::shared_ptr<void>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<void>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_1 - 1;
          }
          else if (param_1 <= uVar8) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar8 / param_1;
            }
            uVar8 = uVar8 - uVar1 * param_1;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) {
              *(long **)(*(long *)this + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*(long *)this + uVar8 * 8);
              **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar7;
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


// ===== 00209570  FUN_00209570 =====

void FUN_00209570(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0020963c;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0020963c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0020963c:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 002096a4  discord::frontends::jsi::NativeState::NativeState =====

/* discord::frontends::jsi::NativeState::NativeState() */

void __thiscall discord::frontends::jsi::NativeState::NativeState(NativeState *this)

{
  *(undefined **)this = PTR_vtable_0030d808 + 0x10;
  return;
}


// ===== 002096b8  discord::frontends::jsi::NativeState::~NativeState =====

/* discord::frontends::jsi::NativeState::~NativeState() */

void __thiscall discord::frontends::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__HostObject_0030f230)();
  return;
}


// ===== 002096bc  discord::frontends::jsi::NativeState::~NativeState =====

/* discord::frontends::jsi::NativeState::~NativeState() */

void __thiscall discord::frontends::jsi::NativeState::~NativeState(NativeState *this)

{
  ~NativeState(this);
  operator_delete(this);
  return;
}


// ===== 002096e0  discord::frontends::jsi::NativeState::get =====

/* discord::frontends::jsi::NativeState::get(facebook::jsi::Runtime&, facebook::jsi::PropNameID
   const&) */

void discord::frontends::jsi::NativeState::get(Runtime *param_1,PropNameID *param_2)

{
  undefined4 *in_x8;
  
  *in_x8 = 0;
  return;
}


// ===== 002096e8  discord::frontends::jsi::NativeState::set =====

/* discord::frontends::jsi::NativeState::set(facebook::jsi::Runtime&, facebook::jsi::PropNameID
   const&, facebook::jsi::Value const&) */

void discord::frontends::jsi::NativeState::set(Runtime *param_1,PropNameID *param_2,Value *param_3)

{
  JSError *this;
  
  this = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00209704 to 00209713 has its CatchHandler @ 0020972c */
  facebook::jsi::JSError::JSError
            (this,(IRuntime *)param_2,"TypeError: assignment is not permitted on a NativeState");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0030d778,PTR__JSError_0030d780);
}


// ===== 00209740  discord::frontends::jsi::NativeState::getPropertyNames =====

/* discord::frontends::jsi::NativeState::getPropertyNames(facebook::jsi::Runtime&) */

void discord::frontends::jsi::NativeState::getPropertyNames(Runtime *param_1)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return;
}


// ===== 0020974c  discord::raw::RawBind::bind_unsafe =====

/* discord::raw::RawBind::bind_unsafe(sqlite3_stmt*, unsigned int, discord::raw::RawValue&) */

uint discord::raw::RawBind::bind_unsafe(sqlite3_stmt *param_1,uint param_2,RawValue *param_3)

{
  uint uVar1;
  long lVar2;
  sqlite3_stmt *local_98;
  uint local_90;
  sqlite3_stmt *local_88;
  uint local_80;
  sqlite3_stmt *local_78;
  uint local_70;
  sqlite3_stmt *local_68;
  uint local_60;
  sqlite3_stmt *local_58;
  uint local_50;
  sqlite3_stmt *local_48;
  uint local_40;
  sqlite3_stmt *local_38;
  uint local_30;
  sqlite3_stmt *local_28;
  uint local_20;
  sqlite3_stmt **local_18;
  
  local_98 = param_1;
  local_90 = param_2;
  local_88 = param_1;
  local_80 = param_2;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  local_20 = param_2;
  lVar2 = RawValue::variant();
  if (*(uint *)(lVar2 + 0x30) != 0xffffffff) {
    local_18 = &local_98;
    uVar1 = (*(code *)(&PTR_FUN_0030a780)[*(uint *)(lVar2 + 0x30)])(&local_18,lVar2 + 8);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 002097e4  discord::raw::RawBind::unbind =====

/* discord::raw::RawBind::unbind(sqlite3_stmt*, unsigned int) */

void __thiscall discord::raw::RawBind::unbind(RawBind *this,sqlite3_stmt *param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  RawValue *this_00;
  undefined1 *puVar12;
  long in_x8;
  byte *pbVar13;
  ulong uVar14;
  byte local_ab0 [16];
  void *local_aa0;
  Error local_a98;
  undefined7 uStack_a97;
  undefined1 uStack_a90;
  undefined7 uStack_a8f;
  undefined8 local_a88;
  undefined1 local_a80;
  undefined7 local_a7f;
  undefined1 uStack_a78;
  undefined7 uStack_a77;
  undefined8 uStack_a70;
  undefined8 local_a68;
  byte local_a40 [16];
  void *local_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined1 auStack_9b0 [56];
  RawValue aRStack_978 [56];
  Ok<discord::raw::RawValue> aOStack_940 [56];
  undefined1 auStack_908 [56];
  RawValue aRStack_8d0 [56];
  Ok<discord::raw::RawValue> aOStack_898 [56];
  undefined1 auStack_860 [56];
  RawValue aRStack_828 [56];
  Ok<discord::raw::RawValue> aOStack_7f0 [56];
  undefined1 auStack_7b8 [56];
  RawValue aRStack_780 [56];
  Ok<discord::raw::RawValue> aOStack_748 [56];
  ulong local_710 [5];
  undefined1 auStack_6e8 [56];
  RawValue aRStack_6b0 [56];
  Ok<discord::raw::RawValue> aOStack_678 [56];
  byte local_640 [16];
  void *local_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined1 auStack_5b8 [8];
  undefined8 local_5b0;
  undefined4 local_588;
  RawValue aRStack_580 [56];
  Ok<discord::raw::RawValue> aOStack_548 [56];
  undefined1 auStack_510 [8];
  undefined1 local_508;
  undefined4 local_4e0;
  RawValue aRStack_4d8 [56];
  Ok<discord::raw::RawValue> aOStack_4a0 [56];
  undefined1 auStack_468 [8];
  undefined1 local_460;
  undefined4 local_438;
  RawValue aRStack_430 [56];
  Ok<discord::raw::RawValue> aOStack_3f8 [56];
  RawValue aRStack_3c0 [56];
  Ok<discord::raw::RawValue> aOStack_388 [56];
  RawValue aRStack_350 [56];
  Ok<discord::raw::RawValue> aOStack_318 [56];
  RawValue aRStack_2e0 [8];
  undefined1 auStack_2d8 [40];
  uint local_2b0;
  undefined1 local_2a0 [40];
  uint local_278;
  RawValue aRStack_270 [8];
  undefined1 auStack_268 [40];
  uint local_240;
  undefined1 local_230 [40];
  uint local_208;
  undefined1 auStack_200 [8];
  undefined8 local_1f8 [5];
  uint local_1d0;
  RawValue aRStack_1c8 [8];
  undefined1 auStack_1c0 [40];
  uint local_198;
  undefined1 local_188 [40];
  uint local_160;
  undefined1 auStack_158 [8];
  undefined8 local_150 [5];
  uint local_128;
  RawValue aRStack_120 [8];
  undefined1 auStack_118 [40];
  uint local_f0;
  undefined1 local_e0 [40];
  uint local_b8;
  RawValue aRStack_b0 [8];
  undefined1 auStack_a8 [40];
  uint local_80;
  undefined1 local_70 [40];
  uint local_48;
  
  uVar14 = (ulong)param_1 & 0xffffffff;
  uVar9 = sqlite3_column_type(this,param_1,param_2);
  if ((int)uVar9 < 3) {
    if (uVar9 != 1) {
      if (uVar9 != 2) {
LAB_00209bb8:
        local_710[0] = (ulong)uVar9;
        local_710[1] = 0;
        fmt::v9::vformat(local_ab0,"unknown data type: {}",0x15,1,local_710);
                    /* try { // try from 00209be4 to 00209bef has its CatchHandler @ 0020a430 */
        Error::Error(&local_a98,local_ab0);
        uVar2 = uStack_a70;
        uVar5 = uStack_a77;
        uVar4 = uStack_a78;
        uVar3 = local_a80;
        *(undefined4 *)(in_x8 + 0x40) = 1;
        uStack_a78 = 0;
        uStack_a77 = 0;
        uStack_a70 = 0;
        *(Error *)(in_x8 + 8) = local_a98;
        *(ulong *)(in_x8 + 0x10) = CONCAT71(uStack_a8f,uStack_a90);
        *(undefined8 *)(in_x8 + 0x18) = local_a88;
        *(ulong *)(in_x8 + 9) = CONCAT17(uStack_a90,uStack_a97);
        *(ulong *)(in_x8 + 0x28) = CONCAT71(uVar5,uVar4);
        *(undefined8 *)(in_x8 + 0x30) = uVar2;
        uVar2 = CONCAT17(uVar4,local_a7f);
        local_a98 = (Error)0x0;
        uStack_a97 = 0;
        uStack_a90 = 0;
        uStack_a8f = 0;
        local_a88 = 0;
        local_a80 = 0;
        local_a7f = 0;
        *(undefined8 *)(in_x8 + 0x21) = uVar2;
        *(undefined1 *)(in_x8 + 0x20) = uVar3;
        *(undefined8 *)(in_x8 + 0x38) = local_a68;
        if ((local_ab0[0] & 1) == 0) {
          return;
        }
        operator_delete(local_aa0);
        return;
      }
      local_1f8[0] = sqlite3_column_double(this,uVar14);
      local_1d0 = 5;
                    /* try { // try from 002098fc to 00209907 has its CatchHandler @ 0020a44c */
      RawValue::RawValue(aRStack_1c8,auStack_200);
      local_188[0] = 0;
      local_160 = 0xffffffff;
      if (local_198 == 0xffffffff) {
        *(undefined1 *)(in_x8 + 0x10) = 0;
        *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
      }
      else {
                    /* try { // try from 00209934 to 00209943 has its CatchHandler @ 0020a420 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                  )[local_198])(local_710,local_188,auStack_1c0);
        *(undefined1 *)(in_x8 + 0x10) = 0;
        local_160 = local_198;
        *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
        if (local_198 != 0xffffffff) {
                    /* try { // try from 00209968 to 00209973 has its CatchHandler @ 0020a3fc */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                    )[local_198])(local_710,(undefined1 *)(in_x8 + 0x10),local_188);
          *(undefined4 *)(in_x8 + 0x40) = 0;
          *(uint *)(in_x8 + 0x38) = local_160;
          if (local_160 != 0xffffffff) {
                    /* try { // try from 00209994 to 0020999f has its CatchHandler @ 0020a3e8 */
            (*(code *)(&PTR_FUN_0030a7c0)[local_160])(local_710,local_188);
          }
          goto LAB_00209e00;
        }
      }
      *(undefined4 *)(in_x8 + 0x40) = 0;
LAB_00209e00:
      local_160 = 0xffffffff;
      if (local_198 != 0xffffffff) {
                    /* try { // try from 00209e24 to 00209e2f has its CatchHandler @ 0020a410 */
        (*(code *)(&PTR_FUN_0030a7c0)[local_198])(local_710,auStack_1c0);
      }
      local_198 = 0xffffffff;
      if (local_1d0 == 0xffffffff) {
        return;
      }
                    /* try { // try from 00209e4c to 00209e57 has its CatchHandler @ 0020a408 */
      (*(code *)(&PTR_FUN_0030a7c0)[local_1d0])(local_710,local_1f8);
      return;
    }
    local_150[0] = sqlite3_column_int64(this,uVar14);
    local_128 = 4;
                    /* try { // try from 00209b10 to 00209b1b has its CatchHandler @ 0020a458 */
    RawValue::RawValue(aRStack_120,auStack_158);
    local_e0[0] = 0;
    local_b8 = 0xffffffff;
    if (local_f0 == 0xffffffff) {
      *(undefined1 *)(in_x8 + 0x10) = 0;
      *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
    }
    else {
                    /* try { // try from 00209b48 to 00209b57 has its CatchHandler @ 0020a424 */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                )[local_f0])(local_710,local_e0,auStack_118);
      *(undefined1 *)(in_x8 + 0x10) = 0;
      local_b8 = local_f0;
      *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
      if (local_f0 != 0xffffffff) {
                    /* try { // try from 00209b7c to 00209b87 has its CatchHandler @ 0020a3f8 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                  )[local_f0])(local_710,(undefined1 *)(in_x8 + 0x10),local_e0);
        *(undefined4 *)(in_x8 + 0x40) = 0;
        *(uint *)(in_x8 + 0x38) = local_b8;
        if (local_b8 != 0xffffffff) {
                    /* try { // try from 00209ba8 to 00209bb3 has its CatchHandler @ 0020a3ec */
          (*(code *)(&PTR_FUN_0030a7c0)[local_b8])(local_710,local_e0);
        }
        goto LAB_00209d98;
      }
    }
    *(undefined4 *)(in_x8 + 0x40) = 0;
LAB_00209d98:
    local_b8 = 0xffffffff;
    if (local_f0 != 0xffffffff) {
                    /* try { // try from 00209dbc to 00209dc7 has its CatchHandler @ 0020a414 */
      (*(code *)(&PTR_FUN_0030a7c0)[local_f0])(local_710,auStack_118);
    }
    local_f0 = 0xffffffff;
    if (local_128 == 0xffffffff) {
      return;
    }
                    /* try { // try from 00209de4 to 00209def has its CatchHandler @ 0020a40c */
    (*(code *)(&PTR_FUN_0030a7c0)[local_128])(local_710,local_150);
    return;
  }
  if (uVar9 != 3) {
    if (uVar9 == 4) {
      pbVar11 = (byte *)sqlite3_column_blob(this,uVar14);
      iVar10 = sqlite3_column_bytes(this,uVar14);
      if (iVar10 != 0) {
        pbVar13 = pbVar11 + 1;
        bVar1 = *pbVar11;
        local_710[0] = (ulong)bVar1;
        iVar10 = iVar10 + -1;
        if (4 < bVar1) {
          if (bVar1 < 7) {
            if (bVar1 == 5) {
              RawBytes::RawBytes((RawBytes *)local_710,0,pbVar13,(long)iVar10);
              _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS5_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES5_Lm6ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_
                        (auStack_6e8,local_710);
                    /* try { // try from 0020a014 to 0020a01f has its CatchHandler @ 0020a394 */
              RawValue::RawValue(aRStack_6b0,auStack_6e8);
              Ok<discord::raw::RawValue>::Ok(aOStack_678,aRStack_6b0);
              Result<discord::raw::RawValue,discord::Error>::Result();
              Ok<discord::raw::RawValue>::~Ok(aOStack_678);
              RawValue::~RawValue(aRStack_6b0);
              puVar12 = auStack_6e8;
            }
            else {
              if (bVar1 != 6) goto LAB_0020a1d0;
              RawBytes::RawBytes((RawBytes *)local_710,1,pbVar13,(long)iVar10);
              _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS5_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES5_Lm6ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_
                        (auStack_7b8,local_710);
                    /* try { // try from 00209f84 to 00209f8f has its CatchHandler @ 0020a3a0 */
              RawValue::RawValue(aRStack_780,auStack_7b8);
              Ok<discord::raw::RawValue>::Ok(aOStack_748,aRStack_780);
              Result<discord::raw::RawValue,discord::Error>::Result();
              Ok<discord::raw::RawValue>::~Ok(aOStack_748);
              RawValue::~RawValue(aRStack_780);
              puVar12 = auStack_7b8;
            }
          }
          else {
            if (bVar1 != 7) {
              if (bVar1 == 8) {
                RawObject::RawObject((RawObject *)local_710,0,pbVar13,(long)iVar10);
                _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS6_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES6_Lm7ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_
                          (auStack_9b0,local_710);
                    /* try { // try from 0020a174 to 0020a17f has its CatchHandler @ 0020a364 */
                RawValue::RawValue(aRStack_978,auStack_9b0);
                Ok<discord::raw::RawValue>::Ok(aOStack_940,aRStack_978);
                Result<discord::raw::RawValue,discord::Error>::Result();
                Ok<discord::raw::RawValue>::~Ok(aOStack_940);
                RawValue::~RawValue(aRStack_978);
                puVar12 = auStack_9b0;
              }
              else {
                if (bVar1 != 9) goto LAB_0020a1d0;
                RawObject::RawObject((RawObject *)local_710,1,pbVar13,(long)iVar10);
                _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS6_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES6_Lm7ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_
                          (auStack_908,local_710);
                    /* try { // try from 00209e9c to 00209ea7 has its CatchHandler @ 0020a3bc */
                RawValue::RawValue(aRStack_8d0,auStack_908);
                Ok<discord::raw::RawValue>::Ok(aOStack_898,aRStack_8d0);
                Result<discord::raw::RawValue,discord::Error>::Result();
                Ok<discord::raw::RawValue>::~Ok(aOStack_898);
                RawValue::~RawValue(aRStack_8d0);
                puVar12 = auStack_908;
              }
              FUN_001bbcdc(puVar12);
              RawObject::~RawObject((RawObject *)local_710);
              return;
            }
            RawBytes::RawBytes((RawBytes *)local_710,2,pbVar13,(long)iVar10);
            _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS5_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES5_Lm6ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_
                      (auStack_860,local_710);
                    /* try { // try from 0020a0c0 to 0020a0cb has its CatchHandler @ 0020a37c */
            RawValue::RawValue(aRStack_828,auStack_860);
            Ok<discord::raw::RawValue>::Ok(aOStack_7f0,aRStack_828);
            Result<discord::raw::RawValue,discord::Error>::Result();
            Ok<discord::raw::RawValue>::~Ok(aOStack_7f0);
            RawValue::~RawValue(aRStack_828);
            puVar12 = auStack_860;
          }
          FUN_001bbcdc(puVar12);
          RawBytes::~RawBytes((RawBytes *)local_710);
          return;
        }
        if (1 < bVar1) {
          if (bVar1 == 2) {
            local_460 = 1;
            local_438 = 2;
                    /* try { // try from 0020a060 to 0020a06b has its CatchHandler @ 0020a388 */
            RawValue::RawValue(aRStack_430,auStack_468);
            Ok<discord::raw::RawValue>::Ok(aOStack_3f8,aRStack_430);
            Result<discord::raw::RawValue,discord::Error>::Result();
            Ok<discord::raw::RawValue>::~Ok(aOStack_3f8);
            RawValue::~RawValue(aRStack_430);
            FUN_001bbcdc(auStack_468);
            return;
          }
          if (bVar1 == 3) {
            local_508 = 0;
            local_4e0 = 2;
                    /* try { // try from 0020a114 to 0020a11f has its CatchHandler @ 0020a370 */
            RawValue::RawValue(aRStack_4d8,auStack_510);
            Ok<discord::raw::RawValue>::Ok(aOStack_4a0,aRStack_4d8);
            Result<discord::raw::RawValue,discord::Error>::Result();
            Ok<discord::raw::RawValue>::~Ok(aOStack_4a0);
            RawValue::~RawValue(aRStack_4d8);
            FUN_001bbcdc(auStack_510);
            return;
          }
          if (bVar1 == 4) {
            if (iVar10 == 8) {
              local_5b0 = *(undefined8 *)pbVar13;
              local_588 = 3;
                    /* try { // try from 00209ab4 to 00209abf has its CatchHandler @ 0020a344 */
              RawValue::RawValue(aRStack_580,auStack_5b8);
              Ok<discord::raw::RawValue>::Ok(aOStack_548,aRStack_580);
              Result<discord::raw::RawValue,discord::Error>::Result();
              Ok<discord::raw::RawValue>::~Ok(aOStack_548);
              RawValue::~RawValue(aRStack_580);
              FUN_001bbcdc(auStack_5b8);
              return;
            }
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
                      (local_640,"couldn\'t read u64: data has wrong size");
                    /* try { // try from 0020a288 to 0020a293 has its CatchHandler @ 0020a330 */
            Error::Error((Error *)&local_628,local_640);
            uVar6 = uStack_608;
            uVar2 = local_610;
            *(undefined8 *)(in_x8 + 0x10) = uStack_620;
            *(undefined8 *)(in_x8 + 8) = local_628;
            *(undefined8 *)(in_x8 + 0x18) = local_618;
            local_5c0 = local_5f8;
            *(undefined8 *)(in_x8 + 0x30) = local_600;
            *(undefined8 *)(in_x8 + 0x38) = local_5f8;
            uStack_620 = 0;
            local_628 = 0;
            local_610 = 0;
            local_618 = 0;
            uStack_608 = 0;
            local_600 = 0;
            uStack_5e8 = 0;
            local_5f0 = 0;
            *(undefined8 *)(in_x8 + 0x28) = uVar6;
            *(undefined8 *)(in_x8 + 0x20) = uVar2;
            uStack_5d0 = 0;
            local_5e0 = 0;
            local_5d8 = 0;
            local_5c8 = 0;
            *(undefined4 *)(in_x8 + 0x40) = 1;
            Err<discord::Error>::~Err((Err<discord::Error> *)&local_5f0);
            Error::~Error((Error *)&local_628);
            if ((local_640[0] & 1) == 0) {
              return;
            }
            operator_delete(local_630);
            return;
          }
LAB_0020a1d0:
          local_710[1] = 0;
          fmt::v9::vformat(local_a40,"unknown tag: {}",0xf,2,local_710);
                    /* try { // try from 0020a1f4 to 0020a1ff has its CatchHandler @ 0020a350 */
          Error::Error((Error *)&local_a28,local_a40);
          uVar8 = uStack_a08;
          uVar7 = local_a10;
          uVar6 = uStack_a20;
          uVar2 = local_a28;
          local_a28 = 0;
          uStack_a20 = 0;
          *(undefined8 *)(in_x8 + 0x18) = local_a18;
          *(undefined8 *)(in_x8 + 0x10) = uVar6;
          *(undefined8 *)(in_x8 + 8) = uVar2;
          uStack_9d0 = 0;
          local_9c8 = 0;
          uStack_9c0 = local_9f8;
          *(undefined8 *)(in_x8 + 0x30) = local_a00;
          *(undefined8 *)(in_x8 + 0x38) = local_9f8;
          local_a18 = 0;
          local_a10 = 0;
          uStack_a08 = 0;
          local_a00 = 0;
          local_9f0 = 0;
          uStack_9e8 = 0;
          *(undefined8 *)(in_x8 + 0x28) = uVar8;
          *(undefined8 *)(in_x8 + 0x20) = uVar7;
          local_9e0 = 0;
          local_9d8 = 0;
          *(undefined4 *)(in_x8 + 0x40) = 1;
          Err<discord::Error>::~Err((Err<discord::Error> *)&local_9f0);
          Error::~Error((Error *)&local_a28);
          if ((local_a40[0] & 1) == 0) {
            return;
          }
          operator_delete(local_a30);
          return;
        }
        if (bVar1 == 0) {
          RawValue::RawValue(aRStack_350);
          Ok<discord::raw::RawValue>::Ok(aOStack_318,aRStack_350);
          Result<discord::raw::RawValue,discord::Error>::Result();
          Ok<discord::raw::RawValue>::~Ok(aOStack_318);
          this_00 = aRStack_350;
        }
        else {
          if (bVar1 != 1) goto LAB_0020a1d0;
          RawValue::RawValue(aRStack_3c0);
          Ok<discord::raw::RawValue>::Ok(aOStack_388,aRStack_3c0);
          Result<discord::raw::RawValue,discord::Error>::Result();
          Ok<discord::raw::RawValue>::~Ok(aOStack_388);
          this_00 = aRStack_3c0;
        }
        RawValue::~RawValue(this_00);
        return;
      }
      RawValue::RawValue(aRStack_2e0);
      local_2a0[0] = 0;
      local_278 = 0xffffffff;
      if (local_2b0 == 0xffffffff) {
        *(undefined1 *)(in_x8 + 0x10) = 0;
        *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
      }
      else {
                    /* try { // try from 00209cdc to 00209ceb has its CatchHandler @ 0020a3e4 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                  )[local_2b0])(local_710,local_2a0,auStack_2d8);
        *(undefined1 *)(in_x8 + 0x10) = 0;
        local_278 = local_2b0;
        *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
        if (local_2b0 != 0xffffffff) {
                    /* try { // try from 00209d10 to 00209d1b has its CatchHandler @ 0020a3dc */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                    )[local_2b0])(local_710,(undefined1 *)(in_x8 + 0x10),local_2a0);
          *(undefined4 *)(in_x8 + 0x40) = 0;
          *(uint *)(in_x8 + 0x38) = local_278;
          if (local_278 != 0xffffffff) {
                    /* try { // try from 00209d3c to 00209d47 has its CatchHandler @ 0020a3d8 */
            (*(code *)(&PTR_FUN_0030a7c0)[local_278])(local_710,local_2a0);
          }
          goto LAB_00209ee4;
        }
      }
      *(undefined4 *)(in_x8 + 0x40) = 0;
LAB_00209ee4:
      local_278 = 0xffffffff;
      if (local_2b0 == 0xffffffff) {
        return;
      }
                    /* try { // try from 00209f08 to 00209f13 has its CatchHandler @ 0020a3e0 */
      (*(code *)(&PTR_FUN_0030a7c0)[local_2b0])(local_710,auStack_2d8);
      return;
    }
    if (uVar9 != 5) goto LAB_00209bb8;
    RawValue::RawValue(aRStack_b0);
    local_70[0] = 0;
    local_48 = 0xffffffff;
    if (local_80 == 0xffffffff) {
      *(undefined1 *)(in_x8 + 0x10) = 0;
      *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
    }
    else {
                    /* try { // try from 00209860 to 0020986f has its CatchHandler @ 0020a428 */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                )[local_80])(local_710,local_70,auStack_a8);
      *(undefined1 *)(in_x8 + 0x10) = 0;
      local_48 = local_80;
      *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
      if (local_80 != 0xffffffff) {
                    /* try { // try from 00209894 to 0020989f has its CatchHandler @ 0020a400 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                  )[local_80])(local_710,(undefined1 *)(in_x8 + 0x10),local_70);
        *(undefined4 *)(in_x8 + 0x40) = 0;
        *(uint *)(in_x8 + 0x38) = local_48;
        if (local_48 != 0xffffffff) {
                    /* try { // try from 002098c0 to 002098cb has its CatchHandler @ 0020a3f0 */
          (*(code *)(&PTR_FUN_0030a7c0)[local_48])(local_710,local_70);
        }
        goto LAB_00209d58;
      }
    }
    *(undefined4 *)(in_x8 + 0x40) = 0;
LAB_00209d58:
    local_48 = 0xffffffff;
    if (local_80 == 0xffffffff) {
      return;
    }
                    /* try { // try from 00209d7c to 00209d87 has its CatchHandler @ 0020a418 */
    (*(code *)(&PTR_FUN_0030a7c0)[local_80])(local_710,auStack_a8);
    return;
  }
  RawValue::RawValue(aRStack_270);
  local_230[0] = 0;
  local_208 = 0xffffffff;
  if (local_240 == 0xffffffff) {
    *(undefined1 *)(in_x8 + 0x10) = 0;
    *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
  }
  else {
                    /* try { // try from 002099d8 to 002099e7 has its CatchHandler @ 0020a42c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
              )[local_240])(local_710,local_230,auStack_268);
    *(undefined1 *)(in_x8 + 0x10) = 0;
    local_208 = local_240;
    *(undefined4 *)(in_x8 + 0x38) = 0xffffffff;
    if (local_240 != 0xffffffff) {
                    /* try { // try from 00209a0c to 00209a17 has its CatchHandler @ 0020a404 */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
                )[local_240])(local_710,(undefined1 *)(in_x8 + 0x10),local_230);
      *(undefined4 *)(in_x8 + 0x40) = 0;
      *(uint *)(in_x8 + 0x38) = local_208;
      if (local_208 != 0xffffffff) {
                    /* try { // try from 00209a38 to 00209a43 has its CatchHandler @ 0020a3f4 */
        (*(code *)(&PTR_FUN_0030a7c0)[local_208])(local_710,local_230);
      }
      goto LAB_00209c74;
    }
  }
  *(undefined4 *)(in_x8 + 0x40) = 0;
LAB_00209c74:
  local_208 = 0xffffffff;
  if (local_240 != 0xffffffff) {
                    /* try { // try from 00209c98 to 00209ca3 has its CatchHandler @ 0020a41c */
    (*(code *)(&PTR_FUN_0030a7c0)[local_240])(local_710,auStack_268);
  }
  return;
}


// ===== 0020a46c  FUN_0020a46c =====

bool FUN_0020a46c(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = sqlite3_bind_blob64(*(undefined8 *)*param_1,*(undefined4 *)((undefined8 *)*param_1 + 1),
                              &DAT_003165f8,1,0);
  return iVar1 == 0;
}


// ===== 0020a4a4  FUN_0020a4a4 =====

bool FUN_0020a4a4(long *param_1)

{
  int iVar1;
  
  iVar1 = sqlite3_bind_text64(*(undefined8 *)(*param_1 + 0x10),*(undefined4 *)(*param_1 + 0x18),
                              &DAT_003165f9,0,0,1);
  return iVar1 == 0;
}


// ===== 0020a4e0  FUN_0020a4e0 =====

bool FUN_0020a4e0(long *param_1,char *param_2)

{
  int iVar1;
  undefined1 local_14 [4];
  
  local_14[0] = 2;
  if (*param_2 == '\0') {
    local_14[0] = 3;
  }
  iVar1 = sqlite3_bind_blob64(*(undefined8 *)(*param_1 + 0x20),*(undefined4 *)(*param_1 + 0x28),
                              local_14,1,0xffffffffffffffff);
  return iVar1 == 0;
}


// ===== 0020a530  FUN_0020a530 =====

bool FUN_0020a530(long *param_1,long *param_2)

{
  int iVar1;
  ulong local_20;
  undefined1 local_18;
  
  local_20 = *param_2 << 8 | 4;
  local_18 = (undefined1)((ulong)*param_2 >> 0x38);
  iVar1 = sqlite3_bind_blob64(*(undefined8 *)(*param_1 + 0x30),*(undefined4 *)(*param_1 + 0x38),
                              &local_20,9,0xffffffffffffffff);
  return iVar1 == 0;
}


// ===== 0020a584  FUN_0020a584 =====

bool FUN_0020a584(long *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = sqlite3_bind_int64(*(undefined8 *)(*param_1 + 0x40),*(undefined4 *)(*param_1 + 0x48),
                             *param_2);
  return iVar1 == 0;
}


// ===== 0020a5b4  FUN_0020a5b4 =====

bool FUN_0020a5b4(long *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = sqlite3_bind_double(*param_2,*(undefined8 *)(*param_1 + 0x50),
                              *(undefined4 *)(*param_1 + 0x58));
  return iVar1 == 0;
}


// ===== 0020a5e4  FUN_0020a5e4 =====

bool FUN_0020a5e4(long *param_1,RawBytes *param_2)

{
  uchar uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *param_1;
  bVar3 = discord::raw::RawBytes::type(param_2);
  uVar1 = bVar3 + 5;
  if (2 < bVar3) {
    uVar1 = 'd';
  }
  discord::raw::RawBytes::prepend(param_2,uVar1);
  uVar7 = *(undefined8 *)(lVar8 + 0x60);
  uVar2 = *(undefined4 *)(lVar8 + 0x68);
  uVar5 = discord::raw::RawBytes::data(param_2);
  uVar6 = discord::raw::RawBytes::size(param_2);
  iVar4 = sqlite3_bind_blob64(uVar7,uVar2,uVar5,uVar6,0);
  return iVar4 == 0;
}


// ===== 0020a66c  FUN_0020a66c =====

bool FUN_0020a66c(long *param_1,RawObject *param_2)

{
  uchar uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uchar uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *param_1;
  cVar3 = discord::raw::RawObject::type(param_2);
  uVar7 = '\b';
  if (cVar3 != '\0') {
    uVar7 = 'd';
  }
  uVar1 = '\t';
  if (cVar3 != '\x01') {
    uVar1 = uVar7;
  }
  discord::raw::RawObject::prepend(param_2,uVar1);
  uVar8 = *(undefined8 *)(lVar9 + 0x70);
  uVar2 = *(undefined4 *)(lVar9 + 0x78);
  uVar5 = discord::raw::RawObject::data(param_2);
  uVar6 = discord::raw::RawObject::size(param_2);
  iVar4 = sqlite3_bind_blob64(uVar8,uVar2,uVar5,uVar6,0);
  return iVar4 == 0;
}


// ===== 0020a6fc  discord::Ok<discord::raw::RawValue>::Ok =====

/* discord::Ok<discord::raw::RawValue>::Ok(discord::raw::RawValue) */

void __thiscall
discord::Ok<discord::raw::RawValue>::Ok(Ok<discord::raw::RawValue> *this,long param_2)

{
  undefined1 uStack_21;
  
  this[8] = (Ok<discord::raw::RawValue>)0x0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  if (*(uint *)(param_2 + 0x30) != 0xffffffff) {
                    /* try { // try from 0020a73c to 0020a747 has its CatchHandler @ 0020a760 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
              )[*(uint *)(param_2 + 0x30)])(&uStack_21,this + 8,param_2 + 8);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  return;
}


// ===== 0020a764  discord::Result<discord::raw::RawValue,discord::Error>::Result =====

/* discord::Result<discord::raw::RawValue,
   discord::Error>::Result(discord::Ok<discord::raw::RawValue>) */

void __thiscall
discord::Result<discord::raw::RawValue,discord::Error>::Result
          (Result<discord::raw::RawValue,discord::Error> *this,long param_2)

{
  undefined1 uStack_21;
  
  this[0x10] = (Result<discord::raw::RawValue,discord::Error>)0x0;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  if (*(uint *)(param_2 + 0x30) != 0xffffffff) {
                    /* try { // try from 0020a7a4 to 0020a7af has its CatchHandler @ 0020a7cc */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a800
              )[*(uint *)(param_2 + 0x30)])(&uStack_21,this + 0x10,param_2 + 8);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_2 + 0x30);
  }
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


// ===== 0020a7d0  discord::Ok<discord::raw::RawValue>::~Ok =====

/* discord::Ok<discord::raw::RawValue>::~Ok() */

void __thiscall discord::Ok<discord::raw::RawValue>::~Ok(Ok<discord::raw::RawValue> *this)

{
  undefined1 uStack_1;
  
  if (*(uint *)(this + 0x30) != 0xffffffff) {
                    /* try { // try from 0020a7f8 to 0020a803 has its CatchHandler @ 0020a818 */
    (*(code *)(&PTR_FUN_0030a7c0)[*(uint *)(this + 0x30)])(&uStack_1,this + 8);
  }
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  return;
}


// ===== 0020a81c  _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS5_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES5_Lm6ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_ =====

void _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS5_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES5_Lm6ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_
               (long param_1,long param_2)

{
  undefined1 uStack_21;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  if (*(uint *)(param_2 + 0x20) != 0xffffffff) {
                    /* try { // try from 0020a85c to 0020a867 has its CatchHandler @ 0020a888 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<un___d___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>&&>_0030a858
              )[*(uint *)(param_2 + 0x20)])(&uStack_21,(undefined1 *)(param_1 + 8),param_2);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x30) = 6;
  return;
}


// ===== 0020a88c  _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS6_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES6_Lm7ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_ =====

void _ZNSt6__ndk17variantIJN7discord3raw6HiddenENS1_4NoneEbmldNS2_8RawBytesENS2_9RawObjectEEEC2B8ne180000IS6_TnNS_9enable_ifIXnt9is_same_vIu14__remove_cvrefIT_ES7_EEiE4typeELi0ETnNS9_IXntsr17__is_inplace_typeISB_EE5valueEiE4typeELi0ETnNS9_IXntsr18__is_inplace_indexISB_EE5valueEiE4typeELi0ES6_Lm7ETnNS9_IX18is_constructible_vIT3_SA_EEiE4typeELi0EEEOSA_
               (long param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uStack_21;
  
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 8) = uVar2;
  if (uVar1 != 0xffffffff) {
                    /* try { // try from 0020a8d4 to 0020a8df has its CatchHandler @ 0020a900 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>&&>_0030a880
              )[uVar1])(&uStack_21,(undefined1 *)(param_1 + 0x10),param_2 + 8);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x30) = 7;
  return;
}


// ===== 0020a904  discord::raw::Hidden::operator== =====

/* discord::raw::Hidden::TEMPNAMEPLACEHOLDERVALUE(discord::raw::Hidden const&) const */

undefined8 __thiscall discord::raw::Hidden::operator==(Hidden *this,Hidden *param_1)

{
  return 1;
}


// ===== 0020a90c  discord::raw::Hidden::operator!= =====

/* discord::raw::Hidden::TEMPNAMEPLACEHOLDERVALUE(discord::raw::Hidden const&) const */

undefined8 __thiscall discord::raw::Hidden::operator!=(Hidden *this,Hidden *param_1)

{
  return 0;
}


// ===== 0020a914  discord::raw::Hidden::operator< =====

/* discord::raw::Hidden::TEMPNAMEPLACEHOLDERVALUE(discord::raw::Hidden const&) const */

undefined8 __thiscall discord::raw::Hidden::operator<(Hidden *this,Hidden *param_1)

{
  return 0;
}


// ===== 0020a91c  discord::raw::RawBytes::RawBytes =====

/* discord::raw::RawBytes::RawBytes() */

void __thiscall discord::raw::RawBytes::RawBytes(RawBytes *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  return;
}


// ===== 0020a930  discord::raw::RawBytes::RawBytes =====

/* discord::raw::RawBytes::RawBytes(std::__ndk1::variant<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<unsigned
   char, std::__ndk1::allocator<unsigned char> >, boost::container::small_vector<unsigned char, 8ul,
   void, void> >) */

void __thiscall discord::raw::RawBytes::RawBytes(RawBytes *this,long param_2)

{
  undefined1 uStack_21;
  
  *this = (RawBytes)0x0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  if (*(uint *)(param_2 + 0x20) != 0xffffffff) {
                    /* try { // try from 0020a96c to 0020a97b has its CatchHandler @ 0020a994 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<un___d___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>&&>_0030a8a8
              )[*(uint *)(param_2 + 0x20)])(&uStack_21,this,param_2);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 0x20);
  }
  return;
}


// ===== 0020a998  discord::raw::RawBytes::RawBytes =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* discord::raw::RawBytes::RawBytes(discord::raw::RawBytes::Type, unsigned char const*, unsigned
   long) */

void __thiscall
discord::raw::RawBytes::RawBytes(RawBytes *this,byte param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  undefined8 uVar3;
  long lVar4;
  void *unaff_x22;
  undefined1 *__dest_00;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined6 local_80;
  undefined2 uStack_7a;
  long lStack_78;
  undefined1 auStack_70 [8];
  byte local_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined1 *puStack_58;
  undefined1 auStack_50 [8];
  uint local_48;
  RawBytes *local_28;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if (1 < param_2 - 1) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0020abdc to 0020abdf has its CatchHandler @ 0020ac2c */
      abort();
    }
    if (param_4 < 9) {
      local_88 = SUB86(auStack_70,0);
      uStack_82 = (undefined2)((ulong)auStack_70 >> 0x30);
      lStack_78 = _UNK_001776c8;
      local_80 = (undefined6)ram0x001776c0;
      uStack_7a = (undefined2)((ulong)ram0x001776c0 >> 0x30);
                    /* try { // try from 0020aa24 to 0020aa37 has its CatchHandler @ 0020abe8 */
      boost::container::
      vector<unsigned_char,boost::container::small_vector_allocator<unsigned_char,boost::container::new_allocator<void>,void>,void>
      ::assign<unsigned_char_const*>((uchar *)&local_88,param_3,(type *)(param_3 + param_4));
      lVar2 = lStack_78;
      local_68 = (byte)auStack_50;
      uStack_67 = (undefined1)((ulong)auStack_50 >> 8);
      uStack_66 = (undefined6)((ulong)auStack_50 >> 0x10);
      puStack_58 = (undefined1 *)0x8;
      uStack_60 = (undefined2)local_80;
      if (auStack_70 == (undefined1 *)CONCAT26(uStack_82,local_88)) {
        __n = CONCAT26(uStack_7a,local_80);
        if (__n != 0) {
          memcpy(auStack_50,auStack_70,__n);
        }
        local_48 = 2;
        lVar4 = 2;
        uStack_5e = (undefined6)(__n >> 0x10);
      }
      else {
        local_68 = (byte)local_88;
        uStack_67 = (undefined1)((uint6)local_88 >> 8);
        uStack_66 = (undefined6)(CONCAT26(uStack_82,local_88) >> 0x10);
        lVar4 = 2;
        lStack_78 = 0;
        local_48 = 2;
        puStack_58 = (undefined1 *)lVar2;
        uStack_5e = (undefined6)(CONCAT26(uStack_7a,local_80) >> 0x10);
        local_88 = 0;
        uStack_82 = 0;
      }
    }
    else {
      local_88 = 0;
      uStack_82 = 0;
      local_80 = 0;
      uStack_7a = 0;
      lStack_78 = 0;
      if ((long)param_4 < 0) {
                    /* try { // try from 0020abe0 to 0020abe7 has its CatchHandler @ 0020ac10 */
        uVar3 = FUN_001b39a0(&local_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0020aa24 with catch @ 0020abe8
                        */
        if ((lStack_78 != 0) && (unaff_x22 != (void *)CONCAT26(uStack_82,local_88))) {
          operator_delete((void *)CONCAT26(uStack_82,local_88));
        }
        FUN_001bbd74(this);
                    /* WARNING: Subroutine does not return */
        FUN_00222c44(uVar3);
      }
                    /* try { // try from 0020aafc to 0020ab03 has its CatchHandler @ 0020ac10 */
      __dest = operator_new(param_4);
      lVar2 = (long)__dest + param_4;
      memcpy(__dest,param_3,param_4);
      lVar4 = 1;
      local_68 = (byte)__dest;
      uStack_67 = (undefined1)((ulong)__dest >> 8);
      uStack_66 = (undefined6)((ulong)__dest >> 0x10);
      uStack_60 = (undefined2)lVar2;
      uStack_5e = (undefined6)((ulong)lVar2 >> 0x10);
      local_48 = 1;
      lStack_78 = 0;
      local_88 = 0;
      uStack_82 = 0;
      puStack_58 = (undefined1 *)lVar2;
    }
    uStack_7a = 0;
    local_80 = 0;
                    /* try { // try from 0020ab6c to 0020ab7b has its CatchHandler @ 0020ac0c */
    local_28 = this;
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>&&>_0030a8c0
              )[lVar4])(&local_28,this,&local_68);
    if (local_48 != 0xffffffff) {
                    /* try { // try from 0020ab94 to 0020ab9f has its CatchHandler @ 0020ac08 */
      (*(code *)(&PTR_FUN_0030a890)[local_48])(&local_28,&local_68);
    }
    local_48 = 0xffffffff;
    if (8 < param_4) {
      return;
    }
    if (lStack_78 == 0) {
      return;
    }
    if (auStack_70 == (undefined1 *)CONCAT26(uStack_82,local_88)) {
      return;
    }
    operator_delete((undefined1 *)CONCAT26(uStack_82,local_88));
    return;
  }
  if (0xffffffffffffffef < param_4) {
                    /* try { // try from 0020abd4 to 0020abdb has its CatchHandler @ 0020ac30 */
                    /* WARNING: Subroutine does not return */
    FUN_001b1970(&local_68);
  }
  if (param_4 < 0x17) {
    __dest_00 = (undefined1 *)((ulong)&local_68 | 1);
    local_68 = (byte)((int)param_4 << 1);
    if (param_4 == 0) goto LAB_0020aaac;
  }
  else {
    uVar1 = (param_4 | 0xf) + 1;
                    /* try { // try from 0020aa80 to 0020aa87 has its CatchHandler @ 0020ac30 */
    __dest_00 = (undefined1 *)operator_new(uVar1);
    local_68 = (byte)uVar1 | 1;
    uStack_60 = (undefined2)param_4;
    uStack_5e = (undefined6)(param_4 >> 0x10);
    uStack_67 = (undefined1)(uVar1 >> 8);
    uStack_66 = (undefined6)(uVar1 >> 0x10);
    puStack_58 = __dest_00;
  }
  memcpy(__dest_00,param_3,param_4);
  __dest_00 = __dest_00 + param_4;
LAB_0020aaac:
  *__dest_00 = 0;
  *(ushort *)this = CONCAT11(uStack_67,local_68);
  *(ulong *)(this + 2) = CONCAT26(uStack_60,uStack_66);
  *(ulong *)(this + 8) = CONCAT62(uStack_5e,uStack_60);
  *(undefined1 **)(this + 0x10) = puStack_58;
  return;
}


// ===== 0020ac44  discord::raw::RawBytes::operator== =====

/* discord::raw::RawBytes::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawBytes const&) const */

byte __thiscall discord::raw::RawBytes::operator==(RawBytes *this,RawBytes *param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  uVar2 = *(uint *)(this + 0x20);
  bVar3 = *(uint *)(param_1 + 0x20) == 0xffffffff;
  bVar1 = !(bool)bVar3 && *(uint *)(param_1 + 0x20) == uVar2;
  if ((uVar2 != 0xffffffff) && (bVar3 = bVar1, bVar1)) {
    local_18 = &uStack_19;
    bVar3 = (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_equal_to<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&>_0030a8d8
                      )[uVar2])(&local_18,this);
  }
  return bVar3 & 1;
}


// ===== 0020acb0  discord::raw::RawBytes::operator!= =====

/* discord::raw::RawBytes::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawBytes const&) const */

byte __thiscall discord::raw::RawBytes::operator!=(RawBytes *this,RawBytes *param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  uVar2 = *(uint *)(this + 0x20);
  bVar3 = *(uint *)(param_1 + 0x20) == 0xffffffff;
  bVar1 = !(bool)bVar3 && *(uint *)(param_1 + 0x20) == uVar2;
  if ((uVar2 != 0xffffffff) && (bVar3 = bVar1, bVar1)) {
    local_18 = &uStack_19;
    bVar3 = (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_equal_to<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&>_0030a8d8
                      )[uVar2])(&local_18,this);
  }
  return (bVar3 ^ 0xff) & 1;
}


// ===== 0020ad20  discord::raw::RawBytes::operator< =====

/* discord::raw::RawBytes::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawBytes const&) const */

uint __thiscall discord::raw::RawBytes::operator<(RawBytes *this,RawBytes *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0xffffffff) {
    uVar1 = *(uint *)(this + 0x20);
    if ((uVar1 == 0xffffffff) || (uVar1 < uVar2)) {
      return 1;
    }
    if (uVar1 <= uVar2) {
      local_18 = &uStack_19;
      uVar2 = (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_less<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,boost_container_small_vector<unsigned_char,8ul,void,void>>const&>_0030a8f0
                        )[uVar1])(&local_18,this,param_1);
      return uVar2 & 1;
    }
  }
  return 0;
}


// ===== 0020ad9c  discord::raw::RawBytes::type =====

/* discord::raw::RawBytes::type() const */

void __thiscall discord::raw::RawBytes::type(RawBytes *this)

{
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*(uint *)(this + 0x20) != 0xffffffff) {
    local_18 = &uStack_19;
    (*(code *)(&PTR_FUN_0030a908)[*(uint *)(this + 0x20)])(&local_18,this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020ade4  discord::raw::RawBytes::variant =====

/* discord::raw::RawBytes::variant() const */

void discord::raw::RawBytes::variant(void)

{
  return;
}


// ===== 0020ade8  discord::raw::RawBytes::data =====

/* discord::raw::RawBytes::data() const */

void __thiscall discord::raw::RawBytes::data(RawBytes *this)

{
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*(uint *)(this + 0x20) != 0xffffffff) {
    local_18 = &uStack_19;
    (*(code *)(&PTR_FUN_0030a920)[*(uint *)(this + 0x20)])(&local_18,this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020ae30  discord::raw::RawBytes::size =====

/* discord::raw::RawBytes::size() const */

void __thiscall discord::raw::RawBytes::size(RawBytes *this)

{
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*(uint *)(this + 0x20) != 0xffffffff) {
    local_18 = &uStack_19;
    (*(code *)(&PTR_FUN_0030a938)[*(uint *)(this + 0x20)])(&local_18,this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020ae78  discord::raw::RawBytes::prepend =====

/* discord::raw::RawBytes::prepend(unsigned char) */

void __thiscall discord::raw::RawBytes::prepend(RawBytes *this,uchar param_1)

{
  uchar local_1c [4];
  uchar *local_18;
  
  local_1c[0] = param_1;
  if (*(uint *)(this + 0x20) != 0xffffffff) {
    local_18 = local_1c;
    (*(code *)(&PTR_FUN_0030a950)[*(uint *)(this + 0x20)])(&local_18,this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020aec8  discord::raw::RawObject::RawObject =====

/* discord::raw::RawObject::RawObject() */

void __thiscall discord::raw::RawObject::RawObject(RawObject *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *this = (RawObject)0x1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


// ===== 0020aee0  discord::raw::RawObject::RawObject =====

/* discord::raw::RawObject::RawObject(discord::raw::RawObject::Type,
   std::__ndk1::variant<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >)
    */

void __thiscall discord::raw::RawObject::RawObject(RawObject *this,RawObject param_2,long param_3)

{
  uint uVar1;
  undefined1 uStack_21;
  
  this[8] = (RawObject)0x0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  uVar1 = *(uint *)(param_3 + 0x18);
  *this = param_2;
  if (uVar1 != 0xffffffff) {
                    /* try { // try from 0020af28 to 0020af2f has its CatchHandler @ 0020af48 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>&&>_0030a968
              )[uVar1])(&uStack_21);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_3 + 0x18);
  }
  return;
}


// ===== 0020af4c  discord::raw::RawObject::RawObject =====

/* discord::raw::RawObject::RawObject(discord::raw::RawObject::Type, unsigned char const*, unsigned
   long) */

void __thiscall
discord::raw::RawObject::RawObject(RawObject *this,RawObject param_2,void *param_3,ulong param_4)

{
  void *__dest;
  undefined8 uVar1;
  long lVar2;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  
  local_58 = (void *)0x0;
  local_50 = (void *)0x0;
  *this = param_2;
  local_48 = 0;
  if (param_4 == 0) {
    lVar2 = 0;
    __dest = (void *)0x0;
  }
  else {
    if ((long)param_4 < 0) {
                    /* try { // try from 0020afd0 to 0020afd7 has its CatchHandler @ 0020afd8 */
      uVar1 = FUN_001b39a0(&local_58);
                    /* catch() { ... } // from try @ 0020af80 with catch @ 0020afd8
                       catch() { ... } // from try @ 0020afd0 with catch @ 0020afd8 */
      if (local_58 != (void *)0x0) {
        local_50 = local_58;
        operator_delete(local_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00222c44(uVar1);
    }
                    /* try { // try from 0020af80 to 0020af8b has its CatchHandler @ 0020afd8 */
    __dest = operator_new(param_4);
    lVar2 = (long)__dest + param_4;
    memcpy(__dest,param_3,param_4);
  }
  *(void **)(this + 8) = __dest;
  *(long *)(this + 0x10) = lVar2;
  *(long *)(this + 0x18) = lVar2;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


// ===== 0020aff8  discord::raw::RawObject::operator== =====

/* discord::raw::RawObject::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawObject const&) const */

byte __thiscall discord::raw::RawObject::operator==(RawObject *this,RawObject *param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*this != *param_1) {
    return 0;
  }
  uVar2 = *(uint *)(this + 0x20);
  bVar3 = *(uint *)(param_1 + 0x20) == 0xffffffff;
  bVar1 = !(bool)bVar3 && *(uint *)(param_1 + 0x20) == uVar2;
  if ((uVar2 != 0xffffffff) && (bVar3 = bVar1, bVar1)) {
    local_18 = &uStack_19;
    bVar3 = (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_equal_to<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>const&>_0030a978
                      )[uVar2])(&local_18,this + 8,param_1 + 8);
  }
  return bVar3 & 1;
}


// ===== 0020b088  discord::raw::RawObject::operator!= =====

/* discord::raw::RawObject::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawObject const&) const */

byte __thiscall discord::raw::RawObject::operator!=(RawObject *this,RawObject *param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*this == *param_1) {
    uVar2 = *(uint *)(this + 0x20);
    bVar3 = *(uint *)(param_1 + 0x20) == 0xffffffff;
    bVar1 = !(bool)bVar3 && *(uint *)(param_1 + 0x20) == uVar2;
    if ((uVar2 != 0xffffffff) && (bVar3 = bVar1, bVar1)) {
      local_18 = &uStack_19;
      bVar3 = (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_equal_to<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>const&>_0030a978
                        )[uVar2])(&local_18,this + 8,param_1 + 8);
    }
  }
  else {
    bVar3 = 0;
  }
  return (bVar3 ^ 0xff) & 1;
}


// ===== 0020b11c  discord::raw::RawObject::operator< =====

/* discord::raw::RawObject::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawObject const&) const */

undefined8 __thiscall discord::raw::RawObject::operator<(RawObject *this,RawObject *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 uStack_39;
  undefined1 *local_38;
  
  if ((byte)*this < (byte)*param_1) {
    return 1;
  }
  if ((byte)*this <= (byte)*param_1) {
    uVar3 = *(uint *)(param_1 + 0x20);
    if (uVar3 != 0xffffffff) {
      uVar1 = *(uint *)(this + 0x20);
      if ((uVar1 == 0xffffffff) || (uVar1 < uVar3)) {
        return 1;
      }
      if (uVar1 <= uVar3) {
        local_38 = &uStack_39;
        uVar2 = (*(code *)(&
                          PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_less<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>const&>_0030a988
                          )[uVar1])(&local_38,this + 8,param_1 + 8);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar3 = *(uint *)(param_1 + 0x20);
      }
    }
    if (*(uint *)(this + 0x20) == 0xffffffff) {
      return 0;
    }
    if (uVar3 != *(uint *)(this + 0x20)) {
      return 0;
    }
    local_38 = &uStack_39;
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_less<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_vector<unsigned_char,std___ndk1_allocator<unsigned_char>>,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>const&>_0030a988
              )[uVar3])(&local_38,param_1 + 8,this + 8);
  }
  return 0;
}


// ===== 0020b210  discord::raw::RawObject::type =====

/* discord::raw::RawObject::type() const */

RawObject __thiscall discord::raw::RawObject::type(RawObject *this)

{
  return *this;
}


// ===== 0020b218  discord::raw::RawObject::variant =====

/* discord::raw::RawObject::variant() const */

RawObject * __thiscall discord::raw::RawObject::variant(RawObject *this)

{
  return this + 8;
}


// ===== 0020b220  discord::raw::RawObject::data =====

/* discord::raw::RawObject::data() const */

void __thiscall discord::raw::RawObject::data(RawObject *this)

{
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*(uint *)(this + 0x20) != 0xffffffff) {
    local_18 = &uStack_19;
    (*(code *)(&PTR_FUN_0030a998)[*(uint *)(this + 0x20)])(&local_18,this + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020b26c  discord::raw::RawObject::size =====

/* discord::raw::RawObject::size() const */

void __thiscall discord::raw::RawObject::size(RawObject *this)

{
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*(uint *)(this + 0x20) != 0xffffffff) {
    local_18 = &uStack_19;
    (*(code *)(&PTR_FUN_0030a9a8)[*(uint *)(this + 0x20)])(&local_18,this + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020b2b8  discord::raw::RawObject::prepend =====

/* discord::raw::RawObject::prepend(unsigned char) */

void __thiscall discord::raw::RawObject::prepend(RawObject *this,uchar param_1)

{
  uchar local_1c [4];
  uchar *local_18;
  
  local_1c[0] = param_1;
  if (*(uint *)(this + 0x20) != 0xffffffff) {
    local_18 = local_1c;
    (*(code *)(&PTR_FUN_0030a9b8)[*(uint *)(this + 0x20)])(&local_18,this + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020b308  discord::raw::RawValue::RawValue =====

/* discord::raw::RawValue::RawValue() */

void __thiscall discord::raw::RawValue::RawValue(RawValue *this)

{
  *(undefined4 *)(this + 0x30) = 1;
  return;
}


// ===== 0020b314  discord::raw::RawValue::RawValue =====

/* discord::raw::RawValue::RawValue(discord::raw::Hidden) */

void __thiscall discord::raw::RawValue::RawValue(RawValue *this)

{
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


// ===== 0020b31c  discord::raw::RawValue::RawValue =====

/* discord::raw::RawValue::RawValue(discord::None) */

void __thiscall discord::raw::RawValue::RawValue(RawValue *this)

{
  *(undefined4 *)(this + 0x30) = 1;
  return;
}


// ===== 0020b328  discord::raw::RawValue::RawValue =====

/* discord::raw::RawValue::RawValue(std::__ndk1::variant<discord::raw::Hidden, discord::None, bool,
   unsigned long, long, double, discord::raw::RawBytes, discord::raw::RawObject>) */

void __thiscall discord::raw::RawValue::RawValue(RawValue *this,long param_2)

{
  undefined1 uStack_21;
  
  this[8] = (RawValue)0x0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  if (*(uint *)(param_2 + 0x30) != 0xffffffff) {
                    /* try { // try from 0020b368 to 0020b373 has its CatchHandler @ 0020b38c */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>&&>_0030a9c8
              )[*(uint *)(param_2 + 0x30)])(&uStack_21,this + 8,param_2 + 8);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  return;
}


// ===== 0020b390  discord::raw::RawValue::operator== =====

/* discord::raw::RawValue::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawValue const&) const */

byte __thiscall discord::raw::RawValue::operator==(RawValue *this,RawValue *param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  uVar2 = *(uint *)(this + 0x30);
  bVar3 = *(uint *)(param_1 + 0x30) == 0xffffffff;
  bVar1 = !(bool)bVar3 && *(uint *)(param_1 + 0x30) == uVar2;
  if ((uVar2 != 0xffffffff) && (bVar3 = bVar1, bVar1)) {
    local_18 = &uStack_19;
    bVar3 = (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_equal_to<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030aa08
                      )[uVar2])(&local_18,this + 8,param_1 + 8);
  }
  return bVar3 & 1;
}


// ===== 0020b404  discord::raw::RawValue::operator!= =====

/* discord::raw::RawValue::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawValue const&) const */

byte __thiscall discord::raw::RawValue::operator!=(RawValue *this,RawValue *param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  uVar2 = *(uint *)(this + 0x30);
  bVar3 = *(uint *)(param_1 + 0x30) == 0xffffffff;
  bVar1 = !(bool)bVar3 && *(uint *)(param_1 + 0x30) == uVar2;
  if ((uVar2 != 0xffffffff) && (bVar3 = bVar1, bVar1)) {
    local_18 = &uStack_19;
    bVar3 = (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_equal_to<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030aa08
                      )[uVar2])(&local_18,this + 8,param_1 + 8);
  }
  return (bVar3 ^ 0xff) & 1;
}


// ===== 0020b47c  discord::raw::RawValue::operator< =====

/* discord::raw::RawValue::TEMPNAMEPLACEHOLDERVALUE(discord::raw::RawValue const&) const */

uint __thiscall discord::raw::RawValue::operator<(RawValue *this,RawValue *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0xffffffff) {
    uVar1 = *(uint *)(this + 0x30);
    if ((uVar1 == 0xffffffff) || (uVar1 < uVar2)) {
      return 1;
    }
    if (uVar1 <= uVar2) {
      local_18 = &uStack_19;
      uVar2 = (*(code *)(&
                        PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<std___ndk1___convert_to_bool<std___ndk1_less<void>>>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,discord_raw_Hidden,discord_None,bool,unsigned_long,long,double,discord_raw_RawBytes,discord_raw_RawObject>const&>_0030aa48
                        )[uVar1])(&local_18,this + 8,param_1 + 8);
      return uVar2 & 1;
    }
  }
  return 0;
}


// ===== 0020b500  discord::raw::RawValue::variant =====

/* discord::raw::RawValue::variant() */

void discord::raw::RawValue::variant(void)

{
  return;
}


// ===== 0020b504  discord::raw::RawValue::variant =====

/* discord::raw::RawValue::variant() const */

void discord::raw::RawValue::variant(void)

{
  return;
}


// ===== 0020b508  discord::raw::RawValue::variant_type =====

/* discord::raw::RawValue::variant_type() const */

void __thiscall discord::raw::RawValue::variant_type(RawValue *this)

{
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*(uint *)(this + 0x30) != 0xffffffff) {
    local_18 = &uStack_19;
    (*(code *)(&PTR_FUN_0030aa88)[*(uint *)(this + 0x30)])(&local_18,this + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020b554  discord::raw::RawValue::is_json =====

/* discord::raw::RawValue::is_json() const */

bool __thiscall discord::raw::RawValue::is_json(RawValue *this)

{
  return *(int *)(this + 0x30) == 7 && this[8] == (RawValue)0x0;
}


// ===== 0020b56c  discord::raw::RawValue::is_hidden =====

/* discord::raw::RawValue::is_hidden() const */

bool __thiscall discord::raw::RawValue::is_hidden(RawValue *this)

{
  return *(int *)(this + 0x30) == 0;
}


// ===== 0020b57c  FUN_0020b57c =====

undefined8 FUN_0020b57c(void)

{
  return 2;
}


// ===== 0020b584  FUN_0020b584 =====

undefined8 FUN_0020b584(void)

{
  return 0;
}


// ===== 0020b58c  FUN_0020b58c =====

undefined8 FUN_0020b58c(void)

{
  return 0;
}


// ===== 0020b594  FUN_0020b594 =====

byte * FUN_0020b594(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  return pbVar1;
}


// ===== 0020b5a8  FUN_0020b5a8 =====

undefined8 FUN_0020b5a8(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}


// ===== 0020b5b0  FUN_0020b5b0 =====

undefined8 FUN_0020b5b0(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}


// ===== 0020b5b8  FUN_0020b5b8 =====

ulong FUN_0020b5b8(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  return uVar1;
}


// ===== 0020b5d0  FUN_0020b5d0 =====

long FUN_0020b5d0(undefined8 param_1,long *param_2)

{
  return param_2[1] - *param_2;
}


// ===== 0020b5dc  FUN_0020b5dc =====

undefined8 FUN_0020b5dc(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 8);
}


// ===== 0020b5e4  FUN_0020b5e4 =====

void FUN_0020b5e4(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert(param_2,pbVar1,*(undefined1 *)*param_1);
  return;
}


// ===== 0020b608  FUN_0020b608 =====

void FUN_0020b608(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0020baa4(param_2,*param_2,*param_1);
  return;
}


// ===== 0020b61c  FUN_0020b61c =====

void FUN_0020b61c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  size_t __n;
  undefined1 *puVar3;
  undefined1 *__src;
  vector<unsigned_char,boost::container::small_vector_allocator<unsigned_char,boost::container::new_allocator<void>,void>,void>
  avStack_28 [8];
  
  lVar2 = param_2[1];
  __src = (undefined1 *)*param_2;
  puVar3 = (undefined1 *)*param_1;
  if (param_2[2] == lVar2) {
    boost::container::
    vector<unsigned_char,boost::container::small_vector_allocator<unsigned_char,boost::container::new_allocator<void>,void>,void>
    ::
    priv_insert_forward_range_no_capacity<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<unsigned_char,boost::container::new_allocator<void>,void>,unsigned_char_const&>>
              (avStack_28,param_2,__src,1,puVar3);
  }
  else {
    puVar1 = __src + lVar2;
    if (lVar2 == 0) {
      *puVar1 = *puVar3;
      param_2[1] = param_2[1] + 1;
    }
    else {
      __n = (long)(puVar1 + -1) - (long)__src;
      *puVar1 = puVar1[-1];
      param_2[1] = param_2[1] + 1;
      if (__n != 0) {
        memmove(puVar1 + -__n,__src,__n);
      }
      *__src = *puVar3;
    }
  }
  return;
}


// ===== 0020b6c0  FUN_0020b6c0 =====

undefined8 FUN_0020b6c0(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}


// ===== 0020b6c8  FUN_0020b6c8 =====

byte * FUN_0020b6c8(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  return pbVar1;
}


// ===== 0020b6dc  FUN_0020b6dc =====

long FUN_0020b6dc(undefined8 param_1,long *param_2)

{
  return param_2[1] - *param_2;
}


// ===== 0020b6e8  FUN_0020b6e8 =====

ulong FUN_0020b6e8(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  return uVar1;
}


// ===== 0020b700  FUN_0020b700 =====

void FUN_0020b700(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0020baa4(param_2,*param_2,*param_1);
  return;
}


// ===== 0020b714  FUN_0020b714 =====

void FUN_0020b714(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert(param_2,pbVar1,*(undefined1 *)*param_1);
  return;
}


// ===== 0020b738  FUN_0020b738 =====

char * FUN_0020b738(void)

{
  return "hidden";
}


// ===== 0020b744  FUN_0020b744 =====

undefined1 * FUN_0020b744(void)

{
  return &DAT_001744b9;
}


// ===== 0020b750  FUN_0020b750 =====

undefined * FUN_0020b750(void)

{
  return &DAT_0016f3a3;
}


// ===== 0020b75c  FUN_0020b75c =====

undefined * FUN_0020b75c(void)

{
  return &DAT_00174f03;
}


// ===== 0020b768  FUN_0020b768 =====

undefined * FUN_0020b768(void)

{
  return &DAT_001701e9;
}


// ===== 0020b774  FUN_0020b774 =====

undefined * FUN_0020b774(void)

{
  return &DAT_0016dc6a;
}


// ===== 0020b780  FUN_0020b780 =====

char * FUN_0020b780(undefined8 param_1,long param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined1 uStack_19;
  undefined1 *local_18;
  
  if (*(uint *)(param_2 + 0x20) != 0xffffffff) {
    local_18 = &uStack_19;
    bVar1 = (*(code *)(&PTR_FUN_0030a908)[*(uint *)(param_2 + 0x20)])(&local_18);
    if (bVar1 < 3) {
      pcVar2 = &DAT_0017afa0 + *(int *)(&DAT_0017afa0 + (ulong)bVar1 * 4);
    }
    else {
      pcVar2 = "unknown_raw_bytes";
    }
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001b3508();
}


// ===== 0020b7f0  FUN_0020b7f0 =====

char * FUN_0020b7f0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "json";
  if (*param_2 != '\0') {
    pcVar1 = "unknown_raw_object";
  }
  pcVar2 = "hson";
  if (*param_2 != '\x01') {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}


// ===== 0020b820  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&>
          (__value_visitor *param_1,__base *param_2,__base *param_3)

{
  size_t sVar1;
  size_t sVar2;
  __base _Var3;
  __base _Var4;
  int iVar5;
  _func_decltype_auto *p_Var6;
  __base *p_Var7;
  ulong uVar8;
  __base *__s2;
  
  _Var3 = *param_2;
  _Var4 = *param_3;
  uVar8 = (ulong)((byte)_Var3 >> 1);
  sVar1 = uVar8;
  if (((byte)_Var3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  sVar2 = (ulong)((byte)_Var4 >> 1);
  if (((byte)_Var4 & 1) != 0) {
    sVar2 = *(size_t *)(param_3 + 8);
  }
  if (sVar1 == sVar2) {
    __s2 = *(__base **)(param_3 + 0x10);
    if (((byte)_Var4 & 1) == 0) {
      __s2 = param_3 + 1;
    }
    if (((byte)_Var3 & 1) == 0) {
      if ((byte)_Var3 < 2) {
        return (_func_decltype_auto *)0x1;
      }
      p_Var7 = param_2 + 1;
      do {
        uVar8 = uVar8 - 1;
        p_Var6 = (_func_decltype_auto *)(ulong)(*p_Var7 == *__s2);
        if (*p_Var7 != *__s2) {
          return p_Var6;
        }
        __s2 = __s2 + 1;
        p_Var7 = p_Var7 + 1;
      } while (uVar8 != 0);
      return p_Var6;
    }
    iVar5 = memcmp(*(void **)(param_2 + 0x10),__s2,*(size_t *)(param_2 + 8));
    return (_func_decltype_auto *)(ulong)(iVar5 == 0);
  }
  return (_func_decltype_auto *)0x0;
}


// ===== 0020b8d8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&>
          (__value_visitor *param_1,__base *param_2,__base *param_3)

{
  int iVar1;
  size_t __n;
  
  __n = *(long *)(param_2 + 8) - (long)*(void **)param_2;
  if (__n == *(long *)(param_3 + 8) - (long)*(void **)param_3) {
    iVar1 = memcmp(*(void **)param_2,*(void **)param_3,__n);
    return (_func_decltype_auto *)(ulong)(iVar1 == 0);
  }
  return (_func_decltype_auto *)0x0;
}


// ===== 0020b914  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::equal_to<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&>
          (__value_visitor *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != *(long *)(param_3 + 8)) {
    return (_func_decltype_auto *)0x0;
  }
  if (lVar4 != 0) {
    pcVar2 = *(char **)param_2;
    pcVar3 = *(char **)param_3;
    do {
      lVar4 = lVar4 + -1;
      p_Var1 = (_func_decltype_auto *)(ulong)(*pcVar2 == *pcVar3);
      if (*pcVar2 != *pcVar3) {
        return p_Var1;
      }
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (lVar4 != 0);
    return p_Var1;
  }
  return (_func_decltype_auto *)0x1;
}


// ===== 0020b968  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::less<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::less<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::less<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::less<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&>
          (__value_visitor *param_1,__base *param_2,__base *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  __base *__s2;
  __base *__s1;
  bool bVar3;
  int iVar4;
  
  __s2 = *(__base **)(param_3 + 0x10);
  bVar3 = ((byte)*param_3 & 1) == 0;
  if (bVar3) {
    __s2 = param_3 + 1;
  }
  uVar1 = (ulong)((byte)*param_3 >> 1);
  if (!bVar3) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  uVar2 = *(ulong *)(param_2 + 8);
  __s1 = *(__base **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    __s1 = param_2 + 1;
    uVar2 = (ulong)((byte)*param_2 >> 1);
  }
  __n = uVar1;
  if (uVar2 <= uVar1) {
    __n = uVar2;
  }
  iVar4 = memcmp(__s1,__s2,__n);
  bVar3 = uVar2 < uVar1;
  if (iVar4 != 0) {
    bVar3 = iVar4 < 0;
  }
  return (_func_decltype_auto *)(ulong)bVar3;
}


// ===== 0020b9d4  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::less<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::less<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> >
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::less<void>
   > >&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >,
   boost::container::small_vector<unsigned char, 8ul, void, void> > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<std::__ndk1::__convert_to_bool<std::__ndk1::less<void>>>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>,boost::container::small_vector<unsigned_char,8ul,void,void>>const&>
          (__value_visitor *param_1,__base *param_2,__base *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (*(byte **)param_3 == *(byte **)(param_3 + 8)) {
    return (_func_decltype_auto *)0x0;
  }
  pbVar2 = *(byte **)param_2;
  pbVar1 = *(byte **)param_3;
  while( true ) {
    pbVar3 = pbVar1 + 1;
    if (pbVar2 == *(byte **)(param_2 + 8)) {
      return (_func_decltype_auto *)0x1;
    }
    if (*pbVar2 < *pbVar1) break;
    if ((*pbVar1 < *pbVar2) ||
       (pbVar2 = pbVar2 + 1, pbVar1 = pbVar3, pbVar3 == *(byte **)(param_3 + 8))) {
      return (_func_decltype_auto *)0x0;
    }
  }
  return (_func_decltype_auto *)0x1;
}


